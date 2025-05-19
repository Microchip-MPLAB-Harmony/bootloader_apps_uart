/*
 * Peripheral I/O description for PIC32CX2051MTSH128
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

/* file generated from device description file (ATDF) version 2023-12-19T08:59:30Z */
#ifndef _PIC32CX2051MTSH128_GPIO_H_
#define _PIC32CX2051MTSH128_GPIO_H_

/* ========== Peripheral I/O pin numbers ========== */
#define PIN_PA2                     (    2)  /**< Pin Number for PA2 */
#define PIN_PA3                     (    3)  /**< Pin Number for PA3 */
#define PIN_PA4                     (    4)  /**< Pin Number for PA4 */
#define PIN_PA5                     (    5)  /**< Pin Number for PA5 */
#define PIN_PA6                     (    6)  /**< Pin Number for PA6 */
#define PIN_PA7                     (    7)  /**< Pin Number for PA7 */
#define PIN_PA8                     (    8)  /**< Pin Number for PA8 */
#define PIN_PA9                     (    9)  /**< Pin Number for PA9 */
#define PIN_PA10                    (   10)  /**< Pin Number for PA10 */
#define PIN_PA11                    (   11)  /**< Pin Number for PA11 */
#define PIN_PA12                    (   12)  /**< Pin Number for PA12 */
#define PIN_PA13                    (   13)  /**< Pin Number for PA13 */
#define PIN_PA14                    (   14)  /**< Pin Number for PA14 */
#define PIN_PA15                    (   15)  /**< Pin Number for PA15 */
#define PIN_PA16                    (   16)  /**< Pin Number for PA16 */
#define PIN_PA17                    (   17)  /**< Pin Number for PA17 */
#define PIN_PA18                    (   18)  /**< Pin Number for PA18 */
#define PIN_PA19                    (   19)  /**< Pin Number for PA19 */
#define PIN_PA20                    (   20)  /**< Pin Number for PA20 */
#define PIN_PA21                    (   21)  /**< Pin Number for PA21 */
#define PIN_PA22                    (   22)  /**< Pin Number for PA22 */
#define PIN_PA23                    (   23)  /**< Pin Number for PA23 */
#define PIN_PA24                    (   24)  /**< Pin Number for PA24 */
#define PIN_PA25                    (   25)  /**< Pin Number for PA25 */
#define PIN_PA26                    (   26)  /**< Pin Number for PA26 */
#define PIN_PA27                    (   27)  /**< Pin Number for PA27 */
#define PIN_PA28                    (   28)  /**< Pin Number for PA28 */
#define PIN_PA29                    (   29)  /**< Pin Number for PA29 */
#define PIN_PA30                    (   30)  /**< Pin Number for PA30 */
#define PIN_PA31                    (   31)  /**< Pin Number for PA31 */
#define PIN_PB0                     (   32)  /**< Pin Number for PB0 */
#define PIN_PB1                     (   33)  /**< Pin Number for PB1 */
#define PIN_PB2                     (   34)  /**< Pin Number for PB2 */
#define PIN_PB3                     (   35)  /**< Pin Number for PB3 */
#define PIN_PB4                     (   36)  /**< Pin Number for PB4 */
#define PIN_PB5                     (   37)  /**< Pin Number for PB5 */
#define PIN_PB6                     (   38)  /**< Pin Number for PB6 */
#define PIN_PB7                     (   39)  /**< Pin Number for PB7 */
#define PIN_PB8                     (   40)  /**< Pin Number for PB8 */
#define PIN_PB9                     (   41)  /**< Pin Number for PB9 */
#define PIN_PB10                    (   42)  /**< Pin Number for PB10 */
#define PIN_PB11                    (   43)  /**< Pin Number for PB11 */
#define PIN_PB12                    (   44)  /**< Pin Number for PB12 */
#define PIN_PB13                    (   45)  /**< Pin Number for PB13 */
#define PIN_PB14                    (   46)  /**< Pin Number for PB14 */
#define PIN_PB15                    (   47)  /**< Pin Number for PB15 */
#define PIN_PB16                    (   48)  /**< Pin Number for PB16 */
#define PIN_PB17                    (   49)  /**< Pin Number for PB17 */
#define PIN_PB18                    (   50)  /**< Pin Number for PB18 */
#define PIN_PB19                    (   51)  /**< Pin Number for PB19 */
#define PIN_PB20                    (   52)  /**< Pin Number for PB20 */
#define PIN_PB22                    (   54)  /**< Pin Number for PB22 */
#define PIN_PB23                    (   55)  /**< Pin Number for PB23 */
#define PIN_PB24                    (   56)  /**< Pin Number for PB24 */
#define PIN_PB25                    (   57)  /**< Pin Number for PB25 */
#define PIN_PB26                    (   58)  /**< Pin Number for PB26 */
#define PIN_PC0                     (   64)  /**< Pin Number for PC0 */
#define PIN_PC1                     (   65)  /**< Pin Number for PC1 */
#define PIN_PC2                     (   66)  /**< Pin Number for PC2 */
#define PIN_PC3                     (   67)  /**< Pin Number for PC3 */
#define PIN_PC5                     (   69)  /**< Pin Number for PC5 */
#define PIN_PC6                     (   70)  /**< Pin Number for PC6 */
#define PIN_PC7                     (   71)  /**< Pin Number for PC7 */
#define PIN_PC8                     (   72)  /**< Pin Number for PC8 */
#define PIN_PC9                     (   73)  /**< Pin Number for PC9 */
#define PIN_PC10                    (   74)  /**< Pin Number for PC10 */
#define PIN_PC11                    (   75)  /**< Pin Number for PC11 */
#define PIN_PC12                    (   76)  /**< Pin Number for PC12 */
#define PIN_PC13                    (   77)  /**< Pin Number for PC13 */
#define PIN_PC14                    (   78)  /**< Pin Number for PC14 */
#define PIN_PC15                    (   79)  /**< Pin Number for PC15 */
#define PIN_PC16                    (   80)  /**< Pin Number for PC16 */
#define PIN_PC17                    (   81)  /**< Pin Number for PC17 */
#define PIN_PC18                    (   82)  /**< Pin Number for PC18 */
#define PIN_PC19                    (   83)  /**< Pin Number for PC19 */
#define PIN_PC20                    (   84)  /**< Pin Number for PC20 */
#define PIN_PC21                    (   85)  /**< Pin Number for PC21 */
#define PIN_PC22                    (   86)  /**< Pin Number for PC22 */
#define PIN_PD0                     (   96)  /**< Pin Number for PD0 */
#define PIN_PD1                     (   97)  /**< Pin Number for PD1 */
#define PIN_PD2                     (   98)  /**< Pin Number for PD2 */
#define PIN_PD3                     (   99)  /**< Pin Number for PD3 */
#define PIN_PD12                    (  108)  /**< Pin Number for PD12 */
#define PIN_PD13                    (  109)  /**< Pin Number for PD13 */
#define PIN_PD16                    (  112)  /**< Pin Number for PD16 */
#define PIN_PD17                    (  113)  /**< Pin Number for PD17 */
#define PIN_PD18                    (  114)  /**< Pin Number for PD18 */
#define PIN_PD19                    (  115)  /**< Pin Number for PD19 */

/* ========== Peripheral I/O masks ========== */
#define PIO_PA2                     (_UINT32_(1) << 2) /**< PIO mask for PA2 */
#define PIO_PA3                     (_UINT32_(1) << 3) /**< PIO mask for PA3 */
#define PIO_PA4                     (_UINT32_(1) << 4) /**< PIO mask for PA4 */
#define PIO_PA5                     (_UINT32_(1) << 5) /**< PIO mask for PA5 */
#define PIO_PA6                     (_UINT32_(1) << 6) /**< PIO mask for PA6 */
#define PIO_PA7                     (_UINT32_(1) << 7) /**< PIO mask for PA7 */
#define PIO_PA8                     (_UINT32_(1) << 8) /**< PIO mask for PA8 */
#define PIO_PA9                     (_UINT32_(1) << 9) /**< PIO mask for PA9 */
#define PIO_PA10                    (_UINT32_(1) << 10) /**< PIO mask for PA10 */
#define PIO_PA11                    (_UINT32_(1) << 11) /**< PIO mask for PA11 */
#define PIO_PA12                    (_UINT32_(1) << 12) /**< PIO mask for PA12 */
#define PIO_PA13                    (_UINT32_(1) << 13) /**< PIO mask for PA13 */
#define PIO_PA14                    (_UINT32_(1) << 14) /**< PIO mask for PA14 */
#define PIO_PA15                    (_UINT32_(1) << 15) /**< PIO mask for PA15 */
#define PIO_PA16                    (_UINT32_(1) << 16) /**< PIO mask for PA16 */
#define PIO_PA17                    (_UINT32_(1) << 17) /**< PIO mask for PA17 */
#define PIO_PA18                    (_UINT32_(1) << 18) /**< PIO mask for PA18 */
#define PIO_PA19                    (_UINT32_(1) << 19) /**< PIO mask for PA19 */
#define PIO_PA20                    (_UINT32_(1) << 20) /**< PIO mask for PA20 */
#define PIO_PA21                    (_UINT32_(1) << 21) /**< PIO mask for PA21 */
#define PIO_PA22                    (_UINT32_(1) << 22) /**< PIO mask for PA22 */
#define PIO_PA23                    (_UINT32_(1) << 23) /**< PIO mask for PA23 */
#define PIO_PA24                    (_UINT32_(1) << 24) /**< PIO mask for PA24 */
#define PIO_PA25                    (_UINT32_(1) << 25) /**< PIO mask for PA25 */
#define PIO_PA26                    (_UINT32_(1) << 26) /**< PIO mask for PA26 */
#define PIO_PA27                    (_UINT32_(1) << 27) /**< PIO mask for PA27 */
#define PIO_PA28                    (_UINT32_(1) << 28) /**< PIO mask for PA28 */
#define PIO_PA29                    (_UINT32_(1) << 29) /**< PIO mask for PA29 */
#define PIO_PA30                    (_UINT32_(1) << 30) /**< PIO mask for PA30 */
#define PIO_PA31                    (_UINT32_(1) << 31) /**< PIO mask for PA31 */
#define PIO_PB0                     (_UINT32_(1) << 0) /**< PIO mask for PB0 */
#define PIO_PB1                     (_UINT32_(1) << 1) /**< PIO mask for PB1 */
#define PIO_PB2                     (_UINT32_(1) << 2) /**< PIO mask for PB2 */
#define PIO_PB3                     (_UINT32_(1) << 3) /**< PIO mask for PB3 */
#define PIO_PB4                     (_UINT32_(1) << 4) /**< PIO mask for PB4 */
#define PIO_PB5                     (_UINT32_(1) << 5) /**< PIO mask for PB5 */
#define PIO_PB6                     (_UINT32_(1) << 6) /**< PIO mask for PB6 */
#define PIO_PB7                     (_UINT32_(1) << 7) /**< PIO mask for PB7 */
#define PIO_PB8                     (_UINT32_(1) << 8) /**< PIO mask for PB8 */
#define PIO_PB9                     (_UINT32_(1) << 9) /**< PIO mask for PB9 */
#define PIO_PB10                    (_UINT32_(1) << 10) /**< PIO mask for PB10 */
#define PIO_PB11                    (_UINT32_(1) << 11) /**< PIO mask for PB11 */
#define PIO_PB12                    (_UINT32_(1) << 12) /**< PIO mask for PB12 */
#define PIO_PB13                    (_UINT32_(1) << 13) /**< PIO mask for PB13 */
#define PIO_PB14                    (_UINT32_(1) << 14) /**< PIO mask for PB14 */
#define PIO_PB15                    (_UINT32_(1) << 15) /**< PIO mask for PB15 */
#define PIO_PB16                    (_UINT32_(1) << 16) /**< PIO mask for PB16 */
#define PIO_PB17                    (_UINT32_(1) << 17) /**< PIO mask for PB17 */
#define PIO_PB18                    (_UINT32_(1) << 18) /**< PIO mask for PB18 */
#define PIO_PB19                    (_UINT32_(1) << 19) /**< PIO mask for PB19 */
#define PIO_PB20                    (_UINT32_(1) << 20) /**< PIO mask for PB20 */
#define PIO_PB22                    (_UINT32_(1) << 22) /**< PIO mask for PB22 */
#define PIO_PB23                    (_UINT32_(1) << 23) /**< PIO mask for PB23 */
#define PIO_PB24                    (_UINT32_(1) << 24) /**< PIO mask for PB24 */
#define PIO_PB25                    (_UINT32_(1) << 25) /**< PIO mask for PB25 */
#define PIO_PB26                    (_UINT32_(1) << 26) /**< PIO mask for PB26 */
#define PIO_PC0                     (_UINT32_(1) << 0) /**< PIO mask for PC0 */
#define PIO_PC1                     (_UINT32_(1) << 1) /**< PIO mask for PC1 */
#define PIO_PC2                     (_UINT32_(1) << 2) /**< PIO mask for PC2 */
#define PIO_PC3                     (_UINT32_(1) << 3) /**< PIO mask for PC3 */
#define PIO_PC5                     (_UINT32_(1) << 5) /**< PIO mask for PC5 */
#define PIO_PC6                     (_UINT32_(1) << 6) /**< PIO mask for PC6 */
#define PIO_PC7                     (_UINT32_(1) << 7) /**< PIO mask for PC7 */
#define PIO_PC8                     (_UINT32_(1) << 8) /**< PIO mask for PC8 */
#define PIO_PC9                     (_UINT32_(1) << 9) /**< PIO mask for PC9 */
#define PIO_PC10                    (_UINT32_(1) << 10) /**< PIO mask for PC10 */
#define PIO_PC11                    (_UINT32_(1) << 11) /**< PIO mask for PC11 */
#define PIO_PC12                    (_UINT32_(1) << 12) /**< PIO mask for PC12 */
#define PIO_PC13                    (_UINT32_(1) << 13) /**< PIO mask for PC13 */
#define PIO_PC14                    (_UINT32_(1) << 14) /**< PIO mask for PC14 */
#define PIO_PC15                    (_UINT32_(1) << 15) /**< PIO mask for PC15 */
#define PIO_PC16                    (_UINT32_(1) << 16) /**< PIO mask for PC16 */
#define PIO_PC17                    (_UINT32_(1) << 17) /**< PIO mask for PC17 */
#define PIO_PC18                    (_UINT32_(1) << 18) /**< PIO mask for PC18 */
#define PIO_PC19                    (_UINT32_(1) << 19) /**< PIO mask for PC19 */
#define PIO_PC20                    (_UINT32_(1) << 20) /**< PIO mask for PC20 */
#define PIO_PC21                    (_UINT32_(1) << 21) /**< PIO mask for PC21 */
#define PIO_PC22                    (_UINT32_(1) << 22) /**< PIO mask for PC22 */
#define PIO_PD0                     (_UINT32_(1) << 0) /**< PIO mask for PD0 */
#define PIO_PD1                     (_UINT32_(1) << 1) /**< PIO mask for PD1 */
#define PIO_PD2                     (_UINT32_(1) << 2) /**< PIO mask for PD2 */
#define PIO_PD3                     (_UINT32_(1) << 3) /**< PIO mask for PD3 */
#define PIO_PD12                    (_UINT32_(1) << 12) /**< PIO mask for PD12 */
#define PIO_PD13                    (_UINT32_(1) << 13) /**< PIO mask for PD13 */
#define PIO_PD16                    (_UINT32_(1) << 16) /**< PIO mask for PD16 */
#define PIO_PD17                    (_UINT32_(1) << 17) /**< PIO mask for PD17 */
#define PIO_PD18                    (_UINT32_(1) << 18) /**< PIO mask for PD18 */
#define PIO_PD19                    (_UINT32_(1) << 19) /**< PIO mask for PD19 */

/* ========== PIO definition for ACC peripheral ========== */
#define PIN_PB0X1_ACC_INN0                         _UINT32_(32) /**< ACC signal: ACC_INN0 on PB0 mux X1 */
#define PIO_PB0X1_ACC_INN0                         (_UINT32_(1) << 0) /**< ACC signal: ACC_INN0 */
#define PIN_PB1X1_ACC_INN1                         _UINT32_(33) /**< ACC signal: ACC_INN1 on PB1 mux X1 */
#define PIO_PB1X1_ACC_INN1                         (_UINT32_(1) << 1) /**< ACC signal: ACC_INN1 */
#define PIN_PA29X1_ACC_INP0                        _UINT32_(29) /**< ACC signal: ACC_INP0 on PA29 mux X1 */
#define PIO_PA29X1_ACC_INP0                        (_UINT32_(1) << 29) /**< ACC signal: ACC_INP0 */
#define PIN_PA30X1_ACC_INP1                        _UINT32_(30) /**< ACC signal: ACC_INP1 on PA30 mux X1 */
#define PIO_PA30X1_ACC_INP1                        (_UINT32_(1) << 30) /**< ACC signal: ACC_INP1 */
#define PIN_PA31X1_ACC_INP2                        _UINT32_(31) /**< ACC signal: ACC_INP2 on PA31 mux X1 */
#define PIO_PA31X1_ACC_INP2                        (_UINT32_(1) << 31) /**< ACC signal: ACC_INP2 */
#define PIN_PA29X1_ACC_AD0                         _UINT32_(29) /**< ACC signal: ACC_AD0 on PA29 mux X1 */
#define PIO_PA29X1_ACC_AD0                         (_UINT32_(1) << 29) /**< ACC signal: ACC_AD0 */
#define PIN_PA30X1_ACC_AD1                         _UINT32_(30) /**< ACC signal: ACC_AD1 on PA30 mux X1 */
#define PIO_PA30X1_ACC_AD1                         (_UINT32_(1) << 30) /**< ACC signal: ACC_AD1 */
#define PIN_PA31X1_ACC_AD2                         _UINT32_(31) /**< ACC signal: ACC_AD2 on PA31 mux X1 */
#define PIO_PA31X1_ACC_AD2                         (_UINT32_(1) << 31) /**< ACC signal: ACC_AD2 */
#define PIN_PB0X1_ACC_AD3                          _UINT32_(32) /**< ACC signal: ACC_AD3 on PB0 mux X1 */
#define PIO_PB0X1_ACC_AD3                          (_UINT32_(1) << 0) /**< ACC signal: ACC_AD3 */
#define PIN_PB1X1_ACC_AD4                          _UINT32_(33) /**< ACC signal: ACC_AD4 on PB1 mux X1 */
#define PIO_PB1X1_ACC_AD4                          (_UINT32_(1) << 1) /**< ACC signal: ACC_AD4 */
#define PIN_PA29X1_ACC_XIN                         _UINT32_(29) /**< ACC signal: ACC_XIN on PA29 mux X1 */
#define PIO_PA29X1_ACC_XIN                         (_UINT32_(1) << 29) /**< ACC signal: ACC_XIN */
#define PIN_PB0X1_ACC_XOUT                         _UINT32_(32) /**< ACC signal: ACC_XOUT on PB0 mux X1 */
#define PIO_PB0X1_ACC_XOUT                         (_UINT32_(1) << 0) /**< ACC signal: ACC_XOUT */
/* ========== PIO definition for ADC peripheral ========== */
#define PIN_PB0X1_ADC_ACC_INN0                     _UINT32_(32) /**< ADC signal: ADC_ACC_INN0 on PB0 mux X1 */
#define PIO_PB0X1_ADC_ACC_INN0                     (_UINT32_(1) << 0) /**< ADC signal: ADC_ACC_INN0 */
#define PIN_PB1X1_ADC_ACC_INN1                     _UINT32_(33) /**< ADC signal: ADC_ACC_INN1 on PB1 mux X1 */
#define PIO_PB1X1_ADC_ACC_INN1                     (_UINT32_(1) << 1) /**< ADC signal: ADC_ACC_INN1 */
#define PIN_PA29X1_ADC_ACC_INP0                    _UINT32_(29) /**< ADC signal: ADC_ACC_INP0 on PA29 mux X1 */
#define PIO_PA29X1_ADC_ACC_INP0                    (_UINT32_(1) << 29) /**< ADC signal: ADC_ACC_INP0 */
#define PIN_PA30X1_ADC_ACC_INP1                    _UINT32_(30) /**< ADC signal: ADC_ACC_INP1 on PA30 mux X1 */
#define PIO_PA30X1_ADC_ACC_INP1                    (_UINT32_(1) << 30) /**< ADC signal: ADC_ACC_INP1 */
#define PIN_PA31X1_ADC_ACC_INP2                    _UINT32_(31) /**< ADC signal: ADC_ACC_INP2 on PA31 mux X1 */
#define PIO_PA31X1_ADC_ACC_INP2                    (_UINT32_(1) << 31) /**< ADC signal: ADC_ACC_INP2 */
#define PIN_PA29X1_ADC_AD0                         _UINT32_(29) /**< ADC signal: ADC_AD0 on PA29 mux X1 */
#define PIO_PA29X1_ADC_AD0                         (_UINT32_(1) << 29) /**< ADC signal: ADC_AD0 */
#define PIN_PA30X1_ADC_AD1                         _UINT32_(30) /**< ADC signal: ADC_AD1 on PA30 mux X1 */
#define PIO_PA30X1_ADC_AD1                         (_UINT32_(1) << 30) /**< ADC signal: ADC_AD1 */
#define PIN_PA31X1_ADC_AD2                         _UINT32_(31) /**< ADC signal: ADC_AD2 on PA31 mux X1 */
#define PIO_PA31X1_ADC_AD2                         (_UINT32_(1) << 31) /**< ADC signal: ADC_AD2 */
#define PIN_PB0X1_ADC_AD3                          _UINT32_(32) /**< ADC signal: ADC_AD3 on PB0 mux X1 */
#define PIO_PB0X1_ADC_AD3                          (_UINT32_(1) << 0) /**< ADC signal: ADC_AD3 */
#define PIN_PB1X1_ADC_AD4                          _UINT32_(33) /**< ADC signal: ADC_AD4 on PB1 mux X1 */
#define PIO_PB1X1_ADC_AD4                          (_UINT32_(1) << 1) /**< ADC signal: ADC_AD4 */
#define PIN_PA29X1_ADC_XIN                         _UINT32_(29) /**< ADC signal: ADC_XIN on PA29 mux X1 */
#define PIO_PA29X1_ADC_XIN                         (_UINT32_(1) << 29) /**< ADC signal: ADC_XIN */
#define PIN_PB0X1_ADC_XOUT                         _UINT32_(32) /**< ADC signal: ADC_XOUT on PB0 mux X1 */
#define PIO_PB0X1_ADC_XOUT                         (_UINT32_(1) << 0) /**< ADC signal: ADC_XOUT */
/* ========== PIO definition for FLEXCOM0 peripheral ========== */
#define PIN_PA4A_FLEXCOM0_IO0                      _UINT32_(4)  /**< FLEXCOM0 signal: FLEXCOM0_IO0 on PA4 mux A */
#define MUX_PA4A_FLEXCOM0_IO0                      _UINT32_(0)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO0 */
#define PIO_PA4A_FLEXCOM0_IO0                      (_UINT32_(1) << 4) /**< FLEXCOM0 signal: FLEXCOM0_IO0 */
#define PIN_PA5A_FLEXCOM0_IO1                      _UINT32_(5)  /**< FLEXCOM0 signal: FLEXCOM0_IO1 on PA5 mux A */
#define MUX_PA5A_FLEXCOM0_IO1                      _UINT32_(0)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO1 */
#define PIO_PA5A_FLEXCOM0_IO1                      (_UINT32_(1) << 5) /**< FLEXCOM0 signal: FLEXCOM0_IO1 */
#define PIN_PA6A_FLEXCOM0_IO2                      _UINT32_(6)  /**< FLEXCOM0 signal: FLEXCOM0_IO2 on PA6 mux A */
#define MUX_PA6A_FLEXCOM0_IO2                      _UINT32_(0)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO2 */
#define PIO_PA6A_FLEXCOM0_IO2                      (_UINT32_(1) << 6) /**< FLEXCOM0 signal: FLEXCOM0_IO2 */
#define PIN_PA7A_FLEXCOM0_IO3                      _UINT32_(7)  /**< FLEXCOM0 signal: FLEXCOM0_IO3 on PA7 mux A */
#define MUX_PA7A_FLEXCOM0_IO3                      _UINT32_(0)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO3 */
#define PIO_PA7A_FLEXCOM0_IO3                      (_UINT32_(1) << 7) /**< FLEXCOM0 signal: FLEXCOM0_IO3 */
#define PIN_PA6B_FLEXCOM0_IO4                      _UINT32_(6)  /**< FLEXCOM0 signal: FLEXCOM0_IO4 on PA6 mux B */
#define MUX_PA6B_FLEXCOM0_IO4                      _UINT32_(1)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO4 */
#define PIO_PA6B_FLEXCOM0_IO4                      (_UINT32_(1) << 6) /**< FLEXCOM0 signal: FLEXCOM0_IO4 */
#define PIN_PA29B_FLEXCOM0_IO4                     _UINT32_(29) /**< FLEXCOM0 signal: FLEXCOM0_IO4 on PA29 mux B */
#define MUX_PA29B_FLEXCOM0_IO4                     _UINT32_(1)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO4 */
#define PIO_PA29B_FLEXCOM0_IO4                     (_UINT32_(1) << 29) /**< FLEXCOM0 signal: FLEXCOM0_IO4 */
/* ========== PIO definition for FLEXCOM1 peripheral ========== */
#define PIN_PA8A_FLEXCOM1_IO0                      _UINT32_(8)  /**< FLEXCOM1 signal: FLEXCOM1_IO0 on PA8 mux A */
#define MUX_PA8A_FLEXCOM1_IO0                      _UINT32_(0)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO0 */
#define PIO_PA8A_FLEXCOM1_IO0                      (_UINT32_(1) << 8) /**< FLEXCOM1 signal: FLEXCOM1_IO0 */
#define PIN_PC2B_FLEXCOM1_IO0                      _UINT32_(66) /**< FLEXCOM1 signal: FLEXCOM1_IO0 on PC2 mux B */
#define MUX_PC2B_FLEXCOM1_IO0                      _UINT32_(1)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO0 */
#define PIO_PC2B_FLEXCOM1_IO0                      (_UINT32_(1) << 2) /**< FLEXCOM1 signal: FLEXCOM1_IO0 */
#define PIN_PA9A_FLEXCOM1_IO1                      _UINT32_(9)  /**< FLEXCOM1 signal: FLEXCOM1_IO1 on PA9 mux A */
#define MUX_PA9A_FLEXCOM1_IO1                      _UINT32_(0)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO1 */
#define PIO_PA9A_FLEXCOM1_IO1                      (_UINT32_(1) << 9) /**< FLEXCOM1 signal: FLEXCOM1_IO1 */
#define PIN_PC3B_FLEXCOM1_IO1                      _UINT32_(67) /**< FLEXCOM1 signal: FLEXCOM1_IO1 on PC3 mux B */
#define MUX_PC3B_FLEXCOM1_IO1                      _UINT32_(1)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO1 */
#define PIO_PC3B_FLEXCOM1_IO1                      (_UINT32_(1) << 3) /**< FLEXCOM1 signal: FLEXCOM1_IO1 */
#define PIN_PA10A_FLEXCOM1_IO2                     _UINT32_(10) /**< FLEXCOM1 signal: FLEXCOM1_IO2 on PA10 mux A */
#define MUX_PA10A_FLEXCOM1_IO2                     _UINT32_(0)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO2 */
#define PIO_PA10A_FLEXCOM1_IO2                     (_UINT32_(1) << 10) /**< FLEXCOM1 signal: FLEXCOM1_IO2 */
#define PIN_PA11A_FLEXCOM1_IO3                     _UINT32_(11) /**< FLEXCOM1 signal: FLEXCOM1_IO3 on PA11 mux A */
#define MUX_PA11A_FLEXCOM1_IO3                     _UINT32_(0)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO3 */
#define PIO_PA11A_FLEXCOM1_IO3                     (_UINT32_(1) << 11) /**< FLEXCOM1 signal: FLEXCOM1_IO3 */
#define PIN_PA10B_FLEXCOM1_IO4                     _UINT32_(10) /**< FLEXCOM1 signal: FLEXCOM1_IO4 on PA10 mux B */
#define MUX_PA10B_FLEXCOM1_IO4                     _UINT32_(1)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO4 */
#define PIO_PA10B_FLEXCOM1_IO4                     (_UINT32_(1) << 10) /**< FLEXCOM1 signal: FLEXCOM1_IO4 */
#define PIN_PA29C_FLEXCOM1_IO4                     _UINT32_(29) /**< FLEXCOM1 signal: FLEXCOM1_IO4 on PA29 mux C */
#define MUX_PA29C_FLEXCOM1_IO4                     _UINT32_(2)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO4 */
#define PIO_PA29C_FLEXCOM1_IO4                     (_UINT32_(1) << 29) /**< FLEXCOM1 signal: FLEXCOM1_IO4 */
/* ========== PIO definition for FLEXCOM2 peripheral ========== */
#define PIN_PA12A_FLEXCOM2_IO0                     _UINT32_(12) /**< FLEXCOM2 signal: FLEXCOM2_IO0 on PA12 mux A */
#define MUX_PA12A_FLEXCOM2_IO0                     _UINT32_(0)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO0 */
#define PIO_PA12A_FLEXCOM2_IO0                     (_UINT32_(1) << 12) /**< FLEXCOM2 signal: FLEXCOM2_IO0 */
#define PIN_PA13A_FLEXCOM2_IO1                     _UINT32_(13) /**< FLEXCOM2 signal: FLEXCOM2_IO1 on PA13 mux A */
#define MUX_PA13A_FLEXCOM2_IO1                     _UINT32_(0)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO1 */
#define PIO_PA13A_FLEXCOM2_IO1                     (_UINT32_(1) << 13) /**< FLEXCOM2 signal: FLEXCOM2_IO1 */
#define PIN_PA14A_FLEXCOM2_IO2                     _UINT32_(14) /**< FLEXCOM2 signal: FLEXCOM2_IO2 on PA14 mux A */
#define MUX_PA14A_FLEXCOM2_IO2                     _UINT32_(0)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO2 */
#define PIO_PA14A_FLEXCOM2_IO2                     (_UINT32_(1) << 14) /**< FLEXCOM2 signal: FLEXCOM2_IO2 */
#define PIN_PA15A_FLEXCOM2_IO3                     _UINT32_(15) /**< FLEXCOM2 signal: FLEXCOM2_IO3 on PA15 mux A */
#define MUX_PA15A_FLEXCOM2_IO3                     _UINT32_(0)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO3 */
#define PIO_PA15A_FLEXCOM2_IO3                     (_UINT32_(1) << 15) /**< FLEXCOM2 signal: FLEXCOM2_IO3 */
#define PIN_PA14B_FLEXCOM2_IO4                     _UINT32_(14) /**< FLEXCOM2 signal: FLEXCOM2_IO4 on PA14 mux B */
#define MUX_PA14B_FLEXCOM2_IO4                     _UINT32_(1)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO4 */
#define PIO_PA14B_FLEXCOM2_IO4                     (_UINT32_(1) << 14) /**< FLEXCOM2 signal: FLEXCOM2_IO4 */
#define PIN_PA29D_FLEXCOM2_IO4                     _UINT32_(29) /**< FLEXCOM2 signal: FLEXCOM2_IO4 on PA29 mux D */
#define MUX_PA29D_FLEXCOM2_IO4                     _UINT32_(3)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO4 */
#define PIO_PA29D_FLEXCOM2_IO4                     (_UINT32_(1) << 29) /**< FLEXCOM2 signal: FLEXCOM2_IO4 */
/* ========== PIO definition for FLEXCOM3 peripheral ========== */
#define PIN_PA16A_FLEXCOM3_IO0                     _UINT32_(16) /**< FLEXCOM3 signal: FLEXCOM3_IO0 on PA16 mux A */
#define MUX_PA16A_FLEXCOM3_IO0                     _UINT32_(0)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO0 */
#define PIO_PA16A_FLEXCOM3_IO0                     (_UINT32_(1) << 16) /**< FLEXCOM3 signal: FLEXCOM3_IO0 */
#define PIN_PB9B_FLEXCOM3_IO0                      _UINT32_(41) /**< FLEXCOM3 signal: FLEXCOM3_IO0 on PB9 mux B */
#define MUX_PB9B_FLEXCOM3_IO0                      _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO0 */
#define PIO_PB9B_FLEXCOM3_IO0                      (_UINT32_(1) << 9) /**< FLEXCOM3 signal: FLEXCOM3_IO0 */
#define PIN_PA17A_FLEXCOM3_IO1                     _UINT32_(17) /**< FLEXCOM3 signal: FLEXCOM3_IO1 on PA17 mux A */
#define MUX_PA17A_FLEXCOM3_IO1                     _UINT32_(0)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO1 */
#define PIO_PA17A_FLEXCOM3_IO1                     (_UINT32_(1) << 17) /**< FLEXCOM3 signal: FLEXCOM3_IO1 */
#define PIN_PB10B_FLEXCOM3_IO1                     _UINT32_(42) /**< FLEXCOM3 signal: FLEXCOM3_IO1 on PB10 mux B */
#define MUX_PB10B_FLEXCOM3_IO1                     _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO1 */
#define PIO_PB10B_FLEXCOM3_IO1                     (_UINT32_(1) << 10) /**< FLEXCOM3 signal: FLEXCOM3_IO1 */
#define PIN_PA18A_FLEXCOM3_IO2                     _UINT32_(18) /**< FLEXCOM3 signal: FLEXCOM3_IO2 on PA18 mux A */
#define MUX_PA18A_FLEXCOM3_IO2                     _UINT32_(0)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO2 */
#define PIO_PA18A_FLEXCOM3_IO2                     (_UINT32_(1) << 18) /**< FLEXCOM3 signal: FLEXCOM3_IO2 */
#define PIN_PB11B_FLEXCOM3_IO2                     _UINT32_(43) /**< FLEXCOM3 signal: FLEXCOM3_IO2 on PB11 mux B */
#define MUX_PB11B_FLEXCOM3_IO2                     _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO2 */
#define PIO_PB11B_FLEXCOM3_IO2                     (_UINT32_(1) << 11) /**< FLEXCOM3 signal: FLEXCOM3_IO2 */
#define PIN_PA19A_FLEXCOM3_IO3                     _UINT32_(19) /**< FLEXCOM3 signal: FLEXCOM3_IO3 on PA19 mux A */
#define MUX_PA19A_FLEXCOM3_IO3                     _UINT32_(0)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO3 */
#define PIO_PA19A_FLEXCOM3_IO3                     (_UINT32_(1) << 19) /**< FLEXCOM3 signal: FLEXCOM3_IO3 */
#define PIN_PB12B_FLEXCOM3_IO3                     _UINT32_(44) /**< FLEXCOM3 signal: FLEXCOM3_IO3 on PB12 mux B */
#define MUX_PB12B_FLEXCOM3_IO3                     _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO3 */
#define PIO_PB12B_FLEXCOM3_IO3                     (_UINT32_(1) << 12) /**< FLEXCOM3 signal: FLEXCOM3_IO3 */
#define PIN_PA18B_FLEXCOM3_IO4                     _UINT32_(18) /**< FLEXCOM3 signal: FLEXCOM3_IO4 on PA18 mux B */
#define MUX_PA18B_FLEXCOM3_IO4                     _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO4 */
#define PIO_PA18B_FLEXCOM3_IO4                     (_UINT32_(1) << 18) /**< FLEXCOM3 signal: FLEXCOM3_IO4 */
#define PIN_PB0B_FLEXCOM3_IO4                      _UINT32_(32) /**< FLEXCOM3 signal: FLEXCOM3_IO4 on PB0 mux B */
#define MUX_PB0B_FLEXCOM3_IO4                      _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO4 */
#define PIO_PB0B_FLEXCOM3_IO4                      (_UINT32_(1) << 0) /**< FLEXCOM3 signal: FLEXCOM3_IO4 */
#define PIN_PB11C_FLEXCOM3_IO4                     _UINT32_(43) /**< FLEXCOM3 signal: FLEXCOM3_IO4 on PB11 mux C */
#define MUX_PB11C_FLEXCOM3_IO4                     _UINT32_(2)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO4 */
#define PIO_PB11C_FLEXCOM3_IO4                     (_UINT32_(1) << 11) /**< FLEXCOM3 signal: FLEXCOM3_IO4 */
/* ========== PIO definition for FLEXCOM4 peripheral ========== */
#define PIN_PB5B_FLEXCOM4_IO0                      _UINT32_(37) /**< FLEXCOM4 signal: FLEXCOM4_IO0 on PB5 mux B */
#define MUX_PB5B_FLEXCOM4_IO0                      _UINT32_(1)  /**< FLEXCOM4 signal line function value: FLEXCOM4_IO0 */
#define PIO_PB5B_FLEXCOM4_IO0                      (_UINT32_(1) << 5) /**< FLEXCOM4 signal: FLEXCOM4_IO0 */
#define PIN_PB24B_FLEXCOM4_IO0                     _UINT32_(56) /**< FLEXCOM4 signal: FLEXCOM4_IO0 on PB24 mux B */
#define MUX_PB24B_FLEXCOM4_IO0                     _UINT32_(1)  /**< FLEXCOM4 signal line function value: FLEXCOM4_IO0 */
#define PIO_PB24B_FLEXCOM4_IO0                     (_UINT32_(1) << 24) /**< FLEXCOM4 signal: FLEXCOM4_IO0 */
#define PIN_PB6B_FLEXCOM4_IO1                      _UINT32_(38) /**< FLEXCOM4 signal: FLEXCOM4_IO1 on PB6 mux B */
#define MUX_PB6B_FLEXCOM4_IO1                      _UINT32_(1)  /**< FLEXCOM4 signal line function value: FLEXCOM4_IO1 */
#define PIO_PB6B_FLEXCOM4_IO1                      (_UINT32_(1) << 6) /**< FLEXCOM4 signal: FLEXCOM4_IO1 */
#define PIN_PB25B_FLEXCOM4_IO1                     _UINT32_(57) /**< FLEXCOM4 signal: FLEXCOM4_IO1 on PB25 mux B */
#define MUX_PB25B_FLEXCOM4_IO1                     _UINT32_(1)  /**< FLEXCOM4 signal line function value: FLEXCOM4_IO1 */
#define PIO_PB25B_FLEXCOM4_IO1                     (_UINT32_(1) << 25) /**< FLEXCOM4 signal: FLEXCOM4_IO1 */
#define PIN_PB7B_FLEXCOM4_IO2                      _UINT32_(39) /**< FLEXCOM4 signal: FLEXCOM4_IO2 on PB7 mux B */
#define MUX_PB7B_FLEXCOM4_IO2                      _UINT32_(1)  /**< FLEXCOM4 signal line function value: FLEXCOM4_IO2 */
#define PIO_PB7B_FLEXCOM4_IO2                      (_UINT32_(1) << 7) /**< FLEXCOM4 signal: FLEXCOM4_IO2 */
#define PIN_PB26B_FLEXCOM4_IO2                     _UINT32_(58) /**< FLEXCOM4 signal: FLEXCOM4_IO2 on PB26 mux B */
#define MUX_PB26B_FLEXCOM4_IO2                     _UINT32_(1)  /**< FLEXCOM4 signal line function value: FLEXCOM4_IO2 */
#define PIO_PB26B_FLEXCOM4_IO2                     (_UINT32_(1) << 26) /**< FLEXCOM4 signal: FLEXCOM4_IO2 */
#define PIN_PB8B_FLEXCOM4_IO3                      _UINT32_(40) /**< FLEXCOM4 signal: FLEXCOM4_IO3 on PB8 mux B */
#define MUX_PB8B_FLEXCOM4_IO3                      _UINT32_(1)  /**< FLEXCOM4 signal line function value: FLEXCOM4_IO3 */
#define PIO_PB8B_FLEXCOM4_IO3                      (_UINT32_(1) << 8) /**< FLEXCOM4 signal: FLEXCOM4_IO3 */
#define PIN_PC0B_FLEXCOM4_IO3                      _UINT32_(64) /**< FLEXCOM4 signal: FLEXCOM4_IO3 on PC0 mux B */
#define MUX_PC0B_FLEXCOM4_IO3                      _UINT32_(1)  /**< FLEXCOM4 signal line function value: FLEXCOM4_IO3 */
#define PIO_PC0B_FLEXCOM4_IO3                      (_UINT32_(1) << 0) /**< FLEXCOM4 signal: FLEXCOM4_IO3 */
#define PIN_PB7C_FLEXCOM4_IO4                      _UINT32_(39) /**< FLEXCOM4 signal: FLEXCOM4_IO4 on PB7 mux C */
#define MUX_PB7C_FLEXCOM4_IO4                      _UINT32_(2)  /**< FLEXCOM4 signal line function value: FLEXCOM4_IO4 */
#define PIO_PB7C_FLEXCOM4_IO4                      (_UINT32_(1) << 7) /**< FLEXCOM4 signal: FLEXCOM4_IO4 */
#define PIN_PB26C_FLEXCOM4_IO4                     _UINT32_(58) /**< FLEXCOM4 signal: FLEXCOM4_IO4 on PB26 mux C */
#define MUX_PB26C_FLEXCOM4_IO4                     _UINT32_(2)  /**< FLEXCOM4 signal line function value: FLEXCOM4_IO4 */
#define PIO_PB26C_FLEXCOM4_IO4                     (_UINT32_(1) << 26) /**< FLEXCOM4 signal: FLEXCOM4_IO4 */
#define PIN_PC1B_FLEXCOM4_IO4                      _UINT32_(65) /**< FLEXCOM4 signal: FLEXCOM4_IO4 on PC1 mux B */
#define MUX_PC1B_FLEXCOM4_IO4                      _UINT32_(1)  /**< FLEXCOM4 signal line function value: FLEXCOM4_IO4 */
#define PIO_PC1B_FLEXCOM4_IO4                      (_UINT32_(1) << 1) /**< FLEXCOM4 signal: FLEXCOM4_IO4 */
/* ========== PIO definition for FLEXCOM5 peripheral ========== */
#define PIN_PA24B_FLEXCOM5_IO0                     _UINT32_(24) /**< FLEXCOM5 signal: FLEXCOM5_IO0 on PA24 mux B */
#define MUX_PA24B_FLEXCOM5_IO0                     _UINT32_(1)  /**< FLEXCOM5 signal line function value: FLEXCOM5_IO0 */
#define PIO_PA24B_FLEXCOM5_IO0                     (_UINT32_(1) << 24) /**< FLEXCOM5 signal: FLEXCOM5_IO0 */
#define PIN_PB20B_FLEXCOM5_IO0                     _UINT32_(52) /**< FLEXCOM5 signal: FLEXCOM5_IO0 on PB20 mux B */
#define MUX_PB20B_FLEXCOM5_IO0                     _UINT32_(1)  /**< FLEXCOM5 signal line function value: FLEXCOM5_IO0 */
#define PIO_PB20B_FLEXCOM5_IO0                     (_UINT32_(1) << 20) /**< FLEXCOM5 signal: FLEXCOM5_IO0 */
#define PIN_PC9A_FLEXCOM5_IO0                      _UINT32_(73) /**< FLEXCOM5 signal: FLEXCOM5_IO0 on PC9 mux A */
#define MUX_PC9A_FLEXCOM5_IO0                      _UINT32_(0)  /**< FLEXCOM5 signal line function value: FLEXCOM5_IO0 */
#define PIO_PC9A_FLEXCOM5_IO0                      (_UINT32_(1) << 9) /**< FLEXCOM5 signal: FLEXCOM5_IO0 */
#define PIN_PA23B_FLEXCOM5_IO1                     _UINT32_(23) /**< FLEXCOM5 signal: FLEXCOM5_IO1 on PA23 mux B */
#define MUX_PA23B_FLEXCOM5_IO1                     _UINT32_(1)  /**< FLEXCOM5 signal line function value: FLEXCOM5_IO1 */
#define PIO_PA23B_FLEXCOM5_IO1                     (_UINT32_(1) << 23) /**< FLEXCOM5 signal: FLEXCOM5_IO1 */
#define PIN_PC8A_FLEXCOM5_IO1                      _UINT32_(72) /**< FLEXCOM5 signal: FLEXCOM5_IO1 on PC8 mux A */
#define MUX_PC8A_FLEXCOM5_IO1                      _UINT32_(0)  /**< FLEXCOM5 signal line function value: FLEXCOM5_IO1 */
#define PIO_PC8A_FLEXCOM5_IO1                      (_UINT32_(1) << 8) /**< FLEXCOM5 signal: FLEXCOM5_IO1 */
#define PIN_PA22B_FLEXCOM5_IO2                     _UINT32_(22) /**< FLEXCOM5 signal: FLEXCOM5_IO2 on PA22 mux B */
#define MUX_PA22B_FLEXCOM5_IO2                     _UINT32_(1)  /**< FLEXCOM5 signal line function value: FLEXCOM5_IO2 */
#define PIO_PA22B_FLEXCOM5_IO2                     (_UINT32_(1) << 22) /**< FLEXCOM5 signal: FLEXCOM5_IO2 */
#define PIN_PB22B_FLEXCOM5_IO2                     _UINT32_(54) /**< FLEXCOM5 signal: FLEXCOM5_IO2 on PB22 mux B */
#define MUX_PB22B_FLEXCOM5_IO2                     _UINT32_(1)  /**< FLEXCOM5 signal line function value: FLEXCOM5_IO2 */
#define PIO_PB22B_FLEXCOM5_IO2                     (_UINT32_(1) << 22) /**< FLEXCOM5 signal: FLEXCOM5_IO2 */
#define PIN_PC7A_FLEXCOM5_IO2                      _UINT32_(71) /**< FLEXCOM5 signal: FLEXCOM5_IO2 on PC7 mux A */
#define MUX_PC7A_FLEXCOM5_IO2                      _UINT32_(0)  /**< FLEXCOM5 signal line function value: FLEXCOM5_IO2 */
#define PIO_PC7A_FLEXCOM5_IO2                      (_UINT32_(1) << 7) /**< FLEXCOM5 signal: FLEXCOM5_IO2 */
#define PIN_PA21B_FLEXCOM5_IO3                     _UINT32_(21) /**< FLEXCOM5 signal: FLEXCOM5_IO3 on PA21 mux B */
#define MUX_PA21B_FLEXCOM5_IO3                     _UINT32_(1)  /**< FLEXCOM5 signal line function value: FLEXCOM5_IO3 */
#define PIO_PA21B_FLEXCOM5_IO3                     (_UINT32_(1) << 21) /**< FLEXCOM5 signal: FLEXCOM5_IO3 */
#define PIN_PB23B_FLEXCOM5_IO3                     _UINT32_(55) /**< FLEXCOM5 signal: FLEXCOM5_IO3 on PB23 mux B */
#define MUX_PB23B_FLEXCOM5_IO3                     _UINT32_(1)  /**< FLEXCOM5 signal line function value: FLEXCOM5_IO3 */
#define PIO_PB23B_FLEXCOM5_IO3                     (_UINT32_(1) << 23) /**< FLEXCOM5 signal: FLEXCOM5_IO3 */
#define PIN_PC6A_FLEXCOM5_IO3                      _UINT32_(70) /**< FLEXCOM5 signal: FLEXCOM5_IO3 on PC6 mux A */
#define MUX_PC6A_FLEXCOM5_IO3                      _UINT32_(0)  /**< FLEXCOM5 signal line function value: FLEXCOM5_IO3 */
#define PIO_PC6A_FLEXCOM5_IO3                      (_UINT32_(1) << 6) /**< FLEXCOM5 signal: FLEXCOM5_IO3 */
#define PIN_PA22C_FLEXCOM5_IO4                     _UINT32_(22) /**< FLEXCOM5 signal: FLEXCOM5_IO4 on PA22 mux C */
#define MUX_PA22C_FLEXCOM5_IO4                     _UINT32_(2)  /**< FLEXCOM5 signal line function value: FLEXCOM5_IO4 */
#define PIO_PA22C_FLEXCOM5_IO4                     (_UINT32_(1) << 22) /**< FLEXCOM5 signal: FLEXCOM5_IO4 */
#define PIN_PB15B_FLEXCOM5_IO4                     _UINT32_(47) /**< FLEXCOM5 signal: FLEXCOM5_IO4 on PB15 mux B */
#define MUX_PB15B_FLEXCOM5_IO4                     _UINT32_(1)  /**< FLEXCOM5 signal line function value: FLEXCOM5_IO4 */
#define PIO_PB15B_FLEXCOM5_IO4                     (_UINT32_(1) << 15) /**< FLEXCOM5 signal: FLEXCOM5_IO4 */
#define PIN_PB22C_FLEXCOM5_IO4                     _UINT32_(54) /**< FLEXCOM5 signal: FLEXCOM5_IO4 on PB22 mux C */
#define MUX_PB22C_FLEXCOM5_IO4                     _UINT32_(2)  /**< FLEXCOM5 signal line function value: FLEXCOM5_IO4 */
#define PIO_PB22C_FLEXCOM5_IO4                     (_UINT32_(1) << 22) /**< FLEXCOM5 signal: FLEXCOM5_IO4 */
#define PIN_PC7C_FLEXCOM5_IO4                      _UINT32_(71) /**< FLEXCOM5 signal: FLEXCOM5_IO4 on PC7 mux C */
#define MUX_PC7C_FLEXCOM5_IO4                      _UINT32_(2)  /**< FLEXCOM5 signal line function value: FLEXCOM5_IO4 */
#define PIO_PC7C_FLEXCOM5_IO4                      (_UINT32_(1) << 7) /**< FLEXCOM5 signal: FLEXCOM5_IO4 */
/* ========== PIO definition for FLEXCOM6 peripheral ========== */
#define PIN_PA25B_FLEXCOM6_IO0                     _UINT32_(25) /**< FLEXCOM6 signal: FLEXCOM6_IO0 on PA25 mux B */
#define MUX_PA25B_FLEXCOM6_IO0                     _UINT32_(1)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO0 */
#define PIO_PA25B_FLEXCOM6_IO0                     (_UINT32_(1) << 25) /**< FLEXCOM6 signal: FLEXCOM6_IO0 */
#define PIN_PC6B_FLEXCOM6_IO0                      _UINT32_(70) /**< FLEXCOM6 signal: FLEXCOM6_IO0 on PC6 mux B */
#define MUX_PC6B_FLEXCOM6_IO0                      _UINT32_(1)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO0 */
#define PIO_PC6B_FLEXCOM6_IO0                      (_UINT32_(1) << 6) /**< FLEXCOM6 signal: FLEXCOM6_IO0 */
#define PIN_PC16A_FLEXCOM6_IO0                     _UINT32_(80) /**< FLEXCOM6 signal: FLEXCOM6_IO0 on PC16 mux A */
#define MUX_PC16A_FLEXCOM6_IO0                     _UINT32_(0)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO0 */
#define PIO_PC16A_FLEXCOM6_IO0                     (_UINT32_(1) << 16) /**< FLEXCOM6 signal: FLEXCOM6_IO0 */
#define PIN_PA26B_FLEXCOM6_IO1                     _UINT32_(26) /**< FLEXCOM6 signal: FLEXCOM6_IO1 on PA26 mux B */
#define MUX_PA26B_FLEXCOM6_IO1                     _UINT32_(1)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO1 */
#define PIO_PA26B_FLEXCOM6_IO1                     (_UINT32_(1) << 26) /**< FLEXCOM6 signal: FLEXCOM6_IO1 */
#define PIN_PC7B_FLEXCOM6_IO1                      _UINT32_(71) /**< FLEXCOM6 signal: FLEXCOM6_IO1 on PC7 mux B */
#define MUX_PC7B_FLEXCOM6_IO1                      _UINT32_(1)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO1 */
#define PIO_PC7B_FLEXCOM6_IO1                      (_UINT32_(1) << 7) /**< FLEXCOM6 signal: FLEXCOM6_IO1 */
#define PIN_PC17A_FLEXCOM6_IO1                     _UINT32_(81) /**< FLEXCOM6 signal: FLEXCOM6_IO1 on PC17 mux A */
#define MUX_PC17A_FLEXCOM6_IO1                     _UINT32_(0)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO1 */
#define PIO_PC17A_FLEXCOM6_IO1                     (_UINT32_(1) << 17) /**< FLEXCOM6 signal: FLEXCOM6_IO1 */
#define PIN_PA27B_FLEXCOM6_IO2                     _UINT32_(27) /**< FLEXCOM6 signal: FLEXCOM6_IO2 on PA27 mux B */
#define MUX_PA27B_FLEXCOM6_IO2                     _UINT32_(1)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO2 */
#define PIO_PA27B_FLEXCOM6_IO2                     (_UINT32_(1) << 27) /**< FLEXCOM6 signal: FLEXCOM6_IO2 */
#define PIN_PC18A_FLEXCOM6_IO2                     _UINT32_(82) /**< FLEXCOM6 signal: FLEXCOM6_IO2 on PC18 mux A */
#define MUX_PC18A_FLEXCOM6_IO2                     _UINT32_(0)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO2 */
#define PIO_PC18A_FLEXCOM6_IO2                     (_UINT32_(1) << 18) /**< FLEXCOM6 signal: FLEXCOM6_IO2 */
#define PIN_PA28B_FLEXCOM6_IO3                     _UINT32_(28) /**< FLEXCOM6 signal: FLEXCOM6_IO3 on PA28 mux B */
#define MUX_PA28B_FLEXCOM6_IO3                     _UINT32_(1)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO3 */
#define PIO_PA28B_FLEXCOM6_IO3                     (_UINT32_(1) << 28) /**< FLEXCOM6 signal: FLEXCOM6_IO3 */
#define PIN_PC19A_FLEXCOM6_IO3                     _UINT32_(83) /**< FLEXCOM6 signal: FLEXCOM6_IO3 on PC19 mux A */
#define MUX_PC19A_FLEXCOM6_IO3                     _UINT32_(0)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO3 */
#define PIO_PC19A_FLEXCOM6_IO3                     (_UINT32_(1) << 19) /**< FLEXCOM6 signal: FLEXCOM6_IO3 */
#define PIN_PA27C_FLEXCOM6_IO4                     _UINT32_(27) /**< FLEXCOM6 signal: FLEXCOM6_IO4 on PA27 mux C */
#define MUX_PA27C_FLEXCOM6_IO4                     _UINT32_(2)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO4 */
#define PIO_PA27C_FLEXCOM6_IO4                     (_UINT32_(1) << 27) /**< FLEXCOM6 signal: FLEXCOM6_IO4 */
#define PIN_PB16B_FLEXCOM6_IO4                     _UINT32_(48) /**< FLEXCOM6 signal: FLEXCOM6_IO4 on PB16 mux B */
#define MUX_PB16B_FLEXCOM6_IO4                     _UINT32_(1)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO4 */
#define PIO_PB16B_FLEXCOM6_IO4                     (_UINT32_(1) << 16) /**< FLEXCOM6 signal: FLEXCOM6_IO4 */
#define PIN_PC18B_FLEXCOM6_IO4                     _UINT32_(82) /**< FLEXCOM6 signal: FLEXCOM6_IO4 on PC18 mux B */
#define MUX_PC18B_FLEXCOM6_IO4                     _UINT32_(1)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO4 */
#define PIO_PC18B_FLEXCOM6_IO4                     (_UINT32_(1) << 18) /**< FLEXCOM6 signal: FLEXCOM6_IO4 */
/* ========== PIO definition for FLEXCOM7 peripheral ========== */
#define PIN_PB4B_FLEXCOM7_IO0                      _UINT32_(36) /**< FLEXCOM7 signal: FLEXCOM7_IO0 on PB4 mux B */
#define MUX_PB4B_FLEXCOM7_IO0                      _UINT32_(1)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO0 */
#define PIO_PB4B_FLEXCOM7_IO0                      (_UINT32_(1) << 4) /**< FLEXCOM7 signal: FLEXCOM7_IO0 */
#define PIN_PC13B_FLEXCOM7_IO0                     _UINT32_(77) /**< FLEXCOM7 signal: FLEXCOM7_IO0 on PC13 mux B */
#define MUX_PC13B_FLEXCOM7_IO0                     _UINT32_(1)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO0 */
#define PIO_PC13B_FLEXCOM7_IO0                     (_UINT32_(1) << 13) /**< FLEXCOM7 signal: FLEXCOM7_IO0 */
#define PIN_PC21A_FLEXCOM7_IO0                     _UINT32_(85) /**< FLEXCOM7 signal: FLEXCOM7_IO0 on PC21 mux A */
#define MUX_PC21A_FLEXCOM7_IO0                     _UINT32_(0)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO0 */
#define PIO_PC21A_FLEXCOM7_IO0                     (_UINT32_(1) << 21) /**< FLEXCOM7 signal: FLEXCOM7_IO0 */
#define PIN_PB3B_FLEXCOM7_IO1                      _UINT32_(35) /**< FLEXCOM7 signal: FLEXCOM7_IO1 on PB3 mux B */
#define MUX_PB3B_FLEXCOM7_IO1                      _UINT32_(1)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO1 */
#define PIO_PB3B_FLEXCOM7_IO1                      (_UINT32_(1) << 3) /**< FLEXCOM7 signal: FLEXCOM7_IO1 */
#define PIN_PC12B_FLEXCOM7_IO1                     _UINT32_(76) /**< FLEXCOM7 signal: FLEXCOM7_IO1 on PC12 mux B */
#define MUX_PC12B_FLEXCOM7_IO1                     _UINT32_(1)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO1 */
#define PIO_PC12B_FLEXCOM7_IO1                     (_UINT32_(1) << 12) /**< FLEXCOM7 signal: FLEXCOM7_IO1 */
#define PIN_PC20A_FLEXCOM7_IO1                     _UINT32_(84) /**< FLEXCOM7 signal: FLEXCOM7_IO1 on PC20 mux A */
#define MUX_PC20A_FLEXCOM7_IO1                     _UINT32_(0)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO1 */
#define PIO_PC20A_FLEXCOM7_IO1                     (_UINT32_(1) << 20) /**< FLEXCOM7 signal: FLEXCOM7_IO1 */
#define PIN_PB2B_FLEXCOM7_IO2                      _UINT32_(34) /**< FLEXCOM7 signal: FLEXCOM7_IO2 on PB2 mux B */
#define MUX_PB2B_FLEXCOM7_IO2                      _UINT32_(1)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO2 */
#define PIO_PB2B_FLEXCOM7_IO2                      (_UINT32_(1) << 2) /**< FLEXCOM7 signal: FLEXCOM7_IO2 */
#define PIN_PC15B_FLEXCOM7_IO2                     _UINT32_(79) /**< FLEXCOM7 signal: FLEXCOM7_IO2 on PC15 mux B */
#define MUX_PC15B_FLEXCOM7_IO2                     _UINT32_(1)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO2 */
#define PIO_PC15B_FLEXCOM7_IO2                     (_UINT32_(1) << 15) /**< FLEXCOM7 signal: FLEXCOM7_IO2 */
#define PIN_PB1B_FLEXCOM7_IO3                      _UINT32_(33) /**< FLEXCOM7 signal: FLEXCOM7_IO3 on PB1 mux B */
#define MUX_PB1B_FLEXCOM7_IO3                      _UINT32_(1)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO3 */
#define PIO_PB1B_FLEXCOM7_IO3                      (_UINT32_(1) << 1) /**< FLEXCOM7 signal: FLEXCOM7_IO3 */
#define PIN_PC14B_FLEXCOM7_IO3                     _UINT32_(78) /**< FLEXCOM7 signal: FLEXCOM7_IO3 on PC14 mux B */
#define MUX_PC14B_FLEXCOM7_IO3                     _UINT32_(1)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO3 */
#define PIO_PC14B_FLEXCOM7_IO3                     (_UINT32_(1) << 14) /**< FLEXCOM7 signal: FLEXCOM7_IO3 */
#define PIN_PB2C_FLEXCOM7_IO4                      _UINT32_(34) /**< FLEXCOM7 signal: FLEXCOM7_IO4 on PB2 mux C */
#define MUX_PB2C_FLEXCOM7_IO4                      _UINT32_(2)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO4 */
#define PIO_PB2C_FLEXCOM7_IO4                      (_UINT32_(1) << 2) /**< FLEXCOM7 signal: FLEXCOM7_IO4 */
#define PIN_PC11B_FLEXCOM7_IO4                     _UINT32_(75) /**< FLEXCOM7 signal: FLEXCOM7_IO4 on PC11 mux B */
#define MUX_PC11B_FLEXCOM7_IO4                     _UINT32_(1)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO4 */
#define PIO_PC11B_FLEXCOM7_IO4                     (_UINT32_(1) << 11) /**< FLEXCOM7 signal: FLEXCOM7_IO4 */
/* ========== PIO definition for PMC peripheral ========== */
#define PIN_PA20A_PMC_PCK0                         _UINT32_(20) /**< PMC signal: PMC_PCK0 on PA20 mux A */
#define MUX_PA20A_PMC_PCK0                         _UINT32_(0)  /**< PMC signal line function value: PMC_PCK0 */
#define PIO_PA20A_PMC_PCK0                         (_UINT32_(1) << 20) /**< PMC signal: PMC_PCK0 */
#define PIN_PC22A_PMC_PCK0                         _UINT32_(86) /**< PMC signal: PMC_PCK0 on PC22 mux A */
#define MUX_PC22A_PMC_PCK0                         _UINT32_(0)  /**< PMC signal line function value: PMC_PCK0 */
#define PIO_PC22A_PMC_PCK0                         (_UINT32_(1) << 22) /**< PMC signal: PMC_PCK0 */
#define PIN_PA2A_PMC_PCK1                          _UINT32_(2)  /**< PMC signal: PMC_PCK1 on PA2 mux A */
#define MUX_PA2A_PMC_PCK1                          _UINT32_(0)  /**< PMC signal line function value: PMC_PCK1 */
#define PIO_PA2A_PMC_PCK1                          (_UINT32_(1) << 2) /**< PMC signal: PMC_PCK1 */
#define PIN_PB1C_PMC_PCK1                          _UINT32_(33) /**< PMC signal: PMC_PCK1 on PB1 mux C */
#define MUX_PB1C_PMC_PCK1                          _UINT32_(2)  /**< PMC signal line function value: PMC_PCK1 */
#define PIO_PB1C_PMC_PCK1                          (_UINT32_(1) << 1) /**< PMC signal: PMC_PCK1 */
#define PIN_PC5A_PMC_PCK2                          _UINT32_(69) /**< PMC signal: PMC_PCK2 on PC5 mux A */
#define MUX_PC5A_PMC_PCK2                          _UINT32_(0)  /**< PMC signal line function value: PMC_PCK2 */
#define PIO_PC5A_PMC_PCK2                          (_UINT32_(1) << 5) /**< PMC signal: PMC_PCK2 */
/* ========== PIO definition for PWM peripheral ========== */
#define PIN_PD3C_PWM_PWMH0                         _UINT32_(99) /**< PWM signal: PWM_PWMH0 on PD3 mux C */
#define MUX_PD3C_PWM_PWMH0                         _UINT32_(2)  /**< PWM signal line function value: PWM_PWMH0 */
#define PIO_PD3C_PWM_PWMH0                         (_UINT32_(1) << 3) /**< PWM signal: PWM_PWMH0 */
#define PIN_PD16B_PWM_PWMH2                        _UINT32_(112) /**< PWM signal: PWM_PWMH2 on PD16 mux B */
#define MUX_PD16B_PWM_PWMH2                        _UINT32_(1)  /**< PWM signal line function value: PWM_PWMH2 */
#define PIO_PD16B_PWM_PWMH2                        (_UINT32_(1) << 16) /**< PWM signal: PWM_PWMH2 */
#define PIN_PD17A_PWM_PWML0                        _UINT32_(113) /**< PWM signal: PWM_PWML0 on PD17 mux A */
#define MUX_PD17A_PWM_PWML0                        _UINT32_(0)  /**< PWM signal line function value: PWM_PWML0 */
#define PIO_PD17A_PWM_PWML0                        (_UINT32_(1) << 17) /**< PWM signal: PWM_PWML0 */
#define PIN_PD18A_PWM_PWML1                        _UINT32_(114) /**< PWM signal: PWM_PWML1 on PD18 mux A */
#define MUX_PD18A_PWM_PWML1                        _UINT32_(0)  /**< PWM signal line function value: PWM_PWML1 */
#define PIO_PD18A_PWM_PWML1                        (_UINT32_(1) << 18) /**< PWM signal: PWM_PWML1 */
#define PIN_PD19A_PWM_PWML2                        _UINT32_(115) /**< PWM signal: PWM_PWML2 on PD19 mux A */
#define MUX_PD19A_PWM_PWML2                        _UINT32_(0)  /**< PWM signal line function value: PWM_PWML2 */
#define PIO_PD19A_PWM_PWML2                        (_UINT32_(1) << 19) /**< PWM signal: PWM_PWML2 */
/* ========== PIO definition for QSPI peripheral ========== */
#define PIN_PC14A_QSPI_QCS                         _UINT32_(78) /**< QSPI signal: QSPI_QCS on PC14 mux A */
#define MUX_PC14A_QSPI_QCS                         _UINT32_(0)  /**< QSPI signal line function value: QSPI_QCS */
#define PIO_PC14A_QSPI_QCS                         (_UINT32_(1) << 14) /**< QSPI signal: QSPI_QCS */
#define PIN_PC13A_QSPI_QIO0                        _UINT32_(77) /**< QSPI signal: QSPI_QIO0 on PC13 mux A */
#define MUX_PC13A_QSPI_QIO0                        _UINT32_(0)  /**< QSPI signal line function value: QSPI_QIO0 */
#define PIO_PC13A_QSPI_QIO0                        (_UINT32_(1) << 13) /**< QSPI signal: QSPI_QIO0 */
#define PIN_PC12A_QSPI_QIO1                        _UINT32_(76) /**< QSPI signal: QSPI_QIO1 on PC12 mux A */
#define MUX_PC12A_QSPI_QIO1                        _UINT32_(0)  /**< QSPI signal line function value: QSPI_QIO1 */
#define PIO_PC12A_QSPI_QIO1                        (_UINT32_(1) << 12) /**< QSPI signal: QSPI_QIO1 */
#define PIN_PC11A_QSPI_QIO2                        _UINT32_(75) /**< QSPI signal: QSPI_QIO2 on PC11 mux A */
#define MUX_PC11A_QSPI_QIO2                        _UINT32_(0)  /**< QSPI signal line function value: QSPI_QIO2 */
#define PIO_PC11A_QSPI_QIO2                        (_UINT32_(1) << 11) /**< QSPI signal: QSPI_QIO2 */
#define PIN_PC10A_QSPI_QIO3                        _UINT32_(74) /**< QSPI signal: QSPI_QIO3 on PC10 mux A */
#define MUX_PC10A_QSPI_QIO3                        _UINT32_(0)  /**< QSPI signal line function value: QSPI_QIO3 */
#define PIO_PC10A_QSPI_QIO3                        (_UINT32_(1) << 10) /**< QSPI signal: QSPI_QIO3 */
#define PIN_PC15A_QSPI_QSCK                        _UINT32_(79) /**< QSPI signal: QSPI_QSCK on PC15 mux A */
#define MUX_PC15A_QSPI_QSCK                        _UINT32_(0)  /**< QSPI signal line function value: QSPI_QSCK */
#define PIO_PC15A_QSPI_QSCK                        (_UINT32_(1) << 15) /**< QSPI signal: QSPI_QSCK */
/* ========== PIO definition for SLCDC peripheral ========== */
#define PIN_PA21A_SLCDC_COM0                       _UINT32_(21) /**< SLCDC signal: SLCDC_COM0 on PA21 mux A */
#define MUX_PA21A_SLCDC_COM0                       _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_COM0 */
#define PIO_PA21A_SLCDC_COM0                       (_UINT32_(1) << 21) /**< SLCDC signal: SLCDC_COM0 */
#define PIN_PA22A_SLCDC_COM1                       _UINT32_(22) /**< SLCDC signal: SLCDC_COM1 on PA22 mux A */
#define MUX_PA22A_SLCDC_COM1                       _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_COM1 */
#define PIO_PA22A_SLCDC_COM1                       (_UINT32_(1) << 22) /**< SLCDC signal: SLCDC_COM1 */
#define PIN_PA23A_SLCDC_COM2                       _UINT32_(23) /**< SLCDC signal: SLCDC_COM2 on PA23 mux A */
#define MUX_PA23A_SLCDC_COM2                       _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_COM2 */
#define PIO_PA23A_SLCDC_COM2                       (_UINT32_(1) << 23) /**< SLCDC signal: SLCDC_COM2 */
#define PIN_PA24A_SLCDC_COM3                       _UINT32_(24) /**< SLCDC signal: SLCDC_COM3 on PA24 mux A */
#define MUX_PA24A_SLCDC_COM3                       _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_COM3 */
#define PIO_PA24A_SLCDC_COM3                       (_UINT32_(1) << 24) /**< SLCDC signal: SLCDC_COM3 */
#define PIN_PA25A_SLCDC_COM4                       _UINT32_(25) /**< SLCDC signal: SLCDC_COM4 on PA25 mux A */
#define MUX_PA25A_SLCDC_COM4                       _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_COM4 */
#define PIO_PA25A_SLCDC_COM4                       (_UINT32_(1) << 25) /**< SLCDC signal: SLCDC_COM4 */
#define PIN_PA26A_SLCDC_COM5                       _UINT32_(26) /**< SLCDC signal: SLCDC_COM5 on PA26 mux A */
#define MUX_PA26A_SLCDC_COM5                       _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_COM5 */
#define PIO_PA26A_SLCDC_COM5                       (_UINT32_(1) << 26) /**< SLCDC signal: SLCDC_COM5 */
#define PIN_PA27A_SLCDC_COM6                       _UINT32_(27) /**< SLCDC signal: SLCDC_COM6 on PA27 mux A */
#define MUX_PA27A_SLCDC_COM6                       _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_COM6 */
#define PIO_PA27A_SLCDC_COM6                       (_UINT32_(1) << 27) /**< SLCDC signal: SLCDC_COM6 */
#define PIN_PA28A_SLCDC_COM7                       _UINT32_(28) /**< SLCDC signal: SLCDC_COM7 on PA28 mux A */
#define MUX_PA28A_SLCDC_COM7                       _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_COM7 */
#define PIO_PA28A_SLCDC_COM7                       (_UINT32_(1) << 28) /**< SLCDC signal: SLCDC_COM7 */
#define PIN_PA29A_SLCDC_SEG0                       _UINT32_(29) /**< SLCDC signal: SLCDC_SEG0 on PA29 mux A */
#define MUX_PA29A_SLCDC_SEG0                       _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG0 */
#define PIO_PA29A_SLCDC_SEG0                       (_UINT32_(1) << 29) /**< SLCDC signal: SLCDC_SEG0 */
#define PIN_PA30A_SLCDC_SEG1                       _UINT32_(30) /**< SLCDC signal: SLCDC_SEG1 on PA30 mux A */
#define MUX_PA30A_SLCDC_SEG1                       _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG1 */
#define PIO_PA30A_SLCDC_SEG1                       (_UINT32_(1) << 30) /**< SLCDC signal: SLCDC_SEG1 */
#define PIN_PA31A_SLCDC_SEG2                       _UINT32_(31) /**< SLCDC signal: SLCDC_SEG2 on PA31 mux A */
#define MUX_PA31A_SLCDC_SEG2                       _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG2 */
#define PIO_PA31A_SLCDC_SEG2                       (_UINT32_(1) << 31) /**< SLCDC signal: SLCDC_SEG2 */
#define PIN_PB0A_SLCDC_SEG3                        _UINT32_(32) /**< SLCDC signal: SLCDC_SEG3 on PB0 mux A */
#define MUX_PB0A_SLCDC_SEG3                        _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG3 */
#define PIO_PB0A_SLCDC_SEG3                        (_UINT32_(1) << 0) /**< SLCDC signal: SLCDC_SEG3 */
#define PIN_PB1A_SLCDC_SEG4                        _UINT32_(33) /**< SLCDC signal: SLCDC_SEG4 on PB1 mux A */
#define MUX_PB1A_SLCDC_SEG4                        _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG4 */
#define PIO_PB1A_SLCDC_SEG4                        (_UINT32_(1) << 1) /**< SLCDC signal: SLCDC_SEG4 */
#define PIN_PB2A_SLCDC_SEG5                        _UINT32_(34) /**< SLCDC signal: SLCDC_SEG5 on PB2 mux A */
#define MUX_PB2A_SLCDC_SEG5                        _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG5 */
#define PIO_PB2A_SLCDC_SEG5                        (_UINT32_(1) << 2) /**< SLCDC signal: SLCDC_SEG5 */
#define PIN_PB3A_SLCDC_SEG6                        _UINT32_(35) /**< SLCDC signal: SLCDC_SEG6 on PB3 mux A */
#define MUX_PB3A_SLCDC_SEG6                        _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG6 */
#define PIO_PB3A_SLCDC_SEG6                        (_UINT32_(1) << 3) /**< SLCDC signal: SLCDC_SEG6 */
#define PIN_PB4A_SLCDC_SEG7                        _UINT32_(36) /**< SLCDC signal: SLCDC_SEG7 on PB4 mux A */
#define MUX_PB4A_SLCDC_SEG7                        _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG7 */
#define PIO_PB4A_SLCDC_SEG7                        (_UINT32_(1) << 4) /**< SLCDC signal: SLCDC_SEG7 */
#define PIN_PB5A_SLCDC_SEG8                        _UINT32_(37) /**< SLCDC signal: SLCDC_SEG8 on PB5 mux A */
#define MUX_PB5A_SLCDC_SEG8                        _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG8 */
#define PIO_PB5A_SLCDC_SEG8                        (_UINT32_(1) << 5) /**< SLCDC signal: SLCDC_SEG8 */
#define PIN_PB6A_SLCDC_SEG9                        _UINT32_(38) /**< SLCDC signal: SLCDC_SEG9 on PB6 mux A */
#define MUX_PB6A_SLCDC_SEG9                        _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG9 */
#define PIO_PB6A_SLCDC_SEG9                        (_UINT32_(1) << 6) /**< SLCDC signal: SLCDC_SEG9 */
#define PIN_PB7A_SLCDC_SEG10                       _UINT32_(39) /**< SLCDC signal: SLCDC_SEG10 on PB7 mux A */
#define MUX_PB7A_SLCDC_SEG10                       _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG10 */
#define PIO_PB7A_SLCDC_SEG10                       (_UINT32_(1) << 7) /**< SLCDC signal: SLCDC_SEG10 */
#define PIN_PB8A_SLCDC_SEG11                       _UINT32_(40) /**< SLCDC signal: SLCDC_SEG11 on PB8 mux A */
#define MUX_PB8A_SLCDC_SEG11                       _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG11 */
#define PIO_PB8A_SLCDC_SEG11                       (_UINT32_(1) << 8) /**< SLCDC signal: SLCDC_SEG11 */
#define PIN_PB9A_SLCDC_SEG12                       _UINT32_(41) /**< SLCDC signal: SLCDC_SEG12 on PB9 mux A */
#define MUX_PB9A_SLCDC_SEG12                       _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG12 */
#define PIO_PB9A_SLCDC_SEG12                       (_UINT32_(1) << 9) /**< SLCDC signal: SLCDC_SEG12 */
#define PIN_PB10A_SLCDC_SEG13                      _UINT32_(42) /**< SLCDC signal: SLCDC_SEG13 on PB10 mux A */
#define MUX_PB10A_SLCDC_SEG13                      _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG13 */
#define PIO_PB10A_SLCDC_SEG13                      (_UINT32_(1) << 10) /**< SLCDC signal: SLCDC_SEG13 */
#define PIN_PB11A_SLCDC_SEG14                      _UINT32_(43) /**< SLCDC signal: SLCDC_SEG14 on PB11 mux A */
#define MUX_PB11A_SLCDC_SEG14                      _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG14 */
#define PIO_PB11A_SLCDC_SEG14                      (_UINT32_(1) << 11) /**< SLCDC signal: SLCDC_SEG14 */
#define PIN_PB12A_SLCDC_SEG15                      _UINT32_(44) /**< SLCDC signal: SLCDC_SEG15 on PB12 mux A */
#define MUX_PB12A_SLCDC_SEG15                      _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG15 */
#define PIO_PB12A_SLCDC_SEG15                      (_UINT32_(1) << 12) /**< SLCDC signal: SLCDC_SEG15 */
#define PIN_PB13A_SLCDC_SEG16                      _UINT32_(45) /**< SLCDC signal: SLCDC_SEG16 on PB13 mux A */
#define MUX_PB13A_SLCDC_SEG16                      _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG16 */
#define PIO_PB13A_SLCDC_SEG16                      (_UINT32_(1) << 13) /**< SLCDC signal: SLCDC_SEG16 */
#define PIN_PB14A_SLCDC_SEG17                      _UINT32_(46) /**< SLCDC signal: SLCDC_SEG17 on PB14 mux A */
#define MUX_PB14A_SLCDC_SEG17                      _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG17 */
#define PIO_PB14A_SLCDC_SEG17                      (_UINT32_(1) << 14) /**< SLCDC signal: SLCDC_SEG17 */
#define PIN_PB15A_SLCDC_SEG18                      _UINT32_(47) /**< SLCDC signal: SLCDC_SEG18 on PB15 mux A */
#define MUX_PB15A_SLCDC_SEG18                      _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG18 */
#define PIO_PB15A_SLCDC_SEG18                      (_UINT32_(1) << 15) /**< SLCDC signal: SLCDC_SEG18 */
#define PIN_PB16A_SLCDC_SEG19                      _UINT32_(48) /**< SLCDC signal: SLCDC_SEG19 on PB16 mux A */
#define MUX_PB16A_SLCDC_SEG19                      _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG19 */
#define PIO_PB16A_SLCDC_SEG19                      (_UINT32_(1) << 16) /**< SLCDC signal: SLCDC_SEG19 */
#define PIN_PB17A_SLCDC_SEG20                      _UINT32_(49) /**< SLCDC signal: SLCDC_SEG20 on PB17 mux A */
#define MUX_PB17A_SLCDC_SEG20                      _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG20 */
#define PIO_PB17A_SLCDC_SEG20                      (_UINT32_(1) << 17) /**< SLCDC signal: SLCDC_SEG20 */
#define PIN_PB18A_SLCDC_SEG21                      _UINT32_(50) /**< SLCDC signal: SLCDC_SEG21 on PB18 mux A */
#define MUX_PB18A_SLCDC_SEG21                      _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG21 */
#define PIO_PB18A_SLCDC_SEG21                      (_UINT32_(1) << 18) /**< SLCDC signal: SLCDC_SEG21 */
#define PIN_PB19A_SLCDC_SEG22                      _UINT32_(51) /**< SLCDC signal: SLCDC_SEG22 on PB19 mux A */
#define MUX_PB19A_SLCDC_SEG22                      _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG22 */
#define PIO_PB19A_SLCDC_SEG22                      (_UINT32_(1) << 19) /**< SLCDC signal: SLCDC_SEG22 */
#define PIN_PB20A_SLCDC_SEG23                      _UINT32_(52) /**< SLCDC signal: SLCDC_SEG23 on PB20 mux A */
#define MUX_PB20A_SLCDC_SEG23                      _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG23 */
#define PIO_PB20A_SLCDC_SEG23                      (_UINT32_(1) << 20) /**< SLCDC signal: SLCDC_SEG23 */
#define PIN_PB22A_SLCDC_SEG25                      _UINT32_(54) /**< SLCDC signal: SLCDC_SEG25 on PB22 mux A */
#define MUX_PB22A_SLCDC_SEG25                      _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG25 */
#define PIO_PB22A_SLCDC_SEG25                      (_UINT32_(1) << 22) /**< SLCDC signal: SLCDC_SEG25 */
#define PIN_PB23A_SLCDC_SEG26                      _UINT32_(55) /**< SLCDC signal: SLCDC_SEG26 on PB23 mux A */
#define MUX_PB23A_SLCDC_SEG26                      _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG26 */
#define PIO_PB23A_SLCDC_SEG26                      (_UINT32_(1) << 23) /**< SLCDC signal: SLCDC_SEG26 */
#define PIN_PB24A_SLCDC_SEG27                      _UINT32_(56) /**< SLCDC signal: SLCDC_SEG27 on PB24 mux A */
#define MUX_PB24A_SLCDC_SEG27                      _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG27 */
#define PIO_PB24A_SLCDC_SEG27                      (_UINT32_(1) << 24) /**< SLCDC signal: SLCDC_SEG27 */
#define PIN_PB25A_SLCDC_SEG28                      _UINT32_(57) /**< SLCDC signal: SLCDC_SEG28 on PB25 mux A */
#define MUX_PB25A_SLCDC_SEG28                      _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG28 */
#define PIO_PB25A_SLCDC_SEG28                      (_UINT32_(1) << 25) /**< SLCDC signal: SLCDC_SEG28 */
#define PIN_PB26A_SLCDC_SEG29                      _UINT32_(58) /**< SLCDC signal: SLCDC_SEG29 on PB26 mux A */
#define MUX_PB26A_SLCDC_SEG29                      _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG29 */
#define PIO_PB26A_SLCDC_SEG29                      (_UINT32_(1) << 26) /**< SLCDC signal: SLCDC_SEG29 */
#define PIN_PC0A_SLCDC_SEG30                       _UINT32_(64) /**< SLCDC signal: SLCDC_SEG30 on PC0 mux A */
#define MUX_PC0A_SLCDC_SEG30                       _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG30 */
#define PIO_PC0A_SLCDC_SEG30                       (_UINT32_(1) << 0) /**< SLCDC signal: SLCDC_SEG30 */
#define PIN_PC1A_SLCDC_SEG31                       _UINT32_(65) /**< SLCDC signal: SLCDC_SEG31 on PC1 mux A */
#define MUX_PC1A_SLCDC_SEG31                       _UINT32_(0)  /**< SLCDC signal line function value: SLCDC_SEG31 */
#define PIO_PC1A_SLCDC_SEG31                       (_UINT32_(1) << 1) /**< SLCDC signal: SLCDC_SEG31 */
/* ========== PIO definition for SUPC peripheral ========== */
#define PIN_PA2X1_SUPC_WKUP3                       _UINT32_(2)  /**< SUPC signal: SUPC_WKUP3 on PA2 mux X1 */
#define PIO_PA2X1_SUPC_WKUP3                       (_UINT32_(1) << 2) /**< SUPC signal: SUPC_WKUP3 */
#define PIN_PA3X1_SUPC_WKUP4                       _UINT32_(3)  /**< SUPC signal: SUPC_WKUP4 on PA3 mux X1 */
#define PIO_PA3X1_SUPC_WKUP4                       (_UINT32_(1) << 3) /**< SUPC signal: SUPC_WKUP4 */
#define PIN_PA5X1_SUPC_WKUP5                       _UINT32_(5)  /**< SUPC signal: SUPC_WKUP5 on PA5 mux X1 */
#define PIO_PA5X1_SUPC_WKUP5                       (_UINT32_(1) << 5) /**< SUPC signal: SUPC_WKUP5 */
#define PIN_PA9X1_SUPC_WKUP6                       _UINT32_(9)  /**< SUPC signal: SUPC_WKUP6 on PA9 mux X1 */
#define PIO_PA9X1_SUPC_WKUP6                       (_UINT32_(1) << 9) /**< SUPC signal: SUPC_WKUP6 */
#define PIN_PA13X1_SUPC_WKUP7                      _UINT32_(13) /**< SUPC signal: SUPC_WKUP7 on PA13 mux X1 */
#define PIO_PA13X1_SUPC_WKUP7                      (_UINT32_(1) << 13) /**< SUPC signal: SUPC_WKUP7 */
#define PIN_PB25X1_SUPC_WKUP8                      _UINT32_(57) /**< SUPC signal: SUPC_WKUP8 on PB25 mux X1 */
#define PIO_PB25X1_SUPC_WKUP8                      (_UINT32_(1) << 25) /**< SUPC signal: SUPC_WKUP8 */
#define PIN_PB9X1_SUPC_WKUP9                       _UINT32_(41) /**< SUPC signal: SUPC_WKUP9 on PB9 mux X1 */
#define PIO_PB9X1_SUPC_WKUP9                       (_UINT32_(1) << 9) /**< SUPC signal: SUPC_WKUP9 */
#define PIN_PB12X1_SUPC_WKUP10                     _UINT32_(44) /**< SUPC signal: SUPC_WKUP10 on PB12 mux X1 */
#define PIO_PB12X1_SUPC_WKUP10                     (_UINT32_(1) << 12) /**< SUPC signal: SUPC_WKUP10 */
#define PIN_PC7X1_SUPC_WKUP11                      _UINT32_(71) /**< SUPC signal: SUPC_WKUP11 on PC7 mux X1 */
#define PIO_PC7X1_SUPC_WKUP11                      (_UINT32_(1) << 7) /**< SUPC signal: SUPC_WKUP11 */
#define PIN_PC9X1_SUPC_WKUP12                      _UINT32_(73) /**< SUPC signal: SUPC_WKUP12 on PC9 mux X1 */
#define PIO_PC9X1_SUPC_WKUP12                      (_UINT32_(1) << 9) /**< SUPC signal: SUPC_WKUP12 */
#define PIN_PC14X1_SUPC_WKUP13                     _UINT32_(78) /**< SUPC signal: SUPC_WKUP13 on PC14 mux X1 */
#define PIO_PC14X1_SUPC_WKUP13                     (_UINT32_(1) << 14) /**< SUPC signal: SUPC_WKUP13 */
#define PIN_PC21X1_SUPC_WKUP14                     _UINT32_(85) /**< SUPC signal: SUPC_WKUP14 on PC21 mux X1 */
#define PIO_PC21X1_SUPC_WKUP14                     (_UINT32_(1) << 21) /**< SUPC signal: SUPC_WKUP14 */
/* ========== PIO definition for TC0 peripheral ========== */
#define PIN_PA23D_TC0_TCLK0                        _UINT32_(23) /**< TC0 signal: TC0_TCLK0 on PA23 mux D */
#define MUX_PA23D_TC0_TCLK0                        _UINT32_(3)  /**< TC0 signal line function value: TC0_TCLK0 */
#define PIO_PA23D_TC0_TCLK0                        (_UINT32_(1) << 23) /**< TC0 signal: TC0_TCLK0 */
#define PIN_PB1D_TC0_TCLK1                         _UINT32_(33) /**< TC0 signal: TC0_TCLK1 on PB1 mux D */
#define MUX_PB1D_TC0_TCLK1                         _UINT32_(3)  /**< TC0 signal line function value: TC0_TCLK1 */
#define PIO_PB1D_TC0_TCLK1                         (_UINT32_(1) << 1) /**< TC0 signal: TC0_TCLK1 */
#define PIN_PB4D_TC0_TCLK2                         _UINT32_(36) /**< TC0 signal: TC0_TCLK2 on PB4 mux D */
#define MUX_PB4D_TC0_TCLK2                         _UINT32_(3)  /**< TC0 signal line function value: TC0_TCLK2 */
#define PIO_PB4D_TC0_TCLK2                         (_UINT32_(1) << 4) /**< TC0 signal: TC0_TCLK2 */
#define PIN_PA2B_TC0_TIOA0                         _UINT32_(2)  /**< TC0 signal: TC0_TIOA0 on PA2 mux B */
#define MUX_PA2B_TC0_TIOA0                         _UINT32_(1)  /**< TC0 signal line function value: TC0_TIOA0 */
#define PIO_PA2B_TC0_TIOA0                         (_UINT32_(1) << 2) /**< TC0 signal: TC0_TIOA0 */
#define PIN_PA25D_TC0_TIOA0                        _UINT32_(25) /**< TC0 signal: TC0_TIOA0 on PA25 mux D */
#define MUX_PA25D_TC0_TIOA0                        _UINT32_(3)  /**< TC0 signal line function value: TC0_TIOA0 */
#define PIO_PA25D_TC0_TIOA0                        (_UINT32_(1) << 25) /**< TC0 signal: TC0_TIOA0 */
#define PIN_PA31D_TC0_TIOA1                        _UINT32_(31) /**< TC0 signal: TC0_TIOA1 on PA31 mux D */
#define MUX_PA31D_TC0_TIOA1                        _UINT32_(3)  /**< TC0 signal line function value: TC0_TIOA1 */
#define PIO_PA31D_TC0_TIOA1                        (_UINT32_(1) << 31) /**< TC0 signal: TC0_TIOA1 */
#define PIN_PB2D_TC0_TIOA2                         _UINT32_(34) /**< TC0 signal: TC0_TIOA2 on PB2 mux D */
#define MUX_PB2D_TC0_TIOA2                         _UINT32_(3)  /**< TC0 signal line function value: TC0_TIOA2 */
#define PIO_PB2D_TC0_TIOA2                         (_UINT32_(1) << 2) /**< TC0 signal: TC0_TIOA2 */
#define PIN_PA3A_TC0_TIOB0                         _UINT32_(3)  /**< TC0 signal: TC0_TIOB0 on PA3 mux A */
#define MUX_PA3A_TC0_TIOB0                         _UINT32_(0)  /**< TC0 signal line function value: TC0_TIOB0 */
#define PIO_PA3A_TC0_TIOB0                         (_UINT32_(1) << 3) /**< TC0 signal: TC0_TIOB0 */
#define PIN_PA24D_TC0_TIOB0                        _UINT32_(24) /**< TC0 signal: TC0_TIOB0 on PA24 mux D */
#define MUX_PA24D_TC0_TIOB0                        _UINT32_(3)  /**< TC0 signal line function value: TC0_TIOB0 */
#define PIO_PA24D_TC0_TIOB0                        (_UINT32_(1) << 24) /**< TC0 signal: TC0_TIOB0 */
#define PIN_PB0D_TC0_TIOB1                         _UINT32_(32) /**< TC0 signal: TC0_TIOB1 on PB0 mux D */
#define MUX_PB0D_TC0_TIOB1                         _UINT32_(3)  /**< TC0 signal line function value: TC0_TIOB1 */
#define PIO_PB0D_TC0_TIOB1                         (_UINT32_(1) << 0) /**< TC0 signal: TC0_TIOB1 */
#define PIN_PB3D_TC0_TIOB2                         _UINT32_(35) /**< TC0 signal: TC0_TIOB2 on PB3 mux D */
#define MUX_PB3D_TC0_TIOB2                         _UINT32_(3)  /**< TC0 signal line function value: TC0_TIOB2 */
#define PIO_PB3D_TC0_TIOB2                         (_UINT32_(1) << 3) /**< TC0 signal: TC0_TIOB2 */
/* ========== PIO definition for TC1 peripheral ========== */
#define PIN_PB14C_TC1_TCLK3                        _UINT32_(46) /**< TC1 signal: TC1_TCLK3 on PB14 mux C */
#define MUX_PB14C_TC1_TCLK3                        _UINT32_(2)  /**< TC1 signal line function value: TC1_TCLK3 */
#define PIO_PB14C_TC1_TCLK3                        (_UINT32_(1) << 14) /**< TC1 signal: TC1_TCLK3 */
#define PIN_PB17C_TC1_TCLK4                        _UINT32_(49) /**< TC1 signal: TC1_TCLK4 on PB17 mux C */
#define MUX_PB17C_TC1_TCLK4                        _UINT32_(2)  /**< TC1 signal line function value: TC1_TCLK4 */
#define PIO_PB17C_TC1_TCLK4                        (_UINT32_(1) << 17) /**< TC1 signal: TC1_TCLK4 */
#define PIN_PC5D_TC1_TCLK5                         _UINT32_(69) /**< TC1 signal: TC1_TCLK5 on PC5 mux D */
#define MUX_PC5D_TC1_TCLK5                         _UINT32_(3)  /**< TC1 signal line function value: TC1_TCLK5 */
#define PIO_PC5D_TC1_TCLK5                         (_UINT32_(1) << 5) /**< TC1 signal: TC1_TCLK5 */
#define PIN_PB8C_TC1_TIOA3                         _UINT32_(40) /**< TC1 signal: TC1_TIOA3 on PB8 mux C */
#define MUX_PB8C_TC1_TIOA3                         _UINT32_(2)  /**< TC1 signal line function value: TC1_TIOA3 */
#define PIO_PB8C_TC1_TIOA3                         (_UINT32_(1) << 8) /**< TC1 signal: TC1_TIOA3 */
#define PIN_PC0C_TC1_TIOA3                         _UINT32_(64) /**< TC1 signal: TC1_TIOA3 on PC0 mux C */
#define MUX_PC0C_TC1_TIOA3                         _UINT32_(2)  /**< TC1 signal line function value: TC1_TIOA3 */
#define PIO_PC0C_TC1_TIOA3                         (_UINT32_(1) << 0) /**< TC1 signal: TC1_TIOA3 */
#define PIN_PB18C_TC1_TIOA4                        _UINT32_(50) /**< TC1 signal: TC1_TIOA4 on PB18 mux C */
#define MUX_PB18C_TC1_TIOA4                        _UINT32_(2)  /**< TC1 signal line function value: TC1_TIOA4 */
#define PIO_PB18C_TC1_TIOA4                        (_UINT32_(1) << 18) /**< TC1 signal: TC1_TIOA4 */
#define PIN_PB5C_TC1_TIOA5                         _UINT32_(37) /**< TC1 signal: TC1_TIOA5 on PB5 mux C */
#define MUX_PB5C_TC1_TIOA5                         _UINT32_(2)  /**< TC1 signal line function value: TC1_TIOA5 */
#define PIO_PB5C_TC1_TIOA5                         (_UINT32_(1) << 5) /**< TC1 signal: TC1_TIOA5 */
#define PIN_PB24C_TC1_TIOA5                        _UINT32_(56) /**< TC1 signal: TC1_TIOA5 on PB24 mux C */
#define MUX_PB24C_TC1_TIOA5                        _UINT32_(2)  /**< TC1 signal line function value: TC1_TIOA5 */
#define PIO_PB24C_TC1_TIOA5                        (_UINT32_(1) << 24) /**< TC1 signal: TC1_TIOA5 */
#define PIN_PB13C_TC1_TIOB3                        _UINT32_(45) /**< TC1 signal: TC1_TIOB3 on PB13 mux C */
#define MUX_PB13C_TC1_TIOB3                        _UINT32_(2)  /**< TC1 signal line function value: TC1_TIOB3 */
#define PIO_PB13C_TC1_TIOB3                        (_UINT32_(1) << 13) /**< TC1 signal: TC1_TIOB3 */
#define PIN_PB19C_TC1_TIOB4                        _UINT32_(51) /**< TC1 signal: TC1_TIOB4 on PB19 mux C */
#define MUX_PB19C_TC1_TIOB4                        _UINT32_(2)  /**< TC1 signal line function value: TC1_TIOB4 */
#define PIO_PB19C_TC1_TIOB4                        (_UINT32_(1) << 19) /**< TC1 signal: TC1_TIOB4 */
#define PIN_PB6C_TC1_TIOB5                         _UINT32_(38) /**< TC1 signal: TC1_TIOB5 on PB6 mux C */
#define MUX_PB6C_TC1_TIOB5                         _UINT32_(2)  /**< TC1 signal line function value: TC1_TIOB5 */
#define PIO_PB6C_TC1_TIOB5                         (_UINT32_(1) << 6) /**< TC1 signal: TC1_TIOB5 */
#define PIN_PB25C_TC1_TIOB5                        _UINT32_(57) /**< TC1 signal: TC1_TIOB5 on PB25 mux C */
#define MUX_PB25C_TC1_TIOB5                        _UINT32_(2)  /**< TC1 signal line function value: TC1_TIOB5 */
#define PIO_PB25C_TC1_TIOB5                        (_UINT32_(1) << 25) /**< TC1 signal: TC1_TIOB5 */
/* ========== PIO definition for TC2 peripheral ========== */
#define PIN_PA10C_TC2_TCLK6                        _UINT32_(10) /**< TC2 signal: TC2_TCLK6 on PA10 mux C */
#define MUX_PA10C_TC2_TCLK6                        _UINT32_(2)  /**< TC2 signal line function value: TC2_TCLK6 */
#define PIO_PA10C_TC2_TCLK6                        (_UINT32_(1) << 10) /**< TC2 signal: TC2_TCLK6 */
#define PIN_PC16D_TC2_TCLK7                        _UINT32_(80) /**< TC2 signal: TC2_TCLK7 on PC16 mux D */
#define MUX_PC16D_TC2_TCLK7                        _UINT32_(3)  /**< TC2 signal line function value: TC2_TCLK7 */
#define PIO_PC16D_TC2_TCLK7                        (_UINT32_(1) << 16) /**< TC2 signal: TC2_TCLK7 */
#define PIN_PC19D_TC2_TCLK8                        _UINT32_(83) /**< TC2 signal: TC2_TCLK8 on PC19 mux D */
#define MUX_PC19D_TC2_TCLK8                        _UINT32_(3)  /**< TC2 signal line function value: TC2_TCLK8 */
#define PIO_PC19D_TC2_TCLK8                        (_UINT32_(1) << 19) /**< TC2 signal: TC2_TCLK8 */
#define PIN_PA6C_TC2_TIOA6                         _UINT32_(6)  /**< TC2 signal: TC2_TIOA6 on PA6 mux C */
#define MUX_PA6C_TC2_TIOA6                         _UINT32_(2)  /**< TC2 signal line function value: TC2_TIOA6 */
#define PIO_PA6C_TC2_TIOA6                         (_UINT32_(1) << 6) /**< TC2 signal: TC2_TIOA6 */
#define PIN_PC14D_TC2_TIOA7                        _UINT32_(78) /**< TC2 signal: TC2_TIOA7 on PC14 mux D */
#define MUX_PC14D_TC2_TIOA7                        _UINT32_(3)  /**< TC2 signal line function value: TC2_TIOA7 */
#define PIO_PC14D_TC2_TIOA7                        (_UINT32_(1) << 14) /**< TC2 signal: TC2_TIOA7 */
#define PIN_PC17D_TC2_TIOA8                        _UINT32_(81) /**< TC2 signal: TC2_TIOA8 on PC17 mux D */
#define MUX_PC17D_TC2_TIOA8                        _UINT32_(3)  /**< TC2 signal line function value: TC2_TIOA8 */
#define PIO_PC17D_TC2_TIOA8                        (_UINT32_(1) << 17) /**< TC2 signal: TC2_TIOA8 */
#define PIN_PA7C_TC2_TIOB6                         _UINT32_(7)  /**< TC2 signal: TC2_TIOB6 on PA7 mux C */
#define MUX_PA7C_TC2_TIOB6                         _UINT32_(2)  /**< TC2 signal line function value: TC2_TIOB6 */
#define PIO_PA7C_TC2_TIOB6                         (_UINT32_(1) << 7) /**< TC2 signal: TC2_TIOB6 */
#define PIN_PC15D_TC2_TIOB7                        _UINT32_(79) /**< TC2 signal: TC2_TIOB7 on PC15 mux D */
#define MUX_PC15D_TC2_TIOB7                        _UINT32_(3)  /**< TC2 signal line function value: TC2_TIOB7 */
#define PIO_PC15D_TC2_TIOB7                        (_UINT32_(1) << 15) /**< TC2 signal: TC2_TIOB7 */
#define PIN_PC18D_TC2_TIOB8                        _UINT32_(82) /**< TC2 signal: TC2_TIOB8 on PC18 mux D */
#define MUX_PC18D_TC2_TIOB8                        _UINT32_(3)  /**< TC2 signal line function value: TC2_TIOB8 */
#define PIO_PC18D_TC2_TIOB8                        (_UINT32_(1) << 18) /**< TC2 signal: TC2_TIOB8 */
/* ========== PIO definition for TC3 peripheral ========== */
#define PIN_PD3A_TC3_TCLK9                         _UINT32_(99) /**< TC3 signal: TC3_TCLK9 on PD3 mux A */
#define MUX_PD3A_TC3_TCLK9                         _UINT32_(0)  /**< TC3 signal line function value: TC3_TCLK9 */
#define PIO_PD3A_TC3_TCLK9                         (_UINT32_(1) << 3) /**< TC3 signal: TC3_TCLK9 */
#define PIN_PD16A_TC3_TCLK10                       _UINT32_(112) /**< TC3 signal: TC3_TCLK10 on PD16 mux A */
#define MUX_PD16A_TC3_TCLK10                       _UINT32_(0)  /**< TC3 signal line function value: TC3_TCLK10 */
#define PIO_PD16A_TC3_TCLK10                       (_UINT32_(1) << 16) /**< TC3 signal: TC3_TCLK10 */
#define PIN_PD19C_TC3_TCLK11                       _UINT32_(115) /**< TC3 signal: TC3_TCLK11 on PD19 mux C */
#define MUX_PD19C_TC3_TCLK11                       _UINT32_(2)  /**< TC3 signal line function value: TC3_TCLK11 */
#define PIO_PD19C_TC3_TCLK11                       (_UINT32_(1) << 19) /**< TC3 signal: TC3_TCLK11 */
#define PIN_PD0A_TC3_TIOA9                         _UINT32_(96) /**< TC3 signal: TC3_TIOA9 on PD0 mux A */
#define MUX_PD0A_TC3_TIOA9                         _UINT32_(0)  /**< TC3 signal line function value: TC3_TIOA9 */
#define PIO_PD0A_TC3_TIOA9                         (_UINT32_(1) << 0) /**< TC3 signal: TC3_TIOA9 */
#define PIN_PD17C_TC3_TIOA11                       _UINT32_(113) /**< TC3 signal: TC3_TIOA11 on PD17 mux C */
#define MUX_PD17C_TC3_TIOA11                       _UINT32_(2)  /**< TC3 signal line function value: TC3_TIOA11 */
#define PIO_PD17C_TC3_TIOA11                       (_UINT32_(1) << 17) /**< TC3 signal: TC3_TIOA11 */
#define PIN_PD18C_TC3_TIOB11                       _UINT32_(114) /**< TC3 signal: TC3_TIOB11 on PD18 mux C */
#define MUX_PD18C_TC3_TIOB11                       _UINT32_(2)  /**< TC3 signal line function value: TC3_TIOB11 */
#define PIO_PD18C_TC3_TIOB11                       (_UINT32_(1) << 18) /**< TC3 signal: TC3_TIOB11 */
/* ========== PIO definition for UART peripheral ========== */
#define PIN_PD1A_UART_URXD                         _UINT32_(97) /**< UART signal: UART_URXD on PD1 mux A */
#define MUX_PD1A_UART_URXD                         _UINT32_(0)  /**< UART signal line function value: UART_URXD */
#define PIO_PD1A_UART_URXD                         (_UINT32_(1) << 1) /**< UART signal: UART_URXD */
#define PIN_PD12A_UART_URXD                        _UINT32_(108) /**< UART signal: UART_URXD on PD12 mux A */
#define MUX_PD12A_UART_URXD                        _UINT32_(0)  /**< UART signal line function value: UART_URXD */
#define PIO_PD12A_UART_URXD                        (_UINT32_(1) << 12) /**< UART signal: UART_URXD */
#define PIN_PD2A_UART_UTXD                         _UINT32_(98) /**< UART signal: UART_UTXD on PD2 mux A */
#define MUX_PD2A_UART_UTXD                         _UINT32_(0)  /**< UART signal line function value: UART_UTXD */
#define PIO_PD2A_UART_UTXD                         (_UINT32_(1) << 2) /**< UART signal: UART_UTXD */
#define PIN_PD13A_UART_UTXD                        _UINT32_(109) /**< UART signal: UART_UTXD on PD13 mux A */
#define MUX_PD13A_UART_UTXD                        _UINT32_(0)  /**< UART signal line function value: UART_UTXD */
#define PIO_PD13A_UART_UTXD                        (_UINT32_(1) << 13) /**< UART signal: UART_UTXD */
/* ========== PIO definition for TPI peripheral ========== */
#define PIN_PB10D_TPI_TRACESWO0                    _UINT32_(42) /**< TPI signal: TPI_TRACESWO0 on PB10 mux D */
#define MUX_PB10D_TPI_TRACESWO0                    _UINT32_(3)  /**< TPI signal line function value: TPI_TRACESWO0 */
#define PIO_PB10D_TPI_TRACESWO0                    (_UINT32_(1) << 10) /**< TPI signal: TPI_TRACESWO0 */

#endif /* _PIC32CX2051MTSH128_GPIO_H_ */

