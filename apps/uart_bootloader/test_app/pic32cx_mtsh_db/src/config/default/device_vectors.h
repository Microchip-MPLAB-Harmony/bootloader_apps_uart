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
  pfn_handler_t pfnDWDT0_Handler;                   /* 4 Dual Watchdog 0 Timer */
  pfn_handler_t pfnDWDT1_Handler;                   /* 5 Dual Watchdog 1 Timer */
  pfn_handler_t pfnPMC_Handler;                     /* 6 Power Management Controller */
  pfn_handler_t pfnSEFC0_Handler;                   /* 7 Embedded Flash Controller 0 */
  pfn_handler_t pfnSEFC1_Handler;                   /* 8 Embedded Flash Controller 1 */
  pfn_handler_t pfnFLEXCOM0_Handler;                /* 9 FLEXCOM 0 (USART0/SPI0/TWI0) */
  pfn_handler_t pfnFLEXCOM1_Handler;                /* 10 FLEXCOM 1 (USART1/SPI1/TWI1) */
  pfn_handler_t pfnFLEXCOM2_Handler;                /* 11 FLEXCOM 2 (USART2/SPI2/TWI2) */
  pfn_handler_t pfnFLEXCOM3_Handler;                /* 12 FLEXCOM 3 (USART3/SPI3/TWI3) */
  pfn_handler_t pfnFLEXCOM4_Handler;                /* 13 FLEXCOM 4 (USART4/SPI4/TWI4) */
  pfn_handler_t pfnFLEXCOM5_Handler;                /* 14 FLEXCOM 5 (USART5/SPI5/TWI5) */
  pfn_handler_t pfnFLEXCOM6_Handler;                /* 15 FLEXCOM 6 (USART6/SPI6/TWI6) */
  pfn_handler_t pfnFLEXCOM7_Handler;                /* 16 FLEXCOM 7 (USART7/SPI7/TWI7) */
  pfn_handler_t pfnPIOA_Handler;                    /* 17 Application Core Parallel I/O Controller A (PIOA) */
  pfn_handler_t pfnPIOA_SEC_Handler;                /* 18 Application Core Parallel I/O Controller A (PIOA) Secure Event Interrupt */
  pfn_handler_t pfnPIOB_Handler;                    /* 19 Application Core Parallel I/O Controller B (PIOB) */
  pfn_handler_t pfnPIOB_SEC_Handler;                /* 20 Application Core Parallel I/O Controller B (PIOB) Secure Event Interrupt */
  pfn_handler_t pfnPIOC_Handler;                    /* 21 Application Core Parallel I/O Controller C (PIOC) */
  pfn_handler_t pfnPIOC_SEC_Handler;                /* 22 Application Core Parallel I/O Controller C (PIOC) Secure Event Interrupt */
  pfn_handler_t pfnQSPI_Handler;                    /* 23 Quad IO Serial Peripheral Interface */
  pfn_handler_t pfnADC_Handler;                     /* 24 Analog To Digital Converter */
  pfn_handler_t pfnACC_Handler;                     /* 25 Analog Comparator */
  pfn_handler_t pfnReserved26;
  pfn_handler_t pfnReserved27;
  pfn_handler_t pfnIPC0_Handler;                    /* 28 Application Core Interprocessor communication (IPC0) */
  pfn_handler_t pfnSLCDC_Handler;                   /* 29 Segment LCD Controller */
  pfn_handler_t pfnMEM2MEM0_Handler;                /* 30 Application Core Memory to Memory Transfer Controller (MEM2MEM0) */
  pfn_handler_t pfnTC0_CH0_Handler;                 /* 31 Timer Counter 0, Channel 0 */
  pfn_handler_t pfnTC0_CH1_Handler;                 /* 32 Timer Counter 0, Channel 1 */
  pfn_handler_t pfnTC0_CH2_Handler;                 /* 33 Timer Counter 0, Channel 2 */
  pfn_handler_t pfnTC1_CH0_Handler;                 /* 34 Timer Counter 1, Channel 0 */
  pfn_handler_t pfnTC1_CH1_Handler;                 /* 35 Timer Counter 1, Channel 1 */
  pfn_handler_t pfnTC1_CH2_Handler;                 /* 36 Timer Counter 1, Channel 2 */
  pfn_handler_t pfnTC2_CH0_Handler;                 /* 37 Timer Counter 2, Channel 0 */
  pfn_handler_t pfnTC2_CH1_Handler;                 /* 38 Timer Counter 2, Channel 1 */
  pfn_handler_t pfnTC2_CH2_Handler;                 /* 39 Timer Counter 2, Channel 2 */
  pfn_handler_t pfnTC0_C0SEC_Handler;               /* 40 Timer Counter 0, Channel 0, Secure IRQ */
  pfn_handler_t pfnTC0_C1SEC_Handler;               /* 41 Timer Counter 0, Channel 1, Secure IRQ */
  pfn_handler_t pfnTC0_C2SEC_Handler;               /* 42 Timer Counter 0, Channel 2, Secure IRQ */
  pfn_handler_t pfnTC1_C0SEC_Handler;               /* 43 Timer Counter 1, Channel 0, Secure IRQ */
  pfn_handler_t pfnTC1_C1SEC_Handler;               /* 44 Timer Counter 1, Channel 1, Secure IRQ */
  pfn_handler_t pfnTC1_C2SEC_Handler;               /* 45 Timer Counter 1, Channel 2, Secure IRQ */
  pfn_handler_t pfnTC2_C0SEC_Handler;               /* 46 Timer Counter 2, Channel 0, Secure IRQ */
  pfn_handler_t pfnTC2_C1SEC_Handler;               /* 47 Timer Counter 2, Channel 1, Secure IRQ */
  pfn_handler_t pfnTC2_C2SEC_Handler;               /* 48 Timer Counter 2, Channel 2, Secure IRQ */
  pfn_handler_t pfnAES_Handler;                     /* 49 Advanced Enhanced Standard */
  pfn_handler_t pfnAES_AESSEC_Handler;              /* 50 AES Secure Event Interrupt */
  pfn_handler_t pfnAESB_Handler;                    /* 51 AES Bridge */
  pfn_handler_t pfnAESB_AESBSEC_Handler;            /* 52 AES Bridge Secure Interrupt */
  pfn_handler_t pfnSHA_Handler;                     /* 53 Secure Hash Algorithm */
  pfn_handler_t pfnSHA_SHASEC_Handler;              /* 54 SHA Secure Event Interrupt */
  pfn_handler_t pfnTRNG_Handler;                    /* 55 True Random Generator */
  pfn_handler_t pfnTRNG_TRNGSEC_Handler;            /* 56 TRNG Secure Event Interrupt */
  pfn_handler_t pfnICM_Handler;                     /* 57 Integrity Check Module */
  pfn_handler_t pfnICM_ICMSEC_Handler;              /* 58 Integrity Check Module */
  pfn_handler_t pfnCPKCC_Handler;                   /* 59 Public Key Cryptography Controller */
  pfn_handler_t pfnMATRIX0_Handler;                 /* 60 High-Speed Application Core Matrix (HSACM) (MATRIX0) */
  pfn_handler_t pfnMATRIX1_Handler;                 /* 61 Low-Speed Application Core Matrix (LSACM) (MATRIX1) */
  pfn_handler_t pfnSUPC_WKUP3_Handler;              /* 62 External interrupt 3 */
  pfn_handler_t pfnSUPC_WKUP4_Handler;              /* 63 External interrupt 4 */
  pfn_handler_t pfnSUPC_WKUP5_Handler;              /* 64 External interrupt 5 */
  pfn_handler_t pfnSUPC_WKUP6_Handler;              /* 65 External interrupt 6 */
  pfn_handler_t pfnSUPC_WKUP7_Handler;              /* 66 External interrupt 7 */
  pfn_handler_t pfnSUPC_WKUP8_Handler;              /* 67 External interrupt 8 */
  pfn_handler_t pfnSUPC_WKUP9_Handler;              /* 68 External interrupt 9 */
  pfn_handler_t pfnSUPC_WKUP10_Handler;             /* 69 External interrupt 10 */
  pfn_handler_t pfnSUPC_WKUP11_Handler;             /* 70 External interrupt 11 */
  pfn_handler_t pfnSUPC_WKUP12_Handler;             /* 71 External interrupt 12 */
  pfn_handler_t pfnSUPC_WKUP13_Handler;             /* 72 External interrupt 13 */
  pfn_handler_t pfnSUPC_WKUP14_Handler;             /* 73 External interrupt 14 */
  pfn_handler_t pfnSUPC_WKUP15_Handler;             /* 74 External interrupt 15 */
  pfn_handler_t pfnReserved75;
  pfn_handler_t pfnEMAFE_SLINK_Handler;             /* 76 Energy Metering Analog Front End Serial Link Interrupt (EMAFE_SLINK) */
  pfn_handler_t pfnEMAFE_DATA_Handler;              /* 77 Energy Metering Analog Front End Data Ready Interrupt (EMAFE_DATA) */
  pfn_handler_t pfnMEM2MEM1_Handler;                /* 78 Metrology Core Memory to Memory Transfer Controller 1 (MEM2MEM1) */
  pfn_handler_t pfnTC3_CH0_Handler;                 /* 79 Timer Counter 3, Channel 0 */
  pfn_handler_t pfnTC3_CH1_Handler;                 /* 80 Timer Counter 3, Channel 1 */
  pfn_handler_t pfnTC3_CH2_Handler;                 /* 81 Timer Counter 3, Channel 2 */
  pfn_handler_t pfnTC3_C0SEC_Handler;               /* 82 Timer Counter 3, Channel 0, Secure IRQ */
  pfn_handler_t pfnTC3_C1SEC_Handler;               /* 83 Timer Counter 3, Channel 1, Secure IRQ */
  pfn_handler_t pfnTC3_C2SEC_Handler;               /* 84 Timer Counter 3, Channel 2, Secure IRQ */
  pfn_handler_t pfnPIOD_Handler;                    /* 85 Metrology Core Parallel I/O Controller D (PIOD) */
  pfn_handler_t pfnPIOD_SEC_Handler;                /* 86 Metrology Core Parallel I/O Controller A Secure Interupt (named as PIOD) */
  pfn_handler_t pfnUART_Handler;                    /* 87 Optical UART */
  pfn_handler_t pfnIPC1_Handler;                    /* 88 Metrology Core Interprocessor communication (IPC1) */
  pfn_handler_t pfnMCSPI_Handler;                   /* 89 Multi-Channel SPI */
  pfn_handler_t pfnPWM_Handler;                     /* 90 Pulse Width Modulation */
  pfn_handler_t pfnReserved91;
  pfn_handler_t pfnReserved92;
  pfn_handler_t pfnReserved93;
  pfn_handler_t pfnMATRIX2_Handler;                 /* 94 High-Speed Metrology Core Matrix (HSMCM) (Formely MATRIX2) */
  pfn_handler_t pfnMATRIX3_Handler;                 /* 95 Low-Speed Metrology Core Matrix (LSMCM) (Formely MATRIX3) */
}H3DeviceVectors;

#endif //DEVICE_VECTORS_H
