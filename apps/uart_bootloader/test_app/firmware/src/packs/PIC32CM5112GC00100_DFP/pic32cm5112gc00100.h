/*
 * Header file for PIC32CM5112GC00100
 *
 * Copyright (c) 2025 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/* File generated from device description file (ATDF) version 2024-11-05T16:47:43Z */
#ifndef _PIC32CM5112GC00100_H_
#define _PIC32CM5112GC00100_H_

/* Header version uses Semantic Versioning 2.0.0 (https://semver.org/) */
#define HEADER_FORMAT_VERSION "2.1.1"

#define HEADER_FORMAT_VERSION_MAJOR (2)
#define HEADER_FORMAT_VERSION_MINOR (1)
#define HEADER_FORMAT_VERSION_PATCH (1)

/* PIC32CM5112GC00100 definitions
  This file defines all structures and symbols for PIC32CM5112GC00100:
    - registers and bitfields
    - peripheral base address
    - peripheral ID
    - PIO definitions
*/

#ifdef __cplusplus
 extern "C" {
#endif

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#  include <stdint.h>
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !defined(SKIP_INTEGER_LITERALS)
#  if defined(_UINT8_) || defined(_UINT16_) || defined(_UINT32_)
#    error "Integer constant value macros already defined elsewhere"
#  endif

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* Macros that deal with sizes of integer constants for C/C++ */
#  define _UINT8_(x)   ((uint8_t)(x))    /* C code: 8-bits unsigned integer constant value */
#  define _UINT16_(x)  ((uint16_t)(x))   /* C code: 16-bits unsigned integer constant value */
#  define _UINT32_(x)  ((uint32_t)(x))   /* C code: 32-bits unsigned integer constant value */

#else /* Assembler */

#  define _UINT8_(x) x    /* Assembler: 8-bits unsigned integer constant value */
#  define _UINT16_(x) x   /* Assembler: 16-bits unsigned integer constant value */
#  define _UINT32_(x) x   /* Assembler: 32-bits unsigned integer constant value */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* SKIP_INTEGER_LITERALS */

/* ************************************************************************** */
/*                  CMSIS DEFINITIONS FOR PIC32CM5112GC00100                  */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* Interrupt Number Definition */
typedef enum IRQn
{
/******  CORTEX-M23 Processor Exceptions Numbers ******************************/
  Reset_IRQn                = -15, /* -15 Reset Vector, invoked on Power up and warm reset */
  NonMaskableInt_IRQn       = -14, /* -14 Non maskable Interrupt, cannot be stopped or preempted */
  HardFault_IRQn            = -13, /* -13 Hard Fault, all classes of Fault    */
  SVCall_IRQn               =  -5, /* -5  System Service Call via SVC instruction */
  PendSV_IRQn               =  -2, /* -2  Pendable request for system service */
  SysTick_IRQn              =  -1, /* -1  System Tick Timer                   */

/* ************* PIC32CM5112GC00100 specific Interrupt Numbers ************** */
  FCR_IRQn                  =   0, /* 0   Polaris Flash Read Controller (FCR) */
  FCW_IRQn                  =   1, /* 1   Polaris Flash Write Controller (FCW) */
  PM_IRQn                   =   2, /* 2   Power Manager (PM)                  */
  SUPC_IRQn                 =   3, /* 3   Supply Controller (SUPC)            */
  OSCCTRL_XOSCRDY_IRQn      =   4, /* 4   Oscillators Control (OSCCTRL)       */
  OSCCTRL_DFLLRDY_IRQn      =   5, /* 5   Oscillators Control (OSCCTRL)       */
  OSCCTRL_PLLLOCKR_0_IRQn   =   6, /* 6   Oscillators Control (OSCCTRL)       */
  OSC32KCTRL_XOSC32KRDY_IRQn =   7, /* 7   32kHz Oscillators Control (OSC32KCTRL) */
  OSC32KCTRL_XOSC32KFAIL_IRQn =   8, /* 8   32kHz Oscillators Control (OSC32KCTRL) */
  MCLK_IRQn                 =   9, /* 9   Polaris Main Clock Controller (MCLK) */
  FREQM_IRQn                =  10, /* 10  Frequency Meter (FREQM)             */
  WDT_IRQn                  =  11, /* 11  Watchdog Timer (WDT)                */
  RTC_TAMPER_IRQn           =  12, /* 12  Real-Time Counter (RTC)             */
  RTC_OVF_IRQn              =  13, /* 13  Real-Time Counter (RTC)             */
  RTC_PER0_IRQn             =  14, /* 14  Real-Time Counter (RTC)             */
  RTC_CMP0_IRQn             =  15, /* 15  Real-Time Counter (RTC)             */
  EIC_EXTINT0_IRQn          =  16, /* 16  External Interrupt Controller (EIC) */
  EIC_EXTINT1_IRQn          =  17, /* 17  External Interrupt Controller (EIC) */
  EIC_EXTINT2_IRQn          =  18, /* 18  External Interrupt Controller (EIC) */
  EIC_EXTINT3_IRQn          =  19, /* 19  External Interrupt Controller (EIC) */
  EIC_EXTINT4_IRQn          =  20, /* 20  External Interrupt Controller (EIC) */
  EIC_EXTINT5_IRQn          =  21, /* 21  External Interrupt Controller (EIC) */
  EIC_EXTINT6_IRQn          =  22, /* 22  External Interrupt Controller (EIC) */
  EIC_EXTINT7_IRQn          =  23, /* 23  External Interrupt Controller (EIC) */
  EIC_EXTINT8_IRQn          =  24, /* 24  External Interrupt Controller (EIC) */
  EIC_EXTINT9_IRQn          =  25, /* 25  External Interrupt Controller (EIC) */
  EIC_EXTINT10_IRQn         =  26, /* 26  External Interrupt Controller (EIC) */
  EIC_EXTINT11_IRQn         =  27, /* 27  External Interrupt Controller (EIC) */
  EIC_EXTINT12_IRQn         =  28, /* 28  External Interrupt Controller (EIC) */
  EIC_EXTINT13_IRQn         =  29, /* 29  External Interrupt Controller (EIC) */
  EIC_EXTINT14_IRQn         =  30, /* 30  External Interrupt Controller (EIC) */
  EIC_EXTINT15_IRQn         =  31, /* 31  External Interrupt Controller (EIC) */
  EIC_NSCHK_IRQn            =  32, /* 32  External Interrupt Controller (EIC) */
  MCRAMC_IRQn               =  34, /* 34  Multi-Channel RAM Controller (MCRAMC) */
  CAN0_INT0_IRQn            =  35, /* 35  Control Area Network (CAN0)         */
  CAN0_INT1_IRQn            =  36, /* 36  Control Area Network (CAN0)         */
  CAN0_BERR_IRQn            =  37, /* 37  Control Area Network (CAN0)         */
  CAN1_INT0_IRQn            =  38, /* 38  Control Area Network (CAN1)         */
  CAN1_INT1_IRQn            =  39, /* 39  Control Area Network (CAN1)         */
  CAN1_BERR_IRQn            =  40, /* 40  Control Area Network (CAN1)         */
  PORT_IRQn                 =  41, /* 41  Port Module (PORT)                  */
  DMAC_TCMPL0_IRQn          =  42, /* 42  Direct Memory Access Controller (DMAC) */
  DMAC_TCMPL1_IRQn          =  43, /* 43  Direct Memory Access Controller (DMAC) */
  DMAC_TCMPL2_IRQn          =  44, /* 44  Direct Memory Access Controller (DMAC) */
  DMAC_TCMPL3_IRQn          =  45, /* 45  Direct Memory Access Controller (DMAC) */
  DMAC_TCMPL4_IRQn          =  46, /* 46  Direct Memory Access Controller (DMAC) */
  HMATRIX2_IRQn             =  47, /* 47  HSB Matrix (HMATRIX2)               */
  EVSYS_EVD0_IRQn           =  48, /* 48  Event System Interface (EVSYS)      */
  EVSYS_EVD1_IRQn           =  49, /* 49  Event System Interface (EVSYS)      */
  EVSYS_EVD2_IRQn           =  50, /* 50  Event System Interface (EVSYS)      */
  EVSYS_EVD3_IRQn           =  51, /* 51  Event System Interface (EVSYS)      */
  EVSYS_EVD4_IRQn           =  52, /* 52  Event System Interface (EVSYS)      */
  EVSYS_EVD5_IRQn           =  53, /* 53  Event System Interface (EVSYS)      */
  EVSYS_EVD6_IRQn           =  54, /* 54  Event System Interface (EVSYS)      */
  EVSYS_EVD7_IRQn           =  55, /* 55  Event System Interface (EVSYS)      */
  EVSYS_EVD8_IRQn           =  56, /* 56  Event System Interface (EVSYS)      */
  EVSYS_EVD9_IRQn           =  57, /* 57  Event System Interface (EVSYS)      */
  EVSYS_EVD10_IRQn          =  58, /* 58  Event System Interface (EVSYS)      */
  EVSYS_EVD11_IRQn          =  59, /* 59  Event System Interface (EVSYS)      */
  SERCOM0_6_IRQn            =  60, /* 60  Serial Communication Interface (SERCOM0) */
  SERCOM0_5_IRQn            =  61, /* 61  Serial Communication Interface (SERCOM0) */
  SERCOM0_0_IRQn            =  62, /* 62  Serial Communication Interface (SERCOM0) */
  SERCOM0_1_IRQn            =  63, /* 63  Serial Communication Interface (SERCOM0) */
  SERCOM0_2_IRQn            =  64, /* 64  Serial Communication Interface (SERCOM0) */
  SERCOM0_3_IRQn            =  65, /* 65  Serial Communication Interface (SERCOM0) */
  SERCOM0_4_IRQn            =  66, /* 66  Serial Communication Interface (SERCOM0) */
  SERCOM1_6_IRQn            =  67, /* 67  Serial Communication Interface (SERCOM1) */
  SERCOM1_5_IRQn            =  68, /* 68  Serial Communication Interface (SERCOM1) */
  SERCOM1_0_IRQn            =  69, /* 69  Serial Communication Interface (SERCOM1) */
  SERCOM1_1_IRQn            =  70, /* 70  Serial Communication Interface (SERCOM1) */
  SERCOM1_2_IRQn            =  71, /* 71  Serial Communication Interface (SERCOM1) */
  SERCOM1_3_IRQn            =  72, /* 72  Serial Communication Interface (SERCOM1) */
  SERCOM1_4_IRQn            =  73, /* 73  Serial Communication Interface (SERCOM1) */
  SERCOM2_6_IRQn            =  74, /* 74  Serial Communication Interface (SERCOM2) */
  SERCOM2_5_IRQn            =  75, /* 75  Serial Communication Interface (SERCOM2) */
  SERCOM2_0_IRQn            =  76, /* 76  Serial Communication Interface (SERCOM2) */
  SERCOM2_1_IRQn            =  77, /* 77  Serial Communication Interface (SERCOM2) */
  SERCOM2_2_IRQn            =  78, /* 78  Serial Communication Interface (SERCOM2) */
  SERCOM2_3_IRQn            =  79, /* 79  Serial Communication Interface (SERCOM2) */
  SERCOM2_4_IRQn            =  80, /* 80  Serial Communication Interface (SERCOM2) */
  SERCOM3_6_IRQn            =  81, /* 81  Serial Communication Interface (SERCOM3) */
  SERCOM3_5_IRQn            =  82, /* 82  Serial Communication Interface (SERCOM3) */
  SERCOM3_0_IRQn            =  83, /* 83  Serial Communication Interface (SERCOM3) */
  SERCOM3_1_IRQn            =  84, /* 84  Serial Communication Interface (SERCOM3) */
  SERCOM3_2_IRQn            =  85, /* 85  Serial Communication Interface (SERCOM3) */
  SERCOM3_3_IRQn            =  86, /* 86  Serial Communication Interface (SERCOM3) */
  SERCOM3_4_IRQn            =  87, /* 87  Serial Communication Interface (SERCOM3) */
  TCC0_DFS_IRQn             =  88, /* 88  Timer Counter for Control Applications (TCC0) */
  TCC0_CNT_IRQn             =  89, /* 89  Timer Counter for Control Applications (TCC0) */
  TCC0_MC0_IRQn             =  90, /* 90  Timer Counter for Control Applications (TCC0) */
  TCC0_MC1_IRQn             =  91, /* 91  Timer Counter for Control Applications (TCC0) */
  TCC1_DFS_IRQn             =  92, /* 92  Timer Counter for Control Applications (TCC1) */
  TCC1_CNT_IRQn             =  93, /* 93  Timer Counter for Control Applications (TCC1) */
  TCC1_MC0_IRQn             =  94, /* 94  Timer Counter for Control Applications (TCC1) */
  TCC1_MC1_IRQn             =  95, /* 95  Timer Counter for Control Applications (TCC1) */
  TCC2_DFS_IRQn             =  96, /* 96  Timer Counter for Control Applications (TCC2) */
  TCC2_CNT_IRQn             =  97, /* 97  Timer Counter for Control Applications (TCC2) */
  TCC2_MC0_IRQn             =  98, /* 98  Timer Counter for Control Applications (TCC2) */
  TCC2_MC1_IRQn             =  99, /* 99  Timer Counter for Control Applications (TCC2) */
  TCC3_DFS_IRQn             = 100, /* 100 Timer Counter for Control Applications (TCC3) */
  TCC3_CNT_IRQn             = 101, /* 101 Timer Counter for Control Applications (TCC3) */
  TCC3_MC0_IRQn             = 102, /* 102 Timer Counter for Control Applications (TCC3) */
  TCC3_MC1_IRQn             = 103, /* 103 Timer Counter for Control Applications (TCC3) */
  SERCOM4_6_IRQn            = 104, /* 104 Serial Communication Interface (SERCOM4) */
  SERCOM4_5_IRQn            = 105, /* 105 Serial Communication Interface (SERCOM4) */
  SERCOM4_0_IRQn            = 106, /* 106 Serial Communication Interface (SERCOM4) */
  SERCOM4_1_IRQn            = 107, /* 107 Serial Communication Interface (SERCOM4) */
  SERCOM4_2_IRQn            = 108, /* 108 Serial Communication Interface (SERCOM4) */
  SERCOM4_3_IRQn            = 109, /* 109 Serial Communication Interface (SERCOM4) */
  SERCOM4_4_IRQn            = 110, /* 110 Serial Communication Interface (SERCOM4) */
  SERCOM5_6_IRQn            = 111, /* 111 Serial Communication Interface (SERCOM5) */
  SERCOM5_5_IRQn            = 112, /* 112 Serial Communication Interface (SERCOM5) */
  SERCOM5_0_IRQn            = 113, /* 113 Serial Communication Interface (SERCOM5) */
  SERCOM5_1_IRQn            = 114, /* 114 Serial Communication Interface (SERCOM5) */
  SERCOM5_2_IRQn            = 115, /* 115 Serial Communication Interface (SERCOM5) */
  SERCOM5_3_IRQn            = 116, /* 116 Serial Communication Interface (SERCOM5) */
  SERCOM5_4_IRQn            = 117, /* 117 Serial Communication Interface (SERCOM5) */
  TCC4_DFS_IRQn             = 118, /* 118 Timer Counter for Control Applications (TCC4) */
  TCC4_CNT_IRQn             = 119, /* 119 Timer Counter for Control Applications (TCC4) */
  TCC4_MC0_IRQn             = 120, /* 120 Timer Counter for Control Applications (TCC4) */
  TCC4_MC1_IRQn             = 121, /* 121 Timer Counter for Control Applications (TCC4) */
  TCC5_DFS_IRQn             = 122, /* 122 Timer Counter for Control Applications (TCC5) */
  TCC5_CNT_IRQn             = 123, /* 123 Timer Counter for Control Applications (TCC5) */
  TCC5_MC0_IRQn             = 124, /* 124 Timer Counter for Control Applications (TCC5) */
  TCC5_MC1_IRQn             = 125, /* 125 Timer Counter for Control Applications (TCC5) */
  TCC6_DFS_IRQn             = 126, /* 126 Timer Counter for Control Applications (TCC6) */
  TCC6_CNT_IRQn             = 127, /* 127 Timer Counter for Control Applications (TCC6) */
  TCC6_MC0_IRQn             = 128, /* 128 Timer Counter for Control Applications (TCC6) */
  TCC6_MC1_IRQn             = 129, /* 129 Timer Counter for Control Applications (TCC6) */
  ADC_REQ0_IRQn             = 130, /* 130 ADC Controller (ADC)                */
  ADC_REQ1_IRQn             = 131, /* 131 ADC Controller (ADC)                */
  AC_IRQn                   = 132, /* 132 Analog Comparator Controller (AC)   */
  PTC_IRQn                  = 133, /* 133 Polaris Peripheral Touch Controller (PTC) */
  USB_EORSMDNRSM_IRQn       = 134, /* 134 Full-Speed Universal Serial Bus (USB) */
  USB_SOFHSOF_IRQn          = 135, /* 135 Full-Speed Universal Serial Bus (USB) */
  USB_TRCPT00_IRQn          = 136, /* 136 Full-Speed Universal Serial Bus (USB) */
  USB_TRCPT10_IRQn          = 137, /* 137 Full-Speed Universal Serial Bus (USB) */
  AT_IRQn                   = 138, /* 138 Anti-Tamper Controller (AT) (AT)    */

  PERIPH_MAX_IRQn           = 138  /* Max peripheral ID */
} IRQn_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct _DeviceVectors
{
  /* Stack pointer */
  void* pvStack;
  /* CORTEX-M23 handlers */
  void* pfnReset_Handler;                        /* -15 Reset Vector, invoked on Power up and warm reset */
  void* pfnNonMaskableInt_Handler;               /* -14 Non maskable Interrupt, cannot be stopped or preempted */
  void* pfnHardFault_Handler;                    /* -13 Hard Fault, all classes of Fault */
  void* pvReservedC12;
  void* pvReservedC11;
  void* pvReservedC10;
  void* pvReservedC9;
  void* pvReservedC8;
  void* pvReservedC7;
  void* pvReservedC6;
  void* pfnSVCall_Handler;                       /*  -5 System Service Call via SVC instruction */
  void* pvReservedC4;
  void* pvReservedC3;
  void* pfnPendSV_Handler;                       /*  -2 Pendable request for system service */
  void* pfnSysTick_Handler;                      /*  -1 System Tick Timer */

  /* Peripheral handlers */
  void* pfnFCR_Handler;                          /*   0 Polaris Flash Read Controller (FCR) */
  void* pfnFCW_Handler;                          /*   1 Polaris Flash Write Controller (FCW) */
  void* pfnPM_Handler;                           /*   2 Power Manager (PM) */
  void* pfnSUPC_Handler;                         /*   3 Supply Controller (SUPC) */
  void* pfnOSCCTRL_XOSCRDY_Handler;              /*   4 Oscillators Control (OSCCTRL) */
  void* pfnOSCCTRL_DFLLRDY_Handler;              /*   5 Oscillators Control (OSCCTRL) */
  void* pfnOSCCTRL_PLLLOCKR_0_Handler;           /*   6 Oscillators Control (OSCCTRL) */
  void* pfnOSC32KCTRL_XOSC32KRDY_Handler;        /*   7 32kHz Oscillators Control (OSC32KCTRL) */
  void* pfnOSC32KCTRL_XOSC32KFAIL_Handler;       /*   8 32kHz Oscillators Control (OSC32KCTRL) */
  void* pfnMCLK_Handler;                         /*   9 Polaris Main Clock Controller (MCLK) */
  void* pfnFREQM_Handler;                        /*  10 Frequency Meter (FREQM) */
  void* pfnWDT_Handler;                          /*  11 Watchdog Timer (WDT) */
  void* pfnRTC_TAMPER_Handler;                   /*  12 Real-Time Counter (RTC) */
  void* pfnRTC_OVF_Handler;                      /*  13 Real-Time Counter (RTC) */
  void* pfnRTC_PER0_Handler;                     /*  14 Real-Time Counter (RTC) */
  void* pfnRTC_CMP0_Handler;                     /*  15 Real-Time Counter (RTC) */
  void* pfnEIC_EXTINT0_Handler;                  /*  16 External Interrupt Controller (EIC) */
  void* pfnEIC_EXTINT1_Handler;                  /*  17 External Interrupt Controller (EIC) */
  void* pfnEIC_EXTINT2_Handler;                  /*  18 External Interrupt Controller (EIC) */
  void* pfnEIC_EXTINT3_Handler;                  /*  19 External Interrupt Controller (EIC) */
  void* pfnEIC_EXTINT4_Handler;                  /*  20 External Interrupt Controller (EIC) */
  void* pfnEIC_EXTINT5_Handler;                  /*  21 External Interrupt Controller (EIC) */
  void* pfnEIC_EXTINT6_Handler;                  /*  22 External Interrupt Controller (EIC) */
  void* pfnEIC_EXTINT7_Handler;                  /*  23 External Interrupt Controller (EIC) */
  void* pfnEIC_EXTINT8_Handler;                  /*  24 External Interrupt Controller (EIC) */
  void* pfnEIC_EXTINT9_Handler;                  /*  25 External Interrupt Controller (EIC) */
  void* pfnEIC_EXTINT10_Handler;                 /*  26 External Interrupt Controller (EIC) */
  void* pfnEIC_EXTINT11_Handler;                 /*  27 External Interrupt Controller (EIC) */
  void* pfnEIC_EXTINT12_Handler;                 /*  28 External Interrupt Controller (EIC) */
  void* pfnEIC_EXTINT13_Handler;                 /*  29 External Interrupt Controller (EIC) */
  void* pfnEIC_EXTINT14_Handler;                 /*  30 External Interrupt Controller (EIC) */
  void* pfnEIC_EXTINT15_Handler;                 /*  31 External Interrupt Controller (EIC) */
  void* pfnEIC_NSCHK_Handler;                    /*  32 External Interrupt Controller (EIC) */
  void* pvReserved33;
  void* pfnMCRAMC_Handler;                       /*  34 Multi-Channel RAM Controller (MCRAMC) */
  void* pfnCAN0_INT0_Handler;                    /*  35 Control Area Network (CAN0) */
  void* pfnCAN0_INT1_Handler;                    /*  36 Control Area Network (CAN0) */
  void* pfnCAN0_BERR_Handler;                    /*  37 Control Area Network (CAN0) */
  void* pfnCAN1_INT0_Handler;                    /*  38 Control Area Network (CAN1) */
  void* pfnCAN1_INT1_Handler;                    /*  39 Control Area Network (CAN1) */
  void* pfnCAN1_BERR_Handler;                    /*  40 Control Area Network (CAN1) */
  void* pfnPORT_Handler;                         /*  41 Port Module (PORT) */
  void* pfnDMAC_TCMPL0_Handler;                  /*  42 Direct Memory Access Controller (DMAC) */
  void* pfnDMAC_TCMPL1_Handler;                  /*  43 Direct Memory Access Controller (DMAC) */
  void* pfnDMAC_TCMPL2_Handler;                  /*  44 Direct Memory Access Controller (DMAC) */
  void* pfnDMAC_TCMPL3_Handler;                  /*  45 Direct Memory Access Controller (DMAC) */
  void* pfnDMAC_TCMPL4_Handler;                  /*  46 Direct Memory Access Controller (DMAC) */
  void* pfnHMATRIX2_Handler;                     /*  47 HSB Matrix (HMATRIX2) */
  void* pfnEVSYS_EVD0_Handler;                   /*  48 Event System Interface (EVSYS) */
  void* pfnEVSYS_EVD1_Handler;                   /*  49 Event System Interface (EVSYS) */
  void* pfnEVSYS_EVD2_Handler;                   /*  50 Event System Interface (EVSYS) */
  void* pfnEVSYS_EVD3_Handler;                   /*  51 Event System Interface (EVSYS) */
  void* pfnEVSYS_EVD4_Handler;                   /*  52 Event System Interface (EVSYS) */
  void* pfnEVSYS_EVD5_Handler;                   /*  53 Event System Interface (EVSYS) */
  void* pfnEVSYS_EVD6_Handler;                   /*  54 Event System Interface (EVSYS) */
  void* pfnEVSYS_EVD7_Handler;                   /*  55 Event System Interface (EVSYS) */
  void* pfnEVSYS_EVD8_Handler;                   /*  56 Event System Interface (EVSYS) */
  void* pfnEVSYS_EVD9_Handler;                   /*  57 Event System Interface (EVSYS) */
  void* pfnEVSYS_EVD10_Handler;                  /*  58 Event System Interface (EVSYS) */
  void* pfnEVSYS_EVD11_Handler;                  /*  59 Event System Interface (EVSYS) */
  void* pfnSERCOM0_6_Handler;                    /*  60 Serial Communication Interface (SERCOM0) */
  void* pfnSERCOM0_5_Handler;                    /*  61 Serial Communication Interface (SERCOM0) */
  void* pfnSERCOM0_0_Handler;                    /*  62 Serial Communication Interface (SERCOM0) */
  void* pfnSERCOM0_1_Handler;                    /*  63 Serial Communication Interface (SERCOM0) */
  void* pfnSERCOM0_2_Handler;                    /*  64 Serial Communication Interface (SERCOM0) */
  void* pfnSERCOM0_3_Handler;                    /*  65 Serial Communication Interface (SERCOM0) */
  void* pfnSERCOM0_4_Handler;                    /*  66 Serial Communication Interface (SERCOM0) */
  void* pfnSERCOM1_6_Handler;                    /*  67 Serial Communication Interface (SERCOM1) */
  void* pfnSERCOM1_5_Handler;                    /*  68 Serial Communication Interface (SERCOM1) */
  void* pfnSERCOM1_0_Handler;                    /*  69 Serial Communication Interface (SERCOM1) */
  void* pfnSERCOM1_1_Handler;                    /*  70 Serial Communication Interface (SERCOM1) */
  void* pfnSERCOM1_2_Handler;                    /*  71 Serial Communication Interface (SERCOM1) */
  void* pfnSERCOM1_3_Handler;                    /*  72 Serial Communication Interface (SERCOM1) */
  void* pfnSERCOM1_4_Handler;                    /*  73 Serial Communication Interface (SERCOM1) */
  void* pfnSERCOM2_6_Handler;                    /*  74 Serial Communication Interface (SERCOM2) */
  void* pfnSERCOM2_5_Handler;                    /*  75 Serial Communication Interface (SERCOM2) */
  void* pfnSERCOM2_0_Handler;                    /*  76 Serial Communication Interface (SERCOM2) */
  void* pfnSERCOM2_1_Handler;                    /*  77 Serial Communication Interface (SERCOM2) */
  void* pfnSERCOM2_2_Handler;                    /*  78 Serial Communication Interface (SERCOM2) */
  void* pfnSERCOM2_3_Handler;                    /*  79 Serial Communication Interface (SERCOM2) */
  void* pfnSERCOM2_4_Handler;                    /*  80 Serial Communication Interface (SERCOM2) */
  void* pfnSERCOM3_6_Handler;                    /*  81 Serial Communication Interface (SERCOM3) */
  void* pfnSERCOM3_5_Handler;                    /*  82 Serial Communication Interface (SERCOM3) */
  void* pfnSERCOM3_0_Handler;                    /*  83 Serial Communication Interface (SERCOM3) */
  void* pfnSERCOM3_1_Handler;                    /*  84 Serial Communication Interface (SERCOM3) */
  void* pfnSERCOM3_2_Handler;                    /*  85 Serial Communication Interface (SERCOM3) */
  void* pfnSERCOM3_3_Handler;                    /*  86 Serial Communication Interface (SERCOM3) */
  void* pfnSERCOM3_4_Handler;                    /*  87 Serial Communication Interface (SERCOM3) */
  void* pfnTCC0_DFS_Handler;                     /*  88 Timer Counter for Control Applications (TCC0) */
  void* pfnTCC0_CNT_Handler;                     /*  89 Timer Counter for Control Applications (TCC0) */
  void* pfnTCC0_MC0_Handler;                     /*  90 Timer Counter for Control Applications (TCC0) */
  void* pfnTCC0_MC1_Handler;                     /*  91 Timer Counter for Control Applications (TCC0) */
  void* pfnTCC1_DFS_Handler;                     /*  92 Timer Counter for Control Applications (TCC1) */
  void* pfnTCC1_CNT_Handler;                     /*  93 Timer Counter for Control Applications (TCC1) */
  void* pfnTCC1_MC0_Handler;                     /*  94 Timer Counter for Control Applications (TCC1) */
  void* pfnTCC1_MC1_Handler;                     /*  95 Timer Counter for Control Applications (TCC1) */
  void* pfnTCC2_DFS_Handler;                     /*  96 Timer Counter for Control Applications (TCC2) */
  void* pfnTCC2_CNT_Handler;                     /*  97 Timer Counter for Control Applications (TCC2) */
  void* pfnTCC2_MC0_Handler;                     /*  98 Timer Counter for Control Applications (TCC2) */
  void* pfnTCC2_MC1_Handler;                     /*  99 Timer Counter for Control Applications (TCC2) */
  void* pfnTCC3_DFS_Handler;                     /* 100 Timer Counter for Control Applications (TCC3) */
  void* pfnTCC3_CNT_Handler;                     /* 101 Timer Counter for Control Applications (TCC3) */
  void* pfnTCC3_MC0_Handler;                     /* 102 Timer Counter for Control Applications (TCC3) */
  void* pfnTCC3_MC1_Handler;                     /* 103 Timer Counter for Control Applications (TCC3) */
  void* pfnSERCOM4_6_Handler;                    /* 104 Serial Communication Interface (SERCOM4) */
  void* pfnSERCOM4_5_Handler;                    /* 105 Serial Communication Interface (SERCOM4) */
  void* pfnSERCOM4_0_Handler;                    /* 106 Serial Communication Interface (SERCOM4) */
  void* pfnSERCOM4_1_Handler;                    /* 107 Serial Communication Interface (SERCOM4) */
  void* pfnSERCOM4_2_Handler;                    /* 108 Serial Communication Interface (SERCOM4) */
  void* pfnSERCOM4_3_Handler;                    /* 109 Serial Communication Interface (SERCOM4) */
  void* pfnSERCOM4_4_Handler;                    /* 110 Serial Communication Interface (SERCOM4) */
  void* pfnSERCOM5_6_Handler;                    /* 111 Serial Communication Interface (SERCOM5) */
  void* pfnSERCOM5_5_Handler;                    /* 112 Serial Communication Interface (SERCOM5) */
  void* pfnSERCOM5_0_Handler;                    /* 113 Serial Communication Interface (SERCOM5) */
  void* pfnSERCOM5_1_Handler;                    /* 114 Serial Communication Interface (SERCOM5) */
  void* pfnSERCOM5_2_Handler;                    /* 115 Serial Communication Interface (SERCOM5) */
  void* pfnSERCOM5_3_Handler;                    /* 116 Serial Communication Interface (SERCOM5) */
  void* pfnSERCOM5_4_Handler;                    /* 117 Serial Communication Interface (SERCOM5) */
  void* pfnTCC4_DFS_Handler;                     /* 118 Timer Counter for Control Applications (TCC4) */
  void* pfnTCC4_CNT_Handler;                     /* 119 Timer Counter for Control Applications (TCC4) */
  void* pfnTCC4_MC0_Handler;                     /* 120 Timer Counter for Control Applications (TCC4) */
  void* pfnTCC4_MC1_Handler;                     /* 121 Timer Counter for Control Applications (TCC4) */
  void* pfnTCC5_DFS_Handler;                     /* 122 Timer Counter for Control Applications (TCC5) */
  void* pfnTCC5_CNT_Handler;                     /* 123 Timer Counter for Control Applications (TCC5) */
  void* pfnTCC5_MC0_Handler;                     /* 124 Timer Counter for Control Applications (TCC5) */
  void* pfnTCC5_MC1_Handler;                     /* 125 Timer Counter for Control Applications (TCC5) */
  void* pfnTCC6_DFS_Handler;                     /* 126 Timer Counter for Control Applications (TCC6) */
  void* pfnTCC6_CNT_Handler;                     /* 127 Timer Counter for Control Applications (TCC6) */
  void* pfnTCC6_MC0_Handler;                     /* 128 Timer Counter for Control Applications (TCC6) */
  void* pfnTCC6_MC1_Handler;                     /* 129 Timer Counter for Control Applications (TCC6) */
  void* pfnADC_REQ0_Handler;                     /* 130 ADC Controller (ADC) */
  void* pfnADC_REQ1_Handler;                     /* 131 ADC Controller (ADC) */
  void* pfnAC_Handler;                           /* 132 Analog Comparator Controller (AC) */
  void* pfnPTC_Handler;                          /* 133 Polaris Peripheral Touch Controller (PTC) */
  void* pfnUSB_EORSMDNRSM_Handler;               /* 134 Full-Speed Universal Serial Bus (USB) */
  void* pfnUSB_SOFHSOF_Handler;                  /* 135 Full-Speed Universal Serial Bus (USB) */
  void* pfnUSB_TRCPT00_Handler;                  /* 136 Full-Speed Universal Serial Bus (USB) */
  void* pfnUSB_TRCPT10_Handler;                  /* 137 Full-Speed Universal Serial Bus (USB) */
  void* pfnAT_Handler;                           /* 138 Anti-Tamper Controller (AT) (AT) */
} DeviceVectors;

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if !defined DONT_USE_PREDEFINED_CORE_HANDLERS
/* CORTEX-M23 exception handlers */
void Reset_Handler                 ( void );
void NonMaskableInt_Handler        ( void );
void HardFault_Handler             ( void );
void SVCall_Handler                ( void );
void PendSV_Handler                ( void );
void SysTick_Handler               ( void );
#endif /* DONT_USE_PREDEFINED_CORE_HANDLERS */

#if !defined DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS
/* Peripherals interrupt handlers */
void FCR_Handler                   ( void );
void FCW_Handler                   ( void );
void PM_Handler                    ( void );
void SUPC_Handler                  ( void );
void OSCCTRL_XOSCRDY_Handler       ( void );
void OSCCTRL_DFLLRDY_Handler       ( void );
void OSCCTRL_PLLLOCKR_0_Handler    ( void );
void OSC32KCTRL_XOSC32KRDY_Handler ( void );
void OSC32KCTRL_XOSC32KFAIL_Handler( void );
void MCLK_Handler                  ( void );
void FREQM_Handler                 ( void );
void WDT_Handler                   ( void );
void RTC_TAMPER_Handler            ( void );
void RTC_OVF_Handler               ( void );
void RTC_PER0_Handler              ( void );
void RTC_CMP0_Handler              ( void );
void EIC_EXTINT0_Handler           ( void );
void EIC_EXTINT1_Handler           ( void );
void EIC_EXTINT2_Handler           ( void );
void EIC_EXTINT3_Handler           ( void );
void EIC_EXTINT4_Handler           ( void );
void EIC_EXTINT5_Handler           ( void );
void EIC_EXTINT6_Handler           ( void );
void EIC_EXTINT7_Handler           ( void );
void EIC_EXTINT8_Handler           ( void );
void EIC_EXTINT9_Handler           ( void );
void EIC_EXTINT10_Handler          ( void );
void EIC_EXTINT11_Handler          ( void );
void EIC_EXTINT12_Handler          ( void );
void EIC_EXTINT13_Handler          ( void );
void EIC_EXTINT14_Handler          ( void );
void EIC_EXTINT15_Handler          ( void );
void EIC_NSCHK_Handler             ( void );
void MCRAMC_Handler                ( void );
void CAN0_INT0_Handler             ( void );
void CAN0_INT1_Handler             ( void );
void CAN0_BERR_Handler             ( void );
void CAN1_INT0_Handler             ( void );
void CAN1_INT1_Handler             ( void );
void CAN1_BERR_Handler             ( void );
void PORT_Handler                  ( void );
void DMAC_TCMPL0_Handler           ( void );
void DMAC_TCMPL1_Handler           ( void );
void DMAC_TCMPL2_Handler           ( void );
void DMAC_TCMPL3_Handler           ( void );
void DMAC_TCMPL4_Handler           ( void );
void HMATRIX2_Handler              ( void );
void EVSYS_EVD0_Handler            ( void );
void EVSYS_EVD1_Handler            ( void );
void EVSYS_EVD2_Handler            ( void );
void EVSYS_EVD3_Handler            ( void );
void EVSYS_EVD4_Handler            ( void );
void EVSYS_EVD5_Handler            ( void );
void EVSYS_EVD6_Handler            ( void );
void EVSYS_EVD7_Handler            ( void );
void EVSYS_EVD8_Handler            ( void );
void EVSYS_EVD9_Handler            ( void );
void EVSYS_EVD10_Handler           ( void );
void EVSYS_EVD11_Handler           ( void );
void SERCOM0_6_Handler             ( void );
void SERCOM0_5_Handler             ( void );
void SERCOM0_0_Handler             ( void );
void SERCOM0_1_Handler             ( void );
void SERCOM0_2_Handler             ( void );
void SERCOM0_3_Handler             ( void );
void SERCOM0_4_Handler             ( void );
void SERCOM1_6_Handler             ( void );
void SERCOM1_5_Handler             ( void );
void SERCOM1_0_Handler             ( void );
void SERCOM1_1_Handler             ( void );
void SERCOM1_2_Handler             ( void );
void SERCOM1_3_Handler             ( void );
void SERCOM1_4_Handler             ( void );
void SERCOM2_6_Handler             ( void );
void SERCOM2_5_Handler             ( void );
void SERCOM2_0_Handler             ( void );
void SERCOM2_1_Handler             ( void );
void SERCOM2_2_Handler             ( void );
void SERCOM2_3_Handler             ( void );
void SERCOM2_4_Handler             ( void );
void SERCOM3_6_Handler             ( void );
void SERCOM3_5_Handler             ( void );
void SERCOM3_0_Handler             ( void );
void SERCOM3_1_Handler             ( void );
void SERCOM3_2_Handler             ( void );
void SERCOM3_3_Handler             ( void );
void SERCOM3_4_Handler             ( void );
void TCC0_DFS_Handler              ( void );
void TCC0_CNT_Handler              ( void );
void TCC0_MC0_Handler              ( void );
void TCC0_MC1_Handler              ( void );
void TCC1_DFS_Handler              ( void );
void TCC1_CNT_Handler              ( void );
void TCC1_MC0_Handler              ( void );
void TCC1_MC1_Handler              ( void );
void TCC2_DFS_Handler              ( void );
void TCC2_CNT_Handler              ( void );
void TCC2_MC0_Handler              ( void );
void TCC2_MC1_Handler              ( void );
void TCC3_DFS_Handler              ( void );
void TCC3_CNT_Handler              ( void );
void TCC3_MC0_Handler              ( void );
void TCC3_MC1_Handler              ( void );
void SERCOM4_6_Handler             ( void );
void SERCOM4_5_Handler             ( void );
void SERCOM4_0_Handler             ( void );
void SERCOM4_1_Handler             ( void );
void SERCOM4_2_Handler             ( void );
void SERCOM4_3_Handler             ( void );
void SERCOM4_4_Handler             ( void );
void SERCOM5_6_Handler             ( void );
void SERCOM5_5_Handler             ( void );
void SERCOM5_0_Handler             ( void );
void SERCOM5_1_Handler             ( void );
void SERCOM5_2_Handler             ( void );
void SERCOM5_3_Handler             ( void );
void SERCOM5_4_Handler             ( void );
void TCC4_DFS_Handler              ( void );
void TCC4_CNT_Handler              ( void );
void TCC4_MC0_Handler              ( void );
void TCC4_MC1_Handler              ( void );
void TCC5_DFS_Handler              ( void );
void TCC5_CNT_Handler              ( void );
void TCC5_MC0_Handler              ( void );
void TCC5_MC1_Handler              ( void );
void TCC6_DFS_Handler              ( void );
void TCC6_CNT_Handler              ( void );
void TCC6_MC0_Handler              ( void );
void TCC6_MC1_Handler              ( void );
void ADC_REQ0_Handler              ( void );
void ADC_REQ1_Handler              ( void );
void AC_Handler                    ( void );
void PTC_Handler                   ( void );
void USB_EORSMDNRSM_Handler        ( void );
void USB_SOFHSOF_Handler           ( void );
void USB_TRCPT00_Handler           ( void );
void USB_TRCPT10_Handler           ( void );
void AT_Handler                    ( void );
#endif /* DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* Configuration of the CORTEX-M23 Processor and Core Peripherals */
#define __CM23_REV                    0x0000 /* Cortex-M23 Core Revision                                                  */
#define __FPU_PRESENT                      0 /* No FPU                                                                    */
#define __MPU_PRESENT                      1 /* MPU implemented                                                           */
#define __NVIC_PRIO_BITS                   2 /* Number of NVIC Priority Bits                                              */
#define __SAUREGION_PRESENT                0 /* Number of Security Attribute Unit Regions (No SAU)                        */
#define __VTOR_PRESENT                     1 /* Include Vector Table Offset Register                                      */
#define __Vendor_SysTickConfig             0 /* Standard SYSTICK used                                                     */
#define __ARCH_ARM                         1
#define __ARCH_ARM_CORTEX_M                1

/* CMSIS includes */
#include "core_cm23.h"
#if defined USE_CMSIS_INIT
#include "system_pic32cmgc00.h"
#endif /* USE_CMSIS_INIT */

/* ************************************************************************** */
/*         SOFTWARE PERIPHERAL API DEFINITIONS FOR PIC32CM5112GC00100         */
/* ************************************************************************** */
#include "component/ac.h"
#include "component/adc.h"
#include "component/at.h"
#include "component/bromc.h"
#include "component/can.h"
#include "component/ccl.h"
#include "component/dmac.h"
#include "component/dsu.h"
#include "component/eic.h"
#include "component/evsys.h"
#include "component/fcr.h"
#include "component/fcw.h"
#include "component/freqm.h"
#include "component/fuses.h"
#include "component/gclk.h"
#include "component/h2pb.h"
#include "component/hmatrix2.h"
#include "component/mclk.h"
#include "component/mcramc.h"
#include "component/osc32kctrl.h"
#include "component/oscctrl.h"
#include "component/pac.h"
#include "component/pm.h"
#include "component/port.h"
#include "component/ptc.h"
#include "component/rstc.h"
#include "component/rtc.h"
#include "component/sercom.h"
#include "component/supc.h"
#include "component/tcc.h"
#include "component/usb.h"
#include "component/wdt.h"

/* ************************************************************************** */
/*                INSTANCE DEFINITIONS FOR PIC32CM5112GC00100                 */
/* ************************************************************************** */
#include "instance/ac.h"
#include "instance/adc.h"
#include "instance/at.h"
#include "instance/bromc.h"
#include "instance/can0.h"
#include "instance/can1.h"
#include "instance/ccl0.h"
#include "instance/ccl1.h"
#include "instance/dmac.h"
#include "instance/dsu.h"
#include "instance/eic.h"
#include "instance/evsys.h"
#include "instance/fcr.h"
#include "instance/fcw.h"
#include "instance/freqm.h"
#include "instance/fuses.h"
#include "instance/gclk.h"
#include "instance/h2pb0.h"
#include "instance/h2pb1.h"
#include "instance/h2pb2.h"
#include "instance/hmatrix2.h"
#include "instance/mclk.h"
#include "instance/mcramc.h"
#include "instance/osc32kctrl.h"
#include "instance/oscctrl.h"
#include "instance/pac.h"
#include "instance/pm.h"
#include "instance/port.h"
#include "instance/ptc.h"
#include "instance/rstc.h"
#include "instance/rtc.h"
#include "instance/sercom0.h"
#include "instance/sercom1.h"
#include "instance/sercom2.h"
#include "instance/sercom3.h"
#include "instance/sercom4.h"
#include "instance/sercom5.h"
#include "instance/supc.h"
#include "instance/tcc0.h"
#include "instance/tcc1.h"
#include "instance/tcc2.h"
#include "instance/tcc3.h"
#include "instance/tcc4.h"
#include "instance/tcc5.h"
#include "instance/tcc6.h"
#include "instance/usb.h"
#include "instance/wdt.h"

/* ************************************************************************** */
/*              PERIPHERAL ID DEFINITIONS FOR PIC32CM5112GC00100              */
/* ************************************************************************** */
#define ID_DSU           (  0) /* Instance index for DSU (DSU) */
#define ID_FCR           (  1) /* Instance index for FCR (FCR) */
#define ID_FCW           (  2) /* Instance index for FCW (FCW) */
#define ID_PM            (  3) /* Instance index for PM (PM) */
#define ID_SUPC          (  4) /* Instance index for SUPC (SUPC) */
#define ID_RSTC          (  5) /* Instance index for RSTC (RSTC) */
#define ID_OSCCTRL       (  6) /* Instance index for OSCCTRL (OSCCTRL) */
#define ID_OSC32KCTRL    (  7) /* Instance index for OSC32KCTRL (OSC32KCTRL) */
#define ID_GCLK          (  8) /* Instance index for GCLK (GCLK) */
#define ID_MCLK          (  9) /* Instance index for MCLK (MCLK) */
#define ID_FREQM         ( 10) /* Instance index for FREQM (FREQM) */
#define ID_WDT           ( 11) /* Instance index for WDT (WDT) */
#define ID_RTC           ( 12) /* Instance index for RTC (RTC) */
#define ID_EIC           ( 13) /* Instance index for EIC (EIC) */
#define ID_PAC           ( 14) /* Instance index for PAC (PAC) */
#define ID_MCRAMC        ( 16) /* Instance index for MCRAMC (MCRAMC) */
#define ID_CAN0          ( 17) /* Instance index for CAN0 (CAN0) */
#define ID_CAN1          ( 18) /* Instance index for CAN1 (CAN1) */
#define ID_H2PB0         ( 19) /* Instance index for H2PB0 (H2PB0) */
#define ID_PORT          ( 20) /* Instance index for PORT (PORT) */
#define ID_DMAC          ( 21) /* Instance index for DMAC (DMAC) */
#define ID_HMATRIX2      ( 22) /* Instance index for HMATRIX2 (HMATRIX2) */
#define ID_BROMC         ( 23) /* Instance index for BROMC (BROMC) */
#define ID_EVSYS         ( 25) /* Instance index for EVSYS (EVSYS) */
#define ID_SERCOM0       ( 26) /* Instance index for SERCOM0 (SERCOM0) */
#define ID_SERCOM1       ( 27) /* Instance index for SERCOM1 (SERCOM1) */
#define ID_SERCOM2       ( 28) /* Instance index for SERCOM2 (SERCOM2) */
#define ID_SERCOM3       ( 29) /* Instance index for SERCOM3 (SERCOM3) */
#define ID_TCC0          ( 30) /* Instance index for TCC0 (TCC0) */
#define ID_TCC1          ( 31) /* Instance index for TCC1 (TCC1) */
#define ID_TCC2          ( 32) /* Instance index for TCC2 (TCC2) */
#define ID_TCC3          ( 33) /* Instance index for TCC3 (TCC3) */
#define ID_SERCOM4       ( 34) /* Instance index for SERCOM4 (SERCOM4) */
#define ID_SERCOM5       ( 35) /* Instance index for SERCOM5 (SERCOM5) */
#define ID_TCC4          ( 36) /* Instance index for TCC4 (TCC4) */
#define ID_TCC5          ( 37) /* Instance index for TCC5 (TCC5) */
#define ID_TCC6          ( 38) /* Instance index for TCC6 (TCC6) */
#define ID_ADC           ( 39) /* Instance index for ADC (ADC) */
#define ID_AC            ( 40) /* Instance index for AC (AC) */
#define ID_PTC           ( 41) /* Instance index for PTC (PTC) */
#define ID_CCL0          ( 42) /* Instance index for CCL0 (CCL0) */
#define ID_CCL1          ( 43) /* Instance index for CCL1 (CCL1) */
#define ID_USB           ( 44) /* Instance index for USB (USB) */
#define ID_AT            ( 45) /* Instance index for AT (AT) */
#define ID_H2PB1         ( 46) /* Instance index for H2PB1 (H2PB1) */
#define ID_H2PB2         ( 47) /* Instance index for H2PB2 (H2PB2) */

#define ID_PERIPH_MAX    ( 47) /* Number of peripheral IDs */

/* ************************************************************************** */
/*       REGISTER STRUCTURE ADDRESS DEFINITIONS FOR PIC32CM5112GC00100        */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define AC_REGS                          ((ac_registers_t*)0x4482a000)                 /* AC Registers Address         */
#define ADC_REGS                         ((adc_registers_t*)0x44818000)                /* ADC Registers Address        */
#define AT_REGS                          ((at_registers_t*)0x4500c000)                 /* AT Registers Address         */
#define BROMC_REGS                       ((bromc_registers_t*)0x44804000)              /* BROMC Registers Address      */
#define CAN0_REGS                        ((can_registers_t*)0x4402e000)                /* CAN0 Registers Address       */
#define CAN1_REGS                        ((can_registers_t*)0x44030000)                /* CAN1 Registers Address       */
#define CCL0_REGS                        ((ccl_registers_t*)0x4482e000)                /* CCL0 Registers Address       */
#define CCL1_REGS                        ((ccl_registers_t*)0x44830000)                /* CCL1 Registers Address       */
#define DMAC_REGS                        ((dmac_registers_t*)0x44802000)               /* DMAC Registers Address       */
#define DSU_REGS                         ((dsu_registers_t*)0x44000000)                /* DSU Registers Address        */
#define EIC_REGS                         ((eic_registers_t*)0x44020000)                /* EIC Registers Address        */
#define EVSYS_REGS                       ((evsys_registers_t*)0x44806000)              /* EVSYS Registers Address      */
#define FCR_REGS                         ((fcr_registers_t*)0x44002000)                /* FCR Registers Address        */
#define FCW_REGS                         ((fcw_registers_t*)0x44004000)                /* FCW Registers Address        */
#define FREQM_REGS                       ((freqm_registers_t*)0x4400c000)              /* FREQM Registers Address      */
#define FUSES_ROMCFG_REGS                ((fuses_romcfg_registers_t*)0x0a003000)       /* FUSES Registers Address      */
#define FUSES_BOOTCFG1_REGS              ((fuses_bootcfg1_registers_t*)0x0a002000)     /* FUSES Registers Address      */
#define FUSES_BOOTCFG1A_REGS             ((fuses_bootcfg1_registers_t*)0x0a000000)     /* FUSES Registers Address      */
#define FUSES_CALOTP_REGS                ((fuses_calotp_registers_t*)0x0a007000)       /* FUSES Registers Address      */
#define GCLK_REGS                        ((gclk_registers_t*)0x44008000)               /* GCLK Registers Address       */
#define H2PB0_REGS                       ((h2pb_registers_t*)0x44032000)               /* H2PB0 Registers Address      */
#define H2PB1_REGS                       ((h2pb_registers_t*)0x44838000)               /* H2PB1 Registers Address      */
#define H2PB2_REGS                       ((h2pb_registers_t*)0x4500e000)               /* H2PB2 Registers Address      */
#define HMATRIX2_REGS                    ((hmatrix2_registers_t*)0x44010000)           /* HMATRIX2 Registers Address   */
#define MCLK_REGS                        ((mclk_registers_t*)0x4400a000)               /* MCLK Registers Address       */
#define MCRAMC_REGS                      ((mcramc_registers_t*)0x4402c000)             /* MCRAMC Registers Address     */
#define OSC32KCTRL_REGS                  ((osc32kctrl_registers_t*)0x45008000)         /* OSC32KCTRL Registers Address */
#define OSCCTRL_REGS                     ((oscctrl_registers_t*)0x44006000)            /* OSCCTRL Registers Address    */
#define PAC_REGS                         ((pac_registers_t*)0x44022000)                /* PAC Registers Address        */
#define PM_REGS                          ((pm_registers_t*)0x45000000)                 /* PM Registers Address         */
#define PORT_REGS                        ((port_registers_t*)0x44800000)               /* PORT Registers Address       */
#define PTC_REGS                         ((ptc_registers_t*)0x4482c000)                /* PTC Registers Address        */
#define RSTC_REGS                        ((rstc_registers_t*)0x45004000)               /* RSTC Registers Address       */
#define RTC_REGS                         ((rtc_registers_t*)0x45006000)                /* RTC Registers Address        */
#define SERCOM0_REGS                     ((sercom_registers_t*)0x44808000)             /* SERCOM0 Registers Address    */
#define SERCOM1_REGS                     ((sercom_registers_t*)0x4480a000)             /* SERCOM1 Registers Address    */
#define SERCOM2_REGS                     ((sercom_registers_t*)0x4480c000)             /* SERCOM2 Registers Address    */
#define SERCOM3_REGS                     ((sercom_registers_t*)0x4480e000)             /* SERCOM3 Registers Address    */
#define SERCOM4_REGS                     ((sercom_registers_t*)0x44820000)             /* SERCOM4 Registers Address    */
#define SERCOM5_REGS                     ((sercom_registers_t*)0x44822000)             /* SERCOM5 Registers Address    */
#define SUPC_REGS                        ((supc_registers_t*)0x45002000)               /* SUPC Registers Address       */
#define TCC0_REGS                        ((tcc_registers_t*)0x44810000)                /* TCC0 Registers Address       */
#define TCC1_REGS                        ((tcc_registers_t*)0x44812000)                /* TCC1 Registers Address       */
#define TCC2_REGS                        ((tcc_registers_t*)0x44814000)                /* TCC2 Registers Address       */
#define TCC3_REGS                        ((tcc_registers_t*)0x44816000)                /* TCC3 Registers Address       */
#define TCC4_REGS                        ((tcc_registers_t*)0x44824000)                /* TCC4 Registers Address       */
#define TCC5_REGS                        ((tcc_registers_t*)0x44826000)                /* TCC5 Registers Address       */
#define TCC6_REGS                        ((tcc_registers_t*)0x44828000)                /* TCC6 Registers Address       */
#define USB_REGS                         ((usb_registers_t*)0x44832000)                /* USB Registers Address        */
#define WDT_REGS                         ((wdt_registers_t*)0x4400e000)                /* WDT Registers Address        */
#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ************************************************************************** */
/*              BASE ADDRESS DEFINITIONS FOR PIC32CM5112GC00100               */
/* ************************************************************************** */
#define AC_BASE_ADDRESS                  _UINT32_(0x4482a000)                          /* AC Base Address */
#define ADC_BASE_ADDRESS                 _UINT32_(0x44818000)                          /* ADC Base Address */
#define AT_BASE_ADDRESS                  _UINT32_(0x4500c000)                          /* AT Base Address */
#define BROMC_BASE_ADDRESS               _UINT32_(0x44804000)                          /* BROMC Base Address */
#define CAN0_BASE_ADDRESS                _UINT32_(0x4402e000)                          /* CAN0 Base Address */
#define CAN1_BASE_ADDRESS                _UINT32_(0x44030000)                          /* CAN1 Base Address */
#define CCL0_BASE_ADDRESS                _UINT32_(0x4482e000)                          /* CCL0 Base Address */
#define CCL1_BASE_ADDRESS                _UINT32_(0x44830000)                          /* CCL1 Base Address */
#define DMAC_BASE_ADDRESS                _UINT32_(0x44802000)                          /* DMAC Base Address */
#define DSU_BASE_ADDRESS                 _UINT32_(0x44000000)                          /* DSU Base Address */
#define EIC_BASE_ADDRESS                 _UINT32_(0x44020000)                          /* EIC Base Address */
#define EVSYS_BASE_ADDRESS               _UINT32_(0x44806000)                          /* EVSYS Base Address */
#define FCR_BASE_ADDRESS                 _UINT32_(0x44002000)                          /* FCR Base Address */
#define FCW_BASE_ADDRESS                 _UINT32_(0x44004000)                          /* FCW Base Address */
#define FREQM_BASE_ADDRESS               _UINT32_(0x4400c000)                          /* FREQM Base Address */
#define FUSES_ROMCFG_BASE_ADDRESS        _UINT32_(0x0a003000)                          /* FUSES Base Address */
#define FUSES_BOOTCFG1_BASE_ADDRESS      _UINT32_(0x0a002000)                          /* FUSES Base Address */
#define FUSES_BOOTCFG1A_BASE_ADDRESS     _UINT32_(0x0a000000)                          /* FUSES Base Address */
#define FUSES_CALOTP_BASE_ADDRESS        _UINT32_(0x0a007000)                          /* FUSES Base Address */
#define GCLK_BASE_ADDRESS                _UINT32_(0x44008000)                          /* GCLK Base Address */
#define H2PB0_BASE_ADDRESS               _UINT32_(0x44032000)                          /* H2PB0 Base Address */
#define H2PB1_BASE_ADDRESS               _UINT32_(0x44838000)                          /* H2PB1 Base Address */
#define H2PB2_BASE_ADDRESS               _UINT32_(0x4500e000)                          /* H2PB2 Base Address */
#define HMATRIX2_BASE_ADDRESS            _UINT32_(0x44010000)                          /* HMATRIX2 Base Address */
#define MCLK_BASE_ADDRESS                _UINT32_(0x4400a000)                          /* MCLK Base Address */
#define MCRAMC_BASE_ADDRESS              _UINT32_(0x4402c000)                          /* MCRAMC Base Address */
#define OSC32KCTRL_BASE_ADDRESS          _UINT32_(0x45008000)                          /* OSC32KCTRL Base Address */
#define OSCCTRL_BASE_ADDRESS             _UINT32_(0x44006000)                          /* OSCCTRL Base Address */
#define PAC_BASE_ADDRESS                 _UINT32_(0x44022000)                          /* PAC Base Address */
#define PM_BASE_ADDRESS                  _UINT32_(0x45000000)                          /* PM Base Address */
#define PORT_BASE_ADDRESS                _UINT32_(0x44800000)                          /* PORT Base Address */
#define PTC_BASE_ADDRESS                 _UINT32_(0x4482c000)                          /* PTC Base Address */
#define RSTC_BASE_ADDRESS                _UINT32_(0x45004000)                          /* RSTC Base Address */
#define RTC_BASE_ADDRESS                 _UINT32_(0x45006000)                          /* RTC Base Address */
#define SERCOM0_BASE_ADDRESS             _UINT32_(0x44808000)                          /* SERCOM0 Base Address */
#define SERCOM1_BASE_ADDRESS             _UINT32_(0x4480a000)                          /* SERCOM1 Base Address */
#define SERCOM2_BASE_ADDRESS             _UINT32_(0x4480c000)                          /* SERCOM2 Base Address */
#define SERCOM3_BASE_ADDRESS             _UINT32_(0x4480e000)                          /* SERCOM3 Base Address */
#define SERCOM4_BASE_ADDRESS             _UINT32_(0x44820000)                          /* SERCOM4 Base Address */
#define SERCOM5_BASE_ADDRESS             _UINT32_(0x44822000)                          /* SERCOM5 Base Address */
#define SUPC_BASE_ADDRESS                _UINT32_(0x45002000)                          /* SUPC Base Address */
#define TCC0_BASE_ADDRESS                _UINT32_(0x44810000)                          /* TCC0 Base Address */
#define TCC1_BASE_ADDRESS                _UINT32_(0x44812000)                          /* TCC1 Base Address */
#define TCC2_BASE_ADDRESS                _UINT32_(0x44814000)                          /* TCC2 Base Address */
#define TCC3_BASE_ADDRESS                _UINT32_(0x44816000)                          /* TCC3 Base Address */
#define TCC4_BASE_ADDRESS                _UINT32_(0x44824000)                          /* TCC4 Base Address */
#define TCC5_BASE_ADDRESS                _UINT32_(0x44826000)                          /* TCC5 Base Address */
#define TCC6_BASE_ADDRESS                _UINT32_(0x44828000)                          /* TCC6 Base Address */
#define USB_BASE_ADDRESS                 _UINT32_(0x44832000)                          /* USB Base Address */
#define WDT_BASE_ADDRESS                 _UINT32_(0x4400e000)                          /* WDT Base Address */

/* ************************************************************************** */
/*                   PIO DEFINITIONS FOR PIC32CM5112GC00100                   */
/* ************************************************************************** */
#include "pio/pic32cm5112gc00100.h"

/* ************************************************************************** */
/*             MEMORY MAPPING DEFINITIONS FOR PIC32CM5112GC00100              */
/* ************************************************************************** */
#define BROMC_ROM_SIZE                 _UINT32_(0x00010000)    /*   64kB Memory segment type: rom */
#define FCR_BFM_SIZE                   _UINT32_(0x00004000)    /*   16kB Memory segment type: flash */
#define FCR_CFM_BOOTCFG1A_SIZE         _UINT32_(0x00001000)    /*    4kB Memory segment type: flash */
#define FCR_CFM_USEROTP_SIZE           _UINT32_(0x00001000)    /*    4kB Memory segment type: user_signatures */
#define FCR_CFM_BOOTCFG1_SIZE          _UINT32_(0x00001000)    /*    4kB Memory segment type: flash */
#define FCR_CFM_ROMCFG_SIZE            _UINT32_(0x00001000)    /*    4kB Memory segment type: flash */
#define FCR_CFM_VSS0_SIZE              _UINT32_(0x00001000)    /*    4kB Memory segment type: flash */
#define FCR_CFM_VSS1_SIZE              _UINT32_(0x00001000)    /*    4kB Memory segment type: flash */
#define FCR_CFM_TEST_SIZE              _UINT32_(0x00001000)    /*    4kB Memory segment type: flash */
#define FCR_CFM_CALOTP_SIZE            _UINT32_(0x00001000)    /*    4kB Memory segment type: other */
#define FCR_PFM_SIZE                   _UINT32_(0x00080000)    /*  512kB Memory segment type: flash */
#define MCRAMC_RET_SIZE                _UINT32_(0x00020000)    /*  128kB Memory segment type: ram */
#define APB0_BRIDGE_SIZE               _UINT32_(0x00034000)    /*  208kB Memory segment type: io */
#define APB1_BRIDGE_SIZE               _UINT32_(0x0003a000)    /*  232kB Memory segment type: io */
#define APB2_BRIDGE_SIZE               _UINT32_(0x00010000)    /*   64kB Memory segment type: io */
#define PPB_SIZE                       _UINT32_(0x00100000)    /* 1024kB Memory segment type: io */

#define BROMC_ROM_ADDR                 _UINT32_(0x04000000)    /* BROMC_ROM base address (type: rom)*/
#define FCR_BFM_ADDR                   _UINT32_(0x08000000)    /* FCR_BFM base address (type: flash)*/
#define FCR_CFM_BOOTCFG1A_ADDR         _UINT32_(0x0a000000)    /* FCR_CFM_BOOTCFG1A base address (type: flash)*/
#define FCR_CFM_USEROTP_ADDR           _UINT32_(0x0a001000)    /* FCR_CFM_USEROTP base address (type: user_signatures)*/
#define FCR_CFM_BOOTCFG1_ADDR          _UINT32_(0x0a002000)    /* FCR_CFM_BOOTCFG1 base address (type: flash)*/
#define FCR_CFM_ROMCFG_ADDR            _UINT32_(0x0a003000)    /* FCR_CFM_ROMCFG base address (type: flash)*/
#define FCR_CFM_VSS0_ADDR              _UINT32_(0x0a004000)    /* FCR_CFM_VSS0 base address (type: flash)*/
#define FCR_CFM_VSS1_ADDR              _UINT32_(0x0a005000)    /* FCR_CFM_VSS1 base address (type: flash)*/
#define FCR_CFM_TEST_ADDR              _UINT32_(0x0a006000)    /* FCR_CFM_TEST base address (type: flash)*/
#define FCR_CFM_CALOTP_ADDR            _UINT32_(0x0a007000)    /* FCR_CFM_CALOTP base address (type: other)*/
#define FCR_PFM_ADDR                   _UINT32_(0x0c000000)    /* FCR_PFM base address (type: flash)*/
#define MCRAMC_RET_ADDR                _UINT32_(0x20000000)    /* MCRAMC_RET base address (type: ram)*/
#define APB0_BRIDGE_ADDR               _UINT32_(0x44000000)    /* APB0_BRIDGE base address (type: io)*/
#define APB1_BRIDGE_ADDR               _UINT32_(0x44800000)    /* APB1_BRIDGE base address (type: io)*/
#define APB2_BRIDGE_ADDR               _UINT32_(0x45000000)    /* APB2_BRIDGE base address (type: io)*/
#define PPB_ADDR                       _UINT32_(0xe0000000)    /* PPB base address (type: io)*/

/* ************************************************************************** */
/*                  DEVICE SIGNATURES FOR PIC32CM5112GC00100                  */
/* ************************************************************************** */
#define CHIP_DSU_DID                   _UINT32_(0X0AC00053)

/* ************************************************************************** */
/*               ELECTRICAL DEFINITIONS FOR PIC32CM5112GC00100                */
/* ************************************************************************** */

/* ************************************************************************** */
/*                  Event Generator IDs for C32CM5112GC00100                  */
/* ************************************************************************** */
#define EVENT_ID_GEN_SUPC_LVDET                           1 /* ID for SUPC event generator LVDET */
#define EVENT_ID_GEN_OSCCTRL_XOSCFAIL                     2 /* ID for OSCCTRL event generator XOSCFAIL */
#define EVENT_ID_GEN_OSC32KCTRL_XOSC32KFAIL               3 /* ID for OSC32KCTRL event generator XOSC32KFAIL */
#define EVENT_ID_GEN_FREQM_DONE                           4 /* ID for FREQM event generator DONE */
#define EVENT_ID_GEN_FREQM_WINMON                         5 /* ID for FREQM event generator WINMON */
#define EVENT_ID_GEN_RTC_PER0                             6 /* ID for RTC event generator PER0 */
#define EVENT_ID_GEN_RTC_PER1                             7 /* ID for RTC event generator PER1 */
#define EVENT_ID_GEN_RTC_PER2                             8 /* ID for RTC event generator PER2 */
#define EVENT_ID_GEN_RTC_PER3                             9 /* ID for RTC event generator PER3 */
#define EVENT_ID_GEN_RTC_PER4                            10 /* ID for RTC event generator PER4 */
#define EVENT_ID_GEN_RTC_PER5                            11 /* ID for RTC event generator PER5 */
#define EVENT_ID_GEN_RTC_PER6                            12 /* ID for RTC event generator PER6 */
#define EVENT_ID_GEN_RTC_PER7                            13 /* ID for RTC event generator PER7 */
#define EVENT_ID_GEN_RTC_CMP0                            14 /* ID for RTC event generator CMP0 */
#define EVENT_ID_GEN_RTC_CMP1                            15 /* ID for RTC event generator CMP1 */
#define EVENT_ID_GEN_RTC_CMP2                            16 /* ID for RTC event generator CMP2 */
#define EVENT_ID_GEN_RTC_CMP3                            17 /* ID for RTC event generator CMP3 */
#define EVENT_ID_GEN_RTC_TAMPER                          18 /* ID for RTC event generator TAMPER */
#define EVENT_ID_GEN_RTC_OVF                             19 /* ID for RTC event generator OVF */
#define EVENT_ID_GEN_RTC_PERD                            20 /* ID for RTC event generator PERD */
#define EVENT_ID_GEN_EIC_EXTINT0                         21 /* ID for EIC event generator EXTINT0 */
#define EVENT_ID_GEN_EIC_EXTINT1                         22 /* ID for EIC event generator EXTINT1 */
#define EVENT_ID_GEN_EIC_EXTINT2                         23 /* ID for EIC event generator EXTINT2 */
#define EVENT_ID_GEN_EIC_EXTINT3                         24 /* ID for EIC event generator EXTINT3 */
#define EVENT_ID_GEN_EIC_EXTINT4                         25 /* ID for EIC event generator EXTINT4 */
#define EVENT_ID_GEN_EIC_EXTINT5                         26 /* ID for EIC event generator EXTINT5 */
#define EVENT_ID_GEN_EIC_EXTINT6                         27 /* ID for EIC event generator EXTINT6 */
#define EVENT_ID_GEN_EIC_EXTINT7                         28 /* ID for EIC event generator EXTINT7 */
#define EVENT_ID_GEN_EIC_EXTINT8                         29 /* ID for EIC event generator EXTINT8 */
#define EVENT_ID_GEN_EIC_EXTINT9                         30 /* ID for EIC event generator EXTINT9 */
#define EVENT_ID_GEN_EIC_EXTINT10                        31 /* ID for EIC event generator EXTINT10 */
#define EVENT_ID_GEN_EIC_EXTINT11                        32 /* ID for EIC event generator EXTINT11 */
#define EVENT_ID_GEN_EIC_EXTINT12                        33 /* ID for EIC event generator EXTINT12 */
#define EVENT_ID_GEN_EIC_EXTINT13                        34 /* ID for EIC event generator EXTINT13 */
#define EVENT_ID_GEN_EIC_EXTINT14                        35 /* ID for EIC event generator EXTINT14 */
#define EVENT_ID_GEN_EIC_EXTINT15                        36 /* ID for EIC event generator EXTINT15 */
#define EVENT_ID_GEN_DMAC_CH0                            37 /* ID for DMAC event generator CH0 */
#define EVENT_ID_GEN_DMAC_CH1                            38 /* ID for DMAC event generator CH1 */
#define EVENT_ID_GEN_DMAC_CH2                            39 /* ID for DMAC event generator CH2 */
#define EVENT_ID_GEN_DMAC_CH3                            40 /* ID for DMAC event generator CH3 */
#define EVENT_ID_GEN_TCC0_OVF                            41 /* ID for TCC0 event generator OVF */
#define EVENT_ID_GEN_TCC0_TRG                            42 /* ID for TCC0 event generator TRG */
#define EVENT_ID_GEN_TCC0_CNT                            43 /* ID for TCC0 event generator CNT */
#define EVENT_ID_GEN_TCC0_MC0                            44 /* ID for TCC0 event generator MC0 */
#define EVENT_ID_GEN_TCC0_MC1                            45 /* ID for TCC0 event generator MC1 */
#define EVENT_ID_GEN_TCC1_OVF                            46 /* ID for TCC1 event generator OVF */
#define EVENT_ID_GEN_TCC1_TRG                            47 /* ID for TCC1 event generator TRG */
#define EVENT_ID_GEN_TCC1_CNT                            48 /* ID for TCC1 event generator CNT */
#define EVENT_ID_GEN_TCC1_MC0                            49 /* ID for TCC1 event generator MC0 */
#define EVENT_ID_GEN_TCC1_MC1                            50 /* ID for TCC1 event generator MC1 */
#define EVENT_ID_GEN_TCC2_OVF                            51 /* ID for TCC2 event generator OVF */
#define EVENT_ID_GEN_TCC2_TRG                            52 /* ID for TCC2 event generator TRG */
#define EVENT_ID_GEN_TCC2_CNT                            53 /* ID for TCC2 event generator CNT */
#define EVENT_ID_GEN_TCC2_MC0                            54 /* ID for TCC2 event generator MC0 */
#define EVENT_ID_GEN_TCC2_MC1                            55 /* ID for TCC2 event generator MC1 */
#define EVENT_ID_GEN_TCC3_OVF                            56 /* ID for TCC3 event generator OVF */
#define EVENT_ID_GEN_TCC3_TRG                            57 /* ID for TCC3 event generator TRG */
#define EVENT_ID_GEN_TCC3_CNT                            58 /* ID for TCC3 event generator CNT */
#define EVENT_ID_GEN_TCC3_MC0                            59 /* ID for TCC3 event generator MC0 */
#define EVENT_ID_GEN_TCC3_MC1                            60 /* ID for TCC3 event generator MC1 */
#define EVENT_ID_GEN_TCC4_OVF                            61 /* ID for TCC4 event generator OVF */
#define EVENT_ID_GEN_TCC4_TRG                            62 /* ID for TCC4 event generator TRG */
#define EVENT_ID_GEN_TCC4_CNT                            63 /* ID for TCC4 event generator CNT */
#define EVENT_ID_GEN_TCC4_MC0                            64 /* ID for TCC4 event generator MC0 */
#define EVENT_ID_GEN_TCC4_MC1                            65 /* ID for TCC4 event generator MC1 */
#define EVENT_ID_GEN_TCC5_OVF                            66 /* ID for TCC5 event generator OVF */
#define EVENT_ID_GEN_TCC5_TRG                            67 /* ID for TCC5 event generator TRG */
#define EVENT_ID_GEN_TCC5_CNT                            68 /* ID for TCC5 event generator CNT */
#define EVENT_ID_GEN_TCC5_MC0                            69 /* ID for TCC5 event generator MC0 */
#define EVENT_ID_GEN_TCC5_MC1                            70 /* ID for TCC5 event generator MC1 */
#define EVENT_ID_GEN_TCC6_OVF                            71 /* ID for TCC6 event generator OVF */
#define EVENT_ID_GEN_TCC6_TRG                            72 /* ID for TCC6 event generator TRG */
#define EVENT_ID_GEN_TCC6_CNT                            73 /* ID for TCC6 event generator CNT */
#define EVENT_ID_GEN_TCC6_MC0                            74 /* ID for TCC6 event generator MC0 */
#define EVENT_ID_GEN_TCC6_MC1                            75 /* ID for TCC6 event generator MC1 */
#define EVENT_ID_GEN_ADC_CHRDY                           76 /* ID for ADC event generator CHRDY */
#define EVENT_ID_GEN_ADC_CMP                             77 /* ID for ADC event generator CMP */
#define EVENT_ID_GEN_AC_COMP0                            78 /* ID for AC event generator COMP0 */
#define EVENT_ID_GEN_AC_COMP1                            79 /* ID for AC event generator COMP1 */
#define EVENT_ID_GEN_AC_WIN0                             80 /* ID for AC event generator WIN0 */
#define EVENT_ID_GEN_PTC_EOC                             81 /* ID for PTC event generator EOC */
#define EVENT_ID_GEN_PTC_WCOMP                           82 /* ID for PTC event generator WCOMP */
#define EVENT_ID_GEN_CCL0_LUTOUT0                        83 /* ID for CCL0 event generator LUTOUT0 */
#define EVENT_ID_GEN_CCL0_LUTOUT1                        84 /* ID for CCL0 event generator LUTOUT1 */
#define EVENT_ID_GEN_CCL0_LUTOUT2                        85 /* ID for CCL0 event generator LUTOUT2 */
#define EVENT_ID_GEN_CCL0_LUTOUT3                        86 /* ID for CCL0 event generator LUTOUT3 */
#define EVENT_ID_GEN_CCL1_LUTOUT0                        87 /* ID for CCL1 event generator LUTOUT0 */
#define EVENT_ID_GEN_CCL1_LUTOUT1                        88 /* ID for CCL1 event generator LUTOUT1 */
#define EVENT_ID_GEN_CCL1_LUTOUT2                        89 /* ID for CCL1 event generator LUTOUT2 */
#define EVENT_ID_GEN_CCL1_LUTOUT3                        90 /* ID for CCL1 event generator LUTOUT3 */

/* ************************************************************************** */
/*                    Event User IDs for C32CM5112GC00100                     */
/* ************************************************************************** */
#define EVENT_ID_USER_FREQM_START                         0 /* ID for FREQM event user START */
#define EVENT_ID_USER_RTC_TAMPER                          1 /* ID for RTC event user TAMPER */
#define EVENT_ID_USER_PORT_EV0                            2 /* ID for PORT event user EV0 */
#define EVENT_ID_USER_PORT_EV1                            3 /* ID for PORT event user EV1 */
#define EVENT_ID_USER_PORT_EV2                            4 /* ID for PORT event user EV2 */
#define EVENT_ID_USER_PORT_EV3                            5 /* ID for PORT event user EV3 */
#define EVENT_ID_USER_DMAC_CH0                            6 /* ID for DMAC event user CH0 */
#define EVENT_ID_USER_DMAC_CH1                            7 /* ID for DMAC event user CH1 */
#define EVENT_ID_USER_DMAC_CH2                            8 /* ID for DMAC event user CH2 */
#define EVENT_ID_USER_DMAC_CH3                            9 /* ID for DMAC event user CH3 */
#define EVENT_ID_USER_TCC0_EV0                           10 /* ID for TCC0 event user EV0 */
#define EVENT_ID_USER_TCC0_EV1                           11 /* ID for TCC0 event user EV1 */
#define EVENT_ID_USER_TCC0_MC0                           12 /* ID for TCC0 event user MC0 */
#define EVENT_ID_USER_TCC0_MC1                           13 /* ID for TCC0 event user MC1 */
#define EVENT_ID_USER_TCC1_EV0                           14 /* ID for TCC1 event user EV0 */
#define EVENT_ID_USER_TCC1_EV1                           15 /* ID for TCC1 event user EV1 */
#define EVENT_ID_USER_TCC1_MC0                           16 /* ID for TCC1 event user MC0 */
#define EVENT_ID_USER_TCC1_MC1                           17 /* ID for TCC1 event user MC1 */
#define EVENT_ID_USER_TCC2_EV0                           18 /* ID for TCC2 event user EV0 */
#define EVENT_ID_USER_TCC2_EV1                           19 /* ID for TCC2 event user EV1 */
#define EVENT_ID_USER_TCC2_MC0                           20 /* ID for TCC2 event user MC0 */
#define EVENT_ID_USER_TCC2_MC1                           21 /* ID for TCC2 event user MC1 */
#define EVENT_ID_USER_TCC3_EV0                           22 /* ID for TCC3 event user EV0 */
#define EVENT_ID_USER_TCC3_EV1                           23 /* ID for TCC3 event user EV1 */
#define EVENT_ID_USER_TCC3_MC0                           24 /* ID for TCC3 event user MC0 */
#define EVENT_ID_USER_TCC3_MC1                           25 /* ID for TCC3 event user MC1 */
#define EVENT_ID_USER_TCC4_EV0                           26 /* ID for TCC4 event user EV0 */
#define EVENT_ID_USER_TCC4_EV1                           27 /* ID for TCC4 event user EV1 */
#define EVENT_ID_USER_TCC4_MC0                           28 /* ID for TCC4 event user MC0 */
#define EVENT_ID_USER_TCC4_MC1                           29 /* ID for TCC4 event user MC1 */
#define EVENT_ID_USER_TCC5_EV0                           30 /* ID for TCC5 event user EV0 */
#define EVENT_ID_USER_TCC5_EV1                           31 /* ID for TCC5 event user EV1 */
#define EVENT_ID_USER_TCC5_MC0                           32 /* ID for TCC5 event user MC0 */
#define EVENT_ID_USER_TCC5_MC1                           33 /* ID for TCC5 event user MC1 */
#define EVENT_ID_USER_TCC6_EV0                           34 /* ID for TCC6 event user EV0 */
#define EVENT_ID_USER_TCC6_EV1                           35 /* ID for TCC6 event user EV1 */
#define EVENT_ID_USER_TCC6_MC0                           36 /* ID for TCC6 event user MC0 */
#define EVENT_ID_USER_TCC6_MC1                           37 /* ID for TCC6 event user MC1 */
#define EVENT_ID_USER_ADC_TRIG0                          38 /* ID for ADC event user TRIG0 */
#define EVENT_ID_USER_ADC_TRIG1                          39 /* ID for ADC event user TRIG1 */
#define EVENT_ID_USER_ADC_TRIG2                          40 /* ID for ADC event user TRIG2 */
#define EVENT_ID_USER_ADC_TRIG3                          41 /* ID for ADC event user TRIG3 */
#define EVENT_ID_USER_ADC_TRIG4                          42 /* ID for ADC event user TRIG4 */
#define EVENT_ID_USER_ADC_TRIG5                          43 /* ID for ADC event user TRIG5 */
#define EVENT_ID_USER_ADC_TRIG6                          44 /* ID for ADC event user TRIG6 */
#define EVENT_ID_USER_ADC_TRIG7                          45 /* ID for ADC event user TRIG7 */
#define EVENT_ID_USER_ADC_TRIG8                          46 /* ID for ADC event user TRIG8 */
#define EVENT_ID_USER_ADC_TRIG9                          47 /* ID for ADC event user TRIG9 */
#define EVENT_ID_USER_ADC_TRIG10                         48 /* ID for ADC event user TRIG10 */
#define EVENT_ID_USER_AC_SOC0                            49 /* ID for AC event user SOC0 */
#define EVENT_ID_USER_AC_SOC1                            50 /* ID for AC event user SOC1 */
#define EVENT_ID_USER_PTC_DSEQR                          51 /* ID for PTC event user DSEQR */
#define EVENT_ID_USER_PTC_STCONV                         52 /* ID for PTC event user STCONV */
#define EVENT_ID_USER_CCL0_LUTIN0                        53 /* ID for CCL0 event user LUTIN0 */
#define EVENT_ID_USER_CCL0_LUTIN1                        54 /* ID for CCL0 event user LUTIN1 */
#define EVENT_ID_USER_CCL0_LUTIN2                        55 /* ID for CCL0 event user LUTIN2 */
#define EVENT_ID_USER_CCL0_LUTIN3                        56 /* ID for CCL0 event user LUTIN3 */
#define EVENT_ID_USER_CCL1_LUTIN0                        57 /* ID for CCL1 event user LUTIN0 */
#define EVENT_ID_USER_CCL1_LUTIN1                        58 /* ID for CCL1 event user LUTIN1 */
#define EVENT_ID_USER_CCL1_LUTIN2                        59 /* ID for CCL1 event user LUTIN2 */
#define EVENT_ID_USER_CCL1_LUTIN3                        60 /* ID for CCL1 event user LUTIN3 */
#define EVENT_ID_USER_AT_TAMPSRC5                        61 /* ID for AT event user TAMPSRC5 */

#ifdef __cplusplus
}
#endif

#endif /* _PIC32CM5112GC00100_H_ */

