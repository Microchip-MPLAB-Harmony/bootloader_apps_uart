/*******************************************************************************
Interface definition of SEFC1 PLIB.

Company:
Microchip Technology Inc.

File Name:
plib_sefc1.h

Summary:
Interface definition of SEFC1 Plib.

Description:
This file defines the interface for the SEFC1 Plib.
It allows user to Program, Erase and lock the on-chip FLASH memory.
*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2022 Microchip Technology Inc. and its subsidiaries.
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

#include <string.h>
#include "device.h"
#include "plib_sefc1.h"
#include "interrupts.h"

static uint32_t sefc_status = 0;
static uint32_t SEFC1_PanelBaseAddr = 0;


// *****************************************************************************
// *****************************************************************************
// SEFC1 Local Functions
// *****************************************************************************
// *****************************************************************************
// *****************************************************************************

__longramfunc__ static bool SEFC1_sequenceRead(uint32_t cmdStart, uint32_t cmdStop,
                                               uint32_t *data, uint32_t length, uint32_t address)
{
    uint32_t count = 0;
    uint32_t sefcFmrReg;
    uint32_t *pAddress = (uint32_t *)address;

    /* Disable Sequential Code Optimization */
    sefcFmrReg = SEFC1_REGS->SEFC_EEFC_FMR;
    SEFC1_REGS->SEFC_EEFC_FMR |= SEFC_EEFC_FMR_SCOD_Msk;

    SEFC1_REGS->SEFC_EEFC_FCR = (cmdStart | SEFC_EEFC_FCR_FKEY_PASSWD);

    while ((SEFC1_REGS->SEFC_EEFC_FSR & SEFC_EEFC_FSR_FRDY_Msk) == SEFC_EEFC_FSR_FRDY_Msk)
    {
        // Wait for the flash ready falls
    }

    for (count = 0; count < length; count++)
    {
        data[count] = pAddress[count];
    }

    SEFC1_REGS->SEFC_EEFC_FCR = (cmdStop | SEFC_EEFC_FCR_FKEY_PASSWD);

    while ((SEFC1_REGS->SEFC_EEFC_FSR & SEFC_EEFC_FSR_FRDY_Msk) == 0U)
    {
        // Wait for the flash ready
    }

    /* Enable Sequential Code Optimization */
    if ((sefcFmrReg & SEFC_EEFC_FMR_SCOD_Msk) == 0U)
    {
        SEFC1_REGS->SEFC_EEFC_FMR &= ~SEFC_EEFC_FMR_SCOD_Msk;
    }

    return true;
}

__longramfunc__ void SEFC1_GpnvmBitSet(uint8_t GpnvmBitNumber)
{
    SEFC0_REGS->SEFC_EEFC_FCR = (SEFC_EEFC_FCR_FCMD_SGPB | SEFC_EEFC_FCR_FARG((uint32_t)GpnvmBitNumber) | SEFC_EEFC_FCR_FKEY_PASSWD);

    while ((SEFC0_REGS->SEFC_EEFC_FSR & SEFC_EEFC_FSR_FRDY_Msk) == 0U)
    {
        // Wait for the flash ready
    }
}

__longramfunc__ void SEFC1_GpnvmBitClear(uint8_t GpnvmBitNumber)
{
    SEFC0_REGS->SEFC_EEFC_FCR = (SEFC_EEFC_FCR_FCMD_CGPB | SEFC_EEFC_FCR_FARG((uint32_t)GpnvmBitNumber) | SEFC_EEFC_FCR_FKEY_PASSWD);

    while ((SEFC0_REGS->SEFC_EEFC_FSR & SEFC_EEFC_FSR_FRDY_Msk) == 0U)
    {
        // Wait for the flash ready
    }
}

__longramfunc__ uint32_t SEFC1_GpnvmBitRead(void)
{
    /* GPNVM bits can only be read from Flash Panel 0 (SEFC0 Plib instance) */
    SEFC0_REGS->SEFC_EEFC_FCR = (SEFC_EEFC_FCR_FCMD_GGPB | SEFC_EEFC_FCR_FKEY_PASSWD);

    while ((SEFC0_REGS->SEFC_EEFC_FSR & SEFC_EEFC_FSR_FRDY_Msk) == 0U)
    {
        // Wait for the flash ready
    }

    return (uint32_t)SEFC0_REGS->SEFC_EEFC_FRR;
}

uint32_t SEFC1_FlashPanelBaseAddrGet(void)
{
    bool isPanelSwap = ((SEFC1_GpnvmBitRead() & 0x02U) != 0U);

    return isPanelSwap == false? IFLASH1_ADDR : IFLASH0_ADDR;

}

// *****************************************************************************
// *****************************************************************************
// SEFC1 PLib Interface Routines
// *****************************************************************************
// *****************************************************************************
// *****************************************************************************

void SEFC1_Initialize(void)
{
    SEFC1_REGS->SEFC_EEFC_FMR = SEFC_EEFC_FMR_FWS(7U) | SEFC_EEFC_FMR_CLOE_Msk | SEFC_EEFC_FMR_ALWAYS1_Msk;
   SEFC1_PanelBaseAddr = SEFC1_FlashPanelBaseAddrGet();
}

bool SEFC1_Read( uint32_t *data, uint32_t length, uint32_t address )
{
    uint32_t *pAddress = (uint32_t*)address;
    (void)memcpy(data, pAddress, length);
    return true;
}

bool SEFC1_SectorErase( uint32_t address )
{
    uint16_t page_number;

    /* Calculate the Page number to be passed for FARG register */
    page_number = (uint16_t)((address - SEFC1_PanelBaseAddr) / IFLASH1_PAGE_SIZE);

    /* Issue the FLASH erase operation */
    SEFC1_REGS->SEFC_EEFC_FCR = (SEFC_EEFC_FCR_FCMD_ES | SEFC_EEFC_FCR_FARG((uint32_t)page_number) | SEFC_EEFC_FCR_FKEY_PASSWD);

    sefc_status = 0;


    return true;
}

bool SEFC1_PageErase( uint32_t address )
{
    uint16_t page_number;

    /* Calculate the Page number to be passed for FARG register */
    page_number = (uint16_t)((address - SEFC1_PanelBaseAddr) / IFLASH1_PAGE_SIZE);

    /* Issue the FLASH erase operation */
    SEFC1_REGS->SEFC_EEFC_FCR = (SEFC_EEFC_FCR_FCMD_EPA | SEFC_EEFC_FCR_FARG((uint32_t)page_number | 0x2U) | SEFC_EEFC_FCR_FKEY_PASSWD);

    sefc_status = 0;


    return true;
}

bool SEFC1_PageBufferWrite( uint32_t *data, const uint32_t address)
{
    uint16_t page_number;

    /* Calculate the Page number to be passed for FARG register */
    page_number = (uint16_t)((address - SEFC1_PanelBaseAddr) / IFLASH1_PAGE_SIZE);

    for (uint32_t i = 0; i < IFLASH1_PAGE_SIZE; i += 4U)
    {
        *((uint32_t *)( SEFC1_PanelBaseAddr + ( page_number * IFLASH1_PAGE_SIZE ) + i )) = *data ;
        data++;
    }

    __DSB();
    __ISB();

    return true;
}

bool SEFC1_PageBufferCommit( const uint32_t address)
{
    uint16_t page_number;

    /* Calculate the Page number to be passed for FARG register */
    page_number = (uint16_t)((address - SEFC1_PanelBaseAddr) / IFLASH1_PAGE_SIZE);

    __DSB();
    __ISB();

    /* Issue the FLASH write operation*/
    SEFC1_REGS->SEFC_EEFC_FCR = (SEFC_EEFC_FCR_FCMD_WP | SEFC_EEFC_FCR_FARG((uint32_t)page_number) | SEFC_EEFC_FCR_FKEY_PASSWD);

    sefc_status = 0;


    return true;
}

bool SEFC1_PageWrite( uint32_t *data, uint32_t address )
{
    uint16_t page_number;

    /* Calculate the Page number to be passed for FARG register */
    page_number = (uint16_t)((address - SEFC1_PanelBaseAddr) / IFLASH1_PAGE_SIZE);

    for (uint32_t i = 0; i < IFLASH1_PAGE_SIZE; i += 4U)
    {
        *((uint32_t *)( SEFC1_PanelBaseAddr + ( page_number * IFLASH1_PAGE_SIZE ) + i )) = *data;
        data++;
    }

    __DSB();
    __ISB();

    /* Issue the FLASH write operation*/
    SEFC1_REGS->SEFC_EEFC_FCR = (SEFC_EEFC_FCR_FCMD_WP | SEFC_EEFC_FCR_FARG((uint32_t)page_number) | SEFC_EEFC_FCR_FKEY_PASSWD);

    sefc_status = 0;


    return true;
}

bool SEFC1_QuadWordWrite( uint32_t *data, uint32_t address )
{
    uint16_t page_number;

    /* Calculate the Page number to be passed for FARG register */
    page_number = (uint16_t)((address - SEFC1_PanelBaseAddr) / IFLASH1_PAGE_SIZE);

    for (uint32_t i = 0; i < 16U; i += 4U)
    {
        *((uint32_t *)(( address ) + i )) = *data;
        data++;
    }
    /* Issue the FLASH write operation */
    SEFC1_REGS->SEFC_EEFC_FCR = (SEFC_EEFC_FCR_FCMD_WP | SEFC_EEFC_FCR_FARG((uint32_t)page_number) | SEFC_EEFC_FCR_FKEY_PASSWD);

    sefc_status = 0;


    return true;
}

void SEFC1_RegionLock(uint32_t address)
{
    uint16_t page_number;

    /*Calculate the Page number to be passed for FARG register*/
    page_number = (uint16_t)((address - SEFC1_PanelBaseAddr) / IFLASH1_PAGE_SIZE);
    SEFC1_REGS->SEFC_EEFC_FCR = (SEFC_EEFC_FCR_FCMD_SLB | SEFC_EEFC_FCR_FARG((uint32_t)page_number) | SEFC_EEFC_FCR_FKEY_PASSWD);

    sefc_status = 0;

}

void SEFC1_RegionUnlock(uint32_t address)
{
    uint16_t page_number;

    /*Calculate the Page number to be passed for FARG register*/
    page_number = (uint16_t)((address - SEFC1_PanelBaseAddr) / IFLASH1_PAGE_SIZE);
    SEFC1_REGS->SEFC_EEFC_FCR = (SEFC_EEFC_FCR_FCMD_CLB | SEFC_EEFC_FCR_FARG((uint32_t)page_number) | SEFC_EEFC_FCR_FKEY_PASSWD);

    sefc_status = 0;

}

bool SEFC1_UniqueIdentifierRead(uint32_t *data, uint32_t length)
{
    /* Check Unique Identifier length (128 bits) */
    if (length > 4U)
    {
        return false;
    }

    return SEFC1_sequenceRead(SEFC_EEFC_FCR_FCMD_STUI, SEFC_EEFC_FCR_FCMD_SPUI, data, length, SEFC1_PanelBaseAddr);
}

void SEFC1_UserSignatureRightsSet(uint32_t userSignatureRights)
{
    SEFC1_REGS->SEFC_EEFC_USR = userSignatureRights;
}

uint32_t SEFC1_UserSignatureRightsGet(void)
{
    return SEFC1_REGS->SEFC_EEFC_USR;
}

bool SEFC1_UserSignatureRead(uint32_t *data, uint32_t length, SEFC_USERSIGNATURE_BLOCK block, SEFC_USERSIGNATURE_PAGE page)
{
    uint32_t address;

    address = SEFC1_PanelBaseAddr + ((((uint32_t)block * 8U) + (uint32_t)page) * SEFC1_PAGESIZE);

    return SEFC1_sequenceRead(SEFC_EEFC_FCR_FCMD_STUS, SEFC_EEFC_FCR_FCMD_SPUS, data, length, address);
}

bool SEFC1_UserSignatureWrite(void *data, uint32_t length, SEFC_USERSIGNATURE_BLOCK block, SEFC_USERSIGNATURE_PAGE page)
{
    uint32_t count = 0U;
    uint64_t *dest = NULL;
    uint64_t *src = (uint64_t *)data;
    uint32_t page_number = 0U;

    if (length > (IFLASH1_PAGE_SIZE >> 2))
    {
        return false;
    }

    page_number = (((uint32_t)block * 8U) + (uint32_t)page);

    dest = (uint64_t *)(SEFC1_PanelBaseAddr + (page_number * IFLASH1_PAGE_SIZE));

    /* Writing 8-bit and 16-bit data is not allowed and may lead to unpredictable data corruption */
    for (count = 0; count < (length >> 1); count++)
    {
        *dest = *src;
        dest++;
        src++;
    }

    __DSB();
    __ISB();

    /* Issue the FLASH write operation*/
    SEFC1_REGS->SEFC_EEFC_FCR = (SEFC_EEFC_FCR_FCMD_WUS | SEFC_EEFC_FCR_FARG(page_number) | SEFC_EEFC_FCR_FKEY_PASSWD);

    sefc_status = 0;


    return true;
}

void SEFC1_UserSignatureErase(SEFC_USERSIGNATURE_BLOCK block)
{
    SEFC1_REGS->SEFC_EEFC_FCR = (SEFC_EEFC_FCR_FCMD_EUS | SEFC_EEFC_FCR_FARG((uint32_t)((uint32_t)block << 3U)) | SEFC_EEFC_FCR_FKEY_PASSWD);

    sefc_status = 0;

}

void SEFC1_CryptographicKeySend(uint16_t sckArg)
{
    SEFC1_REGS->SEFC_EEFC_FCR = (SEFC_EEFC_FCR_FCMD_SCK | SEFC_EEFC_FCR_FARG((uint32_t)sckArg) | SEFC_EEFC_FCR_FKEY_PASSWD);

    sefc_status = 0;

}

bool SEFC1_IsBusy(void)
{
    sefc_status |= SEFC1_REGS->SEFC_EEFC_FSR;
    return (bool)((sefc_status & SEFC_EEFC_FSR_FRDY_Msk) == 0U);
}

SEFC_ERROR SEFC1_ErrorGet( void )
{
    sefc_status |= SEFC1_REGS->SEFC_EEFC_FSR;
    return (SEFC_ERROR)sefc_status;
}

void SEFC1_WriteProtectionSet(uint32_t mode)
{
    SEFC1_REGS->SEFC_EEFC_WPMR = SEFC_EEFC_WPMR_WPKEY_PASSWD | mode;
}

uint32_t SEFC1_WriteProtectionGet(void)
{
    return SEFC1_REGS->SEFC_EEFC_WPMR;
}


