/*
 * Instance header file for WBZ351
 *
 * Copyright (c) 2024 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description file (ATDF) version 2024-02-12T06:36:14Z */
#ifndef _WBZ35_PMU_INSTANCE_
#define _WBZ35_PMU_INSTANCE_


/* ========== Instance Parameter definitions for PMU peripheral ========== */
#define PMU_BUCK_OPER_VAL                        (5)        /* {buck_en_mv, mldo_en_mv, buck_mode_mv} */
#define PMU_BUCK_SEQ_RETRY_NUM                   (10)       
#define PMU_LDO_STARTUP_VAL                      (1)        /* Definition and usage refer to Section 4.4 */
#define PMU_MLDO_OPER_VAL                        (3)        /* buck_en_mv, mldo_en_mv, buck_mode_mv */
#define PMU_NO_OF_BUCK_SQEQ_REGS                 (3)        /* Register values to be taken from Analog Design team */
#define PMU_NUM_LDO                              (1)        /* Number of LDOs (4 on Rio) */
#define PMU_RST_CYCLES                           (8)        /* Duration of SPI Soft Reset in terms of number of SPI Clock Cycles */
#define PMU_SHARED_LDO_MODE                      (1)        /* WCM memory Core does not use separate LDO in run and in retention mode */
#define PMU_SPI_ADDR_WIDTH                       (8)        
#define PMU_SPI_CTRL_STARTUP_VAL                 (4)        /* spi_cs_n_mv, spi_clk_mv, spi_dout_mv */
#define PMU_SPI_DATA_WIDTH                       (16)       
#define PMU_SPI_DRIVING                          (0)        /* Falling Edge (Rising Edge / Falling Edge) */
#define PMU_SPI_SAMPLING                         (0)        /* Falling Edge (Rising Edge / Falling Edge) */
#define PMU_SW_VAL                               (7)        /* {buck_en_mv, mldo_en_mv, buck_mode_mv} */
#define PMU_VBC_INDIRECT_MODE                    (1)        /* New */
#define PMU_WCM_RET1N_TIME                       (4)        /* ns based on feedback from  ARM and Design team */
#define PMU_WCM_SIZE                             (8)        
#define PMU_WCM_TRANSITION_TIME                  (4)        /* nsbased on feedback from ARM and Design team */
#define PMU_WLDO_NUM                             (3)        /* NA if > NUM_LDOS */

#endif /* _WBZ35_PMU_INSTANCE_ */
