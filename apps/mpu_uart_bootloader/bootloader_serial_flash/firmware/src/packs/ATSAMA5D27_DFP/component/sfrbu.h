/*
 * Component description for SFRBU
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
#ifndef _SAMA5D2_SFRBU_COMPONENT_H_
#define _SAMA5D2_SFRBU_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SFRBU                                        */
/* ************************************************************************** */

/* -------- SFRBU_PSWBUCTRL : (SFRBU Offset: 0x00) (R/W 32) Power Switch BU Control Register -------- */
#define SFRBU_PSWBUCTRL_SCTRL_Pos             _UINT32_(0)                                          /* (SFRBU_PSWBUCTRL) Power Switch BU Software Control Position */
#define SFRBU_PSWBUCTRL_SCTRL_Msk             (_UINT32_(0x1) << SFRBU_PSWBUCTRL_SCTRL_Pos)         /* (SFRBU_PSWBUCTRL) Power Switch BU Software Control Mask */
#define SFRBU_PSWBUCTRL_SCTRL(value)          (SFRBU_PSWBUCTRL_SCTRL_Msk & (_UINT32_(value) << SFRBU_PSWBUCTRL_SCTRL_Pos)) /* Assigment of value for SCTRL in the SFRBU_PSWBUCTRL register */
#define SFRBU_PSWBUCTRL_SSWCTRL_Pos           _UINT32_(1)                                          /* (SFRBU_PSWBUCTRL) Power Switch BU Source Selection Position */
#define SFRBU_PSWBUCTRL_SSWCTRL_Msk           (_UINT32_(0x1) << SFRBU_PSWBUCTRL_SSWCTRL_Pos)       /* (SFRBU_PSWBUCTRL) Power Switch BU Source Selection Mask */
#define SFRBU_PSWBUCTRL_SSWCTRL(value)        (SFRBU_PSWBUCTRL_SSWCTRL_Msk & (_UINT32_(value) << SFRBU_PSWBUCTRL_SSWCTRL_Pos)) /* Assigment of value for SSWCTRL in the SFRBU_PSWBUCTRL register */
#define SFRBU_PSWBUCTRL_SMCTRL_Pos            _UINT32_(2)                                          /* (SFRBU_PSWBUCTRL) Allow Power Switch BU Control by Security Module Autobackup (Hardware) Position */
#define SFRBU_PSWBUCTRL_SMCTRL_Msk            (_UINT32_(0x1) << SFRBU_PSWBUCTRL_SMCTRL_Pos)        /* (SFRBU_PSWBUCTRL) Allow Power Switch BU Control by Security Module Autobackup (Hardware) Mask */
#define SFRBU_PSWBUCTRL_SMCTRL(value)         (SFRBU_PSWBUCTRL_SMCTRL_Msk & (_UINT32_(value) << SFRBU_PSWBUCTRL_SMCTRL_Pos)) /* Assigment of value for SMCTRL in the SFRBU_PSWBUCTRL register */
#define SFRBU_PSWBUCTRL_STATE_Pos             _UINT32_(3)                                          /* (SFRBU_PSWBUCTRL) Power Switch BU state (Read-only) Position */
#define SFRBU_PSWBUCTRL_STATE_Msk             (_UINT32_(0x1) << SFRBU_PSWBUCTRL_STATE_Pos)         /* (SFRBU_PSWBUCTRL) Power Switch BU state (Read-only) Mask */
#define SFRBU_PSWBUCTRL_STATE(value)          (SFRBU_PSWBUCTRL_STATE_Msk & (_UINT32_(value) << SFRBU_PSWBUCTRL_STATE_Pos)) /* Assigment of value for STATE in the SFRBU_PSWBUCTRL register */
#define SFRBU_PSWBUCTRL_KEYPSWMODE_Pos        _UINT32_(8)                                          /* (SFRBU_PSWBUCTRL)  Position */
#define SFRBU_PSWBUCTRL_KEYPSWMODE_Msk        (_UINT32_(0xFFFFFF) << SFRBU_PSWBUCTRL_KEYPSWMODE_Pos) /* (SFRBU_PSWBUCTRL)  Mask */
#define SFRBU_PSWBUCTRL_KEYPSWMODE(value)     (SFRBU_PSWBUCTRL_KEYPSWMODE_Msk & (_UINT32_(value) << SFRBU_PSWBUCTRL_KEYPSWMODE_Pos)) /* Assigment of value for KEYPSWMODE in the SFRBU_PSWBUCTRL register */
#define SFRBU_PSWBUCTRL_Msk                   _UINT32_(0xFFFFFF0F)                                 /* (SFRBU_PSWBUCTRL) Register Mask  */


/* -------- SFRBU_TSRANGECFG : (SFRBU Offset: 0x04) (R/W 32) TS Range Configuration Register -------- */
#define SFRBU_TSRANGECFG_TSHRSEL_Pos          _UINT32_(0)                                          /* (SFRBU_TSRANGECFG) Temperature Sensor Range Selection Position */
#define SFRBU_TSRANGECFG_TSHRSEL_Msk          (_UINT32_(0x1) << SFRBU_TSRANGECFG_TSHRSEL_Pos)      /* (SFRBU_TSRANGECFG) Temperature Sensor Range Selection Mask */
#define SFRBU_TSRANGECFG_TSHRSEL(value)       (SFRBU_TSRANGECFG_TSHRSEL_Msk & (_UINT32_(value) << SFRBU_TSRANGECFG_TSHRSEL_Pos)) /* Assigment of value for TSHRSEL in the SFRBU_TSRANGECFG register */
#define SFRBU_TSRANGECFG_Msk                  _UINT32_(0x00000001)                                 /* (SFRBU_TSRANGECFG) Register Mask  */


/* -------- SFRBU_DDRBUMCR : (SFRBU Offset: 0x10) (R/W 32) DDR BU Mode Control Register -------- */
#define SFRBU_DDRBUMCR_BUMEN_Pos              _UINT32_(0)                                          /* (SFRBU_DDRBUMCR) DDR BU Mode Enable Position */
#define SFRBU_DDRBUMCR_BUMEN_Msk              (_UINT32_(0x1) << SFRBU_DDRBUMCR_BUMEN_Pos)          /* (SFRBU_DDRBUMCR) DDR BU Mode Enable Mask */
#define SFRBU_DDRBUMCR_BUMEN(value)           (SFRBU_DDRBUMCR_BUMEN_Msk & (_UINT32_(value) << SFRBU_DDRBUMCR_BUMEN_Pos)) /* Assigment of value for BUMEN in the SFRBU_DDRBUMCR register */
#define SFRBU_DDRBUMCR_Msk                    _UINT32_(0x00000001)                                 /* (SFRBU_DDRBUMCR) Register Mask  */


/* -------- SFRBU_RXLPPUCR : (SFRBU Offset: 0x14) (R/W 32) RXLP Pull-Up Control Register -------- */
#define SFRBU_RXLPPUCR_RXDPUCTRL_Pos          _UINT32_(0)                                          /* (SFRBU_RXLPPUCR) RXLP RXD Pull-Up Control Position */
#define SFRBU_RXLPPUCR_RXDPUCTRL_Msk          (_UINT32_(0x1) << SFRBU_RXLPPUCR_RXDPUCTRL_Pos)      /* (SFRBU_RXLPPUCR) RXLP RXD Pull-Up Control Mask */
#define SFRBU_RXLPPUCR_RXDPUCTRL(value)       (SFRBU_RXLPPUCR_RXDPUCTRL_Msk & (_UINT32_(value) << SFRBU_RXLPPUCR_RXDPUCTRL_Pos)) /* Assigment of value for RXDPUCTRL in the SFRBU_RXLPPUCR register */
#define SFRBU_RXLPPUCR_Msk                    _UINT32_(0x00000001)                                 /* (SFRBU_RXLPPUCR) Register Mask  */


/** \brief SFRBU register offsets definitions */
#define SFRBU_PSWBUCTRL_REG_OFST       _UINT32_(0x00)      /* (SFRBU_PSWBUCTRL) Power Switch BU Control Register Offset */
#define SFRBU_TSRANGECFG_REG_OFST      _UINT32_(0x04)      /* (SFRBU_TSRANGECFG) TS Range Configuration Register Offset */
#define SFRBU_DDRBUMCR_REG_OFST        _UINT32_(0x10)      /* (SFRBU_DDRBUMCR) DDR BU Mode Control Register Offset */
#define SFRBU_RXLPPUCR_REG_OFST        _UINT32_(0x14)      /* (SFRBU_RXLPPUCR) RXLP Pull-Up Control Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SFRBU register API structure */
typedef struct
{
  __IO  uint32_t                       SFRBU_PSWBUCTRL;    /**< Offset: 0x00 (R/W  32) Power Switch BU Control Register */
  __IO  uint32_t                       SFRBU_TSRANGECFG;   /**< Offset: 0x04 (R/W  32) TS Range Configuration Register */
  __I   uint8_t                        Reserved1[0x08];
  __IO  uint32_t                       SFRBU_DDRBUMCR;     /**< Offset: 0x10 (R/W  32) DDR BU Mode Control Register */
  __IO  uint32_t                       SFRBU_RXLPPUCR;     /**< Offset: 0x14 (R/W  32) RXLP Pull-Up Control Register */
} sfrbu_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_SFRBU_COMPONENT_H_ */
