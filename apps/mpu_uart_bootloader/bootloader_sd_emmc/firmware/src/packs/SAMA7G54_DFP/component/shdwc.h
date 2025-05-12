/*
 * Component description for SHDWC
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

/*      file generated from device description file (ATDF) version None       */
#ifndef _SAMA7G5_SHDWC_COMPONENT_H_
#define _SAMA7G5_SHDWC_COMPONENT_H_

/* ************************************************************************** */
/*                     SOFTWARE API DEFINITION FOR SHDWC                      */
/* ************************************************************************** */

/* -------- SHDW_CR : (SHDWC Offset: 0x00) ( /W 32) Control Register -------- */
#define SHDW_CR_SHDW_Pos                      _UINT32_(0)                                          /* (SHDW_CR) Shutdown Command Position */
#define SHDW_CR_SHDW_Msk                      (_UINT32_(0x1) << SHDW_CR_SHDW_Pos)                  /* (SHDW_CR) Shutdown Command Mask */
#define SHDW_CR_SHDW(value)                   (SHDW_CR_SHDW_Msk & (_UINT32_(value) << SHDW_CR_SHDW_Pos)) /* Assignment of value for SHDW in the SHDW_CR register */
#define   SHDW_CR_SHDW_0_Val                  _UINT32_(0x0)                                        /* (SHDW_CR) No effect.  */
#define   SHDW_CR_SHDW_1_Val                  _UINT32_(0x1)                                        /* (SHDW_CR) If KEY value is correct, asserts the SHDN pin.  */
#define SHDW_CR_SHDW_0                        (SHDW_CR_SHDW_0_Val << SHDW_CR_SHDW_Pos)             /* (SHDW_CR) No effect. Position */
#define SHDW_CR_SHDW_1                        (SHDW_CR_SHDW_1_Val << SHDW_CR_SHDW_Pos)             /* (SHDW_CR) If KEY value is correct, asserts the SHDN pin. Position */
#define SHDW_CR_LPMEN_Pos                     _UINT32_(21)                                         /* (SHDW_CR) LPM Pad Enable Position */
#define SHDW_CR_LPMEN_Msk                     (_UINT32_(0x1) << SHDW_CR_LPMEN_Pos)                 /* (SHDW_CR) LPM Pad Enable Mask */
#define SHDW_CR_LPMEN(value)                  (SHDW_CR_LPMEN_Msk & (_UINT32_(value) << SHDW_CR_LPMEN_Pos)) /* Assignment of value for LPMEN in the SHDW_CR register */
#define   SHDW_CR_LPMEN_0_Val                 _UINT32_(0x0)                                        /* (SHDW_CR) No effect.  */
#define   SHDW_CR_LPMEN_1_Val                 _UINT32_(0x1)                                        /* (SHDW_CR) The LPM pad is set high (external regulator is set in special powering state).  */
#define SHDW_CR_LPMEN_0                       (SHDW_CR_LPMEN_0_Val << SHDW_CR_LPMEN_Pos)           /* (SHDW_CR) No effect. Position */
#define SHDW_CR_LPMEN_1                       (SHDW_CR_LPMEN_1_Val << SHDW_CR_LPMEN_Pos)           /* (SHDW_CR) The LPM pad is set high (external regulator is set in special powering state). Position */
#define SHDW_CR_LPMDIS_Pos                    _UINT32_(22)                                         /* (SHDW_CR) LPM Pad Disable Position */
#define SHDW_CR_LPMDIS_Msk                    (_UINT32_(0x1) << SHDW_CR_LPMDIS_Pos)                /* (SHDW_CR) LPM Pad Disable Mask */
#define SHDW_CR_LPMDIS(value)                 (SHDW_CR_LPMDIS_Msk & (_UINT32_(value) << SHDW_CR_LPMDIS_Pos)) /* Assignment of value for LPMDIS in the SHDW_CR register */
#define   SHDW_CR_LPMDIS_0_Val                _UINT32_(0x0)                                        /* (SHDW_CR) No effect.  */
#define   SHDW_CR_LPMDIS_1_Val                _UINT32_(0x1)                                        /* (SHDW_CR) The LPM pad is set low (external regulator is set in standard powering state).  */
#define SHDW_CR_LPMDIS_0                      (SHDW_CR_LPMDIS_0_Val << SHDW_CR_LPMDIS_Pos)         /* (SHDW_CR) No effect. Position */
#define SHDW_CR_LPMDIS_1                      (SHDW_CR_LPMDIS_1_Val << SHDW_CR_LPMDIS_Pos)         /* (SHDW_CR) The LPM pad is set low (external regulator is set in standard powering state). Position */
#define SHDW_CR_KEY_Pos                       _UINT32_(24)                                         /* (SHDW_CR) Password Position */
#define SHDW_CR_KEY_Msk                       (_UINT32_(0xFF) << SHDW_CR_KEY_Pos)                  /* (SHDW_CR) Password Mask */
#define SHDW_CR_KEY(value)                    (SHDW_CR_KEY_Msk & (_UINT32_(value) << SHDW_CR_KEY_Pos)) /* Assignment of value for KEY in the SHDW_CR register */
#define   SHDW_CR_KEY_PASSWD_Val              _UINT32_(0xA5)                                       /* (SHDW_CR) Writing any other value in this field aborts the write operation.  */
#define SHDW_CR_KEY_PASSWD                    (SHDW_CR_KEY_PASSWD_Val << SHDW_CR_KEY_Pos)          /* (SHDW_CR) Writing any other value in this field aborts the write operation. Position */
#define SHDW_CR_Msk                           _UINT32_(0xFF600001)                                 /* (SHDW_CR) Register Mask  */


/* -------- SHDW_MR : (SHDWC Offset: 0x04) (R/W 32) Mode Register -------- */
#define SHDW_MR_RESETVALUE                    _UINT32_(0x100000)                                   /*  (SHDW_MR) Mode Register  Reset Value */

#define SHDW_MR_RTTWKEN_Pos                   _UINT32_(16)                                         /* (SHDW_MR) Real-time Timer Wake-up Enable Position */
#define SHDW_MR_RTTWKEN_Msk                   (_UINT32_(0x1) << SHDW_MR_RTTWKEN_Pos)               /* (SHDW_MR) Real-time Timer Wake-up Enable Mask */
#define SHDW_MR_RTTWKEN(value)                (SHDW_MR_RTTWKEN_Msk & (_UINT32_(value) << SHDW_MR_RTTWKEN_Pos)) /* Assignment of value for RTTWKEN in the SHDW_MR register */
#define   SHDW_MR_RTTWKEN_0_Val               _UINT32_(0x0)                                        /* (SHDW_MR) The RTT Alarm signal has no effect on the SHDWC.  */
#define   SHDW_MR_RTTWKEN_1_Val               _UINT32_(0x1)                                        /* (SHDW_MR) The RTT Alarm signal forces the de-assertion of the SHDN pin.  */
#define SHDW_MR_RTTWKEN_0                     (SHDW_MR_RTTWKEN_0_Val << SHDW_MR_RTTWKEN_Pos)       /* (SHDW_MR) The RTT Alarm signal has no effect on the SHDWC. Position */
#define SHDW_MR_RTTWKEN_1                     (SHDW_MR_RTTWKEN_1_Val << SHDW_MR_RTTWKEN_Pos)       /* (SHDW_MR) The RTT Alarm signal forces the de-assertion of the SHDN pin. Position */
#define SHDW_MR_RTCWKEN_Pos                   _UINT32_(17)                                         /* (SHDW_MR) Real-time Clock Wake-up Enable Position */
#define SHDW_MR_RTCWKEN_Msk                   (_UINT32_(0x1) << SHDW_MR_RTCWKEN_Pos)               /* (SHDW_MR) Real-time Clock Wake-up Enable Mask */
#define SHDW_MR_RTCWKEN(value)                (SHDW_MR_RTCWKEN_Msk & (_UINT32_(value) << SHDW_MR_RTCWKEN_Pos)) /* Assignment of value for RTCWKEN in the SHDW_MR register */
#define   SHDW_MR_RTCWKEN_0_Val               _UINT32_(0x0)                                        /* (SHDW_MR) The RTC Alarm signal has no effect on the SHDWC.  */
#define   SHDW_MR_RTCWKEN_1_Val               _UINT32_(0x1)                                        /* (SHDW_MR) The RTC Alarm signal forces the de-assertion of the SHDN pin.  */
#define SHDW_MR_RTCWKEN_0                     (SHDW_MR_RTCWKEN_0_Val << SHDW_MR_RTCWKEN_Pos)       /* (SHDW_MR) The RTC Alarm signal has no effect on the SHDWC. Position */
#define SHDW_MR_RTCWKEN_1                     (SHDW_MR_RTCWKEN_1_Val << SHDW_MR_RTCWKEN_Pos)       /* (SHDW_MR) The RTC Alarm signal forces the de-assertion of the SHDN pin. Position */
#define SHDW_MR_WKUPDBC_Pos                   _UINT32_(24)                                         /* (SHDW_MR) Wake-up Inputs Debouncer Period Position */
#define SHDW_MR_WKUPDBC_Msk                   (_UINT32_(0x7) << SHDW_MR_WKUPDBC_Pos)               /* (SHDW_MR) Wake-up Inputs Debouncer Period Mask */
#define SHDW_MR_WKUPDBC(value)                (SHDW_MR_WKUPDBC_Msk & (_UINT32_(value) << SHDW_MR_WKUPDBC_Pos)) /* Assignment of value for WKUPDBC in the SHDW_MR register */
#define   SHDW_MR_WKUPDBC_IMMEDIATE_Val       _UINT32_(0x0)                                        /* (SHDW_MR) Immediate, no debouncing, detected active at least on one MD_SLCK edge.  */
#define   SHDW_MR_WKUPDBC_3_SLCK_Val          _UINT32_(0x1)                                        /* (SHDW_MR) PIOBUx shall be in its active state for at least 3 MD_SLCK periods  */
#define   SHDW_MR_WKUPDBC_32_SLCK_Val         _UINT32_(0x2)                                        /* (SHDW_MR) PIOBUx shall be in its active state for at least 32 MD_SLCK periods  */
#define   SHDW_MR_WKUPDBC_512_SLCK_Val        _UINT32_(0x3)                                        /* (SHDW_MR) PIOBUx shall be in its active state for at least 512 MD_SLCK periods  */
#define   SHDW_MR_WKUPDBC_4096_SLCK_Val       _UINT32_(0x4)                                        /* (SHDW_MR) PIOBUx shall be in its active state for at least 4,096 MD_SLCK periods  */
#define   SHDW_MR_WKUPDBC_32768_SLCK_Val      _UINT32_(0x5)                                        /* (SHDW_MR) PIOBUx shall be in its active state for at least 32,768 MD_SLCK periods  */
#define SHDW_MR_WKUPDBC_IMMEDIATE             (SHDW_MR_WKUPDBC_IMMEDIATE_Val << SHDW_MR_WKUPDBC_Pos) /* (SHDW_MR) Immediate, no debouncing, detected active at least on one MD_SLCK edge. Position */
#define SHDW_MR_WKUPDBC_3_SLCK                (SHDW_MR_WKUPDBC_3_SLCK_Val << SHDW_MR_WKUPDBC_Pos)  /* (SHDW_MR) PIOBUx shall be in its active state for at least 3 MD_SLCK periods Position */
#define SHDW_MR_WKUPDBC_32_SLCK               (SHDW_MR_WKUPDBC_32_SLCK_Val << SHDW_MR_WKUPDBC_Pos) /* (SHDW_MR) PIOBUx shall be in its active state for at least 32 MD_SLCK periods Position */
#define SHDW_MR_WKUPDBC_512_SLCK              (SHDW_MR_WKUPDBC_512_SLCK_Val << SHDW_MR_WKUPDBC_Pos) /* (SHDW_MR) PIOBUx shall be in its active state for at least 512 MD_SLCK periods Position */
#define SHDW_MR_WKUPDBC_4096_SLCK             (SHDW_MR_WKUPDBC_4096_SLCK_Val << SHDW_MR_WKUPDBC_Pos) /* (SHDW_MR) PIOBUx shall be in its active state for at least 4,096 MD_SLCK periods Position */
#define SHDW_MR_WKUPDBC_32768_SLCK            (SHDW_MR_WKUPDBC_32768_SLCK_Val << SHDW_MR_WKUPDBC_Pos) /* (SHDW_MR) PIOBUx shall be in its active state for at least 32,768 MD_SLCK periods Position */
#define SHDW_MR_Msk                           _UINT32_(0x07030000)                                 /* (SHDW_MR) Register Mask  */


/* -------- SHDW_SR : (SHDWC Offset: 0x08) ( R/ 32) Status Register -------- */
#define SHDW_SR_RESETVALUE                    _UINT32_(0x00)                                       /*  (SHDW_SR) Status Register  Reset Value */

#define SHDW_SR_WKUPS_Pos                     _UINT32_(0)                                          /* (SHDW_SR) Wake-up Status Position */
#define SHDW_SR_WKUPS_Msk                     (_UINT32_(0x1) << SHDW_SR_WKUPS_Pos)                 /* (SHDW_SR) Wake-up Status Mask */
#define SHDW_SR_WKUPS(value)                  (SHDW_SR_WKUPS_Msk & (_UINT32_(value) << SHDW_SR_WKUPS_Pos)) /* Assignment of value for WKUPS in the SHDW_SR register */
#define   SHDW_SR_WKUPS_NO_Val                _UINT32_(0x0)                                        /* (SHDW_SR) No wake-up due to the assertion of the wake-up pins has occurred since the last read of SHDW_SR.  */
#define   SHDW_SR_WKUPS_PRESENT_Val           _UINT32_(0x1)                                        /* (SHDW_SR) At least one wake-up due to the assertion of the wake-up pins has occurred since the last read of SHDW_SR.  */
#define SHDW_SR_WKUPS_NO                      (SHDW_SR_WKUPS_NO_Val << SHDW_SR_WKUPS_Pos)          /* (SHDW_SR) No wake-up due to the assertion of the wake-up pins has occurred since the last read of SHDW_SR. Position */
#define SHDW_SR_WKUPS_PRESENT                 (SHDW_SR_WKUPS_PRESENT_Val << SHDW_SR_WKUPS_Pos)     /* (SHDW_SR) At least one wake-up due to the assertion of the wake-up pins has occurred since the last read of SHDW_SR. Position */
#define SHDW_SR_RTTWK_Pos                     _UINT32_(4)                                          /* (SHDW_SR) Real-time Timer Wake-up Position */
#define SHDW_SR_RTTWK_Msk                     (_UINT32_(0x1) << SHDW_SR_RTTWK_Pos)                 /* (SHDW_SR) Real-time Timer Wake-up Mask */
#define SHDW_SR_RTTWK(value)                  (SHDW_SR_RTTWK_Msk & (_UINT32_(value) << SHDW_SR_RTTWK_Pos)) /* Assignment of value for RTTWK in the SHDW_SR register */
#define   SHDW_SR_RTTWK_0_Val                 _UINT32_(0x0)                                        /* (SHDW_SR) No wake-up alarm from the RTT occurred since the last read of SHDW_SR.  */
#define   SHDW_SR_RTTWK_1_Val                 _UINT32_(0x1)                                        /* (SHDW_SR) At least one wake-up alarm from the RTT occurred since the last read of SHDW_SR.  */
#define SHDW_SR_RTTWK_0                       (SHDW_SR_RTTWK_0_Val << SHDW_SR_RTTWK_Pos)           /* (SHDW_SR) No wake-up alarm from the RTT occurred since the last read of SHDW_SR. Position */
#define SHDW_SR_RTTWK_1                       (SHDW_SR_RTTWK_1_Val << SHDW_SR_RTTWK_Pos)           /* (SHDW_SR) At least one wake-up alarm from the RTT occurred since the last read of SHDW_SR. Position */
#define SHDW_SR_RTCWK_Pos                     _UINT32_(5)                                          /* (SHDW_SR) Real-time Clock Wake-up Position */
#define SHDW_SR_RTCWK_Msk                     (_UINT32_(0x1) << SHDW_SR_RTCWK_Pos)                 /* (SHDW_SR) Real-time Clock Wake-up Mask */
#define SHDW_SR_RTCWK(value)                  (SHDW_SR_RTCWK_Msk & (_UINT32_(value) << SHDW_SR_RTCWK_Pos)) /* Assignment of value for RTCWK in the SHDW_SR register */
#define   SHDW_SR_RTCWK_0_Val                 _UINT32_(0x0)                                        /* (SHDW_SR) No wake-up alarm from the RTC occurred since the last read of SHDW_SR.  */
#define   SHDW_SR_RTCWK_1_Val                 _UINT32_(0x1)                                        /* (SHDW_SR) At least one wake-up alarm from the RTC occurred since the last read of SHDW_SR.  */
#define SHDW_SR_RTCWK_0                       (SHDW_SR_RTCWK_0_Val << SHDW_SR_RTCWK_Pos)           /* (SHDW_SR) No wake-up alarm from the RTC occurred since the last read of SHDW_SR. Position */
#define SHDW_SR_RTCWK_1                       (SHDW_SR_RTCWK_1_Val << SHDW_SR_RTCWK_Pos)           /* (SHDW_SR) At least one wake-up alarm from the RTC occurred since the last read of SHDW_SR. Position */
#define SHDW_SR_LPM_Pos                       _UINT32_(8)                                          /* (SHDW_SR) Low-Power Mode Pad Status Position */
#define SHDW_SR_LPM_Msk                       (_UINT32_(0x1) << SHDW_SR_LPM_Pos)                   /* (SHDW_SR) Low-Power Mode Pad Status Mask */
#define SHDW_SR_LPM(value)                    (SHDW_SR_LPM_Msk & (_UINT32_(value) << SHDW_SR_LPM_Pos)) /* Assignment of value for LPM in the SHDW_SR register */
#define   SHDW_SR_LPM_0_Val                   _UINT32_(0x0)                                        /* (SHDW_SR) The LPM pad is currently set to 0.  */
#define   SHDW_SR_LPM_1_Val                   _UINT32_(0x1)                                        /* (SHDW_SR) The LPM pad is currently set to 1.  */
#define SHDW_SR_LPM_0                         (SHDW_SR_LPM_0_Val << SHDW_SR_LPM_Pos)               /* (SHDW_SR) The LPM pad is currently set to 0. Position */
#define SHDW_SR_LPM_1                         (SHDW_SR_LPM_1_Val << SHDW_SR_LPM_Pos)               /* (SHDW_SR) The LPM pad is currently set to 1. Position */
#define SHDW_SR_WKUPIS0_Pos                   _UINT32_(16)                                         /* (SHDW_SR) Wake-up 0 to 5 Input Status Position */
#define SHDW_SR_WKUPIS0_Msk                   (_UINT32_(0x1) << SHDW_SR_WKUPIS0_Pos)               /* (SHDW_SR) Wake-up 0 to 5 Input Status Mask */
#define SHDW_SR_WKUPIS0(value)                (SHDW_SR_WKUPIS0_Msk & (_UINT32_(value) << SHDW_SR_WKUPIS0_Pos)) /* Assignment of value for WKUPIS0 in the SHDW_SR register */
#define   SHDW_SR_WKUPIS0_DISABLE_Val         _UINT32_(0x0)                                        /* (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDW_SR_WKUPIS0_ENABLE_Val          _UINT32_(0x1)                                        /* (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDW_SR_WKUPIS0_DISABLE               (SHDW_SR_WKUPIS0_DISABLE_Val << SHDW_SR_WKUPIS0_Pos) /* (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position */
#define SHDW_SR_WKUPIS0_ENABLE                (SHDW_SR_WKUPIS0_ENABLE_Val << SHDW_SR_WKUPIS0_Pos)  /* (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position */
#define SHDW_SR_WKUPIS1_Pos                   _UINT32_(17)                                         /* (SHDW_SR) Wake-up 0 to 5 Input Status Position */
#define SHDW_SR_WKUPIS1_Msk                   (_UINT32_(0x1) << SHDW_SR_WKUPIS1_Pos)               /* (SHDW_SR) Wake-up 0 to 5 Input Status Mask */
#define SHDW_SR_WKUPIS1(value)                (SHDW_SR_WKUPIS1_Msk & (_UINT32_(value) << SHDW_SR_WKUPIS1_Pos)) /* Assignment of value for WKUPIS1 in the SHDW_SR register */
#define   SHDW_SR_WKUPIS1_DISABLE_Val         _UINT32_(0x0)                                        /* (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDW_SR_WKUPIS1_ENABLE_Val          _UINT32_(0x1)                                        /* (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDW_SR_WKUPIS1_DISABLE               (SHDW_SR_WKUPIS1_DISABLE_Val << SHDW_SR_WKUPIS1_Pos) /* (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position */
#define SHDW_SR_WKUPIS1_ENABLE                (SHDW_SR_WKUPIS1_ENABLE_Val << SHDW_SR_WKUPIS1_Pos)  /* (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position */
#define SHDW_SR_WKUPIS2_Pos                   _UINT32_(18)                                         /* (SHDW_SR) Wake-up 0 to 5 Input Status Position */
#define SHDW_SR_WKUPIS2_Msk                   (_UINT32_(0x1) << SHDW_SR_WKUPIS2_Pos)               /* (SHDW_SR) Wake-up 0 to 5 Input Status Mask */
#define SHDW_SR_WKUPIS2(value)                (SHDW_SR_WKUPIS2_Msk & (_UINT32_(value) << SHDW_SR_WKUPIS2_Pos)) /* Assignment of value for WKUPIS2 in the SHDW_SR register */
#define   SHDW_SR_WKUPIS2_DISABLE_Val         _UINT32_(0x0)                                        /* (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDW_SR_WKUPIS2_ENABLE_Val          _UINT32_(0x1)                                        /* (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDW_SR_WKUPIS2_DISABLE               (SHDW_SR_WKUPIS2_DISABLE_Val << SHDW_SR_WKUPIS2_Pos) /* (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position */
#define SHDW_SR_WKUPIS2_ENABLE                (SHDW_SR_WKUPIS2_ENABLE_Val << SHDW_SR_WKUPIS2_Pos)  /* (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position */
#define SHDW_SR_WKUPIS3_Pos                   _UINT32_(19)                                         /* (SHDW_SR) Wake-up 0 to 5 Input Status Position */
#define SHDW_SR_WKUPIS3_Msk                   (_UINT32_(0x1) << SHDW_SR_WKUPIS3_Pos)               /* (SHDW_SR) Wake-up 0 to 5 Input Status Mask */
#define SHDW_SR_WKUPIS3(value)                (SHDW_SR_WKUPIS3_Msk & (_UINT32_(value) << SHDW_SR_WKUPIS3_Pos)) /* Assignment of value for WKUPIS3 in the SHDW_SR register */
#define   SHDW_SR_WKUPIS3_DISABLE_Val         _UINT32_(0x0)                                        /* (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDW_SR_WKUPIS3_ENABLE_Val          _UINT32_(0x1)                                        /* (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDW_SR_WKUPIS3_DISABLE               (SHDW_SR_WKUPIS3_DISABLE_Val << SHDW_SR_WKUPIS3_Pos) /* (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position */
#define SHDW_SR_WKUPIS3_ENABLE                (SHDW_SR_WKUPIS3_ENABLE_Val << SHDW_SR_WKUPIS3_Pos)  /* (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position */
#define SHDW_SR_WKUPIS4_Pos                   _UINT32_(20)                                         /* (SHDW_SR) Wake-up 0 to 5 Input Status Position */
#define SHDW_SR_WKUPIS4_Msk                   (_UINT32_(0x1) << SHDW_SR_WKUPIS4_Pos)               /* (SHDW_SR) Wake-up 0 to 5 Input Status Mask */
#define SHDW_SR_WKUPIS4(value)                (SHDW_SR_WKUPIS4_Msk & (_UINT32_(value) << SHDW_SR_WKUPIS4_Pos)) /* Assignment of value for WKUPIS4 in the SHDW_SR register */
#define   SHDW_SR_WKUPIS4_DISABLE_Val         _UINT32_(0x0)                                        /* (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDW_SR_WKUPIS4_ENABLE_Val          _UINT32_(0x1)                                        /* (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDW_SR_WKUPIS4_DISABLE               (SHDW_SR_WKUPIS4_DISABLE_Val << SHDW_SR_WKUPIS4_Pos) /* (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position */
#define SHDW_SR_WKUPIS4_ENABLE                (SHDW_SR_WKUPIS4_ENABLE_Val << SHDW_SR_WKUPIS4_Pos)  /* (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position */
#define SHDW_SR_WKUPIS5_Pos                   _UINT32_(21)                                         /* (SHDW_SR) Wake-up 0 to 5 Input Status Position */
#define SHDW_SR_WKUPIS5_Msk                   (_UINT32_(0x1) << SHDW_SR_WKUPIS5_Pos)               /* (SHDW_SR) Wake-up 0 to 5 Input Status Mask */
#define SHDW_SR_WKUPIS5(value)                (SHDW_SR_WKUPIS5_Msk & (_UINT32_(value) << SHDW_SR_WKUPIS5_Pos)) /* Assignment of value for WKUPIS5 in the SHDW_SR register */
#define   SHDW_SR_WKUPIS5_DISABLE_Val         _UINT32_(0x0)                                        /* (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDW_SR_WKUPIS5_ENABLE_Val          _UINT32_(0x1)                                        /* (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDW_SR_WKUPIS5_DISABLE               (SHDW_SR_WKUPIS5_DISABLE_Val << SHDW_SR_WKUPIS5_Pos) /* (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position */
#define SHDW_SR_WKUPIS5_ENABLE                (SHDW_SR_WKUPIS5_ENABLE_Val << SHDW_SR_WKUPIS5_Pos)  /* (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position */
#define SHDW_SR_Msk                           _UINT32_(0x003F0131)                                 /* (SHDW_SR) Register Mask  */

#define SHDW_SR_WKUPIS_Pos                    _UINT32_(16)                                         /* (SHDW_SR Position) Wake-up x to 5 Input Status */
#define SHDW_SR_WKUPIS_Msk                    (_UINT32_(0x3F) << SHDW_SR_WKUPIS_Pos)               /* (SHDW_SR Mask) WKUPIS */
#define SHDW_SR_WKUPIS(value)                 (SHDW_SR_WKUPIS_Msk & (_UINT32_(value) << SHDW_SR_WKUPIS_Pos)) 

/* -------- SHDW_WUIR : (SHDWC Offset: 0x0C) (R/W 32) Wake-up Inputs Register -------- */
#define SHDW_WUIR_RESETVALUE                  _UINT32_(0x00)                                       /*  (SHDW_WUIR) Wake-up Inputs Register  Reset Value */

#define SHDW_WUIR_WKUPEN0_Pos                 _UINT32_(0)                                          /* (SHDW_WUIR) Wake-up 0 to 5 Input Enable Position */
#define SHDW_WUIR_WKUPEN0_Msk                 (_UINT32_(0x1) << SHDW_WUIR_WKUPEN0_Pos)             /* (SHDW_WUIR) Wake-up 0 to 5 Input Enable Mask */
#define SHDW_WUIR_WKUPEN0(value)              (SHDW_WUIR_WKUPEN0_Msk & (_UINT32_(value) << SHDW_WUIR_WKUPEN0_Pos)) /* Assignment of value for WKUPEN0 in the SHDW_WUIR register */
#define   SHDW_WUIR_WKUPEN0_DISABLE_Val       _UINT32_(0x0)                                        /* (SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDW_WUIR_WKUPEN0_ENABLE_Val        _UINT32_(0x1)                                        /* (SHDW_WUIR) The corresponding wake-up input forces wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPEN0_DISABLE             (SHDW_WUIR_WKUPEN0_DISABLE_Val << SHDW_WUIR_WKUPEN0_Pos) /* (SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position */
#define SHDW_WUIR_WKUPEN0_ENABLE              (SHDW_WUIR_WKUPEN0_ENABLE_Val << SHDW_WUIR_WKUPEN0_Pos) /* (SHDW_WUIR) The corresponding wake-up input forces wake-up of the core power supply. Position */
#define SHDW_WUIR_WKUPEN1_Pos                 _UINT32_(1)                                          /* (SHDW_WUIR) Wake-up 0 to 5 Input Enable Position */
#define SHDW_WUIR_WKUPEN1_Msk                 (_UINT32_(0x1) << SHDW_WUIR_WKUPEN1_Pos)             /* (SHDW_WUIR) Wake-up 0 to 5 Input Enable Mask */
#define SHDW_WUIR_WKUPEN1(value)              (SHDW_WUIR_WKUPEN1_Msk & (_UINT32_(value) << SHDW_WUIR_WKUPEN1_Pos)) /* Assignment of value for WKUPEN1 in the SHDW_WUIR register */
#define   SHDW_WUIR_WKUPEN1_DISABLE_Val       _UINT32_(0x0)                                        /* (SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDW_WUIR_WKUPEN1_ENABLE_Val        _UINT32_(0x1)                                        /* (SHDW_WUIR) The corresponding wake-up input forces wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPEN1_DISABLE             (SHDW_WUIR_WKUPEN1_DISABLE_Val << SHDW_WUIR_WKUPEN1_Pos) /* (SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position */
#define SHDW_WUIR_WKUPEN1_ENABLE              (SHDW_WUIR_WKUPEN1_ENABLE_Val << SHDW_WUIR_WKUPEN1_Pos) /* (SHDW_WUIR) The corresponding wake-up input forces wake-up of the core power supply. Position */
#define SHDW_WUIR_WKUPEN2_Pos                 _UINT32_(2)                                          /* (SHDW_WUIR) Wake-up 0 to 5 Input Enable Position */
#define SHDW_WUIR_WKUPEN2_Msk                 (_UINT32_(0x1) << SHDW_WUIR_WKUPEN2_Pos)             /* (SHDW_WUIR) Wake-up 0 to 5 Input Enable Mask */
#define SHDW_WUIR_WKUPEN2(value)              (SHDW_WUIR_WKUPEN2_Msk & (_UINT32_(value) << SHDW_WUIR_WKUPEN2_Pos)) /* Assignment of value for WKUPEN2 in the SHDW_WUIR register */
#define   SHDW_WUIR_WKUPEN2_DISABLE_Val       _UINT32_(0x0)                                        /* (SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDW_WUIR_WKUPEN2_ENABLE_Val        _UINT32_(0x1)                                        /* (SHDW_WUIR) The corresponding wake-up input forces wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPEN2_DISABLE             (SHDW_WUIR_WKUPEN2_DISABLE_Val << SHDW_WUIR_WKUPEN2_Pos) /* (SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position */
#define SHDW_WUIR_WKUPEN2_ENABLE              (SHDW_WUIR_WKUPEN2_ENABLE_Val << SHDW_WUIR_WKUPEN2_Pos) /* (SHDW_WUIR) The corresponding wake-up input forces wake-up of the core power supply. Position */
#define SHDW_WUIR_WKUPEN3_Pos                 _UINT32_(3)                                          /* (SHDW_WUIR) Wake-up 0 to 5 Input Enable Position */
#define SHDW_WUIR_WKUPEN3_Msk                 (_UINT32_(0x1) << SHDW_WUIR_WKUPEN3_Pos)             /* (SHDW_WUIR) Wake-up 0 to 5 Input Enable Mask */
#define SHDW_WUIR_WKUPEN3(value)              (SHDW_WUIR_WKUPEN3_Msk & (_UINT32_(value) << SHDW_WUIR_WKUPEN3_Pos)) /* Assignment of value for WKUPEN3 in the SHDW_WUIR register */
#define   SHDW_WUIR_WKUPEN3_DISABLE_Val       _UINT32_(0x0)                                        /* (SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDW_WUIR_WKUPEN3_ENABLE_Val        _UINT32_(0x1)                                        /* (SHDW_WUIR) The corresponding wake-up input forces wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPEN3_DISABLE             (SHDW_WUIR_WKUPEN3_DISABLE_Val << SHDW_WUIR_WKUPEN3_Pos) /* (SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position */
#define SHDW_WUIR_WKUPEN3_ENABLE              (SHDW_WUIR_WKUPEN3_ENABLE_Val << SHDW_WUIR_WKUPEN3_Pos) /* (SHDW_WUIR) The corresponding wake-up input forces wake-up of the core power supply. Position */
#define SHDW_WUIR_WKUPEN4_Pos                 _UINT32_(4)                                          /* (SHDW_WUIR) Wake-up 0 to 5 Input Enable Position */
#define SHDW_WUIR_WKUPEN4_Msk                 (_UINT32_(0x1) << SHDW_WUIR_WKUPEN4_Pos)             /* (SHDW_WUIR) Wake-up 0 to 5 Input Enable Mask */
#define SHDW_WUIR_WKUPEN4(value)              (SHDW_WUIR_WKUPEN4_Msk & (_UINT32_(value) << SHDW_WUIR_WKUPEN4_Pos)) /* Assignment of value for WKUPEN4 in the SHDW_WUIR register */
#define   SHDW_WUIR_WKUPEN4_DISABLE_Val       _UINT32_(0x0)                                        /* (SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDW_WUIR_WKUPEN4_ENABLE_Val        _UINT32_(0x1)                                        /* (SHDW_WUIR) The corresponding wake-up input forces wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPEN4_DISABLE             (SHDW_WUIR_WKUPEN4_DISABLE_Val << SHDW_WUIR_WKUPEN4_Pos) /* (SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position */
#define SHDW_WUIR_WKUPEN4_ENABLE              (SHDW_WUIR_WKUPEN4_ENABLE_Val << SHDW_WUIR_WKUPEN4_Pos) /* (SHDW_WUIR) The corresponding wake-up input forces wake-up of the core power supply. Position */
#define SHDW_WUIR_WKUPEN5_Pos                 _UINT32_(5)                                          /* (SHDW_WUIR) Wake-up 0 to 5 Input Enable Position */
#define SHDW_WUIR_WKUPEN5_Msk                 (_UINT32_(0x1) << SHDW_WUIR_WKUPEN5_Pos)             /* (SHDW_WUIR) Wake-up 0 to 5 Input Enable Mask */
#define SHDW_WUIR_WKUPEN5(value)              (SHDW_WUIR_WKUPEN5_Msk & (_UINT32_(value) << SHDW_WUIR_WKUPEN5_Pos)) /* Assignment of value for WKUPEN5 in the SHDW_WUIR register */
#define   SHDW_WUIR_WKUPEN5_DISABLE_Val       _UINT32_(0x0)                                        /* (SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDW_WUIR_WKUPEN5_ENABLE_Val        _UINT32_(0x1)                                        /* (SHDW_WUIR) The corresponding wake-up input forces wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPEN5_DISABLE             (SHDW_WUIR_WKUPEN5_DISABLE_Val << SHDW_WUIR_WKUPEN5_Pos) /* (SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position */
#define SHDW_WUIR_WKUPEN5_ENABLE              (SHDW_WUIR_WKUPEN5_ENABLE_Val << SHDW_WUIR_WKUPEN5_Pos) /* (SHDW_WUIR) The corresponding wake-up input forces wake-up of the core power supply. Position */
#define SHDW_WUIR_WKUPT0_Pos                  _UINT32_(16)                                         /* (SHDW_WUIR) Wake-up 0 to 5 Input Type Position */
#define SHDW_WUIR_WKUPT0_Msk                  (_UINT32_(0x1) << SHDW_WUIR_WKUPT0_Pos)              /* (SHDW_WUIR) Wake-up 0 to 5 Input Type Mask */
#define SHDW_WUIR_WKUPT0(value)               (SHDW_WUIR_WKUPT0_Msk & (_UINT32_(value) << SHDW_WUIR_WKUPT0_Pos)) /* Assignment of value for WKUPT0 in the SHDW_WUIR register */
#define   SHDW_WUIR_WKUPT0_LOW_Val            _UINT32_(0x0)                                        /* (SHDW_WUIR) A falling edge followed by a low level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply.  */
#define   SHDW_WUIR_WKUPT0_HIGH_Val           _UINT32_(0x1)                                        /* (SHDW_WUIR) A rising edge followed by a high level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPT0_LOW                  (SHDW_WUIR_WKUPT0_LOW_Val << SHDW_WUIR_WKUPT0_Pos)   /* (SHDW_WUIR) A falling edge followed by a low level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply. Position */
#define SHDW_WUIR_WKUPT0_HIGH                 (SHDW_WUIR_WKUPT0_HIGH_Val << SHDW_WUIR_WKUPT0_Pos)  /* (SHDW_WUIR) A rising edge followed by a high level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply. Position */
#define SHDW_WUIR_WKUPT1_Pos                  _UINT32_(17)                                         /* (SHDW_WUIR) Wake-up 0 to 5 Input Type Position */
#define SHDW_WUIR_WKUPT1_Msk                  (_UINT32_(0x1) << SHDW_WUIR_WKUPT1_Pos)              /* (SHDW_WUIR) Wake-up 0 to 5 Input Type Mask */
#define SHDW_WUIR_WKUPT1(value)               (SHDW_WUIR_WKUPT1_Msk & (_UINT32_(value) << SHDW_WUIR_WKUPT1_Pos)) /* Assignment of value for WKUPT1 in the SHDW_WUIR register */
#define   SHDW_WUIR_WKUPT1_LOW_Val            _UINT32_(0x0)                                        /* (SHDW_WUIR) A falling edge followed by a low level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply.  */
#define   SHDW_WUIR_WKUPT1_HIGH_Val           _UINT32_(0x1)                                        /* (SHDW_WUIR) A rising edge followed by a high level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPT1_LOW                  (SHDW_WUIR_WKUPT1_LOW_Val << SHDW_WUIR_WKUPT1_Pos)   /* (SHDW_WUIR) A falling edge followed by a low level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply. Position */
#define SHDW_WUIR_WKUPT1_HIGH                 (SHDW_WUIR_WKUPT1_HIGH_Val << SHDW_WUIR_WKUPT1_Pos)  /* (SHDW_WUIR) A rising edge followed by a high level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply. Position */
#define SHDW_WUIR_WKUPT2_Pos                  _UINT32_(18)                                         /* (SHDW_WUIR) Wake-up 0 to 5 Input Type Position */
#define SHDW_WUIR_WKUPT2_Msk                  (_UINT32_(0x1) << SHDW_WUIR_WKUPT2_Pos)              /* (SHDW_WUIR) Wake-up 0 to 5 Input Type Mask */
#define SHDW_WUIR_WKUPT2(value)               (SHDW_WUIR_WKUPT2_Msk & (_UINT32_(value) << SHDW_WUIR_WKUPT2_Pos)) /* Assignment of value for WKUPT2 in the SHDW_WUIR register */
#define   SHDW_WUIR_WKUPT2_LOW_Val            _UINT32_(0x0)                                        /* (SHDW_WUIR) A falling edge followed by a low level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply.  */
#define   SHDW_WUIR_WKUPT2_HIGH_Val           _UINT32_(0x1)                                        /* (SHDW_WUIR) A rising edge followed by a high level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPT2_LOW                  (SHDW_WUIR_WKUPT2_LOW_Val << SHDW_WUIR_WKUPT2_Pos)   /* (SHDW_WUIR) A falling edge followed by a low level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply. Position */
#define SHDW_WUIR_WKUPT2_HIGH                 (SHDW_WUIR_WKUPT2_HIGH_Val << SHDW_WUIR_WKUPT2_Pos)  /* (SHDW_WUIR) A rising edge followed by a high level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply. Position */
#define SHDW_WUIR_WKUPT3_Pos                  _UINT32_(19)                                         /* (SHDW_WUIR) Wake-up 0 to 5 Input Type Position */
#define SHDW_WUIR_WKUPT3_Msk                  (_UINT32_(0x1) << SHDW_WUIR_WKUPT3_Pos)              /* (SHDW_WUIR) Wake-up 0 to 5 Input Type Mask */
#define SHDW_WUIR_WKUPT3(value)               (SHDW_WUIR_WKUPT3_Msk & (_UINT32_(value) << SHDW_WUIR_WKUPT3_Pos)) /* Assignment of value for WKUPT3 in the SHDW_WUIR register */
#define   SHDW_WUIR_WKUPT3_LOW_Val            _UINT32_(0x0)                                        /* (SHDW_WUIR) A falling edge followed by a low level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply.  */
#define   SHDW_WUIR_WKUPT3_HIGH_Val           _UINT32_(0x1)                                        /* (SHDW_WUIR) A rising edge followed by a high level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPT3_LOW                  (SHDW_WUIR_WKUPT3_LOW_Val << SHDW_WUIR_WKUPT3_Pos)   /* (SHDW_WUIR) A falling edge followed by a low level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply. Position */
#define SHDW_WUIR_WKUPT3_HIGH                 (SHDW_WUIR_WKUPT3_HIGH_Val << SHDW_WUIR_WKUPT3_Pos)  /* (SHDW_WUIR) A rising edge followed by a high level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply. Position */
#define SHDW_WUIR_WKUPT4_Pos                  _UINT32_(20)                                         /* (SHDW_WUIR) Wake-up 0 to 5 Input Type Position */
#define SHDW_WUIR_WKUPT4_Msk                  (_UINT32_(0x1) << SHDW_WUIR_WKUPT4_Pos)              /* (SHDW_WUIR) Wake-up 0 to 5 Input Type Mask */
#define SHDW_WUIR_WKUPT4(value)               (SHDW_WUIR_WKUPT4_Msk & (_UINT32_(value) << SHDW_WUIR_WKUPT4_Pos)) /* Assignment of value for WKUPT4 in the SHDW_WUIR register */
#define   SHDW_WUIR_WKUPT4_LOW_Val            _UINT32_(0x0)                                        /* (SHDW_WUIR) A falling edge followed by a low level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply.  */
#define   SHDW_WUIR_WKUPT4_HIGH_Val           _UINT32_(0x1)                                        /* (SHDW_WUIR) A rising edge followed by a high level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPT4_LOW                  (SHDW_WUIR_WKUPT4_LOW_Val << SHDW_WUIR_WKUPT4_Pos)   /* (SHDW_WUIR) A falling edge followed by a low level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply. Position */
#define SHDW_WUIR_WKUPT4_HIGH                 (SHDW_WUIR_WKUPT4_HIGH_Val << SHDW_WUIR_WKUPT4_Pos)  /* (SHDW_WUIR) A rising edge followed by a high level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply. Position */
#define SHDW_WUIR_WKUPT5_Pos                  _UINT32_(21)                                         /* (SHDW_WUIR) Wake-up 0 to 5 Input Type Position */
#define SHDW_WUIR_WKUPT5_Msk                  (_UINT32_(0x1) << SHDW_WUIR_WKUPT5_Pos)              /* (SHDW_WUIR) Wake-up 0 to 5 Input Type Mask */
#define SHDW_WUIR_WKUPT5(value)               (SHDW_WUIR_WKUPT5_Msk & (_UINT32_(value) << SHDW_WUIR_WKUPT5_Pos)) /* Assignment of value for WKUPT5 in the SHDW_WUIR register */
#define   SHDW_WUIR_WKUPT5_LOW_Val            _UINT32_(0x0)                                        /* (SHDW_WUIR) A falling edge followed by a low level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply.  */
#define   SHDW_WUIR_WKUPT5_HIGH_Val           _UINT32_(0x1)                                        /* (SHDW_WUIR) A rising edge followed by a high level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPT5_LOW                  (SHDW_WUIR_WKUPT5_LOW_Val << SHDW_WUIR_WKUPT5_Pos)   /* (SHDW_WUIR) A falling edge followed by a low level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply. Position */
#define SHDW_WUIR_WKUPT5_HIGH                 (SHDW_WUIR_WKUPT5_HIGH_Val << SHDW_WUIR_WKUPT5_Pos)  /* (SHDW_WUIR) A rising edge followed by a high level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply. Position */
#define SHDW_WUIR_Msk                         _UINT32_(0x003F003F)                                 /* (SHDW_WUIR) Register Mask  */

#define SHDW_WUIR_WKUPEN_Pos                  _UINT32_(0)                                          /* (SHDW_WUIR Position) Wake-up x to 5 Input Enable */
#define SHDW_WUIR_WKUPEN_Msk                  (_UINT32_(0x3F) << SHDW_WUIR_WKUPEN_Pos)             /* (SHDW_WUIR Mask) WKUPEN */
#define SHDW_WUIR_WKUPEN(value)               (SHDW_WUIR_WKUPEN_Msk & (_UINT32_(value) << SHDW_WUIR_WKUPEN_Pos)) 
#define SHDW_WUIR_WKUPT_Pos                   _UINT32_(16)                                         /* (SHDW_WUIR Position) Wake-up x to 5 Input Type */
#define SHDW_WUIR_WKUPT_Msk                   (_UINT32_(0x3F) << SHDW_WUIR_WKUPT_Pos)              /* (SHDW_WUIR Mask) WKUPT */
#define SHDW_WUIR_WKUPT(value)                (SHDW_WUIR_WKUPT_Msk & (_UINT32_(value) << SHDW_WUIR_WKUPT_Pos)) 

/* SHDWC register offsets definitions */
#define SHDW_CR_REG_OFST               _UINT32_(0x00)      /* (SHDW_CR) Control Register Offset */
#define SHDW_MR_REG_OFST               _UINT32_(0x04)      /* (SHDW_MR) Mode Register Offset */
#define SHDW_SR_REG_OFST               _UINT32_(0x08)      /* (SHDW_SR) Status Register Offset */
#define SHDW_WUIR_REG_OFST             _UINT32_(0x0C)      /* (SHDW_WUIR) Wake-up Inputs Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* SHDWC register API structure */
typedef struct
{  /* Shutdown Controller */
  __O   uint32_t                       SHDW_CR;            /* Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       SHDW_MR;            /* Offset: 0x04 (R/W  32) Mode Register */
  __I   uint32_t                       SHDW_SR;            /* Offset: 0x08 (R/   32) Status Register */
  __IO  uint32_t                       SHDW_WUIR;          /* Offset: 0x0C (R/W  32) Wake-up Inputs Register */
} shdwc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G5_SHDWC_COMPONENT_H_ */
