/*
 * Component description for PUF
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
#ifndef _PIC32CMSG00_PUF_COMPONENT_H_
#define _PIC32CMSG00_PUF_COMPONENT_H_

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR PUF                       */
/* ************************************************************************** */

/* -------- PUF_CTRLA : (PUF Offset: 0x00) (R/W 32) Control Register A -------- */
#define PUF_CTRLA_RESETVALUE                  _UINT32_(0x00)                                       /*  (PUF_CTRLA) Control Register A  Reset Value */

#define PUF_CTRLA_SWRST_Pos                   _UINT32_(0)                                          /* (PUF_CTRLA) Software ResetNOTE: Reset to PUF must be held active long enough to reset complete macro. Position */
#define PUF_CTRLA_SWRST_Msk                   (_UINT32_(0x1) << PUF_CTRLA_SWRST_Pos)               /* (PUF_CTRLA) Software ResetNOTE: Reset to PUF must be held active long enough to reset complete macro. Mask */
#define PUF_CTRLA_SWRST(value)                (PUF_CTRLA_SWRST_Msk & (_UINT32_(value) << PUF_CTRLA_SWRST_Pos)) /* Assignment of value for SWRST in the PUF_CTRLA register */
#define   PUF_CTRLA_SWRST_0_Val               _UINT32_(0x0)                                        /* (PUF_CTRLA) No effect  */
#define   PUF_CTRLA_SWRST_1_Val               _UINT32_(0x1)                                        /* (PUF_CTRLA) Reset registers and internal state  */
#define PUF_CTRLA_SWRST_0                     (PUF_CTRLA_SWRST_0_Val << PUF_CTRLA_SWRST_Pos)       /* (PUF_CTRLA) No effect Position */
#define PUF_CTRLA_SWRST_1                     (PUF_CTRLA_SWRST_1_Val << PUF_CTRLA_SWRST_Pos)       /* (PUF_CTRLA) Reset registers and internal state Position */
#define PUF_CTRLA_ENABLE_Pos                  _UINT32_(1)                                          /* (PUF_CTRLA) Clock Enable bit Position */
#define PUF_CTRLA_ENABLE_Msk                  (_UINT32_(0x1) << PUF_CTRLA_ENABLE_Pos)              /* (PUF_CTRLA) Clock Enable bit Mask */
#define PUF_CTRLA_ENABLE(value)               (PUF_CTRLA_ENABLE_Msk & (_UINT32_(value) << PUF_CTRLA_ENABLE_Pos)) /* Assignment of value for ENABLE in the PUF_CTRLA register */
#define   PUF_CTRLA_ENABLE_0_Val              _UINT32_(0x0)                                        /* (PUF_CTRLA) PUF clock is disabled and Macro held in reset and any access to QK register would cause PSLVERR.  */
#define   PUF_CTRLA_ENABLE_1_Val              _UINT32_(0x1)                                        /* (PUF_CTRLA) PUF clock is enabled.  */
#define PUF_CTRLA_ENABLE_0                    (PUF_CTRLA_ENABLE_0_Val << PUF_CTRLA_ENABLE_Pos)     /* (PUF_CTRLA) PUF clock is disabled and Macro held in reset and any access to QK register would cause PSLVERR. Position */
#define PUF_CTRLA_ENABLE_1                    (PUF_CTRLA_ENABLE_1_Val << PUF_CTRLA_ENABLE_Pos)     /* (PUF_CTRLA) PUF clock is enabled. Position */
#define PUF_CTRLA_PRIV_Pos                    _UINT32_(2)                                          /* (PUF_CTRLA) Privileged Access Only Position */
#define PUF_CTRLA_PRIV_Msk                    (_UINT32_(0x1) << PUF_CTRLA_PRIV_Pos)                /* (PUF_CTRLA) Privileged Access Only Mask */
#define PUF_CTRLA_PRIV(value)                 (PUF_CTRLA_PRIV_Msk & (_UINT32_(value) << PUF_CTRLA_PRIV_Pos)) /* Assignment of value for PRIV in the PUF_CTRLA register */
#define   PUF_CTRLA_PRIV_0_Val                _UINT32_(0x0)                                        /* (PUF_CTRLA) PUF registers accessible in privileged and unprivileged modes.  */
#define   PUF_CTRLA_PRIV_1_Val                _UINT32_(0x1)                                        /* (PUF_CTRLA) PUF registers only accessible in privileged mode.  */
#define PUF_CTRLA_PRIV_0                      (PUF_CTRLA_PRIV_0_Val << PUF_CTRLA_PRIV_Pos)         /* (PUF_CTRLA) PUF registers accessible in privileged and unprivileged modes. Position */
#define PUF_CTRLA_PRIV_1                      (PUF_CTRLA_PRIV_1_Val << PUF_CTRLA_PRIV_Pos)         /* (PUF_CTRLA) PUF registers only accessible in privileged mode. Position */
#define PUF_CTRLA_RUNSTDBY_Pos                _UINT32_(6)                                          /* (PUF_CTRLA) RUNSTDBY Enable bit - not used by EIP HWWriting this register has no affect on the EIPNote: Currently this bit is present, but has no functionality. This bit is part of the IP wrapper but has no use for the EIP. Position */
#define PUF_CTRLA_RUNSTDBY_Msk                (_UINT32_(0x1) << PUF_CTRLA_RUNSTDBY_Pos)            /* (PUF_CTRLA) RUNSTDBY Enable bit - not used by EIP HWWriting this register has no affect on the EIPNote: Currently this bit is present, but has no functionality. This bit is part of the IP wrapper but has no use for the EIP. Mask */
#define PUF_CTRLA_RUNSTDBY(value)             (PUF_CTRLA_RUNSTDBY_Msk & (_UINT32_(value) << PUF_CTRLA_RUNSTDBY_Pos)) /* Assignment of value for RUNSTDBY in the PUF_CTRLA register */
#define PUF_CTRLA_Msk                         _UINT32_(0x00000047)                                 /* (PUF_CTRLA) Register Mask  */


/* -------- PUF_STATUSA : (PUF Offset: 0x38) ( R/ 32) Status Register A -------- */
#define PUF_STATUSA_RESETVALUE                _UINT32_(0x00)                                       /*  (PUF_STATUSA) Status Register A  Reset Value */

#define PUF_STATUSA_BUSY_Pos                  _UINT32_(0)                                          /* (PUF_STATUSA) PUF Busy indicator Position */
#define PUF_STATUSA_BUSY_Msk                  (_UINT32_(0x1) << PUF_STATUSA_BUSY_Pos)              /* (PUF_STATUSA) PUF Busy indicator Mask */
#define PUF_STATUSA_BUSY(value)               (PUF_STATUSA_BUSY_Msk & (_UINT32_(value) << PUF_STATUSA_BUSY_Pos)) /* Assignment of value for BUSY in the PUF_STATUSA register */
#define   PUF_STATUSA_BUSY_0_Val              _UINT32_(0x0)                                        /* (PUF_STATUSA) Macro can accept commands.  */
#define   PUF_STATUSA_BUSY_1_Val              _UINT32_(0x1)                                        /* (PUF_STATUSA) Macro has not completed the power up or power down sequence and cannot accept any other commands.  */
#define PUF_STATUSA_BUSY_0                    (PUF_STATUSA_BUSY_0_Val << PUF_STATUSA_BUSY_Pos)     /* (PUF_STATUSA) Macro can accept commands. Position */
#define PUF_STATUSA_BUSY_1                    (PUF_STATUSA_BUSY_1_Val << PUF_STATUSA_BUSY_Pos)     /* (PUF_STATUSA) Macro has not completed the power up or power down sequence and cannot accept any other commands. Position */
#define PUF_STATUSA_Msk                       _UINT32_(0x00000001)                                 /* (PUF_STATUSA) Register Mask  */


/* -------- PUF_DISABLE : (PUF Offset: 0x100) (R/W 32) Disable Function Control Register -------- */
#define PUF_DISABLE_RESETVALUE                _UINT32_(0x00)                                       /*  (PUF_DISABLE) Disable Function Control Register  Reset Value */

#define PUF_DISABLE_ENROLL_Pos                _UINT32_(1)                                          /* (PUF_DISABLE) ENROLL Command Disable bit Position */
#define PUF_DISABLE_ENROLL_Msk                (_UINT32_(0x1) << PUF_DISABLE_ENROLL_Pos)            /* (PUF_DISABLE) ENROLL Command Disable bit Mask */
#define PUF_DISABLE_ENROLL(value)             (PUF_DISABLE_ENROLL_Msk & (_UINT32_(value) << PUF_DISABLE_ENROLL_Pos)) /* Assignment of value for ENROLL in the PUF_DISABLE register */
#define   PUF_DISABLE_ENROLL_0_Val            _UINT32_(0x0)                                        /* (PUF_DISABLE) Command is enabled.  */
#define   PUF_DISABLE_ENROLL_1_Val            _UINT32_(0x1)                                        /* (PUF_DISABLE) Command is disabled.  */
#define PUF_DISABLE_ENROLL_0                  (PUF_DISABLE_ENROLL_0_Val << PUF_DISABLE_ENROLL_Pos) /* (PUF_DISABLE) Command is enabled. Position */
#define PUF_DISABLE_ENROLL_1                  (PUF_DISABLE_ENROLL_1_Val << PUF_DISABLE_ENROLL_Pos) /* (PUF_DISABLE) Command is disabled. Position */
#define PUF_DISABLE_START_Pos                 _UINT32_(2)                                          /* (PUF_DISABLE) START Command Disable bit Position */
#define PUF_DISABLE_START_Msk                 (_UINT32_(0x1) << PUF_DISABLE_START_Pos)             /* (PUF_DISABLE) START Command Disable bit Mask */
#define PUF_DISABLE_START(value)              (PUF_DISABLE_START_Msk & (_UINT32_(value) << PUF_DISABLE_START_Pos)) /* Assignment of value for START in the PUF_DISABLE register */
#define   PUF_DISABLE_START_0_Val             _UINT32_(0x0)                                        /* (PUF_DISABLE) Command is enabled.  */
#define   PUF_DISABLE_START_1_Val             _UINT32_(0x1)                                        /* (PUF_DISABLE) Command is disabled.  */
#define PUF_DISABLE_START_0                   (PUF_DISABLE_START_0_Val << PUF_DISABLE_START_Pos)   /* (PUF_DISABLE) Command is enabled. Position */
#define PUF_DISABLE_START_1                   (PUF_DISABLE_START_1_Val << PUF_DISABLE_START_Pos)   /* (PUF_DISABLE) Command is disabled. Position */
#define PUF_DISABLE_RECONSTRUCT_Pos           _UINT32_(3)                                          /* (PUF_DISABLE) RECONSTRUCT Command Disable bit Position */
#define PUF_DISABLE_RECONSTRUCT_Msk           (_UINT32_(0x1) << PUF_DISABLE_RECONSTRUCT_Pos)       /* (PUF_DISABLE) RECONSTRUCT Command Disable bit Mask */
#define PUF_DISABLE_RECONSTRUCT(value)        (PUF_DISABLE_RECONSTRUCT_Msk & (_UINT32_(value) << PUF_DISABLE_RECONSTRUCT_Pos)) /* Assignment of value for RECONSTRUCT in the PUF_DISABLE register */
#define   PUF_DISABLE_RECONSTRUCT_0_Val       _UINT32_(0x0)                                        /* (PUF_DISABLE) Command is enabled.  */
#define   PUF_DISABLE_RECONSTRUCT_1_Val       _UINT32_(0x1)                                        /* (PUF_DISABLE) Command is disabled.  */
#define PUF_DISABLE_RECONSTRUCT_0             (PUF_DISABLE_RECONSTRUCT_0_Val << PUF_DISABLE_RECONSTRUCT_Pos) /* (PUF_DISABLE) Command is enabled. Position */
#define PUF_DISABLE_RECONSTRUCT_1             (PUF_DISABLE_RECONSTRUCT_1_Val << PUF_DISABLE_RECONSTRUCT_Pos) /* (PUF_DISABLE) Command is disabled. Position */
#define PUF_DISABLE_STOP_Pos                  _UINT32_(5)                                          /* (PUF_DISABLE) STOP Command Disable bit Position */
#define PUF_DISABLE_STOP_Msk                  (_UINT32_(0x1) << PUF_DISABLE_STOP_Pos)              /* (PUF_DISABLE) STOP Command Disable bit Mask */
#define PUF_DISABLE_STOP(value)               (PUF_DISABLE_STOP_Msk & (_UINT32_(value) << PUF_DISABLE_STOP_Pos)) /* Assignment of value for STOP in the PUF_DISABLE register */
#define   PUF_DISABLE_STOP_0_Val              _UINT32_(0x0)                                        /* (PUF_DISABLE) Command is enabled.  */
#define   PUF_DISABLE_STOP_1_Val              _UINT32_(0x1)                                        /* (PUF_DISABLE) Command is disabled.  */
#define PUF_DISABLE_STOP_0                    (PUF_DISABLE_STOP_0_Val << PUF_DISABLE_STOP_Pos)     /* (PUF_DISABLE) Command is enabled. Position */
#define PUF_DISABLE_STOP_1                    (PUF_DISABLE_STOP_1_Val << PUF_DISABLE_STOP_Pos)     /* (PUF_DISABLE) Command is disabled. Position */
#define PUF_DISABLE_GET_KEY_Pos               _UINT32_(6)                                          /* (PUF_DISABLE) GET_KEY Command Disable bit Position */
#define PUF_DISABLE_GET_KEY_Msk               (_UINT32_(0x1) << PUF_DISABLE_GET_KEY_Pos)           /* (PUF_DISABLE) GET_KEY Command Disable bit Mask */
#define PUF_DISABLE_GET_KEY(value)            (PUF_DISABLE_GET_KEY_Msk & (_UINT32_(value) << PUF_DISABLE_GET_KEY_Pos)) /* Assignment of value for GET_KEY in the PUF_DISABLE register */
#define   PUF_DISABLE_GET_KEY_0_Val           _UINT32_(0x0)                                        /* (PUF_DISABLE) Command is enabled.  */
#define   PUF_DISABLE_GET_KEY_1_Val           _UINT32_(0x1)                                        /* (PUF_DISABLE) Command is disabled.  */
#define PUF_DISABLE_GET_KEY_0                 (PUF_DISABLE_GET_KEY_0_Val << PUF_DISABLE_GET_KEY_Pos) /* (PUF_DISABLE) Command is enabled. Position */
#define PUF_DISABLE_GET_KEY_1                 (PUF_DISABLE_GET_KEY_1_Val << PUF_DISABLE_GET_KEY_Pos) /* (PUF_DISABLE) Command is disabled. Position */
#define PUF_DISABLE_UNWRAP_Pos                _UINT32_(7)                                          /* (PUF_DISABLE) UNWRAP Command Disable bit Position */
#define PUF_DISABLE_UNWRAP_Msk                (_UINT32_(0x1) << PUF_DISABLE_UNWRAP_Pos)            /* (PUF_DISABLE) UNWRAP Command Disable bit Mask */
#define PUF_DISABLE_UNWRAP(value)             (PUF_DISABLE_UNWRAP_Msk & (_UINT32_(value) << PUF_DISABLE_UNWRAP_Pos)) /* Assignment of value for UNWRAP in the PUF_DISABLE register */
#define   PUF_DISABLE_UNWRAP_0_Val            _UINT32_(0x0)                                        /* (PUF_DISABLE) Command is enabled.  */
#define   PUF_DISABLE_UNWRAP_1_Val            _UINT32_(0x1)                                        /* (PUF_DISABLE) Command is disabled.  */
#define PUF_DISABLE_UNWRAP_0                  (PUF_DISABLE_UNWRAP_0_Val << PUF_DISABLE_UNWRAP_Pos) /* (PUF_DISABLE) Command is enabled. Position */
#define PUF_DISABLE_UNWRAP_1                  (PUF_DISABLE_UNWRAP_1_Val << PUF_DISABLE_UNWRAP_Pos) /* (PUF_DISABLE) Command is disabled. Position */
#define PUF_DISABLE_WRAP_GEN_RAND_Pos         _UINT32_(8)                                          /* (PUF_DISABLE) WRAP_GENERATE_RANDOM Command Disable bit Position */
#define PUF_DISABLE_WRAP_GEN_RAND_Msk         (_UINT32_(0x1) << PUF_DISABLE_WRAP_GEN_RAND_Pos)     /* (PUF_DISABLE) WRAP_GENERATE_RANDOM Command Disable bit Mask */
#define PUF_DISABLE_WRAP_GEN_RAND(value)      (PUF_DISABLE_WRAP_GEN_RAND_Msk & (_UINT32_(value) << PUF_DISABLE_WRAP_GEN_RAND_Pos)) /* Assignment of value for WRAP_GEN_RAND in the PUF_DISABLE register */
#define   PUF_DISABLE_WRAP_GEN_RAND_0_Val     _UINT32_(0x0)                                        /* (PUF_DISABLE) Command is enabled.  */
#define   PUF_DISABLE_WRAP_GEN_RAND_1_Val     _UINT32_(0x1)                                        /* (PUF_DISABLE) Command is disabled.  */
#define PUF_DISABLE_WRAP_GEN_RAND_0           (PUF_DISABLE_WRAP_GEN_RAND_0_Val << PUF_DISABLE_WRAP_GEN_RAND_Pos) /* (PUF_DISABLE) Command is enabled. Position */
#define PUF_DISABLE_WRAP_GEN_RAND_1           (PUF_DISABLE_WRAP_GEN_RAND_1_Val << PUF_DISABLE_WRAP_GEN_RAND_Pos) /* (PUF_DISABLE) Command is disabled. Position */
#define PUF_DISABLE_WRAP_Pos                  _UINT32_(9)                                          /* (PUF_DISABLE) WRAP Command Disable bit Position */
#define PUF_DISABLE_WRAP_Msk                  (_UINT32_(0x1) << PUF_DISABLE_WRAP_Pos)              /* (PUF_DISABLE) WRAP Command Disable bit Mask */
#define PUF_DISABLE_WRAP(value)               (PUF_DISABLE_WRAP_Msk & (_UINT32_(value) << PUF_DISABLE_WRAP_Pos)) /* Assignment of value for WRAP in the PUF_DISABLE register */
#define   PUF_DISABLE_WRAP_0_Val              _UINT32_(0x0)                                        /* (PUF_DISABLE) Command is enabled.  */
#define   PUF_DISABLE_WRAP_1_Val              _UINT32_(0x1)                                        /* (PUF_DISABLE) Command is disabled.  */
#define PUF_DISABLE_WRAP_0                    (PUF_DISABLE_WRAP_0_Val << PUF_DISABLE_WRAP_Pos)     /* (PUF_DISABLE) Command is enabled. Position */
#define PUF_DISABLE_WRAP_1                    (PUF_DISABLE_WRAP_1_Val << PUF_DISABLE_WRAP_Pos)     /* (PUF_DISABLE) Command is disabled. Position */
#define PUF_DISABLE_GEN_RAND_Pos              _UINT32_(15)                                         /* (PUF_DISABLE) GENERATE_RANDOM Command Disable bit Position */
#define PUF_DISABLE_GEN_RAND_Msk              (_UINT32_(0x1) << PUF_DISABLE_GEN_RAND_Pos)          /* (PUF_DISABLE) GENERATE_RANDOM Command Disable bit Mask */
#define PUF_DISABLE_GEN_RAND(value)           (PUF_DISABLE_GEN_RAND_Msk & (_UINT32_(value) << PUF_DISABLE_GEN_RAND_Pos)) /* Assignment of value for GEN_RAND in the PUF_DISABLE register */
#define   PUF_DISABLE_GEN_RAND_0_Val          _UINT32_(0x0)                                        /* (PUF_DISABLE) Command is enabled.  */
#define   PUF_DISABLE_GEN_RAND_1_Val          _UINT32_(0x1)                                        /* (PUF_DISABLE) Command is disabled.  */
#define PUF_DISABLE_GEN_RAND_0                (PUF_DISABLE_GEN_RAND_0_Val << PUF_DISABLE_GEN_RAND_Pos) /* (PUF_DISABLE) Command is enabled. Position */
#define PUF_DISABLE_GEN_RAND_1                (PUF_DISABLE_GEN_RAND_1_Val << PUF_DISABLE_GEN_RAND_Pos) /* (PUF_DISABLE) Command is disabled. Position */
#define PUF_DISABLE_SKIP_MEM_TEST_Pos         _UINT32_(29)                                         /* (PUF_DISABLE) SKIP_MEMORY TEST Command Control bit Position */
#define PUF_DISABLE_SKIP_MEM_TEST_Msk         (_UINT32_(0x1) << PUF_DISABLE_SKIP_MEM_TEST_Pos)     /* (PUF_DISABLE) SKIP_MEMORY TEST Command Control bit Mask */
#define PUF_DISABLE_SKIP_MEM_TEST(value)      (PUF_DISABLE_SKIP_MEM_TEST_Msk & (_UINT32_(value) << PUF_DISABLE_SKIP_MEM_TEST_Pos)) /* Assignment of value for SKIP_MEM_TEST in the PUF_DISABLE register */
#define   PUF_DISABLE_SKIP_MEM_TEST_0_Val     _UINT32_(0x0)                                        /* (PUF_DISABLE) Command is enabled / Not Skipped.  */
#define   PUF_DISABLE_SKIP_MEM_TEST_1_Val     _UINT32_(0x1)                                        /* (PUF_DISABLE) Command is disabled / Skipped during initialization  */
#define PUF_DISABLE_SKIP_MEM_TEST_0           (PUF_DISABLE_SKIP_MEM_TEST_0_Val << PUF_DISABLE_SKIP_MEM_TEST_Pos) /* (PUF_DISABLE) Command is enabled / Not Skipped. Position */
#define PUF_DISABLE_SKIP_MEM_TEST_1           (PUF_DISABLE_SKIP_MEM_TEST_1_Val << PUF_DISABLE_SKIP_MEM_TEST_Pos) /* (PUF_DISABLE) Command is disabled / Skipped during initialization Position */
#define PUF_DISABLE_TEST_MEM_Pos              _UINT32_(30)                                         /* (PUF_DISABLE) TEST_MEMORY Command Disable bit Position */
#define PUF_DISABLE_TEST_MEM_Msk              (_UINT32_(0x1) << PUF_DISABLE_TEST_MEM_Pos)          /* (PUF_DISABLE) TEST_MEMORY Command Disable bit Mask */
#define PUF_DISABLE_TEST_MEM(value)           (PUF_DISABLE_TEST_MEM_Msk & (_UINT32_(value) << PUF_DISABLE_TEST_MEM_Pos)) /* Assignment of value for TEST_MEM in the PUF_DISABLE register */
#define   PUF_DISABLE_TEST_MEM_0_Val          _UINT32_(0x0)                                        /* (PUF_DISABLE) Command is enabled.  */
#define   PUF_DISABLE_TEST_MEM_1_Val          _UINT32_(0x1)                                        /* (PUF_DISABLE) Command is disabled.  */
#define PUF_DISABLE_TEST_MEM_0                (PUF_DISABLE_TEST_MEM_0_Val << PUF_DISABLE_TEST_MEM_Pos) /* (PUF_DISABLE) Command is enabled. Position */
#define PUF_DISABLE_TEST_MEM_1                (PUF_DISABLE_TEST_MEM_1_Val << PUF_DISABLE_TEST_MEM_Pos) /* (PUF_DISABLE) Command is disabled. Position */
#define PUF_DISABLE_TEST_PUF_Pos              _UINT32_(31)                                         /* (PUF_DISABLE) TEST_PUF Command Disable bit Position */
#define PUF_DISABLE_TEST_PUF_Msk              (_UINT32_(0x1) << PUF_DISABLE_TEST_PUF_Pos)          /* (PUF_DISABLE) TEST_PUF Command Disable bit Mask */
#define PUF_DISABLE_TEST_PUF(value)           (PUF_DISABLE_TEST_PUF_Msk & (_UINT32_(value) << PUF_DISABLE_TEST_PUF_Pos)) /* Assignment of value for TEST_PUF in the PUF_DISABLE register */
#define   PUF_DISABLE_TEST_PUF_0_Val          _UINT32_(0x0)                                        /* (PUF_DISABLE) Command is enabled.  */
#define   PUF_DISABLE_TEST_PUF_1_Val          _UINT32_(0x1)                                        /* (PUF_DISABLE) Command is disabled.  */
#define PUF_DISABLE_TEST_PUF_0                (PUF_DISABLE_TEST_PUF_0_Val << PUF_DISABLE_TEST_PUF_Pos) /* (PUF_DISABLE) Command is enabled. Position */
#define PUF_DISABLE_TEST_PUF_1                (PUF_DISABLE_TEST_PUF_1_Val << PUF_DISABLE_TEST_PUF_Pos) /* (PUF_DISABLE) Command is disabled. Position */
#define PUF_DISABLE_Msk                       _UINT32_(0xE00083EE)                                 /* (PUF_DISABLE) Register Mask  */


/* -------- PUF_RESTRICT0 : (PUF Offset: 0x104) (R/W 32) Restrict User Context 0 Control Register -------- */
#define PUF_RESTRICT0_RESETVALUE              _UINT32_(0x00)                                       /*  (PUF_RESTRICT0) Restrict User Context 0 Control Register  Reset Value */

#define PUF_RESTRICT0_RESTRICT_CONTEXT_0_Pos  _UINT32_(0)                                          /* (PUF_RESTRICT0) Restrict User Context Writing a 1 in a bit position prevents other PUF keys to be generated with this context bit set. NOTE: Refer to the EIP datasheet for the function of the restrict_user_context signals Position */
#define PUF_RESTRICT0_RESTRICT_CONTEXT_0_Msk  (_UINT32_(0xFFFFFFFF) << PUF_RESTRICT0_RESTRICT_CONTEXT_0_Pos) /* (PUF_RESTRICT0) Restrict User Context Writing a 1 in a bit position prevents other PUF keys to be generated with this context bit set. NOTE: Refer to the EIP datasheet for the function of the restrict_user_context signals Mask */
#define PUF_RESTRICT0_RESTRICT_CONTEXT_0(value) (PUF_RESTRICT0_RESTRICT_CONTEXT_0_Msk & (_UINT32_(value) << PUF_RESTRICT0_RESTRICT_CONTEXT_0_Pos)) /* Assignment of value for RESTRICT_CONTEXT_0 in the PUF_RESTRICT0 register */
#define PUF_RESTRICT0_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (PUF_RESTRICT0) Register Mask  */


/* -------- PUF_RESTRICT1 : (PUF Offset: 0x108) (R/W 32) Restrict User Context 1 Control Register -------- */
#define PUF_RESTRICT1_RESETVALUE              _UINT32_(0x00)                                       /*  (PUF_RESTRICT1) Restrict User Context 1 Control Register  Reset Value */

#define PUF_RESTRICT1_RESTRICT_CONTEXT_1_Pos  _UINT32_(0)                                          /* (PUF_RESTRICT1) Restrict User Context Writing a 1 in a bit position prevents other PUF keys to be generated with this context bit set. NOTE: Refer to the EIP datasheet for the function of the restrict_user_context signals Position */
#define PUF_RESTRICT1_RESTRICT_CONTEXT_1_Msk  (_UINT32_(0xFFFFFFFF) << PUF_RESTRICT1_RESTRICT_CONTEXT_1_Pos) /* (PUF_RESTRICT1) Restrict User Context Writing a 1 in a bit position prevents other PUF keys to be generated with this context bit set. NOTE: Refer to the EIP datasheet for the function of the restrict_user_context signals Mask */
#define PUF_RESTRICT1_RESTRICT_CONTEXT_1(value) (PUF_RESTRICT1_RESTRICT_CONTEXT_1_Msk & (_UINT32_(value) << PUF_RESTRICT1_RESTRICT_CONTEXT_1_Pos)) /* Assignment of value for RESTRICT_CONTEXT_1 in the PUF_RESTRICT1 register */
#define PUF_RESTRICT1_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (PUF_RESTRICT1) Register Mask  */


/* -------- PUF_CTRL_PWR : (PUF Offset: 0x10C) (R/W 32) Power Control Register -------- */
#define PUF_CTRL_PWR_RESETVALUE               _UINT32_(0x00)                                       /*  (PUF_CTRL_PWR) Power Control Register  Reset Value */

#define PUF_CTRL_PWR_SRAM_PWRSW_Pos           _UINT32_(0)                                          /* (PUF_CTRL_PWR) SRAM Power Switch Enable Bit Position */
#define PUF_CTRL_PWR_SRAM_PWRSW_Msk           (_UINT32_(0x1) << PUF_CTRL_PWR_SRAM_PWRSW_Pos)       /* (PUF_CTRL_PWR) SRAM Power Switch Enable Bit Mask */
#define PUF_CTRL_PWR_SRAM_PWRSW(value)        (PUF_CTRL_PWR_SRAM_PWRSW_Msk & (_UINT32_(value) << PUF_CTRL_PWR_SRAM_PWRSW_Pos)) /* Assignment of value for SRAM_PWRSW in the PUF_CTRL_PWR register */
#define   PUF_CTRL_PWR_SRAM_PWRSW_0_Val       _UINT32_(0x0)                                        /* (PUF_CTRL_PWR) SRAM register power is disabled ( puf_req_power_sram driven to 0)  */
#define   PUF_CTRL_PWR_SRAM_PWRSW_1_Val       _UINT32_(0x1)                                        /* (PUF_CTRL_PWR) SRAM register power is enabled ( puf_req_power_sram driven to 1)  */
#define PUF_CTRL_PWR_SRAM_PWRSW_0             (PUF_CTRL_PWR_SRAM_PWRSW_0_Val << PUF_CTRL_PWR_SRAM_PWRSW_Pos) /* (PUF_CTRL_PWR) SRAM register power is disabled ( puf_req_power_sram driven to 0) Position */
#define PUF_CTRL_PWR_SRAM_PWRSW_1             (PUF_CTRL_PWR_SRAM_PWRSW_1_Val << PUF_CTRL_PWR_SRAM_PWRSW_Pos) /* (PUF_CTRL_PWR) SRAM register power is enabled ( puf_req_power_sram driven to 1) Position */
#define PUF_CTRL_PWR_Msk                      _UINT32_(0x00000001)                                 /* (PUF_CTRL_PWR) Register Mask  */


/* -------- PUF_CTRL_KEY : (PUF Offset: 0x110) (R/W 32) KEY Control Register -------- */
#define PUF_CTRL_KEY_RESETVALUE               _UINT32_(0x00)                                       /*  (PUF_CTRL_KEY) KEY Control Register  Reset Value */

#define PUF_CTRL_KEY_CLR_PUF_KEY_Pos          _UINT32_(0)                                          /* (PUF_CTRL_KEY) Clear PUF Key Control Bit Position */
#define PUF_CTRL_KEY_CLR_PUF_KEY_Msk          (_UINT32_(0x1) << PUF_CTRL_KEY_CLR_PUF_KEY_Pos)      /* (PUF_CTRL_KEY) Clear PUF Key Control Bit Mask */
#define PUF_CTRL_KEY_CLR_PUF_KEY(value)       (PUF_CTRL_KEY_CLR_PUF_KEY_Msk & (_UINT32_(value) << PUF_CTRL_KEY_CLR_PUF_KEY_Pos)) /* Assignment of value for CLR_PUF_KEY in the PUF_CTRL_KEY register */
#define   PUF_CTRL_KEY_CLR_PUF_KEY_0_Val      _UINT32_(0x0)                                        /* (PUF_CTRL_KEY) NO Affect  */
#define   PUF_CTRL_KEY_CLR_PUF_KEY_1_Val      _UINT32_(0x1)                                        /* (PUF_CTRL_KEY) Clears the following outputs from this macro - puf_key, puf_valid, puf_index  */
#define PUF_CTRL_KEY_CLR_PUF_KEY_0            (PUF_CTRL_KEY_CLR_PUF_KEY_0_Val << PUF_CTRL_KEY_CLR_PUF_KEY_Pos) /* (PUF_CTRL_KEY) NO Affect Position */
#define PUF_CTRL_KEY_CLR_PUF_KEY_1            (PUF_CTRL_KEY_CLR_PUF_KEY_1_Val << PUF_CTRL_KEY_CLR_PUF_KEY_Pos) /* (PUF_CTRL_KEY) Clears the following outputs from this macro - puf_key, puf_valid, puf_index Position */
#define PUF_CTRL_KEY_Msk                      _UINT32_(0x00000001)                                 /* (PUF_CTRL_KEY) Register Mask  */


/* -------- PUF_QK_CR : (PUF Offset: 0x200) (R/W 32) Control register; The Control register defines which command must be executed next. When the command is accepted or rejected, the bits automatically revert to 0. Only one command bit may be written with 1 at a time, with the exception of qk_zeroize. Writing qk_zeroize with 1 takes precedence over all other commands. -------- */
#define PUF_QK_CR_RESETVALUE                  _UINT32_(0x00)                                       /*  (PUF_QK_CR) Control register; The Control register defines which command must be executed next. When the command is accepted or rejected, the bits automatically revert to 0. Only one command bit may be written with 1 at a time, with the exception of qk_zeroize. Writing qk_zeroize with 1 takes precedence over all other commands.  Reset Value */

#define PUF_QK_CR_qk_zeroize_Pos              _UINT32_(0)                                          /* (PUF_QK_CR) Begin Zeroize operation Position */
#define PUF_QK_CR_qk_zeroize_Msk              (_UINT32_(0x1) << PUF_QK_CR_qk_zeroize_Pos)          /* (PUF_QK_CR) Begin Zeroize operation Mask */
#define PUF_QK_CR_qk_zeroize(value)           (PUF_QK_CR_qk_zeroize_Msk & (_UINT32_(value) << PUF_QK_CR_qk_zeroize_Pos)) /* Assignment of value for qk_zeroize in the PUF_QK_CR register */
#define PUF_QK_CR_qk_enroll_Pos               _UINT32_(1)                                          /* (PUF_QK_CR) Begin Enroll operation Position */
#define PUF_QK_CR_qk_enroll_Msk               (_UINT32_(0x1) << PUF_QK_CR_qk_enroll_Pos)           /* (PUF_QK_CR) Begin Enroll operation Mask */
#define PUF_QK_CR_qk_enroll(value)            (PUF_QK_CR_qk_enroll_Msk & (_UINT32_(value) << PUF_QK_CR_qk_enroll_Pos)) /* Assignment of value for qk_enroll in the PUF_QK_CR register */
#define PUF_QK_CR_qk_start_Pos                _UINT32_(2)                                          /* (PUF_QK_CR) Begin Start operation Position */
#define PUF_QK_CR_qk_start_Msk                (_UINT32_(0x1) << PUF_QK_CR_qk_start_Pos)            /* (PUF_QK_CR) Begin Start operation Mask */
#define PUF_QK_CR_qk_start(value)             (PUF_QK_CR_qk_start_Msk & (_UINT32_(value) << PUF_QK_CR_qk_start_Pos)) /* Assignment of value for qk_start in the PUF_QK_CR register */
#define PUF_QK_CR_qk_reconstruct_Pos          _UINT32_(3)                                          /* (PUF_QK_CR) Begin Reconstruct operation Position */
#define PUF_QK_CR_qk_reconstruct_Msk          (_UINT32_(0x1) << PUF_QK_CR_qk_reconstruct_Pos)      /* (PUF_QK_CR) Begin Reconstruct operation Mask */
#define PUF_QK_CR_qk_reconstruct(value)       (PUF_QK_CR_qk_reconstruct_Msk & (_UINT32_(value) << PUF_QK_CR_qk_reconstruct_Pos)) /* Assignment of value for qk_reconstruct in the PUF_QK_CR register */
#define PUF_QK_CR_qk_stop_Pos                 _UINT32_(5)                                          /* (PUF_QK_CR) Begin Stop operation Position */
#define PUF_QK_CR_qk_stop_Msk                 (_UINT32_(0x1) << PUF_QK_CR_qk_stop_Pos)             /* (PUF_QK_CR) Begin Stop operation Mask */
#define PUF_QK_CR_qk_stop(value)              (PUF_QK_CR_qk_stop_Msk & (_UINT32_(value) << PUF_QK_CR_qk_stop_Pos)) /* Assignment of value for qk_stop in the PUF_QK_CR register */
#define PUF_QK_CR_qk_get_key_Pos              _UINT32_(6)                                          /* (PUF_QK_CR) Begin Get Key operation Position */
#define PUF_QK_CR_qk_get_key_Msk              (_UINT32_(0x1) << PUF_QK_CR_qk_get_key_Pos)          /* (PUF_QK_CR) Begin Get Key operation Mask */
#define PUF_QK_CR_qk_get_key(value)           (PUF_QK_CR_qk_get_key_Msk & (_UINT32_(value) << PUF_QK_CR_qk_get_key_Pos)) /* Assignment of value for qk_get_key in the PUF_QK_CR register */
#define PUF_QK_CR_qk_unwrap_Pos               _UINT32_(7)                                          /* (PUF_QK_CR) Begin Unwrap operation Position */
#define PUF_QK_CR_qk_unwrap_Msk               (_UINT32_(0x1) << PUF_QK_CR_qk_unwrap_Pos)           /* (PUF_QK_CR) Begin Unwrap operation Mask */
#define PUF_QK_CR_qk_unwrap(value)            (PUF_QK_CR_qk_unwrap_Msk & (_UINT32_(value) << PUF_QK_CR_qk_unwrap_Pos)) /* Assignment of value for qk_unwrap in the PUF_QK_CR register */
#define PUF_QK_CR_qk_wrap_generated_random_Pos _UINT32_(8)                                          /* (PUF_QK_CR) Begin Wrap Generated Random operation Position */
#define PUF_QK_CR_qk_wrap_generated_random_Msk (_UINT32_(0x1) << PUF_QK_CR_qk_wrap_generated_random_Pos) /* (PUF_QK_CR) Begin Wrap Generated Random operation Mask */
#define PUF_QK_CR_qk_wrap_generated_random(value) (PUF_QK_CR_qk_wrap_generated_random_Msk & (_UINT32_(value) << PUF_QK_CR_qk_wrap_generated_random_Pos)) /* Assignment of value for qk_wrap_generated_random in the PUF_QK_CR register */
#define PUF_QK_CR_qk_wrap_Pos                 _UINT32_(9)                                          /* (PUF_QK_CR) Begin Wrap operation Position */
#define PUF_QK_CR_qk_wrap_Msk                 (_UINT32_(0x1) << PUF_QK_CR_qk_wrap_Pos)             /* (PUF_QK_CR) Begin Wrap operation Mask */
#define PUF_QK_CR_qk_wrap(value)              (PUF_QK_CR_qk_wrap_Msk & (_UINT32_(value) << PUF_QK_CR_qk_wrap_Pos)) /* Assignment of value for qk_wrap in the PUF_QK_CR register */
#define PUF_QK_CR_qk_generate_random_Pos      _UINT32_(15)                                         /* (PUF_QK_CR) Begin Generate Random operation Position */
#define PUF_QK_CR_qk_generate_random_Msk      (_UINT32_(0x1) << PUF_QK_CR_qk_generate_random_Pos)  /* (PUF_QK_CR) Begin Generate Random operation Mask */
#define PUF_QK_CR_qk_generate_random(value)   (PUF_QK_CR_qk_generate_random_Msk & (_UINT32_(value) << PUF_QK_CR_qk_generate_random_Pos)) /* Assignment of value for qk_generate_random in the PUF_QK_CR register */
#define PUF_QK_CR_qk_test_memory_Pos          _UINT32_(30)                                         /* (PUF_QK_CR) Begin Test Memory operation Position */
#define PUF_QK_CR_qk_test_memory_Msk          (_UINT32_(0x1) << PUF_QK_CR_qk_test_memory_Pos)      /* (PUF_QK_CR) Begin Test Memory operation Mask */
#define PUF_QK_CR_qk_test_memory(value)       (PUF_QK_CR_qk_test_memory_Msk & (_UINT32_(value) << PUF_QK_CR_qk_test_memory_Pos)) /* Assignment of value for qk_test_memory in the PUF_QK_CR register */
#define PUF_QK_CR_qk_test_puf_Pos             _UINT32_(31)                                         /* (PUF_QK_CR) Begin Test PUF operation Position */
#define PUF_QK_CR_qk_test_puf_Msk             (_UINT32_(0x1) << PUF_QK_CR_qk_test_puf_Pos)         /* (PUF_QK_CR) Begin Test PUF operation Mask */
#define PUF_QK_CR_qk_test_puf(value)          (PUF_QK_CR_qk_test_puf_Msk & (_UINT32_(value) << PUF_QK_CR_qk_test_puf_Pos)) /* Assignment of value for qk_test_puf in the PUF_QK_CR register */
#define PUF_QK_CR_Msk                         _UINT32_(0xC00083EF)                                 /* (PUF_QK_CR) Register Mask  */


/* -------- PUF_QK_ORR : (PUF Offset: 0x204) ( R/ 32) Operation Result register; The Operation Result register provides the result code of the last operation (Initialization, Generate Random, etc.). The value in this register is only valid when qk_busy = 0. -------- */
#define PUF_QK_ORR_RESETVALUE                 _UINT32_(0x00)                                       /*  (PUF_QK_ORR) Operation Result register; The Operation Result register provides the result code of the last operation (Initialization, Generate Random, etc.). The value in this register is only valid when qk_busy = 0.  Reset Value */

#define PUF_QK_ORR_qk_result_code_Pos         _UINT32_(0)                                          /* (PUF_QK_ORR) Result code of last operation Position */
#define PUF_QK_ORR_qk_result_code_Msk         (_UINT32_(0xFF) << PUF_QK_ORR_qk_result_code_Pos)    /* (PUF_QK_ORR) Result code of last operation Mask */
#define PUF_QK_ORR_qk_result_code(value)      (PUF_QK_ORR_qk_result_code_Msk & (_UINT32_(value) << PUF_QK_ORR_qk_result_code_Pos)) /* Assignment of value for qk_result_code in the PUF_QK_ORR register */
#define   PUF_QK_ORR_qk_result_code_IID_QK_OK_Val _UINT32_(0x0)                                        /* (PUF_QK_ORR)   */
#define   PUF_QK_ORR_qk_result_code_IID_QK_ERR_PRODUCT_Val _UINT32_(0xF0)                                       /* (PUF_QK_ORR)   */
#define   PUF_QK_ORR_qk_result_code_IID_QK_ERR_PRODUCT_PH2_Val _UINT32_(0xF1)                                       /* (PUF_QK_ORR)   */
#define   PUF_QK_ORR_qk_result_code_IID_QK_ERR_TRANSFER_Val _UINT32_(0xF2)                                       /* (PUF_QK_ORR)   */
#define   PUF_QK_ORR_qk_result_code_IID_QK_ERR_TRANSFER_PH2_Val _UINT32_(0xF3)                                       /* (PUF_QK_ORR)   */
#define   PUF_QK_ORR_qk_result_code_IID_QK_ERR_AUTH_Val _UINT32_(0xF4)                                       /* (PUF_QK_ORR)   */
#define   PUF_QK_ORR_qk_result_code_IID_QK_ERR_AUTH_PH2_Val _UINT32_(0xF5)                                       /* (PUF_QK_ORR)   */
#define   PUF_QK_ORR_qk_result_code_IID_QK_ERR_PUF_QUALITY_Val _UINT32_(0xF6)                                       /* (PUF_QK_ORR)   */
#define   PUF_QK_ORR_qk_result_code_IID_QK_ERR_CONTEXT_Val _UINT32_(0xF7)                                       /* (PUF_QK_ORR)   */
#define   PUF_QK_ORR_qk_result_code_IID_QK_ERR_DESTINATION_Val _UINT32_(0xF8)                                       /* (PUF_QK_ORR)   */
#define   PUF_QK_ORR_qk_result_code_IID_QK_FAILURE_SRAM_Val _UINT32_(0xFF)                                       /* (PUF_QK_ORR)   */
#define PUF_QK_ORR_qk_result_code_IID_QK_OK   (PUF_QK_ORR_qk_result_code_IID_QK_OK_Val << PUF_QK_ORR_qk_result_code_Pos) /* (PUF_QK_ORR)  Position */
#define PUF_QK_ORR_qk_result_code_IID_QK_ERR_PRODUCT (PUF_QK_ORR_qk_result_code_IID_QK_ERR_PRODUCT_Val << PUF_QK_ORR_qk_result_code_Pos) /* (PUF_QK_ORR)  Position */
#define PUF_QK_ORR_qk_result_code_IID_QK_ERR_PRODUCT_PH2 (PUF_QK_ORR_qk_result_code_IID_QK_ERR_PRODUCT_PH2_Val << PUF_QK_ORR_qk_result_code_Pos) /* (PUF_QK_ORR)  Position */
#define PUF_QK_ORR_qk_result_code_IID_QK_ERR_TRANSFER (PUF_QK_ORR_qk_result_code_IID_QK_ERR_TRANSFER_Val << PUF_QK_ORR_qk_result_code_Pos) /* (PUF_QK_ORR)  Position */
#define PUF_QK_ORR_qk_result_code_IID_QK_ERR_TRANSFER_PH2 (PUF_QK_ORR_qk_result_code_IID_QK_ERR_TRANSFER_PH2_Val << PUF_QK_ORR_qk_result_code_Pos) /* (PUF_QK_ORR)  Position */
#define PUF_QK_ORR_qk_result_code_IID_QK_ERR_AUTH (PUF_QK_ORR_qk_result_code_IID_QK_ERR_AUTH_Val << PUF_QK_ORR_qk_result_code_Pos) /* (PUF_QK_ORR)  Position */
#define PUF_QK_ORR_qk_result_code_IID_QK_ERR_AUTH_PH2 (PUF_QK_ORR_qk_result_code_IID_QK_ERR_AUTH_PH2_Val << PUF_QK_ORR_qk_result_code_Pos) /* (PUF_QK_ORR)  Position */
#define PUF_QK_ORR_qk_result_code_IID_QK_ERR_PUF_QUALITY (PUF_QK_ORR_qk_result_code_IID_QK_ERR_PUF_QUALITY_Val << PUF_QK_ORR_qk_result_code_Pos) /* (PUF_QK_ORR)  Position */
#define PUF_QK_ORR_qk_result_code_IID_QK_ERR_CONTEXT (PUF_QK_ORR_qk_result_code_IID_QK_ERR_CONTEXT_Val << PUF_QK_ORR_qk_result_code_Pos) /* (PUF_QK_ORR)  Position */
#define PUF_QK_ORR_qk_result_code_IID_QK_ERR_DESTINATION (PUF_QK_ORR_qk_result_code_IID_QK_ERR_DESTINATION_Val << PUF_QK_ORR_qk_result_code_Pos) /* (PUF_QK_ORR)  Position */
#define PUF_QK_ORR_qk_result_code_IID_QK_FAILURE_SRAM (PUF_QK_ORR_qk_result_code_IID_QK_FAILURE_SRAM_Val << PUF_QK_ORR_qk_result_code_Pos) /* (PUF_QK_ORR)  Position */
#define PUF_QK_ORR_qk_last_operation_Pos      _UINT32_(24)                                         /* (PUF_QK_ORR) Number of last operation Position */
#define PUF_QK_ORR_qk_last_operation_Msk      (_UINT32_(0xFF) << PUF_QK_ORR_qk_last_operation_Pos) /* (PUF_QK_ORR) Number of last operation Mask */
#define PUF_QK_ORR_qk_last_operation(value)   (PUF_QK_ORR_qk_last_operation_Msk & (_UINT32_(value) << PUF_QK_ORR_qk_last_operation_Pos)) /* Assignment of value for qk_last_operation in the PUF_QK_ORR register */
#define   PUF_QK_ORR_qk_last_operation_IID_QK_LO_PROGRESS_Val _UINT32_(0x0)                                        /* (PUF_QK_ORR)   */
#define   PUF_QK_ORR_qk_last_operation_IID_QK_LO_ENROLL_Val _UINT32_(0x1)                                        /* (PUF_QK_ORR)   */
#define   PUF_QK_ORR_qk_last_operation_IID_QK_LO_START_Val _UINT32_(0x2)                                        /* (PUF_QK_ORR)   */
#define   PUF_QK_ORR_qk_last_operation_IID_QK_LO_RECONSTRUCT_Val _UINT32_(0x3)                                        /* (PUF_QK_ORR)   */
#define   PUF_QK_ORR_qk_last_operation_IID_QK_LO_STOP_Val _UINT32_(0x5)                                        /* (PUF_QK_ORR)   */
#define   PUF_QK_ORR_qk_last_operation_IID_QK_LO_GET_KEY_Val _UINT32_(0x6)                                        /* (PUF_QK_ORR)   */
#define   PUF_QK_ORR_qk_last_operation_IID_QK_LO_UNWRAP_Val _UINT32_(0x7)                                        /* (PUF_QK_ORR)   */
#define   PUF_QK_ORR_qk_last_operation_IID_QK_LO_WRAP_GEN_RND_Val _UINT32_(0x8)                                        /* (PUF_QK_ORR)   */
#define   PUF_QK_ORR_qk_last_operation_IID_QK_LO_WRAP_Val _UINT32_(0x9)                                        /* (PUF_QK_ORR)   */
#define   PUF_QK_ORR_qk_last_operation_IID_QK_LO_GEN_RND_Val _UINT32_(0xF)                                        /* (PUF_QK_ORR)   */
#define   PUF_QK_ORR_qk_last_operation_IID_QK_LO_TEST_MEMORY_Val _UINT32_(0x1E)                                       /* (PUF_QK_ORR)   */
#define   PUF_QK_ORR_qk_last_operation_IID_QK_LO_TEST_PUF_Val _UINT32_(0x1F)                                       /* (PUF_QK_ORR)   */
#define   PUF_QK_ORR_qk_last_operation_IID_QK_LO_INITIALIZATION_Val _UINT32_(0x20)                                       /* (PUF_QK_ORR)   */
#define   PUF_QK_ORR_qk_last_operation_IID_QK_LO_ZEROIZE_Val _UINT32_(0x2F)                                       /* (PUF_QK_ORR)   */
#define PUF_QK_ORR_qk_last_operation_IID_QK_LO_PROGRESS (PUF_QK_ORR_qk_last_operation_IID_QK_LO_PROGRESS_Val << PUF_QK_ORR_qk_last_operation_Pos) /* (PUF_QK_ORR)  Position */
#define PUF_QK_ORR_qk_last_operation_IID_QK_LO_ENROLL (PUF_QK_ORR_qk_last_operation_IID_QK_LO_ENROLL_Val << PUF_QK_ORR_qk_last_operation_Pos) /* (PUF_QK_ORR)  Position */
#define PUF_QK_ORR_qk_last_operation_IID_QK_LO_START (PUF_QK_ORR_qk_last_operation_IID_QK_LO_START_Val << PUF_QK_ORR_qk_last_operation_Pos) /* (PUF_QK_ORR)  Position */
#define PUF_QK_ORR_qk_last_operation_IID_QK_LO_RECONSTRUCT (PUF_QK_ORR_qk_last_operation_IID_QK_LO_RECONSTRUCT_Val << PUF_QK_ORR_qk_last_operation_Pos) /* (PUF_QK_ORR)  Position */
#define PUF_QK_ORR_qk_last_operation_IID_QK_LO_STOP (PUF_QK_ORR_qk_last_operation_IID_QK_LO_STOP_Val << PUF_QK_ORR_qk_last_operation_Pos) /* (PUF_QK_ORR)  Position */
#define PUF_QK_ORR_qk_last_operation_IID_QK_LO_GET_KEY (PUF_QK_ORR_qk_last_operation_IID_QK_LO_GET_KEY_Val << PUF_QK_ORR_qk_last_operation_Pos) /* (PUF_QK_ORR)  Position */
#define PUF_QK_ORR_qk_last_operation_IID_QK_LO_UNWRAP (PUF_QK_ORR_qk_last_operation_IID_QK_LO_UNWRAP_Val << PUF_QK_ORR_qk_last_operation_Pos) /* (PUF_QK_ORR)  Position */
#define PUF_QK_ORR_qk_last_operation_IID_QK_LO_WRAP_GEN_RND (PUF_QK_ORR_qk_last_operation_IID_QK_LO_WRAP_GEN_RND_Val << PUF_QK_ORR_qk_last_operation_Pos) /* (PUF_QK_ORR)  Position */
#define PUF_QK_ORR_qk_last_operation_IID_QK_LO_WRAP (PUF_QK_ORR_qk_last_operation_IID_QK_LO_WRAP_Val << PUF_QK_ORR_qk_last_operation_Pos) /* (PUF_QK_ORR)  Position */
#define PUF_QK_ORR_qk_last_operation_IID_QK_LO_GEN_RND (PUF_QK_ORR_qk_last_operation_IID_QK_LO_GEN_RND_Val << PUF_QK_ORR_qk_last_operation_Pos) /* (PUF_QK_ORR)  Position */
#define PUF_QK_ORR_qk_last_operation_IID_QK_LO_TEST_MEMORY (PUF_QK_ORR_qk_last_operation_IID_QK_LO_TEST_MEMORY_Val << PUF_QK_ORR_qk_last_operation_Pos) /* (PUF_QK_ORR)  Position */
#define PUF_QK_ORR_qk_last_operation_IID_QK_LO_TEST_PUF (PUF_QK_ORR_qk_last_operation_IID_QK_LO_TEST_PUF_Val << PUF_QK_ORR_qk_last_operation_Pos) /* (PUF_QK_ORR)  Position */
#define PUF_QK_ORR_qk_last_operation_IID_QK_LO_INITIALIZATION (PUF_QK_ORR_qk_last_operation_IID_QK_LO_INITIALIZATION_Val << PUF_QK_ORR_qk_last_operation_Pos) /* (PUF_QK_ORR)  Position */
#define PUF_QK_ORR_qk_last_operation_IID_QK_LO_ZEROIZE (PUF_QK_ORR_qk_last_operation_IID_QK_LO_ZEROIZE_Val << PUF_QK_ORR_qk_last_operation_Pos) /* (PUF_QK_ORR)  Position */
#define PUF_QK_ORR_Msk                        _UINT32_(0xFF0000FF)                                 /* (PUF_QK_ORR) Register Mask  */


/* -------- PUF_QK_SR : (PUF Offset: 0x208) (R/W 32) Status register; The Status register shows the current status of QuiddiKey and indicates whether a data transfer is requested. -------- */
#define PUF_QK_SR_RESETVALUE                  _UINT32_(0x01)                                       /*  (PUF_QK_SR) Status register; The Status register shows the current status of QuiddiKey and indicates whether a data transfer is requested.  Reset Value */

#define PUF_QK_SR_qk_busy_Pos                 _UINT32_(0)                                          /* (PUF_QK_SR) Operation is in progress Position */
#define PUF_QK_SR_qk_busy_Msk                 (_UINT32_(0x1) << PUF_QK_SR_qk_busy_Pos)             /* (PUF_QK_SR) Operation is in progress Mask */
#define PUF_QK_SR_qk_busy(value)              (PUF_QK_SR_qk_busy_Msk & (_UINT32_(value) << PUF_QK_SR_qk_busy_Pos)) /* Assignment of value for qk_busy in the PUF_QK_SR register */
#define PUF_QK_SR_qk_ok_Pos                   _UINT32_(1)                                          /* (PUF_QK_SR) Last operation was successful Position */
#define PUF_QK_SR_qk_ok_Msk                   (_UINT32_(0x1) << PUF_QK_SR_qk_ok_Pos)               /* (PUF_QK_SR) Last operation was successful Mask */
#define PUF_QK_SR_qk_ok(value)                (PUF_QK_SR_qk_ok_Msk & (_UINT32_(value) << PUF_QK_SR_qk_ok_Pos)) /* Assignment of value for qk_ok in the PUF_QK_SR register */
#define PUF_QK_SR_qk_error_Pos                _UINT32_(2)                                          /* (PUF_QK_SR) Last operation failed Position */
#define PUF_QK_SR_qk_error_Msk                (_UINT32_(0x1) << PUF_QK_SR_qk_error_Pos)            /* (PUF_QK_SR) Last operation failed Mask */
#define PUF_QK_SR_qk_error(value)             (PUF_QK_SR_qk_error_Msk & (_UINT32_(value) << PUF_QK_SR_qk_error_Pos)) /* Assignment of value for qk_error in the PUF_QK_SR register */
#define PUF_QK_SR_qk_zeroized_Pos             _UINT32_(3)                                          /* (PUF_QK_SR) QuiddiKey is in Zeroized or Locked state Position */
#define PUF_QK_SR_qk_zeroized_Msk             (_UINT32_(0x1) << PUF_QK_SR_qk_zeroized_Pos)         /* (PUF_QK_SR) QuiddiKey is in Zeroized or Locked state Mask */
#define PUF_QK_SR_qk_zeroized(value)          (PUF_QK_SR_qk_zeroized_Msk & (_UINT32_(value) << PUF_QK_SR_qk_zeroized_Pos)) /* Assignment of value for qk_zeroized in the PUF_QK_SR register */
#define PUF_QK_SR_qk_rejected_Pos             _UINT32_(4)                                          /* (PUF_QK_SR) Read: Last command was rejected Write 1: Clears this bit Position */
#define PUF_QK_SR_qk_rejected_Msk             (_UINT32_(0x1) << PUF_QK_SR_qk_rejected_Pos)         /* (PUF_QK_SR) Read: Last command was rejected Write 1: Clears this bit Mask */
#define PUF_QK_SR_qk_rejected(value)          (PUF_QK_SR_qk_rejected_Msk & (_UINT32_(value) << PUF_QK_SR_qk_rejected_Pos)) /* Assignment of value for qk_rejected in the PUF_QK_SR register */
#define PUF_QK_SR_qk_di_request_Pos           _UINT32_(5)                                          /* (PUF_QK_SR) Request for data in transfer via the QK_DIR register Position */
#define PUF_QK_SR_qk_di_request_Msk           (_UINT32_(0x1) << PUF_QK_SR_qk_di_request_Pos)       /* (PUF_QK_SR) Request for data in transfer via the QK_DIR register Mask */
#define PUF_QK_SR_qk_di_request(value)        (PUF_QK_SR_qk_di_request_Msk & (_UINT32_(value) << PUF_QK_SR_qk_di_request_Pos)) /* Assignment of value for qk_di_request in the PUF_QK_SR register */
#define PUF_QK_SR_qk_do_request_Pos           _UINT32_(6)                                          /* (PUF_QK_SR) Request for data out transfer via the QK_DOR register Position */
#define PUF_QK_SR_qk_do_request_Msk           (_UINT32_(0x1) << PUF_QK_SR_qk_do_request_Pos)       /* (PUF_QK_SR) Request for data out transfer via the QK_DOR register Mask */
#define PUF_QK_SR_qk_do_request(value)        (PUF_QK_SR_qk_do_request_Msk & (_UINT32_(value) << PUF_QK_SR_qk_do_request_Pos)) /* Assignment of value for qk_do_request in the PUF_QK_SR register */
#define PUF_QK_SR_Msk                         _UINT32_(0x0000007F)                                 /* (PUF_QK_SR) Register Mask  */


/* -------- PUF_QK_AR : (PUF Offset: 0x20C) ( R/ 32) Allow register; The Allow register indicates which operations are currently allowed. -------- */
#define PUF_QK_AR_RESETVALUE                  _UINT32_(0x00)                                       /*  (PUF_QK_AR) Allow register; The Allow register indicates which operations are currently allowed.  Reset Value */

#define PUF_QK_AR_qk_allow_enroll_Pos         _UINT32_(1)                                          /* (PUF_QK_AR) 0: Enroll operation is not allowed 1: Enroll operation is allowed Position */
#define PUF_QK_AR_qk_allow_enroll_Msk         (_UINT32_(0x1) << PUF_QK_AR_qk_allow_enroll_Pos)     /* (PUF_QK_AR) 0: Enroll operation is not allowed 1: Enroll operation is allowed Mask */
#define PUF_QK_AR_qk_allow_enroll(value)      (PUF_QK_AR_qk_allow_enroll_Msk & (_UINT32_(value) << PUF_QK_AR_qk_allow_enroll_Pos)) /* Assignment of value for qk_allow_enroll in the PUF_QK_AR register */
#define PUF_QK_AR_qk_allow_start_Pos          _UINT32_(2)                                          /* (PUF_QK_AR) 0: Start operation is not allowed 1: Start operation is allowed Position */
#define PUF_QK_AR_qk_allow_start_Msk          (_UINT32_(0x1) << PUF_QK_AR_qk_allow_start_Pos)      /* (PUF_QK_AR) 0: Start operation is not allowed 1: Start operation is allowed Mask */
#define PUF_QK_AR_qk_allow_start(value)       (PUF_QK_AR_qk_allow_start_Msk & (_UINT32_(value) << PUF_QK_AR_qk_allow_start_Pos)) /* Assignment of value for qk_allow_start in the PUF_QK_AR register */
#define PUF_QK_AR_qk_allow_reconstruct_Pos    _UINT32_(3)                                          /* (PUF_QK_AR) 0: Reconstruct operation is not allowed 1: Reconstruct operation is allowed Position */
#define PUF_QK_AR_qk_allow_reconstruct_Msk    (_UINT32_(0x1) << PUF_QK_AR_qk_allow_reconstruct_Pos) /* (PUF_QK_AR) 0: Reconstruct operation is not allowed 1: Reconstruct operation is allowed Mask */
#define PUF_QK_AR_qk_allow_reconstruct(value) (PUF_QK_AR_qk_allow_reconstruct_Msk & (_UINT32_(value) << PUF_QK_AR_qk_allow_reconstruct_Pos)) /* Assignment of value for qk_allow_reconstruct in the PUF_QK_AR register */
#define PUF_QK_AR_qk_allow_stop_Pos           _UINT32_(5)                                          /* (PUF_QK_AR) 0: Stop operation is not allowed 1: Stop operation is allowed Position */
#define PUF_QK_AR_qk_allow_stop_Msk           (_UINT32_(0x1) << PUF_QK_AR_qk_allow_stop_Pos)       /* (PUF_QK_AR) 0: Stop operation is not allowed 1: Stop operation is allowed Mask */
#define PUF_QK_AR_qk_allow_stop(value)        (PUF_QK_AR_qk_allow_stop_Msk & (_UINT32_(value) << PUF_QK_AR_qk_allow_stop_Pos)) /* Assignment of value for qk_allow_stop in the PUF_QK_AR register */
#define PUF_QK_AR_qk_allow_get_key_Pos        _UINT32_(6)                                          /* (PUF_QK_AR) 0: Get Key operation is not allowed 1: Get Key operation is allowed Position */
#define PUF_QK_AR_qk_allow_get_key_Msk        (_UINT32_(0x1) << PUF_QK_AR_qk_allow_get_key_Pos)    /* (PUF_QK_AR) 0: Get Key operation is not allowed 1: Get Key operation is allowed Mask */
#define PUF_QK_AR_qk_allow_get_key(value)     (PUF_QK_AR_qk_allow_get_key_Msk & (_UINT32_(value) << PUF_QK_AR_qk_allow_get_key_Pos)) /* Assignment of value for qk_allow_get_key in the PUF_QK_AR register */
#define PUF_QK_AR_qk_allow_unwrap_Pos         _UINT32_(7)                                          /* (PUF_QK_AR) 0: Unwrap operation is not allowed 1: Unwrap operation is allowed Position */
#define PUF_QK_AR_qk_allow_unwrap_Msk         (_UINT32_(0x1) << PUF_QK_AR_qk_allow_unwrap_Pos)     /* (PUF_QK_AR) 0: Unwrap operation is not allowed 1: Unwrap operation is allowed Mask */
#define PUF_QK_AR_qk_allow_unwrap(value)      (PUF_QK_AR_qk_allow_unwrap_Msk & (_UINT32_(value) << PUF_QK_AR_qk_allow_unwrap_Pos)) /* Assignment of value for qk_allow_unwrap in the PUF_QK_AR register */
#define PUF_QK_AR_qk_allow_wrap_generated_random_Pos _UINT32_(8)                                          /* (PUF_QK_AR) 0: Wrap Generated Random operation is not allowed 1: Wrap Generated Random operation is allowed Position */
#define PUF_QK_AR_qk_allow_wrap_generated_random_Msk (_UINT32_(0x1) << PUF_QK_AR_qk_allow_wrap_generated_random_Pos) /* (PUF_QK_AR) 0: Wrap Generated Random operation is not allowed 1: Wrap Generated Random operation is allowed Mask */
#define PUF_QK_AR_qk_allow_wrap_generated_random(value) (PUF_QK_AR_qk_allow_wrap_generated_random_Msk & (_UINT32_(value) << PUF_QK_AR_qk_allow_wrap_generated_random_Pos)) /* Assignment of value for qk_allow_wrap_generated_random in the PUF_QK_AR register */
#define PUF_QK_AR_qk_allow_wrap_Pos           _UINT32_(9)                                          /* (PUF_QK_AR) 0: Wrap operation is not allowed 1: Wrap operation is allowed Position */
#define PUF_QK_AR_qk_allow_wrap_Msk           (_UINT32_(0x1) << PUF_QK_AR_qk_allow_wrap_Pos)       /* (PUF_QK_AR) 0: Wrap operation is not allowed 1: Wrap operation is allowed Mask */
#define PUF_QK_AR_qk_allow_wrap(value)        (PUF_QK_AR_qk_allow_wrap_Msk & (_UINT32_(value) << PUF_QK_AR_qk_allow_wrap_Pos)) /* Assignment of value for qk_allow_wrap in the PUF_QK_AR register */
#define PUF_QK_AR_qk_allow_generate_random_Pos _UINT32_(15)                                         /* (PUF_QK_AR) 0: Generate Random operation is not allowed 1: Generate Random operation is allowed Position */
#define PUF_QK_AR_qk_allow_generate_random_Msk (_UINT32_(0x1) << PUF_QK_AR_qk_allow_generate_random_Pos) /* (PUF_QK_AR) 0: Generate Random operation is not allowed 1: Generate Random operation is allowed Mask */
#define PUF_QK_AR_qk_allow_generate_random(value) (PUF_QK_AR_qk_allow_generate_random_Msk & (_UINT32_(value) << PUF_QK_AR_qk_allow_generate_random_Pos)) /* Assignment of value for qk_allow_generate_random in the PUF_QK_AR register */
#define PUF_QK_AR_qk_allow_test_memory_Pos    _UINT32_(30)                                         /* (PUF_QK_AR) 0: Test Memory operation is not allowed 1: Test Memory operation is allowed Position */
#define PUF_QK_AR_qk_allow_test_memory_Msk    (_UINT32_(0x1) << PUF_QK_AR_qk_allow_test_memory_Pos) /* (PUF_QK_AR) 0: Test Memory operation is not allowed 1: Test Memory operation is allowed Mask */
#define PUF_QK_AR_qk_allow_test_memory(value) (PUF_QK_AR_qk_allow_test_memory_Msk & (_UINT32_(value) << PUF_QK_AR_qk_allow_test_memory_Pos)) /* Assignment of value for qk_allow_test_memory in the PUF_QK_AR register */
#define PUF_QK_AR_qk_allow_test_puf_Pos       _UINT32_(31)                                         /* (PUF_QK_AR) 0: Test PUF operation is not allowed 1: Test PUF operation is allowed Position */
#define PUF_QK_AR_qk_allow_test_puf_Msk       (_UINT32_(0x1) << PUF_QK_AR_qk_allow_test_puf_Pos)   /* (PUF_QK_AR) 0: Test PUF operation is not allowed 1: Test PUF operation is allowed Mask */
#define PUF_QK_AR_qk_allow_test_puf(value)    (PUF_QK_AR_qk_allow_test_puf_Msk & (_UINT32_(value) << PUF_QK_AR_qk_allow_test_puf_Pos)) /* Assignment of value for qk_allow_test_puf in the PUF_QK_AR register */
#define PUF_QK_AR_Msk                         _UINT32_(0xC00083EE)                                 /* (PUF_QK_AR) Register Mask  */


/* -------- PUF_QK_IER : (PUF Offset: 0x210) (R/W 32) Interrupt Enable register; With the Interrupt Enable register all QuiddiKey interrupts can be enabled or disabled, without changing the Interrupt Mask register. -------- */
#define PUF_QK_IER_RESETVALUE                 _UINT32_(0x00)                                       /*  (PUF_QK_IER) Interrupt Enable register; With the Interrupt Enable register all QuiddiKey interrupts can be enabled or disabled, without changing the Interrupt Mask register.  Reset Value */

#define PUF_QK_IER_qk_int_en_Pos              _UINT32_(0)                                          /* (PUF_QK_IER) 0: Disables all QuiddiKey interrupts 1: Enables all QuiddiKey interrupts that are enabled in the Interrupt Mask register Position */
#define PUF_QK_IER_qk_int_en_Msk              (_UINT32_(0x1) << PUF_QK_IER_qk_int_en_Pos)          /* (PUF_QK_IER) 0: Disables all QuiddiKey interrupts 1: Enables all QuiddiKey interrupts that are enabled in the Interrupt Mask register Mask */
#define PUF_QK_IER_qk_int_en(value)           (PUF_QK_IER_qk_int_en_Msk & (_UINT32_(value) << PUF_QK_IER_qk_int_en_Pos)) /* Assignment of value for qk_int_en in the PUF_QK_IER register */
#define PUF_QK_IER_Msk                        _UINT32_(0x00000001)                                 /* (PUF_QK_IER) Register Mask  */


/* -------- PUF_QK_IMR : (PUF Offset: 0x214) (R/W 32) Interrupt Mask register; Individual QuiddiKey interrupts can be enabled or disabled with the Interrupt Mask register. -------- */
#define PUF_QK_IMR_RESETVALUE                 _UINT32_(0x00)                                       /*  (PUF_QK_IMR) Interrupt Mask register; Individual QuiddiKey interrupts can be enabled or disabled with the Interrupt Mask register.  Reset Value */

#define PUF_QK_IMR_qk_int_en_busy_Pos         _UINT32_(0)                                          /* (PUF_QK_IMR) Enables the busy interrupt Position */
#define PUF_QK_IMR_qk_int_en_busy_Msk         (_UINT32_(0x1) << PUF_QK_IMR_qk_int_en_busy_Pos)     /* (PUF_QK_IMR) Enables the busy interrupt Mask */
#define PUF_QK_IMR_qk_int_en_busy(value)      (PUF_QK_IMR_qk_int_en_busy_Msk & (_UINT32_(value) << PUF_QK_IMR_qk_int_en_busy_Pos)) /* Assignment of value for qk_int_en_busy in the PUF_QK_IMR register */
#define PUF_QK_IMR_qk_int_en_ok_Pos           _UINT32_(1)                                          /* (PUF_QK_IMR) Enables the ok interrupt Position */
#define PUF_QK_IMR_qk_int_en_ok_Msk           (_UINT32_(0x1) << PUF_QK_IMR_qk_int_en_ok_Pos)       /* (PUF_QK_IMR) Enables the ok interrupt Mask */
#define PUF_QK_IMR_qk_int_en_ok(value)        (PUF_QK_IMR_qk_int_en_ok_Msk & (_UINT32_(value) << PUF_QK_IMR_qk_int_en_ok_Pos)) /* Assignment of value for qk_int_en_ok in the PUF_QK_IMR register */
#define PUF_QK_IMR_qk_int_en_error_Pos        _UINT32_(2)                                          /* (PUF_QK_IMR) Enables the error interrupt Position */
#define PUF_QK_IMR_qk_int_en_error_Msk        (_UINT32_(0x1) << PUF_QK_IMR_qk_int_en_error_Pos)    /* (PUF_QK_IMR) Enables the error interrupt Mask */
#define PUF_QK_IMR_qk_int_en_error(value)     (PUF_QK_IMR_qk_int_en_error_Msk & (_UINT32_(value) << PUF_QK_IMR_qk_int_en_error_Pos)) /* Assignment of value for qk_int_en_error in the PUF_QK_IMR register */
#define PUF_QK_IMR_qk_int_en_zeroized_Pos     _UINT32_(3)                                          /* (PUF_QK_IMR) Enables the zeroized interrupt Position */
#define PUF_QK_IMR_qk_int_en_zeroized_Msk     (_UINT32_(0x1) << PUF_QK_IMR_qk_int_en_zeroized_Pos) /* (PUF_QK_IMR) Enables the zeroized interrupt Mask */
#define PUF_QK_IMR_qk_int_en_zeroized(value)  (PUF_QK_IMR_qk_int_en_zeroized_Msk & (_UINT32_(value) << PUF_QK_IMR_qk_int_en_zeroized_Pos)) /* Assignment of value for qk_int_en_zeroized in the PUF_QK_IMR register */
#define PUF_QK_IMR_qk_int_en_rejected_Pos     _UINT32_(4)                                          /* (PUF_QK_IMR) Enables the rejected interrupt Position */
#define PUF_QK_IMR_qk_int_en_rejected_Msk     (_UINT32_(0x1) << PUF_QK_IMR_qk_int_en_rejected_Pos) /* (PUF_QK_IMR) Enables the rejected interrupt Mask */
#define PUF_QK_IMR_qk_int_en_rejected(value)  (PUF_QK_IMR_qk_int_en_rejected_Msk & (_UINT32_(value) << PUF_QK_IMR_qk_int_en_rejected_Pos)) /* Assignment of value for qk_int_en_rejected in the PUF_QK_IMR register */
#define PUF_QK_IMR_qk_int_en_di_request_Pos   _UINT32_(5)                                          /* (PUF_QK_IMR) Enables the data in request interrupt Position */
#define PUF_QK_IMR_qk_int_en_di_request_Msk   (_UINT32_(0x1) << PUF_QK_IMR_qk_int_en_di_request_Pos) /* (PUF_QK_IMR) Enables the data in request interrupt Mask */
#define PUF_QK_IMR_qk_int_en_di_request(value) (PUF_QK_IMR_qk_int_en_di_request_Msk & (_UINT32_(value) << PUF_QK_IMR_qk_int_en_di_request_Pos)) /* Assignment of value for qk_int_en_di_request in the PUF_QK_IMR register */
#define PUF_QK_IMR_qk_int_en_do_request_Pos   _UINT32_(6)                                          /* (PUF_QK_IMR) Enables the data out request interrupt Position */
#define PUF_QK_IMR_qk_int_en_do_request_Msk   (_UINT32_(0x1) << PUF_QK_IMR_qk_int_en_do_request_Pos) /* (PUF_QK_IMR) Enables the data out request interrupt Mask */
#define PUF_QK_IMR_qk_int_en_do_request(value) (PUF_QK_IMR_qk_int_en_do_request_Msk & (_UINT32_(value) << PUF_QK_IMR_qk_int_en_do_request_Pos)) /* Assignment of value for qk_int_en_do_request in the PUF_QK_IMR register */
#define PUF_QK_IMR_Msk                        _UINT32_(0x0000007F)                                 /* (PUF_QK_IMR) Register Mask  */


/* -------- PUF_QK_ISR : (PUF Offset: 0x218) (R/W 32) Interrupt Status register; The Interrupt Status register indicates which interrupt has occurred. Multiple interrupts may occur at the same time (e.g. the busy interrupt occurs together with one of the ok and error interrupts). Writing 1 to a bit, clears the corresponding bit. -------- */
#define PUF_QK_ISR_RESETVALUE                 _UINT32_(0x00)                                       /*  (PUF_QK_ISR) Interrupt Status register; The Interrupt Status register indicates which interrupt has occurred. Multiple interrupts may occur at the same time (e.g. the busy interrupt occurs together with one of the ok and error interrupts). Writing 1 to a bit, clears the corresponding bit.  Reset Value */

#define PUF_QK_ISR_qk_int_busy_Pos            _UINT32_(0)                                          /* (PUF_QK_ISR) A negative edge has occurred on qk_busy, which means that an operation has completed Position */
#define PUF_QK_ISR_qk_int_busy_Msk            (_UINT32_(0x1) << PUF_QK_ISR_qk_int_busy_Pos)        /* (PUF_QK_ISR) A negative edge has occurred on qk_busy, which means that an operation has completed Mask */
#define PUF_QK_ISR_qk_int_busy(value)         (PUF_QK_ISR_qk_int_busy_Msk & (_UINT32_(value) << PUF_QK_ISR_qk_int_busy_Pos)) /* Assignment of value for qk_int_busy in the PUF_QK_ISR register */
#define PUF_QK_ISR_qk_int_ok_Pos              _UINT32_(1)                                          /* (PUF_QK_ISR) A positive edge has occurred on qk_ok, which means that an operation successfully completed Position */
#define PUF_QK_ISR_qk_int_ok_Msk              (_UINT32_(0x1) << PUF_QK_ISR_qk_int_ok_Pos)          /* (PUF_QK_ISR) A positive edge has occurred on qk_ok, which means that an operation successfully completed Mask */
#define PUF_QK_ISR_qk_int_ok(value)           (PUF_QK_ISR_qk_int_ok_Msk & (_UINT32_(value) << PUF_QK_ISR_qk_int_ok_Pos)) /* Assignment of value for qk_int_ok in the PUF_QK_ISR register */
#define PUF_QK_ISR_qk_int_error_Pos           _UINT32_(2)                                          /* (PUF_QK_ISR) A positive edge has occurred on qk_error, which means that an operation has failed Position */
#define PUF_QK_ISR_qk_int_error_Msk           (_UINT32_(0x1) << PUF_QK_ISR_qk_int_error_Pos)       /* (PUF_QK_ISR) A positive edge has occurred on qk_error, which means that an operation has failed Mask */
#define PUF_QK_ISR_qk_int_error(value)        (PUF_QK_ISR_qk_int_error_Msk & (_UINT32_(value) << PUF_QK_ISR_qk_int_error_Pos)) /* Assignment of value for qk_int_error in the PUF_QK_ISR register */
#define PUF_QK_ISR_qk_int_zeroized_Pos        _UINT32_(3)                                          /* (PUF_QK_ISR) A positive edge has occurred on qk_zeroized, which means that QuiddiKey has moved to the Zeroized or Locked state Position */
#define PUF_QK_ISR_qk_int_zeroized_Msk        (_UINT32_(0x1) << PUF_QK_ISR_qk_int_zeroized_Pos)    /* (PUF_QK_ISR) A positive edge has occurred on qk_zeroized, which means that QuiddiKey has moved to the Zeroized or Locked state Mask */
#define PUF_QK_ISR_qk_int_zeroized(value)     (PUF_QK_ISR_qk_int_zeroized_Msk & (_UINT32_(value) << PUF_QK_ISR_qk_int_zeroized_Pos)) /* Assignment of value for qk_int_zeroized in the PUF_QK_ISR register */
#define PUF_QK_ISR_qk_int_rejected_Pos        _UINT32_(4)                                          /* (PUF_QK_ISR) A positive edge has occurred on qk_rejected, which means that a command was rejected Position */
#define PUF_QK_ISR_qk_int_rejected_Msk        (_UINT32_(0x1) << PUF_QK_ISR_qk_int_rejected_Pos)    /* (PUF_QK_ISR) A positive edge has occurred on qk_rejected, which means that a command was rejected Mask */
#define PUF_QK_ISR_qk_int_rejected(value)     (PUF_QK_ISR_qk_int_rejected_Msk & (_UINT32_(value) << PUF_QK_ISR_qk_int_rejected_Pos)) /* Assignment of value for qk_int_rejected in the PUF_QK_ISR register */
#define PUF_QK_ISR_qk_int_di_request_Pos      _UINT32_(5)                                          /* (PUF_QK_ISR) A positive edge has occurred on qk_di_request, which means that a data in transfer is requested via the QK_DIR register Position */
#define PUF_QK_ISR_qk_int_di_request_Msk      (_UINT32_(0x1) << PUF_QK_ISR_qk_int_di_request_Pos)  /* (PUF_QK_ISR) A positive edge has occurred on qk_di_request, which means that a data in transfer is requested via the QK_DIR register Mask */
#define PUF_QK_ISR_qk_int_di_request(value)   (PUF_QK_ISR_qk_int_di_request_Msk & (_UINT32_(value) << PUF_QK_ISR_qk_int_di_request_Pos)) /* Assignment of value for qk_int_di_request in the PUF_QK_ISR register */
#define PUF_QK_ISR_qk_int_do_request_Pos      _UINT32_(6)                                          /* (PUF_QK_ISR) A positive edge has occurred on qk_do_request, which means that a data out transfer is requested via the QK_DOR register Position */
#define PUF_QK_ISR_qk_int_do_request_Msk      (_UINT32_(0x1) << PUF_QK_ISR_qk_int_do_request_Pos)  /* (PUF_QK_ISR) A positive edge has occurred on qk_do_request, which means that a data out transfer is requested via the QK_DOR register Mask */
#define PUF_QK_ISR_qk_int_do_request(value)   (PUF_QK_ISR_qk_int_do_request_Msk & (_UINT32_(value) << PUF_QK_ISR_qk_int_do_request_Pos)) /* Assignment of value for qk_int_do_request in the PUF_QK_ISR register */
#define PUF_QK_ISR_Msk                        _UINT32_(0x0000007F)                                 /* (PUF_QK_ISR) Register Mask  */


/* -------- PUF_QK_DATA_DEST : (PUF Offset: 0x220) (R/W 32) Data Destination register; The Data Destination register defines via which interface data is made available by QuiddiKey. Only one bit at a time may be 1. -------- */
#define PUF_QK_DATA_DEST_RESETVALUE           _UINT32_(0x00)                                       /*  (PUF_QK_DATA_DEST) Data Destination register; The Data Destination register defines via which interface data is made available by QuiddiKey. Only one bit at a time may be 1.  Reset Value */

#define PUF_QK_DATA_DEST_qk_dest_dor_Pos      _UINT32_(0)                                          /* (PUF_QK_DATA_DEST) Data will be made available via the QK_DOR register Position */
#define PUF_QK_DATA_DEST_qk_dest_dor_Msk      (_UINT32_(0x1) << PUF_QK_DATA_DEST_qk_dest_dor_Pos)  /* (PUF_QK_DATA_DEST) Data will be made available via the QK_DOR register Mask */
#define PUF_QK_DATA_DEST_qk_dest_dor(value)   (PUF_QK_DATA_DEST_qk_dest_dor_Msk & (_UINT32_(value) << PUF_QK_DATA_DEST_qk_dest_dor_Pos)) /* Assignment of value for qk_dest_dor in the PUF_QK_DATA_DEST register */
#define PUF_QK_DATA_DEST_qk_dest_so_Pos       _UINT32_(1)                                          /* (PUF_QK_DATA_DEST) Data will be made available via the SO interface Position */
#define PUF_QK_DATA_DEST_qk_dest_so_Msk       (_UINT32_(0x1) << PUF_QK_DATA_DEST_qk_dest_so_Pos)   /* (PUF_QK_DATA_DEST) Data will be made available via the SO interface Mask */
#define PUF_QK_DATA_DEST_qk_dest_so(value)    (PUF_QK_DATA_DEST_qk_dest_so_Msk & (_UINT32_(value) << PUF_QK_DATA_DEST_qk_dest_so_Pos)) /* Assignment of value for qk_dest_so in the PUF_QK_DATA_DEST register */
#define PUF_QK_DATA_DEST_Msk                  _UINT32_(0x00000003)                                 /* (PUF_QK_DATA_DEST) Register Mask  */


/* -------- PUF_QK_DATA_SRC : (PUF Offset: 0x224) (R/W 32) Data Source register; The Data Source register defines via which interface data must be provided to QuiddiKey. Combinations of bits may be 1 at a time. -------- */
#define PUF_QK_DATA_SRC_RESETVALUE            _UINT32_(0x00)                                       /*  (PUF_QK_DATA_SRC) Data Source register; The Data Source register defines via which interface data must be provided to QuiddiKey. Combinations of bits may be 1 at a time.  Reset Value */

#define PUF_QK_DATA_SRC_qk_src_dir_Pos        _UINT32_(0)                                          /* (PUF_QK_DATA_SRC) Data must be provided via the QK_DIR register Position */
#define PUF_QK_DATA_SRC_qk_src_dir_Msk        (_UINT32_(0x1) << PUF_QK_DATA_SRC_qk_src_dir_Pos)    /* (PUF_QK_DATA_SRC) Data must be provided via the QK_DIR register Mask */
#define PUF_QK_DATA_SRC_qk_src_dir(value)     (PUF_QK_DATA_SRC_qk_src_dir_Msk & (_UINT32_(value) << PUF_QK_DATA_SRC_qk_src_dir_Pos)) /* Assignment of value for qk_src_dir in the PUF_QK_DATA_SRC register */
#define PUF_QK_DATA_SRC_qk_src_si_Pos         _UINT32_(1)                                          /* (PUF_QK_DATA_SRC) Data must be provided via the SI interface Position */
#define PUF_QK_DATA_SRC_qk_src_si_Msk         (_UINT32_(0x1) << PUF_QK_DATA_SRC_qk_src_si_Pos)     /* (PUF_QK_DATA_SRC) Data must be provided via the SI interface Mask */
#define PUF_QK_DATA_SRC_qk_src_si(value)      (PUF_QK_DATA_SRC_qk_src_si_Msk & (_UINT32_(value) << PUF_QK_DATA_SRC_qk_src_si_Pos)) /* Assignment of value for qk_src_si in the PUF_QK_DATA_SRC register */
#define PUF_QK_DATA_SRC_Msk                   _UINT32_(0x00000003)                                 /* (PUF_QK_DATA_SRC) Register Mask  */


/* -------- PUF_QK_KEY_INDEX : (PUF Offset: 0x228) ( R/ 32) Key Index register; The Key Index register provides the index of the key that is currently output. -------- */
#define PUF_QK_KEY_INDEX_RESETVALUE           _UINT32_(0x00)                                       /*  (PUF_QK_KEY_INDEX) Key Index register; The Key Index register provides the index of the key that is currently output.  Reset Value */

#define PUF_QK_KEY_INDEX_qk_key_inde_Pos      _UINT32_(0)                                          /* (PUF_QK_KEY_INDEX) Value of the Key Index Position */
#define PUF_QK_KEY_INDEX_qk_key_inde_Msk      (_UINT32_(0xF) << PUF_QK_KEY_INDEX_qk_key_inde_Pos)  /* (PUF_QK_KEY_INDEX) Value of the Key Index Mask */
#define PUF_QK_KEY_INDEX_qk_key_inde(value)   (PUF_QK_KEY_INDEX_qk_key_inde_Msk & (_UINT32_(value) << PUF_QK_KEY_INDEX_qk_key_inde_Pos)) /* Assignment of value for qk_key_inde in the PUF_QK_KEY_INDEX register */
#define PUF_QK_KEY_INDEX_Msk                  _UINT32_(0x0000000F)                                 /* (PUF_QK_KEY_INDEX) Register Mask  */


/* -------- PUF_QK_DIR : (PUF Offset: 0x2A0) ( /W 32) Data Input register; The Data Input register is used to transfer data to QuiddiKey. It can only be written when input data is requested (indicated by the qk_di_request signal). When written at any other moment, or when read, an error response is generated. Depending on the way the system is configured and connected, this may generate an exception. -------- */
#define PUF_QK_DIR_RESETVALUE                 _UINT32_(0x00)                                       /*  (PUF_QK_DIR) Data Input register; The Data Input register is used to transfer data to QuiddiKey. It can only be written when input data is requested (indicated by the qk_di_request signal). When written at any other moment, or when read, an error response is generated. Depending on the way the system is configured and connected, this may generate an exception.  Reset Value */

#define PUF_QK_DIR_qk_di_Pos                  _UINT32_(0)                                          /* (PUF_QK_DIR) Input data to QuiddiKey Position */
#define PUF_QK_DIR_qk_di_Msk                  (_UINT32_(0xFFFFFFFF) << PUF_QK_DIR_qk_di_Pos)       /* (PUF_QK_DIR) Input data to QuiddiKey Mask */
#define PUF_QK_DIR_qk_di(value)               (PUF_QK_DIR_qk_di_Msk & (_UINT32_(value) << PUF_QK_DIR_qk_di_Pos)) /* Assignment of value for qk_di in the PUF_QK_DIR register */
#define PUF_QK_DIR_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (PUF_QK_DIR) Register Mask  */


/* -------- PUF_QK_DOR : (PUF Offset: 0x2A8) ( R/ 32) Data Output register; The Data Output register is used to transfer data from QuiddiKey. It can only be read when input data is available (indicated by the qk_do_request signal). When read at any other moment, or when written, an error response is generated. Depending on the way the system is configured and connected, this may generate an exception. -------- */
#define PUF_QK_DOR_RESETVALUE                 _UINT32_(0x00)                                       /*  (PUF_QK_DOR) Data Output register; The Data Output register is used to transfer data from QuiddiKey. It can only be read when input data is available (indicated by the qk_do_request signal). When read at any other moment, or when written, an error response is generated. Depending on the way the system is configured and connected, this may generate an exception.  Reset Value */

#define PUF_QK_DOR_qk_do_Pos                  _UINT32_(0)                                          /* (PUF_QK_DOR) Output data from QuiddiKey Position */
#define PUF_QK_DOR_qk_do_Msk                  (_UINT32_(0xFFFFFFFF) << PUF_QK_DOR_qk_do_Pos)       /* (PUF_QK_DOR) Output data from QuiddiKey Mask */
#define PUF_QK_DOR_qk_do(value)               (PUF_QK_DOR_qk_do_Msk & (_UINT32_(value) << PUF_QK_DOR_qk_do_Pos)) /* Assignment of value for qk_do in the PUF_QK_DOR register */
#define PUF_QK_DOR_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (PUF_QK_DOR) Register Mask  */


/* -------- PUF_QK_MISC : (PUF Offset: 0x2C0) (R/W 32) Miscellaneous register; The Miscellaneous register defines miscellaneous settings for QuiddiKey. These usually need to be configured only once after power up orreset. -------- */
#define PUF_QK_MISC_RESETVALUE                _UINT32_(0x01)                                       /*  (PUF_QK_MISC) Miscellaneous register; The Miscellaneous register defines miscellaneous settings for QuiddiKey. These usually need to be configured only once after power up orreset.  Reset Value */

#define PUF_QK_MISC_qk_data_endianness_Pos    _UINT32_(0)                                          /* (PUF_QK_MISC) Defines the endianness of data in QK_DIR and QK_DOR: 0: Little endian 1: Big endian (default) Position */
#define PUF_QK_MISC_qk_data_endianness_Msk    (_UINT32_(0x1) << PUF_QK_MISC_qk_data_endianness_Pos) /* (PUF_QK_MISC) Defines the endianness of data in QK_DIR and QK_DOR: 0: Little endian 1: Big endian (default) Mask */
#define PUF_QK_MISC_qk_data_endianness(value) (PUF_QK_MISC_qk_data_endianness_Msk & (_UINT32_(value) << PUF_QK_MISC_qk_data_endianness_Pos)) /* Assignment of value for qk_data_endianness in the PUF_QK_MISC register */
#define PUF_QK_MISC_Msk                       _UINT32_(0x00000001)                                 /* (PUF_QK_MISC) Register Mask  */


/* -------- PUF_QK_IF_SR : (PUF Offset: 0x2D0) (R/W 32) Interface Status register; The status of the interface can be monitored with the Interface Status register. Writing 1 to a bit, clears the corresponding bit. -------- */
#define PUF_QK_IF_SR_RESETVALUE               _UINT32_(0x00)                                       /*  (PUF_QK_IF_SR) Interface Status register; The status of the interface can be monitored with the Interface Status register. Writing 1 to a bit, clears the corresponding bit.  Reset Value */

#define PUF_QK_IF_SR_reg_if_error_Pos         _UINT32_(0)                                          /* (PUF_QK_IF_SR) An error has occurred at the register interface Position */
#define PUF_QK_IF_SR_reg_if_error_Msk         (_UINT32_(0x1) << PUF_QK_IF_SR_reg_if_error_Pos)     /* (PUF_QK_IF_SR) An error has occurred at the register interface Mask */
#define PUF_QK_IF_SR_reg_if_error(value)      (PUF_QK_IF_SR_reg_if_error_Msk & (_UINT32_(value) << PUF_QK_IF_SR_reg_if_error_Pos)) /* Assignment of value for reg_if_error in the PUF_QK_IF_SR register */
#define PUF_QK_IF_SR_Msk                      _UINT32_(0x00000001)                                 /* (PUF_QK_IF_SR) Register Mask  */


/* -------- PUF_QK_TEST : (PUF Offset: 0x2D8) (R/W 32) Test register; With the Test register a BIST can be started. It also shows the result of the last BIST. -------- */
#define PUF_QK_TEST_RESETVALUE                _UINT32_(0x00)                                       /*  (PUF_QK_TEST) Test register; With the Test register a BIST can be started. It also shows the result of the last BIST.  Reset Value */

#define PUF_QK_TEST_qk_bist_enable_Pos        _UINT32_(0)                                          /* (PUF_QK_TEST) Isolates QuiddiKey and runs BIST Position */
#define PUF_QK_TEST_qk_bist_enable_Msk        (_UINT32_(0x1) << PUF_QK_TEST_qk_bist_enable_Pos)    /* (PUF_QK_TEST) Isolates QuiddiKey and runs BIST Mask */
#define PUF_QK_TEST_qk_bist_enable(value)     (PUF_QK_TEST_qk_bist_enable_Msk & (_UINT32_(value) << PUF_QK_TEST_qk_bist_enable_Pos)) /* Assignment of value for qk_bist_enable in the PUF_QK_TEST register */
#define PUF_QK_TEST_qk_bist_running_Pos       _UINT32_(4)                                          /* (PUF_QK_TEST) BIST is in progress or finishing up (after qk_bist_enable = 0) Position */
#define PUF_QK_TEST_qk_bist_running_Msk       (_UINT32_(0x1) << PUF_QK_TEST_qk_bist_running_Pos)   /* (PUF_QK_TEST) BIST is in progress or finishing up (after qk_bist_enable = 0) Mask */
#define PUF_QK_TEST_qk_bist_running(value)    (PUF_QK_TEST_qk_bist_running_Msk & (_UINT32_(value) << PUF_QK_TEST_qk_bist_running_Pos)) /* Assignment of value for qk_bist_running in the PUF_QK_TEST register */
#define PUF_QK_TEST_qk_bist_active_Pos        _UINT32_(5)                                          /* (PUF_QK_TEST) BIST is in progress Position */
#define PUF_QK_TEST_qk_bist_active_Msk        (_UINT32_(0x1) << PUF_QK_TEST_qk_bist_active_Pos)    /* (PUF_QK_TEST) BIST is in progress Mask */
#define PUF_QK_TEST_qk_bist_active(value)     (PUF_QK_TEST_qk_bist_active_Msk & (_UINT32_(value) << PUF_QK_TEST_qk_bist_active_Pos)) /* Assignment of value for qk_bist_active in the PUF_QK_TEST register */
#define PUF_QK_TEST_qk_bist_ok_Pos            _UINT32_(6)                                          /* (PUF_QK_TEST) BIST has passed Position */
#define PUF_QK_TEST_qk_bist_ok_Msk            (_UINT32_(0x1) << PUF_QK_TEST_qk_bist_ok_Pos)        /* (PUF_QK_TEST) BIST has passed Mask */
#define PUF_QK_TEST_qk_bist_ok(value)         (PUF_QK_TEST_qk_bist_ok_Msk & (_UINT32_(value) << PUF_QK_TEST_qk_bist_ok_Pos)) /* Assignment of value for qk_bist_ok in the PUF_QK_TEST register */
#define PUF_QK_TEST_qk_bist_error_Pos         _UINT32_(7)                                          /* (PUF_QK_TEST) BIST has failed Position */
#define PUF_QK_TEST_qk_bist_error_Msk         (_UINT32_(0x1) << PUF_QK_TEST_qk_bist_error_Pos)     /* (PUF_QK_TEST) BIST has failed Mask */
#define PUF_QK_TEST_qk_bist_error(value)      (PUF_QK_TEST_qk_bist_error_Msk & (_UINT32_(value) << PUF_QK_TEST_qk_bist_error_Pos)) /* Assignment of value for qk_bist_error in the PUF_QK_TEST register */
#define PUF_QK_TEST_qk_allow_bist_Pos         _UINT32_(31)                                         /* (PUF_QK_TEST) BIST is not allowed Position */
#define PUF_QK_TEST_qk_allow_bist_Msk         (_UINT32_(0x1) << PUF_QK_TEST_qk_allow_bist_Pos)     /* (PUF_QK_TEST) BIST is not allowed Mask */
#define PUF_QK_TEST_qk_allow_bist(value)      (PUF_QK_TEST_qk_allow_bist_Msk & (_UINT32_(value) << PUF_QK_TEST_qk_allow_bist_Pos)) /* Assignment of value for qk_allow_bist in the PUF_QK_TEST register */
#define PUF_QK_TEST_Msk                       _UINT32_(0x800000F1)                                 /* (PUF_QK_TEST) Register Mask  */


/* -------- PUF_QK_PSR : (PUF Offset: 0x2DC) ( R/ 32) PUF Score register; The PUF Score register shows the value of the PUF Score that was obtained during the last Test PUF, Enroll, Start or Reconstruct operation. -------- */
#define PUF_QK_PSR_RESETVALUE                 _UINT32_(0x0F)                                       /*  (PUF_QK_PSR) PUF Score register; The PUF Score register shows the value of the PUF Score that was obtained during the last Test PUF, Enroll, Start or Reconstruct operation.  Reset Value */

#define PUF_QK_PSR_qk_puf_score_Pos           _UINT32_(0)                                          /* (PUF_QK_PSR) PUF score obtained during the last Test PUF, Enroll, Start or Reconstruct operation Position */
#define PUF_QK_PSR_qk_puf_score_Msk           (_UINT32_(0xF) << PUF_QK_PSR_qk_puf_score_Pos)       /* (PUF_QK_PSR) PUF score obtained during the last Test PUF, Enroll, Start or Reconstruct operation Mask */
#define PUF_QK_PSR_qk_puf_score(value)        (PUF_QK_PSR_qk_puf_score_Msk & (_UINT32_(value) << PUF_QK_PSR_qk_puf_score_Pos)) /* Assignment of value for qk_puf_score in the PUF_QK_PSR register */
#define PUF_QK_PSR_Msk                        _UINT32_(0x0000000F)                                 /* (PUF_QK_PSR) Register Mask  */


/* -------- PUF_QK_HW_RUC0 : (PUF Offset: 0x2E0) ( R/ 32) Module Restrict User Context 0 register; The Module Restrict User Context 0 register shows the values of the qk_restrict_user_context_0 signal on the signal interface. -------- */
#define PUF_QK_HW_RUC0_RESETVALUE             _UINT32_(0x00)                                       /*  (PUF_QK_HW_RUC0) Module Restrict User Context 0 register; The Module Restrict User Context 0 register shows the values of the qk_restrict_user_context_0 signal on the signal interface.  Reset Value */

#define PUF_QK_HW_RUC0_qk_restrict_user_context_0_Pos _UINT32_(0)                                          /* (PUF_QK_HW_RUC0) For each bit in the User_Context_0 field: 0: This bit can be used 1: This bit cannot be used Position */
#define PUF_QK_HW_RUC0_qk_restrict_user_context_0_Msk (_UINT32_(0xFFFFFFFF) << PUF_QK_HW_RUC0_qk_restrict_user_context_0_Pos) /* (PUF_QK_HW_RUC0) For each bit in the User_Context_0 field: 0: This bit can be used 1: This bit cannot be used Mask */
#define PUF_QK_HW_RUC0_qk_restrict_user_context_0(value) (PUF_QK_HW_RUC0_qk_restrict_user_context_0_Msk & (_UINT32_(value) << PUF_QK_HW_RUC0_qk_restrict_user_context_0_Pos)) /* Assignment of value for qk_restrict_user_context_0 in the PUF_QK_HW_RUC0 register */
#define PUF_QK_HW_RUC0_Msk                    _UINT32_(0xFFFFFFFF)                                 /* (PUF_QK_HW_RUC0) Register Mask  */


/* -------- PUF_QK_HW_RUC1 : (PUF Offset: 0x2E4) ( R/ 32) Module Restrict User Context 1 register; The Module Restrict User Context 1 register shows the values of the qk_restrict_user_context_1 signal on the signal interface. -------- */
#define PUF_QK_HW_RUC1_RESETVALUE             _UINT32_(0x00)                                       /*  (PUF_QK_HW_RUC1) Module Restrict User Context 1 register; The Module Restrict User Context 1 register shows the values of the qk_restrict_user_context_1 signal on the signal interface.  Reset Value */

#define PUF_QK_HW_RUC1_qk_restrict_user_context_1_Pos _UINT32_(0)                                          /* (PUF_QK_HW_RUC1) For each bit in the User_Context_1 field: 0: This bit can be used 1: This bit cannot be used Position */
#define PUF_QK_HW_RUC1_qk_restrict_user_context_1_Msk (_UINT32_(0xFFFFFFFF) << PUF_QK_HW_RUC1_qk_restrict_user_context_1_Pos) /* (PUF_QK_HW_RUC1) For each bit in the User_Context_1 field: 0: This bit can be used 1: This bit cannot be used Mask */
#define PUF_QK_HW_RUC1_qk_restrict_user_context_1(value) (PUF_QK_HW_RUC1_qk_restrict_user_context_1_Msk & (_UINT32_(value) << PUF_QK_HW_RUC1_qk_restrict_user_context_1_Pos)) /* Assignment of value for qk_restrict_user_context_1 in the PUF_QK_HW_RUC1 register */
#define PUF_QK_HW_RUC1_Msk                    _UINT32_(0xFFFFFFFF)                                 /* (PUF_QK_HW_RUC1) Register Mask  */


/* -------- PUF_QK_HW_SETTINGS : (PUF Offset: 0x2F0) ( R/ 32) Module Settings register; The Module Settings register shows the values of the module settings on the signal interface. -------- */
#define PUF_QK_HW_SETTINGS_RESETVALUE         _UINT32_(0x00)                                       /*  (PUF_QK_HW_SETTINGS) Module Settings register; The Module Settings register shows the values of the module settings on the signal interface.  Reset Value */

#define PUF_QK_HW_SETTINGS_qk_disable_enroll_Pos _UINT32_(1)                                          /* (PUF_QK_HW_SETTINGS) 0: Enroll operations are enabled 1: Enroll operations are disabled Position */
#define PUF_QK_HW_SETTINGS_qk_disable_enroll_Msk (_UINT32_(0x1) << PUF_QK_HW_SETTINGS_qk_disable_enroll_Pos) /* (PUF_QK_HW_SETTINGS) 0: Enroll operations are enabled 1: Enroll operations are disabled Mask */
#define PUF_QK_HW_SETTINGS_qk_disable_enroll(value) (PUF_QK_HW_SETTINGS_qk_disable_enroll_Msk & (_UINT32_(value) << PUF_QK_HW_SETTINGS_qk_disable_enroll_Pos)) /* Assignment of value for qk_disable_enroll in the PUF_QK_HW_SETTINGS register */
#define PUF_QK_HW_SETTINGS_qk_disable_start_Pos _UINT32_(2)                                          /* (PUF_QK_HW_SETTINGS) 0: Start operations are enabled 1: Start operations are disabled Position */
#define PUF_QK_HW_SETTINGS_qk_disable_start_Msk (_UINT32_(0x1) << PUF_QK_HW_SETTINGS_qk_disable_start_Pos) /* (PUF_QK_HW_SETTINGS) 0: Start operations are enabled 1: Start operations are disabled Mask */
#define PUF_QK_HW_SETTINGS_qk_disable_start(value) (PUF_QK_HW_SETTINGS_qk_disable_start_Msk & (_UINT32_(value) << PUF_QK_HW_SETTINGS_qk_disable_start_Pos)) /* Assignment of value for qk_disable_start in the PUF_QK_HW_SETTINGS register */
#define PUF_QK_HW_SETTINGS_qk_disable_reconstruct_Pos _UINT32_(3)                                          /* (PUF_QK_HW_SETTINGS) 0: Reconstruct operations are enabled 1: Reconstruct operations are disabled Position */
#define PUF_QK_HW_SETTINGS_qk_disable_reconstruct_Msk (_UINT32_(0x1) << PUF_QK_HW_SETTINGS_qk_disable_reconstruct_Pos) /* (PUF_QK_HW_SETTINGS) 0: Reconstruct operations are enabled 1: Reconstruct operations are disabled Mask */
#define PUF_QK_HW_SETTINGS_qk_disable_reconstruct(value) (PUF_QK_HW_SETTINGS_qk_disable_reconstruct_Msk & (_UINT32_(value) << PUF_QK_HW_SETTINGS_qk_disable_reconstruct_Pos)) /* Assignment of value for qk_disable_reconstruct in the PUF_QK_HW_SETTINGS register */
#define PUF_QK_HW_SETTINGS_qk_disable_stop_Pos _UINT32_(5)                                          /* (PUF_QK_HW_SETTINGS) 0: Stop operations are enabled 1: Stop operations are disabled Position */
#define PUF_QK_HW_SETTINGS_qk_disable_stop_Msk (_UINT32_(0x1) << PUF_QK_HW_SETTINGS_qk_disable_stop_Pos) /* (PUF_QK_HW_SETTINGS) 0: Stop operations are enabled 1: Stop operations are disabled Mask */
#define PUF_QK_HW_SETTINGS_qk_disable_stop(value) (PUF_QK_HW_SETTINGS_qk_disable_stop_Msk & (_UINT32_(value) << PUF_QK_HW_SETTINGS_qk_disable_stop_Pos)) /* Assignment of value for qk_disable_stop in the PUF_QK_HW_SETTINGS register */
#define PUF_QK_HW_SETTINGS_qk_disable_get_key_Pos _UINT32_(6)                                          /* (PUF_QK_HW_SETTINGS) 0: Get Key operations are enabled 1: Get Key operations are disabled Position */
#define PUF_QK_HW_SETTINGS_qk_disable_get_key_Msk (_UINT32_(0x1) << PUF_QK_HW_SETTINGS_qk_disable_get_key_Pos) /* (PUF_QK_HW_SETTINGS) 0: Get Key operations are enabled 1: Get Key operations are disabled Mask */
#define PUF_QK_HW_SETTINGS_qk_disable_get_key(value) (PUF_QK_HW_SETTINGS_qk_disable_get_key_Msk & (_UINT32_(value) << PUF_QK_HW_SETTINGS_qk_disable_get_key_Pos)) /* Assignment of value for qk_disable_get_key in the PUF_QK_HW_SETTINGS register */
#define PUF_QK_HW_SETTINGS_qk_disable_unwrap_Pos _UINT32_(7)                                          /* (PUF_QK_HW_SETTINGS) 0: Unwrap operations are enabled 1: Unwrap operations are disabled Position */
#define PUF_QK_HW_SETTINGS_qk_disable_unwrap_Msk (_UINT32_(0x1) << PUF_QK_HW_SETTINGS_qk_disable_unwrap_Pos) /* (PUF_QK_HW_SETTINGS) 0: Unwrap operations are enabled 1: Unwrap operations are disabled Mask */
#define PUF_QK_HW_SETTINGS_qk_disable_unwrap(value) (PUF_QK_HW_SETTINGS_qk_disable_unwrap_Msk & (_UINT32_(value) << PUF_QK_HW_SETTINGS_qk_disable_unwrap_Pos)) /* Assignment of value for qk_disable_unwrap in the PUF_QK_HW_SETTINGS register */
#define PUF_QK_HW_SETTINGS_qk_disable_wrap_generated_random_Pos _UINT32_(8)                                          /* (PUF_QK_HW_SETTINGS) 0: Wrap Generated Random operations are enabled 1: Wrap Generated Random operations are disabled Position */
#define PUF_QK_HW_SETTINGS_qk_disable_wrap_generated_random_Msk (_UINT32_(0x1) << PUF_QK_HW_SETTINGS_qk_disable_wrap_generated_random_Pos) /* (PUF_QK_HW_SETTINGS) 0: Wrap Generated Random operations are enabled 1: Wrap Generated Random operations are disabled Mask */
#define PUF_QK_HW_SETTINGS_qk_disable_wrap_generated_random(value) (PUF_QK_HW_SETTINGS_qk_disable_wrap_generated_random_Msk & (_UINT32_(value) << PUF_QK_HW_SETTINGS_qk_disable_wrap_generated_random_Pos)) /* Assignment of value for qk_disable_wrap_generated_random in the PUF_QK_HW_SETTINGS register */
#define PUF_QK_HW_SETTINGS_qk_disable_wrap_Pos _UINT32_(9)                                          /* (PUF_QK_HW_SETTINGS) 0: Wrap operations are enabled 1: Wrap operations are disabled Position */
#define PUF_QK_HW_SETTINGS_qk_disable_wrap_Msk (_UINT32_(0x1) << PUF_QK_HW_SETTINGS_qk_disable_wrap_Pos) /* (PUF_QK_HW_SETTINGS) 0: Wrap operations are enabled 1: Wrap operations are disabled Mask */
#define PUF_QK_HW_SETTINGS_qk_disable_wrap(value) (PUF_QK_HW_SETTINGS_qk_disable_wrap_Msk & (_UINT32_(value) << PUF_QK_HW_SETTINGS_qk_disable_wrap_Pos)) /* Assignment of value for qk_disable_wrap in the PUF_QK_HW_SETTINGS register */
#define PUF_QK_HW_SETTINGS_qk_disable_generate_random_Pos _UINT32_(15)                                         /* (PUF_QK_HW_SETTINGS) 0: Generate Random operations are enabled 1: Generate Random operations are disabled Position */
#define PUF_QK_HW_SETTINGS_qk_disable_generate_random_Msk (_UINT32_(0x1) << PUF_QK_HW_SETTINGS_qk_disable_generate_random_Pos) /* (PUF_QK_HW_SETTINGS) 0: Generate Random operations are enabled 1: Generate Random operations are disabled Mask */
#define PUF_QK_HW_SETTINGS_qk_disable_generate_random(value) (PUF_QK_HW_SETTINGS_qk_disable_generate_random_Msk & (_UINT32_(value) << PUF_QK_HW_SETTINGS_qk_disable_generate_random_Pos)) /* Assignment of value for qk_disable_generate_random in the PUF_QK_HW_SETTINGS register */
#define PUF_QK_HW_SETTINGS_qk_skip_memory_test_Pos _UINT32_(29)                                         /* (PUF_QK_HW_SETTINGS) 0: Includes memory test during initialization 1: Skips memory test during initialization Position */
#define PUF_QK_HW_SETTINGS_qk_skip_memory_test_Msk (_UINT32_(0x1) << PUF_QK_HW_SETTINGS_qk_skip_memory_test_Pos) /* (PUF_QK_HW_SETTINGS) 0: Includes memory test during initialization 1: Skips memory test during initialization Mask */
#define PUF_QK_HW_SETTINGS_qk_skip_memory_test(value) (PUF_QK_HW_SETTINGS_qk_skip_memory_test_Msk & (_UINT32_(value) << PUF_QK_HW_SETTINGS_qk_skip_memory_test_Pos)) /* Assignment of value for qk_skip_memory_test in the PUF_QK_HW_SETTINGS register */
#define PUF_QK_HW_SETTINGS_qk_disable_test_memory_Pos _UINT32_(30)                                         /* (PUF_QK_HW_SETTINGS) 0: Test Memory operations are enabled 1: Test Memory operations are disabled Position */
#define PUF_QK_HW_SETTINGS_qk_disable_test_memory_Msk (_UINT32_(0x1) << PUF_QK_HW_SETTINGS_qk_disable_test_memory_Pos) /* (PUF_QK_HW_SETTINGS) 0: Test Memory operations are enabled 1: Test Memory operations are disabled Mask */
#define PUF_QK_HW_SETTINGS_qk_disable_test_memory(value) (PUF_QK_HW_SETTINGS_qk_disable_test_memory_Msk & (_UINT32_(value) << PUF_QK_HW_SETTINGS_qk_disable_test_memory_Pos)) /* Assignment of value for qk_disable_test_memory in the PUF_QK_HW_SETTINGS register */
#define PUF_QK_HW_SETTINGS_qk_disable_test_puf_Pos _UINT32_(31)                                         /* (PUF_QK_HW_SETTINGS) 0: Test PUF operations are enabled 1: Test PUF operations are disabled Position */
#define PUF_QK_HW_SETTINGS_qk_disable_test_puf_Msk (_UINT32_(0x1) << PUF_QK_HW_SETTINGS_qk_disable_test_puf_Pos) /* (PUF_QK_HW_SETTINGS) 0: Test PUF operations are enabled 1: Test PUF operations are disabled Mask */
#define PUF_QK_HW_SETTINGS_qk_disable_test_puf(value) (PUF_QK_HW_SETTINGS_qk_disable_test_puf_Msk & (_UINT32_(value) << PUF_QK_HW_SETTINGS_qk_disable_test_puf_Pos)) /* Assignment of value for qk_disable_test_puf in the PUF_QK_HW_SETTINGS register */
#define PUF_QK_HW_SETTINGS_Msk                _UINT32_(0xE00083EE)                                 /* (PUF_QK_HW_SETTINGS) Register Mask  */


/* -------- PUF_QK_HW_INFO : (PUF Offset: 0x2F4) ( R/ 32) Module Information register; The Module Information register indicates which configuration of QuiddiKey is used for this module and which options it includes. -------- */
#define PUF_QK_HW_INFO_RESETVALUE             _UINT32_(0x21400000)                                 /*  (PUF_QK_HW_INFO) Module Information register; The Module Information register indicates which configuration of QuiddiKey is used for this module and which options it includes.  Reset Value */

#define PUF_QK_HW_INFO_qk_config_sp_800_90_Pos _UINT32_(21)                                         /* (PUF_QK_HW_INFO) 1: SP 800-90 option is included 0: SP 800-90 option is not included Position */
#define PUF_QK_HW_INFO_qk_config_sp_800_90_Msk (_UINT32_(0x1) << PUF_QK_HW_INFO_qk_config_sp_800_90_Pos) /* (PUF_QK_HW_INFO) 1: SP 800-90 option is included 0: SP 800-90 option is not included Mask */
#define PUF_QK_HW_INFO_qk_config_sp_800_90(value) (PUF_QK_HW_INFO_qk_config_sp_800_90_Msk & (_UINT32_(value) << PUF_QK_HW_INFO_qk_config_sp_800_90_Pos)) /* Assignment of value for qk_config_sp_800_90 in the PUF_QK_HW_INFO register */
#define PUF_QK_HW_INFO_qk_config_bist_Pos     _UINT32_(22)                                         /* (PUF_QK_HW_INFO) 1: BIST is included 0: BIST is not included Position */
#define PUF_QK_HW_INFO_qk_config_bist_Msk     (_UINT32_(0x1) << PUF_QK_HW_INFO_qk_config_bist_Pos) /* (PUF_QK_HW_INFO) 1: BIST is included 0: BIST is not included Mask */
#define PUF_QK_HW_INFO_qk_config_bist(value)  (PUF_QK_HW_INFO_qk_config_bist_Msk & (_UINT32_(value) << PUF_QK_HW_INFO_qk_config_bist_Pos)) /* Assignment of value for qk_config_bist in the PUF_QK_HW_INFO register */
#define PUF_QK_HW_INFO_Reserved_Pos           _UINT32_(23)                                         /* (PUF_QK_HW_INFO) Safe: 1 Plus: 0 Position */
#define PUF_QK_HW_INFO_Reserved_Msk           (_UINT32_(0x1) << PUF_QK_HW_INFO_Reserved_Pos)       /* (PUF_QK_HW_INFO) Safe: 1 Plus: 0 Mask */
#define PUF_QK_HW_INFO_Reserved(value)        (PUF_QK_HW_INFO_Reserved_Msk & (_UINT32_(value) << PUF_QK_HW_INFO_Reserved_Pos)) /* Assignment of value for Reserved in the PUF_QK_HW_INFO register */
#define PUF_QK_HW_INFO_qk_config_wrap_Pos     _UINT32_(24)                                         /* (PUF_QK_HW_INFO) 1: Wrap is included 0: Wrap is not included Position */
#define PUF_QK_HW_INFO_qk_config_wrap_Msk     (_UINT32_(0x1) << PUF_QK_HW_INFO_qk_config_wrap_Pos) /* (PUF_QK_HW_INFO) 1: Wrap is included 0: Wrap is not included Mask */
#define PUF_QK_HW_INFO_qk_config_wrap(value)  (PUF_QK_HW_INFO_qk_config_wrap_Msk & (_UINT32_(value) << PUF_QK_HW_INFO_qk_config_wrap_Pos)) /* Assignment of value for qk_config_wrap in the PUF_QK_HW_INFO register */
#define PUF_QK_HW_INFO_qk_config_type_Pos     _UINT32_(28)                                         /* (PUF_QK_HW_INFO) QuiddiKey configuration Position */
#define PUF_QK_HW_INFO_qk_config_type_Msk     (_UINT32_(0xF) << PUF_QK_HW_INFO_qk_config_type_Pos) /* (PUF_QK_HW_INFO) QuiddiKey configuration Mask */
#define PUF_QK_HW_INFO_qk_config_type(value)  (PUF_QK_HW_INFO_qk_config_type_Msk & (_UINT32_(value) << PUF_QK_HW_INFO_qk_config_type_Pos)) /* Assignment of value for qk_config_type in the PUF_QK_HW_INFO register */
#define   PUF_QK_HW_INFO_qk_config_type_IID_QK_SAFE_Val _UINT32_(0x1)                                        /* (PUF_QK_HW_INFO)   */
#define   PUF_QK_HW_INFO_qk_config_type_IID_QK_PLUS_Val _UINT32_(0x2)                                        /* (PUF_QK_HW_INFO)   */
#define PUF_QK_HW_INFO_qk_config_type_IID_QK_SAFE (PUF_QK_HW_INFO_qk_config_type_IID_QK_SAFE_Val << PUF_QK_HW_INFO_qk_config_type_Pos) /* (PUF_QK_HW_INFO)  Position */
#define PUF_QK_HW_INFO_qk_config_type_IID_QK_PLUS (PUF_QK_HW_INFO_qk_config_type_IID_QK_PLUS_Val << PUF_QK_HW_INFO_qk_config_type_Pos) /* (PUF_QK_HW_INFO)  Position */
#define PUF_QK_HW_INFO_Msk                    _UINT32_(0xF1E00000)                                 /* (PUF_QK_HW_INFO) Register Mask  */

#define PUF_QK_HW_INFO_qk_config_sp_800__Pos  _UINT32_(21)                                         /* (PUF_QK_HW_INFO Position) x: SP 8xx-9x option is included x: SP 8xx-9x option is not included */
#define PUF_QK_HW_INFO_qk_config_sp_800__Msk  (_UINT32_(0x1) << PUF_QK_HW_INFO_qk_config_sp_800__Pos) /* (PUF_QK_HW_INFO Mask) qk_config_sp_800_ */
#define PUF_QK_HW_INFO_qk_config_sp_800_(value) (PUF_QK_HW_INFO_qk_config_sp_800__Msk & (_UINT32_(value) << PUF_QK_HW_INFO_qk_config_sp_800__Pos)) 

/* -------- PUF_QK_HW_ID : (PUF Offset: 0x2F8) ( R/ 32) Module Identifier register; The Module Identifier register provides the identifier of the QuiddiKey Engine netlist. -------- */
#define PUF_QK_HW_ID_RESETVALUE               _UINT32_(0x20120702)                                 /*  (PUF_QK_HW_ID) Module Identifier register; The Module Identifier register provides the identifier of the QuiddiKey Engine netlist.  Reset Value */

#define PUF_QK_HW_ID_qk_hw_id_Pos             _UINT32_(0)                                          /* (PUF_QK_HW_ID) Module identifier Position */
#define PUF_QK_HW_ID_qk_hw_id_Msk             (_UINT32_(0xFFFFFFFF) << PUF_QK_HW_ID_qk_hw_id_Pos)  /* (PUF_QK_HW_ID) Module identifier Mask */
#define PUF_QK_HW_ID_qk_hw_id(value)          (PUF_QK_HW_ID_qk_hw_id_Msk & (_UINT32_(value) << PUF_QK_HW_ID_qk_hw_id_Pos)) /* Assignment of value for qk_hw_id in the PUF_QK_HW_ID register */
#define PUF_QK_HW_ID_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (PUF_QK_HW_ID) Register Mask  */


/* -------- PUF_QK_HW_VER : (PUF Offset: 0x2FC) ( R/ 32) Module Version register; The Module Version register provides the version of this module: major.minor.patch. -------- */
#define PUF_QK_HW_VER_RESETVALUE              _UINT32_(0x30701)                                    /*  (PUF_QK_HW_VER) Module Version register; The Module Version register provides the version of this module: major.minor.patch.  Reset Value */

#define PUF_QK_HW_VER_qk_hw_rev_Pos           _UINT32_(0)                                          /* (PUF_QK_HW_VER) Module version, patch part Position */
#define PUF_QK_HW_VER_qk_hw_rev_Msk           (_UINT32_(0xFF) << PUF_QK_HW_VER_qk_hw_rev_Pos)      /* (PUF_QK_HW_VER) Module version, patch part Mask */
#define PUF_QK_HW_VER_qk_hw_rev(value)        (PUF_QK_HW_VER_qk_hw_rev_Msk & (_UINT32_(value) << PUF_QK_HW_VER_qk_hw_rev_Pos)) /* Assignment of value for qk_hw_rev in the PUF_QK_HW_VER register */
#define PUF_QK_HW_VER_qk_hw_version_minor_Pos _UINT32_(8)                                          /* (PUF_QK_HW_VER) Module version, minor part Position */
#define PUF_QK_HW_VER_qk_hw_version_minor_Msk (_UINT32_(0xFF) << PUF_QK_HW_VER_qk_hw_version_minor_Pos) /* (PUF_QK_HW_VER) Module version, minor part Mask */
#define PUF_QK_HW_VER_qk_hw_version_minor(value) (PUF_QK_HW_VER_qk_hw_version_minor_Msk & (_UINT32_(value) << PUF_QK_HW_VER_qk_hw_version_minor_Pos)) /* Assignment of value for qk_hw_version_minor in the PUF_QK_HW_VER register */
#define PUF_QK_HW_VER_qk_hw_version_major_Pos _UINT32_(16)                                         /* (PUF_QK_HW_VER) Module version, major part Position */
#define PUF_QK_HW_VER_qk_hw_version_major_Msk (_UINT32_(0xFF) << PUF_QK_HW_VER_qk_hw_version_major_Pos) /* (PUF_QK_HW_VER) Module version, major part Mask */
#define PUF_QK_HW_VER_qk_hw_version_major(value) (PUF_QK_HW_VER_qk_hw_version_major_Msk & (_UINT32_(value) << PUF_QK_HW_VER_qk_hw_version_major_Pos)) /* Assignment of value for qk_hw_version_major in the PUF_QK_HW_VER register */
#define PUF_QK_HW_VER_Msk                     _UINT32_(0x00FFFFFF)                                 /* (PUF_QK_HW_VER) Register Mask  */


/* PUF register offsets definitions */
#define PUF_CTRLA_REG_OFST             _UINT32_(0x00)      /* (PUF_CTRLA) Control Register A Offset */
#define PUF_STATUSA_REG_OFST           _UINT32_(0x38)      /* (PUF_STATUSA) Status Register A Offset */
#define PUF_DISABLE_REG_OFST           _UINT32_(0x100)     /* (PUF_DISABLE) Disable Function Control Register Offset */
#define PUF_RESTRICT0_REG_OFST         _UINT32_(0x104)     /* (PUF_RESTRICT0) Restrict User Context 0 Control Register Offset */
#define PUF_RESTRICT1_REG_OFST         _UINT32_(0x108)     /* (PUF_RESTRICT1) Restrict User Context 1 Control Register Offset */
#define PUF_CTRL_PWR_REG_OFST          _UINT32_(0x10C)     /* (PUF_CTRL_PWR) Power Control Register Offset */
#define PUF_CTRL_KEY_REG_OFST          _UINT32_(0x110)     /* (PUF_CTRL_KEY) KEY Control Register Offset */
#define PUF_QK_CR_REG_OFST             _UINT32_(0x200)     /* (PUF_QK_CR) Control register; The Control register defines which command must be executed next. When the command is accepted or rejected, the bits automatically revert to 0. Only one command bit may be written with 1 at a time, with the exception of qk_zeroize. Writing qk_zeroize with 1 takes precedence over all other commands. Offset */
#define PUF_QK_ORR_REG_OFST            _UINT32_(0x204)     /* (PUF_QK_ORR) Operation Result register; The Operation Result register provides the result code of the last operation (Initialization, Generate Random, etc.). The value in this register is only valid when qk_busy = 0. Offset */
#define PUF_QK_SR_REG_OFST             _UINT32_(0x208)     /* (PUF_QK_SR) Status register; The Status register shows the current status of QuiddiKey and indicates whether a data transfer is requested. Offset */
#define PUF_QK_AR_REG_OFST             _UINT32_(0x20C)     /* (PUF_QK_AR) Allow register; The Allow register indicates which operations are currently allowed. Offset */
#define PUF_QK_IER_REG_OFST            _UINT32_(0x210)     /* (PUF_QK_IER) Interrupt Enable register; With the Interrupt Enable register all QuiddiKey interrupts can be enabled or disabled, without changing the Interrupt Mask register. Offset */
#define PUF_QK_IMR_REG_OFST            _UINT32_(0x214)     /* (PUF_QK_IMR) Interrupt Mask register; Individual QuiddiKey interrupts can be enabled or disabled with the Interrupt Mask register. Offset */
#define PUF_QK_ISR_REG_OFST            _UINT32_(0x218)     /* (PUF_QK_ISR) Interrupt Status register; The Interrupt Status register indicates which interrupt has occurred. Multiple interrupts may occur at the same time (e.g. the busy interrupt occurs together with one of the ok and error interrupts). Writing 1 to a bit, clears the corresponding bit. Offset */
#define PUF_QK_DATA_DEST_REG_OFST      _UINT32_(0x220)     /* (PUF_QK_DATA_DEST) Data Destination register; The Data Destination register defines via which interface data is made available by QuiddiKey. Only one bit at a time may be 1. Offset */
#define PUF_QK_DATA_SRC_REG_OFST       _UINT32_(0x224)     /* (PUF_QK_DATA_SRC) Data Source register; The Data Source register defines via which interface data must be provided to QuiddiKey. Combinations of bits may be 1 at a time. Offset */
#define PUF_QK_KEY_INDEX_REG_OFST      _UINT32_(0x228)     /* (PUF_QK_KEY_INDEX) Key Index register; The Key Index register provides the index of the key that is currently output. Offset */
#define PUF_QK_DIR_REG_OFST            _UINT32_(0x2A0)     /* (PUF_QK_DIR) Data Input register; The Data Input register is used to transfer data to QuiddiKey. It can only be written when input data is requested (indicated by the qk_di_request signal). When written at any other moment, or when read, an error response is generated. Depending on the way the system is configured and connected, this may generate an exception. Offset */
#define PUF_QK_DOR_REG_OFST            _UINT32_(0x2A8)     /* (PUF_QK_DOR) Data Output register; The Data Output register is used to transfer data from QuiddiKey. It can only be read when input data is available (indicated by the qk_do_request signal). When read at any other moment, or when written, an error response is generated. Depending on the way the system is configured and connected, this may generate an exception. Offset */
#define PUF_QK_MISC_REG_OFST           _UINT32_(0x2C0)     /* (PUF_QK_MISC) Miscellaneous register; The Miscellaneous register defines miscellaneous settings for QuiddiKey. These usually need to be configured only once after power up orreset. Offset */
#define PUF_QK_IF_SR_REG_OFST          _UINT32_(0x2D0)     /* (PUF_QK_IF_SR) Interface Status register; The status of the interface can be monitored with the Interface Status register. Writing 1 to a bit, clears the corresponding bit. Offset */
#define PUF_QK_TEST_REG_OFST           _UINT32_(0x2D8)     /* (PUF_QK_TEST) Test register; With the Test register a BIST can be started. It also shows the result of the last BIST. Offset */
#define PUF_QK_PSR_REG_OFST            _UINT32_(0x2DC)     /* (PUF_QK_PSR) PUF Score register; The PUF Score register shows the value of the PUF Score that was obtained during the last Test PUF, Enroll, Start or Reconstruct operation. Offset */
#define PUF_QK_HW_RUC0_REG_OFST        _UINT32_(0x2E0)     /* (PUF_QK_HW_RUC0) Module Restrict User Context 0 register; The Module Restrict User Context 0 register shows the values of the qk_restrict_user_context_0 signal on the signal interface. Offset */
#define PUF_QK_HW_RUC1_REG_OFST        _UINT32_(0x2E4)     /* (PUF_QK_HW_RUC1) Module Restrict User Context 1 register; The Module Restrict User Context 1 register shows the values of the qk_restrict_user_context_1 signal on the signal interface. Offset */
#define PUF_QK_HW_SETTINGS_REG_OFST    _UINT32_(0x2F0)     /* (PUF_QK_HW_SETTINGS) Module Settings register; The Module Settings register shows the values of the module settings on the signal interface. Offset */
#define PUF_QK_HW_INFO_REG_OFST        _UINT32_(0x2F4)     /* (PUF_QK_HW_INFO) Module Information register; The Module Information register indicates which configuration of QuiddiKey is used for this module and which options it includes. Offset */
#define PUF_QK_HW_ID_REG_OFST          _UINT32_(0x2F8)     /* (PUF_QK_HW_ID) Module Identifier register; The Module Identifier register provides the identifier of the QuiddiKey Engine netlist. Offset */
#define PUF_QK_HW_VER_REG_OFST         _UINT32_(0x2FC)     /* (PUF_QK_HW_VER) Module Version register; The Module Version register provides the version of this module: major.minor.patch. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* PUF register API structure */
typedef struct
{  /* Physically Unclonable Function */
  __IO  uint32_t                       PUF_CTRLA;          /* Offset: 0x00 (R/W  32) Control Register A */
  __I   uint8_t                        Reserved1[0x34];
  __I   uint32_t                       PUF_STATUSA;        /* Offset: 0x38 (R/   32) Status Register A */
  __I   uint8_t                        Reserved2[0xC4];
  __IO  uint32_t                       PUF_DISABLE;        /* Offset: 0x100 (R/W  32) Disable Function Control Register */
  __IO  uint32_t                       PUF_RESTRICT0;      /* Offset: 0x104 (R/W  32) Restrict User Context 0 Control Register */
  __IO  uint32_t                       PUF_RESTRICT1;      /* Offset: 0x108 (R/W  32) Restrict User Context 1 Control Register */
  __IO  uint32_t                       PUF_CTRL_PWR;       /* Offset: 0x10C (R/W  32) Power Control Register */
  __IO  uint32_t                       PUF_CTRL_KEY;       /* Offset: 0x110 (R/W  32) KEY Control Register */
  __I   uint8_t                        Reserved3[0xEC];
  __IO  uint32_t                       PUF_QK_CR;          /* Offset: 0x200 (R/W  32) Control register; The Control register defines which command must be executed next. When the command is accepted or rejected, the bits automatically revert to 0. Only one command bit may be written with 1 at a time, with the exception of qk_zeroize. Writing qk_zeroize with 1 takes precedence over all other commands. */
  __I   uint32_t                       PUF_QK_ORR;         /* Offset: 0x204 (R/   32) Operation Result register; The Operation Result register provides the result code of the last operation (Initialization, Generate Random, etc.). The value in this register is only valid when qk_busy = 0. */
  __IO  uint32_t                       PUF_QK_SR;          /* Offset: 0x208 (R/W  32) Status register; The Status register shows the current status of QuiddiKey and indicates whether a data transfer is requested. */
  __I   uint32_t                       PUF_QK_AR;          /* Offset: 0x20C (R/   32) Allow register; The Allow register indicates which operations are currently allowed. */
  __IO  uint32_t                       PUF_QK_IER;         /* Offset: 0x210 (R/W  32) Interrupt Enable register; With the Interrupt Enable register all QuiddiKey interrupts can be enabled or disabled, without changing the Interrupt Mask register. */
  __IO  uint32_t                       PUF_QK_IMR;         /* Offset: 0x214 (R/W  32) Interrupt Mask register; Individual QuiddiKey interrupts can be enabled or disabled with the Interrupt Mask register. */
  __IO  uint32_t                       PUF_QK_ISR;         /* Offset: 0x218 (R/W  32) Interrupt Status register; The Interrupt Status register indicates which interrupt has occurred. Multiple interrupts may occur at the same time (e.g. the busy interrupt occurs together with one of the ok and error interrupts). Writing 1 to a bit, clears the corresponding bit. */
  __I   uint8_t                        Reserved4[0x04];
  __IO  uint32_t                       PUF_QK_DATA_DEST;   /* Offset: 0x220 (R/W  32) Data Destination register; The Data Destination register defines via which interface data is made available by QuiddiKey. Only one bit at a time may be 1. */
  __IO  uint32_t                       PUF_QK_DATA_SRC;    /* Offset: 0x224 (R/W  32) Data Source register; The Data Source register defines via which interface data must be provided to QuiddiKey. Combinations of bits may be 1 at a time. */
  __I   uint32_t                       PUF_QK_KEY_INDEX;   /* Offset: 0x228 (R/   32) Key Index register; The Key Index register provides the index of the key that is currently output. */
  __I   uint8_t                        Reserved5[0x74];
  __O   uint32_t                       PUF_QK_DIR;         /* Offset: 0x2A0 ( /W  32) Data Input register; The Data Input register is used to transfer data to QuiddiKey. It can only be written when input data is requested (indicated by the qk_di_request signal). When written at any other moment, or when read, an error response is generated. Depending on the way the system is configured and connected, this may generate an exception. */
  __I   uint8_t                        Reserved6[0x04];
  __I   uint32_t                       PUF_QK_DOR;         /* Offset: 0x2A8 (R/   32) Data Output register; The Data Output register is used to transfer data from QuiddiKey. It can only be read when input data is available (indicated by the qk_do_request signal). When read at any other moment, or when written, an error response is generated. Depending on the way the system is configured and connected, this may generate an exception. */
  __I   uint8_t                        Reserved7[0x14];
  __IO  uint32_t                       PUF_QK_MISC;        /* Offset: 0x2C0 (R/W  32) Miscellaneous register; The Miscellaneous register defines miscellaneous settings for QuiddiKey. These usually need to be configured only once after power up orreset. */
  __I   uint8_t                        Reserved8[0x0C];
  __IO  uint32_t                       PUF_QK_IF_SR;       /* Offset: 0x2D0 (R/W  32) Interface Status register; The status of the interface can be monitored with the Interface Status register. Writing 1 to a bit, clears the corresponding bit. */
  __I   uint8_t                        Reserved9[0x04];
  __IO  uint32_t                       PUF_QK_TEST;        /* Offset: 0x2D8 (R/W  32) Test register; With the Test register a BIST can be started. It also shows the result of the last BIST. */
  __I   uint32_t                       PUF_QK_PSR;         /* Offset: 0x2DC (R/   32) PUF Score register; The PUF Score register shows the value of the PUF Score that was obtained during the last Test PUF, Enroll, Start or Reconstruct operation. */
  __I   uint32_t                       PUF_QK_HW_RUC0;     /* Offset: 0x2E0 (R/   32) Module Restrict User Context 0 register; The Module Restrict User Context 0 register shows the values of the qk_restrict_user_context_0 signal on the signal interface. */
  __I   uint32_t                       PUF_QK_HW_RUC1;     /* Offset: 0x2E4 (R/   32) Module Restrict User Context 1 register; The Module Restrict User Context 1 register shows the values of the qk_restrict_user_context_1 signal on the signal interface. */
  __I   uint8_t                        Reserved10[0x08];
  __I   uint32_t                       PUF_QK_HW_SETTINGS; /* Offset: 0x2F0 (R/   32) Module Settings register; The Module Settings register shows the values of the module settings on the signal interface. */
  __I   uint32_t                       PUF_QK_HW_INFO;     /* Offset: 0x2F4 (R/   32) Module Information register; The Module Information register indicates which configuration of QuiddiKey is used for this module and which options it includes. */
  __I   uint32_t                       PUF_QK_HW_ID;       /* Offset: 0x2F8 (R/   32) Module Identifier register; The Module Identifier register provides the identifier of the QuiddiKey Engine netlist. */
  __I   uint32_t                       PUF_QK_HW_VER;      /* Offset: 0x2FC (R/   32) Module Version register; The Module Version register provides the version of this module: major.minor.patch. */
} puf_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMSG00_PUF_COMPONENT_H_ */
