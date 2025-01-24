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
#ifndef _PIC32CMGC00_CAN0_INSTANCE_
#define _PIC32CMGC00_CAN0_INSTANCE_


/* ========== Instance Parameter definitions for CAN0 peripheral ========== */
#define CAN0_BRIDGE_ID                           (0)        /* H2PB Bridge ID */
#define CAN0_ECC_ERR_IMPLEMENTED                 (0)        /* ECC error implemented? */
#define CAN0_GCLK_ID                             (6)        
#define CAN0_INSTANCE_ID                         (17)       /* Instance index for CAN0 */
#define CAN0_INTERNAL_TB_SOF                     (3)        /* 0: No SOF and no internal Time base, 1: SOF and no internal Time */
#define CAN0_MCLK_ID_AHB                         (23)       /* Index for CAN0 AHB clock */
#define CAN0_MSG_RAM_ADDR                        (0x20)     /* 8-bits MSB */
#define CAN0_NUMBER_TS                           (1)        /* 0: 4 Timestamp reg, 1: 8 timestamp reg, 2: 16 timestamp reg */
#define CAN0_PAC_ID                              (17)       /* Index for CAN0 registers write protection */
#define CAN0_PERIPH_ID                           (23)       /* H2PB Peripheral ID */
#define CAN0_PRIV_IMPLEMENTED                    (1)        /* Privilege access is implemented? 0: CTRLA.PRIV bit not implemented, 1: CTRLA.PRIV bit implemented */
#define CAN0_RXD_SYNC_METHOD                     (0)        /* RXD Synchronization Method */
#define CAN0_SYNT_TIMESTAMP                      (0x00000)  /* CAN_SYNT_TIMESTAMP[19:16]: CREL.YEAR reset value (BCD-coded),CAN_SYNT_TIMESTAMP[15:8]: CREL.MON reset value (BCD-coded), CAN_SYNT_TIMESTAMP[7:0]: CREL.DAY reset value (BCD-coded) */
#define CAN0_WPCTRL_IMPLEMENTED                  (0)        /* Write protection control register implemented? */
#define CAN0_WPCTRL_KEY                          (0x43414E) /* Write protection 24 bit key */

#endif /* _PIC32CMGC00_CAN0_INSTANCE_ */
