/*
 * Component description for SHA
 *
 * Copyright (c) 2023 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description file (ATDF) version 2023-12-19T08:59:35Z */
#ifndef _PIC32CXMTSH_SHA_COMPONENT_H_
#define _PIC32CXMTSH_SHA_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SHA                                          */
/* ************************************************************************** */

/* -------- SHA_CR : (SHA Offset: 0x00) ( /W 32) Control Register -------- */
#define SHA_CR_START_Pos                      _UINT32_(0)                                          /* (SHA_CR) Start Processing Position */
#define SHA_CR_START_Msk                      (_UINT32_(0x1) << SHA_CR_START_Pos)                  /* (SHA_CR) Start Processing Mask */
#define SHA_CR_START(value)                   (SHA_CR_START_Msk & (_UINT32_(value) << SHA_CR_START_Pos)) /* Assigment of value for START in the SHA_CR register */
#define SHA_CR_FIRST_Pos                      _UINT32_(4)                                          /* (SHA_CR) First Block of a Message Position */
#define SHA_CR_FIRST_Msk                      (_UINT32_(0x1) << SHA_CR_FIRST_Pos)                  /* (SHA_CR) First Block of a Message Mask */
#define SHA_CR_FIRST(value)                   (SHA_CR_FIRST_Msk & (_UINT32_(value) << SHA_CR_FIRST_Pos)) /* Assigment of value for FIRST in the SHA_CR register */
#define SHA_CR_SWRST_Pos                      _UINT32_(8)                                          /* (SHA_CR) Software Reset Position */
#define SHA_CR_SWRST_Msk                      (_UINT32_(0x1) << SHA_CR_SWRST_Pos)                  /* (SHA_CR) Software Reset Mask */
#define SHA_CR_SWRST(value)                   (SHA_CR_SWRST_Msk & (_UINT32_(value) << SHA_CR_SWRST_Pos)) /* Assigment of value for SWRST in the SHA_CR register */
#define SHA_CR_WUIHV_Pos                      _UINT32_(12)                                         /* (SHA_CR) Write User Initial Hash Values Position */
#define SHA_CR_WUIHV_Msk                      (_UINT32_(0x1) << SHA_CR_WUIHV_Pos)                  /* (SHA_CR) Write User Initial Hash Values Mask */
#define SHA_CR_WUIHV(value)                   (SHA_CR_WUIHV_Msk & (_UINT32_(value) << SHA_CR_WUIHV_Pos)) /* Assigment of value for WUIHV in the SHA_CR register */
#define SHA_CR_WUIEHV_Pos                     _UINT32_(13)                                         /* (SHA_CR) Write User Initial or Expected Hash Values Position */
#define SHA_CR_WUIEHV_Msk                     (_UINT32_(0x1) << SHA_CR_WUIEHV_Pos)                 /* (SHA_CR) Write User Initial or Expected Hash Values Mask */
#define SHA_CR_WUIEHV(value)                  (SHA_CR_WUIEHV_Msk & (_UINT32_(value) << SHA_CR_WUIEHV_Pos)) /* Assigment of value for WUIEHV in the SHA_CR register */
#define SHA_CR_UNLOCK_Pos                     _UINT32_(24)                                         /* (SHA_CR) Unlock Processing Position */
#define SHA_CR_UNLOCK_Msk                     (_UINT32_(0x1) << SHA_CR_UNLOCK_Pos)                 /* (SHA_CR) Unlock Processing Mask */
#define SHA_CR_UNLOCK(value)                  (SHA_CR_UNLOCK_Msk & (_UINT32_(value) << SHA_CR_UNLOCK_Pos)) /* Assigment of value for UNLOCK in the SHA_CR register */
#define SHA_CR_Msk                            _UINT32_(0x01003111)                                 /* (SHA_CR) Register Mask  */


/* -------- SHA_MR : (SHA Offset: 0x04) (R/W 32) Mode Register -------- */
#define SHA_MR_SMOD_Pos                       _UINT32_(0)                                          /* (SHA_MR) Start Mode Position */
#define SHA_MR_SMOD_Msk                       (_UINT32_(0x3) << SHA_MR_SMOD_Pos)                   /* (SHA_MR) Start Mode Mask */
#define SHA_MR_SMOD(value)                    (SHA_MR_SMOD_Msk & (_UINT32_(value) << SHA_MR_SMOD_Pos)) /* Assigment of value for SMOD in the SHA_MR register */
#define   SHA_MR_SMOD_MANUAL_START_Val        _UINT32_(0x0)                                        /* (SHA_MR) Manual mode  */
#define   SHA_MR_SMOD_AUTO_START_Val          _UINT32_(0x1)                                        /* (SHA_MR) Auto mode  */
#define   SHA_MR_SMOD_IDATAR0_START_Val       _UINT32_(0x2)                                        /* (SHA_MR) SHA_IDATAR0 access only mode (mandatory when DMA is used)  */
#define SHA_MR_SMOD_MANUAL_START              (SHA_MR_SMOD_MANUAL_START_Val << SHA_MR_SMOD_Pos)    /* (SHA_MR) Manual mode Position  */
#define SHA_MR_SMOD_AUTO_START                (SHA_MR_SMOD_AUTO_START_Val << SHA_MR_SMOD_Pos)      /* (SHA_MR) Auto mode Position  */
#define SHA_MR_SMOD_IDATAR0_START             (SHA_MR_SMOD_IDATAR0_START_Val << SHA_MR_SMOD_Pos)   /* (SHA_MR) SHA_IDATAR0 access only mode (mandatory when DMA is used) Position  */
#define SHA_MR_AOE_Pos                        _UINT32_(3)                                          /* (SHA_MR) Always ON Enable Position */
#define SHA_MR_AOE_Msk                        (_UINT32_(0x1) << SHA_MR_AOE_Pos)                    /* (SHA_MR) Always ON Enable Mask */
#define SHA_MR_AOE(value)                     (SHA_MR_AOE_Msk & (_UINT32_(value) << SHA_MR_AOE_Pos)) /* Assigment of value for AOE in the SHA_MR register */
#define SHA_MR_PROCDLY_Pos                    _UINT32_(4)                                          /* (SHA_MR) Processing Delay Position */
#define SHA_MR_PROCDLY_Msk                    (_UINT32_(0x1) << SHA_MR_PROCDLY_Pos)                /* (SHA_MR) Processing Delay Mask */
#define SHA_MR_PROCDLY(value)                 (SHA_MR_PROCDLY_Msk & (_UINT32_(value) << SHA_MR_PROCDLY_Pos)) /* Assigment of value for PROCDLY in the SHA_MR register */
#define   SHA_MR_PROCDLY_SHORTEST_Val         _UINT32_(0x0)                                        /* (SHA_MR) SHA processing runtime is the shortest one  */
#define   SHA_MR_PROCDLY_LONGEST_Val          _UINT32_(0x1)                                        /* (SHA_MR) SHA processing runtime is the longest one (reduces the SHA bandwidth requirement, reduces the system bus overload)  */
#define SHA_MR_PROCDLY_SHORTEST               (SHA_MR_PROCDLY_SHORTEST_Val << SHA_MR_PROCDLY_Pos)  /* (SHA_MR) SHA processing runtime is the shortest one Position  */
#define SHA_MR_PROCDLY_LONGEST                (SHA_MR_PROCDLY_LONGEST_Val << SHA_MR_PROCDLY_Pos)   /* (SHA_MR) SHA processing runtime is the longest one (reduces the SHA bandwidth requirement, reduces the system bus overload) Position  */
#define SHA_MR_UIHV_Pos                       _UINT32_(5)                                          /* (SHA_MR) User Initial Hash Value Registers Position */
#define SHA_MR_UIHV_Msk                       (_UINT32_(0x1) << SHA_MR_UIHV_Pos)                   /* (SHA_MR) User Initial Hash Value Registers Mask */
#define SHA_MR_UIHV(value)                    (SHA_MR_UIHV_Msk & (_UINT32_(value) << SHA_MR_UIHV_Pos)) /* Assigment of value for UIHV in the SHA_MR register */
#define SHA_MR_UIEHV_Pos                      _UINT32_(6)                                          /* (SHA_MR) User Initial or Expected Hash Value Registers Position */
#define SHA_MR_UIEHV_Msk                      (_UINT32_(0x1) << SHA_MR_UIEHV_Pos)                  /* (SHA_MR) User Initial or Expected Hash Value Registers Mask */
#define SHA_MR_UIEHV(value)                   (SHA_MR_UIEHV_Msk & (_UINT32_(value) << SHA_MR_UIEHV_Pos)) /* Assigment of value for UIEHV in the SHA_MR register */
#define SHA_MR_BPE_Pos                        _UINT32_(7)                                          /* (SHA_MR) Block Processing End Position */
#define SHA_MR_BPE_Msk                        (_UINT32_(0x1) << SHA_MR_BPE_Pos)                    /* (SHA_MR) Block Processing End Mask */
#define SHA_MR_BPE(value)                     (SHA_MR_BPE_Msk & (_UINT32_(value) << SHA_MR_BPE_Pos)) /* Assigment of value for BPE in the SHA_MR register */
#define SHA_MR_ALGO_Pos                       _UINT32_(8)                                          /* (SHA_MR) SHA Algorithm Position */
#define SHA_MR_ALGO_Msk                       (_UINT32_(0xF) << SHA_MR_ALGO_Pos)                   /* (SHA_MR) SHA Algorithm Mask */
#define SHA_MR_ALGO(value)                    (SHA_MR_ALGO_Msk & (_UINT32_(value) << SHA_MR_ALGO_Pos)) /* Assigment of value for ALGO in the SHA_MR register */
#define   SHA_MR_ALGO_SHA1_Val                _UINT32_(0x0)                                        /* (SHA_MR) SHA1 algorithm processed  */
#define   SHA_MR_ALGO_SHA256_Val              _UINT32_(0x1)                                        /* (SHA_MR) SHA256 algorithm processed  */
#define   SHA_MR_ALGO_SHA384_Val              _UINT32_(0x2)                                        /* (SHA_MR) SHA384 algorithm processed  */
#define   SHA_MR_ALGO_SHA512_Val              _UINT32_(0x3)                                        /* (SHA_MR) SHA512 algorithm processed  */
#define   SHA_MR_ALGO_SHA224_Val              _UINT32_(0x4)                                        /* (SHA_MR) SHA224 algorithm processed  */
#define   SHA_MR_ALGO_SHA512_224_Val          _UINT32_(0x5)                                        /* (SHA_MR) SHA512/224 algorithm processed  */
#define   SHA_MR_ALGO_SHA512_256_Val          _UINT32_(0x6)                                        /* (SHA_MR) SHA512/256 algorithm processed  */
#define   SHA_MR_ALGO_HMAC_SHA1_Val           _UINT32_(0x8)                                        /* (SHA_MR) HMAC algorithm with SHA1 Hash processed  */
#define   SHA_MR_ALGO_HMAC_SHA256_Val         _UINT32_(0x9)                                        /* (SHA_MR) HMAC algorithm with SHA256 Hash processed  */
#define   SHA_MR_ALGO_HMAC_SHA384_Val         _UINT32_(0xA)                                        /* (SHA_MR) HMAC algorithm with SHA384 Hash processed  */
#define   SHA_MR_ALGO_HMAC_SHA512_Val         _UINT32_(0xB)                                        /* (SHA_MR) HMAC algorithm with SHA512 Hash processed  */
#define   SHA_MR_ALGO_HMAC_SHA224_Val         _UINT32_(0xC)                                        /* (SHA_MR) HMAC algorithm with SHA224 Hash processed  */
#define   SHA_MR_ALGO_HMAC_SHA512_224_Val     _UINT32_(0xD)                                        /* (SHA_MR) HMAC algorithm with SHA512/224 Hash processed  */
#define   SHA_MR_ALGO_HMAC_SHA512_256_Val     _UINT32_(0xE)                                        /* (SHA_MR) HMAC algorithm with SHA512/256 Hash processed  */
#define SHA_MR_ALGO_SHA1                      (SHA_MR_ALGO_SHA1_Val << SHA_MR_ALGO_Pos)            /* (SHA_MR) SHA1 algorithm processed Position  */
#define SHA_MR_ALGO_SHA256                    (SHA_MR_ALGO_SHA256_Val << SHA_MR_ALGO_Pos)          /* (SHA_MR) SHA256 algorithm processed Position  */
#define SHA_MR_ALGO_SHA384                    (SHA_MR_ALGO_SHA384_Val << SHA_MR_ALGO_Pos)          /* (SHA_MR) SHA384 algorithm processed Position  */
#define SHA_MR_ALGO_SHA512                    (SHA_MR_ALGO_SHA512_Val << SHA_MR_ALGO_Pos)          /* (SHA_MR) SHA512 algorithm processed Position  */
#define SHA_MR_ALGO_SHA224                    (SHA_MR_ALGO_SHA224_Val << SHA_MR_ALGO_Pos)          /* (SHA_MR) SHA224 algorithm processed Position  */
#define SHA_MR_ALGO_SHA512_224                (SHA_MR_ALGO_SHA512_224_Val << SHA_MR_ALGO_Pos)      /* (SHA_MR) SHA512/224 algorithm processed Position  */
#define SHA_MR_ALGO_SHA512_256                (SHA_MR_ALGO_SHA512_256_Val << SHA_MR_ALGO_Pos)      /* (SHA_MR) SHA512/256 algorithm processed Position  */
#define SHA_MR_ALGO_HMAC_SHA1                 (SHA_MR_ALGO_HMAC_SHA1_Val << SHA_MR_ALGO_Pos)       /* (SHA_MR) HMAC algorithm with SHA1 Hash processed Position  */
#define SHA_MR_ALGO_HMAC_SHA256               (SHA_MR_ALGO_HMAC_SHA256_Val << SHA_MR_ALGO_Pos)     /* (SHA_MR) HMAC algorithm with SHA256 Hash processed Position  */
#define SHA_MR_ALGO_HMAC_SHA384               (SHA_MR_ALGO_HMAC_SHA384_Val << SHA_MR_ALGO_Pos)     /* (SHA_MR) HMAC algorithm with SHA384 Hash processed Position  */
#define SHA_MR_ALGO_HMAC_SHA512               (SHA_MR_ALGO_HMAC_SHA512_Val << SHA_MR_ALGO_Pos)     /* (SHA_MR) HMAC algorithm with SHA512 Hash processed Position  */
#define SHA_MR_ALGO_HMAC_SHA224               (SHA_MR_ALGO_HMAC_SHA224_Val << SHA_MR_ALGO_Pos)     /* (SHA_MR) HMAC algorithm with SHA224 Hash processed Position  */
#define SHA_MR_ALGO_HMAC_SHA512_224           (SHA_MR_ALGO_HMAC_SHA512_224_Val << SHA_MR_ALGO_Pos) /* (SHA_MR) HMAC algorithm with SHA512/224 Hash processed Position  */
#define SHA_MR_ALGO_HMAC_SHA512_256           (SHA_MR_ALGO_HMAC_SHA512_256_Val << SHA_MR_ALGO_Pos) /* (SHA_MR) HMAC algorithm with SHA512/256 Hash processed Position  */
#define SHA_MR_TMPLCK_Pos                     _UINT32_(15)                                         /* (SHA_MR) Tamper Lock Enable Position */
#define SHA_MR_TMPLCK_Msk                     (_UINT32_(0x1) << SHA_MR_TMPLCK_Pos)                 /* (SHA_MR) Tamper Lock Enable Mask */
#define SHA_MR_TMPLCK(value)                  (SHA_MR_TMPLCK_Msk & (_UINT32_(value) << SHA_MR_TMPLCK_Pos)) /* Assigment of value for TMPLCK in the SHA_MR register */
#define SHA_MR_DUALBUFF_Pos                   _UINT32_(16)                                         /* (SHA_MR) Dual Input Buffer Position */
#define SHA_MR_DUALBUFF_Msk                   (_UINT32_(0x1) << SHA_MR_DUALBUFF_Pos)               /* (SHA_MR) Dual Input Buffer Mask */
#define SHA_MR_DUALBUFF(value)                (SHA_MR_DUALBUFF_Msk & (_UINT32_(value) << SHA_MR_DUALBUFF_Pos)) /* Assigment of value for DUALBUFF in the SHA_MR register */
#define   SHA_MR_DUALBUFF_INACTIVE_Val        _UINT32_(0x0)                                        /* (SHA_MR) SHA_IDATARx and SHA_IODATARx cannot be written during processing of previous block.  */
#define   SHA_MR_DUALBUFF_ACTIVE_Val          _UINT32_(0x1)                                        /* (SHA_MR) SHA_IDATARx and SHA_IODATARx can be written during processing of previous block when SMOD value = 2. It speeds up the overall runtime of large files.  */
#define SHA_MR_DUALBUFF_INACTIVE              (SHA_MR_DUALBUFF_INACTIVE_Val << SHA_MR_DUALBUFF_Pos) /* (SHA_MR) SHA_IDATARx and SHA_IODATARx cannot be written during processing of previous block. Position  */
#define SHA_MR_DUALBUFF_ACTIVE                (SHA_MR_DUALBUFF_ACTIVE_Val << SHA_MR_DUALBUFF_Pos)  /* (SHA_MR) SHA_IDATARx and SHA_IODATARx can be written during processing of previous block when SMOD value = 2. It speeds up the overall runtime of large files. Position  */
#define SHA_MR_CHECK_Pos                      _UINT32_(24)                                         /* (SHA_MR) Hash Check Position */
#define SHA_MR_CHECK_Msk                      (_UINT32_(0x3) << SHA_MR_CHECK_Pos)                  /* (SHA_MR) Hash Check Mask */
#define SHA_MR_CHECK(value)                   (SHA_MR_CHECK_Msk & (_UINT32_(value) << SHA_MR_CHECK_Pos)) /* Assigment of value for CHECK in the SHA_MR register */
#define   SHA_MR_CHECK_NO_CHECK_Val           _UINT32_(0x0)                                        /* (SHA_MR) No check is performed  */
#define   SHA_MR_CHECK_CHECK_EHV_Val          _UINT32_(0x1)                                        /* (SHA_MR) Check is performed with expected hash stored in internal expected hash value registers.  */
#define   SHA_MR_CHECK_CHECK_MESSAGE_Val      _UINT32_(0x2)                                        /* (SHA_MR) Check is performed with expected hash provided after the message.  */
#define SHA_MR_CHECK_NO_CHECK                 (SHA_MR_CHECK_NO_CHECK_Val << SHA_MR_CHECK_Pos)      /* (SHA_MR) No check is performed Position  */
#define SHA_MR_CHECK_CHECK_EHV                (SHA_MR_CHECK_CHECK_EHV_Val << SHA_MR_CHECK_Pos)     /* (SHA_MR) Check is performed with expected hash stored in internal expected hash value registers. Position  */
#define SHA_MR_CHECK_CHECK_MESSAGE            (SHA_MR_CHECK_CHECK_MESSAGE_Val << SHA_MR_CHECK_Pos) /* (SHA_MR) Check is performed with expected hash provided after the message. Position  */
#define SHA_MR_CHKCNT_Pos                     _UINT32_(28)                                         /* (SHA_MR) Check Counter Position */
#define SHA_MR_CHKCNT_Msk                     (_UINT32_(0xF) << SHA_MR_CHKCNT_Pos)                 /* (SHA_MR) Check Counter Mask */
#define SHA_MR_CHKCNT(value)                  (SHA_MR_CHKCNT_Msk & (_UINT32_(value) << SHA_MR_CHKCNT_Pos)) /* Assigment of value for CHKCNT in the SHA_MR register */
#define SHA_MR_Msk                            _UINT32_(0xF3018FFB)                                 /* (SHA_MR) Register Mask  */


/* -------- SHA_IER : (SHA Offset: 0x10) ( /W 32) Interrupt Enable Register -------- */
#define SHA_IER_DATRDY_Pos                    _UINT32_(0)                                          /* (SHA_IER) Data Ready Interrupt Enable Position */
#define SHA_IER_DATRDY_Msk                    (_UINT32_(0x1) << SHA_IER_DATRDY_Pos)                /* (SHA_IER) Data Ready Interrupt Enable Mask */
#define SHA_IER_DATRDY(value)                 (SHA_IER_DATRDY_Msk & (_UINT32_(value) << SHA_IER_DATRDY_Pos)) /* Assigment of value for DATRDY in the SHA_IER register */
#define SHA_IER_ENDTX_Pos                     _UINT32_(1)                                          /* (SHA_IER) End of Transmit Buffer Interrupt Enable Position */
#define SHA_IER_ENDTX_Msk                     (_UINT32_(0x1) << SHA_IER_ENDTX_Pos)                 /* (SHA_IER) End of Transmit Buffer Interrupt Enable Mask */
#define SHA_IER_ENDTX(value)                  (SHA_IER_ENDTX_Msk & (_UINT32_(value) << SHA_IER_ENDTX_Pos)) /* Assigment of value for ENDTX in the SHA_IER register */
#define SHA_IER_TXBUFE_Pos                    _UINT32_(2)                                          /* (SHA_IER) Transmit Buffer Empty Interrupt Enable Position */
#define SHA_IER_TXBUFE_Msk                    (_UINT32_(0x1) << SHA_IER_TXBUFE_Pos)                /* (SHA_IER) Transmit Buffer Empty Interrupt Enable Mask */
#define SHA_IER_TXBUFE(value)                 (SHA_IER_TXBUFE_Msk & (_UINT32_(value) << SHA_IER_TXBUFE_Pos)) /* Assigment of value for TXBUFE in the SHA_IER register */
#define SHA_IER_URAD_Pos                      _UINT32_(8)                                          /* (SHA_IER) Unspecified Register Access Detection Interrupt Enable Position */
#define SHA_IER_URAD_Msk                      (_UINT32_(0x1) << SHA_IER_URAD_Pos)                  /* (SHA_IER) Unspecified Register Access Detection Interrupt Enable Mask */
#define SHA_IER_URAD(value)                   (SHA_IER_URAD_Msk & (_UINT32_(value) << SHA_IER_URAD_Pos)) /* Assigment of value for URAD in the SHA_IER register */
#define SHA_IER_CHECKF_Pos                    _UINT32_(16)                                         /* (SHA_IER) Check Done Interrupt Enable Position */
#define SHA_IER_CHECKF_Msk                    (_UINT32_(0x1) << SHA_IER_CHECKF_Pos)                /* (SHA_IER) Check Done Interrupt Enable Mask */
#define SHA_IER_CHECKF(value)                 (SHA_IER_CHECKF_Msk & (_UINT32_(value) << SHA_IER_CHECKF_Pos)) /* Assigment of value for CHECKF in the SHA_IER register */
#define SHA_IER_SECE_Pos                      _UINT32_(24)                                         /* (SHA_IER) Security and/or Safety Event Interrupt Enable Position */
#define SHA_IER_SECE_Msk                      (_UINT32_(0x1) << SHA_IER_SECE_Pos)                  /* (SHA_IER) Security and/or Safety Event Interrupt Enable Mask */
#define SHA_IER_SECE(value)                   (SHA_IER_SECE_Msk & (_UINT32_(value) << SHA_IER_SECE_Pos)) /* Assigment of value for SECE in the SHA_IER register */
#define SHA_IER_Msk                           _UINT32_(0x01010107)                                 /* (SHA_IER) Register Mask  */


/* -------- SHA_IDR : (SHA Offset: 0x14) ( /W 32) Interrupt Disable Register -------- */
#define SHA_IDR_DATRDY_Pos                    _UINT32_(0)                                          /* (SHA_IDR) Data Ready Interrupt Disable Position */
#define SHA_IDR_DATRDY_Msk                    (_UINT32_(0x1) << SHA_IDR_DATRDY_Pos)                /* (SHA_IDR) Data Ready Interrupt Disable Mask */
#define SHA_IDR_DATRDY(value)                 (SHA_IDR_DATRDY_Msk & (_UINT32_(value) << SHA_IDR_DATRDY_Pos)) /* Assigment of value for DATRDY in the SHA_IDR register */
#define SHA_IDR_ENDTX_Pos                     _UINT32_(1)                                          /* (SHA_IDR) End of Transmit Buffer Interrupt Disable Position */
#define SHA_IDR_ENDTX_Msk                     (_UINT32_(0x1) << SHA_IDR_ENDTX_Pos)                 /* (SHA_IDR) End of Transmit Buffer Interrupt Disable Mask */
#define SHA_IDR_ENDTX(value)                  (SHA_IDR_ENDTX_Msk & (_UINT32_(value) << SHA_IDR_ENDTX_Pos)) /* Assigment of value for ENDTX in the SHA_IDR register */
#define SHA_IDR_TXBUFE_Pos                    _UINT32_(2)                                          /* (SHA_IDR) Transmit Buffer Empty Interrupt Disable Position */
#define SHA_IDR_TXBUFE_Msk                    (_UINT32_(0x1) << SHA_IDR_TXBUFE_Pos)                /* (SHA_IDR) Transmit Buffer Empty Interrupt Disable Mask */
#define SHA_IDR_TXBUFE(value)                 (SHA_IDR_TXBUFE_Msk & (_UINT32_(value) << SHA_IDR_TXBUFE_Pos)) /* Assigment of value for TXBUFE in the SHA_IDR register */
#define SHA_IDR_URAD_Pos                      _UINT32_(8)                                          /* (SHA_IDR) Unspecified Register Access Detection Interrupt Disable Position */
#define SHA_IDR_URAD_Msk                      (_UINT32_(0x1) << SHA_IDR_URAD_Pos)                  /* (SHA_IDR) Unspecified Register Access Detection Interrupt Disable Mask */
#define SHA_IDR_URAD(value)                   (SHA_IDR_URAD_Msk & (_UINT32_(value) << SHA_IDR_URAD_Pos)) /* Assigment of value for URAD in the SHA_IDR register */
#define SHA_IDR_CHECKF_Pos                    _UINT32_(16)                                         /* (SHA_IDR) Check Done Interrupt Disable Position */
#define SHA_IDR_CHECKF_Msk                    (_UINT32_(0x1) << SHA_IDR_CHECKF_Pos)                /* (SHA_IDR) Check Done Interrupt Disable Mask */
#define SHA_IDR_CHECKF(value)                 (SHA_IDR_CHECKF_Msk & (_UINT32_(value) << SHA_IDR_CHECKF_Pos)) /* Assigment of value for CHECKF in the SHA_IDR register */
#define SHA_IDR_SECE_Pos                      _UINT32_(24)                                         /* (SHA_IDR) Security and/or Safety Event Interrupt Disable Position */
#define SHA_IDR_SECE_Msk                      (_UINT32_(0x1) << SHA_IDR_SECE_Pos)                  /* (SHA_IDR) Security and/or Safety Event Interrupt Disable Mask */
#define SHA_IDR_SECE(value)                   (SHA_IDR_SECE_Msk & (_UINT32_(value) << SHA_IDR_SECE_Pos)) /* Assigment of value for SECE in the SHA_IDR register */
#define SHA_IDR_Msk                           _UINT32_(0x01010107)                                 /* (SHA_IDR) Register Mask  */


/* -------- SHA_IMR : (SHA Offset: 0x18) ( R/ 32) Interrupt Mask Register -------- */
#define SHA_IMR_DATRDY_Pos                    _UINT32_(0)                                          /* (SHA_IMR) Data Ready Interrupt Mask Position */
#define SHA_IMR_DATRDY_Msk                    (_UINT32_(0x1) << SHA_IMR_DATRDY_Pos)                /* (SHA_IMR) Data Ready Interrupt Mask Mask */
#define SHA_IMR_DATRDY(value)                 (SHA_IMR_DATRDY_Msk & (_UINT32_(value) << SHA_IMR_DATRDY_Pos)) /* Assigment of value for DATRDY in the SHA_IMR register */
#define SHA_IMR_ENDTX_Pos                     _UINT32_(1)                                          /* (SHA_IMR) End of Transmit Buffer Interrupt Mask Position */
#define SHA_IMR_ENDTX_Msk                     (_UINT32_(0x1) << SHA_IMR_ENDTX_Pos)                 /* (SHA_IMR) End of Transmit Buffer Interrupt Mask Mask */
#define SHA_IMR_ENDTX(value)                  (SHA_IMR_ENDTX_Msk & (_UINT32_(value) << SHA_IMR_ENDTX_Pos)) /* Assigment of value for ENDTX in the SHA_IMR register */
#define SHA_IMR_TXBUFE_Pos                    _UINT32_(2)                                          /* (SHA_IMR) Transmit Buffer Empty Interrupt Mask Position */
#define SHA_IMR_TXBUFE_Msk                    (_UINT32_(0x1) << SHA_IMR_TXBUFE_Pos)                /* (SHA_IMR) Transmit Buffer Empty Interrupt Mask Mask */
#define SHA_IMR_TXBUFE(value)                 (SHA_IMR_TXBUFE_Msk & (_UINT32_(value) << SHA_IMR_TXBUFE_Pos)) /* Assigment of value for TXBUFE in the SHA_IMR register */
#define SHA_IMR_URAD_Pos                      _UINT32_(8)                                          /* (SHA_IMR) Unspecified Register Access Detection Interrupt Mask Position */
#define SHA_IMR_URAD_Msk                      (_UINT32_(0x1) << SHA_IMR_URAD_Pos)                  /* (SHA_IMR) Unspecified Register Access Detection Interrupt Mask Mask */
#define SHA_IMR_URAD(value)                   (SHA_IMR_URAD_Msk & (_UINT32_(value) << SHA_IMR_URAD_Pos)) /* Assigment of value for URAD in the SHA_IMR register */
#define SHA_IMR_CHECKF_Pos                    _UINT32_(16)                                         /* (SHA_IMR) Check Done Interrupt Mask Position */
#define SHA_IMR_CHECKF_Msk                    (_UINT32_(0x1) << SHA_IMR_CHECKF_Pos)                /* (SHA_IMR) Check Done Interrupt Mask Mask */
#define SHA_IMR_CHECKF(value)                 (SHA_IMR_CHECKF_Msk & (_UINT32_(value) << SHA_IMR_CHECKF_Pos)) /* Assigment of value for CHECKF in the SHA_IMR register */
#define SHA_IMR_SECE_Pos                      _UINT32_(24)                                         /* (SHA_IMR) Security and/or Safety Event Interrupt Mask Position */
#define SHA_IMR_SECE_Msk                      (_UINT32_(0x1) << SHA_IMR_SECE_Pos)                  /* (SHA_IMR) Security and/or Safety Event Interrupt Mask Mask */
#define SHA_IMR_SECE(value)                   (SHA_IMR_SECE_Msk & (_UINT32_(value) << SHA_IMR_SECE_Pos)) /* Assigment of value for SECE in the SHA_IMR register */
#define SHA_IMR_Msk                           _UINT32_(0x01010107)                                 /* (SHA_IMR) Register Mask  */


/* -------- SHA_ISR : (SHA Offset: 0x1C) ( R/ 32) Interrupt Status Register -------- */
#define SHA_ISR_DATRDY_Pos                    _UINT32_(0)                                          /* (SHA_ISR) Data Ready (cleared by writing a 1 to bit SWRST or START in SHA_CR, or by reading SHA_IODATARx) Position */
#define SHA_ISR_DATRDY_Msk                    (_UINT32_(0x1) << SHA_ISR_DATRDY_Pos)                /* (SHA_ISR) Data Ready (cleared by writing a 1 to bit SWRST or START in SHA_CR, or by reading SHA_IODATARx) Mask */
#define SHA_ISR_DATRDY(value)                 (SHA_ISR_DATRDY_Msk & (_UINT32_(value) << SHA_ISR_DATRDY_Pos)) /* Assigment of value for DATRDY in the SHA_ISR register */
#define SHA_ISR_ENDTX_Pos                     _UINT32_(1)                                          /* (SHA_ISR) End of TX Buffer (cleared by writing SHA_TCR or SHA_TNCR) Position */
#define SHA_ISR_ENDTX_Msk                     (_UINT32_(0x1) << SHA_ISR_ENDTX_Pos)                 /* (SHA_ISR) End of TX Buffer (cleared by writing SHA_TCR or SHA_TNCR) Mask */
#define SHA_ISR_ENDTX(value)                  (SHA_ISR_ENDTX_Msk & (_UINT32_(value) << SHA_ISR_ENDTX_Pos)) /* Assigment of value for ENDTX in the SHA_ISR register */
#define SHA_ISR_TXBUFE_Pos                    _UINT32_(2)                                          /* (SHA_ISR) TX Buffer Empty (cleared by writing SHA_TCR or SHA_TNCR) Position */
#define SHA_ISR_TXBUFE_Msk                    (_UINT32_(0x1) << SHA_ISR_TXBUFE_Pos)                /* (SHA_ISR) TX Buffer Empty (cleared by writing SHA_TCR or SHA_TNCR) Mask */
#define SHA_ISR_TXBUFE(value)                 (SHA_ISR_TXBUFE_Msk & (_UINT32_(value) << SHA_ISR_TXBUFE_Pos)) /* Assigment of value for TXBUFE in the SHA_ISR register */
#define SHA_ISR_WRDY_Pos                      _UINT32_(4)                                          /* (SHA_ISR) Input Data Register Write Ready Position */
#define SHA_ISR_WRDY_Msk                      (_UINT32_(0x1) << SHA_ISR_WRDY_Pos)                  /* (SHA_ISR) Input Data Register Write Ready Mask */
#define SHA_ISR_WRDY(value)                   (SHA_ISR_WRDY_Msk & (_UINT32_(value) << SHA_ISR_WRDY_Pos)) /* Assigment of value for WRDY in the SHA_ISR register */
#define SHA_ISR_URAD_Pos                      _UINT32_(8)                                          /* (SHA_ISR) Unspecified Register Access Detection Status (cleared by writing a 1 to SWRST bit in SHA_CR) Position */
#define SHA_ISR_URAD_Msk                      (_UINT32_(0x1) << SHA_ISR_URAD_Pos)                  /* (SHA_ISR) Unspecified Register Access Detection Status (cleared by writing a 1 to SWRST bit in SHA_CR) Mask */
#define SHA_ISR_URAD(value)                   (SHA_ISR_URAD_Msk & (_UINT32_(value) << SHA_ISR_URAD_Pos)) /* Assigment of value for URAD in the SHA_ISR register */
#define SHA_ISR_URAT_Pos                      _UINT32_(12)                                         /* (SHA_ISR) Unspecified Register Access Type (cleared by writing a 1 to SWRST bit in SHA_CR) Position */
#define SHA_ISR_URAT_Msk                      (_UINT32_(0x7) << SHA_ISR_URAT_Pos)                  /* (SHA_ISR) Unspecified Register Access Type (cleared by writing a 1 to SWRST bit in SHA_CR) Mask */
#define SHA_ISR_URAT(value)                   (SHA_ISR_URAT_Msk & (_UINT32_(value) << SHA_ISR_URAT_Pos)) /* Assigment of value for URAT in the SHA_ISR register */
#define SHA_ISR_CHECKF_Pos                    _UINT32_(16)                                         /* (SHA_ISR) Check Done Status (cleared by writing START or SWRST bits in SHA_CR or by reading SHA_IODATARx) Position */
#define SHA_ISR_CHECKF_Msk                    (_UINT32_(0x1) << SHA_ISR_CHECKF_Pos)                /* (SHA_ISR) Check Done Status (cleared by writing START or SWRST bits in SHA_CR or by reading SHA_IODATARx) Mask */
#define SHA_ISR_CHECKF(value)                 (SHA_ISR_CHECKF_Msk & (_UINT32_(value) << SHA_ISR_CHECKF_Pos)) /* Assigment of value for CHECKF in the SHA_ISR register */
#define SHA_ISR_CHKST_Pos                     _UINT32_(20)                                         /* (SHA_ISR) Check Status (cleared by writing START or SWRST bits in SHA_CR or by reading SHA_IODATARx) Position */
#define SHA_ISR_CHKST_Msk                     (_UINT32_(0xF) << SHA_ISR_CHKST_Pos)                 /* (SHA_ISR) Check Status (cleared by writing START or SWRST bits in SHA_CR or by reading SHA_IODATARx) Mask */
#define SHA_ISR_CHKST(value)                  (SHA_ISR_CHKST_Msk & (_UINT32_(value) << SHA_ISR_CHKST_Pos)) /* Assigment of value for CHKST in the SHA_ISR register */
#define SHA_ISR_SECE_Pos                      _UINT32_(24)                                         /* (SHA_ISR) Security and/or Safety Event Position */
#define SHA_ISR_SECE_Msk                      (_UINT32_(0x1) << SHA_ISR_SECE_Pos)                  /* (SHA_ISR) Security and/or Safety Event Mask */
#define SHA_ISR_SECE(value)                   (SHA_ISR_SECE_Msk & (_UINT32_(value) << SHA_ISR_SECE_Pos)) /* Assigment of value for SECE in the SHA_ISR register */
#define SHA_ISR_Msk                           _UINT32_(0x01F17117)                                 /* (SHA_ISR) Register Mask  */


/* -------- SHA_MSR : (SHA Offset: 0x20) (R/W 32) Message Size Register -------- */
#define SHA_MSR_MSGSIZE_Pos                   _UINT32_(0)                                          /* (SHA_MSR) Message Size Position */
#define SHA_MSR_MSGSIZE_Msk                   (_UINT32_(0xFFFFFFFF) << SHA_MSR_MSGSIZE_Pos)        /* (SHA_MSR) Message Size Mask */
#define SHA_MSR_MSGSIZE(value)                (SHA_MSR_MSGSIZE_Msk & (_UINT32_(value) << SHA_MSR_MSGSIZE_Pos)) /* Assigment of value for MSGSIZE in the SHA_MSR register */
#define SHA_MSR_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (SHA_MSR) Register Mask  */


/* -------- SHA_BCR : (SHA Offset: 0x30) (R/W 32) Bytes Count Register -------- */
#define SHA_BCR_BYTCNT_Pos                    _UINT32_(0)                                          /* (SHA_BCR) Remaining Byte Count Before Auto Padding Position */
#define SHA_BCR_BYTCNT_Msk                    (_UINT32_(0xFFFFFFFF) << SHA_BCR_BYTCNT_Pos)         /* (SHA_BCR) Remaining Byte Count Before Auto Padding Mask */
#define SHA_BCR_BYTCNT(value)                 (SHA_BCR_BYTCNT_Msk & (_UINT32_(value) << SHA_BCR_BYTCNT_Pos)) /* Assigment of value for BYTCNT in the SHA_BCR register */
#define SHA_BCR_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (SHA_BCR) Register Mask  */


/* -------- SHA_IDATAR : (SHA Offset: 0x40) ( /W 32) Input Data 0 Register -------- */
#define SHA_IDATAR_IDATA_Pos                  _UINT32_(0)                                          /* (SHA_IDATAR) Input Data Position */
#define SHA_IDATAR_IDATA_Msk                  (_UINT32_(0xFFFFFFFF) << SHA_IDATAR_IDATA_Pos)       /* (SHA_IDATAR) Input Data Mask */
#define SHA_IDATAR_IDATA(value)               (SHA_IDATAR_IDATA_Msk & (_UINT32_(value) << SHA_IDATAR_IDATA_Pos)) /* Assigment of value for IDATA in the SHA_IDATAR register */
#define SHA_IDATAR_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (SHA_IDATAR) Register Mask  */


/* -------- SHA_IODATAR : (SHA Offset: 0x80) (R/W 32) Input/Output Data 0 Register -------- */
#define SHA_IODATAR_IODATA_Pos                _UINT32_(0)                                          /* (SHA_IODATAR) Input/Output Data Position */
#define SHA_IODATAR_IODATA_Msk                (_UINT32_(0xFFFFFFFF) << SHA_IODATAR_IODATA_Pos)     /* (SHA_IODATAR) Input/Output Data Mask */
#define SHA_IODATAR_IODATA(value)             (SHA_IODATAR_IODATA_Msk & (_UINT32_(value) << SHA_IODATAR_IODATA_Pos)) /* Assigment of value for IODATA in the SHA_IODATAR register */
#define SHA_IODATAR_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (SHA_IODATAR) Register Mask  */


/* -------- SHA_WPMR : (SHA Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define SHA_WPMR_WPEN_Pos                     _UINT32_(0)                                          /* (SHA_WPMR) Write Protection Configuration Enable Position */
#define SHA_WPMR_WPEN_Msk                     (_UINT32_(0x1) << SHA_WPMR_WPEN_Pos)                 /* (SHA_WPMR) Write Protection Configuration Enable Mask */
#define SHA_WPMR_WPEN(value)                  (SHA_WPMR_WPEN_Msk & (_UINT32_(value) << SHA_WPMR_WPEN_Pos)) /* Assigment of value for WPEN in the SHA_WPMR register */
#define SHA_WPMR_WPITEN_Pos                   _UINT32_(1)                                          /* (SHA_WPMR) Write Protection Interruption Enable Position */
#define SHA_WPMR_WPITEN_Msk                   (_UINT32_(0x1) << SHA_WPMR_WPITEN_Pos)               /* (SHA_WPMR) Write Protection Interruption Enable Mask */
#define SHA_WPMR_WPITEN(value)                (SHA_WPMR_WPITEN_Msk & (_UINT32_(value) << SHA_WPMR_WPITEN_Pos)) /* Assigment of value for WPITEN in the SHA_WPMR register */
#define SHA_WPMR_WPCREN_Pos                   _UINT32_(2)                                          /* (SHA_WPMR) Write Protection Control Enable Position */
#define SHA_WPMR_WPCREN_Msk                   (_UINT32_(0x1) << SHA_WPMR_WPCREN_Pos)               /* (SHA_WPMR) Write Protection Control Enable Mask */
#define SHA_WPMR_WPCREN(value)                (SHA_WPMR_WPCREN_Msk & (_UINT32_(value) << SHA_WPMR_WPCREN_Pos)) /* Assigment of value for WPCREN in the SHA_WPMR register */
#define SHA_WPMR_FIRSTE_Pos                   _UINT32_(4)                                          /* (SHA_WPMR) First Error Report Enable Position */
#define SHA_WPMR_FIRSTE_Msk                   (_UINT32_(0x1) << SHA_WPMR_FIRSTE_Pos)               /* (SHA_WPMR) First Error Report Enable Mask */
#define SHA_WPMR_FIRSTE(value)                (SHA_WPMR_FIRSTE_Msk & (_UINT32_(value) << SHA_WPMR_FIRSTE_Pos)) /* Assigment of value for FIRSTE in the SHA_WPMR register */
#define SHA_WPMR_ACTION_Pos                   _UINT32_(5)                                          /* (SHA_WPMR) Action on Abnormal Event Detection Position */
#define SHA_WPMR_ACTION_Msk                   (_UINT32_(0x3) << SHA_WPMR_ACTION_Pos)               /* (SHA_WPMR) Action on Abnormal Event Detection Mask */
#define SHA_WPMR_ACTION(value)                (SHA_WPMR_ACTION_Msk & (_UINT32_(value) << SHA_WPMR_ACTION_Pos)) /* Assigment of value for ACTION in the SHA_WPMR register */
#define   SHA_WPMR_ACTION_REPORT_ONLY_Val     _UINT32_(0x0)                                        /* (SHA_WPMR) No action (stop or clear key) is performed when one of WPVS,CGD,SEQE, or SWE flag is set.  */
#define   SHA_WPMR_ACTION_LOCK_WPVS_SWE_Val   _UINT32_(0x1)                                        /* (SHA_WPMR) If a processing is in progress when the SHA_WPSR.WPVS/SWE event detection occurs, the current processing is ended normally but no other processing is started while a SHA_CR.UNLOCK command is issued.  */
#define   SHA_WPMR_ACTION_LOCK_CGD_SEQE_Val   _UINT32_(0x2)                                        /* (SHA_WPMR) If a processing is in progress when the SHA_WPSR.CGD/SEQE event detection occurs, the current processing is ended normally but no other processing is started while a SHA_CR.UNLOCK command is issued.  */
#define   SHA_WPMR_ACTION_LOCK_ANY_EV_Val     _UINT32_(0x3)                                        /* (SHA_WPMR) If a processing is in progress when the SHA_WPSR.WPVS/CGD/SEQE/SWE events detection occurs, the current processing is ended normally but no other processing is started while a SHA_CR.UNLOCK command is issued.  */
#define SHA_WPMR_ACTION_REPORT_ONLY           (SHA_WPMR_ACTION_REPORT_ONLY_Val << SHA_WPMR_ACTION_Pos) /* (SHA_WPMR) No action (stop or clear key) is performed when one of WPVS,CGD,SEQE, or SWE flag is set. Position  */
#define SHA_WPMR_ACTION_LOCK_WPVS_SWE         (SHA_WPMR_ACTION_LOCK_WPVS_SWE_Val << SHA_WPMR_ACTION_Pos) /* (SHA_WPMR) If a processing is in progress when the SHA_WPSR.WPVS/SWE event detection occurs, the current processing is ended normally but no other processing is started while a SHA_CR.UNLOCK command is issued. Position  */
#define SHA_WPMR_ACTION_LOCK_CGD_SEQE         (SHA_WPMR_ACTION_LOCK_CGD_SEQE_Val << SHA_WPMR_ACTION_Pos) /* (SHA_WPMR) If a processing is in progress when the SHA_WPSR.CGD/SEQE event detection occurs, the current processing is ended normally but no other processing is started while a SHA_CR.UNLOCK command is issued. Position  */
#define SHA_WPMR_ACTION_LOCK_ANY_EV           (SHA_WPMR_ACTION_LOCK_ANY_EV_Val << SHA_WPMR_ACTION_Pos) /* (SHA_WPMR) If a processing is in progress when the SHA_WPSR.WPVS/CGD/SEQE/SWE events detection occurs, the current processing is ended normally but no other processing is started while a SHA_CR.UNLOCK command is issued. Position  */
#define SHA_WPMR_WPKEY_Pos                    _UINT32_(8)                                          /* (SHA_WPMR) Write Protection Key Position */
#define SHA_WPMR_WPKEY_Msk                    (_UINT32_(0xFFFFFF) << SHA_WPMR_WPKEY_Pos)           /* (SHA_WPMR) Write Protection Key Mask */
#define SHA_WPMR_WPKEY(value)                 (SHA_WPMR_WPKEY_Msk & (_UINT32_(value) << SHA_WPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the SHA_WPMR register */
#define   SHA_WPMR_WPKEY_PASSWD_Val           _UINT32_(0x534841)                                   /* (SHA_WPMR) Writing any other value in this field aborts the write operation of the WPEN,WPITEN,WPCREN bits. Always reads as 0.  */
#define SHA_WPMR_WPKEY_PASSWD                 (SHA_WPMR_WPKEY_PASSWD_Val << SHA_WPMR_WPKEY_Pos)    /* (SHA_WPMR) Writing any other value in this field aborts the write operation of the WPEN,WPITEN,WPCREN bits. Always reads as 0. Position  */
#define SHA_WPMR_Msk                          _UINT32_(0xFFFFFF77)                                 /* (SHA_WPMR) Register Mask  */


/* -------- SHA_WPSR : (SHA Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define SHA_WPSR_WPVS_Pos                     _UINT32_(0)                                          /* (SHA_WPSR) Write Protection Violation Status (cleared on read) Position */
#define SHA_WPSR_WPVS_Msk                     (_UINT32_(0x1) << SHA_WPSR_WPVS_Pos)                 /* (SHA_WPSR) Write Protection Violation Status (cleared on read) Mask */
#define SHA_WPSR_WPVS(value)                  (SHA_WPSR_WPVS_Msk & (_UINT32_(value) << SHA_WPSR_WPVS_Pos)) /* Assigment of value for WPVS in the SHA_WPSR register */
#define SHA_WPSR_CGD_Pos                      _UINT32_(1)                                          /* (SHA_WPSR) Clock Glitch Detected (cleared on read) Position */
#define SHA_WPSR_CGD_Msk                      (_UINT32_(0x1) << SHA_WPSR_CGD_Pos)                  /* (SHA_WPSR) Clock Glitch Detected (cleared on read) Mask */
#define SHA_WPSR_CGD(value)                   (SHA_WPSR_CGD_Msk & (_UINT32_(value) << SHA_WPSR_CGD_Pos)) /* Assigment of value for CGD in the SHA_WPSR register */
#define SHA_WPSR_SEQE_Pos                     _UINT32_(2)                                          /* (SHA_WPSR) Internal Sequencer Error (cleared on read) Position */
#define SHA_WPSR_SEQE_Msk                     (_UINT32_(0x1) << SHA_WPSR_SEQE_Pos)                 /* (SHA_WPSR) Internal Sequencer Error (cleared on read) Mask */
#define SHA_WPSR_SEQE(value)                  (SHA_WPSR_SEQE_Msk & (_UINT32_(value) << SHA_WPSR_SEQE_Pos)) /* Assigment of value for SEQE in the SHA_WPSR register */
#define SHA_WPSR_SWE_Pos                      _UINT32_(3)                                          /* (SHA_WPSR) Software Control Error (cleared on read) Position */
#define SHA_WPSR_SWE_Msk                      (_UINT32_(0x1) << SHA_WPSR_SWE_Pos)                  /* (SHA_WPSR) Software Control Error (cleared on read) Mask */
#define SHA_WPSR_SWE(value)                   (SHA_WPSR_SWE_Msk & (_UINT32_(value) << SHA_WPSR_SWE_Pos)) /* Assigment of value for SWE in the SHA_WPSR register */
#define SHA_WPSR_WPVSRC_Pos                   _UINT32_(8)                                          /* (SHA_WPSR) Write Protection Violation Source Position */
#define SHA_WPSR_WPVSRC_Msk                   (_UINT32_(0xFF) << SHA_WPSR_WPVSRC_Pos)              /* (SHA_WPSR) Write Protection Violation Source Mask */
#define SHA_WPSR_WPVSRC(value)                (SHA_WPSR_WPVSRC_Msk & (_UINT32_(value) << SHA_WPSR_WPVSRC_Pos)) /* Assigment of value for WPVSRC in the SHA_WPSR register */
#define SHA_WPSR_SWETYP_Pos                   _UINT32_(24)                                         /* (SHA_WPSR) Software Error Type (cleared on read) Position */
#define SHA_WPSR_SWETYP_Msk                   (_UINT32_(0xF) << SHA_WPSR_SWETYP_Pos)               /* (SHA_WPSR) Software Error Type (cleared on read) Mask */
#define SHA_WPSR_SWETYP(value)                (SHA_WPSR_SWETYP_Msk & (_UINT32_(value) << SHA_WPSR_SWETYP_Pos)) /* Assigment of value for SWETYP in the SHA_WPSR register */
#define   SHA_WPSR_SWETYP_READ_WO_Val         _UINT32_(0x0)                                        /* (SHA_WPSR) A write-only register has been read (Warning).  */
#define   SHA_WPSR_SWETYP_WRITE_RO_Val        _UINT32_(0x1)                                        /* (SHA_WPSR) SHA is enabled and a write access has been performed on a read-only register (Warning).  */
#define   SHA_WPSR_SWETYP_UNDEF_RW_Val        _UINT32_(0x2)                                        /* (SHA_WPSR) Access to an undefined address (Warning).  */
#define   SHA_WPSR_SWETYP_CTRL_START_Val      _UINT32_(0x3)                                        /* (SHA_WPSR) SHA is locked and a start command with SHA_CR.START has been performed.  */
#define   SHA_WPSR_SWETYP_AUTO_START_Val      _UINT32_(0x4)                                        /* (SHA_WPSR) SHA is locked and a tentative automatic start has been performed by writing input data registers (SHA_MR.SMOD>0).  */
#define   SHA_WPSR_SWETYP_BAD_START_Val       _UINT32_(0x5)                                        /* (SHA_WPSR) SHA is not locked and a start command with SHA_CR.START has been performed whereas Start mode is automatic (SHA_MR.SMOD>0)  */
#define SHA_WPSR_SWETYP_READ_WO               (SHA_WPSR_SWETYP_READ_WO_Val << SHA_WPSR_SWETYP_Pos) /* (SHA_WPSR) A write-only register has been read (Warning). Position  */
#define SHA_WPSR_SWETYP_WRITE_RO              (SHA_WPSR_SWETYP_WRITE_RO_Val << SHA_WPSR_SWETYP_Pos) /* (SHA_WPSR) SHA is enabled and a write access has been performed on a read-only register (Warning). Position  */
#define SHA_WPSR_SWETYP_UNDEF_RW              (SHA_WPSR_SWETYP_UNDEF_RW_Val << SHA_WPSR_SWETYP_Pos) /* (SHA_WPSR) Access to an undefined address (Warning). Position  */
#define SHA_WPSR_SWETYP_CTRL_START            (SHA_WPSR_SWETYP_CTRL_START_Val << SHA_WPSR_SWETYP_Pos) /* (SHA_WPSR) SHA is locked and a start command with SHA_CR.START has been performed. Position  */
#define SHA_WPSR_SWETYP_AUTO_START            (SHA_WPSR_SWETYP_AUTO_START_Val << SHA_WPSR_SWETYP_Pos) /* (SHA_WPSR) SHA is locked and a tentative automatic start has been performed by writing input data registers (SHA_MR.SMOD>0). Position  */
#define SHA_WPSR_SWETYP_BAD_START             (SHA_WPSR_SWETYP_BAD_START_Val << SHA_WPSR_SWETYP_Pos) /* (SHA_WPSR) SHA is not locked and a start command with SHA_CR.START has been performed whereas Start mode is automatic (SHA_MR.SMOD>0) Position  */
#define SHA_WPSR_ECLASS_Pos                   _UINT32_(31)                                         /* (SHA_WPSR) Software Error Class (cleared on read) Position */
#define SHA_WPSR_ECLASS_Msk                   (_UINT32_(0x1) << SHA_WPSR_ECLASS_Pos)               /* (SHA_WPSR) Software Error Class (cleared on read) Mask */
#define SHA_WPSR_ECLASS(value)                (SHA_WPSR_ECLASS_Msk & (_UINT32_(value) << SHA_WPSR_ECLASS_Pos)) /* Assigment of value for ECLASS in the SHA_WPSR register */
#define   SHA_WPSR_ECLASS_WARNING_Val         _UINT32_(0x0)                                        /* (SHA_WPSR) An abnormal access that does not affect system functionality  */
#define   SHA_WPSR_ECLASS_ERROR_Val           _UINT32_(0x1)                                        /* (SHA_WPSR) An access is performed into key, input data, control registers while the SHA is performing an encryption/decryption or a start is request by software or DMA while the key is not fully configured.  */
#define SHA_WPSR_ECLASS_WARNING               (SHA_WPSR_ECLASS_WARNING_Val << SHA_WPSR_ECLASS_Pos) /* (SHA_WPSR) An abnormal access that does not affect system functionality Position  */
#define SHA_WPSR_ECLASS_ERROR                 (SHA_WPSR_ECLASS_ERROR_Val << SHA_WPSR_ECLASS_Pos)   /* (SHA_WPSR) An access is performed into key, input data, control registers while the SHA is performing an encryption/decryption or a start is request by software or DMA while the key is not fully configured. Position  */
#define SHA_WPSR_Msk                          _UINT32_(0x8F00FF0F)                                 /* (SHA_WPSR) Register Mask  */


/* -------- SHA_TPR : (SHA Offset: 0x108) (R/W 32) Transmit Pointer Register -------- */
#define SHA_TPR_TXPTR_Pos                     _UINT32_(0)                                          /* (SHA_TPR) Transmit Counter Register Position */
#define SHA_TPR_TXPTR_Msk                     (_UINT32_(0xFFFFFFFF) << SHA_TPR_TXPTR_Pos)          /* (SHA_TPR) Transmit Counter Register Mask */
#define SHA_TPR_TXPTR(value)                  (SHA_TPR_TXPTR_Msk & (_UINT32_(value) << SHA_TPR_TXPTR_Pos)) /* Assigment of value for TXPTR in the SHA_TPR register */
#define SHA_TPR_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (SHA_TPR) Register Mask  */


/* -------- SHA_TCR : (SHA Offset: 0x10C) (R/W 32) Transmit Counter Register -------- */
#define SHA_TCR_TXCTR_Pos                     _UINT32_(0)                                          /* (SHA_TCR) Transmit Counter Register Position */
#define SHA_TCR_TXCTR_Msk                     (_UINT32_(0xFFFF) << SHA_TCR_TXCTR_Pos)              /* (SHA_TCR) Transmit Counter Register Mask */
#define SHA_TCR_TXCTR(value)                  (SHA_TCR_TXCTR_Msk & (_UINT32_(value) << SHA_TCR_TXCTR_Pos)) /* Assigment of value for TXCTR in the SHA_TCR register */
#define SHA_TCR_Msk                           _UINT32_(0x0000FFFF)                                 /* (SHA_TCR) Register Mask  */


/* -------- SHA_TNPR : (SHA Offset: 0x118) (R/W 32) Transmit Next Pointer Register -------- */
#define SHA_TNPR_TXNPTR_Pos                   _UINT32_(0)                                          /* (SHA_TNPR) Transmit Next Pointer Position */
#define SHA_TNPR_TXNPTR_Msk                   (_UINT32_(0xFFFFFFFF) << SHA_TNPR_TXNPTR_Pos)        /* (SHA_TNPR) Transmit Next Pointer Mask */
#define SHA_TNPR_TXNPTR(value)                (SHA_TNPR_TXNPTR_Msk & (_UINT32_(value) << SHA_TNPR_TXNPTR_Pos)) /* Assigment of value for TXNPTR in the SHA_TNPR register */
#define SHA_TNPR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (SHA_TNPR) Register Mask  */


/* -------- SHA_TNCR : (SHA Offset: 0x11C) (R/W 32) Transmit Next Counter Register -------- */
#define SHA_TNCR_TXNCTR_Pos                   _UINT32_(0)                                          /* (SHA_TNCR) Transmit Counter Next Position */
#define SHA_TNCR_TXNCTR_Msk                   (_UINT32_(0xFFFF) << SHA_TNCR_TXNCTR_Pos)            /* (SHA_TNCR) Transmit Counter Next Mask */
#define SHA_TNCR_TXNCTR(value)                (SHA_TNCR_TXNCTR_Msk & (_UINT32_(value) << SHA_TNCR_TXNCTR_Pos)) /* Assigment of value for TXNCTR in the SHA_TNCR register */
#define SHA_TNCR_Msk                          _UINT32_(0x0000FFFF)                                 /* (SHA_TNCR) Register Mask  */


/* -------- SHA_PTCR : (SHA Offset: 0x120) ( /W 32) Transfer Control Register -------- */
#define SHA_PTCR_RXTEN_Pos                    _UINT32_(0)                                          /* (SHA_PTCR) Receiver Transfer Enable Position */
#define SHA_PTCR_RXTEN_Msk                    (_UINT32_(0x1) << SHA_PTCR_RXTEN_Pos)                /* (SHA_PTCR) Receiver Transfer Enable Mask */
#define SHA_PTCR_RXTEN(value)                 (SHA_PTCR_RXTEN_Msk & (_UINT32_(value) << SHA_PTCR_RXTEN_Pos)) /* Assigment of value for RXTEN in the SHA_PTCR register */
#define SHA_PTCR_RXTDIS_Pos                   _UINT32_(1)                                          /* (SHA_PTCR) Receiver Transfer Disable Position */
#define SHA_PTCR_RXTDIS_Msk                   (_UINT32_(0x1) << SHA_PTCR_RXTDIS_Pos)               /* (SHA_PTCR) Receiver Transfer Disable Mask */
#define SHA_PTCR_RXTDIS(value)                (SHA_PTCR_RXTDIS_Msk & (_UINT32_(value) << SHA_PTCR_RXTDIS_Pos)) /* Assigment of value for RXTDIS in the SHA_PTCR register */
#define SHA_PTCR_TXTEN_Pos                    _UINT32_(8)                                          /* (SHA_PTCR) Transmitter Transfer Enable Position */
#define SHA_PTCR_TXTEN_Msk                    (_UINT32_(0x1) << SHA_PTCR_TXTEN_Pos)                /* (SHA_PTCR) Transmitter Transfer Enable Mask */
#define SHA_PTCR_TXTEN(value)                 (SHA_PTCR_TXTEN_Msk & (_UINT32_(value) << SHA_PTCR_TXTEN_Pos)) /* Assigment of value for TXTEN in the SHA_PTCR register */
#define SHA_PTCR_TXTDIS_Pos                   _UINT32_(9)                                          /* (SHA_PTCR) Transmitter Transfer Disable Position */
#define SHA_PTCR_TXTDIS_Msk                   (_UINT32_(0x1) << SHA_PTCR_TXTDIS_Pos)               /* (SHA_PTCR) Transmitter Transfer Disable Mask */
#define SHA_PTCR_TXTDIS(value)                (SHA_PTCR_TXTDIS_Msk & (_UINT32_(value) << SHA_PTCR_TXTDIS_Pos)) /* Assigment of value for TXTDIS in the SHA_PTCR register */
#define SHA_PTCR_RXCBEN_Pos                   _UINT32_(16)                                         /* (SHA_PTCR) Receiver Circular Buffer Enable Position */
#define SHA_PTCR_RXCBEN_Msk                   (_UINT32_(0x1) << SHA_PTCR_RXCBEN_Pos)               /* (SHA_PTCR) Receiver Circular Buffer Enable Mask */
#define SHA_PTCR_RXCBEN(value)                (SHA_PTCR_RXCBEN_Msk & (_UINT32_(value) << SHA_PTCR_RXCBEN_Pos)) /* Assigment of value for RXCBEN in the SHA_PTCR register */
#define SHA_PTCR_RXCBDIS_Pos                  _UINT32_(17)                                         /* (SHA_PTCR) Receiver Circular Buffer Disable Position */
#define SHA_PTCR_RXCBDIS_Msk                  (_UINT32_(0x1) << SHA_PTCR_RXCBDIS_Pos)              /* (SHA_PTCR) Receiver Circular Buffer Disable Mask */
#define SHA_PTCR_RXCBDIS(value)               (SHA_PTCR_RXCBDIS_Msk & (_UINT32_(value) << SHA_PTCR_RXCBDIS_Pos)) /* Assigment of value for RXCBDIS in the SHA_PTCR register */
#define SHA_PTCR_TXCBEN_Pos                   _UINT32_(18)                                         /* (SHA_PTCR) Transmitter Circular Buffer Enable Position */
#define SHA_PTCR_TXCBEN_Msk                   (_UINT32_(0x1) << SHA_PTCR_TXCBEN_Pos)               /* (SHA_PTCR) Transmitter Circular Buffer Enable Mask */
#define SHA_PTCR_TXCBEN(value)                (SHA_PTCR_TXCBEN_Msk & (_UINT32_(value) << SHA_PTCR_TXCBEN_Pos)) /* Assigment of value for TXCBEN in the SHA_PTCR register */
#define SHA_PTCR_TXCBDIS_Pos                  _UINT32_(19)                                         /* (SHA_PTCR) Transmitter Circular Buffer Disable Position */
#define SHA_PTCR_TXCBDIS_Msk                  (_UINT32_(0x1) << SHA_PTCR_TXCBDIS_Pos)              /* (SHA_PTCR) Transmitter Circular Buffer Disable Mask */
#define SHA_PTCR_TXCBDIS(value)               (SHA_PTCR_TXCBDIS_Msk & (_UINT32_(value) << SHA_PTCR_TXCBDIS_Pos)) /* Assigment of value for TXCBDIS in the SHA_PTCR register */
#define SHA_PTCR_ERRCLR_Pos                   _UINT32_(24)                                         /* (SHA_PTCR) Transfer Bus Error Clear Position */
#define SHA_PTCR_ERRCLR_Msk                   (_UINT32_(0x1) << SHA_PTCR_ERRCLR_Pos)               /* (SHA_PTCR) Transfer Bus Error Clear Mask */
#define SHA_PTCR_ERRCLR(value)                (SHA_PTCR_ERRCLR_Msk & (_UINT32_(value) << SHA_PTCR_ERRCLR_Pos)) /* Assigment of value for ERRCLR in the SHA_PTCR register */
#define SHA_PTCR_Msk                          _UINT32_(0x010F0303)                                 /* (SHA_PTCR) Register Mask  */


/* -------- SHA_PTSR : (SHA Offset: 0x124) ( R/ 32) Transfer Status Register -------- */
#define SHA_PTSR_RXTEN_Pos                    _UINT32_(0)                                          /* (SHA_PTSR) Receiver Transfer Enable Position */
#define SHA_PTSR_RXTEN_Msk                    (_UINT32_(0x1) << SHA_PTSR_RXTEN_Pos)                /* (SHA_PTSR) Receiver Transfer Enable Mask */
#define SHA_PTSR_RXTEN(value)                 (SHA_PTSR_RXTEN_Msk & (_UINT32_(value) << SHA_PTSR_RXTEN_Pos)) /* Assigment of value for RXTEN in the SHA_PTSR register */
#define SHA_PTSR_TXTEN_Pos                    _UINT32_(8)                                          /* (SHA_PTSR) Transmitter Transfer Enable Position */
#define SHA_PTSR_TXTEN_Msk                    (_UINT32_(0x1) << SHA_PTSR_TXTEN_Pos)                /* (SHA_PTSR) Transmitter Transfer Enable Mask */
#define SHA_PTSR_TXTEN(value)                 (SHA_PTSR_TXTEN_Msk & (_UINT32_(value) << SHA_PTSR_TXTEN_Pos)) /* Assigment of value for TXTEN in the SHA_PTSR register */
#define SHA_PTSR_RXCBEN_Pos                   _UINT32_(16)                                         /* (SHA_PTSR) Receiver Circular Buffer Enable Position */
#define SHA_PTSR_RXCBEN_Msk                   (_UINT32_(0x1) << SHA_PTSR_RXCBEN_Pos)               /* (SHA_PTSR) Receiver Circular Buffer Enable Mask */
#define SHA_PTSR_RXCBEN(value)                (SHA_PTSR_RXCBEN_Msk & (_UINT32_(value) << SHA_PTSR_RXCBEN_Pos)) /* Assigment of value for RXCBEN in the SHA_PTSR register */
#define SHA_PTSR_TXCBEN_Pos                   _UINT32_(18)                                         /* (SHA_PTSR) Transmitter Circular Buffer Enable Position */
#define SHA_PTSR_TXCBEN_Msk                   (_UINT32_(0x1) << SHA_PTSR_TXCBEN_Pos)               /* (SHA_PTSR) Transmitter Circular Buffer Enable Mask */
#define SHA_PTSR_TXCBEN(value)                (SHA_PTSR_TXCBEN_Msk & (_UINT32_(value) << SHA_PTSR_TXCBEN_Pos)) /* Assigment of value for TXCBEN in the SHA_PTSR register */
#define SHA_PTSR_ERR_Pos                      _UINT32_(24)                                         /* (SHA_PTSR) Transfer Bus Error Position */
#define SHA_PTSR_ERR_Msk                      (_UINT32_(0x1) << SHA_PTSR_ERR_Pos)                  /* (SHA_PTSR) Transfer Bus Error Mask */
#define SHA_PTSR_ERR(value)                   (SHA_PTSR_ERR_Msk & (_UINT32_(value) << SHA_PTSR_ERR_Pos)) /* Assigment of value for ERR in the SHA_PTSR register */
#define SHA_PTSR_Msk                          _UINT32_(0x01050101)                                 /* (SHA_PTSR) Register Mask  */


/* -------- SHA_PWPMR : (SHA Offset: 0x128) (R/W 32) Write Protection Mode Register -------- */
#define SHA_PWPMR_WPPTREN_Pos                 _UINT32_(0)                                          /* (SHA_PWPMR) Write Protection Pointer Registers Enable Position */
#define SHA_PWPMR_WPPTREN_Msk                 (_UINT32_(0x1) << SHA_PWPMR_WPPTREN_Pos)             /* (SHA_PWPMR) Write Protection Pointer Registers Enable Mask */
#define SHA_PWPMR_WPPTREN(value)              (SHA_PWPMR_WPPTREN_Msk & (_UINT32_(value) << SHA_PWPMR_WPPTREN_Pos)) /* Assigment of value for WPPTREN in the SHA_PWPMR register */
#define SHA_PWPMR_WPCTREN_Pos                 _UINT32_(1)                                          /* (SHA_PWPMR) Write Protection Counter Registers Enable Position */
#define SHA_PWPMR_WPCTREN_Msk                 (_UINT32_(0x1) << SHA_PWPMR_WPCTREN_Pos)             /* (SHA_PWPMR) Write Protection Counter Registers Enable Mask */
#define SHA_PWPMR_WPCTREN(value)              (SHA_PWPMR_WPCTREN_Msk & (_UINT32_(value) << SHA_PWPMR_WPCTREN_Pos)) /* Assigment of value for WPCTREN in the SHA_PWPMR register */
#define SHA_PWPMR_WPCREN_Pos                  _UINT32_(2)                                          /* (SHA_PWPMR) Write Protection Control Register Enable Position */
#define SHA_PWPMR_WPCREN_Msk                  (_UINT32_(0x1) << SHA_PWPMR_WPCREN_Pos)              /* (SHA_PWPMR) Write Protection Control Register Enable Mask */
#define SHA_PWPMR_WPCREN(value)               (SHA_PWPMR_WPCREN_Msk & (_UINT32_(value) << SHA_PWPMR_WPCREN_Pos)) /* Assigment of value for WPCREN in the SHA_PWPMR register */
#define SHA_PWPMR_WPKEY_Pos                   _UINT32_(8)                                          /* (SHA_PWPMR) Write Protection Key Position */
#define SHA_PWPMR_WPKEY_Msk                   (_UINT32_(0xFFFFFF) << SHA_PWPMR_WPKEY_Pos)          /* (SHA_PWPMR) Write Protection Key Mask */
#define SHA_PWPMR_WPKEY(value)                (SHA_PWPMR_WPKEY_Msk & (_UINT32_(value) << SHA_PWPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the SHA_PWPMR register */
#define   SHA_PWPMR_WPKEY_PASSWD_Val          _UINT32_(0x504443)                                   /* (SHA_PWPMR) Writing any other value in this field aborts the write operation. Always reads as 0.  */
#define SHA_PWPMR_WPKEY_PASSWD                (SHA_PWPMR_WPKEY_PASSWD_Val << SHA_PWPMR_WPKEY_Pos)  /* (SHA_PWPMR) Writing any other value in this field aborts the write operation. Always reads as 0. Position  */
#define SHA_PWPMR_Msk                         _UINT32_(0xFFFFFF07)                                 /* (SHA_PWPMR) Register Mask  */


/** \brief SHA register offsets definitions */
#define SHA_CR_REG_OFST                _UINT32_(0x00)      /* (SHA_CR) Control Register Offset */
#define SHA_MR_REG_OFST                _UINT32_(0x04)      /* (SHA_MR) Mode Register Offset */
#define SHA_IER_REG_OFST               _UINT32_(0x10)      /* (SHA_IER) Interrupt Enable Register Offset */
#define SHA_IDR_REG_OFST               _UINT32_(0x14)      /* (SHA_IDR) Interrupt Disable Register Offset */
#define SHA_IMR_REG_OFST               _UINT32_(0x18)      /* (SHA_IMR) Interrupt Mask Register Offset */
#define SHA_ISR_REG_OFST               _UINT32_(0x1C)      /* (SHA_ISR) Interrupt Status Register Offset */
#define SHA_MSR_REG_OFST               _UINT32_(0x20)      /* (SHA_MSR) Message Size Register Offset */
#define SHA_BCR_REG_OFST               _UINT32_(0x30)      /* (SHA_BCR) Bytes Count Register Offset */
#define SHA_IDATAR_REG_OFST            _UINT32_(0x40)      /* (SHA_IDATAR) Input Data 0 Register Offset */
#define SHA_IDATAR0_REG_OFST           _UINT32_(0x40)      /* (SHA_IDATAR0) Input Data 0 Register Offset */
#define SHA_IDATAR1_REG_OFST           _UINT32_(0x44)      /* (SHA_IDATAR1) Input Data 0 Register Offset */
#define SHA_IDATAR2_REG_OFST           _UINT32_(0x48)      /* (SHA_IDATAR2) Input Data 0 Register Offset */
#define SHA_IDATAR3_REG_OFST           _UINT32_(0x4C)      /* (SHA_IDATAR3) Input Data 0 Register Offset */
#define SHA_IDATAR4_REG_OFST           _UINT32_(0x50)      /* (SHA_IDATAR4) Input Data 0 Register Offset */
#define SHA_IDATAR5_REG_OFST           _UINT32_(0x54)      /* (SHA_IDATAR5) Input Data 0 Register Offset */
#define SHA_IDATAR6_REG_OFST           _UINT32_(0x58)      /* (SHA_IDATAR6) Input Data 0 Register Offset */
#define SHA_IDATAR7_REG_OFST           _UINT32_(0x5C)      /* (SHA_IDATAR7) Input Data 0 Register Offset */
#define SHA_IDATAR8_REG_OFST           _UINT32_(0x60)      /* (SHA_IDATAR8) Input Data 0 Register Offset */
#define SHA_IDATAR9_REG_OFST           _UINT32_(0x64)      /* (SHA_IDATAR9) Input Data 0 Register Offset */
#define SHA_IDATAR10_REG_OFST          _UINT32_(0x68)      /* (SHA_IDATAR10) Input Data 0 Register Offset */
#define SHA_IDATAR11_REG_OFST          _UINT32_(0x6C)      /* (SHA_IDATAR11) Input Data 0 Register Offset */
#define SHA_IDATAR12_REG_OFST          _UINT32_(0x70)      /* (SHA_IDATAR12) Input Data 0 Register Offset */
#define SHA_IDATAR13_REG_OFST          _UINT32_(0x74)      /* (SHA_IDATAR13) Input Data 0 Register Offset */
#define SHA_IDATAR14_REG_OFST          _UINT32_(0x78)      /* (SHA_IDATAR14) Input Data 0 Register Offset */
#define SHA_IDATAR15_REG_OFST          _UINT32_(0x7C)      /* (SHA_IDATAR15) Input Data 0 Register Offset */
#define SHA_IODATAR_REG_OFST           _UINT32_(0x80)      /* (SHA_IODATAR) Input/Output Data 0 Register Offset */
#define SHA_IODATAR0_REG_OFST          _UINT32_(0x80)      /* (SHA_IODATAR0) Input/Output Data 0 Register Offset */
#define SHA_IODATAR1_REG_OFST          _UINT32_(0x84)      /* (SHA_IODATAR1) Input/Output Data 0 Register Offset */
#define SHA_IODATAR2_REG_OFST          _UINT32_(0x88)      /* (SHA_IODATAR2) Input/Output Data 0 Register Offset */
#define SHA_IODATAR3_REG_OFST          _UINT32_(0x8C)      /* (SHA_IODATAR3) Input/Output Data 0 Register Offset */
#define SHA_IODATAR4_REG_OFST          _UINT32_(0x90)      /* (SHA_IODATAR4) Input/Output Data 0 Register Offset */
#define SHA_IODATAR5_REG_OFST          _UINT32_(0x94)      /* (SHA_IODATAR5) Input/Output Data 0 Register Offset */
#define SHA_IODATAR6_REG_OFST          _UINT32_(0x98)      /* (SHA_IODATAR6) Input/Output Data 0 Register Offset */
#define SHA_IODATAR7_REG_OFST          _UINT32_(0x9C)      /* (SHA_IODATAR7) Input/Output Data 0 Register Offset */
#define SHA_IODATAR8_REG_OFST          _UINT32_(0xA0)      /* (SHA_IODATAR8) Input/Output Data 0 Register Offset */
#define SHA_IODATAR9_REG_OFST          _UINT32_(0xA4)      /* (SHA_IODATAR9) Input/Output Data 0 Register Offset */
#define SHA_IODATAR10_REG_OFST         _UINT32_(0xA8)      /* (SHA_IODATAR10) Input/Output Data 0 Register Offset */
#define SHA_IODATAR11_REG_OFST         _UINT32_(0xAC)      /* (SHA_IODATAR11) Input/Output Data 0 Register Offset */
#define SHA_IODATAR12_REG_OFST         _UINT32_(0xB0)      /* (SHA_IODATAR12) Input/Output Data 0 Register Offset */
#define SHA_IODATAR13_REG_OFST         _UINT32_(0xB4)      /* (SHA_IODATAR13) Input/Output Data 0 Register Offset */
#define SHA_IODATAR14_REG_OFST         _UINT32_(0xB8)      /* (SHA_IODATAR14) Input/Output Data 0 Register Offset */
#define SHA_IODATAR15_REG_OFST         _UINT32_(0xBC)      /* (SHA_IODATAR15) Input/Output Data 0 Register Offset */
#define SHA_WPMR_REG_OFST              _UINT32_(0xE4)      /* (SHA_WPMR) Write Protection Mode Register Offset */
#define SHA_WPSR_REG_OFST              _UINT32_(0xE8)      /* (SHA_WPSR) Write Protection Status Register Offset */
#define SHA_TPR_REG_OFST               _UINT32_(0x108)     /* (SHA_TPR) Transmit Pointer Register Offset */
#define SHA_TCR_REG_OFST               _UINT32_(0x10C)     /* (SHA_TCR) Transmit Counter Register Offset */
#define SHA_TNPR_REG_OFST              _UINT32_(0x118)     /* (SHA_TNPR) Transmit Next Pointer Register Offset */
#define SHA_TNCR_REG_OFST              _UINT32_(0x11C)     /* (SHA_TNCR) Transmit Next Counter Register Offset */
#define SHA_PTCR_REG_OFST              _UINT32_(0x120)     /* (SHA_PTCR) Transfer Control Register Offset */
#define SHA_PTSR_REG_OFST              _UINT32_(0x124)     /* (SHA_PTSR) Transfer Status Register Offset */
#define SHA_PWPMR_REG_OFST             _UINT32_(0x128)     /* (SHA_PWPMR) Write Protection Mode Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SHA register API structure */
typedef struct
{
  __O   uint32_t                       SHA_CR;             /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       SHA_MR;             /**< Offset: 0x04 (R/W  32) Mode Register */
  __I   uint8_t                        Reserved1[0x08];
  __O   uint32_t                       SHA_IER;            /**< Offset: 0x10 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       SHA_IDR;            /**< Offset: 0x14 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       SHA_IMR;            /**< Offset: 0x18 (R/   32) Interrupt Mask Register */
  __I   uint32_t                       SHA_ISR;            /**< Offset: 0x1C (R/   32) Interrupt Status Register */
  __IO  uint32_t                       SHA_MSR;            /**< Offset: 0x20 (R/W  32) Message Size Register */
  __I   uint8_t                        Reserved2[0x0C];
  __IO  uint32_t                       SHA_BCR;            /**< Offset: 0x30 (R/W  32) Bytes Count Register */
  __I   uint8_t                        Reserved3[0x0C];
  __O   uint32_t                       SHA_IDATAR[16];     /**< Offset: 0x40 ( /W  32) Input Data 0 Register */
  __IO  uint32_t                       SHA_IODATAR[16];    /**< Offset: 0x80 (R/W  32) Input/Output Data 0 Register */
  __I   uint8_t                        Reserved4[0x24];
  __IO  uint32_t                       SHA_WPMR;           /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       SHA_WPSR;           /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
  __I   uint8_t                        Reserved5[0x1C];
  __IO  uint32_t                       SHA_TPR;            /**< Offset: 0x108 (R/W  32) Transmit Pointer Register */
  __IO  uint32_t                       SHA_TCR;            /**< Offset: 0x10C (R/W  32) Transmit Counter Register */
  __I   uint8_t                        Reserved6[0x08];
  __IO  uint32_t                       SHA_TNPR;           /**< Offset: 0x118 (R/W  32) Transmit Next Pointer Register */
  __IO  uint32_t                       SHA_TNCR;           /**< Offset: 0x11C (R/W  32) Transmit Next Counter Register */
  __O   uint32_t                       SHA_PTCR;           /**< Offset: 0x120 ( /W  32) Transfer Control Register */
  __I   uint32_t                       SHA_PTSR;           /**< Offset: 0x124 (R/   32) Transfer Status Register */
  __IO  uint32_t                       SHA_PWPMR;          /**< Offset: 0x128 (R/W  32) Write Protection Mode Register */
} sha_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CXMTSH_SHA_COMPONENT_H_ */
