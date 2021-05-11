/*******************************************************************************
 Cortex-M device vectors file

  Company:
    Microchip Technology Inc.

  File Name:
    device_vectors.h

  Summary:
    Harmony3 device handler structure for cortex-M devices

  Description:
    This file contains Harmony3 device handler structure for cortex-M devices
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

#ifndef DEVICE_VECTORS_H
#define DEVICE_VECTORS_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
#include <stdint.h>

// *****************************************************************************
// *****************************************************************************
// Section: Data Types
// *****************************************************************************
// *****************************************************************************

/* Function pointer type for vector handlers */
typedef void (*pfn_handler_t)(void);

/* Structure defining device vector types */
typedef struct _H3DeviceVectors
{
  /* Stack pointer */
  uint32_t* pvStack;

  /* CORTEX-M4 handlers */ 
  pfn_handler_t pfnReset_Handler;                   /* -15 Reset Vector, invoked on Power up and warm reset */
  pfn_handler_t pfnNonMaskableInt_Handler;          /* -14 Non maskable Interrupt, cannot be stopped or preempted */
  pfn_handler_t pfnHardFault_Handler;               /* -13 Hard Fault, all classes of Fault */
  pfn_handler_t pfnMemoryManagement_Handler;        /* -12 Memory Management, MPU mismatch, including Access Violation and No Match */
  pfn_handler_t pfnBusFault_Handler;                /* -11 Bus Fault, Pre-Fetch-, Memory Access Fault, other address/memory related Fault */
  pfn_handler_t pfnUsageFault_Handler;              /* -10 Usage Fault, i.e. Undef Instruction, Illegal State Transition */
  pfn_handler_t pfnReservedC9;
  pfn_handler_t pfnReservedC8;
  pfn_handler_t pfnReservedC7;
  pfn_handler_t pfnReservedC6;
  pfn_handler_t pfnSVCall_Handler;                  /* -5 System Service Call via SVC instruction */
  pfn_handler_t pfnDebugMonitor_Handler;            /* -4 Debug Monitor */
  pfn_handler_t pfnReservedC3;
  pfn_handler_t pfnPendSV_Handler;                  /* -2 Pendable request for system service */
  pfn_handler_t pfnSysTick_Handler;                 /* -1 System Tick Timer */

  /* Peripheral handlers */
  pfn_handler_t pfnSUPC_Handler;                    /* 0 Supply Controller */
  pfn_handler_t pfnRSTC_Handler;                    /* 1 Reset Controller */
  pfn_handler_t pfnRTC_Handler;                     /* 2 Real Time Clock */
  pfn_handler_t pfnRTT_Handler;                     /* 3 Real Time Timer */
  pfn_handler_t pfnWDT_Handler;                     /* 4 Watchdog Timer */
  pfn_handler_t pfnPMC_Handler;                     /* 5 Power Management Controller */
  pfn_handler_t pfnEFC_Handler;                     /* 6 Enhanced Flash Controller */
  pfn_handler_t pfnFLEXCOM7_Handler;                /* 7 FLEXCOM 7 */
  pfn_handler_t pfnFLEXCOM0_Handler;                /* 8 FLEXCOM 0 */
  pfn_handler_t pfnFLEXCOM1_Handler;                /* 9 FLEXCOM 1 */
  pfn_handler_t pfnReserved10;
  pfn_handler_t pfnPIOA_Handler;                    /* 11 Parallel I/O Controller A */
  pfn_handler_t pfnPIOB_Handler;                    /* 12 Parallel I/O Controller B */
  pfn_handler_t pfnPDMIC0_Handler;                  /* 13 PDM 0 */
  pfn_handler_t pfnFLEXCOM2_Handler;                /* 14 FLEXCOM 2 */
  pfn_handler_t pfnMEM2MEM_Handler;                 /* 15 MEM2MEM */
  pfn_handler_t pfnI2SC0_Handler;                   /* 16 I2SC0 */
  pfn_handler_t pfnI2SC1_Handler;                   /* 17 I2SC1 */
  pfn_handler_t pfnPDMIC1_Handler;                  /* 18 PDM 1 */
  pfn_handler_t pfnFLEXCOM3_Handler;                /* 19 FLEXCOM 3 */
  pfn_handler_t pfnFLEXCOM4_Handler;                /* 20 FLEXCOM 4 */
  pfn_handler_t pfnFLEXCOM5_Handler;                /* 21 FLEXCOM 5 */
  pfn_handler_t pfnFLEXCOM6_Handler;                /* 22 FLEXCOM 6 */
  pfn_handler_t pfnTC0_CH0_Handler;                 /* 23 Timer/Counter 0 Channel 0 */
  pfn_handler_t pfnTC0_CH1_Handler;                 /* 24 Timer/Counter 0 Channel 1 */
  pfn_handler_t pfnTC0_CH2_Handler;                 /* 25 Timer/Counter 0 Channel 2 */
  pfn_handler_t pfnTC1_CH0_Handler;                 /* 26 Timer/Counter 1 Channel 0 */
  pfn_handler_t pfnTC1_CH1_Handler;                 /* 27 Timer/Counter 1 Channel 1 */
  pfn_handler_t pfnTC1_CH2_Handler;                 /* 28 Timer/Counter 1 Channel 2 */
  pfn_handler_t pfnADC_Handler;                     /* 29 Analog To Digital Converter */
  pfn_handler_t pfnReserved30;
  pfn_handler_t pfnReserved31;
  pfn_handler_t pfnReserved32;
  pfn_handler_t pfnReserved33;
  pfn_handler_t pfnReserved34;
  pfn_handler_t pfnReserved35;
  pfn_handler_t pfnReserved36;
  pfn_handler_t pfnReserved37;
  pfn_handler_t pfnReserved38;
  pfn_handler_t pfnReserved39;
  pfn_handler_t pfnReserved40;
  pfn_handler_t pfnReserved41;
  pfn_handler_t pfnReserved42;
  pfn_handler_t pfnReserved43;
  pfn_handler_t pfnReserved44;
  pfn_handler_t pfnReserved45;
  pfn_handler_t pfnReserved46;
  pfn_handler_t pfnUHP_Handler;                     /* 47 USB OHCI */
  pfn_handler_t pfnUDP_Handler;                     /* 48 USB Device FS */
  pfn_handler_t pfnCRCCU_Handler;                   /* 49 CRCCU */
}H3DeviceVectors;

#endif //DEVICE_VECTORS_H
