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
#ifndef _PIC32CMGC00_PORT_INSTANCE_
#define _PIC32CMGC00_PORT_INSTANCE_


/* ========== Instance Parameter definitions for PORT peripheral ========== */
#define PORT_AHB_IMPLEMENTED                     (0)        /* No AHB bus */
#define PORT_BITS                                (117)      /* -- */
#define PORT_BRIDGE_ID                           (1)        /* H2PB Bridge ID */
#define PORT_DRVSTR                              (0)        /* No DRVSTR bits */
#define PORT_EV_NUM                              (4)        /* -- */
#define PORT_GROUPS                              (4)        /* -- */
#define PORT_HADDR_MSB                           (31)       /* -- */
#define PORT_INSTANCE_ID                         (20)       /* Instance index for PORT */
#define PORT_IOBUS_IMPLEMENTED                   (0)        /* No IOBUS */
#define PORT_MCLK_ID_APB                         (27)       /* Index for PORT APB clock */
#define PORT_MSB                                 (116)      /* PORT_BITS-1 */
#define PORT_ODRAIN                              (1)        /* -- */
#define PORT_PAC_ID                              (20)       /* Index for PORT registers write protection */
#define PORT_PERIPH_ID                           (0)        /* H2PB Peripheral ID */
#define PORT_PPP_IMPLEMENTED                     (0)        /* No IOBUS2 */
#define PORT_SECURE_IMPLEMENTED                  (1)        /* Mixed Secure Enabled */
#define PORT_SLEWLIM                             (2)        /* Number of SLEWLIM bit */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define PORT_DIR_DEFAULT_VAL                     { 0x00000000, 0x00000000, 0x00000000, 0x00000000 } /* -- */
#define PORT_DIR_IMPLEMENTED                     { 0x001FFFFF, 0x0003FFFF, 0x000FFFFF, 0x001FFFFF } /* DIR RegistersImplemented */
#define PORT_DRVSTR1_DEFAULT_VAL                 { 0x00000000, 0x00000000, 0x00000000, 0x00000000 } /* -- */
#define PORT_DRVSTR1_IMPLEMENTED                 { 0x00000000, 0x00000000, 0x00000000, 0x00000000 } /* PINCFG.DRVSTR1RegistersImplemented */
#define PORT_DRVSTR_DEFAULT_VAL                  { 0x00000000, 0x00000000, 0x00000000, 0x00000000 } /* -- */
#define PORT_DRVSTR_IMPLEMENTED                  { 0x00000000, 0x00000000, 0x00000000, 0x00000000 } /* PINCFG.DRVSTR0RegistersImplemented */
#define PORT_EVENT_IMPLEMENTED                   { 0x001FFFFF, 0x0003FFFF, 0x000FFFFF, 0x001FFFFF } /* Event RegistersImplemented */
#define PORT_INEN_DEFAULT_VAL                    { 0x00000000, 0x00000000, 0x00000000, 0x00000000 } /* -- */
#define PORT_INEN_IMPLEMENTED                    { 0x001FFFFF, 0x0003FFFF, 0x000FFFFF, 0x001FFFFF } /* PINCFG.INENRegistersImplemented */
#define PORT_NONSEC_DEFAULT_VAL                  { 0x00000000, 0x00000000, 0x00000000, 0x00000000 } /* -- */
#define PORT_NONSEC_IMPLEMENTED                  { 0x001FFFFF, 0x0003FFFF, 0x000FFFFF, 0x001FFFFF } /* NONSECRegistersImplemented */
#define PORT_ODRAIN_DEFAULT_VAL                  { 0x00000000, 0x00000000, 0x00000000, 0x00000000 } /* -- */
#define PORT_ODRAIN_IMPLEMENTED                  { 0x001FFFFF, 0x0003FFFF, 0x000FFFFF, 0x001FFFFF } /* PINCFG.ODRAINRegistersImplemented */
#define PORT_OUT_DEFAULT_VAL                     { 0x00000000, 0x00000000, 0x00000000, 0x00000000 } /* -- */
#define PORT_OUT_IMPLEMENTED                     { 0x001FFFFF, 0x0003FFFF, 0x000FFFFF, 0x001FFFFF } /* OUT RegistersImplemented */
#define PORT_PIN_IMPLEMENTED                     { 0x001FFFFF, 0x0003FFFF, 0x000FFFFF, 0x001FFFFF } /* Port PinsImplemented */
#define PORT_PMUXBIT0_DEFAULT_VAL                { 0x00000000, 0x00000000, 0x00000000, 0x0000000C } /* -- */
#define PORT_PMUXBIT0_IMPLEMENTED                { 0x001FFFFF, 0x0003FFF9, 0x000FFE7F, 0x001FFFC3 } /* Bit 0 of PMUX field */
#define PORT_PMUXBIT1_DEFAULT_VAL                { 0x00000000, 0x00000000, 0x000001E0, 0x0000000C } /* -- */
#define PORT_PMUXBIT1_IMPLEMENTED                { 0x0007FFFF, 0x000387F9, 0x000FFE7F, 0x001FFFF3 } /* Bit 1 of PMUX field */
#define PORT_PMUXBIT2_DEFAULT_VAL                { 0x00000000, 0x00000000, 0x000001E0, 0x0000000C } /* -- */
#define PORT_PMUXBIT2_IMPLEMENTED                { 0x001BFFFF, 0x00007FF9, 0x0000067F, 0x00003FC3 } /* Bit 2 of PMUX field */
#define PORT_PMUXBIT3_DEFAULT_VAL                { 0x00000000, 0x00000000, 0x00000000, 0x00000000 } /* -- */
#define PORT_PMUXBIT3_IMPLEMENTED                { 0x001FFFFF, 0x0003FFF9, 0x000BFE7F, 0x001FDFF3 } /* Bit 3 of PMUX field */
#define PORT_PMUXEN_DEFAULT_VAL                  { 0x00000000, 0x00000000, 0x000001E0, 0x00000000 } /* -- */
#define PORT_PMUXEN_IMPLEMENTED                  { 0x001FFFFF, 0x0003FFFF, 0x000FFFFF, 0x001FFFFF } /* PINCFG.PMUXEN bit */
#define PORT_PULLEN_DEFAULT_VAL                  { 0x00000000, 0x00000000, 0x00000000, 0x00000000 } /* -- */
#define PORT_PULLEN_IMPLEMENTED                  { 0x001FFFFF, 0x0003FFFF, 0x000FFFFF, 0x001FFFFF } /* PINCFG.PULLENRegistersImplemented */
#define PORT_SLEWLIM1_DEFAULT_VAL                { 0x00000000, 0x00000000, 0x00000000, 0x00000000 } /* -- */
#define PORT_SLEWLIM1_IMPLEMENTED                { 0x0007C07F, 0x00038078, 0x000FF87F, 0x001FCFC3 } /* PINCFG.SLEWLIM1RegistersImplemented */
#define PORT_SLEWLIM_DEFAULT_VAL                 { 0x00000000, 0x00000000, 0x00000000, 0x00000000 } /* -- */
#define PORT_SLEWLIM_IMPLEMENTED                 { 0x0007C07F, 0x00038078, 0x000FF87F, 0x001FCFC3 } /* PINCFG.SLEWLIM0RegistersImplemented */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */



#endif /* _PIC32CMGC00_PORT_INSTANCE_ */
