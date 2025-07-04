/*
 * Component description for MCRAMC
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
#ifndef _PIC32CMGC00_MCRAMC_COMPONENT_H_
#define _PIC32CMGC00_MCRAMC_COMPONENT_H_

/* ************************************************************************** */
/*                     SOFTWARE API DEFINITION FOR MCRAMC                     */
/* ************************************************************************** */

/* -------- MCRAMC_CTRLA : (MCRAMC Offset: 0x00) (R/W 32) Control Enable A Register -------- */
#define MCRAMC_CTRLA_RESETVALUE               _UINT32_(0x02)                                       /*  (MCRAMC_CTRLA) Control Enable A Register  Reset Value */

#define MCRAMC_CTRLA_SWRST_Pos                _UINT32_(0)                                          /* (MCRAMC_CTRLA) Software Reset Position */
#define MCRAMC_CTRLA_SWRST_Msk                (_UINT32_(0x1) << MCRAMC_CTRLA_SWRST_Pos)            /* (MCRAMC_CTRLA) Software Reset Mask */
#define MCRAMC_CTRLA_SWRST(value)             (MCRAMC_CTRLA_SWRST_Msk & (_UINT32_(value) << MCRAMC_CTRLA_SWRST_Pos)) /* Assignment of value for SWRST in the MCRAMC_CTRLA register */
#define   MCRAMC_CTRLA_SWRST_0_Val            _UINT32_(0x0)                                        /* (MCRAMC_CTRLA) No effect.  */
#define   MCRAMC_CTRLA_SWRST_1_Val            _UINT32_(0x1)                                        /* (MCRAMC_CTRLA) Reset the MCRAMC. A software-triggered hardware reset of the MCRAMC user interface is performed.  */
#define MCRAMC_CTRLA_SWRST_0                  (MCRAMC_CTRLA_SWRST_0_Val << MCRAMC_CTRLA_SWRST_Pos) /* (MCRAMC_CTRLA) No effect. Position */
#define MCRAMC_CTRLA_SWRST_1                  (MCRAMC_CTRLA_SWRST_1_Val << MCRAMC_CTRLA_SWRST_Pos) /* (MCRAMC_CTRLA) Reset the MCRAMC. A software-triggered hardware reset of the MCRAMC user interface is performed. Position */
#define MCRAMC_CTRLA_ENABLE_Pos               _UINT32_(1)                                          /* (MCRAMC_CTRLA) ECC Decoder Enable Position */
#define MCRAMC_CTRLA_ENABLE_Msk               (_UINT32_(0x1) << MCRAMC_CTRLA_ENABLE_Pos)           /* (MCRAMC_CTRLA) ECC Decoder Enable Mask */
#define MCRAMC_CTRLA_ENABLE(value)            (MCRAMC_CTRLA_ENABLE_Msk & (_UINT32_(value) << MCRAMC_CTRLA_ENABLE_Pos)) /* Assignment of value for ENABLE in the MCRAMC_CTRLA register */
#define   MCRAMC_CTRLA_ENABLE_0_Val           _UINT32_(0x0)                                        /* (MCRAMC_CTRLA) ECC decoding is disabled.  */
#define   MCRAMC_CTRLA_ENABLE_1_Val           _UINT32_(0x1)                                        /* (MCRAMC_CTRLA) ECC decoding is enabled.  */
#define MCRAMC_CTRLA_ENABLE_0                 (MCRAMC_CTRLA_ENABLE_0_Val << MCRAMC_CTRLA_ENABLE_Pos) /* (MCRAMC_CTRLA) ECC decoding is disabled. Position */
#define MCRAMC_CTRLA_ENABLE_1                 (MCRAMC_CTRLA_ENABLE_1_Val << MCRAMC_CTRLA_ENABLE_Pos) /* (MCRAMC_CTRLA) ECC decoding is enabled. Position */
#define MCRAMC_CTRLA_PRIV_Pos                 _UINT32_(2)                                          /* (MCRAMC_CTRLA) Priviledged Access Enable Position */
#define MCRAMC_CTRLA_PRIV_Msk                 (_UINT32_(0x1) << MCRAMC_CTRLA_PRIV_Pos)             /* (MCRAMC_CTRLA) Priviledged Access Enable Mask */
#define MCRAMC_CTRLA_PRIV(value)              (MCRAMC_CTRLA_PRIV_Msk & (_UINT32_(value) << MCRAMC_CTRLA_PRIV_Pos)) /* Assignment of value for PRIV in the MCRAMC_CTRLA register */
#define MCRAMC_CTRLA_WS_Pos                   _UINT32_(8)                                          /* (MCRAMC_CTRLA) Wait State Enable Position */
#define MCRAMC_CTRLA_WS_Msk                   (_UINT32_(0x1) << MCRAMC_CTRLA_WS_Pos)               /* (MCRAMC_CTRLA) Wait State Enable Mask */
#define MCRAMC_CTRLA_WS(value)                (MCRAMC_CTRLA_WS_Msk & (_UINT32_(value) << MCRAMC_CTRLA_WS_Pos)) /* Assignment of value for WS in the MCRAMC_CTRLA register */
#define MCRAMC_CTRLA_Msk                      _UINT32_(0x00000107)                                 /* (MCRAMC_CTRLA) Register Mask  */


/* -------- MCRAMC_INTENCLR : (MCRAMC Offset: 0x08) (R/W 32) Interrupt Enable Clear Register -------- */
#define MCRAMC_INTENCLR_RESETVALUE            _UINT32_(0x00)                                       /*  (MCRAMC_INTENCLR) Interrupt Enable Clear Register  Reset Value */

#define MCRAMC_INTENCLR_SERREN_Pos            _UINT32_(0)                                          /* (MCRAMC_INTENCLR) Single Bit Error Interrupt Enable, Clear Position */
#define MCRAMC_INTENCLR_SERREN_Msk            (_UINT32_(0x1) << MCRAMC_INTENCLR_SERREN_Pos)        /* (MCRAMC_INTENCLR) Single Bit Error Interrupt Enable, Clear Mask */
#define MCRAMC_INTENCLR_SERREN(value)         (MCRAMC_INTENCLR_SERREN_Msk & (_UINT32_(value) << MCRAMC_INTENCLR_SERREN_Pos)) /* Assignment of value for SERREN in the MCRAMC_INTENCLR register */
#define MCRAMC_INTENCLR_DERREN_Pos            _UINT32_(1)                                          /* (MCRAMC_INTENCLR) Double Bit Error Interrupt Enable, Clear Position */
#define MCRAMC_INTENCLR_DERREN_Msk            (_UINT32_(0x1) << MCRAMC_INTENCLR_DERREN_Pos)        /* (MCRAMC_INTENCLR) Double Bit Error Interrupt Enable, Clear Mask */
#define MCRAMC_INTENCLR_DERREN(value)         (MCRAMC_INTENCLR_DERREN_Msk & (_UINT32_(value) << MCRAMC_INTENCLR_DERREN_Pos)) /* Assignment of value for DERREN in the MCRAMC_INTENCLR register */
#define MCRAMC_INTENCLR_Msk                   _UINT32_(0x00000003)                                 /* (MCRAMC_INTENCLR) Register Mask  */


/* -------- MCRAMC_INTENSET : (MCRAMC Offset: 0x0C) (R/W 32) Interrupt Enable Set Register -------- */
#define MCRAMC_INTENSET_RESETVALUE            _UINT32_(0x00)                                       /*  (MCRAMC_INTENSET) Interrupt Enable Set Register  Reset Value */

#define MCRAMC_INTENSET_SERREN_Pos            _UINT32_(0)                                          /* (MCRAMC_INTENSET) Single Bit Error Interrupt Enable, Set Position */
#define MCRAMC_INTENSET_SERREN_Msk            (_UINT32_(0x1) << MCRAMC_INTENSET_SERREN_Pos)        /* (MCRAMC_INTENSET) Single Bit Error Interrupt Enable, Set Mask */
#define MCRAMC_INTENSET_SERREN(value)         (MCRAMC_INTENSET_SERREN_Msk & (_UINT32_(value) << MCRAMC_INTENSET_SERREN_Pos)) /* Assignment of value for SERREN in the MCRAMC_INTENSET register */
#define MCRAMC_INTENSET_DERREN_Pos            _UINT32_(1)                                          /* (MCRAMC_INTENSET) Double Bit Error Interrupt Enable, Set Position */
#define MCRAMC_INTENSET_DERREN_Msk            (_UINT32_(0x1) << MCRAMC_INTENSET_DERREN_Pos)        /* (MCRAMC_INTENSET) Double Bit Error Interrupt Enable, Set Mask */
#define MCRAMC_INTENSET_DERREN(value)         (MCRAMC_INTENSET_DERREN_Msk & (_UINT32_(value) << MCRAMC_INTENSET_DERREN_Pos)) /* Assignment of value for DERREN in the MCRAMC_INTENSET register */
#define MCRAMC_INTENSET_Msk                   _UINT32_(0x00000003)                                 /* (MCRAMC_INTENSET) Register Mask  */


/* -------- MCRAMC_INTSTA : (MCRAMC Offset: 0x10) (R/W 32) Interrupt Status Register -------- */
#define MCRAMC_INTSTA_RESETVALUE              _UINT32_(0x00)                                       /*  (MCRAMC_INTSTA) Interrupt Status Register  Reset Value */

#define MCRAMC_INTSTA_SERR_Pos                _UINT32_(0)                                          /* (MCRAMC_INTSTA) Single Bit Error Position */
#define MCRAMC_INTSTA_SERR_Msk                (_UINT32_(0x1) << MCRAMC_INTSTA_SERR_Pos)            /* (MCRAMC_INTSTA) Single Bit Error Mask */
#define MCRAMC_INTSTA_SERR(value)             (MCRAMC_INTSTA_SERR_Msk & (_UINT32_(value) << MCRAMC_INTSTA_SERR_Pos)) /* Assignment of value for SERR in the MCRAMC_INTSTA register */
#define MCRAMC_INTSTA_DERR_Pos                _UINT32_(1)                                          /* (MCRAMC_INTSTA) Double Bit Error Position */
#define MCRAMC_INTSTA_DERR_Msk                (_UINT32_(0x1) << MCRAMC_INTSTA_DERR_Pos)            /* (MCRAMC_INTSTA) Double Bit Error Mask */
#define MCRAMC_INTSTA_DERR(value)             (MCRAMC_INTSTA_DERR_Msk & (_UINT32_(value) << MCRAMC_INTSTA_DERR_Pos)) /* Assignment of value for DERR in the MCRAMC_INTSTA register */
#define MCRAMC_INTSTA_Msk                     _UINT32_(0x00000003)                                 /* (MCRAMC_INTSTA) Register Mask  */


/* -------- MCRAMC_FLTCTRL : (MCRAMC Offset: 0x14) (R/W 32) Fault Injection Control Register -------- */
#define MCRAMC_FLTCTRL_RESETVALUE             _UINT32_(0x00)                                       /*  (MCRAMC_FLTCTRL) Fault Injection Control Register  Reset Value */

#define MCRAMC_FLTCTRL_FLTEN_Pos              _UINT32_(1)                                          /* (MCRAMC_FLTCTRL) Fault Injection Enabled Position */
#define MCRAMC_FLTCTRL_FLTEN_Msk              (_UINT32_(0x1) << MCRAMC_FLTCTRL_FLTEN_Pos)          /* (MCRAMC_FLTCTRL) Fault Injection Enabled Mask */
#define MCRAMC_FLTCTRL_FLTEN(value)           (MCRAMC_FLTCTRL_FLTEN_Msk & (_UINT32_(value) << MCRAMC_FLTCTRL_FLTEN_Pos)) /* Assignment of value for FLTEN in the MCRAMC_FLTCTRL register */
#define   MCRAMC_FLTCTRL_FLTEN_0_Val          _UINT32_(0x0)                                        /* (MCRAMC_FLTCTRL) Disables fault injection.  */
#define   MCRAMC_FLTCTRL_FLTEN_1_Val          _UINT32_(0x1)                                        /* (MCRAMC_FLTCTRL) Enables fault injection at FLTADR address offset as selected by FLTMD and FLTxPTR.  */
#define MCRAMC_FLTCTRL_FLTEN_0                (MCRAMC_FLTCTRL_FLTEN_0_Val << MCRAMC_FLTCTRL_FLTEN_Pos) /* (MCRAMC_FLTCTRL) Disables fault injection. Position */
#define MCRAMC_FLTCTRL_FLTEN_1                (MCRAMC_FLTCTRL_FLTEN_1_Val << MCRAMC_FLTCTRL_FLTEN_Pos) /* (MCRAMC_FLTCTRL) Enables fault injection at FLTADR address offset as selected by FLTMD and FLTxPTR. Position */
#define MCRAMC_FLTCTRL_FLTMD_Pos              _UINT32_(12)                                         /* (MCRAMC_FLTCTRL) Fault Injection Mode Position */
#define MCRAMC_FLTCTRL_FLTMD_Msk              (_UINT32_(0x3) << MCRAMC_FLTCTRL_FLTMD_Pos)          /* (MCRAMC_FLTCTRL) Fault Injection Mode Mask */
#define MCRAMC_FLTCTRL_FLTMD(value)           (MCRAMC_FLTCTRL_FLTMD_Msk & (_UINT32_(value) << MCRAMC_FLTCTRL_FLTMD_Pos)) /* Assignment of value for FLTMD in the MCRAMC_FLTCTRL register */
#define MCRAMC_FLTCTRL_Msk                    _UINT32_(0x00003002)                                 /* (MCRAMC_FLTCTRL) Register Mask  */


/* -------- MCRAMC_FLTPTR : (MCRAMC Offset: 0x18) (R/W 32) Fault Injection Pointer Register -------- */
#define MCRAMC_FLTPTR_RESETVALUE              _UINT32_(0x00)                                       /*  (MCRAMC_FLTPTR) Fault Injection Pointer Register  Reset Value */

#define MCRAMC_FLTPTR_FLT1PTR_Pos             _UINT32_(0)                                          /* (MCRAMC_FLTPTR) Single Fault Injection Bit Pointer Position */
#define MCRAMC_FLTPTR_FLT1PTR_Msk             (_UINT32_(0xFF) << MCRAMC_FLTPTR_FLT1PTR_Pos)        /* (MCRAMC_FLTPTR) Single Fault Injection Bit Pointer Mask */
#define MCRAMC_FLTPTR_FLT1PTR(value)          (MCRAMC_FLTPTR_FLT1PTR_Msk & (_UINT32_(value) << MCRAMC_FLTPTR_FLT1PTR_Pos)) /* Assignment of value for FLT1PTR in the MCRAMC_FLTPTR register */
#define MCRAMC_FLTPTR_FLT2PTR_Pos             _UINT32_(16)                                         /* (MCRAMC_FLTPTR) Double Fault Injection Bit Pointer Position */
#define MCRAMC_FLTPTR_FLT2PTR_Msk             (_UINT32_(0xFF) << MCRAMC_FLTPTR_FLT2PTR_Pos)        /* (MCRAMC_FLTPTR) Double Fault Injection Bit Pointer Mask */
#define MCRAMC_FLTPTR_FLT2PTR(value)          (MCRAMC_FLTPTR_FLT2PTR_Msk & (_UINT32_(value) << MCRAMC_FLTPTR_FLT2PTR_Pos)) /* Assignment of value for FLT2PTR in the MCRAMC_FLTPTR register */
#define MCRAMC_FLTPTR_Msk                     _UINT32_(0x00FF00FF)                                 /* (MCRAMC_FLTPTR) Register Mask  */


/* -------- MCRAMC_FLTADR : (MCRAMC Offset: 0x1C) (R/W 32) Fault Injection Address Register -------- */
#define MCRAMC_FLTADR_RESETVALUE              _UINT32_(0x00)                                       /*  (MCRAMC_FLTADR) Fault Injection Address Register  Reset Value */

#define MCRAMC_FLTADR_FLTADR_Pos              _UINT32_(0)                                          /* (MCRAMC_FLTADR) Fault Address Offset Position */
#define MCRAMC_FLTADR_FLTADR_Msk              (_UINT32_(0xFFFFFF) << MCRAMC_FLTADR_FLTADR_Pos)     /* (MCRAMC_FLTADR) Fault Address Offset Mask */
#define MCRAMC_FLTADR_FLTADR(value)           (MCRAMC_FLTADR_FLTADR_Msk & (_UINT32_(value) << MCRAMC_FLTADR_FLTADR_Pos)) /* Assignment of value for FLTADR in the MCRAMC_FLTADR register */
#define MCRAMC_FLTADR_Msk                     _UINT32_(0x00FFFFFF)                                 /* (MCRAMC_FLTADR) Register Mask  */


/* -------- MCRAMC_ERRCADR : (MCRAMC Offset: 0x20) ( R/ 32) Error Capture Address Register -------- */
#define MCRAMC_ERRCADR_RESETVALUE             _UINT32_(0x00)                                       /*  (MCRAMC_ERRCADR) Error Capture Address Register  Reset Value */

#define MCRAMC_ERRCADR_ERCADR_Pos             _UINT32_(0)                                          /* (MCRAMC_ERRCADR) ECC SECDED Error Capture Address Position */
#define MCRAMC_ERRCADR_ERCADR_Msk             (_UINT32_(0xFFFFFF) << MCRAMC_ERRCADR_ERCADR_Pos)    /* (MCRAMC_ERRCADR) ECC SECDED Error Capture Address Mask */
#define MCRAMC_ERRCADR_ERCADR(value)          (MCRAMC_ERRCADR_ERCADR_Msk & (_UINT32_(value) << MCRAMC_ERRCADR_ERCADR_Pos)) /* Assignment of value for ERCADR in the MCRAMC_ERRCADR register */
#define MCRAMC_ERRCADR_Msk                    _UINT32_(0x00FFFFFF)                                 /* (MCRAMC_ERRCADR) Register Mask  */


/* -------- MCRAMC_ERRCPAR : (MCRAMC Offset: 0x24) ( R/ 32) Error Capture Parity Register -------- */
#define MCRAMC_ERRCPAR_RESETVALUE             _UINT32_(0x00)                                       /*  (MCRAMC_ERRCPAR) Error Capture Parity Register  Reset Value */

#define MCRAMC_ERRCPAR_ERCPAR_Pos             _UINT32_(0)                                          /* (MCRAMC_ERRCPAR) ECC SECDED Error Capture Parity Position */
#define MCRAMC_ERRCPAR_ERCPAR_Msk             (_UINT32_(0xFF) << MCRAMC_ERRCPAR_ERCPAR_Pos)        /* (MCRAMC_ERRCPAR) ECC SECDED Error Capture Parity Mask */
#define MCRAMC_ERRCPAR_ERCPAR(value)          (MCRAMC_ERRCPAR_ERCPAR_Msk & (_UINT32_(value) << MCRAMC_ERRCPAR_ERCPAR_Pos)) /* Assignment of value for ERCPAR in the MCRAMC_ERRCPAR register */
#define MCRAMC_ERRCPAR_Msk                    _UINT32_(0x000000FF)                                 /* (MCRAMC_ERRCPAR) Register Mask  */


/* -------- MCRAMC_ERRCSYN : (MCRAMC Offset: 0x28) ( R/ 32) Error Capture Syndrome Register -------- */
#define MCRAMC_ERRCSYN_RESETVALUE             _UINT32_(0x00)                                       /*  (MCRAMC_ERRCSYN) Error Capture Syndrome Register  Reset Value */

#define MCRAMC_ERRCSYN_ERCSYN_Pos             _UINT32_(0)                                          /* (MCRAMC_ERRCSYN) ECC SECDED Error Capture Syndrome Position */
#define MCRAMC_ERRCSYN_ERCSYN_Msk             (_UINT32_(0xFF) << MCRAMC_ERRCSYN_ERCSYN_Pos)        /* (MCRAMC_ERRCSYN) ECC SECDED Error Capture Syndrome Mask */
#define MCRAMC_ERRCSYN_ERCSYN(value)          (MCRAMC_ERRCSYN_ERCSYN_Msk & (_UINT32_(value) << MCRAMC_ERRCSYN_ERCSYN_Pos)) /* Assignment of value for ERCSYN in the MCRAMC_ERRCSYN register */
#define   MCRAMC_ERRCSYN_ERCSYN_0_Val         _UINT32_(0x0)                                        /* (MCRAMC_ERRCSYN) Not a Single bit error.  */
#define   MCRAMC_ERRCSYN_ERCSYN_1_Val         _UINT32_(0x1)                                        /* (MCRAMC_ERRCSYN) Single bit error.  */
#define MCRAMC_ERRCSYN_ERCSYN_0               (MCRAMC_ERRCSYN_ERCSYN_0_Val << MCRAMC_ERRCSYN_ERCSYN_Pos) /* (MCRAMC_ERRCSYN) Not a Single bit error. Position */
#define MCRAMC_ERRCSYN_ERCSYN_1               (MCRAMC_ERRCSYN_ERCSYN_1_Val << MCRAMC_ERRCSYN_ERCSYN_Pos) /* (MCRAMC_ERRCSYN) Single bit error. Position */
#define MCRAMC_ERRCSYN_ERR1_Pos               _UINT32_(14)                                         /* (MCRAMC_ERRCSYN) ECC Single Bit Error Position */
#define MCRAMC_ERRCSYN_ERR1_Msk               (_UINT32_(0x1) << MCRAMC_ERRCSYN_ERR1_Pos)           /* (MCRAMC_ERRCSYN) ECC Single Bit Error Mask */
#define MCRAMC_ERRCSYN_ERR1(value)            (MCRAMC_ERRCSYN_ERR1_Msk & (_UINT32_(value) << MCRAMC_ERRCSYN_ERR1_Pos)) /* Assignment of value for ERR1 in the MCRAMC_ERRCSYN register */
#define MCRAMC_ERRCSYN_ERR2_Pos               _UINT32_(15)                                         /* (MCRAMC_ERRCSYN) ECC Double Bit Error Position */
#define MCRAMC_ERRCSYN_ERR2_Msk               (_UINT32_(0x1) << MCRAMC_ERRCSYN_ERR2_Pos)           /* (MCRAMC_ERRCSYN) ECC Double Bit Error Mask */
#define MCRAMC_ERRCSYN_ERR2(value)            (MCRAMC_ERRCSYN_ERR2_Msk & (_UINT32_(value) << MCRAMC_ERRCSYN_ERR2_Pos)) /* Assignment of value for ERR2 in the MCRAMC_ERRCSYN register */
#define   MCRAMC_ERRCSYN_ERR2_0_Val           _UINT32_(0x0)                                        /* (MCRAMC_ERRCSYN) Not a Double bit error.  */
#define   MCRAMC_ERRCSYN_ERR2_1_Val           _UINT32_(0x1)                                        /* (MCRAMC_ERRCSYN) Double bit error.  */
#define MCRAMC_ERRCSYN_ERR2_0                 (MCRAMC_ERRCSYN_ERR2_0_Val << MCRAMC_ERRCSYN_ERR2_Pos) /* (MCRAMC_ERRCSYN) Not a Double bit error. Position */
#define MCRAMC_ERRCSYN_ERR2_1                 (MCRAMC_ERRCSYN_ERR2_1_Val << MCRAMC_ERRCSYN_ERR2_Pos) /* (MCRAMC_ERRCSYN) Double bit error. Position */
#define MCRAMC_ERRCSYN_Msk                    _UINT32_(0x0000C0FF)                                 /* (MCRAMC_ERRCSYN) Register Mask  */

#define MCRAMC_ERRCSYN_ERR_Pos                _UINT32_(14)                                         /* (MCRAMC_ERRCSYN Position) ECC Double Bit Error */
#define MCRAMC_ERRCSYN_ERR_Msk                (_UINT32_(0x3) << MCRAMC_ERRCSYN_ERR_Pos)            /* (MCRAMC_ERRCSYN Mask) ERR */
#define MCRAMC_ERRCSYN_ERR(value)             (MCRAMC_ERRCSYN_ERR_Msk & (_UINT32_(value) << MCRAMC_ERRCSYN_ERR_Pos)) 

/* -------- MCRAMC_VERSION : (MCRAMC Offset: 0xFC) ( R/ 32) Version Register -------- */
#define MCRAMC_VERSION_RESETVALUE             _UINT32_(0x510)                                      /*  (MCRAMC_VERSION) Version Register  Reset Value */

#define MCRAMC_VERSION_VERSION_Pos            _UINT32_(0)                                          /* (MCRAMC_VERSION) MCRAMC Version Position */
#define MCRAMC_VERSION_VERSION_Msk            (_UINT32_(0xFFF) << MCRAMC_VERSION_VERSION_Pos)      /* (MCRAMC_VERSION) MCRAMC Version Mask */
#define MCRAMC_VERSION_VERSION(value)         (MCRAMC_VERSION_VERSION_Msk & (_UINT32_(value) << MCRAMC_VERSION_VERSION_Pos)) /* Assignment of value for VERSION in the MCRAMC_VERSION register */
#define MCRAMC_VERSION_MFN_Pos                _UINT32_(16)                                         /* (MCRAMC_VERSION) Metal Fix Number Position */
#define MCRAMC_VERSION_MFN_Msk                (_UINT32_(0x7) << MCRAMC_VERSION_MFN_Pos)            /* (MCRAMC_VERSION) Metal Fix Number Mask */
#define MCRAMC_VERSION_MFN(value)             (MCRAMC_VERSION_MFN_Msk & (_UINT32_(value) << MCRAMC_VERSION_MFN_Pos)) /* Assignment of value for MFN in the MCRAMC_VERSION register */
#define MCRAMC_VERSION_Msk                    _UINT32_(0x00070FFF)                                 /* (MCRAMC_VERSION) Register Mask  */


/* MCRAMC register offsets definitions */
#define MCRAMC_CTRLA_REG_OFST          _UINT32_(0x00)      /* (MCRAMC_CTRLA) Control Enable A Register Offset */
#define MCRAMC_INTENCLR_REG_OFST       _UINT32_(0x08)      /* (MCRAMC_INTENCLR) Interrupt Enable Clear Register Offset */
#define MCRAMC_INTENSET_REG_OFST       _UINT32_(0x0C)      /* (MCRAMC_INTENSET) Interrupt Enable Set Register Offset */
#define MCRAMC_INTSTA_REG_OFST         _UINT32_(0x10)      /* (MCRAMC_INTSTA) Interrupt Status Register Offset */
#define MCRAMC_FLTCTRL_REG_OFST        _UINT32_(0x14)      /* (MCRAMC_FLTCTRL) Fault Injection Control Register Offset */
#define MCRAMC_FLTPTR_REG_OFST         _UINT32_(0x18)      /* (MCRAMC_FLTPTR) Fault Injection Pointer Register Offset */
#define MCRAMC_FLTADR_REG_OFST         _UINT32_(0x1C)      /* (MCRAMC_FLTADR) Fault Injection Address Register Offset */
#define MCRAMC_ERRCADR_REG_OFST        _UINT32_(0x20)      /* (MCRAMC_ERRCADR) Error Capture Address Register Offset */
#define MCRAMC_ERRCPAR_REG_OFST        _UINT32_(0x24)      /* (MCRAMC_ERRCPAR) Error Capture Parity Register Offset */
#define MCRAMC_ERRCSYN_REG_OFST        _UINT32_(0x28)      /* (MCRAMC_ERRCSYN) Error Capture Syndrome Register Offset */
#define MCRAMC_VERSION_REG_OFST        _UINT32_(0xFC)      /* (MCRAMC_VERSION) Version Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* MCRAMC register API structure */
typedef struct
{  /* Multi-Channel RAM Controller */
  __IO  uint32_t                       MCRAMC_CTRLA;       /* Offset: 0x00 (R/W  32) Control Enable A Register */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       MCRAMC_INTENCLR;    /* Offset: 0x08 (R/W  32) Interrupt Enable Clear Register */
  __IO  uint32_t                       MCRAMC_INTENSET;    /* Offset: 0x0C (R/W  32) Interrupt Enable Set Register */
  __IO  uint32_t                       MCRAMC_INTSTA;      /* Offset: 0x10 (R/W  32) Interrupt Status Register */
  __IO  uint32_t                       MCRAMC_FLTCTRL;     /* Offset: 0x14 (R/W  32) Fault Injection Control Register */
  __IO  uint32_t                       MCRAMC_FLTPTR;      /* Offset: 0x18 (R/W  32) Fault Injection Pointer Register */
  __IO  uint32_t                       MCRAMC_FLTADR;      /* Offset: 0x1C (R/W  32) Fault Injection Address Register */
  __I   uint32_t                       MCRAMC_ERRCADR;     /* Offset: 0x20 (R/   32) Error Capture Address Register */
  __I   uint32_t                       MCRAMC_ERRCPAR;     /* Offset: 0x24 (R/   32) Error Capture Parity Register */
  __I   uint32_t                       MCRAMC_ERRCSYN;     /* Offset: 0x28 (R/   32) Error Capture Syndrome Register */
  __I   uint8_t                        Reserved2[0xD0];
  __I   uint32_t                       MCRAMC_VERSION;     /* Offset: 0xFC (R/   32) Version Register */
} mcramc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMGC00_MCRAMC_COMPONENT_H_ */
