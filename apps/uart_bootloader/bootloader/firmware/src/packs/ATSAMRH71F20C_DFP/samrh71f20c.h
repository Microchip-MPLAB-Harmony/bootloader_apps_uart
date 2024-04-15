/*
 * Header file for ATSAMRH71F20C
 *
 * Copyright (c) 2022 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* File generated from device description version 2022-01-06T10:24:17Z */
#ifndef _SAMRH71F20C_H_
#define _SAMRH71F20C_H_

/* Header version uses Semantic Versioning 2.0.0 (https://semver.org/) */
#define HEADER_FORMAT_VERSION "2.1.0"

#define HEADER_FORMAT_VERSION_MAJOR (2)
#define HEADER_FORMAT_VERSION_MINOR (1)
#define HEADER_FORMAT_VERSION_PATCH (0)

/* SAMRH71F20C definitions
  This file defines all structures and symbols for SAMRH71F20C:
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
/* CMSIS DEFINITIONS FOR SAMRH71F20C                                        */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* Interrupt Number Definition */
typedef enum IRQn
{
/******  CORTEX-M7 Processor Exceptions Numbers ******************************/
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

/******  SAMRH71F20C specific Interrupt Numbers ***********************************/
  SUPC_IRQn                 =   0, /* 0   Supply Controller (SUPC)            */
  RSTC_IRQn                 =   1, /* 1   Reset Controller (RSTC)             */
  RTC_IRQn                  =   2, /* 2   Real-time Clock (RTC)               */
  RTT_IRQn                  =   3, /* 3   Real-time Timer (RTT)               */
  WDT_IRQn                  =   4, /* 4   Watchdog Timer (WDT)                */
  PMC_IRQn                  =   5, /* 5   Power Management Controller (PMC)   */
  MATRIX0_IRQn              =   6, /* 6   AHB Bus Matrix (MATRIX0)            */
  FLEXCOM0_IRQn             =   7, /* 7   Flexible Serial Communication (FLEXCOM0) */
  FLEXCOM1_IRQn             =   8, /* 8   Flexible Serial Communication (FLEXCOM1) */
  NMIC_IRQn                 =   9, /* 9   Non-maskable Interrupt Controller (NMIC) */
  PIOA_IRQn                 =  10, /* 10  Parallel Input/Output Controller (PIOA) */
  PIOB_IRQn                 =  11, /* 11  Parallel Input/Output Controller (PIOB) */
  PIOC_IRQn                 =  12, /* 12  Parallel Input/Output Controller (PIOC) */
  FLEXCOM2_IRQn             =  13, /* 13  Flexible Serial Communication (FLEXCOM2) */
  FLEXCOM3_IRQn             =  14, /* 14  Flexible Serial Communication (FLEXCOM3) */
  FLEXCOM4_IRQn             =  15, /* 15  Flexible Serial Communication (FLEXCOM4) */
  PIOD_IRQn                 =  16, /* 16  Parallel Input/Output Controller (PIOD) */
  PIOE_IRQn                 =  17, /* 17  Parallel Input/Output Controller (PIOE) */
  CCW_IRQn                  =  18, /* 18  System Control Block (SCB)          */
  CCF_IRQn                  =  19, /* 19  System Control Block (SCB)          */
  FPU_IRQn                  =  20, /* 20  Floating Point Unit (FPU)           */
  IXC_IRQn                  =  21, /* 21  Floating Point Unit (FPU)           */
  FLEXCOM5_IRQn             =  22, /* 22  Flexible Serial Communication (FLEXCOM5) */
  FLEXCOM6_IRQn             =  23, /* 23  Flexible Serial Communication (FLEXCOM6) */
  FLEXCOM7_IRQn             =  24, /* 24  Flexible Serial Communication (FLEXCOM7) */
  TC0_CH0_IRQn              =  25, /* 25  Timer/Counter 0 Channel 0 (TC0)     */
  TC0_CH1_IRQn              =  26, /* 26  Timer/Counter 0 Channel 1 (TC0)     */
  TC0_CH2_IRQn              =  27, /* 27  Timer/Counter 0 Channel 2 (TC0)     */
  TC1_CH0_IRQn              =  28, /* 28  Timer/Counter 1 Channel 0 (TC1)     */
  TC1_CH1_IRQn              =  29, /* 29  Timer/Counter 1 Channel 1 (TC1)     */
  TC1_CH2_IRQn              =  30, /* 30  Timer/Counter 1 Channel 2 (TC1)     */
  PWM0_IRQn                 =  31, /* 31  Pulse Width Modulation Controller (PWM0) */
  PWM1_IRQn                 =  32, /* 32  Pulse Width Modulation Controller (PWM1) */
  ICM_IRQn                  =  33, /* 33  Integrity Check Monitor (ICM)       */
  PIOF_IRQn                 =  34, /* 34  Parallel Input/Output Controller (PIOF) */
  PIOG_IRQn                 =  35, /* 35  Parallel Input/Output Controller (PIOG) */
  MCAN0_INT0_IRQn           =  36, /* 36  Controller Area Network (MCAN0)     */
  MCAN0_INT1_IRQn           =  37, /* 37  Controller Area Network (MCAN0)     */
  MCAN1_INT0_IRQn           =  38, /* 38  Controller Area Network (MCAN1)     */
  MCAN1_INT1_IRQn           =  39, /* 39  Controller Area Network (MCAN1)     */
  TCMECC_INTFIX_IRQn        =  40, /* 40  HECC (TCMECC)                       */
  TCMECC_INTNOFIX_IRQn      =  41, /* 41  HECC (TCMECC)                       */
  FLEXRAMECC_INTFIX_IRQn    =  42, /* 42  FLEXRAMECC (FLEXRAMECC)             */
  FLEXRAMECC_INTNOFIX_IRQn  =  43, /* 43  FLEXRAMECC (FLEXRAMECC)             */
  SHA_IRQn                  =  44, /* 44  Secure Hash Algorithm (SHA)         */
  FLEXCOM8_IRQn             =  45, /* 45  Flexible Serial Communication (FLEXCOM8) */
  FLEXCOM9_IRQn             =  46, /* 46  Flexible Serial Communication (FLEXCOM9) */
  RSWDT_IRQn                =  47, /* 47  Reinforced Safety Watchdog Timer (RSWDT) */
  QSPI_IRQn                 =  49, /* 49  Quad Serial Peripheral Interface (QSPI) */
  HEFC_INT0_IRQn            =  50, /* 50  Harden Embedded Flash Controller (HEFC) */
  HEFC_INTFIX_IRQn          =  51, /* 51  Harden Embedded Flash Controller (HEFC) */
  HEFC_INTNOFIX_IRQn        =  52, /* 52  Harden Embedded Flash Controller (HEFC) */
  TC2_CH0_IRQn              =  53, /* 53  Timer/Counter 2 Channel 0 (TC2)     */
  TC2_CH1_IRQn              =  54, /* 54  Timer/Counter 2 Channel 1 (TC2)     */
  TC2_CH2_IRQn              =  55, /* 55  Timer/Counter 2 Channel 2 (TC2)     */
  TC3_CH0_IRQn              =  56, /* 56  Timer/Counter 3 Channel 0 (TC3)     */
  TC3_CH1_IRQn              =  57, /* 57  Timer/Counter 3 Channel 1 (TC3)     */
  TC3_CH2_IRQn              =  58, /* 58  Timer/Counter 3 Channel 2 (TC3)     */
  HEMC_INTSDRAMC_IRQn       =  59, /* 59  HEMC (HEMC)                         */
  HEMC_INTFIX_IRQn          =  60, /* 60  HEMC (HEMC)                         */
  HEMC_INTNOFIX_IRQn        =  61, /* 61  HEMC (HEMC)                         */
  SFR_IRQn                  =  62, /* 62  Special Function Registers (SFR)    */
  TRNG_IRQn                 =  63, /* 63  True Random Number Generator (TRNG) */
  XDMAC_IRQn                =  64, /* 64  Extensible DMA Controller (XDMAC)   */
  SPW_IRQn                  =  65, /* 65  SpW (SPW)                           */
  IP1553_IRQn               =  68, /* 68  IP 1553 (IP1553)                    */
  GMAC_IRQn                 =  69, /* 69  Gigabit Ethernet MAC (GMAC)         */
  GMAC_Q1_IRQn              =  70, /* 70  Gigabit Ethernet MAC (GMAC)         */
  GMAC_Q2_IRQn              =  71, /* 71  Gigabit Ethernet MAC (GMAC)         */
  GMAC_Q3_IRQn              =  72, /* 72  Gigabit Ethernet MAC (GMAC)         */
  GMAC_Q4_IRQn              =  73, /* 73  Gigabit Ethernet MAC (GMAC)         */
  GMAC_Q5_IRQn              =  74, /* 74  Gigabit Ethernet MAC (GMAC)         */

  PERIPH_MAX_IRQn           =  74  /* Max peripheral ID */
} IRQn_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct _DeviceVectors
{
  /* Stack pointer */
  void* pvStack;
  /* CORTEX-M7 handlers */
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
  void* pfnSUPC_Handler;                         /*   0 Supply Controller (SUPC) */
  void* pfnRSTC_Handler;                         /*   1 Reset Controller (RSTC) */
  void* pfnRTC_Handler;                          /*   2 Real-time Clock (RTC) */
  void* pfnRTT_Handler;                          /*   3 Real-time Timer (RTT) */
  void* pfnWDT_Handler;                          /*   4 Watchdog Timer (WDT) */
  void* pfnPMC_Handler;                          /*   5 Power Management Controller (PMC) */
  void* pfnMATRIX0_Handler;                      /*   6 AHB Bus Matrix (MATRIX0) */
  void* pfnFLEXCOM0_Handler;                     /*   7 Flexible Serial Communication (FLEXCOM0) */
  void* pfnFLEXCOM1_Handler;                     /*   8 Flexible Serial Communication (FLEXCOM1) */
  void* pfnNMIC_Handler;                         /*   9 Non-maskable Interrupt Controller (NMIC) */
  void* pfnPIOA_Handler;                         /*  10 Parallel Input/Output Controller (PIOA) */
  void* pfnPIOB_Handler;                         /*  11 Parallel Input/Output Controller (PIOB) */
  void* pfnPIOC_Handler;                         /*  12 Parallel Input/Output Controller (PIOC) */
  void* pfnFLEXCOM2_Handler;                     /*  13 Flexible Serial Communication (FLEXCOM2) */
  void* pfnFLEXCOM3_Handler;                     /*  14 Flexible Serial Communication (FLEXCOM3) */
  void* pfnFLEXCOM4_Handler;                     /*  15 Flexible Serial Communication (FLEXCOM4) */
  void* pfnPIOD_Handler;                         /*  16 Parallel Input/Output Controller (PIOD) */
  void* pfnPIOE_Handler;                         /*  17 Parallel Input/Output Controller (PIOE) */
  void* pfnCCW_Handler;                          /*  18 System Control Block (SCB) */
  void* pfnCCF_Handler;                          /*  19 System Control Block (SCB) */
  void* pfnFPU_Handler;                          /*  20 Floating Point Unit (FPU) */
  void* pfnIXC_Handler;                          /*  21 Floating Point Unit (FPU) */
  void* pfnFLEXCOM5_Handler;                     /*  22 Flexible Serial Communication (FLEXCOM5) */
  void* pfnFLEXCOM6_Handler;                     /*  23 Flexible Serial Communication (FLEXCOM6) */
  void* pfnFLEXCOM7_Handler;                     /*  24 Flexible Serial Communication (FLEXCOM7) */
  void* pfnTC0_CH0_Handler;                      /*  25 Timer/Counter 0 Channel 0 (TC0) */
  void* pfnTC0_CH1_Handler;                      /*  26 Timer/Counter 0 Channel 1 (TC0) */
  void* pfnTC0_CH2_Handler;                      /*  27 Timer/Counter 0 Channel 2 (TC0) */
  void* pfnTC1_CH0_Handler;                      /*  28 Timer/Counter 1 Channel 0 (TC1) */
  void* pfnTC1_CH1_Handler;                      /*  29 Timer/Counter 1 Channel 1 (TC1) */
  void* pfnTC1_CH2_Handler;                      /*  30 Timer/Counter 1 Channel 2 (TC1) */
  void* pfnPWM0_Handler;                         /*  31 Pulse Width Modulation Controller (PWM0) */
  void* pfnPWM1_Handler;                         /*  32 Pulse Width Modulation Controller (PWM1) */
  void* pfnICM_Handler;                          /*  33 Integrity Check Monitor (ICM) */
  void* pfnPIOF_Handler;                         /*  34 Parallel Input/Output Controller (PIOF) */
  void* pfnPIOG_Handler;                         /*  35 Parallel Input/Output Controller (PIOG) */
  void* pfnMCAN0_INT0_Handler;                   /*  36 Controller Area Network (MCAN0) */
  void* pfnMCAN0_INT1_Handler;                   /*  37 Controller Area Network (MCAN0) */
  void* pfnMCAN1_INT0_Handler;                   /*  38 Controller Area Network (MCAN1) */
  void* pfnMCAN1_INT1_Handler;                   /*  39 Controller Area Network (MCAN1) */
  void* pfnTCMECC_INTFIX_Handler;                /*  40 HECC (TCMECC) */
  void* pfnTCMECC_INTNOFIX_Handler;              /*  41 HECC (TCMECC) */
  void* pfnFLEXRAMECC_INTFIX_Handler;            /*  42 FLEXRAMECC (FLEXRAMECC) */
  void* pfnFLEXRAMECC_INTNOFIX_Handler;          /*  43 FLEXRAMECC (FLEXRAMECC) */
  void* pfnSHA_Handler;                          /*  44 Secure Hash Algorithm (SHA) */
  void* pfnFLEXCOM8_Handler;                     /*  45 Flexible Serial Communication (FLEXCOM8) */
  void* pfnFLEXCOM9_Handler;                     /*  46 Flexible Serial Communication (FLEXCOM9) */
  void* pfnRSWDT_Handler;                        /*  47 Reinforced Safety Watchdog Timer (RSWDT) */
  void* pvReserved48;
  void* pfnQSPI_Handler;                         /*  49 Quad Serial Peripheral Interface (QSPI) */
  void* pfnHEFC_INT0_Handler;                    /*  50 Harden Embedded Flash Controller (HEFC) */
  void* pfnHEFC_INTFIX_Handler;                  /*  51 Harden Embedded Flash Controller (HEFC) */
  void* pfnHEFC_INTNOFIX_Handler;                /*  52 Harden Embedded Flash Controller (HEFC) */
  void* pfnTC2_CH0_Handler;                      /*  53 Timer/Counter 2 Channel 0 (TC2) */
  void* pfnTC2_CH1_Handler;                      /*  54 Timer/Counter 2 Channel 1 (TC2) */
  void* pfnTC2_CH2_Handler;                      /*  55 Timer/Counter 2 Channel 2 (TC2) */
  void* pfnTC3_CH0_Handler;                      /*  56 Timer/Counter 3 Channel 0 (TC3) */
  void* pfnTC3_CH1_Handler;                      /*  57 Timer/Counter 3 Channel 1 (TC3) */
  void* pfnTC3_CH2_Handler;                      /*  58 Timer/Counter 3 Channel 2 (TC3) */
  void* pfnHEMC_INTSDRAMC_Handler;               /*  59 HEMC (HEMC) */
  void* pfnHEMC_INTFIX_Handler;                  /*  60 HEMC (HEMC) */
  void* pfnHEMC_INTNOFIX_Handler;                /*  61 HEMC (HEMC) */
  void* pfnSFR_Handler;                          /*  62 Special Function Registers (SFR) */
  void* pfnTRNG_Handler;                         /*  63 True Random Number Generator (TRNG) */
  void* pfnXDMAC_Handler;                        /*  64 Extensible DMA Controller (XDMAC) */
  void* pfnSPW_Handler;                          /*  65 SpW (SPW) */
  void* pvReserved66;
  void* pvReserved67;
  void* pfnIP1553_Handler;                       /*  68 IP 1553 (IP1553) */
  void* pfnGMAC_Handler;                         /*  69 Gigabit Ethernet MAC (GMAC) */
  void* pfnGMAC_Q1_Handler;                      /*  70 Gigabit Ethernet MAC (GMAC) */
  void* pfnGMAC_Q2_Handler;                      /*  71 Gigabit Ethernet MAC (GMAC) */
  void* pfnGMAC_Q3_Handler;                      /*  72 Gigabit Ethernet MAC (GMAC) */
  void* pfnGMAC_Q4_Handler;                      /*  73 Gigabit Ethernet MAC (GMAC) */
  void* pfnGMAC_Q5_Handler;                      /*  74 Gigabit Ethernet MAC (GMAC) */
} DeviceVectors;

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if !defined DONT_USE_PREDEFINED_CORE_HANDLERS
/* CORTEX-M7 exception handlers */
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
void SUPC_Handler                  ( void );
void RSTC_Handler                  ( void );
void RTC_Handler                   ( void );
void RTT_Handler                   ( void );
void WDT_Handler                   ( void );
void PMC_Handler                   ( void );
void MATRIX0_Handler               ( void );
void FLEXCOM0_Handler              ( void );
void FLEXCOM1_Handler              ( void );
void NMIC_Handler                  ( void );
void PIOA_Handler                  ( void );
void PIOB_Handler                  ( void );
void PIOC_Handler                  ( void );
void FLEXCOM2_Handler              ( void );
void FLEXCOM3_Handler              ( void );
void FLEXCOM4_Handler              ( void );
void PIOD_Handler                  ( void );
void PIOE_Handler                  ( void );
void CCW_Handler                   ( void );
void CCF_Handler                   ( void );
void FPU_Handler                   ( void );
void IXC_Handler                   ( void );
void FLEXCOM5_Handler              ( void );
void FLEXCOM6_Handler              ( void );
void FLEXCOM7_Handler              ( void );
void TC0_CH0_Handler               ( void );
void TC0_CH1_Handler               ( void );
void TC0_CH2_Handler               ( void );
void TC1_CH0_Handler               ( void );
void TC1_CH1_Handler               ( void );
void TC1_CH2_Handler               ( void );
void PWM0_Handler                  ( void );
void PWM1_Handler                  ( void );
void ICM_Handler                   ( void );
void PIOF_Handler                  ( void );
void PIOG_Handler                  ( void );
void MCAN0_INT0_Handler            ( void );
void MCAN0_INT1_Handler            ( void );
void MCAN1_INT0_Handler            ( void );
void MCAN1_INT1_Handler            ( void );
void TCMECC_INTFIX_Handler         ( void );
void TCMECC_INTNOFIX_Handler       ( void );
void FLEXRAMECC_INTFIX_Handler     ( void );
void FLEXRAMECC_INTNOFIX_Handler   ( void );
void SHA_Handler                   ( void );
void FLEXCOM8_Handler              ( void );
void FLEXCOM9_Handler              ( void );
void RSWDT_Handler                 ( void );
void QSPI_Handler                  ( void );
void HEFC_INT0_Handler             ( void );
void HEFC_INTFIX_Handler           ( void );
void HEFC_INTNOFIX_Handler         ( void );
void TC2_CH0_Handler               ( void );
void TC2_CH1_Handler               ( void );
void TC2_CH2_Handler               ( void );
void TC3_CH0_Handler               ( void );
void TC3_CH1_Handler               ( void );
void TC3_CH2_Handler               ( void );
void HEMC_INTSDRAMC_Handler        ( void );
void HEMC_INTFIX_Handler           ( void );
void HEMC_INTNOFIX_Handler         ( void );
void SFR_Handler                   ( void );
void TRNG_Handler                  ( void );
void XDMAC_Handler                 ( void );
void SPW_Handler                   ( void );
void IP1553_Handler                ( void );
void GMAC_Handler                  ( void );
void GMAC_Q1_Handler               ( void );
void GMAC_Q2_Handler               ( void );
void GMAC_Q3_Handler               ( void );
void GMAC_Q4_Handler               ( void );
void GMAC_Q5_Handler               ( void );
#endif /* DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* Configuration of the CORTEX-M7 Processor and Core Peripherals */
#define __CM7_REV                     0x0101 /* CM7 Core Revision                                                         */
#define __NVIC_PRIO_BITS                   3 /* Number of Bits used for Priority Levels                                   */
#define __Vendor_SysTickConfig             0 /* Set to 1 if different SysTick Config is used                              */
#define __MPU_PRESENT                      1 /* MPU present or not                                                        */
#define __VTOR_PRESENT                     1 /* Vector Table Offset Register present or not                               */
#define __FPU_PRESENT                      1 /* FPU present or not                                                        */
#define __FPU_DP                           1 /* Double Precision FPU                                                      */
#define __ICACHE_PRESENT                   1 /* Instruction Cache present                                                 */
#define __DCACHE_PRESENT                   1 /* Data Cache present                                                        */
#define __ITCM_PRESENT                     1 /* Instruction TCM present                                                   */
#define __DTCM_PRESENT                     1 /* Data TCM present                                                          */
#define __DEBUG_LVL                        1
#define __TRACE_LVL                        1
#define __ARCH_ARM                         1
#define __ARCH_ARM_CORTEX_M                1

/* CMSIS includes */
#include "core_cm7.h"
#if defined USE_CMSIS_INIT
#include "system_samrh71.h"
#endif /* USE_CMSIS_INIT */

/* ************************************************************************** */
/*   SOFTWARE PERIPHERAL API DEFINITION FOR SAMRH71F20C                       */
/* ************************************************************************** */
#include "component/chipid.h"
#include "component/flexcom.h"
#include "component/flexramecc.h"
#include "component/fuses.h"
#include "component/gmac.h"
#include "component/hefc.h"
#include "component/hemc.h"
#include "component/hsdramc.h"
#include "component/hsmc.h"
#include "component/icm.h"
#include "component/ip1553.h"
#include "component/matrix.h"
#include "component/mcan.h"
#include "component/nmic.h"
#include "component/pio.h"
#include "component/pmc.h"
#include "component/pwm.h"
#include "component/qspi.h"
#include "component/rstc.h"
#include "component/rswdt.h"
#include "component/rtc.h"
#include "component/rtt.h"
#include "component/sfr.h"
#include "component/sha.h"
#include "component/spw.h"
#include "component/supc.h"
#include "component/tc.h"
#include "component/tcmecc.h"
#include "component/trng.h"
#include "component/wdt.h"
#include "component/xdmac.h"

/* ************************************************************************** */
/*   INSTANCE DEFINITIONS FOR SAMRH71F20C */
/* ************************************************************************** */
#include "instance/chipid.h"
#include "instance/flexcom0.h"
#include "instance/flexcom1.h"
#include "instance/flexcom2.h"
#include "instance/flexcom3.h"
#include "instance/flexcom4.h"
#include "instance/flexcom5.h"
#include "instance/flexcom6.h"
#include "instance/flexcom7.h"
#include "instance/flexcom8.h"
#include "instance/flexcom9.h"
#include "instance/flexramecc.h"
#include "instance/fuses.h"
#include "instance/gmac.h"
#include "instance/hefc.h"
#include "instance/hemc.h"
#include "instance/hsdramc.h"
#include "instance/hsmc.h"
#include "instance/icm.h"
#include "instance/ip1553.h"
#include "instance/matrix0.h"
#include "instance/mcan0.h"
#include "instance/mcan1.h"
#include "instance/nmic.h"
#include "instance/pio.h"
#include "instance/pmc.h"
#include "instance/pwm0.h"
#include "instance/pwm1.h"
#include "instance/qspi.h"
#include "instance/rstc.h"
#include "instance/rswdt.h"
#include "instance/rtc.h"
#include "instance/rtt.h"
#include "instance/sfr.h"
#include "instance/sha.h"
#include "instance/spw.h"
#include "instance/supc.h"
#include "instance/tc0.h"
#include "instance/tc1.h"
#include "instance/tc2.h"
#include "instance/tc3.h"
#include "instance/tcmecc.h"
#include "instance/trng.h"
#include "instance/wdt.h"
#include "instance/xdmac.h"

/* ************************************************************************** */
/*  PERIPHERAL ID DEFINITIONS FOR SAMRH71F20C                                 */
/* ************************************************************************** */
#define ID_SUPC          (  0) /* Supply Controller (SUPC) */
#define ID_RSTC          (  1) /* Reset Controller (RSTC) */
#define ID_RTC           (  2) /* Real-time Clock (RTC) */
#define ID_RTT           (  3) /* Real-time Timer (RTT) */
#define ID_WDT           (  4) /* Watchdog Timer (WDT) */
#define ID_PMC           (  5) /* Power Management Controller (PMC) */
#define ID_MATRIX0       (  6) /* AHB Bus Matrix (MATRIX0) */
#define ID_FLEXCOM0      (  7) /* Flexible Serial Communication (FLEXCOM0) */
#define ID_FLEXCOM1      (  8) /* Flexible Serial Communication (FLEXCOM1) */
#define ID_NMIC          (  9) /* Non-maskable Interrupt Controller (NMIC) */
#define ID_PIOA          ( 10) /* Parallel Input/Output Controller (PIOA) */
#define ID_PIOB          ( 11) /* Parallel Input/Output Controller (PIOB) */
#define ID_PIOC          ( 12) /* Parallel Input/Output Controller (PIOC) */
#define ID_FLEXCOM2      ( 13) /* Flexible Serial Communication (FLEXCOM2) */
#define ID_FLEXCOM3      ( 14) /* Flexible Serial Communication (FLEXCOM3) */
#define ID_FLEXCOM4      ( 15) /* Flexible Serial Communication (FLEXCOM4) */
#define ID_PIOD          ( 16) /* Parallel Input/Output Controller (PIOD) */
#define ID_PIOE          ( 17) /* Parallel Input/Output Controller (PIOE) */
#define ID_FLEXCOM5      ( 22) /* Flexible Serial Communication (FLEXCOM5) */
#define ID_FLEXCOM6      ( 23) /* Flexible Serial Communication (FLEXCOM6) */
#define ID_FLEXCOM7      ( 24) /* Flexible Serial Communication (FLEXCOM7) */
#define ID_TC0_CHANNEL0  ( 25) /* Timer Counter (TC0_CHANNEL0) */
#define ID_TC0_CHANNEL1  ( 26) /* Timer Counter (TC0_CHANNEL1) */
#define ID_TC0_CHANNEL2  ( 27) /* Timer Counter (TC0_CHANNEL2) */
#define ID_TC1_CHANNEL0  ( 28) /* Timer Counter (TC1_CHANNEL0) */
#define ID_TC1_CHANNEL1  ( 29) /* Timer Counter (TC1_CHANNEL1) */
#define ID_TC1_CHANNEL2  ( 30) /* Timer Counter (TC1_CHANNEL2) */
#define ID_PWM0          ( 31) /* Pulse Width Modulation Controller (PWM0) */
#define ID_PWM1          ( 32) /* Pulse Width Modulation Controller (PWM1) */
#define ID_ICM           ( 33) /* Integrity Check Monitor (ICM) */
#define ID_PIOF          ( 34) /* Parallel Input/Output Controller (PIOF) */
#define ID_PIOG          ( 35) /* Parallel Input/Output Controller (PIOG) */
#define ID_MCAN0         ( 36) /* Controller Area Network (MCAN0) */
#define ID_MCAN1         ( 38) /* Controller Area Network (MCAN1) */
#define ID_SHA           ( 44) /* Secure Hash Algorithm (SHA) */
#define ID_FLEXCOM8      ( 45) /* Flexible Serial Communication (FLEXCOM8) */
#define ID_FLEXCOM9      ( 46) /* Flexible Serial Communication (FLEXCOM9) */
#define ID_RSWDT         ( 47) /* Reinforced Safety Watchdog Timer (RSWDT) */
#define ID_QSPI          ( 49) /* Quad Serial Peripheral Interface (QSPI) */
#define ID_HEFC          ( 50) /* Harden Embedded Flash Controller (HEFC) */
#define ID_TC2_CHANNEL0  ( 53) /* Timer Counter (TC2_CHANNEL0) */
#define ID_TC2_CHANNEL1  ( 54) /* Timer Counter (TC2_CHANNEL1) */
#define ID_TC2_CHANNEL2  ( 55) /* Timer Counter (TC2_CHANNEL2) */
#define ID_TC3_CHANNEL0  ( 56) /* Timer Counter (TC3_CHANNEL0) */
#define ID_TC3_CHANNEL1  ( 57) /* Timer Counter (TC3_CHANNEL1) */
#define ID_TC3_CHANNEL2  ( 58) /* Timer Counter (TC3_CHANNEL2) */
#define ID_TRNG          ( 63) /* True Random Number Generator (TRNG) */
#define ID_XDMAC         ( 64) /* Extensible DMA Controller (XDMAC) */
#define ID_SPW_SPW       ( 65) /* SpW (SPW_SPW) */
#define ID_SPW_SPW_TIMETICK ( 66) /* SpW (SPW_SPW_TIMETICK) */
#define ID_IP1553        ( 68) /* IP 1553 (IP1553) */
#define ID_GMAC          ( 69) /* Gigabit Ethernet MAC (GMAC) */

#define ID_PERIPH_MAX    ( 69) /* Number of peripheral IDs */

/* ************************************************************************** */
/*   REGISTER STRUCTURE ADDRESS DEFINITIONS FOR SAMRH71F20C                   */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define CHIPID_REGS                      ((chipid_registers_t*)0x40100000)             /* CHIPID Registers Address     */
#define FLEXCOM0_REGS                    ((flexcom_registers_t*)0x40010000)            /* FLEXCOM0 Registers Address   */
#define FLEXCOM1_REGS                    ((flexcom_registers_t*)0x40014000)            /* FLEXCOM1 Registers Address   */
#define FLEXCOM2_REGS                    ((flexcom_registers_t*)0x40018000)            /* FLEXCOM2 Registers Address   */
#define FLEXCOM3_REGS                    ((flexcom_registers_t*)0x4001c000)            /* FLEXCOM3 Registers Address   */
#define FLEXCOM4_REGS                    ((flexcom_registers_t*)0x40020000)            /* FLEXCOM4 Registers Address   */
#define FLEXCOM5_REGS                    ((flexcom_registers_t*)0x40024000)            /* FLEXCOM5 Registers Address   */
#define FLEXCOM6_REGS                    ((flexcom_registers_t*)0x40028000)            /* FLEXCOM6 Registers Address   */
#define FLEXCOM7_REGS                    ((flexcom_registers_t*)0x4002c000)            /* FLEXCOM7 Registers Address   */
#define FLEXCOM8_REGS                    ((flexcom_registers_t*)0x40030000)            /* FLEXCOM8 Registers Address   */
#define FLEXCOM9_REGS                    ((flexcom_registers_t*)0x40034000)            /* FLEXCOM9 Registers Address   */
#define FLEXRAMECC_REGS                  ((flexramecc_registers_t*)0x40100600)         /* FLEXRAMECC Registers Address */
#define GMAC_REGS                        ((gmac_registers_t*)0x4009c000)               /* GMAC Registers Address       */
#define HEFC_REGS                        ((hefc_registers_t*)0x40004000)               /* HEFC Registers Address       */
#define HEMC_REGS                        ((hemc_registers_t*)0x40080000)               /* HEMC Registers Address       */
#define HSDRAMC_REGS                     ((hsdramc_registers_t*)0x40082000)            /* HSDRAMC Registers Address    */
#define HSMC_REGS                        ((hsmc_registers_t*)0x40081000)               /* HSMC Registers Address       */
#define ICM_REGS                         ((icm_registers_t*)0x4008c000)                /* ICM Registers Address        */
#define IP1553_REGS                      ((ip1553_registers_t*)0x4003c000)             /* IP1553 Registers Address     */
#define MATRIX0_REGS                     ((matrix_registers_t*)0x40000000)             /* MATRIX0 Registers Address    */
#define MCAN0_REGS                       ((mcan_registers_t*)0x40058000)               /* MCAN0 Registers Address      */
#define MCAN1_REGS                       ((mcan_registers_t*)0x4005c000)               /* MCAN1 Registers Address      */
#define NMIC_REGS                        ((nmic_registers_t*)0x400a8000)               /* NMIC Registers Address       */
#define PIO_REGS                         ((pio_registers_t*)0x40008000)                /* PIO Registers Address        */
#define PMC_REGS                         ((pmc_registers_t*)0x4000c000)                /* PMC Registers Address        */
#define PWM0_REGS                        ((pwm_registers_t*)0x40068000)                /* PWM0 Registers Address       */
#define PWM1_REGS                        ((pwm_registers_t*)0x4006c000)                /* PWM1 Registers Address       */
#define QSPI_REGS                        ((qspi_registers_t*)0x40038000)               /* QSPI Registers Address       */
#define RSTC_REGS                        ((rstc_registers_t*)0x40100200)               /* RSTC Registers Address       */
#define RSWDT_REGS                       ((rswdt_registers_t*)0x40100300)              /* RSWDT Registers Address      */
#define RTC_REGS                         ((rtc_registers_t*)0x40100260)                /* RTC Registers Address        */
#define RTT_REGS                         ((rtt_registers_t*)0x40100230)                /* RTT Registers Address        */
#define SFR_REGS                         ((sfr_registers_t*)0x400a0000)                /* SFR Registers Address        */
#define SHA_REGS                         ((sha_registers_t*)0x40094000)                /* SHA Registers Address        */
#define SPW_REGS                         ((spw_registers_t*)0x40040000)                /* SPW Registers Address        */
#define SUPC_REGS                        ((supc_registers_t*)0x40100210)               /* SUPC Registers Address       */
#define TC0_REGS                         ((tc_registers_t*)0x40070000)                 /* TC0 Registers Address        */
#define TC1_REGS                         ((tc_registers_t*)0x40074000)                 /* TC1 Registers Address        */
#define TC2_REGS                         ((tc_registers_t*)0x40078000)                 /* TC2 Registers Address        */
#define TC3_REGS                         ((tc_registers_t*)0x4007c000)                 /* TC3 Registers Address        */
#define TCMECC_REGS                      ((tcmecc_registers_t*)0x40100400)             /* TCMECC Registers Address     */
#define TRNG_REGS                        ((trng_registers_t*)0x40090000)               /* TRNG Registers Address       */
#define WDT_REGS                         ((wdt_registers_t*)0x40100250)                /* WDT Registers Address        */
#define XDMAC_REGS                       ((xdmac_registers_t*)0x40098000)              /* XDMAC Registers Address      */
#define GPNVMBITS_REGS                   ((fuses_gpnvmbits_registers_t*)0x00000000)    /* FUSES Registers Address      */
#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ************************************************************************** */
/*   BASE ADDRESS DEFINITIONS FOR SAMRH71F20C                                 */
/* ************************************************************************** */
#define CHIPID_BASE_ADDRESS              _UINT32_(0x40100000)                          /* CHIPID Base Address */
#define FLEXCOM0_BASE_ADDRESS            _UINT32_(0x40010000)                          /* FLEXCOM0 Base Address */
#define FLEXCOM1_BASE_ADDRESS            _UINT32_(0x40014000)                          /* FLEXCOM1 Base Address */
#define FLEXCOM2_BASE_ADDRESS            _UINT32_(0x40018000)                          /* FLEXCOM2 Base Address */
#define FLEXCOM3_BASE_ADDRESS            _UINT32_(0x4001c000)                          /* FLEXCOM3 Base Address */
#define FLEXCOM4_BASE_ADDRESS            _UINT32_(0x40020000)                          /* FLEXCOM4 Base Address */
#define FLEXCOM5_BASE_ADDRESS            _UINT32_(0x40024000)                          /* FLEXCOM5 Base Address */
#define FLEXCOM6_BASE_ADDRESS            _UINT32_(0x40028000)                          /* FLEXCOM6 Base Address */
#define FLEXCOM7_BASE_ADDRESS            _UINT32_(0x4002c000)                          /* FLEXCOM7 Base Address */
#define FLEXCOM8_BASE_ADDRESS            _UINT32_(0x40030000)                          /* FLEXCOM8 Base Address */
#define FLEXCOM9_BASE_ADDRESS            _UINT32_(0x40034000)                          /* FLEXCOM9 Base Address */
#define FLEXRAMECC_BASE_ADDRESS          _UINT32_(0x40100600)                          /* FLEXRAMECC Base Address */
#define GMAC_BASE_ADDRESS                _UINT32_(0x4009c000)                          /* GMAC Base Address */
#define HEFC_BASE_ADDRESS                _UINT32_(0x40004000)                          /* HEFC Base Address */
#define HEMC_BASE_ADDRESS                _UINT32_(0x40080000)                          /* HEMC Base Address */
#define HSDRAMC_BASE_ADDRESS             _UINT32_(0x40082000)                          /* HSDRAMC Base Address */
#define HSMC_BASE_ADDRESS                _UINT32_(0x40081000)                          /* HSMC Base Address */
#define ICM_BASE_ADDRESS                 _UINT32_(0x4008c000)                          /* ICM Base Address */
#define IP1553_BASE_ADDRESS              _UINT32_(0x4003c000)                          /* IP1553 Base Address */
#define MATRIX0_BASE_ADDRESS             _UINT32_(0x40000000)                          /* MATRIX0 Base Address */
#define MCAN0_BASE_ADDRESS               _UINT32_(0x40058000)                          /* MCAN0 Base Address */
#define MCAN1_BASE_ADDRESS               _UINT32_(0x4005c000)                          /* MCAN1 Base Address */
#define NMIC_BASE_ADDRESS                _UINT32_(0x400a8000)                          /* NMIC Base Address */
#define PIO_BASE_ADDRESS                 _UINT32_(0x40008000)                          /* PIO Base Address */
#define PMC_BASE_ADDRESS                 _UINT32_(0x4000c000)                          /* PMC Base Address */
#define PWM0_BASE_ADDRESS                _UINT32_(0x40068000)                          /* PWM0 Base Address */
#define PWM1_BASE_ADDRESS                _UINT32_(0x4006c000)                          /* PWM1 Base Address */
#define QSPI_BASE_ADDRESS                _UINT32_(0x40038000)                          /* QSPI Base Address */
#define RSTC_BASE_ADDRESS                _UINT32_(0x40100200)                          /* RSTC Base Address */
#define RSWDT_BASE_ADDRESS               _UINT32_(0x40100300)                          /* RSWDT Base Address */
#define RTC_BASE_ADDRESS                 _UINT32_(0x40100260)                          /* RTC Base Address */
#define RTT_BASE_ADDRESS                 _UINT32_(0x40100230)                          /* RTT Base Address */
#define SFR_BASE_ADDRESS                 _UINT32_(0x400a0000)                          /* SFR Base Address */
#define SHA_BASE_ADDRESS                 _UINT32_(0x40094000)                          /* SHA Base Address */
#define SPW_BASE_ADDRESS                 _UINT32_(0x40040000)                          /* SPW Base Address */
#define SUPC_BASE_ADDRESS                _UINT32_(0x40100210)                          /* SUPC Base Address */
#define TC0_BASE_ADDRESS                 _UINT32_(0x40070000)                          /* TC0 Base Address */
#define TC1_BASE_ADDRESS                 _UINT32_(0x40074000)                          /* TC1 Base Address */
#define TC2_BASE_ADDRESS                 _UINT32_(0x40078000)                          /* TC2 Base Address */
#define TC3_BASE_ADDRESS                 _UINT32_(0x4007c000)                          /* TC3 Base Address */
#define TCMECC_BASE_ADDRESS              _UINT32_(0x40100400)                          /* TCMECC Base Address */
#define TRNG_BASE_ADDRESS                _UINT32_(0x40090000)                          /* TRNG Base Address */
#define WDT_BASE_ADDRESS                 _UINT32_(0x40100250)                          /* WDT Base Address */
#define XDMAC_BASE_ADDRESS               _UINT32_(0x40098000)                          /* XDMAC Base Address */
#define GPNVMBITS_BASE_ADDRESS           _UINT32_(0x00000000)                          /* FUSES Base Address */

/* ************************************************************************** */
/*   PIO DEFINITIONS FOR SAMRH71F20C                                          */
/* ************************************************************************** */
#include "pio/samrh71f20c.h"

/* ************************************************************************** */
/*   MEMORY MAPPING DEFINITIONS FOR SAMRH71F20C                               */
/* ************************************************************************** */
#define PERIPHERALS_SIZE               _UINT32_(0x20000000)    /* 524288kB Memory segment type: io */
#define SYSTEM_SIZE                    _UINT32_(0x10000000)    /* 262144kB Memory segment type: io */
#define QSPIMEM_SIZE                   _UINT32_(0x08000000)    /* 131072kB Memory segment type: other */
#define AXIMX_SIZE                     _UINT32_(0x00100000)    /* 1024kB Memory segment type: other */
#define ITCM_SIZE                      _UINT32_(0x00020000)    /*  128kB Memory segment type: other */
#define IFLASH_SIZE                    _UINT32_(0x00020000)    /*  128kB Memory segment type: flash */
#define IFLASH_PAGE_SIZE               _UINT32_(       256)
#define IFLASH_NB_OF_PAGES             _UINT32_(       512)

#define DTCM_SIZE                      _UINT32_(0x00040000)    /*  256kB Memory segment type: other */
#define FlexRAM_SIZE                   _UINT32_(0x000c0000)    /*  768kB Memory segment type: ram */
#define EBI_CSHEMC_SIZE                _UINT32_(0x80000000)    /* 2097152kB Memory segment type: other */

#define PERIPHERALS_ADDR               _UINT32_(0x40000000)    /* PERIPHERALS base address (type: io)*/
#define SYSTEM_ADDR                    _UINT32_(0xe0000000)    /* SYSTEM base address (type: io)*/
#define QSPIMEM_ADDR                   _UINT32_(0x18000000)    /* QSPIMEM base address (type: other)*/
#define AXIMX_ADDR                     _UINT32_(0x22000000)    /* AXIMX base address (type: other)*/
#define ITCM_ADDR                      _UINT32_(0x00000000)    /* ITCM base address (type: other)*/
#define IFLASH_ADDR                    _UINT32_(0x10000000)    /* IFLASH base address (type: flash)*/
#define DTCM_ADDR                      _UINT32_(0x20000000)    /* DTCM base address (type: other)*/
#define FLEXRAM_ADDR                   _UINT32_(0x21000000)    /* FLEXRAM base address (type: ram)*/
#define EBI_CSHEMC_ADDR                _UINT32_(0x60000000)    /* EBI_CSHEMC base address (type: other)*/

/* ************************************************************************** */
/*   DEVICE SIGNATURES FOR SAMRH71F20C                                        */
/* ************************************************************************** */
#define CHIP_JTAGID                    _UINT32_(0X05D0503F)
#define CHIP_CIDR                      _UINT32_(0XA22F0700)
#define CHIP_EXID                      _UINT32_(0X00000001)

/* ************************************************************************** */
/*   ELECTRICAL DEFINITIONS FOR SAMRH71F20C                                   */
/* ************************************************************************** */



#ifdef __cplusplus
}
#endif

#endif /* _SAMRH71F20C_H_ */

