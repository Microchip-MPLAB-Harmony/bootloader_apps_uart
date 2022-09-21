/*******************************************************************************
  Bootloader Common Source File

  File Name:
    bootloader_common.c

  Summary:
    This file contains common definitions and functions.

  Description:
    This file contains common definitions and functions.
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
// Section: Include Files
// *****************************************************************************
// *****************************************************************************

#include "bootloader_common.h"

// *****************************************************************************
// *****************************************************************************
// Section: Type Definitions
// *****************************************************************************
// *****************************************************************************

/* Bootloader Major and Minor version sent for a Read Version command (MAJOR.MINOR)*/
#define BTL_MAJOR_VERSION       3
#define BTL_MINOR_VERSION       6

#define WORD_ALIGN_MASK         (~(sizeof(uint32_t) - 1))

// *****************************************************************************
// *****************************************************************************
// Section: Global objects
// *****************************************************************************
// *****************************************************************************


// *****************************************************************************
// *****************************************************************************
// Section: Bootloader Local Functions
// *****************************************************************************
// *****************************************************************************


// *****************************************************************************
// *****************************************************************************
// Section: Bootloader Global Functions
// *****************************************************************************
// *****************************************************************************


bool __WEAK bootloader_Trigger(void)
{
    /* Function can be overriden with custom implementation */
    return false;
}

void __WEAK SYS_DeInitialize( void *data )
{
    /* Function can be overriden with custom implementation */
}

uint16_t __WEAK bootloader_GetVersion( void )
{
    /* Function can be overriden with custom implementation */
    uint16_t btlVersion = (((BTL_MAJOR_VERSION & 0xFF) << 8) | (BTL_MINOR_VERSION & 0xFF));

    return btlVersion;
}



/* Function to Generate CRC by reading the firmware programmed into internal flash */
uint32_t bootloader_CRCGenerate(uint32_t start_addr, uint32_t size)
{
    uint32_t   i, j, value;
    uint32_t   crc_tab[256];
    uint32_t   crc = 0xffffffff;
    uint8_t    data;

    for (i = 0; i < 256; i++)
    {
        value = i;

        for (j = 0; j < 8; j++)
        {
            if (value & 1)
            {
                value = (value >> 1) ^ 0xEDB88320;
            }
            else
            {
                value >>= 1;
            }
        }
        crc_tab[i] = value;
    }

    for (i = 0; i < size; i++)
    {
        data = *(uint8_t *)KVA0_TO_KVA1((start_addr + i));

        crc = crc_tab[(crc ^ data) & 0xff] ^ (crc >> 8);
    }

    return crc;
}


/* Trigger a reset */
void bootloader_TriggerReset(void)
{
    /* Perform system unlock sequence */
    SYSKEY = 0x00000000;
    SYSKEY = 0xAA996655;
    SYSKEY = 0x556699AA;

    RSWRSTSET = _RSWRST_SWRST_MASK;
    (void)RSWRST;
}

void run_Application(uint32_t address)
{
    uint32_t jumpAddrVal = *(uint32_t *)(address & WORD_ALIGN_MASK);

    void (*fptr)(void);

    fptr = (void (*)(void))address;

    if (jumpAddrVal == 0xffffffff)
    {
        return;
    }

    /* Call Deinitialize routine to free any resources acquired by Bootloader */
    SYS_DeInitialize(NULL);

    __builtin_disable_interrupts();

    fptr();
}

T_FLASH_SERIAL CACHE_ALIGN  update_flash_serial;

/* Function to read the Serial number from Flash bank mapped to lower region */
uint32_t bootloader_GetLowerFlashSerial(void)
{
    T_FLASH_SERIAL *lower_flash_serial = LOWER_FLASH_SERIAL_READ;

    return (lower_flash_serial->serial);
}

/* Function to update the serial number based on address */
void bootloader_UpdateFlashSerial(uint32_t serial, uint32_t addr)
{
    update_flash_serial.serial         = serial;
    update_flash_serial.prologue       = FLASH_SERIAL_PROLOGUE;
    update_flash_serial.epilogue       = FLASH_SERIAL_EPILOGUE;

    NVM_QuadWordWrite((uint32_t *)&update_flash_serial, addr);

    while(NVM_IsBusy() == true);
}

volatile uint32_t   dummy_read;

static bool         upper_flash_serial_erased   = false;

void bootloader_SetUpperFlashSerialErased(bool erased)
{
    upper_flash_serial_erased = erased;
}

/* Function to update the serial number in upper flash panel (Inactive Panel) */
void bootloader_UpdateUpperFlashSerial(void)
{
    uint32_t upper_flash_serial;

    /* Increment Upper Mapped Flash panel serial by 1 to be ahead of the
     * current running Lower Mapped Flash panel serial
     */
    upper_flash_serial = bootloader_GetLowerFlashSerial() + 1;

    /* Check if the Serial sector was erased during programming */
    if (upper_flash_serial_erased == false)
    {
        /* Erase the Sector in which Flash Serial Resides */
        NVM_PageErase(UPPER_FLASH_SERIAL_SECTOR);

        /* Wait for erase to complete */
        while(NVM_IsBusy() == true);
    }
    else
    {
        bootloader_SetUpperFlashSerialErased(false);
    }

    bootloader_UpdateFlashSerial(upper_flash_serial, UPPER_FLASH_SERIAL_START);
}

/* Function to swap the banks.
 * This function has to be removed once NVM PLIB has the support
 */
static void bootloader_ProgramFlashSwapBank( T_FLASH_BANK flash_bank )
{
    /* NVMOP can be written only when WREN is zero. So, clear WREN */
    NVMCONCLR = _NVMCON_WREN_MASK;

    /* Write the unlock key sequence */
    NVMKEY = 0x0;
    NVMKEY = 0xAA996655;
    NVMKEY = 0x556699AA;

    if (flash_bank == PROGRAM_FLASH_BANK_1)
    {
        /* Map Program Flash Memory Bank 1 to lower region */
        NVMCONCLR = _NVMCON_PFSWAP_MASK;
    }
    else if (flash_bank == PROGRAM_FLASH_BANK_2)
    {
        /* Map Program Flash Memory Bank 2 to lower region */
        NVMCONSET = _NVMCON_PFSWAP_MASK;
    }
}

/* Function to Select Appropriate program flash bank based on the serial number */
void bootloader_ProgramFlashBankSelect( void )
{
    /* Map Program Flash Bank 1 to lower region after a reset */
    bootloader_ProgramFlashSwapBank(PROGRAM_FLASH_BANK_1);

    T_FLASH_SERIAL *lower_flash_serial = LOWER_FLASH_SERIAL_READ;
    T_FLASH_SERIAL *upper_flash_serial = UPPER_FLASH_SERIAL_READ;

    /* If Both Flash Panels do not have any Serial number */
    if( lower_flash_serial->prologue == FLASH_SERIAL_CLEAR &&
        upper_flash_serial->prologue == FLASH_SERIAL_CLEAR)
    {
        /* Program Checksum and initial ID's for both panels*/
        bootloader_UpdateFlashSerial(0, LOWER_FLASH_SERIAL_START);
        bootloader_UpdateFlashSerial(0, UPPER_FLASH_SERIAL_START);
    }
    /* If both the panels have proper checksum and serial number*/
    else if((lower_flash_serial->prologue == FLASH_SERIAL_PROLOGUE) &&
        (lower_flash_serial->epilogue == FLASH_SERIAL_EPILOGUE) &&
        (upper_flash_serial->prologue == FLASH_SERIAL_PROLOGUE) &&
        (upper_flash_serial->epilogue == FLASH_SERIAL_EPILOGUE))
    {
        /* If Upper flash panel has latest firmware */
        if(upper_flash_serial->serial > lower_flash_serial->serial)
        {
            /* Map Program Flash Bank 2 to lower region */
            bootloader_ProgramFlashSwapBank(PROGRAM_FLASH_BANK_2);

            /* Perform Dummy Read of Inactive panel(Upper Flash) after BankSwap
             * for Swap to take effect
             */
            dummy_read = *(uint32_t *)(UPPER_FLASH_START);
        }
    }
    /* Fallback Case when Panel 1 checksum and serial number is corrupted */
    else if((upper_flash_serial->prologue == FLASH_SERIAL_PROLOGUE) &&
            (upper_flash_serial->epilogue == FLASH_SERIAL_EPILOGUE))
    {
        /* Map Program Flash Bank 2 to lower region */
        bootloader_ProgramFlashSwapBank(PROGRAM_FLASH_BANK_2);

        /* Perform Dummy Read of Inactive panel(Upper Flash) after BankSwap
         * for Swap to take effect
         */
        dummy_read = *(uint32_t *)(UPPER_FLASH_START);
    }
}

