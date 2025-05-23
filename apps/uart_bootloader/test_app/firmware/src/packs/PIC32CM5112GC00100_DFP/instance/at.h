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
#ifndef _PIC32CMGC00_AT_INSTANCE_
#define _PIC32CMGC00_AT_INSTANCE_


/* ========== Instance Parameter definitions for AT peripheral ========== */
#define AT_CTRLAPRIV_IMPLEMENTED                 (1)        /* Implement the CTRLA.PRIV bit and privilege access filtering to registers.0 = CTRLA.PRIV not implemented1 = CTRLA.PRIV implemented */
#define AT_TMPR_OSC_NUM_INV                      (881)      /* Number of inverters in tamper oscillator */
#define AT_WPCTRL_IMPLEMENTED                    (0)        /* Implement the WPCTRL register for write protection. 1 = Use WPCTRL register is preset . Used to control write protection enable/disable. 0 = No WPCTRL sfr, only used in legacy device with a PACUse at_wrprot to control write protection enable/disable */
#define AT_WPCTRL_KEY                            (0x412054) /* WPCTRL 24-bit key value. See register description for usage.Set to a unique value for each macro. ASCII of "A T" */
#define AT_BRIDGE_ID                             (2)        /* H2PB Bridge ID */
#define AT_INSTANCE_ID                           (45)       /* Instance index for AT */
#define AT_MCLK_ID_APB                           (56)       /* Index for AT APB clock */
#define AT_PAC_ID                                (45)       /* Index for AT registers write protection */
#define AT_PERIPH_ID                             (6)        /* H2PB Peripheral ID */

#endif /* _PIC32CMGC00_AT_INSTANCE_ */
