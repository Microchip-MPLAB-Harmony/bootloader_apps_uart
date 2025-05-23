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
#ifndef _PIC32CMGC00_DSU_INSTANCE_
#define _PIC32CMGC00_DSU_INSTANCE_


/* ========== Instance Parameter definitions for DSU peripheral ========== */
#define DSU_BRIDGE_ID                            (0)        /* H2PB Bridge ID */
#define DSU_DMAC_ID_DCC0                         (1)        
#define DSU_DMAC_ID_DCC1                         (2)        
#define DSU_BASE_ADDR_INTERNAL                   (0x44000000) /* -- */
#define DSU_BRCTRL_KEY                           (0x445355) /* -- */
#define DSU_CORESIGHT_REVISION                   (0x0)      /* -- */
#define DSU_CPU_NUM                              (0)        /* -- */
#define DSU_CTRLAPRIV_IMPLEMENTED                (1)        /* -- */
#define DSU_CTRLB_IMPLEMENTED_MASK               (0x00000000) /* -- */
#define DSU_DAL1_VAL                             (0x55)     /* -- */
#define DSU_DAL2_VAL                             (0xAA)     /* -- */
#define DSU_FUSES_DATA_MSB                       (127)      /* 128-bit bus */
#define DSU_FUSES_ID_DEVID_ROWID                 (8)        /* DEVID on RowID Index = 8 */
#define DSU_FUSES_ID_DEVID_SIZE                  (8)        /* -- */
#define DSU_FUSES_ID_DEVID_START                 (24)       /* DEVID field is DSUCFG0[31:24] */
#define DSU_FUSES_RDY_MSB                        (14)       /* 15 bit fuse ready bus */
#define DSU_ID_MASKID                            (0x00)     /* Microchip Device Mask ID which provides the value for bits [15:8] of the ID - Part Number. */
#define DSU_ID_VER                               (0x0)      /* ID Version Code provides the Mask Revision value for the device. Use metal changeable cells to configure this value. */
#define DSU_PRVKEY_IMPLEMENTED                   (0)        /* key sourced by PUF, not DSU */
#define DSU_SD_KEY                               (0xFFABAFD0) /* -- */
#define DSU_SWCCS_IMPLEMENTED                    (1)        /* -- */
#define DSU_TDID_DIE                             (0x00)     /* -- */
#define DSU_TDID_MASK                            (0x00)     /* -- */
#define DSU_TZ_IMPLEMENTED                       (1)        /* -- */
#define DSU_WPCTRL_IMPLEMENTED                   (0)        /* -- */
#define DSU_WPCTRL_KEY                           (0x445355) /* -- */
#define DSU_INSTANCE_ID                          (0)        /* Instance index for DSU */
#define DSU_MCLK_ID_AHB                          (0)        /* Index for DSU AHB clock */
#define DSU_PAC_ID                               (0)        /* Index for DSU registers write protection */
#define DSU_PERIPH_ID                            (0)        /* H2PB Peripheral ID */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define DSU_CORESIGHT_ENTRY                      { 0xE00FF001, 0x0, 0x0, 0x0 } /* -- */
#define DSU_DCFG_MASK                            { 0xFF0FFF0F, 0x10FC7F80, 0xC0800203, 0x0, 0x0, 0x0, 0x0, 0x0 } /* -- */
#define DSU_FUSES_DCFG_ROWID                     { 8, 8, 8, 8, 9, 9, 9, 9 } /* DSUCFG7-0 = FCCFG39-32 */
#define DSU_FUSES_DCFG_SIZE                      { 32, 32, 32, 32, 32, 32, 32, 32 } /* -- */
#define DSU_FUSES_DCFG_START                     { 0, 32, 64, 96, 0, 32, 64, 96 } /* -- */
#define DSU_TESTMODE_IMPLEMENTED_MASK            { 0x000007FF, 0x00000000, 0x00000000, 0x00000000 } /* -- */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */



#endif /* _PIC32CMGC00_DSU_INSTANCE_ */
