/*
 * Component description for SFRBU
 *
 * Copyright (c) 2023 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description file (ATDF) version 2023-12-19T08:59:38Z */
#ifndef _PIC32CXMTSH_SFRBU_COMPONENT_H_
#define _PIC32CXMTSH_SFRBU_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SFRBU                                        */
/* ************************************************************************** */

/* -------- SFRBU_IO_RETENTION : (SFRBU Offset: 0x30) (R/W 32) IO Retention Register -------- */
#define SFRBU_IO_RETENTION_PA_7_0_Pos         _UINT32_(0)                                          /* (SFRBU_IO_RETENTION) Keep Function on PA0 to PA7 Position */
#define SFRBU_IO_RETENTION_PA_7_0_Msk         (_UINT32_(0x1) << SFRBU_IO_RETENTION_PA_7_0_Pos)     /* (SFRBU_IO_RETENTION) Keep Function on PA0 to PA7 Mask */
#define SFRBU_IO_RETENTION_PA_7_0(value)      (SFRBU_IO_RETENTION_PA_7_0_Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PA_7_0_Pos)) /* Assigment of value for PA_7_0 in the SFRBU_IO_RETENTION register */
#define SFRBU_IO_RETENTION_PA_15_8_Pos        _UINT32_(1)                                          /* (SFRBU_IO_RETENTION) Keep Function on PA8 to PA15 Position */
#define SFRBU_IO_RETENTION_PA_15_8_Msk        (_UINT32_(0x1) << SFRBU_IO_RETENTION_PA_15_8_Pos)    /* (SFRBU_IO_RETENTION) Keep Function on PA8 to PA15 Mask */
#define SFRBU_IO_RETENTION_PA_15_8(value)     (SFRBU_IO_RETENTION_PA_15_8_Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PA_15_8_Pos)) /* Assigment of value for PA_15_8 in the SFRBU_IO_RETENTION register */
#define SFRBU_IO_RETENTION_PA_23_16_Pos       _UINT32_(2)                                          /* (SFRBU_IO_RETENTION) Keep Function on PA16 to PA23 Position */
#define SFRBU_IO_RETENTION_PA_23_16_Msk       (_UINT32_(0x1) << SFRBU_IO_RETENTION_PA_23_16_Pos)   /* (SFRBU_IO_RETENTION) Keep Function on PA16 to PA23 Mask */
#define SFRBU_IO_RETENTION_PA_23_16(value)    (SFRBU_IO_RETENTION_PA_23_16_Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PA_23_16_Pos)) /* Assigment of value for PA_23_16 in the SFRBU_IO_RETENTION register */
#define SFRBU_IO_RETENTION_PA_31_24_Pos       _UINT32_(3)                                          /* (SFRBU_IO_RETENTION) Keep Function on PA24 to PA31 Position */
#define SFRBU_IO_RETENTION_PA_31_24_Msk       (_UINT32_(0x1) << SFRBU_IO_RETENTION_PA_31_24_Pos)   /* (SFRBU_IO_RETENTION) Keep Function on PA24 to PA31 Mask */
#define SFRBU_IO_RETENTION_PA_31_24(value)    (SFRBU_IO_RETENTION_PA_31_24_Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PA_31_24_Pos)) /* Assigment of value for PA_31_24 in the SFRBU_IO_RETENTION register */
#define SFRBU_IO_RETENTION_PB_7_0_Pos         _UINT32_(4)                                          /* (SFRBU_IO_RETENTION) Keep Function on PB0 to PB7 Position */
#define SFRBU_IO_RETENTION_PB_7_0_Msk         (_UINT32_(0x1) << SFRBU_IO_RETENTION_PB_7_0_Pos)     /* (SFRBU_IO_RETENTION) Keep Function on PB0 to PB7 Mask */
#define SFRBU_IO_RETENTION_PB_7_0(value)      (SFRBU_IO_RETENTION_PB_7_0_Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PB_7_0_Pos)) /* Assigment of value for PB_7_0 in the SFRBU_IO_RETENTION register */
#define SFRBU_IO_RETENTION_PB_15_8_Pos        _UINT32_(5)                                          /* (SFRBU_IO_RETENTION) Keep Function on PB8 to PB15 Position */
#define SFRBU_IO_RETENTION_PB_15_8_Msk        (_UINT32_(0x1) << SFRBU_IO_RETENTION_PB_15_8_Pos)    /* (SFRBU_IO_RETENTION) Keep Function on PB8 to PB15 Mask */
#define SFRBU_IO_RETENTION_PB_15_8(value)     (SFRBU_IO_RETENTION_PB_15_8_Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PB_15_8_Pos)) /* Assigment of value for PB_15_8 in the SFRBU_IO_RETENTION register */
#define SFRBU_IO_RETENTION_PB_23_16_Pos       _UINT32_(6)                                          /* (SFRBU_IO_RETENTION) Keep Function on PB216 to PB23 Position */
#define SFRBU_IO_RETENTION_PB_23_16_Msk       (_UINT32_(0x1) << SFRBU_IO_RETENTION_PB_23_16_Pos)   /* (SFRBU_IO_RETENTION) Keep Function on PB216 to PB23 Mask */
#define SFRBU_IO_RETENTION_PB_23_16(value)    (SFRBU_IO_RETENTION_PB_23_16_Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PB_23_16_Pos)) /* Assigment of value for PB_23_16 in the SFRBU_IO_RETENTION register */
#define SFRBU_IO_RETENTION_PB_26_24_Pos       _UINT32_(7)                                          /* (SFRBU_IO_RETENTION) Keep Function on PB24 to PB26 Position */
#define SFRBU_IO_RETENTION_PB_26_24_Msk       (_UINT32_(0x1) << SFRBU_IO_RETENTION_PB_26_24_Pos)   /* (SFRBU_IO_RETENTION) Keep Function on PB24 to PB26 Mask */
#define SFRBU_IO_RETENTION_PB_26_24(value)    (SFRBU_IO_RETENTION_PB_26_24_Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PB_26_24_Pos)) /* Assigment of value for PB_26_24 in the SFRBU_IO_RETENTION register */
#define SFRBU_IO_RETENTION_PC_7_0_Pos         _UINT32_(8)                                          /* (SFRBU_IO_RETENTION) Keep Function on PC0 to PC7 Position */
#define SFRBU_IO_RETENTION_PC_7_0_Msk         (_UINT32_(0x1) << SFRBU_IO_RETENTION_PC_7_0_Pos)     /* (SFRBU_IO_RETENTION) Keep Function on PC0 to PC7 Mask */
#define SFRBU_IO_RETENTION_PC_7_0(value)      (SFRBU_IO_RETENTION_PC_7_0_Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PC_7_0_Pos)) /* Assigment of value for PC_7_0 in the SFRBU_IO_RETENTION register */
#define SFRBU_IO_RETENTION_PC_15_8_Pos        _UINT32_(9)                                          /* (SFRBU_IO_RETENTION) Keep Function on PC8 to PC15 Position */
#define SFRBU_IO_RETENTION_PC_15_8_Msk        (_UINT32_(0x1) << SFRBU_IO_RETENTION_PC_15_8_Pos)    /* (SFRBU_IO_RETENTION) Keep Function on PC8 to PC15 Mask */
#define SFRBU_IO_RETENTION_PC_15_8(value)     (SFRBU_IO_RETENTION_PC_15_8_Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PC_15_8_Pos)) /* Assigment of value for PC_15_8 in the SFRBU_IO_RETENTION register */
#define SFRBU_IO_RETENTION_PC_22_16_Pos       _UINT32_(10)                                         /* (SFRBU_IO_RETENTION) Keep Function on PC16 to PC22 Position */
#define SFRBU_IO_RETENTION_PC_22_16_Msk       (_UINT32_(0x1) << SFRBU_IO_RETENTION_PC_22_16_Pos)   /* (SFRBU_IO_RETENTION) Keep Function on PC16 to PC22 Mask */
#define SFRBU_IO_RETENTION_PC_22_16(value)    (SFRBU_IO_RETENTION_PC_22_16_Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PC_22_16_Pos)) /* Assigment of value for PC_22_16 in the SFRBU_IO_RETENTION register */
#define SFRBU_IO_RETENTION_PD_7_0_Pos         _UINT32_(12)                                         /* (SFRBU_IO_RETENTION) Keep Function on PD0 to PD7 Position */
#define SFRBU_IO_RETENTION_PD_7_0_Msk         (_UINT32_(0x1) << SFRBU_IO_RETENTION_PD_7_0_Pos)     /* (SFRBU_IO_RETENTION) Keep Function on PD0 to PD7 Mask */
#define SFRBU_IO_RETENTION_PD_7_0(value)      (SFRBU_IO_RETENTION_PD_7_0_Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PD_7_0_Pos)) /* Assigment of value for PD_7_0 in the SFRBU_IO_RETENTION register */
#define SFRBU_IO_RETENTION_PD_15_8_Pos        _UINT32_(13)                                         /* (SFRBU_IO_RETENTION) Keep Function on PD8 to PD15 Position */
#define SFRBU_IO_RETENTION_PD_15_8_Msk        (_UINT32_(0x1) << SFRBU_IO_RETENTION_PD_15_8_Pos)    /* (SFRBU_IO_RETENTION) Keep Function on PD8 to PD15 Mask */
#define SFRBU_IO_RETENTION_PD_15_8(value)     (SFRBU_IO_RETENTION_PD_15_8_Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PD_15_8_Pos)) /* Assigment of value for PD_15_8 in the SFRBU_IO_RETENTION register */
#define SFRBU_IO_RETENTION_PD_23_16_Pos       _UINT32_(14)                                         /* (SFRBU_IO_RETENTION) Keep Function on PD16 to PD23 Position */
#define SFRBU_IO_RETENTION_PD_23_16_Msk       (_UINT32_(0x1) << SFRBU_IO_RETENTION_PD_23_16_Pos)   /* (SFRBU_IO_RETENTION) Keep Function on PD16 to PD23 Mask */
#define SFRBU_IO_RETENTION_PD_23_16(value)    (SFRBU_IO_RETENTION_PD_23_16_Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PD_23_16_Pos)) /* Assigment of value for PD_23_16 in the SFRBU_IO_RETENTION register */
#define SFRBU_IO_RETENTION_PD_30_24_Pos       _UINT32_(15)                                         /* (SFRBU_IO_RETENTION) Keep Function on PD24 to PD30 Position */
#define SFRBU_IO_RETENTION_PD_30_24_Msk       (_UINT32_(0x1) << SFRBU_IO_RETENTION_PD_30_24_Pos)   /* (SFRBU_IO_RETENTION) Keep Function on PD24 to PD30 Mask */
#define SFRBU_IO_RETENTION_PD_30_24(value)    (SFRBU_IO_RETENTION_PD_30_24_Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PD_30_24_Pos)) /* Assigment of value for PD_30_24 in the SFRBU_IO_RETENTION register */
#define SFRBU_IO_RETENTION_NRST_Pos           _UINT32_(16)                                         /* (SFRBU_IO_RETENTION) Keep Function on NRST Position */
#define SFRBU_IO_RETENTION_NRST_Msk           (_UINT32_(0x1) << SFRBU_IO_RETENTION_NRST_Pos)       /* (SFRBU_IO_RETENTION) Keep Function on NRST Mask */
#define SFRBU_IO_RETENTION_NRST(value)        (SFRBU_IO_RETENTION_NRST_Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_NRST_Pos)) /* Assigment of value for NRST in the SFRBU_IO_RETENTION register */
#define SFRBU_IO_RETENTION_Msk                _UINT32_(0x0001F7FF)                                 /* (SFRBU_IO_RETENTION) Register Mask  */

#define SFRBU_IO_RETENTION_PA_7__Pos          _UINT32_(0)                                          /* (SFRBU_IO_RETENTION Position) Keep Function on PAx to PA7 */
#define SFRBU_IO_RETENTION_PA_7__Msk          (_UINT32_(0x1) << SFRBU_IO_RETENTION_PA_7__Pos)      /* (SFRBU_IO_RETENTION Mask) PA_7_ */
#define SFRBU_IO_RETENTION_PA_7_(value)       (SFRBU_IO_RETENTION_PA_7__Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PA_7__Pos)) 
#define SFRBU_IO_RETENTION_PA_15__Pos         _UINT32_(1)                                          /* (SFRBU_IO_RETENTION Position) Keep Function on PA8 to PAx5 */
#define SFRBU_IO_RETENTION_PA_15__Msk         (_UINT32_(0x1) << SFRBU_IO_RETENTION_PA_15__Pos)     /* (SFRBU_IO_RETENTION Mask) PA_15_ */
#define SFRBU_IO_RETENTION_PA_15_(value)      (SFRBU_IO_RETENTION_PA_15__Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PA_15__Pos)) 
#define SFRBU_IO_RETENTION_PA_23__Pos         _UINT32_(2)                                          /* (SFRBU_IO_RETENTION Position) Keep Function on PAx6 to PA23 */
#define SFRBU_IO_RETENTION_PA_23__Msk         (_UINT32_(0x1) << SFRBU_IO_RETENTION_PA_23__Pos)     /* (SFRBU_IO_RETENTION Mask) PA_23_ */
#define SFRBU_IO_RETENTION_PA_23_(value)      (SFRBU_IO_RETENTION_PA_23__Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PA_23__Pos)) 
#define SFRBU_IO_RETENTION_PA_31__Pos         _UINT32_(3)                                          /* (SFRBU_IO_RETENTION Position) Keep Function on PA24 to PA3x */
#define SFRBU_IO_RETENTION_PA_31__Msk         (_UINT32_(0x1) << SFRBU_IO_RETENTION_PA_31__Pos)     /* (SFRBU_IO_RETENTION Mask) PA_31_ */
#define SFRBU_IO_RETENTION_PA_31_(value)      (SFRBU_IO_RETENTION_PA_31__Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PA_31__Pos)) 
#define SFRBU_IO_RETENTION_PB_7__Pos          _UINT32_(4)                                          /* (SFRBU_IO_RETENTION Position) Keep Function on PBx to PB7 */
#define SFRBU_IO_RETENTION_PB_7__Msk          (_UINT32_(0x1) << SFRBU_IO_RETENTION_PB_7__Pos)      /* (SFRBU_IO_RETENTION Mask) PB_7_ */
#define SFRBU_IO_RETENTION_PB_7_(value)       (SFRBU_IO_RETENTION_PB_7__Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PB_7__Pos)) 
#define SFRBU_IO_RETENTION_PB_15__Pos         _UINT32_(5)                                          /* (SFRBU_IO_RETENTION Position) Keep Function on PB8 to PBx5 */
#define SFRBU_IO_RETENTION_PB_15__Msk         (_UINT32_(0x1) << SFRBU_IO_RETENTION_PB_15__Pos)     /* (SFRBU_IO_RETENTION Mask) PB_15_ */
#define SFRBU_IO_RETENTION_PB_15_(value)      (SFRBU_IO_RETENTION_PB_15__Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PB_15__Pos)) 
#define SFRBU_IO_RETENTION_PB_23__Pos         _UINT32_(6)                                          /* (SFRBU_IO_RETENTION Position) Keep Function on PB2x6 to PB23 */
#define SFRBU_IO_RETENTION_PB_23__Msk         (_UINT32_(0x1) << SFRBU_IO_RETENTION_PB_23__Pos)     /* (SFRBU_IO_RETENTION Mask) PB_23_ */
#define SFRBU_IO_RETENTION_PB_23_(value)      (SFRBU_IO_RETENTION_PB_23__Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PB_23__Pos)) 
#define SFRBU_IO_RETENTION_PB_26__Pos         _UINT32_(7)                                          /* (SFRBU_IO_RETENTION Position) Keep Function on PB24 to PB26 */
#define SFRBU_IO_RETENTION_PB_26__Msk         (_UINT32_(0x1) << SFRBU_IO_RETENTION_PB_26__Pos)     /* (SFRBU_IO_RETENTION Mask) PB_26_ */
#define SFRBU_IO_RETENTION_PB_26_(value)      (SFRBU_IO_RETENTION_PB_26__Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PB_26__Pos)) 
#define SFRBU_IO_RETENTION_PC_7__Pos          _UINT32_(8)                                          /* (SFRBU_IO_RETENTION Position) Keep Function on PCx to PC7 */
#define SFRBU_IO_RETENTION_PC_7__Msk          (_UINT32_(0x1) << SFRBU_IO_RETENTION_PC_7__Pos)      /* (SFRBU_IO_RETENTION Mask) PC_7_ */
#define SFRBU_IO_RETENTION_PC_7_(value)       (SFRBU_IO_RETENTION_PC_7__Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PC_7__Pos)) 
#define SFRBU_IO_RETENTION_PC_15__Pos         _UINT32_(9)                                          /* (SFRBU_IO_RETENTION Position) Keep Function on PC8 to PCx5 */
#define SFRBU_IO_RETENTION_PC_15__Msk         (_UINT32_(0x1) << SFRBU_IO_RETENTION_PC_15__Pos)     /* (SFRBU_IO_RETENTION Mask) PC_15_ */
#define SFRBU_IO_RETENTION_PC_15_(value)      (SFRBU_IO_RETENTION_PC_15__Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PC_15__Pos)) 
#define SFRBU_IO_RETENTION_PC_22__Pos         _UINT32_(10)                                         /* (SFRBU_IO_RETENTION Position) Keep Function on PCx6 to PC22 */
#define SFRBU_IO_RETENTION_PC_22__Msk         (_UINT32_(0x1) << SFRBU_IO_RETENTION_PC_22__Pos)     /* (SFRBU_IO_RETENTION Mask) PC_22_ */
#define SFRBU_IO_RETENTION_PC_22_(value)      (SFRBU_IO_RETENTION_PC_22__Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PC_22__Pos)) 
#define SFRBU_IO_RETENTION_PD_7__Pos          _UINT32_(12)                                         /* (SFRBU_IO_RETENTION Position) Keep Function on PDx to PD7 */
#define SFRBU_IO_RETENTION_PD_7__Msk          (_UINT32_(0x1) << SFRBU_IO_RETENTION_PD_7__Pos)      /* (SFRBU_IO_RETENTION Mask) PD_7_ */
#define SFRBU_IO_RETENTION_PD_7_(value)       (SFRBU_IO_RETENTION_PD_7__Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PD_7__Pos)) 
#define SFRBU_IO_RETENTION_PD_15__Pos         _UINT32_(13)                                         /* (SFRBU_IO_RETENTION Position) Keep Function on PD8 to PDx5 */
#define SFRBU_IO_RETENTION_PD_15__Msk         (_UINT32_(0x1) << SFRBU_IO_RETENTION_PD_15__Pos)     /* (SFRBU_IO_RETENTION Mask) PD_15_ */
#define SFRBU_IO_RETENTION_PD_15_(value)      (SFRBU_IO_RETENTION_PD_15__Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PD_15__Pos)) 
#define SFRBU_IO_RETENTION_PD_23__Pos         _UINT32_(14)                                         /* (SFRBU_IO_RETENTION Position) Keep Function on PDx6 to PD23 */
#define SFRBU_IO_RETENTION_PD_23__Msk         (_UINT32_(0x1) << SFRBU_IO_RETENTION_PD_23__Pos)     /* (SFRBU_IO_RETENTION Mask) PD_23_ */
#define SFRBU_IO_RETENTION_PD_23_(value)      (SFRBU_IO_RETENTION_PD_23__Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PD_23__Pos)) 
#define SFRBU_IO_RETENTION_PD_30__Pos         _UINT32_(15)                                         /* (SFRBU_IO_RETENTION Position) Keep Function on PD24 to PD3x */
#define SFRBU_IO_RETENTION_PD_30__Msk         (_UINT32_(0x1) << SFRBU_IO_RETENTION_PD_30__Pos)     /* (SFRBU_IO_RETENTION Mask) PD_30_ */
#define SFRBU_IO_RETENTION_PD_30_(value)      (SFRBU_IO_RETENTION_PD_30__Msk & (_UINT32_(value) << SFRBU_IO_RETENTION_PD_30__Pos)) 

/* -------- SFRBU_BODCORE : (SFRBU Offset: 0x40) (R/W 32) BOD Core Register -------- */
#define SFRBU_BODCORE_STATUS_Pos              _UINT32_(0)                                          /* (SFRBU_BODCORE) Core Brownout Detector Position */
#define SFRBU_BODCORE_STATUS_Msk              (_UINT32_(0x1) << SFRBU_BODCORE_STATUS_Pos)          /* (SFRBU_BODCORE) Core Brownout Detector Mask */
#define SFRBU_BODCORE_STATUS(value)           (SFRBU_BODCORE_STATUS_Msk & (_UINT32_(value) << SFRBU_BODCORE_STATUS_Pos)) /* Assigment of value for STATUS in the SFRBU_BODCORE register */
#define SFRBU_BODCORE_Msk                     _UINT32_(0x00000001)                                 /* (SFRBU_BODCORE) Register Mask  */


/* -------- SFRBU_WPMR : (SFRBU Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define SFRBU_WPMR_WPEN_Pos                   _UINT32_(0)                                          /* (SFRBU_WPMR) Write Protection Enable Position */
#define SFRBU_WPMR_WPEN_Msk                   (_UINT32_(0x1) << SFRBU_WPMR_WPEN_Pos)               /* (SFRBU_WPMR) Write Protection Enable Mask */
#define SFRBU_WPMR_WPEN(value)                (SFRBU_WPMR_WPEN_Msk & (_UINT32_(value) << SFRBU_WPMR_WPEN_Pos)) /* Assigment of value for WPEN in the SFRBU_WPMR register */
#define SFRBU_WPMR_WPKEY_Pos                  _UINT32_(8)                                          /* (SFRBU_WPMR) Write Protection Key Position */
#define SFRBU_WPMR_WPKEY_Msk                  (_UINT32_(0xFFFFFF) << SFRBU_WPMR_WPKEY_Pos)         /* (SFRBU_WPMR) Write Protection Key Mask */
#define SFRBU_WPMR_WPKEY(value)               (SFRBU_WPMR_WPKEY_Msk & (_UINT32_(value) << SFRBU_WPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the SFRBU_WPMR register */
#define   SFRBU_WPMR_WPKEY_PASSWD_Val         _UINT32_(0x534652)                                   /* (SFRBU_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0.  */
#define SFRBU_WPMR_WPKEY_PASSWD               (SFRBU_WPMR_WPKEY_PASSWD_Val << SFRBU_WPMR_WPKEY_Pos) /* (SFRBU_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0. Position  */
#define SFRBU_WPMR_Msk                        _UINT32_(0xFFFFFF01)                                 /* (SFRBU_WPMR) Register Mask  */


/* -------- SFRBU_WPSR : (SFRBU Offset: 0xE8) (R/W 32) Write Protection Status Register -------- */
#define SFRBU_WPSR_WPVS_Pos                   _UINT32_(0)                                          /* (SFRBU_WPSR) Write Protection Violation Status Position */
#define SFRBU_WPSR_WPVS_Msk                   (_UINT32_(0x1) << SFRBU_WPSR_WPVS_Pos)               /* (SFRBU_WPSR) Write Protection Violation Status Mask */
#define SFRBU_WPSR_WPVS(value)                (SFRBU_WPSR_WPVS_Msk & (_UINT32_(value) << SFRBU_WPSR_WPVS_Pos)) /* Assigment of value for WPVS in the SFRBU_WPSR register */
#define SFRBU_WPSR_WPSRC_Pos                  _UINT32_(8)                                          /* (SFRBU_WPSR) Write Protection Source Position */
#define SFRBU_WPSR_WPSRC_Msk                  (_UINT32_(0xFFFF) << SFRBU_WPSR_WPSRC_Pos)           /* (SFRBU_WPSR) Write Protection Source Mask */
#define SFRBU_WPSR_WPSRC(value)               (SFRBU_WPSR_WPSRC_Msk & (_UINT32_(value) << SFRBU_WPSR_WPSRC_Pos)) /* Assigment of value for WPSRC in the SFRBU_WPSR register */
#define SFRBU_WPSR_Msk                        _UINT32_(0x00FFFF01)                                 /* (SFRBU_WPSR) Register Mask  */


/** \brief SFRBU register offsets definitions */
#define SFRBU_IO_RETENTION_REG_OFST    _UINT32_(0x30)      /* (SFRBU_IO_RETENTION) IO Retention Register Offset */
#define SFRBU_BODCORE_REG_OFST         _UINT32_(0x40)      /* (SFRBU_BODCORE) BOD Core Register Offset */
#define SFRBU_WPMR_REG_OFST            _UINT32_(0xE4)      /* (SFRBU_WPMR) Write Protection Mode Register Offset */
#define SFRBU_WPSR_REG_OFST            _UINT32_(0xE8)      /* (SFRBU_WPSR) Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SFRBU register API structure */
typedef struct
{
  __I   uint8_t                        Reserved1[0x30];
  __IO  uint32_t                       SFRBU_IO_RETENTION; /**< Offset: 0x30 (R/W  32) IO Retention Register */
  __I   uint8_t                        Reserved2[0x0C];
  __IO  uint32_t                       SFRBU_BODCORE;      /**< Offset: 0x40 (R/W  32) BOD Core Register */
  __I   uint8_t                        Reserved3[0xA0];
  __IO  uint32_t                       SFRBU_WPMR;         /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __IO  uint32_t                       SFRBU_WPSR;         /**< Offset: 0xE8 (R/W  32) Write Protection Status Register */
} sfrbu_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CXMTSH_SFRBU_COMPONENT_H_ */
