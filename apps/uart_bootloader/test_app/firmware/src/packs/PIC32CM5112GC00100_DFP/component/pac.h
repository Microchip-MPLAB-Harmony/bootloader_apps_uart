/*
 * Component description for PAC
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
#ifndef _PIC32CMGC00_PAC_COMPONENT_H_
#define _PIC32CMGC00_PAC_COMPONENT_H_

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR PAC                       */
/* ************************************************************************** */

/* -------- PAC_CTRLA : (PAC Offset: 0x00) (R/W 32) Control A Register -------- */
#define PAC_CTRLA_RESETVALUE                  _UINT32_(0x00)                                       /*  (PAC_CTRLA) Control A Register  Reset Value */

#define PAC_CTRLA_PRIV_Pos                    _UINT32_(2)                                          /* (PAC_CTRLA) Privileged Access Only Position */
#define PAC_CTRLA_PRIV_Msk                    (_UINT32_(0x1) << PAC_CTRLA_PRIV_Pos)                /* (PAC_CTRLA) Privileged Access Only Mask */
#define PAC_CTRLA_PRIV(value)                 (PAC_CTRLA_PRIV_Msk & (_UINT32_(value) << PAC_CTRLA_PRIV_Pos)) /* Assignment of value for PRIV in the PAC_CTRLA register */
#define   PAC_CTRLA_PRIV_DISABLE_Val          _UINT32_(0x0)                                        /* (PAC_CTRLA) Macro register accessible in privileged and unprivileged accesses.  */
#define   PAC_CTRLA_PRIV_ENABLE_Val           _UINT32_(0x1)                                        /* (PAC_CTRLA) Macro registers only accessible in privileged accesses  */
#define PAC_CTRLA_PRIV_DISABLE                (PAC_CTRLA_PRIV_DISABLE_Val << PAC_CTRLA_PRIV_Pos)   /* (PAC_CTRLA) Macro register accessible in privileged and unprivileged accesses. Position */
#define PAC_CTRLA_PRIV_ENABLE                 (PAC_CTRLA_PRIV_ENABLE_Val << PAC_CTRLA_PRIV_Pos)    /* (PAC_CTRLA) Macro registers only accessible in privileged accesses Position */
#define PAC_CTRLA_Msk                         _UINT32_(0x00000004)                                 /* (PAC_CTRLA) Register Mask  */


/* -------- PAC_WRCTRL : (PAC Offset: 0x04) ( /W 32) Write Control Register -------- */
#define PAC_WRCTRL_RESETVALUE                 _UINT32_(0x00)                                       /*  (PAC_WRCTRL) Write Control Register  Reset Value */

#define PAC_WRCTRL_PERID_Pos                  _UINT32_(0)                                          /* (PAC_WRCTRL) Peripheral Identifier Position */
#define PAC_WRCTRL_PERID_Msk                  (_UINT32_(0xFF) << PAC_WRCTRL_PERID_Pos)             /* (PAC_WRCTRL) Peripheral Identifier Mask */
#define PAC_WRCTRL_PERID(value)               (PAC_WRCTRL_PERID_Msk & (_UINT32_(value) << PAC_WRCTRL_PERID_Pos)) /* Assignment of value for PERID in the PAC_WRCTRL register */
#define PAC_WRCTRL_KEY_Pos                    _UINT32_(16)                                         /* (PAC_WRCTRL) Peripheral Access Control Key Position */
#define PAC_WRCTRL_KEY_Msk                    (_UINT32_(0xFF) << PAC_WRCTRL_KEY_Pos)               /* (PAC_WRCTRL) Peripheral Access Control Key Mask */
#define PAC_WRCTRL_KEY(value)                 (PAC_WRCTRL_KEY_Msk & (_UINT32_(value) << PAC_WRCTRL_KEY_Pos)) /* Assignment of value for KEY in the PAC_WRCTRL register */
#define   PAC_WRCTRL_KEY_OFF_Val              _UINT32_(0x0)                                        /* (PAC_WRCTRL) OFF - No Action  */
#define   PAC_WRCTRL_KEY_CLEAR_Val            _UINT32_(0x1)                                        /* (PAC_WRCTRL) CLEAR - Clear the peripheral write protection  */
#define   PAC_WRCTRL_KEY_SET_Val              _UINT32_(0x2)                                        /* (PAC_WRCTRL) SET - Set the peripheral write protection  */
#define   PAC_WRCTRL_KEY_LOCK_Val             _UINT32_(0x3)                                        /* (PAC_WRCTRL) LOCK - Set and Lock the write protection state of the peripheral until the next reset  */
#define PAC_WRCTRL_KEY_OFF                    (PAC_WRCTRL_KEY_OFF_Val << PAC_WRCTRL_KEY_Pos)       /* (PAC_WRCTRL) OFF - No Action Position */
#define PAC_WRCTRL_KEY_CLEAR                  (PAC_WRCTRL_KEY_CLEAR_Val << PAC_WRCTRL_KEY_Pos)     /* (PAC_WRCTRL) CLEAR - Clear the peripheral write protection Position */
#define PAC_WRCTRL_KEY_SET                    (PAC_WRCTRL_KEY_SET_Val << PAC_WRCTRL_KEY_Pos)       /* (PAC_WRCTRL) SET - Set the peripheral write protection Position */
#define PAC_WRCTRL_KEY_LOCK                   (PAC_WRCTRL_KEY_LOCK_Val << PAC_WRCTRL_KEY_Pos)      /* (PAC_WRCTRL) LOCK - Set and Lock the write protection state of the peripheral until the next reset Position */
#define PAC_WRCTRL_Msk                        _UINT32_(0x00FF00FF)                                 /* (PAC_WRCTRL) Register Mask  */


/* -------- PAC_STATUS : (PAC Offset: 0x40) ( R/ 32) Peripheral Status n Register -------- */
#define PAC_STATUS_RESETVALUE                 _UINT32_(0x00)                                       /*  (PAC_STATUS) Peripheral Status n Register  Reset Value */

#define PAC_STATUS_PERID0_Pos                 _UINT32_(0)                                          /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID0_Msk                 (_UINT32_(0x1) << PAC_STATUS_PERID0_Pos)             /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID0(value)              (PAC_STATUS_PERID0_Msk & (_UINT32_(value) << PAC_STATUS_PERID0_Pos)) /* Assignment of value for PERID0 in the PAC_STATUS register */
#define   PAC_STATUS_PERID0_0_Val             _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID0_1_Val             _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID0_0                   (PAC_STATUS_PERID0_0_Val << PAC_STATUS_PERID0_Pos)   /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID0_1                   (PAC_STATUS_PERID0_1_Val << PAC_STATUS_PERID0_Pos)   /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID1_Pos                 _UINT32_(1)                                          /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID1_Msk                 (_UINT32_(0x1) << PAC_STATUS_PERID1_Pos)             /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID1(value)              (PAC_STATUS_PERID1_Msk & (_UINT32_(value) << PAC_STATUS_PERID1_Pos)) /* Assignment of value for PERID1 in the PAC_STATUS register */
#define   PAC_STATUS_PERID1_0_Val             _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID1_1_Val             _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID1_0                   (PAC_STATUS_PERID1_0_Val << PAC_STATUS_PERID1_Pos)   /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID1_1                   (PAC_STATUS_PERID1_1_Val << PAC_STATUS_PERID1_Pos)   /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID2_Pos                 _UINT32_(2)                                          /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID2_Msk                 (_UINT32_(0x1) << PAC_STATUS_PERID2_Pos)             /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID2(value)              (PAC_STATUS_PERID2_Msk & (_UINT32_(value) << PAC_STATUS_PERID2_Pos)) /* Assignment of value for PERID2 in the PAC_STATUS register */
#define   PAC_STATUS_PERID2_0_Val             _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID2_1_Val             _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID2_0                   (PAC_STATUS_PERID2_0_Val << PAC_STATUS_PERID2_Pos)   /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID2_1                   (PAC_STATUS_PERID2_1_Val << PAC_STATUS_PERID2_Pos)   /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID3_Pos                 _UINT32_(3)                                          /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID3_Msk                 (_UINT32_(0x1) << PAC_STATUS_PERID3_Pos)             /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID3(value)              (PAC_STATUS_PERID3_Msk & (_UINT32_(value) << PAC_STATUS_PERID3_Pos)) /* Assignment of value for PERID3 in the PAC_STATUS register */
#define   PAC_STATUS_PERID3_0_Val             _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID3_1_Val             _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID3_0                   (PAC_STATUS_PERID3_0_Val << PAC_STATUS_PERID3_Pos)   /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID3_1                   (PAC_STATUS_PERID3_1_Val << PAC_STATUS_PERID3_Pos)   /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID4_Pos                 _UINT32_(4)                                          /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID4_Msk                 (_UINT32_(0x1) << PAC_STATUS_PERID4_Pos)             /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID4(value)              (PAC_STATUS_PERID4_Msk & (_UINT32_(value) << PAC_STATUS_PERID4_Pos)) /* Assignment of value for PERID4 in the PAC_STATUS register */
#define   PAC_STATUS_PERID4_0_Val             _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID4_1_Val             _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID4_0                   (PAC_STATUS_PERID4_0_Val << PAC_STATUS_PERID4_Pos)   /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID4_1                   (PAC_STATUS_PERID4_1_Val << PAC_STATUS_PERID4_Pos)   /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID5_Pos                 _UINT32_(5)                                          /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID5_Msk                 (_UINT32_(0x1) << PAC_STATUS_PERID5_Pos)             /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID5(value)              (PAC_STATUS_PERID5_Msk & (_UINT32_(value) << PAC_STATUS_PERID5_Pos)) /* Assignment of value for PERID5 in the PAC_STATUS register */
#define   PAC_STATUS_PERID5_0_Val             _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID5_1_Val             _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID5_0                   (PAC_STATUS_PERID5_0_Val << PAC_STATUS_PERID5_Pos)   /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID5_1                   (PAC_STATUS_PERID5_1_Val << PAC_STATUS_PERID5_Pos)   /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID6_Pos                 _UINT32_(6)                                          /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID6_Msk                 (_UINT32_(0x1) << PAC_STATUS_PERID6_Pos)             /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID6(value)              (PAC_STATUS_PERID6_Msk & (_UINT32_(value) << PAC_STATUS_PERID6_Pos)) /* Assignment of value for PERID6 in the PAC_STATUS register */
#define   PAC_STATUS_PERID6_0_Val             _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID6_1_Val             _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID6_0                   (PAC_STATUS_PERID6_0_Val << PAC_STATUS_PERID6_Pos)   /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID6_1                   (PAC_STATUS_PERID6_1_Val << PAC_STATUS_PERID6_Pos)   /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID7_Pos                 _UINT32_(7)                                          /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID7_Msk                 (_UINT32_(0x1) << PAC_STATUS_PERID7_Pos)             /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID7(value)              (PAC_STATUS_PERID7_Msk & (_UINT32_(value) << PAC_STATUS_PERID7_Pos)) /* Assignment of value for PERID7 in the PAC_STATUS register */
#define   PAC_STATUS_PERID7_0_Val             _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID7_1_Val             _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID7_0                   (PAC_STATUS_PERID7_0_Val << PAC_STATUS_PERID7_Pos)   /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID7_1                   (PAC_STATUS_PERID7_1_Val << PAC_STATUS_PERID7_Pos)   /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID8_Pos                 _UINT32_(8)                                          /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID8_Msk                 (_UINT32_(0x1) << PAC_STATUS_PERID8_Pos)             /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID8(value)              (PAC_STATUS_PERID8_Msk & (_UINT32_(value) << PAC_STATUS_PERID8_Pos)) /* Assignment of value for PERID8 in the PAC_STATUS register */
#define   PAC_STATUS_PERID8_0_Val             _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID8_1_Val             _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID8_0                   (PAC_STATUS_PERID8_0_Val << PAC_STATUS_PERID8_Pos)   /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID8_1                   (PAC_STATUS_PERID8_1_Val << PAC_STATUS_PERID8_Pos)   /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID9_Pos                 _UINT32_(9)                                          /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID9_Msk                 (_UINT32_(0x1) << PAC_STATUS_PERID9_Pos)             /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID9(value)              (PAC_STATUS_PERID9_Msk & (_UINT32_(value) << PAC_STATUS_PERID9_Pos)) /* Assignment of value for PERID9 in the PAC_STATUS register */
#define   PAC_STATUS_PERID9_0_Val             _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID9_1_Val             _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID9_0                   (PAC_STATUS_PERID9_0_Val << PAC_STATUS_PERID9_Pos)   /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID9_1                   (PAC_STATUS_PERID9_1_Val << PAC_STATUS_PERID9_Pos)   /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID10_Pos                _UINT32_(10)                                         /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID10_Msk                (_UINT32_(0x1) << PAC_STATUS_PERID10_Pos)            /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID10(value)             (PAC_STATUS_PERID10_Msk & (_UINT32_(value) << PAC_STATUS_PERID10_Pos)) /* Assignment of value for PERID10 in the PAC_STATUS register */
#define   PAC_STATUS_PERID10_0_Val            _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID10_1_Val            _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID10_0                  (PAC_STATUS_PERID10_0_Val << PAC_STATUS_PERID10_Pos) /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID10_1                  (PAC_STATUS_PERID10_1_Val << PAC_STATUS_PERID10_Pos) /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID11_Pos                _UINT32_(11)                                         /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID11_Msk                (_UINT32_(0x1) << PAC_STATUS_PERID11_Pos)            /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID11(value)             (PAC_STATUS_PERID11_Msk & (_UINT32_(value) << PAC_STATUS_PERID11_Pos)) /* Assignment of value for PERID11 in the PAC_STATUS register */
#define   PAC_STATUS_PERID11_0_Val            _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID11_1_Val            _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID11_0                  (PAC_STATUS_PERID11_0_Val << PAC_STATUS_PERID11_Pos) /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID11_1                  (PAC_STATUS_PERID11_1_Val << PAC_STATUS_PERID11_Pos) /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID12_Pos                _UINT32_(12)                                         /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID12_Msk                (_UINT32_(0x1) << PAC_STATUS_PERID12_Pos)            /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID12(value)             (PAC_STATUS_PERID12_Msk & (_UINT32_(value) << PAC_STATUS_PERID12_Pos)) /* Assignment of value for PERID12 in the PAC_STATUS register */
#define   PAC_STATUS_PERID12_0_Val            _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID12_1_Val            _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID12_0                  (PAC_STATUS_PERID12_0_Val << PAC_STATUS_PERID12_Pos) /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID12_1                  (PAC_STATUS_PERID12_1_Val << PAC_STATUS_PERID12_Pos) /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID13_Pos                _UINT32_(13)                                         /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID13_Msk                (_UINT32_(0x1) << PAC_STATUS_PERID13_Pos)            /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID13(value)             (PAC_STATUS_PERID13_Msk & (_UINT32_(value) << PAC_STATUS_PERID13_Pos)) /* Assignment of value for PERID13 in the PAC_STATUS register */
#define   PAC_STATUS_PERID13_0_Val            _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID13_1_Val            _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID13_0                  (PAC_STATUS_PERID13_0_Val << PAC_STATUS_PERID13_Pos) /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID13_1                  (PAC_STATUS_PERID13_1_Val << PAC_STATUS_PERID13_Pos) /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID14_Pos                _UINT32_(14)                                         /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID14_Msk                (_UINT32_(0x1) << PAC_STATUS_PERID14_Pos)            /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID14(value)             (PAC_STATUS_PERID14_Msk & (_UINT32_(value) << PAC_STATUS_PERID14_Pos)) /* Assignment of value for PERID14 in the PAC_STATUS register */
#define   PAC_STATUS_PERID14_0_Val            _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID14_1_Val            _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID14_0                  (PAC_STATUS_PERID14_0_Val << PAC_STATUS_PERID14_Pos) /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID14_1                  (PAC_STATUS_PERID14_1_Val << PAC_STATUS_PERID14_Pos) /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID15_Pos                _UINT32_(15)                                         /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID15_Msk                (_UINT32_(0x1) << PAC_STATUS_PERID15_Pos)            /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID15(value)             (PAC_STATUS_PERID15_Msk & (_UINT32_(value) << PAC_STATUS_PERID15_Pos)) /* Assignment of value for PERID15 in the PAC_STATUS register */
#define   PAC_STATUS_PERID15_0_Val            _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID15_1_Val            _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID15_0                  (PAC_STATUS_PERID15_0_Val << PAC_STATUS_PERID15_Pos) /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID15_1                  (PAC_STATUS_PERID15_1_Val << PAC_STATUS_PERID15_Pos) /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID16_Pos                _UINT32_(16)                                         /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID16_Msk                (_UINT32_(0x1) << PAC_STATUS_PERID16_Pos)            /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID16(value)             (PAC_STATUS_PERID16_Msk & (_UINT32_(value) << PAC_STATUS_PERID16_Pos)) /* Assignment of value for PERID16 in the PAC_STATUS register */
#define   PAC_STATUS_PERID16_0_Val            _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID16_1_Val            _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID16_0                  (PAC_STATUS_PERID16_0_Val << PAC_STATUS_PERID16_Pos) /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID16_1                  (PAC_STATUS_PERID16_1_Val << PAC_STATUS_PERID16_Pos) /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID17_Pos                _UINT32_(17)                                         /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID17_Msk                (_UINT32_(0x1) << PAC_STATUS_PERID17_Pos)            /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID17(value)             (PAC_STATUS_PERID17_Msk & (_UINT32_(value) << PAC_STATUS_PERID17_Pos)) /* Assignment of value for PERID17 in the PAC_STATUS register */
#define   PAC_STATUS_PERID17_0_Val            _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID17_1_Val            _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID17_0                  (PAC_STATUS_PERID17_0_Val << PAC_STATUS_PERID17_Pos) /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID17_1                  (PAC_STATUS_PERID17_1_Val << PAC_STATUS_PERID17_Pos) /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID18_Pos                _UINT32_(18)                                         /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID18_Msk                (_UINT32_(0x1) << PAC_STATUS_PERID18_Pos)            /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID18(value)             (PAC_STATUS_PERID18_Msk & (_UINT32_(value) << PAC_STATUS_PERID18_Pos)) /* Assignment of value for PERID18 in the PAC_STATUS register */
#define   PAC_STATUS_PERID18_0_Val            _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID18_1_Val            _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID18_0                  (PAC_STATUS_PERID18_0_Val << PAC_STATUS_PERID18_Pos) /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID18_1                  (PAC_STATUS_PERID18_1_Val << PAC_STATUS_PERID18_Pos) /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID19_Pos                _UINT32_(19)                                         /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID19_Msk                (_UINT32_(0x1) << PAC_STATUS_PERID19_Pos)            /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID19(value)             (PAC_STATUS_PERID19_Msk & (_UINT32_(value) << PAC_STATUS_PERID19_Pos)) /* Assignment of value for PERID19 in the PAC_STATUS register */
#define   PAC_STATUS_PERID19_0_Val            _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID19_1_Val            _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID19_0                  (PAC_STATUS_PERID19_0_Val << PAC_STATUS_PERID19_Pos) /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID19_1                  (PAC_STATUS_PERID19_1_Val << PAC_STATUS_PERID19_Pos) /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID20_Pos                _UINT32_(20)                                         /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID20_Msk                (_UINT32_(0x1) << PAC_STATUS_PERID20_Pos)            /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID20(value)             (PAC_STATUS_PERID20_Msk & (_UINT32_(value) << PAC_STATUS_PERID20_Pos)) /* Assignment of value for PERID20 in the PAC_STATUS register */
#define   PAC_STATUS_PERID20_0_Val            _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID20_1_Val            _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID20_0                  (PAC_STATUS_PERID20_0_Val << PAC_STATUS_PERID20_Pos) /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID20_1                  (PAC_STATUS_PERID20_1_Val << PAC_STATUS_PERID20_Pos) /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID21_Pos                _UINT32_(21)                                         /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID21_Msk                (_UINT32_(0x1) << PAC_STATUS_PERID21_Pos)            /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID21(value)             (PAC_STATUS_PERID21_Msk & (_UINT32_(value) << PAC_STATUS_PERID21_Pos)) /* Assignment of value for PERID21 in the PAC_STATUS register */
#define   PAC_STATUS_PERID21_0_Val            _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID21_1_Val            _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID21_0                  (PAC_STATUS_PERID21_0_Val << PAC_STATUS_PERID21_Pos) /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID21_1                  (PAC_STATUS_PERID21_1_Val << PAC_STATUS_PERID21_Pos) /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID22_Pos                _UINT32_(22)                                         /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID22_Msk                (_UINT32_(0x1) << PAC_STATUS_PERID22_Pos)            /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID22(value)             (PAC_STATUS_PERID22_Msk & (_UINT32_(value) << PAC_STATUS_PERID22_Pos)) /* Assignment of value for PERID22 in the PAC_STATUS register */
#define   PAC_STATUS_PERID22_0_Val            _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID22_1_Val            _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID22_0                  (PAC_STATUS_PERID22_0_Val << PAC_STATUS_PERID22_Pos) /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID22_1                  (PAC_STATUS_PERID22_1_Val << PAC_STATUS_PERID22_Pos) /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID23_Pos                _UINT32_(23)                                         /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID23_Msk                (_UINT32_(0x1) << PAC_STATUS_PERID23_Pos)            /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID23(value)             (PAC_STATUS_PERID23_Msk & (_UINT32_(value) << PAC_STATUS_PERID23_Pos)) /* Assignment of value for PERID23 in the PAC_STATUS register */
#define   PAC_STATUS_PERID23_0_Val            _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID23_1_Val            _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID23_0                  (PAC_STATUS_PERID23_0_Val << PAC_STATUS_PERID23_Pos) /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID23_1                  (PAC_STATUS_PERID23_1_Val << PAC_STATUS_PERID23_Pos) /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID24_Pos                _UINT32_(24)                                         /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID24_Msk                (_UINT32_(0x1) << PAC_STATUS_PERID24_Pos)            /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID24(value)             (PAC_STATUS_PERID24_Msk & (_UINT32_(value) << PAC_STATUS_PERID24_Pos)) /* Assignment of value for PERID24 in the PAC_STATUS register */
#define   PAC_STATUS_PERID24_0_Val            _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID24_1_Val            _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID24_0                  (PAC_STATUS_PERID24_0_Val << PAC_STATUS_PERID24_Pos) /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID24_1                  (PAC_STATUS_PERID24_1_Val << PAC_STATUS_PERID24_Pos) /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID25_Pos                _UINT32_(25)                                         /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID25_Msk                (_UINT32_(0x1) << PAC_STATUS_PERID25_Pos)            /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID25(value)             (PAC_STATUS_PERID25_Msk & (_UINT32_(value) << PAC_STATUS_PERID25_Pos)) /* Assignment of value for PERID25 in the PAC_STATUS register */
#define   PAC_STATUS_PERID25_0_Val            _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID25_1_Val            _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID25_0                  (PAC_STATUS_PERID25_0_Val << PAC_STATUS_PERID25_Pos) /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID25_1                  (PAC_STATUS_PERID25_1_Val << PAC_STATUS_PERID25_Pos) /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID26_Pos                _UINT32_(26)                                         /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID26_Msk                (_UINT32_(0x1) << PAC_STATUS_PERID26_Pos)            /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID26(value)             (PAC_STATUS_PERID26_Msk & (_UINT32_(value) << PAC_STATUS_PERID26_Pos)) /* Assignment of value for PERID26 in the PAC_STATUS register */
#define   PAC_STATUS_PERID26_0_Val            _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID26_1_Val            _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID26_0                  (PAC_STATUS_PERID26_0_Val << PAC_STATUS_PERID26_Pos) /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID26_1                  (PAC_STATUS_PERID26_1_Val << PAC_STATUS_PERID26_Pos) /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID27_Pos                _UINT32_(27)                                         /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID27_Msk                (_UINT32_(0x1) << PAC_STATUS_PERID27_Pos)            /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID27(value)             (PAC_STATUS_PERID27_Msk & (_UINT32_(value) << PAC_STATUS_PERID27_Pos)) /* Assignment of value for PERID27 in the PAC_STATUS register */
#define   PAC_STATUS_PERID27_0_Val            _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID27_1_Val            _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID27_0                  (PAC_STATUS_PERID27_0_Val << PAC_STATUS_PERID27_Pos) /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID27_1                  (PAC_STATUS_PERID27_1_Val << PAC_STATUS_PERID27_Pos) /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID28_Pos                _UINT32_(28)                                         /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID28_Msk                (_UINT32_(0x1) << PAC_STATUS_PERID28_Pos)            /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID28(value)             (PAC_STATUS_PERID28_Msk & (_UINT32_(value) << PAC_STATUS_PERID28_Pos)) /* Assignment of value for PERID28 in the PAC_STATUS register */
#define   PAC_STATUS_PERID28_0_Val            _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID28_1_Val            _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID28_0                  (PAC_STATUS_PERID28_0_Val << PAC_STATUS_PERID28_Pos) /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID28_1                  (PAC_STATUS_PERID28_1_Val << PAC_STATUS_PERID28_Pos) /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID29_Pos                _UINT32_(29)                                         /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID29_Msk                (_UINT32_(0x1) << PAC_STATUS_PERID29_Pos)            /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID29(value)             (PAC_STATUS_PERID29_Msk & (_UINT32_(value) << PAC_STATUS_PERID29_Pos)) /* Assignment of value for PERID29 in the PAC_STATUS register */
#define   PAC_STATUS_PERID29_0_Val            _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID29_1_Val            _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID29_0                  (PAC_STATUS_PERID29_0_Val << PAC_STATUS_PERID29_Pos) /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID29_1                  (PAC_STATUS_PERID29_1_Val << PAC_STATUS_PERID29_Pos) /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID30_Pos                _UINT32_(30)                                         /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID30_Msk                (_UINT32_(0x1) << PAC_STATUS_PERID30_Pos)            /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID30(value)             (PAC_STATUS_PERID30_Msk & (_UINT32_(value) << PAC_STATUS_PERID30_Pos)) /* Assignment of value for PERID30 in the PAC_STATUS register */
#define   PAC_STATUS_PERID30_0_Val            _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID30_1_Val            _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID30_0                  (PAC_STATUS_PERID30_0_Val << PAC_STATUS_PERID30_Pos) /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID30_1                  (PAC_STATUS_PERID30_1_Val << PAC_STATUS_PERID30_Pos) /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_PERID31_Pos                _UINT32_(31)                                         /* (PAC_STATUS) PERID Write Protection Status Position */
#define PAC_STATUS_PERID31_Msk                (_UINT32_(0x1) << PAC_STATUS_PERID31_Pos)            /* (PAC_STATUS) PERID Write Protection Status Mask */
#define PAC_STATUS_PERID31(value)             (PAC_STATUS_PERID31_Msk & (_UINT32_(value) << PAC_STATUS_PERID31_Pos)) /* Assignment of value for PERID31 in the PAC_STATUS register */
#define   PAC_STATUS_PERID31_0_Val            _UINT32_(0x0)                                        /* (PAC_STATUS) Write Protection disabled  */
#define   PAC_STATUS_PERID31_1_Val            _UINT32_(0x1)                                        /* (PAC_STATUS) Write Protection enabled  */
#define PAC_STATUS_PERID31_0                  (PAC_STATUS_PERID31_0_Val << PAC_STATUS_PERID31_Pos) /* (PAC_STATUS) Write Protection disabled Position */
#define PAC_STATUS_PERID31_1                  (PAC_STATUS_PERID31_1_Val << PAC_STATUS_PERID31_Pos) /* (PAC_STATUS) Write Protection enabled Position */
#define PAC_STATUS_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (PAC_STATUS) Register Mask  */

#define PAC_STATUS_PERID_Pos                  _UINT32_(0)                                          /* (PAC_STATUS Position) PERID Write Protection Status */
#define PAC_STATUS_PERID_Msk                  (_UINT32_(0xFFFFFFFF) << PAC_STATUS_PERID_Pos)       /* (PAC_STATUS Mask) PERID */
#define PAC_STATUS_PERID(value)               (PAC_STATUS_PERID_Msk & (_UINT32_(value) << PAC_STATUS_PERID_Pos)) 

/* -------- PAC_LOCK : (PAC Offset: 0x50) ( R/ 32) Peripheral Lock n Register -------- */
#define PAC_LOCK_RESETVALUE                   _UINT32_(0x00)                                       /*  (PAC_LOCK) Peripheral Lock n Register  Reset Value */

#define PAC_LOCK_PERID0_Pos                   _UINT32_(0)                                          /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID0_Msk                   (_UINT32_(0x1) << PAC_LOCK_PERID0_Pos)               /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID0(value)                (PAC_LOCK_PERID0_Msk & (_UINT32_(value) << PAC_LOCK_PERID0_Pos)) /* Assignment of value for PERID0 in the PAC_LOCK register */
#define   PAC_LOCK_PERID0_0_Val               _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID0_1_Val               _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID0_0                     (PAC_LOCK_PERID0_0_Val << PAC_LOCK_PERID0_Pos)       /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID0_1                     (PAC_LOCK_PERID0_1_Val << PAC_LOCK_PERID0_Pos)       /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID1_Pos                   _UINT32_(1)                                          /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID1_Msk                   (_UINT32_(0x1) << PAC_LOCK_PERID1_Pos)               /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID1(value)                (PAC_LOCK_PERID1_Msk & (_UINT32_(value) << PAC_LOCK_PERID1_Pos)) /* Assignment of value for PERID1 in the PAC_LOCK register */
#define   PAC_LOCK_PERID1_0_Val               _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID1_1_Val               _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID1_0                     (PAC_LOCK_PERID1_0_Val << PAC_LOCK_PERID1_Pos)       /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID1_1                     (PAC_LOCK_PERID1_1_Val << PAC_LOCK_PERID1_Pos)       /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID2_Pos                   _UINT32_(2)                                          /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID2_Msk                   (_UINT32_(0x1) << PAC_LOCK_PERID2_Pos)               /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID2(value)                (PAC_LOCK_PERID2_Msk & (_UINT32_(value) << PAC_LOCK_PERID2_Pos)) /* Assignment of value for PERID2 in the PAC_LOCK register */
#define   PAC_LOCK_PERID2_0_Val               _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID2_1_Val               _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID2_0                     (PAC_LOCK_PERID2_0_Val << PAC_LOCK_PERID2_Pos)       /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID2_1                     (PAC_LOCK_PERID2_1_Val << PAC_LOCK_PERID2_Pos)       /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID3_Pos                   _UINT32_(3)                                          /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID3_Msk                   (_UINT32_(0x1) << PAC_LOCK_PERID3_Pos)               /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID3(value)                (PAC_LOCK_PERID3_Msk & (_UINT32_(value) << PAC_LOCK_PERID3_Pos)) /* Assignment of value for PERID3 in the PAC_LOCK register */
#define   PAC_LOCK_PERID3_0_Val               _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID3_1_Val               _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID3_0                     (PAC_LOCK_PERID3_0_Val << PAC_LOCK_PERID3_Pos)       /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID3_1                     (PAC_LOCK_PERID3_1_Val << PAC_LOCK_PERID3_Pos)       /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID4_Pos                   _UINT32_(4)                                          /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID4_Msk                   (_UINT32_(0x1) << PAC_LOCK_PERID4_Pos)               /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID4(value)                (PAC_LOCK_PERID4_Msk & (_UINT32_(value) << PAC_LOCK_PERID4_Pos)) /* Assignment of value for PERID4 in the PAC_LOCK register */
#define   PAC_LOCK_PERID4_0_Val               _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID4_1_Val               _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID4_0                     (PAC_LOCK_PERID4_0_Val << PAC_LOCK_PERID4_Pos)       /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID4_1                     (PAC_LOCK_PERID4_1_Val << PAC_LOCK_PERID4_Pos)       /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID5_Pos                   _UINT32_(5)                                          /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID5_Msk                   (_UINT32_(0x1) << PAC_LOCK_PERID5_Pos)               /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID5(value)                (PAC_LOCK_PERID5_Msk & (_UINT32_(value) << PAC_LOCK_PERID5_Pos)) /* Assignment of value for PERID5 in the PAC_LOCK register */
#define   PAC_LOCK_PERID5_0_Val               _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID5_1_Val               _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID5_0                     (PAC_LOCK_PERID5_0_Val << PAC_LOCK_PERID5_Pos)       /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID5_1                     (PAC_LOCK_PERID5_1_Val << PAC_LOCK_PERID5_Pos)       /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID6_Pos                   _UINT32_(6)                                          /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID6_Msk                   (_UINT32_(0x1) << PAC_LOCK_PERID6_Pos)               /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID6(value)                (PAC_LOCK_PERID6_Msk & (_UINT32_(value) << PAC_LOCK_PERID6_Pos)) /* Assignment of value for PERID6 in the PAC_LOCK register */
#define   PAC_LOCK_PERID6_0_Val               _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID6_1_Val               _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID6_0                     (PAC_LOCK_PERID6_0_Val << PAC_LOCK_PERID6_Pos)       /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID6_1                     (PAC_LOCK_PERID6_1_Val << PAC_LOCK_PERID6_Pos)       /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID7_Pos                   _UINT32_(7)                                          /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID7_Msk                   (_UINT32_(0x1) << PAC_LOCK_PERID7_Pos)               /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID7(value)                (PAC_LOCK_PERID7_Msk & (_UINT32_(value) << PAC_LOCK_PERID7_Pos)) /* Assignment of value for PERID7 in the PAC_LOCK register */
#define   PAC_LOCK_PERID7_0_Val               _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID7_1_Val               _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID7_0                     (PAC_LOCK_PERID7_0_Val << PAC_LOCK_PERID7_Pos)       /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID7_1                     (PAC_LOCK_PERID7_1_Val << PAC_LOCK_PERID7_Pos)       /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID8_Pos                   _UINT32_(8)                                          /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID8_Msk                   (_UINT32_(0x1) << PAC_LOCK_PERID8_Pos)               /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID8(value)                (PAC_LOCK_PERID8_Msk & (_UINT32_(value) << PAC_LOCK_PERID8_Pos)) /* Assignment of value for PERID8 in the PAC_LOCK register */
#define   PAC_LOCK_PERID8_0_Val               _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID8_1_Val               _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID8_0                     (PAC_LOCK_PERID8_0_Val << PAC_LOCK_PERID8_Pos)       /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID8_1                     (PAC_LOCK_PERID8_1_Val << PAC_LOCK_PERID8_Pos)       /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID9_Pos                   _UINT32_(9)                                          /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID9_Msk                   (_UINT32_(0x1) << PAC_LOCK_PERID9_Pos)               /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID9(value)                (PAC_LOCK_PERID9_Msk & (_UINT32_(value) << PAC_LOCK_PERID9_Pos)) /* Assignment of value for PERID9 in the PAC_LOCK register */
#define   PAC_LOCK_PERID9_0_Val               _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID9_1_Val               _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID9_0                     (PAC_LOCK_PERID9_0_Val << PAC_LOCK_PERID9_Pos)       /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID9_1                     (PAC_LOCK_PERID9_1_Val << PAC_LOCK_PERID9_Pos)       /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID10_Pos                  _UINT32_(10)                                         /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID10_Msk                  (_UINT32_(0x1) << PAC_LOCK_PERID10_Pos)              /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID10(value)               (PAC_LOCK_PERID10_Msk & (_UINT32_(value) << PAC_LOCK_PERID10_Pos)) /* Assignment of value for PERID10 in the PAC_LOCK register */
#define   PAC_LOCK_PERID10_0_Val              _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID10_1_Val              _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID10_0                    (PAC_LOCK_PERID10_0_Val << PAC_LOCK_PERID10_Pos)     /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID10_1                    (PAC_LOCK_PERID10_1_Val << PAC_LOCK_PERID10_Pos)     /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID11_Pos                  _UINT32_(11)                                         /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID11_Msk                  (_UINT32_(0x1) << PAC_LOCK_PERID11_Pos)              /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID11(value)               (PAC_LOCK_PERID11_Msk & (_UINT32_(value) << PAC_LOCK_PERID11_Pos)) /* Assignment of value for PERID11 in the PAC_LOCK register */
#define   PAC_LOCK_PERID11_0_Val              _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID11_1_Val              _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID11_0                    (PAC_LOCK_PERID11_0_Val << PAC_LOCK_PERID11_Pos)     /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID11_1                    (PAC_LOCK_PERID11_1_Val << PAC_LOCK_PERID11_Pos)     /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID12_Pos                  _UINT32_(12)                                         /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID12_Msk                  (_UINT32_(0x1) << PAC_LOCK_PERID12_Pos)              /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID12(value)               (PAC_LOCK_PERID12_Msk & (_UINT32_(value) << PAC_LOCK_PERID12_Pos)) /* Assignment of value for PERID12 in the PAC_LOCK register */
#define   PAC_LOCK_PERID12_0_Val              _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID12_1_Val              _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID12_0                    (PAC_LOCK_PERID12_0_Val << PAC_LOCK_PERID12_Pos)     /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID12_1                    (PAC_LOCK_PERID12_1_Val << PAC_LOCK_PERID12_Pos)     /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID13_Pos                  _UINT32_(13)                                         /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID13_Msk                  (_UINT32_(0x1) << PAC_LOCK_PERID13_Pos)              /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID13(value)               (PAC_LOCK_PERID13_Msk & (_UINT32_(value) << PAC_LOCK_PERID13_Pos)) /* Assignment of value for PERID13 in the PAC_LOCK register */
#define   PAC_LOCK_PERID13_0_Val              _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID13_1_Val              _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID13_0                    (PAC_LOCK_PERID13_0_Val << PAC_LOCK_PERID13_Pos)     /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID13_1                    (PAC_LOCK_PERID13_1_Val << PAC_LOCK_PERID13_Pos)     /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID14_Pos                  _UINT32_(14)                                         /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID14_Msk                  (_UINT32_(0x1) << PAC_LOCK_PERID14_Pos)              /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID14(value)               (PAC_LOCK_PERID14_Msk & (_UINT32_(value) << PAC_LOCK_PERID14_Pos)) /* Assignment of value for PERID14 in the PAC_LOCK register */
#define   PAC_LOCK_PERID14_0_Val              _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID14_1_Val              _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID14_0                    (PAC_LOCK_PERID14_0_Val << PAC_LOCK_PERID14_Pos)     /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID14_1                    (PAC_LOCK_PERID14_1_Val << PAC_LOCK_PERID14_Pos)     /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID15_Pos                  _UINT32_(15)                                         /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID15_Msk                  (_UINT32_(0x1) << PAC_LOCK_PERID15_Pos)              /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID15(value)               (PAC_LOCK_PERID15_Msk & (_UINT32_(value) << PAC_LOCK_PERID15_Pos)) /* Assignment of value for PERID15 in the PAC_LOCK register */
#define   PAC_LOCK_PERID15_0_Val              _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID15_1_Val              _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID15_0                    (PAC_LOCK_PERID15_0_Val << PAC_LOCK_PERID15_Pos)     /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID15_1                    (PAC_LOCK_PERID15_1_Val << PAC_LOCK_PERID15_Pos)     /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID16_Pos                  _UINT32_(16)                                         /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID16_Msk                  (_UINT32_(0x1) << PAC_LOCK_PERID16_Pos)              /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID16(value)               (PAC_LOCK_PERID16_Msk & (_UINT32_(value) << PAC_LOCK_PERID16_Pos)) /* Assignment of value for PERID16 in the PAC_LOCK register */
#define   PAC_LOCK_PERID16_0_Val              _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID16_1_Val              _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID16_0                    (PAC_LOCK_PERID16_0_Val << PAC_LOCK_PERID16_Pos)     /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID16_1                    (PAC_LOCK_PERID16_1_Val << PAC_LOCK_PERID16_Pos)     /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID17_Pos                  _UINT32_(17)                                         /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID17_Msk                  (_UINT32_(0x1) << PAC_LOCK_PERID17_Pos)              /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID17(value)               (PAC_LOCK_PERID17_Msk & (_UINT32_(value) << PAC_LOCK_PERID17_Pos)) /* Assignment of value for PERID17 in the PAC_LOCK register */
#define   PAC_LOCK_PERID17_0_Val              _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID17_1_Val              _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID17_0                    (PAC_LOCK_PERID17_0_Val << PAC_LOCK_PERID17_Pos)     /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID17_1                    (PAC_LOCK_PERID17_1_Val << PAC_LOCK_PERID17_Pos)     /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID18_Pos                  _UINT32_(18)                                         /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID18_Msk                  (_UINT32_(0x1) << PAC_LOCK_PERID18_Pos)              /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID18(value)               (PAC_LOCK_PERID18_Msk & (_UINT32_(value) << PAC_LOCK_PERID18_Pos)) /* Assignment of value for PERID18 in the PAC_LOCK register */
#define   PAC_LOCK_PERID18_0_Val              _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID18_1_Val              _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID18_0                    (PAC_LOCK_PERID18_0_Val << PAC_LOCK_PERID18_Pos)     /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID18_1                    (PAC_LOCK_PERID18_1_Val << PAC_LOCK_PERID18_Pos)     /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID19_Pos                  _UINT32_(19)                                         /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID19_Msk                  (_UINT32_(0x1) << PAC_LOCK_PERID19_Pos)              /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID19(value)               (PAC_LOCK_PERID19_Msk & (_UINT32_(value) << PAC_LOCK_PERID19_Pos)) /* Assignment of value for PERID19 in the PAC_LOCK register */
#define   PAC_LOCK_PERID19_0_Val              _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID19_1_Val              _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID19_0                    (PAC_LOCK_PERID19_0_Val << PAC_LOCK_PERID19_Pos)     /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID19_1                    (PAC_LOCK_PERID19_1_Val << PAC_LOCK_PERID19_Pos)     /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID20_Pos                  _UINT32_(20)                                         /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID20_Msk                  (_UINT32_(0x1) << PAC_LOCK_PERID20_Pos)              /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID20(value)               (PAC_LOCK_PERID20_Msk & (_UINT32_(value) << PAC_LOCK_PERID20_Pos)) /* Assignment of value for PERID20 in the PAC_LOCK register */
#define   PAC_LOCK_PERID20_0_Val              _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID20_1_Val              _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID20_0                    (PAC_LOCK_PERID20_0_Val << PAC_LOCK_PERID20_Pos)     /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID20_1                    (PAC_LOCK_PERID20_1_Val << PAC_LOCK_PERID20_Pos)     /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID21_Pos                  _UINT32_(21)                                         /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID21_Msk                  (_UINT32_(0x1) << PAC_LOCK_PERID21_Pos)              /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID21(value)               (PAC_LOCK_PERID21_Msk & (_UINT32_(value) << PAC_LOCK_PERID21_Pos)) /* Assignment of value for PERID21 in the PAC_LOCK register */
#define   PAC_LOCK_PERID21_0_Val              _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID21_1_Val              _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID21_0                    (PAC_LOCK_PERID21_0_Val << PAC_LOCK_PERID21_Pos)     /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID21_1                    (PAC_LOCK_PERID21_1_Val << PAC_LOCK_PERID21_Pos)     /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID22_Pos                  _UINT32_(22)                                         /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID22_Msk                  (_UINT32_(0x1) << PAC_LOCK_PERID22_Pos)              /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID22(value)               (PAC_LOCK_PERID22_Msk & (_UINT32_(value) << PAC_LOCK_PERID22_Pos)) /* Assignment of value for PERID22 in the PAC_LOCK register */
#define   PAC_LOCK_PERID22_0_Val              _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID22_1_Val              _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID22_0                    (PAC_LOCK_PERID22_0_Val << PAC_LOCK_PERID22_Pos)     /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID22_1                    (PAC_LOCK_PERID22_1_Val << PAC_LOCK_PERID22_Pos)     /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID23_Pos                  _UINT32_(23)                                         /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID23_Msk                  (_UINT32_(0x1) << PAC_LOCK_PERID23_Pos)              /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID23(value)               (PAC_LOCK_PERID23_Msk & (_UINT32_(value) << PAC_LOCK_PERID23_Pos)) /* Assignment of value for PERID23 in the PAC_LOCK register */
#define   PAC_LOCK_PERID23_0_Val              _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID23_1_Val              _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID23_0                    (PAC_LOCK_PERID23_0_Val << PAC_LOCK_PERID23_Pos)     /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID23_1                    (PAC_LOCK_PERID23_1_Val << PAC_LOCK_PERID23_Pos)     /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID24_Pos                  _UINT32_(24)                                         /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID24_Msk                  (_UINT32_(0x1) << PAC_LOCK_PERID24_Pos)              /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID24(value)               (PAC_LOCK_PERID24_Msk & (_UINT32_(value) << PAC_LOCK_PERID24_Pos)) /* Assignment of value for PERID24 in the PAC_LOCK register */
#define   PAC_LOCK_PERID24_0_Val              _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID24_1_Val              _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID24_0                    (PAC_LOCK_PERID24_0_Val << PAC_LOCK_PERID24_Pos)     /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID24_1                    (PAC_LOCK_PERID24_1_Val << PAC_LOCK_PERID24_Pos)     /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID25_Pos                  _UINT32_(25)                                         /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID25_Msk                  (_UINT32_(0x1) << PAC_LOCK_PERID25_Pos)              /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID25(value)               (PAC_LOCK_PERID25_Msk & (_UINT32_(value) << PAC_LOCK_PERID25_Pos)) /* Assignment of value for PERID25 in the PAC_LOCK register */
#define   PAC_LOCK_PERID25_0_Val              _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID25_1_Val              _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID25_0                    (PAC_LOCK_PERID25_0_Val << PAC_LOCK_PERID25_Pos)     /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID25_1                    (PAC_LOCK_PERID25_1_Val << PAC_LOCK_PERID25_Pos)     /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID26_Pos                  _UINT32_(26)                                         /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID26_Msk                  (_UINT32_(0x1) << PAC_LOCK_PERID26_Pos)              /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID26(value)               (PAC_LOCK_PERID26_Msk & (_UINT32_(value) << PAC_LOCK_PERID26_Pos)) /* Assignment of value for PERID26 in the PAC_LOCK register */
#define   PAC_LOCK_PERID26_0_Val              _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID26_1_Val              _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID26_0                    (PAC_LOCK_PERID26_0_Val << PAC_LOCK_PERID26_Pos)     /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID26_1                    (PAC_LOCK_PERID26_1_Val << PAC_LOCK_PERID26_Pos)     /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID27_Pos                  _UINT32_(27)                                         /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID27_Msk                  (_UINT32_(0x1) << PAC_LOCK_PERID27_Pos)              /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID27(value)               (PAC_LOCK_PERID27_Msk & (_UINT32_(value) << PAC_LOCK_PERID27_Pos)) /* Assignment of value for PERID27 in the PAC_LOCK register */
#define   PAC_LOCK_PERID27_0_Val              _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID27_1_Val              _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID27_0                    (PAC_LOCK_PERID27_0_Val << PAC_LOCK_PERID27_Pos)     /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID27_1                    (PAC_LOCK_PERID27_1_Val << PAC_LOCK_PERID27_Pos)     /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID28_Pos                  _UINT32_(28)                                         /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID28_Msk                  (_UINT32_(0x1) << PAC_LOCK_PERID28_Pos)              /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID28(value)               (PAC_LOCK_PERID28_Msk & (_UINT32_(value) << PAC_LOCK_PERID28_Pos)) /* Assignment of value for PERID28 in the PAC_LOCK register */
#define   PAC_LOCK_PERID28_0_Val              _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID28_1_Val              _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID28_0                    (PAC_LOCK_PERID28_0_Val << PAC_LOCK_PERID28_Pos)     /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID28_1                    (PAC_LOCK_PERID28_1_Val << PAC_LOCK_PERID28_Pos)     /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID29_Pos                  _UINT32_(29)                                         /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID29_Msk                  (_UINT32_(0x1) << PAC_LOCK_PERID29_Pos)              /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID29(value)               (PAC_LOCK_PERID29_Msk & (_UINT32_(value) << PAC_LOCK_PERID29_Pos)) /* Assignment of value for PERID29 in the PAC_LOCK register */
#define   PAC_LOCK_PERID29_0_Val              _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID29_1_Val              _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID29_0                    (PAC_LOCK_PERID29_0_Val << PAC_LOCK_PERID29_Pos)     /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID29_1                    (PAC_LOCK_PERID29_1_Val << PAC_LOCK_PERID29_Pos)     /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID30_Pos                  _UINT32_(30)                                         /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID30_Msk                  (_UINT32_(0x1) << PAC_LOCK_PERID30_Pos)              /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID30(value)               (PAC_LOCK_PERID30_Msk & (_UINT32_(value) << PAC_LOCK_PERID30_Pos)) /* Assignment of value for PERID30 in the PAC_LOCK register */
#define   PAC_LOCK_PERID30_0_Val              _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID30_1_Val              _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID30_0                    (PAC_LOCK_PERID30_0_Val << PAC_LOCK_PERID30_Pos)     /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID30_1                    (PAC_LOCK_PERID30_1_Val << PAC_LOCK_PERID30_Pos)     /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_PERID31_Pos                  _UINT32_(31)                                         /* (PAC_LOCK) PERID Write Protection Lock Status Position */
#define PAC_LOCK_PERID31_Msk                  (_UINT32_(0x1) << PAC_LOCK_PERID31_Pos)              /* (PAC_LOCK) PERID Write Protection Lock Status Mask */
#define PAC_LOCK_PERID31(value)               (PAC_LOCK_PERID31_Msk & (_UINT32_(value) << PAC_LOCK_PERID31_Pos)) /* Assignment of value for PERID31 in the PAC_LOCK register */
#define   PAC_LOCK_PERID31_0_Val              _UINT32_(0x0)                                        /* (PAC_LOCK) Write Protection Unlocked  */
#define   PAC_LOCK_PERID31_1_Val              _UINT32_(0x1)                                        /* (PAC_LOCK) Write Protection Locked  */
#define PAC_LOCK_PERID31_0                    (PAC_LOCK_PERID31_0_Val << PAC_LOCK_PERID31_Pos)     /* (PAC_LOCK) Write Protection Unlocked Position */
#define PAC_LOCK_PERID31_1                    (PAC_LOCK_PERID31_1_Val << PAC_LOCK_PERID31_Pos)     /* (PAC_LOCK) Write Protection Locked Position */
#define PAC_LOCK_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PAC_LOCK) Register Mask  */

#define PAC_LOCK_PERID_Pos                    _UINT32_(0)                                          /* (PAC_LOCK Position) PERID Write Protection Lock Status */
#define PAC_LOCK_PERID_Msk                    (_UINT32_(0xFFFFFFFF) << PAC_LOCK_PERID_Pos)         /* (PAC_LOCK Mask) PERID */
#define PAC_LOCK_PERID(value)                 (PAC_LOCK_PERID_Msk & (_UINT32_(value) << PAC_LOCK_PERID_Pos)) 

/* PAC register offsets definitions */
#define PAC_CTRLA_REG_OFST             _UINT32_(0x00)      /* (PAC_CTRLA) Control A Register Offset */
#define PAC_WRCTRL_REG_OFST            _UINT32_(0x04)      /* (PAC_WRCTRL) Write Control Register Offset */
#define PAC_STATUS_REG_OFST            _UINT32_(0x40)      /* (PAC_STATUS) Peripheral Status n Register Offset */
#define PAC_STATUS0_REG_OFST           _UINT32_(0x40)      /* (PAC_STATUS0) Peripheral Status n Register Offset */
#define PAC_STATUS1_REG_OFST           _UINT32_(0x44)      /* (PAC_STATUS1) Peripheral Status n Register Offset */
#define PAC_STATUS2_REG_OFST           _UINT32_(0x48)      /* (PAC_STATUS2) Peripheral Status n Register Offset */
#define PAC_STATUS3_REG_OFST           _UINT32_(0x4C)      /* (PAC_STATUS3) Peripheral Status n Register Offset */
#define PAC_LOCK_REG_OFST              _UINT32_(0x50)      /* (PAC_LOCK) Peripheral Lock n Register Offset */
#define PAC_LOCK0_REG_OFST             _UINT32_(0x50)      /* (PAC_LOCK0) Peripheral Lock n Register Offset */
#define PAC_LOCK1_REG_OFST             _UINT32_(0x54)      /* (PAC_LOCK1) Peripheral Lock n Register Offset */
#define PAC_LOCK2_REG_OFST             _UINT32_(0x58)      /* (PAC_LOCK2) Peripheral Lock n Register Offset */
#define PAC_LOCK3_REG_OFST             _UINT32_(0x5C)      /* (PAC_LOCK3) Peripheral Lock n Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* PAC register API structure */
typedef struct
{  /* Peripheral Access Controller */
  __IO  uint32_t                       PAC_CTRLA;          /* Offset: 0x00 (R/W  32) Control A Register */
  __O   uint32_t                       PAC_WRCTRL;         /* Offset: 0x04 ( /W  32) Write Control Register */
  __I   uint8_t                        Reserved1[0x38];
  __I   uint32_t                       PAC_STATUS[4];      /* Offset: 0x40 (R/   32) Peripheral Status n Register */
  __I   uint32_t                       PAC_LOCK[4];        /* Offset: 0x50 (R/   32) Peripheral Lock n Register */
} pac_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMGC00_PAC_COMPONENT_H_ */
