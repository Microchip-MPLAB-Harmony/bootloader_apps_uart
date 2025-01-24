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
#ifndef _PIC32CMGC00_PTC_INSTANCE_
#define _PIC32CMGC00_PTC_INSTANCE_


/* ========== Instance Parameter definitions for PTC peripheral ========== */
#define PTC_BRIDGE_ID                            (1)        /* H2PB Bridge ID */
#define PTC_DMAC_ID_EOC                          (38)       
#define PTC_DMAC_ID_SEQ                          (39)       
#define PTC_DMAC_ID_WCOMP                        (40)       
#define PTC_GCLK_ID                              (35)       
#define PTC_INSTANCE_ID                          (41)       /* Instance index for PTC */
#define PTC_MCLK_ID_APB                          (51)       /* Index for PTC APB clock */
#define PTC_PAC_ID                               (41)       /* Index for PTC registers write protection */
#define PTC_PERIPH_ID                            (22)       /* H2PB Peripheral ID */
#define PTC_ATEST_IMPLEMENTED                    (1)        /* Defines if the ATEST register is implemented (1 = implemented) */
#define PTC_ATEST_SIZE                           (8)        /* Defines the number of effective bits in ATEST register */
#define PTC_CAL_IMPLEMENTED                      (1)        /* Defines if the CALIB register is implemented (1 = implemented) */
#define PTC_CAL_PORVAL                           (0x00000000) /* Defines the CALIB register reset value after POR0x00000000 to 0xFFFFFFFF */
#define PTC_CAL_SIZE                             (16)       /* Defines Bitfield size for CALIB register */
#define PTC_LINES_NUM                            (36)       /* Number of PTC lines desired (0 to 64) */
#define PTC_PADDR_MSB                            (12)       /* APB Address Bus Size MSB */
#define PTC_PADDR_SIZE                           (13)       /* Number of bits of the paddr input busPossible Values = PTC_PADDR_MSB -1 */
#define PTC_PDATA_MSB                            (31)       /* APB Data Bus Size MSB */
#define PTC_PRIV_IMPLEMENTED                     (1)        /* Implement the PRIV register for privilege/non-privilege bus accesses.0 = Register not present1 = Register present */
#define PTC_WPCTRL_IMPLEMENTED                   (0)        /* Implement the WPCTRL register for write protection.0 = Use apb_ptc_wrprot to control write protection enable/disable1 = Use WPCTRL register to control write protection enable/disable. */
#define PTC_WPCTRL_KEY                           (0x505443) /* WPCTRL 24-bit key value. See register description for usage.Set to a unique value for each macro. */

#endif /* _PIC32CMGC00_PTC_INSTANCE_ */
