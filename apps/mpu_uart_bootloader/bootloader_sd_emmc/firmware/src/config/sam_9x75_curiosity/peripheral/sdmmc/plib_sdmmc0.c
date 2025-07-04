/*******************************************************************************
  SDMMC0 PLIB

  Company:
    Microchip Technology Inc.

  File Name:
    plib_sdmmc0.c

  Summary:
    SDMMC0 PLIB Implementation File

  Description:
    None

*******************************************************************************/

/*******************************************************************************
* Copyright (C) 2019 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
#include "device.h"
#include "plib_sdmmc0.h"


// *****************************************************************************
// *****************************************************************************
// Section: Include Files
// *****************************************************************************
// *****************************************************************************

#include "plib_sdmmc_common.h"
#include "interrupts.h"

#define SDMMC0_DMA_NUM_DESCR_LINES              1U
#define SDMMC0_HCLOCK_FREQUENCY                 266667000U
#define SDMMC0_BASECLK_FREQUENCY                66667000U
#define SDMMC0_MULTCLK_FREQUENCY                133333000U
#define SDMMC0_DMA_DESC_TABLE_SIZE   (8 * 1)
#define SDMMC0_DMA_DESC_TABLE_SIZE_CACHE_ALIGN   (SDMMC0_DMA_DESC_TABLE_SIZE + ((SDMMC0_DMA_DESC_TABLE_SIZE % CACHE_LINE_SIZE)? (CACHE_LINE_SIZE - (SDMMC0_DMA_DESC_TABLE_SIZE % CACHE_LINE_SIZE)) : 0))

#define SDMMC0_MAX_SUPPORTED_SDCLK_FREQUENCY    50000000UL

#define SDMMC0_MAX_SUPPORTED_DIVIDER            0x3FFU

#define SDMMC0_MAX_BLOCK_SIZE                   0x200U

#define SDMMC0_MAX_ADMA2_TRANSFER_SIZE          0x10000U

#define SDMMC0_MAX_DMA_TRANSFER_SIZE            (SDMMC0_MAX_ADMA2_TRANSFER_SIZE * SDMMC0_DMA_NUM_DESCR_LINES)


/* Absolute difference between two 32 bit integers */
static inline uint32_t SDMMC0_ABS_DIFF_U32(uint32_t a, uint32_t b)
{
  return (a < b) ? (b - a) : (a - b);
}

/* Divide two 32 bit integers with dividend rounded upto the next divisor */
static inline uint32_t SDMMC0_CEIL_INT_DIV_U32(uint32_t n, uint32_t d)
{
  return  ((n + d - 1U) / d);
}

/* Minimum value among two 32 bit integers */
static inline uint32_t SDMMC0_MIN_U32 (uint32_t a, uint32_t b)
{
  return (a > b) ? b : a;
}

static CACHE_ALIGN SDMMC_ADMA_DESCR sdmmc0DmaDescrTable[(SDMMC0_DMA_DESC_TABLE_SIZE_CACHE_ALIGN/8)];

static volatile SDMMC_OBJECT sdmmc0Obj;

static void SDMMC0_InitVariables ( void )
{
    sdmmc0Obj.errorStatus = 0;
    sdmmc0Obj.isCmdInProgress = false;
    sdmmc0Obj.isDataInProgress = false;
    sdmmc0Obj.callback = NULL;
}

static void SDMMC0_SetTransferMode ( uint32_t opcode, SDMMC_DataTransferFlags transferFlags )
{
    uint16_t transferMode = 0;

    switch (opcode)
    {
        case SDMMC_CMD_READ_SCR:
        case SDMMC_CMD_SET_BUS_WIDTH:
        case SDMMC_CMD_READ_SINGLE_BLOCK:
            /* Read single block of data from the device. */
            transferMode = (SDMMC_TMR_DMAEN_ENABLED | SDMMC_TMR_DTDSEL_Msk);
            break;

        case SDMMC_CMD_READ_MULTI_BLOCK:
            /* Read multiple blocks of data from the device. */
            transferMode = (SDMMC_TMR_DMAEN_ENABLED | SDMMC_TMR_DTDSEL_Msk | SDMMC_TMR_MSBSEL_Msk | SDMMC_TMR_BCEN_Msk);
            break;

        case SDMMC_CMD_WRITE_SINGLE_BLOCK:
            /* Write single block of data to the device. */
            transferMode = SDMMC_TMR_DMAEN_ENABLED;
            break;

        case SDMMC_CMD_WRITE_MULTI_BLOCK:
            /* Write multiple blocks of data to the device. */
            transferMode = (SDMMC_TMR_DMAEN_ENABLED | SDMMC_TMR_MSBSEL_Msk | SDMMC_TMR_BCEN_Msk);
            break;

        case SDMMC_CMD_IO_RW_EXT:
            if (transferFlags.transferType == SDMMC_DATA_TRANSFER_TYPE_SDIO_BLOCK)
            {
                transferMode = SDMMC_TMR_MSBSEL_Msk | SDMMC_TMR_BCEN_Msk;
            }
            if (transferFlags.transferDir == SDMMC_DATA_TRANSFER_DIR_READ)
            {
                transferMode |= SDMMC_TMR_DTDSEL_Msk;
            }
            transferMode |= SDMMC_TMR_DMAEN_ENABLED;
            break;

        default:  /* Do Nothing */
            break;
    }

    SDMMC0_REGS->SDMMC_TMR = transferMode;
}

void __attribute__((used)) SDMMC0_InterruptHandler( void )
{
    uint16_t nistr = 0;
    uint16_t eistr = 0;
    SDMMC_XFER_STATUS xferStatus = SDMMC_XFER_STATUS_IDLE;
    /* Additional temporary variable used to prevent MISRA violations (Rule 13.x) */
    uintptr_t context = sdmmc0Obj.context;

    nistr = SDMMC0_REGS->SDMMC_NISTR;
    eistr = SDMMC0_REGS->SDMMC_EISTR;
    /* Save the error in a global variable for later use */
    sdmmc0Obj.errorStatus |= eistr;

    if (sdmmc0Obj.isCmdInProgress == true)
    {
        if ((nistr & (SDMMC_NISTR_SD_SDIO_CMDC_Msk | SDMMC_NISTR_SD_SDIO_TRFC_Msk | SDMMC_NISTR_SD_SDIO_ERRINT_Msk)) != 0U)
        {
            if ((nistr & SDMMC_NISTR_SD_SDIO_ERRINT_Msk) != 0U)
            {
                if ((eistr & (SDMMC_EISTR_SD_SDIO_CMDTEO_Msk | \
                                      SDMMC_EISTR_SD_SDIO_CMDCRC_Msk | \
                                      SDMMC_EISTR_SD_SDIO_CMDEND_Msk | \
                                      SDMMC_EISTR_SD_SDIO_CMDIDX_Msk)) != 0U)
                {
                    SDMMC0_ErrorReset (SDMMC_RESET_CMD);
                }
            }
            sdmmc0Obj.isCmdInProgress = false;
            xferStatus |= SDMMC_XFER_STATUS_CMD_COMPLETED;
        }
    }

    if (sdmmc0Obj.isDataInProgress == true)
    {
        if ((nistr & (SDMMC_NISTR_SD_SDIO_TRFC_Msk | SDMMC_NISTR_SD_SDIO_DMAINT_Msk | SDMMC_NISTR_SD_SDIO_ERRINT_Msk)) != 0U)
        {
            if ((nistr & SDMMC_NISTR_SD_SDIO_ERRINT_Msk) != 0U)
            {
                if ((eistr & (SDMMC_EISTR_SD_SDIO_DATTEO_Msk | \
                            SDMMC_EISTR_SD_SDIO_DATCRC_Msk | \
                            SDMMC_EISTR_SD_SDIO_DATEND_Msk)) != 0U)
                {
                    SDMMC0_ErrorReset (SDMMC_RESET_DAT);
                }
            }
            if ((nistr & SDMMC_NISTR_SD_SDIO_TRFC_Msk) != 0U)
            {
                /* Clear the data timeout error as transfer complete has higher priority */
                sdmmc0Obj.errorStatus &= ~SDMMC_EISTR_SD_SDIO_DATTEO_Msk;
            }
            sdmmc0Obj.isDataInProgress = false;
            xferStatus |= SDMMC_XFER_STATUS_DATA_COMPLETED;
        }
    }

    /* Clear normal interrupt and error status bits that have been processed */
    SDMMC0_REGS->SDMMC_NISTR = nistr;
    SDMMC0_REGS->SDMMC_EISTR = eistr;

    if ((sdmmc0Obj.callback != NULL) && (xferStatus != SDMMC_XFER_STATUS_IDLE))
    {
        sdmmc0Obj.callback(xferStatus, context);
    }
}

void SDMMC0_ErrorReset ( SDMMC_RESET_TYPE resetType )
{
    SDMMC0_REGS->SDMMC_SRR = (uint8_t)resetType;

    /* Wait until host resets the error status */
    while ((SDMMC0_REGS->SDMMC_SRR & resetType) != 0U)
    {
        /* Do Nothing */
    }
}

uint16_t SDMMC0_ErrorGet( void )
{
    return sdmmc0Obj.errorStatus;
}

uint16_t SDMMC0_CommandErrorGet( void )
{
    return (sdmmc0Obj.errorStatus & (SDMMC_EISTR_SD_SDIO_CMDTEO_Msk | SDMMC_EISTR_SD_SDIO_CMDCRC_Msk | \
                SDMMC_EISTR_SD_SDIO_CMDEND_Msk | SDMMC_EISTR_SD_SDIO_CMDIDX_Msk));
}

uint16_t SDMMC0_DataErrorGet( void )
{
    return (sdmmc0Obj.errorStatus & (SDMMC_EISTR_SD_SDIO_ADMA_Msk | SDMMC_EISTR_SD_SDIO_DATTEO_Msk | \
            SDMMC_EISTR_SD_SDIO_DATCRC_Msk | SDMMC_EISTR_SD_SDIO_DATEND_Msk));
}

void SDMMC0_BusWidthSet ( SDMMC_BUS_WIDTH busWidth )
{
    if (busWidth == SDMMC_BUS_WIDTH_4_BIT)
    {
        SDMMC0_REGS->SDMMC_HC1R |= SDMMC_HC1R_SD_SDIO_DW_4_BIT;
    }
    else
    {
        SDMMC0_REGS->SDMMC_HC1R &= ~SDMMC_HC1R_SD_SDIO_DW_4_BIT;
    }
}

void SDMMC0_SpeedModeSet ( SDMMC_SPEED_MODE speedMode )
{
    if (speedMode == SDMMC_SPEED_MODE_HIGH)
    {
       SDMMC0_REGS->SDMMC_HC1R |= SDMMC_HC1R_SD_SDIO_HSEN_Msk;
    }
    else
    {
       SDMMC0_REGS->SDMMC_HC1R &= ~SDMMC_HC1R_SD_SDIO_HSEN_Msk;
    }
}

bool SDMMC0_IsCmdLineBusy ( void )
{
    return(((SDMMC0_REGS->SDMMC_PSR & SDMMC_PSR_CMDINHC_Msk) == SDMMC_PSR_CMDINHC_Msk)? true : false);
}

bool SDMMC0_IsDatLineBusy ( void )
{
    return (((SDMMC0_REGS->SDMMC_PSR & SDMMC_PSR_CMDINHD_Msk) == SDMMC_PSR_CMDINHD_Msk)? true : false);
}

void SDMMC0_BlockSizeSet ( uint16_t blockSize )
{
    if(blockSize == 0U)
    {
        blockSize = 1U;
    }
    else if(blockSize > SDMMC0_MAX_BLOCK_SIZE)
    {
        blockSize = SDMMC0_MAX_BLOCK_SIZE;
    }
    else
    {
      /* Do not modify the block size */
    }
    SDMMC0_REGS->SDMMC_BSR = (SDMMC_BSR_BOUNDARY_4K | SDMMC_BSR_BLKSIZE(blockSize));
}

void SDMMC0_BlockCountSet ( uint16_t numBlocks )
{
    SDMMC0_REGS->SDMMC_BCR = numBlocks;
}

void SDMMC0_ClockEnable ( void )
{
    /* Start the internal clock  */
    SDMMC0_REGS->SDMMC_CCR |= SDMMC_CCR_INTCLKEN_Msk;

    /* Wait for internal clock to stabilize */
    while ((SDMMC0_REGS->SDMMC_CCR & SDMMC_CCR_INTCLKS_Msk) == 0U)
    {
        /* Do Nothing */
    }

    /* Enable the SD Clock */
    SDMMC0_REGS->SDMMC_CCR |= SDMMC_CCR_SDCLKEN_Msk;
}

void SDMMC0_ClockDisable ( void )
{
    SDMMC0_REGS->SDMMC_CCR &= ~(SDMMC_CCR_INTCLKEN_Msk | SDMMC_CCR_SDCLKEN_Msk);
}

void SDMMC0_DmaSetup (
    uint8_t* buffer,
    uint32_t numBytes,
    SDMMC_DATA_TRANSFER_DIR direction
)
{
  (void)direction;

    /* Each ADMA2 descriptor can transfer 65536 bytes (or 128 blocks) of data.
     * Block count register being a 16 bit register, maximum number of blocks is
     * limited to 65536 blocks. Hence, combined length of data that can be
     * transferred by all the descriptors is 512 bytes x 65536 blocks, assuming
     * a block size of 512 bytes.
     */

    if (numBytes <= 65536U)
    {
        sdmmc0DmaDescrTable[0].address = (uint32_t)(buffer);
        sdmmc0DmaDescrTable[0].length = (uint16_t)numBytes;
        sdmmc0DmaDescrTable[0].attribute = \
            (SDMMC_DESC_TABLE_ATTR_XFER_DATA | SDMMC_DESC_TABLE_ATTR_VALID | SDMMC_DESC_TABLE_ATTR_INTR);


        /* The last descriptor line must indicate the end of the descriptor list */
        sdmmc0DmaDescrTable[0].attribute |= (uint16_t)(SDMMC_DESC_TABLE_ATTR_END);

        /* Clean the cache associated with the modified descriptors */
        DCACHE_CLEAN_BY_ADDR(sdmmc0DmaDescrTable, (int32_t)(sizeof(SDMMC_ADMA_DESCR)));

        /* Set the starting address of the descriptor table */
        SDMMC0_REGS->SDMMC_ASAR0 = (uint32_t)(&sdmmc0DmaDescrTable[0]);
    }
}


bool SDMMC0_ClockSet ( uint32_t freq )
{
    const uint32_t base_clk_freq = SDMMC0_BASECLK_FREQUENCY;
    const uint32_t mult_clk_freq = SDMMC0_MULTCLK_FREQUENCY;
    bool use_prog_mode = false;
    uint32_t new_div_freq = 0;
    uint32_t prog_div = 0;
    uint32_t new_prog_freq = 0;
    uint32_t divs = 0;
    uint16_t reg_val = 0;
    bool hs_mode = freq > SDMMC_CLOCK_FREQ_DS_25_MHZ;

    /* Limit frequency to max supported */
    freq = SDMMC0_MIN_U32(freq, SDMMC0_MAX_SUPPORTED_SDCLK_FREQUENCY);

    /* Find the divider in the divided clock mode: DIV = FBASECLK / (2 * FSDCLK)  */
    divs = SDMMC0_CEIL_INT_DIV_U32(base_clk_freq, 2U * freq);

    /* Limit the divider to maximum supported */
    if (divs > SDMMC0_MAX_SUPPORTED_DIVIDER)
    {
        divs = SDMMC0_MAX_SUPPORTED_DIVIDER;
    }

    /* IP limitation: if high speed mode is active, divider must be non zero */
    else if (hs_mode && (0U == divs))
    {
        divs =  1U;
    }
    else
    {
        /* Do Nothing */
    }

    /* target frequency if divider mode is used */
    new_div_freq = base_clk_freq / ((divs == 0U) ? 1UL : (2U* divs));

    /* Check if programmable clock is enabled */
    if(((SDMMC0_REGS->SDMMC_CA1R & SDMMC_CA1R_CLKMULT_Msk) >> SDMMC_CA1R_CLKMULT_Pos) != 0U)
    {
      /*Find the divider in the programmable clock mode: DIV = (FMULTCLK / FSDCLK) - 1 */
      prog_div = SDMMC0_CEIL_INT_DIV_U32(mult_clk_freq, freq);

      /* Limit the divider to the maximum possible value */
      if(prog_div > SDMMC0_MAX_SUPPORTED_DIVIDER)
      {
        prog_div = SDMMC0_MAX_SUPPORTED_DIVIDER;
      }
      /* IP limitation, if high speed mode is active divider must be non zero */
      else if (hs_mode && (prog_div < 1U))
      {
          prog_div = 1U;
      }
      /* DIV counts from zero */
      else if (prog_div > 0U)
      {
        prog_div = prog_div - 1U;
      }
      else
      {
          /* Do Nothing */
      }
      /* target frequency if programmable clock mode is used */
      new_prog_freq = mult_clk_freq / (prog_div + 1U);

      /* decide on what mode to use based on the least delta from target */
      use_prog_mode = (SDMMC0_ABS_DIFF_U32(freq, new_prog_freq) < SDMMC0_ABS_DIFF_U32(freq, new_div_freq));
    }

    /* Stop the output clock, so we can change the frequency.
    * Deviation from the SD Host Controller Specification: if the internal
    * clock was temporarily disabled, the controller would then switch to
    * an irrelevant clock frequency, hence keep the SDMMC internal clock enabled. */
    reg_val = SDMMC0_REGS->SDMMC_CCR & ~SDMMC_CCR_SDCLKEN_Msk;
    SDMMC0_REGS->SDMMC_CCR = reg_val;
    if (hs_mode)
    {
        /* Enable the high speed mode */
        SDMMC0_REGS->SDMMC_HC1R |= SDMMC_HC1R_SD_SDIO_HSEN_Msk;
    }
    else
    {
        /* Clear the high speed mode */
        SDMMC1_REGS->SDMMC_HC1R &= ~SDMMC_HC1R_SD_SDIO_HSEN_Msk;
    }

    /* Select the clock mode and divider */
    if (use_prog_mode)
    {
        reg_val |= SDMMC_CCR_CLKGSEL_Msk;
        reg_val =   (reg_val & ~SDMMC_CCR_USDCLKFSEL_Msk & ~SDMMC_CCR_SDCLKFSEL_Msk)
                    | SDMMC_CCR_USDCLKFSEL(prog_div >> 8)
                    | SDMMC_CCR_SDCLKFSEL(prog_div & 0xffU)
                    | SDMMC_CCR_INTCLKEN_Msk;
    }
    else
    {
        reg_val &= ~SDMMC_CCR_CLKGSEL_Msk;
        reg_val =   (reg_val & ~SDMMC_CCR_USDCLKFSEL_Msk & ~SDMMC_CCR_SDCLKFSEL_Msk)
                    | SDMMC_CCR_USDCLKFSEL(divs >> 8)
                    | SDMMC_CCR_SDCLKFSEL(divs & 0xffU)
                    | SDMMC_CCR_INTCLKEN_Msk;
    }

    /* Start the internal clock (if not started already) and wait for it to stabilize */
    SDMMC0_REGS->SDMMC_CCR = reg_val;
    while ((SDMMC0_REGS->SDMMC_CCR & SDMMC_CCR_INTCLKS_Msk) == 0U)
    {
        /* Do Nothing */
    }

    /* Start the output clock */
    SDMMC0_REGS->SDMMC_CCR |= SDMMC_CCR_SDCLKEN_Msk;

    return true;
}


void SDMMC0_ResponseRead (
    SDMMC_READ_RESPONSE_REG respReg,
    uint32_t* response
)
{
    switch (respReg)
    {
        case SDMMC_READ_RESP_REG_1:
            *response = SDMMC0_REGS->SDMMC_RR[1];
            break;

        case SDMMC_READ_RESP_REG_2:
            *response = SDMMC0_REGS->SDMMC_RR[2];
            break;

        case SDMMC_READ_RESP_REG_3:
            *response = SDMMC0_REGS->SDMMC_RR[3];
            break;

        case SDMMC_READ_RESP_REG_ALL:
            response[0] = SDMMC0_REGS->SDMMC_RR[0];
            response[1] = SDMMC0_REGS->SDMMC_RR[1];
            response[2] = SDMMC0_REGS->SDMMC_RR[2];
            response[3] = SDMMC0_REGS->SDMMC_RR[3];
            break;

        case SDMMC_READ_RESP_REG_0:
        default:
            *response = SDMMC0_REGS->SDMMC_RR[0];
            break;
    }
}

void SDMMC0_CommandSend (
    uint8_t opCode,
    uint32_t argument,
    uint8_t respType,
    SDMMC_DataTransferFlags transferFlags
)
{
    uint16_t cmd = 0;
    uint16_t normalIntSigEnable = 0;
    uint8_t flags = 0U;

    /* Clear the flags */
    sdmmc0Obj.isCmdInProgress = false;
    sdmmc0Obj.isDataInProgress = false;
    sdmmc0Obj.errorStatus = 0;

    /* For R1B response, only TRFC interrupt is enabled. However, peripheral will set both CMDC and TRFC bits in the NISTR status register.
     * Now, when interrupt occurs, TRFC bit is set first and after sometime the CMDC bit is set. As a result, in the interrupt handler, only
     * the TRFC bit is cleared, leaving the CMDC bit set, which does not get cleared because the corresponding interrupt is not enabled for
     * R1B responses. Enabling both TRFC and CMDC interrupts for R1B may lead to interrupt handler being called twice since these two bits
     * are set (and hence cleared) at slightly different times. Hence, clearing it before submitting a new command seems to be the best option.
     */

     SDMMC0_REGS->SDMMC_NISTR = (SDMMC_NISTR_SD_SDIO_CMDC_Msk | SDMMC_NISTR_SD_SDIO_TRFC_Msk);


    switch (respType)
    {
        case SDMMC_CMD_RESP_R1:
        case SDMMC_CMD_RESP_R5:
        case SDMMC_CMD_RESP_R6:
        case SDMMC_CMD_RESP_R7:
            flags = (SDMMC_CR_RESPTYP_RL48 | SDMMC_CR_CMDCCEN_Msk | SDMMC_CR_CMDICEN_Msk);
            break;

        case SDMMC_CMD_RESP_R3:
        case SDMMC_CMD_RESP_R4:
            flags = SDMMC_CR_RESPTYP_RL48;
            break;

        case SDMMC_CMD_RESP_R1B:
            flags = (SDMMC_CR_RESPTYP_RL48BUSY | SDMMC_CR_CMDCCEN_Msk | SDMMC_CR_CMDICEN_Msk);

            /* Commands with busy response will wait for transfer complete bit */
            normalIntSigEnable |= SDMMC_NISIER_SD_SDIO_TRFC_Msk;
            break;

        case SDMMC_CMD_RESP_R2:
            flags = (SDMMC_CR_RESPTYP_RL136 | SDMMC_CR_CMDCCEN_Msk);
            break;

        default:
            flags = SDMMC_CR_RESPTYP_NORESP;
            break;
    }

    /* Enable command complete interrupt, for commands that do not have busy response type */
    if (respType != SDMMC_CMD_RESP_R1B)
    {
        normalIntSigEnable |= SDMMC_NISIER_SD_SDIO_CMDC_Msk;
    }

    if (transferFlags.isDataPresent == true)
    {
        sdmmc0Obj.isDataInProgress = true;
        SDMMC0_SetTransferMode(opCode, transferFlags);
        /* Enable data transfer complete and DMA interrupt */
        normalIntSigEnable |= (SDMMC_NISIER_SD_SDIO_TRFC_Msk | SDMMC_NISIER_SD_SDIO_DMAINT_Msk);
    }
    else
    {
        SDMMC0_REGS->SDMMC_TMR = 0U;
    }

    /* Enable the needed normal interrupt signals */
    SDMMC0_REGS->SDMMC_NISIER = normalIntSigEnable;

    /* Enable all the error interrupt signals */
    SDMMC0_REGS->SDMMC_EISIER = SDMMC_EISIER_SD_SDIO_Msk;

    SDMMC0_REGS->SDMMC_ARG1R = argument;

    sdmmc0Obj.isCmdInProgress = true;

    cmd = (SDMMC_CR_CMDIDX(opCode) | ((uint8_t)transferFlags.isDataPresent << SDMMC_CR_DPSEL_Pos) | flags);
    SDMMC0_REGS->SDMMC_CR = cmd;
}

void SDMMC0_ModuleInit( void )
{
    /* Reset module*/
    SDMMC0_REGS->SDMMC_SRR = SDMMC_SRR_SWRSTALL_Msk;
    while((SDMMC0_REGS->SDMMC_SRR & SDMMC_SRR_SWRSTALL_Msk) == SDMMC_SRR_SWRSTALL_Msk)
    {
        /* Do Nothing */
    }

    /* Set timeout control register */
    SDMMC0_REGS->SDMMC_TCR = SDMMC_TCR_DTCVAL(0xE);

    /* Configure maximum AHB burst size */
    SDMMC0_REGS->SDMMC_ACR = SDMMC_ACR_BMAX_INCR16;

    /* Enable ADMA2 */
    SDMMC0_REGS->SDMMC_HC1R = SDMMC_HC1R_SD_SDIO_DMASEL_ADMA32;

    /* Clear the normal and error interrupt status flags */
    SDMMC0_REGS->SDMMC_EISTR = SDMMC_EISTR_SD_SDIO_Msk;
    SDMMC0_REGS->SDMMC_NISTR = SDMMC_NISTR_SD_SDIO_Msk;

    /* Enable normal and error interrupts that are used  */
    SDMMC0_REGS->SDMMC_NISTER = SDMMC_NISTER_SD_SDIO_Msk;
    SDMMC0_REGS->SDMMC_EISTER = SDMMC_EISTER_SD_SDIO_Msk;

    /* Set SD Bus Power On */
    /* (NOTE: Perform a read/modify write to preserve the values of the
        reserved bits */
    SDMMC0_REGS->SDMMC_PCR |= SDMMC_PCR_SDBPWR_Msk;

    /* Set initial clock to 400 KHz*/
    (void) SDMMC0_ClockSet (SDMMC_CLOCK_FREQ_400_KHZ);
}

void SDMMC0_Initialize( void )
{
    SDMMC0_InitVariables();
    SDMMC0_ModuleInit();
}

void SDMMC0_CallbackRegister( SDMMC_CALLBACK callback, uintptr_t contextHandle )
{
    if (callback != NULL)
    {
        sdmmc0Obj.callback = callback;
        sdmmc0Obj.context = contextHandle;
    }
}
