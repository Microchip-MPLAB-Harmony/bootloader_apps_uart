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
typedef struct H3DeviceVectorsTag
{
  /* Stack pointer */
  uint32_t* pvStack;

  /* CORTEX-M7 handlers */ 
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
  pfn_handler_t pfnWDT_Handler;                     /* 4 Watchdog Timer 0 */
  pfn_handler_t pfnPMC_Handler;                     /* 5 Power Management Controller */
  pfn_handler_t pfnMATRIX0_Handler;                 /* 6 Matrix 0 */
  pfn_handler_t pfnFLEXCOM0_Handler;                /* 7 FLEXCOM 0 */
  pfn_handler_t pfnFLEXCOM1_Handler;                /* 8 FLEXCOM 1 */
  pfn_handler_t pfnNMIC_Handler;                    /* 9 NMI Controller */
  pfn_handler_t pfnPIOA_Handler;                    /* 10 Parallel I/O Controller A */
  pfn_handler_t pfnPIOB_Handler;                    /* 11 Parallel I/O Controller B */
  pfn_handler_t pfnPIOC_Handler;                    /* 12 Parallel I/O Controller C */
  pfn_handler_t pfnFLEXCOM2_Handler;                /* 13 FLEXCOM 2 */
  pfn_handler_t pfnFLEXCOM3_Handler;                /* 14 FLEXCOM 3 */
  pfn_handler_t pfnFLEXCOM4_Handler;                /* 15 FLEXCOM 4 */
  pfn_handler_t pfnPIOD_Handler;                    /* 16 Parallel I/O Controller D */
  pfn_handler_t pfnPIOE_Handler;                    /* 17 Parallel I/O Controller E */
  pfn_handler_t pfnCCW_Handler;                     /* 18 Cache ECC Warning */
  pfn_handler_t pfnCCF_Handler;                     /* 19 Cache ECC Fault */
  pfn_handler_t pfnFPU_Handler;                     /* 20 Floating Point Unit */
  pfn_handler_t pfnIXC_Handler;                     /* 21 Floating Point Unit IXC */
  pfn_handler_t pfnFLEXCOM5_Handler;                /* 22 FLEXCOM 5 */
  pfn_handler_t pfnFLEXCOM6_Handler;                /* 23 FLEXCOM 6 */
  pfn_handler_t pfnFLEXCOM7_Handler;                /* 24 FLEXCOM 7 */
  pfn_handler_t pfnTC0_CH0_Handler;                 /* 25 Timer/Counter 0 Channel 0 */
  pfn_handler_t pfnTC0_CH1_Handler;                 /* 26 Timer/Counter 0 Channel 1 */
  pfn_handler_t pfnTC0_CH2_Handler;                 /* 27 Timer/Counter 0 Channel 2 */
  pfn_handler_t pfnTC1_CH0_Handler;                 /* 28 Timer/Counter 1 Channel 0 */
  pfn_handler_t pfnTC1_CH1_Handler;                 /* 29 Timer/Counter 1 Channel 1 */
  pfn_handler_t pfnTC1_CH2_Handler;                 /* 30 Timer/Counter 1 Channel 2 */
  pfn_handler_t pfnPWM0_Handler;                    /* 31 Pulse Width Modulation 0 */
  pfn_handler_t pfnPWM1_Handler;                    /* 32 Pulse Width Modulation 1 */
  pfn_handler_t pfnICM_Handler;                     /* 33 Integrity Check Monitor */
  pfn_handler_t pfnPIOF_Handler;                    /* 34 Parallel I/O Controller F */
  pfn_handler_t pfnPIOG_Handler;                    /* 35 Parallel I/O Controller G */
  pfn_handler_t pfnMCAN0_INT0_Handler;              /* 36 MCAN Controller 0 Interrupt 0 */
  pfn_handler_t pfnMCAN0_INT1_Handler;              /* 37 MCAN Controller 0 Interrupt 1 */
  pfn_handler_t pfnMCAN1_INT0_Handler;              /* 38 MCAN Controller 1 Interrupt 0 */
  pfn_handler_t pfnMCAN1_INT1_Handler;              /* 39 MCAN Controller 1 Interrupt 1 */
  pfn_handler_t pfnTCMECC_INTFIX_Handler;           /* 40 TCM ECC Fixable error detected */
  pfn_handler_t pfnTCMECC_INTNOFIX_Handler;         /* 41 TCM ECC Un-Fixable error detected */
  pfn_handler_t pfnFLEXRAMECC_INTFIX_Handler;       /* 42 FlexRAM ECC Fixable error detected */
  pfn_handler_t pfnFLEXRAMECC_INTNOFIX_Handler;     /* 43 FlexRAM ECC Un-Fixable error detected */
  pfn_handler_t pfnSHA_Handler;                     /* 44 Secure Hash Algorithm */
  pfn_handler_t pfnFLEXCOM8_Handler;                /* 45 FLEXCOM 8 */
  pfn_handler_t pfnFLEXCOM9_Handler;                /* 46 FLEXCOM 9 */
  pfn_handler_t pfnRSWDT_Handler;                   /* 47 Reinforced Secure Watchdog Timer */
  pfn_handler_t pfnReserved48;
  pfn_handler_t pfnQSPI_Handler;                    /* 49 Quad I/O Serial Peripheral Interface */
  pfn_handler_t pfnHEFC_INT0_Handler;               /* 50 HEFC Flash Interrupts */
  pfn_handler_t pfnHEFC_INTFIX_Handler;             /* 51 HEFC ECC Fixable error detected */
  pfn_handler_t pfnHEFC_INTNOFIX_Handler;           /* 52 HEFC ECC Un-Fixable error detected */
  pfn_handler_t pfnTC2_CH0_Handler;                 /* 53 Timer/Counter 2 Channel 0 */
  pfn_handler_t pfnTC2_CH1_Handler;                 /* 54 Timer/Counter 2 Channel 1 */
  pfn_handler_t pfnTC2_CH2_Handler;                 /* 55 Timer/Counter 2 Channel 2 */
  pfn_handler_t pfnTC3_CH0_Handler;                 /* 56 Timer/Counter 3 Channel 0 */
  pfn_handler_t pfnTC3_CH1_Handler;                 /* 57 Timer/Counter 3 Channel 1 */
  pfn_handler_t pfnTC3_CH2_Handler;                 /* 58 Timer/Counter 3 Channel 2 */
  pfn_handler_t pfnHEMC_INTSDRAMC_Handler;          /* 59 HEMC SDRAM Controller */
  pfn_handler_t pfnHEMC_INTFIX_Handler;             /* 60 HEMC ECC Fixable error detected */
  pfn_handler_t pfnHEMC_INTNOFIX_Handler;           /* 61 HEMC ECC Un-Fixable error detected */
  pfn_handler_t pfnSFR_Handler;                     /* 62 None */
  pfn_handler_t pfnTRNG_Handler;                    /* 63 True Random Generator */
  pfn_handler_t pfnXDMAC_Handler;                   /* 64 eXtended DMA Controller */
  pfn_handler_t pfnSPW_Handler;                     /* 65 SpaceWire */
  pfn_handler_t pfnReserved66;
  pfn_handler_t pfnReserved67;
  pfn_handler_t pfnIP1553_Handler;                  /* 68 MIL 1553 */
  pfn_handler_t pfnGMAC_Handler;                    /* 69 Ethernet MAC */
  pfn_handler_t pfnGMAC_Q1_Handler;                 /* 70 GMAC Queue 1 */
  pfn_handler_t pfnGMAC_Q2_Handler;                 /* 71 GMAC Queue 2 */
  pfn_handler_t pfnGMAC_Q3_Handler;                 /* 72 GMAC Queue 3 */
  pfn_handler_t pfnGMAC_Q4_Handler;                 /* 73 GMAC Queue 4 */
  pfn_handler_t pfnGMAC_Q5_Handler;                 /* 74 GMAC Queue 5 */
}H3DeviceVectors;

#endif //DEVICE_VECTORS_H
