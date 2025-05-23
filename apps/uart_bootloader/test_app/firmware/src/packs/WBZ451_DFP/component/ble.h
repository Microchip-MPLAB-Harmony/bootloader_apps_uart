/*
 * Component description for BLE
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

/* file generated from device description file (ATDF) version 2023-10-17T09:04:59Z */
#ifndef _BZ45_BLE_COMPONENT_H_
#define _BZ45_BLE_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR BLE                                          */
/* ************************************************************************** */

/* -------- BLE_DPLL_RG1 : (BLE Offset: 0x4B8) (R/W 16)  -------- */
#define BLE_DPLL_RG1_DPLL_RG1BITS_Pos         _UINT16_(0)                                          /* (BLE_DPLL_RG1)  Position */
#define BLE_DPLL_RG1_DPLL_RG1BITS_Msk         (_UINT16_(0xFFFF) << BLE_DPLL_RG1_DPLL_RG1BITS_Pos)  /* (BLE_DPLL_RG1)  Mask */
#define BLE_DPLL_RG1_DPLL_RG1BITS(value)      (BLE_DPLL_RG1_DPLL_RG1BITS_Msk & (_UINT16_(value) << BLE_DPLL_RG1_DPLL_RG1BITS_Pos)) /* Assigment of value for DPLL_RG1BITS in the BLE_DPLL_RG1 register */
#define BLE_DPLL_RG1_Msk                      _UINT16_(0xFFFF)                                     /* (BLE_DPLL_RG1) Register Mask  */


/* -------- BLE_DPLL_RG2 : (BLE Offset: 0x4BA) (R/W 16)  -------- */
#define BLE_DPLL_RG2_DPLL_RG2BITS_Pos         _UINT16_(0)                                          /* (BLE_DPLL_RG2)  Position */
#define BLE_DPLL_RG2_DPLL_RG2BITS_Msk         (_UINT16_(0xFFFF) << BLE_DPLL_RG2_DPLL_RG2BITS_Pos)  /* (BLE_DPLL_RG2)  Mask */
#define BLE_DPLL_RG2_DPLL_RG2BITS(value)      (BLE_DPLL_RG2_DPLL_RG2BITS_Msk & (_UINT16_(value) << BLE_DPLL_RG2_DPLL_RG2BITS_Pos)) /* Assigment of value for DPLL_RG2BITS in the BLE_DPLL_RG2 register */
#define BLE_DPLL_RG2_Msk                      _UINT16_(0xFFFF)                                     /* (BLE_DPLL_RG2) Register Mask  */


/** \brief BLE register offsets definitions */
#define BLE_DPLL_RG1_REG_OFST          _UINT32_(0x4B8)     /* (BLE_DPLL_RG1)  Offset */
#define BLE_DPLL_RG2_REG_OFST          _UINT32_(0x4BA)     /* (BLE_DPLL_RG2)  Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief BLE register API structure */
typedef struct
{  /* BLE */
  __I   uint8_t                        Reserved1[0x4B8];
  __IO  uint16_t                       BLE_DPLL_RG1;       /**< Offset: 0x4B8 (R/W  16)  */
  __IO  uint16_t                       BLE_DPLL_RG2;       /**< Offset: 0x4BA (R/W  16)  */
} ble_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _BZ45_BLE_COMPONENT_H_ */
