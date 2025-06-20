/*******************************************************************************
  Reset Controller(RSTC) PLIB

  Company
    Microchip Technology Inc.

  File Name
    plib_rstc.h

  Summary
    RSTC PLIB Header File.

  Description
    This file defines the interface to the RSTC peripheral library.
    This library provides access to and control of the associated
    Reset Controller.

  Remarks:
    None.

*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2021 Microchip Technology Inc. and its subsidiaries.
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

#ifndef PLIB_RSTC_H      // Guards against multiple inclusion
#define PLIB_RSTC_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
/* This section lists the other files that are included in this file.
*/

#include <stdbool.h>
#include <stddef.h>
#include "device.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus // Provide C++ Compatibility

    extern "C" {

#endif
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section:Preprocessor macros
// *****************************************************************************
// *****************************************************************************

#define RSTC_RESET_CAUSE_POR_RESET  RSTC_RCAUSE_POR_Msk

#define RSTC_RESET_CAUSE_PORCORE_RESET  RSTC_RCAUSE_PORCORE_Msk

#define RSTC_RESET_CAUSE_BORVDDREG_RESET  RSTC_RCAUSE_BORVDDREG_Msk

#define RSTC_RESET_CAUSE_BORVDDA_RESET  RSTC_RCAUSE_BORVDDA_Msk

#define RSTC_RESET_CAUSE_BORVDDIO_RESET  RSTC_RCAUSE_BORVDDIO_Msk

#define RSTC_RESET_CAUSE_EXT_RESET  RSTC_RCAUSE_EXT_Msk

#define RSTC_RESET_CAUSE_WDT_RESET  RSTC_RCAUSE_WDT_Msk

#define RSTC_RESET_CAUSE_SYST_RESET  RSTC_RCAUSE_SYST_Msk

#define RSTC_RESET_CAUSE_BACKUP_RESET  RSTC_RCAUSE_BACKUP_Msk

#define RSTC_RESET_CAUSE_LOCKUP_RESET  RSTC_RCAUSE_LOCKUP_Msk


#define RSTC_BKUPEXIT_CAUSE_RTC  RSTC_BKUPEXIT_RTC_Msk

#define RSTC_BKUPEXIT_CAUSE_HIB0  RSTC_BKUPEXIT_HIB0_Msk


// *****************************************************************************
// *****************************************************************************
// Section: Data Types
// *****************************************************************************
// *****************************************************************************
/* The following data type definitions are used by the functions in this
    interface and should be considered part it.
*/

// *****************************************************************************
/* User Reset type

  Summary:
    Identifies the type of reset.

  Description:
    This enums identifies either Power On Reset, Brown Out CORE Detector Reset,
    Brown Out VDDREG Detector Reset, Brown Out VDDA Detector Reset, Brown Out VDDIO Detector Reset,
    External Reset, Watchdog Reset, System Reset, Backup Reset or Lockup Reset.

  Remarks:
    Refer to the specific device data sheet to determine availability.
*/

typedef uint32_t RSTC_RESET_CAUSE;

typedef uint32_t RSTC_BKUPEXIT_CAUSE;

RSTC_BKUPEXIT_CAUSE RSTC_BackupExitCauseGet(void);

RSTC_RESET_CAUSE RSTC_ResetCauseGet(void);

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    }

#endif

#endif /* PLIB_RSTC_H */
