/*
 * Component description for DMAC
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
#ifndef _PIC32CMSG00_DMAC_COMPONENT_H_
#define _PIC32CMSG00_DMAC_COMPONENT_H_

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR DMAC                      */
/* ************************************************************************** */

/* -------- DMAC_BTCTRL : (DMAC Offset: 0x00) (R/W 16) Block Transfer Control -------- */
#define DMAC_BTCTRL_RESETVALUE                _UINT16_(0x00)                                       /*  (DMAC_BTCTRL) Block Transfer Control  Reset Value */

#define DMAC_BTCTRL_VALID_Pos                 _UINT16_(0)                                          /* (DMAC_BTCTRL) Descriptor Valid Position */
#define DMAC_BTCTRL_VALID_Msk                 (_UINT16_(0x1) << DMAC_BTCTRL_VALID_Pos)             /* (DMAC_BTCTRL) Descriptor Valid Mask */
#define DMAC_BTCTRL_VALID(value)              (DMAC_BTCTRL_VALID_Msk & (_UINT16_(value) << DMAC_BTCTRL_VALID_Pos)) /* Assignment of value for VALID in the DMAC_BTCTRL register */
#define DMAC_BTCTRL_EVOSEL_Pos                _UINT16_(1)                                          /* (DMAC_BTCTRL) Event Output Selection Position */
#define DMAC_BTCTRL_EVOSEL_Msk                (_UINT16_(0x3) << DMAC_BTCTRL_EVOSEL_Pos)            /* (DMAC_BTCTRL) Event Output Selection Mask */
#define DMAC_BTCTRL_EVOSEL(value)             (DMAC_BTCTRL_EVOSEL_Msk & (_UINT16_(value) << DMAC_BTCTRL_EVOSEL_Pos)) /* Assignment of value for EVOSEL in the DMAC_BTCTRL register */
#define   DMAC_BTCTRL_EVOSEL_DISABLE_Val      _UINT16_(0x0)                                        /* (DMAC_BTCTRL) Event generation disabled  */
#define   DMAC_BTCTRL_EVOSEL_BLOCK_Val        _UINT16_(0x1)                                        /* (DMAC_BTCTRL) Event strobe when block transfer complete  */
#define   DMAC_BTCTRL_EVOSEL_BEAT_Val         _UINT16_(0x3)                                        /* (DMAC_BTCTRL) Event strobe when beat transfer complete  */
#define DMAC_BTCTRL_EVOSEL_DISABLE            (DMAC_BTCTRL_EVOSEL_DISABLE_Val << DMAC_BTCTRL_EVOSEL_Pos) /* (DMAC_BTCTRL) Event generation disabled Position */
#define DMAC_BTCTRL_EVOSEL_BLOCK              (DMAC_BTCTRL_EVOSEL_BLOCK_Val << DMAC_BTCTRL_EVOSEL_Pos) /* (DMAC_BTCTRL) Event strobe when block transfer complete Position */
#define DMAC_BTCTRL_EVOSEL_BEAT               (DMAC_BTCTRL_EVOSEL_BEAT_Val << DMAC_BTCTRL_EVOSEL_Pos) /* (DMAC_BTCTRL) Event strobe when beat transfer complete Position */
#define DMAC_BTCTRL_BLOCKACT_Pos              _UINT16_(3)                                          /* (DMAC_BTCTRL) Block Action Position */
#define DMAC_BTCTRL_BLOCKACT_Msk              (_UINT16_(0x3) << DMAC_BTCTRL_BLOCKACT_Pos)          /* (DMAC_BTCTRL) Block Action Mask */
#define DMAC_BTCTRL_BLOCKACT(value)           (DMAC_BTCTRL_BLOCKACT_Msk & (_UINT16_(value) << DMAC_BTCTRL_BLOCKACT_Pos)) /* Assignment of value for BLOCKACT in the DMAC_BTCTRL register */
#define   DMAC_BTCTRL_BLOCKACT_NOACT_Val      _UINT16_(0x0)                                        /* (DMAC_BTCTRL) Channel will be disabled if it is the last block transfer in the transaction  */
#define   DMAC_BTCTRL_BLOCKACT_INT_Val        _UINT16_(0x1)                                        /* (DMAC_BTCTRL) Channel will be disabled if it is the last block transfer in the transaction and block interrupt  */
#define   DMAC_BTCTRL_BLOCKACT_SUSPEND_Val    _UINT16_(0x2)                                        /* (DMAC_BTCTRL) Channel suspend operation is completed  */
#define   DMAC_BTCTRL_BLOCKACT_BOTH_Val       _UINT16_(0x3)                                        /* (DMAC_BTCTRL) Both channel suspend operation and block interrupt  */
#define DMAC_BTCTRL_BLOCKACT_NOACT            (DMAC_BTCTRL_BLOCKACT_NOACT_Val << DMAC_BTCTRL_BLOCKACT_Pos) /* (DMAC_BTCTRL) Channel will be disabled if it is the last block transfer in the transaction Position */
#define DMAC_BTCTRL_BLOCKACT_INT              (DMAC_BTCTRL_BLOCKACT_INT_Val << DMAC_BTCTRL_BLOCKACT_Pos) /* (DMAC_BTCTRL) Channel will be disabled if it is the last block transfer in the transaction and block interrupt Position */
#define DMAC_BTCTRL_BLOCKACT_SUSPEND          (DMAC_BTCTRL_BLOCKACT_SUSPEND_Val << DMAC_BTCTRL_BLOCKACT_Pos) /* (DMAC_BTCTRL) Channel suspend operation is completed Position */
#define DMAC_BTCTRL_BLOCKACT_BOTH             (DMAC_BTCTRL_BLOCKACT_BOTH_Val << DMAC_BTCTRL_BLOCKACT_Pos) /* (DMAC_BTCTRL) Both channel suspend operation and block interrupt Position */
#define DMAC_BTCTRL_BEATSIZE_Pos              _UINT16_(8)                                          /* (DMAC_BTCTRL) Beat Size Position */
#define DMAC_BTCTRL_BEATSIZE_Msk              (_UINT16_(0x3) << DMAC_BTCTRL_BEATSIZE_Pos)          /* (DMAC_BTCTRL) Beat Size Mask */
#define DMAC_BTCTRL_BEATSIZE(value)           (DMAC_BTCTRL_BEATSIZE_Msk & (_UINT16_(value) << DMAC_BTCTRL_BEATSIZE_Pos)) /* Assignment of value for BEATSIZE in the DMAC_BTCTRL register */
#define   DMAC_BTCTRL_BEATSIZE_BYTE_Val       _UINT16_(0x0)                                        /* (DMAC_BTCTRL) 8-bit bus transfer  */
#define   DMAC_BTCTRL_BEATSIZE_HWORD_Val      _UINT16_(0x1)                                        /* (DMAC_BTCTRL) 16-bit bus transfer  */
#define   DMAC_BTCTRL_BEATSIZE_WORD_Val       _UINT16_(0x2)                                        /* (DMAC_BTCTRL) 32-bit bus transfer  */
#define DMAC_BTCTRL_BEATSIZE_BYTE             (DMAC_BTCTRL_BEATSIZE_BYTE_Val << DMAC_BTCTRL_BEATSIZE_Pos) /* (DMAC_BTCTRL) 8-bit bus transfer Position */
#define DMAC_BTCTRL_BEATSIZE_HWORD            (DMAC_BTCTRL_BEATSIZE_HWORD_Val << DMAC_BTCTRL_BEATSIZE_Pos) /* (DMAC_BTCTRL) 16-bit bus transfer Position */
#define DMAC_BTCTRL_BEATSIZE_WORD             (DMAC_BTCTRL_BEATSIZE_WORD_Val << DMAC_BTCTRL_BEATSIZE_Pos) /* (DMAC_BTCTRL) 32-bit bus transfer Position */
#define DMAC_BTCTRL_SRCINC_Pos                _UINT16_(10)                                         /* (DMAC_BTCTRL) Source Address Increment Enable Position */
#define DMAC_BTCTRL_SRCINC_Msk                (_UINT16_(0x1) << DMAC_BTCTRL_SRCINC_Pos)            /* (DMAC_BTCTRL) Source Address Increment Enable Mask */
#define DMAC_BTCTRL_SRCINC(value)             (DMAC_BTCTRL_SRCINC_Msk & (_UINT16_(value) << DMAC_BTCTRL_SRCINC_Pos)) /* Assignment of value for SRCINC in the DMAC_BTCTRL register */
#define DMAC_BTCTRL_DSTINC_Pos                _UINT16_(11)                                         /* (DMAC_BTCTRL) Destination Address Increment Enable Position */
#define DMAC_BTCTRL_DSTINC_Msk                (_UINT16_(0x1) << DMAC_BTCTRL_DSTINC_Pos)            /* (DMAC_BTCTRL) Destination Address Increment Enable Mask */
#define DMAC_BTCTRL_DSTINC(value)             (DMAC_BTCTRL_DSTINC_Msk & (_UINT16_(value) << DMAC_BTCTRL_DSTINC_Pos)) /* Assignment of value for DSTINC in the DMAC_BTCTRL register */
#define DMAC_BTCTRL_STEPSEL_Pos               _UINT16_(12)                                         /* (DMAC_BTCTRL) Step Selection Position */
#define DMAC_BTCTRL_STEPSEL_Msk               (_UINT16_(0x1) << DMAC_BTCTRL_STEPSEL_Pos)           /* (DMAC_BTCTRL) Step Selection Mask */
#define DMAC_BTCTRL_STEPSEL(value)            (DMAC_BTCTRL_STEPSEL_Msk & (_UINT16_(value) << DMAC_BTCTRL_STEPSEL_Pos)) /* Assignment of value for STEPSEL in the DMAC_BTCTRL register */
#define   DMAC_BTCTRL_STEPSEL_DST_Val         _UINT16_(0x0)                                        /* (DMAC_BTCTRL) Step size settings apply to the destination address  */
#define   DMAC_BTCTRL_STEPSEL_SRC_Val         _UINT16_(0x1)                                        /* (DMAC_BTCTRL) Step size settings apply to the source address  */
#define DMAC_BTCTRL_STEPSEL_DST               (DMAC_BTCTRL_STEPSEL_DST_Val << DMAC_BTCTRL_STEPSEL_Pos) /* (DMAC_BTCTRL) Step size settings apply to the destination address Position */
#define DMAC_BTCTRL_STEPSEL_SRC               (DMAC_BTCTRL_STEPSEL_SRC_Val << DMAC_BTCTRL_STEPSEL_Pos) /* (DMAC_BTCTRL) Step size settings apply to the source address Position */
#define DMAC_BTCTRL_STEPSIZE_Pos              _UINT16_(13)                                         /* (DMAC_BTCTRL) Address Increment Step Size Position */
#define DMAC_BTCTRL_STEPSIZE_Msk              (_UINT16_(0x7) << DMAC_BTCTRL_STEPSIZE_Pos)          /* (DMAC_BTCTRL) Address Increment Step Size Mask */
#define DMAC_BTCTRL_STEPSIZE(value)           (DMAC_BTCTRL_STEPSIZE_Msk & (_UINT16_(value) << DMAC_BTCTRL_STEPSIZE_Pos)) /* Assignment of value for STEPSIZE in the DMAC_BTCTRL register */
#define   DMAC_BTCTRL_STEPSIZE_X1_Val         _UINT16_(0x0)                                        /* (DMAC_BTCTRL) Next ADDR = ADDR + (BEATSIZE+1) * 1  */
#define   DMAC_BTCTRL_STEPSIZE_X2_Val         _UINT16_(0x1)                                        /* (DMAC_BTCTRL) Next ADDR = ADDR + (BEATSIZE+1) * 2  */
#define   DMAC_BTCTRL_STEPSIZE_X4_Val         _UINT16_(0x2)                                        /* (DMAC_BTCTRL) Next ADDR = ADDR + (BEATSIZE+1) * 4  */
#define   DMAC_BTCTRL_STEPSIZE_X8_Val         _UINT16_(0x3)                                        /* (DMAC_BTCTRL) Next ADDR = ADDR + (BEATSIZE+1) * 8  */
#define   DMAC_BTCTRL_STEPSIZE_X16_Val        _UINT16_(0x4)                                        /* (DMAC_BTCTRL) Next ADDR = ADDR + (BEATSIZE+1) * 16  */
#define   DMAC_BTCTRL_STEPSIZE_X32_Val        _UINT16_(0x5)                                        /* (DMAC_BTCTRL) Next ADDR = ADDR + (BEATSIZE+1) * 32  */
#define   DMAC_BTCTRL_STEPSIZE_X64_Val        _UINT16_(0x6)                                        /* (DMAC_BTCTRL) Next ADDR = ADDR + (BEATSIZE+1) * 64  */
#define   DMAC_BTCTRL_STEPSIZE_X128_Val       _UINT16_(0x7)                                        /* (DMAC_BTCTRL) Next ADDR = ADDR + (BEATSIZE+1) * 128  */
#define DMAC_BTCTRL_STEPSIZE_X1               (DMAC_BTCTRL_STEPSIZE_X1_Val << DMAC_BTCTRL_STEPSIZE_Pos) /* (DMAC_BTCTRL) Next ADDR = ADDR + (BEATSIZE+1) * 1 Position */
#define DMAC_BTCTRL_STEPSIZE_X2               (DMAC_BTCTRL_STEPSIZE_X2_Val << DMAC_BTCTRL_STEPSIZE_Pos) /* (DMAC_BTCTRL) Next ADDR = ADDR + (BEATSIZE+1) * 2 Position */
#define DMAC_BTCTRL_STEPSIZE_X4               (DMAC_BTCTRL_STEPSIZE_X4_Val << DMAC_BTCTRL_STEPSIZE_Pos) /* (DMAC_BTCTRL) Next ADDR = ADDR + (BEATSIZE+1) * 4 Position */
#define DMAC_BTCTRL_STEPSIZE_X8               (DMAC_BTCTRL_STEPSIZE_X8_Val << DMAC_BTCTRL_STEPSIZE_Pos) /* (DMAC_BTCTRL) Next ADDR = ADDR + (BEATSIZE+1) * 8 Position */
#define DMAC_BTCTRL_STEPSIZE_X16              (DMAC_BTCTRL_STEPSIZE_X16_Val << DMAC_BTCTRL_STEPSIZE_Pos) /* (DMAC_BTCTRL) Next ADDR = ADDR + (BEATSIZE+1) * 16 Position */
#define DMAC_BTCTRL_STEPSIZE_X32              (DMAC_BTCTRL_STEPSIZE_X32_Val << DMAC_BTCTRL_STEPSIZE_Pos) /* (DMAC_BTCTRL) Next ADDR = ADDR + (BEATSIZE+1) * 32 Position */
#define DMAC_BTCTRL_STEPSIZE_X64              (DMAC_BTCTRL_STEPSIZE_X64_Val << DMAC_BTCTRL_STEPSIZE_Pos) /* (DMAC_BTCTRL) Next ADDR = ADDR + (BEATSIZE+1) * 64 Position */
#define DMAC_BTCTRL_STEPSIZE_X128             (DMAC_BTCTRL_STEPSIZE_X128_Val << DMAC_BTCTRL_STEPSIZE_Pos) /* (DMAC_BTCTRL) Next ADDR = ADDR + (BEATSIZE+1) * 128 Position */
#define DMAC_BTCTRL_Msk                       _UINT16_(0xFF1F)                                     /* (DMAC_BTCTRL) Register Mask  */


/* -------- DMAC_BTCNT : (DMAC Offset: 0x02) (R/W 16) Block Transfer Count -------- */
#define DMAC_BTCNT_BTCNT_Pos                  _UINT16_(0)                                          /* (DMAC_BTCNT) Block Transfer Count Position */
#define DMAC_BTCNT_BTCNT_Msk                  (_UINT16_(0xFFFF) << DMAC_BTCNT_BTCNT_Pos)           /* (DMAC_BTCNT) Block Transfer Count Mask */
#define DMAC_BTCNT_BTCNT(value)               (DMAC_BTCNT_BTCNT_Msk & (_UINT16_(value) << DMAC_BTCNT_BTCNT_Pos)) /* Assignment of value for BTCNT in the DMAC_BTCNT register */
#define DMAC_BTCNT_Msk                        _UINT16_(0xFFFF)                                     /* (DMAC_BTCNT) Register Mask  */


/* -------- DMAC_SRCADDR : (DMAC Offset: 0x04) (R/W 32) Block Transfer Source Address -------- */
#define DMAC_SRCADDR_SRCADDR_Pos              _UINT32_(0)                                          /* (DMAC_SRCADDR) Transfer Source Address Position */
#define DMAC_SRCADDR_SRCADDR_Msk              (_UINT32_(0xFFFFFFFF) << DMAC_SRCADDR_SRCADDR_Pos)   /* (DMAC_SRCADDR) Transfer Source Address Mask */
#define DMAC_SRCADDR_SRCADDR(value)           (DMAC_SRCADDR_SRCADDR_Msk & (_UINT32_(value) << DMAC_SRCADDR_SRCADDR_Pos)) /* Assignment of value for SRCADDR in the DMAC_SRCADDR register */
#define DMAC_SRCADDR_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (DMAC_SRCADDR) Register Mask  */


/* -------- DMAC_DSTADDR : (DMAC Offset: 0x08) (R/W 32) Block Transfer Destination Address -------- */
#define DMAC_DSTADDR_DSTADDR_Pos              _UINT32_(0)                                          /* (DMAC_DSTADDR) Transfer Destination Address Position */
#define DMAC_DSTADDR_DSTADDR_Msk              (_UINT32_(0xFFFFFFFF) << DMAC_DSTADDR_DSTADDR_Pos)   /* (DMAC_DSTADDR) Transfer Destination Address Mask */
#define DMAC_DSTADDR_DSTADDR(value)           (DMAC_DSTADDR_DSTADDR_Msk & (_UINT32_(value) << DMAC_DSTADDR_DSTADDR_Pos)) /* Assignment of value for DSTADDR in the DMAC_DSTADDR register */
#define DMAC_DSTADDR_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (DMAC_DSTADDR) Register Mask  */


/* -------- DMAC_DESCADDR : (DMAC Offset: 0x0C) (R/W 32) Next Descriptor Address -------- */
#define DMAC_DESCADDR_DESCADDR_Pos            _UINT32_(0)                                          /* (DMAC_DESCADDR) Next Descriptor Address Position */
#define DMAC_DESCADDR_DESCADDR_Msk            (_UINT32_(0xFFFFFFFF) << DMAC_DESCADDR_DESCADDR_Pos) /* (DMAC_DESCADDR) Next Descriptor Address Mask */
#define DMAC_DESCADDR_DESCADDR(value)         (DMAC_DESCADDR_DESCADDR_Msk & (_UINT32_(value) << DMAC_DESCADDR_DESCADDR_Pos)) /* Assignment of value for DESCADDR in the DMAC_DESCADDR register */
#define DMAC_DESCADDR_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (DMAC_DESCADDR) Register Mask  */


/* -------- DMAC_CTRL : (DMAC Offset: 0x00) (R/W 16) Control -------- */
#define DMAC_CTRL_RESETVALUE                  _UINT16_(0x00)                                       /*  (DMAC_CTRL) Control  Reset Value */

#define DMAC_CTRL_SWRST_Pos                   _UINT16_(0)                                          /* (DMAC_CTRL) Software Reset Position */
#define DMAC_CTRL_SWRST_Msk                   (_UINT16_(0x1) << DMAC_CTRL_SWRST_Pos)               /* (DMAC_CTRL) Software Reset Mask */
#define DMAC_CTRL_SWRST(value)                (DMAC_CTRL_SWRST_Msk & (_UINT16_(value) << DMAC_CTRL_SWRST_Pos)) /* Assignment of value for SWRST in the DMAC_CTRL register */
#define DMAC_CTRL_DMAENABLE_Pos               _UINT16_(1)                                          /* (DMAC_CTRL) DMA Enable Position */
#define DMAC_CTRL_DMAENABLE_Msk               (_UINT16_(0x1) << DMAC_CTRL_DMAENABLE_Pos)           /* (DMAC_CTRL) DMA Enable Mask */
#define DMAC_CTRL_DMAENABLE(value)            (DMAC_CTRL_DMAENABLE_Msk & (_UINT16_(value) << DMAC_CTRL_DMAENABLE_Pos)) /* Assignment of value for DMAENABLE in the DMAC_CTRL register */
#define DMAC_CTRL_CRCENABLE_Pos               _UINT16_(2)                                          /* (DMAC_CTRL) CRC Enable Position */
#define DMAC_CTRL_CRCENABLE_Msk               (_UINT16_(0x1) << DMAC_CTRL_CRCENABLE_Pos)           /* (DMAC_CTRL) CRC Enable Mask */
#define DMAC_CTRL_CRCENABLE(value)            (DMAC_CTRL_CRCENABLE_Msk & (_UINT16_(value) << DMAC_CTRL_CRCENABLE_Pos)) /* Assignment of value for CRCENABLE in the DMAC_CTRL register */
#define DMAC_CTRL_LVLEN0_Pos                  _UINT16_(8)                                          /* (DMAC_CTRL) Priority Level 0 Enable Position */
#define DMAC_CTRL_LVLEN0_Msk                  (_UINT16_(0x1) << DMAC_CTRL_LVLEN0_Pos)              /* (DMAC_CTRL) Priority Level 0 Enable Mask */
#define DMAC_CTRL_LVLEN0(value)               (DMAC_CTRL_LVLEN0_Msk & (_UINT16_(value) << DMAC_CTRL_LVLEN0_Pos)) /* Assignment of value for LVLEN0 in the DMAC_CTRL register */
#define DMAC_CTRL_LVLEN1_Pos                  _UINT16_(9)                                          /* (DMAC_CTRL) Priority Level 1 Enable Position */
#define DMAC_CTRL_LVLEN1_Msk                  (_UINT16_(0x1) << DMAC_CTRL_LVLEN1_Pos)              /* (DMAC_CTRL) Priority Level 1 Enable Mask */
#define DMAC_CTRL_LVLEN1(value)               (DMAC_CTRL_LVLEN1_Msk & (_UINT16_(value) << DMAC_CTRL_LVLEN1_Pos)) /* Assignment of value for LVLEN1 in the DMAC_CTRL register */
#define DMAC_CTRL_LVLEN2_Pos                  _UINT16_(10)                                         /* (DMAC_CTRL) Priority Level 2 Enable Position */
#define DMAC_CTRL_LVLEN2_Msk                  (_UINT16_(0x1) << DMAC_CTRL_LVLEN2_Pos)              /* (DMAC_CTRL) Priority Level 2 Enable Mask */
#define DMAC_CTRL_LVLEN2(value)               (DMAC_CTRL_LVLEN2_Msk & (_UINT16_(value) << DMAC_CTRL_LVLEN2_Pos)) /* Assignment of value for LVLEN2 in the DMAC_CTRL register */
#define DMAC_CTRL_LVLEN3_Pos                  _UINT16_(11)                                         /* (DMAC_CTRL) Priority Level 3 Enable Position */
#define DMAC_CTRL_LVLEN3_Msk                  (_UINT16_(0x1) << DMAC_CTRL_LVLEN3_Pos)              /* (DMAC_CTRL) Priority Level 3 Enable Mask */
#define DMAC_CTRL_LVLEN3(value)               (DMAC_CTRL_LVLEN3_Msk & (_UINT16_(value) << DMAC_CTRL_LVLEN3_Pos)) /* Assignment of value for LVLEN3 in the DMAC_CTRL register */
#define DMAC_CTRL_Msk                         _UINT16_(0x0F07)                                     /* (DMAC_CTRL) Register Mask  */

#define DMAC_CTRL_LVLEN_Pos                   _UINT16_(8)                                          /* (DMAC_CTRL Position) Priority Level 3 Enable */
#define DMAC_CTRL_LVLEN_Msk                   (_UINT16_(0xF) << DMAC_CTRL_LVLEN_Pos)               /* (DMAC_CTRL Mask) LVLEN */
#define DMAC_CTRL_LVLEN(value)                (DMAC_CTRL_LVLEN_Msk & (_UINT16_(value) << DMAC_CTRL_LVLEN_Pos)) 

/* -------- DMAC_CRCCTRL : (DMAC Offset: 0x02) (R/W 16) CRC Control -------- */
#define DMAC_CRCCTRL_RESETVALUE               _UINT16_(0x00)                                       /*  (DMAC_CRCCTRL) CRC Control  Reset Value */

#define DMAC_CRCCTRL_CRCBEATSIZE_Pos          _UINT16_(0)                                          /* (DMAC_CRCCTRL) CRC Beat Size Position */
#define DMAC_CRCCTRL_CRCBEATSIZE_Msk          (_UINT16_(0x3) << DMAC_CRCCTRL_CRCBEATSIZE_Pos)      /* (DMAC_CRCCTRL) CRC Beat Size Mask */
#define DMAC_CRCCTRL_CRCBEATSIZE(value)       (DMAC_CRCCTRL_CRCBEATSIZE_Msk & (_UINT16_(value) << DMAC_CRCCTRL_CRCBEATSIZE_Pos)) /* Assignment of value for CRCBEATSIZE in the DMAC_CRCCTRL register */
#define   DMAC_CRCCTRL_CRCBEATSIZE_BYTE_Val   _UINT16_(0x0)                                        /* (DMAC_CRCCTRL) 8-bit bus transfer  */
#define   DMAC_CRCCTRL_CRCBEATSIZE_HWORD_Val  _UINT16_(0x1)                                        /* (DMAC_CRCCTRL) 16-bit bus transfer  */
#define   DMAC_CRCCTRL_CRCBEATSIZE_WORD_Val   _UINT16_(0x2)                                        /* (DMAC_CRCCTRL) 32-bit bus transfer  */
#define DMAC_CRCCTRL_CRCBEATSIZE_BYTE         (DMAC_CRCCTRL_CRCBEATSIZE_BYTE_Val << DMAC_CRCCTRL_CRCBEATSIZE_Pos) /* (DMAC_CRCCTRL) 8-bit bus transfer Position */
#define DMAC_CRCCTRL_CRCBEATSIZE_HWORD        (DMAC_CRCCTRL_CRCBEATSIZE_HWORD_Val << DMAC_CRCCTRL_CRCBEATSIZE_Pos) /* (DMAC_CRCCTRL) 16-bit bus transfer Position */
#define DMAC_CRCCTRL_CRCBEATSIZE_WORD         (DMAC_CRCCTRL_CRCBEATSIZE_WORD_Val << DMAC_CRCCTRL_CRCBEATSIZE_Pos) /* (DMAC_CRCCTRL) 32-bit bus transfer Position */
#define DMAC_CRCCTRL_CRCPOLY_Pos              _UINT16_(2)                                          /* (DMAC_CRCCTRL) CRC Polynomial Type Position */
#define DMAC_CRCCTRL_CRCPOLY_Msk              (_UINT16_(0x3) << DMAC_CRCCTRL_CRCPOLY_Pos)          /* (DMAC_CRCCTRL) CRC Polynomial Type Mask */
#define DMAC_CRCCTRL_CRCPOLY(value)           (DMAC_CRCCTRL_CRCPOLY_Msk & (_UINT16_(value) << DMAC_CRCCTRL_CRCPOLY_Pos)) /* Assignment of value for CRCPOLY in the DMAC_CRCCTRL register */
#define   DMAC_CRCCTRL_CRCPOLY_CRC16_Val      _UINT16_(0x0)                                        /* (DMAC_CRCCTRL) CRC-16 (CRC-CCITT)  */
#define   DMAC_CRCCTRL_CRCPOLY_CRC32_Val      _UINT16_(0x1)                                        /* (DMAC_CRCCTRL) CRC32 (IEEE 802.3)  */
#define DMAC_CRCCTRL_CRCPOLY_CRC16            (DMAC_CRCCTRL_CRCPOLY_CRC16_Val << DMAC_CRCCTRL_CRCPOLY_Pos) /* (DMAC_CRCCTRL) CRC-16 (CRC-CCITT) Position */
#define DMAC_CRCCTRL_CRCPOLY_CRC32            (DMAC_CRCCTRL_CRCPOLY_CRC32_Val << DMAC_CRCCTRL_CRCPOLY_Pos) /* (DMAC_CRCCTRL) CRC32 (IEEE 802.3) Position */
#define DMAC_CRCCTRL_CRCSRC_Pos               _UINT16_(8)                                          /* (DMAC_CRCCTRL) CRC Input Source Position */
#define DMAC_CRCCTRL_CRCSRC_Msk               (_UINT16_(0x3F) << DMAC_CRCCTRL_CRCSRC_Pos)          /* (DMAC_CRCCTRL) CRC Input Source Mask */
#define DMAC_CRCCTRL_CRCSRC(value)            (DMAC_CRCCTRL_CRCSRC_Msk & (_UINT16_(value) << DMAC_CRCCTRL_CRCSRC_Pos)) /* Assignment of value for CRCSRC in the DMAC_CRCCTRL register */
#define   DMAC_CRCCTRL_CRCSRC_NOACT_Val       _UINT16_(0x0)                                        /* (DMAC_CRCCTRL) No action  */
#define   DMAC_CRCCTRL_CRCSRC_IO_Val          _UINT16_(0x1)                                        /* (DMAC_CRCCTRL) I/O interface  */
#define DMAC_CRCCTRL_CRCSRC_NOACT             (DMAC_CRCCTRL_CRCSRC_NOACT_Val << DMAC_CRCCTRL_CRCSRC_Pos) /* (DMAC_CRCCTRL) No action Position */
#define DMAC_CRCCTRL_CRCSRC_IO                (DMAC_CRCCTRL_CRCSRC_IO_Val << DMAC_CRCCTRL_CRCSRC_Pos) /* (DMAC_CRCCTRL) I/O interface Position */
#define DMAC_CRCCTRL_Msk                      _UINT16_(0x3F0F)                                     /* (DMAC_CRCCTRL) Register Mask  */


/* -------- DMAC_CRCDATAIN : (DMAC Offset: 0x04) (R/W 32) CRC Data Input -------- */
#define DMAC_CRCDATAIN_RESETVALUE             _UINT32_(0x00)                                       /*  (DMAC_CRCDATAIN) CRC Data Input  Reset Value */

#define DMAC_CRCDATAIN_CRCDATAIN_Pos          _UINT32_(0)                                          /* (DMAC_CRCDATAIN) CRC Data Input Position */
#define DMAC_CRCDATAIN_CRCDATAIN_Msk          (_UINT32_(0xFFFFFFFF) << DMAC_CRCDATAIN_CRCDATAIN_Pos) /* (DMAC_CRCDATAIN) CRC Data Input Mask */
#define DMAC_CRCDATAIN_CRCDATAIN(value)       (DMAC_CRCDATAIN_CRCDATAIN_Msk & (_UINT32_(value) << DMAC_CRCDATAIN_CRCDATAIN_Pos)) /* Assignment of value for CRCDATAIN in the DMAC_CRCDATAIN register */
#define DMAC_CRCDATAIN_Msk                    _UINT32_(0xFFFFFFFF)                                 /* (DMAC_CRCDATAIN) Register Mask  */


/* -------- DMAC_CRCCHKSUM : (DMAC Offset: 0x08) (R/W 32) CRC Checksum -------- */
#define DMAC_CRCCHKSUM_RESETVALUE             _UINT32_(0x00)                                       /*  (DMAC_CRCCHKSUM) CRC Checksum  Reset Value */

#define DMAC_CRCCHKSUM_CRCCHKSUM_Pos          _UINT32_(0)                                          /* (DMAC_CRCCHKSUM) CRC Checksum Position */
#define DMAC_CRCCHKSUM_CRCCHKSUM_Msk          (_UINT32_(0xFFFFFFFF) << DMAC_CRCCHKSUM_CRCCHKSUM_Pos) /* (DMAC_CRCCHKSUM) CRC Checksum Mask */
#define DMAC_CRCCHKSUM_CRCCHKSUM(value)       (DMAC_CRCCHKSUM_CRCCHKSUM_Msk & (_UINT32_(value) << DMAC_CRCCHKSUM_CRCCHKSUM_Pos)) /* Assignment of value for CRCCHKSUM in the DMAC_CRCCHKSUM register */
#define DMAC_CRCCHKSUM_Msk                    _UINT32_(0xFFFFFFFF)                                 /* (DMAC_CRCCHKSUM) Register Mask  */


/* -------- DMAC_CRCSTATUS : (DMAC Offset: 0x0C) (R/W 8) CRC Status -------- */
#define DMAC_CRCSTATUS_RESETVALUE             _UINT8_(0x00)                                        /*  (DMAC_CRCSTATUS) CRC Status  Reset Value */

#define DMAC_CRCSTATUS_CRCBUSY_Pos            _UINT8_(0)                                           /* (DMAC_CRCSTATUS) CRC Module Busy Position */
#define DMAC_CRCSTATUS_CRCBUSY_Msk            (_UINT8_(0x1) << DMAC_CRCSTATUS_CRCBUSY_Pos)         /* (DMAC_CRCSTATUS) CRC Module Busy Mask */
#define DMAC_CRCSTATUS_CRCBUSY(value)         (DMAC_CRCSTATUS_CRCBUSY_Msk & (_UINT8_(value) << DMAC_CRCSTATUS_CRCBUSY_Pos)) /* Assignment of value for CRCBUSY in the DMAC_CRCSTATUS register */
#define DMAC_CRCSTATUS_CRCZERO_Pos            _UINT8_(1)                                           /* (DMAC_CRCSTATUS) CRC Zero Position */
#define DMAC_CRCSTATUS_CRCZERO_Msk            (_UINT8_(0x1) << DMAC_CRCSTATUS_CRCZERO_Pos)         /* (DMAC_CRCSTATUS) CRC Zero Mask */
#define DMAC_CRCSTATUS_CRCZERO(value)         (DMAC_CRCSTATUS_CRCZERO_Msk & (_UINT8_(value) << DMAC_CRCSTATUS_CRCZERO_Pos)) /* Assignment of value for CRCZERO in the DMAC_CRCSTATUS register */
#define DMAC_CRCSTATUS_Msk                    _UINT8_(0x03)                                        /* (DMAC_CRCSTATUS) Register Mask  */


/* -------- DMAC_DBGCTRL : (DMAC Offset: 0x0D) (R/W 8) Debug Control -------- */
#define DMAC_DBGCTRL_RESETVALUE               _UINT8_(0x00)                                        /*  (DMAC_DBGCTRL) Debug Control  Reset Value */

#define DMAC_DBGCTRL_DBGRUN_Pos               _UINT8_(0)                                           /* (DMAC_DBGCTRL) Debug Run Position */
#define DMAC_DBGCTRL_DBGRUN_Msk               (_UINT8_(0x1) << DMAC_DBGCTRL_DBGRUN_Pos)            /* (DMAC_DBGCTRL) Debug Run Mask */
#define DMAC_DBGCTRL_DBGRUN(value)            (DMAC_DBGCTRL_DBGRUN_Msk & (_UINT8_(value) << DMAC_DBGCTRL_DBGRUN_Pos)) /* Assignment of value for DBGRUN in the DMAC_DBGCTRL register */
#define DMAC_DBGCTRL_Msk                      _UINT8_(0x01)                                        /* (DMAC_DBGCTRL) Register Mask  */


/* -------- DMAC_QOSCTRL : (DMAC Offset: 0x0E) (R/W 8) QOS Control -------- */
#define DMAC_QOSCTRL_RESETVALUE               _UINT8_(0x2A)                                        /*  (DMAC_QOSCTRL) QOS Control  Reset Value */

#define DMAC_QOSCTRL_WRBQOS_Pos               _UINT8_(0)                                           /* (DMAC_QOSCTRL) Write-Back Quality of Service Position */
#define DMAC_QOSCTRL_WRBQOS_Msk               (_UINT8_(0x3) << DMAC_QOSCTRL_WRBQOS_Pos)            /* (DMAC_QOSCTRL) Write-Back Quality of Service Mask */
#define DMAC_QOSCTRL_WRBQOS(value)            (DMAC_QOSCTRL_WRBQOS_Msk & (_UINT8_(value) << DMAC_QOSCTRL_WRBQOS_Pos)) /* Assignment of value for WRBQOS in the DMAC_QOSCTRL register */
#define   DMAC_QOSCTRL_WRBQOS_DISABLE_Val     _UINT8_(0x0)                                         /* (DMAC_QOSCTRL) Background (no sensitive operation)  */
#define   DMAC_QOSCTRL_WRBQOS_LOW_Val         _UINT8_(0x1)                                         /* (DMAC_QOSCTRL) Sensitive Bandwidth  */
#define   DMAC_QOSCTRL_WRBQOS_MEDIUM_Val      _UINT8_(0x2)                                         /* (DMAC_QOSCTRL) Sensitive Latency  */
#define   DMAC_QOSCTRL_WRBQOS_HIGH_Val        _UINT8_(0x3)                                         /* (DMAC_QOSCTRL) Critical Latency  */
#define DMAC_QOSCTRL_WRBQOS_DISABLE           (DMAC_QOSCTRL_WRBQOS_DISABLE_Val << DMAC_QOSCTRL_WRBQOS_Pos) /* (DMAC_QOSCTRL) Background (no sensitive operation) Position */
#define DMAC_QOSCTRL_WRBQOS_LOW               (DMAC_QOSCTRL_WRBQOS_LOW_Val << DMAC_QOSCTRL_WRBQOS_Pos) /* (DMAC_QOSCTRL) Sensitive Bandwidth Position */
#define DMAC_QOSCTRL_WRBQOS_MEDIUM            (DMAC_QOSCTRL_WRBQOS_MEDIUM_Val << DMAC_QOSCTRL_WRBQOS_Pos) /* (DMAC_QOSCTRL) Sensitive Latency Position */
#define DMAC_QOSCTRL_WRBQOS_HIGH              (DMAC_QOSCTRL_WRBQOS_HIGH_Val << DMAC_QOSCTRL_WRBQOS_Pos) /* (DMAC_QOSCTRL) Critical Latency Position */
#define DMAC_QOSCTRL_FQOS_Pos                 _UINT8_(2)                                           /* (DMAC_QOSCTRL) Fetch Quality of Service Position */
#define DMAC_QOSCTRL_FQOS_Msk                 (_UINT8_(0x3) << DMAC_QOSCTRL_FQOS_Pos)              /* (DMAC_QOSCTRL) Fetch Quality of Service Mask */
#define DMAC_QOSCTRL_FQOS(value)              (DMAC_QOSCTRL_FQOS_Msk & (_UINT8_(value) << DMAC_QOSCTRL_FQOS_Pos)) /* Assignment of value for FQOS in the DMAC_QOSCTRL register */
#define   DMAC_QOSCTRL_FQOS_DISABLE_Val       _UINT8_(0x0)                                         /* (DMAC_QOSCTRL) Background (no sensitive operation)  */
#define   DMAC_QOSCTRL_FQOS_LOW_Val           _UINT8_(0x1)                                         /* (DMAC_QOSCTRL) Sensitive Bandwidth  */
#define   DMAC_QOSCTRL_FQOS_MEDIUM_Val        _UINT8_(0x2)                                         /* (DMAC_QOSCTRL) Sensitive Latency  */
#define   DMAC_QOSCTRL_FQOS_HIGH_Val          _UINT8_(0x3)                                         /* (DMAC_QOSCTRL) Critical Latency  */
#define DMAC_QOSCTRL_FQOS_DISABLE             (DMAC_QOSCTRL_FQOS_DISABLE_Val << DMAC_QOSCTRL_FQOS_Pos) /* (DMAC_QOSCTRL) Background (no sensitive operation) Position */
#define DMAC_QOSCTRL_FQOS_LOW                 (DMAC_QOSCTRL_FQOS_LOW_Val << DMAC_QOSCTRL_FQOS_Pos) /* (DMAC_QOSCTRL) Sensitive Bandwidth Position */
#define DMAC_QOSCTRL_FQOS_MEDIUM              (DMAC_QOSCTRL_FQOS_MEDIUM_Val << DMAC_QOSCTRL_FQOS_Pos) /* (DMAC_QOSCTRL) Sensitive Latency Position */
#define DMAC_QOSCTRL_FQOS_HIGH                (DMAC_QOSCTRL_FQOS_HIGH_Val << DMAC_QOSCTRL_FQOS_Pos) /* (DMAC_QOSCTRL) Critical Latency Position */
#define DMAC_QOSCTRL_DQOS_Pos                 _UINT8_(4)                                           /* (DMAC_QOSCTRL) Data Transfer Quality of Service Position */
#define DMAC_QOSCTRL_DQOS_Msk                 (_UINT8_(0x3) << DMAC_QOSCTRL_DQOS_Pos)              /* (DMAC_QOSCTRL) Data Transfer Quality of Service Mask */
#define DMAC_QOSCTRL_DQOS(value)              (DMAC_QOSCTRL_DQOS_Msk & (_UINT8_(value) << DMAC_QOSCTRL_DQOS_Pos)) /* Assignment of value for DQOS in the DMAC_QOSCTRL register */
#define   DMAC_QOSCTRL_DQOS_DISABLE_Val       _UINT8_(0x0)                                         /* (DMAC_QOSCTRL) Background (no sensitive operation)  */
#define   DMAC_QOSCTRL_DQOS_LOW_Val           _UINT8_(0x1)                                         /* (DMAC_QOSCTRL) Sensitive Bandwidth  */
#define   DMAC_QOSCTRL_DQOS_MEDIUM_Val        _UINT8_(0x2)                                         /* (DMAC_QOSCTRL) Sensitive Latency  */
#define   DMAC_QOSCTRL_DQOS_HIGH_Val          _UINT8_(0x3)                                         /* (DMAC_QOSCTRL) Critical Latency  */
#define DMAC_QOSCTRL_DQOS_DISABLE             (DMAC_QOSCTRL_DQOS_DISABLE_Val << DMAC_QOSCTRL_DQOS_Pos) /* (DMAC_QOSCTRL) Background (no sensitive operation) Position */
#define DMAC_QOSCTRL_DQOS_LOW                 (DMAC_QOSCTRL_DQOS_LOW_Val << DMAC_QOSCTRL_DQOS_Pos) /* (DMAC_QOSCTRL) Sensitive Bandwidth Position */
#define DMAC_QOSCTRL_DQOS_MEDIUM              (DMAC_QOSCTRL_DQOS_MEDIUM_Val << DMAC_QOSCTRL_DQOS_Pos) /* (DMAC_QOSCTRL) Sensitive Latency Position */
#define DMAC_QOSCTRL_DQOS_HIGH                (DMAC_QOSCTRL_DQOS_HIGH_Val << DMAC_QOSCTRL_DQOS_Pos) /* (DMAC_QOSCTRL) Critical Latency Position */
#define DMAC_QOSCTRL_Msk                      _UINT8_(0x3F)                                        /* (DMAC_QOSCTRL) Register Mask  */


/* -------- DMAC_SWTRIGCTRL : (DMAC Offset: 0x10) (R/W 32) Software Trigger Control -------- */
#define DMAC_SWTRIGCTRL_RESETVALUE            _UINT32_(0x00)                                       /*  (DMAC_SWTRIGCTRL) Software Trigger Control  Reset Value */

#define DMAC_SWTRIGCTRL_SWTRIG0_Pos           _UINT32_(0)                                          /* (DMAC_SWTRIGCTRL) Channel 0 Software Trigger Position */
#define DMAC_SWTRIGCTRL_SWTRIG0_Msk           (_UINT32_(0x1) << DMAC_SWTRIGCTRL_SWTRIG0_Pos)       /* (DMAC_SWTRIGCTRL) Channel 0 Software Trigger Mask */
#define DMAC_SWTRIGCTRL_SWTRIG0(value)        (DMAC_SWTRIGCTRL_SWTRIG0_Msk & (_UINT32_(value) << DMAC_SWTRIGCTRL_SWTRIG0_Pos)) /* Assignment of value for SWTRIG0 in the DMAC_SWTRIGCTRL register */
#define DMAC_SWTRIGCTRL_SWTRIG1_Pos           _UINT32_(1)                                          /* (DMAC_SWTRIGCTRL) Channel 1 Software Trigger Position */
#define DMAC_SWTRIGCTRL_SWTRIG1_Msk           (_UINT32_(0x1) << DMAC_SWTRIGCTRL_SWTRIG1_Pos)       /* (DMAC_SWTRIGCTRL) Channel 1 Software Trigger Mask */
#define DMAC_SWTRIGCTRL_SWTRIG1(value)        (DMAC_SWTRIGCTRL_SWTRIG1_Msk & (_UINT32_(value) << DMAC_SWTRIGCTRL_SWTRIG1_Pos)) /* Assignment of value for SWTRIG1 in the DMAC_SWTRIGCTRL register */
#define DMAC_SWTRIGCTRL_SWTRIG2_Pos           _UINT32_(2)                                          /* (DMAC_SWTRIGCTRL) Channel 2 Software Trigger Position */
#define DMAC_SWTRIGCTRL_SWTRIG2_Msk           (_UINT32_(0x1) << DMAC_SWTRIGCTRL_SWTRIG2_Pos)       /* (DMAC_SWTRIGCTRL) Channel 2 Software Trigger Mask */
#define DMAC_SWTRIGCTRL_SWTRIG2(value)        (DMAC_SWTRIGCTRL_SWTRIG2_Msk & (_UINT32_(value) << DMAC_SWTRIGCTRL_SWTRIG2_Pos)) /* Assignment of value for SWTRIG2 in the DMAC_SWTRIGCTRL register */
#define DMAC_SWTRIGCTRL_SWTRIG3_Pos           _UINT32_(3)                                          /* (DMAC_SWTRIGCTRL) Channel 3 Software Trigger Position */
#define DMAC_SWTRIGCTRL_SWTRIG3_Msk           (_UINT32_(0x1) << DMAC_SWTRIGCTRL_SWTRIG3_Pos)       /* (DMAC_SWTRIGCTRL) Channel 3 Software Trigger Mask */
#define DMAC_SWTRIGCTRL_SWTRIG3(value)        (DMAC_SWTRIGCTRL_SWTRIG3_Msk & (_UINT32_(value) << DMAC_SWTRIGCTRL_SWTRIG3_Pos)) /* Assignment of value for SWTRIG3 in the DMAC_SWTRIGCTRL register */
#define DMAC_SWTRIGCTRL_SWTRIG4_Pos           _UINT32_(4)                                          /* (DMAC_SWTRIGCTRL) Channel 4 Software Trigger Position */
#define DMAC_SWTRIGCTRL_SWTRIG4_Msk           (_UINT32_(0x1) << DMAC_SWTRIGCTRL_SWTRIG4_Pos)       /* (DMAC_SWTRIGCTRL) Channel 4 Software Trigger Mask */
#define DMAC_SWTRIGCTRL_SWTRIG4(value)        (DMAC_SWTRIGCTRL_SWTRIG4_Msk & (_UINT32_(value) << DMAC_SWTRIGCTRL_SWTRIG4_Pos)) /* Assignment of value for SWTRIG4 in the DMAC_SWTRIGCTRL register */
#define DMAC_SWTRIGCTRL_SWTRIG5_Pos           _UINT32_(5)                                          /* (DMAC_SWTRIGCTRL) Channel 5 Software Trigger Position */
#define DMAC_SWTRIGCTRL_SWTRIG5_Msk           (_UINT32_(0x1) << DMAC_SWTRIGCTRL_SWTRIG5_Pos)       /* (DMAC_SWTRIGCTRL) Channel 5 Software Trigger Mask */
#define DMAC_SWTRIGCTRL_SWTRIG5(value)        (DMAC_SWTRIGCTRL_SWTRIG5_Msk & (_UINT32_(value) << DMAC_SWTRIGCTRL_SWTRIG5_Pos)) /* Assignment of value for SWTRIG5 in the DMAC_SWTRIGCTRL register */
#define DMAC_SWTRIGCTRL_SWTRIG6_Pos           _UINT32_(6)                                          /* (DMAC_SWTRIGCTRL) Channel 6 Software Trigger Position */
#define DMAC_SWTRIGCTRL_SWTRIG6_Msk           (_UINT32_(0x1) << DMAC_SWTRIGCTRL_SWTRIG6_Pos)       /* (DMAC_SWTRIGCTRL) Channel 6 Software Trigger Mask */
#define DMAC_SWTRIGCTRL_SWTRIG6(value)        (DMAC_SWTRIGCTRL_SWTRIG6_Msk & (_UINT32_(value) << DMAC_SWTRIGCTRL_SWTRIG6_Pos)) /* Assignment of value for SWTRIG6 in the DMAC_SWTRIGCTRL register */
#define DMAC_SWTRIGCTRL_SWTRIG7_Pos           _UINT32_(7)                                          /* (DMAC_SWTRIGCTRL) Channel 7 Software Trigger Position */
#define DMAC_SWTRIGCTRL_SWTRIG7_Msk           (_UINT32_(0x1) << DMAC_SWTRIGCTRL_SWTRIG7_Pos)       /* (DMAC_SWTRIGCTRL) Channel 7 Software Trigger Mask */
#define DMAC_SWTRIGCTRL_SWTRIG7(value)        (DMAC_SWTRIGCTRL_SWTRIG7_Msk & (_UINT32_(value) << DMAC_SWTRIGCTRL_SWTRIG7_Pos)) /* Assignment of value for SWTRIG7 in the DMAC_SWTRIGCTRL register */
#define DMAC_SWTRIGCTRL_Msk                   _UINT32_(0x000000FF)                                 /* (DMAC_SWTRIGCTRL) Register Mask  */

#define DMAC_SWTRIGCTRL_SWTRIG_Pos            _UINT32_(0)                                          /* (DMAC_SWTRIGCTRL Position) Channel 7 Software Trigger */
#define DMAC_SWTRIGCTRL_SWTRIG_Msk            (_UINT32_(0xFF) << DMAC_SWTRIGCTRL_SWTRIG_Pos)       /* (DMAC_SWTRIGCTRL Mask) SWTRIG */
#define DMAC_SWTRIGCTRL_SWTRIG(value)         (DMAC_SWTRIGCTRL_SWTRIG_Msk & (_UINT32_(value) << DMAC_SWTRIGCTRL_SWTRIG_Pos)) 

/* -------- DMAC_PRICTRL0 : (DMAC Offset: 0x14) (R/W 32) Priority Control 0 -------- */
#define DMAC_PRICTRL0_RESETVALUE              _UINT32_(0x00)                                       /*  (DMAC_PRICTRL0) Priority Control 0  Reset Value */

#define DMAC_PRICTRL0_LVLPRI0_Pos             _UINT32_(0)                                          /* (DMAC_PRICTRL0) Level 0 Channel Priority Number Position */
#define DMAC_PRICTRL0_LVLPRI0_Msk             (_UINT32_(0x7) << DMAC_PRICTRL0_LVLPRI0_Pos)         /* (DMAC_PRICTRL0) Level 0 Channel Priority Number Mask */
#define DMAC_PRICTRL0_LVLPRI0(value)          (DMAC_PRICTRL0_LVLPRI0_Msk & (_UINT32_(value) << DMAC_PRICTRL0_LVLPRI0_Pos)) /* Assignment of value for LVLPRI0 in the DMAC_PRICTRL0 register */
#define DMAC_PRICTRL0_RRLVLEN0_Pos            _UINT32_(7)                                          /* (DMAC_PRICTRL0) Level 0 Round-Robin Scheduling Enable Position */
#define DMAC_PRICTRL0_RRLVLEN0_Msk            (_UINT32_(0x1) << DMAC_PRICTRL0_RRLVLEN0_Pos)        /* (DMAC_PRICTRL0) Level 0 Round-Robin Scheduling Enable Mask */
#define DMAC_PRICTRL0_RRLVLEN0(value)         (DMAC_PRICTRL0_RRLVLEN0_Msk & (_UINT32_(value) << DMAC_PRICTRL0_RRLVLEN0_Pos)) /* Assignment of value for RRLVLEN0 in the DMAC_PRICTRL0 register */
#define DMAC_PRICTRL0_LVLPRI1_Pos             _UINT32_(8)                                          /* (DMAC_PRICTRL0) Level 1 Channel Priority Number Position */
#define DMAC_PRICTRL0_LVLPRI1_Msk             (_UINT32_(0x7) << DMAC_PRICTRL0_LVLPRI1_Pos)         /* (DMAC_PRICTRL0) Level 1 Channel Priority Number Mask */
#define DMAC_PRICTRL0_LVLPRI1(value)          (DMAC_PRICTRL0_LVLPRI1_Msk & (_UINT32_(value) << DMAC_PRICTRL0_LVLPRI1_Pos)) /* Assignment of value for LVLPRI1 in the DMAC_PRICTRL0 register */
#define DMAC_PRICTRL0_RRLVLEN1_Pos            _UINT32_(15)                                         /* (DMAC_PRICTRL0) Level 1 Round-Robin Scheduling Enable Position */
#define DMAC_PRICTRL0_RRLVLEN1_Msk            (_UINT32_(0x1) << DMAC_PRICTRL0_RRLVLEN1_Pos)        /* (DMAC_PRICTRL0) Level 1 Round-Robin Scheduling Enable Mask */
#define DMAC_PRICTRL0_RRLVLEN1(value)         (DMAC_PRICTRL0_RRLVLEN1_Msk & (_UINT32_(value) << DMAC_PRICTRL0_RRLVLEN1_Pos)) /* Assignment of value for RRLVLEN1 in the DMAC_PRICTRL0 register */
#define DMAC_PRICTRL0_LVLPRI2_Pos             _UINT32_(16)                                         /* (DMAC_PRICTRL0) Level 2 Channel Priority Number Position */
#define DMAC_PRICTRL0_LVLPRI2_Msk             (_UINT32_(0x7) << DMAC_PRICTRL0_LVLPRI2_Pos)         /* (DMAC_PRICTRL0) Level 2 Channel Priority Number Mask */
#define DMAC_PRICTRL0_LVLPRI2(value)          (DMAC_PRICTRL0_LVLPRI2_Msk & (_UINT32_(value) << DMAC_PRICTRL0_LVLPRI2_Pos)) /* Assignment of value for LVLPRI2 in the DMAC_PRICTRL0 register */
#define DMAC_PRICTRL0_RRLVLEN2_Pos            _UINT32_(23)                                         /* (DMAC_PRICTRL0) Level 2 Round-Robin Scheduling Enable Position */
#define DMAC_PRICTRL0_RRLVLEN2_Msk            (_UINT32_(0x1) << DMAC_PRICTRL0_RRLVLEN2_Pos)        /* (DMAC_PRICTRL0) Level 2 Round-Robin Scheduling Enable Mask */
#define DMAC_PRICTRL0_RRLVLEN2(value)         (DMAC_PRICTRL0_RRLVLEN2_Msk & (_UINT32_(value) << DMAC_PRICTRL0_RRLVLEN2_Pos)) /* Assignment of value for RRLVLEN2 in the DMAC_PRICTRL0 register */
#define DMAC_PRICTRL0_LVLPRI3_Pos             _UINT32_(24)                                         /* (DMAC_PRICTRL0) Level 3 Channel Priority Number Position */
#define DMAC_PRICTRL0_LVLPRI3_Msk             (_UINT32_(0x7) << DMAC_PRICTRL0_LVLPRI3_Pos)         /* (DMAC_PRICTRL0) Level 3 Channel Priority Number Mask */
#define DMAC_PRICTRL0_LVLPRI3(value)          (DMAC_PRICTRL0_LVLPRI3_Msk & (_UINT32_(value) << DMAC_PRICTRL0_LVLPRI3_Pos)) /* Assignment of value for LVLPRI3 in the DMAC_PRICTRL0 register */
#define DMAC_PRICTRL0_RRLVLEN3_Pos            _UINT32_(31)                                         /* (DMAC_PRICTRL0) Level 3 Round-Robin Scheduling Enable Position */
#define DMAC_PRICTRL0_RRLVLEN3_Msk            (_UINT32_(0x1) << DMAC_PRICTRL0_RRLVLEN3_Pos)        /* (DMAC_PRICTRL0) Level 3 Round-Robin Scheduling Enable Mask */
#define DMAC_PRICTRL0_RRLVLEN3(value)         (DMAC_PRICTRL0_RRLVLEN3_Msk & (_UINT32_(value) << DMAC_PRICTRL0_RRLVLEN3_Pos)) /* Assignment of value for RRLVLEN3 in the DMAC_PRICTRL0 register */
#define DMAC_PRICTRL0_Msk                     _UINT32_(0x87878787)                                 /* (DMAC_PRICTRL0) Register Mask  */


/* -------- DMAC_INTPEND : (DMAC Offset: 0x20) (R/W 16) Interrupt Pending -------- */
#define DMAC_INTPEND_RESETVALUE               _UINT16_(0x00)                                       /*  (DMAC_INTPEND) Interrupt Pending  Reset Value */

#define DMAC_INTPEND_ID_Pos                   _UINT16_(0)                                          /* (DMAC_INTPEND) Channel ID Position */
#define DMAC_INTPEND_ID_Msk                   (_UINT16_(0x7) << DMAC_INTPEND_ID_Pos)               /* (DMAC_INTPEND) Channel ID Mask */
#define DMAC_INTPEND_ID(value)                (DMAC_INTPEND_ID_Msk & (_UINT16_(value) << DMAC_INTPEND_ID_Pos)) /* Assignment of value for ID in the DMAC_INTPEND register */
#define DMAC_INTPEND_TERR_Pos                 _UINT16_(8)                                          /* (DMAC_INTPEND) Transfer Error Position */
#define DMAC_INTPEND_TERR_Msk                 (_UINT16_(0x1) << DMAC_INTPEND_TERR_Pos)             /* (DMAC_INTPEND) Transfer Error Mask */
#define DMAC_INTPEND_TERR(value)              (DMAC_INTPEND_TERR_Msk & (_UINT16_(value) << DMAC_INTPEND_TERR_Pos)) /* Assignment of value for TERR in the DMAC_INTPEND register */
#define DMAC_INTPEND_TCMPL_Pos                _UINT16_(9)                                          /* (DMAC_INTPEND) Transfer Complete Position */
#define DMAC_INTPEND_TCMPL_Msk                (_UINT16_(0x1) << DMAC_INTPEND_TCMPL_Pos)            /* (DMAC_INTPEND) Transfer Complete Mask */
#define DMAC_INTPEND_TCMPL(value)             (DMAC_INTPEND_TCMPL_Msk & (_UINT16_(value) << DMAC_INTPEND_TCMPL_Pos)) /* Assignment of value for TCMPL in the DMAC_INTPEND register */
#define DMAC_INTPEND_SUSP_Pos                 _UINT16_(10)                                         /* (DMAC_INTPEND) Channel Suspend Position */
#define DMAC_INTPEND_SUSP_Msk                 (_UINT16_(0x1) << DMAC_INTPEND_SUSP_Pos)             /* (DMAC_INTPEND) Channel Suspend Mask */
#define DMAC_INTPEND_SUSP(value)              (DMAC_INTPEND_SUSP_Msk & (_UINT16_(value) << DMAC_INTPEND_SUSP_Pos)) /* Assignment of value for SUSP in the DMAC_INTPEND register */
#define DMAC_INTPEND_FERR_Pos                 _UINT16_(13)                                         /* (DMAC_INTPEND) Fetch Error Position */
#define DMAC_INTPEND_FERR_Msk                 (_UINT16_(0x1) << DMAC_INTPEND_FERR_Pos)             /* (DMAC_INTPEND) Fetch Error Mask */
#define DMAC_INTPEND_FERR(value)              (DMAC_INTPEND_FERR_Msk & (_UINT16_(value) << DMAC_INTPEND_FERR_Pos)) /* Assignment of value for FERR in the DMAC_INTPEND register */
#define DMAC_INTPEND_BUSY_Pos                 _UINT16_(14)                                         /* (DMAC_INTPEND) Busy Position */
#define DMAC_INTPEND_BUSY_Msk                 (_UINT16_(0x1) << DMAC_INTPEND_BUSY_Pos)             /* (DMAC_INTPEND) Busy Mask */
#define DMAC_INTPEND_BUSY(value)              (DMAC_INTPEND_BUSY_Msk & (_UINT16_(value) << DMAC_INTPEND_BUSY_Pos)) /* Assignment of value for BUSY in the DMAC_INTPEND register */
#define DMAC_INTPEND_PEND_Pos                 _UINT16_(15)                                         /* (DMAC_INTPEND) Pending Position */
#define DMAC_INTPEND_PEND_Msk                 (_UINT16_(0x1) << DMAC_INTPEND_PEND_Pos)             /* (DMAC_INTPEND) Pending Mask */
#define DMAC_INTPEND_PEND(value)              (DMAC_INTPEND_PEND_Msk & (_UINT16_(value) << DMAC_INTPEND_PEND_Pos)) /* Assignment of value for PEND in the DMAC_INTPEND register */
#define DMAC_INTPEND_Msk                      _UINT16_(0xE707)                                     /* (DMAC_INTPEND) Register Mask  */


/* -------- DMAC_INTSTATUS : (DMAC Offset: 0x24) ( R/ 32) Interrupt Status -------- */
#define DMAC_INTSTATUS_RESETVALUE             _UINT32_(0x00)                                       /*  (DMAC_INTSTATUS) Interrupt Status  Reset Value */

#define DMAC_INTSTATUS_CHINT0_Pos             _UINT32_(0)                                          /* (DMAC_INTSTATUS) Channel 0 Pending Interrupt Position */
#define DMAC_INTSTATUS_CHINT0_Msk             (_UINT32_(0x1) << DMAC_INTSTATUS_CHINT0_Pos)         /* (DMAC_INTSTATUS) Channel 0 Pending Interrupt Mask */
#define DMAC_INTSTATUS_CHINT0(value)          (DMAC_INTSTATUS_CHINT0_Msk & (_UINT32_(value) << DMAC_INTSTATUS_CHINT0_Pos)) /* Assignment of value for CHINT0 in the DMAC_INTSTATUS register */
#define DMAC_INTSTATUS_CHINT1_Pos             _UINT32_(1)                                          /* (DMAC_INTSTATUS) Channel 1 Pending Interrupt Position */
#define DMAC_INTSTATUS_CHINT1_Msk             (_UINT32_(0x1) << DMAC_INTSTATUS_CHINT1_Pos)         /* (DMAC_INTSTATUS) Channel 1 Pending Interrupt Mask */
#define DMAC_INTSTATUS_CHINT1(value)          (DMAC_INTSTATUS_CHINT1_Msk & (_UINT32_(value) << DMAC_INTSTATUS_CHINT1_Pos)) /* Assignment of value for CHINT1 in the DMAC_INTSTATUS register */
#define DMAC_INTSTATUS_CHINT2_Pos             _UINT32_(2)                                          /* (DMAC_INTSTATUS) Channel 2 Pending Interrupt Position */
#define DMAC_INTSTATUS_CHINT2_Msk             (_UINT32_(0x1) << DMAC_INTSTATUS_CHINT2_Pos)         /* (DMAC_INTSTATUS) Channel 2 Pending Interrupt Mask */
#define DMAC_INTSTATUS_CHINT2(value)          (DMAC_INTSTATUS_CHINT2_Msk & (_UINT32_(value) << DMAC_INTSTATUS_CHINT2_Pos)) /* Assignment of value for CHINT2 in the DMAC_INTSTATUS register */
#define DMAC_INTSTATUS_CHINT3_Pos             _UINT32_(3)                                          /* (DMAC_INTSTATUS) Channel 3 Pending Interrupt Position */
#define DMAC_INTSTATUS_CHINT3_Msk             (_UINT32_(0x1) << DMAC_INTSTATUS_CHINT3_Pos)         /* (DMAC_INTSTATUS) Channel 3 Pending Interrupt Mask */
#define DMAC_INTSTATUS_CHINT3(value)          (DMAC_INTSTATUS_CHINT3_Msk & (_UINT32_(value) << DMAC_INTSTATUS_CHINT3_Pos)) /* Assignment of value for CHINT3 in the DMAC_INTSTATUS register */
#define DMAC_INTSTATUS_CHINT4_Pos             _UINT32_(4)                                          /* (DMAC_INTSTATUS) Channel 4 Pending Interrupt Position */
#define DMAC_INTSTATUS_CHINT4_Msk             (_UINT32_(0x1) << DMAC_INTSTATUS_CHINT4_Pos)         /* (DMAC_INTSTATUS) Channel 4 Pending Interrupt Mask */
#define DMAC_INTSTATUS_CHINT4(value)          (DMAC_INTSTATUS_CHINT4_Msk & (_UINT32_(value) << DMAC_INTSTATUS_CHINT4_Pos)) /* Assignment of value for CHINT4 in the DMAC_INTSTATUS register */
#define DMAC_INTSTATUS_CHINT5_Pos             _UINT32_(5)                                          /* (DMAC_INTSTATUS) Channel 5 Pending Interrupt Position */
#define DMAC_INTSTATUS_CHINT5_Msk             (_UINT32_(0x1) << DMAC_INTSTATUS_CHINT5_Pos)         /* (DMAC_INTSTATUS) Channel 5 Pending Interrupt Mask */
#define DMAC_INTSTATUS_CHINT5(value)          (DMAC_INTSTATUS_CHINT5_Msk & (_UINT32_(value) << DMAC_INTSTATUS_CHINT5_Pos)) /* Assignment of value for CHINT5 in the DMAC_INTSTATUS register */
#define DMAC_INTSTATUS_CHINT6_Pos             _UINT32_(6)                                          /* (DMAC_INTSTATUS) Channel 6 Pending Interrupt Position */
#define DMAC_INTSTATUS_CHINT6_Msk             (_UINT32_(0x1) << DMAC_INTSTATUS_CHINT6_Pos)         /* (DMAC_INTSTATUS) Channel 6 Pending Interrupt Mask */
#define DMAC_INTSTATUS_CHINT6(value)          (DMAC_INTSTATUS_CHINT6_Msk & (_UINT32_(value) << DMAC_INTSTATUS_CHINT6_Pos)) /* Assignment of value for CHINT6 in the DMAC_INTSTATUS register */
#define DMAC_INTSTATUS_CHINT7_Pos             _UINT32_(7)                                          /* (DMAC_INTSTATUS) Channel 7 Pending Interrupt Position */
#define DMAC_INTSTATUS_CHINT7_Msk             (_UINT32_(0x1) << DMAC_INTSTATUS_CHINT7_Pos)         /* (DMAC_INTSTATUS) Channel 7 Pending Interrupt Mask */
#define DMAC_INTSTATUS_CHINT7(value)          (DMAC_INTSTATUS_CHINT7_Msk & (_UINT32_(value) << DMAC_INTSTATUS_CHINT7_Pos)) /* Assignment of value for CHINT7 in the DMAC_INTSTATUS register */
#define DMAC_INTSTATUS_Msk                    _UINT32_(0x000000FF)                                 /* (DMAC_INTSTATUS) Register Mask  */

#define DMAC_INTSTATUS_CHINT_Pos              _UINT32_(0)                                          /* (DMAC_INTSTATUS Position) Channel 7 Pending Interrupt */
#define DMAC_INTSTATUS_CHINT_Msk              (_UINT32_(0xFF) << DMAC_INTSTATUS_CHINT_Pos)         /* (DMAC_INTSTATUS Mask) CHINT */
#define DMAC_INTSTATUS_CHINT(value)           (DMAC_INTSTATUS_CHINT_Msk & (_UINT32_(value) << DMAC_INTSTATUS_CHINT_Pos)) 

/* -------- DMAC_BUSYCH : (DMAC Offset: 0x28) ( R/ 32) Busy Channels -------- */
#define DMAC_BUSYCH_RESETVALUE                _UINT32_(0x00)                                       /*  (DMAC_BUSYCH) Busy Channels  Reset Value */

#define DMAC_BUSYCH_BUSYCH0_Pos               _UINT32_(0)                                          /* (DMAC_BUSYCH) Busy Channel 0 Position */
#define DMAC_BUSYCH_BUSYCH0_Msk               (_UINT32_(0x1) << DMAC_BUSYCH_BUSYCH0_Pos)           /* (DMAC_BUSYCH) Busy Channel 0 Mask */
#define DMAC_BUSYCH_BUSYCH0(value)            (DMAC_BUSYCH_BUSYCH0_Msk & (_UINT32_(value) << DMAC_BUSYCH_BUSYCH0_Pos)) /* Assignment of value for BUSYCH0 in the DMAC_BUSYCH register */
#define DMAC_BUSYCH_BUSYCH1_Pos               _UINT32_(1)                                          /* (DMAC_BUSYCH) Busy Channel 1 Position */
#define DMAC_BUSYCH_BUSYCH1_Msk               (_UINT32_(0x1) << DMAC_BUSYCH_BUSYCH1_Pos)           /* (DMAC_BUSYCH) Busy Channel 1 Mask */
#define DMAC_BUSYCH_BUSYCH1(value)            (DMAC_BUSYCH_BUSYCH1_Msk & (_UINT32_(value) << DMAC_BUSYCH_BUSYCH1_Pos)) /* Assignment of value for BUSYCH1 in the DMAC_BUSYCH register */
#define DMAC_BUSYCH_BUSYCH2_Pos               _UINT32_(2)                                          /* (DMAC_BUSYCH) Busy Channel 2 Position */
#define DMAC_BUSYCH_BUSYCH2_Msk               (_UINT32_(0x1) << DMAC_BUSYCH_BUSYCH2_Pos)           /* (DMAC_BUSYCH) Busy Channel 2 Mask */
#define DMAC_BUSYCH_BUSYCH2(value)            (DMAC_BUSYCH_BUSYCH2_Msk & (_UINT32_(value) << DMAC_BUSYCH_BUSYCH2_Pos)) /* Assignment of value for BUSYCH2 in the DMAC_BUSYCH register */
#define DMAC_BUSYCH_BUSYCH3_Pos               _UINT32_(3)                                          /* (DMAC_BUSYCH) Busy Channel 3 Position */
#define DMAC_BUSYCH_BUSYCH3_Msk               (_UINT32_(0x1) << DMAC_BUSYCH_BUSYCH3_Pos)           /* (DMAC_BUSYCH) Busy Channel 3 Mask */
#define DMAC_BUSYCH_BUSYCH3(value)            (DMAC_BUSYCH_BUSYCH3_Msk & (_UINT32_(value) << DMAC_BUSYCH_BUSYCH3_Pos)) /* Assignment of value for BUSYCH3 in the DMAC_BUSYCH register */
#define DMAC_BUSYCH_BUSYCH4_Pos               _UINT32_(4)                                          /* (DMAC_BUSYCH) Busy Channel 4 Position */
#define DMAC_BUSYCH_BUSYCH4_Msk               (_UINT32_(0x1) << DMAC_BUSYCH_BUSYCH4_Pos)           /* (DMAC_BUSYCH) Busy Channel 4 Mask */
#define DMAC_BUSYCH_BUSYCH4(value)            (DMAC_BUSYCH_BUSYCH4_Msk & (_UINT32_(value) << DMAC_BUSYCH_BUSYCH4_Pos)) /* Assignment of value for BUSYCH4 in the DMAC_BUSYCH register */
#define DMAC_BUSYCH_BUSYCH5_Pos               _UINT32_(5)                                          /* (DMAC_BUSYCH) Busy Channel 5 Position */
#define DMAC_BUSYCH_BUSYCH5_Msk               (_UINT32_(0x1) << DMAC_BUSYCH_BUSYCH5_Pos)           /* (DMAC_BUSYCH) Busy Channel 5 Mask */
#define DMAC_BUSYCH_BUSYCH5(value)            (DMAC_BUSYCH_BUSYCH5_Msk & (_UINT32_(value) << DMAC_BUSYCH_BUSYCH5_Pos)) /* Assignment of value for BUSYCH5 in the DMAC_BUSYCH register */
#define DMAC_BUSYCH_BUSYCH6_Pos               _UINT32_(6)                                          /* (DMAC_BUSYCH) Busy Channel 6 Position */
#define DMAC_BUSYCH_BUSYCH6_Msk               (_UINT32_(0x1) << DMAC_BUSYCH_BUSYCH6_Pos)           /* (DMAC_BUSYCH) Busy Channel 6 Mask */
#define DMAC_BUSYCH_BUSYCH6(value)            (DMAC_BUSYCH_BUSYCH6_Msk & (_UINT32_(value) << DMAC_BUSYCH_BUSYCH6_Pos)) /* Assignment of value for BUSYCH6 in the DMAC_BUSYCH register */
#define DMAC_BUSYCH_BUSYCH7_Pos               _UINT32_(7)                                          /* (DMAC_BUSYCH) Busy Channel 7 Position */
#define DMAC_BUSYCH_BUSYCH7_Msk               (_UINT32_(0x1) << DMAC_BUSYCH_BUSYCH7_Pos)           /* (DMAC_BUSYCH) Busy Channel 7 Mask */
#define DMAC_BUSYCH_BUSYCH7(value)            (DMAC_BUSYCH_BUSYCH7_Msk & (_UINT32_(value) << DMAC_BUSYCH_BUSYCH7_Pos)) /* Assignment of value for BUSYCH7 in the DMAC_BUSYCH register */
#define DMAC_BUSYCH_Msk                       _UINT32_(0x000000FF)                                 /* (DMAC_BUSYCH) Register Mask  */

#define DMAC_BUSYCH_BUSYCH_Pos                _UINT32_(0)                                          /* (DMAC_BUSYCH Position) Busy Channel 7 */
#define DMAC_BUSYCH_BUSYCH_Msk                (_UINT32_(0xFF) << DMAC_BUSYCH_BUSYCH_Pos)           /* (DMAC_BUSYCH Mask) BUSYCH */
#define DMAC_BUSYCH_BUSYCH(value)             (DMAC_BUSYCH_BUSYCH_Msk & (_UINT32_(value) << DMAC_BUSYCH_BUSYCH_Pos)) 

/* -------- DMAC_PENDCH : (DMAC Offset: 0x2C) ( R/ 32) Pending Channels -------- */
#define DMAC_PENDCH_RESETVALUE                _UINT32_(0x00)                                       /*  (DMAC_PENDCH) Pending Channels  Reset Value */

#define DMAC_PENDCH_PENDCH0_Pos               _UINT32_(0)                                          /* (DMAC_PENDCH) Pending Channel 0 Position */
#define DMAC_PENDCH_PENDCH0_Msk               (_UINT32_(0x1) << DMAC_PENDCH_PENDCH0_Pos)           /* (DMAC_PENDCH) Pending Channel 0 Mask */
#define DMAC_PENDCH_PENDCH0(value)            (DMAC_PENDCH_PENDCH0_Msk & (_UINT32_(value) << DMAC_PENDCH_PENDCH0_Pos)) /* Assignment of value for PENDCH0 in the DMAC_PENDCH register */
#define DMAC_PENDCH_PENDCH1_Pos               _UINT32_(1)                                          /* (DMAC_PENDCH) Pending Channel 1 Position */
#define DMAC_PENDCH_PENDCH1_Msk               (_UINT32_(0x1) << DMAC_PENDCH_PENDCH1_Pos)           /* (DMAC_PENDCH) Pending Channel 1 Mask */
#define DMAC_PENDCH_PENDCH1(value)            (DMAC_PENDCH_PENDCH1_Msk & (_UINT32_(value) << DMAC_PENDCH_PENDCH1_Pos)) /* Assignment of value for PENDCH1 in the DMAC_PENDCH register */
#define DMAC_PENDCH_PENDCH2_Pos               _UINT32_(2)                                          /* (DMAC_PENDCH) Pending Channel 2 Position */
#define DMAC_PENDCH_PENDCH2_Msk               (_UINT32_(0x1) << DMAC_PENDCH_PENDCH2_Pos)           /* (DMAC_PENDCH) Pending Channel 2 Mask */
#define DMAC_PENDCH_PENDCH2(value)            (DMAC_PENDCH_PENDCH2_Msk & (_UINT32_(value) << DMAC_PENDCH_PENDCH2_Pos)) /* Assignment of value for PENDCH2 in the DMAC_PENDCH register */
#define DMAC_PENDCH_PENDCH3_Pos               _UINT32_(3)                                          /* (DMAC_PENDCH) Pending Channel 3 Position */
#define DMAC_PENDCH_PENDCH3_Msk               (_UINT32_(0x1) << DMAC_PENDCH_PENDCH3_Pos)           /* (DMAC_PENDCH) Pending Channel 3 Mask */
#define DMAC_PENDCH_PENDCH3(value)            (DMAC_PENDCH_PENDCH3_Msk & (_UINT32_(value) << DMAC_PENDCH_PENDCH3_Pos)) /* Assignment of value for PENDCH3 in the DMAC_PENDCH register */
#define DMAC_PENDCH_PENDCH4_Pos               _UINT32_(4)                                          /* (DMAC_PENDCH) Pending Channel 4 Position */
#define DMAC_PENDCH_PENDCH4_Msk               (_UINT32_(0x1) << DMAC_PENDCH_PENDCH4_Pos)           /* (DMAC_PENDCH) Pending Channel 4 Mask */
#define DMAC_PENDCH_PENDCH4(value)            (DMAC_PENDCH_PENDCH4_Msk & (_UINT32_(value) << DMAC_PENDCH_PENDCH4_Pos)) /* Assignment of value for PENDCH4 in the DMAC_PENDCH register */
#define DMAC_PENDCH_PENDCH5_Pos               _UINT32_(5)                                          /* (DMAC_PENDCH) Pending Channel 5 Position */
#define DMAC_PENDCH_PENDCH5_Msk               (_UINT32_(0x1) << DMAC_PENDCH_PENDCH5_Pos)           /* (DMAC_PENDCH) Pending Channel 5 Mask */
#define DMAC_PENDCH_PENDCH5(value)            (DMAC_PENDCH_PENDCH5_Msk & (_UINT32_(value) << DMAC_PENDCH_PENDCH5_Pos)) /* Assignment of value for PENDCH5 in the DMAC_PENDCH register */
#define DMAC_PENDCH_PENDCH6_Pos               _UINT32_(6)                                          /* (DMAC_PENDCH) Pending Channel 6 Position */
#define DMAC_PENDCH_PENDCH6_Msk               (_UINT32_(0x1) << DMAC_PENDCH_PENDCH6_Pos)           /* (DMAC_PENDCH) Pending Channel 6 Mask */
#define DMAC_PENDCH_PENDCH6(value)            (DMAC_PENDCH_PENDCH6_Msk & (_UINT32_(value) << DMAC_PENDCH_PENDCH6_Pos)) /* Assignment of value for PENDCH6 in the DMAC_PENDCH register */
#define DMAC_PENDCH_PENDCH7_Pos               _UINT32_(7)                                          /* (DMAC_PENDCH) Pending Channel 7 Position */
#define DMAC_PENDCH_PENDCH7_Msk               (_UINT32_(0x1) << DMAC_PENDCH_PENDCH7_Pos)           /* (DMAC_PENDCH) Pending Channel 7 Mask */
#define DMAC_PENDCH_PENDCH7(value)            (DMAC_PENDCH_PENDCH7_Msk & (_UINT32_(value) << DMAC_PENDCH_PENDCH7_Pos)) /* Assignment of value for PENDCH7 in the DMAC_PENDCH register */
#define DMAC_PENDCH_Msk                       _UINT32_(0x000000FF)                                 /* (DMAC_PENDCH) Register Mask  */

#define DMAC_PENDCH_PENDCH_Pos                _UINT32_(0)                                          /* (DMAC_PENDCH Position) Pending Channel 7 */
#define DMAC_PENDCH_PENDCH_Msk                (_UINT32_(0xFF) << DMAC_PENDCH_PENDCH_Pos)           /* (DMAC_PENDCH Mask) PENDCH */
#define DMAC_PENDCH_PENDCH(value)             (DMAC_PENDCH_PENDCH_Msk & (_UINT32_(value) << DMAC_PENDCH_PENDCH_Pos)) 

/* -------- DMAC_ACTIVE : (DMAC Offset: 0x30) ( R/ 32) Active Channel and Levels -------- */
#define DMAC_ACTIVE_RESETVALUE                _UINT32_(0x00)                                       /*  (DMAC_ACTIVE) Active Channel and Levels  Reset Value */

#define DMAC_ACTIVE_LVLEX0_Pos                _UINT32_(0)                                          /* (DMAC_ACTIVE) Level 0 Channel Trigger Request Executing Position */
#define DMAC_ACTIVE_LVLEX0_Msk                (_UINT32_(0x1) << DMAC_ACTIVE_LVLEX0_Pos)            /* (DMAC_ACTIVE) Level 0 Channel Trigger Request Executing Mask */
#define DMAC_ACTIVE_LVLEX0(value)             (DMAC_ACTIVE_LVLEX0_Msk & (_UINT32_(value) << DMAC_ACTIVE_LVLEX0_Pos)) /* Assignment of value for LVLEX0 in the DMAC_ACTIVE register */
#define DMAC_ACTIVE_LVLEX1_Pos                _UINT32_(1)                                          /* (DMAC_ACTIVE) Level 1 Channel Trigger Request Executing Position */
#define DMAC_ACTIVE_LVLEX1_Msk                (_UINT32_(0x1) << DMAC_ACTIVE_LVLEX1_Pos)            /* (DMAC_ACTIVE) Level 1 Channel Trigger Request Executing Mask */
#define DMAC_ACTIVE_LVLEX1(value)             (DMAC_ACTIVE_LVLEX1_Msk & (_UINT32_(value) << DMAC_ACTIVE_LVLEX1_Pos)) /* Assignment of value for LVLEX1 in the DMAC_ACTIVE register */
#define DMAC_ACTIVE_LVLEX2_Pos                _UINT32_(2)                                          /* (DMAC_ACTIVE) Level 2 Channel Trigger Request Executing Position */
#define DMAC_ACTIVE_LVLEX2_Msk                (_UINT32_(0x1) << DMAC_ACTIVE_LVLEX2_Pos)            /* (DMAC_ACTIVE) Level 2 Channel Trigger Request Executing Mask */
#define DMAC_ACTIVE_LVLEX2(value)             (DMAC_ACTIVE_LVLEX2_Msk & (_UINT32_(value) << DMAC_ACTIVE_LVLEX2_Pos)) /* Assignment of value for LVLEX2 in the DMAC_ACTIVE register */
#define DMAC_ACTIVE_LVLEX3_Pos                _UINT32_(3)                                          /* (DMAC_ACTIVE) Level 3 Channel Trigger Request Executing Position */
#define DMAC_ACTIVE_LVLEX3_Msk                (_UINT32_(0x1) << DMAC_ACTIVE_LVLEX3_Pos)            /* (DMAC_ACTIVE) Level 3 Channel Trigger Request Executing Mask */
#define DMAC_ACTIVE_LVLEX3(value)             (DMAC_ACTIVE_LVLEX3_Msk & (_UINT32_(value) << DMAC_ACTIVE_LVLEX3_Pos)) /* Assignment of value for LVLEX3 in the DMAC_ACTIVE register */
#define DMAC_ACTIVE_ID_Pos                    _UINT32_(8)                                          /* (DMAC_ACTIVE) Active Channel ID Position */
#define DMAC_ACTIVE_ID_Msk                    (_UINT32_(0x1F) << DMAC_ACTIVE_ID_Pos)               /* (DMAC_ACTIVE) Active Channel ID Mask */
#define DMAC_ACTIVE_ID(value)                 (DMAC_ACTIVE_ID_Msk & (_UINT32_(value) << DMAC_ACTIVE_ID_Pos)) /* Assignment of value for ID in the DMAC_ACTIVE register */
#define DMAC_ACTIVE_ABUSY_Pos                 _UINT32_(15)                                         /* (DMAC_ACTIVE) Active Channel Busy Position */
#define DMAC_ACTIVE_ABUSY_Msk                 (_UINT32_(0x1) << DMAC_ACTIVE_ABUSY_Pos)             /* (DMAC_ACTIVE) Active Channel Busy Mask */
#define DMAC_ACTIVE_ABUSY(value)              (DMAC_ACTIVE_ABUSY_Msk & (_UINT32_(value) << DMAC_ACTIVE_ABUSY_Pos)) /* Assignment of value for ABUSY in the DMAC_ACTIVE register */
#define DMAC_ACTIVE_BTCNT_Pos                 _UINT32_(16)                                         /* (DMAC_ACTIVE) Active Channel Block Transfer Count Position */
#define DMAC_ACTIVE_BTCNT_Msk                 (_UINT32_(0xFFFF) << DMAC_ACTIVE_BTCNT_Pos)          /* (DMAC_ACTIVE) Active Channel Block Transfer Count Mask */
#define DMAC_ACTIVE_BTCNT(value)              (DMAC_ACTIVE_BTCNT_Msk & (_UINT32_(value) << DMAC_ACTIVE_BTCNT_Pos)) /* Assignment of value for BTCNT in the DMAC_ACTIVE register */
#define DMAC_ACTIVE_Msk                       _UINT32_(0xFFFF9F0F)                                 /* (DMAC_ACTIVE) Register Mask  */

#define DMAC_ACTIVE_LVLEX_Pos                 _UINT32_(0)                                          /* (DMAC_ACTIVE Position) Level x Channel Trigger Request Executing */
#define DMAC_ACTIVE_LVLEX_Msk                 (_UINT32_(0xF) << DMAC_ACTIVE_LVLEX_Pos)             /* (DMAC_ACTIVE Mask) LVLEX */
#define DMAC_ACTIVE_LVLEX(value)              (DMAC_ACTIVE_LVLEX_Msk & (_UINT32_(value) << DMAC_ACTIVE_LVLEX_Pos)) 

/* -------- DMAC_BASEADDR : (DMAC Offset: 0x34) (R/W 32) Descriptor Memory Section Base Address -------- */
#define DMAC_BASEADDR_RESETVALUE              _UINT32_(0x00)                                       /*  (DMAC_BASEADDR) Descriptor Memory Section Base Address  Reset Value */

#define DMAC_BASEADDR_BASEADDR_Pos            _UINT32_(0)                                          /* (DMAC_BASEADDR) Descriptor Memory Base Address Position */
#define DMAC_BASEADDR_BASEADDR_Msk            (_UINT32_(0xFFFFFFFF) << DMAC_BASEADDR_BASEADDR_Pos) /* (DMAC_BASEADDR) Descriptor Memory Base Address Mask */
#define DMAC_BASEADDR_BASEADDR(value)         (DMAC_BASEADDR_BASEADDR_Msk & (_UINT32_(value) << DMAC_BASEADDR_BASEADDR_Pos)) /* Assignment of value for BASEADDR in the DMAC_BASEADDR register */
#define DMAC_BASEADDR_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (DMAC_BASEADDR) Register Mask  */


/* -------- DMAC_WRBADDR : (DMAC Offset: 0x38) (R/W 32) Write-Back Memory Section Base Address -------- */
#define DMAC_WRBADDR_RESETVALUE               _UINT32_(0x00)                                       /*  (DMAC_WRBADDR) Write-Back Memory Section Base Address  Reset Value */

#define DMAC_WRBADDR_WRBADDR_Pos              _UINT32_(0)                                          /* (DMAC_WRBADDR) Write-Back Memory Base Address Position */
#define DMAC_WRBADDR_WRBADDR_Msk              (_UINT32_(0xFFFFFFFF) << DMAC_WRBADDR_WRBADDR_Pos)   /* (DMAC_WRBADDR) Write-Back Memory Base Address Mask */
#define DMAC_WRBADDR_WRBADDR(value)           (DMAC_WRBADDR_WRBADDR_Msk & (_UINT32_(value) << DMAC_WRBADDR_WRBADDR_Pos)) /* Assignment of value for WRBADDR in the DMAC_WRBADDR register */
#define DMAC_WRBADDR_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (DMAC_WRBADDR) Register Mask  */


/* -------- DMAC_CHID : (DMAC Offset: 0x3F) (R/W 8) Channel ID -------- */
#define DMAC_CHID_RESETVALUE                  _UINT8_(0x00)                                        /*  (DMAC_CHID) Channel ID  Reset Value */

#define DMAC_CHID_ID_Pos                      _UINT8_(0)                                           /* (DMAC_CHID) Channel ID Position */
#define DMAC_CHID_ID_Msk                      (_UINT8_(0x7) << DMAC_CHID_ID_Pos)                   /* (DMAC_CHID) Channel ID Mask */
#define DMAC_CHID_ID(value)                   (DMAC_CHID_ID_Msk & (_UINT8_(value) << DMAC_CHID_ID_Pos)) /* Assignment of value for ID in the DMAC_CHID register */
#define DMAC_CHID_Msk                         _UINT8_(0x07)                                        /* (DMAC_CHID) Register Mask  */


/* -------- DMAC_CHCTRLA : (DMAC Offset: 0x40) (R/W 8) Channel Control A -------- */
#define DMAC_CHCTRLA_RESETVALUE               _UINT8_(0x00)                                        /*  (DMAC_CHCTRLA) Channel Control A  Reset Value */

#define DMAC_CHCTRLA_SWRST_Pos                _UINT8_(0)                                           /* (DMAC_CHCTRLA) Channel Software Reset Position */
#define DMAC_CHCTRLA_SWRST_Msk                (_UINT8_(0x1) << DMAC_CHCTRLA_SWRST_Pos)             /* (DMAC_CHCTRLA) Channel Software Reset Mask */
#define DMAC_CHCTRLA_SWRST(value)             (DMAC_CHCTRLA_SWRST_Msk & (_UINT8_(value) << DMAC_CHCTRLA_SWRST_Pos)) /* Assignment of value for SWRST in the DMAC_CHCTRLA register */
#define DMAC_CHCTRLA_ENABLE_Pos               _UINT8_(1)                                           /* (DMAC_CHCTRLA) Channel Enable Position */
#define DMAC_CHCTRLA_ENABLE_Msk               (_UINT8_(0x1) << DMAC_CHCTRLA_ENABLE_Pos)            /* (DMAC_CHCTRLA) Channel Enable Mask */
#define DMAC_CHCTRLA_ENABLE(value)            (DMAC_CHCTRLA_ENABLE_Msk & (_UINT8_(value) << DMAC_CHCTRLA_ENABLE_Pos)) /* Assignment of value for ENABLE in the DMAC_CHCTRLA register */
#define DMAC_CHCTRLA_RUNSTDBY_Pos             _UINT8_(6)                                           /* (DMAC_CHCTRLA) Channel run in standby Position */
#define DMAC_CHCTRLA_RUNSTDBY_Msk             (_UINT8_(0x1) << DMAC_CHCTRLA_RUNSTDBY_Pos)          /* (DMAC_CHCTRLA) Channel run in standby Mask */
#define DMAC_CHCTRLA_RUNSTDBY(value)          (DMAC_CHCTRLA_RUNSTDBY_Msk & (_UINT8_(value) << DMAC_CHCTRLA_RUNSTDBY_Pos)) /* Assignment of value for RUNSTDBY in the DMAC_CHCTRLA register */
#define DMAC_CHCTRLA_Msk                      _UINT8_(0x43)                                        /* (DMAC_CHCTRLA) Register Mask  */


/* -------- DMAC_CHCTRLB : (DMAC Offset: 0x44) (R/W 32) Channel Control B -------- */
#define DMAC_CHCTRLB_RESETVALUE               _UINT32_(0x00)                                       /*  (DMAC_CHCTRLB) Channel Control B  Reset Value */

#define DMAC_CHCTRLB_EVACT_Pos                _UINT32_(0)                                          /* (DMAC_CHCTRLB) Event Input Action Position */
#define DMAC_CHCTRLB_EVACT_Msk                (_UINT32_(0x7) << DMAC_CHCTRLB_EVACT_Pos)            /* (DMAC_CHCTRLB) Event Input Action Mask */
#define DMAC_CHCTRLB_EVACT(value)             (DMAC_CHCTRLB_EVACT_Msk & (_UINT32_(value) << DMAC_CHCTRLB_EVACT_Pos)) /* Assignment of value for EVACT in the DMAC_CHCTRLB register */
#define   DMAC_CHCTRLB_EVACT_NOACT_Val        _UINT32_(0x0)                                        /* (DMAC_CHCTRLB) No action  */
#define   DMAC_CHCTRLB_EVACT_TRIG_Val         _UINT32_(0x1)                                        /* (DMAC_CHCTRLB) Transfer and periodic transfer trigger  */
#define   DMAC_CHCTRLB_EVACT_CTRIG_Val        _UINT32_(0x2)                                        /* (DMAC_CHCTRLB) Conditional transfer trigger  */
#define   DMAC_CHCTRLB_EVACT_CBLOCK_Val       _UINT32_(0x3)                                        /* (DMAC_CHCTRLB) Conditional block transfer  */
#define   DMAC_CHCTRLB_EVACT_SUSPEND_Val      _UINT32_(0x4)                                        /* (DMAC_CHCTRLB) Channel suspend operation  */
#define   DMAC_CHCTRLB_EVACT_RESUME_Val       _UINT32_(0x5)                                        /* (DMAC_CHCTRLB) Channel resume operation  */
#define   DMAC_CHCTRLB_EVACT_SSKIP_Val        _UINT32_(0x6)                                        /* (DMAC_CHCTRLB) Skip next block suspend action  */
#define DMAC_CHCTRLB_EVACT_NOACT              (DMAC_CHCTRLB_EVACT_NOACT_Val << DMAC_CHCTRLB_EVACT_Pos) /* (DMAC_CHCTRLB) No action Position */
#define DMAC_CHCTRLB_EVACT_TRIG               (DMAC_CHCTRLB_EVACT_TRIG_Val << DMAC_CHCTRLB_EVACT_Pos) /* (DMAC_CHCTRLB) Transfer and periodic transfer trigger Position */
#define DMAC_CHCTRLB_EVACT_CTRIG              (DMAC_CHCTRLB_EVACT_CTRIG_Val << DMAC_CHCTRLB_EVACT_Pos) /* (DMAC_CHCTRLB) Conditional transfer trigger Position */
#define DMAC_CHCTRLB_EVACT_CBLOCK             (DMAC_CHCTRLB_EVACT_CBLOCK_Val << DMAC_CHCTRLB_EVACT_Pos) /* (DMAC_CHCTRLB) Conditional block transfer Position */
#define DMAC_CHCTRLB_EVACT_SUSPEND            (DMAC_CHCTRLB_EVACT_SUSPEND_Val << DMAC_CHCTRLB_EVACT_Pos) /* (DMAC_CHCTRLB) Channel suspend operation Position */
#define DMAC_CHCTRLB_EVACT_RESUME             (DMAC_CHCTRLB_EVACT_RESUME_Val << DMAC_CHCTRLB_EVACT_Pos) /* (DMAC_CHCTRLB) Channel resume operation Position */
#define DMAC_CHCTRLB_EVACT_SSKIP              (DMAC_CHCTRLB_EVACT_SSKIP_Val << DMAC_CHCTRLB_EVACT_Pos) /* (DMAC_CHCTRLB) Skip next block suspend action Position */
#define DMAC_CHCTRLB_EVIE_Pos                 _UINT32_(3)                                          /* (DMAC_CHCTRLB) Channel Event Input Enable Position */
#define DMAC_CHCTRLB_EVIE_Msk                 (_UINT32_(0x1) << DMAC_CHCTRLB_EVIE_Pos)             /* (DMAC_CHCTRLB) Channel Event Input Enable Mask */
#define DMAC_CHCTRLB_EVIE(value)              (DMAC_CHCTRLB_EVIE_Msk & (_UINT32_(value) << DMAC_CHCTRLB_EVIE_Pos)) /* Assignment of value for EVIE in the DMAC_CHCTRLB register */
#define DMAC_CHCTRLB_EVOE_Pos                 _UINT32_(4)                                          /* (DMAC_CHCTRLB) Channel Event Output Enable Position */
#define DMAC_CHCTRLB_EVOE_Msk                 (_UINT32_(0x1) << DMAC_CHCTRLB_EVOE_Pos)             /* (DMAC_CHCTRLB) Channel Event Output Enable Mask */
#define DMAC_CHCTRLB_EVOE(value)              (DMAC_CHCTRLB_EVOE_Msk & (_UINT32_(value) << DMAC_CHCTRLB_EVOE_Pos)) /* Assignment of value for EVOE in the DMAC_CHCTRLB register */
#define DMAC_CHCTRLB_LVL_Pos                  _UINT32_(5)                                          /* (DMAC_CHCTRLB) Channel Arbitration Level Position */
#define DMAC_CHCTRLB_LVL_Msk                  (_UINT32_(0x3) << DMAC_CHCTRLB_LVL_Pos)              /* (DMAC_CHCTRLB) Channel Arbitration Level Mask */
#define DMAC_CHCTRLB_LVL(value)               (DMAC_CHCTRLB_LVL_Msk & (_UINT32_(value) << DMAC_CHCTRLB_LVL_Pos)) /* Assignment of value for LVL in the DMAC_CHCTRLB register */
#define DMAC_CHCTRLB_TRIGSRC_Pos              _UINT32_(8)                                          /* (DMAC_CHCTRLB) Trigger Source Position */
#define DMAC_CHCTRLB_TRIGSRC_Msk              (_UINT32_(0x3F) << DMAC_CHCTRLB_TRIGSRC_Pos)         /* (DMAC_CHCTRLB) Trigger Source Mask */
#define DMAC_CHCTRLB_TRIGSRC(value)           (DMAC_CHCTRLB_TRIGSRC_Msk & (_UINT32_(value) << DMAC_CHCTRLB_TRIGSRC_Pos)) /* Assignment of value for TRIGSRC in the DMAC_CHCTRLB register */
#define   DMAC_CHCTRLB_TRIGSRC_DISABLE_Val    _UINT32_(0x0)                                        /* (DMAC_CHCTRLB) Only software/event triggers  */
#define DMAC_CHCTRLB_TRIGSRC_DISABLE          (DMAC_CHCTRLB_TRIGSRC_DISABLE_Val << DMAC_CHCTRLB_TRIGSRC_Pos) /* (DMAC_CHCTRLB) Only software/event triggers Position */
#define DMAC_CHCTRLB_TRIGACT_Pos              _UINT32_(22)                                         /* (DMAC_CHCTRLB) Trigger Action Position */
#define DMAC_CHCTRLB_TRIGACT_Msk              (_UINT32_(0x3) << DMAC_CHCTRLB_TRIGACT_Pos)          /* (DMAC_CHCTRLB) Trigger Action Mask */
#define DMAC_CHCTRLB_TRIGACT(value)           (DMAC_CHCTRLB_TRIGACT_Msk & (_UINT32_(value) << DMAC_CHCTRLB_TRIGACT_Pos)) /* Assignment of value for TRIGACT in the DMAC_CHCTRLB register */
#define   DMAC_CHCTRLB_TRIGACT_BLOCK_Val      _UINT32_(0x0)                                        /* (DMAC_CHCTRLB) One trigger required for each block transfer  */
#define   DMAC_CHCTRLB_TRIGACT_BEAT_Val       _UINT32_(0x2)                                        /* (DMAC_CHCTRLB) One trigger required for each beat transfer  */
#define   DMAC_CHCTRLB_TRIGACT_TRANSACTION_Val _UINT32_(0x3)                                        /* (DMAC_CHCTRLB) One trigger required for each transaction  */
#define DMAC_CHCTRLB_TRIGACT_BLOCK            (DMAC_CHCTRLB_TRIGACT_BLOCK_Val << DMAC_CHCTRLB_TRIGACT_Pos) /* (DMAC_CHCTRLB) One trigger required for each block transfer Position */
#define DMAC_CHCTRLB_TRIGACT_BEAT             (DMAC_CHCTRLB_TRIGACT_BEAT_Val << DMAC_CHCTRLB_TRIGACT_Pos) /* (DMAC_CHCTRLB) One trigger required for each beat transfer Position */
#define DMAC_CHCTRLB_TRIGACT_TRANSACTION      (DMAC_CHCTRLB_TRIGACT_TRANSACTION_Val << DMAC_CHCTRLB_TRIGACT_Pos) /* (DMAC_CHCTRLB) One trigger required for each transaction Position */
#define DMAC_CHCTRLB_CMD_Pos                  _UINT32_(24)                                         /* (DMAC_CHCTRLB) Software Command Position */
#define DMAC_CHCTRLB_CMD_Msk                  (_UINT32_(0x3) << DMAC_CHCTRLB_CMD_Pos)              /* (DMAC_CHCTRLB) Software Command Mask */
#define DMAC_CHCTRLB_CMD(value)               (DMAC_CHCTRLB_CMD_Msk & (_UINT32_(value) << DMAC_CHCTRLB_CMD_Pos)) /* Assignment of value for CMD in the DMAC_CHCTRLB register */
#define   DMAC_CHCTRLB_CMD_NOACT_Val          _UINT32_(0x0)                                        /* (DMAC_CHCTRLB) No action  */
#define   DMAC_CHCTRLB_CMD_SUSPEND_Val        _UINT32_(0x1)                                        /* (DMAC_CHCTRLB) Channel suspend operation  */
#define   DMAC_CHCTRLB_CMD_RESUME_Val         _UINT32_(0x2)                                        /* (DMAC_CHCTRLB) Channel resume operation  */
#define DMAC_CHCTRLB_CMD_NOACT                (DMAC_CHCTRLB_CMD_NOACT_Val << DMAC_CHCTRLB_CMD_Pos) /* (DMAC_CHCTRLB) No action Position */
#define DMAC_CHCTRLB_CMD_SUSPEND              (DMAC_CHCTRLB_CMD_SUSPEND_Val << DMAC_CHCTRLB_CMD_Pos) /* (DMAC_CHCTRLB) Channel suspend operation Position */
#define DMAC_CHCTRLB_CMD_RESUME               (DMAC_CHCTRLB_CMD_RESUME_Val << DMAC_CHCTRLB_CMD_Pos) /* (DMAC_CHCTRLB) Channel resume operation Position */
#define DMAC_CHCTRLB_Msk                      _UINT32_(0x03C03F7F)                                 /* (DMAC_CHCTRLB) Register Mask  */


/* -------- DMAC_CHINTENCLR : (DMAC Offset: 0x4C) (R/W 8) Channel Interrupt Enable Clear -------- */
#define DMAC_CHINTENCLR_RESETVALUE            _UINT8_(0x00)                                        /*  (DMAC_CHINTENCLR) Channel Interrupt Enable Clear  Reset Value */

#define DMAC_CHINTENCLR_TERR_Pos              _UINT8_(0)                                           /* (DMAC_CHINTENCLR) Channel Transfer Error Interrupt Enable Position */
#define DMAC_CHINTENCLR_TERR_Msk              (_UINT8_(0x1) << DMAC_CHINTENCLR_TERR_Pos)           /* (DMAC_CHINTENCLR) Channel Transfer Error Interrupt Enable Mask */
#define DMAC_CHINTENCLR_TERR(value)           (DMAC_CHINTENCLR_TERR_Msk & (_UINT8_(value) << DMAC_CHINTENCLR_TERR_Pos)) /* Assignment of value for TERR in the DMAC_CHINTENCLR register */
#define DMAC_CHINTENCLR_TCMPL_Pos             _UINT8_(1)                                           /* (DMAC_CHINTENCLR) Channel Transfer Complete Interrupt Enable Position */
#define DMAC_CHINTENCLR_TCMPL_Msk             (_UINT8_(0x1) << DMAC_CHINTENCLR_TCMPL_Pos)          /* (DMAC_CHINTENCLR) Channel Transfer Complete Interrupt Enable Mask */
#define DMAC_CHINTENCLR_TCMPL(value)          (DMAC_CHINTENCLR_TCMPL_Msk & (_UINT8_(value) << DMAC_CHINTENCLR_TCMPL_Pos)) /* Assignment of value for TCMPL in the DMAC_CHINTENCLR register */
#define DMAC_CHINTENCLR_SUSP_Pos              _UINT8_(2)                                           /* (DMAC_CHINTENCLR) Channel Suspend Interrupt Enable Position */
#define DMAC_CHINTENCLR_SUSP_Msk              (_UINT8_(0x1) << DMAC_CHINTENCLR_SUSP_Pos)           /* (DMAC_CHINTENCLR) Channel Suspend Interrupt Enable Mask */
#define DMAC_CHINTENCLR_SUSP(value)           (DMAC_CHINTENCLR_SUSP_Msk & (_UINT8_(value) << DMAC_CHINTENCLR_SUSP_Pos)) /* Assignment of value for SUSP in the DMAC_CHINTENCLR register */
#define DMAC_CHINTENCLR_Msk                   _UINT8_(0x07)                                        /* (DMAC_CHINTENCLR) Register Mask  */


/* -------- DMAC_CHINTENSET : (DMAC Offset: 0x4D) (R/W 8) Channel Interrupt Enable Set -------- */
#define DMAC_CHINTENSET_RESETVALUE            _UINT8_(0x00)                                        /*  (DMAC_CHINTENSET) Channel Interrupt Enable Set  Reset Value */

#define DMAC_CHINTENSET_TERR_Pos              _UINT8_(0)                                           /* (DMAC_CHINTENSET) Channel Transfer Error Interrupt Enable Position */
#define DMAC_CHINTENSET_TERR_Msk              (_UINT8_(0x1) << DMAC_CHINTENSET_TERR_Pos)           /* (DMAC_CHINTENSET) Channel Transfer Error Interrupt Enable Mask */
#define DMAC_CHINTENSET_TERR(value)           (DMAC_CHINTENSET_TERR_Msk & (_UINT8_(value) << DMAC_CHINTENSET_TERR_Pos)) /* Assignment of value for TERR in the DMAC_CHINTENSET register */
#define DMAC_CHINTENSET_TCMPL_Pos             _UINT8_(1)                                           /* (DMAC_CHINTENSET) Channel Transfer Complete Interrupt Enable Position */
#define DMAC_CHINTENSET_TCMPL_Msk             (_UINT8_(0x1) << DMAC_CHINTENSET_TCMPL_Pos)          /* (DMAC_CHINTENSET) Channel Transfer Complete Interrupt Enable Mask */
#define DMAC_CHINTENSET_TCMPL(value)          (DMAC_CHINTENSET_TCMPL_Msk & (_UINT8_(value) << DMAC_CHINTENSET_TCMPL_Pos)) /* Assignment of value for TCMPL in the DMAC_CHINTENSET register */
#define DMAC_CHINTENSET_SUSP_Pos              _UINT8_(2)                                           /* (DMAC_CHINTENSET) Channel Suspend Interrupt Enable Position */
#define DMAC_CHINTENSET_SUSP_Msk              (_UINT8_(0x1) << DMAC_CHINTENSET_SUSP_Pos)           /* (DMAC_CHINTENSET) Channel Suspend Interrupt Enable Mask */
#define DMAC_CHINTENSET_SUSP(value)           (DMAC_CHINTENSET_SUSP_Msk & (_UINT8_(value) << DMAC_CHINTENSET_SUSP_Pos)) /* Assignment of value for SUSP in the DMAC_CHINTENSET register */
#define DMAC_CHINTENSET_Msk                   _UINT8_(0x07)                                        /* (DMAC_CHINTENSET) Register Mask  */


/* -------- DMAC_CHINTFLAG : (DMAC Offset: 0x4E) (R/W 8) Channel Interrupt Flag Status and Clear -------- */
#define DMAC_CHINTFLAG_RESETVALUE             _UINT8_(0x00)                                        /*  (DMAC_CHINTFLAG) Channel Interrupt Flag Status and Clear  Reset Value */

#define DMAC_CHINTFLAG_TERR_Pos               _UINT8_(0)                                           /* (DMAC_CHINTFLAG) Channel Transfer Error Position */
#define DMAC_CHINTFLAG_TERR_Msk               (_UINT8_(0x1) << DMAC_CHINTFLAG_TERR_Pos)            /* (DMAC_CHINTFLAG) Channel Transfer Error Mask */
#define DMAC_CHINTFLAG_TERR(value)            (DMAC_CHINTFLAG_TERR_Msk & (_UINT8_(value) << DMAC_CHINTFLAG_TERR_Pos)) /* Assignment of value for TERR in the DMAC_CHINTFLAG register */
#define DMAC_CHINTFLAG_TCMPL_Pos              _UINT8_(1)                                           /* (DMAC_CHINTFLAG) Channel Transfer Complete Position */
#define DMAC_CHINTFLAG_TCMPL_Msk              (_UINT8_(0x1) << DMAC_CHINTFLAG_TCMPL_Pos)           /* (DMAC_CHINTFLAG) Channel Transfer Complete Mask */
#define DMAC_CHINTFLAG_TCMPL(value)           (DMAC_CHINTFLAG_TCMPL_Msk & (_UINT8_(value) << DMAC_CHINTFLAG_TCMPL_Pos)) /* Assignment of value for TCMPL in the DMAC_CHINTFLAG register */
#define DMAC_CHINTFLAG_SUSP_Pos               _UINT8_(2)                                           /* (DMAC_CHINTFLAG) Channel Suspend Position */
#define DMAC_CHINTFLAG_SUSP_Msk               (_UINT8_(0x1) << DMAC_CHINTFLAG_SUSP_Pos)            /* (DMAC_CHINTFLAG) Channel Suspend Mask */
#define DMAC_CHINTFLAG_SUSP(value)            (DMAC_CHINTFLAG_SUSP_Msk & (_UINT8_(value) << DMAC_CHINTFLAG_SUSP_Pos)) /* Assignment of value for SUSP in the DMAC_CHINTFLAG register */
#define DMAC_CHINTFLAG_Msk                    _UINT8_(0x07)                                        /* (DMAC_CHINTFLAG) Register Mask  */


/* -------- DMAC_CHSTATUS : (DMAC Offset: 0x4F) ( R/ 8) Channel Status -------- */
#define DMAC_CHSTATUS_RESETVALUE              _UINT8_(0x00)                                        /*  (DMAC_CHSTATUS) Channel Status  Reset Value */

#define DMAC_CHSTATUS_PEND_Pos                _UINT8_(0)                                           /* (DMAC_CHSTATUS) Channel Pending Position */
#define DMAC_CHSTATUS_PEND_Msk                (_UINT8_(0x1) << DMAC_CHSTATUS_PEND_Pos)             /* (DMAC_CHSTATUS) Channel Pending Mask */
#define DMAC_CHSTATUS_PEND(value)             (DMAC_CHSTATUS_PEND_Msk & (_UINT8_(value) << DMAC_CHSTATUS_PEND_Pos)) /* Assignment of value for PEND in the DMAC_CHSTATUS register */
#define DMAC_CHSTATUS_BUSY_Pos                _UINT8_(1)                                           /* (DMAC_CHSTATUS) Channel Busy Position */
#define DMAC_CHSTATUS_BUSY_Msk                (_UINT8_(0x1) << DMAC_CHSTATUS_BUSY_Pos)             /* (DMAC_CHSTATUS) Channel Busy Mask */
#define DMAC_CHSTATUS_BUSY(value)             (DMAC_CHSTATUS_BUSY_Msk & (_UINT8_(value) << DMAC_CHSTATUS_BUSY_Pos)) /* Assignment of value for BUSY in the DMAC_CHSTATUS register */
#define DMAC_CHSTATUS_FERR_Pos                _UINT8_(2)                                           /* (DMAC_CHSTATUS) Channel Fetch Error Position */
#define DMAC_CHSTATUS_FERR_Msk                (_UINT8_(0x1) << DMAC_CHSTATUS_FERR_Pos)             /* (DMAC_CHSTATUS) Channel Fetch Error Mask */
#define DMAC_CHSTATUS_FERR(value)             (DMAC_CHSTATUS_FERR_Msk & (_UINT8_(value) << DMAC_CHSTATUS_FERR_Pos)) /* Assignment of value for FERR in the DMAC_CHSTATUS register */
#define DMAC_CHSTATUS_Msk                     _UINT8_(0x07)                                        /* (DMAC_CHSTATUS) Register Mask  */


/* DMAC register offsets definitions */
#define DMAC_BTCTRL_REG_OFST           _UINT32_(0x00)      /* (DMAC_BTCTRL) Block Transfer Control Offset */
#define DMAC_BTCNT_REG_OFST            _UINT32_(0x02)      /* (DMAC_BTCNT) Block Transfer Count Offset */
#define DMAC_SRCADDR_REG_OFST          _UINT32_(0x04)      /* (DMAC_SRCADDR) Block Transfer Source Address Offset */
#define DMAC_DSTADDR_REG_OFST          _UINT32_(0x08)      /* (DMAC_DSTADDR) Block Transfer Destination Address Offset */
#define DMAC_DESCADDR_REG_OFST         _UINT32_(0x0C)      /* (DMAC_DESCADDR) Next Descriptor Address Offset */
#define DMAC_CTRL_REG_OFST             _UINT32_(0x00)      /* (DMAC_CTRL) Control Offset */
#define DMAC_CRCCTRL_REG_OFST          _UINT32_(0x02)      /* (DMAC_CRCCTRL) CRC Control Offset */
#define DMAC_CRCDATAIN_REG_OFST        _UINT32_(0x04)      /* (DMAC_CRCDATAIN) CRC Data Input Offset */
#define DMAC_CRCCHKSUM_REG_OFST        _UINT32_(0x08)      /* (DMAC_CRCCHKSUM) CRC Checksum Offset */
#define DMAC_CRCSTATUS_REG_OFST        _UINT32_(0x0C)      /* (DMAC_CRCSTATUS) CRC Status Offset */
#define DMAC_DBGCTRL_REG_OFST          _UINT32_(0x0D)      /* (DMAC_DBGCTRL) Debug Control Offset */
#define DMAC_QOSCTRL_REG_OFST          _UINT32_(0x0E)      /* (DMAC_QOSCTRL) QOS Control Offset */
#define DMAC_SWTRIGCTRL_REG_OFST       _UINT32_(0x10)      /* (DMAC_SWTRIGCTRL) Software Trigger Control Offset */
#define DMAC_PRICTRL0_REG_OFST         _UINT32_(0x14)      /* (DMAC_PRICTRL0) Priority Control 0 Offset */
#define DMAC_INTPEND_REG_OFST          _UINT32_(0x20)      /* (DMAC_INTPEND) Interrupt Pending Offset */
#define DMAC_INTSTATUS_REG_OFST        _UINT32_(0x24)      /* (DMAC_INTSTATUS) Interrupt Status Offset */
#define DMAC_BUSYCH_REG_OFST           _UINT32_(0x28)      /* (DMAC_BUSYCH) Busy Channels Offset */
#define DMAC_PENDCH_REG_OFST           _UINT32_(0x2C)      /* (DMAC_PENDCH) Pending Channels Offset */
#define DMAC_ACTIVE_REG_OFST           _UINT32_(0x30)      /* (DMAC_ACTIVE) Active Channel and Levels Offset */
#define DMAC_BASEADDR_REG_OFST         _UINT32_(0x34)      /* (DMAC_BASEADDR) Descriptor Memory Section Base Address Offset */
#define DMAC_WRBADDR_REG_OFST          _UINT32_(0x38)      /* (DMAC_WRBADDR) Write-Back Memory Section Base Address Offset */
#define DMAC_CHID_REG_OFST             _UINT32_(0x3F)      /* (DMAC_CHID) Channel ID Offset */
#define DMAC_CHCTRLA_REG_OFST          _UINT32_(0x40)      /* (DMAC_CHCTRLA) Channel Control A Offset */
#define DMAC_CHCTRLB_REG_OFST          _UINT32_(0x44)      /* (DMAC_CHCTRLB) Channel Control B Offset */
#define DMAC_CHINTENCLR_REG_OFST       _UINT32_(0x4C)      /* (DMAC_CHINTENCLR) Channel Interrupt Enable Clear Offset */
#define DMAC_CHINTENSET_REG_OFST       _UINT32_(0x4D)      /* (DMAC_CHINTENSET) Channel Interrupt Enable Set Offset */
#define DMAC_CHINTFLAG_REG_OFST        _UINT32_(0x4E)      /* (DMAC_CHINTFLAG) Channel Interrupt Flag Status and Clear Offset */
#define DMAC_CHSTATUS_REG_OFST         _UINT32_(0x4F)      /* (DMAC_CHSTATUS) Channel Status Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* DMAC_DESCRIPTOR register API structure */
typedef struct
{  /* Direct Memory Access Controller */
  __IO  uint16_t                       DMAC_BTCTRL;        /* Offset: 0x00 (R/W  16) Block Transfer Control */
  __IO  uint16_t                       DMAC_BTCNT;         /* Offset: 0x02 (R/W  16) Block Transfer Count */
  __IO  uint32_t                       DMAC_SRCADDR;       /* Offset: 0x04 (R/W  32) Block Transfer Source Address */
  __IO  uint32_t                       DMAC_DSTADDR;       /* Offset: 0x08 (R/W  32) Block Transfer Destination Address */
  __IO  uint32_t                       DMAC_DESCADDR;      /* Offset: 0x0C (R/W  32) Next Descriptor Address */
} dmac_descriptor_registers_t
#ifdef __GNUC__
  __attribute__ ((aligned (8)))
#endif
;

/* DMAC register API structure */
typedef struct
{  /* Direct Memory Access Controller */
  __IO  uint16_t                       DMAC_CTRL;          /* Offset: 0x00 (R/W  16) Control */
  __IO  uint16_t                       DMAC_CRCCTRL;       /* Offset: 0x02 (R/W  16) CRC Control */
  __IO  uint32_t                       DMAC_CRCDATAIN;     /* Offset: 0x04 (R/W  32) CRC Data Input */
  __IO  uint32_t                       DMAC_CRCCHKSUM;     /* Offset: 0x08 (R/W  32) CRC Checksum */
  __IO  uint8_t                        DMAC_CRCSTATUS;     /* Offset: 0x0C (R/W  8) CRC Status */
  __IO  uint8_t                        DMAC_DBGCTRL;       /* Offset: 0x0D (R/W  8) Debug Control */
  __IO  uint8_t                        DMAC_QOSCTRL;       /* Offset: 0x0E (R/W  8) QOS Control */
  __I   uint8_t                        Reserved1[0x01];
  __IO  uint32_t                       DMAC_SWTRIGCTRL;    /* Offset: 0x10 (R/W  32) Software Trigger Control */
  __IO  uint32_t                       DMAC_PRICTRL0;      /* Offset: 0x14 (R/W  32) Priority Control 0 */
  __I   uint8_t                        Reserved2[0x08];
  __IO  uint16_t                       DMAC_INTPEND;       /* Offset: 0x20 (R/W  16) Interrupt Pending */
  __I   uint8_t                        Reserved3[0x02];
  __I   uint32_t                       DMAC_INTSTATUS;     /* Offset: 0x24 (R/   32) Interrupt Status */
  __I   uint32_t                       DMAC_BUSYCH;        /* Offset: 0x28 (R/   32) Busy Channels */
  __I   uint32_t                       DMAC_PENDCH;        /* Offset: 0x2C (R/   32) Pending Channels */
  __I   uint32_t                       DMAC_ACTIVE;        /* Offset: 0x30 (R/   32) Active Channel and Levels */
  __IO  uint32_t                       DMAC_BASEADDR;      /* Offset: 0x34 (R/W  32) Descriptor Memory Section Base Address */
  __IO  uint32_t                       DMAC_WRBADDR;       /* Offset: 0x38 (R/W  32) Write-Back Memory Section Base Address */
  __I   uint8_t                        Reserved4[0x03];
  __IO  uint8_t                        DMAC_CHID;          /* Offset: 0x3F (R/W  8) Channel ID */
  __IO  uint8_t                        DMAC_CHCTRLA;       /* Offset: 0x40 (R/W  8) Channel Control A */
  __I   uint8_t                        Reserved5[0x03];
  __IO  uint32_t                       DMAC_CHCTRLB;       /* Offset: 0x44 (R/W  32) Channel Control B */
  __I   uint8_t                        Reserved6[0x04];
  __IO  uint8_t                        DMAC_CHINTENCLR;    /* Offset: 0x4C (R/W  8) Channel Interrupt Enable Clear */
  __IO  uint8_t                        DMAC_CHINTENSET;    /* Offset: 0x4D (R/W  8) Channel Interrupt Enable Set */
  __IO  uint8_t                        DMAC_CHINTFLAG;     /* Offset: 0x4E (R/W  8) Channel Interrupt Flag Status and Clear */
  __I   uint8_t                        DMAC_CHSTATUS;      /* Offset: 0x4F (R/   8) Channel Status */
} dmac_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/* DMAC_DESCRIPTOR memory section attribute */
#define SECTION_DMAC_DESCRIPTOR

#endif /* _PIC32CMSG00_DMAC_COMPONENT_H_ */
