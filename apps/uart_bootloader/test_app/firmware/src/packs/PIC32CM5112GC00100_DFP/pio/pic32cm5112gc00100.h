/*
 * Peripheral I/O description for PIC32CM5112GC00100
 *
 * Copyright (c) 2024 Microchip Technology Inc. and its subsidiaries.
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

/*  file generated from device description file (ATDF) version 2024-07-26T17:56:39Z  */
#ifndef _PIC32CM5112GC00100_GPIO_H_
#define _PIC32CM5112GC00100_GPIO_H_

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
#define PIN_PB10                    (   42)  /* Pin Number for PB10 */
#define PIN_PB11                    (   43)  /* Pin Number for PB11 */
#define PIN_PB12                    (   44)  /* Pin Number for PB12 */
#define PIN_PB13                    (   45)  /* Pin Number for PB13 */
#define PIN_PB14                    (   46)  /* Pin Number for PB14 */
#define PIN_PB15                    (   47)  /* Pin Number for PB15 */
#define PIN_PB16                    (   48)  /* Pin Number for PB16 */
#define PIN_PB17                    (   49)  /* Pin Number for PB17 */
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

/* ========================== Peripheral I/O masks ========================== */
#define PORT_PA00                   (_UINT32_(1) << 0) /* PORT mask for PA00 */
#define PORT_PA01                   (_UINT32_(1) << 1) /* PORT mask for PA01 */
#define PORT_PA02                   (_UINT32_(1) << 2) /* PORT mask for PA02 */
#define PORT_PA03                   (_UINT32_(1) << 3) /* PORT mask for PA03 */
#define PORT_PA04                   (_UINT32_(1) << 4) /* PORT mask for PA04 */
#define PORT_PA05                   (_UINT32_(1) << 5) /* PORT mask for PA05 */
#define PORT_PA06                   (_UINT32_(1) << 6) /* PORT mask for PA06 */
#define PORT_PA07                   (_UINT32_(1) << 7) /* PORT mask for PA07 */
#define PORT_PA08                   (_UINT32_(1) << 8) /* PORT mask for PA08 */
#define PORT_PA09                   (_UINT32_(1) << 9) /* PORT mask for PA09 */
#define PORT_PA10                   (_UINT32_(1) << 10) /* PORT mask for PA10 */
#define PORT_PA11                   (_UINT32_(1) << 11) /* PORT mask for PA11 */
#define PORT_PA12                   (_UINT32_(1) << 12) /* PORT mask for PA12 */
#define PORT_PA13                   (_UINT32_(1) << 13) /* PORT mask for PA13 */
#define PORT_PA14                   (_UINT32_(1) << 14) /* PORT mask for PA14 */
#define PORT_PA15                   (_UINT32_(1) << 15) /* PORT mask for PA15 */
#define PORT_PA16                   (_UINT32_(1) << 16) /* PORT mask for PA16 */
#define PORT_PA17                   (_UINT32_(1) << 17) /* PORT mask for PA17 */
#define PORT_PA18                   (_UINT32_(1) << 18) /* PORT mask for PA18 */
#define PORT_PA19                   (_UINT32_(1) << 19) /* PORT mask for PA19 */
#define PORT_PA20                   (_UINT32_(1) << 20) /* PORT mask for PA20 */
#define PORT_PB00                   (_UINT32_(1) << 0) /* PORT mask for PB00 */
#define PORT_PB01                   (_UINT32_(1) << 1) /* PORT mask for PB01 */
#define PORT_PB02                   (_UINT32_(1) << 2) /* PORT mask for PB02 */
#define PORT_PB03                   (_UINT32_(1) << 3) /* PORT mask for PB03 */
#define PORT_PB04                   (_UINT32_(1) << 4) /* PORT mask for PB04 */
#define PORT_PB05                   (_UINT32_(1) << 5) /* PORT mask for PB05 */
#define PORT_PB06                   (_UINT32_(1) << 6) /* PORT mask for PB06 */
#define PORT_PB07                   (_UINT32_(1) << 7) /* PORT mask for PB07 */
#define PORT_PB08                   (_UINT32_(1) << 8) /* PORT mask for PB08 */
#define PORT_PB09                   (_UINT32_(1) << 9) /* PORT mask for PB09 */
#define PORT_PB10                   (_UINT32_(1) << 10) /* PORT mask for PB10 */
#define PORT_PB11                   (_UINT32_(1) << 11) /* PORT mask for PB11 */
#define PORT_PB12                   (_UINT32_(1) << 12) /* PORT mask for PB12 */
#define PORT_PB13                   (_UINT32_(1) << 13) /* PORT mask for PB13 */
#define PORT_PB14                   (_UINT32_(1) << 14) /* PORT mask for PB14 */
#define PORT_PB15                   (_UINT32_(1) << 15) /* PORT mask for PB15 */
#define PORT_PB16                   (_UINT32_(1) << 16) /* PORT mask for PB16 */
#define PORT_PB17                   (_UINT32_(1) << 17) /* PORT mask for PB17 */
#define PORT_PC00                   (_UINT32_(1) << 0) /* PORT mask for PC00 */
#define PORT_PC01                   (_UINT32_(1) << 1) /* PORT mask for PC01 */
#define PORT_PC02                   (_UINT32_(1) << 2) /* PORT mask for PC02 */
#define PORT_PC03                   (_UINT32_(1) << 3) /* PORT mask for PC03 */
#define PORT_PC04                   (_UINT32_(1) << 4) /* PORT mask for PC04 */
#define PORT_PC05                   (_UINT32_(1) << 5) /* PORT mask for PC05 */
#define PORT_PC06                   (_UINT32_(1) << 6) /* PORT mask for PC06 */
#define PORT_PC07                   (_UINT32_(1) << 7) /* PORT mask for PC07 */
#define PORT_PC08                   (_UINT32_(1) << 8) /* PORT mask for PC08 */
#define PORT_PC09                   (_UINT32_(1) << 9) /* PORT mask for PC09 */
#define PORT_PC10                   (_UINT32_(1) << 10) /* PORT mask for PC10 */
#define PORT_PC11                   (_UINT32_(1) << 11) /* PORT mask for PC11 */
#define PORT_PC12                   (_UINT32_(1) << 12) /* PORT mask for PC12 */
#define PORT_PC13                   (_UINT32_(1) << 13) /* PORT mask for PC13 */
#define PORT_PC14                   (_UINT32_(1) << 14) /* PORT mask for PC14 */
#define PORT_PC15                   (_UINT32_(1) << 15) /* PORT mask for PC15 */
#define PORT_PC16                   (_UINT32_(1) << 16) /* PORT mask for PC16 */
#define PORT_PC17                   (_UINT32_(1) << 17) /* PORT mask for PC17 */
#define PORT_PC18                   (_UINT32_(1) << 18) /* PORT mask for PC18 */
#define PORT_PC19                   (_UINT32_(1) << 19) /* PORT mask for PC19 */
#define PORT_PD00                   (_UINT32_(1) << 0) /* PORT mask for PD00 */
#define PORT_PD01                   (_UINT32_(1) << 1) /* PORT mask for PD01 */
#define PORT_PD02                   (_UINT32_(1) << 2) /* PORT mask for PD02 */
#define PORT_PD03                   (_UINT32_(1) << 3) /* PORT mask for PD03 */
#define PORT_PD04                   (_UINT32_(1) << 4) /* PORT mask for PD04 */
#define PORT_PD05                   (_UINT32_(1) << 5) /* PORT mask for PD05 */
#define PORT_PD06                   (_UINT32_(1) << 6) /* PORT mask for PD06 */
#define PORT_PD07                   (_UINT32_(1) << 7) /* PORT mask for PD07 */
#define PORT_PD08                   (_UINT32_(1) << 8) /* PORT mask for PD08 */
#define PORT_PD09                   (_UINT32_(1) << 9) /* PORT mask for PD09 */
#define PORT_PD10                   (_UINT32_(1) << 10) /* PORT mask for PD10 */
#define PORT_PD11                   (_UINT32_(1) << 11) /* PORT mask for PD11 */
#define PORT_PD12                   (_UINT32_(1) << 12) /* PORT mask for PD12 */
#define PORT_PD13                   (_UINT32_(1) << 13) /* PORT mask for PD13 */
#define PORT_PD14                   (_UINT32_(1) << 14) /* PORT mask for PD14 */
#define PORT_PD15                   (_UINT32_(1) << 15) /* PORT mask for PD15 */
#define PORT_PD16                   (_UINT32_(1) << 16) /* PORT mask for PD16 */
#define PORT_PD17                   (_UINT32_(1) << 17) /* PORT mask for PD17 */
#define PORT_PD18                   (_UINT32_(1) << 18) /* PORT mask for PD18 */
#define PORT_PD19                   (_UINT32_(1) << 19) /* PORT mask for PD19 */
#define PORT_PD20                   (_UINT32_(1) << 20) /* PORT mask for PD20 */

/* =================== PORT definition for AC peripheral ==================== */
#define PIN_PA07B_AC_AIN0                          _UINT32_(7) 
#define MUX_PA07B_AC_AIN0                          _UINT32_(1) 
#define PINMUX_PA07B_AC_AIN0                       ((PIN_PA07B_AC_AIN0 << 16) | MUX_PA07B_AC_AIN0)
#define PORT_PA07B_AC_AIN0                         (_UINT32_(1) << 7)

#define PIN_PA08B_AC_AIN1                          _UINT32_(8) 
#define MUX_PA08B_AC_AIN1                          _UINT32_(1) 
#define PINMUX_PA08B_AC_AIN1                       ((PIN_PA08B_AC_AIN1 << 16) | MUX_PA08B_AC_AIN1)
#define PORT_PA08B_AC_AIN1                         (_UINT32_(1) << 8)

#define PIN_PB00B_AC_AIN2                          _UINT32_(32)
#define MUX_PB00B_AC_AIN2                          _UINT32_(1) 
#define PINMUX_PB00B_AC_AIN2                       ((PIN_PB00B_AC_AIN2 << 16) | MUX_PB00B_AC_AIN2)
#define PORT_PB00B_AC_AIN2                         (_UINT32_(1) << 0)

#define PIN_PB03B_AC_AIN3                          _UINT32_(35)
#define MUX_PB03B_AC_AIN3                          _UINT32_(1) 
#define PINMUX_PB03B_AC_AIN3                       ((PIN_PB03B_AC_AIN3 << 16) | MUX_PB03B_AC_AIN3)
#define PORT_PB03B_AC_AIN3                         (_UINT32_(1) << 3)

#define PIN_PA01B_AC_CMP0                          _UINT32_(1) 
#define MUX_PA01B_AC_CMP0                          _UINT32_(1) 
#define PINMUX_PA01B_AC_CMP0                       ((PIN_PA01B_AC_CMP0 << 16) | MUX_PA01B_AC_CMP0)
#define PORT_PA01B_AC_CMP0                         (_UINT32_(1) << 1)

#define PIN_PA13B_AC_CMP0                          _UINT32_(13)
#define MUX_PA13B_AC_CMP0                          _UINT32_(1) 
#define PINMUX_PA13B_AC_CMP0                       ((PIN_PA13B_AC_CMP0 << 16) | MUX_PA13B_AC_CMP0)
#define PORT_PA13B_AC_CMP0                         (_UINT32_(1) << 13)

#define PIN_PA02B_AC_CMP1                          _UINT32_(2) 
#define MUX_PA02B_AC_CMP1                          _UINT32_(1) 
#define PINMUX_PA02B_AC_CMP1                       ((PIN_PA02B_AC_CMP1 << 16) | MUX_PA02B_AC_CMP1)
#define PORT_PA02B_AC_CMP1                         (_UINT32_(1) << 2)

#define PIN_PB07B_AC_CMP1                          _UINT32_(39)
#define MUX_PB07B_AC_CMP1                          _UINT32_(1) 
#define PINMUX_PB07B_AC_CMP1                       ((PIN_PB07B_AC_CMP1 << 16) | MUX_PB07B_AC_CMP1)
#define PORT_PB07B_AC_CMP1                         (_UINT32_(1) << 7)

/* =================== PORT definition for ADC peripheral =================== */
#define PIN_PA03B_ADC_ADC0_AIN0                    _UINT32_(3) 
#define MUX_PA03B_ADC_ADC0_AIN0                    _UINT32_(1) 
#define PINMUX_PA03B_ADC_ADC0_AIN0                 ((PIN_PA03B_ADC_ADC0_AIN0 << 16) | MUX_PA03B_ADC_ADC0_AIN0)
#define PORT_PA03B_ADC_ADC0_AIN0                   (_UINT32_(1) << 3)

#define PIN_PA04B_ADC_ADC0_AIN1                    _UINT32_(4) 
#define MUX_PA04B_ADC_ADC0_AIN1                    _UINT32_(1) 
#define PINMUX_PA04B_ADC_ADC0_AIN1                 ((PIN_PA04B_ADC_ADC0_AIN1 << 16) | MUX_PA04B_ADC_ADC0_AIN1)
#define PORT_PA04B_ADC_ADC0_AIN1                   (_UINT32_(1) << 4)

#define PIN_PA05B_ADC_ADC0_AIN2                    _UINT32_(5) 
#define MUX_PA05B_ADC_ADC0_AIN2                    _UINT32_(1) 
#define PINMUX_PA05B_ADC_ADC0_AIN2                 ((PIN_PA05B_ADC_ADC0_AIN2 << 16) | MUX_PA05B_ADC_ADC0_AIN2)
#define PORT_PA05B_ADC_ADC0_AIN2                   (_UINT32_(1) << 5)

#define PIN_PA06B_ADC_ADC0_AIN3                    _UINT32_(6) 
#define MUX_PA06B_ADC_ADC0_AIN3                    _UINT32_(1) 
#define PINMUX_PA06B_ADC_ADC0_AIN3                 ((PIN_PA06B_ADC_ADC0_AIN3 << 16) | MUX_PA06B_ADC_ADC0_AIN3)
#define PORT_PA06B_ADC_ADC0_AIN3                   (_UINT32_(1) << 6)

#define PIN_PA07B_ADC_ADC0_AIN4                    _UINT32_(7) 
#define MUX_PA07B_ADC_ADC0_AIN4                    _UINT32_(1) 
#define PINMUX_PA07B_ADC_ADC0_AIN4                 ((PIN_PA07B_ADC_ADC0_AIN4 << 16) | MUX_PA07B_ADC_ADC0_AIN4)
#define PORT_PA07B_ADC_ADC0_AIN4                   (_UINT32_(1) << 7)

#define PIN_PA08B_ADC_ADC0_AIN5                    _UINT32_(8) 
#define MUX_PA08B_ADC_ADC0_AIN5                    _UINT32_(1) 
#define PINMUX_PA08B_ADC_ADC0_AIN5                 ((PIN_PA08B_ADC_ADC0_AIN5 << 16) | MUX_PA08B_ADC_ADC0_AIN5)
#define PORT_PA08B_ADC_ADC0_AIN5                   (_UINT32_(1) << 8)

#define PIN_PA09B_ADC_ADC0_AIN6                    _UINT32_(9) 
#define MUX_PA09B_ADC_ADC0_AIN6                    _UINT32_(1) 
#define PINMUX_PA09B_ADC_ADC0_AIN6                 ((PIN_PA09B_ADC_ADC0_AIN6 << 16) | MUX_PA09B_ADC_ADC0_AIN6)
#define PORT_PA09B_ADC_ADC0_AIN6                   (_UINT32_(1) << 9)

#define PIN_PB00B_ADC_ADC0_AIN7                    _UINT32_(32)
#define MUX_PB00B_ADC_ADC0_AIN7                    _UINT32_(1) 
#define PINMUX_PB00B_ADC_ADC0_AIN7                 ((PIN_PB00B_ADC_ADC0_AIN7 << 16) | MUX_PB00B_ADC_ADC0_AIN7)
#define PORT_PB00B_ADC_ADC0_AIN7                   (_UINT32_(1) << 0)

#define PIN_PB03B_ADC_ADC0_AIN8                    _UINT32_(35)
#define MUX_PB03B_ADC_ADC0_AIN8                    _UINT32_(1) 
#define PINMUX_PB03B_ADC_ADC0_AIN8                 ((PIN_PB03B_ADC_ADC0_AIN8 << 16) | MUX_PB03B_ADC_ADC0_AIN8)
#define PORT_PB03B_ADC_ADC0_AIN8                   (_UINT32_(1) << 3)

#define PIN_PB04B_ADC_ADC0_AIN9                    _UINT32_(36)
#define MUX_PB04B_ADC_ADC0_AIN9                    _UINT32_(1) 
#define PINMUX_PB04B_ADC_ADC0_AIN9                 ((PIN_PB04B_ADC_ADC0_AIN9 << 16) | MUX_PB04B_ADC_ADC0_AIN9)
#define PORT_PB04B_ADC_ADC0_AIN9                   (_UINT32_(1) << 4)

#define PIN_PB05B_ADC_ADC0_AIN10                   _UINT32_(37)
#define MUX_PB05B_ADC_ADC0_AIN10                   _UINT32_(1) 
#define PINMUX_PB05B_ADC_ADC0_AIN10                ((PIN_PB05B_ADC_ADC0_AIN10 << 16) | MUX_PB05B_ADC_ADC0_AIN10)
#define PORT_PB05B_ADC_ADC0_AIN10                  (_UINT32_(1) << 5)

#define PIN_PB06B_ADC_ADC0_AIN11                   _UINT32_(38)
#define MUX_PB06B_ADC_ADC0_AIN11                   _UINT32_(1) 
#define PINMUX_PB06B_ADC_ADC0_AIN11                ((PIN_PB06B_ADC_ADC0_AIN11 << 16) | MUX_PB06B_ADC_ADC0_AIN11)
#define PORT_PB06B_ADC_ADC0_AIN11                  (_UINT32_(1) << 6)

#define PIN_PA04B_ADC_ADC0_ANN0                    _UINT32_(4) 
#define MUX_PA04B_ADC_ADC0_ANN0                    _UINT32_(1) 
#define PINMUX_PA04B_ADC_ADC0_ANN0                 ((PIN_PA04B_ADC_ADC0_ANN0 << 16) | MUX_PA04B_ADC_ADC0_ANN0)
#define PORT_PA04B_ADC_ADC0_ANN0                   (_UINT32_(1) << 4)

#define PIN_PA06B_ADC_ADC0_ANN2                    _UINT32_(6) 
#define MUX_PA06B_ADC_ADC0_ANN2                    _UINT32_(1) 
#define PINMUX_PA06B_ADC_ADC0_ANN2                 ((PIN_PA06B_ADC_ADC0_ANN2 << 16) | MUX_PA06B_ADC_ADC0_ANN2)
#define PORT_PA06B_ADC_ADC0_ANN2                   (_UINT32_(1) << 6)

#define PIN_PA08B_ADC_ADC0_ANN4                    _UINT32_(8) 
#define MUX_PA08B_ADC_ADC0_ANN4                    _UINT32_(1) 
#define PINMUX_PA08B_ADC_ADC0_ANN4                 ((PIN_PA08B_ADC_ADC0_ANN4 << 16) | MUX_PA08B_ADC_ADC0_ANN4)
#define PORT_PA08B_ADC_ADC0_ANN4                   (_UINT32_(1) << 8)

/* ================== PORT definition for CAN0 peripheral =================== */
#define PIN_PA10H_CAN0_RX                          _UINT32_(10)
#define MUX_PA10H_CAN0_RX                          _UINT32_(7) 
#define PINMUX_PA10H_CAN0_RX                       ((PIN_PA10H_CAN0_RX << 16) | MUX_PA10H_CAN0_RX)
#define PORT_PA10H_CAN0_RX                         (_UINT32_(1) << 10)

#define PIN_PC01H_CAN0_RX                          _UINT32_(65)
#define MUX_PC01H_CAN0_RX                          _UINT32_(7) 
#define PINMUX_PC01H_CAN0_RX                       ((PIN_PC01H_CAN0_RX << 16) | MUX_PC01H_CAN0_RX)
#define PORT_PC01H_CAN0_RX                         (_UINT32_(1) << 1)

#define PIN_PD06H_CAN0_RX                          _UINT32_(102)
#define MUX_PD06H_CAN0_RX                          _UINT32_(7) 
#define PINMUX_PD06H_CAN0_RX                       ((PIN_PD06H_CAN0_RX << 16) | MUX_PD06H_CAN0_RX)
#define PORT_PD06H_CAN0_RX                         (_UINT32_(1) << 6)

#define PIN_PA11H_CAN0_TX                          _UINT32_(11)
#define MUX_PA11H_CAN0_TX                          _UINT32_(7) 
#define PINMUX_PA11H_CAN0_TX                       ((PIN_PA11H_CAN0_TX << 16) | MUX_PA11H_CAN0_TX)
#define PORT_PA11H_CAN0_TX                         (_UINT32_(1) << 11)

#define PIN_PC02H_CAN0_TX                          _UINT32_(66)
#define MUX_PC02H_CAN0_TX                          _UINT32_(7) 
#define PINMUX_PC02H_CAN0_TX                       ((PIN_PC02H_CAN0_TX << 16) | MUX_PC02H_CAN0_TX)
#define PORT_PC02H_CAN0_TX                         (_UINT32_(1) << 2)

#define PIN_PD08H_CAN0_TX                          _UINT32_(104)
#define MUX_PD08H_CAN0_TX                          _UINT32_(7) 
#define PINMUX_PD08H_CAN0_TX                       ((PIN_PD08H_CAN0_TX << 16) | MUX_PD08H_CAN0_TX)
#define PORT_PD08H_CAN0_TX                         (_UINT32_(1) << 8)

/* ================== PORT definition for CAN1 peripheral =================== */
#define PIN_PA00H_CAN1_RX                          _UINT32_(0) 
#define MUX_PA00H_CAN1_RX                          _UINT32_(7) 
#define PINMUX_PA00H_CAN1_RX                       ((PIN_PA00H_CAN1_RX << 16) | MUX_PA00H_CAN1_RX)
#define PORT_PA00H_CAN1_RX                         (_UINT32_(1) << 0)

#define PIN_PC05H_CAN1_RX                          _UINT32_(69)
#define MUX_PC05H_CAN1_RX                          _UINT32_(7) 
#define PINMUX_PC05H_CAN1_RX                       ((PIN_PC05H_CAN1_RX << 16) | MUX_PC05H_CAN1_RX)
#define PORT_PC05H_CAN1_RX                         (_UINT32_(1) << 5)

#define PIN_PD12H_CAN1_RX                          _UINT32_(108)
#define MUX_PD12H_CAN1_RX                          _UINT32_(7) 
#define PINMUX_PD12H_CAN1_RX                       ((PIN_PD12H_CAN1_RX << 16) | MUX_PD12H_CAN1_RX)
#define PORT_PD12H_CAN1_RX                         (_UINT32_(1) << 12)

#define PIN_PA01H_CAN1_TX                          _UINT32_(1) 
#define MUX_PA01H_CAN1_TX                          _UINT32_(7) 
#define PINMUX_PA01H_CAN1_TX                       ((PIN_PA01H_CAN1_TX << 16) | MUX_PA01H_CAN1_TX)
#define PORT_PA01H_CAN1_TX                         (_UINT32_(1) << 1)

#define PIN_PC06H_CAN1_TX                          _UINT32_(70)
#define MUX_PC06H_CAN1_TX                          _UINT32_(7) 
#define PINMUX_PC06H_CAN1_TX                       ((PIN_PC06H_CAN1_TX << 16) | MUX_PC06H_CAN1_TX)
#define PORT_PC06H_CAN1_TX                         (_UINT32_(1) << 6)

#define PIN_PD13H_CAN1_TX                          _UINT32_(109)
#define MUX_PD13H_CAN1_TX                          _UINT32_(7) 
#define PINMUX_PD13H_CAN1_TX                       ((PIN_PD13H_CAN1_TX << 16) | MUX_PD13H_CAN1_TX)
#define PORT_PD13H_CAN1_TX                         (_UINT32_(1) << 13)

/* ================== PORT definition for CCL0 peripheral =================== */
#define PIN_PC12I_CCL0_IN0                         _UINT32_(76)
#define MUX_PC12I_CCL0_IN0                         _UINT32_(8) 
#define PINMUX_PC12I_CCL0_IN0                      ((PIN_PC12I_CCL0_IN0 << 16) | MUX_PC12I_CCL0_IN0)
#define PORT_PC12I_CCL0_IN0                        (_UINT32_(1) << 12)

#define PIN_PC01I_CCL0_IN0                         _UINT32_(65)
#define MUX_PC01I_CCL0_IN0                         _UINT32_(8) 
#define PINMUX_PC01I_CCL0_IN0                      ((PIN_PC01I_CCL0_IN0 << 16) | MUX_PC01I_CCL0_IN0)
#define PORT_PC01I_CCL0_IN0                        (_UINT32_(1) << 1)

#define PIN_PC02I_CCL0_IN1                         _UINT32_(66)
#define MUX_PC02I_CCL0_IN1                         _UINT32_(8) 
#define PINMUX_PC02I_CCL0_IN1                      ((PIN_PC02I_CCL0_IN1 << 16) | MUX_PC02I_CCL0_IN1)
#define PORT_PC02I_CCL0_IN1                        (_UINT32_(1) << 2)

#define PIN_PC14I_CCL0_IN1                         _UINT32_(78)
#define MUX_PC14I_CCL0_IN1                         _UINT32_(8) 
#define PINMUX_PC14I_CCL0_IN1                      ((PIN_PC14I_CCL0_IN1 << 16) | MUX_PC14I_CCL0_IN1)
#define PORT_PC14I_CCL0_IN1                        (_UINT32_(1) << 14)

#define PIN_PC15I_CCL0_IN2                         _UINT32_(79)
#define MUX_PC15I_CCL0_IN2                         _UINT32_(8) 
#define PINMUX_PC15I_CCL0_IN2                      ((PIN_PC15I_CCL0_IN2 << 16) | MUX_PC15I_CCL0_IN2)
#define PORT_PC15I_CCL0_IN2                        (_UINT32_(1) << 15)

#define PIN_PC09I_CCL0_IN2                         _UINT32_(73)
#define MUX_PC09I_CCL0_IN2                         _UINT32_(8) 
#define PINMUX_PC09I_CCL0_IN2                      ((PIN_PC09I_CCL0_IN2 << 16) | MUX_PC09I_CCL0_IN2)
#define PORT_PC09I_CCL0_IN2                        (_UINT32_(1) << 9)

#define PIN_PD00I_CCL0_IN3                         _UINT32_(96)
#define MUX_PD00I_CCL0_IN3                         _UINT32_(8) 
#define PINMUX_PD00I_CCL0_IN3                      ((PIN_PD00I_CCL0_IN3 << 16) | MUX_PD00I_CCL0_IN3)
#define PORT_PD00I_CCL0_IN3                        (_UINT32_(1) << 0)

#define PIN_PD18I_CCL0_IN3                         _UINT32_(114)
#define MUX_PD18I_CCL0_IN3                         _UINT32_(8) 
#define PINMUX_PD18I_CCL0_IN3                      ((PIN_PD18I_CCL0_IN3 << 16) | MUX_PD18I_CCL0_IN3)
#define PORT_PD18I_CCL0_IN3                        (_UINT32_(1) << 18)

#define PIN_PD01I_CCL0_IN4                         _UINT32_(97)
#define MUX_PD01I_CCL0_IN4                         _UINT32_(8) 
#define PINMUX_PD01I_CCL0_IN4                      ((PIN_PD01I_CCL0_IN4 << 16) | MUX_PD01I_CCL0_IN4)
#define PORT_PD01I_CCL0_IN4                        (_UINT32_(1) << 1)

#define PIN_PD17I_CCL0_IN4                         _UINT32_(113)
#define MUX_PD17I_CCL0_IN4                         _UINT32_(8) 
#define PINMUX_PD17I_CCL0_IN4                      ((PIN_PD17I_CCL0_IN4 << 16) | MUX_PD17I_CCL0_IN4)
#define PORT_PD17I_CCL0_IN4                        (_UINT32_(1) << 17)

#define PIN_PD10I_CCL0_IN5                         _UINT32_(106)
#define MUX_PD10I_CCL0_IN5                         _UINT32_(8) 
#define PINMUX_PD10I_CCL0_IN5                      ((PIN_PD10I_CCL0_IN5 << 16) | MUX_PD10I_CCL0_IN5)
#define PORT_PD10I_CCL0_IN5                        (_UINT32_(1) << 10)

#define PIN_PD19I_CCL0_IN5                         _UINT32_(115)
#define MUX_PD19I_CCL0_IN5                         _UINT32_(8) 
#define PINMUX_PD19I_CCL0_IN5                      ((PIN_PD19I_CCL0_IN5 << 16) | MUX_PD19I_CCL0_IN5)
#define PORT_PD19I_CCL0_IN5                        (_UINT32_(1) << 19)

#define PIN_PA00I_CCL0_IN6                         _UINT32_(0) 
#define MUX_PA00I_CCL0_IN6                         _UINT32_(8) 
#define PINMUX_PA00I_CCL0_IN6                      ((PIN_PA00I_CCL0_IN6 << 16) | MUX_PA00I_CCL0_IN6)
#define PORT_PA00I_CCL0_IN6                        (_UINT32_(1) << 0)

#define PIN_PA14I_CCL0_IN6                         _UINT32_(14)
#define MUX_PA14I_CCL0_IN6                         _UINT32_(8) 
#define PINMUX_PA14I_CCL0_IN6                      ((PIN_PA14I_CCL0_IN6 << 16) | MUX_PA14I_CCL0_IN6)
#define PORT_PA14I_CCL0_IN6                        (_UINT32_(1) << 14)

#define PIN_PA01I_CCL0_IN7                         _UINT32_(1) 
#define MUX_PA01I_CCL0_IN7                         _UINT32_(8) 
#define PINMUX_PA01I_CCL0_IN7                      ((PIN_PA01I_CCL0_IN7 << 16) | MUX_PA01I_CCL0_IN7)
#define PORT_PA01I_CCL0_IN7                        (_UINT32_(1) << 1)

#define PIN_PA15I_CCL0_IN7                         _UINT32_(15)
#define MUX_PA15I_CCL0_IN7                         _UINT32_(8) 
#define PINMUX_PA15I_CCL0_IN7                      ((PIN_PA15I_CCL0_IN7 << 16) | MUX_PA15I_CCL0_IN7)
#define PORT_PA15I_CCL0_IN7                        (_UINT32_(1) << 15)

#define PIN_PA10I_CCL0_IN8                         _UINT32_(10)
#define MUX_PA10I_CCL0_IN8                         _UINT32_(8) 
#define PINMUX_PA10I_CCL0_IN8                      ((PIN_PA10I_CCL0_IN8 << 16) | MUX_PA10I_CCL0_IN8)
#define PORT_PA10I_CCL0_IN8                        (_UINT32_(1) << 10)

#define PIN_PA18I_CCL0_IN8                         _UINT32_(18)
#define MUX_PA18I_CCL0_IN8                         _UINT32_(8) 
#define PINMUX_PA18I_CCL0_IN8                      ((PIN_PA18I_CCL0_IN8 << 16) | MUX_PA18I_CCL0_IN8)
#define PORT_PA18I_CCL0_IN8                        (_UINT32_(1) << 18)

#define PIN_PB12I_CCL0_IN9                         _UINT32_(44)
#define MUX_PB12I_CCL0_IN9                         _UINT32_(8) 
#define PINMUX_PB12I_CCL0_IN9                      ((PIN_PB12I_CCL0_IN9 << 16) | MUX_PB12I_CCL0_IN9)
#define PORT_PB12I_CCL0_IN9                        (_UINT32_(1) << 12)

#define PIN_PB05I_CCL0_IN9                         _UINT32_(37)
#define MUX_PB05I_CCL0_IN9                         _UINT32_(8) 
#define PINMUX_PB05I_CCL0_IN9                      ((PIN_PB05I_CCL0_IN9 << 16) | MUX_PB05I_CCL0_IN9)
#define PORT_PB05I_CCL0_IN9                        (_UINT32_(1) << 5)

#define PIN_PB14I_CCL0_IN10                        _UINT32_(46)
#define MUX_PB14I_CCL0_IN10                        _UINT32_(8) 
#define PINMUX_PB14I_CCL0_IN10                     ((PIN_PB14I_CCL0_IN10 << 16) | MUX_PB14I_CCL0_IN10)
#define PORT_PB14I_CCL0_IN10                       (_UINT32_(1) << 14)

#define PIN_PB06I_CCL0_IN10                        _UINT32_(38)
#define MUX_PB06I_CCL0_IN10                        _UINT32_(8) 
#define PINMUX_PB06I_CCL0_IN10                     ((PIN_PB06I_CCL0_IN10 << 16) | MUX_PB06I_CCL0_IN10)
#define PORT_PB06I_CCL0_IN10                       (_UINT32_(1) << 6)

#define PIN_PB15I_CCL0_IN11                        _UINT32_(47)
#define MUX_PB15I_CCL0_IN11                        _UINT32_(8) 
#define PINMUX_PB15I_CCL0_IN11                     ((PIN_PB15I_CCL0_IN11 << 16) | MUX_PB15I_CCL0_IN11)
#define PORT_PB15I_CCL0_IN11                       (_UINT32_(1) << 15)

#define PIN_PB10I_CCL0_IN11                        _UINT32_(42)
#define MUX_PB10I_CCL0_IN11                        _UINT32_(8) 
#define PINMUX_PB10I_CCL0_IN11                     ((PIN_PB10I_CCL0_IN11 << 16) | MUX_PB10I_CCL0_IN11)
#define PORT_PB10I_CCL0_IN11                       (_UINT32_(1) << 10)

#define PIN_PC13I_CCL0_OUT0                        _UINT32_(77)
#define MUX_PC13I_CCL0_OUT0                        _UINT32_(8) 
#define PINMUX_PC13I_CCL0_OUT0                     ((PIN_PC13I_CCL0_OUT0 << 16) | MUX_PC13I_CCL0_OUT0)
#define PORT_PC13I_CCL0_OUT0                       (_UINT32_(1) << 13)

#define PIN_PC03I_CCL0_OUT0                        _UINT32_(67)
#define MUX_PC03I_CCL0_OUT0                        _UINT32_(8) 
#define PINMUX_PC03I_CCL0_OUT0                     ((PIN_PC03I_CCL0_OUT0 << 16) | MUX_PC03I_CCL0_OUT0)
#define PORT_PC03I_CCL0_OUT0                       (_UINT32_(1) << 3)

#define PIN_PD14I_CCL0_OUT1                        _UINT32_(110)
#define MUX_PD14I_CCL0_OUT1                        _UINT32_(8) 
#define PINMUX_PD14I_CCL0_OUT1                     ((PIN_PD14I_CCL0_OUT1 << 16) | MUX_PD14I_CCL0_OUT1)
#define PORT_PD14I_CCL0_OUT1                       (_UINT32_(1) << 14)

#define PIN_PD08I_CCL0_OUT1                        _UINT32_(104)
#define MUX_PD08I_CCL0_OUT1                        _UINT32_(8) 
#define PINMUX_PD08I_CCL0_OUT1                     ((PIN_PD08I_CCL0_OUT1 << 16) | MUX_PD08I_CCL0_OUT1)
#define PORT_PD08I_CCL0_OUT1                       (_UINT32_(1) << 8)

#define PIN_PA02I_CCL0_OUT2                        _UINT32_(2) 
#define MUX_PA02I_CCL0_OUT2                        _UINT32_(8) 
#define PINMUX_PA02I_CCL0_OUT2                     ((PIN_PA02I_CCL0_OUT2 << 16) | MUX_PA02I_CCL0_OUT2)
#define PORT_PA02I_CCL0_OUT2                       (_UINT32_(1) << 2)

#define PIN_PA19I_CCL0_OUT2                        _UINT32_(19)
#define MUX_PA19I_CCL0_OUT2                        _UINT32_(8) 
#define PINMUX_PA19I_CCL0_OUT2                     ((PIN_PA19I_CCL0_OUT2 << 16) | MUX_PA19I_CCL0_OUT2)
#define PORT_PA19I_CCL0_OUT2                       (_UINT32_(1) << 19)

#define PIN_PB16I_CCL0_OUT3                        _UINT32_(48)
#define MUX_PB16I_CCL0_OUT3                        _UINT32_(8) 
#define PINMUX_PB16I_CCL0_OUT3                     ((PIN_PB16I_CCL0_OUT3 << 16) | MUX_PB16I_CCL0_OUT3)
#define PORT_PB16I_CCL0_OUT3                       (_UINT32_(1) << 16)

#define PIN_PC00I_CCL0_OUT3                        _UINT32_(64)
#define MUX_PC00I_CCL0_OUT3                        _UINT32_(8) 
#define PINMUX_PC00I_CCL0_OUT3                     ((PIN_PC00I_CCL0_OUT3 << 16) | MUX_PC00I_CCL0_OUT3)
#define PORT_PC00I_CCL0_OUT3                       (_UINT32_(1) << 0)

/* ================== PORT definition for CCL1 peripheral =================== */
#define PIN_PC11I_CCL1_IN0                         _UINT32_(75)
#define MUX_PC11I_CCL1_IN0                         _UINT32_(8) 
#define PINMUX_PC11I_CCL1_IN0                      ((PIN_PC11I_CCL1_IN0 << 16) | MUX_PC11I_CCL1_IN0)
#define PORT_PC11I_CCL1_IN0                        (_UINT32_(1) << 11)

#define PIN_PC04I_CCL1_IN0                         _UINT32_(68)
#define MUX_PC04I_CCL1_IN0                         _UINT32_(8) 
#define PINMUX_PC04I_CCL1_IN0                      ((PIN_PC04I_CCL1_IN0 << 16) | MUX_PC04I_CCL1_IN0)
#define PORT_PC04I_CCL1_IN0                        (_UINT32_(1) << 4)

#define PIN_PC17I_CCL1_IN1                         _UINT32_(81)
#define MUX_PC17I_CCL1_IN1                         _UINT32_(8) 
#define PINMUX_PC17I_CCL1_IN1                      ((PIN_PC17I_CCL1_IN1 << 16) | MUX_PC17I_CCL1_IN1)
#define PORT_PC17I_CCL1_IN1                        (_UINT32_(1) << 17)

#define PIN_PC05I_CCL1_IN1                         _UINT32_(69)
#define MUX_PC05I_CCL1_IN1                         _UINT32_(8) 
#define PINMUX_PC05I_CCL1_IN1                      ((PIN_PC05I_CCL1_IN1 << 16) | MUX_PC05I_CCL1_IN1)
#define PORT_PC05I_CCL1_IN1                        (_UINT32_(1) << 5)

#define PIN_PC16I_CCL1_IN2                         _UINT32_(80)
#define MUX_PC16I_CCL1_IN2                         _UINT32_(8) 
#define PINMUX_PC16I_CCL1_IN2                      ((PIN_PC16I_CCL1_IN2 << 16) | MUX_PC16I_CCL1_IN2)
#define PORT_PC16I_CCL1_IN2                        (_UINT32_(1) << 16)

#define PIN_PC10I_CCL1_IN2                         _UINT32_(74)
#define MUX_PC10I_CCL1_IN2                         _UINT32_(8) 
#define PINMUX_PC10I_CCL1_IN2                      ((PIN_PC10I_CCL1_IN2 << 16) | MUX_PC10I_CCL1_IN2)
#define PORT_PC10I_CCL1_IN2                        (_UINT32_(1) << 10)

#define PIN_PD06I_CCL1_IN3                         _UINT32_(102)
#define MUX_PD06I_CCL1_IN3                         _UINT32_(8) 
#define PINMUX_PD06I_CCL1_IN3                      ((PIN_PD06I_CCL1_IN3 << 16) | MUX_PD06I_CCL1_IN3)
#define PORT_PD06I_CCL1_IN3                        (_UINT32_(1) << 6)

#define PIN_PD20I_CCL1_IN3                         _UINT32_(116)
#define MUX_PD20I_CCL1_IN3                         _UINT32_(8) 
#define PINMUX_PD20I_CCL1_IN3                      ((PIN_PD20I_CCL1_IN3 << 16) | MUX_PD20I_CCL1_IN3)
#define PORT_PD20I_CCL1_IN3                        (_UINT32_(1) << 20)

#define PIN_PD16I_CCL1_IN4                         _UINT32_(112)
#define MUX_PD16I_CCL1_IN4                         _UINT32_(8) 
#define PINMUX_PD16I_CCL1_IN4                      ((PIN_PD16I_CCL1_IN4 << 16) | MUX_PD16I_CCL1_IN4)
#define PORT_PD16I_CCL1_IN4                        (_UINT32_(1) << 16)

#define PIN_PD07I_CCL1_IN4                         _UINT32_(103)
#define MUX_PD07I_CCL1_IN4                         _UINT32_(8) 
#define PINMUX_PD07I_CCL1_IN4                      ((PIN_PD07I_CCL1_IN4 << 16) | MUX_PD07I_CCL1_IN4)
#define PORT_PD07I_CCL1_IN4                        (_UINT32_(1) << 7)

#define PIN_PD11I_CCL1_IN5                         _UINT32_(107)
#define MUX_PD11I_CCL1_IN5                         _UINT32_(8) 
#define PINMUX_PD11I_CCL1_IN5                      ((PIN_PD11I_CCL1_IN5 << 16) | MUX_PD11I_CCL1_IN5)
#define PORT_PD11I_CCL1_IN5                        (_UINT32_(1) << 11)

#define PIN_PD12I_CCL1_IN5                         _UINT32_(108)
#define MUX_PD12I_CCL1_IN5                         _UINT32_(8) 
#define PINMUX_PD12I_CCL1_IN5                      ((PIN_PD12I_CCL1_IN5 << 16) | MUX_PD12I_CCL1_IN5)
#define PORT_PD12I_CCL1_IN5                        (_UINT32_(1) << 12)

#define PIN_PA16I_CCL1_IN6                         _UINT32_(16)
#define MUX_PA16I_CCL1_IN6                         _UINT32_(8) 
#define PINMUX_PA16I_CCL1_IN6                      ((PIN_PA16I_CCL1_IN6 << 16) | MUX_PA16I_CCL1_IN6)
#define PORT_PA16I_CCL1_IN6                        (_UINT32_(1) << 16)

#define PIN_PA09I_CCL1_IN6                         _UINT32_(9) 
#define MUX_PA09I_CCL1_IN6                         _UINT32_(8) 
#define PINMUX_PA09I_CCL1_IN6                      ((PIN_PA09I_CCL1_IN6 << 16) | MUX_PA09I_CCL1_IN6)
#define PORT_PA09I_CCL1_IN6                        (_UINT32_(1) << 9)

#define PIN_PA17I_CCL1_IN7                         _UINT32_(17)
#define MUX_PA17I_CCL1_IN7                         _UINT32_(8) 
#define PINMUX_PA17I_CCL1_IN7                      ((PIN_PA17I_CCL1_IN7 << 16) | MUX_PA17I_CCL1_IN7)
#define PORT_PA17I_CCL1_IN7                        (_UINT32_(1) << 17)

#define PIN_PA06I_CCL1_IN7                         _UINT32_(6) 
#define MUX_PA06I_CCL1_IN7                         _UINT32_(8) 
#define PINMUX_PA06I_CCL1_IN7                      ((PIN_PA06I_CCL1_IN7 << 16) | MUX_PA06I_CCL1_IN7)
#define PORT_PA06I_CCL1_IN7                        (_UINT32_(1) << 6)

#define PIN_PA11I_CCL1_IN8                         _UINT32_(11)
#define MUX_PA11I_CCL1_IN8                         _UINT32_(8) 
#define PINMUX_PA11I_CCL1_IN8                      ((PIN_PA11I_CCL1_IN8 << 16) | MUX_PA11I_CCL1_IN8)
#define PORT_PA11I_CCL1_IN8                        (_UINT32_(1) << 11)

#define PIN_PA12I_CCL1_IN8                         _UINT32_(12)
#define MUX_PA12I_CCL1_IN8                         _UINT32_(8) 
#define PINMUX_PA12I_CCL1_IN8                      ((PIN_PA12I_CCL1_IN8 << 16) | MUX_PA12I_CCL1_IN8)
#define PORT_PA12I_CCL1_IN8                        (_UINT32_(1) << 12)

#define PIN_PB11I_CCL1_IN9                         _UINT32_(43)
#define MUX_PB11I_CCL1_IN9                         _UINT32_(8) 
#define PINMUX_PB11I_CCL1_IN9                      ((PIN_PB11I_CCL1_IN9 << 16) | MUX_PB11I_CCL1_IN9)
#define PORT_PB11I_CCL1_IN9                        (_UINT32_(1) << 11)

#define PIN_PB04I_CCL1_IN9                         _UINT32_(36)
#define MUX_PB04I_CCL1_IN9                         _UINT32_(8) 
#define PINMUX_PB04I_CCL1_IN9                      ((PIN_PB04I_CCL1_IN9 << 16) | MUX_PB04I_CCL1_IN9)
#define PORT_PB04I_CCL1_IN9                        (_UINT32_(1) << 4)

#define PIN_PB13I_CCL1_IN10                        _UINT32_(45)
#define MUX_PB13I_CCL1_IN10                        _UINT32_(8) 
#define PINMUX_PB13I_CCL1_IN10                     ((PIN_PB13I_CCL1_IN10 << 16) | MUX_PB13I_CCL1_IN10)
#define PORT_PB13I_CCL1_IN10                       (_UINT32_(1) << 13)

#define PIN_PB03I_CCL1_IN10                        _UINT32_(35)
#define MUX_PB03I_CCL1_IN10                        _UINT32_(8) 
#define PINMUX_PB03I_CCL1_IN10                     ((PIN_PB03I_CCL1_IN10 << 16) | MUX_PB03I_CCL1_IN10)
#define PORT_PB03I_CCL1_IN10                       (_UINT32_(1) << 3)

#define PIN_PB07I_CCL1_IN11                        _UINT32_(39)
#define MUX_PB07I_CCL1_IN11                        _UINT32_(8) 
#define PINMUX_PB07I_CCL1_IN11                     ((PIN_PB07I_CCL1_IN11 << 16) | MUX_PB07I_CCL1_IN11)
#define PORT_PB07I_CCL1_IN11                       (_UINT32_(1) << 7)

#define PIN_PB08I_CCL1_IN11                        _UINT32_(40)
#define MUX_PB08I_CCL1_IN11                        _UINT32_(8) 
#define PINMUX_PB08I_CCL1_IN11                     ((PIN_PB08I_CCL1_IN11 << 16) | MUX_PB08I_CCL1_IN11)
#define PORT_PB08I_CCL1_IN11                       (_UINT32_(1) << 8)

#define PIN_PC19I_CCL1_OUT0                        _UINT32_(83)
#define MUX_PC19I_CCL1_OUT0                        _UINT32_(8) 
#define PINMUX_PC19I_CCL1_OUT0                     ((PIN_PC19I_CCL1_OUT0 << 16) | MUX_PC19I_CCL1_OUT0)
#define PORT_PC19I_CCL1_OUT0                       (_UINT32_(1) << 19)

#define PIN_PC06I_CCL1_OUT0                        _UINT32_(70)
#define MUX_PC06I_CCL1_OUT0                        _UINT32_(8) 
#define PINMUX_PC06I_CCL1_OUT0                     ((PIN_PC06I_CCL1_OUT0 << 16) | MUX_PC06I_CCL1_OUT0)
#define PORT_PC06I_CCL1_OUT0                       (_UINT32_(1) << 6)

#define PIN_PD15I_CCL1_OUT1                        _UINT32_(111)
#define MUX_PD15I_CCL1_OUT1                        _UINT32_(8) 
#define PINMUX_PD15I_CCL1_OUT1                     ((PIN_PD15I_CCL1_OUT1 << 16) | MUX_PD15I_CCL1_OUT1)
#define PORT_PD15I_CCL1_OUT1                       (_UINT32_(1) << 15)

#define PIN_PD09I_CCL1_OUT1                        _UINT32_(105)
#define MUX_PD09I_CCL1_OUT1                        _UINT32_(8) 
#define PINMUX_PD09I_CCL1_OUT1                     ((PIN_PD09I_CCL1_OUT1 << 16) | MUX_PD09I_CCL1_OUT1)
#define PORT_PD09I_CCL1_OUT1                       (_UINT32_(1) << 9)

#define PIN_PA05I_CCL1_OUT2                        _UINT32_(5) 
#define MUX_PA05I_CCL1_OUT2                        _UINT32_(8) 
#define PINMUX_PA05I_CCL1_OUT2                     ((PIN_PA05I_CCL1_OUT2 << 16) | MUX_PA05I_CCL1_OUT2)
#define PORT_PA05I_CCL1_OUT2                       (_UINT32_(1) << 5)

#define PIN_PA20I_CCL1_OUT2                        _UINT32_(20)
#define MUX_PA20I_CCL1_OUT2                        _UINT32_(8) 
#define PINMUX_PA20I_CCL1_OUT2                     ((PIN_PA20I_CCL1_OUT2 << 16) | MUX_PA20I_CCL1_OUT2)
#define PORT_PA20I_CCL1_OUT2                       (_UINT32_(1) << 20)

#define PIN_PB00I_CCL1_OUT3                        _UINT32_(32)
#define MUX_PB00I_CCL1_OUT3                        _UINT32_(8) 
#define PINMUX_PB00I_CCL1_OUT3                     ((PIN_PB00I_CCL1_OUT3 << 16) | MUX_PB00I_CCL1_OUT3)
#define PORT_PB00I_CCL1_OUT3                       (_UINT32_(1) << 0)

#define PIN_PB17I_CCL1_OUT3                        _UINT32_(49)
#define MUX_PB17I_CCL1_OUT3                        _UINT32_(8) 
#define PINMUX_PB17I_CCL1_OUT3                     ((PIN_PB17I_CCL1_OUT3 << 16) | MUX_PB17I_CCL1_OUT3)
#define PORT_PB17I_CCL1_OUT3                       (_UINT32_(1) << 17)

/* =================== PORT definition for EIC peripheral =================== */
#define PIN_PA00A_EIC_EXTINT0                      _UINT32_(0) 
#define MUX_PA00A_EIC_EXTINT0                      _UINT32_(0) 
#define PINMUX_PA00A_EIC_EXTINT0                   ((PIN_PA00A_EIC_EXTINT0 << 16) | MUX_PA00A_EIC_EXTINT0)
#define PORT_PA00A_EIC_EXTINT0                     (_UINT32_(1) << 0)
#define PIN_PA00A_EIC_EXTINT_NUM                   _UINT32_(0)  /* EIC signal: PIN_PA00 External Interrupt Line */

#define PIN_PA16A_EIC_EXTINT0                      _UINT32_(16)
#define MUX_PA16A_EIC_EXTINT0                      _UINT32_(0) 
#define PINMUX_PA16A_EIC_EXTINT0                   ((PIN_PA16A_EIC_EXTINT0 << 16) | MUX_PA16A_EIC_EXTINT0)
#define PORT_PA16A_EIC_EXTINT0                     (_UINT32_(1) << 16)
#define PIN_PA16A_EIC_EXTINT_NUM                   _UINT32_(0)  /* EIC signal: PIN_PA16 External Interrupt Line */

#define PIN_PB00A_EIC_EXTINT0                      _UINT32_(32)
#define MUX_PB00A_EIC_EXTINT0                      _UINT32_(0) 
#define PINMUX_PB00A_EIC_EXTINT0                   ((PIN_PB00A_EIC_EXTINT0 << 16) | MUX_PB00A_EIC_EXTINT0)
#define PORT_PB00A_EIC_EXTINT0                     (_UINT32_(1) << 0)
#define PIN_PB00A_EIC_EXTINT_NUM                   _UINT32_(0)  /* EIC signal: PIN_PB00 External Interrupt Line */

#define PIN_PB15A_EIC_EXTINT0                      _UINT32_(47)
#define MUX_PB15A_EIC_EXTINT0                      _UINT32_(0) 
#define PINMUX_PB15A_EIC_EXTINT0                   ((PIN_PB15A_EIC_EXTINT0 << 16) | MUX_PB15A_EIC_EXTINT0)
#define PORT_PB15A_EIC_EXTINT0                     (_UINT32_(1) << 15)
#define PIN_PB15A_EIC_EXTINT_NUM                   _UINT32_(0)  /* EIC signal: PIN_PB15 External Interrupt Line */

#define PIN_PC00A_EIC_EXTINT0                      _UINT32_(64)
#define MUX_PC00A_EIC_EXTINT0                      _UINT32_(0) 
#define PINMUX_PC00A_EIC_EXTINT0                   ((PIN_PC00A_EIC_EXTINT0 << 16) | MUX_PC00A_EIC_EXTINT0)
#define PORT_PC00A_EIC_EXTINT0                     (_UINT32_(1) << 0)
#define PIN_PC00A_EIC_EXTINT_NUM                   _UINT32_(0)  /* EIC signal: PIN_PC00 External Interrupt Line */

#define PIN_PC16A_EIC_EXTINT0                      _UINT32_(80)
#define MUX_PC16A_EIC_EXTINT0                      _UINT32_(0) 
#define PINMUX_PC16A_EIC_EXTINT0                   ((PIN_PC16A_EIC_EXTINT0 << 16) | MUX_PC16A_EIC_EXTINT0)
#define PORT_PC16A_EIC_EXTINT0                     (_UINT32_(1) << 16)
#define PIN_PC16A_EIC_EXTINT_NUM                   _UINT32_(0)  /* EIC signal: PIN_PC16 External Interrupt Line */

#define PIN_PD18A_EIC_EXTINT0                      _UINT32_(114)
#define MUX_PD18A_EIC_EXTINT0                      _UINT32_(0) 
#define PINMUX_PD18A_EIC_EXTINT0                   ((PIN_PD18A_EIC_EXTINT0 << 16) | MUX_PD18A_EIC_EXTINT0)
#define PORT_PD18A_EIC_EXTINT0                     (_UINT32_(1) << 18)
#define PIN_PD18A_EIC_EXTINT_NUM                   _UINT32_(0)  /* EIC signal: PIN_PD18 External Interrupt Line */

#define PIN_PA01A_EIC_EXTINT1                      _UINT32_(1) 
#define MUX_PA01A_EIC_EXTINT1                      _UINT32_(0) 
#define PINMUX_PA01A_EIC_EXTINT1                   ((PIN_PA01A_EIC_EXTINT1 << 16) | MUX_PA01A_EIC_EXTINT1)
#define PORT_PA01A_EIC_EXTINT1                     (_UINT32_(1) << 1)
#define PIN_PA01A_EIC_EXTINT_NUM                   _UINT32_(1)  /* EIC signal: PIN_PA01 External Interrupt Line */

#define PIN_PA17A_EIC_EXTINT1                      _UINT32_(17)
#define MUX_PA17A_EIC_EXTINT1                      _UINT32_(0) 
#define PINMUX_PA17A_EIC_EXTINT1                   ((PIN_PA17A_EIC_EXTINT1 << 16) | MUX_PA17A_EIC_EXTINT1)
#define PORT_PA17A_EIC_EXTINT1                     (_UINT32_(1) << 17)
#define PIN_PA17A_EIC_EXTINT_NUM                   _UINT32_(1)  /* EIC signal: PIN_PA17 External Interrupt Line */

#define PIN_PB01A_EIC_EXTINT1                      _UINT32_(33)
#define MUX_PB01A_EIC_EXTINT1                      _UINT32_(0) 
#define PINMUX_PB01A_EIC_EXTINT1                   ((PIN_PB01A_EIC_EXTINT1 << 16) | MUX_PB01A_EIC_EXTINT1)
#define PORT_PB01A_EIC_EXTINT1                     (_UINT32_(1) << 1)
#define PIN_PB01A_EIC_EXTINT_NUM                   _UINT32_(1)  /* EIC signal: PIN_PB01 External Interrupt Line */

#define PIN_PB16A_EIC_EXTINT1                      _UINT32_(48)
#define MUX_PB16A_EIC_EXTINT1                      _UINT32_(0) 
#define PINMUX_PB16A_EIC_EXTINT1                   ((PIN_PB16A_EIC_EXTINT1 << 16) | MUX_PB16A_EIC_EXTINT1)
#define PORT_PB16A_EIC_EXTINT1                     (_UINT32_(1) << 16)
#define PIN_PB16A_EIC_EXTINT_NUM                   _UINT32_(1)  /* EIC signal: PIN_PB16 External Interrupt Line */

#define PIN_PC01A_EIC_EXTINT1                      _UINT32_(65)
#define MUX_PC01A_EIC_EXTINT1                      _UINT32_(0) 
#define PINMUX_PC01A_EIC_EXTINT1                   ((PIN_PC01A_EIC_EXTINT1 << 16) | MUX_PC01A_EIC_EXTINT1)
#define PORT_PC01A_EIC_EXTINT1                     (_UINT32_(1) << 1)
#define PIN_PC01A_EIC_EXTINT_NUM                   _UINT32_(1)  /* EIC signal: PIN_PC01 External Interrupt Line */

#define PIN_PC17A_EIC_EXTINT1                      _UINT32_(81)
#define MUX_PC17A_EIC_EXTINT1                      _UINT32_(0) 
#define PINMUX_PC17A_EIC_EXTINT1                   ((PIN_PC17A_EIC_EXTINT1 << 16) | MUX_PC17A_EIC_EXTINT1)
#define PORT_PC17A_EIC_EXTINT1                     (_UINT32_(1) << 17)
#define PIN_PC17A_EIC_EXTINT_NUM                   _UINT32_(1)  /* EIC signal: PIN_PC17 External Interrupt Line */

#define PIN_PD01A_EIC_EXTINT1                      _UINT32_(97)
#define MUX_PD01A_EIC_EXTINT1                      _UINT32_(0) 
#define PINMUX_PD01A_EIC_EXTINT1                   ((PIN_PD01A_EIC_EXTINT1 << 16) | MUX_PD01A_EIC_EXTINT1)
#define PORT_PD01A_EIC_EXTINT1                     (_UINT32_(1) << 1)
#define PIN_PD01A_EIC_EXTINT_NUM                   _UINT32_(1)  /* EIC signal: PIN_PD01 External Interrupt Line */

#define PIN_PD19A_EIC_EXTINT1                      _UINT32_(115)
#define MUX_PD19A_EIC_EXTINT1                      _UINT32_(0) 
#define PINMUX_PD19A_EIC_EXTINT1                   ((PIN_PD19A_EIC_EXTINT1 << 16) | MUX_PD19A_EIC_EXTINT1)
#define PORT_PD19A_EIC_EXTINT1                     (_UINT32_(1) << 19)
#define PIN_PD19A_EIC_EXTINT_NUM                   _UINT32_(1)  /* EIC signal: PIN_PD19 External Interrupt Line */

#define PIN_PA02A_EIC_EXTINT2                      _UINT32_(2) 
#define MUX_PA02A_EIC_EXTINT2                      _UINT32_(0) 
#define PINMUX_PA02A_EIC_EXTINT2                   ((PIN_PA02A_EIC_EXTINT2 << 16) | MUX_PA02A_EIC_EXTINT2)
#define PORT_PA02A_EIC_EXTINT2                     (_UINT32_(1) << 2)
#define PIN_PA02A_EIC_EXTINT_NUM                   _UINT32_(2)  /* EIC signal: PIN_PA02 External Interrupt Line */

#define PIN_PA18A_EIC_EXTINT2                      _UINT32_(18)
#define MUX_PA18A_EIC_EXTINT2                      _UINT32_(0) 
#define PINMUX_PA18A_EIC_EXTINT2                   ((PIN_PA18A_EIC_EXTINT2 << 16) | MUX_PA18A_EIC_EXTINT2)
#define PORT_PA18A_EIC_EXTINT2                     (_UINT32_(1) << 18)
#define PIN_PA18A_EIC_EXTINT_NUM                   _UINT32_(2)  /* EIC signal: PIN_PA18 External Interrupt Line */

#define PIN_PB02A_EIC_EXTINT2                      _UINT32_(34)
#define MUX_PB02A_EIC_EXTINT2                      _UINT32_(0) 
#define PINMUX_PB02A_EIC_EXTINT2                   ((PIN_PB02A_EIC_EXTINT2 << 16) | MUX_PB02A_EIC_EXTINT2)
#define PORT_PB02A_EIC_EXTINT2                     (_UINT32_(1) << 2)
#define PIN_PB02A_EIC_EXTINT_NUM                   _UINT32_(2)  /* EIC signal: PIN_PB02 External Interrupt Line */

#define PIN_PB12A_EIC_EXTINT2                      _UINT32_(44)
#define MUX_PB12A_EIC_EXTINT2                      _UINT32_(0) 
#define PINMUX_PB12A_EIC_EXTINT2                   ((PIN_PB12A_EIC_EXTINT2 << 16) | MUX_PB12A_EIC_EXTINT2)
#define PORT_PB12A_EIC_EXTINT2                     (_UINT32_(1) << 12)
#define PIN_PB12A_EIC_EXTINT_NUM                   _UINT32_(2)  /* EIC signal: PIN_PB12 External Interrupt Line */

#define PIN_PB17A_EIC_EXTINT2                      _UINT32_(49)
#define MUX_PB17A_EIC_EXTINT2                      _UINT32_(0) 
#define PINMUX_PB17A_EIC_EXTINT2                   ((PIN_PB17A_EIC_EXTINT2 << 16) | MUX_PB17A_EIC_EXTINT2)
#define PORT_PB17A_EIC_EXTINT2                     (_UINT32_(1) << 17)
#define PIN_PB17A_EIC_EXTINT_NUM                   _UINT32_(2)  /* EIC signal: PIN_PB17 External Interrupt Line */

#define PIN_PC02A_EIC_EXTINT2                      _UINT32_(66)
#define MUX_PC02A_EIC_EXTINT2                      _UINT32_(0) 
#define PINMUX_PC02A_EIC_EXTINT2                   ((PIN_PC02A_EIC_EXTINT2 << 16) | MUX_PC02A_EIC_EXTINT2)
#define PORT_PC02A_EIC_EXTINT2                     (_UINT32_(1) << 2)
#define PIN_PC02A_EIC_EXTINT_NUM                   _UINT32_(2)  /* EIC signal: PIN_PC02 External Interrupt Line */

#define PIN_PC18A_EIC_EXTINT2                      _UINT32_(82)
#define MUX_PC18A_EIC_EXTINT2                      _UINT32_(0) 
#define PINMUX_PC18A_EIC_EXTINT2                   ((PIN_PC18A_EIC_EXTINT2 << 16) | MUX_PC18A_EIC_EXTINT2)
#define PORT_PC18A_EIC_EXTINT2                     (_UINT32_(1) << 18)
#define PIN_PC18A_EIC_EXTINT_NUM                   _UINT32_(2)  /* EIC signal: PIN_PC18 External Interrupt Line */

#define PIN_PD04A_EIC_EXTINT2                      _UINT32_(100)
#define MUX_PD04A_EIC_EXTINT2                      _UINT32_(0) 
#define PINMUX_PD04A_EIC_EXTINT2                   ((PIN_PD04A_EIC_EXTINT2 << 16) | MUX_PD04A_EIC_EXTINT2)
#define PORT_PD04A_EIC_EXTINT2                     (_UINT32_(1) << 4)
#define PIN_PD04A_EIC_EXTINT_NUM                   _UINT32_(2)  /* EIC signal: PIN_PD04 External Interrupt Line */

#define PIN_PD20A_EIC_EXTINT2                      _UINT32_(116)
#define MUX_PD20A_EIC_EXTINT2                      _UINT32_(0) 
#define PINMUX_PD20A_EIC_EXTINT2                   ((PIN_PD20A_EIC_EXTINT2 << 16) | MUX_PD20A_EIC_EXTINT2)
#define PORT_PD20A_EIC_EXTINT2                     (_UINT32_(1) << 20)
#define PIN_PD20A_EIC_EXTINT_NUM                   _UINT32_(2)  /* EIC signal: PIN_PD20 External Interrupt Line */

#define PIN_PA03A_EIC_EXTINT3                      _UINT32_(3) 
#define MUX_PA03A_EIC_EXTINT3                      _UINT32_(0) 
#define PINMUX_PA03A_EIC_EXTINT3                   ((PIN_PA03A_EIC_EXTINT3 << 16) | MUX_PA03A_EIC_EXTINT3)
#define PORT_PA03A_EIC_EXTINT3                     (_UINT32_(1) << 3)
#define PIN_PA03A_EIC_EXTINT_NUM                   _UINT32_(3)  /* EIC signal: PIN_PA03 External Interrupt Line */

#define PIN_PA19A_EIC_EXTINT3                      _UINT32_(19)
#define MUX_PA19A_EIC_EXTINT3                      _UINT32_(0) 
#define PINMUX_PA19A_EIC_EXTINT3                   ((PIN_PA19A_EIC_EXTINT3 << 16) | MUX_PA19A_EIC_EXTINT3)
#define PORT_PA19A_EIC_EXTINT3                     (_UINT32_(1) << 19)
#define PIN_PA19A_EIC_EXTINT_NUM                   _UINT32_(3)  /* EIC signal: PIN_PA19 External Interrupt Line */

#define PIN_PB03A_EIC_EXTINT3                      _UINT32_(35)
#define MUX_PB03A_EIC_EXTINT3                      _UINT32_(0) 
#define PINMUX_PB03A_EIC_EXTINT3                   ((PIN_PB03A_EIC_EXTINT3 << 16) | MUX_PB03A_EIC_EXTINT3)
#define PORT_PB03A_EIC_EXTINT3                     (_UINT32_(1) << 3)
#define PIN_PB03A_EIC_EXTINT_NUM                   _UINT32_(3)  /* EIC signal: PIN_PB03 External Interrupt Line */

#define PIN_PC03A_EIC_EXTINT3                      _UINT32_(67)
#define MUX_PC03A_EIC_EXTINT3                      _UINT32_(0) 
#define PINMUX_PC03A_EIC_EXTINT3                   ((PIN_PC03A_EIC_EXTINT3 << 16) | MUX_PC03A_EIC_EXTINT3)
#define PORT_PC03A_EIC_EXTINT3                     (_UINT32_(1) << 3)
#define PIN_PC03A_EIC_EXTINT_NUM                   _UINT32_(3)  /* EIC signal: PIN_PC03 External Interrupt Line */

#define PIN_PC19A_EIC_EXTINT3                      _UINT32_(83)
#define MUX_PC19A_EIC_EXTINT3                      _UINT32_(0) 
#define PINMUX_PC19A_EIC_EXTINT3                   ((PIN_PC19A_EIC_EXTINT3 << 16) | MUX_PC19A_EIC_EXTINT3)
#define PORT_PC19A_EIC_EXTINT3                     (_UINT32_(1) << 19)
#define PIN_PC19A_EIC_EXTINT_NUM                   _UINT32_(3)  /* EIC signal: PIN_PC19 External Interrupt Line */

#define PIN_PD05A_EIC_EXTINT3                      _UINT32_(101)
#define MUX_PD05A_EIC_EXTINT3                      _UINT32_(0) 
#define PINMUX_PD05A_EIC_EXTINT3                   ((PIN_PD05A_EIC_EXTINT3 << 16) | MUX_PD05A_EIC_EXTINT3)
#define PORT_PD05A_EIC_EXTINT3                     (_UINT32_(1) << 5)
#define PIN_PD05A_EIC_EXTINT_NUM                   _UINT32_(3)  /* EIC signal: PIN_PD05 External Interrupt Line */

#define PIN_PA04A_EIC_EXTINT4                      _UINT32_(4) 
#define MUX_PA04A_EIC_EXTINT4                      _UINT32_(0) 
#define PINMUX_PA04A_EIC_EXTINT4                   ((PIN_PA04A_EIC_EXTINT4 << 16) | MUX_PA04A_EIC_EXTINT4)
#define PORT_PA04A_EIC_EXTINT4                     (_UINT32_(1) << 4)
#define PIN_PA04A_EIC_EXTINT_NUM                   _UINT32_(4)  /* EIC signal: PIN_PA04 External Interrupt Line */

#define PIN_PA20A_EIC_EXTINT4                      _UINT32_(20)
#define MUX_PA20A_EIC_EXTINT4                      _UINT32_(0) 
#define PINMUX_PA20A_EIC_EXTINT4                   ((PIN_PA20A_EIC_EXTINT4 << 16) | MUX_PA20A_EIC_EXTINT4)
#define PORT_PA20A_EIC_EXTINT4                     (_UINT32_(1) << 20)
#define PIN_PA20A_EIC_EXTINT_NUM                   _UINT32_(4)  /* EIC signal: PIN_PA20 External Interrupt Line */

#define PIN_PB04A_EIC_EXTINT4                      _UINT32_(36)
#define MUX_PB04A_EIC_EXTINT4                      _UINT32_(0) 
#define PINMUX_PB04A_EIC_EXTINT4                   ((PIN_PB04A_EIC_EXTINT4 << 16) | MUX_PB04A_EIC_EXTINT4)
#define PORT_PB04A_EIC_EXTINT4                     (_UINT32_(1) << 4)
#define PIN_PB04A_EIC_EXTINT_NUM                   _UINT32_(4)  /* EIC signal: PIN_PB04 External Interrupt Line */

#define PIN_PC04A_EIC_EXTINT4                      _UINT32_(68)
#define MUX_PC04A_EIC_EXTINT4                      _UINT32_(0) 
#define PINMUX_PC04A_EIC_EXTINT4                   ((PIN_PC04A_EIC_EXTINT4 << 16) | MUX_PC04A_EIC_EXTINT4)
#define PORT_PC04A_EIC_EXTINT4                     (_UINT32_(1) << 4)
#define PIN_PC04A_EIC_EXTINT_NUM                   _UINT32_(4)  /* EIC signal: PIN_PC04 External Interrupt Line */

#define PIN_PD07A_EIC_EXTINT4                      _UINT32_(103)
#define MUX_PD07A_EIC_EXTINT4                      _UINT32_(0) 
#define PINMUX_PD07A_EIC_EXTINT4                   ((PIN_PD07A_EIC_EXTINT4 << 16) | MUX_PD07A_EIC_EXTINT4)
#define PORT_PD07A_EIC_EXTINT4                     (_UINT32_(1) << 7)
#define PIN_PD07A_EIC_EXTINT_NUM                   _UINT32_(4)  /* EIC signal: PIN_PD07 External Interrupt Line */

#define PIN_PA05A_EIC_EXTINT5                      _UINT32_(5) 
#define MUX_PA05A_EIC_EXTINT5                      _UINT32_(0) 
#define PINMUX_PA05A_EIC_EXTINT5                   ((PIN_PA05A_EIC_EXTINT5 << 16) | MUX_PA05A_EIC_EXTINT5)
#define PORT_PA05A_EIC_EXTINT5                     (_UINT32_(1) << 5)
#define PIN_PA05A_EIC_EXTINT_NUM                   _UINT32_(5)  /* EIC signal: PIN_PA05 External Interrupt Line */

#define PIN_PB05A_EIC_EXTINT5                      _UINT32_(37)
#define MUX_PB05A_EIC_EXTINT5                      _UINT32_(0) 
#define PINMUX_PB05A_EIC_EXTINT5                   ((PIN_PB05A_EIC_EXTINT5 << 16) | MUX_PB05A_EIC_EXTINT5)
#define PORT_PB05A_EIC_EXTINT5                     (_UINT32_(1) << 5)
#define PIN_PB05A_EIC_EXTINT_NUM                   _UINT32_(5)  /* EIC signal: PIN_PB05 External Interrupt Line */

#define PIN_PC05A_EIC_EXTINT5                      _UINT32_(69)
#define MUX_PC05A_EIC_EXTINT5                      _UINT32_(0) 
#define PINMUX_PC05A_EIC_EXTINT5                   ((PIN_PC05A_EIC_EXTINT5 << 16) | MUX_PC05A_EIC_EXTINT5)
#define PORT_PC05A_EIC_EXTINT5                     (_UINT32_(1) << 5)
#define PIN_PC05A_EIC_EXTINT_NUM                   _UINT32_(5)  /* EIC signal: PIN_PC05 External Interrupt Line */

#define PIN_PD08A_EIC_EXTINT5                      _UINT32_(104)
#define MUX_PD08A_EIC_EXTINT5                      _UINT32_(0) 
#define PINMUX_PD08A_EIC_EXTINT5                   ((PIN_PD08A_EIC_EXTINT5 << 16) | MUX_PD08A_EIC_EXTINT5)
#define PORT_PD08A_EIC_EXTINT5                     (_UINT32_(1) << 8)
#define PIN_PD08A_EIC_EXTINT_NUM                   _UINT32_(5)  /* EIC signal: PIN_PD08 External Interrupt Line */

#define PIN_PA06A_EIC_EXTINT6                      _UINT32_(6) 
#define MUX_PA06A_EIC_EXTINT6                      _UINT32_(0) 
#define PINMUX_PA06A_EIC_EXTINT6                   ((PIN_PA06A_EIC_EXTINT6 << 16) | MUX_PA06A_EIC_EXTINT6)
#define PORT_PA06A_EIC_EXTINT6                     (_UINT32_(1) << 6)
#define PIN_PA06A_EIC_EXTINT_NUM                   _UINT32_(6)  /* EIC signal: PIN_PA06 External Interrupt Line */

#define PIN_PB06A_EIC_EXTINT6                      _UINT32_(38)
#define MUX_PB06A_EIC_EXTINT6                      _UINT32_(0) 
#define PINMUX_PB06A_EIC_EXTINT6                   ((PIN_PB06A_EIC_EXTINT6 << 16) | MUX_PB06A_EIC_EXTINT6)
#define PORT_PB06A_EIC_EXTINT6                     (_UINT32_(1) << 6)
#define PIN_PB06A_EIC_EXTINT_NUM                   _UINT32_(6)  /* EIC signal: PIN_PB06 External Interrupt Line */

#define PIN_PC06A_EIC_EXTINT6                      _UINT32_(70)
#define MUX_PC06A_EIC_EXTINT6                      _UINT32_(0) 
#define PINMUX_PC06A_EIC_EXTINT6                   ((PIN_PC06A_EIC_EXTINT6 << 16) | MUX_PC06A_EIC_EXTINT6)
#define PORT_PC06A_EIC_EXTINT6                     (_UINT32_(1) << 6)
#define PIN_PC06A_EIC_EXTINT_NUM                   _UINT32_(6)  /* EIC signal: PIN_PC06 External Interrupt Line */

#define PIN_PD09A_EIC_EXTINT6                      _UINT32_(105)
#define MUX_PD09A_EIC_EXTINT6                      _UINT32_(0) 
#define PINMUX_PD09A_EIC_EXTINT6                   ((PIN_PD09A_EIC_EXTINT6 << 16) | MUX_PD09A_EIC_EXTINT6)
#define PORT_PD09A_EIC_EXTINT6                     (_UINT32_(1) << 9)
#define PIN_PD09A_EIC_EXTINT_NUM                   _UINT32_(6)  /* EIC signal: PIN_PD09 External Interrupt Line */

#define PIN_PA07A_EIC_EXTINT7                      _UINT32_(7) 
#define MUX_PA07A_EIC_EXTINT7                      _UINT32_(0) 
#define PINMUX_PA07A_EIC_EXTINT7                   ((PIN_PA07A_EIC_EXTINT7 << 16) | MUX_PA07A_EIC_EXTINT7)
#define PORT_PA07A_EIC_EXTINT7                     (_UINT32_(1) << 7)
#define PIN_PA07A_EIC_EXTINT_NUM                   _UINT32_(7)  /* EIC signal: PIN_PA07 External Interrupt Line */

#define PIN_PA08A_EIC_EXTINT8                      _UINT32_(8) 
#define MUX_PA08A_EIC_EXTINT8                      _UINT32_(0) 
#define PINMUX_PA08A_EIC_EXTINT8                   ((PIN_PA08A_EIC_EXTINT8 << 16) | MUX_PA08A_EIC_EXTINT8)
#define PORT_PA08A_EIC_EXTINT8                     (_UINT32_(1) << 8)
#define PIN_PA08A_EIC_EXTINT_NUM                   _UINT32_(8)  /* EIC signal: PIN_PA08 External Interrupt Line */

#define PIN_PB07A_EIC_EXTINT8                      _UINT32_(39)
#define MUX_PB07A_EIC_EXTINT8                      _UINT32_(0) 
#define PINMUX_PB07A_EIC_EXTINT8                   ((PIN_PB07A_EIC_EXTINT8 << 16) | MUX_PB07A_EIC_EXTINT8)
#define PORT_PB07A_EIC_EXTINT8                     (_UINT32_(1) << 7)
#define PIN_PB07A_EIC_EXTINT_NUM                   _UINT32_(8)  /* EIC signal: PIN_PB07 External Interrupt Line */

#define PIN_PD10A_EIC_EXTINT8                      _UINT32_(106)
#define MUX_PD10A_EIC_EXTINT8                      _UINT32_(0) 
#define PINMUX_PD10A_EIC_EXTINT8                   ((PIN_PD10A_EIC_EXTINT8 << 16) | MUX_PD10A_EIC_EXTINT8)
#define PORT_PD10A_EIC_EXTINT8                     (_UINT32_(1) << 10)
#define PIN_PD10A_EIC_EXTINT_NUM                   _UINT32_(8)  /* EIC signal: PIN_PD10 External Interrupt Line */

#define PIN_PA09A_EIC_EXTINT9                      _UINT32_(9) 
#define MUX_PA09A_EIC_EXTINT9                      _UINT32_(0) 
#define PINMUX_PA09A_EIC_EXTINT9                   ((PIN_PA09A_EIC_EXTINT9 << 16) | MUX_PA09A_EIC_EXTINT9)
#define PORT_PA09A_EIC_EXTINT9                     (_UINT32_(1) << 9)
#define PIN_PA09A_EIC_EXTINT_NUM                   _UINT32_(9)  /* EIC signal: PIN_PA09 External Interrupt Line */

#define PIN_PB08A_EIC_EXTINT9                      _UINT32_(40)
#define MUX_PB08A_EIC_EXTINT9                      _UINT32_(0) 
#define PINMUX_PB08A_EIC_EXTINT9                   ((PIN_PB08A_EIC_EXTINT9 << 16) | MUX_PB08A_EIC_EXTINT9)
#define PORT_PB08A_EIC_EXTINT9                     (_UINT32_(1) << 8)
#define PIN_PB08A_EIC_EXTINT_NUM                   _UINT32_(9)  /* EIC signal: PIN_PB08 External Interrupt Line */

#define PIN_PC09A_EIC_EXTINT9                      _UINT32_(73)
#define MUX_PC09A_EIC_EXTINT9                      _UINT32_(0) 
#define PINMUX_PC09A_EIC_EXTINT9                   ((PIN_PC09A_EIC_EXTINT9 << 16) | MUX_PC09A_EIC_EXTINT9)
#define PORT_PC09A_EIC_EXTINT9                     (_UINT32_(1) << 9)
#define PIN_PC09A_EIC_EXTINT_NUM                   _UINT32_(9)  /* EIC signal: PIN_PC09 External Interrupt Line */

#define PIN_PD11A_EIC_EXTINT9                      _UINT32_(107)
#define MUX_PD11A_EIC_EXTINT9                      _UINT32_(0) 
#define PINMUX_PD11A_EIC_EXTINT9                   ((PIN_PD11A_EIC_EXTINT9 << 16) | MUX_PD11A_EIC_EXTINT9)
#define PORT_PD11A_EIC_EXTINT9                     (_UINT32_(1) << 11)
#define PIN_PD11A_EIC_EXTINT_NUM                   _UINT32_(9)  /* EIC signal: PIN_PD11 External Interrupt Line */

#define PIN_PA10A_EIC_EXTINT10                     _UINT32_(10)
#define MUX_PA10A_EIC_EXTINT10                     _UINT32_(0) 
#define PINMUX_PA10A_EIC_EXTINT10                  ((PIN_PA10A_EIC_EXTINT10 << 16) | MUX_PA10A_EIC_EXTINT10)
#define PORT_PA10A_EIC_EXTINT10                    (_UINT32_(1) << 10)
#define PIN_PA10A_EIC_EXTINT_NUM                   _UINT32_(10) /* EIC signal: PIN_PA10 External Interrupt Line */

#define PIN_PB09A_EIC_EXTINT10                     _UINT32_(41)
#define MUX_PB09A_EIC_EXTINT10                     _UINT32_(0) 
#define PINMUX_PB09A_EIC_EXTINT10                  ((PIN_PB09A_EIC_EXTINT10 << 16) | MUX_PB09A_EIC_EXTINT10)
#define PORT_PB09A_EIC_EXTINT10                    (_UINT32_(1) << 9)
#define PIN_PB09A_EIC_EXTINT_NUM                   _UINT32_(10) /* EIC signal: PIN_PB09 External Interrupt Line */

#define PIN_PC10A_EIC_EXTINT10                     _UINT32_(74)
#define MUX_PC10A_EIC_EXTINT10                     _UINT32_(0) 
#define PINMUX_PC10A_EIC_EXTINT10                  ((PIN_PC10A_EIC_EXTINT10 << 16) | MUX_PC10A_EIC_EXTINT10)
#define PORT_PC10A_EIC_EXTINT10                    (_UINT32_(1) << 10)
#define PIN_PC10A_EIC_EXTINT_NUM                   _UINT32_(10) /* EIC signal: PIN_PC10 External Interrupt Line */

#define PIN_PD12A_EIC_EXTINT10                     _UINT32_(108)
#define MUX_PD12A_EIC_EXTINT10                     _UINT32_(0) 
#define PINMUX_PD12A_EIC_EXTINT10                  ((PIN_PD12A_EIC_EXTINT10 << 16) | MUX_PD12A_EIC_EXTINT10)
#define PORT_PD12A_EIC_EXTINT10                    (_UINT32_(1) << 12)
#define PIN_PD12A_EIC_EXTINT_NUM                   _UINT32_(10) /* EIC signal: PIN_PD12 External Interrupt Line */

#define PIN_PA11A_EIC_EXTINT11                     _UINT32_(11)
#define MUX_PA11A_EIC_EXTINT11                     _UINT32_(0) 
#define PINMUX_PA11A_EIC_EXTINT11                  ((PIN_PA11A_EIC_EXTINT11 << 16) | MUX_PA11A_EIC_EXTINT11)
#define PORT_PA11A_EIC_EXTINT11                    (_UINT32_(1) << 11)
#define PIN_PA11A_EIC_EXTINT_NUM                   _UINT32_(11) /* EIC signal: PIN_PA11 External Interrupt Line */

#define PIN_PB10A_EIC_EXTINT11                     _UINT32_(42)
#define MUX_PB10A_EIC_EXTINT11                     _UINT32_(0) 
#define PINMUX_PB10A_EIC_EXTINT11                  ((PIN_PB10A_EIC_EXTINT11 << 16) | MUX_PB10A_EIC_EXTINT11)
#define PORT_PB10A_EIC_EXTINT11                    (_UINT32_(1) << 10)
#define PIN_PB10A_EIC_EXTINT_NUM                   _UINT32_(11) /* EIC signal: PIN_PB10 External Interrupt Line */

#define PIN_PC11A_EIC_EXTINT11                     _UINT32_(75)
#define MUX_PC11A_EIC_EXTINT11                     _UINT32_(0) 
#define PINMUX_PC11A_EIC_EXTINT11                  ((PIN_PC11A_EIC_EXTINT11 << 16) | MUX_PC11A_EIC_EXTINT11)
#define PORT_PC11A_EIC_EXTINT11                    (_UINT32_(1) << 11)
#define PIN_PC11A_EIC_EXTINT_NUM                   _UINT32_(11) /* EIC signal: PIN_PC11 External Interrupt Line */

#define PIN_PD13A_EIC_EXTINT11                     _UINT32_(109)
#define MUX_PD13A_EIC_EXTINT11                     _UINT32_(0) 
#define PINMUX_PD13A_EIC_EXTINT11                  ((PIN_PD13A_EIC_EXTINT11 << 16) | MUX_PD13A_EIC_EXTINT11)
#define PORT_PD13A_EIC_EXTINT11                    (_UINT32_(1) << 13)
#define PIN_PD13A_EIC_EXTINT_NUM                   _UINT32_(11) /* EIC signal: PIN_PD13 External Interrupt Line */

#define PIN_PA12A_EIC_EXTINT12                     _UINT32_(12)
#define MUX_PA12A_EIC_EXTINT12                     _UINT32_(0) 
#define PINMUX_PA12A_EIC_EXTINT12                  ((PIN_PA12A_EIC_EXTINT12 << 16) | MUX_PA12A_EIC_EXTINT12)
#define PORT_PA12A_EIC_EXTINT12                    (_UINT32_(1) << 12)
#define PIN_PA12A_EIC_EXTINT_NUM                   _UINT32_(12) /* EIC signal: PIN_PA12 External Interrupt Line */

#define PIN_PB11A_EIC_EXTINT12                     _UINT32_(43)
#define MUX_PB11A_EIC_EXTINT12                     _UINT32_(0) 
#define PINMUX_PB11A_EIC_EXTINT12                  ((PIN_PB11A_EIC_EXTINT12 << 16) | MUX_PB11A_EIC_EXTINT12)
#define PORT_PB11A_EIC_EXTINT12                    (_UINT32_(1) << 11)
#define PIN_PB11A_EIC_EXTINT_NUM                   _UINT32_(12) /* EIC signal: PIN_PB11 External Interrupt Line */

#define PIN_PC12A_EIC_EXTINT12                     _UINT32_(76)
#define MUX_PC12A_EIC_EXTINT12                     _UINT32_(0) 
#define PINMUX_PC12A_EIC_EXTINT12                  ((PIN_PC12A_EIC_EXTINT12 << 16) | MUX_PC12A_EIC_EXTINT12)
#define PORT_PC12A_EIC_EXTINT12                    (_UINT32_(1) << 12)
#define PIN_PC12A_EIC_EXTINT_NUM                   _UINT32_(12) /* EIC signal: PIN_PC12 External Interrupt Line */

#define PIN_PD14A_EIC_EXTINT12                     _UINT32_(110)
#define MUX_PD14A_EIC_EXTINT12                     _UINT32_(0) 
#define PINMUX_PD14A_EIC_EXTINT12                  ((PIN_PD14A_EIC_EXTINT12 << 16) | MUX_PD14A_EIC_EXTINT12)
#define PORT_PD14A_EIC_EXTINT12                    (_UINT32_(1) << 14)
#define PIN_PD14A_EIC_EXTINT_NUM                   _UINT32_(12) /* EIC signal: PIN_PD14 External Interrupt Line */

#define PIN_PA13A_EIC_EXTINT13                     _UINT32_(13)
#define MUX_PA13A_EIC_EXTINT13                     _UINT32_(0) 
#define PINMUX_PA13A_EIC_EXTINT13                  ((PIN_PA13A_EIC_EXTINT13 << 16) | MUX_PA13A_EIC_EXTINT13)
#define PORT_PA13A_EIC_EXTINT13                    (_UINT32_(1) << 13)
#define PIN_PA13A_EIC_EXTINT_NUM                   _UINT32_(13) /* EIC signal: PIN_PA13 External Interrupt Line */

#define PIN_PC13A_EIC_EXTINT13                     _UINT32_(77)
#define MUX_PC13A_EIC_EXTINT13                     _UINT32_(0) 
#define PINMUX_PC13A_EIC_EXTINT13                  ((PIN_PC13A_EIC_EXTINT13 << 16) | MUX_PC13A_EIC_EXTINT13)
#define PORT_PC13A_EIC_EXTINT13                    (_UINT32_(1) << 13)
#define PIN_PC13A_EIC_EXTINT_NUM                   _UINT32_(13) /* EIC signal: PIN_PC13 External Interrupt Line */

#define PIN_PD15A_EIC_EXTINT13                     _UINT32_(111)
#define MUX_PD15A_EIC_EXTINT13                     _UINT32_(0) 
#define PINMUX_PD15A_EIC_EXTINT13                  ((PIN_PD15A_EIC_EXTINT13 << 16) | MUX_PD15A_EIC_EXTINT13)
#define PORT_PD15A_EIC_EXTINT13                    (_UINT32_(1) << 15)
#define PIN_PD15A_EIC_EXTINT_NUM                   _UINT32_(13) /* EIC signal: PIN_PD15 External Interrupt Line */

#define PIN_PA14A_EIC_EXTINT14                     _UINT32_(14)
#define MUX_PA14A_EIC_EXTINT14                     _UINT32_(0) 
#define PINMUX_PA14A_EIC_EXTINT14                  ((PIN_PA14A_EIC_EXTINT14 << 16) | MUX_PA14A_EIC_EXTINT14)
#define PORT_PA14A_EIC_EXTINT14                    (_UINT32_(1) << 14)
#define PIN_PA14A_EIC_EXTINT_NUM                   _UINT32_(14) /* EIC signal: PIN_PA14 External Interrupt Line */

#define PIN_PB13A_EIC_EXTINT14                     _UINT32_(45)
#define MUX_PB13A_EIC_EXTINT14                     _UINT32_(0) 
#define PINMUX_PB13A_EIC_EXTINT14                  ((PIN_PB13A_EIC_EXTINT14 << 16) | MUX_PB13A_EIC_EXTINT14)
#define PORT_PB13A_EIC_EXTINT14                    (_UINT32_(1) << 13)
#define PIN_PB13A_EIC_EXTINT_NUM                   _UINT32_(14) /* EIC signal: PIN_PB13 External Interrupt Line */

#define PIN_PC14A_EIC_EXTINT14                     _UINT32_(78)
#define MUX_PC14A_EIC_EXTINT14                     _UINT32_(0) 
#define PINMUX_PC14A_EIC_EXTINT14                  ((PIN_PC14A_EIC_EXTINT14 << 16) | MUX_PC14A_EIC_EXTINT14)
#define PORT_PC14A_EIC_EXTINT14                    (_UINT32_(1) << 14)
#define PIN_PC14A_EIC_EXTINT_NUM                   _UINT32_(14) /* EIC signal: PIN_PC14 External Interrupt Line */

#define PIN_PD16A_EIC_EXTINT14                     _UINT32_(112)
#define MUX_PD16A_EIC_EXTINT14                     _UINT32_(0) 
#define PINMUX_PD16A_EIC_EXTINT14                  ((PIN_PD16A_EIC_EXTINT14 << 16) | MUX_PD16A_EIC_EXTINT14)
#define PORT_PD16A_EIC_EXTINT14                    (_UINT32_(1) << 16)
#define PIN_PD16A_EIC_EXTINT_NUM                   _UINT32_(14) /* EIC signal: PIN_PD16 External Interrupt Line */

#define PIN_PA15A_EIC_EXTINT15                     _UINT32_(15)
#define MUX_PA15A_EIC_EXTINT15                     _UINT32_(0) 
#define PINMUX_PA15A_EIC_EXTINT15                  ((PIN_PA15A_EIC_EXTINT15 << 16) | MUX_PA15A_EIC_EXTINT15)
#define PORT_PA15A_EIC_EXTINT15                    (_UINT32_(1) << 15)
#define PIN_PA15A_EIC_EXTINT_NUM                   _UINT32_(15) /* EIC signal: PIN_PA15 External Interrupt Line */

#define PIN_PB14A_EIC_EXTINT15                     _UINT32_(46)
#define MUX_PB14A_EIC_EXTINT15                     _UINT32_(0) 
#define PINMUX_PB14A_EIC_EXTINT15                  ((PIN_PB14A_EIC_EXTINT15 << 16) | MUX_PB14A_EIC_EXTINT15)
#define PORT_PB14A_EIC_EXTINT15                    (_UINT32_(1) << 14)
#define PIN_PB14A_EIC_EXTINT_NUM                   _UINT32_(15) /* EIC signal: PIN_PB14 External Interrupt Line */

#define PIN_PC15A_EIC_EXTINT15                     _UINT32_(79)
#define MUX_PC15A_EIC_EXTINT15                     _UINT32_(0) 
#define PINMUX_PC15A_EIC_EXTINT15                  ((PIN_PC15A_EIC_EXTINT15 << 16) | MUX_PC15A_EIC_EXTINT15)
#define PORT_PC15A_EIC_EXTINT15                    (_UINT32_(1) << 15)
#define PIN_PC15A_EIC_EXTINT_NUM                   _UINT32_(15) /* EIC signal: PIN_PC15 External Interrupt Line */

#define PIN_PD17A_EIC_EXTINT15                     _UINT32_(113)
#define MUX_PD17A_EIC_EXTINT15                     _UINT32_(0) 
#define PINMUX_PD17A_EIC_EXTINT15                  ((PIN_PD17A_EIC_EXTINT15 << 16) | MUX_PD17A_EIC_EXTINT15)
#define PORT_PD17A_EIC_EXTINT15                    (_UINT32_(1) << 17)
#define PIN_PD17A_EIC_EXTINT_NUM                   _UINT32_(15) /* EIC signal: PIN_PD17 External Interrupt Line */

#define PIN_PD00A_EIC_NMI                          _UINT32_(96)
#define MUX_PD00A_EIC_NMI                          _UINT32_(0) 
#define PINMUX_PD00A_EIC_NMI                       ((PIN_PD00A_EIC_NMI << 16) | MUX_PD00A_EIC_NMI)
#define PORT_PD00A_EIC_NMI                         (_UINT32_(1) << 0)

/* ================== PORT definition for GCLK peripheral =================== */
#define PIN_PB06K_GCLK_IO0                         _UINT32_(38)
#define MUX_PB06K_GCLK_IO0                         _UINT32_(10)
#define PINMUX_PB06K_GCLK_IO0                      ((PIN_PB06K_GCLK_IO0 << 16) | MUX_PB06K_GCLK_IO0)
#define PORT_PB06K_GCLK_IO0                        (_UINT32_(1) << 6)

#define PIN_PB15K_GCLK_IO0                         _UINT32_(47)
#define MUX_PB15K_GCLK_IO0                         _UINT32_(10)
#define PINMUX_PB15K_GCLK_IO0                      ((PIN_PB15K_GCLK_IO0 << 16) | MUX_PB15K_GCLK_IO0)
#define PORT_PB15K_GCLK_IO0                        (_UINT32_(1) << 15)

#define PIN_PC09K_GCLK_IO0                         _UINT32_(73)
#define MUX_PC09K_GCLK_IO0                         _UINT32_(10)
#define PINMUX_PC09K_GCLK_IO0                      ((PIN_PC09K_GCLK_IO0 << 16) | MUX_PC09K_GCLK_IO0)
#define PORT_PC09K_GCLK_IO0                        (_UINT32_(1) << 9)

#define PIN_PD05K_GCLK_IO0                         _UINT32_(101)
#define MUX_PD05K_GCLK_IO0                         _UINT32_(10)
#define PINMUX_PD05K_GCLK_IO0                      ((PIN_PD05K_GCLK_IO0 << 16) | MUX_PD05K_GCLK_IO0)
#define PORT_PD05K_GCLK_IO0                        (_UINT32_(1) << 5)

#define PIN_PC00K_GCLK_IO1                         _UINT32_(64)
#define MUX_PC00K_GCLK_IO1                         _UINT32_(10)
#define PINMUX_PC00K_GCLK_IO1                      ((PIN_PC00K_GCLK_IO1 << 16) | MUX_PC00K_GCLK_IO1)
#define PORT_PC00K_GCLK_IO1                        (_UINT32_(1) << 0)

#define PIN_PC10K_GCLK_IO1                         _UINT32_(74)
#define MUX_PC10K_GCLK_IO1                         _UINT32_(10)
#define PINMUX_PC10K_GCLK_IO1                      ((PIN_PC10K_GCLK_IO1 << 16) | MUX_PC10K_GCLK_IO1)
#define PORT_PC10K_GCLK_IO1                        (_UINT32_(1) << 10)

#define PIN_PC05K_GCLK_IO1                         _UINT32_(69)
#define MUX_PC05K_GCLK_IO1                         _UINT32_(10)
#define PINMUX_PC05K_GCLK_IO1                      ((PIN_PC05K_GCLK_IO1 << 16) | MUX_PC05K_GCLK_IO1)
#define PORT_PC05K_GCLK_IO1                        (_UINT32_(1) << 5)

#define PIN_PD04K_GCLK_IO1                         _UINT32_(100)
#define MUX_PD04K_GCLK_IO1                         _UINT32_(10)
#define PINMUX_PD04K_GCLK_IO1                      ((PIN_PD04K_GCLK_IO1 << 16) | MUX_PD04K_GCLK_IO1)
#define PORT_PD04K_GCLK_IO1                        (_UINT32_(1) << 4)

#define PIN_PC01K_GCLK_IO2                         _UINT32_(65)
#define MUX_PC01K_GCLK_IO2                         _UINT32_(10)
#define PINMUX_PC01K_GCLK_IO2                      ((PIN_PC01K_GCLK_IO2 << 16) | MUX_PC01K_GCLK_IO2)
#define PORT_PC01K_GCLK_IO2                        (_UINT32_(1) << 1)

#define PIN_PC02K_GCLK_IO3                         _UINT32_(66)
#define MUX_PC02K_GCLK_IO3                         _UINT32_(10)
#define PINMUX_PC02K_GCLK_IO3                      ((PIN_PC02K_GCLK_IO3 << 16) | MUX_PC02K_GCLK_IO3)
#define PORT_PC02K_GCLK_IO3                        (_UINT32_(1) << 2)

#define PIN_PC03K_GCLK_IO4                         _UINT32_(67)
#define MUX_PC03K_GCLK_IO4                         _UINT32_(10)
#define PINMUX_PC03K_GCLK_IO4                      ((PIN_PC03K_GCLK_IO4 << 16) | MUX_PC03K_GCLK_IO4)
#define PORT_PC03K_GCLK_IO4                        (_UINT32_(1) << 3)

#define PIN_PC04K_GCLK_IO5                         _UINT32_(68)
#define MUX_PC04K_GCLK_IO5                         _UINT32_(10)
#define PINMUX_PC04K_GCLK_IO5                      ((PIN_PC04K_GCLK_IO5 << 16) | MUX_PC04K_GCLK_IO5)
#define PORT_PC04K_GCLK_IO5                        (_UINT32_(1) << 4)

#define PIN_PB16K_GCLK_IO6                         _UINT32_(48)
#define MUX_PB16K_GCLK_IO6                         _UINT32_(10)
#define PINMUX_PB16K_GCLK_IO6                      ((PIN_PB16K_GCLK_IO6 << 16) | MUX_PB16K_GCLK_IO6)
#define PORT_PB16K_GCLK_IO6                        (_UINT32_(1) << 16)

#define PIN_PB10K_GCLK_IO6                         _UINT32_(42)
#define MUX_PB10K_GCLK_IO6                         _UINT32_(10)
#define PINMUX_PB10K_GCLK_IO6                      ((PIN_PB10K_GCLK_IO6 << 16) | MUX_PB10K_GCLK_IO6)
#define PORT_PB10K_GCLK_IO6                        (_UINT32_(1) << 10)

#define PIN_PB09K_GCLK_IO7                         _UINT32_(41)
#define MUX_PB09K_GCLK_IO7                         _UINT32_(10)
#define PINMUX_PB09K_GCLK_IO7                      ((PIN_PB09K_GCLK_IO7 << 16) | MUX_PB09K_GCLK_IO7)
#define PORT_PB09K_GCLK_IO7                        (_UINT32_(1) << 9)

/* =================== PORT definition for PTC peripheral =================== */
#define PIN_PD06P_PTC_DRV0                         _UINT32_(102)
#define MUX_PD06P_PTC_DRV0                         _UINT32_(15)
#define PINMUX_PD06P_PTC_DRV0                      ((PIN_PD06P_PTC_DRV0 << 16) | MUX_PD06P_PTC_DRV0)
#define PORT_PD06P_PTC_DRV0                        (_UINT32_(1) << 6)

#define PIN_PD07P_PTC_DRV1                         _UINT32_(103)
#define MUX_PD07P_PTC_DRV1                         _UINT32_(15)
#define PINMUX_PD07P_PTC_DRV1                      ((PIN_PD07P_PTC_DRV1 << 16) | MUX_PD07P_PTC_DRV1)
#define PORT_PD07P_PTC_DRV1                        (_UINT32_(1) << 7)

#define PIN_PD08P_PTC_DRV2                         _UINT32_(104)
#define MUX_PD08P_PTC_DRV2                         _UINT32_(15)
#define PINMUX_PD08P_PTC_DRV2                      ((PIN_PD08P_PTC_DRV2 << 16) | MUX_PD08P_PTC_DRV2)
#define PORT_PD08P_PTC_DRV2                        (_UINT32_(1) << 8)

#define PIN_PD09P_PTC_DRV3                         _UINT32_(105)
#define MUX_PD09P_PTC_DRV3                         _UINT32_(15)
#define PINMUX_PD09P_PTC_DRV3                      ((PIN_PD09P_PTC_DRV3 << 16) | MUX_PD09P_PTC_DRV3)
#define PORT_PD09P_PTC_DRV3                        (_UINT32_(1) << 9)

#define PIN_PA00P_PTC_DRV4                         _UINT32_(0) 
#define MUX_PA00P_PTC_DRV4                         _UINT32_(15)
#define PINMUX_PA00P_PTC_DRV4                      ((PIN_PA00P_PTC_DRV4 << 16) | MUX_PA00P_PTC_DRV4)
#define PORT_PA00P_PTC_DRV4                        (_UINT32_(1) << 0)

#define PIN_PA01P_PTC_DRV5                         _UINT32_(1) 
#define MUX_PA01P_PTC_DRV5                         _UINT32_(15)
#define PINMUX_PA01P_PTC_DRV5                      ((PIN_PA01P_PTC_DRV5 << 16) | MUX_PA01P_PTC_DRV5)
#define PORT_PA01P_PTC_DRV5                        (_UINT32_(1) << 1)

#define PIN_PA02P_PTC_DRV6                         _UINT32_(2) 
#define MUX_PA02P_PTC_DRV6                         _UINT32_(15)
#define PINMUX_PA02P_PTC_DRV6                      ((PIN_PA02P_PTC_DRV6 << 16) | MUX_PA02P_PTC_DRV6)
#define PORT_PA02P_PTC_DRV6                        (_UINT32_(1) << 2)

#define PIN_PA03P_PTC_DRV7                         _UINT32_(3) 
#define MUX_PA03P_PTC_DRV7                         _UINT32_(15)
#define PINMUX_PA03P_PTC_DRV7                      ((PIN_PA03P_PTC_DRV7 << 16) | MUX_PA03P_PTC_DRV7)
#define PORT_PA03P_PTC_DRV7                        (_UINT32_(1) << 3)

#define PIN_PA04P_PTC_DRV8                         _UINT32_(4) 
#define MUX_PA04P_PTC_DRV8                         _UINT32_(15)
#define PINMUX_PA04P_PTC_DRV8                      ((PIN_PA04P_PTC_DRV8 << 16) | MUX_PA04P_PTC_DRV8)
#define PORT_PA04P_PTC_DRV8                        (_UINT32_(1) << 4)

#define PIN_PA05P_PTC_DRV9                         _UINT32_(5) 
#define MUX_PA05P_PTC_DRV9                         _UINT32_(15)
#define PINMUX_PA05P_PTC_DRV9                      ((PIN_PA05P_PTC_DRV9 << 16) | MUX_PA05P_PTC_DRV9)
#define PORT_PA05P_PTC_DRV9                        (_UINT32_(1) << 5)

#define PIN_PA06P_PTC_DRV10                        _UINT32_(6) 
#define MUX_PA06P_PTC_DRV10                        _UINT32_(15)
#define PINMUX_PA06P_PTC_DRV10                     ((PIN_PA06P_PTC_DRV10 << 16) | MUX_PA06P_PTC_DRV10)
#define PORT_PA06P_PTC_DRV10                       (_UINT32_(1) << 6)

#define PIN_PA07P_PTC_DRV11                        _UINT32_(7) 
#define MUX_PA07P_PTC_DRV11                        _UINT32_(15)
#define PINMUX_PA07P_PTC_DRV11                     ((PIN_PA07P_PTC_DRV11 << 16) | MUX_PA07P_PTC_DRV11)
#define PORT_PA07P_PTC_DRV11                       (_UINT32_(1) << 7)

#define PIN_PA08P_PTC_DRV12                        _UINT32_(8) 
#define MUX_PA08P_PTC_DRV12                        _UINT32_(15)
#define PINMUX_PA08P_PTC_DRV12                     ((PIN_PA08P_PTC_DRV12 << 16) | MUX_PA08P_PTC_DRV12)
#define PORT_PA08P_PTC_DRV12                       (_UINT32_(1) << 8)

#define PIN_PA09P_PTC_DRV13                        _UINT32_(9) 
#define MUX_PA09P_PTC_DRV13                        _UINT32_(15)
#define PINMUX_PA09P_PTC_DRV13                     ((PIN_PA09P_PTC_DRV13 << 16) | MUX_PA09P_PTC_DRV13)
#define PORT_PA09P_PTC_DRV13                       (_UINT32_(1) << 9)

#define PIN_PB00P_PTC_DRV14                        _UINT32_(32)
#define MUX_PB00P_PTC_DRV14                        _UINT32_(15)
#define PINMUX_PB00P_PTC_DRV14                     ((PIN_PB00P_PTC_DRV14 << 16) | MUX_PB00P_PTC_DRV14)
#define PORT_PB00P_PTC_DRV14                       (_UINT32_(1) << 0)

#define PIN_PB03P_PTC_DRV15                        _UINT32_(35)
#define MUX_PB03P_PTC_DRV15                        _UINT32_(15)
#define PINMUX_PB03P_PTC_DRV15                     ((PIN_PB03P_PTC_DRV15 << 16) | MUX_PB03P_PTC_DRV15)
#define PORT_PB03P_PTC_DRV15                       (_UINT32_(1) << 3)

#define PIN_PB04P_PTC_DRV16                        _UINT32_(36)
#define MUX_PB04P_PTC_DRV16                        _UINT32_(15)
#define PINMUX_PB04P_PTC_DRV16                     ((PIN_PB04P_PTC_DRV16 << 16) | MUX_PB04P_PTC_DRV16)
#define PORT_PB04P_PTC_DRV16                       (_UINT32_(1) << 4)

#define PIN_PB05P_PTC_DRV17                        _UINT32_(37)
#define MUX_PB05P_PTC_DRV17                        _UINT32_(15)
#define PINMUX_PB05P_PTC_DRV17                     ((PIN_PB05P_PTC_DRV17 << 16) | MUX_PB05P_PTC_DRV17)
#define PORT_PB05P_PTC_DRV17                       (_UINT32_(1) << 5)

#define PIN_PB06P_PTC_DRV18                        _UINT32_(38)
#define MUX_PB06P_PTC_DRV18                        _UINT32_(15)
#define PINMUX_PB06P_PTC_DRV18                     ((PIN_PB06P_PTC_DRV18 << 16) | MUX_PB06P_PTC_DRV18)
#define PORT_PB06P_PTC_DRV18                       (_UINT32_(1) << 6)

#define PIN_PC00P_PTC_DRV19                        _UINT32_(64)
#define MUX_PC00P_PTC_DRV19                        _UINT32_(15)
#define PINMUX_PC00P_PTC_DRV19                     ((PIN_PC00P_PTC_DRV19 << 16) | MUX_PC00P_PTC_DRV19)
#define PORT_PC00P_PTC_DRV19                       (_UINT32_(1) << 0)

#define PIN_PC01P_PTC_DRV20                        _UINT32_(65)
#define MUX_PC01P_PTC_DRV20                        _UINT32_(15)
#define PINMUX_PC01P_PTC_DRV20                     ((PIN_PC01P_PTC_DRV20 << 16) | MUX_PC01P_PTC_DRV20)
#define PORT_PC01P_PTC_DRV20                       (_UINT32_(1) << 1)

#define PIN_PC02P_PTC_DRV21                        _UINT32_(66)
#define MUX_PC02P_PTC_DRV21                        _UINT32_(15)
#define PINMUX_PC02P_PTC_DRV21                     ((PIN_PC02P_PTC_DRV21 << 16) | MUX_PC02P_PTC_DRV21)
#define PORT_PC02P_PTC_DRV21                       (_UINT32_(1) << 2)

#define PIN_PA10P_PTC_DRV22                        _UINT32_(10)
#define MUX_PA10P_PTC_DRV22                        _UINT32_(15)
#define PINMUX_PA10P_PTC_DRV22                     ((PIN_PA10P_PTC_DRV22 << 16) | MUX_PA10P_PTC_DRV22)
#define PORT_PA10P_PTC_DRV22                       (_UINT32_(1) << 10)

#define PIN_PA11P_PTC_DRV23                        _UINT32_(11)
#define MUX_PA11P_PTC_DRV23                        _UINT32_(15)
#define PINMUX_PA11P_PTC_DRV23                     ((PIN_PA11P_PTC_DRV23 << 16) | MUX_PA11P_PTC_DRV23)
#define PORT_PA11P_PTC_DRV23                       (_UINT32_(1) << 11)

#define PIN_PA12P_PTC_DRV24                        _UINT32_(12)
#define MUX_PA12P_PTC_DRV24                        _UINT32_(15)
#define PINMUX_PA12P_PTC_DRV24                     ((PIN_PA12P_PTC_DRV24 << 16) | MUX_PA12P_PTC_DRV24)
#define PORT_PA12P_PTC_DRV24                       (_UINT32_(1) << 12)

#define PIN_PA13P_PTC_DRV25                        _UINT32_(13)
#define MUX_PA13P_PTC_DRV25                        _UINT32_(15)
#define PINMUX_PA13P_PTC_DRV25                     ((PIN_PA13P_PTC_DRV25 << 16) | MUX_PA13P_PTC_DRV25)
#define PORT_PA13P_PTC_DRV25                       (_UINT32_(1) << 13)

#define PIN_PB07P_PTC_DRV26                        _UINT32_(39)
#define MUX_PB07P_PTC_DRV26                        _UINT32_(15)
#define PINMUX_PB07P_PTC_DRV26                     ((PIN_PB07P_PTC_DRV26 << 16) | MUX_PB07P_PTC_DRV26)
#define PORT_PB07P_PTC_DRV26                       (_UINT32_(1) << 7)

#define PIN_PB08P_PTC_DRV27                        _UINT32_(40)
#define MUX_PB08P_PTC_DRV27                        _UINT32_(15)
#define PINMUX_PB08P_PTC_DRV27                     ((PIN_PB08P_PTC_DRV27 << 16) | MUX_PB08P_PTC_DRV27)
#define PORT_PB08P_PTC_DRV27                       (_UINT32_(1) << 8)

#define PIN_PB09P_PTC_DRV28                        _UINT32_(41)
#define MUX_PB09P_PTC_DRV28                        _UINT32_(15)
#define PINMUX_PB09P_PTC_DRV28                     ((PIN_PB09P_PTC_DRV28 << 16) | MUX_PB09P_PTC_DRV28)
#define PORT_PB09P_PTC_DRV28                       (_UINT32_(1) << 9)

#define PIN_PB10P_PTC_DRV29                        _UINT32_(42)
#define MUX_PB10P_PTC_DRV29                        _UINT32_(15)
#define PINMUX_PB10P_PTC_DRV29                     ((PIN_PB10P_PTC_DRV29 << 16) | MUX_PB10P_PTC_DRV29)
#define PORT_PB10P_PTC_DRV29                       (_UINT32_(1) << 10)

#define PIN_PC09P_PTC_DRV30                        _UINT32_(73)
#define MUX_PC09P_PTC_DRV30                        _UINT32_(15)
#define PINMUX_PC09P_PTC_DRV30                     ((PIN_PC09P_PTC_DRV30 << 16) | MUX_PC09P_PTC_DRV30)
#define PORT_PC09P_PTC_DRV30                       (_UINT32_(1) << 9)

#define PIN_PC10P_PTC_DRV31                        _UINT32_(74)
#define MUX_PC10P_PTC_DRV31                        _UINT32_(15)
#define PINMUX_PC10P_PTC_DRV31                     ((PIN_PC10P_PTC_DRV31 << 16) | MUX_PC10P_PTC_DRV31)
#define PORT_PC10P_PTC_DRV31                       (_UINT32_(1) << 10)

#define PIN_PA14P_PTC_DRV32                        _UINT32_(14)
#define MUX_PA14P_PTC_DRV32                        _UINT32_(15)
#define PINMUX_PA14P_PTC_DRV32                     ((PIN_PA14P_PTC_DRV32 << 16) | MUX_PA14P_PTC_DRV32)
#define PORT_PA14P_PTC_DRV32                       (_UINT32_(1) << 14)

#define PIN_PA15P_PTC_DRV33                        _UINT32_(15)
#define MUX_PA15P_PTC_DRV33                        _UINT32_(15)
#define PINMUX_PA15P_PTC_DRV33                     ((PIN_PA15P_PTC_DRV33 << 16) | MUX_PA15P_PTC_DRV33)
#define PORT_PA15P_PTC_DRV33                       (_UINT32_(1) << 15)

#define PIN_PA16P_PTC_DRV34                        _UINT32_(16)
#define MUX_PA16P_PTC_DRV34                        _UINT32_(15)
#define PINMUX_PA16P_PTC_DRV34                     ((PIN_PA16P_PTC_DRV34 << 16) | MUX_PA16P_PTC_DRV34)
#define PORT_PA16P_PTC_DRV34                       (_UINT32_(1) << 16)

#define PIN_PA17P_PTC_DRV35                        _UINT32_(17)
#define MUX_PA17P_PTC_DRV35                        _UINT32_(15)
#define PINMUX_PA17P_PTC_DRV35                     ((PIN_PA17P_PTC_DRV35 << 16) | MUX_PA17P_PTC_DRV35)
#define PORT_PA17P_PTC_DRV35                       (_UINT32_(1) << 17)

#define PIN_PC03P_PTC_ECI0                         _UINT32_(67)
#define MUX_PC03P_PTC_ECI0                         _UINT32_(15)
#define PINMUX_PC03P_PTC_ECI0                      ((PIN_PC03P_PTC_ECI0 << 16) | MUX_PC03P_PTC_ECI0)
#define PORT_PC03P_PTC_ECI0                        (_UINT32_(1) << 3)

#define PIN_PC04P_PTC_ECI1                         _UINT32_(68)
#define MUX_PC04P_PTC_ECI1                         _UINT32_(15)
#define PINMUX_PC04P_PTC_ECI1                      ((PIN_PC04P_PTC_ECI1 << 16) | MUX_PC04P_PTC_ECI1)
#define PORT_PC04P_PTC_ECI1                        (_UINT32_(1) << 4)

#define PIN_PD06P_PTC_PTCXY0                       _UINT32_(102)
#define MUX_PD06P_PTC_PTCXY0                       _UINT32_(15)
#define PINMUX_PD06P_PTC_PTCXY0                    ((PIN_PD06P_PTC_PTCXY0 << 16) | MUX_PD06P_PTC_PTCXY0)
#define PORT_PD06P_PTC_PTCXY0                      (_UINT32_(1) << 6)

#define PIN_PD07P_PTC_PTCXY1                       _UINT32_(103)
#define MUX_PD07P_PTC_PTCXY1                       _UINT32_(15)
#define PINMUX_PD07P_PTC_PTCXY1                    ((PIN_PD07P_PTC_PTCXY1 << 16) | MUX_PD07P_PTC_PTCXY1)
#define PORT_PD07P_PTC_PTCXY1                      (_UINT32_(1) << 7)

#define PIN_PD08P_PTC_PTCXY2                       _UINT32_(104)
#define MUX_PD08P_PTC_PTCXY2                       _UINT32_(15)
#define PINMUX_PD08P_PTC_PTCXY2                    ((PIN_PD08P_PTC_PTCXY2 << 16) | MUX_PD08P_PTC_PTCXY2)
#define PORT_PD08P_PTC_PTCXY2                      (_UINT32_(1) << 8)

#define PIN_PD09P_PTC_PTCXY3                       _UINT32_(105)
#define MUX_PD09P_PTC_PTCXY3                       _UINT32_(15)
#define PINMUX_PD09P_PTC_PTCXY3                    ((PIN_PD09P_PTC_PTCXY3 << 16) | MUX_PD09P_PTC_PTCXY3)
#define PORT_PD09P_PTC_PTCXY3                      (_UINT32_(1) << 9)

#define PIN_PA00P_PTC_PTCXY4                       _UINT32_(0) 
#define MUX_PA00P_PTC_PTCXY4                       _UINT32_(15)
#define PINMUX_PA00P_PTC_PTCXY4                    ((PIN_PA00P_PTC_PTCXY4 << 16) | MUX_PA00P_PTC_PTCXY4)
#define PORT_PA00P_PTC_PTCXY4                      (_UINT32_(1) << 0)

#define PIN_PA01P_PTC_PTCXY5                       _UINT32_(1) 
#define MUX_PA01P_PTC_PTCXY5                       _UINT32_(15)
#define PINMUX_PA01P_PTC_PTCXY5                    ((PIN_PA01P_PTC_PTCXY5 << 16) | MUX_PA01P_PTC_PTCXY5)
#define PORT_PA01P_PTC_PTCXY5                      (_UINT32_(1) << 1)

#define PIN_PA02P_PTC_PTCXY6                       _UINT32_(2) 
#define MUX_PA02P_PTC_PTCXY6                       _UINT32_(15)
#define PINMUX_PA02P_PTC_PTCXY6                    ((PIN_PA02P_PTC_PTCXY6 << 16) | MUX_PA02P_PTC_PTCXY6)
#define PORT_PA02P_PTC_PTCXY6                      (_UINT32_(1) << 2)

#define PIN_PA03P_PTC_PTCXY7                       _UINT32_(3) 
#define MUX_PA03P_PTC_PTCXY7                       _UINT32_(15)
#define PINMUX_PA03P_PTC_PTCXY7                    ((PIN_PA03P_PTC_PTCXY7 << 16) | MUX_PA03P_PTC_PTCXY7)
#define PORT_PA03P_PTC_PTCXY7                      (_UINT32_(1) << 3)

#define PIN_PA04P_PTC_PTCXY8                       _UINT32_(4) 
#define MUX_PA04P_PTC_PTCXY8                       _UINT32_(15)
#define PINMUX_PA04P_PTC_PTCXY8                    ((PIN_PA04P_PTC_PTCXY8 << 16) | MUX_PA04P_PTC_PTCXY8)
#define PORT_PA04P_PTC_PTCXY8                      (_UINT32_(1) << 4)

#define PIN_PA05P_PTC_PTCXY9                       _UINT32_(5) 
#define MUX_PA05P_PTC_PTCXY9                       _UINT32_(15)
#define PINMUX_PA05P_PTC_PTCXY9                    ((PIN_PA05P_PTC_PTCXY9 << 16) | MUX_PA05P_PTC_PTCXY9)
#define PORT_PA05P_PTC_PTCXY9                      (_UINT32_(1) << 5)

#define PIN_PA06P_PTC_PTCXY10                      _UINT32_(6) 
#define MUX_PA06P_PTC_PTCXY10                      _UINT32_(15)
#define PINMUX_PA06P_PTC_PTCXY10                   ((PIN_PA06P_PTC_PTCXY10 << 16) | MUX_PA06P_PTC_PTCXY10)
#define PORT_PA06P_PTC_PTCXY10                     (_UINT32_(1) << 6)

#define PIN_PA07P_PTC_PTCXY11                      _UINT32_(7) 
#define MUX_PA07P_PTC_PTCXY11                      _UINT32_(15)
#define PINMUX_PA07P_PTC_PTCXY11                   ((PIN_PA07P_PTC_PTCXY11 << 16) | MUX_PA07P_PTC_PTCXY11)
#define PORT_PA07P_PTC_PTCXY11                     (_UINT32_(1) << 7)

#define PIN_PA08P_PTC_PTCXY12                      _UINT32_(8) 
#define MUX_PA08P_PTC_PTCXY12                      _UINT32_(15)
#define PINMUX_PA08P_PTC_PTCXY12                   ((PIN_PA08P_PTC_PTCXY12 << 16) | MUX_PA08P_PTC_PTCXY12)
#define PORT_PA08P_PTC_PTCXY12                     (_UINT32_(1) << 8)

#define PIN_PA09P_PTC_PTCXY13                      _UINT32_(9) 
#define MUX_PA09P_PTC_PTCXY13                      _UINT32_(15)
#define PINMUX_PA09P_PTC_PTCXY13                   ((PIN_PA09P_PTC_PTCXY13 << 16) | MUX_PA09P_PTC_PTCXY13)
#define PORT_PA09P_PTC_PTCXY13                     (_UINT32_(1) << 9)

#define PIN_PB00P_PTC_PTCXY14                      _UINT32_(32)
#define MUX_PB00P_PTC_PTCXY14                      _UINT32_(15)
#define PINMUX_PB00P_PTC_PTCXY14                   ((PIN_PB00P_PTC_PTCXY14 << 16) | MUX_PB00P_PTC_PTCXY14)
#define PORT_PB00P_PTC_PTCXY14                     (_UINT32_(1) << 0)

#define PIN_PB03P_PTC_PTCXY15                      _UINT32_(35)
#define MUX_PB03P_PTC_PTCXY15                      _UINT32_(15)
#define PINMUX_PB03P_PTC_PTCXY15                   ((PIN_PB03P_PTC_PTCXY15 << 16) | MUX_PB03P_PTC_PTCXY15)
#define PORT_PB03P_PTC_PTCXY15                     (_UINT32_(1) << 3)

#define PIN_PB04P_PTC_PTCXY16                      _UINT32_(36)
#define MUX_PB04P_PTC_PTCXY16                      _UINT32_(15)
#define PINMUX_PB04P_PTC_PTCXY16                   ((PIN_PB04P_PTC_PTCXY16 << 16) | MUX_PB04P_PTC_PTCXY16)
#define PORT_PB04P_PTC_PTCXY16                     (_UINT32_(1) << 4)

#define PIN_PB05P_PTC_PTCXY17                      _UINT32_(37)
#define MUX_PB05P_PTC_PTCXY17                      _UINT32_(15)
#define PINMUX_PB05P_PTC_PTCXY17                   ((PIN_PB05P_PTC_PTCXY17 << 16) | MUX_PB05P_PTC_PTCXY17)
#define PORT_PB05P_PTC_PTCXY17                     (_UINT32_(1) << 5)

#define PIN_PB06P_PTC_PTCXY18                      _UINT32_(38)
#define MUX_PB06P_PTC_PTCXY18                      _UINT32_(15)
#define PINMUX_PB06P_PTC_PTCXY18                   ((PIN_PB06P_PTC_PTCXY18 << 16) | MUX_PB06P_PTC_PTCXY18)
#define PORT_PB06P_PTC_PTCXY18                     (_UINT32_(1) << 6)

#define PIN_PC00P_PTC_PTCXY19                      _UINT32_(64)
#define MUX_PC00P_PTC_PTCXY19                      _UINT32_(15)
#define PINMUX_PC00P_PTC_PTCXY19                   ((PIN_PC00P_PTC_PTCXY19 << 16) | MUX_PC00P_PTC_PTCXY19)
#define PORT_PC00P_PTC_PTCXY19                     (_UINT32_(1) << 0)

#define PIN_PC01P_PTC_PTCXY20                      _UINT32_(65)
#define MUX_PC01P_PTC_PTCXY20                      _UINT32_(15)
#define PINMUX_PC01P_PTC_PTCXY20                   ((PIN_PC01P_PTC_PTCXY20 << 16) | MUX_PC01P_PTC_PTCXY20)
#define PORT_PC01P_PTC_PTCXY20                     (_UINT32_(1) << 1)

#define PIN_PC02P_PTC_PTCXY21                      _UINT32_(66)
#define MUX_PC02P_PTC_PTCXY21                      _UINT32_(15)
#define PINMUX_PC02P_PTC_PTCXY21                   ((PIN_PC02P_PTC_PTCXY21 << 16) | MUX_PC02P_PTC_PTCXY21)
#define PORT_PC02P_PTC_PTCXY21                     (_UINT32_(1) << 2)

#define PIN_PA10P_PTC_PTCXY22                      _UINT32_(10)
#define MUX_PA10P_PTC_PTCXY22                      _UINT32_(15)
#define PINMUX_PA10P_PTC_PTCXY22                   ((PIN_PA10P_PTC_PTCXY22 << 16) | MUX_PA10P_PTC_PTCXY22)
#define PORT_PA10P_PTC_PTCXY22                     (_UINT32_(1) << 10)

#define PIN_PA11P_PTC_PTCXY23                      _UINT32_(11)
#define MUX_PA11P_PTC_PTCXY23                      _UINT32_(15)
#define PINMUX_PA11P_PTC_PTCXY23                   ((PIN_PA11P_PTC_PTCXY23 << 16) | MUX_PA11P_PTC_PTCXY23)
#define PORT_PA11P_PTC_PTCXY23                     (_UINT32_(1) << 11)

#define PIN_PA12P_PTC_PTCXY24                      _UINT32_(12)
#define MUX_PA12P_PTC_PTCXY24                      _UINT32_(15)
#define PINMUX_PA12P_PTC_PTCXY24                   ((PIN_PA12P_PTC_PTCXY24 << 16) | MUX_PA12P_PTC_PTCXY24)
#define PORT_PA12P_PTC_PTCXY24                     (_UINT32_(1) << 12)

#define PIN_PA13P_PTC_PTCXY25                      _UINT32_(13)
#define MUX_PA13P_PTC_PTCXY25                      _UINT32_(15)
#define PINMUX_PA13P_PTC_PTCXY25                   ((PIN_PA13P_PTC_PTCXY25 << 16) | MUX_PA13P_PTC_PTCXY25)
#define PORT_PA13P_PTC_PTCXY25                     (_UINT32_(1) << 13)

#define PIN_PB07P_PTC_PTCXY26                      _UINT32_(39)
#define MUX_PB07P_PTC_PTCXY26                      _UINT32_(15)
#define PINMUX_PB07P_PTC_PTCXY26                   ((PIN_PB07P_PTC_PTCXY26 << 16) | MUX_PB07P_PTC_PTCXY26)
#define PORT_PB07P_PTC_PTCXY26                     (_UINT32_(1) << 7)

#define PIN_PB08P_PTC_PTCXY27                      _UINT32_(40)
#define MUX_PB08P_PTC_PTCXY27                      _UINT32_(15)
#define PINMUX_PB08P_PTC_PTCXY27                   ((PIN_PB08P_PTC_PTCXY27 << 16) | MUX_PB08P_PTC_PTCXY27)
#define PORT_PB08P_PTC_PTCXY27                     (_UINT32_(1) << 8)

#define PIN_PB09P_PTC_PTCXY28                      _UINT32_(41)
#define MUX_PB09P_PTC_PTCXY28                      _UINT32_(15)
#define PINMUX_PB09P_PTC_PTCXY28                   ((PIN_PB09P_PTC_PTCXY28 << 16) | MUX_PB09P_PTC_PTCXY28)
#define PORT_PB09P_PTC_PTCXY28                     (_UINT32_(1) << 9)

#define PIN_PB10P_PTC_PTCXY29                      _UINT32_(42)
#define MUX_PB10P_PTC_PTCXY29                      _UINT32_(15)
#define PINMUX_PB10P_PTC_PTCXY29                   ((PIN_PB10P_PTC_PTCXY29 << 16) | MUX_PB10P_PTC_PTCXY29)
#define PORT_PB10P_PTC_PTCXY29                     (_UINT32_(1) << 10)

#define PIN_PC09P_PTC_PTCXY30                      _UINT32_(73)
#define MUX_PC09P_PTC_PTCXY30                      _UINT32_(15)
#define PINMUX_PC09P_PTC_PTCXY30                   ((PIN_PC09P_PTC_PTCXY30 << 16) | MUX_PC09P_PTC_PTCXY30)
#define PORT_PC09P_PTC_PTCXY30                     (_UINT32_(1) << 9)

#define PIN_PC10P_PTC_PTCXY31                      _UINT32_(74)
#define MUX_PC10P_PTC_PTCXY31                      _UINT32_(15)
#define PINMUX_PC10P_PTC_PTCXY31                   ((PIN_PC10P_PTC_PTCXY31 << 16) | MUX_PC10P_PTC_PTCXY31)
#define PORT_PC10P_PTC_PTCXY31                     (_UINT32_(1) << 10)

#define PIN_PA14P_PTC_PTCXY32                      _UINT32_(14)
#define MUX_PA14P_PTC_PTCXY32                      _UINT32_(15)
#define PINMUX_PA14P_PTC_PTCXY32                   ((PIN_PA14P_PTC_PTCXY32 << 16) | MUX_PA14P_PTC_PTCXY32)
#define PORT_PA14P_PTC_PTCXY32                     (_UINT32_(1) << 14)

#define PIN_PA15P_PTC_PTCXY33                      _UINT32_(15)
#define MUX_PA15P_PTC_PTCXY33                      _UINT32_(15)
#define PINMUX_PA15P_PTC_PTCXY33                   ((PIN_PA15P_PTC_PTCXY33 << 16) | MUX_PA15P_PTC_PTCXY33)
#define PORT_PA15P_PTC_PTCXY33                     (_UINT32_(1) << 15)

#define PIN_PA16P_PTC_PTCXY34                      _UINT32_(16)
#define MUX_PA16P_PTC_PTCXY34                      _UINT32_(15)
#define PINMUX_PA16P_PTC_PTCXY34                   ((PIN_PA16P_PTC_PTCXY34 << 16) | MUX_PA16P_PTC_PTCXY34)
#define PORT_PA16P_PTC_PTCXY34                     (_UINT32_(1) << 16)

#define PIN_PA17P_PTC_PTCXY35                      _UINT32_(17)
#define MUX_PA17P_PTC_PTCXY35                      _UINT32_(15)
#define PINMUX_PA17P_PTC_PTCXY35                   ((PIN_PA17P_PTC_PTCXY35 << 16) | MUX_PA17P_PTC_PTCXY35)
#define PORT_PA17P_PTC_PTCXY35                     (_UINT32_(1) << 17)

/* ================= PORT definition for SERCOM0 peripheral ================= */
#define PIN_PB15D_SERCOM0_PAD0                     _UINT32_(47)
#define MUX_PB15D_SERCOM0_PAD0                     _UINT32_(3) 
#define PINMUX_PB15D_SERCOM0_PAD0                  ((PIN_PB15D_SERCOM0_PAD0 << 16) | MUX_PB15D_SERCOM0_PAD0)
#define PORT_PB15D_SERCOM0_PAD0                    (_UINT32_(1) << 15)

#define PIN_PC00D_SERCOM0_PAD0                     _UINT32_(64)
#define MUX_PC00D_SERCOM0_PAD0                     _UINT32_(3) 
#define PINMUX_PC00D_SERCOM0_PAD0                  ((PIN_PC00D_SERCOM0_PAD0 << 16) | MUX_PC00D_SERCOM0_PAD0)
#define PORT_PC00D_SERCOM0_PAD0                    (_UINT32_(1) << 0)

#define PIN_PB16D_SERCOM0_PAD1                     _UINT32_(48)
#define MUX_PB16D_SERCOM0_PAD1                     _UINT32_(3) 
#define PINMUX_PB16D_SERCOM0_PAD1                  ((PIN_PB16D_SERCOM0_PAD1 << 16) | MUX_PB16D_SERCOM0_PAD1)
#define PORT_PB16D_SERCOM0_PAD1                    (_UINT32_(1) << 16)

#define PIN_PC01D_SERCOM0_PAD1                     _UINT32_(65)
#define MUX_PC01D_SERCOM0_PAD1                     _UINT32_(3) 
#define PINMUX_PC01D_SERCOM0_PAD1                  ((PIN_PC01D_SERCOM0_PAD1 << 16) | MUX_PC01D_SERCOM0_PAD1)
#define PORT_PC01D_SERCOM0_PAD1                    (_UINT32_(1) << 1)

#define PIN_PB17D_SERCOM0_PAD2                     _UINT32_(49)
#define MUX_PB17D_SERCOM0_PAD2                     _UINT32_(3) 
#define PINMUX_PB17D_SERCOM0_PAD2                  ((PIN_PB17D_SERCOM0_PAD2 << 16) | MUX_PB17D_SERCOM0_PAD2)
#define PORT_PB17D_SERCOM0_PAD2                    (_UINT32_(1) << 17)

#define PIN_PC02D_SERCOM0_PAD2                     _UINT32_(66)
#define MUX_PC02D_SERCOM0_PAD2                     _UINT32_(3) 
#define PINMUX_PC02D_SERCOM0_PAD2                  ((PIN_PC02D_SERCOM0_PAD2 << 16) | MUX_PC02D_SERCOM0_PAD2)
#define PORT_PC02D_SERCOM0_PAD2                    (_UINT32_(1) << 2)

#define PIN_PC11D_SERCOM0_PAD3                     _UINT32_(75)
#define MUX_PC11D_SERCOM0_PAD3                     _UINT32_(3) 
#define PINMUX_PC11D_SERCOM0_PAD3                  ((PIN_PC11D_SERCOM0_PAD3 << 16) | MUX_PC11D_SERCOM0_PAD3)
#define PORT_PC11D_SERCOM0_PAD3                    (_UINT32_(1) << 11)

#define PIN_PC03D_SERCOM0_PAD3                     _UINT32_(67)
#define MUX_PC03D_SERCOM0_PAD3                     _UINT32_(3) 
#define PINMUX_PC03D_SERCOM0_PAD3                  ((PIN_PC03D_SERCOM0_PAD3 << 16) | MUX_PC03D_SERCOM0_PAD3)
#define PORT_PC03D_SERCOM0_PAD3                    (_UINT32_(1) << 3)

/* ================= PORT definition for SERCOM1 peripheral ================= */
#define PIN_PC15D_SERCOM1_PAD0                     _UINT32_(79)
#define MUX_PC15D_SERCOM1_PAD0                     _UINT32_(3) 
#define PINMUX_PC15D_SERCOM1_PAD0                  ((PIN_PC15D_SERCOM1_PAD0 << 16) | MUX_PC15D_SERCOM1_PAD0)
#define PORT_PC15D_SERCOM1_PAD0                    (_UINT32_(1) << 15)

#define PIN_PD01D_SERCOM1_PAD0                     _UINT32_(97)
#define MUX_PD01D_SERCOM1_PAD0                     _UINT32_(3) 
#define PINMUX_PD01D_SERCOM1_PAD0                  ((PIN_PD01D_SERCOM1_PAD0 << 16) | MUX_PD01D_SERCOM1_PAD0)
#define PORT_PD01D_SERCOM1_PAD0                    (_UINT32_(1) << 1)

#define PIN_PC14D_SERCOM1_PAD1                     _UINT32_(78)
#define MUX_PC14D_SERCOM1_PAD1                     _UINT32_(3) 
#define PINMUX_PC14D_SERCOM1_PAD1                  ((PIN_PC14D_SERCOM1_PAD1 << 16) | MUX_PC14D_SERCOM1_PAD1)
#define PORT_PC14D_SERCOM1_PAD1                    (_UINT32_(1) << 14)

#define PIN_PD00D_SERCOM1_PAD1                     _UINT32_(96)
#define MUX_PD00D_SERCOM1_PAD1                     _UINT32_(3) 
#define PINMUX_PD00D_SERCOM1_PAD1                  ((PIN_PD00D_SERCOM1_PAD1 << 16) | MUX_PD00D_SERCOM1_PAD1)
#define PORT_PD00D_SERCOM1_PAD1                    (_UINT32_(1) << 0)

#define PIN_PC13D_SERCOM1_PAD2                     _UINT32_(77)
#define MUX_PC13D_SERCOM1_PAD2                     _UINT32_(3) 
#define PINMUX_PC13D_SERCOM1_PAD2                  ((PIN_PC13D_SERCOM1_PAD2 << 16) | MUX_PC13D_SERCOM1_PAD2)
#define PORT_PC13D_SERCOM1_PAD2                    (_UINT32_(1) << 13)

#define PIN_PC06D_SERCOM1_PAD2                     _UINT32_(70)
#define MUX_PC06D_SERCOM1_PAD2                     _UINT32_(3) 
#define PINMUX_PC06D_SERCOM1_PAD2                  ((PIN_PC06D_SERCOM1_PAD2 << 16) | MUX_PC06D_SERCOM1_PAD2)
#define PORT_PC06D_SERCOM1_PAD2                    (_UINT32_(1) << 6)

#define PIN_PD10D_SERCOM1_PAD2                     _UINT32_(106)
#define MUX_PD10D_SERCOM1_PAD2                     _UINT32_(3) 
#define PINMUX_PD10D_SERCOM1_PAD2                  ((PIN_PD10D_SERCOM1_PAD2 << 16) | MUX_PD10D_SERCOM1_PAD2)
#define PORT_PD10D_SERCOM1_PAD2                    (_UINT32_(1) << 10)

#define PIN_PC12D_SERCOM1_PAD3                     _UINT32_(76)
#define MUX_PC12D_SERCOM1_PAD3                     _UINT32_(3) 
#define PINMUX_PC12D_SERCOM1_PAD3                  ((PIN_PC12D_SERCOM1_PAD3 << 16) | MUX_PC12D_SERCOM1_PAD3)
#define PORT_PC12D_SERCOM1_PAD3                    (_UINT32_(1) << 12)

#define PIN_PC05D_SERCOM1_PAD3                     _UINT32_(69)
#define MUX_PC05D_SERCOM1_PAD3                     _UINT32_(3) 
#define PINMUX_PC05D_SERCOM1_PAD3                  ((PIN_PC05D_SERCOM1_PAD3 << 16) | MUX_PC05D_SERCOM1_PAD3)
#define PORT_PC05D_SERCOM1_PAD3                    (_UINT32_(1) << 5)

#define PIN_PD11D_SERCOM1_PAD3                     _UINT32_(107)
#define MUX_PD11D_SERCOM1_PAD3                     _UINT32_(3) 
#define PINMUX_PD11D_SERCOM1_PAD3                  ((PIN_PD11D_SERCOM1_PAD3 << 16) | MUX_PD11D_SERCOM1_PAD3)
#define PORT_PD11D_SERCOM1_PAD3                    (_UINT32_(1) << 11)

/* ================= PORT definition for SERCOM2 peripheral ================= */
#define PIN_PC04D_SERCOM2_PAD0                     _UINT32_(68)
#define MUX_PC04D_SERCOM2_PAD0                     _UINT32_(3) 
#define PINMUX_PC04D_SERCOM2_PAD0                  ((PIN_PC04D_SERCOM2_PAD0 << 16) | MUX_PC04D_SERCOM2_PAD0)
#define PORT_PC04D_SERCOM2_PAD0                    (_UINT32_(1) << 4)

#define PIN_PC19D_SERCOM2_PAD0                     _UINT32_(83)
#define MUX_PC19D_SERCOM2_PAD0                     _UINT32_(3) 
#define PINMUX_PC19D_SERCOM2_PAD0                  ((PIN_PC19D_SERCOM2_PAD0 << 16) | MUX_PC19D_SERCOM2_PAD0)
#define PORT_PC19D_SERCOM2_PAD0                    (_UINT32_(1) << 19)

#define PIN_PC18D_SERCOM2_PAD1                     _UINT32_(82)
#define MUX_PC18D_SERCOM2_PAD1                     _UINT32_(3) 
#define PINMUX_PC18D_SERCOM2_PAD1                  ((PIN_PC18D_SERCOM2_PAD1 << 16) | MUX_PC18D_SERCOM2_PAD1)
#define PORT_PC18D_SERCOM2_PAD1                    (_UINT32_(1) << 18)

#define PIN_PD06D_SERCOM2_PAD1                     _UINT32_(102)
#define MUX_PD06D_SERCOM2_PAD1                     _UINT32_(3) 
#define PINMUX_PD06D_SERCOM2_PAD1                  ((PIN_PD06D_SERCOM2_PAD1 << 16) | MUX_PD06D_SERCOM2_PAD1)
#define PORT_PD06D_SERCOM2_PAD1                    (_UINT32_(1) << 6)

#define PIN_PC17D_SERCOM2_PAD2                     _UINT32_(81)
#define MUX_PC17D_SERCOM2_PAD2                     _UINT32_(3) 
#define PINMUX_PC17D_SERCOM2_PAD2                  ((PIN_PC17D_SERCOM2_PAD2 << 16) | MUX_PC17D_SERCOM2_PAD2)
#define PORT_PC17D_SERCOM2_PAD2                    (_UINT32_(1) << 17)

#define PIN_PD07D_SERCOM2_PAD2                     _UINT32_(103)
#define MUX_PD07D_SERCOM2_PAD2                     _UINT32_(3) 
#define PINMUX_PD07D_SERCOM2_PAD2                  ((PIN_PD07D_SERCOM2_PAD2 << 16) | MUX_PD07D_SERCOM2_PAD2)
#define PORT_PD07D_SERCOM2_PAD2                    (_UINT32_(1) << 7)

#define PIN_PC16D_SERCOM2_PAD3                     _UINT32_(80)
#define MUX_PC16D_SERCOM2_PAD3                     _UINT32_(3) 
#define PINMUX_PC16D_SERCOM2_PAD3                  ((PIN_PC16D_SERCOM2_PAD3 << 16) | MUX_PC16D_SERCOM2_PAD3)
#define PORT_PC16D_SERCOM2_PAD3                    (_UINT32_(1) << 16)

#define PIN_PD08D_SERCOM2_PAD3                     _UINT32_(104)
#define MUX_PD08D_SERCOM2_PAD3                     _UINT32_(3) 
#define PINMUX_PD08D_SERCOM2_PAD3                  ((PIN_PD08D_SERCOM2_PAD3 << 16) | MUX_PD08D_SERCOM2_PAD3)
#define PORT_PD08D_SERCOM2_PAD3                    (_UINT32_(1) << 8)

/* ================= PORT definition for SERCOM3 peripheral ================= */
#define PIN_PD16D_SERCOM3_PAD0                     _UINT32_(112)
#define MUX_PD16D_SERCOM3_PAD0                     _UINT32_(3) 
#define PINMUX_PD16D_SERCOM3_PAD0                  ((PIN_PD16D_SERCOM3_PAD0 << 16) | MUX_PD16D_SERCOM3_PAD0)
#define PORT_PD16D_SERCOM3_PAD0                    (_UINT32_(1) << 16)

#define PIN_PD09D_SERCOM3_PAD0                     _UINT32_(105)
#define MUX_PD09D_SERCOM3_PAD0                     _UINT32_(3) 
#define PINMUX_PD09D_SERCOM3_PAD0                  ((PIN_PD09D_SERCOM3_PAD0 << 16) | MUX_PD09D_SERCOM3_PAD0)
#define PORT_PD09D_SERCOM3_PAD0                    (_UINT32_(1) << 9)

#define PIN_PA00D_SERCOM3_PAD1                     _UINT32_(0) 
#define MUX_PA00D_SERCOM3_PAD1                     _UINT32_(3) 
#define PINMUX_PA00D_SERCOM3_PAD1                  ((PIN_PA00D_SERCOM3_PAD1 << 16) | MUX_PA00D_SERCOM3_PAD1)
#define PORT_PA00D_SERCOM3_PAD1                    (_UINT32_(1) << 0)

#define PIN_PD15D_SERCOM3_PAD1                     _UINT32_(111)
#define MUX_PD15D_SERCOM3_PAD1                     _UINT32_(3) 
#define PINMUX_PD15D_SERCOM3_PAD1                  ((PIN_PD15D_SERCOM3_PAD1 << 16) | MUX_PD15D_SERCOM3_PAD1)
#define PORT_PD15D_SERCOM3_PAD1                    (_UINT32_(1) << 15)

#define PIN_PA01D_SERCOM3_PAD2                     _UINT32_(1) 
#define MUX_PA01D_SERCOM3_PAD2                     _UINT32_(3) 
#define PINMUX_PA01D_SERCOM3_PAD2                  ((PIN_PA01D_SERCOM3_PAD2 << 16) | MUX_PA01D_SERCOM3_PAD2)
#define PORT_PA01D_SERCOM3_PAD2                    (_UINT32_(1) << 1)

#define PIN_PD17D_SERCOM3_PAD2                     _UINT32_(113)
#define MUX_PD17D_SERCOM3_PAD2                     _UINT32_(3) 
#define PINMUX_PD17D_SERCOM3_PAD2                  ((PIN_PD17D_SERCOM3_PAD2 << 16) | MUX_PD17D_SERCOM3_PAD2)
#define PORT_PD17D_SERCOM3_PAD2                    (_UINT32_(1) << 17)

#define PIN_PA02D_SERCOM3_PAD3                     _UINT32_(2) 
#define MUX_PA02D_SERCOM3_PAD3                     _UINT32_(3) 
#define PINMUX_PA02D_SERCOM3_PAD3                  ((PIN_PA02D_SERCOM3_PAD3 << 16) | MUX_PA02D_SERCOM3_PAD3)
#define PORT_PA02D_SERCOM3_PAD3                    (_UINT32_(1) << 2)

#define PIN_PD14D_SERCOM3_PAD3                     _UINT32_(110)
#define MUX_PD14D_SERCOM3_PAD3                     _UINT32_(3) 
#define PINMUX_PD14D_SERCOM3_PAD3                  ((PIN_PD14D_SERCOM3_PAD3 << 16) | MUX_PD14D_SERCOM3_PAD3)
#define PORT_PD14D_SERCOM3_PAD3                    (_UINT32_(1) << 14)

/* ================= PORT definition for SERCOM4 peripheral ================= */
#define PIN_PA03D_SERCOM4_PAD0                     _UINT32_(3) 
#define MUX_PA03D_SERCOM4_PAD0                     _UINT32_(3) 
#define PINMUX_PA03D_SERCOM4_PAD0                  ((PIN_PA03D_SERCOM4_PAD0 << 16) | MUX_PA03D_SERCOM4_PAD0)
#define PORT_PA03D_SERCOM4_PAD0                    (_UINT32_(1) << 3)

#define PIN_PD19D_SERCOM4_PAD0                     _UINT32_(115)
#define MUX_PD19D_SERCOM4_PAD0                     _UINT32_(3) 
#define PINMUX_PD19D_SERCOM4_PAD0                  ((PIN_PD19D_SERCOM4_PAD0 << 16) | MUX_PD19D_SERCOM4_PAD0)
#define PORT_PD19D_SERCOM4_PAD0                    (_UINT32_(1) << 19)

#define PIN_PA04D_SERCOM4_PAD1                     _UINT32_(4) 
#define MUX_PA04D_SERCOM4_PAD1                     _UINT32_(3) 
#define PINMUX_PA04D_SERCOM4_PAD1                  ((PIN_PA04D_SERCOM4_PAD1 << 16) | MUX_PA04D_SERCOM4_PAD1)
#define PORT_PA04D_SERCOM4_PAD1                    (_UINT32_(1) << 4)

#define PIN_PD20D_SERCOM4_PAD1                     _UINT32_(116)
#define MUX_PD20D_SERCOM4_PAD1                     _UINT32_(3) 
#define PINMUX_PD20D_SERCOM4_PAD1                  ((PIN_PD20D_SERCOM4_PAD1 << 16) | MUX_PD20D_SERCOM4_PAD1)
#define PORT_PD20D_SERCOM4_PAD1                    (_UINT32_(1) << 20)

#define PIN_PA05D_SERCOM4_PAD2                     _UINT32_(5) 
#define MUX_PA05D_SERCOM4_PAD2                     _UINT32_(3) 
#define PINMUX_PA05D_SERCOM4_PAD2                  ((PIN_PA05D_SERCOM4_PAD2 << 16) | MUX_PA05D_SERCOM4_PAD2)
#define PORT_PA05D_SERCOM4_PAD2                    (_UINT32_(1) << 5)

#define PIN_PD18D_SERCOM4_PAD2                     _UINT32_(114)
#define MUX_PD18D_SERCOM4_PAD2                     _UINT32_(3) 
#define PINMUX_PD18D_SERCOM4_PAD2                  ((PIN_PD18D_SERCOM4_PAD2 << 16) | MUX_PD18D_SERCOM4_PAD2)
#define PORT_PD18D_SERCOM4_PAD2                    (_UINT32_(1) << 18)

#define PIN_PA14D_SERCOM4_PAD3                     _UINT32_(14)
#define MUX_PA14D_SERCOM4_PAD3                     _UINT32_(3) 
#define PINMUX_PA14D_SERCOM4_PAD3                  ((PIN_PA14D_SERCOM4_PAD3 << 16) | MUX_PA14D_SERCOM4_PAD3)
#define PORT_PA14D_SERCOM4_PAD3                    (_UINT32_(1) << 14)

#define PIN_PA06D_SERCOM4_PAD3                     _UINT32_(6) 
#define MUX_PA06D_SERCOM4_PAD3                     _UINT32_(3) 
#define PINMUX_PA06D_SERCOM4_PAD3                  ((PIN_PA06D_SERCOM4_PAD3 << 16) | MUX_PA06D_SERCOM4_PAD3)
#define PORT_PA06D_SERCOM4_PAD3                    (_UINT32_(1) << 6)

/* ================= PORT definition for SERCOM5 peripheral ================= */
#define PIN_PA16D_SERCOM5_PAD0                     _UINT32_(16)
#define MUX_PA16D_SERCOM5_PAD0                     _UINT32_(3) 
#define PINMUX_PA16D_SERCOM5_PAD0                  ((PIN_PA16D_SERCOM5_PAD0 << 16) | MUX_PA16D_SERCOM5_PAD0)
#define PORT_PA16D_SERCOM5_PAD0                    (_UINT32_(1) << 16)

#define PIN_PB03D_SERCOM5_PAD0                     _UINT32_(35)
#define MUX_PB03D_SERCOM5_PAD0                     _UINT32_(3) 
#define PINMUX_PB03D_SERCOM5_PAD0                  ((PIN_PB03D_SERCOM5_PAD0 << 16) | MUX_PB03D_SERCOM5_PAD0)
#define PORT_PB03D_SERCOM5_PAD0                    (_UINT32_(1) << 3)

#define PIN_PA17D_SERCOM5_PAD1                     _UINT32_(17)
#define MUX_PA17D_SERCOM5_PAD1                     _UINT32_(3) 
#define PINMUX_PA17D_SERCOM5_PAD1                  ((PIN_PA17D_SERCOM5_PAD1 << 16) | MUX_PA17D_SERCOM5_PAD1)
#define PORT_PA17D_SERCOM5_PAD1                    (_UINT32_(1) << 17)

#define PIN_PB04D_SERCOM5_PAD1                     _UINT32_(36)
#define MUX_PB04D_SERCOM5_PAD1                     _UINT32_(3) 
#define PINMUX_PB04D_SERCOM5_PAD1                  ((PIN_PB04D_SERCOM5_PAD1 << 16) | MUX_PB04D_SERCOM5_PAD1)
#define PORT_PB04D_SERCOM5_PAD1                    (_UINT32_(1) << 4)

#define PIN_PA18D_SERCOM5_PAD2                     _UINT32_(18)
#define MUX_PA18D_SERCOM5_PAD2                     _UINT32_(3) 
#define PINMUX_PA18D_SERCOM5_PAD2                  ((PIN_PA18D_SERCOM5_PAD2 << 16) | MUX_PA18D_SERCOM5_PAD2)
#define PORT_PA18D_SERCOM5_PAD2                    (_UINT32_(1) << 18)

#define PIN_PB05D_SERCOM5_PAD2                     _UINT32_(37)
#define MUX_PB05D_SERCOM5_PAD2                     _UINT32_(3) 
#define PINMUX_PB05D_SERCOM5_PAD2                  ((PIN_PB05D_SERCOM5_PAD2 << 16) | MUX_PB05D_SERCOM5_PAD2)
#define PORT_PB05D_SERCOM5_PAD2                    (_UINT32_(1) << 5)

#define PIN_PA15D_SERCOM5_PAD3                     _UINT32_(15)
#define MUX_PA15D_SERCOM5_PAD3                     _UINT32_(3) 
#define PINMUX_PA15D_SERCOM5_PAD3                  ((PIN_PA15D_SERCOM5_PAD3 << 16) | MUX_PA15D_SERCOM5_PAD3)
#define PORT_PA15D_SERCOM5_PAD3                    (_UINT32_(1) << 15)

#define PIN_PB06D_SERCOM5_PAD3                     _UINT32_(38)
#define MUX_PB06D_SERCOM5_PAD3                     _UINT32_(3) 
#define PINMUX_PB06D_SERCOM5_PAD3                  ((PIN_PB06D_SERCOM5_PAD3 << 16) | MUX_PB06D_SERCOM5_PAD3)
#define PORT_PB06D_SERCOM5_PAD3                    (_UINT32_(1) << 6)

/* ================== PORT definition for TCC0 peripheral =================== */
#define PIN_PA19F_TCC0_WO0                         _UINT32_(19)
#define MUX_PA19F_TCC0_WO0                         _UINT32_(5) 
#define PINMUX_PA19F_TCC0_WO0                      ((PIN_PA19F_TCC0_WO0 << 16) | MUX_PA19F_TCC0_WO0)
#define PORT_PA19F_TCC0_WO0                        (_UINT32_(1) << 19)

#define PIN_PB11F_TCC0_WO0                         _UINT32_(43)
#define MUX_PB11F_TCC0_WO0                         _UINT32_(5) 
#define PINMUX_PB11F_TCC0_WO0                      ((PIN_PB11F_TCC0_WO0 << 16) | MUX_PB11F_TCC0_WO0)
#define PORT_PB11F_TCC0_WO0                        (_UINT32_(1) << 11)

#define PIN_PC00F_TCC0_WO0                         _UINT32_(64)
#define MUX_PC00F_TCC0_WO0                         _UINT32_(5) 
#define PINMUX_PC00F_TCC0_WO0                      ((PIN_PC00F_TCC0_WO0 << 16) | MUX_PC00F_TCC0_WO0)
#define PORT_PC00F_TCC0_WO0                        (_UINT32_(1) << 0)

#define PIN_PA20F_TCC0_WO1                         _UINT32_(20)
#define MUX_PA20F_TCC0_WO1                         _UINT32_(5) 
#define PINMUX_PA20F_TCC0_WO1                      ((PIN_PA20F_TCC0_WO1 << 16) | MUX_PA20F_TCC0_WO1)
#define PORT_PA20F_TCC0_WO1                        (_UINT32_(1) << 20)

#define PIN_PB12F_TCC0_WO1                         _UINT32_(44)
#define MUX_PB12F_TCC0_WO1                         _UINT32_(5) 
#define PINMUX_PB12F_TCC0_WO1                      ((PIN_PB12F_TCC0_WO1 << 16) | MUX_PB12F_TCC0_WO1)
#define PORT_PB12F_TCC0_WO1                        (_UINT32_(1) << 12)

#define PIN_PC01F_TCC0_WO1                         _UINT32_(65)
#define MUX_PC01F_TCC0_WO1                         _UINT32_(5) 
#define PINMUX_PC01F_TCC0_WO1                      ((PIN_PC01F_TCC0_WO1 << 16) | MUX_PC01F_TCC0_WO1)
#define PORT_PC01F_TCC0_WO1                        (_UINT32_(1) << 1)

/* ================== PORT definition for TCC1 peripheral =================== */
#define PIN_PC02F_TCC1_WO0                         _UINT32_(66)
#define MUX_PC02F_TCC1_WO0                         _UINT32_(5) 
#define PINMUX_PC02F_TCC1_WO0                      ((PIN_PC02F_TCC1_WO0 << 16) | MUX_PC02F_TCC1_WO0)
#define PORT_PC02F_TCC1_WO0                        (_UINT32_(1) << 2)

#define PIN_PC09F_TCC1_WO0                         _UINT32_(73)
#define MUX_PC09F_TCC1_WO0                         _UINT32_(5) 
#define PINMUX_PC09F_TCC1_WO0                      ((PIN_PC09F_TCC1_WO0 << 16) | MUX_PC09F_TCC1_WO0)
#define PORT_PC09F_TCC1_WO0                        (_UINT32_(1) << 9)

#define PIN_PC03F_TCC1_WO1                         _UINT32_(67)
#define MUX_PC03F_TCC1_WO1                         _UINT32_(5) 
#define PINMUX_PC03F_TCC1_WO1                      ((PIN_PC03F_TCC1_WO1 << 16) | MUX_PC03F_TCC1_WO1)
#define PORT_PC03F_TCC1_WO1                        (_UINT32_(1) << 3)

#define PIN_PC10F_TCC1_WO1                         _UINT32_(74)
#define MUX_PC10F_TCC1_WO1                         _UINT32_(5) 
#define PINMUX_PC10F_TCC1_WO1                      ((PIN_PC10F_TCC1_WO1 << 16) | MUX_PC10F_TCC1_WO1)
#define PORT_PC10F_TCC1_WO1                        (_UINT32_(1) << 10)

/* ================== PORT definition for TCC2 peripheral =================== */
#define PIN_PB09F_TCC2_WO0                         _UINT32_(41)
#define MUX_PB09F_TCC2_WO0                         _UINT32_(5) 
#define PINMUX_PB09F_TCC2_WO0                      ((PIN_PB09F_TCC2_WO0 << 16) | MUX_PB09F_TCC2_WO0)
#define PORT_PB09F_TCC2_WO0                        (_UINT32_(1) << 9)

#define PIN_PC04F_TCC2_WO0                         _UINT32_(68)
#define MUX_PC04F_TCC2_WO0                         _UINT32_(5) 
#define PINMUX_PC04F_TCC2_WO0                      ((PIN_PC04F_TCC2_WO0 << 16) | MUX_PC04F_TCC2_WO0)
#define PORT_PC04F_TCC2_WO0                        (_UINT32_(1) << 4)

#define PIN_PB08F_TCC2_WO1                         _UINT32_(40)
#define MUX_PB08F_TCC2_WO1                         _UINT32_(5) 
#define PINMUX_PB08F_TCC2_WO1                      ((PIN_PB08F_TCC2_WO1 << 16) | MUX_PB08F_TCC2_WO1)
#define PORT_PB08F_TCC2_WO1                        (_UINT32_(1) << 8)

#define PIN_PC05F_TCC2_WO1                         _UINT32_(69)
#define MUX_PC05F_TCC2_WO1                         _UINT32_(5) 
#define PINMUX_PC05F_TCC2_WO1                      ((PIN_PC05F_TCC2_WO1 << 16) | MUX_PC05F_TCC2_WO1)
#define PORT_PC05F_TCC2_WO1                        (_UINT32_(1) << 5)

/* ================== PORT definition for TCC3 peripheral =================== */
#define PIN_PB13F_TCC3_WO0                         _UINT32_(45)
#define MUX_PB13F_TCC3_WO0                         _UINT32_(5) 
#define PINMUX_PB13F_TCC3_WO0                      ((PIN_PB13F_TCC3_WO0 << 16) | MUX_PB13F_TCC3_WO0)
#define PORT_PB13F_TCC3_WO0                        (_UINT32_(1) << 13)

#define PIN_PD00F_TCC3_WO0                         _UINT32_(96)
#define MUX_PD00F_TCC3_WO0                         _UINT32_(5) 
#define PINMUX_PD00F_TCC3_WO0                      ((PIN_PD00F_TCC3_WO0 << 16) | MUX_PD00F_TCC3_WO0)
#define PORT_PD00F_TCC3_WO0                        (_UINT32_(1) << 0)

#define PIN_PB14F_TCC3_WO1                         _UINT32_(46)
#define MUX_PB14F_TCC3_WO1                         _UINT32_(5) 
#define PINMUX_PB14F_TCC3_WO1                      ((PIN_PB14F_TCC3_WO1 << 16) | MUX_PB14F_TCC3_WO1)
#define PORT_PB14F_TCC3_WO1                        (_UINT32_(1) << 14)

#define PIN_PD01F_TCC3_WO1                         _UINT32_(97)
#define MUX_PD01F_TCC3_WO1                         _UINT32_(5) 
#define PINMUX_PD01F_TCC3_WO1                      ((PIN_PD01F_TCC3_WO1 << 16) | MUX_PD01F_TCC3_WO1)
#define PORT_PD01F_TCC3_WO1                        (_UINT32_(1) << 1)

/* ================== PORT definition for TCC4 peripheral =================== */
#define PIN_PA10F_TCC4_WO0                         _UINT32_(10)
#define MUX_PA10F_TCC4_WO0                         _UINT32_(5) 
#define PINMUX_PA10F_TCC4_WO0                      ((PIN_PA10F_TCC4_WO0 << 16) | MUX_PA10F_TCC4_WO0)
#define PORT_PA10F_TCC4_WO0                        (_UINT32_(1) << 10)

#define PIN_PD07F_TCC4_WO0                         _UINT32_(103)
#define MUX_PD07F_TCC4_WO0                         _UINT32_(5) 
#define PINMUX_PD07F_TCC4_WO0                      ((PIN_PD07F_TCC4_WO0 << 16) | MUX_PD07F_TCC4_WO0)
#define PORT_PD07F_TCC4_WO0                        (_UINT32_(1) << 7)

#define PIN_PA11F_TCC4_WO1                         _UINT32_(11)
#define MUX_PA11F_TCC4_WO1                         _UINT32_(5) 
#define PINMUX_PA11F_TCC4_WO1                      ((PIN_PA11F_TCC4_WO1 << 16) | MUX_PA11F_TCC4_WO1)
#define PORT_PA11F_TCC4_WO1                        (_UINT32_(1) << 11)

#define PIN_PD08F_TCC4_WO1                         _UINT32_(104)
#define MUX_PD08F_TCC4_WO1                         _UINT32_(5) 
#define PINMUX_PD08F_TCC4_WO1                      ((PIN_PD08F_TCC4_WO1 << 16) | MUX_PD08F_TCC4_WO1)
#define PORT_PD08F_TCC4_WO1                        (_UINT32_(1) << 8)

/* ================== PORT definition for TCC5 peripheral =================== */
#define PIN_PD10F_TCC5_WO0                         _UINT32_(106)
#define MUX_PD10F_TCC5_WO0                         _UINT32_(5) 
#define PINMUX_PD10F_TCC5_WO0                      ((PIN_PD10F_TCC5_WO0 << 16) | MUX_PD10F_TCC5_WO0)
#define PORT_PD10F_TCC5_WO0                        (_UINT32_(1) << 10)

#define PIN_PD09F_TCC5_WO0                         _UINT32_(105)
#define MUX_PD09F_TCC5_WO0                         _UINT32_(5) 
#define PINMUX_PD09F_TCC5_WO0                      ((PIN_PD09F_TCC5_WO0 << 16) | MUX_PD09F_TCC5_WO0)
#define PORT_PD09F_TCC5_WO0                        (_UINT32_(1) << 9)

#define PIN_PA00F_TCC5_WO1                         _UINT32_(0) 
#define MUX_PA00F_TCC5_WO1                         _UINT32_(5) 
#define PINMUX_PA00F_TCC5_WO1                      ((PIN_PA00F_TCC5_WO1 << 16) | MUX_PA00F_TCC5_WO1)
#define PORT_PA00F_TCC5_WO1                        (_UINT32_(1) << 0)

#define PIN_PD11F_TCC5_WO1                         _UINT32_(107)
#define MUX_PD11F_TCC5_WO1                         _UINT32_(5) 
#define PINMUX_PD11F_TCC5_WO1                      ((PIN_PD11F_TCC5_WO1 << 16) | MUX_PD11F_TCC5_WO1)
#define PORT_PD11F_TCC5_WO1                        (_UINT32_(1) << 11)

/* ================== PORT definition for TCC6 peripheral =================== */
#define PIN_PA01F_TCC6_WO0                         _UINT32_(1) 
#define MUX_PA01F_TCC6_WO0                         _UINT32_(5) 
#define PINMUX_PA01F_TCC6_WO0                      ((PIN_PA01F_TCC6_WO0 << 16) | MUX_PA01F_TCC6_WO0)
#define PORT_PA01F_TCC6_WO0                        (_UINT32_(1) << 1)

#define PIN_PD12F_TCC6_WO0                         _UINT32_(108)
#define MUX_PD12F_TCC6_WO0                         _UINT32_(5) 
#define PINMUX_PD12F_TCC6_WO0                      ((PIN_PD12F_TCC6_WO0 << 16) | MUX_PD12F_TCC6_WO0)
#define PORT_PD12F_TCC6_WO0                        (_UINT32_(1) << 12)

#define PIN_PA02F_TCC6_WO1                         _UINT32_(2) 
#define MUX_PA02F_TCC6_WO1                         _UINT32_(5) 
#define PINMUX_PA02F_TCC6_WO1                      ((PIN_PA02F_TCC6_WO1 << 16) | MUX_PA02F_TCC6_WO1)
#define PORT_PA02F_TCC6_WO1                        (_UINT32_(1) << 2)

#define PIN_PD13F_TCC6_WO1                         _UINT32_(109)
#define MUX_PD13F_TCC6_WO1                         _UINT32_(5) 
#define PINMUX_PD13F_TCC6_WO1                      ((PIN_PD13F_TCC6_WO1 << 16) | MUX_PD13F_TCC6_WO1)
#define PORT_PD13F_TCC6_WO1                        (_UINT32_(1) << 13)

/* =================== PORT definition for USB peripheral =================== */
#define PIN_PD01H_USB_SOF                          _UINT32_(97)
#define MUX_PD01H_USB_SOF                          _UINT32_(7) 
#define PINMUX_PD01H_USB_SOF                       ((PIN_PD01H_USB_SOF << 16) | MUX_PD01H_USB_SOF)
#define PORT_PD01H_USB_SOF                         (_UINT32_(1) << 1)

#define PIN_PD02H_USB_USBDM                        _UINT32_(98)
#define MUX_PD02H_USB_USBDM                        _UINT32_(7) 
#define PINMUX_PD02H_USB_USBDM                     ((PIN_PD02H_USB_USBDM << 16) | MUX_PD02H_USB_USBDM)
#define PORT_PD02H_USB_USBDM                       (_UINT32_(1) << 2)

#define PIN_PD03H_USB_USBDP                        _UINT32_(99)
#define MUX_PD03H_USB_USBDP                        _UINT32_(7) 
#define PINMUX_PD03H_USB_USBDP                     ((PIN_PD03H_USB_USBDP << 16) | MUX_PD03H_USB_USBDP)
#define PORT_PD03H_USB_USBDP                       (_UINT32_(1) << 3)



#endif /* _PIC32CM5112GC00100_GPIO_H_ */

