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
#ifndef _PIC32CMGC00_CAN1_INSTANCE_
#define _PIC32CMGC00_CAN1_INSTANCE_


/* ========== Instance Parameter definitions for CAN1 peripheral ========== */
#define CAN1_BRIDGE_ID                           (0)        /* H2PB Bridge ID */
#define CAN1_ECC_ERR_IMPLEMENTED                 (0)        /* ECC error implemented? */
#define CAN1_GCLK_ID                             (7)        
#define CAN1_INSTANCE_ID                         (18)       /* Instance index for CAN1 */
#define CAN1_INTERNAL_TB_SOF                     (3)        /* 0: No SOF and no internal Time base, 1: SOF and no internal Time */
#define CAN1_MCLK_ID_AHB                         (24)       /* Index for CAN1 AHB clock */
#define CAN1_MSG_RAM_ADDR                        (0x20)     /* 8-bits MSB */
#define CAN1_NUMBER_TS                           (1)        /* 0: 4 Timestamp reg, 1: 8 timestamp reg, 2: 16 timestamp reg */
#define CAN1_PAC_ID                              (18)       /* Index for CAN1 registers write protection */
#define CAN1_PERIPH_ID                           (24)       /* H2PB Peripheral ID */
#define CAN1_PRIV_IMPLEMENTED                    (1)        /* Privilege access is implemented? 0: CTRLA.PRIV bit not implemented, 1: CTRLA.PRIV bit implemented */
#define CAN1_RXD_SYNC_METHOD                     (0)        /* RXD Synchronization Method */
#define CAN1_SYNT_TIMESTAMP                      (0x00000)  /* CAN_SYNT_TIMESTAMP[19:16]: CREL.YEAR reset value (BCD-coded),CAN_SYNT_TIMESTAMP[15:8]: CREL.MON reset value (BCD-coded), CAN_SYNT_TIMESTAMP[7:0]: CREL.DAY reset value (BCD-coded) */
#define CAN1_WPCTRL_IMPLEMENTED                  (0)        /* Write protection control register implemented? */
#define CAN1_WPCTRL_KEY                          (0x43414E) /* Write protection 24 bit key */

#endif /* _PIC32CMGC00_CAN1_INSTANCE_ */
