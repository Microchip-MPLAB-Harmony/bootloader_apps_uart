/*
 * Component description for SFR
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
#ifndef _SAMA7G5_SFR_COMPONENT_H_
#define _SAMA7G5_SFR_COMPONENT_H_

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR SFR                       */
/* ************************************************************************** */

/* -------- SFR_OHCIICR : (SFR Offset: 0x00) (R/W 32) OHCI Interrupt Configuration Register -------- */
#define SFR_OHCIICR_RESETVALUE                _UINT32_(0x00)                                       /*  (SFR_OHCIICR) OHCI Interrupt Configuration Register  Reset Value */

#define SFR_OHCIICR_ARIE_Pos                  _UINT32_(0)                                          /* (SFR_OHCIICR) OHCI Asynchronous Resume Interrupt Enable Position */
#define SFR_OHCIICR_ARIE_Msk                  (_UINT32_(0x1) << SFR_OHCIICR_ARIE_Pos)              /* (SFR_OHCIICR) OHCI Asynchronous Resume Interrupt Enable Mask */
#define SFR_OHCIICR_ARIE(value)               (SFR_OHCIICR_ARIE_Msk & (_UINT32_(value) << SFR_OHCIICR_ARIE_Pos)) /* Assignment of value for ARIE in the SFR_OHCIICR register */
#define   SFR_OHCIICR_ARIE_0_Val              _UINT32_(0x0)                                        /* (SFR_OHCIICR) Interrupt is disabled.  */
#define   SFR_OHCIICR_ARIE_1_Val              _UINT32_(0x1)                                        /* (SFR_OHCIICR) Interrupt is enabled.  */
#define SFR_OHCIICR_ARIE_0                    (SFR_OHCIICR_ARIE_0_Val << SFR_OHCIICR_ARIE_Pos)     /* (SFR_OHCIICR) Interrupt is disabled. Position */
#define SFR_OHCIICR_ARIE_1                    (SFR_OHCIICR_ARIE_1_Val << SFR_OHCIICR_ARIE_Pos)     /* (SFR_OHCIICR) Interrupt is enabled. Position */
#define SFR_OHCIICR_APPSTART_Pos              _UINT32_(1)                                          /* (SFR_OHCIICR) Reserved Position */
#define SFR_OHCIICR_APPSTART_Msk              (_UINT32_(0x1) << SFR_OHCIICR_APPSTART_Pos)          /* (SFR_OHCIICR) Reserved Mask */
#define SFR_OHCIICR_APPSTART(value)           (SFR_OHCIICR_APPSTART_Msk & (_UINT32_(value) << SFR_OHCIICR_APPSTART_Pos)) /* Assignment of value for APPSTART in the SFR_OHCIICR register */
#define SFR_OHCIICR_SUSPEND0_Pos              _UINT32_(8)                                          /* (SFR_OHCIICR) USB PORT 0 Position */
#define SFR_OHCIICR_SUSPEND0_Msk              (_UINT32_(0x1) << SFR_OHCIICR_SUSPEND0_Pos)          /* (SFR_OHCIICR) USB PORT 0 Mask */
#define SFR_OHCIICR_SUSPEND0(value)           (SFR_OHCIICR_SUSPEND0_Msk & (_UINT32_(value) << SFR_OHCIICR_SUSPEND0_Pos)) /* Assignment of value for SUSPEND0 in the SFR_OHCIICR register */
#define   SFR_OHCIICR_SUSPEND0_0_Val          _UINT32_(0x0)                                        /* (SFR_OHCIICR) Suspends controlled by EHCI-OCHI.  */
#define   SFR_OHCIICR_SUSPEND0_1_Val          _UINT32_(0x1)                                        /* (SFR_OHCIICR) Forces the suspend for PORTx.  */
#define SFR_OHCIICR_SUSPEND0_0                (SFR_OHCIICR_SUSPEND0_0_Val << SFR_OHCIICR_SUSPEND0_Pos) /* (SFR_OHCIICR) Suspends controlled by EHCI-OCHI. Position */
#define SFR_OHCIICR_SUSPEND0_1                (SFR_OHCIICR_SUSPEND0_1_Val << SFR_OHCIICR_SUSPEND0_Pos) /* (SFR_OHCIICR) Forces the suspend for PORTx. Position */
#define SFR_OHCIICR_SUSPEND1_Pos              _UINT32_(9)                                          /* (SFR_OHCIICR) USB PORT 1 Position */
#define SFR_OHCIICR_SUSPEND1_Msk              (_UINT32_(0x1) << SFR_OHCIICR_SUSPEND1_Pos)          /* (SFR_OHCIICR) USB PORT 1 Mask */
#define SFR_OHCIICR_SUSPEND1(value)           (SFR_OHCIICR_SUSPEND1_Msk & (_UINT32_(value) << SFR_OHCIICR_SUSPEND1_Pos)) /* Assignment of value for SUSPEND1 in the SFR_OHCIICR register */
#define   SFR_OHCIICR_SUSPEND1_0_Val          _UINT32_(0x0)                                        /* (SFR_OHCIICR) Suspends controlled by EHCI-OCHI.  */
#define   SFR_OHCIICR_SUSPEND1_1_Val          _UINT32_(0x1)                                        /* (SFR_OHCIICR) Forces the suspend for PORTx.  */
#define SFR_OHCIICR_SUSPEND1_0                (SFR_OHCIICR_SUSPEND1_0_Val << SFR_OHCIICR_SUSPEND1_Pos) /* (SFR_OHCIICR) Suspends controlled by EHCI-OCHI. Position */
#define SFR_OHCIICR_SUSPEND1_1                (SFR_OHCIICR_SUSPEND1_1_Val << SFR_OHCIICR_SUSPEND1_Pos) /* (SFR_OHCIICR) Forces the suspend for PORTx. Position */
#define SFR_OHCIICR_SUSPEND2_Pos              _UINT32_(10)                                         /* (SFR_OHCIICR) USB PORT 2 Position */
#define SFR_OHCIICR_SUSPEND2_Msk              (_UINT32_(0x1) << SFR_OHCIICR_SUSPEND2_Pos)          /* (SFR_OHCIICR) USB PORT 2 Mask */
#define SFR_OHCIICR_SUSPEND2(value)           (SFR_OHCIICR_SUSPEND2_Msk & (_UINT32_(value) << SFR_OHCIICR_SUSPEND2_Pos)) /* Assignment of value for SUSPEND2 in the SFR_OHCIICR register */
#define   SFR_OHCIICR_SUSPEND2_0_Val          _UINT32_(0x0)                                        /* (SFR_OHCIICR) Suspends controlled by EHCI-OCHI.  */
#define   SFR_OHCIICR_SUSPEND2_1_Val          _UINT32_(0x1)                                        /* (SFR_OHCIICR) Forces the suspend for PORTx.  */
#define SFR_OHCIICR_SUSPEND2_0                (SFR_OHCIICR_SUSPEND2_0_Val << SFR_OHCIICR_SUSPEND2_Pos) /* (SFR_OHCIICR) Suspends controlled by EHCI-OCHI. Position */
#define SFR_OHCIICR_SUSPEND2_1                (SFR_OHCIICR_SUSPEND2_1_Val << SFR_OHCIICR_SUSPEND2_Pos) /* (SFR_OHCIICR) Forces the suspend for PORTx. Position */
#define SFR_OHCIICR_Msk                       _UINT32_(0x00000703)                                 /* (SFR_OHCIICR) Register Mask  */

#define SFR_OHCIICR_SUSPEND_Pos               _UINT32_(8)                                          /* (SFR_OHCIICR Position) USB PORT 2 */
#define SFR_OHCIICR_SUSPEND_Msk               (_UINT32_(0x7) << SFR_OHCIICR_SUSPEND_Pos)           /* (SFR_OHCIICR Mask) SUSPEND */
#define SFR_OHCIICR_SUSPEND(value)            (SFR_OHCIICR_SUSPEND_Msk & (_UINT32_(value) << SFR_OHCIICR_SUSPEND_Pos)) 

/* -------- SFR_OHCIISR : (SFR Offset: 0x04) ( R/ 32) OHCI Interrupt Status Register -------- */
#define SFR_OHCIISR_RESETVALUE                _UINT32_(0x00)                                       /*  (SFR_OHCIISR) OHCI Interrupt Status Register  Reset Value */

#define SFR_OHCIISR_RIS0_Pos                  _UINT32_(0)                                          /* (SFR_OHCIISR) OHCI Resume Interrupt Status Port 0 Position */
#define SFR_OHCIISR_RIS0_Msk                  (_UINT32_(0x1) << SFR_OHCIISR_RIS0_Pos)              /* (SFR_OHCIISR) OHCI Resume Interrupt Status Port 0 Mask */
#define SFR_OHCIISR_RIS0(value)               (SFR_OHCIISR_RIS0_Msk & (_UINT32_(value) << SFR_OHCIISR_RIS0_Pos)) /* Assignment of value for RIS0 in the SFR_OHCIISR register */
#define   SFR_OHCIISR_RIS0_0_Val              _UINT32_(0x0)                                        /* (SFR_OHCIISR) OHCI port resume not detected.  */
#define   SFR_OHCIISR_RIS0_1_Val              _UINT32_(0x1)                                        /* (SFR_OHCIISR) OHCI port resume detected.  */
#define SFR_OHCIISR_RIS0_0                    (SFR_OHCIISR_RIS0_0_Val << SFR_OHCIISR_RIS0_Pos)     /* (SFR_OHCIISR) OHCI port resume not detected. Position */
#define SFR_OHCIISR_RIS0_1                    (SFR_OHCIISR_RIS0_1_Val << SFR_OHCIISR_RIS0_Pos)     /* (SFR_OHCIISR) OHCI port resume detected. Position */
#define SFR_OHCIISR_RIS1_Pos                  _UINT32_(1)                                          /* (SFR_OHCIISR) OHCI Resume Interrupt Status Port 1 Position */
#define SFR_OHCIISR_RIS1_Msk                  (_UINT32_(0x1) << SFR_OHCIISR_RIS1_Pos)              /* (SFR_OHCIISR) OHCI Resume Interrupt Status Port 1 Mask */
#define SFR_OHCIISR_RIS1(value)               (SFR_OHCIISR_RIS1_Msk & (_UINT32_(value) << SFR_OHCIISR_RIS1_Pos)) /* Assignment of value for RIS1 in the SFR_OHCIISR register */
#define   SFR_OHCIISR_RIS1_0_Val              _UINT32_(0x0)                                        /* (SFR_OHCIISR) OHCI port resume not detected.  */
#define   SFR_OHCIISR_RIS1_1_Val              _UINT32_(0x1)                                        /* (SFR_OHCIISR) OHCI port resume detected.  */
#define SFR_OHCIISR_RIS1_0                    (SFR_OHCIISR_RIS1_0_Val << SFR_OHCIISR_RIS1_Pos)     /* (SFR_OHCIISR) OHCI port resume not detected. Position */
#define SFR_OHCIISR_RIS1_1                    (SFR_OHCIISR_RIS1_1_Val << SFR_OHCIISR_RIS1_Pos)     /* (SFR_OHCIISR) OHCI port resume detected. Position */
#define SFR_OHCIISR_RIS2_Pos                  _UINT32_(2)                                          /* (SFR_OHCIISR) OHCI Resume Interrupt Status Port 2 Position */
#define SFR_OHCIISR_RIS2_Msk                  (_UINT32_(0x1) << SFR_OHCIISR_RIS2_Pos)              /* (SFR_OHCIISR) OHCI Resume Interrupt Status Port 2 Mask */
#define SFR_OHCIISR_RIS2(value)               (SFR_OHCIISR_RIS2_Msk & (_UINT32_(value) << SFR_OHCIISR_RIS2_Pos)) /* Assignment of value for RIS2 in the SFR_OHCIISR register */
#define   SFR_OHCIISR_RIS2_0_Val              _UINT32_(0x0)                                        /* (SFR_OHCIISR) OHCI port resume not detected.  */
#define   SFR_OHCIISR_RIS2_1_Val              _UINT32_(0x1)                                        /* (SFR_OHCIISR) OHCI port resume detected.  */
#define SFR_OHCIISR_RIS2_0                    (SFR_OHCIISR_RIS2_0_Val << SFR_OHCIISR_RIS2_Pos)     /* (SFR_OHCIISR) OHCI port resume not detected. Position */
#define SFR_OHCIISR_RIS2_1                    (SFR_OHCIISR_RIS2_1_Val << SFR_OHCIISR_RIS2_Pos)     /* (SFR_OHCIISR) OHCI port resume detected. Position */
#define SFR_OHCIISR_Msk                       _UINT32_(0x00000007)                                 /* (SFR_OHCIISR) Register Mask  */

#define SFR_OHCIISR_RIS_Pos                   _UINT32_(0)                                          /* (SFR_OHCIISR Position) OHCI Resume Interrupt Status Port 2 */
#define SFR_OHCIISR_RIS_Msk                   (_UINT32_(0x7) << SFR_OHCIISR_RIS_Pos)               /* (SFR_OHCIISR Mask) RIS */
#define SFR_OHCIISR_RIS(value)                (SFR_OHCIISR_RIS_Msk & (_UINT32_(value) << SFR_OHCIISR_RIS_Pos)) 

/* -------- SFR_WPMR : (SFR Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define SFR_WPMR_RESETVALUE                   _UINT32_(0x00)                                       /*  (SFR_WPMR) Write Protection Mode Register  Reset Value */

#define SFR_WPMR_WPEN_Pos                     _UINT32_(0)                                          /* (SFR_WPMR) Write Protection Enable Position */
#define SFR_WPMR_WPEN_Msk                     (_UINT32_(0x1) << SFR_WPMR_WPEN_Pos)                 /* (SFR_WPMR) Write Protection Enable Mask */
#define SFR_WPMR_WPEN(value)                  (SFR_WPMR_WPEN_Msk & (_UINT32_(value) << SFR_WPMR_WPEN_Pos)) /* Assignment of value for WPEN in the SFR_WPMR register */
#define   SFR_WPMR_WPEN_0_Val                 _UINT32_(0x0)                                        /* (SFR_WPMR) Disables the write protection if WPKEY value corresponds to 0x534652 ("SFR" in ASCII).  */
#define   SFR_WPMR_WPEN_1_Val                 _UINT32_(0x1)                                        /* (SFR_WPMR) Enables the write protection if WPKEY value corresponds to 0x534652 ("SFR" in ASCII).  */
#define SFR_WPMR_WPEN_0                       (SFR_WPMR_WPEN_0_Val << SFR_WPMR_WPEN_Pos)           /* (SFR_WPMR) Disables the write protection if WPKEY value corresponds to 0x534652 ("SFR" in ASCII). Position */
#define SFR_WPMR_WPEN_1                       (SFR_WPMR_WPEN_1_Val << SFR_WPMR_WPEN_Pos)           /* (SFR_WPMR) Enables the write protection if WPKEY value corresponds to 0x534652 ("SFR" in ASCII). Position */
#define SFR_WPMR_WPKEY_Pos                    _UINT32_(8)                                          /* (SFR_WPMR) Write Protection Key Position */
#define SFR_WPMR_WPKEY_Msk                    (_UINT32_(0xFFFFFF) << SFR_WPMR_WPKEY_Pos)           /* (SFR_WPMR) Write Protection Key Mask */
#define SFR_WPMR_WPKEY(value)                 (SFR_WPMR_WPKEY_Msk & (_UINT32_(value) << SFR_WPMR_WPKEY_Pos)) /* Assignment of value for WPKEY in the SFR_WPMR register */
#define   SFR_WPMR_WPKEY_PASSWD_Val           _UINT32_(0x534652)                                   /* (SFR_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0.  */
#define SFR_WPMR_WPKEY_PASSWD                 (SFR_WPMR_WPKEY_PASSWD_Val << SFR_WPMR_WPKEY_Pos)    /* (SFR_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0. Position */
#define SFR_WPMR_Msk                          _UINT32_(0xFFFFFF01)                                 /* (SFR_WPMR) Register Mask  */


/* -------- SFR_WPSR : (SFR Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define SFR_WPSR_RESETVALUE                   _UINT32_(0x00)                                       /*  (SFR_WPSR) Write Protection Status Register  Reset Value */

#define SFR_WPSR_WPVS_Pos                     _UINT32_(0)                                          /* (SFR_WPSR) Write Protection Violation Status Position */
#define SFR_WPSR_WPVS_Msk                     (_UINT32_(0x1) << SFR_WPSR_WPVS_Pos)                 /* (SFR_WPSR) Write Protection Violation Status Mask */
#define SFR_WPSR_WPVS(value)                  (SFR_WPSR_WPVS_Msk & (_UINT32_(value) << SFR_WPSR_WPVS_Pos)) /* Assignment of value for WPVS in the SFR_WPSR register */
#define   SFR_WPSR_WPVS_0_Val                 _UINT32_(0x0)                                        /* (SFR_WPSR) No write protection violation has occurred since the last read of SFR_WPSR.  */
#define   SFR_WPSR_WPVS_1_Val                 _UINT32_(0x1)                                        /* (SFR_WPSR) A write protection violation has occurred since the last read of SFR_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPSRC.  */
#define SFR_WPSR_WPVS_0                       (SFR_WPSR_WPVS_0_Val << SFR_WPSR_WPVS_Pos)           /* (SFR_WPSR) No write protection violation has occurred since the last read of SFR_WPSR. Position */
#define SFR_WPSR_WPVS_1                       (SFR_WPSR_WPVS_1_Val << SFR_WPSR_WPVS_Pos)           /* (SFR_WPSR) A write protection violation has occurred since the last read of SFR_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPSRC. Position */
#define SFR_WPSR_WPSRC_Pos                    _UINT32_(8)                                          /* (SFR_WPSR) Write Protection Source Position */
#define SFR_WPSR_WPSRC_Msk                    (_UINT32_(0xFFFF) << SFR_WPSR_WPSRC_Pos)             /* (SFR_WPSR) Write Protection Source Mask */
#define SFR_WPSR_WPSRC(value)                 (SFR_WPSR_WPSRC_Msk & (_UINT32_(value) << SFR_WPSR_WPSRC_Pos)) /* Assignment of value for WPSRC in the SFR_WPSR register */
#define SFR_WPSR_Msk                          _UINT32_(0x00FFFF01)                                 /* (SFR_WPSR) Register Mask  */


/* -------- SFR_EHCIOHCI : (SFR Offset: 0x2020) (R/W 32) EHCI OHCI Register -------- */
#define SFR_EHCIOHCI_RESETVALUE               _UINT32_(0x00)                                       /*  (SFR_EHCIOHCI) EHCI OHCI Register  Reset Value */

#define SFR_EHCIOHCI_EHCICLK_Pos              _UINT32_(0)                                          /* (SFR_EHCIOHCI) EHCI Clock Mode Position */
#define SFR_EHCIOHCI_EHCICLK_Msk              (_UINT32_(0x1) << SFR_EHCIOHCI_EHCICLK_Pos)          /* (SFR_EHCIOHCI) EHCI Clock Mode Mask */
#define SFR_EHCIOHCI_EHCICLK(value)           (SFR_EHCIOHCI_EHCICLK_Msk & (_UINT32_(value) << SFR_EHCIOHCI_EHCICLK_Pos)) /* Assignment of value for EHCICLK in the SFR_EHCIOHCI register */
#define   SFR_EHCIOHCI_EHCICLK_0_Val          _UINT32_(0x0)                                        /* (SFR_EHCIOHCI) FREECLK of Port A is used to drive the EHCI clock.  */
#define   SFR_EHCIOHCI_EHCICLK_1_Val          _UINT32_(0x1)                                        /* (SFR_EHCIOHCI) PHYCLK of Port A is used to drive the EHCI clock.  */
#define SFR_EHCIOHCI_EHCICLK_0                (SFR_EHCIOHCI_EHCICLK_0_Val << SFR_EHCIOHCI_EHCICLK_Pos) /* (SFR_EHCIOHCI) FREECLK of Port A is used to drive the EHCI clock. Position */
#define SFR_EHCIOHCI_EHCICLK_1                (SFR_EHCIOHCI_EHCICLK_1_Val << SFR_EHCIOHCI_EHCICLK_Pos) /* (SFR_EHCIOHCI) PHYCLK of Port A is used to drive the EHCI clock. Position */
#define SFR_EHCIOHCI_Msk                      _UINT32_(0x00000001)                                 /* (SFR_EHCIOHCI) Register Mask  */


/* -------- SFR_UDDRC : (SFR Offset: 0x202C) (R/W 32) UDDRC Register -------- */
#define SFR_UDDRC_RESETVALUE                  _UINT32_(0x00)                                       /*  (SFR_UDDRC) UDDRC Register  Reset Value */

#define SFR_UDDRC_DIS_DECERR_Pos              _UINT32_(0)                                          /* (SFR_UDDRC) Disable Decode Error Position */
#define SFR_UDDRC_DIS_DECERR_Msk              (_UINT32_(0x1) << SFR_UDDRC_DIS_DECERR_Pos)          /* (SFR_UDDRC) Disable Decode Error Mask */
#define SFR_UDDRC_DIS_DECERR(value)           (SFR_UDDRC_DIS_DECERR_Msk & (_UINT32_(value) << SFR_UDDRC_DIS_DECERR_Pos)) /* Assignment of value for DIS_DECERR in the SFR_UDDRC register */
#define   SFR_UDDRC_DIS_DECERR_0_Val          _UINT32_(0x0)                                        /* (SFR_UDDRC) Enables decode error when reading a non-existing register in the DDR controller Configuration Address Space.  */
#define   SFR_UDDRC_DIS_DECERR_1_Val          _UINT32_(0x1)                                        /* (SFR_UDDRC) Disables decode error when reading a non-existing register in the DDR controller Configuration Address Space.  */
#define SFR_UDDRC_DIS_DECERR_0                (SFR_UDDRC_DIS_DECERR_0_Val << SFR_UDDRC_DIS_DECERR_Pos) /* (SFR_UDDRC) Enables decode error when reading a non-existing register in the DDR controller Configuration Address Space. Position */
#define SFR_UDDRC_DIS_DECERR_1                (SFR_UDDRC_DIS_DECERR_1_Val << SFR_UDDRC_DIS_DECERR_Pos) /* (SFR_UDDRC) Disables decode error when reading a non-existing register in the DDR controller Configuration Address Space. Position */
#define SFR_UDDRC_Msk                         _UINT32_(0x00000001)                                 /* (SFR_UDDRC) Register Mask  */


/* -------- SFR_CAN_SRAM_SEL : (SFR Offset: 0x2030) (R/W 32) SFR CAN SRAM Selection Register -------- */
#define SFR_CAN_SRAM_SEL_RESETVALUE           _UINT32_(0x00)                                       /*  (SFR_CAN_SRAM_SEL) SFR CAN SRAM Selection Register  Reset Value */

#define SFR_CAN_SRAM_SEL_UPPER_CAN0_Pos       _UINT32_(0)                                          /* (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN0_Msk       (_UINT32_(0x1) << SFR_CAN_SRAM_SEL_UPPER_CAN0_Pos)   /* (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Mask */
#define SFR_CAN_SRAM_SEL_UPPER_CAN0(value)    (SFR_CAN_SRAM_SEL_UPPER_CAN0_Msk & (_UINT32_(value) << SFR_CAN_SRAM_SEL_UPPER_CAN0_Pos)) /* Assignment of value for UPPER_CAN0 in the SFR_CAN_SRAM_SEL register */
#define   SFR_CAN_SRAM_SEL_UPPER_CAN0_0_Val   _UINT32_(0x0)                                        /* (SFR_CAN_SRAM_SEL) CANx accesses the lower 64K SRAM.  */
#define   SFR_CAN_SRAM_SEL_UPPER_CAN0_1_Val   _UINT32_(0x1)                                        /* (SFR_CAN_SRAM_SEL) CANx accesses the upper 64K SRAM.  */
#define SFR_CAN_SRAM_SEL_UPPER_CAN0_0         (SFR_CAN_SRAM_SEL_UPPER_CAN0_0_Val << SFR_CAN_SRAM_SEL_UPPER_CAN0_Pos) /* (SFR_CAN_SRAM_SEL) CANx accesses the lower 64K SRAM. Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN0_1         (SFR_CAN_SRAM_SEL_UPPER_CAN0_1_Val << SFR_CAN_SRAM_SEL_UPPER_CAN0_Pos) /* (SFR_CAN_SRAM_SEL) CANx accesses the upper 64K SRAM. Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN1_Pos       _UINT32_(1)                                          /* (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN1_Msk       (_UINT32_(0x1) << SFR_CAN_SRAM_SEL_UPPER_CAN1_Pos)   /* (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Mask */
#define SFR_CAN_SRAM_SEL_UPPER_CAN1(value)    (SFR_CAN_SRAM_SEL_UPPER_CAN1_Msk & (_UINT32_(value) << SFR_CAN_SRAM_SEL_UPPER_CAN1_Pos)) /* Assignment of value for UPPER_CAN1 in the SFR_CAN_SRAM_SEL register */
#define   SFR_CAN_SRAM_SEL_UPPER_CAN1_0_Val   _UINT32_(0x0)                                        /* (SFR_CAN_SRAM_SEL) CANx accesses the lower 64K SRAM.  */
#define   SFR_CAN_SRAM_SEL_UPPER_CAN1_1_Val   _UINT32_(0x1)                                        /* (SFR_CAN_SRAM_SEL) CANx accesses the upper 64K SRAM.  */
#define SFR_CAN_SRAM_SEL_UPPER_CAN1_0         (SFR_CAN_SRAM_SEL_UPPER_CAN1_0_Val << SFR_CAN_SRAM_SEL_UPPER_CAN1_Pos) /* (SFR_CAN_SRAM_SEL) CANx accesses the lower 64K SRAM. Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN1_1         (SFR_CAN_SRAM_SEL_UPPER_CAN1_1_Val << SFR_CAN_SRAM_SEL_UPPER_CAN1_Pos) /* (SFR_CAN_SRAM_SEL) CANx accesses the upper 64K SRAM. Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN2_Pos       _UINT32_(2)                                          /* (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN2_Msk       (_UINT32_(0x1) << SFR_CAN_SRAM_SEL_UPPER_CAN2_Pos)   /* (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Mask */
#define SFR_CAN_SRAM_SEL_UPPER_CAN2(value)    (SFR_CAN_SRAM_SEL_UPPER_CAN2_Msk & (_UINT32_(value) << SFR_CAN_SRAM_SEL_UPPER_CAN2_Pos)) /* Assignment of value for UPPER_CAN2 in the SFR_CAN_SRAM_SEL register */
#define   SFR_CAN_SRAM_SEL_UPPER_CAN2_0_Val   _UINT32_(0x0)                                        /* (SFR_CAN_SRAM_SEL) CANx accesses the lower 64K SRAM.  */
#define   SFR_CAN_SRAM_SEL_UPPER_CAN2_1_Val   _UINT32_(0x1)                                        /* (SFR_CAN_SRAM_SEL) CANx accesses the upper 64K SRAM.  */
#define SFR_CAN_SRAM_SEL_UPPER_CAN2_0         (SFR_CAN_SRAM_SEL_UPPER_CAN2_0_Val << SFR_CAN_SRAM_SEL_UPPER_CAN2_Pos) /* (SFR_CAN_SRAM_SEL) CANx accesses the lower 64K SRAM. Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN2_1         (SFR_CAN_SRAM_SEL_UPPER_CAN2_1_Val << SFR_CAN_SRAM_SEL_UPPER_CAN2_Pos) /* (SFR_CAN_SRAM_SEL) CANx accesses the upper 64K SRAM. Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN3_Pos       _UINT32_(3)                                          /* (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN3_Msk       (_UINT32_(0x1) << SFR_CAN_SRAM_SEL_UPPER_CAN3_Pos)   /* (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Mask */
#define SFR_CAN_SRAM_SEL_UPPER_CAN3(value)    (SFR_CAN_SRAM_SEL_UPPER_CAN3_Msk & (_UINT32_(value) << SFR_CAN_SRAM_SEL_UPPER_CAN3_Pos)) /* Assignment of value for UPPER_CAN3 in the SFR_CAN_SRAM_SEL register */
#define   SFR_CAN_SRAM_SEL_UPPER_CAN3_0_Val   _UINT32_(0x0)                                        /* (SFR_CAN_SRAM_SEL) CANx accesses the lower 64K SRAM.  */
#define   SFR_CAN_SRAM_SEL_UPPER_CAN3_1_Val   _UINT32_(0x1)                                        /* (SFR_CAN_SRAM_SEL) CANx accesses the upper 64K SRAM.  */
#define SFR_CAN_SRAM_SEL_UPPER_CAN3_0         (SFR_CAN_SRAM_SEL_UPPER_CAN3_0_Val << SFR_CAN_SRAM_SEL_UPPER_CAN3_Pos) /* (SFR_CAN_SRAM_SEL) CANx accesses the lower 64K SRAM. Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN3_1         (SFR_CAN_SRAM_SEL_UPPER_CAN3_1_Val << SFR_CAN_SRAM_SEL_UPPER_CAN3_Pos) /* (SFR_CAN_SRAM_SEL) CANx accesses the upper 64K SRAM. Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN4_Pos       _UINT32_(4)                                          /* (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN4_Msk       (_UINT32_(0x1) << SFR_CAN_SRAM_SEL_UPPER_CAN4_Pos)   /* (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Mask */
#define SFR_CAN_SRAM_SEL_UPPER_CAN4(value)    (SFR_CAN_SRAM_SEL_UPPER_CAN4_Msk & (_UINT32_(value) << SFR_CAN_SRAM_SEL_UPPER_CAN4_Pos)) /* Assignment of value for UPPER_CAN4 in the SFR_CAN_SRAM_SEL register */
#define   SFR_CAN_SRAM_SEL_UPPER_CAN4_0_Val   _UINT32_(0x0)                                        /* (SFR_CAN_SRAM_SEL) CANx accesses the lower 64K SRAM.  */
#define   SFR_CAN_SRAM_SEL_UPPER_CAN4_1_Val   _UINT32_(0x1)                                        /* (SFR_CAN_SRAM_SEL) CANx accesses the upper 64K SRAM.  */
#define SFR_CAN_SRAM_SEL_UPPER_CAN4_0         (SFR_CAN_SRAM_SEL_UPPER_CAN4_0_Val << SFR_CAN_SRAM_SEL_UPPER_CAN4_Pos) /* (SFR_CAN_SRAM_SEL) CANx accesses the lower 64K SRAM. Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN4_1         (SFR_CAN_SRAM_SEL_UPPER_CAN4_1_Val << SFR_CAN_SRAM_SEL_UPPER_CAN4_Pos) /* (SFR_CAN_SRAM_SEL) CANx accesses the upper 64K SRAM. Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN5_Pos       _UINT32_(5)                                          /* (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN5_Msk       (_UINT32_(0x1) << SFR_CAN_SRAM_SEL_UPPER_CAN5_Pos)   /* (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Mask */
#define SFR_CAN_SRAM_SEL_UPPER_CAN5(value)    (SFR_CAN_SRAM_SEL_UPPER_CAN5_Msk & (_UINT32_(value) << SFR_CAN_SRAM_SEL_UPPER_CAN5_Pos)) /* Assignment of value for UPPER_CAN5 in the SFR_CAN_SRAM_SEL register */
#define   SFR_CAN_SRAM_SEL_UPPER_CAN5_0_Val   _UINT32_(0x0)                                        /* (SFR_CAN_SRAM_SEL) CANx accesses the lower 64K SRAM.  */
#define   SFR_CAN_SRAM_SEL_UPPER_CAN5_1_Val   _UINT32_(0x1)                                        /* (SFR_CAN_SRAM_SEL) CANx accesses the upper 64K SRAM.  */
#define SFR_CAN_SRAM_SEL_UPPER_CAN5_0         (SFR_CAN_SRAM_SEL_UPPER_CAN5_0_Val << SFR_CAN_SRAM_SEL_UPPER_CAN5_Pos) /* (SFR_CAN_SRAM_SEL) CANx accesses the lower 64K SRAM. Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN5_1         (SFR_CAN_SRAM_SEL_UPPER_CAN5_1_Val << SFR_CAN_SRAM_SEL_UPPER_CAN5_Pos) /* (SFR_CAN_SRAM_SEL) CANx accesses the upper 64K SRAM. Position */
#define SFR_CAN_SRAM_SEL_Msk                  _UINT32_(0x0000003F)                                 /* (SFR_CAN_SRAM_SEL) Register Mask  */

#define SFR_CAN_SRAM_SEL_UPPER_CAN_Pos        _UINT32_(0)                                          /* (SFR_CAN_SRAM_SEL Position) CANx Upper 64K SRAM Selection */
#define SFR_CAN_SRAM_SEL_UPPER_CAN_Msk        (_UINT32_(0x3F) << SFR_CAN_SRAM_SEL_UPPER_CAN_Pos)   /* (SFR_CAN_SRAM_SEL Mask) UPPER_CAN */
#define SFR_CAN_SRAM_SEL_UPPER_CAN(value)     (SFR_CAN_SRAM_SEL_UPPER_CAN_Msk & (_UINT32_(value) << SFR_CAN_SRAM_SEL_UPPER_CAN_Pos)) 

/* -------- SFR_UTMI0R : (SFR Offset: 0x2040) (R/W 32) UTMI0 Configuration Register (port = 0) -------- */
#define SFR_UTMI0R_COMMONONN_Pos              _UINT32_(3)                                          /* (SFR_UTMI0R) Common Block Power-Down Control Position */
#define SFR_UTMI0R_COMMONONN_Msk              (_UINT32_(0x1) << SFR_UTMI0R_COMMONONN_Pos)          /* (SFR_UTMI0R) Common Block Power-Down Control Mask */
#define SFR_UTMI0R_COMMONONN(value)           (SFR_UTMI0R_COMMONONN_Msk & (_UINT32_(value) << SFR_UTMI0R_COMMONONN_Pos)) /* Assignment of value for COMMONONN in the SFR_UTMI0R register */
#define   SFR_UTMI0R_COMMONONN_0_Val          _UINT32_(0x0)                                        /* (SFR_UTMI0R) PLL blocks remain powered.  */
#define   SFR_UTMI0R_COMMONONN_1_Val          _UINT32_(0x1)                                        /* (SFR_UTMI0R) PLL blocks are powered down.  */
#define SFR_UTMI0R_COMMONONN_0                (SFR_UTMI0R_COMMONONN_0_Val << SFR_UTMI0R_COMMONONN_Pos) /* (SFR_UTMI0R) PLL blocks remain powered. Position */
#define SFR_UTMI0R_COMMONONN_1                (SFR_UTMI0R_COMMONONN_1_Val << SFR_UTMI0R_COMMONONN_Pos) /* (SFR_UTMI0R) PLL blocks are powered down. Position */
#define SFR_UTMI0R_TXPREEMPAMPTUNE_Pos        _UINT32_(23)                                         /* (SFR_UTMI0R) HS Transmitter Pre-Emphasis Current Control Position */
#define SFR_UTMI0R_TXPREEMPAMPTUNE_Msk        (_UINT32_(0x3) << SFR_UTMI0R_TXPREEMPAMPTUNE_Pos)    /* (SFR_UTMI0R) HS Transmitter Pre-Emphasis Current Control Mask */
#define SFR_UTMI0R_TXPREEMPAMPTUNE(value)     (SFR_UTMI0R_TXPREEMPAMPTUNE_Msk & (_UINT32_(value) << SFR_UTMI0R_TXPREEMPAMPTUNE_Pos)) /* Assignment of value for TXPREEMPAMPTUNE in the SFR_UTMI0R register */
#define SFR_UTMI0R_VBUS_Pos                   _UINT32_(25)                                         /* (SFR_UTMI0R) VBUS Valid Indicator Position */
#define SFR_UTMI0R_VBUS_Msk                   (_UINT32_(0x1) << SFR_UTMI0R_VBUS_Pos)               /* (SFR_UTMI0R) VBUS Valid Indicator Mask */
#define SFR_UTMI0R_VBUS(value)                (SFR_UTMI0R_VBUS_Msk & (_UINT32_(value) << SFR_UTMI0R_VBUS_Pos)) /* Assignment of value for VBUS in the SFR_UTMI0R register */
#define   SFR_UTMI0R_VBUS_0_Val               _UINT32_(0x0)                                        /* (SFR_UTMI0R) The VBUS signal is not valid, and the pull-up resistor on D+ is disabled.  */
#define   SFR_UTMI0R_VBUS_1_Val               _UINT32_(0x1)                                        /* (SFR_UTMI0R) The VBUS signal is valid, and the pull-up resistor on D+ is enabled.  */
#define SFR_UTMI0R_VBUS_0                     (SFR_UTMI0R_VBUS_0_Val << SFR_UTMI0R_VBUS_Pos)       /* (SFR_UTMI0R) The VBUS signal is not valid, and the pull-up resistor on D+ is disabled. Position */
#define SFR_UTMI0R_VBUS_1                     (SFR_UTMI0R_VBUS_1_Val << SFR_UTMI0R_VBUS_Pos)       /* (SFR_UTMI0R) The VBUS signal is valid, and the pull-up resistor on D+ is enabled. Position */
#define SFR_UTMI0R_Msk                        _UINT32_(0x03800008)                                 /* (SFR_UTMI0R) Register Mask  */


/* SFR register offsets definitions */
#define SFR_OHCIICR_REG_OFST           _UINT32_(0x00)      /* (SFR_OHCIICR) OHCI Interrupt Configuration Register Offset */
#define SFR_OHCIISR_REG_OFST           _UINT32_(0x04)      /* (SFR_OHCIISR) OHCI Interrupt Status Register Offset */
#define SFR_WPMR_REG_OFST              _UINT32_(0xE4)      /* (SFR_WPMR) Write Protection Mode Register Offset */
#define SFR_WPSR_REG_OFST              _UINT32_(0xE8)      /* (SFR_WPSR) Write Protection Status Register Offset */
#define SFR_EHCIOHCI_REG_OFST          _UINT32_(0x2020)    /* (SFR_EHCIOHCI) EHCI OHCI Register Offset */
#define SFR_UDDRC_REG_OFST             _UINT32_(0x202C)    /* (SFR_UDDRC) UDDRC Register Offset */
#define SFR_CAN_SRAM_SEL_REG_OFST      _UINT32_(0x2030)    /* (SFR_CAN_SRAM_SEL) SFR CAN SRAM Selection Register Offset */
#define SFR_UTMI0R_REG_OFST            _UINT32_(0x2040)    /* (SFR_UTMI0R) UTMI0 Configuration Register (port = 0) Offset */
#define SFR_UTMI0R0_REG_OFST           _UINT32_(0x2040)    /* (SFR_UTMI0R0) UTMI0 Configuration Register (port = 0) Offset */
#define SFR_UTMI0R1_REG_OFST           _UINT32_(0x2044)    /* (SFR_UTMI0R1) UTMI0 Configuration Register (port = 0) Offset */
#define SFR_UTMI0R2_REG_OFST           _UINT32_(0x2048)    /* (SFR_UTMI0R2) UTMI0 Configuration Register (port = 0) Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* SFR register API structure */
typedef struct
{  /* Special Function Registers */
  __IO  uint32_t                       SFR_OHCIICR;        /* Offset: 0x00 (R/W  32) OHCI Interrupt Configuration Register */
  __I   uint32_t                       SFR_OHCIISR;        /* Offset: 0x04 (R/   32) OHCI Interrupt Status Register */
  __I   uint8_t                        Reserved1[0xDC];
  __IO  uint32_t                       SFR_WPMR;           /* Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       SFR_WPSR;           /* Offset: 0xE8 (R/   32) Write Protection Status Register */
  __I   uint8_t                        Reserved2[0x1F34];
  __IO  uint32_t                       SFR_EHCIOHCI;       /* Offset: 0x2020 (R/W  32) EHCI OHCI Register */
  __I   uint8_t                        Reserved3[0x08];
  __IO  uint32_t                       SFR_UDDRC;          /* Offset: 0x202C (R/W  32) UDDRC Register */
  __IO  uint32_t                       SFR_CAN_SRAM_SEL;   /* Offset: 0x2030 (R/W  32) SFR CAN SRAM Selection Register */
  __I   uint8_t                        Reserved4[0x0C];
  __IO  uint32_t                       SFR_UTMI0R[3];      /* Offset: 0x2040 (R/W  32) UTMI0 Configuration Register (port = 0) */
} sfr_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G5_SFR_COMPONENT_H_ */
