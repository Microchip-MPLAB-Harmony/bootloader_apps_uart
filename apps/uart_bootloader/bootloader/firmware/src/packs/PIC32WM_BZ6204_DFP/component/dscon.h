/*
 * Component description for DSCON
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
#ifndef _PIC32WM_BZ6_DSCON_COMPONENT_H_
#define _PIC32WM_BZ6_DSCON_COMPONENT_H_

/* ************************************************************************** */
/*                     SOFTWARE API DEFINITION FOR DSCON                      */
/* ************************************************************************** */

/* -------- DSCON_DSCON : (DSCON Offset: 0x00) (R/W 32)  -------- */
#define DSCON_DSCON_RESETVALUE                _UINT32_(0x00)                                       /*  (DSCON_DSCON)   Reset Value */

#define DSCON_DSCON_DSSR_Pos                  _UINT32_(0)                                          /* (DSCON_DSCON)  Position */
#define DSCON_DSCON_DSSR_Msk                  (_UINT32_(0x1) << DSCON_DSCON_DSSR_Pos)              /* (DSCON_DSCON)  Mask */
#define DSCON_DSCON_DSSR(value)               (DSCON_DSCON_DSSR_Msk & (_UINT32_(value) << DSCON_DSCON_DSSR_Pos)) /* Assignment of value for DSSR in the DSCON_DSCON register */
#define DSCON_DSCON_ZPBOR_Pos                 _UINT32_(1)                                          /* (DSCON_DSCON)  Position */
#define DSCON_DSCON_ZPBOR_Msk                 (_UINT32_(0x1) << DSCON_DSCON_ZPBOR_Pos)             /* (DSCON_DSCON)  Mask */
#define DSCON_DSCON_ZPBOR(value)              (DSCON_DSCON_ZPBOR_Msk & (_UINT32_(value) << DSCON_DSCON_ZPBOR_Pos)) /* Assignment of value for ZPBOR in the DSCON_DSCON register */
#define DSCON_DSCON_RTCCWDIS_Pos              _UINT32_(8)                                          /* (DSCON_DSCON)  Position */
#define DSCON_DSCON_RTCCWDIS_Msk              (_UINT32_(0x1) << DSCON_DSCON_RTCCWDIS_Pos)          /* (DSCON_DSCON)  Mask */
#define DSCON_DSCON_RTCCWDIS(value)           (DSCON_DSCON_RTCCWDIS_Msk & (_UINT32_(value) << DSCON_DSCON_RTCCWDIS_Pos)) /* Assignment of value for RTCCWDIS in the DSCON_DSCON register */
#define DSCON_DSCON_RTCPWREQ_Pos              _UINT32_(12)                                         /* (DSCON_DSCON)  Position */
#define DSCON_DSCON_RTCPWREQ_Msk              (_UINT32_(0x1) << DSCON_DSCON_RTCPWREQ_Pos)          /* (DSCON_DSCON)  Mask */
#define DSCON_DSCON_RTCPWREQ(value)           (DSCON_DSCON_RTCPWREQ_Msk & (_UINT32_(value) << DSCON_DSCON_RTCPWREQ_Pos)) /* Assignment of value for RTCPWREQ in the DSCON_DSCON register */
#define DSCON_DSCON_XSEMAEN_Pos               _UINT32_(13)                                         /* (DSCON_DSCON)  Position */
#define DSCON_DSCON_XSEMAEN_Msk               (_UINT32_(0x1) << DSCON_DSCON_XSEMAEN_Pos)           /* (DSCON_DSCON)  Mask */
#define DSCON_DSCON_XSEMAEN(value)            (DSCON_DSCON_XSEMAEN_Msk & (_UINT32_(value) << DSCON_DSCON_XSEMAEN_Pos)) /* Assignment of value for XSEMAEN in the DSCON_DSCON register */
#define DSCON_DSCON_DSEN_Pos                  _UINT32_(15)                                         /* (DSCON_DSCON)  Position */
#define DSCON_DSCON_DSEN_Msk                  (_UINT32_(0x1) << DSCON_DSCON_DSEN_Pos)              /* (DSCON_DSCON)  Mask */
#define DSCON_DSCON_DSEN(value)               (DSCON_DSCON_DSEN_Msk & (_UINT32_(value) << DSCON_DSCON_DSEN_Pos)) /* Assignment of value for DSEN in the DSCON_DSCON register */
#define DSCON_DSCON_Msk                       _UINT32_(0x0000B103)                                 /* (DSCON_DSCON) Register Mask  */


/* -------- DSCON_DSWSRC : (DSCON Offset: 0x04) (R/W 32)  -------- */
#define DSCON_DSWSRC_RESETVALUE               _UINT32_(0x00)                                       /*  (DSCON_DSWSRC)   Reset Value */

#define DSCON_DSWSRC_ICD_Pos                  _UINT32_(1)                                          /* (DSCON_DSWSRC)  Position */
#define DSCON_DSWSRC_ICD_Msk                  (_UINT32_(0x1) << DSCON_DSWSRC_ICD_Pos)              /* (DSCON_DSWSRC)  Mask */
#define DSCON_DSWSRC_ICD(value)               (DSCON_DSWSRC_ICD_Msk & (_UINT32_(value) << DSCON_DSWSRC_ICD_Pos)) /* Assignment of value for ICD in the DSCON_DSWSRC register */
#define DSCON_DSWSRC_MCLR_Pos                 _UINT32_(2)                                          /* (DSCON_DSWSRC)  Position */
#define DSCON_DSWSRC_MCLR_Msk                 (_UINT32_(0x1) << DSCON_DSWSRC_MCLR_Pos)             /* (DSCON_DSWSRC)  Mask */
#define DSCON_DSWSRC_MCLR(value)              (DSCON_DSWSRC_MCLR_Msk & (_UINT32_(value) << DSCON_DSWSRC_MCLR_Pos)) /* Assignment of value for MCLR in the DSCON_DSWSRC register */
#define DSCON_DSWSRC_RTCC_Pos                 _UINT32_(3)                                          /* (DSCON_DSWSRC)  Position */
#define DSCON_DSWSRC_RTCC_Msk                 (_UINT32_(0x1) << DSCON_DSWSRC_RTCC_Pos)             /* (DSCON_DSWSRC)  Mask */
#define DSCON_DSWSRC_RTCC(value)              (DSCON_DSWSRC_RTCC_Msk & (_UINT32_(value) << DSCON_DSWSRC_RTCC_Pos)) /* Assignment of value for RTCC in the DSCON_DSWSRC register */
#define DSCON_DSWSRC_DSWDT_Pos                _UINT32_(4)                                          /* (DSCON_DSWSRC)  Position */
#define DSCON_DSWSRC_DSWDT_Msk                (_UINT32_(0x1) << DSCON_DSWSRC_DSWDT_Pos)            /* (DSCON_DSWSRC)  Mask */
#define DSCON_DSWSRC_DSWDT(value)             (DSCON_DSWSRC_DSWDT_Msk & (_UINT32_(value) << DSCON_DSWSRC_DSWDT_Pos)) /* Assignment of value for DSWDT in the DSCON_DSWSRC register */
#define DSCON_DSWSRC_EXT_Pos                  _UINT32_(5)                                          /* (DSCON_DSWSRC)  Position */
#define DSCON_DSWSRC_EXT_Msk                  (_UINT32_(0x1) << DSCON_DSWSRC_EXT_Pos)              /* (DSCON_DSWSRC)  Mask */
#define DSCON_DSWSRC_EXT(value)               (DSCON_DSWSRC_EXT_Msk & (_UINT32_(value) << DSCON_DSWSRC_EXT_Pos)) /* Assignment of value for EXT in the DSCON_DSWSRC register */
#define DSCON_DSWSRC_FAULT_Pos                _UINT32_(7)                                          /* (DSCON_DSWSRC)  Position */
#define DSCON_DSWSRC_FAULT_Msk                (_UINT32_(0x1) << DSCON_DSWSRC_FAULT_Pos)            /* (DSCON_DSWSRC)  Mask */
#define DSCON_DSWSRC_FAULT(value)             (DSCON_DSWSRC_FAULT_Msk & (_UINT32_(value) << DSCON_DSWSRC_FAULT_Pos)) /* Assignment of value for FAULT in the DSCON_DSWSRC register */
#define DSCON_DSWSRC_INT0_Pos                 _UINT32_(8)                                          /* (DSCON_DSWSRC)  Position */
#define DSCON_DSWSRC_INT0_Msk                 (_UINT32_(0x1) << DSCON_DSWSRC_INT0_Pos)             /* (DSCON_DSWSRC)  Mask */
#define DSCON_DSWSRC_INT0(value)              (DSCON_DSWSRC_INT0_Msk & (_UINT32_(value) << DSCON_DSWSRC_INT0_Pos)) /* Assignment of value for INT0 in the DSCON_DSWSRC register */
#define DSCON_DSWSRC_Msk                      _UINT32_(0x000001BE)                                 /* (DSCON_DSWSRC) Register Mask  */

#define DSCON_DSWSRC_INT_Pos                  _UINT32_(8)                                          /* (DSCON_DSWSRC Position)  */
#define DSCON_DSWSRC_INT_Msk                  (_UINT32_(0x1) << DSCON_DSWSRC_INT_Pos)              /* (DSCON_DSWSRC Mask) INT */
#define DSCON_DSWSRC_INT(value)               (DSCON_DSWSRC_INT_Msk & (_UINT32_(value) << DSCON_DSWSRC_INT_Pos)) 

/* -------- DSCON_DSSEMA1 : (DSCON Offset: 0x08) (R/W 32)  -------- */
#define DSCON_DSSEMA1_RESETVALUE              _UINT32_(0x00)                                       /*  (DSCON_DSSEMA1)   Reset Value */

#define DSCON_DSSEMA1_DSSEMA_Pos              _UINT32_(0)                                          /* (DSCON_DSSEMA1)  Position */
#define DSCON_DSSEMA1_DSSEMA_Msk              (_UINT32_(0xFFFFFFFF) << DSCON_DSSEMA1_DSSEMA_Pos)   /* (DSCON_DSSEMA1)  Mask */
#define DSCON_DSSEMA1_DSSEMA(value)           (DSCON_DSSEMA1_DSSEMA_Msk & (_UINT32_(value) << DSCON_DSSEMA1_DSSEMA_Pos)) /* Assignment of value for DSSEMA in the DSCON_DSSEMA1 register */
#define DSCON_DSSEMA1_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (DSCON_DSSEMA1) Register Mask  */


/* -------- DSCON_DSXSEMA1 : (DSCON Offset: 0x10) (R/W 32)  -------- */
#define DSCON_DSXSEMA1_RESETVALUE             _UINT32_(0x00)                                       /*  (DSCON_DSXSEMA1)   Reset Value */

#define DSCON_DSXSEMA1_DSXSEMA_Pos            _UINT32_(0)                                          /* (DSCON_DSXSEMA1)  Position */
#define DSCON_DSXSEMA1_DSXSEMA_Msk            (_UINT32_(0xFFFFFFFF) << DSCON_DSXSEMA1_DSXSEMA_Pos) /* (DSCON_DSXSEMA1)  Mask */
#define DSCON_DSXSEMA1_DSXSEMA(value)         (DSCON_DSXSEMA1_DSXSEMA_Msk & (_UINT32_(value) << DSCON_DSXSEMA1_DSXSEMA_Pos)) /* Assignment of value for DSXSEMA in the DSCON_DSXSEMA1 register */
#define DSCON_DSXSEMA1_Msk                    _UINT32_(0xFFFFFFFF)                                 /* (DSCON_DSXSEMA1) Register Mask  */


/* DSCON register offsets definitions */
#define DSCON_DSCON_REG_OFST           _UINT32_(0x00)      /* (DSCON_DSCON)  Offset */
#define DSCON_DSWSRC_REG_OFST          _UINT32_(0x04)      /* (DSCON_DSWSRC)  Offset */
#define DSCON_DSSEMA1_REG_OFST         _UINT32_(0x08)      /* (DSCON_DSSEMA1)  Offset */
#define DSCON_DSXSEMA1_REG_OFST        _UINT32_(0x10)      /* (DSCON_DSXSEMA1)  Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* DSCON register API structure */
typedef struct
{  /*  */
  __IO  uint32_t                       DSCON_DSCON;        /* Offset: 0x00 (R/W  32)  */
  __IO  uint32_t                       DSCON_DSWSRC;       /* Offset: 0x04 (R/W  32)  */
  __IO  uint32_t                       DSCON_DSSEMA1;      /* Offset: 0x08 (R/W  32)  */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       DSCON_DSXSEMA1;     /* Offset: 0x10 (R/W  32)  */
} dscon_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32WM_BZ6_DSCON_COMPONENT_H_ */
