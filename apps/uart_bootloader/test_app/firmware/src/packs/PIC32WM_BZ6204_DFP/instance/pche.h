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
#ifndef _PIC32WM_BZ6_PCHE_INSTANCE_
#define _PIC32WM_BZ6_PCHE_INSTANCE_


/* ========== Instance Parameter definitions for PCHE peripheral ========== */
#define PCHE_CHE_TAG_MASK                        (0xFD00000F) 
#define PCHE_DCHE_PRIORITY                       (0)        /* dCache has equal priority with iCache and aCache */
#define PCHE_FLOP_BASED_CACHE_ARRAY_A            (1)        /* Subject to Change / Design Legwork is needed */
#define PCHE_FLOP_BASED_CACHE_ARRAY_D            (1)        /* Subject to Change / Design Legwork is needed */
#define PCHE_FLOP_BASED_CACHE_ARRAY_I            (1)        /* Subject to Change / Design Legwork is needed */
#define PCHE_NUM_CL_A                            (2)        
#define PCHE_NUM_CL_D                            (2)        
#define PCHE_NUM_CL_I                            (4)        
#define PCHE_NUM_INTS                            (1)        /* ECC present */
#define PCHE_PFM_ECC_PRESENT                     (1)        /* ECC present */
#define PCHE_PFM_RDATA_MSB                       (255)      /* bit flash data and 16-byte cache lines */
#define PCHE_UPB_ADDRL                           (0x2400)   

#endif /* _PIC32WM_BZ6_PCHE_INSTANCE_ */
