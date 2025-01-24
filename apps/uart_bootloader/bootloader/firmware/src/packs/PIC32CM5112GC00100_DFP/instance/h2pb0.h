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
#ifndef _PIC32CMGC00_H2PB0_INSTANCE_
#define _PIC32CMGC00_H2PB0_INSTANCE_


/* ========== Instance Parameter definitions for H2PB0 peripheral ========== */
#define H2PB0_BRIDGE_ID                          (0)        /* H2PB Bridge ID */
#define H2PB0_BASE_MSB                           (13)       /* derived parameter */
#define H2PB0_CLK_DIV_EN                         (0)        /* 1="n:1 clock"0="1:1 clock" */
#define H2PB0_MST_MAX                            (1)        /* derived parameter */
#define H2PB0_MST_N                              (2)        /* -- */
#define H2PB0_NONSEC_INIT_VAL                    (0x00000001) /* -- */
#define H2PB0_OWN_SFR_SLOT                       (25)       /* -- */
#define H2PB0_PADDR_IDXB                         (5)        /* derived parameter */
#define H2PB0_PADDR_LSB                          (13)       /* -- */
#define H2PB0_PADDR_MSB                          (17)       /* derived local parameter */
#define H2PB0_PADDR_SIZE                         (18)       /* local parameter */
#define H2PB0_PAGE_SIZE                          (8192)     /* derived parameter */
#define H2PB0_SLV_MAX                            (31)       /* derived parameter */
#define H2PB0_SLV_N                              (32)       /* -- */
#define H2PB0_USE_DPATH_PIPER                    (0)        /* 1="all pipelined"0="address pipelined" */
#define H2PB0_USE_EARLY_PREAD                    (0)        /* -- */
#define H2PB0_USE_HSEL                           (1)        /* -- */
#define H2PB0_USE_PSTRB_FOR_READS                (1)        /* -- */
#define H2PB0_WPCTRL_IMPLEMENTED                 (0)        /* -- */
#define H2PB0_WPCTRL_KEY                         (0x504230) /* -- */
#define H2PB0_INSTANCE_ID                        (19)       /* Instance index for H2PB0 */
#define H2PB0_MCLK_ID_AHB                        (25)       /* Index for H2PB0 AHB clock */
#define H2PB0_MCLK_ID_APB                        (26)       /* Index for H2PB0 APB clock */
#define H2PB0_PAC_ID                             (19)       /* Index for H2PB0 registers write protection */
#define H2PB0_PERIPH_ID                          (25)       /* H2PB Peripheral ID */

#endif /* _PIC32CMGC00_H2PB0_INSTANCE_ */
