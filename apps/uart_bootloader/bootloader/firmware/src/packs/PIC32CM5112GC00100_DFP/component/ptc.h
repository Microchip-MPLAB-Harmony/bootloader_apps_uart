/*
 * Component description for PTC
 *
 * Copyright (c) 2024 Microchip Technology Inc. and its subsidiaries.
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

/*  file generated from device description file (ATDF) version 2024-07-26T17:56:39Z  */
#ifndef _PIC32CMGC00_PTC_COMPONENT_H_
#define _PIC32CMGC00_PTC_COMPONENT_H_

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR PTC                       */
/* ************************************************************************** */

/* -------- PTC_CTRLA : (PTC Offset: 0x00) (R/W 32) CONTROL ENABLE REGISTER -------- */
#define PTC_CTRLA_RESETVALUE                  _UINT32_(0x00)                                       /*  (PTC_CTRLA) CONTROL ENABLE REGISTER  Reset Value */

#define PTC_CTRLA_SWRST_Pos                   _UINT32_(0)                                          /* (PTC_CTRLA) Software Reset for this macro. Position */
#define PTC_CTRLA_SWRST_Msk                   (_UINT32_(0x1) << PTC_CTRLA_SWRST_Pos)               /* (PTC_CTRLA) Software Reset for this macro. Mask */
#define PTC_CTRLA_SWRST(value)                (PTC_CTRLA_SWRST_Msk & (_UINT32_(value) << PTC_CTRLA_SWRST_Pos)) /* Assignment of value for SWRST in the PTC_CTRLA register */
#define   PTC_CTRLA_SWRST_0_Val               _UINT32_(0x0)                                        /* (PTC_CTRLA) There is no reset operation ongoing  */
#define   PTC_CTRLA_SWRST_1_Val               _UINT32_(0x1)                                        /* (PTC_CTRLA) The reset operation is ongoing  */
#define PTC_CTRLA_SWRST_0                     (PTC_CTRLA_SWRST_0_Val << PTC_CTRLA_SWRST_Pos)       /* (PTC_CTRLA) There is no reset operation ongoing Position */
#define PTC_CTRLA_SWRST_1                     (PTC_CTRLA_SWRST_1_Val << PTC_CTRLA_SWRST_Pos)       /* (PTC_CTRLA) The reset operation is ongoing Position */
#define PTC_CTRLA_ENABLE_Pos                  _UINT32_(1)                                          /* (PTC_CTRLA) PTC -- Enable Position */
#define PTC_CTRLA_ENABLE_Msk                  (_UINT32_(0x1) << PTC_CTRLA_ENABLE_Pos)              /* (PTC_CTRLA) PTC -- Enable Mask */
#define PTC_CTRLA_ENABLE(value)               (PTC_CTRLA_ENABLE_Msk & (_UINT32_(value) << PTC_CTRLA_ENABLE_Pos)) /* Assignment of value for ENABLE in the PTC_CTRLA register */
#define   PTC_CTRLA_ENABLE_0_Val              _UINT32_(0x0)                                        /* (PTC_CTRLA) Disable module. System clock is only requested for bus transactions. GCLK is never requested.  */
#define   PTC_CTRLA_ENABLE_1_Val              _UINT32_(0x1)                                        /* (PTC_CTRLA) Enable module by allowing both the generic clock and system clock requests based on the incoming clock requests from the SIB.  */
#define PTC_CTRLA_ENABLE_0                    (PTC_CTRLA_ENABLE_0_Val << PTC_CTRLA_ENABLE_Pos)     /* (PTC_CTRLA) Disable module. System clock is only requested for bus transactions. GCLK is never requested. Position */
#define PTC_CTRLA_ENABLE_1                    (PTC_CTRLA_ENABLE_1_Val << PTC_CTRLA_ENABLE_Pos)     /* (PTC_CTRLA) Enable module by allowing both the generic clock and system clock requests based on the incoming clock requests from the SIB. Position */
#define PTC_CTRLA_PRIV_Pos                    _UINT32_(2)                                          /* (PTC_CTRLA) Privileged Access Only -- provides filtering of privilege/non-privilege bus accesses to SFR registers Position */
#define PTC_CTRLA_PRIV_Msk                    (_UINT32_(0x1) << PTC_CTRLA_PRIV_Pos)                /* (PTC_CTRLA) Privileged Access Only -- provides filtering of privilege/non-privilege bus accesses to SFR registers Mask */
#define PTC_CTRLA_PRIV(value)                 (PTC_CTRLA_PRIV_Msk & (_UINT32_(value) << PTC_CTRLA_PRIV_Pos)) /* Assignment of value for PRIV in the PTC_CTRLA register */
#define PTC_CTRLA_RUNSTDBY_Pos                _UINT32_(6)                                          /* (PTC_CTRLA) Run In Standby Position */
#define PTC_CTRLA_RUNSTDBY_Msk                (_UINT32_(0x1) << PTC_CTRLA_RUNSTDBY_Pos)            /* (PTC_CTRLA) Run In Standby Mask */
#define PTC_CTRLA_RUNSTDBY(value)             (PTC_CTRLA_RUNSTDBY_Msk & (_UINT32_(value) << PTC_CTRLA_RUNSTDBY_Pos)) /* Assignment of value for RUNSTDBY in the PTC_CTRLA register */
#define PTC_CTRLA_ONDEMAND_Pos                _UINT32_(7)                                          /* (PTC_CTRLA) On Demand Control Position */
#define PTC_CTRLA_ONDEMAND_Msk                (_UINT32_(0x1) << PTC_CTRLA_ONDEMAND_Pos)            /* (PTC_CTRLA) On Demand Control Mask */
#define PTC_CTRLA_ONDEMAND(value)             (PTC_CTRLA_ONDEMAND_Msk & (_UINT32_(value) << PTC_CTRLA_ONDEMAND_Pos)) /* Assignment of value for ONDEMAND in the PTC_CTRLA register */
#define PTC_CTRLA_Msk                         _UINT32_(0x000000C7)                                 /* (PTC_CTRLA) Register Mask  */


/* -------- PTC_EVCTRL : (PTC Offset: 0x04) (R/W 32) EVENT CONTROL REGISTER -------- */
#define PTC_EVCTRL_RESETVALUE                 _UINT32_(0x00)                                       /*  (PTC_EVCTRL) EVENT CONTROL REGISTER  Reset Value */

#define PTC_EVCTRL_STCONVEI_Pos               _UINT32_(0)                                          /* (PTC_EVCTRL) Start Conversion Event Input Enable Position */
#define PTC_EVCTRL_STCONVEI_Msk               (_UINT32_(0x1) << PTC_EVCTRL_STCONVEI_Pos)           /* (PTC_EVCTRL) Start Conversion Event Input Enable Mask */
#define PTC_EVCTRL_STCONVEI(value)            (PTC_EVCTRL_STCONVEI_Msk & (_UINT32_(value) << PTC_EVCTRL_STCONVEI_Pos)) /* Assignment of value for STCONVEI in the PTC_EVCTRL register */
#define PTC_EVCTRL_DSEQREI_Pos                _UINT32_(1)                                          /* (PTC_EVCTRL) DMA Sequencing Restart Event Input Enable Position */
#define PTC_EVCTRL_DSEQREI_Msk                (_UINT32_(0x1) << PTC_EVCTRL_DSEQREI_Pos)            /* (PTC_EVCTRL) DMA Sequencing Restart Event Input Enable Mask */
#define PTC_EVCTRL_DSEQREI(value)             (PTC_EVCTRL_DSEQREI_Msk & (_UINT32_(value) << PTC_EVCTRL_DSEQREI_Pos)) /* Assignment of value for DSEQREI in the PTC_EVCTRL register */
#define PTC_EVCTRL_STCONVINV_Pos              _UINT32_(2)                                          /* (PTC_EVCTRL) Start Conversion Event Invert Enable Position */
#define PTC_EVCTRL_STCONVINV_Msk              (_UINT32_(0x1) << PTC_EVCTRL_STCONVINV_Pos)          /* (PTC_EVCTRL) Start Conversion Event Invert Enable Mask */
#define PTC_EVCTRL_STCONVINV(value)           (PTC_EVCTRL_STCONVINV_Msk & (_UINT32_(value) << PTC_EVCTRL_STCONVINV_Pos)) /* Assignment of value for STCONVINV in the PTC_EVCTRL register */
#define PTC_EVCTRL_DSEQRINV_Pos               _UINT32_(3)                                          /* (PTC_EVCTRL) DMA Sequencing Restart Event Invert Enable Position */
#define PTC_EVCTRL_DSEQRINV_Msk               (_UINT32_(0x1) << PTC_EVCTRL_DSEQRINV_Pos)           /* (PTC_EVCTRL) DMA Sequencing Restart Event Invert Enable Mask */
#define PTC_EVCTRL_DSEQRINV(value)            (PTC_EVCTRL_DSEQRINV_Msk & (_UINT32_(value) << PTC_EVCTRL_DSEQRINV_Pos)) /* Assignment of value for DSEQRINV in the PTC_EVCTRL register */
#define PTC_EVCTRL_EOCEO_Pos                  _UINT32_(4)                                          /* (PTC_EVCTRL) End of Conversion Event Output Enable Position */
#define PTC_EVCTRL_EOCEO_Msk                  (_UINT32_(0x1) << PTC_EVCTRL_EOCEO_Pos)              /* (PTC_EVCTRL) End of Conversion Event Output Enable Mask */
#define PTC_EVCTRL_EOCEO(value)               (PTC_EVCTRL_EOCEO_Msk & (_UINT32_(value) << PTC_EVCTRL_EOCEO_Pos)) /* Assignment of value for EOCEO in the PTC_EVCTRL register */
#define PTC_EVCTRL_WCOMPEO_Pos                _UINT32_(5)                                          /* (PTC_EVCTRL) Window Comparator Event Output Enable Position */
#define PTC_EVCTRL_WCOMPEO_Msk                (_UINT32_(0x1) << PTC_EVCTRL_WCOMPEO_Pos)            /* (PTC_EVCTRL) Window Comparator Event Output Enable Mask */
#define PTC_EVCTRL_WCOMPEO(value)             (PTC_EVCTRL_WCOMPEO_Msk & (_UINT32_(value) << PTC_EVCTRL_WCOMPEO_Pos)) /* Assignment of value for WCOMPEO in the PTC_EVCTRL register */
#define PTC_EVCTRL_Msk                        _UINT32_(0x0000003F)                                 /* (PTC_EVCTRL) Register Mask  */


/* -------- PTC_DBGCTRL : (PTC Offset: 0x08) (R/W 32) DEBUG CONTROL Register -------- */
#define PTC_DBGCTRL_RESETVALUE                _UINT32_(0x00)                                       /*  (PTC_DBGCTRL) DEBUG CONTROL Register  Reset Value */

#define PTC_DBGCTRL_DBGRUN_Pos                _UINT32_(0)                                          /* (PTC_DBGCTRL) Debug Run Position */
#define PTC_DBGCTRL_DBGRUN_Msk                (_UINT32_(0x1) << PTC_DBGCTRL_DBGRUN_Pos)            /* (PTC_DBGCTRL) Debug Run Mask */
#define PTC_DBGCTRL_DBGRUN(value)             (PTC_DBGCTRL_DBGRUN_Msk & (_UINT32_(value) << PTC_DBGCTRL_DBGRUN_Pos)) /* Assignment of value for DBGRUN in the PTC_DBGCTRL register */
#define PTC_DBGCTRL_Msk                       _UINT32_(0x00000001)                                 /* (PTC_DBGCTRL) Register Mask  */


/* -------- PTC_CTRLB : (PTC Offset: 0x0C) (R/W 32) CONTROL B Register -------- */
#define PTC_CTRLB_RESETVALUE                  _UINT32_(0x00)                                       /*  (PTC_CTRLB) CONTROL B Register  Reset Value */

#define PTC_CTRLB_CTSM_Pos                    _UINT32_(0)                                          /* (PTC_CTRLB) Capacitive Touch Sensing Mode Position */
#define PTC_CTRLB_CTSM_Msk                    (_UINT32_(0x7) << PTC_CTRLB_CTSM_Pos)                /* (PTC_CTRLB) Capacitive Touch Sensing Mode Mask */
#define PTC_CTRLB_CTSM(value)                 (PTC_CTRLB_CTSM_Msk & (_UINT32_(value) << PTC_CTRLB_CTSM_Pos)) /* Assignment of value for CTSM in the PTC_CTRLB register */
#define PTC_CTRLB_INTSEL_Pos                  _UINT32_(4)                                          /* (PTC_CTRLB) Interrupt Selection Position */
#define PTC_CTRLB_INTSEL_Msk                  (_UINT32_(0x1) << PTC_CTRLB_INTSEL_Pos)              /* (PTC_CTRLB) Interrupt Selection Mask */
#define PTC_CTRLB_INTSEL(value)               (PTC_CTRLB_INTSEL_Msk & (_UINT32_(value) << PTC_CTRLB_INTSEL_Pos)) /* Assignment of value for INTSEL in the PTC_CTRLB register */
#define PTC_CTRLB_SDS_Pos                     _UINT32_(8)                                          /* (PTC_CTRLB) Sampling Delay Selection. Position */
#define PTC_CTRLB_SDS_Msk                     (_UINT32_(0xF) << PTC_CTRLB_SDS_Pos)                 /* (PTC_CTRLB) Sampling Delay Selection. Mask */
#define PTC_CTRLB_SDS(value)                  (PTC_CTRLB_SDS_Msk & (_UINT32_(value) << PTC_CTRLB_SDS_Pos)) /* Assignment of value for SDS in the PTC_CTRLB register */
#define PTC_CTRLB_ASDV_Pos                    _UINT32_(12)                                         /* (PTC_CTRLB) Automatic Sampling Delay Variation. Position */
#define PTC_CTRLB_ASDV_Msk                    (_UINT32_(0x1) << PTC_CTRLB_ASDV_Pos)                /* (PTC_CTRLB) Automatic Sampling Delay Variation. Mask */
#define PTC_CTRLB_ASDV(value)                 (PTC_CTRLB_ASDV_Msk & (_UINT32_(value) << PTC_CTRLB_ASDV_Pos)) /* Assignment of value for ASDV in the PTC_CTRLB register */
#define PTC_CTRLB_CCDS_Pos                    _UINT32_(13)                                         /* (PTC_CTRLB) Channel Change Delay Selection Position */
#define PTC_CTRLB_CCDS_Msk                    (_UINT32_(0x3) << PTC_CTRLB_CCDS_Pos)                /* (PTC_CTRLB) Channel Change Delay Selection Mask */
#define PTC_CTRLB_CCDS(value)                 (PTC_CTRLB_CCDS_Msk & (_UINT32_(value) << PTC_CTRLB_CCDS_Pos)) /* Assignment of value for CCDS in the PTC_CTRLB register */
#define PTC_CTRLB_RSEL_Pos                    _UINT32_(20)                                         /* (PTC_CTRLB) Resistor Selection Position */
#define PTC_CTRLB_RSEL_Msk                    (_UINT32_(0x7) << PTC_CTRLB_RSEL_Pos)                /* (PTC_CTRLB) Resistor Selection Mask */
#define PTC_CTRLB_RSEL(value)                 (PTC_CTRLB_RSEL_Msk & (_UINT32_(value) << PTC_CTRLB_RSEL_Pos)) /* Assignment of value for RSEL in the PTC_CTRLB register */
#define PTC_CTRLB_Msk                         _UINT32_(0x00707F17)                                 /* (PTC_CTRLB) Register Mask  */


/* -------- PTC_CTRLC : (PTC Offset: 0x10) (R/W 32) CONTROL C Register -------- */
#define PTC_CTRLC_RESETVALUE                  _UINT32_(0x00)                                       /*  (PTC_CTRLC) CONTROL C Register  Reset Value */

#define PTC_CTRLC_CCF_Pos                     _UINT32_(0)                                          /* (PTC_CTRLC) Compensation Capacitor Fine Value Position */
#define PTC_CTRLC_CCF_Msk                     (_UINT32_(0x1F) << PTC_CTRLC_CCF_Pos)                /* (PTC_CTRLC) Compensation Capacitor Fine Value Mask */
#define PTC_CTRLC_CCF(value)                  (PTC_CTRLC_CCF_Msk & (_UINT32_(value) << PTC_CTRLC_CCF_Pos)) /* Assignment of value for CCF in the PTC_CTRLC register */
#define PTC_CTRLC_CCC_Pos                     _UINT32_(8)                                          /* (PTC_CTRLC) Compensation Capacitor Coarse Value Position */
#define PTC_CTRLC_CCC_Msk                     (_UINT32_(0x1F) << PTC_CTRLC_CCC_Pos)                /* (PTC_CTRLC) Compensation Capacitor Coarse Value Mask */
#define PTC_CTRLC_CCC(value)                  (PTC_CTRLC_CCC_Msk & (_UINT32_(value) << PTC_CTRLC_CCC_Pos)) /* Assignment of value for CCC in the PTC_CTRLC register */
#define PTC_CTRLC_CI_Pos                      _UINT32_(16)                                         /* (PTC_CTRLC) Integration Capacitor Value Position */
#define PTC_CTRLC_CI_Msk                      (_UINT32_(0x1F) << PTC_CTRLC_CI_Pos)                 /* (PTC_CTRLC) Integration Capacitor Value Mask */
#define PTC_CTRLC_CI(value)                   (PTC_CTRLC_CI_Msk & (_UINT32_(value) << PTC_CTRLC_CI_Pos)) /* Assignment of value for CI in the PTC_CTRLC register */
#define PTC_CTRLC_CSD_Pos                     _UINT32_(24)                                         /* (PTC_CTRLC) Charge Share Delay Value Position */
#define PTC_CTRLC_CSD_Msk                     (_UINT32_(0xFF) << PTC_CTRLC_CSD_Pos)                /* (PTC_CTRLC) Charge Share Delay Value Mask */
#define PTC_CTRLC_CSD(value)                  (PTC_CTRLC_CSD_Msk & (_UINT32_(value) << PTC_CTRLC_CSD_Pos)) /* Assignment of value for CSD in the PTC_CTRLC register */
#define PTC_CTRLC_Msk                         _UINT32_(0xFF1F1F1F)                                 /* (PTC_CTRLC) Register Mask  */


/* -------- PTC_CTRLD : (PTC Offset: 0x14) (R/W 32) CONTROL D Register -------- */
#define PTC_CTRLD_RESETVALUE                  _UINT32_(0x00)                                       /*  (PTC_CTRLD) CONTROL D Register  Reset Value */

#define PTC_CTRLD_DAN_Pos                     _UINT32_(0)                                          /* (PTC_CTRLD) Digital Accumulation Number Position */
#define PTC_CTRLD_DAN_Msk                     (_UINT32_(0x7) << PTC_CTRLD_DAN_Pos)                 /* (PTC_CTRLD) Digital Accumulation Number Mask */
#define PTC_CTRLD_DAN(value)                  (PTC_CTRLD_DAN_Msk & (_UINT32_(value) << PTC_CTRLD_DAN_Pos)) /* Assignment of value for DAN in the PTC_CTRLD register */
#define PTC_CTRLD_AAN_Pos                     _UINT32_(8)                                          /* (PTC_CTRLD) Analog Accumulation Number Position */
#define PTC_CTRLD_AAN_Msk                     (_UINT32_(0xF) << PTC_CTRLD_AAN_Pos)                 /* (PTC_CTRLD) Analog Accumulation Number Mask */
#define PTC_CTRLD_AAN(value)                  (PTC_CTRLD_AAN_Msk & (_UINT32_(value) << PTC_CTRLD_AAN_Pos)) /* Assignment of value for AAN in the PTC_CTRLD register */
#define PTC_CTRLD_WINCM_Pos                   _UINT32_(16)                                         /* (PTC_CTRLD) Window Comparator Mode Position */
#define PTC_CTRLD_WINCM_Msk                   (_UINT32_(0x7) << PTC_CTRLD_WINCM_Pos)               /* (PTC_CTRLD) Window Comparator Mode Mask */
#define PTC_CTRLD_WINCM(value)                (PTC_CTRLD_WINCM_Msk & (_UINT32_(value) << PTC_CTRLD_WINCM_Pos)) /* Assignment of value for WINCM in the PTC_CTRLD register */
#define PTC_CTRLD_WINSS_Pos                   _UINT32_(19)                                         /* (PTC_CTRLD) Window Single Sample Position */
#define PTC_CTRLD_WINSS_Msk                   (_UINT32_(0x1) << PTC_CTRLD_WINSS_Pos)               /* (PTC_CTRLD) Window Single Sample Mask */
#define PTC_CTRLD_WINSS(value)                (PTC_CTRLD_WINSS_Msk & (_UINT32_(value) << PTC_CTRLD_WINSS_Pos)) /* Assignment of value for WINSS in the PTC_CTRLD register */
#define PTC_CTRLD_EXTCIEN_Pos                 _UINT32_(20)                                         /* (PTC_CTRLD) External Integration Capacitor Enable Position */
#define PTC_CTRLD_EXTCIEN_Msk                 (_UINT32_(0x3) << PTC_CTRLD_EXTCIEN_Pos)             /* (PTC_CTRLD) External Integration Capacitor Enable Mask */
#define PTC_CTRLD_EXTCIEN(value)              (PTC_CTRLD_EXTCIEN_Msk & (_UINT32_(value) << PTC_CTRLD_EXTCIEN_Pos)) /* Assignment of value for EXTCIEN in the PTC_CTRLD register */
#define PTC_CTRLD_POLICC_Pos                  _UINT32_(23)                                         /* (PTC_CTRLD) Polarity of Internal Compensation Capacitor Position */
#define PTC_CTRLD_POLICC_Msk                  (_UINT32_(0x1) << PTC_CTRLD_POLICC_Pos)              /* (PTC_CTRLD) Polarity of Internal Compensation Capacitor Mask */
#define PTC_CTRLD_POLICC(value)               (PTC_CTRLD_POLICC_Msk & (_UINT32_(value) << PTC_CTRLD_POLICC_Pos)) /* Assignment of value for POLICC in the PTC_CTRLD register */
#define PTC_CTRLD_DSEN_Pos                    _UINT32_(24)                                         /* (PTC_CTRLD) DSEN Driven Shield Enable. Position */
#define PTC_CTRLD_DSEN_Msk                    (_UINT32_(0x1) << PTC_CTRLD_DSEN_Pos)                /* (PTC_CTRLD) DSEN Driven Shield Enable. Mask */
#define PTC_CTRLD_DSEN(value)                 (PTC_CTRLD_DSEN_Msk & (_UINT32_(value) << PTC_CTRLD_DSEN_Pos)) /* Assignment of value for DSEN in the PTC_CTRLD register */
#define PTC_CTRLD_DSEQSTOP_Pos                _UINT32_(31)                                         /* (PTC_CTRLD) Stop DMA Sequence Position */
#define PTC_CTRLD_DSEQSTOP_Msk                (_UINT32_(0x1) << PTC_CTRLD_DSEQSTOP_Pos)            /* (PTC_CTRLD) Stop DMA Sequence Mask */
#define PTC_CTRLD_DSEQSTOP(value)             (PTC_CTRLD_DSEQSTOP_Msk & (_UINT32_(value) << PTC_CTRLD_DSEQSTOP_Pos)) /* Assignment of value for DSEQSTOP in the PTC_CTRLD register */
#define PTC_CTRLD_Msk                         _UINT32_(0x81BF0F07)                                 /* (PTC_CTRLD) Register Mask  */


/* -------- PTC_CTRLE : (PTC Offset: 0x18) (R/W 32) CONTROL E REGISTER -------- */
#define PTC_CTRLE_RESETVALUE                  _UINT32_(0x00)                                       /*  (PTC_CTRLE) CONTROL E REGISTER  Reset Value */

#define PTC_CTRLE_AIPMPEN_Pos                 _UINT32_(4)                                          /* (PTC_CTRLE) Analog Input Charge Pump Enable Position */
#define PTC_CTRLE_AIPMPEN_Msk                 (_UINT32_(0x1) << PTC_CTRLE_AIPMPEN_Pos)             /* (PTC_CTRLE) Analog Input Charge Pump Enable Mask */
#define PTC_CTRLE_AIPMPEN(value)              (PTC_CTRLE_AIPMPEN_Msk & (_UINT32_(value) << PTC_CTRLE_AIPMPEN_Pos)) /* Assignment of value for AIPMPEN in the PTC_CTRLE register */
#define PTC_CTRLE_PRSC_Pos                    _UINT32_(8)                                          /* (PTC_CTRLE) This field defines the PTC clock relative to the peripheral clock according to the table below. Position */
#define PTC_CTRLE_PRSC_Msk                    (_UINT32_(0x7) << PTC_CTRLE_PRSC_Pos)                /* (PTC_CTRLE) This field defines the PTC clock relative to the peripheral clock according to the table below. Mask */
#define PTC_CTRLE_PRSC(value)                 (PTC_CTRLE_PRSC_Msk & (_UINT32_(value) << PTC_CTRLE_PRSC_Pos)) /* Assignment of value for PRSC in the PTC_CTRLE register */
#define PTC_CTRLE_WKUPEXP_Pos                 _UINT32_(12)                                         /* (PTC_CTRLE) Wake-Up Exponent Position */
#define PTC_CTRLE_WKUPEXP_Msk                 (_UINT32_(0xF) << PTC_CTRLE_WKUPEXP_Pos)             /* (PTC_CTRLE) Wake-Up Exponent Mask */
#define PTC_CTRLE_WKUPEXP(value)              (PTC_CTRLE_WKUPEXP_Msk & (_UINT32_(value) << PTC_CTRLE_WKUPEXP_Pos)) /* Assignment of value for WKUPEXP in the PTC_CTRLE register */
#define PTC_CTRLE_Msk                         _UINT32_(0x0000F710)                                 /* (PTC_CTRLE) Register Mask  */


/* -------- PTC_SWTRIG : (PTC Offset: 0x1C) (R/W 32) Software Trigger Register -------- */
#define PTC_SWTRIG_RESETVALUE                 _UINT32_(0x00)                                       /*  (PTC_SWTRIG) Software Trigger Register  Reset Value */

#define PTC_SWTRIG_STCONV_Pos                 _UINT32_(0)                                          /* (PTC_SWTRIG) Start Conversion Position */
#define PTC_SWTRIG_STCONV_Msk                 (_UINT32_(0x1) << PTC_SWTRIG_STCONV_Pos)             /* (PTC_SWTRIG) Start Conversion Mask */
#define PTC_SWTRIG_STCONV(value)              (PTC_SWTRIG_STCONV_Msk & (_UINT32_(value) << PTC_SWTRIG_STCONV_Pos)) /* Assignment of value for STCONV in the PTC_SWTRIG register */
#define PTC_SWTRIG_Msk                        _UINT32_(0x00000001)                                 /* (PTC_SWTRIG) Register Mask  */


/* -------- PTC_WINLT : (PTC Offset: 0x20) (R/W 32) Window Comparator Low Threshold Register -------- */
#define PTC_WINLT_RESETVALUE                  _UINT32_(0x00)                                       /*  (PTC_WINLT) Window Comparator Low Threshold Register  Reset Value */

#define PTC_WINLT_WCLT_Pos                    _UINT32_(0)                                          /* (PTC_WINLT) Window Comparator Low Threshold Position */
#define PTC_WINLT_WCLT_Msk                    (_UINT32_(0xFFFF) << PTC_WINLT_WCLT_Pos)             /* (PTC_WINLT) Window Comparator Low Threshold Mask */
#define PTC_WINLT_WCLT(value)                 (PTC_WINLT_WCLT_Msk & (_UINT32_(value) << PTC_WINLT_WCLT_Pos)) /* Assignment of value for WCLT in the PTC_WINLT register */
#define PTC_WINLT_Msk                         _UINT32_(0x0000FFFF)                                 /* (PTC_WINLT) Register Mask  */


/* -------- PTC_WINHT : (PTC Offset: 0x24) (R/W 32) Window Comparator High Threshold Register -------- */
#define PTC_WINHT_RESETVALUE                  _UINT32_(0x00)                                       /*  (PTC_WINHT) Window Comparator High Threshold Register  Reset Value */

#define PTC_WINHT_WCHT_Pos                    _UINT32_(0)                                          /* (PTC_WINHT) Window Comparator High Threshold Position */
#define PTC_WINHT_WCHT_Msk                    (_UINT32_(0xFFFF) << PTC_WINHT_WCHT_Pos)             /* (PTC_WINHT) Window Comparator High Threshold Mask */
#define PTC_WINHT_WCHT(value)                 (PTC_WINHT_WCHT_Msk & (_UINT32_(value) << PTC_WINHT_WCHT_Pos)) /* Assignment of value for WCHT in the PTC_WINHT register */
#define PTC_WINHT_Msk                         _UINT32_(0x0000FFFF)                                 /* (PTC_WINHT) Register Mask  */


/* -------- PTC_PINEN1 : (PTC Offset: 0x28) (R/W 32) PTC Line Enable 1 Register -------- */
#define PTC_PINEN1_RESETVALUE                 _UINT32_(0x00)                                       /*  (PTC_PINEN1) PTC Line Enable 1 Register  Reset Value */

#define PTC_PINEN1_PINEN_Pos                  _UINT32_(0)                                          /* (PTC_PINEN1) PTC-Line 31-0 Enable Position */
#define PTC_PINEN1_PINEN_Msk                  (_UINT32_(0xFFFFFFFF) << PTC_PINEN1_PINEN_Pos)       /* (PTC_PINEN1) PTC-Line 31-0 Enable Mask */
#define PTC_PINEN1_PINEN(value)               (PTC_PINEN1_PINEN_Msk & (_UINT32_(value) << PTC_PINEN1_PINEN_Pos)) /* Assignment of value for PINEN in the PTC_PINEN1 register */
#define PTC_PINEN1_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (PTC_PINEN1) Register Mask  */


/* -------- PTC_PINEN2 : (PTC Offset: 0x2C) (R/W 32) PTC Line Enable 2 Register -------- */
#define PTC_PINEN2_RESETVALUE                 _UINT32_(0x00)                                       /*  (PTC_PINEN2) PTC Line Enable 2 Register  Reset Value */

#define PTC_PINEN2_PINEN_Pos                  _UINT32_(0)                                          /* (PTC_PINEN2) PTC-Line 63-32 Enable Position */
#define PTC_PINEN2_PINEN_Msk                  (_UINT32_(0xF) << PTC_PINEN2_PINEN_Pos)              /* (PTC_PINEN2) PTC-Line 63-32 Enable Mask */
#define PTC_PINEN2_PINEN(value)               (PTC_PINEN2_PINEN_Msk & (_UINT32_(value) << PTC_PINEN2_PINEN_Pos)) /* Assignment of value for PINEN in the PTC_PINEN2 register */
#define PTC_PINEN2_Msk                        _UINT32_(0x0000000F)                                 /* (PTC_PINEN2) Register Mask  */


/* -------- PTC_XSEL1 : (PTC Offset: 0x30) (R/W 32) X Line Selection 1 Register -------- */
#define PTC_XSEL1_RESETVALUE                  _UINT32_(0x00)                                       /*  (PTC_XSEL1) X Line Selection 1 Register  Reset Value */

#define PTC_XSEL1_XSEL_Pos                    _UINT32_(0)                                          /* (PTC_XSEL1) X-Line Selection [31:0] Position */
#define PTC_XSEL1_XSEL_Msk                    (_UINT32_(0xFFFFFFFF) << PTC_XSEL1_XSEL_Pos)         /* (PTC_XSEL1) X-Line Selection [31:0] Mask */
#define PTC_XSEL1_XSEL(value)                 (PTC_XSEL1_XSEL_Msk & (_UINT32_(value) << PTC_XSEL1_XSEL_Pos)) /* Assignment of value for XSEL in the PTC_XSEL1 register */
#define PTC_XSEL1_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (PTC_XSEL1) Register Mask  */


/* -------- PTC_XSEL2 : (PTC Offset: 0x34) (R/W 32) X Line Selection 2 Register -------- */
#define PTC_XSEL2_RESETVALUE                  _UINT32_(0x00)                                       /*  (PTC_XSEL2) X Line Selection 2 Register  Reset Value */

#define PTC_XSEL2_XSEL_Pos                    _UINT32_(0)                                          /* (PTC_XSEL2) X-Line Selection [63:32] Position */
#define PTC_XSEL2_XSEL_Msk                    (_UINT32_(0xF) << PTC_XSEL2_XSEL_Pos)                /* (PTC_XSEL2) X-Line Selection [63:32] Mask */
#define PTC_XSEL2_XSEL(value)                 (PTC_XSEL2_XSEL_Msk & (_UINT32_(value) << PTC_XSEL2_XSEL_Pos)) /* Assignment of value for XSEL in the PTC_XSEL2 register */
#define PTC_XSEL2_Msk                         _UINT32_(0x0000000F)                                 /* (PTC_XSEL2) Register Mask  */


/* -------- PTC_YSEL1 : (PTC Offset: 0x38) (R/W 32) Y Line Selection 1 Register -------- */
#define PTC_YSEL1_RESETVALUE                  _UINT32_(0x00)                                       /*  (PTC_YSEL1) Y Line Selection 1 Register  Reset Value */

#define PTC_YSEL1_YSEL_Pos                    _UINT32_(0)                                          /* (PTC_YSEL1) Y-Line Selection [31:0] Position */
#define PTC_YSEL1_YSEL_Msk                    (_UINT32_(0xFFFFFFFF) << PTC_YSEL1_YSEL_Pos)         /* (PTC_YSEL1) Y-Line Selection [31:0] Mask */
#define PTC_YSEL1_YSEL(value)                 (PTC_YSEL1_YSEL_Msk & (_UINT32_(value) << PTC_YSEL1_YSEL_Pos)) /* Assignment of value for YSEL in the PTC_YSEL1 register */
#define PTC_YSEL1_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (PTC_YSEL1) Register Mask  */


/* -------- PTC_YSEL2 : (PTC Offset: 0x3C) (R/W 32) Y Line Selection 2 Register -------- */
#define PTC_YSEL2_RESETVALUE                  _UINT32_(0x00)                                       /*  (PTC_YSEL2) Y Line Selection 2 Register  Reset Value */

#define PTC_YSEL2_YSEL_Pos                    _UINT32_(0)                                          /* (PTC_YSEL2) Y-Line Selection [63:32] Position */
#define PTC_YSEL2_YSEL_Msk                    (_UINT32_(0xF) << PTC_YSEL2_YSEL_Pos)                /* (PTC_YSEL2) Y-Line Selection [63:32] Mask */
#define PTC_YSEL2_YSEL(value)                 (PTC_YSEL2_YSEL_Msk & (_UINT32_(value) << PTC_YSEL2_YSEL_Pos)) /* Assignment of value for YSEL in the PTC_YSEL2 register */
#define PTC_YSEL2_Msk                         _UINT32_(0x0000000F)                                 /* (PTC_YSEL2) Register Mask  */


/* -------- PTC_POLCTRL1 : (PTC Offset: 0x40) (R/W 32) Polarity Control 1 Register -------- */
#define PTC_POLCTRL1_RESETVALUE               _UINT32_(0x00)                                       /*  (PTC_POLCTRL1) Polarity Control 1 Register  Reset Value */

#define PTC_POLCTRL1_POLARITY_Pos             _UINT32_(0)                                          /* (PTC_POLCTRL1) Choose X/Y lines Polarity [31:0] Position */
#define PTC_POLCTRL1_POLARITY_Msk             (_UINT32_(0xFFFFFFFF) << PTC_POLCTRL1_POLARITY_Pos)  /* (PTC_POLCTRL1) Choose X/Y lines Polarity [31:0] Mask */
#define PTC_POLCTRL1_POLARITY(value)          (PTC_POLCTRL1_POLARITY_Msk & (_UINT32_(value) << PTC_POLCTRL1_POLARITY_Pos)) /* Assignment of value for POLARITY in the PTC_POLCTRL1 register */
#define PTC_POLCTRL1_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (PTC_POLCTRL1) Register Mask  */


/* -------- PTC_POLCTRL2 : (PTC Offset: 0x44) (R/W 32) Polarity Control 2 Register -------- */
#define PTC_POLCTRL2_RESETVALUE               _UINT32_(0x00)                                       /*  (PTC_POLCTRL2) Polarity Control 2 Register  Reset Value */

#define PTC_POLCTRL2_POLARITY_Pos             _UINT32_(0)                                          /* (PTC_POLCTRL2) Choose X/Y lines Polarity [63:32] Position */
#define PTC_POLCTRL2_POLARITY_Msk             (_UINT32_(0xF) << PTC_POLCTRL2_POLARITY_Pos)         /* (PTC_POLCTRL2) Choose X/Y lines Polarity [63:32] Mask */
#define PTC_POLCTRL2_POLARITY(value)          (PTC_POLCTRL2_POLARITY_Msk & (_UINT32_(value) << PTC_POLCTRL2_POLARITY_Pos)) /* Assignment of value for POLARITY in the PTC_POLCTRL2 register */
#define PTC_POLCTRL2_Msk                      _UINT32_(0x0000000F)                                 /* (PTC_POLCTRL2) Register Mask  */


/* -------- PTC_INTENCLR : (PTC Offset: 0x48) (R/W 32) INTERRUPT ENABLE CLEAR Register -------- */
#define PTC_INTENCLR_RESETVALUE               _UINT32_(0x00)                                       /*  (PTC_INTENCLR) INTERRUPT ENABLE CLEAR Register  Reset Value */

#define PTC_INTENCLR_EOC_Pos                  _UINT32_(0)                                          /* (PTC_INTENCLR) End of Conversion Enable Clear. Position */
#define PTC_INTENCLR_EOC_Msk                  (_UINT32_(0x1) << PTC_INTENCLR_EOC_Pos)              /* (PTC_INTENCLR) End of Conversion Enable Clear. Mask */
#define PTC_INTENCLR_EOC(value)               (PTC_INTENCLR_EOC_Msk & (_UINT32_(value) << PTC_INTENCLR_EOC_Pos)) /* Assignment of value for EOC in the PTC_INTENCLR register */
#define PTC_INTENCLR_WCOMP_Pos                _UINT32_(1)                                          /* (PTC_INTENCLR) Window Comparator Enable Clear. Position */
#define PTC_INTENCLR_WCOMP_Msk                (_UINT32_(0x1) << PTC_INTENCLR_WCOMP_Pos)            /* (PTC_INTENCLR) Window Comparator Enable Clear. Mask */
#define PTC_INTENCLR_WCOMP(value)             (PTC_INTENCLR_WCOMP_Msk & (_UINT32_(value) << PTC_INTENCLR_WCOMP_Pos)) /* Assignment of value for WCOMP in the PTC_INTENCLR register */
#define PTC_INTENCLR_ACRRDY_Pos               _UINT32_(7)                                          /* (PTC_INTENCLR) Analog Core Ready Enable Clear. Position */
#define PTC_INTENCLR_ACRRDY_Msk               (_UINT32_(0x1) << PTC_INTENCLR_ACRRDY_Pos)           /* (PTC_INTENCLR) Analog Core Ready Enable Clear. Mask */
#define PTC_INTENCLR_ACRRDY(value)            (PTC_INTENCLR_ACRRDY_Msk & (_UINT32_(value) << PTC_INTENCLR_ACRRDY_Pos)) /* Assignment of value for ACRRDY in the PTC_INTENCLR register */
#define PTC_INTENCLR_Msk                      _UINT32_(0x00000083)                                 /* (PTC_INTENCLR) Register Mask  */


/* -------- PTC_INTENSET : (PTC Offset: 0x4C) (R/W 32) INTERRUPT ENABLE SET Register -------- */
#define PTC_INTENSET_RESETVALUE               _UINT32_(0x00)                                       /*  (PTC_INTENSET) INTERRUPT ENABLE SET Register  Reset Value */

#define PTC_INTENSET_EOC_Pos                  _UINT32_(0)                                          /* (PTC_INTENSET) End of Conversion Enable Set. Position */
#define PTC_INTENSET_EOC_Msk                  (_UINT32_(0x1) << PTC_INTENSET_EOC_Pos)              /* (PTC_INTENSET) End of Conversion Enable Set. Mask */
#define PTC_INTENSET_EOC(value)               (PTC_INTENSET_EOC_Msk & (_UINT32_(value) << PTC_INTENSET_EOC_Pos)) /* Assignment of value for EOC in the PTC_INTENSET register */
#define PTC_INTENSET_WCOMP_Pos                _UINT32_(1)                                          /* (PTC_INTENSET) Window Comparator Enable Set. Position */
#define PTC_INTENSET_WCOMP_Msk                (_UINT32_(0x1) << PTC_INTENSET_WCOMP_Pos)            /* (PTC_INTENSET) Window Comparator Enable Set. Mask */
#define PTC_INTENSET_WCOMP(value)             (PTC_INTENSET_WCOMP_Msk & (_UINT32_(value) << PTC_INTENSET_WCOMP_Pos)) /* Assignment of value for WCOMP in the PTC_INTENSET register */
#define PTC_INTENSET_ACRRDY_Pos               _UINT32_(7)                                          /* (PTC_INTENSET) Analog Core Ready Enable Set. Position */
#define PTC_INTENSET_ACRRDY_Msk               (_UINT32_(0x1) << PTC_INTENSET_ACRRDY_Pos)           /* (PTC_INTENSET) Analog Core Ready Enable Set. Mask */
#define PTC_INTENSET_ACRRDY(value)            (PTC_INTENSET_ACRRDY_Msk & (_UINT32_(value) << PTC_INTENSET_ACRRDY_Pos)) /* Assignment of value for ACRRDY in the PTC_INTENSET register */
#define PTC_INTENSET_Msk                      _UINT32_(0x00000083)                                 /* (PTC_INTENSET) Register Mask  */


/* -------- PTC_INTFLAGSET : (PTC Offset: 0x50) (R/W 32) INTERRUPT FLAG SET Register -------- */
#define PTC_INTFLAGSET_RESETVALUE             _UINT32_(0x00)                                       /*  (PTC_INTFLAGSET) INTERRUPT FLAG SET Register  Reset Value */

#define PTC_INTFLAGSET_EOC_Pos                _UINT32_(0)                                          /* (PTC_INTFLAGSET) End of Conversion Enable Set. Position */
#define PTC_INTFLAGSET_EOC_Msk                (_UINT32_(0x1) << PTC_INTFLAGSET_EOC_Pos)            /* (PTC_INTFLAGSET) End of Conversion Enable Set. Mask */
#define PTC_INTFLAGSET_EOC(value)             (PTC_INTFLAGSET_EOC_Msk & (_UINT32_(value) << PTC_INTFLAGSET_EOC_Pos)) /* Assignment of value for EOC in the PTC_INTFLAGSET register */
#define PTC_INTFLAGSET_WCOMP_Pos              _UINT32_(1)                                          /* (PTC_INTFLAGSET) Window Comparator Enable Set. Position */
#define PTC_INTFLAGSET_WCOMP_Msk              (_UINT32_(0x1) << PTC_INTFLAGSET_WCOMP_Pos)          /* (PTC_INTFLAGSET) Window Comparator Enable Set. Mask */
#define PTC_INTFLAGSET_WCOMP(value)           (PTC_INTFLAGSET_WCOMP_Msk & (_UINT32_(value) << PTC_INTFLAGSET_WCOMP_Pos)) /* Assignment of value for WCOMP in the PTC_INTFLAGSET register */
#define PTC_INTFLAGSET_ACRRDY_Pos             _UINT32_(7)                                          /* (PTC_INTFLAGSET) Analog Core Ready Enable Set. Position */
#define PTC_INTFLAGSET_ACRRDY_Msk             (_UINT32_(0x1) << PTC_INTFLAGSET_ACRRDY_Pos)         /* (PTC_INTFLAGSET) Analog Core Ready Enable Set. Mask */
#define PTC_INTFLAGSET_ACRRDY(value)          (PTC_INTFLAGSET_ACRRDY_Msk & (_UINT32_(value) << PTC_INTFLAGSET_ACRRDY_Pos)) /* Assignment of value for ACRRDY in the PTC_INTFLAGSET register */
#define PTC_INTFLAGSET_Msk                    _UINT32_(0x00000083)                                 /* (PTC_INTFLAGSET) Register Mask  */


/* -------- PTC_INTFLAG : (PTC Offset: 0x54) (R/W 32) INTERRUPT FLAG STATUS and CLEAR Register -------- */
#define PTC_INTFLAG_RESETVALUE                _UINT32_(0x00)                                       /*  (PTC_INTFLAG) INTERRUPT FLAG STATUS and CLEAR Register  Reset Value */

#define PTC_INTFLAG_EOC_Pos                   _UINT32_(0)                                          /* (PTC_INTFLAG) End of Conversion Flag Position */
#define PTC_INTFLAG_EOC_Msk                   (_UINT32_(0x1) << PTC_INTFLAG_EOC_Pos)               /* (PTC_INTFLAG) End of Conversion Flag Mask */
#define PTC_INTFLAG_EOC(value)                (PTC_INTFLAG_EOC_Msk & (_UINT32_(value) << PTC_INTFLAG_EOC_Pos)) /* Assignment of value for EOC in the PTC_INTFLAG register */
#define PTC_INTFLAG_WCOMP_Pos                 _UINT32_(1)                                          /* (PTC_INTFLAG) Window Comparator Flag Position */
#define PTC_INTFLAG_WCOMP_Msk                 (_UINT32_(0x1) << PTC_INTFLAG_WCOMP_Pos)             /* (PTC_INTFLAG) Window Comparator Flag Mask */
#define PTC_INTFLAG_WCOMP(value)              (PTC_INTFLAG_WCOMP_Msk & (_UINT32_(value) << PTC_INTFLAG_WCOMP_Pos)) /* Assignment of value for WCOMP in the PTC_INTFLAG register */
#define PTC_INTFLAG_ACRRDY_Pos                _UINT32_(7)                                          /* (PTC_INTFLAG) Analog Core Ready Flag Position */
#define PTC_INTFLAG_ACRRDY_Msk                (_UINT32_(0x1) << PTC_INTFLAG_ACRRDY_Pos)            /* (PTC_INTFLAG) Analog Core Ready Flag Mask */
#define PTC_INTFLAG_ACRRDY(value)             (PTC_INTFLAG_ACRRDY_Msk & (_UINT32_(value) << PTC_INTFLAG_ACRRDY_Pos)) /* Assignment of value for ACRRDY in the PTC_INTFLAG register */
#define PTC_INTFLAG_Msk                       _UINT32_(0x00000083)                                 /* (PTC_INTFLAG) Register Mask  */


/* -------- PTC_STATUS : (PTC Offset: 0x58) ( R/ 32) STATUS Register -------- */
#define PTC_STATUS_RESETVALUE                 _UINT32_(0x00)                                       /*  (PTC_STATUS) STATUS Register  Reset Value */

#define PTC_STATUS_PTCBUSY_Pos                _UINT32_(0)                                          /* (PTC_STATUS) PTC Busy Status Position */
#define PTC_STATUS_PTCBUSY_Msk                (_UINT32_(0x1) << PTC_STATUS_PTCBUSY_Pos)            /* (PTC_STATUS) PTC Busy Status Mask */
#define PTC_STATUS_PTCBUSY(value)             (PTC_STATUS_PTCBUSY_Msk & (_UINT32_(value) << PTC_STATUS_PTCBUSY_Pos)) /* Assignment of value for PTCBUSY in the PTC_STATUS register */
#define PTC_STATUS_DAD_Pos                    _UINT32_(7)                                          /* (PTC_STATUS) Digital Accumulation Done Position */
#define PTC_STATUS_DAD_Msk                    (_UINT32_(0x1) << PTC_STATUS_DAD_Pos)                /* (PTC_STATUS) Digital Accumulation Done Mask */
#define PTC_STATUS_DAD(value)                 (PTC_STATUS_DAD_Msk & (_UINT32_(value) << PTC_STATUS_DAD_Pos)) /* Assignment of value for DAD in the PTC_STATUS register */
#define PTC_STATUS_WCC_Pos                    _UINT32_(8)                                          /* (PTC_STATUS) Window Comparator Counter Position */
#define PTC_STATUS_WCC_Msk                    (_UINT32_(0x7F) << PTC_STATUS_WCC_Pos)               /* (PTC_STATUS) Window Comparator Counter Mask */
#define PTC_STATUS_WCC(value)                 (PTC_STATUS_WCC_Msk & (_UINT32_(value) << PTC_STATUS_WCC_Pos)) /* Assignment of value for WCC in the PTC_STATUS register */
#define PTC_STATUS_Msk                        _UINT32_(0x00007F81)                                 /* (PTC_STATUS) Register Mask  */


/* -------- PTC_SYNCBUSY : (PTC Offset: 0x5C) ( R/ 32) Synchronization Register -------- */
#define PTC_SYNCBUSY_RESETVALUE               _UINT32_(0x00)                                       /*  (PTC_SYNCBUSY) Synchronization Register  Reset Value */

#define PTC_SYNCBUSY_SWRST_Pos                _UINT32_(0)                                          /* (PTC_SYNCBUSY) SWRST Synchronization Busy --- Synchronizing Busy bit for swrst Position */
#define PTC_SYNCBUSY_SWRST_Msk                (_UINT32_(0x1) << PTC_SYNCBUSY_SWRST_Pos)            /* (PTC_SYNCBUSY) SWRST Synchronization Busy --- Synchronizing Busy bit for swrst Mask */
#define PTC_SYNCBUSY_SWRST(value)             (PTC_SYNCBUSY_SWRST_Msk & (_UINT32_(value) << PTC_SYNCBUSY_SWRST_Pos)) /* Assignment of value for SWRST in the PTC_SYNCBUSY register */
#define PTC_SYNCBUSY_ENABLE_Pos               _UINT32_(1)                                          /* (PTC_SYNCBUSY) ENABLE Synchronization Busy Position */
#define PTC_SYNCBUSY_ENABLE_Msk               (_UINT32_(0x1) << PTC_SYNCBUSY_ENABLE_Pos)           /* (PTC_SYNCBUSY) ENABLE Synchronization Busy Mask */
#define PTC_SYNCBUSY_ENABLE(value)            (PTC_SYNCBUSY_ENABLE_Msk & (_UINT32_(value) << PTC_SYNCBUSY_ENABLE_Pos)) /* Assignment of value for ENABLE in the PTC_SYNCBUSY register */
#define PTC_SYNCBUSY_CTRLB_Pos                _UINT32_(2)                                          /* (PTC_SYNCBUSY) Control B Synchronization Busy Position */
#define PTC_SYNCBUSY_CTRLB_Msk                (_UINT32_(0x1) << PTC_SYNCBUSY_CTRLB_Pos)            /* (PTC_SYNCBUSY) Control B Synchronization Busy Mask */
#define PTC_SYNCBUSY_CTRLB(value)             (PTC_SYNCBUSY_CTRLB_Msk & (_UINT32_(value) << PTC_SYNCBUSY_CTRLB_Pos)) /* Assignment of value for CTRLB in the PTC_SYNCBUSY register */
#define PTC_SYNCBUSY_CTRLC_Pos                _UINT32_(3)                                          /* (PTC_SYNCBUSY) Control C Synchronization Busy Position */
#define PTC_SYNCBUSY_CTRLC_Msk                (_UINT32_(0x1) << PTC_SYNCBUSY_CTRLC_Pos)            /* (PTC_SYNCBUSY) Control C Synchronization Busy Mask */
#define PTC_SYNCBUSY_CTRLC(value)             (PTC_SYNCBUSY_CTRLC_Msk & (_UINT32_(value) << PTC_SYNCBUSY_CTRLC_Pos)) /* Assignment of value for CTRLC in the PTC_SYNCBUSY register */
#define PTC_SYNCBUSY_CTRLD_Pos                _UINT32_(4)                                          /* (PTC_SYNCBUSY) Control D Synchronization Busy Position */
#define PTC_SYNCBUSY_CTRLD_Msk                (_UINT32_(0x1) << PTC_SYNCBUSY_CTRLD_Pos)            /* (PTC_SYNCBUSY) Control D Synchronization Busy Mask */
#define PTC_SYNCBUSY_CTRLD(value)             (PTC_SYNCBUSY_CTRLD_Msk & (_UINT32_(value) << PTC_SYNCBUSY_CTRLD_Pos)) /* Assignment of value for CTRLD in the PTC_SYNCBUSY register */
#define PTC_SYNCBUSY_SWTRIG_Pos               _UINT32_(5)                                          /* (PTC_SYNCBUSY) Software Trigger Synchronization Busy Position */
#define PTC_SYNCBUSY_SWTRIG_Msk               (_UINT32_(0x1) << PTC_SYNCBUSY_SWTRIG_Pos)           /* (PTC_SYNCBUSY) Software Trigger Synchronization Busy Mask */
#define PTC_SYNCBUSY_SWTRIG(value)            (PTC_SYNCBUSY_SWTRIG_Msk & (_UINT32_(value) << PTC_SYNCBUSY_SWTRIG_Pos)) /* Assignment of value for SWTRIG in the PTC_SYNCBUSY register */
#define PTC_SYNCBUSY_WINLT_Pos                _UINT32_(6)                                          /* (PTC_SYNCBUSY) Window Comparator Low Threshold Synchronization Busy Position */
#define PTC_SYNCBUSY_WINLT_Msk                (_UINT32_(0x1) << PTC_SYNCBUSY_WINLT_Pos)            /* (PTC_SYNCBUSY) Window Comparator Low Threshold Synchronization Busy Mask */
#define PTC_SYNCBUSY_WINLT(value)             (PTC_SYNCBUSY_WINLT_Msk & (_UINT32_(value) << PTC_SYNCBUSY_WINLT_Pos)) /* Assignment of value for WINLT in the PTC_SYNCBUSY register */
#define PTC_SYNCBUSY_WINHT_Pos                _UINT32_(7)                                          /* (PTC_SYNCBUSY) Window Comparator High Threshold Synchronization Busy Position */
#define PTC_SYNCBUSY_WINHT_Msk                (_UINT32_(0x1) << PTC_SYNCBUSY_WINHT_Pos)            /* (PTC_SYNCBUSY) Window Comparator High Threshold Synchronization Busy Mask */
#define PTC_SYNCBUSY_WINHT(value)             (PTC_SYNCBUSY_WINHT_Msk & (_UINT32_(value) << PTC_SYNCBUSY_WINHT_Pos)) /* Assignment of value for WINHT in the PTC_SYNCBUSY register */
#define PTC_SYNCBUSY_XSEL1_Pos                _UINT32_(8)                                          /* (PTC_SYNCBUSY) X-lines Selection 1 Synchronization Busy Position */
#define PTC_SYNCBUSY_XSEL1_Msk                (_UINT32_(0x1) << PTC_SYNCBUSY_XSEL1_Pos)            /* (PTC_SYNCBUSY) X-lines Selection 1 Synchronization Busy Mask */
#define PTC_SYNCBUSY_XSEL1(value)             (PTC_SYNCBUSY_XSEL1_Msk & (_UINT32_(value) << PTC_SYNCBUSY_XSEL1_Pos)) /* Assignment of value for XSEL1 in the PTC_SYNCBUSY register */
#define PTC_SYNCBUSY_XSEL2_Pos                _UINT32_(9)                                          /* (PTC_SYNCBUSY) X-lines Selection 2 Synchronization Busy Position */
#define PTC_SYNCBUSY_XSEL2_Msk                (_UINT32_(0x1) << PTC_SYNCBUSY_XSEL2_Pos)            /* (PTC_SYNCBUSY) X-lines Selection 2 Synchronization Busy Mask */
#define PTC_SYNCBUSY_XSEL2(value)             (PTC_SYNCBUSY_XSEL2_Msk & (_UINT32_(value) << PTC_SYNCBUSY_XSEL2_Pos)) /* Assignment of value for XSEL2 in the PTC_SYNCBUSY register */
#define PTC_SYNCBUSY_YSEL1_Pos                _UINT32_(10)                                         /* (PTC_SYNCBUSY) Y-lines Selection 1 Synchronization Busy Position */
#define PTC_SYNCBUSY_YSEL1_Msk                (_UINT32_(0x1) << PTC_SYNCBUSY_YSEL1_Pos)            /* (PTC_SYNCBUSY) Y-lines Selection 1 Synchronization Busy Mask */
#define PTC_SYNCBUSY_YSEL1(value)             (PTC_SYNCBUSY_YSEL1_Msk & (_UINT32_(value) << PTC_SYNCBUSY_YSEL1_Pos)) /* Assignment of value for YSEL1 in the PTC_SYNCBUSY register */
#define PTC_SYNCBUSY_YSEL2_Pos                _UINT32_(11)                                         /* (PTC_SYNCBUSY) Y-lines Selection 2 Synchronization Busy Position */
#define PTC_SYNCBUSY_YSEL2_Msk                (_UINT32_(0x1) << PTC_SYNCBUSY_YSEL2_Pos)            /* (PTC_SYNCBUSY) Y-lines Selection 2 Synchronization Busy Mask */
#define PTC_SYNCBUSY_YSEL2(value)             (PTC_SYNCBUSY_YSEL2_Msk & (_UINT32_(value) << PTC_SYNCBUSY_YSEL2_Pos)) /* Assignment of value for YSEL2 in the PTC_SYNCBUSY register */
#define PTC_SYNCBUSY_POLCTRL1_Pos             _UINT32_(12)                                         /* (PTC_SYNCBUSY) Polarity Control 1 Synchronization Busy Position */
#define PTC_SYNCBUSY_POLCTRL1_Msk             (_UINT32_(0x1) << PTC_SYNCBUSY_POLCTRL1_Pos)         /* (PTC_SYNCBUSY) Polarity Control 1 Synchronization Busy Mask */
#define PTC_SYNCBUSY_POLCTRL1(value)          (PTC_SYNCBUSY_POLCTRL1_Msk & (_UINT32_(value) << PTC_SYNCBUSY_POLCTRL1_Pos)) /* Assignment of value for POLCTRL1 in the PTC_SYNCBUSY register */
#define PTC_SYNCBUSY_POLCTRL2_Pos             _UINT32_(13)                                         /* (PTC_SYNCBUSY) Polarity Control 2 Synchronization Busy Position */
#define PTC_SYNCBUSY_POLCTRL2_Msk             (_UINT32_(0x1) << PTC_SYNCBUSY_POLCTRL2_Pos)         /* (PTC_SYNCBUSY) Polarity Control 2 Synchronization Busy Mask */
#define PTC_SYNCBUSY_POLCTRL2(value)          (PTC_SYNCBUSY_POLCTRL2_Msk & (_UINT32_(value) << PTC_SYNCBUSY_POLCTRL2_Pos)) /* Assignment of value for POLCTRL2 in the PTC_SYNCBUSY register */
#define PTC_SYNCBUSY_Msk                      _UINT32_(0x00003FFF)                                 /* (PTC_SYNCBUSY) Register Mask  */

#define PTC_SYNCBUSY_XSEL_Pos                 _UINT32_(8)                                          /* (PTC_SYNCBUSY Position) X-lines Selection x Synchronization Busy */
#define PTC_SYNCBUSY_XSEL_Msk                 (_UINT32_(0x3) << PTC_SYNCBUSY_XSEL_Pos)             /* (PTC_SYNCBUSY Mask) XSEL */
#define PTC_SYNCBUSY_XSEL(value)              (PTC_SYNCBUSY_XSEL_Msk & (_UINT32_(value) << PTC_SYNCBUSY_XSEL_Pos)) 
#define PTC_SYNCBUSY_YSEL_Pos                 _UINT32_(10)                                         /* (PTC_SYNCBUSY Position) Y-lines Selection x Synchronization Busy */
#define PTC_SYNCBUSY_YSEL_Msk                 (_UINT32_(0x3) << PTC_SYNCBUSY_YSEL_Pos)             /* (PTC_SYNCBUSY Mask) YSEL */
#define PTC_SYNCBUSY_YSEL(value)              (PTC_SYNCBUSY_YSEL_Msk & (_UINT32_(value) << PTC_SYNCBUSY_YSEL_Pos)) 
#define PTC_SYNCBUSY_POLCTRL_Pos              _UINT32_(12)                                         /* (PTC_SYNCBUSY Position) Polarity Control 2 Synchronization Busy */
#define PTC_SYNCBUSY_POLCTRL_Msk              (_UINT32_(0x3) << PTC_SYNCBUSY_POLCTRL_Pos)          /* (PTC_SYNCBUSY Mask) POLCTRL */
#define PTC_SYNCBUSY_POLCTRL(value)           (PTC_SYNCBUSY_POLCTRL_Msk & (_UINT32_(value) << PTC_SYNCBUSY_POLCTRL_Pos)) 

/* -------- PTC_DSEQCTRL : (PTC Offset: 0x60) (R/W 32) DMA SEQUENCE CTRL Register -------- */
#define PTC_DSEQCTRL_RESETVALUE               _UINT32_(0x00)                                       /*  (PTC_DSEQCTRL) DMA SEQUENCE CTRL Register  Reset Value */

#define PTC_DSEQCTRL_CTRLD_Pos                _UINT32_(0)                                          /* (PTC_DSEQCTRL) Control D. Position */
#define PTC_DSEQCTRL_CTRLD_Msk                (_UINT32_(0x1) << PTC_DSEQCTRL_CTRLD_Pos)            /* (PTC_DSEQCTRL) Control D. Mask */
#define PTC_DSEQCTRL_CTRLD(value)             (PTC_DSEQCTRL_CTRLD_Msk & (_UINT32_(value) << PTC_DSEQCTRL_CTRLD_Pos)) /* Assignment of value for CTRLD in the PTC_DSEQCTRL register */
#define PTC_DSEQCTRL_WINLT_Pos                _UINT32_(1)                                          /* (PTC_DSEQCTRL) Window Comparator Low Threshold Position */
#define PTC_DSEQCTRL_WINLT_Msk                (_UINT32_(0x1) << PTC_DSEQCTRL_WINLT_Pos)            /* (PTC_DSEQCTRL) Window Comparator Low Threshold Mask */
#define PTC_DSEQCTRL_WINLT(value)             (PTC_DSEQCTRL_WINLT_Msk & (_UINT32_(value) << PTC_DSEQCTRL_WINLT_Pos)) /* Assignment of value for WINLT in the PTC_DSEQCTRL register */
#define PTC_DSEQCTRL_WINHT_Pos                _UINT32_(2)                                          /* (PTC_DSEQCTRL) Window Comparator High Threshold Position */
#define PTC_DSEQCTRL_WINHT_Msk                (_UINT32_(0x1) << PTC_DSEQCTRL_WINHT_Pos)            /* (PTC_DSEQCTRL) Window Comparator High Threshold Mask */
#define PTC_DSEQCTRL_WINHT(value)             (PTC_DSEQCTRL_WINHT_Msk & (_UINT32_(value) << PTC_DSEQCTRL_WINHT_Pos)) /* Assignment of value for WINHT in the PTC_DSEQCTRL register */
#define PTC_DSEQCTRL_XSEL_Pos                 _UINT32_(3)                                          /* (PTC_DSEQCTRL) X-line n Selection lower/upper half word Position */
#define PTC_DSEQCTRL_XSEL_Msk                 (_UINT32_(0xF) << PTC_DSEQCTRL_XSEL_Pos)             /* (PTC_DSEQCTRL) X-line n Selection lower/upper half word Mask */
#define PTC_DSEQCTRL_XSEL(value)              (PTC_DSEQCTRL_XSEL_Msk & (_UINT32_(value) << PTC_DSEQCTRL_XSEL_Pos)) /* Assignment of value for XSEL in the PTC_DSEQCTRL register */
#define PTC_DSEQCTRL_YSEL_Pos                 _UINT32_(7)                                          /* (PTC_DSEQCTRL) Y-line n Selection lower/uper half word Position */
#define PTC_DSEQCTRL_YSEL_Msk                 (_UINT32_(0xF) << PTC_DSEQCTRL_YSEL_Pos)             /* (PTC_DSEQCTRL) Y-line n Selection lower/uper half word Mask */
#define PTC_DSEQCTRL_YSEL(value)              (PTC_DSEQCTRL_YSEL_Msk & (_UINT32_(value) << PTC_DSEQCTRL_YSEL_Pos)) /* Assignment of value for YSEL in the PTC_DSEQCTRL register */
#define PTC_DSEQCTRL_POL_Pos                  _UINT32_(11)                                         /* (PTC_DSEQCTRL) Polarity n lower/upper half word Position */
#define PTC_DSEQCTRL_POL_Msk                  (_UINT32_(0xF) << PTC_DSEQCTRL_POL_Pos)              /* (PTC_DSEQCTRL) Polarity n lower/upper half word Mask */
#define PTC_DSEQCTRL_POL(value)               (PTC_DSEQCTRL_POL_Msk & (_UINT32_(value) << PTC_DSEQCTRL_POL_Pos)) /* Assignment of value for POL in the PTC_DSEQCTRL register */
#define PTC_DSEQCTRL_CC_Pos                   _UINT32_(15)                                         /* (PTC_DSEQCTRL) Compensation Capacitor Position */
#define PTC_DSEQCTRL_CC_Msk                   (_UINT32_(0x1) << PTC_DSEQCTRL_CC_Pos)               /* (PTC_DSEQCTRL) Compensation Capacitor Mask */
#define PTC_DSEQCTRL_CC(value)                (PTC_DSEQCTRL_CC_Msk & (_UINT32_(value) << PTC_DSEQCTRL_CC_Pos)) /* Assignment of value for CC in the PTC_DSEQCTRL register */
#define PTC_DSEQCTRL_CI_Pos                   _UINT32_(16)                                         /* (PTC_DSEQCTRL) Integration Capacitor Position */
#define PTC_DSEQCTRL_CI_Msk                   (_UINT32_(0x1) << PTC_DSEQCTRL_CI_Pos)               /* (PTC_DSEQCTRL) Integration Capacitor Mask */
#define PTC_DSEQCTRL_CI(value)                (PTC_DSEQCTRL_CI_Msk & (_UINT32_(value) << PTC_DSEQCTRL_CI_Pos)) /* Assignment of value for CI in the PTC_DSEQCTRL register */
#define PTC_DSEQCTRL_CSD_Pos                  _UINT32_(17)                                         /* (PTC_DSEQCTRL) Charge Share Delay Position */
#define PTC_DSEQCTRL_CSD_Msk                  (_UINT32_(0x1) << PTC_DSEQCTRL_CSD_Pos)              /* (PTC_DSEQCTRL) Charge Share Delay Mask */
#define PTC_DSEQCTRL_CSD(value)               (PTC_DSEQCTRL_CSD_Msk & (_UINT32_(value) << PTC_DSEQCTRL_CSD_Pos)) /* Assignment of value for CSD in the PTC_DSEQCTRL register */
#define PTC_DSEQCTRL_AUTOSTART_Pos            _UINT32_(31)                                         /* (PTC_DSEQCTRL) PTC Auto-Start Conversion. Position */
#define PTC_DSEQCTRL_AUTOSTART_Msk            (_UINT32_(0x1) << PTC_DSEQCTRL_AUTOSTART_Pos)        /* (PTC_DSEQCTRL) PTC Auto-Start Conversion. Mask */
#define PTC_DSEQCTRL_AUTOSTART(value)         (PTC_DSEQCTRL_AUTOSTART_Msk & (_UINT32_(value) << PTC_DSEQCTRL_AUTOSTART_Pos)) /* Assignment of value for AUTOSTART in the PTC_DSEQCTRL register */
#define PTC_DSEQCTRL_Msk                      _UINT32_(0x8003FFFF)                                 /* (PTC_DSEQCTRL) Register Mask  */


/* -------- PTC_DSEQSTAT : (PTC Offset: 0x64) ( R/ 32) DMA SEQUENCE STATUS - Register -------- */
#define PTC_DSEQSTAT_RESETVALUE               _UINT32_(0x00)                                       /*  (PTC_DSEQSTAT) DMA SEQUENCE STATUS - Register  Reset Value */

#define PTC_DSEQSTAT_CTRLD_Pos                _UINT32_(0)                                          /* (PTC_DSEQSTAT) Control D. Position */
#define PTC_DSEQSTAT_CTRLD_Msk                (_UINT32_(0x1) << PTC_DSEQSTAT_CTRLD_Pos)            /* (PTC_DSEQSTAT) Control D. Mask */
#define PTC_DSEQSTAT_CTRLD(value)             (PTC_DSEQSTAT_CTRLD_Msk & (_UINT32_(value) << PTC_DSEQSTAT_CTRLD_Pos)) /* Assignment of value for CTRLD in the PTC_DSEQSTAT register */
#define PTC_DSEQSTAT_WINLT_Pos                _UINT32_(1)                                          /* (PTC_DSEQSTAT) Window Comparator Low Threshold Position */
#define PTC_DSEQSTAT_WINLT_Msk                (_UINT32_(0x1) << PTC_DSEQSTAT_WINLT_Pos)            /* (PTC_DSEQSTAT) Window Comparator Low Threshold Mask */
#define PTC_DSEQSTAT_WINLT(value)             (PTC_DSEQSTAT_WINLT_Msk & (_UINT32_(value) << PTC_DSEQSTAT_WINLT_Pos)) /* Assignment of value for WINLT in the PTC_DSEQSTAT register */
#define PTC_DSEQSTAT_WINHT_Pos                _UINT32_(2)                                          /* (PTC_DSEQSTAT) Window Comparator High Threshold Position */
#define PTC_DSEQSTAT_WINHT_Msk                (_UINT32_(0x1) << PTC_DSEQSTAT_WINHT_Pos)            /* (PTC_DSEQSTAT) Window Comparator High Threshold Mask */
#define PTC_DSEQSTAT_WINHT(value)             (PTC_DSEQSTAT_WINHT_Msk & (_UINT32_(value) << PTC_DSEQSTAT_WINHT_Pos)) /* Assignment of value for WINHT in the PTC_DSEQSTAT register */
#define PTC_DSEQSTAT_XSEL_Pos                 _UINT32_(3)                                          /* (PTC_DSEQSTAT) X-line n  Selection lower/upper half word Position */
#define PTC_DSEQSTAT_XSEL_Msk                 (_UINT32_(0xF) << PTC_DSEQSTAT_XSEL_Pos)             /* (PTC_DSEQSTAT) X-line n  Selection lower/upper half word Mask */
#define PTC_DSEQSTAT_XSEL(value)              (PTC_DSEQSTAT_XSEL_Msk & (_UINT32_(value) << PTC_DSEQSTAT_XSEL_Pos)) /* Assignment of value for XSEL in the PTC_DSEQSTAT register */
#define PTC_DSEQSTAT_YSEL_Pos                 _UINT32_(7)                                          /* (PTC_DSEQSTAT) Y-line n Selection lower/upper half word Position */
#define PTC_DSEQSTAT_YSEL_Msk                 (_UINT32_(0xF) << PTC_DSEQSTAT_YSEL_Pos)             /* (PTC_DSEQSTAT) Y-line n Selection lower/upper half word Mask */
#define PTC_DSEQSTAT_YSEL(value)              (PTC_DSEQSTAT_YSEL_Msk & (_UINT32_(value) << PTC_DSEQSTAT_YSEL_Pos)) /* Assignment of value for YSEL in the PTC_DSEQSTAT register */
#define PTC_DSEQSTAT_POL_Pos                  _UINT32_(11)                                         /* (PTC_DSEQSTAT) Polarity n lower/upper half word Position */
#define PTC_DSEQSTAT_POL_Msk                  (_UINT32_(0xF) << PTC_DSEQSTAT_POL_Pos)              /* (PTC_DSEQSTAT) Polarity n lower/upper half word Mask */
#define PTC_DSEQSTAT_POL(value)               (PTC_DSEQSTAT_POL_Msk & (_UINT32_(value) << PTC_DSEQSTAT_POL_Pos)) /* Assignment of value for POL in the PTC_DSEQSTAT register */
#define PTC_DSEQSTAT_CC_Pos                   _UINT32_(15)                                         /* (PTC_DSEQSTAT) Compensation Capacitor Position */
#define PTC_DSEQSTAT_CC_Msk                   (_UINT32_(0x1) << PTC_DSEQSTAT_CC_Pos)               /* (PTC_DSEQSTAT) Compensation Capacitor Mask */
#define PTC_DSEQSTAT_CC(value)                (PTC_DSEQSTAT_CC_Msk & (_UINT32_(value) << PTC_DSEQSTAT_CC_Pos)) /* Assignment of value for CC in the PTC_DSEQSTAT register */
#define PTC_DSEQSTAT_CI_Pos                   _UINT32_(16)                                         /* (PTC_DSEQSTAT) Integration Capacitor Position */
#define PTC_DSEQSTAT_CI_Msk                   (_UINT32_(0x1) << PTC_DSEQSTAT_CI_Pos)               /* (PTC_DSEQSTAT) Integration Capacitor Mask */
#define PTC_DSEQSTAT_CI(value)                (PTC_DSEQSTAT_CI_Msk & (_UINT32_(value) << PTC_DSEQSTAT_CI_Pos)) /* Assignment of value for CI in the PTC_DSEQSTAT register */
#define PTC_DSEQSTAT_CSD_Pos                  _UINT32_(17)                                         /* (PTC_DSEQSTAT) Charge Share Delay Position */
#define PTC_DSEQSTAT_CSD_Msk                  (_UINT32_(0x1) << PTC_DSEQSTAT_CSD_Pos)              /* (PTC_DSEQSTAT) Charge Share Delay Mask */
#define PTC_DSEQSTAT_CSD(value)               (PTC_DSEQSTAT_CSD_Msk & (_UINT32_(value) << PTC_DSEQSTAT_CSD_Pos)) /* Assignment of value for CSD in the PTC_DSEQSTAT register */
#define PTC_DSEQSTAT_BUSY_Pos                 _UINT32_(31)                                         /* (PTC_DSEQSTAT) Sequencing Busy Position */
#define PTC_DSEQSTAT_BUSY_Msk                 (_UINT32_(0x1) << PTC_DSEQSTAT_BUSY_Pos)             /* (PTC_DSEQSTAT) Sequencing Busy Mask */
#define PTC_DSEQSTAT_BUSY(value)              (PTC_DSEQSTAT_BUSY_Msk & (_UINT32_(value) << PTC_DSEQSTAT_BUSY_Pos)) /* Assignment of value for BUSY in the PTC_DSEQSTAT register */
#define PTC_DSEQSTAT_Msk                      _UINT32_(0x8003FFFF)                                 /* (PTC_DSEQSTAT) Register Mask  */


/* -------- PTC_DSEQDATA : (PTC Offset: 0x68) ( /W 32) DMA SEQUENCE DATA - Register -------- */
#define PTC_DSEQDATA_RESETVALUE               _UINT32_(0x00)                                       /*  (PTC_DSEQDATA) DMA SEQUENCE DATA - Register  Reset Value */

#define PTC_DSEQDATA_DATA_Pos                 _UINT32_(0)                                          /* (PTC_DSEQDATA) DMA Sequential Data. Position */
#define PTC_DSEQDATA_DATA_Msk                 (_UINT32_(0xFFFFFFFF) << PTC_DSEQDATA_DATA_Pos)      /* (PTC_DSEQDATA) DMA Sequential Data. Mask */
#define PTC_DSEQDATA_DATA(value)              (PTC_DSEQDATA_DATA_Msk & (_UINT32_(value) << PTC_DSEQDATA_DATA_Pos)) /* Assignment of value for DATA in the PTC_DSEQDATA register */
#define PTC_DSEQDATA_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (PTC_DSEQDATA) Register Mask  */


/* -------- PTC_RESULT : (PTC Offset: 0x6C) ( R/ 32) Register -------- */
#define PTC_RESULT_RESETVALUE                 _UINT32_(0x00)                                       /*  (PTC_RESULT) Register  Reset Value */

#define PTC_RESULT_RES_Pos                    _UINT32_(0)                                          /* (PTC_RESULT) Result Conversion Value. Position */
#define PTC_RESULT_RES_Msk                    (_UINT32_(0xFFF) << PTC_RESULT_RES_Pos)              /* (PTC_RESULT) Result Conversion Value. Mask */
#define PTC_RESULT_RES(value)                 (PTC_RESULT_RES_Msk & (_UINT32_(value) << PTC_RESULT_RES_Pos)) /* Assignment of value for RES in the PTC_RESULT register */
#define PTC_RESULT_ACCRES_Pos                 _UINT32_(16)                                         /* (PTC_RESULT) Accumulated Result Conversion Value. Position */
#define PTC_RESULT_ACCRES_Msk                 (_UINT32_(0xFFFF) << PTC_RESULT_ACCRES_Pos)          /* (PTC_RESULT) Accumulated Result Conversion Value. Mask */
#define PTC_RESULT_ACCRES(value)              (PTC_RESULT_ACCRES_Msk & (_UINT32_(value) << PTC_RESULT_ACCRES_Pos)) /* Assignment of value for ACCRES in the PTC_RESULT register */
#define PTC_RESULT_Msk                        _UINT32_(0xFFFF0FFF)                                 /* (PTC_RESULT) Register Mask  */


/* PTC register offsets definitions */
#define PTC_CTRLA_REG_OFST             _UINT32_(0x00)      /* (PTC_CTRLA) CONTROL ENABLE REGISTER Offset */
#define PTC_EVCTRL_REG_OFST            _UINT32_(0x04)      /* (PTC_EVCTRL) EVENT CONTROL REGISTER Offset */
#define PTC_DBGCTRL_REG_OFST           _UINT32_(0x08)      /* (PTC_DBGCTRL) DEBUG CONTROL Register Offset */
#define PTC_CTRLB_REG_OFST             _UINT32_(0x0C)      /* (PTC_CTRLB) CONTROL B Register Offset */
#define PTC_CTRLC_REG_OFST             _UINT32_(0x10)      /* (PTC_CTRLC) CONTROL C Register Offset */
#define PTC_CTRLD_REG_OFST             _UINT32_(0x14)      /* (PTC_CTRLD) CONTROL D Register Offset */
#define PTC_CTRLE_REG_OFST             _UINT32_(0x18)      /* (PTC_CTRLE) CONTROL E REGISTER Offset */
#define PTC_SWTRIG_REG_OFST            _UINT32_(0x1C)      /* (PTC_SWTRIG) Software Trigger Register Offset */
#define PTC_WINLT_REG_OFST             _UINT32_(0x20)      /* (PTC_WINLT) Window Comparator Low Threshold Register Offset */
#define PTC_WINHT_REG_OFST             _UINT32_(0x24)      /* (PTC_WINHT) Window Comparator High Threshold Register Offset */
#define PTC_PINEN1_REG_OFST            _UINT32_(0x28)      /* (PTC_PINEN1) PTC Line Enable 1 Register Offset */
#define PTC_PINEN2_REG_OFST            _UINT32_(0x2C)      /* (PTC_PINEN2) PTC Line Enable 2 Register Offset */
#define PTC_XSEL1_REG_OFST             _UINT32_(0x30)      /* (PTC_XSEL1) X Line Selection 1 Register Offset */
#define PTC_XSEL2_REG_OFST             _UINT32_(0x34)      /* (PTC_XSEL2) X Line Selection 2 Register Offset */
#define PTC_YSEL1_REG_OFST             _UINT32_(0x38)      /* (PTC_YSEL1) Y Line Selection 1 Register Offset */
#define PTC_YSEL2_REG_OFST             _UINT32_(0x3C)      /* (PTC_YSEL2) Y Line Selection 2 Register Offset */
#define PTC_POLCTRL1_REG_OFST          _UINT32_(0x40)      /* (PTC_POLCTRL1) Polarity Control 1 Register Offset */
#define PTC_POLCTRL2_REG_OFST          _UINT32_(0x44)      /* (PTC_POLCTRL2) Polarity Control 2 Register Offset */
#define PTC_INTENCLR_REG_OFST          _UINT32_(0x48)      /* (PTC_INTENCLR) INTERRUPT ENABLE CLEAR Register Offset */
#define PTC_INTENSET_REG_OFST          _UINT32_(0x4C)      /* (PTC_INTENSET) INTERRUPT ENABLE SET Register Offset */
#define PTC_INTFLAGSET_REG_OFST        _UINT32_(0x50)      /* (PTC_INTFLAGSET) INTERRUPT FLAG SET Register Offset */
#define PTC_INTFLAG_REG_OFST           _UINT32_(0x54)      /* (PTC_INTFLAG) INTERRUPT FLAG STATUS and CLEAR Register Offset */
#define PTC_STATUS_REG_OFST            _UINT32_(0x58)      /* (PTC_STATUS) STATUS Register Offset */
#define PTC_SYNCBUSY_REG_OFST          _UINT32_(0x5C)      /* (PTC_SYNCBUSY) Synchronization Register Offset */
#define PTC_DSEQCTRL_REG_OFST          _UINT32_(0x60)      /* (PTC_DSEQCTRL) DMA SEQUENCE CTRL Register Offset */
#define PTC_DSEQSTAT_REG_OFST          _UINT32_(0x64)      /* (PTC_DSEQSTAT) DMA SEQUENCE STATUS - Register Offset */
#define PTC_DSEQDATA_REG_OFST          _UINT32_(0x68)      /* (PTC_DSEQDATA) DMA SEQUENCE DATA - Register Offset */
#define PTC_RESULT_REG_OFST            _UINT32_(0x6C)      /* (PTC_RESULT) Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* PTC register API structure */
typedef struct
{  /* Polaris Peripheral Touch Controller */
  __IO  uint32_t                       PTC_CTRLA;          /* Offset: 0x00 (R/W  32) CONTROL ENABLE REGISTER */
  __IO  uint32_t                       PTC_EVCTRL;         /* Offset: 0x04 (R/W  32) EVENT CONTROL REGISTER */
  __IO  uint32_t                       PTC_DBGCTRL;        /* Offset: 0x08 (R/W  32) DEBUG CONTROL Register */
  __IO  uint32_t                       PTC_CTRLB;          /* Offset: 0x0C (R/W  32) CONTROL B Register */
  __IO  uint32_t                       PTC_CTRLC;          /* Offset: 0x10 (R/W  32) CONTROL C Register */
  __IO  uint32_t                       PTC_CTRLD;          /* Offset: 0x14 (R/W  32) CONTROL D Register */
  __IO  uint32_t                       PTC_CTRLE;          /* Offset: 0x18 (R/W  32) CONTROL E REGISTER */
  __IO  uint32_t                       PTC_SWTRIG;         /* Offset: 0x1C (R/W  32) Software Trigger Register */
  __IO  uint32_t                       PTC_WINLT;          /* Offset: 0x20 (R/W  32) Window Comparator Low Threshold Register */
  __IO  uint32_t                       PTC_WINHT;          /* Offset: 0x24 (R/W  32) Window Comparator High Threshold Register */
  __IO  uint32_t                       PTC_PINEN1;         /* Offset: 0x28 (R/W  32) PTC Line Enable 1 Register */
  __IO  uint32_t                       PTC_PINEN2;         /* Offset: 0x2C (R/W  32) PTC Line Enable 2 Register */
  __IO  uint32_t                       PTC_XSEL1;          /* Offset: 0x30 (R/W  32) X Line Selection 1 Register */
  __IO  uint32_t                       PTC_XSEL2;          /* Offset: 0x34 (R/W  32) X Line Selection 2 Register */
  __IO  uint32_t                       PTC_YSEL1;          /* Offset: 0x38 (R/W  32) Y Line Selection 1 Register */
  __IO  uint32_t                       PTC_YSEL2;          /* Offset: 0x3C (R/W  32) Y Line Selection 2 Register */
  __IO  uint32_t                       PTC_POLCTRL1;       /* Offset: 0x40 (R/W  32) Polarity Control 1 Register */
  __IO  uint32_t                       PTC_POLCTRL2;       /* Offset: 0x44 (R/W  32) Polarity Control 2 Register */
  __IO  uint32_t                       PTC_INTENCLR;       /* Offset: 0x48 (R/W  32) INTERRUPT ENABLE CLEAR Register */
  __IO  uint32_t                       PTC_INTENSET;       /* Offset: 0x4C (R/W  32) INTERRUPT ENABLE SET Register */
  __IO  uint32_t                       PTC_INTFLAGSET;     /* Offset: 0x50 (R/W  32) INTERRUPT FLAG SET Register */
  __IO  uint32_t                       PTC_INTFLAG;        /* Offset: 0x54 (R/W  32) INTERRUPT FLAG STATUS and CLEAR Register */
  __I   uint32_t                       PTC_STATUS;         /* Offset: 0x58 (R/   32) STATUS Register */
  __I   uint32_t                       PTC_SYNCBUSY;       /* Offset: 0x5C (R/   32) Synchronization Register */
  __IO  uint32_t                       PTC_DSEQCTRL;       /* Offset: 0x60 (R/W  32) DMA SEQUENCE CTRL Register */
  __I   uint32_t                       PTC_DSEQSTAT;       /* Offset: 0x64 (R/   32) DMA SEQUENCE STATUS - Register */
  __O   uint32_t                       PTC_DSEQDATA;       /* Offset: 0x68 ( /W  32) DMA SEQUENCE DATA - Register */
  __I   uint32_t                       PTC_RESULT;         /* Offset: 0x6C (R/   32) Register */
} ptc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMGC00_PTC_COMPONENT_H_ */
