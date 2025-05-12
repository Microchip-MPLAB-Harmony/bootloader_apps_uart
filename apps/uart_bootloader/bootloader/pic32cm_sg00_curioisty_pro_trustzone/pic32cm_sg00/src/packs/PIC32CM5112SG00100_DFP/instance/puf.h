/*
 * Instance header file for PIC32CM5112SG00100
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

/* file generated from device description file (ATDF) version 2024-11-05T16:47:53Z */
#ifndef _PIC32CMSG00_PUF_INSTANCE_
#define _PIC32CMSG00_PUF_INSTANCE_


/* ========== Instance Parameter definitions for PUF peripheral ========== */
#define PUF_BRIDGE_ID                            (1)        /* H2PB Bridge ID */
#define PUF_DMAC_ID_PUFDI                        (41)       
#define PUF_DMAC_ID_PUFDO                        (42)       
#define PUF_INSTANCE_ID                          (49)       /* Instance index for PUF */
#define PUF_MCLK_ID_APB                          (63)       /* Index for PUF APB clock */
#define PUF_PAC_ID                               (49)       /* Index for PUF registers write protection */
#define PUF_PERIPH_ID                            (26)       /* H2PB Peripheral ID */
#define PUF_CTRLAPRIV_IMPLEMENTED                (1)        /* Implement the CTRLA.PRIV bit and privilege access filtering to registers.0 = CTRLA.PRIV not implemented1 = CTRLA.PRIV implemented */
#define PUF_WPCTRL_IMPLEMENTED                   (0)        /* Implement the WPCTRL register for write protection. 1 = The WPCTRL register is present . Used to control write protection enable/disable. 0 = No WPCTRL register, only used in legacy device with a PACUse puf_s_wrprot to control write protection enable/disable */
#define PUF_WPCTRL_KEY                           (0x505546) /* WPCTRL 24-bit key value. See register description for usage.Set to a unique value for each macro. ASCII of "PUF" */

#endif /* _PIC32CMSG00_PUF_INSTANCE_ */
