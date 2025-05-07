/*
 * Component description for PDC
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
#ifndef _PIC32CXMTSH_PDC_COMPONENT_H_
#define _PIC32CXMTSH_PDC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PDC                                          */
/* ************************************************************************** */

/* -------- PDC_PERIPH_RPR : (PDC Offset: 0x00) (R/W 32) Receive Pointer Register -------- */
#define PDC_PERIPH_RPR_RXPTR_Pos              _UINT32_(0)                                          /* (PDC_PERIPH_RPR) Receive Pointer Register Position */
#define PDC_PERIPH_RPR_RXPTR_Msk              (_UINT32_(0xFFFFFFFF) << PDC_PERIPH_RPR_RXPTR_Pos)   /* (PDC_PERIPH_RPR) Receive Pointer Register Mask */
#define PDC_PERIPH_RPR_RXPTR(value)           (PDC_PERIPH_RPR_RXPTR_Msk & (_UINT32_(value) << PDC_PERIPH_RPR_RXPTR_Pos)) /* Assigment of value for RXPTR in the PDC_PERIPH_RPR register */
#define PDC_PERIPH_RPR_Msk                    _UINT32_(0xFFFFFFFF)                                 /* (PDC_PERIPH_RPR) Register Mask  */


/* -------- PDC_PERIPH_RCR : (PDC Offset: 0x04) (R/W 32) Receive Counter Register -------- */
#define PDC_PERIPH_RCR_RXCTR_Pos              _UINT32_(0)                                          /* (PDC_PERIPH_RCR) Receive Counter Register Position */
#define PDC_PERIPH_RCR_RXCTR_Msk              (_UINT32_(0xFFFF) << PDC_PERIPH_RCR_RXCTR_Pos)       /* (PDC_PERIPH_RCR) Receive Counter Register Mask */
#define PDC_PERIPH_RCR_RXCTR(value)           (PDC_PERIPH_RCR_RXCTR_Msk & (_UINT32_(value) << PDC_PERIPH_RCR_RXCTR_Pos)) /* Assigment of value for RXCTR in the PDC_PERIPH_RCR register */
#define PDC_PERIPH_RCR_Msk                    _UINT32_(0x0000FFFF)                                 /* (PDC_PERIPH_RCR) Register Mask  */


/* -------- PDC_PERIPH_TPR : (PDC Offset: 0x08) (R/W 32) Transmit Pointer Register -------- */
#define PDC_PERIPH_TPR_TXPTR_Pos              _UINT32_(0)                                          /* (PDC_PERIPH_TPR) Transmit Counter Register Position */
#define PDC_PERIPH_TPR_TXPTR_Msk              (_UINT32_(0xFFFFFFFF) << PDC_PERIPH_TPR_TXPTR_Pos)   /* (PDC_PERIPH_TPR) Transmit Counter Register Mask */
#define PDC_PERIPH_TPR_TXPTR(value)           (PDC_PERIPH_TPR_TXPTR_Msk & (_UINT32_(value) << PDC_PERIPH_TPR_TXPTR_Pos)) /* Assigment of value for TXPTR in the PDC_PERIPH_TPR register */
#define PDC_PERIPH_TPR_Msk                    _UINT32_(0xFFFFFFFF)                                 /* (PDC_PERIPH_TPR) Register Mask  */


/* -------- PDC_PERIPH_TCR : (PDC Offset: 0x0C) (R/W 32) Transmit Counter Register -------- */
#define PDC_PERIPH_TCR_TXCTR_Pos              _UINT32_(0)                                          /* (PDC_PERIPH_TCR) Transmit Counter Register Position */
#define PDC_PERIPH_TCR_TXCTR_Msk              (_UINT32_(0xFFFF) << PDC_PERIPH_TCR_TXCTR_Pos)       /* (PDC_PERIPH_TCR) Transmit Counter Register Mask */
#define PDC_PERIPH_TCR_TXCTR(value)           (PDC_PERIPH_TCR_TXCTR_Msk & (_UINT32_(value) << PDC_PERIPH_TCR_TXCTR_Pos)) /* Assigment of value for TXCTR in the PDC_PERIPH_TCR register */
#define PDC_PERIPH_TCR_Msk                    _UINT32_(0x0000FFFF)                                 /* (PDC_PERIPH_TCR) Register Mask  */


/* -------- PDC_PERIPH_RNPR : (PDC Offset: 0x10) (R/W 32) Receive Next Pointer Register -------- */
#define PDC_PERIPH_RNPR_RXNPTR_Pos            _UINT32_(0)                                          /* (PDC_PERIPH_RNPR) Receive Next Pointer Position */
#define PDC_PERIPH_RNPR_RXNPTR_Msk            (_UINT32_(0xFFFFFFFF) << PDC_PERIPH_RNPR_RXNPTR_Pos) /* (PDC_PERIPH_RNPR) Receive Next Pointer Mask */
#define PDC_PERIPH_RNPR_RXNPTR(value)         (PDC_PERIPH_RNPR_RXNPTR_Msk & (_UINT32_(value) << PDC_PERIPH_RNPR_RXNPTR_Pos)) /* Assigment of value for RXNPTR in the PDC_PERIPH_RNPR register */
#define PDC_PERIPH_RNPR_Msk                   _UINT32_(0xFFFFFFFF)                                 /* (PDC_PERIPH_RNPR) Register Mask  */


/* -------- PDC_PERIPH_RNCR : (PDC Offset: 0x14) (R/W 32) Receive Next Counter Register -------- */
#define PDC_PERIPH_RNCR_RXNCTR_Pos            _UINT32_(0)                                          /* (PDC_PERIPH_RNCR) Receive Next Counter Position */
#define PDC_PERIPH_RNCR_RXNCTR_Msk            (_UINT32_(0xFFFF) << PDC_PERIPH_RNCR_RXNCTR_Pos)     /* (PDC_PERIPH_RNCR) Receive Next Counter Mask */
#define PDC_PERIPH_RNCR_RXNCTR(value)         (PDC_PERIPH_RNCR_RXNCTR_Msk & (_UINT32_(value) << PDC_PERIPH_RNCR_RXNCTR_Pos)) /* Assigment of value for RXNCTR in the PDC_PERIPH_RNCR register */
#define PDC_PERIPH_RNCR_Msk                   _UINT32_(0x0000FFFF)                                 /* (PDC_PERIPH_RNCR) Register Mask  */


/* -------- PDC_PERIPH_TNPR : (PDC Offset: 0x18) (R/W 32) Transmit Next Pointer Register -------- */
#define PDC_PERIPH_TNPR_TXNPTR_Pos            _UINT32_(0)                                          /* (PDC_PERIPH_TNPR) Transmit Next Pointer Position */
#define PDC_PERIPH_TNPR_TXNPTR_Msk            (_UINT32_(0xFFFFFFFF) << PDC_PERIPH_TNPR_TXNPTR_Pos) /* (PDC_PERIPH_TNPR) Transmit Next Pointer Mask */
#define PDC_PERIPH_TNPR_TXNPTR(value)         (PDC_PERIPH_TNPR_TXNPTR_Msk & (_UINT32_(value) << PDC_PERIPH_TNPR_TXNPTR_Pos)) /* Assigment of value for TXNPTR in the PDC_PERIPH_TNPR register */
#define PDC_PERIPH_TNPR_Msk                   _UINT32_(0xFFFFFFFF)                                 /* (PDC_PERIPH_TNPR) Register Mask  */


/* -------- PDC_PERIPH_TNCR : (PDC Offset: 0x1C) (R/W 32) Transmit Next Counter Register -------- */
#define PDC_PERIPH_TNCR_TXNCTR_Pos            _UINT32_(0)                                          /* (PDC_PERIPH_TNCR) Transmit Counter Next Position */
#define PDC_PERIPH_TNCR_TXNCTR_Msk            (_UINT32_(0xFFFF) << PDC_PERIPH_TNCR_TXNCTR_Pos)     /* (PDC_PERIPH_TNCR) Transmit Counter Next Mask */
#define PDC_PERIPH_TNCR_TXNCTR(value)         (PDC_PERIPH_TNCR_TXNCTR_Msk & (_UINT32_(value) << PDC_PERIPH_TNCR_TXNCTR_Pos)) /* Assigment of value for TXNCTR in the PDC_PERIPH_TNCR register */
#define PDC_PERIPH_TNCR_Msk                   _UINT32_(0x0000FFFF)                                 /* (PDC_PERIPH_TNCR) Register Mask  */


/* -------- PDC_PERIPH_PTCR : (PDC Offset: 0x20) ( /W 32) Transfer Control Register -------- */
#define PDC_PERIPH_PTCR_RXTEN_Pos             _UINT32_(0)                                          /* (PDC_PERIPH_PTCR) Receiver Transfer Enable Position */
#define PDC_PERIPH_PTCR_RXTEN_Msk             (_UINT32_(0x1) << PDC_PERIPH_PTCR_RXTEN_Pos)         /* (PDC_PERIPH_PTCR) Receiver Transfer Enable Mask */
#define PDC_PERIPH_PTCR_RXTEN(value)          (PDC_PERIPH_PTCR_RXTEN_Msk & (_UINT32_(value) << PDC_PERIPH_PTCR_RXTEN_Pos)) /* Assigment of value for RXTEN in the PDC_PERIPH_PTCR register */
#define PDC_PERIPH_PTCR_RXTDIS_Pos            _UINT32_(1)                                          /* (PDC_PERIPH_PTCR) Receiver Transfer Disable Position */
#define PDC_PERIPH_PTCR_RXTDIS_Msk            (_UINT32_(0x1) << PDC_PERIPH_PTCR_RXTDIS_Pos)        /* (PDC_PERIPH_PTCR) Receiver Transfer Disable Mask */
#define PDC_PERIPH_PTCR_RXTDIS(value)         (PDC_PERIPH_PTCR_RXTDIS_Msk & (_UINT32_(value) << PDC_PERIPH_PTCR_RXTDIS_Pos)) /* Assigment of value for RXTDIS in the PDC_PERIPH_PTCR register */
#define PDC_PERIPH_PTCR_TXTEN_Pos             _UINT32_(8)                                          /* (PDC_PERIPH_PTCR) Transmitter Transfer Enable Position */
#define PDC_PERIPH_PTCR_TXTEN_Msk             (_UINT32_(0x1) << PDC_PERIPH_PTCR_TXTEN_Pos)         /* (PDC_PERIPH_PTCR) Transmitter Transfer Enable Mask */
#define PDC_PERIPH_PTCR_TXTEN(value)          (PDC_PERIPH_PTCR_TXTEN_Msk & (_UINT32_(value) << PDC_PERIPH_PTCR_TXTEN_Pos)) /* Assigment of value for TXTEN in the PDC_PERIPH_PTCR register */
#define PDC_PERIPH_PTCR_TXTDIS_Pos            _UINT32_(9)                                          /* (PDC_PERIPH_PTCR) Transmitter Transfer Disable Position */
#define PDC_PERIPH_PTCR_TXTDIS_Msk            (_UINT32_(0x1) << PDC_PERIPH_PTCR_TXTDIS_Pos)        /* (PDC_PERIPH_PTCR) Transmitter Transfer Disable Mask */
#define PDC_PERIPH_PTCR_TXTDIS(value)         (PDC_PERIPH_PTCR_TXTDIS_Msk & (_UINT32_(value) << PDC_PERIPH_PTCR_TXTDIS_Pos)) /* Assigment of value for TXTDIS in the PDC_PERIPH_PTCR register */
#define PDC_PERIPH_PTCR_RXCBEN_Pos            _UINT32_(16)                                         /* (PDC_PERIPH_PTCR) Receiver Circular Buffer Enable Position */
#define PDC_PERIPH_PTCR_RXCBEN_Msk            (_UINT32_(0x1) << PDC_PERIPH_PTCR_RXCBEN_Pos)        /* (PDC_PERIPH_PTCR) Receiver Circular Buffer Enable Mask */
#define PDC_PERIPH_PTCR_RXCBEN(value)         (PDC_PERIPH_PTCR_RXCBEN_Msk & (_UINT32_(value) << PDC_PERIPH_PTCR_RXCBEN_Pos)) /* Assigment of value for RXCBEN in the PDC_PERIPH_PTCR register */
#define PDC_PERIPH_PTCR_RXCBDIS_Pos           _UINT32_(17)                                         /* (PDC_PERIPH_PTCR) Receiver Circular Buffer Disable Position */
#define PDC_PERIPH_PTCR_RXCBDIS_Msk           (_UINT32_(0x1) << PDC_PERIPH_PTCR_RXCBDIS_Pos)       /* (PDC_PERIPH_PTCR) Receiver Circular Buffer Disable Mask */
#define PDC_PERIPH_PTCR_RXCBDIS(value)        (PDC_PERIPH_PTCR_RXCBDIS_Msk & (_UINT32_(value) << PDC_PERIPH_PTCR_RXCBDIS_Pos)) /* Assigment of value for RXCBDIS in the PDC_PERIPH_PTCR register */
#define PDC_PERIPH_PTCR_TXCBEN_Pos            _UINT32_(18)                                         /* (PDC_PERIPH_PTCR) Transmitter Circular Buffer Enable Position */
#define PDC_PERIPH_PTCR_TXCBEN_Msk            (_UINT32_(0x1) << PDC_PERIPH_PTCR_TXCBEN_Pos)        /* (PDC_PERIPH_PTCR) Transmitter Circular Buffer Enable Mask */
#define PDC_PERIPH_PTCR_TXCBEN(value)         (PDC_PERIPH_PTCR_TXCBEN_Msk & (_UINT32_(value) << PDC_PERIPH_PTCR_TXCBEN_Pos)) /* Assigment of value for TXCBEN in the PDC_PERIPH_PTCR register */
#define PDC_PERIPH_PTCR_TXCBDIS_Pos           _UINT32_(19)                                         /* (PDC_PERIPH_PTCR) Transmitter Circular Buffer Disable Position */
#define PDC_PERIPH_PTCR_TXCBDIS_Msk           (_UINT32_(0x1) << PDC_PERIPH_PTCR_TXCBDIS_Pos)       /* (PDC_PERIPH_PTCR) Transmitter Circular Buffer Disable Mask */
#define PDC_PERIPH_PTCR_TXCBDIS(value)        (PDC_PERIPH_PTCR_TXCBDIS_Msk & (_UINT32_(value) << PDC_PERIPH_PTCR_TXCBDIS_Pos)) /* Assigment of value for TXCBDIS in the PDC_PERIPH_PTCR register */
#define PDC_PERIPH_PTCR_ERRCLR_Pos            _UINT32_(24)                                         /* (PDC_PERIPH_PTCR) Transfer Bus Error Clear Position */
#define PDC_PERIPH_PTCR_ERRCLR_Msk            (_UINT32_(0x1) << PDC_PERIPH_PTCR_ERRCLR_Pos)        /* (PDC_PERIPH_PTCR) Transfer Bus Error Clear Mask */
#define PDC_PERIPH_PTCR_ERRCLR(value)         (PDC_PERIPH_PTCR_ERRCLR_Msk & (_UINT32_(value) << PDC_PERIPH_PTCR_ERRCLR_Pos)) /* Assigment of value for ERRCLR in the PDC_PERIPH_PTCR register */
#define PDC_PERIPH_PTCR_Msk                   _UINT32_(0x010F0303)                                 /* (PDC_PERIPH_PTCR) Register Mask  */


/* -------- PDC_PERIPH_PTSR : (PDC Offset: 0x24) ( R/ 32) Transfer Status Register -------- */
#define PDC_PERIPH_PTSR_RXTEN_Pos             _UINT32_(0)                                          /* (PDC_PERIPH_PTSR) Receiver Transfer Enable Position */
#define PDC_PERIPH_PTSR_RXTEN_Msk             (_UINT32_(0x1) << PDC_PERIPH_PTSR_RXTEN_Pos)         /* (PDC_PERIPH_PTSR) Receiver Transfer Enable Mask */
#define PDC_PERIPH_PTSR_RXTEN(value)          (PDC_PERIPH_PTSR_RXTEN_Msk & (_UINT32_(value) << PDC_PERIPH_PTSR_RXTEN_Pos)) /* Assigment of value for RXTEN in the PDC_PERIPH_PTSR register */
#define PDC_PERIPH_PTSR_TXTEN_Pos             _UINT32_(8)                                          /* (PDC_PERIPH_PTSR) Transmitter Transfer Enable Position */
#define PDC_PERIPH_PTSR_TXTEN_Msk             (_UINT32_(0x1) << PDC_PERIPH_PTSR_TXTEN_Pos)         /* (PDC_PERIPH_PTSR) Transmitter Transfer Enable Mask */
#define PDC_PERIPH_PTSR_TXTEN(value)          (PDC_PERIPH_PTSR_TXTEN_Msk & (_UINT32_(value) << PDC_PERIPH_PTSR_TXTEN_Pos)) /* Assigment of value for TXTEN in the PDC_PERIPH_PTSR register */
#define PDC_PERIPH_PTSR_RXCBEN_Pos            _UINT32_(16)                                         /* (PDC_PERIPH_PTSR) Receiver Circular Buffer Enable Position */
#define PDC_PERIPH_PTSR_RXCBEN_Msk            (_UINT32_(0x1) << PDC_PERIPH_PTSR_RXCBEN_Pos)        /* (PDC_PERIPH_PTSR) Receiver Circular Buffer Enable Mask */
#define PDC_PERIPH_PTSR_RXCBEN(value)         (PDC_PERIPH_PTSR_RXCBEN_Msk & (_UINT32_(value) << PDC_PERIPH_PTSR_RXCBEN_Pos)) /* Assigment of value for RXCBEN in the PDC_PERIPH_PTSR register */
#define PDC_PERIPH_PTSR_TXCBEN_Pos            _UINT32_(18)                                         /* (PDC_PERIPH_PTSR) Transmitter Circular Buffer Enable Position */
#define PDC_PERIPH_PTSR_TXCBEN_Msk            (_UINT32_(0x1) << PDC_PERIPH_PTSR_TXCBEN_Pos)        /* (PDC_PERIPH_PTSR) Transmitter Circular Buffer Enable Mask */
#define PDC_PERIPH_PTSR_TXCBEN(value)         (PDC_PERIPH_PTSR_TXCBEN_Msk & (_UINT32_(value) << PDC_PERIPH_PTSR_TXCBEN_Pos)) /* Assigment of value for TXCBEN in the PDC_PERIPH_PTSR register */
#define PDC_PERIPH_PTSR_ERR_Pos               _UINT32_(24)                                         /* (PDC_PERIPH_PTSR) Transfer Bus Error Position */
#define PDC_PERIPH_PTSR_ERR_Msk               (_UINT32_(0x1) << PDC_PERIPH_PTSR_ERR_Pos)           /* (PDC_PERIPH_PTSR) Transfer Bus Error Mask */
#define PDC_PERIPH_PTSR_ERR(value)            (PDC_PERIPH_PTSR_ERR_Msk & (_UINT32_(value) << PDC_PERIPH_PTSR_ERR_Pos)) /* Assigment of value for ERR in the PDC_PERIPH_PTSR register */
#define PDC_PERIPH_PTSR_Msk                   _UINT32_(0x01050101)                                 /* (PDC_PERIPH_PTSR) Register Mask  */


/* -------- PDC_PERIPH_PWPMR : (PDC Offset: 0x28) (R/W 32) Write Protection Mode Register -------- */
#define PDC_PERIPH_PWPMR_WPPTREN_Pos          _UINT32_(0)                                          /* (PDC_PERIPH_PWPMR) Write Protection Pointer Registers Enable Position */
#define PDC_PERIPH_PWPMR_WPPTREN_Msk          (_UINT32_(0x1) << PDC_PERIPH_PWPMR_WPPTREN_Pos)      /* (PDC_PERIPH_PWPMR) Write Protection Pointer Registers Enable Mask */
#define PDC_PERIPH_PWPMR_WPPTREN(value)       (PDC_PERIPH_PWPMR_WPPTREN_Msk & (_UINT32_(value) << PDC_PERIPH_PWPMR_WPPTREN_Pos)) /* Assigment of value for WPPTREN in the PDC_PERIPH_PWPMR register */
#define PDC_PERIPH_PWPMR_WPCTREN_Pos          _UINT32_(1)                                          /* (PDC_PERIPH_PWPMR) Write Protection Counter Registers Enable Position */
#define PDC_PERIPH_PWPMR_WPCTREN_Msk          (_UINT32_(0x1) << PDC_PERIPH_PWPMR_WPCTREN_Pos)      /* (PDC_PERIPH_PWPMR) Write Protection Counter Registers Enable Mask */
#define PDC_PERIPH_PWPMR_WPCTREN(value)       (PDC_PERIPH_PWPMR_WPCTREN_Msk & (_UINT32_(value) << PDC_PERIPH_PWPMR_WPCTREN_Pos)) /* Assigment of value for WPCTREN in the PDC_PERIPH_PWPMR register */
#define PDC_PERIPH_PWPMR_WPCREN_Pos           _UINT32_(2)                                          /* (PDC_PERIPH_PWPMR) Write Protection Control Register Enable Position */
#define PDC_PERIPH_PWPMR_WPCREN_Msk           (_UINT32_(0x1) << PDC_PERIPH_PWPMR_WPCREN_Pos)       /* (PDC_PERIPH_PWPMR) Write Protection Control Register Enable Mask */
#define PDC_PERIPH_PWPMR_WPCREN(value)        (PDC_PERIPH_PWPMR_WPCREN_Msk & (_UINT32_(value) << PDC_PERIPH_PWPMR_WPCREN_Pos)) /* Assigment of value for WPCREN in the PDC_PERIPH_PWPMR register */
#define PDC_PERIPH_PWPMR_WPKEY_Pos            _UINT32_(8)                                          /* (PDC_PERIPH_PWPMR) Write Protection Key Position */
#define PDC_PERIPH_PWPMR_WPKEY_Msk            (_UINT32_(0xFFFFFF) << PDC_PERIPH_PWPMR_WPKEY_Pos)   /* (PDC_PERIPH_PWPMR) Write Protection Key Mask */
#define PDC_PERIPH_PWPMR_WPKEY(value)         (PDC_PERIPH_PWPMR_WPKEY_Msk & (_UINT32_(value) << PDC_PERIPH_PWPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the PDC_PERIPH_PWPMR register */
#define   PDC_PERIPH_PWPMR_WPKEY_PASSWD_Val   _UINT32_(0x504443)                                   /* (PDC_PERIPH_PWPMR) Writing any other value in this field aborts the write operation. Always reads as 0.  */
#define PDC_PERIPH_PWPMR_WPKEY_PASSWD         (PDC_PERIPH_PWPMR_WPKEY_PASSWD_Val << PDC_PERIPH_PWPMR_WPKEY_Pos) /* (PDC_PERIPH_PWPMR) Writing any other value in this field aborts the write operation. Always reads as 0. Position  */
#define PDC_PERIPH_PWPMR_Msk                  _UINT32_(0xFFFFFF07)                                 /* (PDC_PERIPH_PWPMR) Register Mask  */


/** \brief PDC register offsets definitions */
#define PDC_PERIPH_RPR_REG_OFST        _UINT32_(0x00)      /* (PDC_PERIPH_RPR) Receive Pointer Register Offset */
#define PDC_PERIPH_RCR_REG_OFST        _UINT32_(0x04)      /* (PDC_PERIPH_RCR) Receive Counter Register Offset */
#define PDC_PERIPH_TPR_REG_OFST        _UINT32_(0x08)      /* (PDC_PERIPH_TPR) Transmit Pointer Register Offset */
#define PDC_PERIPH_TCR_REG_OFST        _UINT32_(0x0C)      /* (PDC_PERIPH_TCR) Transmit Counter Register Offset */
#define PDC_PERIPH_RNPR_REG_OFST       _UINT32_(0x10)      /* (PDC_PERIPH_RNPR) Receive Next Pointer Register Offset */
#define PDC_PERIPH_RNCR_REG_OFST       _UINT32_(0x14)      /* (PDC_PERIPH_RNCR) Receive Next Counter Register Offset */
#define PDC_PERIPH_TNPR_REG_OFST       _UINT32_(0x18)      /* (PDC_PERIPH_TNPR) Transmit Next Pointer Register Offset */
#define PDC_PERIPH_TNCR_REG_OFST       _UINT32_(0x1C)      /* (PDC_PERIPH_TNCR) Transmit Next Counter Register Offset */
#define PDC_PERIPH_PTCR_REG_OFST       _UINT32_(0x20)      /* (PDC_PERIPH_PTCR) Transfer Control Register Offset */
#define PDC_PERIPH_PTSR_REG_OFST       _UINT32_(0x24)      /* (PDC_PERIPH_PTSR) Transfer Status Register Offset */
#define PDC_PERIPH_PWPMR_REG_OFST      _UINT32_(0x28)      /* (PDC_PERIPH_PWPMR) Write Protection Mode Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PDC register API structure */
typedef struct
{
  __IO  uint32_t                       PDC_PERIPH_RPR;     /**< Offset: 0x00 (R/W  32) Receive Pointer Register */
  __IO  uint32_t                       PDC_PERIPH_RCR;     /**< Offset: 0x04 (R/W  32) Receive Counter Register */
  __IO  uint32_t                       PDC_PERIPH_TPR;     /**< Offset: 0x08 (R/W  32) Transmit Pointer Register */
  __IO  uint32_t                       PDC_PERIPH_TCR;     /**< Offset: 0x0C (R/W  32) Transmit Counter Register */
  __IO  uint32_t                       PDC_PERIPH_RNPR;    /**< Offset: 0x10 (R/W  32) Receive Next Pointer Register */
  __IO  uint32_t                       PDC_PERIPH_RNCR;    /**< Offset: 0x14 (R/W  32) Receive Next Counter Register */
  __IO  uint32_t                       PDC_PERIPH_TNPR;    /**< Offset: 0x18 (R/W  32) Transmit Next Pointer Register */
  __IO  uint32_t                       PDC_PERIPH_TNCR;    /**< Offset: 0x1C (R/W  32) Transmit Next Counter Register */
  __O   uint32_t                       PDC_PERIPH_PTCR;    /**< Offset: 0x20 ( /W  32) Transfer Control Register */
  __I   uint32_t                       PDC_PERIPH_PTSR;    /**< Offset: 0x24 (R/   32) Transfer Status Register */
  __IO  uint32_t                       PDC_PERIPH_PWPMR;   /**< Offset: 0x28 (R/W  32) Write Protection Mode Register */
} pdc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CXMTSH_PDC_COMPONENT_H_ */
