/*
 * Header file for PIC32WM_BZ6204
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

/* File generated from device description file (ATDF) version 2025-01-29T18:23:31Z */
#ifndef _PIC32WM_BZ6204_H_
#define _PIC32WM_BZ6204_H_

/* Header version uses Semantic Versioning 2.0.0 (https://semver.org/) */
#define HEADER_FORMAT_VERSION "2.1.1"

#define HEADER_FORMAT_VERSION_MAJOR (2)
#define HEADER_FORMAT_VERSION_MINOR (1)
#define HEADER_FORMAT_VERSION_PATCH (1)

/* PIC32WM_BZ6204 definitions
  This file defines all structures and symbols for PIC32WM_BZ6204:
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
/*                    CMSIS DEFINITIONS FOR PIC32WM_BZ6204                    */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* Interrupt Number Definition */
typedef enum IRQn
{
/******  CORTEX-M4 Processor Exceptions Numbers ******************************/
  Reset_IRQn                = -15, /* -15 Reset Vector, invoked on Power up and warm reset */
  NonMaskableInt_IRQn       = -14, /* -14 Non maskable Interrupt, cannot be stopped or preempted */
  HardFault_IRQn            = -13, /* -13 Hard Fault, all classes of Fault    */
  MemoryManagement_IRQn     = -12, /* -12 Memory Management, MPU mismatch, including Access Violation and No Match */
  BusFault_IRQn             = -11, /* -11 Bus Fault, Pre-Fetch-, Memory Access Fault, other address/memory related Fault */
  UsageFault_IRQn           = -10, /* -10 Usage Fault, i.e. Undef Instruction, Illegal State Transition */
  SVCall_IRQn               =  -5, /* -5  System Service Call via SVC instruction */
  DebugMonitor_IRQn         =  -4, /* -4  Debug Monitor                       */
  PendSV_IRQn               =  -2, /* -2  Pendable request for system service */
  SysTick_IRQn              =  -1, /* -1  System Tick Timer                   */

/* *************** PIC32WM_BZ6204 specific Interrupt Numbers **************** */
  RTC_IRQn                  =   0, /* 0   Real-Time Counter (RTC)             */
  EIC_IRQn                  =   1, /* 1   External Interrupt Controller (EIC) */
  FREQM_IRQn                =   2, /* 2   Frequency Meter (FREQM)             */
  NVM_IRQn                  =   3, /* 3   flash controller (NVM)              */
  CHANGE_NOTICE_A_IRQn      =   4, /* 4   GPIO (GPIOA)                        */
  CHANGE_NOTICE_B_IRQn      =   5, /* 5   GPIO (GPIOB)                        */
  CHANGE_NOTICE_C_IRQn      =   6, /* 6   GPIO (GPIOC)                        */
  CHANGE_NOTICE_D_IRQn      =   7, /* 7   GPIO (GPIOD)                        */
  CHANGE_NOTICE_E_IRQn      =   8, /* 8   GPIO (GPIOE)                        */
  DMAC_0_3_IRQn             =   9, /* 9   Direct Memory Access Controller (DMAC) */
  DMAC_4_15_IRQn            =  10, /* 10  Direct Memory Access Controller (DMAC) */
  EVSYS_0_3_IRQn            =  11, /* 11  Event System Interface (EVSYS)      */
  EVSYS_4_11_IRQn           =  12, /* 12  Event System Interface (EVSYS)      */
  PAC_IRQn                  =  13, /* 13  Peripheral Access Controller (PAC)  */
  RAMECC_IRQn               =  14, /* 14  RAM ECC (RAMECC)                    */
  SERCOM0_IRQn              =  15, /* 15  Serial Communication Interface (SERCOM0) */
  SERCOM1_IRQn              =  16, /* 16  Serial Communication Interface (SERCOM1) */
  SERCOM2_IRQn              =  17, /* 17  Serial Communication Interface (SERCOM2) */
  SERCOM3_IRQn              =  18, /* 18  Serial Communication Interface (SERCOM3) */
  SERCOM4_IRQn              =  19, /* 19  Serial Communication Interface (SERCOM4) */
  SERCOM5_IRQn              =  20, /* 20  Serial Communication Interface (SERCOM5) */
  SERCOM6_IRQn              =  21, /* 21  Serial Communication Interface (SERCOM6) */
  TCC0_IRQn                 =  22, /* 22  Timer Counter Control (TCC0)        */
  TCC1_IRQn                 =  23, /* 23  Timer Counter Control (TCC1)        */
  TCC2_IRQn                 =  24, /* 24  Timer Counter Control (TCC2)        */
  TC0_IRQn                  =  25, /* 25  Basic Timer Counter (TC0)           */
  TC1_IRQn                  =  26, /* 26  Basic Timer Counter (TC1)           */
  TC2_IRQn                  =  27, /* 27  Basic Timer Counter (TC2)           */
  TC3_IRQn                  =  28, /* 28  Basic Timer Counter (TC3)           */
  TC4_IRQn                  =  29, /* 29  Basic Timer Counter (TC4)           */
  TC5_IRQn                  =  30, /* 30  Basic Timer Counter (TC5)           */
  TC6_IRQn                  =  31, /* 31  Basic Timer Counter (TC6)           */
  TC7_IRQn                  =  32, /* 32  Basic Timer Counter (TC7)           */
  TC8_IRQn                  =  33, /* 33  Basic Timer Counter (TC8)           */
  TC9_IRQn                  =  34, /* 34  Basic Timer Counter (TC9)           */
  ADCHS_IRQ_IRQn            =  35, /* 35  12-bit Analog to Digital Converter (ADCHS) */
  ADCHS_FAULT_IRQn          =  36, /* 36  12-bit Analog to Digital Converter (ADCHS) */
  ADCHS_FCC_IRQn            =  37, /* 37  12-bit Analog to Digital Converter (ADCHS) */
  ADCHS_BGVR_RDY_IRQn       =  38, /* 38  12-bit Analog to Digital Converter (ADCHS) */
  AC_IRQn                   =  39, /* 39  Analog Comparators (AC)             */
  SILEX_0_IRQn              =  40, /* 40   (SILEX)                            */
  SILEX_1_IRQn              =  41, /* 41   (SILEX)                            */
  QSPI_IRQn                 =  42, /* 42  Quad SPI interface (QSPI)           */
  ZB_INT0_IRQn              =  43, /* 43  ZigBee MAC DOS (ZIGBEE)             */
  BT_INT0_IRQn              =  44, /* 44  BLE (BLE)                           */
  BT_INT1_IRQn              =  45, /* 45  BLE (BLE)                           */
  ARBITER_IRQn              =  46, /* 46  Radio Arbiter (ARB)                 */
  CLKI_WAKEUP_NMI_IRQn      =  47, /* 47  BLE (BLE)                           */
  CVD_IRQn                  =  48, /* 48  Hardware CVD Controller Macro (CVD) */
  QEI_IRQn                  =  50, /* 50   (QEI)                              */
  CAN0_IRQn                 =  51, /* 51  Control Area Network (CAN0)         */
  CAN1_IRQn                 =  52, /* 52  Control Area Network (CAN1)         */
  ETH_IRQn                  =  53, /* 53  Ethernet Controller (ETH)           */
  USB_IRQn                  =  54, /* 54  USB (USB)                           */
  PLL_LOCK_BOOT_IRQn        =  55, /* 55  BT ZB Subsystem (BTZBSYS)           */
  PLL_LOCK_USER_IRQn        =  56, /* 56  BT ZB Subsystem (BTZBSYS)           */
  BT_LC_IRQn                =  57, /* 57  BLE (BLE)                           */

  PERIPH_MAX_IRQn           =  57  /* Max peripheral ID */
} IRQn_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct _DeviceVectors
{
  /* Stack pointer */
  void* pvStack;
  /* CORTEX-M4 handlers */
  void* pfnReset_Handler;                        /* -15 Reset Vector, invoked on Power up and warm reset */
  void* pfnNonMaskableInt_Handler;               /* -14 Non maskable Interrupt, cannot be stopped or preempted */
  void* pfnHardFault_Handler;                    /* -13 Hard Fault, all classes of Fault */
  void* pfnMemoryManagement_Handler;             /* -12 Memory Management, MPU mismatch, including Access Violation and No Match */
  void* pfnBusFault_Handler;                     /* -11 Bus Fault, Pre-Fetch-, Memory Access Fault, other address/memory related Fault */
  void* pfnUsageFault_Handler;                   /* -10 Usage Fault, i.e. Undef Instruction, Illegal State Transition */
  void* pvReservedC9;
  void* pvReservedC8;
  void* pvReservedC7;
  void* pvReservedC6;
  void* pfnSVCall_Handler;                       /*  -5 System Service Call via SVC instruction */
  void* pfnDebugMonitor_Handler;                 /*  -4 Debug Monitor */
  void* pvReservedC3;
  void* pfnPendSV_Handler;                       /*  -2 Pendable request for system service */
  void* pfnSysTick_Handler;                      /*  -1 System Tick Timer */

  /* Peripheral handlers */
  void* pfnRTC_Handler;                          /*   0 Real-Time Counter (RTC) */
  void* pfnEIC_Handler;                          /*   1 External Interrupt Controller (EIC) */
  void* pfnFREQM_Handler;                        /*   2 Frequency Meter (FREQM) */
  void* pfnNVM_Handler;                          /*   3 flash controller (NVM) */
  void* pfnCHANGE_NOTICE_A_Handler;              /*   4 GPIO (GPIOA) */
  void* pfnCHANGE_NOTICE_B_Handler;              /*   5 GPIO (GPIOB) */
  void* pfnCHANGE_NOTICE_C_Handler;              /*   6 GPIO (GPIOC) */
  void* pfnCHANGE_NOTICE_D_Handler;              /*   7 GPIO (GPIOD) */
  void* pfnCHANGE_NOTICE_E_Handler;              /*   8 GPIO (GPIOE) */
  void* pfnDMAC_0_3_Handler;                     /*   9 Direct Memory Access Controller (DMAC) */
  void* pfnDMAC_4_15_Handler;                    /*  10 Direct Memory Access Controller (DMAC) */
  void* pfnEVSYS_0_3_Handler;                    /*  11 Event System Interface (EVSYS) */
  void* pfnEVSYS_4_11_Handler;                   /*  12 Event System Interface (EVSYS) */
  void* pfnPAC_Handler;                          /*  13 Peripheral Access Controller (PAC) */
  void* pfnRAMECC_Handler;                       /*  14 RAM ECC (RAMECC) */
  void* pfnSERCOM0_Handler;                      /*  15 Serial Communication Interface (SERCOM0) */
  void* pfnSERCOM1_Handler;                      /*  16 Serial Communication Interface (SERCOM1) */
  void* pfnSERCOM2_Handler;                      /*  17 Serial Communication Interface (SERCOM2) */
  void* pfnSERCOM3_Handler;                      /*  18 Serial Communication Interface (SERCOM3) */
  void* pfnSERCOM4_Handler;                      /*  19 Serial Communication Interface (SERCOM4) */
  void* pfnSERCOM5_Handler;                      /*  20 Serial Communication Interface (SERCOM5) */
  void* pfnSERCOM6_Handler;                      /*  21 Serial Communication Interface (SERCOM6) */
  void* pfnTCC0_Handler;                         /*  22 Timer Counter Control (TCC0) */
  void* pfnTCC1_Handler;                         /*  23 Timer Counter Control (TCC1) */
  void* pfnTCC2_Handler;                         /*  24 Timer Counter Control (TCC2) */
  void* pfnTC0_Handler;                          /*  25 Basic Timer Counter (TC0) */
  void* pfnTC1_Handler;                          /*  26 Basic Timer Counter (TC1) */
  void* pfnTC2_Handler;                          /*  27 Basic Timer Counter (TC2) */
  void* pfnTC3_Handler;                          /*  28 Basic Timer Counter (TC3) */
  void* pfnTC4_Handler;                          /*  29 Basic Timer Counter (TC4) */
  void* pfnTC5_Handler;                          /*  30 Basic Timer Counter (TC5) */
  void* pfnTC6_Handler;                          /*  31 Basic Timer Counter (TC6) */
  void* pfnTC7_Handler;                          /*  32 Basic Timer Counter (TC7) */
  void* pfnTC8_Handler;                          /*  33 Basic Timer Counter (TC8) */
  void* pfnTC9_Handler;                          /*  34 Basic Timer Counter (TC9) */
  void* pfnADCHS_IRQ_Handler;                    /*  35 12-bit Analog to Digital Converter (ADCHS) */
  void* pfnADCHS_FAULT_Handler;                  /*  36 12-bit Analog to Digital Converter (ADCHS) */
  void* pfnADCHS_FCC_Handler;                    /*  37 12-bit Analog to Digital Converter (ADCHS) */
  void* pfnADCHS_BGVR_RDY_Handler;               /*  38 12-bit Analog to Digital Converter (ADCHS) */
  void* pfnAC_Handler;                           /*  39 Analog Comparators (AC) */
  void* pfnSILEX_0_Handler;                      /*  40  (SILEX) */
  void* pfnSILEX_1_Handler;                      /*  41  (SILEX) */
  void* pfnQSPI_Handler;                         /*  42 Quad SPI interface (QSPI) */
  void* pfnZB_INT0_Handler;                      /*  43 ZigBee MAC DOS (ZIGBEE) */
  void* pfnBT_INT0_Handler;                      /*  44 BLE (BLE) */
  void* pfnBT_INT1_Handler;                      /*  45 BLE (BLE) */
  void* pfnARBITER_Handler;                      /*  46 Radio Arbiter (ARB) */
  void* pfnCLKI_WAKEUP_NMI_Handler;              /*  47 BLE (BLE) */
  void* pfnCVD_Handler;                          /*  48 Hardware CVD Controller Macro (CVD) */
  void* pvReserved49;
  void* pfnQEI_Handler;                          /*  50  (QEI) */
  void* pfnCAN0_Handler;                         /*  51 Control Area Network (CAN0) */
  void* pfnCAN1_Handler;                         /*  52 Control Area Network (CAN1) */
  void* pfnETH_Handler;                          /*  53 Ethernet Controller (ETH) */
  void* pfnUSB_Handler;                          /*  54 USB (USB) */
  void* pfnPLL_LOCK_BOOT_Handler;                /*  55 BT ZB Subsystem (BTZBSYS) */
  void* pfnPLL_LOCK_USER_Handler;                /*  56 BT ZB Subsystem (BTZBSYS) */
  void* pfnBT_LC_Handler;                        /*  57 BLE (BLE) */
} DeviceVectors;

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if !defined DONT_USE_PREDEFINED_CORE_HANDLERS
/* CORTEX-M4 exception handlers */
void Reset_Handler                 ( void );
void NonMaskableInt_Handler        ( void );
void HardFault_Handler             ( void );
void MemoryManagement_Handler      ( void );
void BusFault_Handler              ( void );
void UsageFault_Handler            ( void );
void SVCall_Handler                ( void );
void DebugMonitor_Handler          ( void );
void PendSV_Handler                ( void );
void SysTick_Handler               ( void );
#endif /* DONT_USE_PREDEFINED_CORE_HANDLERS */

#if !defined DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS
/* Peripherals interrupt handlers */
void RTC_Handler                   ( void );
void EIC_Handler                   ( void );
void FREQM_Handler                 ( void );
void NVM_Handler                   ( void );
void CHANGE_NOTICE_A_Handler       ( void );
void CHANGE_NOTICE_B_Handler       ( void );
void CHANGE_NOTICE_C_Handler       ( void );
void CHANGE_NOTICE_D_Handler       ( void );
void CHANGE_NOTICE_E_Handler       ( void );
void DMAC_0_3_Handler              ( void );
void DMAC_4_15_Handler             ( void );
void EVSYS_0_3_Handler             ( void );
void EVSYS_4_11_Handler            ( void );
void PAC_Handler                   ( void );
void RAMECC_Handler                ( void );
void SERCOM0_Handler               ( void );
void SERCOM1_Handler               ( void );
void SERCOM2_Handler               ( void );
void SERCOM3_Handler               ( void );
void SERCOM4_Handler               ( void );
void SERCOM5_Handler               ( void );
void SERCOM6_Handler               ( void );
void TCC0_Handler                  ( void );
void TCC1_Handler                  ( void );
void TCC2_Handler                  ( void );
void TC0_Handler                   ( void );
void TC1_Handler                   ( void );
void TC2_Handler                   ( void );
void TC3_Handler                   ( void );
void TC4_Handler                   ( void );
void TC5_Handler                   ( void );
void TC6_Handler                   ( void );
void TC7_Handler                   ( void );
void TC8_Handler                   ( void );
void TC9_Handler                   ( void );
void ADCHS_IRQ_Handler             ( void );
void ADCHS_FAULT_Handler           ( void );
void ADCHS_FCC_Handler             ( void );
void ADCHS_BGVR_RDY_Handler        ( void );
void AC_Handler                    ( void );
void SILEX_0_Handler               ( void );
void SILEX_1_Handler               ( void );
void QSPI_Handler                  ( void );
void ZB_INT0_Handler               ( void );
void BT_INT0_Handler               ( void );
void BT_INT1_Handler               ( void );
void ARBITER_Handler               ( void );
void CLKI_WAKEUP_NMI_Handler       ( void );
void CVD_Handler                   ( void );
void QEI_Handler                   ( void );
void CAN0_Handler                  ( void );
void CAN1_Handler                  ( void );
void ETH_Handler                   ( void );
void USB_Handler                   ( void );
void PLL_LOCK_BOOT_Handler         ( void );
void PLL_LOCK_USER_Handler         ( void );
void BT_LC_Handler                 ( void );
#endif /* DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* Configuration of the CORTEX-M4 Processor and Core Peripherals */
#define __ARCH_ARM                         1 /* None                                                                      */
#define __CM4_REV                     0x0001 /* None                                                                      */
#define __DEBUG_LVL                        3 /* None                                                                      */
#define __FPU_PRESENT                      1 /* None                                                                      */
#define __MPU_PRESENT                      1 /* None                                                                      */
#define __NVIC_PRIO_BITS                   3 /* None                                                                      */
#define __TRACE_LVL                        2 /* None                                                                      */
#define __VTOR_PRESENT                     1 /* None                                                                      */
#define __ARCH_ARM_CORTEX_M                1

/* CMSIS includes */
#include "core_cm4.h"
#if defined USE_CMSIS_INIT
#include "system_pic32wm_bz6.h"
#endif /* USE_CMSIS_INIT */

/* ************************************************************************** */
/*           SOFTWARE PERIPHERAL API DEFINITIONS FOR PIC32WM_BZ6204           */
/* ************************************************************************** */
#include "component/ac.h"
#include "component/adchs.h"
#include "component/arb.h"
#include "component/ble.h"
#include "component/btzbsys.h"
#include "component/can.h"
#include "component/ccl.h"
#include "component/cfg.h"
#include "component/cmcc.h"
#include "component/cru.h"
#include "component/cvd.h"
#include "component/dac_ctrl.h"
#include "component/dmac.h"
#include "component/dmt.h"
#include "component/dscon.h"
#include "component/dsu.h"
#include "component/efuse.h"
#include "component/eic.h"
#include "component/eth.h"
#include "component/evsys.h"
#include "component/freqm.h"
#include "component/fuses.h"
#include "component/gpio.h"
#include "component/hmatrix2top.h"
#include "component/nvm.h"
#include "component/pac.h"
#include "component/pche.h"
#include "component/pfw.h"
#include "component/pmu.h"
#include "component/pps.h"
#include "component/qei.h"
#include "component/qspi.h"
#include "component/ramecc.h"
#include "component/rcon.h"
#include "component/rot.h"
#include "component/rtc.h"
#include "component/sercom.h"
#include "component/silex.h"
#include "component/tc.h"
#include "component/tcc.h"
#include "component/usb.h"
#include "component/wdt.h"
#include "component/zigbee.h"

/* ************************************************************************** */
/*                  INSTANCE DEFINITIONS FOR PIC32WM_BZ6204                   */
/* ************************************************************************** */
#include "instance/ac.h"
#include "instance/adchs.h"
#include "instance/arb.h"
#include "instance/ble.h"
#include "instance/btzbsys.h"
#include "instance/can0.h"
#include "instance/can1.h"
#include "instance/ccl.h"
#include "instance/cfg.h"
#include "instance/cmcc.h"
#include "instance/cru.h"
#include "instance/cvd.h"
#include "instance/dac_ctrl.h"
#include "instance/dmac.h"
#include "instance/dmt.h"
#include "instance/dscon.h"
#include "instance/dsu.h"
#include "instance/efuse.h"
#include "instance/eic.h"
#include "instance/eth.h"
#include "instance/evsys.h"
#include "instance/freqm.h"
#include "instance/fuses.h"
#include "instance/gpioa.h"
#include "instance/gpiob.h"
#include "instance/gpioc.h"
#include "instance/gpiod.h"
#include "instance/gpioe.h"
#include "instance/hmatrix2top.h"
#include "instance/nvm.h"
#include "instance/pac.h"
#include "instance/pche.h"
#include "instance/pfw.h"
#include "instance/pmu.h"
#include "instance/pps.h"
#include "instance/qei.h"
#include "instance/qspi.h"
#include "instance/ramecc.h"
#include "instance/rcon.h"
#include "instance/rot.h"
#include "instance/rtc.h"
#include "instance/sercom0.h"
#include "instance/sercom1.h"
#include "instance/sercom2.h"
#include "instance/sercom3.h"
#include "instance/sercom4.h"
#include "instance/sercom5.h"
#include "instance/sercom6.h"
#include "instance/silex.h"
#include "instance/tc0.h"
#include "instance/tc1.h"
#include "instance/tc2.h"
#include "instance/tc3.h"
#include "instance/tc4.h"
#include "instance/tc5.h"
#include "instance/tc6.h"
#include "instance/tc7.h"
#include "instance/tc8.h"
#include "instance/tc9.h"
#include "instance/tcc0.h"
#include "instance/tcc1.h"
#include "instance/tcc2.h"
#include "instance/usb.h"
#include "instance/wdt.h"
#include "instance/zigbee.h"

/* ************************************************************************** */
/*                PERIPHERAL ID DEFINITIONS FOR PIC32WM_BZ6204                */
/* ************************************************************************** */
#define ID_PAC           (  0) /* Instance index for PAC (PAC) */
#define ID_FREQM         (  1) /* Instance index for FREQM (FREQM) */
#define ID_EIC           (  2) /* Instance index for EIC (EIC) */
#define ID_SERCOM0       (  3) /* Instance index for SERCOM0 (SERCOM0) */
#define ID_SERCOM1       (  4) /* Instance index for SERCOM1 (SERCOM1) */
#define ID_TC0           (  5) /* Instance index for TC0 (TC0) */
#define ID_TC1           (  6) /* Instance index for TC1 (TC1) */
#define ID_TC2           (  7) /* Instance index for TC2 (TC2) */
#define ID_TC3           (  8) /* Instance index for TC3 (TC3) */
#define ID_TC4           (  9) /* Instance index for TC4 (TC4) */
#define ID_TC5           ( 10) /* Instance index for TC5 (TC5) */
#define ID_TC6           ( 11) /* Instance index for TC6 (TC6) */
#define ID_TC7           ( 12) /* Instance index for TC7 (TC7) */
#define ID_TCC0          ( 13) /* Instance index for TCC0 (TCC0) */
#define ID_TCC1          ( 14) /* Instance index for TCC1 (TCC1) */
#define ID_TCC2          ( 15) /* Instance index for TCC2 (TCC2) */
#define ID_DSU           ( 32) /* Instance index for DSU (DSU) */
#define ID_DMAC          ( 34) /* Instance index for DMAC (DMAC) */
#define ID_EVSYS         ( 35) /* Instance index for EVSYS (EVSYS) */
#define ID_RAMECC        ( 36) /* Instance index for RAMECC (RAMECC) */
#define ID_QSPI          ( 64) /* Instance index for QSPI (QSPI) */
#define ID_SERCOM6       ( 65) /* Instance index for SERCOM6 (SERCOM6) */
#define ID_CCL           ( 70) /* Instance index for CCL (CCL) */
#define ID_AC            ( 71) /* Instance index for AC (AC) */
#define ID_HMATRIX2TOP   ( 73) /* Instance index for HMATRIX2TOP (HMATRIX2TOP) */
#define ID_SERCOM2       ( 96) /* Instance index for SERCOM2 (SERCOM2) */
#define ID_SERCOM3       ( 97) /* Instance index for SERCOM3 (SERCOM3) */
#define ID_SERCOM4       ( 98) /* Instance index for SERCOM4 (SERCOM4) */
#define ID_SERCOM5       ( 99) /* Instance index for SERCOM5 (SERCOM5) */
#define ID_TC8           (100) /* Instance index for TC8 (TC8) */
#define ID_TC9           (101) /* Instance index for TC9 (TC9) */
#define ID_CAN0          (104) /* Instance index for CAN0 (CAN0) */
#define ID_CAN1          (105) /* Instance index for CAN1 (CAN1) */

#define ID_PERIPH_MAX    (105) /* Number of peripheral IDs */

/* ************************************************************************** */
/*         REGISTER STRUCTURE ADDRESS DEFINITIONS FOR PIC32WM_BZ6204          */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define AC_REGS                          ((ac_registers_t*)0x42001c00)                 /* AC Registers Address         */
#define ADCHS_REGS                       ((adchs_registers_t*)0x44001500)              /* ADCHS Registers Address      */
#define ARB_REGS                         ((arb_registers_t*)0x41011000)                /* ARB Registers Address        */
#define BLE_REGS                         ((ble_registers_t*)0x41012000)                /* BLE Registers Address        */
#define BTZBSYS_REGS                     ((btzbsys_registers_t*)0x41014000)            /* BTZBSYS Registers Address    */
#define CAN0_REGS                        ((can_registers_t*)0x46002000)                /* CAN0 Registers Address       */
#define CAN1_REGS                        ((can_registers_t*)0x46002400)                /* CAN1 Registers Address       */
#define CCL_REGS                         ((ccl_registers_t*)0x42001800)                /* CCL Registers Address        */
#define CFG_REGS                         ((cfg_registers_t*)0x44000000)                /* CFG Registers Address        */
#define CMCC_REGS                        ((cmcc_registers_t*)0x41002000)               /* CMCC Registers Address       */
#define CRU_REGS                         ((cru_registers_t*)0x44000a00)                /* CRU Registers Address        */
#define CVD_REGS                         ((cvd_registers_t*)0x44002400)                /* CVD Registers Address        */
#define DAC_CTRL_REGS                    ((dac_ctrl_registers_t*)0x44002e00)           /* DAC_CTRL Registers Address   */
#define DMAC_REGS                        ((dmac_registers_t*)0x41004000)               /* DMAC Registers Address       */
#define DMT_REGS                         ((dmt_registers_t*)0x44000e00)                /* DMT Registers Address        */
#define DSCON_REGS                       ((dscon_registers_t*)0x42011000)              /* DSCON Registers Address      */
#define DSU_REGS                         ((dsu_registers_t*)0x41000000)                /* DSU Registers Address        */
#define EIC_REGS                         ((eic_registers_t*)0x40000800)                /* EIC Registers Address        */
#define EFUSE_REGS                       ((efuse_registers_t*)0x00000000)              /* EFUSE Registers Address      */
#define ETH_REGS                         ((eth_registers_t*)0x4100a000)                /* ETH Registers Address        */
#define EVSYS_REGS                       ((evsys_registers_t*)0x41006000)              /* EVSYS Registers Address      */
#define FREQM_REGS                       ((freqm_registers_t*)0x40000400)              /* FREQM Registers Address      */
#define FUSES_DEVICECFG_REGS             ((fuses_devicecfg_registers_t*)0x00810e80)    /* FUSES Registers Address      */
#define GPIOE_REGS                       ((gpio_registers_t*)0x44002d00)               /* GPIOE Registers Address      */
#define GPIOD_REGS                       ((gpio_registers_t*)0x44002c00)               /* GPIOD Registers Address      */
#define GPIOC_REGS                       ((gpio_registers_t*)0x44002b00)               /* GPIOC Registers Address      */
#define GPIOB_REGS                       ((gpio_registers_t*)0x44002a00)               /* GPIOB Registers Address      */
#define GPIOA_REGS                       ((gpio_registers_t*)0x44002900)               /* GPIOA Registers Address      */
#define HMATRIX2TOP_REGS                 ((hmatrix2top_registers_t*)0x42002400)        /* HMATRIX2TOP Registers Address */
#define NVM_REGS                         ((nvm_registers_t*)0x44000600)                /* NVM Registers Address        */
#define PAC_REGS                         ((pac_registers_t*)0x40000000)                /* PAC Registers Address        */
#define PCHE_REGS                        ((pche_registers_t*)0x44012400)               /* PCHE Registers Address       */
#define PFW_REGS                         ((pfw_registers_t*)0x44000800)                /* PFW Registers Address        */
#define PMU_REGS                         ((pmu_registers_t*)0x44013e00)                /* PMU Registers Address        */
#define PPS_REGS                         ((pps_registers_t*)0x44001000)                /* PPS Registers Address        */
#define QEI_REGS                         ((qei_registers_t*)0x44005000)                /* QEI Registers Address        */
#define QSPI_REGS                        ((qspi_registers_t*)0x42000000)               /* QSPI Registers Address       */
#define RAMECC_REGS                      ((ramecc_registers_t*)0x41008000)             /* RAMECC Registers Address     */
#define RCON_REGS                        ((rcon_registers_t*)0x44000a00)               /* RCON Registers Address       */
#define ROT_REGS                         ((rot_registers_t*)0x44003000)                /* ROT Registers Address        */
#define RTC_REGS                         ((rtc_registers_t*)0x42010000)                /* RTC Registers Address        */
#define SERCOM0_REGS                     ((sercom_registers_t*)0x40000c00)             /* SERCOM0 Registers Address    */
#define SERCOM1_REGS                     ((sercom_registers_t*)0x40001000)             /* SERCOM1 Registers Address    */
#define SERCOM2_REGS                     ((sercom_registers_t*)0x46000000)             /* SERCOM2 Registers Address    */
#define SERCOM3_REGS                     ((sercom_registers_t*)0x46000400)             /* SERCOM3 Registers Address    */
#define SERCOM4_REGS                     ((sercom_registers_t*)0x46000800)             /* SERCOM4 Registers Address    */
#define SERCOM5_REGS                     ((sercom_registers_t*)0x46000c00)             /* SERCOM5 Registers Address    */
#define SERCOM6_REGS                     ((sercom_registers_t*)0x42000400)             /* SERCOM6 Registers Address    */
#define SILEX_REGS                       ((silex_registers_t*)0x43000000)              /* SILEX Registers Address      */
#define TC0_REGS                         ((tc_registers_t*)0x40001400)                 /* TC0 Registers Address        */
#define TC1_REGS                         ((tc_registers_t*)0x40001800)                 /* TC1 Registers Address        */
#define TC2_REGS                         ((tc_registers_t*)0x40001c00)                 /* TC2 Registers Address        */
#define TC3_REGS                         ((tc_registers_t*)0x40002000)                 /* TC3 Registers Address        */
#define TC4_REGS                         ((tc_registers_t*)0x40002400)                 /* TC4 Registers Address        */
#define TC5_REGS                         ((tc_registers_t*)0x40002800)                 /* TC5 Registers Address        */
#define TC6_REGS                         ((tc_registers_t*)0x40002c00)                 /* TC6 Registers Address        */
#define TC7_REGS                         ((tc_registers_t*)0x40003000)                 /* TC7 Registers Address        */
#define TC8_REGS                         ((tc_registers_t*)0x46001000)                 /* TC8 Registers Address        */
#define TC9_REGS                         ((tc_registers_t*)0x46001400)                 /* TC9 Registers Address        */
#define TCC0_REGS                        ((tcc_registers_t*)0x40003400)                /* TCC0 Registers Address       */
#define TCC1_REGS                        ((tcc_registers_t*)0x40003800)                /* TCC1 Registers Address       */
#define TCC2_REGS                        ((tcc_registers_t*)0x40003c00)                /* TCC2 Registers Address       */
#define USB_REGS                         ((usb_registers_t*)0x44010000)                /* USB Registers Address        */
#define WDT_REGS                         ((wdt_registers_t*)0x44000500)                /* WDT Registers Address        */
#define ZIGBEE_REGS                      ((zigbee_registers_t*)0x41010000)             /* ZIGBEE Registers Address     */
#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ************************************************************************** */
/*                BASE ADDRESS DEFINITIONS FOR PIC32WM_BZ6204                 */
/* ************************************************************************** */
#define AC_BASE_ADDRESS                  _UINT32_(0x42001c00)                          /* AC Base Address */
#define ADCHS_BASE_ADDRESS               _UINT32_(0x44001500)                          /* ADCHS Base Address */
#define ARB_BASE_ADDRESS                 _UINT32_(0x41011000)                          /* ARB Base Address */
#define BLE_BASE_ADDRESS                 _UINT32_(0x41012000)                          /* BLE Base Address */
#define BTZBSYS_BASE_ADDRESS             _UINT32_(0x41014000)                          /* BTZBSYS Base Address */
#define CAN0_BASE_ADDRESS                _UINT32_(0x46002000)                          /* CAN0 Base Address */
#define CAN1_BASE_ADDRESS                _UINT32_(0x46002400)                          /* CAN1 Base Address */
#define CCL_BASE_ADDRESS                 _UINT32_(0x42001800)                          /* CCL Base Address */
#define CFG_BASE_ADDRESS                 _UINT32_(0x44000000)                          /* CFG Base Address */
#define CMCC_BASE_ADDRESS                _UINT32_(0x41002000)                          /* CMCC Base Address */
#define CRU_BASE_ADDRESS                 _UINT32_(0x44000a00)                          /* CRU Base Address */
#define CVD_BASE_ADDRESS                 _UINT32_(0x44002400)                          /* CVD Base Address */
#define DAC_CTRL_BASE_ADDRESS            _UINT32_(0x44002e00)                          /* DAC_CTRL Base Address */
#define DMAC_BASE_ADDRESS                _UINT32_(0x41004000)                          /* DMAC Base Address */
#define DMT_BASE_ADDRESS                 _UINT32_(0x44000e00)                          /* DMT Base Address */
#define DSCON_BASE_ADDRESS               _UINT32_(0x42011000)                          /* DSCON Base Address */
#define DSU_BASE_ADDRESS                 _UINT32_(0x41000000)                          /* DSU Base Address */
#define EIC_BASE_ADDRESS                 _UINT32_(0x40000800)                          /* EIC Base Address */
#define EFUSE_BASE_ADDRESS               _UINT32_(0x00000000)                          /* EFUSE Base Address */
#define ETH_BASE_ADDRESS                 _UINT32_(0x4100a000)                          /* ETH Base Address */
#define EVSYS_BASE_ADDRESS               _UINT32_(0x41006000)                          /* EVSYS Base Address */
#define FREQM_BASE_ADDRESS               _UINT32_(0x40000400)                          /* FREQM Base Address */
#define FUSES_DEVICECFG_BASE_ADDRESS     _UINT32_(0x00810e80)                          /* FUSES Base Address */
#define GPIOE_BASE_ADDRESS               _UINT32_(0x44002d00)                          /* GPIOE Base Address */
#define GPIOD_BASE_ADDRESS               _UINT32_(0x44002c00)                          /* GPIOD Base Address */
#define GPIOC_BASE_ADDRESS               _UINT32_(0x44002b00)                          /* GPIOC Base Address */
#define GPIOB_BASE_ADDRESS               _UINT32_(0x44002a00)                          /* GPIOB Base Address */
#define GPIOA_BASE_ADDRESS               _UINT32_(0x44002900)                          /* GPIOA Base Address */
#define HMATRIX2TOP_BASE_ADDRESS         _UINT32_(0x42002400)                          /* HMATRIX2TOP Base Address */
#define NVM_BASE_ADDRESS                 _UINT32_(0x44000600)                          /* NVM Base Address */
#define PAC_BASE_ADDRESS                 _UINT32_(0x40000000)                          /* PAC Base Address */
#define PCHE_BASE_ADDRESS                _UINT32_(0x44012400)                          /* PCHE Base Address */
#define PFW_BASE_ADDRESS                 _UINT32_(0x44000800)                          /* PFW Base Address */
#define PMU_BASE_ADDRESS                 _UINT32_(0x44013e00)                          /* PMU Base Address */
#define PPS_BASE_ADDRESS                 _UINT32_(0x44001000)                          /* PPS Base Address */
#define QEI_BASE_ADDRESS                 _UINT32_(0x44005000)                          /* QEI Base Address */
#define QSPI_BASE_ADDRESS                _UINT32_(0x42000000)                          /* QSPI Base Address */
#define RAMECC_BASE_ADDRESS              _UINT32_(0x41008000)                          /* RAMECC Base Address */
#define RCON_BASE_ADDRESS                _UINT32_(0x44000a00)                          /* RCON Base Address */
#define ROT_BASE_ADDRESS                 _UINT32_(0x44003000)                          /* ROT Base Address */
#define RTC_BASE_ADDRESS                 _UINT32_(0x42010000)                          /* RTC Base Address */
#define SERCOM0_BASE_ADDRESS             _UINT32_(0x40000c00)                          /* SERCOM0 Base Address */
#define SERCOM1_BASE_ADDRESS             _UINT32_(0x40001000)                          /* SERCOM1 Base Address */
#define SERCOM2_BASE_ADDRESS             _UINT32_(0x46000000)                          /* SERCOM2 Base Address */
#define SERCOM3_BASE_ADDRESS             _UINT32_(0x46000400)                          /* SERCOM3 Base Address */
#define SERCOM4_BASE_ADDRESS             _UINT32_(0x46000800)                          /* SERCOM4 Base Address */
#define SERCOM5_BASE_ADDRESS             _UINT32_(0x46000c00)                          /* SERCOM5 Base Address */
#define SERCOM6_BASE_ADDRESS             _UINT32_(0x42000400)                          /* SERCOM6 Base Address */
#define SILEX_BASE_ADDRESS               _UINT32_(0x43000000)                          /* SILEX Base Address */
#define TC0_BASE_ADDRESS                 _UINT32_(0x40001400)                          /* TC0 Base Address */
#define TC1_BASE_ADDRESS                 _UINT32_(0x40001800)                          /* TC1 Base Address */
#define TC2_BASE_ADDRESS                 _UINT32_(0x40001c00)                          /* TC2 Base Address */
#define TC3_BASE_ADDRESS                 _UINT32_(0x40002000)                          /* TC3 Base Address */
#define TC4_BASE_ADDRESS                 _UINT32_(0x40002400)                          /* TC4 Base Address */
#define TC5_BASE_ADDRESS                 _UINT32_(0x40002800)                          /* TC5 Base Address */
#define TC6_BASE_ADDRESS                 _UINT32_(0x40002c00)                          /* TC6 Base Address */
#define TC7_BASE_ADDRESS                 _UINT32_(0x40003000)                          /* TC7 Base Address */
#define TC8_BASE_ADDRESS                 _UINT32_(0x46001000)                          /* TC8 Base Address */
#define TC9_BASE_ADDRESS                 _UINT32_(0x46001400)                          /* TC9 Base Address */
#define TCC0_BASE_ADDRESS                _UINT32_(0x40003400)                          /* TCC0 Base Address */
#define TCC1_BASE_ADDRESS                _UINT32_(0x40003800)                          /* TCC1 Base Address */
#define TCC2_BASE_ADDRESS                _UINT32_(0x40003c00)                          /* TCC2 Base Address */
#define USB_BASE_ADDRESS                 _UINT32_(0x44010000)                          /* USB Base Address */
#define WDT_BASE_ADDRESS                 _UINT32_(0x44000500)                          /* WDT Base Address */
#define ZIGBEE_BASE_ADDRESS              _UINT32_(0x41010000)                          /* ZIGBEE Base Address */

/* ************************************************************************** */
/*                     PIO DEFINITIONS FOR PIC32WM_BZ6204                     */
/* ************************************************************************** */
#include "pio/pic32wm_bz6204.h"

/* ************************************************************************** */
/*               MEMORY MAPPING DEFINITIONS FOR PIC32WM_BZ6204                */
/* ************************************************************************** */
#define ROM_SECURE_BOOT_ROM_SIZE       _UINT32_(0x00010000)    /*   64kB Memory segment type: rom */
#define ROM_SECURE_BOOT_PATCH_SIZE     _UINT32_(0x00000800)    /*    2kB Memory segment type: rom */
#define FCR_BFM_SIZE                   _UINT32_(0x00010000)    /*   64kB Memory segment type: flash */
#define FCR_BFM_PAGE_SIZE              _UINT32_(      4096)
#define FCR_BFM_NB_OF_PAGES            _UINT32_(        16)

#define FCR_CFM_SIZE                   _UINT32_(0x00001000)    /*    4kB Memory segment type: fuses */
#define FCR_CFM_PAGE_SIZE              _UINT32_(      4096)
#define FCR_CFM_NB_OF_PAGES            _UINT32_(         1)

#define FCR_OTP_PAGE_SIZE              _UINT32_(0x00001000)    /*    4kB Memory segment type: flash */
#define FCR_OTP_PAGE_PAGE_SIZE         _UINT32_(      4096)
#define FCR_OTP_PAGE_NB_OF_PAGES       _UINT32_(         1)

#define FCR_PFM_SIZE                   _UINT32_(0x00200000)    /* 2048kB Memory segment type: flash */
#define FCR_PFM_PAGE_SIZE              _UINT32_(      4096)
#define FCR_PFM_NB_OF_PAGES            _UINT32_(       512)

#define CMCC_TCM_SIZE                  _UINT32_(0x00001000)    /*    4kB Memory segment type: other */
#define QSPI_SIZE                      _UINT32_(0x01000000)    /* 16384kB Memory segment type: other */
#define RAM_SYSTEM_RAM_SIZE            _UINT32_(0x00080000)    /*  512kB Memory segment type: ram */
#define PBA_BRIDGE_SIZE                _UINT32_(0x00004000)    /*   16kB Memory segment type: io */
#define PBB_BRIDGE_SIZE                _UINT32_(0x00020000)    /*  128kB Memory segment type: io */
#define PBC_BRIDGE_SIZE                _UINT32_(0x00012000)    /*   72kB Memory segment type: io */
#define SILEX_SFR_SIZE                 _UINT32_(0x00020000)    /*  128kB Memory segment type: io */
#define PBPIC_BRIDGE_SIZE              _UINT32_(0x00014000)    /*   80kB Memory segment type: io */
#define MCROM_ROM_SIZE                 _UINT32_(0x00002000)    /*    8kB Memory segment type: rom */
#define PBD_BRIDGE_SIZE                _UINT32_(0x00002800)    /*   10kB Memory segment type: io */
#define SYSTEM_CM4F_SYSTEM_REGISTERS_SIZE _UINT32_(0x1fff4000)    /* 524240kB Memory segment type: io */

#define ROM_SECURE_BOOT_ROM_ADDR       _UINT32_(0x00000000)    /* ROM_SECURE_BOOT_ROM base address (type: rom)*/
#define ROM_SECURE_BOOT_PATCH_ADDR     _UINT32_(0x00018000)    /* ROM_SECURE_BOOT_PATCH base address (type: rom)*/
#define FCR_BFM_ADDR                   _UINT32_(0x00800000)    /* FCR_BFM base address (type: flash)*/
#define FCR_CFM_ADDR                   _UINT32_(0x00810000)    /* FCR_CFM base address (type: fuses)*/
#define FCR_OTP_PAGE_ADDR              _UINT32_(0x00811000)    /* FCR_OTP_PAGE base address (type: flash)*/
#define FCR_PFM_ADDR                   _UINT32_(0x01000000)    /* FCR_PFM base address (type: flash)*/
#define CMCC_TCM_ADDR                  _UINT32_(0x02000000)    /* CMCC_TCM base address (type: other)*/
#define QSPI_ADDR                      _UINT32_(0x04000000)    /* QSPI base address (type: other)*/
#define RAM_SYSTEM_RAM_ADDR            _UINT32_(0x20000000)    /* RAM_SYSTEM_RAM base address (type: ram)*/
#define PBA_BRIDGE_ADDR                _UINT32_(0x40000000)    /* PBA_BRIDGE base address (type: io)*/
#define PBB_BRIDGE_ADDR                _UINT32_(0x41000000)    /* PBB_BRIDGE base address (type: io)*/
#define PBC_BRIDGE_ADDR                _UINT32_(0x42000000)    /* PBC_BRIDGE base address (type: io)*/
#define SILEX_SFR_ADDR                 _UINT32_(0x43000000)    /* SILEX_SFR base address (type: io)*/
#define PBPIC_BRIDGE_ADDR              _UINT32_(0x44000000)    /* PBPIC_BRIDGE base address (type: io)*/
#define MCROM_ROM_ADDR                 _UINT32_(0x45000000)    /* MCROM_ROM base address (type: rom)*/
#define PBD_BRIDGE_ADDR                _UINT32_(0x46000000)    /* PBD_BRIDGE base address (type: io)*/
#define SYSTEM_CM4F_SYSTEM_REGISTERS_ADDR _UINT32_(0xe0000000)    /* SYSTEM_CM4F_SYSTEM_REGISTERS base address (type: io)*/
#define EFUSE_ADDR                     _UINT32_(0x00000000)    /* EFUSE base address (type: fuses)*/

/* ************************************************************************** */
/*                    DEVICE SIGNATURES FOR PIC32WM_BZ6204                    */
/* ************************************************************************** */
#define CHIP_DSU_DID                   _UINT32_(0X0001A800)

/* ************************************************************************** */
/*                 ELECTRICAL DEFINITIONS FOR PIC32WM_BZ6204                  */
/* ************************************************************************** */

/* ************************************************************************** */
/*                    Event Generator IDs for C32WM_BZ6204                    */
/* ************************************************************************** */
#define EVENT_ID_GEN_RTC_PER_0                            1 /* ID for RTC event generator PER_0 */
#define EVENT_ID_GEN_RTC_PER_1                            2 /* ID for RTC event generator PER_1 */
#define EVENT_ID_GEN_RTC_PER_2                            3 /* ID for RTC event generator PER_2 */
#define EVENT_ID_GEN_RTC_PER_3                            4 /* ID for RTC event generator PER_3 */
#define EVENT_ID_GEN_RTC_PER_4                            5 /* ID for RTC event generator PER_4 */
#define EVENT_ID_GEN_RTC_PER_5                            6 /* ID for RTC event generator PER_5 */
#define EVENT_ID_GEN_RTC_PER_6                            7 /* ID for RTC event generator PER_6 */
#define EVENT_ID_GEN_RTC_PER_7                            8 /* ID for RTC event generator PER_7 */
#define EVENT_ID_GEN_RTC_CMP_0                            9 /* ID for RTC event generator CMP_0 */
#define EVENT_ID_GEN_RTC_CMP_1                           10 /* ID for RTC event generator CMP_1 */
#define EVENT_ID_GEN_RTC_CMP_2                           11 /* ID for RTC event generator CMP_2 */
#define EVENT_ID_GEN_RTC_CMP_3                           12 /* ID for RTC event generator CMP_3 */
#define EVENT_ID_GEN_RTC_TAMPER                          13 /* ID for RTC event generator TAMPER */
#define EVENT_ID_GEN_RTC_OVF                             14 /* ID for RTC event generator OVF */
#define EVENT_ID_GEN_EIC_EXTINT_0                        15 /* ID for EIC event generator EXTINT_0 */
#define EVENT_ID_GEN_EIC_EXTINT_1                        16 /* ID for EIC event generator EXTINT_1 */
#define EVENT_ID_GEN_EIC_EXTINT_2                        17 /* ID for EIC event generator EXTINT_2 */
#define EVENT_ID_GEN_EIC_EXTINT_3                        18 /* ID for EIC event generator EXTINT_3 */
#define EVENT_ID_GEN_DMAC_CH_0                           19 /* ID for DMAC event generator CH_0 */
#define EVENT_ID_GEN_DMAC_CH_1                           20 /* ID for DMAC event generator CH_1 */
#define EVENT_ID_GEN_DMAC_CH_2                           21 /* ID for DMAC event generator CH_2 */
#define EVENT_ID_GEN_DMAC_CH_3                           22 /* ID for DMAC event generator CH_3 */
#define EVENT_ID_GEN_PAC_ACCERR                          23 /* ID for PAC event generator ACCERR */
#define EVENT_ID_GEN_TCC0_OVF                            24 /* ID for TCC0 event generator OVF */
#define EVENT_ID_GEN_TCC0_TRG                            25 /* ID for TCC0 event generator TRG */
#define EVENT_ID_GEN_TCC0_CNT                            26 /* ID for TCC0 event generator CNT */
#define EVENT_ID_GEN_TCC0_MCX_0                          27 /* ID for TCC0 event generator MCX_0 */
#define EVENT_ID_GEN_TCC0_MCX_1                          28 /* ID for TCC0 event generator MCX_1 */
#define EVENT_ID_GEN_TCC0_MCX_2                          29 /* ID for TCC0 event generator MCX_2 */
#define EVENT_ID_GEN_TCC0_MCX_3                          30 /* ID for TCC0 event generator MCX_3 */
#define EVENT_ID_GEN_TCC0_MCX_4                          31 /* ID for TCC0 event generator MCX_4 */
#define EVENT_ID_GEN_TCC0_MCX_5                          32 /* ID for TCC0 event generator MCX_5 */
#define EVENT_ID_GEN_TCC1_OVF                            33 /* ID for TCC1 event generator OVF */
#define EVENT_ID_GEN_TCC1_TRG                            34 /* ID for TCC1 event generator TRG */
#define EVENT_ID_GEN_TCC1_CNT                            35 /* ID for TCC1 event generator CNT */
#define EVENT_ID_GEN_TCC1_MCX_0                          36 /* ID for TCC1 event generator MCX_0 */
#define EVENT_ID_GEN_TCC1_MCX_1                          37 /* ID for TCC1 event generator MCX_1 */
#define EVENT_ID_GEN_TCC1_MCX_2                          38 /* ID for TCC1 event generator MCX_2 */
#define EVENT_ID_GEN_TCC1_MCX_3                          39 /* ID for TCC1 event generator MCX_3 */
#define EVENT_ID_GEN_TCC1_MCX_4                          40 /* ID for TCC1 event generator MCX_4 */
#define EVENT_ID_GEN_TCC1_MCX_5                          41 /* ID for TCC1 event generator MCX_5 */
#define EVENT_ID_GEN_TCC2_OVF                            42 /* ID for TCC2 event generator OVF */
#define EVENT_ID_GEN_TCC2_TRG                            43 /* ID for TCC2 event generator TRG */
#define EVENT_ID_GEN_TCC2_CNT                            44 /* ID for TCC2 event generator CNT */
#define EVENT_ID_GEN_TCC2_MCX_0                          45 /* ID for TCC2 event generator MCX_0 */
#define EVENT_ID_GEN_TCC2_MCX_1                          46 /* ID for TCC2 event generator MCX_1 */
#define EVENT_ID_GEN_TC0_OVF                             47 /* ID for TC0 event generator OVF */
#define EVENT_ID_GEN_TC0_MCX_0                           48 /* ID for TC0 event generator MCX_0 */
#define EVENT_ID_GEN_TC0_MCX_1                           49 /* ID for TC0 event generator MCX_1 */
#define EVENT_ID_GEN_TC1_OVF                             50 /* ID for TC1 event generator OVF */
#define EVENT_ID_GEN_TC1_MCX_0                           51 /* ID for TC1 event generator MCX_0 */
#define EVENT_ID_GEN_TC1_MCX_1                           52 /* ID for TC1 event generator MCX_1 */
#define EVENT_ID_GEN_TC2_OVF                             53 /* ID for TC2 event generator OVF */
#define EVENT_ID_GEN_TC2_MCX_0                           54 /* ID for TC2 event generator MCX_0 */
#define EVENT_ID_GEN_TC2_MCX_1                           55 /* ID for TC2 event generator MCX_1 */
#define EVENT_ID_GEN_TC3_OVF                             56 /* ID for TC3 event generator OVF */
#define EVENT_ID_GEN_TC3_MCX_0                           57 /* ID for TC3 event generator MCX_0 */
#define EVENT_ID_GEN_TC3_MCX_1                           58 /* ID for TC3 event generator MCX_1 */
#define EVENT_ID_GEN_TC4_OVF                             59 /* ID for TC4 event generator OVF */
#define EVENT_ID_GEN_TC4_MCX_0                           60 /* ID for TC4 event generator MCX_0 */
#define EVENT_ID_GEN_TC4_MCX_1                           61 /* ID for TC4 event generator MCX_1 */
#define EVENT_ID_GEN_TC5_OVF                             62 /* ID for TC5 event generator OVF */
#define EVENT_ID_GEN_TC5_MCX_0                           63 /* ID for TC5 event generator MCX_0 */
#define EVENT_ID_GEN_TC5_MCX_1                           64 /* ID for TC5 event generator MCX_1 */
#define EVENT_ID_GEN_TC6_OVF                             65 /* ID for TC6 event generator OVF */
#define EVENT_ID_GEN_TC6_MCX_0                           66 /* ID for TC6 event generator MCX_0 */
#define EVENT_ID_GEN_TC6_MCX_1                           67 /* ID for TC6 event generator MCX_1 */
#define EVENT_ID_GEN_TC7_OVF                             68 /* ID for TC7 event generator OVF */
#define EVENT_ID_GEN_TC7_MCX_0                           69 /* ID for TC7 event generator MCX_0 */
#define EVENT_ID_GEN_TC7_MCX_1                           70 /* ID for TC7 event generator MCX_1 */
#define EVENT_ID_GEN_TC8_OVF                             71 /* ID for TC8 event generator OVF */
#define EVENT_ID_GEN_TC8_MCX_0                           72 /* ID for TC8 event generator MCX_0 */
#define EVENT_ID_GEN_TC8_MCX_1                           73 /* ID for TC8 event generator MCX_1 */
#define EVENT_ID_GEN_TC9_OVF                             74 /* ID for TC9 event generator OVF */
#define EVENT_ID_GEN_TC9_MCX_0                           75 /* ID for TC9 event generator MCX_0 */
#define EVENT_ID_GEN_TC9_MCX_1                           76 /* ID for TC9 event generator MCX_1 */
#define EVENT_ID_GEN_ADCHS_EVENT_0                       77 /* ID for ADCHS event generator EVENT_0 */
#define EVENT_ID_GEN_AC_COMP_0                           80 /* ID for AC event generator COMP_0 */
#define EVENT_ID_GEN_AC_COMP_1                           81 /* ID for AC event generator COMP_1 */
#define EVENT_ID_GEN_AC_WIN                              82 /* ID for AC event generator WIN */
#define EVENT_ID_GEN_CCL_LUTOUT_0                        84 /* ID for CCL event generator LUTOUT_0 */
#define EVENT_ID_GEN_CCL_LUTOUT_1                        85 /* ID for CCL event generator LUTOUT_1 */
#define EVENT_ID_GEN_ZIGBEE_TX_TS_ACTIVE                 86 /* ID for ZIGBEE event generator TX_TS_ACTIVE */
#define EVENT_ID_GEN_ZIGBEE_RX_TS_ACTIVE                 87 /* ID for ZIGBEE event generator RX_TS_ACTIVE */
#define EVENT_ID_GEN_GMAC_TSU_CMP                        88 /* ID for ETH event generator GMAC_TSU_CMP */
#define EVENT_ID_GEN_QEI0                                89 /* ID for QEI event generator QEI0 */

/* ************************************************************************** */
/*                      Event User IDs for C32WM_BZ6204                       */
/* ************************************************************************** */
#define EVENT_ID_USER_RTC_TAMPER                          0 /* ID for RTC event user TAMPER */
#define EVENT_ID_USER_DMAC_CH_0                           1 /* ID for DMAC event user CH_0 */
#define EVENT_ID_USER_DMAC_CH_1                           2 /* ID for DMAC event user CH_1 */
#define EVENT_ID_USER_DMAC_CH_2                           3 /* ID for DMAC event user CH_2 */
#define EVENT_ID_USER_DMAC_CH_3                           4 /* ID for DMAC event user CH_3 */
#define EVENT_ID_USER_DMAC_CH_4                           5 /* ID for DMAC event user CH_4 */
#define EVENT_ID_USER_DMAC_CH_5                           6 /* ID for DMAC event user CH_5 */
#define EVENT_ID_USER_DMAC_CH_6                           7 /* ID for DMAC event user CH_6 */
#define EVENT_ID_USER_DMAC_CH_7                           8 /* ID for DMAC event user CH_7 */
#define EVENT_ID_USER_CM4_TRACE_START                     9 /* ID for CM4 event user TRACE_START */
#define EVENT_ID_USER_CM4_TRACE_STOP                     10 /* ID for CM4 event user TRACE_STOP */
#define EVENT_ID_USER_CM4_TRACE_TRIG                     11 /* ID for CM4 event user TRACE_TRIG */
#define EVENT_ID_USER_TCC0_EV0                           12 /* ID for TCC0 event user EV0 */
#define EVENT_ID_USER_TCC0_EV1                           13 /* ID for TCC0 event user EV1 */
#define EVENT_ID_USER_TCC0_MC0                           14 /* ID for TCC0 event user MC0 */
#define EVENT_ID_USER_TCC0_MC1                           15 /* ID for TCC0 event user MC1 */
#define EVENT_ID_USER_TCC0_MC2                           16 /* ID for TCC0 event user MC2 */
#define EVENT_ID_USER_TCC0_MC3                           17 /* ID for TCC0 event user MC3 */
#define EVENT_ID_USER_TCC0_MC4                           18 /* ID for TCC0 event user MC4 */
#define EVENT_ID_USER_TCC0_MC5                           19 /* ID for TCC0 event user MC5 */
#define EVENT_ID_USER_TCC1_EV0                           20 /* ID for TCC1 event user EV0 */
#define EVENT_ID_USER_TCC1_EV1                           21 /* ID for TCC1 event user EV1 */
#define EVENT_ID_USER_TCC1_MC0                           22 /* ID for TCC1 event user MC0 */
#define EVENT_ID_USER_TCC1_MC1                           23 /* ID for TCC1 event user MC1 */
#define EVENT_ID_USER_TCC1_MC2                           24 /* ID for TCC1 event user MC2 */
#define EVENT_ID_USER_TCC1_MC3                           25 /* ID for TCC1 event user MC3 */
#define EVENT_ID_USER_TCC1_MC4                           26 /* ID for TCC1 event user MC4 */
#define EVENT_ID_USER_TCC1_MC5                           27 /* ID for TCC1 event user MC5 */
#define EVENT_ID_USER_TCC2_EV0                           28 /* ID for TCC2 event user EV0 */
#define EVENT_ID_USER_TCC2_EV1                           29 /* ID for TCC2 event user EV1 */
#define EVENT_ID_USER_TCC2_MC0                           30 /* ID for TCC2 event user MC0 */
#define EVENT_ID_USER_TCC2_MC1                           31 /* ID for TCC2 event user MC1 */
#define EVENT_ID_USER_TC0_EVU                            32 /* ID for TC0 event user EVU */
#define EVENT_ID_USER_TC1_EVU                            33 /* ID for TC1 event user EVU */
#define EVENT_ID_USER_TC2_EVU                            34 /* ID for TC2 event user EVU */
#define EVENT_ID_USER_TC3_EVU                            35 /* ID for TC3 event user EVU */
#define EVENT_ID_USER_TC4_EVU                            36 /* ID for TC4 event user EVU */
#define EVENT_ID_USER_TC5_EVU                            37 /* ID for TC5 event user EVU */
#define EVENT_ID_USER_TC6_EVU                            38 /* ID for TC6 event user EVU */
#define EVENT_ID_USER_TC7_EVU                            39 /* ID for TC7 event user EVU */
#define EVENT_ID_USER_TC8_EVU                            40 /* ID for TC8 event user EVU */
#define EVENT_ID_USER_TC9_EVU                            41 /* ID for TC9 event user EVU */
#define EVENT_ID_USER_ADCHS_TRIG_5                       42 /* ID for ADCHS event user TRIG_5 */
#define EVENT_ID_USER_ADCHS_TRIG_6                       43 /* ID for ADCHS event user TRIG_6 */
#define EVENT_ID_USER_ADCHS_TRIG_7                       44 /* ID for ADCHS event user TRIG_7 */
#define EVENT_ID_USER_ADCHS_TRIG_8                       45 /* ID for ADCHS event user TRIG_8 */
#define EVENT_ID_USER_ADCHS_TRIG_9                       46 /* ID for ADCHS event user TRIG_9 */
#define EVENT_ID_USER_ADCHS_TRIG_10                      47 /* ID for ADCHS event user TRIG_10 */
#define EVENT_ID_USER_ADCHS_TRIG_11                      48 /* ID for ADCHS event user TRIG_11 */
#define EVENT_ID_USER_ADCHS_TRIG_12                      49 /* ID for ADCHS event user TRIG_12 */
#define EVENT_ID_USER_ADCHS_TRIG_13                      50 /* ID for ADCHS event user TRIG_13 */
#define EVENT_ID_USER_ADCHS_TRIG_14                      51 /* ID for ADCHS event user TRIG_14 */
#define EVENT_ID_USER_ADCHS_TRIG_15                      52 /* ID for ADCHS event user TRIG_15 */
#define EVENT_ID_USER_ADCHS_TRIG_16                      53 /* ID for ADCHS event user TRIG_16 */
#define EVENT_ID_USER_AC_SOC_0                           54 /* ID for AC event user SOC_0 */
#define EVENT_ID_USER_AC_SOC_1                           55 /* ID for AC event user SOC_1 */
#define EVENT_ID_USER_CCL_LUTIN_0                        56 /* ID for CCL event user LUTIN_0 */
#define EVENT_ID_USER_CCL_LUTIN_1                        57 /* ID for CCL event user LUTIN_1 */
#define EVENT_ID_USER_CVD_TRIGGER                        58 /* ID for CVD event user TRIGGER */

#ifdef __cplusplus
}
#endif

#endif /* _PIC32WM_BZ6204_H_ */

