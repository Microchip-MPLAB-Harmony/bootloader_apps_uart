/*
 * Component description for TRAM
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

/*  file generated from device description file (ATDF) version 2024-11-05T16:47:53Z  */
#ifndef _PIC32CMSG00_TRAM_COMPONENT_H_
#define _PIC32CMSG00_TRAM_COMPONENT_H_

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR TRAM                      */
/* ************************************************************************** */

/* -------- TRAM_CTRLA : (TRAM Offset: 0x00) (R/W 32) Control -------- */
#define TRAM_CTRLA_RESETVALUE                 _UINT32_(0x00)                                       /*  (TRAM_CTRLA) Control  Reset Value */

#define TRAM_CTRLA_SWRST_Pos                  _UINT32_(0)                                          /* (TRAM_CTRLA) Software Reset Position */
#define TRAM_CTRLA_SWRST_Msk                  (_UINT32_(0x1) << TRAM_CTRLA_SWRST_Pos)              /* (TRAM_CTRLA) Software Reset Mask */
#define TRAM_CTRLA_SWRST(value)               (TRAM_CTRLA_SWRST_Msk & (_UINT32_(value) << TRAM_CTRLA_SWRST_Pos)) /* Assignment of value for SWRST in the TRAM_CTRLA register */
#define TRAM_CTRLA_ENABLE_Pos                 _UINT32_(1)                                          /* (TRAM_CTRLA) Enable Position */
#define TRAM_CTRLA_ENABLE_Msk                 (_UINT32_(0x1) << TRAM_CTRLA_ENABLE_Pos)             /* (TRAM_CTRLA) Enable Mask */
#define TRAM_CTRLA_ENABLE(value)              (TRAM_CTRLA_ENABLE_Msk & (_UINT32_(value) << TRAM_CTRLA_ENABLE_Pos)) /* Assignment of value for ENABLE in the TRAM_CTRLA register */
#define TRAM_CTRLA_TAMPERS_Pos                _UINT32_(4)                                          /* (TRAM_CTRLA) Tamper Erase Position */
#define TRAM_CTRLA_TAMPERS_Msk                (_UINT32_(0x1) << TRAM_CTRLA_TAMPERS_Pos)            /* (TRAM_CTRLA) Tamper Erase Mask */
#define TRAM_CTRLA_TAMPERS(value)             (TRAM_CTRLA_TAMPERS_Msk & (_UINT32_(value) << TRAM_CTRLA_TAMPERS_Pos)) /* Assignment of value for TAMPERS in the TRAM_CTRLA register */
#define TRAM_CTRLA_DRP_Pos                    _UINT32_(6)                                          /* (TRAM_CTRLA) Data Remanence Prevention Position */
#define TRAM_CTRLA_DRP_Msk                    (_UINT32_(0x1) << TRAM_CTRLA_DRP_Pos)                /* (TRAM_CTRLA) Data Remanence Prevention Mask */
#define TRAM_CTRLA_DRP(value)                 (TRAM_CTRLA_DRP_Msk & (_UINT32_(value) << TRAM_CTRLA_DRP_Pos)) /* Assignment of value for DRP in the TRAM_CTRLA register */
#define TRAM_CTRLA_SILACC_Pos                 _UINT32_(7)                                          /* (TRAM_CTRLA) Silent Access Position */
#define TRAM_CTRLA_SILACC_Msk                 (_UINT32_(0x1) << TRAM_CTRLA_SILACC_Pos)             /* (TRAM_CTRLA) Silent Access Mask */
#define TRAM_CTRLA_SILACC(value)              (TRAM_CTRLA_SILACC_Msk & (_UINT32_(value) << TRAM_CTRLA_SILACC_Pos)) /* Assignment of value for SILACC in the TRAM_CTRLA register */
#define TRAM_CTRLA_Msk                        _UINT32_(0x000000D3)                                 /* (TRAM_CTRLA) Register Mask  */


/* -------- TRAM_INTENCLR : (TRAM Offset: 0x04) (R/W 32) Interrupt Enable Clear -------- */
#define TRAM_INTENCLR_RESETVALUE              _UINT32_(0x00)                                       /*  (TRAM_INTENCLR) Interrupt Enable Clear  Reset Value */

#define TRAM_INTENCLR_ERR_Pos                 _UINT32_(0)                                          /* (TRAM_INTENCLR) TrustRAM Readout Error Interrupt Enable Position */
#define TRAM_INTENCLR_ERR_Msk                 (_UINT32_(0x1) << TRAM_INTENCLR_ERR_Pos)             /* (TRAM_INTENCLR) TrustRAM Readout Error Interrupt Enable Mask */
#define TRAM_INTENCLR_ERR(value)              (TRAM_INTENCLR_ERR_Msk & (_UINT32_(value) << TRAM_INTENCLR_ERR_Pos)) /* Assignment of value for ERR in the TRAM_INTENCLR register */
#define TRAM_INTENCLR_DRP_Pos                 _UINT32_(1)                                          /* (TRAM_INTENCLR) Data Remanence Prevention Ended Interrupt Enable Position */
#define TRAM_INTENCLR_DRP_Msk                 (_UINT32_(0x1) << TRAM_INTENCLR_DRP_Pos)             /* (TRAM_INTENCLR) Data Remanence Prevention Ended Interrupt Enable Mask */
#define TRAM_INTENCLR_DRP(value)              (TRAM_INTENCLR_DRP_Msk & (_UINT32_(value) << TRAM_INTENCLR_DRP_Pos)) /* Assignment of value for DRP in the TRAM_INTENCLR register */
#define TRAM_INTENCLR_Msk                     _UINT32_(0x00000003)                                 /* (TRAM_INTENCLR) Register Mask  */


/* -------- TRAM_INTENSET : (TRAM Offset: 0x08) (R/W 32) Interrupt Enable Set -------- */
#define TRAM_INTENSET_RESETVALUE              _UINT32_(0x00)                                       /*  (TRAM_INTENSET) Interrupt Enable Set  Reset Value */

#define TRAM_INTENSET_ERR_Pos                 _UINT32_(0)                                          /* (TRAM_INTENSET) TrustRAM Readout Error Interrupt Enable Position */
#define TRAM_INTENSET_ERR_Msk                 (_UINT32_(0x1) << TRAM_INTENSET_ERR_Pos)             /* (TRAM_INTENSET) TrustRAM Readout Error Interrupt Enable Mask */
#define TRAM_INTENSET_ERR(value)              (TRAM_INTENSET_ERR_Msk & (_UINT32_(value) << TRAM_INTENSET_ERR_Pos)) /* Assignment of value for ERR in the TRAM_INTENSET register */
#define TRAM_INTENSET_DRP_Pos                 _UINT32_(1)                                          /* (TRAM_INTENSET) Data Remanence Prevention Ended Interrupt Enable Position */
#define TRAM_INTENSET_DRP_Msk                 (_UINT32_(0x1) << TRAM_INTENSET_DRP_Pos)             /* (TRAM_INTENSET) Data Remanence Prevention Ended Interrupt Enable Mask */
#define TRAM_INTENSET_DRP(value)              (TRAM_INTENSET_DRP_Msk & (_UINT32_(value) << TRAM_INTENSET_DRP_Pos)) /* Assignment of value for DRP in the TRAM_INTENSET register */
#define TRAM_INTENSET_Msk                     _UINT32_(0x00000003)                                 /* (TRAM_INTENSET) Register Mask  */


/* -------- TRAM_INTFLAG : (TRAM Offset: 0x0C) (R/W 32) Interrupt Flag Status and Clear -------- */
#define TRAM_INTFLAG_RESETVALUE               _UINT32_(0x00)                                       /*  (TRAM_INTFLAG) Interrupt Flag Status and Clear  Reset Value */

#define TRAM_INTFLAG_ERR_Pos                  _UINT32_(0)                                          /* (TRAM_INTFLAG) TrustRAM Readout Error Position */
#define TRAM_INTFLAG_ERR_Msk                  (_UINT32_(0x1) << TRAM_INTFLAG_ERR_Pos)              /* (TRAM_INTFLAG) TrustRAM Readout Error Mask */
#define TRAM_INTFLAG_ERR(value)               (TRAM_INTFLAG_ERR_Msk & (_UINT32_(value) << TRAM_INTFLAG_ERR_Pos)) /* Assignment of value for ERR in the TRAM_INTFLAG register */
#define TRAM_INTFLAG_DRP_Pos                  _UINT32_(1)                                          /* (TRAM_INTFLAG) Data Remanence Prevention Ended Position */
#define TRAM_INTFLAG_DRP_Msk                  (_UINT32_(0x1) << TRAM_INTFLAG_DRP_Pos)              /* (TRAM_INTFLAG) Data Remanence Prevention Ended Mask */
#define TRAM_INTFLAG_DRP(value)               (TRAM_INTFLAG_DRP_Msk & (_UINT32_(value) << TRAM_INTFLAG_DRP_Pos)) /* Assignment of value for DRP in the TRAM_INTFLAG register */
#define TRAM_INTFLAG_Msk                      _UINT32_(0x00000003)                                 /* (TRAM_INTFLAG) Register Mask  */


/* -------- TRAM_STATUS : (TRAM Offset: 0x10) ( R/ 32) Status -------- */
#define TRAM_STATUS_RESETVALUE                _UINT32_(0x00)                                       /*  (TRAM_STATUS) Status  Reset Value */

#define TRAM_STATUS_RAMINV_Pos                _UINT32_(0)                                          /* (TRAM_STATUS) RAM Inversion Bit Position */
#define TRAM_STATUS_RAMINV_Msk                (_UINT32_(0x1) << TRAM_STATUS_RAMINV_Pos)            /* (TRAM_STATUS) RAM Inversion Bit Mask */
#define TRAM_STATUS_RAMINV(value)             (TRAM_STATUS_RAMINV_Msk & (_UINT32_(value) << TRAM_STATUS_RAMINV_Pos)) /* Assignment of value for RAMINV in the TRAM_STATUS register */
#define TRAM_STATUS_DRP_Pos                   _UINT32_(1)                                          /* (TRAM_STATUS) Data Remanence Prevention Ongoing Position */
#define TRAM_STATUS_DRP_Msk                   (_UINT32_(0x1) << TRAM_STATUS_DRP_Pos)               /* (TRAM_STATUS) Data Remanence Prevention Ongoing Mask */
#define TRAM_STATUS_DRP(value)                (TRAM_STATUS_DRP_Msk & (_UINT32_(value) << TRAM_STATUS_DRP_Pos)) /* Assignment of value for DRP in the TRAM_STATUS register */
#define TRAM_STATUS_Msk                       _UINT32_(0x00000003)                                 /* (TRAM_STATUS) Register Mask  */


/* -------- TRAM_SYNCBUSY : (TRAM Offset: 0x14) ( R/ 32) Synchronization Busy Status -------- */
#define TRAM_SYNCBUSY_RESETVALUE              _UINT32_(0x00)                                       /*  (TRAM_SYNCBUSY) Synchronization Busy Status  Reset Value */

#define TRAM_SYNCBUSY_SWRST_Pos               _UINT32_(0)                                          /* (TRAM_SYNCBUSY) Software Reset Busy Position */
#define TRAM_SYNCBUSY_SWRST_Msk               (_UINT32_(0x1) << TRAM_SYNCBUSY_SWRST_Pos)           /* (TRAM_SYNCBUSY) Software Reset Busy Mask */
#define TRAM_SYNCBUSY_SWRST(value)            (TRAM_SYNCBUSY_SWRST_Msk & (_UINT32_(value) << TRAM_SYNCBUSY_SWRST_Pos)) /* Assignment of value for SWRST in the TRAM_SYNCBUSY register */
#define TRAM_SYNCBUSY_ENABLE_Pos              _UINT32_(1)                                          /* (TRAM_SYNCBUSY) Enable Busy Position */
#define TRAM_SYNCBUSY_ENABLE_Msk              (_UINT32_(0x1) << TRAM_SYNCBUSY_ENABLE_Pos)          /* (TRAM_SYNCBUSY) Enable Busy Mask */
#define TRAM_SYNCBUSY_ENABLE(value)           (TRAM_SYNCBUSY_ENABLE_Msk & (_UINT32_(value) << TRAM_SYNCBUSY_ENABLE_Pos)) /* Assignment of value for ENABLE in the TRAM_SYNCBUSY register */
#define TRAM_SYNCBUSY_Msk                     _UINT32_(0x00000003)                                 /* (TRAM_SYNCBUSY) Register Mask  */


/* -------- TRAM_DSCC : (TRAM Offset: 0x18) ( /W 32) Data Scramble Control -------- */
#define TRAM_DSCC_RESETVALUE                  _UINT32_(0x00)                                       /*  (TRAM_DSCC) Data Scramble Control  Reset Value */

#define TRAM_DSCC_DSCKEY_Pos                  _UINT32_(0)                                          /* (TRAM_DSCC) Data Scramble Key Position */
#define TRAM_DSCC_DSCKEY_Msk                  (_UINT32_(0x3FFFFFFF) << TRAM_DSCC_DSCKEY_Pos)       /* (TRAM_DSCC) Data Scramble Key Mask */
#define TRAM_DSCC_DSCKEY(value)               (TRAM_DSCC_DSCKEY_Msk & (_UINT32_(value) << TRAM_DSCC_DSCKEY_Pos)) /* Assignment of value for DSCKEY in the TRAM_DSCC register */
#define TRAM_DSCC_DSCEN_Pos                   _UINT32_(31)                                         /* (TRAM_DSCC) Data Scramble Enable Position */
#define TRAM_DSCC_DSCEN_Msk                   (_UINT32_(0x1) << TRAM_DSCC_DSCEN_Pos)               /* (TRAM_DSCC) Data Scramble Enable Mask */
#define TRAM_DSCC_DSCEN(value)                (TRAM_DSCC_DSCEN_Msk & (_UINT32_(value) << TRAM_DSCC_DSCEN_Pos)) /* Assignment of value for DSCEN in the TRAM_DSCC register */
#define TRAM_DSCC_Msk                         _UINT32_(0xBFFFFFFF)                                 /* (TRAM_DSCC) Register Mask  */


/* -------- TRAM_PERMW : (TRAM Offset: 0x1C) ( /W 32) Permutation Write -------- */
#define TRAM_PERMW_RESETVALUE                 _UINT32_(0x00)                                       /*  (TRAM_PERMW) Permutation Write  Reset Value */

#define TRAM_PERMW_DATA_Pos                   _UINT32_(0)                                          /* (TRAM_PERMW) Permutation Scrambler Data Input Position */
#define TRAM_PERMW_DATA_Msk                   (_UINT32_(0x7) << TRAM_PERMW_DATA_Pos)               /* (TRAM_PERMW) Permutation Scrambler Data Input Mask */
#define TRAM_PERMW_DATA(value)                (TRAM_PERMW_DATA_Msk & (_UINT32_(value) << TRAM_PERMW_DATA_Pos)) /* Assignment of value for DATA in the TRAM_PERMW register */
#define TRAM_PERMW_Msk                        _UINT32_(0x00000007)                                 /* (TRAM_PERMW) Register Mask  */


/* -------- TRAM_PERMR : (TRAM Offset: 0x20) ( R/ 32) Permutation Read -------- */
#define TRAM_PERMR_RESETVALUE                 _UINT32_(0x00)                                       /*  (TRAM_PERMR) Permutation Read  Reset Value */

#define TRAM_PERMR_DATA_Pos                   _UINT32_(0)                                          /* (TRAM_PERMR) Permutation Scrambler Data Output Position */
#define TRAM_PERMR_DATA_Msk                   (_UINT32_(0x7) << TRAM_PERMR_DATA_Pos)               /* (TRAM_PERMR) Permutation Scrambler Data Output Mask */
#define TRAM_PERMR_DATA(value)                (TRAM_PERMR_DATA_Msk & (_UINT32_(value) << TRAM_PERMR_DATA_Pos)) /* Assignment of value for DATA in the TRAM_PERMR register */
#define TRAM_PERMR_Msk                        _UINT32_(0x00000007)                                 /* (TRAM_PERMR) Register Mask  */


/* -------- TRAM_WORD : (TRAM Offset: 0x1000) (R/W 32) TrustRAM -------- */
#define TRAM_WORD_RESETVALUE                  _UINT32_(0x00)                                       /*  (TRAM_WORD) TrustRAM  Reset Value */

#define TRAM_WORD_DATA_Pos                    _UINT32_(0)                                          /* (TRAM_WORD) Trust RAM Data Position */
#define TRAM_WORD_DATA_Msk                    (_UINT32_(0xFFFFFFFF) << TRAM_WORD_DATA_Pos)         /* (TRAM_WORD) Trust RAM Data Mask */
#define TRAM_WORD_DATA(value)                 (TRAM_WORD_DATA_Msk & (_UINT32_(value) << TRAM_WORD_DATA_Pos)) /* Assignment of value for DATA in the TRAM_WORD register */
#define TRAM_WORD_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (TRAM_WORD) Register Mask  */


/* TRAM register offsets definitions */
#define TRAM_CTRLA_REG_OFST            _UINT32_(0x00)      /* (TRAM_CTRLA) Control Offset */
#define TRAM_INTENCLR_REG_OFST         _UINT32_(0x04)      /* (TRAM_INTENCLR) Interrupt Enable Clear Offset */
#define TRAM_INTENSET_REG_OFST         _UINT32_(0x08)      /* (TRAM_INTENSET) Interrupt Enable Set Offset */
#define TRAM_INTFLAG_REG_OFST          _UINT32_(0x0C)      /* (TRAM_INTFLAG) Interrupt Flag Status and Clear Offset */
#define TRAM_STATUS_REG_OFST           _UINT32_(0x10)      /* (TRAM_STATUS) Status Offset */
#define TRAM_SYNCBUSY_REG_OFST         _UINT32_(0x14)      /* (TRAM_SYNCBUSY) Synchronization Busy Status Offset */
#define TRAM_DSCC_REG_OFST             _UINT32_(0x18)      /* (TRAM_DSCC) Data Scramble Control Offset */
#define TRAM_PERMW_REG_OFST            _UINT32_(0x1C)      /* (TRAM_PERMW) Permutation Write Offset */
#define TRAM_PERMR_REG_OFST            _UINT32_(0x20)      /* (TRAM_PERMR) Permutation Read Offset */
#define TRAM_WORD_REG_OFST             _UINT32_(0x1000)    /* (TRAM_WORD) TrustRAM Offset */
#define TRAM_WORD0_REG_OFST            _UINT32_(0x1000)    /* (TRAM_WORD0) TrustRAM Offset */
#define TRAM_WORD1_REG_OFST            _UINT32_(0x1004)    /* (TRAM_WORD1) TrustRAM Offset */
#define TRAM_WORD2_REG_OFST            _UINT32_(0x1008)    /* (TRAM_WORD2) TrustRAM Offset */
#define TRAM_WORD3_REG_OFST            _UINT32_(0x100C)    /* (TRAM_WORD3) TrustRAM Offset */
#define TRAM_WORD4_REG_OFST            _UINT32_(0x1010)    /* (TRAM_WORD4) TrustRAM Offset */
#define TRAM_WORD5_REG_OFST            _UINT32_(0x1014)    /* (TRAM_WORD5) TrustRAM Offset */
#define TRAM_WORD6_REG_OFST            _UINT32_(0x1018)    /* (TRAM_WORD6) TrustRAM Offset */
#define TRAM_WORD7_REG_OFST            _UINT32_(0x101C)    /* (TRAM_WORD7) TrustRAM Offset */
#define TRAM_WORD8_REG_OFST            _UINT32_(0x1020)    /* (TRAM_WORD8) TrustRAM Offset */
#define TRAM_WORD9_REG_OFST            _UINT32_(0x1024)    /* (TRAM_WORD9) TrustRAM Offset */
#define TRAM_WORD10_REG_OFST           _UINT32_(0x1028)    /* (TRAM_WORD10) TrustRAM Offset */
#define TRAM_WORD11_REG_OFST           _UINT32_(0x102C)    /* (TRAM_WORD11) TrustRAM Offset */
#define TRAM_WORD12_REG_OFST           _UINT32_(0x1030)    /* (TRAM_WORD12) TrustRAM Offset */
#define TRAM_WORD13_REG_OFST           _UINT32_(0x1034)    /* (TRAM_WORD13) TrustRAM Offset */
#define TRAM_WORD14_REG_OFST           _UINT32_(0x1038)    /* (TRAM_WORD14) TrustRAM Offset */
#define TRAM_WORD15_REG_OFST           _UINT32_(0x103C)    /* (TRAM_WORD15) TrustRAM Offset */
#define TRAM_WORD16_REG_OFST           _UINT32_(0x1040)    /* (TRAM_WORD16) TrustRAM Offset */
#define TRAM_WORD17_REG_OFST           _UINT32_(0x1044)    /* (TRAM_WORD17) TrustRAM Offset */
#define TRAM_WORD18_REG_OFST           _UINT32_(0x1048)    /* (TRAM_WORD18) TrustRAM Offset */
#define TRAM_WORD19_REG_OFST           _UINT32_(0x104C)    /* (TRAM_WORD19) TrustRAM Offset */
#define TRAM_WORD20_REG_OFST           _UINT32_(0x1050)    /* (TRAM_WORD20) TrustRAM Offset */
#define TRAM_WORD21_REG_OFST           _UINT32_(0x1054)    /* (TRAM_WORD21) TrustRAM Offset */
#define TRAM_WORD22_REG_OFST           _UINT32_(0x1058)    /* (TRAM_WORD22) TrustRAM Offset */
#define TRAM_WORD23_REG_OFST           _UINT32_(0x105C)    /* (TRAM_WORD23) TrustRAM Offset */
#define TRAM_WORD24_REG_OFST           _UINT32_(0x1060)    /* (TRAM_WORD24) TrustRAM Offset */
#define TRAM_WORD25_REG_OFST           _UINT32_(0x1064)    /* (TRAM_WORD25) TrustRAM Offset */
#define TRAM_WORD26_REG_OFST           _UINT32_(0x1068)    /* (TRAM_WORD26) TrustRAM Offset */
#define TRAM_WORD27_REG_OFST           _UINT32_(0x106C)    /* (TRAM_WORD27) TrustRAM Offset */
#define TRAM_WORD28_REG_OFST           _UINT32_(0x1070)    /* (TRAM_WORD28) TrustRAM Offset */
#define TRAM_WORD29_REG_OFST           _UINT32_(0x1074)    /* (TRAM_WORD29) TrustRAM Offset */
#define TRAM_WORD30_REG_OFST           _UINT32_(0x1078)    /* (TRAM_WORD30) TrustRAM Offset */
#define TRAM_WORD31_REG_OFST           _UINT32_(0x107C)    /* (TRAM_WORD31) TrustRAM Offset */
#define TRAM_WORD32_REG_OFST           _UINT32_(0x1080)    /* (TRAM_WORD32) TrustRAM Offset */
#define TRAM_WORD33_REG_OFST           _UINT32_(0x1084)    /* (TRAM_WORD33) TrustRAM Offset */
#define TRAM_WORD34_REG_OFST           _UINT32_(0x1088)    /* (TRAM_WORD34) TrustRAM Offset */
#define TRAM_WORD35_REG_OFST           _UINT32_(0x108C)    /* (TRAM_WORD35) TrustRAM Offset */
#define TRAM_WORD36_REG_OFST           _UINT32_(0x1090)    /* (TRAM_WORD36) TrustRAM Offset */
#define TRAM_WORD37_REG_OFST           _UINT32_(0x1094)    /* (TRAM_WORD37) TrustRAM Offset */
#define TRAM_WORD38_REG_OFST           _UINT32_(0x1098)    /* (TRAM_WORD38) TrustRAM Offset */
#define TRAM_WORD39_REG_OFST           _UINT32_(0x109C)    /* (TRAM_WORD39) TrustRAM Offset */
#define TRAM_WORD40_REG_OFST           _UINT32_(0x10A0)    /* (TRAM_WORD40) TrustRAM Offset */
#define TRAM_WORD41_REG_OFST           _UINT32_(0x10A4)    /* (TRAM_WORD41) TrustRAM Offset */
#define TRAM_WORD42_REG_OFST           _UINT32_(0x10A8)    /* (TRAM_WORD42) TrustRAM Offset */
#define TRAM_WORD43_REG_OFST           _UINT32_(0x10AC)    /* (TRAM_WORD43) TrustRAM Offset */
#define TRAM_WORD44_REG_OFST           _UINT32_(0x10B0)    /* (TRAM_WORD44) TrustRAM Offset */
#define TRAM_WORD45_REG_OFST           _UINT32_(0x10B4)    /* (TRAM_WORD45) TrustRAM Offset */
#define TRAM_WORD46_REG_OFST           _UINT32_(0x10B8)    /* (TRAM_WORD46) TrustRAM Offset */
#define TRAM_WORD47_REG_OFST           _UINT32_(0x10BC)    /* (TRAM_WORD47) TrustRAM Offset */
#define TRAM_WORD48_REG_OFST           _UINT32_(0x10C0)    /* (TRAM_WORD48) TrustRAM Offset */
#define TRAM_WORD49_REG_OFST           _UINT32_(0x10C4)    /* (TRAM_WORD49) TrustRAM Offset */
#define TRAM_WORD50_REG_OFST           _UINT32_(0x10C8)    /* (TRAM_WORD50) TrustRAM Offset */
#define TRAM_WORD51_REG_OFST           _UINT32_(0x10CC)    /* (TRAM_WORD51) TrustRAM Offset */
#define TRAM_WORD52_REG_OFST           _UINT32_(0x10D0)    /* (TRAM_WORD52) TrustRAM Offset */
#define TRAM_WORD53_REG_OFST           _UINT32_(0x10D4)    /* (TRAM_WORD53) TrustRAM Offset */
#define TRAM_WORD54_REG_OFST           _UINT32_(0x10D8)    /* (TRAM_WORD54) TrustRAM Offset */
#define TRAM_WORD55_REG_OFST           _UINT32_(0x10DC)    /* (TRAM_WORD55) TrustRAM Offset */
#define TRAM_WORD56_REG_OFST           _UINT32_(0x10E0)    /* (TRAM_WORD56) TrustRAM Offset */
#define TRAM_WORD57_REG_OFST           _UINT32_(0x10E4)    /* (TRAM_WORD57) TrustRAM Offset */
#define TRAM_WORD58_REG_OFST           _UINT32_(0x10E8)    /* (TRAM_WORD58) TrustRAM Offset */
#define TRAM_WORD59_REG_OFST           _UINT32_(0x10EC)    /* (TRAM_WORD59) TrustRAM Offset */
#define TRAM_WORD60_REG_OFST           _UINT32_(0x10F0)    /* (TRAM_WORD60) TrustRAM Offset */
#define TRAM_WORD61_REG_OFST           _UINT32_(0x10F4)    /* (TRAM_WORD61) TrustRAM Offset */
#define TRAM_WORD62_REG_OFST           _UINT32_(0x10F8)    /* (TRAM_WORD62) TrustRAM Offset */
#define TRAM_WORD63_REG_OFST           _UINT32_(0x10FC)    /* (TRAM_WORD63) TrustRAM Offset */
#define TRAM_WORD64_REG_OFST           _UINT32_(0x1100)    /* (TRAM_WORD64) TrustRAM Offset */
#define TRAM_WORD65_REG_OFST           _UINT32_(0x1104)    /* (TRAM_WORD65) TrustRAM Offset */
#define TRAM_WORD66_REG_OFST           _UINT32_(0x1108)    /* (TRAM_WORD66) TrustRAM Offset */
#define TRAM_WORD67_REG_OFST           _UINT32_(0x110C)    /* (TRAM_WORD67) TrustRAM Offset */
#define TRAM_WORD68_REG_OFST           _UINT32_(0x1110)    /* (TRAM_WORD68) TrustRAM Offset */
#define TRAM_WORD69_REG_OFST           _UINT32_(0x1114)    /* (TRAM_WORD69) TrustRAM Offset */
#define TRAM_WORD70_REG_OFST           _UINT32_(0x1118)    /* (TRAM_WORD70) TrustRAM Offset */
#define TRAM_WORD71_REG_OFST           _UINT32_(0x111C)    /* (TRAM_WORD71) TrustRAM Offset */
#define TRAM_WORD72_REG_OFST           _UINT32_(0x1120)    /* (TRAM_WORD72) TrustRAM Offset */
#define TRAM_WORD73_REG_OFST           _UINT32_(0x1124)    /* (TRAM_WORD73) TrustRAM Offset */
#define TRAM_WORD74_REG_OFST           _UINT32_(0x1128)    /* (TRAM_WORD74) TrustRAM Offset */
#define TRAM_WORD75_REG_OFST           _UINT32_(0x112C)    /* (TRAM_WORD75) TrustRAM Offset */
#define TRAM_WORD76_REG_OFST           _UINT32_(0x1130)    /* (TRAM_WORD76) TrustRAM Offset */
#define TRAM_WORD77_REG_OFST           _UINT32_(0x1134)    /* (TRAM_WORD77) TrustRAM Offset */
#define TRAM_WORD78_REG_OFST           _UINT32_(0x1138)    /* (TRAM_WORD78) TrustRAM Offset */
#define TRAM_WORD79_REG_OFST           _UINT32_(0x113C)    /* (TRAM_WORD79) TrustRAM Offset */
#define TRAM_WORD80_REG_OFST           _UINT32_(0x1140)    /* (TRAM_WORD80) TrustRAM Offset */
#define TRAM_WORD81_REG_OFST           _UINT32_(0x1144)    /* (TRAM_WORD81) TrustRAM Offset */
#define TRAM_WORD82_REG_OFST           _UINT32_(0x1148)    /* (TRAM_WORD82) TrustRAM Offset */
#define TRAM_WORD83_REG_OFST           _UINT32_(0x114C)    /* (TRAM_WORD83) TrustRAM Offset */
#define TRAM_WORD84_REG_OFST           _UINT32_(0x1150)    /* (TRAM_WORD84) TrustRAM Offset */
#define TRAM_WORD85_REG_OFST           _UINT32_(0x1154)    /* (TRAM_WORD85) TrustRAM Offset */
#define TRAM_WORD86_REG_OFST           _UINT32_(0x1158)    /* (TRAM_WORD86) TrustRAM Offset */
#define TRAM_WORD87_REG_OFST           _UINT32_(0x115C)    /* (TRAM_WORD87) TrustRAM Offset */
#define TRAM_WORD88_REG_OFST           _UINT32_(0x1160)    /* (TRAM_WORD88) TrustRAM Offset */
#define TRAM_WORD89_REG_OFST           _UINT32_(0x1164)    /* (TRAM_WORD89) TrustRAM Offset */
#define TRAM_WORD90_REG_OFST           _UINT32_(0x1168)    /* (TRAM_WORD90) TrustRAM Offset */
#define TRAM_WORD91_REG_OFST           _UINT32_(0x116C)    /* (TRAM_WORD91) TrustRAM Offset */
#define TRAM_WORD92_REG_OFST           _UINT32_(0x1170)    /* (TRAM_WORD92) TrustRAM Offset */
#define TRAM_WORD93_REG_OFST           _UINT32_(0x1174)    /* (TRAM_WORD93) TrustRAM Offset */
#define TRAM_WORD94_REG_OFST           _UINT32_(0x1178)    /* (TRAM_WORD94) TrustRAM Offset */
#define TRAM_WORD95_REG_OFST           _UINT32_(0x117C)    /* (TRAM_WORD95) TrustRAM Offset */
#define TRAM_WORD96_REG_OFST           _UINT32_(0x1180)    /* (TRAM_WORD96) TrustRAM Offset */
#define TRAM_WORD97_REG_OFST           _UINT32_(0x1184)    /* (TRAM_WORD97) TrustRAM Offset */
#define TRAM_WORD98_REG_OFST           _UINT32_(0x1188)    /* (TRAM_WORD98) TrustRAM Offset */
#define TRAM_WORD99_REG_OFST           _UINT32_(0x118C)    /* (TRAM_WORD99) TrustRAM Offset */
#define TRAM_WORD100_REG_OFST          _UINT32_(0x1190)    /* (TRAM_WORD100) TrustRAM Offset */
#define TRAM_WORD101_REG_OFST          _UINT32_(0x1194)    /* (TRAM_WORD101) TrustRAM Offset */
#define TRAM_WORD102_REG_OFST          _UINT32_(0x1198)    /* (TRAM_WORD102) TrustRAM Offset */
#define TRAM_WORD103_REG_OFST          _UINT32_(0x119C)    /* (TRAM_WORD103) TrustRAM Offset */
#define TRAM_WORD104_REG_OFST          _UINT32_(0x11A0)    /* (TRAM_WORD104) TrustRAM Offset */
#define TRAM_WORD105_REG_OFST          _UINT32_(0x11A4)    /* (TRAM_WORD105) TrustRAM Offset */
#define TRAM_WORD106_REG_OFST          _UINT32_(0x11A8)    /* (TRAM_WORD106) TrustRAM Offset */
#define TRAM_WORD107_REG_OFST          _UINT32_(0x11AC)    /* (TRAM_WORD107) TrustRAM Offset */
#define TRAM_WORD108_REG_OFST          _UINT32_(0x11B0)    /* (TRAM_WORD108) TrustRAM Offset */
#define TRAM_WORD109_REG_OFST          _UINT32_(0x11B4)    /* (TRAM_WORD109) TrustRAM Offset */
#define TRAM_WORD110_REG_OFST          _UINT32_(0x11B8)    /* (TRAM_WORD110) TrustRAM Offset */
#define TRAM_WORD111_REG_OFST          _UINT32_(0x11BC)    /* (TRAM_WORD111) TrustRAM Offset */
#define TRAM_WORD112_REG_OFST          _UINT32_(0x11C0)    /* (TRAM_WORD112) TrustRAM Offset */
#define TRAM_WORD113_REG_OFST          _UINT32_(0x11C4)    /* (TRAM_WORD113) TrustRAM Offset */
#define TRAM_WORD114_REG_OFST          _UINT32_(0x11C8)    /* (TRAM_WORD114) TrustRAM Offset */
#define TRAM_WORD115_REG_OFST          _UINT32_(0x11CC)    /* (TRAM_WORD115) TrustRAM Offset */
#define TRAM_WORD116_REG_OFST          _UINT32_(0x11D0)    /* (TRAM_WORD116) TrustRAM Offset */
#define TRAM_WORD117_REG_OFST          _UINT32_(0x11D4)    /* (TRAM_WORD117) TrustRAM Offset */
#define TRAM_WORD118_REG_OFST          _UINT32_(0x11D8)    /* (TRAM_WORD118) TrustRAM Offset */
#define TRAM_WORD119_REG_OFST          _UINT32_(0x11DC)    /* (TRAM_WORD119) TrustRAM Offset */
#define TRAM_WORD120_REG_OFST          _UINT32_(0x11E0)    /* (TRAM_WORD120) TrustRAM Offset */
#define TRAM_WORD121_REG_OFST          _UINT32_(0x11E4)    /* (TRAM_WORD121) TrustRAM Offset */
#define TRAM_WORD122_REG_OFST          _UINT32_(0x11E8)    /* (TRAM_WORD122) TrustRAM Offset */
#define TRAM_WORD123_REG_OFST          _UINT32_(0x11EC)    /* (TRAM_WORD123) TrustRAM Offset */
#define TRAM_WORD124_REG_OFST          _UINT32_(0x11F0)    /* (TRAM_WORD124) TrustRAM Offset */
#define TRAM_WORD125_REG_OFST          _UINT32_(0x11F4)    /* (TRAM_WORD125) TrustRAM Offset */
#define TRAM_WORD126_REG_OFST          _UINT32_(0x11F8)    /* (TRAM_WORD126) TrustRAM Offset */
#define TRAM_WORD127_REG_OFST          _UINT32_(0x11FC)    /* (TRAM_WORD127) TrustRAM Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* TRAM register API structure */
typedef struct
{  /* TrustRAM */
  __IO  uint32_t                       TRAM_CTRLA;         /* Offset: 0x00 (R/W  32) Control */
  __IO  uint32_t                       TRAM_INTENCLR;      /* Offset: 0x04 (R/W  32) Interrupt Enable Clear */
  __IO  uint32_t                       TRAM_INTENSET;      /* Offset: 0x08 (R/W  32) Interrupt Enable Set */
  __IO  uint32_t                       TRAM_INTFLAG;       /* Offset: 0x0C (R/W  32) Interrupt Flag Status and Clear */
  __I   uint32_t                       TRAM_STATUS;        /* Offset: 0x10 (R/   32) Status */
  __I   uint32_t                       TRAM_SYNCBUSY;      /* Offset: 0x14 (R/   32) Synchronization Busy Status */
  __O   uint32_t                       TRAM_DSCC;          /* Offset: 0x18 ( /W  32) Data Scramble Control */
  __O   uint32_t                       TRAM_PERMW;         /* Offset: 0x1C ( /W  32) Permutation Write */
  __I   uint32_t                       TRAM_PERMR;         /* Offset: 0x20 (R/   32) Permutation Read */
  __I   uint8_t                        Reserved1[0xFDC];
  __IO  uint32_t                       TRAM_WORD[128];     /* Offset: 0x1000 (R/W  32) TrustRAM */
} tram_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMSG00_TRAM_COMPONENT_H_ */
