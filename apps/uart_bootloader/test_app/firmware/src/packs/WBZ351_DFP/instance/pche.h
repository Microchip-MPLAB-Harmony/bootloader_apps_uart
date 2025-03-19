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
#ifndef _WBZ35_PCHE_INSTANCE_
#define _WBZ35_PCHE_INSTANCE_


/* ========== Instance Parameter definitions for PCHE peripheral ========== */
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


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define PCHE_CHE_TAG_MASK                        0xFD00_000F 
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */



#endif /* _WBZ35_PCHE_INSTANCE_ */
