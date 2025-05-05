/*
 * Component description for MEM2MEM
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
#ifndef _PIC32CXMTSH_MEM2MEM_COMPONENT_H_
#define _PIC32CXMTSH_MEM2MEM_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR MEM2MEM                                      */
/* ************************************************************************** */

/* -------- MEM2MEM_THR : (MEM2MEM Offset: 0x00) (R/W 32) Transfer Holding Register -------- */
#define MEM2MEM_THR_THDATA_Pos                _UINT32_(0)                                          /* (MEM2MEM_THR) Transfer Holding Data Position */
#define MEM2MEM_THR_THDATA_Msk                (_UINT32_(0xFFFFFFFF) << MEM2MEM_THR_THDATA_Pos)     /* (MEM2MEM_THR) Transfer Holding Data Mask */
#define MEM2MEM_THR_THDATA(value)             (MEM2MEM_THR_THDATA_Msk & (_UINT32_(value) << MEM2MEM_THR_THDATA_Pos)) /* Assigment of value for THDATA in the MEM2MEM_THR register */
#define MEM2MEM_THR_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (MEM2MEM_THR) Register Mask  */


/* -------- MEM2MEM_MR : (MEM2MEM Offset: 0x04) (R/W 32) Mode Register -------- */
#define MEM2MEM_MR_TSIZE_Pos                  _UINT32_(0)                                          /* (MEM2MEM_MR) Transfer Size Position */
#define MEM2MEM_MR_TSIZE_Msk                  (_UINT32_(0x3) << MEM2MEM_MR_TSIZE_Pos)              /* (MEM2MEM_MR) Transfer Size Mask */
#define MEM2MEM_MR_TSIZE(value)               (MEM2MEM_MR_TSIZE_Msk & (_UINT32_(value) << MEM2MEM_MR_TSIZE_Pos)) /* Assigment of value for TSIZE in the MEM2MEM_MR register */
#define   MEM2MEM_MR_TSIZE_T_8BIT_Val         _UINT32_(0x0)                                        /* (MEM2MEM_MR) The buffer size is defined in bytes.  */
#define   MEM2MEM_MR_TSIZE_T_16BIT_Val        _UINT32_(0x1)                                        /* (MEM2MEM_MR) The buffer size is defined in half-words (16-bit).  */
#define   MEM2MEM_MR_TSIZE_T_32BIT_Val        _UINT32_(0x2)                                        /* (MEM2MEM_MR) The buffer size is defined in words (32-bit). Default value.  */
#define MEM2MEM_MR_TSIZE_T_8BIT               (MEM2MEM_MR_TSIZE_T_8BIT_Val << MEM2MEM_MR_TSIZE_Pos) /* (MEM2MEM_MR) The buffer size is defined in bytes. Position  */
#define MEM2MEM_MR_TSIZE_T_16BIT              (MEM2MEM_MR_TSIZE_T_16BIT_Val << MEM2MEM_MR_TSIZE_Pos) /* (MEM2MEM_MR) The buffer size is defined in half-words (16-bit). Position  */
#define MEM2MEM_MR_TSIZE_T_32BIT              (MEM2MEM_MR_TSIZE_T_32BIT_Val << MEM2MEM_MR_TSIZE_Pos) /* (MEM2MEM_MR) The buffer size is defined in words (32-bit). Default value. Position  */
#define MEM2MEM_MR_Msk                        _UINT32_(0x00000003)                                 /* (MEM2MEM_MR) Register Mask  */


/* -------- MEM2MEM_IER : (MEM2MEM Offset: 0x08) ( /W 32) Interrupt Enable Register -------- */
#define MEM2MEM_IER_RXEND_Pos                 _UINT32_(0)                                          /* (MEM2MEM_IER) End of Transfer Interrupt Enable Position */
#define MEM2MEM_IER_RXEND_Msk                 (_UINT32_(0x1) << MEM2MEM_IER_RXEND_Pos)             /* (MEM2MEM_IER) End of Transfer Interrupt Enable Mask */
#define MEM2MEM_IER_RXEND(value)              (MEM2MEM_IER_RXEND_Msk & (_UINT32_(value) << MEM2MEM_IER_RXEND_Pos)) /* Assigment of value for RXEND in the MEM2MEM_IER register */
#define MEM2MEM_IER_RXBUFF_Pos                _UINT32_(1)                                          /* (MEM2MEM_IER) Buffer Full Interrupt Enable Position */
#define MEM2MEM_IER_RXBUFF_Msk                (_UINT32_(0x1) << MEM2MEM_IER_RXBUFF_Pos)            /* (MEM2MEM_IER) Buffer Full Interrupt Enable Mask */
#define MEM2MEM_IER_RXBUFF(value)             (MEM2MEM_IER_RXBUFF_Msk & (_UINT32_(value) << MEM2MEM_IER_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the MEM2MEM_IER register */
#define MEM2MEM_IER_Msk                       _UINT32_(0x00000003)                                 /* (MEM2MEM_IER) Register Mask  */


/* -------- MEM2MEM_IDR : (MEM2MEM Offset: 0x0C) ( /W 32) Interrupt Disable Register -------- */
#define MEM2MEM_IDR_RXEND_Pos                 _UINT32_(0)                                          /* (MEM2MEM_IDR) End of Transfer Interrupt Disable Position */
#define MEM2MEM_IDR_RXEND_Msk                 (_UINT32_(0x1) << MEM2MEM_IDR_RXEND_Pos)             /* (MEM2MEM_IDR) End of Transfer Interrupt Disable Mask */
#define MEM2MEM_IDR_RXEND(value)              (MEM2MEM_IDR_RXEND_Msk & (_UINT32_(value) << MEM2MEM_IDR_RXEND_Pos)) /* Assigment of value for RXEND in the MEM2MEM_IDR register */
#define MEM2MEM_IDR_RXBUFF_Pos                _UINT32_(1)                                          /* (MEM2MEM_IDR) Buffer Full Interrupt Disable Position */
#define MEM2MEM_IDR_RXBUFF_Msk                (_UINT32_(0x1) << MEM2MEM_IDR_RXBUFF_Pos)            /* (MEM2MEM_IDR) Buffer Full Interrupt Disable Mask */
#define MEM2MEM_IDR_RXBUFF(value)             (MEM2MEM_IDR_RXBUFF_Msk & (_UINT32_(value) << MEM2MEM_IDR_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the MEM2MEM_IDR register */
#define MEM2MEM_IDR_Msk                       _UINT32_(0x00000003)                                 /* (MEM2MEM_IDR) Register Mask  */


/* -------- MEM2MEM_IMR : (MEM2MEM Offset: 0x10) ( R/ 32) Interrupt Mask Register -------- */
#define MEM2MEM_IMR_RXEND_Pos                 _UINT32_(0)                                          /* (MEM2MEM_IMR) End of Transfer Interrupt Mask Position */
#define MEM2MEM_IMR_RXEND_Msk                 (_UINT32_(0x1) << MEM2MEM_IMR_RXEND_Pos)             /* (MEM2MEM_IMR) End of Transfer Interrupt Mask Mask */
#define MEM2MEM_IMR_RXEND(value)              (MEM2MEM_IMR_RXEND_Msk & (_UINT32_(value) << MEM2MEM_IMR_RXEND_Pos)) /* Assigment of value for RXEND in the MEM2MEM_IMR register */
#define MEM2MEM_IMR_RXBUFF_Pos                _UINT32_(1)                                          /* (MEM2MEM_IMR) Buffer Full Interrupt Mask Position */
#define MEM2MEM_IMR_RXBUFF_Msk                (_UINT32_(0x1) << MEM2MEM_IMR_RXBUFF_Pos)            /* (MEM2MEM_IMR) Buffer Full Interrupt Mask Mask */
#define MEM2MEM_IMR_RXBUFF(value)             (MEM2MEM_IMR_RXBUFF_Msk & (_UINT32_(value) << MEM2MEM_IMR_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the MEM2MEM_IMR register */
#define MEM2MEM_IMR_Msk                       _UINT32_(0x00000003)                                 /* (MEM2MEM_IMR) Register Mask  */


/* -------- MEM2MEM_ISR : (MEM2MEM Offset: 0x14) ( R/ 32) Interrupt Status Register -------- */
#define MEM2MEM_ISR_RXEND_Pos                 _UINT32_(0)                                          /* (MEM2MEM_ISR) End of Transfer Position */
#define MEM2MEM_ISR_RXEND_Msk                 (_UINT32_(0x1) << MEM2MEM_ISR_RXEND_Pos)             /* (MEM2MEM_ISR) End of Transfer Mask */
#define MEM2MEM_ISR_RXEND(value)              (MEM2MEM_ISR_RXEND_Msk & (_UINT32_(value) << MEM2MEM_ISR_RXEND_Pos)) /* Assigment of value for RXEND in the MEM2MEM_ISR register */
#define MEM2MEM_ISR_RXBUFF_Pos                _UINT32_(1)                                          /* (MEM2MEM_ISR) Buffer Full Position */
#define MEM2MEM_ISR_RXBUFF_Msk                (_UINT32_(0x1) << MEM2MEM_ISR_RXBUFF_Pos)            /* (MEM2MEM_ISR) Buffer Full Mask */
#define MEM2MEM_ISR_RXBUFF(value)             (MEM2MEM_ISR_RXBUFF_Msk & (_UINT32_(value) << MEM2MEM_ISR_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the MEM2MEM_ISR register */
#define MEM2MEM_ISR_Msk                       _UINT32_(0x00000003)                                 /* (MEM2MEM_ISR) Register Mask  */


/* -------- MEM2MEM_WPMR : (MEM2MEM Offset: 0x18) (R/W 32) Write Protection Mode Register -------- */
#define MEM2MEM_WPMR_WPEN_Pos                 _UINT32_(0)                                          /* (MEM2MEM_WPMR) Write Protection Configuration Enable Position */
#define MEM2MEM_WPMR_WPEN_Msk                 (_UINT32_(0x1) << MEM2MEM_WPMR_WPEN_Pos)             /* (MEM2MEM_WPMR) Write Protection Configuration Enable Mask */
#define MEM2MEM_WPMR_WPEN(value)              (MEM2MEM_WPMR_WPEN_Msk & (_UINT32_(value) << MEM2MEM_WPMR_WPEN_Pos)) /* Assigment of value for WPEN in the MEM2MEM_WPMR register */
#define MEM2MEM_WPMR_WPITEN_Pos               _UINT32_(1)                                          /* (MEM2MEM_WPMR) Write Protection Interruption Enable Position */
#define MEM2MEM_WPMR_WPITEN_Msk               (_UINT32_(0x1) << MEM2MEM_WPMR_WPITEN_Pos)           /* (MEM2MEM_WPMR) Write Protection Interruption Enable Mask */
#define MEM2MEM_WPMR_WPITEN(value)            (MEM2MEM_WPMR_WPITEN_Msk & (_UINT32_(value) << MEM2MEM_WPMR_WPITEN_Pos)) /* Assigment of value for WPITEN in the MEM2MEM_WPMR register */
#define MEM2MEM_WPMR_WPKEY_Pos                _UINT32_(8)                                          /* (MEM2MEM_WPMR) Write Protection Key Position */
#define MEM2MEM_WPMR_WPKEY_Msk                (_UINT32_(0xFFFFFF) << MEM2MEM_WPMR_WPKEY_Pos)       /* (MEM2MEM_WPMR) Write Protection Key Mask */
#define MEM2MEM_WPMR_WPKEY(value)             (MEM2MEM_WPMR_WPKEY_Msk & (_UINT32_(value) << MEM2MEM_WPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the MEM2MEM_WPMR register */
#define   MEM2MEM_WPMR_WPKEY_PASSWD_Val       _UINT32_(0x4D454D)                                   /* (MEM2MEM_WPMR) Writing any other value in this field aborts the write operation of the WPEN, WPITEN bits. Always reads as 0.  */
#define MEM2MEM_WPMR_WPKEY_PASSWD             (MEM2MEM_WPMR_WPKEY_PASSWD_Val << MEM2MEM_WPMR_WPKEY_Pos) /* (MEM2MEM_WPMR) Writing any other value in this field aborts the write operation of the WPEN, WPITEN bits. Always reads as 0. Position  */
#define MEM2MEM_WPMR_Msk                      _UINT32_(0xFFFFFF03)                                 /* (MEM2MEM_WPMR) Register Mask  */


/* -------- MEM2MEM_RPR : (MEM2MEM Offset: 0x100) (R/W 32) Receive Pointer Register -------- */
#define MEM2MEM_RPR_RXPTR_Pos                 _UINT32_(0)                                          /* (MEM2MEM_RPR) Receive Pointer Register Position */
#define MEM2MEM_RPR_RXPTR_Msk                 (_UINT32_(0xFFFFFFFF) << MEM2MEM_RPR_RXPTR_Pos)      /* (MEM2MEM_RPR) Receive Pointer Register Mask */
#define MEM2MEM_RPR_RXPTR(value)              (MEM2MEM_RPR_RXPTR_Msk & (_UINT32_(value) << MEM2MEM_RPR_RXPTR_Pos)) /* Assigment of value for RXPTR in the MEM2MEM_RPR register */
#define MEM2MEM_RPR_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (MEM2MEM_RPR) Register Mask  */


/* -------- MEM2MEM_RCR : (MEM2MEM Offset: 0x104) (R/W 32) Receive Counter Register -------- */
#define MEM2MEM_RCR_RXCTR_Pos                 _UINT32_(0)                                          /* (MEM2MEM_RCR) Receive Counter Register Position */
#define MEM2MEM_RCR_RXCTR_Msk                 (_UINT32_(0xFFFF) << MEM2MEM_RCR_RXCTR_Pos)          /* (MEM2MEM_RCR) Receive Counter Register Mask */
#define MEM2MEM_RCR_RXCTR(value)              (MEM2MEM_RCR_RXCTR_Msk & (_UINT32_(value) << MEM2MEM_RCR_RXCTR_Pos)) /* Assigment of value for RXCTR in the MEM2MEM_RCR register */
#define MEM2MEM_RCR_Msk                       _UINT32_(0x0000FFFF)                                 /* (MEM2MEM_RCR) Register Mask  */


/* -------- MEM2MEM_TPR : (MEM2MEM Offset: 0x108) (R/W 32) Transmit Pointer Register -------- */
#define MEM2MEM_TPR_TXPTR_Pos                 _UINT32_(0)                                          /* (MEM2MEM_TPR) Transmit Counter Register Position */
#define MEM2MEM_TPR_TXPTR_Msk                 (_UINT32_(0xFFFFFFFF) << MEM2MEM_TPR_TXPTR_Pos)      /* (MEM2MEM_TPR) Transmit Counter Register Mask */
#define MEM2MEM_TPR_TXPTR(value)              (MEM2MEM_TPR_TXPTR_Msk & (_UINT32_(value) << MEM2MEM_TPR_TXPTR_Pos)) /* Assigment of value for TXPTR in the MEM2MEM_TPR register */
#define MEM2MEM_TPR_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (MEM2MEM_TPR) Register Mask  */


/* -------- MEM2MEM_TCR : (MEM2MEM Offset: 0x10C) (R/W 32) Transmit Counter Register -------- */
#define MEM2MEM_TCR_TXCTR_Pos                 _UINT32_(0)                                          /* (MEM2MEM_TCR) Transmit Counter Register Position */
#define MEM2MEM_TCR_TXCTR_Msk                 (_UINT32_(0xFFFF) << MEM2MEM_TCR_TXCTR_Pos)          /* (MEM2MEM_TCR) Transmit Counter Register Mask */
#define MEM2MEM_TCR_TXCTR(value)              (MEM2MEM_TCR_TXCTR_Msk & (_UINT32_(value) << MEM2MEM_TCR_TXCTR_Pos)) /* Assigment of value for TXCTR in the MEM2MEM_TCR register */
#define MEM2MEM_TCR_Msk                       _UINT32_(0x0000FFFF)                                 /* (MEM2MEM_TCR) Register Mask  */


/* -------- MEM2MEM_RNPR : (MEM2MEM Offset: 0x110) (R/W 32) Receive Next Pointer Register -------- */
#define MEM2MEM_RNPR_RXNPTR_Pos               _UINT32_(0)                                          /* (MEM2MEM_RNPR) Receive Next Pointer Position */
#define MEM2MEM_RNPR_RXNPTR_Msk               (_UINT32_(0xFFFFFFFF) << MEM2MEM_RNPR_RXNPTR_Pos)    /* (MEM2MEM_RNPR) Receive Next Pointer Mask */
#define MEM2MEM_RNPR_RXNPTR(value)            (MEM2MEM_RNPR_RXNPTR_Msk & (_UINT32_(value) << MEM2MEM_RNPR_RXNPTR_Pos)) /* Assigment of value for RXNPTR in the MEM2MEM_RNPR register */
#define MEM2MEM_RNPR_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (MEM2MEM_RNPR) Register Mask  */


/* -------- MEM2MEM_RNCR : (MEM2MEM Offset: 0x114) (R/W 32) Receive Next Counter Register -------- */
#define MEM2MEM_RNCR_RXNCTR_Pos               _UINT32_(0)                                          /* (MEM2MEM_RNCR) Receive Next Counter Position */
#define MEM2MEM_RNCR_RXNCTR_Msk               (_UINT32_(0xFFFF) << MEM2MEM_RNCR_RXNCTR_Pos)        /* (MEM2MEM_RNCR) Receive Next Counter Mask */
#define MEM2MEM_RNCR_RXNCTR(value)            (MEM2MEM_RNCR_RXNCTR_Msk & (_UINT32_(value) << MEM2MEM_RNCR_RXNCTR_Pos)) /* Assigment of value for RXNCTR in the MEM2MEM_RNCR register */
#define MEM2MEM_RNCR_Msk                      _UINT32_(0x0000FFFF)                                 /* (MEM2MEM_RNCR) Register Mask  */


/* -------- MEM2MEM_TNPR : (MEM2MEM Offset: 0x118) (R/W 32) Transmit Next Pointer Register -------- */
#define MEM2MEM_TNPR_TXNPTR_Pos               _UINT32_(0)                                          /* (MEM2MEM_TNPR) Transmit Next Pointer Position */
#define MEM2MEM_TNPR_TXNPTR_Msk               (_UINT32_(0xFFFFFFFF) << MEM2MEM_TNPR_TXNPTR_Pos)    /* (MEM2MEM_TNPR) Transmit Next Pointer Mask */
#define MEM2MEM_TNPR_TXNPTR(value)            (MEM2MEM_TNPR_TXNPTR_Msk & (_UINT32_(value) << MEM2MEM_TNPR_TXNPTR_Pos)) /* Assigment of value for TXNPTR in the MEM2MEM_TNPR register */
#define MEM2MEM_TNPR_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (MEM2MEM_TNPR) Register Mask  */


/* -------- MEM2MEM_TNCR : (MEM2MEM Offset: 0x11C) (R/W 32) Transmit Next Counter Register -------- */
#define MEM2MEM_TNCR_TXNCTR_Pos               _UINT32_(0)                                          /* (MEM2MEM_TNCR) Transmit Counter Next Position */
#define MEM2MEM_TNCR_TXNCTR_Msk               (_UINT32_(0xFFFF) << MEM2MEM_TNCR_TXNCTR_Pos)        /* (MEM2MEM_TNCR) Transmit Counter Next Mask */
#define MEM2MEM_TNCR_TXNCTR(value)            (MEM2MEM_TNCR_TXNCTR_Msk & (_UINT32_(value) << MEM2MEM_TNCR_TXNCTR_Pos)) /* Assigment of value for TXNCTR in the MEM2MEM_TNCR register */
#define MEM2MEM_TNCR_Msk                      _UINT32_(0x0000FFFF)                                 /* (MEM2MEM_TNCR) Register Mask  */


/* -------- MEM2MEM_PTCR : (MEM2MEM Offset: 0x120) ( /W 32) Transfer Control Register -------- */
#define MEM2MEM_PTCR_RXTEN_Pos                _UINT32_(0)                                          /* (MEM2MEM_PTCR) Receiver Transfer Enable Position */
#define MEM2MEM_PTCR_RXTEN_Msk                (_UINT32_(0x1) << MEM2MEM_PTCR_RXTEN_Pos)            /* (MEM2MEM_PTCR) Receiver Transfer Enable Mask */
#define MEM2MEM_PTCR_RXTEN(value)             (MEM2MEM_PTCR_RXTEN_Msk & (_UINT32_(value) << MEM2MEM_PTCR_RXTEN_Pos)) /* Assigment of value for RXTEN in the MEM2MEM_PTCR register */
#define MEM2MEM_PTCR_RXTDIS_Pos               _UINT32_(1)                                          /* (MEM2MEM_PTCR) Receiver Transfer Disable Position */
#define MEM2MEM_PTCR_RXTDIS_Msk               (_UINT32_(0x1) << MEM2MEM_PTCR_RXTDIS_Pos)           /* (MEM2MEM_PTCR) Receiver Transfer Disable Mask */
#define MEM2MEM_PTCR_RXTDIS(value)            (MEM2MEM_PTCR_RXTDIS_Msk & (_UINT32_(value) << MEM2MEM_PTCR_RXTDIS_Pos)) /* Assigment of value for RXTDIS in the MEM2MEM_PTCR register */
#define MEM2MEM_PTCR_TXTEN_Pos                _UINT32_(8)                                          /* (MEM2MEM_PTCR) Transmitter Transfer Enable Position */
#define MEM2MEM_PTCR_TXTEN_Msk                (_UINT32_(0x1) << MEM2MEM_PTCR_TXTEN_Pos)            /* (MEM2MEM_PTCR) Transmitter Transfer Enable Mask */
#define MEM2MEM_PTCR_TXTEN(value)             (MEM2MEM_PTCR_TXTEN_Msk & (_UINT32_(value) << MEM2MEM_PTCR_TXTEN_Pos)) /* Assigment of value for TXTEN in the MEM2MEM_PTCR register */
#define MEM2MEM_PTCR_TXTDIS_Pos               _UINT32_(9)                                          /* (MEM2MEM_PTCR) Transmitter Transfer Disable Position */
#define MEM2MEM_PTCR_TXTDIS_Msk               (_UINT32_(0x1) << MEM2MEM_PTCR_TXTDIS_Pos)           /* (MEM2MEM_PTCR) Transmitter Transfer Disable Mask */
#define MEM2MEM_PTCR_TXTDIS(value)            (MEM2MEM_PTCR_TXTDIS_Msk & (_UINT32_(value) << MEM2MEM_PTCR_TXTDIS_Pos)) /* Assigment of value for TXTDIS in the MEM2MEM_PTCR register */
#define MEM2MEM_PTCR_RXCBEN_Pos               _UINT32_(16)                                         /* (MEM2MEM_PTCR) Receiver Circular Buffer Enable Position */
#define MEM2MEM_PTCR_RXCBEN_Msk               (_UINT32_(0x1) << MEM2MEM_PTCR_RXCBEN_Pos)           /* (MEM2MEM_PTCR) Receiver Circular Buffer Enable Mask */
#define MEM2MEM_PTCR_RXCBEN(value)            (MEM2MEM_PTCR_RXCBEN_Msk & (_UINT32_(value) << MEM2MEM_PTCR_RXCBEN_Pos)) /* Assigment of value for RXCBEN in the MEM2MEM_PTCR register */
#define MEM2MEM_PTCR_RXCBDIS_Pos              _UINT32_(17)                                         /* (MEM2MEM_PTCR) Receiver Circular Buffer Disable Position */
#define MEM2MEM_PTCR_RXCBDIS_Msk              (_UINT32_(0x1) << MEM2MEM_PTCR_RXCBDIS_Pos)          /* (MEM2MEM_PTCR) Receiver Circular Buffer Disable Mask */
#define MEM2MEM_PTCR_RXCBDIS(value)           (MEM2MEM_PTCR_RXCBDIS_Msk & (_UINT32_(value) << MEM2MEM_PTCR_RXCBDIS_Pos)) /* Assigment of value for RXCBDIS in the MEM2MEM_PTCR register */
#define MEM2MEM_PTCR_TXCBEN_Pos               _UINT32_(18)                                         /* (MEM2MEM_PTCR) Transmitter Circular Buffer Enable Position */
#define MEM2MEM_PTCR_TXCBEN_Msk               (_UINT32_(0x1) << MEM2MEM_PTCR_TXCBEN_Pos)           /* (MEM2MEM_PTCR) Transmitter Circular Buffer Enable Mask */
#define MEM2MEM_PTCR_TXCBEN(value)            (MEM2MEM_PTCR_TXCBEN_Msk & (_UINT32_(value) << MEM2MEM_PTCR_TXCBEN_Pos)) /* Assigment of value for TXCBEN in the MEM2MEM_PTCR register */
#define MEM2MEM_PTCR_TXCBDIS_Pos              _UINT32_(19)                                         /* (MEM2MEM_PTCR) Transmitter Circular Buffer Disable Position */
#define MEM2MEM_PTCR_TXCBDIS_Msk              (_UINT32_(0x1) << MEM2MEM_PTCR_TXCBDIS_Pos)          /* (MEM2MEM_PTCR) Transmitter Circular Buffer Disable Mask */
#define MEM2MEM_PTCR_TXCBDIS(value)           (MEM2MEM_PTCR_TXCBDIS_Msk & (_UINT32_(value) << MEM2MEM_PTCR_TXCBDIS_Pos)) /* Assigment of value for TXCBDIS in the MEM2MEM_PTCR register */
#define MEM2MEM_PTCR_ERRCLR_Pos               _UINT32_(24)                                         /* (MEM2MEM_PTCR) Transfer Bus Error Clear Position */
#define MEM2MEM_PTCR_ERRCLR_Msk               (_UINT32_(0x1) << MEM2MEM_PTCR_ERRCLR_Pos)           /* (MEM2MEM_PTCR) Transfer Bus Error Clear Mask */
#define MEM2MEM_PTCR_ERRCLR(value)            (MEM2MEM_PTCR_ERRCLR_Msk & (_UINT32_(value) << MEM2MEM_PTCR_ERRCLR_Pos)) /* Assigment of value for ERRCLR in the MEM2MEM_PTCR register */
#define MEM2MEM_PTCR_Msk                      _UINT32_(0x010F0303)                                 /* (MEM2MEM_PTCR) Register Mask  */


/* -------- MEM2MEM_PTSR : (MEM2MEM Offset: 0x124) ( R/ 32) Transfer Status Register -------- */
#define MEM2MEM_PTSR_RXTEN_Pos                _UINT32_(0)                                          /* (MEM2MEM_PTSR) Receiver Transfer Enable Position */
#define MEM2MEM_PTSR_RXTEN_Msk                (_UINT32_(0x1) << MEM2MEM_PTSR_RXTEN_Pos)            /* (MEM2MEM_PTSR) Receiver Transfer Enable Mask */
#define MEM2MEM_PTSR_RXTEN(value)             (MEM2MEM_PTSR_RXTEN_Msk & (_UINT32_(value) << MEM2MEM_PTSR_RXTEN_Pos)) /* Assigment of value for RXTEN in the MEM2MEM_PTSR register */
#define MEM2MEM_PTSR_TXTEN_Pos                _UINT32_(8)                                          /* (MEM2MEM_PTSR) Transmitter Transfer Enable Position */
#define MEM2MEM_PTSR_TXTEN_Msk                (_UINT32_(0x1) << MEM2MEM_PTSR_TXTEN_Pos)            /* (MEM2MEM_PTSR) Transmitter Transfer Enable Mask */
#define MEM2MEM_PTSR_TXTEN(value)             (MEM2MEM_PTSR_TXTEN_Msk & (_UINT32_(value) << MEM2MEM_PTSR_TXTEN_Pos)) /* Assigment of value for TXTEN in the MEM2MEM_PTSR register */
#define MEM2MEM_PTSR_RXCBEN_Pos               _UINT32_(16)                                         /* (MEM2MEM_PTSR) Receiver Circular Buffer Enable Position */
#define MEM2MEM_PTSR_RXCBEN_Msk               (_UINT32_(0x1) << MEM2MEM_PTSR_RXCBEN_Pos)           /* (MEM2MEM_PTSR) Receiver Circular Buffer Enable Mask */
#define MEM2MEM_PTSR_RXCBEN(value)            (MEM2MEM_PTSR_RXCBEN_Msk & (_UINT32_(value) << MEM2MEM_PTSR_RXCBEN_Pos)) /* Assigment of value for RXCBEN in the MEM2MEM_PTSR register */
#define MEM2MEM_PTSR_TXCBEN_Pos               _UINT32_(18)                                         /* (MEM2MEM_PTSR) Transmitter Circular Buffer Enable Position */
#define MEM2MEM_PTSR_TXCBEN_Msk               (_UINT32_(0x1) << MEM2MEM_PTSR_TXCBEN_Pos)           /* (MEM2MEM_PTSR) Transmitter Circular Buffer Enable Mask */
#define MEM2MEM_PTSR_TXCBEN(value)            (MEM2MEM_PTSR_TXCBEN_Msk & (_UINT32_(value) << MEM2MEM_PTSR_TXCBEN_Pos)) /* Assigment of value for TXCBEN in the MEM2MEM_PTSR register */
#define MEM2MEM_PTSR_ERR_Pos                  _UINT32_(24)                                         /* (MEM2MEM_PTSR) Transfer Bus Error Position */
#define MEM2MEM_PTSR_ERR_Msk                  (_UINT32_(0x1) << MEM2MEM_PTSR_ERR_Pos)              /* (MEM2MEM_PTSR) Transfer Bus Error Mask */
#define MEM2MEM_PTSR_ERR(value)               (MEM2MEM_PTSR_ERR_Msk & (_UINT32_(value) << MEM2MEM_PTSR_ERR_Pos)) /* Assigment of value for ERR in the MEM2MEM_PTSR register */
#define MEM2MEM_PTSR_Msk                      _UINT32_(0x01050101)                                 /* (MEM2MEM_PTSR) Register Mask  */


/* -------- MEM2MEM_PWPMR : (MEM2MEM Offset: 0x128) (R/W 32) Write Protection Mode Register -------- */
#define MEM2MEM_PWPMR_WPPTREN_Pos             _UINT32_(0)                                          /* (MEM2MEM_PWPMR) Write Protection Pointer Registers Enable Position */
#define MEM2MEM_PWPMR_WPPTREN_Msk             (_UINT32_(0x1) << MEM2MEM_PWPMR_WPPTREN_Pos)         /* (MEM2MEM_PWPMR) Write Protection Pointer Registers Enable Mask */
#define MEM2MEM_PWPMR_WPPTREN(value)          (MEM2MEM_PWPMR_WPPTREN_Msk & (_UINT32_(value) << MEM2MEM_PWPMR_WPPTREN_Pos)) /* Assigment of value for WPPTREN in the MEM2MEM_PWPMR register */
#define MEM2MEM_PWPMR_WPCTREN_Pos             _UINT32_(1)                                          /* (MEM2MEM_PWPMR) Write Protection Counter Registers Enable Position */
#define MEM2MEM_PWPMR_WPCTREN_Msk             (_UINT32_(0x1) << MEM2MEM_PWPMR_WPCTREN_Pos)         /* (MEM2MEM_PWPMR) Write Protection Counter Registers Enable Mask */
#define MEM2MEM_PWPMR_WPCTREN(value)          (MEM2MEM_PWPMR_WPCTREN_Msk & (_UINT32_(value) << MEM2MEM_PWPMR_WPCTREN_Pos)) /* Assigment of value for WPCTREN in the MEM2MEM_PWPMR register */
#define MEM2MEM_PWPMR_WPCREN_Pos              _UINT32_(2)                                          /* (MEM2MEM_PWPMR) Write Protection Control Register Enable Position */
#define MEM2MEM_PWPMR_WPCREN_Msk              (_UINT32_(0x1) << MEM2MEM_PWPMR_WPCREN_Pos)          /* (MEM2MEM_PWPMR) Write Protection Control Register Enable Mask */
#define MEM2MEM_PWPMR_WPCREN(value)           (MEM2MEM_PWPMR_WPCREN_Msk & (_UINT32_(value) << MEM2MEM_PWPMR_WPCREN_Pos)) /* Assigment of value for WPCREN in the MEM2MEM_PWPMR register */
#define MEM2MEM_PWPMR_WPKEY_Pos               _UINT32_(8)                                          /* (MEM2MEM_PWPMR) Write Protection Key Position */
#define MEM2MEM_PWPMR_WPKEY_Msk               (_UINT32_(0xFFFFFF) << MEM2MEM_PWPMR_WPKEY_Pos)      /* (MEM2MEM_PWPMR) Write Protection Key Mask */
#define MEM2MEM_PWPMR_WPKEY(value)            (MEM2MEM_PWPMR_WPKEY_Msk & (_UINT32_(value) << MEM2MEM_PWPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the MEM2MEM_PWPMR register */
#define   MEM2MEM_PWPMR_WPKEY_PASSWD_Val      _UINT32_(0x504443)                                   /* (MEM2MEM_PWPMR) Writing any other value in this field aborts the write operation. Always reads as 0.  */
#define MEM2MEM_PWPMR_WPKEY_PASSWD            (MEM2MEM_PWPMR_WPKEY_PASSWD_Val << MEM2MEM_PWPMR_WPKEY_Pos) /* (MEM2MEM_PWPMR) Writing any other value in this field aborts the write operation. Always reads as 0. Position  */
#define MEM2MEM_PWPMR_Msk                     _UINT32_(0xFFFFFF07)                                 /* (MEM2MEM_PWPMR) Register Mask  */


/** \brief MEM2MEM register offsets definitions */
#define MEM2MEM_THR_REG_OFST           _UINT32_(0x00)      /* (MEM2MEM_THR) Transfer Holding Register Offset */
#define MEM2MEM_MR_REG_OFST            _UINT32_(0x04)      /* (MEM2MEM_MR) Mode Register Offset */
#define MEM2MEM_IER_REG_OFST           _UINT32_(0x08)      /* (MEM2MEM_IER) Interrupt Enable Register Offset */
#define MEM2MEM_IDR_REG_OFST           _UINT32_(0x0C)      /* (MEM2MEM_IDR) Interrupt Disable Register Offset */
#define MEM2MEM_IMR_REG_OFST           _UINT32_(0x10)      /* (MEM2MEM_IMR) Interrupt Mask Register Offset */
#define MEM2MEM_ISR_REG_OFST           _UINT32_(0x14)      /* (MEM2MEM_ISR) Interrupt Status Register Offset */
#define MEM2MEM_WPMR_REG_OFST          _UINT32_(0x18)      /* (MEM2MEM_WPMR) Write Protection Mode Register Offset */
#define MEM2MEM_RPR_REG_OFST           _UINT32_(0x100)     /* (MEM2MEM_RPR) Receive Pointer Register Offset */
#define MEM2MEM_RCR_REG_OFST           _UINT32_(0x104)     /* (MEM2MEM_RCR) Receive Counter Register Offset */
#define MEM2MEM_TPR_REG_OFST           _UINT32_(0x108)     /* (MEM2MEM_TPR) Transmit Pointer Register Offset */
#define MEM2MEM_TCR_REG_OFST           _UINT32_(0x10C)     /* (MEM2MEM_TCR) Transmit Counter Register Offset */
#define MEM2MEM_RNPR_REG_OFST          _UINT32_(0x110)     /* (MEM2MEM_RNPR) Receive Next Pointer Register Offset */
#define MEM2MEM_RNCR_REG_OFST          _UINT32_(0x114)     /* (MEM2MEM_RNCR) Receive Next Counter Register Offset */
#define MEM2MEM_TNPR_REG_OFST          _UINT32_(0x118)     /* (MEM2MEM_TNPR) Transmit Next Pointer Register Offset */
#define MEM2MEM_TNCR_REG_OFST          _UINT32_(0x11C)     /* (MEM2MEM_TNCR) Transmit Next Counter Register Offset */
#define MEM2MEM_PTCR_REG_OFST          _UINT32_(0x120)     /* (MEM2MEM_PTCR) Transfer Control Register Offset */
#define MEM2MEM_PTSR_REG_OFST          _UINT32_(0x124)     /* (MEM2MEM_PTSR) Transfer Status Register Offset */
#define MEM2MEM_PWPMR_REG_OFST         _UINT32_(0x128)     /* (MEM2MEM_PWPMR) Write Protection Mode Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief MEM2MEM register API structure */
typedef struct
{
  __IO  uint32_t                       MEM2MEM_THR;        /**< Offset: 0x00 (R/W  32) Transfer Holding Register */
  __IO  uint32_t                       MEM2MEM_MR;         /**< Offset: 0x04 (R/W  32) Mode Register */
  __O   uint32_t                       MEM2MEM_IER;        /**< Offset: 0x08 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       MEM2MEM_IDR;        /**< Offset: 0x0C ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       MEM2MEM_IMR;        /**< Offset: 0x10 (R/   32) Interrupt Mask Register */
  __I   uint32_t                       MEM2MEM_ISR;        /**< Offset: 0x14 (R/   32) Interrupt Status Register */
  __IO  uint32_t                       MEM2MEM_WPMR;       /**< Offset: 0x18 (R/W  32) Write Protection Mode Register */
  __I   uint8_t                        Reserved1[0xE4];
  __IO  uint32_t                       MEM2MEM_RPR;        /**< Offset: 0x100 (R/W  32) Receive Pointer Register */
  __IO  uint32_t                       MEM2MEM_RCR;        /**< Offset: 0x104 (R/W  32) Receive Counter Register */
  __IO  uint32_t                       MEM2MEM_TPR;        /**< Offset: 0x108 (R/W  32) Transmit Pointer Register */
  __IO  uint32_t                       MEM2MEM_TCR;        /**< Offset: 0x10C (R/W  32) Transmit Counter Register */
  __IO  uint32_t                       MEM2MEM_RNPR;       /**< Offset: 0x110 (R/W  32) Receive Next Pointer Register */
  __IO  uint32_t                       MEM2MEM_RNCR;       /**< Offset: 0x114 (R/W  32) Receive Next Counter Register */
  __IO  uint32_t                       MEM2MEM_TNPR;       /**< Offset: 0x118 (R/W  32) Transmit Next Pointer Register */
  __IO  uint32_t                       MEM2MEM_TNCR;       /**< Offset: 0x11C (R/W  32) Transmit Next Counter Register */
  __O   uint32_t                       MEM2MEM_PTCR;       /**< Offset: 0x120 ( /W  32) Transfer Control Register */
  __I   uint32_t                       MEM2MEM_PTSR;       /**< Offset: 0x124 (R/   32) Transfer Status Register */
  __IO  uint32_t                       MEM2MEM_PWPMR;      /**< Offset: 0x128 (R/W  32) Write Protection Mode Register */
} mem2mem_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CXMTSH_MEM2MEM_COMPONENT_H_ */
