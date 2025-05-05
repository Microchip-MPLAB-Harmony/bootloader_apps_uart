/*
 * Component description for DWDT
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
#ifndef _PIC32CXMTSH_DWDT_COMPONENT_H_
#define _PIC32CXMTSH_DWDT_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR DWDT                                         */
/* ************************************************************************** */

/* -------- DWDT_WDT1_CR : (DWDT Offset: 0x00) ( /W 32) Watchdog 1 Control Register -------- */
#define DWDT_WDT1_CR_WDRSTT_Pos               _UINT32_(0)                                          /* (DWDT_WDT1_CR) Watchdog Restart Position */
#define DWDT_WDT1_CR_WDRSTT_Msk               (_UINT32_(0x1) << DWDT_WDT1_CR_WDRSTT_Pos)           /* (DWDT_WDT1_CR) Watchdog Restart Mask */
#define DWDT_WDT1_CR_WDRSTT(value)            (DWDT_WDT1_CR_WDRSTT_Msk & (_UINT32_(value) << DWDT_WDT1_CR_WDRSTT_Pos)) /* Assigment of value for WDRSTT in the DWDT_WDT1_CR register */
#define DWDT_WDT1_CR_LOCKMR_Pos               _UINT32_(4)                                          /* (DWDT_WDT1_CR) Lock Mode Register Write Access Position */
#define DWDT_WDT1_CR_LOCKMR_Msk               (_UINT32_(0x1) << DWDT_WDT1_CR_LOCKMR_Pos)           /* (DWDT_WDT1_CR) Lock Mode Register Write Access Mask */
#define DWDT_WDT1_CR_LOCKMR(value)            (DWDT_WDT1_CR_LOCKMR_Msk & (_UINT32_(value) << DWDT_WDT1_CR_LOCKMR_Pos)) /* Assigment of value for LOCKMR in the DWDT_WDT1_CR register */
#define DWDT_WDT1_CR_KEY_Pos                  _UINT32_(24)                                         /* (DWDT_WDT1_CR) Password Position */
#define DWDT_WDT1_CR_KEY_Msk                  (_UINT32_(0xFF) << DWDT_WDT1_CR_KEY_Pos)             /* (DWDT_WDT1_CR) Password Mask */
#define DWDT_WDT1_CR_KEY(value)               (DWDT_WDT1_CR_KEY_Msk & (_UINT32_(value) << DWDT_WDT1_CR_KEY_Pos)) /* Assigment of value for KEY in the DWDT_WDT1_CR register */
#define   DWDT_WDT1_CR_KEY_PASSWD_Val         _UINT32_(0xA5)                                       /* (DWDT_WDT1_CR) Writing any other value in this field aborts the write operation.  */
#define DWDT_WDT1_CR_KEY_PASSWD               (DWDT_WDT1_CR_KEY_PASSWD_Val << DWDT_WDT1_CR_KEY_Pos) /* (DWDT_WDT1_CR) Writing any other value in this field aborts the write operation. Position  */
#define DWDT_WDT1_CR_Msk                      _UINT32_(0xFF000011)                                 /* (DWDT_WDT1_CR) Register Mask  */


/* -------- DWDT_WDT1_MR : (DWDT Offset: 0x04) (R/W 32) Watchdog 1 Mode Register -------- */
#define DWDT_WDT1_MR_PERIODRST_Pos            _UINT32_(4)                                          /* (DWDT_WDT1_MR) Watchdog Overflow Period Reset Enable Position */
#define DWDT_WDT1_MR_PERIODRST_Msk            (_UINT32_(0x1) << DWDT_WDT1_MR_PERIODRST_Pos)        /* (DWDT_WDT1_MR) Watchdog Overflow Period Reset Enable Mask */
#define DWDT_WDT1_MR_PERIODRST(value)         (DWDT_WDT1_MR_PERIODRST_Msk & (_UINT32_(value) << DWDT_WDT1_MR_PERIODRST_Pos)) /* Assigment of value for PERIODRST in the DWDT_WDT1_MR register */
#define DWDT_WDT1_MR_RPTHRST_Pos              _UINT32_(5)                                          /* (DWDT_WDT1_MR) Repeat Threshold Reset Enable Position */
#define DWDT_WDT1_MR_RPTHRST_Msk              (_UINT32_(0x1) << DWDT_WDT1_MR_RPTHRST_Pos)          /* (DWDT_WDT1_MR) Repeat Threshold Reset Enable Mask */
#define DWDT_WDT1_MR_RPTHRST(value)           (DWDT_WDT1_MR_RPTHRST_Msk & (_UINT32_(value) << DWDT_WDT1_MR_RPTHRST_Pos)) /* Assigment of value for RPTHRST in the DWDT_WDT1_MR register */
#define DWDT_WDT1_MR_WDNRSTDIS_Pos            _UINT32_(9)                                          /* (DWDT_WDT1_MR) Watchdog Reset NRST Pin Disable Position */
#define DWDT_WDT1_MR_WDNRSTDIS_Msk            (_UINT32_(0x1) << DWDT_WDT1_MR_WDNRSTDIS_Pos)        /* (DWDT_WDT1_MR) Watchdog Reset NRST Pin Disable Mask */
#define DWDT_WDT1_MR_WDNRSTDIS(value)         (DWDT_WDT1_MR_WDNRSTDIS_Msk & (_UINT32_(value) << DWDT_WDT1_MR_WDNRSTDIS_Pos)) /* Assigment of value for WDNRSTDIS in the DWDT_WDT1_MR register */
#define DWDT_WDT1_MR_WDDIS_Pos                _UINT32_(12)                                         /* (DWDT_WDT1_MR) Watchdog Disable Position */
#define DWDT_WDT1_MR_WDDIS_Msk                (_UINT32_(0x1) << DWDT_WDT1_MR_WDDIS_Pos)            /* (DWDT_WDT1_MR) Watchdog Disable Mask */
#define DWDT_WDT1_MR_WDDIS(value)             (DWDT_WDT1_MR_WDDIS_Msk & (_UINT32_(value) << DWDT_WDT1_MR_WDDIS_Pos)) /* Assigment of value for WDDIS in the DWDT_WDT1_MR register */
#define DWDT_WDT1_MR_WDIDLEHLT_Pos            _UINT32_(28)                                         /* (DWDT_WDT1_MR) Watchdog Idle Halt Position */
#define DWDT_WDT1_MR_WDIDLEHLT_Msk            (_UINT32_(0x1) << DWDT_WDT1_MR_WDIDLEHLT_Pos)        /* (DWDT_WDT1_MR) Watchdog Idle Halt Mask */
#define DWDT_WDT1_MR_WDIDLEHLT(value)         (DWDT_WDT1_MR_WDIDLEHLT_Msk & (_UINT32_(value) << DWDT_WDT1_MR_WDIDLEHLT_Pos)) /* Assigment of value for WDIDLEHLT in the DWDT_WDT1_MR register */
#define DWDT_WDT1_MR_WDDBG0HLT_Pos            _UINT32_(29)                                         /* (DWDT_WDT1_MR) Watchdog Core 0 Debug Halt Position */
#define DWDT_WDT1_MR_WDDBG0HLT_Msk            (_UINT32_(0x1) << DWDT_WDT1_MR_WDDBG0HLT_Pos)        /* (DWDT_WDT1_MR) Watchdog Core 0 Debug Halt Mask */
#define DWDT_WDT1_MR_WDDBG0HLT(value)         (DWDT_WDT1_MR_WDDBG0HLT_Msk & (_UINT32_(value) << DWDT_WDT1_MR_WDDBG0HLT_Pos)) /* Assigment of value for WDDBG0HLT in the DWDT_WDT1_MR register */
#define DWDT_WDT1_MR_WDDBG1HLT_Pos            _UINT32_(30)                                         /* (DWDT_WDT1_MR) Watchdog Core 1 Debug Halt Position */
#define DWDT_WDT1_MR_WDDBG1HLT_Msk            (_UINT32_(0x1) << DWDT_WDT1_MR_WDDBG1HLT_Pos)        /* (DWDT_WDT1_MR) Watchdog Core 1 Debug Halt Mask */
#define DWDT_WDT1_MR_WDDBG1HLT(value)         (DWDT_WDT1_MR_WDDBG1HLT_Msk & (_UINT32_(value) << DWDT_WDT1_MR_WDDBG1HLT_Pos)) /* Assigment of value for WDDBG1HLT in the DWDT_WDT1_MR register */
#define DWDT_WDT1_MR_Msk                      _UINT32_(0x70001230)                                 /* (DWDT_WDT1_MR) Register Mask  */


/* -------- DWDT_WDT1_VR : (DWDT Offset: 0x08) ( R/ 32) Watchdog 1 Value Register -------- */
#define DWDT_WDT1_VR_COUNTER_Pos              _UINT32_(0)                                          /* (DWDT_WDT1_VR) Watchdog Down Counter Value Position */
#define DWDT_WDT1_VR_COUNTER_Msk              (_UINT32_(0xFFF) << DWDT_WDT1_VR_COUNTER_Pos)        /* (DWDT_WDT1_VR) Watchdog Down Counter Value Mask */
#define DWDT_WDT1_VR_COUNTER(value)           (DWDT_WDT1_VR_COUNTER_Msk & (_UINT32_(value) << DWDT_WDT1_VR_COUNTER_Pos)) /* Assigment of value for COUNTER in the DWDT_WDT1_VR register */
#define DWDT_WDT1_VR_Msk                      _UINT32_(0x00000FFF)                                 /* (DWDT_WDT1_VR) Register Mask  */


/* -------- DWDT_WDT1_WL : (DWDT Offset: 0x0C) (R/W 32) Watchdog 1 Window Level Register -------- */
#define DWDT_WDT1_WL_PERIOD_Pos               _UINT32_(0)                                          /* (DWDT_WDT1_WL) Watchdog Period Position */
#define DWDT_WDT1_WL_PERIOD_Msk               (_UINT32_(0xFFF) << DWDT_WDT1_WL_PERIOD_Pos)         /* (DWDT_WDT1_WL) Watchdog Period Mask */
#define DWDT_WDT1_WL_PERIOD(value)            (DWDT_WDT1_WL_PERIOD_Msk & (_UINT32_(value) << DWDT_WDT1_WL_PERIOD_Pos)) /* Assigment of value for PERIOD in the DWDT_WDT1_WL register */
#define DWDT_WDT1_WL_RPTH_Pos                 _UINT32_(16)                                         /* (DWDT_WDT1_WL) Repeat Threshold Position */
#define DWDT_WDT1_WL_RPTH_Msk                 (_UINT32_(0xFFF) << DWDT_WDT1_WL_RPTH_Pos)           /* (DWDT_WDT1_WL) Repeat Threshold Mask */
#define DWDT_WDT1_WL_RPTH(value)              (DWDT_WDT1_WL_RPTH_Msk & (_UINT32_(value) << DWDT_WDT1_WL_RPTH_Pos)) /* Assigment of value for RPTH in the DWDT_WDT1_WL register */
#define DWDT_WDT1_WL_Msk                      _UINT32_(0x0FFF0FFF)                                 /* (DWDT_WDT1_WL) Register Mask  */


/* -------- DWDT_WDT1_IL : (DWDT Offset: 0x10) (R/W 32) Watchdog 1 Interrupt Level Register -------- */
#define DWDT_WDT1_IL_LVLTH_Pos                _UINT32_(0)                                          /* (DWDT_WDT1_IL) Level Threshold Position */
#define DWDT_WDT1_IL_LVLTH_Msk                (_UINT32_(0xFFF) << DWDT_WDT1_IL_LVLTH_Pos)          /* (DWDT_WDT1_IL) Level Threshold Mask */
#define DWDT_WDT1_IL_LVLTH(value)             (DWDT_WDT1_IL_LVLTH_Msk & (_UINT32_(value) << DWDT_WDT1_IL_LVLTH_Pos)) /* Assigment of value for LVLTH in the DWDT_WDT1_IL register */
#define DWDT_WDT1_IL_PRESC_Pos                _UINT32_(16)                                         /* (DWDT_WDT1_IL) Prescaler Ratio Position */
#define DWDT_WDT1_IL_PRESC_Msk                (_UINT32_(0x7) << DWDT_WDT1_IL_PRESC_Pos)            /* (DWDT_WDT1_IL) Prescaler Ratio Mask */
#define DWDT_WDT1_IL_PRESC(value)             (DWDT_WDT1_IL_PRESC_Msk & (_UINT32_(value) << DWDT_WDT1_IL_PRESC_Pos)) /* Assigment of value for PRESC in the DWDT_WDT1_IL register */
#define   DWDT_WDT1_IL_PRESC_RATIO128_Val     _UINT32_(0x0)                                        /* (DWDT_WDT1_IL) The watchdog counter decreased when the prescaler reaches 128.  */
#define   DWDT_WDT1_IL_PRESC_RATIO64_Val      _UINT32_(0x1)                                        /* (DWDT_WDT1_IL) The watchdog counter decreased when the prescaler reaches 64.  */
#define   DWDT_WDT1_IL_PRESC_RATIO32_Val      _UINT32_(0x2)                                        /* (DWDT_WDT1_IL) The watchdog counter decreased when the prescaler reaches 32.  */
#define   DWDT_WDT1_IL_PRESC_RATIO16_Val      _UINT32_(0x3)                                        /* (DWDT_WDT1_IL) The watchdog counter decreased when the prescaler reaches 16.  */
#define   DWDT_WDT1_IL_PRESC_RATIO8_Val       _UINT32_(0x4)                                        /* (DWDT_WDT1_IL) The watchdog counter decreased when the prescaler reaches 8.  */
#define   DWDT_WDT1_IL_PRESC_RATIO4_Val       _UINT32_(0x5)                                        /* (DWDT_WDT1_IL) The watchdog counter decreased when the prescaler reaches 4.  */
#define   DWDT_WDT1_IL_PRESC_RATIO2_Val       _UINT32_(0x6)                                        /* (DWDT_WDT1_IL) The watchdog counter decreased when the prescaler reaches 2.  */
#define   DWDT_WDT1_IL_PRESC_RATIO1_Val       _UINT32_(0x7)                                        /* (DWDT_WDT1_IL) The watchdog counter decreased when the prescaler reaches 1.  */
#define DWDT_WDT1_IL_PRESC_RATIO128           (DWDT_WDT1_IL_PRESC_RATIO128_Val << DWDT_WDT1_IL_PRESC_Pos) /* (DWDT_WDT1_IL) The watchdog counter decreased when the prescaler reaches 128. Position  */
#define DWDT_WDT1_IL_PRESC_RATIO64            (DWDT_WDT1_IL_PRESC_RATIO64_Val << DWDT_WDT1_IL_PRESC_Pos) /* (DWDT_WDT1_IL) The watchdog counter decreased when the prescaler reaches 64. Position  */
#define DWDT_WDT1_IL_PRESC_RATIO32            (DWDT_WDT1_IL_PRESC_RATIO32_Val << DWDT_WDT1_IL_PRESC_Pos) /* (DWDT_WDT1_IL) The watchdog counter decreased when the prescaler reaches 32. Position  */
#define DWDT_WDT1_IL_PRESC_RATIO16            (DWDT_WDT1_IL_PRESC_RATIO16_Val << DWDT_WDT1_IL_PRESC_Pos) /* (DWDT_WDT1_IL) The watchdog counter decreased when the prescaler reaches 16. Position  */
#define DWDT_WDT1_IL_PRESC_RATIO8             (DWDT_WDT1_IL_PRESC_RATIO8_Val << DWDT_WDT1_IL_PRESC_Pos) /* (DWDT_WDT1_IL) The watchdog counter decreased when the prescaler reaches 8. Position  */
#define DWDT_WDT1_IL_PRESC_RATIO4             (DWDT_WDT1_IL_PRESC_RATIO4_Val << DWDT_WDT1_IL_PRESC_Pos) /* (DWDT_WDT1_IL) The watchdog counter decreased when the prescaler reaches 4. Position  */
#define DWDT_WDT1_IL_PRESC_RATIO2             (DWDT_WDT1_IL_PRESC_RATIO2_Val << DWDT_WDT1_IL_PRESC_Pos) /* (DWDT_WDT1_IL) The watchdog counter decreased when the prescaler reaches 2. Position  */
#define DWDT_WDT1_IL_PRESC_RATIO1             (DWDT_WDT1_IL_PRESC_RATIO1_Val << DWDT_WDT1_IL_PRESC_Pos) /* (DWDT_WDT1_IL) The watchdog counter decreased when the prescaler reaches 1. Position  */
#define DWDT_WDT1_IL_Msk                      _UINT32_(0x00070FFF)                                 /* (DWDT_WDT1_IL) Register Mask  */


/* -------- DWDT_WDT1_IER : (DWDT Offset: 0x14) ( /W 32) Watchdog 1 Interrupt Enable Register -------- */
#define DWDT_WDT1_IER_PERINT_Pos              _UINT32_(0)                                          /* (DWDT_WDT1_IER) Overflow Period Interrupt Enable Position */
#define DWDT_WDT1_IER_PERINT_Msk              (_UINT32_(0x1) << DWDT_WDT1_IER_PERINT_Pos)          /* (DWDT_WDT1_IER) Overflow Period Interrupt Enable Mask */
#define DWDT_WDT1_IER_PERINT(value)           (DWDT_WDT1_IER_PERINT_Msk & (_UINT32_(value) << DWDT_WDT1_IER_PERINT_Pos)) /* Assigment of value for PERINT in the DWDT_WDT1_IER register */
#define DWDT_WDT1_IER_RPTHINT_Pos             _UINT32_(1)                                          /* (DWDT_WDT1_IER) Reload Repeat Period Interrupt Enable Position */
#define DWDT_WDT1_IER_RPTHINT_Msk             (_UINT32_(0x1) << DWDT_WDT1_IER_RPTHINT_Pos)         /* (DWDT_WDT1_IER) Reload Repeat Period Interrupt Enable Mask */
#define DWDT_WDT1_IER_RPTHINT(value)          (DWDT_WDT1_IER_RPTHINT_Msk & (_UINT32_(value) << DWDT_WDT1_IER_RPTHINT_Pos)) /* Assigment of value for RPTHINT in the DWDT_WDT1_IER register */
#define DWDT_WDT1_IER_LVLINT_Pos              _UINT32_(2)                                          /* (DWDT_WDT1_IER) Interrupt Level Threshold Interrupt Enable Position */
#define DWDT_WDT1_IER_LVLINT_Msk              (_UINT32_(0x1) << DWDT_WDT1_IER_LVLINT_Pos)          /* (DWDT_WDT1_IER) Interrupt Level Threshold Interrupt Enable Mask */
#define DWDT_WDT1_IER_LVLINT(value)           (DWDT_WDT1_IER_LVLINT_Msk & (_UINT32_(value) << DWDT_WDT1_IER_LVLINT_Pos)) /* Assigment of value for LVLINT in the DWDT_WDT1_IER register */
#define DWDT_WDT1_IER_RLDERR_Pos              _UINT32_(5)                                          /* (DWDT_WDT1_IER) Reload Command Error Interrupt Enable Position */
#define DWDT_WDT1_IER_RLDERR_Msk              (_UINT32_(0x1) << DWDT_WDT1_IER_RLDERR_Pos)          /* (DWDT_WDT1_IER) Reload Command Error Interrupt Enable Mask */
#define DWDT_WDT1_IER_RLDERR(value)           (DWDT_WDT1_IER_RLDERR_Msk & (_UINT32_(value) << DWDT_WDT1_IER_RLDERR_Pos)) /* Assigment of value for RLDERR in the DWDT_WDT1_IER register */
#define DWDT_WDT1_IER_Msk                     _UINT32_(0x00000027)                                 /* (DWDT_WDT1_IER) Register Mask  */


/* -------- DWDT_WDT1_IDR : (DWDT Offset: 0x18) ( /W 32) Watchdog 1 Interrupt Disable Register -------- */
#define DWDT_WDT1_IDR_PERINT_Pos              _UINT32_(0)                                          /* (DWDT_WDT1_IDR) Overflow Period Interrupt Disable Position */
#define DWDT_WDT1_IDR_PERINT_Msk              (_UINT32_(0x1) << DWDT_WDT1_IDR_PERINT_Pos)          /* (DWDT_WDT1_IDR) Overflow Period Interrupt Disable Mask */
#define DWDT_WDT1_IDR_PERINT(value)           (DWDT_WDT1_IDR_PERINT_Msk & (_UINT32_(value) << DWDT_WDT1_IDR_PERINT_Pos)) /* Assigment of value for PERINT in the DWDT_WDT1_IDR register */
#define DWDT_WDT1_IDR_RPTHINT_Pos             _UINT32_(1)                                          /* (DWDT_WDT1_IDR) Reload Repeat Period Interrupt Disable Position */
#define DWDT_WDT1_IDR_RPTHINT_Msk             (_UINT32_(0x1) << DWDT_WDT1_IDR_RPTHINT_Pos)         /* (DWDT_WDT1_IDR) Reload Repeat Period Interrupt Disable Mask */
#define DWDT_WDT1_IDR_RPTHINT(value)          (DWDT_WDT1_IDR_RPTHINT_Msk & (_UINT32_(value) << DWDT_WDT1_IDR_RPTHINT_Pos)) /* Assigment of value for RPTHINT in the DWDT_WDT1_IDR register */
#define DWDT_WDT1_IDR_LVLINT_Pos              _UINT32_(2)                                          /* (DWDT_WDT1_IDR) Interrupt Level Threshold Interrupt Disable Position */
#define DWDT_WDT1_IDR_LVLINT_Msk              (_UINT32_(0x1) << DWDT_WDT1_IDR_LVLINT_Pos)          /* (DWDT_WDT1_IDR) Interrupt Level Threshold Interrupt Disable Mask */
#define DWDT_WDT1_IDR_LVLINT(value)           (DWDT_WDT1_IDR_LVLINT_Msk & (_UINT32_(value) << DWDT_WDT1_IDR_LVLINT_Pos)) /* Assigment of value for LVLINT in the DWDT_WDT1_IDR register */
#define DWDT_WDT1_IDR_RLDERR_Pos              _UINT32_(5)                                          /* (DWDT_WDT1_IDR) Reload Command Error Interrupt Disable Position */
#define DWDT_WDT1_IDR_RLDERR_Msk              (_UINT32_(0x1) << DWDT_WDT1_IDR_RLDERR_Pos)          /* (DWDT_WDT1_IDR) Reload Command Error Interrupt Disable Mask */
#define DWDT_WDT1_IDR_RLDERR(value)           (DWDT_WDT1_IDR_RLDERR_Msk & (_UINT32_(value) << DWDT_WDT1_IDR_RLDERR_Pos)) /* Assigment of value for RLDERR in the DWDT_WDT1_IDR register */
#define DWDT_WDT1_IDR_Msk                     _UINT32_(0x00000027)                                 /* (DWDT_WDT1_IDR) Register Mask  */


/* -------- DWDT_WDT1_ISR : (DWDT Offset: 0x1C) ( R/ 32) Watchdog 1 Interrupt Status Register -------- */
#define DWDT_WDT1_ISR_PERINT_Pos              _UINT32_(0)                                          /* (DWDT_WDT1_ISR) Overflow Period Status (cleared on read) Position */
#define DWDT_WDT1_ISR_PERINT_Msk              (_UINT32_(0x1) << DWDT_WDT1_ISR_PERINT_Pos)          /* (DWDT_WDT1_ISR) Overflow Period Status (cleared on read) Mask */
#define DWDT_WDT1_ISR_PERINT(value)           (DWDT_WDT1_ISR_PERINT_Msk & (_UINT32_(value) << DWDT_WDT1_ISR_PERINT_Pos)) /* Assigment of value for PERINT in the DWDT_WDT1_ISR register */
#define DWDT_WDT1_ISR_RPTHINT_Pos             _UINT32_(1)                                          /* (DWDT_WDT1_ISR) Reload Repeat Period Status (cleared on read) Position */
#define DWDT_WDT1_ISR_RPTHINT_Msk             (_UINT32_(0x1) << DWDT_WDT1_ISR_RPTHINT_Pos)         /* (DWDT_WDT1_ISR) Reload Repeat Period Status (cleared on read) Mask */
#define DWDT_WDT1_ISR_RPTHINT(value)          (DWDT_WDT1_ISR_RPTHINT_Msk & (_UINT32_(value) << DWDT_WDT1_ISR_RPTHINT_Pos)) /* Assigment of value for RPTHINT in the DWDT_WDT1_ISR register */
#define DWDT_WDT1_ISR_LVLINT_Pos              _UINT32_(2)                                          /* (DWDT_WDT1_ISR) Interrupt Level Threshold Status (cleared on read) Position */
#define DWDT_WDT1_ISR_LVLINT_Msk              (_UINT32_(0x1) << DWDT_WDT1_ISR_LVLINT_Pos)          /* (DWDT_WDT1_ISR) Interrupt Level Threshold Status (cleared on read) Mask */
#define DWDT_WDT1_ISR_LVLINT(value)           (DWDT_WDT1_ISR_LVLINT_Msk & (_UINT32_(value) << DWDT_WDT1_ISR_LVLINT_Pos)) /* Assigment of value for LVLINT in the DWDT_WDT1_ISR register */
#define DWDT_WDT1_ISR_RLDERR_Pos              _UINT32_(5)                                          /* (DWDT_WDT1_ISR) Reload Command Error Status (cleared on read) Position */
#define DWDT_WDT1_ISR_RLDERR_Msk              (_UINT32_(0x1) << DWDT_WDT1_ISR_RLDERR_Pos)          /* (DWDT_WDT1_ISR) Reload Command Error Status (cleared on read) Mask */
#define DWDT_WDT1_ISR_RLDERR(value)           (DWDT_WDT1_ISR_RLDERR_Msk & (_UINT32_(value) << DWDT_WDT1_ISR_RLDERR_Pos)) /* Assigment of value for RLDERR in the DWDT_WDT1_ISR register */
#define DWDT_WDT1_ISR_Msk                     _UINT32_(0x00000027)                                 /* (DWDT_WDT1_ISR) Register Mask  */


/* -------- DWDT_WDT1_IMR : (DWDT Offset: 0x20) ( R/ 32) Watchdog 1 Interrupt Mask Register -------- */
#define DWDT_WDT1_IMR_PERINT_Pos              _UINT32_(0)                                          /* (DWDT_WDT1_IMR) Overflow Period Interrupt Mask Position */
#define DWDT_WDT1_IMR_PERINT_Msk              (_UINT32_(0x1) << DWDT_WDT1_IMR_PERINT_Pos)          /* (DWDT_WDT1_IMR) Overflow Period Interrupt Mask Mask */
#define DWDT_WDT1_IMR_PERINT(value)           (DWDT_WDT1_IMR_PERINT_Msk & (_UINT32_(value) << DWDT_WDT1_IMR_PERINT_Pos)) /* Assigment of value for PERINT in the DWDT_WDT1_IMR register */
#define DWDT_WDT1_IMR_RPTHINT_Pos             _UINT32_(1)                                          /* (DWDT_WDT1_IMR) Reload Repeat Period Interrupt Mask Position */
#define DWDT_WDT1_IMR_RPTHINT_Msk             (_UINT32_(0x1) << DWDT_WDT1_IMR_RPTHINT_Pos)         /* (DWDT_WDT1_IMR) Reload Repeat Period Interrupt Mask Mask */
#define DWDT_WDT1_IMR_RPTHINT(value)          (DWDT_WDT1_IMR_RPTHINT_Msk & (_UINT32_(value) << DWDT_WDT1_IMR_RPTHINT_Pos)) /* Assigment of value for RPTHINT in the DWDT_WDT1_IMR register */
#define DWDT_WDT1_IMR_LVLINT_Pos              _UINT32_(2)                                          /* (DWDT_WDT1_IMR) Interrupt Level Threshold Interrupt Mask Position */
#define DWDT_WDT1_IMR_LVLINT_Msk              (_UINT32_(0x1) << DWDT_WDT1_IMR_LVLINT_Pos)          /* (DWDT_WDT1_IMR) Interrupt Level Threshold Interrupt Mask Mask */
#define DWDT_WDT1_IMR_LVLINT(value)           (DWDT_WDT1_IMR_LVLINT_Msk & (_UINT32_(value) << DWDT_WDT1_IMR_LVLINT_Pos)) /* Assigment of value for LVLINT in the DWDT_WDT1_IMR register */
#define DWDT_WDT1_IMR_RLDERR_Pos              _UINT32_(5)                                          /* (DWDT_WDT1_IMR) Reload Command Error Interrupt Mask Position */
#define DWDT_WDT1_IMR_RLDERR_Msk              (_UINT32_(0x1) << DWDT_WDT1_IMR_RLDERR_Pos)          /* (DWDT_WDT1_IMR) Reload Command Error Interrupt Mask Mask */
#define DWDT_WDT1_IMR_RLDERR(value)           (DWDT_WDT1_IMR_RLDERR_Msk & (_UINT32_(value) << DWDT_WDT1_IMR_RLDERR_Pos)) /* Assigment of value for RLDERR in the DWDT_WDT1_IMR register */
#define DWDT_WDT1_IMR_Msk                     _UINT32_(0x00000027)                                 /* (DWDT_WDT1_IMR) Register Mask  */


/* -------- DWDT_WDT0_CR : (DWDT Offset: 0x1210) ( /W 32) Watchdog 0 Control Register -------- */
#define DWDT_WDT0_CR_WDRSTT_Pos               _UINT32_(0)                                          /* (DWDT_WDT0_CR) Watchdog Restart Position */
#define DWDT_WDT0_CR_WDRSTT_Msk               (_UINT32_(0x1) << DWDT_WDT0_CR_WDRSTT_Pos)           /* (DWDT_WDT0_CR) Watchdog Restart Mask */
#define DWDT_WDT0_CR_WDRSTT(value)            (DWDT_WDT0_CR_WDRSTT_Msk & (_UINT32_(value) << DWDT_WDT0_CR_WDRSTT_Pos)) /* Assigment of value for WDRSTT in the DWDT_WDT0_CR register */
#define DWDT_WDT0_CR_LOCKMR_Pos               _UINT32_(4)                                          /* (DWDT_WDT0_CR) Lock Mode Register Write Access Position */
#define DWDT_WDT0_CR_LOCKMR_Msk               (_UINT32_(0x1) << DWDT_WDT0_CR_LOCKMR_Pos)           /* (DWDT_WDT0_CR) Lock Mode Register Write Access Mask */
#define DWDT_WDT0_CR_LOCKMR(value)            (DWDT_WDT0_CR_LOCKMR_Msk & (_UINT32_(value) << DWDT_WDT0_CR_LOCKMR_Pos)) /* Assigment of value for LOCKMR in the DWDT_WDT0_CR register */
#define DWDT_WDT0_CR_KEY_Pos                  _UINT32_(24)                                         /* (DWDT_WDT0_CR) Password Position */
#define DWDT_WDT0_CR_KEY_Msk                  (_UINT32_(0xFF) << DWDT_WDT0_CR_KEY_Pos)             /* (DWDT_WDT0_CR) Password Mask */
#define DWDT_WDT0_CR_KEY(value)               (DWDT_WDT0_CR_KEY_Msk & (_UINT32_(value) << DWDT_WDT0_CR_KEY_Pos)) /* Assigment of value for KEY in the DWDT_WDT0_CR register */
#define   DWDT_WDT0_CR_KEY_PASSWD_Val         _UINT32_(0xA5)                                       /* (DWDT_WDT0_CR) Writing any other value in this field aborts the write operation.  */
#define DWDT_WDT0_CR_KEY_PASSWD               (DWDT_WDT0_CR_KEY_PASSWD_Val << DWDT_WDT0_CR_KEY_Pos) /* (DWDT_WDT0_CR) Writing any other value in this field aborts the write operation. Position  */
#define DWDT_WDT0_CR_Msk                      _UINT32_(0xFF000011)                                 /* (DWDT_WDT0_CR) Register Mask  */


/* -------- DWDT_WDT0_MR : (DWDT Offset: 0x1214) (R/W 32) Watchdog 0 Mode Register -------- */
#define DWDT_WDT0_MR_PERIODRST_Pos            _UINT32_(4)                                          /* (DWDT_WDT0_MR) Period Reset Position */
#define DWDT_WDT0_MR_PERIODRST_Msk            (_UINT32_(0x1) << DWDT_WDT0_MR_PERIODRST_Pos)        /* (DWDT_WDT0_MR) Period Reset Mask */
#define DWDT_WDT0_MR_PERIODRST(value)         (DWDT_WDT0_MR_PERIODRST_Msk & (_UINT32_(value) << DWDT_WDT0_MR_PERIODRST_Pos)) /* Assigment of value for PERIODRST in the DWDT_WDT0_MR register */
#define DWDT_WDT0_MR_RPTHRST_Pos              _UINT32_(5)                                          /* (DWDT_WDT0_MR) Repeat Threshold Reset Position */
#define DWDT_WDT0_MR_RPTHRST_Msk              (_UINT32_(0x1) << DWDT_WDT0_MR_RPTHRST_Pos)          /* (DWDT_WDT0_MR) Repeat Threshold Reset Mask */
#define DWDT_WDT0_MR_RPTHRST(value)           (DWDT_WDT0_MR_RPTHRST_Msk & (_UINT32_(value) << DWDT_WDT0_MR_RPTHRST_Pos)) /* Assigment of value for RPTHRST in the DWDT_WDT0_MR register */
#define DWDT_WDT0_MR_WDNRSTDIS_Pos            _UINT32_(9)                                          /* (DWDT_WDT0_MR) Watchdog NRST Disable Position */
#define DWDT_WDT0_MR_WDNRSTDIS_Msk            (_UINT32_(0x1) << DWDT_WDT0_MR_WDNRSTDIS_Pos)        /* (DWDT_WDT0_MR) Watchdog NRST Disable Mask */
#define DWDT_WDT0_MR_WDNRSTDIS(value)         (DWDT_WDT0_MR_WDNRSTDIS_Msk & (_UINT32_(value) << DWDT_WDT0_MR_WDNRSTDIS_Pos)) /* Assigment of value for WDNRSTDIS in the DWDT_WDT0_MR register */
#define DWDT_WDT0_MR_WDDIS_Pos                _UINT32_(12)                                         /* (DWDT_WDT0_MR) Watchdog Disable Position */
#define DWDT_WDT0_MR_WDDIS_Msk                (_UINT32_(0x1) << DWDT_WDT0_MR_WDDIS_Pos)            /* (DWDT_WDT0_MR) Watchdog Disable Mask */
#define DWDT_WDT0_MR_WDDIS(value)             (DWDT_WDT0_MR_WDDIS_Msk & (_UINT32_(value) << DWDT_WDT0_MR_WDDIS_Pos)) /* Assigment of value for WDDIS in the DWDT_WDT0_MR register */
#define DWDT_WDT0_MR_WDIDLEHLT_Pos            _UINT32_(28)                                         /* (DWDT_WDT0_MR) Watchdog Idle Halt Position */
#define DWDT_WDT0_MR_WDIDLEHLT_Msk            (_UINT32_(0x1) << DWDT_WDT0_MR_WDIDLEHLT_Pos)        /* (DWDT_WDT0_MR) Watchdog Idle Halt Mask */
#define DWDT_WDT0_MR_WDIDLEHLT(value)         (DWDT_WDT0_MR_WDIDLEHLT_Msk & (_UINT32_(value) << DWDT_WDT0_MR_WDIDLEHLT_Pos)) /* Assigment of value for WDIDLEHLT in the DWDT_WDT0_MR register */
#define DWDT_WDT0_MR_WDDBG0HLT_Pos            _UINT32_(29)                                         /* (DWDT_WDT0_MR) Watchdog Core 0 Debug Halt Position */
#define DWDT_WDT0_MR_WDDBG0HLT_Msk            (_UINT32_(0x1) << DWDT_WDT0_MR_WDDBG0HLT_Pos)        /* (DWDT_WDT0_MR) Watchdog Core 0 Debug Halt Mask */
#define DWDT_WDT0_MR_WDDBG0HLT(value)         (DWDT_WDT0_MR_WDDBG0HLT_Msk & (_UINT32_(value) << DWDT_WDT0_MR_WDDBG0HLT_Pos)) /* Assigment of value for WDDBG0HLT in the DWDT_WDT0_MR register */
#define DWDT_WDT0_MR_WDDBG1HLT_Pos            _UINT32_(30)                                         /* (DWDT_WDT0_MR) Watchdog Core 1 Debug Halt Position */
#define DWDT_WDT0_MR_WDDBG1HLT_Msk            (_UINT32_(0x1) << DWDT_WDT0_MR_WDDBG1HLT_Pos)        /* (DWDT_WDT0_MR) Watchdog Core 1 Debug Halt Mask */
#define DWDT_WDT0_MR_WDDBG1HLT(value)         (DWDT_WDT0_MR_WDDBG1HLT_Msk & (_UINT32_(value) << DWDT_WDT0_MR_WDDBG1HLT_Pos)) /* Assigment of value for WDDBG1HLT in the DWDT_WDT0_MR register */
#define DWDT_WDT0_MR_Msk                      _UINT32_(0x70001230)                                 /* (DWDT_WDT0_MR) Register Mask  */


/* -------- DWDT_WDT0_VR : (DWDT Offset: 0x1218) ( R/ 32) Watchdog 0 Value Register -------- */
#define DWDT_WDT0_VR_COUNTER_Pos              _UINT32_(0)                                          /* (DWDT_WDT0_VR) Watchdog Down Counter Value Position */
#define DWDT_WDT0_VR_COUNTER_Msk              (_UINT32_(0xFFF) << DWDT_WDT0_VR_COUNTER_Pos)        /* (DWDT_WDT0_VR) Watchdog Down Counter Value Mask */
#define DWDT_WDT0_VR_COUNTER(value)           (DWDT_WDT0_VR_COUNTER_Msk & (_UINT32_(value) << DWDT_WDT0_VR_COUNTER_Pos)) /* Assigment of value for COUNTER in the DWDT_WDT0_VR register */
#define DWDT_WDT0_VR_Msk                      _UINT32_(0x00000FFF)                                 /* (DWDT_WDT0_VR) Register Mask  */


/* -------- DWDT_WDT0_WL : (DWDT Offset: 0x121C) (R/W 32) Watchdog 0 Window Level -------- */
#define DWDT_WDT0_WL_PERIOD_Pos               _UINT32_(0)                                          /* (DWDT_WDT0_WL) Watchdog Period Position */
#define DWDT_WDT0_WL_PERIOD_Msk               (_UINT32_(0xFFF) << DWDT_WDT0_WL_PERIOD_Pos)         /* (DWDT_WDT0_WL) Watchdog Period Mask */
#define DWDT_WDT0_WL_PERIOD(value)            (DWDT_WDT0_WL_PERIOD_Msk & (_UINT32_(value) << DWDT_WDT0_WL_PERIOD_Pos)) /* Assigment of value for PERIOD in the DWDT_WDT0_WL register */
#define DWDT_WDT0_WL_RPTH_Pos                 _UINT32_(16)                                         /* (DWDT_WDT0_WL) Repeat Threshold Position */
#define DWDT_WDT0_WL_RPTH_Msk                 (_UINT32_(0xFFF) << DWDT_WDT0_WL_RPTH_Pos)           /* (DWDT_WDT0_WL) Repeat Threshold Mask */
#define DWDT_WDT0_WL_RPTH(value)              (DWDT_WDT0_WL_RPTH_Msk & (_UINT32_(value) << DWDT_WDT0_WL_RPTH_Pos)) /* Assigment of value for RPTH in the DWDT_WDT0_WL register */
#define DWDT_WDT0_WL_Msk                      _UINT32_(0x0FFF0FFF)                                 /* (DWDT_WDT0_WL) Register Mask  */


/* -------- DWDT_WDT0_IL : (DWDT Offset: 0x1220) (R/W 32) Watchdog 0 Interrupt Level -------- */
#define DWDT_WDT0_IL_LVLTH_Pos                _UINT32_(0)                                          /* (DWDT_WDT0_IL) Level Threshold Position */
#define DWDT_WDT0_IL_LVLTH_Msk                (_UINT32_(0xFFF) << DWDT_WDT0_IL_LVLTH_Pos)          /* (DWDT_WDT0_IL) Level Threshold Mask */
#define DWDT_WDT0_IL_LVLTH(value)             (DWDT_WDT0_IL_LVLTH_Msk & (_UINT32_(value) << DWDT_WDT0_IL_LVLTH_Pos)) /* Assigment of value for LVLTH in the DWDT_WDT0_IL register */
#define DWDT_WDT0_IL_PRESC_Pos                _UINT32_(16)                                         /* (DWDT_WDT0_IL) Prescaler Ratio Position */
#define DWDT_WDT0_IL_PRESC_Msk                (_UINT32_(0x7) << DWDT_WDT0_IL_PRESC_Pos)            /* (DWDT_WDT0_IL) Prescaler Ratio Mask */
#define DWDT_WDT0_IL_PRESC(value)             (DWDT_WDT0_IL_PRESC_Msk & (_UINT32_(value) << DWDT_WDT0_IL_PRESC_Pos)) /* Assigment of value for PRESC in the DWDT_WDT0_IL register */
#define   DWDT_WDT0_IL_PRESC_RATIO128_Val     _UINT32_(0x0)                                        /* (DWDT_WDT0_IL) The watchdog counter decreased when the prescaler reaches 128.  */
#define   DWDT_WDT0_IL_PRESC_RATIO64_Val      _UINT32_(0x1)                                        /* (DWDT_WDT0_IL) The watchdog counter decreased when the prescaler reaches 64.  */
#define   DWDT_WDT0_IL_PRESC_RATIO32_Val      _UINT32_(0x2)                                        /* (DWDT_WDT0_IL) The watchdog counter decreased when the prescaler reaches 32.  */
#define   DWDT_WDT0_IL_PRESC_RATIO16_Val      _UINT32_(0x3)                                        /* (DWDT_WDT0_IL) The watchdog counter decreased when the prescaler reaches 16.  */
#define   DWDT_WDT0_IL_PRESC_RATIO8_Val       _UINT32_(0x4)                                        /* (DWDT_WDT0_IL) The watchdog counter decreased when the prescaler reaches 8.  */
#define   DWDT_WDT0_IL_PRESC_RATIO4_Val       _UINT32_(0x5)                                        /* (DWDT_WDT0_IL) The watchdog counter decreased when the prescaler reaches 4.  */
#define   DWDT_WDT0_IL_PRESC_RATIO2_Val       _UINT32_(0x6)                                        /* (DWDT_WDT0_IL) The watchdog counter decreased when the prescaler reaches 2.  */
#define   DWDT_WDT0_IL_PRESC_RATIO1_Val       _UINT32_(0x7)                                        /* (DWDT_WDT0_IL) The watchdog counter decreased when the prescaler reaches 1.  */
#define DWDT_WDT0_IL_PRESC_RATIO128           (DWDT_WDT0_IL_PRESC_RATIO128_Val << DWDT_WDT0_IL_PRESC_Pos) /* (DWDT_WDT0_IL) The watchdog counter decreased when the prescaler reaches 128. Position  */
#define DWDT_WDT0_IL_PRESC_RATIO64            (DWDT_WDT0_IL_PRESC_RATIO64_Val << DWDT_WDT0_IL_PRESC_Pos) /* (DWDT_WDT0_IL) The watchdog counter decreased when the prescaler reaches 64. Position  */
#define DWDT_WDT0_IL_PRESC_RATIO32            (DWDT_WDT0_IL_PRESC_RATIO32_Val << DWDT_WDT0_IL_PRESC_Pos) /* (DWDT_WDT0_IL) The watchdog counter decreased when the prescaler reaches 32. Position  */
#define DWDT_WDT0_IL_PRESC_RATIO16            (DWDT_WDT0_IL_PRESC_RATIO16_Val << DWDT_WDT0_IL_PRESC_Pos) /* (DWDT_WDT0_IL) The watchdog counter decreased when the prescaler reaches 16. Position  */
#define DWDT_WDT0_IL_PRESC_RATIO8             (DWDT_WDT0_IL_PRESC_RATIO8_Val << DWDT_WDT0_IL_PRESC_Pos) /* (DWDT_WDT0_IL) The watchdog counter decreased when the prescaler reaches 8. Position  */
#define DWDT_WDT0_IL_PRESC_RATIO4             (DWDT_WDT0_IL_PRESC_RATIO4_Val << DWDT_WDT0_IL_PRESC_Pos) /* (DWDT_WDT0_IL) The watchdog counter decreased when the prescaler reaches 4. Position  */
#define DWDT_WDT0_IL_PRESC_RATIO2             (DWDT_WDT0_IL_PRESC_RATIO2_Val << DWDT_WDT0_IL_PRESC_Pos) /* (DWDT_WDT0_IL) The watchdog counter decreased when the prescaler reaches 2. Position  */
#define DWDT_WDT0_IL_PRESC_RATIO1             (DWDT_WDT0_IL_PRESC_RATIO1_Val << DWDT_WDT0_IL_PRESC_Pos) /* (DWDT_WDT0_IL) The watchdog counter decreased when the prescaler reaches 1. Position  */
#define DWDT_WDT0_IL_Msk                      _UINT32_(0x00070FFF)                                 /* (DWDT_WDT0_IL) Register Mask  */


/* -------- DWDT_WDT0_IER : (DWDT Offset: 0x1224) ( /W 32) Watchdog 0 Interrupt Enable Register -------- */
#define DWDT_WDT0_IER_PERINT_Pos              _UINT32_(0)                                          /* (DWDT_WDT0_IER) Overflow Period Interrupt Enable Position */
#define DWDT_WDT0_IER_PERINT_Msk              (_UINT32_(0x1) << DWDT_WDT0_IER_PERINT_Pos)          /* (DWDT_WDT0_IER) Overflow Period Interrupt Enable Mask */
#define DWDT_WDT0_IER_PERINT(value)           (DWDT_WDT0_IER_PERINT_Msk & (_UINT32_(value) << DWDT_WDT0_IER_PERINT_Pos)) /* Assigment of value for PERINT in the DWDT_WDT0_IER register */
#define DWDT_WDT0_IER_RPTHINT_Pos             _UINT32_(1)                                          /* (DWDT_WDT0_IER) Reload Repeat Period Interrupt Enable Position */
#define DWDT_WDT0_IER_RPTHINT_Msk             (_UINT32_(0x1) << DWDT_WDT0_IER_RPTHINT_Pos)         /* (DWDT_WDT0_IER) Reload Repeat Period Interrupt Enable Mask */
#define DWDT_WDT0_IER_RPTHINT(value)          (DWDT_WDT0_IER_RPTHINT_Msk & (_UINT32_(value) << DWDT_WDT0_IER_RPTHINT_Pos)) /* Assigment of value for RPTHINT in the DWDT_WDT0_IER register */
#define DWDT_WDT0_IER_LVLINT_Pos              _UINT32_(2)                                          /* (DWDT_WDT0_IER) Interrupt Level Threshold Interrupt Enable Position */
#define DWDT_WDT0_IER_LVLINT_Msk              (_UINT32_(0x1) << DWDT_WDT0_IER_LVLINT_Pos)          /* (DWDT_WDT0_IER) Interrupt Level Threshold Interrupt Enable Mask */
#define DWDT_WDT0_IER_LVLINT(value)           (DWDT_WDT0_IER_LVLINT_Msk & (_UINT32_(value) << DWDT_WDT0_IER_LVLINT_Pos)) /* Assigment of value for LVLINT in the DWDT_WDT0_IER register */
#define DWDT_WDT0_IER_W1PERINT_Pos            _UINT32_(3)                                          /* (DWDT_WDT0_IER) Watchdog 1 Overflow Interrupt Enable Position */
#define DWDT_WDT0_IER_W1PERINT_Msk            (_UINT32_(0x1) << DWDT_WDT0_IER_W1PERINT_Pos)        /* (DWDT_WDT0_IER) Watchdog 1 Overflow Interrupt Enable Mask */
#define DWDT_WDT0_IER_W1PERINT(value)         (DWDT_WDT0_IER_W1PERINT_Msk & (_UINT32_(value) << DWDT_WDT0_IER_W1PERINT_Pos)) /* Assigment of value for W1PERINT in the DWDT_WDT0_IER register */
#define DWDT_WDT0_IER_W1RPTHINT_Pos           _UINT32_(4)                                          /* (DWDT_WDT0_IER) Watchdog 1 Repeat Threshold Interrupt Enable Position */
#define DWDT_WDT0_IER_W1RPTHINT_Msk           (_UINT32_(0x1) << DWDT_WDT0_IER_W1RPTHINT_Pos)       /* (DWDT_WDT0_IER) Watchdog 1 Repeat Threshold Interrupt Enable Mask */
#define DWDT_WDT0_IER_W1RPTHINT(value)        (DWDT_WDT0_IER_W1RPTHINT_Msk & (_UINT32_(value) << DWDT_WDT0_IER_W1RPTHINT_Pos)) /* Assigment of value for W1RPTHINT in the DWDT_WDT0_IER register */
#define DWDT_WDT0_IER_RLDERR_Pos              _UINT32_(5)                                          /* (DWDT_WDT0_IER) Reload Command Error Interrupt Enable Position */
#define DWDT_WDT0_IER_RLDERR_Msk              (_UINT32_(0x1) << DWDT_WDT0_IER_RLDERR_Pos)          /* (DWDT_WDT0_IER) Reload Command Error Interrupt Enable Mask */
#define DWDT_WDT0_IER_RLDERR(value)           (DWDT_WDT0_IER_RLDERR_Msk & (_UINT32_(value) << DWDT_WDT0_IER_RLDERR_Pos)) /* Assigment of value for RLDERR in the DWDT_WDT0_IER register */
#define DWDT_WDT0_IER_Msk                     _UINT32_(0x0000003F)                                 /* (DWDT_WDT0_IER) Register Mask  */


/* -------- DWDT_WDT0_IDR : (DWDT Offset: 0x1228) ( /W 32) Watchdog 0 Interrupt Disable Register -------- */
#define DWDT_WDT0_IDR_PERINT_Pos              _UINT32_(0)                                          /* (DWDT_WDT0_IDR) Overflow Period Interrupt Disable Position */
#define DWDT_WDT0_IDR_PERINT_Msk              (_UINT32_(0x1) << DWDT_WDT0_IDR_PERINT_Pos)          /* (DWDT_WDT0_IDR) Overflow Period Interrupt Disable Mask */
#define DWDT_WDT0_IDR_PERINT(value)           (DWDT_WDT0_IDR_PERINT_Msk & (_UINT32_(value) << DWDT_WDT0_IDR_PERINT_Pos)) /* Assigment of value for PERINT in the DWDT_WDT0_IDR register */
#define DWDT_WDT0_IDR_RPTHINT_Pos             _UINT32_(1)                                          /* (DWDT_WDT0_IDR) Reload Repeat Period Interrupt Disable Position */
#define DWDT_WDT0_IDR_RPTHINT_Msk             (_UINT32_(0x1) << DWDT_WDT0_IDR_RPTHINT_Pos)         /* (DWDT_WDT0_IDR) Reload Repeat Period Interrupt Disable Mask */
#define DWDT_WDT0_IDR_RPTHINT(value)          (DWDT_WDT0_IDR_RPTHINT_Msk & (_UINT32_(value) << DWDT_WDT0_IDR_RPTHINT_Pos)) /* Assigment of value for RPTHINT in the DWDT_WDT0_IDR register */
#define DWDT_WDT0_IDR_LVLINT_Pos              _UINT32_(2)                                          /* (DWDT_WDT0_IDR) Interrupt Level Threshold Interrupt Disable Position */
#define DWDT_WDT0_IDR_LVLINT_Msk              (_UINT32_(0x1) << DWDT_WDT0_IDR_LVLINT_Pos)          /* (DWDT_WDT0_IDR) Interrupt Level Threshold Interrupt Disable Mask */
#define DWDT_WDT0_IDR_LVLINT(value)           (DWDT_WDT0_IDR_LVLINT_Msk & (_UINT32_(value) << DWDT_WDT0_IDR_LVLINT_Pos)) /* Assigment of value for LVLINT in the DWDT_WDT0_IDR register */
#define DWDT_WDT0_IDR_W1PERINT_Pos            _UINT32_(3)                                          /* (DWDT_WDT0_IDR) Watchdog 1 Overflow Interrupt Disable Position */
#define DWDT_WDT0_IDR_W1PERINT_Msk            (_UINT32_(0x1) << DWDT_WDT0_IDR_W1PERINT_Pos)        /* (DWDT_WDT0_IDR) Watchdog 1 Overflow Interrupt Disable Mask */
#define DWDT_WDT0_IDR_W1PERINT(value)         (DWDT_WDT0_IDR_W1PERINT_Msk & (_UINT32_(value) << DWDT_WDT0_IDR_W1PERINT_Pos)) /* Assigment of value for W1PERINT in the DWDT_WDT0_IDR register */
#define DWDT_WDT0_IDR_W1RPTHINT_Pos           _UINT32_(4)                                          /* (DWDT_WDT0_IDR) Watchdog 1 Repeat Threshold Interrupt Disable Position */
#define DWDT_WDT0_IDR_W1RPTHINT_Msk           (_UINT32_(0x1) << DWDT_WDT0_IDR_W1RPTHINT_Pos)       /* (DWDT_WDT0_IDR) Watchdog 1 Repeat Threshold Interrupt Disable Mask */
#define DWDT_WDT0_IDR_W1RPTHINT(value)        (DWDT_WDT0_IDR_W1RPTHINT_Msk & (_UINT32_(value) << DWDT_WDT0_IDR_W1RPTHINT_Pos)) /* Assigment of value for W1RPTHINT in the DWDT_WDT0_IDR register */
#define DWDT_WDT0_IDR_RLDERR_Pos              _UINT32_(5)                                          /* (DWDT_WDT0_IDR) Reload Command Error Interrupt Disable Position */
#define DWDT_WDT0_IDR_RLDERR_Msk              (_UINT32_(0x1) << DWDT_WDT0_IDR_RLDERR_Pos)          /* (DWDT_WDT0_IDR) Reload Command Error Interrupt Disable Mask */
#define DWDT_WDT0_IDR_RLDERR(value)           (DWDT_WDT0_IDR_RLDERR_Msk & (_UINT32_(value) << DWDT_WDT0_IDR_RLDERR_Pos)) /* Assigment of value for RLDERR in the DWDT_WDT0_IDR register */
#define DWDT_WDT0_IDR_Msk                     _UINT32_(0x0000003F)                                 /* (DWDT_WDT0_IDR) Register Mask  */


/* -------- DWDT_WDT0_ISR : (DWDT Offset: 0x122C) ( R/ 32) Watchdog 0 Interrupt Status Register -------- */
#define DWDT_WDT0_ISR_PERINT_Pos              _UINT32_(0)                                          /* (DWDT_WDT0_ISR) Overflow Period Status (cleared on read) Position */
#define DWDT_WDT0_ISR_PERINT_Msk              (_UINT32_(0x1) << DWDT_WDT0_ISR_PERINT_Pos)          /* (DWDT_WDT0_ISR) Overflow Period Status (cleared on read) Mask */
#define DWDT_WDT0_ISR_PERINT(value)           (DWDT_WDT0_ISR_PERINT_Msk & (_UINT32_(value) << DWDT_WDT0_ISR_PERINT_Pos)) /* Assigment of value for PERINT in the DWDT_WDT0_ISR register */
#define DWDT_WDT0_ISR_RPTHINT_Pos             _UINT32_(1)                                          /* (DWDT_WDT0_ISR) Reload Repeat Period Status (cleared on read) Position */
#define DWDT_WDT0_ISR_RPTHINT_Msk             (_UINT32_(0x1) << DWDT_WDT0_ISR_RPTHINT_Pos)         /* (DWDT_WDT0_ISR) Reload Repeat Period Status (cleared on read) Mask */
#define DWDT_WDT0_ISR_RPTHINT(value)          (DWDT_WDT0_ISR_RPTHINT_Msk & (_UINT32_(value) << DWDT_WDT0_ISR_RPTHINT_Pos)) /* Assigment of value for RPTHINT in the DWDT_WDT0_ISR register */
#define DWDT_WDT0_ISR_LVLINT_Pos              _UINT32_(2)                                          /* (DWDT_WDT0_ISR) Interrupt Level Threshold Status (cleared on read) Position */
#define DWDT_WDT0_ISR_LVLINT_Msk              (_UINT32_(0x1) << DWDT_WDT0_ISR_LVLINT_Pos)          /* (DWDT_WDT0_ISR) Interrupt Level Threshold Status (cleared on read) Mask */
#define DWDT_WDT0_ISR_LVLINT(value)           (DWDT_WDT0_ISR_LVLINT_Msk & (_UINT32_(value) << DWDT_WDT0_ISR_LVLINT_Pos)) /* Assigment of value for LVLINT in the DWDT_WDT0_ISR register */
#define DWDT_WDT0_ISR_W1PERINT_Pos            _UINT32_(3)                                          /* (DWDT_WDT0_ISR) Watchdog 1 Overflow Interrupt Status Position */
#define DWDT_WDT0_ISR_W1PERINT_Msk            (_UINT32_(0x1) << DWDT_WDT0_ISR_W1PERINT_Pos)        /* (DWDT_WDT0_ISR) Watchdog 1 Overflow Interrupt Status Mask */
#define DWDT_WDT0_ISR_W1PERINT(value)         (DWDT_WDT0_ISR_W1PERINT_Msk & (_UINT32_(value) << DWDT_WDT0_ISR_W1PERINT_Pos)) /* Assigment of value for W1PERINT in the DWDT_WDT0_ISR register */
#define DWDT_WDT0_ISR_W1RPTHINT_Pos           _UINT32_(4)                                          /* (DWDT_WDT0_ISR) Watchdog 1 Repeat Threshold Interrupt Status Position */
#define DWDT_WDT0_ISR_W1RPTHINT_Msk           (_UINT32_(0x1) << DWDT_WDT0_ISR_W1RPTHINT_Pos)       /* (DWDT_WDT0_ISR) Watchdog 1 Repeat Threshold Interrupt Status Mask */
#define DWDT_WDT0_ISR_W1RPTHINT(value)        (DWDT_WDT0_ISR_W1RPTHINT_Msk & (_UINT32_(value) << DWDT_WDT0_ISR_W1RPTHINT_Pos)) /* Assigment of value for W1RPTHINT in the DWDT_WDT0_ISR register */
#define DWDT_WDT0_ISR_RLDERR_Pos              _UINT32_(5)                                          /* (DWDT_WDT0_ISR) Reload Command Error Status (cleared on read) Position */
#define DWDT_WDT0_ISR_RLDERR_Msk              (_UINT32_(0x1) << DWDT_WDT0_ISR_RLDERR_Pos)          /* (DWDT_WDT0_ISR) Reload Command Error Status (cleared on read) Mask */
#define DWDT_WDT0_ISR_RLDERR(value)           (DWDT_WDT0_ISR_RLDERR_Msk & (_UINT32_(value) << DWDT_WDT0_ISR_RLDERR_Pos)) /* Assigment of value for RLDERR in the DWDT_WDT0_ISR register */
#define DWDT_WDT0_ISR_Msk                     _UINT32_(0x0000003F)                                 /* (DWDT_WDT0_ISR) Register Mask  */


/* -------- DWDT_WDT0_IMR : (DWDT Offset: 0x1230) ( R/ 32) Watchdog 0 Interrupt Mask Register -------- */
#define DWDT_WDT0_IMR_PERINT_Pos              _UINT32_(0)                                          /* (DWDT_WDT0_IMR) Overflow Period Interrupt Mask Position */
#define DWDT_WDT0_IMR_PERINT_Msk              (_UINT32_(0x1) << DWDT_WDT0_IMR_PERINT_Pos)          /* (DWDT_WDT0_IMR) Overflow Period Interrupt Mask Mask */
#define DWDT_WDT0_IMR_PERINT(value)           (DWDT_WDT0_IMR_PERINT_Msk & (_UINT32_(value) << DWDT_WDT0_IMR_PERINT_Pos)) /* Assigment of value for PERINT in the DWDT_WDT0_IMR register */
#define DWDT_WDT0_IMR_RPTHINT_Pos             _UINT32_(1)                                          /* (DWDT_WDT0_IMR) Reload Repeat Period Interrupt Mask Position */
#define DWDT_WDT0_IMR_RPTHINT_Msk             (_UINT32_(0x1) << DWDT_WDT0_IMR_RPTHINT_Pos)         /* (DWDT_WDT0_IMR) Reload Repeat Period Interrupt Mask Mask */
#define DWDT_WDT0_IMR_RPTHINT(value)          (DWDT_WDT0_IMR_RPTHINT_Msk & (_UINT32_(value) << DWDT_WDT0_IMR_RPTHINT_Pos)) /* Assigment of value for RPTHINT in the DWDT_WDT0_IMR register */
#define DWDT_WDT0_IMR_LVLINT_Pos              _UINT32_(2)                                          /* (DWDT_WDT0_IMR) Interrupt Level Threshold Interrupt Mask Position */
#define DWDT_WDT0_IMR_LVLINT_Msk              (_UINT32_(0x1) << DWDT_WDT0_IMR_LVLINT_Pos)          /* (DWDT_WDT0_IMR) Interrupt Level Threshold Interrupt Mask Mask */
#define DWDT_WDT0_IMR_LVLINT(value)           (DWDT_WDT0_IMR_LVLINT_Msk & (_UINT32_(value) << DWDT_WDT0_IMR_LVLINT_Pos)) /* Assigment of value for LVLINT in the DWDT_WDT0_IMR register */
#define DWDT_WDT0_IMR_W1PERINT_Pos            _UINT32_(3)                                          /* (DWDT_WDT0_IMR) Watchdog 1 Overflow Interrupt Mask Position */
#define DWDT_WDT0_IMR_W1PERINT_Msk            (_UINT32_(0x1) << DWDT_WDT0_IMR_W1PERINT_Pos)        /* (DWDT_WDT0_IMR) Watchdog 1 Overflow Interrupt Mask Mask */
#define DWDT_WDT0_IMR_W1PERINT(value)         (DWDT_WDT0_IMR_W1PERINT_Msk & (_UINT32_(value) << DWDT_WDT0_IMR_W1PERINT_Pos)) /* Assigment of value for W1PERINT in the DWDT_WDT0_IMR register */
#define DWDT_WDT0_IMR_W1RPTHINT_Pos           _UINT32_(4)                                          /* (DWDT_WDT0_IMR) Watchdog 1 Repeat Threshold Interrupt Mask Position */
#define DWDT_WDT0_IMR_W1RPTHINT_Msk           (_UINT32_(0x1) << DWDT_WDT0_IMR_W1RPTHINT_Pos)       /* (DWDT_WDT0_IMR) Watchdog 1 Repeat Threshold Interrupt Mask Mask */
#define DWDT_WDT0_IMR_W1RPTHINT(value)        (DWDT_WDT0_IMR_W1RPTHINT_Msk & (_UINT32_(value) << DWDT_WDT0_IMR_W1RPTHINT_Pos)) /* Assigment of value for W1RPTHINT in the DWDT_WDT0_IMR register */
#define DWDT_WDT0_IMR_RLDERR_Pos              _UINT32_(5)                                          /* (DWDT_WDT0_IMR) Reload Command Error Interrupt Mask Position */
#define DWDT_WDT0_IMR_RLDERR_Msk              (_UINT32_(0x1) << DWDT_WDT0_IMR_RLDERR_Pos)          /* (DWDT_WDT0_IMR) Reload Command Error Interrupt Mask Mask */
#define DWDT_WDT0_IMR_RLDERR(value)           (DWDT_WDT0_IMR_RLDERR_Msk & (_UINT32_(value) << DWDT_WDT0_IMR_RLDERR_Pos)) /* Assigment of value for RLDERR in the DWDT_WDT0_IMR register */
#define DWDT_WDT0_IMR_Msk                     _UINT32_(0x0000003F)                                 /* (DWDT_WDT0_IMR) Register Mask  */


/* -------- DWDT_WDT1_LVLLIM : (DWDT Offset: 0x1234) (R/W 32) Watchdog 1 Level Limits Register -------- */
#define DWDT_WDT1_LVLLIM_LVLMIN_Pos           _UINT32_(0)                                          /* (DWDT_WDT1_LVLLIM) Minimum Level Position */
#define DWDT_WDT1_LVLLIM_LVLMIN_Msk           (_UINT32_(0xFFF) << DWDT_WDT1_LVLLIM_LVLMIN_Pos)     /* (DWDT_WDT1_LVLLIM) Minimum Level Mask */
#define DWDT_WDT1_LVLLIM_LVLMIN(value)        (DWDT_WDT1_LVLLIM_LVLMIN_Msk & (_UINT32_(value) << DWDT_WDT1_LVLLIM_LVLMIN_Pos)) /* Assigment of value for LVLMIN in the DWDT_WDT1_LVLLIM register */
#define DWDT_WDT1_LVLLIM_LVLMAX_Pos           _UINT32_(16)                                         /* (DWDT_WDT1_LVLLIM) Maximum Level Position */
#define DWDT_WDT1_LVLLIM_LVLMAX_Msk           (_UINT32_(0xFFF) << DWDT_WDT1_LVLLIM_LVLMAX_Pos)     /* (DWDT_WDT1_LVLLIM) Maximum Level Mask */
#define DWDT_WDT1_LVLLIM_LVLMAX(value)        (DWDT_WDT1_LVLLIM_LVLMAX_Msk & (_UINT32_(value) << DWDT_WDT1_LVLLIM_LVLMAX_Pos)) /* Assigment of value for LVLMAX in the DWDT_WDT1_LVLLIM register */
#define DWDT_WDT1_LVLLIM_Msk                  _UINT32_(0x0FFF0FFF)                                 /* (DWDT_WDT1_LVLLIM) Register Mask  */


/* -------- DWDT_WDT1_RLIM : (DWDT Offset: 0x1238) (R/W 32) Watchdog 1 Repeat Limits Register -------- */
#define DWDT_WDT1_RLIM_RPTHMIN_Pos            _UINT32_(0)                                          /* (DWDT_WDT1_RLIM) Minimum Repeat Threshold Position */
#define DWDT_WDT1_RLIM_RPTHMIN_Msk            (_UINT32_(0xFFF) << DWDT_WDT1_RLIM_RPTHMIN_Pos)      /* (DWDT_WDT1_RLIM) Minimum Repeat Threshold Mask */
#define DWDT_WDT1_RLIM_RPTHMIN(value)         (DWDT_WDT1_RLIM_RPTHMIN_Msk & (_UINT32_(value) << DWDT_WDT1_RLIM_RPTHMIN_Pos)) /* Assigment of value for RPTHMIN in the DWDT_WDT1_RLIM register */
#define DWDT_WDT1_RLIM_RPTHMAX_Pos            _UINT32_(16)                                         /* (DWDT_WDT1_RLIM) Maximum Repeat Threshold Position */
#define DWDT_WDT1_RLIM_RPTHMAX_Msk            (_UINT32_(0xFFF) << DWDT_WDT1_RLIM_RPTHMAX_Pos)      /* (DWDT_WDT1_RLIM) Maximum Repeat Threshold Mask */
#define DWDT_WDT1_RLIM_RPTHMAX(value)         (DWDT_WDT1_RLIM_RPTHMAX_Msk & (_UINT32_(value) << DWDT_WDT1_RLIM_RPTHMAX_Pos)) /* Assigment of value for RPTHMAX in the DWDT_WDT1_RLIM register */
#define DWDT_WDT1_RLIM_Msk                    _UINT32_(0x0FFF0FFF)                                 /* (DWDT_WDT1_RLIM) Register Mask  */


/* -------- DWDT_WDT1_PLIM : (DWDT Offset: 0x123C) (R/W 32) Watchdog 1 Period Limits Register -------- */
#define DWDT_WDT1_PLIM_PERMIN_Pos             _UINT32_(0)                                          /* (DWDT_WDT1_PLIM) Minimum Period Position */
#define DWDT_WDT1_PLIM_PERMIN_Msk             (_UINT32_(0xFFF) << DWDT_WDT1_PLIM_PERMIN_Pos)       /* (DWDT_WDT1_PLIM) Minimum Period Mask */
#define DWDT_WDT1_PLIM_PERMIN(value)          (DWDT_WDT1_PLIM_PERMIN_Msk & (_UINT32_(value) << DWDT_WDT1_PLIM_PERMIN_Pos)) /* Assigment of value for PERMIN in the DWDT_WDT1_PLIM register */
#define DWDT_WDT1_PLIM_PERMAX_Pos             _UINT32_(16)                                         /* (DWDT_WDT1_PLIM) Maximum Period Position */
#define DWDT_WDT1_PLIM_PERMAX_Msk             (_UINT32_(0xFFF) << DWDT_WDT1_PLIM_PERMAX_Pos)       /* (DWDT_WDT1_PLIM) Maximum Period Mask */
#define DWDT_WDT1_PLIM_PERMAX(value)          (DWDT_WDT1_PLIM_PERMAX_Msk & (_UINT32_(value) << DWDT_WDT1_PLIM_PERMAX_Pos)) /* Assigment of value for PERMAX in the DWDT_WDT1_PLIM register */
#define DWDT_WDT1_PLIM_Msk                    _UINT32_(0x0FFF0FFF)                                 /* (DWDT_WDT1_PLIM) Register Mask  */


/** \brief DWDT register offsets definitions */
#define DWDT_WDT1_CR_REG_OFST          _UINT32_(0x00)      /* (DWDT_WDT1_CR) Watchdog 1 Control Register Offset */
#define DWDT_WDT1_MR_REG_OFST          _UINT32_(0x04)      /* (DWDT_WDT1_MR) Watchdog 1 Mode Register Offset */
#define DWDT_WDT1_VR_REG_OFST          _UINT32_(0x08)      /* (DWDT_WDT1_VR) Watchdog 1 Value Register Offset */
#define DWDT_WDT1_WL_REG_OFST          _UINT32_(0x0C)      /* (DWDT_WDT1_WL) Watchdog 1 Window Level Register Offset */
#define DWDT_WDT1_IL_REG_OFST          _UINT32_(0x10)      /* (DWDT_WDT1_IL) Watchdog 1 Interrupt Level Register Offset */
#define DWDT_WDT1_IER_REG_OFST         _UINT32_(0x14)      /* (DWDT_WDT1_IER) Watchdog 1 Interrupt Enable Register Offset */
#define DWDT_WDT1_IDR_REG_OFST         _UINT32_(0x18)      /* (DWDT_WDT1_IDR) Watchdog 1 Interrupt Disable Register Offset */
#define DWDT_WDT1_ISR_REG_OFST         _UINT32_(0x1C)      /* (DWDT_WDT1_ISR) Watchdog 1 Interrupt Status Register Offset */
#define DWDT_WDT1_IMR_REG_OFST         _UINT32_(0x20)      /* (DWDT_WDT1_IMR) Watchdog 1 Interrupt Mask Register Offset */
#define DWDT_WDT0_CR_REG_OFST          _UINT32_(0x1210)    /* (DWDT_WDT0_CR) Watchdog 0 Control Register Offset */
#define DWDT_WDT0_MR_REG_OFST          _UINT32_(0x1214)    /* (DWDT_WDT0_MR) Watchdog 0 Mode Register Offset */
#define DWDT_WDT0_VR_REG_OFST          _UINT32_(0x1218)    /* (DWDT_WDT0_VR) Watchdog 0 Value Register Offset */
#define DWDT_WDT0_WL_REG_OFST          _UINT32_(0x121C)    /* (DWDT_WDT0_WL) Watchdog 0 Window Level Offset */
#define DWDT_WDT0_IL_REG_OFST          _UINT32_(0x1220)    /* (DWDT_WDT0_IL) Watchdog 0 Interrupt Level Offset */
#define DWDT_WDT0_IER_REG_OFST         _UINT32_(0x1224)    /* (DWDT_WDT0_IER) Watchdog 0 Interrupt Enable Register Offset */
#define DWDT_WDT0_IDR_REG_OFST         _UINT32_(0x1228)    /* (DWDT_WDT0_IDR) Watchdog 0 Interrupt Disable Register Offset */
#define DWDT_WDT0_ISR_REG_OFST         _UINT32_(0x122C)    /* (DWDT_WDT0_ISR) Watchdog 0 Interrupt Status Register Offset */
#define DWDT_WDT0_IMR_REG_OFST         _UINT32_(0x1230)    /* (DWDT_WDT0_IMR) Watchdog 0 Interrupt Mask Register Offset */
#define DWDT_WDT1_LVLLIM_REG_OFST      _UINT32_(0x1234)    /* (DWDT_WDT1_LVLLIM) Watchdog 1 Level Limits Register Offset */
#define DWDT_WDT1_RLIM_REG_OFST        _UINT32_(0x1238)    /* (DWDT_WDT1_RLIM) Watchdog 1 Repeat Limits Register Offset */
#define DWDT_WDT1_PLIM_REG_OFST        _UINT32_(0x123C)    /* (DWDT_WDT1_PLIM) Watchdog 1 Period Limits Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief DWDT register API structure */
typedef struct
{
  __O   uint32_t                       DWDT_WDT1_CR;       /**< Offset: 0x00 ( /W  32) Watchdog 1 Control Register */
  __IO  uint32_t                       DWDT_WDT1_MR;       /**< Offset: 0x04 (R/W  32) Watchdog 1 Mode Register */
  __I   uint32_t                       DWDT_WDT1_VR;       /**< Offset: 0x08 (R/   32) Watchdog 1 Value Register */
  __IO  uint32_t                       DWDT_WDT1_WL;       /**< Offset: 0x0C (R/W  32) Watchdog 1 Window Level Register */
  __IO  uint32_t                       DWDT_WDT1_IL;       /**< Offset: 0x10 (R/W  32) Watchdog 1 Interrupt Level Register */
  __O   uint32_t                       DWDT_WDT1_IER;      /**< Offset: 0x14 ( /W  32) Watchdog 1 Interrupt Enable Register */
  __O   uint32_t                       DWDT_WDT1_IDR;      /**< Offset: 0x18 ( /W  32) Watchdog 1 Interrupt Disable Register */
  __I   uint32_t                       DWDT_WDT1_ISR;      /**< Offset: 0x1C (R/   32) Watchdog 1 Interrupt Status Register */
  __I   uint32_t                       DWDT_WDT1_IMR;      /**< Offset: 0x20 (R/   32) Watchdog 1 Interrupt Mask Register */
  __I   uint8_t                        Reserved1[0x11EC];
  __O   uint32_t                       DWDT_WDT0_CR;       /**< Offset: 0x1210 ( /W  32) Watchdog 0 Control Register */
  __IO  uint32_t                       DWDT_WDT0_MR;       /**< Offset: 0x1214 (R/W  32) Watchdog 0 Mode Register */
  __I   uint32_t                       DWDT_WDT0_VR;       /**< Offset: 0x1218 (R/   32) Watchdog 0 Value Register */
  __IO  uint32_t                       DWDT_WDT0_WL;       /**< Offset: 0x121C (R/W  32) Watchdog 0 Window Level */
  __IO  uint32_t                       DWDT_WDT0_IL;       /**< Offset: 0x1220 (R/W  32) Watchdog 0 Interrupt Level */
  __O   uint32_t                       DWDT_WDT0_IER;      /**< Offset: 0x1224 ( /W  32) Watchdog 0 Interrupt Enable Register */
  __O   uint32_t                       DWDT_WDT0_IDR;      /**< Offset: 0x1228 ( /W  32) Watchdog 0 Interrupt Disable Register */
  __I   uint32_t                       DWDT_WDT0_ISR;      /**< Offset: 0x122C (R/   32) Watchdog 0 Interrupt Status Register */
  __I   uint32_t                       DWDT_WDT0_IMR;      /**< Offset: 0x1230 (R/   32) Watchdog 0 Interrupt Mask Register */
  __IO  uint32_t                       DWDT_WDT1_LVLLIM;   /**< Offset: 0x1234 (R/W  32) Watchdog 1 Level Limits Register */
  __IO  uint32_t                       DWDT_WDT1_RLIM;     /**< Offset: 0x1238 (R/W  32) Watchdog 1 Repeat Limits Register */
  __IO  uint32_t                       DWDT_WDT1_PLIM;     /**< Offset: 0x123C (R/W  32) Watchdog 1 Period Limits Register */
} dwdt_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CXMTSH_DWDT_COMPONENT_H_ */
