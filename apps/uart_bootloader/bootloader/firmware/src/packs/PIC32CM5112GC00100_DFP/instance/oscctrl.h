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
#ifndef _PIC32CMGC00_OSCCTRL_INSTANCE_
#define _PIC32CMGC00_OSCCTRL_INSTANCE_


/* ========== Instance Parameter definitions for OSCCTRL peripheral ========== */
#define OSCCTRL_BRIDGE_ID                        (0)        /* H2PB Bridge ID */
#define OSCCTRL_DFLL48M_ATEST_IMPLEMENTED        (1)        /* -- */
#define OSCCTRL_DFLL48M_ATEST_SIZE               (8)        /* -- */
#define OSCCTRL_DFLL48M_IS_STARTUP_OSCILLATOR    (1)        /* -- */
#define OSCCTRL_DFLL48M_RC48MCAL0_PORVAL         (0x00000000) /* -- */
#define OSCCTRL_DIV_8MHZ_NUM                     (2)        /* -- */
#define OSCCTRL_FRACDIVS_NUM                     (0)        /* -- */
#define OSCCTRL_FRACDIV_DIVIDER_RESET_VAL        (0)        /* -- */
#define OSCCTRL_FRACDIV_PLLSRC                   (0)        /* -- */
#define OSCCTRL_GCLK_ID_DFLL48M                  (0)        
#define OSCCTRL_GCLK_ID_PLL                      (1)        
#define OSCCTRL_INSTANCE_ID                      (6)        /* Instance index for OSCCTRL */
#define OSCCTRL_MCLK_ID_APB                      (6)        /* Index for OSCCTRL APB clock */
#define OSCCTRL_PAC_ID                           (6)        /* Index for OSCCTRL registers write protection */
#define OSCCTRL_PERIPH_ID                        (3)        /* H2PB Peripheral ID */
#define OSCCTRL_PLL0_OUTPUTS_NUM                 (5)        /* -- */
#define OSCCTRL_PLL1_OUTPUTS_NUM                 (0)        /* -- */
#define OSCCTRL_PLLS_NUM                         (1)        /* -- */
#define OSCCTRL_USBHS_NUM                        (1)        /* should be 0, but IP has bug */
#define OSCCTRL_XOSC_ATEST_IMPLEMENTED           (1)        /* -- */
#define OSCCTRL_XOSC_ATEST_SIZE                  (4)        /* -- */
#define OSCCTRL_XOSC_CFD_CLK_SELECT_SIZE         (4)        /* -- */
#define OSCCTRL_XOSC_CFD_HAS_RETENTION           (0)        /* -- */

#endif /* _PIC32CMGC00_OSCCTRL_INSTANCE_ */
