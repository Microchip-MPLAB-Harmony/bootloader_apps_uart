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

/*  file generated from device description file (ATDF) version 2024-06-25T17:22:56Z  */
#ifndef _SAM9X7_PUF_COMPONENT_H_
#define _SAM9X7_PUF_COMPONENT_H_

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR PUF                       */
/* ************************************************************************** */

/* -------- PUF_CR : (PUF Offset: 0x00) (R/W 32) Control Register -------- */
#define PUF_CR_RESETVALUE                     _UINT32_(0x00)                                       /*  (PUF_CR) Control Register  Reset Value */

#define PUF_CR_ZEROIZE_Pos                    _UINT32_(0)                                          /* (PUF_CR) Zeroize Operation Position */
#define PUF_CR_ZEROIZE_Msk                    (_UINT32_(0x1) << PUF_CR_ZEROIZE_Pos)                /* (PUF_CR) Zeroize Operation Mask */
#define PUF_CR_ZEROIZE(value)                 (PUF_CR_ZEROIZE_Msk & (_UINT32_(value) << PUF_CR_ZEROIZE_Pos)) /* Assignment of value for ZEROIZE in the PUF_CR register */
#define PUF_CR_ENROLL_Pos                     _UINT32_(1)                                          /* (PUF_CR) Enroll Operation Position */
#define PUF_CR_ENROLL_Msk                     (_UINT32_(0x1) << PUF_CR_ENROLL_Pos)                 /* (PUF_CR) Enroll Operation Mask */
#define PUF_CR_ENROLL(value)                  (PUF_CR_ENROLL_Msk & (_UINT32_(value) << PUF_CR_ENROLL_Pos)) /* Assignment of value for ENROLL in the PUF_CR register */
#define PUF_CR_START_Pos                      _UINT32_(2)                                          /* (PUF_CR) Start Operation Position */
#define PUF_CR_START_Msk                      (_UINT32_(0x1) << PUF_CR_START_Pos)                  /* (PUF_CR) Start Operation Mask */
#define PUF_CR_START(value)                   (PUF_CR_START_Msk & (_UINT32_(value) << PUF_CR_START_Pos)) /* Assignment of value for START in the PUF_CR register */
#define PUF_CR_RECO_Pos                       _UINT32_(3)                                          /* (PUF_CR) Reconstruct Operation Position */
#define PUF_CR_RECO_Msk                       (_UINT32_(0x1) << PUF_CR_RECO_Pos)                   /* (PUF_CR) Reconstruct Operation Mask */
#define PUF_CR_RECO(value)                    (PUF_CR_RECO_Msk & (_UINT32_(value) << PUF_CR_RECO_Pos)) /* Assignment of value for RECO in the PUF_CR register */
#define PUF_CR_STOP_Pos                       _UINT32_(5)                                          /* (PUF_CR) Stop Operation Position */
#define PUF_CR_STOP_Msk                       (_UINT32_(0x1) << PUF_CR_STOP_Pos)                   /* (PUF_CR) Stop Operation Mask */
#define PUF_CR_STOP(value)                    (PUF_CR_STOP_Msk & (_UINT32_(value) << PUF_CR_STOP_Pos)) /* Assignment of value for STOP in the PUF_CR register */
#define PUF_CR_GETKEY_Pos                     _UINT32_(6)                                          /* (PUF_CR) Get Key Operation Position */
#define PUF_CR_GETKEY_Msk                     (_UINT32_(0x1) << PUF_CR_GETKEY_Pos)                 /* (PUF_CR) Get Key Operation Mask */
#define PUF_CR_GETKEY(value)                  (PUF_CR_GETKEY_Msk & (_UINT32_(value) << PUF_CR_GETKEY_Pos)) /* Assignment of value for GETKEY in the PUF_CR register */
#define PUF_CR_UNWRAP_Pos                     _UINT32_(7)                                          /* (PUF_CR) Unwrap Operation Position */
#define PUF_CR_UNWRAP_Msk                     (_UINT32_(0x1) << PUF_CR_UNWRAP_Pos)                 /* (PUF_CR) Unwrap Operation Mask */
#define PUF_CR_UNWRAP(value)                  (PUF_CR_UNWRAP_Msk & (_UINT32_(value) << PUF_CR_UNWRAP_Pos)) /* Assignment of value for UNWRAP in the PUF_CR register */
#define PUF_CR_WGENRAND_Pos                   _UINT32_(8)                                          /* (PUF_CR) Wrap Generated Random Operation Position */
#define PUF_CR_WGENRAND_Msk                   (_UINT32_(0x1) << PUF_CR_WGENRAND_Pos)               /* (PUF_CR) Wrap Generated Random Operation Mask */
#define PUF_CR_WGENRAND(value)                (PUF_CR_WGENRAND_Msk & (_UINT32_(value) << PUF_CR_WGENRAND_Pos)) /* Assignment of value for WGENRAND in the PUF_CR register */
#define PUF_CR_WRAP_Pos                       _UINT32_(9)                                          /* (PUF_CR) Wrap Operation Position */
#define PUF_CR_WRAP_Msk                       (_UINT32_(0x1) << PUF_CR_WRAP_Pos)                   /* (PUF_CR) Wrap Operation Mask */
#define PUF_CR_WRAP(value)                    (PUF_CR_WRAP_Msk & (_UINT32_(value) << PUF_CR_WRAP_Pos)) /* Assignment of value for WRAP in the PUF_CR register */
#define PUF_CR_GENRAND_Pos                    _UINT32_(15)                                         /* (PUF_CR) Generate Random Operation Position */
#define PUF_CR_GENRAND_Msk                    (_UINT32_(0x1) << PUF_CR_GENRAND_Pos)                /* (PUF_CR) Generate Random Operation Mask */
#define PUF_CR_GENRAND(value)                 (PUF_CR_GENRAND_Msk & (_UINT32_(value) << PUF_CR_GENRAND_Pos)) /* Assignment of value for GENRAND in the PUF_CR register */
#define PUF_CR_RESEED_Pos                     _UINT32_(16)                                         /* (PUF_CR) Reseed Operation Position */
#define PUF_CR_RESEED_Msk                     (_UINT32_(0x1) << PUF_CR_RESEED_Pos)                 /* (PUF_CR) Reseed Operation Mask */
#define PUF_CR_RESEED(value)                  (PUF_CR_RESEED_Msk & (_UINT32_(value) << PUF_CR_RESEED_Pos)) /* Assignment of value for RESEED in the PUF_CR register */
#define PUF_CR_TESTMEM_Pos                    _UINT32_(30)                                         /* (PUF_CR) Test Memory Operation Position */
#define PUF_CR_TESTMEM_Msk                    (_UINT32_(0x1) << PUF_CR_TESTMEM_Pos)                /* (PUF_CR) Test Memory Operation Mask */
#define PUF_CR_TESTMEM(value)                 (PUF_CR_TESTMEM_Msk & (_UINT32_(value) << PUF_CR_TESTMEM_Pos)) /* Assignment of value for TESTMEM in the PUF_CR register */
#define PUF_CR_TESTPUF_Pos                    _UINT32_(31)                                         /* (PUF_CR) Test PUF Operation Position */
#define PUF_CR_TESTPUF_Msk                    (_UINT32_(0x1) << PUF_CR_TESTPUF_Pos)                /* (PUF_CR) Test PUF Operation Mask */
#define PUF_CR_TESTPUF(value)                 (PUF_CR_TESTPUF_Msk & (_UINT32_(value) << PUF_CR_TESTPUF_Pos)) /* Assignment of value for TESTPUF in the PUF_CR register */
#define PUF_CR_Msk                            _UINT32_(0xC00183EF)                                 /* (PUF_CR) Register Mask  */


/* -------- PUF_ORR : (PUF Offset: 0x04) ( R/ 32) Operation Result Register -------- */
#define PUF_ORR_RESETVALUE                    _UINT32_(0x00)                                       /*  (PUF_ORR) Operation Result Register  Reset Value */

#define PUF_ORR_RCODE_Pos                     _UINT32_(0)                                          /* (PUF_ORR) Last Operation Result Code Position */
#define PUF_ORR_RCODE_Msk                     (_UINT32_(0xFF) << PUF_ORR_RCODE_Pos)                /* (PUF_ORR) Last Operation Result Code Mask */
#define PUF_ORR_RCODE(value)                  (PUF_ORR_RCODE_Msk & (_UINT32_(value) << PUF_ORR_RCODE_Pos)) /* Assignment of value for RCODE in the PUF_ORR register */
#define   PUF_ORR_RCODE_IID_PUF_OK_Val        _UINT32_(0x0)                                        /* (PUF_ORR) The last operation was successful or an operation is in progress.  */
#define   PUF_ORR_RCODE_IID_PUF_ERR_PRODUCT_Val _UINT32_(0xF0)                                       /* (PUF_ORR) The provided activation code is not correct.  */
#define   PUF_ORR_RCODE_IID_PUF_ERR_PRODUCT_PH2_Val _UINT32_(0xF1)                                       /* (PUF_ORR) The activation code in the second phase is not correct.  */
#define   PUF_ORR_RCODE_IID_PUF_ERR_TRANSFER_Val _UINT32_(0xF2)                                       /* (PUF_ORR) The provided activation code is corrupted.  */
#define   PUF_ORR_RCODE_IID_PUF_ERR_TRANSFER_PH2_Val _UINT32_(0xF3)                                       /* (PUF_ORR) The activation code in the second phase is corrupted.  */
#define   PUF_ORR_RCODE_IID_PUF_ERR_AUTH_Val  _UINT32_(0xF4)                                       /* (PUF_ORR) Authentication of the provided activation code failed.  */
#define   PUF_ORR_RCODE_IID_PUF_ERR_AUTH_PH2_Val _UINT32_(0xF5)                                       /* (PUF_ORR) Authentication of the provided activation code failed in the second phase.  */
#define   PUF_ORR_RCODE_IID_PUF_ERR_PUF_QUALITY_Val _UINT32_(0xF6)                                       /* (PUF_ORR) Dedicated Embedded Static RAM PUF quality verification fails.  */
#define   PUF_ORR_RCODE_IID_PUF_ERR_CONTEXT_Val _UINT32_(0xF7)                                       /* (PUF_ORR) An incorrect or unsupported context is provided.  */
#define   PUF_ORR_RCODE_IID_PUF_ERR_DESTINATION_Val _UINT32_(0xF8)                                       /* (PUF_ORR) A data destination that was set is not allowed according to other settings and the current PUF state.  */
#define   PUF_ORR_RCODE_IID_PUF_FAILURE_DRBG2_ENTROPY_Val _UINT32_(0xFB)                                       /* (PUF_ORR) DRBG2 Reseed or Instantiation failed (DRBG1 cannot provide entropy).  */
#define   PUF_ORR_RCODE_IID_PUF_FAILURE_DRBG1_ENTROPY_Val _UINT32_(0xFC)                                       /* (PUF_ORR) The entropy test for DRBG1 failed.  */
#define   PUF_ORR_RCODE_IID_PUF_FAILURE_DRBG_HEALTH_Val _UINT32_(0xFD)                                       /* (PUF_ORR) One or more of the DRBG health tests failed.  */
#define   PUF_ORR_RCODE_IID_PUF_FAILURE_SETTINGS_Val _UINT32_(0xFE)                                       /* (PUF_ORR) Initialization cannot finish due to illegal values in PUF_HW_SETTINGS.  */
#define   PUF_ORR_RCODE_IID_PUF_FAILURE_SRAM_Val _UINT32_(0xFF)                                       /* (PUF_ORR) PUF SRAM access has failed.  */
#define PUF_ORR_RCODE_IID_PUF_OK              (PUF_ORR_RCODE_IID_PUF_OK_Val << PUF_ORR_RCODE_Pos)  /* (PUF_ORR) The last operation was successful or an operation is in progress. Position */
#define PUF_ORR_RCODE_IID_PUF_ERR_PRODUCT     (PUF_ORR_RCODE_IID_PUF_ERR_PRODUCT_Val << PUF_ORR_RCODE_Pos) /* (PUF_ORR) The provided activation code is not correct. Position */
#define PUF_ORR_RCODE_IID_PUF_ERR_PRODUCT_PH2 (PUF_ORR_RCODE_IID_PUF_ERR_PRODUCT_PH2_Val << PUF_ORR_RCODE_Pos) /* (PUF_ORR) The activation code in the second phase is not correct. Position */
#define PUF_ORR_RCODE_IID_PUF_ERR_TRANSFER    (PUF_ORR_RCODE_IID_PUF_ERR_TRANSFER_Val << PUF_ORR_RCODE_Pos) /* (PUF_ORR) The provided activation code is corrupted. Position */
#define PUF_ORR_RCODE_IID_PUF_ERR_TRANSFER_PH2 (PUF_ORR_RCODE_IID_PUF_ERR_TRANSFER_PH2_Val << PUF_ORR_RCODE_Pos) /* (PUF_ORR) The activation code in the second phase is corrupted. Position */
#define PUF_ORR_RCODE_IID_PUF_ERR_AUTH        (PUF_ORR_RCODE_IID_PUF_ERR_AUTH_Val << PUF_ORR_RCODE_Pos) /* (PUF_ORR) Authentication of the provided activation code failed. Position */
#define PUF_ORR_RCODE_IID_PUF_ERR_AUTH_PH2    (PUF_ORR_RCODE_IID_PUF_ERR_AUTH_PH2_Val << PUF_ORR_RCODE_Pos) /* (PUF_ORR) Authentication of the provided activation code failed in the second phase. Position */
#define PUF_ORR_RCODE_IID_PUF_ERR_PUF_QUALITY (PUF_ORR_RCODE_IID_PUF_ERR_PUF_QUALITY_Val << PUF_ORR_RCODE_Pos) /* (PUF_ORR) Dedicated Embedded Static RAM PUF quality verification fails. Position */
#define PUF_ORR_RCODE_IID_PUF_ERR_CONTEXT     (PUF_ORR_RCODE_IID_PUF_ERR_CONTEXT_Val << PUF_ORR_RCODE_Pos) /* (PUF_ORR) An incorrect or unsupported context is provided. Position */
#define PUF_ORR_RCODE_IID_PUF_ERR_DESTINATION (PUF_ORR_RCODE_IID_PUF_ERR_DESTINATION_Val << PUF_ORR_RCODE_Pos) /* (PUF_ORR) A data destination that was set is not allowed according to other settings and the current PUF state. Position */
#define PUF_ORR_RCODE_IID_PUF_FAILURE_DRBG2_ENTROPY (PUF_ORR_RCODE_IID_PUF_FAILURE_DRBG2_ENTROPY_Val << PUF_ORR_RCODE_Pos) /* (PUF_ORR) DRBG2 Reseed or Instantiation failed (DRBG1 cannot provide entropy). Position */
#define PUF_ORR_RCODE_IID_PUF_FAILURE_DRBG1_ENTROPY (PUF_ORR_RCODE_IID_PUF_FAILURE_DRBG1_ENTROPY_Val << PUF_ORR_RCODE_Pos) /* (PUF_ORR) The entropy test for DRBG1 failed. Position */
#define PUF_ORR_RCODE_IID_PUF_FAILURE_DRBG_HEALTH (PUF_ORR_RCODE_IID_PUF_FAILURE_DRBG_HEALTH_Val << PUF_ORR_RCODE_Pos) /* (PUF_ORR) One or more of the DRBG health tests failed. Position */
#define PUF_ORR_RCODE_IID_PUF_FAILURE_SETTINGS (PUF_ORR_RCODE_IID_PUF_FAILURE_SETTINGS_Val << PUF_ORR_RCODE_Pos) /* (PUF_ORR) Initialization cannot finish due to illegal values in PUF_HW_SETTINGS. Position */
#define PUF_ORR_RCODE_IID_PUF_FAILURE_SRAM    (PUF_ORR_RCODE_IID_PUF_FAILURE_SRAM_Val << PUF_ORR_RCODE_Pos) /* (PUF_ORR) PUF SRAM access has failed. Position */
#define PUF_ORR_RESEEDW_Pos                   _UINT32_(14)                                         /* (PUF_ORR) Reseed Warning Position */
#define PUF_ORR_RESEEDW_Msk                   (_UINT32_(0x1) << PUF_ORR_RESEEDW_Pos)               /* (PUF_ORR) Reseed Warning Mask */
#define PUF_ORR_RESEEDW(value)                (PUF_ORR_RESEEDW_Msk & (_UINT32_(value) << PUF_ORR_RESEEDW_Pos)) /* Assignment of value for RESEEDW in the PUF_ORR register */
#define   PUF_ORR_RESEEDW_NO_ACTION_Val       _UINT32_(0x0)                                        /* (PUF_ORR) No action required.  */
#define   PUF_ORR_RESEEDW_RECOMMENDED_ACTION_Val _UINT32_(0x1)                                        /* (PUF_ORR) The DRBG reseed counter is close to its limit, it is recommended to reseed at the first suitable moment. This bit is the same as in PUF_SR.  */
#define PUF_ORR_RESEEDW_NO_ACTION             (PUF_ORR_RESEEDW_NO_ACTION_Val << PUF_ORR_RESEEDW_Pos) /* (PUF_ORR) No action required. Position */
#define PUF_ORR_RESEEDW_RECOMMENDED_ACTION    (PUF_ORR_RESEEDW_RECOMMENDED_ACTION_Val << PUF_ORR_RESEEDW_Pos) /* (PUF_ORR) The DRBG reseed counter is close to its limit, it is recommended to reseed at the first suitable moment. This bit is the same as in PUF_SR. Position */
#define PUF_ORR_RESEEDR_Pos                   _UINT32_(15)                                         /* (PUF_ORR) Reseed Required Position */
#define PUF_ORR_RESEEDR_Msk                   (_UINT32_(0x1) << PUF_ORR_RESEEDR_Pos)               /* (PUF_ORR) Reseed Required Mask */
#define PUF_ORR_RESEEDR(value)                (PUF_ORR_RESEEDR_Msk & (_UINT32_(value) << PUF_ORR_RESEEDR_Pos)) /* Assignment of value for RESEEDR in the PUF_ORR register */
#define   PUF_ORR_RESEEDR_NO_ACTION_Val       _UINT32_(0x0)                                        /* (PUF_ORR) No action required.  */
#define   PUF_ORR_RESEEDR_REQUIRED_ACTION_Val _UINT32_(0x1)                                        /* (PUF_ORR) The maximum number of DRBG2 requests has been done. A reseed must be performed before other operations can be done. This bit is the same as in PUF_SR.  */
#define PUF_ORR_RESEEDR_NO_ACTION             (PUF_ORR_RESEEDR_NO_ACTION_Val << PUF_ORR_RESEEDR_Pos) /* (PUF_ORR) No action required. Position */
#define PUF_ORR_RESEEDR_REQUIRED_ACTION       (PUF_ORR_RESEEDR_REQUIRED_ACTION_Val << PUF_ORR_RESEEDR_Pos) /* (PUF_ORR) The maximum number of DRBG2 requests has been done. A reseed must be performed before other operations can be done. This bit is the same as in PUF_SR. Position */
#define PUF_ORR_LOPNUM_Pos                    _UINT32_(24)                                         /* (PUF_ORR) Last Operation Number Position */
#define PUF_ORR_LOPNUM_Msk                    (_UINT32_(0xFF) << PUF_ORR_LOPNUM_Pos)               /* (PUF_ORR) Last Operation Number Mask */
#define PUF_ORR_LOPNUM(value)                 (PUF_ORR_LOPNUM_Msk & (_UINT32_(value) << PUF_ORR_LOPNUM_Pos)) /* Assignment of value for LOPNUM in the PUF_ORR register */
#define   PUF_ORR_LOPNUM_IID_PUF_LO_PROGRESS_Val _UINT32_(0x0)                                        /* (PUF_ORR) An operation is in progress.  */
#define   PUF_ORR_LOPNUM_IID_PUF_LO_ENROLL_Val _UINT32_(0x1)                                        /* (PUF_ORR) The last operation was ENROLL.  */
#define   PUF_ORR_LOPNUM_IID_PUF_LO_START_Val _UINT32_(0x2)                                        /* (PUF_ORR) The last operation was START.  */
#define   PUF_ORR_LOPNUM_IID_PUF_LO_RECONSTRUCT_Val _UINT32_(0x3)                                        /* (PUF_ORR) The last operation was RECONSTRUCT.  */
#define   PUF_ORR_LOPNUM_IID_PUF_LO_STOP_Val  _UINT32_(0x5)                                        /* (PUF_ORR) The last operation was STOP.  */
#define   PUF_ORR_LOPNUM_IID_PUF_LO_GET_KEY_Val _UINT32_(0x6)                                        /* (PUF_ORR) The last operation was GET KEY.  */
#define   PUF_ORR_LOPNUM_IID_PUF_LO_UNWRAP_Val _UINT32_(0x7)                                        /* (PUF_ORR) The last operation was UNWRAP.  */
#define   PUF_ORR_LOPNUM_IID_PUF_LO_WRAP_GEN_RND_Val _UINT32_(0x8)                                        /* (PUF_ORR) The last operation was WRAP GENERATED RANDOM.  */
#define   PUF_ORR_LOPNUM_IID_PUF_LO_WRAP_Val  _UINT32_(0x9)                                        /* (PUF_ORR) The last operation was WRAP.  */
#define   PUF_ORR_LOPNUM_IID_PUF_LO_GEN_RND_Val _UINT32_(0xF)                                        /* (PUF_ORR) The last operation was GENERATED RANDOM.  */
#define   PUF_ORR_LOPNUM_IID_PUF_LO_RESEED_Val _UINT32_(0x10)                                       /* (PUF_ORR) The last operation was RESEED.  */
#define   PUF_ORR_LOPNUM_IID_PUF_LO_TEST_MEMORY_Val _UINT32_(0x1E)                                       /* (PUF_ORR) The last operation was TESTMEMORY.  */
#define   PUF_ORR_LOPNUM_IID_PUF_LO_TEST_PUF_Val _UINT32_(0x1F)                                       /* (PUF_ORR) The last operation was TESTPUF.  */
#define   PUF_ORR_LOPNUM_IID_PUF_LO_INITIALIZATION_Val _UINT32_(0x20)                                       /* (PUF_ORR) The last operation was INITIALIZATION.  */
#define   PUF_ORR_LOPNUM_IID_PUF_LO_ZEROIZE_Val _UINT32_(0x2F)                                       /* (PUF_ORR) The last operation was ZEROIZE.  */
#define PUF_ORR_LOPNUM_IID_PUF_LO_PROGRESS    (PUF_ORR_LOPNUM_IID_PUF_LO_PROGRESS_Val << PUF_ORR_LOPNUM_Pos) /* (PUF_ORR) An operation is in progress. Position */
#define PUF_ORR_LOPNUM_IID_PUF_LO_ENROLL      (PUF_ORR_LOPNUM_IID_PUF_LO_ENROLL_Val << PUF_ORR_LOPNUM_Pos) /* (PUF_ORR) The last operation was ENROLL. Position */
#define PUF_ORR_LOPNUM_IID_PUF_LO_START       (PUF_ORR_LOPNUM_IID_PUF_LO_START_Val << PUF_ORR_LOPNUM_Pos) /* (PUF_ORR) The last operation was START. Position */
#define PUF_ORR_LOPNUM_IID_PUF_LO_RECONSTRUCT (PUF_ORR_LOPNUM_IID_PUF_LO_RECONSTRUCT_Val << PUF_ORR_LOPNUM_Pos) /* (PUF_ORR) The last operation was RECONSTRUCT. Position */
#define PUF_ORR_LOPNUM_IID_PUF_LO_STOP        (PUF_ORR_LOPNUM_IID_PUF_LO_STOP_Val << PUF_ORR_LOPNUM_Pos) /* (PUF_ORR) The last operation was STOP. Position */
#define PUF_ORR_LOPNUM_IID_PUF_LO_GET_KEY     (PUF_ORR_LOPNUM_IID_PUF_LO_GET_KEY_Val << PUF_ORR_LOPNUM_Pos) /* (PUF_ORR) The last operation was GET KEY. Position */
#define PUF_ORR_LOPNUM_IID_PUF_LO_UNWRAP      (PUF_ORR_LOPNUM_IID_PUF_LO_UNWRAP_Val << PUF_ORR_LOPNUM_Pos) /* (PUF_ORR) The last operation was UNWRAP. Position */
#define PUF_ORR_LOPNUM_IID_PUF_LO_WRAP_GEN_RND (PUF_ORR_LOPNUM_IID_PUF_LO_WRAP_GEN_RND_Val << PUF_ORR_LOPNUM_Pos) /* (PUF_ORR) The last operation was WRAP GENERATED RANDOM. Position */
#define PUF_ORR_LOPNUM_IID_PUF_LO_WRAP        (PUF_ORR_LOPNUM_IID_PUF_LO_WRAP_Val << PUF_ORR_LOPNUM_Pos) /* (PUF_ORR) The last operation was WRAP. Position */
#define PUF_ORR_LOPNUM_IID_PUF_LO_GEN_RND     (PUF_ORR_LOPNUM_IID_PUF_LO_GEN_RND_Val << PUF_ORR_LOPNUM_Pos) /* (PUF_ORR) The last operation was GENERATED RANDOM. Position */
#define PUF_ORR_LOPNUM_IID_PUF_LO_RESEED      (PUF_ORR_LOPNUM_IID_PUF_LO_RESEED_Val << PUF_ORR_LOPNUM_Pos) /* (PUF_ORR) The last operation was RESEED. Position */
#define PUF_ORR_LOPNUM_IID_PUF_LO_TEST_MEMORY (PUF_ORR_LOPNUM_IID_PUF_LO_TEST_MEMORY_Val << PUF_ORR_LOPNUM_Pos) /* (PUF_ORR) The last operation was TESTMEMORY. Position */
#define PUF_ORR_LOPNUM_IID_PUF_LO_TEST_PUF    (PUF_ORR_LOPNUM_IID_PUF_LO_TEST_PUF_Val << PUF_ORR_LOPNUM_Pos) /* (PUF_ORR) The last operation was TESTPUF. Position */
#define PUF_ORR_LOPNUM_IID_PUF_LO_INITIALIZATION (PUF_ORR_LOPNUM_IID_PUF_LO_INITIALIZATION_Val << PUF_ORR_LOPNUM_Pos) /* (PUF_ORR) The last operation was INITIALIZATION. Position */
#define PUF_ORR_LOPNUM_IID_PUF_LO_ZEROIZE     (PUF_ORR_LOPNUM_IID_PUF_LO_ZEROIZE_Val << PUF_ORR_LOPNUM_Pos) /* (PUF_ORR) The last operation was ZEROIZE. Position */
#define PUF_ORR_Msk                           _UINT32_(0xFF00C0FF)                                 /* (PUF_ORR) Register Mask  */


/* -------- PUF_SR : (PUF Offset: 0x08) (R/W 32) Status Register -------- */
#define PUF_SR_RESETVALUE                     _UINT32_(0x01)                                       /*  (PUF_SR) Status Register  Reset Value */

#define PUF_SR_BUSY_Pos                       _UINT32_(0)                                          /* (PUF_SR) Operation in Progress Position */
#define PUF_SR_BUSY_Msk                       (_UINT32_(0x1) << PUF_SR_BUSY_Pos)                   /* (PUF_SR) Operation in Progress Mask */
#define PUF_SR_BUSY(value)                    (PUF_SR_BUSY_Msk & (_UINT32_(value) << PUF_SR_BUSY_Pos)) /* Assignment of value for BUSY in the PUF_SR register */
#define   PUF_SR_BUSY_0_Val                   _UINT32_(0x0)                                        /* (PUF_SR) No operation is in progress. A new operation can be initiated.  */
#define   PUF_SR_BUSY_1_Val                   _UINT32_(0x1)                                        /* (PUF_SR) An operation is in progress. No new operation must be launched.  */
#define PUF_SR_BUSY_0                         (PUF_SR_BUSY_0_Val << PUF_SR_BUSY_Pos)               /* (PUF_SR) No operation is in progress. A new operation can be initiated. Position */
#define PUF_SR_BUSY_1                         (PUF_SR_BUSY_1_Val << PUF_SR_BUSY_Pos)               /* (PUF_SR) An operation is in progress. No new operation must be launched. Position */
#define PUF_SR_OK_Pos                         _UINT32_(1)                                          /* (PUF_SR) Last Operation Successfully Achieved Position */
#define PUF_SR_OK_Msk                         (_UINT32_(0x1) << PUF_SR_OK_Pos)                     /* (PUF_SR) Last Operation Successfully Achieved Mask */
#define PUF_SR_OK(value)                      (PUF_SR_OK_Msk & (_UINT32_(value) << PUF_SR_OK_Pos)) /* Assignment of value for OK in the PUF_SR register */
#define   PUF_SR_OK_0_Val                     _UINT32_(0x0)                                        /* (PUF_SR) ERROR bit must be checked.  */
#define   PUF_SR_OK_1_Val                     _UINT32_(0x1)                                        /* (PUF_SR) The last operation completed successfully.  */
#define PUF_SR_OK_0                           (PUF_SR_OK_0_Val << PUF_SR_OK_Pos)                   /* (PUF_SR) ERROR bit must be checked. Position */
#define PUF_SR_OK_1                           (PUF_SR_OK_1_Val << PUF_SR_OK_Pos)                   /* (PUF_SR) The last operation completed successfully. Position */
#define PUF_SR_ERROR_Pos                      _UINT32_(2)                                          /* (PUF_SR) Last Operation Failed Position */
#define PUF_SR_ERROR_Msk                      (_UINT32_(0x1) << PUF_SR_ERROR_Pos)                  /* (PUF_SR) Last Operation Failed Mask */
#define PUF_SR_ERROR(value)                   (PUF_SR_ERROR_Msk & (_UINT32_(value) << PUF_SR_ERROR_Pos)) /* Assignment of value for ERROR in the PUF_SR register */
#define   PUF_SR_ERROR_0_Val                  _UINT32_(0x0)                                        /* (PUF_SR) The last operation completed successfully.  */
#define   PUF_SR_ERROR_1_Val                  _UINT32_(0x1)                                        /* (PUF_SR) The last operation failed.  */
#define PUF_SR_ERROR_0                        (PUF_SR_ERROR_0_Val << PUF_SR_ERROR_Pos)             /* (PUF_SR) The last operation completed successfully. Position */
#define PUF_SR_ERROR_1                        (PUF_SR_ERROR_1_Val << PUF_SR_ERROR_Pos)             /* (PUF_SR) The last operation failed. Position */
#define PUF_SR_ZEROIZED_Pos                   _UINT32_(3)                                          /* (PUF_SR) PUF Zeroization in Progress Position */
#define PUF_SR_ZEROIZED_Msk                   (_UINT32_(0x1) << PUF_SR_ZEROIZED_Pos)               /* (PUF_SR) PUF Zeroization in Progress Mask */
#define PUF_SR_ZEROIZED(value)                (PUF_SR_ZEROIZED_Msk & (_UINT32_(value) << PUF_SR_ZEROIZED_Pos)) /* Assignment of value for ZEROIZED in the PUF_SR register */
#define   PUF_SR_ZEROIZED_0_Val               _UINT32_(0x0)                                        /* (PUF_SR) No zeroization is in progress.  */
#define   PUF_SR_ZEROIZED_1_Val               _UINT32_(0x1)                                        /* (PUF_SR) A zeroization action is in progress or the PUF is in Locked state.  */
#define PUF_SR_ZEROIZED_0                     (PUF_SR_ZEROIZED_0_Val << PUF_SR_ZEROIZED_Pos)       /* (PUF_SR) No zeroization is in progress. Position */
#define PUF_SR_ZEROIZED_1                     (PUF_SR_ZEROIZED_1_Val << PUF_SR_ZEROIZED_Pos)       /* (PUF_SR) A zeroization action is in progress or the PUF is in Locked state. Position */
#define PUF_SR_REJECTED_Pos                   _UINT32_(4)                                          /* (PUF_SR) Last Command Rejection Status (cleared by writing a 1) Position */
#define PUF_SR_REJECTED_Msk                   (_UINT32_(0x1) << PUF_SR_REJECTED_Pos)               /* (PUF_SR) Last Command Rejection Status (cleared by writing a 1) Mask */
#define PUF_SR_REJECTED(value)                (PUF_SR_REJECTED_Msk & (_UINT32_(value) << PUF_SR_REJECTED_Pos)) /* Assignment of value for REJECTED in the PUF_SR register */
#define   PUF_SR_REJECTED_0_Val               _UINT32_(0x0)                                        /* (PUF_SR) No rejection event occurred since the last clearing access.  */
#define   PUF_SR_REJECTED_1_Val               _UINT32_(0x1)                                        /* (PUF_SR) A rejection event occurred when the last command has been launched. Cleared by writing a 1.  */
#define PUF_SR_REJECTED_0                     (PUF_SR_REJECTED_0_Val << PUF_SR_REJECTED_Pos)       /* (PUF_SR) No rejection event occurred since the last clearing access. Position */
#define PUF_SR_REJECTED_1                     (PUF_SR_REJECTED_1_Val << PUF_SR_REJECTED_Pos)       /* (PUF_SR) A rejection event occurred when the last command has been launched. Cleared by writing a 1. Position */
#define PUF_SR_DIREQ_Pos                      _UINT32_(5)                                          /* (PUF_SR) Data In Request Status Position */
#define PUF_SR_DIREQ_Msk                      (_UINT32_(0x1) << PUF_SR_DIREQ_Pos)                  /* (PUF_SR) Data In Request Status Mask */
#define PUF_SR_DIREQ(value)                   (PUF_SR_DIREQ_Msk & (_UINT32_(value) << PUF_SR_DIREQ_Pos)) /* Assignment of value for DIREQ in the PUF_SR register */
#define   PUF_SR_DIREQ_0_Val                  _UINT32_(0x0)                                        /* (PUF_SR) No data-in transfer is in progress.  */
#define   PUF_SR_DIREQ_1_Val                  _UINT32_(0x1)                                        /* (PUF_SR) A data-in transfer is in progress following a request via PUF_DIR.  */
#define PUF_SR_DIREQ_0                        (PUF_SR_DIREQ_0_Val << PUF_SR_DIREQ_Pos)             /* (PUF_SR) No data-in transfer is in progress. Position */
#define PUF_SR_DIREQ_1                        (PUF_SR_DIREQ_1_Val << PUF_SR_DIREQ_Pos)             /* (PUF_SR) A data-in transfer is in progress following a request via PUF_DIR. Position */
#define PUF_SR_DOREQ_Pos                      _UINT32_(6)                                          /* (PUF_SR) Data Out Request Status Position */
#define PUF_SR_DOREQ_Msk                      (_UINT32_(0x1) << PUF_SR_DOREQ_Pos)                  /* (PUF_SR) Data Out Request Status Mask */
#define PUF_SR_DOREQ(value)                   (PUF_SR_DOREQ_Msk & (_UINT32_(value) << PUF_SR_DOREQ_Pos)) /* Assignment of value for DOREQ in the PUF_SR register */
#define   PUF_SR_DOREQ_0_Val                  _UINT32_(0x0)                                        /* (PUF_SR) No data-out transfer is in progress.  */
#define   PUF_SR_DOREQ_1_Val                  _UINT32_(0x1)                                        /* (PUF_SR) A data-out transfer is in progress following a request via PUF_DOR.  */
#define PUF_SR_DOREQ_0                        (PUF_SR_DOREQ_0_Val << PUF_SR_DOREQ_Pos)             /* (PUF_SR) No data-out transfer is in progress. Position */
#define PUF_SR_DOREQ_1                        (PUF_SR_DOREQ_1_Val << PUF_SR_DOREQ_Pos)             /* (PUF_SR) A data-out transfer is in progress following a request via PUF_DOR. Position */
#define PUF_SR_RESEEDW_Pos                    _UINT32_(29)                                         /* (PUF_SR) Reseed Warning Position */
#define PUF_SR_RESEEDW_Msk                    (_UINT32_(0x1) << PUF_SR_RESEEDW_Pos)                /* (PUF_SR) Reseed Warning Mask */
#define PUF_SR_RESEEDW(value)                 (PUF_SR_RESEEDW_Msk & (_UINT32_(value) << PUF_SR_RESEEDW_Pos)) /* Assignment of value for RESEEDW in the PUF_SR register */
#define   PUF_SR_RESEEDW_NO_ACTION_Val        _UINT32_(0x0)                                        /* (PUF_SR) No action required.  */
#define   PUF_SR_RESEEDW_RECOMMENDED_ACTION_Val _UINT32_(0x1)                                        /* (PUF_SR) The reseed counter of the DRBG is close to its limit, it is recommended to reseed at the first suitable moment. This bit is the same as in PUF_ORR.  */
#define PUF_SR_RESEEDW_NO_ACTION              (PUF_SR_RESEEDW_NO_ACTION_Val << PUF_SR_RESEEDW_Pos) /* (PUF_SR) No action required. Position */
#define PUF_SR_RESEEDW_RECOMMENDED_ACTION     (PUF_SR_RESEEDW_RECOMMENDED_ACTION_Val << PUF_SR_RESEEDW_Pos) /* (PUF_SR) The reseed counter of the DRBG is close to its limit, it is recommended to reseed at the first suitable moment. This bit is the same as in PUF_ORR. Position */
#define PUF_SR_RESEEDR_Pos                    _UINT32_(30)                                         /* (PUF_SR) Reseed Required Position */
#define PUF_SR_RESEEDR_Msk                    (_UINT32_(0x1) << PUF_SR_RESEEDR_Pos)                /* (PUF_SR) Reseed Required Mask */
#define PUF_SR_RESEEDR(value)                 (PUF_SR_RESEEDR_Msk & (_UINT32_(value) << PUF_SR_RESEEDR_Pos)) /* Assignment of value for RESEEDR in the PUF_SR register */
#define   PUF_SR_RESEEDR_NO_ACTION_Val        _UINT32_(0x0)                                        /* (PUF_SR) No action required.  */
#define   PUF_SR_RESEEDR_REQUIRED_ACTION_Val  _UINT32_(0x1)                                        /* (PUF_SR) The maximum number of DRBG2 requests has been done. A reseed must be performed before other operations can be done. This bit is the same as in PUF_ORR.  */
#define PUF_SR_RESEEDR_NO_ACTION              (PUF_SR_RESEEDR_NO_ACTION_Val << PUF_SR_RESEEDR_Pos) /* (PUF_SR) No action required. Position */
#define PUF_SR_RESEEDR_REQUIRED_ACTION        (PUF_SR_RESEEDR_REQUIRED_ACTION_Val << PUF_SR_RESEEDR_Pos) /* (PUF_SR) The maximum number of DRBG2 requests has been done. A reseed must be performed before other operations can be done. This bit is the same as in PUF_ORR. Position */
#define PUF_SR_Msk                            _UINT32_(0x6000007F)                                 /* (PUF_SR) Register Mask  */


/* -------- PUF_AR : (PUF Offset: 0x0C) ( R/ 32) Allow Register -------- */
#define PUF_AR_RESETVALUE                     _UINT32_(0x00)                                       /*  (PUF_AR) Allow Register  Reset Value */

#define PUF_AR_ENROLL_Pos                     _UINT32_(1)                                          /* (PUF_AR) Enroll Operation Position */
#define PUF_AR_ENROLL_Msk                     (_UINT32_(0x1) << PUF_AR_ENROLL_Pos)                 /* (PUF_AR) Enroll Operation Mask */
#define PUF_AR_ENROLL(value)                  (PUF_AR_ENROLL_Msk & (_UINT32_(value) << PUF_AR_ENROLL_Pos)) /* Assignment of value for ENROLL in the PUF_AR register */
#define PUF_AR_START_Pos                      _UINT32_(2)                                          /* (PUF_AR) Start Operation Position */
#define PUF_AR_START_Msk                      (_UINT32_(0x1) << PUF_AR_START_Pos)                  /* (PUF_AR) Start Operation Mask */
#define PUF_AR_START(value)                   (PUF_AR_START_Msk & (_UINT32_(value) << PUF_AR_START_Pos)) /* Assignment of value for START in the PUF_AR register */
#define PUF_AR_RECO_Pos                       _UINT32_(3)                                          /* (PUF_AR) Reconstruct Operation Position */
#define PUF_AR_RECO_Msk                       (_UINT32_(0x1) << PUF_AR_RECO_Pos)                   /* (PUF_AR) Reconstruct Operation Mask */
#define PUF_AR_RECO(value)                    (PUF_AR_RECO_Msk & (_UINT32_(value) << PUF_AR_RECO_Pos)) /* Assignment of value for RECO in the PUF_AR register */
#define PUF_AR_STOP_Pos                       _UINT32_(5)                                          /* (PUF_AR) Stop Operation Position */
#define PUF_AR_STOP_Msk                       (_UINT32_(0x1) << PUF_AR_STOP_Pos)                   /* (PUF_AR) Stop Operation Mask */
#define PUF_AR_STOP(value)                    (PUF_AR_STOP_Msk & (_UINT32_(value) << PUF_AR_STOP_Pos)) /* Assignment of value for STOP in the PUF_AR register */
#define PUF_AR_GETKEY_Pos                     _UINT32_(6)                                          /* (PUF_AR) Get Key Operation Position */
#define PUF_AR_GETKEY_Msk                     (_UINT32_(0x1) << PUF_AR_GETKEY_Pos)                 /* (PUF_AR) Get Key Operation Mask */
#define PUF_AR_GETKEY(value)                  (PUF_AR_GETKEY_Msk & (_UINT32_(value) << PUF_AR_GETKEY_Pos)) /* Assignment of value for GETKEY in the PUF_AR register */
#define PUF_AR_UNWRAP_Pos                     _UINT32_(7)                                          /* (PUF_AR) Unwrap Operation Position */
#define PUF_AR_UNWRAP_Msk                     (_UINT32_(0x1) << PUF_AR_UNWRAP_Pos)                 /* (PUF_AR) Unwrap Operation Mask */
#define PUF_AR_UNWRAP(value)                  (PUF_AR_UNWRAP_Msk & (_UINT32_(value) << PUF_AR_UNWRAP_Pos)) /* Assignment of value for UNWRAP in the PUF_AR register */
#define PUF_AR_WGENRAND_Pos                   _UINT32_(8)                                          /* (PUF_AR) Wrap Generated Random Operation Position */
#define PUF_AR_WGENRAND_Msk                   (_UINT32_(0x1) << PUF_AR_WGENRAND_Pos)               /* (PUF_AR) Wrap Generated Random Operation Mask */
#define PUF_AR_WGENRAND(value)                (PUF_AR_WGENRAND_Msk & (_UINT32_(value) << PUF_AR_WGENRAND_Pos)) /* Assignment of value for WGENRAND in the PUF_AR register */
#define PUF_AR_WRAP_Pos                       _UINT32_(9)                                          /* (PUF_AR) Wrap Operation Position */
#define PUF_AR_WRAP_Msk                       (_UINT32_(0x1) << PUF_AR_WRAP_Pos)                   /* (PUF_AR) Wrap Operation Mask */
#define PUF_AR_WRAP(value)                    (PUF_AR_WRAP_Msk & (_UINT32_(value) << PUF_AR_WRAP_Pos)) /* Assignment of value for WRAP in the PUF_AR register */
#define PUF_AR_GENRAND_Pos                    _UINT32_(15)                                         /* (PUF_AR) Generate Random Operation Position */
#define PUF_AR_GENRAND_Msk                    (_UINT32_(0x1) << PUF_AR_GENRAND_Pos)                /* (PUF_AR) Generate Random Operation Mask */
#define PUF_AR_GENRAND(value)                 (PUF_AR_GENRAND_Msk & (_UINT32_(value) << PUF_AR_GENRAND_Pos)) /* Assignment of value for GENRAND in the PUF_AR register */
#define PUF_AR_RESEED_Pos                     _UINT32_(16)                                         /* (PUF_AR) Reseed Operation Position */
#define PUF_AR_RESEED_Msk                     (_UINT32_(0x1) << PUF_AR_RESEED_Pos)                 /* (PUF_AR) Reseed Operation Mask */
#define PUF_AR_RESEED(value)                  (PUF_AR_RESEED_Msk & (_UINT32_(value) << PUF_AR_RESEED_Pos)) /* Assignment of value for RESEED in the PUF_AR register */
#define PUF_AR_TESTMEM_Pos                    _UINT32_(30)                                         /* (PUF_AR) Test Memory Operation Position */
#define PUF_AR_TESTMEM_Msk                    (_UINT32_(0x1) << PUF_AR_TESTMEM_Pos)                /* (PUF_AR) Test Memory Operation Mask */
#define PUF_AR_TESTMEM(value)                 (PUF_AR_TESTMEM_Msk & (_UINT32_(value) << PUF_AR_TESTMEM_Pos)) /* Assignment of value for TESTMEM in the PUF_AR register */
#define PUF_AR_TESTPUF_Pos                    _UINT32_(31)                                         /* (PUF_AR) Test PUF Operation Position */
#define PUF_AR_TESTPUF_Msk                    (_UINT32_(0x1) << PUF_AR_TESTPUF_Pos)                /* (PUF_AR) Test PUF Operation Mask */
#define PUF_AR_TESTPUF(value)                 (PUF_AR_TESTPUF_Msk & (_UINT32_(value) << PUF_AR_TESTPUF_Pos)) /* Assignment of value for TESTPUF in the PUF_AR register */
#define PUF_AR_Msk                            _UINT32_(0xC00183EE)                                 /* (PUF_AR) Register Mask  */


/* -------- PUF_IER : (PUF Offset: 0x10) (R/W 32) Interrupt Enable Register -------- */
#define PUF_IER_RESETVALUE                    _UINT32_(0x00)                                       /*  (PUF_IER) Interrupt Enable Register  Reset Value */

#define PUF_IER_INTEN_Pos                     _UINT32_(0)                                          /* (PUF_IER) Interruption Enable Position */
#define PUF_IER_INTEN_Msk                     (_UINT32_(0x1) << PUF_IER_INTEN_Pos)                 /* (PUF_IER) Interruption Enable Mask */
#define PUF_IER_INTEN(value)                  (PUF_IER_INTEN_Msk & (_UINT32_(value) << PUF_IER_INTEN_Pos)) /* Assignment of value for INTEN in the PUF_IER register */
#define   PUF_IER_INTEN_0_Val                 _UINT32_(0x0)                                        /* (PUF_IER) Disables the interruption.  */
#define   PUF_IER_INTEN_1_Val                 _UINT32_(0x1)                                        /* (PUF_IER) Enables the PUF to trigger an interruption from the sources selected in PUF_IMR.  */
#define PUF_IER_INTEN_0                       (PUF_IER_INTEN_0_Val << PUF_IER_INTEN_Pos)           /* (PUF_IER) Disables the interruption. Position */
#define PUF_IER_INTEN_1                       (PUF_IER_INTEN_1_Val << PUF_IER_INTEN_Pos)           /* (PUF_IER) Enables the PUF to trigger an interruption from the sources selected in PUF_IMR. Position */
#define PUF_IER_Msk                           _UINT32_(0x00000001)                                 /* (PUF_IER) Register Mask  */


/* -------- PUF_IMR : (PUF Offset: 0x14) (R/W 32) Interrupt Mask Register -------- */
#define PUF_IMR_RESETVALUE                    _UINT32_(0x00)                                       /*  (PUF_IMR) Interrupt Mask Register  Reset Value */

#define PUF_IMR_BUSY_Pos                      _UINT32_(0)                                          /* (PUF_IMR) Operation Start Event Position */
#define PUF_IMR_BUSY_Msk                      (_UINT32_(0x1) << PUF_IMR_BUSY_Pos)                  /* (PUF_IMR) Operation Start Event Mask */
#define PUF_IMR_BUSY(value)                   (PUF_IMR_BUSY_Msk & (_UINT32_(value) << PUF_IMR_BUSY_Pos)) /* Assignment of value for BUSY in the PUF_IMR register */
#define PUF_IMR_OK_Pos                        _UINT32_(1)                                          /* (PUF_IMR) Last Operation Successful Achievement Event Position */
#define PUF_IMR_OK_Msk                        (_UINT32_(0x1) << PUF_IMR_OK_Pos)                    /* (PUF_IMR) Last Operation Successful Achievement Event Mask */
#define PUF_IMR_OK(value)                     (PUF_IMR_OK_Msk & (_UINT32_(value) << PUF_IMR_OK_Pos)) /* Assignment of value for OK in the PUF_IMR register */
#define PUF_IMR_ERROR_Pos                     _UINT32_(2)                                          /* (PUF_IMR) Last Operation Fail Event Position */
#define PUF_IMR_ERROR_Msk                     (_UINT32_(0x1) << PUF_IMR_ERROR_Pos)                 /* (PUF_IMR) Last Operation Fail Event Mask */
#define PUF_IMR_ERROR(value)                  (PUF_IMR_ERROR_Msk & (_UINT32_(value) << PUF_IMR_ERROR_Pos)) /* Assignment of value for ERROR in the PUF_IMR register */
#define PUF_IMR_ZEROIZED_Pos                  _UINT32_(3)                                          /* (PUF_IMR) Zeroized Operation Completed Event Position */
#define PUF_IMR_ZEROIZED_Msk                  (_UINT32_(0x1) << PUF_IMR_ZEROIZED_Pos)              /* (PUF_IMR) Zeroized Operation Completed Event Mask */
#define PUF_IMR_ZEROIZED(value)               (PUF_IMR_ZEROIZED_Msk & (_UINT32_(value) << PUF_IMR_ZEROIZED_Pos)) /* Assignment of value for ZEROIZED in the PUF_IMR register */
#define PUF_IMR_REJECTED_Pos                  _UINT32_(4)                                          /* (PUF_IMR) Last Activation Code Rejection Event Position */
#define PUF_IMR_REJECTED_Msk                  (_UINT32_(0x1) << PUF_IMR_REJECTED_Pos)              /* (PUF_IMR) Last Activation Code Rejection Event Mask */
#define PUF_IMR_REJECTED(value)               (PUF_IMR_REJECTED_Msk & (_UINT32_(value) << PUF_IMR_REJECTED_Pos)) /* Assignment of value for REJECTED in the PUF_IMR register */
#define PUF_IMR_DIREQ_Pos                     _UINT32_(5)                                          /* (PUF_IMR) Data In Request Event Position */
#define PUF_IMR_DIREQ_Msk                     (_UINT32_(0x1) << PUF_IMR_DIREQ_Pos)                 /* (PUF_IMR) Data In Request Event Mask */
#define PUF_IMR_DIREQ(value)                  (PUF_IMR_DIREQ_Msk & (_UINT32_(value) << PUF_IMR_DIREQ_Pos)) /* Assignment of value for DIREQ in the PUF_IMR register */
#define PUF_IMR_DOREQ_Pos                     _UINT32_(6)                                          /* (PUF_IMR) Data Out Request Event Position */
#define PUF_IMR_DOREQ_Msk                     (_UINT32_(0x1) << PUF_IMR_DOREQ_Pos)                 /* (PUF_IMR) Data Out Request Event Mask */
#define PUF_IMR_DOREQ(value)                  (PUF_IMR_DOREQ_Msk & (_UINT32_(value) << PUF_IMR_DOREQ_Pos)) /* Assignment of value for DOREQ in the PUF_IMR register */
#define PUF_IMR_RESEEDW_Pos                   _UINT32_(29)                                         /* (PUF_IMR) Reseed Warning Event Position */
#define PUF_IMR_RESEEDW_Msk                   (_UINT32_(0x1) << PUF_IMR_RESEEDW_Pos)               /* (PUF_IMR) Reseed Warning Event Mask */
#define PUF_IMR_RESEEDW(value)                (PUF_IMR_RESEEDW_Msk & (_UINT32_(value) << PUF_IMR_RESEEDW_Pos)) /* Assignment of value for RESEEDW in the PUF_IMR register */
#define PUF_IMR_RESEEDR_Pos                   _UINT32_(30)                                         /* (PUF_IMR) Reseed Action Required Event Position */
#define PUF_IMR_RESEEDR_Msk                   (_UINT32_(0x1) << PUF_IMR_RESEEDR_Pos)               /* (PUF_IMR) Reseed Action Required Event Mask */
#define PUF_IMR_RESEEDR(value)                (PUF_IMR_RESEEDR_Msk & (_UINT32_(value) << PUF_IMR_RESEEDR_Pos)) /* Assignment of value for RESEEDR in the PUF_IMR register */
#define PUF_IMR_Msk                           _UINT32_(0x6000007F)                                 /* (PUF_IMR) Register Mask  */


/* -------- PUF_ISR : (PUF Offset: 0x18) (R/W 32) Interrupt Status Register -------- */
#define PUF_ISR_RESETVALUE                    _UINT32_(0x00)                                       /*  (PUF_ISR) Interrupt Status Register  Reset Value */

#define PUF_ISR_BUSY_Pos                      _UINT32_(0)                                          /* (PUF_ISR) Operation in Progress (cleared by writing a 1) Position */
#define PUF_ISR_BUSY_Msk                      (_UINT32_(0x1) << PUF_ISR_BUSY_Pos)                  /* (PUF_ISR) Operation in Progress (cleared by writing a 1) Mask */
#define PUF_ISR_BUSY(value)                   (PUF_ISR_BUSY_Msk & (_UINT32_(value) << PUF_ISR_BUSY_Pos)) /* Assignment of value for BUSY in the PUF_ISR register */
#define PUF_ISR_OK_Pos                        _UINT32_(1)                                          /* (PUF_ISR) Last Operation Achievement (cleared by writing a 1) Position */
#define PUF_ISR_OK_Msk                        (_UINT32_(0x1) << PUF_ISR_OK_Pos)                    /* (PUF_ISR) Last Operation Achievement (cleared by writing a 1) Mask */
#define PUF_ISR_OK(value)                     (PUF_ISR_OK_Msk & (_UINT32_(value) << PUF_ISR_OK_Pos)) /* Assignment of value for OK in the PUF_ISR register */
#define PUF_ISR_ERROR_Pos                     _UINT32_(2)                                          /* (PUF_ISR) Last Operation Fail (cleared by writing a 1) Position */
#define PUF_ISR_ERROR_Msk                     (_UINT32_(0x1) << PUF_ISR_ERROR_Pos)                 /* (PUF_ISR) Last Operation Fail (cleared by writing a 1) Mask */
#define PUF_ISR_ERROR(value)                  (PUF_ISR_ERROR_Msk & (_UINT32_(value) << PUF_ISR_ERROR_Pos)) /* Assignment of value for ERROR in the PUF_ISR register */
#define PUF_ISR_ZEROIZED_Pos                  _UINT32_(3)                                          /* (PUF_ISR) Zeroized Operation Completed (cleared by writing a 1) Position */
#define PUF_ISR_ZEROIZED_Msk                  (_UINT32_(0x1) << PUF_ISR_ZEROIZED_Pos)              /* (PUF_ISR) Zeroized Operation Completed (cleared by writing a 1) Mask */
#define PUF_ISR_ZEROIZED(value)               (PUF_ISR_ZEROIZED_Msk & (_UINT32_(value) << PUF_ISR_ZEROIZED_Pos)) /* Assignment of value for ZEROIZED in the PUF_ISR register */
#define PUF_ISR_REJECTED_Pos                  _UINT32_(4)                                          /* (PUF_ISR) Last Activation Code Rejection (cleared by writing a 1) Position */
#define PUF_ISR_REJECTED_Msk                  (_UINT32_(0x1) << PUF_ISR_REJECTED_Pos)              /* (PUF_ISR) Last Activation Code Rejection (cleared by writing a 1) Mask */
#define PUF_ISR_REJECTED(value)               (PUF_ISR_REJECTED_Msk & (_UINT32_(value) << PUF_ISR_REJECTED_Pos)) /* Assignment of value for REJECTED in the PUF_ISR register */
#define PUF_ISR_DIREQ_Pos                     _UINT32_(5)                                          /* (PUF_ISR) Data In Request (cleared by writing a 1) Position */
#define PUF_ISR_DIREQ_Msk                     (_UINT32_(0x1) << PUF_ISR_DIREQ_Pos)                 /* (PUF_ISR) Data In Request (cleared by writing a 1) Mask */
#define PUF_ISR_DIREQ(value)                  (PUF_ISR_DIREQ_Msk & (_UINT32_(value) << PUF_ISR_DIREQ_Pos)) /* Assignment of value for DIREQ in the PUF_ISR register */
#define PUF_ISR_DOREQ_Pos                     _UINT32_(6)                                          /* (PUF_ISR) Data Out Request (cleared by writing a 1) Position */
#define PUF_ISR_DOREQ_Msk                     (_UINT32_(0x1) << PUF_ISR_DOREQ_Pos)                 /* (PUF_ISR) Data Out Request (cleared by writing a 1) Mask */
#define PUF_ISR_DOREQ(value)                  (PUF_ISR_DOREQ_Msk & (_UINT32_(value) << PUF_ISR_DOREQ_Pos)) /* Assignment of value for DOREQ in the PUF_ISR register */
#define PUF_ISR_RESEEDW_Pos                   _UINT32_(29)                                         /* (PUF_ISR) Reseed Warning (cleared by writing a 1) Position */
#define PUF_ISR_RESEEDW_Msk                   (_UINT32_(0x1) << PUF_ISR_RESEEDW_Pos)               /* (PUF_ISR) Reseed Warning (cleared by writing a 1) Mask */
#define PUF_ISR_RESEEDW(value)                (PUF_ISR_RESEEDW_Msk & (_UINT32_(value) << PUF_ISR_RESEEDW_Pos)) /* Assignment of value for RESEEDW in the PUF_ISR register */
#define PUF_ISR_RESEEDR_Pos                   _UINT32_(30)                                         /* (PUF_ISR) Reseed Action Required (cleared by writing a 1) Position */
#define PUF_ISR_RESEEDR_Msk                   (_UINT32_(0x1) << PUF_ISR_RESEEDR_Pos)               /* (PUF_ISR) Reseed Action Required (cleared by writing a 1) Mask */
#define PUF_ISR_RESEEDR(value)                (PUF_ISR_RESEEDR_Msk & (_UINT32_(value) << PUF_ISR_RESEEDR_Pos)) /* Assignment of value for RESEEDR in the PUF_ISR register */
#define PUF_ISR_Msk                           _UINT32_(0x6000007F)                                 /* (PUF_ISR) Register Mask  */


/* -------- PUF_DATA_DEST : (PUF Offset: 0x20) (R/W 32) Data Destination Register -------- */
#define PUF_DATA_DEST_RESETVALUE              _UINT32_(0x00)                                       /*  (PUF_DATA_DEST) Data Destination Register  Reset Value */

#define PUF_DATA_DEST_DO_Pos                  _UINT32_(0)                                          /* (PUF_DATA_DEST) Data Output on PUF_DOR Position */
#define PUF_DATA_DEST_DO_Msk                  (_UINT32_(0x1) << PUF_DATA_DEST_DO_Pos)              /* (PUF_DATA_DEST) Data Output on PUF_DOR Mask */
#define PUF_DATA_DEST_DO(value)               (PUF_DATA_DEST_DO_Msk & (_UINT32_(value) << PUF_DATA_DEST_DO_Pos)) /* Assignment of value for DO in the PUF_DATA_DEST register */
#define   PUF_DATA_DEST_DO_DISABLED_Val       _UINT32_(0x0)                                        /* (PUF_DATA_DEST) PUF_DOR cannot be used to read data from PUF operations.  */
#define   PUF_DATA_DEST_DO_DO_VIA_DOR_Val     _UINT32_(0x1)                                        /* (PUF_DATA_DEST) PUF_DOR is enabled to read data from PUF operations.  */
#define PUF_DATA_DEST_DO_DISABLED             (PUF_DATA_DEST_DO_DISABLED_Val << PUF_DATA_DEST_DO_Pos) /* (PUF_DATA_DEST) PUF_DOR cannot be used to read data from PUF operations. Position */
#define PUF_DATA_DEST_DO_DO_VIA_DOR           (PUF_DATA_DEST_DO_DO_VIA_DOR_Val << PUF_DATA_DEST_DO_Pos) /* (PUF_DATA_DEST) PUF_DOR is enabled to read data from PUF operations. Position */
#define PUF_DATA_DEST_Msk                     _UINT32_(0x00000001)                                 /* (PUF_DATA_DEST) Register Mask  */


/* -------- PUF_DATA_SRC : (PUF Offset: 0x24) (R/W 32) Data Source Register -------- */
#define PUF_DATA_SRC_RESETVALUE               _UINT32_(0x00)                                       /*  (PUF_DATA_SRC) Data Source Register  Reset Value */

#define PUF_DATA_SRC_DI_Pos                   _UINT32_(0)                                          /* (PUF_DATA_SRC) Data Input Loaded from PUF_DIR Position */
#define PUF_DATA_SRC_DI_Msk                   (_UINT32_(0x1) << PUF_DATA_SRC_DI_Pos)               /* (PUF_DATA_SRC) Data Input Loaded from PUF_DIR Mask */
#define PUF_DATA_SRC_DI(value)                (PUF_DATA_SRC_DI_Msk & (_UINT32_(value) << PUF_DATA_SRC_DI_Pos)) /* Assignment of value for DI in the PUF_DATA_SRC register */
#define   PUF_DATA_SRC_DI_DISABLED_Val        _UINT32_(0x0)                                        /* (PUF_DATA_SRC) PUF_DIR cannot be used to transfer data to PUF.  */
#define   PUF_DATA_SRC_DI_DI_VIA_DIR_Val      _UINT32_(0x1)                                        /* (PUF_DATA_SRC) PUF_DIR is enabled to load data to PUF.  */
#define PUF_DATA_SRC_DI_DISABLED              (PUF_DATA_SRC_DI_DISABLED_Val << PUF_DATA_SRC_DI_Pos) /* (PUF_DATA_SRC) PUF_DIR cannot be used to transfer data to PUF. Position */
#define PUF_DATA_SRC_DI_DI_VIA_DIR            (PUF_DATA_SRC_DI_DI_VIA_DIR_Val << PUF_DATA_SRC_DI_Pos) /* (PUF_DATA_SRC) PUF_DIR is enabled to load data to PUF. Position */
#define PUF_DATA_SRC_Msk                      _UINT32_(0x00000001)                                 /* (PUF_DATA_SRC) Register Mask  */


/* -------- PUF_KEY_INDEX : (PUF Offset: 0x28) ( R/ 32) Key Index Register -------- */
#define PUF_KEY_INDEX_RESETVALUE              _UINT32_(0x00)                                       /*  (PUF_KEY_INDEX) Key Index Register  Reset Value */

#define PUF_KEY_INDEX_KI_Pos                  _UINT32_(0)                                          /* (PUF_KEY_INDEX) Key Index Position */
#define PUF_KEY_INDEX_KI_Msk                  (_UINT32_(0xF) << PUF_KEY_INDEX_KI_Pos)              /* (PUF_KEY_INDEX) Key Index Mask */
#define PUF_KEY_INDEX_KI(value)               (PUF_KEY_INDEX_KI_Msk & (_UINT32_(value) << PUF_KEY_INDEX_KI_Pos)) /* Assignment of value for KI in the PUF_KEY_INDEX register */
#define PUF_KEY_INDEX_Msk                     _UINT32_(0x0000000F)                                 /* (PUF_KEY_INDEX) Register Mask  */


/* -------- PUF_DIR : (PUF Offset: 0xA0) ( /W 32) Data Input Register -------- */
#define PUF_DIR_DI_Pos                        _UINT32_(0)                                          /* (PUF_DIR) Data Input Value Position */
#define PUF_DIR_DI_Msk                        (_UINT32_(0xFFFFFFFF) << PUF_DIR_DI_Pos)             /* (PUF_DIR) Data Input Value Mask */
#define PUF_DIR_DI(value)                     (PUF_DIR_DI_Msk & (_UINT32_(value) << PUF_DIR_DI_Pos)) /* Assignment of value for DI in the PUF_DIR register */
#define PUF_DIR_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (PUF_DIR) Register Mask  */


/* -------- PUF_DOR : (PUF Offset: 0xA8) ( R/ 32) Data Output Register -------- */
#define PUF_DOR_RESETVALUE                    _UINT32_(0x00)                                       /*  (PUF_DOR) Data Output Register  Reset Value */

#define PUF_DOR_DO_Pos                        _UINT32_(0)                                          /* (PUF_DOR) Data Output Value Position */
#define PUF_DOR_DO_Msk                        (_UINT32_(0xFFFFFFFF) << PUF_DOR_DO_Pos)             /* (PUF_DOR) Data Output Value Mask */
#define PUF_DOR_DO(value)                     (PUF_DOR_DO_Msk & (_UINT32_(value) << PUF_DOR_DO_Pos)) /* Assignment of value for DO in the PUF_DOR register */
#define PUF_DOR_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (PUF_DOR) Register Mask  */


/* -------- PUF_MISC : (PUF Offset: 0xC0) (R/W 32) Miscellaneous Register -------- */
#define PUF_MISC_RESETVALUE                   _UINT32_(0x01)                                       /*  (PUF_MISC) Miscellaneous Register  Reset Value */

#define PUF_MISC_DEND_Pos                     _UINT32_(0)                                          /* (PUF_MISC) Data Endianness Position */
#define PUF_MISC_DEND_Msk                     (_UINT32_(0x1) << PUF_MISC_DEND_Pos)                 /* (PUF_MISC) Data Endianness Mask */
#define PUF_MISC_DEND(value)                  (PUF_MISC_DEND_Msk & (_UINT32_(value) << PUF_MISC_DEND_Pos)) /* Assignment of value for DEND in the PUF_MISC register */
#define   PUF_MISC_DEND_LITTLE_Val            _UINT32_(0x0)                                        /* (PUF_MISC) Little-endian mode.  */
#define   PUF_MISC_DEND_BIG_Val               _UINT32_(0x1)                                        /* (PUF_MISC) Big-endian mode. This is the default value.  */
#define PUF_MISC_DEND_LITTLE                  (PUF_MISC_DEND_LITTLE_Val << PUF_MISC_DEND_Pos)      /* (PUF_MISC) Little-endian mode. Position */
#define PUF_MISC_DEND_BIG                     (PUF_MISC_DEND_BIG_Val << PUF_MISC_DEND_Pos)         /* (PUF_MISC) Big-endian mode. This is the default value. Position */
#define PUF_MISC_Msk                          _UINT32_(0x00000001)                                 /* (PUF_MISC) Register Mask  */


/* -------- PUF_IF_SR : (PUF Offset: 0xD0) (R/W 32) Interface Status Register -------- */
#define PUF_IF_SR_RESETVALUE                  _UINT32_(0x00)                                       /*  (PUF_IF_SR) Interface Status Register  Reset Value */

#define PUF_IF_SR_BUSERR_Pos                  _UINT32_(0)                                          /* (PUF_IF_SR) Bus Access Error (cleared by writing a 1) Position */
#define PUF_IF_SR_BUSERR_Msk                  (_UINT32_(0x1) << PUF_IF_SR_BUSERR_Pos)              /* (PUF_IF_SR) Bus Access Error (cleared by writing a 1) Mask */
#define PUF_IF_SR_BUSERR(value)               (PUF_IF_SR_BUSERR_Msk & (_UINT32_(value) << PUF_IF_SR_BUSERR_Pos)) /* Assignment of value for BUSERR in the PUF_IF_SR register */
#define   PUF_IF_SR_BUSERR_NONE_Val           _UINT32_(0x0)                                        /* (PUF_IF_SR) No incorrect access performed since the last write access (BUSERR=1).  */
#define   PUF_IF_SR_BUSERR_ERROR_Val          _UINT32_(0x1)                                        /* (PUF_IF_SR) An incorrect access has been performed. Cleared by writing a 1.  */
#define PUF_IF_SR_BUSERR_NONE                 (PUF_IF_SR_BUSERR_NONE_Val << PUF_IF_SR_BUSERR_Pos)  /* (PUF_IF_SR) No incorrect access performed since the last write access (BUSERR=1). Position */
#define PUF_IF_SR_BUSERR_ERROR                (PUF_IF_SR_BUSERR_ERROR_Val << PUF_IF_SR_BUSERR_Pos) /* (PUF_IF_SR) An incorrect access has been performed. Cleared by writing a 1. Position */
#define PUF_IF_SR_Msk                         _UINT32_(0x00000001)                                 /* (PUF_IF_SR) Register Mask  */


/* -------- PUF_TEST : (PUF Offset: 0xD8) (R/W 32) Test Register -------- */
#define PUF_TEST_RESETVALUE                   _UINT32_(0x00)                                       /*  (PUF_TEST) Test Register  Reset Value */

#define PUF_TEST_BISTEN_Pos                   _UINT32_(0)                                          /* (PUF_TEST) Built-In Self-Test Enable Position */
#define PUF_TEST_BISTEN_Msk                   (_UINT32_(0x1) << PUF_TEST_BISTEN_Pos)               /* (PUF_TEST) Built-In Self-Test Enable Mask */
#define PUF_TEST_BISTEN(value)                (PUF_TEST_BISTEN_Msk & (_UINT32_(value) << PUF_TEST_BISTEN_Pos)) /* Assignment of value for BISTEN in the PUF_TEST register */
#define   PUF_TEST_BISTEN_0_Val               _UINT32_(0x0)                                        /* (PUF_TEST) Disables the BIST, must be performed once BIST completion event occurred (BISTOK=1).  */
#define   PUF_TEST_BISTEN_1_Val               _UINT32_(0x1)                                        /* (PUF_TEST) Starts the BIST.  */
#define PUF_TEST_BISTEN_0                     (PUF_TEST_BISTEN_0_Val << PUF_TEST_BISTEN_Pos)       /* (PUF_TEST) Disables the BIST, must be performed once BIST completion event occurred (BISTOK=1). Position */
#define PUF_TEST_BISTEN_1                     (PUF_TEST_BISTEN_1_Val << PUF_TEST_BISTEN_Pos)       /* (PUF_TEST) Starts the BIST. Position */
#define PUF_TEST_BISTRUN_Pos                  _UINT32_(4)                                          /* (PUF_TEST) Built-In Self-Test Run Status Position */
#define PUF_TEST_BISTRUN_Msk                  (_UINT32_(0x1) << PUF_TEST_BISTRUN_Pos)              /* (PUF_TEST) Built-In Self-Test Run Status Mask */
#define PUF_TEST_BISTRUN(value)               (PUF_TEST_BISTRUN_Msk & (_UINT32_(value) << PUF_TEST_BISTRUN_Pos)) /* Assignment of value for BISTRUN in the PUF_TEST register */
#define   PUF_TEST_BISTRUN_0_Val              _UINT32_(0x0)                                        /* (PUF_TEST) BIST is not active or has not started yet.  */
#define   PUF_TEST_BISTRUN_1_Val              _UINT32_(0x1)                                        /* (PUF_TEST) BIST is enabled.  */
#define PUF_TEST_BISTRUN_0                    (PUF_TEST_BISTRUN_0_Val << PUF_TEST_BISTRUN_Pos)     /* (PUF_TEST) BIST is not active or has not started yet. Position */
#define PUF_TEST_BISTRUN_1                    (PUF_TEST_BISTRUN_1_Val << PUF_TEST_BISTRUN_Pos)     /* (PUF_TEST) BIST is enabled. Position */
#define PUF_TEST_BISTACTIVE_Pos               _UINT32_(5)                                          /* (PUF_TEST) Built-In Self-Test Activity Status Position */
#define PUF_TEST_BISTACTIVE_Msk               (_UINT32_(0x1) << PUF_TEST_BISTACTIVE_Pos)           /* (PUF_TEST) Built-In Self-Test Activity Status Mask */
#define PUF_TEST_BISTACTIVE(value)            (PUF_TEST_BISTACTIVE_Msk & (_UINT32_(value) << PUF_TEST_BISTACTIVE_Pos)) /* Assignment of value for BISTACTIVE in the PUF_TEST register */
#define   PUF_TEST_BISTACTIVE_0_Val           _UINT32_(0x0)                                        /* (PUF_TEST) BIST has completed if BISTRUN=1.  */
#define   PUF_TEST_BISTACTIVE_1_Val           _UINT32_(0x1)                                        /* (PUF_TEST) If BISTRUN=1, BIST is in progress.  */
#define PUF_TEST_BISTACTIVE_0                 (PUF_TEST_BISTACTIVE_0_Val << PUF_TEST_BISTACTIVE_Pos) /* (PUF_TEST) BIST has completed if BISTRUN=1. Position */
#define PUF_TEST_BISTACTIVE_1                 (PUF_TEST_BISTACTIVE_1_Val << PUF_TEST_BISTACTIVE_Pos) /* (PUF_TEST) If BISTRUN=1, BIST is in progress. Position */
#define PUF_TEST_BISTOK_Pos                   _UINT32_(6)                                          /* (PUF_TEST) Built-In Self-Test Run Passed Position */
#define PUF_TEST_BISTOK_Msk                   (_UINT32_(0x1) << PUF_TEST_BISTOK_Pos)               /* (PUF_TEST) Built-In Self-Test Run Passed Mask */
#define PUF_TEST_BISTOK(value)                (PUF_TEST_BISTOK_Msk & (_UINT32_(value) << PUF_TEST_BISTOK_Pos)) /* Assignment of value for BISTOK in the PUF_TEST register */
#define   PUF_TEST_BISTOK_0_Val               _UINT32_(0x0)                                        /* (PUF_TEST) No action  */
#define   PUF_TEST_BISTOK_1_Val               _UINT32_(0x1)                                        /* (PUF_TEST) If BISTRUN=1 and BISTACTIVE=0, BIST has passed successfully.  */
#define PUF_TEST_BISTOK_0                     (PUF_TEST_BISTOK_0_Val << PUF_TEST_BISTOK_Pos)       /* (PUF_TEST) No action Position */
#define PUF_TEST_BISTOK_1                     (PUF_TEST_BISTOK_1_Val << PUF_TEST_BISTOK_Pos)       /* (PUF_TEST) If BISTRUN=1 and BISTACTIVE=0, BIST has passed successfully. Position */
#define PUF_TEST_BISTERR_Pos                  _UINT32_(7)                                          /* (PUF_TEST) Built-In Self-Test Error Position */
#define PUF_TEST_BISTERR_Msk                  (_UINT32_(0x1) << PUF_TEST_BISTERR_Pos)              /* (PUF_TEST) Built-In Self-Test Error Mask */
#define PUF_TEST_BISTERR(value)               (PUF_TEST_BISTERR_Msk & (_UINT32_(value) << PUF_TEST_BISTERR_Pos)) /* Assignment of value for BISTERR in the PUF_TEST register */
#define   PUF_TEST_BISTERR_0_Val              _UINT32_(0x0)                                        /* (PUF_TEST) No action  */
#define   PUF_TEST_BISTERR_1_Val              _UINT32_(0x1)                                        /* (PUF_TEST) If BISTRUN=1 and BISTACTIVE=0, BIST has failed.  */
#define PUF_TEST_BISTERR_0                    (PUF_TEST_BISTERR_0_Val << PUF_TEST_BISTERR_Pos)     /* (PUF_TEST) No action Position */
#define PUF_TEST_BISTERR_1                    (PUF_TEST_BISTERR_1_Val << PUF_TEST_BISTERR_Pos)     /* (PUF_TEST) If BISTRUN=1 and BISTACTIVE=0, BIST has failed. Position */
#define PUF_TEST_BISTALLOW_Pos                _UINT32_(31)                                         /* (PUF_TEST) Built-In Self-Test Allowed Position */
#define PUF_TEST_BISTALLOW_Msk                (_UINT32_(0x1) << PUF_TEST_BISTALLOW_Pos)            /* (PUF_TEST) Built-In Self-Test Allowed Mask */
#define PUF_TEST_BISTALLOW(value)             (PUF_TEST_BISTALLOW_Msk & (_UINT32_(value) << PUF_TEST_BISTALLOW_Pos)) /* Assignment of value for BISTALLOW in the PUF_TEST register */
#define   PUF_TEST_BISTALLOW_0_Val            _UINT32_(0x0)                                        /* (PUF_TEST) BIST Start (BISTEN) command is disabled and has no effect.  */
#define   PUF_TEST_BISTALLOW_1_Val            _UINT32_(0x1)                                        /* (PUF_TEST) BIST Start command (BISTEN) is allowed.  */
#define PUF_TEST_BISTALLOW_0                  (PUF_TEST_BISTALLOW_0_Val << PUF_TEST_BISTALLOW_Pos) /* (PUF_TEST) BIST Start (BISTEN) command is disabled and has no effect. Position */
#define PUF_TEST_BISTALLOW_1                  (PUF_TEST_BISTALLOW_1_Val << PUF_TEST_BISTALLOW_Pos) /* (PUF_TEST) BIST Start command (BISTEN) is allowed. Position */
#define PUF_TEST_Msk                          _UINT32_(0x800000F1)                                 /* (PUF_TEST) Register Mask  */


/* -------- PUF_PSR : (PUF Offset: 0xDC) ( R/ 32) Score Register -------- */
#define PUF_PSR_RESETVALUE                    _UINT32_(0x0F)                                       /*  (PUF_PSR) Score Register  Reset Value */

#define PUF_PSR_SCORE_Pos                     _UINT32_(0)                                          /* (PUF_PSR) Last Test Score Position */
#define PUF_PSR_SCORE_Msk                     (_UINT32_(0xF) << PUF_PSR_SCORE_Pos)                 /* (PUF_PSR) Last Test Score Mask */
#define PUF_PSR_SCORE(value)                  (PUF_PSR_SCORE_Msk & (_UINT32_(value) << PUF_PSR_SCORE_Pos)) /* Assignment of value for SCORE in the PUF_PSR register */
#define PUF_PSR_Msk                           _UINT32_(0x0000000F)                                 /* (PUF_PSR) Register Mask  */


/* -------- PUF_HW_RUC : (PUF Offset: 0xE0) ( R/ 32) Hardware Restrict User Context x Register -------- */
#define PUF_HW_RUC_RESETVALUE                 _UINT32_(0x00)                                       /*  (PUF_HW_RUC) Hardware Restrict User Context x Register  Reset Value */

#define PUF_HW_RUC_RUC0_Pos                   _UINT32_(0)                                          /* (PUF_HW_RUC) Restrict User Context Bit 0 Position */
#define PUF_HW_RUC_RUC0_Msk                   (_UINT32_(0x1) << PUF_HW_RUC_RUC0_Pos)               /* (PUF_HW_RUC) Restrict User Context Bit 0 Mask */
#define PUF_HW_RUC_RUC0(value)                (PUF_HW_RUC_RUC0_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC0_Pos)) /* Assignment of value for RUC0 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC0_0_Val               _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC0_1_Val               _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC0_0                     (PUF_HW_RUC_RUC0_0_Val << PUF_HW_RUC_RUC0_Pos)       /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC0_1                     (PUF_HW_RUC_RUC0_1_Val << PUF_HW_RUC_RUC0_Pos)       /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC1_Pos                   _UINT32_(1)                                          /* (PUF_HW_RUC) Restrict User Context Bit 1 Position */
#define PUF_HW_RUC_RUC1_Msk                   (_UINT32_(0x1) << PUF_HW_RUC_RUC1_Pos)               /* (PUF_HW_RUC) Restrict User Context Bit 1 Mask */
#define PUF_HW_RUC_RUC1(value)                (PUF_HW_RUC_RUC1_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC1_Pos)) /* Assignment of value for RUC1 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC1_0_Val               _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC1_1_Val               _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC1_0                     (PUF_HW_RUC_RUC1_0_Val << PUF_HW_RUC_RUC1_Pos)       /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC1_1                     (PUF_HW_RUC_RUC1_1_Val << PUF_HW_RUC_RUC1_Pos)       /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC2_Pos                   _UINT32_(2)                                          /* (PUF_HW_RUC) Restrict User Context Bit 2 Position */
#define PUF_HW_RUC_RUC2_Msk                   (_UINT32_(0x1) << PUF_HW_RUC_RUC2_Pos)               /* (PUF_HW_RUC) Restrict User Context Bit 2 Mask */
#define PUF_HW_RUC_RUC2(value)                (PUF_HW_RUC_RUC2_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC2_Pos)) /* Assignment of value for RUC2 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC2_0_Val               _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC2_1_Val               _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC2_0                     (PUF_HW_RUC_RUC2_0_Val << PUF_HW_RUC_RUC2_Pos)       /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC2_1                     (PUF_HW_RUC_RUC2_1_Val << PUF_HW_RUC_RUC2_Pos)       /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC3_Pos                   _UINT32_(3)                                          /* (PUF_HW_RUC) Restrict User Context Bit 3 Position */
#define PUF_HW_RUC_RUC3_Msk                   (_UINT32_(0x1) << PUF_HW_RUC_RUC3_Pos)               /* (PUF_HW_RUC) Restrict User Context Bit 3 Mask */
#define PUF_HW_RUC_RUC3(value)                (PUF_HW_RUC_RUC3_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC3_Pos)) /* Assignment of value for RUC3 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC3_0_Val               _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC3_1_Val               _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC3_0                     (PUF_HW_RUC_RUC3_0_Val << PUF_HW_RUC_RUC3_Pos)       /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC3_1                     (PUF_HW_RUC_RUC3_1_Val << PUF_HW_RUC_RUC3_Pos)       /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC4_Pos                   _UINT32_(4)                                          /* (PUF_HW_RUC) Restrict User Context Bit 4 Position */
#define PUF_HW_RUC_RUC4_Msk                   (_UINT32_(0x1) << PUF_HW_RUC_RUC4_Pos)               /* (PUF_HW_RUC) Restrict User Context Bit 4 Mask */
#define PUF_HW_RUC_RUC4(value)                (PUF_HW_RUC_RUC4_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC4_Pos)) /* Assignment of value for RUC4 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC4_0_Val               _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC4_1_Val               _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC4_0                     (PUF_HW_RUC_RUC4_0_Val << PUF_HW_RUC_RUC4_Pos)       /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC4_1                     (PUF_HW_RUC_RUC4_1_Val << PUF_HW_RUC_RUC4_Pos)       /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC5_Pos                   _UINT32_(5)                                          /* (PUF_HW_RUC) Restrict User Context Bit 5 Position */
#define PUF_HW_RUC_RUC5_Msk                   (_UINT32_(0x1) << PUF_HW_RUC_RUC5_Pos)               /* (PUF_HW_RUC) Restrict User Context Bit 5 Mask */
#define PUF_HW_RUC_RUC5(value)                (PUF_HW_RUC_RUC5_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC5_Pos)) /* Assignment of value for RUC5 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC5_0_Val               _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC5_1_Val               _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC5_0                     (PUF_HW_RUC_RUC5_0_Val << PUF_HW_RUC_RUC5_Pos)       /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC5_1                     (PUF_HW_RUC_RUC5_1_Val << PUF_HW_RUC_RUC5_Pos)       /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC6_Pos                   _UINT32_(6)                                          /* (PUF_HW_RUC) Restrict User Context Bit 6 Position */
#define PUF_HW_RUC_RUC6_Msk                   (_UINT32_(0x1) << PUF_HW_RUC_RUC6_Pos)               /* (PUF_HW_RUC) Restrict User Context Bit 6 Mask */
#define PUF_HW_RUC_RUC6(value)                (PUF_HW_RUC_RUC6_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC6_Pos)) /* Assignment of value for RUC6 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC6_0_Val               _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC6_1_Val               _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC6_0                     (PUF_HW_RUC_RUC6_0_Val << PUF_HW_RUC_RUC6_Pos)       /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC6_1                     (PUF_HW_RUC_RUC6_1_Val << PUF_HW_RUC_RUC6_Pos)       /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC7_Pos                   _UINT32_(7)                                          /* (PUF_HW_RUC) Restrict User Context Bit 7 Position */
#define PUF_HW_RUC_RUC7_Msk                   (_UINT32_(0x1) << PUF_HW_RUC_RUC7_Pos)               /* (PUF_HW_RUC) Restrict User Context Bit 7 Mask */
#define PUF_HW_RUC_RUC7(value)                (PUF_HW_RUC_RUC7_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC7_Pos)) /* Assignment of value for RUC7 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC7_0_Val               _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC7_1_Val               _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC7_0                     (PUF_HW_RUC_RUC7_0_Val << PUF_HW_RUC_RUC7_Pos)       /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC7_1                     (PUF_HW_RUC_RUC7_1_Val << PUF_HW_RUC_RUC7_Pos)       /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC8_Pos                   _UINT32_(8)                                          /* (PUF_HW_RUC) Restrict User Context Bit 8 Position */
#define PUF_HW_RUC_RUC8_Msk                   (_UINT32_(0x1) << PUF_HW_RUC_RUC8_Pos)               /* (PUF_HW_RUC) Restrict User Context Bit 8 Mask */
#define PUF_HW_RUC_RUC8(value)                (PUF_HW_RUC_RUC8_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC8_Pos)) /* Assignment of value for RUC8 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC8_0_Val               _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC8_1_Val               _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC8_0                     (PUF_HW_RUC_RUC8_0_Val << PUF_HW_RUC_RUC8_Pos)       /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC8_1                     (PUF_HW_RUC_RUC8_1_Val << PUF_HW_RUC_RUC8_Pos)       /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC9_Pos                   _UINT32_(9)                                          /* (PUF_HW_RUC) Restrict User Context Bit 9 Position */
#define PUF_HW_RUC_RUC9_Msk                   (_UINT32_(0x1) << PUF_HW_RUC_RUC9_Pos)               /* (PUF_HW_RUC) Restrict User Context Bit 9 Mask */
#define PUF_HW_RUC_RUC9(value)                (PUF_HW_RUC_RUC9_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC9_Pos)) /* Assignment of value for RUC9 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC9_0_Val               _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC9_1_Val               _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC9_0                     (PUF_HW_RUC_RUC9_0_Val << PUF_HW_RUC_RUC9_Pos)       /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC9_1                     (PUF_HW_RUC_RUC9_1_Val << PUF_HW_RUC_RUC9_Pos)       /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC10_Pos                  _UINT32_(10)                                         /* (PUF_HW_RUC) Restrict User Context Bit 10 Position */
#define PUF_HW_RUC_RUC10_Msk                  (_UINT32_(0x1) << PUF_HW_RUC_RUC10_Pos)              /* (PUF_HW_RUC) Restrict User Context Bit 10 Mask */
#define PUF_HW_RUC_RUC10(value)               (PUF_HW_RUC_RUC10_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC10_Pos)) /* Assignment of value for RUC10 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC10_0_Val              _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC10_1_Val              _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC10_0                    (PUF_HW_RUC_RUC10_0_Val << PUF_HW_RUC_RUC10_Pos)     /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC10_1                    (PUF_HW_RUC_RUC10_1_Val << PUF_HW_RUC_RUC10_Pos)     /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC11_Pos                  _UINT32_(11)                                         /* (PUF_HW_RUC) Restrict User Context Bit 11 Position */
#define PUF_HW_RUC_RUC11_Msk                  (_UINT32_(0x1) << PUF_HW_RUC_RUC11_Pos)              /* (PUF_HW_RUC) Restrict User Context Bit 11 Mask */
#define PUF_HW_RUC_RUC11(value)               (PUF_HW_RUC_RUC11_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC11_Pos)) /* Assignment of value for RUC11 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC11_0_Val              _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC11_1_Val              _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC11_0                    (PUF_HW_RUC_RUC11_0_Val << PUF_HW_RUC_RUC11_Pos)     /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC11_1                    (PUF_HW_RUC_RUC11_1_Val << PUF_HW_RUC_RUC11_Pos)     /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC12_Pos                  _UINT32_(12)                                         /* (PUF_HW_RUC) Restrict User Context Bit 12 Position */
#define PUF_HW_RUC_RUC12_Msk                  (_UINT32_(0x1) << PUF_HW_RUC_RUC12_Pos)              /* (PUF_HW_RUC) Restrict User Context Bit 12 Mask */
#define PUF_HW_RUC_RUC12(value)               (PUF_HW_RUC_RUC12_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC12_Pos)) /* Assignment of value for RUC12 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC12_0_Val              _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC12_1_Val              _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC12_0                    (PUF_HW_RUC_RUC12_0_Val << PUF_HW_RUC_RUC12_Pos)     /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC12_1                    (PUF_HW_RUC_RUC12_1_Val << PUF_HW_RUC_RUC12_Pos)     /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC13_Pos                  _UINT32_(13)                                         /* (PUF_HW_RUC) Restrict User Context Bit 13 Position */
#define PUF_HW_RUC_RUC13_Msk                  (_UINT32_(0x1) << PUF_HW_RUC_RUC13_Pos)              /* (PUF_HW_RUC) Restrict User Context Bit 13 Mask */
#define PUF_HW_RUC_RUC13(value)               (PUF_HW_RUC_RUC13_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC13_Pos)) /* Assignment of value for RUC13 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC13_0_Val              _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC13_1_Val              _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC13_0                    (PUF_HW_RUC_RUC13_0_Val << PUF_HW_RUC_RUC13_Pos)     /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC13_1                    (PUF_HW_RUC_RUC13_1_Val << PUF_HW_RUC_RUC13_Pos)     /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC14_Pos                  _UINT32_(14)                                         /* (PUF_HW_RUC) Restrict User Context Bit 14 Position */
#define PUF_HW_RUC_RUC14_Msk                  (_UINT32_(0x1) << PUF_HW_RUC_RUC14_Pos)              /* (PUF_HW_RUC) Restrict User Context Bit 14 Mask */
#define PUF_HW_RUC_RUC14(value)               (PUF_HW_RUC_RUC14_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC14_Pos)) /* Assignment of value for RUC14 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC14_0_Val              _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC14_1_Val              _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC14_0                    (PUF_HW_RUC_RUC14_0_Val << PUF_HW_RUC_RUC14_Pos)     /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC14_1                    (PUF_HW_RUC_RUC14_1_Val << PUF_HW_RUC_RUC14_Pos)     /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC15_Pos                  _UINT32_(15)                                         /* (PUF_HW_RUC) Restrict User Context Bit 15 Position */
#define PUF_HW_RUC_RUC15_Msk                  (_UINT32_(0x1) << PUF_HW_RUC_RUC15_Pos)              /* (PUF_HW_RUC) Restrict User Context Bit 15 Mask */
#define PUF_HW_RUC_RUC15(value)               (PUF_HW_RUC_RUC15_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC15_Pos)) /* Assignment of value for RUC15 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC15_0_Val              _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC15_1_Val              _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC15_0                    (PUF_HW_RUC_RUC15_0_Val << PUF_HW_RUC_RUC15_Pos)     /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC15_1                    (PUF_HW_RUC_RUC15_1_Val << PUF_HW_RUC_RUC15_Pos)     /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC16_Pos                  _UINT32_(16)                                         /* (PUF_HW_RUC) Restrict User Context Bit 16 Position */
#define PUF_HW_RUC_RUC16_Msk                  (_UINT32_(0x1) << PUF_HW_RUC_RUC16_Pos)              /* (PUF_HW_RUC) Restrict User Context Bit 16 Mask */
#define PUF_HW_RUC_RUC16(value)               (PUF_HW_RUC_RUC16_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC16_Pos)) /* Assignment of value for RUC16 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC16_0_Val              _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC16_1_Val              _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC16_0                    (PUF_HW_RUC_RUC16_0_Val << PUF_HW_RUC_RUC16_Pos)     /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC16_1                    (PUF_HW_RUC_RUC16_1_Val << PUF_HW_RUC_RUC16_Pos)     /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC17_Pos                  _UINT32_(17)                                         /* (PUF_HW_RUC) Restrict User Context Bit 17 Position */
#define PUF_HW_RUC_RUC17_Msk                  (_UINT32_(0x1) << PUF_HW_RUC_RUC17_Pos)              /* (PUF_HW_RUC) Restrict User Context Bit 17 Mask */
#define PUF_HW_RUC_RUC17(value)               (PUF_HW_RUC_RUC17_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC17_Pos)) /* Assignment of value for RUC17 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC17_0_Val              _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC17_1_Val              _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC17_0                    (PUF_HW_RUC_RUC17_0_Val << PUF_HW_RUC_RUC17_Pos)     /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC17_1                    (PUF_HW_RUC_RUC17_1_Val << PUF_HW_RUC_RUC17_Pos)     /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC18_Pos                  _UINT32_(18)                                         /* (PUF_HW_RUC) Restrict User Context Bit 18 Position */
#define PUF_HW_RUC_RUC18_Msk                  (_UINT32_(0x1) << PUF_HW_RUC_RUC18_Pos)              /* (PUF_HW_RUC) Restrict User Context Bit 18 Mask */
#define PUF_HW_RUC_RUC18(value)               (PUF_HW_RUC_RUC18_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC18_Pos)) /* Assignment of value for RUC18 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC18_0_Val              _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC18_1_Val              _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC18_0                    (PUF_HW_RUC_RUC18_0_Val << PUF_HW_RUC_RUC18_Pos)     /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC18_1                    (PUF_HW_RUC_RUC18_1_Val << PUF_HW_RUC_RUC18_Pos)     /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC19_Pos                  _UINT32_(19)                                         /* (PUF_HW_RUC) Restrict User Context Bit 19 Position */
#define PUF_HW_RUC_RUC19_Msk                  (_UINT32_(0x1) << PUF_HW_RUC_RUC19_Pos)              /* (PUF_HW_RUC) Restrict User Context Bit 19 Mask */
#define PUF_HW_RUC_RUC19(value)               (PUF_HW_RUC_RUC19_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC19_Pos)) /* Assignment of value for RUC19 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC19_0_Val              _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC19_1_Val              _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC19_0                    (PUF_HW_RUC_RUC19_0_Val << PUF_HW_RUC_RUC19_Pos)     /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC19_1                    (PUF_HW_RUC_RUC19_1_Val << PUF_HW_RUC_RUC19_Pos)     /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC20_Pos                  _UINT32_(20)                                         /* (PUF_HW_RUC) Restrict User Context Bit 20 Position */
#define PUF_HW_RUC_RUC20_Msk                  (_UINT32_(0x1) << PUF_HW_RUC_RUC20_Pos)              /* (PUF_HW_RUC) Restrict User Context Bit 20 Mask */
#define PUF_HW_RUC_RUC20(value)               (PUF_HW_RUC_RUC20_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC20_Pos)) /* Assignment of value for RUC20 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC20_0_Val              _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC20_1_Val              _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC20_0                    (PUF_HW_RUC_RUC20_0_Val << PUF_HW_RUC_RUC20_Pos)     /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC20_1                    (PUF_HW_RUC_RUC20_1_Val << PUF_HW_RUC_RUC20_Pos)     /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC21_Pos                  _UINT32_(21)                                         /* (PUF_HW_RUC) Restrict User Context Bit 21 Position */
#define PUF_HW_RUC_RUC21_Msk                  (_UINT32_(0x1) << PUF_HW_RUC_RUC21_Pos)              /* (PUF_HW_RUC) Restrict User Context Bit 21 Mask */
#define PUF_HW_RUC_RUC21(value)               (PUF_HW_RUC_RUC21_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC21_Pos)) /* Assignment of value for RUC21 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC21_0_Val              _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC21_1_Val              _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC21_0                    (PUF_HW_RUC_RUC21_0_Val << PUF_HW_RUC_RUC21_Pos)     /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC21_1                    (PUF_HW_RUC_RUC21_1_Val << PUF_HW_RUC_RUC21_Pos)     /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC22_Pos                  _UINT32_(22)                                         /* (PUF_HW_RUC) Restrict User Context Bit 22 Position */
#define PUF_HW_RUC_RUC22_Msk                  (_UINT32_(0x1) << PUF_HW_RUC_RUC22_Pos)              /* (PUF_HW_RUC) Restrict User Context Bit 22 Mask */
#define PUF_HW_RUC_RUC22(value)               (PUF_HW_RUC_RUC22_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC22_Pos)) /* Assignment of value for RUC22 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC22_0_Val              _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC22_1_Val              _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC22_0                    (PUF_HW_RUC_RUC22_0_Val << PUF_HW_RUC_RUC22_Pos)     /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC22_1                    (PUF_HW_RUC_RUC22_1_Val << PUF_HW_RUC_RUC22_Pos)     /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC23_Pos                  _UINT32_(23)                                         /* (PUF_HW_RUC) Restrict User Context Bit 23 Position */
#define PUF_HW_RUC_RUC23_Msk                  (_UINT32_(0x1) << PUF_HW_RUC_RUC23_Pos)              /* (PUF_HW_RUC) Restrict User Context Bit 23 Mask */
#define PUF_HW_RUC_RUC23(value)               (PUF_HW_RUC_RUC23_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC23_Pos)) /* Assignment of value for RUC23 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC23_0_Val              _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC23_1_Val              _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC23_0                    (PUF_HW_RUC_RUC23_0_Val << PUF_HW_RUC_RUC23_Pos)     /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC23_1                    (PUF_HW_RUC_RUC23_1_Val << PUF_HW_RUC_RUC23_Pos)     /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC24_Pos                  _UINT32_(24)                                         /* (PUF_HW_RUC) Restrict User Context Bit 24 Position */
#define PUF_HW_RUC_RUC24_Msk                  (_UINT32_(0x1) << PUF_HW_RUC_RUC24_Pos)              /* (PUF_HW_RUC) Restrict User Context Bit 24 Mask */
#define PUF_HW_RUC_RUC24(value)               (PUF_HW_RUC_RUC24_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC24_Pos)) /* Assignment of value for RUC24 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC24_0_Val              _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC24_1_Val              _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC24_0                    (PUF_HW_RUC_RUC24_0_Val << PUF_HW_RUC_RUC24_Pos)     /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC24_1                    (PUF_HW_RUC_RUC24_1_Val << PUF_HW_RUC_RUC24_Pos)     /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC25_Pos                  _UINT32_(25)                                         /* (PUF_HW_RUC) Restrict User Context Bit 25 Position */
#define PUF_HW_RUC_RUC25_Msk                  (_UINT32_(0x1) << PUF_HW_RUC_RUC25_Pos)              /* (PUF_HW_RUC) Restrict User Context Bit 25 Mask */
#define PUF_HW_RUC_RUC25(value)               (PUF_HW_RUC_RUC25_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC25_Pos)) /* Assignment of value for RUC25 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC25_0_Val              _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC25_1_Val              _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC25_0                    (PUF_HW_RUC_RUC25_0_Val << PUF_HW_RUC_RUC25_Pos)     /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC25_1                    (PUF_HW_RUC_RUC25_1_Val << PUF_HW_RUC_RUC25_Pos)     /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC26_Pos                  _UINT32_(26)                                         /* (PUF_HW_RUC) Restrict User Context Bit 26 Position */
#define PUF_HW_RUC_RUC26_Msk                  (_UINT32_(0x1) << PUF_HW_RUC_RUC26_Pos)              /* (PUF_HW_RUC) Restrict User Context Bit 26 Mask */
#define PUF_HW_RUC_RUC26(value)               (PUF_HW_RUC_RUC26_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC26_Pos)) /* Assignment of value for RUC26 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC26_0_Val              _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC26_1_Val              _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC26_0                    (PUF_HW_RUC_RUC26_0_Val << PUF_HW_RUC_RUC26_Pos)     /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC26_1                    (PUF_HW_RUC_RUC26_1_Val << PUF_HW_RUC_RUC26_Pos)     /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC27_Pos                  _UINT32_(27)                                         /* (PUF_HW_RUC) Restrict User Context Bit 27 Position */
#define PUF_HW_RUC_RUC27_Msk                  (_UINT32_(0x1) << PUF_HW_RUC_RUC27_Pos)              /* (PUF_HW_RUC) Restrict User Context Bit 27 Mask */
#define PUF_HW_RUC_RUC27(value)               (PUF_HW_RUC_RUC27_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC27_Pos)) /* Assignment of value for RUC27 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC27_0_Val              _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC27_1_Val              _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC27_0                    (PUF_HW_RUC_RUC27_0_Val << PUF_HW_RUC_RUC27_Pos)     /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC27_1                    (PUF_HW_RUC_RUC27_1_Val << PUF_HW_RUC_RUC27_Pos)     /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC28_Pos                  _UINT32_(28)                                         /* (PUF_HW_RUC) Restrict User Context Bit 28 Position */
#define PUF_HW_RUC_RUC28_Msk                  (_UINT32_(0x1) << PUF_HW_RUC_RUC28_Pos)              /* (PUF_HW_RUC) Restrict User Context Bit 28 Mask */
#define PUF_HW_RUC_RUC28(value)               (PUF_HW_RUC_RUC28_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC28_Pos)) /* Assignment of value for RUC28 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC28_0_Val              _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC28_1_Val              _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC28_0                    (PUF_HW_RUC_RUC28_0_Val << PUF_HW_RUC_RUC28_Pos)     /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC28_1                    (PUF_HW_RUC_RUC28_1_Val << PUF_HW_RUC_RUC28_Pos)     /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC29_Pos                  _UINT32_(29)                                         /* (PUF_HW_RUC) Restrict User Context Bit 29 Position */
#define PUF_HW_RUC_RUC29_Msk                  (_UINT32_(0x1) << PUF_HW_RUC_RUC29_Pos)              /* (PUF_HW_RUC) Restrict User Context Bit 29 Mask */
#define PUF_HW_RUC_RUC29(value)               (PUF_HW_RUC_RUC29_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC29_Pos)) /* Assignment of value for RUC29 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC29_0_Val              _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC29_1_Val              _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC29_0                    (PUF_HW_RUC_RUC29_0_Val << PUF_HW_RUC_RUC29_Pos)     /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC29_1                    (PUF_HW_RUC_RUC29_1_Val << PUF_HW_RUC_RUC29_Pos)     /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC30_Pos                  _UINT32_(30)                                         /* (PUF_HW_RUC) Restrict User Context Bit 30 Position */
#define PUF_HW_RUC_RUC30_Msk                  (_UINT32_(0x1) << PUF_HW_RUC_RUC30_Pos)              /* (PUF_HW_RUC) Restrict User Context Bit 30 Mask */
#define PUF_HW_RUC_RUC30(value)               (PUF_HW_RUC_RUC30_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC30_Pos)) /* Assignment of value for RUC30 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC30_0_Val              _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC30_1_Val              _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC30_0                    (PUF_HW_RUC_RUC30_0_Val << PUF_HW_RUC_RUC30_Pos)     /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC30_1                    (PUF_HW_RUC_RUC30_1_Val << PUF_HW_RUC_RUC30_Pos)     /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC31_Pos                  _UINT32_(31)                                         /* (PUF_HW_RUC) Restrict User Context Bit 31 Position */
#define PUF_HW_RUC_RUC31_Msk                  (_UINT32_(0x1) << PUF_HW_RUC_RUC31_Pos)              /* (PUF_HW_RUC) Restrict User Context Bit 31 Mask */
#define PUF_HW_RUC_RUC31(value)               (PUF_HW_RUC_RUC31_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC31_Pos)) /* Assignment of value for RUC31 in the PUF_HW_RUC register */
#define   PUF_HW_RUC_RUC31_0_Val              _UINT32_(0x0)                                        /* (PUF_HW_RUC) This bit can be used in the user context 0 field.  */
#define   PUF_HW_RUC_RUC31_1_Val              _UINT32_(0x1)                                        /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field.  */
#define PUF_HW_RUC_RUC31_0                    (PUF_HW_RUC_RUC31_0_Val << PUF_HW_RUC_RUC31_Pos)     /* (PUF_HW_RUC) This bit can be used in the user context 0 field. Position */
#define PUF_HW_RUC_RUC31_1                    (PUF_HW_RUC_RUC31_1_Val << PUF_HW_RUC_RUC31_Pos)     /* (PUF_HW_RUC) This bit cannot be used in the user context 0 field. Position */
#define PUF_HW_RUC_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (PUF_HW_RUC) Register Mask  */

#define PUF_HW_RUC_RUC_Pos                    _UINT32_(0)                                          /* (PUF_HW_RUC Position) Restrict User Context Bit 3x */
#define PUF_HW_RUC_RUC_Msk                    (_UINT32_(0xFFFFFFFF) << PUF_HW_RUC_RUC_Pos)         /* (PUF_HW_RUC Mask) RUC */
#define PUF_HW_RUC_RUC(value)                 (PUF_HW_RUC_RUC_Msk & (_UINT32_(value) << PUF_HW_RUC_RUC_Pos)) 

/* -------- PUF_HW_SETTINGS : (PUF Offset: 0xF0) ( R/ 32) Hardware Settings Register -------- */
#define PUF_HW_SETTINGS_ENROLL_Pos            _UINT32_(1)                                          /* (PUF_HW_SETTINGS) Enroll Operation Position */
#define PUF_HW_SETTINGS_ENROLL_Msk            (_UINT32_(0x1) << PUF_HW_SETTINGS_ENROLL_Pos)        /* (PUF_HW_SETTINGS) Enroll Operation Mask */
#define PUF_HW_SETTINGS_ENROLL(value)         (PUF_HW_SETTINGS_ENROLL_Msk & (_UINT32_(value) << PUF_HW_SETTINGS_ENROLL_Pos)) /* Assignment of value for ENROLL in the PUF_HW_SETTINGS register */
#define PUF_HW_SETTINGS_START_Pos             _UINT32_(2)                                          /* (PUF_HW_SETTINGS) Start Operation Position */
#define PUF_HW_SETTINGS_START_Msk             (_UINT32_(0x1) << PUF_HW_SETTINGS_START_Pos)         /* (PUF_HW_SETTINGS) Start Operation Mask */
#define PUF_HW_SETTINGS_START(value)          (PUF_HW_SETTINGS_START_Msk & (_UINT32_(value) << PUF_HW_SETTINGS_START_Pos)) /* Assignment of value for START in the PUF_HW_SETTINGS register */
#define PUF_HW_SETTINGS_RECO_Pos              _UINT32_(3)                                          /* (PUF_HW_SETTINGS) Reconstruct Operation Position */
#define PUF_HW_SETTINGS_RECO_Msk              (_UINT32_(0x1) << PUF_HW_SETTINGS_RECO_Pos)          /* (PUF_HW_SETTINGS) Reconstruct Operation Mask */
#define PUF_HW_SETTINGS_RECO(value)           (PUF_HW_SETTINGS_RECO_Msk & (_UINT32_(value) << PUF_HW_SETTINGS_RECO_Pos)) /* Assignment of value for RECO in the PUF_HW_SETTINGS register */
#define PUF_HW_SETTINGS_STOP_Pos              _UINT32_(5)                                          /* (PUF_HW_SETTINGS) Stop Operation Position */
#define PUF_HW_SETTINGS_STOP_Msk              (_UINT32_(0x1) << PUF_HW_SETTINGS_STOP_Pos)          /* (PUF_HW_SETTINGS) Stop Operation Mask */
#define PUF_HW_SETTINGS_STOP(value)           (PUF_HW_SETTINGS_STOP_Msk & (_UINT32_(value) << PUF_HW_SETTINGS_STOP_Pos)) /* Assignment of value for STOP in the PUF_HW_SETTINGS register */
#define PUF_HW_SETTINGS_GETKEY_Pos            _UINT32_(6)                                          /* (PUF_HW_SETTINGS) Get Key Operation Position */
#define PUF_HW_SETTINGS_GETKEY_Msk            (_UINT32_(0x1) << PUF_HW_SETTINGS_GETKEY_Pos)        /* (PUF_HW_SETTINGS) Get Key Operation Mask */
#define PUF_HW_SETTINGS_GETKEY(value)         (PUF_HW_SETTINGS_GETKEY_Msk & (_UINT32_(value) << PUF_HW_SETTINGS_GETKEY_Pos)) /* Assignment of value for GETKEY in the PUF_HW_SETTINGS register */
#define PUF_HW_SETTINGS_UNWRAP_Pos            _UINT32_(7)                                          /* (PUF_HW_SETTINGS) Unwrap Operation Position */
#define PUF_HW_SETTINGS_UNWRAP_Msk            (_UINT32_(0x1) << PUF_HW_SETTINGS_UNWRAP_Pos)        /* (PUF_HW_SETTINGS) Unwrap Operation Mask */
#define PUF_HW_SETTINGS_UNWRAP(value)         (PUF_HW_SETTINGS_UNWRAP_Msk & (_UINT32_(value) << PUF_HW_SETTINGS_UNWRAP_Pos)) /* Assignment of value for UNWRAP in the PUF_HW_SETTINGS register */
#define PUF_HW_SETTINGS_WGENRAND_Pos          _UINT32_(8)                                          /* (PUF_HW_SETTINGS) Wrap Generated Random Operation Position */
#define PUF_HW_SETTINGS_WGENRAND_Msk          (_UINT32_(0x1) << PUF_HW_SETTINGS_WGENRAND_Pos)      /* (PUF_HW_SETTINGS) Wrap Generated Random Operation Mask */
#define PUF_HW_SETTINGS_WGENRAND(value)       (PUF_HW_SETTINGS_WGENRAND_Msk & (_UINT32_(value) << PUF_HW_SETTINGS_WGENRAND_Pos)) /* Assignment of value for WGENRAND in the PUF_HW_SETTINGS register */
#define PUF_HW_SETTINGS_WRAP_Pos              _UINT32_(9)                                          /* (PUF_HW_SETTINGS) Wrap Operation Position */
#define PUF_HW_SETTINGS_WRAP_Msk              (_UINT32_(0x1) << PUF_HW_SETTINGS_WRAP_Pos)          /* (PUF_HW_SETTINGS) Wrap Operation Mask */
#define PUF_HW_SETTINGS_WRAP(value)           (PUF_HW_SETTINGS_WRAP_Msk & (_UINT32_(value) << PUF_HW_SETTINGS_WRAP_Pos)) /* Assignment of value for WRAP in the PUF_HW_SETTINGS register */
#define PUF_HW_SETTINGS_GENRAND_Pos           _UINT32_(15)                                         /* (PUF_HW_SETTINGS) Generate Random Operation Position */
#define PUF_HW_SETTINGS_GENRAND_Msk           (_UINT32_(0x1) << PUF_HW_SETTINGS_GENRAND_Pos)       /* (PUF_HW_SETTINGS) Generate Random Operation Mask */
#define PUF_HW_SETTINGS_GENRAND(value)        (PUF_HW_SETTINGS_GENRAND_Msk & (_UINT32_(value) << PUF_HW_SETTINGS_GENRAND_Pos)) /* Assignment of value for GENRAND in the PUF_HW_SETTINGS register */
#define PUF_HW_SETTINGS_RESEED_Pos            _UINT32_(16)                                         /* (PUF_HW_SETTINGS) Reseed Operation Position */
#define PUF_HW_SETTINGS_RESEED_Msk            (_UINT32_(0x1) << PUF_HW_SETTINGS_RESEED_Pos)        /* (PUF_HW_SETTINGS) Reseed Operation Mask */
#define PUF_HW_SETTINGS_RESEED(value)         (PUF_HW_SETTINGS_RESEED_Msk & (_UINT32_(value) << PUF_HW_SETTINGS_RESEED_Pos)) /* Assignment of value for RESEED in the PUF_HW_SETTINGS register */
#define PUF_HW_SETTINGS_LABTEST_Pos           _UINT32_(24)                                         /* (PUF_HW_SETTINGS) Initialization to Lab Test Mode Position */
#define PUF_HW_SETTINGS_LABTEST_Msk           (_UINT32_(0x1) << PUF_HW_SETTINGS_LABTEST_Pos)       /* (PUF_HW_SETTINGS) Initialization to Lab Test Mode Mask */
#define PUF_HW_SETTINGS_LABTEST(value)        (PUF_HW_SETTINGS_LABTEST_Msk & (_UINT32_(value) << PUF_HW_SETTINGS_LABTEST_Pos)) /* Assignment of value for LABTEST in the PUF_HW_SETTINGS register */
#define PUF_HW_SETTINGS_LABTESTSEL_Pos        _UINT32_(25)                                         /* (PUF_HW_SETTINGS) Selection of Lab Test Mode, when LABTEST=0 Position */
#define PUF_HW_SETTINGS_LABTESTSEL_Msk        (_UINT32_(0x1) << PUF_HW_SETTINGS_LABTESTSEL_Pos)    /* (PUF_HW_SETTINGS) Selection of Lab Test Mode, when LABTEST=0 Mask */
#define PUF_HW_SETTINGS_LABTESTSEL(value)     (PUF_HW_SETTINGS_LABTESTSEL_Msk & (_UINT32_(value) << PUF_HW_SETTINGS_LABTESTSEL_Pos)) /* Assignment of value for LABTESTSEL in the PUF_HW_SETTINGS register */
#define PUF_HW_SETTINGS_EXTSVIADIR_Pos        _UINT32_(27)                                         /* (PUF_HW_SETTINGS) External Entropy Required via PUF_DIR During Reseed Operation Position */
#define PUF_HW_SETTINGS_EXTSVIADIR_Msk        (_UINT32_(0x1) << PUF_HW_SETTINGS_EXTSVIADIR_Pos)    /* (PUF_HW_SETTINGS) External Entropy Required via PUF_DIR During Reseed Operation Mask */
#define PUF_HW_SETTINGS_EXTSVIADIR(value)     (PUF_HW_SETTINGS_EXTSVIADIR_Msk & (_UINT32_(value) << PUF_HW_SETTINGS_EXTSVIADIR_Pos)) /* Assignment of value for EXTSVIADIR in the PUF_HW_SETTINGS register */
#define PUF_HW_SETTINGS_MEMTEST_Pos           _UINT32_(29)                                         /* (PUF_HW_SETTINGS) Memory Tests Included in Initialization Position */
#define PUF_HW_SETTINGS_MEMTEST_Msk           (_UINT32_(0x1) << PUF_HW_SETTINGS_MEMTEST_Pos)       /* (PUF_HW_SETTINGS) Memory Tests Included in Initialization Mask */
#define PUF_HW_SETTINGS_MEMTEST(value)        (PUF_HW_SETTINGS_MEMTEST_Msk & (_UINT32_(value) << PUF_HW_SETTINGS_MEMTEST_Pos)) /* Assignment of value for MEMTEST in the PUF_HW_SETTINGS register */
#define PUF_HW_SETTINGS_TESTMEM_Pos           _UINT32_(30)                                         /* (PUF_HW_SETTINGS) Test Memory Operation Position */
#define PUF_HW_SETTINGS_TESTMEM_Msk           (_UINT32_(0x1) << PUF_HW_SETTINGS_TESTMEM_Pos)       /* (PUF_HW_SETTINGS) Test Memory Operation Mask */
#define PUF_HW_SETTINGS_TESTMEM(value)        (PUF_HW_SETTINGS_TESTMEM_Msk & (_UINT32_(value) << PUF_HW_SETTINGS_TESTMEM_Pos)) /* Assignment of value for TESTMEM in the PUF_HW_SETTINGS register */
#define PUF_HW_SETTINGS_TESTPUF_Pos           _UINT32_(31)                                         /* (PUF_HW_SETTINGS) Test PUF Operation Position */
#define PUF_HW_SETTINGS_TESTPUF_Msk           (_UINT32_(0x1) << PUF_HW_SETTINGS_TESTPUF_Pos)       /* (PUF_HW_SETTINGS) Test PUF Operation Mask */
#define PUF_HW_SETTINGS_TESTPUF(value)        (PUF_HW_SETTINGS_TESTPUF_Msk & (_UINT32_(value) << PUF_HW_SETTINGS_TESTPUF_Pos)) /* Assignment of value for TESTPUF in the PUF_HW_SETTINGS register */
#define PUF_HW_SETTINGS_Msk                   _UINT32_(0xEB0183EE)                                 /* (PUF_HW_SETTINGS) Register Mask  */


/* PUF register offsets definitions */
#define PUF_CR_REG_OFST                _UINT32_(0x00)      /* (PUF_CR) Control Register Offset */
#define PUF_ORR_REG_OFST               _UINT32_(0x04)      /* (PUF_ORR) Operation Result Register Offset */
#define PUF_SR_REG_OFST                _UINT32_(0x08)      /* (PUF_SR) Status Register Offset */
#define PUF_AR_REG_OFST                _UINT32_(0x0C)      /* (PUF_AR) Allow Register Offset */
#define PUF_IER_REG_OFST               _UINT32_(0x10)      /* (PUF_IER) Interrupt Enable Register Offset */
#define PUF_IMR_REG_OFST               _UINT32_(0x14)      /* (PUF_IMR) Interrupt Mask Register Offset */
#define PUF_ISR_REG_OFST               _UINT32_(0x18)      /* (PUF_ISR) Interrupt Status Register Offset */
#define PUF_DATA_DEST_REG_OFST         _UINT32_(0x20)      /* (PUF_DATA_DEST) Data Destination Register Offset */
#define PUF_DATA_SRC_REG_OFST          _UINT32_(0x24)      /* (PUF_DATA_SRC) Data Source Register Offset */
#define PUF_KEY_INDEX_REG_OFST         _UINT32_(0x28)      /* (PUF_KEY_INDEX) Key Index Register Offset */
#define PUF_DIR_REG_OFST               _UINT32_(0xA0)      /* (PUF_DIR) Data Input Register Offset */
#define PUF_DOR_REG_OFST               _UINT32_(0xA8)      /* (PUF_DOR) Data Output Register Offset */
#define PUF_MISC_REG_OFST              _UINT32_(0xC0)      /* (PUF_MISC) Miscellaneous Register Offset */
#define PUF_IF_SR_REG_OFST             _UINT32_(0xD0)      /* (PUF_IF_SR) Interface Status Register Offset */
#define PUF_TEST_REG_OFST              _UINT32_(0xD8)      /* (PUF_TEST) Test Register Offset */
#define PUF_PSR_REG_OFST               _UINT32_(0xDC)      /* (PUF_PSR) Score Register Offset */
#define PUF_HW_RUC_REG_OFST            _UINT32_(0xE0)      /* (PUF_HW_RUC) Hardware Restrict User Context x Register Offset */
#define PUF_HW_RUC0_REG_OFST           _UINT32_(0xE0)      /* (PUF_HW_RUC0) Hardware Restrict User Context x Register Offset */
#define PUF_HW_RUC1_REG_OFST           _UINT32_(0xE4)      /* (PUF_HW_RUC1) Hardware Restrict User Context x Register Offset */
#define PUF_HW_SETTINGS_REG_OFST       _UINT32_(0xF0)      /* (PUF_HW_SETTINGS) Hardware Settings Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* PUF register API structure */
typedef struct
{  /* Physical Unclonable Functions */
  __IO  uint32_t                       PUF_CR;             /* Offset: 0x00 (R/W  32) Control Register */
  __I   uint32_t                       PUF_ORR;            /* Offset: 0x04 (R/   32) Operation Result Register */
  __IO  uint32_t                       PUF_SR;             /* Offset: 0x08 (R/W  32) Status Register */
  __I   uint32_t                       PUF_AR;             /* Offset: 0x0C (R/   32) Allow Register */
  __IO  uint32_t                       PUF_IER;            /* Offset: 0x10 (R/W  32) Interrupt Enable Register */
  __IO  uint32_t                       PUF_IMR;            /* Offset: 0x14 (R/W  32) Interrupt Mask Register */
  __IO  uint32_t                       PUF_ISR;            /* Offset: 0x18 (R/W  32) Interrupt Status Register */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       PUF_DATA_DEST;      /* Offset: 0x20 (R/W  32) Data Destination Register */
  __IO  uint32_t                       PUF_DATA_SRC;       /* Offset: 0x24 (R/W  32) Data Source Register */
  __I   uint32_t                       PUF_KEY_INDEX;      /* Offset: 0x28 (R/   32) Key Index Register */
  __I   uint8_t                        Reserved2[0x74];
  __O   uint32_t                       PUF_DIR;            /* Offset: 0xA0 ( /W  32) Data Input Register */
  __I   uint8_t                        Reserved3[0x04];
  __I   uint32_t                       PUF_DOR;            /* Offset: 0xA8 (R/   32) Data Output Register */
  __I   uint8_t                        Reserved4[0x14];
  __IO  uint32_t                       PUF_MISC;           /* Offset: 0xC0 (R/W  32) Miscellaneous Register */
  __I   uint8_t                        Reserved5[0x0C];
  __IO  uint32_t                       PUF_IF_SR;          /* Offset: 0xD0 (R/W  32) Interface Status Register */
  __I   uint8_t                        Reserved6[0x04];
  __IO  uint32_t                       PUF_TEST;           /* Offset: 0xD8 (R/W  32) Test Register */
  __I   uint32_t                       PUF_PSR;            /* Offset: 0xDC (R/   32) Score Register */
  __I   uint32_t                       PUF_HW_RUC[2];      /* Offset: 0xE0 (R/   32) Hardware Restrict User Context x Register */
  __I   uint8_t                        Reserved7[0x08];
  __I   uint32_t                       PUF_HW_SETTINGS;    /* Offset: 0xF0 (R/   32) Hardware Settings Register */
} puf_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAM9X7_PUF_COMPONENT_H_ */
