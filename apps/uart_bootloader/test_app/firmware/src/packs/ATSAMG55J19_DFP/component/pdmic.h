/*
 * Component description for PDMIC
 *
 * Copyright (c) 2022 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2022-03-22T03:45:07Z */
#ifndef _SAMG55_PDMIC_COMPONENT_H_
#define _SAMG55_PDMIC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PDMIC                                        */
/* ************************************************************************** */

/* -------- PDMIC_CR : (PDMIC Offset: 0x00) (R/W 32) Control Register -------- */
#define PDMIC_CR_SWRST_Pos                    _UINT32_(0)                                          /* (PDMIC_CR) Software Reset Position */
#define PDMIC_CR_SWRST_Msk                    (_UINT32_(0x1) << PDMIC_CR_SWRST_Pos)                /* (PDMIC_CR) Software Reset Mask */
#define PDMIC_CR_SWRST(value)                 (PDMIC_CR_SWRST_Msk & (_UINT32_(value) << PDMIC_CR_SWRST_Pos)) /* Assigment of value for SWRST in the PDMIC_CR register */
#define PDMIC_CR_ENPDM_Pos                    _UINT32_(4)                                          /* (PDMIC_CR) Enable PDM Position */
#define PDMIC_CR_ENPDM_Msk                    (_UINT32_(0x1) << PDMIC_CR_ENPDM_Pos)                /* (PDMIC_CR) Enable PDM Mask */
#define PDMIC_CR_ENPDM(value)                 (PDMIC_CR_ENPDM_Msk & (_UINT32_(value) << PDMIC_CR_ENPDM_Pos)) /* Assigment of value for ENPDM in the PDMIC_CR register */
#define PDMIC_CR_Msk                          _UINT32_(0x00000011)                                 /* (PDMIC_CR) Register Mask  */


/* -------- PDMIC_MR : (PDMIC Offset: 0x04) (R/W 32) Mode Register -------- */
#define PDMIC_MR_CLKS_Pos                     _UINT32_(4)                                          /* (PDMIC_MR) Clock Source Selection Position */
#define PDMIC_MR_CLKS_Msk                     (_UINT32_(0x1) << PDMIC_MR_CLKS_Pos)                 /* (PDMIC_MR) Clock Source Selection Mask */
#define PDMIC_MR_CLKS(value)                  (PDMIC_MR_CLKS_Msk & (_UINT32_(value) << PDMIC_MR_CLKS_Pos)) /* Assigment of value for CLKS in the PDMIC_MR register */
#define PDMIC_MR_PRESCAL_Pos                  _UINT32_(8)                                          /* (PDMIC_MR) Prescaler Rate Selection Position */
#define PDMIC_MR_PRESCAL_Msk                  (_UINT32_(0x7F) << PDMIC_MR_PRESCAL_Pos)             /* (PDMIC_MR) Prescaler Rate Selection Mask */
#define PDMIC_MR_PRESCAL(value)               (PDMIC_MR_PRESCAL_Msk & (_UINT32_(value) << PDMIC_MR_PRESCAL_Pos)) /* Assigment of value for PRESCAL in the PDMIC_MR register */
#define PDMIC_MR_Msk                          _UINT32_(0x00007F10)                                 /* (PDMIC_MR) Register Mask  */


/* -------- PDMIC_CDR : (PDMIC Offset: 0x14) ( R/ 32) Converted Data Register -------- */
#define PDMIC_CDR_DATA_Pos                    _UINT32_(0)                                          /* (PDMIC_CDR) Data Converted Position */
#define PDMIC_CDR_DATA_Msk                    (_UINT32_(0xFFFFFFFF) << PDMIC_CDR_DATA_Pos)         /* (PDMIC_CDR) Data Converted Mask */
#define PDMIC_CDR_DATA(value)                 (PDMIC_CDR_DATA_Msk & (_UINT32_(value) << PDMIC_CDR_DATA_Pos)) /* Assigment of value for DATA in the PDMIC_CDR register */
#define PDMIC_CDR_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (PDMIC_CDR) Register Mask  */


/* -------- PDMIC_IER : (PDMIC Offset: 0x18) ( /W 32) Interrupt Enable Register -------- */
#define PDMIC_IER_DRDY_Pos                    _UINT32_(24)                                         /* (PDMIC_IER) Data Ready Interrupt Enable Position */
#define PDMIC_IER_DRDY_Msk                    (_UINT32_(0x1) << PDMIC_IER_DRDY_Pos)                /* (PDMIC_IER) Data Ready Interrupt Enable Mask */
#define PDMIC_IER_DRDY(value)                 (PDMIC_IER_DRDY_Msk & (_UINT32_(value) << PDMIC_IER_DRDY_Pos)) /* Assigment of value for DRDY in the PDMIC_IER register */
#define PDMIC_IER_OVRE_Pos                    _UINT32_(25)                                         /* (PDMIC_IER) Overrun Error Interrupt Enable Position */
#define PDMIC_IER_OVRE_Msk                    (_UINT32_(0x1) << PDMIC_IER_OVRE_Pos)                /* (PDMIC_IER) Overrun Error Interrupt Enable Mask */
#define PDMIC_IER_OVRE(value)                 (PDMIC_IER_OVRE_Msk & (_UINT32_(value) << PDMIC_IER_OVRE_Pos)) /* Assigment of value for OVRE in the PDMIC_IER register */
#define PDMIC_IER_ENDRX_Pos                   _UINT32_(27)                                         /* (PDMIC_IER) End of Receive Buffer Interrupt Enable Position */
#define PDMIC_IER_ENDRX_Msk                   (_UINT32_(0x1) << PDMIC_IER_ENDRX_Pos)               /* (PDMIC_IER) End of Receive Buffer Interrupt Enable Mask */
#define PDMIC_IER_ENDRX(value)                (PDMIC_IER_ENDRX_Msk & (_UINT32_(value) << PDMIC_IER_ENDRX_Pos)) /* Assigment of value for ENDRX in the PDMIC_IER register */
#define PDMIC_IER_RXBUFF_Pos                  _UINT32_(28)                                         /* (PDMIC_IER) Receive Buffer Full Interrupt Enable Position */
#define PDMIC_IER_RXBUFF_Msk                  (_UINT32_(0x1) << PDMIC_IER_RXBUFF_Pos)              /* (PDMIC_IER) Receive Buffer Full Interrupt Enable Mask */
#define PDMIC_IER_RXBUFF(value)               (PDMIC_IER_RXBUFF_Msk & (_UINT32_(value) << PDMIC_IER_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the PDMIC_IER register */
#define PDMIC_IER_Msk                         _UINT32_(0x1B000000)                                 /* (PDMIC_IER) Register Mask  */


/* -------- PDMIC_IDR : (PDMIC Offset: 0x1C) ( /W 32) Interrupt Disable Register -------- */
#define PDMIC_IDR_DRDY_Pos                    _UINT32_(24)                                         /* (PDMIC_IDR) Data Ready Interrupt Disable Position */
#define PDMIC_IDR_DRDY_Msk                    (_UINT32_(0x1) << PDMIC_IDR_DRDY_Pos)                /* (PDMIC_IDR) Data Ready Interrupt Disable Mask */
#define PDMIC_IDR_DRDY(value)                 (PDMIC_IDR_DRDY_Msk & (_UINT32_(value) << PDMIC_IDR_DRDY_Pos)) /* Assigment of value for DRDY in the PDMIC_IDR register */
#define PDMIC_IDR_OVRE_Pos                    _UINT32_(25)                                         /* (PDMIC_IDR) General Overrun Error Interrupt Disable Position */
#define PDMIC_IDR_OVRE_Msk                    (_UINT32_(0x1) << PDMIC_IDR_OVRE_Pos)                /* (PDMIC_IDR) General Overrun Error Interrupt Disable Mask */
#define PDMIC_IDR_OVRE(value)                 (PDMIC_IDR_OVRE_Msk & (_UINT32_(value) << PDMIC_IDR_OVRE_Pos)) /* Assigment of value for OVRE in the PDMIC_IDR register */
#define PDMIC_IDR_ENDRX_Pos                   _UINT32_(27)                                         /* (PDMIC_IDR) End of Receive Buffer Interrupt Disable Position */
#define PDMIC_IDR_ENDRX_Msk                   (_UINT32_(0x1) << PDMIC_IDR_ENDRX_Pos)               /* (PDMIC_IDR) End of Receive Buffer Interrupt Disable Mask */
#define PDMIC_IDR_ENDRX(value)                (PDMIC_IDR_ENDRX_Msk & (_UINT32_(value) << PDMIC_IDR_ENDRX_Pos)) /* Assigment of value for ENDRX in the PDMIC_IDR register */
#define PDMIC_IDR_RXBUFF_Pos                  _UINT32_(28)                                         /* (PDMIC_IDR) Receive Buffer Full Interrupt Disable Position */
#define PDMIC_IDR_RXBUFF_Msk                  (_UINT32_(0x1) << PDMIC_IDR_RXBUFF_Pos)              /* (PDMIC_IDR) Receive Buffer Full Interrupt Disable Mask */
#define PDMIC_IDR_RXBUFF(value)               (PDMIC_IDR_RXBUFF_Msk & (_UINT32_(value) << PDMIC_IDR_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the PDMIC_IDR register */
#define PDMIC_IDR_Msk                         _UINT32_(0x1B000000)                                 /* (PDMIC_IDR) Register Mask  */


/* -------- PDMIC_IMR : (PDMIC Offset: 0x20) ( R/ 32) Interrupt Mask Register -------- */
#define PDMIC_IMR_DRDY_Pos                    _UINT32_(24)                                         /* (PDMIC_IMR) Data Ready Interrupt Mask Position */
#define PDMIC_IMR_DRDY_Msk                    (_UINT32_(0x1) << PDMIC_IMR_DRDY_Pos)                /* (PDMIC_IMR) Data Ready Interrupt Mask Mask */
#define PDMIC_IMR_DRDY(value)                 (PDMIC_IMR_DRDY_Msk & (_UINT32_(value) << PDMIC_IMR_DRDY_Pos)) /* Assigment of value for DRDY in the PDMIC_IMR register */
#define PDMIC_IMR_OVRE_Pos                    _UINT32_(25)                                         /* (PDMIC_IMR) General Overrun Error Interrupt Mask Position */
#define PDMIC_IMR_OVRE_Msk                    (_UINT32_(0x1) << PDMIC_IMR_OVRE_Pos)                /* (PDMIC_IMR) General Overrun Error Interrupt Mask Mask */
#define PDMIC_IMR_OVRE(value)                 (PDMIC_IMR_OVRE_Msk & (_UINT32_(value) << PDMIC_IMR_OVRE_Pos)) /* Assigment of value for OVRE in the PDMIC_IMR register */
#define PDMIC_IMR_ENDRX_Pos                   _UINT32_(27)                                         /* (PDMIC_IMR) End of Receive Buffer Interrupt Mask Position */
#define PDMIC_IMR_ENDRX_Msk                   (_UINT32_(0x1) << PDMIC_IMR_ENDRX_Pos)               /* (PDMIC_IMR) End of Receive Buffer Interrupt Mask Mask */
#define PDMIC_IMR_ENDRX(value)                (PDMIC_IMR_ENDRX_Msk & (_UINT32_(value) << PDMIC_IMR_ENDRX_Pos)) /* Assigment of value for ENDRX in the PDMIC_IMR register */
#define PDMIC_IMR_RXBUFF_Pos                  _UINT32_(28)                                         /* (PDMIC_IMR) Receive Buffer Full Interrupt Mask Position */
#define PDMIC_IMR_RXBUFF_Msk                  (_UINT32_(0x1) << PDMIC_IMR_RXBUFF_Pos)              /* (PDMIC_IMR) Receive Buffer Full Interrupt Mask Mask */
#define PDMIC_IMR_RXBUFF(value)               (PDMIC_IMR_RXBUFF_Msk & (_UINT32_(value) << PDMIC_IMR_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the PDMIC_IMR register */
#define PDMIC_IMR_Msk                         _UINT32_(0x1B000000)                                 /* (PDMIC_IMR) Register Mask  */


/* -------- PDMIC_ISR : (PDMIC Offset: 0x24) ( R/ 32) Interrupt Status Register -------- */
#define PDMIC_ISR_FIFOCNT_Pos                 _UINT32_(16)                                         /* (PDMIC_ISR) FIFO Count Position */
#define PDMIC_ISR_FIFOCNT_Msk                 (_UINT32_(0xFF) << PDMIC_ISR_FIFOCNT_Pos)            /* (PDMIC_ISR) FIFO Count Mask */
#define PDMIC_ISR_FIFOCNT(value)              (PDMIC_ISR_FIFOCNT_Msk & (_UINT32_(value) << PDMIC_ISR_FIFOCNT_Pos)) /* Assigment of value for FIFOCNT in the PDMIC_ISR register */
#define PDMIC_ISR_DRDY_Pos                    _UINT32_(24)                                         /* (PDMIC_ISR) Data Ready Position */
#define PDMIC_ISR_DRDY_Msk                    (_UINT32_(0x1) << PDMIC_ISR_DRDY_Pos)                /* (PDMIC_ISR) Data Ready Mask */
#define PDMIC_ISR_DRDY(value)                 (PDMIC_ISR_DRDY_Msk & (_UINT32_(value) << PDMIC_ISR_DRDY_Pos)) /* Assigment of value for DRDY in the PDMIC_ISR register */
#define PDMIC_ISR_OVRE_Pos                    _UINT32_(25)                                         /* (PDMIC_ISR) Overrun Error Position */
#define PDMIC_ISR_OVRE_Msk                    (_UINT32_(0x1) << PDMIC_ISR_OVRE_Pos)                /* (PDMIC_ISR) Overrun Error Mask */
#define PDMIC_ISR_OVRE(value)                 (PDMIC_ISR_OVRE_Msk & (_UINT32_(value) << PDMIC_ISR_OVRE_Pos)) /* Assigment of value for OVRE in the PDMIC_ISR register */
#define PDMIC_ISR_ENDRX_Pos                   _UINT32_(27)                                         /* (PDMIC_ISR) End of RX Buffer Position */
#define PDMIC_ISR_ENDRX_Msk                   (_UINT32_(0x1) << PDMIC_ISR_ENDRX_Pos)               /* (PDMIC_ISR) End of RX Buffer Mask */
#define PDMIC_ISR_ENDRX(value)                (PDMIC_ISR_ENDRX_Msk & (_UINT32_(value) << PDMIC_ISR_ENDRX_Pos)) /* Assigment of value for ENDRX in the PDMIC_ISR register */
#define PDMIC_ISR_RXBUFF_Pos                  _UINT32_(28)                                         /* (PDMIC_ISR) RX Buffer Full Position */
#define PDMIC_ISR_RXBUFF_Msk                  (_UINT32_(0x1) << PDMIC_ISR_RXBUFF_Pos)              /* (PDMIC_ISR) RX Buffer Full Mask */
#define PDMIC_ISR_RXBUFF(value)               (PDMIC_ISR_RXBUFF_Msk & (_UINT32_(value) << PDMIC_ISR_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the PDMIC_ISR register */
#define PDMIC_ISR_Msk                         _UINT32_(0x1BFF0000)                                 /* (PDMIC_ISR) Register Mask  */


/* -------- PDMIC_DSPR0 : (PDMIC Offset: 0x58) (R/W 32) DSP Configuration Register 0 -------- */
#define PDMIC_DSPR0_HPFBYP_Pos                _UINT32_(1)                                          /* (PDMIC_DSPR0) High-Pass Filter Bypass Position */
#define PDMIC_DSPR0_HPFBYP_Msk                (_UINT32_(0x1) << PDMIC_DSPR0_HPFBYP_Pos)            /* (PDMIC_DSPR0) High-Pass Filter Bypass Mask */
#define PDMIC_DSPR0_HPFBYP(value)             (PDMIC_DSPR0_HPFBYP_Msk & (_UINT32_(value) << PDMIC_DSPR0_HPFBYP_Pos)) /* Assigment of value for HPFBYP in the PDMIC_DSPR0 register */
#define PDMIC_DSPR0_SINBYP_Pos                _UINT32_(2)                                          /* (PDMIC_DSPR0) SINCC Filter Bypass Position */
#define PDMIC_DSPR0_SINBYP_Msk                (_UINT32_(0x1) << PDMIC_DSPR0_SINBYP_Pos)            /* (PDMIC_DSPR0) SINCC Filter Bypass Mask */
#define PDMIC_DSPR0_SINBYP(value)             (PDMIC_DSPR0_SINBYP_Msk & (_UINT32_(value) << PDMIC_DSPR0_SINBYP_Pos)) /* Assigment of value for SINBYP in the PDMIC_DSPR0 register */
#define PDMIC_DSPR0_SIZE_Pos                  _UINT32_(3)                                          /* (PDMIC_DSPR0) Data Size Position */
#define PDMIC_DSPR0_SIZE_Msk                  (_UINT32_(0x1) << PDMIC_DSPR0_SIZE_Pos)              /* (PDMIC_DSPR0) Data Size Mask */
#define PDMIC_DSPR0_SIZE(value)               (PDMIC_DSPR0_SIZE_Msk & (_UINT32_(value) << PDMIC_DSPR0_SIZE_Pos)) /* Assigment of value for SIZE in the PDMIC_DSPR0 register */
#define PDMIC_DSPR0_OSR_Pos                   _UINT32_(4)                                          /* (PDMIC_DSPR0) Oversampling Ratio Position */
#define PDMIC_DSPR0_OSR_Msk                   (_UINT32_(0x7) << PDMIC_DSPR0_OSR_Pos)               /* (PDMIC_DSPR0) Oversampling Ratio Mask */
#define PDMIC_DSPR0_OSR(value)                (PDMIC_DSPR0_OSR_Msk & (_UINT32_(value) << PDMIC_DSPR0_OSR_Pos)) /* Assigment of value for OSR in the PDMIC_DSPR0 register */
#define   PDMIC_DSPR0_OSR_128_Val             _UINT32_(0x0)                                        /* (PDMIC_DSPR0) Oversampling ratio is 128  */
#define   PDMIC_DSPR0_OSR_64_Val              _UINT32_(0x1)                                        /* (PDMIC_DSPR0) Oversampling ratio is 64  */
#define PDMIC_DSPR0_OSR_128                   (PDMIC_DSPR0_OSR_128_Val << PDMIC_DSPR0_OSR_Pos)     /* (PDMIC_DSPR0) Oversampling ratio is 128 Position  */
#define PDMIC_DSPR0_OSR_64                    (PDMIC_DSPR0_OSR_64_Val << PDMIC_DSPR0_OSR_Pos)      /* (PDMIC_DSPR0) Oversampling ratio is 64 Position  */
#define PDMIC_DSPR0_SCALE_Pos                 _UINT32_(8)                                          /* (PDMIC_DSPR0) Data Scale Position */
#define PDMIC_DSPR0_SCALE_Msk                 (_UINT32_(0xF) << PDMIC_DSPR0_SCALE_Pos)             /* (PDMIC_DSPR0) Data Scale Mask */
#define PDMIC_DSPR0_SCALE(value)              (PDMIC_DSPR0_SCALE_Msk & (_UINT32_(value) << PDMIC_DSPR0_SCALE_Pos)) /* Assigment of value for SCALE in the PDMIC_DSPR0 register */
#define PDMIC_DSPR0_SHIFT_Pos                 _UINT32_(12)                                         /* (PDMIC_DSPR0) Data Shift Position */
#define PDMIC_DSPR0_SHIFT_Msk                 (_UINT32_(0xF) << PDMIC_DSPR0_SHIFT_Pos)             /* (PDMIC_DSPR0) Data Shift Mask */
#define PDMIC_DSPR0_SHIFT(value)              (PDMIC_DSPR0_SHIFT_Msk & (_UINT32_(value) << PDMIC_DSPR0_SHIFT_Pos)) /* Assigment of value for SHIFT in the PDMIC_DSPR0 register */
#define PDMIC_DSPR0_Msk                       _UINT32_(0x0000FF7E)                                 /* (PDMIC_DSPR0) Register Mask  */


/* -------- PDMIC_DSPR1 : (PDMIC Offset: 0x5C) (R/W 32) DSP Configuration Register 1 -------- */
#define PDMIC_DSPR1_DGAIN_Pos                 _UINT32_(0)                                          /* (PDMIC_DSPR1) Gain Correction Position */
#define PDMIC_DSPR1_DGAIN_Msk                 (_UINT32_(0x7FFF) << PDMIC_DSPR1_DGAIN_Pos)          /* (PDMIC_DSPR1) Gain Correction Mask */
#define PDMIC_DSPR1_DGAIN(value)              (PDMIC_DSPR1_DGAIN_Msk & (_UINT32_(value) << PDMIC_DSPR1_DGAIN_Pos)) /* Assigment of value for DGAIN in the PDMIC_DSPR1 register */
#define PDMIC_DSPR1_OFST_Pos                  _UINT32_(16)                                         /* (PDMIC_DSPR1) Offset Correction Position */
#define PDMIC_DSPR1_OFST_Msk                  (_UINT32_(0xFFFF) << PDMIC_DSPR1_OFST_Pos)           /* (PDMIC_DSPR1) Offset Correction Mask */
#define PDMIC_DSPR1_OFST(value)               (PDMIC_DSPR1_OFST_Msk & (_UINT32_(value) << PDMIC_DSPR1_OFST_Pos)) /* Assigment of value for OFST in the PDMIC_DSPR1 register */
#define PDMIC_DSPR1_Msk                       _UINT32_(0xFFFF7FFF)                                 /* (PDMIC_DSPR1) Register Mask  */


/* -------- PDMIC_WPMR : (PDMIC Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define PDMIC_WPMR_WPEN_Pos                   _UINT32_(0)                                          /* (PDMIC_WPMR) Write Protection Enable Position */
#define PDMIC_WPMR_WPEN_Msk                   (_UINT32_(0x1) << PDMIC_WPMR_WPEN_Pos)               /* (PDMIC_WPMR) Write Protection Enable Mask */
#define PDMIC_WPMR_WPEN(value)                (PDMIC_WPMR_WPEN_Msk & (_UINT32_(value) << PDMIC_WPMR_WPEN_Pos)) /* Assigment of value for WPEN in the PDMIC_WPMR register */
#define PDMIC_WPMR_WPKEY_Pos                  _UINT32_(8)                                          /* (PDMIC_WPMR) Write Protect Key Position */
#define PDMIC_WPMR_WPKEY_Msk                  (_UINT32_(0xFFFFFF) << PDMIC_WPMR_WPKEY_Pos)         /* (PDMIC_WPMR) Write Protect Key Mask */
#define PDMIC_WPMR_WPKEY(value)               (PDMIC_WPMR_WPKEY_Msk & (_UINT32_(value) << PDMIC_WPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the PDMIC_WPMR register */
#define   PDMIC_WPMR_WPKEY_PASSWD_Val         _UINT32_(0x414443)                                   /* (PDMIC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0.  */
#define PDMIC_WPMR_WPKEY_PASSWD               (PDMIC_WPMR_WPKEY_PASSWD_Val << PDMIC_WPMR_WPKEY_Pos) /* (PDMIC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0. Position  */
#define PDMIC_WPMR_Msk                        _UINT32_(0xFFFFFF01)                                 /* (PDMIC_WPMR) Register Mask  */


/* -------- PDMIC_WPSR : (PDMIC Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define PDMIC_WPSR_WPVS_Pos                   _UINT32_(0)                                          /* (PDMIC_WPSR) Write Protection Violation Status Position */
#define PDMIC_WPSR_WPVS_Msk                   (_UINT32_(0x1) << PDMIC_WPSR_WPVS_Pos)               /* (PDMIC_WPSR) Write Protection Violation Status Mask */
#define PDMIC_WPSR_WPVS(value)                (PDMIC_WPSR_WPVS_Msk & (_UINT32_(value) << PDMIC_WPSR_WPVS_Pos)) /* Assigment of value for WPVS in the PDMIC_WPSR register */
#define PDMIC_WPSR_WPVSRC_Pos                 _UINT32_(8)                                          /* (PDMIC_WPSR) Write Protection Violation Source Position */
#define PDMIC_WPSR_WPVSRC_Msk                 (_UINT32_(0xFFFF) << PDMIC_WPSR_WPVSRC_Pos)          /* (PDMIC_WPSR) Write Protection Violation Source Mask */
#define PDMIC_WPSR_WPVSRC(value)              (PDMIC_WPSR_WPVSRC_Msk & (_UINT32_(value) << PDMIC_WPSR_WPVSRC_Pos)) /* Assigment of value for WPVSRC in the PDMIC_WPSR register */
#define PDMIC_WPSR_Msk                        _UINT32_(0x00FFFF01)                                 /* (PDMIC_WPSR) Register Mask  */


/* -------- PDMIC_RPR : (PDMIC Offset: 0x100) (R/W 32) Receive Pointer Register -------- */
#define PDMIC_RPR_RXPTR_Pos                   _UINT32_(0)                                          /* (PDMIC_RPR) Receive Pointer Register Position */
#define PDMIC_RPR_RXPTR_Msk                   (_UINT32_(0xFFFFFFFF) << PDMIC_RPR_RXPTR_Pos)        /* (PDMIC_RPR) Receive Pointer Register Mask */
#define PDMIC_RPR_RXPTR(value)                (PDMIC_RPR_RXPTR_Msk & (_UINT32_(value) << PDMIC_RPR_RXPTR_Pos)) /* Assigment of value for RXPTR in the PDMIC_RPR register */
#define PDMIC_RPR_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (PDMIC_RPR) Register Mask  */


/* -------- PDMIC_RCR : (PDMIC Offset: 0x104) (R/W 32) Receive Counter Register -------- */
#define PDMIC_RCR_RXCTR_Pos                   _UINT32_(0)                                          /* (PDMIC_RCR) Receive Counter Register Position */
#define PDMIC_RCR_RXCTR_Msk                   (_UINT32_(0xFFFF) << PDMIC_RCR_RXCTR_Pos)            /* (PDMIC_RCR) Receive Counter Register Mask */
#define PDMIC_RCR_RXCTR(value)                (PDMIC_RCR_RXCTR_Msk & (_UINT32_(value) << PDMIC_RCR_RXCTR_Pos)) /* Assigment of value for RXCTR in the PDMIC_RCR register */
#define PDMIC_RCR_Msk                         _UINT32_(0x0000FFFF)                                 /* (PDMIC_RCR) Register Mask  */


/* -------- PDMIC_RNPR : (PDMIC Offset: 0x110) (R/W 32) Receive Next Pointer Register -------- */
#define PDMIC_RNPR_RXNPTR_Pos                 _UINT32_(0)                                          /* (PDMIC_RNPR) Receive Next Pointer Position */
#define PDMIC_RNPR_RXNPTR_Msk                 (_UINT32_(0xFFFFFFFF) << PDMIC_RNPR_RXNPTR_Pos)      /* (PDMIC_RNPR) Receive Next Pointer Mask */
#define PDMIC_RNPR_RXNPTR(value)              (PDMIC_RNPR_RXNPTR_Msk & (_UINT32_(value) << PDMIC_RNPR_RXNPTR_Pos)) /* Assigment of value for RXNPTR in the PDMIC_RNPR register */
#define PDMIC_RNPR_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (PDMIC_RNPR) Register Mask  */


/* -------- PDMIC_RNCR : (PDMIC Offset: 0x114) (R/W 32) Receive Next Counter Register -------- */
#define PDMIC_RNCR_RXNCTR_Pos                 _UINT32_(0)                                          /* (PDMIC_RNCR) Receive Next Counter Position */
#define PDMIC_RNCR_RXNCTR_Msk                 (_UINT32_(0xFFFF) << PDMIC_RNCR_RXNCTR_Pos)          /* (PDMIC_RNCR) Receive Next Counter Mask */
#define PDMIC_RNCR_RXNCTR(value)              (PDMIC_RNCR_RXNCTR_Msk & (_UINT32_(value) << PDMIC_RNCR_RXNCTR_Pos)) /* Assigment of value for RXNCTR in the PDMIC_RNCR register */
#define PDMIC_RNCR_Msk                        _UINT32_(0x0000FFFF)                                 /* (PDMIC_RNCR) Register Mask  */


/* -------- PDMIC_PTCR : (PDMIC Offset: 0x120) ( /W 32) Transfer Control Register -------- */
#define PDMIC_PTCR_RXTEN_Pos                  _UINT32_(0)                                          /* (PDMIC_PTCR) Receiver Transfer Enable Position */
#define PDMIC_PTCR_RXTEN_Msk                  (_UINT32_(0x1) << PDMIC_PTCR_RXTEN_Pos)              /* (PDMIC_PTCR) Receiver Transfer Enable Mask */
#define PDMIC_PTCR_RXTEN(value)               (PDMIC_PTCR_RXTEN_Msk & (_UINT32_(value) << PDMIC_PTCR_RXTEN_Pos)) /* Assigment of value for RXTEN in the PDMIC_PTCR register */
#define PDMIC_PTCR_RXTDIS_Pos                 _UINT32_(1)                                          /* (PDMIC_PTCR) Receiver Transfer Disable Position */
#define PDMIC_PTCR_RXTDIS_Msk                 (_UINT32_(0x1) << PDMIC_PTCR_RXTDIS_Pos)             /* (PDMIC_PTCR) Receiver Transfer Disable Mask */
#define PDMIC_PTCR_RXTDIS(value)              (PDMIC_PTCR_RXTDIS_Msk & (_UINT32_(value) << PDMIC_PTCR_RXTDIS_Pos)) /* Assigment of value for RXTDIS in the PDMIC_PTCR register */
#define PDMIC_PTCR_TXTEN_Pos                  _UINT32_(8)                                          /* (PDMIC_PTCR) Transmitter Transfer Enable Position */
#define PDMIC_PTCR_TXTEN_Msk                  (_UINT32_(0x1) << PDMIC_PTCR_TXTEN_Pos)              /* (PDMIC_PTCR) Transmitter Transfer Enable Mask */
#define PDMIC_PTCR_TXTEN(value)               (PDMIC_PTCR_TXTEN_Msk & (_UINT32_(value) << PDMIC_PTCR_TXTEN_Pos)) /* Assigment of value for TXTEN in the PDMIC_PTCR register */
#define PDMIC_PTCR_TXTDIS_Pos                 _UINT32_(9)                                          /* (PDMIC_PTCR) Transmitter Transfer Disable Position */
#define PDMIC_PTCR_TXTDIS_Msk                 (_UINT32_(0x1) << PDMIC_PTCR_TXTDIS_Pos)             /* (PDMIC_PTCR) Transmitter Transfer Disable Mask */
#define PDMIC_PTCR_TXTDIS(value)              (PDMIC_PTCR_TXTDIS_Msk & (_UINT32_(value) << PDMIC_PTCR_TXTDIS_Pos)) /* Assigment of value for TXTDIS in the PDMIC_PTCR register */
#define PDMIC_PTCR_RXCBEN_Pos                 _UINT32_(16)                                         /* (PDMIC_PTCR) Receiver Circular Buffer Enable Position */
#define PDMIC_PTCR_RXCBEN_Msk                 (_UINT32_(0x1) << PDMIC_PTCR_RXCBEN_Pos)             /* (PDMIC_PTCR) Receiver Circular Buffer Enable Mask */
#define PDMIC_PTCR_RXCBEN(value)              (PDMIC_PTCR_RXCBEN_Msk & (_UINT32_(value) << PDMIC_PTCR_RXCBEN_Pos)) /* Assigment of value for RXCBEN in the PDMIC_PTCR register */
#define PDMIC_PTCR_RXCBDIS_Pos                _UINT32_(17)                                         /* (PDMIC_PTCR) Receiver Circular Buffer Disable Position */
#define PDMIC_PTCR_RXCBDIS_Msk                (_UINT32_(0x1) << PDMIC_PTCR_RXCBDIS_Pos)            /* (PDMIC_PTCR) Receiver Circular Buffer Disable Mask */
#define PDMIC_PTCR_RXCBDIS(value)             (PDMIC_PTCR_RXCBDIS_Msk & (_UINT32_(value) << PDMIC_PTCR_RXCBDIS_Pos)) /* Assigment of value for RXCBDIS in the PDMIC_PTCR register */
#define PDMIC_PTCR_TXCBEN_Pos                 _UINT32_(18)                                         /* (PDMIC_PTCR) Transmitter Circular Buffer Enable Position */
#define PDMIC_PTCR_TXCBEN_Msk                 (_UINT32_(0x1) << PDMIC_PTCR_TXCBEN_Pos)             /* (PDMIC_PTCR) Transmitter Circular Buffer Enable Mask */
#define PDMIC_PTCR_TXCBEN(value)              (PDMIC_PTCR_TXCBEN_Msk & (_UINT32_(value) << PDMIC_PTCR_TXCBEN_Pos)) /* Assigment of value for TXCBEN in the PDMIC_PTCR register */
#define PDMIC_PTCR_TXCBDIS_Pos                _UINT32_(19)                                         /* (PDMIC_PTCR) Transmitter Circular Buffer Disable Position */
#define PDMIC_PTCR_TXCBDIS_Msk                (_UINT32_(0x1) << PDMIC_PTCR_TXCBDIS_Pos)            /* (PDMIC_PTCR) Transmitter Circular Buffer Disable Mask */
#define PDMIC_PTCR_TXCBDIS(value)             (PDMIC_PTCR_TXCBDIS_Msk & (_UINT32_(value) << PDMIC_PTCR_TXCBDIS_Pos)) /* Assigment of value for TXCBDIS in the PDMIC_PTCR register */
#define PDMIC_PTCR_ERRCLR_Pos                 _UINT32_(24)                                         /* (PDMIC_PTCR) Transfer Bus Error Clear Position */
#define PDMIC_PTCR_ERRCLR_Msk                 (_UINT32_(0x1) << PDMIC_PTCR_ERRCLR_Pos)             /* (PDMIC_PTCR) Transfer Bus Error Clear Mask */
#define PDMIC_PTCR_ERRCLR(value)              (PDMIC_PTCR_ERRCLR_Msk & (_UINT32_(value) << PDMIC_PTCR_ERRCLR_Pos)) /* Assigment of value for ERRCLR in the PDMIC_PTCR register */
#define PDMIC_PTCR_Msk                        _UINT32_(0x010F0303)                                 /* (PDMIC_PTCR) Register Mask  */


/* -------- PDMIC_PTSR : (PDMIC Offset: 0x124) ( R/ 32) Transfer Status Register -------- */
#define PDMIC_PTSR_RXTEN_Pos                  _UINT32_(0)                                          /* (PDMIC_PTSR) Receiver Transfer Enable Position */
#define PDMIC_PTSR_RXTEN_Msk                  (_UINT32_(0x1) << PDMIC_PTSR_RXTEN_Pos)              /* (PDMIC_PTSR) Receiver Transfer Enable Mask */
#define PDMIC_PTSR_RXTEN(value)               (PDMIC_PTSR_RXTEN_Msk & (_UINT32_(value) << PDMIC_PTSR_RXTEN_Pos)) /* Assigment of value for RXTEN in the PDMIC_PTSR register */
#define PDMIC_PTSR_TXTEN_Pos                  _UINT32_(8)                                          /* (PDMIC_PTSR) Transmitter Transfer Enable Position */
#define PDMIC_PTSR_TXTEN_Msk                  (_UINT32_(0x1) << PDMIC_PTSR_TXTEN_Pos)              /* (PDMIC_PTSR) Transmitter Transfer Enable Mask */
#define PDMIC_PTSR_TXTEN(value)               (PDMIC_PTSR_TXTEN_Msk & (_UINT32_(value) << PDMIC_PTSR_TXTEN_Pos)) /* Assigment of value for TXTEN in the PDMIC_PTSR register */
#define PDMIC_PTSR_RXCBEN_Pos                 _UINT32_(16)                                         /* (PDMIC_PTSR) Receiver Circular Buffer Enable Position */
#define PDMIC_PTSR_RXCBEN_Msk                 (_UINT32_(0x1) << PDMIC_PTSR_RXCBEN_Pos)             /* (PDMIC_PTSR) Receiver Circular Buffer Enable Mask */
#define PDMIC_PTSR_RXCBEN(value)              (PDMIC_PTSR_RXCBEN_Msk & (_UINT32_(value) << PDMIC_PTSR_RXCBEN_Pos)) /* Assigment of value for RXCBEN in the PDMIC_PTSR register */
#define PDMIC_PTSR_TXCBEN_Pos                 _UINT32_(18)                                         /* (PDMIC_PTSR) Transmitter Circular Buffer Enable Position */
#define PDMIC_PTSR_TXCBEN_Msk                 (_UINT32_(0x1) << PDMIC_PTSR_TXCBEN_Pos)             /* (PDMIC_PTSR) Transmitter Circular Buffer Enable Mask */
#define PDMIC_PTSR_TXCBEN(value)              (PDMIC_PTSR_TXCBEN_Msk & (_UINT32_(value) << PDMIC_PTSR_TXCBEN_Pos)) /* Assigment of value for TXCBEN in the PDMIC_PTSR register */
#define PDMIC_PTSR_ERR_Pos                    _UINT32_(24)                                         /* (PDMIC_PTSR) Transfer Bus Error Position */
#define PDMIC_PTSR_ERR_Msk                    (_UINT32_(0x1) << PDMIC_PTSR_ERR_Pos)                /* (PDMIC_PTSR) Transfer Bus Error Mask */
#define PDMIC_PTSR_ERR(value)                 (PDMIC_PTSR_ERR_Msk & (_UINT32_(value) << PDMIC_PTSR_ERR_Pos)) /* Assigment of value for ERR in the PDMIC_PTSR register */
#define PDMIC_PTSR_Msk                        _UINT32_(0x01050101)                                 /* (PDMIC_PTSR) Register Mask  */


/** \brief PDMIC register offsets definitions */
#define PDMIC_CR_REG_OFST              _UINT32_(0x00)      /* (PDMIC_CR) Control Register Offset */
#define PDMIC_MR_REG_OFST              _UINT32_(0x04)      /* (PDMIC_MR) Mode Register Offset */
#define PDMIC_CDR_REG_OFST             _UINT32_(0x14)      /* (PDMIC_CDR) Converted Data Register Offset */
#define PDMIC_IER_REG_OFST             _UINT32_(0x18)      /* (PDMIC_IER) Interrupt Enable Register Offset */
#define PDMIC_IDR_REG_OFST             _UINT32_(0x1C)      /* (PDMIC_IDR) Interrupt Disable Register Offset */
#define PDMIC_IMR_REG_OFST             _UINT32_(0x20)      /* (PDMIC_IMR) Interrupt Mask Register Offset */
#define PDMIC_ISR_REG_OFST             _UINT32_(0x24)      /* (PDMIC_ISR) Interrupt Status Register Offset */
#define PDMIC_DSPR0_REG_OFST           _UINT32_(0x58)      /* (PDMIC_DSPR0) DSP Configuration Register 0 Offset */
#define PDMIC_DSPR1_REG_OFST           _UINT32_(0x5C)      /* (PDMIC_DSPR1) DSP Configuration Register 1 Offset */
#define PDMIC_WPMR_REG_OFST            _UINT32_(0xE4)      /* (PDMIC_WPMR) Write Protection Mode Register Offset */
#define PDMIC_WPSR_REG_OFST            _UINT32_(0xE8)      /* (PDMIC_WPSR) Write Protection Status Register Offset */
#define PDMIC_RPR_REG_OFST             _UINT32_(0x100)     /* (PDMIC_RPR) Receive Pointer Register Offset */
#define PDMIC_RCR_REG_OFST             _UINT32_(0x104)     /* (PDMIC_RCR) Receive Counter Register Offset */
#define PDMIC_RNPR_REG_OFST            _UINT32_(0x110)     /* (PDMIC_RNPR) Receive Next Pointer Register Offset */
#define PDMIC_RNCR_REG_OFST            _UINT32_(0x114)     /* (PDMIC_RNCR) Receive Next Counter Register Offset */
#define PDMIC_PTCR_REG_OFST            _UINT32_(0x120)     /* (PDMIC_PTCR) Transfer Control Register Offset */
#define PDMIC_PTSR_REG_OFST            _UINT32_(0x124)     /* (PDMIC_PTSR) Transfer Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PDMIC register API structure */
typedef struct
{
  __IO  uint32_t                       PDMIC_CR;           /**< Offset: 0x00 (R/W  32) Control Register */
  __IO  uint32_t                       PDMIC_MR;           /**< Offset: 0x04 (R/W  32) Mode Register */
  __I   uint8_t                        Reserved1[0x0C];
  __I   uint32_t                       PDMIC_CDR;          /**< Offset: 0x14 (R/   32) Converted Data Register */
  __O   uint32_t                       PDMIC_IER;          /**< Offset: 0x18 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       PDMIC_IDR;          /**< Offset: 0x1C ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       PDMIC_IMR;          /**< Offset: 0x20 (R/   32) Interrupt Mask Register */
  __I   uint32_t                       PDMIC_ISR;          /**< Offset: 0x24 (R/   32) Interrupt Status Register */
  __I   uint8_t                        Reserved2[0x30];
  __IO  uint32_t                       PDMIC_DSPR0;        /**< Offset: 0x58 (R/W  32) DSP Configuration Register 0 */
  __IO  uint32_t                       PDMIC_DSPR1;        /**< Offset: 0x5C (R/W  32) DSP Configuration Register 1 */
  __I   uint8_t                        Reserved3[0x84];
  __IO  uint32_t                       PDMIC_WPMR;         /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       PDMIC_WPSR;         /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
  __I   uint8_t                        Reserved4[0x14];
  __IO  uint32_t                       PDMIC_RPR;          /**< Offset: 0x100 (R/W  32) Receive Pointer Register */
  __IO  uint32_t                       PDMIC_RCR;          /**< Offset: 0x104 (R/W  32) Receive Counter Register */
  __I   uint8_t                        Reserved5[0x08];
  __IO  uint32_t                       PDMIC_RNPR;         /**< Offset: 0x110 (R/W  32) Receive Next Pointer Register */
  __IO  uint32_t                       PDMIC_RNCR;         /**< Offset: 0x114 (R/W  32) Receive Next Counter Register */
  __I   uint8_t                        Reserved6[0x08];
  __O   uint32_t                       PDMIC_PTCR;         /**< Offset: 0x120 ( /W  32) Transfer Control Register */
  __I   uint32_t                       PDMIC_PTSR;         /**< Offset: 0x124 (R/   32) Transfer Status Register */
} pdmic_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMG55_PDMIC_COMPONENT_H_ */
