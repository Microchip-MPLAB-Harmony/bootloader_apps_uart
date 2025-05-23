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
#ifndef _PIC32CMGC00_H2PB2_INSTANCE_
#define _PIC32CMGC00_H2PB2_INSTANCE_


/* ========== Instance Parameter definitions for H2PB2 peripheral ========== */
#define H2PB2_BRIDGE_ID                          (2)        /* H2PB Bridge ID */
#define H2PB2_BASE_MSB                           (15)       /* derived parameter */
#define H2PB2_CLK_DIV_EN                         (1)        /* 1="n:1 clock"0="1:1 clock" */
#define H2PB2_MST_MAX                            (0)        /* derived parameter */
#define H2PB2_MST_N                              (1)        /* -- */
#define H2PB2_NONSEC_INIT_VAL                    (0x00)     /* -- */
#define H2PB2_OWN_SFR_SLOT                       (7)        /* -- */
#define H2PB2_PADDR_IDXB                         (3)        /* derived parameter */
#define H2PB2_PADDR_LSB                          (13)       /* -- */
#define H2PB2_PADDR_MSB                          (15)       /* derived local parameter */
#define H2PB2_PADDR_SIZE                         (16)       /* local parameter */
#define H2PB2_PAGE_SIZE                          (8192)     /* derived parameter */
#define H2PB2_SLV_MAX                            (7)        /* derived parameter */
#define H2PB2_SLV_N                              (8)        /* -- */
#define H2PB2_USE_DPATH_PIPER                    (1)        /* 1="all pipelined"0="address pipelined" */
#define H2PB2_USE_EARLY_PREAD                    (0)        /* -- */
#define H2PB2_USE_HSEL                           (1)        /* -- */
#define H2PB2_USE_PSTRB_FOR_READS                (1)        /* -- */
#define H2PB2_WPCTRL_IMPLEMENTED                 (0)        /* -- */
#define H2PB2_WPCTRL_KEY                         (0x504232) /* -- */
#define H2PB2_INSTANCE_ID                        (47)       /* Instance index for H2PB2 */
#define H2PB2_MCLK_ID_AHB                        (59)       /* Index for H2PB2 AHB clock */
#define H2PB2_MCLK_ID_APB                        (60)       /* Index for H2PB2 APB clock */
#define H2PB2_PAC_ID                             (47)       /* Index for H2PB2 registers write protection */
#define H2PB2_PERIPH_ID                          (7)        /* H2PB Peripheral ID */

#endif /* _PIC32CMGC00_H2PB2_INSTANCE_ */
