/*
 * Header file for PIC32CX2051MTSH128
 *
 * Copyright (c) 2023 Microchip Technology Inc. and its subsidiaries.
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

/* File generated from device description file (ATDF) version 2023-12-19T08:59:30Z */
#ifndef _PIC32CX2051MTSH128_H_
#define _PIC32CX2051MTSH128_H_

/* Header version uses Semantic Versioning 2.0.0 (https://semver.org/) */
#define HEADER_FORMAT_VERSION "2.1.1"

#define HEADER_FORMAT_VERSION_MAJOR (2)
#define HEADER_FORMAT_VERSION_MINOR (1)
#define HEADER_FORMAT_VERSION_PATCH (1)

/* PIC32CX2051MTSH128 definitions
  This file defines all structures and symbols for PIC32CX2051MTSH128:
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
/* CMSIS DEFINITIONS FOR PIC32CX2051MTSH128                                 */
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

/******  PIC32CX2051MTSH128 specific Interrupt Numbers ***********************************/
  SUPC_IRQn                 =   0, /* 0   Supply Controller (SUPC)            */
  RSTC_IRQn                 =   1, /* 1   Reset Controller (RSTC)             */
  RTC_IRQn                  =   2, /* 2   Real-time Clock (RTC)               */
  RTT_IRQn                  =   3, /* 3   Real-time Timer (RTT)               */
  DWDT0_IRQn                =   4, /* 4   Dual Watchdog Timer (DWDT)          */
  DWDT1_IRQn                =   5, /* 5   Dual Watchdog Timer (DWDT)          */
  PMC_IRQn                  =   6, /* 6   Power Management Controller (PMC)   */
  SEFC0_IRQn                =   7, /* 7   Secure Embedded Flash Controller (SEFC0) */
  SEFC1_IRQn                =   8, /* 8   Secure Embedded Flash Controller (SEFC1) */
  FLEXCOM0_IRQn             =   9, /* 9   Flexible Serial Communication (FLEXCOM0) */
  FLEXCOM1_IRQn             =  10, /* 10  Flexible Serial Communication (FLEXCOM1) */
  FLEXCOM2_IRQn             =  11, /* 11  Flexible Serial Communication (FLEXCOM2) */
  FLEXCOM3_IRQn             =  12, /* 12  Flexible Serial Communication (FLEXCOM3) */
  FLEXCOM4_IRQn             =  13, /* 13  Flexible Serial Communication (FLEXCOM4) */
  FLEXCOM5_IRQn             =  14, /* 14  Flexible Serial Communication (FLEXCOM5) */
  FLEXCOM6_IRQn             =  15, /* 15  Flexible Serial Communication (FLEXCOM6) */
  FLEXCOM7_IRQn             =  16, /* 16  Flexible Serial Communication (FLEXCOM7) */
  PIOA_IRQn                 =  17, /* 17  Parallel Input/Output Controller (PIOA) */
  PIOA_SEC_IRQn             =  18, /* 18  Parallel Input/Output Controller (PIOA) */
  PIOB_IRQn                 =  19, /* 19  Parallel Input/Output Controller (PIOB) */
  PIOB_SEC_IRQn             =  20, /* 20  Parallel Input/Output Controller (PIOB) */
  PIOC_IRQn                 =  21, /* 21  Parallel Input/Output Controller (PIOC) */
  PIOC_SEC_IRQn             =  22, /* 22  Parallel Input/Output Controller (PIOC) */
  QSPI_IRQn                 =  23, /* 23  Quad Serial Peripheral Interface (QSPI) */
  ADC_IRQn                  =  24, /* 24  Analog-to-Digital Converter (ADC)   */
  ACC_IRQn                  =  25, /* 25  Analog Comparator Controller (ACC)  */
  IPC0_IRQn                 =  28, /* 28  Inter-processor Communication (IPC0) */
  SLCDC_IRQn                =  29, /* 29  Segment LCD Controller (SLCDC)      */
  MEM2MEM0_IRQn             =  30, /* 30  Memory to Memory (MEM2MEM0)         */
  TC0_CH0_IRQn              =  31, /* 31  Timer Counter (TC0)                 */
  TC0_CH1_IRQn              =  32, /* 32  Timer Counter (TC0)                 */
  TC0_CH2_IRQn              =  33, /* 33  Timer Counter (TC0)                 */
  TC1_CH0_IRQn              =  34, /* 34  Timer Counter (TC1)                 */
  TC1_CH1_IRQn              =  35, /* 35  Timer Counter (TC1)                 */
  TC1_CH2_IRQn              =  36, /* 36  Timer Counter (TC1)                 */
  TC2_CH0_IRQn              =  37, /* 37  Timer Counter (TC2)                 */
  TC2_CH1_IRQn              =  38, /* 38  Timer Counter (TC2)                 */
  TC2_CH2_IRQn              =  39, /* 39  Timer Counter (TC2)                 */
  TC0_C0SEC_IRQn            =  40, /* 40  Timer Counter (TC0)                 */
  TC0_C1SEC_IRQn            =  41, /* 41  Timer Counter (TC0)                 */
  TC0_C2SEC_IRQn            =  42, /* 42  Timer Counter (TC0)                 */
  TC1_C0SEC_IRQn            =  43, /* 43  Timer Counter (TC1)                 */
  TC1_C1SEC_IRQn            =  44, /* 44  Timer Counter (TC1)                 */
  TC1_C2SEC_IRQn            =  45, /* 45  Timer Counter (TC1)                 */
  TC2_C0SEC_IRQn            =  46, /* 46  Timer Counter (TC2)                 */
  TC2_C1SEC_IRQn            =  47, /* 47  Timer Counter (TC2)                 */
  TC2_C2SEC_IRQn            =  48, /* 48  Timer Counter (TC2)                 */
  AES_IRQn                  =  49, /* 49  Advanced Encryption Standard (AES)  */
  AES_AESSEC_IRQn           =  50, /* 50  Advanced Encryption Standard (AES)  */
  AESB_IRQn                 =  51, /* 51  Advanced Encryption Standard Bridge (AESB) */
  AESB_AESBSEC_IRQn         =  52, /* 52  Advanced Encryption Standard Bridge (AESB) */
  SHA_IRQn                  =  53, /* 53  Secure Hash Algorithm (SHA)         */
  SHA_SHASEC_IRQn           =  54, /* 54  Secure Hash Algorithm (SHA)         */
  TRNG_IRQn                 =  55, /* 55  True Random Number Generator (TRNG) */
  TRNG_TRNGSEC_IRQn         =  56, /* 56  True Random Number Generator (TRNG) */
  ICM_IRQn                  =  57, /* 57  Integrity Check Monitor (ICM)       */
  ICM_ICMSEC_IRQn           =  58, /* 58  Integrity Check Monitor (ICM)       */
  CPKCC_IRQn                =  59, /* 59  Classic Public Key Cryptography Controller (CPKCC) */
  MATRIX0_IRQn              =  60, /* 60  AHB Bus Matrix (MATRIX0)            */
  MATRIX1_IRQn              =  61, /* 61  AHB Bus Matrix (MATRIX1)            */
  SUPC_WKUP3_IRQn           =  62, /* 62  Supply Controller (SUPC)            */
  SUPC_WKUP4_IRQn           =  63, /* 63  Supply Controller (SUPC)            */
  SUPC_WKUP5_IRQn           =  64, /* 64  Supply Controller (SUPC)            */
  SUPC_WKUP6_IRQn           =  65, /* 65  Supply Controller (SUPC)            */
  SUPC_WKUP7_IRQn           =  66, /* 66  Supply Controller (SUPC)            */
  SUPC_WKUP8_IRQn           =  67, /* 67  Supply Controller (SUPC)            */
  SUPC_WKUP9_IRQn           =  68, /* 68  Supply Controller (SUPC)            */
  SUPC_WKUP10_IRQn          =  69, /* 69  Supply Controller (SUPC)            */
  SUPC_WKUP11_IRQn          =  70, /* 70  Supply Controller (SUPC)            */
  SUPC_WKUP12_IRQn          =  71, /* 71  Supply Controller (SUPC)            */
  SUPC_WKUP13_IRQn          =  72, /* 72  Supply Controller (SUPC)            */
  SUPC_WKUP14_IRQn          =  73, /* 73  Supply Controller (SUPC)            */
  SUPC_WKUP15_IRQn          =  74, /* 74  Supply Controller (SUPC)            */
  EMAFE_SLINK_IRQn          =  76, /* 76  Energy Metering Analog Front End (EMAFE) */
  EMAFE_DATA_IRQn           =  77, /* 77  Energy Metering Analog Front End (EMAFE) */
  MEM2MEM1_IRQn             =  78, /* 78  Memory to Memory (MEM2MEM1)         */
  TC3_CH0_IRQn              =  79, /* 79  Timer Counter (TC3)                 */
  TC3_CH1_IRQn              =  80, /* 80  Timer Counter (TC3)                 */
  TC3_CH2_IRQn              =  81, /* 81  Timer Counter (TC3)                 */
  TC3_C0SEC_IRQn            =  82, /* 82  Timer Counter (TC3)                 */
  TC3_C1SEC_IRQn            =  83, /* 83  Timer Counter (TC3)                 */
  TC3_C2SEC_IRQn            =  84, /* 84  Timer Counter (TC3)                 */
  PIOD_IRQn                 =  85, /* 85  Parallel Input/Output Controller (PIOD) */
  PIOD_SEC_IRQn             =  86, /* 86  Parallel Input/Output Controller (PIOD) */
  UART_IRQn                 =  87, /* 87  Universal Asynchronous Receiver Transmitter (UART) */
  IPC1_IRQn                 =  88, /* 88  Inter-processor Communication (IPC1) */
  MCSPI_IRQn                =  89, /* 89  Multi Channel Serial Peripheral Interface (MCSPI) */
  PWM_IRQn                  =  90, /* 90  Pulse Width Modulation Controller (PWM) */
  MATRIX2_IRQn              =  94, /* 94  AHB Bus Matrix (MATRIX2)            */
  MATRIX3_IRQn              =  95, /* 95  AHB Bus Matrix (MATRIX3)            */

  PERIPH_MAX_IRQn           =  95  /* Max peripheral ID */
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
  void* pfnSUPC_Handler;                         /*   0 Supply Controller (SUPC) */
  void* pfnRSTC_Handler;                         /*   1 Reset Controller (RSTC) */
  void* pfnRTC_Handler;                          /*   2 Real-time Clock (RTC) */
  void* pfnRTT_Handler;                          /*   3 Real-time Timer (RTT) */
  void* pfnDWDT0_Handler;                        /*   4 Dual Watchdog Timer (DWDT) */
  void* pfnDWDT1_Handler;                        /*   5 Dual Watchdog Timer (DWDT) */
  void* pfnPMC_Handler;                          /*   6 Power Management Controller (PMC) */
  void* pfnSEFC0_Handler;                        /*   7 Secure Embedded Flash Controller (SEFC0) */
  void* pfnSEFC1_Handler;                        /*   8 Secure Embedded Flash Controller (SEFC1) */
  void* pfnFLEXCOM0_Handler;                     /*   9 Flexible Serial Communication (FLEXCOM0) */
  void* pfnFLEXCOM1_Handler;                     /*  10 Flexible Serial Communication (FLEXCOM1) */
  void* pfnFLEXCOM2_Handler;                     /*  11 Flexible Serial Communication (FLEXCOM2) */
  void* pfnFLEXCOM3_Handler;                     /*  12 Flexible Serial Communication (FLEXCOM3) */
  void* pfnFLEXCOM4_Handler;                     /*  13 Flexible Serial Communication (FLEXCOM4) */
  void* pfnFLEXCOM5_Handler;                     /*  14 Flexible Serial Communication (FLEXCOM5) */
  void* pfnFLEXCOM6_Handler;                     /*  15 Flexible Serial Communication (FLEXCOM6) */
  void* pfnFLEXCOM7_Handler;                     /*  16 Flexible Serial Communication (FLEXCOM7) */
  void* pfnPIOA_Handler;                         /*  17 Parallel Input/Output Controller (PIOA) */
  void* pfnPIOA_SEC_Handler;                     /*  18 Parallel Input/Output Controller (PIOA) */
  void* pfnPIOB_Handler;                         /*  19 Parallel Input/Output Controller (PIOB) */
  void* pfnPIOB_SEC_Handler;                     /*  20 Parallel Input/Output Controller (PIOB) */
  void* pfnPIOC_Handler;                         /*  21 Parallel Input/Output Controller (PIOC) */
  void* pfnPIOC_SEC_Handler;                     /*  22 Parallel Input/Output Controller (PIOC) */
  void* pfnQSPI_Handler;                         /*  23 Quad Serial Peripheral Interface (QSPI) */
  void* pfnADC_Handler;                          /*  24 Analog-to-Digital Converter (ADC) */
  void* pfnACC_Handler;                          /*  25 Analog Comparator Controller (ACC) */
  void* pvReserved26;
  void* pvReserved27;
  void* pfnIPC0_Handler;                         /*  28 Inter-processor Communication (IPC0) */
  void* pfnSLCDC_Handler;                        /*  29 Segment LCD Controller (SLCDC) */
  void* pfnMEM2MEM0_Handler;                     /*  30 Memory to Memory (MEM2MEM0) */
  void* pfnTC0_CH0_Handler;                      /*  31 Timer Counter (TC0) */
  void* pfnTC0_CH1_Handler;                      /*  32 Timer Counter (TC0) */
  void* pfnTC0_CH2_Handler;                      /*  33 Timer Counter (TC0) */
  void* pfnTC1_CH0_Handler;                      /*  34 Timer Counter (TC1) */
  void* pfnTC1_CH1_Handler;                      /*  35 Timer Counter (TC1) */
  void* pfnTC1_CH2_Handler;                      /*  36 Timer Counter (TC1) */
  void* pfnTC2_CH0_Handler;                      /*  37 Timer Counter (TC2) */
  void* pfnTC2_CH1_Handler;                      /*  38 Timer Counter (TC2) */
  void* pfnTC2_CH2_Handler;                      /*  39 Timer Counter (TC2) */
  void* pfnTC0_C0SEC_Handler;                    /*  40 Timer Counter (TC0) */
  void* pfnTC0_C1SEC_Handler;                    /*  41 Timer Counter (TC0) */
  void* pfnTC0_C2SEC_Handler;                    /*  42 Timer Counter (TC0) */
  void* pfnTC1_C0SEC_Handler;                    /*  43 Timer Counter (TC1) */
  void* pfnTC1_C1SEC_Handler;                    /*  44 Timer Counter (TC1) */
  void* pfnTC1_C2SEC_Handler;                    /*  45 Timer Counter (TC1) */
  void* pfnTC2_C0SEC_Handler;                    /*  46 Timer Counter (TC2) */
  void* pfnTC2_C1SEC_Handler;                    /*  47 Timer Counter (TC2) */
  void* pfnTC2_C2SEC_Handler;                    /*  48 Timer Counter (TC2) */
  void* pfnAES_Handler;                          /*  49 Advanced Encryption Standard (AES) */
  void* pfnAES_AESSEC_Handler;                   /*  50 Advanced Encryption Standard (AES) */
  void* pfnAESB_Handler;                         /*  51 Advanced Encryption Standard Bridge (AESB) */
  void* pfnAESB_AESBSEC_Handler;                 /*  52 Advanced Encryption Standard Bridge (AESB) */
  void* pfnSHA_Handler;                          /*  53 Secure Hash Algorithm (SHA) */
  void* pfnSHA_SHASEC_Handler;                   /*  54 Secure Hash Algorithm (SHA) */
  void* pfnTRNG_Handler;                         /*  55 True Random Number Generator (TRNG) */
  void* pfnTRNG_TRNGSEC_Handler;                 /*  56 True Random Number Generator (TRNG) */
  void* pfnICM_Handler;                          /*  57 Integrity Check Monitor (ICM) */
  void* pfnICM_ICMSEC_Handler;                   /*  58 Integrity Check Monitor (ICM) */
  void* pfnCPKCC_Handler;                        /*  59 Classic Public Key Cryptography Controller (CPKCC) */
  void* pfnMATRIX0_Handler;                      /*  60 AHB Bus Matrix (MATRIX0) */
  void* pfnMATRIX1_Handler;                      /*  61 AHB Bus Matrix (MATRIX1) */
  void* pfnSUPC_WKUP3_Handler;                   /*  62 Supply Controller (SUPC) */
  void* pfnSUPC_WKUP4_Handler;                   /*  63 Supply Controller (SUPC) */
  void* pfnSUPC_WKUP5_Handler;                   /*  64 Supply Controller (SUPC) */
  void* pfnSUPC_WKUP6_Handler;                   /*  65 Supply Controller (SUPC) */
  void* pfnSUPC_WKUP7_Handler;                   /*  66 Supply Controller (SUPC) */
  void* pfnSUPC_WKUP8_Handler;                   /*  67 Supply Controller (SUPC) */
  void* pfnSUPC_WKUP9_Handler;                   /*  68 Supply Controller (SUPC) */
  void* pfnSUPC_WKUP10_Handler;                  /*  69 Supply Controller (SUPC) */
  void* pfnSUPC_WKUP11_Handler;                  /*  70 Supply Controller (SUPC) */
  void* pfnSUPC_WKUP12_Handler;                  /*  71 Supply Controller (SUPC) */
  void* pfnSUPC_WKUP13_Handler;                  /*  72 Supply Controller (SUPC) */
  void* pfnSUPC_WKUP14_Handler;                  /*  73 Supply Controller (SUPC) */
  void* pfnSUPC_WKUP15_Handler;                  /*  74 Supply Controller (SUPC) */
  void* pvReserved75;
  void* pfnEMAFE_SLINK_Handler;                  /*  76 Energy Metering Analog Front End (EMAFE) */
  void* pfnEMAFE_DATA_Handler;                   /*  77 Energy Metering Analog Front End (EMAFE) */
  void* pfnMEM2MEM1_Handler;                     /*  78 Memory to Memory (MEM2MEM1) */
  void* pfnTC3_CH0_Handler;                      /*  79 Timer Counter (TC3) */
  void* pfnTC3_CH1_Handler;                      /*  80 Timer Counter (TC3) */
  void* pfnTC3_CH2_Handler;                      /*  81 Timer Counter (TC3) */
  void* pfnTC3_C0SEC_Handler;                    /*  82 Timer Counter (TC3) */
  void* pfnTC3_C1SEC_Handler;                    /*  83 Timer Counter (TC3) */
  void* pfnTC3_C2SEC_Handler;                    /*  84 Timer Counter (TC3) */
  void* pfnPIOD_Handler;                         /*  85 Parallel Input/Output Controller (PIOD) */
  void* pfnPIOD_SEC_Handler;                     /*  86 Parallel Input/Output Controller (PIOD) */
  void* pfnUART_Handler;                         /*  87 Universal Asynchronous Receiver Transmitter (UART) */
  void* pfnIPC1_Handler;                         /*  88 Inter-processor Communication (IPC1) */
  void* pfnMCSPI_Handler;                        /*  89 Multi Channel Serial Peripheral Interface (MCSPI) */
  void* pfnPWM_Handler;                          /*  90 Pulse Width Modulation Controller (PWM) */
  void* pvReserved91;
  void* pvReserved92;
  void* pvReserved93;
  void* pfnMATRIX2_Handler;                      /*  94 AHB Bus Matrix (MATRIX2) */
  void* pfnMATRIX3_Handler;                      /*  95 AHB Bus Matrix (MATRIX3) */
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
void SUPC_Handler                  ( void );
void RSTC_Handler                  ( void );
void RTC_Handler                   ( void );
void RTT_Handler                   ( void );
void DWDT0_Handler                 ( void );
void DWDT1_Handler                 ( void );
void PMC_Handler                   ( void );
void SEFC0_Handler                 ( void );
void SEFC1_Handler                 ( void );
void FLEXCOM0_Handler              ( void );
void FLEXCOM1_Handler              ( void );
void FLEXCOM2_Handler              ( void );
void FLEXCOM3_Handler              ( void );
void FLEXCOM4_Handler              ( void );
void FLEXCOM5_Handler              ( void );
void FLEXCOM6_Handler              ( void );
void FLEXCOM7_Handler              ( void );
void PIOA_Handler                  ( void );
void PIOA_SEC_Handler              ( void );
void PIOB_Handler                  ( void );
void PIOB_SEC_Handler              ( void );
void PIOC_Handler                  ( void );
void PIOC_SEC_Handler              ( void );
void QSPI_Handler                  ( void );
void ADC_Handler                   ( void );
void ACC_Handler                   ( void );
void IPC0_Handler                  ( void );
void SLCDC_Handler                 ( void );
void MEM2MEM0_Handler              ( void );
void TC0_CH0_Handler               ( void );
void TC0_CH1_Handler               ( void );
void TC0_CH2_Handler               ( void );
void TC1_CH0_Handler               ( void );
void TC1_CH1_Handler               ( void );
void TC1_CH2_Handler               ( void );
void TC2_CH0_Handler               ( void );
void TC2_CH1_Handler               ( void );
void TC2_CH2_Handler               ( void );
void TC0_C0SEC_Handler             ( void );
void TC0_C1SEC_Handler             ( void );
void TC0_C2SEC_Handler             ( void );
void TC1_C0SEC_Handler             ( void );
void TC1_C1SEC_Handler             ( void );
void TC1_C2SEC_Handler             ( void );
void TC2_C0SEC_Handler             ( void );
void TC2_C1SEC_Handler             ( void );
void TC2_C2SEC_Handler             ( void );
void AES_Handler                   ( void );
void AES_AESSEC_Handler            ( void );
void AESB_Handler                  ( void );
void AESB_AESBSEC_Handler          ( void );
void SHA_Handler                   ( void );
void SHA_SHASEC_Handler            ( void );
void TRNG_Handler                  ( void );
void TRNG_TRNGSEC_Handler          ( void );
void ICM_Handler                   ( void );
void ICM_ICMSEC_Handler            ( void );
void CPKCC_Handler                 ( void );
void MATRIX0_Handler               ( void );
void MATRIX1_Handler               ( void );
void SUPC_WKUP3_Handler            ( void );
void SUPC_WKUP4_Handler            ( void );
void SUPC_WKUP5_Handler            ( void );
void SUPC_WKUP6_Handler            ( void );
void SUPC_WKUP7_Handler            ( void );
void SUPC_WKUP8_Handler            ( void );
void SUPC_WKUP9_Handler            ( void );
void SUPC_WKUP10_Handler           ( void );
void SUPC_WKUP11_Handler           ( void );
void SUPC_WKUP12_Handler           ( void );
void SUPC_WKUP13_Handler           ( void );
void SUPC_WKUP14_Handler           ( void );
void SUPC_WKUP15_Handler           ( void );
void EMAFE_SLINK_Handler           ( void );
void EMAFE_DATA_Handler            ( void );
void MEM2MEM1_Handler              ( void );
void TC3_CH0_Handler               ( void );
void TC3_CH1_Handler               ( void );
void TC3_CH2_Handler               ( void );
void TC3_C0SEC_Handler             ( void );
void TC3_C1SEC_Handler             ( void );
void TC3_C2SEC_Handler             ( void );
void PIOD_Handler                  ( void );
void PIOD_SEC_Handler              ( void );
void UART_Handler                  ( void );
void IPC1_Handler                  ( void );
void MCSPI_Handler                 ( void );
void PWM_Handler                   ( void );
void MATRIX2_Handler               ( void );
void MATRIX3_Handler               ( void );
#endif /* DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* Configuration of the CORTEX-M4 Processor and Core Peripherals */
#define __CM4_REV                     0x0001
#define __MPU_PRESENT                      1
#define __FPU_PRESENT                      1
#define __NVIC_PRIO_BITS                   4
#define __Vendor_SysTickConfig             0

/* CMSIS includes */
#include "core_cm4.h"
#if defined USE_CMSIS_INIT
#include "system_pic32cxmtsh.h"
#endif /* USE_CMSIS_INIT */

/* ************************************************************************** */
/*   SOFTWARE PERIPHERAL API DEFINITION FOR PIC32CX2051MTSH128                */
/* ************************************************************************** */
#include "component/acc.h"
#include "component/adc.h"
#include "component/aes.h"
#include "component/aesb.h"
#include "component/chipid.h"
#include "component/cmcc.h"
#include "component/cpkcc.h"
#include "component/dwdt.h"
#include "component/emafe.h"
#include "component/flexcom.h"
#include "component/fuses.h"
#include "component/gpbr.h"
#include "component/icm.h"
#include "component/ipc.h"
#include "component/matrix.h"
#include "component/mcspi.h"
#include "component/mem2mem.h"
#include "component/osc.h"
#include "component/pdc.h"
#include "component/pio.h"
#include "component/pmc.h"
#include "component/pwm.h"
#include "component/qspi.h"
#include "component/rstc.h"
#include "component/rtc.h"
#include "component/rtt.h"
#include "component/sefc.h"
#include "component/sfr.h"
#include "component/sfrbu.h"
#include "component/sha.h"
#include "component/slcdc.h"
#include "component/supc.h"
#include "component/syscwp.h"
#include "component/tc.h"
#include "component/trng.h"
#include "component/uart.h"

/* ************************************************************************** */
/*   INSTANCE DEFINITIONS FOR PIC32CX2051MTSH128 */
/* ************************************************************************** */
#include "instance/acc.h"
#include "instance/adc.h"
#include "instance/aes.h"
#include "instance/aesb.h"
#include "instance/chipid.h"
#include "instance/cmcc0.h"
#include "instance/cmcc1.h"
#include "instance/cpkcc.h"
#include "instance/dwdt.h"
#include "instance/emafe.h"
#include "instance/flexcom0.h"
#include "instance/flexcom1.h"
#include "instance/flexcom2.h"
#include "instance/flexcom3.h"
#include "instance/flexcom4.h"
#include "instance/flexcom5.h"
#include "instance/flexcom6.h"
#include "instance/flexcom7.h"
#include "instance/fuses.h"
#include "instance/gpbr.h"
#include "instance/icm.h"
#include "instance/ipc0.h"
#include "instance/ipc1.h"
#include "instance/matrix0.h"
#include "instance/matrix1.h"
#include "instance/matrix2.h"
#include "instance/matrix3.h"
#include "instance/mcspi.h"
#include "instance/mem2mem0.h"
#include "instance/mem2mem1.h"
#include "instance/pio0.h"
#include "instance/pio1.h"
#include "instance/pmc.h"
#include "instance/pwm.h"
#include "instance/qspi.h"
#include "instance/rstc.h"
#include "instance/rtc.h"
#include "instance/rtt.h"
#include "instance/sefc0.h"
#include "instance/sefc1.h"
#include "instance/sfr.h"
#include "instance/sfrbu.h"
#include "instance/sha.h"
#include "instance/slcdc.h"
#include "instance/supc.h"
#include "instance/syscwp.h"
#include "instance/tc0.h"
#include "instance/tc1.h"
#include "instance/tc2.h"
#include "instance/tc3.h"
#include "instance/trng.h"
#include "instance/uart.h"

/* ************************************************************************** */
/*  PERIPHERAL ID DEFINITIONS FOR PIC32CX2051MTSH128                          */
/* ************************************************************************** */
#define ID_SUPC          (  0) /* Supply Controller (SUPC) */
#define ID_RSTC          (  1) /* Reset Controller (RSTC) */
#define ID_RTC           (  2) /* Real-time Clock (RTC) */
#define ID_RTT           (  3) /* Real-time Timer (RTT) */
#define ID_DWDT          (  4) /* Dual Watchdog Timer (DWDT) */
#define ID_PMC           (  6) /* Power Management Controller (PMC) */
#define ID_SEFC0         (  7) /* Secure Embedded Flash Controller (SEFC0) */
#define ID_SEFC1         (  8) /* Secure Embedded Flash Controller (SEFC1) */
#define ID_FLEXCOM0      (  9) /* Flexible Serial Communication (FLEXCOM0) */
#define ID_FLEXCOM1      ( 10) /* Flexible Serial Communication (FLEXCOM1) */
#define ID_FLEXCOM2      ( 11) /* Flexible Serial Communication (FLEXCOM2) */
#define ID_FLEXCOM3      ( 12) /* Flexible Serial Communication (FLEXCOM3) */
#define ID_FLEXCOM4      ( 13) /* Flexible Serial Communication (FLEXCOM4) */
#define ID_FLEXCOM5      ( 14) /* Flexible Serial Communication (FLEXCOM5) */
#define ID_FLEXCOM6      ( 15) /* Flexible Serial Communication (FLEXCOM6) */
#define ID_FLEXCOM7      ( 16) /* Flexible Serial Communication (FLEXCOM7) */
#define ID_PIOA          ( 17) /* Parallel Input/Output Controller (PIOA) */
#define ID_PIOA_SEC      ( 18) /* Parallel Input/Output Controller (PIOA_SEC) */
#define ID_PIOB          ( 19) /* Parallel Input/Output Controller (PIOB) */
#define ID_PIOB_SEC      ( 20) /* Parallel Input/Output Controller (PIOB_SEC) */
#define ID_PIOC          ( 21) /* Parallel Input/Output Controller (PIOC) */
#define ID_PIOC_SEC      ( 22) /* Parallel Input/Output Controller (PIOC_SEC) */
#define ID_QSPI          ( 23) /* Quad Serial Peripheral Interface (QSPI) */
#define ID_ADC           ( 24) /* Analog-to-Digital Converter (ADC) */
#define ID_ACC           ( 25) /* Analog Comparator Controller (ACC) */
#define ID_IPC0          ( 28) /* Inter-processor Communication (IPC0) */
#define ID_SLCDC         ( 29) /* Segment LCD Controller (SLCDC) */
#define ID_MEM2MEM0      ( 30) /* Memory to Memory (MEM2MEM0) */
#define ID_TC0_CHANNEL0  ( 31) /* Timer Counter (TC0_CHANNEL0) */
#define ID_TC0_CHANNEL1  ( 32) /* Timer Counter (TC0_CHANNEL1) */
#define ID_TC0_CHANNEL2  ( 33) /* Timer Counter (TC0_CHANNEL2) */
#define ID_TC1_CHANNEL0  ( 34) /* Timer Counter (TC1_CHANNEL0) */
#define ID_TC1_CHANNEL1  ( 35) /* Timer Counter (TC1_CHANNEL1) */
#define ID_TC1_CHANNEL2  ( 36) /* Timer Counter (TC1_CHANNEL2) */
#define ID_TC2_CHANNEL0  ( 37) /* Timer Counter (TC2_CHANNEL0) */
#define ID_TC2_CHANNEL1  ( 38) /* Timer Counter (TC2_CHANNEL1) */
#define ID_TC2_CHANNEL2  ( 39) /* Timer Counter (TC2_CHANNEL2) */
#define ID_TC0_C0SEC     ( 40) /* Timer Counter (TC0_C0SEC) */
#define ID_TC0_C1SEC     ( 41) /* Timer Counter (TC0_C1SEC) */
#define ID_TC0_C2SEC     ( 42) /* Timer Counter (TC0_C2SEC) */
#define ID_TC1_C0SEC     ( 43) /* Timer Counter (TC1_C0SEC) */
#define ID_TC1_C1SEC     ( 44) /* Timer Counter (TC1_C1SEC) */
#define ID_TC1_C2SEC     ( 45) /* Timer Counter (TC1_C2SEC) */
#define ID_TC2_C0SEC     ( 46) /* Timer Counter (TC2_C0SEC) */
#define ID_TC2_C1SEC     ( 47) /* Timer Counter (TC2_C1SEC) */
#define ID_TC2_C2SEC     ( 48) /* Timer Counter (TC2_C2SEC) */
#define ID_AES           ( 49) /* Advanced Encryption Standard (AES) */
#define ID_AES_AESSEC    ( 50) /* Advanced Encryption Standard (AES_AESSEC) */
#define ID_AESB          ( 51) /* Advanced Encryption Standard Bridge (AESB) */
#define ID_AESB_AESBSEC  ( 52) /* Advanced Encryption Standard Bridge (AESB_AESBSEC) */
#define ID_SHA           ( 53) /* Secure Hash Algorithm (SHA) */
#define ID_SHA_SHASEC    ( 54) /* Secure Hash Algorithm (SHA_SHASEC) */
#define ID_TRNG          ( 55) /* True Random Number Generator (TRNG) */
#define ID_TRNG_TRNGSEC  ( 56) /* True Random Number Generator (TRNG_TRNGSEC) */
#define ID_ICM           ( 57) /* Integrity Check Monitor (ICM) */
#define ID_ICM_ICMSEC    ( 58) /* Integrity Check Monitor (ICM_ICMSEC) */
#define ID_CPKCC         ( 59) /* Classic Public Key Cryptography Controller (CPKCC) */
#define ID_MATRIX0       ( 60) /* AHB Bus Matrix (MATRIX0) */
#define ID_MATRIX1       ( 61) /* AHB Bus Matrix (MATRIX1) */
#define ID_SUPC_WKUP3    ( 62) /* Supply Controller (SUPC_WKUP3) */
#define ID_SUPC_WKUP4    ( 63) /* Supply Controller (SUPC_WKUP4) */
#define ID_SUPC_WKUP5    ( 64) /* Supply Controller (SUPC_WKUP5) */
#define ID_SUPC_WKUP6    ( 65) /* Supply Controller (SUPC_WKUP6) */
#define ID_SUPC_WKUP7    ( 66) /* Supply Controller (SUPC_WKUP7) */
#define ID_SUPC_WKUP8    ( 67) /* Supply Controller (SUPC_WKUP8) */
#define ID_SUPC_WKUP9    ( 68) /* Supply Controller (SUPC_WKUP9) */
#define ID_SUPC_WKUP10   ( 69) /* Supply Controller (SUPC_WKUP10) */
#define ID_SUPC_WKUP11   ( 70) /* Supply Controller (SUPC_WKUP11) */
#define ID_SUPC_WKUP12   ( 71) /* Supply Controller (SUPC_WKUP12) */
#define ID_SUPC_WKUP13   ( 72) /* Supply Controller (SUPC_WKUP13) */
#define ID_SUPC_WKUP14   ( 73) /* Supply Controller (SUPC_WKUP14) */
#define ID_SUPC_WKUP15   ( 74) /* Supply Controller (SUPC_WKUP15) */
#define ID_EMAFE         ( 75) /* Energy Metering Analog Front End (EMAFE) */
#define ID_EMAFE_SLINK   ( 76) /* Energy Metering Analog Front End (EMAFE_SLINK) */
#define ID_EMAFE_DATA    ( 77) /* Energy Metering Analog Front End (EMAFE_DATA) */
#define ID_MEM2MEM1      ( 78) /* Memory to Memory (MEM2MEM1) */
#define ID_TC3_CHANNEL0  ( 79) /* Timer Counter (TC3_CHANNEL0) */
#define ID_TC3_CHANNEL1  ( 80) /* Timer Counter (TC3_CHANNEL1) */
#define ID_TC3_CHANNEL2  ( 81) /* Timer Counter (TC3_CHANNEL2) */
#define ID_TC3_C0SEC     ( 82) /* Timer Counter (TC3_C0SEC) */
#define ID_TC3_C1SEC     ( 83) /* Timer Counter (TC3_C1SEC) */
#define ID_TC3_C2SEC     ( 84) /* Timer Counter (TC3_C2SEC) */
#define ID_PIOD          ( 85) /* Parallel Input/Output Controller (PIOD) */
#define ID_PIOD_SEC      ( 86) /* Parallel Input/Output Controller (PIOD_SEC) */
#define ID_UART          ( 87) /* Universal Asynchronous Receiver Transmitter (UART) */
#define ID_IPC1          ( 88) /* Inter-processor Communication (IPC1) */
#define ID_MCSPI         ( 89) /* Multi Channel Serial Peripheral Interface (MCSPI) */
#define ID_PWM           ( 90) /* Pulse Width Modulation Controller (PWM) */
#define ID_SRAM1         ( 91) /* Metrology Core RAM (FLEXRAM 1 2) (SRAM1) */
#define ID_MATRIX2       ( 94) /* AHB Bus Matrix (MATRIX2) */
#define ID_MATRIX3       ( 95) /* AHB Bus Matrix (MATRIX3) */

#define ID_PERIPH_MAX    ( 95) /* Number of peripheral IDs */

/* ************************************************************************** */
/*   REGISTER STRUCTURE ADDRESS DEFINITIONS FOR PIC32CX2051MTSH128            */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define ACC_REGS                         ((acc_registers_t*)0x40028000)                /* ACC Registers Address        */
#define ADC_REGS                         ((adc_registers_t*)0x40024000)                /* ADC Registers Address        */
#define AES_REGS                         ((aes_registers_t*)0x44000000)                /* AES Registers Address        */
#define AESB_REGS                        ((aesb_registers_t*)0x44004000)               /* AESB Registers Address       */
#define CHIPID_REGS                      ((chipid_registers_t*)0x40050200)             /* CHIPID Registers Address     */
#define CMCC0_REGS                       ((cmcc_registers_t*)0x46008000)               /* CMCC0 Registers Address      */
#define CMCC1_REGS                       ((cmcc_registers_t*)0x4600c000)               /* CMCC1 Registers Address      */
#define CPKCC_REGS                       ((cpkcc_registers_t*)0x46000000)              /* CPKCC Registers Address      */
#define DWDT_REGS                        ((dwdt_registers_t*)0x40052000)               /* DWDT Registers Address       */
#define EMAFE_REGS                       ((emafe_registers_t*)0x48000000)              /* EMAFE Registers Address      */
#define FLEXCOM0_REGS                    ((flexcom_registers_t*)0x40000000)            /* FLEXCOM0 Registers Address   */
#define FLEXCOM1_REGS                    ((flexcom_registers_t*)0x40004000)            /* FLEXCOM1 Registers Address   */
#define FLEXCOM2_REGS                    ((flexcom_registers_t*)0x40008000)            /* FLEXCOM2 Registers Address   */
#define FLEXCOM3_REGS                    ((flexcom_registers_t*)0x4000c000)            /* FLEXCOM3 Registers Address   */
#define FLEXCOM4_REGS                    ((flexcom_registers_t*)0x40010000)            /* FLEXCOM4 Registers Address   */
#define FLEXCOM5_REGS                    ((flexcom_registers_t*)0x40014000)            /* FLEXCOM5 Registers Address   */
#define FLEXCOM6_REGS                    ((flexcom_registers_t*)0x40018000)            /* FLEXCOM6 Registers Address   */
#define FLEXCOM7_REGS                    ((flexcom_registers_t*)0x4001c000)            /* FLEXCOM7 Registers Address   */
#define GPBR_REGS                        ((gpbr_registers_t*)0x40053060)               /* GPBR Registers Address       */
#define ICM_REGS                         ((icm_registers_t*)0x44010000)                /* ICM Registers Address        */
#define IPC0_REGS                        ((ipc_registers_t*)0x4002c000)                /* IPC0 Registers Address       */
#define IPC1_REGS                        ((ipc_registers_t*)0x48014000)                /* IPC1 Registers Address       */
#define MATRIX0_REGS                     ((matrix_registers_t*)0x46004000)             /* MATRIX0 Registers Address    */
#define MATRIX1_REGS                     ((matrix_registers_t*)0x40044000)             /* MATRIX1 Registers Address    */
#define MATRIX2_REGS                     ((matrix_registers_t*)0x4a000000)             /* MATRIX2 Registers Address    */
#define MATRIX3_REGS                     ((matrix_registers_t*)0x48020000)             /* MATRIX3 Registers Address    */
#define MCSPI_REGS                       ((mcspi_registers_t*)0x48018000)              /* MCSPI Registers Address      */
#define MEM2MEM0_REGS                    ((mem2mem_registers_t*)0x40034000)            /* MEM2MEM0 Registers Address   */
#define MEM2MEM1_REGS                    ((mem2mem_registers_t*)0x48004000)            /* MEM2MEM1 Registers Address   */
#define PIO0_REGS                        ((pio_registers_t*)0x40048000)                /* PIO0 Registers Address       */
#define PIO1_REGS                        ((pio_registers_t*)0x4800c000)                /* PIO1 Registers Address       */
#define PMC_REGS                         ((pmc_registers_t*)0x46800000)                /* PMC Registers Address        */
#define PWM_REGS                         ((pwm_registers_t*)0x4801c000)                /* PWM Registers Address        */
#define QSPI_REGS                        ((qspi_registers_t*)0x40020000)               /* QSPI Registers Address       */
#define RSTC_REGS                        ((rstc_registers_t*)0x40053000)               /* RSTC Registers Address       */
#define RTC_REGS                         ((rtc_registers_t*)0x40053100)                /* RTC Registers Address        */
#define RTT_REGS                         ((rtt_registers_t*)0x40053020)                /* RTT Registers Address        */
#define SEFC0_REGS                       ((sefc_registers_t*)0x460e0000)               /* SEFC0 Registers Address      */
#define SEFC1_REGS                       ((sefc_registers_t*)0x460e0200)               /* SEFC1 Registers Address      */
#define SFR_REGS                         ((sfr_registers_t*)0x40050400)                /* SFR Registers Address        */
#define SFRBU_REGS                       ((sfrbu_registers_t*)0x40050600)              /* SFRBU Registers Address      */
#define SHA_REGS                         ((sha_registers_t*)0x44008000)                /* SHA Registers Address        */
#define SLCDC_REGS                       ((slcdc_registers_t*)0x40030000)              /* SLCDC Registers Address      */
#define SUPC_REGS                        ((supc_registers_t*)0x400531d0)               /* SUPC Registers Address       */
#define SYSCWP_REGS                      ((syscwp_registers_t*)0x400531a0)             /* SYSCWP Registers Address     */
#define TC0_REGS                         ((tc_registers_t*)0x40038000)                 /* TC0 Registers Address        */
#define TC1_REGS                         ((tc_registers_t*)0x4003c000)                 /* TC1 Registers Address        */
#define TC2_REGS                         ((tc_registers_t*)0x40040000)                 /* TC2 Registers Address        */
#define TC3_REGS                         ((tc_registers_t*)0x48008000)                 /* TC3 Registers Address        */
#define TRNG_REGS                        ((trng_registers_t*)0x4400c000)               /* TRNG Registers Address       */
#define UART_REGS                        ((uart_registers_t*)0x48010000)               /* UART Registers Address       */
#define GPNVMBITS_REGS                   ((fuses_gpnvmbits_registers_t*)0x00000000)    /* FUSES Registers Address      */
#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ************************************************************************** */
/*   BASE ADDRESS DEFINITIONS FOR PIC32CX2051MTSH128                          */
/* ************************************************************************** */
#define ACC_BASE_ADDRESS                 _UINT32_(0x40028000)                          /* ACC Base Address */
#define ADC_BASE_ADDRESS                 _UINT32_(0x40024000)                          /* ADC Base Address */
#define AES_BASE_ADDRESS                 _UINT32_(0x44000000)                          /* AES Base Address */
#define AESB_BASE_ADDRESS                _UINT32_(0x44004000)                          /* AESB Base Address */
#define CHIPID_BASE_ADDRESS              _UINT32_(0x40050200)                          /* CHIPID Base Address */
#define CMCC0_BASE_ADDRESS               _UINT32_(0x46008000)                          /* CMCC0 Base Address */
#define CMCC1_BASE_ADDRESS               _UINT32_(0x4600c000)                          /* CMCC1 Base Address */
#define CPKCC_BASE_ADDRESS               _UINT32_(0x46000000)                          /* CPKCC Base Address */
#define DWDT_BASE_ADDRESS                _UINT32_(0x40052000)                          /* DWDT Base Address */
#define EMAFE_BASE_ADDRESS               _UINT32_(0x48000000)                          /* EMAFE Base Address */
#define FLEXCOM0_BASE_ADDRESS            _UINT32_(0x40000000)                          /* FLEXCOM0 Base Address */
#define FLEXCOM1_BASE_ADDRESS            _UINT32_(0x40004000)                          /* FLEXCOM1 Base Address */
#define FLEXCOM2_BASE_ADDRESS            _UINT32_(0x40008000)                          /* FLEXCOM2 Base Address */
#define FLEXCOM3_BASE_ADDRESS            _UINT32_(0x4000c000)                          /* FLEXCOM3 Base Address */
#define FLEXCOM4_BASE_ADDRESS            _UINT32_(0x40010000)                          /* FLEXCOM4 Base Address */
#define FLEXCOM5_BASE_ADDRESS            _UINT32_(0x40014000)                          /* FLEXCOM5 Base Address */
#define FLEXCOM6_BASE_ADDRESS            _UINT32_(0x40018000)                          /* FLEXCOM6 Base Address */
#define FLEXCOM7_BASE_ADDRESS            _UINT32_(0x4001c000)                          /* FLEXCOM7 Base Address */
#define GPBR_BASE_ADDRESS                _UINT32_(0x40053060)                          /* GPBR Base Address */
#define ICM_BASE_ADDRESS                 _UINT32_(0x44010000)                          /* ICM Base Address */
#define IPC0_BASE_ADDRESS                _UINT32_(0x4002c000)                          /* IPC0 Base Address */
#define IPC1_BASE_ADDRESS                _UINT32_(0x48014000)                          /* IPC1 Base Address */
#define MATRIX0_BASE_ADDRESS             _UINT32_(0x46004000)                          /* MATRIX0 Base Address */
#define MATRIX1_BASE_ADDRESS             _UINT32_(0x40044000)                          /* MATRIX1 Base Address */
#define MATRIX2_BASE_ADDRESS             _UINT32_(0x4a000000)                          /* MATRIX2 Base Address */
#define MATRIX3_BASE_ADDRESS             _UINT32_(0x48020000)                          /* MATRIX3 Base Address */
#define MCSPI_BASE_ADDRESS               _UINT32_(0x48018000)                          /* MCSPI Base Address */
#define MEM2MEM0_BASE_ADDRESS            _UINT32_(0x40034000)                          /* MEM2MEM0 Base Address */
#define MEM2MEM1_BASE_ADDRESS            _UINT32_(0x48004000)                          /* MEM2MEM1 Base Address */
#define PIO0_BASE_ADDRESS                _UINT32_(0x40048000)                          /* PIO0 Base Address */
#define PIO1_BASE_ADDRESS                _UINT32_(0x4800c000)                          /* PIO1 Base Address */
#define PMC_BASE_ADDRESS                 _UINT32_(0x46800000)                          /* PMC Base Address */
#define PWM_BASE_ADDRESS                 _UINT32_(0x4801c000)                          /* PWM Base Address */
#define QSPI_BASE_ADDRESS                _UINT32_(0x40020000)                          /* QSPI Base Address */
#define RSTC_BASE_ADDRESS                _UINT32_(0x40053000)                          /* RSTC Base Address */
#define RTC_BASE_ADDRESS                 _UINT32_(0x40053100)                          /* RTC Base Address */
#define RTT_BASE_ADDRESS                 _UINT32_(0x40053020)                          /* RTT Base Address */
#define SEFC0_BASE_ADDRESS               _UINT32_(0x460e0000)                          /* SEFC0 Base Address */
#define SEFC1_BASE_ADDRESS               _UINT32_(0x460e0200)                          /* SEFC1 Base Address */
#define SFR_BASE_ADDRESS                 _UINT32_(0x40050400)                          /* SFR Base Address */
#define SFRBU_BASE_ADDRESS               _UINT32_(0x40050600)                          /* SFRBU Base Address */
#define SHA_BASE_ADDRESS                 _UINT32_(0x44008000)                          /* SHA Base Address */
#define SLCDC_BASE_ADDRESS               _UINT32_(0x40030000)                          /* SLCDC Base Address */
#define SUPC_BASE_ADDRESS                _UINT32_(0x400531d0)                          /* SUPC Base Address */
#define SYSCWP_BASE_ADDRESS              _UINT32_(0x400531a0)                          /* SYSCWP Base Address */
#define TC0_BASE_ADDRESS                 _UINT32_(0x40038000)                          /* TC0 Base Address */
#define TC1_BASE_ADDRESS                 _UINT32_(0x4003c000)                          /* TC1 Base Address */
#define TC2_BASE_ADDRESS                 _UINT32_(0x40040000)                          /* TC2 Base Address */
#define TC3_BASE_ADDRESS                 _UINT32_(0x48008000)                          /* TC3 Base Address */
#define TRNG_BASE_ADDRESS                _UINT32_(0x4400c000)                          /* TRNG Base Address */
#define UART_BASE_ADDRESS                _UINT32_(0x48010000)                          /* UART Base Address */
#define GPNVMBITS_BASE_ADDRESS           _UINT32_(0x00000000)                          /* FUSES Base Address */

/* ************************************************************************** */
/*   PIO DEFINITIONS FOR PIC32CX2051MTSH128                                   */
/* ************************************************************************** */
#include "pio/pic32cx2051mtsh128.h"

/* ************************************************************************** */
/*   MEMORY MAPPING DEFINITIONS FOR PIC32CX2051MTSH128                        */
/* ************************************************************************** */
#define PERIPHERALS_SIZE               _UINT32_(0x20000000)    /* 524288kB Memory segment type: io */
#define IFLASH0_SIZE                   _UINT32_(0x00100000)    /* 1024kB Memory segment type: flash */
#define IFLASH0_PAGE_SIZE              _UINT32_(       512)
#define IFLASH0_NB_OF_PAGES            _UINT32_(      2048)

#define IFLASH1_SIZE                   _UINT32_(0x00100000)    /* 1024kB Memory segment type: flash */
#define IFLASH1_PAGE_SIZE              _UINT32_(       512)
#define IFLASH1_NB_OF_PAGES            _UINT32_(      2048)

#define CPKCC_ROM_SIZE                 _UINT32_(0x00010000)    /*   64kB Memory segment type: other */
#define CPKCC_RAM_SIZE                 _UINT32_(0x00001000)    /*    4kB Memory segment type: other */
#define QSPI_MEM_SIZE                  _UINT32_(0x02000000)    /* 32768kB Memory segment type: other */
#define QSPI_AESB_SIZE                 _UINT32_(0x02000000)    /* 32768kB Memory segment type: other */
#define IFLASH0_CC_SIZE                _UINT32_(0x00100000)    /* 1024kB Memory segment type: flash */
#define IFLASH0_CC_PAGE_SIZE           _UINT32_(       512)
#define IFLASH0_CC_NB_OF_PAGES         _UINT32_(      2048)

#define IFLASH1_CC_SIZE                _UINT32_(0x00100000)    /* 1024kB Memory segment type: flash */
#define IFLASH1_CC_PAGE_SIZE           _UINT32_(       512)
#define IFLASH1_CC_NB_OF_PAGES         _UINT32_(      2048)

#define QSPI_MEM_CC_SIZE               _UINT32_(0x02000000)    /* 32768kB Memory segment type: other */
#define QSPI_AESB_CC_SIZE              _UINT32_(0x02000000)    /* 32768kB Memory segment type: other */
#define DTCM_SIZE                      _UINT32_(0x00002000)    /*    8kB Memory segment type: other */
#define ITCM_SIZE                      _UINT32_(0x00004000)    /*   16kB Memory segment type: other */
#define IRAM0_SIZE                     _UINT32_(0x00080000)    /*  512kB Memory segment type: ram */
#define IRAM1_SIZE                     _UINT32_(0x00008000)    /*   32kB Memory segment type: ram */
#define IRAM2_SIZE                     _UINT32_(0x00004000)    /*   16kB Memory segment type: ram */
#define PPB_SIZE                       _UINT32_(0x00100000)    /* 1024kB Memory segment type: io */

#define PERIPHERALS_ADDR               _UINT32_(0x40000000)    /* PERIPHERALS base address (type: io)*/
#define IFLASH0_ADDR                   _UINT32_(0x01000000)    /* IFLASH0 base address (type: flash)*/
#define IFLASH1_ADDR                   _UINT32_(0x01100000)    /* IFLASH1 base address (type: flash)*/
#define CPKCC_ROM_ADDR                 _UINT32_(0x02020000)    /* CPKCC_ROM base address (type: other)*/
#define CPKCC_RAM_ADDR                 _UINT32_(0x02031000)    /* CPKCC_RAM base address (type: other)*/
#define QSPI_MEM_ADDR                  _UINT32_(0x04000000)    /* QSPI_MEM base address (type: other)*/
#define QSPI_AESB_ADDR                 _UINT32_(0x06000000)    /* QSPI_AESB base address (type: other)*/
#define IFLASH0_CC_ADDR                _UINT32_(0x11000000)    /* IFLASH0_CC base address (type: flash)*/
#define IFLASH1_CC_ADDR                _UINT32_(0x11100000)    /* IFLASH1_CC base address (type: flash)*/
#define QSPI_MEM_CC_ADDR               _UINT32_(0x14000000)    /* QSPI_MEM_CC base address (type: other)*/
#define QSPI_AESB_CC_ADDR              _UINT32_(0x16000000)    /* QSPI_AESB_CC base address (type: other)*/
#define DTCM_ADDR                      _UINT32_(0x1fffa000)    /* DTCM base address (type: other)*/
#define ITCM_ADDR                      _UINT32_(0x1fffc000)    /* ITCM base address (type: other)*/
#define IRAM0_ADDR                     _UINT32_(0x20000000)    /* IRAM0 base address (type: ram)*/
#define IRAM1_ADDR                     _UINT32_(0x20080000)    /* IRAM1 base address (type: ram)*/
#define IRAM2_ADDR                     _UINT32_(0x20088000)    /* IRAM2 base address (type: ram)*/
#define PPB_ADDR                       _UINT32_(0xe0000000)    /* PPB base address (type: io)*/

/* ************************************************************************** */
/*   DEVICE SIGNATURES FOR PIC32CX2051MTSH128                                 */
/* ************************************************************************** */
#define CHIP_JTAGID                    _UINT32_(0X05B4503F)
#define CHIP_CIDR                      _UINT32_(0X2C3F0EE0)
#define CHIP_EXID                      _UINT32_(0X00000000)

/* ************************************************************************** */
/*   ELECTRICAL DEFINITIONS FOR PIC32CX2051MTSH128                            */
/* ************************************************************************** */



#ifdef __cplusplus
}
#endif

#endif /* _PIC32CX2051MTSH128_H_ */

