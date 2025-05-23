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
#ifndef _PIC32CMGC00_EIC_INSTANCE_
#define _PIC32CMGC00_EIC_INSTANCE_


/* ========== Instance Parameter definitions for EIC peripheral ========== */
#define EIC_BRIDGE_ID                            (0)        /* H2PB Bridge ID */
#define EIC_EXTINT_NUM                           (16)       /* -- */
#define EIC_GCLK_ID                              (5)        
#define EIC_INSTANCE_ID                          (13)       /* Instance index for EIC */
#define EIC_MCLK_ID_APB                          (13)       /* Index for EIC APB clock */
#define EIC_NUMBER_OF_CONFIG_REGS                (2)        /* =(EIC_EXTINT_NUM +7) / 8 */
#define EIC_NUMBER_OF_INTERRUPTS                 (16)       /* =(EIC_EXTINT_NUM) */
#define EIC_PAC_ID                               (13)       /* Index for EIC registers write protection */
#define EIC_PERIPH_ID                            (16)       /* H2PB Peripheral ID */
#define EIC_SECURE_IMPLEMENTED                   (1)        /* -- */

#endif /* _PIC32CMGC00_EIC_INSTANCE_ */
