/*
 * Component description for IPC
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
#ifndef _PIC32CXMTSH_IPC_COMPONENT_H_
#define _PIC32CXMTSH_IPC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR IPC                                          */
/* ************************************************************************** */

/* -------- IPC_ISCR : (IPC Offset: 0x00) ( /W 32) Interrupt Set Command Register -------- */
#define IPC_ISCR_IRQ0_Pos                     _UINT32_(0)                                          /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ0_Msk                     (_UINT32_(0x1) << IPC_ISCR_IRQ0_Pos)                 /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ0(value)                  (IPC_ISCR_IRQ0_Msk & (_UINT32_(value) << IPC_ISCR_IRQ0_Pos)) /* Assigment of value for IRQ0 in the IPC_ISCR register */
#define IPC_ISCR_IRQ1_Pos                     _UINT32_(1)                                          /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ1_Msk                     (_UINT32_(0x1) << IPC_ISCR_IRQ1_Pos)                 /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ1(value)                  (IPC_ISCR_IRQ1_Msk & (_UINT32_(value) << IPC_ISCR_IRQ1_Pos)) /* Assigment of value for IRQ1 in the IPC_ISCR register */
#define IPC_ISCR_IRQ2_Pos                     _UINT32_(2)                                          /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ2_Msk                     (_UINT32_(0x1) << IPC_ISCR_IRQ2_Pos)                 /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ2(value)                  (IPC_ISCR_IRQ2_Msk & (_UINT32_(value) << IPC_ISCR_IRQ2_Pos)) /* Assigment of value for IRQ2 in the IPC_ISCR register */
#define IPC_ISCR_IRQ3_Pos                     _UINT32_(3)                                          /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ3_Msk                     (_UINT32_(0x1) << IPC_ISCR_IRQ3_Pos)                 /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ3(value)                  (IPC_ISCR_IRQ3_Msk & (_UINT32_(value) << IPC_ISCR_IRQ3_Pos)) /* Assigment of value for IRQ3 in the IPC_ISCR register */
#define IPC_ISCR_IRQ4_Pos                     _UINT32_(4)                                          /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ4_Msk                     (_UINT32_(0x1) << IPC_ISCR_IRQ4_Pos)                 /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ4(value)                  (IPC_ISCR_IRQ4_Msk & (_UINT32_(value) << IPC_ISCR_IRQ4_Pos)) /* Assigment of value for IRQ4 in the IPC_ISCR register */
#define IPC_ISCR_IRQ5_Pos                     _UINT32_(5)                                          /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ5_Msk                     (_UINT32_(0x1) << IPC_ISCR_IRQ5_Pos)                 /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ5(value)                  (IPC_ISCR_IRQ5_Msk & (_UINT32_(value) << IPC_ISCR_IRQ5_Pos)) /* Assigment of value for IRQ5 in the IPC_ISCR register */
#define IPC_ISCR_IRQ6_Pos                     _UINT32_(6)                                          /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ6_Msk                     (_UINT32_(0x1) << IPC_ISCR_IRQ6_Pos)                 /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ6(value)                  (IPC_ISCR_IRQ6_Msk & (_UINT32_(value) << IPC_ISCR_IRQ6_Pos)) /* Assigment of value for IRQ6 in the IPC_ISCR register */
#define IPC_ISCR_IRQ7_Pos                     _UINT32_(7)                                          /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ7_Msk                     (_UINT32_(0x1) << IPC_ISCR_IRQ7_Pos)                 /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ7(value)                  (IPC_ISCR_IRQ7_Msk & (_UINT32_(value) << IPC_ISCR_IRQ7_Pos)) /* Assigment of value for IRQ7 in the IPC_ISCR register */
#define IPC_ISCR_IRQ8_Pos                     _UINT32_(8)                                          /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ8_Msk                     (_UINT32_(0x1) << IPC_ISCR_IRQ8_Pos)                 /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ8(value)                  (IPC_ISCR_IRQ8_Msk & (_UINT32_(value) << IPC_ISCR_IRQ8_Pos)) /* Assigment of value for IRQ8 in the IPC_ISCR register */
#define IPC_ISCR_IRQ9_Pos                     _UINT32_(9)                                          /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ9_Msk                     (_UINT32_(0x1) << IPC_ISCR_IRQ9_Pos)                 /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ9(value)                  (IPC_ISCR_IRQ9_Msk & (_UINT32_(value) << IPC_ISCR_IRQ9_Pos)) /* Assigment of value for IRQ9 in the IPC_ISCR register */
#define IPC_ISCR_IRQ10_Pos                    _UINT32_(10)                                         /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ10_Msk                    (_UINT32_(0x1) << IPC_ISCR_IRQ10_Pos)                /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ10(value)                 (IPC_ISCR_IRQ10_Msk & (_UINT32_(value) << IPC_ISCR_IRQ10_Pos)) /* Assigment of value for IRQ10 in the IPC_ISCR register */
#define IPC_ISCR_IRQ11_Pos                    _UINT32_(11)                                         /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ11_Msk                    (_UINT32_(0x1) << IPC_ISCR_IRQ11_Pos)                /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ11(value)                 (IPC_ISCR_IRQ11_Msk & (_UINT32_(value) << IPC_ISCR_IRQ11_Pos)) /* Assigment of value for IRQ11 in the IPC_ISCR register */
#define IPC_ISCR_IRQ12_Pos                    _UINT32_(12)                                         /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ12_Msk                    (_UINT32_(0x1) << IPC_ISCR_IRQ12_Pos)                /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ12(value)                 (IPC_ISCR_IRQ12_Msk & (_UINT32_(value) << IPC_ISCR_IRQ12_Pos)) /* Assigment of value for IRQ12 in the IPC_ISCR register */
#define IPC_ISCR_IRQ13_Pos                    _UINT32_(13)                                         /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ13_Msk                    (_UINT32_(0x1) << IPC_ISCR_IRQ13_Pos)                /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ13(value)                 (IPC_ISCR_IRQ13_Msk & (_UINT32_(value) << IPC_ISCR_IRQ13_Pos)) /* Assigment of value for IRQ13 in the IPC_ISCR register */
#define IPC_ISCR_IRQ14_Pos                    _UINT32_(14)                                         /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ14_Msk                    (_UINT32_(0x1) << IPC_ISCR_IRQ14_Pos)                /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ14(value)                 (IPC_ISCR_IRQ14_Msk & (_UINT32_(value) << IPC_ISCR_IRQ14_Pos)) /* Assigment of value for IRQ14 in the IPC_ISCR register */
#define IPC_ISCR_IRQ15_Pos                    _UINT32_(15)                                         /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ15_Msk                    (_UINT32_(0x1) << IPC_ISCR_IRQ15_Pos)                /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ15(value)                 (IPC_ISCR_IRQ15_Msk & (_UINT32_(value) << IPC_ISCR_IRQ15_Pos)) /* Assigment of value for IRQ15 in the IPC_ISCR register */
#define IPC_ISCR_IRQ16_Pos                    _UINT32_(16)                                         /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ16_Msk                    (_UINT32_(0x1) << IPC_ISCR_IRQ16_Pos)                /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ16(value)                 (IPC_ISCR_IRQ16_Msk & (_UINT32_(value) << IPC_ISCR_IRQ16_Pos)) /* Assigment of value for IRQ16 in the IPC_ISCR register */
#define IPC_ISCR_IRQ17_Pos                    _UINT32_(17)                                         /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ17_Msk                    (_UINT32_(0x1) << IPC_ISCR_IRQ17_Pos)                /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ17(value)                 (IPC_ISCR_IRQ17_Msk & (_UINT32_(value) << IPC_ISCR_IRQ17_Pos)) /* Assigment of value for IRQ17 in the IPC_ISCR register */
#define IPC_ISCR_IRQ18_Pos                    _UINT32_(18)                                         /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ18_Msk                    (_UINT32_(0x1) << IPC_ISCR_IRQ18_Pos)                /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ18(value)                 (IPC_ISCR_IRQ18_Msk & (_UINT32_(value) << IPC_ISCR_IRQ18_Pos)) /* Assigment of value for IRQ18 in the IPC_ISCR register */
#define IPC_ISCR_IRQ19_Pos                    _UINT32_(19)                                         /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ19_Msk                    (_UINT32_(0x1) << IPC_ISCR_IRQ19_Pos)                /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ19(value)                 (IPC_ISCR_IRQ19_Msk & (_UINT32_(value) << IPC_ISCR_IRQ19_Pos)) /* Assigment of value for IRQ19 in the IPC_ISCR register */
#define IPC_ISCR_IRQ20_Pos                    _UINT32_(20)                                         /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ20_Msk                    (_UINT32_(0x1) << IPC_ISCR_IRQ20_Pos)                /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ20(value)                 (IPC_ISCR_IRQ20_Msk & (_UINT32_(value) << IPC_ISCR_IRQ20_Pos)) /* Assigment of value for IRQ20 in the IPC_ISCR register */
#define IPC_ISCR_IRQ21_Pos                    _UINT32_(21)                                         /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ21_Msk                    (_UINT32_(0x1) << IPC_ISCR_IRQ21_Pos)                /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ21(value)                 (IPC_ISCR_IRQ21_Msk & (_UINT32_(value) << IPC_ISCR_IRQ21_Pos)) /* Assigment of value for IRQ21 in the IPC_ISCR register */
#define IPC_ISCR_IRQ22_Pos                    _UINT32_(22)                                         /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ22_Msk                    (_UINT32_(0x1) << IPC_ISCR_IRQ22_Pos)                /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ22(value)                 (IPC_ISCR_IRQ22_Msk & (_UINT32_(value) << IPC_ISCR_IRQ22_Pos)) /* Assigment of value for IRQ22 in the IPC_ISCR register */
#define IPC_ISCR_IRQ23_Pos                    _UINT32_(23)                                         /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ23_Msk                    (_UINT32_(0x1) << IPC_ISCR_IRQ23_Pos)                /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ23(value)                 (IPC_ISCR_IRQ23_Msk & (_UINT32_(value) << IPC_ISCR_IRQ23_Pos)) /* Assigment of value for IRQ23 in the IPC_ISCR register */
#define IPC_ISCR_IRQ24_Pos                    _UINT32_(24)                                         /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ24_Msk                    (_UINT32_(0x1) << IPC_ISCR_IRQ24_Pos)                /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ24(value)                 (IPC_ISCR_IRQ24_Msk & (_UINT32_(value) << IPC_ISCR_IRQ24_Pos)) /* Assigment of value for IRQ24 in the IPC_ISCR register */
#define IPC_ISCR_IRQ25_Pos                    _UINT32_(25)                                         /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ25_Msk                    (_UINT32_(0x1) << IPC_ISCR_IRQ25_Pos)                /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ25(value)                 (IPC_ISCR_IRQ25_Msk & (_UINT32_(value) << IPC_ISCR_IRQ25_Pos)) /* Assigment of value for IRQ25 in the IPC_ISCR register */
#define IPC_ISCR_IRQ26_Pos                    _UINT32_(26)                                         /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ26_Msk                    (_UINT32_(0x1) << IPC_ISCR_IRQ26_Pos)                /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ26(value)                 (IPC_ISCR_IRQ26_Msk & (_UINT32_(value) << IPC_ISCR_IRQ26_Pos)) /* Assigment of value for IRQ26 in the IPC_ISCR register */
#define IPC_ISCR_IRQ27_Pos                    _UINT32_(27)                                         /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ27_Msk                    (_UINT32_(0x1) << IPC_ISCR_IRQ27_Pos)                /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ27(value)                 (IPC_ISCR_IRQ27_Msk & (_UINT32_(value) << IPC_ISCR_IRQ27_Pos)) /* Assigment of value for IRQ27 in the IPC_ISCR register */
#define IPC_ISCR_IRQ28_Pos                    _UINT32_(28)                                         /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ28_Msk                    (_UINT32_(0x1) << IPC_ISCR_IRQ28_Pos)                /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ28(value)                 (IPC_ISCR_IRQ28_Msk & (_UINT32_(value) << IPC_ISCR_IRQ28_Pos)) /* Assigment of value for IRQ28 in the IPC_ISCR register */
#define IPC_ISCR_IRQ29_Pos                    _UINT32_(29)                                         /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ29_Msk                    (_UINT32_(0x1) << IPC_ISCR_IRQ29_Pos)                /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ29(value)                 (IPC_ISCR_IRQ29_Msk & (_UINT32_(value) << IPC_ISCR_IRQ29_Pos)) /* Assigment of value for IRQ29 in the IPC_ISCR register */
#define IPC_ISCR_IRQ30_Pos                    _UINT32_(30)                                         /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ30_Msk                    (_UINT32_(0x1) << IPC_ISCR_IRQ30_Pos)                /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ30(value)                 (IPC_ISCR_IRQ30_Msk & (_UINT32_(value) << IPC_ISCR_IRQ30_Pos)) /* Assigment of value for IRQ30 in the IPC_ISCR register */
#define IPC_ISCR_IRQ31_Pos                    _UINT32_(31)                                         /* (IPC_ISCR) Interrupt Set Position */
#define IPC_ISCR_IRQ31_Msk                    (_UINT32_(0x1) << IPC_ISCR_IRQ31_Pos)                /* (IPC_ISCR) Interrupt Set Mask */
#define IPC_ISCR_IRQ31(value)                 (IPC_ISCR_IRQ31_Msk & (_UINT32_(value) << IPC_ISCR_IRQ31_Pos)) /* Assigment of value for IRQ31 in the IPC_ISCR register */
#define IPC_ISCR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (IPC_ISCR) Register Mask  */

#define IPC_ISCR_IRQ_Pos                      _UINT32_(0)                                          /* (IPC_ISCR Position) Interrupt Set */
#define IPC_ISCR_IRQ_Msk                      (_UINT32_(0xFFFFFFFF) << IPC_ISCR_IRQ_Pos)           /* (IPC_ISCR Mask) IRQ */
#define IPC_ISCR_IRQ(value)                   (IPC_ISCR_IRQ_Msk & (_UINT32_(value) << IPC_ISCR_IRQ_Pos)) 

/* -------- IPC_ICCR : (IPC Offset: 0x04) ( /W 32) Interrupt Clear Command Register -------- */
#define IPC_ICCR_IRQ0_Pos                     _UINT32_(0)                                          /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ0_Msk                     (_UINT32_(0x1) << IPC_ICCR_IRQ0_Pos)                 /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ0(value)                  (IPC_ICCR_IRQ0_Msk & (_UINT32_(value) << IPC_ICCR_IRQ0_Pos)) /* Assigment of value for IRQ0 in the IPC_ICCR register */
#define IPC_ICCR_IRQ1_Pos                     _UINT32_(1)                                          /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ1_Msk                     (_UINT32_(0x1) << IPC_ICCR_IRQ1_Pos)                 /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ1(value)                  (IPC_ICCR_IRQ1_Msk & (_UINT32_(value) << IPC_ICCR_IRQ1_Pos)) /* Assigment of value for IRQ1 in the IPC_ICCR register */
#define IPC_ICCR_IRQ2_Pos                     _UINT32_(2)                                          /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ2_Msk                     (_UINT32_(0x1) << IPC_ICCR_IRQ2_Pos)                 /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ2(value)                  (IPC_ICCR_IRQ2_Msk & (_UINT32_(value) << IPC_ICCR_IRQ2_Pos)) /* Assigment of value for IRQ2 in the IPC_ICCR register */
#define IPC_ICCR_IRQ3_Pos                     _UINT32_(3)                                          /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ3_Msk                     (_UINT32_(0x1) << IPC_ICCR_IRQ3_Pos)                 /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ3(value)                  (IPC_ICCR_IRQ3_Msk & (_UINT32_(value) << IPC_ICCR_IRQ3_Pos)) /* Assigment of value for IRQ3 in the IPC_ICCR register */
#define IPC_ICCR_IRQ4_Pos                     _UINT32_(4)                                          /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ4_Msk                     (_UINT32_(0x1) << IPC_ICCR_IRQ4_Pos)                 /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ4(value)                  (IPC_ICCR_IRQ4_Msk & (_UINT32_(value) << IPC_ICCR_IRQ4_Pos)) /* Assigment of value for IRQ4 in the IPC_ICCR register */
#define IPC_ICCR_IRQ5_Pos                     _UINT32_(5)                                          /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ5_Msk                     (_UINT32_(0x1) << IPC_ICCR_IRQ5_Pos)                 /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ5(value)                  (IPC_ICCR_IRQ5_Msk & (_UINT32_(value) << IPC_ICCR_IRQ5_Pos)) /* Assigment of value for IRQ5 in the IPC_ICCR register */
#define IPC_ICCR_IRQ6_Pos                     _UINT32_(6)                                          /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ6_Msk                     (_UINT32_(0x1) << IPC_ICCR_IRQ6_Pos)                 /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ6(value)                  (IPC_ICCR_IRQ6_Msk & (_UINT32_(value) << IPC_ICCR_IRQ6_Pos)) /* Assigment of value for IRQ6 in the IPC_ICCR register */
#define IPC_ICCR_IRQ7_Pos                     _UINT32_(7)                                          /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ7_Msk                     (_UINT32_(0x1) << IPC_ICCR_IRQ7_Pos)                 /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ7(value)                  (IPC_ICCR_IRQ7_Msk & (_UINT32_(value) << IPC_ICCR_IRQ7_Pos)) /* Assigment of value for IRQ7 in the IPC_ICCR register */
#define IPC_ICCR_IRQ8_Pos                     _UINT32_(8)                                          /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ8_Msk                     (_UINT32_(0x1) << IPC_ICCR_IRQ8_Pos)                 /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ8(value)                  (IPC_ICCR_IRQ8_Msk & (_UINT32_(value) << IPC_ICCR_IRQ8_Pos)) /* Assigment of value for IRQ8 in the IPC_ICCR register */
#define IPC_ICCR_IRQ9_Pos                     _UINT32_(9)                                          /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ9_Msk                     (_UINT32_(0x1) << IPC_ICCR_IRQ9_Pos)                 /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ9(value)                  (IPC_ICCR_IRQ9_Msk & (_UINT32_(value) << IPC_ICCR_IRQ9_Pos)) /* Assigment of value for IRQ9 in the IPC_ICCR register */
#define IPC_ICCR_IRQ10_Pos                    _UINT32_(10)                                         /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ10_Msk                    (_UINT32_(0x1) << IPC_ICCR_IRQ10_Pos)                /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ10(value)                 (IPC_ICCR_IRQ10_Msk & (_UINT32_(value) << IPC_ICCR_IRQ10_Pos)) /* Assigment of value for IRQ10 in the IPC_ICCR register */
#define IPC_ICCR_IRQ11_Pos                    _UINT32_(11)                                         /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ11_Msk                    (_UINT32_(0x1) << IPC_ICCR_IRQ11_Pos)                /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ11(value)                 (IPC_ICCR_IRQ11_Msk & (_UINT32_(value) << IPC_ICCR_IRQ11_Pos)) /* Assigment of value for IRQ11 in the IPC_ICCR register */
#define IPC_ICCR_IRQ12_Pos                    _UINT32_(12)                                         /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ12_Msk                    (_UINT32_(0x1) << IPC_ICCR_IRQ12_Pos)                /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ12(value)                 (IPC_ICCR_IRQ12_Msk & (_UINT32_(value) << IPC_ICCR_IRQ12_Pos)) /* Assigment of value for IRQ12 in the IPC_ICCR register */
#define IPC_ICCR_IRQ13_Pos                    _UINT32_(13)                                         /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ13_Msk                    (_UINT32_(0x1) << IPC_ICCR_IRQ13_Pos)                /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ13(value)                 (IPC_ICCR_IRQ13_Msk & (_UINT32_(value) << IPC_ICCR_IRQ13_Pos)) /* Assigment of value for IRQ13 in the IPC_ICCR register */
#define IPC_ICCR_IRQ14_Pos                    _UINT32_(14)                                         /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ14_Msk                    (_UINT32_(0x1) << IPC_ICCR_IRQ14_Pos)                /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ14(value)                 (IPC_ICCR_IRQ14_Msk & (_UINT32_(value) << IPC_ICCR_IRQ14_Pos)) /* Assigment of value for IRQ14 in the IPC_ICCR register */
#define IPC_ICCR_IRQ15_Pos                    _UINT32_(15)                                         /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ15_Msk                    (_UINT32_(0x1) << IPC_ICCR_IRQ15_Pos)                /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ15(value)                 (IPC_ICCR_IRQ15_Msk & (_UINT32_(value) << IPC_ICCR_IRQ15_Pos)) /* Assigment of value for IRQ15 in the IPC_ICCR register */
#define IPC_ICCR_IRQ16_Pos                    _UINT32_(16)                                         /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ16_Msk                    (_UINT32_(0x1) << IPC_ICCR_IRQ16_Pos)                /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ16(value)                 (IPC_ICCR_IRQ16_Msk & (_UINT32_(value) << IPC_ICCR_IRQ16_Pos)) /* Assigment of value for IRQ16 in the IPC_ICCR register */
#define IPC_ICCR_IRQ17_Pos                    _UINT32_(17)                                         /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ17_Msk                    (_UINT32_(0x1) << IPC_ICCR_IRQ17_Pos)                /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ17(value)                 (IPC_ICCR_IRQ17_Msk & (_UINT32_(value) << IPC_ICCR_IRQ17_Pos)) /* Assigment of value for IRQ17 in the IPC_ICCR register */
#define IPC_ICCR_IRQ18_Pos                    _UINT32_(18)                                         /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ18_Msk                    (_UINT32_(0x1) << IPC_ICCR_IRQ18_Pos)                /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ18(value)                 (IPC_ICCR_IRQ18_Msk & (_UINT32_(value) << IPC_ICCR_IRQ18_Pos)) /* Assigment of value for IRQ18 in the IPC_ICCR register */
#define IPC_ICCR_IRQ19_Pos                    _UINT32_(19)                                         /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ19_Msk                    (_UINT32_(0x1) << IPC_ICCR_IRQ19_Pos)                /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ19(value)                 (IPC_ICCR_IRQ19_Msk & (_UINT32_(value) << IPC_ICCR_IRQ19_Pos)) /* Assigment of value for IRQ19 in the IPC_ICCR register */
#define IPC_ICCR_IRQ20_Pos                    _UINT32_(20)                                         /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ20_Msk                    (_UINT32_(0x1) << IPC_ICCR_IRQ20_Pos)                /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ20(value)                 (IPC_ICCR_IRQ20_Msk & (_UINT32_(value) << IPC_ICCR_IRQ20_Pos)) /* Assigment of value for IRQ20 in the IPC_ICCR register */
#define IPC_ICCR_IRQ21_Pos                    _UINT32_(21)                                         /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ21_Msk                    (_UINT32_(0x1) << IPC_ICCR_IRQ21_Pos)                /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ21(value)                 (IPC_ICCR_IRQ21_Msk & (_UINT32_(value) << IPC_ICCR_IRQ21_Pos)) /* Assigment of value for IRQ21 in the IPC_ICCR register */
#define IPC_ICCR_IRQ22_Pos                    _UINT32_(22)                                         /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ22_Msk                    (_UINT32_(0x1) << IPC_ICCR_IRQ22_Pos)                /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ22(value)                 (IPC_ICCR_IRQ22_Msk & (_UINT32_(value) << IPC_ICCR_IRQ22_Pos)) /* Assigment of value for IRQ22 in the IPC_ICCR register */
#define IPC_ICCR_IRQ23_Pos                    _UINT32_(23)                                         /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ23_Msk                    (_UINT32_(0x1) << IPC_ICCR_IRQ23_Pos)                /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ23(value)                 (IPC_ICCR_IRQ23_Msk & (_UINT32_(value) << IPC_ICCR_IRQ23_Pos)) /* Assigment of value for IRQ23 in the IPC_ICCR register */
#define IPC_ICCR_IRQ24_Pos                    _UINT32_(24)                                         /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ24_Msk                    (_UINT32_(0x1) << IPC_ICCR_IRQ24_Pos)                /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ24(value)                 (IPC_ICCR_IRQ24_Msk & (_UINT32_(value) << IPC_ICCR_IRQ24_Pos)) /* Assigment of value for IRQ24 in the IPC_ICCR register */
#define IPC_ICCR_IRQ25_Pos                    _UINT32_(25)                                         /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ25_Msk                    (_UINT32_(0x1) << IPC_ICCR_IRQ25_Pos)                /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ25(value)                 (IPC_ICCR_IRQ25_Msk & (_UINT32_(value) << IPC_ICCR_IRQ25_Pos)) /* Assigment of value for IRQ25 in the IPC_ICCR register */
#define IPC_ICCR_IRQ26_Pos                    _UINT32_(26)                                         /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ26_Msk                    (_UINT32_(0x1) << IPC_ICCR_IRQ26_Pos)                /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ26(value)                 (IPC_ICCR_IRQ26_Msk & (_UINT32_(value) << IPC_ICCR_IRQ26_Pos)) /* Assigment of value for IRQ26 in the IPC_ICCR register */
#define IPC_ICCR_IRQ27_Pos                    _UINT32_(27)                                         /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ27_Msk                    (_UINT32_(0x1) << IPC_ICCR_IRQ27_Pos)                /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ27(value)                 (IPC_ICCR_IRQ27_Msk & (_UINT32_(value) << IPC_ICCR_IRQ27_Pos)) /* Assigment of value for IRQ27 in the IPC_ICCR register */
#define IPC_ICCR_IRQ28_Pos                    _UINT32_(28)                                         /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ28_Msk                    (_UINT32_(0x1) << IPC_ICCR_IRQ28_Pos)                /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ28(value)                 (IPC_ICCR_IRQ28_Msk & (_UINT32_(value) << IPC_ICCR_IRQ28_Pos)) /* Assigment of value for IRQ28 in the IPC_ICCR register */
#define IPC_ICCR_IRQ29_Pos                    _UINT32_(29)                                         /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ29_Msk                    (_UINT32_(0x1) << IPC_ICCR_IRQ29_Pos)                /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ29(value)                 (IPC_ICCR_IRQ29_Msk & (_UINT32_(value) << IPC_ICCR_IRQ29_Pos)) /* Assigment of value for IRQ29 in the IPC_ICCR register */
#define IPC_ICCR_IRQ30_Pos                    _UINT32_(30)                                         /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ30_Msk                    (_UINT32_(0x1) << IPC_ICCR_IRQ30_Pos)                /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ30(value)                 (IPC_ICCR_IRQ30_Msk & (_UINT32_(value) << IPC_ICCR_IRQ30_Pos)) /* Assigment of value for IRQ30 in the IPC_ICCR register */
#define IPC_ICCR_IRQ31_Pos                    _UINT32_(31)                                         /* (IPC_ICCR) Interrupt Clear Position */
#define IPC_ICCR_IRQ31_Msk                    (_UINT32_(0x1) << IPC_ICCR_IRQ31_Pos)                /* (IPC_ICCR) Interrupt Clear Mask */
#define IPC_ICCR_IRQ31(value)                 (IPC_ICCR_IRQ31_Msk & (_UINT32_(value) << IPC_ICCR_IRQ31_Pos)) /* Assigment of value for IRQ31 in the IPC_ICCR register */
#define IPC_ICCR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (IPC_ICCR) Register Mask  */

#define IPC_ICCR_IRQ_Pos                      _UINT32_(0)                                          /* (IPC_ICCR Position) Interrupt Clear */
#define IPC_ICCR_IRQ_Msk                      (_UINT32_(0xFFFFFFFF) << IPC_ICCR_IRQ_Pos)           /* (IPC_ICCR Mask) IRQ */
#define IPC_ICCR_IRQ(value)                   (IPC_ICCR_IRQ_Msk & (_UINT32_(value) << IPC_ICCR_IRQ_Pos)) 

/* -------- IPC_IPR : (IPC Offset: 0x08) ( R/ 32) Interrupt Pending Register -------- */
#define IPC_IPR_IRQ0_Pos                      _UINT32_(0)                                          /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ0_Msk                      (_UINT32_(0x1) << IPC_IPR_IRQ0_Pos)                  /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ0(value)                   (IPC_IPR_IRQ0_Msk & (_UINT32_(value) << IPC_IPR_IRQ0_Pos)) /* Assigment of value for IRQ0 in the IPC_IPR register */
#define IPC_IPR_IRQ1_Pos                      _UINT32_(1)                                          /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ1_Msk                      (_UINT32_(0x1) << IPC_IPR_IRQ1_Pos)                  /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ1(value)                   (IPC_IPR_IRQ1_Msk & (_UINT32_(value) << IPC_IPR_IRQ1_Pos)) /* Assigment of value for IRQ1 in the IPC_IPR register */
#define IPC_IPR_IRQ2_Pos                      _UINT32_(2)                                          /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ2_Msk                      (_UINT32_(0x1) << IPC_IPR_IRQ2_Pos)                  /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ2(value)                   (IPC_IPR_IRQ2_Msk & (_UINT32_(value) << IPC_IPR_IRQ2_Pos)) /* Assigment of value for IRQ2 in the IPC_IPR register */
#define IPC_IPR_IRQ3_Pos                      _UINT32_(3)                                          /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ3_Msk                      (_UINT32_(0x1) << IPC_IPR_IRQ3_Pos)                  /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ3(value)                   (IPC_IPR_IRQ3_Msk & (_UINT32_(value) << IPC_IPR_IRQ3_Pos)) /* Assigment of value for IRQ3 in the IPC_IPR register */
#define IPC_IPR_IRQ4_Pos                      _UINT32_(4)                                          /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ4_Msk                      (_UINT32_(0x1) << IPC_IPR_IRQ4_Pos)                  /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ4(value)                   (IPC_IPR_IRQ4_Msk & (_UINT32_(value) << IPC_IPR_IRQ4_Pos)) /* Assigment of value for IRQ4 in the IPC_IPR register */
#define IPC_IPR_IRQ5_Pos                      _UINT32_(5)                                          /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ5_Msk                      (_UINT32_(0x1) << IPC_IPR_IRQ5_Pos)                  /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ5(value)                   (IPC_IPR_IRQ5_Msk & (_UINT32_(value) << IPC_IPR_IRQ5_Pos)) /* Assigment of value for IRQ5 in the IPC_IPR register */
#define IPC_IPR_IRQ6_Pos                      _UINT32_(6)                                          /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ6_Msk                      (_UINT32_(0x1) << IPC_IPR_IRQ6_Pos)                  /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ6(value)                   (IPC_IPR_IRQ6_Msk & (_UINT32_(value) << IPC_IPR_IRQ6_Pos)) /* Assigment of value for IRQ6 in the IPC_IPR register */
#define IPC_IPR_IRQ7_Pos                      _UINT32_(7)                                          /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ7_Msk                      (_UINT32_(0x1) << IPC_IPR_IRQ7_Pos)                  /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ7(value)                   (IPC_IPR_IRQ7_Msk & (_UINT32_(value) << IPC_IPR_IRQ7_Pos)) /* Assigment of value for IRQ7 in the IPC_IPR register */
#define IPC_IPR_IRQ8_Pos                      _UINT32_(8)                                          /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ8_Msk                      (_UINT32_(0x1) << IPC_IPR_IRQ8_Pos)                  /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ8(value)                   (IPC_IPR_IRQ8_Msk & (_UINT32_(value) << IPC_IPR_IRQ8_Pos)) /* Assigment of value for IRQ8 in the IPC_IPR register */
#define IPC_IPR_IRQ9_Pos                      _UINT32_(9)                                          /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ9_Msk                      (_UINT32_(0x1) << IPC_IPR_IRQ9_Pos)                  /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ9(value)                   (IPC_IPR_IRQ9_Msk & (_UINT32_(value) << IPC_IPR_IRQ9_Pos)) /* Assigment of value for IRQ9 in the IPC_IPR register */
#define IPC_IPR_IRQ10_Pos                     _UINT32_(10)                                         /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ10_Msk                     (_UINT32_(0x1) << IPC_IPR_IRQ10_Pos)                 /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ10(value)                  (IPC_IPR_IRQ10_Msk & (_UINT32_(value) << IPC_IPR_IRQ10_Pos)) /* Assigment of value for IRQ10 in the IPC_IPR register */
#define IPC_IPR_IRQ11_Pos                     _UINT32_(11)                                         /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ11_Msk                     (_UINT32_(0x1) << IPC_IPR_IRQ11_Pos)                 /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ11(value)                  (IPC_IPR_IRQ11_Msk & (_UINT32_(value) << IPC_IPR_IRQ11_Pos)) /* Assigment of value for IRQ11 in the IPC_IPR register */
#define IPC_IPR_IRQ12_Pos                     _UINT32_(12)                                         /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ12_Msk                     (_UINT32_(0x1) << IPC_IPR_IRQ12_Pos)                 /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ12(value)                  (IPC_IPR_IRQ12_Msk & (_UINT32_(value) << IPC_IPR_IRQ12_Pos)) /* Assigment of value for IRQ12 in the IPC_IPR register */
#define IPC_IPR_IRQ13_Pos                     _UINT32_(13)                                         /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ13_Msk                     (_UINT32_(0x1) << IPC_IPR_IRQ13_Pos)                 /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ13(value)                  (IPC_IPR_IRQ13_Msk & (_UINT32_(value) << IPC_IPR_IRQ13_Pos)) /* Assigment of value for IRQ13 in the IPC_IPR register */
#define IPC_IPR_IRQ14_Pos                     _UINT32_(14)                                         /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ14_Msk                     (_UINT32_(0x1) << IPC_IPR_IRQ14_Pos)                 /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ14(value)                  (IPC_IPR_IRQ14_Msk & (_UINT32_(value) << IPC_IPR_IRQ14_Pos)) /* Assigment of value for IRQ14 in the IPC_IPR register */
#define IPC_IPR_IRQ15_Pos                     _UINT32_(15)                                         /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ15_Msk                     (_UINT32_(0x1) << IPC_IPR_IRQ15_Pos)                 /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ15(value)                  (IPC_IPR_IRQ15_Msk & (_UINT32_(value) << IPC_IPR_IRQ15_Pos)) /* Assigment of value for IRQ15 in the IPC_IPR register */
#define IPC_IPR_IRQ16_Pos                     _UINT32_(16)                                         /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ16_Msk                     (_UINT32_(0x1) << IPC_IPR_IRQ16_Pos)                 /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ16(value)                  (IPC_IPR_IRQ16_Msk & (_UINT32_(value) << IPC_IPR_IRQ16_Pos)) /* Assigment of value for IRQ16 in the IPC_IPR register */
#define IPC_IPR_IRQ17_Pos                     _UINT32_(17)                                         /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ17_Msk                     (_UINT32_(0x1) << IPC_IPR_IRQ17_Pos)                 /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ17(value)                  (IPC_IPR_IRQ17_Msk & (_UINT32_(value) << IPC_IPR_IRQ17_Pos)) /* Assigment of value for IRQ17 in the IPC_IPR register */
#define IPC_IPR_IRQ18_Pos                     _UINT32_(18)                                         /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ18_Msk                     (_UINT32_(0x1) << IPC_IPR_IRQ18_Pos)                 /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ18(value)                  (IPC_IPR_IRQ18_Msk & (_UINT32_(value) << IPC_IPR_IRQ18_Pos)) /* Assigment of value for IRQ18 in the IPC_IPR register */
#define IPC_IPR_IRQ19_Pos                     _UINT32_(19)                                         /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ19_Msk                     (_UINT32_(0x1) << IPC_IPR_IRQ19_Pos)                 /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ19(value)                  (IPC_IPR_IRQ19_Msk & (_UINT32_(value) << IPC_IPR_IRQ19_Pos)) /* Assigment of value for IRQ19 in the IPC_IPR register */
#define IPC_IPR_IRQ20_Pos                     _UINT32_(20)                                         /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ20_Msk                     (_UINT32_(0x1) << IPC_IPR_IRQ20_Pos)                 /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ20(value)                  (IPC_IPR_IRQ20_Msk & (_UINT32_(value) << IPC_IPR_IRQ20_Pos)) /* Assigment of value for IRQ20 in the IPC_IPR register */
#define IPC_IPR_IRQ21_Pos                     _UINT32_(21)                                         /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ21_Msk                     (_UINT32_(0x1) << IPC_IPR_IRQ21_Pos)                 /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ21(value)                  (IPC_IPR_IRQ21_Msk & (_UINT32_(value) << IPC_IPR_IRQ21_Pos)) /* Assigment of value for IRQ21 in the IPC_IPR register */
#define IPC_IPR_IRQ22_Pos                     _UINT32_(22)                                         /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ22_Msk                     (_UINT32_(0x1) << IPC_IPR_IRQ22_Pos)                 /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ22(value)                  (IPC_IPR_IRQ22_Msk & (_UINT32_(value) << IPC_IPR_IRQ22_Pos)) /* Assigment of value for IRQ22 in the IPC_IPR register */
#define IPC_IPR_IRQ23_Pos                     _UINT32_(23)                                         /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ23_Msk                     (_UINT32_(0x1) << IPC_IPR_IRQ23_Pos)                 /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ23(value)                  (IPC_IPR_IRQ23_Msk & (_UINT32_(value) << IPC_IPR_IRQ23_Pos)) /* Assigment of value for IRQ23 in the IPC_IPR register */
#define IPC_IPR_IRQ24_Pos                     _UINT32_(24)                                         /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ24_Msk                     (_UINT32_(0x1) << IPC_IPR_IRQ24_Pos)                 /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ24(value)                  (IPC_IPR_IRQ24_Msk & (_UINT32_(value) << IPC_IPR_IRQ24_Pos)) /* Assigment of value for IRQ24 in the IPC_IPR register */
#define IPC_IPR_IRQ25_Pos                     _UINT32_(25)                                         /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ25_Msk                     (_UINT32_(0x1) << IPC_IPR_IRQ25_Pos)                 /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ25(value)                  (IPC_IPR_IRQ25_Msk & (_UINT32_(value) << IPC_IPR_IRQ25_Pos)) /* Assigment of value for IRQ25 in the IPC_IPR register */
#define IPC_IPR_IRQ26_Pos                     _UINT32_(26)                                         /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ26_Msk                     (_UINT32_(0x1) << IPC_IPR_IRQ26_Pos)                 /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ26(value)                  (IPC_IPR_IRQ26_Msk & (_UINT32_(value) << IPC_IPR_IRQ26_Pos)) /* Assigment of value for IRQ26 in the IPC_IPR register */
#define IPC_IPR_IRQ27_Pos                     _UINT32_(27)                                         /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ27_Msk                     (_UINT32_(0x1) << IPC_IPR_IRQ27_Pos)                 /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ27(value)                  (IPC_IPR_IRQ27_Msk & (_UINT32_(value) << IPC_IPR_IRQ27_Pos)) /* Assigment of value for IRQ27 in the IPC_IPR register */
#define IPC_IPR_IRQ28_Pos                     _UINT32_(28)                                         /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ28_Msk                     (_UINT32_(0x1) << IPC_IPR_IRQ28_Pos)                 /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ28(value)                  (IPC_IPR_IRQ28_Msk & (_UINT32_(value) << IPC_IPR_IRQ28_Pos)) /* Assigment of value for IRQ28 in the IPC_IPR register */
#define IPC_IPR_IRQ29_Pos                     _UINT32_(29)                                         /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ29_Msk                     (_UINT32_(0x1) << IPC_IPR_IRQ29_Pos)                 /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ29(value)                  (IPC_IPR_IRQ29_Msk & (_UINT32_(value) << IPC_IPR_IRQ29_Pos)) /* Assigment of value for IRQ29 in the IPC_IPR register */
#define IPC_IPR_IRQ30_Pos                     _UINT32_(30)                                         /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ30_Msk                     (_UINT32_(0x1) << IPC_IPR_IRQ30_Pos)                 /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ30(value)                  (IPC_IPR_IRQ30_Msk & (_UINT32_(value) << IPC_IPR_IRQ30_Pos)) /* Assigment of value for IRQ30 in the IPC_IPR register */
#define IPC_IPR_IRQ31_Pos                     _UINT32_(31)                                         /* (IPC_IPR) Interrupt Pending Position */
#define IPC_IPR_IRQ31_Msk                     (_UINT32_(0x1) << IPC_IPR_IRQ31_Pos)                 /* (IPC_IPR) Interrupt Pending Mask */
#define IPC_IPR_IRQ31(value)                  (IPC_IPR_IRQ31_Msk & (_UINT32_(value) << IPC_IPR_IRQ31_Pos)) /* Assigment of value for IRQ31 in the IPC_IPR register */
#define IPC_IPR_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (IPC_IPR) Register Mask  */

#define IPC_IPR_IRQ_Pos                       _UINT32_(0)                                          /* (IPC_IPR Position) Interrupt Pending */
#define IPC_IPR_IRQ_Msk                       (_UINT32_(0xFFFFFFFF) << IPC_IPR_IRQ_Pos)            /* (IPC_IPR Mask) IRQ */
#define IPC_IPR_IRQ(value)                    (IPC_IPR_IRQ_Msk & (_UINT32_(value) << IPC_IPR_IRQ_Pos)) 

/* -------- IPC_IECR : (IPC Offset: 0x0C) ( /W 32) Interrupt Enable Command Register -------- */
#define IPC_IECR_IRQ0_Pos                     _UINT32_(0)                                          /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ0_Msk                     (_UINT32_(0x1) << IPC_IECR_IRQ0_Pos)                 /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ0(value)                  (IPC_IECR_IRQ0_Msk & (_UINT32_(value) << IPC_IECR_IRQ0_Pos)) /* Assigment of value for IRQ0 in the IPC_IECR register */
#define IPC_IECR_IRQ1_Pos                     _UINT32_(1)                                          /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ1_Msk                     (_UINT32_(0x1) << IPC_IECR_IRQ1_Pos)                 /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ1(value)                  (IPC_IECR_IRQ1_Msk & (_UINT32_(value) << IPC_IECR_IRQ1_Pos)) /* Assigment of value for IRQ1 in the IPC_IECR register */
#define IPC_IECR_IRQ2_Pos                     _UINT32_(2)                                          /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ2_Msk                     (_UINT32_(0x1) << IPC_IECR_IRQ2_Pos)                 /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ2(value)                  (IPC_IECR_IRQ2_Msk & (_UINT32_(value) << IPC_IECR_IRQ2_Pos)) /* Assigment of value for IRQ2 in the IPC_IECR register */
#define IPC_IECR_IRQ3_Pos                     _UINT32_(3)                                          /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ3_Msk                     (_UINT32_(0x1) << IPC_IECR_IRQ3_Pos)                 /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ3(value)                  (IPC_IECR_IRQ3_Msk & (_UINT32_(value) << IPC_IECR_IRQ3_Pos)) /* Assigment of value for IRQ3 in the IPC_IECR register */
#define IPC_IECR_IRQ4_Pos                     _UINT32_(4)                                          /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ4_Msk                     (_UINT32_(0x1) << IPC_IECR_IRQ4_Pos)                 /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ4(value)                  (IPC_IECR_IRQ4_Msk & (_UINT32_(value) << IPC_IECR_IRQ4_Pos)) /* Assigment of value for IRQ4 in the IPC_IECR register */
#define IPC_IECR_IRQ5_Pos                     _UINT32_(5)                                          /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ5_Msk                     (_UINT32_(0x1) << IPC_IECR_IRQ5_Pos)                 /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ5(value)                  (IPC_IECR_IRQ5_Msk & (_UINT32_(value) << IPC_IECR_IRQ5_Pos)) /* Assigment of value for IRQ5 in the IPC_IECR register */
#define IPC_IECR_IRQ6_Pos                     _UINT32_(6)                                          /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ6_Msk                     (_UINT32_(0x1) << IPC_IECR_IRQ6_Pos)                 /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ6(value)                  (IPC_IECR_IRQ6_Msk & (_UINT32_(value) << IPC_IECR_IRQ6_Pos)) /* Assigment of value for IRQ6 in the IPC_IECR register */
#define IPC_IECR_IRQ7_Pos                     _UINT32_(7)                                          /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ7_Msk                     (_UINT32_(0x1) << IPC_IECR_IRQ7_Pos)                 /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ7(value)                  (IPC_IECR_IRQ7_Msk & (_UINT32_(value) << IPC_IECR_IRQ7_Pos)) /* Assigment of value for IRQ7 in the IPC_IECR register */
#define IPC_IECR_IRQ8_Pos                     _UINT32_(8)                                          /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ8_Msk                     (_UINT32_(0x1) << IPC_IECR_IRQ8_Pos)                 /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ8(value)                  (IPC_IECR_IRQ8_Msk & (_UINT32_(value) << IPC_IECR_IRQ8_Pos)) /* Assigment of value for IRQ8 in the IPC_IECR register */
#define IPC_IECR_IRQ9_Pos                     _UINT32_(9)                                          /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ9_Msk                     (_UINT32_(0x1) << IPC_IECR_IRQ9_Pos)                 /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ9(value)                  (IPC_IECR_IRQ9_Msk & (_UINT32_(value) << IPC_IECR_IRQ9_Pos)) /* Assigment of value for IRQ9 in the IPC_IECR register */
#define IPC_IECR_IRQ10_Pos                    _UINT32_(10)                                         /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ10_Msk                    (_UINT32_(0x1) << IPC_IECR_IRQ10_Pos)                /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ10(value)                 (IPC_IECR_IRQ10_Msk & (_UINT32_(value) << IPC_IECR_IRQ10_Pos)) /* Assigment of value for IRQ10 in the IPC_IECR register */
#define IPC_IECR_IRQ11_Pos                    _UINT32_(11)                                         /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ11_Msk                    (_UINT32_(0x1) << IPC_IECR_IRQ11_Pos)                /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ11(value)                 (IPC_IECR_IRQ11_Msk & (_UINT32_(value) << IPC_IECR_IRQ11_Pos)) /* Assigment of value for IRQ11 in the IPC_IECR register */
#define IPC_IECR_IRQ12_Pos                    _UINT32_(12)                                         /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ12_Msk                    (_UINT32_(0x1) << IPC_IECR_IRQ12_Pos)                /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ12(value)                 (IPC_IECR_IRQ12_Msk & (_UINT32_(value) << IPC_IECR_IRQ12_Pos)) /* Assigment of value for IRQ12 in the IPC_IECR register */
#define IPC_IECR_IRQ13_Pos                    _UINT32_(13)                                         /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ13_Msk                    (_UINT32_(0x1) << IPC_IECR_IRQ13_Pos)                /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ13(value)                 (IPC_IECR_IRQ13_Msk & (_UINT32_(value) << IPC_IECR_IRQ13_Pos)) /* Assigment of value for IRQ13 in the IPC_IECR register */
#define IPC_IECR_IRQ14_Pos                    _UINT32_(14)                                         /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ14_Msk                    (_UINT32_(0x1) << IPC_IECR_IRQ14_Pos)                /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ14(value)                 (IPC_IECR_IRQ14_Msk & (_UINT32_(value) << IPC_IECR_IRQ14_Pos)) /* Assigment of value for IRQ14 in the IPC_IECR register */
#define IPC_IECR_IRQ15_Pos                    _UINT32_(15)                                         /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ15_Msk                    (_UINT32_(0x1) << IPC_IECR_IRQ15_Pos)                /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ15(value)                 (IPC_IECR_IRQ15_Msk & (_UINT32_(value) << IPC_IECR_IRQ15_Pos)) /* Assigment of value for IRQ15 in the IPC_IECR register */
#define IPC_IECR_IRQ16_Pos                    _UINT32_(16)                                         /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ16_Msk                    (_UINT32_(0x1) << IPC_IECR_IRQ16_Pos)                /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ16(value)                 (IPC_IECR_IRQ16_Msk & (_UINT32_(value) << IPC_IECR_IRQ16_Pos)) /* Assigment of value for IRQ16 in the IPC_IECR register */
#define IPC_IECR_IRQ17_Pos                    _UINT32_(17)                                         /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ17_Msk                    (_UINT32_(0x1) << IPC_IECR_IRQ17_Pos)                /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ17(value)                 (IPC_IECR_IRQ17_Msk & (_UINT32_(value) << IPC_IECR_IRQ17_Pos)) /* Assigment of value for IRQ17 in the IPC_IECR register */
#define IPC_IECR_IRQ18_Pos                    _UINT32_(18)                                         /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ18_Msk                    (_UINT32_(0x1) << IPC_IECR_IRQ18_Pos)                /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ18(value)                 (IPC_IECR_IRQ18_Msk & (_UINT32_(value) << IPC_IECR_IRQ18_Pos)) /* Assigment of value for IRQ18 in the IPC_IECR register */
#define IPC_IECR_IRQ19_Pos                    _UINT32_(19)                                         /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ19_Msk                    (_UINT32_(0x1) << IPC_IECR_IRQ19_Pos)                /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ19(value)                 (IPC_IECR_IRQ19_Msk & (_UINT32_(value) << IPC_IECR_IRQ19_Pos)) /* Assigment of value for IRQ19 in the IPC_IECR register */
#define IPC_IECR_IRQ20_Pos                    _UINT32_(20)                                         /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ20_Msk                    (_UINT32_(0x1) << IPC_IECR_IRQ20_Pos)                /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ20(value)                 (IPC_IECR_IRQ20_Msk & (_UINT32_(value) << IPC_IECR_IRQ20_Pos)) /* Assigment of value for IRQ20 in the IPC_IECR register */
#define IPC_IECR_IRQ21_Pos                    _UINT32_(21)                                         /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ21_Msk                    (_UINT32_(0x1) << IPC_IECR_IRQ21_Pos)                /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ21(value)                 (IPC_IECR_IRQ21_Msk & (_UINT32_(value) << IPC_IECR_IRQ21_Pos)) /* Assigment of value for IRQ21 in the IPC_IECR register */
#define IPC_IECR_IRQ22_Pos                    _UINT32_(22)                                         /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ22_Msk                    (_UINT32_(0x1) << IPC_IECR_IRQ22_Pos)                /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ22(value)                 (IPC_IECR_IRQ22_Msk & (_UINT32_(value) << IPC_IECR_IRQ22_Pos)) /* Assigment of value for IRQ22 in the IPC_IECR register */
#define IPC_IECR_IRQ23_Pos                    _UINT32_(23)                                         /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ23_Msk                    (_UINT32_(0x1) << IPC_IECR_IRQ23_Pos)                /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ23(value)                 (IPC_IECR_IRQ23_Msk & (_UINT32_(value) << IPC_IECR_IRQ23_Pos)) /* Assigment of value for IRQ23 in the IPC_IECR register */
#define IPC_IECR_IRQ24_Pos                    _UINT32_(24)                                         /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ24_Msk                    (_UINT32_(0x1) << IPC_IECR_IRQ24_Pos)                /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ24(value)                 (IPC_IECR_IRQ24_Msk & (_UINT32_(value) << IPC_IECR_IRQ24_Pos)) /* Assigment of value for IRQ24 in the IPC_IECR register */
#define IPC_IECR_IRQ25_Pos                    _UINT32_(25)                                         /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ25_Msk                    (_UINT32_(0x1) << IPC_IECR_IRQ25_Pos)                /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ25(value)                 (IPC_IECR_IRQ25_Msk & (_UINT32_(value) << IPC_IECR_IRQ25_Pos)) /* Assigment of value for IRQ25 in the IPC_IECR register */
#define IPC_IECR_IRQ26_Pos                    _UINT32_(26)                                         /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ26_Msk                    (_UINT32_(0x1) << IPC_IECR_IRQ26_Pos)                /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ26(value)                 (IPC_IECR_IRQ26_Msk & (_UINT32_(value) << IPC_IECR_IRQ26_Pos)) /* Assigment of value for IRQ26 in the IPC_IECR register */
#define IPC_IECR_IRQ27_Pos                    _UINT32_(27)                                         /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ27_Msk                    (_UINT32_(0x1) << IPC_IECR_IRQ27_Pos)                /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ27(value)                 (IPC_IECR_IRQ27_Msk & (_UINT32_(value) << IPC_IECR_IRQ27_Pos)) /* Assigment of value for IRQ27 in the IPC_IECR register */
#define IPC_IECR_IRQ28_Pos                    _UINT32_(28)                                         /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ28_Msk                    (_UINT32_(0x1) << IPC_IECR_IRQ28_Pos)                /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ28(value)                 (IPC_IECR_IRQ28_Msk & (_UINT32_(value) << IPC_IECR_IRQ28_Pos)) /* Assigment of value for IRQ28 in the IPC_IECR register */
#define IPC_IECR_IRQ29_Pos                    _UINT32_(29)                                         /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ29_Msk                    (_UINT32_(0x1) << IPC_IECR_IRQ29_Pos)                /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ29(value)                 (IPC_IECR_IRQ29_Msk & (_UINT32_(value) << IPC_IECR_IRQ29_Pos)) /* Assigment of value for IRQ29 in the IPC_IECR register */
#define IPC_IECR_IRQ30_Pos                    _UINT32_(30)                                         /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ30_Msk                    (_UINT32_(0x1) << IPC_IECR_IRQ30_Pos)                /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ30(value)                 (IPC_IECR_IRQ30_Msk & (_UINT32_(value) << IPC_IECR_IRQ30_Pos)) /* Assigment of value for IRQ30 in the IPC_IECR register */
#define IPC_IECR_IRQ31_Pos                    _UINT32_(31)                                         /* (IPC_IECR) Interrupt Enable Position */
#define IPC_IECR_IRQ31_Msk                    (_UINT32_(0x1) << IPC_IECR_IRQ31_Pos)                /* (IPC_IECR) Interrupt Enable Mask */
#define IPC_IECR_IRQ31(value)                 (IPC_IECR_IRQ31_Msk & (_UINT32_(value) << IPC_IECR_IRQ31_Pos)) /* Assigment of value for IRQ31 in the IPC_IECR register */
#define IPC_IECR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (IPC_IECR) Register Mask  */

#define IPC_IECR_IRQ_Pos                      _UINT32_(0)                                          /* (IPC_IECR Position) Interrupt Enable */
#define IPC_IECR_IRQ_Msk                      (_UINT32_(0xFFFFFFFF) << IPC_IECR_IRQ_Pos)           /* (IPC_IECR Mask) IRQ */
#define IPC_IECR_IRQ(value)                   (IPC_IECR_IRQ_Msk & (_UINT32_(value) << IPC_IECR_IRQ_Pos)) 

/* -------- IPC_IDCR : (IPC Offset: 0x10) ( /W 32) Interrupt Disable Command Register -------- */
#define IPC_IDCR_IRQ0_Pos                     _UINT32_(0)                                          /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ0_Msk                     (_UINT32_(0x1) << IPC_IDCR_IRQ0_Pos)                 /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ0(value)                  (IPC_IDCR_IRQ0_Msk & (_UINT32_(value) << IPC_IDCR_IRQ0_Pos)) /* Assigment of value for IRQ0 in the IPC_IDCR register */
#define IPC_IDCR_IRQ1_Pos                     _UINT32_(1)                                          /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ1_Msk                     (_UINT32_(0x1) << IPC_IDCR_IRQ1_Pos)                 /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ1(value)                  (IPC_IDCR_IRQ1_Msk & (_UINT32_(value) << IPC_IDCR_IRQ1_Pos)) /* Assigment of value for IRQ1 in the IPC_IDCR register */
#define IPC_IDCR_IRQ2_Pos                     _UINT32_(2)                                          /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ2_Msk                     (_UINT32_(0x1) << IPC_IDCR_IRQ2_Pos)                 /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ2(value)                  (IPC_IDCR_IRQ2_Msk & (_UINT32_(value) << IPC_IDCR_IRQ2_Pos)) /* Assigment of value for IRQ2 in the IPC_IDCR register */
#define IPC_IDCR_IRQ3_Pos                     _UINT32_(3)                                          /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ3_Msk                     (_UINT32_(0x1) << IPC_IDCR_IRQ3_Pos)                 /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ3(value)                  (IPC_IDCR_IRQ3_Msk & (_UINT32_(value) << IPC_IDCR_IRQ3_Pos)) /* Assigment of value for IRQ3 in the IPC_IDCR register */
#define IPC_IDCR_IRQ4_Pos                     _UINT32_(4)                                          /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ4_Msk                     (_UINT32_(0x1) << IPC_IDCR_IRQ4_Pos)                 /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ4(value)                  (IPC_IDCR_IRQ4_Msk & (_UINT32_(value) << IPC_IDCR_IRQ4_Pos)) /* Assigment of value for IRQ4 in the IPC_IDCR register */
#define IPC_IDCR_IRQ5_Pos                     _UINT32_(5)                                          /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ5_Msk                     (_UINT32_(0x1) << IPC_IDCR_IRQ5_Pos)                 /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ5(value)                  (IPC_IDCR_IRQ5_Msk & (_UINT32_(value) << IPC_IDCR_IRQ5_Pos)) /* Assigment of value for IRQ5 in the IPC_IDCR register */
#define IPC_IDCR_IRQ6_Pos                     _UINT32_(6)                                          /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ6_Msk                     (_UINT32_(0x1) << IPC_IDCR_IRQ6_Pos)                 /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ6(value)                  (IPC_IDCR_IRQ6_Msk & (_UINT32_(value) << IPC_IDCR_IRQ6_Pos)) /* Assigment of value for IRQ6 in the IPC_IDCR register */
#define IPC_IDCR_IRQ7_Pos                     _UINT32_(7)                                          /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ7_Msk                     (_UINT32_(0x1) << IPC_IDCR_IRQ7_Pos)                 /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ7(value)                  (IPC_IDCR_IRQ7_Msk & (_UINT32_(value) << IPC_IDCR_IRQ7_Pos)) /* Assigment of value for IRQ7 in the IPC_IDCR register */
#define IPC_IDCR_IRQ8_Pos                     _UINT32_(8)                                          /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ8_Msk                     (_UINT32_(0x1) << IPC_IDCR_IRQ8_Pos)                 /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ8(value)                  (IPC_IDCR_IRQ8_Msk & (_UINT32_(value) << IPC_IDCR_IRQ8_Pos)) /* Assigment of value for IRQ8 in the IPC_IDCR register */
#define IPC_IDCR_IRQ9_Pos                     _UINT32_(9)                                          /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ9_Msk                     (_UINT32_(0x1) << IPC_IDCR_IRQ9_Pos)                 /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ9(value)                  (IPC_IDCR_IRQ9_Msk & (_UINT32_(value) << IPC_IDCR_IRQ9_Pos)) /* Assigment of value for IRQ9 in the IPC_IDCR register */
#define IPC_IDCR_IRQ10_Pos                    _UINT32_(10)                                         /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ10_Msk                    (_UINT32_(0x1) << IPC_IDCR_IRQ10_Pos)                /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ10(value)                 (IPC_IDCR_IRQ10_Msk & (_UINT32_(value) << IPC_IDCR_IRQ10_Pos)) /* Assigment of value for IRQ10 in the IPC_IDCR register */
#define IPC_IDCR_IRQ11_Pos                    _UINT32_(11)                                         /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ11_Msk                    (_UINT32_(0x1) << IPC_IDCR_IRQ11_Pos)                /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ11(value)                 (IPC_IDCR_IRQ11_Msk & (_UINT32_(value) << IPC_IDCR_IRQ11_Pos)) /* Assigment of value for IRQ11 in the IPC_IDCR register */
#define IPC_IDCR_IRQ12_Pos                    _UINT32_(12)                                         /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ12_Msk                    (_UINT32_(0x1) << IPC_IDCR_IRQ12_Pos)                /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ12(value)                 (IPC_IDCR_IRQ12_Msk & (_UINT32_(value) << IPC_IDCR_IRQ12_Pos)) /* Assigment of value for IRQ12 in the IPC_IDCR register */
#define IPC_IDCR_IRQ13_Pos                    _UINT32_(13)                                         /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ13_Msk                    (_UINT32_(0x1) << IPC_IDCR_IRQ13_Pos)                /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ13(value)                 (IPC_IDCR_IRQ13_Msk & (_UINT32_(value) << IPC_IDCR_IRQ13_Pos)) /* Assigment of value for IRQ13 in the IPC_IDCR register */
#define IPC_IDCR_IRQ14_Pos                    _UINT32_(14)                                         /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ14_Msk                    (_UINT32_(0x1) << IPC_IDCR_IRQ14_Pos)                /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ14(value)                 (IPC_IDCR_IRQ14_Msk & (_UINT32_(value) << IPC_IDCR_IRQ14_Pos)) /* Assigment of value for IRQ14 in the IPC_IDCR register */
#define IPC_IDCR_IRQ15_Pos                    _UINT32_(15)                                         /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ15_Msk                    (_UINT32_(0x1) << IPC_IDCR_IRQ15_Pos)                /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ15(value)                 (IPC_IDCR_IRQ15_Msk & (_UINT32_(value) << IPC_IDCR_IRQ15_Pos)) /* Assigment of value for IRQ15 in the IPC_IDCR register */
#define IPC_IDCR_IRQ16_Pos                    _UINT32_(16)                                         /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ16_Msk                    (_UINT32_(0x1) << IPC_IDCR_IRQ16_Pos)                /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ16(value)                 (IPC_IDCR_IRQ16_Msk & (_UINT32_(value) << IPC_IDCR_IRQ16_Pos)) /* Assigment of value for IRQ16 in the IPC_IDCR register */
#define IPC_IDCR_IRQ17_Pos                    _UINT32_(17)                                         /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ17_Msk                    (_UINT32_(0x1) << IPC_IDCR_IRQ17_Pos)                /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ17(value)                 (IPC_IDCR_IRQ17_Msk & (_UINT32_(value) << IPC_IDCR_IRQ17_Pos)) /* Assigment of value for IRQ17 in the IPC_IDCR register */
#define IPC_IDCR_IRQ18_Pos                    _UINT32_(18)                                         /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ18_Msk                    (_UINT32_(0x1) << IPC_IDCR_IRQ18_Pos)                /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ18(value)                 (IPC_IDCR_IRQ18_Msk & (_UINT32_(value) << IPC_IDCR_IRQ18_Pos)) /* Assigment of value for IRQ18 in the IPC_IDCR register */
#define IPC_IDCR_IRQ19_Pos                    _UINT32_(19)                                         /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ19_Msk                    (_UINT32_(0x1) << IPC_IDCR_IRQ19_Pos)                /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ19(value)                 (IPC_IDCR_IRQ19_Msk & (_UINT32_(value) << IPC_IDCR_IRQ19_Pos)) /* Assigment of value for IRQ19 in the IPC_IDCR register */
#define IPC_IDCR_IRQ20_Pos                    _UINT32_(20)                                         /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ20_Msk                    (_UINT32_(0x1) << IPC_IDCR_IRQ20_Pos)                /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ20(value)                 (IPC_IDCR_IRQ20_Msk & (_UINT32_(value) << IPC_IDCR_IRQ20_Pos)) /* Assigment of value for IRQ20 in the IPC_IDCR register */
#define IPC_IDCR_IRQ21_Pos                    _UINT32_(21)                                         /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ21_Msk                    (_UINT32_(0x1) << IPC_IDCR_IRQ21_Pos)                /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ21(value)                 (IPC_IDCR_IRQ21_Msk & (_UINT32_(value) << IPC_IDCR_IRQ21_Pos)) /* Assigment of value for IRQ21 in the IPC_IDCR register */
#define IPC_IDCR_IRQ22_Pos                    _UINT32_(22)                                         /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ22_Msk                    (_UINT32_(0x1) << IPC_IDCR_IRQ22_Pos)                /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ22(value)                 (IPC_IDCR_IRQ22_Msk & (_UINT32_(value) << IPC_IDCR_IRQ22_Pos)) /* Assigment of value for IRQ22 in the IPC_IDCR register */
#define IPC_IDCR_IRQ23_Pos                    _UINT32_(23)                                         /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ23_Msk                    (_UINT32_(0x1) << IPC_IDCR_IRQ23_Pos)                /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ23(value)                 (IPC_IDCR_IRQ23_Msk & (_UINT32_(value) << IPC_IDCR_IRQ23_Pos)) /* Assigment of value for IRQ23 in the IPC_IDCR register */
#define IPC_IDCR_IRQ24_Pos                    _UINT32_(24)                                         /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ24_Msk                    (_UINT32_(0x1) << IPC_IDCR_IRQ24_Pos)                /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ24(value)                 (IPC_IDCR_IRQ24_Msk & (_UINT32_(value) << IPC_IDCR_IRQ24_Pos)) /* Assigment of value for IRQ24 in the IPC_IDCR register */
#define IPC_IDCR_IRQ25_Pos                    _UINT32_(25)                                         /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ25_Msk                    (_UINT32_(0x1) << IPC_IDCR_IRQ25_Pos)                /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ25(value)                 (IPC_IDCR_IRQ25_Msk & (_UINT32_(value) << IPC_IDCR_IRQ25_Pos)) /* Assigment of value for IRQ25 in the IPC_IDCR register */
#define IPC_IDCR_IRQ26_Pos                    _UINT32_(26)                                         /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ26_Msk                    (_UINT32_(0x1) << IPC_IDCR_IRQ26_Pos)                /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ26(value)                 (IPC_IDCR_IRQ26_Msk & (_UINT32_(value) << IPC_IDCR_IRQ26_Pos)) /* Assigment of value for IRQ26 in the IPC_IDCR register */
#define IPC_IDCR_IRQ27_Pos                    _UINT32_(27)                                         /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ27_Msk                    (_UINT32_(0x1) << IPC_IDCR_IRQ27_Pos)                /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ27(value)                 (IPC_IDCR_IRQ27_Msk & (_UINT32_(value) << IPC_IDCR_IRQ27_Pos)) /* Assigment of value for IRQ27 in the IPC_IDCR register */
#define IPC_IDCR_IRQ28_Pos                    _UINT32_(28)                                         /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ28_Msk                    (_UINT32_(0x1) << IPC_IDCR_IRQ28_Pos)                /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ28(value)                 (IPC_IDCR_IRQ28_Msk & (_UINT32_(value) << IPC_IDCR_IRQ28_Pos)) /* Assigment of value for IRQ28 in the IPC_IDCR register */
#define IPC_IDCR_IRQ29_Pos                    _UINT32_(29)                                         /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ29_Msk                    (_UINT32_(0x1) << IPC_IDCR_IRQ29_Pos)                /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ29(value)                 (IPC_IDCR_IRQ29_Msk & (_UINT32_(value) << IPC_IDCR_IRQ29_Pos)) /* Assigment of value for IRQ29 in the IPC_IDCR register */
#define IPC_IDCR_IRQ30_Pos                    _UINT32_(30)                                         /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ30_Msk                    (_UINT32_(0x1) << IPC_IDCR_IRQ30_Pos)                /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ30(value)                 (IPC_IDCR_IRQ30_Msk & (_UINT32_(value) << IPC_IDCR_IRQ30_Pos)) /* Assigment of value for IRQ30 in the IPC_IDCR register */
#define IPC_IDCR_IRQ31_Pos                    _UINT32_(31)                                         /* (IPC_IDCR) Interrupt Disable Position */
#define IPC_IDCR_IRQ31_Msk                    (_UINT32_(0x1) << IPC_IDCR_IRQ31_Pos)                /* (IPC_IDCR) Interrupt Disable Mask */
#define IPC_IDCR_IRQ31(value)                 (IPC_IDCR_IRQ31_Msk & (_UINT32_(value) << IPC_IDCR_IRQ31_Pos)) /* Assigment of value for IRQ31 in the IPC_IDCR register */
#define IPC_IDCR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (IPC_IDCR) Register Mask  */

#define IPC_IDCR_IRQ_Pos                      _UINT32_(0)                                          /* (IPC_IDCR Position) Interrupt Disable */
#define IPC_IDCR_IRQ_Msk                      (_UINT32_(0xFFFFFFFF) << IPC_IDCR_IRQ_Pos)           /* (IPC_IDCR Mask) IRQ */
#define IPC_IDCR_IRQ(value)                   (IPC_IDCR_IRQ_Msk & (_UINT32_(value) << IPC_IDCR_IRQ_Pos)) 

/* -------- IPC_IMR : (IPC Offset: 0x14) ( R/ 32) Interrupt Mask Register -------- */
#define IPC_IMR_IRQ0_Pos                      _UINT32_(0)                                          /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ0_Msk                      (_UINT32_(0x1) << IPC_IMR_IRQ0_Pos)                  /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ0(value)                   (IPC_IMR_IRQ0_Msk & (_UINT32_(value) << IPC_IMR_IRQ0_Pos)) /* Assigment of value for IRQ0 in the IPC_IMR register */
#define IPC_IMR_IRQ1_Pos                      _UINT32_(1)                                          /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ1_Msk                      (_UINT32_(0x1) << IPC_IMR_IRQ1_Pos)                  /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ1(value)                   (IPC_IMR_IRQ1_Msk & (_UINT32_(value) << IPC_IMR_IRQ1_Pos)) /* Assigment of value for IRQ1 in the IPC_IMR register */
#define IPC_IMR_IRQ2_Pos                      _UINT32_(2)                                          /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ2_Msk                      (_UINT32_(0x1) << IPC_IMR_IRQ2_Pos)                  /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ2(value)                   (IPC_IMR_IRQ2_Msk & (_UINT32_(value) << IPC_IMR_IRQ2_Pos)) /* Assigment of value for IRQ2 in the IPC_IMR register */
#define IPC_IMR_IRQ3_Pos                      _UINT32_(3)                                          /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ3_Msk                      (_UINT32_(0x1) << IPC_IMR_IRQ3_Pos)                  /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ3(value)                   (IPC_IMR_IRQ3_Msk & (_UINT32_(value) << IPC_IMR_IRQ3_Pos)) /* Assigment of value for IRQ3 in the IPC_IMR register */
#define IPC_IMR_IRQ4_Pos                      _UINT32_(4)                                          /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ4_Msk                      (_UINT32_(0x1) << IPC_IMR_IRQ4_Pos)                  /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ4(value)                   (IPC_IMR_IRQ4_Msk & (_UINT32_(value) << IPC_IMR_IRQ4_Pos)) /* Assigment of value for IRQ4 in the IPC_IMR register */
#define IPC_IMR_IRQ5_Pos                      _UINT32_(5)                                          /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ5_Msk                      (_UINT32_(0x1) << IPC_IMR_IRQ5_Pos)                  /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ5(value)                   (IPC_IMR_IRQ5_Msk & (_UINT32_(value) << IPC_IMR_IRQ5_Pos)) /* Assigment of value for IRQ5 in the IPC_IMR register */
#define IPC_IMR_IRQ6_Pos                      _UINT32_(6)                                          /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ6_Msk                      (_UINT32_(0x1) << IPC_IMR_IRQ6_Pos)                  /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ6(value)                   (IPC_IMR_IRQ6_Msk & (_UINT32_(value) << IPC_IMR_IRQ6_Pos)) /* Assigment of value for IRQ6 in the IPC_IMR register */
#define IPC_IMR_IRQ7_Pos                      _UINT32_(7)                                          /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ7_Msk                      (_UINT32_(0x1) << IPC_IMR_IRQ7_Pos)                  /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ7(value)                   (IPC_IMR_IRQ7_Msk & (_UINT32_(value) << IPC_IMR_IRQ7_Pos)) /* Assigment of value for IRQ7 in the IPC_IMR register */
#define IPC_IMR_IRQ8_Pos                      _UINT32_(8)                                          /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ8_Msk                      (_UINT32_(0x1) << IPC_IMR_IRQ8_Pos)                  /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ8(value)                   (IPC_IMR_IRQ8_Msk & (_UINT32_(value) << IPC_IMR_IRQ8_Pos)) /* Assigment of value for IRQ8 in the IPC_IMR register */
#define IPC_IMR_IRQ9_Pos                      _UINT32_(9)                                          /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ9_Msk                      (_UINT32_(0x1) << IPC_IMR_IRQ9_Pos)                  /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ9(value)                   (IPC_IMR_IRQ9_Msk & (_UINT32_(value) << IPC_IMR_IRQ9_Pos)) /* Assigment of value for IRQ9 in the IPC_IMR register */
#define IPC_IMR_IRQ10_Pos                     _UINT32_(10)                                         /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ10_Msk                     (_UINT32_(0x1) << IPC_IMR_IRQ10_Pos)                 /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ10(value)                  (IPC_IMR_IRQ10_Msk & (_UINT32_(value) << IPC_IMR_IRQ10_Pos)) /* Assigment of value for IRQ10 in the IPC_IMR register */
#define IPC_IMR_IRQ11_Pos                     _UINT32_(11)                                         /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ11_Msk                     (_UINT32_(0x1) << IPC_IMR_IRQ11_Pos)                 /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ11(value)                  (IPC_IMR_IRQ11_Msk & (_UINT32_(value) << IPC_IMR_IRQ11_Pos)) /* Assigment of value for IRQ11 in the IPC_IMR register */
#define IPC_IMR_IRQ12_Pos                     _UINT32_(12)                                         /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ12_Msk                     (_UINT32_(0x1) << IPC_IMR_IRQ12_Pos)                 /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ12(value)                  (IPC_IMR_IRQ12_Msk & (_UINT32_(value) << IPC_IMR_IRQ12_Pos)) /* Assigment of value for IRQ12 in the IPC_IMR register */
#define IPC_IMR_IRQ13_Pos                     _UINT32_(13)                                         /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ13_Msk                     (_UINT32_(0x1) << IPC_IMR_IRQ13_Pos)                 /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ13(value)                  (IPC_IMR_IRQ13_Msk & (_UINT32_(value) << IPC_IMR_IRQ13_Pos)) /* Assigment of value for IRQ13 in the IPC_IMR register */
#define IPC_IMR_IRQ14_Pos                     _UINT32_(14)                                         /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ14_Msk                     (_UINT32_(0x1) << IPC_IMR_IRQ14_Pos)                 /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ14(value)                  (IPC_IMR_IRQ14_Msk & (_UINT32_(value) << IPC_IMR_IRQ14_Pos)) /* Assigment of value for IRQ14 in the IPC_IMR register */
#define IPC_IMR_IRQ15_Pos                     _UINT32_(15)                                         /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ15_Msk                     (_UINT32_(0x1) << IPC_IMR_IRQ15_Pos)                 /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ15(value)                  (IPC_IMR_IRQ15_Msk & (_UINT32_(value) << IPC_IMR_IRQ15_Pos)) /* Assigment of value for IRQ15 in the IPC_IMR register */
#define IPC_IMR_IRQ16_Pos                     _UINT32_(16)                                         /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ16_Msk                     (_UINT32_(0x1) << IPC_IMR_IRQ16_Pos)                 /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ16(value)                  (IPC_IMR_IRQ16_Msk & (_UINT32_(value) << IPC_IMR_IRQ16_Pos)) /* Assigment of value for IRQ16 in the IPC_IMR register */
#define IPC_IMR_IRQ17_Pos                     _UINT32_(17)                                         /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ17_Msk                     (_UINT32_(0x1) << IPC_IMR_IRQ17_Pos)                 /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ17(value)                  (IPC_IMR_IRQ17_Msk & (_UINT32_(value) << IPC_IMR_IRQ17_Pos)) /* Assigment of value for IRQ17 in the IPC_IMR register */
#define IPC_IMR_IRQ18_Pos                     _UINT32_(18)                                         /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ18_Msk                     (_UINT32_(0x1) << IPC_IMR_IRQ18_Pos)                 /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ18(value)                  (IPC_IMR_IRQ18_Msk & (_UINT32_(value) << IPC_IMR_IRQ18_Pos)) /* Assigment of value for IRQ18 in the IPC_IMR register */
#define IPC_IMR_IRQ19_Pos                     _UINT32_(19)                                         /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ19_Msk                     (_UINT32_(0x1) << IPC_IMR_IRQ19_Pos)                 /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ19(value)                  (IPC_IMR_IRQ19_Msk & (_UINT32_(value) << IPC_IMR_IRQ19_Pos)) /* Assigment of value for IRQ19 in the IPC_IMR register */
#define IPC_IMR_IRQ20_Pos                     _UINT32_(20)                                         /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ20_Msk                     (_UINT32_(0x1) << IPC_IMR_IRQ20_Pos)                 /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ20(value)                  (IPC_IMR_IRQ20_Msk & (_UINT32_(value) << IPC_IMR_IRQ20_Pos)) /* Assigment of value for IRQ20 in the IPC_IMR register */
#define IPC_IMR_IRQ21_Pos                     _UINT32_(21)                                         /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ21_Msk                     (_UINT32_(0x1) << IPC_IMR_IRQ21_Pos)                 /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ21(value)                  (IPC_IMR_IRQ21_Msk & (_UINT32_(value) << IPC_IMR_IRQ21_Pos)) /* Assigment of value for IRQ21 in the IPC_IMR register */
#define IPC_IMR_IRQ22_Pos                     _UINT32_(22)                                         /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ22_Msk                     (_UINT32_(0x1) << IPC_IMR_IRQ22_Pos)                 /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ22(value)                  (IPC_IMR_IRQ22_Msk & (_UINT32_(value) << IPC_IMR_IRQ22_Pos)) /* Assigment of value for IRQ22 in the IPC_IMR register */
#define IPC_IMR_IRQ23_Pos                     _UINT32_(23)                                         /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ23_Msk                     (_UINT32_(0x1) << IPC_IMR_IRQ23_Pos)                 /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ23(value)                  (IPC_IMR_IRQ23_Msk & (_UINT32_(value) << IPC_IMR_IRQ23_Pos)) /* Assigment of value for IRQ23 in the IPC_IMR register */
#define IPC_IMR_IRQ24_Pos                     _UINT32_(24)                                         /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ24_Msk                     (_UINT32_(0x1) << IPC_IMR_IRQ24_Pos)                 /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ24(value)                  (IPC_IMR_IRQ24_Msk & (_UINT32_(value) << IPC_IMR_IRQ24_Pos)) /* Assigment of value for IRQ24 in the IPC_IMR register */
#define IPC_IMR_IRQ25_Pos                     _UINT32_(25)                                         /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ25_Msk                     (_UINT32_(0x1) << IPC_IMR_IRQ25_Pos)                 /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ25(value)                  (IPC_IMR_IRQ25_Msk & (_UINT32_(value) << IPC_IMR_IRQ25_Pos)) /* Assigment of value for IRQ25 in the IPC_IMR register */
#define IPC_IMR_IRQ26_Pos                     _UINT32_(26)                                         /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ26_Msk                     (_UINT32_(0x1) << IPC_IMR_IRQ26_Pos)                 /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ26(value)                  (IPC_IMR_IRQ26_Msk & (_UINT32_(value) << IPC_IMR_IRQ26_Pos)) /* Assigment of value for IRQ26 in the IPC_IMR register */
#define IPC_IMR_IRQ27_Pos                     _UINT32_(27)                                         /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ27_Msk                     (_UINT32_(0x1) << IPC_IMR_IRQ27_Pos)                 /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ27(value)                  (IPC_IMR_IRQ27_Msk & (_UINT32_(value) << IPC_IMR_IRQ27_Pos)) /* Assigment of value for IRQ27 in the IPC_IMR register */
#define IPC_IMR_IRQ28_Pos                     _UINT32_(28)                                         /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ28_Msk                     (_UINT32_(0x1) << IPC_IMR_IRQ28_Pos)                 /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ28(value)                  (IPC_IMR_IRQ28_Msk & (_UINT32_(value) << IPC_IMR_IRQ28_Pos)) /* Assigment of value for IRQ28 in the IPC_IMR register */
#define IPC_IMR_IRQ29_Pos                     _UINT32_(29)                                         /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ29_Msk                     (_UINT32_(0x1) << IPC_IMR_IRQ29_Pos)                 /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ29(value)                  (IPC_IMR_IRQ29_Msk & (_UINT32_(value) << IPC_IMR_IRQ29_Pos)) /* Assigment of value for IRQ29 in the IPC_IMR register */
#define IPC_IMR_IRQ30_Pos                     _UINT32_(30)                                         /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ30_Msk                     (_UINT32_(0x1) << IPC_IMR_IRQ30_Pos)                 /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ30(value)                  (IPC_IMR_IRQ30_Msk & (_UINT32_(value) << IPC_IMR_IRQ30_Pos)) /* Assigment of value for IRQ30 in the IPC_IMR register */
#define IPC_IMR_IRQ31_Pos                     _UINT32_(31)                                         /* (IPC_IMR) Interrupt Mask Position */
#define IPC_IMR_IRQ31_Msk                     (_UINT32_(0x1) << IPC_IMR_IRQ31_Pos)                 /* (IPC_IMR) Interrupt Mask Mask */
#define IPC_IMR_IRQ31(value)                  (IPC_IMR_IRQ31_Msk & (_UINT32_(value) << IPC_IMR_IRQ31_Pos)) /* Assigment of value for IRQ31 in the IPC_IMR register */
#define IPC_IMR_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (IPC_IMR) Register Mask  */

#define IPC_IMR_IRQ_Pos                       _UINT32_(0)                                          /* (IPC_IMR Position) Interrupt Mask */
#define IPC_IMR_IRQ_Msk                       (_UINT32_(0xFFFFFFFF) << IPC_IMR_IRQ_Pos)            /* (IPC_IMR Mask) IRQ */
#define IPC_IMR_IRQ(value)                    (IPC_IMR_IRQ_Msk & (_UINT32_(value) << IPC_IMR_IRQ_Pos)) 

/* -------- IPC_ISR : (IPC Offset: 0x18) ( R/ 32) Interrupt Status Register -------- */
#define IPC_ISR_IRQ0_Pos                      _UINT32_(0)                                          /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ0_Msk                      (_UINT32_(0x1) << IPC_ISR_IRQ0_Pos)                  /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ0(value)                   (IPC_ISR_IRQ0_Msk & (_UINT32_(value) << IPC_ISR_IRQ0_Pos)) /* Assigment of value for IRQ0 in the IPC_ISR register */
#define IPC_ISR_IRQ1_Pos                      _UINT32_(1)                                          /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ1_Msk                      (_UINT32_(0x1) << IPC_ISR_IRQ1_Pos)                  /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ1(value)                   (IPC_ISR_IRQ1_Msk & (_UINT32_(value) << IPC_ISR_IRQ1_Pos)) /* Assigment of value for IRQ1 in the IPC_ISR register */
#define IPC_ISR_IRQ2_Pos                      _UINT32_(2)                                          /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ2_Msk                      (_UINT32_(0x1) << IPC_ISR_IRQ2_Pos)                  /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ2(value)                   (IPC_ISR_IRQ2_Msk & (_UINT32_(value) << IPC_ISR_IRQ2_Pos)) /* Assigment of value for IRQ2 in the IPC_ISR register */
#define IPC_ISR_IRQ3_Pos                      _UINT32_(3)                                          /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ3_Msk                      (_UINT32_(0x1) << IPC_ISR_IRQ3_Pos)                  /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ3(value)                   (IPC_ISR_IRQ3_Msk & (_UINT32_(value) << IPC_ISR_IRQ3_Pos)) /* Assigment of value for IRQ3 in the IPC_ISR register */
#define IPC_ISR_IRQ4_Pos                      _UINT32_(4)                                          /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ4_Msk                      (_UINT32_(0x1) << IPC_ISR_IRQ4_Pos)                  /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ4(value)                   (IPC_ISR_IRQ4_Msk & (_UINT32_(value) << IPC_ISR_IRQ4_Pos)) /* Assigment of value for IRQ4 in the IPC_ISR register */
#define IPC_ISR_IRQ5_Pos                      _UINT32_(5)                                          /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ5_Msk                      (_UINT32_(0x1) << IPC_ISR_IRQ5_Pos)                  /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ5(value)                   (IPC_ISR_IRQ5_Msk & (_UINT32_(value) << IPC_ISR_IRQ5_Pos)) /* Assigment of value for IRQ5 in the IPC_ISR register */
#define IPC_ISR_IRQ6_Pos                      _UINT32_(6)                                          /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ6_Msk                      (_UINT32_(0x1) << IPC_ISR_IRQ6_Pos)                  /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ6(value)                   (IPC_ISR_IRQ6_Msk & (_UINT32_(value) << IPC_ISR_IRQ6_Pos)) /* Assigment of value for IRQ6 in the IPC_ISR register */
#define IPC_ISR_IRQ7_Pos                      _UINT32_(7)                                          /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ7_Msk                      (_UINT32_(0x1) << IPC_ISR_IRQ7_Pos)                  /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ7(value)                   (IPC_ISR_IRQ7_Msk & (_UINT32_(value) << IPC_ISR_IRQ7_Pos)) /* Assigment of value for IRQ7 in the IPC_ISR register */
#define IPC_ISR_IRQ8_Pos                      _UINT32_(8)                                          /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ8_Msk                      (_UINT32_(0x1) << IPC_ISR_IRQ8_Pos)                  /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ8(value)                   (IPC_ISR_IRQ8_Msk & (_UINT32_(value) << IPC_ISR_IRQ8_Pos)) /* Assigment of value for IRQ8 in the IPC_ISR register */
#define IPC_ISR_IRQ9_Pos                      _UINT32_(9)                                          /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ9_Msk                      (_UINT32_(0x1) << IPC_ISR_IRQ9_Pos)                  /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ9(value)                   (IPC_ISR_IRQ9_Msk & (_UINT32_(value) << IPC_ISR_IRQ9_Pos)) /* Assigment of value for IRQ9 in the IPC_ISR register */
#define IPC_ISR_IRQ10_Pos                     _UINT32_(10)                                         /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ10_Msk                     (_UINT32_(0x1) << IPC_ISR_IRQ10_Pos)                 /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ10(value)                  (IPC_ISR_IRQ10_Msk & (_UINT32_(value) << IPC_ISR_IRQ10_Pos)) /* Assigment of value for IRQ10 in the IPC_ISR register */
#define IPC_ISR_IRQ11_Pos                     _UINT32_(11)                                         /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ11_Msk                     (_UINT32_(0x1) << IPC_ISR_IRQ11_Pos)                 /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ11(value)                  (IPC_ISR_IRQ11_Msk & (_UINT32_(value) << IPC_ISR_IRQ11_Pos)) /* Assigment of value for IRQ11 in the IPC_ISR register */
#define IPC_ISR_IRQ12_Pos                     _UINT32_(12)                                         /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ12_Msk                     (_UINT32_(0x1) << IPC_ISR_IRQ12_Pos)                 /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ12(value)                  (IPC_ISR_IRQ12_Msk & (_UINT32_(value) << IPC_ISR_IRQ12_Pos)) /* Assigment of value for IRQ12 in the IPC_ISR register */
#define IPC_ISR_IRQ13_Pos                     _UINT32_(13)                                         /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ13_Msk                     (_UINT32_(0x1) << IPC_ISR_IRQ13_Pos)                 /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ13(value)                  (IPC_ISR_IRQ13_Msk & (_UINT32_(value) << IPC_ISR_IRQ13_Pos)) /* Assigment of value for IRQ13 in the IPC_ISR register */
#define IPC_ISR_IRQ14_Pos                     _UINT32_(14)                                         /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ14_Msk                     (_UINT32_(0x1) << IPC_ISR_IRQ14_Pos)                 /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ14(value)                  (IPC_ISR_IRQ14_Msk & (_UINT32_(value) << IPC_ISR_IRQ14_Pos)) /* Assigment of value for IRQ14 in the IPC_ISR register */
#define IPC_ISR_IRQ15_Pos                     _UINT32_(15)                                         /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ15_Msk                     (_UINT32_(0x1) << IPC_ISR_IRQ15_Pos)                 /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ15(value)                  (IPC_ISR_IRQ15_Msk & (_UINT32_(value) << IPC_ISR_IRQ15_Pos)) /* Assigment of value for IRQ15 in the IPC_ISR register */
#define IPC_ISR_IRQ16_Pos                     _UINT32_(16)                                         /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ16_Msk                     (_UINT32_(0x1) << IPC_ISR_IRQ16_Pos)                 /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ16(value)                  (IPC_ISR_IRQ16_Msk & (_UINT32_(value) << IPC_ISR_IRQ16_Pos)) /* Assigment of value for IRQ16 in the IPC_ISR register */
#define IPC_ISR_IRQ17_Pos                     _UINT32_(17)                                         /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ17_Msk                     (_UINT32_(0x1) << IPC_ISR_IRQ17_Pos)                 /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ17(value)                  (IPC_ISR_IRQ17_Msk & (_UINT32_(value) << IPC_ISR_IRQ17_Pos)) /* Assigment of value for IRQ17 in the IPC_ISR register */
#define IPC_ISR_IRQ18_Pos                     _UINT32_(18)                                         /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ18_Msk                     (_UINT32_(0x1) << IPC_ISR_IRQ18_Pos)                 /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ18(value)                  (IPC_ISR_IRQ18_Msk & (_UINT32_(value) << IPC_ISR_IRQ18_Pos)) /* Assigment of value for IRQ18 in the IPC_ISR register */
#define IPC_ISR_IRQ19_Pos                     _UINT32_(19)                                         /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ19_Msk                     (_UINT32_(0x1) << IPC_ISR_IRQ19_Pos)                 /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ19(value)                  (IPC_ISR_IRQ19_Msk & (_UINT32_(value) << IPC_ISR_IRQ19_Pos)) /* Assigment of value for IRQ19 in the IPC_ISR register */
#define IPC_ISR_IRQ20_Pos                     _UINT32_(20)                                         /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ20_Msk                     (_UINT32_(0x1) << IPC_ISR_IRQ20_Pos)                 /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ20(value)                  (IPC_ISR_IRQ20_Msk & (_UINT32_(value) << IPC_ISR_IRQ20_Pos)) /* Assigment of value for IRQ20 in the IPC_ISR register */
#define IPC_ISR_IRQ21_Pos                     _UINT32_(21)                                         /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ21_Msk                     (_UINT32_(0x1) << IPC_ISR_IRQ21_Pos)                 /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ21(value)                  (IPC_ISR_IRQ21_Msk & (_UINT32_(value) << IPC_ISR_IRQ21_Pos)) /* Assigment of value for IRQ21 in the IPC_ISR register */
#define IPC_ISR_IRQ22_Pos                     _UINT32_(22)                                         /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ22_Msk                     (_UINT32_(0x1) << IPC_ISR_IRQ22_Pos)                 /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ22(value)                  (IPC_ISR_IRQ22_Msk & (_UINT32_(value) << IPC_ISR_IRQ22_Pos)) /* Assigment of value for IRQ22 in the IPC_ISR register */
#define IPC_ISR_IRQ23_Pos                     _UINT32_(23)                                         /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ23_Msk                     (_UINT32_(0x1) << IPC_ISR_IRQ23_Pos)                 /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ23(value)                  (IPC_ISR_IRQ23_Msk & (_UINT32_(value) << IPC_ISR_IRQ23_Pos)) /* Assigment of value for IRQ23 in the IPC_ISR register */
#define IPC_ISR_IRQ24_Pos                     _UINT32_(24)                                         /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ24_Msk                     (_UINT32_(0x1) << IPC_ISR_IRQ24_Pos)                 /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ24(value)                  (IPC_ISR_IRQ24_Msk & (_UINT32_(value) << IPC_ISR_IRQ24_Pos)) /* Assigment of value for IRQ24 in the IPC_ISR register */
#define IPC_ISR_IRQ25_Pos                     _UINT32_(25)                                         /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ25_Msk                     (_UINT32_(0x1) << IPC_ISR_IRQ25_Pos)                 /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ25(value)                  (IPC_ISR_IRQ25_Msk & (_UINT32_(value) << IPC_ISR_IRQ25_Pos)) /* Assigment of value for IRQ25 in the IPC_ISR register */
#define IPC_ISR_IRQ26_Pos                     _UINT32_(26)                                         /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ26_Msk                     (_UINT32_(0x1) << IPC_ISR_IRQ26_Pos)                 /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ26(value)                  (IPC_ISR_IRQ26_Msk & (_UINT32_(value) << IPC_ISR_IRQ26_Pos)) /* Assigment of value for IRQ26 in the IPC_ISR register */
#define IPC_ISR_IRQ27_Pos                     _UINT32_(27)                                         /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ27_Msk                     (_UINT32_(0x1) << IPC_ISR_IRQ27_Pos)                 /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ27(value)                  (IPC_ISR_IRQ27_Msk & (_UINT32_(value) << IPC_ISR_IRQ27_Pos)) /* Assigment of value for IRQ27 in the IPC_ISR register */
#define IPC_ISR_IRQ28_Pos                     _UINT32_(28)                                         /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ28_Msk                     (_UINT32_(0x1) << IPC_ISR_IRQ28_Pos)                 /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ28(value)                  (IPC_ISR_IRQ28_Msk & (_UINT32_(value) << IPC_ISR_IRQ28_Pos)) /* Assigment of value for IRQ28 in the IPC_ISR register */
#define IPC_ISR_IRQ29_Pos                     _UINT32_(29)                                         /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ29_Msk                     (_UINT32_(0x1) << IPC_ISR_IRQ29_Pos)                 /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ29(value)                  (IPC_ISR_IRQ29_Msk & (_UINT32_(value) << IPC_ISR_IRQ29_Pos)) /* Assigment of value for IRQ29 in the IPC_ISR register */
#define IPC_ISR_IRQ30_Pos                     _UINT32_(30)                                         /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ30_Msk                     (_UINT32_(0x1) << IPC_ISR_IRQ30_Pos)                 /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ30(value)                  (IPC_ISR_IRQ30_Msk & (_UINT32_(value) << IPC_ISR_IRQ30_Pos)) /* Assigment of value for IRQ30 in the IPC_ISR register */
#define IPC_ISR_IRQ31_Pos                     _UINT32_(31)                                         /* (IPC_ISR) Current Interrupt Identifier Position */
#define IPC_ISR_IRQ31_Msk                     (_UINT32_(0x1) << IPC_ISR_IRQ31_Pos)                 /* (IPC_ISR) Current Interrupt Identifier Mask */
#define IPC_ISR_IRQ31(value)                  (IPC_ISR_IRQ31_Msk & (_UINT32_(value) << IPC_ISR_IRQ31_Pos)) /* Assigment of value for IRQ31 in the IPC_ISR register */
#define IPC_ISR_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (IPC_ISR) Register Mask  */

#define IPC_ISR_IRQ_Pos                       _UINT32_(0)                                          /* (IPC_ISR Position) Current Interrupt Identifier */
#define IPC_ISR_IRQ_Msk                       (_UINT32_(0xFFFFFFFF) << IPC_ISR_IRQ_Pos)            /* (IPC_ISR Mask) IRQ */
#define IPC_ISR_IRQ(value)                    (IPC_ISR_IRQ_Msk & (_UINT32_(value) << IPC_ISR_IRQ_Pos)) 

/* -------- IPC_WPMR : (IPC Offset: 0x1C) (R/W 32) Write Protection Mode Register -------- */
#define IPC_WPMR_WPITEN_Pos                   _UINT32_(1)                                          /* (IPC_WPMR) Write Protection Interrupt Enable Position */
#define IPC_WPMR_WPITEN_Msk                   (_UINT32_(0x1) << IPC_WPMR_WPITEN_Pos)               /* (IPC_WPMR) Write Protection Interrupt Enable Mask */
#define IPC_WPMR_WPITEN(value)                (IPC_WPMR_WPITEN_Msk & (_UINT32_(value) << IPC_WPMR_WPITEN_Pos)) /* Assigment of value for WPITEN in the IPC_WPMR register */
#define IPC_WPMR_WPKEY_Pos                    _UINT32_(8)                                          /* (IPC_WPMR) Write Protection Key Position */
#define IPC_WPMR_WPKEY_Msk                    (_UINT32_(0xFFFFFF) << IPC_WPMR_WPKEY_Pos)           /* (IPC_WPMR) Write Protection Key Mask */
#define IPC_WPMR_WPKEY(value)                 (IPC_WPMR_WPKEY_Msk & (_UINT32_(value) << IPC_WPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the IPC_WPMR register */
#define   IPC_WPMR_WPKEY_PASSWD_Val           _UINT32_(0x495043)                                   /* (IPC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0.  */
#define IPC_WPMR_WPKEY_PASSWD                 (IPC_WPMR_WPKEY_PASSWD_Val << IPC_WPMR_WPKEY_Pos)    /* (IPC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0. Position  */
#define IPC_WPMR_Msk                          _UINT32_(0xFFFFFF02)                                 /* (IPC_WPMR) Register Mask  */


/** \brief IPC register offsets definitions */
#define IPC_ISCR_REG_OFST              _UINT32_(0x00)      /* (IPC_ISCR) Interrupt Set Command Register Offset */
#define IPC_ICCR_REG_OFST              _UINT32_(0x04)      /* (IPC_ICCR) Interrupt Clear Command Register Offset */
#define IPC_IPR_REG_OFST               _UINT32_(0x08)      /* (IPC_IPR) Interrupt Pending Register Offset */
#define IPC_IECR_REG_OFST              _UINT32_(0x0C)      /* (IPC_IECR) Interrupt Enable Command Register Offset */
#define IPC_IDCR_REG_OFST              _UINT32_(0x10)      /* (IPC_IDCR) Interrupt Disable Command Register Offset */
#define IPC_IMR_REG_OFST               _UINT32_(0x14)      /* (IPC_IMR) Interrupt Mask Register Offset */
#define IPC_ISR_REG_OFST               _UINT32_(0x18)      /* (IPC_ISR) Interrupt Status Register Offset */
#define IPC_WPMR_REG_OFST              _UINT32_(0x1C)      /* (IPC_WPMR) Write Protection Mode Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief IPC register API structure */
typedef struct
{
  __O   uint32_t                       IPC_ISCR;           /**< Offset: 0x00 ( /W  32) Interrupt Set Command Register */
  __O   uint32_t                       IPC_ICCR;           /**< Offset: 0x04 ( /W  32) Interrupt Clear Command Register */
  __I   uint32_t                       IPC_IPR;            /**< Offset: 0x08 (R/   32) Interrupt Pending Register */
  __O   uint32_t                       IPC_IECR;           /**< Offset: 0x0C ( /W  32) Interrupt Enable Command Register */
  __O   uint32_t                       IPC_IDCR;           /**< Offset: 0x10 ( /W  32) Interrupt Disable Command Register */
  __I   uint32_t                       IPC_IMR;            /**< Offset: 0x14 (R/   32) Interrupt Mask Register */
  __I   uint32_t                       IPC_ISR;            /**< Offset: 0x18 (R/   32) Interrupt Status Register */
  __IO  uint32_t                       IPC_WPMR;           /**< Offset: 0x1C (R/W  32) Write Protection Mode Register */
} ipc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CXMTSH_IPC_COMPONENT_H_ */
