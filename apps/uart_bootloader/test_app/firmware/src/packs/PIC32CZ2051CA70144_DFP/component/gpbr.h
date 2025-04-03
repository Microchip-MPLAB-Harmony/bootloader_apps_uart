/*
 * Component description for GPBR
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

/*  file generated from device description file (ATDF) version 2025-04-15T17:35:01Z  */
#ifndef _PIC32CZCA70_GPBR_COMPONENT_H_
#define _PIC32CZCA70_GPBR_COMPONENT_H_

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR GPBR                      */
/* ************************************************************************** */

/* -------- SYS_GPBR : (GPBR Offset: 0x00) (R/W 32) General Purpose Backup Register 0 -------- */
#define SYS_GPBR_GPBR_VALUE_Pos               _UINT32_(0)                                          /* (SYS_GPBR) Value of GPBR x Position */
#define SYS_GPBR_GPBR_VALUE_Msk               (_UINT32_(0xFFFFFFFF) << SYS_GPBR_GPBR_VALUE_Pos)    /* (SYS_GPBR) Value of GPBR x Mask */
#define SYS_GPBR_GPBR_VALUE(value)            (SYS_GPBR_GPBR_VALUE_Msk & (_UINT32_(value) << SYS_GPBR_GPBR_VALUE_Pos)) /* Assignment of value for GPBR_VALUE in the SYS_GPBR register */
#define SYS_GPBR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (SYS_GPBR) Register Mask  */


/* GPBR register offsets definitions */
#define SYS_GPBR_REG_OFST              _UINT32_(0x00)      /* (SYS_GPBR) General Purpose Backup Register 0 Offset */
#define SYS_GPBR0_REG_OFST             _UINT32_(0x00)      /* (SYS_GPBR0) General Purpose Backup Register 0 Offset */
#define SYS_GPBR1_REG_OFST             _UINT32_(0x04)      /* (SYS_GPBR1) General Purpose Backup Register 0 Offset */
#define SYS_GPBR2_REG_OFST             _UINT32_(0x08)      /* (SYS_GPBR2) General Purpose Backup Register 0 Offset */
#define SYS_GPBR3_REG_OFST             _UINT32_(0x0C)      /* (SYS_GPBR3) General Purpose Backup Register 0 Offset */
#define SYS_GPBR4_REG_OFST             _UINT32_(0x10)      /* (SYS_GPBR4) General Purpose Backup Register 0 Offset */
#define SYS_GPBR5_REG_OFST             _UINT32_(0x14)      /* (SYS_GPBR5) General Purpose Backup Register 0 Offset */
#define SYS_GPBR6_REG_OFST             _UINT32_(0x18)      /* (SYS_GPBR6) General Purpose Backup Register 0 Offset */
#define SYS_GPBR7_REG_OFST             _UINT32_(0x1C)      /* (SYS_GPBR7) General Purpose Backup Register 0 Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* GPBR register API structure */
typedef struct
{
  __IO  uint32_t                       SYS_GPBR[8];        /* Offset: 0x00 (R/W  32) General Purpose Backup Register 0 */
} gpbr_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CZCA70_GPBR_COMPONENT_H_ */
