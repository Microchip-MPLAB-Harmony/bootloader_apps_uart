/*******************************************************************************
  Supply Controller (SUPC) Peripheral Library (PLIB)

  Company:
    Microchip Technology Inc.

  File Name:
    plib_supc.h

  Summary:
    Interface definition of the SUPC PLIB Header File

  Description:
    None

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

#ifndef PLIB_SUPC_H // Guards against multiple inclusion
#define PLIB_SUPC_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include "device.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: Data Types
// *****************************************************************************
// *****************************************************************************
typedef enum
{
    GPBR_REGS_0,

    GPBR_REGS_1,

    GPBR_REGS_2,

    GPBR_REGS_3,

    GPBR_REGS_4,

    GPBR_REGS_5,

    GPBR_REGS_6,

    GPBR_REGS_7,

    GPBR_REGS_8,

    GPBR_REGS_9,

    GPBR_REGS_10,

    GPBR_REGS_11,

    GPBR_REGS_12,

    GPBR_REGS_13,

    GPBR_REGS_14,

    GPBR_REGS_15,

    GPBR_REGS_16,

    GPBR_REGS_17,

    GPBR_REGS_18,

    GPBR_REGS_19,

    GPBR_REGS_20,

    GPBR_REGS_21,

    GPBR_REGS_22,

    GPBR_REGS_23,

} GPBR_REGS_INDEX;

typedef enum
{
    WAITMODE_WKUP_RTT = PMC_FSMR_RTTAL_Msk,      // RTT

    WAITMODE_WKUP_RTC = PMC_FSMR_RTCAL_Msk      // RTC

} WAITMODE_WKUP_SOURCE;

typedef enum
{
    WAITMODE_FLASH_STANDBY = PMC_FSMR_FLPM_FLASH_STANDBY,

    WAITMODE_FLASH_DEEPSLEEP = PMC_FSMR_FLPM_FLASH_DEEP_POWERDOWN

} WAITMODE_FLASH_STATE;

// *****************************************************************************
// *****************************************************************************
// Section: Interface Routines
// *****************************************************************************
// *****************************************************************************

void SUPC_Initialize(void);

void SUPC_SleepModeEnter(void);

void SUPC_WaitModeEnter(WAITMODE_FLASH_STATE flash_lpm, WAITMODE_WKUP_SOURCE source);

void SUPC_BackupModeEnter(void);

uint32_t SUPC_GPBRRead(GPBR_REGS_INDEX reg);

void SUPC_GPBRWrite(GPBR_REGS_INDEX reg, uint32_t data);



// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    }

#endif
// DOM-IGNORE-END

#endif // PLIB_SUPC_H
