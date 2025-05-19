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

#ifndef SEFC1_H    // Guards against multiple inclusion
#define SEFC1_H

#include <sys/attribs.h>
#include "plib_sefc_common.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus // Provide C++ Compatibility
    extern "C" {
#endif
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: Interface
// *****************************************************************************
// *****************************************************************************

#define SEFC1_SECTORSIZE              8192U
#define SEFC1_PAGESIZE                512U
#define SEFC1_LOCKSIZE                0x4000

void SEFC1_Initialize(void);

bool SEFC1_Read( uint32_t *data, uint32_t length, uint32_t address );

bool SEFC1_SectorErase( uint32_t address );

bool SEFC1_PageErase( uint32_t address );

bool SEFC1_PageBufferWrite( uint32_t *data, const uint32_t address);

bool SEFC1_PageBufferCommit( const uint32_t address);

bool SEFC1_PageWrite( uint32_t *data, uint32_t address );

bool SEFC1_QuadWordWrite( uint32_t *data, uint32_t address );

SEFC_ERROR SEFC1_ErrorGet( void );

bool SEFC1_IsBusy(void);

void SEFC1_RegionLock(uint32_t address);

void SEFC1_RegionUnlock(uint32_t address);

__longramfunc__ void SEFC1_GpnvmBitSet(uint8_t GpnvmBitNumber);

__longramfunc__ void SEFC1_GpnvmBitClear(uint8_t GpnvmBitNumber);

__longramfunc__ uint32_t SEFC1_GpnvmBitRead(void);

bool SEFC1_UniqueIdentifierRead(uint32_t *data, uint32_t length);

void SEFC1_UserSignatureRightsSet(uint32_t userSignatureRights);

uint32_t SEFC1_UserSignatureRightsGet(void);

bool SEFC1_UserSignatureRead(uint32_t *data, uint32_t length, SEFC_USERSIGNATURE_BLOCK block, SEFC_USERSIGNATURE_PAGE page);

bool SEFC1_UserSignatureWrite(void *data, uint32_t length, SEFC_USERSIGNATURE_BLOCK block, SEFC_USERSIGNATURE_PAGE page);

void SEFC1_UserSignatureErase(SEFC_USERSIGNATURE_BLOCK block);

void SEFC1_CryptographicKeySend(uint16_t sckArg);

void SEFC1_WriteProtectionSet(uint32_t mode);

uint32_t SEFC1_WriteProtectionGet(void);


uint32_t SEFC1_FlashPanelBaseAddrGet(void);

// DOM-IGNORE-BEGIN
#ifdef __cplusplus // Provide C++ Compatibility
}
#endif
// DOM-IGNORE-END

#endif
