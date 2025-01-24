/*
 * Instance header file for PIC32CM5112GC00100
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

/* file generated from device description file (ATDF) version 2024-07-26T17:56:39Z */
#ifndef _PIC32CMGC00_MCLK_INSTANCE_
#define _PIC32CMGC00_MCLK_INSTANCE_


/* ========== Instance Parameter definitions for MCLK peripheral ========== */
#define MCLK_BRIDGE_ID                           (0)        /* H2PB Bridge ID */
#define MCLK_INSTANCE_ID                         (9)        /* Instance index for MCLK */
#define MCLK_JTAG_IMPLEMENTED                    (1)        /* -- */
#define MCLK_CKDIV_REGS_BITS                     (8)        /* -- */
#define MCLK_CKDIV_WRLOCK                        (0x00000000) /* -- */
#define MCLK_CLKMSK_NUM                          (65)       /* -- */
#define MCLK_CPU_CLK_DIVIDER                     (0)        /* -- */
#define MCLK_CPU_CLK_IDLE                        (0)        /* -- */
#define MCLK_CPU_CLK_OFFDLY                      (2)        /* -- */
#define MCLK_CPU_CLK_ONDLY                       (0)        /* -- */
#define MCLK_DIV_CLK_NUM                         (3)        /* one for all other, one for H2PB2 domain, one for MBISTINTF */
#define MCLK_ID_APB                              (9)        /* Index for MCLK APB clock */
#define MCLK_SYNC_EDGES                          (1)        /* -- */
#define MCLK_SYS_CLK_DIVIDER                     (0)        /* -- */
#define MCLK_SYS_CLK_OFFDLY                      (2)        /* -- */
#define MCLK_PAC_ID                              (9)        /* Index for MCLK registers write protection */
#define MCLK_PERIPH_ID                           (5)        /* H2PB Peripheral ID */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define MCLK_CKDIV_RESET_VALUE                   { 0x1, 0x2, 0x4, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1 } /* values must be binary divisor numberunused divisors must be 8'h1 */
#define MCLK_CKPER_DIVIDER                       { 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } /* -- */
#define MCLK_CKPER_IMPLEMENTED                   { 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000 } /* -- */
#define MCLK_CKPER_MASTER                        { 0x11800004, 0x40400000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000 } /* -- */
#define MCLK_CKPER_REQEXISTS                     { 0xD9FFFFFF, 0xE1FFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000 } /* -- */
#define MCLK_CKPER_RSTVAL                        { 0xFFEEFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000 } /* -- */
#define MCLK_CKPER_WILLRISE                      { 0x00080000, 0x10000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000 } /* -- */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */



#endif /* _PIC32CMGC00_MCLK_INSTANCE_ */
