/*
 * Component description for FUSES
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

/* file generated from device description file (ATDF) version 2023-08-02T16:53:21Z */
#ifndef _SAMG55_FUSES_COMPONENT_H_
#define _SAMG55_FUSES_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR FUSES                                        */
/* ************************************************************************** */

/* -------- FUSES_GPNVMBITS : (FUSES Offset: 0x00) (R/W 8) GPNVM Bits -------- */
#define FUSES_GPNVMBITS_SECURITY_BIT_Pos      _UINT8_(0)                                           /* (FUSES_GPNVMBITS) Security Bit Position */
#define FUSES_GPNVMBITS_SECURITY_BIT_Msk      (_UINT8_(0x1) << FUSES_GPNVMBITS_SECURITY_BIT_Pos)   /* (FUSES_GPNVMBITS) Security Bit Mask */
#define FUSES_GPNVMBITS_SECURITY_BIT(value)   (FUSES_GPNVMBITS_SECURITY_BIT_Msk & (_UINT8_(value) << FUSES_GPNVMBITS_SECURITY_BIT_Pos)) /* Assigment of value for SECURITY_BIT in the FUSES_GPNVMBITS register */
#define FUSES_GPNVMBITS_BOOT_MODE_Pos         _UINT8_(1)                                           /* (FUSES_GPNVMBITS) Boot Mode Selection Position */
#define FUSES_GPNVMBITS_BOOT_MODE_Msk         (_UINT8_(0x1) << FUSES_GPNVMBITS_BOOT_MODE_Pos)      /* (FUSES_GPNVMBITS) Boot Mode Selection Mask */
#define FUSES_GPNVMBITS_BOOT_MODE(value)      (FUSES_GPNVMBITS_BOOT_MODE_Msk & (_UINT8_(value) << FUSES_GPNVMBITS_BOOT_MODE_Pos)) /* Assigment of value for BOOT_MODE in the FUSES_GPNVMBITS register */
#define FUSES_GPNVMBITS_Msk                   _UINT8_(0x03)                                        /* (FUSES_GPNVMBITS) Register Mask  */


/** \brief FUSES register offsets definitions */
#define FUSES_GPNVMBITS_REG_OFST       _UINT32_(0x00)      /* (FUSES_GPNVMBITS) GPNVM Bits Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief GPNVMBITS register API structure */
typedef struct
{  /* GPNVM Bits */
  __IO  uint8_t                        FUSES_GPNVMBITS;    /**< Offset: 0x00 (R/W  8) GPNVM Bits */
} fuses_gpnvmbits_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMG55_FUSES_COMPONENT_H_ */
