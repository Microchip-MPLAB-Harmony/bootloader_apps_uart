/*
 * Component description for BLE
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

/*  file generated from device description file (ATDF) version 2025-01-29T18:23:31Z  */
#ifndef _PIC32WM_BZ6_BLE_COMPONENT_H_
#define _PIC32WM_BZ6_BLE_COMPONENT_H_

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR BLE                       */
/* ************************************************************************** */

/* -------- BLE_DPLL_RG1 : (BLE Offset: 0x4B8) (R/W 16)  -------- */
#define BLE_DPLL_RG1_DPLL_RG1BITS_Pos         _UINT16_(0)                                          /* (BLE_DPLL_RG1)  Position */
#define BLE_DPLL_RG1_DPLL_RG1BITS_Msk         (_UINT16_(0xFFFF) << BLE_DPLL_RG1_DPLL_RG1BITS_Pos)  /* (BLE_DPLL_RG1)  Mask */
#define BLE_DPLL_RG1_DPLL_RG1BITS(value)      (BLE_DPLL_RG1_DPLL_RG1BITS_Msk & (_UINT16_(value) << BLE_DPLL_RG1_DPLL_RG1BITS_Pos)) /* Assignment of value for DPLL_RG1BITS in the BLE_DPLL_RG1 register */
#define BLE_DPLL_RG1_Msk                      _UINT16_(0xFFFF)                                     /* (BLE_DPLL_RG1) Register Mask  */


/* -------- BLE_DPLL_RG2 : (BLE Offset: 0x4BA) (R/W 16)  -------- */
#define BLE_DPLL_RG2_DPLL_RG2BITS_Pos         _UINT16_(0)                                          /* (BLE_DPLL_RG2)  Position */
#define BLE_DPLL_RG2_DPLL_RG2BITS_Msk         (_UINT16_(0xFFFF) << BLE_DPLL_RG2_DPLL_RG2BITS_Pos)  /* (BLE_DPLL_RG2)  Mask */
#define BLE_DPLL_RG2_DPLL_RG2BITS(value)      (BLE_DPLL_RG2_DPLL_RG2BITS_Msk & (_UINT16_(value) << BLE_DPLL_RG2_DPLL_RG2BITS_Pos)) /* Assignment of value for DPLL_RG2BITS in the BLE_DPLL_RG2 register */
#define BLE_DPLL_RG2_Msk                      _UINT16_(0xFFFF)                                     /* (BLE_DPLL_RG2) Register Mask  */


/* -------- BLE_SPI_WR_DATA : (BLE Offset: 0x1000) (R/W 16)  -------- */
#define BLE_SPI_WR_DATA_Msk                   _UINT16_(0x0000)                                     /* (BLE_SPI_WR_DATA) Register Mask  */


/* -------- BLE_SPI_REG_ADDR : (BLE Offset: 0x1002) (R/W 16)  -------- */
#define BLE_SPI_REG_ADDR_Msk                  _UINT16_(0x0000)                                     /* (BLE_SPI_REG_ADDR) Register Mask  */


/* -------- BLE_RFPWRMGMT : (BLE Offset: 0x1004) (R/W 32)  -------- */
#define BLE_RFPWRMGMT_xOCLK_EN_CFG_Pos        _UINT32_(0)                                          /* (BLE_RFPWRMGMT)  Position */
#define BLE_RFPWRMGMT_xOCLK_EN_CFG_Msk        (_UINT32_(0x1) << BLE_RFPWRMGMT_xOCLK_EN_CFG_Pos)    /* (BLE_RFPWRMGMT)  Mask */
#define BLE_RFPWRMGMT_xOCLK_EN_CFG(value)     (BLE_RFPWRMGMT_xOCLK_EN_CFG_Msk & (_UINT32_(value) << BLE_RFPWRMGMT_xOCLK_EN_CFG_Pos)) /* Assignment of value for xOCLK_EN_CFG in the BLE_RFPWRMGMT register */
#define BLE_RFPWRMGMT_BxTLEN_Pos              _UINT32_(1)                                          /* (BLE_RFPWRMGMT)  Position */
#define BLE_RFPWRMGMT_BxTLEN_Msk              (_UINT32_(0x1) << BLE_RFPWRMGMT_BxTLEN_Pos)          /* (BLE_RFPWRMGMT)  Mask */
#define BLE_RFPWRMGMT_BxTLEN(value)           (BLE_RFPWRMGMT_BxTLEN_Msk & (_UINT32_(value) << BLE_RFPWRMGMT_BxTLEN_Pos)) /* Assignment of value for BxTLEN in the BLE_RFPWRMGMT register */
#define BLE_RFPWRMGMT_RESERVED_4_Pos          _UINT32_(2)                                          /* (BLE_RFPWRMGMT)  Position */
#define BLE_RFPWRMGMT_RESERVED_4_Msk          (_UINT32_(0x1) << BLE_RFPWRMGMT_RESERVED_4_Pos)      /* (BLE_RFPWRMGMT)  Mask */
#define BLE_RFPWRMGMT_RESERVED_4(value)       (BLE_RFPWRMGMT_RESERVED_4_Msk & (_UINT32_(value) << BLE_RFPWRMGMT_RESERVED_4_Pos)) /* Assignment of value for RESERVED_4 in the BLE_RFPWRMGMT register */
#define BLE_RFPWRMGMT_RESERVED_3_Pos          _UINT32_(3)                                          /* (BLE_RFPWRMGMT)  Position */
#define BLE_RFPWRMGMT_RESERVED_3_Msk          (_UINT32_(0x1) << BLE_RFPWRMGMT_RESERVED_3_Pos)      /* (BLE_RFPWRMGMT)  Mask */
#define BLE_RFPWRMGMT_RESERVED_3(value)       (BLE_RFPWRMGMT_RESERVED_3_Msk & (_UINT32_(value) << BLE_RFPWRMGMT_RESERVED_3_Pos)) /* Assignment of value for RESERVED_3 in the BLE_RFPWRMGMT register */
#define BLE_RFPWRMGMT_BDCLK_POLARITY_Pos      _UINT32_(4)                                          /* (BLE_RFPWRMGMT)  Position */
#define BLE_RFPWRMGMT_BDCLK_POLARITY_Msk      (_UINT32_(0x1) << BLE_RFPWRMGMT_BDCLK_POLARITY_Pos)  /* (BLE_RFPWRMGMT)  Mask */
#define BLE_RFPWRMGMT_BDCLK_POLARITY(value)   (BLE_RFPWRMGMT_BDCLK_POLARITY_Msk & (_UINT32_(value) << BLE_RFPWRMGMT_BDCLK_POLARITY_Pos)) /* Assignment of value for BDCLK_POLARITY in the BLE_RFPWRMGMT register */
#define BLE_RFPWRMGMT_BENxOANA_Pos            _UINT32_(5)                                          /* (BLE_RFPWRMGMT)  Position */
#define BLE_RFPWRMGMT_BENxOANA_Msk            (_UINT32_(0x1) << BLE_RFPWRMGMT_BENxOANA_Pos)        /* (BLE_RFPWRMGMT)  Mask */
#define BLE_RFPWRMGMT_BENxOANA(value)         (BLE_RFPWRMGMT_BENxOANA_Msk & (_UINT32_(value) << BLE_RFPWRMGMT_BENxOANA_Pos)) /* Assignment of value for BENxOANA in the BLE_RFPWRMGMT register */
#define BLE_RFPWRMGMT_KEEP_ACLB_SPI_ACCESS_ON_Pos _UINT32_(6)                                          /* (BLE_RFPWRMGMT)  Position */
#define BLE_RFPWRMGMT_KEEP_ACLB_SPI_ACCESS_ON_Msk (_UINT32_(0x1) << BLE_RFPWRMGMT_KEEP_ACLB_SPI_ACCESS_ON_Pos) /* (BLE_RFPWRMGMT)  Mask */
#define BLE_RFPWRMGMT_KEEP_ACLB_SPI_ACCESS_ON(value) (BLE_RFPWRMGMT_KEEP_ACLB_SPI_ACCESS_ON_Msk & (_UINT32_(value) << BLE_RFPWRMGMT_KEEP_ACLB_SPI_ACCESS_ON_Pos)) /* Assignment of value for KEEP_ACLB_SPI_ACCESS_ON in the BLE_RFPWRMGMT register */
#define BLE_RFPWRMGMT_FW_CONTROLS_MAIN_CLK_GATING_Pos _UINT32_(7)                                          /* (BLE_RFPWRMGMT)  Position */
#define BLE_RFPWRMGMT_FW_CONTROLS_MAIN_CLK_GATING_Msk (_UINT32_(0x1) << BLE_RFPWRMGMT_FW_CONTROLS_MAIN_CLK_GATING_Pos) /* (BLE_RFPWRMGMT)  Mask */
#define BLE_RFPWRMGMT_FW_CONTROLS_MAIN_CLK_GATING(value) (BLE_RFPWRMGMT_FW_CONTROLS_MAIN_CLK_GATING_Msk & (_UINT32_(value) << BLE_RFPWRMGMT_FW_CONTROLS_MAIN_CLK_GATING_Pos)) /* Assignment of value for FW_CONTROLS_MAIN_CLK_GATING in the BLE_RFPWRMGMT register */
#define BLE_RFPWRMGMT_MAIN_CLK_EN_Pos         _UINT32_(8)                                          /* (BLE_RFPWRMGMT)  Position */
#define BLE_RFPWRMGMT_MAIN_CLK_EN_Msk         (_UINT32_(0x1) << BLE_RFPWRMGMT_MAIN_CLK_EN_Pos)     /* (BLE_RFPWRMGMT)  Mask */
#define BLE_RFPWRMGMT_MAIN_CLK_EN(value)      (BLE_RFPWRMGMT_MAIN_CLK_EN_Msk & (_UINT32_(value) << BLE_RFPWRMGMT_MAIN_CLK_EN_Pos)) /* Assignment of value for MAIN_CLK_EN in the BLE_RFPWRMGMT register */
#define BLE_RFPWRMGMT_RESERVED_2_Pos          _UINT32_(9)                                          /* (BLE_RFPWRMGMT)  Position */
#define BLE_RFPWRMGMT_RESERVED_2_Msk          (_UINT32_(0x1F) << BLE_RFPWRMGMT_RESERVED_2_Pos)     /* (BLE_RFPWRMGMT)  Mask */
#define BLE_RFPWRMGMT_RESERVED_2(value)       (BLE_RFPWRMGMT_RESERVED_2_Msk & (_UINT32_(value) << BLE_RFPWRMGMT_RESERVED_2_Pos)) /* Assignment of value for RESERVED_2 in the BLE_RFPWRMGMT register */
#define BLE_RFPWRMGMT_NO_RF_IDLE_Pos          _UINT32_(14)                                         /* (BLE_RFPWRMGMT)  Position */
#define BLE_RFPWRMGMT_NO_RF_IDLE_Msk          (_UINT32_(0x1) << BLE_RFPWRMGMT_NO_RF_IDLE_Pos)      /* (BLE_RFPWRMGMT)  Mask */
#define BLE_RFPWRMGMT_NO_RF_IDLE(value)       (BLE_RFPWRMGMT_NO_RF_IDLE_Msk & (_UINT32_(value) << BLE_RFPWRMGMT_NO_RF_IDLE_Pos)) /* Assignment of value for NO_RF_IDLE in the BLE_RFPWRMGMT register */
#define BLE_RFPWRMGMT_RESERVED_1_Pos          _UINT32_(15)                                         /* (BLE_RFPWRMGMT)  Position */
#define BLE_RFPWRMGMT_RESERVED_1_Msk          (_UINT32_(0x1) << BLE_RFPWRMGMT_RESERVED_1_Pos)      /* (BLE_RFPWRMGMT)  Mask */
#define BLE_RFPWRMGMT_RESERVED_1(value)       (BLE_RFPWRMGMT_RESERVED_1_Msk & (_UINT32_(value) << BLE_RFPWRMGMT_RESERVED_1_Pos)) /* Assignment of value for RESERVED_1 in the BLE_RFPWRMGMT register */
#define BLE_RFPWRMGMT_RESERVED_7_Pos          _UINT32_(16)                                         /* (BLE_RFPWRMGMT)  Position */
#define BLE_RFPWRMGMT_RESERVED_7_Msk          (_UINT32_(0x3) << BLE_RFPWRMGMT_RESERVED_7_Pos)      /* (BLE_RFPWRMGMT)  Mask */
#define BLE_RFPWRMGMT_RESERVED_7(value)       (BLE_RFPWRMGMT_RESERVED_7_Msk & (_UINT32_(value) << BLE_RFPWRMGMT_RESERVED_7_Pos)) /* Assignment of value for RESERVED_7 in the BLE_RFPWRMGMT register */
#define BLE_RFPWRMGMT_REG_RF_READ_Pos         _UINT32_(18)                                         /* (BLE_RFPWRMGMT)  Position */
#define BLE_RFPWRMGMT_REG_RF_READ_Msk         (_UINT32_(0x1) << BLE_RFPWRMGMT_REG_RF_READ_Pos)     /* (BLE_RFPWRMGMT)  Mask */
#define BLE_RFPWRMGMT_REG_RF_READ(value)      (BLE_RFPWRMGMT_REG_RF_READ_Msk & (_UINT32_(value) << BLE_RFPWRMGMT_REG_RF_READ_Pos)) /* Assignment of value for REG_RF_READ in the BLE_RFPWRMGMT register */
#define BLE_RFPWRMGMT_RESERVED_6_Pos          _UINT32_(19)                                         /* (BLE_RFPWRMGMT)  Position */
#define BLE_RFPWRMGMT_RESERVED_6_Msk          (_UINT32_(0x1) << BLE_RFPWRMGMT_RESERVED_6_Pos)      /* (BLE_RFPWRMGMT)  Mask */
#define BLE_RFPWRMGMT_RESERVED_6(value)       (BLE_RFPWRMGMT_RESERVED_6_Msk & (_UINT32_(value) << BLE_RFPWRMGMT_RESERVED_6_Pos)) /* Assignment of value for RESERVED_6 in the BLE_RFPWRMGMT register */
#define BLE_RFPWRMGMT_REG_RF_PROG_Pos         _UINT32_(20)                                         /* (BLE_RFPWRMGMT)  Position */
#define BLE_RFPWRMGMT_REG_RF_PROG_Msk         (_UINT32_(0x1) << BLE_RFPWRMGMT_REG_RF_PROG_Pos)     /* (BLE_RFPWRMGMT)  Mask */
#define BLE_RFPWRMGMT_REG_RF_PROG(value)      (BLE_RFPWRMGMT_REG_RF_PROG_Msk & (_UINT32_(value) << BLE_RFPWRMGMT_REG_RF_PROG_Pos)) /* Assignment of value for REG_RF_PROG in the BLE_RFPWRMGMT register */
#define BLE_RFPWRMGMT_RESERVED_5_Pos          _UINT32_(21)                                         /* (BLE_RFPWRMGMT)  Position */
#define BLE_RFPWRMGMT_RESERVED_5_Msk          (_UINT32_(0x7FF) << BLE_RFPWRMGMT_RESERVED_5_Pos)    /* (BLE_RFPWRMGMT)  Mask */
#define BLE_RFPWRMGMT_RESERVED_5(value)       (BLE_RFPWRMGMT_RESERVED_5_Msk & (_UINT32_(value) << BLE_RFPWRMGMT_RESERVED_5_Pos)) /* Assignment of value for RESERVED_5 in the BLE_RFPWRMGMT register */
#define BLE_RFPWRMGMT_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (BLE_RFPWRMGMT) Register Mask  */


/* BLE register offsets definitions */
#define BLE_DPLL_RG1_REG_OFST          _UINT32_(0x4B8)     /* (BLE_DPLL_RG1)  Offset */
#define BLE_DPLL_RG2_REG_OFST          _UINT32_(0x4BA)     /* (BLE_DPLL_RG2)  Offset */
#define BLE_SPI_WR_DATA_REG_OFST       _UINT32_(0x1000)    /* (BLE_SPI_WR_DATA)  Offset */
#define BLE_SPI_REG_ADDR_REG_OFST      _UINT32_(0x1002)    /* (BLE_SPI_REG_ADDR)  Offset */
#define BLE_RFPWRMGMT_REG_OFST         _UINT32_(0x1004)    /* (BLE_RFPWRMGMT)  Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* BLE register API structure */
typedef struct
{  /* BLE */
  __I   uint8_t                        Reserved1[0x4B8];
  __IO  uint16_t                       BLE_DPLL_RG1;       /* Offset: 0x4B8 (R/W  16)  */
  __IO  uint16_t                       BLE_DPLL_RG2;       /* Offset: 0x4BA (R/W  16)  */
  __I   uint8_t                        Reserved2[0xB44];
  __IO  uint16_t                       BLE_SPI_WR_DATA;    /* Offset: 0x1000 (R/W  16)  */
  __IO  uint16_t                       BLE_SPI_REG_ADDR;   /* Offset: 0x1002 (R/W  16)  */
  __IO  uint32_t                       BLE_RFPWRMGMT;      /* Offset: 0x1004 (R/W  32)  */
} ble_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32WM_BZ6_BLE_COMPONENT_H_ */
