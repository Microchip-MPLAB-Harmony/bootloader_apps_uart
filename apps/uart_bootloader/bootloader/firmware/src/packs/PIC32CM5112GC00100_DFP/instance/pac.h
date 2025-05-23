/*
 * Instance header file for PIC32CM5112GC00100
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

/* file generated from device description file (ATDF) version 2024-11-05T16:47:43Z */
#ifndef _PIC32CMGC00_PAC_INSTANCE_
#define _PIC32CMGC00_PAC_INSTANCE_


/* ========== Instance Parameter definitions for PAC peripheral ========== */
#define PAC_BRIDGE_ID                            (0)        /* H2PB Bridge ID */
#define PAC_INSTANCE_ID                          (14)       /* Instance index for PAC */
#define PAC_MCLK_ID_APB                          (14)       /* Index for PAC APB clock */
#define PAC_CTRLAPRIV_IMPLEMENTED                (1)        /* -- */
#define PAC_ERRORS_INBAND                        (1)        /* -- */
#define PAC_ID                                   (14)       /* Index for PAC registers write protection */
#define PAC_INTFLAGSET_IMPLEMENTED               (0)        /* -- */
#define PAC_PERIPH_ID                            (17)       /* H2PB Peripheral ID */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define PAC_LOCK_RESET_VALUE                     { 0x00000000, 0x00000000, 0x00000000, 0x00000000 } /* -- */
#define PAC_PER_WRPROT_MASK                      { 0xFFFFFFFF, 0x0003FFFF, 0x00000000, 0x00000000 } /* Peripheral implemented mask. If PAC_PER_WRPROT_MASK[x]=1 then the PAC implements an SFR bit in INTFLAG, STATUS, and LOCK with the location of <REG>(x/32)[x mod 32] */
#define PAC_STATUS_RESET_VALUE                   { 0x00000000, 0x00000000, 0x00000000, 0x00000000 } /* WRP STATUS Reset Value for Peripherals. On reset STATUS(x/32)[x mod 32]=PAC_STATUS_RESET_VALUE[x]The reset value for each peripheral should always be 0. The parameter exists if there is an unforeseen circumstance requiring it to be 1. Test blocks are not one of them as they are protected by dsu_test_mode. */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */



#endif /* _PIC32CMGC00_PAC_INSTANCE_ */
