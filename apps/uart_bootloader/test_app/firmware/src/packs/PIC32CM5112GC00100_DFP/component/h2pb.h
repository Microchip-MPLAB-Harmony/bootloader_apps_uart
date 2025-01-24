/*
 * Component description for H2PB
 *
 * Copyright (c) 2024 Microchip Technology Inc. and its subsidiaries.
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

/*  file generated from device description file (ATDF) version 2024-07-26T17:56:39Z  */
#ifndef _PIC32CMGC00_H2PB_COMPONENT_H_
#define _PIC32CMGC00_H2PB_COMPONENT_H_

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR H2PB                      */
/* ************************************************************************** */

/* -------- H2PB_CTRLA : (H2PB Offset: 0x00) (R/W 32) H2PB CONTROL Register -------- */
#define H2PB_CTRLA_RESETVALUE                 _UINT32_(0x00)                                       /*  (H2PB_CTRLA) H2PB CONTROL Register  Reset Value */

#define H2PB_CTRLA_PRIV_Pos                   _UINT32_(2)                                          /* (H2PB_CTRLA) PRIV privileged access protection bit Position */
#define H2PB_CTRLA_PRIV_Msk                   (_UINT32_(0x1) << H2PB_CTRLA_PRIV_Pos)               /* (H2PB_CTRLA) PRIV privileged access protection bit Mask */
#define H2PB_CTRLA_PRIV(value)                (H2PB_CTRLA_PRIV_Msk & (_UINT32_(value) << H2PB_CTRLA_PRIV_Pos)) /* Assignment of value for PRIV in the H2PB_CTRLA register */
#define H2PB_CTRLA_SECEN_Pos                  _UINT32_(3)                                          /* (H2PB_CTRLA) SECEN security enable bit Position */
#define H2PB_CTRLA_SECEN_Msk                  (_UINT32_(0x1) << H2PB_CTRLA_SECEN_Pos)              /* (H2PB_CTRLA) SECEN security enable bit Mask */
#define H2PB_CTRLA_SECEN(value)               (H2PB_CTRLA_SECEN_Msk & (_UINT32_(value) << H2PB_CTRLA_SECEN_Pos)) /* Assignment of value for SECEN in the H2PB_CTRLA register */
#define H2PB_CTRLA_Msk                        _UINT32_(0x0000000C)                                 /* (H2PB_CTRLA) Register Mask  */


/* -------- H2PB_NONSECCLRA : (H2PB Offset: 0x08) (R/W 32) Non-Security Clear Register A -------- */
#define H2PB_NONSECCLRA_RESETVALUE            _UINT32_(0x00)                                       /*  (H2PB_NONSECCLRA) Non-Security Clear Register A  Reset Value */

#define H2PB_NONSECCLRA_NONSEC0_Pos           _UINT32_(0)                                          /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC0_Msk           (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC0_Pos)       /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC0(value)        (H2PB_NONSECCLRA_NONSEC0_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC0_Pos)) /* Assignment of value for NONSEC0 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC1_Pos           _UINT32_(1)                                          /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC1_Msk           (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC1_Pos)       /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC1(value)        (H2PB_NONSECCLRA_NONSEC1_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC1_Pos)) /* Assignment of value for NONSEC1 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC2_Pos           _UINT32_(2)                                          /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC2_Msk           (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC2_Pos)       /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC2(value)        (H2PB_NONSECCLRA_NONSEC2_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC2_Pos)) /* Assignment of value for NONSEC2 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC3_Pos           _UINT32_(3)                                          /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC3_Msk           (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC3_Pos)       /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC3(value)        (H2PB_NONSECCLRA_NONSEC3_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC3_Pos)) /* Assignment of value for NONSEC3 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC4_Pos           _UINT32_(4)                                          /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC4_Msk           (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC4_Pos)       /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC4(value)        (H2PB_NONSECCLRA_NONSEC4_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC4_Pos)) /* Assignment of value for NONSEC4 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC5_Pos           _UINT32_(5)                                          /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC5_Msk           (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC5_Pos)       /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC5(value)        (H2PB_NONSECCLRA_NONSEC5_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC5_Pos)) /* Assignment of value for NONSEC5 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC6_Pos           _UINT32_(6)                                          /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC6_Msk           (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC6_Pos)       /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC6(value)        (H2PB_NONSECCLRA_NONSEC6_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC6_Pos)) /* Assignment of value for NONSEC6 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC7_Pos           _UINT32_(7)                                          /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC7_Msk           (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC7_Pos)       /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC7(value)        (H2PB_NONSECCLRA_NONSEC7_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC7_Pos)) /* Assignment of value for NONSEC7 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC8_Pos           _UINT32_(8)                                          /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC8_Msk           (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC8_Pos)       /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC8(value)        (H2PB_NONSECCLRA_NONSEC8_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC8_Pos)) /* Assignment of value for NONSEC8 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC9_Pos           _UINT32_(9)                                          /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC9_Msk           (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC9_Pos)       /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC9(value)        (H2PB_NONSECCLRA_NONSEC9_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC9_Pos)) /* Assignment of value for NONSEC9 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC10_Pos          _UINT32_(10)                                         /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC10_Msk          (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC10_Pos)      /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC10(value)       (H2PB_NONSECCLRA_NONSEC10_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC10_Pos)) /* Assignment of value for NONSEC10 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC11_Pos          _UINT32_(11)                                         /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC11_Msk          (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC11_Pos)      /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC11(value)       (H2PB_NONSECCLRA_NONSEC11_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC11_Pos)) /* Assignment of value for NONSEC11 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC12_Pos          _UINT32_(12)                                         /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC12_Msk          (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC12_Pos)      /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC12(value)       (H2PB_NONSECCLRA_NONSEC12_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC12_Pos)) /* Assignment of value for NONSEC12 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC13_Pos          _UINT32_(13)                                         /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC13_Msk          (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC13_Pos)      /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC13(value)       (H2PB_NONSECCLRA_NONSEC13_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC13_Pos)) /* Assignment of value for NONSEC13 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC14_Pos          _UINT32_(14)                                         /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC14_Msk          (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC14_Pos)      /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC14(value)       (H2PB_NONSECCLRA_NONSEC14_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC14_Pos)) /* Assignment of value for NONSEC14 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC15_Pos          _UINT32_(15)                                         /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC15_Msk          (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC15_Pos)      /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC15(value)       (H2PB_NONSECCLRA_NONSEC15_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC15_Pos)) /* Assignment of value for NONSEC15 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC16_Pos          _UINT32_(16)                                         /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC16_Msk          (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC16_Pos)      /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC16(value)       (H2PB_NONSECCLRA_NONSEC16_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC16_Pos)) /* Assignment of value for NONSEC16 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC17_Pos          _UINT32_(17)                                         /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC17_Msk          (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC17_Pos)      /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC17(value)       (H2PB_NONSECCLRA_NONSEC17_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC17_Pos)) /* Assignment of value for NONSEC17 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC18_Pos          _UINT32_(18)                                         /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC18_Msk          (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC18_Pos)      /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC18(value)       (H2PB_NONSECCLRA_NONSEC18_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC18_Pos)) /* Assignment of value for NONSEC18 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC19_Pos          _UINT32_(19)                                         /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC19_Msk          (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC19_Pos)      /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC19(value)       (H2PB_NONSECCLRA_NONSEC19_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC19_Pos)) /* Assignment of value for NONSEC19 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC20_Pos          _UINT32_(20)                                         /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC20_Msk          (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC20_Pos)      /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC20(value)       (H2PB_NONSECCLRA_NONSEC20_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC20_Pos)) /* Assignment of value for NONSEC20 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC21_Pos          _UINT32_(21)                                         /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC21_Msk          (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC21_Pos)      /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC21(value)       (H2PB_NONSECCLRA_NONSEC21_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC21_Pos)) /* Assignment of value for NONSEC21 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC22_Pos          _UINT32_(22)                                         /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC22_Msk          (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC22_Pos)      /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC22(value)       (H2PB_NONSECCLRA_NONSEC22_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC22_Pos)) /* Assignment of value for NONSEC22 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC23_Pos          _UINT32_(23)                                         /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC23_Msk          (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC23_Pos)      /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC23(value)       (H2PB_NONSECCLRA_NONSEC23_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC23_Pos)) /* Assignment of value for NONSEC23 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC24_Pos          _UINT32_(24)                                         /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC24_Msk          (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC24_Pos)      /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC24(value)       (H2PB_NONSECCLRA_NONSEC24_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC24_Pos)) /* Assignment of value for NONSEC24 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC25_Pos          _UINT32_(25)                                         /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC25_Msk          (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC25_Pos)      /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC25(value)       (H2PB_NONSECCLRA_NONSEC25_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC25_Pos)) /* Assignment of value for NONSEC25 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC26_Pos          _UINT32_(26)                                         /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC26_Msk          (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC26_Pos)      /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC26(value)       (H2PB_NONSECCLRA_NONSEC26_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC26_Pos)) /* Assignment of value for NONSEC26 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC27_Pos          _UINT32_(27)                                         /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC27_Msk          (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC27_Pos)      /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC27(value)       (H2PB_NONSECCLRA_NONSEC27_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC27_Pos)) /* Assignment of value for NONSEC27 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC28_Pos          _UINT32_(28)                                         /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC28_Msk          (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC28_Pos)      /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC28(value)       (H2PB_NONSECCLRA_NONSEC28_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC28_Pos)) /* Assignment of value for NONSEC28 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC29_Pos          _UINT32_(29)                                         /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC29_Msk          (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC29_Pos)      /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC29(value)       (H2PB_NONSECCLRA_NONSEC29_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC29_Pos)) /* Assignment of value for NONSEC29 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC30_Pos          _UINT32_(30)                                         /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC30_Msk          (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC30_Pos)      /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC30(value)       (H2PB_NONSECCLRA_NONSEC30_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC30_Pos)) /* Assignment of value for NONSEC30 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_NONSEC31_Pos          _UINT32_(31)                                         /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECCLRA_NONSEC31_Msk          (_UINT32_(0x1) << H2PB_NONSECCLRA_NONSEC31_Pos)      /* (H2PB_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECCLRA_NONSEC31(value)       (H2PB_NONSECCLRA_NONSEC31_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC31_Pos)) /* Assignment of value for NONSEC31 in the H2PB_NONSECCLRA register */
#define H2PB_NONSECCLRA_Msk                   _UINT32_(0xFFFFFFFF)                                 /* (H2PB_NONSECCLRA) Register Mask  */

#define H2PB_NONSECCLRA_NONSEC_Pos            _UINT32_(0)                                          /* (H2PB_NONSECCLRA Position) non-security bit for APB Slave k, k=x..3x */
#define H2PB_NONSECCLRA_NONSEC_Msk            (_UINT32_(0xFFFFFFFF) << H2PB_NONSECCLRA_NONSEC_Pos) /* (H2PB_NONSECCLRA Mask) NONSEC */
#define H2PB_NONSECCLRA_NONSEC(value)         (H2PB_NONSECCLRA_NONSEC_Msk & (_UINT32_(value) << H2PB_NONSECCLRA_NONSEC_Pos)) 

/* -------- H2PB_NONSECSETA : (H2PB Offset: 0x0C) (R/W 32) Non-Security SET Register A -------- */
#define H2PB_NONSECSETA_RESETVALUE            _UINT32_(0x00)                                       /*  (H2PB_NONSECSETA) Non-Security SET Register A  Reset Value */

#define H2PB_NONSECSETA_NONSEC0_Pos           _UINT32_(0)                                          /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC0_Msk           (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC0_Pos)       /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC0(value)        (H2PB_NONSECSETA_NONSEC0_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC0_Pos)) /* Assignment of value for NONSEC0 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC1_Pos           _UINT32_(1)                                          /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC1_Msk           (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC1_Pos)       /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC1(value)        (H2PB_NONSECSETA_NONSEC1_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC1_Pos)) /* Assignment of value for NONSEC1 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC2_Pos           _UINT32_(2)                                          /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC2_Msk           (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC2_Pos)       /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC2(value)        (H2PB_NONSECSETA_NONSEC2_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC2_Pos)) /* Assignment of value for NONSEC2 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC3_Pos           _UINT32_(3)                                          /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC3_Msk           (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC3_Pos)       /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC3(value)        (H2PB_NONSECSETA_NONSEC3_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC3_Pos)) /* Assignment of value for NONSEC3 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC4_Pos           _UINT32_(4)                                          /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC4_Msk           (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC4_Pos)       /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC4(value)        (H2PB_NONSECSETA_NONSEC4_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC4_Pos)) /* Assignment of value for NONSEC4 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC5_Pos           _UINT32_(5)                                          /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC5_Msk           (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC5_Pos)       /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC5(value)        (H2PB_NONSECSETA_NONSEC5_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC5_Pos)) /* Assignment of value for NONSEC5 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC6_Pos           _UINT32_(6)                                          /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC6_Msk           (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC6_Pos)       /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC6(value)        (H2PB_NONSECSETA_NONSEC6_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC6_Pos)) /* Assignment of value for NONSEC6 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC7_Pos           _UINT32_(7)                                          /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC7_Msk           (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC7_Pos)       /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC7(value)        (H2PB_NONSECSETA_NONSEC7_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC7_Pos)) /* Assignment of value for NONSEC7 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC8_Pos           _UINT32_(8)                                          /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC8_Msk           (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC8_Pos)       /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC8(value)        (H2PB_NONSECSETA_NONSEC8_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC8_Pos)) /* Assignment of value for NONSEC8 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC9_Pos           _UINT32_(9)                                          /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC9_Msk           (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC9_Pos)       /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC9(value)        (H2PB_NONSECSETA_NONSEC9_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC9_Pos)) /* Assignment of value for NONSEC9 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC10_Pos          _UINT32_(10)                                         /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC10_Msk          (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC10_Pos)      /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC10(value)       (H2PB_NONSECSETA_NONSEC10_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC10_Pos)) /* Assignment of value for NONSEC10 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC11_Pos          _UINT32_(11)                                         /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC11_Msk          (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC11_Pos)      /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC11(value)       (H2PB_NONSECSETA_NONSEC11_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC11_Pos)) /* Assignment of value for NONSEC11 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC12_Pos          _UINT32_(12)                                         /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC12_Msk          (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC12_Pos)      /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC12(value)       (H2PB_NONSECSETA_NONSEC12_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC12_Pos)) /* Assignment of value for NONSEC12 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC13_Pos          _UINT32_(13)                                         /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC13_Msk          (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC13_Pos)      /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC13(value)       (H2PB_NONSECSETA_NONSEC13_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC13_Pos)) /* Assignment of value for NONSEC13 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC14_Pos          _UINT32_(14)                                         /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC14_Msk          (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC14_Pos)      /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC14(value)       (H2PB_NONSECSETA_NONSEC14_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC14_Pos)) /* Assignment of value for NONSEC14 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC15_Pos          _UINT32_(15)                                         /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC15_Msk          (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC15_Pos)      /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC15(value)       (H2PB_NONSECSETA_NONSEC15_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC15_Pos)) /* Assignment of value for NONSEC15 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC16_Pos          _UINT32_(16)                                         /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC16_Msk          (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC16_Pos)      /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC16(value)       (H2PB_NONSECSETA_NONSEC16_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC16_Pos)) /* Assignment of value for NONSEC16 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC17_Pos          _UINT32_(17)                                         /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC17_Msk          (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC17_Pos)      /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC17(value)       (H2PB_NONSECSETA_NONSEC17_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC17_Pos)) /* Assignment of value for NONSEC17 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC18_Pos          _UINT32_(18)                                         /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC18_Msk          (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC18_Pos)      /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC18(value)       (H2PB_NONSECSETA_NONSEC18_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC18_Pos)) /* Assignment of value for NONSEC18 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC19_Pos          _UINT32_(19)                                         /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC19_Msk          (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC19_Pos)      /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC19(value)       (H2PB_NONSECSETA_NONSEC19_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC19_Pos)) /* Assignment of value for NONSEC19 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC20_Pos          _UINT32_(20)                                         /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC20_Msk          (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC20_Pos)      /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC20(value)       (H2PB_NONSECSETA_NONSEC20_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC20_Pos)) /* Assignment of value for NONSEC20 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC21_Pos          _UINT32_(21)                                         /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC21_Msk          (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC21_Pos)      /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC21(value)       (H2PB_NONSECSETA_NONSEC21_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC21_Pos)) /* Assignment of value for NONSEC21 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC22_Pos          _UINT32_(22)                                         /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC22_Msk          (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC22_Pos)      /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC22(value)       (H2PB_NONSECSETA_NONSEC22_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC22_Pos)) /* Assignment of value for NONSEC22 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC23_Pos          _UINT32_(23)                                         /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC23_Msk          (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC23_Pos)      /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC23(value)       (H2PB_NONSECSETA_NONSEC23_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC23_Pos)) /* Assignment of value for NONSEC23 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC24_Pos          _UINT32_(24)                                         /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC24_Msk          (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC24_Pos)      /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC24(value)       (H2PB_NONSECSETA_NONSEC24_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC24_Pos)) /* Assignment of value for NONSEC24 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC25_Pos          _UINT32_(25)                                         /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC25_Msk          (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC25_Pos)      /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC25(value)       (H2PB_NONSECSETA_NONSEC25_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC25_Pos)) /* Assignment of value for NONSEC25 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC26_Pos          _UINT32_(26)                                         /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC26_Msk          (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC26_Pos)      /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC26(value)       (H2PB_NONSECSETA_NONSEC26_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC26_Pos)) /* Assignment of value for NONSEC26 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC27_Pos          _UINT32_(27)                                         /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC27_Msk          (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC27_Pos)      /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC27(value)       (H2PB_NONSECSETA_NONSEC27_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC27_Pos)) /* Assignment of value for NONSEC27 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC28_Pos          _UINT32_(28)                                         /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC28_Msk          (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC28_Pos)      /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC28(value)       (H2PB_NONSECSETA_NONSEC28_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC28_Pos)) /* Assignment of value for NONSEC28 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC29_Pos          _UINT32_(29)                                         /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC29_Msk          (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC29_Pos)      /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC29(value)       (H2PB_NONSECSETA_NONSEC29_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC29_Pos)) /* Assignment of value for NONSEC29 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC30_Pos          _UINT32_(30)                                         /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC30_Msk          (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC30_Pos)      /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC30(value)       (H2PB_NONSECSETA_NONSEC30_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC30_Pos)) /* Assignment of value for NONSEC30 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_NONSEC31_Pos          _UINT32_(31)                                         /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define H2PB_NONSECSETA_NONSEC31_Msk          (_UINT32_(0x1) << H2PB_NONSECSETA_NONSEC31_Pos)      /* (H2PB_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define H2PB_NONSECSETA_NONSEC31(value)       (H2PB_NONSECSETA_NONSEC31_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC31_Pos)) /* Assignment of value for NONSEC31 in the H2PB_NONSECSETA register */
#define H2PB_NONSECSETA_Msk                   _UINT32_(0xFFFFFFFF)                                 /* (H2PB_NONSECSETA) Register Mask  */

#define H2PB_NONSECSETA_NONSEC_Pos            _UINT32_(0)                                          /* (H2PB_NONSECSETA Position) non-security bit for APB Slave k, k=x..3x */
#define H2PB_NONSECSETA_NONSEC_Msk            (_UINT32_(0xFFFFFFFF) << H2PB_NONSECSETA_NONSEC_Pos) /* (H2PB_NONSECSETA Mask) NONSEC */
#define H2PB_NONSECSETA_NONSEC(value)         (H2PB_NONSECSETA_NONSEC_Msk & (_UINT32_(value) << H2PB_NONSECSETA_NONSEC_Pos)) 

/* H2PB register offsets definitions */
#define H2PB_CTRLA_REG_OFST            _UINT32_(0x00)      /* (H2PB_CTRLA) H2PB CONTROL Register Offset */
#define H2PB_NONSECCLRA_REG_OFST       _UINT32_(0x08)      /* (H2PB_NONSECCLRA) Non-Security Clear Register A Offset */
#define H2PB_NONSECSETA_REG_OFST       _UINT32_(0x0C)      /* (H2PB_NONSECSETA) Non-Security SET Register A Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* H2PB register API structure */
typedef struct
{  /* AHB To APB Bridge */
  __IO  uint32_t                       H2PB_CTRLA;         /* Offset: 0x00 (R/W  32) H2PB CONTROL Register */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       H2PB_NONSECCLRA;    /* Offset: 0x08 (R/W  32) Non-Security Clear Register A */
  __IO  uint32_t                       H2PB_NONSECSETA;    /* Offset: 0x0C (R/W  32) Non-Security SET Register A */
} h2pb_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMGC00_H2PB_COMPONENT_H_ */
