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
#ifndef _PIC32CMGC00_EVSYS_INSTANCE_
#define _PIC32CMGC00_EVSYS_INSTANCE_


/* ========== Instance Parameter definitions for EVSYS peripheral ========== */
#define EVSYS_ASYNCHRONOUS_CHANNELS              (0xFFFFF000) /* -- */
#define EVSYS_BRIDGE_ID                          (1)        /* H2PB Bridge ID */
#define EVSYS_CHANNELS                           (12)       /* -- */
#define EVSYS_CHANNELS_BITS                      (4)        /* =LEN( BIN(EVSYS_CHANNELS-1)) - 2)derived parameter */
#define EVSYS_GCLK_ID_CH0                        (8)        
#define EVSYS_GCLK_ID_CH1                        (9)        
#define EVSYS_GCLK_ID_CH10                       (18)       
#define EVSYS_GCLK_ID_CH11                       (19)       
#define EVSYS_GCLK_ID_CH2                        (10)       
#define EVSYS_GCLK_ID_CH3                        (11)       
#define EVSYS_GCLK_ID_CH4                        (12)       
#define EVSYS_GCLK_ID_CH5                        (13)       
#define EVSYS_GCLK_ID_CH6                        (14)       
#define EVSYS_GCLK_ID_CH7                        (15)       
#define EVSYS_GCLK_ID_CH8                        (16)       
#define EVSYS_GCLK_ID_CH9                        (17)       
#define EVSYS_GENERATORS                         (90)       /* Should be 90 */
#define EVSYS_GENERATORS_BITS                    (7)        /* =LEN( BIN(EVSYS_GENERATORS-1)) - 2)derived parameter */
#define EVSYS_INSTANCE_ID                        (25)       /* Instance index for EVSYS */
#define EVSYS_MCLK_ID_APB                        (35)       /* Index for EVSYS APB clock */
#define EVSYS_PAC_ID                             (25)       /* Index for EVSYS registers write protection */
#define EVSYS_PERIPH_ID                          (3)        /* H2PB Peripheral ID */
#define EVSYS_SECURE_IMPLEMENTED                 (0)        /* -- */
#define EVSYS_SPLIT_IRQ_NUM                      (12)       /* -- */
#define EVSYS_SYNCH_NUM                          (12)       /* -- */
#define EVSYS_SYNCH_NUM_BITS                     (4)        /* =LEN( BIN(EVSYS_SYNCH_NUM-1)) - 2)derived parameter */
#define EVSYS_USERS                              (62)       /* Should be 62 */
#define EVSYS_USERS_BITS                         (6)        /* =LEN( BIN(EVSYS_USERS-1)) - 2)derived parameter */
#define EVSYS_USERS_GROUPS                       (2)        /* =(EVSYS_USERS+31) / 32derived parameter */

#endif /* _PIC32CMGC00_EVSYS_INSTANCE_ */
