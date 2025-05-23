/*
 * Component description for HMATRIX2
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
#ifndef _PIC32CMGC00_HMATRIX2_COMPONENT_H_
#define _PIC32CMGC00_HMATRIX2_COMPONENT_H_

/* ************************************************************************** */
/*                    SOFTWARE API DEFINITION FOR HMATRIX2                    */
/* ************************************************************************** */

/* -------- HMATRIX2_PRAS : (HMATRIX2 Offset: 0x00) (R/W 32) Priority A for Slave -------- */
#define HMATRIX2_PRAS_RESETVALUE              _UINT32_(0x00)                                       /*  (HMATRIX2_PRAS) Priority A for Slave  Reset Value */

#define HMATRIX2_PRAS_M0PR_Pos                _UINT32_(0)                                          /* (HMATRIX2_PRAS) Master 0 Priority Position */
#define HMATRIX2_PRAS_M0PR_Msk                (_UINT32_(0x3) << HMATRIX2_PRAS_M0PR_Pos)            /* (HMATRIX2_PRAS) Master 0 Priority Mask */
#define HMATRIX2_PRAS_M0PR(value)             (HMATRIX2_PRAS_M0PR_Msk & (_UINT32_(value) << HMATRIX2_PRAS_M0PR_Pos)) /* Assignment of value for M0PR in the HMATRIX2_PRAS register */
#define HMATRIX2_PRAS_LQOSEN0_Pos             _UINT32_(2)                                          /* (HMATRIX2_PRAS) Latency Quality Of Service Enable for Master 0 Position */
#define HMATRIX2_PRAS_LQOSEN0_Msk             (_UINT32_(0x1) << HMATRIX2_PRAS_LQOSEN0_Pos)         /* (HMATRIX2_PRAS) Latency Quality Of Service Enable for Master 0 Mask */
#define HMATRIX2_PRAS_LQOSEN0(value)          (HMATRIX2_PRAS_LQOSEN0_Msk & (_UINT32_(value) << HMATRIX2_PRAS_LQOSEN0_Pos)) /* Assignment of value for LQOSEN0 in the HMATRIX2_PRAS register */
#define HMATRIX2_PRAS_M1PR_Pos                _UINT32_(4)                                          /* (HMATRIX2_PRAS) Master 1 Priority Position */
#define HMATRIX2_PRAS_M1PR_Msk                (_UINT32_(0x3) << HMATRIX2_PRAS_M1PR_Pos)            /* (HMATRIX2_PRAS) Master 1 Priority Mask */
#define HMATRIX2_PRAS_M1PR(value)             (HMATRIX2_PRAS_M1PR_Msk & (_UINT32_(value) << HMATRIX2_PRAS_M1PR_Pos)) /* Assignment of value for M1PR in the HMATRIX2_PRAS register */
#define HMATRIX2_PRAS_LQOSEN1_Pos             _UINT32_(6)                                          /* (HMATRIX2_PRAS) Latency Quality Of Service Enable for Master 1 Position */
#define HMATRIX2_PRAS_LQOSEN1_Msk             (_UINT32_(0x1) << HMATRIX2_PRAS_LQOSEN1_Pos)         /* (HMATRIX2_PRAS) Latency Quality Of Service Enable for Master 1 Mask */
#define HMATRIX2_PRAS_LQOSEN1(value)          (HMATRIX2_PRAS_LQOSEN1_Msk & (_UINT32_(value) << HMATRIX2_PRAS_LQOSEN1_Pos)) /* Assignment of value for LQOSEN1 in the HMATRIX2_PRAS register */
#define HMATRIX2_PRAS_M2PR_Pos                _UINT32_(8)                                          /* (HMATRIX2_PRAS) Master 2 Priority Position */
#define HMATRIX2_PRAS_M2PR_Msk                (_UINT32_(0x3) << HMATRIX2_PRAS_M2PR_Pos)            /* (HMATRIX2_PRAS) Master 2 Priority Mask */
#define HMATRIX2_PRAS_M2PR(value)             (HMATRIX2_PRAS_M2PR_Msk & (_UINT32_(value) << HMATRIX2_PRAS_M2PR_Pos)) /* Assignment of value for M2PR in the HMATRIX2_PRAS register */
#define HMATRIX2_PRAS_LQOSEN2_Pos             _UINT32_(10)                                         /* (HMATRIX2_PRAS) Latency Quality Of Service Enable for Master 2 Position */
#define HMATRIX2_PRAS_LQOSEN2_Msk             (_UINT32_(0x1) << HMATRIX2_PRAS_LQOSEN2_Pos)         /* (HMATRIX2_PRAS) Latency Quality Of Service Enable for Master 2 Mask */
#define HMATRIX2_PRAS_LQOSEN2(value)          (HMATRIX2_PRAS_LQOSEN2_Msk & (_UINT32_(value) << HMATRIX2_PRAS_LQOSEN2_Pos)) /* Assignment of value for LQOSEN2 in the HMATRIX2_PRAS register */
#define HMATRIX2_PRAS_M3PR_Pos                _UINT32_(12)                                         /* (HMATRIX2_PRAS) Master 3 Priority Position */
#define HMATRIX2_PRAS_M3PR_Msk                (_UINT32_(0x3) << HMATRIX2_PRAS_M3PR_Pos)            /* (HMATRIX2_PRAS) Master 3 Priority Mask */
#define HMATRIX2_PRAS_M3PR(value)             (HMATRIX2_PRAS_M3PR_Msk & (_UINT32_(value) << HMATRIX2_PRAS_M3PR_Pos)) /* Assignment of value for M3PR in the HMATRIX2_PRAS register */
#define HMATRIX2_PRAS_LQOSEN3_Pos             _UINT32_(14)                                         /* (HMATRIX2_PRAS) Latency Quality Of Service Enable for Master 3 Position */
#define HMATRIX2_PRAS_LQOSEN3_Msk             (_UINT32_(0x1) << HMATRIX2_PRAS_LQOSEN3_Pos)         /* (HMATRIX2_PRAS) Latency Quality Of Service Enable for Master 3 Mask */
#define HMATRIX2_PRAS_LQOSEN3(value)          (HMATRIX2_PRAS_LQOSEN3_Msk & (_UINT32_(value) << HMATRIX2_PRAS_LQOSEN3_Pos)) /* Assignment of value for LQOSEN3 in the HMATRIX2_PRAS register */
#define HMATRIX2_PRAS_M4PR_Pos                _UINT32_(16)                                         /* (HMATRIX2_PRAS) Master 4 Priority Position */
#define HMATRIX2_PRAS_M4PR_Msk                (_UINT32_(0x3) << HMATRIX2_PRAS_M4PR_Pos)            /* (HMATRIX2_PRAS) Master 4 Priority Mask */
#define HMATRIX2_PRAS_M4PR(value)             (HMATRIX2_PRAS_M4PR_Msk & (_UINT32_(value) << HMATRIX2_PRAS_M4PR_Pos)) /* Assignment of value for M4PR in the HMATRIX2_PRAS register */
#define HMATRIX2_PRAS_LQOSEN4_Pos             _UINT32_(18)                                         /* (HMATRIX2_PRAS) Latency Quality Of Service Enable for Master 4 Position */
#define HMATRIX2_PRAS_LQOSEN4_Msk             (_UINT32_(0x1) << HMATRIX2_PRAS_LQOSEN4_Pos)         /* (HMATRIX2_PRAS) Latency Quality Of Service Enable for Master 4 Mask */
#define HMATRIX2_PRAS_LQOSEN4(value)          (HMATRIX2_PRAS_LQOSEN4_Msk & (_UINT32_(value) << HMATRIX2_PRAS_LQOSEN4_Pos)) /* Assignment of value for LQOSEN4 in the HMATRIX2_PRAS register */
#define HMATRIX2_PRAS_M5PR_Pos                _UINT32_(20)                                         /* (HMATRIX2_PRAS) Master 5 Priority Position */
#define HMATRIX2_PRAS_M5PR_Msk                (_UINT32_(0x3) << HMATRIX2_PRAS_M5PR_Pos)            /* (HMATRIX2_PRAS) Master 5 Priority Mask */
#define HMATRIX2_PRAS_M5PR(value)             (HMATRIX2_PRAS_M5PR_Msk & (_UINT32_(value) << HMATRIX2_PRAS_M5PR_Pos)) /* Assignment of value for M5PR in the HMATRIX2_PRAS register */
#define HMATRIX2_PRAS_LQOSEN5_Pos             _UINT32_(22)                                         /* (HMATRIX2_PRAS) Latency Quality Of Service Enable for Master 5 Position */
#define HMATRIX2_PRAS_LQOSEN5_Msk             (_UINT32_(0x1) << HMATRIX2_PRAS_LQOSEN5_Pos)         /* (HMATRIX2_PRAS) Latency Quality Of Service Enable for Master 5 Mask */
#define HMATRIX2_PRAS_LQOSEN5(value)          (HMATRIX2_PRAS_LQOSEN5_Msk & (_UINT32_(value) << HMATRIX2_PRAS_LQOSEN5_Pos)) /* Assignment of value for LQOSEN5 in the HMATRIX2_PRAS register */
#define HMATRIX2_PRAS_Msk                     _UINT32_(0x00777777)                                 /* (HMATRIX2_PRAS) Register Mask  */


/* -------- HMATRIX2_MCFG : (HMATRIX2 Offset: 0x00) (R/W 32) Master Configuration -------- */
#define HMATRIX2_MCFG_RESETVALUE              _UINT32_(0x02)                                       /*  (HMATRIX2_MCFG) Master Configuration  Reset Value */

#define HMATRIX2_MCFG_ULBT_Pos                _UINT32_(0)                                          /* (HMATRIX2_MCFG) Undefined Length Burst Type Position */
#define HMATRIX2_MCFG_ULBT_Msk                (_UINT32_(0x7) << HMATRIX2_MCFG_ULBT_Pos)            /* (HMATRIX2_MCFG) Undefined Length Burst Type Mask */
#define HMATRIX2_MCFG_ULBT(value)             (HMATRIX2_MCFG_ULBT_Msk & (_UINT32_(value) << HMATRIX2_MCFG_ULBT_Pos)) /* Assignment of value for ULBT in the HMATRIX2_MCFG register */
#define   HMATRIX2_MCFG_ULBT_INFINITE_Val     _UINT32_(0x0)                                        /* (HMATRIX2_MCFG) Infinite Length  */
#define   HMATRIX2_MCFG_ULBT_SINGLE_Val       _UINT32_(0x1)                                        /* (HMATRIX2_MCFG) Single Access  */
#define   HMATRIX2_MCFG_ULBT_FOUR_BEAT_Val    _UINT32_(0x2)                                        /* (HMATRIX2_MCFG) Four Beat Burst  */
#define   HMATRIX2_MCFG_ULBT_EIGHT_BEAT_Val   _UINT32_(0x3)                                        /* (HMATRIX2_MCFG) Eight Beat Burst  */
#define   HMATRIX2_MCFG_ULBT_SIXTEEN_BEAT_Val _UINT32_(0x4)                                        /* (HMATRIX2_MCFG) Sixteen Beat Burst  */
#define HMATRIX2_MCFG_ULBT_INFINITE           (HMATRIX2_MCFG_ULBT_INFINITE_Val << HMATRIX2_MCFG_ULBT_Pos) /* (HMATRIX2_MCFG) Infinite Length Position */
#define HMATRIX2_MCFG_ULBT_SINGLE             (HMATRIX2_MCFG_ULBT_SINGLE_Val << HMATRIX2_MCFG_ULBT_Pos) /* (HMATRIX2_MCFG) Single Access Position */
#define HMATRIX2_MCFG_ULBT_FOUR_BEAT          (HMATRIX2_MCFG_ULBT_FOUR_BEAT_Val << HMATRIX2_MCFG_ULBT_Pos) /* (HMATRIX2_MCFG) Four Beat Burst Position */
#define HMATRIX2_MCFG_ULBT_EIGHT_BEAT         (HMATRIX2_MCFG_ULBT_EIGHT_BEAT_Val << HMATRIX2_MCFG_ULBT_Pos) /* (HMATRIX2_MCFG) Eight Beat Burst Position */
#define HMATRIX2_MCFG_ULBT_SIXTEEN_BEAT       (HMATRIX2_MCFG_ULBT_SIXTEEN_BEAT_Val << HMATRIX2_MCFG_ULBT_Pos) /* (HMATRIX2_MCFG) Sixteen Beat Burst Position */
#define HMATRIX2_MCFG_Msk                     _UINT32_(0x00000007)                                 /* (HMATRIX2_MCFG) Register Mask  */


/* -------- HMATRIX2_SCFG : (HMATRIX2 Offset: 0x40) (R/W 32) Slave Configuration -------- */
#define HMATRIX2_SCFG_RESETVALUE              _UINT32_(0x10)                                       /*  (HMATRIX2_SCFG) Slave Configuration  Reset Value */

#define HMATRIX2_SCFG_SLOT_CYCLE_Pos          _UINT32_(0)                                          /* (HMATRIX2_SCFG) Maximum Number of Allowed Cycles for a Burst Position */
#define HMATRIX2_SCFG_SLOT_CYCLE_Msk          (_UINT32_(0x1FF) << HMATRIX2_SCFG_SLOT_CYCLE_Pos)    /* (HMATRIX2_SCFG) Maximum Number of Allowed Cycles for a Burst Mask */
#define HMATRIX2_SCFG_SLOT_CYCLE(value)       (HMATRIX2_SCFG_SLOT_CYCLE_Msk & (_UINT32_(value) << HMATRIX2_SCFG_SLOT_CYCLE_Pos)) /* Assignment of value for SLOT_CYCLE in the HMATRIX2_SCFG register */
#define HMATRIX2_SCFG_DEFMSTR_TYPE_Pos        _UINT32_(16)                                         /* (HMATRIX2_SCFG) Default Master Type Position */
#define HMATRIX2_SCFG_DEFMSTR_TYPE_Msk        (_UINT32_(0x3) << HMATRIX2_SCFG_DEFMSTR_TYPE_Pos)    /* (HMATRIX2_SCFG) Default Master Type Mask */
#define HMATRIX2_SCFG_DEFMSTR_TYPE(value)     (HMATRIX2_SCFG_DEFMSTR_TYPE_Msk & (_UINT32_(value) << HMATRIX2_SCFG_DEFMSTR_TYPE_Pos)) /* Assignment of value for DEFMSTR_TYPE in the HMATRIX2_SCFG register */
#define   HMATRIX2_SCFG_DEFMSTR_TYPE_NO_DEFAULT_Val _UINT32_(0x0)                                        /* (HMATRIX2_SCFG) No Default Master. At the end of current slave access, if no other master request is pending, the slave is deconnected from all masters. This resusts in having a one cycle latency for the first transfer of a burst.  */
#define   HMATRIX2_SCFG_DEFMSTR_TYPE_LAST_DEFAULT_Val _UINT32_(0x1)                                        /* (HMATRIX2_SCFG) Last Default Master At the end of current slave access, if no other master request is pending, the slave stay connected with the last master havingaccessed it.This resusts in not having the one cycle latency when the last master re-trying access on the slave.  */
#define   HMATRIX2_SCFG_DEFMSTR_TYPE_FIXED_DEFAULT_Val _UINT32_(0x2)                                        /* (HMATRIX2_SCFG) Fixed Default Master At the end of current slave access, if no other master request is pending, the slave connects with fixed master which numberis in FIXED_DEFMSTR register.This resusts in not having the one cycle latency when the fixed master re-trying access on the slave.  */
#define HMATRIX2_SCFG_DEFMSTR_TYPE_NO_DEFAULT (HMATRIX2_SCFG_DEFMSTR_TYPE_NO_DEFAULT_Val << HMATRIX2_SCFG_DEFMSTR_TYPE_Pos) /* (HMATRIX2_SCFG) No Default Master. At the end of current slave access, if no other master request is pending, the slave is deconnected from all masters. This resusts in having a one cycle latency for the first transfer of a burst. Position */
#define HMATRIX2_SCFG_DEFMSTR_TYPE_LAST_DEFAULT (HMATRIX2_SCFG_DEFMSTR_TYPE_LAST_DEFAULT_Val << HMATRIX2_SCFG_DEFMSTR_TYPE_Pos) /* (HMATRIX2_SCFG) Last Default Master At the end of current slave access, if no other master request is pending, the slave stay connected with the last master havingaccessed it.This resusts in not having the one cycle latency when the last master re-trying access on the slave. Position */
#define HMATRIX2_SCFG_DEFMSTR_TYPE_FIXED_DEFAULT (HMATRIX2_SCFG_DEFMSTR_TYPE_FIXED_DEFAULT_Val << HMATRIX2_SCFG_DEFMSTR_TYPE_Pos) /* (HMATRIX2_SCFG) Fixed Default Master At the end of current slave access, if no other master request is pending, the slave connects with fixed master which numberis in FIXED_DEFMSTR register.This resusts in not having the one cycle latency when the fixed master re-trying access on the slave. Position */
#define HMATRIX2_SCFG_FIXED_DEFMSTR_Pos       _UINT32_(18)                                         /* (HMATRIX2_SCFG) Fixed Index of Default Master Position */
#define HMATRIX2_SCFG_FIXED_DEFMSTR_Msk       (_UINT32_(0xF) << HMATRIX2_SCFG_FIXED_DEFMSTR_Pos)   /* (HMATRIX2_SCFG) Fixed Index of Default Master Mask */
#define HMATRIX2_SCFG_FIXED_DEFMSTR(value)    (HMATRIX2_SCFG_FIXED_DEFMSTR_Msk & (_UINT32_(value) << HMATRIX2_SCFG_FIXED_DEFMSTR_Pos)) /* Assignment of value for FIXED_DEFMSTR in the HMATRIX2_SCFG register */
#define HMATRIX2_SCFG_Msk                     _UINT32_(0x003F01FF)                                 /* (HMATRIX2_SCFG) Register Mask  */


/* -------- HMATRIX2_MRCR : (HMATRIX2 Offset: 0x100) (R/W 32) Master Remap Control -------- */
#define HMATRIX2_MRCR_RESETVALUE              _UINT32_(0x00)                                       /*  (HMATRIX2_MRCR) Master Remap Control  Reset Value */

#define HMATRIX2_MRCR_RCB0_Pos                _UINT32_(0)                                          /* (HMATRIX2_MRCR) Remap Command Bit for Master 0 Position */
#define HMATRIX2_MRCR_RCB0_Msk                (_UINT32_(0x1) << HMATRIX2_MRCR_RCB0_Pos)            /* (HMATRIX2_MRCR) Remap Command Bit for Master 0 Mask */
#define HMATRIX2_MRCR_RCB0(value)             (HMATRIX2_MRCR_RCB0_Msk & (_UINT32_(value) << HMATRIX2_MRCR_RCB0_Pos)) /* Assignment of value for RCB0 in the HMATRIX2_MRCR register */
#define   HMATRIX2_MRCR_RCB0_DIS_Val          _UINT32_(0x0)                                        /* (HMATRIX2_MRCR) Disable remapped address decoding for master  */
#define   HMATRIX2_MRCR_RCB0_ENA_Val          _UINT32_(0x1)                                        /* (HMATRIX2_MRCR) Enable remapped address decoding for master  */
#define HMATRIX2_MRCR_RCB0_DIS                (HMATRIX2_MRCR_RCB0_DIS_Val << HMATRIX2_MRCR_RCB0_Pos) /* (HMATRIX2_MRCR) Disable remapped address decoding for master Position */
#define HMATRIX2_MRCR_RCB0_ENA                (HMATRIX2_MRCR_RCB0_ENA_Val << HMATRIX2_MRCR_RCB0_Pos) /* (HMATRIX2_MRCR) Enable remapped address decoding for master Position */
#define HMATRIX2_MRCR_RCB1_Pos                _UINT32_(1)                                          /* (HMATRIX2_MRCR) Remap Command Bit for Master 1 Position */
#define HMATRIX2_MRCR_RCB1_Msk                (_UINT32_(0x1) << HMATRIX2_MRCR_RCB1_Pos)            /* (HMATRIX2_MRCR) Remap Command Bit for Master 1 Mask */
#define HMATRIX2_MRCR_RCB1(value)             (HMATRIX2_MRCR_RCB1_Msk & (_UINT32_(value) << HMATRIX2_MRCR_RCB1_Pos)) /* Assignment of value for RCB1 in the HMATRIX2_MRCR register */
#define   HMATRIX2_MRCR_RCB1_DIS_Val          _UINT32_(0x0)                                        /* (HMATRIX2_MRCR) Disable remapped address decoding for master  */
#define   HMATRIX2_MRCR_RCB1_ENA_Val          _UINT32_(0x1)                                        /* (HMATRIX2_MRCR) Enable remapped address decoding for master  */
#define HMATRIX2_MRCR_RCB1_DIS                (HMATRIX2_MRCR_RCB1_DIS_Val << HMATRIX2_MRCR_RCB1_Pos) /* (HMATRIX2_MRCR) Disable remapped address decoding for master Position */
#define HMATRIX2_MRCR_RCB1_ENA                (HMATRIX2_MRCR_RCB1_ENA_Val << HMATRIX2_MRCR_RCB1_Pos) /* (HMATRIX2_MRCR) Enable remapped address decoding for master Position */
#define HMATRIX2_MRCR_RCB2_Pos                _UINT32_(2)                                          /* (HMATRIX2_MRCR) Remap Command Bit for Master 2 Position */
#define HMATRIX2_MRCR_RCB2_Msk                (_UINT32_(0x1) << HMATRIX2_MRCR_RCB2_Pos)            /* (HMATRIX2_MRCR) Remap Command Bit for Master 2 Mask */
#define HMATRIX2_MRCR_RCB2(value)             (HMATRIX2_MRCR_RCB2_Msk & (_UINT32_(value) << HMATRIX2_MRCR_RCB2_Pos)) /* Assignment of value for RCB2 in the HMATRIX2_MRCR register */
#define   HMATRIX2_MRCR_RCB2_DIS_Val          _UINT32_(0x0)                                        /* (HMATRIX2_MRCR) Disable remapped address decoding for master  */
#define   HMATRIX2_MRCR_RCB2_ENA_Val          _UINT32_(0x1)                                        /* (HMATRIX2_MRCR) Enable remapped address decoding for master  */
#define HMATRIX2_MRCR_RCB2_DIS                (HMATRIX2_MRCR_RCB2_DIS_Val << HMATRIX2_MRCR_RCB2_Pos) /* (HMATRIX2_MRCR) Disable remapped address decoding for master Position */
#define HMATRIX2_MRCR_RCB2_ENA                (HMATRIX2_MRCR_RCB2_ENA_Val << HMATRIX2_MRCR_RCB2_Pos) /* (HMATRIX2_MRCR) Enable remapped address decoding for master Position */
#define HMATRIX2_MRCR_RCB3_Pos                _UINT32_(3)                                          /* (HMATRIX2_MRCR) Remap Command Bit for Master 3 Position */
#define HMATRIX2_MRCR_RCB3_Msk                (_UINT32_(0x1) << HMATRIX2_MRCR_RCB3_Pos)            /* (HMATRIX2_MRCR) Remap Command Bit for Master 3 Mask */
#define HMATRIX2_MRCR_RCB3(value)             (HMATRIX2_MRCR_RCB3_Msk & (_UINT32_(value) << HMATRIX2_MRCR_RCB3_Pos)) /* Assignment of value for RCB3 in the HMATRIX2_MRCR register */
#define   HMATRIX2_MRCR_RCB3_DIS_Val          _UINT32_(0x0)                                        /* (HMATRIX2_MRCR) Disable remapped address decoding for master  */
#define   HMATRIX2_MRCR_RCB3_ENA_Val          _UINT32_(0x1)                                        /* (HMATRIX2_MRCR) Enable remapped address decoding for master  */
#define HMATRIX2_MRCR_RCB3_DIS                (HMATRIX2_MRCR_RCB3_DIS_Val << HMATRIX2_MRCR_RCB3_Pos) /* (HMATRIX2_MRCR) Disable remapped address decoding for master Position */
#define HMATRIX2_MRCR_RCB3_ENA                (HMATRIX2_MRCR_RCB3_ENA_Val << HMATRIX2_MRCR_RCB3_Pos) /* (HMATRIX2_MRCR) Enable remapped address decoding for master Position */
#define HMATRIX2_MRCR_RCB4_Pos                _UINT32_(4)                                          /* (HMATRIX2_MRCR) Remap Command Bit for Master 4 Position */
#define HMATRIX2_MRCR_RCB4_Msk                (_UINT32_(0x1) << HMATRIX2_MRCR_RCB4_Pos)            /* (HMATRIX2_MRCR) Remap Command Bit for Master 4 Mask */
#define HMATRIX2_MRCR_RCB4(value)             (HMATRIX2_MRCR_RCB4_Msk & (_UINT32_(value) << HMATRIX2_MRCR_RCB4_Pos)) /* Assignment of value for RCB4 in the HMATRIX2_MRCR register */
#define   HMATRIX2_MRCR_RCB4_DIS_Val          _UINT32_(0x0)                                        /* (HMATRIX2_MRCR) Disable remapped address decoding for master  */
#define   HMATRIX2_MRCR_RCB4_ENA_Val          _UINT32_(0x1)                                        /* (HMATRIX2_MRCR) Enable remapped address decoding for master  */
#define HMATRIX2_MRCR_RCB4_DIS                (HMATRIX2_MRCR_RCB4_DIS_Val << HMATRIX2_MRCR_RCB4_Pos) /* (HMATRIX2_MRCR) Disable remapped address decoding for master Position */
#define HMATRIX2_MRCR_RCB4_ENA                (HMATRIX2_MRCR_RCB4_ENA_Val << HMATRIX2_MRCR_RCB4_Pos) /* (HMATRIX2_MRCR) Enable remapped address decoding for master Position */
#define HMATRIX2_MRCR_RCB5_Pos                _UINT32_(5)                                          /* (HMATRIX2_MRCR) Remap Command Bit for Master 5 Position */
#define HMATRIX2_MRCR_RCB5_Msk                (_UINT32_(0x1) << HMATRIX2_MRCR_RCB5_Pos)            /* (HMATRIX2_MRCR) Remap Command Bit for Master 5 Mask */
#define HMATRIX2_MRCR_RCB5(value)             (HMATRIX2_MRCR_RCB5_Msk & (_UINT32_(value) << HMATRIX2_MRCR_RCB5_Pos)) /* Assignment of value for RCB5 in the HMATRIX2_MRCR register */
#define   HMATRIX2_MRCR_RCB5_DIS_Val          _UINT32_(0x0)                                        /* (HMATRIX2_MRCR) Disable remapped address decoding for master  */
#define   HMATRIX2_MRCR_RCB5_ENA_Val          _UINT32_(0x1)                                        /* (HMATRIX2_MRCR) Enable remapped address decoding for master  */
#define HMATRIX2_MRCR_RCB5_DIS                (HMATRIX2_MRCR_RCB5_DIS_Val << HMATRIX2_MRCR_RCB5_Pos) /* (HMATRIX2_MRCR) Disable remapped address decoding for master Position */
#define HMATRIX2_MRCR_RCB5_ENA                (HMATRIX2_MRCR_RCB5_ENA_Val << HMATRIX2_MRCR_RCB5_Pos) /* (HMATRIX2_MRCR) Enable remapped address decoding for master Position */
#define HMATRIX2_MRCR_Msk                     _UINT32_(0x0000003F)                                 /* (HMATRIX2_MRCR) Register Mask  */

#define HMATRIX2_MRCR_RCB_Pos                 _UINT32_(0)                                          /* (HMATRIX2_MRCR Position) Remap Command Bit for Master 5 */
#define HMATRIX2_MRCR_RCB_Msk                 (_UINT32_(0x3F) << HMATRIX2_MRCR_RCB_Pos)            /* (HMATRIX2_MRCR Mask) RCB */
#define HMATRIX2_MRCR_RCB(value)              (HMATRIX2_MRCR_RCB_Msk & (_UINT32_(value) << HMATRIX2_MRCR_RCB_Pos)) 

/* -------- HMATRIX2_SFR : (HMATRIX2 Offset: 0x110) (R/W 32) Special Function -------- */
#define HMATRIX2_SFR_RESETVALUE               _UINT32_(0x00)                                       /*  (HMATRIX2_SFR) Special Function  Reset Value */

#define HMATRIX2_SFR_SFR_Pos                  _UINT32_(0)                                          /* (HMATRIX2_SFR) Special Function Register Position */
#define HMATRIX2_SFR_SFR_Msk                  (_UINT32_(0xFFFFFFFF) << HMATRIX2_SFR_SFR_Pos)       /* (HMATRIX2_SFR) Special Function Register Mask */
#define HMATRIX2_SFR_SFR(value)               (HMATRIX2_SFR_SFR_Msk & (_UINT32_(value) << HMATRIX2_SFR_SFR_Pos)) /* Assignment of value for SFR in the HMATRIX2_SFR register */
#define HMATRIX2_SFR_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (HMATRIX2_SFR) Register Mask  */


/* -------- HMATRIX2_MEIER : (HMATRIX2 Offset: 0x150) ( /W 32) Master Error Interrupt Enable -------- */
#define HMATRIX2_MEIER_MERR0_Pos              _UINT32_(0)                                          /* (HMATRIX2_MEIER) Master 0 Access Error Position */
#define HMATRIX2_MEIER_MERR0_Msk              (_UINT32_(0x1) << HMATRIX2_MEIER_MERR0_Pos)          /* (HMATRIX2_MEIER) Master 0 Access Error Mask */
#define HMATRIX2_MEIER_MERR0(value)           (HMATRIX2_MEIER_MERR0_Msk & (_UINT32_(value) << HMATRIX2_MEIER_MERR0_Pos)) /* Assignment of value for MERR0 in the HMATRIX2_MEIER register */
#define HMATRIX2_MEIER_MERR1_Pos              _UINT32_(1)                                          /* (HMATRIX2_MEIER) Master 1 Access Error Position */
#define HMATRIX2_MEIER_MERR1_Msk              (_UINT32_(0x1) << HMATRIX2_MEIER_MERR1_Pos)          /* (HMATRIX2_MEIER) Master 1 Access Error Mask */
#define HMATRIX2_MEIER_MERR1(value)           (HMATRIX2_MEIER_MERR1_Msk & (_UINT32_(value) << HMATRIX2_MEIER_MERR1_Pos)) /* Assignment of value for MERR1 in the HMATRIX2_MEIER register */
#define HMATRIX2_MEIER_MERR2_Pos              _UINT32_(2)                                          /* (HMATRIX2_MEIER) Master 2 Access Error Position */
#define HMATRIX2_MEIER_MERR2_Msk              (_UINT32_(0x1) << HMATRIX2_MEIER_MERR2_Pos)          /* (HMATRIX2_MEIER) Master 2 Access Error Mask */
#define HMATRIX2_MEIER_MERR2(value)           (HMATRIX2_MEIER_MERR2_Msk & (_UINT32_(value) << HMATRIX2_MEIER_MERR2_Pos)) /* Assignment of value for MERR2 in the HMATRIX2_MEIER register */
#define HMATRIX2_MEIER_MERR3_Pos              _UINT32_(3)                                          /* (HMATRIX2_MEIER) Master 3 Access Error Position */
#define HMATRIX2_MEIER_MERR3_Msk              (_UINT32_(0x1) << HMATRIX2_MEIER_MERR3_Pos)          /* (HMATRIX2_MEIER) Master 3 Access Error Mask */
#define HMATRIX2_MEIER_MERR3(value)           (HMATRIX2_MEIER_MERR3_Msk & (_UINT32_(value) << HMATRIX2_MEIER_MERR3_Pos)) /* Assignment of value for MERR3 in the HMATRIX2_MEIER register */
#define HMATRIX2_MEIER_MERR4_Pos              _UINT32_(4)                                          /* (HMATRIX2_MEIER) Master 4 Access Error Position */
#define HMATRIX2_MEIER_MERR4_Msk              (_UINT32_(0x1) << HMATRIX2_MEIER_MERR4_Pos)          /* (HMATRIX2_MEIER) Master 4 Access Error Mask */
#define HMATRIX2_MEIER_MERR4(value)           (HMATRIX2_MEIER_MERR4_Msk & (_UINT32_(value) << HMATRIX2_MEIER_MERR4_Pos)) /* Assignment of value for MERR4 in the HMATRIX2_MEIER register */
#define HMATRIX2_MEIER_MERR5_Pos              _UINT32_(5)                                          /* (HMATRIX2_MEIER) Master 5 Access Error Position */
#define HMATRIX2_MEIER_MERR5_Msk              (_UINT32_(0x1) << HMATRIX2_MEIER_MERR5_Pos)          /* (HMATRIX2_MEIER) Master 5 Access Error Mask */
#define HMATRIX2_MEIER_MERR5(value)           (HMATRIX2_MEIER_MERR5_Msk & (_UINT32_(value) << HMATRIX2_MEIER_MERR5_Pos)) /* Assignment of value for MERR5 in the HMATRIX2_MEIER register */
#define HMATRIX2_MEIER_Msk                    _UINT32_(0x0000003F)                                 /* (HMATRIX2_MEIER) Register Mask  */

#define HMATRIX2_MEIER_MERR_Pos               _UINT32_(0)                                          /* (HMATRIX2_MEIER Position) Master 5 Access Error */
#define HMATRIX2_MEIER_MERR_Msk               (_UINT32_(0x3F) << HMATRIX2_MEIER_MERR_Pos)          /* (HMATRIX2_MEIER Mask) MERR */
#define HMATRIX2_MEIER_MERR(value)            (HMATRIX2_MEIER_MERR_Msk & (_UINT32_(value) << HMATRIX2_MEIER_MERR_Pos)) 

/* -------- HMATRIX2_MEIDR : (HMATRIX2 Offset: 0x154) ( /W 32) Master Error Interrupt Disable -------- */
#define HMATRIX2_MEIDR_MERR0_Pos              _UINT32_(0)                                          /* (HMATRIX2_MEIDR) Master 0 Access Error Position */
#define HMATRIX2_MEIDR_MERR0_Msk              (_UINT32_(0x1) << HMATRIX2_MEIDR_MERR0_Pos)          /* (HMATRIX2_MEIDR) Master 0 Access Error Mask */
#define HMATRIX2_MEIDR_MERR0(value)           (HMATRIX2_MEIDR_MERR0_Msk & (_UINT32_(value) << HMATRIX2_MEIDR_MERR0_Pos)) /* Assignment of value for MERR0 in the HMATRIX2_MEIDR register */
#define HMATRIX2_MEIDR_MERR1_Pos              _UINT32_(1)                                          /* (HMATRIX2_MEIDR) Master 1 Access Error Position */
#define HMATRIX2_MEIDR_MERR1_Msk              (_UINT32_(0x1) << HMATRIX2_MEIDR_MERR1_Pos)          /* (HMATRIX2_MEIDR) Master 1 Access Error Mask */
#define HMATRIX2_MEIDR_MERR1(value)           (HMATRIX2_MEIDR_MERR1_Msk & (_UINT32_(value) << HMATRIX2_MEIDR_MERR1_Pos)) /* Assignment of value for MERR1 in the HMATRIX2_MEIDR register */
#define HMATRIX2_MEIDR_MERR2_Pos              _UINT32_(2)                                          /* (HMATRIX2_MEIDR) Master 2 Access Error Position */
#define HMATRIX2_MEIDR_MERR2_Msk              (_UINT32_(0x1) << HMATRIX2_MEIDR_MERR2_Pos)          /* (HMATRIX2_MEIDR) Master 2 Access Error Mask */
#define HMATRIX2_MEIDR_MERR2(value)           (HMATRIX2_MEIDR_MERR2_Msk & (_UINT32_(value) << HMATRIX2_MEIDR_MERR2_Pos)) /* Assignment of value for MERR2 in the HMATRIX2_MEIDR register */
#define HMATRIX2_MEIDR_MERR3_Pos              _UINT32_(3)                                          /* (HMATRIX2_MEIDR) Master 3 Access Error Position */
#define HMATRIX2_MEIDR_MERR3_Msk              (_UINT32_(0x1) << HMATRIX2_MEIDR_MERR3_Pos)          /* (HMATRIX2_MEIDR) Master 3 Access Error Mask */
#define HMATRIX2_MEIDR_MERR3(value)           (HMATRIX2_MEIDR_MERR3_Msk & (_UINT32_(value) << HMATRIX2_MEIDR_MERR3_Pos)) /* Assignment of value for MERR3 in the HMATRIX2_MEIDR register */
#define HMATRIX2_MEIDR_MERR4_Pos              _UINT32_(4)                                          /* (HMATRIX2_MEIDR) Master 4 Access Error Position */
#define HMATRIX2_MEIDR_MERR4_Msk              (_UINT32_(0x1) << HMATRIX2_MEIDR_MERR4_Pos)          /* (HMATRIX2_MEIDR) Master 4 Access Error Mask */
#define HMATRIX2_MEIDR_MERR4(value)           (HMATRIX2_MEIDR_MERR4_Msk & (_UINT32_(value) << HMATRIX2_MEIDR_MERR4_Pos)) /* Assignment of value for MERR4 in the HMATRIX2_MEIDR register */
#define HMATRIX2_MEIDR_MERR5_Pos              _UINT32_(5)                                          /* (HMATRIX2_MEIDR) Master 5 Access Error Position */
#define HMATRIX2_MEIDR_MERR5_Msk              (_UINT32_(0x1) << HMATRIX2_MEIDR_MERR5_Pos)          /* (HMATRIX2_MEIDR) Master 5 Access Error Mask */
#define HMATRIX2_MEIDR_MERR5(value)           (HMATRIX2_MEIDR_MERR5_Msk & (_UINT32_(value) << HMATRIX2_MEIDR_MERR5_Pos)) /* Assignment of value for MERR5 in the HMATRIX2_MEIDR register */
#define HMATRIX2_MEIDR_Msk                    _UINT32_(0x0000003F)                                 /* (HMATRIX2_MEIDR) Register Mask  */

#define HMATRIX2_MEIDR_MERR_Pos               _UINT32_(0)                                          /* (HMATRIX2_MEIDR Position) Master 5 Access Error */
#define HMATRIX2_MEIDR_MERR_Msk               (_UINT32_(0x3F) << HMATRIX2_MEIDR_MERR_Pos)          /* (HMATRIX2_MEIDR Mask) MERR */
#define HMATRIX2_MEIDR_MERR(value)            (HMATRIX2_MEIDR_MERR_Msk & (_UINT32_(value) << HMATRIX2_MEIDR_MERR_Pos)) 

/* -------- HMATRIX2_MEIMR : (HMATRIX2 Offset: 0x158) ( R/ 32) Master Error Interrupt Mask -------- */
#define HMATRIX2_MEIMR_MERR0_Pos              _UINT32_(0)                                          /* (HMATRIX2_MEIMR) Master 0 Access Error Position */
#define HMATRIX2_MEIMR_MERR0_Msk              (_UINT32_(0x1) << HMATRIX2_MEIMR_MERR0_Pos)          /* (HMATRIX2_MEIMR) Master 0 Access Error Mask */
#define HMATRIX2_MEIMR_MERR0(value)           (HMATRIX2_MEIMR_MERR0_Msk & (_UINT32_(value) << HMATRIX2_MEIMR_MERR0_Pos)) /* Assignment of value for MERR0 in the HMATRIX2_MEIMR register */
#define HMATRIX2_MEIMR_MERR1_Pos              _UINT32_(1)                                          /* (HMATRIX2_MEIMR) Master 1 Access Error Position */
#define HMATRIX2_MEIMR_MERR1_Msk              (_UINT32_(0x1) << HMATRIX2_MEIMR_MERR1_Pos)          /* (HMATRIX2_MEIMR) Master 1 Access Error Mask */
#define HMATRIX2_MEIMR_MERR1(value)           (HMATRIX2_MEIMR_MERR1_Msk & (_UINT32_(value) << HMATRIX2_MEIMR_MERR1_Pos)) /* Assignment of value for MERR1 in the HMATRIX2_MEIMR register */
#define HMATRIX2_MEIMR_MERR2_Pos              _UINT32_(2)                                          /* (HMATRIX2_MEIMR) Master 2 Access Error Position */
#define HMATRIX2_MEIMR_MERR2_Msk              (_UINT32_(0x1) << HMATRIX2_MEIMR_MERR2_Pos)          /* (HMATRIX2_MEIMR) Master 2 Access Error Mask */
#define HMATRIX2_MEIMR_MERR2(value)           (HMATRIX2_MEIMR_MERR2_Msk & (_UINT32_(value) << HMATRIX2_MEIMR_MERR2_Pos)) /* Assignment of value for MERR2 in the HMATRIX2_MEIMR register */
#define HMATRIX2_MEIMR_MERR3_Pos              _UINT32_(3)                                          /* (HMATRIX2_MEIMR) Master 3 Access Error Position */
#define HMATRIX2_MEIMR_MERR3_Msk              (_UINT32_(0x1) << HMATRIX2_MEIMR_MERR3_Pos)          /* (HMATRIX2_MEIMR) Master 3 Access Error Mask */
#define HMATRIX2_MEIMR_MERR3(value)           (HMATRIX2_MEIMR_MERR3_Msk & (_UINT32_(value) << HMATRIX2_MEIMR_MERR3_Pos)) /* Assignment of value for MERR3 in the HMATRIX2_MEIMR register */
#define HMATRIX2_MEIMR_MERR4_Pos              _UINT32_(4)                                          /* (HMATRIX2_MEIMR) Master 4 Access Error Position */
#define HMATRIX2_MEIMR_MERR4_Msk              (_UINT32_(0x1) << HMATRIX2_MEIMR_MERR4_Pos)          /* (HMATRIX2_MEIMR) Master 4 Access Error Mask */
#define HMATRIX2_MEIMR_MERR4(value)           (HMATRIX2_MEIMR_MERR4_Msk & (_UINT32_(value) << HMATRIX2_MEIMR_MERR4_Pos)) /* Assignment of value for MERR4 in the HMATRIX2_MEIMR register */
#define HMATRIX2_MEIMR_MERR5_Pos              _UINT32_(5)                                          /* (HMATRIX2_MEIMR) Master 5 Access Error Position */
#define HMATRIX2_MEIMR_MERR5_Msk              (_UINT32_(0x1) << HMATRIX2_MEIMR_MERR5_Pos)          /* (HMATRIX2_MEIMR) Master 5 Access Error Mask */
#define HMATRIX2_MEIMR_MERR5(value)           (HMATRIX2_MEIMR_MERR5_Msk & (_UINT32_(value) << HMATRIX2_MEIMR_MERR5_Pos)) /* Assignment of value for MERR5 in the HMATRIX2_MEIMR register */
#define HMATRIX2_MEIMR_Msk                    _UINT32_(0x0000003F)                                 /* (HMATRIX2_MEIMR) Register Mask  */

#define HMATRIX2_MEIMR_MERR_Pos               _UINT32_(0)                                          /* (HMATRIX2_MEIMR Position) Master 5 Access Error */
#define HMATRIX2_MEIMR_MERR_Msk               (_UINT32_(0x3F) << HMATRIX2_MEIMR_MERR_Pos)          /* (HMATRIX2_MEIMR Mask) MERR */
#define HMATRIX2_MEIMR_MERR(value)            (HMATRIX2_MEIMR_MERR_Msk & (_UINT32_(value) << HMATRIX2_MEIMR_MERR_Pos)) 

/* -------- HMATRIX2_MESR : (HMATRIX2 Offset: 0x15C) ( R/ 32) Master Error Status -------- */
#define HMATRIX2_MESR_MERR0_Pos               _UINT32_(0)                                          /* (HMATRIX2_MESR) Master 0 Access Error Position */
#define HMATRIX2_MESR_MERR0_Msk               (_UINT32_(0x1) << HMATRIX2_MESR_MERR0_Pos)           /* (HMATRIX2_MESR) Master 0 Access Error Mask */
#define HMATRIX2_MESR_MERR0(value)            (HMATRIX2_MESR_MERR0_Msk & (_UINT32_(value) << HMATRIX2_MESR_MERR0_Pos)) /* Assignment of value for MERR0 in the HMATRIX2_MESR register */
#define HMATRIX2_MESR_MERR1_Pos               _UINT32_(1)                                          /* (HMATRIX2_MESR) Master 1 Access Error Position */
#define HMATRIX2_MESR_MERR1_Msk               (_UINT32_(0x1) << HMATRIX2_MESR_MERR1_Pos)           /* (HMATRIX2_MESR) Master 1 Access Error Mask */
#define HMATRIX2_MESR_MERR1(value)            (HMATRIX2_MESR_MERR1_Msk & (_UINT32_(value) << HMATRIX2_MESR_MERR1_Pos)) /* Assignment of value for MERR1 in the HMATRIX2_MESR register */
#define HMATRIX2_MESR_MERR2_Pos               _UINT32_(2)                                          /* (HMATRIX2_MESR) Master 2 Access Error Position */
#define HMATRIX2_MESR_MERR2_Msk               (_UINT32_(0x1) << HMATRIX2_MESR_MERR2_Pos)           /* (HMATRIX2_MESR) Master 2 Access Error Mask */
#define HMATRIX2_MESR_MERR2(value)            (HMATRIX2_MESR_MERR2_Msk & (_UINT32_(value) << HMATRIX2_MESR_MERR2_Pos)) /* Assignment of value for MERR2 in the HMATRIX2_MESR register */
#define HMATRIX2_MESR_MERR3_Pos               _UINT32_(3)                                          /* (HMATRIX2_MESR) Master 3 Access Error Position */
#define HMATRIX2_MESR_MERR3_Msk               (_UINT32_(0x1) << HMATRIX2_MESR_MERR3_Pos)           /* (HMATRIX2_MESR) Master 3 Access Error Mask */
#define HMATRIX2_MESR_MERR3(value)            (HMATRIX2_MESR_MERR3_Msk & (_UINT32_(value) << HMATRIX2_MESR_MERR3_Pos)) /* Assignment of value for MERR3 in the HMATRIX2_MESR register */
#define HMATRIX2_MESR_MERR4_Pos               _UINT32_(4)                                          /* (HMATRIX2_MESR) Master 4 Access Error Position */
#define HMATRIX2_MESR_MERR4_Msk               (_UINT32_(0x1) << HMATRIX2_MESR_MERR4_Pos)           /* (HMATRIX2_MESR) Master 4 Access Error Mask */
#define HMATRIX2_MESR_MERR4(value)            (HMATRIX2_MESR_MERR4_Msk & (_UINT32_(value) << HMATRIX2_MESR_MERR4_Pos)) /* Assignment of value for MERR4 in the HMATRIX2_MESR register */
#define HMATRIX2_MESR_MERR5_Pos               _UINT32_(5)                                          /* (HMATRIX2_MESR) Master 5 Access Error Position */
#define HMATRIX2_MESR_MERR5_Msk               (_UINT32_(0x1) << HMATRIX2_MESR_MERR5_Pos)           /* (HMATRIX2_MESR) Master 5 Access Error Mask */
#define HMATRIX2_MESR_MERR5(value)            (HMATRIX2_MESR_MERR5_Msk & (_UINT32_(value) << HMATRIX2_MESR_MERR5_Pos)) /* Assignment of value for MERR5 in the HMATRIX2_MESR register */
#define HMATRIX2_MESR_Msk                     _UINT32_(0x0000003F)                                 /* (HMATRIX2_MESR) Register Mask  */

#define HMATRIX2_MESR_MERR_Pos                _UINT32_(0)                                          /* (HMATRIX2_MESR Position) Master 5 Access Error */
#define HMATRIX2_MESR_MERR_Msk                (_UINT32_(0x3F) << HMATRIX2_MESR_MERR_Pos)           /* (HMATRIX2_MESR Mask) MERR */
#define HMATRIX2_MESR_MERR(value)             (HMATRIX2_MESR_MERR_Msk & (_UINT32_(value) << HMATRIX2_MESR_MERR_Pos)) 

/* -------- HMATRIX2_MEAR : (HMATRIX2 Offset: 0x160) ( R/ 32) Master Error Address -------- */
#define HMATRIX2_MEAR_Msk                     _UINT32_(0x00000000)                                 /* (HMATRIX2_MEAR) Register Mask  */


/* HMATRIX2 register offsets definitions */
#define HMATRIX2_PRAS_REG_OFST         _UINT32_(0x00)      /* (HMATRIX2_PRAS) Priority A for Slave Offset */
#define HMATRIX2_MCFG_REG_OFST         _UINT32_(0x00)      /* (HMATRIX2_MCFG) Master Configuration Offset */
#define HMATRIX2_MCFG0_REG_OFST        _UINT32_(0x00)      /* (HMATRIX2_MCFG0) Master Configuration Offset */
#define HMATRIX2_MCFG1_REG_OFST        _UINT32_(0x04)      /* (HMATRIX2_MCFG1) Master Configuration Offset */
#define HMATRIX2_MCFG2_REG_OFST        _UINT32_(0x08)      /* (HMATRIX2_MCFG2) Master Configuration Offset */
#define HMATRIX2_MCFG3_REG_OFST        _UINT32_(0x0C)      /* (HMATRIX2_MCFG3) Master Configuration Offset */
#define HMATRIX2_MCFG4_REG_OFST        _UINT32_(0x10)      /* (HMATRIX2_MCFG4) Master Configuration Offset */
#define HMATRIX2_MCFG5_REG_OFST        _UINT32_(0x14)      /* (HMATRIX2_MCFG5) Master Configuration Offset */
#define HMATRIX2_SCFG_REG_OFST         _UINT32_(0x40)      /* (HMATRIX2_SCFG) Slave Configuration Offset */
#define HMATRIX2_SCFG0_REG_OFST        _UINT32_(0x40)      /* (HMATRIX2_SCFG0) Slave Configuration Offset */
#define HMATRIX2_SCFG1_REG_OFST        _UINT32_(0x44)      /* (HMATRIX2_SCFG1) Slave Configuration Offset */
#define HMATRIX2_SCFG2_REG_OFST        _UINT32_(0x48)      /* (HMATRIX2_SCFG2) Slave Configuration Offset */
#define HMATRIX2_SCFG3_REG_OFST        _UINT32_(0x4C)      /* (HMATRIX2_SCFG3) Slave Configuration Offset */
#define HMATRIX2_SCFG4_REG_OFST        _UINT32_(0x50)      /* (HMATRIX2_SCFG4) Slave Configuration Offset */
#define HMATRIX2_SCFG5_REG_OFST        _UINT32_(0x54)      /* (HMATRIX2_SCFG5) Slave Configuration Offset */
#define HMATRIX2_SCFG6_REG_OFST        _UINT32_(0x58)      /* (HMATRIX2_SCFG6) Slave Configuration Offset */
#define HMATRIX2_SCFG7_REG_OFST        _UINT32_(0x5C)      /* (HMATRIX2_SCFG7) Slave Configuration Offset */
#define HMATRIX2_SCFG8_REG_OFST        _UINT32_(0x60)      /* (HMATRIX2_SCFG8) Slave Configuration Offset */
#define HMATRIX2_MRCR_REG_OFST         _UINT32_(0x100)     /* (HMATRIX2_MRCR) Master Remap Control Offset */
#define HMATRIX2_SFR_REG_OFST          _UINT32_(0x110)     /* (HMATRIX2_SFR) Special Function Offset */
#define HMATRIX2_SFR0_REG_OFST         _UINT32_(0x110)     /* (HMATRIX2_SFR0) Special Function Offset */
#define HMATRIX2_SFR1_REG_OFST         _UINT32_(0x114)     /* (HMATRIX2_SFR1) Special Function Offset */
#define HMATRIX2_SFR2_REG_OFST         _UINT32_(0x118)     /* (HMATRIX2_SFR2) Special Function Offset */
#define HMATRIX2_SFR3_REG_OFST         _UINT32_(0x11C)     /* (HMATRIX2_SFR3) Special Function Offset */
#define HMATRIX2_SFR4_REG_OFST         _UINT32_(0x120)     /* (HMATRIX2_SFR4) Special Function Offset */
#define HMATRIX2_SFR5_REG_OFST         _UINT32_(0x124)     /* (HMATRIX2_SFR5) Special Function Offset */
#define HMATRIX2_SFR6_REG_OFST         _UINT32_(0x128)     /* (HMATRIX2_SFR6) Special Function Offset */
#define HMATRIX2_SFR7_REG_OFST         _UINT32_(0x12C)     /* (HMATRIX2_SFR7) Special Function Offset */
#define HMATRIX2_SFR8_REG_OFST         _UINT32_(0x130)     /* (HMATRIX2_SFR8) Special Function Offset */
#define HMATRIX2_MEIER_REG_OFST        _UINT32_(0x150)     /* (HMATRIX2_MEIER) Master Error Interrupt Enable Offset */
#define HMATRIX2_MEIDR_REG_OFST        _UINT32_(0x154)     /* (HMATRIX2_MEIDR) Master Error Interrupt Disable Offset */
#define HMATRIX2_MEIMR_REG_OFST        _UINT32_(0x158)     /* (HMATRIX2_MEIMR) Master Error Interrupt Mask Offset */
#define HMATRIX2_MESR_REG_OFST         _UINT32_(0x15C)     /* (HMATRIX2_MESR) Master Error Status Offset */
#define HMATRIX2_MEAR_REG_OFST         _UINT32_(0x160)     /* (HMATRIX2_MEAR) Master Error Address Offset */
#define HMATRIX2_MEAR0_REG_OFST        _UINT32_(0x160)     /* (HMATRIX2_MEAR0) Master Error Address Offset */
#define HMATRIX2_MEAR1_REG_OFST        _UINT32_(0x164)     /* (HMATRIX2_MEAR1) Master Error Address Offset */
#define HMATRIX2_MEAR2_REG_OFST        _UINT32_(0x168)     /* (HMATRIX2_MEAR2) Master Error Address Offset */
#define HMATRIX2_MEAR3_REG_OFST        _UINT32_(0x16C)     /* (HMATRIX2_MEAR3) Master Error Address Offset */
#define HMATRIX2_MEAR4_REG_OFST        _UINT32_(0x170)     /* (HMATRIX2_MEAR4) Master Error Address Offset */
#define HMATRIX2_MEAR5_REG_OFST        _UINT32_(0x174)     /* (HMATRIX2_MEAR5) Master Error Address Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* PRS register API structure */
typedef struct
{
  __IO  uint32_t                       HMATRIX2_PRAS;      /* Offset: 0x00 (R/W  32) Priority A for Slave */
  __I   uint8_t                        Reserved1[0x04];
} hmatrix2_prs_registers_t;

#define HMATRIX2_PRS_NUMBER 9

/* HMATRIX2 register API structure */
typedef struct
{  /* HSB Matrix */
  __IO  uint32_t                       HMATRIX2_MCFG[6];   /* Offset: 0x00 (R/W  32) Master Configuration */
  __I   uint8_t                        Reserved1[0x28];
  __IO  uint32_t                       HMATRIX2_SCFG[9];   /* Offset: 0x40 (R/W  32) Slave Configuration */
  __I   uint8_t                        Reserved2[0x1C];
        hmatrix2_prs_registers_t       PRS[HMATRIX2_PRS_NUMBER]; /* Offset: 0x80  */
  __I   uint8_t                        Reserved3[0x38];
  __IO  uint32_t                       HMATRIX2_MRCR;      /* Offset: 0x100 (R/W  32) Master Remap Control */
  __I   uint8_t                        Reserved4[0x0C];
  __IO  uint32_t                       HMATRIX2_SFR[9];    /* Offset: 0x110 (R/W  32) Special Function */
  __I   uint8_t                        Reserved5[0x1C];
  __O   uint32_t                       HMATRIX2_MEIER;     /* Offset: 0x150 ( /W  32) Master Error Interrupt Enable */
  __O   uint32_t                       HMATRIX2_MEIDR;     /* Offset: 0x154 ( /W  32) Master Error Interrupt Disable */
  __I   uint32_t                       HMATRIX2_MEIMR;     /* Offset: 0x158 (R/   32) Master Error Interrupt Mask */
  __I   uint32_t                       HMATRIX2_MESR;      /* Offset: 0x15C (R/   32) Master Error Status */
  __I   uint32_t                       HMATRIX2_MEAR[6];   /* Offset: 0x160 (R/   32) Master Error Address */
} hmatrix2_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMGC00_HMATRIX2_COMPONENT_H_ */
