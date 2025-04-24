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
#ifndef _PIC32WM_BZ6_ROT_INSTANCE_
#define _PIC32WM_BZ6_ROT_INSTANCE_


/* ========== Instance Parameter definitions for ROT peripheral ========== */
#define ROT_CAL_NUM                              (0)        /* Number of CAL bits */
#define ROT_EXT_VDDQ_SW                          (1)        
#define ROT_MACRO_AUX_IN_WIDTH                   (4)        
#define ROT_NUM_FUSE_BLKS                        (3)        /* CAL bits and die info a part of the NVR region */
#define ROT_PB_ADDRH                             (0x3FF)    /* PB end address */
#define ROT_PB_ADDRL                             (0x300)    /* PB start address */
#define ROT_PB_WAIT_ROM                          (0)        
#define ROT_ROM_SIZE                             (64)       /* In Kbytes */
#define ROT_RST_CAL_BITS                         (0)        /* Reset value of CAL bits */
#define ROT_START_OSC_PERIOD                     (125)      
#define ROT_SYMMETRIC_SECURE_BOOT                (0)        /* Secure boot using ECCDSA authentication */
#define ROT_TPWRUP_VDDQ_NS                       (4000)     

#endif /* _PIC32WM_BZ6_ROT_INSTANCE_ */
