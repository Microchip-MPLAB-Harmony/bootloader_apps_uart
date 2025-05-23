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
#ifndef _PIC32CMGC00_FCW_INSTANCE_
#define _PIC32CMGC00_FCW_INSTANCE_


/* ========== Instance Parameter definitions for FCW peripheral ========== */
#define FCW_BFM_PNL_ADDR_MSB                     (13)       /* -- */
#define FCW_BFM_SYS_ADDR_MSB                     (13)       /* -- */
#define FCW_BRIDGE_ID                            (0)        /* H2PB Bridge ID */
#define FCW_CFM_PNL_ADDR_MSB                     (14)       /* -- */
#define FCW_CFM_SYS_ADDR_MSB                     (14)       /* -- */
#define FCW_BFM_ADDR_BASE                        (0x08000000) /* -- */
#define FCW_CFM_ADDR_BASE                        (0x0A000000) /* -- */
#define FCW_CTRLAPRIV_IMPLEMENTED                (1)        /* -- */
#define FCW_INTFLAGSET_IMPLEMENTED               (1)        /* -- */
#define FCW_NUM_DATA_SFR                         (4)        /* (PFM_DATA_MSB+1)/32 */
#define FCW_PERIOD_MIN                           (75)       /* -- */
#define FCW_PERIOD_NOM                           (116)      /* -- */
#define FCW_PFM_ADDR_BASE                        (0x0C000000) /* -- */
#define FCW_PWP_MSB                              (6)        /* -- */
#define FCW_PWP_REGIONS                          (4)        /* -- */
#define FCW_SD_USE_CPCNT                         (1)        /* -- */
#define FCW_TAMPER_ADDR                          (0x0A003200) /* -- */
#define FCW_TAMPER_DATA                          (0x00000000) /* -- */
#define FCW_TAMPER_PRESENT                       (1)        /* -- */
#define FCW_TPAR_MSB                             (3)        /* (PFM_PNL_DATA_MSB - PFM_DATA_MSB)/4 */
#define FCW_VSS_CFG0_BASE                        (0x0A004000) /* -- */
#define FCW_VSS_CFG1_BASE                        (0x0A005000) /* -- */
#define FCW_VSS_CFG2_BASE                        (0)        /* Not applicable for QS */
#define FCW_VSS_CFG3_BASE                        (0)        /* Not applicable for QS */
#define FCW_VSS_CFG4_BASE                        (0)        /* Not applicable for QS */
#define FCW_VSS_CFG5_BASE                        (0)        /* Not applicable for QS */
#define FCW_WPCTRL_IMPLEMENTED                   (0)        /* -- */
#define FCW_WPCTRL_KEY                           (0x464357) /* -- */
#define FCW_FLASH_SIZE                           (524288)   
#define FCW_INSTANCE_ID                          (2)        /* Instance index for FCW */
#define FCW_MCLK_ID_AHB                          (2)        /* Index for FCW AHB clock */
#define FCW_NVR_NUM_PAGES                        (12)       /* -- */
#define FCW_PAC_ID                               (2)        /* Index for FCW registers write protection */
#define FCW_PERIPH_ID                            (2)        /* H2PB Peripheral ID */
#define FCW_PFM_DATA_MSB                         (127)      /* -- */
#define FCW_PFM_NUM_PANELS                       (1)        /* -- */
#define FCW_PFM_NUM_RR                           (2)        /* -- */
#define FCW_PFM_PAGE_ADDR_MSB                    (11)       /* -- */
#define FCW_PFM_PNL_ADDR_MSB                     (18)       /* -- */
#define FCW_PFM_PNL_DATA_MSB                     (139)      /* -- */
#define FCW_PFM_ROW_ADDR_MSB                     (9)        /* -- */
#define FCW_PFM_SIZE                             (6)        /* -- */
#define FCW_PFM_SYS_ADDR_MSB                     (18)       /* -- */
#define FCW_PFM_TADH_NS                          (15)       /* See Note 2 */
#define FCW_PFM_TADS_NS                          (15)       /* See Note 2 */
#define FCW_PFM_TERASE_NS                        (18000000) /* See Note 3 */
#define FCW_PFM_TERASE_RETRY_NS                  (4500000)  /* See Note 3 */
#define FCW_PFM_TNVS_NS                          (4000)     /* See Note 2 */
#define FCW_PFM_TPGH_NS                          (15)       /* See Note 2 */
#define FCW_PFM_TPGS_NS                          (8000)     /* See Note 2 */
#define FCW_PFM_TPREPGH_NS                       (15)       /* See Note 2 */
#define FCW_PFM_TPREPGS_NS                       (1000)     /* See Note 2 */
#define FCW_PFM_TPREPROG_NS                      (3000)     /* See Note 3 */
#define FCW_PFM_TPROG_NS                         (18000)    /* See Note 3 */
#define FCW_PFM_TPUMPENH                         (100)      /* See Note 2 */
#define FCW_PFM_TPUMPENS                         (1000)     /* See Note 2 */
#define FCW_PFM_TPUMP_CYCLES                     (1029)     /* See Note 2 */
#define FCW_PFM_TRCV_ERASE_NS                    (50000)    /* See Note 2 */
#define FCW_PFM_TRCV_PROG_NS                     (5000)     /* See Note 2 */
#define FCW_PFM_TRW_NS                           (100)      /* See Note 2 */
#define FCW_PFM_TSCE_NS                          (18000000) /* See Note 3 */
#define FCW_PFM_TWH_NS                           (5)        /* value irrelevant, must be >0 */
#define FCW_PFM_TWS_NS                           (5)        /* value irrelevant, must be >0 */

#endif /* _PIC32CMGC00_FCW_INSTANCE_ */
