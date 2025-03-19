/*******************************************************************************
  Non-Volatile Memory Controller(FCW) PLIB.

  Company:
    Microchip Technology Inc.

  File Name:
    plib_fcw.c

  Summary:
    Interface definition of FCW Plib.

  Description:
    This file defines the interface for the FCW Plib.
    It allows user to Program, Erase and lock the on-chip Non Volatile Flash
    Memory.
*******************************************************************************/

// DOM-IGNORE-BEGIN
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
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <string.h>
#include "plib_fcw.h"
#include "device_cache.h"

/* ************************************************************************** */
/* ************************************************************************** */
/* Section: File Scope or Global Data                                         */
/* ************************************************************************** */
/* ************************************************************************** */
// *****************************************************************************

/*******************************************
 * Internal operation type
 ******************************************/
typedef enum
{
    PROGRAM_ERASE_OPERATION                 = 0x7,
    PAGE_ERASE_OPERATION                    = 0x4,
    ROW_PROGRAM_OPERATION                   = 0x3,
    QUAD_WORD_PROGRAM_OPERATION             = 0x2,
    SINGLE_WORD_PROGRAM_OPERATION           = 0x1,
    NO_OPERATION                            = 0x0,
} FCW_OPERATION_MODE;

/*******************************************
 * Internal Flash Programming Unlock Keys
 ******************************************/
typedef enum
{
    FCW_UNLOCK_WRKEY = 0x91C32C01,
    FCW_UNLOCK_SWAPKEY = 0x91C32C02,
    FCW_UNLOCK_CFGKEY = 0x91C32C04
} FCW_UNLOCK_KEY;


/* ************************************************************************** */
/* ************************************************************************** */
// Section: Local Functions                                                   */
/* ************************************************************************** */
/* ************************************************************************** */

// *****************************************************************************
// *****************************************************************************
// Section: FCW Implementation
// *****************************************************************************
// *****************************************************************************
void FCW_PFM_PageWriteProtectRestore(uint32_t* pwp_region)
{
    for (uint32_t region = 0; region < FCW_PWP_REGIONS; region++)
    {
        if (*pwp_region & (1 << region))
        {
           FCW_PFM_WriteProtectEnable(region);
        }
    }
}

bool FCW_PFM_PageWriteProtectDisable(uint32_t pageStartAddr, uint32_t* pwp_region)
{
    uint32_t region_start_addr;
    uint32_t region_end_addr;
    bool status = false;

    *pwp_region = 0;

    if ((pageStartAddr >= FCW_FLASH_START_ADDRESS) && (pageStartAddr < (FCW_FLASH_START_ADDRESS + FCW_FLASH_PFM_SIZE)))
    {
        for (uint32_t region = 0; region < FCW_PWP_REGIONS; region++)
        {
            if (FCW_REGS->FCW_PWP[region] & FCW_PWP_PWPEN_Msk)
            {
                region_start_addr = FCW_FLASH_START_ADDRESS;
                region_start_addr += (FCW_REGS->FCW_PWP[region] & FCW_PWP_PWPBASE_Msk >> FCW_PWP_PWPBASE_Pos) << 12U;

                region_end_addr = region_start_addr;

                region_end_addr += ((FCW_REGS->FCW_PWP[region] & FCW_PWP_PWPSIZE_Msk) + 1) << 12U;

                if (pageStartAddr >= region_start_addr && pageStartAddr < region_end_addr)
                {
                    FCW_PFM_WriteProtectDisable(region);
                    status = true;
                    *pwp_region |= (1 << region);
                }
            }
        }
    }

    return status;
}


static void FCW_UnlockSequence(FCW_UNLOCK_KEY key)
{
    FCW_REGS->FCW_KEY = (uint32_t)key;
}

static void FCW_StartOperationAtAddress( uint32_t address,  FCW_OPERATION_MODE operation )
{

    FCW_REGS->FCW_ADDR = address;

    // Set the flash operation:
    /***************************************************************************
     * Page erase: Erases the entire page which includes the target address
     *    (ADDR) if it is not write-protected.
     * Double Word (64-bit) program: Programs the 64 bit word in DATA[0] and DATA[1]
     *    to the flash address selected by ADDR, if it is not write-protected.
     * Quad Double Word (256-bit) program: Programs the 256 bit in DATA[0]
     *    through DATA[7] to flash address selected by ADDR, if it they are
     *    not write-protected.
     * Row program: Programs the entire row from the physical address in
     *    SRCADDR to the flash address selected by ADDR if it is not
     *    write-protected
     **************************************************************************/


    FCW_UnlockSequence(FCW_UNLOCK_WRKEY);
    FCW_REGS->FCW_CTRLOP = FCW_CTRLOP_PREPG_Msk | (FCW_CTRLOP_NVMOP_Msk & (((uint32_t)operation) << FCW_CTRLOP_NVMOP_Pos));
}

/* ************************************************************************** */
/* ************************************************************************** */
// Section: Interface Functions                                               */
/* ************************************************************************** */
/* ************************************************************************** */

void FCW_Initialize( void )
{
    while(((FCW_REGS->FCW_STATUS & FCW_STATUS_BUSY_Msk)) != 0U)
    {
        /* Do Nothing */
    }

    FCW_StartOperationAtAddress( FCW_REGS->FCW_ADDR,  NO_OPERATION );
}

bool FCW_Read( uint32_t *data, uint32_t length, const uint32_t address )
{
    /* Add this as per the misra rule 11.6 */
    uint32_t *xaddress = (uint32_t *)address;
    (void) memcpy(data, xaddress, length);

    return true;
}

bool FCW_SingleWordWrite( uint32_t *data, uint32_t address )
{
    while(((FCW_REGS->FCW_STATUS & FCW_STATUS_BUSY_Msk)) != 0U)
    {
        /* Do Nothing */
    }

    FCW_REGS->FCW_DATA[0] = *data;
    data++;

    FCW_StartOperationAtAddress( address,  SINGLE_WORD_PROGRAM_OPERATION);

    return true;
}

bool FCW_QuadWordWrite( uint32_t *data, uint32_t address )
{
    while(((FCW_REGS->FCW_STATUS & FCW_STATUS_BUSY_Msk)) != 0U)
    {
        /* Do Nothing */
    }

    FCW_REGS->FCW_DATA[0] = *data;
    data++;
    FCW_REGS->FCW_DATA[1] = *data;
    data++;
    FCW_REGS->FCW_DATA[2] = *data;
    data++;
    FCW_REGS->FCW_DATA[3] = *data;
    data++;

    FCW_StartOperationAtAddress( address,  QUAD_WORD_PROGRAM_OPERATION);

    return true;
}

bool FCW_RowWrite( uint32_t *data, uint32_t address )
{
    while(((FCW_REGS->FCW_STATUS & FCW_STATUS_BUSY_Msk)) != 0U)
    {
        /* Do Nothing */
    }


    FCW_REGS->FCW_SRCADDR = (uint32_t )(data);

    FCW_StartOperationAtAddress( address,  ROW_PROGRAM_OPERATION);

    return true;
}

bool FCW_PageErase( uint32_t address )
{
    while(((FCW_REGS->FCW_STATUS & FCW_STATUS_BUSY_Msk)) != 0U)
    {
        /* Do Nothing */
    }

    FCW_StartOperationAtAddress(address,  PAGE_ERASE_OPERATION);

    return true;
}

FCW_ERROR FCW_ErrorGet( void )
{
    return(FCW_REGS->FCW_INTFLAG & (~FCW_INTFLAG_DONE_Msk));
}

bool FCW_IsBusy( void )
{
    return ((FCW_REGS->FCW_STATUS & FCW_STATUS_BUSY_Msk) != 0U);
}

void FCW_ProgramFlashBankSelect(PROGRAM_FLASH_BANK pfmBank)
{
    while(((FCW_REGS->FCW_STATUS & FCW_STATUS_BUSY_Msk)) != 0U)
    {
        /* Do Nothing */
    }

    FCW_UnlockSequence(FCW_UNLOCK_SWAPKEY);

    if (pfmBank == PROGRAM_FLASH_BANK_1)
    {
        FCW_REGS->FCW_SWAP &= (~FCW_SWAP_PFSWAP_Msk);
    }
    else
    {
        FCW_REGS->FCW_SWAP |= (FCW_SWAP_PFSWAP_Msk);
    }
}

PROGRAM_FLASH_BANK FCW_ProgramFlashBankGet(void)
{
    return((PROGRAM_FLASH_BANK)((FCW_REGS->FCW_SWAP & FCW_SWAP_PFSWAP_Msk) >> FCW_SWAP_PFSWAP_Pos));
}

void FCW_PFM_WriteProtectRegionSetup( PFM_WP_REGION region, PFM_WP_REGION_SETUP setupStruct )
{
    while(((FCW_REGS->FCW_STATUS & FCW_STATUS_BUSY_Msk)) != 0U)
    {
        /* Do Nothing */
    }


    FCW_UnlockSequence(FCW_UNLOCK_CFGKEY);
    FCW_REGS->FCW_PWP[region] = (FCW_PWP_PWPBASE(setupStruct.regionBaseAddress) | \
                                                     FCW_PWP_PWPSIZE(setupStruct.regionSize) | \
                                                     FCW_PWP_PWPMIR((uint32_t)(setupStruct.mirrorEnable)));
}

void FCW_PFM_WriteProtectEnable(PFM_WP_REGION region)
{
    while(((FCW_REGS->FCW_STATUS & FCW_STATUS_BUSY_Msk)) != 0U)
    {
        /* Do Nothing */
    }

    FCW_UnlockSequence(FCW_UNLOCK_CFGKEY);

    FCW_REGS->FCW_PWP[region] |= FCW_PWP_PWPEN_Msk;
}

void FCW_PFM_WriteProtectDisable(PFM_WP_REGION region)
{
    while(((FCW_REGS->FCW_STATUS & FCW_STATUS_BUSY_Msk)) != 0U)
    {
        /* Do Nothing */
    }

    FCW_UnlockSequence(FCW_UNLOCK_CFGKEY);

    FCW_REGS->FCW_PWP[region] &= (~FCW_PWP_PWPEN_Msk);
}

void FCW_BootConfig_WriteProtectEnable(void)
{
    while(((FCW_REGS->FCW_STATUS & FCW_STATUS_BUSY_Msk)) != 0U)
    {
        /* Do Nothing */
    }

    FCW_UnlockSequence(FCW_UNLOCK_CFGKEY);

    FCW_REGS->FCW_CWP |= (FCW_CWP_BC1WP_Msk | FCW_CWP_BC1AWP_Msk);
}

uint32_t FCW_BootConfig_WriteProtectDisable(void)
{
    uint32_t previous_val;

    while(((FCW_REGS->FCW_STATUS & FCW_STATUS_BUSY_Msk)) != 0U)
    {
        /* Do Nothing */
    }

    FCW_UnlockSequence(FCW_UNLOCK_CFGKEY);

    previous_val = FCW_REGS->FCW_CWP;

    FCW_REGS->FCW_CWP &= ~(FCW_CWP_BC1WP_Msk | FCW_CWP_BC1AWP_Msk);

    return previous_val;
}

void FCW_BootConfig_WriteProtectRestore(uint32_t previous_val)
{
    while(((FCW_REGS->FCW_STATUS & FCW_STATUS_BUSY_Msk)) != 0U)
    {
        /* Do Nothing */
    }

    FCW_UnlockSequence(FCW_UNLOCK_CFGKEY);

    FCW_REGS->FCW_CWP = previous_val;
}

void FCW_PFM_WriteProtectLock(PFM_WP_REGION region)
{
    while(((FCW_REGS->FCW_STATUS & FCW_STATUS_BUSY_Msk)) != 0U)
    {
        /* Do Nothing */
    }

    FCW_UnlockSequence(FCW_UNLOCK_CFGKEY);

    FCW_REGS->FCW_PWP[region] |= (FCW_PWP_PWPLOCK_Msk);
}

void FCW_BootFlashWriteProtectEnable( BOOT_FLASH_BANK bootBank, FCW_BOOT_FLASH_WRITE_PROTECT writeProtectPage )
{
    while(((FCW_REGS->FCW_STATUS & FCW_STATUS_BUSY_Msk)) != 0U)
    {
        /* Do Nothing */
    }

    FCW_UnlockSequence(FCW_UNLOCK_CFGKEY);

    if (bootBank == BOOT_FLASH_BANK_1)
    {
        FCW_REGS->FCW_LBWP |= (uint32_t)writeProtectPage;
    }
    else
    {
        FCW_REGS->FCW_UBWP |= (uint32_t)writeProtectPage;
    }
}

void FCW_BootFlashWriteProtectDisable(BOOT_FLASH_BANK bootBank, FCW_BOOT_FLASH_WRITE_PROTECT writeProtectPage )
{
    while(((FCW_REGS->FCW_STATUS & FCW_STATUS_BUSY_Msk)) != 0U)
    {
        /* Do Nothing */
    }

    FCW_UnlockSequence(FCW_UNLOCK_CFGKEY);

    if (bootBank == BOOT_FLASH_BANK_1)
    {
        FCW_REGS->FCW_LBWP &= (uint32_t)(~writeProtectPage);
    }
    else
    {
        FCW_REGS->FCW_UBWP &= (uint32_t)(~writeProtectPage);
    }
}

void FCW_BootFlashWriteProtectLock(BOOT_FLASH_BANK bootBank)
{
    while(((FCW_REGS->FCW_STATUS & FCW_STATUS_BUSY_Msk)) != 0U)
    {
        /* Do Nothing */
    }

    FCW_UnlockSequence(FCW_UNLOCK_CFGKEY);

    if (bootBank == BOOT_FLASH_BANK_1)
    {
        FCW_REGS->FCW_LBWP |= (FCW_LBWP_LBWPLOCK_Msk);
    }
    else
    {
        FCW_REGS->FCW_UBWP |= (FCW_UBWP_UBWPLOCK_Msk);
    }
}