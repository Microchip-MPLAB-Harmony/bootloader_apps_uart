/*
 * Peripheral I/O description for pic32cz2051ca70144
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

/*  file generated from device description file (ATDF) version 2025-04-15T17:35:01Z  */
#ifndef _pic32cz2051ca70144_GPIO_H_
#define _pic32cz2051ca70144_GPIO_H_

/* ======================= Peripheral I/O pin numbers ======================= */
#define PIN_PA00                    (    0)  /* Pin Number for PA00 */
#define PIN_PA01                    (    1)  /* Pin Number for PA01 */
#define PIN_PA02                    (    2)  /* Pin Number for PA02 */
#define PIN_PA03                    (    3)  /* Pin Number for PA03 */
#define PIN_PA04                    (    4)  /* Pin Number for PA04 */
#define PIN_PA05                    (    5)  /* Pin Number for PA05 */
#define PIN_PA06                    (    6)  /* Pin Number for PA06 */
#define PIN_PA07                    (    7)  /* Pin Number for PA07 */
#define PIN_PA08                    (    8)  /* Pin Number for PA08 */
#define PIN_PA09                    (    9)  /* Pin Number for PA09 */
#define PIN_PA10                    (   10)  /* Pin Number for PA10 */
#define PIN_PA11                    (   11)  /* Pin Number for PA11 */
#define PIN_PA12                    (   12)  /* Pin Number for PA12 */
#define PIN_PA13                    (   13)  /* Pin Number for PA13 */
#define PIN_PA14                    (   14)  /* Pin Number for PA14 */
#define PIN_PA15                    (   15)  /* Pin Number for PA15 */
#define PIN_PA16                    (   16)  /* Pin Number for PA16 */
#define PIN_PA17                    (   17)  /* Pin Number for PA17 */
#define PIN_PA18                    (   18)  /* Pin Number for PA18 */
#define PIN_PA19                    (   19)  /* Pin Number for PA19 */
#define PIN_PA20                    (   20)  /* Pin Number for PA20 */
#define PIN_PA21                    (   21)  /* Pin Number for PA21 */
#define PIN_PA22                    (   22)  /* Pin Number for PA22 */
#define PIN_PA23                    (   23)  /* Pin Number for PA23 */
#define PIN_PA24                    (   24)  /* Pin Number for PA24 */
#define PIN_PA25                    (   25)  /* Pin Number for PA25 */
#define PIN_PA26                    (   26)  /* Pin Number for PA26 */
#define PIN_PA27                    (   27)  /* Pin Number for PA27 */
#define PIN_PA28                    (   28)  /* Pin Number for PA28 */
#define PIN_PA29                    (   29)  /* Pin Number for PA29 */
#define PIN_PA30                    (   30)  /* Pin Number for PA30 */
#define PIN_PA31                    (   31)  /* Pin Number for PA31 */
#define PIN_PB00                    (   32)  /* Pin Number for PB00 */
#define PIN_PB01                    (   33)  /* Pin Number for PB01 */
#define PIN_PB02                    (   34)  /* Pin Number for PB02 */
#define PIN_PB03                    (   35)  /* Pin Number for PB03 */
#define PIN_PB04                    (   36)  /* Pin Number for PB04 */
#define PIN_PB05                    (   37)  /* Pin Number for PB05 */
#define PIN_PB06                    (   38)  /* Pin Number for PB06 */
#define PIN_PB07                    (   39)  /* Pin Number for PB07 */
#define PIN_PB08                    (   40)  /* Pin Number for PB08 */
#define PIN_PB09                    (   41)  /* Pin Number for PB09 */
#define PIN_PB12                    (   44)  /* Pin Number for PB12 */
#define PIN_PB13                    (   45)  /* Pin Number for PB13 */
#define PIN_PC00                    (   64)  /* Pin Number for PC00 */
#define PIN_PC01                    (   65)  /* Pin Number for PC01 */
#define PIN_PC02                    (   66)  /* Pin Number for PC02 */
#define PIN_PC03                    (   67)  /* Pin Number for PC03 */
#define PIN_PC04                    (   68)  /* Pin Number for PC04 */
#define PIN_PC05                    (   69)  /* Pin Number for PC05 */
#define PIN_PC06                    (   70)  /* Pin Number for PC06 */
#define PIN_PC07                    (   71)  /* Pin Number for PC07 */
#define PIN_PC08                    (   72)  /* Pin Number for PC08 */
#define PIN_PC09                    (   73)  /* Pin Number for PC09 */
#define PIN_PC10                    (   74)  /* Pin Number for PC10 */
#define PIN_PC11                    (   75)  /* Pin Number for PC11 */
#define PIN_PC12                    (   76)  /* Pin Number for PC12 */
#define PIN_PC13                    (   77)  /* Pin Number for PC13 */
#define PIN_PC14                    (   78)  /* Pin Number for PC14 */
#define PIN_PC15                    (   79)  /* Pin Number for PC15 */
#define PIN_PC16                    (   80)  /* Pin Number for PC16 */
#define PIN_PC17                    (   81)  /* Pin Number for PC17 */
#define PIN_PC18                    (   82)  /* Pin Number for PC18 */
#define PIN_PC19                    (   83)  /* Pin Number for PC19 */
#define PIN_PC20                    (   84)  /* Pin Number for PC20 */
#define PIN_PC21                    (   85)  /* Pin Number for PC21 */
#define PIN_PC22                    (   86)  /* Pin Number for PC22 */
#define PIN_PC23                    (   87)  /* Pin Number for PC23 */
#define PIN_PC24                    (   88)  /* Pin Number for PC24 */
#define PIN_PC25                    (   89)  /* Pin Number for PC25 */
#define PIN_PC26                    (   90)  /* Pin Number for PC26 */
#define PIN_PC27                    (   91)  /* Pin Number for PC27 */
#define PIN_PC28                    (   92)  /* Pin Number for PC28 */
#define PIN_PC29                    (   93)  /* Pin Number for PC29 */
#define PIN_PC30                    (   94)  /* Pin Number for PC30 */
#define PIN_PC31                    (   95)  /* Pin Number for PC31 */
#define PIN_PD00                    (   96)  /* Pin Number for PD00 */
#define PIN_PD01                    (   97)  /* Pin Number for PD01 */
#define PIN_PD02                    (   98)  /* Pin Number for PD02 */
#define PIN_PD03                    (   99)  /* Pin Number for PD03 */
#define PIN_PD04                    (  100)  /* Pin Number for PD04 */
#define PIN_PD05                    (  101)  /* Pin Number for PD05 */
#define PIN_PD06                    (  102)  /* Pin Number for PD06 */
#define PIN_PD07                    (  103)  /* Pin Number for PD07 */
#define PIN_PD08                    (  104)  /* Pin Number for PD08 */
#define PIN_PD09                    (  105)  /* Pin Number for PD09 */
#define PIN_PD10                    (  106)  /* Pin Number for PD10 */
#define PIN_PD11                    (  107)  /* Pin Number for PD11 */
#define PIN_PD12                    (  108)  /* Pin Number for PD12 */
#define PIN_PD13                    (  109)  /* Pin Number for PD13 */
#define PIN_PD14                    (  110)  /* Pin Number for PD14 */
#define PIN_PD15                    (  111)  /* Pin Number for PD15 */
#define PIN_PD16                    (  112)  /* Pin Number for PD16 */
#define PIN_PD17                    (  113)  /* Pin Number for PD17 */
#define PIN_PD18                    (  114)  /* Pin Number for PD18 */
#define PIN_PD19                    (  115)  /* Pin Number for PD19 */
#define PIN_PD20                    (  116)  /* Pin Number for PD20 */
#define PIN_PD21                    (  117)  /* Pin Number for PD21 */
#define PIN_PD22                    (  118)  /* Pin Number for PD22 */
#define PIN_PD23                    (  119)  /* Pin Number for PD23 */
#define PIN_PD24                    (  120)  /* Pin Number for PD24 */
#define PIN_PD25                    (  121)  /* Pin Number for PD25 */
#define PIN_PD26                    (  122)  /* Pin Number for PD26 */
#define PIN_PD27                    (  123)  /* Pin Number for PD27 */
#define PIN_PD28                    (  124)  /* Pin Number for PD28 */
#define PIN_PD29                    (  125)  /* Pin Number for PD29 */
#define PIN_PD30                    (  126)  /* Pin Number for PD30 */
#define PIN_PD31                    (  127)  /* Pin Number for PD31 */
#define PIN_PE00                    (  128)  /* Pin Number for PE00 */
#define PIN_PE01                    (  129)  /* Pin Number for PE01 */
#define PIN_PE02                    (  130)  /* Pin Number for PE02 */
#define PIN_PE03                    (  131)  /* Pin Number for PE03 */
#define PIN_PE04                    (  132)  /* Pin Number for PE04 */
#define PIN_PE05                    (  133)  /* Pin Number for PE05 */

/* ========================== Peripheral I/O masks ========================== */
#define PIO_PA00                    (_UINT32_(1) << 0) /* PIO mask for PA00 */
#define PIO_PA01                    (_UINT32_(1) << 1) /* PIO mask for PA01 */
#define PIO_PA02                    (_UINT32_(1) << 2) /* PIO mask for PA02 */
#define PIO_PA03                    (_UINT32_(1) << 3) /* PIO mask for PA03 */
#define PIO_PA04                    (_UINT32_(1) << 4) /* PIO mask for PA04 */
#define PIO_PA05                    (_UINT32_(1) << 5) /* PIO mask for PA05 */
#define PIO_PA06                    (_UINT32_(1) << 6) /* PIO mask for PA06 */
#define PIO_PA07                    (_UINT32_(1) << 7) /* PIO mask for PA07 */
#define PIO_PA08                    (_UINT32_(1) << 8) /* PIO mask for PA08 */
#define PIO_PA09                    (_UINT32_(1) << 9) /* PIO mask for PA09 */
#define PIO_PA10                    (_UINT32_(1) << 10) /* PIO mask for PA10 */
#define PIO_PA11                    (_UINT32_(1) << 11) /* PIO mask for PA11 */
#define PIO_PA12                    (_UINT32_(1) << 12) /* PIO mask for PA12 */
#define PIO_PA13                    (_UINT32_(1) << 13) /* PIO mask for PA13 */
#define PIO_PA14                    (_UINT32_(1) << 14) /* PIO mask for PA14 */
#define PIO_PA15                    (_UINT32_(1) << 15) /* PIO mask for PA15 */
#define PIO_PA16                    (_UINT32_(1) << 16) /* PIO mask for PA16 */
#define PIO_PA17                    (_UINT32_(1) << 17) /* PIO mask for PA17 */
#define PIO_PA18                    (_UINT32_(1) << 18) /* PIO mask for PA18 */
#define PIO_PA19                    (_UINT32_(1) << 19) /* PIO mask for PA19 */
#define PIO_PA20                    (_UINT32_(1) << 20) /* PIO mask for PA20 */
#define PIO_PA21                    (_UINT32_(1) << 21) /* PIO mask for PA21 */
#define PIO_PA22                    (_UINT32_(1) << 22) /* PIO mask for PA22 */
#define PIO_PA23                    (_UINT32_(1) << 23) /* PIO mask for PA23 */
#define PIO_PA24                    (_UINT32_(1) << 24) /* PIO mask for PA24 */
#define PIO_PA25                    (_UINT32_(1) << 25) /* PIO mask for PA25 */
#define PIO_PA26                    (_UINT32_(1) << 26) /* PIO mask for PA26 */
#define PIO_PA27                    (_UINT32_(1) << 27) /* PIO mask for PA27 */
#define PIO_PA28                    (_UINT32_(1) << 28) /* PIO mask for PA28 */
#define PIO_PA29                    (_UINT32_(1) << 29) /* PIO mask for PA29 */
#define PIO_PA30                    (_UINT32_(1) << 30) /* PIO mask for PA30 */
#define PIO_PA31                    (_UINT32_(1) << 31) /* PIO mask for PA31 */
#define PIO_PB00                    (_UINT32_(1) << 0) /* PIO mask for PB00 */
#define PIO_PB01                    (_UINT32_(1) << 1) /* PIO mask for PB01 */
#define PIO_PB02                    (_UINT32_(1) << 2) /* PIO mask for PB02 */
#define PIO_PB03                    (_UINT32_(1) << 3) /* PIO mask for PB03 */
#define PIO_PB04                    (_UINT32_(1) << 4) /* PIO mask for PB04 */
#define PIO_PB05                    (_UINT32_(1) << 5) /* PIO mask for PB05 */
#define PIO_PB06                    (_UINT32_(1) << 6) /* PIO mask for PB06 */
#define PIO_PB07                    (_UINT32_(1) << 7) /* PIO mask for PB07 */
#define PIO_PB08                    (_UINT32_(1) << 8) /* PIO mask for PB08 */
#define PIO_PB09                    (_UINT32_(1) << 9) /* PIO mask for PB09 */
#define PIO_PB12                    (_UINT32_(1) << 12) /* PIO mask for PB12 */
#define PIO_PB13                    (_UINT32_(1) << 13) /* PIO mask for PB13 */
#define PIO_PC00                    (_UINT32_(1) << 0) /* PIO mask for PC00 */
#define PIO_PC01                    (_UINT32_(1) << 1) /* PIO mask for PC01 */
#define PIO_PC02                    (_UINT32_(1) << 2) /* PIO mask for PC02 */
#define PIO_PC03                    (_UINT32_(1) << 3) /* PIO mask for PC03 */
#define PIO_PC04                    (_UINT32_(1) << 4) /* PIO mask for PC04 */
#define PIO_PC05                    (_UINT32_(1) << 5) /* PIO mask for PC05 */
#define PIO_PC06                    (_UINT32_(1) << 6) /* PIO mask for PC06 */
#define PIO_PC07                    (_UINT32_(1) << 7) /* PIO mask for PC07 */
#define PIO_PC08                    (_UINT32_(1) << 8) /* PIO mask for PC08 */
#define PIO_PC09                    (_UINT32_(1) << 9) /* PIO mask for PC09 */
#define PIO_PC10                    (_UINT32_(1) << 10) /* PIO mask for PC10 */
#define PIO_PC11                    (_UINT32_(1) << 11) /* PIO mask for PC11 */
#define PIO_PC12                    (_UINT32_(1) << 12) /* PIO mask for PC12 */
#define PIO_PC13                    (_UINT32_(1) << 13) /* PIO mask for PC13 */
#define PIO_PC14                    (_UINT32_(1) << 14) /* PIO mask for PC14 */
#define PIO_PC15                    (_UINT32_(1) << 15) /* PIO mask for PC15 */
#define PIO_PC16                    (_UINT32_(1) << 16) /* PIO mask for PC16 */
#define PIO_PC17                    (_UINT32_(1) << 17) /* PIO mask for PC17 */
#define PIO_PC18                    (_UINT32_(1) << 18) /* PIO mask for PC18 */
#define PIO_PC19                    (_UINT32_(1) << 19) /* PIO mask for PC19 */
#define PIO_PC20                    (_UINT32_(1) << 20) /* PIO mask for PC20 */
#define PIO_PC21                    (_UINT32_(1) << 21) /* PIO mask for PC21 */
#define PIO_PC22                    (_UINT32_(1) << 22) /* PIO mask for PC22 */
#define PIO_PC23                    (_UINT32_(1) << 23) /* PIO mask for PC23 */
#define PIO_PC24                    (_UINT32_(1) << 24) /* PIO mask for PC24 */
#define PIO_PC25                    (_UINT32_(1) << 25) /* PIO mask for PC25 */
#define PIO_PC26                    (_UINT32_(1) << 26) /* PIO mask for PC26 */
#define PIO_PC27                    (_UINT32_(1) << 27) /* PIO mask for PC27 */
#define PIO_PC28                    (_UINT32_(1) << 28) /* PIO mask for PC28 */
#define PIO_PC29                    (_UINT32_(1) << 29) /* PIO mask for PC29 */
#define PIO_PC30                    (_UINT32_(1) << 30) /* PIO mask for PC30 */
#define PIO_PC31                    (_UINT32_(1) << 31) /* PIO mask for PC31 */
#define PIO_PD00                    (_UINT32_(1) << 0) /* PIO mask for PD00 */
#define PIO_PD01                    (_UINT32_(1) << 1) /* PIO mask for PD01 */
#define PIO_PD02                    (_UINT32_(1) << 2) /* PIO mask for PD02 */
#define PIO_PD03                    (_UINT32_(1) << 3) /* PIO mask for PD03 */
#define PIO_PD04                    (_UINT32_(1) << 4) /* PIO mask for PD04 */
#define PIO_PD05                    (_UINT32_(1) << 5) /* PIO mask for PD05 */
#define PIO_PD06                    (_UINT32_(1) << 6) /* PIO mask for PD06 */
#define PIO_PD07                    (_UINT32_(1) << 7) /* PIO mask for PD07 */
#define PIO_PD08                    (_UINT32_(1) << 8) /* PIO mask for PD08 */
#define PIO_PD09                    (_UINT32_(1) << 9) /* PIO mask for PD09 */
#define PIO_PD10                    (_UINT32_(1) << 10) /* PIO mask for PD10 */
#define PIO_PD11                    (_UINT32_(1) << 11) /* PIO mask for PD11 */
#define PIO_PD12                    (_UINT32_(1) << 12) /* PIO mask for PD12 */
#define PIO_PD13                    (_UINT32_(1) << 13) /* PIO mask for PD13 */
#define PIO_PD14                    (_UINT32_(1) << 14) /* PIO mask for PD14 */
#define PIO_PD15                    (_UINT32_(1) << 15) /* PIO mask for PD15 */
#define PIO_PD16                    (_UINT32_(1) << 16) /* PIO mask for PD16 */
#define PIO_PD17                    (_UINT32_(1) << 17) /* PIO mask for PD17 */
#define PIO_PD18                    (_UINT32_(1) << 18) /* PIO mask for PD18 */
#define PIO_PD19                    (_UINT32_(1) << 19) /* PIO mask for PD19 */
#define PIO_PD20                    (_UINT32_(1) << 20) /* PIO mask for PD20 */
#define PIO_PD21                    (_UINT32_(1) << 21) /* PIO mask for PD21 */
#define PIO_PD22                    (_UINT32_(1) << 22) /* PIO mask for PD22 */
#define PIO_PD23                    (_UINT32_(1) << 23) /* PIO mask for PD23 */
#define PIO_PD24                    (_UINT32_(1) << 24) /* PIO mask for PD24 */
#define PIO_PD25                    (_UINT32_(1) << 25) /* PIO mask for PD25 */
#define PIO_PD26                    (_UINT32_(1) << 26) /* PIO mask for PD26 */
#define PIO_PD27                    (_UINT32_(1) << 27) /* PIO mask for PD27 */
#define PIO_PD28                    (_UINT32_(1) << 28) /* PIO mask for PD28 */
#define PIO_PD29                    (_UINT32_(1) << 29) /* PIO mask for PD29 */
#define PIO_PD30                    (_UINT32_(1) << 30) /* PIO mask for PD30 */
#define PIO_PD31                    (_UINT32_(1) << 31) /* PIO mask for PD31 */
#define PIO_PE00                    (_UINT32_(1) << 0) /* PIO mask for PE00 */
#define PIO_PE01                    (_UINT32_(1) << 1) /* PIO mask for PE01 */
#define PIO_PE02                    (_UINT32_(1) << 2) /* PIO mask for PE02 */
#define PIO_PE03                    (_UINT32_(1) << 3) /* PIO mask for PE03 */
#define PIO_PE04                    (_UINT32_(1) << 4) /* PIO mask for PE04 */
#define PIO_PE05                    (_UINT32_(1) << 5) /* PIO mask for PE05 */

/* ================== PIO definition for AFEC0 peripheral =================== */
#define PIN_PD30X1_AFEC0_AD0                       _UINT32_(126)        /* AFEC0 signal: AFEC0_AD0 on PD30 mux X1 */
#define PIO_PD30X1_AFEC0_AD0                       (_UINT32_(1) << 30)  /* AFEC0 signal: AFEC0_AD0 */

#define PIN_PA21X1_AFEC0_AD1                       _UINT32_(21)         /* AFEC0 signal: AFEC0_AD1 on PA21 mux X1 */
#define PIO_PA21X1_AFEC0_AD1                       (_UINT32_(1) << 21)  /* AFEC0 signal: AFEC0_AD1 */

#define PIN_PB03X1_AFEC0_AD2                       _UINT32_(35)         /* AFEC0 signal: AFEC0_AD2 on PB03 mux X1 */
#define PIO_PB03X1_AFEC0_AD2                       (_UINT32_(1) << 3)   /* AFEC0 signal: AFEC0_AD2 */

#define PIN_PE05X1_AFEC0_AD3                       _UINT32_(133)        /* AFEC0 signal: AFEC0_AD3 on PE05 mux X1 */
#define PIO_PE05X1_AFEC0_AD3                       (_UINT32_(1) << 5)   /* AFEC0 signal: AFEC0_AD3 */

#define PIN_PE04X1_AFEC0_AD4                       _UINT32_(132)        /* AFEC0 signal: AFEC0_AD4 on PE04 mux X1 */
#define PIO_PE04X1_AFEC0_AD4                       (_UINT32_(1) << 4)   /* AFEC0 signal: AFEC0_AD4 */

#define PIN_PB02X1_AFEC0_AD5                       _UINT32_(34)         /* AFEC0 signal: AFEC0_AD5 on PB02 mux X1 */
#define PIO_PB02X1_AFEC0_AD5                       (_UINT32_(1) << 2)   /* AFEC0 signal: AFEC0_AD5 */

#define PIN_PA17X1_AFEC0_AD6                       _UINT32_(17)         /* AFEC0 signal: AFEC0_AD6 on PA17 mux X1 */
#define PIO_PA17X1_AFEC0_AD6                       (_UINT32_(1) << 17)  /* AFEC0 signal: AFEC0_AD6 */

#define PIN_PA18X1_AFEC0_AD7                       _UINT32_(18)         /* AFEC0 signal: AFEC0_AD7 on PA18 mux X1 */
#define PIO_PA18X1_AFEC0_AD7                       (_UINT32_(1) << 18)  /* AFEC0 signal: AFEC0_AD7 */

#define PIN_PA19X1_AFEC0_AD8                       _UINT32_(19)         /* AFEC0 signal: AFEC0_AD8 on PA19 mux X1 */
#define PIO_PA19X1_AFEC0_AD8                       (_UINT32_(1) << 19)  /* AFEC0 signal: AFEC0_AD8 */

#define PIN_PA20X1_AFEC0_AD9                       _UINT32_(20)         /* AFEC0 signal: AFEC0_AD9 on PA20 mux X1 */
#define PIO_PA20X1_AFEC0_AD9                       (_UINT32_(1) << 20)  /* AFEC0 signal: AFEC0_AD9 */

#define PIN_PB00X1_AFEC0_AD10                      _UINT32_(32)         /* AFEC0 signal: AFEC0_AD10 on PB00 mux X1 */
#define PIO_PB00X1_AFEC0_AD10                      (_UINT32_(1) << 0)   /* AFEC0 signal: AFEC0_AD10 */

#define PIN_PA08B_AFEC0_ADTRG                      _UINT32_(8)          /* AFEC0 signal: AFEC0_ADTRG on PA08 mux B */
#define MUX_PA08B_AFEC0_ADTRG                      _UINT32_(1)          /* AFEC0 signal line function value: AFEC0_ADTRG */
#define PIO_PA08B_AFEC0_ADTRG                      (_UINT32_(1) << 8)   /* AFEC0 signal: AFEC0_ADTRG */

/* ================== PIO definition for AFEC1 peripheral =================== */
#define PIN_PB01X1_AFEC1_AD0                       _UINT32_(33)         /* AFEC1 signal: AFEC1_AD0 on PB01 mux X1 */
#define PIO_PB01X1_AFEC1_AD0                       (_UINT32_(1) << 1)   /* AFEC1 signal: AFEC1_AD0 */

#define PIN_PC13X1_AFEC1_AD1                       _UINT32_(77)         /* AFEC1 signal: AFEC1_AD1 on PC13 mux X1 */
#define PIO_PC13X1_AFEC1_AD1                       (_UINT32_(1) << 13)  /* AFEC1 signal: AFEC1_AD1 */

#define PIN_PC15X1_AFEC1_AD2                       _UINT32_(79)         /* AFEC1 signal: AFEC1_AD2 on PC15 mux X1 */
#define PIO_PC15X1_AFEC1_AD2                       (_UINT32_(1) << 15)  /* AFEC1 signal: AFEC1_AD2 */

#define PIN_PC12X1_AFEC1_AD3                       _UINT32_(76)         /* AFEC1 signal: AFEC1_AD3 on PC12 mux X1 */
#define PIO_PC12X1_AFEC1_AD3                       (_UINT32_(1) << 12)  /* AFEC1 signal: AFEC1_AD3 */

#define PIN_PC29X1_AFEC1_AD4                       _UINT32_(93)         /* AFEC1 signal: AFEC1_AD4 on PC29 mux X1 */
#define PIO_PC29X1_AFEC1_AD4                       (_UINT32_(1) << 29)  /* AFEC1 signal: AFEC1_AD4 */

#define PIN_PC30X1_AFEC1_AD5                       _UINT32_(94)         /* AFEC1 signal: AFEC1_AD5 on PC30 mux X1 */
#define PIO_PC30X1_AFEC1_AD5                       (_UINT32_(1) << 30)  /* AFEC1 signal: AFEC1_AD5 */

#define PIN_PC31X1_AFEC1_AD6                       _UINT32_(95)         /* AFEC1 signal: AFEC1_AD6 on PC31 mux X1 */
#define PIO_PC31X1_AFEC1_AD6                       (_UINT32_(1) << 31)  /* AFEC1 signal: AFEC1_AD6 */

#define PIN_PC26X1_AFEC1_AD7                       _UINT32_(90)         /* AFEC1 signal: AFEC1_AD7 on PC26 mux X1 */
#define PIO_PC26X1_AFEC1_AD7                       (_UINT32_(1) << 26)  /* AFEC1 signal: AFEC1_AD7 */

#define PIN_PC27X1_AFEC1_AD8                       _UINT32_(91)         /* AFEC1 signal: AFEC1_AD8 on PC27 mux X1 */
#define PIO_PC27X1_AFEC1_AD8                       (_UINT32_(1) << 27)  /* AFEC1 signal: AFEC1_AD8 */

#define PIN_PC00X1_AFEC1_AD9                       _UINT32_(64)         /* AFEC1 signal: AFEC1_AD9 on PC00 mux X1 */
#define PIO_PC00X1_AFEC1_AD9                       (_UINT32_(1) << 0)   /* AFEC1 signal: AFEC1_AD9 */

#define PIN_PE03X1_AFEC1_AD10                      _UINT32_(131)        /* AFEC1 signal: AFEC1_AD10 on PE03 mux X1 */
#define PIO_PE03X1_AFEC1_AD10                      (_UINT32_(1) << 3)   /* AFEC1 signal: AFEC1_AD10 */

#define PIN_PE00X1_AFEC1_AD11                      _UINT32_(128)        /* AFEC1 signal: AFEC1_AD11 on PE00 mux X1 */
#define PIO_PE00X1_AFEC1_AD11                      (_UINT32_(1) << 0)   /* AFEC1 signal: AFEC1_AD11 */

#define PIN_PD09C_AFEC1_ADTRG                      _UINT32_(105)        /* AFEC1 signal: AFEC1_ADTRG on PD09 mux C */
#define MUX_PD09C_AFEC1_ADTRG                      _UINT32_(2)          /* AFEC1 signal line function value: AFEC1_ADTRG */
#define PIO_PD09C_AFEC1_ADTRG                      (_UINT32_(1) << 9)   /* AFEC1 signal: AFEC1_ADTRG */

/* =================== PIO definition for DACC peripheral =================== */
#define PIN_PB13X1_DACC_DAC0                       _UINT32_(45)         /* DACC signal: DACC_DAC0 on PB13 mux X1 */
#define PIO_PB13X1_DACC_DAC0                       (_UINT32_(1) << 13)  /* DACC signal: DACC_DAC0 */

#define PIN_PD00X1_DACC_DAC1                       _UINT32_(96)         /* DACC signal: DACC_DAC1 on PD00 mux X1 */
#define PIO_PD00X1_DACC_DAC1                       (_UINT32_(1) << 0)   /* DACC signal: DACC_DAC1 */

#define PIN_PA02C_DACC_DATRG                       _UINT32_(2)          /* DACC signal: DACC_DATRG on PA02 mux C */
#define MUX_PA02C_DACC_DATRG                       _UINT32_(2)          /* DACC signal line function value: DACC_DATRG */
#define PIO_PA02C_DACC_DATRG                       (_UINT32_(1) << 2)   /* DACC signal: DACC_DATRG */

/* =================== PIO definition for EBI peripheral ==================== */
#define PIN_PC18A_EBI_A0                           _UINT32_(82)         /* EBI signal: EBI_A0 on PC18 mux A */
#define MUX_PC18A_EBI_A0                           _UINT32_(0)          /* EBI signal line function value: EBI_A0 */
#define PIO_PC18A_EBI_A0                           (_UINT32_(1) << 18)  /* EBI signal: EBI_A0 */

#define PIN_PC19A_EBI_A1                           _UINT32_(83)         /* EBI signal: EBI_A1 on PC19 mux A */
#define MUX_PC19A_EBI_A1                           _UINT32_(0)          /* EBI signal line function value: EBI_A1 */
#define PIO_PC19A_EBI_A1                           (_UINT32_(1) << 19)  /* EBI signal: EBI_A1 */

#define PIN_PC20A_EBI_A2                           _UINT32_(84)         /* EBI signal: EBI_A2 on PC20 mux A */
#define MUX_PC20A_EBI_A2                           _UINT32_(0)          /* EBI signal line function value: EBI_A2 */
#define PIO_PC20A_EBI_A2                           (_UINT32_(1) << 20)  /* EBI signal: EBI_A2 */

#define PIN_PC21A_EBI_A3                           _UINT32_(85)         /* EBI signal: EBI_A3 on PC21 mux A */
#define MUX_PC21A_EBI_A3                           _UINT32_(0)          /* EBI signal line function value: EBI_A3 */
#define PIO_PC21A_EBI_A3                           (_UINT32_(1) << 21)  /* EBI signal: EBI_A3 */

#define PIN_PC22A_EBI_A4                           _UINT32_(86)         /* EBI signal: EBI_A4 on PC22 mux A */
#define MUX_PC22A_EBI_A4                           _UINT32_(0)          /* EBI signal line function value: EBI_A4 */
#define PIO_PC22A_EBI_A4                           (_UINT32_(1) << 22)  /* EBI signal: EBI_A4 */

#define PIN_PC23A_EBI_A5                           _UINT32_(87)         /* EBI signal: EBI_A5 on PC23 mux A */
#define MUX_PC23A_EBI_A5                           _UINT32_(0)          /* EBI signal line function value: EBI_A5 */
#define PIO_PC23A_EBI_A5                           (_UINT32_(1) << 23)  /* EBI signal: EBI_A5 */

#define PIN_PC24A_EBI_A6                           _UINT32_(88)         /* EBI signal: EBI_A6 on PC24 mux A */
#define MUX_PC24A_EBI_A6                           _UINT32_(0)          /* EBI signal line function value: EBI_A6 */
#define PIO_PC24A_EBI_A6                           (_UINT32_(1) << 24)  /* EBI signal: EBI_A6 */

#define PIN_PC25A_EBI_A7                           _UINT32_(89)         /* EBI signal: EBI_A7 on PC25 mux A */
#define MUX_PC25A_EBI_A7                           _UINT32_(0)          /* EBI signal line function value: EBI_A7 */
#define PIO_PC25A_EBI_A7                           (_UINT32_(1) << 25)  /* EBI signal: EBI_A7 */

#define PIN_PC26A_EBI_A8                           _UINT32_(90)         /* EBI signal: EBI_A8 on PC26 mux A */
#define MUX_PC26A_EBI_A8                           _UINT32_(0)          /* EBI signal line function value: EBI_A8 */
#define PIO_PC26A_EBI_A8                           (_UINT32_(1) << 26)  /* EBI signal: EBI_A8 */

#define PIN_PC27A_EBI_A9                           _UINT32_(91)         /* EBI signal: EBI_A9 on PC27 mux A */
#define MUX_PC27A_EBI_A9                           _UINT32_(0)          /* EBI signal line function value: EBI_A9 */
#define PIO_PC27A_EBI_A9                           (_UINT32_(1) << 27)  /* EBI signal: EBI_A9 */

#define PIN_PC28A_EBI_A10                          _UINT32_(92)         /* EBI signal: EBI_A10 on PC28 mux A */
#define MUX_PC28A_EBI_A10                          _UINT32_(0)          /* EBI signal line function value: EBI_A10 */
#define PIO_PC28A_EBI_A10                          (_UINT32_(1) << 28)  /* EBI signal: EBI_A10 */

#define PIN_PC29A_EBI_A11                          _UINT32_(93)         /* EBI signal: EBI_A11 on PC29 mux A */
#define MUX_PC29A_EBI_A11                          _UINT32_(0)          /* EBI signal line function value: EBI_A11 */
#define PIO_PC29A_EBI_A11                          (_UINT32_(1) << 29)  /* EBI signal: EBI_A11 */

#define PIN_PC30A_EBI_A12                          _UINT32_(94)         /* EBI signal: EBI_A12 on PC30 mux A */
#define MUX_PC30A_EBI_A12                          _UINT32_(0)          /* EBI signal line function value: EBI_A12 */
#define PIO_PC30A_EBI_A12                          (_UINT32_(1) << 30)  /* EBI signal: EBI_A12 */

#define PIN_PC31A_EBI_A13                          _UINT32_(95)         /* EBI signal: EBI_A13 on PC31 mux A */
#define MUX_PC31A_EBI_A13                          _UINT32_(0)          /* EBI signal line function value: EBI_A13 */
#define PIO_PC31A_EBI_A13                          (_UINT32_(1) << 31)  /* EBI signal: EBI_A13 */

#define PIN_PA18C_EBI_A14                          _UINT32_(18)         /* EBI signal: EBI_A14 on PA18 mux C */
#define MUX_PA18C_EBI_A14                          _UINT32_(2)          /* EBI signal line function value: EBI_A14 */
#define PIO_PA18C_EBI_A14                          (_UINT32_(1) << 18)  /* EBI signal: EBI_A14 */

#define PIN_PA19C_EBI_A15                          _UINT32_(19)         /* EBI signal: EBI_A15 on PA19 mux C */
#define MUX_PA19C_EBI_A15                          _UINT32_(2)          /* EBI signal line function value: EBI_A15 */
#define PIO_PA19C_EBI_A15                          (_UINT32_(1) << 19)  /* EBI signal: EBI_A15 */

#define PIN_PA20C_EBI_A16                          _UINT32_(20)         /* EBI signal: EBI_A16 on PA20 mux C */
#define MUX_PA20C_EBI_A16                          _UINT32_(2)          /* EBI signal line function value: EBI_A16 */
#define PIO_PA20C_EBI_A16                          (_UINT32_(1) << 20)  /* EBI signal: EBI_A16 */

#define PIN_PA00C_EBI_A17                          _UINT32_(0)          /* EBI signal: EBI_A17 on PA00 mux C */
#define MUX_PA00C_EBI_A17                          _UINT32_(2)          /* EBI signal line function value: EBI_A17 */
#define PIO_PA00C_EBI_A17                          (_UINT32_(1) << 0)   /* EBI signal: EBI_A17 */

#define PIN_PA01C_EBI_A18                          _UINT32_(1)          /* EBI signal: EBI_A18 on PA01 mux C */
#define MUX_PA01C_EBI_A18                          _UINT32_(2)          /* EBI signal line function value: EBI_A18 */
#define PIO_PA01C_EBI_A18                          (_UINT32_(1) << 1)   /* EBI signal: EBI_A18 */

#define PIN_PA23C_EBI_A19                          _UINT32_(23)         /* EBI signal: EBI_A19 on PA23 mux C */
#define MUX_PA23C_EBI_A19                          _UINT32_(2)          /* EBI signal line function value: EBI_A19 */
#define PIO_PA23C_EBI_A19                          (_UINT32_(1) << 23)  /* EBI signal: EBI_A19 */

#define PIN_PA24C_EBI_A20                          _UINT32_(24)         /* EBI signal: EBI_A20 on PA24 mux C */
#define MUX_PA24C_EBI_A20                          _UINT32_(2)          /* EBI signal line function value: EBI_A20 */
#define PIO_PA24C_EBI_A20                          (_UINT32_(1) << 24)  /* EBI signal: EBI_A20 */

#define PIN_PC16A_EBI_A21                          _UINT32_(80)         /* EBI signal: EBI_A21 on PC16 mux A */
#define MUX_PC16A_EBI_A21                          _UINT32_(0)          /* EBI signal line function value: EBI_A21 */
#define PIO_PC16A_EBI_A21                          (_UINT32_(1) << 16)  /* EBI signal: EBI_A21 */

#define PIN_PC17A_EBI_A22                          _UINT32_(81)         /* EBI signal: EBI_A22 on PC17 mux A */
#define MUX_PC17A_EBI_A22                          _UINT32_(0)          /* EBI signal line function value: EBI_A22 */
#define PIO_PC17A_EBI_A22                          (_UINT32_(1) << 17)  /* EBI signal: EBI_A22 */

#define PIN_PA25C_EBI_A23                          _UINT32_(25)         /* EBI signal: EBI_A23 on PA25 mux C */
#define MUX_PA25C_EBI_A23                          _UINT32_(2)          /* EBI signal line function value: EBI_A23 */
#define PIO_PA25C_EBI_A23                          (_UINT32_(1) << 25)  /* EBI signal: EBI_A23 */

#define PIN_PC00A_EBI_D0                           _UINT32_(64)         /* EBI signal: EBI_D0 on PC00 mux A */
#define MUX_PC00A_EBI_D0                           _UINT32_(0)          /* EBI signal line function value: EBI_D0 */
#define PIO_PC00A_EBI_D0                           (_UINT32_(1) << 0)   /* EBI signal: EBI_D0 */

#define PIN_PC01A_EBI_D1                           _UINT32_(65)         /* EBI signal: EBI_D1 on PC01 mux A */
#define MUX_PC01A_EBI_D1                           _UINT32_(0)          /* EBI signal line function value: EBI_D1 */
#define PIO_PC01A_EBI_D1                           (_UINT32_(1) << 1)   /* EBI signal: EBI_D1 */

#define PIN_PC02A_EBI_D2                           _UINT32_(66)         /* EBI signal: EBI_D2 on PC02 mux A */
#define MUX_PC02A_EBI_D2                           _UINT32_(0)          /* EBI signal line function value: EBI_D2 */
#define PIO_PC02A_EBI_D2                           (_UINT32_(1) << 2)   /* EBI signal: EBI_D2 */

#define PIN_PC03A_EBI_D3                           _UINT32_(67)         /* EBI signal: EBI_D3 on PC03 mux A */
#define MUX_PC03A_EBI_D3                           _UINT32_(0)          /* EBI signal line function value: EBI_D3 */
#define PIO_PC03A_EBI_D3                           (_UINT32_(1) << 3)   /* EBI signal: EBI_D3 */

#define PIN_PC04A_EBI_D4                           _UINT32_(68)         /* EBI signal: EBI_D4 on PC04 mux A */
#define MUX_PC04A_EBI_D4                           _UINT32_(0)          /* EBI signal line function value: EBI_D4 */
#define PIO_PC04A_EBI_D4                           (_UINT32_(1) << 4)   /* EBI signal: EBI_D4 */

#define PIN_PC05A_EBI_D5                           _UINT32_(69)         /* EBI signal: EBI_D5 on PC05 mux A */
#define MUX_PC05A_EBI_D5                           _UINT32_(0)          /* EBI signal line function value: EBI_D5 */
#define PIO_PC05A_EBI_D5                           (_UINT32_(1) << 5)   /* EBI signal: EBI_D5 */

#define PIN_PC06A_EBI_D6                           _UINT32_(70)         /* EBI signal: EBI_D6 on PC06 mux A */
#define MUX_PC06A_EBI_D6                           _UINT32_(0)          /* EBI signal line function value: EBI_D6 */
#define PIO_PC06A_EBI_D6                           (_UINT32_(1) << 6)   /* EBI signal: EBI_D6 */

#define PIN_PC07A_EBI_D7                           _UINT32_(71)         /* EBI signal: EBI_D7 on PC07 mux A */
#define MUX_PC07A_EBI_D7                           _UINT32_(0)          /* EBI signal line function value: EBI_D7 */
#define PIO_PC07A_EBI_D7                           (_UINT32_(1) << 7)   /* EBI signal: EBI_D7 */

#define PIN_PE00A_EBI_D8                           _UINT32_(128)        /* EBI signal: EBI_D8 on PE00 mux A */
#define MUX_PE00A_EBI_D8                           _UINT32_(0)          /* EBI signal line function value: EBI_D8 */
#define PIO_PE00A_EBI_D8                           (_UINT32_(1) << 0)   /* EBI signal: EBI_D8 */

#define PIN_PE01A_EBI_D9                           _UINT32_(129)        /* EBI signal: EBI_D9 on PE01 mux A */
#define MUX_PE01A_EBI_D9                           _UINT32_(0)          /* EBI signal line function value: EBI_D9 */
#define PIO_PE01A_EBI_D9                           (_UINT32_(1) << 1)   /* EBI signal: EBI_D9 */

#define PIN_PE02A_EBI_D10                          _UINT32_(130)        /* EBI signal: EBI_D10 on PE02 mux A */
#define MUX_PE02A_EBI_D10                          _UINT32_(0)          /* EBI signal line function value: EBI_D10 */
#define PIO_PE02A_EBI_D10                          (_UINT32_(1) << 2)   /* EBI signal: EBI_D10 */

#define PIN_PE03A_EBI_D11                          _UINT32_(131)        /* EBI signal: EBI_D11 on PE03 mux A */
#define MUX_PE03A_EBI_D11                          _UINT32_(0)          /* EBI signal line function value: EBI_D11 */
#define PIO_PE03A_EBI_D11                          (_UINT32_(1) << 3)   /* EBI signal: EBI_D11 */

#define PIN_PE04A_EBI_D12                          _UINT32_(132)        /* EBI signal: EBI_D12 on PE04 mux A */
#define MUX_PE04A_EBI_D12                          _UINT32_(0)          /* EBI signal line function value: EBI_D12 */
#define PIO_PE04A_EBI_D12                          (_UINT32_(1) << 4)   /* EBI signal: EBI_D12 */

#define PIN_PE05A_EBI_D13                          _UINT32_(133)        /* EBI signal: EBI_D13 on PE05 mux A */
#define MUX_PE05A_EBI_D13                          _UINT32_(0)          /* EBI signal line function value: EBI_D13 */
#define PIO_PE05A_EBI_D13                          (_UINT32_(1) << 5)   /* EBI signal: EBI_D13 */

#define PIN_PA15A_EBI_D14                          _UINT32_(15)         /* EBI signal: EBI_D14 on PA15 mux A */
#define MUX_PA15A_EBI_D14                          _UINT32_(0)          /* EBI signal line function value: EBI_D14 */
#define PIO_PA15A_EBI_D14                          (_UINT32_(1) << 15)  /* EBI signal: EBI_D14 */

#define PIN_PA16A_EBI_D15                          _UINT32_(16)         /* EBI signal: EBI_D15 on PA16 mux A */
#define MUX_PA16A_EBI_D15                          _UINT32_(0)          /* EBI signal line function value: EBI_D15 */
#define PIO_PA16A_EBI_D15                          (_UINT32_(1) << 16)  /* EBI signal: EBI_D15 */

#define PIN_PC16A_EBI_NANDALE                      _UINT32_(80)         /* EBI signal: EBI_NANDALE on PC16 mux A */
#define MUX_PC16A_EBI_NANDALE                      _UINT32_(0)          /* EBI signal line function value: EBI_NANDALE */
#define PIO_PC16A_EBI_NANDALE                      (_UINT32_(1) << 16)  /* EBI signal: EBI_NANDALE */

#define PIN_PC17A_EBI_NANDCLE                      _UINT32_(81)         /* EBI signal: EBI_NANDCLE on PC17 mux A */
#define MUX_PC17A_EBI_NANDCLE                      _UINT32_(0)          /* EBI signal line function value: EBI_NANDCLE */
#define PIO_PC17A_EBI_NANDCLE                      (_UINT32_(1) << 17)  /* EBI signal: EBI_NANDCLE */

#define PIN_PC09A_EBI_NANDOE                       _UINT32_(73)         /* EBI signal: EBI_NANDOE on PC09 mux A */
#define MUX_PC09A_EBI_NANDOE                       _UINT32_(0)          /* EBI signal line function value: EBI_NANDOE */
#define PIO_PC09A_EBI_NANDOE                       (_UINT32_(1) << 9)   /* EBI signal: EBI_NANDOE */

#define PIN_PC10A_EBI_NANDWE                       _UINT32_(74)         /* EBI signal: EBI_NANDWE on PC10 mux A */
#define MUX_PC10A_EBI_NANDWE                       _UINT32_(0)          /* EBI signal line function value: EBI_NANDWE */
#define PIO_PC10A_EBI_NANDWE                       (_UINT32_(1) << 10)  /* EBI signal: EBI_NANDWE */

#define PIN_PC18A_EBI_NBS0                         _UINT32_(82)         /* EBI signal: EBI_NBS0 on PC18 mux A */
#define MUX_PC18A_EBI_NBS0                         _UINT32_(0)          /* EBI signal line function value: EBI_NBS0 */
#define PIO_PC18A_EBI_NBS0                         (_UINT32_(1) << 18)  /* EBI signal: EBI_NBS0 */

#define PIN_PD15C_EBI_NBS1                         _UINT32_(111)        /* EBI signal: EBI_NBS1 on PD15 mux C */
#define MUX_PD15C_EBI_NBS1                         _UINT32_(2)          /* EBI signal line function value: EBI_NBS1 */
#define PIO_PD15C_EBI_NBS1                         (_UINT32_(1) << 15)  /* EBI signal: EBI_NBS1 */

#define PIN_PC14A_EBI_NCS0                         _UINT32_(78)         /* EBI signal: EBI_NCS0 on PC14 mux A */
#define MUX_PC14A_EBI_NCS0                         _UINT32_(0)          /* EBI signal line function value: EBI_NCS0 */
#define PIO_PC14A_EBI_NCS0                         (_UINT32_(1) << 14)  /* EBI signal: EBI_NCS0 */

#define PIN_PC15A_EBI_NCS1                         _UINT32_(79)         /* EBI signal: EBI_NCS1 on PC15 mux A */
#define MUX_PC15A_EBI_NCS1                         _UINT32_(0)          /* EBI signal line function value: EBI_NCS1 */
#define PIO_PC15A_EBI_NCS1                         (_UINT32_(1) << 15)  /* EBI signal: EBI_NCS1 */

#define PIN_PD18A_EBI_NCS1                         _UINT32_(114)        /* EBI signal: EBI_NCS1 on PD18 mux A */
#define MUX_PD18A_EBI_NCS1                         _UINT32_(0)          /* EBI signal line function value: EBI_NCS1 */
#define PIO_PD18A_EBI_NCS1                         (_UINT32_(1) << 18)  /* EBI signal: EBI_NCS1 */

#define PIN_PA22C_EBI_NCS2                         _UINT32_(22)         /* EBI signal: EBI_NCS2 on PA22 mux C */
#define MUX_PA22C_EBI_NCS2                         _UINT32_(2)          /* EBI signal line function value: EBI_NCS2 */
#define PIO_PA22C_EBI_NCS2                         (_UINT32_(1) << 22)  /* EBI signal: EBI_NCS2 */

#define PIN_PC12A_EBI_NCS3                         _UINT32_(76)         /* EBI signal: EBI_NCS3 on PC12 mux A */
#define MUX_PC12A_EBI_NCS3                         _UINT32_(0)          /* EBI signal line function value: EBI_NCS3 */
#define PIO_PC12A_EBI_NCS3                         (_UINT32_(1) << 12)  /* EBI signal: EBI_NCS3 */

#define PIN_PD19A_EBI_NCS3                         _UINT32_(115)        /* EBI signal: EBI_NCS3 on PD19 mux A */
#define MUX_PD19A_EBI_NCS3                         _UINT32_(0)          /* EBI signal line function value: EBI_NCS3 */
#define PIO_PD19A_EBI_NCS3                         (_UINT32_(1) << 19)  /* EBI signal: EBI_NCS3 */

#define PIN_PC11A_EBI_NRD                          _UINT32_(75)         /* EBI signal: EBI_NRD on PC11 mux A */
#define MUX_PC11A_EBI_NRD                          _UINT32_(0)          /* EBI signal line function value: EBI_NRD */
#define PIO_PC11A_EBI_NRD                          (_UINT32_(1) << 11)  /* EBI signal: EBI_NRD */

#define PIN_PC13A_EBI_NWAIT                        _UINT32_(77)         /* EBI signal: EBI_NWAIT on PC13 mux A */
#define MUX_PC13A_EBI_NWAIT                        _UINT32_(0)          /* EBI signal line function value: EBI_NWAIT */
#define PIO_PC13A_EBI_NWAIT                        (_UINT32_(1) << 13)  /* EBI signal: EBI_NWAIT */

#define PIN_PC08A_EBI_NWE                          _UINT32_(72)         /* EBI signal: EBI_NWE on PC08 mux A */
#define MUX_PC08A_EBI_NWE                          _UINT32_(0)          /* EBI signal line function value: EBI_NWE */
#define PIO_PC08A_EBI_NWE                          (_UINT32_(1) << 8)   /* EBI signal: EBI_NWE */

#define PIN_PC08A_EBI_NWR0                         _UINT32_(72)         /* EBI signal: EBI_NWR0 on PC08 mux A */
#define MUX_PC08A_EBI_NWR0                         _UINT32_(0)          /* EBI signal line function value: EBI_NWR0 */
#define PIO_PC08A_EBI_NWR0                         (_UINT32_(1) << 8)   /* EBI signal: EBI_NWR0 */

#define PIN_PD15C_EBI_NWR1                         _UINT32_(111)        /* EBI signal: EBI_NWR1 on PD15 mux C */
#define MUX_PD15C_EBI_NWR1                         _UINT32_(2)          /* EBI signal line function value: EBI_NWR1 */
#define PIO_PD15C_EBI_NWR1                         (_UINT32_(1) << 15)  /* EBI signal: EBI_NWR1 */

/* =================== PIO definition for EFC peripheral ==================== */
#define PIN_PB12X1_EFC_ERASE                       _UINT32_(44)         /* EFC signal: EFC_ERASE on PB12 mux X1 */
#define PIO_PB12X1_EFC_ERASE                       (_UINT32_(1) << 12)  /* EFC signal: EFC_ERASE */

/* =================== PIO definition for GMAC peripheral =================== */
#define PIN_PD13A_GMAC_GCOL                        _UINT32_(109)        /* GMAC signal: GMAC_GCOL on PD13 mux A */
#define MUX_PD13A_GMAC_GCOL                        _UINT32_(0)          /* GMAC signal line function value: GMAC_GCOL */
#define PIO_PD13A_GMAC_GCOL                        (_UINT32_(1) << 13)  /* GMAC signal: GMAC_GCOL */

#define PIN_PD10A_GMAC_GCRS                        _UINT32_(106)        /* GMAC signal: GMAC_GCRS on PD10 mux A */
#define MUX_PD10A_GMAC_GCRS                        _UINT32_(0)          /* GMAC signal line function value: GMAC_GCRS */
#define PIO_PD10A_GMAC_GCRS                        (_UINT32_(1) << 10)  /* GMAC signal: GMAC_GCRS */

#define PIN_PD08A_GMAC_GMDC                        _UINT32_(104)        /* GMAC signal: GMAC_GMDC on PD08 mux A */
#define MUX_PD08A_GMAC_GMDC                        _UINT32_(0)          /* GMAC signal line function value: GMAC_GMDC */
#define PIO_PD08A_GMAC_GMDC                        (_UINT32_(1) << 8)   /* GMAC signal: GMAC_GMDC */

#define PIN_PD09A_GMAC_GMDIO                       _UINT32_(105)        /* GMAC signal: GMAC_GMDIO on PD09 mux A */
#define MUX_PD09A_GMAC_GMDIO                       _UINT32_(0)          /* GMAC signal line function value: GMAC_GMDIO */
#define PIO_PD09A_GMAC_GMDIO                       (_UINT32_(1) << 9)   /* GMAC signal: GMAC_GMDIO */

#define PIN_PD05A_GMAC_GRX0                        _UINT32_(101)        /* GMAC signal: GMAC_GRX0 on PD05 mux A */
#define MUX_PD05A_GMAC_GRX0                        _UINT32_(0)          /* GMAC signal line function value: GMAC_GRX0 */
#define PIO_PD05A_GMAC_GRX0                        (_UINT32_(1) << 5)   /* GMAC signal: GMAC_GRX0 */

#define PIN_PD06A_GMAC_GRX1                        _UINT32_(102)        /* GMAC signal: GMAC_GRX1 on PD06 mux A */
#define MUX_PD06A_GMAC_GRX1                        _UINT32_(0)          /* GMAC signal line function value: GMAC_GRX1 */
#define PIO_PD06A_GMAC_GRX1                        (_UINT32_(1) << 6)   /* GMAC signal: GMAC_GRX1 */

#define PIN_PD11A_GMAC_GRX2                        _UINT32_(107)        /* GMAC signal: GMAC_GRX2 on PD11 mux A */
#define MUX_PD11A_GMAC_GRX2                        _UINT32_(0)          /* GMAC signal line function value: GMAC_GRX2 */
#define PIO_PD11A_GMAC_GRX2                        (_UINT32_(1) << 11)  /* GMAC signal: GMAC_GRX2 */

#define PIN_PD12A_GMAC_GRX3                        _UINT32_(108)        /* GMAC signal: GMAC_GRX3 on PD12 mux A */
#define MUX_PD12A_GMAC_GRX3                        _UINT32_(0)          /* GMAC signal line function value: GMAC_GRX3 */
#define PIO_PD12A_GMAC_GRX3                        (_UINT32_(1) << 12)  /* GMAC signal: GMAC_GRX3 */

#define PIN_PD14A_GMAC_GRXCK                       _UINT32_(110)        /* GMAC signal: GMAC_GRXCK on PD14 mux A */
#define MUX_PD14A_GMAC_GRXCK                       _UINT32_(0)          /* GMAC signal line function value: GMAC_GRXCK */
#define PIO_PD14A_GMAC_GRXCK                       (_UINT32_(1) << 14)  /* GMAC signal: GMAC_GRXCK */

#define PIN_PD04A_GMAC_GRXDV                       _UINT32_(100)        /* GMAC signal: GMAC_GRXDV on PD04 mux A */
#define MUX_PD04A_GMAC_GRXDV                       _UINT32_(0)          /* GMAC signal line function value: GMAC_GRXDV */
#define PIO_PD04A_GMAC_GRXDV                       (_UINT32_(1) << 4)   /* GMAC signal: GMAC_GRXDV */

#define PIN_PD07A_GMAC_GRXER                       _UINT32_(103)        /* GMAC signal: GMAC_GRXER on PD07 mux A */
#define MUX_PD07A_GMAC_GRXER                       _UINT32_(0)          /* GMAC signal line function value: GMAC_GRXER */
#define PIO_PD07A_GMAC_GRXER                       (_UINT32_(1) << 7)   /* GMAC signal: GMAC_GRXER */

#define PIN_PB01B_GMAC_GTSUCOMP                    _UINT32_(33)         /* GMAC signal: GMAC_GTSUCOMP on PB01 mux B */
#define MUX_PB01B_GMAC_GTSUCOMP                    _UINT32_(1)          /* GMAC signal line function value: GMAC_GTSUCOMP */
#define PIO_PB01B_GMAC_GTSUCOMP                    (_UINT32_(1) << 1)   /* GMAC signal: GMAC_GTSUCOMP */

#define PIN_PB12B_GMAC_GTSUCOMP                    _UINT32_(44)         /* GMAC signal: GMAC_GTSUCOMP on PB12 mux B */
#define MUX_PB12B_GMAC_GTSUCOMP                    _UINT32_(1)          /* GMAC signal line function value: GMAC_GTSUCOMP */
#define PIO_PB12B_GMAC_GTSUCOMP                    (_UINT32_(1) << 12)  /* GMAC signal: GMAC_GTSUCOMP */

#define PIN_PD11C_GMAC_GTSUCOMP                    _UINT32_(107)        /* GMAC signal: GMAC_GTSUCOMP on PD11 mux C */
#define MUX_PD11C_GMAC_GTSUCOMP                    _UINT32_(2)          /* GMAC signal line function value: GMAC_GTSUCOMP */
#define PIO_PD11C_GMAC_GTSUCOMP                    (_UINT32_(1) << 11)  /* GMAC signal: GMAC_GTSUCOMP */

#define PIN_PD20C_GMAC_GTSUCOMP                    _UINT32_(116)        /* GMAC signal: GMAC_GTSUCOMP on PD20 mux C */
#define MUX_PD20C_GMAC_GTSUCOMP                    _UINT32_(2)          /* GMAC signal line function value: GMAC_GTSUCOMP */
#define PIO_PD20C_GMAC_GTSUCOMP                    (_UINT32_(1) << 20)  /* GMAC signal: GMAC_GTSUCOMP */

#define PIN_PD02A_GMAC_GTX0                        _UINT32_(98)         /* GMAC signal: GMAC_GTX0 on PD02 mux A */
#define MUX_PD02A_GMAC_GTX0                        _UINT32_(0)          /* GMAC signal line function value: GMAC_GTX0 */
#define PIO_PD02A_GMAC_GTX0                        (_UINT32_(1) << 2)   /* GMAC signal: GMAC_GTX0 */

#define PIN_PD03A_GMAC_GTX1                        _UINT32_(99)         /* GMAC signal: GMAC_GTX1 on PD03 mux A */
#define MUX_PD03A_GMAC_GTX1                        _UINT32_(0)          /* GMAC signal line function value: GMAC_GTX1 */
#define PIO_PD03A_GMAC_GTX1                        (_UINT32_(1) << 3)   /* GMAC signal: GMAC_GTX1 */

#define PIN_PD15A_GMAC_GTX2                        _UINT32_(111)        /* GMAC signal: GMAC_GTX2 on PD15 mux A */
#define MUX_PD15A_GMAC_GTX2                        _UINT32_(0)          /* GMAC signal line function value: GMAC_GTX2 */
#define PIO_PD15A_GMAC_GTX2                        (_UINT32_(1) << 15)  /* GMAC signal: GMAC_GTX2 */

#define PIN_PD16A_GMAC_GTX3                        _UINT32_(112)        /* GMAC signal: GMAC_GTX3 on PD16 mux A */
#define MUX_PD16A_GMAC_GTX3                        _UINT32_(0)          /* GMAC signal line function value: GMAC_GTX3 */
#define PIO_PD16A_GMAC_GTX3                        (_UINT32_(1) << 16)  /* GMAC signal: GMAC_GTX3 */

#define PIN_PD00A_GMAC_GTXCK                       _UINT32_(96)         /* GMAC signal: GMAC_GTXCK on PD00 mux A */
#define MUX_PD00A_GMAC_GTXCK                       _UINT32_(0)          /* GMAC signal line function value: GMAC_GTXCK */
#define PIO_PD00A_GMAC_GTXCK                       (_UINT32_(1) << 0)   /* GMAC signal: GMAC_GTXCK */

#define PIN_PD01A_GMAC_GTXEN                       _UINT32_(97)         /* GMAC signal: GMAC_GTXEN on PD01 mux A */
#define MUX_PD01A_GMAC_GTXEN                       _UINT32_(0)          /* GMAC signal line function value: GMAC_GTXEN */
#define PIO_PD01A_GMAC_GTXEN                       (_UINT32_(1) << 1)   /* GMAC signal: GMAC_GTXEN */

#define PIN_PD17A_GMAC_GTXER                       _UINT32_(113)        /* GMAC signal: GMAC_GTXER on PD17 mux A */
#define MUX_PD17A_GMAC_GTXER                       _UINT32_(0)          /* GMAC signal line function value: GMAC_GTXER */
#define PIO_PD17A_GMAC_GTXER                       (_UINT32_(1) << 17)  /* GMAC signal: GMAC_GTXER */

/* ================== PIO definition for HSMCI peripheral =================== */
#define PIN_PA28C_HSMCI_MCCDA                      _UINT32_(28)         /* HSMCI signal: HSMCI_MCCDA on PA28 mux C */
#define MUX_PA28C_HSMCI_MCCDA                      _UINT32_(2)          /* HSMCI signal line function value: HSMCI_MCCDA */
#define PIO_PA28C_HSMCI_MCCDA                      (_UINT32_(1) << 28)  /* HSMCI signal: HSMCI_MCCDA */

#define PIN_PA25D_HSMCI_MCCK                       _UINT32_(25)         /* HSMCI signal: HSMCI_MCCK on PA25 mux D */
#define MUX_PA25D_HSMCI_MCCK                       _UINT32_(3)          /* HSMCI signal line function value: HSMCI_MCCK */
#define PIO_PA25D_HSMCI_MCCK                       (_UINT32_(1) << 25)  /* HSMCI signal: HSMCI_MCCK */

#define PIN_PA30C_HSMCI_MCDA0                      _UINT32_(30)         /* HSMCI signal: HSMCI_MCDA0 on PA30 mux C */
#define MUX_PA30C_HSMCI_MCDA0                      _UINT32_(2)          /* HSMCI signal line function value: HSMCI_MCDA0 */
#define PIO_PA30C_HSMCI_MCDA0                      (_UINT32_(1) << 30)  /* HSMCI signal: HSMCI_MCDA0 */

#define PIN_PA31C_HSMCI_MCDA1                      _UINT32_(31)         /* HSMCI signal: HSMCI_MCDA1 on PA31 mux C */
#define MUX_PA31C_HSMCI_MCDA1                      _UINT32_(2)          /* HSMCI signal line function value: HSMCI_MCDA1 */
#define PIO_PA31C_HSMCI_MCDA1                      (_UINT32_(1) << 31)  /* HSMCI signal: HSMCI_MCDA1 */

#define PIN_PA26C_HSMCI_MCDA2                      _UINT32_(26)         /* HSMCI signal: HSMCI_MCDA2 on PA26 mux C */
#define MUX_PA26C_HSMCI_MCDA2                      _UINT32_(2)          /* HSMCI signal line function value: HSMCI_MCDA2 */
#define PIO_PA26C_HSMCI_MCDA2                      (_UINT32_(1) << 26)  /* HSMCI signal: HSMCI_MCDA2 */

#define PIN_PA27C_HSMCI_MCDA3                      _UINT32_(27)         /* HSMCI signal: HSMCI_MCDA3 on PA27 mux C */
#define MUX_PA27C_HSMCI_MCDA3                      _UINT32_(2)          /* HSMCI signal line function value: HSMCI_MCDA3 */
#define PIO_PA27C_HSMCI_MCDA3                      (_UINT32_(1) << 27)  /* HSMCI signal: HSMCI_MCDA3 */

/* ================== PIO definition for I2SC0 peripheral =================== */
#define PIN_PA01D_I2SC0_CK                         _UINT32_(1)          /* I2SC0 signal: I2SC0_CK on PA01 mux D */
#define MUX_PA01D_I2SC0_CK                         _UINT32_(3)          /* I2SC0 signal line function value: I2SC0_CK */
#define PIO_PA01D_I2SC0_CK                         (_UINT32_(1) << 1)   /* I2SC0 signal: I2SC0_CK */

#define PIN_PA16D_I2SC0_DI0                        _UINT32_(16)         /* I2SC0 signal: I2SC0_DI0 on PA16 mux D */
#define MUX_PA16D_I2SC0_DI0                        _UINT32_(3)          /* I2SC0 signal line function value: I2SC0_DI0 */
#define PIO_PA16D_I2SC0_DI0                        (_UINT32_(1) << 16)  /* I2SC0 signal: I2SC0_DI0 */

#define PIN_PA30D_I2SC0_DO0                        _UINT32_(30)         /* I2SC0 signal: I2SC0_DO0 on PA30 mux D */
#define MUX_PA30D_I2SC0_DO0                        _UINT32_(3)          /* I2SC0 signal line function value: I2SC0_DO0 */
#define PIO_PA30D_I2SC0_DO0                        (_UINT32_(1) << 30)  /* I2SC0 signal: I2SC0_DO0 */

#define PIN_PA00D_I2SC0_MCK                        _UINT32_(0)          /* I2SC0 signal: I2SC0_MCK on PA00 mux D */
#define MUX_PA00D_I2SC0_MCK                        _UINT32_(3)          /* I2SC0 signal line function value: I2SC0_MCK */
#define PIO_PA00D_I2SC0_MCK                        (_UINT32_(1) << 0)   /* I2SC0 signal: I2SC0_MCK */

#define PIN_PA15D_I2SC0_WS                         _UINT32_(15)         /* I2SC0 signal: I2SC0_WS on PA15 mux D */
#define MUX_PA15D_I2SC0_WS                         _UINT32_(3)          /* I2SC0 signal line function value: I2SC0_WS */
#define PIO_PA15D_I2SC0_WS                         (_UINT32_(1) << 15)  /* I2SC0 signal: I2SC0_WS */

/* ================== PIO definition for I2SC1 peripheral =================== */
#define PIN_PA20D_I2SC1_CK                         _UINT32_(20)         /* I2SC1 signal: I2SC1_CK on PA20 mux D */
#define MUX_PA20D_I2SC1_CK                         _UINT32_(3)          /* I2SC1 signal line function value: I2SC1_CK */
#define PIO_PA20D_I2SC1_CK                         (_UINT32_(1) << 20)  /* I2SC1 signal: I2SC1_CK */

#define PIN_PE02C_I2SC1_DI0                        _UINT32_(130)        /* I2SC1 signal: I2SC1_DI0 on PE02 mux C */
#define MUX_PE02C_I2SC1_DI0                        _UINT32_(2)          /* I2SC1 signal line function value: I2SC1_DI0 */
#define PIO_PE02C_I2SC1_DI0                        (_UINT32_(1) << 2)   /* I2SC1 signal: I2SC1_DI0 */

#define PIN_PE01C_I2SC1_DO0                        _UINT32_(129)        /* I2SC1 signal: I2SC1_DO0 on PE01 mux C */
#define MUX_PE01C_I2SC1_DO0                        _UINT32_(2)          /* I2SC1 signal line function value: I2SC1_DO0 */
#define PIO_PE01C_I2SC1_DO0                        (_UINT32_(1) << 1)   /* I2SC1 signal: I2SC1_DO0 */

#define PIN_PA19D_I2SC1_MCK                        _UINT32_(19)         /* I2SC1 signal: I2SC1_MCK on PA19 mux D */
#define MUX_PA19D_I2SC1_MCK                        _UINT32_(3)          /* I2SC1 signal line function value: I2SC1_MCK */
#define PIO_PA19D_I2SC1_MCK                        (_UINT32_(1) << 19)  /* I2SC1 signal: I2SC1_MCK */

#define PIN_PE00C_I2SC1_WS                         _UINT32_(128)        /* I2SC1 signal: I2SC1_WS on PE00 mux C */
#define MUX_PE00C_I2SC1_WS                         _UINT32_(2)          /* I2SC1 signal line function value: I2SC1_WS */
#define PIO_PE00C_I2SC1_WS                         (_UINT32_(1) << 0)   /* I2SC1 signal: I2SC1_WS */

/* =================== PIO definition for ISI peripheral ==================== */
#define PIN_PD22D_ISI_D0                           _UINT32_(118)        /* ISI signal: ISI_D0 on PD22 mux D */
#define MUX_PD22D_ISI_D0                           _UINT32_(3)          /* ISI signal line function value: ISI_D0 */
#define PIO_PD22D_ISI_D0                           (_UINT32_(1) << 22)  /* ISI signal: ISI_D0 */

#define PIN_PD21D_ISI_D1                           _UINT32_(117)        /* ISI signal: ISI_D1 on PD21 mux D */
#define MUX_PD21D_ISI_D1                           _UINT32_(3)          /* ISI signal line function value: ISI_D1 */
#define PIO_PD21D_ISI_D1                           (_UINT32_(1) << 21)  /* ISI signal: ISI_D1 */

#define PIN_PB03D_ISI_D2                           _UINT32_(35)         /* ISI signal: ISI_D2 on PB03 mux D */
#define MUX_PB03D_ISI_D2                           _UINT32_(3)          /* ISI signal line function value: ISI_D2 */
#define PIO_PB03D_ISI_D2                           (_UINT32_(1) << 3)   /* ISI signal: ISI_D2 */

#define PIN_PA09B_ISI_D3                           _UINT32_(9)          /* ISI signal: ISI_D3 on PA09 mux B */
#define MUX_PA09B_ISI_D3                           _UINT32_(1)          /* ISI signal line function value: ISI_D3 */
#define PIO_PA09B_ISI_D3                           (_UINT32_(1) << 9)   /* ISI signal: ISI_D3 */

#define PIN_PA05B_ISI_D4                           _UINT32_(5)          /* ISI signal: ISI_D4 on PA05 mux B */
#define MUX_PA05B_ISI_D4                           _UINT32_(1)          /* ISI signal line function value: ISI_D4 */
#define PIO_PA05B_ISI_D4                           (_UINT32_(1) << 5)   /* ISI signal: ISI_D4 */

#define PIN_PD11D_ISI_D5                           _UINT32_(107)        /* ISI signal: ISI_D5 on PD11 mux D */
#define MUX_PD11D_ISI_D5                           _UINT32_(3)          /* ISI signal line function value: ISI_D5 */
#define PIO_PD11D_ISI_D5                           (_UINT32_(1) << 11)  /* ISI signal: ISI_D5 */

#define PIN_PD12D_ISI_D6                           _UINT32_(108)        /* ISI signal: ISI_D6 on PD12 mux D */
#define MUX_PD12D_ISI_D6                           _UINT32_(3)          /* ISI signal line function value: ISI_D6 */
#define PIO_PD12D_ISI_D6                           (_UINT32_(1) << 12)  /* ISI signal: ISI_D6 */

#define PIN_PA27D_ISI_D7                           _UINT32_(27)         /* ISI signal: ISI_D7 on PA27 mux D */
#define MUX_PA27D_ISI_D7                           _UINT32_(3)          /* ISI signal line function value: ISI_D7 */
#define PIO_PA27D_ISI_D7                           (_UINT32_(1) << 27)  /* ISI signal: ISI_D7 */

#define PIN_PD27D_ISI_D8                           _UINT32_(123)        /* ISI signal: ISI_D8 on PD27 mux D */
#define MUX_PD27D_ISI_D8                           _UINT32_(3)          /* ISI signal line function value: ISI_D8 */
#define PIO_PD27D_ISI_D8                           (_UINT32_(1) << 27)  /* ISI signal: ISI_D8 */

#define PIN_PD28D_ISI_D9                           _UINT32_(124)        /* ISI signal: ISI_D9 on PD28 mux D */
#define MUX_PD28D_ISI_D9                           _UINT32_(3)          /* ISI signal line function value: ISI_D9 */
#define PIO_PD28D_ISI_D9                           (_UINT32_(1) << 28)  /* ISI signal: ISI_D9 */

#define PIN_PD30D_ISI_D10                          _UINT32_(126)        /* ISI signal: ISI_D10 on PD30 mux D */
#define MUX_PD30D_ISI_D10                          _UINT32_(3)          /* ISI signal line function value: ISI_D10 */
#define PIO_PD30D_ISI_D10                          (_UINT32_(1) << 30)  /* ISI signal: ISI_D10 */

#define PIN_PD31D_ISI_D11                          _UINT32_(127)        /* ISI signal: ISI_D11 on PD31 mux D */
#define MUX_PD31D_ISI_D11                          _UINT32_(3)          /* ISI signal line function value: ISI_D11 */
#define PIO_PD31D_ISI_D11                          (_UINT32_(1) << 31)  /* ISI signal: ISI_D11 */

#define PIN_PD24D_ISI_HSYNC                        _UINT32_(120)        /* ISI signal: ISI_HSYNC on PD24 mux D */
#define MUX_PD24D_ISI_HSYNC                        _UINT32_(3)          /* ISI signal line function value: ISI_HSYNC */
#define PIO_PD24D_ISI_HSYNC                        (_UINT32_(1) << 24)  /* ISI signal: ISI_HSYNC */

#define PIN_PA24D_ISI_PCK                          _UINT32_(24)         /* ISI signal: ISI_PCK on PA24 mux D */
#define MUX_PA24D_ISI_PCK                          _UINT32_(3)          /* ISI signal line function value: ISI_PCK */
#define PIO_PA24D_ISI_PCK                          (_UINT32_(1) << 24)  /* ISI signal: ISI_PCK */

#define PIN_PD25D_ISI_VSYNC                        _UINT32_(121)        /* ISI signal: ISI_VSYNC on PD25 mux D */
#define MUX_PD25D_ISI_VSYNC                        _UINT32_(3)          /* ISI signal line function value: ISI_VSYNC */
#define PIO_PD25D_ISI_VSYNC                        (_UINT32_(1) << 25)  /* ISI signal: ISI_VSYNC */

/* ================== PIO definition for MCAN0 peripheral =================== */
#define PIN_PB03A_MCAN0_CANRX0                     _UINT32_(35)         /* MCAN0 signal: MCAN0_CANRX0 on PB03 mux A */
#define MUX_PB03A_MCAN0_CANRX0                     _UINT32_(0)          /* MCAN0 signal line function value: MCAN0_CANRX0 */
#define PIO_PB03A_MCAN0_CANRX0                     (_UINT32_(1) << 3)   /* MCAN0 signal: MCAN0_CANRX0 */

#define PIN_PB02A_MCAN0_CANTX0                     _UINT32_(34)         /* MCAN0 signal: MCAN0_CANTX0 on PB02 mux A */
#define MUX_PB02A_MCAN0_CANTX0                     _UINT32_(0)          /* MCAN0 signal line function value: MCAN0_CANTX0 */
#define PIO_PB02A_MCAN0_CANTX0                     (_UINT32_(1) << 2)   /* MCAN0 signal: MCAN0_CANTX0 */

/* ================== PIO definition for MCAN1 peripheral =================== */
#define PIN_PC12C_MCAN1_CANRX1                     _UINT32_(76)         /* MCAN1 signal: MCAN1_CANRX1 on PC12 mux C */
#define MUX_PC12C_MCAN1_CANRX1                     _UINT32_(2)          /* MCAN1 signal line function value: MCAN1_CANRX1 */
#define PIO_PC12C_MCAN1_CANRX1                     (_UINT32_(1) << 12)  /* MCAN1 signal: MCAN1_CANRX1 */

#define PIN_PC14C_MCAN1_CANTX1                     _UINT32_(78)         /* MCAN1 signal: MCAN1_CANTX1 on PC14 mux C */
#define MUX_PC14C_MCAN1_CANTX1                     _UINT32_(2)          /* MCAN1 signal line function value: MCAN1_CANTX1 */
#define PIO_PC14C_MCAN1_CANTX1                     (_UINT32_(1) << 14)  /* MCAN1 signal: MCAN1_CANTX1 */

#define PIN_PD12B_MCAN1_CANTX1                     _UINT32_(108)        /* MCAN1 signal: MCAN1_CANTX1 on PD12 mux B */
#define MUX_PD12B_MCAN1_CANTX1                     _UINT32_(1)          /* MCAN1 signal line function value: MCAN1_CANTX1 */
#define PIO_PD12B_MCAN1_CANTX1                     (_UINT32_(1) << 12)  /* MCAN1 signal: MCAN1_CANTX1 */

/* =================== PIO definition for MLB peripheral ==================== */
#define PIN_PB04C_MLB_MLBCLK                       _UINT32_(36)         /* MLB signal: MLB_MLBCLK on PB04 mux C */
#define MUX_PB04C_MLB_MLBCLK                       _UINT32_(2)          /* MLB signal line function value: MLB_MLBCLK */
#define PIO_PB04C_MLB_MLBCLK                       (_UINT32_(1) << 4)   /* MLB signal: MLB_MLBCLK */

#define PIN_PB05C_MLB_MLBDAT                       _UINT32_(37)         /* MLB signal: MLB_MLBDAT on PB05 mux C */
#define MUX_PB05C_MLB_MLBDAT                       _UINT32_(2)          /* MLB signal line function value: MLB_MLBDAT */
#define PIO_PB05C_MLB_MLBDAT                       (_UINT32_(1) << 5)   /* MLB signal: MLB_MLBDAT */

#define PIN_PD10D_MLB_MLBSIG                       _UINT32_(106)        /* MLB signal: MLB_MLBSIG on PD10 mux D */
#define MUX_PD10D_MLB_MLBSIG                       _UINT32_(3)          /* MLB signal line function value: MLB_MLBSIG */
#define PIO_PD10D_MLB_MLBSIG                       (_UINT32_(1) << 10)  /* MLB signal: MLB_MLBSIG */

/* =================== PIO definition for PMC peripheral ==================== */
#define PIN_PA06B_PMC_PCK0                         _UINT32_(6)          /* PMC signal: PMC_PCK0 on PA06 mux B */
#define MUX_PA06B_PMC_PCK0                         _UINT32_(1)          /* PMC signal line function value: PMC_PCK0 */
#define PIO_PA06B_PMC_PCK0                         (_UINT32_(1) << 6)   /* PMC signal: PMC_PCK0 */

#define PIN_PB12D_PMC_PCK0                         _UINT32_(44)         /* PMC signal: PMC_PCK0 on PB12 mux D */
#define MUX_PB12D_PMC_PCK0                         _UINT32_(3)          /* PMC signal line function value: PMC_PCK0 */
#define PIO_PB12D_PMC_PCK0                         (_UINT32_(1) << 12)  /* PMC signal: PMC_PCK0 */

#define PIN_PB13B_PMC_PCK0                         _UINT32_(45)         /* PMC signal: PMC_PCK0 on PB13 mux B */
#define MUX_PB13B_PMC_PCK0                         _UINT32_(1)          /* PMC signal line function value: PMC_PCK0 */
#define PIO_PB13B_PMC_PCK0                         (_UINT32_(1) << 13)  /* PMC signal: PMC_PCK0 */

#define PIN_PA17B_PMC_PCK1                         _UINT32_(17)         /* PMC signal: PMC_PCK1 on PA17 mux B */
#define MUX_PA17B_PMC_PCK1                         _UINT32_(1)          /* PMC signal line function value: PMC_PCK1 */
#define PIO_PA17B_PMC_PCK1                         (_UINT32_(1) << 17)  /* PMC signal: PMC_PCK1 */

#define PIN_PA21B_PMC_PCK1                         _UINT32_(21)         /* PMC signal: PMC_PCK1 on PA21 mux B */
#define MUX_PA21B_PMC_PCK1                         _UINT32_(1)          /* PMC signal line function value: PMC_PCK1 */
#define PIO_PA21B_PMC_PCK1                         (_UINT32_(1) << 21)  /* PMC signal: PMC_PCK1 */

#define PIN_PA03C_PMC_PCK2                         _UINT32_(3)          /* PMC signal: PMC_PCK2 on PA03 mux C */
#define MUX_PA03C_PMC_PCK2                         _UINT32_(2)          /* PMC signal line function value: PMC_PCK2 */
#define PIO_PA03C_PMC_PCK2                         (_UINT32_(1) << 3)   /* PMC signal: PMC_PCK2 */

#define PIN_PA18B_PMC_PCK2                         _UINT32_(18)         /* PMC signal: PMC_PCK2 on PA18 mux B */
#define MUX_PA18B_PMC_PCK2                         _UINT32_(1)          /* PMC signal line function value: PMC_PCK2 */
#define PIO_PA18B_PMC_PCK2                         (_UINT32_(1) << 18)  /* PMC signal: PMC_PCK2 */

#define PIN_PA31B_PMC_PCK2                         _UINT32_(31)         /* PMC signal: PMC_PCK2 on PA31 mux B */
#define MUX_PA31B_PMC_PCK2                         _UINT32_(1)          /* PMC signal line function value: PMC_PCK2 */
#define PIO_PA31B_PMC_PCK2                         (_UINT32_(1) << 31)  /* PMC signal: PMC_PCK2 */

#define PIN_PB03B_PMC_PCK2                         _UINT32_(35)         /* PMC signal: PMC_PCK2 on PB03 mux B */
#define MUX_PB03B_PMC_PCK2                         _UINT32_(1)          /* PMC signal line function value: PMC_PCK2 */
#define PIO_PB03B_PMC_PCK2                         (_UINT32_(1) << 3)   /* PMC signal: PMC_PCK2 */

#define PIN_PD31C_PMC_PCK2                         _UINT32_(127)        /* PMC signal: PMC_PCK2 on PD31 mux C */
#define MUX_PD31C_PMC_PCK2                         _UINT32_(2)          /* PMC signal line function value: PMC_PCK2 */
#define PIO_PD31C_PMC_PCK2                         (_UINT32_(1) << 31)  /* PMC signal: PMC_PCK2 */

#define PIN_PB09X1_PMC_XIN                         _UINT32_(41)         /* PMC signal: PMC_XIN on PB09 mux X1 */
#define PIO_PB09X1_PMC_XIN                         (_UINT32_(1) << 9)   /* PMC signal: PMC_XIN */

#define PIN_PA07X1_PMC_XIN32                       _UINT32_(7)          /* PMC signal: PMC_XIN32 on PA07 mux X1 */
#define PIO_PA07X1_PMC_XIN32                       (_UINT32_(1) << 7)   /* PMC signal: PMC_XIN32 */

#define PIN_PB08X1_PMC_XOUT                        _UINT32_(40)         /* PMC signal: PMC_XOUT on PB08 mux X1 */
#define PIO_PB08X1_PMC_XOUT                        (_UINT32_(1) << 8)   /* PMC signal: PMC_XOUT */

#define PIN_PA08X1_PMC_XOUT32                      _UINT32_(8)          /* PMC signal: PMC_XOUT32 on PA08 mux X1 */
#define PIO_PA08X1_PMC_XOUT32                      (_UINT32_(1) << 8)   /* PMC signal: PMC_XOUT32 */

/* =================== PIO definition for PWM0 peripheral =================== */
#define PIN_PA10B_PWM0_PWMEXTRG0                   _UINT32_(10)         /* PWM0 signal: PWM0_PWMEXTRG0 on PA10 mux B */
#define MUX_PA10B_PWM0_PWMEXTRG0                   _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWMEXTRG0 */
#define PIO_PA10B_PWM0_PWMEXTRG0                   (_UINT32_(1) << 10)  /* PWM0 signal: PWM0_PWMEXTRG0 */

#define PIN_PA22B_PWM0_PWMEXTRG1                   _UINT32_(22)         /* PWM0 signal: PWM0_PWMEXTRG1 on PA22 mux B */
#define MUX_PA22B_PWM0_PWMEXTRG1                   _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWMEXTRG1 */
#define PIO_PA22B_PWM0_PWMEXTRG1                   (_UINT32_(1) << 22)  /* PWM0 signal: PWM0_PWMEXTRG1 */

#define PIN_PA09C_PWM0_PWMFI0                      _UINT32_(9)          /* PWM0 signal: PWM0_PWMFI0 on PA09 mux C */
#define MUX_PA09C_PWM0_PWMFI0                      _UINT32_(2)          /* PWM0 signal line function value: PWM0_PWMFI0 */
#define PIO_PA09C_PWM0_PWMFI0                      (_UINT32_(1) << 9)   /* PWM0 signal: PWM0_PWMFI0 */

#define PIN_PD08B_PWM0_PWMFI1                      _UINT32_(104)        /* PWM0 signal: PWM0_PWMFI1 on PD08 mux B */
#define MUX_PD08B_PWM0_PWMFI1                      _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWMFI1 */
#define PIO_PD08B_PWM0_PWMFI1                      (_UINT32_(1) << 8)   /* PWM0 signal: PWM0_PWMFI1 */

#define PIN_PD09B_PWM0_PWMFI2                      _UINT32_(105)        /* PWM0 signal: PWM0_PWMFI2 on PD09 mux B */
#define MUX_PD09B_PWM0_PWMFI2                      _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWMFI2 */
#define PIO_PD09B_PWM0_PWMFI2                      (_UINT32_(1) << 9)   /* PWM0 signal: PWM0_PWMFI2 */

#define PIN_PA00A_PWM0_PWMH0                       _UINT32_(0)          /* PWM0 signal: PWM0_PWMH0 on PA00 mux A */
#define MUX_PA00A_PWM0_PWMH0                       _UINT32_(0)          /* PWM0 signal line function value: PWM0_PWMH0 */
#define PIO_PA00A_PWM0_PWMH0                       (_UINT32_(1) << 0)   /* PWM0 signal: PWM0_PWMH0 */

#define PIN_PA11B_PWM0_PWMH0                       _UINT32_(11)         /* PWM0 signal: PWM0_PWMH0 on PA11 mux B */
#define MUX_PA11B_PWM0_PWMH0                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWMH0 */
#define PIO_PA11B_PWM0_PWMH0                       (_UINT32_(1) << 11)  /* PWM0 signal: PWM0_PWMH0 */

#define PIN_PA23B_PWM0_PWMH0                       _UINT32_(23)         /* PWM0 signal: PWM0_PWMH0 on PA23 mux B */
#define MUX_PA23B_PWM0_PWMH0                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWMH0 */
#define PIO_PA23B_PWM0_PWMH0                       (_UINT32_(1) << 23)  /* PWM0 signal: PWM0_PWMH0 */

#define PIN_PB00A_PWM0_PWMH0                       _UINT32_(32)         /* PWM0 signal: PWM0_PWMH0 on PB00 mux A */
#define MUX_PB00A_PWM0_PWMH0                       _UINT32_(0)          /* PWM0 signal line function value: PWM0_PWMH0 */
#define PIO_PB00A_PWM0_PWMH0                       (_UINT32_(1) << 0)   /* PWM0 signal: PWM0_PWMH0 */

#define PIN_PD11B_PWM0_PWMH0                       _UINT32_(107)        /* PWM0 signal: PWM0_PWMH0 on PD11 mux B */
#define MUX_PD11B_PWM0_PWMH0                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWMH0 */
#define PIO_PD11B_PWM0_PWMH0                       (_UINT32_(1) << 11)  /* PWM0 signal: PWM0_PWMH0 */

#define PIN_PD20A_PWM0_PWMH0                       _UINT32_(116)        /* PWM0 signal: PWM0_PWMH0 on PD20 mux A */
#define MUX_PD20A_PWM0_PWMH0                       _UINT32_(0)          /* PWM0 signal line function value: PWM0_PWMH0 */
#define PIO_PD20A_PWM0_PWMH0                       (_UINT32_(1) << 20)  /* PWM0 signal: PWM0_PWMH0 */

#define PIN_PA02A_PWM0_PWMH1                       _UINT32_(2)          /* PWM0 signal: PWM0_PWMH1 on PA02 mux A */
#define MUX_PA02A_PWM0_PWMH1                       _UINT32_(0)          /* PWM0 signal line function value: PWM0_PWMH1 */
#define PIO_PA02A_PWM0_PWMH1                       (_UINT32_(1) << 2)   /* PWM0 signal: PWM0_PWMH1 */

#define PIN_PA12B_PWM0_PWMH1                       _UINT32_(12)         /* PWM0 signal: PWM0_PWMH1 on PA12 mux B */
#define MUX_PA12B_PWM0_PWMH1                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWMH1 */
#define PIO_PA12B_PWM0_PWMH1                       (_UINT32_(1) << 12)  /* PWM0 signal: PWM0_PWMH1 */

#define PIN_PA24B_PWM0_PWMH1                       _UINT32_(24)         /* PWM0 signal: PWM0_PWMH1 on PA24 mux B */
#define MUX_PA24B_PWM0_PWMH1                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWMH1 */
#define PIO_PA24B_PWM0_PWMH1                       (_UINT32_(1) << 24)  /* PWM0 signal: PWM0_PWMH1 */

#define PIN_PB01A_PWM0_PWMH1                       _UINT32_(33)         /* PWM0 signal: PWM0_PWMH1 on PB01 mux A */
#define MUX_PB01A_PWM0_PWMH1                       _UINT32_(0)          /* PWM0 signal line function value: PWM0_PWMH1 */
#define PIO_PB01A_PWM0_PWMH1                       (_UINT32_(1) << 1)   /* PWM0 signal: PWM0_PWMH1 */

#define PIN_PD21A_PWM0_PWMH1                       _UINT32_(117)        /* PWM0 signal: PWM0_PWMH1 on PD21 mux A */
#define MUX_PD21A_PWM0_PWMH1                       _UINT32_(0)          /* PWM0 signal line function value: PWM0_PWMH1 */
#define PIO_PD21A_PWM0_PWMH1                       (_UINT32_(1) << 21)  /* PWM0 signal: PWM0_PWMH1 */

#define PIN_PA13B_PWM0_PWMH2                       _UINT32_(13)         /* PWM0 signal: PWM0_PWMH2 on PA13 mux B */
#define MUX_PA13B_PWM0_PWMH2                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWMH2 */
#define PIO_PA13B_PWM0_PWMH2                       (_UINT32_(1) << 13)  /* PWM0 signal: PWM0_PWMH2 */

#define PIN_PA25B_PWM0_PWMH2                       _UINT32_(25)         /* PWM0 signal: PWM0_PWMH2 on PA25 mux B */
#define MUX_PA25B_PWM0_PWMH2                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWMH2 */
#define PIO_PA25B_PWM0_PWMH2                       (_UINT32_(1) << 25)  /* PWM0 signal: PWM0_PWMH2 */

#define PIN_PB04B_PWM0_PWMH2                       _UINT32_(36)         /* PWM0 signal: PWM0_PWMH2 on PB04 mux B */
#define MUX_PB04B_PWM0_PWMH2                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWMH2 */
#define PIO_PB04B_PWM0_PWMH2                       (_UINT32_(1) << 4)   /* PWM0 signal: PWM0_PWMH2 */

#define PIN_PC19B_PWM0_PWMH2                       _UINT32_(83)         /* PWM0 signal: PWM0_PWMH2 on PC19 mux B */
#define MUX_PC19B_PWM0_PWMH2                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWMH2 */
#define PIO_PC19B_PWM0_PWMH2                       (_UINT32_(1) << 19)  /* PWM0 signal: PWM0_PWMH2 */

#define PIN_PD22A_PWM0_PWMH2                       _UINT32_(118)        /* PWM0 signal: PWM0_PWMH2 on PD22 mux A */
#define MUX_PD22A_PWM0_PWMH2                       _UINT32_(0)          /* PWM0 signal line function value: PWM0_PWMH2 */
#define PIO_PD22A_PWM0_PWMH2                       (_UINT32_(1) << 22)  /* PWM0 signal: PWM0_PWMH2 */

#define PIN_PA07B_PWM0_PWMH3                       _UINT32_(7)          /* PWM0 signal: PWM0_PWMH3 on PA07 mux B */
#define MUX_PA07B_PWM0_PWMH3                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWMH3 */
#define PIO_PA07B_PWM0_PWMH3                       (_UINT32_(1) << 7)   /* PWM0 signal: PWM0_PWMH3 */

#define PIN_PA14B_PWM0_PWMH3                       _UINT32_(14)         /* PWM0 signal: PWM0_PWMH3 on PA14 mux B */
#define MUX_PA14B_PWM0_PWMH3                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWMH3 */
#define PIO_PA14B_PWM0_PWMH3                       (_UINT32_(1) << 14)  /* PWM0 signal: PWM0_PWMH3 */

#define PIN_PA17C_PWM0_PWMH3                       _UINT32_(17)         /* PWM0 signal: PWM0_PWMH3 on PA17 mux C */
#define MUX_PA17C_PWM0_PWMH3                       _UINT32_(2)          /* PWM0 signal line function value: PWM0_PWMH3 */
#define PIO_PA17C_PWM0_PWMH3                       (_UINT32_(1) << 17)  /* PWM0 signal: PWM0_PWMH3 */

#define PIN_PC13B_PWM0_PWMH3                       _UINT32_(77)         /* PWM0 signal: PWM0_PWMH3 on PC13 mux B */
#define MUX_PC13B_PWM0_PWMH3                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWMH3 */
#define PIO_PC13B_PWM0_PWMH3                       (_UINT32_(1) << 13)  /* PWM0 signal: PWM0_PWMH3 */

#define PIN_PC21B_PWM0_PWMH3                       _UINT32_(85)         /* PWM0 signal: PWM0_PWMH3 on PC21 mux B */
#define MUX_PC21B_PWM0_PWMH3                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWMH3 */
#define PIO_PC21B_PWM0_PWMH3                       (_UINT32_(1) << 21)  /* PWM0 signal: PWM0_PWMH3 */

#define PIN_PD23A_PWM0_PWMH3                       _UINT32_(119)        /* PWM0 signal: PWM0_PWMH3 on PD23 mux A */
#define MUX_PD23A_PWM0_PWMH3                       _UINT32_(0)          /* PWM0 signal line function value: PWM0_PWMH3 */
#define PIO_PD23A_PWM0_PWMH3                       (_UINT32_(1) << 23)  /* PWM0 signal: PWM0_PWMH3 */

#define PIN_PA01A_PWM0_PWML0                       _UINT32_(1)          /* PWM0 signal: PWM0_PWML0 on PA01 mux A */
#define MUX_PA01A_PWM0_PWML0                       _UINT32_(0)          /* PWM0 signal line function value: PWM0_PWML0 */
#define PIO_PA01A_PWM0_PWML0                       (_UINT32_(1) << 1)   /* PWM0 signal: PWM0_PWML0 */

#define PIN_PA19B_PWM0_PWML0                       _UINT32_(19)         /* PWM0 signal: PWM0_PWML0 on PA19 mux B */
#define MUX_PA19B_PWM0_PWML0                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWML0 */
#define PIO_PA19B_PWM0_PWML0                       (_UINT32_(1) << 19)  /* PWM0 signal: PWM0_PWML0 */

#define PIN_PB05B_PWM0_PWML0                       _UINT32_(37)         /* PWM0 signal: PWM0_PWML0 on PB05 mux B */
#define MUX_PB05B_PWM0_PWML0                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWML0 */
#define PIO_PB05B_PWM0_PWML0                       (_UINT32_(1) << 5)   /* PWM0 signal: PWM0_PWML0 */

#define PIN_PC00B_PWM0_PWML0                       _UINT32_(64)         /* PWM0 signal: PWM0_PWML0 on PC00 mux B */
#define MUX_PC00B_PWM0_PWML0                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWML0 */
#define PIO_PC00B_PWM0_PWML0                       (_UINT32_(1) << 0)   /* PWM0 signal: PWM0_PWML0 */

#define PIN_PD10B_PWM0_PWML0                       _UINT32_(106)        /* PWM0 signal: PWM0_PWML0 on PD10 mux B */
#define MUX_PD10B_PWM0_PWML0                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWML0 */
#define PIO_PD10B_PWM0_PWML0                       (_UINT32_(1) << 10)  /* PWM0 signal: PWM0_PWML0 */

#define PIN_PD24A_PWM0_PWML0                       _UINT32_(120)        /* PWM0 signal: PWM0_PWML0 on PD24 mux A */
#define MUX_PD24A_PWM0_PWML0                       _UINT32_(0)          /* PWM0 signal line function value: PWM0_PWML0 */
#define PIO_PD24A_PWM0_PWML0                       (_UINT32_(1) << 24)  /* PWM0 signal: PWM0_PWML0 */

#define PIN_PA20B_PWM0_PWML1                       _UINT32_(20)         /* PWM0 signal: PWM0_PWML1 on PA20 mux B */
#define MUX_PA20B_PWM0_PWML1                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWML1 */
#define PIO_PA20B_PWM0_PWML1                       (_UINT32_(1) << 20)  /* PWM0 signal: PWM0_PWML1 */

#define PIN_PB12A_PWM0_PWML1                       _UINT32_(44)         /* PWM0 signal: PWM0_PWML1 on PB12 mux A */
#define MUX_PB12A_PWM0_PWML1                       _UINT32_(0)          /* PWM0 signal line function value: PWM0_PWML1 */
#define PIO_PB12A_PWM0_PWML1                       (_UINT32_(1) << 12)  /* PWM0 signal: PWM0_PWML1 */

#define PIN_PC01B_PWM0_PWML1                       _UINT32_(65)         /* PWM0 signal: PWM0_PWML1 on PC01 mux B */
#define MUX_PC01B_PWM0_PWML1                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWML1 */
#define PIO_PC01B_PWM0_PWML1                       (_UINT32_(1) << 1)   /* PWM0 signal: PWM0_PWML1 */

#define PIN_PC18B_PWM0_PWML1                       _UINT32_(82)         /* PWM0 signal: PWM0_PWML1 on PC18 mux B */
#define MUX_PC18B_PWM0_PWML1                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWML1 */
#define PIO_PC18B_PWM0_PWML1                       (_UINT32_(1) << 18)  /* PWM0 signal: PWM0_PWML1 */

#define PIN_PD25A_PWM0_PWML1                       _UINT32_(121)        /* PWM0 signal: PWM0_PWML1 on PD25 mux A */
#define MUX_PD25A_PWM0_PWML1                       _UINT32_(0)          /* PWM0 signal line function value: PWM0_PWML1 */
#define PIO_PD25A_PWM0_PWML1                       (_UINT32_(1) << 25)  /* PWM0 signal: PWM0_PWML1 */

#define PIN_PA16C_PWM0_PWML2                       _UINT32_(16)         /* PWM0 signal: PWM0_PWML2 on PA16 mux C */
#define MUX_PA16C_PWM0_PWML2                       _UINT32_(2)          /* PWM0 signal line function value: PWM0_PWML2 */
#define PIO_PA16C_PWM0_PWML2                       (_UINT32_(1) << 16)  /* PWM0 signal: PWM0_PWML2 */

#define PIN_PA30A_PWM0_PWML2                       _UINT32_(30)         /* PWM0 signal: PWM0_PWML2 on PA30 mux A */
#define MUX_PA30A_PWM0_PWML2                       _UINT32_(0)          /* PWM0 signal line function value: PWM0_PWML2 */
#define PIO_PA30A_PWM0_PWML2                       (_UINT32_(1) << 30)  /* PWM0 signal: PWM0_PWML2 */

#define PIN_PB13A_PWM0_PWML2                       _UINT32_(45)         /* PWM0 signal: PWM0_PWML2 on PB13 mux A */
#define MUX_PB13A_PWM0_PWML2                       _UINT32_(0)          /* PWM0 signal line function value: PWM0_PWML2 */
#define PIO_PB13A_PWM0_PWML2                       (_UINT32_(1) << 13)  /* PWM0 signal: PWM0_PWML2 */

#define PIN_PC02B_PWM0_PWML2                       _UINT32_(66)         /* PWM0 signal: PWM0_PWML2 on PC02 mux B */
#define MUX_PC02B_PWM0_PWML2                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWML2 */
#define PIO_PC02B_PWM0_PWML2                       (_UINT32_(1) << 2)   /* PWM0 signal: PWM0_PWML2 */

#define PIN_PC20B_PWM0_PWML2                       _UINT32_(84)         /* PWM0 signal: PWM0_PWML2 on PC20 mux B */
#define MUX_PC20B_PWM0_PWML2                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWML2 */
#define PIO_PC20B_PWM0_PWML2                       (_UINT32_(1) << 20)  /* PWM0 signal: PWM0_PWML2 */

#define PIN_PD26A_PWM0_PWML2                       _UINT32_(122)        /* PWM0 signal: PWM0_PWML2 on PD26 mux A */
#define MUX_PD26A_PWM0_PWML2                       _UINT32_(0)          /* PWM0 signal line function value: PWM0_PWML2 */
#define PIO_PD26A_PWM0_PWML2                       (_UINT32_(1) << 26)  /* PWM0 signal: PWM0_PWML2 */

#define PIN_PA15C_PWM0_PWML3                       _UINT32_(15)         /* PWM0 signal: PWM0_PWML3 on PA15 mux C */
#define MUX_PA15C_PWM0_PWML3                       _UINT32_(2)          /* PWM0 signal line function value: PWM0_PWML3 */
#define PIO_PA15C_PWM0_PWML3                       (_UINT32_(1) << 15)  /* PWM0 signal: PWM0_PWML3 */

#define PIN_PC03B_PWM0_PWML3                       _UINT32_(67)         /* PWM0 signal: PWM0_PWML3 on PC03 mux B */
#define MUX_PC03B_PWM0_PWML3                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWML3 */
#define PIO_PC03B_PWM0_PWML3                       (_UINT32_(1) << 3)   /* PWM0 signal: PWM0_PWML3 */

#define PIN_PC15B_PWM0_PWML3                       _UINT32_(79)         /* PWM0 signal: PWM0_PWML3 on PC15 mux B */
#define MUX_PC15B_PWM0_PWML3                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWML3 */
#define PIO_PC15B_PWM0_PWML3                       (_UINT32_(1) << 15)  /* PWM0 signal: PWM0_PWML3 */

#define PIN_PC22B_PWM0_PWML3                       _UINT32_(86)         /* PWM0 signal: PWM0_PWML3 on PC22 mux B */
#define MUX_PC22B_PWM0_PWML3                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWML3 */
#define PIO_PC22B_PWM0_PWML3                       (_UINT32_(1) << 22)  /* PWM0 signal: PWM0_PWML3 */

#define PIN_PD27A_PWM0_PWML3                       _UINT32_(123)        /* PWM0 signal: PWM0_PWML3 on PD27 mux A */
#define MUX_PD27A_PWM0_PWML3                       _UINT32_(0)          /* PWM0 signal line function value: PWM0_PWML3 */
#define PIO_PD27A_PWM0_PWML3                       (_UINT32_(1) << 27)  /* PWM0 signal: PWM0_PWML3 */

/* =================== PIO definition for PWM1 peripheral =================== */
#define PIN_PA30B_PWM1_PWMEXTRG0                   _UINT32_(30)         /* PWM1 signal: PWM1_PWMEXTRG0 on PA30 mux B */
#define MUX_PA30B_PWM1_PWMEXTRG0                   _UINT32_(1)          /* PWM1 signal line function value: PWM1_PWMEXTRG0 */
#define PIO_PA30B_PWM1_PWMEXTRG0                   (_UINT32_(1) << 30)  /* PWM1 signal: PWM1_PWMEXTRG0 */

#define PIN_PA18A_PWM1_PWMEXTRG1                   _UINT32_(18)         /* PWM1 signal: PWM1_PWMEXTRG1 on PA18 mux A */
#define MUX_PA18A_PWM1_PWMEXTRG1                   _UINT32_(0)          /* PWM1 signal line function value: PWM1_PWMEXTRG1 */
#define PIO_PA18A_PWM1_PWMEXTRG1                   (_UINT32_(1) << 18)  /* PWM1 signal: PWM1_PWMEXTRG1 */

#define PIN_PA21C_PWM1_PWMFI0                      _UINT32_(21)         /* PWM1 signal: PWM1_PWMFI0 on PA21 mux C */
#define MUX_PA21C_PWM1_PWMFI0                      _UINT32_(2)          /* PWM1 signal line function value: PWM1_PWMFI0 */
#define PIO_PA21C_PWM1_PWMFI0                      (_UINT32_(1) << 21)  /* PWM1 signal: PWM1_PWMFI0 */

#define PIN_PA26D_PWM1_PWMFI1                      _UINT32_(26)         /* PWM1 signal: PWM1_PWMFI1 on PA26 mux D */
#define MUX_PA26D_PWM1_PWMFI1                      _UINT32_(3)          /* PWM1 signal line function value: PWM1_PWMFI1 */
#define PIO_PA26D_PWM1_PWMFI1                      (_UINT32_(1) << 26)  /* PWM1 signal: PWM1_PWMFI1 */

#define PIN_PA28D_PWM1_PWMFI2                      _UINT32_(28)         /* PWM1 signal: PWM1_PWMFI2 on PA28 mux D */
#define MUX_PA28D_PWM1_PWMFI2                      _UINT32_(3)          /* PWM1 signal line function value: PWM1_PWMFI2 */
#define PIO_PA28D_PWM1_PWMFI2                      (_UINT32_(1) << 28)  /* PWM1 signal: PWM1_PWMFI2 */

#define PIN_PA12C_PWM1_PWMH0                       _UINT32_(12)         /* PWM1 signal: PWM1_PWMH0 on PA12 mux C */
#define MUX_PA12C_PWM1_PWMH0                       _UINT32_(2)          /* PWM1 signal line function value: PWM1_PWMH0 */
#define PIO_PA12C_PWM1_PWMH0                       (_UINT32_(1) << 12)  /* PWM1 signal: PWM1_PWMH0 */

#define PIN_PD01B_PWM1_PWMH0                       _UINT32_(97)         /* PWM1 signal: PWM1_PWMH0 on PD01 mux B */
#define MUX_PD01B_PWM1_PWMH0                       _UINT32_(1)          /* PWM1 signal line function value: PWM1_PWMH0 */
#define PIO_PD01B_PWM1_PWMH0                       (_UINT32_(1) << 1)   /* PWM1 signal: PWM1_PWMH0 */

#define PIN_PA14C_PWM1_PWMH1                       _UINT32_(14)         /* PWM1 signal: PWM1_PWMH1 on PA14 mux C */
#define MUX_PA14C_PWM1_PWMH1                       _UINT32_(2)          /* PWM1 signal line function value: PWM1_PWMH1 */
#define PIO_PA14C_PWM1_PWMH1                       (_UINT32_(1) << 14)  /* PWM1 signal: PWM1_PWMH1 */

#define PIN_PD03B_PWM1_PWMH1                       _UINT32_(99)         /* PWM1 signal: PWM1_PWMH1 on PD03 mux B */
#define MUX_PD03B_PWM1_PWMH1                       _UINT32_(1)          /* PWM1 signal line function value: PWM1_PWMH1 */
#define PIO_PD03B_PWM1_PWMH1                       (_UINT32_(1) << 3)   /* PWM1 signal: PWM1_PWMH1 */

#define PIN_PA31D_PWM1_PWMH2                       _UINT32_(31)         /* PWM1 signal: PWM1_PWMH2 on PA31 mux D */
#define MUX_PA31D_PWM1_PWMH2                       _UINT32_(3)          /* PWM1 signal line function value: PWM1_PWMH2 */
#define PIO_PA31D_PWM1_PWMH2                       (_UINT32_(1) << 31)  /* PWM1 signal: PWM1_PWMH2 */

#define PIN_PD05B_PWM1_PWMH2                       _UINT32_(101)        /* PWM1 signal: PWM1_PWMH2 on PD05 mux B */
#define MUX_PD05B_PWM1_PWMH2                       _UINT32_(1)          /* PWM1 signal line function value: PWM1_PWMH2 */
#define PIO_PD05B_PWM1_PWMH2                       (_UINT32_(1) << 5)   /* PWM1 signal: PWM1_PWMH2 */

#define PIN_PA08A_PWM1_PWMH3                       _UINT32_(8)          /* PWM1 signal: PWM1_PWMH3 on PA08 mux A */
#define MUX_PA08A_PWM1_PWMH3                       _UINT32_(0)          /* PWM1 signal line function value: PWM1_PWMH3 */
#define PIO_PA08A_PWM1_PWMH3                       (_UINT32_(1) << 8)   /* PWM1 signal: PWM1_PWMH3 */

#define PIN_PD07B_PWM1_PWMH3                       _UINT32_(103)        /* PWM1 signal: PWM1_PWMH3 on PD07 mux B */
#define MUX_PD07B_PWM1_PWMH3                       _UINT32_(1)          /* PWM1 signal line function value: PWM1_PWMH3 */
#define PIO_PD07B_PWM1_PWMH3                       (_UINT32_(1) << 7)   /* PWM1 signal: PWM1_PWMH3 */

#define PIN_PA11C_PWM1_PWML0                       _UINT32_(11)         /* PWM1 signal: PWM1_PWML0 on PA11 mux C */
#define MUX_PA11C_PWM1_PWML0                       _UINT32_(2)          /* PWM1 signal line function value: PWM1_PWML0 */
#define PIO_PA11C_PWM1_PWML0                       (_UINT32_(1) << 11)  /* PWM1 signal: PWM1_PWML0 */

#define PIN_PD00B_PWM1_PWML0                       _UINT32_(96)         /* PWM1 signal: PWM1_PWML0 on PD00 mux B */
#define MUX_PD00B_PWM1_PWML0                       _UINT32_(1)          /* PWM1 signal line function value: PWM1_PWML0 */
#define PIO_PD00B_PWM1_PWML0                       (_UINT32_(1) << 0)   /* PWM1 signal: PWM1_PWML0 */

#define PIN_PA13C_PWM1_PWML1                       _UINT32_(13)         /* PWM1 signal: PWM1_PWML1 on PA13 mux C */
#define MUX_PA13C_PWM1_PWML1                       _UINT32_(2)          /* PWM1 signal line function value: PWM1_PWML1 */
#define PIO_PA13C_PWM1_PWML1                       (_UINT32_(1) << 13)  /* PWM1 signal: PWM1_PWML1 */

#define PIN_PD02B_PWM1_PWML1                       _UINT32_(98)         /* PWM1 signal: PWM1_PWML1 on PD02 mux B */
#define MUX_PD02B_PWM1_PWML1                       _UINT32_(1)          /* PWM1 signal line function value: PWM1_PWML1 */
#define PIO_PD02B_PWM1_PWML1                       (_UINT32_(1) << 2)   /* PWM1 signal: PWM1_PWML1 */

#define PIN_PA23D_PWM1_PWML2                       _UINT32_(23)         /* PWM1 signal: PWM1_PWML2 on PA23 mux D */
#define MUX_PA23D_PWM1_PWML2                       _UINT32_(3)          /* PWM1 signal line function value: PWM1_PWML2 */
#define PIO_PA23D_PWM1_PWML2                       (_UINT32_(1) << 23)  /* PWM1 signal: PWM1_PWML2 */

#define PIN_PD04B_PWM1_PWML2                       _UINT32_(100)        /* PWM1 signal: PWM1_PWML2 on PD04 mux B */
#define MUX_PD04B_PWM1_PWML2                       _UINT32_(1)          /* PWM1 signal line function value: PWM1_PWML2 */
#define PIO_PD04B_PWM1_PWML2                       (_UINT32_(1) << 4)   /* PWM1 signal: PWM1_PWML2 */

#define PIN_PA05A_PWM1_PWML3                       _UINT32_(5)          /* PWM1 signal: PWM1_PWML3 on PA05 mux A */
#define MUX_PA05A_PWM1_PWML3                       _UINT32_(0)          /* PWM1 signal line function value: PWM1_PWML3 */
#define PIO_PA05A_PWM1_PWML3                       (_UINT32_(1) << 5)   /* PWM1 signal: PWM1_PWML3 */

#define PIN_PD06B_PWM1_PWML3                       _UINT32_(102)        /* PWM1 signal: PWM1_PWML3 on PD06 mux B */
#define MUX_PD06B_PWM1_PWML3                       _UINT32_(1)          /* PWM1 signal line function value: PWM1_PWML3 */
#define PIO_PD06B_PWM1_PWML3                       (_UINT32_(1) << 6)   /* PWM1 signal: PWM1_PWML3 */

/* =================== PIO definition for QSPI peripheral =================== */
#define PIN_PA11A_QSPI_QCS                         _UINT32_(11)         /* QSPI signal: QSPI_QCS on PA11 mux A */
#define MUX_PA11A_QSPI_QCS                         _UINT32_(0)          /* QSPI signal line function value: QSPI_QCS */
#define PIO_PA11A_QSPI_QCS                         (_UINT32_(1) << 11)  /* QSPI signal: QSPI_QCS */

#define PIN_PA13A_QSPI_QIO0                        _UINT32_(13)         /* QSPI signal: QSPI_QIO0 on PA13 mux A */
#define MUX_PA13A_QSPI_QIO0                        _UINT32_(0)          /* QSPI signal line function value: QSPI_QIO0 */
#define PIO_PA13A_QSPI_QIO0                        (_UINT32_(1) << 13)  /* QSPI signal: QSPI_QIO0 */

#define PIN_PA12A_QSPI_QIO1                        _UINT32_(12)         /* QSPI signal: QSPI_QIO1 on PA12 mux A */
#define MUX_PA12A_QSPI_QIO1                        _UINT32_(0)          /* QSPI signal line function value: QSPI_QIO1 */
#define PIO_PA12A_QSPI_QIO1                        (_UINT32_(1) << 12)  /* QSPI signal: QSPI_QIO1 */

#define PIN_PA17A_QSPI_QIO2                        _UINT32_(17)         /* QSPI signal: QSPI_QIO2 on PA17 mux A */
#define MUX_PA17A_QSPI_QIO2                        _UINT32_(0)          /* QSPI signal line function value: QSPI_QIO2 */
#define PIO_PA17A_QSPI_QIO2                        (_UINT32_(1) << 17)  /* QSPI signal: QSPI_QIO2 */

#define PIN_PD31A_QSPI_QIO3                        _UINT32_(127)        /* QSPI signal: QSPI_QIO3 on PD31 mux A */
#define MUX_PD31A_QSPI_QIO3                        _UINT32_(0)          /* QSPI signal line function value: QSPI_QIO3 */
#define PIO_PD31A_QSPI_QIO3                        (_UINT32_(1) << 31)  /* QSPI signal: QSPI_QIO3 */

#define PIN_PA14A_QSPI_QSCK                        _UINT32_(14)         /* QSPI signal: QSPI_QSCK on PA14 mux A */
#define MUX_PA14A_QSPI_QSCK                        _UINT32_(0)          /* QSPI signal line function value: QSPI_QSCK */
#define PIO_PA14A_QSPI_QSCK                        (_UINT32_(1) << 14)  /* QSPI signal: QSPI_QSCK */

/* =================== PIO definition for RTC peripheral ==================== */
#define PIN_PB00X1_RTC_RTCOUT0                     _UINT32_(32)         /* RTC signal: RTC_RTCOUT0 on PB00 mux X1 */
#define PIO_PB00X1_RTC_RTCOUT0                     (_UINT32_(1) << 0)   /* RTC signal: RTC_RTCOUT0 */

#define PIN_PB01X1_RTC_RTCOUT1                     _UINT32_(33)         /* RTC signal: RTC_RTCOUT1 on PB01 mux X1 */
#define PIO_PB01X1_RTC_RTCOUT1                     (_UINT32_(1) << 1)   /* RTC signal: RTC_RTCOUT1 */

/* =================== PIO definition for SPI0 peripheral =================== */
#define PIN_PD20B_SPI0_MISO                        _UINT32_(116)        /* SPI0 signal: SPI0_MISO on PD20 mux B */
#define MUX_PD20B_SPI0_MISO                        _UINT32_(1)          /* SPI0 signal line function value: SPI0_MISO */
#define PIO_PD20B_SPI0_MISO                        (_UINT32_(1) << 20)  /* SPI0 signal: SPI0_MISO */

#define PIN_PD21B_SPI0_MOSI                        _UINT32_(117)        /* SPI0 signal: SPI0_MOSI on PD21 mux B */
#define MUX_PD21B_SPI0_MOSI                        _UINT32_(1)          /* SPI0 signal line function value: SPI0_MOSI */
#define PIO_PD21B_SPI0_MOSI                        (_UINT32_(1) << 21)  /* SPI0 signal: SPI0_MOSI */

#define PIN_PB02D_SPI0_NPCS0                       _UINT32_(34)         /* SPI0 signal: SPI0_NPCS0 on PB02 mux D */
#define MUX_PB02D_SPI0_NPCS0                       _UINT32_(3)          /* SPI0 signal line function value: SPI0_NPCS0 */
#define PIO_PB02D_SPI0_NPCS0                       (_UINT32_(1) << 2)   /* SPI0 signal: SPI0_NPCS0 */

#define PIN_PA31A_SPI0_NPCS1                       _UINT32_(31)         /* SPI0 signal: SPI0_NPCS1 on PA31 mux A */
#define MUX_PA31A_SPI0_NPCS1                       _UINT32_(0)          /* SPI0 signal line function value: SPI0_NPCS1 */
#define PIO_PA31A_SPI0_NPCS1                       (_UINT32_(1) << 31)  /* SPI0 signal: SPI0_NPCS1 */

#define PIN_PD25B_SPI0_NPCS1                       _UINT32_(121)        /* SPI0 signal: SPI0_NPCS1 on PD25 mux B */
#define MUX_PD25B_SPI0_NPCS1                       _UINT32_(1)          /* SPI0 signal line function value: SPI0_NPCS1 */
#define PIO_PD25B_SPI0_NPCS1                       (_UINT32_(1) << 25)  /* SPI0 signal: SPI0_NPCS1 */

#define PIN_PD12C_SPI0_NPCS2                       _UINT32_(108)        /* SPI0 signal: SPI0_NPCS2 on PD12 mux C */
#define MUX_PD12C_SPI0_NPCS2                       _UINT32_(2)          /* SPI0 signal line function value: SPI0_NPCS2 */
#define PIO_PD12C_SPI0_NPCS2                       (_UINT32_(1) << 12)  /* SPI0 signal: SPI0_NPCS2 */

#define PIN_PD27B_SPI0_NPCS3                       _UINT32_(123)        /* SPI0 signal: SPI0_NPCS3 on PD27 mux B */
#define MUX_PD27B_SPI0_NPCS3                       _UINT32_(1)          /* SPI0 signal line function value: SPI0_NPCS3 */
#define PIO_PD27B_SPI0_NPCS3                       (_UINT32_(1) << 27)  /* SPI0 signal: SPI0_NPCS3 */

#define PIN_PD22B_SPI0_SPCK                        _UINT32_(118)        /* SPI0 signal: SPI0_SPCK on PD22 mux B */
#define MUX_PD22B_SPI0_SPCK                        _UINT32_(1)          /* SPI0 signal line function value: SPI0_SPCK */
#define PIO_PD22B_SPI0_SPCK                        (_UINT32_(1) << 22)  /* SPI0 signal: SPI0_SPCK */

/* =================== PIO definition for SPI1 peripheral =================== */
#define PIN_PC26C_SPI1_MISO                        _UINT32_(90)         /* SPI1 signal: SPI1_MISO on PC26 mux C */
#define MUX_PC26C_SPI1_MISO                        _UINT32_(2)          /* SPI1 signal line function value: SPI1_MISO */
#define PIO_PC26C_SPI1_MISO                        (_UINT32_(1) << 26)  /* SPI1 signal: SPI1_MISO */

#define PIN_PC27C_SPI1_MOSI                        _UINT32_(91)         /* SPI1 signal: SPI1_MOSI on PC27 mux C */
#define MUX_PC27C_SPI1_MOSI                        _UINT32_(2)          /* SPI1 signal line function value: SPI1_MOSI */
#define PIO_PC27C_SPI1_MOSI                        (_UINT32_(1) << 27)  /* SPI1 signal: SPI1_MOSI */

#define PIN_PC25C_SPI1_NPCS0                       _UINT32_(89)         /* SPI1 signal: SPI1_NPCS0 on PC25 mux C */
#define MUX_PC25C_SPI1_NPCS0                       _UINT32_(2)          /* SPI1 signal line function value: SPI1_NPCS0 */
#define PIO_PC25C_SPI1_NPCS0                       (_UINT32_(1) << 25)  /* SPI1 signal: SPI1_NPCS0 */

#define PIN_PC28C_SPI1_NPCS1                       _UINT32_(92)         /* SPI1 signal: SPI1_NPCS1 on PC28 mux C */
#define MUX_PC28C_SPI1_NPCS1                       _UINT32_(2)          /* SPI1 signal line function value: SPI1_NPCS1 */
#define PIO_PC28C_SPI1_NPCS1                       (_UINT32_(1) << 28)  /* SPI1 signal: SPI1_NPCS1 */

#define PIN_PD00C_SPI1_NPCS1                       _UINT32_(96)         /* SPI1 signal: SPI1_NPCS1 on PD00 mux C */
#define MUX_PD00C_SPI1_NPCS1                       _UINT32_(2)          /* SPI1 signal line function value: SPI1_NPCS1 */
#define PIO_PD00C_SPI1_NPCS1                       (_UINT32_(1) << 0)   /* SPI1 signal: SPI1_NPCS1 */

#define PIN_PC29C_SPI1_NPCS2                       _UINT32_(93)         /* SPI1 signal: SPI1_NPCS2 on PC29 mux C */
#define MUX_PC29C_SPI1_NPCS2                       _UINT32_(2)          /* SPI1 signal line function value: SPI1_NPCS2 */
#define PIO_PC29C_SPI1_NPCS2                       (_UINT32_(1) << 29)  /* SPI1 signal: SPI1_NPCS2 */

#define PIN_PD01C_SPI1_NPCS2                       _UINT32_(97)         /* SPI1 signal: SPI1_NPCS2 on PD01 mux C */
#define MUX_PD01C_SPI1_NPCS2                       _UINT32_(2)          /* SPI1 signal line function value: SPI1_NPCS2 */
#define PIO_PD01C_SPI1_NPCS2                       (_UINT32_(1) << 1)   /* SPI1 signal: SPI1_NPCS2 */

#define PIN_PC30C_SPI1_NPCS3                       _UINT32_(94)         /* SPI1 signal: SPI1_NPCS3 on PC30 mux C */
#define MUX_PC30C_SPI1_NPCS3                       _UINT32_(2)          /* SPI1 signal line function value: SPI1_NPCS3 */
#define PIO_PC30C_SPI1_NPCS3                       (_UINT32_(1) << 30)  /* SPI1 signal: SPI1_NPCS3 */

#define PIN_PD02C_SPI1_NPCS3                       _UINT32_(98)         /* SPI1 signal: SPI1_NPCS3 on PD02 mux C */
#define MUX_PD02C_SPI1_NPCS3                       _UINT32_(2)          /* SPI1 signal line function value: SPI1_NPCS3 */
#define PIO_PD02C_SPI1_NPCS3                       (_UINT32_(1) << 2)   /* SPI1 signal: SPI1_NPCS3 */

#define PIN_PC24C_SPI1_SPCK                        _UINT32_(88)         /* SPI1 signal: SPI1_SPCK on PC24 mux C */
#define MUX_PC24C_SPI1_SPCK                        _UINT32_(2)          /* SPI1 signal line function value: SPI1_SPCK */
#define PIO_PC24C_SPI1_SPCK                        (_UINT32_(1) << 24)  /* SPI1 signal: SPI1_SPCK */

/* =================== PIO definition for SSC peripheral ==================== */
#define PIN_PA10C_SSC_RD                           _UINT32_(10)         /* SSC signal: SSC_RD on PA10 mux C */
#define MUX_PA10C_SSC_RD                           _UINT32_(2)          /* SSC signal line function value: SSC_RD */
#define PIO_PA10C_SSC_RD                           (_UINT32_(1) << 10)  /* SSC signal: SSC_RD */

#define PIN_PD24B_SSC_RF                           _UINT32_(120)        /* SSC signal: SSC_RF on PD24 mux B */
#define MUX_PD24B_SSC_RF                           _UINT32_(1)          /* SSC signal line function value: SSC_RF */
#define PIO_PD24B_SSC_RF                           (_UINT32_(1) << 24)  /* SSC signal: SSC_RF */

#define PIN_PA22A_SSC_RK                           _UINT32_(22)         /* SSC signal: SSC_RK on PA22 mux A */
#define MUX_PA22A_SSC_RK                           _UINT32_(0)          /* SSC signal line function value: SSC_RK */
#define PIO_PA22A_SSC_RK                           (_UINT32_(1) << 22)  /* SSC signal: SSC_RK */

#define PIN_PB05D_SSC_TD                           _UINT32_(37)         /* SSC signal: SSC_TD on PB05 mux D */
#define MUX_PB05D_SSC_TD                           _UINT32_(3)          /* SSC signal line function value: SSC_TD */
#define PIO_PB05D_SSC_TD                           (_UINT32_(1) << 5)   /* SSC signal: SSC_TD */

#define PIN_PD10C_SSC_TD                           _UINT32_(106)        /* SSC signal: SSC_TD on PD10 mux C */
#define MUX_PD10C_SSC_TD                           _UINT32_(2)          /* SSC signal line function value: SSC_TD */
#define PIO_PD10C_SSC_TD                           (_UINT32_(1) << 10)  /* SSC signal: SSC_TD */

#define PIN_PD26B_SSC_TD                           _UINT32_(122)        /* SSC signal: SSC_TD on PD26 mux B */
#define MUX_PD26B_SSC_TD                           _UINT32_(1)          /* SSC signal line function value: SSC_TD */
#define PIO_PD26B_SSC_TD                           (_UINT32_(1) << 26)  /* SSC signal: SSC_TD */

#define PIN_PB00D_SSC_TF                           _UINT32_(32)         /* SSC signal: SSC_TF on PB00 mux D */
#define MUX_PB00D_SSC_TF                           _UINT32_(3)          /* SSC signal line function value: SSC_TF */
#define PIO_PB00D_SSC_TF                           (_UINT32_(1) << 0)   /* SSC signal: SSC_TF */

#define PIN_PB01D_SSC_TK                           _UINT32_(33)         /* SSC signal: SSC_TK on PB01 mux D */
#define MUX_PB01D_SSC_TK                           _UINT32_(3)          /* SSC signal line function value: SSC_TK */
#define PIO_PB01D_SSC_TK                           (_UINT32_(1) << 1)   /* SSC signal: SSC_TK */

/* =================== PIO definition for SUPC peripheral =================== */
#define PIN_PA00X1_SUPC_WKUP0                      _UINT32_(0)          /* SUPC signal: SUPC_WKUP0 on PA00 mux X1 */
#define PIO_PA00X1_SUPC_WKUP0                      (_UINT32_(1) << 0)   /* SUPC signal: SUPC_WKUP0 */

#define PIN_PA01X1_SUPC_WKUP1                      _UINT32_(1)          /* SUPC signal: SUPC_WKUP1 on PA01 mux X1 */
#define PIO_PA01X1_SUPC_WKUP1                      (_UINT32_(1) << 1)   /* SUPC signal: SUPC_WKUP1 */

#define PIN_PA02X1_SUPC_WKUP2                      _UINT32_(2)          /* SUPC signal: SUPC_WKUP2 on PA02 mux X1 */
#define PIO_PA02X1_SUPC_WKUP2                      (_UINT32_(1) << 2)   /* SUPC signal: SUPC_WKUP2 */

#define PIN_PA04X1_SUPC_WKUP3                      _UINT32_(4)          /* SUPC signal: SUPC_WKUP3 on PA04 mux X1 */
#define PIO_PA04X1_SUPC_WKUP3                      (_UINT32_(1) << 4)   /* SUPC signal: SUPC_WKUP3 */

#define PIN_PA05X1_SUPC_WKUP4                      _UINT32_(5)          /* SUPC signal: SUPC_WKUP4 on PA05 mux X1 */
#define PIO_PA05X1_SUPC_WKUP4                      (_UINT32_(1) << 5)   /* SUPC signal: SUPC_WKUP4 */

#define PIN_PD28X1_SUPC_WKUP5                      _UINT32_(124)        /* SUPC signal: SUPC_WKUP5 on PD28 mux X1 */
#define PIO_PD28X1_SUPC_WKUP5                      (_UINT32_(1) << 28)  /* SUPC signal: SUPC_WKUP5 */

#define PIN_PA09X1_SUPC_WKUP6                      _UINT32_(9)          /* SUPC signal: SUPC_WKUP6 on PA09 mux X1 */
#define PIO_PA09X1_SUPC_WKUP6                      (_UINT32_(1) << 9)   /* SUPC signal: SUPC_WKUP6 */

#define PIN_PA11X1_SUPC_WKUP7                      _UINT32_(11)         /* SUPC signal: SUPC_WKUP7 on PA11 mux X1 */
#define PIO_PA11X1_SUPC_WKUP7                      (_UINT32_(1) << 11)  /* SUPC signal: SUPC_WKUP7 */

#define PIN_PA14X1_SUPC_WKUP8                      _UINT32_(14)         /* SUPC signal: SUPC_WKUP8 on PA14 mux X1 */
#define PIO_PA14X1_SUPC_WKUP8                      (_UINT32_(1) << 14)  /* SUPC signal: SUPC_WKUP8 */

#define PIN_PA19X1_SUPC_WKUP9                      _UINT32_(19)         /* SUPC signal: SUPC_WKUP9 on PA19 mux X1 */
#define PIO_PA19X1_SUPC_WKUP9                      (_UINT32_(1) << 19)  /* SUPC signal: SUPC_WKUP9 */

#define PIN_PA20X1_SUPC_WKUP10                     _UINT32_(20)         /* SUPC signal: SUPC_WKUP10 on PA20 mux X1 */
#define PIO_PA20X1_SUPC_WKUP10                     (_UINT32_(1) << 20)  /* SUPC signal: SUPC_WKUP10 */

#define PIN_PA30X1_SUPC_WKUP11                     _UINT32_(30)         /* SUPC signal: SUPC_WKUP11 on PA30 mux X1 */
#define PIO_PA30X1_SUPC_WKUP11                     (_UINT32_(1) << 30)  /* SUPC signal: SUPC_WKUP11 */

#define PIN_PB03X1_SUPC_WKUP12                     _UINT32_(35)         /* SUPC signal: SUPC_WKUP12 on PB03 mux X1 */
#define PIO_PB03X1_SUPC_WKUP12                     (_UINT32_(1) << 3)   /* SUPC signal: SUPC_WKUP12 */

#define PIN_PB05X1_SUPC_WKUP13                     _UINT32_(37)         /* SUPC signal: SUPC_WKUP13 on PB05 mux X1 */
#define PIO_PB05X1_SUPC_WKUP13                     (_UINT32_(1) << 5)   /* SUPC signal: SUPC_WKUP13 */

/* =================== PIO definition for TC0 peripheral ==================== */
#define PIN_PA04B_TC0_TCLK0                        _UINT32_(4)          /* TC0 signal: TC0_TCLK0 on PA04 mux B */
#define MUX_PA04B_TC0_TCLK0                        _UINT32_(1)          /* TC0 signal line function value: TC0_TCLK0 */
#define PIO_PA04B_TC0_TCLK0                        (_UINT32_(1) << 4)   /* TC0 signal: TC0_TCLK0 */

#define PIN_PA28B_TC0_TCLK1                        _UINT32_(28)         /* TC0 signal: TC0_TCLK1 on PA28 mux B */
#define MUX_PA28B_TC0_TCLK1                        _UINT32_(1)          /* TC0 signal line function value: TC0_TCLK1 */
#define PIO_PA28B_TC0_TCLK1                        (_UINT32_(1) << 28)  /* TC0 signal: TC0_TCLK1 */

#define PIN_PA29B_TC0_TCLK2                        _UINT32_(29)         /* TC0 signal: TC0_TCLK2 on PA29 mux B */
#define MUX_PA29B_TC0_TCLK2                        _UINT32_(1)          /* TC0 signal line function value: TC0_TCLK2 */
#define PIO_PA29B_TC0_TCLK2                        (_UINT32_(1) << 29)  /* TC0 signal: TC0_TCLK2 */

#define PIN_PA00B_TC0_TIOA0                        _UINT32_(0)          /* TC0 signal: TC0_TIOA0 on PA00 mux B */
#define MUX_PA00B_TC0_TIOA0                        _UINT32_(1)          /* TC0 signal line function value: TC0_TIOA0 */
#define PIO_PA00B_TC0_TIOA0                        (_UINT32_(1) << 0)   /* TC0 signal: TC0_TIOA0 */

#define PIN_PA15B_TC0_TIOA1                        _UINT32_(15)         /* TC0 signal: TC0_TIOA1 on PA15 mux B */
#define MUX_PA15B_TC0_TIOA1                        _UINT32_(1)          /* TC0 signal line function value: TC0_TIOA1 */
#define PIO_PA15B_TC0_TIOA1                        (_UINT32_(1) << 15)  /* TC0 signal: TC0_TIOA1 */

#define PIN_PA26B_TC0_TIOA2                        _UINT32_(26)         /* TC0 signal: TC0_TIOA2 on PA26 mux B */
#define MUX_PA26B_TC0_TIOA2                        _UINT32_(1)          /* TC0 signal line function value: TC0_TIOA2 */
#define PIO_PA26B_TC0_TIOA2                        (_UINT32_(1) << 26)  /* TC0 signal: TC0_TIOA2 */

#define PIN_PA01B_TC0_TIOB0                        _UINT32_(1)          /* TC0 signal: TC0_TIOB0 on PA01 mux B */
#define MUX_PA01B_TC0_TIOB0                        _UINT32_(1)          /* TC0 signal line function value: TC0_TIOB0 */
#define PIO_PA01B_TC0_TIOB0                        (_UINT32_(1) << 1)   /* TC0 signal: TC0_TIOB0 */

#define PIN_PA16B_TC0_TIOB1                        _UINT32_(16)         /* TC0 signal: TC0_TIOB1 on PA16 mux B */
#define MUX_PA16B_TC0_TIOB1                        _UINT32_(1)          /* TC0 signal line function value: TC0_TIOB1 */
#define PIO_PA16B_TC0_TIOB1                        (_UINT32_(1) << 16)  /* TC0 signal: TC0_TIOB1 */

#define PIN_PA27B_TC0_TIOB2                        _UINT32_(27)         /* TC0 signal: TC0_TIOB2 on PA27 mux B */
#define MUX_PA27B_TC0_TIOB2                        _UINT32_(1)          /* TC0 signal line function value: TC0_TIOB2 */
#define PIO_PA27B_TC0_TIOB2                        (_UINT32_(1) << 27)  /* TC0 signal: TC0_TIOB2 */

/* =================== PIO definition for TC1 peripheral ==================== */
#define PIN_PC25B_TC1_TCLK3                        _UINT32_(89)         /* TC1 signal: TC1_TCLK3 on PC25 mux B */
#define MUX_PC25B_TC1_TCLK3                        _UINT32_(1)          /* TC1 signal line function value: TC1_TCLK3 */
#define PIO_PC25B_TC1_TCLK3                        (_UINT32_(1) << 25)  /* TC1 signal: TC1_TCLK3 */

#define PIN_PC28B_TC1_TCLK4                        _UINT32_(92)         /* TC1 signal: TC1_TCLK4 on PC28 mux B */
#define MUX_PC28B_TC1_TCLK4                        _UINT32_(1)          /* TC1 signal line function value: TC1_TCLK4 */
#define PIO_PC28B_TC1_TCLK4                        (_UINT32_(1) << 28)  /* TC1 signal: TC1_TCLK4 */

#define PIN_PC31B_TC1_TCLK5                        _UINT32_(95)         /* TC1 signal: TC1_TCLK5 on PC31 mux B */
#define MUX_PC31B_TC1_TCLK5                        _UINT32_(1)          /* TC1 signal line function value: TC1_TCLK5 */
#define PIO_PC31B_TC1_TCLK5                        (_UINT32_(1) << 31)  /* TC1 signal: TC1_TCLK5 */

#define PIN_PC23B_TC1_TIOA3                        _UINT32_(87)         /* TC1 signal: TC1_TIOA3 on PC23 mux B */
#define MUX_PC23B_TC1_TIOA3                        _UINT32_(1)          /* TC1 signal line function value: TC1_TIOA3 */
#define PIO_PC23B_TC1_TIOA3                        (_UINT32_(1) << 23)  /* TC1 signal: TC1_TIOA3 */

#define PIN_PC26B_TC1_TIOA4                        _UINT32_(90)         /* TC1 signal: TC1_TIOA4 on PC26 mux B */
#define MUX_PC26B_TC1_TIOA4                        _UINT32_(1)          /* TC1 signal line function value: TC1_TIOA4 */
#define PIO_PC26B_TC1_TIOA4                        (_UINT32_(1) << 26)  /* TC1 signal: TC1_TIOA4 */

#define PIN_PC29B_TC1_TIOA5                        _UINT32_(93)         /* TC1 signal: TC1_TIOA5 on PC29 mux B */
#define MUX_PC29B_TC1_TIOA5                        _UINT32_(1)          /* TC1 signal line function value: TC1_TIOA5 */
#define PIO_PC29B_TC1_TIOA5                        (_UINT32_(1) << 29)  /* TC1 signal: TC1_TIOA5 */

#define PIN_PC24B_TC1_TIOB3                        _UINT32_(88)         /* TC1 signal: TC1_TIOB3 on PC24 mux B */
#define MUX_PC24B_TC1_TIOB3                        _UINT32_(1)          /* TC1 signal line function value: TC1_TIOB3 */
#define PIO_PC24B_TC1_TIOB3                        (_UINT32_(1) << 24)  /* TC1 signal: TC1_TIOB3 */

#define PIN_PC27B_TC1_TIOB4                        _UINT32_(91)         /* TC1 signal: TC1_TIOB4 on PC27 mux B */
#define MUX_PC27B_TC1_TIOB4                        _UINT32_(1)          /* TC1 signal line function value: TC1_TIOB4 */
#define PIO_PC27B_TC1_TIOB4                        (_UINT32_(1) << 27)  /* TC1 signal: TC1_TIOB4 */

#define PIN_PC30B_TC1_TIOB5                        _UINT32_(94)         /* TC1 signal: TC1_TIOB5 on PC30 mux B */
#define MUX_PC30B_TC1_TIOB5                        _UINT32_(1)          /* TC1 signal line function value: TC1_TIOB5 */
#define PIO_PC30B_TC1_TIOB5                        (_UINT32_(1) << 30)  /* TC1 signal: TC1_TIOB5 */

/* =================== PIO definition for TC2 peripheral ==================== */
#define PIN_PC07B_TC2_TCLK6                        _UINT32_(71)         /* TC2 signal: TC2_TCLK6 on PC07 mux B */
#define MUX_PC07B_TC2_TCLK6                        _UINT32_(1)          /* TC2 signal line function value: TC2_TCLK6 */
#define PIO_PC07B_TC2_TCLK6                        (_UINT32_(1) << 7)   /* TC2 signal: TC2_TCLK6 */

#define PIN_PC10B_TC2_TCLK7                        _UINT32_(74)         /* TC2 signal: TC2_TCLK7 on PC10 mux B */
#define MUX_PC10B_TC2_TCLK7                        _UINT32_(1)          /* TC2 signal line function value: TC2_TCLK7 */
#define PIO_PC10B_TC2_TCLK7                        (_UINT32_(1) << 10)  /* TC2 signal: TC2_TCLK7 */

#define PIN_PC14B_TC2_TCLK8                        _UINT32_(78)         /* TC2 signal: TC2_TCLK8 on PC14 mux B */
#define MUX_PC14B_TC2_TCLK8                        _UINT32_(1)          /* TC2 signal line function value: TC2_TCLK8 */
#define PIO_PC14B_TC2_TCLK8                        (_UINT32_(1) << 14)  /* TC2 signal: TC2_TCLK8 */

#define PIN_PC05B_TC2_TIOA6                        _UINT32_(69)         /* TC2 signal: TC2_TIOA6 on PC05 mux B */
#define MUX_PC05B_TC2_TIOA6                        _UINT32_(1)          /* TC2 signal line function value: TC2_TIOA6 */
#define PIO_PC05B_TC2_TIOA6                        (_UINT32_(1) << 5)   /* TC2 signal: TC2_TIOA6 */

#define PIN_PC08B_TC2_TIOA7                        _UINT32_(72)         /* TC2 signal: TC2_TIOA7 on PC08 mux B */
#define MUX_PC08B_TC2_TIOA7                        _UINT32_(1)          /* TC2 signal line function value: TC2_TIOA7 */
#define PIO_PC08B_TC2_TIOA7                        (_UINT32_(1) << 8)   /* TC2 signal: TC2_TIOA7 */

#define PIN_PC11B_TC2_TIOA8                        _UINT32_(75)         /* TC2 signal: TC2_TIOA8 on PC11 mux B */
#define MUX_PC11B_TC2_TIOA8                        _UINT32_(1)          /* TC2 signal line function value: TC2_TIOA8 */
#define PIO_PC11B_TC2_TIOA8                        (_UINT32_(1) << 11)  /* TC2 signal: TC2_TIOA8 */

#define PIN_PC06B_TC2_TIOB6                        _UINT32_(70)         /* TC2 signal: TC2_TIOB6 on PC06 mux B */
#define MUX_PC06B_TC2_TIOB6                        _UINT32_(1)          /* TC2 signal line function value: TC2_TIOB6 */
#define PIO_PC06B_TC2_TIOB6                        (_UINT32_(1) << 6)   /* TC2 signal: TC2_TIOB6 */

#define PIN_PC09B_TC2_TIOB7                        _UINT32_(73)         /* TC2 signal: TC2_TIOB7 on PC09 mux B */
#define MUX_PC09B_TC2_TIOB7                        _UINT32_(1)          /* TC2 signal line function value: TC2_TIOB7 */
#define PIO_PC09B_TC2_TIOB7                        (_UINT32_(1) << 9)   /* TC2 signal: TC2_TIOB7 */

#define PIN_PC12B_TC2_TIOB8                        _UINT32_(76)         /* TC2 signal: TC2_TIOB8 on PC12 mux B */
#define MUX_PC12B_TC2_TIOB8                        _UINT32_(1)          /* TC2 signal line function value: TC2_TIOB8 */
#define PIO_PC12B_TC2_TIOB8                        (_UINT32_(1) << 12)  /* TC2 signal: TC2_TIOB8 */

/* =================== PIO definition for TC3 peripheral ==================== */
#define PIN_PE02B_TC3_TCLK9                        _UINT32_(130)        /* TC3 signal: TC3_TCLK9 on PE02 mux B */
#define MUX_PE02B_TC3_TCLK9                        _UINT32_(1)          /* TC3 signal line function value: TC3_TCLK9 */
#define PIO_PE02B_TC3_TCLK9                        (_UINT32_(1) << 2)   /* TC3 signal: TC3_TCLK9 */

#define PIN_PE05B_TC3_TCLK10                       _UINT32_(133)        /* TC3 signal: TC3_TCLK10 on PE05 mux B */
#define MUX_PE05B_TC3_TCLK10                       _UINT32_(1)          /* TC3 signal line function value: TC3_TCLK10 */
#define PIO_PE05B_TC3_TCLK10                       (_UINT32_(1) << 5)   /* TC3 signal: TC3_TCLK10 */

#define PIN_PD24C_TC3_TCLK11                       _UINT32_(120)        /* TC3 signal: TC3_TCLK11 on PD24 mux C */
#define MUX_PD24C_TC3_TCLK11                       _UINT32_(2)          /* TC3 signal line function value: TC3_TCLK11 */
#define PIO_PD24C_TC3_TCLK11                       (_UINT32_(1) << 24)  /* TC3 signal: TC3_TCLK11 */

#define PIN_PE00B_TC3_TIOA9                        _UINT32_(128)        /* TC3 signal: TC3_TIOA9 on PE00 mux B */
#define MUX_PE00B_TC3_TIOA9                        _UINT32_(1)          /* TC3 signal line function value: TC3_TIOA9 */
#define PIO_PE00B_TC3_TIOA9                        (_UINT32_(1) << 0)   /* TC3 signal: TC3_TIOA9 */

#define PIN_PE03B_TC3_TIOA10                       _UINT32_(131)        /* TC3 signal: TC3_TIOA10 on PE03 mux B */
#define MUX_PE03B_TC3_TIOA10                       _UINT32_(1)          /* TC3 signal line function value: TC3_TIOA10 */
#define PIO_PE03B_TC3_TIOA10                       (_UINT32_(1) << 3)   /* TC3 signal: TC3_TIOA10 */

#define PIN_PD21C_TC3_TIOA11                       _UINT32_(117)        /* TC3 signal: TC3_TIOA11 on PD21 mux C */
#define MUX_PD21C_TC3_TIOA11                       _UINT32_(2)          /* TC3 signal line function value: TC3_TIOA11 */
#define PIO_PD21C_TC3_TIOA11                       (_UINT32_(1) << 21)  /* TC3 signal: TC3_TIOA11 */

#define PIN_PE01B_TC3_TIOB9                        _UINT32_(129)        /* TC3 signal: TC3_TIOB9 on PE01 mux B */
#define MUX_PE01B_TC3_TIOB9                        _UINT32_(1)          /* TC3 signal line function value: TC3_TIOB9 */
#define PIO_PE01B_TC3_TIOB9                        (_UINT32_(1) << 1)   /* TC3 signal: TC3_TIOB9 */

#define PIN_PE04B_TC3_TIOB10                       _UINT32_(132)        /* TC3 signal: TC3_TIOB10 on PE04 mux B */
#define MUX_PE04B_TC3_TIOB10                       _UINT32_(1)          /* TC3 signal line function value: TC3_TIOB10 */
#define PIO_PE04B_TC3_TIOB10                       (_UINT32_(1) << 4)   /* TC3 signal: TC3_TIOB10 */

#define PIN_PD22C_TC3_TIOB11                       _UINT32_(118)        /* TC3 signal: TC3_TIOB11 on PD22 mux C */
#define MUX_PD22C_TC3_TIOB11                       _UINT32_(2)          /* TC3 signal line function value: TC3_TIOB11 */
#define PIO_PD22C_TC3_TIOB11                       (_UINT32_(1) << 22)  /* TC3 signal: TC3_TIOB11 */

/* ================== PIO definition for TWIHS0 peripheral ================== */
#define PIN_PA04A_TWIHS0_TWCK0                     _UINT32_(4)          /* TWIHS0 signal: TWIHS0_TWCK0 on PA04 mux A */
#define MUX_PA04A_TWIHS0_TWCK0                     _UINT32_(0)          /* TWIHS0 signal line function value: TWIHS0_TWCK0 */
#define PIO_PA04A_TWIHS0_TWCK0                     (_UINT32_(1) << 4)   /* TWIHS0 signal: TWIHS0_TWCK0 */

#define PIN_PA03A_TWIHS0_TWD0                      _UINT32_(3)          /* TWIHS0 signal: TWIHS0_TWD0 on PA03 mux A */
#define MUX_PA03A_TWIHS0_TWD0                      _UINT32_(0)          /* TWIHS0 signal line function value: TWIHS0_TWD0 */
#define PIO_PA03A_TWIHS0_TWD0                      (_UINT32_(1) << 3)   /* TWIHS0 signal: TWIHS0_TWD0 */

/* ================== PIO definition for TWIHS1 peripheral ================== */
#define PIN_PB05A_TWIHS1_TWCK1                     _UINT32_(37)         /* TWIHS1 signal: TWIHS1_TWCK1 on PB05 mux A */
#define MUX_PB05A_TWIHS1_TWCK1                     _UINT32_(0)          /* TWIHS1 signal line function value: TWIHS1_TWCK1 */
#define PIO_PB05A_TWIHS1_TWCK1                     (_UINT32_(1) << 5)   /* TWIHS1 signal: TWIHS1_TWCK1 */

#define PIN_PB04A_TWIHS1_TWD1                      _UINT32_(36)         /* TWIHS1 signal: TWIHS1_TWD1 on PB04 mux A */
#define MUX_PB04A_TWIHS1_TWD1                      _UINT32_(0)          /* TWIHS1 signal line function value: TWIHS1_TWD1 */
#define PIO_PB04A_TWIHS1_TWD1                      (_UINT32_(1) << 4)   /* TWIHS1 signal: TWIHS1_TWD1 */

/* ================== PIO definition for TWIHS2 peripheral ================== */
#define PIN_PD28C_TWIHS2_TWCK2                     _UINT32_(124)        /* TWIHS2 signal: TWIHS2_TWCK2 on PD28 mux C */
#define MUX_PD28C_TWIHS2_TWCK2                     _UINT32_(2)          /* TWIHS2 signal line function value: TWIHS2_TWCK2 */
#define PIO_PD28C_TWIHS2_TWCK2                     (_UINT32_(1) << 28)  /* TWIHS2 signal: TWIHS2_TWCK2 */

#define PIN_PD27C_TWIHS2_TWD2                      _UINT32_(123)        /* TWIHS2 signal: TWIHS2_TWD2 on PD27 mux C */
#define MUX_PD27C_TWIHS2_TWD2                      _UINT32_(2)          /* TWIHS2 signal line function value: TWIHS2_TWD2 */
#define PIO_PD27C_TWIHS2_TWD2                      (_UINT32_(1) << 27)  /* TWIHS2 signal: TWIHS2_TWD2 */

/* ================== PIO definition for UART0 peripheral =================== */
#define PIN_PA09A_UART0_URXD0                      _UINT32_(9)          /* UART0 signal: UART0_URXD0 on PA09 mux A */
#define MUX_PA09A_UART0_URXD0                      _UINT32_(0)          /* UART0 signal line function value: UART0_URXD0 */
#define PIO_PA09A_UART0_URXD0                      (_UINT32_(1) << 9)   /* UART0 signal: UART0_URXD0 */

#define PIN_PA10A_UART0_UTXD0                      _UINT32_(10)         /* UART0 signal: UART0_UTXD0 on PA10 mux A */
#define MUX_PA10A_UART0_UTXD0                      _UINT32_(0)          /* UART0 signal line function value: UART0_UTXD0 */
#define PIO_PA10A_UART0_UTXD0                      (_UINT32_(1) << 10)  /* UART0 signal: UART0_UTXD0 */

/* ================== PIO definition for UART1 peripheral =================== */
#define PIN_PA05C_UART1_URXD1                      _UINT32_(5)          /* UART1 signal: UART1_URXD1 on PA05 mux C */
#define MUX_PA05C_UART1_URXD1                      _UINT32_(2)          /* UART1 signal line function value: UART1_URXD1 */
#define PIO_PA05C_UART1_URXD1                      (_UINT32_(1) << 5)   /* UART1 signal: UART1_URXD1 */

#define PIN_PA04C_UART1_UTXD1                      _UINT32_(4)          /* UART1 signal: UART1_UTXD1 on PA04 mux C */
#define MUX_PA04C_UART1_UTXD1                      _UINT32_(2)          /* UART1 signal line function value: UART1_UTXD1 */
#define PIO_PA04C_UART1_UTXD1                      (_UINT32_(1) << 4)   /* UART1 signal: UART1_UTXD1 */

#define PIN_PA06C_UART1_UTXD1                      _UINT32_(6)          /* UART1 signal: UART1_UTXD1 on PA06 mux C */
#define MUX_PA06C_UART1_UTXD1                      _UINT32_(2)          /* UART1 signal line function value: UART1_UTXD1 */
#define PIO_PA06C_UART1_UTXD1                      (_UINT32_(1) << 6)   /* UART1 signal: UART1_UTXD1 */

#define PIN_PD26D_UART1_UTXD1                      _UINT32_(122)        /* UART1 signal: UART1_UTXD1 on PD26 mux D */
#define MUX_PD26D_UART1_UTXD1                      _UINT32_(3)          /* UART1 signal line function value: UART1_UTXD1 */
#define PIO_PD26D_UART1_UTXD1                      (_UINT32_(1) << 26)  /* UART1 signal: UART1_UTXD1 */

/* ================== PIO definition for UART2 peripheral =================== */
#define PIN_PD25C_UART2_URXD2                      _UINT32_(121)        /* UART2 signal: UART2_URXD2 on PD25 mux C */
#define MUX_PD25C_UART2_URXD2                      _UINT32_(2)          /* UART2 signal line function value: UART2_URXD2 */
#define PIO_PD25C_UART2_URXD2                      (_UINT32_(1) << 25)  /* UART2 signal: UART2_URXD2 */

#define PIN_PD26C_UART2_UTXD2                      _UINT32_(122)        /* UART2 signal: UART2_UTXD2 on PD26 mux C */
#define MUX_PD26C_UART2_UTXD2                      _UINT32_(2)          /* UART2 signal line function value: UART2_UTXD2 */
#define PIO_PD26C_UART2_UTXD2                      (_UINT32_(1) << 26)  /* UART2 signal: UART2_UTXD2 */

/* ================== PIO definition for UART3 peripheral =================== */
#define PIN_PD28A_UART3_URXD3                      _UINT32_(124)        /* UART3 signal: UART3_URXD3 on PD28 mux A */
#define MUX_PD28A_UART3_URXD3                      _UINT32_(0)          /* UART3 signal line function value: UART3_URXD3 */
#define PIO_PD28A_UART3_URXD3                      (_UINT32_(1) << 28)  /* UART3 signal: UART3_URXD3 */

#define PIN_PD30A_UART3_UTXD3                      _UINT32_(126)        /* UART3 signal: UART3_UTXD3 on PD30 mux A */
#define MUX_PD30A_UART3_UTXD3                      _UINT32_(0)          /* UART3 signal line function value: UART3_UTXD3 */
#define PIO_PD30A_UART3_UTXD3                      (_UINT32_(1) << 30)  /* UART3 signal: UART3_UTXD3 */

#define PIN_PD31B_UART3_UTXD3                      _UINT32_(127)        /* UART3 signal: UART3_UTXD3 on PD31 mux B */
#define MUX_PD31B_UART3_UTXD3                      _UINT32_(1)          /* UART3 signal line function value: UART3_UTXD3 */
#define PIO_PD31B_UART3_UTXD3                      (_UINT32_(1) << 31)  /* UART3 signal: UART3_UTXD3 */

/* ================== PIO definition for UART4 peripheral =================== */
#define PIN_PD18C_UART4_URXD4                      _UINT32_(114)        /* UART4 signal: UART4_URXD4 on PD18 mux C */
#define MUX_PD18C_UART4_URXD4                      _UINT32_(2)          /* UART4 signal line function value: UART4_URXD4 */
#define PIO_PD18C_UART4_URXD4                      (_UINT32_(1) << 18)  /* UART4 signal: UART4_URXD4 */

#define PIN_PD03C_UART4_UTXD4                      _UINT32_(99)         /* UART4 signal: UART4_UTXD4 on PD03 mux C */
#define MUX_PD03C_UART4_UTXD4                      _UINT32_(2)          /* UART4 signal line function value: UART4_UTXD4 */
#define PIO_PD03C_UART4_UTXD4                      (_UINT32_(1) << 3)   /* UART4 signal: UART4_UTXD4 */

#define PIN_PD19C_UART4_UTXD4                      _UINT32_(115)        /* UART4 signal: UART4_UTXD4 on PD19 mux C */
#define MUX_PD19C_UART4_UTXD4                      _UINT32_(2)          /* UART4 signal line function value: UART4_UTXD4 */
#define PIO_PD19C_UART4_UTXD4                      (_UINT32_(1) << 19)  /* UART4 signal: UART4_UTXD4 */

/* ================== PIO definition for USART0 peripheral ================== */
#define PIN_PB02C_USART0_CTS0                      _UINT32_(34)         /* USART0 signal: USART0_CTS0 on PB02 mux C */
#define MUX_PB02C_USART0_CTS0                      _UINT32_(2)          /* USART0 signal line function value: USART0_CTS0 */
#define PIO_PB02C_USART0_CTS0                      (_UINT32_(1) << 2)   /* USART0 signal: USART0_CTS0 */

#define PIN_PD00D_USART0_DCD0                      _UINT32_(96)         /* USART0 signal: USART0_DCD0 on PD00 mux D */
#define MUX_PD00D_USART0_DCD0                      _UINT32_(3)          /* USART0 signal line function value: USART0_DCD0 */
#define PIO_PD00D_USART0_DCD0                      (_UINT32_(1) << 0)   /* USART0 signal: USART0_DCD0 */

#define PIN_PD02D_USART0_DSR0                      _UINT32_(98)         /* USART0 signal: USART0_DSR0 on PD02 mux D */
#define MUX_PD02D_USART0_DSR0                      _UINT32_(3)          /* USART0 signal line function value: USART0_DSR0 */
#define PIO_PD02D_USART0_DSR0                      (_UINT32_(1) << 2)   /* USART0 signal: USART0_DSR0 */

#define PIN_PD01D_USART0_DTR0                      _UINT32_(97)         /* USART0 signal: USART0_DTR0 on PD01 mux D */
#define MUX_PD01D_USART0_DTR0                      _UINT32_(3)          /* USART0 signal line function value: USART0_DTR0 */
#define PIO_PD01D_USART0_DTR0                      (_UINT32_(1) << 1)   /* USART0 signal: USART0_DTR0 */

#define PIN_PD03D_USART0_RI0                       _UINT32_(99)         /* USART0 signal: USART0_RI0 on PD03 mux D */
#define MUX_PD03D_USART0_RI0                       _UINT32_(3)          /* USART0 signal line function value: USART0_RI0 */
#define PIO_PD03D_USART0_RI0                       (_UINT32_(1) << 3)   /* USART0 signal: USART0_RI0 */

#define PIN_PB03C_USART0_RTS0                      _UINT32_(35)         /* USART0 signal: USART0_RTS0 on PB03 mux C */
#define MUX_PB03C_USART0_RTS0                      _UINT32_(2)          /* USART0 signal line function value: USART0_RTS0 */
#define PIO_PB03C_USART0_RTS0                      (_UINT32_(1) << 3)   /* USART0 signal: USART0_RTS0 */

#define PIN_PB00C_USART0_RXD0                      _UINT32_(32)         /* USART0 signal: USART0_RXD0 on PB00 mux C */
#define MUX_PB00C_USART0_RXD0                      _UINT32_(2)          /* USART0 signal line function value: USART0_RXD0 */
#define PIO_PB00C_USART0_RXD0                      (_UINT32_(1) << 0)   /* USART0 signal: USART0_RXD0 */

#define PIN_PB13C_USART0_SCK0                      _UINT32_(45)         /* USART0 signal: USART0_SCK0 on PB13 mux C */
#define MUX_PB13C_USART0_SCK0                      _UINT32_(2)          /* USART0 signal line function value: USART0_SCK0 */
#define PIO_PB13C_USART0_SCK0                      (_UINT32_(1) << 13)  /* USART0 signal: USART0_SCK0 */

#define PIN_PB01C_USART0_TXD0                      _UINT32_(33)         /* USART0 signal: USART0_TXD0 on PB01 mux C */
#define MUX_PB01C_USART0_TXD0                      _UINT32_(2)          /* USART0 signal line function value: USART0_TXD0 */
#define PIO_PB01C_USART0_TXD0                      (_UINT32_(1) << 1)   /* USART0 signal: USART0_TXD0 */

/* ================== PIO definition for USART1 peripheral ================== */
#define PIN_PA25A_USART1_CTS1                      _UINT32_(25)         /* USART1 signal: USART1_CTS1 on PA25 mux A */
#define MUX_PA25A_USART1_CTS1                      _UINT32_(0)          /* USART1 signal line function value: USART1_CTS1 */
#define PIO_PA25A_USART1_CTS1                      (_UINT32_(1) << 25)  /* USART1 signal: USART1_CTS1 */

#define PIN_PA26A_USART1_DCD1                      _UINT32_(26)         /* USART1 signal: USART1_DCD1 on PA26 mux A */
#define MUX_PA26A_USART1_DCD1                      _UINT32_(0)          /* USART1 signal line function value: USART1_DCD1 */
#define PIO_PA26A_USART1_DCD1                      (_UINT32_(1) << 26)  /* USART1 signal: USART1_DCD1 */

#define PIN_PA28A_USART1_DSR1                      _UINT32_(28)         /* USART1 signal: USART1_DSR1 on PA28 mux A */
#define MUX_PA28A_USART1_DSR1                      _UINT32_(0)          /* USART1 signal line function value: USART1_DSR1 */
#define PIO_PA28A_USART1_DSR1                      (_UINT32_(1) << 28)  /* USART1 signal: USART1_DSR1 */

#define PIN_PA27A_USART1_DTR1                      _UINT32_(27)         /* USART1 signal: USART1_DTR1 on PA27 mux A */
#define MUX_PA27A_USART1_DTR1                      _UINT32_(0)          /* USART1 signal line function value: USART1_DTR1 */
#define PIO_PA27A_USART1_DTR1                      (_UINT32_(1) << 27)  /* USART1 signal: USART1_DTR1 */

#define PIN_PA03B_USART1_LONCOL1                   _UINT32_(3)          /* USART1 signal: USART1_LONCOL1 on PA03 mux B */
#define MUX_PA03B_USART1_LONCOL1                   _UINT32_(1)          /* USART1 signal line function value: USART1_LONCOL1 */
#define PIO_PA03B_USART1_LONCOL1                   (_UINT32_(1) << 3)   /* USART1 signal: USART1_LONCOL1 */

#define PIN_PA29A_USART1_RI1                       _UINT32_(29)         /* USART1 signal: USART1_RI1 on PA29 mux A */
#define MUX_PA29A_USART1_RI1                       _UINT32_(0)          /* USART1 signal line function value: USART1_RI1 */
#define PIO_PA29A_USART1_RI1                       (_UINT32_(1) << 29)  /* USART1 signal: USART1_RI1 */

#define PIN_PA24A_USART1_RTS1                      _UINT32_(24)         /* USART1 signal: USART1_RTS1 on PA24 mux A */
#define MUX_PA24A_USART1_RTS1                      _UINT32_(0)          /* USART1 signal line function value: USART1_RTS1 */
#define PIO_PA24A_USART1_RTS1                      (_UINT32_(1) << 24)  /* USART1 signal: USART1_RTS1 */

#define PIN_PA21A_USART1_RXD1                      _UINT32_(21)         /* USART1 signal: USART1_RXD1 on PA21 mux A */
#define MUX_PA21A_USART1_RXD1                      _UINT32_(0)          /* USART1 signal line function value: USART1_RXD1 */
#define PIO_PA21A_USART1_RXD1                      (_UINT32_(1) << 21)  /* USART1 signal: USART1_RXD1 */

#define PIN_PA23A_USART1_SCK1                      _UINT32_(23)         /* USART1 signal: USART1_SCK1 on PA23 mux A */
#define MUX_PA23A_USART1_SCK1                      _UINT32_(0)          /* USART1 signal line function value: USART1_SCK1 */
#define PIO_PA23A_USART1_SCK1                      (_UINT32_(1) << 23)  /* USART1 signal: USART1_SCK1 */

#define PIN_PB04D_USART1_TXD1                      _UINT32_(36)         /* USART1 signal: USART1_TXD1 on PB04 mux D */
#define MUX_PB04D_USART1_TXD1                      _UINT32_(3)          /* USART1 signal line function value: USART1_TXD1 */
#define PIO_PB04D_USART1_TXD1                      (_UINT32_(1) << 4)   /* USART1 signal: USART1_TXD1 */

/* ================== PIO definition for USART2 peripheral ================== */
#define PIN_PD19B_USART2_CTS2                      _UINT32_(115)        /* USART2 signal: USART2_CTS2 on PD19 mux B */
#define MUX_PD19B_USART2_CTS2                      _UINT32_(1)          /* USART2 signal line function value: USART2_CTS2 */
#define PIO_PD19B_USART2_CTS2                      (_UINT32_(1) << 19)  /* USART2 signal: USART2_CTS2 */

#define PIN_PD04D_USART2_DCD2                      _UINT32_(100)        /* USART2 signal: USART2_DCD2 on PD04 mux D */
#define MUX_PD04D_USART2_DCD2                      _UINT32_(3)          /* USART2 signal line function value: USART2_DCD2 */
#define PIO_PD04D_USART2_DCD2                      (_UINT32_(1) << 4)   /* USART2 signal: USART2_DCD2 */

#define PIN_PD06D_USART2_DSR2                      _UINT32_(102)        /* USART2 signal: USART2_DSR2 on PD06 mux D */
#define MUX_PD06D_USART2_DSR2                      _UINT32_(3)          /* USART2 signal line function value: USART2_DSR2 */
#define PIO_PD06D_USART2_DSR2                      (_UINT32_(1) << 6)   /* USART2 signal: USART2_DSR2 */

#define PIN_PD05D_USART2_DTR2                      _UINT32_(101)        /* USART2 signal: USART2_DTR2 on PD05 mux D */
#define MUX_PD05D_USART2_DTR2                      _UINT32_(3)          /* USART2 signal line function value: USART2_DTR2 */
#define PIO_PD05D_USART2_DTR2                      (_UINT32_(1) << 5)   /* USART2 signal: USART2_DTR2 */

#define PIN_PD07D_USART2_RI2                       _UINT32_(103)        /* USART2 signal: USART2_RI2 on PD07 mux D */
#define MUX_PD07D_USART2_RI2                       _UINT32_(3)          /* USART2 signal line function value: USART2_RI2 */
#define PIO_PD07D_USART2_RI2                       (_UINT32_(1) << 7)   /* USART2 signal: USART2_RI2 */

#define PIN_PD18B_USART2_RTS2                      _UINT32_(114)        /* USART2 signal: USART2_RTS2 on PD18 mux B */
#define MUX_PD18B_USART2_RTS2                      _UINT32_(1)          /* USART2 signal line function value: USART2_RTS2 */
#define PIO_PD18B_USART2_RTS2                      (_UINT32_(1) << 18)  /* USART2 signal: USART2_RTS2 */

#define PIN_PD15B_USART2_RXD2                      _UINT32_(111)        /* USART2 signal: USART2_RXD2 on PD15 mux B */
#define MUX_PD15B_USART2_RXD2                      _UINT32_(1)          /* USART2 signal line function value: USART2_RXD2 */
#define PIO_PD15B_USART2_RXD2                      (_UINT32_(1) << 15)  /* USART2 signal: USART2_RXD2 */

#define PIN_PD17B_USART2_SCK2                      _UINT32_(113)        /* USART2 signal: USART2_SCK2 on PD17 mux B */
#define MUX_PD17B_USART2_SCK2                      _UINT32_(1)          /* USART2 signal line function value: USART2_SCK2 */
#define PIO_PD17B_USART2_SCK2                      (_UINT32_(1) << 17)  /* USART2 signal: USART2_SCK2 */

#define PIN_PD16B_USART2_TXD2                      _UINT32_(112)        /* USART2 signal: USART2_TXD2 on PD16 mux B */
#define MUX_PD16B_USART2_TXD2                      _UINT32_(1)          /* USART2 signal line function value: USART2_TXD2 */
#define PIO_PD16B_USART2_TXD2                      (_UINT32_(1) << 16)  /* USART2 signal: USART2_TXD2 */

/* =================== PIO definition for ICE peripheral ==================== */
#define PIN_PB07X1_ICE_SWDCLK                      _UINT32_(39)         /* ICE signal: ICE_SWDCLK on PB07 mux X1 */
#define PIO_PB07X1_ICE_SWDCLK                      (_UINT32_(1) << 7)   /* ICE signal: ICE_SWDCLK */

#define PIN_PB06X1_ICE_SWDIO                       _UINT32_(38)         /* ICE signal: ICE_SWDIO on PB06 mux X1 */
#define PIO_PB06X1_ICE_SWDIO                       (_UINT32_(1) << 6)   /* ICE signal: ICE_SWDIO */

#define PIN_PB07X1_ICE_TCK                         _UINT32_(39)         /* ICE signal: ICE_TCK on PB07 mux X1 */
#define PIO_PB07X1_ICE_TCK                         (_UINT32_(1) << 7)   /* ICE signal: ICE_TCK */

#define PIN_PB04X1_ICE_TDI                         _UINT32_(36)         /* ICE signal: ICE_TDI on PB04 mux X1 */
#define PIO_PB04X1_ICE_TDI                         (_UINT32_(1) << 4)   /* ICE signal: ICE_TDI */

#define PIN_PB05X1_ICE_TDO                         _UINT32_(37)         /* ICE signal: ICE_TDO on PB05 mux X1 */
#define PIO_PB05X1_ICE_TDO                         (_UINT32_(1) << 5)   /* ICE signal: ICE_TDO */

#define PIN_PB06X1_ICE_TMS                         _UINT32_(38)         /* ICE signal: ICE_TMS on PB06 mux X1 */
#define PIO_PB06X1_ICE_TMS                         (_UINT32_(1) << 6)   /* ICE signal: ICE_TMS */

#define PIN_PB05X1_ICE_TRACESWO                    _UINT32_(37)         /* ICE signal: ICE_TRACESWO on PB05 mux X1 */
#define PIO_PB05X1_ICE_TRACESWO                    (_UINT32_(1) << 5)   /* ICE signal: ICE_TRACESWO */

/* =================== PIO definition for TPIU peripheral =================== */
#define PIN_PD08D_TPIU_TRACECLK                    _UINT32_(104)        /* TPIU signal: TPIU_TRACECLK on PD08 mux D */
#define MUX_PD08D_TPIU_TRACECLK                    _UINT32_(3)          /* TPIU signal line function value: TPIU_TRACECLK */
#define PIO_PD08D_TPIU_TRACECLK                    (_UINT32_(1) << 8)   /* TPIU signal: TPIU_TRACECLK */

#define PIN_PD04C_TPIU_TRACED0                     _UINT32_(100)        /* TPIU signal: TPIU_TRACED0 on PD04 mux C */
#define MUX_PD04C_TPIU_TRACED0                     _UINT32_(2)          /* TPIU signal line function value: TPIU_TRACED0 */
#define PIO_PD04C_TPIU_TRACED0                     (_UINT32_(1) << 4)   /* TPIU signal: TPIU_TRACED0 */

#define PIN_PD05C_TPIU_TRACED1                     _UINT32_(101)        /* TPIU signal: TPIU_TRACED1 on PD05 mux C */
#define MUX_PD05C_TPIU_TRACED1                     _UINT32_(2)          /* TPIU signal line function value: TPIU_TRACED1 */
#define PIO_PD05C_TPIU_TRACED1                     (_UINT32_(1) << 5)   /* TPIU signal: TPIU_TRACED1 */

#define PIN_PD06C_TPIU_TRACED2                     _UINT32_(102)        /* TPIU signal: TPIU_TRACED2 on PD06 mux C */
#define MUX_PD06C_TPIU_TRACED2                     _UINT32_(2)          /* TPIU signal line function value: TPIU_TRACED2 */
#define PIO_PD06C_TPIU_TRACED2                     (_UINT32_(1) << 6)   /* TPIU signal: TPIU_TRACED2 */

#define PIN_PD07C_TPIU_TRACED3                     _UINT32_(103)        /* TPIU signal: TPIU_TRACED3 on PD07 mux C */
#define MUX_PD07C_TPIU_TRACED3                     _UINT32_(2)          /* TPIU signal line function value: TPIU_TRACED3 */
#define PIO_PD07C_TPIU_TRACED3                     (_UINT32_(1) << 7)   /* TPIU signal: TPIU_TRACED3 */



#endif /* _pic32cz2051ca70144_GPIO_H_ */

