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
