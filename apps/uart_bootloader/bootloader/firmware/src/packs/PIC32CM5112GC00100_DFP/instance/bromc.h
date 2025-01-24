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
#ifndef _PIC32CMGC00_BROMC_INSTANCE_
#define _PIC32CMGC00_BROMC_INSTANCE_


/* ========== Instance Parameter definitions for BROMC peripheral ========== */
#define BROMC_BRIDGE_ID                          (1)        /* H2PB Bridge ID */
#define BROMC_BOOTCRC_MODE                       (2)        /* -- */
#define BROMC_CTRLAPRIV_IMPLEMENTED              (1)        /* -- */
#define BROMC_FUSES_DATA_MSB                     (127)      /* See Flash Control Chapter for Values */
#define BROMC_FUSES_RDY_MSB                      (14)       /* See Flash Control Chapter for Values */
#define BROMC_FUSES_UCFG_ROWID                   (14)       /* See Chapter 5 CCFG Fuse map for Values */
#define BROMC_FUSES_UCFG_START                   (0)        /* See Chapter 5 CCFG Fuse map for Values */
#define BROMC_NUM_COOLDN_CYCLES                  (2)        /* -- */
#define BROMC_NUM_WARMUP_CYCLES                  (2)        /* -- */
#define BROMC_PADDR_MSB                          (12)       /* -- */
#define BROMC_PDATA_MSB                          (31)       /* -- */
#define BROMC_PPROT_MSB                          (5)        /* -- */
#define BROMC_PSTRB_MSB                          (3)        /* -- */
#define BROMC_ROM_ADDR_MSB                       (13)       /* -- */
#define BROMC_ROM_CRC_EN                         (1)        /* -- */
#define BROMC_ROM_DATA_MSB                       (31)       /* -- */
#define BROMC_ROM_DATA_SIZE                      (16384)    /* -- */
#define BROMC_ROM_KEN                            (0)        /* -- */
#define BROMC_ROM_PRMWS_DEFAULT                  (0)        /* -- */
#define BROMC_ROM_SPLIT                          (0x3400)   /* (8K for PK code)  (Note: This parameter may change once boot and PK code sizes are known) */
#define BROMC_WPCTRL_IMPLEMENTED                 (0)        /* -- */
#define BROMC_WPCTRL_KEY                         (0x42524F) /* -- */
#define BROMC_INSTANCE_ID                        (23)       /* Instance index for BROMC */
#define BROMC_MCLK_ID_AHB                        (32)       /* Index for BROMC AHB clock */
#define BROMC_MCLK_ID_APB                        (33)       /* Index for BROMC APB clock */
#define BROMC_PAC_ID                             (23)       /* Index for BROMC registers write protection */
#define BROMC_PERIPH_ID                          (2)        /* H2PB Peripheral ID */

#endif /* _PIC32CMGC00_BROMC_INSTANCE_ */
