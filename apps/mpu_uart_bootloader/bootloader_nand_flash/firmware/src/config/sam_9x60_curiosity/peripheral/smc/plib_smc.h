/*******************************************************************
  Company:
    Microchip Technology Inc.
    Memory System Service SMC Initialization File

  File Name:
    plib_smc.h

  Summary:
    Static Memory Controller (SMC) peripheral library interface.
    This file contains the source code to initialize the SMC_6498 controller

  Description
    This file defines the interface to the SMC peripheral library.  This
    library provides access to and control of the associated peripheral
    instance.

  Remarks:
    This header is for documentation only.  The actual smc<x> headers will be
    generated as required by the MCC (where <x> is the peripheral instance
    number).

    Every interface symbol has a lower-case 'x' in it following the "SMC"
    abbreviation.  This 'x' will be replaced by the peripheral instance number
    in the generated headers.  These are the actual functions that should be
    used.
*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
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

#ifndef PLIB_SMC_H
#define PLIB_SMC_H

#include <stdint.h>         // uint32_t, uintptr_t
#include <stdbool.h>

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
    extern "C" {
#endif
// DOM-IGNORE-END

/* Address for transferring command bytes, CLE A22 */
#define COMMAND_ADDR    0x400000U
/* Address for transferring address bytes, ALE A21 */
#define ADDRESS_ADDR    0x200000U


void SMC_Initialize( void );
uint32_t SMC_DataAddressGet(uint8_t chipSelect);

static inline void SMC_CommandWrite(uint32_t dataAddress, uint8_t command)
{
    /* Send command */
    *((volatile uint8_t *)(dataAddress | COMMAND_ADDR)) = command;
}

static inline void SMC_CommandWrite16(uint32_t dataAddress, uint16_t command)
{
    /* Send command */
    *((volatile uint16_t *)(dataAddress | COMMAND_ADDR)) = command;
}

static inline void SMC_AddressWrite(uint32_t dataAddress, uint8_t address)
{
    /* Send address */
    *((volatile uint8_t *)(dataAddress | ADDRESS_ADDR)) = address;
}

static inline void SMC_AddressWrite16(uint32_t dataAddress, uint16_t address)
{
    /* Send address */
    *((volatile uint16_t *)(dataAddress | ADDRESS_ADDR)) = address;
}

static inline void SMC_DataWrite(uint32_t dataAddress, uint8_t data)
{
    *((volatile uint8_t *)dataAddress) = data;
}

static inline void SMC_DataWrite16(uint32_t dataAddress, uint16_t data)
{
    *((volatile uint16_t *)dataAddress) = data;
}

static inline uint8_t SMC_DataRead(uint32_t dataAddress)
{
    return *((volatile uint8_t *)dataAddress);
}

static inline uint16_t SMC_DataRead16(uint32_t dataAddress)
{
    return *((volatile uint16_t *)dataAddress);
}

void PMECC_DataPhaseStart(bool writeEnable);
bool PMECC_StatusIsBusy(void);
uint8_t PMECC_ErrorGet(void);
int16_t PMECC_RemainderGet(uint32_t sector, uint32_t remainderIndex);
uint8_t PMECC_ECCGet(uint32_t sector, uint32_t byteIndex);
uint32_t PMERRLOC_ErrorLocationGet(uint8_t position);
void PMERRLOC_ErrorLocationDisable(void);
void PMERRLOC_SigmaSet(uint32_t sigmaVal, uint32_t sigmaNum);
uint32_t PMERRLOC_ErrorLocationFindNumOfRoots(uint32_t sectorSizeInBits, uint32_t errorNumber);

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
    }
#endif
// DOM-IGNORE-END

#endif // PLIB_SMC_H

/*******************************************************************************
 End of File
*/
