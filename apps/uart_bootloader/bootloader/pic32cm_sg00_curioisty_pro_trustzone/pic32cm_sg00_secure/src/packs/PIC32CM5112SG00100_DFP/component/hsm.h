/*
 * Component description for HSM
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

/*  file generated from device description file (ATDF) version 2024-11-05T16:47:53Z  */
#ifndef _PIC32CMSG00_HSM_COMPONENT_H_
#define _PIC32CMSG00_HSM_COMPONENT_H_

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR HSM                       */
/* ************************************************************************** */

/* -------- HSM_CTRLA : (HSM Offset: 0x00) (R/W 32) Control Register A -------- */
#define HSM_CTRLA_RESETVALUE                  _UINT32_(0x00)                                       /*  (HSM_CTRLA) Control Register A  Reset Value */

#define HSM_CTRLA_SWRST_Pos                   _UINT32_(0)                                          /* (HSM_CTRLA) Software Reset1 = Reset registers and internal state0 = No effect Position */
#define HSM_CTRLA_SWRST_Msk                   (_UINT32_(0x1) << HSM_CTRLA_SWRST_Pos)               /* (HSM_CTRLA) Software Reset1 = Reset registers and internal state0 = No effect Mask */
#define HSM_CTRLA_SWRST(value)                (HSM_CTRLA_SWRST_Msk & (_UINT32_(value) << HSM_CTRLA_SWRST_Pos)) /* Assignment of value for SWRST in the HSM_CTRLA register */
#define HSM_CTRLA_ENABLE_Pos                  _UINT32_(1)                                          /* (HSM_CTRLA) Macro/Clock Enable bit Position */
#define HSM_CTRLA_ENABLE_Msk                  (_UINT32_(0x1) << HSM_CTRLA_ENABLE_Pos)              /* (HSM_CTRLA) Macro/Clock Enable bit Mask */
#define HSM_CTRLA_ENABLE(value)               (HSM_CTRLA_ENABLE_Msk & (_UINT32_(value) << HSM_CTRLA_ENABLE_Pos)) /* Assignment of value for ENABLE in the HSM_CTRLA register */
#define   HSM_CTRLA_ENABLE_0_Val              _UINT32_(0x0)                                        /* (HSM_CTRLA) HSM clock is not requested and macros is disabled.  */
#define   HSM_CTRLA_ENABLE_1_Val              _UINT32_(0x1)                                        /* (HSM_CTRLA) HSM clock is requested and macro is enabled.  */
#define HSM_CTRLA_ENABLE_0                    (HSM_CTRLA_ENABLE_0_Val << HSM_CTRLA_ENABLE_Pos)     /* (HSM_CTRLA) HSM clock is not requested and macros is disabled. Position */
#define HSM_CTRLA_ENABLE_1                    (HSM_CTRLA_ENABLE_1_Val << HSM_CTRLA_ENABLE_Pos)     /* (HSM_CTRLA) HSM clock is requested and macro is enabled. Position */
#define HSM_CTRLA_PRIV_Pos                    _UINT32_(2)                                          /* (HSM_CTRLA) Privileged Access Only - This bit affects all Wrapper and EIP registers. Position */
#define HSM_CTRLA_PRIV_Msk                    (_UINT32_(0x1) << HSM_CTRLA_PRIV_Pos)                /* (HSM_CTRLA) Privileged Access Only - This bit affects all Wrapper and EIP registers. Mask */
#define HSM_CTRLA_PRIV(value)                 (HSM_CTRLA_PRIV_Msk & (_UINT32_(value) << HSM_CTRLA_PRIV_Pos)) /* Assignment of value for PRIV in the HSM_CTRLA register */
#define   HSM_CTRLA_PRIV_0_Val                _UINT32_(0x0)                                        /* (HSM_CTRLA) HSM registers accessible in privileged and unprivileged modes. Master Requests are NOT privileged  */
#define   HSM_CTRLA_PRIV_1_Val                _UINT32_(0x1)                                        /* (HSM_CTRLA) HSM registers only accessible in privileged mode.  Master Requests are also privileged.  */
#define HSM_CTRLA_PRIV_0                      (HSM_CTRLA_PRIV_0_Val << HSM_CTRLA_PRIV_Pos)         /* (HSM_CTRLA) HSM registers accessible in privileged and unprivileged modes. Master Requests are NOT privileged Position */
#define HSM_CTRLA_PRIV_1                      (HSM_CTRLA_PRIV_1_Val << HSM_CTRLA_PRIV_Pos)         /* (HSM_CTRLA) HSM registers only accessible in privileged mode.  Master Requests are also privileged. Position */
#define HSM_CTRLA_RUNSTDBY_Pos                _UINT32_(6)                                          /* (HSM_CTRLA) Run In Standby bit Position */
#define HSM_CTRLA_RUNSTDBY_Msk                (_UINT32_(0x1) << HSM_CTRLA_RUNSTDBY_Pos)            /* (HSM_CTRLA) Run In Standby bit Mask */
#define HSM_CTRLA_RUNSTDBY(value)             (HSM_CTRLA_RUNSTDBY_Msk & (_UINT32_(value) << HSM_CTRLA_RUNSTDBY_Pos)) /* Assignment of value for RUNSTDBY in the HSM_CTRLA register */
#define   HSM_CTRLA_RUNSTDBY_0_Val            _UINT32_(0x0)                                        /* (HSM_CTRLA) HSM clock is disabled in Standby Sleep mode, clock requests are de-asserted after any pending bus transactions or requests are completed.  */
#define   HSM_CTRLA_RUNSTDBY_1_Val            _UINT32_(0x1)                                        /* (HSM_CTRLA) If enabled, the HSM clock remains requested in Standby Sleep mode.  */
#define HSM_CTRLA_RUNSTDBY_0                  (HSM_CTRLA_RUNSTDBY_0_Val << HSM_CTRLA_RUNSTDBY_Pos) /* (HSM_CTRLA) HSM clock is disabled in Standby Sleep mode, clock requests are de-asserted after any pending bus transactions or requests are completed. Position */
#define HSM_CTRLA_RUNSTDBY_1                  (HSM_CTRLA_RUNSTDBY_1_Val << HSM_CTRLA_RUNSTDBY_Pos) /* (HSM_CTRLA) If enabled, the HSM clock remains requested in Standby Sleep mode. Position */
#define HSM_CTRLA_Msk                         _UINT32_(0x00000047)                                 /* (HSM_CTRLA) Register Mask  */


/* -------- HSM_STATUSA : (HSM Offset: 0x38) ( R/ 32) STATUS Register A -------- */
#define HSM_STATUSA_RESETVALUE                _UINT32_(0x00)                                       /*  (HSM_STATUSA) STATUS Register A  Reset Value */

#define HSM_STATUSA_OTPLOCK_Pos               _UINT32_(0)                                          /* (HSM_STATUSA) OTP Lock bit Position */
#define HSM_STATUSA_OTPLOCK_Msk               (_UINT32_(0x1) << HSM_STATUSA_OTPLOCK_Pos)           /* (HSM_STATUSA) OTP Lock bit Mask */
#define HSM_STATUSA_OTPLOCK(value)            (HSM_STATUSA_OTPLOCK_Msk & (_UINT32_(value) << HSM_STATUSA_OTPLOCK_Pos)) /* Assignment of value for OTPLOCK in the HSM_STATUSA register */
#define   HSM_STATUSA_OTPLOCK_1_Val           _UINT32_(0x1)                                        /* (HSM_STATUSA) OTP lock bit set. Device not in IC manufacturing.  */
#define HSM_STATUSA_OTPLOCK_1                 (HSM_STATUSA_OTPLOCK_1_Val << HSM_STATUSA_OTPLOCK_Pos) /* (HSM_STATUSA) OTP lock bit set. Device not in IC manufacturing. Position */
#define HSM_STATUSA_Msk                       _UINT32_(0x00000001)                                 /* (HSM_STATUSA) Register Mask  */


/* -------- HSM_SYNCBUSY : (HSM Offset: 0x5C) ( R/ 32) SYNCBUSY Register -------- */
#define HSM_SYNCBUSY_RESETVALUE               _UINT32_(0x00)                                       /*  (HSM_SYNCBUSY) SYNCBUSY Register  Reset Value */

#define HSM_SYNCBUSY_SWRST_Pos                _UINT32_(0)                                          /* (HSM_SYNCBUSY) Software Reset Synchronization Busy1 = SWRST synchronization is busy0 = SWRST synchronization is NOT busy Position */
#define HSM_SYNCBUSY_SWRST_Msk                (_UINT32_(0x1) << HSM_SYNCBUSY_SWRST_Pos)            /* (HSM_SYNCBUSY) Software Reset Synchronization Busy1 = SWRST synchronization is busy0 = SWRST synchronization is NOT busy Mask */
#define HSM_SYNCBUSY_SWRST(value)             (HSM_SYNCBUSY_SWRST_Msk & (_UINT32_(value) << HSM_SYNCBUSY_SWRST_Pos)) /* Assignment of value for SWRST in the HSM_SYNCBUSY register */
#define HSM_SYNCBUSY_ENABLE_Pos               _UINT32_(1)                                          /* (HSM_SYNCBUSY) Macro Enable Synchronization Busy Position */
#define HSM_SYNCBUSY_ENABLE_Msk               (_UINT32_(0x1) << HSM_SYNCBUSY_ENABLE_Pos)           /* (HSM_SYNCBUSY) Macro Enable Synchronization Busy Mask */
#define HSM_SYNCBUSY_ENABLE(value)            (HSM_SYNCBUSY_ENABLE_Msk & (_UINT32_(value) << HSM_SYNCBUSY_ENABLE_Pos)) /* Assignment of value for ENABLE in the HSM_SYNCBUSY register */
#define   HSM_SYNCBUSY_ENABLE_0_Val           _UINT32_(0x0)                                        /* (HSM_SYNCBUSY) ENABLE synchronization is NOT busy.  */
#define   HSM_SYNCBUSY_ENABLE_1_Val           _UINT32_(0x1)                                        /* (HSM_SYNCBUSY) ENABLE synchronization is busy.  */
#define HSM_SYNCBUSY_ENABLE_0                 (HSM_SYNCBUSY_ENABLE_0_Val << HSM_SYNCBUSY_ENABLE_Pos) /* (HSM_SYNCBUSY) ENABLE synchronization is NOT busy. Position */
#define HSM_SYNCBUSY_ENABLE_1                 (HSM_SYNCBUSY_ENABLE_1_Val << HSM_SYNCBUSY_ENABLE_Pos) /* (HSM_SYNCBUSY) ENABLE synchronization is busy. Position */
#define HSM_SYNCBUSY_Msk                      _UINT32_(0x00000003)                                 /* (HSM_SYNCBUSY) Register Mask  */


/* -------- HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_LSB : (HSM Offset: 0x10000) (R/W 32)  -------- */
#define HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_LSB_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_LSB)   Reset Value */

#define HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_LSB_FETCH_ADDR_LSB_Pos _UINT32_(0)                                          /* (HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_LSB)  Position */
#define HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_LSB_FETCH_ADDR_LSB_Msk (_UINT32_(0xFFFFFFFF) << HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_LSB_FETCH_ADDR_LSB_Pos) /* (HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_LSB)  Mask */
#define HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_LSB_FETCH_ADDR_LSB(value) (HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_LSB_FETCH_ADDR_LSB_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_LSB_FETCH_ADDR_LSB_Pos)) /* Assignment of value for FETCH_ADDR_LSB in the HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_LSB register */
#define HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_LSB_Msk _UINT32_(0xFFFFFFFF)                                 /* (HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_LSB) Register Mask  */


/* -------- HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_MSB : (HSM Offset: 0x10004) (R/W 32)  -------- */
#define HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_MSB_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_MSB)   Reset Value */

#define HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_MSB_FETCH_ADDR_MSB_Pos _UINT32_(0)                                          /* (HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_MSB)  Position */
#define HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_MSB_FETCH_ADDR_MSB_Msk (_UINT32_(0xFFFFFFFF) << HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_MSB_FETCH_ADDR_MSB_Pos) /* (HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_MSB)  Mask */
#define HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_MSB_FETCH_ADDR_MSB(value) (HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_MSB_FETCH_ADDR_MSB_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_MSB_FETCH_ADDR_MSB_Pos)) /* Assignment of value for FETCH_ADDR_MSB in the HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_MSB register */
#define HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_MSB_Msk _UINT32_(0xFFFFFFFF)                                 /* (HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_MSB) Register Mask  */


/* -------- HSM_CryptoMaster_DMA_Registers__FETCH_LEN : (HSM Offset: 0x10008) (R/W 32)  -------- */
#define HSM_CryptoMaster_DMA_Registers__FETCH_LEN_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_CryptoMaster_DMA_Registers__FETCH_LEN)   Reset Value */

#define HSM_CryptoMaster_DMA_Registers__FETCH_LEN_FETCH_LEN_Pos _UINT32_(0)                                          /* (HSM_CryptoMaster_DMA_Registers__FETCH_LEN)  Position */
#define HSM_CryptoMaster_DMA_Registers__FETCH_LEN_FETCH_LEN_Msk (_UINT32_(0xFFFFFFF) << HSM_CryptoMaster_DMA_Registers__FETCH_LEN_FETCH_LEN_Pos) /* (HSM_CryptoMaster_DMA_Registers__FETCH_LEN)  Mask */
#define HSM_CryptoMaster_DMA_Registers__FETCH_LEN_FETCH_LEN(value) (HSM_CryptoMaster_DMA_Registers__FETCH_LEN_FETCH_LEN_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__FETCH_LEN_FETCH_LEN_Pos)) /* Assignment of value for FETCH_LEN in the HSM_CryptoMaster_DMA_Registers__FETCH_LEN register */
#define HSM_CryptoMaster_DMA_Registers__FETCH_LEN_FETCH_CSTADDR_Pos _UINT32_(28)                                         /* (HSM_CryptoMaster_DMA_Registers__FETCH_LEN)  Position */
#define HSM_CryptoMaster_DMA_Registers__FETCH_LEN_FETCH_CSTADDR_Msk (_UINT32_(0x1) << HSM_CryptoMaster_DMA_Registers__FETCH_LEN_FETCH_CSTADDR_Pos) /* (HSM_CryptoMaster_DMA_Registers__FETCH_LEN)  Mask */
#define HSM_CryptoMaster_DMA_Registers__FETCH_LEN_FETCH_CSTADDR(value) (HSM_CryptoMaster_DMA_Registers__FETCH_LEN_FETCH_CSTADDR_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__FETCH_LEN_FETCH_CSTADDR_Pos)) /* Assignment of value for FETCH_CSTADDR in the HSM_CryptoMaster_DMA_Registers__FETCH_LEN register */
#define HSM_CryptoMaster_DMA_Registers__FETCH_LEN_FETCH_REALIGN_Pos _UINT32_(29)                                         /* (HSM_CryptoMaster_DMA_Registers__FETCH_LEN)  Position */
#define HSM_CryptoMaster_DMA_Registers__FETCH_LEN_FETCH_REALIGN_Msk (_UINT32_(0x1) << HSM_CryptoMaster_DMA_Registers__FETCH_LEN_FETCH_REALIGN_Pos) /* (HSM_CryptoMaster_DMA_Registers__FETCH_LEN)  Mask */
#define HSM_CryptoMaster_DMA_Registers__FETCH_LEN_FETCH_REALIGN(value) (HSM_CryptoMaster_DMA_Registers__FETCH_LEN_FETCH_REALIGN_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__FETCH_LEN_FETCH_REALIGN_Pos)) /* Assignment of value for FETCH_REALIGN in the HSM_CryptoMaster_DMA_Registers__FETCH_LEN register */
#define HSM_CryptoMaster_DMA_Registers__FETCH_LEN_FETCH_ZPADDING_Pos _UINT32_(30)                                         /* (HSM_CryptoMaster_DMA_Registers__FETCH_LEN)  Position */
#define HSM_CryptoMaster_DMA_Registers__FETCH_LEN_FETCH_ZPADDING_Msk (_UINT32_(0x1) << HSM_CryptoMaster_DMA_Registers__FETCH_LEN_FETCH_ZPADDING_Pos) /* (HSM_CryptoMaster_DMA_Registers__FETCH_LEN)  Mask */
#define HSM_CryptoMaster_DMA_Registers__FETCH_LEN_FETCH_ZPADDING(value) (HSM_CryptoMaster_DMA_Registers__FETCH_LEN_FETCH_ZPADDING_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__FETCH_LEN_FETCH_ZPADDING_Pos)) /* Assignment of value for FETCH_ZPADDING in the HSM_CryptoMaster_DMA_Registers__FETCH_LEN register */
#define HSM_CryptoMaster_DMA_Registers__FETCH_LEN_Msk _UINT32_(0x7FFFFFFF)                                 /* (HSM_CryptoMaster_DMA_Registers__FETCH_LEN) Register Mask  */


/* -------- HSM_CryptoMaster_DMA_Registers__FETCH_TAG : (HSM Offset: 0x1000C) (R/W 32)  -------- */
#define HSM_CryptoMaster_DMA_Registers__FETCH_TAG_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_CryptoMaster_DMA_Registers__FETCH_TAG)   Reset Value */

#define HSM_CryptoMaster_DMA_Registers__FETCH_TAG_FETCH_TAG_Pos _UINT32_(0)                                          /* (HSM_CryptoMaster_DMA_Registers__FETCH_TAG)  Position */
#define HSM_CryptoMaster_DMA_Registers__FETCH_TAG_FETCH_TAG_Msk (_UINT32_(0xFFFFFFFF) << HSM_CryptoMaster_DMA_Registers__FETCH_TAG_FETCH_TAG_Pos) /* (HSM_CryptoMaster_DMA_Registers__FETCH_TAG)  Mask */
#define HSM_CryptoMaster_DMA_Registers__FETCH_TAG_FETCH_TAG(value) (HSM_CryptoMaster_DMA_Registers__FETCH_TAG_FETCH_TAG_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__FETCH_TAG_FETCH_TAG_Pos)) /* Assignment of value for FETCH_TAG in the HSM_CryptoMaster_DMA_Registers__FETCH_TAG register */
#define HSM_CryptoMaster_DMA_Registers__FETCH_TAG_Msk _UINT32_(0xFFFFFFFF)                                 /* (HSM_CryptoMaster_DMA_Registers__FETCH_TAG) Register Mask  */


/* -------- HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_LSB : (HSM Offset: 0x10010) (R/W 32)  -------- */
#define HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_LSB_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_LSB)   Reset Value */

#define HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_LSB_PUSH_ADDR_LSB_Pos _UINT32_(0)                                          /* (HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_LSB)  Position */
#define HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_LSB_PUSH_ADDR_LSB_Msk (_UINT32_(0xFFFFFFFF) << HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_LSB_PUSH_ADDR_LSB_Pos) /* (HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_LSB)  Mask */
#define HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_LSB_PUSH_ADDR_LSB(value) (HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_LSB_PUSH_ADDR_LSB_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_LSB_PUSH_ADDR_LSB_Pos)) /* Assignment of value for PUSH_ADDR_LSB in the HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_LSB register */
#define HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_LSB_Msk _UINT32_(0xFFFFFFFF)                                 /* (HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_LSB) Register Mask  */


/* -------- HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_MSB : (HSM Offset: 0x10014) (R/W 32)  -------- */
#define HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_MSB_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_MSB)   Reset Value */

#define HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_MSB_PUSH_ADDR_MSB_Pos _UINT32_(0)                                          /* (HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_MSB)  Position */
#define HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_MSB_PUSH_ADDR_MSB_Msk (_UINT32_(0xFFFFFFFF) << HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_MSB_PUSH_ADDR_MSB_Pos) /* (HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_MSB)  Mask */
#define HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_MSB_PUSH_ADDR_MSB(value) (HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_MSB_PUSH_ADDR_MSB_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_MSB_PUSH_ADDR_MSB_Pos)) /* Assignment of value for PUSH_ADDR_MSB in the HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_MSB register */
#define HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_MSB_Msk _UINT32_(0xFFFFFFFF)                                 /* (HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_MSB) Register Mask  */


/* -------- HSM_CryptoMaster_DMA_Registers__PUSH_LEN : (HSM Offset: 0x10018) (R/W 32)  -------- */
#define HSM_CryptoMaster_DMA_Registers__PUSH_LEN_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_CryptoMaster_DMA_Registers__PUSH_LEN)   Reset Value */

#define HSM_CryptoMaster_DMA_Registers__PUSH_LEN_PUSH_LEN_Pos _UINT32_(0)                                          /* (HSM_CryptoMaster_DMA_Registers__PUSH_LEN)  Position */
#define HSM_CryptoMaster_DMA_Registers__PUSH_LEN_PUSH_LEN_Msk (_UINT32_(0xFFFFFFF) << HSM_CryptoMaster_DMA_Registers__PUSH_LEN_PUSH_LEN_Pos) /* (HSM_CryptoMaster_DMA_Registers__PUSH_LEN)  Mask */
#define HSM_CryptoMaster_DMA_Registers__PUSH_LEN_PUSH_LEN(value) (HSM_CryptoMaster_DMA_Registers__PUSH_LEN_PUSH_LEN_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__PUSH_LEN_PUSH_LEN_Pos)) /* Assignment of value for PUSH_LEN in the HSM_CryptoMaster_DMA_Registers__PUSH_LEN register */
#define HSM_CryptoMaster_DMA_Registers__PUSH_LEN_PUSH_CSTADDR_Pos _UINT32_(28)                                         /* (HSM_CryptoMaster_DMA_Registers__PUSH_LEN)  Position */
#define HSM_CryptoMaster_DMA_Registers__PUSH_LEN_PUSH_CSTADDR_Msk (_UINT32_(0x1) << HSM_CryptoMaster_DMA_Registers__PUSH_LEN_PUSH_CSTADDR_Pos) /* (HSM_CryptoMaster_DMA_Registers__PUSH_LEN)  Mask */
#define HSM_CryptoMaster_DMA_Registers__PUSH_LEN_PUSH_CSTADDR(value) (HSM_CryptoMaster_DMA_Registers__PUSH_LEN_PUSH_CSTADDR_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__PUSH_LEN_PUSH_CSTADDR_Pos)) /* Assignment of value for PUSH_CSTADDR in the HSM_CryptoMaster_DMA_Registers__PUSH_LEN register */
#define HSM_CryptoMaster_DMA_Registers__PUSH_LEN_PUSH_REALIGN_Pos _UINT32_(29)                                         /* (HSM_CryptoMaster_DMA_Registers__PUSH_LEN)  Position */
#define HSM_CryptoMaster_DMA_Registers__PUSH_LEN_PUSH_REALIGN_Msk (_UINT32_(0x1) << HSM_CryptoMaster_DMA_Registers__PUSH_LEN_PUSH_REALIGN_Pos) /* (HSM_CryptoMaster_DMA_Registers__PUSH_LEN)  Mask */
#define HSM_CryptoMaster_DMA_Registers__PUSH_LEN_PUSH_REALIGN(value) (HSM_CryptoMaster_DMA_Registers__PUSH_LEN_PUSH_REALIGN_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__PUSH_LEN_PUSH_REALIGN_Pos)) /* Assignment of value for PUSH_REALIGN in the HSM_CryptoMaster_DMA_Registers__PUSH_LEN register */
#define HSM_CryptoMaster_DMA_Registers__PUSH_LEN_PUSH_DISCARD_Pos _UINT32_(30)                                         /* (HSM_CryptoMaster_DMA_Registers__PUSH_LEN)  Position */
#define HSM_CryptoMaster_DMA_Registers__PUSH_LEN_PUSH_DISCARD_Msk (_UINT32_(0x1) << HSM_CryptoMaster_DMA_Registers__PUSH_LEN_PUSH_DISCARD_Pos) /* (HSM_CryptoMaster_DMA_Registers__PUSH_LEN)  Mask */
#define HSM_CryptoMaster_DMA_Registers__PUSH_LEN_PUSH_DISCARD(value) (HSM_CryptoMaster_DMA_Registers__PUSH_LEN_PUSH_DISCARD_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__PUSH_LEN_PUSH_DISCARD_Pos)) /* Assignment of value for PUSH_DISCARD in the HSM_CryptoMaster_DMA_Registers__PUSH_LEN register */
#define HSM_CryptoMaster_DMA_Registers__PUSH_LEN_Msk _UINT32_(0x7FFFFFFF)                                 /* (HSM_CryptoMaster_DMA_Registers__PUSH_LEN) Register Mask  */


/* -------- HSM_CryptoMaster_DMA_Registers__INT_EN : (HSM Offset: 0x1001C) (R/W 32)  -------- */
#define HSM_CryptoMaster_DMA_Registers__INT_EN_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_CryptoMaster_DMA_Registers__INT_EN)   Reset Value */

#define HSM_CryptoMaster_DMA_Registers__INT_EN_INT_EN_Pos _UINT32_(0)                                          /* (HSM_CryptoMaster_DMA_Registers__INT_EN)  Position */
#define HSM_CryptoMaster_DMA_Registers__INT_EN_INT_EN_Msk (_UINT32_(0x3F) << HSM_CryptoMaster_DMA_Registers__INT_EN_INT_EN_Pos) /* (HSM_CryptoMaster_DMA_Registers__INT_EN)  Mask */
#define HSM_CryptoMaster_DMA_Registers__INT_EN_INT_EN(value) (HSM_CryptoMaster_DMA_Registers__INT_EN_INT_EN_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__INT_EN_INT_EN_Pos)) /* Assignment of value for INT_EN in the HSM_CryptoMaster_DMA_Registers__INT_EN register */
#define HSM_CryptoMaster_DMA_Registers__INT_EN_Msk _UINT32_(0x0000003F)                                 /* (HSM_CryptoMaster_DMA_Registers__INT_EN) Register Mask  */


/* -------- HSM_CryptoMaster_DMA_Registers__INT_ENSET : (HSM Offset: 0x10020) ( /W 32)  -------- */
#define HSM_CryptoMaster_DMA_Registers__INT_ENSET_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_CryptoMaster_DMA_Registers__INT_ENSET)   Reset Value */

#define HSM_CryptoMaster_DMA_Registers__INT_ENSET_INT_ENSET_Pos _UINT32_(0)                                          /* (HSM_CryptoMaster_DMA_Registers__INT_ENSET)  Position */
#define HSM_CryptoMaster_DMA_Registers__INT_ENSET_INT_ENSET_Msk (_UINT32_(0x3F) << HSM_CryptoMaster_DMA_Registers__INT_ENSET_INT_ENSET_Pos) /* (HSM_CryptoMaster_DMA_Registers__INT_ENSET)  Mask */
#define HSM_CryptoMaster_DMA_Registers__INT_ENSET_INT_ENSET(value) (HSM_CryptoMaster_DMA_Registers__INT_ENSET_INT_ENSET_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__INT_ENSET_INT_ENSET_Pos)) /* Assignment of value for INT_ENSET in the HSM_CryptoMaster_DMA_Registers__INT_ENSET register */
#define HSM_CryptoMaster_DMA_Registers__INT_ENSET_Msk _UINT32_(0x0000003F)                                 /* (HSM_CryptoMaster_DMA_Registers__INT_ENSET) Register Mask  */


/* -------- HSM_CryptoMaster_DMA_Registers__INT_ENCLR : (HSM Offset: 0x10024) ( /W 32)  -------- */
#define HSM_CryptoMaster_DMA_Registers__INT_ENCLR_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_CryptoMaster_DMA_Registers__INT_ENCLR)   Reset Value */

#define HSM_CryptoMaster_DMA_Registers__INT_ENCLR_INT_ENCLR_Pos _UINT32_(0)                                          /* (HSM_CryptoMaster_DMA_Registers__INT_ENCLR)  Position */
#define HSM_CryptoMaster_DMA_Registers__INT_ENCLR_INT_ENCLR_Msk (_UINT32_(0x3F) << HSM_CryptoMaster_DMA_Registers__INT_ENCLR_INT_ENCLR_Pos) /* (HSM_CryptoMaster_DMA_Registers__INT_ENCLR)  Mask */
#define HSM_CryptoMaster_DMA_Registers__INT_ENCLR_INT_ENCLR(value) (HSM_CryptoMaster_DMA_Registers__INT_ENCLR_INT_ENCLR_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__INT_ENCLR_INT_ENCLR_Pos)) /* Assignment of value for INT_ENCLR in the HSM_CryptoMaster_DMA_Registers__INT_ENCLR register */
#define HSM_CryptoMaster_DMA_Registers__INT_ENCLR_Msk _UINT32_(0x0000003F)                                 /* (HSM_CryptoMaster_DMA_Registers__INT_ENCLR) Register Mask  */


/* -------- HSM_CryptoMaster_DMA_Registers__INT_STATRAW : (HSM Offset: 0x10028) ( R/ 32)  -------- */
#define HSM_CryptoMaster_DMA_Registers__INT_STATRAW_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_CryptoMaster_DMA_Registers__INT_STATRAW)   Reset Value */

#define HSM_CryptoMaster_DMA_Registers__INT_STATRAW_INT_STATRAW_Pos _UINT32_(0)                                          /* (HSM_CryptoMaster_DMA_Registers__INT_STATRAW)  Position */
#define HSM_CryptoMaster_DMA_Registers__INT_STATRAW_INT_STATRAW_Msk (_UINT32_(0x3F) << HSM_CryptoMaster_DMA_Registers__INT_STATRAW_INT_STATRAW_Pos) /* (HSM_CryptoMaster_DMA_Registers__INT_STATRAW)  Mask */
#define HSM_CryptoMaster_DMA_Registers__INT_STATRAW_INT_STATRAW(value) (HSM_CryptoMaster_DMA_Registers__INT_STATRAW_INT_STATRAW_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__INT_STATRAW_INT_STATRAW_Pos)) /* Assignment of value for INT_STATRAW in the HSM_CryptoMaster_DMA_Registers__INT_STATRAW register */
#define HSM_CryptoMaster_DMA_Registers__INT_STATRAW_Msk _UINT32_(0x0000003F)                                 /* (HSM_CryptoMaster_DMA_Registers__INT_STATRAW) Register Mask  */


/* -------- HSM_CryptoMaster_DMA_Registers__INT_STAT : (HSM Offset: 0x1002C) ( R/ 32)  -------- */
#define HSM_CryptoMaster_DMA_Registers__INT_STAT_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_CryptoMaster_DMA_Registers__INT_STAT)   Reset Value */

#define HSM_CryptoMaster_DMA_Registers__INT_STAT_INT_STAT_Pos _UINT32_(0)                                          /* (HSM_CryptoMaster_DMA_Registers__INT_STAT)  Position */
#define HSM_CryptoMaster_DMA_Registers__INT_STAT_INT_STAT_Msk (_UINT32_(0x3F) << HSM_CryptoMaster_DMA_Registers__INT_STAT_INT_STAT_Pos) /* (HSM_CryptoMaster_DMA_Registers__INT_STAT)  Mask */
#define HSM_CryptoMaster_DMA_Registers__INT_STAT_INT_STAT(value) (HSM_CryptoMaster_DMA_Registers__INT_STAT_INT_STAT_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__INT_STAT_INT_STAT_Pos)) /* Assignment of value for INT_STAT in the HSM_CryptoMaster_DMA_Registers__INT_STAT register */
#define HSM_CryptoMaster_DMA_Registers__INT_STAT_Msk _UINT32_(0x0000003F)                                 /* (HSM_CryptoMaster_DMA_Registers__INT_STAT) Register Mask  */


/* -------- HSM_CryptoMaster_DMA_Registers__INT_STATCLR : (HSM Offset: 0x10030) ( /W 32)  -------- */
#define HSM_CryptoMaster_DMA_Registers__INT_STATCLR_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_CryptoMaster_DMA_Registers__INT_STATCLR)   Reset Value */

#define HSM_CryptoMaster_DMA_Registers__INT_STATCLR_INT_STATCLR_Pos _UINT32_(0)                                          /* (HSM_CryptoMaster_DMA_Registers__INT_STATCLR)  Position */
#define HSM_CryptoMaster_DMA_Registers__INT_STATCLR_INT_STATCLR_Msk (_UINT32_(0x3F) << HSM_CryptoMaster_DMA_Registers__INT_STATCLR_INT_STATCLR_Pos) /* (HSM_CryptoMaster_DMA_Registers__INT_STATCLR)  Mask */
#define HSM_CryptoMaster_DMA_Registers__INT_STATCLR_INT_STATCLR(value) (HSM_CryptoMaster_DMA_Registers__INT_STATCLR_INT_STATCLR_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__INT_STATCLR_INT_STATCLR_Pos)) /* Assignment of value for INT_STATCLR in the HSM_CryptoMaster_DMA_Registers__INT_STATCLR register */
#define HSM_CryptoMaster_DMA_Registers__INT_STATCLR_Msk _UINT32_(0x0000003F)                                 /* (HSM_CryptoMaster_DMA_Registers__INT_STATCLR) Register Mask  */


/* -------- HSM_CryptoMaster_DMA_Registers__CONFIG : (HSM Offset: 0x10034) (R/W 32)  -------- */
#define HSM_CryptoMaster_DMA_Registers__CONFIG_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_CryptoMaster_DMA_Registers__CONFIG)   Reset Value */

#define HSM_CryptoMaster_DMA_Registers__CONFIG_FETCH_CTRL_INDIRECT_Pos _UINT32_(0)                                          /* (HSM_CryptoMaster_DMA_Registers__CONFIG)  Position */
#define HSM_CryptoMaster_DMA_Registers__CONFIG_FETCH_CTRL_INDIRECT_Msk (_UINT32_(0x1) << HSM_CryptoMaster_DMA_Registers__CONFIG_FETCH_CTRL_INDIRECT_Pos) /* (HSM_CryptoMaster_DMA_Registers__CONFIG)  Mask */
#define HSM_CryptoMaster_DMA_Registers__CONFIG_FETCH_CTRL_INDIRECT(value) (HSM_CryptoMaster_DMA_Registers__CONFIG_FETCH_CTRL_INDIRECT_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__CONFIG_FETCH_CTRL_INDIRECT_Pos)) /* Assignment of value for FETCH_CTRL_INDIRECT in the HSM_CryptoMaster_DMA_Registers__CONFIG register */
#define HSM_CryptoMaster_DMA_Registers__CONFIG_PUSH_CTRL_INDIRECT_Pos _UINT32_(1)                                          /* (HSM_CryptoMaster_DMA_Registers__CONFIG)  Position */
#define HSM_CryptoMaster_DMA_Registers__CONFIG_PUSH_CTRL_INDIRECT_Msk (_UINT32_(0x1) << HSM_CryptoMaster_DMA_Registers__CONFIG_PUSH_CTRL_INDIRECT_Pos) /* (HSM_CryptoMaster_DMA_Registers__CONFIG)  Mask */
#define HSM_CryptoMaster_DMA_Registers__CONFIG_PUSH_CTRL_INDIRECT(value) (HSM_CryptoMaster_DMA_Registers__CONFIG_PUSH_CTRL_INDIRECT_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__CONFIG_PUSH_CTRL_INDIRECT_Pos)) /* Assignment of value for PUSH_CTRL_INDIRECT in the HSM_CryptoMaster_DMA_Registers__CONFIG register */
#define HSM_CryptoMaster_DMA_Registers__CONFIG_FETCH_STOP_Pos _UINT32_(2)                                          /* (HSM_CryptoMaster_DMA_Registers__CONFIG)  Position */
#define HSM_CryptoMaster_DMA_Registers__CONFIG_FETCH_STOP_Msk (_UINT32_(0x1) << HSM_CryptoMaster_DMA_Registers__CONFIG_FETCH_STOP_Pos) /* (HSM_CryptoMaster_DMA_Registers__CONFIG)  Mask */
#define HSM_CryptoMaster_DMA_Registers__CONFIG_FETCH_STOP(value) (HSM_CryptoMaster_DMA_Registers__CONFIG_FETCH_STOP_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__CONFIG_FETCH_STOP_Pos)) /* Assignment of value for FETCH_STOP in the HSM_CryptoMaster_DMA_Registers__CONFIG register */
#define HSM_CryptoMaster_DMA_Registers__CONFIG_PUSH_STOP_Pos _UINT32_(3)                                          /* (HSM_CryptoMaster_DMA_Registers__CONFIG)  Position */
#define HSM_CryptoMaster_DMA_Registers__CONFIG_PUSH_STOP_Msk (_UINT32_(0x1) << HSM_CryptoMaster_DMA_Registers__CONFIG_PUSH_STOP_Pos) /* (HSM_CryptoMaster_DMA_Registers__CONFIG)  Mask */
#define HSM_CryptoMaster_DMA_Registers__CONFIG_PUSH_STOP(value) (HSM_CryptoMaster_DMA_Registers__CONFIG_PUSH_STOP_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__CONFIG_PUSH_STOP_Pos)) /* Assignment of value for PUSH_STOP in the HSM_CryptoMaster_DMA_Registers__CONFIG register */
#define HSM_CryptoMaster_DMA_Registers__CONFIG_SOFT_RST_Pos _UINT32_(4)                                          /* (HSM_CryptoMaster_DMA_Registers__CONFIG)  Position */
#define HSM_CryptoMaster_DMA_Registers__CONFIG_SOFT_RST_Msk (_UINT32_(0x1) << HSM_CryptoMaster_DMA_Registers__CONFIG_SOFT_RST_Pos) /* (HSM_CryptoMaster_DMA_Registers__CONFIG)  Mask */
#define HSM_CryptoMaster_DMA_Registers__CONFIG_SOFT_RST(value) (HSM_CryptoMaster_DMA_Registers__CONFIG_SOFT_RST_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__CONFIG_SOFT_RST_Pos)) /* Assignment of value for SOFT_RST in the HSM_CryptoMaster_DMA_Registers__CONFIG register */
#define HSM_CryptoMaster_DMA_Registers__CONFIG_Msk _UINT32_(0x0000001F)                                 /* (HSM_CryptoMaster_DMA_Registers__CONFIG) Register Mask  */


/* -------- HSM_CryptoMaster_DMA_Registers__START : (HSM Offset: 0x10038) ( /W 32)  -------- */
#define HSM_CryptoMaster_DMA_Registers__START_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_CryptoMaster_DMA_Registers__START)   Reset Value */

#define HSM_CryptoMaster_DMA_Registers__START_START_FETCH_Pos _UINT32_(0)                                          /* (HSM_CryptoMaster_DMA_Registers__START)  Position */
#define HSM_CryptoMaster_DMA_Registers__START_START_FETCH_Msk (_UINT32_(0x1) << HSM_CryptoMaster_DMA_Registers__START_START_FETCH_Pos) /* (HSM_CryptoMaster_DMA_Registers__START)  Mask */
#define HSM_CryptoMaster_DMA_Registers__START_START_FETCH(value) (HSM_CryptoMaster_DMA_Registers__START_START_FETCH_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__START_START_FETCH_Pos)) /* Assignment of value for START_FETCH in the HSM_CryptoMaster_DMA_Registers__START register */
#define HSM_CryptoMaster_DMA_Registers__START_START_PUSH_Pos _UINT32_(1)                                          /* (HSM_CryptoMaster_DMA_Registers__START)  Position */
#define HSM_CryptoMaster_DMA_Registers__START_START_PUSH_Msk (_UINT32_(0x1) << HSM_CryptoMaster_DMA_Registers__START_START_PUSH_Pos) /* (HSM_CryptoMaster_DMA_Registers__START)  Mask */
#define HSM_CryptoMaster_DMA_Registers__START_START_PUSH(value) (HSM_CryptoMaster_DMA_Registers__START_START_PUSH_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__START_START_PUSH_Pos)) /* Assignment of value for START_PUSH in the HSM_CryptoMaster_DMA_Registers__START register */
#define HSM_CryptoMaster_DMA_Registers__START_Msk _UINT32_(0x00000003)                                 /* (HSM_CryptoMaster_DMA_Registers__START) Register Mask  */


/* -------- HSM_CryptoMaster_DMA_Registers__STATUS : (HSM Offset: 0x1003C) ( R/ 32)  -------- */
#define HSM_CryptoMaster_DMA_Registers__STATUS_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_CryptoMaster_DMA_Registers__STATUS)   Reset Value */

#define HSM_CryptoMaster_DMA_Registers__STATUS_FETCH_BUSY_Pos _UINT32_(0)                                          /* (HSM_CryptoMaster_DMA_Registers__STATUS)  Position */
#define HSM_CryptoMaster_DMA_Registers__STATUS_FETCH_BUSY_Msk (_UINT32_(0x1) << HSM_CryptoMaster_DMA_Registers__STATUS_FETCH_BUSY_Pos) /* (HSM_CryptoMaster_DMA_Registers__STATUS)  Mask */
#define HSM_CryptoMaster_DMA_Registers__STATUS_FETCH_BUSY(value) (HSM_CryptoMaster_DMA_Registers__STATUS_FETCH_BUSY_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__STATUS_FETCH_BUSY_Pos)) /* Assignment of value for FETCH_BUSY in the HSM_CryptoMaster_DMA_Registers__STATUS register */
#define HSM_CryptoMaster_DMA_Registers__STATUS_PUSH_BUSY_Pos _UINT32_(1)                                          /* (HSM_CryptoMaster_DMA_Registers__STATUS)  Position */
#define HSM_CryptoMaster_DMA_Registers__STATUS_PUSH_BUSY_Msk (_UINT32_(0x1) << HSM_CryptoMaster_DMA_Registers__STATUS_PUSH_BUSY_Pos) /* (HSM_CryptoMaster_DMA_Registers__STATUS)  Mask */
#define HSM_CryptoMaster_DMA_Registers__STATUS_PUSH_BUSY(value) (HSM_CryptoMaster_DMA_Registers__STATUS_PUSH_BUSY_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__STATUS_PUSH_BUSY_Pos)) /* Assignment of value for PUSH_BUSY in the HSM_CryptoMaster_DMA_Registers__STATUS register */
#define HSM_CryptoMaster_DMA_Registers__STATUS_FETCH_NOT_EMPTY_Pos _UINT32_(4)                                          /* (HSM_CryptoMaster_DMA_Registers__STATUS)  Position */
#define HSM_CryptoMaster_DMA_Registers__STATUS_FETCH_NOT_EMPTY_Msk (_UINT32_(0x1) << HSM_CryptoMaster_DMA_Registers__STATUS_FETCH_NOT_EMPTY_Pos) /* (HSM_CryptoMaster_DMA_Registers__STATUS)  Mask */
#define HSM_CryptoMaster_DMA_Registers__STATUS_FETCH_NOT_EMPTY(value) (HSM_CryptoMaster_DMA_Registers__STATUS_FETCH_NOT_EMPTY_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__STATUS_FETCH_NOT_EMPTY_Pos)) /* Assignment of value for FETCH_NOT_EMPTY in the HSM_CryptoMaster_DMA_Registers__STATUS register */
#define HSM_CryptoMaster_DMA_Registers__STATUS_PUSH_WAITINGFIFO_Pos _UINT32_(5)                                          /* (HSM_CryptoMaster_DMA_Registers__STATUS)  Position */
#define HSM_CryptoMaster_DMA_Registers__STATUS_PUSH_WAITINGFIFO_Msk (_UINT32_(0x1) << HSM_CryptoMaster_DMA_Registers__STATUS_PUSH_WAITINGFIFO_Pos) /* (HSM_CryptoMaster_DMA_Registers__STATUS)  Mask */
#define HSM_CryptoMaster_DMA_Registers__STATUS_PUSH_WAITINGFIFO(value) (HSM_CryptoMaster_DMA_Registers__STATUS_PUSH_WAITINGFIFO_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__STATUS_PUSH_WAITINGFIFO_Pos)) /* Assignment of value for PUSH_WAITINGFIFO in the HSM_CryptoMaster_DMA_Registers__STATUS register */
#define HSM_CryptoMaster_DMA_Registers__STATUS_SOFT_RST_BUSY_Pos _UINT32_(6)                                          /* (HSM_CryptoMaster_DMA_Registers__STATUS)  Position */
#define HSM_CryptoMaster_DMA_Registers__STATUS_SOFT_RST_BUSY_Msk (_UINT32_(0x1) << HSM_CryptoMaster_DMA_Registers__STATUS_SOFT_RST_BUSY_Pos) /* (HSM_CryptoMaster_DMA_Registers__STATUS)  Mask */
#define HSM_CryptoMaster_DMA_Registers__STATUS_SOFT_RST_BUSY(value) (HSM_CryptoMaster_DMA_Registers__STATUS_SOFT_RST_BUSY_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__STATUS_SOFT_RST_BUSY_Pos)) /* Assignment of value for SOFT_RST_BUSY in the HSM_CryptoMaster_DMA_Registers__STATUS register */
#define HSM_CryptoMaster_DMA_Registers__STATUS_PUSH_NBDATA_Pos _UINT32_(16)                                         /* (HSM_CryptoMaster_DMA_Registers__STATUS)  Position */
#define HSM_CryptoMaster_DMA_Registers__STATUS_PUSH_NBDATA_Msk (_UINT32_(0xFFFF) << HSM_CryptoMaster_DMA_Registers__STATUS_PUSH_NBDATA_Pos) /* (HSM_CryptoMaster_DMA_Registers__STATUS)  Mask */
#define HSM_CryptoMaster_DMA_Registers__STATUS_PUSH_NBDATA(value) (HSM_CryptoMaster_DMA_Registers__STATUS_PUSH_NBDATA_Msk & (_UINT32_(value) << HSM_CryptoMaster_DMA_Registers__STATUS_PUSH_NBDATA_Pos)) /* Assignment of value for PUSH_NBDATA in the HSM_CryptoMaster_DMA_Registers__STATUS register */
#define HSM_CryptoMaster_DMA_Registers__STATUS_Msk _UINT32_(0xFFFF0073)                                 /* (HSM_CryptoMaster_DMA_Registers__STATUS) Register Mask  */


/* -------- HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG : (HSM Offset: 0x10400) ( R/ 32)  -------- */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_RESETVALUE _UINT32_(0x611)                                      /*  (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG)   Reset Value */

#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA411_AES_INCLUDED_Pos _UINT32_(0)                                          /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG) Generic g_IncludeAES value. BA411E-AES IP included if set Position */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA411_AES_INCLUDED_Msk (_UINT32_(0x1) << HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA411_AES_INCLUDED_Pos) /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG) Generic g_IncludeAES value. BA411E-AES IP included if set Mask */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA411_AES_INCLUDED(value) (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA411_AES_INCLUDED_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA411_AES_INCLUDED_Pos)) /* Assignment of value for BA411_AES_INCLUDED in the HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG register */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA415_HP_AES_GCM_INCLUDED_Pos _UINT32_(1)                                          /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG) Generic g_IncludeAESGCM value. BA415-HP-AES-GCM IP included if set Position */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA415_HP_AES_GCM_INCLUDED_Msk (_UINT32_(0x1) << HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA415_HP_AES_GCM_INCLUDED_Pos) /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG) Generic g_IncludeAESGCM value. BA415-HP-AES-GCM IP included if set Mask */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA415_HP_AES_GCM_INCLUDED(value) (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA415_HP_AES_GCM_INCLUDED_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA415_HP_AES_GCM_INCLUDED_Pos)) /* Assignment of value for BA415_HP_AES_GCM_INCLUDED in the HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG register */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA416_HP_AES_XTS_INCLUDED_Pos _UINT32_(2)                                          /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG) Generic g_IncludeAESXTS value. BA416-HP-AES-XTS IP included if set Position */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA416_HP_AES_XTS_INCLUDED_Msk (_UINT32_(0x1) << HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA416_HP_AES_XTS_INCLUDED_Pos) /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG) Generic g_IncludeAESXTS value. BA416-HP-AES-XTS IP included if set Mask */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA416_HP_AES_XTS_INCLUDED(value) (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA416_HP_AES_XTS_INCLUDED_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA416_HP_AES_XTS_INCLUDED_Pos)) /* Assignment of value for BA416_HP_AES_XTS_INCLUDED in the HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG register */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA412_DES_INCLUDED_Pos _UINT32_(3)                                          /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG) Generic g_IncludeDES value. BA412-3DES IP included if set Position */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA412_DES_INCLUDED_Msk (_UINT32_(0x1) << HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA412_DES_INCLUDED_Pos) /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG) Generic g_IncludeDES value. BA412-3DES IP included if set Mask */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA412_DES_INCLUDED(value) (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA412_DES_INCLUDED_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA412_DES_INCLUDED_Pos)) /* Assignment of value for BA412_DES_INCLUDED in the HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG register */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA413_HASH_INCLUDED_Pos _UINT32_(4)                                          /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG) Generic g_IncludeHASH value. BA413-HASH IP included if set Position */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA413_HASH_INCLUDED_Msk (_UINT32_(0x1) << HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA413_HASH_INCLUDED_Pos) /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG) Generic g_IncludeHASH value. BA413-HASH IP included if set Mask */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA413_HASH_INCLUDED(value) (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA413_HASH_INCLUDED_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA413_HASH_INCLUDED_Pos)) /* Assignment of value for BA413_HASH_INCLUDED in the HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG register */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA417_CHACHAPOLY_INCLUDED_Pos _UINT32_(5)                                          /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG) Generic g_IncludeChachaPoly value. BA417-ChaChaPoly IP included if set Position */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA417_CHACHAPOLY_INCLUDED_Msk (_UINT32_(0x1) << HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA417_CHACHAPOLY_INCLUDED_Pos) /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG) Generic g_IncludeChachaPoly value. BA417-ChaChaPoly IP included if set Mask */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA417_CHACHAPOLY_INCLUDED(value) (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA417_CHACHAPOLY_INCLUDED_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA417_CHACHAPOLY_INCLUDED_Pos)) /* Assignment of value for BA417_CHACHAPOLY_INCLUDED in the HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG register */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA418_SHA3_INCLUDED_Pos _UINT32_(6)                                          /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG) Generic g_IncludeSHA3  value. BA418-SHA3 IP included if set Position */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA418_SHA3_INCLUDED_Msk (_UINT32_(0x1) << HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA418_SHA3_INCLUDED_Pos) /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG) Generic g_IncludeSHA3  value. BA418-SHA3 IP included if set Mask */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA418_SHA3_INCLUDED(value) (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA418_SHA3_INCLUDED_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA418_SHA3_INCLUDED_Pos)) /* Assignment of value for BA418_SHA3_INCLUDED in the HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG register */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA421_ZUC_INCLUDED_Pos _UINT32_(7)                                          /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG) Generic g_IncludeZUC  value. BA421-ZUC IP included if set Position */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA421_ZUC_INCLUDED_Msk (_UINT32_(0x1) << HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA421_ZUC_INCLUDED_Pos) /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG) Generic g_IncludeZUC  value. BA421-ZUC IP included if set Mask */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA421_ZUC_INCLUDED(value) (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA421_ZUC_INCLUDED_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA421_ZUC_INCLUDED_Pos)) /* Assignment of value for BA421_ZUC_INCLUDED in the HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG register */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA419_SM4_INCLUDED_Pos _UINT32_(8)                                          /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG) Generic g_IncludeSM4  value. BA419-SM4 IP included if set Position */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA419_SM4_INCLUDED_Msk (_UINT32_(0x1) << HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA419_SM4_INCLUDED_Pos) /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG) Generic g_IncludeSM4  value. BA419-SM4 IP included if set Mask */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA419_SM4_INCLUDED(value) (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA419_SM4_INCLUDED_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA419_SM4_INCLUDED_Pos)) /* Assignment of value for BA419_SM4_INCLUDED in the HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG register */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA414EP_PKE_INCLUDED_Pos _UINT32_(9)                                          /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG) Generic g_IncludePKE  value. BA414EP-PKE IP included if set Position */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA414EP_PKE_INCLUDED_Msk (_UINT32_(0x1) << HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA414EP_PKE_INCLUDED_Pos) /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG) Generic g_IncludePKE  value. BA414EP-PKE IP included if set Mask */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA414EP_PKE_INCLUDED(value) (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA414EP_PKE_INCLUDED_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA414EP_PKE_INCLUDED_Pos)) /* Assignment of value for BA414EP_PKE_INCLUDED in the HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG register */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA431_NDRNG_INCLUDED_Pos _UINT32_(10)                                         /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG) Generic g_IncludeNDRNG  value. BA431-NDRNG IP included if set Position */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA431_NDRNG_INCLUDED_Msk (_UINT32_(0x1) << HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA431_NDRNG_INCLUDED_Pos) /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG) Generic g_IncludeNDRNG  value. BA431-NDRNG IP included if set Mask */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA431_NDRNG_INCLUDED(value) (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA431_NDRNG_INCLUDED_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA431_NDRNG_INCLUDED_Pos)) /* Assignment of value for BA431_NDRNG_INCLUDED in the HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG register */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA420_HP_CHACHAPOLY_INCLUDED_Pos _UINT32_(11)                                         /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG) Generic g_IncludeHPChachaPoly  value. BA420-HP-ChaChaPoly IP included if set Position */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA420_HP_CHACHAPOLY_INCLUDED_Msk (_UINT32_(0x1) << HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA420_HP_CHACHAPOLY_INCLUDED_Pos) /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG) Generic g_IncludeHPChachaPoly  value. BA420-HP-ChaChaPoly IP included if set Mask */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA420_HP_CHACHAPOLY_INCLUDED(value) (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA420_HP_CHACHAPOLY_INCLUDED_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA420_HP_CHACHAPOLY_INCLUDED_Pos)) /* Assignment of value for BA420_HP_CHACHAPOLY_INCLUDED in the HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG register */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA423_SNOW3G_INCLUDED_Pos _UINT32_(12)                                         /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG) Generic g_IncludeSnow3G  value. BA423-Snow3G IP included if set Position */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA423_SNOW3G_INCLUDED_Msk (_UINT32_(0x1) << HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA423_SNOW3G_INCLUDED_Pos) /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG) Generic g_IncludeSnow3G  value. BA423-Snow3G IP included if set Mask */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA423_SNOW3G_INCLUDED(value) (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA423_SNOW3G_INCLUDED_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA423_SNOW3G_INCLUDED_Pos)) /* Assignment of value for BA423_SNOW3G_INCLUDED in the HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG register */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA422_KASUMI_INCLUDED_Pos _UINT32_(13)                                         /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG) Generic g_IncludeKasumi  value. BA422-Kasumi IP included if set Position */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA422_KASUMI_INCLUDED_Msk (_UINT32_(0x1) << HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA422_KASUMI_INCLUDED_Pos) /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG) Generic g_IncludeKasumi  value. BA422-Kasumi IP included if set Mask */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA422_KASUMI_INCLUDED(value) (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA422_KASUMI_INCLUDED_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_BA422_KASUMI_INCLUDED_Pos)) /* Assignment of value for BA422_KASUMI_INCLUDED in the HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG register */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_Msk _UINT32_(0x00003FFF)                                 /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG) Register Mask  */


/* -------- HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1 : (HSM Offset: 0x10404) ( R/ 32)  -------- */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_RESETVALUE _UINT32_(0x1F0301FF)                                 /*  (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1)   Reset Value */

#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MODE_Pos _UINT32_(0)                                          /* (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1) Generic g_AesModesPoss value. BA411E-AES engine configuration. Position */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MODE_Msk (_UINT32_(0x1FF) << HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MODE_Pos) /* (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1) Generic g_AesModesPoss value. BA411E-AES engine configuration. Mask */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MODE(value) (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MODE_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MODE_Pos)) /* Assignment of value for BA411E_AES_HW_CFG_MODE in the HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1 register */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_CS_Pos _UINT32_(16)                                         /* (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1) Generic g_CS value. BA411E-AES engine configuration. Position */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_CS_Msk (_UINT32_(0x1) << HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_CS_Pos) /* (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1) Generic g_CS value. BA411E-AES engine configuration. Mask */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_CS(value) (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_CS_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_CS_Pos)) /* Assignment of value for BA411E_AES_HW_CFG_CS in the HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1 register */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MASKING_Pos _UINT32_(17)                                         /* (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1) Generic g_UseMasking value. BA411E-AES engine configuration. Position */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MASKING_Msk (_UINT32_(0x1) << HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MASKING_Pos) /* (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1) Generic g_UseMasking value. BA411E-AES engine configuration. Mask */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MASKING(value) (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MASKING_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MASKING_Pos)) /* Assignment of value for BA411E_AES_HW_CFG_MASKING in the HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1 register */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_KEYSIZE_Pos _UINT32_(24)                                         /* (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1) Generic g_Keysize value. BA411E-AES engine configuration. Position */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_KEYSIZE_Msk (_UINT32_(0x7) << HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_KEYSIZE_Pos) /* (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1) Generic g_Keysize value. BA411E-AES engine configuration. Mask */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_KEYSIZE(value) (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_KEYSIZE_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_KEYSIZE_Pos)) /* Assignment of value for BA411E_AES_HW_CFG_KEYSIZE in the HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1 register */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_CXSWITCH_Pos _UINT32_(27)                                         /* (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1) Generic g_CxSwitch value. BA411E-AES engine configuration. Position */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_CXSWITCH_Msk (_UINT32_(0x1) << HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_CXSWITCH_Pos) /* (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1) Generic g_CxSwitch value. BA411E-AES engine configuration. Mask */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_CXSWITCH(value) (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_CXSWITCH_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_CXSWITCH_Pos)) /* Assignment of value for BA411E_AES_HW_CFG_CXSWITCH in the HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1 register */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_GLITCHPROTECTION_Pos _UINT32_(28)                                         /* (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1) Generic g_GlitchProtection value. BA411E-AES engine configuration. Position */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_GLITCHPROTECTION_Msk (_UINT32_(0x1) << HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_GLITCHPROTECTION_Pos) /* (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1) Generic g_GlitchProtection value. BA411E-AES engine configuration. Mask */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_GLITCHPROTECTION(value) (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_GLITCHPROTECTION_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_GLITCHPROTECTION_Pos)) /* Assignment of value for BA411E_AES_HW_CFG_GLITCHPROTECTION in the HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1 register */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_Msk _UINT32_(0x1F0301FF)                                 /* (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1) Register Mask  */


/* -------- HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2 : (HSM Offset: 0x10408) ( R/ 32) Generic g_CtrSize value. BA411E-AES engine configuration. -------- */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2_RESETVALUE _UINT32_(0x200080)                                   /*  (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2) Generic g_CtrSize value. BA411E-AES engine configuration.  Reset Value */

#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2_CTRSIZE_Pos _UINT32_(0)                                          /* (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2) Generic g_CtrSize value. BA411E-AES engine configuration. Position */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2_CTRSIZE_Msk (_UINT32_(0xFFFF) << HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2_CTRSIZE_Pos) /* (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2) Generic g_CtrSize value. BA411E-AES engine configuration. Mask */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2_CTRSIZE(value) (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2_CTRSIZE_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2_CTRSIZE_Pos)) /* Assignment of value for BA411E_AES_HW_CFG_2_CTRSIZE in the HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2 register */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2_EXTKEYS_Pos _UINT32_(20)                                         /* (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2) Generic g_Ext_nb_AES_keys value. BA411E-AES engine configuration. Position */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2_EXTKEYS_Msk (_UINT32_(0xF) << HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2_EXTKEYS_Pos) /* (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2) Generic g_Ext_nb_AES_keys value. BA411E-AES engine configuration. Mask */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2_EXTKEYS(value) (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2_EXTKEYS_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2_EXTKEYS_Pos)) /* Assignment of value for BA411E_AES_HW_CFG_2_EXTKEYS in the HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2 register */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2_IKGKEYS_Pos _UINT32_(24)                                         /* (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2) Generic  g_IKG_nb_AES_keys value. BA411E-AES engine configuration. Position */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2_IKGKEYS_Msk (_UINT32_(0xF) << HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2_IKGKEYS_Pos) /* (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2) Generic  g_IKG_nb_AES_keys value. BA411E-AES engine configuration. Mask */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2_IKGKEYS(value) (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2_IKGKEYS_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2_IKGKEYS_Pos)) /* Assignment of value for BA411E_AES_HW_CFG_2_IKGKEYS in the HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2 register */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2_Msk _UINT32_(0x0FF0FFFF)                                 /* (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2) Register Mask  */


/* -------- HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG : (HSM Offset: 0x1040C) ( R/ 32)  -------- */
#define HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_RESETVALUE _UINT32_(0x13003E)                                   /*  (HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG)   Reset Value */

#define HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_MASK_Pos _UINT32_(0)                                          /* (HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG) Generic g_HashMaskFunc value. BA413-Hash engine configuration. Position */
#define HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_MASK_Msk (_UINT32_(0x7F) << HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_MASK_Pos) /* (HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG) Generic g_HashMaskFunc value. BA413-Hash engine configuration. Mask */
#define HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_MASK(value) (HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_MASK_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_MASK_Pos)) /* Assignment of value for BA413_HASH_HW_CFG_MASK in the HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG register */
#define HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_PADDING_Pos _UINT32_(16)                                         /* (HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG) Generic g_HashPadding value. BA413-Hash engine configuration. Position */
#define HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_PADDING_Msk (_UINT32_(0x1) << HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_PADDING_Pos) /* (HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG) Generic g_HashPadding value. BA413-Hash engine configuration. Mask */
#define HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_PADDING(value) (HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_PADDING_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_PADDING_Pos)) /* Assignment of value for BA413_HASH_HW_CFG_PADDING in the HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG register */
#define HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_HMAC_Pos _UINT32_(17)                                         /* (HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG) Generic g_HMAC_enabled value. BA413-Hash engine configuration. Position */
#define HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_HMAC_Msk (_UINT32_(0x1) << HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_HMAC_Pos) /* (HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG) Generic g_HMAC_enabled value. BA413-Hash engine configuration. Mask */
#define HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_HMAC(value) (HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_HMAC_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_HMAC_Pos)) /* Assignment of value for BA413_HASH_HW_CFG_HMAC in the HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG register */
#define HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_VERIFYDIGEST_Pos _UINT32_(18)                                         /* (HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG) Generic g_HashVerifyDigest value. BA413-Hash engine configuration. Position */
#define HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_VERIFYDIGEST_Msk (_UINT32_(0x1) << HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_VERIFYDIGEST_Pos) /* (HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG) Generic g_HashVerifyDigest value. BA413-Hash engine configuration. Mask */
#define HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_VERIFYDIGEST(value) (HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_VERIFYDIGEST_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_VERIFYDIGEST_Pos)) /* Assignment of value for BA413_HASH_HW_CFG_VERIFYDIGEST in the HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG register */
#define HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_EXTKEYS_Pos _UINT32_(20)                                         /* (HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG) Generic g_Ext_nb_Hash_keys value. BA413-Hash engine configuration. Position */
#define HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_EXTKEYS_Msk (_UINT32_(0xF) << HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_EXTKEYS_Pos) /* (HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG) Generic g_Ext_nb_Hash_keys value. BA413-Hash engine configuration. Mask */
#define HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_EXTKEYS(value) (HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_EXTKEYS_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_EXTKEYS_Pos)) /* Assignment of value for BA413_HASH_HW_CFG_EXTKEYS in the HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG register */
#define HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_IKGKEYS_Pos _UINT32_(24)                                         /* (HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG) Generic g_IKG_nb_Hash_keys value. BA413-Hash engine configuration. Position */
#define HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_IKGKEYS_Msk (_UINT32_(0xF) << HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_IKGKEYS_Pos) /* (HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG) Generic g_IKG_nb_Hash_keys value. BA413-Hash engine configuration. Mask */
#define HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_IKGKEYS(value) (HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_IKGKEYS_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_IKGKEYS_Pos)) /* Assignment of value for BA413_HASH_HW_CFG_IKGKEYS in the HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG register */
#define HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_Msk _UINT32_(0x0FF7007F)                                 /* (HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG) Register Mask  */


/* -------- HSM_CryptoMaster_HWConf_Registers__BA418_SHA3_HW_CFG : (HSM Offset: 0x10410) ( R/ 32) Generic g_Sha3CtxtEn value. BA418-SHA3 configuration. -------- */
#define HSM_CryptoMaster_HWConf_Registers__BA418_SHA3_HW_CFG_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_CryptoMaster_HWConf_Registers__BA418_SHA3_HW_CFG) Generic g_Sha3CtxtEn value. BA418-SHA3 configuration.  Reset Value */

#define HSM_CryptoMaster_HWConf_Registers__BA418_SHA3_HW_CFG_BA418_SHA3_HW_CFG_Pos _UINT32_(0)                                          /* (HSM_CryptoMaster_HWConf_Registers__BA418_SHA3_HW_CFG) Generic g_Sha3CtxtEn value. BA418-SHA3 configuration. Position */
#define HSM_CryptoMaster_HWConf_Registers__BA418_SHA3_HW_CFG_BA418_SHA3_HW_CFG_Msk (_UINT32_(0x1) << HSM_CryptoMaster_HWConf_Registers__BA418_SHA3_HW_CFG_BA418_SHA3_HW_CFG_Pos) /* (HSM_CryptoMaster_HWConf_Registers__BA418_SHA3_HW_CFG) Generic g_Sha3CtxtEn value. BA418-SHA3 configuration. Mask */
#define HSM_CryptoMaster_HWConf_Registers__BA418_SHA3_HW_CFG_BA418_SHA3_HW_CFG(value) (HSM_CryptoMaster_HWConf_Registers__BA418_SHA3_HW_CFG_BA418_SHA3_HW_CFG_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__BA418_SHA3_HW_CFG_BA418_SHA3_HW_CFG_Pos)) /* Assignment of value for BA418_SHA3_HW_CFG in the HSM_CryptoMaster_HWConf_Registers__BA418_SHA3_HW_CFG register */
#define HSM_CryptoMaster_HWConf_Registers__BA418_SHA3_HW_CFG_Msk _UINT32_(0x00000001)                                 /* (HSM_CryptoMaster_HWConf_Registers__BA418_SHA3_HW_CFG) Register Mask  */


/* -------- HSM_CryptoMaster_HWConf_Registers__BA419_SM4_HW_CFG : (HSM Offset: 0x10414) ( R/ 32) Generic g_SM4ModesPoss value. BA419-SM4 engine configuration. -------- */
#define HSM_CryptoMaster_HWConf_Registers__BA419_SM4_HW_CFG_RESETVALUE _UINT32_(0x1FF)                                      /*  (HSM_CryptoMaster_HWConf_Registers__BA419_SM4_HW_CFG) Generic g_SM4ModesPoss value. BA419-SM4 engine configuration.  Reset Value */

#define HSM_CryptoMaster_HWConf_Registers__BA419_SM4_HW_CFG_BA419_SM4_HW_CFG_Pos _UINT32_(0)                                          /* (HSM_CryptoMaster_HWConf_Registers__BA419_SM4_HW_CFG) Generic g_SM4ModesPoss value. BA419-SM4 engine configuration. Position */
#define HSM_CryptoMaster_HWConf_Registers__BA419_SM4_HW_CFG_BA419_SM4_HW_CFG_Msk (_UINT32_(0x1FF) << HSM_CryptoMaster_HWConf_Registers__BA419_SM4_HW_CFG_BA419_SM4_HW_CFG_Pos) /* (HSM_CryptoMaster_HWConf_Registers__BA419_SM4_HW_CFG) Generic g_SM4ModesPoss value. BA419-SM4 engine configuration. Mask */
#define HSM_CryptoMaster_HWConf_Registers__BA419_SM4_HW_CFG_BA419_SM4_HW_CFG(value) (HSM_CryptoMaster_HWConf_Registers__BA419_SM4_HW_CFG_BA419_SM4_HW_CFG_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__BA419_SM4_HW_CFG_BA419_SM4_HW_CFG_Pos)) /* Assignment of value for BA419_SM4_HW_CFG in the HSM_CryptoMaster_HWConf_Registers__BA419_SM4_HW_CFG register */
#define HSM_CryptoMaster_HWConf_Registers__BA419_SM4_HW_CFG_Msk _UINT32_(0x000001FF)                                 /* (HSM_CryptoMaster_HWConf_Registers__BA419_SM4_HW_CFG) Register Mask  */


/* -------- HSM_CryptoMaster_HWConf_Registers__BA424_ARIA_HW_CFG : (HSM Offset: 0x10418) ( R/ 32) Generic g_aria_modePoss value. BA424-Aria engine configuration. -------- */
#define HSM_CryptoMaster_HWConf_Registers__BA424_ARIA_HW_CFG_RESETVALUE _UINT32_(0x17F)                                      /*  (HSM_CryptoMaster_HWConf_Registers__BA424_ARIA_HW_CFG) Generic g_aria_modePoss value. BA424-Aria engine configuration.  Reset Value */

#define HSM_CryptoMaster_HWConf_Registers__BA424_ARIA_HW_CFG_BA424_ARIA_HW_CFG_Pos _UINT32_(0)                                          /* (HSM_CryptoMaster_HWConf_Registers__BA424_ARIA_HW_CFG) Generic g_aria_modePoss value. BA424-Aria engine configuration. Position */
#define HSM_CryptoMaster_HWConf_Registers__BA424_ARIA_HW_CFG_BA424_ARIA_HW_CFG_Msk (_UINT32_(0x1FF) << HSM_CryptoMaster_HWConf_Registers__BA424_ARIA_HW_CFG_BA424_ARIA_HW_CFG_Pos) /* (HSM_CryptoMaster_HWConf_Registers__BA424_ARIA_HW_CFG) Generic g_aria_modePoss value. BA424-Aria engine configuration. Mask */
#define HSM_CryptoMaster_HWConf_Registers__BA424_ARIA_HW_CFG_BA424_ARIA_HW_CFG(value) (HSM_CryptoMaster_HWConf_Registers__BA424_ARIA_HW_CFG_BA424_ARIA_HW_CFG_Msk & (_UINT32_(value) << HSM_CryptoMaster_HWConf_Registers__BA424_ARIA_HW_CFG_BA424_ARIA_HW_CFG_Pos)) /* Assignment of value for BA424_ARIA_HW_CFG in the HSM_CryptoMaster_HWConf_Registers__BA424_ARIA_HW_CFG register */
#define HSM_CryptoMaster_HWConf_Registers__BA424_ARIA_HW_CFG_Msk _UINT32_(0x000001FF)                                 /* (HSM_CryptoMaster_HWConf_Registers__BA424_ARIA_HW_CFG) Register Mask  */


/* -------- HSM_RNG_Control_Registers__Control : (HSM Offset: 0x11000) (R/W 32) Control register -------- */
#define HSM_RNG_Control_Registers__Control_RESETVALUE _UINT32_(0x40000)                                    /*  (HSM_RNG_Control_Registers__Control) Control register  Reset Value */

#define HSM_RNG_Control_Registers__Control_Enable_Pos _UINT32_(0)                                          /* (HSM_RNG_Control_Registers__Control) Enable the NDRNG. Position */
#define HSM_RNG_Control_Registers__Control_Enable_Msk (_UINT32_(0x1) << HSM_RNG_Control_Registers__Control_Enable_Pos) /* (HSM_RNG_Control_Registers__Control) Enable the NDRNG. Mask */
#define HSM_RNG_Control_Registers__Control_Enable(value) (HSM_RNG_Control_Registers__Control_Enable_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Control_Enable_Pos)) /* Assignment of value for Enable in the HSM_RNG_Control_Registers__Control register */
#define HSM_RNG_Control_Registers__Control_LFSREn_Pos _UINT32_(1)                                          /* (HSM_RNG_Control_Registers__Control) Select between the NDRNG with asynchronous free running oscillators (when '0') and the Pseudo-Random generator with synchronous oscillators for simulation purpose (when '1'). Position */
#define HSM_RNG_Control_Registers__Control_LFSREn_Msk (_UINT32_(0x1) << HSM_RNG_Control_Registers__Control_LFSREn_Pos) /* (HSM_RNG_Control_Registers__Control) Select between the NDRNG with asynchronous free running oscillators (when '0') and the Pseudo-Random generator with synchronous oscillators for simulation purpose (when '1'). Mask */
#define HSM_RNG_Control_Registers__Control_LFSREn(value) (HSM_RNG_Control_Registers__Control_LFSREn_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Control_LFSREn_Pos)) /* Assignment of value for LFSREn in the HSM_RNG_Control_Registers__Control register */
#define HSM_RNG_Control_Registers__Control_TestEn_Pos _UINT32_(2)                                          /* (HSM_RNG_Control_Registers__Control) Select input for conditioning function and continuous tests: 0: Noise source (normal mode), 1: Test data register (test mode). Position */
#define HSM_RNG_Control_Registers__Control_TestEn_Msk (_UINT32_(0x1) << HSM_RNG_Control_Registers__Control_TestEn_Pos) /* (HSM_RNG_Control_Registers__Control) Select input for conditioning function and continuous tests: 0: Noise source (normal mode), 1: Test data register (test mode). Mask */
#define HSM_RNG_Control_Registers__Control_TestEn(value) (HSM_RNG_Control_Registers__Control_TestEn_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Control_TestEn_Pos)) /* Assignment of value for TestEn in the HSM_RNG_Control_Registers__Control register */
#define HSM_RNG_Control_Registers__Control_CondBypass_Pos _UINT32_(3)                                          /* (HSM_RNG_Control_Registers__Control) 0: the conditioning function is used (normal mode), 1: the conditioning function is bypassed (to observe entropy source directly). Position */
#define HSM_RNG_Control_Registers__Control_CondBypass_Msk (_UINT32_(0x1) << HSM_RNG_Control_Registers__Control_CondBypass_Pos) /* (HSM_RNG_Control_Registers__Control) 0: the conditioning function is used (normal mode), 1: the conditioning function is bypassed (to observe entropy source directly). Mask */
#define HSM_RNG_Control_Registers__Control_CondBypass(value) (HSM_RNG_Control_Registers__Control_CondBypass_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Control_CondBypass_Pos)) /* Assignment of value for CondBypass in the HSM_RNG_Control_Registers__Control register */
#define HSM_RNG_Control_Registers__Control_IntEnRep_Pos _UINT32_(4)                                          /* (HSM_RNG_Control_Registers__Control) Interrupt enable for Repetition Count Test failure. Position */
#define HSM_RNG_Control_Registers__Control_IntEnRep_Msk (_UINT32_(0x1) << HSM_RNG_Control_Registers__Control_IntEnRep_Pos) /* (HSM_RNG_Control_Registers__Control) Interrupt enable for Repetition Count Test failure. Mask */
#define HSM_RNG_Control_Registers__Control_IntEnRep(value) (HSM_RNG_Control_Registers__Control_IntEnRep_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Control_IntEnRep_Pos)) /* Assignment of value for IntEnRep in the HSM_RNG_Control_Registers__Control register */
#define HSM_RNG_Control_Registers__Control_IntEnProp_Pos _UINT32_(5)                                          /* (HSM_RNG_Control_Registers__Control) Interrupt enable for Adaptive Proportion Test failure (1024-sample window). Position */
#define HSM_RNG_Control_Registers__Control_IntEnProp_Msk (_UINT32_(0x1) << HSM_RNG_Control_Registers__Control_IntEnProp_Pos) /* (HSM_RNG_Control_Registers__Control) Interrupt enable for Adaptive Proportion Test failure (1024-sample window). Mask */
#define HSM_RNG_Control_Registers__Control_IntEnProp(value) (HSM_RNG_Control_Registers__Control_IntEnProp_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Control_IntEnProp_Pos)) /* Assignment of value for IntEnProp in the HSM_RNG_Control_Registers__Control register */
#define HSM_RNG_Control_Registers__Control_IntEnFull_Pos _UINT32_(7)                                          /* (HSM_RNG_Control_Registers__Control) Interrupt enable for FIFO full. Position */
#define HSM_RNG_Control_Registers__Control_IntEnFull_Msk (_UINT32_(0x1) << HSM_RNG_Control_Registers__Control_IntEnFull_Pos) /* (HSM_RNG_Control_Registers__Control) Interrupt enable for FIFO full. Mask */
#define HSM_RNG_Control_Registers__Control_IntEnFull(value) (HSM_RNG_Control_Registers__Control_IntEnFull_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Control_IntEnFull_Pos)) /* Assignment of value for IntEnFull in the HSM_RNG_Control_Registers__Control register */
#define HSM_RNG_Control_Registers__Control_SoftRst_Pos _UINT32_(8)                                          /* (HSM_RNG_Control_Registers__Control) Software reset: 0: Normal mode, 1: The continuous test, the conditioning function and the FIFO are reset. This bit is not cleared automatically. Position */
#define HSM_RNG_Control_Registers__Control_SoftRst_Msk (_UINT32_(0x1) << HSM_RNG_Control_Registers__Control_SoftRst_Pos) /* (HSM_RNG_Control_Registers__Control) Software reset: 0: Normal mode, 1: The continuous test, the conditioning function and the FIFO are reset. This bit is not cleared automatically. Mask */
#define HSM_RNG_Control_Registers__Control_SoftRst(value) (HSM_RNG_Control_Registers__Control_SoftRst_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Control_SoftRst_Pos)) /* Assignment of value for SoftRst in the HSM_RNG_Control_Registers__Control register */
#define HSM_RNG_Control_Registers__Control_IntEnPre_Pos _UINT32_(9)                                          /* (HSM_RNG_Control_Registers__Control) Interrupt enable for AIS31 preliminary noise alarm. Position */
#define HSM_RNG_Control_Registers__Control_IntEnPre_Msk (_UINT32_(0x1) << HSM_RNG_Control_Registers__Control_IntEnPre_Pos) /* (HSM_RNG_Control_Registers__Control) Interrupt enable for AIS31 preliminary noise alarm. Mask */
#define HSM_RNG_Control_Registers__Control_IntEnPre(value) (HSM_RNG_Control_Registers__Control_IntEnPre_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Control_IntEnPre_Pos)) /* Assignment of value for IntEnPre in the HSM_RNG_Control_Registers__Control register */
#define HSM_RNG_Control_Registers__Control_IntEnAlm_Pos _UINT32_(10)                                         /* (HSM_RNG_Control_Registers__Control) Interrupt enable for AIS31 noise alarm. Position */
#define HSM_RNG_Control_Registers__Control_IntEnAlm_Msk (_UINT32_(0x1) << HSM_RNG_Control_Registers__Control_IntEnAlm_Pos) /* (HSM_RNG_Control_Registers__Control) Interrupt enable for AIS31 noise alarm. Mask */
#define HSM_RNG_Control_Registers__Control_IntEnAlm(value) (HSM_RNG_Control_Registers__Control_IntEnAlm_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Control_IntEnAlm_Pos)) /* Assignment of value for IntEnAlm in the HSM_RNG_Control_Registers__Control register */
#define HSM_RNG_Control_Registers__Control_ForceActiveROs_Pos _UINT32_(11)                                         /* (HSM_RNG_Control_Registers__Control) Force oscillators to run when FIFO is full. Position */
#define HSM_RNG_Control_Registers__Control_ForceActiveROs_Msk (_UINT32_(0x1) << HSM_RNG_Control_Registers__Control_ForceActiveROs_Pos) /* (HSM_RNG_Control_Registers__Control) Force oscillators to run when FIFO is full. Mask */
#define HSM_RNG_Control_Registers__Control_ForceActiveROs(value) (HSM_RNG_Control_Registers__Control_ForceActiveROs_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Control_ForceActiveROs_Pos)) /* Assignment of value for ForceActiveROs in the HSM_RNG_Control_Registers__Control register */
#define HSM_RNG_Control_Registers__Control_HealthTestBypass_Pos _UINT32_(12)                                         /* (HSM_RNG_Control_Registers__Control) Bypass NIST tests such that the results of the start-up and online test do not affect the FSM state. Position */
#define HSM_RNG_Control_Registers__Control_HealthTestBypass_Msk (_UINT32_(0x1) << HSM_RNG_Control_Registers__Control_HealthTestBypass_Pos) /* (HSM_RNG_Control_Registers__Control) Bypass NIST tests such that the results of the start-up and online test do not affect the FSM state. Mask */
#define HSM_RNG_Control_Registers__Control_HealthTestBypass(value) (HSM_RNG_Control_Registers__Control_HealthTestBypass_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Control_HealthTestBypass_Pos)) /* Assignment of value for HealthTestBypass in the HSM_RNG_Control_Registers__Control register */
#define HSM_RNG_Control_Registers__Control_AIS31Bypass_Pos _UINT32_(13)                                         /* (HSM_RNG_Control_Registers__Control) Bypass AIS31 tests such that the results of the start-up and online tests do not affect the FSM state. Position */
#define HSM_RNG_Control_Registers__Control_AIS31Bypass_Msk (_UINT32_(0x1) << HSM_RNG_Control_Registers__Control_AIS31Bypass_Pos) /* (HSM_RNG_Control_Registers__Control) Bypass AIS31 tests such that the results of the start-up and online tests do not affect the FSM state. Mask */
#define HSM_RNG_Control_Registers__Control_AIS31Bypass(value) (HSM_RNG_Control_Registers__Control_AIS31Bypass_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Control_AIS31Bypass_Pos)) /* Assignment of value for AIS31Bypass in the HSM_RNG_Control_Registers__Control register */
#define HSM_RNG_Control_Registers__Control_HealthTestSel_Pos _UINT32_(14)                                         /* (HSM_RNG_Control_Registers__Control) Select input to health test module: 0: Before conditioning, 1: After conditioning. Position */
#define HSM_RNG_Control_Registers__Control_HealthTestSel_Msk (_UINT32_(0x1) << HSM_RNG_Control_Registers__Control_HealthTestSel_Pos) /* (HSM_RNG_Control_Registers__Control) Select input to health test module: 0: Before conditioning, 1: After conditioning. Mask */
#define HSM_RNG_Control_Registers__Control_HealthTestSel(value) (HSM_RNG_Control_Registers__Control_HealthTestSel_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Control_HealthTestSel_Pos)) /* Assignment of value for HealthTestSel in the HSM_RNG_Control_Registers__Control register */
#define HSM_RNG_Control_Registers__Control_AIS31TestSel_Pos _UINT32_(15)                                         /* (HSM_RNG_Control_Registers__Control) Select input to the AIS31 test module: 0: Before conditioning, 1: After conditioning. Position */
#define HSM_RNG_Control_Registers__Control_AIS31TestSel_Msk (_UINT32_(0x1) << HSM_RNG_Control_Registers__Control_AIS31TestSel_Pos) /* (HSM_RNG_Control_Registers__Control) Select input to the AIS31 test module: 0: Before conditioning, 1: After conditioning. Mask */
#define HSM_RNG_Control_Registers__Control_AIS31TestSel(value) (HSM_RNG_Control_Registers__Control_AIS31TestSel_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Control_AIS31TestSel_Pos)) /* Assignment of value for AIS31TestSel in the HSM_RNG_Control_Registers__Control register */
#define HSM_RNG_Control_Registers__Control_Nb128BitBlocks_Pos _UINT32_(16)                                         /* (HSM_RNG_Control_Registers__Control) Number of 128 bit blocks used in AES-CBCMAC post-processing. This value cannot be zero. Position */
#define HSM_RNG_Control_Registers__Control_Nb128BitBlocks_Msk (_UINT32_(0xF) << HSM_RNG_Control_Registers__Control_Nb128BitBlocks_Pos) /* (HSM_RNG_Control_Registers__Control) Number of 128 bit blocks used in AES-CBCMAC post-processing. This value cannot be zero. Mask */
#define HSM_RNG_Control_Registers__Control_Nb128BitBlocks(value) (HSM_RNG_Control_Registers__Control_Nb128BitBlocks_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Control_Nb128BitBlocks_Pos)) /* Assignment of value for Nb128BitBlocks in the HSM_RNG_Control_Registers__Control register */
#define HSM_RNG_Control_Registers__Control_FifoWriteStartUp_Pos _UINT32_(20)                                         /* (HSM_RNG_Control_Registers__Control) Enable write of the samples in the FIFO during start-up. Position */
#define HSM_RNG_Control_Registers__Control_FifoWriteStartUp_Msk (_UINT32_(0x1) << HSM_RNG_Control_Registers__Control_FifoWriteStartUp_Pos) /* (HSM_RNG_Control_Registers__Control) Enable write of the samples in the FIFO during start-up. Mask */
#define HSM_RNG_Control_Registers__Control_FifoWriteStartUp(value) (HSM_RNG_Control_Registers__Control_FifoWriteStartUp_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Control_FifoWriteStartUp_Pos)) /* Assignment of value for FifoWriteStartUp in the HSM_RNG_Control_Registers__Control register */
#define HSM_RNG_Control_Registers__Control_Msk _UINT32_(0x001FFFBF)                                 /* (HSM_RNG_Control_Registers__Control) Register Mask  */


/* -------- HSM_RNG_Control_Registers__FIFOLevel : (HSM Offset: 0x11004) (R/W 32) FIFO level register. -------- */
#define HSM_RNG_Control_Registers__FIFOLevel_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_RNG_Control_Registers__FIFOLevel) FIFO level register.  Reset Value */

#define HSM_RNG_Control_Registers__FIFOLevel_FIFOLevel_Pos _UINT32_(0)                                          /* (HSM_RNG_Control_Registers__FIFOLevel) Number of 32 bits words of random available in the FIFO. Any write to this register clears the FullInt flag in the Status register. Position */
#define HSM_RNG_Control_Registers__FIFOLevel_FIFOLevel_Msk (_UINT32_(0xFFFFFFFF) << HSM_RNG_Control_Registers__FIFOLevel_FIFOLevel_Pos) /* (HSM_RNG_Control_Registers__FIFOLevel) Number of 32 bits words of random available in the FIFO. Any write to this register clears the FullInt flag in the Status register. Mask */
#define HSM_RNG_Control_Registers__FIFOLevel_FIFOLevel(value) (HSM_RNG_Control_Registers__FIFOLevel_FIFOLevel_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__FIFOLevel_FIFOLevel_Pos)) /* Assignment of value for FIFOLevel in the HSM_RNG_Control_Registers__FIFOLevel register */
#define HSM_RNG_Control_Registers__FIFOLevel_Msk _UINT32_(0xFFFFFFFF)                                 /* (HSM_RNG_Control_Registers__FIFOLevel) Register Mask  */


/* -------- HSM_RNG_Control_Registers__FIFOThreshold : (HSM Offset: 0x11008) (R/W 32) FIFO threshold register. -------- */
#define HSM_RNG_Control_Registers__FIFOThreshold_RESETVALUE _UINT32_(0x01)                                       /*  (HSM_RNG_Control_Registers__FIFOThreshold) FIFO threshold register.  Reset Value */

#define HSM_RNG_Control_Registers__FIFOThreshold_FIFOThreshold_Pos _UINT32_(0)                                          /* (HSM_RNG_Control_Registers__FIFOThreshold) FIFO level below which the module leaves the idle state to refill the FIFO, expressed in number of 128bit blocks. Position */
#define HSM_RNG_Control_Registers__FIFOThreshold_FIFOThreshold_Msk (_UINT32_(0x3) << HSM_RNG_Control_Registers__FIFOThreshold_FIFOThreshold_Pos) /* (HSM_RNG_Control_Registers__FIFOThreshold) FIFO level below which the module leaves the idle state to refill the FIFO, expressed in number of 128bit blocks. Mask */
#define HSM_RNG_Control_Registers__FIFOThreshold_FIFOThreshold(value) (HSM_RNG_Control_Registers__FIFOThreshold_FIFOThreshold_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__FIFOThreshold_FIFOThreshold_Pos)) /* Assignment of value for FIFOThreshold in the HSM_RNG_Control_Registers__FIFOThreshold register */
#define HSM_RNG_Control_Registers__FIFOThreshold_Msk _UINT32_(0x00000003)                                 /* (HSM_RNG_Control_Registers__FIFOThreshold) Register Mask  */


/* -------- HSM_RNG_Control_Registers__FIFODepth : (HSM Offset: 0x1100C) ( R/ 32) FIFO depth register. -------- */
#define HSM_RNG_Control_Registers__FIFODepth_RESETVALUE _UINT32_(0x08)                                       /*  (HSM_RNG_Control_Registers__FIFODepth) FIFO depth register.  Reset Value */

#define HSM_RNG_Control_Registers__FIFODepth_FIFODepth_Pos _UINT32_(0)                                          /* (HSM_RNG_Control_Registers__FIFODepth) Maximum number of 32 bits words that can be stored in the FIFO: 2**g_fifodepth. Position */
#define HSM_RNG_Control_Registers__FIFODepth_FIFODepth_Msk (_UINT32_(0xFFFFFFFF) << HSM_RNG_Control_Registers__FIFODepth_FIFODepth_Pos) /* (HSM_RNG_Control_Registers__FIFODepth) Maximum number of 32 bits words that can be stored in the FIFO: 2**g_fifodepth. Mask */
#define HSM_RNG_Control_Registers__FIFODepth_FIFODepth(value) (HSM_RNG_Control_Registers__FIFODepth_FIFODepth_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__FIFODepth_FIFODepth_Pos)) /* Assignment of value for FIFODepth in the HSM_RNG_Control_Registers__FIFODepth register */
#define HSM_RNG_Control_Registers__FIFODepth_Msk _UINT32_(0xFFFFFFFF)                                 /* (HSM_RNG_Control_Registers__FIFODepth) Register Mask  */


/* -------- HSM_RNG_Control_Registers__Key0 : (HSM Offset: 0x11010) (R/W 32) Key register (MSB). -------- */
#define HSM_RNG_Control_Registers__Key0_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_RNG_Control_Registers__Key0) Key register (MSB).  Reset Value */

#define HSM_RNG_Control_Registers__Key0_Key0_Pos _UINT32_(0)                                          /* (HSM_RNG_Control_Registers__Key0) Key register (MSB). Position */
#define HSM_RNG_Control_Registers__Key0_Key0_Msk (_UINT32_(0xFFFFFFFF) << HSM_RNG_Control_Registers__Key0_Key0_Pos) /* (HSM_RNG_Control_Registers__Key0) Key register (MSB). Mask */
#define HSM_RNG_Control_Registers__Key0_Key0(value) (HSM_RNG_Control_Registers__Key0_Key0_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Key0_Key0_Pos)) /* Assignment of value for Key0 in the HSM_RNG_Control_Registers__Key0 register */
#define HSM_RNG_Control_Registers__Key0_Msk   _UINT32_(0xFFFFFFFF)                                 /* (HSM_RNG_Control_Registers__Key0) Register Mask  */


/* -------- HSM_RNG_Control_Registers__Key1 : (HSM Offset: 0x11014) (R/W 32) Key register. -------- */
#define HSM_RNG_Control_Registers__Key1_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_RNG_Control_Registers__Key1) Key register.  Reset Value */

#define HSM_RNG_Control_Registers__Key1_Key1_Pos _UINT32_(0)                                          /* (HSM_RNG_Control_Registers__Key1) Key register. Position */
#define HSM_RNG_Control_Registers__Key1_Key1_Msk (_UINT32_(0xFFFFFFFF) << HSM_RNG_Control_Registers__Key1_Key1_Pos) /* (HSM_RNG_Control_Registers__Key1) Key register. Mask */
#define HSM_RNG_Control_Registers__Key1_Key1(value) (HSM_RNG_Control_Registers__Key1_Key1_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Key1_Key1_Pos)) /* Assignment of value for Key1 in the HSM_RNG_Control_Registers__Key1 register */
#define HSM_RNG_Control_Registers__Key1_Msk   _UINT32_(0xFFFFFFFF)                                 /* (HSM_RNG_Control_Registers__Key1) Register Mask  */


/* -------- HSM_RNG_Control_Registers__Key2 : (HSM Offset: 0x11018) (R/W 32) Key register. -------- */
#define HSM_RNG_Control_Registers__Key2_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_RNG_Control_Registers__Key2) Key register.  Reset Value */

#define HSM_RNG_Control_Registers__Key2_Key2_Pos _UINT32_(0)                                          /* (HSM_RNG_Control_Registers__Key2) Key register. Position */
#define HSM_RNG_Control_Registers__Key2_Key2_Msk (_UINT32_(0xFFFFFFFF) << HSM_RNG_Control_Registers__Key2_Key2_Pos) /* (HSM_RNG_Control_Registers__Key2) Key register. Mask */
#define HSM_RNG_Control_Registers__Key2_Key2(value) (HSM_RNG_Control_Registers__Key2_Key2_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Key2_Key2_Pos)) /* Assignment of value for Key2 in the HSM_RNG_Control_Registers__Key2 register */
#define HSM_RNG_Control_Registers__Key2_Msk   _UINT32_(0xFFFFFFFF)                                 /* (HSM_RNG_Control_Registers__Key2) Register Mask  */


/* -------- HSM_RNG_Control_Registers__Key3 : (HSM Offset: 0x1101C) (R/W 32) Key register (LSB). -------- */
#define HSM_RNG_Control_Registers__Key3_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_RNG_Control_Registers__Key3) Key register (LSB).  Reset Value */

#define HSM_RNG_Control_Registers__Key3_Key3_Pos _UINT32_(0)                                          /* (HSM_RNG_Control_Registers__Key3) Key register (LSB). Position */
#define HSM_RNG_Control_Registers__Key3_Key3_Msk (_UINT32_(0xFFFFFFFF) << HSM_RNG_Control_Registers__Key3_Key3_Pos) /* (HSM_RNG_Control_Registers__Key3) Key register (LSB). Mask */
#define HSM_RNG_Control_Registers__Key3_Key3(value) (HSM_RNG_Control_Registers__Key3_Key3_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Key3_Key3_Pos)) /* Assignment of value for Key3 in the HSM_RNG_Control_Registers__Key3 register */
#define HSM_RNG_Control_Registers__Key3_Msk   _UINT32_(0xFFFFFFFF)                                 /* (HSM_RNG_Control_Registers__Key3) Register Mask  */


/* -------- HSM_RNG_Control_Registers__TestData : (HSM Offset: 0x11020) ( /W 32) Test data register. -------- */
#define HSM_RNG_Control_Registers__TestData_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_RNG_Control_Registers__TestData) Test data register.  Reset Value */

#define HSM_RNG_Control_Registers__TestData_TestData_Pos _UINT32_(0)                                          /* (HSM_RNG_Control_Registers__TestData) Test data register. Position */
#define HSM_RNG_Control_Registers__TestData_TestData_Msk (_UINT32_(0xFFFFFFFF) << HSM_RNG_Control_Registers__TestData_TestData_Pos) /* (HSM_RNG_Control_Registers__TestData) Test data register. Mask */
#define HSM_RNG_Control_Registers__TestData_TestData(value) (HSM_RNG_Control_Registers__TestData_TestData_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__TestData_TestData_Pos)) /* Assignment of value for TestData in the HSM_RNG_Control_Registers__TestData register */
#define HSM_RNG_Control_Registers__TestData_Msk _UINT32_(0xFFFFFFFF)                                 /* (HSM_RNG_Control_Registers__TestData) Register Mask  */


/* -------- HSM_RNG_Control_Registers__RepeatThreshold : (HSM Offset: 0x11024) (R/W 32) Repetition Test Count Cut-Off value. -------- */
#define HSM_RNG_Control_Registers__RepeatThreshold_RESETVALUE _UINT32_(0x29)                                       /*  (HSM_RNG_Control_Registers__RepeatThreshold) Repetition Test Count Cut-Off value.  Reset Value */

#define HSM_RNG_Control_Registers__RepeatThreshold_RepeatThreshold_Pos _UINT32_(0)                                          /* (HSM_RNG_Control_Registers__RepeatThreshold) Repetition Test Count Cut-Off value. Position */
#define HSM_RNG_Control_Registers__RepeatThreshold_RepeatThreshold_Msk (_UINT32_(0x3F) << HSM_RNG_Control_Registers__RepeatThreshold_RepeatThreshold_Pos) /* (HSM_RNG_Control_Registers__RepeatThreshold) Repetition Test Count Cut-Off value. Mask */
#define HSM_RNG_Control_Registers__RepeatThreshold_RepeatThreshold(value) (HSM_RNG_Control_Registers__RepeatThreshold_RepeatThreshold_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__RepeatThreshold_RepeatThreshold_Pos)) /* Assignment of value for RepeatThreshold in the HSM_RNG_Control_Registers__RepeatThreshold register */
#define HSM_RNG_Control_Registers__RepeatThreshold_Msk _UINT32_(0x0000003F)                                 /* (HSM_RNG_Control_Registers__RepeatThreshold) Register Mask  */


/* -------- HSM_RNG_Control_Registers__PropThreshold : (HSM Offset: 0x11028) (R/W 32) Adaptive Proportion Test (1024-sample window) Cut-Off value. -------- */
#define HSM_RNG_Control_Registers__PropThreshold_RESETVALUE _UINT32_(0x319)                                      /*  (HSM_RNG_Control_Registers__PropThreshold) Adaptive Proportion Test (1024-sample window) Cut-Off value.  Reset Value */

#define HSM_RNG_Control_Registers__PropThreshold_PropThreshold_Pos _UINT32_(0)                                          /* (HSM_RNG_Control_Registers__PropThreshold) Adaptive Proportion Test (1024-sample window) Cut-Off value. Position */
#define HSM_RNG_Control_Registers__PropThreshold_PropThreshold_Msk (_UINT32_(0x3FF) << HSM_RNG_Control_Registers__PropThreshold_PropThreshold_Pos) /* (HSM_RNG_Control_Registers__PropThreshold) Adaptive Proportion Test (1024-sample window) Cut-Off value. Mask */
#define HSM_RNG_Control_Registers__PropThreshold_PropThreshold(value) (HSM_RNG_Control_Registers__PropThreshold_PropThreshold_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__PropThreshold_PropThreshold_Pos)) /* Assignment of value for PropThreshold in the HSM_RNG_Control_Registers__PropThreshold register */
#define HSM_RNG_Control_Registers__PropThreshold_Msk _UINT32_(0x000003FF)                                 /* (HSM_RNG_Control_Registers__PropThreshold) Register Mask  */


/* -------- HSM_RNG_Control_Registers__Status : (HSM Offset: 0x11030) (R/W 32) Status register. -------- */
#define HSM_RNG_Control_Registers__Status_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_RNG_Control_Registers__Status) Status register.  Reset Value */

#define HSM_RNG_Control_Registers__Status_TestDataBusy_Pos _UINT32_(0)                                          /* (HSM_RNG_Control_Registers__Status) High when data written to TestData register is being processed. (see section 4.7) Position */
#define HSM_RNG_Control_Registers__Status_TestDataBusy_Msk (_UINT32_(0x1) << HSM_RNG_Control_Registers__Status_TestDataBusy_Pos) /* (HSM_RNG_Control_Registers__Status) High when data written to TestData register is being processed. (see section 4.7) Mask */
#define HSM_RNG_Control_Registers__Status_TestDataBusy(value) (HSM_RNG_Control_Registers__Status_TestDataBusy_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Status_TestDataBusy_Pos)) /* Assignment of value for TestDataBusy in the HSM_RNG_Control_Registers__Status register */
#define HSM_RNG_Control_Registers__Status_State_Pos _UINT32_(1)                                          /* (HSM_RNG_Control_Registers__Status) State of the control FSM: 000: Reset, 001: Startup, 010: Idle (Rings On), 011: Idle (Rings Off), 100: Fill FIFO, 101: Error, 110: Unused, 111: Unused. Position */
#define HSM_RNG_Control_Registers__Status_State_Msk (_UINT32_(0x7) << HSM_RNG_Control_Registers__Status_State_Pos) /* (HSM_RNG_Control_Registers__Status) State of the control FSM: 000: Reset, 001: Startup, 010: Idle (Rings On), 011: Idle (Rings Off), 100: Fill FIFO, 101: Error, 110: Unused, 111: Unused. Mask */
#define HSM_RNG_Control_Registers__Status_State(value) (HSM_RNG_Control_Registers__Status_State_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Status_State_Pos)) /* Assignment of value for State in the HSM_RNG_Control_Registers__Status register */
#define HSM_RNG_Control_Registers__Status_RepFail_Pos _UINT32_(4)                                          /* (HSM_RNG_Control_Registers__Status) NIST-800-90B repetition Count Test interrupt status. Position */
#define HSM_RNG_Control_Registers__Status_RepFail_Msk (_UINT32_(0x1) << HSM_RNG_Control_Registers__Status_RepFail_Pos) /* (HSM_RNG_Control_Registers__Status) NIST-800-90B repetition Count Test interrupt status. Mask */
#define HSM_RNG_Control_Registers__Status_RepFail(value) (HSM_RNG_Control_Registers__Status_RepFail_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Status_RepFail_Pos)) /* Assignment of value for RepFail in the HSM_RNG_Control_Registers__Status register */
#define HSM_RNG_Control_Registers__Status_PropFail_Pos _UINT32_(5)                                          /* (HSM_RNG_Control_Registers__Status) NIST-800-90B adaptive Proportion Test (1024-sample window) interrupt status. Position */
#define HSM_RNG_Control_Registers__Status_PropFail_Msk (_UINT32_(0x1) << HSM_RNG_Control_Registers__Status_PropFail_Pos) /* (HSM_RNG_Control_Registers__Status) NIST-800-90B adaptive Proportion Test (1024-sample window) interrupt status. Mask */
#define HSM_RNG_Control_Registers__Status_PropFail(value) (HSM_RNG_Control_Registers__Status_PropFail_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Status_PropFail_Pos)) /* Assignment of value for PropFail in the HSM_RNG_Control_Registers__Status register */
#define HSM_RNG_Control_Registers__Status_FullInt_Pos _UINT32_(7)                                          /* (HSM_RNG_Control_Registers__Status) FIFO full status. Position */
#define HSM_RNG_Control_Registers__Status_FullInt_Msk (_UINT32_(0x1) << HSM_RNG_Control_Registers__Status_FullInt_Pos) /* (HSM_RNG_Control_Registers__Status) FIFO full status. Mask */
#define HSM_RNG_Control_Registers__Status_FullInt(value) (HSM_RNG_Control_Registers__Status_FullInt_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Status_FullInt_Pos)) /* Assignment of value for FullInt in the HSM_RNG_Control_Registers__Status register */
#define HSM_RNG_Control_Registers__Status_PreInt_Pos _UINT32_(8)                                          /* (HSM_RNG_Control_Registers__Status) AIS31 preliminary noise alarm interrupt status. Position */
#define HSM_RNG_Control_Registers__Status_PreInt_Msk (_UINT32_(0x1) << HSM_RNG_Control_Registers__Status_PreInt_Pos) /* (HSM_RNG_Control_Registers__Status) AIS31 preliminary noise alarm interrupt status. Mask */
#define HSM_RNG_Control_Registers__Status_PreInt(value) (HSM_RNG_Control_Registers__Status_PreInt_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Status_PreInt_Pos)) /* Assignment of value for PreInt in the HSM_RNG_Control_Registers__Status register */
#define HSM_RNG_Control_Registers__Status_AlmInt_Pos _UINT32_(9)                                          /* (HSM_RNG_Control_Registers__Status) AIS31 noise alarm interrupt status. Position */
#define HSM_RNG_Control_Registers__Status_AlmInt_Msk (_UINT32_(0x1) << HSM_RNG_Control_Registers__Status_AlmInt_Pos) /* (HSM_RNG_Control_Registers__Status) AIS31 noise alarm interrupt status. Mask */
#define HSM_RNG_Control_Registers__Status_AlmInt(value) (HSM_RNG_Control_Registers__Status_AlmInt_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Status_AlmInt_Pos)) /* Assignment of value for AlmInt in the HSM_RNG_Control_Registers__Status register */
#define HSM_RNG_Control_Registers__Status_StartUpFail_Pos _UINT32_(10)                                         /* (HSM_RNG_Control_Registers__Status) Start-up test failure. Position */
#define HSM_RNG_Control_Registers__Status_StartUpFail_Msk (_UINT32_(0x1) << HSM_RNG_Control_Registers__Status_StartUpFail_Pos) /* (HSM_RNG_Control_Registers__Status) Start-up test failure. Mask */
#define HSM_RNG_Control_Registers__Status_StartUpFail(value) (HSM_RNG_Control_Registers__Status_StartUpFail_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Status_StartUpFail_Pos)) /* Assignment of value for StartUpFail in the HSM_RNG_Control_Registers__Status register */
#define HSM_RNG_Control_Registers__Status_FifoAccFail_Pos _UINT32_(11)                                         /* (HSM_RNG_Control_Registers__Status) Set when a FIFO data read is performed while the NDRNG is disabled AND has its FIFO empty (FIFOLevel = 0). Position */
#define HSM_RNG_Control_Registers__Status_FifoAccFail_Msk (_UINT32_(0x1) << HSM_RNG_Control_Registers__Status_FifoAccFail_Pos) /* (HSM_RNG_Control_Registers__Status) Set when a FIFO data read is performed while the NDRNG is disabled AND has its FIFO empty (FIFOLevel = 0). Mask */
#define HSM_RNG_Control_Registers__Status_FifoAccFail(value) (HSM_RNG_Control_Registers__Status_FifoAccFail_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__Status_FifoAccFail_Pos)) /* Assignment of value for FifoAccFail in the HSM_RNG_Control_Registers__Status register */
#define HSM_RNG_Control_Registers__Status_Msk _UINT32_(0x00000FBF)                                 /* (HSM_RNG_Control_Registers__Status) Register Mask  */


/* -------- HSM_RNG_Control_Registers__InitWaitVal : (HSM Offset: 0x11034) (R/W 32) Initial wait counter value. -------- */
#define HSM_RNG_Control_Registers__InitWaitVal_RESETVALUE _UINT32_(0xFFFF)                                     /*  (HSM_RNG_Control_Registers__InitWaitVal) Initial wait counter value.  Reset Value */

#define HSM_RNG_Control_Registers__InitWaitVal_InitWaitVal_Pos _UINT32_(0)                                          /* (HSM_RNG_Control_Registers__InitWaitVal) Number of clock cycles to wait before sampling data from the noise source. Position */
#define HSM_RNG_Control_Registers__InitWaitVal_InitWaitVal_Msk (_UINT32_(0xFFFF) << HSM_RNG_Control_Registers__InitWaitVal_InitWaitVal_Pos) /* (HSM_RNG_Control_Registers__InitWaitVal) Number of clock cycles to wait before sampling data from the noise source. Mask */
#define HSM_RNG_Control_Registers__InitWaitVal_InitWaitVal(value) (HSM_RNG_Control_Registers__InitWaitVal_InitWaitVal_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__InitWaitVal_InitWaitVal_Pos)) /* Assignment of value for InitWaitVal in the HSM_RNG_Control_Registers__InitWaitVal register */
#define HSM_RNG_Control_Registers__InitWaitVal_Msk _UINT32_(0x0000FFFF)                                 /* (HSM_RNG_Control_Registers__InitWaitVal) Register Mask  */


/* -------- HSM_RNG_Control_Registers__DisableOsc0 : (HSM Offset: 0x11038) (R/W 32) Disable oscillator rings #0 to #31. -------- */
#define HSM_RNG_Control_Registers__DisableOsc0_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_RNG_Control_Registers__DisableOsc0) Disable oscillator rings #0 to #31.  Reset Value */

#define HSM_RNG_Control_Registers__DisableOsc0_DisableOsc0_Pos _UINT32_(0)                                          /* (HSM_RNG_Control_Registers__DisableOsc0) Disable oscillator rings #0 to #31. Position */
#define HSM_RNG_Control_Registers__DisableOsc0_DisableOsc0_Msk (_UINT32_(0xFFFFFFFF) << HSM_RNG_Control_Registers__DisableOsc0_DisableOsc0_Pos) /* (HSM_RNG_Control_Registers__DisableOsc0) Disable oscillator rings #0 to #31. Mask */
#define HSM_RNG_Control_Registers__DisableOsc0_DisableOsc0(value) (HSM_RNG_Control_Registers__DisableOsc0_DisableOsc0_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__DisableOsc0_DisableOsc0_Pos)) /* Assignment of value for DisableOsc0 in the HSM_RNG_Control_Registers__DisableOsc0 register */
#define HSM_RNG_Control_Registers__DisableOsc0_Msk _UINT32_(0xFFFFFFFF)                                 /* (HSM_RNG_Control_Registers__DisableOsc0) Register Mask  */


/* -------- HSM_RNG_Control_Registers__DisableOsc1 : (HSM Offset: 0x1103C) (R/W 32) Disable oscillator rings #32 to #63. -------- */
#define HSM_RNG_Control_Registers__DisableOsc1_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_RNG_Control_Registers__DisableOsc1) Disable oscillator rings #32 to #63.  Reset Value */

#define HSM_RNG_Control_Registers__DisableOsc1_DisableOsc1_Pos _UINT32_(0)                                          /* (HSM_RNG_Control_Registers__DisableOsc1) Disable oscillator rings #32 to #63. Position */
#define HSM_RNG_Control_Registers__DisableOsc1_DisableOsc1_Msk (_UINT32_(0xFFFFFFFF) << HSM_RNG_Control_Registers__DisableOsc1_DisableOsc1_Pos) /* (HSM_RNG_Control_Registers__DisableOsc1) Disable oscillator rings #32 to #63. Mask */
#define HSM_RNG_Control_Registers__DisableOsc1_DisableOsc1(value) (HSM_RNG_Control_Registers__DisableOsc1_DisableOsc1_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__DisableOsc1_DisableOsc1_Pos)) /* Assignment of value for DisableOsc1 in the HSM_RNG_Control_Registers__DisableOsc1 register */
#define HSM_RNG_Control_Registers__DisableOsc1_Msk _UINT32_(0xFFFFFFFF)                                 /* (HSM_RNG_Control_Registers__DisableOsc1) Register Mask  */


/* -------- HSM_RNG_Control_Registers__SwOffTmrVal : (HSM Offset: 0x11040) (R/W 32) Switch off timer value. -------- */
#define HSM_RNG_Control_Registers__SwOffTmrVal_RESETVALUE _UINT32_(0xFFFF)                                     /*  (HSM_RNG_Control_Registers__SwOffTmrVal) Switch off timer value.  Reset Value */

#define HSM_RNG_Control_Registers__SwOffTmrVal_SwOffTmrVal_Pos _UINT32_(0)                                          /* (HSM_RNG_Control_Registers__SwOffTmrVal) Number of clk cycles to wait before stopping the rings after the FIFO is full. Position */
#define HSM_RNG_Control_Registers__SwOffTmrVal_SwOffTmrVal_Msk (_UINT32_(0xFFFF) << HSM_RNG_Control_Registers__SwOffTmrVal_SwOffTmrVal_Pos) /* (HSM_RNG_Control_Registers__SwOffTmrVal) Number of clk cycles to wait before stopping the rings after the FIFO is full. Mask */
#define HSM_RNG_Control_Registers__SwOffTmrVal_SwOffTmrVal(value) (HSM_RNG_Control_Registers__SwOffTmrVal_SwOffTmrVal_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__SwOffTmrVal_SwOffTmrVal_Pos)) /* Assignment of value for SwOffTmrVal in the HSM_RNG_Control_Registers__SwOffTmrVal register */
#define HSM_RNG_Control_Registers__SwOffTmrVal_Msk _UINT32_(0x0000FFFF)                                 /* (HSM_RNG_Control_Registers__SwOffTmrVal) Register Mask  */


/* -------- HSM_RNG_Control_Registers__ClkDiv : (HSM Offset: 0x11044) (R/W 32) Sample clock divider. -------- */
#define HSM_RNG_Control_Registers__ClkDiv_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_RNG_Control_Registers__ClkDiv) Sample clock divider.  Reset Value */

#define HSM_RNG_Control_Registers__ClkDiv_ClkDiv_Pos _UINT32_(0)                                          /* (HSM_RNG_Control_Registers__ClkDiv) Sample clock divider. The frequency at which the outputs of the rings are sampled is given by: Fs=Fpclk/(ClkDiv+1). Position */
#define HSM_RNG_Control_Registers__ClkDiv_ClkDiv_Msk (_UINT32_(0xFF) << HSM_RNG_Control_Registers__ClkDiv_ClkDiv_Pos) /* (HSM_RNG_Control_Registers__ClkDiv) Sample clock divider. The frequency at which the outputs of the rings are sampled is given by: Fs=Fpclk/(ClkDiv+1). Mask */
#define HSM_RNG_Control_Registers__ClkDiv_ClkDiv(value) (HSM_RNG_Control_Registers__ClkDiv_ClkDiv_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__ClkDiv_ClkDiv_Pos)) /* Assignment of value for ClkDiv in the HSM_RNG_Control_Registers__ClkDiv register */
#define HSM_RNG_Control_Registers__ClkDiv_Msk _UINT32_(0x000000FF)                                 /* (HSM_RNG_Control_Registers__ClkDiv) Register Mask  */


/* -------- HSM_RNG_Control_Registers__AIS31Conf0 : (HSM Offset: 0x11048) (R/W 32) AIS31 configuration register 0. -------- */
#define HSM_RNG_Control_Registers__AIS31Conf0_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_RNG_Control_Registers__AIS31Conf0) AIS31 configuration register 0.  Reset Value */

#define HSM_RNG_Control_Registers__AIS31Conf0_StartUpThreshold_Pos _UINT32_(0)                                          /* (HSM_RNG_Control_Registers__AIS31Conf0) Start-up test threshold. Position */
#define HSM_RNG_Control_Registers__AIS31Conf0_StartUpThreshold_Msk (_UINT32_(0xFFFF) << HSM_RNG_Control_Registers__AIS31Conf0_StartUpThreshold_Pos) /* (HSM_RNG_Control_Registers__AIS31Conf0) Start-up test threshold. Mask */
#define HSM_RNG_Control_Registers__AIS31Conf0_StartUpThreshold(value) (HSM_RNG_Control_Registers__AIS31Conf0_StartUpThreshold_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__AIS31Conf0_StartUpThreshold_Pos)) /* Assignment of value for StartUpThreshold in the HSM_RNG_Control_Registers__AIS31Conf0 register */
#define HSM_RNG_Control_Registers__AIS31Conf0_OnlineThreshold_Pos _UINT32_(16)                                         /* (HSM_RNG_Control_Registers__AIS31Conf0) Online threshold. Position */
#define HSM_RNG_Control_Registers__AIS31Conf0_OnlineThreshold_Msk (_UINT32_(0xFFFF) << HSM_RNG_Control_Registers__AIS31Conf0_OnlineThreshold_Pos) /* (HSM_RNG_Control_Registers__AIS31Conf0) Online threshold. Mask */
#define HSM_RNG_Control_Registers__AIS31Conf0_OnlineThreshold(value) (HSM_RNG_Control_Registers__AIS31Conf0_OnlineThreshold_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__AIS31Conf0_OnlineThreshold_Pos)) /* Assignment of value for OnlineThreshold in the HSM_RNG_Control_Registers__AIS31Conf0 register */
#define HSM_RNG_Control_Registers__AIS31Conf0_Msk _UINT32_(0xFFFFFFFF)                                 /* (HSM_RNG_Control_Registers__AIS31Conf0) Register Mask  */


/* -------- HSM_RNG_Control_Registers__AIS31Conf1 : (HSM Offset: 0x1104C) (R/W 32) AIS31 configuration register 1. -------- */
#define HSM_RNG_Control_Registers__AIS31Conf1_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_RNG_Control_Registers__AIS31Conf1) AIS31 configuration register 1.  Reset Value */

#define HSM_RNG_Control_Registers__AIS31Conf1_OnlineRepThreshold_Pos _UINT32_(0)                                          /* (HSM_RNG_Control_Registers__AIS31Conf1) Online repeat threshold. Position */
#define HSM_RNG_Control_Registers__AIS31Conf1_OnlineRepThreshold_Msk (_UINT32_(0xFFFF) << HSM_RNG_Control_Registers__AIS31Conf1_OnlineRepThreshold_Pos) /* (HSM_RNG_Control_Registers__AIS31Conf1) Online repeat threshold. Mask */
#define HSM_RNG_Control_Registers__AIS31Conf1_OnlineRepThreshold(value) (HSM_RNG_Control_Registers__AIS31Conf1_OnlineRepThreshold_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__AIS31Conf1_OnlineRepThreshold_Pos)) /* Assignment of value for OnlineRepThreshold in the HSM_RNG_Control_Registers__AIS31Conf1 register */
#define HSM_RNG_Control_Registers__AIS31Conf1_HExpectedValue_Pos _UINT32_(16)                                         /* (HSM_RNG_Control_Registers__AIS31Conf1) Expected history value. Position */
#define HSM_RNG_Control_Registers__AIS31Conf1_HExpectedValue_Msk (_UINT32_(0xFFFF) << HSM_RNG_Control_Registers__AIS31Conf1_HExpectedValue_Pos) /* (HSM_RNG_Control_Registers__AIS31Conf1) Expected history value. Mask */
#define HSM_RNG_Control_Registers__AIS31Conf1_HExpectedValue(value) (HSM_RNG_Control_Registers__AIS31Conf1_HExpectedValue_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__AIS31Conf1_HExpectedValue_Pos)) /* Assignment of value for HExpectedValue in the HSM_RNG_Control_Registers__AIS31Conf1 register */
#define HSM_RNG_Control_Registers__AIS31Conf1_Msk _UINT32_(0xFFFFFFFF)                                 /* (HSM_RNG_Control_Registers__AIS31Conf1) Register Mask  */


/* -------- HSM_RNG_Control_Registers__AIS31Conf2 : (HSM Offset: 0x11050) (R/W 32) AIS31 configuration register 2. -------- */
#define HSM_RNG_Control_Registers__AIS31Conf2_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_RNG_Control_Registers__AIS31Conf2) AIS31 configuration register 2.  Reset Value */

#define HSM_RNG_Control_Registers__AIS31Conf2_HMin_Pos _UINT32_(0)                                          /* (HSM_RNG_Control_Registers__AIS31Conf2) Minimum allowed history value. Position */
#define HSM_RNG_Control_Registers__AIS31Conf2_HMin_Msk (_UINT32_(0xFFFF) << HSM_RNG_Control_Registers__AIS31Conf2_HMin_Pos) /* (HSM_RNG_Control_Registers__AIS31Conf2) Minimum allowed history value. Mask */
#define HSM_RNG_Control_Registers__AIS31Conf2_HMin(value) (HSM_RNG_Control_Registers__AIS31Conf2_HMin_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__AIS31Conf2_HMin_Pos)) /* Assignment of value for HMin in the HSM_RNG_Control_Registers__AIS31Conf2 register */
#define HSM_RNG_Control_Registers__AIS31Conf2_HMa_Pos _UINT32_(16)                                         /* (HSM_RNG_Control_Registers__AIS31Conf2) Maximum allowed history value. Position */
#define HSM_RNG_Control_Registers__AIS31Conf2_HMa_Msk (_UINT32_(0xFFFF) << HSM_RNG_Control_Registers__AIS31Conf2_HMa_Pos) /* (HSM_RNG_Control_Registers__AIS31Conf2) Maximum allowed history value. Mask */
#define HSM_RNG_Control_Registers__AIS31Conf2_HMa(value) (HSM_RNG_Control_Registers__AIS31Conf2_HMa_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__AIS31Conf2_HMa_Pos)) /* Assignment of value for HMa in the HSM_RNG_Control_Registers__AIS31Conf2 register */
#define HSM_RNG_Control_Registers__AIS31Conf2_Msk _UINT32_(0xFFFFFFFF)                                 /* (HSM_RNG_Control_Registers__AIS31Conf2) Register Mask  */


/* -------- HSM_RNG_Control_Registers__AIS31Status : (HSM Offset: 0x11054) (R/W 32) AIS31 status register. -------- */
#define HSM_RNG_Control_Registers__AIS31Status_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_RNG_Control_Registers__AIS31Status) AIS31 status register.  Reset Value */

#define HSM_RNG_Control_Registers__AIS31Status_NumPrelimAlarms_Pos _UINT32_(0)                                          /* (HSM_RNG_Control_Registers__AIS31Status) Number of preliminary noise alarms since counter was last cleared. Position */
#define HSM_RNG_Control_Registers__AIS31Status_NumPrelimAlarms_Msk (_UINT32_(0xFFFF) << HSM_RNG_Control_Registers__AIS31Status_NumPrelimAlarms_Pos) /* (HSM_RNG_Control_Registers__AIS31Status) Number of preliminary noise alarms since counter was last cleared. Mask */
#define HSM_RNG_Control_Registers__AIS31Status_NumPrelimAlarms(value) (HSM_RNG_Control_Registers__AIS31Status_NumPrelimAlarms_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__AIS31Status_NumPrelimAlarms_Pos)) /* Assignment of value for NumPrelimAlarms in the HSM_RNG_Control_Registers__AIS31Status register */
#define HSM_RNG_Control_Registers__AIS31Status_PrelimNoiseAlarmRng_Pos _UINT32_(16)                                         /* (HSM_RNG_Control_Registers__AIS31Status) Last preliminary noise alarm occurred due to history value out of range. Position */
#define HSM_RNG_Control_Registers__AIS31Status_PrelimNoiseAlarmRng_Msk (_UINT32_(0x1) << HSM_RNG_Control_Registers__AIS31Status_PrelimNoiseAlarmRng_Pos) /* (HSM_RNG_Control_Registers__AIS31Status) Last preliminary noise alarm occurred due to history value out of range. Mask */
#define HSM_RNG_Control_Registers__AIS31Status_PrelimNoiseAlarmRng(value) (HSM_RNG_Control_Registers__AIS31Status_PrelimNoiseAlarmRng_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__AIS31Status_PrelimNoiseAlarmRng_Pos)) /* Assignment of value for PrelimNoiseAlarmRng in the HSM_RNG_Control_Registers__AIS31Status register */
#define HSM_RNG_Control_Registers__AIS31Status_PrelimNoiseAlarmRep_Pos _UINT32_(17)                                         /* (HSM_RNG_Control_Registers__AIS31Status) Last preliminary noise alarm occurred due to consecutive high X**2. Position */
#define HSM_RNG_Control_Registers__AIS31Status_PrelimNoiseAlarmRep_Msk (_UINT32_(0x1) << HSM_RNG_Control_Registers__AIS31Status_PrelimNoiseAlarmRep_Pos) /* (HSM_RNG_Control_Registers__AIS31Status) Last preliminary noise alarm occurred due to consecutive high X**2. Mask */
#define HSM_RNG_Control_Registers__AIS31Status_PrelimNoiseAlarmRep(value) (HSM_RNG_Control_Registers__AIS31Status_PrelimNoiseAlarmRep_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__AIS31Status_PrelimNoiseAlarmRep_Pos)) /* Assignment of value for PrelimNoiseAlarmRep in the HSM_RNG_Control_Registers__AIS31Status register */
#define HSM_RNG_Control_Registers__AIS31Status_Msk _UINT32_(0x0003FFFF)                                 /* (HSM_RNG_Control_Registers__AIS31Status) Register Mask  */


/* -------- HSM_RNG_Control_Registers__HwConfig : (HSM Offset: 0x11058) ( R/ 32) Hardware configuration register. -------- */
#define HSM_RNG_Control_Registers__HwConfig_RESETVALUE _UINT32_(0x37)                                       /*  (HSM_RNG_Control_Registers__HwConfig) Hardware configuration register.  Reset Value */

#define HSM_RNG_Control_Registers__HwConfig_NumbOfRings_Pos _UINT32_(0)                                          /* (HSM_RNG_Control_Registers__HwConfig) Generic g_NumRings value. Position */
#define HSM_RNG_Control_Registers__HwConfig_NumbOfRings_Msk (_UINT32_(0xFF) << HSM_RNG_Control_Registers__HwConfig_NumbOfRings_Pos) /* (HSM_RNG_Control_Registers__HwConfig) Generic g_NumRings value. Mask */
#define HSM_RNG_Control_Registers__HwConfig_NumbOfRings(value) (HSM_RNG_Control_Registers__HwConfig_NumbOfRings_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__HwConfig_NumbOfRings_Pos)) /* Assignment of value for NumbOfRings in the HSM_RNG_Control_Registers__HwConfig register */
#define HSM_RNG_Control_Registers__HwConfig_AIS31_Pos _UINT32_(8)                                          /* (HSM_RNG_Control_Registers__HwConfig) Generic g_AIS31 value. Position */
#define HSM_RNG_Control_Registers__HwConfig_AIS31_Msk (_UINT32_(0x1) << HSM_RNG_Control_Registers__HwConfig_AIS31_Pos) /* (HSM_RNG_Control_Registers__HwConfig) Generic g_AIS31 value. Mask */
#define HSM_RNG_Control_Registers__HwConfig_AIS31(value) (HSM_RNG_Control_Registers__HwConfig_AIS31_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__HwConfig_AIS31_Pos)) /* Assignment of value for AIS31 in the HSM_RNG_Control_Registers__HwConfig register */
#define HSM_RNG_Control_Registers__HwConfig_AIS31Full_Pos _UINT32_(9)                                          /* (HSM_RNG_Control_Registers__HwConfig) Generic g_AIS31Full value. Position */
#define HSM_RNG_Control_Registers__HwConfig_AIS31Full_Msk (_UINT32_(0x1) << HSM_RNG_Control_Registers__HwConfig_AIS31Full_Pos) /* (HSM_RNG_Control_Registers__HwConfig) Generic g_AIS31Full value. Mask */
#define HSM_RNG_Control_Registers__HwConfig_AIS31Full(value) (HSM_RNG_Control_Registers__HwConfig_AIS31Full_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__HwConfig_AIS31Full_Pos)) /* Assignment of value for AIS31Full in the HSM_RNG_Control_Registers__HwConfig register */
#define HSM_RNG_Control_Registers__HwConfig_Msk _UINT32_(0x000003FF)                                 /* (HSM_RNG_Control_Registers__HwConfig) Register Mask  */

#define HSM_RNG_Control_Registers__HwConfig_AIS_Pos _UINT32_(8)                                          /* (HSM_RNG_Control_Registers__HwConfig Position) Generic g_AIS3x value. */
#define HSM_RNG_Control_Registers__HwConfig_AIS_Msk (_UINT32_(0x1) << HSM_RNG_Control_Registers__HwConfig_AIS_Pos) /* (HSM_RNG_Control_Registers__HwConfig Mask) AIS */
#define HSM_RNG_Control_Registers__HwConfig_AIS(value) (HSM_RNG_Control_Registers__HwConfig_AIS_Msk & (_UINT32_(value) << HSM_RNG_Control_Registers__HwConfig_AIS_Pos)) 

/* -------- HSM_PK_Registers__Pointers : (HSM Offset: 0x12000) (R/W 32) Pointers register. -------- */
#define HSM_PK_Registers__Pointers_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_PK_Registers__Pointers) Pointers register.  Reset Value */

#define HSM_PK_Registers__Pointers_OpPtrA_Pos _UINT32_(0)                                          /* (HSM_PK_Registers__Pointers) When executing primitive arithmetic operations, this pointer defines where operand A is located in memory (location 0x0 to 0xF). Position */
#define HSM_PK_Registers__Pointers_OpPtrA_Msk (_UINT32_(0xF) << HSM_PK_Registers__Pointers_OpPtrA_Pos) /* (HSM_PK_Registers__Pointers) When executing primitive arithmetic operations, this pointer defines where operand A is located in memory (location 0x0 to 0xF). Mask */
#define HSM_PK_Registers__Pointers_OpPtrA(value) (HSM_PK_Registers__Pointers_OpPtrA_Msk & (_UINT32_(value) << HSM_PK_Registers__Pointers_OpPtrA_Pos)) /* Assignment of value for OpPtrA in the HSM_PK_Registers__Pointers register */
#define HSM_PK_Registers__Pointers_OpPtrB_Pos _UINT32_(8)                                          /* (HSM_PK_Registers__Pointers) When executing primitive arithmetic operations, this pointer defines where operand B is located in memory (location 0x0 to 0xF). Position */
#define HSM_PK_Registers__Pointers_OpPtrB_Msk (_UINT32_(0xF) << HSM_PK_Registers__Pointers_OpPtrB_Pos) /* (HSM_PK_Registers__Pointers) When executing primitive arithmetic operations, this pointer defines where operand B is located in memory (location 0x0 to 0xF). Mask */
#define HSM_PK_Registers__Pointers_OpPtrB(value) (HSM_PK_Registers__Pointers_OpPtrB_Msk & (_UINT32_(value) << HSM_PK_Registers__Pointers_OpPtrB_Pos)) /* Assignment of value for OpPtrB in the HSM_PK_Registers__Pointers register */
#define HSM_PK_Registers__Pointers_OpPtrC_Pos _UINT32_(16)                                         /* (HSM_PK_Registers__Pointers) When executing primitive arithmetic operations, this pointer defines the location (0x0 to 0xF) where the result will be stored in memory. Position */
#define HSM_PK_Registers__Pointers_OpPtrC_Msk (_UINT32_(0xF) << HSM_PK_Registers__Pointers_OpPtrC_Pos) /* (HSM_PK_Registers__Pointers) When executing primitive arithmetic operations, this pointer defines the location (0x0 to 0xF) where the result will be stored in memory. Mask */
#define HSM_PK_Registers__Pointers_OpPtrC(value) (HSM_PK_Registers__Pointers_OpPtrC_Msk & (_UINT32_(value) << HSM_PK_Registers__Pointers_OpPtrC_Pos)) /* Assignment of value for OpPtrC in the HSM_PK_Registers__Pointers register */
#define HSM_PK_Registers__Pointers_OpPtrN_Pos _UINT32_(24)                                         /* (HSM_PK_Registers__Pointers) When executing primitive arithmetic operations, this pointer defines the location where the modulus is located in memory (location 0x0 to 0xF). Position */
#define HSM_PK_Registers__Pointers_OpPtrN_Msk (_UINT32_(0xF) << HSM_PK_Registers__Pointers_OpPtrN_Pos) /* (HSM_PK_Registers__Pointers) When executing primitive arithmetic operations, this pointer defines the location where the modulus is located in memory (location 0x0 to 0xF). Mask */
#define HSM_PK_Registers__Pointers_OpPtrN(value) (HSM_PK_Registers__Pointers_OpPtrN_Msk & (_UINT32_(value) << HSM_PK_Registers__Pointers_OpPtrN_Pos)) /* Assignment of value for OpPtrN in the HSM_PK_Registers__Pointers register */
#define HSM_PK_Registers__Pointers_Msk        _UINT32_(0x0F0F0F0F)                                 /* (HSM_PK_Registers__Pointers) Register Mask  */


/* -------- HSM_PK_Registers__Command : (HSM Offset: 0x12004) (R/W 32) Command register. -------- */
#define HSM_PK_Registers__Command_RESETVALUE  _UINT32_(0x0F)                                       /*  (HSM_PK_Registers__Command) Command register.  Reset Value */

#define HSM_PK_Registers__Command_OpeAddr_Pos _UINT32_(0)                                          /* (HSM_PK_Registers__Command) This field defines the operation to be performed. See documentation for more details. Position */
#define HSM_PK_Registers__Command_OpeAddr_Msk (_UINT32_(0x7F) << HSM_PK_Registers__Command_OpeAddr_Pos) /* (HSM_PK_Registers__Command) This field defines the operation to be performed. See documentation for more details. Mask */
#define HSM_PK_Registers__Command_OpeAddr(value) (HSM_PK_Registers__Command_OpeAddr_Msk & (_UINT32_(value) << HSM_PK_Registers__Command_OpeAddr_Pos)) /* Assignment of value for OpeAddr in the HSM_PK_Registers__Command register */
#define HSM_PK_Registers__Command_FieldF_Pos  _UINT32_(7)                                          /* (HSM_PK_Registers__Command) '0': Field is GF(p) '1': Field is GF(2**m) Position */
#define HSM_PK_Registers__Command_FieldF_Msk  (_UINT32_(0x1) << HSM_PK_Registers__Command_FieldF_Pos) /* (HSM_PK_Registers__Command) '0': Field is GF(p) '1': Field is GF(2**m) Mask */
#define HSM_PK_Registers__Command_FieldF(value) (HSM_PK_Registers__Command_FieldF_Msk & (_UINT32_(value) << HSM_PK_Registers__Command_FieldF_Pos)) /* Assignment of value for FieldF in the HSM_PK_Registers__Command register */
#define HSM_PK_Registers__Command_OpBytesM1_Pos _UINT32_(8)                                          /* (HSM_PK_Registers__Command) This field defines the size (= number of bytes minus one) of the operands for the current operation. Possible values are limited by the maximum supported operand size. Examples: - 0x014 -> ECC on curve K-163 - 0x01F -> ECC on curve P-256 - 0x02F -> ECC on curve P-384 - 0x033 -> ECC on curve K-409 - 0x041 -> ECC on curve P-521 - 0x07F -> 1024-bit RSA - 0x09F -> 1280-bit RSA - 0x1FF -> 4096-bit RSA - 0x3FF -> 8192-bit RSA Position */
#define HSM_PK_Registers__Command_OpBytesM1_Msk (_UINT32_(0x3FF) << HSM_PK_Registers__Command_OpBytesM1_Pos) /* (HSM_PK_Registers__Command) This field defines the size (= number of bytes minus one) of the operands for the current operation. Possible values are limited by the maximum supported operand size. Examples: - 0x014 -> ECC on curve K-163 - 0x01F -> ECC on curve P-256 - 0x02F -> ECC on curve P-384 - 0x033 -> ECC on curve K-409 - 0x041 -> ECC on curve P-521 - 0x07F -> 1024-bit RSA - 0x09F -> 1280-bit RSA - 0x1FF -> 4096-bit RSA - 0x3FF -> 8192-bit RSA Mask */
#define HSM_PK_Registers__Command_OpBytesM1(value) (HSM_PK_Registers__Command_OpBytesM1_Msk & (_UINT32_(value) << HSM_PK_Registers__Command_OpBytesM1_Pos)) /* Assignment of value for OpBytesM1 in the HSM_PK_Registers__Command register */
#define HSM_PK_Registers__Command_RandMod_Pos _UINT32_(19)                                         /* (HSM_PK_Registers__Command) Enable randomization of modulus (counter-measure). Position */
#define HSM_PK_Registers__Command_RandMod_Msk (_UINT32_(0x1) << HSM_PK_Registers__Command_RandMod_Pos) /* (HSM_PK_Registers__Command) Enable randomization of modulus (counter-measure). Mask */
#define HSM_PK_Registers__Command_RandMod(value) (HSM_PK_Registers__Command_RandMod_Msk & (_UINT32_(value) << HSM_PK_Registers__Command_RandMod_Pos)) /* Assignment of value for RandMod in the HSM_PK_Registers__Command register */
#define HSM_PK_Registers__Command_SelCurve_Pos _UINT32_(20)                                         /* (HSM_PK_Registers__Command) Enable accelerator for specific curve modulus: 0x0: No acceleration (default) 0x1: P256 0x2: P384 0x3: P521 0x4: P192 0x5: Curve25519 0x6: Ed25519 This field has no effect when the optional acceleration hardware is not included. Position */
#define HSM_PK_Registers__Command_SelCurve_Msk (_UINT32_(0x7) << HSM_PK_Registers__Command_SelCurve_Pos) /* (HSM_PK_Registers__Command) Enable accelerator for specific curve modulus: 0x0: No acceleration (default) 0x1: P256 0x2: P384 0x3: P521 0x4: P192 0x5: Curve25519 0x6: Ed25519 This field has no effect when the optional acceleration hardware is not included. Mask */
#define HSM_PK_Registers__Command_SelCurve(value) (HSM_PK_Registers__Command_SelCurve_Msk & (_UINT32_(value) << HSM_PK_Registers__Command_SelCurve_Pos)) /* Assignment of value for SelCurve in the HSM_PK_Registers__Command register */
#define HSM_PK_Registers__Command_RandKE_Pos  _UINT32_(24)                                         /* (HSM_PK_Registers__Command) Enable randomization of exponent/scalar (counter-measure). Position */
#define HSM_PK_Registers__Command_RandKE_Msk  (_UINT32_(0x1) << HSM_PK_Registers__Command_RandKE_Pos) /* (HSM_PK_Registers__Command) Enable randomization of exponent/scalar (counter-measure). Mask */
#define HSM_PK_Registers__Command_RandKE(value) (HSM_PK_Registers__Command_RandKE_Msk & (_UINT32_(value) << HSM_PK_Registers__Command_RandKE_Pos)) /* Assignment of value for RandKE in the HSM_PK_Registers__Command register */
#define HSM_PK_Registers__Command_RandProj_Pos _UINT32_(25)                                         /* (HSM_PK_Registers__Command) Enable randomization of projective coordinates (counter-measure). Position */
#define HSM_PK_Registers__Command_RandProj_Msk (_UINT32_(0x1) << HSM_PK_Registers__Command_RandProj_Pos) /* (HSM_PK_Registers__Command) Enable randomization of projective coordinates (counter-measure). Mask */
#define HSM_PK_Registers__Command_RandProj(value) (HSM_PK_Registers__Command_RandProj_Msk & (_UINT32_(value) << HSM_PK_Registers__Command_RandProj_Pos)) /* Assignment of value for RandProj in the HSM_PK_Registers__Command register */
#define HSM_PK_Registers__Command_Edwards_Pos _UINT32_(26)                                         /* (HSM_PK_Registers__Command) Enable Edwards curve (see operation description). Position */
#define HSM_PK_Registers__Command_Edwards_Msk (_UINT32_(0x1) << HSM_PK_Registers__Command_Edwards_Pos) /* (HSM_PK_Registers__Command) Enable Edwards curve (see operation description). Mask */
#define HSM_PK_Registers__Command_Edwards(value) (HSM_PK_Registers__Command_Edwards_Msk & (_UINT32_(value) << HSM_PK_Registers__Command_Edwards_Pos)) /* Assignment of value for Edwards in the HSM_PK_Registers__Command register */
#define HSM_PK_Registers__Command_SwapBytes_Pos _UINT32_(28)                                         /* (HSM_PK_Registers__Command) Swap the bytes on AHB interface: '0': Native format (little endian) '1': Byte swapped (big endian) See also section 4.2.1. This bit must be programmed before writing/reading any data in data memory. Position */
#define HSM_PK_Registers__Command_SwapBytes_Msk (_UINT32_(0x1) << HSM_PK_Registers__Command_SwapBytes_Pos) /* (HSM_PK_Registers__Command) Swap the bytes on AHB interface: '0': Native format (little endian) '1': Byte swapped (big endian) See also section 4.2.1. This bit must be programmed before writing/reading any data in data memory. Mask */
#define HSM_PK_Registers__Command_SwapBytes(value) (HSM_PK_Registers__Command_SwapBytes_Msk & (_UINT32_(value) << HSM_PK_Registers__Command_SwapBytes_Pos)) /* Assignment of value for SwapBytes in the HSM_PK_Registers__Command register */
#define HSM_PK_Registers__Command_FlagA_Pos   _UINT32_(29)                                         /* (HSM_PK_Registers__Command) See operation description. Position */
#define HSM_PK_Registers__Command_FlagA_Msk   (_UINT32_(0x1) << HSM_PK_Registers__Command_FlagA_Pos) /* (HSM_PK_Registers__Command) See operation description. Mask */
#define HSM_PK_Registers__Command_FlagA(value) (HSM_PK_Registers__Command_FlagA_Msk & (_UINT32_(value) << HSM_PK_Registers__Command_FlagA_Pos)) /* Assignment of value for FlagA in the HSM_PK_Registers__Command register */
#define HSM_PK_Registers__Command_FlagB_Pos   _UINT32_(30)                                         /* (HSM_PK_Registers__Command) See operation description. Position */
#define HSM_PK_Registers__Command_FlagB_Msk   (_UINT32_(0x1) << HSM_PK_Registers__Command_FlagB_Pos) /* (HSM_PK_Registers__Command) See operation description. Mask */
#define HSM_PK_Registers__Command_FlagB(value) (HSM_PK_Registers__Command_FlagB_Msk & (_UINT32_(value) << HSM_PK_Registers__Command_FlagB_Pos)) /* Assignment of value for FlagB in the HSM_PK_Registers__Command register */
#define HSM_PK_Registers__Command_CalcR2_Pos  _UINT32_(31)                                         /* (HSM_PK_Registers__Command) This bit indicates if the IP has to calculate R**2 mod N for the next operation. This bit must be set to '1' when a new prime number has been programmed. This bit is used for primitive operations and ignored for the other operations. '0': don't recalculate R**2 mod N '1': re-calculate R**2 mod N Position */
#define HSM_PK_Registers__Command_CalcR2_Msk  (_UINT32_(0x1) << HSM_PK_Registers__Command_CalcR2_Pos) /* (HSM_PK_Registers__Command) This bit indicates if the IP has to calculate R**2 mod N for the next operation. This bit must be set to '1' when a new prime number has been programmed. This bit is used for primitive operations and ignored for the other operations. '0': don't recalculate R**2 mod N '1': re-calculate R**2 mod N Mask */
#define HSM_PK_Registers__Command_CalcR2(value) (HSM_PK_Registers__Command_CalcR2_Msk & (_UINT32_(value) << HSM_PK_Registers__Command_CalcR2_Pos)) /* Assignment of value for CalcR2 in the HSM_PK_Registers__Command register */
#define HSM_PK_Registers__Command_Msk         _UINT32_(0xF77BFFFF)                                 /* (HSM_PK_Registers__Command) Register Mask  */

#define HSM_PK_Registers__Command_CalcR_Pos   _UINT32_(31)                                         /* (HSM_PK_Registers__Command Position) This bit indicates if the IP has to calculate R**2 mod N for the next operation. This bit must be set to 'x' when a new prime number has been programmed. This bit is used for primitive operations and ignored for the other operations. 'x': don't recalculate R**2 mod N 'x': re-calculate R**2 mod N */
#define HSM_PK_Registers__Command_CalcR_Msk   (_UINT32_(0x1) << HSM_PK_Registers__Command_CalcR_Pos) /* (HSM_PK_Registers__Command Mask) CalcR */
#define HSM_PK_Registers__Command_CalcR(value) (HSM_PK_Registers__Command_CalcR_Msk & (_UINT32_(value) << HSM_PK_Registers__Command_CalcR_Pos)) 

/* -------- HSM_PK_Registers__Control : (HSM Offset: 0x12008) ( /W 32) Command register. -------- */
#define HSM_PK_Registers__Control_RESETVALUE  _UINT32_(0x00)                                       /*  (HSM_PK_Registers__Control) Command register.  Reset Value */

#define HSM_PK_Registers__Control_Start_Pos   _UINT32_(0)                                          /* (HSM_PK_Registers__Control) Writing a '1' starts the processing. Position */
#define HSM_PK_Registers__Control_Start_Msk   (_UINT32_(0x1) << HSM_PK_Registers__Control_Start_Pos) /* (HSM_PK_Registers__Control) Writing a '1' starts the processing. Mask */
#define HSM_PK_Registers__Control_Start(value) (HSM_PK_Registers__Control_Start_Msk & (_UINT32_(value) << HSM_PK_Registers__Control_Start_Pos)) /* Assignment of value for Start in the HSM_PK_Registers__Control register */
#define HSM_PK_Registers__Control_ClearIRQ_Pos _UINT32_(1)                                          /* (HSM_PK_Registers__Control) Writing a '1' clears the IRQ output. Position */
#define HSM_PK_Registers__Control_ClearIRQ_Msk (_UINT32_(0x1) << HSM_PK_Registers__Control_ClearIRQ_Pos) /* (HSM_PK_Registers__Control) Writing a '1' clears the IRQ output. Mask */
#define HSM_PK_Registers__Control_ClearIRQ(value) (HSM_PK_Registers__Control_ClearIRQ_Msk & (_UINT32_(value) << HSM_PK_Registers__Control_ClearIRQ_Pos)) /* Assignment of value for ClearIRQ in the HSM_PK_Registers__Control register */
#define HSM_PK_Registers__Control_Msk         _UINT32_(0x00000003)                                 /* (HSM_PK_Registers__Control) Register Mask  */


/* -------- HSM_PK_Registers__Status : (HSM Offset: 0x1200C) ( R/ 32) Status register. -------- */
#define HSM_PK_Registers__Status_RESETVALUE   _UINT32_(0x00)                                       /*  (HSM_PK_Registers__Status) Status register.  Reset Value */

#define HSM_PK_Registers__Status_ErrorFlags_Pos _UINT32_(4)                                          /* (HSM_PK_Registers__Status) These bits indicate an error condition. They are updated at the end of the operation. They are cleared when starting a new operation. See documentation for more details. Position */
#define HSM_PK_Registers__Status_ErrorFlags_Msk (_UINT32_(0xFFF) << HSM_PK_Registers__Status_ErrorFlags_Pos) /* (HSM_PK_Registers__Status) These bits indicate an error condition. They are updated at the end of the operation. They are cleared when starting a new operation. See documentation for more details. Mask */
#define HSM_PK_Registers__Status_ErrorFlags(value) (HSM_PK_Registers__Status_ErrorFlags_Msk & (_UINT32_(value) << HSM_PK_Registers__Status_ErrorFlags_Pos)) /* Assignment of value for ErrorFlags in the HSM_PK_Registers__Status register */
#define HSM_PK_Registers__Status_PK_Busy_Pos  _UINT32_(16)                                         /* (HSM_PK_Registers__Status) This bit reflects the BUSY output value. It is set when the operation starts and it is cleared when the operation is finished. Position */
#define HSM_PK_Registers__Status_PK_Busy_Msk  (_UINT32_(0x1) << HSM_PK_Registers__Status_PK_Busy_Pos) /* (HSM_PK_Registers__Status) This bit reflects the BUSY output value. It is set when the operation starts and it is cleared when the operation is finished. Mask */
#define HSM_PK_Registers__Status_PK_Busy(value) (HSM_PK_Registers__Status_PK_Busy_Msk & (_UINT32_(value) << HSM_PK_Registers__Status_PK_Busy_Pos)) /* Assignment of value for PK_Busy in the HSM_PK_Registers__Status register */
#define HSM_PK_Registers__Status_IntrptStatus_Pos _UINT32_(17)                                         /* (HSM_PK_Registers__Status) This bit reflects the IRQ output value. It is set when the operation is finished. It is cleared when the CPU writes the bit 1 of Control Register. Position */
#define HSM_PK_Registers__Status_IntrptStatus_Msk (_UINT32_(0x1) << HSM_PK_Registers__Status_IntrptStatus_Pos) /* (HSM_PK_Registers__Status) This bit reflects the IRQ output value. It is set when the operation is finished. It is cleared when the CPU writes the bit 1 of Control Register. Mask */
#define HSM_PK_Registers__Status_IntrptStatus(value) (HSM_PK_Registers__Status_IntrptStatus_Msk & (_UINT32_(value) << HSM_PK_Registers__Status_IntrptStatus_Pos)) /* Assignment of value for IntrptStatus in the HSM_PK_Registers__Status register */
#define HSM_PK_Registers__Status_FailPtr_Pos  _UINT32_(24)                                         /* (HSM_PK_Registers__Status) These bits indicate which data location generated the error flag. They are not available for all error flags. Position */
#define HSM_PK_Registers__Status_FailPtr_Msk  (_UINT32_(0x1F) << HSM_PK_Registers__Status_FailPtr_Pos) /* (HSM_PK_Registers__Status) These bits indicate which data location generated the error flag. They are not available for all error flags. Mask */
#define HSM_PK_Registers__Status_FailPtr(value) (HSM_PK_Registers__Status_FailPtr_Msk & (_UINT32_(value) << HSM_PK_Registers__Status_FailPtr_Pos)) /* Assignment of value for FailPtr in the HSM_PK_Registers__Status register */
#define HSM_PK_Registers__Status_Msk          _UINT32_(0x1F03FFF0)                                 /* (HSM_PK_Registers__Status) Register Mask  */


/* -------- HSM_PK_Registers__Timer : (HSM Offset: 0x12014) (R/W 32) Timer register. -------- */
#define HSM_PK_Registers__Timer_RESETVALUE    _UINT32_(0x00)                                       /*  (HSM_PK_Registers__Timer) Timer register.  Reset Value */

#define HSM_PK_Registers__Timer_Timer_Pos     _UINT32_(1)                                          /* (HSM_PK_Registers__Timer) Number of core clock cycles. Position */
#define HSM_PK_Registers__Timer_Timer_Msk     (_UINT32_(0x7FFFFFFF) << HSM_PK_Registers__Timer_Timer_Pos) /* (HSM_PK_Registers__Timer) Number of core clock cycles. Mask */
#define HSM_PK_Registers__Timer_Timer(value)  (HSM_PK_Registers__Timer_Timer_Msk & (_UINT32_(value) << HSM_PK_Registers__Timer_Timer_Pos)) /* Assignment of value for Timer in the HSM_PK_Registers__Timer register */
#define HSM_PK_Registers__Timer_Msk           _UINT32_(0xFFFFFFFE)                                 /* (HSM_PK_Registers__Timer) Register Mask  */


/* -------- HSM_PK_Registers__HwConfig : (HSM Offset: 0x12018) ( R/ 32) Hardware configuration register. -------- */
#define HSM_PK_Registers__HwConfig_RESETVALUE _UINT32_(0x43F30200)                                 /*  (HSM_PK_Registers__HwConfig) Hardware configuration register.  Reset Value */

#define HSM_PK_Registers__HwConfig_MaxOpSize_Pos _UINT32_(0)                                          /* (HSM_PK_Registers__HwConfig) Maximum operand size (number of bytes). Position */
#define HSM_PK_Registers__HwConfig_MaxOpSize_Msk (_UINT32_(0xFFF) << HSM_PK_Registers__HwConfig_MaxOpSize_Pos) /* (HSM_PK_Registers__HwConfig) Maximum operand size (number of bytes). Mask */
#define HSM_PK_Registers__HwConfig_MaxOpSize(value) (HSM_PK_Registers__HwConfig_MaxOpSize_Msk & (_UINT32_(value) << HSM_PK_Registers__HwConfig_MaxOpSize_Pos)) /* Assignment of value for MaxOpSize in the HSM_PK_Registers__HwConfig register */
#define HSM_PK_Registers__HwConfig_NbMult_Pos _UINT32_(12)                                         /* (HSM_PK_Registers__HwConfig) Number of multipliers: 0x0: 1 multiplier 0x1: 4 multipliers 0x2: 16 multipliers 0x4: 64 multipliers 0x8: 256 multipliers Position */
#define HSM_PK_Registers__HwConfig_NbMult_Msk (_UINT32_(0xF) << HSM_PK_Registers__HwConfig_NbMult_Pos) /* (HSM_PK_Registers__HwConfig) Number of multipliers: 0x0: 1 multiplier 0x1: 4 multipliers 0x2: 16 multipliers 0x4: 64 multipliers 0x8: 256 multipliers Mask */
#define HSM_PK_Registers__HwConfig_NbMult(value) (HSM_PK_Registers__HwConfig_NbMult_Msk & (_UINT32_(value) << HSM_PK_Registers__HwConfig_NbMult_Pos)) /* Assignment of value for NbMult in the HSM_PK_Registers__HwConfig register */
#define HSM_PK_Registers__HwConfig_PrimeField_Pos _UINT32_(16)                                         /* (HSM_PK_Registers__HwConfig) Support prime field. Position */
#define HSM_PK_Registers__HwConfig_PrimeField_Msk (_UINT32_(0x1) << HSM_PK_Registers__HwConfig_PrimeField_Pos) /* (HSM_PK_Registers__HwConfig) Support prime field. Mask */
#define HSM_PK_Registers__HwConfig_PrimeField(value) (HSM_PK_Registers__HwConfig_PrimeField_Msk & (_UINT32_(value) << HSM_PK_Registers__HwConfig_PrimeField_Pos)) /* Assignment of value for PrimeField in the HSM_PK_Registers__HwConfig register */
#define HSM_PK_Registers__HwConfig_BinaryField_Pos _UINT32_(17)                                         /* (HSM_PK_Registers__HwConfig) Support binary field. Position */
#define HSM_PK_Registers__HwConfig_BinaryField_Msk (_UINT32_(0x1) << HSM_PK_Registers__HwConfig_BinaryField_Pos) /* (HSM_PK_Registers__HwConfig) Support binary field. Mask */
#define HSM_PK_Registers__HwConfig_BinaryField(value) (HSM_PK_Registers__HwConfig_BinaryField_Msk & (_UINT32_(value) << HSM_PK_Registers__HwConfig_BinaryField_Pos)) /* Assignment of value for BinaryField in the HSM_PK_Registers__HwConfig register */
#define HSM_PK_Registers__HwConfig_ECC_Pos    _UINT32_(18)                                         /* (HSM_PK_Registers__HwConfig) Support RAM error correction. Position */
#define HSM_PK_Registers__HwConfig_ECC_Msk    (_UINT32_(0x1) << HSM_PK_Registers__HwConfig_ECC_Pos) /* (HSM_PK_Registers__HwConfig) Support RAM error correction. Mask */
#define HSM_PK_Registers__HwConfig_ECC(value) (HSM_PK_Registers__HwConfig_ECC_Msk & (_UINT32_(value) << HSM_PK_Registers__HwConfig_ECC_Pos)) /* Assignment of value for ECC in the HSM_PK_Registers__HwConfig register */
#define HSM_PK_Registers__HwConfig_P256_Pos   _UINT32_(20)                                         /* (HSM_PK_Registers__HwConfig) Support ECC P256 acceleration. Position */
#define HSM_PK_Registers__HwConfig_P256_Msk   (_UINT32_(0x1) << HSM_PK_Registers__HwConfig_P256_Pos) /* (HSM_PK_Registers__HwConfig) Support ECC P256 acceleration. Mask */
#define HSM_PK_Registers__HwConfig_P256(value) (HSM_PK_Registers__HwConfig_P256_Msk & (_UINT32_(value) << HSM_PK_Registers__HwConfig_P256_Pos)) /* Assignment of value for P256 in the HSM_PK_Registers__HwConfig register */
#define HSM_PK_Registers__HwConfig_P384_Pos   _UINT32_(21)                                         /* (HSM_PK_Registers__HwConfig) Support ECC P384 acceleration. Position */
#define HSM_PK_Registers__HwConfig_P384_Msk   (_UINT32_(0x1) << HSM_PK_Registers__HwConfig_P384_Pos) /* (HSM_PK_Registers__HwConfig) Support ECC P384 acceleration. Mask */
#define HSM_PK_Registers__HwConfig_P384(value) (HSM_PK_Registers__HwConfig_P384_Msk & (_UINT32_(value) << HSM_PK_Registers__HwConfig_P384_Pos)) /* Assignment of value for P384 in the HSM_PK_Registers__HwConfig register */
#define HSM_PK_Registers__HwConfig_P521_Pos   _UINT32_(22)                                         /* (HSM_PK_Registers__HwConfig) Support ECC P521 acceleration. Position */
#define HSM_PK_Registers__HwConfig_P521_Msk   (_UINT32_(0x1) << HSM_PK_Registers__HwConfig_P521_Pos) /* (HSM_PK_Registers__HwConfig) Support ECC P521 acceleration. Mask */
#define HSM_PK_Registers__HwConfig_P521(value) (HSM_PK_Registers__HwConfig_P521_Msk & (_UINT32_(value) << HSM_PK_Registers__HwConfig_P521_Pos)) /* Assignment of value for P521 in the HSM_PK_Registers__HwConfig register */
#define HSM_PK_Registers__HwConfig_P192_Pos   _UINT32_(23)                                         /* (HSM_PK_Registers__HwConfig) Support ECC P192 acceleration. Position */
#define HSM_PK_Registers__HwConfig_P192_Msk   (_UINT32_(0x1) << HSM_PK_Registers__HwConfig_P192_Pos) /* (HSM_PK_Registers__HwConfig) Support ECC P192 acceleration. Mask */
#define HSM_PK_Registers__HwConfig_P192(value) (HSM_PK_Registers__HwConfig_P192_Msk & (_UINT32_(value) << HSM_PK_Registers__HwConfig_P192_Pos)) /* Assignment of value for P192 in the HSM_PK_Registers__HwConfig register */
#define HSM_PK_Registers__HwConfig_X25519_Pos _UINT32_(24)                                         /* (HSM_PK_Registers__HwConfig) Support Curve25519/Ed25519 acceleration. Position */
#define HSM_PK_Registers__HwConfig_X25519_Msk (_UINT32_(0x1) << HSM_PK_Registers__HwConfig_X25519_Pos) /* (HSM_PK_Registers__HwConfig) Support Curve25519/Ed25519 acceleration. Mask */
#define HSM_PK_Registers__HwConfig_X25519(value) (HSM_PK_Registers__HwConfig_X25519_Msk & (_UINT32_(value) << HSM_PK_Registers__HwConfig_X25519_Pos)) /* Assignment of value for X25519 in the HSM_PK_Registers__HwConfig register */
#define HSM_PK_Registers__HwConfig_AHBMaster_Pos _UINT32_(25)                                         /* (HSM_PK_Registers__HwConfig) '0': Memory access through AHB Slave and internally in the PKE.                                                                             '1': Memory access through AHB Master, outside the PKE. Position */
#define HSM_PK_Registers__HwConfig_AHBMaster_Msk (_UINT32_(0x1) << HSM_PK_Registers__HwConfig_AHBMaster_Pos) /* (HSM_PK_Registers__HwConfig) '0': Memory access through AHB Slave and internally in the PKE.                                                                             '1': Memory access through AHB Master, outside the PKE. Mask */
#define HSM_PK_Registers__HwConfig_AHBMaster(value) (HSM_PK_Registers__HwConfig_AHBMaster_Msk & (_UINT32_(value) << HSM_PK_Registers__HwConfig_AHBMaster_Pos)) /* Assignment of value for AHBMaster in the HSM_PK_Registers__HwConfig register */
#define HSM_PK_Registers__HwConfig_DisableSM_Pos _UINT32_(29)                                         /* (HSM_PK_Registers__HwConfig) State of DisableSMx input (high when SM2/SM9 operations are disabled). Position */
#define HSM_PK_Registers__HwConfig_DisableSM_Msk (_UINT32_(0x1) << HSM_PK_Registers__HwConfig_DisableSM_Pos) /* (HSM_PK_Registers__HwConfig) State of DisableSMx input (high when SM2/SM9 operations are disabled). Mask */
#define HSM_PK_Registers__HwConfig_DisableSM(value) (HSM_PK_Registers__HwConfig_DisableSM_Msk & (_UINT32_(value) << HSM_PK_Registers__HwConfig_DisableSM_Pos)) /* Assignment of value for DisableSM in the HSM_PK_Registers__HwConfig register */
#define HSM_PK_Registers__HwConfig_DisableClrMem_Pos _UINT32_(30)                                         /* (HSM_PK_Registers__HwConfig) State of DisableClrMem input (high when automatic clear of the RAM after reset is disabled). Position */
#define HSM_PK_Registers__HwConfig_DisableClrMem_Msk (_UINT32_(0x1) << HSM_PK_Registers__HwConfig_DisableClrMem_Pos) /* (HSM_PK_Registers__HwConfig) State of DisableClrMem input (high when automatic clear of the RAM after reset is disabled). Mask */
#define HSM_PK_Registers__HwConfig_DisableClrMem(value) (HSM_PK_Registers__HwConfig_DisableClrMem_Msk & (_UINT32_(value) << HSM_PK_Registers__HwConfig_DisableClrMem_Pos)) /* Assignment of value for DisableClrMem in the HSM_PK_Registers__HwConfig register */
#define HSM_PK_Registers__HwConfig_DisableCM_Pos _UINT32_(31)                                         /* (HSM_PK_Registers__HwConfig) State of DisableCM input (high when counter-measures are disabled). Position */
#define HSM_PK_Registers__HwConfig_DisableCM_Msk (_UINT32_(0x1) << HSM_PK_Registers__HwConfig_DisableCM_Pos) /* (HSM_PK_Registers__HwConfig) State of DisableCM input (high when counter-measures are disabled). Mask */
#define HSM_PK_Registers__HwConfig_DisableCM(value) (HSM_PK_Registers__HwConfig_DisableCM_Msk & (_UINT32_(value) << HSM_PK_Registers__HwConfig_DisableCM_Pos)) /* Assignment of value for DisableCM in the HSM_PK_Registers__HwConfig register */
#define HSM_PK_Registers__HwConfig_Msk        _UINT32_(0xE3F7FFFF)                                 /* (HSM_PK_Registers__HwConfig) Register Mask  */

#define HSM_PK_Registers__HwConfig_P_Pos      _UINT32_(20)                                         /* (HSM_PK_Registers__HwConfig Position) Support ECC P256 acceleration. */
#define HSM_PK_Registers__HwConfig_P_Msk      (_UINT32_(0xF) << HSM_PK_Registers__HwConfig_P_Pos)  /* (HSM_PK_Registers__HwConfig Mask) P */
#define HSM_PK_Registers__HwConfig_P(value)   (HSM_PK_Registers__HwConfig_P_Msk & (_UINT32_(value) << HSM_PK_Registers__HwConfig_P_Pos)) 
#define HSM_PK_Registers__HwConfig_X_Pos      _UINT32_(24)                                         /* (HSM_PK_Registers__HwConfig Position) Support Curve255x9/Ed255x9 acceleration. */
#define HSM_PK_Registers__HwConfig_X_Msk      (_UINT32_(0x1) << HSM_PK_Registers__HwConfig_X_Pos)  /* (HSM_PK_Registers__HwConfig Mask) X */
#define HSM_PK_Registers__HwConfig_X(value)   (HSM_PK_Registers__HwConfig_X_Msk & (_UINT32_(value) << HSM_PK_Registers__HwConfig_X_Pos)) 

/* -------- HSM_PK_Registers__OpSize : (HSM Offset: 0x1201C) (R/W 32) Operand size register. -------- */
#define HSM_PK_Registers__OpSize_RESETVALUE   _UINT32_(0x1000)                                     /*  (HSM_PK_Registers__OpSize) Operand size register.  Reset Value */

#define HSM_PK_Registers__OpSize_OpSize_Pos   _UINT32_(0)                                          /* (HSM_PK_Registers__OpSize) Operand size (number of bytes): 0x0100: 256 0x0209: 521 0x0800: 2048 0x0C00: 3072 0x1000: 4096 This register is used when the memory is accessed via AHB Master Position */
#define HSM_PK_Registers__OpSize_OpSize_Msk   (_UINT32_(0x1FFF) << HSM_PK_Registers__OpSize_OpSize_Pos) /* (HSM_PK_Registers__OpSize) Operand size (number of bytes): 0x0100: 256 0x0209: 521 0x0800: 2048 0x0C00: 3072 0x1000: 4096 This register is used when the memory is accessed via AHB Master Mask */
#define HSM_PK_Registers__OpSize_OpSize(value) (HSM_PK_Registers__OpSize_OpSize_Msk & (_UINT32_(value) << HSM_PK_Registers__OpSize_OpSize_Pos)) /* Assignment of value for OpSize in the HSM_PK_Registers__OpSize register */
#define HSM_PK_Registers__OpSize_Msk          _UINT32_(0x00001FFF)                                 /* (HSM_PK_Registers__OpSize) Register Mask  */


/* -------- HSM_PK_Registers__MemOffset : (HSM Offset: 0x12020) (R/W 32) Memory offset register. -------- */
#define HSM_PK_Registers__MemOffset_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_PK_Registers__MemOffset) Memory offset register.  Reset Value */

#define HSM_PK_Registers__MemOffset_MemOffset_Pos _UINT32_(0)                                          /* (HSM_PK_Registers__MemOffset) Memory offset for AHB Master Position */
#define HSM_PK_Registers__MemOffset_MemOffset_Msk (_UINT32_(0xFFFFFFFF) << HSM_PK_Registers__MemOffset_MemOffset_Pos) /* (HSM_PK_Registers__MemOffset) Memory offset for AHB Master Mask */
#define HSM_PK_Registers__MemOffset_MemOffset(value) (HSM_PK_Registers__MemOffset_MemOffset_Msk & (_UINT32_(value) << HSM_PK_Registers__MemOffset_MemOffset_Pos)) /* Assignment of value for MemOffset in the HSM_PK_Registers__MemOffset register */
#define HSM_PK_Registers__MemOffset_Msk       _UINT32_(0xFFFFFFFF)                                 /* (HSM_PK_Registers__MemOffset) Register Mask  */


/* -------- HSM_PK_Registers__MicroCodeOffset : (HSM Offset: 0x12024) (R/W 32) MicroCode offset register. -------- */
#define HSM_PK_Registers__MicroCodeOffset_RESETVALUE _UINT32_(0x00)                                       /*  (HSM_PK_Registers__MicroCodeOffset) MicroCode offset register.  Reset Value */

#define HSM_PK_Registers__MicroCodeOffset_MicroCodeOffset_Pos _UINT32_(0)                                          /* (HSM_PK_Registers__MicroCodeOffset) MicroCode offset for AHB Master Position */
#define HSM_PK_Registers__MicroCodeOffset_MicroCodeOffset_Msk (_UINT32_(0xFFFFFFFF) << HSM_PK_Registers__MicroCodeOffset_MicroCodeOffset_Pos) /* (HSM_PK_Registers__MicroCodeOffset) MicroCode offset for AHB Master Mask */
#define HSM_PK_Registers__MicroCodeOffset_MicroCodeOffset(value) (HSM_PK_Registers__MicroCodeOffset_MicroCodeOffset_Msk & (_UINT32_(value) << HSM_PK_Registers__MicroCodeOffset_MicroCodeOffset_Pos)) /* Assignment of value for MicroCodeOffset in the HSM_PK_Registers__MicroCodeOffset register */
#define HSM_PK_Registers__MicroCodeOffset_Msk _UINT32_(0xFFFFFFFF)                                 /* (HSM_PK_Registers__MicroCodeOffset) Register Mask  */


/* HSM register offsets definitions */
#define HSM_CTRLA_REG_OFST             _UINT32_(0x00)      /* (HSM_CTRLA) Control Register A Offset */
#define HSM_STATUSA_REG_OFST           _UINT32_(0x38)      /* (HSM_STATUSA) STATUS Register A Offset */
#define HSM_SYNCBUSY_REG_OFST          _UINT32_(0x5C)      /* (HSM_SYNCBUSY) SYNCBUSY Register Offset */
#define HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_LSB_REG_OFST _UINT32_(0x10000)   /* (HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_LSB)  Offset */
#define HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_MSB_REG_OFST _UINT32_(0x10004)   /* (HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_MSB)  Offset */
#define HSM_CryptoMaster_DMA_Registers__FETCH_LEN_REG_OFST _UINT32_(0x10008)   /* (HSM_CryptoMaster_DMA_Registers__FETCH_LEN)  Offset */
#define HSM_CryptoMaster_DMA_Registers__FETCH_TAG_REG_OFST _UINT32_(0x1000C)   /* (HSM_CryptoMaster_DMA_Registers__FETCH_TAG)  Offset */
#define HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_LSB_REG_OFST _UINT32_(0x10010)   /* (HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_LSB)  Offset */
#define HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_MSB_REG_OFST _UINT32_(0x10014)   /* (HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_MSB)  Offset */
#define HSM_CryptoMaster_DMA_Registers__PUSH_LEN_REG_OFST _UINT32_(0x10018)   /* (HSM_CryptoMaster_DMA_Registers__PUSH_LEN)  Offset */
#define HSM_CryptoMaster_DMA_Registers__INT_EN_REG_OFST _UINT32_(0x1001C)   /* (HSM_CryptoMaster_DMA_Registers__INT_EN)  Offset */
#define HSM_CryptoMaster_DMA_Registers__INT_ENSET_REG_OFST _UINT32_(0x10020)   /* (HSM_CryptoMaster_DMA_Registers__INT_ENSET)  Offset */
#define HSM_CryptoMaster_DMA_Registers__INT_ENCLR_REG_OFST _UINT32_(0x10024)   /* (HSM_CryptoMaster_DMA_Registers__INT_ENCLR)  Offset */
#define HSM_CryptoMaster_DMA_Registers__INT_STATRAW_REG_OFST _UINT32_(0x10028)   /* (HSM_CryptoMaster_DMA_Registers__INT_STATRAW)  Offset */
#define HSM_CryptoMaster_DMA_Registers__INT_STAT_REG_OFST _UINT32_(0x1002C)   /* (HSM_CryptoMaster_DMA_Registers__INT_STAT)  Offset */
#define HSM_CryptoMaster_DMA_Registers__INT_STATCLR_REG_OFST _UINT32_(0x10030)   /* (HSM_CryptoMaster_DMA_Registers__INT_STATCLR)  Offset */
#define HSM_CryptoMaster_DMA_Registers__CONFIG_REG_OFST _UINT32_(0x10034)   /* (HSM_CryptoMaster_DMA_Registers__CONFIG)  Offset */
#define HSM_CryptoMaster_DMA_Registers__START_REG_OFST _UINT32_(0x10038)   /* (HSM_CryptoMaster_DMA_Registers__START)  Offset */
#define HSM_CryptoMaster_DMA_Registers__STATUS_REG_OFST _UINT32_(0x1003C)   /* (HSM_CryptoMaster_DMA_Registers__STATUS)  Offset */
#define HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG_REG_OFST _UINT32_(0x10400)   /* (HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG)  Offset */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1_REG_OFST _UINT32_(0x10404)   /* (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1)  Offset */
#define HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2_REG_OFST _UINT32_(0x10408)   /* (HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2) Generic g_CtrSize value. BA411E-AES engine configuration. Offset */
#define HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG_REG_OFST _UINT32_(0x1040C)   /* (HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG)  Offset */
#define HSM_CryptoMaster_HWConf_Registers__BA418_SHA3_HW_CFG_REG_OFST _UINT32_(0x10410)   /* (HSM_CryptoMaster_HWConf_Registers__BA418_SHA3_HW_CFG) Generic g_Sha3CtxtEn value. BA418-SHA3 configuration. Offset */
#define HSM_CryptoMaster_HWConf_Registers__BA419_SM4_HW_CFG_REG_OFST _UINT32_(0x10414)   /* (HSM_CryptoMaster_HWConf_Registers__BA419_SM4_HW_CFG) Generic g_SM4ModesPoss value. BA419-SM4 engine configuration. Offset */
#define HSM_CryptoMaster_HWConf_Registers__BA424_ARIA_HW_CFG_REG_OFST _UINT32_(0x10418)   /* (HSM_CryptoMaster_HWConf_Registers__BA424_ARIA_HW_CFG) Generic g_aria_modePoss value. BA424-Aria engine configuration. Offset */
#define HSM_RNG_Control_Registers__Control_REG_OFST _UINT32_(0x11000)   /* (HSM_RNG_Control_Registers__Control) Control register Offset */
#define HSM_RNG_Control_Registers__FIFOLevel_REG_OFST _UINT32_(0x11004)   /* (HSM_RNG_Control_Registers__FIFOLevel) FIFO level register. Offset */
#define HSM_RNG_Control_Registers__FIFOThreshold_REG_OFST _UINT32_(0x11008)   /* (HSM_RNG_Control_Registers__FIFOThreshold) FIFO threshold register. Offset */
#define HSM_RNG_Control_Registers__FIFODepth_REG_OFST _UINT32_(0x1100C)   /* (HSM_RNG_Control_Registers__FIFODepth) FIFO depth register. Offset */
#define HSM_RNG_Control_Registers__Key0_REG_OFST _UINT32_(0x11010)   /* (HSM_RNG_Control_Registers__Key0) Key register (MSB). Offset */
#define HSM_RNG_Control_Registers__Key1_REG_OFST _UINT32_(0x11014)   /* (HSM_RNG_Control_Registers__Key1) Key register. Offset */
#define HSM_RNG_Control_Registers__Key2_REG_OFST _UINT32_(0x11018)   /* (HSM_RNG_Control_Registers__Key2) Key register. Offset */
#define HSM_RNG_Control_Registers__Key3_REG_OFST _UINT32_(0x1101C)   /* (HSM_RNG_Control_Registers__Key3) Key register (LSB). Offset */
#define HSM_RNG_Control_Registers__TestData_REG_OFST _UINT32_(0x11020)   /* (HSM_RNG_Control_Registers__TestData) Test data register. Offset */
#define HSM_RNG_Control_Registers__RepeatThreshold_REG_OFST _UINT32_(0x11024)   /* (HSM_RNG_Control_Registers__RepeatThreshold) Repetition Test Count Cut-Off value. Offset */
#define HSM_RNG_Control_Registers__PropThreshold_REG_OFST _UINT32_(0x11028)   /* (HSM_RNG_Control_Registers__PropThreshold) Adaptive Proportion Test (1024-sample window) Cut-Off value. Offset */
#define HSM_RNG_Control_Registers__Status_REG_OFST _UINT32_(0x11030)   /* (HSM_RNG_Control_Registers__Status) Status register. Offset */
#define HSM_RNG_Control_Registers__InitWaitVal_REG_OFST _UINT32_(0x11034)   /* (HSM_RNG_Control_Registers__InitWaitVal) Initial wait counter value. Offset */
#define HSM_RNG_Control_Registers__DisableOsc0_REG_OFST _UINT32_(0x11038)   /* (HSM_RNG_Control_Registers__DisableOsc0) Disable oscillator rings #0 to #31. Offset */
#define HSM_RNG_Control_Registers__DisableOsc1_REG_OFST _UINT32_(0x1103C)   /* (HSM_RNG_Control_Registers__DisableOsc1) Disable oscillator rings #32 to #63. Offset */
#define HSM_RNG_Control_Registers__SwOffTmrVal_REG_OFST _UINT32_(0x11040)   /* (HSM_RNG_Control_Registers__SwOffTmrVal) Switch off timer value. Offset */
#define HSM_RNG_Control_Registers__ClkDiv_REG_OFST _UINT32_(0x11044)   /* (HSM_RNG_Control_Registers__ClkDiv) Sample clock divider. Offset */
#define HSM_RNG_Control_Registers__AIS31Conf0_REG_OFST _UINT32_(0x11048)   /* (HSM_RNG_Control_Registers__AIS31Conf0) AIS31 configuration register 0. Offset */
#define HSM_RNG_Control_Registers__AIS31Conf1_REG_OFST _UINT32_(0x1104C)   /* (HSM_RNG_Control_Registers__AIS31Conf1) AIS31 configuration register 1. Offset */
#define HSM_RNG_Control_Registers__AIS31Conf2_REG_OFST _UINT32_(0x11050)   /* (HSM_RNG_Control_Registers__AIS31Conf2) AIS31 configuration register 2. Offset */
#define HSM_RNG_Control_Registers__AIS31Status_REG_OFST _UINT32_(0x11054)   /* (HSM_RNG_Control_Registers__AIS31Status) AIS31 status register. Offset */
#define HSM_RNG_Control_Registers__HwConfig_REG_OFST _UINT32_(0x11058)   /* (HSM_RNG_Control_Registers__HwConfig) Hardware configuration register. Offset */
#define HSM_PK_Registers__Pointers_REG_OFST _UINT32_(0x12000)   /* (HSM_PK_Registers__Pointers) Pointers register. Offset */
#define HSM_PK_Registers__Command_REG_OFST _UINT32_(0x12004)   /* (HSM_PK_Registers__Command) Command register. Offset */
#define HSM_PK_Registers__Control_REG_OFST _UINT32_(0x12008)   /* (HSM_PK_Registers__Control) Command register. Offset */
#define HSM_PK_Registers__Status_REG_OFST _UINT32_(0x1200C)   /* (HSM_PK_Registers__Status) Status register. Offset */
#define HSM_PK_Registers__Timer_REG_OFST _UINT32_(0x12014)   /* (HSM_PK_Registers__Timer) Timer register. Offset */
#define HSM_PK_Registers__HwConfig_REG_OFST _UINT32_(0x12018)   /* (HSM_PK_Registers__HwConfig) Hardware configuration register. Offset */
#define HSM_PK_Registers__OpSize_REG_OFST _UINT32_(0x1201C)   /* (HSM_PK_Registers__OpSize) Operand size register. Offset */
#define HSM_PK_Registers__MemOffset_REG_OFST _UINT32_(0x12020)   /* (HSM_PK_Registers__MemOffset) Memory offset register. Offset */
#define HSM_PK_Registers__MicroCodeOffset_REG_OFST _UINT32_(0x12024)   /* (HSM_PK_Registers__MicroCodeOffset) MicroCode offset register. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* HSM register API structure */
typedef struct
{  /* Cryptographic Acceleration Module Lite */
  __IO  uint32_t                       HSM_CTRLA;          /* Offset: 0x00 (R/W  32) Control Register A */
  __I   uint8_t                        Reserved1[0x34];
  __I   uint32_t                       HSM_STATUSA;        /* Offset: 0x38 (R/   32) STATUS Register A */
  __I   uint8_t                        Reserved2[0x20];
  __I   uint32_t                       HSM_SYNCBUSY;       /* Offset: 0x5C (R/   32) SYNCBUSY Register */
  __I   uint8_t                        Reserved3[0xFFA0];
  __IO  uint32_t                       HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_LSB; /* Offset: 0x10000 (R/W  32)  */
  __IO  uint32_t                       HSM_CryptoMaster_DMA_Registers__FETCH_ADDR_MSB; /* Offset: 0x10004 (R/W  32)  */
  __IO  uint32_t                       HSM_CryptoMaster_DMA_Registers__FETCH_LEN; /* Offset: 0x10008 (R/W  32)  */
  __IO  uint32_t                       HSM_CryptoMaster_DMA_Registers__FETCH_TAG; /* Offset: 0x1000C (R/W  32)  */
  __IO  uint32_t                       HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_LSB; /* Offset: 0x10010 (R/W  32)  */
  __IO  uint32_t                       HSM_CryptoMaster_DMA_Registers__PUSH_ADDR_MSB; /* Offset: 0x10014 (R/W  32)  */
  __IO  uint32_t                       HSM_CryptoMaster_DMA_Registers__PUSH_LEN; /* Offset: 0x10018 (R/W  32)  */
  __IO  uint32_t                       HSM_CryptoMaster_DMA_Registers__INT_EN; /* Offset: 0x1001C (R/W  32)  */
  __O   uint32_t                       HSM_CryptoMaster_DMA_Registers__INT_ENSET; /* Offset: 0x10020 ( /W  32)  */
  __O   uint32_t                       HSM_CryptoMaster_DMA_Registers__INT_ENCLR; /* Offset: 0x10024 ( /W  32)  */
  __I   uint32_t                       HSM_CryptoMaster_DMA_Registers__INT_STATRAW; /* Offset: 0x10028 (R/   32)  */
  __I   uint32_t                       HSM_CryptoMaster_DMA_Registers__INT_STAT; /* Offset: 0x1002C (R/   32)  */
  __O   uint32_t                       HSM_CryptoMaster_DMA_Registers__INT_STATCLR; /* Offset: 0x10030 ( /W  32)  */
  __IO  uint32_t                       HSM_CryptoMaster_DMA_Registers__CONFIG; /* Offset: 0x10034 (R/W  32)  */
  __O   uint32_t                       HSM_CryptoMaster_DMA_Registers__START; /* Offset: 0x10038 ( /W  32)  */
  __I   uint32_t                       HSM_CryptoMaster_DMA_Registers__STATUS; /* Offset: 0x1003C (R/   32)  */
  __I   uint8_t                        Reserved4[0x3C0];
  __I   uint32_t                       HSM_CryptoMaster_HWConf_Registers__INCL_IPS_HW_CFG; /* Offset: 0x10400 (R/   32)  */
  __I   uint32_t                       HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_1; /* Offset: 0x10404 (R/   32)  */
  __I   uint32_t                       HSM_CryptoMaster_HWConf_Registers__BA411E_AES_HW_CFG_2; /* Offset: 0x10408 (R/   32) Generic g_CtrSize value. BA411E-AES engine configuration. */
  __I   uint32_t                       HSM_CryptoMaster_HWConf_Registers__BA413_HASH_HW_CFG; /* Offset: 0x1040C (R/   32)  */
  __I   uint32_t                       HSM_CryptoMaster_HWConf_Registers__BA418_SHA3_HW_CFG; /* Offset: 0x10410 (R/   32) Generic g_Sha3CtxtEn value. BA418-SHA3 configuration. */
  __I   uint32_t                       HSM_CryptoMaster_HWConf_Registers__BA419_SM4_HW_CFG; /* Offset: 0x10414 (R/   32) Generic g_SM4ModesPoss value. BA419-SM4 engine configuration. */
  __I   uint32_t                       HSM_CryptoMaster_HWConf_Registers__BA424_ARIA_HW_CFG; /* Offset: 0x10418 (R/   32) Generic g_aria_modePoss value. BA424-Aria engine configuration. */
  __I   uint8_t                        Reserved5[0xBE4];
  __IO  uint32_t                       HSM_RNG_Control_Registers__Control; /* Offset: 0x11000 (R/W  32) Control register */
  __IO  uint32_t                       HSM_RNG_Control_Registers__FIFOLevel; /* Offset: 0x11004 (R/W  32) FIFO level register. */
  __IO  uint32_t                       HSM_RNG_Control_Registers__FIFOThreshold; /* Offset: 0x11008 (R/W  32) FIFO threshold register. */
  __I   uint32_t                       HSM_RNG_Control_Registers__FIFODepth; /* Offset: 0x1100C (R/   32) FIFO depth register. */
  __IO  uint32_t                       HSM_RNG_Control_Registers__Key0; /* Offset: 0x11010 (R/W  32) Key register (MSB). */
  __IO  uint32_t                       HSM_RNG_Control_Registers__Key1; /* Offset: 0x11014 (R/W  32) Key register. */
  __IO  uint32_t                       HSM_RNG_Control_Registers__Key2; /* Offset: 0x11018 (R/W  32) Key register. */
  __IO  uint32_t                       HSM_RNG_Control_Registers__Key3; /* Offset: 0x1101C (R/W  32) Key register (LSB). */
  __O   uint32_t                       HSM_RNG_Control_Registers__TestData; /* Offset: 0x11020 ( /W  32) Test data register. */
  __IO  uint32_t                       HSM_RNG_Control_Registers__RepeatThreshold; /* Offset: 0x11024 (R/W  32) Repetition Test Count Cut-Off value. */
  __IO  uint32_t                       HSM_RNG_Control_Registers__PropThreshold; /* Offset: 0x11028 (R/W  32) Adaptive Proportion Test (1024-sample window) Cut-Off value. */
  __I   uint8_t                        Reserved6[0x04];
  __IO  uint32_t                       HSM_RNG_Control_Registers__Status; /* Offset: 0x11030 (R/W  32) Status register. */
  __IO  uint32_t                       HSM_RNG_Control_Registers__InitWaitVal; /* Offset: 0x11034 (R/W  32) Initial wait counter value. */
  __IO  uint32_t                       HSM_RNG_Control_Registers__DisableOsc0; /* Offset: 0x11038 (R/W  32) Disable oscillator rings #0 to #31. */
  __IO  uint32_t                       HSM_RNG_Control_Registers__DisableOsc1; /* Offset: 0x1103C (R/W  32) Disable oscillator rings #32 to #63. */
  __IO  uint32_t                       HSM_RNG_Control_Registers__SwOffTmrVal; /* Offset: 0x11040 (R/W  32) Switch off timer value. */
  __IO  uint32_t                       HSM_RNG_Control_Registers__ClkDiv; /* Offset: 0x11044 (R/W  32) Sample clock divider. */
  __IO  uint32_t                       HSM_RNG_Control_Registers__AIS31Conf0; /* Offset: 0x11048 (R/W  32) AIS31 configuration register 0. */
  __IO  uint32_t                       HSM_RNG_Control_Registers__AIS31Conf1; /* Offset: 0x1104C (R/W  32) AIS31 configuration register 1. */
  __IO  uint32_t                       HSM_RNG_Control_Registers__AIS31Conf2; /* Offset: 0x11050 (R/W  32) AIS31 configuration register 2. */
  __IO  uint32_t                       HSM_RNG_Control_Registers__AIS31Status; /* Offset: 0x11054 (R/W  32) AIS31 status register. */
  __I   uint32_t                       HSM_RNG_Control_Registers__HwConfig; /* Offset: 0x11058 (R/   32) Hardware configuration register. */
  __I   uint8_t                        Reserved7[0xFA4];
  __IO  uint32_t                       HSM_PK_Registers__Pointers; /* Offset: 0x12000 (R/W  32) Pointers register. */
  __IO  uint32_t                       HSM_PK_Registers__Command; /* Offset: 0x12004 (R/W  32) Command register. */
  __O   uint32_t                       HSM_PK_Registers__Control; /* Offset: 0x12008 ( /W  32) Command register. */
  __I   uint32_t                       HSM_PK_Registers__Status; /* Offset: 0x1200C (R/   32) Status register. */
  __I   uint8_t                        Reserved8[0x04];
  __IO  uint32_t                       HSM_PK_Registers__Timer; /* Offset: 0x12014 (R/W  32) Timer register. */
  __I   uint32_t                       HSM_PK_Registers__HwConfig; /* Offset: 0x12018 (R/   32) Hardware configuration register. */
  __IO  uint32_t                       HSM_PK_Registers__OpSize; /* Offset: 0x1201C (R/W  32) Operand size register. */
  __IO  uint32_t                       HSM_PK_Registers__MemOffset; /* Offset: 0x12020 (R/W  32) Memory offset register. */
  __IO  uint32_t                       HSM_PK_Registers__MicroCodeOffset; /* Offset: 0x12024 (R/W  32) MicroCode offset register. */
} hsm_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMSG00_HSM_COMPONENT_H_ */
