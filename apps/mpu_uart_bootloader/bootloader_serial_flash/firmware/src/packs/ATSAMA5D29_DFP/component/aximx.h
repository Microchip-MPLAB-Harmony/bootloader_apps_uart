/*
 * Component description for AXIMX
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

/* file generated from device description file (ATDF) version 2024-06-24T14:43:55Z */
#ifndef _SAMA5D2_AXIMX_COMPONENT_H_
#define _SAMA5D2_AXIMX_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR AXIMX                                        */
/* ************************************************************************** */

/* -------- AXIMX_REMAP : (AXIMX Offset: 0x00) ( /W 32) AXI Matrix Remap Register -------- */
#define AXIMX_REMAP_REMAP0_Pos                _UINT32_(0)                                          /* (AXIMX_REMAP) Remap State 0 Position */
#define AXIMX_REMAP_REMAP0_Msk                (_UINT32_(0x1) << AXIMX_REMAP_REMAP0_Pos)            /* (AXIMX_REMAP) Remap State 0 Mask */
#define AXIMX_REMAP_REMAP0(value)             (AXIMX_REMAP_REMAP0_Msk & (_UINT32_(value) << AXIMX_REMAP_REMAP0_Pos)) /* Assigment of value for REMAP0 in the AXIMX_REMAP register */
#define AXIMX_REMAP_Msk                       _UINT32_(0x00000001)                                 /* (AXIMX_REMAP) Register Mask  */

#define AXIMX_REMAP_REMAP_Pos                 _UINT32_(0)                                          /* (AXIMX_REMAP Position) Remap State x */
#define AXIMX_REMAP_REMAP_Msk                 (_UINT32_(0x1) << AXIMX_REMAP_REMAP_Pos)             /* (AXIMX_REMAP Mask) REMAP */
#define AXIMX_REMAP_REMAP(value)              (AXIMX_REMAP_REMAP_Msk & (_UINT32_(value) << AXIMX_REMAP_REMAP_Pos)) 

/** \brief AXIMX register offsets definitions */
#define AXIMX_REMAP_REG_OFST           _UINT32_(0x00)      /* (AXIMX_REMAP) AXI Matrix Remap Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief AXIMX register API structure */
typedef struct
{
  __O   uint32_t                       AXIMX_REMAP;        /**< Offset: 0x00 ( /W  32) AXI Matrix Remap Register */
} aximx_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_AXIMX_COMPONENT_H_ */
