/*
 * Instance header file for PIC32WM_BZ6204
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

/* file generated from device description file (ATDF) version 2025-01-29T18:23:31Z */
#ifndef _PIC32WM_BZ6_PMU_INSTANCE_
#define _PIC32WM_BZ6_PMU_INSTANCE_


/* ========== Instance Parameter definitions for PMU peripheral ========== */
#define PMU_BUCK_OPER_VAL                        (5)        /* {buck_en_mv, mldo_en_mv, buck_mode_mv} */
#define PMU_BUCK_SEQ_RETRY_NUM                   (10)       
#define PMU_LDO1_STARTUP_VAL                     (1)        /* Definition and usage refer to Section 3.63 */
#define PMU_LDO2_STARTUP_VAL                     (1)        /* Definition and usage refer to Section 3.63 */
#define PMU_LDO3_STARTUP_VAL                     (10)       /* Definition and usage refer to Section 3.63 */
#define PMU_LDO4_STARTUP_VAL                     (0)        /* Definition and usage refer to Section 3.63 */
#define PMU_MLDO_OPER_VAL                        (3)        /* buck_en_mv, mldo_en_mv, buck_mode_mv */
#define PMU_NO_OF_BUCK_SQEQ_REGS                 (3)        /* Register values to be taken from Analog Design team */
#define PMU_NUM_LDO                              (3)        /* Number of LDOs(CLDO, SoC LDO, VREGPLL) */
#define PMU_RST_CYCLES                           (8)        /* Duration of SPI Soft Reset in terms of number of SPI Clock Cycles */
#define PMU_SHARED_LDO_MODE                      (1)        /* WCM memory Core does not use separate LDO in run and in retention mode */
#define PMU_SPI_ADDR_WIDTH                       (8)        
#define PMU_SPI_CTRL_STARTUP_VAL                 (4)        /* spi_cs_n_mv, spi_clk_mv, spi_dout_mv */
#define PMU_SPI_DATA_WIDTH                       (16)       
#define PMU_SPI_DRIVING                          (0)        /* Falling Edge (Rising Edge / Falling Edge) */
#define PMU_SPI_SAMPLING                         (0)        /* Falling Edge (Rising Edge / Falling Edge) */
#define PMU_SW_VAL                               (7)        /* {buck_en_mv, mldo_en_mv, buck_mode_mv} */
#define PMU_VBC_INDIRECT_MODE                    (1)        /* New */
#define PMU_WCM_RET1N_TIME                       (4)        /* ns based on feedback from ARM and Design team */
#define PMU_WCM_SIZE                             (8)        
#define PMU_WCM_TRANSITION_TIME                  (4)        /* ns based on feedback from ARM and Design team */
#define PMU_WLDO_NUM                             (3)        /* N/A if > NUM_LDOS */

#endif /* _PIC32WM_BZ6_PMU_INSTANCE_ */
