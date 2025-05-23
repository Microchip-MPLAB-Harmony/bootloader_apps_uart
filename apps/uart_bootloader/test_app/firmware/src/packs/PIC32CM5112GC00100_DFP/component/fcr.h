/*
 * Component description for FCR
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
#ifndef _PIC32CMGC00_FCR_COMPONENT_H_
#define _PIC32CMGC00_FCR_COMPONENT_H_

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR FCR                       */
/* ************************************************************************** */

/* -------- FCR_CTRLA : (FCR Offset: 0x00) (R/W 32) CTRL A REGISTER -------- */
#define FCR_CTRLA_RESETVALUE                  _UINT32_(0x8000)                                     /*  (FCR_CTRLA) CTRL A REGISTER  Reset Value */

#define FCR_CTRLA_PRIV_Pos                    _UINT32_(2)                                          /* (FCR_CTRLA) Privileged Access Only Position */
#define FCR_CTRLA_PRIV_Msk                    (_UINT32_(0x1) << FCR_CTRLA_PRIV_Pos)                /* (FCR_CTRLA) Privileged Access Only Mask */
#define FCR_CTRLA_PRIV(value)                 (FCR_CTRLA_PRIV_Msk & (_UINT32_(value) << FCR_CTRLA_PRIV_Pos)) /* Assignment of value for PRIV in the FCR_CTRLA register */
#define   FCR_CTRLA_PRIV_DISABLE_Val          _UINT32_(0x0)                                        /* (FCR_CTRLA) Macro register accessible in privileged and unprivileged accesses.  */
#define   FCR_CTRLA_PRIV_ENABLE_Val           _UINT32_(0x1)                                        /* (FCR_CTRLA) Macro registers only accessible in privileged accesses  */
#define FCR_CTRLA_PRIV_DISABLE                (FCR_CTRLA_PRIV_DISABLE_Val << FCR_CTRLA_PRIV_Pos)   /* (FCR_CTRLA) Macro register accessible in privileged and unprivileged accesses. Position */
#define FCR_CTRLA_PRIV_ENABLE                 (FCR_CTRLA_PRIV_ENABLE_Val << FCR_CTRLA_PRIV_Pos)    /* (FCR_CTRLA) Macro registers only accessible in privileged accesses Position */
#define FCR_CTRLA_FWS_Pos                     _UINT32_(8)                                          /* (FCR_CTRLA) Flash Access Time Defined in terms of AHB Clock Wait States Position */
#define FCR_CTRLA_FWS_Msk                     (_UINT32_(0xF) << FCR_CTRLA_FWS_Pos)                 /* (FCR_CTRLA) Flash Access Time Defined in terms of AHB Clock Wait States Mask */
#define FCR_CTRLA_FWS(value)                  (FCR_CTRLA_FWS_Msk & (_UINT32_(value) << FCR_CTRLA_FWS_Pos)) /* Assignment of value for FWS in the FCR_CTRLA register */
#define   FCR_CTRLA_FWS_0_Val                 _UINT32_(0x0)                                        /* (FCR_CTRLA) Zero Wait States  */
#define   FCR_CTRLA_FWS_1_Val                 _UINT32_(0x1)                                        /* (FCR_CTRLA) One Wait State  */
#define   FCR_CTRLA_FWS_14_Val                _UINT32_(0xE)                                        /* (FCR_CTRLA) Fourteen Wait States  */
#define   FCR_CTRLA_FWS_15_Val                _UINT32_(0xF)                                        /* (FCR_CTRLA) Fifteen Wait States  */
#define FCR_CTRLA_FWS_0                       (FCR_CTRLA_FWS_0_Val << FCR_CTRLA_FWS_Pos)           /* (FCR_CTRLA) Zero Wait States Position */
#define FCR_CTRLA_FWS_1                       (FCR_CTRLA_FWS_1_Val << FCR_CTRLA_FWS_Pos)           /* (FCR_CTRLA) One Wait State Position */
#define FCR_CTRLA_FWS_14                      (FCR_CTRLA_FWS_14_Val << FCR_CTRLA_FWS_Pos)          /* (FCR_CTRLA) Fourteen Wait States Position */
#define FCR_CTRLA_FWS_15                      (FCR_CTRLA_FWS_15_Val << FCR_CTRLA_FWS_Pos)          /* (FCR_CTRLA) Fifteen Wait States Position */
#define FCR_CTRLA_ADRWS_Pos                   _UINT32_(14)                                         /* (FCR_CTRLA) Address Wait State Enable Position */
#define FCR_CTRLA_ADRWS_Msk                   (_UINT32_(0x1) << FCR_CTRLA_ADRWS_Pos)               /* (FCR_CTRLA) Address Wait State Enable Mask */
#define FCR_CTRLA_ADRWS(value)                (FCR_CTRLA_ADRWS_Msk & (_UINT32_(value) << FCR_CTRLA_ADRWS_Pos)) /* Assignment of value for ADRWS in the FCR_CTRLA register */
#define   FCR_CTRLA_ADRWS_ZERO_Val            _UINT32_(0x0)                                        /* (FCR_CTRLA) Add 0 Address Wait States - allowing for higher performance at lower clock frequencies  */
#define   FCR_CTRLA_ADRWS_ONE_Val             _UINT32_(0x1)                                        /* (FCR_CTRLA) Add 1 Address Wait State - allowing for higher clock frequencies  */
#define FCR_CTRLA_ADRWS_ZERO                  (FCR_CTRLA_ADRWS_ZERO_Val << FCR_CTRLA_ADRWS_Pos)    /* (FCR_CTRLA) Add 0 Address Wait States - allowing for higher performance at lower clock frequencies Position */
#define FCR_CTRLA_ADRWS_ONE                   (FCR_CTRLA_ADRWS_ONE_Val << FCR_CTRLA_ADRWS_Pos)     /* (FCR_CTRLA) Add 1 Address Wait State - allowing for higher clock frequencies Position */
#define FCR_CTRLA_AUTOWS_Pos                  _UINT32_(15)                                         /* (FCR_CTRLA) Automatic Wait State Enable. Position */
#define FCR_CTRLA_AUTOWS_Msk                  (_UINT32_(0x1) << FCR_CTRLA_AUTOWS_Pos)              /* (FCR_CTRLA) Automatic Wait State Enable. Mask */
#define FCR_CTRLA_AUTOWS(value)               (FCR_CTRLA_AUTOWS_Msk & (_UINT32_(value) << FCR_CTRLA_AUTOWS_Pos)) /* Assignment of value for AUTOWS in the FCR_CTRLA register */
#define   FCR_CTRLA_AUTOWS_DISABLE_Val        _UINT32_(0x0)                                        /* (FCR_CTRLA) Use FWS: Total flash wait states are ADRWS + FWS  */
#define   FCR_CTRLA_AUTOWS_ENABLE_Val         _UINT32_(0x1)                                        /* (FCR_CTRLA) Use Automatic wait states: Total flash wait states are ADRWS + Taws  */
#define FCR_CTRLA_AUTOWS_DISABLE              (FCR_CTRLA_AUTOWS_DISABLE_Val << FCR_CTRLA_AUTOWS_Pos) /* (FCR_CTRLA) Use FWS: Total flash wait states are ADRWS + FWS Position */
#define FCR_CTRLA_AUTOWS_ENABLE               (FCR_CTRLA_AUTOWS_ENABLE_Val << FCR_CTRLA_AUTOWS_Pos) /* (FCR_CTRLA) Use Automatic wait states: Total flash wait states are ADRWS + Taws Position */
#define FCR_CTRLA_RDBUFWS_Pos                 _UINT32_(16)                                         /* (FCR_CTRLA) Read Buffer Wait StatesPer AHB port control of deterministic or zero wait state read buffer access. Position */
#define FCR_CTRLA_RDBUFWS_Msk                 (_UINT32_(0x1) << FCR_CTRLA_RDBUFWS_Pos)             /* (FCR_CTRLA) Read Buffer Wait StatesPer AHB port control of deterministic or zero wait state read buffer access. Mask */
#define FCR_CTRLA_RDBUFWS(value)              (FCR_CTRLA_RDBUFWS_Msk & (_UINT32_(value) << FCR_CTRLA_RDBUFWS_Pos)) /* Assignment of value for RDBUFWS in the FCR_CTRLA register */
#define   FCR_CTRLA_RDBUFWS_ZEROWS_Val        _UINT32_(0x0)                                        /* (FCR_CTRLA) 0 Wait States  */
#define   FCR_CTRLA_RDBUFWS_DETERMINISTIC_Val _UINT32_(0x1)                                        /* (FCR_CTRLA) ADRWS + FWS wait state for hits to AHB read buffer  */
#define FCR_CTRLA_RDBUFWS_ZEROWS              (FCR_CTRLA_RDBUFWS_ZEROWS_Val << FCR_CTRLA_RDBUFWS_Pos) /* (FCR_CTRLA) 0 Wait States Position */
#define FCR_CTRLA_RDBUFWS_DETERMINISTIC       (FCR_CTRLA_RDBUFWS_DETERMINISTIC_Val << FCR_CTRLA_RDBUFWS_Pos) /* (FCR_CTRLA) ADRWS + FWS wait state for hits to AHB read buffer Position */
#define FCR_CTRLA_Msk                         _UINT32_(0x0001CF04)                                 /* (FCR_CTRLA) Register Mask  */


/* -------- FCR_CTRLB : (FCR Offset: 0x04) (R/W 32) CTRL B REGISTER -------- */
#define FCR_CTRLB_RESETVALUE                  _UINT32_(0x00)                                       /*  (FCR_CTRLB) CTRL B REGISTER  Reset Value */

#define FCR_CTRLB_PRM_Pos                     _UINT32_(0)                                          /* (FCR_CTRLB) Set NVM Power Reduction Mode Position */
#define FCR_CTRLB_PRM_Msk                     (_UINT32_(0x1) << FCR_CTRLB_PRM_Pos)                 /* (FCR_CTRLB) Set NVM Power Reduction Mode Mask */
#define FCR_CTRLB_PRM(value)                  (FCR_CTRLB_PRM_Msk & (_UINT32_(value) << FCR_CTRLB_PRM_Pos)) /* Assignment of value for PRM in the FCR_CTRLB register */
#define   FCR_CTRLB_PRM_NONE_Val              _UINT32_(0x0)                                        /* (FCR_CTRLB) No Action  */
#define   FCR_CTRLB_PRM_TOGGLE_Val            _UINT32_(0x1)                                        /* (FCR_CTRLB) Toggle the Flash Power Mode  */
#define FCR_CTRLB_PRM_NONE                    (FCR_CTRLB_PRM_NONE_Val << FCR_CTRLB_PRM_Pos)        /* (FCR_CTRLB) No Action Position */
#define FCR_CTRLB_PRM_TOGGLE                  (FCR_CTRLB_PRM_TOGGLE_Val << FCR_CTRLB_PRM_Pos)      /* (FCR_CTRLB) Toggle the Flash Power Mode Position */
#define FCR_CTRLB_CHEINV_Pos                  _UINT32_(7)                                          /* (FCR_CTRLB) Cache InvalidateCache invalidation takes 1 clock cycle, but may be delayed by an active read. Position */
#define FCR_CTRLB_CHEINV_Msk                  (_UINT32_(0x1) << FCR_CTRLB_CHEINV_Pos)              /* (FCR_CTRLB) Cache InvalidateCache invalidation takes 1 clock cycle, but may be delayed by an active read. Mask */
#define FCR_CTRLB_CHEINV(value)               (FCR_CTRLB_CHEINV_Msk & (_UINT32_(value) << FCR_CTRLB_CHEINV_Pos)) /* Assignment of value for CHEINV in the FCR_CTRLB register */
#define   FCR_CTRLB_CHEINV_NONE_Val           _UINT32_(0x0)                                        /* (FCR_CTRLB) No Action  */
#define   FCR_CTRLB_CHEINV_INV_Val            _UINT32_(0x1)                                        /* (FCR_CTRLB) Invalidate Cache  */
#define FCR_CTRLB_CHEINV_NONE                 (FCR_CTRLB_CHEINV_NONE_Val << FCR_CTRLB_CHEINV_Pos)  /* (FCR_CTRLB) No Action Position */
#define FCR_CTRLB_CHEINV_INV                  (FCR_CTRLB_CHEINV_INV_Val << FCR_CTRLB_CHEINV_Pos)   /* (FCR_CTRLB) Invalidate Cache Position */
#define FCR_CTRLB_SLP_Pos                     _UINT32_(8)                                          /* (FCR_CTRLB) NVM Power Reduction Mode selection during System Standby Sleep Position */
#define FCR_CTRLB_SLP_Msk                     (_UINT32_(0x3) << FCR_CTRLB_SLP_Pos)                 /* (FCR_CTRLB) NVM Power Reduction Mode selection during System Standby Sleep Mask */
#define FCR_CTRLB_SLP(value)                  (FCR_CTRLB_SLP_Msk & (_UINT32_(value) << FCR_CTRLB_SLP_Pos)) /* Assignment of value for SLP in the FCR_CTRLB register */
#define   FCR_CTRLB_SLP_MANUAL_Val            _UINT32_(0x0)                                        /* (FCR_CTRLB) Maintain state of STATUS.PRM on entry to Standby  */
#define   FCR_CTRLB_SLP_RSVD01_Val            _UINT32_(0x1)                                        /* (FCR_CTRLB) RSVD  */
#define   FCR_CTRLB_SLP_AUTOFAST_Val          _UINT32_(0x2)                                        /* (FCR_CTRLB) Enter Flash Hibernate on entry to Standby w/ wakeup to Auto Standby  */
#define   FCR_CTRLB_SLP_AUTOSLOW_Val          _UINT32_(0x3)                                        /* (FCR_CTRLB) Enter Flash Hibernate on entry to Standby w/ wakeup on first access  */
#define FCR_CTRLB_SLP_MANUAL                  (FCR_CTRLB_SLP_MANUAL_Val << FCR_CTRLB_SLP_Pos)      /* (FCR_CTRLB) Maintain state of STATUS.PRM on entry to Standby Position */
#define FCR_CTRLB_SLP_RSVD01                  (FCR_CTRLB_SLP_RSVD01_Val << FCR_CTRLB_SLP_Pos)      /* (FCR_CTRLB) RSVD Position */
#define FCR_CTRLB_SLP_AUTOFAST                (FCR_CTRLB_SLP_AUTOFAST_Val << FCR_CTRLB_SLP_Pos)    /* (FCR_CTRLB) Enter Flash Hibernate on entry to Standby w/ wakeup to Auto Standby Position */
#define FCR_CTRLB_SLP_AUTOSLOW                (FCR_CTRLB_SLP_AUTOSLOW_Val << FCR_CTRLB_SLP_Pos)    /* (FCR_CTRLB) Enter Flash Hibernate on entry to Standby w/ wakeup on first access Position */
#define FCR_CTRLB_CHEDIS_Pos                  _UINT32_(16)                                         /* (FCR_CTRLB) Cache Disable Position */
#define FCR_CTRLB_CHEDIS_Msk                  (_UINT32_(0x1) << FCR_CTRLB_CHEDIS_Pos)              /* (FCR_CTRLB) Cache Disable Mask */
#define FCR_CTRLB_CHEDIS(value)               (FCR_CTRLB_CHEDIS_Msk & (_UINT32_(value) << FCR_CTRLB_CHEDIS_Pos)) /* Assignment of value for CHEDIS in the FCR_CTRLB register */
#define   FCR_CTRLB_CHEDIS_ENABLE_Val         _UINT32_(0x0)                                        /* (FCR_CTRLB) Cache Enabled; Accesses to flash use AUTOWS/FSW selection.  */
#define   FCR_CTRLB_CHEDIS_DISABLE_Val        _UINT32_(0x1)                                        /* (FCR_CTRLB) Cache Disabled; Interface uses RDBUFWS selection.  */
#define FCR_CTRLB_CHEDIS_ENABLE               (FCR_CTRLB_CHEDIS_ENABLE_Val << FCR_CTRLB_CHEDIS_Pos) /* (FCR_CTRLB) Cache Enabled; Accesses to flash use AUTOWS/FSW selection. Position */
#define FCR_CTRLB_CHEDIS_DISABLE              (FCR_CTRLB_CHEDIS_DISABLE_Val << FCR_CTRLB_CHEDIS_Pos) /* (FCR_CTRLB) Cache Disabled; Interface uses RDBUFWS selection. Position */
#define FCR_CTRLB_PREFDIS_Pos                 _UINT32_(17)                                         /* (FCR_CTRLB) Prefetch Disable Position */
#define FCR_CTRLB_PREFDIS_Msk                 (_UINT32_(0x1) << FCR_CTRLB_PREFDIS_Pos)             /* (FCR_CTRLB) Prefetch Disable Mask */
#define FCR_CTRLB_PREFDIS(value)              (FCR_CTRLB_PREFDIS_Msk & (_UINT32_(value) << FCR_CTRLB_PREFDIS_Pos)) /* Assignment of value for PREFDIS in the FCR_CTRLB register */
#define   FCR_CTRLB_PREFDIS_ENABLE_Val        _UINT32_(0x0)                                        /* (FCR_CTRLB) Predictive Prefetch Enabled  */
#define   FCR_CTRLB_PREFDIS_DISABLE_Val       _UINT32_(0x1)                                        /* (FCR_CTRLB) Predictive Prefetch Disabled  */
#define FCR_CTRLB_PREFDIS_ENABLE              (FCR_CTRLB_PREFDIS_ENABLE_Val << FCR_CTRLB_PREFDIS_Pos) /* (FCR_CTRLB) Predictive Prefetch Enabled Position */
#define FCR_CTRLB_PREFDIS_DISABLE             (FCR_CTRLB_PREFDIS_DISABLE_Val << FCR_CTRLB_PREFDIS_Pos) /* (FCR_CTRLB) Predictive Prefetch Disabled Position */
#define FCR_CTRLB_Msk                         _UINT32_(0x00030381)                                 /* (FCR_CTRLB) Register Mask  */


/* -------- FCR_INTENCLR : (FCR Offset: 0x08) (R/W 32) Interrupt Enable Clear REGISTER -------- */
#define FCR_INTENCLR_RESETVALUE               _UINT32_(0x00)                                       /*  (FCR_INTENCLR) Interrupt Enable Clear REGISTER  Reset Value */

#define FCR_INTENCLR_SERR_Pos                 _UINT32_(0)                                          /* (FCR_INTENCLR) Flash SEC Interrupt Clear Enable Position */
#define FCR_INTENCLR_SERR_Msk                 (_UINT32_(0x1) << FCR_INTENCLR_SERR_Pos)             /* (FCR_INTENCLR) Flash SEC Interrupt Clear Enable Mask */
#define FCR_INTENCLR_SERR(value)              (FCR_INTENCLR_SERR_Msk & (_UINT32_(value) << FCR_INTENCLR_SERR_Pos)) /* Assignment of value for SERR in the FCR_INTENCLR register */
#define   FCR_INTENCLR_SERR_0_Val             _UINT32_(0x0)                                        /* (FCR_INTENCLR) Interrupt Disabled  */
#define   FCR_INTENCLR_SERR_1_Val             _UINT32_(0x1)                                        /* (FCR_INTENCLR) Interrupt Enabled  */
#define FCR_INTENCLR_SERR_0                   (FCR_INTENCLR_SERR_0_Val << FCR_INTENCLR_SERR_Pos)   /* (FCR_INTENCLR) Interrupt Disabled Position */
#define FCR_INTENCLR_SERR_1                   (FCR_INTENCLR_SERR_1_Val << FCR_INTENCLR_SERR_Pos)   /* (FCR_INTENCLR) Interrupt Enabled Position */
#define FCR_INTENCLR_CRCDONE_Pos              _UINT32_(8)                                          /* (FCR_INTENCLR) CRC Calculation Done Clear Enable Position */
#define FCR_INTENCLR_CRCDONE_Msk              (_UINT32_(0x1) << FCR_INTENCLR_CRCDONE_Pos)          /* (FCR_INTENCLR) CRC Calculation Done Clear Enable Mask */
#define FCR_INTENCLR_CRCDONE(value)           (FCR_INTENCLR_CRCDONE_Msk & (_UINT32_(value) << FCR_INTENCLR_CRCDONE_Pos)) /* Assignment of value for CRCDONE in the FCR_INTENCLR register */
#define   FCR_INTENCLR_CRCDONE_0_Val          _UINT32_(0x0)                                        /* (FCR_INTENCLR) Interrupt Disabled  */
#define   FCR_INTENCLR_CRCDONE_1_Val          _UINT32_(0x1)                                        /* (FCR_INTENCLR) Interrupt Enabled  */
#define FCR_INTENCLR_CRCDONE_0                (FCR_INTENCLR_CRCDONE_0_Val << FCR_INTENCLR_CRCDONE_Pos) /* (FCR_INTENCLR) Interrupt Disabled Position */
#define FCR_INTENCLR_CRCDONE_1                (FCR_INTENCLR_CRCDONE_1_Val << FCR_INTENCLR_CRCDONE_Pos) /* (FCR_INTENCLR) Interrupt Enabled Position */
#define FCR_INTENCLR_CRCERR_Pos               _UINT32_(9)                                          /* (FCR_INTENCLR) CRC Error Clear Enable Position */
#define FCR_INTENCLR_CRCERR_Msk               (_UINT32_(0x1) << FCR_INTENCLR_CRCERR_Pos)           /* (FCR_INTENCLR) CRC Error Clear Enable Mask */
#define FCR_INTENCLR_CRCERR(value)            (FCR_INTENCLR_CRCERR_Msk & (_UINT32_(value) << FCR_INTENCLR_CRCERR_Pos)) /* Assignment of value for CRCERR in the FCR_INTENCLR register */
#define   FCR_INTENCLR_CRCERR_0_Val           _UINT32_(0x0)                                        /* (FCR_INTENCLR) Interrupt Disabled  */
#define   FCR_INTENCLR_CRCERR_1_Val           _UINT32_(0x1)                                        /* (FCR_INTENCLR) Interrupt Enabled  */
#define FCR_INTENCLR_CRCERR_0                 (FCR_INTENCLR_CRCERR_0_Val << FCR_INTENCLR_CRCERR_Pos) /* (FCR_INTENCLR) Interrupt Disabled Position */
#define FCR_INTENCLR_CRCERR_1                 (FCR_INTENCLR_CRCERR_1_Val << FCR_INTENCLR_CRCERR_Pos) /* (FCR_INTENCLR) Interrupt Enabled Position */
#define FCR_INTENCLR_FLTCAP_Pos               _UINT32_(16)                                         /* (FCR_INTENCLR) ECC Fault Capture Clear Enable Position */
#define FCR_INTENCLR_FLTCAP_Msk               (_UINT32_(0x1) << FCR_INTENCLR_FLTCAP_Pos)           /* (FCR_INTENCLR) ECC Fault Capture Clear Enable Mask */
#define FCR_INTENCLR_FLTCAP(value)            (FCR_INTENCLR_FLTCAP_Msk & (_UINT32_(value) << FCR_INTENCLR_FLTCAP_Pos)) /* Assignment of value for FLTCAP in the FCR_INTENCLR register */
#define   FCR_INTENCLR_FLTCAP_0_Val           _UINT32_(0x0)                                        /* (FCR_INTENCLR) Interrupt Disabled  */
#define   FCR_INTENCLR_FLTCAP_1_Val           _UINT32_(0x1)                                        /* (FCR_INTENCLR) Interrupt Enabled  */
#define FCR_INTENCLR_FLTCAP_0                 (FCR_INTENCLR_FLTCAP_0_Val << FCR_INTENCLR_FLTCAP_Pos) /* (FCR_INTENCLR) Interrupt Disabled Position */
#define FCR_INTENCLR_FLTCAP_1                 (FCR_INTENCLR_FLTCAP_1_Val << FCR_INTENCLR_FLTCAP_Pos) /* (FCR_INTENCLR) Interrupt Enabled Position */
#define FCR_INTENCLR_Msk                      _UINT32_(0x00010301)                                 /* (FCR_INTENCLR) Register Mask  */


/* -------- FCR_INTENSET : (FCR Offset: 0x0C) (R/W 32) Interrupt Enable SET REGISTER -------- */
#define FCR_INTENSET_RESETVALUE               _UINT32_(0x00)                                       /*  (FCR_INTENSET) Interrupt Enable SET REGISTER  Reset Value */

#define FCR_INTENSET_SERR_Pos                 _UINT32_(0)                                          /* (FCR_INTENSET) Flash SEC Interrupt Set Enable Position */
#define FCR_INTENSET_SERR_Msk                 (_UINT32_(0x1) << FCR_INTENSET_SERR_Pos)             /* (FCR_INTENSET) Flash SEC Interrupt Set Enable Mask */
#define FCR_INTENSET_SERR(value)              (FCR_INTENSET_SERR_Msk & (_UINT32_(value) << FCR_INTENSET_SERR_Pos)) /* Assignment of value for SERR in the FCR_INTENSET register */
#define   FCR_INTENSET_SERR_0_Val             _UINT32_(0x0)                                        /* (FCR_INTENSET) Interrupt Disabled  */
#define   FCR_INTENSET_SERR_1_Val             _UINT32_(0x1)                                        /* (FCR_INTENSET) Interrupt Enabled  */
#define FCR_INTENSET_SERR_0                   (FCR_INTENSET_SERR_0_Val << FCR_INTENSET_SERR_Pos)   /* (FCR_INTENSET) Interrupt Disabled Position */
#define FCR_INTENSET_SERR_1                   (FCR_INTENSET_SERR_1_Val << FCR_INTENSET_SERR_Pos)   /* (FCR_INTENSET) Interrupt Enabled Position */
#define FCR_INTENSET_CRCDONE_Pos              _UINT32_(8)                                          /* (FCR_INTENSET) CRC Calculation Done Set Enable Position */
#define FCR_INTENSET_CRCDONE_Msk              (_UINT32_(0x1) << FCR_INTENSET_CRCDONE_Pos)          /* (FCR_INTENSET) CRC Calculation Done Set Enable Mask */
#define FCR_INTENSET_CRCDONE(value)           (FCR_INTENSET_CRCDONE_Msk & (_UINT32_(value) << FCR_INTENSET_CRCDONE_Pos)) /* Assignment of value for CRCDONE in the FCR_INTENSET register */
#define   FCR_INTENSET_CRCDONE_0_Val          _UINT32_(0x0)                                        /* (FCR_INTENSET) Interrupt Disabled  */
#define   FCR_INTENSET_CRCDONE_1_Val          _UINT32_(0x1)                                        /* (FCR_INTENSET) Interrupt Enabled  */
#define FCR_INTENSET_CRCDONE_0                (FCR_INTENSET_CRCDONE_0_Val << FCR_INTENSET_CRCDONE_Pos) /* (FCR_INTENSET) Interrupt Disabled Position */
#define FCR_INTENSET_CRCDONE_1                (FCR_INTENSET_CRCDONE_1_Val << FCR_INTENSET_CRCDONE_Pos) /* (FCR_INTENSET) Interrupt Enabled Position */
#define FCR_INTENSET_CRCERR_Pos               _UINT32_(9)                                          /* (FCR_INTENSET) CRC Error Set Enable Position */
#define FCR_INTENSET_CRCERR_Msk               (_UINT32_(0x1) << FCR_INTENSET_CRCERR_Pos)           /* (FCR_INTENSET) CRC Error Set Enable Mask */
#define FCR_INTENSET_CRCERR(value)            (FCR_INTENSET_CRCERR_Msk & (_UINT32_(value) << FCR_INTENSET_CRCERR_Pos)) /* Assignment of value for CRCERR in the FCR_INTENSET register */
#define   FCR_INTENSET_CRCERR_0_Val           _UINT32_(0x0)                                        /* (FCR_INTENSET) Interrupt Disabled  */
#define   FCR_INTENSET_CRCERR_1_Val           _UINT32_(0x1)                                        /* (FCR_INTENSET) Interrupt Enabled  */
#define FCR_INTENSET_CRCERR_0                 (FCR_INTENSET_CRCERR_0_Val << FCR_INTENSET_CRCERR_Pos) /* (FCR_INTENSET) Interrupt Disabled Position */
#define FCR_INTENSET_CRCERR_1                 (FCR_INTENSET_CRCERR_1_Val << FCR_INTENSET_CRCERR_Pos) /* (FCR_INTENSET) Interrupt Enabled Position */
#define FCR_INTENSET_FLTCAP_Pos               _UINT32_(16)                                         /* (FCR_INTENSET) ECC Fault Capture Set Enable Position */
#define FCR_INTENSET_FLTCAP_Msk               (_UINT32_(0x1) << FCR_INTENSET_FLTCAP_Pos)           /* (FCR_INTENSET) ECC Fault Capture Set Enable Mask */
#define FCR_INTENSET_FLTCAP(value)            (FCR_INTENSET_FLTCAP_Msk & (_UINT32_(value) << FCR_INTENSET_FLTCAP_Pos)) /* Assignment of value for FLTCAP in the FCR_INTENSET register */
#define   FCR_INTENSET_FLTCAP_0_Val           _UINT32_(0x0)                                        /* (FCR_INTENSET) Interrupt Disabled  */
#define   FCR_INTENSET_FLTCAP_1_Val           _UINT32_(0x1)                                        /* (FCR_INTENSET) Interrupt Enabled  */
#define FCR_INTENSET_FLTCAP_0                 (FCR_INTENSET_FLTCAP_0_Val << FCR_INTENSET_FLTCAP_Pos) /* (FCR_INTENSET) Interrupt Disabled Position */
#define FCR_INTENSET_FLTCAP_1                 (FCR_INTENSET_FLTCAP_1_Val << FCR_INTENSET_FLTCAP_Pos) /* (FCR_INTENSET) Interrupt Enabled Position */
#define FCR_INTENSET_Msk                      _UINT32_(0x00010301)                                 /* (FCR_INTENSET) Register Mask  */


/* -------- FCR_INTFLAG : (FCR Offset: 0x10) (R/W 32) Interrupt Flag REGISTER -------- */
#define FCR_INTFLAG_RESETVALUE                _UINT32_(0x00)                                       /*  (FCR_INTFLAG) Interrupt Flag REGISTER  Reset Value */

#define FCR_INTFLAG_SERR_Pos                  _UINT32_(0)                                          /* (FCR_INTFLAG) Flash SEC Interrupt Flag Position */
#define FCR_INTFLAG_SERR_Msk                  (_UINT32_(0x1) << FCR_INTFLAG_SERR_Pos)              /* (FCR_INTFLAG) Flash SEC Interrupt Flag Mask */
#define FCR_INTFLAG_SERR(value)               (FCR_INTFLAG_SERR_Msk & (_UINT32_(value) << FCR_INTFLAG_SERR_Pos)) /* Assignment of value for SERR in the FCR_INTFLAG register */
#define   FCR_INTFLAG_SERR_0_Val              _UINT32_(0x0)                                        /* (FCR_INTFLAG) No Interrupt Pending  */
#define   FCR_INTFLAG_SERR_1_Val              _UINT32_(0x1)                                        /* (FCR_INTFLAG) SECCNT Count reached  */
#define FCR_INTFLAG_SERR_0                    (FCR_INTFLAG_SERR_0_Val << FCR_INTFLAG_SERR_Pos)     /* (FCR_INTFLAG) No Interrupt Pending Position */
#define FCR_INTFLAG_SERR_1                    (FCR_INTFLAG_SERR_1_Val << FCR_INTFLAG_SERR_Pos)     /* (FCR_INTFLAG) SECCNT Count reached Position */
#define FCR_INTFLAG_CRCDONE_Pos               _UINT32_(8)                                          /* (FCR_INTFLAG) CRC Calculation Done Flag Position */
#define FCR_INTFLAG_CRCDONE_Msk               (_UINT32_(0x1) << FCR_INTFLAG_CRCDONE_Pos)           /* (FCR_INTFLAG) CRC Calculation Done Flag Mask */
#define FCR_INTFLAG_CRCDONE(value)            (FCR_INTFLAG_CRCDONE_Msk & (_UINT32_(value) << FCR_INTFLAG_CRCDONE_Pos)) /* Assignment of value for CRCDONE in the FCR_INTFLAG register */
#define   FCR_INTFLAG_CRCDONE_0_Val           _UINT32_(0x0)                                        /* (FCR_INTFLAG) No Interrupt Pending  */
#define   FCR_INTFLAG_CRCDONE_1_Val           _UINT32_(0x1)                                        /* (FCR_INTFLAG) Calculation Done  */
#define FCR_INTFLAG_CRCDONE_0                 (FCR_INTFLAG_CRCDONE_0_Val << FCR_INTFLAG_CRCDONE_Pos) /* (FCR_INTFLAG) No Interrupt Pending Position */
#define FCR_INTFLAG_CRCDONE_1                 (FCR_INTFLAG_CRCDONE_1_Val << FCR_INTFLAG_CRCDONE_Pos) /* (FCR_INTFLAG) Calculation Done Position */
#define FCR_INTFLAG_CRCERR_Pos                _UINT32_(9)                                          /* (FCR_INTFLAG) CRC Error Flag Position */
#define FCR_INTFLAG_CRCERR_Msk                (_UINT32_(0x1) << FCR_INTFLAG_CRCERR_Pos)            /* (FCR_INTFLAG) CRC Error Flag Mask */
#define FCR_INTFLAG_CRCERR(value)             (FCR_INTFLAG_CRCERR_Msk & (_UINT32_(value) << FCR_INTFLAG_CRCERR_Pos)) /* Assignment of value for CRCERR in the FCR_INTFLAG register */
#define   FCR_INTFLAG_CRCERR_0_Val            _UINT32_(0x0)                                        /* (FCR_INTFLAG) No Interrupt Pending  */
#define   FCR_INTFLAG_CRCERR_1_Val            _UINT32_(0x1)                                        /* (FCR_INTFLAG) CRCACC Is Not Equal to the XOR of CRCSUM and CRCFXOR  */
#define FCR_INTFLAG_CRCERR_0                  (FCR_INTFLAG_CRCERR_0_Val << FCR_INTFLAG_CRCERR_Pos) /* (FCR_INTFLAG) No Interrupt Pending Position */
#define FCR_INTFLAG_CRCERR_1                  (FCR_INTFLAG_CRCERR_1_Val << FCR_INTFLAG_CRCERR_Pos) /* (FCR_INTFLAG) CRCACC Is Not Equal to the XOR of CRCSUM and CRCFXOR Position */
#define FCR_INTFLAG_FLTCAP_Pos                _UINT32_(16)                                         /* (FCR_INTFLAG) ECC Fault Capture Flag Position */
#define FCR_INTFLAG_FLTCAP_Msk                (_UINT32_(0x1) << FCR_INTFLAG_FLTCAP_Pos)            /* (FCR_INTFLAG) ECC Fault Capture Flag Mask */
#define FCR_INTFLAG_FLTCAP(value)             (FCR_INTFLAG_FLTCAP_Msk & (_UINT32_(value) << FCR_INTFLAG_FLTCAP_Pos)) /* Assignment of value for FLTCAP in the FCR_INTFLAG register */
#define   FCR_INTFLAG_FLTCAP_0_Val            _UINT32_(0x0)                                        /* (FCR_INTFLAG) No Interrupt Pending  */
#define   FCR_INTFLAG_FLTCAP_1_Val            _UINT32_(0x1)                                        /* (FCR_INTFLAG) An ECC Fault Capture, related to FLTMD[], occurred  */
#define FCR_INTFLAG_FLTCAP_0                  (FCR_INTFLAG_FLTCAP_0_Val << FCR_INTFLAG_FLTCAP_Pos) /* (FCR_INTFLAG) No Interrupt Pending Position */
#define FCR_INTFLAG_FLTCAP_1                  (FCR_INTFLAG_FLTCAP_1_Val << FCR_INTFLAG_FLTCAP_Pos) /* (FCR_INTFLAG) An ECC Fault Capture, related to FLTMD[], occurred Position */
#define FCR_INTFLAG_Msk                       _UINT32_(0x00010301)                                 /* (FCR_INTFLAG) Register Mask  */


/* -------- FCR_INTFLAGSET : (FCR Offset: 0x14) (R/W 32) Interrupt Flag Set REGISTER -------- */
#define FCR_INTFLAGSET_RESETVALUE             _UINT32_(0x00)                                       /*  (FCR_INTFLAGSET) Interrupt Flag Set REGISTER  Reset Value */

#define FCR_INTFLAGSET_SERR_Pos               _UINT32_(0)                                          /* (FCR_INTFLAGSET) Flash SEC Interrupt Flag Position */
#define FCR_INTFLAGSET_SERR_Msk               (_UINT32_(0x1) << FCR_INTFLAGSET_SERR_Pos)           /* (FCR_INTFLAGSET) Flash SEC Interrupt Flag Mask */
#define FCR_INTFLAGSET_SERR(value)            (FCR_INTFLAGSET_SERR_Msk & (_UINT32_(value) << FCR_INTFLAGSET_SERR_Pos)) /* Assignment of value for SERR in the FCR_INTFLAGSET register */
#define   FCR_INTFLAGSET_SERR_0_Val           _UINT32_(0x0)                                        /* (FCR_INTFLAGSET) No Interrupt Pending  */
#define   FCR_INTFLAGSET_SERR_1_Val           _UINT32_(0x1)                                        /* (FCR_INTFLAGSET) SECCNT Count reached  */
#define FCR_INTFLAGSET_SERR_0                 (FCR_INTFLAGSET_SERR_0_Val << FCR_INTFLAGSET_SERR_Pos) /* (FCR_INTFLAGSET) No Interrupt Pending Position */
#define FCR_INTFLAGSET_SERR_1                 (FCR_INTFLAGSET_SERR_1_Val << FCR_INTFLAGSET_SERR_Pos) /* (FCR_INTFLAGSET) SECCNT Count reached Position */
#define FCR_INTFLAGSET_CRCDONE_Pos            _UINT32_(8)                                          /* (FCR_INTFLAGSET) CRC Calculation Done Flag Position */
#define FCR_INTFLAGSET_CRCDONE_Msk            (_UINT32_(0x1) << FCR_INTFLAGSET_CRCDONE_Pos)        /* (FCR_INTFLAGSET) CRC Calculation Done Flag Mask */
#define FCR_INTFLAGSET_CRCDONE(value)         (FCR_INTFLAGSET_CRCDONE_Msk & (_UINT32_(value) << FCR_INTFLAGSET_CRCDONE_Pos)) /* Assignment of value for CRCDONE in the FCR_INTFLAGSET register */
#define   FCR_INTFLAGSET_CRCDONE_0_Val        _UINT32_(0x0)                                        /* (FCR_INTFLAGSET) No effect  */
#define   FCR_INTFLAGSET_CRCDONE_1_Val        _UINT32_(0x1)                                        /* (FCR_INTFLAGSET) Set Interrupt Pending  */
#define FCR_INTFLAGSET_CRCDONE_0              (FCR_INTFLAGSET_CRCDONE_0_Val << FCR_INTFLAGSET_CRCDONE_Pos) /* (FCR_INTFLAGSET) No effect Position */
#define FCR_INTFLAGSET_CRCDONE_1              (FCR_INTFLAGSET_CRCDONE_1_Val << FCR_INTFLAGSET_CRCDONE_Pos) /* (FCR_INTFLAGSET) Set Interrupt Pending Position */
#define FCR_INTFLAGSET_CRCERR_Pos             _UINT32_(9)                                          /* (FCR_INTFLAGSET) CRC Error Flag Position */
#define FCR_INTFLAGSET_CRCERR_Msk             (_UINT32_(0x1) << FCR_INTFLAGSET_CRCERR_Pos)         /* (FCR_INTFLAGSET) CRC Error Flag Mask */
#define FCR_INTFLAGSET_CRCERR(value)          (FCR_INTFLAGSET_CRCERR_Msk & (_UINT32_(value) << FCR_INTFLAGSET_CRCERR_Pos)) /* Assignment of value for CRCERR in the FCR_INTFLAGSET register */
#define   FCR_INTFLAGSET_CRCERR_0_Val         _UINT32_(0x0)                                        /* (FCR_INTFLAGSET) No effect  */
#define   FCR_INTFLAGSET_CRCERR_1_Val         _UINT32_(0x1)                                        /* (FCR_INTFLAGSET) Set Interrupt Pending  */
#define FCR_INTFLAGSET_CRCERR_0               (FCR_INTFLAGSET_CRCERR_0_Val << FCR_INTFLAGSET_CRCERR_Pos) /* (FCR_INTFLAGSET) No effect Position */
#define FCR_INTFLAGSET_CRCERR_1               (FCR_INTFLAGSET_CRCERR_1_Val << FCR_INTFLAGSET_CRCERR_Pos) /* (FCR_INTFLAGSET) Set Interrupt Pending Position */
#define FCR_INTFLAGSET_FLTCAP_Pos             _UINT32_(16)                                         /* (FCR_INTFLAGSET) ECC Fault Capture Flag Position */
#define FCR_INTFLAGSET_FLTCAP_Msk             (_UINT32_(0x1) << FCR_INTFLAGSET_FLTCAP_Pos)         /* (FCR_INTFLAGSET) ECC Fault Capture Flag Mask */
#define FCR_INTFLAGSET_FLTCAP(value)          (FCR_INTFLAGSET_FLTCAP_Msk & (_UINT32_(value) << FCR_INTFLAGSET_FLTCAP_Pos)) /* Assignment of value for FLTCAP in the FCR_INTFLAGSET register */
#define   FCR_INTFLAGSET_FLTCAP_0_Val         _UINT32_(0x0)                                        /* (FCR_INTFLAGSET) No effect  */
#define   FCR_INTFLAGSET_FLTCAP_1_Val         _UINT32_(0x1)                                        /* (FCR_INTFLAGSET) Set Interrupt Pending  */
#define FCR_INTFLAGSET_FLTCAP_0               (FCR_INTFLAGSET_FLTCAP_0_Val << FCR_INTFLAGSET_FLTCAP_Pos) /* (FCR_INTFLAGSET) No effect Position */
#define FCR_INTFLAGSET_FLTCAP_1               (FCR_INTFLAGSET_FLTCAP_1_Val << FCR_INTFLAGSET_FLTCAP_Pos) /* (FCR_INTFLAGSET) Set Interrupt Pending Position */
#define FCR_INTFLAGSET_Msk                    _UINT32_(0x00010301)                                 /* (FCR_INTFLAGSET) Register Mask  */


/* -------- FCR_STATUS : (FCR Offset: 0x18) ( R/ 32) Status REGISTER -------- */
#define FCR_STATUS_RESETVALUE                 _UINT32_(0xE0000000)                                 /*  (FCR_STATUS) Status REGISTER  Reset Value */

#define FCR_STATUS_PRM_Pos                    _UINT32_(0)                                          /* (FCR_STATUS) NVM Power Reduction Mode Status Position */
#define FCR_STATUS_PRM_Msk                    (_UINT32_(0x1) << FCR_STATUS_PRM_Pos)                /* (FCR_STATUS) NVM Power Reduction Mode Status Mask */
#define FCR_STATUS_PRM(value)                 (FCR_STATUS_PRM_Msk & (_UINT32_(value) << FCR_STATUS_PRM_Pos)) /* Assignment of value for PRM in the FCR_STATUS register */
#define   FCR_STATUS_PRM_0_Val                _UINT32_(0x0)                                        /* (FCR_STATUS) Flash is Ready (for read or NVMOP)  */
#define   FCR_STATUS_PRM_1_Val                _UINT32_(0x1)                                        /* (FCR_STATUS) Flash is Powered Down and wakes on first access (read or NVMOP)  */
#define FCR_STATUS_PRM_0                      (FCR_STATUS_PRM_0_Val << FCR_STATUS_PRM_Pos)         /* (FCR_STATUS) Flash is Ready (for read or NVMOP) Position */
#define FCR_STATUS_PRM_1                      (FCR_STATUS_PRM_1_Val << FCR_STATUS_PRM_Pos)         /* (FCR_STATUS) Flash is Powered Down and wakes on first access (read or NVMOP) Position */
#define FCR_STATUS_Msk                        _UINT32_(0x00000001)                                 /* (FCR_STATUS) Register Mask  */


/* -------- FCR_DBGCTRL : (FCR Offset: 0x1C) (R/W 32) Debug Control CTRL REGISTER -------- */
#define FCR_DBGCTRL_RESETVALUE                _UINT32_(0x00)                                       /*  (FCR_DBGCTRL) Debug Control CTRL REGISTER  Reset Value */

#define FCR_DBGCTRL_CRCRUN_Pos                _UINT32_(0)                                          /* (FCR_DBGCTRL) CRC Debug Run Enable Position */
#define FCR_DBGCTRL_CRCRUN_Msk                (_UINT32_(0x1) << FCR_DBGCTRL_CRCRUN_Pos)            /* (FCR_DBGCTRL) CRC Debug Run Enable Mask */
#define FCR_DBGCTRL_CRCRUN(value)             (FCR_DBGCTRL_CRCRUN_Msk & (_UINT32_(value) << FCR_DBGCTRL_CRCRUN_Pos)) /* Assignment of value for CRCRUN in the FCR_DBGCTRL register */
#define   FCR_DBGCTRL_CRCRUN_HALT_Val         _UINT32_(0x0)                                        /* (FCR_DBGCTRL) CRC Logic Halts in Debug Mode  */
#define   FCR_DBGCTRL_CRCRUN_RUN_Val          _UINT32_(0x1)                                        /* (FCR_DBGCTRL) CRC Logic Runs in Debug Mode.  */
#define FCR_DBGCTRL_CRCRUN_HALT               (FCR_DBGCTRL_CRCRUN_HALT_Val << FCR_DBGCTRL_CRCRUN_Pos) /* (FCR_DBGCTRL) CRC Logic Halts in Debug Mode Position */
#define FCR_DBGCTRL_CRCRUN_RUN                (FCR_DBGCTRL_CRCRUN_RUN_Val << FCR_DBGCTRL_CRCRUN_Pos) /* (FCR_DBGCTRL) CRC Logic Runs in Debug Mode. Position */
#define FCR_DBGCTRL_DBGECC_Pos                _UINT32_(1)                                          /* (FCR_DBGCTRL) Debug ECC ModeECC errors from debugger reads are: Position */
#define FCR_DBGCTRL_DBGECC_Msk                (_UINT32_(0x3) << FCR_DBGCTRL_DBGECC_Pos)            /* (FCR_DBGCTRL) Debug ECC ModeECC errors from debugger reads are: Mask */
#define FCR_DBGCTRL_DBGECC(value)             (FCR_DBGCTRL_DBGECC_Msk & (_UINT32_(value) << FCR_DBGCTRL_DBGECC_Pos)) /* Assignment of value for DBGECC in the FCR_DBGCTRL register */
#define   FCR_DBGCTRL_DBGECC_NOERR_Val        _UINT32_(0x0)                                        /* (FCR_DBGCTRL) Corrected per ECCCTRL; No Bus ERR; INTFLAG, SEC counter, and FLT logic are not updated.  */
#define   FCR_DBGCTRL_DBGECC_DISABLE_Val      _UINT32_(0x1)                                        /* (FCR_DBGCTRL) Not corrected; No Bus Error; INTFLAG, SEC counter, and FLT logic are not updated.  */
#define   FCR_DBGCTRL_DBGECC_ENABLE_Val       _UINT32_(0x2)                                        /* (FCR_DBGCTRL) Corrected per ECCCTRL; Bus Error, INTFLAG, SEC counter, and FLT logic operates as setup.  */
#define   FCR_DBGCTRL_DBGECC_RSVD11_Val       _UINT32_(0x3)                                        /* (FCR_DBGCTRL) Don't use but same as 01 (DISABLE)  */
#define FCR_DBGCTRL_DBGECC_NOERR              (FCR_DBGCTRL_DBGECC_NOERR_Val << FCR_DBGCTRL_DBGECC_Pos) /* (FCR_DBGCTRL) Corrected per ECCCTRL; No Bus ERR; INTFLAG, SEC counter, and FLT logic are not updated. Position */
#define FCR_DBGCTRL_DBGECC_DISABLE            (FCR_DBGCTRL_DBGECC_DISABLE_Val << FCR_DBGCTRL_DBGECC_Pos) /* (FCR_DBGCTRL) Not corrected; No Bus Error; INTFLAG, SEC counter, and FLT logic are not updated. Position */
#define FCR_DBGCTRL_DBGECC_ENABLE             (FCR_DBGCTRL_DBGECC_ENABLE_Val << FCR_DBGCTRL_DBGECC_Pos) /* (FCR_DBGCTRL) Corrected per ECCCTRL; Bus Error, INTFLAG, SEC counter, and FLT logic operates as setup. Position */
#define FCR_DBGCTRL_DBGECC_RSVD11             (FCR_DBGCTRL_DBGECC_RSVD11_Val << FCR_DBGCTRL_DBGECC_Pos) /* (FCR_DBGCTRL) Don't use but same as 01 (DISABLE) Position */
#define FCR_DBGCTRL_Msk                       _UINT32_(0x00000007)                                 /* (FCR_DBGCTRL) Register Mask  */


/* -------- FCR_ECCCTRL : (FCR Offset: 0x20) (R/W 32) ECC Control REGISTER -------- */
#define FCR_ECCCTRL_RESETVALUE                _UINT32_(0x40)                                       /*  (FCR_ECCCTRL) ECC Control REGISTER  Reset Value */

#define FCR_ECCCTRL_ECCCTL_Pos                _UINT32_(4)                                          /* (FCR_ECCCTRL) NVM ECC Mode Control - restricts one or more NVMOPs Position */
#define FCR_ECCCTRL_ECCCTL_Msk                (_UINT32_(0x3) << FCR_ECCCTRL_ECCCTL_Pos)            /* (FCR_ECCCTRL) NVM ECC Mode Control - restricts one or more NVMOPs Mask */
#define FCR_ECCCTRL_ECCCTL(value)             (FCR_ECCCTRL_ECCCTL_Msk & (_UINT32_(value) << FCR_ECCCTRL_ECCCTL_Pos)) /* Assignment of value for ECCCTL in the FCR_ECCCTRL register */
#define   FCR_ECCCTRL_ECCCTL_STRICT_Val       _UINT32_(0x0)                                        /* (FCR_ECCCTRL) ECC Writes with ECC Reads (NVMOP = Single Program Operation disabled)  */
#define   FCR_ECCCTRL_ECCCTL_DYNAMIC_Val      _UINT32_(0x1)                                        /* (FCR_ECCCTRL) Dynamic Writes with Dynamic Reads  */
#define   FCR_ECCCTRL_ECCCTL_ECC_Val          _UINT32_(0x2)                                        /* (FCR_ECCCTRL) ECC Writes with Dynamic Reads (NVMOP = Single Program Operation disabled)  */
#define   FCR_ECCCTRL_ECCCTL_DISABLE_Val      _UINT32_(0x3)                                        /* (FCR_ECCCTRL) Dynamic Writes with No Error Check Reads  */
#define FCR_ECCCTRL_ECCCTL_STRICT             (FCR_ECCCTRL_ECCCTL_STRICT_Val << FCR_ECCCTRL_ECCCTL_Pos) /* (FCR_ECCCTRL) ECC Writes with ECC Reads (NVMOP = Single Program Operation disabled) Position */
#define FCR_ECCCTRL_ECCCTL_DYNAMIC            (FCR_ECCCTRL_ECCCTL_DYNAMIC_Val << FCR_ECCCTRL_ECCCTL_Pos) /* (FCR_ECCCTRL) Dynamic Writes with Dynamic Reads Position */
#define FCR_ECCCTRL_ECCCTL_ECC                (FCR_ECCCTRL_ECCCTL_ECC_Val << FCR_ECCCTRL_ECCCTL_Pos) /* (FCR_ECCCTRL) ECC Writes with Dynamic Reads (NVMOP = Single Program Operation disabled) Position */
#define FCR_ECCCTRL_ECCCTL_DISABLE            (FCR_ECCCTRL_ECCCTL_DISABLE_Val << FCR_ECCCTRL_ECCCTL_Pos) /* (FCR_ECCCTRL) Dynamic Writes with No Error Check Reads Position */
#define FCR_ECCCTRL_ECCUNLCK_Pos              _UINT32_(6)                                          /* (FCR_ECCCTRL) NVM ECC Mode Control Unlock Position */
#define FCR_ECCCTRL_ECCUNLCK_Msk              (_UINT32_(0x1) << FCR_ECCCTRL_ECCUNLCK_Pos)          /* (FCR_ECCCTRL) NVM ECC Mode Control Unlock Mask */
#define FCR_ECCCTRL_ECCUNLCK(value)           (FCR_ECCCTRL_ECCUNLCK_Msk & (_UINT32_(value) << FCR_ECCCTRL_ECCUNLCK_Pos)) /* Assignment of value for ECCUNLCK in the FCR_ECCCTRL register */
#define   FCR_ECCCTRL_ECCUNLCK_LOCKED_Val     _UINT32_(0x0)                                        /* (FCR_ECCCTRL) ECCUNLCK and ECCCTL[1:0] cannot be written  */
#define   FCR_ECCCTRL_ECCUNLCK_UNLOCKED_Val   _UINT32_(0x1)                                        /* (FCR_ECCCTRL) ECCUNLCK and ECCCTL[1:0] can be written  */
#define FCR_ECCCTRL_ECCUNLCK_LOCKED           (FCR_ECCCTRL_ECCUNLCK_LOCKED_Val << FCR_ECCCTRL_ECCUNLCK_Pos) /* (FCR_ECCCTRL) ECCUNLCK and ECCCTL[1:0] cannot be written Position */
#define FCR_ECCCTRL_ECCUNLCK_UNLOCKED         (FCR_ECCCTRL_ECCUNLCK_UNLOCKED_Val << FCR_ECCCTRL_ECCUNLCK_Pos) /* (FCR_ECCCTRL) ECCUNLCK and ECCCTL[1:0] can be written Position */
#define FCR_ECCCTRL_SECCNT_Pos                _UINT32_(8)                                          /* (FCR_ECCCTRL) Flash SEC Count Position */
#define FCR_ECCCTRL_SECCNT_Msk                (_UINT32_(0xFF) << FCR_ECCCTRL_SECCNT_Pos)           /* (FCR_ECCCTRL) Flash SEC Count Mask */
#define FCR_ECCCTRL_SECCNT(value)             (FCR_ECCCTRL_SECCNT_Msk & (_UINT32_(value) << FCR_ECCCTRL_SECCNT_Pos)) /* Assignment of value for SECCNT in the FCR_ECCCTRL register */
#define FCR_ECCCTRL_Msk                       _UINT32_(0x0000FF70)                                 /* (FCR_ECCCTRL) Register Mask  */


/* -------- FCR_CRCCTRL : (FCR Offset: 0x24) (R/W 32) CRC Control REGISTER -------- */
#define FCR_CRCCTRL_RESETVALUE                _UINT32_(0x00)                                       /*  (FCR_CRCCTRL) CRC Control REGISTER  Reset Value */

#define FCR_CRCCTRL_CRCRST_Pos                _UINT32_(0)                                          /* (FCR_CRCCTRL) CRC Reset Position */
#define FCR_CRCCTRL_CRCRST_Msk                (_UINT32_(0x1) << FCR_CRCCTRL_CRCRST_Pos)            /* (FCR_CRCCTRL) CRC Reset Mask */
#define FCR_CRCCTRL_CRCRST(value)             (FCR_CRCCTRL_CRCRST_Msk & (_UINT32_(value) << FCR_CRCCTRL_CRCRST_Pos)) /* Assignment of value for CRCRST in the FCR_CRCCTRL register */
#define   FCR_CRCCTRL_CRCRST_NONE_Val         _UINT32_(0x0)                                        /* (FCR_CRCCTRL) No Action  */
#define   FCR_CRCCTRL_CRCRST_RESET_Val        _UINT32_(0x1)                                        /* (FCR_CRCCTRL) Resets all CRC SFR bits.  */
#define FCR_CRCCTRL_CRCRST_NONE               (FCR_CRCCTRL_CRCRST_NONE_Val << FCR_CRCCTRL_CRCRST_Pos) /* (FCR_CRCCTRL) No Action Position */
#define FCR_CRCCTRL_CRCRST_RESET              (FCR_CRCCTRL_CRCRST_RESET_Val << FCR_CRCCTRL_CRCRST_Pos) /* (FCR_CRCCTRL) Resets all CRC SFR bits. Position */
#define FCR_CRCCTRL_CRCEN_Pos                 _UINT32_(1)                                          /* (FCR_CRCCTRL) Start CRC Calculation Position */
#define FCR_CRCCTRL_CRCEN_Msk                 (_UINT32_(0x1) << FCR_CRCCTRL_CRCEN_Pos)             /* (FCR_CRCCTRL) Start CRC Calculation Mask */
#define FCR_CRCCTRL_CRCEN(value)              (FCR_CRCCTRL_CRCEN_Msk & (_UINT32_(value) << FCR_CRCCTRL_CRCEN_Pos)) /* Assignment of value for CRCEN in the FCR_CRCCTRL register */
#define   FCR_CRCCTRL_CRCEN_DISABLE_Val       _UINT32_(0x0)                                        /* (FCR_CRCCTRL) Stops CRC calculation.  */
#define   FCR_CRCCTRL_CRCEN_ENABLE_Val        _UINT32_(0x1)                                        /* (FCR_CRCCTRL) CRC Calculation Enabled (w/ start on write to 1).  */
#define FCR_CRCCTRL_CRCEN_DISABLE             (FCR_CRCCTRL_CRCEN_DISABLE_Val << FCR_CRCCTRL_CRCEN_Pos) /* (FCR_CRCCTRL) Stops CRC calculation. Position */
#define FCR_CRCCTRL_CRCEN_ENABLE              (FCR_CRCCTRL_CRCEN_ENABLE_Val << FCR_CRCCTRL_CRCEN_Pos) /* (FCR_CRCCTRL) CRC Calculation Enabled (w/ start on write to 1). Position */
#define FCR_CRCCTRL_RUNSTDBY_Pos              _UINT32_(5)                                          /* (FCR_CRCCTRL) CRC Run in Standby Position */
#define FCR_CRCCTRL_RUNSTDBY_Msk              (_UINT32_(0x1) << FCR_CRCCTRL_RUNSTDBY_Pos)          /* (FCR_CRCCTRL) CRC Run in Standby Mask */
#define FCR_CRCCTRL_RUNSTDBY(value)           (FCR_CRCCTRL_RUNSTDBY_Msk & (_UINT32_(value) << FCR_CRCCTRL_RUNSTDBY_Pos)) /* Assignment of value for RUNSTDBY in the FCR_CRCCTRL register */
#define   FCR_CRCCTRL_RUNSTDBY_HALT_Val       _UINT32_(0x0)                                        /* (FCR_CRCCTRL) CRC Halts in Standby  */
#define   FCR_CRCCTRL_RUNSTDBY_RUN_Val        _UINT32_(0x1)                                        /* (FCR_CRCCTRL) CRC Runs in Standby but only if STATUS.PRM=0 (i.e. Flash is in Auto Standby)  */
#define FCR_CRCCTRL_RUNSTDBY_HALT             (FCR_CRCCTRL_RUNSTDBY_HALT_Val << FCR_CRCCTRL_RUNSTDBY_Pos) /* (FCR_CRCCTRL) CRC Halts in Standby Position */
#define FCR_CRCCTRL_RUNSTDBY_RUN              (FCR_CRCCTRL_RUNSTDBY_RUN_Val << FCR_CRCCTRL_RUNSTDBY_Pos) /* (FCR_CRCCTRL) CRC Runs in Standby but only if STATUS.PRM=0 (i.e. Flash is in Auto Standby) Position */
#define FCR_CRCCTRL_Msk                       _UINT32_(0x00000023)                                 /* (FCR_CRCCTRL) Register Mask  */


/* -------- FCR_CRCMODE : (FCR Offset: 0x28) (R/W 32) CRC MODE REGISTER -------- */
#define FCR_CRCMODE_RESETVALUE                _UINT32_(0x00)                                       /*  (FCR_CRCMODE) CRC MODE REGISTER  Reset Value */

#define FCR_CRCMODE_PLEN32_Pos                _UINT32_(12)                                         /* (FCR_CRCMODE) Polynomial Length Select Position */
#define FCR_CRCMODE_PLEN32_Msk                (_UINT32_(0x1) << FCR_CRCMODE_PLEN32_Pos)            /* (FCR_CRCMODE) Polynomial Length Select Mask */
#define FCR_CRCMODE_PLEN32(value)             (FCR_CRCMODE_PLEN32_Msk & (_UINT32_(value) << FCR_CRCMODE_PLEN32_Pos)) /* Assignment of value for PLEN32 in the FCR_CRCMODE register */
#define   FCR_CRCMODE_PLEN32_SIXTEEN_Val      _UINT32_(0x0)                                        /* (FCR_CRCMODE) Polynomial is 16-bits  */
#define   FCR_CRCMODE_PLEN32_THIRTYTWO_Val    _UINT32_(0x1)                                        /* (FCR_CRCMODE) Polynomial is 32-bits  */
#define FCR_CRCMODE_PLEN32_SIXTEEN            (FCR_CRCMODE_PLEN32_SIXTEEN_Val << FCR_CRCMODE_PLEN32_Pos) /* (FCR_CRCMODE) Polynomial is 16-bits Position */
#define FCR_CRCMODE_PLEN32_THIRTYTWO          (FCR_CRCMODE_PLEN32_THIRTYTWO_Val << FCR_CRCMODE_PLEN32_Pos) /* (FCR_CRCMODE) Polynomial is 32-bits Position */
#define FCR_CRCMODE_AUTOR_Pos                 _UINT32_(13)                                         /* (FCR_CRCMODE) CRC Auto Repeat Position */
#define FCR_CRCMODE_AUTOR_Msk                 (_UINT32_(0x1) << FCR_CRCMODE_AUTOR_Pos)             /* (FCR_CRCMODE) CRC Auto Repeat Mask */
#define FCR_CRCMODE_AUTOR(value)              (FCR_CRCMODE_AUTOR_Msk & (_UINT32_(value) << FCR_CRCMODE_AUTOR_Pos)) /* Assignment of value for AUTOR in the FCR_CRCMODE register */
#define   FCR_CRCMODE_AUTOR_DISABLE_Val       _UINT32_(0x0)                                        /* (FCR_CRCMODE) Perform CRC calculation once then set DONE and if needed, CRCERR.  */
#define   FCR_CRCMODE_AUTOR_ENABLE_Val        _UINT32_(0x1)                                        /* (FCR_CRCMODE) Continually Repeat CRC calculation; stop on error, set CRCDONE and CRCERR  */
#define FCR_CRCMODE_AUTOR_DISABLE             (FCR_CRCMODE_AUTOR_DISABLE_Val << FCR_CRCMODE_AUTOR_Pos) /* (FCR_CRCMODE) Perform CRC calculation once then set DONE and if needed, CRCERR. Position */
#define FCR_CRCMODE_AUTOR_ENABLE              (FCR_CRCMODE_AUTOR_ENABLE_Val << FCR_CRCMODE_AUTOR_Pos) /* (FCR_CRCMODE) Continually Repeat CRC calculation; stop on error, set CRCDONE and CRCERR Position */
#define FCR_CRCMODE_ROUT_Pos                  _UINT32_(14)                                         /* (FCR_CRCMODE) CRC Reflected Output Position */
#define FCR_CRCMODE_ROUT_Msk                  (_UINT32_(0x1) << FCR_CRCMODE_ROUT_Pos)              /* (FCR_CRCMODE) CRC Reflected Output Mask */
#define FCR_CRCMODE_ROUT(value)               (FCR_CRCMODE_ROUT_Msk & (_UINT32_(value) << FCR_CRCMODE_ROUT_Pos)) /* Assignment of value for ROUT in the FCR_CRCMODE register */
#define   FCR_CRCMODE_ROUT_DISABLE_Val        _UINT32_(0x0)                                        /* (FCR_CRCMODE) The CRCACC is Not Reflected  */
#define   FCR_CRCMODE_ROUT_ENABLE_Val         _UINT32_(0x1)                                        /* (FCR_CRCMODE) The CRCACC is Reflected (before the Final XOR)  */
#define FCR_CRCMODE_ROUT_DISABLE              (FCR_CRCMODE_ROUT_DISABLE_Val << FCR_CRCMODE_ROUT_Pos) /* (FCR_CRCMODE) The CRCACC is Not Reflected Position */
#define FCR_CRCMODE_ROUT_ENABLE               (FCR_CRCMODE_ROUT_ENABLE_Val << FCR_CRCMODE_ROUT_Pos) /* (FCR_CRCMODE) The CRCACC is Reflected (before the Final XOR) Position */
#define FCR_CRCMODE_RIN_Pos                   _UINT32_(15)                                         /* (FCR_CRCMODE) CRC Reflected Input Position */
#define FCR_CRCMODE_RIN_Msk                   (_UINT32_(0x1) << FCR_CRCMODE_RIN_Pos)               /* (FCR_CRCMODE) CRC Reflected Input Mask */
#define FCR_CRCMODE_RIN(value)                (FCR_CRCMODE_RIN_Msk & (_UINT32_(value) << FCR_CRCMODE_RIN_Pos)) /* Assignment of value for RIN in the FCR_CRCMODE register */
#define   FCR_CRCMODE_RIN_DISABLE_Val         _UINT32_(0x0)                                        /* (FCR_CRCMODE) The LFSR CRC is calculated Most Significant Bit first (Not Reflected)  */
#define   FCR_CRCMODE_RIN_ENABLE_Val          _UINT32_(0x1)                                        /* (FCR_CRCMODE) The LFSR CRC is calculated Least Significant Bit first (Reflected)  */
#define FCR_CRCMODE_RIN_DISABLE               (FCR_CRCMODE_RIN_DISABLE_Val << FCR_CRCMODE_RIN_Pos) /* (FCR_CRCMODE) The LFSR CRC is calculated Most Significant Bit first (Not Reflected) Position */
#define FCR_CRCMODE_RIN_ENABLE                (FCR_CRCMODE_RIN_ENABLE_Val << FCR_CRCMODE_RIN_Pos)  /* (FCR_CRCMODE) The LFSR CRC is calculated Least Significant Bit first (Reflected) Position */
#define FCR_CRCMODE_PERIOD_Pos                _UINT32_(16)                                         /* (FCR_CRCMODE) Read Period in PerCLK counts Position */
#define FCR_CRCMODE_PERIOD_Msk                (_UINT32_(0xFFF) << FCR_CRCMODE_PERIOD_Pos)          /* (FCR_CRCMODE) Read Period in PerCLK counts Mask */
#define FCR_CRCMODE_PERIOD(value)             (FCR_CRCMODE_PERIOD_Msk & (_UINT32_(value) << FCR_CRCMODE_PERIOD_Pos)) /* Assignment of value for PERIOD in the FCR_CRCMODE register */
#define FCR_CRCMODE_Msk                       _UINT32_(0x0FFFF000)                                 /* (FCR_CRCMODE) Register Mask  */

#define FCR_CRCMODE_PLEN_Pos                  _UINT32_(12)                                         /* (FCR_CRCMODE Position) Polynomial Length Select */
#define FCR_CRCMODE_PLEN_Msk                  (_UINT32_(0x1) << FCR_CRCMODE_PLEN_Pos)              /* (FCR_CRCMODE Mask) PLEN */
#define FCR_CRCMODE_PLEN(value)               (FCR_CRCMODE_PLEN_Msk & (_UINT32_(value) << FCR_CRCMODE_PLEN_Pos)) 

/* -------- FCR_CRCPAUSE : (FCR Offset: 0x2C) (R/W 32) CRC Pause REGISTER -------- */
#define FCR_CRCPAUSE_RESETVALUE               _UINT32_(0x00)                                       /*  (FCR_CRCPAUSE) CRC Pause REGISTER  Reset Value */

#define FCR_CRCPAUSE_PAUSE_Pos                _UINT32_(0)                                          /* (FCR_CRCPAUSE) CRC Pause Position */
#define FCR_CRCPAUSE_PAUSE_Msk                (_UINT32_(0x1) << FCR_CRCPAUSE_PAUSE_Pos)            /* (FCR_CRCPAUSE) CRC Pause Mask */
#define FCR_CRCPAUSE_PAUSE(value)             (FCR_CRCPAUSE_PAUSE_Msk & (_UINT32_(value) << FCR_CRCPAUSE_PAUSE_Pos)) /* Assignment of value for PAUSE in the FCR_CRCPAUSE register */
#define   FCR_CRCPAUSE_PAUSE_DISABLE_Val      _UINT32_(0x0)                                        /* (FCR_CRCPAUSE) CRC Reads Flash as Required  */
#define   FCR_CRCPAUSE_PAUSE_ENABLE_Val       _UINT32_(0x1)                                        /* (FCR_CRCPAUSE) Pause CRC Reads of Flash  */
#define FCR_CRCPAUSE_PAUSE_DISABLE            (FCR_CRCPAUSE_PAUSE_DISABLE_Val << FCR_CRCPAUSE_PAUSE_Pos) /* (FCR_CRCPAUSE) CRC Reads Flash as Required Position */
#define FCR_CRCPAUSE_PAUSE_ENABLE             (FCR_CRCPAUSE_PAUSE_ENABLE_Val << FCR_CRCPAUSE_PAUSE_Pos) /* (FCR_CRCPAUSE) Pause CRC Reads of Flash Position */
#define FCR_CRCPAUSE_Msk                      _UINT32_(0x00000001)                                 /* (FCR_CRCPAUSE) Register Mask  */


/* -------- FCR_CRCMADR : (FCR Offset: 0x30) (R/W 32) CRC Message Address REGISTER -------- */
#define FCR_CRCMADR_RESETVALUE                _UINT32_(0x00)                                       /*  (FCR_CRCMADR) CRC Message Address REGISTER  Reset Value */

#define FCR_CRCMADR_CRCMADR_Pos               _UINT32_(0)                                          /* (FCR_CRCMADR) Message Start Address in Flash Position */
#define FCR_CRCMADR_CRCMADR_Msk               (_UINT32_(0xFFFFFFF) << FCR_CRCMADR_CRCMADR_Pos)     /* (FCR_CRCMADR) Message Start Address in Flash Mask */
#define FCR_CRCMADR_CRCMADR(value)            (FCR_CRCMADR_CRCMADR_Msk & (_UINT32_(value) << FCR_CRCMADR_CRCMADR_Pos)) /* Assignment of value for CRCMADR in the FCR_CRCMADR register */
#define FCR_CRCMADR_Msk                       _UINT32_(0x0FFFFFFF)                                 /* (FCR_CRCMADR) Register Mask  */


/* -------- FCR_CRCMLEN : (FCR Offset: 0x34) (R/W 32) CRC Message Length REGISTER -------- */
#define FCR_CRCMLEN_RESETVALUE                _UINT32_(0x00)                                       /*  (FCR_CRCMLEN) CRC Message Length REGISTER  Reset Value */

#define FCR_CRCMLEN_CRCMLEN_Pos               _UINT32_(0)                                          /* (FCR_CRCMLEN) Message Length in Bytes Position */
#define FCR_CRCMLEN_CRCMLEN_Msk               (_UINT32_(0xFFFFF) << FCR_CRCMLEN_CRCMLEN_Pos)       /* (FCR_CRCMLEN) Message Length in Bytes Mask */
#define FCR_CRCMLEN_CRCMLEN(value)            (FCR_CRCMLEN_CRCMLEN_Msk & (_UINT32_(value) << FCR_CRCMLEN_CRCMLEN_Pos)) /* Assignment of value for CRCMLEN in the FCR_CRCMLEN register */
#define FCR_CRCMLEN_Msk                       _UINT32_(0x000FFFFF)                                 /* (FCR_CRCMLEN) Register Mask  */


/* -------- FCR_CRCIV : (FCR Offset: 0x38) (R/W 32) CRC Initial Value REGISTER -------- */
#define FCR_CRCIV_RESETVALUE                  _UINT32_(0x00)                                       /*  (FCR_CRCIV) CRC Initial Value REGISTER  Reset Value */

#define FCR_CRCIV_CRCIV_Pos                   _UINT32_(0)                                          /* (FCR_CRCIV) CRC Initial Value Position */
#define FCR_CRCIV_CRCIV_Msk                   (_UINT32_(0xFFFFFFFF) << FCR_CRCIV_CRCIV_Pos)        /* (FCR_CRCIV) CRC Initial Value Mask */
#define FCR_CRCIV_CRCIV(value)                (FCR_CRCIV_CRCIV_Msk & (_UINT32_(value) << FCR_CRCIV_CRCIV_Pos)) /* Assignment of value for CRCIV in the FCR_CRCIV register */
#define FCR_CRCIV_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (FCR_CRCIV) Register Mask  */


/* -------- FCR_CRCACC : (FCR Offset: 0x3C) ( R/ 32) CRC Accumulator REGISTER -------- */
#define FCR_CRCACC_RESETVALUE                 _UINT32_(0x00)                                       /*  (FCR_CRCACC) CRC Accumulator REGISTER  Reset Value */

#define FCR_CRCACC_CRCACC_Pos                 _UINT32_(0)                                          /* (FCR_CRCACC) CRC Accumulator Result Position */
#define FCR_CRCACC_CRCACC_Msk                 (_UINT32_(0xFFFFFFFF) << FCR_CRCACC_CRCACC_Pos)      /* (FCR_CRCACC) CRC Accumulator Result Mask */
#define FCR_CRCACC_CRCACC(value)              (FCR_CRCACC_CRCACC_Msk & (_UINT32_(value) << FCR_CRCACC_CRCACC_Pos)) /* Assignment of value for CRCACC in the FCR_CRCACC register */
#define FCR_CRCACC_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (FCR_CRCACC) Register Mask  */


/* -------- FCR_CRCPOLY : (FCR Offset: 0x40) (R/W 32) CRC Polynomial REGISTER -------- */
#define FCR_CRCPOLY_RESETVALUE                _UINT32_(0x01)                                       /*  (FCR_CRCPOLY) CRC Polynomial REGISTER  Reset Value */

#define FCR_CRCPOLY_CRCPOLY_Pos               _UINT32_(0)                                          /* (FCR_CRCPOLY) CRC Polynomial Coefficients for LFSR Position */
#define FCR_CRCPOLY_CRCPOLY_Msk               (_UINT32_(0xFFFFFFFF) << FCR_CRCPOLY_CRCPOLY_Pos)    /* (FCR_CRCPOLY) CRC Polynomial Coefficients for LFSR Mask */
#define FCR_CRCPOLY_CRCPOLY(value)            (FCR_CRCPOLY_CRCPOLY_Msk & (_UINT32_(value) << FCR_CRCPOLY_CRCPOLY_Pos)) /* Assignment of value for CRCPOLY in the FCR_CRCPOLY register */
#define   FCR_CRCPOLY_CRCPOLY_0_Val           _UINT32_(0x0)                                        /* (FCR_CRCPOLY) Disable the XOR input to the shift register at the associated bit position  */
#define   FCR_CRCPOLY_CRCPOLY_1_Val           _UINT32_(0x1)                                        /* (FCR_CRCPOLY) Enable the XOR input to the shift register at the associated bit position  */
#define FCR_CRCPOLY_CRCPOLY_0                 (FCR_CRCPOLY_CRCPOLY_0_Val << FCR_CRCPOLY_CRCPOLY_Pos) /* (FCR_CRCPOLY) Disable the XOR input to the shift register at the associated bit position Position */
#define FCR_CRCPOLY_CRCPOLY_1                 (FCR_CRCPOLY_CRCPOLY_1_Val << FCR_CRCPOLY_CRCPOLY_Pos) /* (FCR_CRCPOLY) Enable the XOR input to the shift register at the associated bit position Position */
#define FCR_CRCPOLY_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (FCR_CRCPOLY) Register Mask  */


/* -------- FCR_CRCFXOR : (FCR Offset: 0x44) (R/W 32) CRC Final XOR REGISTER -------- */
#define FCR_CRCFXOR_RESETVALUE                _UINT32_(0x00)                                       /*  (FCR_CRCFXOR) CRC Final XOR REGISTER  Reset Value */

#define FCR_CRCFXOR_CRCFXOR_Pos               _UINT32_(0)                                          /* (FCR_CRCFXOR) CRC Final XOR Position */
#define FCR_CRCFXOR_CRCFXOR_Msk               (_UINT32_(0xFFFFFFFF) << FCR_CRCFXOR_CRCFXOR_Pos)    /* (FCR_CRCFXOR) CRC Final XOR Mask */
#define FCR_CRCFXOR_CRCFXOR(value)            (FCR_CRCFXOR_CRCFXOR_Msk & (_UINT32_(value) << FCR_CRCFXOR_CRCFXOR_Pos)) /* Assignment of value for CRCFXOR in the FCR_CRCFXOR register */
#define   FCR_CRCFXOR_CRCFXOR_0_Val           _UINT32_(0x0)                                        /* (FCR_CRCFXOR) Disable the Final XOR at the associated bit position  */
#define   FCR_CRCFXOR_CRCFXOR_1_Val           _UINT32_(0x1)                                        /* (FCR_CRCFXOR) Enable the Final XOR at the associated bit position  */
#define FCR_CRCFXOR_CRCFXOR_0                 (FCR_CRCFXOR_CRCFXOR_0_Val << FCR_CRCFXOR_CRCFXOR_Pos) /* (FCR_CRCFXOR) Disable the Final XOR at the associated bit position Position */
#define FCR_CRCFXOR_CRCFXOR_1                 (FCR_CRCFXOR_CRCFXOR_1_Val << FCR_CRCFXOR_CRCFXOR_Pos) /* (FCR_CRCFXOR) Enable the Final XOR at the associated bit position Position */
#define FCR_CRCFXOR_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (FCR_CRCFXOR) Register Mask  */


/* -------- FCR_CRCSUM : (FCR Offset: 0x48) (R/W 32) CRC CheckSUM REGISTER -------- */
#define FCR_CRCSUM_RESETVALUE                 _UINT32_(0x00)                                       /*  (FCR_CRCSUM) CRC CheckSUM REGISTER  Reset Value */

#define FCR_CRCSUM_CRCSUM_Pos                 _UINT32_(0)                                          /* (FCR_CRCSUM) CRC Checksum Position */
#define FCR_CRCSUM_CRCSUM_Msk                 (_UINT32_(0xFFFFFFFF) << FCR_CRCSUM_CRCSUM_Pos)      /* (FCR_CRCSUM) CRC Checksum Mask */
#define FCR_CRCSUM_CRCSUM(value)              (FCR_CRCSUM_CRCSUM_Msk & (_UINT32_(value) << FCR_CRCSUM_CRCSUM_Pos)) /* Assignment of value for CRCSUM in the FCR_CRCSUM register */
#define FCR_CRCSUM_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (FCR_CRCSUM) Register Mask  */


/* -------- FCR_FFLTCTRL : (FCR Offset: 0x4C) (R/W 32) Flash ECC Fault Control REGISTER -------- */
#define FCR_FFLTCTRL_RESETVALUE               _UINT32_(0x00)                                       /*  (FCR_FFLTCTRL) Flash ECC Fault Control REGISTER  Reset Value */

#define FCR_FFLTCTRL_FLTRST_Pos               _UINT32_(0)                                          /* (FCR_FFLTCTRL) Fault Reset Position */
#define FCR_FFLTCTRL_FLTRST_Msk               (_UINT32_(0x1) << FCR_FFLTCTRL_FLTRST_Pos)           /* (FCR_FFLTCTRL) Fault Reset Mask */
#define FCR_FFLTCTRL_FLTRST(value)            (FCR_FFLTCTRL_FLTRST_Msk & (_UINT32_(value) << FCR_FFLTCTRL_FLTRST_Pos)) /* Assignment of value for FLTRST in the FCR_FFLTCTRL register */
#define   FCR_FFLTCTRL_FLTRST_NONE_Val        _UINT32_(0x0)                                        /* (FCR_FFLTCTRL) No Action  */
#define   FCR_FFLTCTRL_FLTRST_RESET_Val       _UINT32_(0x1)                                        /* (FCR_FFLTCTRL) Resets all FLT SFR bits.  */
#define FCR_FFLTCTRL_FLTRST_NONE              (FCR_FFLTCTRL_FLTRST_NONE_Val << FCR_FFLTCTRL_FLTRST_Pos) /* (FCR_FFLTCTRL) No Action Position */
#define FCR_FFLTCTRL_FLTRST_RESET             (FCR_FFLTCTRL_FLTRST_RESET_Val << FCR_FFLTCTRL_FLTRST_Pos) /* (FCR_FFLTCTRL) Resets all FLT SFR bits. Position */
#define FCR_FFLTCTRL_FLTEN_Pos                _UINT32_(1)                                          /* (FCR_FFLTCTRL) ECC Fault Enable bit Position */
#define FCR_FFLTCTRL_FLTEN_Msk                (_UINT32_(0x1) << FCR_FFLTCTRL_FLTEN_Pos)            /* (FCR_FFLTCTRL) ECC Fault Enable bit Mask */
#define FCR_FFLTCTRL_FLTEN(value)             (FCR_FFLTCTRL_FLTEN_Msk & (_UINT32_(value) << FCR_FFLTCTRL_FLTEN_Pos)) /* Assignment of value for FLTEN in the FCR_FFLTCTRL register */
#define   FCR_FFLTCTRL_FLTEN_DISABLE_Val      _UINT32_(0x0)                                        /* (FCR_FFLTCTRL) ECC Fault Injection Disabled  */
#define   FCR_FFLTCTRL_FLTEN_ENABLE_Val       _UINT32_(0x1)                                        /* (FCR_FFLTCTRL) ECC Fault Injection Enabled (module performs operation selected by FFLTMODE.FLTMD)  */
#define FCR_FFLTCTRL_FLTEN_DISABLE            (FCR_FFLTCTRL_FLTEN_DISABLE_Val << FCR_FFLTCTRL_FLTEN_Pos) /* (FCR_FFLTCTRL) ECC Fault Injection Disabled Position */
#define FCR_FFLTCTRL_FLTEN_ENABLE             (FCR_FFLTCTRL_FLTEN_ENABLE_Val << FCR_FFLTCTRL_FLTEN_Pos) /* (FCR_FFLTCTRL) ECC Fault Injection Enabled (module performs operation selected by FFLTMODE.FLTMD) Position */
#define FCR_FFLTCTRL_Msk                      _UINT32_(0x00000003)                                 /* (FCR_FFLTCTRL) Register Mask  */


/* -------- FCR_FFLTMODE : (FCR Offset: 0x50) (R/W 32) Flash ECC Fault Mode REGISTER -------- */
#define FCR_FFLTMODE_RESETVALUE               _UINT32_(0x00)                                       /*  (FCR_FFLTMODE) Flash ECC Fault Mode REGISTER  Reset Value */

#define FCR_FFLTMODE_CTLFLT_Pos               _UINT32_(8)                                          /* (FCR_FFLTMODE) ECC/Parity Control Fault bits Position */
#define FCR_FFLTMODE_CTLFLT_Msk               (_UINT32_(0x7) << FCR_FFLTMODE_CTLFLT_Pos)           /* (FCR_FFLTMODE) ECC/Parity Control Fault bits Mask */
#define FCR_FFLTMODE_CTLFLT(value)            (FCR_FFLTMODE_CTLFLT_Msk & (_UINT32_(value) << FCR_FFLTMODE_CTLFLT_Pos)) /* Assignment of value for CTLFLT in the FCR_FFLTMODE register */
#define   FCR_FFLTMODE_CTLFLT_0_Val           _UINT32_(0x0)                                        /* (FCR_FFLTMODE) No Fault Injected  */
#define   FCR_FFLTMODE_CTLFLT_1_Val           _UINT32_(0x1)                                        /* (FCR_FFLTMODE) Inject a Fault on to the associated ECC/Parity Control bits (CTL[n])  */
#define FCR_FFLTMODE_CTLFLT_0                 (FCR_FFLTMODE_CTLFLT_0_Val << FCR_FFLTMODE_CTLFLT_Pos) /* (FCR_FFLTMODE) No Fault Injected Position */
#define FCR_FFLTMODE_CTLFLT_1                 (FCR_FFLTMODE_CTLFLT_1_Val << FCR_FFLTMODE_CTLFLT_Pos) /* (FCR_FFLTMODE) Inject a Fault on to the associated ECC/Parity Control bits (CTL[n]) Position */
#define FCR_FFLTMODE_FLTMD_Pos                _UINT32_(12)                                         /* (FCR_FFLTMODE) Fault Mode Control Position */
#define FCR_FFLTMODE_FLTMD_Msk                (_UINT32_(0x7) << FCR_FFLTMODE_FLTMD_Pos)            /* (FCR_FFLTMODE) Fault Mode Control Mask */
#define FCR_FFLTMODE_FLTMD(value)             (FCR_FFLTMODE_FLTMD_Msk & (_UINT32_(value) << FCR_FFLTMODE_FLTMD_Pos)) /* Assignment of value for FLTMD in the FCR_FFLTMODE register */
#define   FCR_FFLTMODE_FLTMD_DISABLE_Val      _UINT32_(0x0)                                        /* (FCR_FFLTMODE) Fault Injection Disabled  */
#define   FCR_FFLTMODE_FLTMD_CAPT_Val         _UINT32_(0x2)                                        /* (FCR_FFLTMODE) Fault Capture Mode Enabled - Captures the address (in FLTADR) and Syndrome in (FLTSYN)  */
#define   FCR_FFLTMODE_FLTMD_SINGLEREAD_Val   _UINT32_(0x4)                                        /* (FCR_FFLTMODE) Single Fault Injection (at bit selected by FLT1PTR) for Reads  */
#define   FCR_FFLTMODE_FLTMD_DOUBLEREAD_Val   _UINT32_(0x5)                                        /* (FCR_FFLTMODE) Double Fault Injection for Reads  */
#define   FCR_FFLTMODE_FLTMD_SINGLEWRITE_Val  _UINT32_(0x6)                                        /* (FCR_FFLTMODE) Single Fault Injection (at bit selected by FLT1PTR) for Writes  */
#define   FCR_FFLTMODE_FLTMD_DOUBLEWRITE_Val  _UINT32_(0x7)                                        /* (FCR_FFLTMODE) Double Fault Injection for Writes  */
#define FCR_FFLTMODE_FLTMD_DISABLE            (FCR_FFLTMODE_FLTMD_DISABLE_Val << FCR_FFLTMODE_FLTMD_Pos) /* (FCR_FFLTMODE) Fault Injection Disabled Position */
#define FCR_FFLTMODE_FLTMD_CAPT               (FCR_FFLTMODE_FLTMD_CAPT_Val << FCR_FFLTMODE_FLTMD_Pos) /* (FCR_FFLTMODE) Fault Capture Mode Enabled - Captures the address (in FLTADR) and Syndrome in (FLTSYN) Position */
#define FCR_FFLTMODE_FLTMD_SINGLEREAD         (FCR_FFLTMODE_FLTMD_SINGLEREAD_Val << FCR_FFLTMODE_FLTMD_Pos) /* (FCR_FFLTMODE) Single Fault Injection (at bit selected by FLT1PTR) for Reads Position */
#define FCR_FFLTMODE_FLTMD_DOUBLEREAD         (FCR_FFLTMODE_FLTMD_DOUBLEREAD_Val << FCR_FFLTMODE_FLTMD_Pos) /* (FCR_FFLTMODE) Double Fault Injection for Reads Position */
#define FCR_FFLTMODE_FLTMD_SINGLEWRITE        (FCR_FFLTMODE_FLTMD_SINGLEWRITE_Val << FCR_FFLTMODE_FLTMD_Pos) /* (FCR_FFLTMODE) Single Fault Injection (at bit selected by FLT1PTR) for Writes Position */
#define FCR_FFLTMODE_FLTMD_DOUBLEWRITE        (FCR_FFLTMODE_FLTMD_DOUBLEWRITE_Val << FCR_FFLTMODE_FLTMD_Pos) /* (FCR_FFLTMODE) Double Fault Injection for Writes Position */
#define FCR_FFLTMODE_Msk                      _UINT32_(0x00007700)                                 /* (FCR_FFLTMODE) Register Mask  */


/* -------- FCR_FFLTPTR : (FCR Offset: 0x54) (R/W 32) Flash ECC Fault Pointer REGISTER -------- */
#define FCR_FFLTPTR_RESETVALUE                _UINT32_(0x00)                                       /*  (FCR_FFLTPTR) Flash ECC Fault Pointer REGISTER  Reset Value */

#define FCR_FFLTPTR_FLTPTR1_Pos               _UINT32_(0)                                          /* (FCR_FFLTPTR) Fault 1 Injection Pointer Position */
#define FCR_FFLTPTR_FLTPTR1_Msk               (_UINT32_(0xFF) << FCR_FFLTPTR_FLTPTR1_Pos)          /* (FCR_FFLTPTR) Fault 1 Injection Pointer Mask */
#define FCR_FFLTPTR_FLTPTR1(value)            (FCR_FFLTPTR_FLTPTR1_Msk & (_UINT32_(value) << FCR_FFLTPTR_FLTPTR1_Pos)) /* Assignment of value for FLTPTR1 in the FCR_FFLTPTR register */
#define FCR_FFLTPTR_FLTPTR2_Pos               _UINT32_(16)                                         /* (FCR_FFLTPTR) Fault 2 Injection Pointer Position */
#define FCR_FFLTPTR_FLTPTR2_Msk               (_UINT32_(0xFF) << FCR_FFLTPTR_FLTPTR2_Pos)          /* (FCR_FFLTPTR) Fault 2 Injection Pointer Mask */
#define FCR_FFLTPTR_FLTPTR2(value)            (FCR_FFLTPTR_FLTPTR2_Msk & (_UINT32_(value) << FCR_FFLTPTR_FLTPTR2_Pos)) /* Assignment of value for FLTPTR2 in the FCR_FFLTPTR register */
#define FCR_FFLTPTR_Msk                       _UINT32_(0x00FF00FF)                                 /* (FCR_FFLTPTR) Register Mask  */


/* -------- FCR_FFLTADR : (FCR Offset: 0x58) (R/W 32) Flash ECC Fault Address REGISTER -------- */
#define FCR_FFLTADR_RESETVALUE                _UINT32_(0x00)                                       /*  (FCR_FFLTADR) Flash ECC Fault Address REGISTER  Reset Value */

#define FCR_FFLTADR_FLTADR_Pos                _UINT32_(0)                                          /* (FCR_FFLTADR) Fault Injection Address Position */
#define FCR_FFLTADR_FLTADR_Msk                (_UINT32_(0xFFFFFFF) << FCR_FFLTADR_FLTADR_Pos)      /* (FCR_FFLTADR) Fault Injection Address Mask */
#define FCR_FFLTADR_FLTADR(value)             (FCR_FFLTADR_FLTADR_Msk & (_UINT32_(value) << FCR_FFLTADR_FLTADR_Pos)) /* Assignment of value for FLTADR in the FCR_FFLTADR register */
#define FCR_FFLTADR_Msk                       _UINT32_(0x0FFFFFFF)                                 /* (FCR_FFLTADR) Register Mask  */


/* -------- FCR_FFLTCAP : (FCR Offset: 0x5C) ( R/ 32) Flash ECC Fault Capture Address REGISTER -------- */
#define FCR_FFLTCAP_RESETVALUE                _UINT32_(0x00)                                       /*  (FCR_FFLTCAP) Flash ECC Fault Capture Address REGISTER  Reset Value */

#define FCR_FFLTCAP_FLTADR_Pos                _UINT32_(0)                                          /* (FCR_FFLTCAP) Fault Capture Address Position */
#define FCR_FFLTCAP_FLTADR_Msk                (_UINT32_(0xFFFFFFF) << FCR_FFLTCAP_FLTADR_Pos)      /* (FCR_FFLTCAP) Fault Capture Address Mask */
#define FCR_FFLTCAP_FLTADR(value)             (FCR_FFLTCAP_FLTADR_Msk & (_UINT32_(value) << FCR_FFLTCAP_FLTADR_Pos)) /* Assignment of value for FLTADR in the FCR_FFLTCAP register */
#define FCR_FFLTCAP_Msk                       _UINT32_(0x0FFFFFFF)                                 /* (FCR_FFLTCAP) Register Mask  */


/* -------- FCR_FFLTPAR : (FCR Offset: 0x60) ( R/ 32) Flash ECC Fault Parity REGISTER -------- */
#define FCR_FFLTPAR_RESETVALUE                _UINT32_(0x00)                                       /*  (FCR_FFLTPAR) Flash ECC Fault Parity REGISTER  Reset Value */

#define FCR_FFLTPAR_SECIN_Pos                 _UINT32_(0)                                          /* (FCR_FFLTPAR) The Single Error Parity bits from Flash Position */
#define FCR_FFLTPAR_SECIN_Msk                 (_UINT32_(0xFF) << FCR_FFLTPAR_SECIN_Pos)            /* (FCR_FFLTPAR) The Single Error Parity bits from Flash Mask */
#define FCR_FFLTPAR_SECIN(value)              (FCR_FFLTPAR_SECIN_Msk & (_UINT32_(value) << FCR_FFLTPAR_SECIN_Pos)) /* Assignment of value for SECIN in the FCR_FFLTPAR register */
#define FCR_FFLTPAR_DEDIN_Pos                 _UINT32_(15)                                         /* (FCR_FFLTPAR) The Overall Parity from Flash Position */
#define FCR_FFLTPAR_DEDIN_Msk                 (_UINT32_(0x1) << FCR_FFLTPAR_DEDIN_Pos)             /* (FCR_FFLTPAR) The Overall Parity from Flash Mask */
#define FCR_FFLTPAR_DEDIN(value)              (FCR_FFLTPAR_DEDIN_Msk & (_UINT32_(value) << FCR_FFLTPAR_DEDIN_Pos)) /* Assignment of value for DEDIN in the FCR_FFLTPAR register */
#define FCR_FFLTPAR_SECOUT_Pos                _UINT32_(16)                                         /* (FCR_FFLTPAR) The Calculated Single Error Parity bits Position */
#define FCR_FFLTPAR_SECOUT_Msk                (_UINT32_(0xFF) << FCR_FFLTPAR_SECOUT_Pos)           /* (FCR_FFLTPAR) The Calculated Single Error Parity bits Mask */
#define FCR_FFLTPAR_SECOUT(value)             (FCR_FFLTPAR_SECOUT_Msk & (_UINT32_(value) << FCR_FFLTPAR_SECOUT_Pos)) /* Assignment of value for SECOUT in the FCR_FFLTPAR register */
#define FCR_FFLTPAR_DEDOUT_Pos                _UINT32_(31)                                         /* (FCR_FFLTPAR) The Calculated Overall Parity used in Double Error Detection Position */
#define FCR_FFLTPAR_DEDOUT_Msk                (_UINT32_(0x1) << FCR_FFLTPAR_DEDOUT_Pos)            /* (FCR_FFLTPAR) The Calculated Overall Parity used in Double Error Detection Mask */
#define FCR_FFLTPAR_DEDOUT(value)             (FCR_FFLTPAR_DEDOUT_Msk & (_UINT32_(value) << FCR_FFLTPAR_DEDOUT_Pos)) /* Assignment of value for DEDOUT in the FCR_FFLTPAR register */
#define FCR_FFLTPAR_Msk                       _UINT32_(0x80FF80FF)                                 /* (FCR_FFLTPAR) Register Mask  */


/* -------- FCR_FFLTSYN : (FCR Offset: 0x64) ( R/ 32) Flash ECC Fault Syndrome REGISTER -------- */
#define FCR_FFLTSYN_RESETVALUE                _UINT32_(0x00)                                       /*  (FCR_FFLTSYN) Flash ECC Fault Syndrome REGISTER  Reset Value */

#define FCR_FFLTSYN_SECSYN_Pos                _UINT32_(0)                                          /* (FCR_FFLTSYN) Single Error Correction Syndrome Position */
#define FCR_FFLTSYN_SECSYN_Msk                (_UINT32_(0xFF) << FCR_FFLTSYN_SECSYN_Pos)           /* (FCR_FFLTSYN) Single Error Correction Syndrome Mask */
#define FCR_FFLTSYN_SECSYN(value)             (FCR_FFLTSYN_SECSYN_Msk & (_UINT32_(value) << FCR_FFLTSYN_SECSYN_Pos)) /* Assignment of value for SECSYN in the FCR_FFLTSYN register */
#define FCR_FFLTSYN_DEDSYN_Pos                _UINT32_(15)                                         /* (FCR_FFLTSYN) DED Syndrome Position */
#define FCR_FFLTSYN_DEDSYN_Msk                (_UINT32_(0x1) << FCR_FFLTSYN_DEDSYN_Pos)            /* (FCR_FFLTSYN) DED Syndrome Mask */
#define FCR_FFLTSYN_DEDSYN(value)             (FCR_FFLTSYN_DEDSYN_Msk & (_UINT32_(value) << FCR_FFLTSYN_DEDSYN_Pos)) /* Assignment of value for DEDSYN in the FCR_FFLTSYN register */
#define   FCR_FFLTSYN_DEDSYN_0_Val            _UINT32_(0x0)                                        /* (FCR_FFLTSYN) Calculated Overall Parity Concurs with Read Overall Parity  */
#define   FCR_FFLTSYN_DEDSYN_1_Val            _UINT32_(0x1)                                        /* (FCR_FFLTSYN) Calculated Overall Parity Differs from Read Overall Parity  */
#define FCR_FFLTSYN_DEDSYN_0                  (FCR_FFLTSYN_DEDSYN_0_Val << FCR_FFLTSYN_DEDSYN_Pos) /* (FCR_FFLTSYN) Calculated Overall Parity Concurs with Read Overall Parity Position */
#define FCR_FFLTSYN_DEDSYN_1                  (FCR_FFLTSYN_DEDSYN_1_Val << FCR_FFLTSYN_DEDSYN_Pos) /* (FCR_FFLTSYN) Calculated Overall Parity Differs from Read Overall Parity Position */
#define FCR_FFLTSYN_DSERR_Pos                 _UINT32_(16)                                         /* (FCR_FFLTSYN) Double Error Detected & Single Error Corrected Position */
#define FCR_FFLTSYN_DSERR_Msk                 (_UINT32_(0x3) << FCR_FFLTSYN_DSERR_Pos)             /* (FCR_FFLTSYN) Double Error Detected & Single Error Corrected Mask */
#define FCR_FFLTSYN_DSERR(value)              (FCR_FFLTSYN_DSERR_Msk & (_UINT32_(value) << FCR_FFLTSYN_DSERR_Pos)) /* Assignment of value for DSERR in the FCR_FFLTSYN register */
#define   FCR_FFLTSYN_DSERR_NONE_Val          _UINT32_(0x0)                                        /* (FCR_FFLTSYN) No Errors  */
#define   FCR_FFLTSYN_DSERR_SINGLE_Val        _UINT32_(0x1)                                        /* (FCR_FFLTSYN) Single Error Corrected  */
#define   FCR_FFLTSYN_DSERR_DOUBLE_10_Val     _UINT32_(0x2)                                        /* (FCR_FFLTSYN) Double Error Detected  */
#define   FCR_FFLTSYN_DSERR_DOUBLE_11_Val     _UINT32_(0x3)                                        /* (FCR_FFLTSYN) Double Error Detected  */
#define FCR_FFLTSYN_DSERR_NONE                (FCR_FFLTSYN_DSERR_NONE_Val << FCR_FFLTSYN_DSERR_Pos) /* (FCR_FFLTSYN) No Errors Position */
#define FCR_FFLTSYN_DSERR_SINGLE              (FCR_FFLTSYN_DSERR_SINGLE_Val << FCR_FFLTSYN_DSERR_Pos) /* (FCR_FFLTSYN) Single Error Corrected Position */
#define FCR_FFLTSYN_DSERR_DOUBLE_10           (FCR_FFLTSYN_DSERR_DOUBLE_10_Val << FCR_FFLTSYN_DSERR_Pos) /* (FCR_FFLTSYN) Double Error Detected Position */
#define FCR_FFLTSYN_DSERR_DOUBLE_11           (FCR_FFLTSYN_DSERR_DOUBLE_11_Val << FCR_FFLTSYN_DSERR_Pos) /* (FCR_FFLTSYN) Double Error Detected Position */
#define FCR_FFLTSYN_CERR_Pos                  _UINT32_(18)                                         /* (FCR_FFLTSYN) ECC Control bit Error Position */
#define FCR_FFLTSYN_CERR_Msk                  (_UINT32_(0x1) << FCR_FFLTSYN_CERR_Pos)              /* (FCR_FFLTSYN) ECC Control bit Error Mask */
#define FCR_FFLTSYN_CERR(value)               (FCR_FFLTSYN_CERR_Msk & (_UINT32_(value) << FCR_FFLTSYN_CERR_Pos)) /* Assignment of value for CERR in the FCR_FFLTSYN register */
#define   FCR_FFLTSYN_CERR_NONE_Val           _UINT32_(0x0)                                        /* (FCR_FFLTSYN) No Control bit Error (ECCSTAT either 111 or 000)  */
#define   FCR_FFLTSYN_CERR_SINGLE_Val         _UINT32_(0x1)                                        /* (FCR_FFLTSYN) Single Control Bit Error  */
#define FCR_FFLTSYN_CERR_NONE                 (FCR_FFLTSYN_CERR_NONE_Val << FCR_FFLTSYN_CERR_Pos)  /* (FCR_FFLTSYN) No Control bit Error (ECCSTAT either 111 or 000) Position */
#define FCR_FFLTSYN_CERR_SINGLE               (FCR_FFLTSYN_CERR_SINGLE_Val << FCR_FFLTSYN_CERR_Pos) /* (FCR_FFLTSYN) Single Control Bit Error Position */
#define FCR_FFLTSYN_CTLSTAT_Pos               _UINT32_(24)                                         /* (FCR_FFLTSYN) Parity vs ECC Control Status Position */
#define FCR_FFLTSYN_CTLSTAT_Msk               (_UINT32_(0x7) << FCR_FFLTSYN_CTLSTAT_Pos)           /* (FCR_FFLTSYN) Parity vs ECC Control Status Mask */
#define FCR_FFLTSYN_CTLSTAT(value)            (FCR_FFLTSYN_CTLSTAT_Msk & (_UINT32_(value) << FCR_FFLTSYN_CTLSTAT_Pos)) /* Assignment of value for CTLSTAT in the FCR_FFLTSYN register */
#define   FCR_FFLTSYN_CTLSTAT_USEDECC_0_Val   _UINT32_(0x0)                                        /* (FCR_FFLTSYN) Calculation used ECC (i.e. programming used quad write)  */
#define   FCR_FFLTSYN_CTLSTAT_USEDECC_1_Val   _UINT32_(0x1)                                        /* (FCR_FFLTSYN) Calculation used ECC (i.e. programming used quad write)  */
#define   FCR_FFLTSYN_CTLSTAT_USEDECC_10_Val  _UINT32_(0x2)                                        /* (FCR_FFLTSYN) Calculation used ECC (i.e. programming used quad write)  */
#define   FCR_FFLTSYN_CTLSTAT_USEDPARITY_11_Val _UINT32_(0x3)                                        /* (FCR_FFLTSYN) Calculation used Parity (i.e. programming used single write)  */
#define   FCR_FFLTSYN_CTLSTAT_USEDECC_100_Val _UINT32_(0x4)                                        /* (FCR_FFLTSYN) Calculation used ECC (i.e. programming used quad write)  */
#define   FCR_FFLTSYN_CTLSTAT_USEDPARITY_101_Val _UINT32_(0x5)                                        /* (FCR_FFLTSYN) Calculation used Parity (i.e. programming used single write)  */
#define   FCR_FFLTSYN_CTLSTAT_USEDPARITY_110_Val _UINT32_(0x6)                                        /* (FCR_FFLTSYN) Calculation used Parity (i.e. programming used single write)  */
#define   FCR_FFLTSYN_CTLSTAT_USEDPARITY_111_Val _UINT32_(0x7)                                        /* (FCR_FFLTSYN) Calculation used Parity (i.e. programming used single write)  */
#define FCR_FFLTSYN_CTLSTAT_USEDECC_0         (FCR_FFLTSYN_CTLSTAT_USEDECC_0_Val << FCR_FFLTSYN_CTLSTAT_Pos) /* (FCR_FFLTSYN) Calculation used ECC (i.e. programming used quad write) Position */
#define FCR_FFLTSYN_CTLSTAT_USEDECC_1         (FCR_FFLTSYN_CTLSTAT_USEDECC_1_Val << FCR_FFLTSYN_CTLSTAT_Pos) /* (FCR_FFLTSYN) Calculation used ECC (i.e. programming used quad write) Position */
#define FCR_FFLTSYN_CTLSTAT_USEDECC_10        (FCR_FFLTSYN_CTLSTAT_USEDECC_10_Val << FCR_FFLTSYN_CTLSTAT_Pos) /* (FCR_FFLTSYN) Calculation used ECC (i.e. programming used quad write) Position */
#define FCR_FFLTSYN_CTLSTAT_USEDPARITY_11     (FCR_FFLTSYN_CTLSTAT_USEDPARITY_11_Val << FCR_FFLTSYN_CTLSTAT_Pos) /* (FCR_FFLTSYN) Calculation used Parity (i.e. programming used single write) Position */
#define FCR_FFLTSYN_CTLSTAT_USEDECC_100       (FCR_FFLTSYN_CTLSTAT_USEDECC_100_Val << FCR_FFLTSYN_CTLSTAT_Pos) /* (FCR_FFLTSYN) Calculation used ECC (i.e. programming used quad write) Position */
#define FCR_FFLTSYN_CTLSTAT_USEDPARITY_101    (FCR_FFLTSYN_CTLSTAT_USEDPARITY_101_Val << FCR_FFLTSYN_CTLSTAT_Pos) /* (FCR_FFLTSYN) Calculation used Parity (i.e. programming used single write) Position */
#define FCR_FFLTSYN_CTLSTAT_USEDPARITY_110    (FCR_FFLTSYN_CTLSTAT_USEDPARITY_110_Val << FCR_FFLTSYN_CTLSTAT_Pos) /* (FCR_FFLTSYN) Calculation used Parity (i.e. programming used single write) Position */
#define FCR_FFLTSYN_CTLSTAT_USEDPARITY_111    (FCR_FFLTSYN_CTLSTAT_USEDPARITY_111_Val << FCR_FFLTSYN_CTLSTAT_Pos) /* (FCR_FFLTSYN) Calculation used Parity (i.e. programming used single write) Position */
#define FCR_FFLTSYN_PERR_Pos                  _UINT32_(28)                                         /* (FCR_FFLTSYN) Per Word (n=3:0) Parity Error Status Position */
#define FCR_FFLTSYN_PERR_Msk                  (_UINT32_(0xF) << FCR_FFLTSYN_PERR_Pos)              /* (FCR_FFLTSYN) Per Word (n=3:0) Parity Error Status Mask */
#define FCR_FFLTSYN_PERR(value)               (FCR_FFLTSYN_PERR_Msk & (_UINT32_(value) << FCR_FFLTSYN_PERR_Pos)) /* Assignment of value for PERR in the FCR_FFLTSYN register */
#define   FCR_FFLTSYN_PERR_NONE_Val           _UINT32_(0x0)                                        /* (FCR_FFLTSYN) No Parity Error on Word n  */
#define   FCR_FFLTSYN_PERR_ERROR_Val          _UINT32_(0x1)                                        /* (FCR_FFLTSYN) Parity Error on Word n  */
#define FCR_FFLTSYN_PERR_NONE                 (FCR_FFLTSYN_PERR_NONE_Val << FCR_FFLTSYN_PERR_Pos)  /* (FCR_FFLTSYN) No Parity Error on Word n Position */
#define FCR_FFLTSYN_PERR_ERROR                (FCR_FFLTSYN_PERR_ERROR_Val << FCR_FFLTSYN_PERR_Pos) /* (FCR_FFLTSYN) Parity Error on Word n Position */
#define FCR_FFLTSYN_Msk                       _UINT32_(0xF70780FF)                                 /* (FCR_FFLTSYN) Register Mask  */


/* -------- FCR_CRP : (FCR Offset: 0x68) (R/W 32) CFM Page Read Protection REGISTER (CFM8) -------- */
#define FCR_CRP_RESETVALUE                    _UINT32_(0xC20000)                                   /*  (FCR_CRP) CFM Page Read Protection REGISTER (CFM8)  Reset Value */

#define FCR_CRP_BC1ARP_Pos                    _UINT32_(0)                                          /* (FCR_CRP) Panel 1 Read Protect BootCfg1A Position */
#define FCR_CRP_BC1ARP_Msk                    (_UINT32_(0x1) << FCR_CRP_BC1ARP_Pos)                /* (FCR_CRP) Panel 1 Read Protect BootCfg1A Mask */
#define FCR_CRP_BC1ARP(value)                 (FCR_CRP_BC1ARP_Msk & (_UINT32_(value) << FCR_CRP_BC1ARP_Pos)) /* Assignment of value for BC1ARP in the FCR_CRP register */
#define   FCR_CRP_BC1ARP_DISABLE_Val          _UINT32_(0x0)                                        /* (FCR_CRP) Read Protection for this Page is Disabled  */
#define   FCR_CRP_BC1ARP_ENABLE_Val           _UINT32_(0x1)                                        /* (FCR_CRP) Read Protection for this Page is Enabled  */
#define FCR_CRP_BC1ARP_DISABLE                (FCR_CRP_BC1ARP_DISABLE_Val << FCR_CRP_BC1ARP_Pos)   /* (FCR_CRP) Read Protection for this Page is Disabled Position */
#define FCR_CRP_BC1ARP_ENABLE                 (FCR_CRP_BC1ARP_ENABLE_Val << FCR_CRP_BC1ARP_Pos)    /* (FCR_CRP) Read Protection for this Page is Enabled Position */
#define FCR_CRP_UO1RP_Pos                     _UINT32_(1)                                          /* (FCR_CRP) Panel 1 Read Protect UserOTP1 Position */
#define FCR_CRP_UO1RP_Msk                     (_UINT32_(0x1) << FCR_CRP_UO1RP_Pos)                 /* (FCR_CRP) Panel 1 Read Protect UserOTP1 Mask */
#define FCR_CRP_UO1RP(value)                  (FCR_CRP_UO1RP_Msk & (_UINT32_(value) << FCR_CRP_UO1RP_Pos)) /* Assignment of value for UO1RP in the FCR_CRP register */
#define   FCR_CRP_UO1RP_DISABLE_Val           _UINT32_(0x0)                                        /* (FCR_CRP) Read Protection for this Page is Disabled  */
#define FCR_CRP_UO1RP_DISABLE                 (FCR_CRP_UO1RP_DISABLE_Val << FCR_CRP_UO1RP_Pos)     /* (FCR_CRP) Read Protection for this Page is Disabled Position */
#define FCR_CRP_BC1RP_Pos                     _UINT32_(2)                                          /* (FCR_CRP) Panel 1 Read Protect BootCfg1 Position */
#define FCR_CRP_BC1RP_Msk                     (_UINT32_(0x1) << FCR_CRP_BC1RP_Pos)                 /* (FCR_CRP) Panel 1 Read Protect BootCfg1 Mask */
#define FCR_CRP_BC1RP(value)                  (FCR_CRP_BC1RP_Msk & (_UINT32_(value) << FCR_CRP_BC1RP_Pos)) /* Assignment of value for BC1RP in the FCR_CRP register */
#define   FCR_CRP_BC1RP_DISABLE_Val           _UINT32_(0x0)                                        /* (FCR_CRP) Read Protection for this Page is Disabled  */
#define   FCR_CRP_BC1RP_ENABLE_Val            _UINT32_(0x1)                                        /* (FCR_CRP) Read Protection for this Page is Enabled  */
#define FCR_CRP_BC1RP_DISABLE                 (FCR_CRP_BC1RP_DISABLE_Val << FCR_CRP_BC1RP_Pos)     /* (FCR_CRP) Read Protection for this Page is Disabled Position */
#define FCR_CRP_BC1RP_ENABLE                  (FCR_CRP_BC1RP_ENABLE_Val << FCR_CRP_BC1RP_Pos)      /* (FCR_CRP) Read Protection for this Page is Enabled Position */
#define FCR_CRP_RCRP_Pos                      _UINT32_(3)                                          /* (FCR_CRP) Panel 1 Read Protect ROMCfg Position */
#define FCR_CRP_RCRP_Msk                      (_UINT32_(0x1) << FCR_CRP_RCRP_Pos)                  /* (FCR_CRP) Panel 1 Read Protect ROMCfg Mask */
#define FCR_CRP_RCRP(value)                   (FCR_CRP_RCRP_Msk & (_UINT32_(value) << FCR_CRP_RCRP_Pos)) /* Assignment of value for RCRP in the FCR_CRP register */
#define   FCR_CRP_RCRP_DISABLE_Val            _UINT32_(0x0)                                        /* (FCR_CRP) Read Protection for this Page is Disabled  */
#define   FCR_CRP_RCRP_ENABLE_Val             _UINT32_(0x1)                                        /* (FCR_CRP) Read Protection for this Page is Enabled  */
#define FCR_CRP_RCRP_DISABLE                  (FCR_CRP_RCRP_DISABLE_Val << FCR_CRP_RCRP_Pos)       /* (FCR_CRP) Read Protection for this Page is Disabled Position */
#define FCR_CRP_RCRP_ENABLE                   (FCR_CRP_RCRP_ENABLE_Val << FCR_CRP_RCRP_Pos)        /* (FCR_CRP) Read Protection for this Page is Enabled Position */
#define FCR_CRP_VSSRP0_Pos                    _UINT32_(4)                                          /* (FCR_CRP) Panel 1 Read Protect VSSn Position */
#define FCR_CRP_VSSRP0_Msk                    (_UINT32_(0x1) << FCR_CRP_VSSRP0_Pos)                /* (FCR_CRP) Panel 1 Read Protect VSSn Mask */
#define FCR_CRP_VSSRP0(value)                 (FCR_CRP_VSSRP0_Msk & (_UINT32_(value) << FCR_CRP_VSSRP0_Pos)) /* Assignment of value for VSSRP0 in the FCR_CRP register */
#define   FCR_CRP_VSSRP0_DISABLE_Val          _UINT32_(0x0)                                        /* (FCR_CRP) Read Protection for this Page is Disabled  */
#define   FCR_CRP_VSSRP0_ENABLE_Val           _UINT32_(0x1)                                        /* (FCR_CRP) Read Protection for this Page is Enabled  */
#define FCR_CRP_VSSRP0_DISABLE                (FCR_CRP_VSSRP0_DISABLE_Val << FCR_CRP_VSSRP0_Pos)   /* (FCR_CRP) Read Protection for this Page is Disabled Position */
#define FCR_CRP_VSSRP0_ENABLE                 (FCR_CRP_VSSRP0_ENABLE_Val << FCR_CRP_VSSRP0_Pos)    /* (FCR_CRP) Read Protection for this Page is Enabled Position */
#define FCR_CRP_VSSRP1_Pos                    _UINT32_(5)                                          /* (FCR_CRP) Panel 1 Read Protect VSSn Position */
#define FCR_CRP_VSSRP1_Msk                    (_UINT32_(0x1) << FCR_CRP_VSSRP1_Pos)                /* (FCR_CRP) Panel 1 Read Protect VSSn Mask */
#define FCR_CRP_VSSRP1(value)                 (FCR_CRP_VSSRP1_Msk & (_UINT32_(value) << FCR_CRP_VSSRP1_Pos)) /* Assignment of value for VSSRP1 in the FCR_CRP register */
#define   FCR_CRP_VSSRP1_DISABLE_Val          _UINT32_(0x0)                                        /* (FCR_CRP) Read Protection for this Page is Disabled  */
#define   FCR_CRP_VSSRP1_ENABLE_Val           _UINT32_(0x1)                                        /* (FCR_CRP) Read Protection for this Page is Enabled  */
#define FCR_CRP_VSSRP1_DISABLE                (FCR_CRP_VSSRP1_DISABLE_Val << FCR_CRP_VSSRP1_Pos)   /* (FCR_CRP) Read Protection for this Page is Disabled Position */
#define FCR_CRP_VSSRP1_ENABLE                 (FCR_CRP_VSSRP1_ENABLE_Val << FCR_CRP_VSSRP1_Pos)    /* (FCR_CRP) Read Protection for this Page is Enabled Position */
#define FCR_CRP_TRP_Pos                       _UINT32_(6)                                          /* (FCR_CRP) Panel 1 Read Protect Test Position */
#define FCR_CRP_TRP_Msk                       (_UINT32_(0x1) << FCR_CRP_TRP_Pos)                   /* (FCR_CRP) Panel 1 Read Protect Test Mask */
#define FCR_CRP_TRP(value)                    (FCR_CRP_TRP_Msk & (_UINT32_(value) << FCR_CRP_TRP_Pos)) /* Assignment of value for TRP in the FCR_CRP register */
#define   FCR_CRP_TRP_DISABLE_Val             _UINT32_(0x0)                                        /* (FCR_CRP) Read Protection for this Page is Disabled  */
#define   FCR_CRP_TRP_ENABLE_Val              _UINT32_(0x1)                                        /* (FCR_CRP) Read Protection for this Page is Enabled  */
#define FCR_CRP_TRP_DISABLE                   (FCR_CRP_TRP_DISABLE_Val << FCR_CRP_TRP_Pos)         /* (FCR_CRP) Read Protection for this Page is Disabled Position */
#define FCR_CRP_TRP_ENABLE                    (FCR_CRP_TRP_ENABLE_Val << FCR_CRP_TRP_Pos)          /* (FCR_CRP) Read Protection for this Page is Enabled Position */
#define FCR_CRP_CORP_Pos                      _UINT32_(7)                                          /* (FCR_CRP) Panel 1 Read Protect CalOTP Position */
#define FCR_CRP_CORP_Msk                      (_UINT32_(0x1) << FCR_CRP_CORP_Pos)                  /* (FCR_CRP) Panel 1 Read Protect CalOTP Mask */
#define FCR_CRP_CORP(value)                   (FCR_CRP_CORP_Msk & (_UINT32_(value) << FCR_CRP_CORP_Pos)) /* Assignment of value for CORP in the FCR_CRP register */
#define   FCR_CRP_CORP_DISABLE_Val            _UINT32_(0x0)                                        /* (FCR_CRP) Read Protection for this Page is Disabled  */
#define   FCR_CRP_CORP_ENABLE_Val             _UINT32_(0x1)                                        /* (FCR_CRP) Read Protection for this Page is Enabled  */
#define FCR_CRP_CORP_DISABLE                  (FCR_CRP_CORP_DISABLE_Val << FCR_CRP_CORP_Pos)       /* (FCR_CRP) Read Protection for this Page is Disabled Position */
#define FCR_CRP_CORP_ENABLE                   (FCR_CRP_CORP_ENABLE_Val << FCR_CRP_CORP_Pos)        /* (FCR_CRP) Read Protection for this Page is Enabled Position */
#define FCR_CRP_BC1ARPLOCK_Pos                _UINT32_(16)                                         /* (FCR_CRP) Panel 1 Lock Read Protection BootCfg1A Position */
#define FCR_CRP_BC1ARPLOCK_Msk                (_UINT32_(0x1) << FCR_CRP_BC1ARPLOCK_Pos)            /* (FCR_CRP) Panel 1 Lock Read Protection BootCfg1A Mask */
#define FCR_CRP_BC1ARPLOCK(value)             (FCR_CRP_BC1ARPLOCK_Msk & (_UINT32_(value) << FCR_CRP_BC1ARPLOCK_Pos)) /* Assignment of value for BC1ARPLOCK in the FCR_CRP register */
#define   FCR_CRP_BC1ARPLOCK_UNLOCKED_Val     _UINT32_(0x0)                                        /* (FCR_CRP) The Lock &amp; Read Protect bits for this Page are NOT Locked and can be modified  */
#define   FCR_CRP_BC1ARPLOCK_LOCKED_Val       _UINT32_(0x1)                                        /* (FCR_CRP) The Lock &amp; Read Protect bits for this Page are Locked and cannot be modified  */
#define FCR_CRP_BC1ARPLOCK_UNLOCKED           (FCR_CRP_BC1ARPLOCK_UNLOCKED_Val << FCR_CRP_BC1ARPLOCK_Pos) /* (FCR_CRP) The Lock &amp; Read Protect bits for this Page are NOT Locked and can be modified Position */
#define FCR_CRP_BC1ARPLOCK_LOCKED             (FCR_CRP_BC1ARPLOCK_LOCKED_Val << FCR_CRP_BC1ARPLOCK_Pos) /* (FCR_CRP) The Lock &amp; Read Protect bits for this Page are Locked and cannot be modified Position */
#define FCR_CRP_UO1RPLOCK_Pos                 _UINT32_(17)                                         /* (FCR_CRP) Panel 1 Lock Read Protection UserOTP1 Position */
#define FCR_CRP_UO1RPLOCK_Msk                 (_UINT32_(0x1) << FCR_CRP_UO1RPLOCK_Pos)             /* (FCR_CRP) Panel 1 Lock Read Protection UserOTP1 Mask */
#define FCR_CRP_UO1RPLOCK(value)              (FCR_CRP_UO1RPLOCK_Msk & (_UINT32_(value) << FCR_CRP_UO1RPLOCK_Pos)) /* Assignment of value for UO1RPLOCK in the FCR_CRP register */
#define   FCR_CRP_UO1RPLOCK_LOCKED_Val        _UINT32_(0x1)                                        /* (FCR_CRP) The Lock &amp; Read Protect bits for this Page are Locked and cannot be modified  */
#define FCR_CRP_UO1RPLOCK_LOCKED              (FCR_CRP_UO1RPLOCK_LOCKED_Val << FCR_CRP_UO1RPLOCK_Pos) /* (FCR_CRP) The Lock &amp; Read Protect bits for this Page are Locked and cannot be modified Position */
#define FCR_CRP_BC1RPLOCK_Pos                 _UINT32_(18)                                         /* (FCR_CRP) Panel 1 Lock Read Protection BootCfg1 Position */
#define FCR_CRP_BC1RPLOCK_Msk                 (_UINT32_(0x1) << FCR_CRP_BC1RPLOCK_Pos)             /* (FCR_CRP) Panel 1 Lock Read Protection BootCfg1 Mask */
#define FCR_CRP_BC1RPLOCK(value)              (FCR_CRP_BC1RPLOCK_Msk & (_UINT32_(value) << FCR_CRP_BC1RPLOCK_Pos)) /* Assignment of value for BC1RPLOCK in the FCR_CRP register */
#define   FCR_CRP_BC1RPLOCK_UNLOCKED_Val      _UINT32_(0x0)                                        /* (FCR_CRP) The Lock &amp; Read Protect bits for this Page are NOT Locked and can be modified  */
#define   FCR_CRP_BC1RPLOCK_LOCKED_Val        _UINT32_(0x1)                                        /* (FCR_CRP) The Lock &amp; Read Protect bits for this Page are Locked and cannot be modified  */
#define FCR_CRP_BC1RPLOCK_UNLOCKED            (FCR_CRP_BC1RPLOCK_UNLOCKED_Val << FCR_CRP_BC1RPLOCK_Pos) /* (FCR_CRP) The Lock &amp; Read Protect bits for this Page are NOT Locked and can be modified Position */
#define FCR_CRP_BC1RPLOCK_LOCKED              (FCR_CRP_BC1RPLOCK_LOCKED_Val << FCR_CRP_BC1RPLOCK_Pos) /* (FCR_CRP) The Lock &amp; Read Protect bits for this Page are Locked and cannot be modified Position */
#define FCR_CRP_RCRPLOCK_Pos                  _UINT32_(19)                                         /* (FCR_CRP) Panel 1 Lock Read Protection ROMCfg Position */
#define FCR_CRP_RCRPLOCK_Msk                  (_UINT32_(0x1) << FCR_CRP_RCRPLOCK_Pos)              /* (FCR_CRP) Panel 1 Lock Read Protection ROMCfg Mask */
#define FCR_CRP_RCRPLOCK(value)               (FCR_CRP_RCRPLOCK_Msk & (_UINT32_(value) << FCR_CRP_RCRPLOCK_Pos)) /* Assignment of value for RCRPLOCK in the FCR_CRP register */
#define   FCR_CRP_RCRPLOCK_UNLOCKED_Val       _UINT32_(0x0)                                        /* (FCR_CRP) The Lock &amp; Read Protect bits for this Page are NOT Locked and can be modified  */
#define   FCR_CRP_RCRPLOCK_LOCKED_Val         _UINT32_(0x1)                                        /* (FCR_CRP) The Lock &amp; Read Protect bits for this Page are Locked and cannot be modified  */
#define FCR_CRP_RCRPLOCK_UNLOCKED             (FCR_CRP_RCRPLOCK_UNLOCKED_Val << FCR_CRP_RCRPLOCK_Pos) /* (FCR_CRP) The Lock &amp; Read Protect bits for this Page are NOT Locked and can be modified Position */
#define FCR_CRP_RCRPLOCK_LOCKED               (FCR_CRP_RCRPLOCK_LOCKED_Val << FCR_CRP_RCRPLOCK_Pos) /* (FCR_CRP) The Lock &amp; Read Protect bits for this Page are Locked and cannot be modified Position */
#define FCR_CRP_VSSRPLOCK0_Pos                _UINT32_(20)                                         /* (FCR_CRP) Panel 1 Lock Read Protection VSSn Position */
#define FCR_CRP_VSSRPLOCK0_Msk                (_UINT32_(0x1) << FCR_CRP_VSSRPLOCK0_Pos)            /* (FCR_CRP) Panel 1 Lock Read Protection VSSn Mask */
#define FCR_CRP_VSSRPLOCK0(value)             (FCR_CRP_VSSRPLOCK0_Msk & (_UINT32_(value) << FCR_CRP_VSSRPLOCK0_Pos)) /* Assignment of value for VSSRPLOCK0 in the FCR_CRP register */
#define   FCR_CRP_VSSRPLOCK0_UNLOCKED_Val     _UINT32_(0x0)                                        /* (FCR_CRP) The Lock &amp; Read Protect bits for this Page are NOT Locked and can be modified  */
#define   FCR_CRP_VSSRPLOCK0_LOCKED_Val       _UINT32_(0x1)                                        /* (FCR_CRP) The Lock &amp; Read Protect bits for this Page are Locked and cannot be modified  */
#define FCR_CRP_VSSRPLOCK0_UNLOCKED           (FCR_CRP_VSSRPLOCK0_UNLOCKED_Val << FCR_CRP_VSSRPLOCK0_Pos) /* (FCR_CRP) The Lock &amp; Read Protect bits for this Page are NOT Locked and can be modified Position */
#define FCR_CRP_VSSRPLOCK0_LOCKED             (FCR_CRP_VSSRPLOCK0_LOCKED_Val << FCR_CRP_VSSRPLOCK0_Pos) /* (FCR_CRP) The Lock &amp; Read Protect bits for this Page are Locked and cannot be modified Position */
#define FCR_CRP_VSSRPLOCK1_Pos                _UINT32_(21)                                         /* (FCR_CRP) Panel 1 Lock Read Protection VSSn Position */
#define FCR_CRP_VSSRPLOCK1_Msk                (_UINT32_(0x1) << FCR_CRP_VSSRPLOCK1_Pos)            /* (FCR_CRP) Panel 1 Lock Read Protection VSSn Mask */
#define FCR_CRP_VSSRPLOCK1(value)             (FCR_CRP_VSSRPLOCK1_Msk & (_UINT32_(value) << FCR_CRP_VSSRPLOCK1_Pos)) /* Assignment of value for VSSRPLOCK1 in the FCR_CRP register */
#define   FCR_CRP_VSSRPLOCK1_UNLOCKED_Val     _UINT32_(0x0)                                        /* (FCR_CRP) The Lock &amp; Read Protect bits for this Page are NOT Locked and can be modified  */
#define   FCR_CRP_VSSRPLOCK1_LOCKED_Val       _UINT32_(0x1)                                        /* (FCR_CRP) The Lock &amp; Read Protect bits for this Page are Locked and cannot be modified  */
#define FCR_CRP_VSSRPLOCK1_UNLOCKED           (FCR_CRP_VSSRPLOCK1_UNLOCKED_Val << FCR_CRP_VSSRPLOCK1_Pos) /* (FCR_CRP) The Lock &amp; Read Protect bits for this Page are NOT Locked and can be modified Position */
#define FCR_CRP_VSSRPLOCK1_LOCKED             (FCR_CRP_VSSRPLOCK1_LOCKED_Val << FCR_CRP_VSSRPLOCK1_Pos) /* (FCR_CRP) The Lock &amp; Read Protect bits for this Page are Locked and cannot be modified Position */
#define FCR_CRP_TRPLOCK_Pos                   _UINT32_(22)                                         /* (FCR_CRP) Panel 1 Lock Read Protection Test Position */
#define FCR_CRP_TRPLOCK_Msk                   (_UINT32_(0x1) << FCR_CRP_TRPLOCK_Pos)               /* (FCR_CRP) Panel 1 Lock Read Protection Test Mask */
#define FCR_CRP_TRPLOCK(value)                (FCR_CRP_TRPLOCK_Msk & (_UINT32_(value) << FCR_CRP_TRPLOCK_Pos)) /* Assignment of value for TRPLOCK in the FCR_CRP register */
#define   FCR_CRP_TRPLOCK_LOCKED_Val          _UINT32_(0x1)                                        /* (FCR_CRP) The Lock &amp; Read Protect bits for this Page are Locked and cannot be modified  */
#define FCR_CRP_TRPLOCK_LOCKED                (FCR_CRP_TRPLOCK_LOCKED_Val << FCR_CRP_TRPLOCK_Pos)  /* (FCR_CRP) The Lock &amp; Read Protect bits for this Page are Locked and cannot be modified Position */
#define FCR_CRP_CORPLOCK_Pos                  _UINT32_(23)                                         /* (FCR_CRP) Panel 1 Lock Read Protection CalOTP Position */
#define FCR_CRP_CORPLOCK_Msk                  (_UINT32_(0x1) << FCR_CRP_CORPLOCK_Pos)              /* (FCR_CRP) Panel 1 Lock Read Protection CalOTP Mask */
#define FCR_CRP_CORPLOCK(value)               (FCR_CRP_CORPLOCK_Msk & (_UINT32_(value) << FCR_CRP_CORPLOCK_Pos)) /* Assignment of value for CORPLOCK in the FCR_CRP register */
#define   FCR_CRP_CORPLOCK_LOCKED_Val         _UINT32_(0x1)                                        /* (FCR_CRP) The Lock &amp; Read Protect bits for this Page are Locked and cannot be modified  */
#define FCR_CRP_CORPLOCK_LOCKED               (FCR_CRP_CORPLOCK_LOCKED_Val << FCR_CRP_CORPLOCK_Pos) /* (FCR_CRP) The Lock &amp; Read Protect bits for this Page are Locked and cannot be modified Position */
#define FCR_CRP_Msk                           _UINT32_(0x00FF00FF)                                 /* (FCR_CRP) Register Mask  */

#define FCR_CRP_VSSRP_Pos                     _UINT32_(4)                                          /* (FCR_CRP Position) Panel x Read Protect VSSn */
#define FCR_CRP_VSSRP_Msk                     (_UINT32_(0x3) << FCR_CRP_VSSRP_Pos)                 /* (FCR_CRP Mask) VSSRP */
#define FCR_CRP_VSSRP(value)                  (FCR_CRP_VSSRP_Msk & (_UINT32_(value) << FCR_CRP_VSSRP_Pos)) 
#define FCR_CRP_VSSRPLOCK_Pos                 _UINT32_(20)                                         /* (FCR_CRP Position) Panel x Lock Read Protection VSSn */
#define FCR_CRP_VSSRPLOCK_Msk                 (_UINT32_(0x3) << FCR_CRP_VSSRPLOCK_Pos)             /* (FCR_CRP Mask) VSSRPLOCK */
#define FCR_CRP_VSSRPLOCK(value)              (FCR_CRP_VSSRPLOCK_Msk & (_UINT32_(value) << FCR_CRP_VSSRPLOCK_Pos)) 

/* FCR register offsets definitions */
#define FCR_CTRLA_REG_OFST             _UINT32_(0x00)      /* (FCR_CTRLA) CTRL A REGISTER Offset */
#define FCR_CTRLB_REG_OFST             _UINT32_(0x04)      /* (FCR_CTRLB) CTRL B REGISTER Offset */
#define FCR_INTENCLR_REG_OFST          _UINT32_(0x08)      /* (FCR_INTENCLR) Interrupt Enable Clear REGISTER Offset */
#define FCR_INTENSET_REG_OFST          _UINT32_(0x0C)      /* (FCR_INTENSET) Interrupt Enable SET REGISTER Offset */
#define FCR_INTFLAG_REG_OFST           _UINT32_(0x10)      /* (FCR_INTFLAG) Interrupt Flag REGISTER Offset */
#define FCR_INTFLAGSET_REG_OFST        _UINT32_(0x14)      /* (FCR_INTFLAGSET) Interrupt Flag Set REGISTER Offset */
#define FCR_STATUS_REG_OFST            _UINT32_(0x18)      /* (FCR_STATUS) Status REGISTER Offset */
#define FCR_DBGCTRL_REG_OFST           _UINT32_(0x1C)      /* (FCR_DBGCTRL) Debug Control CTRL REGISTER Offset */
#define FCR_ECCCTRL_REG_OFST           _UINT32_(0x20)      /* (FCR_ECCCTRL) ECC Control REGISTER Offset */
#define FCR_CRCCTRL_REG_OFST           _UINT32_(0x24)      /* (FCR_CRCCTRL) CRC Control REGISTER Offset */
#define FCR_CRCMODE_REG_OFST           _UINT32_(0x28)      /* (FCR_CRCMODE) CRC MODE REGISTER Offset */
#define FCR_CRCPAUSE_REG_OFST          _UINT32_(0x2C)      /* (FCR_CRCPAUSE) CRC Pause REGISTER Offset */
#define FCR_CRCMADR_REG_OFST           _UINT32_(0x30)      /* (FCR_CRCMADR) CRC Message Address REGISTER Offset */
#define FCR_CRCMLEN_REG_OFST           _UINT32_(0x34)      /* (FCR_CRCMLEN) CRC Message Length REGISTER Offset */
#define FCR_CRCIV_REG_OFST             _UINT32_(0x38)      /* (FCR_CRCIV) CRC Initial Value REGISTER Offset */
#define FCR_CRCACC_REG_OFST            _UINT32_(0x3C)      /* (FCR_CRCACC) CRC Accumulator REGISTER Offset */
#define FCR_CRCPOLY_REG_OFST           _UINT32_(0x40)      /* (FCR_CRCPOLY) CRC Polynomial REGISTER Offset */
#define FCR_CRCFXOR_REG_OFST           _UINT32_(0x44)      /* (FCR_CRCFXOR) CRC Final XOR REGISTER Offset */
#define FCR_CRCSUM_REG_OFST            _UINT32_(0x48)      /* (FCR_CRCSUM) CRC CheckSUM REGISTER Offset */
#define FCR_FFLTCTRL_REG_OFST          _UINT32_(0x4C)      /* (FCR_FFLTCTRL) Flash ECC Fault Control REGISTER Offset */
#define FCR_FFLTMODE_REG_OFST          _UINT32_(0x50)      /* (FCR_FFLTMODE) Flash ECC Fault Mode REGISTER Offset */
#define FCR_FFLTPTR_REG_OFST           _UINT32_(0x54)      /* (FCR_FFLTPTR) Flash ECC Fault Pointer REGISTER Offset */
#define FCR_FFLTADR_REG_OFST           _UINT32_(0x58)      /* (FCR_FFLTADR) Flash ECC Fault Address REGISTER Offset */
#define FCR_FFLTCAP_REG_OFST           _UINT32_(0x5C)      /* (FCR_FFLTCAP) Flash ECC Fault Capture Address REGISTER Offset */
#define FCR_FFLTPAR_REG_OFST           _UINT32_(0x60)      /* (FCR_FFLTPAR) Flash ECC Fault Parity REGISTER Offset */
#define FCR_FFLTSYN_REG_OFST           _UINT32_(0x64)      /* (FCR_FFLTSYN) Flash ECC Fault Syndrome REGISTER Offset */
#define FCR_CRP_REG_OFST               _UINT32_(0x68)      /* (FCR_CRP) CFM Page Read Protection REGISTER (CFM8) Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* FCR register API structure */
typedef struct
{  /* Polaris Flash Read Controller */
  __IO  uint32_t                       FCR_CTRLA;          /* Offset: 0x00 (R/W  32) CTRL A REGISTER */
  __IO  uint32_t                       FCR_CTRLB;          /* Offset: 0x04 (R/W  32) CTRL B REGISTER */
  __IO  uint32_t                       FCR_INTENCLR;       /* Offset: 0x08 (R/W  32) Interrupt Enable Clear REGISTER */
  __IO  uint32_t                       FCR_INTENSET;       /* Offset: 0x0C (R/W  32) Interrupt Enable SET REGISTER */
  __IO  uint32_t                       FCR_INTFLAG;        /* Offset: 0x10 (R/W  32) Interrupt Flag REGISTER */
  __IO  uint32_t                       FCR_INTFLAGSET;     /* Offset: 0x14 (R/W  32) Interrupt Flag Set REGISTER */
  __I   uint32_t                       FCR_STATUS;         /* Offset: 0x18 (R/   32) Status REGISTER */
  __IO  uint32_t                       FCR_DBGCTRL;        /* Offset: 0x1C (R/W  32) Debug Control CTRL REGISTER */
  __IO  uint32_t                       FCR_ECCCTRL;        /* Offset: 0x20 (R/W  32) ECC Control REGISTER */
  __IO  uint32_t                       FCR_CRCCTRL;        /* Offset: 0x24 (R/W  32) CRC Control REGISTER */
  __IO  uint32_t                       FCR_CRCMODE;        /* Offset: 0x28 (R/W  32) CRC MODE REGISTER */
  __IO  uint32_t                       FCR_CRCPAUSE;       /* Offset: 0x2C (R/W  32) CRC Pause REGISTER */
  __IO  uint32_t                       FCR_CRCMADR;        /* Offset: 0x30 (R/W  32) CRC Message Address REGISTER */
  __IO  uint32_t                       FCR_CRCMLEN;        /* Offset: 0x34 (R/W  32) CRC Message Length REGISTER */
  __IO  uint32_t                       FCR_CRCIV;          /* Offset: 0x38 (R/W  32) CRC Initial Value REGISTER */
  __I   uint32_t                       FCR_CRCACC;         /* Offset: 0x3C (R/   32) CRC Accumulator REGISTER */
  __IO  uint32_t                       FCR_CRCPOLY;        /* Offset: 0x40 (R/W  32) CRC Polynomial REGISTER */
  __IO  uint32_t                       FCR_CRCFXOR;        /* Offset: 0x44 (R/W  32) CRC Final XOR REGISTER */
  __IO  uint32_t                       FCR_CRCSUM;         /* Offset: 0x48 (R/W  32) CRC CheckSUM REGISTER */
  __IO  uint32_t                       FCR_FFLTCTRL;       /* Offset: 0x4C (R/W  32) Flash ECC Fault Control REGISTER */
  __IO  uint32_t                       FCR_FFLTMODE;       /* Offset: 0x50 (R/W  32) Flash ECC Fault Mode REGISTER */
  __IO  uint32_t                       FCR_FFLTPTR;        /* Offset: 0x54 (R/W  32) Flash ECC Fault Pointer REGISTER */
  __IO  uint32_t                       FCR_FFLTADR;        /* Offset: 0x58 (R/W  32) Flash ECC Fault Address REGISTER */
  __I   uint32_t                       FCR_FFLTCAP;        /* Offset: 0x5C (R/   32) Flash ECC Fault Capture Address REGISTER */
  __I   uint32_t                       FCR_FFLTPAR;        /* Offset: 0x60 (R/   32) Flash ECC Fault Parity REGISTER */
  __I   uint32_t                       FCR_FFLTSYN;        /* Offset: 0x64 (R/   32) Flash ECC Fault Syndrome REGISTER */
  __IO  uint32_t                       FCR_CRP;            /* Offset: 0x68 (R/W  32) CFM Page Read Protection REGISTER (CFM8) */
} fcr_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMGC00_FCR_COMPONENT_H_ */
