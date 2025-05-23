/*
 * Component description for BROMC
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

/*  file generated from device description file (ATDF) version 2024-11-05T16:47:43Z  */
#ifndef _PIC32CMGC00_BROMC_COMPONENT_H_
#define _PIC32CMGC00_BROMC_COMPONENT_H_

/* ************************************************************************** */
/*                     SOFTWARE API DEFINITION FOR BROMC                      */
/* ************************************************************************** */

/* -------- BROMC_CTRLA : (BROMC Offset: 0x00) (R/W 32) Control A REGISTER -------- */
#define BROMC_CTRLA_RESETVALUE                _UINT32_(0x02)                                       /*  (BROMC_CTRLA) Control A REGISTER  Reset Value */

#define BROMC_CTRLA_SWRST_Pos                 _UINT32_(0)                                          /* (BROMC_CTRLA) Software Reset bit Position */
#define BROMC_CTRLA_SWRST_Msk                 (_UINT32_(0x1) << BROMC_CTRLA_SWRST_Pos)             /* (BROMC_CTRLA) Software Reset bit Mask */
#define BROMC_CTRLA_SWRST(value)              (BROMC_CTRLA_SWRST_Msk & (_UINT32_(value) << BROMC_CTRLA_SWRST_Pos)) /* Assignment of value for SWRST in the BROMC_CTRLA register */
#define BROMC_CTRLA_ENABLE_Pos                _UINT32_(1)                                          /* (BROMC_CTRLA) Enable bit Position */
#define BROMC_CTRLA_ENABLE_Msk                (_UINT32_(0x1) << BROMC_CTRLA_ENABLE_Pos)            /* (BROMC_CTRLA) Enable bit Mask */
#define BROMC_CTRLA_ENABLE(value)             (BROMC_CTRLA_ENABLE_Msk & (_UINT32_(value) << BROMC_CTRLA_ENABLE_Pos)) /* Assignment of value for ENABLE in the BROMC_CTRLA register */
#define   BROMC_CTRLA_ENABLE_0_Val            _UINT32_(0x0)                                        /* (BROMC_CTRLA) Disable ROM read access and power down the ROM. The ROM PGEN input is driven high. The ROM will clamp outputs to 1 and disable all internal current sinks. Refer to the ROM compiler specification for details on powering down the ROM.  */
#define   BROMC_CTRLA_ENABLE_1_Val            _UINT32_(0x1)                                        /* (BROMC_CTRLA) Enable ROM read access, power up the ROM. The ROM PGEN input is driven low.  */
#define BROMC_CTRLA_ENABLE_0                  (BROMC_CTRLA_ENABLE_0_Val << BROMC_CTRLA_ENABLE_Pos) /* (BROMC_CTRLA) Disable ROM read access and power down the ROM. The ROM PGEN input is driven high. The ROM will clamp outputs to 1 and disable all internal current sinks. Refer to the ROM compiler specification for details on powering down the ROM. Position */
#define BROMC_CTRLA_ENABLE_1                  (BROMC_CTRLA_ENABLE_1_Val << BROMC_CTRLA_ENABLE_Pos) /* (BROMC_CTRLA) Enable ROM read access, power up the ROM. The ROM PGEN input is driven low. Position */
#define BROMC_CTRLA_PRIV_Pos                  _UINT32_(2)                                          /* (BROMC_CTRLA) Privileged Access Only Position */
#define BROMC_CTRLA_PRIV_Msk                  (_UINT32_(0x1) << BROMC_CTRLA_PRIV_Pos)              /* (BROMC_CTRLA) Privileged Access Only Mask */
#define BROMC_CTRLA_PRIV(value)               (BROMC_CTRLA_PRIV_Msk & (_UINT32_(value) << BROMC_CTRLA_PRIV_Pos)) /* Assignment of value for PRIV in the BROMC_CTRLA register */
#define   BROMC_CTRLA_PRIV_0_Val              _UINT32_(0x0)                                        /* (BROMC_CTRLA) Macro register accessible in privileged and unprivileged modes  */
#define   BROMC_CTRLA_PRIV_1_Val              _UINT32_(0x1)                                        /* (BROMC_CTRLA) Macro registers only accessible in privileged mode  */
#define BROMC_CTRLA_PRIV_0                    (BROMC_CTRLA_PRIV_0_Val << BROMC_CTRLA_PRIV_Pos)     /* (BROMC_CTRLA) Macro register accessible in privileged and unprivileged modes Position */
#define BROMC_CTRLA_PRIV_1                    (BROMC_CTRLA_PRIV_1_Val << BROMC_CTRLA_PRIV_Pos)     /* (BROMC_CTRLA) Macro registers only accessible in privileged mode Position */
#define BROMC_CTRLA_PRMWS_Pos                 _UINT32_(8)                                          /* (BROMC_CTRLA) ROM Access Time Wait State Position */
#define BROMC_CTRLA_PRMWS_Msk                 (_UINT32_(0x7) << BROMC_CTRLA_PRMWS_Pos)             /* (BROMC_CTRLA) ROM Access Time Wait State Mask */
#define BROMC_CTRLA_PRMWS(value)              (BROMC_CTRLA_PRMWS_Msk & (_UINT32_(value) << BROMC_CTRLA_PRMWS_Pos)) /* Assignment of value for PRMWS in the BROMC_CTRLA register */
#define   BROMC_CTRLA_PRMWS_0_Val             _UINT32_(0x0)                                        /* (BROMC_CTRLA) No wait states, single cycle access  */
#define   BROMC_CTRLA_PRMWS_1_Val             _UINT32_(0x1)                                        /* (BROMC_CTRLA) Access time extended 2 clock cycles  */
#define   BROMC_CTRLA_PRMWS_2_Val             _UINT32_(0x2)                                        /* (BROMC_CTRLA) Access time extended to 3 clock cycles  */
#define   BROMC_CTRLA_PRMWS_7_Val             _UINT32_(0x7)                                        /* (BROMC_CTRLA) Access time extended to 8 clock cycles  */
#define BROMC_CTRLA_PRMWS_0                   (BROMC_CTRLA_PRMWS_0_Val << BROMC_CTRLA_PRMWS_Pos)   /* (BROMC_CTRLA) No wait states, single cycle access Position */
#define BROMC_CTRLA_PRMWS_1                   (BROMC_CTRLA_PRMWS_1_Val << BROMC_CTRLA_PRMWS_Pos)   /* (BROMC_CTRLA) Access time extended 2 clock cycles Position */
#define BROMC_CTRLA_PRMWS_2                   (BROMC_CTRLA_PRMWS_2_Val << BROMC_CTRLA_PRMWS_Pos)   /* (BROMC_CTRLA) Access time extended to 3 clock cycles Position */
#define BROMC_CTRLA_PRMWS_7                   (BROMC_CTRLA_PRMWS_7_Val << BROMC_CTRLA_PRMWS_Pos)   /* (BROMC_CTRLA) Access time extended to 8 clock cycles Position */
#define BROMC_CTRLA_Msk                       _UINT32_(0x00000707)                                 /* (BROMC_CTRLA) Register Mask  */


/* -------- BROMC_UCFG : (BROMC Offset: 0x04) ( R/ 32) User Configuration REGISTER -------- */
#define BROMC_UCFG_RESETVALUE                 _UINT32_(0x01)                                       /*  (BROMC_UCFG) User Configuration REGISTER  Reset Value */

#define BROMC_UCFG_BCRCDIS_Pos                _UINT32_(0)                                          /* (BROMC_UCFG) Boot CRC Disable Position */
#define BROMC_UCFG_BCRCDIS_Msk                (_UINT32_(0x1) << BROMC_UCFG_BCRCDIS_Pos)            /* (BROMC_UCFG) Boot CRC Disable Mask */
#define BROMC_UCFG_BCRCDIS(value)             (BROMC_UCFG_BCRCDIS_Msk & (_UINT32_(value) << BROMC_UCFG_BCRCDIS_Pos)) /* Assignment of value for BCRCDIS in the BROMC_UCFG register */
#define   BROMC_UCFG_BCRCDIS_0_Val            _UINT32_(0x0)                                        /* (BROMC_UCFG) Boot ROM content is CRC verified by the ROM controller, status is reported to the DSU. On CRC failure, the controller blocks access to the ROM controller.  */
#define   BROMC_UCFG_BCRCDIS_1_Val            _UINT32_(0x1)                                        /* (BROMC_UCFG) No CRC verification at Boot.  */
#define BROMC_UCFG_BCRCDIS_0                  (BROMC_UCFG_BCRCDIS_0_Val << BROMC_UCFG_BCRCDIS_Pos) /* (BROMC_UCFG) Boot ROM content is CRC verified by the ROM controller, status is reported to the DSU. On CRC failure, the controller blocks access to the ROM controller. Position */
#define BROMC_UCFG_BCRCDIS_1                  (BROMC_UCFG_BCRCDIS_1_Val << BROMC_UCFG_BCRCDIS_Pos) /* (BROMC_UCFG) No CRC verification at Boot. Position */
#define BROMC_UCFG_Msk                        _UINT32_(0x00000001)                                 /* (BROMC_UCFG) Register Mask  */


/* BROMC register offsets definitions */
#define BROMC_CTRLA_REG_OFST           _UINT32_(0x00)      /* (BROMC_CTRLA) Control A REGISTER Offset */
#define BROMC_UCFG_REG_OFST            _UINT32_(0x04)      /* (BROMC_UCFG) User Configuration REGISTER Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* BROMC register API structure */
typedef struct
{  /* ARM GF55LPx Boot ROM Controller Macro */
  __IO  uint32_t                       BROMC_CTRLA;        /* Offset: 0x00 (R/W  32) Control A REGISTER */
  __I   uint32_t                       BROMC_UCFG;         /* Offset: 0x04 (R/   32) User Configuration REGISTER */
} bromc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMGC00_BROMC_COMPONENT_H_ */
