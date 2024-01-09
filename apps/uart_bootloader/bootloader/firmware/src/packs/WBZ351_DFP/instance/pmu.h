/*
 * Instance header file for WBZ351
 *
 * Copyright (c) 2023 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2023-04-11T16:47:17Z */
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
