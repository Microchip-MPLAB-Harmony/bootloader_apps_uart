/*
 * Component description for FCW
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
#ifndef _PIC32CMGC00_FCW_COMPONENT_H_
#define _PIC32CMGC00_FCW_COMPONENT_H_

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR FCW                       */
/* ************************************************************************** */

/* -------- FCW_CTRLA : (FCW Offset: 0x00) (R/W 32) Control A REGISTER -------- */
#define FCW_CTRLA_RESETVALUE                  _UINT32_(0x00)                                       /*  (FCW_CTRLA) Control A REGISTER  Reset Value */

#define FCW_CTRLA_PRIV_Pos                    _UINT32_(2)                                          /* (FCW_CTRLA) Privileged Access Only Position */
#define FCW_CTRLA_PRIV_Msk                    (_UINT32_(0x1) << FCW_CTRLA_PRIV_Pos)                /* (FCW_CTRLA) Privileged Access Only Mask */
#define FCW_CTRLA_PRIV(value)                 (FCW_CTRLA_PRIV_Msk & (_UINT32_(value) << FCW_CTRLA_PRIV_Pos)) /* Assignment of value for PRIV in the FCW_CTRLA register */
#define   FCW_CTRLA_PRIV_DISABLE_Val          _UINT32_(0x0)                                        /* (FCW_CTRLA) Macro register accessible in privileged and unprivileged accesses.  */
#define   FCW_CTRLA_PRIV_ENABLE_Val           _UINT32_(0x1)                                        /* (FCW_CTRLA) Macro registers only accessible in privileged accesses  */
#define FCW_CTRLA_PRIV_DISABLE                (FCW_CTRLA_PRIV_DISABLE_Val << FCW_CTRLA_PRIV_Pos)   /* (FCW_CTRLA) Macro register accessible in privileged and unprivileged accesses. Position */
#define FCW_CTRLA_PRIV_ENABLE                 (FCW_CTRLA_PRIV_ENABLE_Val << FCW_CTRLA_PRIV_Pos)    /* (FCW_CTRLA) Macro registers only accessible in privileged accesses Position */
#define FCW_CTRLA_Msk                         _UINT32_(0x00000004)                                 /* (FCW_CTRLA) Register Mask  */


/* -------- FCW_CTRLOP : (FCW Offset: 0x04) (R/W 32) Control Operation REGISTER -------- */
#define FCW_CTRLOP_RESETVALUE                 _UINT32_(0x00)                                       /*  (FCW_CTRLOP) Control Operation REGISTER  Reset Value */

#define FCW_CTRLOP_NVMOP_Pos                  _UINT32_(0)                                          /* (FCW_CTRLOP) NVM Operation Position */
#define FCW_CTRLOP_NVMOP_Msk                  (_UINT32_(0xF) << FCW_CTRLOP_NVMOP_Pos)              /* (FCW_CTRLOP) NVM Operation Mask */
#define FCW_CTRLOP_NVMOP(value)               (FCW_CTRLOP_NVMOP_Msk & (_UINT32_(value) << FCW_CTRLOP_NVMOP_Pos)) /* Assignment of value for NVMOP in the FCW_CTRLOP register */
#define   FCW_CTRLOP_NVMOP_NOP_Val            _UINT32_(0x0)                                        /* (FCW_CTRLOP) No Operation  */
#define   FCW_CTRLOP_NVMOP_SINGLEWRITE_Val    _UINT32_(0x1)                                        /* (FCW_CTRLOP) Single (Word) Program Operation: Programs word selected by ADDR  */
#define   FCW_CTRLOP_NVMOP_QUADWRITE_Val      _UINT32_(0x2)                                        /* (FCW_CTRLOP) Quad (Word) Program Operation: Programs flash word selected by ADDR  */
#define   FCW_CTRLOP_NVMOP_ROWWRITE_Val       _UINT32_(0x3)                                        /* (FCW_CTRLOP) Row Write Operation: Programs row selected by ADDR  */
#define   FCW_CTRLOP_NVMOP_PAGEERASE_Val      _UINT32_(0x4)                                        /* (FCW_CTRLOP) Page Erase Operation: Erases page selected by ADDR  */
#define   FCW_CTRLOP_NVMOP_LPFMERASE_Val      _UINT32_(0x5)                                        /* (FCW_CTRLOP) Lower PFM Erase Operation: (RSVD NVMOP for Single Panel Devices)  */
#define   FCW_CTRLOP_NVMOP_UPFMERASE_Val      _UINT32_(0x6)                                        /* (FCW_CTRLOP) Upper PFM Erase Operation: (RSVD NVMOP for Single Panel Devices)  */
#define   FCW_CTRLOP_NVMOP_PFMERASE_Val       _UINT32_(0x7)                                        /* (FCW_CTRLOP) PFM Erase Operation: Upper &amp; Lower PFM Erase  */
#define   FCW_CTRLOP_NVMOP_CE_Val             _UINT32_(0xE)                                        /* (FCW_CTRLOP) Chip Erase Operation: Erases PFM+SRF, BFM, CFM (except for CalOTP, Test, VSS pages if HSM is Present, UserOTP, &amp; ROMCFG).  */
#define FCW_CTRLOP_NVMOP_NOP                  (FCW_CTRLOP_NVMOP_NOP_Val << FCW_CTRLOP_NVMOP_Pos)   /* (FCW_CTRLOP) No Operation Position */
#define FCW_CTRLOP_NVMOP_SINGLEWRITE          (FCW_CTRLOP_NVMOP_SINGLEWRITE_Val << FCW_CTRLOP_NVMOP_Pos) /* (FCW_CTRLOP) Single (Word) Program Operation: Programs word selected by ADDR Position */
#define FCW_CTRLOP_NVMOP_QUADWRITE            (FCW_CTRLOP_NVMOP_QUADWRITE_Val << FCW_CTRLOP_NVMOP_Pos) /* (FCW_CTRLOP) Quad (Word) Program Operation: Programs flash word selected by ADDR Position */
#define FCW_CTRLOP_NVMOP_ROWWRITE             (FCW_CTRLOP_NVMOP_ROWWRITE_Val << FCW_CTRLOP_NVMOP_Pos) /* (FCW_CTRLOP) Row Write Operation: Programs row selected by ADDR Position */
#define FCW_CTRLOP_NVMOP_PAGEERASE            (FCW_CTRLOP_NVMOP_PAGEERASE_Val << FCW_CTRLOP_NVMOP_Pos) /* (FCW_CTRLOP) Page Erase Operation: Erases page selected by ADDR Position */
#define FCW_CTRLOP_NVMOP_LPFMERASE            (FCW_CTRLOP_NVMOP_LPFMERASE_Val << FCW_CTRLOP_NVMOP_Pos) /* (FCW_CTRLOP) Lower PFM Erase Operation: (RSVD NVMOP for Single Panel Devices) Position */
#define FCW_CTRLOP_NVMOP_UPFMERASE            (FCW_CTRLOP_NVMOP_UPFMERASE_Val << FCW_CTRLOP_NVMOP_Pos) /* (FCW_CTRLOP) Upper PFM Erase Operation: (RSVD NVMOP for Single Panel Devices) Position */
#define FCW_CTRLOP_NVMOP_PFMERASE             (FCW_CTRLOP_NVMOP_PFMERASE_Val << FCW_CTRLOP_NVMOP_Pos) /* (FCW_CTRLOP) PFM Erase Operation: Upper &amp; Lower PFM Erase Position */
#define FCW_CTRLOP_NVMOP_CE                   (FCW_CTRLOP_NVMOP_CE_Val << FCW_CTRLOP_NVMOP_Pos)    /* (FCW_CTRLOP) Chip Erase Operation: Erases PFM+SRF, BFM, CFM (except for CalOTP, Test, VSS pages if HSM is Present, UserOTP, &amp; ROMCFG). Position */
#define FCW_CTRLOP_PREPG_Pos                  _UINT32_(7)                                          /* (FCW_CTRLOP) NVM Pre-Program Configuration Bit Position */
#define FCW_CTRLOP_PREPG_Msk                  (_UINT32_(0x1) << FCW_CTRLOP_PREPG_Pos)              /* (FCW_CTRLOP) NVM Pre-Program Configuration Bit Mask */
#define FCW_CTRLOP_PREPG(value)               (FCW_CTRLOP_PREPG_Msk & (_UINT32_(value) << FCW_CTRLOP_PREPG_Pos)) /* Assignment of value for PREPG in the FCW_CTRLOP register */
#define   FCW_CTRLOP_PREPG_DISABLE_Val        _UINT32_(0x0)                                        /* (FCW_CTRLOP) Program Operations exclude Pre-Program step  */
#define   FCW_CTRLOP_PREPG_ENABLE_Val         _UINT32_(0x1)                                        /* (FCW_CTRLOP) Program Operations include Pre-Program step  */
#define FCW_CTRLOP_PREPG_DISABLE              (FCW_CTRLOP_PREPG_DISABLE_Val << FCW_CTRLOP_PREPG_Pos) /* (FCW_CTRLOP) Program Operations exclude Pre-Program step Position */
#define FCW_CTRLOP_PREPG_ENABLE               (FCW_CTRLOP_PREPG_ENABLE_Val << FCW_CTRLOP_PREPG_Pos) /* (FCW_CTRLOP) Program Operations include Pre-Program step Position */
#define FCW_CTRLOP_Msk                        _UINT32_(0x0000008F)                                 /* (FCW_CTRLOP) Register Mask  */


/* -------- FCW_MUTEX : (FCW Offset: 0x08) (R/W 32) MUTEX REGISTER -------- */
#define FCW_MUTEX_RESETVALUE                  _UINT32_(0x00)                                       /*  (FCW_MUTEX) MUTEX REGISTER  Reset Value */

#define FCW_MUTEX_LOCK_Pos                    _UINT32_(0)                                          /* (FCW_MUTEX) Flash Write Controller (FCW) Lock by Owner Position */
#define FCW_MUTEX_LOCK_Msk                    (_UINT32_(0x1) << FCW_MUTEX_LOCK_Pos)                /* (FCW_MUTEX) Flash Write Controller (FCW) Lock by Owner Mask */
#define FCW_MUTEX_LOCK(value)                 (FCW_MUTEX_LOCK_Msk & (_UINT32_(value) << FCW_MUTEX_LOCK_Pos)) /* Assignment of value for LOCK in the FCW_MUTEX register */
#define   FCW_MUTEX_LOCK_UNLOCK_Val           _UINT32_(0x0)                                        /* (FCW_MUTEX) FCW is not locked  */
#define   FCW_MUTEX_LOCK_LOCK_Val             _UINT32_(0x1)                                        /* (FCW_MUTEX) FCW is locked by owner  */
#define FCW_MUTEX_LOCK_UNLOCK                 (FCW_MUTEX_LOCK_UNLOCK_Val << FCW_MUTEX_LOCK_Pos)    /* (FCW_MUTEX) FCW is not locked Position */
#define FCW_MUTEX_LOCK_LOCK                   (FCW_MUTEX_LOCK_LOCK_Val << FCW_MUTEX_LOCK_Pos)      /* (FCW_MUTEX) FCW is locked by owner Position */
#define FCW_MUTEX_OWNER_Pos                   _UINT32_(1)                                          /* (FCW_MUTEX) Flash Write Controller (FCW) Owner ID Position */
#define FCW_MUTEX_OWNER_Msk                   (_UINT32_(0x3) << FCW_MUTEX_OWNER_Pos)               /* (FCW_MUTEX) Flash Write Controller (FCW) Owner ID Mask */
#define FCW_MUTEX_OWNER(value)                (FCW_MUTEX_OWNER_Msk & (_UINT32_(value) << FCW_MUTEX_OWNER_Pos)) /* Assignment of value for OWNER in the FCW_MUTEX register */
#define   FCW_MUTEX_OWNER_NONE_Val            _UINT32_(0x0)                                        /* (FCW_MUTEX) No Owner - always 0 if LOCK=0  */
#define   FCW_MUTEX_OWNER_SYSTEM_Val          _UINT32_(0x1)                                        /* (FCW_MUTEX) The System owns the FCW  */
#define FCW_MUTEX_OWNER_NONE                  (FCW_MUTEX_OWNER_NONE_Val << FCW_MUTEX_OWNER_Pos)    /* (FCW_MUTEX) No Owner - always 0 if LOCK=0 Position */
#define FCW_MUTEX_OWNER_SYSTEM                (FCW_MUTEX_OWNER_SYSTEM_Val << FCW_MUTEX_OWNER_Pos)  /* (FCW_MUTEX) The System owns the FCW Position */
#define FCW_MUTEX_Msk                         _UINT32_(0x00000007)                                 /* (FCW_MUTEX) Register Mask  */


/* -------- FCW_INTENCLR : (FCW Offset: 0x0C) (R/W 32) Interrupt Enable Clear REGISTER -------- */
#define FCW_INTENCLR_RESETVALUE               _UINT32_(0x00)                                       /*  (FCW_INTENCLR) Interrupt Enable Clear REGISTER  Reset Value */

#define FCW_INTENCLR_DONE_Pos                 _UINT32_(0)                                          /* (FCW_INTENCLR) NVM Operation Done Interrupt Enable Position */
#define FCW_INTENCLR_DONE_Msk                 (_UINT32_(0x1) << FCW_INTENCLR_DONE_Pos)             /* (FCW_INTENCLR) NVM Operation Done Interrupt Enable Mask */
#define FCW_INTENCLR_DONE(value)              (FCW_INTENCLR_DONE_Msk & (_UINT32_(value) << FCW_INTENCLR_DONE_Pos)) /* Assignment of value for DONE in the FCW_INTENCLR register */
#define   FCW_INTENCLR_DONE_0_Val             _UINT32_(0x0)                                        /* (FCW_INTENCLR) Interrupt Disabled  */
#define   FCW_INTENCLR_DONE_1_Val             _UINT32_(0x1)                                        /* (FCW_INTENCLR) Interrupt Enabled  */
#define FCW_INTENCLR_DONE_0                   (FCW_INTENCLR_DONE_0_Val << FCW_INTENCLR_DONE_Pos)   /* (FCW_INTENCLR) Interrupt Disabled Position */
#define FCW_INTENCLR_DONE_1                   (FCW_INTENCLR_DONE_1_Val << FCW_INTENCLR_DONE_Pos)   /* (FCW_INTENCLR) Interrupt Enabled Position */
#define FCW_INTENCLR_KEYERR_Pos               _UINT32_(1)                                          /* (FCW_INTENCLR) Key Error Interrupt Enable Position */
#define FCW_INTENCLR_KEYERR_Msk               (_UINT32_(0x1) << FCW_INTENCLR_KEYERR_Pos)           /* (FCW_INTENCLR) Key Error Interrupt Enable Mask */
#define FCW_INTENCLR_KEYERR(value)            (FCW_INTENCLR_KEYERR_Msk & (_UINT32_(value) << FCW_INTENCLR_KEYERR_Pos)) /* Assignment of value for KEYERR in the FCW_INTENCLR register */
#define   FCW_INTENCLR_KEYERR_0_Val           _UINT32_(0x0)                                        /* (FCW_INTENCLR) Interrupt Disabled  */
#define   FCW_INTENCLR_KEYERR_1_Val           _UINT32_(0x1)                                        /* (FCW_INTENCLR) Interrupt Enabled  */
#define FCW_INTENCLR_KEYERR_0                 (FCW_INTENCLR_KEYERR_0_Val << FCW_INTENCLR_KEYERR_Pos) /* (FCW_INTENCLR) Interrupt Disabled Position */
#define FCW_INTENCLR_KEYERR_1                 (FCW_INTENCLR_KEYERR_1_Val << FCW_INTENCLR_KEYERR_Pos) /* (FCW_INTENCLR) Interrupt Enabled Position */
#define FCW_INTENCLR_CFGERR_Pos               _UINT32_(2)                                          /* (FCW_INTENCLR) Configuration Error Interrupt Enable Position */
#define FCW_INTENCLR_CFGERR_Msk               (_UINT32_(0x1) << FCW_INTENCLR_CFGERR_Pos)           /* (FCW_INTENCLR) Configuration Error Interrupt Enable Mask */
#define FCW_INTENCLR_CFGERR(value)            (FCW_INTENCLR_CFGERR_Msk & (_UINT32_(value) << FCW_INTENCLR_CFGERR_Pos)) /* Assignment of value for CFGERR in the FCW_INTENCLR register */
#define   FCW_INTENCLR_CFGERR_0_Val           _UINT32_(0x0)                                        /* (FCW_INTENCLR) Interrupt Disabled  */
#define   FCW_INTENCLR_CFGERR_1_Val           _UINT32_(0x1)                                        /* (FCW_INTENCLR) Interrupt Enabled  */
#define FCW_INTENCLR_CFGERR_0                 (FCW_INTENCLR_CFGERR_0_Val << FCW_INTENCLR_CFGERR_Pos) /* (FCW_INTENCLR) Interrupt Disabled Position */
#define FCW_INTENCLR_CFGERR_1                 (FCW_INTENCLR_CFGERR_1_Val << FCW_INTENCLR_CFGERR_Pos) /* (FCW_INTENCLR) Interrupt Enabled Position */
#define FCW_INTENCLR_FIFOERR_Pos              _UINT32_(3)                                          /* (FCW_INTENCLR) FIFO Underrun during Row Write Interrupt Enable Position */
#define FCW_INTENCLR_FIFOERR_Msk              (_UINT32_(0x1) << FCW_INTENCLR_FIFOERR_Pos)          /* (FCW_INTENCLR) FIFO Underrun during Row Write Interrupt Enable Mask */
#define FCW_INTENCLR_FIFOERR(value)           (FCW_INTENCLR_FIFOERR_Msk & (_UINT32_(value) << FCW_INTENCLR_FIFOERR_Pos)) /* Assignment of value for FIFOERR in the FCW_INTENCLR register */
#define   FCW_INTENCLR_FIFOERR_0_Val          _UINT32_(0x0)                                        /* (FCW_INTENCLR) Interrupt Disabled  */
#define   FCW_INTENCLR_FIFOERR_1_Val          _UINT32_(0x1)                                        /* (FCW_INTENCLR) Interrupt Enabled  */
#define FCW_INTENCLR_FIFOERR_0                (FCW_INTENCLR_FIFOERR_0_Val << FCW_INTENCLR_FIFOERR_Pos) /* (FCW_INTENCLR) Interrupt Disabled Position */
#define FCW_INTENCLR_FIFOERR_1                (FCW_INTENCLR_FIFOERR_1_Val << FCW_INTENCLR_FIFOERR_Pos) /* (FCW_INTENCLR) Interrupt Enabled Position */
#define FCW_INTENCLR_BUSERR_Pos               _UINT32_(4)                                          /* (FCW_INTENCLR) AHB Bus Error during Row Write Interrupt Enable Position */
#define FCW_INTENCLR_BUSERR_Msk               (_UINT32_(0x1) << FCW_INTENCLR_BUSERR_Pos)           /* (FCW_INTENCLR) AHB Bus Error during Row Write Interrupt Enable Mask */
#define FCW_INTENCLR_BUSERR(value)            (FCW_INTENCLR_BUSERR_Msk & (_UINT32_(value) << FCW_INTENCLR_BUSERR_Pos)) /* Assignment of value for BUSERR in the FCW_INTENCLR register */
#define   FCW_INTENCLR_BUSERR_0_Val           _UINT32_(0x0)                                        /* (FCW_INTENCLR) Interrupt Disabled  */
#define   FCW_INTENCLR_BUSERR_1_Val           _UINT32_(0x1)                                        /* (FCW_INTENCLR) Interrupt Enabled  */
#define FCW_INTENCLR_BUSERR_0                 (FCW_INTENCLR_BUSERR_0_Val << FCW_INTENCLR_BUSERR_Pos) /* (FCW_INTENCLR) Interrupt Disabled Position */
#define FCW_INTENCLR_BUSERR_1                 (FCW_INTENCLR_BUSERR_1_Val << FCW_INTENCLR_BUSERR_Pos) /* (FCW_INTENCLR) Interrupt Enabled Position */
#define FCW_INTENCLR_WPERR_Pos                _UINT32_(5)                                          /* (FCW_INTENCLR) Write Protection Error Interrupt Enable Position */
#define FCW_INTENCLR_WPERR_Msk                (_UINT32_(0x1) << FCW_INTENCLR_WPERR_Pos)            /* (FCW_INTENCLR) Write Protection Error Interrupt Enable Mask */
#define FCW_INTENCLR_WPERR(value)             (FCW_INTENCLR_WPERR_Msk & (_UINT32_(value) << FCW_INTENCLR_WPERR_Pos)) /* Assignment of value for WPERR in the FCW_INTENCLR register */
#define   FCW_INTENCLR_WPERR_0_Val            _UINT32_(0x0)                                        /* (FCW_INTENCLR) Interrupt Disabled  */
#define   FCW_INTENCLR_WPERR_1_Val            _UINT32_(0x1)                                        /* (FCW_INTENCLR) Interrupt Enabled  */
#define FCW_INTENCLR_WPERR_0                  (FCW_INTENCLR_WPERR_0_Val << FCW_INTENCLR_WPERR_Pos) /* (FCW_INTENCLR) Interrupt Disabled Position */
#define FCW_INTENCLR_WPERR_1                  (FCW_INTENCLR_WPERR_1_Val << FCW_INTENCLR_WPERR_Pos) /* (FCW_INTENCLR) Interrupt Enabled Position */
#define FCW_INTENCLR_OPERR_Pos                _UINT32_(6)                                          /* (FCW_INTENCLR) NVMOP Error Interrupt Enable Position */
#define FCW_INTENCLR_OPERR_Msk                (_UINT32_(0x1) << FCW_INTENCLR_OPERR_Pos)            /* (FCW_INTENCLR) NVMOP Error Interrupt Enable Mask */
#define FCW_INTENCLR_OPERR(value)             (FCW_INTENCLR_OPERR_Msk & (_UINT32_(value) << FCW_INTENCLR_OPERR_Pos)) /* Assignment of value for OPERR in the FCW_INTENCLR register */
#define   FCW_INTENCLR_OPERR_0_Val            _UINT32_(0x0)                                        /* (FCW_INTENCLR) Interrupt Disabled  */
#define   FCW_INTENCLR_OPERR_1_Val            _UINT32_(0x1)                                        /* (FCW_INTENCLR) Interrupt Enabled  */
#define FCW_INTENCLR_OPERR_0                  (FCW_INTENCLR_OPERR_0_Val << FCW_INTENCLR_OPERR_Pos) /* (FCW_INTENCLR) Interrupt Disabled Position */
#define FCW_INTENCLR_OPERR_1                  (FCW_INTENCLR_OPERR_1_Val << FCW_INTENCLR_OPERR_Pos) /* (FCW_INTENCLR) Interrupt Enabled Position */
#define FCW_INTENCLR_HTDPGM_Pos               _UINT32_(8)                                          /* (FCW_INTENCLR) High Temperature Detect Error Interrupt Enable Position */
#define FCW_INTENCLR_HTDPGM_Msk               (_UINT32_(0x1) << FCW_INTENCLR_HTDPGM_Pos)           /* (FCW_INTENCLR) High Temperature Detect Error Interrupt Enable Mask */
#define FCW_INTENCLR_HTDPGM(value)            (FCW_INTENCLR_HTDPGM_Msk & (_UINT32_(value) << FCW_INTENCLR_HTDPGM_Pos)) /* Assignment of value for HTDPGM in the FCW_INTENCLR register */
#define   FCW_INTENCLR_HTDPGM_0_Val           _UINT32_(0x0)                                        /* (FCW_INTENCLR) Interrupt Disabled  */
#define   FCW_INTENCLR_HTDPGM_1_Val           _UINT32_(0x1)                                        /* (FCW_INTENCLR) Interrupt Enabled  */
#define FCW_INTENCLR_HTDPGM_0                 (FCW_INTENCLR_HTDPGM_0_Val << FCW_INTENCLR_HTDPGM_Pos) /* (FCW_INTENCLR) Interrupt Disabled Position */
#define FCW_INTENCLR_HTDPGM_1                 (FCW_INTENCLR_HTDPGM_1_Val << FCW_INTENCLR_HTDPGM_Pos) /* (FCW_INTENCLR) Interrupt Enabled Position */
#define FCW_INTENCLR_RSTERR_Pos               _UINT32_(12)                                         /* (FCW_INTENCLR) Reset or Brown Out Detect Error Interrupt Enable Position */
#define FCW_INTENCLR_RSTERR_Msk               (_UINT32_(0x1) << FCW_INTENCLR_RSTERR_Pos)           /* (FCW_INTENCLR) Reset or Brown Out Detect Error Interrupt Enable Mask */
#define FCW_INTENCLR_RSTERR(value)            (FCW_INTENCLR_RSTERR_Msk & (_UINT32_(value) << FCW_INTENCLR_RSTERR_Pos)) /* Assignment of value for RSTERR in the FCW_INTENCLR register */
#define   FCW_INTENCLR_RSTERR_0_Val           _UINT32_(0x0)                                        /* (FCW_INTENCLR) Interrupt Disabled  */
#define   FCW_INTENCLR_RSTERR_1_Val           _UINT32_(0x1)                                        /* (FCW_INTENCLR) Interrupt Enabled  */
#define FCW_INTENCLR_RSTERR_0                 (FCW_INTENCLR_RSTERR_0_Val << FCW_INTENCLR_RSTERR_Pos) /* (FCW_INTENCLR) Interrupt Disabled Position */
#define FCW_INTENCLR_RSTERR_1                 (FCW_INTENCLR_RSTERR_1_Val << FCW_INTENCLR_RSTERR_Pos) /* (FCW_INTENCLR) Interrupt Enabled Position */
#define FCW_INTENCLR_WRERR_Pos                _UINT32_(13)                                         /* (FCW_INTENCLR) Write Error Interrupt Enable Position */
#define FCW_INTENCLR_WRERR_Msk                (_UINT32_(0x1) << FCW_INTENCLR_WRERR_Pos)            /* (FCW_INTENCLR) Write Error Interrupt Enable Mask */
#define FCW_INTENCLR_WRERR(value)             (FCW_INTENCLR_WRERR_Msk & (_UINT32_(value) << FCW_INTENCLR_WRERR_Pos)) /* Assignment of value for WRERR in the FCW_INTENCLR register */
#define   FCW_INTENCLR_WRERR_0_Val            _UINT32_(0x0)                                        /* (FCW_INTENCLR) Interrupt Disabled  */
#define   FCW_INTENCLR_WRERR_1_Val            _UINT32_(0x1)                                        /* (FCW_INTENCLR) Interrupt Enabled  */
#define FCW_INTENCLR_WRERR_0                  (FCW_INTENCLR_WRERR_0_Val << FCW_INTENCLR_WRERR_Pos) /* (FCW_INTENCLR) Interrupt Disabled Position */
#define FCW_INTENCLR_WRERR_1                  (FCW_INTENCLR_WRERR_1_Val << FCW_INTENCLR_WRERR_Pos) /* (FCW_INTENCLR) Interrupt Enabled Position */
#define FCW_INTENCLR_Msk                      _UINT32_(0x0000317F)                                 /* (FCW_INTENCLR) Register Mask  */


/* -------- FCW_INTENSET : (FCW Offset: 0x10) (R/W 32) Interrupt Enable Set REGISTER -------- */
#define FCW_INTENSET_RESETVALUE               _UINT32_(0x00)                                       /*  (FCW_INTENSET) Interrupt Enable Set REGISTER  Reset Value */

#define FCW_INTENSET_DONE_Pos                 _UINT32_(0)                                          /* (FCW_INTENSET) NVM Operation Done Interrupt Set Enable Position */
#define FCW_INTENSET_DONE_Msk                 (_UINT32_(0x1) << FCW_INTENSET_DONE_Pos)             /* (FCW_INTENSET) NVM Operation Done Interrupt Set Enable Mask */
#define FCW_INTENSET_DONE(value)              (FCW_INTENSET_DONE_Msk & (_UINT32_(value) << FCW_INTENSET_DONE_Pos)) /* Assignment of value for DONE in the FCW_INTENSET register */
#define   FCW_INTENSET_DONE_0_Val             _UINT32_(0x0)                                        /* (FCW_INTENSET) Interrupt Disabled  */
#define   FCW_INTENSET_DONE_1_Val             _UINT32_(0x1)                                        /* (FCW_INTENSET) Interrupt Enabled  */
#define FCW_INTENSET_DONE_0                   (FCW_INTENSET_DONE_0_Val << FCW_INTENSET_DONE_Pos)   /* (FCW_INTENSET) Interrupt Disabled Position */
#define FCW_INTENSET_DONE_1                   (FCW_INTENSET_DONE_1_Val << FCW_INTENSET_DONE_Pos)   /* (FCW_INTENSET) Interrupt Enabled Position */
#define FCW_INTENSET_KEYERR_Pos               _UINT32_(1)                                          /* (FCW_INTENSET) Key Error Interrupt Set Enable Position */
#define FCW_INTENSET_KEYERR_Msk               (_UINT32_(0x1) << FCW_INTENSET_KEYERR_Pos)           /* (FCW_INTENSET) Key Error Interrupt Set Enable Mask */
#define FCW_INTENSET_KEYERR(value)            (FCW_INTENSET_KEYERR_Msk & (_UINT32_(value) << FCW_INTENSET_KEYERR_Pos)) /* Assignment of value for KEYERR in the FCW_INTENSET register */
#define   FCW_INTENSET_KEYERR_0_Val           _UINT32_(0x0)                                        /* (FCW_INTENSET) Interrupt Disabled  */
#define   FCW_INTENSET_KEYERR_1_Val           _UINT32_(0x1)                                        /* (FCW_INTENSET) Interrupt Enabled  */
#define FCW_INTENSET_KEYERR_0                 (FCW_INTENSET_KEYERR_0_Val << FCW_INTENSET_KEYERR_Pos) /* (FCW_INTENSET) Interrupt Disabled Position */
#define FCW_INTENSET_KEYERR_1                 (FCW_INTENSET_KEYERR_1_Val << FCW_INTENSET_KEYERR_Pos) /* (FCW_INTENSET) Interrupt Enabled Position */
#define FCW_INTENSET_CFGERR_Pos               _UINT32_(2)                                          /* (FCW_INTENSET) Configuration Error Interrupt Set Enable Position */
#define FCW_INTENSET_CFGERR_Msk               (_UINT32_(0x1) << FCW_INTENSET_CFGERR_Pos)           /* (FCW_INTENSET) Configuration Error Interrupt Set Enable Mask */
#define FCW_INTENSET_CFGERR(value)            (FCW_INTENSET_CFGERR_Msk & (_UINT32_(value) << FCW_INTENSET_CFGERR_Pos)) /* Assignment of value for CFGERR in the FCW_INTENSET register */
#define   FCW_INTENSET_CFGERR_0_Val           _UINT32_(0x0)                                        /* (FCW_INTENSET) Interrupt Disabled  */
#define   FCW_INTENSET_CFGERR_1_Val           _UINT32_(0x1)                                        /* (FCW_INTENSET) Interrupt Enabled  */
#define FCW_INTENSET_CFGERR_0                 (FCW_INTENSET_CFGERR_0_Val << FCW_INTENSET_CFGERR_Pos) /* (FCW_INTENSET) Interrupt Disabled Position */
#define FCW_INTENSET_CFGERR_1                 (FCW_INTENSET_CFGERR_1_Val << FCW_INTENSET_CFGERR_Pos) /* (FCW_INTENSET) Interrupt Enabled Position */
#define FCW_INTENSET_FIFOERR_Pos              _UINT32_(3)                                          /* (FCW_INTENSET) FIFO Underrun during Row Write Interrupt Set Enable Position */
#define FCW_INTENSET_FIFOERR_Msk              (_UINT32_(0x1) << FCW_INTENSET_FIFOERR_Pos)          /* (FCW_INTENSET) FIFO Underrun during Row Write Interrupt Set Enable Mask */
#define FCW_INTENSET_FIFOERR(value)           (FCW_INTENSET_FIFOERR_Msk & (_UINT32_(value) << FCW_INTENSET_FIFOERR_Pos)) /* Assignment of value for FIFOERR in the FCW_INTENSET register */
#define   FCW_INTENSET_FIFOERR_0_Val          _UINT32_(0x0)                                        /* (FCW_INTENSET) Interrupt Disabled  */
#define   FCW_INTENSET_FIFOERR_1_Val          _UINT32_(0x1)                                        /* (FCW_INTENSET) Interrupt Enabled  */
#define FCW_INTENSET_FIFOERR_0                (FCW_INTENSET_FIFOERR_0_Val << FCW_INTENSET_FIFOERR_Pos) /* (FCW_INTENSET) Interrupt Disabled Position */
#define FCW_INTENSET_FIFOERR_1                (FCW_INTENSET_FIFOERR_1_Val << FCW_INTENSET_FIFOERR_Pos) /* (FCW_INTENSET) Interrupt Enabled Position */
#define FCW_INTENSET_BUSERR_Pos               _UINT32_(4)                                          /* (FCW_INTENSET) AHB Bus Error during Row Write Interrupt Enable Position */
#define FCW_INTENSET_BUSERR_Msk               (_UINT32_(0x1) << FCW_INTENSET_BUSERR_Pos)           /* (FCW_INTENSET) AHB Bus Error during Row Write Interrupt Enable Mask */
#define FCW_INTENSET_BUSERR(value)            (FCW_INTENSET_BUSERR_Msk & (_UINT32_(value) << FCW_INTENSET_BUSERR_Pos)) /* Assignment of value for BUSERR in the FCW_INTENSET register */
#define   FCW_INTENSET_BUSERR_0_Val           _UINT32_(0x0)                                        /* (FCW_INTENSET) Interrupt Disabled  */
#define   FCW_INTENSET_BUSERR_1_Val           _UINT32_(0x1)                                        /* (FCW_INTENSET) Interrupt Enabled  */
#define FCW_INTENSET_BUSERR_0                 (FCW_INTENSET_BUSERR_0_Val << FCW_INTENSET_BUSERR_Pos) /* (FCW_INTENSET) Interrupt Disabled Position */
#define FCW_INTENSET_BUSERR_1                 (FCW_INTENSET_BUSERR_1_Val << FCW_INTENSET_BUSERR_Pos) /* (FCW_INTENSET) Interrupt Enabled Position */
#define FCW_INTENSET_WPERR_Pos                _UINT32_(5)                                          /* (FCW_INTENSET) Write Protection Error Interrupt Enable Position */
#define FCW_INTENSET_WPERR_Msk                (_UINT32_(0x1) << FCW_INTENSET_WPERR_Pos)            /* (FCW_INTENSET) Write Protection Error Interrupt Enable Mask */
#define FCW_INTENSET_WPERR(value)             (FCW_INTENSET_WPERR_Msk & (_UINT32_(value) << FCW_INTENSET_WPERR_Pos)) /* Assignment of value for WPERR in the FCW_INTENSET register */
#define   FCW_INTENSET_WPERR_0_Val            _UINT32_(0x0)                                        /* (FCW_INTENSET) Interrupt Disabled  */
#define   FCW_INTENSET_WPERR_1_Val            _UINT32_(0x1)                                        /* (FCW_INTENSET) Interrupt Enabled  */
#define FCW_INTENSET_WPERR_0                  (FCW_INTENSET_WPERR_0_Val << FCW_INTENSET_WPERR_Pos) /* (FCW_INTENSET) Interrupt Disabled Position */
#define FCW_INTENSET_WPERR_1                  (FCW_INTENSET_WPERR_1_Val << FCW_INTENSET_WPERR_Pos) /* (FCW_INTENSET) Interrupt Enabled Position */
#define FCW_INTENSET_OPERR_Pos                _UINT32_(6)                                          /* (FCW_INTENSET) NVMOP Error Interrupt Enable Position */
#define FCW_INTENSET_OPERR_Msk                (_UINT32_(0x1) << FCW_INTENSET_OPERR_Pos)            /* (FCW_INTENSET) NVMOP Error Interrupt Enable Mask */
#define FCW_INTENSET_OPERR(value)             (FCW_INTENSET_OPERR_Msk & (_UINT32_(value) << FCW_INTENSET_OPERR_Pos)) /* Assignment of value for OPERR in the FCW_INTENSET register */
#define   FCW_INTENSET_OPERR_0_Val            _UINT32_(0x0)                                        /* (FCW_INTENSET) Interrupt Disabled  */
#define   FCW_INTENSET_OPERR_1_Val            _UINT32_(0x1)                                        /* (FCW_INTENSET) Interrupt Enabled  */
#define FCW_INTENSET_OPERR_0                  (FCW_INTENSET_OPERR_0_Val << FCW_INTENSET_OPERR_Pos) /* (FCW_INTENSET) Interrupt Disabled Position */
#define FCW_INTENSET_OPERR_1                  (FCW_INTENSET_OPERR_1_Val << FCW_INTENSET_OPERR_Pos) /* (FCW_INTENSET) Interrupt Enabled Position */
#define FCW_INTENSET_HTDPGM_Pos               _UINT32_(8)                                          /* (FCW_INTENSET) High Temperature Detect Error Interrupt Enable Position */
#define FCW_INTENSET_HTDPGM_Msk               (_UINT32_(0x1) << FCW_INTENSET_HTDPGM_Pos)           /* (FCW_INTENSET) High Temperature Detect Error Interrupt Enable Mask */
#define FCW_INTENSET_HTDPGM(value)            (FCW_INTENSET_HTDPGM_Msk & (_UINT32_(value) << FCW_INTENSET_HTDPGM_Pos)) /* Assignment of value for HTDPGM in the FCW_INTENSET register */
#define   FCW_INTENSET_HTDPGM_0_Val           _UINT32_(0x0)                                        /* (FCW_INTENSET) Interrupt Disabled  */
#define   FCW_INTENSET_HTDPGM_1_Val           _UINT32_(0x1)                                        /* (FCW_INTENSET) Interrupt Enabled  */
#define FCW_INTENSET_HTDPGM_0                 (FCW_INTENSET_HTDPGM_0_Val << FCW_INTENSET_HTDPGM_Pos) /* (FCW_INTENSET) Interrupt Disabled Position */
#define FCW_INTENSET_HTDPGM_1                 (FCW_INTENSET_HTDPGM_1_Val << FCW_INTENSET_HTDPGM_Pos) /* (FCW_INTENSET) Interrupt Enabled Position */
#define FCW_INTENSET_RSTERR_Pos               _UINT32_(12)                                         /* (FCW_INTENSET) Reset or Brown Out Detect Error Interrupt Enable Position */
#define FCW_INTENSET_RSTERR_Msk               (_UINT32_(0x1) << FCW_INTENSET_RSTERR_Pos)           /* (FCW_INTENSET) Reset or Brown Out Detect Error Interrupt Enable Mask */
#define FCW_INTENSET_RSTERR(value)            (FCW_INTENSET_RSTERR_Msk & (_UINT32_(value) << FCW_INTENSET_RSTERR_Pos)) /* Assignment of value for RSTERR in the FCW_INTENSET register */
#define   FCW_INTENSET_RSTERR_0_Val           _UINT32_(0x0)                                        /* (FCW_INTENSET) Interrupt Disabled  */
#define   FCW_INTENSET_RSTERR_1_Val           _UINT32_(0x1)                                        /* (FCW_INTENSET) Interrupt Enabled  */
#define FCW_INTENSET_RSTERR_0                 (FCW_INTENSET_RSTERR_0_Val << FCW_INTENSET_RSTERR_Pos) /* (FCW_INTENSET) Interrupt Disabled Position */
#define FCW_INTENSET_RSTERR_1                 (FCW_INTENSET_RSTERR_1_Val << FCW_INTENSET_RSTERR_Pos) /* (FCW_INTENSET) Interrupt Enabled Position */
#define FCW_INTENSET_WRERR_Pos                _UINT32_(13)                                         /* (FCW_INTENSET) Write Error Interrupt Enable Position */
#define FCW_INTENSET_WRERR_Msk                (_UINT32_(0x1) << FCW_INTENSET_WRERR_Pos)            /* (FCW_INTENSET) Write Error Interrupt Enable Mask */
#define FCW_INTENSET_WRERR(value)             (FCW_INTENSET_WRERR_Msk & (_UINT32_(value) << FCW_INTENSET_WRERR_Pos)) /* Assignment of value for WRERR in the FCW_INTENSET register */
#define   FCW_INTENSET_WRERR_0_Val            _UINT32_(0x0)                                        /* (FCW_INTENSET) Interrupt Disabled  */
#define   FCW_INTENSET_WRERR_1_Val            _UINT32_(0x1)                                        /* (FCW_INTENSET) Interrupt Enabled  */
#define FCW_INTENSET_WRERR_0                  (FCW_INTENSET_WRERR_0_Val << FCW_INTENSET_WRERR_Pos) /* (FCW_INTENSET) Interrupt Disabled Position */
#define FCW_INTENSET_WRERR_1                  (FCW_INTENSET_WRERR_1_Val << FCW_INTENSET_WRERR_Pos) /* (FCW_INTENSET) Interrupt Enabled Position */
#define FCW_INTENSET_Msk                      _UINT32_(0x0000317F)                                 /* (FCW_INTENSET) Register Mask  */


/* -------- FCW_INTFLAG : (FCW Offset: 0x14) (R/W 32) Interrupt Flag REGISTER -------- */
#define FCW_INTFLAG_RESETVALUE                _UINT32_(0x00)                                       /*  (FCW_INTFLAG) Interrupt Flag REGISTER  Reset Value */

#define FCW_INTFLAG_DONE_Pos                  _UINT32_(0)                                          /* (FCW_INTFLAG) NVM Operation Done Flag Bit Position */
#define FCW_INTFLAG_DONE_Msk                  (_UINT32_(0x1) << FCW_INTFLAG_DONE_Pos)              /* (FCW_INTFLAG) NVM Operation Done Flag Bit Mask */
#define FCW_INTFLAG_DONE(value)               (FCW_INTFLAG_DONE_Msk & (_UINT32_(value) << FCW_INTFLAG_DONE_Pos)) /* Assignment of value for DONE in the FCW_INTFLAG register */
#define   FCW_INTFLAG_DONE_0_Val              _UINT32_(0x0)                                        /* (FCW_INTFLAG) NVMOP Not Done  */
#define   FCW_INTFLAG_DONE_1_Val              _UINT32_(0x1)                                        /* (FCW_INTFLAG) NVMOP Done  */
#define FCW_INTFLAG_DONE_0                    (FCW_INTFLAG_DONE_0_Val << FCW_INTFLAG_DONE_Pos)     /* (FCW_INTFLAG) NVMOP Not Done Position */
#define FCW_INTFLAG_DONE_1                    (FCW_INTFLAG_DONE_1_Val << FCW_INTFLAG_DONE_Pos)     /* (FCW_INTFLAG) NVMOP Done Position */
#define FCW_INTFLAG_KEYERR_Pos                _UINT32_(1)                                          /* (FCW_INTFLAG) Key Error Flag Bit Position */
#define FCW_INTFLAG_KEYERR_Msk                (_UINT32_(0x1) << FCW_INTFLAG_KEYERR_Pos)            /* (FCW_INTFLAG) Key Error Flag Bit Mask */
#define FCW_INTFLAG_KEYERR(value)             (FCW_INTFLAG_KEYERR_Msk & (_UINT32_(value) << FCW_INTFLAG_KEYERR_Pos)) /* Assignment of value for KEYERR in the FCW_INTFLAG register */
#define   FCW_INTFLAG_KEYERR_0_Val            _UINT32_(0x0)                                        /* (FCW_INTFLAG) No Key Error  */
#define   FCW_INTFLAG_KEYERR_1_Val            _UINT32_(0x1)                                        /* (FCW_INTFLAG) Key Error  */
#define FCW_INTFLAG_KEYERR_0                  (FCW_INTFLAG_KEYERR_0_Val << FCW_INTFLAG_KEYERR_Pos) /* (FCW_INTFLAG) No Key Error Position */
#define FCW_INTFLAG_KEYERR_1                  (FCW_INTFLAG_KEYERR_1_Val << FCW_INTFLAG_KEYERR_Pos) /* (FCW_INTFLAG) Key Error Position */
#define FCW_INTFLAG_CFGERR_Pos                _UINT32_(2)                                          /* (FCW_INTFLAG) Configuration Error Flag Bit Position */
#define FCW_INTFLAG_CFGERR_Msk                (_UINT32_(0x1) << FCW_INTFLAG_CFGERR_Pos)            /* (FCW_INTFLAG) Configuration Error Flag Bit Mask */
#define FCW_INTFLAG_CFGERR(value)             (FCW_INTFLAG_CFGERR_Msk & (_UINT32_(value) << FCW_INTFLAG_CFGERR_Pos)) /* Assignment of value for CFGERR in the FCW_INTFLAG register */
#define   FCW_INTFLAG_CFGERR_0_Val            _UINT32_(0x0)                                        /* (FCW_INTFLAG) No CFG Error  */
#define   FCW_INTFLAG_CFGERR_1_Val            _UINT32_(0x1)                                        /* (FCW_INTFLAG) CFC Error  */
#define FCW_INTFLAG_CFGERR_0                  (FCW_INTFLAG_CFGERR_0_Val << FCW_INTFLAG_CFGERR_Pos) /* (FCW_INTFLAG) No CFG Error Position */
#define FCW_INTFLAG_CFGERR_1                  (FCW_INTFLAG_CFGERR_1_Val << FCW_INTFLAG_CFGERR_Pos) /* (FCW_INTFLAG) CFC Error Position */
#define FCW_INTFLAG_FIFOERR_Pos               _UINT32_(3)                                          /* (FCW_INTFLAG) FIFO Underrun during Row Write Flag Bit Position */
#define FCW_INTFLAG_FIFOERR_Msk               (_UINT32_(0x1) << FCW_INTFLAG_FIFOERR_Pos)           /* (FCW_INTFLAG) FIFO Underrun during Row Write Flag Bit Mask */
#define FCW_INTFLAG_FIFOERR(value)            (FCW_INTFLAG_FIFOERR_Msk & (_UINT32_(value) << FCW_INTFLAG_FIFOERR_Pos)) /* Assignment of value for FIFOERR in the FCW_INTFLAG register */
#define   FCW_INTFLAG_FIFOERR_0_Val           _UINT32_(0x0)                                        /* (FCW_INTFLAG) No FIFO Error  */
#define   FCW_INTFLAG_FIFOERR_1_Val           _UINT32_(0x1)                                        /* (FCW_INTFLAG) FIFO Error  */
#define FCW_INTFLAG_FIFOERR_0                 (FCW_INTFLAG_FIFOERR_0_Val << FCW_INTFLAG_FIFOERR_Pos) /* (FCW_INTFLAG) No FIFO Error Position */
#define FCW_INTFLAG_FIFOERR_1                 (FCW_INTFLAG_FIFOERR_1_Val << FCW_INTFLAG_FIFOERR_Pos) /* (FCW_INTFLAG) FIFO Error Position */
#define FCW_INTFLAG_BUSERR_Pos                _UINT32_(4)                                          /* (FCW_INTFLAG) AHB Bus Error during Row Write Flag Bit Position */
#define FCW_INTFLAG_BUSERR_Msk                (_UINT32_(0x1) << FCW_INTFLAG_BUSERR_Pos)            /* (FCW_INTFLAG) AHB Bus Error during Row Write Flag Bit Mask */
#define FCW_INTFLAG_BUSERR(value)             (FCW_INTFLAG_BUSERR_Msk & (_UINT32_(value) << FCW_INTFLAG_BUSERR_Pos)) /* Assignment of value for BUSERR in the FCW_INTFLAG register */
#define   FCW_INTFLAG_BUSERR_0_Val            _UINT32_(0x0)                                        /* (FCW_INTFLAG) No Bus Error  */
#define   FCW_INTFLAG_BUSERR_1_Val            _UINT32_(0x1)                                        /* (FCW_INTFLAG) Bus Error  */
#define FCW_INTFLAG_BUSERR_0                  (FCW_INTFLAG_BUSERR_0_Val << FCW_INTFLAG_BUSERR_Pos) /* (FCW_INTFLAG) No Bus Error Position */
#define FCW_INTFLAG_BUSERR_1                  (FCW_INTFLAG_BUSERR_1_Val << FCW_INTFLAG_BUSERR_Pos) /* (FCW_INTFLAG) Bus Error Position */
#define FCW_INTFLAG_WPERR_Pos                 _UINT32_(5)                                          /* (FCW_INTFLAG) Write Protection Error Flag Bit Position */
#define FCW_INTFLAG_WPERR_Msk                 (_UINT32_(0x1) << FCW_INTFLAG_WPERR_Pos)             /* (FCW_INTFLAG) Write Protection Error Flag Bit Mask */
#define FCW_INTFLAG_WPERR(value)              (FCW_INTFLAG_WPERR_Msk & (_UINT32_(value) << FCW_INTFLAG_WPERR_Pos)) /* Assignment of value for WPERR in the FCW_INTFLAG register */
#define   FCW_INTFLAG_WPERR_0_Val             _UINT32_(0x0)                                        /* (FCW_INTFLAG) No Write Protection Error  */
#define   FCW_INTFLAG_WPERR_1_Val             _UINT32_(0x1)                                        /* (FCW_INTFLAG) Write Protection Error  */
#define FCW_INTFLAG_WPERR_0                   (FCW_INTFLAG_WPERR_0_Val << FCW_INTFLAG_WPERR_Pos)   /* (FCW_INTFLAG) No Write Protection Error Position */
#define FCW_INTFLAG_WPERR_1                   (FCW_INTFLAG_WPERR_1_Val << FCW_INTFLAG_WPERR_Pos)   /* (FCW_INTFLAG) Write Protection Error Position */
#define FCW_INTFLAG_OPERR_Pos                 _UINT32_(6)                                          /* (FCW_INTFLAG) NVMOP Error Flag Bit Position */
#define FCW_INTFLAG_OPERR_Msk                 (_UINT32_(0x1) << FCW_INTFLAG_OPERR_Pos)             /* (FCW_INTFLAG) NVMOP Error Flag Bit Mask */
#define FCW_INTFLAG_OPERR(value)              (FCW_INTFLAG_OPERR_Msk & (_UINT32_(value) << FCW_INTFLAG_OPERR_Pos)) /* Assignment of value for OPERR in the FCW_INTFLAG register */
#define   FCW_INTFLAG_OPERR_0_Val             _UINT32_(0x0)                                        /* (FCW_INTFLAG) No NVMOP Error  */
#define   FCW_INTFLAG_OPERR_1_Val             _UINT32_(0x1)                                        /* (FCW_INTFLAG) Selected Operation is Disabled Error  */
#define FCW_INTFLAG_OPERR_0                   (FCW_INTFLAG_OPERR_0_Val << FCW_INTFLAG_OPERR_Pos)   /* (FCW_INTFLAG) No NVMOP Error Position */
#define FCW_INTFLAG_OPERR_1                   (FCW_INTFLAG_OPERR_1_Val << FCW_INTFLAG_OPERR_Pos)   /* (FCW_INTFLAG) Selected Operation is Disabled Error Position */
#define FCW_INTFLAG_HTDPGM_Pos                _UINT32_(8)                                          /* (FCW_INTFLAG) High Temperature Detect Error Flag Bit Position */
#define FCW_INTFLAG_HTDPGM_Msk                (_UINT32_(0x1) << FCW_INTFLAG_HTDPGM_Pos)            /* (FCW_INTFLAG) High Temperature Detect Error Flag Bit Mask */
#define FCW_INTFLAG_HTDPGM(value)             (FCW_INTFLAG_HTDPGM_Msk & (_UINT32_(value) << FCW_INTFLAG_HTDPGM_Pos)) /* Assignment of value for HTDPGM in the FCW_INTFLAG register */
#define   FCW_INTFLAG_HTDPGM_0_Val            _UINT32_(0x0)                                        /* (FCW_INTFLAG) High Temp NOT Detected  */
#define   FCW_INTFLAG_HTDPGM_1_Val            _UINT32_(0x1)                                        /* (FCW_INTFLAG) High Temp Detected (possible data corruption, verify operation)  */
#define FCW_INTFLAG_HTDPGM_0                  (FCW_INTFLAG_HTDPGM_0_Val << FCW_INTFLAG_HTDPGM_Pos) /* (FCW_INTFLAG) High Temp NOT Detected Position */
#define FCW_INTFLAG_HTDPGM_1                  (FCW_INTFLAG_HTDPGM_1_Val << FCW_INTFLAG_HTDPGM_Pos) /* (FCW_INTFLAG) High Temp Detected (possible data corruption, verify operation) Position */
#define FCW_INTFLAG_RSTERR_Pos                _UINT32_(12)                                         /* (FCW_INTFLAG) Reset or Brown Out Detect Error Flag Bit Position */
#define FCW_INTFLAG_RSTERR_Msk                (_UINT32_(0x1) << FCW_INTFLAG_RSTERR_Pos)            /* (FCW_INTFLAG) Reset or Brown Out Detect Error Flag Bit Mask */
#define FCW_INTFLAG_RSTERR(value)             (FCW_INTFLAG_RSTERR_Msk & (_UINT32_(value) << FCW_INTFLAG_RSTERR_Pos)) /* Assignment of value for RSTERR in the FCW_INTFLAG register */
#define   FCW_INTFLAG_RSTERR_0_Val            _UINT32_(0x0)                                        /* (FCW_INTFLAG) No Reset and Voltage level OK during write/erase  */
#define   FCW_INTFLAG_RSTERR_1_Val            _UINT32_(0x1)                                        /* (FCW_INTFLAG) A reset or Low Voltage Detected (possible data corruption, verify data)  */
#define FCW_INTFLAG_RSTERR_0                  (FCW_INTFLAG_RSTERR_0_Val << FCW_INTFLAG_RSTERR_Pos) /* (FCW_INTFLAG) No Reset and Voltage level OK during write/erase Position */
#define FCW_INTFLAG_RSTERR_1                  (FCW_INTFLAG_RSTERR_1_Val << FCW_INTFLAG_RSTERR_Pos) /* (FCW_INTFLAG) A reset or Low Voltage Detected (possible data corruption, verify data) Position */
#define FCW_INTFLAG_WRERR_Pos                 _UINT32_(13)                                         /* (FCW_INTFLAG) Write Error Flag Bit Position */
#define FCW_INTFLAG_WRERR_Msk                 (_UINT32_(0x1) << FCW_INTFLAG_WRERR_Pos)             /* (FCW_INTFLAG) Write Error Flag Bit Mask */
#define FCW_INTFLAG_WRERR(value)              (FCW_INTFLAG_WRERR_Msk & (_UINT32_(value) << FCW_INTFLAG_WRERR_Pos)) /* Assignment of value for WRERR in the FCW_INTFLAG register */
#define   FCW_INTFLAG_WRERR_0_Val             _UINT32_(0x0)                                        /* (FCW_INTFLAG) The Write/Erase sequence completed normally  */
#define   FCW_INTFLAG_WRERR_1_Val             _UINT32_(0x1)                                        /* (FCW_INTFLAG) The Write/Erase sequence did not complete successfully  */
#define FCW_INTFLAG_WRERR_0                   (FCW_INTFLAG_WRERR_0_Val << FCW_INTFLAG_WRERR_Pos)   /* (FCW_INTFLAG) The Write/Erase sequence completed normally Position */
#define FCW_INTFLAG_WRERR_1                   (FCW_INTFLAG_WRERR_1_Val << FCW_INTFLAG_WRERR_Pos)   /* (FCW_INTFLAG) The Write/Erase sequence did not complete successfully Position */
#define FCW_INTFLAG_Msk                       _UINT32_(0x0000317F)                                 /* (FCW_INTFLAG) Register Mask  */


/* -------- FCW_INTFLAGSET : (FCW Offset: 0x18) (R/W 32) Interrupt Flag Set REGISTER -------- */
#define FCW_INTFLAGSET_RESETVALUE             _UINT32_(0x00)                                       /*  (FCW_INTFLAGSET) Interrupt Flag Set REGISTER  Reset Value */

#define FCW_INTFLAGSET_DONE_Pos               _UINT32_(0)                                          /* (FCW_INTFLAGSET) NVM Operation Done Set Flag Bit Position */
#define FCW_INTFLAGSET_DONE_Msk               (_UINT32_(0x1) << FCW_INTFLAGSET_DONE_Pos)           /* (FCW_INTFLAGSET) NVM Operation Done Set Flag Bit Mask */
#define FCW_INTFLAGSET_DONE(value)            (FCW_INTFLAGSET_DONE_Msk & (_UINT32_(value) << FCW_INTFLAGSET_DONE_Pos)) /* Assignment of value for DONE in the FCW_INTFLAGSET register */
#define   FCW_INTFLAGSET_DONE_0_Val           _UINT32_(0x0)                                        /* (FCW_INTFLAGSET) No effect  */
#define   FCW_INTFLAGSET_DONE_1_Val           _UINT32_(0x1)                                        /* (FCW_INTFLAGSET) Set Interrupt Pending  */
#define FCW_INTFLAGSET_DONE_0                 (FCW_INTFLAGSET_DONE_0_Val << FCW_INTFLAGSET_DONE_Pos) /* (FCW_INTFLAGSET) No effect Position */
#define FCW_INTFLAGSET_DONE_1                 (FCW_INTFLAGSET_DONE_1_Val << FCW_INTFLAGSET_DONE_Pos) /* (FCW_INTFLAGSET) Set Interrupt Pending Position */
#define FCW_INTFLAGSET_KEYERR_Pos             _UINT32_(1)                                          /* (FCW_INTFLAGSET) Key Error Set Flag Bit Position */
#define FCW_INTFLAGSET_KEYERR_Msk             (_UINT32_(0x1) << FCW_INTFLAGSET_KEYERR_Pos)         /* (FCW_INTFLAGSET) Key Error Set Flag Bit Mask */
#define FCW_INTFLAGSET_KEYERR(value)          (FCW_INTFLAGSET_KEYERR_Msk & (_UINT32_(value) << FCW_INTFLAGSET_KEYERR_Pos)) /* Assignment of value for KEYERR in the FCW_INTFLAGSET register */
#define   FCW_INTFLAGSET_KEYERR_0_Val         _UINT32_(0x0)                                        /* (FCW_INTFLAGSET) No effect  */
#define   FCW_INTFLAGSET_KEYERR_1_Val         _UINT32_(0x1)                                        /* (FCW_INTFLAGSET) Set Interrupt Pending  */
#define FCW_INTFLAGSET_KEYERR_0               (FCW_INTFLAGSET_KEYERR_0_Val << FCW_INTFLAGSET_KEYERR_Pos) /* (FCW_INTFLAGSET) No effect Position */
#define FCW_INTFLAGSET_KEYERR_1               (FCW_INTFLAGSET_KEYERR_1_Val << FCW_INTFLAGSET_KEYERR_Pos) /* (FCW_INTFLAGSET) Set Interrupt Pending Position */
#define FCW_INTFLAGSET_CFGERR_Pos             _UINT32_(2)                                          /* (FCW_INTFLAGSET) Configuration Error Set Flag Bit Position */
#define FCW_INTFLAGSET_CFGERR_Msk             (_UINT32_(0x1) << FCW_INTFLAGSET_CFGERR_Pos)         /* (FCW_INTFLAGSET) Configuration Error Set Flag Bit Mask */
#define FCW_INTFLAGSET_CFGERR(value)          (FCW_INTFLAGSET_CFGERR_Msk & (_UINT32_(value) << FCW_INTFLAGSET_CFGERR_Pos)) /* Assignment of value for CFGERR in the FCW_INTFLAGSET register */
#define   FCW_INTFLAGSET_CFGERR_0_Val         _UINT32_(0x0)                                        /* (FCW_INTFLAGSET) No effect  */
#define   FCW_INTFLAGSET_CFGERR_1_Val         _UINT32_(0x1)                                        /* (FCW_INTFLAGSET) Set Interrupt Pending  */
#define FCW_INTFLAGSET_CFGERR_0               (FCW_INTFLAGSET_CFGERR_0_Val << FCW_INTFLAGSET_CFGERR_Pos) /* (FCW_INTFLAGSET) No effect Position */
#define FCW_INTFLAGSET_CFGERR_1               (FCW_INTFLAGSET_CFGERR_1_Val << FCW_INTFLAGSET_CFGERR_Pos) /* (FCW_INTFLAGSET) Set Interrupt Pending Position */
#define FCW_INTFLAGSET_FIFOERR_Pos            _UINT32_(3)                                          /* (FCW_INTFLAGSET) FIFO Underrun during Row Write Set Flag Bit Position */
#define FCW_INTFLAGSET_FIFOERR_Msk            (_UINT32_(0x1) << FCW_INTFLAGSET_FIFOERR_Pos)        /* (FCW_INTFLAGSET) FIFO Underrun during Row Write Set Flag Bit Mask */
#define FCW_INTFLAGSET_FIFOERR(value)         (FCW_INTFLAGSET_FIFOERR_Msk & (_UINT32_(value) << FCW_INTFLAGSET_FIFOERR_Pos)) /* Assignment of value for FIFOERR in the FCW_INTFLAGSET register */
#define   FCW_INTFLAGSET_FIFOERR_0_Val        _UINT32_(0x0)                                        /* (FCW_INTFLAGSET) No effect  */
#define   FCW_INTFLAGSET_FIFOERR_1_Val        _UINT32_(0x1)                                        /* (FCW_INTFLAGSET) Set Interrupt Pending  */
#define FCW_INTFLAGSET_FIFOERR_0              (FCW_INTFLAGSET_FIFOERR_0_Val << FCW_INTFLAGSET_FIFOERR_Pos) /* (FCW_INTFLAGSET) No effect Position */
#define FCW_INTFLAGSET_FIFOERR_1              (FCW_INTFLAGSET_FIFOERR_1_Val << FCW_INTFLAGSET_FIFOERR_Pos) /* (FCW_INTFLAGSET) Set Interrupt Pending Position */
#define FCW_INTFLAGSET_BUSERR_Pos             _UINT32_(4)                                          /* (FCW_INTFLAGSET) AHB Bus Error during Row Write Set Flag Bit Position */
#define FCW_INTFLAGSET_BUSERR_Msk             (_UINT32_(0x1) << FCW_INTFLAGSET_BUSERR_Pos)         /* (FCW_INTFLAGSET) AHB Bus Error during Row Write Set Flag Bit Mask */
#define FCW_INTFLAGSET_BUSERR(value)          (FCW_INTFLAGSET_BUSERR_Msk & (_UINT32_(value) << FCW_INTFLAGSET_BUSERR_Pos)) /* Assignment of value for BUSERR in the FCW_INTFLAGSET register */
#define   FCW_INTFLAGSET_BUSERR_0_Val         _UINT32_(0x0)                                        /* (FCW_INTFLAGSET) No effect  */
#define   FCW_INTFLAGSET_BUSERR_1_Val         _UINT32_(0x1)                                        /* (FCW_INTFLAGSET) Set Interrupt Pending  */
#define FCW_INTFLAGSET_BUSERR_0               (FCW_INTFLAGSET_BUSERR_0_Val << FCW_INTFLAGSET_BUSERR_Pos) /* (FCW_INTFLAGSET) No effect Position */
#define FCW_INTFLAGSET_BUSERR_1               (FCW_INTFLAGSET_BUSERR_1_Val << FCW_INTFLAGSET_BUSERR_Pos) /* (FCW_INTFLAGSET) Set Interrupt Pending Position */
#define FCW_INTFLAGSET_WPERR_Pos              _UINT32_(5)                                          /* (FCW_INTFLAGSET) Write Protection Error Set Flag Bit Position */
#define FCW_INTFLAGSET_WPERR_Msk              (_UINT32_(0x1) << FCW_INTFLAGSET_WPERR_Pos)          /* (FCW_INTFLAGSET) Write Protection Error Set Flag Bit Mask */
#define FCW_INTFLAGSET_WPERR(value)           (FCW_INTFLAGSET_WPERR_Msk & (_UINT32_(value) << FCW_INTFLAGSET_WPERR_Pos)) /* Assignment of value for WPERR in the FCW_INTFLAGSET register */
#define   FCW_INTFLAGSET_WPERR_0_Val          _UINT32_(0x0)                                        /* (FCW_INTFLAGSET) No effect  */
#define   FCW_INTFLAGSET_WPERR_1_Val          _UINT32_(0x1)                                        /* (FCW_INTFLAGSET) Set Interrupt Pending  */
#define FCW_INTFLAGSET_WPERR_0                (FCW_INTFLAGSET_WPERR_0_Val << FCW_INTFLAGSET_WPERR_Pos) /* (FCW_INTFLAGSET) No effect Position */
#define FCW_INTFLAGSET_WPERR_1                (FCW_INTFLAGSET_WPERR_1_Val << FCW_INTFLAGSET_WPERR_Pos) /* (FCW_INTFLAGSET) Set Interrupt Pending Position */
#define FCW_INTFLAGSET_OPERR_Pos              _UINT32_(6)                                          /* (FCW_INTFLAGSET) NVMOP Error Set Flag Bit Position */
#define FCW_INTFLAGSET_OPERR_Msk              (_UINT32_(0x1) << FCW_INTFLAGSET_OPERR_Pos)          /* (FCW_INTFLAGSET) NVMOP Error Set Flag Bit Mask */
#define FCW_INTFLAGSET_OPERR(value)           (FCW_INTFLAGSET_OPERR_Msk & (_UINT32_(value) << FCW_INTFLAGSET_OPERR_Pos)) /* Assignment of value for OPERR in the FCW_INTFLAGSET register */
#define   FCW_INTFLAGSET_OPERR_0_Val          _UINT32_(0x0)                                        /* (FCW_INTFLAGSET) No effect  */
#define   FCW_INTFLAGSET_OPERR_1_Val          _UINT32_(0x1)                                        /* (FCW_INTFLAGSET) Set Interrupt Pending  */
#define FCW_INTFLAGSET_OPERR_0                (FCW_INTFLAGSET_OPERR_0_Val << FCW_INTFLAGSET_OPERR_Pos) /* (FCW_INTFLAGSET) No effect Position */
#define FCW_INTFLAGSET_OPERR_1                (FCW_INTFLAGSET_OPERR_1_Val << FCW_INTFLAGSET_OPERR_Pos) /* (FCW_INTFLAGSET) Set Interrupt Pending Position */
#define FCW_INTFLAGSET_HTDPGM_Pos             _UINT32_(8)                                          /* (FCW_INTFLAGSET) High Temperature Detect Error Set Flag Bit Position */
#define FCW_INTFLAGSET_HTDPGM_Msk             (_UINT32_(0x1) << FCW_INTFLAGSET_HTDPGM_Pos)         /* (FCW_INTFLAGSET) High Temperature Detect Error Set Flag Bit Mask */
#define FCW_INTFLAGSET_HTDPGM(value)          (FCW_INTFLAGSET_HTDPGM_Msk & (_UINT32_(value) << FCW_INTFLAGSET_HTDPGM_Pos)) /* Assignment of value for HTDPGM in the FCW_INTFLAGSET register */
#define   FCW_INTFLAGSET_HTDPGM_0_Val         _UINT32_(0x0)                                        /* (FCW_INTFLAGSET) No effect  */
#define   FCW_INTFLAGSET_HTDPGM_1_Val         _UINT32_(0x1)                                        /* (FCW_INTFLAGSET) Set Interrupt Pending  */
#define FCW_INTFLAGSET_HTDPGM_0               (FCW_INTFLAGSET_HTDPGM_0_Val << FCW_INTFLAGSET_HTDPGM_Pos) /* (FCW_INTFLAGSET) No effect Position */
#define FCW_INTFLAGSET_HTDPGM_1               (FCW_INTFLAGSET_HTDPGM_1_Val << FCW_INTFLAGSET_HTDPGM_Pos) /* (FCW_INTFLAGSET) Set Interrupt Pending Position */
#define FCW_INTFLAGSET_RSTERR_Pos             _UINT32_(12)                                         /* (FCW_INTFLAGSET) Reset or Brown Out Detect Error Set Flag Bit Position */
#define FCW_INTFLAGSET_RSTERR_Msk             (_UINT32_(0x1) << FCW_INTFLAGSET_RSTERR_Pos)         /* (FCW_INTFLAGSET) Reset or Brown Out Detect Error Set Flag Bit Mask */
#define FCW_INTFLAGSET_RSTERR(value)          (FCW_INTFLAGSET_RSTERR_Msk & (_UINT32_(value) << FCW_INTFLAGSET_RSTERR_Pos)) /* Assignment of value for RSTERR in the FCW_INTFLAGSET register */
#define   FCW_INTFLAGSET_RSTERR_0_Val         _UINT32_(0x0)                                        /* (FCW_INTFLAGSET) No effect  */
#define   FCW_INTFLAGSET_RSTERR_1_Val         _UINT32_(0x1)                                        /* (FCW_INTFLAGSET) Set Interrupt Pending  */
#define FCW_INTFLAGSET_RSTERR_0               (FCW_INTFLAGSET_RSTERR_0_Val << FCW_INTFLAGSET_RSTERR_Pos) /* (FCW_INTFLAGSET) No effect Position */
#define FCW_INTFLAGSET_RSTERR_1               (FCW_INTFLAGSET_RSTERR_1_Val << FCW_INTFLAGSET_RSTERR_Pos) /* (FCW_INTFLAGSET) Set Interrupt Pending Position */
#define FCW_INTFLAGSET_WRERR_Pos              _UINT32_(13)                                         /* (FCW_INTFLAGSET) Write Error Set Flag Bit Position */
#define FCW_INTFLAGSET_WRERR_Msk              (_UINT32_(0x1) << FCW_INTFLAGSET_WRERR_Pos)          /* (FCW_INTFLAGSET) Write Error Set Flag Bit Mask */
#define FCW_INTFLAGSET_WRERR(value)           (FCW_INTFLAGSET_WRERR_Msk & (_UINT32_(value) << FCW_INTFLAGSET_WRERR_Pos)) /* Assignment of value for WRERR in the FCW_INTFLAGSET register */
#define   FCW_INTFLAGSET_WRERR_0_Val          _UINT32_(0x0)                                        /* (FCW_INTFLAGSET) No effect  */
#define   FCW_INTFLAGSET_WRERR_1_Val          _UINT32_(0x1)                                        /* (FCW_INTFLAGSET) Set Interrupt Pending  */
#define FCW_INTFLAGSET_WRERR_0                (FCW_INTFLAGSET_WRERR_0_Val << FCW_INTFLAGSET_WRERR_Pos) /* (FCW_INTFLAGSET) No effect Position */
#define FCW_INTFLAGSET_WRERR_1                (FCW_INTFLAGSET_WRERR_1_Val << FCW_INTFLAGSET_WRERR_Pos) /* (FCW_INTFLAGSET) Set Interrupt Pending Position */
#define FCW_INTFLAGSET_Msk                    _UINT32_(0x0000317F)                                 /* (FCW_INTFLAGSET) Register Mask  */


/* -------- FCW_STATUS : (FCW Offset: 0x1C) ( R/ 32) Status REGISTER -------- */
#define FCW_STATUS_RESETVALUE                 _UINT32_(0x00)                                       /*  (FCW_STATUS) Status REGISTER  Reset Value */

#define FCW_STATUS_BUSY_Pos                   _UINT32_(0)                                          /* (FCW_STATUS) NVM Busy Status Position */
#define FCW_STATUS_BUSY_Msk                   (_UINT32_(0x1) << FCW_STATUS_BUSY_Pos)               /* (FCW_STATUS) NVM Busy Status Mask */
#define FCW_STATUS_BUSY(value)                (FCW_STATUS_BUSY_Msk & (_UINT32_(value) << FCW_STATUS_BUSY_Pos)) /* Assignment of value for BUSY in the FCW_STATUS register */
#define   FCW_STATUS_BUSY_IDLE_Val            _UINT32_(0x0)                                        /* (FCW_STATUS) NVM Not Busy  */
#define   FCW_STATUS_BUSY_BUSY_Val            _UINT32_(0x1)                                        /* (FCW_STATUS) NVM Busy - All SFR bits are not writable  */
#define FCW_STATUS_BUSY_IDLE                  (FCW_STATUS_BUSY_IDLE_Val << FCW_STATUS_BUSY_Pos)    /* (FCW_STATUS) NVM Not Busy Position */
#define FCW_STATUS_BUSY_BUSY                  (FCW_STATUS_BUSY_BUSY_Val << FCW_STATUS_BUSY_Pos)    /* (FCW_STATUS) NVM Busy - All SFR bits are not writable Position */
#define FCW_STATUS_HTDRDY_Pos                 _UINT32_(8)                                          /* (FCW_STATUS) High Temp Detect Ready Status Position */
#define FCW_STATUS_HTDRDY_Msk                 (_UINT32_(0x1) << FCW_STATUS_HTDRDY_Pos)             /* (FCW_STATUS) High Temp Detect Ready Status Mask */
#define FCW_STATUS_HTDRDY(value)              (FCW_STATUS_HTDRDY_Msk & (_UINT32_(value) << FCW_STATUS_HTDRDY_Pos)) /* Assignment of value for HTDRDY in the FCW_STATUS register */
#define   FCW_STATUS_HTDRDY_NOTREADY_Val      _UINT32_(0x0)                                        /* (FCW_STATUS) HTD Not Ready  */
#define   FCW_STATUS_HTDRDY_READY_Val         _UINT32_(0x1)                                        /* (FCW_STATUS) HTD Ready  */
#define FCW_STATUS_HTDRDY_NOTREADY            (FCW_STATUS_HTDRDY_NOTREADY_Val << FCW_STATUS_HTDRDY_Pos) /* (FCW_STATUS) HTD Not Ready Position */
#define FCW_STATUS_HTDRDY_READY               (FCW_STATUS_HTDRDY_READY_Val << FCW_STATUS_HTDRDY_Pos) /* (FCW_STATUS) HTD Ready Position */
#define FCW_STATUS_Msk                        _UINT32_(0x00000101)                                 /* (FCW_STATUS) Register Mask  */


/* -------- FCW_KEY : (FCW Offset: 0x20) (R/W 32) Feature Unlock Key REGISTER -------- */
#define FCW_KEY_RESETVALUE                    _UINT32_(0x00)                                       /*  (FCW_KEY) Feature Unlock Key REGISTER  Reset Value */

#define FCW_KEY_FEATURE_Pos                   _UINT32_(0)                                          /* (FCW_KEY) Feature Select Position */
#define FCW_KEY_FEATURE_Msk                   (_UINT32_(0xFF) << FCW_KEY_FEATURE_Pos)              /* (FCW_KEY) Feature Select Mask */
#define FCW_KEY_FEATURE(value)                (FCW_KEY_FEATURE_Msk & (_UINT32_(value) << FCW_KEY_FEATURE_Pos)) /* Assignment of value for FEATURE in the FCW_KEY register */
#define   FCW_KEY_FEATURE_LOCKALL_Val         _UINT32_(0x0)                                        /* (FCW_KEY) No selection, invalid selection, or invalid Key - Locks all SFR protected by KEY register  */
#define   FCW_KEY_FEATURE_WRKEY_Val           _UINT32_(0x1)                                        /* (FCW_KEY) WRKEY Value: Unlock SFR bits associated with Write/Erase  */
#define   FCW_KEY_FEATURE_SWAPKEY_Val         _UINT32_(0x2)                                        /* (FCW_KEY) SWAPKEY Value: Unlock SFR bits associated with Panel Swapping  */
#define   FCW_KEY_FEATURE_CFGKEY_Val          _UINT32_(0x4)                                        /* (FCW_KEY) CFGKEY Value: Unlock SFR bits associated with general Flash configuration  */
#define FCW_KEY_FEATURE_LOCKALL               (FCW_KEY_FEATURE_LOCKALL_Val << FCW_KEY_FEATURE_Pos) /* (FCW_KEY) No selection, invalid selection, or invalid Key - Locks all SFR protected by KEY register Position */
#define FCW_KEY_FEATURE_WRKEY                 (FCW_KEY_FEATURE_WRKEY_Val << FCW_KEY_FEATURE_Pos)   /* (FCW_KEY) WRKEY Value: Unlock SFR bits associated with Write/Erase Position */
#define FCW_KEY_FEATURE_SWAPKEY               (FCW_KEY_FEATURE_SWAPKEY_Val << FCW_KEY_FEATURE_Pos) /* (FCW_KEY) SWAPKEY Value: Unlock SFR bits associated with Panel Swapping Position */
#define FCW_KEY_FEATURE_CFGKEY                (FCW_KEY_FEATURE_CFGKEY_Val << FCW_KEY_FEATURE_Pos)  /* (FCW_KEY) CFGKEY Value: Unlock SFR bits associated with general Flash configuration Position */
#define FCW_KEY_CODE_Pos                      _UINT32_(8)                                          /* (FCW_KEY) Unlock Code Position */
#define FCW_KEY_CODE_Msk                      (_UINT32_(0xFFFFFF) << FCW_KEY_CODE_Pos)             /* (FCW_KEY) Unlock Code Mask */
#define FCW_KEY_CODE(value)                   (FCW_KEY_CODE_Msk & (_UINT32_(value) << FCW_KEY_CODE_Pos)) /* Assignment of value for CODE in the FCW_KEY register */
#define FCW_KEY_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (FCW_KEY) Register Mask  */


/* -------- FCW_ADDR : (FCW Offset: 0x24) (R/W 32) Flash Destination Address REGISTER -------- */
#define FCW_ADDR_RESETVALUE                   _UINT32_(0x00)                                       /*  (FCW_ADDR) Flash Destination Address REGISTER  Reset Value */

#define FCW_ADDR_ADDR_Pos                     _UINT32_(0)                                          /* (FCW_ADDR) Flash Address used by NVMOP Position */
#define FCW_ADDR_ADDR_Msk                     (_UINT32_(0xFFFFFFFF) << FCW_ADDR_ADDR_Pos)          /* (FCW_ADDR) Flash Address used by NVMOP Mask */
#define FCW_ADDR_ADDR(value)                  (FCW_ADDR_ADDR_Msk & (_UINT32_(value) << FCW_ADDR_ADDR_Pos)) /* Assignment of value for ADDR in the FCW_ADDR register */
#define FCW_ADDR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (FCW_ADDR) Register Mask  */


/* -------- FCW_SRCADDR : (FCW Offset: 0x28) (R/W 32) System Source Address REGISTER -------- */
#define FCW_SRCADDR_RESETVALUE                _UINT32_(0x00)                                       /*  (FCW_SRCADDR) System Source Address REGISTER  Reset Value */

#define FCW_SRCADDR_SRCADDR_Pos               _UINT32_(0)                                          /* (FCW_SRCADDR) Source Data (Word) Address Position */
#define FCW_SRCADDR_SRCADDR_Msk               (_UINT32_(0xFFFFFFFF) << FCW_SRCADDR_SRCADDR_Pos)    /* (FCW_SRCADDR) Source Data (Word) Address Mask */
#define FCW_SRCADDR_SRCADDR(value)            (FCW_SRCADDR_SRCADDR_Msk & (_UINT32_(value) << FCW_SRCADDR_SRCADDR_Pos)) /* Assignment of value for SRCADDR in the FCW_SRCADDR register */
#define FCW_SRCADDR_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (FCW_SRCADDR) Register Mask  */


/* -------- FCW_DATA : (FCW Offset: 0x2C) (R/W 32) Flash Write Data n REGISTER -------- */
#define FCW_DATA_RESETVALUE                   _UINT32_(0x00)                                       /*  (FCW_DATA) Flash Write Data n REGISTER  Reset Value */

#define FCW_DATA_DATA_Pos                     _UINT32_(0)                                          /* (FCW_DATA) Flash Write Data Position */
#define FCW_DATA_DATA_Msk                     (_UINT32_(0xFFFFFFFF) << FCW_DATA_DATA_Pos)          /* (FCW_DATA) Flash Write Data Mask */
#define FCW_DATA_DATA(value)                  (FCW_DATA_DATA_Msk & (_UINT32_(value) << FCW_DATA_DATA_Pos)) /* Assignment of value for DATA in the FCW_DATA register */
#define FCW_DATA_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (FCW_DATA) Register Mask  */


/* -------- FCW_SWAP : (FCW Offset: 0x4C) (R/W 32) NVM Panel Swap REGISTER -------- */
#define FCW_SWAP_RESETVALUE                   _UINT32_(0x00)                                       /*  (FCW_SWAP) NVM Panel Swap REGISTER  Reset Value */

#define FCW_SWAP_BFSWAP_Pos                   _UINT32_(0)                                          /* (FCW_SWAP) BFM Swap Status/Control Bit Position */
#define FCW_SWAP_BFSWAP_Msk                   (_UINT32_(0x1) << FCW_SWAP_BFSWAP_Pos)               /* (FCW_SWAP) BFM Swap Status/Control Bit Mask */
#define FCW_SWAP_BFSWAP(value)                (FCW_SWAP_BFSWAP_Msk & (_UINT32_(value) << FCW_SWAP_BFSWAP_Pos)) /* Assignment of value for BFSWAP in the FCW_SWAP register */
#define   FCW_SWAP_BFSWAP_UNSWAP_Val          _UINT32_(0x0)                                        /* (FCW_SWAP) Upper and Lower BFM Regions are NOT Swapped  */
#define   FCW_SWAP_BFSWAP_SWAP_Val            _UINT32_(0x1)                                        /* (FCW_SWAP) Upper and Lower BFM Regions are Swapped  */
#define FCW_SWAP_BFSWAP_UNSWAP                (FCW_SWAP_BFSWAP_UNSWAP_Val << FCW_SWAP_BFSWAP_Pos)  /* (FCW_SWAP) Upper and Lower BFM Regions are NOT Swapped Position */
#define FCW_SWAP_BFSWAP_SWAP                  (FCW_SWAP_BFSWAP_SWAP_Val << FCW_SWAP_BFSWAP_Pos)    /* (FCW_SWAP) Upper and Lower BFM Regions are Swapped Position */
#define FCW_SWAP_BFSLOCK_Pos                  _UINT32_(1)                                          /* (FCW_SWAP) BFM Swap Lock Bit Position */
#define FCW_SWAP_BFSLOCK_Msk                  (_UINT32_(0x1) << FCW_SWAP_BFSLOCK_Pos)              /* (FCW_SWAP) BFM Swap Lock Bit Mask */
#define FCW_SWAP_BFSLOCK(value)               (FCW_SWAP_BFSLOCK_Msk & (_UINT32_(value) << FCW_SWAP_BFSLOCK_Pos)) /* Assignment of value for BFSLOCK in the FCW_SWAP register */
#define   FCW_SWAP_BFSLOCK_UNLOCKED_Val       _UINT32_(0x0)                                        /* (FCW_SWAP) BFSLOCK and BFSWAP can be written  */
#define   FCW_SWAP_BFSLOCK_LOCKED_Val         _UINT32_(0x1)                                        /* (FCW_SWAP) BFSLOCK and BFSWAP cannot be written  */
#define FCW_SWAP_BFSLOCK_UNLOCKED             (FCW_SWAP_BFSLOCK_UNLOCKED_Val << FCW_SWAP_BFSLOCK_Pos) /* (FCW_SWAP) BFSLOCK and BFSWAP can be written Position */
#define FCW_SWAP_BFSLOCK_LOCKED               (FCW_SWAP_BFSLOCK_LOCKED_Val << FCW_SWAP_BFSLOCK_Pos) /* (FCW_SWAP) BFSLOCK and BFSWAP cannot be written Position */
#define FCW_SWAP_PFSWAP_Pos                   _UINT32_(8)                                          /* (FCW_SWAP) PFM Swap Status/Control Bit Position */
#define FCW_SWAP_PFSWAP_Msk                   (_UINT32_(0x1) << FCW_SWAP_PFSWAP_Pos)               /* (FCW_SWAP) PFM Swap Status/Control Bit Mask */
#define FCW_SWAP_PFSWAP(value)                (FCW_SWAP_PFSWAP_Msk & (_UINT32_(value) << FCW_SWAP_PFSWAP_Pos)) /* Assignment of value for PFSWAP in the FCW_SWAP register */
#define   FCW_SWAP_PFSWAP_UNSWAP_Val          _UINT32_(0x0)                                        /* (FCW_SWAP) Upper and Lower PFM Regions are NOT Swapped  */
#define   FCW_SWAP_PFSWAP_SWAP_Val            _UINT32_(0x1)                                        /* (FCW_SWAP) Upper and Lower PFM Regions are Swapped  */
#define FCW_SWAP_PFSWAP_UNSWAP                (FCW_SWAP_PFSWAP_UNSWAP_Val << FCW_SWAP_PFSWAP_Pos)  /* (FCW_SWAP) Upper and Lower PFM Regions are NOT Swapped Position */
#define FCW_SWAP_PFSWAP_SWAP                  (FCW_SWAP_PFSWAP_SWAP_Val << FCW_SWAP_PFSWAP_Pos)    /* (FCW_SWAP) Upper and Lower PFM Regions are Swapped Position */
#define FCW_SWAP_PFSLOCK_Pos                  _UINT32_(9)                                          /* (FCW_SWAP) PFM Swap Lock Bit Position */
#define FCW_SWAP_PFSLOCK_Msk                  (_UINT32_(0x1) << FCW_SWAP_PFSLOCK_Pos)              /* (FCW_SWAP) PFM Swap Lock Bit Mask */
#define FCW_SWAP_PFSLOCK(value)               (FCW_SWAP_PFSLOCK_Msk & (_UINT32_(value) << FCW_SWAP_PFSLOCK_Pos)) /* Assignment of value for PFSLOCK in the FCW_SWAP register */
#define   FCW_SWAP_PFSLOCK_UNLOCKED_Val       _UINT32_(0x0)                                        /* (FCW_SWAP) PFSLOCK and PFSWAP can be written  */
#define   FCW_SWAP_PFSLOCK_LOCKED_Val         _UINT32_(0x1)                                        /* (FCW_SWAP) PFSLOCK and PFSWAP cannot be written  */
#define FCW_SWAP_PFSLOCK_UNLOCKED             (FCW_SWAP_PFSLOCK_UNLOCKED_Val << FCW_SWAP_PFSLOCK_Pos) /* (FCW_SWAP) PFSLOCK and PFSWAP can be written Position */
#define FCW_SWAP_PFSLOCK_LOCKED               (FCW_SWAP_PFSLOCK_LOCKED_Val << FCW_SWAP_PFSLOCK_Pos) /* (FCW_SWAP) PFSLOCK and PFSWAP cannot be written Position */
#define FCW_SWAP_Msk                          _UINT32_(0x00000303)                                 /* (FCW_SWAP) Register Mask  */


/* -------- FCW_PWP : (FCW Offset: 0x50) (R/W 32) PFM Write Protect Region n REGISTER -------- */
#define FCW_PWP_RESETVALUE                    _UINT32_(0x00)                                       /*  (FCW_PWP) PFM Write Protect Region n REGISTER  Reset Value */

#define FCW_PWP_PWPSIZE_Pos                   _UINT32_(0)                                          /* (FCW_PWP) PWP Size in 4KB pages Position */
#define FCW_PWP_PWPSIZE_Msk                   (_UINT32_(0x7F) << FCW_PWP_PWPSIZE_Pos)              /* (FCW_PWP) PWP Size in 4KB pages Mask */
#define FCW_PWP_PWPSIZE(value)                (FCW_PWP_PWPSIZE_Msk & (_UINT32_(value) << FCW_PWP_PWPSIZE_Pos)) /* Assignment of value for PWPSIZE in the FCW_PWP register */
#define FCW_PWP_PWPMIR_Pos                    _UINT32_(13)                                         /* (FCW_PWP) Mirror PWP bit Position */
#define FCW_PWP_PWPMIR_Msk                    (_UINT32_(0x1) << FCW_PWP_PWPMIR_Pos)                /* (FCW_PWP) Mirror PWP bit Mask */
#define FCW_PWP_PWPMIR(value)                 (FCW_PWP_PWPMIR_Msk & (_UINT32_(value) << FCW_PWP_PWPMIR_Pos)) /* Assignment of value for PWPMIR in the FCW_PWP register */
#define   FCW_PWP_PWPMIR_UNMIRROR_Val         _UINT32_(0x0)                                        /* (FCW_PWP) PWP settings are NOT Mirrored  */
#define   FCW_PWP_PWPMIR_MIRROR_Val           _UINT32_(0x1)                                        /* (FCW_PWP) PWP settings are Mirrored  */
#define FCW_PWP_PWPMIR_UNMIRROR               (FCW_PWP_PWPMIR_UNMIRROR_Val << FCW_PWP_PWPMIR_Pos)  /* (FCW_PWP) PWP settings are NOT Mirrored Position */
#define FCW_PWP_PWPMIR_MIRROR                 (FCW_PWP_PWPMIR_MIRROR_Val << FCW_PWP_PWPMIR_Pos)    /* (FCW_PWP) PWP settings are Mirrored Position */
#define FCW_PWP_PWPLOCK_Pos                   _UINT32_(14)                                         /* (FCW_PWP) PWP Lock Bit Position */
#define FCW_PWP_PWPLOCK_Msk                   (_UINT32_(0x1) << FCW_PWP_PWPLOCK_Pos)               /* (FCW_PWP) PWP Lock Bit Mask */
#define FCW_PWP_PWPLOCK(value)                (FCW_PWP_PWPLOCK_Msk & (_UINT32_(value) << FCW_PWP_PWPLOCK_Pos)) /* Assignment of value for PWPLOCK in the FCW_PWP register */
#define   FCW_PWP_PWPLOCK_UNLOCKED_Val        _UINT32_(0x0)                                        /* (FCW_PWP) This register is Not Locked and can be modified  */
#define   FCW_PWP_PWPLOCK_LOCKED_Val          _UINT32_(0x1)                                        /* (FCW_PWP) This register is Locked and cannot be modified  */
#define FCW_PWP_PWPLOCK_UNLOCKED              (FCW_PWP_PWPLOCK_UNLOCKED_Val << FCW_PWP_PWPLOCK_Pos) /* (FCW_PWP) This register is Not Locked and can be modified Position */
#define FCW_PWP_PWPLOCK_LOCKED                (FCW_PWP_PWPLOCK_LOCKED_Val << FCW_PWP_PWPLOCK_Pos)  /* (FCW_PWP) This register is Locked and cannot be modified Position */
#define FCW_PWP_PWPEN_Pos                     _UINT32_(15)                                         /* (FCW_PWP) PWP Enable Bit Position */
#define FCW_PWP_PWPEN_Msk                     (_UINT32_(0x1) << FCW_PWP_PWPEN_Pos)                 /* (FCW_PWP) PWP Enable Bit Mask */
#define FCW_PWP_PWPEN(value)                  (FCW_PWP_PWPEN_Msk & (_UINT32_(value) << FCW_PWP_PWPEN_Pos)) /* Assignment of value for PWPEN in the FCW_PWP register */
#define   FCW_PWP_PWPEN_DISABLE_Val           _UINT32_(0x0)                                        /* (FCW_PWP) PWP is Not Enabled for the defined region  */
#define   FCW_PWP_PWPEN_ENABLE_Val            _UINT32_(0x1)                                        /* (FCW_PWP) PWP is Enabled for the defined region  */
#define FCW_PWP_PWPEN_DISABLE                 (FCW_PWP_PWPEN_DISABLE_Val << FCW_PWP_PWPEN_Pos)     /* (FCW_PWP) PWP is Not Enabled for the defined region Position */
#define FCW_PWP_PWPEN_ENABLE                  (FCW_PWP_PWPEN_ENABLE_Val << FCW_PWP_PWPEN_Pos)      /* (FCW_PWP) PWP is Enabled for the defined region Position */
#define FCW_PWP_PWPBASE_Pos                   _UINT32_(16)                                         /* (FCW_PWP) PWP Base Address - 4KB Page Aligned Position */
#define FCW_PWP_PWPBASE_Msk                   (_UINT32_(0x7F) << FCW_PWP_PWPBASE_Pos)              /* (FCW_PWP) PWP Base Address - 4KB Page Aligned Mask */
#define FCW_PWP_PWPBASE(value)                (FCW_PWP_PWPBASE_Msk & (_UINT32_(value) << FCW_PWP_PWPBASE_Pos)) /* Assignment of value for PWPBASE in the FCW_PWP register */
#define FCW_PWP_Msk                           _UINT32_(0x007FE07F)                                 /* (FCW_PWP) Register Mask  */


/* -------- FCW_LBWP : (FCW Offset: 0x70) (R/W 32) Lower BFM Write Protect REGISTER -------- */
#define FCW_LBWP_RESETVALUE                   _UINT32_(0x03)                                       /*  (FCW_LBWP) Lower BFM Write Protect REGISTER  Reset Value */

#define FCW_LBWP_LBWP_Pos                     _UINT32_(0)                                          /* (FCW_LBWP) Lower Boot Pages Write Protect Bits Position */
#define FCW_LBWP_LBWP_Msk                     (_UINT32_(0x3) << FCW_LBWP_LBWP_Pos)                 /* (FCW_LBWP) Lower Boot Pages Write Protect Bits Mask */
#define FCW_LBWP_LBWP(value)                  (FCW_LBWP_LBWP_Msk & (_UINT32_(value) << FCW_LBWP_LBWP_Pos)) /* Assignment of value for LBWP in the FCW_LBWP register */
#define   FCW_LBWP_LBWP_DISABLE_Val           _UINT32_(0x0)                                        /* (FCW_LBWP) Erase and Write Protection for this Lower Boot Page is Disabled  */
#define   FCW_LBWP_LBWP_ENABLE_Val            _UINT32_(0x1)                                        /* (FCW_LBWP) Erase and Write Protection for this Lower Boot Page is Enabled  */
#define FCW_LBWP_LBWP_DISABLE                 (FCW_LBWP_LBWP_DISABLE_Val << FCW_LBWP_LBWP_Pos)     /* (FCW_LBWP) Erase and Write Protection for this Lower Boot Page is Disabled Position */
#define FCW_LBWP_LBWP_ENABLE                  (FCW_LBWP_LBWP_ENABLE_Val << FCW_LBWP_LBWP_Pos)      /* (FCW_LBWP) Erase and Write Protection for this Lower Boot Page is Enabled Position */
#define FCW_LBWP_LBWPLOCK_Pos                 _UINT32_(31)                                         /* (FCW_LBWP) LBWP Lock Bit Position */
#define FCW_LBWP_LBWPLOCK_Msk                 (_UINT32_(0x1) << FCW_LBWP_LBWPLOCK_Pos)             /* (FCW_LBWP) LBWP Lock Bit Mask */
#define FCW_LBWP_LBWPLOCK(value)              (FCW_LBWP_LBWPLOCK_Msk & (_UINT32_(value) << FCW_LBWP_LBWPLOCK_Pos)) /* Assignment of value for LBWPLOCK in the FCW_LBWP register */
#define   FCW_LBWP_LBWPLOCK_UNLOCKED_Val      _UINT32_(0x0)                                        /* (FCW_LBWP) This register is NOT Locked and can be modified  */
#define   FCW_LBWP_LBWPLOCK_LOCKED_Val        _UINT32_(0x1)                                        /* (FCW_LBWP) This register is Locked and cannot be modified  */
#define FCW_LBWP_LBWPLOCK_UNLOCKED            (FCW_LBWP_LBWPLOCK_UNLOCKED_Val << FCW_LBWP_LBWPLOCK_Pos) /* (FCW_LBWP) This register is NOT Locked and can be modified Position */
#define FCW_LBWP_LBWPLOCK_LOCKED              (FCW_LBWP_LBWPLOCK_LOCKED_Val << FCW_LBWP_LBWPLOCK_Pos) /* (FCW_LBWP) This register is Locked and cannot be modified Position */
#define FCW_LBWP_Msk                          _UINT32_(0x80000003)                                 /* (FCW_LBWP) Register Mask  */


/* -------- FCW_UBWP : (FCW Offset: 0x74) (R/W 32) Upper BFM Write Protect REGISTER -------- */
#define FCW_UBWP_RESETVALUE                   _UINT32_(0x03)                                       /*  (FCW_UBWP) Upper BFM Write Protect REGISTER  Reset Value */

#define FCW_UBWP_UBWP_Pos                     _UINT32_(0)                                          /* (FCW_UBWP) Upper Boot Pages Write Protect Bits Position */
#define FCW_UBWP_UBWP_Msk                     (_UINT32_(0x3) << FCW_UBWP_UBWP_Pos)                 /* (FCW_UBWP) Upper Boot Pages Write Protect Bits Mask */
#define FCW_UBWP_UBWP(value)                  (FCW_UBWP_UBWP_Msk & (_UINT32_(value) << FCW_UBWP_UBWP_Pos)) /* Assignment of value for UBWP in the FCW_UBWP register */
#define   FCW_UBWP_UBWP_DISABLE_Val           _UINT32_(0x0)                                        /* (FCW_UBWP) Erase and Write Protection for this Upper Boot Page is Disabled  */
#define   FCW_UBWP_UBWP_ENABLE_Val            _UINT32_(0x1)                                        /* (FCW_UBWP) Erase and Write Protection for this Upper Boot Page is Enabled  */
#define FCW_UBWP_UBWP_DISABLE                 (FCW_UBWP_UBWP_DISABLE_Val << FCW_UBWP_UBWP_Pos)     /* (FCW_UBWP) Erase and Write Protection for this Upper Boot Page is Disabled Position */
#define FCW_UBWP_UBWP_ENABLE                  (FCW_UBWP_UBWP_ENABLE_Val << FCW_UBWP_UBWP_Pos)      /* (FCW_UBWP) Erase and Write Protection for this Upper Boot Page is Enabled Position */
#define FCW_UBWP_UBWPLOCK_Pos                 _UINT32_(31)                                         /* (FCW_UBWP) UBWP Lock Bit Position */
#define FCW_UBWP_UBWPLOCK_Msk                 (_UINT32_(0x1) << FCW_UBWP_UBWPLOCK_Pos)             /* (FCW_UBWP) UBWP Lock Bit Mask */
#define FCW_UBWP_UBWPLOCK(value)              (FCW_UBWP_UBWPLOCK_Msk & (_UINT32_(value) << FCW_UBWP_UBWPLOCK_Pos)) /* Assignment of value for UBWPLOCK in the FCW_UBWP register */
#define   FCW_UBWP_UBWPLOCK_UNLOCKED_Val      _UINT32_(0x0)                                        /* (FCW_UBWP) This register is NOT Locked and can be modified  */
#define   FCW_UBWP_UBWPLOCK_LOCKED_Val        _UINT32_(0x1)                                        /* (FCW_UBWP) This register is Locked and cannot be modified  */
#define FCW_UBWP_UBWPLOCK_UNLOCKED            (FCW_UBWP_UBWPLOCK_UNLOCKED_Val << FCW_UBWP_UBWPLOCK_Pos) /* (FCW_UBWP) This register is NOT Locked and can be modified Position */
#define FCW_UBWP_UBWPLOCK_LOCKED              (FCW_UBWP_UBWPLOCK_LOCKED_Val << FCW_UBWP_UBWPLOCK_Pos) /* (FCW_UBWP) This register is Locked and cannot be modified Position */
#define FCW_UBWP_Msk                          _UINT32_(0x80000003)                                 /* (FCW_UBWP) Register Mask  */


/* -------- FCW_UOWP : (FCW Offset: 0x78) (R/W 32) User OTP Write protection REGISTER -------- */
#define FCW_UOWP_RESETVALUE                   _UINT32_(0x0F)                                       /*  (FCW_UOWP) User OTP Write protection REGISTER  Reset Value */

#define FCW_UOWP_UO1WPR_Pos                   _UINT32_(0)                                          /* (FCW_UOWP) User OTP Page 1 Write Protect Row Bit Position */
#define FCW_UOWP_UO1WPR_Msk                   (_UINT32_(0xF) << FCW_UOWP_UO1WPR_Pos)               /* (FCW_UOWP) User OTP Page 1 Write Protect Row Bit Mask */
#define FCW_UOWP_UO1WPR(value)                (FCW_UOWP_UO1WPR_Msk & (_UINT32_(value) << FCW_UOWP_UO1WPR_Pos)) /* Assignment of value for UO1WPR in the FCW_UOWP register */
#define   FCW_UOWP_UO1WPR_DISABLE_Val         _UINT32_(0x0)                                        /* (FCW_UOWP) Write Protection for User OTP Page 1 Row "n" is Disabled  */
#define   FCW_UOWP_UO1WPR_ENABLE_Val          _UINT32_(0x1)                                        /* (FCW_UOWP) Write Protection for User OTP Page 1 Row "n" is Enabled  */
#define FCW_UOWP_UO1WPR_DISABLE               (FCW_UOWP_UO1WPR_DISABLE_Val << FCW_UOWP_UO1WPR_Pos) /* (FCW_UOWP) Write Protection for User OTP Page 1 Row "n" is Disabled Position */
#define FCW_UOWP_UO1WPR_ENABLE                (FCW_UOWP_UO1WPR_ENABLE_Val << FCW_UOWP_UO1WPR_Pos)  /* (FCW_UOWP) Write Protection for User OTP Page 1 Row "n" is Enabled Position */
#define FCW_UOWP_UO1WPRLOCK_Pos               _UINT32_(16)                                         /* (FCW_UOWP) User OTP Page 1 WP Row Lock Bit Position */
#define FCW_UOWP_UO1WPRLOCK_Msk               (_UINT32_(0xF) << FCW_UOWP_UO1WPRLOCK_Pos)           /* (FCW_UOWP) User OTP Page 1 WP Row Lock Bit Mask */
#define FCW_UOWP_UO1WPRLOCK(value)            (FCW_UOWP_UO1WPRLOCK_Msk & (_UINT32_(value) << FCW_UOWP_UO1WPRLOCK_Pos)) /* Assignment of value for UO1WPRLOCK in the FCW_UOWP register */
#define   FCW_UOWP_UO1WPRLOCK_UNLOCKED_Val    _UINT32_(0x0)                                        /* (FCW_UOWP) UO1WPR[n] &amp; UO1WPRLOCK[n] bits are NOT Locked and can be modified  */
#define   FCW_UOWP_UO1WPRLOCK_LOCKED_Val      _UINT32_(0x1)                                        /* (FCW_UOWP) UO1WPR[n] &amp; UO1WPRLOCK[n] bits are Locked and cannot be modified  */
#define FCW_UOWP_UO1WPRLOCK_UNLOCKED          (FCW_UOWP_UO1WPRLOCK_UNLOCKED_Val << FCW_UOWP_UO1WPRLOCK_Pos) /* (FCW_UOWP) UO1WPR[n] &amp; UO1WPRLOCK[n] bits are NOT Locked and can be modified Position */
#define FCW_UOWP_UO1WPRLOCK_LOCKED            (FCW_UOWP_UO1WPRLOCK_LOCKED_Val << FCW_UOWP_UO1WPRLOCK_Pos) /* (FCW_UOWP) UO1WPR[n] &amp; UO1WPRLOCK[n] bits are Locked and cannot be modified Position */
#define FCW_UOWP_Msk                          _UINT32_(0x000F000F)                                 /* (FCW_UOWP) Register Mask  */


/* -------- FCW_CWP : (FCW Offset: 0x7C) (R/W 32) CFM Page Write Protect REGISTER -------- */
#define FCW_CWP_RESETVALUE                    _UINT32_(0x8C008FD)                                  /*  (FCW_CWP) CFM Page Write Protect REGISTER  Reset Value */

#define FCW_CWP_BC1AWP_Pos                    _UINT32_(0)                                          /* (FCW_CWP) Panel 1 Write Protect BootCfg1A Position */
#define FCW_CWP_BC1AWP_Msk                    (_UINT32_(0x1) << FCW_CWP_BC1AWP_Pos)                /* (FCW_CWP) Panel 1 Write Protect BootCfg1A Mask */
#define FCW_CWP_BC1AWP(value)                 (FCW_CWP_BC1AWP_Msk & (_UINT32_(value) << FCW_CWP_BC1AWP_Pos)) /* Assignment of value for BC1AWP in the FCW_CWP register */
#define   FCW_CWP_BC1AWP_DISABLE_Val          _UINT32_(0x0)                                        /* (FCW_CWP) Erase and Write Protection for this Page is Disabled  */
#define   FCW_CWP_BC1AWP_ENABLE_Val           _UINT32_(0x1)                                        /* (FCW_CWP) Erase and Write Protection for this Page is Enabled  */
#define FCW_CWP_BC1AWP_DISABLE                (FCW_CWP_BC1AWP_DISABLE_Val << FCW_CWP_BC1AWP_Pos)   /* (FCW_CWP) Erase and Write Protection for this Page is Disabled Position */
#define FCW_CWP_BC1AWP_ENABLE                 (FCW_CWP_BC1AWP_ENABLE_Val << FCW_CWP_BC1AWP_Pos)    /* (FCW_CWP) Erase and Write Protection for this Page is Enabled Position */
#define FCW_CWP_BC1WP_Pos                     _UINT32_(2)                                          /* (FCW_CWP) Panel 1 Write Protect BootCfg1 Position */
#define FCW_CWP_BC1WP_Msk                     (_UINT32_(0x1) << FCW_CWP_BC1WP_Pos)                 /* (FCW_CWP) Panel 1 Write Protect BootCfg1 Mask */
#define FCW_CWP_BC1WP(value)                  (FCW_CWP_BC1WP_Msk & (_UINT32_(value) << FCW_CWP_BC1WP_Pos)) /* Assignment of value for BC1WP in the FCW_CWP register */
#define   FCW_CWP_BC1WP_DISABLE_Val           _UINT32_(0x0)                                        /* (FCW_CWP) Erase and Write Protection for this Page is Disabled  */
#define   FCW_CWP_BC1WP_ENABLE_Val            _UINT32_(0x1)                                        /* (FCW_CWP) Erase and Write Protection for this Page is Enabled  */
#define FCW_CWP_BC1WP_DISABLE                 (FCW_CWP_BC1WP_DISABLE_Val << FCW_CWP_BC1WP_Pos)     /* (FCW_CWP) Erase and Write Protection for this Page is Disabled Position */
#define FCW_CWP_BC1WP_ENABLE                  (FCW_CWP_BC1WP_ENABLE_Val << FCW_CWP_BC1WP_Pos)      /* (FCW_CWP) Erase and Write Protection for this Page is Enabled Position */
#define FCW_CWP_RCWP_Pos                      _UINT32_(3)                                          /* (FCW_CWP) Panel 1 Write Protect ROMCfg Position */
#define FCW_CWP_RCWP_Msk                      (_UINT32_(0x1) << FCW_CWP_RCWP_Pos)                  /* (FCW_CWP) Panel 1 Write Protect ROMCfg Mask */
#define FCW_CWP_RCWP(value)                   (FCW_CWP_RCWP_Msk & (_UINT32_(value) << FCW_CWP_RCWP_Pos)) /* Assignment of value for RCWP in the FCW_CWP register */
#define   FCW_CWP_RCWP_DISABLE_Val            _UINT32_(0x0)                                        /* (FCW_CWP) Erase and Write Protection for this Page is Disabled  */
#define   FCW_CWP_RCWP_ENABLE_Val             _UINT32_(0x1)                                        /* (FCW_CWP) Erase and Write Protection for this Page is Enabled  */
#define FCW_CWP_RCWP_DISABLE                  (FCW_CWP_RCWP_DISABLE_Val << FCW_CWP_RCWP_Pos)       /* (FCW_CWP) Erase and Write Protection for this Page is Disabled Position */
#define FCW_CWP_RCWP_ENABLE                   (FCW_CWP_RCWP_ENABLE_Val << FCW_CWP_RCWP_Pos)        /* (FCW_CWP) Erase and Write Protection for this Page is Enabled Position */
#define FCW_CWP_VSSWP0_Pos                    _UINT32_(4)                                          /* (FCW_CWP) Panel 1 Write Protect VSSn Position */
#define FCW_CWP_VSSWP0_Msk                    (_UINT32_(0x1) << FCW_CWP_VSSWP0_Pos)                /* (FCW_CWP) Panel 1 Write Protect VSSn Mask */
#define FCW_CWP_VSSWP0(value)                 (FCW_CWP_VSSWP0_Msk & (_UINT32_(value) << FCW_CWP_VSSWP0_Pos)) /* Assignment of value for VSSWP0 in the FCW_CWP register */
#define   FCW_CWP_VSSWP0_DISABLE_Val          _UINT32_(0x0)                                        /* (FCW_CWP) Erase and Write Protection for this Page is Disabled  */
#define   FCW_CWP_VSSWP0_ENABLE_Val           _UINT32_(0x1)                                        /* (FCW_CWP) Erase and Write Protection for this Page is Enabled  */
#define FCW_CWP_VSSWP0_DISABLE                (FCW_CWP_VSSWP0_DISABLE_Val << FCW_CWP_VSSWP0_Pos)   /* (FCW_CWP) Erase and Write Protection for this Page is Disabled Position */
#define FCW_CWP_VSSWP0_ENABLE                 (FCW_CWP_VSSWP0_ENABLE_Val << FCW_CWP_VSSWP0_Pos)    /* (FCW_CWP) Erase and Write Protection for this Page is Enabled Position */
#define FCW_CWP_VSSWP1_Pos                    _UINT32_(5)                                          /* (FCW_CWP) Panel 1 Write Protect VSSn Position */
#define FCW_CWP_VSSWP1_Msk                    (_UINT32_(0x1) << FCW_CWP_VSSWP1_Pos)                /* (FCW_CWP) Panel 1 Write Protect VSSn Mask */
#define FCW_CWP_VSSWP1(value)                 (FCW_CWP_VSSWP1_Msk & (_UINT32_(value) << FCW_CWP_VSSWP1_Pos)) /* Assignment of value for VSSWP1 in the FCW_CWP register */
#define   FCW_CWP_VSSWP1_DISABLE_Val          _UINT32_(0x0)                                        /* (FCW_CWP) Erase and Write Protection for this Page is Disabled  */
#define   FCW_CWP_VSSWP1_ENABLE_Val           _UINT32_(0x1)                                        /* (FCW_CWP) Erase and Write Protection for this Page is Enabled  */
#define FCW_CWP_VSSWP1_DISABLE                (FCW_CWP_VSSWP1_DISABLE_Val << FCW_CWP_VSSWP1_Pos)   /* (FCW_CWP) Erase and Write Protection for this Page is Disabled Position */
#define FCW_CWP_VSSWP1_ENABLE                 (FCW_CWP_VSSWP1_ENABLE_Val << FCW_CWP_VSSWP1_Pos)    /* (FCW_CWP) Erase and Write Protection for this Page is Enabled Position */
#define FCW_CWP_TWP_Pos                       _UINT32_(6)                                          /* (FCW_CWP) Panel 1 Write Protect Test Position */
#define FCW_CWP_TWP_Msk                       (_UINT32_(0x1) << FCW_CWP_TWP_Pos)                   /* (FCW_CWP) Panel 1 Write Protect Test Mask */
#define FCW_CWP_TWP(value)                    (FCW_CWP_TWP_Msk & (_UINT32_(value) << FCW_CWP_TWP_Pos)) /* Assignment of value for TWP in the FCW_CWP register */
#define   FCW_CWP_TWP_DISABLE_Val             _UINT32_(0x0)                                        /* (FCW_CWP) Erase and Write Protection for this Page is Disabled  */
#define   FCW_CWP_TWP_ENABLE_Val              _UINT32_(0x1)                                        /* (FCW_CWP) Erase and Write Protection for this Page is Enable  */
#define FCW_CWP_TWP_DISABLE                   (FCW_CWP_TWP_DISABLE_Val << FCW_CWP_TWP_Pos)         /* (FCW_CWP) Erase and Write Protection for this Page is Disabled Position */
#define FCW_CWP_TWP_ENABLE                    (FCW_CWP_TWP_ENABLE_Val << FCW_CWP_TWP_Pos)          /* (FCW_CWP) Erase and Write Protection for this Page is Enable Position */
#define FCW_CWP_COWP_Pos                      _UINT32_(7)                                          /* (FCW_CWP) Panel 1 Write Protect CalOTP Position */
#define FCW_CWP_COWP_Msk                      (_UINT32_(0x1) << FCW_CWP_COWP_Pos)                  /* (FCW_CWP) Panel 1 Write Protect CalOTP Mask */
#define FCW_CWP_COWP(value)                   (FCW_CWP_COWP_Msk & (_UINT32_(value) << FCW_CWP_COWP_Pos)) /* Assignment of value for COWP in the FCW_CWP register */
#define   FCW_CWP_COWP_DISABLE_Val            _UINT32_(0x0)                                        /* (FCW_CWP) Erase and Write Protection for this Page is Disabled  */
#define   FCW_CWP_COWP_ENABLE_Val             _UINT32_(0x1)                                        /* (FCW_CWP) Erase and Write Protection for this Page is Enabled  */
#define FCW_CWP_COWP_DISABLE                  (FCW_CWP_COWP_DISABLE_Val << FCW_CWP_COWP_Pos)       /* (FCW_CWP) Erase and Write Protection for this Page is Disabled Position */
#define FCW_CWP_COWP_ENABLE                   (FCW_CWP_COWP_ENABLE_Val << FCW_CWP_COWP_Pos)        /* (FCW_CWP) Erase and Write Protection for this Page is Enabled Position */
#define FCW_CWP_BC1AWPLOCK_Pos                _UINT32_(16)                                         /* (FCW_CWP) Panel 1 Lock Write Protection BootCfg1A Position */
#define FCW_CWP_BC1AWPLOCK_Msk                (_UINT32_(0x1) << FCW_CWP_BC1AWPLOCK_Pos)            /* (FCW_CWP) Panel 1 Lock Write Protection BootCfg1A Mask */
#define FCW_CWP_BC1AWPLOCK(value)             (FCW_CWP_BC1AWPLOCK_Msk & (_UINT32_(value) << FCW_CWP_BC1AWPLOCK_Pos)) /* Assignment of value for BC1AWPLOCK in the FCW_CWP register */
#define   FCW_CWP_BC1AWPLOCK_UNLOCKED_Val     _UINT32_(0x0)                                        /* (FCW_CWP) The Lock &amp; Write Protect bits for this Page are NOT Locked and can be modified  */
#define   FCW_CWP_BC1AWPLOCK_LOCKED_Val       _UINT32_(0x1)                                        /* (FCW_CWP) The Lock &amp; Write Protect bits for this Page are Locked and cannot be modified  */
#define FCW_CWP_BC1AWPLOCK_UNLOCKED           (FCW_CWP_BC1AWPLOCK_UNLOCKED_Val << FCW_CWP_BC1AWPLOCK_Pos) /* (FCW_CWP) The Lock &amp; Write Protect bits for this Page are NOT Locked and can be modified Position */
#define FCW_CWP_BC1AWPLOCK_LOCKED             (FCW_CWP_BC1AWPLOCK_LOCKED_Val << FCW_CWP_BC1AWPLOCK_Pos) /* (FCW_CWP) The Lock &amp; Write Protect bits for this Page are Locked and cannot be modified Position */
#define FCW_CWP_BC1WPLOCK_Pos                 _UINT32_(18)                                         /* (FCW_CWP) Panel 1 Lock Write Protection BootCfg1 Position */
#define FCW_CWP_BC1WPLOCK_Msk                 (_UINT32_(0x1) << FCW_CWP_BC1WPLOCK_Pos)             /* (FCW_CWP) Panel 1 Lock Write Protection BootCfg1 Mask */
#define FCW_CWP_BC1WPLOCK(value)              (FCW_CWP_BC1WPLOCK_Msk & (_UINT32_(value) << FCW_CWP_BC1WPLOCK_Pos)) /* Assignment of value for BC1WPLOCK in the FCW_CWP register */
#define   FCW_CWP_BC1WPLOCK_UNLOCKED_Val      _UINT32_(0x0)                                        /* (FCW_CWP) The Lock &amp; Write Protect bits for this Page are NOT Locked and can be modified  */
#define   FCW_CWP_BC1WPLOCK_LOCKED_Val        _UINT32_(0x1)                                        /* (FCW_CWP) The Lock &amp; Write Protect bits for this Page are Locked and cannot be modified  */
#define FCW_CWP_BC1WPLOCK_UNLOCKED            (FCW_CWP_BC1WPLOCK_UNLOCKED_Val << FCW_CWP_BC1WPLOCK_Pos) /* (FCW_CWP) The Lock &amp; Write Protect bits for this Page are NOT Locked and can be modified Position */
#define FCW_CWP_BC1WPLOCK_LOCKED              (FCW_CWP_BC1WPLOCK_LOCKED_Val << FCW_CWP_BC1WPLOCK_Pos) /* (FCW_CWP) The Lock &amp; Write Protect bits for this Page are Locked and cannot be modified Position */
#define FCW_CWP_RCWPLOCK_Pos                  _UINT32_(19)                                         /* (FCW_CWP) Panel 1 Lock Write Protection ROMCfg Position */
#define FCW_CWP_RCWPLOCK_Msk                  (_UINT32_(0x1) << FCW_CWP_RCWPLOCK_Pos)              /* (FCW_CWP) Panel 1 Lock Write Protection ROMCfg Mask */
#define FCW_CWP_RCWPLOCK(value)               (FCW_CWP_RCWPLOCK_Msk & (_UINT32_(value) << FCW_CWP_RCWPLOCK_Pos)) /* Assignment of value for RCWPLOCK in the FCW_CWP register */
#define   FCW_CWP_RCWPLOCK_UNLOCKED_Val       _UINT32_(0x0)                                        /* (FCW_CWP) The Lock &amp; Write Protect bits for this Page are NOT Locked and can be modified  */
#define   FCW_CWP_RCWPLOCK_LOCKED_Val         _UINT32_(0x1)                                        /* (FCW_CWP) The Lock &amp; Write Protect bits for this Page are Locked and cannot be modified  */
#define FCW_CWP_RCWPLOCK_UNLOCKED             (FCW_CWP_RCWPLOCK_UNLOCKED_Val << FCW_CWP_RCWPLOCK_Pos) /* (FCW_CWP) The Lock &amp; Write Protect bits for this Page are NOT Locked and can be modified Position */
#define FCW_CWP_RCWPLOCK_LOCKED               (FCW_CWP_RCWPLOCK_LOCKED_Val << FCW_CWP_RCWPLOCK_Pos) /* (FCW_CWP) The Lock &amp; Write Protect bits for this Page are Locked and cannot be modified Position */
#define FCW_CWP_VSSWPLOCK0_Pos                _UINT32_(20)                                         /* (FCW_CWP) Panel 1 Lock Write Protection VSSn Position */
#define FCW_CWP_VSSWPLOCK0_Msk                (_UINT32_(0x1) << FCW_CWP_VSSWPLOCK0_Pos)            /* (FCW_CWP) Panel 1 Lock Write Protection VSSn Mask */
#define FCW_CWP_VSSWPLOCK0(value)             (FCW_CWP_VSSWPLOCK0_Msk & (_UINT32_(value) << FCW_CWP_VSSWPLOCK0_Pos)) /* Assignment of value for VSSWPLOCK0 in the FCW_CWP register */
#define   FCW_CWP_VSSWPLOCK0_UNLOCKED_Val     _UINT32_(0x0)                                        /* (FCW_CWP) The Lock &amp; Write Protect bits for this Page are NOT Locked and can be modified  */
#define   FCW_CWP_VSSWPLOCK0_LOCKED_Val       _UINT32_(0x1)                                        /* (FCW_CWP) The Lock &amp; Write Protect bits for this Page are Locked and cannot be modified  */
#define FCW_CWP_VSSWPLOCK0_UNLOCKED           (FCW_CWP_VSSWPLOCK0_UNLOCKED_Val << FCW_CWP_VSSWPLOCK0_Pos) /* (FCW_CWP) The Lock &amp; Write Protect bits for this Page are NOT Locked and can be modified Position */
#define FCW_CWP_VSSWPLOCK0_LOCKED             (FCW_CWP_VSSWPLOCK0_LOCKED_Val << FCW_CWP_VSSWPLOCK0_Pos) /* (FCW_CWP) The Lock &amp; Write Protect bits for this Page are Locked and cannot be modified Position */
#define FCW_CWP_VSSWPLOCK1_Pos                _UINT32_(21)                                         /* (FCW_CWP) Panel 1 Lock Write Protection VSSn Position */
#define FCW_CWP_VSSWPLOCK1_Msk                (_UINT32_(0x1) << FCW_CWP_VSSWPLOCK1_Pos)            /* (FCW_CWP) Panel 1 Lock Write Protection VSSn Mask */
#define FCW_CWP_VSSWPLOCK1(value)             (FCW_CWP_VSSWPLOCK1_Msk & (_UINT32_(value) << FCW_CWP_VSSWPLOCK1_Pos)) /* Assignment of value for VSSWPLOCK1 in the FCW_CWP register */
#define   FCW_CWP_VSSWPLOCK1_UNLOCKED_Val     _UINT32_(0x0)                                        /* (FCW_CWP) The Lock &amp; Write Protect bits for this Page are NOT Locked and can be modified  */
#define   FCW_CWP_VSSWPLOCK1_LOCKED_Val       _UINT32_(0x1)                                        /* (FCW_CWP) The Lock &amp; Write Protect bits for this Page are Locked and cannot be modified  */
#define FCW_CWP_VSSWPLOCK1_UNLOCKED           (FCW_CWP_VSSWPLOCK1_UNLOCKED_Val << FCW_CWP_VSSWPLOCK1_Pos) /* (FCW_CWP) The Lock &amp; Write Protect bits for this Page are NOT Locked and can be modified Position */
#define FCW_CWP_VSSWPLOCK1_LOCKED             (FCW_CWP_VSSWPLOCK1_LOCKED_Val << FCW_CWP_VSSWPLOCK1_Pos) /* (FCW_CWP) The Lock &amp; Write Protect bits for this Page are Locked and cannot be modified Position */
#define FCW_CWP_TWPLOCK_Pos                   _UINT32_(22)                                         /* (FCW_CWP) Panel 1 Lock Write Protection Test Position */
#define FCW_CWP_TWPLOCK_Msk                   (_UINT32_(0x1) << FCW_CWP_TWPLOCK_Pos)               /* (FCW_CWP) Panel 1 Lock Write Protection Test Mask */
#define FCW_CWP_TWPLOCK(value)                (FCW_CWP_TWPLOCK_Msk & (_UINT32_(value) << FCW_CWP_TWPLOCK_Pos)) /* Assignment of value for TWPLOCK in the FCW_CWP register */
#define   FCW_CWP_TWPLOCK_UNLOCKED_Val        _UINT32_(0x0)                                        /* (FCW_CWP) The Lock &amp; Write Protect bits for this Page are NOT Locked and can be modified  */
#define   FCW_CWP_TWPLOCK_LOCKED_Val          _UINT32_(0x1)                                        /* (FCW_CWP) The Lock &amp; Write Protect bits for this Page are Locked and cannot be modified  */
#define FCW_CWP_TWPLOCK_UNLOCKED              (FCW_CWP_TWPLOCK_UNLOCKED_Val << FCW_CWP_TWPLOCK_Pos) /* (FCW_CWP) The Lock &amp; Write Protect bits for this Page are NOT Locked and can be modified Position */
#define FCW_CWP_TWPLOCK_LOCKED                (FCW_CWP_TWPLOCK_LOCKED_Val << FCW_CWP_TWPLOCK_Pos)  /* (FCW_CWP) The Lock &amp; Write Protect bits for this Page are Locked and cannot be modified Position */
#define FCW_CWP_COWPLOCK_Pos                  _UINT32_(23)                                         /* (FCW_CWP) Panel 1 Lock Write Protection CalOTP Position */
#define FCW_CWP_COWPLOCK_Msk                  (_UINT32_(0x1) << FCW_CWP_COWPLOCK_Pos)              /* (FCW_CWP) Panel 1 Lock Write Protection CalOTP Mask */
#define FCW_CWP_COWPLOCK(value)               (FCW_CWP_COWPLOCK_Msk & (_UINT32_(value) << FCW_CWP_COWPLOCK_Pos)) /* Assignment of value for COWPLOCK in the FCW_CWP register */
#define   FCW_CWP_COWPLOCK_UNLOCKED_Val       _UINT32_(0x0)                                        /* (FCW_CWP) The Lock &amp; Write Protect bits for this Page are NOT Locked and can be modified  */
#define   FCW_CWP_COWPLOCK_LOCKED_Val         _UINT32_(0x1)                                        /* (FCW_CWP) The Lock &amp; Write Protect bits for this Page are Locked and cannot be modified  */
#define FCW_CWP_COWPLOCK_UNLOCKED             (FCW_CWP_COWPLOCK_UNLOCKED_Val << FCW_CWP_COWPLOCK_Pos) /* (FCW_CWP) The Lock &amp; Write Protect bits for this Page are NOT Locked and can be modified Position */
#define FCW_CWP_COWPLOCK_LOCKED               (FCW_CWP_COWPLOCK_LOCKED_Val << FCW_CWP_COWPLOCK_Pos) /* (FCW_CWP) The Lock &amp; Write Protect bits for this Page are Locked and cannot be modified Position */
#define FCW_CWP_Msk                           _UINT32_(0x00FD00FD)                                 /* (FCW_CWP) Register Mask  */

#define FCW_CWP_VSSWP_Pos                     _UINT32_(4)                                          /* (FCW_CWP Position) Panel x Write Protect VSSn */
#define FCW_CWP_VSSWP_Msk                     (_UINT32_(0x3) << FCW_CWP_VSSWP_Pos)                 /* (FCW_CWP Mask) VSSWP */
#define FCW_CWP_VSSWP(value)                  (FCW_CWP_VSSWP_Msk & (_UINT32_(value) << FCW_CWP_VSSWP_Pos)) 
#define FCW_CWP_VSSWPLOCK_Pos                 _UINT32_(20)                                         /* (FCW_CWP Position) Panel x Lock Write Protection VSSn */
#define FCW_CWP_VSSWPLOCK_Msk                 (_UINT32_(0x3) << FCW_CWP_VSSWPLOCK_Pos)             /* (FCW_CWP Mask) VSSWPLOCK */
#define FCW_CWP_VSSWPLOCK(value)              (FCW_CWP_VSSWPLOCK_Msk & (_UINT32_(value) << FCW_CWP_VSSWPLOCK_Pos)) 

/* FCW register offsets definitions */
#define FCW_CTRLA_REG_OFST             _UINT32_(0x00)      /* (FCW_CTRLA) Control A REGISTER Offset */
#define FCW_CTRLOP_REG_OFST            _UINT32_(0x04)      /* (FCW_CTRLOP) Control Operation REGISTER Offset */
#define FCW_MUTEX_REG_OFST             _UINT32_(0x08)      /* (FCW_MUTEX) MUTEX REGISTER Offset */
#define FCW_INTENCLR_REG_OFST          _UINT32_(0x0C)      /* (FCW_INTENCLR) Interrupt Enable Clear REGISTER Offset */
#define FCW_INTENSET_REG_OFST          _UINT32_(0x10)      /* (FCW_INTENSET) Interrupt Enable Set REGISTER Offset */
#define FCW_INTFLAG_REG_OFST           _UINT32_(0x14)      /* (FCW_INTFLAG) Interrupt Flag REGISTER Offset */
#define FCW_INTFLAGSET_REG_OFST        _UINT32_(0x18)      /* (FCW_INTFLAGSET) Interrupt Flag Set REGISTER Offset */
#define FCW_STATUS_REG_OFST            _UINT32_(0x1C)      /* (FCW_STATUS) Status REGISTER Offset */
#define FCW_KEY_REG_OFST               _UINT32_(0x20)      /* (FCW_KEY) Feature Unlock Key REGISTER Offset */
#define FCW_ADDR_REG_OFST              _UINT32_(0x24)      /* (FCW_ADDR) Flash Destination Address REGISTER Offset */
#define FCW_SRCADDR_REG_OFST           _UINT32_(0x28)      /* (FCW_SRCADDR) System Source Address REGISTER Offset */
#define FCW_DATA_REG_OFST              _UINT32_(0x2C)      /* (FCW_DATA) Flash Write Data n REGISTER Offset */
#define FCW_DATA0_REG_OFST             _UINT32_(0x2C)      /* (FCW_DATA0) Flash Write Data n REGISTER Offset */
#define FCW_DATA1_REG_OFST             _UINT32_(0x30)      /* (FCW_DATA1) Flash Write Data n REGISTER Offset */
#define FCW_DATA2_REG_OFST             _UINT32_(0x34)      /* (FCW_DATA2) Flash Write Data n REGISTER Offset */
#define FCW_DATA3_REG_OFST             _UINT32_(0x38)      /* (FCW_DATA3) Flash Write Data n REGISTER Offset */
#define FCW_SWAP_REG_OFST              _UINT32_(0x4C)      /* (FCW_SWAP) NVM Panel Swap REGISTER Offset */
#define FCW_PWP_REG_OFST               _UINT32_(0x50)      /* (FCW_PWP) PFM Write Protect Region n REGISTER Offset */
#define FCW_PWP0_REG_OFST              _UINT32_(0x50)      /* (FCW_PWP0) PFM Write Protect Region n REGISTER Offset */
#define FCW_PWP1_REG_OFST              _UINT32_(0x54)      /* (FCW_PWP1) PFM Write Protect Region n REGISTER Offset */
#define FCW_PWP2_REG_OFST              _UINT32_(0x58)      /* (FCW_PWP2) PFM Write Protect Region n REGISTER Offset */
#define FCW_PWP3_REG_OFST              _UINT32_(0x5C)      /* (FCW_PWP3) PFM Write Protect Region n REGISTER Offset */
#define FCW_LBWP_REG_OFST              _UINT32_(0x70)      /* (FCW_LBWP) Lower BFM Write Protect REGISTER Offset */
#define FCW_UBWP_REG_OFST              _UINT32_(0x74)      /* (FCW_UBWP) Upper BFM Write Protect REGISTER Offset */
#define FCW_UOWP_REG_OFST              _UINT32_(0x78)      /* (FCW_UOWP) User OTP Write protection REGISTER Offset */
#define FCW_CWP_REG_OFST               _UINT32_(0x7C)      /* (FCW_CWP) CFM Page Write Protect REGISTER Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* FCW register API structure */
typedef struct
{  /* Polaris Flash Write Controller */
  __IO  uint32_t                       FCW_CTRLA;          /* Offset: 0x00 (R/W  32) Control A REGISTER */
  __IO  uint32_t                       FCW_CTRLOP;         /* Offset: 0x04 (R/W  32) Control Operation REGISTER */
  __IO  uint32_t                       FCW_MUTEX;          /* Offset: 0x08 (R/W  32) MUTEX REGISTER */
  __IO  uint32_t                       FCW_INTENCLR;       /* Offset: 0x0C (R/W  32) Interrupt Enable Clear REGISTER */
  __IO  uint32_t                       FCW_INTENSET;       /* Offset: 0x10 (R/W  32) Interrupt Enable Set REGISTER */
  __IO  uint32_t                       FCW_INTFLAG;        /* Offset: 0x14 (R/W  32) Interrupt Flag REGISTER */
  __IO  uint32_t                       FCW_INTFLAGSET;     /* Offset: 0x18 (R/W  32) Interrupt Flag Set REGISTER */
  __I   uint32_t                       FCW_STATUS;         /* Offset: 0x1C (R/   32) Status REGISTER */
  __IO  uint32_t                       FCW_KEY;            /* Offset: 0x20 (R/W  32) Feature Unlock Key REGISTER */
  __IO  uint32_t                       FCW_ADDR;           /* Offset: 0x24 (R/W  32) Flash Destination Address REGISTER */
  __IO  uint32_t                       FCW_SRCADDR;        /* Offset: 0x28 (R/W  32) System Source Address REGISTER */
  __IO  uint32_t                       FCW_DATA[4];        /* Offset: 0x2C (R/W  32) Flash Write Data n REGISTER */
  __I   uint8_t                        Reserved1[0x10];
  __IO  uint32_t                       FCW_SWAP;           /* Offset: 0x4C (R/W  32) NVM Panel Swap REGISTER */
  __IO  uint32_t                       FCW_PWP[4];         /* Offset: 0x50 (R/W  32) PFM Write Protect Region n REGISTER */
  __I   uint8_t                        Reserved2[0x10];
  __IO  uint32_t                       FCW_LBWP;           /* Offset: 0x70 (R/W  32) Lower BFM Write Protect REGISTER */
  __IO  uint32_t                       FCW_UBWP;           /* Offset: 0x74 (R/W  32) Upper BFM Write Protect REGISTER */
  __IO  uint32_t                       FCW_UOWP;           /* Offset: 0x78 (R/W  32) User OTP Write protection REGISTER */
  __IO  uint32_t                       FCW_CWP;            /* Offset: 0x7C (R/W  32) CFM Page Write Protect REGISTER */
} fcw_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMGC00_FCW_COMPONENT_H_ */
