/*******************************************************************************
  Dual watchdog timer (DWDT) PLIB

  Company
    Microchip Technology Inc.

  File Name
    plib_dwdt.c

  Summary
    Source for DWDT peripheral library interface Implementation.

  Description
    This file defines the interface to the DWDT peripheral library. This
    library provides access to and control of the associated peripheral
    instance.

  Remarks:
    None.

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
#include <stddef.h>
#include "device.h"
#include "interrupts.h"
#include "plib_dwdt.h"

typedef struct
{
    DWDT_CALLBACK pCallback;
    uintptr_t context;
}dwdtCallback_t;



static void WDT0_Initialize(void)
{

    /* Disable WDT0 */
    DWDT_REGS->DWDT_WDT0_MR |= DWDT_WDT0_MR_WDDIS_Msk;
}


static void WDT1_Initialize(void)
{

    /* Disable WDT1 */
    DWDT_REGS->DWDT_WDT1_MR |= DWDT_WDT1_MR_WDDIS_Msk;
}


void DWDT_Initialize(void)
{
    WDT0_Initialize();
    WDT1_Initialize();
}