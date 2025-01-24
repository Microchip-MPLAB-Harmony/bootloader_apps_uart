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
#ifndef _PIC32CMGC00_FCR_INSTANCE_
#define _PIC32CMGC00_FCR_INSTANCE_


/* ========== Instance Parameter definitions for FCR peripheral ========== */
#define FCR_BFM_PNL_ADDR_MSB                     (13)       /* -- */
#define FCR_BFM_SYS_ADDR_MSB                     (13)       /* -- */
#define FCR_BRIDGE_ID                            (0)        /* H2PB Bridge ID */
#define FCR_CFM_PNL_ADDR_MSB                     (14)       /* -- */
#define FCR_CFM_SYS_ADDR_MSB                     (14)       /* -- */
#define FCR_AHB_PORTS_NB                         (1)        /* -- */
#define FCR_BFM_ADDR_BASE                        (0x08000000) /* -- */
#define FCR_CAL_ADDR                             (0x0A007080) /* -- */
#define FCR_CAL_NUM_READS                        (14)       /* -- */
#define FCR_CFM_ADDR_BASE                        (0x0A000000) /* -- */
#define FCR_CRC_PRESENT                          (1)        /* -- */
#define FCR_CTRLAPRIV_IMPLEMENTED                (1)        /* -- */
#define FCR_ECC_PRESENT                          (1)        /* -- */
#define FCR_F1RR_ADDR                            (0x0A007000) /* -- */
#define FCR_F2RR_ADDR                            (0)        /* Not applicable for QSilver */
#define FCR_FCD_ADDR_BASE                        (0x0B000000) /* -- */
#define FCR_FFF_ADDR                             (0x0A007040) /* -- */
#define FCR_FLT_PRESENT                          (1)        /* -- */
#define FCR_FUSES_DATA_CYCLES                    (4)        /* -- */
#define FCR_FUSES_READY_CYCLES                   (2)        /* -- */
#define FCR_HDATA_SIZE                           (32)       /* -- */
#define FCR_HSM_PRESENT                          (0)        /* -- */
#define FCR_INTFLAGSET_IMPLEMENTED               (1)        /* -- */
#define FCR_NOT_FFF_VALUE                        (0xA5A5A5A5) /* -- */
#define FCR_NUM_RR_SFR                           (1)        /* -- */
#define FCR_OTPLOCK_ADDR                         (0x0A007060) /* -- */
#define FCR_PBUCFG_ADDR                          (0x0A003400) /* -- */
#define FCR_PCHE_AHB_NUM                         (0)        /* -- */
#define FCR_PCHE_NUM_LINES                       (4)        /* -- */
#define FCR_PCHE_PRESENT                         (1)        /* -- */
#define FCR_PCHE_TAG_MASK                        (0xF9F8000F) /* -- */
#define FCR_PDMO_MSB                             (7)        /* -- */
#define FCR_PERIOD_MIN                           (75)       /* -- */
#define FCR_PERIOD_NOM                           (116)      /* -- */
#define FCR_PFM_ADDR_BASE                        (0x0C000000) /* -- */
#define FCR_RR_NUM_READS                         (1)        /* -- */
#define FCR_TCALH_NS                             (10000)    /* -- */
#define FCR_VSS_CFG0_BASE                        (0x0A004000) /* -- */
#define FCR_VSS_CFG1_BASE                        (0x0A005000) /* -- */
#define FCR_VSS_CFG2_BASE                        (0)        /* -- */
#define FCR_VSS_CFG3_BASE                        (0)        /* -- */
#define FCR_VSS_CFG4_BASE                        (0)        /* -- */
#define FCR_VSS_CFG5_BASE                        (0)        /* -- */
#define FCR_WPCTRL_IMPLEMENTED                   (0)        /* -- */
#define FCR_WPCTRL_KEY                           (0x464352) /* -- */
#define FCR_FUSES_DATA_MSB                       (127)      /* -- */
#define FCR_FUSES_RDY_MSB                        (14)       /* -- */
#define FCR_INSTANCE_ID                          (1)        /* Instance index for FCR */
#define FCR_MCLK_ID_AHB                          (1)        /* Index for FCR AHB clock */
#define FCR_NVR_NUM_PAGES                        (12)       /* -- */
#define FCR_PAC_ID                               (1)        /* Index for FCR registers write protection */
#define FCR_PERIPH_ID                            (1)        /* H2PB Peripheral ID */
#define FCR_PFM_ACC_HT_NS                        (30)       /* -- */
#define FCR_PFM_ACC_NS                           (25)       /* -- */
#define FCR_PFM_ACC_RECALL_NS                    (70)       /* -- */
#define FCR_PFM_DATA_MSB                         (127)      /* -- */
#define FCR_PFM_NUM_PANELS                       (1)        /* -- */
#define FCR_PFM_NUM_RR                           (2)        /* -- */
#define FCR_PFM_PAGE_ADDR_MSB                    (11)       /* -- */
#define FCR_PFM_PNL_ADDR_MSB                     (18)       /* -- */
#define FCR_PFM_PNL_DATA_MSB                     (139)      /* -- */
#define FCR_PFM_PNL_WDATA_MSB                    (34)       /* Parameter only in DOS Rev C, not in RTL */
#define FCR_PFM_ROW_ADDR_MSB                     (9)        /* -- */
#define FCR_PFM_SRHT_PRESENT                     (0)        /* -- */
#define FCR_PFM_SYS_ADDR_MSB                     (18)       /* -- */
#define FCR_PFM_TDPDH_NS                         (5000)     /* -- */
#define FCR_PFM_TDPDS_NS                         (100)      /* -- */
#define FCR_PFM_TLKCFG_NS                        (1000)     /* -- */
#define FCR_PFM_TMH_NS                           (100)      /* See Note 2 */
#define FCR_PFM_TMS_NS                           (5000)     /* See Note 2 */
#define FCR_PFM_TONWAIT_NS                       (6000)     /* -- */
#define FCR_PFM_TRHR_NS                          (1000)     /* -- */
#define FCR_PFM_TRT_NS                           (500)      /* -- */

#endif /* _PIC32CMGC00_FCR_INSTANCE_ */
