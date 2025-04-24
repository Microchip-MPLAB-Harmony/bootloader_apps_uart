/*
 * Component description for QEI
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
#ifndef _PIC32WM_BZ6_QEI_COMPONENT_H_
#define _PIC32WM_BZ6_QEI_COMPONENT_H_

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR QEI                       */
/* ************************************************************************** */

/* -------- QEI_QEICON : (QEI Offset: 0x00) (R/W 32) QEI Control Register -------- */
#define QEI_QEICON_CCM_Pos                    _UINT32_(0)                                          /* (QEI_QEICON) Counter Control Mode Selection bits Position */
#define QEI_QEICON_CCM_Msk                    (_UINT32_(0x3) << QEI_QEICON_CCM_Pos)                /* (QEI_QEICON) Counter Control Mode Selection bits Mask */
#define QEI_QEICON_CCM(value)                 (QEI_QEICON_CCM_Msk & (_UINT32_(value) << QEI_QEICON_CCM_Pos)) /* Assignment of value for CCM in the QEI_QEICON register */
#define   QEI_QEICON_CCM_INT_TMR_EXT_COUNT_Val _UINT32_(0x3)                                        /* (QEI_QEICON) Internal timer mode with optional external count enable  */
#define   QEI_QEICON_CCM_EXT_CLOCK_EXT_COUNT_Val _UINT32_(0x2)                                        /* (QEI_QEICON) External clock count with optional external count gating  */
#define   QEI_QEICON_CCM_EXT_CLK_EXT_UPDN_Val _UINT32_(0x1)                                        /* (QEI_QEICON) External clock count with external Up/Dn direction selection  */
#define   QEI_QEICON_CCM_COUNT_MODE_Val       _UINT32_(0x0)                                        /* (QEI_QEICON) Quadrature Encoder Interface Count mode (x4 mode)  */
#define QEI_QEICON_CCM_INT_TMR_EXT_COUNT      (QEI_QEICON_CCM_INT_TMR_EXT_COUNT_Val << QEI_QEICON_CCM_Pos) /* (QEI_QEICON) Internal timer mode with optional external count enable Position */
#define QEI_QEICON_CCM_EXT_CLOCK_EXT_COUNT    (QEI_QEICON_CCM_EXT_CLOCK_EXT_COUNT_Val << QEI_QEICON_CCM_Pos) /* (QEI_QEICON) External clock count with optional external count gating Position */
#define QEI_QEICON_CCM_EXT_CLK_EXT_UPDN       (QEI_QEICON_CCM_EXT_CLK_EXT_UPDN_Val << QEI_QEICON_CCM_Pos) /* (QEI_QEICON) External clock count with external Up/Dn direction selection Position */
#define QEI_QEICON_CCM_COUNT_MODE             (QEI_QEICON_CCM_COUNT_MODE_Val << QEI_QEICON_CCM_Pos) /* (QEI_QEICON) Quadrature Encoder Interface Count mode (x4 mode) Position */
#define QEI_QEICON_GATEN_Pos                  _UINT32_(2)                                          /* (QEI_QEICON) External Count Gate Enable bit Position */
#define QEI_QEICON_GATEN_Msk                  (_UINT32_(0x1) << QEI_QEICON_GATEN_Pos)              /* (QEI_QEICON) External Count Gate Enable bit Mask */
#define QEI_QEICON_GATEN(value)               (QEI_QEICON_GATEN_Msk & (_UINT32_(value) << QEI_QEICON_GATEN_Pos)) /* Assignment of value for GATEN in the QEI_QEICON register */
#define   QEI_QEICON_GATEN_ON_Val             _UINT32_(0x1)                                        /* (QEI_QEICON) External gate signal controls position counter operation  */
#define   QEI_QEICON_GATEN_OFF_Val            _UINT32_(0x0)                                        /* (QEI_QEICON) External gate signal has no affect on position counter/timer operation  */
#define QEI_QEICON_GATEN_ON                   (QEI_QEICON_GATEN_ON_Val << QEI_QEICON_GATEN_Pos)    /* (QEI_QEICON) External gate signal controls position counter operation Position */
#define QEI_QEICON_GATEN_OFF                  (QEI_QEICON_GATEN_OFF_Val << QEI_QEICON_GATEN_Pos)   /* (QEI_QEICON) External gate signal has no affect on position counter/timer operation Position */
#define QEI_QEICON_CNTPOL_Pos                 _UINT32_(3)                                          /* (QEI_QEICON) Position and Index Counter/Timer Direction Select bit Position */
#define QEI_QEICON_CNTPOL_Msk                 (_UINT32_(0x1) << QEI_QEICON_CNTPOL_Pos)             /* (QEI_QEICON) Position and Index Counter/Timer Direction Select bit Mask */
#define QEI_QEICON_CNTPOL(value)              (QEI_QEICON_CNTPOL_Msk & (_UINT32_(value) << QEI_QEICON_CNTPOL_Pos)) /* Assignment of value for CNTPOL in the QEI_QEICON register */
#define   QEI_QEICON_CNTPOL_NEG_Val           _UINT32_(0x1)                                        /* (QEI_QEICON) Counter direction is negative unless modified by external Up/Down signal  */
#define   QEI_QEICON_CNTPOL_POS_Val           _UINT32_(0x0)                                        /* (QEI_QEICON) Counter direction is positive unless modified by external Up/Down signal  */
#define QEI_QEICON_CNTPOL_NEG                 (QEI_QEICON_CNTPOL_NEG_Val << QEI_QEICON_CNTPOL_Pos) /* (QEI_QEICON) Counter direction is negative unless modified by external Up/Down signal Position */
#define QEI_QEICON_CNTPOL_POS                 (QEI_QEICON_CNTPOL_POS_Val << QEI_QEICON_CNTPOL_Pos) /* (QEI_QEICON) Counter direction is positive unless modified by external Up/Down signal Position */
#define QEI_QEICON_INTDIV_Pos                 _UINT32_(4)                                          /* (QEI_QEICON) Timer Input Clock Prescale Select bits  Position */
#define QEI_QEICON_INTDIV_Msk                 (_UINT32_(0x7) << QEI_QEICON_INTDIV_Pos)             /* (QEI_QEICON) Timer Input Clock Prescale Select bits  Mask */
#define QEI_QEICON_INTDIV(value)              (QEI_QEICON_INTDIV_Msk & (_UINT32_(value) << QEI_QEICON_INTDIV_Pos)) /* Assignment of value for INTDIV in the QEI_QEICON register */
#define   QEI_QEICON_INTDIV_1_128_Val         _UINT32_(0x7)                                        /* (QEI_QEICON) 1:128 prescale value  */
#define   QEI_QEICON_INTDIV_1_64_Val          _UINT32_(0x6)                                        /* (QEI_QEICON) 1:64 prescale value  */
#define   QEI_QEICON_INTDIV_1_32_Val          _UINT32_(0x5)                                        /* (QEI_QEICON) 1:32 prescale value  */
#define   QEI_QEICON_INTDIV_1_16_Val          _UINT32_(0x4)                                        /* (QEI_QEICON) 1:16 prescale value  */
#define   QEI_QEICON_INTDIV_1_8_Val           _UINT32_(0x3)                                        /* (QEI_QEICON) 1:8 prescale value  */
#define   QEI_QEICON_INTDIV_1_4_Val           _UINT32_(0x2)                                        /* (QEI_QEICON) 1:4 prescale value  */
#define   QEI_QEICON_INTDIV_1_2_Val           _UINT32_(0x1)                                        /* (QEI_QEICON) 1:2 prescale value  */
#define   QEI_QEICON_INTDIV_1_1_Val           _UINT32_(0x0)                                        /* (QEI_QEICON) 1:1 prescale value  */
#define QEI_QEICON_INTDIV_1_128               (QEI_QEICON_INTDIV_1_128_Val << QEI_QEICON_INTDIV_Pos) /* (QEI_QEICON) 1:128 prescale value Position */
#define QEI_QEICON_INTDIV_1_64                (QEI_QEICON_INTDIV_1_64_Val << QEI_QEICON_INTDIV_Pos) /* (QEI_QEICON) 1:64 prescale value Position */
#define QEI_QEICON_INTDIV_1_32                (QEI_QEICON_INTDIV_1_32_Val << QEI_QEICON_INTDIV_Pos) /* (QEI_QEICON) 1:32 prescale value Position */
#define QEI_QEICON_INTDIV_1_16                (QEI_QEICON_INTDIV_1_16_Val << QEI_QEICON_INTDIV_Pos) /* (QEI_QEICON) 1:16 prescale value Position */
#define QEI_QEICON_INTDIV_1_8                 (QEI_QEICON_INTDIV_1_8_Val << QEI_QEICON_INTDIV_Pos) /* (QEI_QEICON) 1:8 prescale value Position */
#define QEI_QEICON_INTDIV_1_4                 (QEI_QEICON_INTDIV_1_4_Val << QEI_QEICON_INTDIV_Pos) /* (QEI_QEICON) 1:4 prescale value Position */
#define QEI_QEICON_INTDIV_1_2                 (QEI_QEICON_INTDIV_1_2_Val << QEI_QEICON_INTDIV_Pos) /* (QEI_QEICON) 1:2 prescale value Position */
#define QEI_QEICON_INTDIV_1_1                 (QEI_QEICON_INTDIV_1_1_Val << QEI_QEICON_INTDIV_Pos) /* (QEI_QEICON) 1:1 prescale value Position */
#define QEI_QEICON_IMV_Pos                    _UINT32_(8)                                          /* (QEI_QEICON) Index Match Value bits Position */
#define QEI_QEICON_IMV_Msk                    (_UINT32_(0x3) << QEI_QEICON_IMV_Pos)                /* (QEI_QEICON) Index Match Value bits Mask */
#define QEI_QEICON_IMV(value)                 (QEI_QEICON_IMV_Msk & (_UINT32_(value) << QEI_QEICON_IMV_Pos)) /* Assignment of value for IMV in the QEI_QEICON register */
#define   QEI_QEICON_IMV_B1_A1_Val            _UINT32_(0x3)                                        /* (QEI_QEICON) Index match occurs when QEB is 1 and QEA is 1  */
#define   QEI_QEICON_IMV_B1_A0_Val            _UINT32_(0x2)                                        /* (QEI_QEICON) Index match occurs when QEB is 1 and QEA is 0  */
#define   QEI_QEICON_IMV_B0_A1_Val            _UINT32_(0x1)                                        /* (QEI_QEICON) Index match occurs when QEB is 0 and QEA is 1  */
#define   QEI_QEICON_IMV_B0_A0_Val            _UINT32_(0x0)                                        /* (QEI_QEICON) Index match occurs when QEB is 0 and QEA is 0  */
#define QEI_QEICON_IMV_B1_A1                  (QEI_QEICON_IMV_B1_A1_Val << QEI_QEICON_IMV_Pos)     /* (QEI_QEICON) Index match occurs when QEB is 1 and QEA is 1 Position */
#define QEI_QEICON_IMV_B1_A0                  (QEI_QEICON_IMV_B1_A0_Val << QEI_QEICON_IMV_Pos)     /* (QEI_QEICON) Index match occurs when QEB is 1 and QEA is 0 Position */
#define QEI_QEICON_IMV_B0_A1                  (QEI_QEICON_IMV_B0_A1_Val << QEI_QEICON_IMV_Pos)     /* (QEI_QEICON) Index match occurs when QEB is 0 and QEA is 1 Position */
#define QEI_QEICON_IMV_B0_A0                  (QEI_QEICON_IMV_B0_A0_Val << QEI_QEICON_IMV_Pos)     /* (QEI_QEICON) Index match occurs when QEB is 0 and QEA is 0 Position */
#define QEI_QEICON_PIMOD_Pos                  _UINT32_(10)                                         /* (QEI_QEICON) Position Counter Initialization Mode Select bits Position */
#define QEI_QEICON_PIMOD_Msk                  (_UINT32_(0x7) << QEI_QEICON_PIMOD_Pos)              /* (QEI_QEICON) Position Counter Initialization Mode Select bits Mask */
#define QEI_QEICON_PIMOD(value)               (QEI_QEICON_PIMOD_Msk & (_UINT32_(value) << QEI_QEICON_PIMOD_Pos)) /* Assignment of value for PIMOD in the QEI_QEICON register */
#define   QEI_QEICON_PIMOD_7_Val              _UINT32_(0x7)                                        /* (QEI_QEICON) Modulo Count mode for position counter and every index event resets the position counter  */
#define   QEI_QEICON_PIMOD_6_Val              _UINT32_(0x6)                                        /* (QEI_QEICON) Modulo Count mode for position counter  */
#define   QEI_QEICON_PIMOD_5_Val              _UINT32_(0x5)                                        /* (QEI_QEICON) Resets the position counter when the position counter equals QEIICCH register  */
#define   QEI_QEICON_PIMOD_4_Val              _UINT32_(0x4)                                        /* (QEI_QEICON) Second index event after home event initializes position counter with contents of QEIICCHregister  */
#define   QEI_QEICON_PIMOD_3_Val              _UINT32_(0x3)                                        /* (QEI_QEICON) First index event after home event initializes position counter with contents of QEIICCH register  */
#define   QEI_QEICON_PIMOD_2_Val              _UINT32_(0x2)                                        /* (QEI_QEICON) Next index input event initializes the position counter with contents of QEIICCH register  */
#define   QEI_QEICON_PIMOD_1_Val              _UINT32_(0x1)                                        /* (QEI_QEICON) Every Index input event resets the position counter  */
#define   QEI_QEICON_PIMOD_0_Val              _UINT32_(0x0)                                        /* (QEI_QEICON) Index input event does not affect position counter  */
#define QEI_QEICON_PIMOD_7                    (QEI_QEICON_PIMOD_7_Val << QEI_QEICON_PIMOD_Pos)     /* (QEI_QEICON) Modulo Count mode for position counter and every index event resets the position counter Position */
#define QEI_QEICON_PIMOD_6                    (QEI_QEICON_PIMOD_6_Val << QEI_QEICON_PIMOD_Pos)     /* (QEI_QEICON) Modulo Count mode for position counter Position */
#define QEI_QEICON_PIMOD_5                    (QEI_QEICON_PIMOD_5_Val << QEI_QEICON_PIMOD_Pos)     /* (QEI_QEICON) Resets the position counter when the position counter equals QEIICCH register Position */
#define QEI_QEICON_PIMOD_4                    (QEI_QEICON_PIMOD_4_Val << QEI_QEICON_PIMOD_Pos)     /* (QEI_QEICON) Second index event after home event initializes position counter with contents of QEIICCHregister Position */
#define QEI_QEICON_PIMOD_3                    (QEI_QEICON_PIMOD_3_Val << QEI_QEICON_PIMOD_Pos)     /* (QEI_QEICON) First index event after home event initializes position counter with contents of QEIICCH register Position */
#define QEI_QEICON_PIMOD_2                    (QEI_QEICON_PIMOD_2_Val << QEI_QEICON_PIMOD_Pos)     /* (QEI_QEICON) Next index input event initializes the position counter with contents of QEIICCH register Position */
#define QEI_QEICON_PIMOD_1                    (QEI_QEICON_PIMOD_1_Val << QEI_QEICON_PIMOD_Pos)     /* (QEI_QEICON) Every Index input event resets the position counter Position */
#define QEI_QEICON_PIMOD_0                    (QEI_QEICON_PIMOD_0_Val << QEI_QEICON_PIMOD_Pos)     /* (QEI_QEICON) Index input event does not affect position counter Position */
#define QEI_QEICON_QEISIDL_Pos                _UINT32_(13)                                         /* (QEI_QEICON) Stop in Idle Mode bit Position */
#define QEI_QEICON_QEISIDL_Msk                (_UINT32_(0x1) << QEI_QEICON_QEISIDL_Pos)            /* (QEI_QEICON) Stop in Idle Mode bit Mask */
#define QEI_QEICON_QEISIDL(value)             (QEI_QEICON_QEISIDL_Msk & (_UINT32_(value) << QEI_QEICON_QEISIDL_Pos)) /* Assignment of value for QEISIDL in the QEI_QEICON register */
#define   QEI_QEICON_QEISIDL_DISCONT_Val      _UINT32_(0x1)                                        /* (QEI_QEICON) Discontinue module operation when device enters Idle mode  */
#define   QEI_QEICON_QEISIDL_CONT_Val         _UINT32_(0x0)                                        /* (QEI_QEICON) Continue module operation in Idle mode  */
#define QEI_QEICON_QEISIDL_DISCONT            (QEI_QEICON_QEISIDL_DISCONT_Val << QEI_QEICON_QEISIDL_Pos) /* (QEI_QEICON) Discontinue module operation when device enters Idle mode Position */
#define QEI_QEICON_QEISIDL_CONT               (QEI_QEICON_QEISIDL_CONT_Val << QEI_QEICON_QEISIDL_Pos) /* (QEI_QEICON) Continue module operation in Idle mode Position */
#define QEI_QEICON_FRZ_Pos                    _UINT32_(14)                                         /* (QEI_QEICON) Quadrature Encoder Interface Freeze debug mode Position */
#define QEI_QEICON_FRZ_Msk                    (_UINT32_(0x1) << QEI_QEICON_FRZ_Pos)                /* (QEI_QEICON) Quadrature Encoder Interface Freeze debug mode Mask */
#define QEI_QEICON_FRZ(value)                 (QEI_QEICON_FRZ_Msk & (_UINT32_(value) << QEI_QEICON_FRZ_Pos)) /* Assignment of value for FRZ in the QEI_QEICON register */
#define QEI_QEICON_ON_Pos                     _UINT32_(15)                                         /* (QEI_QEICON) Quadrature Encoder Interface Module Counter Enable bit Position */
#define QEI_QEICON_ON_Msk                     (_UINT32_(0x1) << QEI_QEICON_ON_Pos)                 /* (QEI_QEICON) Quadrature Encoder Interface Module Counter Enable bit Mask */
#define QEI_QEICON_ON(value)                  (QEI_QEICON_ON_Msk & (_UINT32_(value) << QEI_QEICON_ON_Pos)) /* Assignment of value for ON in the QEI_QEICON register */
#define   QEI_QEICON_ON_ON_Val                _UINT32_(0x1)                                        /* (QEI_QEICON) Module counters are enabled  */
#define   QEI_QEICON_ON_OFF_Val               _UINT32_(0x0)                                        /* (QEI_QEICON) Module counters are disabled  */
#define QEI_QEICON_ON_ON                      (QEI_QEICON_ON_ON_Val << QEI_QEICON_ON_Pos)          /* (QEI_QEICON) Module counters are enabled Position */
#define QEI_QEICON_ON_OFF                     (QEI_QEICON_ON_OFF_Val << QEI_QEICON_ON_Pos)         /* (QEI_QEICON) Module counters are disabled Position */
#define QEI_QEICON_Msk                        _UINT32_(0x0000FF7F)                                 /* (QEI_QEICON) Register Mask  */


/* -------- QEI_QEICONCLR : (QEI Offset: 0x04) (R/W 32) Bit clear register -------- */
#define QEI_QEICONCLR_RESETVALUE              _UINT32_(0x00)                                       /*  (QEI_QEICONCLR) Bit clear register  Reset Value */

#define QEI_QEICONCLR_Msk                     _UINT32_(0x00000000)                                 /* (QEI_QEICONCLR) Register Mask  */


/* -------- QEI_QEICONSET : (QEI Offset: 0x08) (R/W 32) Bit set register -------- */
#define QEI_QEICONSET_RESETVALUE              _UINT32_(0x00)                                       /*  (QEI_QEICONSET) Bit set register  Reset Value */

#define QEI_QEICONSET_Msk                     _UINT32_(0x00000000)                                 /* (QEI_QEICONSET) Register Mask  */


/* -------- QEI_QEICONINV : (QEI Offset: 0x0C) (R/W 32) Bit invert register -------- */
#define QEI_QEICONINV_RESETVALUE              _UINT32_(0x00)                                       /*  (QEI_QEICONINV) Bit invert register  Reset Value */

#define QEI_QEICONINV_Msk                     _UINT32_(0x00000000)                                 /* (QEI_QEICONINV) Register Mask  */


/* -------- QEI_QEIIOC : (QEI Offset: 0x10) (R/W 32) QEI I/O Control Register -------- */
#define QEI_QEIIOC_QEA_Pos                    _UINT32_(0)                                          /* (QEI_QEIIOC) Status of QEAx Input Pin after Polarity Control and SWPAB Pin Swapping bit Position */
#define QEI_QEIIOC_QEA_Msk                    (_UINT32_(0x1) << QEI_QEIIOC_QEA_Pos)                /* (QEI_QEIIOC) Status of QEAx Input Pin after Polarity Control and SWPAB Pin Swapping bit Mask */
#define QEI_QEIIOC_QEA(value)                 (QEI_QEIIOC_QEA_Msk & (_UINT32_(value) << QEI_QEIIOC_QEA_Pos)) /* Assignment of value for QEA in the QEI_QEIIOC register */
#define   QEI_QEIIOC_QEA_1_Val                _UINT32_(0x1)                                        /* (QEI_QEIIOC) Status of QEA input pin after polarity control and SWPAB pin swapping  */
#define   QEI_QEIIOC_QEA_0_Val                _UINT32_(0x0)                                        /* (QEI_QEIIOC) Status of QEA input pin after polarity control and SWPAB pin swapping  */
#define QEI_QEIIOC_QEA_1                      (QEI_QEIIOC_QEA_1_Val << QEI_QEIIOC_QEA_Pos)         /* (QEI_QEIIOC) Status of QEA input pin after polarity control and SWPAB pin swapping Position */
#define QEI_QEIIOC_QEA_0                      (QEI_QEIIOC_QEA_0_Val << QEI_QEIIOC_QEA_Pos)         /* (QEI_QEIIOC) Status of QEA input pin after polarity control and SWPAB pin swapping Position */
#define QEI_QEIIOC_QEB_Pos                    _UINT32_(1)                                          /* (QEI_QEIIOC) Status of QEBx Input Pin after Polarity Control and SWPAB Pin Swapping bit Position */
#define QEI_QEIIOC_QEB_Msk                    (_UINT32_(0x1) << QEI_QEIIOC_QEB_Pos)                /* (QEI_QEIIOC) Status of QEBx Input Pin after Polarity Control and SWPAB Pin Swapping bit Mask */
#define QEI_QEIIOC_QEB(value)                 (QEI_QEIIOC_QEB_Msk & (_UINT32_(value) << QEI_QEIIOC_QEB_Pos)) /* Assignment of value for QEB in the QEI_QEIIOC register */
#define   QEI_QEIIOC_QEB_1_Val                _UINT32_(0x1)                                        /* (QEI_QEIIOC) Status of QEB input pin after polarity control and SWPAB pin swapping  */
#define   QEI_QEIIOC_QEB_0_Val                _UINT32_(0x0)                                        /* (QEI_QEIIOC) Status of QEB input pin after polarity control and SWPAB pin swapping  */
#define QEI_QEIIOC_QEB_1                      (QEI_QEIIOC_QEB_1_Val << QEI_QEIIOC_QEB_Pos)         /* (QEI_QEIIOC) Status of QEB input pin after polarity control and SWPAB pin swapping Position */
#define QEI_QEIIOC_QEB_0                      (QEI_QEIIOC_QEB_0_Val << QEI_QEIIOC_QEB_Pos)         /* (QEI_QEIIOC) Status of QEB input pin after polarity control and SWPAB pin swapping Position */
#define QEI_QEIIOC_INDEX_Pos                  _UINT32_(2)                                          /* (QEI_QEIIOC) Status of INDXx Input Pin after Polarity Control bit Position */
#define QEI_QEIIOC_INDEX_Msk                  (_UINT32_(0x1) << QEI_QEIIOC_INDEX_Pos)              /* (QEI_QEIIOC) Status of INDXx Input Pin after Polarity Control bit Mask */
#define QEI_QEIIOC_INDEX(value)               (QEI_QEIIOC_INDEX_Msk & (_UINT32_(value) << QEI_QEIIOC_INDEX_Pos)) /* Assignment of value for INDEX in the QEI_QEIIOC register */
#define QEI_QEIIOC_HOME_Pos                   _UINT32_(3)                                          /* (QEI_QEIIOC) Status of HOMEx Input Pin after Polarity Control bit Position */
#define QEI_QEIIOC_HOME_Msk                   (_UINT32_(0x1) << QEI_QEIIOC_HOME_Pos)               /* (QEI_QEIIOC) Status of HOMEx Input Pin after Polarity Control bit Mask */
#define QEI_QEIIOC_HOME(value)                (QEI_QEIIOC_HOME_Msk & (_UINT32_(value) << QEI_QEIIOC_HOME_Pos)) /* Assignment of value for HOME in the QEI_QEIIOC register */
#define QEI_QEIIOC_QEAPOL_Pos                 _UINT32_(4)                                          /* (QEI_QEIIOC) QEAx Input Polarity Select bit Position */
#define QEI_QEIIOC_QEAPOL_Msk                 (_UINT32_(0x1) << QEI_QEIIOC_QEAPOL_Pos)             /* (QEI_QEIIOC) QEAx Input Polarity Select bit Mask */
#define QEI_QEIIOC_QEAPOL(value)              (QEI_QEIIOC_QEAPOL_Msk & (_UINT32_(value) << QEI_QEIIOC_QEAPOL_Pos)) /* Assignment of value for QEAPOL in the QEI_QEIIOC register */
#define   QEI_QEIIOC_QEAPOL_INVERT_Val        _UINT32_(0x1)                                        /* (QEI_QEIIOC) Input is inverted  */
#define   QEI_QEIIOC_QEAPOL_NORMAL_Val        _UINT32_(0x0)                                        /* (QEI_QEIIOC) Input is not inverted  */
#define QEI_QEIIOC_QEAPOL_INVERT              (QEI_QEIIOC_QEAPOL_INVERT_Val << QEI_QEIIOC_QEAPOL_Pos) /* (QEI_QEIIOC) Input is inverted Position */
#define QEI_QEIIOC_QEAPOL_NORMAL              (QEI_QEIIOC_QEAPOL_NORMAL_Val << QEI_QEIIOC_QEAPOL_Pos) /* (QEI_QEIIOC) Input is not inverted Position */
#define QEI_QEIIOC_QEBPOL_Pos                 _UINT32_(5)                                          /* (QEI_QEIIOC) QEBx Input Polarity Select bit Position */
#define QEI_QEIIOC_QEBPOL_Msk                 (_UINT32_(0x1) << QEI_QEIIOC_QEBPOL_Pos)             /* (QEI_QEIIOC) QEBx Input Polarity Select bit Mask */
#define QEI_QEIIOC_QEBPOL(value)              (QEI_QEIIOC_QEBPOL_Msk & (_UINT32_(value) << QEI_QEIIOC_QEBPOL_Pos)) /* Assignment of value for QEBPOL in the QEI_QEIIOC register */
#define   QEI_QEIIOC_QEBPOL_INVERT_Val        _UINT32_(0x1)                                        /* (QEI_QEIIOC) Input is inverted  */
#define   QEI_QEIIOC_QEBPOL_NORMAL_Val        _UINT32_(0x0)                                        /* (QEI_QEIIOC) Input is not inverted  */
#define QEI_QEIIOC_QEBPOL_INVERT              (QEI_QEIIOC_QEBPOL_INVERT_Val << QEI_QEIIOC_QEBPOL_Pos) /* (QEI_QEIIOC) Input is inverted Position */
#define QEI_QEIIOC_QEBPOL_NORMAL              (QEI_QEIIOC_QEBPOL_NORMAL_Val << QEI_QEIIOC_QEBPOL_Pos) /* (QEI_QEIIOC) Input is not inverted Position */
#define QEI_QEIIOC_IDXPOL_Pos                 _UINT32_(6)                                          /* (QEI_QEIIOC) INDXx Input Polarity Select bit Position */
#define QEI_QEIIOC_IDXPOL_Msk                 (_UINT32_(0x1) << QEI_QEIIOC_IDXPOL_Pos)             /* (QEI_QEIIOC) INDXx Input Polarity Select bit Mask */
#define QEI_QEIIOC_IDXPOL(value)              (QEI_QEIIOC_IDXPOL_Msk & (_UINT32_(value) << QEI_QEIIOC_IDXPOL_Pos)) /* Assignment of value for IDXPOL in the QEI_QEIIOC register */
#define   QEI_QEIIOC_IDXPOL_INVERT_Val        _UINT32_(0x1)                                        /* (QEI_QEIIOC) Input is inverted  */
#define   QEI_QEIIOC_IDXPOL_NORMAL_Val        _UINT32_(0x0)                                        /* (QEI_QEIIOC) Input is not inverted  */
#define QEI_QEIIOC_IDXPOL_INVERT              (QEI_QEIIOC_IDXPOL_INVERT_Val << QEI_QEIIOC_IDXPOL_Pos) /* (QEI_QEIIOC) Input is inverted Position */
#define QEI_QEIIOC_IDXPOL_NORMAL              (QEI_QEIIOC_IDXPOL_NORMAL_Val << QEI_QEIIOC_IDXPOL_Pos) /* (QEI_QEIIOC) Input is not inverted Position */
#define QEI_QEIIOC_HOMPOL_Pos                 _UINT32_(7)                                          /* (QEI_QEIIOC) HOMEx Input Polarity Select bit Position */
#define QEI_QEIIOC_HOMPOL_Msk                 (_UINT32_(0x1) << QEI_QEIIOC_HOMPOL_Pos)             /* (QEI_QEIIOC) HOMEx Input Polarity Select bit Mask */
#define QEI_QEIIOC_HOMPOL(value)              (QEI_QEIIOC_HOMPOL_Msk & (_UINT32_(value) << QEI_QEIIOC_HOMPOL_Pos)) /* Assignment of value for HOMPOL in the QEI_QEIIOC register */
#define   QEI_QEIIOC_HOMPOL_INVERT_Val        _UINT32_(0x1)                                        /* (QEI_QEIIOC) Input is inverted  */
#define   QEI_QEIIOC_HOMPOL_NORMAL_Val        _UINT32_(0x0)                                        /* (QEI_QEIIOC) Input is not inverted  */
#define QEI_QEIIOC_HOMPOL_INVERT              (QEI_QEIIOC_HOMPOL_INVERT_Val << QEI_QEIIOC_HOMPOL_Pos) /* (QEI_QEIIOC) Input is inverted Position */
#define QEI_QEIIOC_HOMPOL_NORMAL              (QEI_QEIIOC_HOMPOL_NORMAL_Val << QEI_QEIIOC_HOMPOL_Pos) /* (QEI_QEIIOC) Input is not inverted Position */
#define QEI_QEIIOC_SWPAB_Pos                  _UINT32_(8)                                          /* (QEI_QEIIOC) Swap QEA and QEB Inputs bit Position */
#define QEI_QEIIOC_SWPAB_Msk                  (_UINT32_(0x1) << QEI_QEIIOC_SWPAB_Pos)              /* (QEI_QEIIOC) Swap QEA and QEB Inputs bit Mask */
#define QEI_QEIIOC_SWPAB(value)               (QEI_QEIIOC_SWPAB_Msk & (_UINT32_(value) << QEI_QEIIOC_SWPAB_Pos)) /* Assignment of value for SWPAB in the QEI_QEIIOC register */
#define   QEI_QEIIOC_SWPAB_SWAP_Val           _UINT32_(0x1)                                        /* (QEI_QEIIOC) QEAx and QEBx are swapped prior to quadrature decoder logic  */
#define   QEI_QEIIOC_SWPAB_NORMAL_Val         _UINT32_(0x0)                                        /* (QEI_QEIIOC) QEAx and QEBx are not swapped  */
#define QEI_QEIIOC_SWPAB_SWAP                 (QEI_QEIIOC_SWPAB_SWAP_Val << QEI_QEIIOC_SWPAB_Pos)  /* (QEI_QEIIOC) QEAx and QEBx are swapped prior to quadrature decoder logic Position */
#define QEI_QEIIOC_SWPAB_NORMAL               (QEI_QEIIOC_SWPAB_NORMAL_Val << QEI_QEIIOC_SWPAB_Pos) /* (QEI_QEIIOC) QEAx and QEBx are not swapped Position */
#define QEI_QEIIOC_OUTFNC_Pos                 _UINT32_(9)                                          /* (QEI_QEIIOC) QEI Module Output Function Mode Select bits Position */
#define QEI_QEIIOC_OUTFNC_Msk                 (_UINT32_(0x3) << QEI_QEIIOC_OUTFNC_Pos)             /* (QEI_QEIIOC) QEI Module Output Function Mode Select bits Mask */
#define QEI_QEIIOC_OUTFNC(value)              (QEI_QEIIOC_OUTFNC_Msk & (_UINT32_(value) << QEI_QEIIOC_OUTFNC_Pos)) /* Assignment of value for OUTFNC in the QEI_QEIIOC register */
#define   QEI_QEIIOC_OUTFNC_EITHER_Val        _UINT32_(0x3)                                        /* (QEI_QEIIOC) The position coutner is either case  */
#define   QEI_QEIIOC_OUTFNC_LESS_THAN_Val     _UINT32_(0x2)                                        /* (QEI_QEIIOC) The position counter less than or equal to the range of CMPLH and CMPLL  */
#define   QEI_QEIIOC_OUTFNC_GREATER_THAN_Val  _UINT32_(0x1)                                        /* (QEI_QEIIOC) The position counter greater than or equal to the range of ICCH and ICCL  */
#define   QEI_QEIIOC_OUTFNC_DISABLE_Val       _UINT32_(0x0)                                        /* (QEI_QEIIOC) Output is disabled  */
#define QEI_QEIIOC_OUTFNC_EITHER              (QEI_QEIIOC_OUTFNC_EITHER_Val << QEI_QEIIOC_OUTFNC_Pos) /* (QEI_QEIIOC) The position coutner is either case Position */
#define QEI_QEIIOC_OUTFNC_LESS_THAN           (QEI_QEIIOC_OUTFNC_LESS_THAN_Val << QEI_QEIIOC_OUTFNC_Pos) /* (QEI_QEIIOC) The position counter less than or equal to the range of CMPLH and CMPLL Position */
#define QEI_QEIIOC_OUTFNC_GREATER_THAN        (QEI_QEIIOC_OUTFNC_GREATER_THAN_Val << QEI_QEIIOC_OUTFNC_Pos) /* (QEI_QEIIOC) The position counter greater than or equal to the range of ICCH and ICCL Position */
#define QEI_QEIIOC_OUTFNC_DISABLE             (QEI_QEIIOC_OUTFNC_DISABLE_Val << QEI_QEIIOC_OUTFNC_Pos) /* (QEI_QEIIOC) Output is disabled Position */
#define QEI_QEIIOC_QFDIV_Pos                  _UINT32_(11)                                         /* (QEI_QEIIOC) QEA/QEB/INDX/HOMEx Digital Input Filter Clock Divide Select bits Position */
#define QEI_QEIIOC_QFDIV_Msk                  (_UINT32_(0x7) << QEI_QEIIOC_QFDIV_Pos)              /* (QEI_QEIIOC) QEA/QEB/INDX/HOMEx Digital Input Filter Clock Divide Select bits Mask */
#define QEI_QEIIOC_QFDIV(value)               (QEI_QEIIOC_QFDIV_Msk & (_UINT32_(value) << QEI_QEIIOC_QFDIV_Pos)) /* Assignment of value for QFDIV in the QEI_QEIIOC register */
#define   QEI_QEIIOC_QFDIV_1_128_Val          _UINT32_(0x7)                                        /* (QEI_QEIIOC) 1:128 clock divide  */
#define   QEI_QEIIOC_QFDIV_1_64_Val           _UINT32_(0x6)                                        /* (QEI_QEIIOC) 1:64 clock divide  */
#define   QEI_QEIIOC_QFDIV_1_32_Val           _UINT32_(0x5)                                        /* (QEI_QEIIOC) 1:32 clock divide  */
#define   QEI_QEIIOC_QFDIV_1_16_Val           _UINT32_(0x4)                                        /* (QEI_QEIIOC) 1:16 clock divide  */
#define   QEI_QEIIOC_QFDIV_1_8_Val            _UINT32_(0x3)                                        /* (QEI_QEIIOC) 1:8 clock divide  */
#define   QEI_QEIIOC_QFDIV_1_4_Val            _UINT32_(0x2)                                        /* (QEI_QEIIOC) 1:4 clock divide  */
#define   QEI_QEIIOC_QFDIV_1_2_Val            _UINT32_(0x1)                                        /* (QEI_QEIIOC) 1:2 clock divide  */
#define   QEI_QEIIOC_QFDIV_1_1_Val            _UINT32_(0x0)                                        /* (QEI_QEIIOC) 1:1 clock divide  */
#define QEI_QEIIOC_QFDIV_1_128                (QEI_QEIIOC_QFDIV_1_128_Val << QEI_QEIIOC_QFDIV_Pos) /* (QEI_QEIIOC) 1:128 clock divide Position */
#define QEI_QEIIOC_QFDIV_1_64                 (QEI_QEIIOC_QFDIV_1_64_Val << QEI_QEIIOC_QFDIV_Pos)  /* (QEI_QEIIOC) 1:64 clock divide Position */
#define QEI_QEIIOC_QFDIV_1_32                 (QEI_QEIIOC_QFDIV_1_32_Val << QEI_QEIIOC_QFDIV_Pos)  /* (QEI_QEIIOC) 1:32 clock divide Position */
#define QEI_QEIIOC_QFDIV_1_16                 (QEI_QEIIOC_QFDIV_1_16_Val << QEI_QEIIOC_QFDIV_Pos)  /* (QEI_QEIIOC) 1:16 clock divide Position */
#define QEI_QEIIOC_QFDIV_1_8                  (QEI_QEIIOC_QFDIV_1_8_Val << QEI_QEIIOC_QFDIV_Pos)   /* (QEI_QEIIOC) 1:8 clock divide Position */
#define QEI_QEIIOC_QFDIV_1_4                  (QEI_QEIIOC_QFDIV_1_4_Val << QEI_QEIIOC_QFDIV_Pos)   /* (QEI_QEIIOC) 1:4 clock divide Position */
#define QEI_QEIIOC_QFDIV_1_2                  (QEI_QEIIOC_QFDIV_1_2_Val << QEI_QEIIOC_QFDIV_Pos)   /* (QEI_QEIIOC) 1:2 clock divide Position */
#define QEI_QEIIOC_QFDIV_1_1                  (QEI_QEIIOC_QFDIV_1_1_Val << QEI_QEIIOC_QFDIV_Pos)   /* (QEI_QEIIOC) 1:1 clock divide Position */
#define QEI_QEIIOC_FLTREN_Pos                 _UINT32_(14)                                         /* (QEI_QEIIOC) QEA/QEB/INDX/HOMEx Digital Filter Enable bit Position */
#define QEI_QEIIOC_FLTREN_Msk                 (_UINT32_(0x1) << QEI_QEIIOC_FLTREN_Pos)             /* (QEI_QEIIOC) QEA/QEB/INDX/HOMEx Digital Filter Enable bit Mask */
#define QEI_QEIIOC_FLTREN(value)              (QEI_QEIIOC_FLTREN_Msk & (_UINT32_(value) << QEI_QEIIOC_FLTREN_Pos)) /* Assignment of value for FLTREN in the QEI_QEIIOC register */
#define   QEI_QEIIOC_FLTREN_ON_Val            _UINT32_(0x1)                                        /* (QEI_QEIIOC) Input Pin Digital filter is enabled  */
#define   QEI_QEIIOC_FLTREN_OFF_Val           _UINT32_(0x0)                                        /* (QEI_QEIIOC) Input Pin Digital filter is disabled (bypassed)  */
#define QEI_QEIIOC_FLTREN_ON                  (QEI_QEIIOC_FLTREN_ON_Val << QEI_QEIIOC_FLTREN_Pos)  /* (QEI_QEIIOC) Input Pin Digital filter is enabled Position */
#define QEI_QEIIOC_FLTREN_OFF                 (QEI_QEIIOC_FLTREN_OFF_Val << QEI_QEIIOC_FLTREN_Pos) /* (QEI_QEIIOC) Input Pin Digital filter is disabled (bypassed) Position */
#define QEI_QEIIOC_QCAPEN_Pos                 _UINT32_(15)                                         /* (QEI_QEIIOC) Position Counter Input Capture Enable bit Position */
#define QEI_QEIIOC_QCAPEN_Msk                 (_UINT32_(0x1) << QEI_QEIIOC_QCAPEN_Pos)             /* (QEI_QEIIOC) Position Counter Input Capture Enable bit Mask */
#define QEI_QEIIOC_QCAPEN(value)              (QEI_QEIIOC_QCAPEN_Msk & (_UINT32_(value) << QEI_QEIIOC_QCAPEN_Pos)) /* Assignment of value for QCAPEN in the QEI_QEIIOC register */
#define   QEI_QEIIOC_QCAPEN_TRIGGERED_Val     _UINT32_(0x1)                                        /* (QEI_QEIIOC) Positive edge detect of Home input triggers position capture function  */
#define   QEI_QEIIOC_QCAPEN_NOT_TRIGGERED_Val _UINT32_(0x0)                                        /* (QEI_QEIIOC) Home input event (positive edge) does not trigger a capture even  */
#define QEI_QEIIOC_QCAPEN_TRIGGERED           (QEI_QEIIOC_QCAPEN_TRIGGERED_Val << QEI_QEIIOC_QCAPEN_Pos) /* (QEI_QEIIOC) Positive edge detect of Home input triggers position capture function Position */
#define QEI_QEIIOC_QCAPEN_NOT_TRIGGERED       (QEI_QEIIOC_QCAPEN_NOT_TRIGGERED_Val << QEI_QEIIOC_QCAPEN_Pos) /* (QEI_QEIIOC) Home input event (positive edge) does not trigger a capture even Position */
#define QEI_QEIIOC_HCAPEN_Pos                 _UINT32_(16)                                         /* (QEI_QEIIOC) Position Counter Input Capture by Home Event Enable bit Position */
#define QEI_QEIIOC_HCAPEN_Msk                 (_UINT32_(0x1) << QEI_QEIIOC_HCAPEN_Pos)             /* (QEI_QEIIOC) Position Counter Input Capture by Home Event Enable bit Mask */
#define QEI_QEIIOC_HCAPEN(value)              (QEI_QEIIOC_HCAPEN_Msk & (_UINT32_(value) << QEI_QEIIOC_HCAPEN_Pos)) /* Assignment of value for HCAPEN in the QEI_QEIIOC register */
#define   QEI_QEIIOC_HCAPEN_TRIGGERED_Val     _UINT32_(0x1)                                        /* (QEI_QEIIOC) HOMEx input event (positive edge) triggers a position capture event  */
#define   QEI_QEIIOC_HCAPEN_NOT_TRIGGERED_Val _UINT32_(0x0)                                        /* (QEI_QEIIOC) HOMEx input event (positive edge) does not trigger a position capture event  */
#define QEI_QEIIOC_HCAPEN_TRIGGERED           (QEI_QEIIOC_HCAPEN_TRIGGERED_Val << QEI_QEIIOC_HCAPEN_Pos) /* (QEI_QEIIOC) HOMEx input event (positive edge) triggers a position capture event Position */
#define QEI_QEIIOC_HCAPEN_NOT_TRIGGERED       (QEI_QEIIOC_HCAPEN_NOT_TRIGGERED_Val << QEI_QEIIOC_HCAPEN_Pos) /* (QEI_QEIIOC) HOMEx input event (positive edge) does not trigger a position capture event Position */
#define QEI_QEIIOC_Msk                        _UINT32_(0x0001FFFF)                                 /* (QEI_QEIIOC) Register Mask  */


/* -------- QEI_QQEIIOCCLR : (QEI Offset: 0x14) (R/W 32) Bit clear register -------- */
#define QEI_QQEIIOCCLR_RESETVALUE             _UINT32_(0x00)                                       /*  (QEI_QQEIIOCCLR) Bit clear register  Reset Value */

#define QEI_QQEIIOCCLR_Msk                    _UINT32_(0x00000000)                                 /* (QEI_QQEIIOCCLR) Register Mask  */


/* -------- QEI_QEIIOCSET : (QEI Offset: 0x18) (R/W 32) Bit set register -------- */
#define QEI_QEIIOCSET_RESETVALUE              _UINT32_(0x00)                                       /*  (QEI_QEIIOCSET) Bit set register  Reset Value */

#define QEI_QEIIOCSET_Msk                     _UINT32_(0x00000000)                                 /* (QEI_QEIIOCSET) Register Mask  */


/* -------- QEI_QEIIOCINV : (QEI Offset: 0x1C) (R/W 32) Bit invert register -------- */
#define QEI_QEIIOCINV_RESETVALUE              _UINT32_(0x00)                                       /*  (QEI_QEIIOCINV) Bit invert register  Reset Value */

#define QEI_QEIIOCINV_Msk                     _UINT32_(0x00000000)                                 /* (QEI_QEIIOCINV) Register Mask  */


/* -------- QEI_QEISTAT : (QEI Offset: 0x20) (R/W 32) QEI Status Register -------- */
#define QEI_QEISTAT_IDXIEN_Pos                _UINT32_(0)                                          /* (QEI_QEISTAT) Index Input Event Interrupt Enable bit Position */
#define QEI_QEISTAT_IDXIEN_Msk                (_UINT32_(0x1) << QEI_QEISTAT_IDXIEN_Pos)            /* (QEI_QEISTAT) Index Input Event Interrupt Enable bit Mask */
#define QEI_QEISTAT_IDXIEN(value)             (QEI_QEISTAT_IDXIEN_Msk & (_UINT32_(value) << QEI_QEISTAT_IDXIEN_Pos)) /* Assignment of value for IDXIEN in the QEI_QEISTAT register */
#define   QEI_QEISTAT_IDXIEN_ON_Val           _UINT32_(0x1)                                        /* (QEI_QEISTAT) Interrupt is enabled  */
#define   QEI_QEISTAT_IDXIEN_OFF_Val          _UINT32_(0x0)                                        /* (QEI_QEISTAT) Interrupt is disabled  */
#define QEI_QEISTAT_IDXIEN_ON                 (QEI_QEISTAT_IDXIEN_ON_Val << QEI_QEISTAT_IDXIEN_Pos) /* (QEI_QEISTAT) Interrupt is enabled Position */
#define QEI_QEISTAT_IDXIEN_OFF                (QEI_QEISTAT_IDXIEN_OFF_Val << QEI_QEISTAT_IDXIEN_Pos) /* (QEI_QEISTAT) Interrupt is disabled Position */
#define QEI_QEISTAT_IDXIRQ_Pos                _UINT32_(1)                                          /* (QEI_QEISTAT) Status Flag for Index Event Status bit Position */
#define QEI_QEISTAT_IDXIRQ_Msk                (_UINT32_(0x1) << QEI_QEISTAT_IDXIRQ_Pos)            /* (QEI_QEISTAT) Status Flag for Index Event Status bit Mask */
#define QEI_QEISTAT_IDXIRQ(value)             (QEI_QEISTAT_IDXIRQ_Msk & (_UINT32_(value) << QEI_QEISTAT_IDXIRQ_Pos)) /* Assignment of value for IDXIRQ in the QEI_QEISTAT register */
#define   QEI_QEISTAT_IDXIRQ_ON_Val           _UINT32_(0x1)                                        /* (QEI_QEISTAT) Index event has occurred  */
#define   QEI_QEISTAT_IDXIRQ_OFF_Val          _UINT32_(0x0)                                        /* (QEI_QEISTAT) No Index event has occurred  */
#define QEI_QEISTAT_IDXIRQ_ON                 (QEI_QEISTAT_IDXIRQ_ON_Val << QEI_QEISTAT_IDXIRQ_Pos) /* (QEI_QEISTAT) Index event has occurred Position */
#define QEI_QEISTAT_IDXIRQ_OFF                (QEI_QEISTAT_IDXIRQ_OFF_Val << QEI_QEISTAT_IDXIRQ_Pos) /* (QEI_QEISTAT) No Index event has occurred Position */
#define QEI_QEISTAT_HOMIEN_Pos                _UINT32_(2)                                          /* (QEI_QEISTAT) Home Input Event Interrupt Enable bit Position */
#define QEI_QEISTAT_HOMIEN_Msk                (_UINT32_(0x1) << QEI_QEISTAT_HOMIEN_Pos)            /* (QEI_QEISTAT) Home Input Event Interrupt Enable bit Mask */
#define QEI_QEISTAT_HOMIEN(value)             (QEI_QEISTAT_HOMIEN_Msk & (_UINT32_(value) << QEI_QEISTAT_HOMIEN_Pos)) /* Assignment of value for HOMIEN in the QEI_QEISTAT register */
#define   QEI_QEISTAT_HOMIEN_ON_Val           _UINT32_(0x1)                                        /* (QEI_QEISTAT) Interrupt is enabled  */
#define   QEI_QEISTAT_HOMIEN_OFF_Val          _UINT32_(0x0)                                        /* (QEI_QEISTAT) Interrupt is disabled  */
#define QEI_QEISTAT_HOMIEN_ON                 (QEI_QEISTAT_HOMIEN_ON_Val << QEI_QEISTAT_HOMIEN_Pos) /* (QEI_QEISTAT) Interrupt is enabled Position */
#define QEI_QEISTAT_HOMIEN_OFF                (QEI_QEISTAT_HOMIEN_OFF_Val << QEI_QEISTAT_HOMIEN_Pos) /* (QEI_QEISTAT) Interrupt is disabled Position */
#define QEI_QEISTAT_HOMIRQ_Pos                _UINT32_(3)                                          /* (QEI_QEISTAT) Status Flag for Home Event Status bit Position */
#define QEI_QEISTAT_HOMIRQ_Msk                (_UINT32_(0x1) << QEI_QEISTAT_HOMIRQ_Pos)            /* (QEI_QEISTAT) Status Flag for Home Event Status bit Mask */
#define QEI_QEISTAT_HOMIRQ(value)             (QEI_QEISTAT_HOMIRQ_Msk & (_UINT32_(value) << QEI_QEISTAT_HOMIRQ_Pos)) /* Assignment of value for HOMIRQ in the QEI_QEISTAT register */
#define   QEI_QEISTAT_HOMIRQ_ON_Val           _UINT32_(0x1)                                        /* (QEI_QEISTAT) Home event has occurred  */
#define   QEI_QEISTAT_HOMIRQ_OFF_Val          _UINT32_(0x0)                                        /* (QEI_QEISTAT) No Home event has occurred  */
#define QEI_QEISTAT_HOMIRQ_ON                 (QEI_QEISTAT_HOMIRQ_ON_Val << QEI_QEISTAT_HOMIRQ_Pos) /* (QEI_QEISTAT) Home event has occurred Position */
#define QEI_QEISTAT_HOMIRQ_OFF                (QEI_QEISTAT_HOMIRQ_OFF_Val << QEI_QEISTAT_HOMIRQ_Pos) /* (QEI_QEISTAT) No Home event has occurred Position */
#define QEI_QEISTAT_VELOVIEN_Pos              _UINT32_(4)                                          /* (QEI_QEISTAT) Velocity Counter Overflow Interrupt Enable bit Position */
#define QEI_QEISTAT_VELOVIEN_Msk              (_UINT32_(0x1) << QEI_QEISTAT_VELOVIEN_Pos)          /* (QEI_QEISTAT) Velocity Counter Overflow Interrupt Enable bit Mask */
#define QEI_QEISTAT_VELOVIEN(value)           (QEI_QEISTAT_VELOVIEN_Msk & (_UINT32_(value) << QEI_QEISTAT_VELOVIEN_Pos)) /* Assignment of value for VELOVIEN in the QEI_QEISTAT register */
#define   QEI_QEISTAT_VELOVIEN_ON_Val         _UINT32_(0x1)                                        /* (QEI_QEISTAT) Interrupt is enabled  */
#define   QEI_QEISTAT_VELOVIEN_OFF_Val        _UINT32_(0x0)                                        /* (QEI_QEISTAT) Interrupt is disabled  */
#define QEI_QEISTAT_VELOVIEN_ON               (QEI_QEISTAT_VELOVIEN_ON_Val << QEI_QEISTAT_VELOVIEN_Pos) /* (QEI_QEISTAT) Interrupt is enabled Position */
#define QEI_QEISTAT_VELOVIEN_OFF              (QEI_QEISTAT_VELOVIEN_OFF_Val << QEI_QEISTAT_VELOVIEN_Pos) /* (QEI_QEISTAT) Interrupt is disabled Position */
#define QEI_QEISTAT_VELOVIRQ_Pos              _UINT32_(5)                                          /* (QEI_QEISTAT) Velocity Counter Overflow Status bit Position */
#define QEI_QEISTAT_VELOVIRQ_Msk              (_UINT32_(0x1) << QEI_QEISTAT_VELOVIRQ_Pos)          /* (QEI_QEISTAT) Velocity Counter Overflow Status bit Mask */
#define QEI_QEISTAT_VELOVIRQ(value)           (QEI_QEISTAT_VELOVIRQ_Msk & (_UINT32_(value) << QEI_QEISTAT_VELOVIRQ_Pos)) /* Assignment of value for VELOVIRQ in the QEI_QEISTAT register */
#define   QEI_QEISTAT_VELOVIRQ_OVERFLOW_Val   _UINT32_(0x1)                                        /* (QEI_QEISTAT) Overflow has occurred  */
#define   QEI_QEISTAT_VELOVIRQ_NO_OVERFLOW_Val _UINT32_(0x0)                                        /* (QEI_QEISTAT) No overflow has not occurred  */
#define QEI_QEISTAT_VELOVIRQ_OVERFLOW         (QEI_QEISTAT_VELOVIRQ_OVERFLOW_Val << QEI_QEISTAT_VELOVIRQ_Pos) /* (QEI_QEISTAT) Overflow has occurred Position */
#define QEI_QEISTAT_VELOVIRQ_NO_OVERFLOW      (QEI_QEISTAT_VELOVIRQ_NO_OVERFLOW_Val << QEI_QEISTAT_VELOVIRQ_Pos) /* (QEI_QEISTAT) No overflow has not occurred Position */
#define QEI_QEISTAT_PCIIEN_Pos                _UINT32_(6)                                          /* (QEI_QEISTAT) Position Counter Initialization Process Complete Interrupt Enable bit Position */
#define QEI_QEISTAT_PCIIEN_Msk                (_UINT32_(0x1) << QEI_QEISTAT_PCIIEN_Pos)            /* (QEI_QEISTAT) Position Counter Initialization Process Complete Interrupt Enable bit Mask */
#define QEI_QEISTAT_PCIIEN(value)             (QEI_QEISTAT_PCIIEN_Msk & (_UINT32_(value) << QEI_QEISTAT_PCIIEN_Pos)) /* Assignment of value for PCIIEN in the QEI_QEISTAT register */
#define   QEI_QEISTAT_PCIIEN_ON_Val           _UINT32_(0x1)                                        /* (QEI_QEISTAT) Interrupt is enabled  */
#define   QEI_QEISTAT_PCIIEN_OFF_Val          _UINT32_(0x0)                                        /* (QEI_QEISTAT) Interrupt is disabled  */
#define QEI_QEISTAT_PCIIEN_ON                 (QEI_QEISTAT_PCIIEN_ON_Val << QEI_QEISTAT_PCIIEN_Pos) /* (QEI_QEISTAT) Interrupt is enabled Position */
#define QEI_QEISTAT_PCIIEN_OFF                (QEI_QEISTAT_PCIIEN_OFF_Val << QEI_QEISTAT_PCIIEN_Pos) /* (QEI_QEISTAT) Interrupt is disabled Position */
#define QEI_QEISTAT_PCIIRQ_Pos                _UINT32_(7)                                          /* (QEI_QEISTAT) Position Counter Initialization Process Complete Status bit Position */
#define QEI_QEISTAT_PCIIRQ_Msk                (_UINT32_(0x1) << QEI_QEISTAT_PCIIRQ_Pos)            /* (QEI_QEISTAT) Position Counter Initialization Process Complete Status bit Mask */
#define QEI_QEISTAT_PCIIRQ(value)             (QEI_QEISTAT_PCIIRQ_Msk & (_UINT32_(value) << QEI_QEISTAT_PCIIRQ_Pos)) /* Assignment of value for PCIIRQ in the QEI_QEISTAT register */
#define   QEI_QEISTAT_PCIIRQ_DONE_Val         _UINT32_(0x1)                                        /* (QEI_QEISTAT) POSxCNT was reinitialized  */
#define   QEI_QEISTAT_PCIIRQ_NOT_DONE_Val     _UINT32_(0x0)                                        /* (QEI_QEISTAT) POSxCNT was not reinitialized  */
#define QEI_QEISTAT_PCIIRQ_DONE               (QEI_QEISTAT_PCIIRQ_DONE_Val << QEI_QEISTAT_PCIIRQ_Pos) /* (QEI_QEISTAT) POSxCNT was reinitialized Position */
#define QEI_QEISTAT_PCIIRQ_NOT_DONE           (QEI_QEISTAT_PCIIRQ_NOT_DONE_Val << QEI_QEISTAT_PCIIRQ_Pos) /* (QEI_QEISTAT) POSxCNT was not reinitialized Position */
#define QEI_QEISTAT_POSOVIEN_Pos              _UINT32_(8)                                          /* (QEI_QEISTAT) Position Counter Overflow Interrupt Enable bit Position */
#define QEI_QEISTAT_POSOVIEN_Msk              (_UINT32_(0x1) << QEI_QEISTAT_POSOVIEN_Pos)          /* (QEI_QEISTAT) Position Counter Overflow Interrupt Enable bit Mask */
#define QEI_QEISTAT_POSOVIEN(value)           (QEI_QEISTAT_POSOVIEN_Msk & (_UINT32_(value) << QEI_QEISTAT_POSOVIEN_Pos)) /* Assignment of value for POSOVIEN in the QEI_QEISTAT register */
#define   QEI_QEISTAT_POSOVIEN_ON_Val         _UINT32_(0x1)                                        /* (QEI_QEISTAT) Interrupt is enabled  */
#define   QEI_QEISTAT_POSOVIEN_OFF_Val        _UINT32_(0x0)                                        /* (QEI_QEISTAT) Interrupt is disabled  */
#define QEI_QEISTAT_POSOVIEN_ON               (QEI_QEISTAT_POSOVIEN_ON_Val << QEI_QEISTAT_POSOVIEN_Pos) /* (QEI_QEISTAT) Interrupt is enabled Position */
#define QEI_QEISTAT_POSOVIEN_OFF              (QEI_QEISTAT_POSOVIEN_OFF_Val << QEI_QEISTAT_POSOVIEN_Pos) /* (QEI_QEISTAT) Interrupt is disabled Position */
#define QEI_QEISTAT_POSOVIRQ_Pos              _UINT32_(9)                                          /* (QEI_QEISTAT) Position Counter Overflow Status bit Position */
#define QEI_QEISTAT_POSOVIRQ_Msk              (_UINT32_(0x1) << QEI_QEISTAT_POSOVIRQ_Pos)          /* (QEI_QEISTAT) Position Counter Overflow Status bit Mask */
#define QEI_QEISTAT_POSOVIRQ(value)           (QEI_QEISTAT_POSOVIRQ_Msk & (_UINT32_(value) << QEI_QEISTAT_POSOVIRQ_Pos)) /* Assignment of value for POSOVIRQ in the QEI_QEISTAT register */
#define   QEI_QEISTAT_POSOVIRQ_OVERFLOW_Val   _UINT32_(0x1)                                        /* (QEI_QEISTAT) Overflow has occurred  */
#define   QEI_QEISTAT_POSOVIRQ_NO_OVERFLOW_Val _UINT32_(0x0)                                        /* (QEI_QEISTAT) No overflow has occurred  */
#define QEI_QEISTAT_POSOVIRQ_OVERFLOW         (QEI_QEISTAT_POSOVIRQ_OVERFLOW_Val << QEI_QEISTAT_POSOVIRQ_Pos) /* (QEI_QEISTAT) Overflow has occurred Position */
#define QEI_QEISTAT_POSOVIRQ_NO_OVERFLOW      (QEI_QEISTAT_POSOVIRQ_NO_OVERFLOW_Val << QEI_QEISTAT_POSOVIRQ_Pos) /* (QEI_QEISTAT) No overflow has occurred Position */
#define QEI_QEISTAT_PCLEQIEN_Pos              _UINT32_(10)                                         /* (QEI_QEISTAT) Position Counter Less Than or Equal Compare Interrupt Enable bit Position */
#define QEI_QEISTAT_PCLEQIEN_Msk              (_UINT32_(0x1) << QEI_QEISTAT_PCLEQIEN_Pos)          /* (QEI_QEISTAT) Position Counter Less Than or Equal Compare Interrupt Enable bit Mask */
#define QEI_QEISTAT_PCLEQIEN(value)           (QEI_QEISTAT_PCLEQIEN_Msk & (_UINT32_(value) << QEI_QEISTAT_PCLEQIEN_Pos)) /* Assignment of value for PCLEQIEN in the QEI_QEISTAT register */
#define   QEI_QEISTAT_PCLEQIEN_ON_Val         _UINT32_(0x1)                                        /* (QEI_QEISTAT) Interrupt is enabled  */
#define   QEI_QEISTAT_PCLEQIEN_OFF_Val        _UINT32_(0x0)                                        /* (QEI_QEISTAT) Interrupt is disabled  */
#define QEI_QEISTAT_PCLEQIEN_ON               (QEI_QEISTAT_PCLEQIEN_ON_Val << QEI_QEISTAT_PCLEQIEN_Pos) /* (QEI_QEISTAT) Interrupt is enabled Position */
#define QEI_QEISTAT_PCLEQIEN_OFF              (QEI_QEISTAT_PCLEQIEN_OFF_Val << QEI_QEISTAT_PCLEQIEN_Pos) /* (QEI_QEISTAT) Interrupt is disabled Position */
#define QEI_QEISTAT_PCLEQIRQ_Pos              _UINT32_(11)                                         /* (QEI_QEISTAT) Position Counter Less Than or Equal Compare Status bit Position */
#define QEI_QEISTAT_PCLEQIRQ_Msk              (_UINT32_(0x1) << QEI_QEISTAT_PCLEQIRQ_Pos)          /* (QEI_QEISTAT) Position Counter Less Than or Equal Compare Status bit Mask */
#define QEI_QEISTAT_PCLEQIRQ(value)           (QEI_QEISTAT_PCLEQIRQ_Msk & (_UINT32_(value) << QEI_QEISTAT_PCLEQIRQ_Pos)) /* Assignment of value for PCLEQIRQ in the QEI_QEISTAT register */
#define   QEI_QEISTAT_PCLEQIRQ_LESS_EQUAL_Val _UINT32_(0x1)                                        /* (QEI_QEISTAT) POSxCNT less than or equal to QEICMPL  */
#define   QEI_QEISTAT_PCLEQIRQ_GREATER_Val    _UINT32_(0x0)                                        /* (QEI_QEISTAT) POSxCNT greater than QEICMPL  */
#define QEI_QEISTAT_PCLEQIRQ_LESS_EQUAL       (QEI_QEISTAT_PCLEQIRQ_LESS_EQUAL_Val << QEI_QEISTAT_PCLEQIRQ_Pos) /* (QEI_QEISTAT) POSxCNT less than or equal to QEICMPL Position */
#define QEI_QEISTAT_PCLEQIRQ_GREATER          (QEI_QEISTAT_PCLEQIRQ_GREATER_Val << QEI_QEISTAT_PCLEQIRQ_Pos) /* (QEI_QEISTAT) POSxCNT greater than QEICMPL Position */
#define QEI_QEISTAT_PCHEQIEN_Pos              _UINT32_(12)                                         /* (QEI_QEISTAT) Position Counter Greater Than or Equal Compare Interrupt Enable bit Position */
#define QEI_QEISTAT_PCHEQIEN_Msk              (_UINT32_(0x1) << QEI_QEISTAT_PCHEQIEN_Pos)          /* (QEI_QEISTAT) Position Counter Greater Than or Equal Compare Interrupt Enable bit Mask */
#define QEI_QEISTAT_PCHEQIEN(value)           (QEI_QEISTAT_PCHEQIEN_Msk & (_UINT32_(value) << QEI_QEISTAT_PCHEQIEN_Pos)) /* Assignment of value for PCHEQIEN in the QEI_QEISTAT register */
#define   QEI_QEISTAT_PCHEQIEN_ON_Val         _UINT32_(0x1)                                        /* (QEI_QEISTAT) Interrupt is enabled  */
#define   QEI_QEISTAT_PCHEQIEN_OFF_Val        _UINT32_(0x0)                                        /* (QEI_QEISTAT) Interrupt is disabled  */
#define QEI_QEISTAT_PCHEQIEN_ON               (QEI_QEISTAT_PCHEQIEN_ON_Val << QEI_QEISTAT_PCHEQIEN_Pos) /* (QEI_QEISTAT) Interrupt is enabled Position */
#define QEI_QEISTAT_PCHEQIEN_OFF              (QEI_QEISTAT_PCHEQIEN_OFF_Val << QEI_QEISTAT_PCHEQIEN_Pos) /* (QEI_QEISTAT) Interrupt is disabled Position */
#define QEI_QEISTAT_PCHEQIRQ_Pos              _UINT32_(13)                                         /* (QEI_QEISTAT) Position Counter Greater Than or Equal Compare Status bit Position */
#define QEI_QEISTAT_PCHEQIRQ_Msk              (_UINT32_(0x1) << QEI_QEISTAT_PCHEQIRQ_Pos)          /* (QEI_QEISTAT) Position Counter Greater Than or Equal Compare Status bit Mask */
#define QEI_QEISTAT_PCHEQIRQ(value)           (QEI_QEISTAT_PCHEQIRQ_Msk & (_UINT32_(value) << QEI_QEISTAT_PCHEQIRQ_Pos)) /* Assignment of value for PCHEQIRQ in the QEI_QEISTAT register */
#define   QEI_QEISTAT_PCHEQIRQ_MORE_EQUAL_Val _UINT32_(0x1)                                        /* (QEI_QEISTAT) POSxCNT greater than or equal to QEIICCH  */
#define   QEI_QEISTAT_PCHEQIRQ_LESS_Val       _UINT32_(0x0)                                        /* (QEI_QEISTAT) POSxCNT less than QEIICCH  */
#define QEI_QEISTAT_PCHEQIRQ_MORE_EQUAL       (QEI_QEISTAT_PCHEQIRQ_MORE_EQUAL_Val << QEI_QEISTAT_PCHEQIRQ_Pos) /* (QEI_QEISTAT) POSxCNT greater than or equal to QEIICCH Position */
#define QEI_QEISTAT_PCHEQIRQ_LESS             (QEI_QEISTAT_PCHEQIRQ_LESS_Val << QEI_QEISTAT_PCHEQIRQ_Pos) /* (QEI_QEISTAT) POSxCNT less than QEIICCH Position */
#define QEI_QEISTAT_Msk                       _UINT32_(0x00003FFF)                                 /* (QEI_QEISTAT) Register Mask  */


/* -------- QEI_QEISTATCLR : (QEI Offset: 0x24) (R/W 32) Bit clear register -------- */
#define QEI_QEISTATCLR_RESETVALUE             _UINT32_(0x00)                                       /*  (QEI_QEISTATCLR) Bit clear register  Reset Value */

#define QEI_QEISTATCLR_Msk                    _UINT32_(0x00000000)                                 /* (QEI_QEISTATCLR) Register Mask  */


/* -------- QEI_QEISTATSET : (QEI Offset: 0x28) (R/W 32) Bit set register -------- */
#define QEI_QEISTATSET_RESETVALUE             _UINT32_(0x00)                                       /*  (QEI_QEISTATSET) Bit set register  Reset Value */

#define QEI_QEISTATSET_Msk                    _UINT32_(0x00000000)                                 /* (QEI_QEISTATSET) Register Mask  */


/* -------- QEI_QEISTATINV : (QEI Offset: 0x2C) (R/W 32) Bit invert register -------- */
#define QEI_QEISTATINV_RESETVALUE             _UINT32_(0x00)                                       /*  (QEI_QEISTATINV) Bit invert register  Reset Value */

#define QEI_QEISTATINV_Msk                    _UINT32_(0x00000000)                                 /* (QEI_QEISTATINV) Register Mask  */


/* -------- QEI_POSCNT : (QEI Offset: 0x30) (R/W 32) Position Counter Register -------- */
#define QEI_POSCNT_POSCNT_Pos                 _UINT32_(0)                                          /* (QEI_POSCNT) Position Counter Position */
#define QEI_POSCNT_POSCNT_Msk                 (_UINT32_(0xFFFFFFFF) << QEI_POSCNT_POSCNT_Pos)      /* (QEI_POSCNT) Position Counter Mask */
#define QEI_POSCNT_POSCNT(value)              (QEI_POSCNT_POSCNT_Msk & (_UINT32_(value) << QEI_POSCNT_POSCNT_Pos)) /* Assignment of value for POSCNT in the QEI_POSCNT register */
#define QEI_POSCNT_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (QEI_POSCNT) Register Mask  */


/* -------- QEI_POSCNTCLR : (QEI Offset: 0x34) (R/W 32) Bit clear register -------- */
#define QEI_POSCNTCLR_RESETVALUE              _UINT32_(0x00)                                       /*  (QEI_POSCNTCLR) Bit clear register  Reset Value */

#define QEI_POSCNTCLR_Msk                     _UINT32_(0x00000000)                                 /* (QEI_POSCNTCLR) Register Mask  */


/* -------- QEI_POSCNTSET : (QEI Offset: 0x38) (R/W 32) Bit set register -------- */
#define QEI_POSCNTSET_RESETVALUE              _UINT32_(0x00)                                       /*  (QEI_POSCNTSET) Bit set register  Reset Value */

#define QEI_POSCNTSET_Msk                     _UINT32_(0x00000000)                                 /* (QEI_POSCNTSET) Register Mask  */


/* -------- QEI_POSCNTINV : (QEI Offset: 0x3C) (R/W 32) Bit invert register -------- */
#define QEI_POSCNTINV_RESETVALUE              _UINT32_(0x00)                                       /*  (QEI_POSCNTINV) Bit invert register  Reset Value */

#define QEI_POSCNTINV_Msk                     _UINT32_(0x00000000)                                 /* (QEI_POSCNTINV) Register Mask  */


/* -------- QEI_POSHLD : (QEI Offset: 0x40) (R/W 32) Position Count Hold Register -------- */
#define QEI_POSHLD_POSHLD_Pos                 _UINT32_(0)                                          /* (QEI_POSHLD) Position Count Hold Position */
#define QEI_POSHLD_POSHLD_Msk                 (_UINT32_(0xFFFFFFFF) << QEI_POSHLD_POSHLD_Pos)      /* (QEI_POSHLD) Position Count Hold Mask */
#define QEI_POSHLD_POSHLD(value)              (QEI_POSHLD_POSHLD_Msk & (_UINT32_(value) << QEI_POSHLD_POSHLD_Pos)) /* Assignment of value for POSHLD in the QEI_POSHLD register */
#define QEI_POSHLD_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (QEI_POSHLD) Register Mask  */


/* -------- QEI_POSHLDCLR : (QEI Offset: 0x44) (R/W 32) Bit clear register -------- */
#define QEI_POSHLDCLR_RESETVALUE              _UINT32_(0x00)                                       /*  (QEI_POSHLDCLR) Bit clear register  Reset Value */

#define QEI_POSHLDCLR_Msk                     _UINT32_(0x00000000)                                 /* (QEI_POSHLDCLR) Register Mask  */


/* -------- QEI_POSHLDSET : (QEI Offset: 0x48) (R/W 32) Bit set register -------- */
#define QEI_POSHLDSET_RESETVALUE              _UINT32_(0x00)                                       /*  (QEI_POSHLDSET) Bit set register  Reset Value */

#define QEI_POSHLDSET_Msk                     _UINT32_(0x00000000)                                 /* (QEI_POSHLDSET) Register Mask  */


/* -------- QEI_POSHLDINV : (QEI Offset: 0x4C) (R/W 32) Bit invert register -------- */
#define QEI_POSHLDINV_RESETVALUE              _UINT32_(0x00)                                       /*  (QEI_POSHLDINV) Bit invert register  Reset Value */

#define QEI_POSHLDINV_Msk                     _UINT32_(0x00000000)                                 /* (QEI_POSHLDINV) Register Mask  */


/* -------- QEI_VELCNT : (QEI Offset: 0x50) (R/W 32) Velocity Counter Register -------- */
#define QEI_VELCNT_VELCNT_Pos                 _UINT32_(0)                                          /* (QEI_VELCNT) Velocity Counter Position */
#define QEI_VELCNT_VELCNT_Msk                 (_UINT32_(0xFFFFFFFF) << QEI_VELCNT_VELCNT_Pos)      /* (QEI_VELCNT) Velocity Counter Mask */
#define QEI_VELCNT_VELCNT(value)              (QEI_VELCNT_VELCNT_Msk & (_UINT32_(value) << QEI_VELCNT_VELCNT_Pos)) /* Assignment of value for VELCNT in the QEI_VELCNT register */
#define QEI_VELCNT_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (QEI_VELCNT) Register Mask  */


/* -------- QEI_VELCNTCLR : (QEI Offset: 0x54) (R/W 32) Bit clear register -------- */
#define QEI_VELCNTCLR_RESETVALUE              _UINT32_(0x00)                                       /*  (QEI_VELCNTCLR) Bit clear register  Reset Value */

#define QEI_VELCNTCLR_Msk                     _UINT32_(0x00000000)                                 /* (QEI_VELCNTCLR) Register Mask  */


/* -------- QEI_VELCNTSET : (QEI Offset: 0x58) (R/W 32) Bit set register -------- */
#define QEI_VELCNTSET_RESETVALUE              _UINT32_(0x00)                                       /*  (QEI_VELCNTSET) Bit set register  Reset Value */

#define QEI_VELCNTSET_Msk                     _UINT32_(0x00000000)                                 /* (QEI_VELCNTSET) Register Mask  */


/* -------- QEI_VELCNTINV : (QEI Offset: 0x5C) (R/W 32) Bit invert register -------- */
#define QEI_VELCNTINV_RESETVALUE              _UINT32_(0x00)                                       /*  (QEI_VELCNTINV) Bit invert register  Reset Value */

#define QEI_VELCNTINV_Msk                     _UINT32_(0x00000000)                                 /* (QEI_VELCNTINV) Register Mask  */


/* -------- QEI_VELHLD : (QEI Offset: 0x60) (R/W 32) Velocity Counter Holding Register -------- */
#define QEI_VELHLD_VELHLD_Pos                 _UINT32_(0)                                          /* (QEI_VELHLD) Velocity Cout Hold Position */
#define QEI_VELHLD_VELHLD_Msk                 (_UINT32_(0xFFFFFFFF) << QEI_VELHLD_VELHLD_Pos)      /* (QEI_VELHLD) Velocity Cout Hold Mask */
#define QEI_VELHLD_VELHLD(value)              (QEI_VELHLD_VELHLD_Msk & (_UINT32_(value) << QEI_VELHLD_VELHLD_Pos)) /* Assignment of value for VELHLD in the QEI_VELHLD register */
#define QEI_VELHLD_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (QEI_VELHLD) Register Mask  */


/* -------- QEI_VELHLDCLR : (QEI Offset: 0x64) (R/W 32) Bit clear register -------- */
#define QEI_VELHLDCLR_RESETVALUE              _UINT32_(0x00)                                       /*  (QEI_VELHLDCLR) Bit clear register  Reset Value */

#define QEI_VELHLDCLR_Msk                     _UINT32_(0x00000000)                                 /* (QEI_VELHLDCLR) Register Mask  */


/* -------- QEI_VELHLDSET : (QEI Offset: 0x68) (R/W 32) Bit set register -------- */
#define QEI_VELHLDSET_RESETVALUE              _UINT32_(0x00)                                       /*  (QEI_VELHLDSET) Bit set register  Reset Value */

#define QEI_VELHLDSET_Msk                     _UINT32_(0x00000000)                                 /* (QEI_VELHLDSET) Register Mask  */


/* -------- QEI_VELHLDINV : (QEI Offset: 0x6C) (R/W 32) Bit invert register -------- */
#define QEI_VELHLDINV_RESETVALUE              _UINT32_(0x00)                                       /*  (QEI_VELHLDINV) Bit invert register  Reset Value */

#define QEI_VELHLDINV_Msk                     _UINT32_(0x00000000)                                 /* (QEI_VELHLDINV) Register Mask  */


/* -------- QEI_INTTMR : (QEI Offset: 0x70) (R/W 32) Interval Timer Register -------- */
#define QEI_INTTMR_INTTMR_Pos                 _UINT32_(0)                                          /* (QEI_INTTMR) Interval Timer Position */
#define QEI_INTTMR_INTTMR_Msk                 (_UINT32_(0xFFFFFFFF) << QEI_INTTMR_INTTMR_Pos)      /* (QEI_INTTMR) Interval Timer Mask */
#define QEI_INTTMR_INTTMR(value)              (QEI_INTTMR_INTTMR_Msk & (_UINT32_(value) << QEI_INTTMR_INTTMR_Pos)) /* Assignment of value for INTTMR in the QEI_INTTMR register */
#define QEI_INTTMR_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (QEI_INTTMR) Register Mask  */


/* -------- QEI_INTTMRCLR : (QEI Offset: 0x74) (R/W 32) Bit clear register -------- */
#define QEI_INTTMRCLR_RESETVALUE              _UINT32_(0x00)                                       /*  (QEI_INTTMRCLR) Bit clear register  Reset Value */

#define QEI_INTTMRCLR_Msk                     _UINT32_(0x00000000)                                 /* (QEI_INTTMRCLR) Register Mask  */


/* -------- QEI_INTTMRSET : (QEI Offset: 0x78) (R/W 32) Bit set register -------- */
#define QEI_INTTMRSET_RESETVALUE              _UINT32_(0x00)                                       /*  (QEI_INTTMRSET) Bit set register  Reset Value */

#define QEI_INTTMRSET_Msk                     _UINT32_(0x00000000)                                 /* (QEI_INTTMRSET) Register Mask  */


/* -------- QEI_INTTMRINV : (QEI Offset: 0x7C) (R/W 32) Bit invert register -------- */
#define QEI_INTTMRINV_RESETVALUE              _UINT32_(0x00)                                       /*  (QEI_INTTMRINV) Bit invert register  Reset Value */

#define QEI_INTTMRINV_Msk                     _UINT32_(0x00000000)                                 /* (QEI_INTTMRINV) Register Mask  */


/* -------- QEI_INTHLD : (QEI Offset: 0x80) (R/W 32) Interval Timer Holding Register -------- */
#define QEI_INTHLD_INTHLD_Pos                 _UINT32_(0)                                          /* (QEI_INTHLD) Interval Count Hold Position */
#define QEI_INTHLD_INTHLD_Msk                 (_UINT32_(0xFFFFFFFF) << QEI_INTHLD_INTHLD_Pos)      /* (QEI_INTHLD) Interval Count Hold Mask */
#define QEI_INTHLD_INTHLD(value)              (QEI_INTHLD_INTHLD_Msk & (_UINT32_(value) << QEI_INTHLD_INTHLD_Pos)) /* Assignment of value for INTHLD in the QEI_INTHLD register */
#define QEI_INTHLD_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (QEI_INTHLD) Register Mask  */


/* -------- QEI_INTHLDCLR : (QEI Offset: 0x84) (R/W 32) Bit clear register -------- */
#define QEI_INTHLDCLR_RESETVALUE              _UINT32_(0x00)                                       /*  (QEI_INTHLDCLR) Bit clear register  Reset Value */

#define QEI_INTHLDCLR_Msk                     _UINT32_(0x00000000)                                 /* (QEI_INTHLDCLR) Register Mask  */


/* -------- QEI_INTHLDSET : (QEI Offset: 0x88) (R/W 32) Bit set register -------- */
#define QEI_INTHLDSET_RESETVALUE              _UINT32_(0x00)                                       /*  (QEI_INTHLDSET) Bit set register  Reset Value */

#define QEI_INTHLDSET_Msk                     _UINT32_(0x00000000)                                 /* (QEI_INTHLDSET) Register Mask  */


/* -------- QEI_INTHLDINV : (QEI Offset: 0x8C) (R/W 32) Bit invert register -------- */
#define QEI_INTHLDINV_RESETVALUE              _UINT32_(0x00)                                       /*  (QEI_INTHLDINV) Bit invert register  Reset Value */

#define QEI_INTHLDINV_Msk                     _UINT32_(0x00000000)                                 /* (QEI_INTHLDINV) Register Mask  */


/* -------- QEI_INDXCNT : (QEI Offset: 0x90) (R/W 32) Index Counter Register -------- */
#define QEI_INDXCNT_INDXCNT_Pos               _UINT32_(0)                                          /* (QEI_INDXCNT) Index Counter Position */
#define QEI_INDXCNT_INDXCNT_Msk               (_UINT32_(0xFFFFFFFF) << QEI_INDXCNT_INDXCNT_Pos)    /* (QEI_INDXCNT) Index Counter Mask */
#define QEI_INDXCNT_INDXCNT(value)            (QEI_INDXCNT_INDXCNT_Msk & (_UINT32_(value) << QEI_INDXCNT_INDXCNT_Pos)) /* Assignment of value for INDXCNT in the QEI_INDXCNT register */
#define QEI_INDXCNT_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (QEI_INDXCNT) Register Mask  */


/* -------- QEI_INDXCNTCLR : (QEI Offset: 0x94) (R/W 32) Bit clear register -------- */
#define QEI_INDXCNTCLR_RESETVALUE             _UINT32_(0x00)                                       /*  (QEI_INDXCNTCLR) Bit clear register  Reset Value */

#define QEI_INDXCNTCLR_Msk                    _UINT32_(0x00000000)                                 /* (QEI_INDXCNTCLR) Register Mask  */


/* -------- QEI_INDXCNTSET : (QEI Offset: 0x98) (R/W 32) Bit set register -------- */
#define QEI_INDXCNTSET_RESETVALUE             _UINT32_(0x00)                                       /*  (QEI_INDXCNTSET) Bit set register  Reset Value */

#define QEI_INDXCNTSET_Msk                    _UINT32_(0x00000000)                                 /* (QEI_INDXCNTSET) Register Mask  */


/* -------- QEI_INDXCNTINV : (QEI Offset: 0x9C) (R/W 32) Bit invert register -------- */
#define QEI_INDXCNTINV_RESETVALUE             _UINT32_(0x00)                                       /*  (QEI_INDXCNTINV) Bit invert register  Reset Value */

#define QEI_INDXCNTINV_Msk                    _UINT32_(0x00000000)                                 /* (QEI_INDXCNTINV) Register Mask  */


/* -------- QEI_INDXHLD : (QEI Offset: 0xA0) (R/W 32) Index Counter Holding Register -------- */
#define QEI_INDXHLD_INDXHLD_Pos               _UINT32_(0)                                          /* (QEI_INDXHLD) Index Count Hold Position */
#define QEI_INDXHLD_INDXHLD_Msk               (_UINT32_(0xFFFFFFFF) << QEI_INDXHLD_INDXHLD_Pos)    /* (QEI_INDXHLD) Index Count Hold Mask */
#define QEI_INDXHLD_INDXHLD(value)            (QEI_INDXHLD_INDXHLD_Msk & (_UINT32_(value) << QEI_INDXHLD_INDXHLD_Pos)) /* Assignment of value for INDXHLD in the QEI_INDXHLD register */
#define QEI_INDXHLD_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (QEI_INDXHLD) Register Mask  */


/* -------- QEI_INDXHLDCLR : (QEI Offset: 0xA4) (R/W 32) Bit clear register -------- */
#define QEI_INDXHLDCLR_RESETVALUE             _UINT32_(0x00)                                       /*  (QEI_INDXHLDCLR) Bit clear register  Reset Value */

#define QEI_INDXHLDCLR_Msk                    _UINT32_(0x00000000)                                 /* (QEI_INDXHLDCLR) Register Mask  */


/* -------- QEI_INDXHLDSET : (QEI Offset: 0xA8) (R/W 32) Bit set register -------- */
#define QEI_INDXHLDSET_RESETVALUE             _UINT32_(0x00)                                       /*  (QEI_INDXHLDSET) Bit set register  Reset Value */

#define QEI_INDXHLDSET_Msk                    _UINT32_(0x00000000)                                 /* (QEI_INDXHLDSET) Register Mask  */


/* -------- QEI_INDXHLDINV : (QEI Offset: 0xAC) (R/W 32) Bit invert register -------- */
#define QEI_INDXHLDINV_RESETVALUE             _UINT32_(0x00)                                       /*  (QEI_INDXHLDINV) Bit invert register  Reset Value */

#define QEI_INDXHLDINV_Msk                    _UINT32_(0x00000000)                                 /* (QEI_INDXHLDINV) Register Mask  */


/* -------- QEI_QEIICC : (QEI Offset: 0xB0) (R/W 32) QEI Initialize/Capture/Compare Register -------- */
#define QEI_QEIICC_QEIICC_Pos                 _UINT32_(0)                                          /* (QEI_QEIICC) 32-bit Initialize/Capture/Compare High bits Position */
#define QEI_QEIICC_QEIICC_Msk                 (_UINT32_(0xFFFFFFFF) << QEI_QEIICC_QEIICC_Pos)      /* (QEI_QEIICC) 32-bit Initialize/Capture/Compare High bits Mask */
#define QEI_QEIICC_QEIICC(value)              (QEI_QEIICC_QEIICC_Msk & (_UINT32_(value) << QEI_QEIICC_QEIICC_Pos)) /* Assignment of value for QEIICC in the QEI_QEIICC register */
#define QEI_QEIICC_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (QEI_QEIICC) Register Mask  */


/* -------- QEI_QEIICCCLR : (QEI Offset: 0xB4) (R/W 32) Bit clear register -------- */
#define QEI_QEIICCCLR_RESETVALUE              _UINT32_(0x00)                                       /*  (QEI_QEIICCCLR) Bit clear register  Reset Value */

#define QEI_QEIICCCLR_Msk                     _UINT32_(0x00000000)                                 /* (QEI_QEIICCCLR) Register Mask  */


/* -------- QEI_QEIICCSET : (QEI Offset: 0xB8) (R/W 32) Bit set register -------- */
#define QEI_QEIICCSET_RESETVALUE              _UINT32_(0x00)                                       /*  (QEI_QEIICCSET) Bit set register  Reset Value */

#define QEI_QEIICCSET_Msk                     _UINT32_(0x00000000)                                 /* (QEI_QEIICCSET) Register Mask  */


/* -------- QEI_QEIICCINV : (QEI Offset: 0xBC) (R/W 32) Bit invert register -------- */
#define QEI_QEIICCINV_RESETVALUE              _UINT32_(0x00)                                       /*  (QEI_QEIICCINV) Bit invert register  Reset Value */

#define QEI_QEIICCINV_Msk                     _UINT32_(0x00000000)                                 /* (QEI_QEIICCINV) Register Mask  */


/* -------- QEI_QEICMPL : (QEI Offset: 0xC0) (R/W 32) Capture Low Register -------- */
#define QEI_QEICMPL_QEICMPL_Pos               _UINT32_(0)                                          /* (QEI_QEICMPL) 32-bit Compare Low Value bits Position */
#define QEI_QEICMPL_QEICMPL_Msk               (_UINT32_(0xFFFFFFFF) << QEI_QEICMPL_QEICMPL_Pos)    /* (QEI_QEICMPL) 32-bit Compare Low Value bits Mask */
#define QEI_QEICMPL_QEICMPL(value)            (QEI_QEICMPL_QEICMPL_Msk & (_UINT32_(value) << QEI_QEICMPL_QEICMPL_Pos)) /* Assignment of value for QEICMPL in the QEI_QEICMPL register */
#define QEI_QEICMPL_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (QEI_QEICMPL) Register Mask  */


/* -------- QEI_QEICMPLCLR : (QEI Offset: 0xC4) (R/W 32) Bit clear register -------- */
#define QEI_QEICMPLCLR_RESETVALUE             _UINT32_(0x00)                                       /*  (QEI_QEICMPLCLR) Bit clear register  Reset Value */

#define QEI_QEICMPLCLR_Msk                    _UINT32_(0x00000000)                                 /* (QEI_QEICMPLCLR) Register Mask  */


/* -------- QEI_QEICMPLSET : (QEI Offset: 0xC8) (R/W 32) Bit set register -------- */
#define QEI_QEICMPLSET_RESETVALUE             _UINT32_(0x00)                                       /*  (QEI_QEICMPLSET) Bit set register  Reset Value */

#define QEI_QEICMPLSET_Msk                    _UINT32_(0x00000000)                                 /* (QEI_QEICMPLSET) Register Mask  */


/* -------- QEI_QEICMPLINV : (QEI Offset: 0xCC) (R/W 32) Bit invert register -------- */
#define QEI_QEICMPLINV_RESETVALUE             _UINT32_(0x00)                                       /*  (QEI_QEICMPLINV) Bit invert register  Reset Value */

#define QEI_QEICMPLINV_Msk                    _UINT32_(0x00000000)                                 /* (QEI_QEICMPLINV) Register Mask  */


/* QEI register offsets definitions */
#define QEI_QEICON_REG_OFST            _UINT32_(0x00)      /* (QEI_QEICON) QEI Control Register Offset */
#define QEI_QEICONCLR_REG_OFST         _UINT32_(0x04)      /* (QEI_QEICONCLR) Bit clear register Offset */
#define QEI_QEICONSET_REG_OFST         _UINT32_(0x08)      /* (QEI_QEICONSET) Bit set register Offset */
#define QEI_QEICONINV_REG_OFST         _UINT32_(0x0C)      /* (QEI_QEICONINV) Bit invert register Offset */
#define QEI_QEIIOC_REG_OFST            _UINT32_(0x10)      /* (QEI_QEIIOC) QEI I/O Control Register Offset */
#define QEI_QQEIIOCCLR_REG_OFST        _UINT32_(0x14)      /* (QEI_QQEIIOCCLR) Bit clear register Offset */
#define QEI_QEIIOCSET_REG_OFST         _UINT32_(0x18)      /* (QEI_QEIIOCSET) Bit set register Offset */
#define QEI_QEIIOCINV_REG_OFST         _UINT32_(0x1C)      /* (QEI_QEIIOCINV) Bit invert register Offset */
#define QEI_QEISTAT_REG_OFST           _UINT32_(0x20)      /* (QEI_QEISTAT) QEI Status Register Offset */
#define QEI_QEISTATCLR_REG_OFST        _UINT32_(0x24)      /* (QEI_QEISTATCLR) Bit clear register Offset */
#define QEI_QEISTATSET_REG_OFST        _UINT32_(0x28)      /* (QEI_QEISTATSET) Bit set register Offset */
#define QEI_QEISTATINV_REG_OFST        _UINT32_(0x2C)      /* (QEI_QEISTATINV) Bit invert register Offset */
#define QEI_POSCNT_REG_OFST            _UINT32_(0x30)      /* (QEI_POSCNT) Position Counter Register Offset */
#define QEI_POSCNTCLR_REG_OFST         _UINT32_(0x34)      /* (QEI_POSCNTCLR) Bit clear register Offset */
#define QEI_POSCNTSET_REG_OFST         _UINT32_(0x38)      /* (QEI_POSCNTSET) Bit set register Offset */
#define QEI_POSCNTINV_REG_OFST         _UINT32_(0x3C)      /* (QEI_POSCNTINV) Bit invert register Offset */
#define QEI_POSHLD_REG_OFST            _UINT32_(0x40)      /* (QEI_POSHLD) Position Count Hold Register Offset */
#define QEI_POSHLDCLR_REG_OFST         _UINT32_(0x44)      /* (QEI_POSHLDCLR) Bit clear register Offset */
#define QEI_POSHLDSET_REG_OFST         _UINT32_(0x48)      /* (QEI_POSHLDSET) Bit set register Offset */
#define QEI_POSHLDINV_REG_OFST         _UINT32_(0x4C)      /* (QEI_POSHLDINV) Bit invert register Offset */
#define QEI_VELCNT_REG_OFST            _UINT32_(0x50)      /* (QEI_VELCNT) Velocity Counter Register Offset */
#define QEI_VELCNTCLR_REG_OFST         _UINT32_(0x54)      /* (QEI_VELCNTCLR) Bit clear register Offset */
#define QEI_VELCNTSET_REG_OFST         _UINT32_(0x58)      /* (QEI_VELCNTSET) Bit set register Offset */
#define QEI_VELCNTINV_REG_OFST         _UINT32_(0x5C)      /* (QEI_VELCNTINV) Bit invert register Offset */
#define QEI_VELHLD_REG_OFST            _UINT32_(0x60)      /* (QEI_VELHLD) Velocity Counter Holding Register Offset */
#define QEI_VELHLDCLR_REG_OFST         _UINT32_(0x64)      /* (QEI_VELHLDCLR) Bit clear register Offset */
#define QEI_VELHLDSET_REG_OFST         _UINT32_(0x68)      /* (QEI_VELHLDSET) Bit set register Offset */
#define QEI_VELHLDINV_REG_OFST         _UINT32_(0x6C)      /* (QEI_VELHLDINV) Bit invert register Offset */
#define QEI_INTTMR_REG_OFST            _UINT32_(0x70)      /* (QEI_INTTMR) Interval Timer Register Offset */
#define QEI_INTTMRCLR_REG_OFST         _UINT32_(0x74)      /* (QEI_INTTMRCLR) Bit clear register Offset */
#define QEI_INTTMRSET_REG_OFST         _UINT32_(0x78)      /* (QEI_INTTMRSET) Bit set register Offset */
#define QEI_INTTMRINV_REG_OFST         _UINT32_(0x7C)      /* (QEI_INTTMRINV) Bit invert register Offset */
#define QEI_INTHLD_REG_OFST            _UINT32_(0x80)      /* (QEI_INTHLD) Interval Timer Holding Register Offset */
#define QEI_INTHLDCLR_REG_OFST         _UINT32_(0x84)      /* (QEI_INTHLDCLR) Bit clear register Offset */
#define QEI_INTHLDSET_REG_OFST         _UINT32_(0x88)      /* (QEI_INTHLDSET) Bit set register Offset */
#define QEI_INTHLDINV_REG_OFST         _UINT32_(0x8C)      /* (QEI_INTHLDINV) Bit invert register Offset */
#define QEI_INDXCNT_REG_OFST           _UINT32_(0x90)      /* (QEI_INDXCNT) Index Counter Register Offset */
#define QEI_INDXCNTCLR_REG_OFST        _UINT32_(0x94)      /* (QEI_INDXCNTCLR) Bit clear register Offset */
#define QEI_INDXCNTSET_REG_OFST        _UINT32_(0x98)      /* (QEI_INDXCNTSET) Bit set register Offset */
#define QEI_INDXCNTINV_REG_OFST        _UINT32_(0x9C)      /* (QEI_INDXCNTINV) Bit invert register Offset */
#define QEI_INDXHLD_REG_OFST           _UINT32_(0xA0)      /* (QEI_INDXHLD) Index Counter Holding Register Offset */
#define QEI_INDXHLDCLR_REG_OFST        _UINT32_(0xA4)      /* (QEI_INDXHLDCLR) Bit clear register Offset */
#define QEI_INDXHLDSET_REG_OFST        _UINT32_(0xA8)      /* (QEI_INDXHLDSET) Bit set register Offset */
#define QEI_INDXHLDINV_REG_OFST        _UINT32_(0xAC)      /* (QEI_INDXHLDINV) Bit invert register Offset */
#define QEI_QEIICC_REG_OFST            _UINT32_(0xB0)      /* (QEI_QEIICC) QEI Initialize/Capture/Compare Register Offset */
#define QEI_QEIICCCLR_REG_OFST         _UINT32_(0xB4)      /* (QEI_QEIICCCLR) Bit clear register Offset */
#define QEI_QEIICCSET_REG_OFST         _UINT32_(0xB8)      /* (QEI_QEIICCSET) Bit set register Offset */
#define QEI_QEIICCINV_REG_OFST         _UINT32_(0xBC)      /* (QEI_QEIICCINV) Bit invert register Offset */
#define QEI_QEICMPL_REG_OFST           _UINT32_(0xC0)      /* (QEI_QEICMPL) Capture Low Register Offset */
#define QEI_QEICMPLCLR_REG_OFST        _UINT32_(0xC4)      /* (QEI_QEICMPLCLR) Bit clear register Offset */
#define QEI_QEICMPLSET_REG_OFST        _UINT32_(0xC8)      /* (QEI_QEICMPLSET) Bit set register Offset */
#define QEI_QEICMPLINV_REG_OFST        _UINT32_(0xCC)      /* (QEI_QEICMPLINV) Bit invert register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* QEI register API structure */
typedef struct
{
  __IO  uint32_t                       QEI_QEICON;         /* Offset: 0x00 (R/W  32) QEI Control Register */
  __IO  uint32_t                       QEI_QEICONCLR;      /* Offset: 0x04 (R/W  32) Bit clear register */
  __IO  uint32_t                       QEI_QEICONSET;      /* Offset: 0x08 (R/W  32) Bit set register */
  __IO  uint32_t                       QEI_QEICONINV;      /* Offset: 0x0C (R/W  32) Bit invert register */
  __IO  uint32_t                       QEI_QEIIOC;         /* Offset: 0x10 (R/W  32) QEI I/O Control Register */
  __IO  uint32_t                       QEI_QQEIIOCCLR;     /* Offset: 0x14 (R/W  32) Bit clear register */
  __IO  uint32_t                       QEI_QEIIOCSET;      /* Offset: 0x18 (R/W  32) Bit set register */
  __IO  uint32_t                       QEI_QEIIOCINV;      /* Offset: 0x1C (R/W  32) Bit invert register */
  __IO  uint32_t                       QEI_QEISTAT;        /* Offset: 0x20 (R/W  32) QEI Status Register */
  __IO  uint32_t                       QEI_QEISTATCLR;     /* Offset: 0x24 (R/W  32) Bit clear register */
  __IO  uint32_t                       QEI_QEISTATSET;     /* Offset: 0x28 (R/W  32) Bit set register */
  __IO  uint32_t                       QEI_QEISTATINV;     /* Offset: 0x2C (R/W  32) Bit invert register */
  __IO  uint32_t                       QEI_POSCNT;         /* Offset: 0x30 (R/W  32) Position Counter Register */
  __IO  uint32_t                       QEI_POSCNTCLR;      /* Offset: 0x34 (R/W  32) Bit clear register */
  __IO  uint32_t                       QEI_POSCNTSET;      /* Offset: 0x38 (R/W  32) Bit set register */
  __IO  uint32_t                       QEI_POSCNTINV;      /* Offset: 0x3C (R/W  32) Bit invert register */
  __IO  uint32_t                       QEI_POSHLD;         /* Offset: 0x40 (R/W  32) Position Count Hold Register */
  __IO  uint32_t                       QEI_POSHLDCLR;      /* Offset: 0x44 (R/W  32) Bit clear register */
  __IO  uint32_t                       QEI_POSHLDSET;      /* Offset: 0x48 (R/W  32) Bit set register */
  __IO  uint32_t                       QEI_POSHLDINV;      /* Offset: 0x4C (R/W  32) Bit invert register */
  __IO  uint32_t                       QEI_VELCNT;         /* Offset: 0x50 (R/W  32) Velocity Counter Register */
  __IO  uint32_t                       QEI_VELCNTCLR;      /* Offset: 0x54 (R/W  32) Bit clear register */
  __IO  uint32_t                       QEI_VELCNTSET;      /* Offset: 0x58 (R/W  32) Bit set register */
  __IO  uint32_t                       QEI_VELCNTINV;      /* Offset: 0x5C (R/W  32) Bit invert register */
  __IO  uint32_t                       QEI_VELHLD;         /* Offset: 0x60 (R/W  32) Velocity Counter Holding Register */
  __IO  uint32_t                       QEI_VELHLDCLR;      /* Offset: 0x64 (R/W  32) Bit clear register */
  __IO  uint32_t                       QEI_VELHLDSET;      /* Offset: 0x68 (R/W  32) Bit set register */
  __IO  uint32_t                       QEI_VELHLDINV;      /* Offset: 0x6C (R/W  32) Bit invert register */
  __IO  uint32_t                       QEI_INTTMR;         /* Offset: 0x70 (R/W  32) Interval Timer Register */
  __IO  uint32_t                       QEI_INTTMRCLR;      /* Offset: 0x74 (R/W  32) Bit clear register */
  __IO  uint32_t                       QEI_INTTMRSET;      /* Offset: 0x78 (R/W  32) Bit set register */
  __IO  uint32_t                       QEI_INTTMRINV;      /* Offset: 0x7C (R/W  32) Bit invert register */
  __IO  uint32_t                       QEI_INTHLD;         /* Offset: 0x80 (R/W  32) Interval Timer Holding Register */
  __IO  uint32_t                       QEI_INTHLDCLR;      /* Offset: 0x84 (R/W  32) Bit clear register */
  __IO  uint32_t                       QEI_INTHLDSET;      /* Offset: 0x88 (R/W  32) Bit set register */
  __IO  uint32_t                       QEI_INTHLDINV;      /* Offset: 0x8C (R/W  32) Bit invert register */
  __IO  uint32_t                       QEI_INDXCNT;        /* Offset: 0x90 (R/W  32) Index Counter Register */
  __IO  uint32_t                       QEI_INDXCNTCLR;     /* Offset: 0x94 (R/W  32) Bit clear register */
  __IO  uint32_t                       QEI_INDXCNTSET;     /* Offset: 0x98 (R/W  32) Bit set register */
  __IO  uint32_t                       QEI_INDXCNTINV;     /* Offset: 0x9C (R/W  32) Bit invert register */
  __IO  uint32_t                       QEI_INDXHLD;        /* Offset: 0xA0 (R/W  32) Index Counter Holding Register */
  __IO  uint32_t                       QEI_INDXHLDCLR;     /* Offset: 0xA4 (R/W  32) Bit clear register */
  __IO  uint32_t                       QEI_INDXHLDSET;     /* Offset: 0xA8 (R/W  32) Bit set register */
  __IO  uint32_t                       QEI_INDXHLDINV;     /* Offset: 0xAC (R/W  32) Bit invert register */
  __IO  uint32_t                       QEI_QEIICC;         /* Offset: 0xB0 (R/W  32) QEI Initialize/Capture/Compare Register */
  __IO  uint32_t                       QEI_QEIICCCLR;      /* Offset: 0xB4 (R/W  32) Bit clear register */
  __IO  uint32_t                       QEI_QEIICCSET;      /* Offset: 0xB8 (R/W  32) Bit set register */
  __IO  uint32_t                       QEI_QEIICCINV;      /* Offset: 0xBC (R/W  32) Bit invert register */
  __IO  uint32_t                       QEI_QEICMPL;        /* Offset: 0xC0 (R/W  32) Capture Low Register */
  __IO  uint32_t                       QEI_QEICMPLCLR;     /* Offset: 0xC4 (R/W  32) Bit clear register */
  __IO  uint32_t                       QEI_QEICMPLSET;     /* Offset: 0xC8 (R/W  32) Bit set register */
  __IO  uint32_t                       QEI_QEICMPLINV;     /* Offset: 0xCC (R/W  32) Bit invert register */
} qei_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32WM_BZ6_QEI_COMPONENT_H_ */
