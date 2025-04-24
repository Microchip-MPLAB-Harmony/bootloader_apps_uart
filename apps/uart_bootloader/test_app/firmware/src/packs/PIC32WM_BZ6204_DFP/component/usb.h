/*
 * Component description for USB
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
#ifndef _PIC32WM_BZ6_USB_COMPONENT_H_
#define _PIC32WM_BZ6_USB_COMPONENT_H_

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR USB                       */
/* ************************************************************************** */

/* -------- USB_UEPx : (USB Offset: 0x00) (R/W 32) USB Endpoint Control Registers -------- */
#define USB_UEPx_EPHSHK_Pos                   _UINT32_(0)                                          /* (USB_UEPx) Endpoint Handshake Enable bit Position */
#define USB_UEPx_EPHSHK_Msk                   (_UINT32_(0x1) << USB_UEPx_EPHSHK_Pos)               /* (USB_UEPx) Endpoint Handshake Enable bit Mask */
#define USB_UEPx_EPHSHK(value)                (USB_UEPx_EPHSHK_Msk & (_UINT32_(value) << USB_UEPx_EPHSHK_Pos)) /* Assignment of value for EPHSHK in the USB_UEPx register */
#define   USB_UEPx_EPHSHK_ON_Val              _UINT32_(0x1)                                        /* (USB_UEPx) Endpoint Handshake is enabled  */
#define   USB_UEPx_EPHSHK_OFF_Val             _UINT32_(0x0)                                        /* (USB_UEPx) Endpoint Handshake is disabled (typically used for isochronous endpoints)  */
#define USB_UEPx_EPHSHK_ON                    (USB_UEPx_EPHSHK_ON_Val << USB_UEPx_EPHSHK_Pos)      /* (USB_UEPx) Endpoint Handshake is enabled Position */
#define USB_UEPx_EPHSHK_OFF                   (USB_UEPx_EPHSHK_OFF_Val << USB_UEPx_EPHSHK_Pos)     /* (USB_UEPx) Endpoint Handshake is disabled (typically used for isochronous endpoints) Position */
#define USB_UEPx_EPSTALL_Pos                  _UINT32_(1)                                          /* (USB_UEPx) Endpoint Stall Status bit Position */
#define USB_UEPx_EPSTALL_Msk                  (_UINT32_(0x1) << USB_UEPx_EPSTALL_Pos)              /* (USB_UEPx) Endpoint Stall Status bit Mask */
#define USB_UEPx_EPSTALL(value)               (USB_UEPx_EPSTALL_Msk & (_UINT32_(value) << USB_UEPx_EPSTALL_Pos)) /* Assignment of value for EPSTALL in the USB_UEPx register */
#define   USB_UEPx_EPSTALL_STALL_Val          _UINT32_(0x1)                                        /* (USB_UEPx) Endpoint 1 was stalled  */
#define   USB_UEPx_EPSTALL_NOT_STALL_Val      _UINT32_(0x0)                                        /* (USB_UEPx) Endpoint 1 was not stalled  */
#define USB_UEPx_EPSTALL_STALL                (USB_UEPx_EPSTALL_STALL_Val << USB_UEPx_EPSTALL_Pos) /* (USB_UEPx) Endpoint 1 was stalled Position */
#define USB_UEPx_EPSTALL_NOT_STALL            (USB_UEPx_EPSTALL_NOT_STALL_Val << USB_UEPx_EPSTALL_Pos) /* (USB_UEPx) Endpoint 1 was not stalled Position */
#define USB_UEPx_EPTXEN_Pos                   _UINT32_(2)                                          /* (USB_UEPx) Endpoint Transmit Enable bit Position */
#define USB_UEPx_EPTXEN_Msk                   (_UINT32_(0x1) << USB_UEPx_EPTXEN_Pos)               /* (USB_UEPx) Endpoint Transmit Enable bit Mask */
#define USB_UEPx_EPTXEN(value)                (USB_UEPx_EPTXEN_Msk & (_UINT32_(value) << USB_UEPx_EPTXEN_Pos)) /* Assignment of value for EPTXEN in the USB_UEPx register */
#define   USB_UEPx_EPTXEN_ON_Val              _UINT32_(0x1)                                        /* (USB_UEPx) Endpoint 1 transmit is enabled  */
#define   USB_UEPx_EPTXEN_OFF_Val             _UINT32_(0x0)                                        /* (USB_UEPx) Endpoint 1 transmit is disabled  */
#define USB_UEPx_EPTXEN_ON                    (USB_UEPx_EPTXEN_ON_Val << USB_UEPx_EPTXEN_Pos)      /* (USB_UEPx) Endpoint 1 transmit is enabled Position */
#define USB_UEPx_EPTXEN_OFF                   (USB_UEPx_EPTXEN_OFF_Val << USB_UEPx_EPTXEN_Pos)     /* (USB_UEPx) Endpoint 1 transmit is disabled Position */
#define USB_UEPx_EPRXEN_Pos                   _UINT32_(3)                                          /* (USB_UEPx) Endpoint Receive Enable bit Position */
#define USB_UEPx_EPRXEN_Msk                   (_UINT32_(0x1) << USB_UEPx_EPRXEN_Pos)               /* (USB_UEPx) Endpoint Receive Enable bit Mask */
#define USB_UEPx_EPRXEN(value)                (USB_UEPx_EPRXEN_Msk & (_UINT32_(value) << USB_UEPx_EPRXEN_Pos)) /* Assignment of value for EPRXEN in the USB_UEPx register */
#define   USB_UEPx_EPRXEN_ON_Val              _UINT32_(0x1)                                        /* (USB_UEPx) Endpoint 1 receive is enabled  */
#define   USB_UEPx_EPRXEN_OFF_Val             _UINT32_(0x0)                                        /* (USB_UEPx) Endpoint 1 receive is disabled  */
#define USB_UEPx_EPRXEN_ON                    (USB_UEPx_EPRXEN_ON_Val << USB_UEPx_EPRXEN_Pos)      /* (USB_UEPx) Endpoint 1 receive is enabled Position */
#define USB_UEPx_EPRXEN_OFF                   (USB_UEPx_EPRXEN_OFF_Val << USB_UEPx_EPRXEN_Pos)     /* (USB_UEPx) Endpoint 1 receive is disabled Position */
#define USB_UEPx_EPCONDIS_Pos                 _UINT32_(4)                                          /* (USB_UEPx) Bidirectional Endpoint Control bit Position */
#define USB_UEPx_EPCONDIS_Msk                 (_UINT32_(0x1) << USB_UEPx_EPCONDIS_Pos)             /* (USB_UEPx) Bidirectional Endpoint Control bit Mask */
#define USB_UEPx_EPCONDIS(value)              (USB_UEPx_EPCONDIS_Msk & (_UINT32_(value) << USB_UEPx_EPCONDIS_Pos)) /* Assignment of value for EPCONDIS in the USB_UEPx register */
#define   USB_UEPx_EPCONDIS_DISABLE_1_Val     _UINT32_(0x1)                                        /* (USB_UEPx) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 1 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored  */
#define   USB_UEPx_EPCONDIS_ENABLE_1_Val      _UINT32_(0x0)                                        /* (USB_UEPx) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 1 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored  */
#define USB_UEPx_EPCONDIS_DISABLE_1           (USB_UEPx_EPCONDIS_DISABLE_1_Val << USB_UEPx_EPCONDIS_Pos) /* (USB_UEPx) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 1 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored Position */
#define USB_UEPx_EPCONDIS_ENABLE_1            (USB_UEPx_EPCONDIS_ENABLE_1_Val << USB_UEPx_EPCONDIS_Pos) /* (USB_UEPx) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 1 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored Position */
#define USB_UEPx_RETRYDIS_Pos                 _UINT32_(6)                                          /* (USB_UEPx) Retry Disable bit Position */
#define USB_UEPx_RETRYDIS_Msk                 (_UINT32_(0x1) << USB_UEPx_RETRYDIS_Pos)             /* (USB_UEPx) Retry Disable bit Mask */
#define USB_UEPx_RETRYDIS(value)              (USB_UEPx_RETRYDIS_Msk & (_UINT32_(value) << USB_UEPx_RETRYDIS_Pos)) /* Assignment of value for RETRYDIS in the USB_UEPx register */
#define   USB_UEPx_RETRYDIS_ON_Val            _UINT32_(0x1)                                        /* (USB_UEPx) Retry NAKed transactions is disabled  */
#define   USB_UEPx_RETRYDIS_OFF_Val           _UINT32_(0x0)                                        /* (USB_UEPx) Retry NAKed transactions is enabled; retry done in hardware  */
#define USB_UEPx_RETRYDIS_ON                  (USB_UEPx_RETRYDIS_ON_Val << USB_UEPx_RETRYDIS_Pos)  /* (USB_UEPx) Retry NAKed transactions is disabled Position */
#define USB_UEPx_RETRYDIS_OFF                 (USB_UEPx_RETRYDIS_OFF_Val << USB_UEPx_RETRYDIS_Pos) /* (USB_UEPx) Retry NAKed transactions is enabled; retry done in hardware Position */
#define USB_UEPx_LSPD_Pos                     _UINT32_(7)                                          /* (USB_UEPx) Low-Speed Direct Connection Enable bit Position */
#define USB_UEPx_LSPD_Msk                     (_UINT32_(0x1) << USB_UEPx_LSPD_Pos)                 /* (USB_UEPx) Low-Speed Direct Connection Enable bit Mask */
#define USB_UEPx_LSPD(value)                  (USB_UEPx_LSPD_Msk & (_UINT32_(value) << USB_UEPx_LSPD_Pos)) /* Assignment of value for LSPD in the USB_UEPx register */
#define   USB_UEPx_LSPD_ON_Val                _UINT32_(0x1)                                        /* (USB_UEPx) Direct connection to a low-speed device is enabled  */
#define   USB_UEPx_LSPD_OFF_Val               _UINT32_(0x0)                                        /* (USB_UEPx) Direct connection to a low-speed device is disabled; hub required with PRE_PID  */
#define USB_UEPx_LSPD_ON                      (USB_UEPx_LSPD_ON_Val << USB_UEPx_LSPD_Pos)          /* (USB_UEPx) Direct connection to a low-speed device is enabled Position */
#define USB_UEPx_LSPD_OFF                     (USB_UEPx_LSPD_OFF_Val << USB_UEPx_LSPD_Pos)         /* (USB_UEPx) Direct connection to a low-speed device is disabled; hub required with PRE_PID Position */
#define USB_UEPx_Msk                          _UINT32_(0x000000DF)                                 /* (USB_UEPx) Register Mask  */


/* -------- USB_UEPxCLR : (USB Offset: 0x04) (R/W 32)  -------- */
#define USB_UEPxCLR_RESETVALUE                _UINT32_(0x00)                                       /*  (USB_UEPxCLR)   Reset Value */

#define USB_UEPxCLR_Msk                       _UINT32_(0x00000000)                                 /* (USB_UEPxCLR) Register Mask  */


/* -------- USB_UEPxSET : (USB Offset: 0x08) (R/W 32)  -------- */
#define USB_UEPxSET_RESETVALUE                _UINT32_(0x00)                                       /*  (USB_UEPxSET)   Reset Value */

#define USB_UEPxSET_Msk                       _UINT32_(0x00000000)                                 /* (USB_UEPxSET) Register Mask  */


/* -------- USB_UEPxINV : (USB Offset: 0x0C) (R/W 32)  -------- */
#define USB_UEPxINV_RESETVALUE                _UINT32_(0x00)                                       /*  (USB_UEPxINV)   Reset Value */

#define USB_UEPxINV_Msk                       _UINT32_(0x00000000)                                 /* (USB_UEPxINV) Register Mask  */


/* -------- USB_UOTGIR : (USB Offset: 0x40) (R/W 32) USB OTG Interrupt Status Register -------- */
#define USB_UOTGIR_AVBUS_VLD_Pos              _UINT32_(0)                                          /* (USB_UOTGIR) A-VBUS change indicator bit Position */
#define USB_UOTGIR_AVBUS_VLD_Msk              (_UINT32_(0x1) << USB_UOTGIR_AVBUS_VLD_Pos)          /* (USB_UOTGIR) A-VBUS change indicator bit Mask */
#define USB_UOTGIR_AVBUS_VLD(value)           (USB_UOTGIR_AVBUS_VLD_Msk & (_UINT32_(value) << USB_UOTGIR_AVBUS_VLD_Pos)) /* Assignment of value for AVBUS_VLD in the USB_UOTGIR register */
#define   USB_UOTGIR_AVBUS_VLD_CHANGE_Val     _UINT32_(0x1)                                        /* (USB_UOTGIR) Change on usb_a_vbus_vld input detected  */
#define   USB_UOTGIR_AVBUS_VLD_NO_CHANGE_Val  _UINT32_(0x0)                                        /* (USB_UOTGIR) No change on usb_a_vbus_vld input detected  */
#define USB_UOTGIR_AVBUS_VLD_CHANGE           (USB_UOTGIR_AVBUS_VLD_CHANGE_Val << USB_UOTGIR_AVBUS_VLD_Pos) /* (USB_UOTGIR) Change on usb_a_vbus_vld input detected Position */
#define USB_UOTGIR_AVBUS_VLD_NO_CHANGE        (USB_UOTGIR_AVBUS_VLD_NO_CHANGE_Val << USB_UOTGIR_AVBUS_VLD_Pos) /* (USB_UOTGIR) No change on usb_a_vbus_vld input detected Position */
#define USB_UOTGIR_BSESS_END_Pos              _UINT32_(2)                                          /* (USB_UOTGIR) B-Device VBUS change indicator bit Position */
#define USB_UOTGIR_BSESS_END_Msk              (_UINT32_(0x1) << USB_UOTGIR_BSESS_END_Pos)          /* (USB_UOTGIR) B-Device VBUS change indicator bit Mask */
#define USB_UOTGIR_BSESS_END(value)           (USB_UOTGIR_BSESS_END_Msk & (_UINT32_(value) << USB_UOTGIR_BSESS_END_Pos)) /* Assignment of value for BSESS_END in the USB_UOTGIR register */
#define   USB_UOTGIR_BSESS_END_CHANGE_Val     _UINT32_(0x1)                                        /* (USB_UOTGIR) Change on usb_b_sess_end input detected  */
#define   USB_UOTGIR_BSESS_END_NO_CHANGED_Val _UINT32_(0x0)                                        /* (USB_UOTGIR) No change on usb_b_sess_end input detected  */
#define USB_UOTGIR_BSESS_END_CHANGE           (USB_UOTGIR_BSESS_END_CHANGE_Val << USB_UOTGIR_BSESS_END_Pos) /* (USB_UOTGIR) Change on usb_b_sess_end input detected Position */
#define USB_UOTGIR_BSESS_END_NO_CHANGED       (USB_UOTGIR_BSESS_END_NO_CHANGED_Val << USB_UOTGIR_BSESS_END_Pos) /* (USB_UOTGIR) No change on usb_b_sess_end input detected Position */
#define USB_UOTGIR_SESVDIF_Pos                _UINT32_(3)                                          /* (USB_UOTGIR) Session Valid Change Indicator bit Position */
#define USB_UOTGIR_SESVDIF_Msk                (_UINT32_(0x1) << USB_UOTGIR_SESVDIF_Pos)            /* (USB_UOTGIR) Session Valid Change Indicator bit Mask */
#define USB_UOTGIR_SESVDIF(value)             (USB_UOTGIR_SESVDIF_Msk & (_UINT32_(value) << USB_UOTGIR_SESVDIF_Pos)) /* Assignment of value for SESVDIF in the USB_UOTGIR register */
#define   USB_UOTGIR_SESVDIF_CHANGE_Val       _UINT32_(0x1)                                        /* (USB_UOTGIR) Change on usb_sess_vld input detected  */
#define   USB_UOTGIR_SESVDIF_NO_CHANGED_Val   _UINT32_(0x0)                                        /* (USB_UOTGIR) No change on usb_sess_vld input detected  */
#define USB_UOTGIR_SESVDIF_CHANGE             (USB_UOTGIR_SESVDIF_CHANGE_Val << USB_UOTGIR_SESVDIF_Pos) /* (USB_UOTGIR) Change on usb_sess_vld input detected Position */
#define USB_UOTGIR_SESVDIF_NO_CHANGED         (USB_UOTGIR_SESVDIF_NO_CHANGED_Val << USB_UOTGIR_SESVDIF_Pos) /* (USB_UOTGIR) No change on usb_sess_vld input detected Position */
#define USB_UOTGIR_ACTVIF_Pos                 _UINT32_(4)                                          /* (USB_UOTGIR) Bus Activity Indicator bit Position */
#define USB_UOTGIR_ACTVIF_Msk                 (_UINT32_(0x1) << USB_UOTGIR_ACTVIF_Pos)             /* (USB_UOTGIR) Bus Activity Indicator bit Mask */
#define USB_UOTGIR_ACTVIF(value)              (USB_UOTGIR_ACTVIF_Msk & (_UINT32_(value) << USB_UOTGIR_ACTVIF_Pos)) /* Assignment of value for ACTVIF in the USB_UOTGIR register */
#define   USB_UOTGIR_ACTVIF_DETECT_Val        _UINT32_(0x1)                                        /* (USB_UOTGIR) Activity on the D+, D-, ID, or VBus lines has been detected  */
#define   USB_UOTGIR_ACTVIF_NO_DETECT_Val     _UINT32_(0x0)                                        /* (USB_UOTGIR) Active has not been detected  */
#define USB_UOTGIR_ACTVIF_DETECT              (USB_UOTGIR_ACTVIF_DETECT_Val << USB_UOTGIR_ACTVIF_Pos) /* (USB_UOTGIR) Activity on the D+, D-, ID, or VBus lines has been detected Position */
#define USB_UOTGIR_ACTVIF_NO_DETECT           (USB_UOTGIR_ACTVIF_NO_DETECT_Val << USB_UOTGIR_ACTVIF_Pos) /* (USB_UOTGIR) Active has not been detected Position */
#define USB_UOTGIR_LSTATEIF_Pos               _UINT32_(5)                                          /* (USB_UOTGIR) Line State Stable Indicator bit Position */
#define USB_UOTGIR_LSTATEIF_Msk               (_UINT32_(0x1) << USB_UOTGIR_LSTATEIF_Pos)           /* (USB_UOTGIR) Line State Stable Indicator bit Mask */
#define USB_UOTGIR_LSTATEIF(value)            (USB_UOTGIR_LSTATEIF_Msk & (_UINT32_(value) << USB_UOTGIR_LSTATEIF_Pos)) /* Assignment of value for LSTATEIF in the USB_UOTGIR register */
#define   USB_UOTGIR_LSTATEIF_STABLE_Val      _UINT32_(0x1)                                        /* (USB_UOTGIR) USB line state has been stable for 1ms  */
#define   USB_UOTGIR_LSTATEIF_NOT_STABLE_Val  _UINT32_(0x0)                                        /* (USB_UOTGIR) USB line state has not been stable for 1ms  */
#define USB_UOTGIR_LSTATEIF_STABLE            (USB_UOTGIR_LSTATEIF_STABLE_Val << USB_UOTGIR_LSTATEIF_Pos) /* (USB_UOTGIR) USB line state has been stable for 1ms Position */
#define USB_UOTGIR_LSTATEIF_NOT_STABLE        (USB_UOTGIR_LSTATEIF_NOT_STABLE_Val << USB_UOTGIR_LSTATEIF_Pos) /* (USB_UOTGIR) USB line state has not been stable for 1ms Position */
#define USB_UOTGIR_T1MSECIF_Pos               _UINT32_(6)                                          /* (USB_UOTGIR) 1 Millisecond Timer bit Position */
#define USB_UOTGIR_T1MSECIF_Msk               (_UINT32_(0x1) << USB_UOTGIR_T1MSECIF_Pos)           /* (USB_UOTGIR) 1 Millisecond Timer bit Mask */
#define USB_UOTGIR_T1MSECIF(value)            (USB_UOTGIR_T1MSECIF_Msk & (_UINT32_(value) << USB_UOTGIR_T1MSECIF_Pos)) /* Assignment of value for T1MSECIF in the USB_UOTGIR register */
#define   USB_UOTGIR_T1MSECIF_EXPIRE_Val      _UINT32_(0x1)                                        /* (USB_UOTGIR) 1ms timer has expired  */
#define   USB_UOTGIR_T1MSECIF_NOT_EXPIRE_Val  _UINT32_(0x0)                                        /* (USB_UOTGIR) 1ms timer has not expired  */
#define USB_UOTGIR_T1MSECIF_EXPIRE            (USB_UOTGIR_T1MSECIF_EXPIRE_Val << USB_UOTGIR_T1MSECIF_Pos) /* (USB_UOTGIR) 1ms timer has expired Position */
#define USB_UOTGIR_T1MSECIF_NOT_EXPIRE        (USB_UOTGIR_T1MSECIF_NOT_EXPIRE_Val << USB_UOTGIR_T1MSECIF_Pos) /* (USB_UOTGIR) 1ms timer has not expired Position */
#define USB_UOTGIR_IDIF_Pos                   _UINT32_(7)                                          /* (USB_UOTGIR) ID State Change Indicator bit Position */
#define USB_UOTGIR_IDIF_Msk                   (_UINT32_(0x1) << USB_UOTGIR_IDIF_Pos)               /* (USB_UOTGIR) ID State Change Indicator bit Mask */
#define USB_UOTGIR_IDIF(value)                (USB_UOTGIR_IDIF_Msk & (_UINT32_(value) << USB_UOTGIR_IDIF_Pos)) /* Assignment of value for IDIF in the USB_UOTGIR register */
#define   USB_UOTGIR_IDIF_DETECT_Val          _UINT32_(0x1)                                        /* (USB_UOTGIR) Change in ID state is detected  */
#define   USB_UOTGIR_IDIF_NO_DETECT_Val       _UINT32_(0x0)                                        /* (USB_UOTGIR) No change in ID state is detected  */
#define USB_UOTGIR_IDIF_DETECT                (USB_UOTGIR_IDIF_DETECT_Val << USB_UOTGIR_IDIF_Pos)  /* (USB_UOTGIR) Change in ID state is detected Position */
#define USB_UOTGIR_IDIF_NO_DETECT             (USB_UOTGIR_IDIF_NO_DETECT_Val << USB_UOTGIR_IDIF_Pos) /* (USB_UOTGIR) No change in ID state is detected Position */
#define USB_UOTGIR_Msk                        _UINT32_(0x000000FD)                                 /* (USB_UOTGIR) Register Mask  */


/* -------- USB_UOTGIRCLR : (USB Offset: 0x44) (R/W 32)  -------- */
#define USB_UOTGIRCLR_RESETVALUE              _UINT32_(0x00)                                       /*  (USB_UOTGIRCLR)   Reset Value */

#define USB_UOTGIRCLR_Msk                     _UINT32_(0x00000000)                                 /* (USB_UOTGIRCLR) Register Mask  */


/* -------- USB_UOTGIRSET : (USB Offset: 0x48) (R/W 32)  -------- */
#define USB_UOTGIRSET_RESETVALUE              _UINT32_(0x00)                                       /*  (USB_UOTGIRSET)   Reset Value */

#define USB_UOTGIRSET_Msk                     _UINT32_(0x00000000)                                 /* (USB_UOTGIRSET) Register Mask  */


/* -------- USB_UOTGIRINV : (USB Offset: 0x4C) (R/W 32)  -------- */
#define USB_UOTGIRINV_RESETVALUE              _UINT32_(0x00)                                       /*  (USB_UOTGIRINV)   Reset Value */

#define USB_UOTGIRINV_Msk                     _UINT32_(0x00000000)                                 /* (USB_UOTGIRINV) Register Mask  */


/* -------- USB_UOTGIE : (USB Offset: 0x50) (R/W 32) USB OTG Interrupt Enable Register -------- */
#define USB_UOTGIE_AVBUS_VLD_Pos              _UINT32_(0)                                          /* (USB_UOTGIE) A- Vbus Valid Interrupt Enable bit Position */
#define USB_UOTGIE_AVBUS_VLD_Msk              (_UINT32_(0x1) << USB_UOTGIE_AVBUS_VLD_Pos)          /* (USB_UOTGIE) A- Vbus Valid Interrupt Enable bit Mask */
#define USB_UOTGIE_AVBUS_VLD(value)           (USB_UOTGIE_AVBUS_VLD_Msk & (_UINT32_(value) << USB_UOTGIE_AVBUS_VLD_Pos)) /* Assignment of value for AVBUS_VLD in the USB_UOTGIE register */
#define   USB_UOTGIE_AVBUS_VLD_ON_Val         _UINT32_(0x1)                                        /* (USB_UOTGIE) A-Vbus valid interrupt is enabled  */
#define   USB_UOTGIE_AVBUS_VLD_OFF_Val        _UINT32_(0x0)                                        /* (USB_UOTGIE) A-Vbus valid interrupt is disabled  */
#define USB_UOTGIE_AVBUS_VLD_ON               (USB_UOTGIE_AVBUS_VLD_ON_Val << USB_UOTGIE_AVBUS_VLD_Pos) /* (USB_UOTGIE) A-Vbus valid interrupt is enabled Position */
#define USB_UOTGIE_AVBUS_VLD_OFF              (USB_UOTGIE_AVBUS_VLD_OFF_Val << USB_UOTGIE_AVBUS_VLD_Pos) /* (USB_UOTGIE) A-Vbus valid interrupt is disabled Position */
#define USB_UOTGIE_BSESS_END_Pos              _UINT32_(2)                                          /* (USB_UOTGIE) B-Session End Interrupt Enable bit Position */
#define USB_UOTGIE_BSESS_END_Msk              (_UINT32_(0x1) << USB_UOTGIE_BSESS_END_Pos)          /* (USB_UOTGIE) B-Session End Interrupt Enable bit Mask */
#define USB_UOTGIE_BSESS_END(value)           (USB_UOTGIE_BSESS_END_Msk & (_UINT32_(value) << USB_UOTGIE_BSESS_END_Pos)) /* Assignment of value for BSESS_END in the USB_UOTGIE register */
#define   USB_UOTGIE_BSESS_END_ON_Val         _UINT32_(0x1)                                        /* (USB_UOTGIE) B-session end interrupt is enabled  */
#define   USB_UOTGIE_BSESS_END_OFF_Val        _UINT32_(0x0)                                        /* (USB_UOTGIE) B-session end interrupt is disabled  */
#define USB_UOTGIE_BSESS_END_ON               (USB_UOTGIE_BSESS_END_ON_Val << USB_UOTGIE_BSESS_END_Pos) /* (USB_UOTGIE) B-session end interrupt is enabled Position */
#define USB_UOTGIE_BSESS_END_OFF              (USB_UOTGIE_BSESS_END_OFF_Val << USB_UOTGIE_BSESS_END_Pos) /* (USB_UOTGIE) B-session end interrupt is disabled Position */
#define USB_UOTGIE_SESS_VLD_Pos               _UINT32_(3)                                          /* (USB_UOTGIE) Session Valid Interrupt Enable bit Position */
#define USB_UOTGIE_SESS_VLD_Msk               (_UINT32_(0x1) << USB_UOTGIE_SESS_VLD_Pos)           /* (USB_UOTGIE) Session Valid Interrupt Enable bit Mask */
#define USB_UOTGIE_SESS_VLD(value)            (USB_UOTGIE_SESS_VLD_Msk & (_UINT32_(value) << USB_UOTGIE_SESS_VLD_Pos)) /* Assignment of value for SESS_VLD in the USB_UOTGIE register */
#define   USB_UOTGIE_SESS_VLD_ON_Val          _UINT32_(0x1)                                        /* (USB_UOTGIE) Session valid interrupt is enabled  */
#define   USB_UOTGIE_SESS_VLD_OFF_Val         _UINT32_(0x0)                                        /* (USB_UOTGIE) Session valid interrupt is disabled  */
#define USB_UOTGIE_SESS_VLD_ON                (USB_UOTGIE_SESS_VLD_ON_Val << USB_UOTGIE_SESS_VLD_Pos) /* (USB_UOTGIE) Session valid interrupt is enabled Position */
#define USB_UOTGIE_SESS_VLD_OFF               (USB_UOTGIE_SESS_VLD_OFF_Val << USB_UOTGIE_SESS_VLD_Pos) /* (USB_UOTGIE) Session valid interrupt is disabled Position */
#define USB_UOTGIE_ACTIVITY_Pos               _UINT32_(4)                                          /* (USB_UOTGIE) Activity Interrupt Enable bit Position */
#define USB_UOTGIE_ACTIVITY_Msk               (_UINT32_(0x1) << USB_UOTGIE_ACTIVITY_Pos)           /* (USB_UOTGIE) Activity Interrupt Enable bit Mask */
#define USB_UOTGIE_ACTIVITY(value)            (USB_UOTGIE_ACTIVITY_Msk & (_UINT32_(value) << USB_UOTGIE_ACTIVITY_Pos)) /* Assignment of value for ACTIVITY in the USB_UOTGIE register */
#define   USB_UOTGIE_ACTIVITY_ON_Val          _UINT32_(0x1)                                        /* (USB_UOTGIE) ACTIVITY interrupt is enabled  */
#define   USB_UOTGIE_ACTIVITY_OFF_Val         _UINT32_(0x0)                                        /* (USB_UOTGIE) ACTIVITY interrupt is disabled  */
#define USB_UOTGIE_ACTIVITY_ON                (USB_UOTGIE_ACTIVITY_ON_Val << USB_UOTGIE_ACTIVITY_Pos) /* (USB_UOTGIE) ACTIVITY interrupt is enabled Position */
#define USB_UOTGIE_ACTIVITY_OFF               (USB_UOTGIE_ACTIVITY_OFF_Val << USB_UOTGIE_ACTIVITY_Pos) /* (USB_UOTGIE) ACTIVITY interrupt is disabled Position */
#define USB_UOTGIE_LSTATE_Pos                 _UINT32_(5)                                          /* (USB_UOTGIE) Line State Interrupt Enable bit Position */
#define USB_UOTGIE_LSTATE_Msk                 (_UINT32_(0x1) << USB_UOTGIE_LSTATE_Pos)             /* (USB_UOTGIE) Line State Interrupt Enable bit Mask */
#define USB_UOTGIE_LSTATE(value)              (USB_UOTGIE_LSTATE_Msk & (_UINT32_(value) << USB_UOTGIE_LSTATE_Pos)) /* Assignment of value for LSTATE in the USB_UOTGIE register */
#define   USB_UOTGIE_LSTATE_ON_Val            _UINT32_(0x1)                                        /* (USB_UOTGIE) Line state interrupt is enabled  */
#define   USB_UOTGIE_LSTATE_OFF_Val           _UINT32_(0x0)                                        /* (USB_UOTGIE) Line state interrupt is disabled  */
#define USB_UOTGIE_LSTATE_ON                  (USB_UOTGIE_LSTATE_ON_Val << USB_UOTGIE_LSTATE_Pos)  /* (USB_UOTGIE) Line state interrupt is enabled Position */
#define USB_UOTGIE_LSTATE_OFF                 (USB_UOTGIE_LSTATE_OFF_Val << USB_UOTGIE_LSTATE_Pos) /* (USB_UOTGIE) Line state interrupt is disabled Position */
#define USB_UOTGIE_ONE_MSEC_Pos               _UINT32_(6)                                          /* (USB_UOTGIE) 1 Millisecond Timer Interrupt Enable bit Position */
#define USB_UOTGIE_ONE_MSEC_Msk               (_UINT32_(0x1) << USB_UOTGIE_ONE_MSEC_Pos)           /* (USB_UOTGIE) 1 Millisecond Timer Interrupt Enable bit Mask */
#define USB_UOTGIE_ONE_MSEC(value)            (USB_UOTGIE_ONE_MSEC_Msk & (_UINT32_(value) << USB_UOTGIE_ONE_MSEC_Pos)) /* Assignment of value for ONE_MSEC in the USB_UOTGIE register */
#define   USB_UOTGIE_ONE_MSEC_ON_Val          _UINT32_(0x1)                                        /* (USB_UOTGIE) 1 millisecond timer interrupt is enabled  */
#define   USB_UOTGIE_ONE_MSEC_OFF_Val         _UINT32_(0x0)                                        /* (USB_UOTGIE) 1 millisecond timer interrupt is disabled  */
#define USB_UOTGIE_ONE_MSEC_ON                (USB_UOTGIE_ONE_MSEC_ON_Val << USB_UOTGIE_ONE_MSEC_Pos) /* (USB_UOTGIE) 1 millisecond timer interrupt is enabled Position */
#define USB_UOTGIE_ONE_MSEC_OFF               (USB_UOTGIE_ONE_MSEC_OFF_Val << USB_UOTGIE_ONE_MSEC_Pos) /* (USB_UOTGIE) 1 millisecond timer interrupt is disabled Position */
#define USB_UOTGIE_IDIE_Pos                   _UINT32_(7)                                          /* (USB_UOTGIE) ID Interrupt Enable bit Position */
#define USB_UOTGIE_IDIE_Msk                   (_UINT32_(0x1) << USB_UOTGIE_IDIE_Pos)               /* (USB_UOTGIE) ID Interrupt Enable bit Mask */
#define USB_UOTGIE_IDIE(value)                (USB_UOTGIE_IDIE_Msk & (_UINT32_(value) << USB_UOTGIE_IDIE_Pos)) /* Assignment of value for IDIE in the USB_UOTGIE register */
#define   USB_UOTGIE_IDIE_ON_Val              _UINT32_(0x1)                                        /* (USB_UOTGIE) ID interrupt is enabled  */
#define   USB_UOTGIE_IDIE_OFF_Val             _UINT32_(0x0)                                        /* (USB_UOTGIE) ID interrupt is disabled  */
#define USB_UOTGIE_IDIE_ON                    (USB_UOTGIE_IDIE_ON_Val << USB_UOTGIE_IDIE_Pos)      /* (USB_UOTGIE) ID interrupt is enabled Position */
#define USB_UOTGIE_IDIE_OFF                   (USB_UOTGIE_IDIE_OFF_Val << USB_UOTGIE_IDIE_Pos)     /* (USB_UOTGIE) ID interrupt is disabled Position */
#define USB_UOTGIE_Msk                        _UINT32_(0x000000FD)                                 /* (USB_UOTGIE) Register Mask  */


/* -------- USB_UOTGIECLR : (USB Offset: 0x54) (R/W 32)  -------- */
#define USB_UOTGIECLR_RESETVALUE              _UINT32_(0x00)                                       /*  (USB_UOTGIECLR)   Reset Value */

#define USB_UOTGIECLR_Msk                     _UINT32_(0x00000000)                                 /* (USB_UOTGIECLR) Register Mask  */


/* -------- USB_UOTGIESET : (USB Offset: 0x58) (R/W 32)  -------- */
#define USB_UOTGIESET_RESETVALUE              _UINT32_(0x00)                                       /*  (USB_UOTGIESET)   Reset Value */

#define USB_UOTGIESET_Msk                     _UINT32_(0x00000000)                                 /* (USB_UOTGIESET) Register Mask  */


/* -------- USB_UOTGIEINV : (USB Offset: 0x5C) (R/W 32)  -------- */
#define USB_UOTGIEINV_RESETVALUE              _UINT32_(0x00)                                       /*  (USB_UOTGIEINV)   Reset Value */

#define USB_UOTGIEINV_Msk                     _UINT32_(0x00000000)                                 /* (USB_UOTGIEINV) Register Mask  */


/* -------- USB_UOTGSTAT : (USB Offset: 0x60) (R/W 32) USB OTG Status Register -------- */
#define USB_UOTGSTAT_VBUSVD_Pos               _UINT32_(0)                                          /* (USB_UOTGSTAT) A-VBUS Valid Indicator bit Position */
#define USB_UOTGSTAT_VBUSVD_Msk               (_UINT32_(0x1) << USB_UOTGSTAT_VBUSVD_Pos)           /* (USB_UOTGSTAT) A-VBUS Valid Indicator bit Mask */
#define USB_UOTGSTAT_VBUSVD(value)            (USB_UOTGSTAT_VBUSVD_Msk & (_UINT32_(value) << USB_UOTGSTAT_VBUSVD_Pos)) /* Assignment of value for VBUSVD in the USB_UOTGSTAT register */
#define   USB_UOTGSTAT_VBUSVD_ABOVE_Val       _UINT32_(0x1)                                        /* (USB_UOTGSTAT) Vbus voltage is above VA_VBUS_VLD on the A device  */
#define   USB_UOTGSTAT_VBUSVD_BELOW_Val       _UINT32_(0x0)                                        /* (USB_UOTGSTAT) Vbus voltage is below VA_VBUS_VLD on the A device  */
#define USB_UOTGSTAT_VBUSVD_ABOVE             (USB_UOTGSTAT_VBUSVD_ABOVE_Val << USB_UOTGSTAT_VBUSVD_Pos) /* (USB_UOTGSTAT) Vbus voltage is above VA_VBUS_VLD on the A device Position */
#define USB_UOTGSTAT_VBUSVD_BELOW             (USB_UOTGSTAT_VBUSVD_BELOW_Val << USB_UOTGSTAT_VBUSVD_Pos) /* (USB_UOTGSTAT) Vbus voltage is below VA_VBUS_VLD on the A device Position */
#define USB_UOTGSTAT_SESEND_Pos               _UINT32_(2)                                          /* (USB_UOTGSTAT) B-Session End Indicator bit Position */
#define USB_UOTGSTAT_SESEND_Msk               (_UINT32_(0x1) << USB_UOTGSTAT_SESEND_Pos)           /* (USB_UOTGSTAT) B-Session End Indicator bit Mask */
#define USB_UOTGSTAT_SESEND(value)            (USB_UOTGSTAT_SESEND_Msk & (_UINT32_(value) << USB_UOTGSTAT_SESEND_Pos)) /* Assignment of value for SESEND in the USB_UOTGSTAT register */
#define   USB_UOTGSTAT_SESEND_BELOW_Val       _UINT32_(0x1)                                        /* (USB_UOTGSTAT) Vbus voltage is below VB_SESS_END on the B device  */
#define   USB_UOTGSTAT_SESEND_ABOVE_Val       _UINT32_(0x0)                                        /* (USB_UOTGSTAT) Vbus voltage is above VB_SESS_END on the B device  */
#define USB_UOTGSTAT_SESEND_BELOW             (USB_UOTGSTAT_SESEND_BELOW_Val << USB_UOTGSTAT_SESEND_Pos) /* (USB_UOTGSTAT) Vbus voltage is below VB_SESS_END on the B device Position */
#define USB_UOTGSTAT_SESEND_ABOVE             (USB_UOTGSTAT_SESEND_ABOVE_Val << USB_UOTGSTAT_SESEND_Pos) /* (USB_UOTGSTAT) Vbus voltage is above VB_SESS_END on the B device Position */
#define USB_UOTGSTAT_SESVD_Pos                _UINT32_(3)                                          /* (USB_UOTGSTAT) Session Valid Indicator bit Position */
#define USB_UOTGSTAT_SESVD_Msk                (_UINT32_(0x1) << USB_UOTGSTAT_SESVD_Pos)            /* (USB_UOTGSTAT) Session Valid Indicator bit Mask */
#define USB_UOTGSTAT_SESVD(value)             (USB_UOTGSTAT_SESVD_Msk & (_UINT32_(value) << USB_UOTGSTAT_SESVD_Pos)) /* Assignment of value for SESVD in the USB_UOTGSTAT register */
#define   USB_UOTGSTAT_SESVD_ABOVE_Val        _UINT32_(0x1)                                        /* (USB_UOTGSTAT) Vbus voltage is above Session Valid on the A or B device  */
#define   USB_UOTGSTAT_SESVD_BELOW_Val        _UINT32_(0x0)                                        /* (USB_UOTGSTAT) Vbus voltage is below Session Valid on the A or B device  */
#define USB_UOTGSTAT_SESVD_ABOVE              (USB_UOTGSTAT_SESVD_ABOVE_Val << USB_UOTGSTAT_SESVD_Pos) /* (USB_UOTGSTAT) Vbus voltage is above Session Valid on the A or B device Position */
#define USB_UOTGSTAT_SESVD_BELOW              (USB_UOTGSTAT_SESVD_BELOW_Val << USB_UOTGSTAT_SESVD_Pos) /* (USB_UOTGSTAT) Vbus voltage is below Session Valid on the A or B device Position */
#define USB_UOTGSTAT_LSTATE_Pos               _UINT32_(5)                                          /* (USB_UOTGSTAT) Line State Stable Indicator bit Position */
#define USB_UOTGSTAT_LSTATE_Msk               (_UINT32_(0x1) << USB_UOTGSTAT_LSTATE_Pos)           /* (USB_UOTGSTAT) Line State Stable Indicator bit Mask */
#define USB_UOTGSTAT_LSTATE(value)            (USB_UOTGSTAT_LSTATE_Msk & (_UINT32_(value) << USB_UOTGSTAT_LSTATE_Pos)) /* Assignment of value for LSTATE in the USB_UOTGSTAT register */
#define   USB_UOTGSTAT_LSTATE_STABLE_Val      _UINT32_(0x1)                                        /* (USB_UOTGSTAT) USB line state (UCTRL[SE0 and JSTATE]) has been stable for the previous 1 ms  */
#define   USB_UOTGSTAT_LSTATE_NOT_STABLE_Val  _UINT32_(0x0)                                        /* (USB_UOTGSTAT) USB line state (UCTRL[SE0 and JSTATE]) has not been stable for the previous 1 ms  */
#define USB_UOTGSTAT_LSTATE_STABLE            (USB_UOTGSTAT_LSTATE_STABLE_Val << USB_UOTGSTAT_LSTATE_Pos) /* (USB_UOTGSTAT) USB line state (UCTRL[SE0 and JSTATE]) has been stable for the previous 1 ms Position */
#define USB_UOTGSTAT_LSTATE_NOT_STABLE        (USB_UOTGSTAT_LSTATE_NOT_STABLE_Val << USB_UOTGSTAT_LSTATE_Pos) /* (USB_UOTGSTAT) USB line state (UCTRL[SE0 and JSTATE]) has not been stable for the previous 1 ms Position */
#define USB_UOTGSTAT_ID_Pos                   _UINT32_(7)                                          /* (USB_UOTGSTAT) ID Pin State Indicator bit Position */
#define USB_UOTGSTAT_ID_Msk                   (_UINT32_(0x1) << USB_UOTGSTAT_ID_Pos)               /* (USB_UOTGSTAT) ID Pin State Indicator bit Mask */
#define USB_UOTGSTAT_ID(value)                (USB_UOTGSTAT_ID_Msk & (_UINT32_(value) << USB_UOTGSTAT_ID_Pos)) /* Assignment of value for ID in the USB_UOTGSTAT register */
#define   USB_UOTGSTAT_ID_NOT_PLUG_Val        _UINT32_(0x1)                                        /* (USB_UOTGSTAT) No cable is attached or a Type-B cable has been plugged into the USB receptacle  */
#define   USB_UOTGSTAT_ID_PLUG_Val            _UINT32_(0x0)                                        /* (USB_UOTGSTAT) A Type-A cable has been plugged into the USB receptacle  */
#define USB_UOTGSTAT_ID_NOT_PLUG              (USB_UOTGSTAT_ID_NOT_PLUG_Val << USB_UOTGSTAT_ID_Pos) /* (USB_UOTGSTAT) No cable is attached or a Type-B cable has been plugged into the USB receptacle Position */
#define USB_UOTGSTAT_ID_PLUG                  (USB_UOTGSTAT_ID_PLUG_Val << USB_UOTGSTAT_ID_Pos)    /* (USB_UOTGSTAT) A Type-A cable has been plugged into the USB receptacle Position */
#define USB_UOTGSTAT_Msk                      _UINT32_(0x000000AD)                                 /* (USB_UOTGSTAT) Register Mask  */


/* -------- USB_UOTGCON : (USB Offset: 0x70) (R/W 32) USB OTG Control Register -------- */
#define USB_UOTGCON_VBUSDIS_Pos               _UINT32_(0)                                          /* (USB_UOTGCON) Vbus Discharge Enable bit Position */
#define USB_UOTGCON_VBUSDIS_Msk               (_UINT32_(0x1) << USB_UOTGCON_VBUSDIS_Pos)           /* (USB_UOTGCON) Vbus Discharge Enable bit Mask */
#define USB_UOTGCON_VBUSDIS(value)            (USB_UOTGCON_VBUSDIS_Msk & (_UINT32_(value) << USB_UOTGCON_VBUSDIS_Pos)) /* Assignment of value for VBUSDIS in the USB_UOTGCON register */
#define   USB_UOTGCON_VBUSDIS_DISCHG_Val      _UINT32_(0x1)                                        /* (USB_UOTGCON) Vbus line is discharged through a pull-down resistor  */
#define   USB_UOTGCON_VBUSDIS_NOT_DISCHG_Val  _UINT32_(0x0)                                        /* (USB_UOTGCON) Vbus line is not discharged through a resistor  */
#define USB_UOTGCON_VBUSDIS_DISCHG            (USB_UOTGCON_VBUSDIS_DISCHG_Val << USB_UOTGCON_VBUSDIS_Pos) /* (USB_UOTGCON) Vbus line is discharged through a pull-down resistor Position */
#define USB_UOTGCON_VBUSDIS_NOT_DISCHG        (USB_UOTGCON_VBUSDIS_NOT_DISCHG_Val << USB_UOTGCON_VBUSDIS_Pos) /* (USB_UOTGCON) Vbus line is not discharged through a resistor Position */
#define USB_UOTGCON_VBUSCHG_Pos               _UINT32_(1)                                          /* (USB_UOTGCON) Vbus Charge Enable bit Position */
#define USB_UOTGCON_VBUSCHG_Msk               (_UINT32_(0x1) << USB_UOTGCON_VBUSCHG_Pos)           /* (USB_UOTGCON) Vbus Charge Enable bit Mask */
#define USB_UOTGCON_VBUSCHG(value)            (USB_UOTGCON_VBUSCHG_Msk & (_UINT32_(value) << USB_UOTGCON_VBUSCHG_Pos)) /* Assignment of value for VBUSCHG in the USB_UOTGCON register */
#define   USB_UOTGCON_VBUSCHG_CHG_Val         _UINT32_(0x1)                                        /* (USB_UOTGCON) Vbus line is charged through a pull-up resistor  */
#define   USB_UOTGCON_VBUSCHG_NOT_CHG_Val     _UINT32_(0x0)                                        /* (USB_UOTGCON) Vbus line is not charged through a resistor  */
#define USB_UOTGCON_VBUSCHG_CHG               (USB_UOTGCON_VBUSCHG_CHG_Val << USB_UOTGCON_VBUSCHG_Pos) /* (USB_UOTGCON) Vbus line is charged through a pull-up resistor Position */
#define USB_UOTGCON_VBUSCHG_NOT_CHG           (USB_UOTGCON_VBUSCHG_NOT_CHG_Val << USB_UOTGCON_VBUSCHG_Pos) /* (USB_UOTGCON) Vbus line is not charged through a resistor Position */
#define USB_UOTGCON_OTGEN_Pos                 _UINT32_(2)                                          /* (USB_UOTGCON) OTG Functionality Enable bit Position */
#define USB_UOTGCON_OTGEN_Msk                 (_UINT32_(0x1) << USB_UOTGCON_OTGEN_Pos)             /* (USB_UOTGCON) OTG Functionality Enable bit Mask */
#define USB_UOTGCON_OTGEN(value)              (USB_UOTGCON_OTGEN_Msk & (_UINT32_(value) << USB_UOTGCON_OTGEN_Pos)) /* Assignment of value for OTGEN in the USB_UOTGCON register */
#define   USB_UOTGCON_OTGEN_ON_Val            _UINT32_(0x1)                                        /* (USB_UOTGCON) DPPULUP  */
#define   USB_UOTGCON_OTGEN_OFF_Val           _UINT32_(0x0)                                        /* (USB_UOTGCON) DPPULUP  */
#define USB_UOTGCON_OTGEN_ON                  (USB_UOTGCON_OTGEN_ON_Val << USB_UOTGCON_OTGEN_Pos)  /* (USB_UOTGCON) DPPULUP Position */
#define USB_UOTGCON_OTGEN_OFF                 (USB_UOTGCON_OTGEN_OFF_Val << USB_UOTGCON_OTGEN_Pos) /* (USB_UOTGCON) DPPULUP Position */
#define USB_UOTGCON_VBUSON_Pos                _UINT32_(3)                                          /* (USB_UOTGCON) Vbus Power-on bit Position */
#define USB_UOTGCON_VBUSON_Msk                (_UINT32_(0x1) << USB_UOTGCON_VBUSON_Pos)            /* (USB_UOTGCON) Vbus Power-on bit Mask */
#define USB_UOTGCON_VBUSON(value)             (USB_UOTGCON_VBUSON_Msk & (_UINT32_(value) << USB_UOTGCON_VBUSON_Pos)) /* Assignment of value for VBUSON in the USB_UOTGCON register */
#define   USB_UOTGCON_VBUSON_ON_Val           _UINT32_(0x1)                                        /* (USB_UOTGCON) Vbus line is powered  */
#define   USB_UOTGCON_VBUSON_OFF_Val          _UINT32_(0x0)                                        /* (USB_UOTGCON) Vbus line is not powered  */
#define USB_UOTGCON_VBUSON_ON                 (USB_UOTGCON_VBUSON_ON_Val << USB_UOTGCON_VBUSON_Pos) /* (USB_UOTGCON) Vbus line is powered Position */
#define USB_UOTGCON_VBUSON_OFF                (USB_UOTGCON_VBUSON_OFF_Val << USB_UOTGCON_VBUSON_Pos) /* (USB_UOTGCON) Vbus line is not powered Position */
#define USB_UOTGCON_DMPULDWN_Pos              _UINT32_(4)                                          /* (USB_UOTGCON) D- Pull-Down Enable bit Position */
#define USB_UOTGCON_DMPULDWN_Msk              (_UINT32_(0x1) << USB_UOTGCON_DMPULDWN_Pos)          /* (USB_UOTGCON) D- Pull-Down Enable bit Mask */
#define USB_UOTGCON_DMPULDWN(value)           (USB_UOTGCON_DMPULDWN_Msk & (_UINT32_(value) << USB_UOTGCON_DMPULDWN_Pos)) /* Assignment of value for DMPULDWN in the USB_UOTGCON register */
#define   USB_UOTGCON_DMPULDWN_ON_Val         _UINT32_(0x1)                                        /* (USB_UOTGCON) D- data line pull-down resistor is enabled  */
#define   USB_UOTGCON_DMPULDWN_OFF_Val        _UINT32_(0x0)                                        /* (USB_UOTGCON) D- data line pull-down resistor is disabled  */
#define USB_UOTGCON_DMPULDWN_ON               (USB_UOTGCON_DMPULDWN_ON_Val << USB_UOTGCON_DMPULDWN_Pos) /* (USB_UOTGCON) D- data line pull-down resistor is enabled Position */
#define USB_UOTGCON_DMPULDWN_OFF              (USB_UOTGCON_DMPULDWN_OFF_Val << USB_UOTGCON_DMPULDWN_Pos) /* (USB_UOTGCON) D- data line pull-down resistor is disabled Position */
#define USB_UOTGCON_DPPULDWN_Pos              _UINT32_(5)                                          /* (USB_UOTGCON) D+ Pull-Down Enable bit Position */
#define USB_UOTGCON_DPPULDWN_Msk              (_UINT32_(0x1) << USB_UOTGCON_DPPULDWN_Pos)          /* (USB_UOTGCON) D+ Pull-Down Enable bit Mask */
#define USB_UOTGCON_DPPULDWN(value)           (USB_UOTGCON_DPPULDWN_Msk & (_UINT32_(value) << USB_UOTGCON_DPPULDWN_Pos)) /* Assignment of value for DPPULDWN in the USB_UOTGCON register */
#define   USB_UOTGCON_DPPULDWN_ON_Val         _UINT32_(0x1)                                        /* (USB_UOTGCON) D+ data line pull-down resistor is enabled  */
#define   USB_UOTGCON_DPPULDWN_OFF_Val        _UINT32_(0x0)                                        /* (USB_UOTGCON) D+ data line pull-down resistor is disabled  */
#define USB_UOTGCON_DPPULDWN_ON               (USB_UOTGCON_DPPULDWN_ON_Val << USB_UOTGCON_DPPULDWN_Pos) /* (USB_UOTGCON) D+ data line pull-down resistor is enabled Position */
#define USB_UOTGCON_DPPULDWN_OFF              (USB_UOTGCON_DPPULDWN_OFF_Val << USB_UOTGCON_DPPULDWN_Pos) /* (USB_UOTGCON) D+ data line pull-down resistor is disabled Position */
#define USB_UOTGCON_DMPULUP_Pos               _UINT32_(6)                                          /* (USB_UOTGCON) D- Pull-Up Enable bit Position */
#define USB_UOTGCON_DMPULUP_Msk               (_UINT32_(0x1) << USB_UOTGCON_DMPULUP_Pos)           /* (USB_UOTGCON) D- Pull-Up Enable bit Mask */
#define USB_UOTGCON_DMPULUP(value)            (USB_UOTGCON_DMPULUP_Msk & (_UINT32_(value) << USB_UOTGCON_DMPULUP_Pos)) /* Assignment of value for DMPULUP in the USB_UOTGCON register */
#define   USB_UOTGCON_DMPULUP_ON_Val          _UINT32_(0x1)                                        /* (USB_UOTGCON) D- data line pull-up resistor is enabled  */
#define   USB_UOTGCON_DMPULUP_OFF_Val         _UINT32_(0x0)                                        /* (USB_UOTGCON) D- data line pull-up resistor is disabled  */
#define USB_UOTGCON_DMPULUP_ON                (USB_UOTGCON_DMPULUP_ON_Val << USB_UOTGCON_DMPULUP_Pos) /* (USB_UOTGCON) D- data line pull-up resistor is enabled Position */
#define USB_UOTGCON_DMPULUP_OFF               (USB_UOTGCON_DMPULUP_OFF_Val << USB_UOTGCON_DMPULUP_Pos) /* (USB_UOTGCON) D- data line pull-up resistor is disabled Position */
#define USB_UOTGCON_DPPULUP_Pos               _UINT32_(7)                                          /* (USB_UOTGCON) D+ Pull-Up Enable bit Position */
#define USB_UOTGCON_DPPULUP_Msk               (_UINT32_(0x1) << USB_UOTGCON_DPPULUP_Pos)           /* (USB_UOTGCON) D+ Pull-Up Enable bit Mask */
#define USB_UOTGCON_DPPULUP(value)            (USB_UOTGCON_DPPULUP_Msk & (_UINT32_(value) << USB_UOTGCON_DPPULUP_Pos)) /* Assignment of value for DPPULUP in the USB_UOTGCON register */
#define   USB_UOTGCON_DPPULUP_ON_Val          _UINT32_(0x1)                                        /* (USB_UOTGCON) D+ data line pull-up resistor is enabled  */
#define   USB_UOTGCON_DPPULUP_OFF_Val         _UINT32_(0x0)                                        /* (USB_UOTGCON) D+ data line pull-up resistor is disabled  */
#define USB_UOTGCON_DPPULUP_ON                (USB_UOTGCON_DPPULUP_ON_Val << USB_UOTGCON_DPPULUP_Pos) /* (USB_UOTGCON) D+ data line pull-up resistor is enabled Position */
#define USB_UOTGCON_DPPULUP_OFF               (USB_UOTGCON_DPPULUP_OFF_Val << USB_UOTGCON_DPPULUP_Pos) /* (USB_UOTGCON) D+ data line pull-up resistor is disabled Position */
#define USB_UOTGCON_Msk                       _UINT32_(0x000000FF)                                 /* (USB_UOTGCON) Register Mask  */


/* -------- USB_UOTGCONCLR : (USB Offset: 0x74) (R/W 32)  -------- */
#define USB_UOTGCONCLR_RESETVALUE             _UINT32_(0x00)                                       /*  (USB_UOTGCONCLR)   Reset Value */

#define USB_UOTGCONCLR_Msk                    _UINT32_(0x00000000)                                 /* (USB_UOTGCONCLR) Register Mask  */


/* -------- USB_UOTGCONSET : (USB Offset: 0x78) (R/W 32)  -------- */
#define USB_UOTGCONSET_RESETVALUE             _UINT32_(0x00)                                       /*  (USB_UOTGCONSET)   Reset Value */

#define USB_UOTGCONSET_Msk                    _UINT32_(0x00000000)                                 /* (USB_UOTGCONSET) Register Mask  */


/* -------- USB_UOTGCONINV : (USB Offset: 0x7C) (R/W 32)  -------- */
#define USB_UOTGCONINV_RESETVALUE             _UINT32_(0x00)                                       /*  (USB_UOTGCONINV)   Reset Value */

#define USB_UOTGCONINV_Msk                    _UINT32_(0x00000000)                                 /* (USB_UOTGCONINV) Register Mask  */


/* -------- USB_UPWRC : (USB Offset: 0x80) (R/W 32) USB Power Control Register -------- */
#define USB_UPWRC_USBPWR_Pos                  _UINT32_(0)                                          /* (USB_UPWRC) USB Operation Enable bit Position */
#define USB_UPWRC_USBPWR_Msk                  (_UINT32_(0x1) << USB_UPWRC_USBPWR_Pos)              /* (USB_UPWRC) USB Operation Enable bit Mask */
#define USB_UPWRC_USBPWR(value)               (USB_UPWRC_USBPWR_Msk & (_UINT32_(value) << USB_UPWRC_USBPWR_Pos)) /* Assignment of value for USBPWR in the USB_UPWRC register */
#define   USB_UPWRC_USBPWR_ON_Val             _UINT32_(0x1)                                        /* (USB_UPWRC) USB module is turned on  */
#define   USB_UPWRC_USBPWR_OFF_Val            _UINT32_(0x0)                                        /* (USB_UPWRC) USB module is disabled (Outputs held inactive  */
#define USB_UPWRC_USBPWR_ON                   (USB_UPWRC_USBPWR_ON_Val << USB_UPWRC_USBPWR_Pos)    /* (USB_UPWRC) USB module is turned on Position */
#define USB_UPWRC_USBPWR_OFF                  (USB_UPWRC_USBPWR_OFF_Val << USB_UPWRC_USBPWR_Pos)   /* (USB_UPWRC) USB module is disabled (Outputs held inactive Position */
#define USB_UPWRC_USUSPEND_Pos                _UINT32_(1)                                          /* (USB_UPWRC) USB Suspend Mode bit Position */
#define USB_UPWRC_USUSPEND_Msk                (_UINT32_(0x1) << USB_UPWRC_USUSPEND_Pos)            /* (USB_UPWRC) USB Suspend Mode bit Mask */
#define USB_UPWRC_USUSPEND(value)             (USB_UPWRC_USUSPEND_Msk & (_UINT32_(value) << USB_UPWRC_USUSPEND_Pos)) /* Assignment of value for USUSPEND in the USB_UPWRC register */
#define   USB_UPWRC_USUSPEND_SUSPEND_Val      _UINT32_(0x1)                                        /* (USB_UPWRC) USB module is placed in Suspend mode (The 48 MHz USB clock will be gated off. The transceiver is placed in a low-power state.)  */
#define   USB_UPWRC_USUSPEND_NORMAL_Val       _UINT32_(0x0)                                        /* (USB_UPWRC) USB module operates normally  */
#define USB_UPWRC_USUSPEND_SUSPEND            (USB_UPWRC_USUSPEND_SUSPEND_Val << USB_UPWRC_USUSPEND_Pos) /* (USB_UPWRC) USB module is placed in Suspend mode (The 48 MHz USB clock will be gated off. The transceiver is placed in a low-power state.) Position */
#define USB_UPWRC_USUSPEND_NORMAL             (USB_UPWRC_USUSPEND_NORMAL_Val << USB_UPWRC_USUSPEND_Pos) /* (USB_UPWRC) USB module operates normally Position */
#define USB_UPWRC_USBBUSY_Pos                 _UINT32_(3)                                          /* (USB_UPWRC) USB Module Busy bit Position */
#define USB_UPWRC_USBBUSY_Msk                 (_UINT32_(0x1) << USB_UPWRC_USBBUSY_Pos)             /* (USB_UPWRC) USB Module Busy bit Mask */
#define USB_UPWRC_USBBUSY(value)              (USB_UPWRC_USBBUSY_Msk & (_UINT32_(value) << USB_UPWRC_USBBUSY_Pos)) /* Assignment of value for USBBUSY in the USB_UPWRC register */
#define   USB_UPWRC_USBBUSY_ACTIVE_OR_DISALBE_Val _UINT32_(0x1)                                        /* (USB_UPWRC) USB module is active or disabled  */
#define   USB_UPWRC_USBBUSY_NOT_ACTIVE_AND_READY_Val _UINT32_(0x0)                                        /* (USB_UPWRC) USB module is not active and is ready to be enabled  */
#define USB_UPWRC_USBBUSY_ACTIVE_OR_DISALBE   (USB_UPWRC_USBBUSY_ACTIVE_OR_DISALBE_Val << USB_UPWRC_USBBUSY_Pos) /* (USB_UPWRC) USB module is active or disabled Position */
#define USB_UPWRC_USBBUSY_NOT_ACTIVE_AND_READY (USB_UPWRC_USBBUSY_NOT_ACTIVE_AND_READY_Val << USB_UPWRC_USBBUSY_Pos) /* (USB_UPWRC) USB module is not active and is ready to be enabled Position */
#define USB_UPWRC_USLPGRD_Pos                 _UINT32_(4)                                          /* (USB_UPWRC) USB Sleep Entry Guard bit Position */
#define USB_UPWRC_USLPGRD_Msk                 (_UINT32_(0x1) << USB_UPWRC_USLPGRD_Pos)             /* (USB_UPWRC) USB Sleep Entry Guard bit Mask */
#define USB_UPWRC_USLPGRD(value)              (USB_UPWRC_USLPGRD_Msk & (_UINT32_(value) << USB_UPWRC_USLPGRD_Pos)) /* Assignment of value for USLPGRD in the USB_UPWRC register */
#define   USB_UPWRC_USLPGRD_BLOCK_SLEEP_Val   _UINT32_(0x1)                                        /* (USB_UPWRC) Sleep entry is blocked if USB bus activity is detected or if a notification is pending  */
#define   USB_UPWRC_USLPGRD_NO_BLOCK_Val      _UINT32_(0x0)                                        /* (USB_UPWRC) USB module does not block Sleep entry  */
#define USB_UPWRC_USLPGRD_BLOCK_SLEEP         (USB_UPWRC_USLPGRD_BLOCK_SLEEP_Val << USB_UPWRC_USLPGRD_Pos) /* (USB_UPWRC) Sleep entry is blocked if USB bus activity is detected or if a notification is pending Position */
#define USB_UPWRC_USLPGRD_NO_BLOCK            (USB_UPWRC_USLPGRD_NO_BLOCK_Val << USB_UPWRC_USLPGRD_Pos) /* (USB_UPWRC) USB module does not block Sleep entry Position */
#define USB_UPWRC_UACTPND_Pos                 _UINT32_(7)                                          /* (USB_UPWRC) USB Activity Pending bit Position */
#define USB_UPWRC_UACTPND_Msk                 (_UINT32_(0x1) << USB_UPWRC_UACTPND_Pos)             /* (USB_UPWRC) USB Activity Pending bit Mask */
#define USB_UPWRC_UACTPND(value)              (USB_UPWRC_UACTPND_Msk & (_UINT32_(value) << USB_UPWRC_UACTPND_Pos)) /* Assignment of value for UACTPND in the USB_UPWRC register */
#define   USB_UPWRC_UACTPND_CHANGE_Val        _UINT32_(0x1)                                        /* (USB_UPWRC) USB hardware has detected a change in link status  */
#define   USB_UPWRC_UACTPND_NORMAL_Val        _UINT32_(0x0)                                        /* (USB_UPWRC) USB Hardware in normal operation mode  */
#define USB_UPWRC_UACTPND_CHANGE              (USB_UPWRC_UACTPND_CHANGE_Val << USB_UPWRC_UACTPND_Pos) /* (USB_UPWRC) USB hardware has detected a change in link status Position */
#define USB_UPWRC_UACTPND_NORMAL              (USB_UPWRC_UACTPND_NORMAL_Val << USB_UPWRC_UACTPND_Pos) /* (USB_UPWRC) USB Hardware in normal operation mode Position */
#define USB_UPWRC_Msk                         _UINT32_(0x0000009B)                                 /* (USB_UPWRC) Register Mask  */


/* -------- USB_UPWRCCLR : (USB Offset: 0x84) (R/W 32)  -------- */
#define USB_UPWRCCLR_RESETVALUE               _UINT32_(0x00)                                       /*  (USB_UPWRCCLR)   Reset Value */

#define USB_UPWRCCLR_Msk                      _UINT32_(0x00000000)                                 /* (USB_UPWRCCLR) Register Mask  */


/* -------- USB_UPWRCSET : (USB Offset: 0x88) (R/W 32)  -------- */
#define USB_UPWRCSET_RESETVALUE               _UINT32_(0x00)                                       /*  (USB_UPWRCSET)   Reset Value */

#define USB_UPWRCSET_Msk                      _UINT32_(0x00000000)                                 /* (USB_UPWRCSET) Register Mask  */


/* -------- USB_UPWRCINV : (USB Offset: 0x8C) (R/W 32)  -------- */
#define USB_UPWRCINV_RESETVALUE               _UINT32_(0x00)                                       /*  (USB_UPWRCINV)   Reset Value */

#define USB_UPWRCINV_Msk                      _UINT32_(0x00000000)                                 /* (USB_UPWRCINV) Register Mask  */


/* -------- USB_UIR : (USB Offset: 0x200) (R/W 32) USB Interrupt Register -------- */
#define USB_UIR_URSTIF_DETACHIF_Pos           _UINT32_(0)                                          /* (USB_UIR) (Device mode) USB Reset Interrupt bit Device mode / (Host mode)USB Detach Interrupt bit Host mode Position */
#define USB_UIR_URSTIF_DETACHIF_Msk           (_UINT32_(0x1) << USB_UIR_URSTIF_DETACHIF_Pos)       /* (USB_UIR) (Device mode) USB Reset Interrupt bit Device mode / (Host mode)USB Detach Interrupt bit Host mode Mask */
#define USB_UIR_URSTIF_DETACHIF(value)        (USB_UIR_URSTIF_DETACHIF_Msk & (_UINT32_(value) << USB_UIR_URSTIF_DETACHIF_Pos)) /* Assignment of value for URSTIF_DETACHIF in the USB_UIR register */
#define   USB_UIR_URSTIF_DETACHIF_DETECT_Val  _UINT32_(0x1)                                        /* (USB_UIR) (Device mode)Valid USB Reset has occurred / (Host mode)Peripheral detachment was detected by the USB module  */
#define   USB_UIR_URSTIF_DETACHIF_NOT_DETECT_Val _UINT32_(0x0)                                        /* (USB_UIR) (Device mode)No USB Reset has occurred / (Host mode)Peripheral detachment was not detected  */
#define USB_UIR_URSTIF_DETACHIF_DETECT        (USB_UIR_URSTIF_DETACHIF_DETECT_Val << USB_UIR_URSTIF_DETACHIF_Pos) /* (USB_UIR) (Device mode)Valid USB Reset has occurred / (Host mode)Peripheral detachment was detected by the USB module Position */
#define USB_UIR_URSTIF_DETACHIF_NOT_DETECT    (USB_UIR_URSTIF_DETACHIF_NOT_DETECT_Val << USB_UIR_URSTIF_DETACHIF_Pos) /* (USB_UIR) (Device mode)No USB Reset has occurred / (Host mode)Peripheral detachment was not detected Position */
#define USB_UIR_UERRIF_Pos                    _UINT32_(1)                                          /* (USB_UIR) USB Error Condition Interrupt bit Position */
#define USB_UIR_UERRIF_Msk                    (_UINT32_(0x1) << USB_UIR_UERRIF_Pos)                /* (USB_UIR) USB Error Condition Interrupt bit Mask */
#define USB_UIR_UERRIF(value)                 (USB_UIR_UERRIF_Msk & (_UINT32_(value) << USB_UIR_UERRIF_Pos)) /* Assignment of value for UERRIF in the USB_UIR register */
#define   USB_UIR_UERRIF_ERROR_Val            _UINT32_(0x1)                                        /* (USB_UIR) Unmasked error condition has occurred  */
#define   USB_UIR_UERRIF_NO_ERROR_Val         _UINT32_(0x0)                                        /* (USB_UIR) Unmasked error condition has not occurred  */
#define USB_UIR_UERRIF_ERROR                  (USB_UIR_UERRIF_ERROR_Val << USB_UIR_UERRIF_Pos)     /* (USB_UIR) Unmasked error condition has occurred Position */
#define USB_UIR_UERRIF_NO_ERROR               (USB_UIR_UERRIF_NO_ERROR_Val << USB_UIR_UERRIF_Pos)  /* (USB_UIR) Unmasked error condition has not occurred Position */
#define USB_UIR_SOFIF_Pos                     _UINT32_(2)                                          /* (USB_UIR) SOF Token Interrupt bit Position */
#define USB_UIR_SOFIF_Msk                     (_UINT32_(0x1) << USB_UIR_SOFIF_Pos)                 /* (USB_UIR) SOF Token Interrupt bit Mask */
#define USB_UIR_SOFIF(value)                  (USB_UIR_SOFIF_Msk & (_UINT32_(value) << USB_UIR_SOFIF_Pos)) /* Assignment of value for SOFIF in the USB_UIR register */
#define   USB_UIR_SOFIF_SOF_RCVE_Val          _UINT32_(0x1)                                        /* (USB_UIR) SOF token received by the peripheral or the SOF threshold reached by the host  */
#define   USB_UIR_SOFIF_NO_SOF_Val            _UINT32_(0x0)                                        /* (USB_UIR) SOF token was not received nor threshold reached  */
#define USB_UIR_SOFIF_SOF_RCVE                (USB_UIR_SOFIF_SOF_RCVE_Val << USB_UIR_SOFIF_Pos)    /* (USB_UIR) SOF token received by the peripheral or the SOF threshold reached by the host Position */
#define USB_UIR_SOFIF_NO_SOF                  (USB_UIR_SOFIF_NO_SOF_Val << USB_UIR_SOFIF_Pos)      /* (USB_UIR) SOF token was not received nor threshold reached Position */
#define USB_UIR_TRNIF_Pos                     _UINT32_(3)                                          /* (USB_UIR) Token Processing Complete Interrupt bit Position */
#define USB_UIR_TRNIF_Msk                     (_UINT32_(0x1) << USB_UIR_TRNIF_Pos)                 /* (USB_UIR) Token Processing Complete Interrupt bit Mask */
#define USB_UIR_TRNIF(value)                  (USB_UIR_TRNIF_Msk & (_UINT32_(value) << USB_UIR_TRNIF_Pos)) /* Assignment of value for TRNIF in the USB_UIR register */
#define   USB_UIR_TRNIF_READY_Val             _UINT32_(0x1)                                        /* (USB_UIR) Processing of current token is complete; a read of the UxSTAT register will provide endpoint information  */
#define   USB_UIR_TRNIF_NOT_READY_Val         _UINT32_(0x0)                                        /* (USB_UIR) Processing of current token not complete  */
#define USB_UIR_TRNIF_READY                   (USB_UIR_TRNIF_READY_Val << USB_UIR_TRNIF_Pos)       /* (USB_UIR) Processing of current token is complete; a read of the UxSTAT register will provide endpoint information Position */
#define USB_UIR_TRNIF_NOT_READY               (USB_UIR_TRNIF_NOT_READY_Val << USB_UIR_TRNIF_Pos)   /* (USB_UIR) Processing of current token not complete Position */
#define USB_UIR_IDLEIF_Pos                    _UINT32_(4)                                          /* (USB_UIR) Idle Detect Interrupt bit Position */
#define USB_UIR_IDLEIF_Msk                    (_UINT32_(0x1) << USB_UIR_IDLEIF_Pos)                /* (USB_UIR) Idle Detect Interrupt bit Mask */
#define USB_UIR_IDLEIF(value)                 (USB_UIR_IDLEIF_Msk & (_UINT32_(value) << USB_UIR_IDLEIF_Pos)) /* Assignment of value for IDLEIF in the USB_UIR register */
#define   USB_UIR_IDLEIF_IDLE_Val             _UINT32_(0x1)                                        /* (USB_UIR) Idle condition detected (constant Idle state of 3 ms or more)  */
#define   USB_UIR_IDLEIF_NOT_IDLE_Val         _UINT32_(0x0)                                        /* (USB_UIR) No Idle condition detected  */
#define USB_UIR_IDLEIF_IDLE                   (USB_UIR_IDLEIF_IDLE_Val << USB_UIR_IDLEIF_Pos)      /* (USB_UIR) Idle condition detected (constant Idle state of 3 ms or more) Position */
#define USB_UIR_IDLEIF_NOT_IDLE               (USB_UIR_IDLEIF_NOT_IDLE_Val << USB_UIR_IDLEIF_Pos)  /* (USB_UIR) No Idle condition detected Position */
#define USB_UIR_RESUMEIF_Pos                  _UINT32_(5)                                          /* (USB_UIR) Resume Interrupt bit Position */
#define USB_UIR_RESUMEIF_Msk                  (_UINT32_(0x1) << USB_UIR_RESUMEIF_Pos)              /* (USB_UIR) Resume Interrupt bit Mask */
#define USB_UIR_RESUMEIF(value)               (USB_UIR_RESUMEIF_Msk & (_UINT32_(value) << USB_UIR_RESUMEIF_Pos)) /* Assignment of value for RESUMEIF in the USB_UIR register */
#define   USB_UIR_RESUMEIF_K_STATE_Val        _UINT32_(0x1)                                        /* (USB_UIR) K-State is observed on the D+ or D- pin for 2.5 s  */
#define   USB_UIR_RESUMEIF_NORMAL_Val         _UINT32_(0x0)                                        /* (USB_UIR) K-State is not observed  */
#define USB_UIR_RESUMEIF_K_STATE              (USB_UIR_RESUMEIF_K_STATE_Val << USB_UIR_RESUMEIF_Pos) /* (USB_UIR) K-State is observed on the D+ or D- pin for 2.5 s Position */
#define USB_UIR_RESUMEIF_NORMAL               (USB_UIR_RESUMEIF_NORMAL_Val << USB_UIR_RESUMEIF_Pos) /* (USB_UIR) K-State is not observed Position */
#define USB_UIR_ATTACHIF_Pos                  _UINT32_(6)                                          /* (USB_UIR) Peripheral Attach Interrupt bit Position */
#define USB_UIR_ATTACHIF_Msk                  (_UINT32_(0x1) << USB_UIR_ATTACHIF_Pos)              /* (USB_UIR) Peripheral Attach Interrupt bit Mask */
#define USB_UIR_ATTACHIF(value)               (USB_UIR_ATTACHIF_Msk & (_UINT32_(value) << USB_UIR_ATTACHIF_Pos)) /* Assignment of value for ATTACHIF in the USB_UIR register */
#define   USB_UIR_ATTACHIF_DETECT_Val         _UINT32_(0x1)                                        /* (USB_UIR) Peripheral attachment was detected by the USB module  */
#define   USB_UIR_ATTACHIF_NOT_DETECT_Val     _UINT32_(0x0)                                        /* (USB_UIR) Peripheral attachment was not detected  */
#define USB_UIR_ATTACHIF_DETECT               (USB_UIR_ATTACHIF_DETECT_Val << USB_UIR_ATTACHIF_Pos) /* (USB_UIR) Peripheral attachment was detected by the USB module Position */
#define USB_UIR_ATTACHIF_NOT_DETECT           (USB_UIR_ATTACHIF_NOT_DETECT_Val << USB_UIR_ATTACHIF_Pos) /* (USB_UIR) Peripheral attachment was not detected Position */
#define USB_UIR_STALLIF_Pos                   _UINT32_(7)                                          /* (USB_UIR) STALL Handshake Interrupt bit Position */
#define USB_UIR_STALLIF_Msk                   (_UINT32_(0x1) << USB_UIR_STALLIF_Pos)               /* (USB_UIR) STALL Handshake Interrupt bit Mask */
#define USB_UIR_STALLIF(value)                (USB_UIR_STALLIF_Msk & (_UINT32_(value) << USB_UIR_STALLIF_Pos)) /* Assignment of value for STALLIF in the USB_UIR register */
#define   USB_UIR_STALLIF_HANDSHAKE_Val       _UINT32_(0x1)                                        /* (USB_UIR) A STALL handshake was sent by Peripheral or received by Host during the handshake phase of the transaction  */
#define   USB_UIR_STALLIF_NO_HANDSHAKE_Val    _UINT32_(0x0)                                        /* (USB_UIR) STALL handshake has not been sent  */
#define USB_UIR_STALLIF_HANDSHAKE             (USB_UIR_STALLIF_HANDSHAKE_Val << USB_UIR_STALLIF_Pos) /* (USB_UIR) A STALL handshake was sent by Peripheral or received by Host during the handshake phase of the transaction Position */
#define USB_UIR_STALLIF_NO_HANDSHAKE          (USB_UIR_STALLIF_NO_HANDSHAKE_Val << USB_UIR_STALLIF_Pos) /* (USB_UIR) STALL handshake has not been sent Position */
#define USB_UIR_Msk                           _UINT32_(0x000000FF)                                 /* (USB_UIR) Register Mask  */


/* -------- USB_UIRCLR : (USB Offset: 0x204) (R/W 32)  -------- */
#define USB_UIRCLR_RESETVALUE                 _UINT32_(0x00)                                       /*  (USB_UIRCLR)   Reset Value */

#define USB_UIRCLR_Msk                        _UINT32_(0x00000000)                                 /* (USB_UIRCLR) Register Mask  */


/* -------- USB_UIE : (USB Offset: 0x210) (R/W 32) USB Interrupt Enable Register -------- */
#define USB_UIE_URSTIE_DETACHIE_Pos           _UINT32_(0)                                          /* (USB_UIE) (Device mode) USB Reset Interrupt Enable bit Device mode / (Host mode)USB Detach Interrupt Enable bit Host Mode Position */
#define USB_UIE_URSTIE_DETACHIE_Msk           (_UINT32_(0x1) << USB_UIE_URSTIE_DETACHIE_Pos)       /* (USB_UIE) (Device mode) USB Reset Interrupt Enable bit Device mode / (Host mode)USB Detach Interrupt Enable bit Host Mode Mask */
#define USB_UIE_URSTIE_DETACHIE(value)        (USB_UIE_URSTIE_DETACHIE_Msk & (_UINT32_(value) << USB_UIE_URSTIE_DETACHIE_Pos)) /* Assignment of value for URSTIE_DETACHIE in the USB_UIE register */
#define   USB_UIE_URSTIE_DETACHIE_ON_Val      _UINT32_(0x1)                                        /* (USB_UIE) (Device mode) URSTIF interrupt is enabled / (Host mode) DATTCHIF interrupt is enabled  */
#define   USB_UIE_URSTIE_DETACHIE_OFF_Val     _UINT32_(0x0)                                        /* (USB_UIE) (Device mode) URSTIF interrupt is disabled / (Host mode) DATTCHIF interrupt is disabled  */
#define USB_UIE_URSTIE_DETACHIE_ON            (USB_UIE_URSTIE_DETACHIE_ON_Val << USB_UIE_URSTIE_DETACHIE_Pos) /* (USB_UIE) (Device mode) URSTIF interrupt is enabled / (Host mode) DATTCHIF interrupt is enabled Position */
#define USB_UIE_URSTIE_DETACHIE_OFF           (USB_UIE_URSTIE_DETACHIE_OFF_Val << USB_UIE_URSTIE_DETACHIE_Pos) /* (USB_UIE) (Device mode) URSTIF interrupt is disabled / (Host mode) DATTCHIF interrupt is disabled Position */
#define USB_UIE_UERRIE_Pos                    _UINT32_(1)                                          /* (USB_UIE) USB Error Interrupt Enable bit Position */
#define USB_UIE_UERRIE_Msk                    (_UINT32_(0x1) << USB_UIE_UERRIE_Pos)                /* (USB_UIE) USB Error Interrupt Enable bit Mask */
#define USB_UIE_UERRIE(value)                 (USB_UIE_UERRIE_Msk & (_UINT32_(value) << USB_UIE_UERRIE_Pos)) /* Assignment of value for UERRIE in the USB_UIE register */
#define   USB_UIE_UERRIE_ON_Val               _UINT32_(0x1)                                        /* (USB_UIE) USB Error interrupt is enabled  */
#define   USB_UIE_UERRIE_OFF_Val              _UINT32_(0x0)                                        /* (USB_UIE) USB Error interrupt is disabled  */
#define USB_UIE_UERRIE_ON                     (USB_UIE_UERRIE_ON_Val << USB_UIE_UERRIE_Pos)        /* (USB_UIE) USB Error interrupt is enabled Position */
#define USB_UIE_UERRIE_OFF                    (USB_UIE_UERRIE_OFF_Val << USB_UIE_UERRIE_Pos)       /* (USB_UIE) USB Error interrupt is disabled Position */
#define USB_UIE_SOFIE_Pos                     _UINT32_(2)                                          /* (USB_UIE) SOF Token Interrupt Enable bit Position */
#define USB_UIE_SOFIE_Msk                     (_UINT32_(0x1) << USB_UIE_SOFIE_Pos)                 /* (USB_UIE) SOF Token Interrupt Enable bit Mask */
#define USB_UIE_SOFIE(value)                  (USB_UIE_SOFIE_Msk & (_UINT32_(value) << USB_UIE_SOFIE_Pos)) /* Assignment of value for SOFIE in the USB_UIE register */
#define   USB_UIE_SOFIE_ON_Val                _UINT32_(0x1)                                        /* (USB_UIE) SOFIF interrupt is enabled  */
#define   USB_UIE_SOFIE_OFF_Val               _UINT32_(0x0)                                        /* (USB_UIE) SOFIF interrupt is disabled  */
#define USB_UIE_SOFIE_ON                      (USB_UIE_SOFIE_ON_Val << USB_UIE_SOFIE_Pos)          /* (USB_UIE) SOFIF interrupt is enabled Position */
#define USB_UIE_SOFIE_OFF                     (USB_UIE_SOFIE_OFF_Val << USB_UIE_SOFIE_Pos)         /* (USB_UIE) SOFIF interrupt is disabled Position */
#define USB_UIE_TRNIE_Pos                     _UINT32_(3)                                          /* (USB_UIE) Token Processing Complete Interrupt Enable bit Position */
#define USB_UIE_TRNIE_Msk                     (_UINT32_(0x1) << USB_UIE_TRNIE_Pos)                 /* (USB_UIE) Token Processing Complete Interrupt Enable bit Mask */
#define USB_UIE_TRNIE(value)                  (USB_UIE_TRNIE_Msk & (_UINT32_(value) << USB_UIE_TRNIE_Pos)) /* Assignment of value for TRNIE in the USB_UIE register */
#define   USB_UIE_TRNIE_ON_Val                _UINT32_(0x1)                                        /* (USB_UIE) TRNIF interrupt is enabled  */
#define   USB_UIE_TRNIE_OFF_Val               _UINT32_(0x0)                                        /* (USB_UIE) TRNIF interrupt is disabled  */
#define USB_UIE_TRNIE_ON                      (USB_UIE_TRNIE_ON_Val << USB_UIE_TRNIE_Pos)          /* (USB_UIE) TRNIF interrupt is enabled Position */
#define USB_UIE_TRNIE_OFF                     (USB_UIE_TRNIE_OFF_Val << USB_UIE_TRNIE_Pos)         /* (USB_UIE) TRNIF interrupt is disabled Position */
#define USB_UIE_IDLEIE_Pos                    _UINT32_(4)                                          /* (USB_UIE) Idle Detect Interrupt Enable bit Position */
#define USB_UIE_IDLEIE_Msk                    (_UINT32_(0x1) << USB_UIE_IDLEIE_Pos)                /* (USB_UIE) Idle Detect Interrupt Enable bit Mask */
#define USB_UIE_IDLEIE(value)                 (USB_UIE_IDLEIE_Msk & (_UINT32_(value) << USB_UIE_IDLEIE_Pos)) /* Assignment of value for IDLEIE in the USB_UIE register */
#define   USB_UIE_IDLEIE_ON_Val               _UINT32_(0x1)                                        /* (USB_UIE) Idle interrupt is enabled  */
#define   USB_UIE_IDLEIE_OFF_Val              _UINT32_(0x0)                                        /* (USB_UIE) Idle interrupt is disabled  */
#define USB_UIE_IDLEIE_ON                     (USB_UIE_IDLEIE_ON_Val << USB_UIE_IDLEIE_Pos)        /* (USB_UIE) Idle interrupt is enabled Position */
#define USB_UIE_IDLEIE_OFF                    (USB_UIE_IDLEIE_OFF_Val << USB_UIE_IDLEIE_Pos)       /* (USB_UIE) Idle interrupt is disabled Position */
#define USB_UIE_RESUMEIE_Pos                  _UINT32_(5)                                          /* (USB_UIE) RESUME Interrupt Enable bit Position */
#define USB_UIE_RESUMEIE_Msk                  (_UINT32_(0x1) << USB_UIE_RESUMEIE_Pos)              /* (USB_UIE) RESUME Interrupt Enable bit Mask */
#define USB_UIE_RESUMEIE(value)               (USB_UIE_RESUMEIE_Msk & (_UINT32_(value) << USB_UIE_RESUMEIE_Pos)) /* Assignment of value for RESUMEIE in the USB_UIE register */
#define   USB_UIE_RESUMEIE_ON_Val             _UINT32_(0x1)                                        /* (USB_UIE) RESUME interrupt is enabled  */
#define   USB_UIE_RESUMEIE_OFF_Val            _UINT32_(0x0)                                        /* (USB_UIE) RESUME interrupt is disabled  */
#define USB_UIE_RESUMEIE_ON                   (USB_UIE_RESUMEIE_ON_Val << USB_UIE_RESUMEIE_Pos)    /* (USB_UIE) RESUME interrupt is enabled Position */
#define USB_UIE_RESUMEIE_OFF                  (USB_UIE_RESUMEIE_OFF_Val << USB_UIE_RESUMEIE_Pos)   /* (USB_UIE) RESUME interrupt is disabled Position */
#define USB_UIE_ATTACHIE_Pos                  _UINT32_(6)                                          /* (USB_UIE) ATTACH Interrupt Enable bit Position */
#define USB_UIE_ATTACHIE_Msk                  (_UINT32_(0x1) << USB_UIE_ATTACHIE_Pos)              /* (USB_UIE) ATTACH Interrupt Enable bit Mask */
#define USB_UIE_ATTACHIE(value)               (USB_UIE_ATTACHIE_Msk & (_UINT32_(value) << USB_UIE_ATTACHIE_Pos)) /* Assignment of value for ATTACHIE in the USB_UIE register */
#define   USB_UIE_ATTACHIE_ON_Val             _UINT32_(0x1)                                        /* (USB_UIE) ATTACH interrupt is enabled  */
#define   USB_UIE_ATTACHIE_OFF_Val            _UINT32_(0x0)                                        /* (USB_UIE) ATTACH interrupt is disabled  */
#define USB_UIE_ATTACHIE_ON                   (USB_UIE_ATTACHIE_ON_Val << USB_UIE_ATTACHIE_Pos)    /* (USB_UIE) ATTACH interrupt is enabled Position */
#define USB_UIE_ATTACHIE_OFF                  (USB_UIE_ATTACHIE_OFF_Val << USB_UIE_ATTACHIE_Pos)   /* (USB_UIE) ATTACH interrupt is disabled Position */
#define USB_UIE_STALLIE_Pos                   _UINT32_(7)                                          /* (USB_UIE) STALL Handshake Interrupt Enable bit Position */
#define USB_UIE_STALLIE_Msk                   (_UINT32_(0x1) << USB_UIE_STALLIE_Pos)               /* (USB_UIE) STALL Handshake Interrupt Enable bit Mask */
#define USB_UIE_STALLIE(value)                (USB_UIE_STALLIE_Msk & (_UINT32_(value) << USB_UIE_STALLIE_Pos)) /* Assignment of value for STALLIE in the USB_UIE register */
#define   USB_UIE_STALLIE_ON_Val              _UINT32_(0x1)                                        /* (USB_UIE) STALL interrupt is enabled  */
#define   USB_UIE_STALLIE_OFF_Val             _UINT32_(0x0)                                        /* (USB_UIE) STALL interrupt is disabled  */
#define USB_UIE_STALLIE_ON                    (USB_UIE_STALLIE_ON_Val << USB_UIE_STALLIE_Pos)      /* (USB_UIE) STALL interrupt is enabled Position */
#define USB_UIE_STALLIE_OFF                   (USB_UIE_STALLIE_OFF_Val << USB_UIE_STALLIE_Pos)     /* (USB_UIE) STALL interrupt is disabled Position */
#define USB_UIE_Msk                           _UINT32_(0x000000FF)                                 /* (USB_UIE) Register Mask  */


/* -------- USB_UIECLR : (USB Offset: 0x214) (R/W 32)  -------- */
#define USB_UIECLR_RESETVALUE                 _UINT32_(0x00)                                       /*  (USB_UIECLR)   Reset Value */

#define USB_UIECLR_Msk                        _UINT32_(0x00000000)                                 /* (USB_UIECLR) Register Mask  */


/* -------- USB_UIESET : (USB Offset: 0x218) (R/W 32)  -------- */
#define USB_UIESET_RESETVALUE                 _UINT32_(0x00)                                       /*  (USB_UIESET)   Reset Value */

#define USB_UIESET_Msk                        _UINT32_(0x00000000)                                 /* (USB_UIESET) Register Mask  */


/* -------- USB_UIEINV : (USB Offset: 0x21C) (R/W 32)  -------- */
#define USB_UIEINV_RESETVALUE                 _UINT32_(0x00)                                       /*  (USB_UIEINV)   Reset Value */

#define USB_UIEINV_Msk                        _UINT32_(0x00000000)                                 /* (USB_UIEINV) Register Mask  */


/* -------- USB_UEIR : (USB Offset: 0x220) (R/W 32) USB Error Interrupt Status Register -------- */
#define USB_UEIR_PIDEF_Pos                    _UINT32_(0)                                          /* (USB_UEIR) PID Check Failure Flag bit Position */
#define USB_UEIR_PIDEF_Msk                    (_UINT32_(0x1) << USB_UEIR_PIDEF_Pos)                /* (USB_UEIR) PID Check Failure Flag bit Mask */
#define USB_UEIR_PIDEF(value)                 (USB_UEIR_PIDEF_Msk & (_UINT32_(value) << USB_UEIR_PIDEF_Pos)) /* Assignment of value for PIDEF in the USB_UEIR register */
#define   USB_UEIR_PIDEF_FAIL_Val             _UINT32_(0x1)                                        /* (USB_UEIR) PID check failed  */
#define   USB_UEIR_PIDEF_PASS_Val             _UINT32_(0x0)                                        /* (USB_UEIR) PID check passed  */
#define USB_UEIR_PIDEF_FAIL                   (USB_UEIR_PIDEF_FAIL_Val << USB_UEIR_PIDEF_Pos)      /* (USB_UEIR) PID check failed Position */
#define USB_UEIR_PIDEF_PASS                   (USB_UEIR_PIDEF_PASS_Val << USB_UEIR_PIDEF_Pos)      /* (USB_UEIR) PID check passed Position */
#define USB_UEIR_CRC5EF_EOFEF_Pos             _UINT32_(1)                                          /* (USB_UEIR) (Device mode)CRC5 Host Error Flag bit / (Host mode)EOF Error Flag bit Position */
#define USB_UEIR_CRC5EF_EOFEF_Msk             (_UINT32_(0x1) << USB_UEIR_CRC5EF_EOFEF_Pos)         /* (USB_UEIR) (Device mode)CRC5 Host Error Flag bit / (Host mode)EOF Error Flag bit Mask */
#define USB_UEIR_CRC5EF_EOFEF(value)          (USB_UEIR_CRC5EF_EOFEF_Msk & (_UINT32_(value) << USB_UEIR_CRC5EF_EOFEF_Pos)) /* Assignment of value for CRC5EF_EOFEF in the USB_UEIR register */
#define   USB_UEIR_CRC5EF_EOFEF_ERROR_Val     _UINT32_(0x1)                                        /* (USB_UEIR) (Device mode)Token packet rejected due to CRC5 error / (Host mode)EOF error condition detected  */
#define   USB_UEIR_CRC5EF_EOFEF_NO_ERROR_Val  _UINT32_(0x0)                                        /* (USB_UEIR) (Device mode)Token packet accepted / (Host mode)No EOF error condition  */
#define USB_UEIR_CRC5EF_EOFEF_ERROR           (USB_UEIR_CRC5EF_EOFEF_ERROR_Val << USB_UEIR_CRC5EF_EOFEF_Pos) /* (USB_UEIR) (Device mode)Token packet rejected due to CRC5 error / (Host mode)EOF error condition detected Position */
#define USB_UEIR_CRC5EF_EOFEF_NO_ERROR        (USB_UEIR_CRC5EF_EOFEF_NO_ERROR_Val << USB_UEIR_CRC5EF_EOFEF_Pos) /* (USB_UEIR) (Device mode)Token packet accepted / (Host mode)No EOF error condition Position */
#define USB_UEIR_CRC16EF_Pos                  _UINT32_(2)                                          /* (USB_UEIR) CRC16 Failure Flag bit Position */
#define USB_UEIR_CRC16EF_Msk                  (_UINT32_(0x1) << USB_UEIR_CRC16EF_Pos)              /* (USB_UEIR) CRC16 Failure Flag bit Mask */
#define USB_UEIR_CRC16EF(value)               (USB_UEIR_CRC16EF_Msk & (_UINT32_(value) << USB_UEIR_CRC16EF_Pos)) /* Assignment of value for CRC16EF in the USB_UEIR register */
#define   USB_UEIR_CRC16EF_ERROR_Val          _UINT32_(0x1)                                        /* (USB_UEIR) Data packet rejected due to CRC16 error  */
#define   USB_UEIR_CRC16EF_NO_ERROR_Val       _UINT32_(0x0)                                        /* (USB_UEIR) Data packet accepted  */
#define USB_UEIR_CRC16EF_ERROR                (USB_UEIR_CRC16EF_ERROR_Val << USB_UEIR_CRC16EF_Pos) /* (USB_UEIR) Data packet rejected due to CRC16 error Position */
#define USB_UEIR_CRC16EF_NO_ERROR             (USB_UEIR_CRC16EF_NO_ERROR_Val << USB_UEIR_CRC16EF_Pos) /* (USB_UEIR) Data packet accepted Position */
#define USB_UEIR_DFN8EF_Pos                   _UINT32_(3)                                          /* (USB_UEIR) Data Field Size Error Flag bit Position */
#define USB_UEIR_DFN8EF_Msk                   (_UINT32_(0x1) << USB_UEIR_DFN8EF_Pos)               /* (USB_UEIR) Data Field Size Error Flag bit Mask */
#define USB_UEIR_DFN8EF(value)                (USB_UEIR_DFN8EF_Msk & (_UINT32_(value) << USB_UEIR_DFN8EF_Pos)) /* Assignment of value for DFN8EF in the USB_UEIR register */
#define   USB_UEIR_DFN8EF_NOT_INTEGRAL_Val    _UINT32_(0x1)                                        /* (USB_UEIR) Data field received is not an integral number of bytes  */
#define   USB_UEIR_DFN8EF_INTEGRAL_Val        _UINT32_(0x0)                                        /* (USB_UEIR) Data field received is an integral number of bytes  */
#define USB_UEIR_DFN8EF_NOT_INTEGRAL          (USB_UEIR_DFN8EF_NOT_INTEGRAL_Val << USB_UEIR_DFN8EF_Pos) /* (USB_UEIR) Data field received is not an integral number of bytes Position */
#define USB_UEIR_DFN8EF_INTEGRAL              (USB_UEIR_DFN8EF_INTEGRAL_Val << USB_UEIR_DFN8EF_Pos) /* (USB_UEIR) Data field received is an integral number of bytes Position */
#define USB_UEIR_BTOEF_Pos                    _UINT32_(4)                                          /* (USB_UEIR) Bus Turnaround Time-Out Error Flag bit Position */
#define USB_UEIR_BTOEF_Msk                    (_UINT32_(0x1) << USB_UEIR_BTOEF_Pos)                /* (USB_UEIR) Bus Turnaround Time-Out Error Flag bit Mask */
#define USB_UEIR_BTOEF(value)                 (USB_UEIR_BTOEF_Msk & (_UINT32_(value) << USB_UEIR_BTOEF_Pos)) /* Assignment of value for BTOEF in the USB_UEIR register */
#define   USB_UEIR_BTOEF_TIMEOUT_Val          _UINT32_(0x1)                                        /* (USB_UEIR) Bus turnaround time-out has occurred  */
#define   USB_UEIR_BTOEF_NO_TIMEOUT_Val       _UINT32_(0x0)                                        /* (USB_UEIR) No bus turnaround time-out  */
#define USB_UEIR_BTOEF_TIMEOUT                (USB_UEIR_BTOEF_TIMEOUT_Val << USB_UEIR_BTOEF_Pos)   /* (USB_UEIR) Bus turnaround time-out has occurred Position */
#define USB_UEIR_BTOEF_NO_TIMEOUT             (USB_UEIR_BTOEF_NO_TIMEOUT_Val << USB_UEIR_BTOEF_Pos) /* (USB_UEIR) No bus turnaround time-out Position */
#define USB_UEIR_DMAEF_Pos                    _UINT32_(5)                                          /* (USB_UEIR) DMA Error Flag bit Position */
#define USB_UEIR_DMAEF_Msk                    (_UINT32_(0x1) << USB_UEIR_DMAEF_Pos)                /* (USB_UEIR) DMA Error Flag bit Mask */
#define USB_UEIR_DMAEF(value)                 (USB_UEIR_DMAEF_Msk & (_UINT32_(value) << USB_UEIR_DMAEF_Pos)) /* Assignment of value for DMAEF in the USB_UEIR register */
#define   USB_UEIR_DMAEF_ERROR_Val            _UINT32_(0x1)                                        /* (USB_UEIR) USB DMA error condition detected  */
#define   USB_UEIR_DMAEF_NO_ERROR_Val         _UINT32_(0x0)                                        /* (USB_UEIR) No DMA error  */
#define USB_UEIR_DMAEF_ERROR                  (USB_UEIR_DMAEF_ERROR_Val << USB_UEIR_DMAEF_Pos)     /* (USB_UEIR) USB DMA error condition detected Position */
#define USB_UEIR_DMAEF_NO_ERROR               (USB_UEIR_DMAEF_NO_ERROR_Val << USB_UEIR_DMAEF_Pos)  /* (USB_UEIR) No DMA error Position */
#define USB_UEIR_BMXEF_Pos                    _UINT32_(6)                                          /* (USB_UEIR) Bus Matrix Error Flag bit Position */
#define USB_UEIR_BMXEF_Msk                    (_UINT32_(0x1) << USB_UEIR_BMXEF_Pos)                /* (USB_UEIR) Bus Matrix Error Flag bit Mask */
#define USB_UEIR_BMXEF(value)                 (USB_UEIR_BMXEF_Msk & (_UINT32_(value) << USB_UEIR_BMXEF_Pos)) /* Assignment of value for BMXEF in the USB_UEIR register */
#define   USB_UEIR_BMXEF_ERROR_Val            _UINT32_(0x1)                                        /* (USB_UEIR) BVCI access initiated on BMX returned response error  */
#define   USB_UEIR_BMXEF_NO_ERROR_Val         _UINT32_(0x0)                                        /* (USB_UEIR) No address error  */
#define USB_UEIR_BMXEF_ERROR                  (USB_UEIR_BMXEF_ERROR_Val << USB_UEIR_BMXEF_Pos)     /* (USB_UEIR) BVCI access initiated on BMX returned response error Position */
#define USB_UEIR_BMXEF_NO_ERROR               (USB_UEIR_BMXEF_NO_ERROR_Val << USB_UEIR_BMXEF_Pos)  /* (USB_UEIR) No address error Position */
#define USB_UEIR_BTSEF_Pos                    _UINT32_(7)                                          /* (USB_UEIR) Bit Stuff Error Flag bit Position */
#define USB_UEIR_BTSEF_Msk                    (_UINT32_(0x1) << USB_UEIR_BTSEF_Pos)                /* (USB_UEIR) Bit Stuff Error Flag bit Mask */
#define USB_UEIR_BTSEF(value)                 (USB_UEIR_BTSEF_Msk & (_UINT32_(value) << USB_UEIR_BTSEF_Pos)) /* Assignment of value for BTSEF in the USB_UEIR register */
#define   USB_UEIR_BTSEF_ERROR_Val            _UINT32_(0x1)                                        /* (USB_UEIR) Packet rejected due to bit stuff error  */
#define   USB_UEIR_BTSEF_NO_ERROR_Val         _UINT32_(0x0)                                        /* (USB_UEIR) Packet accepted  */
#define USB_UEIR_BTSEF_ERROR                  (USB_UEIR_BTSEF_ERROR_Val << USB_UEIR_BTSEF_Pos)     /* (USB_UEIR) Packet rejected due to bit stuff error Position */
#define USB_UEIR_BTSEF_NO_ERROR               (USB_UEIR_BTSEF_NO_ERROR_Val << USB_UEIR_BTSEF_Pos)  /* (USB_UEIR) Packet accepted Position */
#define USB_UEIR_Msk                          _UINT32_(0x000000FF)                                 /* (USB_UEIR) Register Mask  */


/* -------- USB_UEIRCLR : (USB Offset: 0x224) (R/W 32)  -------- */
#define USB_UEIRCLR_RESETVALUE                _UINT32_(0x00)                                       /*  (USB_UEIRCLR)   Reset Value */

#define USB_UEIRCLR_Msk                       _UINT32_(0x00000000)                                 /* (USB_UEIRCLR) Register Mask  */


/* -------- USB_UEIE : (USB Offset: 0x230) (R/W 32) USB Error Interrupt Enable Register -------- */
#define USB_UEIE_PIDEE_Pos                    _UINT32_(0)                                          /* (USB_UEIE) PID Check Failure Interrupt Enable bit Position */
#define USB_UEIE_PIDEE_Msk                    (_UINT32_(0x1) << USB_UEIE_PIDEE_Pos)                /* (USB_UEIE) PID Check Failure Interrupt Enable bit Mask */
#define USB_UEIE_PIDEE(value)                 (USB_UEIE_PIDEE_Msk & (_UINT32_(value) << USB_UEIE_PIDEE_Pos)) /* Assignment of value for PIDEE in the USB_UEIE register */
#define   USB_UEIE_PIDEE_ON_Val               _UINT32_(0x1)                                        /* (USB_UEIE) PIDEF interrupt is enabled  */
#define   USB_UEIE_PIDEE_OFF_Val              _UINT32_(0x0)                                        /* (USB_UEIE) PIDEF interrupt is disabled  */
#define USB_UEIE_PIDEE_ON                     (USB_UEIE_PIDEE_ON_Val << USB_UEIE_PIDEE_Pos)        /* (USB_UEIE) PIDEF interrupt is enabled Position */
#define USB_UEIE_PIDEE_OFF                    (USB_UEIE_PIDEE_OFF_Val << USB_UEIE_PIDEE_Pos)       /* (USB_UEIE) PIDEF interrupt is disabled Position */
#define USB_UEIE_CRC5EE_EOFEE_Pos             _UINT32_(1)                                          /* (USB_UEIE) (Device mode) CRC5 Host Error Interrupt Enable bit / (Host mode) EOF Error Interrupt Enable bit Position */
#define USB_UEIE_CRC5EE_EOFEE_Msk             (_UINT32_(0x1) << USB_UEIE_CRC5EE_EOFEE_Pos)         /* (USB_UEIE) (Device mode) CRC5 Host Error Interrupt Enable bit / (Host mode) EOF Error Interrupt Enable bit Mask */
#define USB_UEIE_CRC5EE_EOFEE(value)          (USB_UEIE_CRC5EE_EOFEE_Msk & (_UINT32_(value) << USB_UEIE_CRC5EE_EOFEE_Pos)) /* Assignment of value for CRC5EE_EOFEE in the USB_UEIE register */
#define   USB_UEIE_CRC5EE_EOFEE_ON_Val        _UINT32_(0x1)                                        /* (USB_UEIE) (Device mode)CRC5EF interrupt is enabled / (Host mode)EOF interrupt is enabled  */
#define   USB_UEIE_CRC5EE_EOFEE_OFF_Val       _UINT32_(0x0)                                        /* (USB_UEIE) (Device mode)CRC5EF interrupt is disabled / (Host mode)EOF interrupt is disabled  */
#define USB_UEIE_CRC5EE_EOFEE_ON              (USB_UEIE_CRC5EE_EOFEE_ON_Val << USB_UEIE_CRC5EE_EOFEE_Pos) /* (USB_UEIE) (Device mode)CRC5EF interrupt is enabled / (Host mode)EOF interrupt is enabled Position */
#define USB_UEIE_CRC5EE_EOFEE_OFF             (USB_UEIE_CRC5EE_EOFEE_OFF_Val << USB_UEIE_CRC5EE_EOFEE_Pos) /* (USB_UEIE) (Device mode)CRC5EF interrupt is disabled / (Host mode)EOF interrupt is disabled Position */
#define USB_UEIE_CRC16EE_Pos                  _UINT32_(2)                                          /* (USB_UEIE) CRC16 Failure Interrupt Enable bit Position */
#define USB_UEIE_CRC16EE_Msk                  (_UINT32_(0x1) << USB_UEIE_CRC16EE_Pos)              /* (USB_UEIE) CRC16 Failure Interrupt Enable bit Mask */
#define USB_UEIE_CRC16EE(value)               (USB_UEIE_CRC16EE_Msk & (_UINT32_(value) << USB_UEIE_CRC16EE_Pos)) /* Assignment of value for CRC16EE in the USB_UEIE register */
#define   USB_UEIE_CRC16EE_ON_Val             _UINT32_(0x1)                                        /* (USB_UEIE) CRC16EF interrupt is enabled  */
#define   USB_UEIE_CRC16EE_OFF_Val            _UINT32_(0x0)                                        /* (USB_UEIE) CRC16EF interrupt is disabled  */
#define USB_UEIE_CRC16EE_ON                   (USB_UEIE_CRC16EE_ON_Val << USB_UEIE_CRC16EE_Pos)    /* (USB_UEIE) CRC16EF interrupt is enabled Position */
#define USB_UEIE_CRC16EE_OFF                  (USB_UEIE_CRC16EE_OFF_Val << USB_UEIE_CRC16EE_Pos)   /* (USB_UEIE) CRC16EF interrupt is disabled Position */
#define USB_UEIE_DFN8EE_Pos                   _UINT32_(3)                                          /* (USB_UEIE) Data Field Size Error Interrupt Enable bit Position */
#define USB_UEIE_DFN8EE_Msk                   (_UINT32_(0x1) << USB_UEIE_DFN8EE_Pos)               /* (USB_UEIE) Data Field Size Error Interrupt Enable bit Mask */
#define USB_UEIE_DFN8EE(value)                (USB_UEIE_DFN8EE_Msk & (_UINT32_(value) << USB_UEIE_DFN8EE_Pos)) /* Assignment of value for DFN8EE in the USB_UEIE register */
#define   USB_UEIE_DFN8EE_ON_Val              _UINT32_(0x1)                                        /* (USB_UEIE) DFN8EF interrupt is enabled  */
#define   USB_UEIE_DFN8EE_OFF_Val             _UINT32_(0x0)                                        /* (USB_UEIE) DFN8EF interrupt is disabled  */
#define USB_UEIE_DFN8EE_ON                    (USB_UEIE_DFN8EE_ON_Val << USB_UEIE_DFN8EE_Pos)      /* (USB_UEIE) DFN8EF interrupt is enabled Position */
#define USB_UEIE_DFN8EE_OFF                   (USB_UEIE_DFN8EE_OFF_Val << USB_UEIE_DFN8EE_Pos)     /* (USB_UEIE) DFN8EF interrupt is disabled Position */
#define USB_UEIE_BTOEE_Pos                    _UINT32_(4)                                          /* (USB_UEIE) Bus Turnaround Time-out Error Interrupt Enable bit Position */
#define USB_UEIE_BTOEE_Msk                    (_UINT32_(0x1) << USB_UEIE_BTOEE_Pos)                /* (USB_UEIE) Bus Turnaround Time-out Error Interrupt Enable bit Mask */
#define USB_UEIE_BTOEE(value)                 (USB_UEIE_BTOEE_Msk & (_UINT32_(value) << USB_UEIE_BTOEE_Pos)) /* Assignment of value for BTOEE in the USB_UEIE register */
#define   USB_UEIE_BTOEE_ON_Val               _UINT32_(0x1)                                        /* (USB_UEIE) BTOEF interrupt is enabled  */
#define   USB_UEIE_BTOEE_OFF_Val              _UINT32_(0x0)                                        /* (USB_UEIE) BTOEF interrupt is disabled  */
#define USB_UEIE_BTOEE_ON                     (USB_UEIE_BTOEE_ON_Val << USB_UEIE_BTOEE_Pos)        /* (USB_UEIE) BTOEF interrupt is enabled Position */
#define USB_UEIE_BTOEE_OFF                    (USB_UEIE_BTOEE_OFF_Val << USB_UEIE_BTOEE_Pos)       /* (USB_UEIE) BTOEF interrupt is disabled Position */
#define USB_UEIE_DMAEE_Pos                    _UINT32_(5)                                          /* (USB_UEIE) DMA Error Interrupt Enable bit Position */
#define USB_UEIE_DMAEE_Msk                    (_UINT32_(0x1) << USB_UEIE_DMAEE_Pos)                /* (USB_UEIE) DMA Error Interrupt Enable bit Mask */
#define USB_UEIE_DMAEE(value)                 (USB_UEIE_DMAEE_Msk & (_UINT32_(value) << USB_UEIE_DMAEE_Pos)) /* Assignment of value for DMAEE in the USB_UEIE register */
#define   USB_UEIE_DMAEE_ON_Val               _UINT32_(0x1)                                        /* (USB_UEIE) DMAEF interrupt is enabled  */
#define   USB_UEIE_DMAEE_OFF_Val              _UINT32_(0x0)                                        /* (USB_UEIE) DMAEF interrupt is disabled  */
#define USB_UEIE_DMAEE_ON                     (USB_UEIE_DMAEE_ON_Val << USB_UEIE_DMAEE_Pos)        /* (USB_UEIE) DMAEF interrupt is enabled Position */
#define USB_UEIE_DMAEE_OFF                    (USB_UEIE_DMAEE_OFF_Val << USB_UEIE_DMAEE_Pos)       /* (USB_UEIE) DMAEF interrupt is disabled Position */
#define USB_UEIE_BMXEE_Pos                    _UINT32_(6)                                          /* (USB_UEIE) Bus Matrix Error Interrupt Enable bit Position */
#define USB_UEIE_BMXEE_Msk                    (_UINT32_(0x1) << USB_UEIE_BMXEE_Pos)                /* (USB_UEIE) Bus Matrix Error Interrupt Enable bit Mask */
#define USB_UEIE_BMXEE(value)                 (USB_UEIE_BMXEE_Msk & (_UINT32_(value) << USB_UEIE_BMXEE_Pos)) /* Assignment of value for BMXEE in the USB_UEIE register */
#define   USB_UEIE_BMXEE_ON_Val               _UINT32_(0x1)                                        /* (USB_UEIE) BMXEF interrupt is enabled  */
#define   USB_UEIE_BMXEE_OFF_Val              _UINT32_(0x0)                                        /* (USB_UEIE) BMXEF interrupt is disabled  */
#define USB_UEIE_BMXEE_ON                     (USB_UEIE_BMXEE_ON_Val << USB_UEIE_BMXEE_Pos)        /* (USB_UEIE) BMXEF interrupt is enabled Position */
#define USB_UEIE_BMXEE_OFF                    (USB_UEIE_BMXEE_OFF_Val << USB_UEIE_BMXEE_Pos)       /* (USB_UEIE) BMXEF interrupt is disabled Position */
#define USB_UEIE_BTSEE_Pos                    _UINT32_(7)                                          /* (USB_UEIE) Bit Stuff Error Interrupt Enable bit Position */
#define USB_UEIE_BTSEE_Msk                    (_UINT32_(0x1) << USB_UEIE_BTSEE_Pos)                /* (USB_UEIE) Bit Stuff Error Interrupt Enable bit Mask */
#define USB_UEIE_BTSEE(value)                 (USB_UEIE_BTSEE_Msk & (_UINT32_(value) << USB_UEIE_BTSEE_Pos)) /* Assignment of value for BTSEE in the USB_UEIE register */
#define   USB_UEIE_BTSEE_ON_Val               _UINT32_(0x1)                                        /* (USB_UEIE) BTSEF interrupt is enabled  */
#define   USB_UEIE_BTSEE_OFF_Val              _UINT32_(0x0)                                        /* (USB_UEIE) BTSEF interrupt is disabled  */
#define USB_UEIE_BTSEE_ON                     (USB_UEIE_BTSEE_ON_Val << USB_UEIE_BTSEE_Pos)        /* (USB_UEIE) BTSEF interrupt is enabled Position */
#define USB_UEIE_BTSEE_OFF                    (USB_UEIE_BTSEE_OFF_Val << USB_UEIE_BTSEE_Pos)       /* (USB_UEIE) BTSEF interrupt is disabled Position */
#define USB_UEIE_Msk                          _UINT32_(0x000000FF)                                 /* (USB_UEIE) Register Mask  */


/* -------- USB_UEIECLR : (USB Offset: 0x234) (R/W 32)  -------- */
#define USB_UEIECLR_RESETVALUE                _UINT32_(0x00)                                       /*  (USB_UEIECLR)   Reset Value */

#define USB_UEIECLR_Msk                       _UINT32_(0x00000000)                                 /* (USB_UEIECLR) Register Mask  */


/* -------- USB_UEIESET : (USB Offset: 0x238) (R/W 32)  -------- */
#define USB_UEIESET_RESETVALUE                _UINT32_(0x00)                                       /*  (USB_UEIESET)   Reset Value */

#define USB_UEIESET_Msk                       _UINT32_(0x00000000)                                 /* (USB_UEIESET) Register Mask  */


/* -------- USB_UEIEINV : (USB Offset: 0x23C) (R/W 32)  -------- */
#define USB_UEIEINV_RESETVALUE                _UINT32_(0x00)                                       /*  (USB_UEIEINV)   Reset Value */

#define USB_UEIEINV_Msk                       _UINT32_(0x00000000)                                 /* (USB_UEIEINV) Register Mask  */


/* -------- USB_USTAT : (USB Offset: 0x240) ( R/ 32) USB Status Register -------- */
#define USB_USTAT_PPBI_Pos                    _UINT32_(2)                                          /* (USB_USTAT) Ping-Pong BD Pointer Indicator bit Position */
#define USB_USTAT_PPBI_Msk                    (_UINT32_(0x1) << USB_USTAT_PPBI_Pos)                /* (USB_USTAT) Ping-Pong BD Pointer Indicator bit Mask */
#define USB_USTAT_PPBI(value)                 (USB_USTAT_PPBI_Msk & (_UINT32_(value) << USB_USTAT_PPBI_Pos)) /* Assignment of value for PPBI in the USB_USTAT register */
#define   USB_USTAT_PPBI_ODD_Val              _UINT32_(0x1)                                        /* (USB_USTAT) The last transaction was to the ODD BD bank  */
#define   USB_USTAT_PPBI_EVEN_Val             _UINT32_(0x0)                                        /* (USB_USTAT) The last transaction was to the EVEN BD bank  */
#define USB_USTAT_PPBI_ODD                    (USB_USTAT_PPBI_ODD_Val << USB_USTAT_PPBI_Pos)       /* (USB_USTAT) The last transaction was to the ODD BD bank Position */
#define USB_USTAT_PPBI_EVEN                   (USB_USTAT_PPBI_EVEN_Val << USB_USTAT_PPBI_Pos)      /* (USB_USTAT) The last transaction was to the EVEN BD bank Position */
#define USB_USTAT_DIR_Pos                     _UINT32_(3)                                          /* (USB_USTAT) Last BD Direction Indicator bit Position */
#define USB_USTAT_DIR_Msk                     (_UINT32_(0x1) << USB_USTAT_DIR_Pos)                 /* (USB_USTAT) Last BD Direction Indicator bit Mask */
#define USB_USTAT_DIR(value)                  (USB_USTAT_DIR_Msk & (_UINT32_(value) << USB_USTAT_DIR_Pos)) /* Assignment of value for DIR in the USB_USTAT register */
#define   USB_USTAT_DIR_TX_Val                _UINT32_(0x1)                                        /* (USB_USTAT) Last transaction was a transmit transfer (TX)  */
#define   USB_USTAT_DIR_RX_Val                _UINT32_(0x0)                                        /* (USB_USTAT) Last transaction was a receive transfer (RX)  */
#define USB_USTAT_DIR_TX                      (USB_USTAT_DIR_TX_Val << USB_USTAT_DIR_Pos)          /* (USB_USTAT) Last transaction was a transmit transfer (TX) Position */
#define USB_USTAT_DIR_RX                      (USB_USTAT_DIR_RX_Val << USB_USTAT_DIR_Pos)          /* (USB_USTAT) Last transaction was a receive transfer (RX) Position */
#define USB_USTAT_ENDPT_Pos                   _UINT32_(4)                                          /* (USB_USTAT) Encoded Number of Last Endpoint Activity bits Position */
#define USB_USTAT_ENDPT_Msk                   (_UINT32_(0xF) << USB_USTAT_ENDPT_Pos)               /* (USB_USTAT) Encoded Number of Last Endpoint Activity bits Mask */
#define USB_USTAT_ENDPT(value)                (USB_USTAT_ENDPT_Msk & (_UINT32_(value) << USB_USTAT_ENDPT_Pos)) /* Assignment of value for ENDPT in the USB_USTAT register */
#define   USB_USTAT_ENDPT_EP_15_Val           _UINT32_(0xF)                                        /* (USB_USTAT) Endpoint 15  */
#define   USB_USTAT_ENDPT_EP_14_Val           _UINT32_(0xE)                                        /* (USB_USTAT) Endpoint 14  */
#define   USB_USTAT_ENDPT_EP_1_Val            _UINT32_(0x1)                                        /* (USB_USTAT) Endpoint 1  */
#define   USB_USTAT_ENDPT_EP_0_Val            _UINT32_(0x0)                                        /* (USB_USTAT) Endpoint 0  */
#define USB_USTAT_ENDPT_EP_15                 (USB_USTAT_ENDPT_EP_15_Val << USB_USTAT_ENDPT_Pos)   /* (USB_USTAT) Endpoint 15 Position */
#define USB_USTAT_ENDPT_EP_14                 (USB_USTAT_ENDPT_EP_14_Val << USB_USTAT_ENDPT_Pos)   /* (USB_USTAT) Endpoint 14 Position */
#define USB_USTAT_ENDPT_EP_1                  (USB_USTAT_ENDPT_EP_1_Val << USB_USTAT_ENDPT_Pos)    /* (USB_USTAT) Endpoint 1 Position */
#define USB_USTAT_ENDPT_EP_0                  (USB_USTAT_ENDPT_EP_0_Val << USB_USTAT_ENDPT_Pos)    /* (USB_USTAT) Endpoint 0 Position */
#define USB_USTAT_Msk                         _UINT32_(0x000000FC)                                 /* (USB_USTAT) Register Mask  */


/* -------- USB_USTATCLR : (USB Offset: 0x244) (R/W 32)  -------- */
#define USB_USTATCLR_RESETVALUE               _UINT32_(0x00)                                       /*  (USB_USTATCLR)   Reset Value */

#define USB_USTATCLR_Msk                      _UINT32_(0x00000000)                                 /* (USB_USTATCLR) Register Mask  */


/* -------- USB_USTATSET : (USB Offset: 0x248) (R/W 32)  -------- */
#define USB_USTATSET_RESETVALUE               _UINT32_(0x00)                                       /*  (USB_USTATSET)   Reset Value */

#define USB_USTATSET_Msk                      _UINT32_(0x00000000)                                 /* (USB_USTATSET) Register Mask  */


/* -------- USB_USTATINV : (USB Offset: 0x24C) (R/W 32)  -------- */
#define USB_USTATINV_RESETVALUE               _UINT32_(0x00)                                       /*  (USB_USTATINV)   Reset Value */

#define USB_USTATINV_Msk                      _UINT32_(0x00000000)                                 /* (USB_USTATINV) Register Mask  */


/* -------- USB_UCON : (USB Offset: 0x250) (R/W 32) USB Control Register -------- */
#define USB_UCON_USBEN_SOFEN_Pos              _UINT32_(0)                                          /* (USB_UCON) (Device mode)USB Module Enable bit / (Host mode) Position */
#define USB_UCON_USBEN_SOFEN_Msk              (_UINT32_(0x1) << USB_UCON_USBEN_SOFEN_Pos)          /* (USB_UCON) (Device mode)USB Module Enable bit / (Host mode) Mask */
#define USB_UCON_USBEN_SOFEN(value)           (USB_UCON_USBEN_SOFEN_Msk & (_UINT32_(value) << USB_UCON_USBEN_SOFEN_Pos)) /* Assignment of value for USBEN_SOFEN in the USB_UCON register */
#define   USB_UCON_USBEN_SOFEN_ON_Val         _UINT32_(0x1)                                        /* (USB_UCON) (Device mode)USB module and supporting circuitry is enabled / (Host mode)SOF token sent every 1 ms  */
#define   USB_UCON_USBEN_SOFEN_OFF_Val        _UINT32_(0x0)                                        /* (USB_UCON) (Device mode)USB module and supporting circuitry is disabled / (Host mode)SOF token disabled  */
#define USB_UCON_USBEN_SOFEN_ON               (USB_UCON_USBEN_SOFEN_ON_Val << USB_UCON_USBEN_SOFEN_Pos) /* (USB_UCON) (Device mode)USB module and supporting circuitry is enabled / (Host mode)SOF token sent every 1 ms Position */
#define USB_UCON_USBEN_SOFEN_OFF              (USB_UCON_USBEN_SOFEN_OFF_Val << USB_UCON_USBEN_SOFEN_Pos) /* (USB_UCON) (Device mode)USB module and supporting circuitry is disabled / (Host mode)SOF token disabled Position */
#define USB_UCON_PPBRST_Pos                   _UINT32_(1)                                          /* (USB_UCON) Ping-Pong Buffers Reset bit Position */
#define USB_UCON_PPBRST_Msk                   (_UINT32_(0x1) << USB_UCON_PPBRST_Pos)               /* (USB_UCON) Ping-Pong Buffers Reset bit Mask */
#define USB_UCON_PPBRST(value)                (USB_UCON_PPBRST_Msk & (_UINT32_(value) << USB_UCON_PPBRST_Pos)) /* Assignment of value for PPBRST in the USB_UCON register */
#define   USB_UCON_PPBRST_RESET_Val           _UINT32_(0x1)                                        /* (USB_UCON) Reset all Even/Odd buffer pointers to the EVEN BD banks  */
#define   USB_UCON_PPBRST_NO_RESET_Val        _UINT32_(0x0)                                        /* (USB_UCON) Even/Odd buffer pointers not being Reset  */
#define USB_UCON_PPBRST_RESET                 (USB_UCON_PPBRST_RESET_Val << USB_UCON_PPBRST_Pos)   /* (USB_UCON) Reset all Even/Odd buffer pointers to the EVEN BD banks Position */
#define USB_UCON_PPBRST_NO_RESET              (USB_UCON_PPBRST_NO_RESET_Val << USB_UCON_PPBRST_Pos) /* (USB_UCON) Even/Odd buffer pointers not being Reset Position */
#define USB_UCON_RESUME_Pos                   _UINT32_(2)                                          /* (USB_UCON) RESUME Signaling Enable bit Position */
#define USB_UCON_RESUME_Msk                   (_UINT32_(0x1) << USB_UCON_RESUME_Pos)               /* (USB_UCON) RESUME Signaling Enable bit Mask */
#define USB_UCON_RESUME(value)                (USB_UCON_RESUME_Msk & (_UINT32_(value) << USB_UCON_RESUME_Pos)) /* Assignment of value for RESUME in the USB_UCON register */
#define   USB_UCON_RESUME_ON_Val              _UINT32_(0x1)                                        /* (USB_UCON) RESUME signaling is activated  */
#define   USB_UCON_RESUME_OFF_Val             _UINT32_(0x0)                                        /* (USB_UCON) RESUME signaling is disabled  */
#define USB_UCON_RESUME_ON                    (USB_UCON_RESUME_ON_Val << USB_UCON_RESUME_Pos)      /* (USB_UCON) RESUME signaling is activated Position */
#define USB_UCON_RESUME_OFF                   (USB_UCON_RESUME_OFF_Val << USB_UCON_RESUME_Pos)     /* (USB_UCON) RESUME signaling is disabled Position */
#define USB_UCON_HOSTEN_Pos                   _UINT32_(3)                                          /* (USB_UCON) Host Mode Enable bit Position */
#define USB_UCON_HOSTEN_Msk                   (_UINT32_(0x1) << USB_UCON_HOSTEN_Pos)               /* (USB_UCON) Host Mode Enable bit Mask */
#define USB_UCON_HOSTEN(value)                (USB_UCON_HOSTEN_Msk & (_UINT32_(value) << USB_UCON_HOSTEN_Pos)) /* Assignment of value for HOSTEN in the USB_UCON register */
#define   USB_UCON_HOSTEN_ON_Val              _UINT32_(0x1)                                        /* (USB_UCON) USB host capability is enabled  */
#define   USB_UCON_HOSTEN_OFF_Val             _UINT32_(0x0)                                        /* (USB_UCON) USB host capability is disabled  */
#define USB_UCON_HOSTEN_ON                    (USB_UCON_HOSTEN_ON_Val << USB_UCON_HOSTEN_Pos)      /* (USB_UCON) USB host capability is enabled Position */
#define USB_UCON_HOSTEN_OFF                   (USB_UCON_HOSTEN_OFF_Val << USB_UCON_HOSTEN_Pos)     /* (USB_UCON) USB host capability is disabled Position */
#define USB_UCON_USBRST_Pos                   _UINT32_(4)                                          /* (USB_UCON) Module Reset bit Position */
#define USB_UCON_USBRST_Msk                   (_UINT32_(0x1) << USB_UCON_USBRST_Pos)               /* (USB_UCON) Module Reset bit Mask */
#define USB_UCON_USBRST(value)                (USB_UCON_USBRST_Msk & (_UINT32_(value) << USB_UCON_USBRST_Pos)) /* Assignment of value for USBRST in the USB_UCON register */
#define   USB_UCON_USBRST_RESET_GENERATED_Val _UINT32_(0x1)                                        /* (USB_UCON) USB reset is generated  */
#define   USB_UCON_USBRST_RESET_TERMINATED_Val _UINT32_(0x0)                                        /* (USB_UCON) USB reset is terminated  */
#define USB_UCON_USBRST_RESET_GENERATED       (USB_UCON_USBRST_RESET_GENERATED_Val << USB_UCON_USBRST_Pos) /* (USB_UCON) USB reset is generated Position */
#define USB_UCON_USBRST_RESET_TERMINATED      (USB_UCON_USBRST_RESET_TERMINATED_Val << USB_UCON_USBRST_Pos) /* (USB_UCON) USB reset is terminated Position */
#define USB_UCON_PKTDIS_TOKBUSY_Pos           _UINT32_(5)                                          /* (USB_UCON) (Device mode) Packet Transfer Disable bit / (Host mode) Token Busy Indicator bit Position */
#define USB_UCON_PKTDIS_TOKBUSY_Msk           (_UINT32_(0x1) << USB_UCON_PKTDIS_TOKBUSY_Pos)       /* (USB_UCON) (Device mode) Packet Transfer Disable bit / (Host mode) Token Busy Indicator bit Mask */
#define USB_UCON_PKTDIS_TOKBUSY(value)        (USB_UCON_PKTDIS_TOKBUSY_Msk & (_UINT32_(value) << USB_UCON_PKTDIS_TOKBUSY_Pos)) /* Assignment of value for PKTDIS_TOKBUSY in the USB_UCON register */
#define   USB_UCON_PKTDIS_TOKBUSY_ON_Val      _UINT32_(0x1)                                        /* (USB_UCON) (Device mode)Token and packet processing disabled (set upon SETUP token received) / (Host mode)Token being executed by the USB module  */
#define   USB_UCON_PKTDIS_TOKBUSY_OFF_Val     _UINT32_(0x0)                                        /* (USB_UCON) (Device mode)Token and packet processing enabled / (Host mode)No token being executed  */
#define USB_UCON_PKTDIS_TOKBUSY_ON            (USB_UCON_PKTDIS_TOKBUSY_ON_Val << USB_UCON_PKTDIS_TOKBUSY_Pos) /* (USB_UCON) (Device mode)Token and packet processing disabled (set upon SETUP token received) / (Host mode)Token being executed by the USB module Position */
#define USB_UCON_PKTDIS_TOKBUSY_OFF           (USB_UCON_PKTDIS_TOKBUSY_OFF_Val << USB_UCON_PKTDIS_TOKBUSY_Pos) /* (USB_UCON) (Device mode)Token and packet processing enabled / (Host mode)No token being executed Position */
#define USB_UCON_SE0_Pos                      _UINT32_(6)                                          /* (USB_UCON) Live Single-Ended Zero flag bit Position */
#define USB_UCON_SE0_Msk                      (_UINT32_(0x1) << USB_UCON_SE0_Pos)                  /* (USB_UCON) Live Single-Ended Zero flag bit Mask */
#define USB_UCON_SE0(value)                   (USB_UCON_SE0_Msk & (_UINT32_(value) << USB_UCON_SE0_Pos)) /* Assignment of value for SE0 in the USB_UCON register */
#define   USB_UCON_SE0_DETECT_Val             _UINT32_(0x1)                                        /* (USB_UCON) Single Ended Zero detected on the USB  */
#define   USB_UCON_SE0_NOT_DETECT_Val         _UINT32_(0x0)                                        /* (USB_UCON) No Single Ended Zero detected  */
#define USB_UCON_SE0_DETECT                   (USB_UCON_SE0_DETECT_Val << USB_UCON_SE0_Pos)        /* (USB_UCON) Single Ended Zero detected on the USB Position */
#define USB_UCON_SE0_NOT_DETECT               (USB_UCON_SE0_NOT_DETECT_Val << USB_UCON_SE0_Pos)    /* (USB_UCON) No Single Ended Zero detected Position */
#define USB_UCON_JSTATE_Pos                   _UINT32_(7)                                          /* (USB_UCON) Live Differential Receiver JSTATE flag bit Position */
#define USB_UCON_JSTATE_Msk                   (_UINT32_(0x1) << USB_UCON_JSTATE_Pos)               /* (USB_UCON) Live Differential Receiver JSTATE flag bit Mask */
#define USB_UCON_JSTATE(value)                (USB_UCON_JSTATE_Msk & (_UINT32_(value) << USB_UCON_JSTATE_Pos)) /* Assignment of value for JSTATE in the USB_UCON register */
#define   USB_UCON_JSTATE_DETECT_Val          _UINT32_(0x1)                                        /* (USB_UCON) JSTATE detected on the USB  */
#define   USB_UCON_JSTATE_NOT_DETECT_Val      _UINT32_(0x0)                                        /* (USB_UCON) No JSTATE detected  */
#define USB_UCON_JSTATE_DETECT                (USB_UCON_JSTATE_DETECT_Val << USB_UCON_JSTATE_Pos)  /* (USB_UCON) JSTATE detected on the USB Position */
#define USB_UCON_JSTATE_NOT_DETECT            (USB_UCON_JSTATE_NOT_DETECT_Val << USB_UCON_JSTATE_Pos) /* (USB_UCON) No JSTATE detected Position */
#define USB_UCON_Msk                          _UINT32_(0x000000FF)                                 /* (USB_UCON) Register Mask  */

#define USB_UCON_SE_Pos                       _UINT32_(6)                                          /* (USB_UCON Position) Live Single-Ended Zero flag bit */
#define USB_UCON_SE_Msk                       (_UINT32_(0x1) << USB_UCON_SE_Pos)                   /* (USB_UCON Mask) SE */
#define USB_UCON_SE(value)                    (USB_UCON_SE_Msk & (_UINT32_(value) << USB_UCON_SE_Pos)) 

/* -------- USB_UCONCLR : (USB Offset: 0x254) (R/W 32)  -------- */
#define USB_UCONCLR_RESETVALUE                _UINT32_(0x00)                                       /*  (USB_UCONCLR)   Reset Value */

#define USB_UCONCLR_Msk                       _UINT32_(0x00000000)                                 /* (USB_UCONCLR) Register Mask  */


/* -------- USB_UCONSET : (USB Offset: 0x258) (R/W 32)  -------- */
#define USB_UCONSET_RESETVALUE                _UINT32_(0x00)                                       /*  (USB_UCONSET)   Reset Value */

#define USB_UCONSET_Msk                       _UINT32_(0x00000000)                                 /* (USB_UCONSET) Register Mask  */


/* -------- USB_UCONINV : (USB Offset: 0x25C) (R/W 32)  -------- */
#define USB_UCONINV_RESETVALUE                _UINT32_(0x00)                                       /*  (USB_UCONINV)   Reset Value */

#define USB_UCONINV_Msk                       _UINT32_(0x00000000)                                 /* (USB_UCONINV) Register Mask  */


/* -------- USB_UADDR : (USB Offset: 0x260) (R/W 32) USB Address Register -------- */
#define USB_UADDR_DEVADDR_Pos                 _UINT32_(0)                                          /* (USB_UADDR)  Position */
#define USB_UADDR_DEVADDR_Msk                 (_UINT32_(0x7F) << USB_UADDR_DEVADDR_Pos)            /* (USB_UADDR)  Mask */
#define USB_UADDR_DEVADDR(value)              (USB_UADDR_DEVADDR_Msk & (_UINT32_(value) << USB_UADDR_DEVADDR_Pos)) /* Assignment of value for DEVADDR in the USB_UADDR register */
#define USB_UADDR_LSPDEN_Pos                  _UINT32_(7)                                          /* (USB_UADDR) Low Speed Enable Indicator bit Position */
#define USB_UADDR_LSPDEN_Msk                  (_UINT32_(0x1) << USB_UADDR_LSPDEN_Pos)              /* (USB_UADDR) Low Speed Enable Indicator bit Mask */
#define USB_UADDR_LSPDEN(value)               (USB_UADDR_LSPDEN_Msk & (_UINT32_(value) << USB_UADDR_LSPDEN_Pos)) /* Assignment of value for LSPDEN in the USB_UADDR register */
#define   USB_UADDR_LSPDEN_LOW_SPEED_Val      _UINT32_(0x1)                                        /* (USB_UADDR) Next token command to be executed at Low Speed  */
#define   USB_UADDR_LSPDEN_FULL_SPEED_Val     _UINT32_(0x0)                                        /* (USB_UADDR) Next token command to be executed at Full Speed  */
#define USB_UADDR_LSPDEN_LOW_SPEED            (USB_UADDR_LSPDEN_LOW_SPEED_Val << USB_UADDR_LSPDEN_Pos) /* (USB_UADDR) Next token command to be executed at Low Speed Position */
#define USB_UADDR_LSPDEN_FULL_SPEED           (USB_UADDR_LSPDEN_FULL_SPEED_Val << USB_UADDR_LSPDEN_Pos) /* (USB_UADDR) Next token command to be executed at Full Speed Position */
#define USB_UADDR_Msk                         _UINT32_(0x000000FF)                                 /* (USB_UADDR) Register Mask  */


/* -------- USB_UADDRCLR : (USB Offset: 0x264) (R/W 32)  -------- */
#define USB_UADDRCLR_RESETVALUE               _UINT32_(0x00)                                       /*  (USB_UADDRCLR)   Reset Value */

#define USB_UADDRCLR_Msk                      _UINT32_(0x00000000)                                 /* (USB_UADDRCLR) Register Mask  */


/* -------- USB_UADDRSET : (USB Offset: 0x268) (R/W 32)  -------- */
#define USB_UADDRSET_RESETVALUE               _UINT32_(0x00)                                       /*  (USB_UADDRSET)   Reset Value */

#define USB_UADDRSET_Msk                      _UINT32_(0x00000000)                                 /* (USB_UADDRSET) Register Mask  */


/* -------- USB_UADDRINV : (USB Offset: 0x26C) (R/W 32)  -------- */
#define USB_UADDRINV_RESETVALUE               _UINT32_(0x00)                                       /*  (USB_UADDRINV)   Reset Value */

#define USB_UADDRINV_Msk                      _UINT32_(0x00000000)                                 /* (USB_UADDRINV) Register Mask  */


/* -------- USB_UBDTP1 : (USB Offset: 0x270) (R/W 32) USB BDT Page 1 Register -------- */
#define USB_UBDTP1_BDTPTRL_Pos                _UINT32_(1)                                          /* (USB_UBDTP1)  Position */
#define USB_UBDTP1_BDTPTRL_Msk                (_UINT32_(0x7F) << USB_UBDTP1_BDTPTRL_Pos)           /* (USB_UBDTP1)  Mask */
#define USB_UBDTP1_BDTPTRL(value)             (USB_UBDTP1_BDTPTRL_Msk & (_UINT32_(value) << USB_UBDTP1_BDTPTRL_Pos)) /* Assignment of value for BDTPTRL in the USB_UBDTP1 register */
#define USB_UBDTP1_Msk                        _UINT32_(0x000000FE)                                 /* (USB_UBDTP1) Register Mask  */


/* -------- USB_UBDTP1CLR : (USB Offset: 0x274) (R/W 32)  -------- */
#define USB_UBDTP1CLR_RESETVALUE              _UINT32_(0x00)                                       /*  (USB_UBDTP1CLR)   Reset Value */

#define USB_UBDTP1CLR_Msk                     _UINT32_(0x00000000)                                 /* (USB_UBDTP1CLR) Register Mask  */


/* -------- USB_UBDTP1SET : (USB Offset: 0x278) (R/W 32)  -------- */
#define USB_UBDTP1SET_RESETVALUE              _UINT32_(0x00)                                       /*  (USB_UBDTP1SET)   Reset Value */

#define USB_UBDTP1SET_Msk                     _UINT32_(0x00000000)                                 /* (USB_UBDTP1SET) Register Mask  */


/* -------- USB_UBDTP1INV : (USB Offset: 0x27C) (R/W 32)  -------- */
#define USB_UBDTP1INV_RESETVALUE              _UINT32_(0x00)                                       /*  (USB_UBDTP1INV)   Reset Value */

#define USB_UBDTP1INV_Msk                     _UINT32_(0x00000000)                                 /* (USB_UBDTP1INV) Register Mask  */


/* -------- USB_UFRML : (USB Offset: 0x280) ( R/ 32) USB Frame Number Low Register -------- */
#define USB_UFRML_FRML_Pos                    _UINT32_(0)                                          /* (USB_UFRML)  Position */
#define USB_UFRML_FRML_Msk                    (_UINT32_(0xFF) << USB_UFRML_FRML_Pos)               /* (USB_UFRML)  Mask */
#define USB_UFRML_FRML(value)                 (USB_UFRML_FRML_Msk & (_UINT32_(value) << USB_UFRML_FRML_Pos)) /* Assignment of value for FRML in the USB_UFRML register */
#define USB_UFRML_Msk                         _UINT32_(0x000000FF)                                 /* (USB_UFRML) Register Mask  */


/* -------- USB_UFRMLCLR : (USB Offset: 0x284) (R/W 32)  -------- */
#define USB_UFRMLCLR_RESETVALUE               _UINT32_(0x00)                                       /*  (USB_UFRMLCLR)   Reset Value */

#define USB_UFRMLCLR_Msk                      _UINT32_(0x00000000)                                 /* (USB_UFRMLCLR) Register Mask  */


/* -------- USB_UFRMLSET : (USB Offset: 0x288) (R/W 32)  -------- */
#define USB_UFRMLSET_RESETVALUE               _UINT32_(0x00)                                       /*  (USB_UFRMLSET)   Reset Value */

#define USB_UFRMLSET_Msk                      _UINT32_(0x00000000)                                 /* (USB_UFRMLSET) Register Mask  */


/* -------- USB_UFRMLINV : (USB Offset: 0x28C) (R/W 32)  -------- */
#define USB_UFRMLINV_RESETVALUE               _UINT32_(0x00)                                       /*  (USB_UFRMLINV)   Reset Value */

#define USB_UFRMLINV_Msk                      _UINT32_(0x00000000)                                 /* (USB_UFRMLINV) Register Mask  */


/* -------- USB_UFRMH : (USB Offset: 0x290) ( R/ 32) USB Frame Number High Register -------- */
#define USB_UFRMH_FRMH_Pos                    _UINT32_(0)                                          /* (USB_UFRMH)  Position */
#define USB_UFRMH_FRMH_Msk                    (_UINT32_(0x7) << USB_UFRMH_FRMH_Pos)                /* (USB_UFRMH)  Mask */
#define USB_UFRMH_FRMH(value)                 (USB_UFRMH_FRMH_Msk & (_UINT32_(value) << USB_UFRMH_FRMH_Pos)) /* Assignment of value for FRMH in the USB_UFRMH register */
#define USB_UFRMH_Msk                         _UINT32_(0x00000007)                                 /* (USB_UFRMH) Register Mask  */


/* -------- USB_UFRMHCLR : (USB Offset: 0x294) (R/W 32)  -------- */
#define USB_UFRMHCLR_RESETVALUE               _UINT32_(0x00)                                       /*  (USB_UFRMHCLR)   Reset Value */

#define USB_UFRMHCLR_Msk                      _UINT32_(0x00000000)                                 /* (USB_UFRMHCLR) Register Mask  */


/* -------- USB_UFRMHSET : (USB Offset: 0x298) (R/W 32)  -------- */
#define USB_UFRMHSET_RESETVALUE               _UINT32_(0x00)                                       /*  (USB_UFRMHSET)   Reset Value */

#define USB_UFRMHSET_Msk                      _UINT32_(0x00000000)                                 /* (USB_UFRMHSET) Register Mask  */


/* -------- USB_UFRMHINV : (USB Offset: 0x29C) (R/W 32)  -------- */
#define USB_UFRMHINV_RESETVALUE               _UINT32_(0x00)                                       /*  (USB_UFRMHINV)   Reset Value */

#define USB_UFRMHINV_Msk                      _UINT32_(0x00000000)                                 /* (USB_UFRMHINV) Register Mask  */


/* -------- USB_UTOK : (USB Offset: 0x2A0) (R/W 32) USB Token Register -------- */
#define USB_UTOK_EP_Pos                       _UINT32_(0)                                          /* (USB_UTOK)  Position */
#define USB_UTOK_EP_Msk                       (_UINT32_(0xF) << USB_UTOK_EP_Pos)                   /* (USB_UTOK)  Mask */
#define USB_UTOK_EP(value)                    (USB_UTOK_EP_Msk & (_UINT32_(value) << USB_UTOK_EP_Pos)) /* Assignment of value for EP in the USB_UTOK register */
#define USB_UTOK_PID_Pos                      _UINT32_(4)                                          /* (USB_UTOK) Token Type Indicator bits Position */
#define USB_UTOK_PID_Msk                      (_UINT32_(0xF) << USB_UTOK_PID_Pos)                  /* (USB_UTOK) Token Type Indicator bits Mask */
#define USB_UTOK_PID(value)                   (USB_UTOK_PID_Msk & (_UINT32_(value) << USB_UTOK_PID_Pos)) /* Assignment of value for PID in the USB_UTOK register */
#define   USB_UTOK_PID_OUT_Val                _UINT32_(0x1)                                        /* (USB_UTOK) OUT (TX) token type transaction  */
#define   USB_UTOK_PID_IN_Val                 _UINT32_(0x9)                                        /* (USB_UTOK) IN (RX) token type transaction  */
#define   USB_UTOK_PID_SETUP_Val              _UINT32_(0xD)                                        /* (USB_UTOK) SETUP (TX) token type transaction  */
#define USB_UTOK_PID_OUT                      (USB_UTOK_PID_OUT_Val << USB_UTOK_PID_Pos)           /* (USB_UTOK) OUT (TX) token type transaction Position */
#define USB_UTOK_PID_IN                       (USB_UTOK_PID_IN_Val << USB_UTOK_PID_Pos)            /* (USB_UTOK) IN (RX) token type transaction Position */
#define USB_UTOK_PID_SETUP                    (USB_UTOK_PID_SETUP_Val << USB_UTOK_PID_Pos)         /* (USB_UTOK) SETUP (TX) token type transaction Position */
#define USB_UTOK_Msk                          _UINT32_(0x000000FF)                                 /* (USB_UTOK) Register Mask  */


/* -------- USB_UTOKCLR : (USB Offset: 0x2A4) (R/W 32)  -------- */
#define USB_UTOKCLR_RESETVALUE                _UINT32_(0x00)                                       /*  (USB_UTOKCLR)   Reset Value */

#define USB_UTOKCLR_Msk                       _UINT32_(0x00000000)                                 /* (USB_UTOKCLR) Register Mask  */


/* -------- USB_UTOKSET : (USB Offset: 0x2A8) (R/W 32)  -------- */
#define USB_UTOKSET_RESETVALUE                _UINT32_(0x00)                                       /*  (USB_UTOKSET)   Reset Value */

#define USB_UTOKSET_Msk                       _UINT32_(0x00000000)                                 /* (USB_UTOKSET) Register Mask  */


/* -------- USB_UTOKINV : (USB Offset: 0x2AC) (R/W 32)  -------- */
#define USB_UTOKINV_RESETVALUE                _UINT32_(0x00)                                       /*  (USB_UTOKINV)   Reset Value */

#define USB_UTOKINV_Msk                       _UINT32_(0x00000000)                                 /* (USB_UTOKINV) Register Mask  */


/* -------- USB_USOF : (USB Offset: 0x2B0) (R/W 32) USB SOF Threshold Register -------- */
#define USB_USOF_CNT_Pos                      _UINT32_(0)                                          /* (USB_USOF) SOF Threshold Value bits Position */
#define USB_USOF_CNT_Msk                      (_UINT32_(0xFF) << USB_USOF_CNT_Pos)                 /* (USB_USOF) SOF Threshold Value bits Mask */
#define USB_USOF_CNT(value)                   (USB_USOF_CNT_Msk & (_UINT32_(value) << USB_USOF_CNT_Pos)) /* Assignment of value for CNT in the USB_USOF register */
#define   USB_USOF_CNT_BYTE64_Val             _UINT32_(0x4A)                                       /* (USB_USOF) 64-byte packet  */
#define   USB_USOF_CNT_BYTE32_Val             _UINT32_(0x2A)                                       /* (USB_USOF) 32-byte packet  */
#define   USB_USOF_CNT_BYTE16_Val             _UINT32_(0x1A)                                       /* (USB_USOF) 16-byte packet  */
#define   USB_USOF_CNT_BYTE8_Val              _UINT32_(0x12)                                       /* (USB_USOF) 8-byte packet  */
#define USB_USOF_CNT_BYTE64                   (USB_USOF_CNT_BYTE64_Val << USB_USOF_CNT_Pos)        /* (USB_USOF) 64-byte packet Position */
#define USB_USOF_CNT_BYTE32                   (USB_USOF_CNT_BYTE32_Val << USB_USOF_CNT_Pos)        /* (USB_USOF) 32-byte packet Position */
#define USB_USOF_CNT_BYTE16                   (USB_USOF_CNT_BYTE16_Val << USB_USOF_CNT_Pos)        /* (USB_USOF) 16-byte packet Position */
#define USB_USOF_CNT_BYTE8                    (USB_USOF_CNT_BYTE8_Val << USB_USOF_CNT_Pos)         /* (USB_USOF) 8-byte packet Position */
#define USB_USOF_Msk                          _UINT32_(0x000000FF)                                 /* (USB_USOF) Register Mask  */


/* -------- USB_USOFCLR : (USB Offset: 0x2B4) (R/W 32)  -------- */
#define USB_USOFCLR_RESETVALUE                _UINT32_(0x00)                                       /*  (USB_USOFCLR)   Reset Value */

#define USB_USOFCLR_Msk                       _UINT32_(0x00000000)                                 /* (USB_USOFCLR) Register Mask  */


/* -------- USB_USOFSET : (USB Offset: 0x2B8) (R/W 32)  -------- */
#define USB_USOFSET_RESETVALUE                _UINT32_(0x00)                                       /*  (USB_USOFSET)   Reset Value */

#define USB_USOFSET_Msk                       _UINT32_(0x00000000)                                 /* (USB_USOFSET) Register Mask  */


/* -------- USB_USOFINV : (USB Offset: 0x2BC) (R/W 32)  -------- */
#define USB_USOFINV_RESETVALUE                _UINT32_(0x00)                                       /*  (USB_USOFINV)   Reset Value */

#define USB_USOFINV_Msk                       _UINT32_(0x00000000)                                 /* (USB_USOFINV) Register Mask  */


/* -------- USB_UBDTP2 : (USB Offset: 0x2C0) (R/W 32) USB BDT PAGE 2 Register -------- */
#define USB_UBDTP2_BDTPTRH_Pos                _UINT32_(0)                                          /* (USB_UBDTP2)  Position */
#define USB_UBDTP2_BDTPTRH_Msk                (_UINT32_(0xFF) << USB_UBDTP2_BDTPTRH_Pos)           /* (USB_UBDTP2)  Mask */
#define USB_UBDTP2_BDTPTRH(value)             (USB_UBDTP2_BDTPTRH_Msk & (_UINT32_(value) << USB_UBDTP2_BDTPTRH_Pos)) /* Assignment of value for BDTPTRH in the USB_UBDTP2 register */
#define USB_UBDTP2_Msk                        _UINT32_(0x000000FF)                                 /* (USB_UBDTP2) Register Mask  */


/* -------- USB_UBDTP2CLR : (USB Offset: 0x2C4) (R/W 32)  -------- */
#define USB_UBDTP2CLR_RESETVALUE              _UINT32_(0x00)                                       /*  (USB_UBDTP2CLR)   Reset Value */

#define USB_UBDTP2CLR_Msk                     _UINT32_(0x00000000)                                 /* (USB_UBDTP2CLR) Register Mask  */


/* -------- USB_UBDTP2SET : (USB Offset: 0x2C8) (R/W 32)  -------- */
#define USB_UBDTP2SET_RESETVALUE              _UINT32_(0x00)                                       /*  (USB_UBDTP2SET)   Reset Value */

#define USB_UBDTP2SET_Msk                     _UINT32_(0x00000000)                                 /* (USB_UBDTP2SET) Register Mask  */


/* -------- USB_UBDTP2INV : (USB Offset: 0x2CC) (R/W 32)  -------- */
#define USB_UBDTP2INV_RESETVALUE              _UINT32_(0x00)                                       /*  (USB_UBDTP2INV)   Reset Value */

#define USB_UBDTP2INV_Msk                     _UINT32_(0x00000000)                                 /* (USB_UBDTP2INV) Register Mask  */


/* -------- USB_UBDTP3 : (USB Offset: 0x2D0) (R/W 32) USB BDT PAGE 3 Register -------- */
#define USB_UBDTP3_BDTPTRU_Pos                _UINT32_(0)                                          /* (USB_UBDTP3)  Position */
#define USB_UBDTP3_BDTPTRU_Msk                (_UINT32_(0xFF) << USB_UBDTP3_BDTPTRU_Pos)           /* (USB_UBDTP3)  Mask */
#define USB_UBDTP3_BDTPTRU(value)             (USB_UBDTP3_BDTPTRU_Msk & (_UINT32_(value) << USB_UBDTP3_BDTPTRU_Pos)) /* Assignment of value for BDTPTRU in the USB_UBDTP3 register */
#define USB_UBDTP3_Msk                        _UINT32_(0x000000FF)                                 /* (USB_UBDTP3) Register Mask  */


/* -------- USB_UBDTP3CLR : (USB Offset: 0x2D4) (R/W 32)  -------- */
#define USB_UBDTP3CLR_RESETVALUE              _UINT32_(0x00)                                       /*  (USB_UBDTP3CLR)   Reset Value */

#define USB_UBDTP3CLR_Msk                     _UINT32_(0x00000000)                                 /* (USB_UBDTP3CLR) Register Mask  */


/* -------- USB_UBDTP3SET : (USB Offset: 0x2D8) (R/W 32)  -------- */
#define USB_UBDTP3SET_RESETVALUE              _UINT32_(0x00)                                       /*  (USB_UBDTP3SET)   Reset Value */

#define USB_UBDTP3SET_Msk                     _UINT32_(0x00000000)                                 /* (USB_UBDTP3SET) Register Mask  */


/* -------- USB_UBDTP3INV : (USB Offset: 0x2DC) (R/W 32)  -------- */
#define USB_UBDTP3INV_RESETVALUE              _UINT32_(0x00)                                       /*  (USB_UBDTP3INV)   Reset Value */

#define USB_UBDTP3INV_Msk                     _UINT32_(0x00000000)                                 /* (USB_UBDTP3INV) Register Mask  */


/* -------- USB_UCNFG1 : (USB Offset: 0x2E0) (R/W 32) USB Configuration 1 Register -------- */
#define USB_UCNFG1_AUTO_SUSP_Pos              _UINT32_(0)                                          /* (USB_UCNFG1) Automatic Suspend Enable bit Position */
#define USB_UCNFG1_AUTO_SUSP_Msk              (_UINT32_(0x1) << USB_UCNFG1_AUTO_SUSP_Pos)          /* (USB_UCNFG1) Automatic Suspend Enable bit Mask */
#define USB_UCNFG1_AUTO_SUSP(value)           (USB_UCNFG1_AUTO_SUSP_Msk & (_UINT32_(value) << USB_UCNFG1_AUTO_SUSP_Pos)) /* Assignment of value for AUTO_SUSP in the USB_UCNFG1 register */
#define   USB_UCNFG1_AUTO_SUSP_AUTO_SUSPEND_Val _UINT32_(0x1)                                        /* (USB_UCNFG1) USB module automatically suspends upon entry to Sleep mode. See the USUSPEND bit (UxPWRC) in  */
#define   USB_UCNFG1_AUTO_SUSP_NO_AUTO_SUSPEND_Val _UINT32_(0x0)                                        /* (USB_UCNFG1) USB module does not automatically suspend upon entry to Sleep mode. Software must use the USUSPEND bit (UxPWRC) to suspend the module  */
#define USB_UCNFG1_AUTO_SUSP_AUTO_SUSPEND     (USB_UCNFG1_AUTO_SUSP_AUTO_SUSPEND_Val << USB_UCNFG1_AUTO_SUSP_Pos) /* (USB_UCNFG1) USB module automatically suspends upon entry to Sleep mode. See the USUSPEND bit (UxPWRC) in Position */
#define USB_UCNFG1_AUTO_SUSP_NO_AUTO_SUSPEND  (USB_UCNFG1_AUTO_SUSP_NO_AUTO_SUSPEND_Val << USB_UCNFG1_AUTO_SUSP_Pos) /* (USB_UCNFG1) USB module does not automatically suspend upon entry to Sleep mode. Software must use the USUSPEND bit (UxPWRC) to suspend the module Position */
#define USB_UCNFG1_LSDEV_Pos                  _UINT32_(3)                                          /* (USB_UCNFG1) Low-Speed Device Enable bit Position */
#define USB_UCNFG1_LSDEV_Msk                  (_UINT32_(0x1) << USB_UCNFG1_LSDEV_Pos)              /* (USB_UCNFG1) Low-Speed Device Enable bit Mask */
#define USB_UCNFG1_LSDEV(value)               (USB_UCNFG1_LSDEV_Msk & (_UINT32_(value) << USB_UCNFG1_LSDEV_Pos)) /* Assignment of value for LSDEV in the USB_UCNFG1 register */
#define   USB_UCNFG1_LSDEV_LOW_SPEED_Val      _UINT32_(0x1)                                        /* (USB_UCNFG1) USB module to operate in Low-Speed Device mode  */
#define   USB_UCNFG1_LSDEV_OTG_Val            _UINT32_(0x0)                                        /* (USB_UCNFG1) USB module to operate in OTG  */
#define USB_UCNFG1_LSDEV_LOW_SPEED            (USB_UCNFG1_LSDEV_LOW_SPEED_Val << USB_UCNFG1_LSDEV_Pos) /* (USB_UCNFG1) USB module to operate in Low-Speed Device mode Position */
#define USB_UCNFG1_LSDEV_OTG                  (USB_UCNFG1_LSDEV_OTG_Val << USB_UCNFG1_LSDEV_Pos)   /* (USB_UCNFG1) USB module to operate in OTG Position */
#define USB_UCNFG1_PSIDL_Pos                  _UINT32_(4)                                          /* (USB_UCNFG1) Stop in Idle Mode bit Position */
#define USB_UCNFG1_PSIDL_Msk                  (_UINT32_(0x1) << USB_UCNFG1_PSIDL_Pos)              /* (USB_UCNFG1) Stop in Idle Mode bit Mask */
#define USB_UCNFG1_PSIDL(value)               (USB_UCNFG1_PSIDL_Msk & (_UINT32_(value) << USB_UCNFG1_PSIDL_Pos)) /* Assignment of value for PSIDL in the USB_UCNFG1 register */
#define   USB_UCNFG1_PSIDL_DISCONTINUE_Val    _UINT32_(0x1)                                        /* (USB_UCNFG1) Discontinue module operation when device enters Idle mode  */
#define   USB_UCNFG1_PSIDL_CONTINUE_Val       _UINT32_(0x0)                                        /* (USB_UCNFG1) Continue module operation in Idle mode  */
#define USB_UCNFG1_PSIDL_DISCONTINUE          (USB_UCNFG1_PSIDL_DISCONTINUE_Val << USB_UCNFG1_PSIDL_Pos) /* (USB_UCNFG1) Discontinue module operation when device enters Idle mode Position */
#define USB_UCNFG1_PSIDL_CONTINUE             (USB_UCNFG1_PSIDL_CONTINUE_Val << USB_UCNFG1_PSIDL_Pos) /* (USB_UCNFG1) Continue module operation in Idle mode Position */
#define USB_UCNFG1_UOEMON_Pos                 _UINT32_(6)                                          /* (USB_UCNFG1) USB Position */
#define USB_UCNFG1_UOEMON_Msk                 (_UINT32_(0x1) << USB_UCNFG1_UOEMON_Pos)             /* (USB_UCNFG1) USB Mask */
#define USB_UCNFG1_UOEMON(value)              (USB_UCNFG1_UOEMON_Msk & (_UINT32_(value) << USB_UCNFG1_UOEMON_Pos)) /* Assignment of value for UOEMON in the USB_UCNFG1 register */
#define   USB_UCNFG1_UOEMON_ACTIVE_Val        _UINT32_(0x1)                                        /* (USB_UCNFG1) OE signal is active; it indicates intervals during which the D+/D- lines are driving  */
#define   USB_UCNFG1_UOEMON_INACTIVE_Val      _UINT32_(0x0)                                        /* (USB_UCNFG1) OE signal is inactive  */
#define USB_UCNFG1_UOEMON_ACTIVE              (USB_UCNFG1_UOEMON_ACTIVE_Val << USB_UCNFG1_UOEMON_Pos) /* (USB_UCNFG1) OE signal is active; it indicates intervals during which the D+/D- lines are driving Position */
#define USB_UCNFG1_UOEMON_INACTIVE            (USB_UCNFG1_UOEMON_INACTIVE_Val << USB_UCNFG1_UOEMON_Pos) /* (USB_UCNFG1) OE signal is inactive Position */
#define USB_UCNFG1_UTEYE_Pos                  _UINT32_(7)                                          /* (USB_UCNFG1) USB Eye-Pattern Test Enable bit Position */
#define USB_UCNFG1_UTEYE_Msk                  (_UINT32_(0x1) << USB_UCNFG1_UTEYE_Pos)              /* (USB_UCNFG1) USB Eye-Pattern Test Enable bit Mask */
#define USB_UCNFG1_UTEYE(value)               (USB_UCNFG1_UTEYE_Msk & (_UINT32_(value) << USB_UCNFG1_UTEYE_Pos)) /* Assignment of value for UTEYE in the USB_UCNFG1 register */
#define   USB_UCNFG1_UTEYE_ON_Val             _UINT32_(0x1)                                        /* (USB_UCNFG1) Eye-Pattern Test is enabled  */
#define   USB_UCNFG1_UTEYE_OFF_Val            _UINT32_(0x0)                                        /* (USB_UCNFG1) Eye-Pattern Test is disabled  */
#define USB_UCNFG1_UTEYE_ON                   (USB_UCNFG1_UTEYE_ON_Val << USB_UCNFG1_UTEYE_Pos)    /* (USB_UCNFG1) Eye-Pattern Test is enabled Position */
#define USB_UCNFG1_UTEYE_OFF                  (USB_UCNFG1_UTEYE_OFF_Val << USB_UCNFG1_UTEYE_Pos)   /* (USB_UCNFG1) Eye-Pattern Test is disabled Position */
#define USB_UCNFG1_Msk                        _UINT32_(0x000000D9)                                 /* (USB_UCNFG1) Register Mask  */


/* -------- USB_UCNFG1CLR : (USB Offset: 0x2E4) (R/W 32)  -------- */
#define USB_UCNFG1CLR_RESETVALUE              _UINT32_(0x00)                                       /*  (USB_UCNFG1CLR)   Reset Value */

#define USB_UCNFG1CLR_Msk                     _UINT32_(0x00000000)                                 /* (USB_UCNFG1CLR) Register Mask  */


/* -------- USB_UCNFG1SET : (USB Offset: 0x2E8) (R/W 32)  -------- */
#define USB_UCNFG1SET_RESETVALUE              _UINT32_(0x00)                                       /*  (USB_UCNFG1SET)   Reset Value */

#define USB_UCNFG1SET_Msk                     _UINT32_(0x00000000)                                 /* (USB_UCNFG1SET) Register Mask  */


/* -------- USB_UCNFG1INV : (USB Offset: 0x2EC) (R/W 32)  -------- */
#define USB_UCNFG1INV_RESETVALUE              _UINT32_(0x00)                                       /*  (USB_UCNFG1INV)   Reset Value */

#define USB_UCNFG1INV_Msk                     _UINT32_(0x00000000)                                 /* (USB_UCNFG1INV) Register Mask  */


/* USB register offsets definitions */
#define USB_UEPx_REG_OFST              _UINT32_(0x00)      /* (USB_UEPx) USB Endpoint Control Registers Offset */
#define USB_UEPxCLR_REG_OFST           _UINT32_(0x04)      /* (USB_UEPxCLR)  Offset */
#define USB_UEPxSET_REG_OFST           _UINT32_(0x08)      /* (USB_UEPxSET)  Offset */
#define USB_UEPxINV_REG_OFST           _UINT32_(0x0C)      /* (USB_UEPxINV)  Offset */
#define USB_UOTGIR_REG_OFST            _UINT32_(0x40)      /* (USB_UOTGIR) USB OTG Interrupt Status Register Offset */
#define USB_UOTGIRCLR_REG_OFST         _UINT32_(0x44)      /* (USB_UOTGIRCLR)  Offset */
#define USB_UOTGIRSET_REG_OFST         _UINT32_(0x48)      /* (USB_UOTGIRSET)  Offset */
#define USB_UOTGIRINV_REG_OFST         _UINT32_(0x4C)      /* (USB_UOTGIRINV)  Offset */
#define USB_UOTGIE_REG_OFST            _UINT32_(0x50)      /* (USB_UOTGIE) USB OTG Interrupt Enable Register Offset */
#define USB_UOTGIECLR_REG_OFST         _UINT32_(0x54)      /* (USB_UOTGIECLR)  Offset */
#define USB_UOTGIESET_REG_OFST         _UINT32_(0x58)      /* (USB_UOTGIESET)  Offset */
#define USB_UOTGIEINV_REG_OFST         _UINT32_(0x5C)      /* (USB_UOTGIEINV)  Offset */
#define USB_UOTGSTAT_REG_OFST          _UINT32_(0x60)      /* (USB_UOTGSTAT) USB OTG Status Register Offset */
#define USB_UOTGCON_REG_OFST           _UINT32_(0x70)      /* (USB_UOTGCON) USB OTG Control Register Offset */
#define USB_UOTGCONCLR_REG_OFST        _UINT32_(0x74)      /* (USB_UOTGCONCLR)  Offset */
#define USB_UOTGCONSET_REG_OFST        _UINT32_(0x78)      /* (USB_UOTGCONSET)  Offset */
#define USB_UOTGCONINV_REG_OFST        _UINT32_(0x7C)      /* (USB_UOTGCONINV)  Offset */
#define USB_UPWRC_REG_OFST             _UINT32_(0x80)      /* (USB_UPWRC) USB Power Control Register Offset */
#define USB_UPWRCCLR_REG_OFST          _UINT32_(0x84)      /* (USB_UPWRCCLR)  Offset */
#define USB_UPWRCSET_REG_OFST          _UINT32_(0x88)      /* (USB_UPWRCSET)  Offset */
#define USB_UPWRCINV_REG_OFST          _UINT32_(0x8C)      /* (USB_UPWRCINV)  Offset */
#define USB_UIR_REG_OFST               _UINT32_(0x200)     /* (USB_UIR) USB Interrupt Register Offset */
#define USB_UIRCLR_REG_OFST            _UINT32_(0x204)     /* (USB_UIRCLR)  Offset */
#define USB_UIE_REG_OFST               _UINT32_(0x210)     /* (USB_UIE) USB Interrupt Enable Register Offset */
#define USB_UIECLR_REG_OFST            _UINT32_(0x214)     /* (USB_UIECLR)  Offset */
#define USB_UIESET_REG_OFST            _UINT32_(0x218)     /* (USB_UIESET)  Offset */
#define USB_UIEINV_REG_OFST            _UINT32_(0x21C)     /* (USB_UIEINV)  Offset */
#define USB_UEIR_REG_OFST              _UINT32_(0x220)     /* (USB_UEIR) USB Error Interrupt Status Register Offset */
#define USB_UEIRCLR_REG_OFST           _UINT32_(0x224)     /* (USB_UEIRCLR)  Offset */
#define USB_UEIE_REG_OFST              _UINT32_(0x230)     /* (USB_UEIE) USB Error Interrupt Enable Register Offset */
#define USB_UEIECLR_REG_OFST           _UINT32_(0x234)     /* (USB_UEIECLR)  Offset */
#define USB_UEIESET_REG_OFST           _UINT32_(0x238)     /* (USB_UEIESET)  Offset */
#define USB_UEIEINV_REG_OFST           _UINT32_(0x23C)     /* (USB_UEIEINV)  Offset */
#define USB_USTAT_REG_OFST             _UINT32_(0x240)     /* (USB_USTAT) USB Status Register Offset */
#define USB_USTATCLR_REG_OFST          _UINT32_(0x244)     /* (USB_USTATCLR)  Offset */
#define USB_USTATSET_REG_OFST          _UINT32_(0x248)     /* (USB_USTATSET)  Offset */
#define USB_USTATINV_REG_OFST          _UINT32_(0x24C)     /* (USB_USTATINV)  Offset */
#define USB_UCON_REG_OFST              _UINT32_(0x250)     /* (USB_UCON) USB Control Register Offset */
#define USB_UCONCLR_REG_OFST           _UINT32_(0x254)     /* (USB_UCONCLR)  Offset */
#define USB_UCONSET_REG_OFST           _UINT32_(0x258)     /* (USB_UCONSET)  Offset */
#define USB_UCONINV_REG_OFST           _UINT32_(0x25C)     /* (USB_UCONINV)  Offset */
#define USB_UADDR_REG_OFST             _UINT32_(0x260)     /* (USB_UADDR) USB Address Register Offset */
#define USB_UADDRCLR_REG_OFST          _UINT32_(0x264)     /* (USB_UADDRCLR)  Offset */
#define USB_UADDRSET_REG_OFST          _UINT32_(0x268)     /* (USB_UADDRSET)  Offset */
#define USB_UADDRINV_REG_OFST          _UINT32_(0x26C)     /* (USB_UADDRINV)  Offset */
#define USB_UBDTP1_REG_OFST            _UINT32_(0x270)     /* (USB_UBDTP1) USB BDT Page 1 Register Offset */
#define USB_UBDTP1CLR_REG_OFST         _UINT32_(0x274)     /* (USB_UBDTP1CLR)  Offset */
#define USB_UBDTP1SET_REG_OFST         _UINT32_(0x278)     /* (USB_UBDTP1SET)  Offset */
#define USB_UBDTP1INV_REG_OFST         _UINT32_(0x27C)     /* (USB_UBDTP1INV)  Offset */
#define USB_UFRML_REG_OFST             _UINT32_(0x280)     /* (USB_UFRML) USB Frame Number Low Register Offset */
#define USB_UFRMLCLR_REG_OFST          _UINT32_(0x284)     /* (USB_UFRMLCLR)  Offset */
#define USB_UFRMLSET_REG_OFST          _UINT32_(0x288)     /* (USB_UFRMLSET)  Offset */
#define USB_UFRMLINV_REG_OFST          _UINT32_(0x28C)     /* (USB_UFRMLINV)  Offset */
#define USB_UFRMH_REG_OFST             _UINT32_(0x290)     /* (USB_UFRMH) USB Frame Number High Register Offset */
#define USB_UFRMHCLR_REG_OFST          _UINT32_(0x294)     /* (USB_UFRMHCLR)  Offset */
#define USB_UFRMHSET_REG_OFST          _UINT32_(0x298)     /* (USB_UFRMHSET)  Offset */
#define USB_UFRMHINV_REG_OFST          _UINT32_(0x29C)     /* (USB_UFRMHINV)  Offset */
#define USB_UTOK_REG_OFST              _UINT32_(0x2A0)     /* (USB_UTOK) USB Token Register Offset */
#define USB_UTOKCLR_REG_OFST           _UINT32_(0x2A4)     /* (USB_UTOKCLR)  Offset */
#define USB_UTOKSET_REG_OFST           _UINT32_(0x2A8)     /* (USB_UTOKSET)  Offset */
#define USB_UTOKINV_REG_OFST           _UINT32_(0x2AC)     /* (USB_UTOKINV)  Offset */
#define USB_USOF_REG_OFST              _UINT32_(0x2B0)     /* (USB_USOF) USB SOF Threshold Register Offset */
#define USB_USOFCLR_REG_OFST           _UINT32_(0x2B4)     /* (USB_USOFCLR)  Offset */
#define USB_USOFSET_REG_OFST           _UINT32_(0x2B8)     /* (USB_USOFSET)  Offset */
#define USB_USOFINV_REG_OFST           _UINT32_(0x2BC)     /* (USB_USOFINV)  Offset */
#define USB_UBDTP2_REG_OFST            _UINT32_(0x2C0)     /* (USB_UBDTP2) USB BDT PAGE 2 Register Offset */
#define USB_UBDTP2CLR_REG_OFST         _UINT32_(0x2C4)     /* (USB_UBDTP2CLR)  Offset */
#define USB_UBDTP2SET_REG_OFST         _UINT32_(0x2C8)     /* (USB_UBDTP2SET)  Offset */
#define USB_UBDTP2INV_REG_OFST         _UINT32_(0x2CC)     /* (USB_UBDTP2INV)  Offset */
#define USB_UBDTP3_REG_OFST            _UINT32_(0x2D0)     /* (USB_UBDTP3) USB BDT PAGE 3 Register Offset */
#define USB_UBDTP3CLR_REG_OFST         _UINT32_(0x2D4)     /* (USB_UBDTP3CLR)  Offset */
#define USB_UBDTP3SET_REG_OFST         _UINT32_(0x2D8)     /* (USB_UBDTP3SET)  Offset */
#define USB_UBDTP3INV_REG_OFST         _UINT32_(0x2DC)     /* (USB_UBDTP3INV)  Offset */
#define USB_UCNFG1_REG_OFST            _UINT32_(0x2E0)     /* (USB_UCNFG1) USB Configuration 1 Register Offset */
#define USB_UCNFG1CLR_REG_OFST         _UINT32_(0x2E4)     /* (USB_UCNFG1CLR)  Offset */
#define USB_UCNFG1SET_REG_OFST         _UINT32_(0x2E8)     /* (USB_UCNFG1SET)  Offset */
#define USB_UCNFG1INV_REG_OFST         _UINT32_(0x2EC)     /* (USB_UCNFG1INV)  Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* UEP register API structure */
typedef struct
{
  __IO  uint32_t                       USB_UEPx;           /* Offset: 0x00 (R/W  32) USB Endpoint Control Registers */
  __IO  uint32_t                       USB_UEPxCLR;        /* Offset: 0x04 (R/W  32)  */
  __IO  uint32_t                       USB_UEPxSET;        /* Offset: 0x08 (R/W  32)  */
  __IO  uint32_t                       USB_UEPxINV;        /* Offset: 0x0C (R/W  32)  */
} usb_uep_registers_t;

#define USB_UEP_NUMBER 16

/* USB register API structure */
typedef struct
{
  __I   uint8_t                        Reserved1[0x40];
  __IO  uint32_t                       USB_UOTGIR;         /* Offset: 0x40 (R/W  32) USB OTG Interrupt Status Register */
  __IO  uint32_t                       USB_UOTGIRCLR;      /* Offset: 0x44 (R/W  32)  */
  __IO  uint32_t                       USB_UOTGIRSET;      /* Offset: 0x48 (R/W  32)  */
  __IO  uint32_t                       USB_UOTGIRINV;      /* Offset: 0x4C (R/W  32)  */
  __IO  uint32_t                       USB_UOTGIE;         /* Offset: 0x50 (R/W  32) USB OTG Interrupt Enable Register */
  __IO  uint32_t                       USB_UOTGIECLR;      /* Offset: 0x54 (R/W  32)  */
  __IO  uint32_t                       USB_UOTGIESET;      /* Offset: 0x58 (R/W  32)  */
  __IO  uint32_t                       USB_UOTGIEINV;      /* Offset: 0x5C (R/W  32)  */
  __IO  uint32_t                       USB_UOTGSTAT;       /* Offset: 0x60 (R/W  32) USB OTG Status Register */
  __I   uint8_t                        Reserved2[0x0C];
  __IO  uint32_t                       USB_UOTGCON;        /* Offset: 0x70 (R/W  32) USB OTG Control Register */
  __IO  uint32_t                       USB_UOTGCONCLR;     /* Offset: 0x74 (R/W  32)  */
  __IO  uint32_t                       USB_UOTGCONSET;     /* Offset: 0x78 (R/W  32)  */
  __IO  uint32_t                       USB_UOTGCONINV;     /* Offset: 0x7C (R/W  32)  */
  __IO  uint32_t                       USB_UPWRC;          /* Offset: 0x80 (R/W  32) USB Power Control Register */
  __IO  uint32_t                       USB_UPWRCCLR;       /* Offset: 0x84 (R/W  32)  */
  __IO  uint32_t                       USB_UPWRCSET;       /* Offset: 0x88 (R/W  32)  */
  __IO  uint32_t                       USB_UPWRCINV;       /* Offset: 0x8C (R/W  32)  */
  __I   uint8_t                        Reserved3[0x170];
  __IO  uint32_t                       USB_UIR;            /* Offset: 0x200 (R/W  32) USB Interrupt Register */
  __IO  uint32_t                       USB_UIRCLR;         /* Offset: 0x204 (R/W  32)  */
  __I   uint8_t                        Reserved4[0x08];
  __IO  uint32_t                       USB_UIE;            /* Offset: 0x210 (R/W  32) USB Interrupt Enable Register */
  __IO  uint32_t                       USB_UIECLR;         /* Offset: 0x214 (R/W  32)  */
  __IO  uint32_t                       USB_UIESET;         /* Offset: 0x218 (R/W  32)  */
  __IO  uint32_t                       USB_UIEINV;         /* Offset: 0x21C (R/W  32)  */
  __IO  uint32_t                       USB_UEIR;           /* Offset: 0x220 (R/W  32) USB Error Interrupt Status Register */
  __IO  uint32_t                       USB_UEIRCLR;        /* Offset: 0x224 (R/W  32)  */
  __I   uint8_t                        Reserved5[0x08];
  __IO  uint32_t                       USB_UEIE;           /* Offset: 0x230 (R/W  32) USB Error Interrupt Enable Register */
  __IO  uint32_t                       USB_UEIECLR;        /* Offset: 0x234 (R/W  32)  */
  __IO  uint32_t                       USB_UEIESET;        /* Offset: 0x238 (R/W  32)  */
  __IO  uint32_t                       USB_UEIEINV;        /* Offset: 0x23C (R/W  32)  */
  __I   uint32_t                       USB_USTAT;          /* Offset: 0x240 (R/   32) USB Status Register */
  __IO  uint32_t                       USB_USTATCLR;       /* Offset: 0x244 (R/W  32)  */
  __IO  uint32_t                       USB_USTATSET;       /* Offset: 0x248 (R/W  32)  */
  __IO  uint32_t                       USB_USTATINV;       /* Offset: 0x24C (R/W  32)  */
  __IO  uint32_t                       USB_UCON;           /* Offset: 0x250 (R/W  32) USB Control Register */
  __IO  uint32_t                       USB_UCONCLR;        /* Offset: 0x254 (R/W  32)  */
  __IO  uint32_t                       USB_UCONSET;        /* Offset: 0x258 (R/W  32)  */
  __IO  uint32_t                       USB_UCONINV;        /* Offset: 0x25C (R/W  32)  */
  __IO  uint32_t                       USB_UADDR;          /* Offset: 0x260 (R/W  32) USB Address Register */
  __IO  uint32_t                       USB_UADDRCLR;       /* Offset: 0x264 (R/W  32)  */
  __IO  uint32_t                       USB_UADDRSET;       /* Offset: 0x268 (R/W  32)  */
  __IO  uint32_t                       USB_UADDRINV;       /* Offset: 0x26C (R/W  32)  */
  __IO  uint32_t                       USB_UBDTP1;         /* Offset: 0x270 (R/W  32) USB BDT Page 1 Register */
  __IO  uint32_t                       USB_UBDTP1CLR;      /* Offset: 0x274 (R/W  32)  */
  __IO  uint32_t                       USB_UBDTP1SET;      /* Offset: 0x278 (R/W  32)  */
  __IO  uint32_t                       USB_UBDTP1INV;      /* Offset: 0x27C (R/W  32)  */
  __I   uint32_t                       USB_UFRML;          /* Offset: 0x280 (R/   32) USB Frame Number Low Register */
  __IO  uint32_t                       USB_UFRMLCLR;       /* Offset: 0x284 (R/W  32)  */
  __IO  uint32_t                       USB_UFRMLSET;       /* Offset: 0x288 (R/W  32)  */
  __IO  uint32_t                       USB_UFRMLINV;       /* Offset: 0x28C (R/W  32)  */
  __I   uint32_t                       USB_UFRMH;          /* Offset: 0x290 (R/   32) USB Frame Number High Register */
  __IO  uint32_t                       USB_UFRMHCLR;       /* Offset: 0x294 (R/W  32)  */
  __IO  uint32_t                       USB_UFRMHSET;       /* Offset: 0x298 (R/W  32)  */
  __IO  uint32_t                       USB_UFRMHINV;       /* Offset: 0x29C (R/W  32)  */
  __IO  uint32_t                       USB_UTOK;           /* Offset: 0x2A0 (R/W  32) USB Token Register */
  __IO  uint32_t                       USB_UTOKCLR;        /* Offset: 0x2A4 (R/W  32)  */
  __IO  uint32_t                       USB_UTOKSET;        /* Offset: 0x2A8 (R/W  32)  */
  __IO  uint32_t                       USB_UTOKINV;        /* Offset: 0x2AC (R/W  32)  */
  __IO  uint32_t                       USB_USOF;           /* Offset: 0x2B0 (R/W  32) USB SOF Threshold Register */
  __IO  uint32_t                       USB_USOFCLR;        /* Offset: 0x2B4 (R/W  32)  */
  __IO  uint32_t                       USB_USOFSET;        /* Offset: 0x2B8 (R/W  32)  */
  __IO  uint32_t                       USB_USOFINV;        /* Offset: 0x2BC (R/W  32)  */
  __IO  uint32_t                       USB_UBDTP2;         /* Offset: 0x2C0 (R/W  32) USB BDT PAGE 2 Register */
  __IO  uint32_t                       USB_UBDTP2CLR;      /* Offset: 0x2C4 (R/W  32)  */
  __IO  uint32_t                       USB_UBDTP2SET;      /* Offset: 0x2C8 (R/W  32)  */
  __IO  uint32_t                       USB_UBDTP2INV;      /* Offset: 0x2CC (R/W  32)  */
  __IO  uint32_t                       USB_UBDTP3;         /* Offset: 0x2D0 (R/W  32) USB BDT PAGE 3 Register */
  __IO  uint32_t                       USB_UBDTP3CLR;      /* Offset: 0x2D4 (R/W  32)  */
  __IO  uint32_t                       USB_UBDTP3SET;      /* Offset: 0x2D8 (R/W  32)  */
  __IO  uint32_t                       USB_UBDTP3INV;      /* Offset: 0x2DC (R/W  32)  */
  __IO  uint32_t                       USB_UCNFG1;         /* Offset: 0x2E0 (R/W  32) USB Configuration 1 Register */
  __IO  uint32_t                       USB_UCNFG1CLR;      /* Offset: 0x2E4 (R/W  32)  */
  __IO  uint32_t                       USB_UCNFG1SET;      /* Offset: 0x2E8 (R/W  32)  */
  __IO  uint32_t                       USB_UCNFG1INV;      /* Offset: 0x2EC (R/W  32)  */
  __I   uint8_t                        Reserved6[0x10];
        usb_uep_registers_t            USB_UEP[USB_UEP_NUMBER]; /* Offset: 0x300  */
} usb_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32WM_BZ6_USB_COMPONENT_H_ */
