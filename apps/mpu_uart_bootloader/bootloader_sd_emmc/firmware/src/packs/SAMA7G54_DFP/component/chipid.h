/*
 * Component description for CHIPID
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

/*      file generated from device description file (ATDF) version None       */
#ifndef _SAMA7G5_CHIPID_COMPONENT_H_
#define _SAMA7G5_CHIPID_COMPONENT_H_

/* ************************************************************************** */
/*                     SOFTWARE API DEFINITION FOR CHIPID                     */
/* ************************************************************************** */

/* -------- CHIPID_CIDR : (CHIPID Offset: 0x00) ( R/ 32) Chip ID Register -------- */
#define CHIPID_CIDR_RESETVALUE                _UINT32_(0x80162111)                                 /*  (CHIPID_CIDR) Chip ID Register  Reset Value */

#define CHIPID_CIDR_VERSION_Pos               _UINT32_(0)                                          /* (CHIPID_CIDR) Version of the Device Position */
#define CHIPID_CIDR_VERSION_Msk               (_UINT32_(0xF) << CHIPID_CIDR_VERSION_Pos)           /* (CHIPID_CIDR) Version of the Device Mask */
#define CHIPID_CIDR_VERSION(value)            (CHIPID_CIDR_VERSION_Msk & (_UINT32_(value) << CHIPID_CIDR_VERSION_Pos)) /* Assignment of value for VERSION in the CHIPID_CIDR register */
#define CHIPID_CIDR_ONE_Pos                   _UINT32_(4)                                          /* (CHIPID_CIDR) Must be at '1' Position */
#define CHIPID_CIDR_ONE_Msk                   (_UINT32_(0x1) << CHIPID_CIDR_ONE_Pos)               /* (CHIPID_CIDR) Must be at '1' Mask */
#define CHIPID_CIDR_ONE(value)                (CHIPID_CIDR_ONE_Msk & (_UINT32_(value) << CHIPID_CIDR_ONE_Pos)) /* Assignment of value for ONE in the CHIPID_CIDR register */
#define CHIPID_CIDR_ID_Pos                    _UINT32_(5)                                          /* (CHIPID_CIDR) Product ID Position */
#define CHIPID_CIDR_ID_Msk                    (_UINT32_(0x7FFFFF) << CHIPID_CIDR_ID_Pos)           /* (CHIPID_CIDR) Product ID Mask */
#define CHIPID_CIDR_ID(value)                 (CHIPID_CIDR_ID_Msk & (_UINT32_(value) << CHIPID_CIDR_ID_Pos)) /* Assignment of value for ID in the CHIPID_CIDR register */
#define CHIPID_CIDR_EXT_Pos                   _UINT32_(31)                                         /* (CHIPID_CIDR) Extension Flag Position */
#define CHIPID_CIDR_EXT_Msk                   (_UINT32_(0x1) << CHIPID_CIDR_EXT_Pos)               /* (CHIPID_CIDR) Extension Flag Mask */
#define CHIPID_CIDR_EXT(value)                (CHIPID_CIDR_EXT_Msk & (_UINT32_(value) << CHIPID_CIDR_EXT_Pos)) /* Assignment of value for EXT in the CHIPID_CIDR register */
#define   CHIPID_CIDR_EXT_0_Val               _UINT32_(0x0)                                        /* (CHIPID_CIDR) Chip ID has a single register definition without extension.  */
#define   CHIPID_CIDR_EXT_1_Val               _UINT32_(0x1)                                        /* (CHIPID_CIDR) An extended Chip ID exists.  */
#define CHIPID_CIDR_EXT_0                     (CHIPID_CIDR_EXT_0_Val << CHIPID_CIDR_EXT_Pos)       /* (CHIPID_CIDR) Chip ID has a single register definition without extension. Position */
#define CHIPID_CIDR_EXT_1                     (CHIPID_CIDR_EXT_1_Val << CHIPID_CIDR_EXT_Pos)       /* (CHIPID_CIDR) An extended Chip ID exists. Position */
#define CHIPID_CIDR_Msk                       _UINT32_(0x8FFFFFFF)                                 /* (CHIPID_CIDR) Register Mask  */


/* -------- CHIPID_EXID : (CHIPID Offset: 0x04) ( R/ 32) Chip ID Extension Register -------- */
#define CHIPID_EXID_RESETVALUE                _UINT32_(0x28)                                       /*  (CHIPID_EXID) Chip ID Extension Register  Reset Value */

#define CHIPID_EXID_EXID_Pos                  _UINT32_(0)                                          /* (CHIPID_EXID) Chip ID Extension Position */
#define CHIPID_EXID_EXID_Msk                  (_UINT32_(0xFFFFFFFF) << CHIPID_EXID_EXID_Pos)       /* (CHIPID_EXID) Chip ID Extension Mask */
#define CHIPID_EXID_EXID(value)               (CHIPID_EXID_EXID_Msk & (_UINT32_(value) << CHIPID_EXID_EXID_Pos)) /* Assignment of value for EXID in the CHIPID_EXID register */
#define CHIPID_EXID_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (CHIPID_EXID) Register Mask  */


/* CHIPID register offsets definitions */
#define CHIPID_CIDR_REG_OFST           _UINT32_(0x00)      /* (CHIPID_CIDR) Chip ID Register Offset */
#define CHIPID_EXID_REG_OFST           _UINT32_(0x04)      /* (CHIPID_EXID) Chip ID Extension Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* CHIPID register API structure */
typedef struct
{  /* Chip Identifier */
  __I   uint32_t                       CHIPID_CIDR;        /* Offset: 0x00 (R/   32) Chip ID Register */
  __I   uint32_t                       CHIPID_EXID;        /* Offset: 0x04 (R/   32) Chip ID Extension Register */
} chipid_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G5_CHIPID_COMPONENT_H_ */
