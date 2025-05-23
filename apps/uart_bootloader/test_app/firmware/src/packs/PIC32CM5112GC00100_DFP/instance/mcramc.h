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
#ifndef _PIC32CMGC00_MCRAMC_INSTANCE_
#define _PIC32CMGC00_MCRAMC_INSTANCE_


/* ========== Instance Parameter definitions for MCRAMC peripheral ========== */
#define MCRAMC_AHB_CLOCK_ENABLE                  (0)        /* -- */
#define MCRAMC_AHB_ECC                           (1)        /* -- */
#define MCRAMC_AHB_PORTS_NB                      (8)        /* -- */
#define MCRAMC_AHB_READ_PREBUFFERING             (0)        /* -- */
#define MCRAMC_AHB_REQUEST_ISOLATION_REGISTER    (0)        /* -- */
#define MCRAMC_ARBITRATION_TYPE                  (2)        /* Parameter should be "ENUM_HOPSCOTCH"Fix for text parameter in ConstellationCONST_DEV-1173 */
#define MCRAMC_BIT_STROBE_RAM                    (0)        /* parameter n/a if STORE_BYTE_STROBE=0 */
#define MCRAMC_BRIDGE_ID                         (0)        /* H2PB Bridge ID */
#define MCRAMC_CHANNELS_NB                       (2)        /* -- */
#define MCRAMC_ECC_SYNDROM_REGISTER              (0)        /* -- */
#define MCRAMC_HADDR_READ_ISOLATION_REGISTER     (0)        /* -- */
#define MCRAMC_HRDATA_ISOLATION_CONFIGURABLE     (1)        /* -- */
#define MCRAMC_HRDATA_ISOLATION_DEFAULT          (0)        /* default to 0 wait states */
#define MCRAMC_INSTANCE_ID                       (16)       /* Instance index for MCRAMC */
#define MCRAMC_M0_CLOCK_ENABLE                   (0)        /* -- */
#define MCRAMC_M0_DATA_SIZE                      (32)       /* -- */
#define MCRAMC_M0_HYBRID_READ_WRITE_ACCESS       (0)        /* -- */
#define MCRAMC_M0_PORT_SLICES_NB                 (0)        /* -- */
#define MCRAMC_MCLK_ID_AHB                       (22)       /* Index for MCRAMC AHB clock */
#define MCRAMC_MCLK_ID_APB                       (21)       /* Index for MCRAMC APB clock */
#define MCRAMC_CLK_GATER                         (0)        /* -- */
#define MCRAMC_PADDR_SIZE                        (13)       /* -- */
#define MCRAMC_MEMORY_AUTO_CORRECTION            (1)        /* -- */
#define MCRAMC_MEMORY_ENABLE_POLARITY            (0)        /* -- */
#define MCRAMC_MW_CLOCK_ENABLE                   (0)        /* -- */
#define MCRAMC_MW_DATA_SIZE                      (32)       /* -- */
#define MCRAMC_MW_PORT_SLICES_NB                 (0)        /* -- */
#define MCRAMC_PAC_ID                            (16)       /* Index for MCRAMC registers write protection */
#define MCRAMC_PERIPH_ID                         (22)       /* H2PB Peripheral ID */
#define MCRAMC_PRIVILEGED_BIT_CHECK              (1)        /* -- */
#define MCRAMC_RAM_ADD_SIZE                      (14)       /* -- */
#define MCRAMC_RAM_AHB_ADDRESS_OFFSET            (0)        /* -- */
#define MCRAMC_RAM_ERASE                         (0)        /* -- */
#define MCRAMC_STORE_BYTE_STROBE                 (0)        /* -- */
#define MCRAMC_ULTRA                             (1)        /* -- */
#define MCRAMC_WP_KEY                            (0x465852) /* "FXR" */
#define MCRAMC_WRITE_ENABLE_POLARITY             (0)        /* -- */
#define MCRAMC_WRITE_ENABLE_USED                 (1)        /* -- */
#define MCRAMC_WRITE_MASK_POLARITY               (0)        /* -- */
#define MCRAMC_WRITE_PROTECT_REGISTER            (0)        /* -- */

#endif /* _PIC32CMGC00_MCRAMC_INSTANCE_ */
