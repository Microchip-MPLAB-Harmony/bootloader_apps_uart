/*
 * Component description for QSPI
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

/* file generated from device description file (ATDF) version 2023-12-19T08:59:38Z */
#ifndef _PIC32CXMTSH_QSPI_COMPONENT_H_
#define _PIC32CXMTSH_QSPI_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR QSPI                                         */
/* ************************************************************************** */

/* -------- QSPI_CR : (QSPI Offset: 0x00) ( /W 32) Control Register -------- */
#define QSPI_CR_QSPIEN_Pos                    _UINT32_(0)                                          /* (QSPI_CR) QSPI Enable Position */
#define QSPI_CR_QSPIEN_Msk                    (_UINT32_(0x1) << QSPI_CR_QSPIEN_Pos)                /* (QSPI_CR) QSPI Enable Mask */
#define QSPI_CR_QSPIEN(value)                 (QSPI_CR_QSPIEN_Msk & (_UINT32_(value) << QSPI_CR_QSPIEN_Pos)) /* Assigment of value for QSPIEN in the QSPI_CR register */
#define QSPI_CR_QSPIDIS_Pos                   _UINT32_(1)                                          /* (QSPI_CR) QSPI Disable Position */
#define QSPI_CR_QSPIDIS_Msk                   (_UINT32_(0x1) << QSPI_CR_QSPIDIS_Pos)               /* (QSPI_CR) QSPI Disable Mask */
#define QSPI_CR_QSPIDIS(value)                (QSPI_CR_QSPIDIS_Msk & (_UINT32_(value) << QSPI_CR_QSPIDIS_Pos)) /* Assigment of value for QSPIDIS in the QSPI_CR register */
#define QSPI_CR_SWRST_Pos                     _UINT32_(7)                                          /* (QSPI_CR) QSPI Software Reset Position */
#define QSPI_CR_SWRST_Msk                     (_UINT32_(0x1) << QSPI_CR_SWRST_Pos)                 /* (QSPI_CR) QSPI Software Reset Mask */
#define QSPI_CR_SWRST(value)                  (QSPI_CR_SWRST_Msk & (_UINT32_(value) << QSPI_CR_SWRST_Pos)) /* Assigment of value for SWRST in the QSPI_CR register */
#define QSPI_CR_UPDCFG_Pos                    _UINT32_(8)                                          /* (QSPI_CR) Update Configuration Position */
#define QSPI_CR_UPDCFG_Msk                    (_UINT32_(0x1) << QSPI_CR_UPDCFG_Pos)                /* (QSPI_CR) Update Configuration Mask */
#define QSPI_CR_UPDCFG(value)                 (QSPI_CR_UPDCFG_Msk & (_UINT32_(value) << QSPI_CR_UPDCFG_Pos)) /* Assigment of value for UPDCFG in the QSPI_CR register */
#define QSPI_CR_STTFR_Pos                     _UINT32_(9)                                          /* (QSPI_CR) Start Transfer Position */
#define QSPI_CR_STTFR_Msk                     (_UINT32_(0x1) << QSPI_CR_STTFR_Pos)                 /* (QSPI_CR) Start Transfer Mask */
#define QSPI_CR_STTFR(value)                  (QSPI_CR_STTFR_Msk & (_UINT32_(value) << QSPI_CR_STTFR_Pos)) /* Assigment of value for STTFR in the QSPI_CR register */
#define QSPI_CR_RTOUT_Pos                     _UINT32_(10)                                         /* (QSPI_CR) Reset Time-out Position */
#define QSPI_CR_RTOUT_Msk                     (_UINT32_(0x1) << QSPI_CR_RTOUT_Pos)                 /* (QSPI_CR) Reset Time-out Mask */
#define QSPI_CR_RTOUT(value)                  (QSPI_CR_RTOUT_Msk & (_UINT32_(value) << QSPI_CR_RTOUT_Pos)) /* Assigment of value for RTOUT in the QSPI_CR register */
#define QSPI_CR_LASTXFER_Pos                  _UINT32_(24)                                         /* (QSPI_CR) Last Transfer Position */
#define QSPI_CR_LASTXFER_Msk                  (_UINT32_(0x1) << QSPI_CR_LASTXFER_Pos)              /* (QSPI_CR) Last Transfer Mask */
#define QSPI_CR_LASTXFER(value)               (QSPI_CR_LASTXFER_Msk & (_UINT32_(value) << QSPI_CR_LASTXFER_Pos)) /* Assigment of value for LASTXFER in the QSPI_CR register */
#define QSPI_CR_Msk                           _UINT32_(0x01000783)                                 /* (QSPI_CR) Register Mask  */


/* -------- QSPI_MR : (QSPI Offset: 0x04) (R/W 32) Mode Register -------- */
#define QSPI_MR_SMM_Pos                       _UINT32_(0)                                          /* (QSPI_MR) Serial Memory Mode Position */
#define QSPI_MR_SMM_Msk                       (_UINT32_(0x1) << QSPI_MR_SMM_Pos)                   /* (QSPI_MR) Serial Memory Mode Mask */
#define QSPI_MR_SMM(value)                    (QSPI_MR_SMM_Msk & (_UINT32_(value) << QSPI_MR_SMM_Pos)) /* Assigment of value for SMM in the QSPI_MR register */
#define   QSPI_MR_SMM_SPI_Val                 _UINT32_(0x0)                                        /* (QSPI_MR) The QSPI is in SPI mode.  */
#define   QSPI_MR_SMM_MEMORY_Val              _UINT32_(0x1)                                        /* (QSPI_MR) The QSPI is in Serial Memory mode.  */
#define QSPI_MR_SMM_SPI                       (QSPI_MR_SMM_SPI_Val << QSPI_MR_SMM_Pos)             /* (QSPI_MR) The QSPI is in SPI mode. Position  */
#define QSPI_MR_SMM_MEMORY                    (QSPI_MR_SMM_MEMORY_Val << QSPI_MR_SMM_Pos)          /* (QSPI_MR) The QSPI is in Serial Memory mode. Position  */
#define QSPI_MR_WDRBT_Pos                     _UINT32_(2)                                          /* (QSPI_MR) Wait Data Read Before Transfer Position */
#define QSPI_MR_WDRBT_Msk                     (_UINT32_(0x1) << QSPI_MR_WDRBT_Pos)                 /* (QSPI_MR) Wait Data Read Before Transfer Mask */
#define QSPI_MR_WDRBT(value)                  (QSPI_MR_WDRBT_Msk & (_UINT32_(value) << QSPI_MR_WDRBT_Pos)) /* Assigment of value for WDRBT in the QSPI_MR register */
#define   QSPI_MR_WDRBT_DISABLED_Val          _UINT32_(0x0)                                        /* (QSPI_MR) No effect. In SPI mode, a transfer can be initiated whatever the state of QSPI_RDR is.  */
#define   QSPI_MR_WDRBT_ENABLED_Val           _UINT32_(0x1)                                        /* (QSPI_MR) In SPI mode, a transfer can start only if QSPI_RDR is empty, i.e., does not contain any unread data. This mode prevents overrun error in reception.  */
#define QSPI_MR_WDRBT_DISABLED                (QSPI_MR_WDRBT_DISABLED_Val << QSPI_MR_WDRBT_Pos)    /* (QSPI_MR) No effect. In SPI mode, a transfer can be initiated whatever the state of QSPI_RDR is. Position  */
#define QSPI_MR_WDRBT_ENABLED                 (QSPI_MR_WDRBT_ENABLED_Val << QSPI_MR_WDRBT_Pos)     /* (QSPI_MR) In SPI mode, a transfer can start only if QSPI_RDR is empty, i.e., does not contain any unread data. This mode prevents overrun error in reception. Position  */
#define QSPI_MR_CSMODE_Pos                    _UINT32_(4)                                          /* (QSPI_MR) Chip Select Mode Position */
#define QSPI_MR_CSMODE_Msk                    (_UINT32_(0x3) << QSPI_MR_CSMODE_Pos)                /* (QSPI_MR) Chip Select Mode Mask */
#define QSPI_MR_CSMODE(value)                 (QSPI_MR_CSMODE_Msk & (_UINT32_(value) << QSPI_MR_CSMODE_Pos)) /* Assigment of value for CSMODE in the QSPI_MR register */
#define   QSPI_MR_CSMODE_NOT_RELOADED_Val     _UINT32_(0x0)                                        /* (QSPI_MR) The chip select is deasserted if QSPI_TDR.TD has not been reloaded before the end of the current transfer.  */
#define   QSPI_MR_CSMODE_LASTXFER_Val         _UINT32_(0x1)                                        /* (QSPI_MR) The chip select is deasserted when the bit LASTXFER is written to '1' and the character written in QSPI_TDR.TD has been transferred.  */
#define   QSPI_MR_CSMODE_SYSTEMATICALLY_Val   _UINT32_(0x2)                                        /* (QSPI_MR) The chip select is deasserted systematically after each transfer.  */
#define QSPI_MR_CSMODE_NOT_RELOADED           (QSPI_MR_CSMODE_NOT_RELOADED_Val << QSPI_MR_CSMODE_Pos) /* (QSPI_MR) The chip select is deasserted if QSPI_TDR.TD has not been reloaded before the end of the current transfer. Position  */
#define QSPI_MR_CSMODE_LASTXFER               (QSPI_MR_CSMODE_LASTXFER_Val << QSPI_MR_CSMODE_Pos)  /* (QSPI_MR) The chip select is deasserted when the bit LASTXFER is written to '1' and the character written in QSPI_TDR.TD has been transferred. Position  */
#define QSPI_MR_CSMODE_SYSTEMATICALLY         (QSPI_MR_CSMODE_SYSTEMATICALLY_Val << QSPI_MR_CSMODE_Pos) /* (QSPI_MR) The chip select is deasserted systematically after each transfer. Position  */
#define QSPI_MR_TAMPCLR_Pos                   _UINT32_(7)                                          /* (QSPI_MR) Tamper Clear Enable Position */
#define QSPI_MR_TAMPCLR_Msk                   (_UINT32_(0x1) << QSPI_MR_TAMPCLR_Pos)               /* (QSPI_MR) Tamper Clear Enable Mask */
#define QSPI_MR_TAMPCLR(value)                (QSPI_MR_TAMPCLR_Msk & (_UINT32_(value) << QSPI_MR_TAMPCLR_Pos)) /* Assigment of value for TAMPCLR in the QSPI_MR register */
#define QSPI_MR_NBBITS_Pos                    _UINT32_(8)                                          /* (QSPI_MR) Number Of Bits Per Transfer Position */
#define QSPI_MR_NBBITS_Msk                    (_UINT32_(0xF) << QSPI_MR_NBBITS_Pos)                /* (QSPI_MR) Number Of Bits Per Transfer Mask */
#define QSPI_MR_NBBITS(value)                 (QSPI_MR_NBBITS_Msk & (_UINT32_(value) << QSPI_MR_NBBITS_Pos)) /* Assigment of value for NBBITS in the QSPI_MR register */
#define   QSPI_MR_NBBITS_8_BIT_Val            _UINT32_(0x0)                                        /* (QSPI_MR) 8 bits for transfer  */
#define   QSPI_MR_NBBITS_16_BIT_Val           _UINT32_(0x8)                                        /* (QSPI_MR) 16 bits for transfer  */
#define QSPI_MR_NBBITS_8_BIT                  (QSPI_MR_NBBITS_8_BIT_Val << QSPI_MR_NBBITS_Pos)     /* (QSPI_MR) 8 bits for transfer Position  */
#define QSPI_MR_NBBITS_16_BIT                 (QSPI_MR_NBBITS_16_BIT_Val << QSPI_MR_NBBITS_Pos)    /* (QSPI_MR) 16 bits for transfer Position  */
#define QSPI_MR_DLYBCT_Pos                    _UINT32_(16)                                         /* (QSPI_MR) Delay Between Consecutive Transfers Position */
#define QSPI_MR_DLYBCT_Msk                    (_UINT32_(0xFF) << QSPI_MR_DLYBCT_Pos)               /* (QSPI_MR) Delay Between Consecutive Transfers Mask */
#define QSPI_MR_DLYBCT(value)                 (QSPI_MR_DLYBCT_Msk & (_UINT32_(value) << QSPI_MR_DLYBCT_Pos)) /* Assigment of value for DLYBCT in the QSPI_MR register */
#define QSPI_MR_DLYCS_Pos                     _UINT32_(24)                                         /* (QSPI_MR) Minimum Inactive QCS Delay Position */
#define QSPI_MR_DLYCS_Msk                     (_UINT32_(0xFF) << QSPI_MR_DLYCS_Pos)                /* (QSPI_MR) Minimum Inactive QCS Delay Mask */
#define QSPI_MR_DLYCS(value)                  (QSPI_MR_DLYCS_Msk & (_UINT32_(value) << QSPI_MR_DLYCS_Pos)) /* Assigment of value for DLYCS in the QSPI_MR register */
#define QSPI_MR_Msk                           _UINT32_(0xFFFF0FB5)                                 /* (QSPI_MR) Register Mask  */


/* -------- QSPI_RDR : (QSPI Offset: 0x08) ( R/ 32) Receive Data Register -------- */
#define QSPI_RDR_RD_Pos                       _UINT32_(0)                                          /* (QSPI_RDR) Receive Data Position */
#define QSPI_RDR_RD_Msk                       (_UINT32_(0xFFFF) << QSPI_RDR_RD_Pos)                /* (QSPI_RDR) Receive Data Mask */
#define QSPI_RDR_RD(value)                    (QSPI_RDR_RD_Msk & (_UINT32_(value) << QSPI_RDR_RD_Pos)) /* Assigment of value for RD in the QSPI_RDR register */
#define QSPI_RDR_Msk                          _UINT32_(0x0000FFFF)                                 /* (QSPI_RDR) Register Mask  */


/* -------- QSPI_TDR : (QSPI Offset: 0x0C) ( /W 32) Transmit Data Register -------- */
#define QSPI_TDR_TD_Pos                       _UINT32_(0)                                          /* (QSPI_TDR) Transmit Data Position */
#define QSPI_TDR_TD_Msk                       (_UINT32_(0xFFFF) << QSPI_TDR_TD_Pos)                /* (QSPI_TDR) Transmit Data Mask */
#define QSPI_TDR_TD(value)                    (QSPI_TDR_TD_Msk & (_UINT32_(value) << QSPI_TDR_TD_Pos)) /* Assigment of value for TD in the QSPI_TDR register */
#define QSPI_TDR_Msk                          _UINT32_(0x0000FFFF)                                 /* (QSPI_TDR) Register Mask  */


/* -------- QSPI_ISR : (QSPI Offset: 0x10) ( R/ 32) Interrupt Status Register -------- */
#define QSPI_ISR_RDRF_Pos                     _UINT32_(0)                                          /* (QSPI_ISR) Receive Data Register Full (cleared by reading QSPI_RDR) Position */
#define QSPI_ISR_RDRF_Msk                     (_UINT32_(0x1) << QSPI_ISR_RDRF_Pos)                 /* (QSPI_ISR) Receive Data Register Full (cleared by reading QSPI_RDR) Mask */
#define QSPI_ISR_RDRF(value)                  (QSPI_ISR_RDRF_Msk & (_UINT32_(value) << QSPI_ISR_RDRF_Pos)) /* Assigment of value for RDRF in the QSPI_ISR register */
#define QSPI_ISR_TDRE_Pos                     _UINT32_(1)                                          /* (QSPI_ISR) Transmit Data Register Empty (cleared by writing QSPI_TDR) Position */
#define QSPI_ISR_TDRE_Msk                     (_UINT32_(0x1) << QSPI_ISR_TDRE_Pos)                 /* (QSPI_ISR) Transmit Data Register Empty (cleared by writing QSPI_TDR) Mask */
#define QSPI_ISR_TDRE(value)                  (QSPI_ISR_TDRE_Msk & (_UINT32_(value) << QSPI_ISR_TDRE_Pos)) /* Assigment of value for TDRE in the QSPI_ISR register */
#define QSPI_ISR_TXEMPTY_Pos                  _UINT32_(2)                                          /* (QSPI_ISR) Transmission Registers Empty (cleared by writing QSPI_TDR) Position */
#define QSPI_ISR_TXEMPTY_Msk                  (_UINT32_(0x1) << QSPI_ISR_TXEMPTY_Pos)              /* (QSPI_ISR) Transmission Registers Empty (cleared by writing QSPI_TDR) Mask */
#define QSPI_ISR_TXEMPTY(value)               (QSPI_ISR_TXEMPTY_Msk & (_UINT32_(value) << QSPI_ISR_TXEMPTY_Pos)) /* Assigment of value for TXEMPTY in the QSPI_ISR register */
#define QSPI_ISR_OVRES_Pos                    _UINT32_(3)                                          /* (QSPI_ISR) Overrun Error Status (cleared on read) Position */
#define QSPI_ISR_OVRES_Msk                    (_UINT32_(0x1) << QSPI_ISR_OVRES_Pos)                /* (QSPI_ISR) Overrun Error Status (cleared on read) Mask */
#define QSPI_ISR_OVRES(value)                 (QSPI_ISR_OVRES_Msk & (_UINT32_(value) << QSPI_ISR_OVRES_Pos)) /* Assigment of value for OVRES in the QSPI_ISR register */
#define QSPI_ISR_ENDRX_Pos                    _UINT32_(4)                                          /* (QSPI_ISR) End of RX buffer Position */
#define QSPI_ISR_ENDRX_Msk                    (_UINT32_(0x1) << QSPI_ISR_ENDRX_Pos)                /* (QSPI_ISR) End of RX buffer Mask */
#define QSPI_ISR_ENDRX(value)                 (QSPI_ISR_ENDRX_Msk & (_UINT32_(value) << QSPI_ISR_ENDRX_Pos)) /* Assigment of value for ENDRX in the QSPI_ISR register */
#define QSPI_ISR_ENDTX_Pos                    _UINT32_(5)                                          /* (QSPI_ISR) End of TX buffer Position */
#define QSPI_ISR_ENDTX_Msk                    (_UINT32_(0x1) << QSPI_ISR_ENDTX_Pos)                /* (QSPI_ISR) End of TX buffer Mask */
#define QSPI_ISR_ENDTX(value)                 (QSPI_ISR_ENDTX_Msk & (_UINT32_(value) << QSPI_ISR_ENDTX_Pos)) /* Assigment of value for ENDTX in the QSPI_ISR register */
#define QSPI_ISR_RXBUFF_Pos                   _UINT32_(6)                                          /* (QSPI_ISR) RX Buffer Full Position */
#define QSPI_ISR_RXBUFF_Msk                   (_UINT32_(0x1) << QSPI_ISR_RXBUFF_Pos)               /* (QSPI_ISR) RX Buffer Full Mask */
#define QSPI_ISR_RXBUFF(value)                (QSPI_ISR_RXBUFF_Msk & (_UINT32_(value) << QSPI_ISR_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the QSPI_ISR register */
#define QSPI_ISR_TXBUFE_Pos                   _UINT32_(7)                                          /* (QSPI_ISR) TX Buffer Empty Position */
#define QSPI_ISR_TXBUFE_Msk                   (_UINT32_(0x1) << QSPI_ISR_TXBUFE_Pos)               /* (QSPI_ISR) TX Buffer Empty Mask */
#define QSPI_ISR_TXBUFE(value)                (QSPI_ISR_TXBUFE_Msk & (_UINT32_(value) << QSPI_ISR_TXBUFE_Pos)) /* Assigment of value for TXBUFE in the QSPI_ISR register */
#define QSPI_ISR_CSR_Pos                      _UINT32_(8)                                          /* (QSPI_ISR) Chip Select Rise (cleared on read) Position */
#define QSPI_ISR_CSR_Msk                      (_UINT32_(0x1) << QSPI_ISR_CSR_Pos)                  /* (QSPI_ISR) Chip Select Rise (cleared on read) Mask */
#define QSPI_ISR_CSR(value)                   (QSPI_ISR_CSR_Msk & (_UINT32_(value) << QSPI_ISR_CSR_Pos)) /* Assigment of value for CSR in the QSPI_ISR register */
#define QSPI_ISR_INSTRE_Pos                   _UINT32_(10)                                         /* (QSPI_ISR) Instruction End Status (cleared on read) Position */
#define QSPI_ISR_INSTRE_Msk                   (_UINT32_(0x1) << QSPI_ISR_INSTRE_Pos)               /* (QSPI_ISR) Instruction End Status (cleared on read) Mask */
#define QSPI_ISR_INSTRE(value)                (QSPI_ISR_INSTRE_Msk & (_UINT32_(value) << QSPI_ISR_INSTRE_Pos)) /* Assigment of value for INSTRE in the QSPI_ISR register */
#define QSPI_ISR_LWRA_Pos                     _UINT32_(11)                                         /* (QSPI_ISR) Last Write Access (cleared on read) Position */
#define QSPI_ISR_LWRA_Msk                     (_UINT32_(0x1) << QSPI_ISR_LWRA_Pos)                 /* (QSPI_ISR) Last Write Access (cleared on read) Mask */
#define QSPI_ISR_LWRA(value)                  (QSPI_ISR_LWRA_Msk & (_UINT32_(value) << QSPI_ISR_LWRA_Pos)) /* Assigment of value for LWRA in the QSPI_ISR register */
#define QSPI_ISR_QITF_Pos                     _UINT32_(12)                                         /* (QSPI_ISR) QSPI Interrupt Fall Position */
#define QSPI_ISR_QITF_Msk                     (_UINT32_(0x1) << QSPI_ISR_QITF_Pos)                 /* (QSPI_ISR) QSPI Interrupt Fall Mask */
#define QSPI_ISR_QITF(value)                  (QSPI_ISR_QITF_Msk & (_UINT32_(value) << QSPI_ISR_QITF_Pos)) /* Assigment of value for QITF in the QSPI_ISR register */
#define QSPI_ISR_QITR_Pos                     _UINT32_(13)                                         /* (QSPI_ISR) QSPI Interrupt Rise Position */
#define QSPI_ISR_QITR_Msk                     (_UINT32_(0x1) << QSPI_ISR_QITR_Pos)                 /* (QSPI_ISR) QSPI Interrupt Rise Mask */
#define QSPI_ISR_QITR(value)                  (QSPI_ISR_QITR_Msk & (_UINT32_(value) << QSPI_ISR_QITR_Pos)) /* Assigment of value for QITR in the QSPI_ISR register */
#define QSPI_ISR_CSFA_Pos                     _UINT32_(14)                                         /* (QSPI_ISR) Chip Select Fall Autoclear Position */
#define QSPI_ISR_CSFA_Msk                     (_UINT32_(0x1) << QSPI_ISR_CSFA_Pos)                 /* (QSPI_ISR) Chip Select Fall Autoclear Mask */
#define QSPI_ISR_CSFA(value)                  (QSPI_ISR_CSFA_Msk & (_UINT32_(value) << QSPI_ISR_CSFA_Pos)) /* Assigment of value for CSFA in the QSPI_ISR register */
#define QSPI_ISR_CSRA_Pos                     _UINT32_(15)                                         /* (QSPI_ISR) Chip Select Rise Autoclear Position */
#define QSPI_ISR_CSRA_Msk                     (_UINT32_(0x1) << QSPI_ISR_CSRA_Pos)                 /* (QSPI_ISR) Chip Select Rise Autoclear Mask */
#define QSPI_ISR_CSRA(value)                  (QSPI_ISR_CSRA_Msk & (_UINT32_(value) << QSPI_ISR_CSRA_Pos)) /* Assigment of value for CSRA in the QSPI_ISR register */
#define QSPI_ISR_TOUT_Pos                     _UINT32_(17)                                         /* (QSPI_ISR) QSPI Time-out Position */
#define QSPI_ISR_TOUT_Msk                     (_UINT32_(0x1) << QSPI_ISR_TOUT_Pos)                 /* (QSPI_ISR) QSPI Time-out Mask */
#define QSPI_ISR_TOUT(value)                  (QSPI_ISR_TOUT_Msk & (_UINT32_(value) << QSPI_ISR_TOUT_Pos)) /* Assigment of value for TOUT in the QSPI_ISR register */
#define QSPI_ISR_Msk                          _UINT32_(0x0002FDFF)                                 /* (QSPI_ISR) Register Mask  */


/* -------- QSPI_IER : (QSPI Offset: 0x14) ( /W 32) Interrupt Enable Register -------- */
#define QSPI_IER_RDRF_Pos                     _UINT32_(0)                                          /* (QSPI_IER) Receive Data Register Full Interrupt Enable Position */
#define QSPI_IER_RDRF_Msk                     (_UINT32_(0x1) << QSPI_IER_RDRF_Pos)                 /* (QSPI_IER) Receive Data Register Full Interrupt Enable Mask */
#define QSPI_IER_RDRF(value)                  (QSPI_IER_RDRF_Msk & (_UINT32_(value) << QSPI_IER_RDRF_Pos)) /* Assigment of value for RDRF in the QSPI_IER register */
#define QSPI_IER_TDRE_Pos                     _UINT32_(1)                                          /* (QSPI_IER) Transmit Data Register Empty Interrupt Enable Position */
#define QSPI_IER_TDRE_Msk                     (_UINT32_(0x1) << QSPI_IER_TDRE_Pos)                 /* (QSPI_IER) Transmit Data Register Empty Interrupt Enable Mask */
#define QSPI_IER_TDRE(value)                  (QSPI_IER_TDRE_Msk & (_UINT32_(value) << QSPI_IER_TDRE_Pos)) /* Assigment of value for TDRE in the QSPI_IER register */
#define QSPI_IER_TXEMPTY_Pos                  _UINT32_(2)                                          /* (QSPI_IER) Transmission Registers Empty Enable Position */
#define QSPI_IER_TXEMPTY_Msk                  (_UINT32_(0x1) << QSPI_IER_TXEMPTY_Pos)              /* (QSPI_IER) Transmission Registers Empty Enable Mask */
#define QSPI_IER_TXEMPTY(value)               (QSPI_IER_TXEMPTY_Msk & (_UINT32_(value) << QSPI_IER_TXEMPTY_Pos)) /* Assigment of value for TXEMPTY in the QSPI_IER register */
#define QSPI_IER_OVRES_Pos                    _UINT32_(3)                                          /* (QSPI_IER) Overrun Error Interrupt Enable Position */
#define QSPI_IER_OVRES_Msk                    (_UINT32_(0x1) << QSPI_IER_OVRES_Pos)                /* (QSPI_IER) Overrun Error Interrupt Enable Mask */
#define QSPI_IER_OVRES(value)                 (QSPI_IER_OVRES_Msk & (_UINT32_(value) << QSPI_IER_OVRES_Pos)) /* Assigment of value for OVRES in the QSPI_IER register */
#define QSPI_IER_ENDRX_Pos                    _UINT32_(4)                                          /* (QSPI_IER) End of Receive Buffer Interrupt Enable Position */
#define QSPI_IER_ENDRX_Msk                    (_UINT32_(0x1) << QSPI_IER_ENDRX_Pos)                /* (QSPI_IER) End of Receive Buffer Interrupt Enable Mask */
#define QSPI_IER_ENDRX(value)                 (QSPI_IER_ENDRX_Msk & (_UINT32_(value) << QSPI_IER_ENDRX_Pos)) /* Assigment of value for ENDRX in the QSPI_IER register */
#define QSPI_IER_ENDTX_Pos                    _UINT32_(5)                                          /* (QSPI_IER) End of Transmit Buffer Interrupt Enable Position */
#define QSPI_IER_ENDTX_Msk                    (_UINT32_(0x1) << QSPI_IER_ENDTX_Pos)                /* (QSPI_IER) End of Transmit Buffer Interrupt Enable Mask */
#define QSPI_IER_ENDTX(value)                 (QSPI_IER_ENDTX_Msk & (_UINT32_(value) << QSPI_IER_ENDTX_Pos)) /* Assigment of value for ENDTX in the QSPI_IER register */
#define QSPI_IER_RXBUFF_Pos                   _UINT32_(6)                                          /* (QSPI_IER) Receive Buffer Full Interrupt Enable Position */
#define QSPI_IER_RXBUFF_Msk                   (_UINT32_(0x1) << QSPI_IER_RXBUFF_Pos)               /* (QSPI_IER) Receive Buffer Full Interrupt Enable Mask */
#define QSPI_IER_RXBUFF(value)                (QSPI_IER_RXBUFF_Msk & (_UINT32_(value) << QSPI_IER_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the QSPI_IER register */
#define QSPI_IER_TXBUFE_Pos                   _UINT32_(7)                                          /* (QSPI_IER) Transmit Buffer Empty Interrupt Enable Position */
#define QSPI_IER_TXBUFE_Msk                   (_UINT32_(0x1) << QSPI_IER_TXBUFE_Pos)               /* (QSPI_IER) Transmit Buffer Empty Interrupt Enable Mask */
#define QSPI_IER_TXBUFE(value)                (QSPI_IER_TXBUFE_Msk & (_UINT32_(value) << QSPI_IER_TXBUFE_Pos)) /* Assigment of value for TXBUFE in the QSPI_IER register */
#define QSPI_IER_CSR_Pos                      _UINT32_(8)                                          /* (QSPI_IER) Chip Select Rise Interrupt Enable Position */
#define QSPI_IER_CSR_Msk                      (_UINT32_(0x1) << QSPI_IER_CSR_Pos)                  /* (QSPI_IER) Chip Select Rise Interrupt Enable Mask */
#define QSPI_IER_CSR(value)                   (QSPI_IER_CSR_Msk & (_UINT32_(value) << QSPI_IER_CSR_Pos)) /* Assigment of value for CSR in the QSPI_IER register */
#define QSPI_IER_INSTRE_Pos                   _UINT32_(10)                                         /* (QSPI_IER) Instruction End Interrupt Enable Position */
#define QSPI_IER_INSTRE_Msk                   (_UINT32_(0x1) << QSPI_IER_INSTRE_Pos)               /* (QSPI_IER) Instruction End Interrupt Enable Mask */
#define QSPI_IER_INSTRE(value)                (QSPI_IER_INSTRE_Msk & (_UINT32_(value) << QSPI_IER_INSTRE_Pos)) /* Assigment of value for INSTRE in the QSPI_IER register */
#define QSPI_IER_LWRA_Pos                     _UINT32_(11)                                         /* (QSPI_IER) Last Write Access Interrupt Enable Position */
#define QSPI_IER_LWRA_Msk                     (_UINT32_(0x1) << QSPI_IER_LWRA_Pos)                 /* (QSPI_IER) Last Write Access Interrupt Enable Mask */
#define QSPI_IER_LWRA(value)                  (QSPI_IER_LWRA_Msk & (_UINT32_(value) << QSPI_IER_LWRA_Pos)) /* Assigment of value for LWRA in the QSPI_IER register */
#define QSPI_IER_QITF_Pos                     _UINT32_(12)                                         /* (QSPI_IER) QSPI Interrupt Fall Interrupt Enable Position */
#define QSPI_IER_QITF_Msk                     (_UINT32_(0x1) << QSPI_IER_QITF_Pos)                 /* (QSPI_IER) QSPI Interrupt Fall Interrupt Enable Mask */
#define QSPI_IER_QITF(value)                  (QSPI_IER_QITF_Msk & (_UINT32_(value) << QSPI_IER_QITF_Pos)) /* Assigment of value for QITF in the QSPI_IER register */
#define QSPI_IER_QITR_Pos                     _UINT32_(13)                                         /* (QSPI_IER) QSPI Interrupt Rise Interrupt Enable Position */
#define QSPI_IER_QITR_Msk                     (_UINT32_(0x1) << QSPI_IER_QITR_Pos)                 /* (QSPI_IER) QSPI Interrupt Rise Interrupt Enable Mask */
#define QSPI_IER_QITR(value)                  (QSPI_IER_QITR_Msk & (_UINT32_(value) << QSPI_IER_QITR_Pos)) /* Assigment of value for QITR in the QSPI_IER register */
#define QSPI_IER_CSFA_Pos                     _UINT32_(14)                                         /* (QSPI_IER) Chip Select Fall Autoclear Interrupt Enable Position */
#define QSPI_IER_CSFA_Msk                     (_UINT32_(0x1) << QSPI_IER_CSFA_Pos)                 /* (QSPI_IER) Chip Select Fall Autoclear Interrupt Enable Mask */
#define QSPI_IER_CSFA(value)                  (QSPI_IER_CSFA_Msk & (_UINT32_(value) << QSPI_IER_CSFA_Pos)) /* Assigment of value for CSFA in the QSPI_IER register */
#define QSPI_IER_CSRA_Pos                     _UINT32_(15)                                         /* (QSPI_IER) Chip Select Rise Autoclear Interrupt Enable Position */
#define QSPI_IER_CSRA_Msk                     (_UINT32_(0x1) << QSPI_IER_CSRA_Pos)                 /* (QSPI_IER) Chip Select Rise Autoclear Interrupt Enable Mask */
#define QSPI_IER_CSRA(value)                  (QSPI_IER_CSRA_Msk & (_UINT32_(value) << QSPI_IER_CSRA_Pos)) /* Assigment of value for CSRA in the QSPI_IER register */
#define QSPI_IER_TOUT_Pos                     _UINT32_(17)                                         /* (QSPI_IER) QSPI Time-out Interrupt Enable Position */
#define QSPI_IER_TOUT_Msk                     (_UINT32_(0x1) << QSPI_IER_TOUT_Pos)                 /* (QSPI_IER) QSPI Time-out Interrupt Enable Mask */
#define QSPI_IER_TOUT(value)                  (QSPI_IER_TOUT_Msk & (_UINT32_(value) << QSPI_IER_TOUT_Pos)) /* Assigment of value for TOUT in the QSPI_IER register */
#define QSPI_IER_Msk                          _UINT32_(0x0002FDFF)                                 /* (QSPI_IER) Register Mask  */


/* -------- QSPI_IDR : (QSPI Offset: 0x18) ( /W 32) Interrupt Disable Register -------- */
#define QSPI_IDR_RDRF_Pos                     _UINT32_(0)                                          /* (QSPI_IDR) Receive Data Register Full Interrupt Disable Position */
#define QSPI_IDR_RDRF_Msk                     (_UINT32_(0x1) << QSPI_IDR_RDRF_Pos)                 /* (QSPI_IDR) Receive Data Register Full Interrupt Disable Mask */
#define QSPI_IDR_RDRF(value)                  (QSPI_IDR_RDRF_Msk & (_UINT32_(value) << QSPI_IDR_RDRF_Pos)) /* Assigment of value for RDRF in the QSPI_IDR register */
#define QSPI_IDR_TDRE_Pos                     _UINT32_(1)                                          /* (QSPI_IDR) Transmit Data Register Empty Interrupt Disable Position */
#define QSPI_IDR_TDRE_Msk                     (_UINT32_(0x1) << QSPI_IDR_TDRE_Pos)                 /* (QSPI_IDR) Transmit Data Register Empty Interrupt Disable Mask */
#define QSPI_IDR_TDRE(value)                  (QSPI_IDR_TDRE_Msk & (_UINT32_(value) << QSPI_IDR_TDRE_Pos)) /* Assigment of value for TDRE in the QSPI_IDR register */
#define QSPI_IDR_TXEMPTY_Pos                  _UINT32_(2)                                          /* (QSPI_IDR) Transmission Registers Empty Disable Position */
#define QSPI_IDR_TXEMPTY_Msk                  (_UINT32_(0x1) << QSPI_IDR_TXEMPTY_Pos)              /* (QSPI_IDR) Transmission Registers Empty Disable Mask */
#define QSPI_IDR_TXEMPTY(value)               (QSPI_IDR_TXEMPTY_Msk & (_UINT32_(value) << QSPI_IDR_TXEMPTY_Pos)) /* Assigment of value for TXEMPTY in the QSPI_IDR register */
#define QSPI_IDR_OVRES_Pos                    _UINT32_(3)                                          /* (QSPI_IDR) Overrun Error Interrupt Disable Position */
#define QSPI_IDR_OVRES_Msk                    (_UINT32_(0x1) << QSPI_IDR_OVRES_Pos)                /* (QSPI_IDR) Overrun Error Interrupt Disable Mask */
#define QSPI_IDR_OVRES(value)                 (QSPI_IDR_OVRES_Msk & (_UINT32_(value) << QSPI_IDR_OVRES_Pos)) /* Assigment of value for OVRES in the QSPI_IDR register */
#define QSPI_IDR_ENDRX_Pos                    _UINT32_(4)                                          /* (QSPI_IDR) End of Receive Buffer Interrupt Disable Position */
#define QSPI_IDR_ENDRX_Msk                    (_UINT32_(0x1) << QSPI_IDR_ENDRX_Pos)                /* (QSPI_IDR) End of Receive Buffer Interrupt Disable Mask */
#define QSPI_IDR_ENDRX(value)                 (QSPI_IDR_ENDRX_Msk & (_UINT32_(value) << QSPI_IDR_ENDRX_Pos)) /* Assigment of value for ENDRX in the QSPI_IDR register */
#define QSPI_IDR_ENDTX_Pos                    _UINT32_(5)                                          /* (QSPI_IDR) End of Transmit Buffer Interrupt Disable Position */
#define QSPI_IDR_ENDTX_Msk                    (_UINT32_(0x1) << QSPI_IDR_ENDTX_Pos)                /* (QSPI_IDR) End of Transmit Buffer Interrupt Disable Mask */
#define QSPI_IDR_ENDTX(value)                 (QSPI_IDR_ENDTX_Msk & (_UINT32_(value) << QSPI_IDR_ENDTX_Pos)) /* Assigment of value for ENDTX in the QSPI_IDR register */
#define QSPI_IDR_RXBUFF_Pos                   _UINT32_(6)                                          /* (QSPI_IDR) Receive Buffer Full Interrupt Disable Position */
#define QSPI_IDR_RXBUFF_Msk                   (_UINT32_(0x1) << QSPI_IDR_RXBUFF_Pos)               /* (QSPI_IDR) Receive Buffer Full Interrupt Disable Mask */
#define QSPI_IDR_RXBUFF(value)                (QSPI_IDR_RXBUFF_Msk & (_UINT32_(value) << QSPI_IDR_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the QSPI_IDR register */
#define QSPI_IDR_TXBUFE_Pos                   _UINT32_(7)                                          /* (QSPI_IDR) Transmit Buffer Empty Interrupt Disable Position */
#define QSPI_IDR_TXBUFE_Msk                   (_UINT32_(0x1) << QSPI_IDR_TXBUFE_Pos)               /* (QSPI_IDR) Transmit Buffer Empty Interrupt Disable Mask */
#define QSPI_IDR_TXBUFE(value)                (QSPI_IDR_TXBUFE_Msk & (_UINT32_(value) << QSPI_IDR_TXBUFE_Pos)) /* Assigment of value for TXBUFE in the QSPI_IDR register */
#define QSPI_IDR_CSR_Pos                      _UINT32_(8)                                          /* (QSPI_IDR) Chip Select Rise Interrupt Disable Position */
#define QSPI_IDR_CSR_Msk                      (_UINT32_(0x1) << QSPI_IDR_CSR_Pos)                  /* (QSPI_IDR) Chip Select Rise Interrupt Disable Mask */
#define QSPI_IDR_CSR(value)                   (QSPI_IDR_CSR_Msk & (_UINT32_(value) << QSPI_IDR_CSR_Pos)) /* Assigment of value for CSR in the QSPI_IDR register */
#define QSPI_IDR_INSTRE_Pos                   _UINT32_(10)                                         /* (QSPI_IDR) Instruction End Interrupt Disable Position */
#define QSPI_IDR_INSTRE_Msk                   (_UINT32_(0x1) << QSPI_IDR_INSTRE_Pos)               /* (QSPI_IDR) Instruction End Interrupt Disable Mask */
#define QSPI_IDR_INSTRE(value)                (QSPI_IDR_INSTRE_Msk & (_UINT32_(value) << QSPI_IDR_INSTRE_Pos)) /* Assigment of value for INSTRE in the QSPI_IDR register */
#define QSPI_IDR_LWRA_Pos                     _UINT32_(11)                                         /* (QSPI_IDR) Last Write Access Interrupt Disable Position */
#define QSPI_IDR_LWRA_Msk                     (_UINT32_(0x1) << QSPI_IDR_LWRA_Pos)                 /* (QSPI_IDR) Last Write Access Interrupt Disable Mask */
#define QSPI_IDR_LWRA(value)                  (QSPI_IDR_LWRA_Msk & (_UINT32_(value) << QSPI_IDR_LWRA_Pos)) /* Assigment of value for LWRA in the QSPI_IDR register */
#define QSPI_IDR_QITF_Pos                     _UINT32_(12)                                         /* (QSPI_IDR) QSPI Interrupt Fall Interrupt Disable Position */
#define QSPI_IDR_QITF_Msk                     (_UINT32_(0x1) << QSPI_IDR_QITF_Pos)                 /* (QSPI_IDR) QSPI Interrupt Fall Interrupt Disable Mask */
#define QSPI_IDR_QITF(value)                  (QSPI_IDR_QITF_Msk & (_UINT32_(value) << QSPI_IDR_QITF_Pos)) /* Assigment of value for QITF in the QSPI_IDR register */
#define QSPI_IDR_QITR_Pos                     _UINT32_(13)                                         /* (QSPI_IDR) QSPI Interrupt Rise Interrupt Disable Position */
#define QSPI_IDR_QITR_Msk                     (_UINT32_(0x1) << QSPI_IDR_QITR_Pos)                 /* (QSPI_IDR) QSPI Interrupt Rise Interrupt Disable Mask */
#define QSPI_IDR_QITR(value)                  (QSPI_IDR_QITR_Msk & (_UINT32_(value) << QSPI_IDR_QITR_Pos)) /* Assigment of value for QITR in the QSPI_IDR register */
#define QSPI_IDR_CSFA_Pos                     _UINT32_(14)                                         /* (QSPI_IDR) Chip Select Fall Autoclear Interrupt Disable Position */
#define QSPI_IDR_CSFA_Msk                     (_UINT32_(0x1) << QSPI_IDR_CSFA_Pos)                 /* (QSPI_IDR) Chip Select Fall Autoclear Interrupt Disable Mask */
#define QSPI_IDR_CSFA(value)                  (QSPI_IDR_CSFA_Msk & (_UINT32_(value) << QSPI_IDR_CSFA_Pos)) /* Assigment of value for CSFA in the QSPI_IDR register */
#define QSPI_IDR_CSRA_Pos                     _UINT32_(15)                                         /* (QSPI_IDR) Chip Select Rise Autoclear Interrupt Disable Position */
#define QSPI_IDR_CSRA_Msk                     (_UINT32_(0x1) << QSPI_IDR_CSRA_Pos)                 /* (QSPI_IDR) Chip Select Rise Autoclear Interrupt Disable Mask */
#define QSPI_IDR_CSRA(value)                  (QSPI_IDR_CSRA_Msk & (_UINT32_(value) << QSPI_IDR_CSRA_Pos)) /* Assigment of value for CSRA in the QSPI_IDR register */
#define QSPI_IDR_TOUT_Pos                     _UINT32_(17)                                         /* (QSPI_IDR) QSPI Time-out Interrupt Disable Position */
#define QSPI_IDR_TOUT_Msk                     (_UINT32_(0x1) << QSPI_IDR_TOUT_Pos)                 /* (QSPI_IDR) QSPI Time-out Interrupt Disable Mask */
#define QSPI_IDR_TOUT(value)                  (QSPI_IDR_TOUT_Msk & (_UINT32_(value) << QSPI_IDR_TOUT_Pos)) /* Assigment of value for TOUT in the QSPI_IDR register */
#define QSPI_IDR_Msk                          _UINT32_(0x0002FDFF)                                 /* (QSPI_IDR) Register Mask  */


/* -------- QSPI_IMR : (QSPI Offset: 0x1C) ( R/ 32) Interrupt Mask Register -------- */
#define QSPI_IMR_RDRF_Pos                     _UINT32_(0)                                          /* (QSPI_IMR) Receive Data Register Full Interrupt Mask Position */
#define QSPI_IMR_RDRF_Msk                     (_UINT32_(0x1) << QSPI_IMR_RDRF_Pos)                 /* (QSPI_IMR) Receive Data Register Full Interrupt Mask Mask */
#define QSPI_IMR_RDRF(value)                  (QSPI_IMR_RDRF_Msk & (_UINT32_(value) << QSPI_IMR_RDRF_Pos)) /* Assigment of value for RDRF in the QSPI_IMR register */
#define QSPI_IMR_TDRE_Pos                     _UINT32_(1)                                          /* (QSPI_IMR) Transmit Data Register Empty Interrupt Mask Position */
#define QSPI_IMR_TDRE_Msk                     (_UINT32_(0x1) << QSPI_IMR_TDRE_Pos)                 /* (QSPI_IMR) Transmit Data Register Empty Interrupt Mask Mask */
#define QSPI_IMR_TDRE(value)                  (QSPI_IMR_TDRE_Msk & (_UINT32_(value) << QSPI_IMR_TDRE_Pos)) /* Assigment of value for TDRE in the QSPI_IMR register */
#define QSPI_IMR_TXEMPTY_Pos                  _UINT32_(2)                                          /* (QSPI_IMR) Transmission Registers Empty Mask Position */
#define QSPI_IMR_TXEMPTY_Msk                  (_UINT32_(0x1) << QSPI_IMR_TXEMPTY_Pos)              /* (QSPI_IMR) Transmission Registers Empty Mask Mask */
#define QSPI_IMR_TXEMPTY(value)               (QSPI_IMR_TXEMPTY_Msk & (_UINT32_(value) << QSPI_IMR_TXEMPTY_Pos)) /* Assigment of value for TXEMPTY in the QSPI_IMR register */
#define QSPI_IMR_OVRES_Pos                    _UINT32_(3)                                          /* (QSPI_IMR) Overrun Error Interrupt Mask Position */
#define QSPI_IMR_OVRES_Msk                    (_UINT32_(0x1) << QSPI_IMR_OVRES_Pos)                /* (QSPI_IMR) Overrun Error Interrupt Mask Mask */
#define QSPI_IMR_OVRES(value)                 (QSPI_IMR_OVRES_Msk & (_UINT32_(value) << QSPI_IMR_OVRES_Pos)) /* Assigment of value for OVRES in the QSPI_IMR register */
#define QSPI_IMR_ENDRX_Pos                    _UINT32_(4)                                          /* (QSPI_IMR) End of Receive Buffer Interrupt Mask Position */
#define QSPI_IMR_ENDRX_Msk                    (_UINT32_(0x1) << QSPI_IMR_ENDRX_Pos)                /* (QSPI_IMR) End of Receive Buffer Interrupt Mask Mask */
#define QSPI_IMR_ENDRX(value)                 (QSPI_IMR_ENDRX_Msk & (_UINT32_(value) << QSPI_IMR_ENDRX_Pos)) /* Assigment of value for ENDRX in the QSPI_IMR register */
#define QSPI_IMR_ENDTX_Pos                    _UINT32_(5)                                          /* (QSPI_IMR) End of Transmit Buffer Interrupt Mask Position */
#define QSPI_IMR_ENDTX_Msk                    (_UINT32_(0x1) << QSPI_IMR_ENDTX_Pos)                /* (QSPI_IMR) End of Transmit Buffer Interrupt Mask Mask */
#define QSPI_IMR_ENDTX(value)                 (QSPI_IMR_ENDTX_Msk & (_UINT32_(value) << QSPI_IMR_ENDTX_Pos)) /* Assigment of value for ENDTX in the QSPI_IMR register */
#define QSPI_IMR_RXBUFF_Pos                   _UINT32_(6)                                          /* (QSPI_IMR) Receive Buffer Full Interrupt Mask Position */
#define QSPI_IMR_RXBUFF_Msk                   (_UINT32_(0x1) << QSPI_IMR_RXBUFF_Pos)               /* (QSPI_IMR) Receive Buffer Full Interrupt Mask Mask */
#define QSPI_IMR_RXBUFF(value)                (QSPI_IMR_RXBUFF_Msk & (_UINT32_(value) << QSPI_IMR_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the QSPI_IMR register */
#define QSPI_IMR_TXBUFE_Pos                   _UINT32_(7)                                          /* (QSPI_IMR) Transmit Buffer Empty Interrupt Mask Position */
#define QSPI_IMR_TXBUFE_Msk                   (_UINT32_(0x1) << QSPI_IMR_TXBUFE_Pos)               /* (QSPI_IMR) Transmit Buffer Empty Interrupt Mask Mask */
#define QSPI_IMR_TXBUFE(value)                (QSPI_IMR_TXBUFE_Msk & (_UINT32_(value) << QSPI_IMR_TXBUFE_Pos)) /* Assigment of value for TXBUFE in the QSPI_IMR register */
#define QSPI_IMR_CSR_Pos                      _UINT32_(8)                                          /* (QSPI_IMR) Chip Select Rise Interrupt Mask Position */
#define QSPI_IMR_CSR_Msk                      (_UINT32_(0x1) << QSPI_IMR_CSR_Pos)                  /* (QSPI_IMR) Chip Select Rise Interrupt Mask Mask */
#define QSPI_IMR_CSR(value)                   (QSPI_IMR_CSR_Msk & (_UINT32_(value) << QSPI_IMR_CSR_Pos)) /* Assigment of value for CSR in the QSPI_IMR register */
#define QSPI_IMR_INSTRE_Pos                   _UINT32_(10)                                         /* (QSPI_IMR) Instruction End Interrupt Mask Position */
#define QSPI_IMR_INSTRE_Msk                   (_UINT32_(0x1) << QSPI_IMR_INSTRE_Pos)               /* (QSPI_IMR) Instruction End Interrupt Mask Mask */
#define QSPI_IMR_INSTRE(value)                (QSPI_IMR_INSTRE_Msk & (_UINT32_(value) << QSPI_IMR_INSTRE_Pos)) /* Assigment of value for INSTRE in the QSPI_IMR register */
#define QSPI_IMR_LWRA_Pos                     _UINT32_(11)                                         /* (QSPI_IMR) Last Write Access Interrupt Mask Position */
#define QSPI_IMR_LWRA_Msk                     (_UINT32_(0x1) << QSPI_IMR_LWRA_Pos)                 /* (QSPI_IMR) Last Write Access Interrupt Mask Mask */
#define QSPI_IMR_LWRA(value)                  (QSPI_IMR_LWRA_Msk & (_UINT32_(value) << QSPI_IMR_LWRA_Pos)) /* Assigment of value for LWRA in the QSPI_IMR register */
#define QSPI_IMR_QITF_Pos                     _UINT32_(12)                                         /* (QSPI_IMR) QSPI Interrupt Fall Interrupt Mask Position */
#define QSPI_IMR_QITF_Msk                     (_UINT32_(0x1) << QSPI_IMR_QITF_Pos)                 /* (QSPI_IMR) QSPI Interrupt Fall Interrupt Mask Mask */
#define QSPI_IMR_QITF(value)                  (QSPI_IMR_QITF_Msk & (_UINT32_(value) << QSPI_IMR_QITF_Pos)) /* Assigment of value for QITF in the QSPI_IMR register */
#define QSPI_IMR_QITR_Pos                     _UINT32_(13)                                         /* (QSPI_IMR) QSPI Interrupt Rise Interrupt Mask Position */
#define QSPI_IMR_QITR_Msk                     (_UINT32_(0x1) << QSPI_IMR_QITR_Pos)                 /* (QSPI_IMR) QSPI Interrupt Rise Interrupt Mask Mask */
#define QSPI_IMR_QITR(value)                  (QSPI_IMR_QITR_Msk & (_UINT32_(value) << QSPI_IMR_QITR_Pos)) /* Assigment of value for QITR in the QSPI_IMR register */
#define QSPI_IMR_CSFA_Pos                     _UINT32_(14)                                         /* (QSPI_IMR) Chip Select Fall Autoclear Interrupt Mask Position */
#define QSPI_IMR_CSFA_Msk                     (_UINT32_(0x1) << QSPI_IMR_CSFA_Pos)                 /* (QSPI_IMR) Chip Select Fall Autoclear Interrupt Mask Mask */
#define QSPI_IMR_CSFA(value)                  (QSPI_IMR_CSFA_Msk & (_UINT32_(value) << QSPI_IMR_CSFA_Pos)) /* Assigment of value for CSFA in the QSPI_IMR register */
#define QSPI_IMR_CSRA_Pos                     _UINT32_(15)                                         /* (QSPI_IMR) Chip Select Rise Autoclear Interrupt Mask Position */
#define QSPI_IMR_CSRA_Msk                     (_UINT32_(0x1) << QSPI_IMR_CSRA_Pos)                 /* (QSPI_IMR) Chip Select Rise Autoclear Interrupt Mask Mask */
#define QSPI_IMR_CSRA(value)                  (QSPI_IMR_CSRA_Msk & (_UINT32_(value) << QSPI_IMR_CSRA_Pos)) /* Assigment of value for CSRA in the QSPI_IMR register */
#define QSPI_IMR_TOUT_Pos                     _UINT32_(17)                                         /* (QSPI_IMR) QSPI Time-out Interrupt Mask Position */
#define QSPI_IMR_TOUT_Msk                     (_UINT32_(0x1) << QSPI_IMR_TOUT_Pos)                 /* (QSPI_IMR) QSPI Time-out Interrupt Mask Mask */
#define QSPI_IMR_TOUT(value)                  (QSPI_IMR_TOUT_Msk & (_UINT32_(value) << QSPI_IMR_TOUT_Pos)) /* Assigment of value for TOUT in the QSPI_IMR register */
#define QSPI_IMR_Msk                          _UINT32_(0x0002FDFF)                                 /* (QSPI_IMR) Register Mask  */


/* -------- QSPI_SCR : (QSPI Offset: 0x20) (R/W 32) Serial Clock Register -------- */
#define QSPI_SCR_CPOL_Pos                     _UINT32_(0)                                          /* (QSPI_SCR) Clock Polarity Position */
#define QSPI_SCR_CPOL_Msk                     (_UINT32_(0x1) << QSPI_SCR_CPOL_Pos)                 /* (QSPI_SCR) Clock Polarity Mask */
#define QSPI_SCR_CPOL(value)                  (QSPI_SCR_CPOL_Msk & (_UINT32_(value) << QSPI_SCR_CPOL_Pos)) /* Assigment of value for CPOL in the QSPI_SCR register */
#define QSPI_SCR_CPHA_Pos                     _UINT32_(1)                                          /* (QSPI_SCR) Clock Phase Position */
#define QSPI_SCR_CPHA_Msk                     (_UINT32_(0x1) << QSPI_SCR_CPHA_Pos)                 /* (QSPI_SCR) Clock Phase Mask */
#define QSPI_SCR_CPHA(value)                  (QSPI_SCR_CPHA_Msk & (_UINT32_(value) << QSPI_SCR_CPHA_Pos)) /* Assigment of value for CPHA in the QSPI_SCR register */
#define QSPI_SCR_DLYBS_Pos                    _UINT32_(16)                                         /* (QSPI_SCR) Delay Before QSCK Position */
#define QSPI_SCR_DLYBS_Msk                    (_UINT32_(0xFF) << QSPI_SCR_DLYBS_Pos)               /* (QSPI_SCR) Delay Before QSCK Mask */
#define QSPI_SCR_DLYBS(value)                 (QSPI_SCR_DLYBS_Msk & (_UINT32_(value) << QSPI_SCR_DLYBS_Pos)) /* Assigment of value for DLYBS in the QSPI_SCR register */
#define QSPI_SCR_Msk                          _UINT32_(0x00FF0003)                                 /* (QSPI_SCR) Register Mask  */


/* -------- QSPI_SR : (QSPI Offset: 0x24) (R/W 32) Status Register -------- */
#define QSPI_SR_SYNCBSY_Pos                   _UINT32_(0)                                          /* (QSPI_SR) Synchronization Busy Position */
#define QSPI_SR_SYNCBSY_Msk                   (_UINT32_(0x1) << QSPI_SR_SYNCBSY_Pos)               /* (QSPI_SR) Synchronization Busy Mask */
#define QSPI_SR_SYNCBSY(value)                (QSPI_SR_SYNCBSY_Msk & (_UINT32_(value) << QSPI_SR_SYNCBSY_Pos)) /* Assigment of value for SYNCBSY in the QSPI_SR register */
#define QSPI_SR_QSPIENS_Pos                   _UINT32_(1)                                          /* (QSPI_SR) QSPI Enable Status Position */
#define QSPI_SR_QSPIENS_Msk                   (_UINT32_(0x1) << QSPI_SR_QSPIENS_Pos)               /* (QSPI_SR) QSPI Enable Status Mask */
#define QSPI_SR_QSPIENS(value)                (QSPI_SR_QSPIENS_Msk & (_UINT32_(value) << QSPI_SR_QSPIENS_Pos)) /* Assigment of value for QSPIENS in the QSPI_SR register */
#define QSPI_SR_CSS_Pos                       _UINT32_(2)                                          /* (QSPI_SR) Chip Select Status Position */
#define QSPI_SR_CSS_Msk                       (_UINT32_(0x1) << QSPI_SR_CSS_Pos)                   /* (QSPI_SR) Chip Select Status Mask */
#define QSPI_SR_CSS(value)                    (QSPI_SR_CSS_Msk & (_UINT32_(value) << QSPI_SR_CSS_Pos)) /* Assigment of value for CSS in the QSPI_SR register */
#define QSPI_SR_RBUSY_Pos                     _UINT32_(3)                                          /* (QSPI_SR) Read Busy Position */
#define QSPI_SR_RBUSY_Msk                     (_UINT32_(0x1) << QSPI_SR_RBUSY_Pos)                 /* (QSPI_SR) Read Busy Mask */
#define QSPI_SR_RBUSY(value)                  (QSPI_SR_RBUSY_Msk & (_UINT32_(value) << QSPI_SR_RBUSY_Pos)) /* Assigment of value for RBUSY in the QSPI_SR register */
#define QSPI_SR_HIDLE_Pos                     _UINT32_(4)                                          /* (QSPI_SR) QSPI Idle Position */
#define QSPI_SR_HIDLE_Msk                     (_UINT32_(0x1) << QSPI_SR_HIDLE_Pos)                 /* (QSPI_SR) QSPI Idle Mask */
#define QSPI_SR_HIDLE(value)                  (QSPI_SR_HIDLE_Msk & (_UINT32_(value) << QSPI_SR_HIDLE_Pos)) /* Assigment of value for HIDLE in the QSPI_SR register */
#define QSPI_SR_Msk                           _UINT32_(0x0000001F)                                 /* (QSPI_SR) Register Mask  */


/* -------- QSPI_IAR : (QSPI Offset: 0x30) (R/W 32) Instruction Address Register -------- */
#define QSPI_IAR_ADDR_Pos                     _UINT32_(0)                                          /* (QSPI_IAR) Address Position */
#define QSPI_IAR_ADDR_Msk                     (_UINT32_(0xFFFFFFFF) << QSPI_IAR_ADDR_Pos)          /* (QSPI_IAR) Address Mask */
#define QSPI_IAR_ADDR(value)                  (QSPI_IAR_ADDR_Msk & (_UINT32_(value) << QSPI_IAR_ADDR_Pos)) /* Assigment of value for ADDR in the QSPI_IAR register */
#define QSPI_IAR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (QSPI_IAR) Register Mask  */


/* -------- QSPI_WICR : (QSPI Offset: 0x34) (R/W 32) Write Instruction Code Register -------- */
#define QSPI_WICR_WRINST_Pos                  _UINT32_(0)                                          /* (QSPI_WICR) Write Instruction Code Position */
#define QSPI_WICR_WRINST_Msk                  (_UINT32_(0xFF) << QSPI_WICR_WRINST_Pos)             /* (QSPI_WICR) Write Instruction Code Mask */
#define QSPI_WICR_WRINST(value)               (QSPI_WICR_WRINST_Msk & (_UINT32_(value) << QSPI_WICR_WRINST_Pos)) /* Assigment of value for WRINST in the QSPI_WICR register */
#define QSPI_WICR_WROPT_Pos                   _UINT32_(16)                                         /* (QSPI_WICR) Write Option Code Position */
#define QSPI_WICR_WROPT_Msk                   (_UINT32_(0xFF) << QSPI_WICR_WROPT_Pos)              /* (QSPI_WICR) Write Option Code Mask */
#define QSPI_WICR_WROPT(value)                (QSPI_WICR_WROPT_Msk & (_UINT32_(value) << QSPI_WICR_WROPT_Pos)) /* Assigment of value for WROPT in the QSPI_WICR register */
#define QSPI_WICR_Msk                         _UINT32_(0x00FF00FF)                                 /* (QSPI_WICR) Register Mask  */


/* -------- QSPI_IFR : (QSPI Offset: 0x38) (R/W 32) Instruction Frame Register -------- */
#define QSPI_IFR_WIDTH_Pos                    _UINT32_(0)                                          /* (QSPI_IFR) Width of Instruction Code, Address, Option Code and Data Position */
#define QSPI_IFR_WIDTH_Msk                    (_UINT32_(0xF) << QSPI_IFR_WIDTH_Pos)                /* (QSPI_IFR) Width of Instruction Code, Address, Option Code and Data Mask */
#define QSPI_IFR_WIDTH(value)                 (QSPI_IFR_WIDTH_Msk & (_UINT32_(value) << QSPI_IFR_WIDTH_Pos)) /* Assigment of value for WIDTH in the QSPI_IFR register */
#define   QSPI_IFR_WIDTH_SINGLE_BIT_SPI_Val   _UINT32_(0x0)                                        /* (QSPI_IFR) Instruction: Single-bit SPI / Address-Option: Single-bit SPI / Data: Single-bit SPI  */
#define   QSPI_IFR_WIDTH_DUAL_OUTPUT_Val      _UINT32_(0x1)                                        /* (QSPI_IFR) Instruction: Single-bit SPI / Address-Option: Single-bit SPI / Data: Dual SPI  */
#define   QSPI_IFR_WIDTH_QUAD_OUTPUT_Val      _UINT32_(0x2)                                        /* (QSPI_IFR) Instruction: Single-bit SPI / Address-Option: Single-bit SPI / Data: Quad SPI  */
#define   QSPI_IFR_WIDTH_DUAL_IO_Val          _UINT32_(0x3)                                        /* (QSPI_IFR) Instruction: Single-bit SPI / Address-Option: Dual SPI / Data: Dual SPI  */
#define   QSPI_IFR_WIDTH_QUAD_IO_Val          _UINT32_(0x4)                                        /* (QSPI_IFR) Instruction: Single-bit SPI / Address-Option: Quad SPI / Data: Quad SPI  */
#define   QSPI_IFR_WIDTH_DUAL_CMD_Val         _UINT32_(0x5)                                        /* (QSPI_IFR) Instruction: Dual SPI / Address-Option: Dual SPI / Data: Dual SPI  */
#define   QSPI_IFR_WIDTH_QUAD_CMD_Val         _UINT32_(0x6)                                        /* (QSPI_IFR) Instruction: Quad SPI / Address-Option: Quad SPI / Data: Quad SPI  */
#define QSPI_IFR_WIDTH_SINGLE_BIT_SPI         (QSPI_IFR_WIDTH_SINGLE_BIT_SPI_Val << QSPI_IFR_WIDTH_Pos) /* (QSPI_IFR) Instruction: Single-bit SPI / Address-Option: Single-bit SPI / Data: Single-bit SPI Position  */
#define QSPI_IFR_WIDTH_DUAL_OUTPUT            (QSPI_IFR_WIDTH_DUAL_OUTPUT_Val << QSPI_IFR_WIDTH_Pos) /* (QSPI_IFR) Instruction: Single-bit SPI / Address-Option: Single-bit SPI / Data: Dual SPI Position  */
#define QSPI_IFR_WIDTH_QUAD_OUTPUT            (QSPI_IFR_WIDTH_QUAD_OUTPUT_Val << QSPI_IFR_WIDTH_Pos) /* (QSPI_IFR) Instruction: Single-bit SPI / Address-Option: Single-bit SPI / Data: Quad SPI Position  */
#define QSPI_IFR_WIDTH_DUAL_IO                (QSPI_IFR_WIDTH_DUAL_IO_Val << QSPI_IFR_WIDTH_Pos)   /* (QSPI_IFR) Instruction: Single-bit SPI / Address-Option: Dual SPI / Data: Dual SPI Position  */
#define QSPI_IFR_WIDTH_QUAD_IO                (QSPI_IFR_WIDTH_QUAD_IO_Val << QSPI_IFR_WIDTH_Pos)   /* (QSPI_IFR) Instruction: Single-bit SPI / Address-Option: Quad SPI / Data: Quad SPI Position  */
#define QSPI_IFR_WIDTH_DUAL_CMD               (QSPI_IFR_WIDTH_DUAL_CMD_Val << QSPI_IFR_WIDTH_Pos)  /* (QSPI_IFR) Instruction: Dual SPI / Address-Option: Dual SPI / Data: Dual SPI Position  */
#define QSPI_IFR_WIDTH_QUAD_CMD               (QSPI_IFR_WIDTH_QUAD_CMD_Val << QSPI_IFR_WIDTH_Pos)  /* (QSPI_IFR) Instruction: Quad SPI / Address-Option: Quad SPI / Data: Quad SPI Position  */
#define QSPI_IFR_INSTEN_Pos                   _UINT32_(4)                                          /* (QSPI_IFR) Instruction Enable Position */
#define QSPI_IFR_INSTEN_Msk                   (_UINT32_(0x1) << QSPI_IFR_INSTEN_Pos)               /* (QSPI_IFR) Instruction Enable Mask */
#define QSPI_IFR_INSTEN(value)                (QSPI_IFR_INSTEN_Msk & (_UINT32_(value) << QSPI_IFR_INSTEN_Pos)) /* Assigment of value for INSTEN in the QSPI_IFR register */
#define QSPI_IFR_ADDREN_Pos                   _UINT32_(5)                                          /* (QSPI_IFR) Address Enable Position */
#define QSPI_IFR_ADDREN_Msk                   (_UINT32_(0x1) << QSPI_IFR_ADDREN_Pos)               /* (QSPI_IFR) Address Enable Mask */
#define QSPI_IFR_ADDREN(value)                (QSPI_IFR_ADDREN_Msk & (_UINT32_(value) << QSPI_IFR_ADDREN_Pos)) /* Assigment of value for ADDREN in the QSPI_IFR register */
#define QSPI_IFR_OPTEN_Pos                    _UINT32_(6)                                          /* (QSPI_IFR) Option Enable Position */
#define QSPI_IFR_OPTEN_Msk                    (_UINT32_(0x1) << QSPI_IFR_OPTEN_Pos)                /* (QSPI_IFR) Option Enable Mask */
#define QSPI_IFR_OPTEN(value)                 (QSPI_IFR_OPTEN_Msk & (_UINT32_(value) << QSPI_IFR_OPTEN_Pos)) /* Assigment of value for OPTEN in the QSPI_IFR register */
#define QSPI_IFR_DATAEN_Pos                   _UINT32_(7)                                          /* (QSPI_IFR) Data Enable Position */
#define QSPI_IFR_DATAEN_Msk                   (_UINT32_(0x1) << QSPI_IFR_DATAEN_Pos)               /* (QSPI_IFR) Data Enable Mask */
#define QSPI_IFR_DATAEN(value)                (QSPI_IFR_DATAEN_Msk & (_UINT32_(value) << QSPI_IFR_DATAEN_Pos)) /* Assigment of value for DATAEN in the QSPI_IFR register */
#define QSPI_IFR_OPTL_Pos                     _UINT32_(8)                                          /* (QSPI_IFR) Option Code Length Position */
#define QSPI_IFR_OPTL_Msk                     (_UINT32_(0x3) << QSPI_IFR_OPTL_Pos)                 /* (QSPI_IFR) Option Code Length Mask */
#define QSPI_IFR_OPTL(value)                  (QSPI_IFR_OPTL_Msk & (_UINT32_(value) << QSPI_IFR_OPTL_Pos)) /* Assigment of value for OPTL in the QSPI_IFR register */
#define   QSPI_IFR_OPTL_OPTION_1BIT_Val       _UINT32_(0x0)                                        /* (QSPI_IFR) The option code is 1 bit long.  */
#define   QSPI_IFR_OPTL_OPTION_2BIT_Val       _UINT32_(0x1)                                        /* (QSPI_IFR) The option code is 2 bits long.  */
#define   QSPI_IFR_OPTL_OPTION_4BIT_Val       _UINT32_(0x2)                                        /* (QSPI_IFR) The option code is 4 bits long.  */
#define   QSPI_IFR_OPTL_OPTION_8BIT_Val       _UINT32_(0x3)                                        /* (QSPI_IFR) The option code is 8 bits long.  */
#define QSPI_IFR_OPTL_OPTION_1BIT             (QSPI_IFR_OPTL_OPTION_1BIT_Val << QSPI_IFR_OPTL_Pos) /* (QSPI_IFR) The option code is 1 bit long. Position  */
#define QSPI_IFR_OPTL_OPTION_2BIT             (QSPI_IFR_OPTL_OPTION_2BIT_Val << QSPI_IFR_OPTL_Pos) /* (QSPI_IFR) The option code is 2 bits long. Position  */
#define QSPI_IFR_OPTL_OPTION_4BIT             (QSPI_IFR_OPTL_OPTION_4BIT_Val << QSPI_IFR_OPTL_Pos) /* (QSPI_IFR) The option code is 4 bits long. Position  */
#define QSPI_IFR_OPTL_OPTION_8BIT             (QSPI_IFR_OPTL_OPTION_8BIT_Val << QSPI_IFR_OPTL_Pos) /* (QSPI_IFR) The option code is 8 bits long. Position  */
#define QSPI_IFR_ADDRL_Pos                    _UINT32_(10)                                         /* (QSPI_IFR) Address Length Position */
#define QSPI_IFR_ADDRL_Msk                    (_UINT32_(0x3) << QSPI_IFR_ADDRL_Pos)                /* (QSPI_IFR) Address Length Mask */
#define QSPI_IFR_ADDRL(value)                 (QSPI_IFR_ADDRL_Msk & (_UINT32_(value) << QSPI_IFR_ADDRL_Pos)) /* Assigment of value for ADDRL in the QSPI_IFR register */
#define   QSPI_IFR_ADDRL_8_BIT_Val            _UINT32_(0x0)                                        /* (QSPI_IFR) 8-bit address size  */
#define   QSPI_IFR_ADDRL_16_BIT_Val           _UINT32_(0x1)                                        /* (QSPI_IFR) 16-bit address size  */
#define   QSPI_IFR_ADDRL_24_BIT_Val           _UINT32_(0x2)                                        /* (QSPI_IFR) 24-bit address size  */
#define   QSPI_IFR_ADDRL_32_BIT_Val           _UINT32_(0x3)                                        /* (QSPI_IFR) 32-bit address size  */
#define QSPI_IFR_ADDRL_8_BIT                  (QSPI_IFR_ADDRL_8_BIT_Val << QSPI_IFR_ADDRL_Pos)     /* (QSPI_IFR) 8-bit address size Position  */
#define QSPI_IFR_ADDRL_16_BIT                 (QSPI_IFR_ADDRL_16_BIT_Val << QSPI_IFR_ADDRL_Pos)    /* (QSPI_IFR) 16-bit address size Position  */
#define QSPI_IFR_ADDRL_24_BIT                 (QSPI_IFR_ADDRL_24_BIT_Val << QSPI_IFR_ADDRL_Pos)    /* (QSPI_IFR) 24-bit address size Position  */
#define QSPI_IFR_ADDRL_32_BIT                 (QSPI_IFR_ADDRL_32_BIT_Val << QSPI_IFR_ADDRL_Pos)    /* (QSPI_IFR) 32-bit address size Position  */
#define QSPI_IFR_TFRTYP_Pos                   _UINT32_(12)                                         /* (QSPI_IFR) Data Transfer Type Position */
#define QSPI_IFR_TFRTYP_Msk                   (_UINT32_(0x1) << QSPI_IFR_TFRTYP_Pos)               /* (QSPI_IFR) Data Transfer Type Mask */
#define QSPI_IFR_TFRTYP(value)                (QSPI_IFR_TFRTYP_Msk & (_UINT32_(value) << QSPI_IFR_TFRTYP_Pos)) /* Assigment of value for TFRTYP in the QSPI_IFR register */
#define   QSPI_IFR_TFRTYP_TRSFR_REGISTER_Val  _UINT32_(0x0)                                        /* (QSPI_IFR) Read/Write of memory register, write of memory page buffer. This configuration implies the following: Either the AHB or the APB interface can be used to initiate the transfer (SMRM bit). Returned data represents the memory register value. If the APB interface is used, the RDRF and TDRE flags help to control the frame. Scrambling is possible only if the APB interface is used. For HyperFlash memories the "target" bit is set to register space in the HyperFlash header.  */
#define   QSPI_IFR_TFRTYP_TRSFR_MEMORY_Val    _UINT32_(0x1)                                        /* (QSPI_IFR) Read/Write accesses to the memory space. This configuration implies the following: Only the System Bus interface can be used to trigger accesses. Access to random location is possible. Address mask is applied and full size accesses only are performed. Internal optimization algorithm is enabled to minimize latency. Data are returned in a system bus protocol compliant way. Seamless scrambling is enabled. Seamless handling of HyperFlash Write Buffer programming command (one command for each data) Seamless protocol-specific page boundary handling Address shift is handled seamlessly (e.g. halfword memories).  */
#define QSPI_IFR_TFRTYP_TRSFR_REGISTER        (QSPI_IFR_TFRTYP_TRSFR_REGISTER_Val << QSPI_IFR_TFRTYP_Pos) /* (QSPI_IFR) Read/Write of memory register, write of memory page buffer. This configuration implies the following: Either the AHB or the APB interface can be used to initiate the transfer (SMRM bit). Returned data represents the memory register value. If the APB interface is used, the RDRF and TDRE flags help to control the frame. Scrambling is possible only if the APB interface is used. For HyperFlash memories the "target" bit is set to register space in the HyperFlash header. Position  */
#define QSPI_IFR_TFRTYP_TRSFR_MEMORY          (QSPI_IFR_TFRTYP_TRSFR_MEMORY_Val << QSPI_IFR_TFRTYP_Pos) /* (QSPI_IFR) Read/Write accesses to the memory space. This configuration implies the following: Only the System Bus interface can be used to trigger accesses. Access to random location is possible. Address mask is applied and full size accesses only are performed. Internal optimization algorithm is enabled to minimize latency. Data are returned in a system bus protocol compliant way. Seamless scrambling is enabled. Seamless handling of HyperFlash Write Buffer programming command (one command for each data) Seamless protocol-specific page boundary handling Address shift is handled seamlessly (e.g. halfword memories). Position  */
#define QSPI_IFR_CRM_Pos                      _UINT32_(14)                                         /* (QSPI_IFR) Continuous Read Mode Position */
#define QSPI_IFR_CRM_Msk                      (_UINT32_(0x1) << QSPI_IFR_CRM_Pos)                  /* (QSPI_IFR) Continuous Read Mode Mask */
#define QSPI_IFR_CRM(value)                   (QSPI_IFR_CRM_Msk & (_UINT32_(value) << QSPI_IFR_CRM_Pos)) /* Assigment of value for CRM in the QSPI_IFR register */
#define   QSPI_IFR_CRM_DISABLED_Val           _UINT32_(0x0)                                        /* (QSPI_IFR) Continuous Read mode is disabled.  */
#define   QSPI_IFR_CRM_ENABLED_Val            _UINT32_(0x1)                                        /* (QSPI_IFR) Continuous Read mode is enabled.  */
#define QSPI_IFR_CRM_DISABLED                 (QSPI_IFR_CRM_DISABLED_Val << QSPI_IFR_CRM_Pos)      /* (QSPI_IFR) Continuous Read mode is disabled. Position  */
#define QSPI_IFR_CRM_ENABLED                  (QSPI_IFR_CRM_ENABLED_Val << QSPI_IFR_CRM_Pos)       /* (QSPI_IFR) Continuous Read mode is enabled. Position  */
#define QSPI_IFR_DDREN_Pos                    _UINT32_(15)                                         /* (QSPI_IFR) DDR Mode Enable Position */
#define QSPI_IFR_DDREN_Msk                    (_UINT32_(0x1) << QSPI_IFR_DDREN_Pos)                /* (QSPI_IFR) DDR Mode Enable Mask */
#define QSPI_IFR_DDREN(value)                 (QSPI_IFR_DDREN_Msk & (_UINT32_(value) << QSPI_IFR_DDREN_Pos)) /* Assigment of value for DDREN in the QSPI_IFR register */
#define   QSPI_IFR_DDREN_DISABLED_Val         _UINT32_(0x0)                                        /* (QSPI_IFR) Transfers are performed in Single Data Rate mode.  */
#define   QSPI_IFR_DDREN_ENABLED_Val          _UINT32_(0x1)                                        /* (QSPI_IFR) Transfers are performed in Double Data Rate mode, whereas the instruction field is still transferred in Single Data Rate mode.  */
#define QSPI_IFR_DDREN_DISABLED               (QSPI_IFR_DDREN_DISABLED_Val << QSPI_IFR_DDREN_Pos)  /* (QSPI_IFR) Transfers are performed in Single Data Rate mode. Position  */
#define QSPI_IFR_DDREN_ENABLED                (QSPI_IFR_DDREN_ENABLED_Val << QSPI_IFR_DDREN_Pos)   /* (QSPI_IFR) Transfers are performed in Double Data Rate mode, whereas the instruction field is still transferred in Single Data Rate mode. Position  */
#define QSPI_IFR_NBDUM_Pos                    _UINT32_(16)                                         /* (QSPI_IFR) Number Of Dummy Cycles Position */
#define QSPI_IFR_NBDUM_Msk                    (_UINT32_(0x1F) << QSPI_IFR_NBDUM_Pos)               /* (QSPI_IFR) Number Of Dummy Cycles Mask */
#define QSPI_IFR_NBDUM(value)                 (QSPI_IFR_NBDUM_Msk & (_UINT32_(value) << QSPI_IFR_NBDUM_Pos)) /* Assigment of value for NBDUM in the QSPI_IFR register */
#define QSPI_IFR_SMRM_Pos                     _UINT32_(23)                                         /* (QSPI_IFR) Serial Memory Register Mode Position */
#define QSPI_IFR_SMRM_Msk                     (_UINT32_(0x1) << QSPI_IFR_SMRM_Pos)                 /* (QSPI_IFR) Serial Memory Register Mode Mask */
#define QSPI_IFR_SMRM(value)                  (QSPI_IFR_SMRM_Msk & (_UINT32_(value) << QSPI_IFR_SMRM_Pos)) /* Assigment of value for SMRM in the QSPI_IFR register */
#define QSPI_IFR_APBTFRTYP_Pos                _UINT32_(24)                                         /* (QSPI_IFR) Peripheral BusTransfer Type Position */
#define QSPI_IFR_APBTFRTYP_Msk                (_UINT32_(0x1) << QSPI_IFR_APBTFRTYP_Pos)            /* (QSPI_IFR) Peripheral BusTransfer Type Mask */
#define QSPI_IFR_APBTFRTYP(value)             (QSPI_IFR_APBTFRTYP_Msk & (_UINT32_(value) << QSPI_IFR_APBTFRTYP_Pos)) /* Assigment of value for APBTFRTYP in the QSPI_IFR register */
#define QSPI_IFR_DQSEN_Pos                    _UINT32_(25)                                         /* (QSPI_IFR) DQS Sampling Enable Position */
#define QSPI_IFR_DQSEN_Msk                    (_UINT32_(0x1) << QSPI_IFR_DQSEN_Pos)                /* (QSPI_IFR) DQS Sampling Enable Mask */
#define QSPI_IFR_DQSEN(value)                 (QSPI_IFR_DQSEN_Msk & (_UINT32_(value) << QSPI_IFR_DQSEN_Pos)) /* Assigment of value for DQSEN in the QSPI_IFR register */
#define QSPI_IFR_DDRCMDEN_Pos                 _UINT32_(26)                                         /* (QSPI_IFR) DDR Mode Command Enable Position */
#define QSPI_IFR_DDRCMDEN_Msk                 (_UINT32_(0x1) << QSPI_IFR_DDRCMDEN_Pos)             /* (QSPI_IFR) DDR Mode Command Enable Mask */
#define QSPI_IFR_DDRCMDEN(value)              (QSPI_IFR_DDRCMDEN_Msk & (_UINT32_(value) << QSPI_IFR_DDRCMDEN_Pos)) /* Assigment of value for DDRCMDEN in the QSPI_IFR register */
#define   QSPI_IFR_DDRCMDEN_DISABLED_Val      _UINT32_(0x0)                                        /* (QSPI_IFR) Transfer of instruction field is performed in Single Data Rate mode even if DDREN is written to '1'.  */
#define   QSPI_IFR_DDRCMDEN_ENABLED_Val       _UINT32_(0x1)                                        /* (QSPI_IFR) Transfer of instruction field is performed in Double Data Rate mode if DDREN bit is written to '1'. If DDREN is written to '0', the instruction field is sent in Single Data Rate mode.  */
#define QSPI_IFR_DDRCMDEN_DISABLED            (QSPI_IFR_DDRCMDEN_DISABLED_Val << QSPI_IFR_DDRCMDEN_Pos) /* (QSPI_IFR) Transfer of instruction field is performed in Single Data Rate mode even if DDREN is written to '1'. Position  */
#define QSPI_IFR_DDRCMDEN_ENABLED             (QSPI_IFR_DDRCMDEN_ENABLED_Val << QSPI_IFR_DDRCMDEN_Pos) /* (QSPI_IFR) Transfer of instruction field is performed in Double Data Rate mode if DDREN bit is written to '1'. If DDREN is written to '0', the instruction field is sent in Single Data Rate mode. Position  */
#define QSPI_IFR_PROTTYP_Pos                  _UINT32_(28)                                         /* (QSPI_IFR) Protocol Type Position */
#define QSPI_IFR_PROTTYP_Msk                  (_UINT32_(0x3) << QSPI_IFR_PROTTYP_Pos)              /* (QSPI_IFR) Protocol Type Mask */
#define QSPI_IFR_PROTTYP(value)               (QSPI_IFR_PROTTYP_Msk & (_UINT32_(value) << QSPI_IFR_PROTTYP_Pos)) /* Assigment of value for PROTTYP in the QSPI_IFR register */
#define   QSPI_IFR_PROTTYP_STD_SPI_Val        _UINT32_(0x0)                                        /* (QSPI_IFR) Standard (Q)SPI Protocol  */
#define QSPI_IFR_PROTTYP_STD_SPI              (QSPI_IFR_PROTTYP_STD_SPI_Val << QSPI_IFR_PROTTYP_Pos) /* (QSPI_IFR) Standard (Q)SPI Protocol Position  */
#define QSPI_IFR_Msk                          _UINT32_(0x379FDFFF)                                 /* (QSPI_IFR) Register Mask  */


/* -------- QSPI_RICR : (QSPI Offset: 0x3C) (R/W 32) Read Instruction Code Register -------- */
#define QSPI_RICR_RDINST_Pos                  _UINT32_(0)                                          /* (QSPI_RICR) Read Instruction Code Position */
#define QSPI_RICR_RDINST_Msk                  (_UINT32_(0xFF) << QSPI_RICR_RDINST_Pos)             /* (QSPI_RICR) Read Instruction Code Mask */
#define QSPI_RICR_RDINST(value)               (QSPI_RICR_RDINST_Msk & (_UINT32_(value) << QSPI_RICR_RDINST_Pos)) /* Assigment of value for RDINST in the QSPI_RICR register */
#define QSPI_RICR_RDOPT_Pos                   _UINT32_(16)                                         /* (QSPI_RICR) Read Option Code Position */
#define QSPI_RICR_RDOPT_Msk                   (_UINT32_(0xFF) << QSPI_RICR_RDOPT_Pos)              /* (QSPI_RICR) Read Option Code Mask */
#define QSPI_RICR_RDOPT(value)                (QSPI_RICR_RDOPT_Msk & (_UINT32_(value) << QSPI_RICR_RDOPT_Pos)) /* Assigment of value for RDOPT in the QSPI_RICR register */
#define QSPI_RICR_Msk                         _UINT32_(0x00FF00FF)                                 /* (QSPI_RICR) Register Mask  */


/* -------- QSPI_SMR : (QSPI Offset: 0x40) (R/W 32) Scrambling Mode Register -------- */
#define QSPI_SMR_SCREN_Pos                    _UINT32_(0)                                          /* (QSPI_SMR) Scrambling/Unscrambling Enable Position */
#define QSPI_SMR_SCREN_Msk                    (_UINT32_(0x1) << QSPI_SMR_SCREN_Pos)                /* (QSPI_SMR) Scrambling/Unscrambling Enable Mask */
#define QSPI_SMR_SCREN(value)                 (QSPI_SMR_SCREN_Msk & (_UINT32_(value) << QSPI_SMR_SCREN_Pos)) /* Assigment of value for SCREN in the QSPI_SMR register */
#define   QSPI_SMR_SCREN_DISABLED_Val         _UINT32_(0x0)                                        /* (QSPI_SMR) The scrambling/unscrambling is disabled.  */
#define   QSPI_SMR_SCREN_ENABLED_Val          _UINT32_(0x1)                                        /* (QSPI_SMR) The scrambling/unscrambling is enabled.  */
#define QSPI_SMR_SCREN_DISABLED               (QSPI_SMR_SCREN_DISABLED_Val << QSPI_SMR_SCREN_Pos)  /* (QSPI_SMR) The scrambling/unscrambling is disabled. Position  */
#define QSPI_SMR_SCREN_ENABLED                (QSPI_SMR_SCREN_ENABLED_Val << QSPI_SMR_SCREN_Pos)   /* (QSPI_SMR) The scrambling/unscrambling is enabled. Position  */
#define QSPI_SMR_RVDIS_Pos                    _UINT32_(1)                                          /* (QSPI_SMR) Scrambling/Unscrambling Random Value Disable Position */
#define QSPI_SMR_RVDIS_Msk                    (_UINT32_(0x1) << QSPI_SMR_RVDIS_Pos)                /* (QSPI_SMR) Scrambling/Unscrambling Random Value Disable Mask */
#define QSPI_SMR_RVDIS(value)                 (QSPI_SMR_RVDIS_Msk & (_UINT32_(value) << QSPI_SMR_RVDIS_Pos)) /* Assigment of value for RVDIS in the QSPI_SMR register */
#define QSPI_SMR_SCRKL_Pos                    _UINT32_(2)                                          /* (QSPI_SMR) Scrambling Key Lock Position */
#define QSPI_SMR_SCRKL_Msk                    (_UINT32_(0x1) << QSPI_SMR_SCRKL_Pos)                /* (QSPI_SMR) Scrambling Key Lock Mask */
#define QSPI_SMR_SCRKL(value)                 (QSPI_SMR_SCRKL_Msk & (_UINT32_(value) << QSPI_SMR_SCRKL_Pos)) /* Assigment of value for SCRKL in the QSPI_SMR register */
#define QSPI_SMR_Msk                          _UINT32_(0x00000007)                                 /* (QSPI_SMR) Register Mask  */


/* -------- QSPI_SKR : (QSPI Offset: 0x44) ( /W 32) Scrambling Key Register -------- */
#define QSPI_SKR_USRK_Pos                     _UINT32_(0)                                          /* (QSPI_SKR) User Scrambling Key Position */
#define QSPI_SKR_USRK_Msk                     (_UINT32_(0xFFFFFFFF) << QSPI_SKR_USRK_Pos)          /* (QSPI_SKR) User Scrambling Key Mask */
#define QSPI_SKR_USRK(value)                  (QSPI_SKR_USRK_Msk & (_UINT32_(value) << QSPI_SKR_USRK_Pos)) /* Assigment of value for USRK in the QSPI_SKR register */
#define QSPI_SKR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (QSPI_SKR) Register Mask  */


/* -------- QSPI_WRACNT : (QSPI Offset: 0x54) (R/W 32) Write Access Counter Register -------- */
#define QSPI_WRACNT_NBWRA_Pos                 _UINT32_(0)                                          /* (QSPI_WRACNT) Number of Write Accesses Position */
#define QSPI_WRACNT_NBWRA_Msk                 (_UINT32_(0xFFFFFFFF) << QSPI_WRACNT_NBWRA_Pos)      /* (QSPI_WRACNT) Number of Write Accesses Mask */
#define QSPI_WRACNT_NBWRA(value)              (QSPI_WRACNT_NBWRA_Msk & (_UINT32_(value) << QSPI_WRACNT_NBWRA_Pos)) /* Assigment of value for NBWRA in the QSPI_WRACNT register */
#define QSPI_WRACNT_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (QSPI_WRACNT) Register Mask  */


/* -------- QSPI_TOUT : (QSPI Offset: 0x64) (R/W 32) Timeout Register -------- */
#define QSPI_TOUT_TCNTM_Pos                   _UINT32_(0)                                          /* (QSPI_TOUT) Time-out Counter Maximum Value Position */
#define QSPI_TOUT_TCNTM_Msk                   (_UINT32_(0xFFFF) << QSPI_TOUT_TCNTM_Pos)            /* (QSPI_TOUT) Time-out Counter Maximum Value Mask */
#define QSPI_TOUT_TCNTM(value)                (QSPI_TOUT_TCNTM_Msk & (_UINT32_(value) << QSPI_TOUT_TCNTM_Pos)) /* Assigment of value for TCNTM in the QSPI_TOUT register */
#define QSPI_TOUT_Msk                         _UINT32_(0x0000FFFF)                                 /* (QSPI_TOUT) Register Mask  */


/* -------- QSPI_WPMR : (QSPI Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define QSPI_WPMR_WPEN_Pos                    _UINT32_(0)                                          /* (QSPI_WPMR) Write Protection Enable Position */
#define QSPI_WPMR_WPEN_Msk                    (_UINT32_(0x1) << QSPI_WPMR_WPEN_Pos)                /* (QSPI_WPMR) Write Protection Enable Mask */
#define QSPI_WPMR_WPEN(value)                 (QSPI_WPMR_WPEN_Msk & (_UINT32_(value) << QSPI_WPMR_WPEN_Pos)) /* Assigment of value for WPEN in the QSPI_WPMR register */
#define QSPI_WPMR_WPITEN_Pos                  _UINT32_(1)                                          /* (QSPI_WPMR) Write Protection Interrupt Enable Position */
#define QSPI_WPMR_WPITEN_Msk                  (_UINT32_(0x1) << QSPI_WPMR_WPITEN_Pos)              /* (QSPI_WPMR) Write Protection Interrupt Enable Mask */
#define QSPI_WPMR_WPITEN(value)               (QSPI_WPMR_WPITEN_Msk & (_UINT32_(value) << QSPI_WPMR_WPITEN_Pos)) /* Assigment of value for WPITEN in the QSPI_WPMR register */
#define QSPI_WPMR_WPCREN_Pos                  _UINT32_(2)                                          /* (QSPI_WPMR) Write Protection Control Register Enable Position */
#define QSPI_WPMR_WPCREN_Msk                  (_UINT32_(0x1) << QSPI_WPMR_WPCREN_Pos)              /* (QSPI_WPMR) Write Protection Control Register Enable Mask */
#define QSPI_WPMR_WPCREN(value)               (QSPI_WPMR_WPCREN_Msk & (_UINT32_(value) << QSPI_WPMR_WPCREN_Pos)) /* Assigment of value for WPCREN in the QSPI_WPMR register */
#define QSPI_WPMR_WPKEY_Pos                   _UINT32_(8)                                          /* (QSPI_WPMR) Write Protection Key Position */
#define QSPI_WPMR_WPKEY_Msk                   (_UINT32_(0xFFFFFF) << QSPI_WPMR_WPKEY_Pos)          /* (QSPI_WPMR) Write Protection Key Mask */
#define QSPI_WPMR_WPKEY(value)                (QSPI_WPMR_WPKEY_Msk & (_UINT32_(value) << QSPI_WPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the QSPI_WPMR register */
#define   QSPI_WPMR_WPKEY_PASSWD_Val          _UINT32_(0x515350)                                   /* (QSPI_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0.  */
#define QSPI_WPMR_WPKEY_PASSWD                (QSPI_WPMR_WPKEY_PASSWD_Val << QSPI_WPMR_WPKEY_Pos)  /* (QSPI_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0. Position  */
#define QSPI_WPMR_Msk                         _UINT32_(0xFFFFFF07)                                 /* (QSPI_WPMR) Register Mask  */


/* -------- QSPI_WPSR : (QSPI Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define QSPI_WPSR_WPVS_Pos                    _UINT32_(0)                                          /* (QSPI_WPSR) Write Protection Violation Status Position */
#define QSPI_WPSR_WPVS_Msk                    (_UINT32_(0x1) << QSPI_WPSR_WPVS_Pos)                /* (QSPI_WPSR) Write Protection Violation Status Mask */
#define QSPI_WPSR_WPVS(value)                 (QSPI_WPSR_WPVS_Msk & (_UINT32_(value) << QSPI_WPSR_WPVS_Pos)) /* Assigment of value for WPVS in the QSPI_WPSR register */
#define QSPI_WPSR_WPVSRC_Pos                  _UINT32_(8)                                          /* (QSPI_WPSR) Write Protection Violation Source Position */
#define QSPI_WPSR_WPVSRC_Msk                  (_UINT32_(0xFF) << QSPI_WPSR_WPVSRC_Pos)             /* (QSPI_WPSR) Write Protection Violation Source Mask */
#define QSPI_WPSR_WPVSRC(value)               (QSPI_WPSR_WPVSRC_Msk & (_UINT32_(value) << QSPI_WPSR_WPVSRC_Pos)) /* Assigment of value for WPVSRC in the QSPI_WPSR register */
#define QSPI_WPSR_Msk                         _UINT32_(0x0000FF01)                                 /* (QSPI_WPSR) Register Mask  */


/* -------- QSPI_RPR : (QSPI Offset: 0x100) (R/W 32) Receive Pointer Register -------- */
#define QSPI_RPR_RXPTR_Pos                    _UINT32_(0)                                          /* (QSPI_RPR) Receive Pointer Register Position */
#define QSPI_RPR_RXPTR_Msk                    (_UINT32_(0xFFFFFFFF) << QSPI_RPR_RXPTR_Pos)         /* (QSPI_RPR) Receive Pointer Register Mask */
#define QSPI_RPR_RXPTR(value)                 (QSPI_RPR_RXPTR_Msk & (_UINT32_(value) << QSPI_RPR_RXPTR_Pos)) /* Assigment of value for RXPTR in the QSPI_RPR register */
#define QSPI_RPR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (QSPI_RPR) Register Mask  */


/* -------- QSPI_RCR : (QSPI Offset: 0x104) (R/W 32) Receive Counter Register -------- */
#define QSPI_RCR_RXCTR_Pos                    _UINT32_(0)                                          /* (QSPI_RCR) Receive Counter Register Position */
#define QSPI_RCR_RXCTR_Msk                    (_UINT32_(0xFFFF) << QSPI_RCR_RXCTR_Pos)             /* (QSPI_RCR) Receive Counter Register Mask */
#define QSPI_RCR_RXCTR(value)                 (QSPI_RCR_RXCTR_Msk & (_UINT32_(value) << QSPI_RCR_RXCTR_Pos)) /* Assigment of value for RXCTR in the QSPI_RCR register */
#define QSPI_RCR_Msk                          _UINT32_(0x0000FFFF)                                 /* (QSPI_RCR) Register Mask  */


/* -------- QSPI_TPR : (QSPI Offset: 0x108) (R/W 32) Transmit Pointer Register -------- */
#define QSPI_TPR_TXPTR_Pos                    _UINT32_(0)                                          /* (QSPI_TPR) Transmit Counter Register Position */
#define QSPI_TPR_TXPTR_Msk                    (_UINT32_(0xFFFFFFFF) << QSPI_TPR_TXPTR_Pos)         /* (QSPI_TPR) Transmit Counter Register Mask */
#define QSPI_TPR_TXPTR(value)                 (QSPI_TPR_TXPTR_Msk & (_UINT32_(value) << QSPI_TPR_TXPTR_Pos)) /* Assigment of value for TXPTR in the QSPI_TPR register */
#define QSPI_TPR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (QSPI_TPR) Register Mask  */


/* -------- QSPI_TCR : (QSPI Offset: 0x10C) (R/W 32) Transmit Counter Register -------- */
#define QSPI_TCR_TXCTR_Pos                    _UINT32_(0)                                          /* (QSPI_TCR) Transmit Counter Register Position */
#define QSPI_TCR_TXCTR_Msk                    (_UINT32_(0xFFFF) << QSPI_TCR_TXCTR_Pos)             /* (QSPI_TCR) Transmit Counter Register Mask */
#define QSPI_TCR_TXCTR(value)                 (QSPI_TCR_TXCTR_Msk & (_UINT32_(value) << QSPI_TCR_TXCTR_Pos)) /* Assigment of value for TXCTR in the QSPI_TCR register */
#define QSPI_TCR_Msk                          _UINT32_(0x0000FFFF)                                 /* (QSPI_TCR) Register Mask  */


/* -------- QSPI_RNPR : (QSPI Offset: 0x110) (R/W 32) Receive Next Pointer Register -------- */
#define QSPI_RNPR_RXNPTR_Pos                  _UINT32_(0)                                          /* (QSPI_RNPR) Receive Next Pointer Position */
#define QSPI_RNPR_RXNPTR_Msk                  (_UINT32_(0xFFFFFFFF) << QSPI_RNPR_RXNPTR_Pos)       /* (QSPI_RNPR) Receive Next Pointer Mask */
#define QSPI_RNPR_RXNPTR(value)               (QSPI_RNPR_RXNPTR_Msk & (_UINT32_(value) << QSPI_RNPR_RXNPTR_Pos)) /* Assigment of value for RXNPTR in the QSPI_RNPR register */
#define QSPI_RNPR_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (QSPI_RNPR) Register Mask  */


/* -------- QSPI_RNCR : (QSPI Offset: 0x114) (R/W 32) Receive Next Counter Register -------- */
#define QSPI_RNCR_RXNCTR_Pos                  _UINT32_(0)                                          /* (QSPI_RNCR) Receive Next Counter Position */
#define QSPI_RNCR_RXNCTR_Msk                  (_UINT32_(0xFFFF) << QSPI_RNCR_RXNCTR_Pos)           /* (QSPI_RNCR) Receive Next Counter Mask */
#define QSPI_RNCR_RXNCTR(value)               (QSPI_RNCR_RXNCTR_Msk & (_UINT32_(value) << QSPI_RNCR_RXNCTR_Pos)) /* Assigment of value for RXNCTR in the QSPI_RNCR register */
#define QSPI_RNCR_Msk                         _UINT32_(0x0000FFFF)                                 /* (QSPI_RNCR) Register Mask  */


/* -------- QSPI_TNPR : (QSPI Offset: 0x118) (R/W 32) Transmit Next Pointer Register -------- */
#define QSPI_TNPR_TXNPTR_Pos                  _UINT32_(0)                                          /* (QSPI_TNPR) Transmit Next Pointer Position */
#define QSPI_TNPR_TXNPTR_Msk                  (_UINT32_(0xFFFFFFFF) << QSPI_TNPR_TXNPTR_Pos)       /* (QSPI_TNPR) Transmit Next Pointer Mask */
#define QSPI_TNPR_TXNPTR(value)               (QSPI_TNPR_TXNPTR_Msk & (_UINT32_(value) << QSPI_TNPR_TXNPTR_Pos)) /* Assigment of value for TXNPTR in the QSPI_TNPR register */
#define QSPI_TNPR_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (QSPI_TNPR) Register Mask  */


/* -------- QSPI_TNCR : (QSPI Offset: 0x11C) (R/W 32) Transmit Next Counter Register -------- */
#define QSPI_TNCR_TXNCTR_Pos                  _UINT32_(0)                                          /* (QSPI_TNCR) Transmit Counter Next Position */
#define QSPI_TNCR_TXNCTR_Msk                  (_UINT32_(0xFFFF) << QSPI_TNCR_TXNCTR_Pos)           /* (QSPI_TNCR) Transmit Counter Next Mask */
#define QSPI_TNCR_TXNCTR(value)               (QSPI_TNCR_TXNCTR_Msk & (_UINT32_(value) << QSPI_TNCR_TXNCTR_Pos)) /* Assigment of value for TXNCTR in the QSPI_TNCR register */
#define QSPI_TNCR_Msk                         _UINT32_(0x0000FFFF)                                 /* (QSPI_TNCR) Register Mask  */


/* -------- QSPI_PTCR : (QSPI Offset: 0x120) ( /W 32) Transfer Control Register -------- */
#define QSPI_PTCR_RXTEN_Pos                   _UINT32_(0)                                          /* (QSPI_PTCR) Receiver Transfer Enable Position */
#define QSPI_PTCR_RXTEN_Msk                   (_UINT32_(0x1) << QSPI_PTCR_RXTEN_Pos)               /* (QSPI_PTCR) Receiver Transfer Enable Mask */
#define QSPI_PTCR_RXTEN(value)                (QSPI_PTCR_RXTEN_Msk & (_UINT32_(value) << QSPI_PTCR_RXTEN_Pos)) /* Assigment of value for RXTEN in the QSPI_PTCR register */
#define QSPI_PTCR_RXTDIS_Pos                  _UINT32_(1)                                          /* (QSPI_PTCR) Receiver Transfer Disable Position */
#define QSPI_PTCR_RXTDIS_Msk                  (_UINT32_(0x1) << QSPI_PTCR_RXTDIS_Pos)              /* (QSPI_PTCR) Receiver Transfer Disable Mask */
#define QSPI_PTCR_RXTDIS(value)               (QSPI_PTCR_RXTDIS_Msk & (_UINT32_(value) << QSPI_PTCR_RXTDIS_Pos)) /* Assigment of value for RXTDIS in the QSPI_PTCR register */
#define QSPI_PTCR_TXTEN_Pos                   _UINT32_(8)                                          /* (QSPI_PTCR) Transmitter Transfer Enable Position */
#define QSPI_PTCR_TXTEN_Msk                   (_UINT32_(0x1) << QSPI_PTCR_TXTEN_Pos)               /* (QSPI_PTCR) Transmitter Transfer Enable Mask */
#define QSPI_PTCR_TXTEN(value)                (QSPI_PTCR_TXTEN_Msk & (_UINT32_(value) << QSPI_PTCR_TXTEN_Pos)) /* Assigment of value for TXTEN in the QSPI_PTCR register */
#define QSPI_PTCR_TXTDIS_Pos                  _UINT32_(9)                                          /* (QSPI_PTCR) Transmitter Transfer Disable Position */
#define QSPI_PTCR_TXTDIS_Msk                  (_UINT32_(0x1) << QSPI_PTCR_TXTDIS_Pos)              /* (QSPI_PTCR) Transmitter Transfer Disable Mask */
#define QSPI_PTCR_TXTDIS(value)               (QSPI_PTCR_TXTDIS_Msk & (_UINT32_(value) << QSPI_PTCR_TXTDIS_Pos)) /* Assigment of value for TXTDIS in the QSPI_PTCR register */
#define QSPI_PTCR_RXCBEN_Pos                  _UINT32_(16)                                         /* (QSPI_PTCR) Receiver Circular Buffer Enable Position */
#define QSPI_PTCR_RXCBEN_Msk                  (_UINT32_(0x1) << QSPI_PTCR_RXCBEN_Pos)              /* (QSPI_PTCR) Receiver Circular Buffer Enable Mask */
#define QSPI_PTCR_RXCBEN(value)               (QSPI_PTCR_RXCBEN_Msk & (_UINT32_(value) << QSPI_PTCR_RXCBEN_Pos)) /* Assigment of value for RXCBEN in the QSPI_PTCR register */
#define QSPI_PTCR_RXCBDIS_Pos                 _UINT32_(17)                                         /* (QSPI_PTCR) Receiver Circular Buffer Disable Position */
#define QSPI_PTCR_RXCBDIS_Msk                 (_UINT32_(0x1) << QSPI_PTCR_RXCBDIS_Pos)             /* (QSPI_PTCR) Receiver Circular Buffer Disable Mask */
#define QSPI_PTCR_RXCBDIS(value)              (QSPI_PTCR_RXCBDIS_Msk & (_UINT32_(value) << QSPI_PTCR_RXCBDIS_Pos)) /* Assigment of value for RXCBDIS in the QSPI_PTCR register */
#define QSPI_PTCR_TXCBEN_Pos                  _UINT32_(18)                                         /* (QSPI_PTCR) Transmitter Circular Buffer Enable Position */
#define QSPI_PTCR_TXCBEN_Msk                  (_UINT32_(0x1) << QSPI_PTCR_TXCBEN_Pos)              /* (QSPI_PTCR) Transmitter Circular Buffer Enable Mask */
#define QSPI_PTCR_TXCBEN(value)               (QSPI_PTCR_TXCBEN_Msk & (_UINT32_(value) << QSPI_PTCR_TXCBEN_Pos)) /* Assigment of value for TXCBEN in the QSPI_PTCR register */
#define QSPI_PTCR_TXCBDIS_Pos                 _UINT32_(19)                                         /* (QSPI_PTCR) Transmitter Circular Buffer Disable Position */
#define QSPI_PTCR_TXCBDIS_Msk                 (_UINT32_(0x1) << QSPI_PTCR_TXCBDIS_Pos)             /* (QSPI_PTCR) Transmitter Circular Buffer Disable Mask */
#define QSPI_PTCR_TXCBDIS(value)              (QSPI_PTCR_TXCBDIS_Msk & (_UINT32_(value) << QSPI_PTCR_TXCBDIS_Pos)) /* Assigment of value for TXCBDIS in the QSPI_PTCR register */
#define QSPI_PTCR_ERRCLR_Pos                  _UINT32_(24)                                         /* (QSPI_PTCR) Transfer Bus Error Clear Position */
#define QSPI_PTCR_ERRCLR_Msk                  (_UINT32_(0x1) << QSPI_PTCR_ERRCLR_Pos)              /* (QSPI_PTCR) Transfer Bus Error Clear Mask */
#define QSPI_PTCR_ERRCLR(value)               (QSPI_PTCR_ERRCLR_Msk & (_UINT32_(value) << QSPI_PTCR_ERRCLR_Pos)) /* Assigment of value for ERRCLR in the QSPI_PTCR register */
#define QSPI_PTCR_Msk                         _UINT32_(0x010F0303)                                 /* (QSPI_PTCR) Register Mask  */


/* -------- QSPI_PTSR : (QSPI Offset: 0x124) ( R/ 32) Transfer Status Register -------- */
#define QSPI_PTSR_RXTEN_Pos                   _UINT32_(0)                                          /* (QSPI_PTSR) Receiver Transfer Enable Position */
#define QSPI_PTSR_RXTEN_Msk                   (_UINT32_(0x1) << QSPI_PTSR_RXTEN_Pos)               /* (QSPI_PTSR) Receiver Transfer Enable Mask */
#define QSPI_PTSR_RXTEN(value)                (QSPI_PTSR_RXTEN_Msk & (_UINT32_(value) << QSPI_PTSR_RXTEN_Pos)) /* Assigment of value for RXTEN in the QSPI_PTSR register */
#define QSPI_PTSR_TXTEN_Pos                   _UINT32_(8)                                          /* (QSPI_PTSR) Transmitter Transfer Enable Position */
#define QSPI_PTSR_TXTEN_Msk                   (_UINT32_(0x1) << QSPI_PTSR_TXTEN_Pos)               /* (QSPI_PTSR) Transmitter Transfer Enable Mask */
#define QSPI_PTSR_TXTEN(value)                (QSPI_PTSR_TXTEN_Msk & (_UINT32_(value) << QSPI_PTSR_TXTEN_Pos)) /* Assigment of value for TXTEN in the QSPI_PTSR register */
#define QSPI_PTSR_RXCBEN_Pos                  _UINT32_(16)                                         /* (QSPI_PTSR) Receiver Circular Buffer Enable Position */
#define QSPI_PTSR_RXCBEN_Msk                  (_UINT32_(0x1) << QSPI_PTSR_RXCBEN_Pos)              /* (QSPI_PTSR) Receiver Circular Buffer Enable Mask */
#define QSPI_PTSR_RXCBEN(value)               (QSPI_PTSR_RXCBEN_Msk & (_UINT32_(value) << QSPI_PTSR_RXCBEN_Pos)) /* Assigment of value for RXCBEN in the QSPI_PTSR register */
#define QSPI_PTSR_TXCBEN_Pos                  _UINT32_(18)                                         /* (QSPI_PTSR) Transmitter Circular Buffer Enable Position */
#define QSPI_PTSR_TXCBEN_Msk                  (_UINT32_(0x1) << QSPI_PTSR_TXCBEN_Pos)              /* (QSPI_PTSR) Transmitter Circular Buffer Enable Mask */
#define QSPI_PTSR_TXCBEN(value)               (QSPI_PTSR_TXCBEN_Msk & (_UINT32_(value) << QSPI_PTSR_TXCBEN_Pos)) /* Assigment of value for TXCBEN in the QSPI_PTSR register */
#define QSPI_PTSR_ERR_Pos                     _UINT32_(24)                                         /* (QSPI_PTSR) Transfer Bus Error Position */
#define QSPI_PTSR_ERR_Msk                     (_UINT32_(0x1) << QSPI_PTSR_ERR_Pos)                 /* (QSPI_PTSR) Transfer Bus Error Mask */
#define QSPI_PTSR_ERR(value)                  (QSPI_PTSR_ERR_Msk & (_UINT32_(value) << QSPI_PTSR_ERR_Pos)) /* Assigment of value for ERR in the QSPI_PTSR register */
#define QSPI_PTSR_Msk                         _UINT32_(0x01050101)                                 /* (QSPI_PTSR) Register Mask  */


/* -------- QSPI_PWPMR : (QSPI Offset: 0x128) (R/W 32) Write Protection Mode Register -------- */
#define QSPI_PWPMR_WPPTREN_Pos                _UINT32_(0)                                          /* (QSPI_PWPMR) Write Protection Pointer Registers Enable Position */
#define QSPI_PWPMR_WPPTREN_Msk                (_UINT32_(0x1) << QSPI_PWPMR_WPPTREN_Pos)            /* (QSPI_PWPMR) Write Protection Pointer Registers Enable Mask */
#define QSPI_PWPMR_WPPTREN(value)             (QSPI_PWPMR_WPPTREN_Msk & (_UINT32_(value) << QSPI_PWPMR_WPPTREN_Pos)) /* Assigment of value for WPPTREN in the QSPI_PWPMR register */
#define QSPI_PWPMR_WPCTREN_Pos                _UINT32_(1)                                          /* (QSPI_PWPMR) Write Protection Counter Registers Enable Position */
#define QSPI_PWPMR_WPCTREN_Msk                (_UINT32_(0x1) << QSPI_PWPMR_WPCTREN_Pos)            /* (QSPI_PWPMR) Write Protection Counter Registers Enable Mask */
#define QSPI_PWPMR_WPCTREN(value)             (QSPI_PWPMR_WPCTREN_Msk & (_UINT32_(value) << QSPI_PWPMR_WPCTREN_Pos)) /* Assigment of value for WPCTREN in the QSPI_PWPMR register */
#define QSPI_PWPMR_WPCREN_Pos                 _UINT32_(2)                                          /* (QSPI_PWPMR) Write Protection Control Register Enable Position */
#define QSPI_PWPMR_WPCREN_Msk                 (_UINT32_(0x1) << QSPI_PWPMR_WPCREN_Pos)             /* (QSPI_PWPMR) Write Protection Control Register Enable Mask */
#define QSPI_PWPMR_WPCREN(value)              (QSPI_PWPMR_WPCREN_Msk & (_UINT32_(value) << QSPI_PWPMR_WPCREN_Pos)) /* Assigment of value for WPCREN in the QSPI_PWPMR register */
#define QSPI_PWPMR_WPKEY_Pos                  _UINT32_(8)                                          /* (QSPI_PWPMR) Write Protection Key Position */
#define QSPI_PWPMR_WPKEY_Msk                  (_UINT32_(0xFFFFFF) << QSPI_PWPMR_WPKEY_Pos)         /* (QSPI_PWPMR) Write Protection Key Mask */
#define QSPI_PWPMR_WPKEY(value)               (QSPI_PWPMR_WPKEY_Msk & (_UINT32_(value) << QSPI_PWPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the QSPI_PWPMR register */
#define   QSPI_PWPMR_WPKEY_PASSWD_Val         _UINT32_(0x504443)                                   /* (QSPI_PWPMR) Writing any other value in this field aborts the write operation. Always reads as 0.  */
#define QSPI_PWPMR_WPKEY_PASSWD               (QSPI_PWPMR_WPKEY_PASSWD_Val << QSPI_PWPMR_WPKEY_Pos) /* (QSPI_PWPMR) Writing any other value in this field aborts the write operation. Always reads as 0. Position  */
#define QSPI_PWPMR_Msk                        _UINT32_(0xFFFFFF07)                                 /* (QSPI_PWPMR) Register Mask  */


/** \brief QSPI register offsets definitions */
#define QSPI_CR_REG_OFST               _UINT32_(0x00)      /* (QSPI_CR) Control Register Offset */
#define QSPI_MR_REG_OFST               _UINT32_(0x04)      /* (QSPI_MR) Mode Register Offset */
#define QSPI_RDR_REG_OFST              _UINT32_(0x08)      /* (QSPI_RDR) Receive Data Register Offset */
#define QSPI_TDR_REG_OFST              _UINT32_(0x0C)      /* (QSPI_TDR) Transmit Data Register Offset */
#define QSPI_ISR_REG_OFST              _UINT32_(0x10)      /* (QSPI_ISR) Interrupt Status Register Offset */
#define QSPI_IER_REG_OFST              _UINT32_(0x14)      /* (QSPI_IER) Interrupt Enable Register Offset */
#define QSPI_IDR_REG_OFST              _UINT32_(0x18)      /* (QSPI_IDR) Interrupt Disable Register Offset */
#define QSPI_IMR_REG_OFST              _UINT32_(0x1C)      /* (QSPI_IMR) Interrupt Mask Register Offset */
#define QSPI_SCR_REG_OFST              _UINT32_(0x20)      /* (QSPI_SCR) Serial Clock Register Offset */
#define QSPI_SR_REG_OFST               _UINT32_(0x24)      /* (QSPI_SR) Status Register Offset */
#define QSPI_IAR_REG_OFST              _UINT32_(0x30)      /* (QSPI_IAR) Instruction Address Register Offset */
#define QSPI_WICR_REG_OFST             _UINT32_(0x34)      /* (QSPI_WICR) Write Instruction Code Register Offset */
#define QSPI_IFR_REG_OFST              _UINT32_(0x38)      /* (QSPI_IFR) Instruction Frame Register Offset */
#define QSPI_RICR_REG_OFST             _UINT32_(0x3C)      /* (QSPI_RICR) Read Instruction Code Register Offset */
#define QSPI_SMR_REG_OFST              _UINT32_(0x40)      /* (QSPI_SMR) Scrambling Mode Register Offset */
#define QSPI_SKR_REG_OFST              _UINT32_(0x44)      /* (QSPI_SKR) Scrambling Key Register Offset */
#define QSPI_WRACNT_REG_OFST           _UINT32_(0x54)      /* (QSPI_WRACNT) Write Access Counter Register Offset */
#define QSPI_TOUT_REG_OFST             _UINT32_(0x64)      /* (QSPI_TOUT) Timeout Register Offset */
#define QSPI_WPMR_REG_OFST             _UINT32_(0xE4)      /* (QSPI_WPMR) Write Protection Mode Register Offset */
#define QSPI_WPSR_REG_OFST             _UINT32_(0xE8)      /* (QSPI_WPSR) Write Protection Status Register Offset */
#define QSPI_RPR_REG_OFST              _UINT32_(0x100)     /* (QSPI_RPR) Receive Pointer Register Offset */
#define QSPI_RCR_REG_OFST              _UINT32_(0x104)     /* (QSPI_RCR) Receive Counter Register Offset */
#define QSPI_TPR_REG_OFST              _UINT32_(0x108)     /* (QSPI_TPR) Transmit Pointer Register Offset */
#define QSPI_TCR_REG_OFST              _UINT32_(0x10C)     /* (QSPI_TCR) Transmit Counter Register Offset */
#define QSPI_RNPR_REG_OFST             _UINT32_(0x110)     /* (QSPI_RNPR) Receive Next Pointer Register Offset */
#define QSPI_RNCR_REG_OFST             _UINT32_(0x114)     /* (QSPI_RNCR) Receive Next Counter Register Offset */
#define QSPI_TNPR_REG_OFST             _UINT32_(0x118)     /* (QSPI_TNPR) Transmit Next Pointer Register Offset */
#define QSPI_TNCR_REG_OFST             _UINT32_(0x11C)     /* (QSPI_TNCR) Transmit Next Counter Register Offset */
#define QSPI_PTCR_REG_OFST             _UINT32_(0x120)     /* (QSPI_PTCR) Transfer Control Register Offset */
#define QSPI_PTSR_REG_OFST             _UINT32_(0x124)     /* (QSPI_PTSR) Transfer Status Register Offset */
#define QSPI_PWPMR_REG_OFST            _UINT32_(0x128)     /* (QSPI_PWPMR) Write Protection Mode Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief QSPI register API structure */
typedef struct
{
  __O   uint32_t                       QSPI_CR;            /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       QSPI_MR;            /**< Offset: 0x04 (R/W  32) Mode Register */
  __I   uint32_t                       QSPI_RDR;           /**< Offset: 0x08 (R/   32) Receive Data Register */
  __O   uint32_t                       QSPI_TDR;           /**< Offset: 0x0C ( /W  32) Transmit Data Register */
  __I   uint32_t                       QSPI_ISR;           /**< Offset: 0x10 (R/   32) Interrupt Status Register */
  __O   uint32_t                       QSPI_IER;           /**< Offset: 0x14 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       QSPI_IDR;           /**< Offset: 0x18 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       QSPI_IMR;           /**< Offset: 0x1C (R/   32) Interrupt Mask Register */
  __IO  uint32_t                       QSPI_SCR;           /**< Offset: 0x20 (R/W  32) Serial Clock Register */
  __IO  uint32_t                       QSPI_SR;            /**< Offset: 0x24 (R/W  32) Status Register */
  __I   uint8_t                        Reserved1[0x08];
  __IO  uint32_t                       QSPI_IAR;           /**< Offset: 0x30 (R/W  32) Instruction Address Register */
  __IO  uint32_t                       QSPI_WICR;          /**< Offset: 0x34 (R/W  32) Write Instruction Code Register */
  __IO  uint32_t                       QSPI_IFR;           /**< Offset: 0x38 (R/W  32) Instruction Frame Register */
  __IO  uint32_t                       QSPI_RICR;          /**< Offset: 0x3C (R/W  32) Read Instruction Code Register */
  __IO  uint32_t                       QSPI_SMR;           /**< Offset: 0x40 (R/W  32) Scrambling Mode Register */
  __O   uint32_t                       QSPI_SKR;           /**< Offset: 0x44 ( /W  32) Scrambling Key Register */
  __I   uint8_t                        Reserved2[0x0C];
  __IO  uint32_t                       QSPI_WRACNT;        /**< Offset: 0x54 (R/W  32) Write Access Counter Register */
  __I   uint8_t                        Reserved3[0x0C];
  __IO  uint32_t                       QSPI_TOUT;          /**< Offset: 0x64 (R/W  32) Timeout Register */
  __I   uint8_t                        Reserved4[0x7C];
  __IO  uint32_t                       QSPI_WPMR;          /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       QSPI_WPSR;          /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
  __I   uint8_t                        Reserved5[0x14];
  __IO  uint32_t                       QSPI_RPR;           /**< Offset: 0x100 (R/W  32) Receive Pointer Register */
  __IO  uint32_t                       QSPI_RCR;           /**< Offset: 0x104 (R/W  32) Receive Counter Register */
  __IO  uint32_t                       QSPI_TPR;           /**< Offset: 0x108 (R/W  32) Transmit Pointer Register */
  __IO  uint32_t                       QSPI_TCR;           /**< Offset: 0x10C (R/W  32) Transmit Counter Register */
  __IO  uint32_t                       QSPI_RNPR;          /**< Offset: 0x110 (R/W  32) Receive Next Pointer Register */
  __IO  uint32_t                       QSPI_RNCR;          /**< Offset: 0x114 (R/W  32) Receive Next Counter Register */
  __IO  uint32_t                       QSPI_TNPR;          /**< Offset: 0x118 (R/W  32) Transmit Next Pointer Register */
  __IO  uint32_t                       QSPI_TNCR;          /**< Offset: 0x11C (R/W  32) Transmit Next Counter Register */
  __O   uint32_t                       QSPI_PTCR;          /**< Offset: 0x120 ( /W  32) Transfer Control Register */
  __I   uint32_t                       QSPI_PTSR;          /**< Offset: 0x124 (R/   32) Transfer Status Register */
  __IO  uint32_t                       QSPI_PWPMR;         /**< Offset: 0x128 (R/W  32) Write Protection Mode Register */
} qspi_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CXMTSH_QSPI_COMPONENT_H_ */
