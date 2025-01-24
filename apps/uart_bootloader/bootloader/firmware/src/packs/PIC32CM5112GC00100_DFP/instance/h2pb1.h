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
#ifndef _PIC32CMGC00_H2PB1_INSTANCE_
#define _PIC32CMGC00_H2PB1_INSTANCE_


/* ========== Instance Parameter definitions for H2PB1 peripheral ========== */
#define H2PB1_BRIDGE_ID                          (1)        /* H2PB Bridge ID */
#define H2PB1_BASE_MSB                           (13)       /* derived parameter */
#define H2PB1_CLK_DIV_EN                         (0)        /* 1="n:1 clock"0="1:1 clock" */
#define H2PB1_MST_MAX                            (1)        /* derived parameter */
#define H2PB1_MST_N                              (2)        /* -- */
#define H2PB1_NONSEC_INIT_VAL                    (0x00000000) /* -- */
#define H2PB1_OWN_SFR_SLOT                       (28)       /* -- */
#define H2PB1_PADDR_IDXB                         (5)        /* derived parameter */
#define H2PB1_PADDR_LSB                          (13)       /* -- */
#define H2PB1_PADDR_MSB                          (17)       /* derived local parameter */
#define H2PB1_PADDR_SIZE                         (18)       /* local parameter */
#define H2PB1_PAGE_SIZE                          (8192)     /* derived parameter */
#define H2PB1_SLV_MAX                            (31)       /* derived parameter */
#define H2PB1_SLV_N                              (32)       /* -- */
#define H2PB1_USE_DPATH_PIPER                    (0)        /* 1="all pipelined"0="address pipelined" */
#define H2PB1_USE_EARLY_PREAD                    (0)        /* -- */
#define H2PB1_USE_HSEL                           (1)        /* -- */
#define H2PB1_USE_PSTRB_FOR_READS                (1)        /* -- */
#define H2PB1_WPCTRL_IMPLEMENTED                 (0)        /* -- */
#define H2PB1_WPCTRL_KEY                         (0x504231) /* -- */
#define H2PB1_INSTANCE_ID                        (46)       /* Instance index for H2PB1 */
#define H2PB1_MCLK_ID_AHB                        (57)       /* Index for H2PB1 AHB clock */
#define H2PB1_MCLK_ID_APB                        (58)       /* Index for H2PB1 APB clock */
#define H2PB1_PAC_ID                             (46)       /* Index for H2PB1 registers write protection */
#define H2PB1_PERIPH_ID                          (28)       /* H2PB Peripheral ID */

#endif /* _PIC32CMGC00_H2PB1_INSTANCE_ */
