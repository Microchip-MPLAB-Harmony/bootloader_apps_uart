/*
 * Component description for MCSPI
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
#ifndef _PIC32CXMTSH_MCSPI_COMPONENT_H_
#define _PIC32CXMTSH_MCSPI_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR MCSPI                                        */
/* ************************************************************************** */

/* -------- MCSPI_CR : (MCSPI Offset: 0x00) ( /W 32) Control Register -------- */
#define MCSPI_CR_SPIEN_Pos                    _UINT32_(0)                                          /* (MCSPI_CR) MCSPI Enable Position */
#define MCSPI_CR_SPIEN_Msk                    (_UINT32_(0x1) << MCSPI_CR_SPIEN_Pos)                /* (MCSPI_CR) MCSPI Enable Mask */
#define MCSPI_CR_SPIEN(value)                 (MCSPI_CR_SPIEN_Msk & (_UINT32_(value) << MCSPI_CR_SPIEN_Pos)) /* Assigment of value for SPIEN in the MCSPI_CR register */
#define MCSPI_CR_SPIDIS_Pos                   _UINT32_(1)                                          /* (MCSPI_CR) MCSPI Disable Position */
#define MCSPI_CR_SPIDIS_Msk                   (_UINT32_(0x1) << MCSPI_CR_SPIDIS_Pos)               /* (MCSPI_CR) MCSPI Disable Mask */
#define MCSPI_CR_SPIDIS(value)                (MCSPI_CR_SPIDIS_Msk & (_UINT32_(value) << MCSPI_CR_SPIDIS_Pos)) /* Assigment of value for SPIDIS in the MCSPI_CR register */
#define MCSPI_CR_SWRST_Pos                    _UINT32_(7)                                          /* (MCSPI_CR) MCSPI Software Reset Position */
#define MCSPI_CR_SWRST_Msk                    (_UINT32_(0x1) << MCSPI_CR_SWRST_Pos)                /* (MCSPI_CR) MCSPI Software Reset Mask */
#define MCSPI_CR_SWRST(value)                 (MCSPI_CR_SWRST_Msk & (_UINT32_(value) << MCSPI_CR_SWRST_Pos)) /* Assigment of value for SWRST in the MCSPI_CR register */
#define MCSPI_CR_REQCLR_Pos                   _UINT32_(12)                                         /* (MCSPI_CR) Request to Clear the Comparison Trigger Position */
#define MCSPI_CR_REQCLR_Msk                   (_UINT32_(0x1) << MCSPI_CR_REQCLR_Pos)               /* (MCSPI_CR) Request to Clear the Comparison Trigger Mask */
#define MCSPI_CR_REQCLR(value)                (MCSPI_CR_REQCLR_Msk & (_UINT32_(value) << MCSPI_CR_REQCLR_Pos)) /* Assigment of value for REQCLR in the MCSPI_CR register */
#define MCSPI_CR_TXFCLR_Pos                   _UINT32_(16)                                         /* (MCSPI_CR) Transmit FIFO Clear Position */
#define MCSPI_CR_TXFCLR_Msk                   (_UINT32_(0x1) << MCSPI_CR_TXFCLR_Pos)               /* (MCSPI_CR) Transmit FIFO Clear Mask */
#define MCSPI_CR_TXFCLR(value)                (MCSPI_CR_TXFCLR_Msk & (_UINT32_(value) << MCSPI_CR_TXFCLR_Pos)) /* Assigment of value for TXFCLR in the MCSPI_CR register */
#define MCSPI_CR_RXFCLR_Pos                   _UINT32_(17)                                         /* (MCSPI_CR) Receive FIFO Clear Position */
#define MCSPI_CR_RXFCLR_Msk                   (_UINT32_(0x1) << MCSPI_CR_RXFCLR_Pos)               /* (MCSPI_CR) Receive FIFO Clear Mask */
#define MCSPI_CR_RXFCLR(value)                (MCSPI_CR_RXFCLR_Msk & (_UINT32_(value) << MCSPI_CR_RXFCLR_Pos)) /* Assigment of value for RXFCLR in the MCSPI_CR register */
#define MCSPI_CR_LASTXFER_Pos                 _UINT32_(24)                                         /* (MCSPI_CR) Last Transfer Position */
#define MCSPI_CR_LASTXFER_Msk                 (_UINT32_(0x1) << MCSPI_CR_LASTXFER_Pos)             /* (MCSPI_CR) Last Transfer Mask */
#define MCSPI_CR_LASTXFER(value)              (MCSPI_CR_LASTXFER_Msk & (_UINT32_(value) << MCSPI_CR_LASTXFER_Pos)) /* Assigment of value for LASTXFER in the MCSPI_CR register */
#define MCSPI_CR_FIFOEN_Pos                   _UINT32_(30)                                         /* (MCSPI_CR) FIFO Enable Position */
#define MCSPI_CR_FIFOEN_Msk                   (_UINT32_(0x1) << MCSPI_CR_FIFOEN_Pos)               /* (MCSPI_CR) FIFO Enable Mask */
#define MCSPI_CR_FIFOEN(value)                (MCSPI_CR_FIFOEN_Msk & (_UINT32_(value) << MCSPI_CR_FIFOEN_Pos)) /* Assigment of value for FIFOEN in the MCSPI_CR register */
#define MCSPI_CR_FIFODIS_Pos                  _UINT32_(31)                                         /* (MCSPI_CR) FIFO Disable Position */
#define MCSPI_CR_FIFODIS_Msk                  (_UINT32_(0x1) << MCSPI_CR_FIFODIS_Pos)              /* (MCSPI_CR) FIFO Disable Mask */
#define MCSPI_CR_FIFODIS(value)               (MCSPI_CR_FIFODIS_Msk & (_UINT32_(value) << MCSPI_CR_FIFODIS_Pos)) /* Assigment of value for FIFODIS in the MCSPI_CR register */
#define MCSPI_CR_Msk                          _UINT32_(0xC1031083)                                 /* (MCSPI_CR) Register Mask  */


/* -------- MCSPI_MR : (MCSPI Offset: 0x04) (R/W 32) Mode Register -------- */
#define MCSPI_MR_MSTR_Pos                     _UINT32_(0)                                          /* (MCSPI_MR) Host/Client Mode Position */
#define MCSPI_MR_MSTR_Msk                     (_UINT32_(0x1) << MCSPI_MR_MSTR_Pos)                 /* (MCSPI_MR) Host/Client Mode Mask */
#define MCSPI_MR_MSTR(value)                  (MCSPI_MR_MSTR_Msk & (_UINT32_(value) << MCSPI_MR_MSTR_Pos)) /* Assigment of value for MSTR in the MCSPI_MR register */
#define MCSPI_MR_PS_Pos                       _UINT32_(1)                                          /* (MCSPI_MR) Peripheral Select Position */
#define MCSPI_MR_PS_Msk                       (_UINT32_(0x1) << MCSPI_MR_PS_Pos)                   /* (MCSPI_MR) Peripheral Select Mask */
#define MCSPI_MR_PS(value)                    (MCSPI_MR_PS_Msk & (_UINT32_(value) << MCSPI_MR_PS_Pos)) /* Assigment of value for PS in the MCSPI_MR register */
#define MCSPI_MR_PCSDEC_Pos                   _UINT32_(2)                                          /* (MCSPI_MR) Chip Select Decode Position */
#define MCSPI_MR_PCSDEC_Msk                   (_UINT32_(0x1) << MCSPI_MR_PCSDEC_Pos)               /* (MCSPI_MR) Chip Select Decode Mask */
#define MCSPI_MR_PCSDEC(value)                (MCSPI_MR_PCSDEC_Msk & (_UINT32_(value) << MCSPI_MR_PCSDEC_Pos)) /* Assigment of value for PCSDEC in the MCSPI_MR register */
#define MCSPI_MR_BRSRCCLK_Pos                 _UINT32_(3)                                          /* (MCSPI_MR) Bit Rate Source Clock Position */
#define MCSPI_MR_BRSRCCLK_Msk                 (_UINT32_(0x1) << MCSPI_MR_BRSRCCLK_Pos)             /* (MCSPI_MR) Bit Rate Source Clock Mask */
#define MCSPI_MR_BRSRCCLK(value)              (MCSPI_MR_BRSRCCLK_Msk & (_UINT32_(value) << MCSPI_MR_BRSRCCLK_Pos)) /* Assigment of value for BRSRCCLK in the MCSPI_MR register */
#define   MCSPI_MR_BRSRCCLK_PERIPH_CLK_Val    _UINT32_(0x0)                                        /* (MCSPI_MR) The peripheral clock is the source clock for the bit rate generation.  */
#define   MCSPI_MR_BRSRCCLK_GCLK_Val          _UINT32_(0x1)                                        /* (MCSPI_MR) PMC GCLK is the source clock for the bit rate generation, thus the bit rate can be independent of the core/peripheral clock.  */
#define MCSPI_MR_BRSRCCLK_PERIPH_CLK          (MCSPI_MR_BRSRCCLK_PERIPH_CLK_Val << MCSPI_MR_BRSRCCLK_Pos) /* (MCSPI_MR) The peripheral clock is the source clock for the bit rate generation. Position  */
#define MCSPI_MR_BRSRCCLK_GCLK                (MCSPI_MR_BRSRCCLK_GCLK_Val << MCSPI_MR_BRSRCCLK_Pos) /* (MCSPI_MR) PMC GCLK is the source clock for the bit rate generation, thus the bit rate can be independent of the core/peripheral clock. Position  */
#define MCSPI_MR_MODFDIS_Pos                  _UINT32_(4)                                          /* (MCSPI_MR) Mode Fault Detection Position */
#define MCSPI_MR_MODFDIS_Msk                  (_UINT32_(0x1) << MCSPI_MR_MODFDIS_Pos)              /* (MCSPI_MR) Mode Fault Detection Mask */
#define MCSPI_MR_MODFDIS(value)               (MCSPI_MR_MODFDIS_Msk & (_UINT32_(value) << MCSPI_MR_MODFDIS_Pos)) /* Assigment of value for MODFDIS in the MCSPI_MR register */
#define MCSPI_MR_WDRBT_Pos                    _UINT32_(5)                                          /* (MCSPI_MR) Wait for Data Read Before Transfer Position */
#define MCSPI_MR_WDRBT_Msk                    (_UINT32_(0x1) << MCSPI_MR_WDRBT_Pos)                /* (MCSPI_MR) Wait for Data Read Before Transfer Mask */
#define MCSPI_MR_WDRBT(value)                 (MCSPI_MR_WDRBT_Msk & (_UINT32_(value) << MCSPI_MR_WDRBT_Pos)) /* Assigment of value for WDRBT in the MCSPI_MR register */
#define MCSPI_MR_CRCEN_Pos                    _UINT32_(6)                                          /* (MCSPI_MR) CRC Enable Position */
#define MCSPI_MR_CRCEN_Msk                    (_UINT32_(0x1) << MCSPI_MR_CRCEN_Pos)                /* (MCSPI_MR) CRC Enable Mask */
#define MCSPI_MR_CRCEN(value)                 (MCSPI_MR_CRCEN_Msk & (_UINT32_(value) << MCSPI_MR_CRCEN_Pos)) /* Assigment of value for CRCEN in the MCSPI_MR register */
#define MCSPI_MR_LLB_Pos                      _UINT32_(7)                                          /* (MCSPI_MR) Local Loopback Enable Position */
#define MCSPI_MR_LLB_Msk                      (_UINT32_(0x1) << MCSPI_MR_LLB_Pos)                  /* (MCSPI_MR) Local Loopback Enable Mask */
#define MCSPI_MR_LLB(value)                   (MCSPI_MR_LLB_Msk & (_UINT32_(value) << MCSPI_MR_LLB_Pos)) /* Assigment of value for LLB in the MCSPI_MR register */
#define MCSPI_MR_LSBHALF_Pos                  _UINT32_(8)                                          /* (MCSPI_MR) LSB Timing Selection Position */
#define MCSPI_MR_LSBHALF_Msk                  (_UINT32_(0x1) << MCSPI_MR_LSBHALF_Pos)              /* (MCSPI_MR) LSB Timing Selection Mask */
#define MCSPI_MR_LSBHALF(value)               (MCSPI_MR_LSBHALF_Msk & (_UINT32_(value) << MCSPI_MR_LSBHALF_Pos)) /* Assigment of value for LSBHALF in the MCSPI_MR register */
#define MCSPI_MR_TMCSMUX_Pos                  _UINT32_(9)                                          /* (MCSPI_MR) Two-pin MOSI Chip Select External Multiplexing Mode Position */
#define MCSPI_MR_TMCSMUX_Msk                  (_UINT32_(0x1) << MCSPI_MR_TMCSMUX_Pos)              /* (MCSPI_MR) Two-pin MOSI Chip Select External Multiplexing Mode Mask */
#define MCSPI_MR_TMCSMUX(value)               (MCSPI_MR_TMCSMUX_Msk & (_UINT32_(value) << MCSPI_MR_TMCSMUX_Pos)) /* Assigment of value for TMCSMUX in the MCSPI_MR register */
#define   MCSPI_MR_TMCSMUX_DISABLED_Val       _UINT32_(0x0)                                        /* (MCSPI_MR) External MOSI lines multiplexing is not required via Chip Select lines. When MCSPI_MR.TPMEN=0, MCSPI_TWMR.MIL=1 or MCSPI_TWMR.CSM=0, TMCSMUX must be written to 0.  */
#define   MCSPI_MR_TMCSMUX_ENABLED_Val        _UINT32_(0x1)                                        /* (MCSPI_MR) Enables external multiplexing of MOSI lines via Chip Select lines. When MCSPI_MR.TPMEN=1, TMCSMUX must be written to 1 if MCSPI_TWMR.MIL=0 and MCSPI_TWMR.CSM=1.  */
#define MCSPI_MR_TMCSMUX_DISABLED             (MCSPI_MR_TMCSMUX_DISABLED_Val << MCSPI_MR_TMCSMUX_Pos) /* (MCSPI_MR) External MOSI lines multiplexing is not required via Chip Select lines. When MCSPI_MR.TPMEN=0, MCSPI_TWMR.MIL=1 or MCSPI_TWMR.CSM=0, TMCSMUX must be written to 0. Position  */
#define MCSPI_MR_TMCSMUX_ENABLED              (MCSPI_MR_TMCSMUX_ENABLED_Val << MCSPI_MR_TMCSMUX_Pos) /* (MCSPI_MR) Enables external multiplexing of MOSI lines via Chip Select lines. When MCSPI_MR.TPMEN=1, TMCSMUX must be written to 1 if MCSPI_TWMR.MIL=0 and MCSPI_TWMR.CSM=1. Position  */
#define MCSPI_MR_CMPMODE_Pos                  _UINT32_(12)                                         /* (MCSPI_MR) Comparison Mode Position */
#define MCSPI_MR_CMPMODE_Msk                  (_UINT32_(0x1) << MCSPI_MR_CMPMODE_Pos)              /* (MCSPI_MR) Comparison Mode Mask */
#define MCSPI_MR_CMPMODE(value)               (MCSPI_MR_CMPMODE_Msk & (_UINT32_(value) << MCSPI_MR_CMPMODE_Pos)) /* Assigment of value for CMPMODE in the MCSPI_MR register */
#define   MCSPI_MR_CMPMODE_FLAG_ONLY_Val      _UINT32_(0x0)                                        /* (MCSPI_MR) Any character is received and comparison function drives CMP flag.  */
#define   MCSPI_MR_CMPMODE_START_CONDITION_Val _UINT32_(0x1)                                        /* (MCSPI_MR) Comparison condition must be met to start reception of all incoming characters until REQCLR is set.  */
#define MCSPI_MR_CMPMODE_FLAG_ONLY            (MCSPI_MR_CMPMODE_FLAG_ONLY_Val << MCSPI_MR_CMPMODE_Pos) /* (MCSPI_MR) Any character is received and comparison function drives CMP flag. Position  */
#define MCSPI_MR_CMPMODE_START_CONDITION      (MCSPI_MR_CMPMODE_START_CONDITION_Val << MCSPI_MR_CMPMODE_Pos) /* (MCSPI_MR) Comparison condition must be met to start reception of all incoming characters until REQCLR is set. Position  */
#define MCSPI_MR_TPMEN_Pos                    _UINT32_(13)                                         /* (MCSPI_MR) Two-Pin Mode Enable Position */
#define MCSPI_MR_TPMEN_Msk                    (_UINT32_(0x1) << MCSPI_MR_TPMEN_Pos)                /* (MCSPI_MR) Two-Pin Mode Enable Mask */
#define MCSPI_MR_TPMEN(value)                 (MCSPI_MR_TPMEN_Msk & (_UINT32_(value) << MCSPI_MR_TPMEN_Pos)) /* Assigment of value for TPMEN in the MCSPI_MR register */
#define MCSPI_MR_CSIE_Pos                     _UINT32_(14)                                         /* (MCSPI_MR) Chip Select Inversion Enable Position */
#define MCSPI_MR_CSIE_Msk                     (_UINT32_(0x1) << MCSPI_MR_CSIE_Pos)                 /* (MCSPI_MR) Chip Select Inversion Enable Mask */
#define MCSPI_MR_CSIE(value)                  (MCSPI_MR_CSIE_Msk & (_UINT32_(value) << MCSPI_MR_CSIE_Pos)) /* Assigment of value for CSIE in the MCSPI_MR register */
#define MCSPI_MR_MOSIIE_Pos                   _UINT32_(15)                                         /* (MCSPI_MR) MOSI Inversion Enable Position */
#define MCSPI_MR_MOSIIE_Msk                   (_UINT32_(0x1) << MCSPI_MR_MOSIIE_Pos)               /* (MCSPI_MR) MOSI Inversion Enable Mask */
#define MCSPI_MR_MOSIIE(value)                (MCSPI_MR_MOSIIE_Msk & (_UINT32_(value) << MCSPI_MR_MOSIIE_Pos)) /* Assigment of value for MOSIIE in the MCSPI_MR register */
#define MCSPI_MR_PCS_Pos                      _UINT32_(16)                                         /* (MCSPI_MR) Peripheral Chip Select Position */
#define MCSPI_MR_PCS_Msk                      (_UINT32_(0xF) << MCSPI_MR_PCS_Pos)                  /* (MCSPI_MR) Peripheral Chip Select Mask */
#define MCSPI_MR_PCS(value)                   (MCSPI_MR_PCS_Msk & (_UINT32_(value) << MCSPI_MR_PCS_Pos)) /* Assigment of value for PCS in the MCSPI_MR register */
#define MCSPI_MR_DLYBCS_Pos                   _UINT32_(24)                                         /* (MCSPI_MR) Delay Between Chip Selects Position */
#define MCSPI_MR_DLYBCS_Msk                   (_UINT32_(0xFF) << MCSPI_MR_DLYBCS_Pos)              /* (MCSPI_MR) Delay Between Chip Selects Mask */
#define MCSPI_MR_DLYBCS(value)                (MCSPI_MR_DLYBCS_Msk & (_UINT32_(value) << MCSPI_MR_DLYBCS_Pos)) /* Assigment of value for DLYBCS in the MCSPI_MR register */
#define MCSPI_MR_Msk                          _UINT32_(0xFF0FF3FF)                                 /* (MCSPI_MR) Register Mask  */


/* -------- MCSPI_RDR : (MCSPI Offset: 0x08) ( R/ 32) Receive Data Register -------- */
#define MCSPI_RDR_RD_Pos                      _UINT32_(0)                                          /* (MCSPI_RDR) Receive Data Position */
#define MCSPI_RDR_RD_Msk                      (_UINT32_(0xFFFF) << MCSPI_RDR_RD_Pos)               /* (MCSPI_RDR) Receive Data Mask */
#define MCSPI_RDR_RD(value)                   (MCSPI_RDR_RD_Msk & (_UINT32_(value) << MCSPI_RDR_RD_Pos)) /* Assigment of value for RD in the MCSPI_RDR register */
#define MCSPI_RDR_PCS_Pos                     _UINT32_(16)                                         /* (MCSPI_RDR) Peripheral Chip Select Position */
#define MCSPI_RDR_PCS_Msk                     (_UINT32_(0xF) << MCSPI_RDR_PCS_Pos)                 /* (MCSPI_RDR) Peripheral Chip Select Mask */
#define MCSPI_RDR_PCS(value)                  (MCSPI_RDR_PCS_Msk & (_UINT32_(value) << MCSPI_RDR_PCS_Pos)) /* Assigment of value for PCS in the MCSPI_RDR register */
#define MCSPI_RDR_Msk                         _UINT32_(0x000FFFFF)                                 /* (MCSPI_RDR) Register Mask  */

/* FIFO_MULTI_DATA_8 mode */
#define MCSPI_RDR_FIFO_MULTI_DATA_8_RD0_Pos   _UINT32_(0)                                          /* (MCSPI_RDR) Receive Data Position */
#define MCSPI_RDR_FIFO_MULTI_DATA_8_RD0_Msk   (_UINT32_(0xFF) << MCSPI_RDR_FIFO_MULTI_DATA_8_RD0_Pos) /* (MCSPI_RDR) Receive Data Mask */
#define MCSPI_RDR_FIFO_MULTI_DATA_8_RD0(value) (MCSPI_RDR_FIFO_MULTI_DATA_8_RD0_Msk & (_UINT32_(value) << MCSPI_RDR_FIFO_MULTI_DATA_8_RD0_Pos))
#define MCSPI_RDR_FIFO_MULTI_DATA_8_RD1_Pos   _UINT32_(8)                                          /* (MCSPI_RDR) Receive Data Position */
#define MCSPI_RDR_FIFO_MULTI_DATA_8_RD1_Msk   (_UINT32_(0xFF) << MCSPI_RDR_FIFO_MULTI_DATA_8_RD1_Pos) /* (MCSPI_RDR) Receive Data Mask */
#define MCSPI_RDR_FIFO_MULTI_DATA_8_RD1(value) (MCSPI_RDR_FIFO_MULTI_DATA_8_RD1_Msk & (_UINT32_(value) << MCSPI_RDR_FIFO_MULTI_DATA_8_RD1_Pos))
#define MCSPI_RDR_FIFO_MULTI_DATA_8_RD2_Pos   _UINT32_(16)                                         /* (MCSPI_RDR) Receive Data Position */
#define MCSPI_RDR_FIFO_MULTI_DATA_8_RD2_Msk   (_UINT32_(0xFF) << MCSPI_RDR_FIFO_MULTI_DATA_8_RD2_Pos) /* (MCSPI_RDR) Receive Data Mask */
#define MCSPI_RDR_FIFO_MULTI_DATA_8_RD2(value) (MCSPI_RDR_FIFO_MULTI_DATA_8_RD2_Msk & (_UINT32_(value) << MCSPI_RDR_FIFO_MULTI_DATA_8_RD2_Pos))
#define MCSPI_RDR_FIFO_MULTI_DATA_8_RD3_Pos   _UINT32_(24)                                         /* (MCSPI_RDR) Receive Data Position */
#define MCSPI_RDR_FIFO_MULTI_DATA_8_RD3_Msk   (_UINT32_(0xFF) << MCSPI_RDR_FIFO_MULTI_DATA_8_RD3_Pos) /* (MCSPI_RDR) Receive Data Mask */
#define MCSPI_RDR_FIFO_MULTI_DATA_8_RD3(value) (MCSPI_RDR_FIFO_MULTI_DATA_8_RD3_Msk & (_UINT32_(value) << MCSPI_RDR_FIFO_MULTI_DATA_8_RD3_Pos))
#define MCSPI_RDR_FIFO_MULTI_DATA_8_Msk       _UINT32_(0xFFFFFFFF)                                  /* (MCSPI_RDR_FIFO_MULTI_DATA_8) Register Mask  */

/* FIFO_MULTI_DATA_16 mode */
#define MCSPI_RDR_FIFO_MULTI_DATA_16_RD0_Pos  _UINT32_(0)                                          /* (MCSPI_RDR) Receive Data Position */
#define MCSPI_RDR_FIFO_MULTI_DATA_16_RD0_Msk  (_UINT32_(0xFFFF) << MCSPI_RDR_FIFO_MULTI_DATA_16_RD0_Pos) /* (MCSPI_RDR) Receive Data Mask */
#define MCSPI_RDR_FIFO_MULTI_DATA_16_RD0(value) (MCSPI_RDR_FIFO_MULTI_DATA_16_RD0_Msk & (_UINT32_(value) << MCSPI_RDR_FIFO_MULTI_DATA_16_RD0_Pos))
#define MCSPI_RDR_FIFO_MULTI_DATA_16_RD1_Pos  _UINT32_(16)                                         /* (MCSPI_RDR) Receive Data Position */
#define MCSPI_RDR_FIFO_MULTI_DATA_16_RD1_Msk  (_UINT32_(0xFFFF) << MCSPI_RDR_FIFO_MULTI_DATA_16_RD1_Pos) /* (MCSPI_RDR) Receive Data Mask */
#define MCSPI_RDR_FIFO_MULTI_DATA_16_RD1(value) (MCSPI_RDR_FIFO_MULTI_DATA_16_RD1_Msk & (_UINT32_(value) << MCSPI_RDR_FIFO_MULTI_DATA_16_RD1_Pos))
#define MCSPI_RDR_FIFO_MULTI_DATA_16_Msk      _UINT32_(0xFFFFFFFF)                                  /* (MCSPI_RDR_FIFO_MULTI_DATA_16) Register Mask  */


/* -------- MCSPI_TDR : (MCSPI Offset: 0x0C) ( /W 32) Transmit Data Register -------- */
#define MCSPI_TDR_TD_Pos                      _UINT32_(0)                                          /* (MCSPI_TDR) Transmit Data Position */
#define MCSPI_TDR_TD_Msk                      (_UINT32_(0xFFFF) << MCSPI_TDR_TD_Pos)               /* (MCSPI_TDR) Transmit Data Mask */
#define MCSPI_TDR_TD(value)                   (MCSPI_TDR_TD_Msk & (_UINT32_(value) << MCSPI_TDR_TD_Pos)) /* Assigment of value for TD in the MCSPI_TDR register */
#define MCSPI_TDR_PCS_Pos                     _UINT32_(16)                                         /* (MCSPI_TDR) Peripheral Chip Select Position */
#define MCSPI_TDR_PCS_Msk                     (_UINT32_(0xF) << MCSPI_TDR_PCS_Pos)                 /* (MCSPI_TDR) Peripheral Chip Select Mask */
#define MCSPI_TDR_PCS(value)                  (MCSPI_TDR_PCS_Msk & (_UINT32_(value) << MCSPI_TDR_PCS_Pos)) /* Assigment of value for PCS in the MCSPI_TDR register */
#define MCSPI_TDR_LASTXFER_Pos                _UINT32_(24)                                         /* (MCSPI_TDR) Last Transfer Position */
#define MCSPI_TDR_LASTXFER_Msk                (_UINT32_(0x1) << MCSPI_TDR_LASTXFER_Pos)            /* (MCSPI_TDR) Last Transfer Mask */
#define MCSPI_TDR_LASTXFER(value)             (MCSPI_TDR_LASTXFER_Msk & (_UINT32_(value) << MCSPI_TDR_LASTXFER_Pos)) /* Assigment of value for LASTXFER in the MCSPI_TDR register */
#define MCSPI_TDR_Msk                         _UINT32_(0x010FFFFF)                                 /* (MCSPI_TDR) Register Mask  */

/* FIFO_MULTI_DATA mode */
#define MCSPI_TDR_FIFO_MULTI_DATA_TD0_Pos     _UINT32_(0)                                          /* (MCSPI_TDR) Transmit Data Position */
#define MCSPI_TDR_FIFO_MULTI_DATA_TD0_Msk     (_UINT32_(0xFFFF) << MCSPI_TDR_FIFO_MULTI_DATA_TD0_Pos) /* (MCSPI_TDR) Transmit Data Mask */
#define MCSPI_TDR_FIFO_MULTI_DATA_TD0(value)  (MCSPI_TDR_FIFO_MULTI_DATA_TD0_Msk & (_UINT32_(value) << MCSPI_TDR_FIFO_MULTI_DATA_TD0_Pos))
#define MCSPI_TDR_FIFO_MULTI_DATA_TD1_Pos     _UINT32_(16)                                         /* (MCSPI_TDR) Transmit Data Position */
#define MCSPI_TDR_FIFO_MULTI_DATA_TD1_Msk     (_UINT32_(0xFFFF) << MCSPI_TDR_FIFO_MULTI_DATA_TD1_Pos) /* (MCSPI_TDR) Transmit Data Mask */
#define MCSPI_TDR_FIFO_MULTI_DATA_TD1(value)  (MCSPI_TDR_FIFO_MULTI_DATA_TD1_Msk & (_UINT32_(value) << MCSPI_TDR_FIFO_MULTI_DATA_TD1_Pos))
#define MCSPI_TDR_FIFO_MULTI_DATA_Msk         _UINT32_(0xFFFFFFFF)                                  /* (MCSPI_TDR_FIFO_MULTI_DATA) Register Mask  */


/* -------- MCSPI_SR : (MCSPI Offset: 0x10) ( R/ 32) Status Register -------- */
#define MCSPI_SR_RDRF_Pos                     _UINT32_(0)                                          /* (MCSPI_SR) Receive Data Register Full (cleared by reading MCSPI_RDR) Position */
#define MCSPI_SR_RDRF_Msk                     (_UINT32_(0x1) << MCSPI_SR_RDRF_Pos)                 /* (MCSPI_SR) Receive Data Register Full (cleared by reading MCSPI_RDR) Mask */
#define MCSPI_SR_RDRF(value)                  (MCSPI_SR_RDRF_Msk & (_UINT32_(value) << MCSPI_SR_RDRF_Pos)) /* Assigment of value for RDRF in the MCSPI_SR register */
#define MCSPI_SR_TDRE_Pos                     _UINT32_(1)                                          /* (MCSPI_SR) Transmit Data Register Empty (cleared by writing MCSPI_TDR) Position */
#define MCSPI_SR_TDRE_Msk                     (_UINT32_(0x1) << MCSPI_SR_TDRE_Pos)                 /* (MCSPI_SR) Transmit Data Register Empty (cleared by writing MCSPI_TDR) Mask */
#define MCSPI_SR_TDRE(value)                  (MCSPI_SR_TDRE_Msk & (_UINT32_(value) << MCSPI_SR_TDRE_Pos)) /* Assigment of value for TDRE in the MCSPI_SR register */
#define MCSPI_SR_MODF_Pos                     _UINT32_(2)                                          /* (MCSPI_SR) Mode Fault Error (cleared on read) Position */
#define MCSPI_SR_MODF_Msk                     (_UINT32_(0x1) << MCSPI_SR_MODF_Pos)                 /* (MCSPI_SR) Mode Fault Error (cleared on read) Mask */
#define MCSPI_SR_MODF(value)                  (MCSPI_SR_MODF_Msk & (_UINT32_(value) << MCSPI_SR_MODF_Pos)) /* Assigment of value for MODF in the MCSPI_SR register */
#define MCSPI_SR_OVRES_Pos                    _UINT32_(3)                                          /* (MCSPI_SR) Overrun Error Status (cleared on read) Position */
#define MCSPI_SR_OVRES_Msk                    (_UINT32_(0x1) << MCSPI_SR_OVRES_Pos)                /* (MCSPI_SR) Overrun Error Status (cleared on read) Mask */
#define MCSPI_SR_OVRES(value)                 (MCSPI_SR_OVRES_Msk & (_UINT32_(value) << MCSPI_SR_OVRES_Pos)) /* Assigment of value for OVRES in the MCSPI_SR register */
#define MCSPI_SR_ENDRX_Pos                    _UINT32_(4)                                          /* (MCSPI_SR) End of RX Buffer (cleared by writing MCSPI_RCR or MCSPI_RNCR) Position */
#define MCSPI_SR_ENDRX_Msk                    (_UINT32_(0x1) << MCSPI_SR_ENDRX_Pos)                /* (MCSPI_SR) End of RX Buffer (cleared by writing MCSPI_RCR or MCSPI_RNCR) Mask */
#define MCSPI_SR_ENDRX(value)                 (MCSPI_SR_ENDRX_Msk & (_UINT32_(value) << MCSPI_SR_ENDRX_Pos)) /* Assigment of value for ENDRX in the MCSPI_SR register */
#define MCSPI_SR_ENDTX_Pos                    _UINT32_(5)                                          /* (MCSPI_SR) End of TX Buffer (cleared by writing MCSPI_TCR or MCSPI_TNCR) Position */
#define MCSPI_SR_ENDTX_Msk                    (_UINT32_(0x1) << MCSPI_SR_ENDTX_Pos)                /* (MCSPI_SR) End of TX Buffer (cleared by writing MCSPI_TCR or MCSPI_TNCR) Mask */
#define MCSPI_SR_ENDTX(value)                 (MCSPI_SR_ENDTX_Msk & (_UINT32_(value) << MCSPI_SR_ENDTX_Pos)) /* Assigment of value for ENDTX in the MCSPI_SR register */
#define MCSPI_SR_RXBUFF_Pos                   _UINT32_(6)                                          /* (MCSPI_SR) RX Buffer Full (cleared by writing MCSPI_RCR or MCSPI_RNCR) Position */
#define MCSPI_SR_RXBUFF_Msk                   (_UINT32_(0x1) << MCSPI_SR_RXBUFF_Pos)               /* (MCSPI_SR) RX Buffer Full (cleared by writing MCSPI_RCR or MCSPI_RNCR) Mask */
#define MCSPI_SR_RXBUFF(value)                (MCSPI_SR_RXBUFF_Msk & (_UINT32_(value) << MCSPI_SR_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the MCSPI_SR register */
#define MCSPI_SR_TXBUFE_Pos                   _UINT32_(7)                                          /* (MCSPI_SR) TX Buffer Empty (cleared by writing MCSPI_TCR or MCSPI_TNCR) Position */
#define MCSPI_SR_TXBUFE_Msk                   (_UINT32_(0x1) << MCSPI_SR_TXBUFE_Pos)               /* (MCSPI_SR) TX Buffer Empty (cleared by writing MCSPI_TCR or MCSPI_TNCR) Mask */
#define MCSPI_SR_TXBUFE(value)                (MCSPI_SR_TXBUFE_Msk & (_UINT32_(value) << MCSPI_SR_TXBUFE_Pos)) /* Assigment of value for TXBUFE in the MCSPI_SR register */
#define MCSPI_SR_NSSR_Pos                     _UINT32_(8)                                          /* (MCSPI_SR) NSS Rising (cleared on read) Position */
#define MCSPI_SR_NSSR_Msk                     (_UINT32_(0x1) << MCSPI_SR_NSSR_Pos)                 /* (MCSPI_SR) NSS Rising (cleared on read) Mask */
#define MCSPI_SR_NSSR(value)                  (MCSPI_SR_NSSR_Msk & (_UINT32_(value) << MCSPI_SR_NSSR_Pos)) /* Assigment of value for NSSR in the MCSPI_SR register */
#define MCSPI_SR_TXEMPTY_Pos                  _UINT32_(9)                                          /* (MCSPI_SR) Transmission Registers Empty (cleared by writing MCSPI_TDR) Position */
#define MCSPI_SR_TXEMPTY_Msk                  (_UINT32_(0x1) << MCSPI_SR_TXEMPTY_Pos)              /* (MCSPI_SR) Transmission Registers Empty (cleared by writing MCSPI_TDR) Mask */
#define MCSPI_SR_TXEMPTY(value)               (MCSPI_SR_TXEMPTY_Msk & (_UINT32_(value) << MCSPI_SR_TXEMPTY_Pos)) /* Assigment of value for TXEMPTY in the MCSPI_SR register */
#define MCSPI_SR_UNDES_Pos                    _UINT32_(10)                                         /* (MCSPI_SR) Underrun Error Status (Client mode only) (cleared on read) Position */
#define MCSPI_SR_UNDES_Msk                    (_UINT32_(0x1) << MCSPI_SR_UNDES_Pos)                /* (MCSPI_SR) Underrun Error Status (Client mode only) (cleared on read) Mask */
#define MCSPI_SR_UNDES(value)                 (MCSPI_SR_UNDES_Msk & (_UINT32_(value) << MCSPI_SR_UNDES_Pos)) /* Assigment of value for UNDES in the MCSPI_SR register */
#define MCSPI_SR_CMP_Pos                      _UINT32_(11)                                         /* (MCSPI_SR) Comparison Status (cleared on read) Position */
#define MCSPI_SR_CMP_Msk                      (_UINT32_(0x1) << MCSPI_SR_CMP_Pos)                  /* (MCSPI_SR) Comparison Status (cleared on read) Mask */
#define MCSPI_SR_CMP(value)                   (MCSPI_SR_CMP_Msk & (_UINT32_(value) << MCSPI_SR_CMP_Pos)) /* Assigment of value for CMP in the MCSPI_SR register */
#define MCSPI_SR_SFERR_Pos                    _UINT32_(12)                                         /* (MCSPI_SR) Client Frame Error (cleared on read) Position */
#define MCSPI_SR_SFERR_Msk                    (_UINT32_(0x1) << MCSPI_SR_SFERR_Pos)                /* (MCSPI_SR) Client Frame Error (cleared on read) Mask */
#define MCSPI_SR_SFERR(value)                 (MCSPI_SR_SFERR_Msk & (_UINT32_(value) << MCSPI_SR_SFERR_Pos)) /* Assigment of value for SFERR in the MCSPI_SR register */
#define MCSPI_SR_CRCERR_Pos                   _UINT32_(13)                                         /* (MCSPI_SR) CRC Error (cleared on read) Position */
#define MCSPI_SR_CRCERR_Msk                   (_UINT32_(0x1) << MCSPI_SR_CRCERR_Pos)               /* (MCSPI_SR) CRC Error (cleared on read) Mask */
#define MCSPI_SR_CRCERR(value)                (MCSPI_SR_CRCERR_Msk & (_UINT32_(value) << MCSPI_SR_CRCERR_Pos)) /* Assigment of value for CRCERR in the MCSPI_SR register */
#define MCSPI_SR_SPIENS_Pos                   _UINT32_(16)                                         /* (MCSPI_SR) MCSPI Enable Status Position */
#define MCSPI_SR_SPIENS_Msk                   (_UINT32_(0x1) << MCSPI_SR_SPIENS_Pos)               /* (MCSPI_SR) MCSPI Enable Status Mask */
#define MCSPI_SR_SPIENS(value)                (MCSPI_SR_SPIENS_Msk & (_UINT32_(value) << MCSPI_SR_SPIENS_Pos)) /* Assigment of value for SPIENS in the MCSPI_SR register */
#define MCSPI_SR_TXFEF_Pos                    _UINT32_(24)                                         /* (MCSPI_SR) Transmit FIFO Empty Flag (cleared on read) Position */
#define MCSPI_SR_TXFEF_Msk                    (_UINT32_(0x1) << MCSPI_SR_TXFEF_Pos)                /* (MCSPI_SR) Transmit FIFO Empty Flag (cleared on read) Mask */
#define MCSPI_SR_TXFEF(value)                 (MCSPI_SR_TXFEF_Msk & (_UINT32_(value) << MCSPI_SR_TXFEF_Pos)) /* Assigment of value for TXFEF in the MCSPI_SR register */
#define MCSPI_SR_TXFFF_Pos                    _UINT32_(25)                                         /* (MCSPI_SR) Transmit FIFO Full Flag (cleared on read) Position */
#define MCSPI_SR_TXFFF_Msk                    (_UINT32_(0x1) << MCSPI_SR_TXFFF_Pos)                /* (MCSPI_SR) Transmit FIFO Full Flag (cleared on read) Mask */
#define MCSPI_SR_TXFFF(value)                 (MCSPI_SR_TXFFF_Msk & (_UINT32_(value) << MCSPI_SR_TXFFF_Pos)) /* Assigment of value for TXFFF in the MCSPI_SR register */
#define MCSPI_SR_TXFTHF_Pos                   _UINT32_(26)                                         /* (MCSPI_SR) Transmit FIFO Threshold Flag (cleared on read) Position */
#define MCSPI_SR_TXFTHF_Msk                   (_UINT32_(0x1) << MCSPI_SR_TXFTHF_Pos)               /* (MCSPI_SR) Transmit FIFO Threshold Flag (cleared on read) Mask */
#define MCSPI_SR_TXFTHF(value)                (MCSPI_SR_TXFTHF_Msk & (_UINT32_(value) << MCSPI_SR_TXFTHF_Pos)) /* Assigment of value for TXFTHF in the MCSPI_SR register */
#define MCSPI_SR_RXFEF_Pos                    _UINT32_(27)                                         /* (MCSPI_SR) Receive FIFO Empty Flag Position */
#define MCSPI_SR_RXFEF_Msk                    (_UINT32_(0x1) << MCSPI_SR_RXFEF_Pos)                /* (MCSPI_SR) Receive FIFO Empty Flag Mask */
#define MCSPI_SR_RXFEF(value)                 (MCSPI_SR_RXFEF_Msk & (_UINT32_(value) << MCSPI_SR_RXFEF_Pos)) /* Assigment of value for RXFEF in the MCSPI_SR register */
#define MCSPI_SR_RXFFF_Pos                    _UINT32_(28)                                         /* (MCSPI_SR) Receive FIFO Full Flag Position */
#define MCSPI_SR_RXFFF_Msk                    (_UINT32_(0x1) << MCSPI_SR_RXFFF_Pos)                /* (MCSPI_SR) Receive FIFO Full Flag Mask */
#define MCSPI_SR_RXFFF(value)                 (MCSPI_SR_RXFFF_Msk & (_UINT32_(value) << MCSPI_SR_RXFFF_Pos)) /* Assigment of value for RXFFF in the MCSPI_SR register */
#define MCSPI_SR_RXFTHF_Pos                   _UINT32_(29)                                         /* (MCSPI_SR) Receive FIFO Threshold Flag Position */
#define MCSPI_SR_RXFTHF_Msk                   (_UINT32_(0x1) << MCSPI_SR_RXFTHF_Pos)               /* (MCSPI_SR) Receive FIFO Threshold Flag Mask */
#define MCSPI_SR_RXFTHF(value)                (MCSPI_SR_RXFTHF_Msk & (_UINT32_(value) << MCSPI_SR_RXFTHF_Pos)) /* Assigment of value for RXFTHF in the MCSPI_SR register */
#define MCSPI_SR_TXFPTEF_Pos                  _UINT32_(30)                                         /* (MCSPI_SR) Transmit FIFO Pointer Error Flag Position */
#define MCSPI_SR_TXFPTEF_Msk                  (_UINT32_(0x1) << MCSPI_SR_TXFPTEF_Pos)              /* (MCSPI_SR) Transmit FIFO Pointer Error Flag Mask */
#define MCSPI_SR_TXFPTEF(value)               (MCSPI_SR_TXFPTEF_Msk & (_UINT32_(value) << MCSPI_SR_TXFPTEF_Pos)) /* Assigment of value for TXFPTEF in the MCSPI_SR register */
#define MCSPI_SR_RXFPTEF_Pos                  _UINT32_(31)                                         /* (MCSPI_SR) Receive FIFO Pointer Error Flag Position */
#define MCSPI_SR_RXFPTEF_Msk                  (_UINT32_(0x1) << MCSPI_SR_RXFPTEF_Pos)              /* (MCSPI_SR) Receive FIFO Pointer Error Flag Mask */
#define MCSPI_SR_RXFPTEF(value)               (MCSPI_SR_RXFPTEF_Msk & (_UINT32_(value) << MCSPI_SR_RXFPTEF_Pos)) /* Assigment of value for RXFPTEF in the MCSPI_SR register */
#define MCSPI_SR_Msk                          _UINT32_(0xFF013FFF)                                 /* (MCSPI_SR) Register Mask  */


/* -------- MCSPI_IER : (MCSPI Offset: 0x14) ( /W 32) Interrupt Enable Register -------- */
#define MCSPI_IER_RDRF_Pos                    _UINT32_(0)                                          /* (MCSPI_IER) Receive Data Register Full Interrupt Enable Position */
#define MCSPI_IER_RDRF_Msk                    (_UINT32_(0x1) << MCSPI_IER_RDRF_Pos)                /* (MCSPI_IER) Receive Data Register Full Interrupt Enable Mask */
#define MCSPI_IER_RDRF(value)                 (MCSPI_IER_RDRF_Msk & (_UINT32_(value) << MCSPI_IER_RDRF_Pos)) /* Assigment of value for RDRF in the MCSPI_IER register */
#define MCSPI_IER_TDRE_Pos                    _UINT32_(1)                                          /* (MCSPI_IER) MCSPI Transmit Data Register Empty Interrupt Enable Position */
#define MCSPI_IER_TDRE_Msk                    (_UINT32_(0x1) << MCSPI_IER_TDRE_Pos)                /* (MCSPI_IER) MCSPI Transmit Data Register Empty Interrupt Enable Mask */
#define MCSPI_IER_TDRE(value)                 (MCSPI_IER_TDRE_Msk & (_UINT32_(value) << MCSPI_IER_TDRE_Pos)) /* Assigment of value for TDRE in the MCSPI_IER register */
#define MCSPI_IER_MODF_Pos                    _UINT32_(2)                                          /* (MCSPI_IER) Mode Fault Error Interrupt Enable Position */
#define MCSPI_IER_MODF_Msk                    (_UINT32_(0x1) << MCSPI_IER_MODF_Pos)                /* (MCSPI_IER) Mode Fault Error Interrupt Enable Mask */
#define MCSPI_IER_MODF(value)                 (MCSPI_IER_MODF_Msk & (_UINT32_(value) << MCSPI_IER_MODF_Pos)) /* Assigment of value for MODF in the MCSPI_IER register */
#define MCSPI_IER_OVRES_Pos                   _UINT32_(3)                                          /* (MCSPI_IER) Overrun Error Interrupt Enable Position */
#define MCSPI_IER_OVRES_Msk                   (_UINT32_(0x1) << MCSPI_IER_OVRES_Pos)               /* (MCSPI_IER) Overrun Error Interrupt Enable Mask */
#define MCSPI_IER_OVRES(value)                (MCSPI_IER_OVRES_Msk & (_UINT32_(value) << MCSPI_IER_OVRES_Pos)) /* Assigment of value for OVRES in the MCSPI_IER register */
#define MCSPI_IER_ENDRX_Pos                   _UINT32_(4)                                          /* (MCSPI_IER) End of Receive Buffer Interrupt Enable Position */
#define MCSPI_IER_ENDRX_Msk                   (_UINT32_(0x1) << MCSPI_IER_ENDRX_Pos)               /* (MCSPI_IER) End of Receive Buffer Interrupt Enable Mask */
#define MCSPI_IER_ENDRX(value)                (MCSPI_IER_ENDRX_Msk & (_UINT32_(value) << MCSPI_IER_ENDRX_Pos)) /* Assigment of value for ENDRX in the MCSPI_IER register */
#define MCSPI_IER_ENDTX_Pos                   _UINT32_(5)                                          /* (MCSPI_IER) End of Transmit Buffer Interrupt Enable Position */
#define MCSPI_IER_ENDTX_Msk                   (_UINT32_(0x1) << MCSPI_IER_ENDTX_Pos)               /* (MCSPI_IER) End of Transmit Buffer Interrupt Enable Mask */
#define MCSPI_IER_ENDTX(value)                (MCSPI_IER_ENDTX_Msk & (_UINT32_(value) << MCSPI_IER_ENDTX_Pos)) /* Assigment of value for ENDTX in the MCSPI_IER register */
#define MCSPI_IER_RXBUFF_Pos                  _UINT32_(6)                                          /* (MCSPI_IER) Receive Buffer Full Interrupt Enable Position */
#define MCSPI_IER_RXBUFF_Msk                  (_UINT32_(0x1) << MCSPI_IER_RXBUFF_Pos)              /* (MCSPI_IER) Receive Buffer Full Interrupt Enable Mask */
#define MCSPI_IER_RXBUFF(value)               (MCSPI_IER_RXBUFF_Msk & (_UINT32_(value) << MCSPI_IER_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the MCSPI_IER register */
#define MCSPI_IER_TXBUFE_Pos                  _UINT32_(7)                                          /* (MCSPI_IER) Transmit Buffer Empty Interrupt Enable Position */
#define MCSPI_IER_TXBUFE_Msk                  (_UINT32_(0x1) << MCSPI_IER_TXBUFE_Pos)              /* (MCSPI_IER) Transmit Buffer Empty Interrupt Enable Mask */
#define MCSPI_IER_TXBUFE(value)               (MCSPI_IER_TXBUFE_Msk & (_UINT32_(value) << MCSPI_IER_TXBUFE_Pos)) /* Assigment of value for TXBUFE in the MCSPI_IER register */
#define MCSPI_IER_NSSR_Pos                    _UINT32_(8)                                          /* (MCSPI_IER) NSS Rising Interrupt Enable Position */
#define MCSPI_IER_NSSR_Msk                    (_UINT32_(0x1) << MCSPI_IER_NSSR_Pos)                /* (MCSPI_IER) NSS Rising Interrupt Enable Mask */
#define MCSPI_IER_NSSR(value)                 (MCSPI_IER_NSSR_Msk & (_UINT32_(value) << MCSPI_IER_NSSR_Pos)) /* Assigment of value for NSSR in the MCSPI_IER register */
#define MCSPI_IER_TXEMPTY_Pos                 _UINT32_(9)                                          /* (MCSPI_IER) Transmission Registers Empty Enable Position */
#define MCSPI_IER_TXEMPTY_Msk                 (_UINT32_(0x1) << MCSPI_IER_TXEMPTY_Pos)             /* (MCSPI_IER) Transmission Registers Empty Enable Mask */
#define MCSPI_IER_TXEMPTY(value)              (MCSPI_IER_TXEMPTY_Msk & (_UINT32_(value) << MCSPI_IER_TXEMPTY_Pos)) /* Assigment of value for TXEMPTY in the MCSPI_IER register */
#define MCSPI_IER_UNDES_Pos                   _UINT32_(10)                                         /* (MCSPI_IER) Underrun Error Interrupt Enable Position */
#define MCSPI_IER_UNDES_Msk                   (_UINT32_(0x1) << MCSPI_IER_UNDES_Pos)               /* (MCSPI_IER) Underrun Error Interrupt Enable Mask */
#define MCSPI_IER_UNDES(value)                (MCSPI_IER_UNDES_Msk & (_UINT32_(value) << MCSPI_IER_UNDES_Pos)) /* Assigment of value for UNDES in the MCSPI_IER register */
#define MCSPI_IER_CMP_Pos                     _UINT32_(11)                                         /* (MCSPI_IER) Comparison Interrupt Enable Position */
#define MCSPI_IER_CMP_Msk                     (_UINT32_(0x1) << MCSPI_IER_CMP_Pos)                 /* (MCSPI_IER) Comparison Interrupt Enable Mask */
#define MCSPI_IER_CMP(value)                  (MCSPI_IER_CMP_Msk & (_UINT32_(value) << MCSPI_IER_CMP_Pos)) /* Assigment of value for CMP in the MCSPI_IER register */
#define MCSPI_IER_CRCERR_Pos                  _UINT32_(13)                                         /* (MCSPI_IER) CRC Error Interrupt Enable Position */
#define MCSPI_IER_CRCERR_Msk                  (_UINT32_(0x1) << MCSPI_IER_CRCERR_Pos)              /* (MCSPI_IER) CRC Error Interrupt Enable Mask */
#define MCSPI_IER_CRCERR(value)               (MCSPI_IER_CRCERR_Msk & (_UINT32_(value) << MCSPI_IER_CRCERR_Pos)) /* Assigment of value for CRCERR in the MCSPI_IER register */
#define MCSPI_IER_TXFEF_Pos                   _UINT32_(24)                                         /* (MCSPI_IER) TXFEF Interrupt Enable Position */
#define MCSPI_IER_TXFEF_Msk                   (_UINT32_(0x1) << MCSPI_IER_TXFEF_Pos)               /* (MCSPI_IER) TXFEF Interrupt Enable Mask */
#define MCSPI_IER_TXFEF(value)                (MCSPI_IER_TXFEF_Msk & (_UINT32_(value) << MCSPI_IER_TXFEF_Pos)) /* Assigment of value for TXFEF in the MCSPI_IER register */
#define MCSPI_IER_TXFFF_Pos                   _UINT32_(25)                                         /* (MCSPI_IER) TXFFF Interrupt Enable Position */
#define MCSPI_IER_TXFFF_Msk                   (_UINT32_(0x1) << MCSPI_IER_TXFFF_Pos)               /* (MCSPI_IER) TXFFF Interrupt Enable Mask */
#define MCSPI_IER_TXFFF(value)                (MCSPI_IER_TXFFF_Msk & (_UINT32_(value) << MCSPI_IER_TXFFF_Pos)) /* Assigment of value for TXFFF in the MCSPI_IER register */
#define MCSPI_IER_TXFTHF_Pos                  _UINT32_(26)                                         /* (MCSPI_IER) TXFTHF Interrupt Enable Position */
#define MCSPI_IER_TXFTHF_Msk                  (_UINT32_(0x1) << MCSPI_IER_TXFTHF_Pos)              /* (MCSPI_IER) TXFTHF Interrupt Enable Mask */
#define MCSPI_IER_TXFTHF(value)               (MCSPI_IER_TXFTHF_Msk & (_UINT32_(value) << MCSPI_IER_TXFTHF_Pos)) /* Assigment of value for TXFTHF in the MCSPI_IER register */
#define MCSPI_IER_RXFEF_Pos                   _UINT32_(27)                                         /* (MCSPI_IER) RXFEF Interrupt Enable Position */
#define MCSPI_IER_RXFEF_Msk                   (_UINT32_(0x1) << MCSPI_IER_RXFEF_Pos)               /* (MCSPI_IER) RXFEF Interrupt Enable Mask */
#define MCSPI_IER_RXFEF(value)                (MCSPI_IER_RXFEF_Msk & (_UINT32_(value) << MCSPI_IER_RXFEF_Pos)) /* Assigment of value for RXFEF in the MCSPI_IER register */
#define MCSPI_IER_RXFFF_Pos                   _UINT32_(28)                                         /* (MCSPI_IER) RXFFF Interrupt Enable Position */
#define MCSPI_IER_RXFFF_Msk                   (_UINT32_(0x1) << MCSPI_IER_RXFFF_Pos)               /* (MCSPI_IER) RXFFF Interrupt Enable Mask */
#define MCSPI_IER_RXFFF(value)                (MCSPI_IER_RXFFF_Msk & (_UINT32_(value) << MCSPI_IER_RXFFF_Pos)) /* Assigment of value for RXFFF in the MCSPI_IER register */
#define MCSPI_IER_RXFTHF_Pos                  _UINT32_(29)                                         /* (MCSPI_IER) RXFTHF Interrupt Enable Position */
#define MCSPI_IER_RXFTHF_Msk                  (_UINT32_(0x1) << MCSPI_IER_RXFTHF_Pos)              /* (MCSPI_IER) RXFTHF Interrupt Enable Mask */
#define MCSPI_IER_RXFTHF(value)               (MCSPI_IER_RXFTHF_Msk & (_UINT32_(value) << MCSPI_IER_RXFTHF_Pos)) /* Assigment of value for RXFTHF in the MCSPI_IER register */
#define MCSPI_IER_TXFPTEF_Pos                 _UINT32_(30)                                         /* (MCSPI_IER) TXFPTEF Interrupt Enable Position */
#define MCSPI_IER_TXFPTEF_Msk                 (_UINT32_(0x1) << MCSPI_IER_TXFPTEF_Pos)             /* (MCSPI_IER) TXFPTEF Interrupt Enable Mask */
#define MCSPI_IER_TXFPTEF(value)              (MCSPI_IER_TXFPTEF_Msk & (_UINT32_(value) << MCSPI_IER_TXFPTEF_Pos)) /* Assigment of value for TXFPTEF in the MCSPI_IER register */
#define MCSPI_IER_RXFPTEF_Pos                 _UINT32_(31)                                         /* (MCSPI_IER) RXFPTEF Interrupt Enable Position */
#define MCSPI_IER_RXFPTEF_Msk                 (_UINT32_(0x1) << MCSPI_IER_RXFPTEF_Pos)             /* (MCSPI_IER) RXFPTEF Interrupt Enable Mask */
#define MCSPI_IER_RXFPTEF(value)              (MCSPI_IER_RXFPTEF_Msk & (_UINT32_(value) << MCSPI_IER_RXFPTEF_Pos)) /* Assigment of value for RXFPTEF in the MCSPI_IER register */
#define MCSPI_IER_Msk                         _UINT32_(0xFF002FFF)                                 /* (MCSPI_IER) Register Mask  */


/* -------- MCSPI_IDR : (MCSPI Offset: 0x18) ( /W 32) Interrupt Disable Register -------- */
#define MCSPI_IDR_RDRF_Pos                    _UINT32_(0)                                          /* (MCSPI_IDR) Receive Data Register Full Interrupt Disable Position */
#define MCSPI_IDR_RDRF_Msk                    (_UINT32_(0x1) << MCSPI_IDR_RDRF_Pos)                /* (MCSPI_IDR) Receive Data Register Full Interrupt Disable Mask */
#define MCSPI_IDR_RDRF(value)                 (MCSPI_IDR_RDRF_Msk & (_UINT32_(value) << MCSPI_IDR_RDRF_Pos)) /* Assigment of value for RDRF in the MCSPI_IDR register */
#define MCSPI_IDR_TDRE_Pos                    _UINT32_(1)                                          /* (MCSPI_IDR) MCSPI Transmit Data Register Empty Interrupt Disable Position */
#define MCSPI_IDR_TDRE_Msk                    (_UINT32_(0x1) << MCSPI_IDR_TDRE_Pos)                /* (MCSPI_IDR) MCSPI Transmit Data Register Empty Interrupt Disable Mask */
#define MCSPI_IDR_TDRE(value)                 (MCSPI_IDR_TDRE_Msk & (_UINT32_(value) << MCSPI_IDR_TDRE_Pos)) /* Assigment of value for TDRE in the MCSPI_IDR register */
#define MCSPI_IDR_MODF_Pos                    _UINT32_(2)                                          /* (MCSPI_IDR) Mode Fault Error Interrupt Disable Position */
#define MCSPI_IDR_MODF_Msk                    (_UINT32_(0x1) << MCSPI_IDR_MODF_Pos)                /* (MCSPI_IDR) Mode Fault Error Interrupt Disable Mask */
#define MCSPI_IDR_MODF(value)                 (MCSPI_IDR_MODF_Msk & (_UINT32_(value) << MCSPI_IDR_MODF_Pos)) /* Assigment of value for MODF in the MCSPI_IDR register */
#define MCSPI_IDR_OVRES_Pos                   _UINT32_(3)                                          /* (MCSPI_IDR) Overrun Error Interrupt Disable Position */
#define MCSPI_IDR_OVRES_Msk                   (_UINT32_(0x1) << MCSPI_IDR_OVRES_Pos)               /* (MCSPI_IDR) Overrun Error Interrupt Disable Mask */
#define MCSPI_IDR_OVRES(value)                (MCSPI_IDR_OVRES_Msk & (_UINT32_(value) << MCSPI_IDR_OVRES_Pos)) /* Assigment of value for OVRES in the MCSPI_IDR register */
#define MCSPI_IDR_ENDRX_Pos                   _UINT32_(4)                                          /* (MCSPI_IDR) End of Receive Buffer Interrupt Disable Position */
#define MCSPI_IDR_ENDRX_Msk                   (_UINT32_(0x1) << MCSPI_IDR_ENDRX_Pos)               /* (MCSPI_IDR) End of Receive Buffer Interrupt Disable Mask */
#define MCSPI_IDR_ENDRX(value)                (MCSPI_IDR_ENDRX_Msk & (_UINT32_(value) << MCSPI_IDR_ENDRX_Pos)) /* Assigment of value for ENDRX in the MCSPI_IDR register */
#define MCSPI_IDR_ENDTX_Pos                   _UINT32_(5)                                          /* (MCSPI_IDR) End of Transmit Buffer Interrupt Disable Position */
#define MCSPI_IDR_ENDTX_Msk                   (_UINT32_(0x1) << MCSPI_IDR_ENDTX_Pos)               /* (MCSPI_IDR) End of Transmit Buffer Interrupt Disable Mask */
#define MCSPI_IDR_ENDTX(value)                (MCSPI_IDR_ENDTX_Msk & (_UINT32_(value) << MCSPI_IDR_ENDTX_Pos)) /* Assigment of value for ENDTX in the MCSPI_IDR register */
#define MCSPI_IDR_RXBUFF_Pos                  _UINT32_(6)                                          /* (MCSPI_IDR) Receive Buffer Full Interrupt Disable Position */
#define MCSPI_IDR_RXBUFF_Msk                  (_UINT32_(0x1) << MCSPI_IDR_RXBUFF_Pos)              /* (MCSPI_IDR) Receive Buffer Full Interrupt Disable Mask */
#define MCSPI_IDR_RXBUFF(value)               (MCSPI_IDR_RXBUFF_Msk & (_UINT32_(value) << MCSPI_IDR_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the MCSPI_IDR register */
#define MCSPI_IDR_TXBUFE_Pos                  _UINT32_(7)                                          /* (MCSPI_IDR) Transmit Buffer Empty Interrupt Disable Position */
#define MCSPI_IDR_TXBUFE_Msk                  (_UINT32_(0x1) << MCSPI_IDR_TXBUFE_Pos)              /* (MCSPI_IDR) Transmit Buffer Empty Interrupt Disable Mask */
#define MCSPI_IDR_TXBUFE(value)               (MCSPI_IDR_TXBUFE_Msk & (_UINT32_(value) << MCSPI_IDR_TXBUFE_Pos)) /* Assigment of value for TXBUFE in the MCSPI_IDR register */
#define MCSPI_IDR_NSSR_Pos                    _UINT32_(8)                                          /* (MCSPI_IDR) NSS Rising Interrupt Disable Position */
#define MCSPI_IDR_NSSR_Msk                    (_UINT32_(0x1) << MCSPI_IDR_NSSR_Pos)                /* (MCSPI_IDR) NSS Rising Interrupt Disable Mask */
#define MCSPI_IDR_NSSR(value)                 (MCSPI_IDR_NSSR_Msk & (_UINT32_(value) << MCSPI_IDR_NSSR_Pos)) /* Assigment of value for NSSR in the MCSPI_IDR register */
#define MCSPI_IDR_TXEMPTY_Pos                 _UINT32_(9)                                          /* (MCSPI_IDR) Transmission Registers Empty Disable Position */
#define MCSPI_IDR_TXEMPTY_Msk                 (_UINT32_(0x1) << MCSPI_IDR_TXEMPTY_Pos)             /* (MCSPI_IDR) Transmission Registers Empty Disable Mask */
#define MCSPI_IDR_TXEMPTY(value)              (MCSPI_IDR_TXEMPTY_Msk & (_UINT32_(value) << MCSPI_IDR_TXEMPTY_Pos)) /* Assigment of value for TXEMPTY in the MCSPI_IDR register */
#define MCSPI_IDR_UNDES_Pos                   _UINT32_(10)                                         /* (MCSPI_IDR) Underrun Error Interrupt Disable Position */
#define MCSPI_IDR_UNDES_Msk                   (_UINT32_(0x1) << MCSPI_IDR_UNDES_Pos)               /* (MCSPI_IDR) Underrun Error Interrupt Disable Mask */
#define MCSPI_IDR_UNDES(value)                (MCSPI_IDR_UNDES_Msk & (_UINT32_(value) << MCSPI_IDR_UNDES_Pos)) /* Assigment of value for UNDES in the MCSPI_IDR register */
#define MCSPI_IDR_CMP_Pos                     _UINT32_(11)                                         /* (MCSPI_IDR) Comparison Interrupt Disable Position */
#define MCSPI_IDR_CMP_Msk                     (_UINT32_(0x1) << MCSPI_IDR_CMP_Pos)                 /* (MCSPI_IDR) Comparison Interrupt Disable Mask */
#define MCSPI_IDR_CMP(value)                  (MCSPI_IDR_CMP_Msk & (_UINT32_(value) << MCSPI_IDR_CMP_Pos)) /* Assigment of value for CMP in the MCSPI_IDR register */
#define MCSPI_IDR_CRCERR_Pos                  _UINT32_(13)                                         /* (MCSPI_IDR) CRC Error Interrupt Disable Position */
#define MCSPI_IDR_CRCERR_Msk                  (_UINT32_(0x1) << MCSPI_IDR_CRCERR_Pos)              /* (MCSPI_IDR) CRC Error Interrupt Disable Mask */
#define MCSPI_IDR_CRCERR(value)               (MCSPI_IDR_CRCERR_Msk & (_UINT32_(value) << MCSPI_IDR_CRCERR_Pos)) /* Assigment of value for CRCERR in the MCSPI_IDR register */
#define MCSPI_IDR_TXFEF_Pos                   _UINT32_(24)                                         /* (MCSPI_IDR) TXFEF Interrupt Disable Position */
#define MCSPI_IDR_TXFEF_Msk                   (_UINT32_(0x1) << MCSPI_IDR_TXFEF_Pos)               /* (MCSPI_IDR) TXFEF Interrupt Disable Mask */
#define MCSPI_IDR_TXFEF(value)                (MCSPI_IDR_TXFEF_Msk & (_UINT32_(value) << MCSPI_IDR_TXFEF_Pos)) /* Assigment of value for TXFEF in the MCSPI_IDR register */
#define MCSPI_IDR_TXFFF_Pos                   _UINT32_(25)                                         /* (MCSPI_IDR) TXFFF Interrupt Disable Position */
#define MCSPI_IDR_TXFFF_Msk                   (_UINT32_(0x1) << MCSPI_IDR_TXFFF_Pos)               /* (MCSPI_IDR) TXFFF Interrupt Disable Mask */
#define MCSPI_IDR_TXFFF(value)                (MCSPI_IDR_TXFFF_Msk & (_UINT32_(value) << MCSPI_IDR_TXFFF_Pos)) /* Assigment of value for TXFFF in the MCSPI_IDR register */
#define MCSPI_IDR_TXFTHF_Pos                  _UINT32_(26)                                         /* (MCSPI_IDR) TXFTHF Interrupt Disable Position */
#define MCSPI_IDR_TXFTHF_Msk                  (_UINT32_(0x1) << MCSPI_IDR_TXFTHF_Pos)              /* (MCSPI_IDR) TXFTHF Interrupt Disable Mask */
#define MCSPI_IDR_TXFTHF(value)               (MCSPI_IDR_TXFTHF_Msk & (_UINT32_(value) << MCSPI_IDR_TXFTHF_Pos)) /* Assigment of value for TXFTHF in the MCSPI_IDR register */
#define MCSPI_IDR_RXFEF_Pos                   _UINT32_(27)                                         /* (MCSPI_IDR) RXFEF Interrupt Disable Position */
#define MCSPI_IDR_RXFEF_Msk                   (_UINT32_(0x1) << MCSPI_IDR_RXFEF_Pos)               /* (MCSPI_IDR) RXFEF Interrupt Disable Mask */
#define MCSPI_IDR_RXFEF(value)                (MCSPI_IDR_RXFEF_Msk & (_UINT32_(value) << MCSPI_IDR_RXFEF_Pos)) /* Assigment of value for RXFEF in the MCSPI_IDR register */
#define MCSPI_IDR_RXFFF_Pos                   _UINT32_(28)                                         /* (MCSPI_IDR) RXFFF Interrupt Disable Position */
#define MCSPI_IDR_RXFFF_Msk                   (_UINT32_(0x1) << MCSPI_IDR_RXFFF_Pos)               /* (MCSPI_IDR) RXFFF Interrupt Disable Mask */
#define MCSPI_IDR_RXFFF(value)                (MCSPI_IDR_RXFFF_Msk & (_UINT32_(value) << MCSPI_IDR_RXFFF_Pos)) /* Assigment of value for RXFFF in the MCSPI_IDR register */
#define MCSPI_IDR_RXFTHF_Pos                  _UINT32_(29)                                         /* (MCSPI_IDR) RXFTHF Interrupt Disable Position */
#define MCSPI_IDR_RXFTHF_Msk                  (_UINT32_(0x1) << MCSPI_IDR_RXFTHF_Pos)              /* (MCSPI_IDR) RXFTHF Interrupt Disable Mask */
#define MCSPI_IDR_RXFTHF(value)               (MCSPI_IDR_RXFTHF_Msk & (_UINT32_(value) << MCSPI_IDR_RXFTHF_Pos)) /* Assigment of value for RXFTHF in the MCSPI_IDR register */
#define MCSPI_IDR_TXFPTEF_Pos                 _UINT32_(30)                                         /* (MCSPI_IDR) TXFPTEF Interrupt Disable Position */
#define MCSPI_IDR_TXFPTEF_Msk                 (_UINT32_(0x1) << MCSPI_IDR_TXFPTEF_Pos)             /* (MCSPI_IDR) TXFPTEF Interrupt Disable Mask */
#define MCSPI_IDR_TXFPTEF(value)              (MCSPI_IDR_TXFPTEF_Msk & (_UINT32_(value) << MCSPI_IDR_TXFPTEF_Pos)) /* Assigment of value for TXFPTEF in the MCSPI_IDR register */
#define MCSPI_IDR_RXFPTEF_Pos                 _UINT32_(31)                                         /* (MCSPI_IDR) RXFPTEF Interrupt Disable Position */
#define MCSPI_IDR_RXFPTEF_Msk                 (_UINT32_(0x1) << MCSPI_IDR_RXFPTEF_Pos)             /* (MCSPI_IDR) RXFPTEF Interrupt Disable Mask */
#define MCSPI_IDR_RXFPTEF(value)              (MCSPI_IDR_RXFPTEF_Msk & (_UINT32_(value) << MCSPI_IDR_RXFPTEF_Pos)) /* Assigment of value for RXFPTEF in the MCSPI_IDR register */
#define MCSPI_IDR_Msk                         _UINT32_(0xFF002FFF)                                 /* (MCSPI_IDR) Register Mask  */


/* -------- MCSPI_IMR : (MCSPI Offset: 0x1C) ( R/ 32) Interrupt Mask Register -------- */
#define MCSPI_IMR_RDRF_Pos                    _UINT32_(0)                                          /* (MCSPI_IMR) Receive Data Register Full Interrupt Mask Position */
#define MCSPI_IMR_RDRF_Msk                    (_UINT32_(0x1) << MCSPI_IMR_RDRF_Pos)                /* (MCSPI_IMR) Receive Data Register Full Interrupt Mask Mask */
#define MCSPI_IMR_RDRF(value)                 (MCSPI_IMR_RDRF_Msk & (_UINT32_(value) << MCSPI_IMR_RDRF_Pos)) /* Assigment of value for RDRF in the MCSPI_IMR register */
#define MCSPI_IMR_TDRE_Pos                    _UINT32_(1)                                          /* (MCSPI_IMR) MCSPI Transmit Data Register Empty Interrupt Mask Position */
#define MCSPI_IMR_TDRE_Msk                    (_UINT32_(0x1) << MCSPI_IMR_TDRE_Pos)                /* (MCSPI_IMR) MCSPI Transmit Data Register Empty Interrupt Mask Mask */
#define MCSPI_IMR_TDRE(value)                 (MCSPI_IMR_TDRE_Msk & (_UINT32_(value) << MCSPI_IMR_TDRE_Pos)) /* Assigment of value for TDRE in the MCSPI_IMR register */
#define MCSPI_IMR_MODF_Pos                    _UINT32_(2)                                          /* (MCSPI_IMR) Mode Fault Error Interrupt Mask Position */
#define MCSPI_IMR_MODF_Msk                    (_UINT32_(0x1) << MCSPI_IMR_MODF_Pos)                /* (MCSPI_IMR) Mode Fault Error Interrupt Mask Mask */
#define MCSPI_IMR_MODF(value)                 (MCSPI_IMR_MODF_Msk & (_UINT32_(value) << MCSPI_IMR_MODF_Pos)) /* Assigment of value for MODF in the MCSPI_IMR register */
#define MCSPI_IMR_OVRES_Pos                   _UINT32_(3)                                          /* (MCSPI_IMR) Overrun Error Interrupt Mask Position */
#define MCSPI_IMR_OVRES_Msk                   (_UINT32_(0x1) << MCSPI_IMR_OVRES_Pos)               /* (MCSPI_IMR) Overrun Error Interrupt Mask Mask */
#define MCSPI_IMR_OVRES(value)                (MCSPI_IMR_OVRES_Msk & (_UINT32_(value) << MCSPI_IMR_OVRES_Pos)) /* Assigment of value for OVRES in the MCSPI_IMR register */
#define MCSPI_IMR_ENDRX_Pos                   _UINT32_(4)                                          /* (MCSPI_IMR) End of Receive Buffer Interrupt Mask Position */
#define MCSPI_IMR_ENDRX_Msk                   (_UINT32_(0x1) << MCSPI_IMR_ENDRX_Pos)               /* (MCSPI_IMR) End of Receive Buffer Interrupt Mask Mask */
#define MCSPI_IMR_ENDRX(value)                (MCSPI_IMR_ENDRX_Msk & (_UINT32_(value) << MCSPI_IMR_ENDRX_Pos)) /* Assigment of value for ENDRX in the MCSPI_IMR register */
#define MCSPI_IMR_ENDTX_Pos                   _UINT32_(5)                                          /* (MCSPI_IMR) End of Transmit Buffer Interrupt Mask Position */
#define MCSPI_IMR_ENDTX_Msk                   (_UINT32_(0x1) << MCSPI_IMR_ENDTX_Pos)               /* (MCSPI_IMR) End of Transmit Buffer Interrupt Mask Mask */
#define MCSPI_IMR_ENDTX(value)                (MCSPI_IMR_ENDTX_Msk & (_UINT32_(value) << MCSPI_IMR_ENDTX_Pos)) /* Assigment of value for ENDTX in the MCSPI_IMR register */
#define MCSPI_IMR_RXBUFF_Pos                  _UINT32_(6)                                          /* (MCSPI_IMR) Receive Buffer Full Interrupt Mask Position */
#define MCSPI_IMR_RXBUFF_Msk                  (_UINT32_(0x1) << MCSPI_IMR_RXBUFF_Pos)              /* (MCSPI_IMR) Receive Buffer Full Interrupt Mask Mask */
#define MCSPI_IMR_RXBUFF(value)               (MCSPI_IMR_RXBUFF_Msk & (_UINT32_(value) << MCSPI_IMR_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the MCSPI_IMR register */
#define MCSPI_IMR_TXBUFE_Pos                  _UINT32_(7)                                          /* (MCSPI_IMR) Transmit Buffer Empty Interrupt Mask Position */
#define MCSPI_IMR_TXBUFE_Msk                  (_UINT32_(0x1) << MCSPI_IMR_TXBUFE_Pos)              /* (MCSPI_IMR) Transmit Buffer Empty Interrupt Mask Mask */
#define MCSPI_IMR_TXBUFE(value)               (MCSPI_IMR_TXBUFE_Msk & (_UINT32_(value) << MCSPI_IMR_TXBUFE_Pos)) /* Assigment of value for TXBUFE in the MCSPI_IMR register */
#define MCSPI_IMR_NSSR_Pos                    _UINT32_(8)                                          /* (MCSPI_IMR) NSS Rising Interrupt Mask Position */
#define MCSPI_IMR_NSSR_Msk                    (_UINT32_(0x1) << MCSPI_IMR_NSSR_Pos)                /* (MCSPI_IMR) NSS Rising Interrupt Mask Mask */
#define MCSPI_IMR_NSSR(value)                 (MCSPI_IMR_NSSR_Msk & (_UINT32_(value) << MCSPI_IMR_NSSR_Pos)) /* Assigment of value for NSSR in the MCSPI_IMR register */
#define MCSPI_IMR_TXEMPTY_Pos                 _UINT32_(9)                                          /* (MCSPI_IMR) Transmission Registers Empty Mask Position */
#define MCSPI_IMR_TXEMPTY_Msk                 (_UINT32_(0x1) << MCSPI_IMR_TXEMPTY_Pos)             /* (MCSPI_IMR) Transmission Registers Empty Mask Mask */
#define MCSPI_IMR_TXEMPTY(value)              (MCSPI_IMR_TXEMPTY_Msk & (_UINT32_(value) << MCSPI_IMR_TXEMPTY_Pos)) /* Assigment of value for TXEMPTY in the MCSPI_IMR register */
#define MCSPI_IMR_UNDES_Pos                   _UINT32_(10)                                         /* (MCSPI_IMR) Underrun Error Interrupt Mask Position */
#define MCSPI_IMR_UNDES_Msk                   (_UINT32_(0x1) << MCSPI_IMR_UNDES_Pos)               /* (MCSPI_IMR) Underrun Error Interrupt Mask Mask */
#define MCSPI_IMR_UNDES(value)                (MCSPI_IMR_UNDES_Msk & (_UINT32_(value) << MCSPI_IMR_UNDES_Pos)) /* Assigment of value for UNDES in the MCSPI_IMR register */
#define MCSPI_IMR_CMP_Pos                     _UINT32_(11)                                         /* (MCSPI_IMR) Comparison Interrupt Mask Position */
#define MCSPI_IMR_CMP_Msk                     (_UINT32_(0x1) << MCSPI_IMR_CMP_Pos)                 /* (MCSPI_IMR) Comparison Interrupt Mask Mask */
#define MCSPI_IMR_CMP(value)                  (MCSPI_IMR_CMP_Msk & (_UINT32_(value) << MCSPI_IMR_CMP_Pos)) /* Assigment of value for CMP in the MCSPI_IMR register */
#define MCSPI_IMR_CRCERR_Pos                  _UINT32_(13)                                         /* (MCSPI_IMR) CRC Error Interrupt Mask Position */
#define MCSPI_IMR_CRCERR_Msk                  (_UINT32_(0x1) << MCSPI_IMR_CRCERR_Pos)              /* (MCSPI_IMR) CRC Error Interrupt Mask Mask */
#define MCSPI_IMR_CRCERR(value)               (MCSPI_IMR_CRCERR_Msk & (_UINT32_(value) << MCSPI_IMR_CRCERR_Pos)) /* Assigment of value for CRCERR in the MCSPI_IMR register */
#define MCSPI_IMR_TXFEF_Pos                   _UINT32_(24)                                         /* (MCSPI_IMR) TXFEF Interrupt Mask Position */
#define MCSPI_IMR_TXFEF_Msk                   (_UINT32_(0x1) << MCSPI_IMR_TXFEF_Pos)               /* (MCSPI_IMR) TXFEF Interrupt Mask Mask */
#define MCSPI_IMR_TXFEF(value)                (MCSPI_IMR_TXFEF_Msk & (_UINT32_(value) << MCSPI_IMR_TXFEF_Pos)) /* Assigment of value for TXFEF in the MCSPI_IMR register */
#define MCSPI_IMR_TXFFF_Pos                   _UINT32_(25)                                         /* (MCSPI_IMR) TXFFF Interrupt Mask Position */
#define MCSPI_IMR_TXFFF_Msk                   (_UINT32_(0x1) << MCSPI_IMR_TXFFF_Pos)               /* (MCSPI_IMR) TXFFF Interrupt Mask Mask */
#define MCSPI_IMR_TXFFF(value)                (MCSPI_IMR_TXFFF_Msk & (_UINT32_(value) << MCSPI_IMR_TXFFF_Pos)) /* Assigment of value for TXFFF in the MCSPI_IMR register */
#define MCSPI_IMR_TXFTHF_Pos                  _UINT32_(26)                                         /* (MCSPI_IMR) TXFTHF Interrupt Mask Position */
#define MCSPI_IMR_TXFTHF_Msk                  (_UINT32_(0x1) << MCSPI_IMR_TXFTHF_Pos)              /* (MCSPI_IMR) TXFTHF Interrupt Mask Mask */
#define MCSPI_IMR_TXFTHF(value)               (MCSPI_IMR_TXFTHF_Msk & (_UINT32_(value) << MCSPI_IMR_TXFTHF_Pos)) /* Assigment of value for TXFTHF in the MCSPI_IMR register */
#define MCSPI_IMR_RXFEF_Pos                   _UINT32_(27)                                         /* (MCSPI_IMR) RXFEF Interrupt Mask Position */
#define MCSPI_IMR_RXFEF_Msk                   (_UINT32_(0x1) << MCSPI_IMR_RXFEF_Pos)               /* (MCSPI_IMR) RXFEF Interrupt Mask Mask */
#define MCSPI_IMR_RXFEF(value)                (MCSPI_IMR_RXFEF_Msk & (_UINT32_(value) << MCSPI_IMR_RXFEF_Pos)) /* Assigment of value for RXFEF in the MCSPI_IMR register */
#define MCSPI_IMR_RXFFF_Pos                   _UINT32_(28)                                         /* (MCSPI_IMR) RXFFF Interrupt Mask Position */
#define MCSPI_IMR_RXFFF_Msk                   (_UINT32_(0x1) << MCSPI_IMR_RXFFF_Pos)               /* (MCSPI_IMR) RXFFF Interrupt Mask Mask */
#define MCSPI_IMR_RXFFF(value)                (MCSPI_IMR_RXFFF_Msk & (_UINT32_(value) << MCSPI_IMR_RXFFF_Pos)) /* Assigment of value for RXFFF in the MCSPI_IMR register */
#define MCSPI_IMR_RXFTHF_Pos                  _UINT32_(29)                                         /* (MCSPI_IMR) RXFTHF Interrupt Mask Position */
#define MCSPI_IMR_RXFTHF_Msk                  (_UINT32_(0x1) << MCSPI_IMR_RXFTHF_Pos)              /* (MCSPI_IMR) RXFTHF Interrupt Mask Mask */
#define MCSPI_IMR_RXFTHF(value)               (MCSPI_IMR_RXFTHF_Msk & (_UINT32_(value) << MCSPI_IMR_RXFTHF_Pos)) /* Assigment of value for RXFTHF in the MCSPI_IMR register */
#define MCSPI_IMR_TXFPTEF_Pos                 _UINT32_(30)                                         /* (MCSPI_IMR) TXFPTEF Interrupt Mask Position */
#define MCSPI_IMR_TXFPTEF_Msk                 (_UINT32_(0x1) << MCSPI_IMR_TXFPTEF_Pos)             /* (MCSPI_IMR) TXFPTEF Interrupt Mask Mask */
#define MCSPI_IMR_TXFPTEF(value)              (MCSPI_IMR_TXFPTEF_Msk & (_UINT32_(value) << MCSPI_IMR_TXFPTEF_Pos)) /* Assigment of value for TXFPTEF in the MCSPI_IMR register */
#define MCSPI_IMR_RXFPTEF_Pos                 _UINT32_(31)                                         /* (MCSPI_IMR) RXFPTEF Interrupt Mask Position */
#define MCSPI_IMR_RXFPTEF_Msk                 (_UINT32_(0x1) << MCSPI_IMR_RXFPTEF_Pos)             /* (MCSPI_IMR) RXFPTEF Interrupt Mask Mask */
#define MCSPI_IMR_RXFPTEF(value)              (MCSPI_IMR_RXFPTEF_Msk & (_UINT32_(value) << MCSPI_IMR_RXFPTEF_Pos)) /* Assigment of value for RXFPTEF in the MCSPI_IMR register */
#define MCSPI_IMR_Msk                         _UINT32_(0xFF002FFF)                                 /* (MCSPI_IMR) Register Mask  */


/* -------- MCSPI_CSR : (MCSPI Offset: 0x30) (R/W 32) Chip Select Register (CS_number = 0) -------- */
#define MCSPI_CSR_CPOL_Pos                    _UINT32_(0)                                          /* (MCSPI_CSR) Clock Polarity Position */
#define MCSPI_CSR_CPOL_Msk                    (_UINT32_(0x1) << MCSPI_CSR_CPOL_Pos)                /* (MCSPI_CSR) Clock Polarity Mask */
#define MCSPI_CSR_CPOL(value)                 (MCSPI_CSR_CPOL_Msk & (_UINT32_(value) << MCSPI_CSR_CPOL_Pos)) /* Assigment of value for CPOL in the MCSPI_CSR register */
#define MCSPI_CSR_NCPHA_Pos                   _UINT32_(1)                                          /* (MCSPI_CSR) Clock Phase Position */
#define MCSPI_CSR_NCPHA_Msk                   (_UINT32_(0x1) << MCSPI_CSR_NCPHA_Pos)               /* (MCSPI_CSR) Clock Phase Mask */
#define MCSPI_CSR_NCPHA(value)                (MCSPI_CSR_NCPHA_Msk & (_UINT32_(value) << MCSPI_CSR_NCPHA_Pos)) /* Assigment of value for NCPHA in the MCSPI_CSR register */
#define MCSPI_CSR_CSNAAT_Pos                  _UINT32_(2)                                          /* (MCSPI_CSR) Chip Select Not Active After Transfer (ignored if CSAAT = 1) Position */
#define MCSPI_CSR_CSNAAT_Msk                  (_UINT32_(0x1) << MCSPI_CSR_CSNAAT_Pos)              /* (MCSPI_CSR) Chip Select Not Active After Transfer (ignored if CSAAT = 1) Mask */
#define MCSPI_CSR_CSNAAT(value)               (MCSPI_CSR_CSNAAT_Msk & (_UINT32_(value) << MCSPI_CSR_CSNAAT_Pos)) /* Assigment of value for CSNAAT in the MCSPI_CSR register */
#define MCSPI_CSR_CSAAT_Pos                   _UINT32_(3)                                          /* (MCSPI_CSR) Chip Select Active After Transfer Position */
#define MCSPI_CSR_CSAAT_Msk                   (_UINT32_(0x1) << MCSPI_CSR_CSAAT_Pos)               /* (MCSPI_CSR) Chip Select Active After Transfer Mask */
#define MCSPI_CSR_CSAAT(value)                (MCSPI_CSR_CSAAT_Msk & (_UINT32_(value) << MCSPI_CSR_CSAAT_Pos)) /* Assigment of value for CSAAT in the MCSPI_CSR register */
#define MCSPI_CSR_BITS_Pos                    _UINT32_(4)                                          /* (MCSPI_CSR) Bits Per Transfer Position */
#define MCSPI_CSR_BITS_Msk                    (_UINT32_(0xF) << MCSPI_CSR_BITS_Pos)                /* (MCSPI_CSR) Bits Per Transfer Mask */
#define MCSPI_CSR_BITS(value)                 (MCSPI_CSR_BITS_Msk & (_UINT32_(value) << MCSPI_CSR_BITS_Pos)) /* Assigment of value for BITS in the MCSPI_CSR register */
#define   MCSPI_CSR_BITS_8_BIT_Val            _UINT32_(0x0)                                        /* (MCSPI_CSR) 8 bits for transfer  */
#define   MCSPI_CSR_BITS_9_BIT_Val            _UINT32_(0x1)                                        /* (MCSPI_CSR) 9 bits for transfer  */
#define   MCSPI_CSR_BITS_10_BIT_Val           _UINT32_(0x2)                                        /* (MCSPI_CSR) 10 bits for transfer  */
#define   MCSPI_CSR_BITS_11_BIT_Val           _UINT32_(0x3)                                        /* (MCSPI_CSR) 11 bits for transfer  */
#define   MCSPI_CSR_BITS_12_BIT_Val           _UINT32_(0x4)                                        /* (MCSPI_CSR) 12 bits for transfer  */
#define   MCSPI_CSR_BITS_13_BIT_Val           _UINT32_(0x5)                                        /* (MCSPI_CSR) 13 bits for transfer  */
#define   MCSPI_CSR_BITS_14_BIT_Val           _UINT32_(0x6)                                        /* (MCSPI_CSR) 14 bits for transfer  */
#define   MCSPI_CSR_BITS_15_BIT_Val           _UINT32_(0x7)                                        /* (MCSPI_CSR) 15 bits for transfer  */
#define   MCSPI_CSR_BITS_16_BIT_Val           _UINT32_(0x8)                                        /* (MCSPI_CSR) 16 bits for transfer  */
#define MCSPI_CSR_BITS_8_BIT                  (MCSPI_CSR_BITS_8_BIT_Val << MCSPI_CSR_BITS_Pos)     /* (MCSPI_CSR) 8 bits for transfer Position  */
#define MCSPI_CSR_BITS_9_BIT                  (MCSPI_CSR_BITS_9_BIT_Val << MCSPI_CSR_BITS_Pos)     /* (MCSPI_CSR) 9 bits for transfer Position  */
#define MCSPI_CSR_BITS_10_BIT                 (MCSPI_CSR_BITS_10_BIT_Val << MCSPI_CSR_BITS_Pos)    /* (MCSPI_CSR) 10 bits for transfer Position  */
#define MCSPI_CSR_BITS_11_BIT                 (MCSPI_CSR_BITS_11_BIT_Val << MCSPI_CSR_BITS_Pos)    /* (MCSPI_CSR) 11 bits for transfer Position  */
#define MCSPI_CSR_BITS_12_BIT                 (MCSPI_CSR_BITS_12_BIT_Val << MCSPI_CSR_BITS_Pos)    /* (MCSPI_CSR) 12 bits for transfer Position  */
#define MCSPI_CSR_BITS_13_BIT                 (MCSPI_CSR_BITS_13_BIT_Val << MCSPI_CSR_BITS_Pos)    /* (MCSPI_CSR) 13 bits for transfer Position  */
#define MCSPI_CSR_BITS_14_BIT                 (MCSPI_CSR_BITS_14_BIT_Val << MCSPI_CSR_BITS_Pos)    /* (MCSPI_CSR) 14 bits for transfer Position  */
#define MCSPI_CSR_BITS_15_BIT                 (MCSPI_CSR_BITS_15_BIT_Val << MCSPI_CSR_BITS_Pos)    /* (MCSPI_CSR) 15 bits for transfer Position  */
#define MCSPI_CSR_BITS_16_BIT                 (MCSPI_CSR_BITS_16_BIT_Val << MCSPI_CSR_BITS_Pos)    /* (MCSPI_CSR) 16 bits for transfer Position  */
#define MCSPI_CSR_SCBR_Pos                    _UINT32_(8)                                          /* (MCSPI_CSR) Serial Clock Bit Rate Position */
#define MCSPI_CSR_SCBR_Msk                    (_UINT32_(0xFF) << MCSPI_CSR_SCBR_Pos)               /* (MCSPI_CSR) Serial Clock Bit Rate Mask */
#define MCSPI_CSR_SCBR(value)                 (MCSPI_CSR_SCBR_Msk & (_UINT32_(value) << MCSPI_CSR_SCBR_Pos)) /* Assigment of value for SCBR in the MCSPI_CSR register */
#define MCSPI_CSR_DLYBS_Pos                   _UINT32_(16)                                         /* (MCSPI_CSR) Delay Before SPCK Position */
#define MCSPI_CSR_DLYBS_Msk                   (_UINT32_(0xFF) << MCSPI_CSR_DLYBS_Pos)              /* (MCSPI_CSR) Delay Before SPCK Mask */
#define MCSPI_CSR_DLYBS(value)                (MCSPI_CSR_DLYBS_Msk & (_UINT32_(value) << MCSPI_CSR_DLYBS_Pos)) /* Assigment of value for DLYBS in the MCSPI_CSR register */
#define MCSPI_CSR_DLYBCT_Pos                  _UINT32_(24)                                         /* (MCSPI_CSR) Delay Between Consecutive Transfers Position */
#define MCSPI_CSR_DLYBCT_Msk                  (_UINT32_(0xFF) << MCSPI_CSR_DLYBCT_Pos)             /* (MCSPI_CSR) Delay Between Consecutive Transfers Mask */
#define MCSPI_CSR_DLYBCT(value)               (MCSPI_CSR_DLYBCT_Msk & (_UINT32_(value) << MCSPI_CSR_DLYBCT_Pos)) /* Assigment of value for DLYBCT in the MCSPI_CSR register */
#define MCSPI_CSR_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (MCSPI_CSR) Register Mask  */


/* -------- MCSPI_FMR : (MCSPI Offset: 0x40) (R/W 32) FIFO Mode Register -------- */
#define MCSPI_FMR_TXRDYM_Pos                  _UINT32_(0)                                          /* (MCSPI_FMR) Transmit Data Register Empty Mode Position */
#define MCSPI_FMR_TXRDYM_Msk                  (_UINT32_(0x3) << MCSPI_FMR_TXRDYM_Pos)              /* (MCSPI_FMR) Transmit Data Register Empty Mode Mask */
#define MCSPI_FMR_TXRDYM(value)               (MCSPI_FMR_TXRDYM_Msk & (_UINT32_(value) << MCSPI_FMR_TXRDYM_Pos)) /* Assigment of value for TXRDYM in the MCSPI_FMR register */
#define   MCSPI_FMR_TXRDYM_ONE_DATA_Val       _UINT32_(0x0)                                        /* (MCSPI_FMR) TDRE will be at level '1' when at least one data can be written in the Transmit FIFO.  */
#define   MCSPI_FMR_TXRDYM_TWO_DATA_Val       _UINT32_(0x1)                                        /* (MCSPI_FMR) TDRE will be at level '1' when at least two data can be written in the Transmit FIFO. Cannot be used if MCSPI_MR.PS =1.  */
#define MCSPI_FMR_TXRDYM_ONE_DATA             (MCSPI_FMR_TXRDYM_ONE_DATA_Val << MCSPI_FMR_TXRDYM_Pos) /* (MCSPI_FMR) TDRE will be at level '1' when at least one data can be written in the Transmit FIFO. Position  */
#define MCSPI_FMR_TXRDYM_TWO_DATA             (MCSPI_FMR_TXRDYM_TWO_DATA_Val << MCSPI_FMR_TXRDYM_Pos) /* (MCSPI_FMR) TDRE will be at level '1' when at least two data can be written in the Transmit FIFO. Cannot be used if MCSPI_MR.PS =1. Position  */
#define MCSPI_FMR_RXRDYM_Pos                  _UINT32_(4)                                          /* (MCSPI_FMR) Receive Data Register Full Mode Position */
#define MCSPI_FMR_RXRDYM_Msk                  (_UINT32_(0x3) << MCSPI_FMR_RXRDYM_Pos)              /* (MCSPI_FMR) Receive Data Register Full Mode Mask */
#define MCSPI_FMR_RXRDYM(value)               (MCSPI_FMR_RXRDYM_Msk & (_UINT32_(value) << MCSPI_FMR_RXRDYM_Pos)) /* Assigment of value for RXRDYM in the MCSPI_FMR register */
#define   MCSPI_FMR_RXRDYM_ONE_DATA_Val       _UINT32_(0x0)                                        /* (MCSPI_FMR) RDRF will be at level '1' when at least one unread data is in the Receive FIFO.  */
#define   MCSPI_FMR_RXRDYM_TWO_DATA_Val       _UINT32_(0x1)                                        /* (MCSPI_FMR) RDRF will be at level '1' when at least two unread data are in the Receive FIFO. Cannot be used when MCSPI_MR.MSTR =1, or if MCSPI_MR.PS =1.  */
#define   MCSPI_FMR_RXRDYM_FOUR_DATA_Val      _UINT32_(0x2)                                        /* (MCSPI_FMR) RDRF will be at level '1' when at least four unread data are in the Receive FIFO. Cannot be used when MCSPI_CSRx.BITS is greater than 0, or if MCSPI_MR.MSTR = 1, or if MCSPI_MR.PS = 1.  */
#define MCSPI_FMR_RXRDYM_ONE_DATA             (MCSPI_FMR_RXRDYM_ONE_DATA_Val << MCSPI_FMR_RXRDYM_Pos) /* (MCSPI_FMR) RDRF will be at level '1' when at least one unread data is in the Receive FIFO. Position  */
#define MCSPI_FMR_RXRDYM_TWO_DATA             (MCSPI_FMR_RXRDYM_TWO_DATA_Val << MCSPI_FMR_RXRDYM_Pos) /* (MCSPI_FMR) RDRF will be at level '1' when at least two unread data are in the Receive FIFO. Cannot be used when MCSPI_MR.MSTR =1, or if MCSPI_MR.PS =1. Position  */
#define MCSPI_FMR_RXRDYM_FOUR_DATA            (MCSPI_FMR_RXRDYM_FOUR_DATA_Val << MCSPI_FMR_RXRDYM_Pos) /* (MCSPI_FMR) RDRF will be at level '1' when at least four unread data are in the Receive FIFO. Cannot be used when MCSPI_CSRx.BITS is greater than 0, or if MCSPI_MR.MSTR = 1, or if MCSPI_MR.PS = 1. Position  */
#define MCSPI_FMR_TXFTHRES_Pos                _UINT32_(16)                                         /* (MCSPI_FMR) Transmit FIFO Threshold Position */
#define MCSPI_FMR_TXFTHRES_Msk                (_UINT32_(0x3F) << MCSPI_FMR_TXFTHRES_Pos)           /* (MCSPI_FMR) Transmit FIFO Threshold Mask */
#define MCSPI_FMR_TXFTHRES(value)             (MCSPI_FMR_TXFTHRES_Msk & (_UINT32_(value) << MCSPI_FMR_TXFTHRES_Pos)) /* Assigment of value for TXFTHRES in the MCSPI_FMR register */
#define MCSPI_FMR_RXFTHRES_Pos                _UINT32_(24)                                         /* (MCSPI_FMR) Receive FIFO Threshold Position */
#define MCSPI_FMR_RXFTHRES_Msk                (_UINT32_(0x3F) << MCSPI_FMR_RXFTHRES_Pos)           /* (MCSPI_FMR) Receive FIFO Threshold Mask */
#define MCSPI_FMR_RXFTHRES(value)             (MCSPI_FMR_RXFTHRES_Msk & (_UINT32_(value) << MCSPI_FMR_RXFTHRES_Pos)) /* Assigment of value for RXFTHRES in the MCSPI_FMR register */
#define MCSPI_FMR_Msk                         _UINT32_(0x3F3F0033)                                 /* (MCSPI_FMR) Register Mask  */


/* -------- MCSPI_FLR : (MCSPI Offset: 0x44) ( R/ 32) FIFO Level Register -------- */
#define MCSPI_FLR_TXFL_Pos                    _UINT32_(0)                                          /* (MCSPI_FLR) Transmit FIFO Level Position */
#define MCSPI_FLR_TXFL_Msk                    (_UINT32_(0x3F) << MCSPI_FLR_TXFL_Pos)               /* (MCSPI_FLR) Transmit FIFO Level Mask */
#define MCSPI_FLR_TXFL(value)                 (MCSPI_FLR_TXFL_Msk & (_UINT32_(value) << MCSPI_FLR_TXFL_Pos)) /* Assigment of value for TXFL in the MCSPI_FLR register */
#define MCSPI_FLR_RXFL_Pos                    _UINT32_(16)                                         /* (MCSPI_FLR) Receive FIFO Level Position */
#define MCSPI_FLR_RXFL_Msk                    (_UINT32_(0x3F) << MCSPI_FLR_RXFL_Pos)               /* (MCSPI_FLR) Receive FIFO Level Mask */
#define MCSPI_FLR_RXFL(value)                 (MCSPI_FLR_RXFL_Msk & (_UINT32_(value) << MCSPI_FLR_RXFL_Pos)) /* Assigment of value for RXFL in the MCSPI_FLR register */
#define MCSPI_FLR_Msk                         _UINT32_(0x003F003F)                                 /* (MCSPI_FLR) Register Mask  */


/* -------- MCSPI_CMPR : (MCSPI Offset: 0x48) (R/W 32) Comparison Register -------- */
#define MCSPI_CMPR_VAL1_Pos                   _UINT32_(0)                                          /* (MCSPI_CMPR) First Comparison Value for Received Character Position */
#define MCSPI_CMPR_VAL1_Msk                   (_UINT32_(0xFFFF) << MCSPI_CMPR_VAL1_Pos)            /* (MCSPI_CMPR) First Comparison Value for Received Character Mask */
#define MCSPI_CMPR_VAL1(value)                (MCSPI_CMPR_VAL1_Msk & (_UINT32_(value) << MCSPI_CMPR_VAL1_Pos)) /* Assigment of value for VAL1 in the MCSPI_CMPR register */
#define MCSPI_CMPR_VAL2_Pos                   _UINT32_(16)                                         /* (MCSPI_CMPR) Second Comparison Value for Received Character Position */
#define MCSPI_CMPR_VAL2_Msk                   (_UINT32_(0xFFFF) << MCSPI_CMPR_VAL2_Pos)            /* (MCSPI_CMPR) Second Comparison Value for Received Character Mask */
#define MCSPI_CMPR_VAL2(value)                (MCSPI_CMPR_VAL2_Msk & (_UINT32_(value) << MCSPI_CMPR_VAL2_Pos)) /* Assigment of value for VAL2 in the MCSPI_CMPR register */
#define MCSPI_CMPR_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (MCSPI_CMPR) Register Mask  */


/* -------- MCSPI_CRCR : (MCSPI Offset: 0x4C) (R/W 32) CRC Register -------- */
#define MCSPI_CRCR_FRL_Pos                    _UINT32_(0)                                          /* (MCSPI_CRCR) Frame Length Position */
#define MCSPI_CRCR_FRL_Msk                    (_UINT32_(0xFF) << MCSPI_CRCR_FRL_Pos)               /* (MCSPI_CRCR) Frame Length Mask */
#define MCSPI_CRCR_FRL(value)                 (MCSPI_CRCR_FRL_Msk & (_UINT32_(value) << MCSPI_CRCR_FRL_Pos)) /* Assigment of value for FRL in the MCSPI_CRCR register */
#define MCSPI_CRCR_CRCS_Pos                   _UINT32_(16)                                         /* (MCSPI_CRCR) CRC Size Position */
#define MCSPI_CRCR_CRCS_Msk                   (_UINT32_(0x1) << MCSPI_CRCR_CRCS_Pos)               /* (MCSPI_CRCR) CRC Size Mask */
#define MCSPI_CRCR_CRCS(value)                (MCSPI_CRCR_CRCS_Msk & (_UINT32_(value) << MCSPI_CRCR_CRCS_Pos)) /* Assigment of value for CRCS in the MCSPI_CRCR register */
#define   MCSPI_CRCR_CRCS_16B_CRC_Val         _UINT32_(0x0)                                        /* (MCSPI_CRCR) CRC size is 16 bits.  */
#define   MCSPI_CRCR_CRCS_32B_CRC_Val         _UINT32_(0x1)                                        /* (MCSPI_CRCR) CRC size is 32 bits.  */
#define MCSPI_CRCR_CRCS_16B_CRC               (MCSPI_CRCR_CRCS_16B_CRC_Val << MCSPI_CRCR_CRCS_Pos) /* (MCSPI_CRCR) CRC size is 16 bits. Position  */
#define MCSPI_CRCR_CRCS_32B_CRC               (MCSPI_CRCR_CRCS_32B_CRC_Val << MCSPI_CRCR_CRCS_Pos) /* (MCSPI_CRCR) CRC size is 32 bits. Position  */
#define MCSPI_CRCR_FRHL_Pos                   _UINT32_(20)                                         /* (MCSPI_CRCR) Frame Header Length Position */
#define MCSPI_CRCR_FRHL_Msk                   (_UINT32_(0xF) << MCSPI_CRCR_FRHL_Pos)               /* (MCSPI_CRCR) Frame Header Length Mask */
#define MCSPI_CRCR_FRHL(value)                (MCSPI_CRCR_FRHL_Msk & (_UINT32_(value) << MCSPI_CRCR_FRHL_Pos)) /* Assigment of value for FRHL in the MCSPI_CRCR register */
#define MCSPI_CRCR_CRM_Pos                    _UINT32_(24)                                         /* (MCSPI_CRCR) Continuous Read Mode Position */
#define MCSPI_CRCR_CRM_Msk                    (_UINT32_(0x1) << MCSPI_CRCR_CRM_Pos)                /* (MCSPI_CRCR) Continuous Read Mode Mask */
#define MCSPI_CRCR_CRM(value)                 (MCSPI_CRCR_CRM_Msk & (_UINT32_(value) << MCSPI_CRCR_CRM_Pos)) /* Assigment of value for CRM in the MCSPI_CRCR register */
#define MCSPI_CRCR_FHE_Pos                    _UINT32_(25)                                         /* (MCSPI_CRCR) Frame Header Excluded Position */
#define MCSPI_CRCR_FHE_Msk                    (_UINT32_(0x1) << MCSPI_CRCR_FHE_Pos)                /* (MCSPI_CRCR) Frame Header Excluded Mask */
#define MCSPI_CRCR_FHE(value)                 (MCSPI_CRCR_FHE_Msk & (_UINT32_(value) << MCSPI_CRCR_FHE_Pos)) /* Assigment of value for FHE in the MCSPI_CRCR register */
#define MCSPI_CRCR_DCRX_Pos                   _UINT32_(26)                                         /* (MCSPI_CRCR) Disable CRC Receiving Position */
#define MCSPI_CRCR_DCRX_Msk                   (_UINT32_(0x1) << MCSPI_CRCR_DCRX_Pos)               /* (MCSPI_CRCR) Disable CRC Receiving Mask */
#define MCSPI_CRCR_DCRX(value)                (MCSPI_CRCR_DCRX_Msk & (_UINT32_(value) << MCSPI_CRCR_DCRX_Pos)) /* Assigment of value for DCRX in the MCSPI_CRCR register */
#define MCSPI_CRCR_DHRX_Pos                   _UINT32_(27)                                         /* (MCSPI_CRCR) Disable Header Receiving Position */
#define MCSPI_CRCR_DHRX_Msk                   (_UINT32_(0x1) << MCSPI_CRCR_DHRX_Pos)               /* (MCSPI_CRCR) Disable Header Receiving Mask */
#define MCSPI_CRCR_DHRX(value)                (MCSPI_CRCR_DHRX_Msk & (_UINT32_(value) << MCSPI_CRCR_DHRX_Pos)) /* Assigment of value for DHRX in the MCSPI_CRCR register */
#define MCSPI_CRCR_Msk                        _UINT32_(0x0FF100FF)                                 /* (MCSPI_CRCR) Register Mask  */


/* -------- MCSPI_TPMR : (MCSPI Offset: 0x50) (R/W 32) Two-Pin Mode Register -------- */
#define MCSPI_TPMR_CSM_Pos                    _UINT32_(0)                                          /* (MCSPI_TPMR) Chip Select Mode Position */
#define MCSPI_TPMR_CSM_Msk                    (_UINT32_(0x1) << MCSPI_TPMR_CSM_Pos)                /* (MCSPI_TPMR) Chip Select Mode Mask */
#define MCSPI_TPMR_CSM(value)                 (MCSPI_TPMR_CSM_Msk & (_UINT32_(value) << MCSPI_TPMR_CSM_Pos)) /* Assigment of value for CSM in the MCSPI_TPMR register */
#define MCSPI_TPMR_MIL_Pos                    _UINT32_(1)                                          /* (MCSPI_TPMR) Multiple Input Lines Position */
#define MCSPI_TPMR_MIL_Msk                    (_UINT32_(0x1) << MCSPI_TPMR_MIL_Pos)                /* (MCSPI_TPMR) Multiple Input Lines Mask */
#define MCSPI_TPMR_MIL(value)                 (MCSPI_TPMR_MIL_Msk & (_UINT32_(value) << MCSPI_TPMR_MIL_Pos)) /* Assigment of value for MIL in the MCSPI_TPMR register */
#define MCSPI_TPMR_OSR_Pos                    _UINT32_(2)                                          /* (MCSPI_TPMR) OverSampling Rate Position */
#define MCSPI_TPMR_OSR_Msk                    (_UINT32_(0x3) << MCSPI_TPMR_OSR_Pos)                /* (MCSPI_TPMR) OverSampling Rate Mask */
#define MCSPI_TPMR_OSR(value)                 (MCSPI_TPMR_OSR_Msk & (_UINT32_(value) << MCSPI_TPMR_OSR_Pos)) /* Assigment of value for OSR in the MCSPI_TPMR register */
#define MCSPI_TPMR_Msk                        _UINT32_(0x0000000F)                                 /* (MCSPI_TPMR) Register Mask  */


/* -------- MCSPI_TPHR : (MCSPI Offset: 0x54) ( R/ 32) Two-Pin Header Register -------- */
#define MCSPI_TPHR_CNT_Pos                    _UINT32_(0)                                          /* (MCSPI_TPHR) Frame Counter Position */
#define MCSPI_TPHR_CNT_Msk                    (_UINT32_(0x3) << MCSPI_TPHR_CNT_Pos)                /* (MCSPI_TPHR) Frame Counter Mask */
#define MCSPI_TPHR_CNT(value)                 (MCSPI_TPHR_CNT_Msk & (_UINT32_(value) << MCSPI_TPHR_CNT_Pos)) /* Assigment of value for CNT in the MCSPI_TPHR register */
#define MCSPI_TPHR_BOOST_Pos                  _UINT32_(2)                                          /* (MCSPI_TPHR) Current Boost Position */
#define MCSPI_TPHR_BOOST_Msk                  (_UINT32_(0x1) << MCSPI_TPHR_BOOST_Pos)              /* (MCSPI_TPHR) Current Boost Mask */
#define MCSPI_TPHR_BOOST(value)               (MCSPI_TPHR_BOOST_Msk & (_UINT32_(value) << MCSPI_TPHR_BOOST_Pos)) /* Assigment of value for BOOST in the MCSPI_TPHR register */
#define MCSPI_TPHR_GAIN_Pos                   _UINT32_(3)                                          /* (MCSPI_TPHR) Gain Position */
#define MCSPI_TPHR_GAIN_Msk                   (_UINT32_(0x3) << MCSPI_TPHR_GAIN_Pos)               /* (MCSPI_TPHR) Gain Mask */
#define MCSPI_TPHR_GAIN(value)                (MCSPI_TPHR_GAIN_Msk & (_UINT32_(value) << MCSPI_TPHR_GAIN_Pos)) /* Assigment of value for GAIN in the MCSPI_TPHR register */
#define MCSPI_TPHR_OSR_Pos                    _UINT32_(5)                                          /* (MCSPI_TPHR) OverSampling Rate Position */
#define MCSPI_TPHR_OSR_Msk                    (_UINT32_(0x3) << MCSPI_TPHR_OSR_Pos)                /* (MCSPI_TPHR) OverSampling Rate Mask */
#define MCSPI_TPHR_OSR(value)                 (MCSPI_TPHR_OSR_Msk & (_UINT32_(value) << MCSPI_TPHR_OSR_Pos)) /* Assigment of value for OSR in the MCSPI_TPHR register */
#define MCSPI_TPHR_Msk                        _UINT32_(0x0000007F)                                 /* (MCSPI_TPHR) Register Mask  */


/* -------- MCSPI_WPMR : (MCSPI Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define MCSPI_WPMR_WPEN_Pos                   _UINT32_(0)                                          /* (MCSPI_WPMR) Write Protection Enable Position */
#define MCSPI_WPMR_WPEN_Msk                   (_UINT32_(0x1) << MCSPI_WPMR_WPEN_Pos)               /* (MCSPI_WPMR) Write Protection Enable Mask */
#define MCSPI_WPMR_WPEN(value)                (MCSPI_WPMR_WPEN_Msk & (_UINT32_(value) << MCSPI_WPMR_WPEN_Pos)) /* Assigment of value for WPEN in the MCSPI_WPMR register */
#define MCSPI_WPMR_WPITEN_Pos                 _UINT32_(1)                                          /* (MCSPI_WPMR) Write Protection Interrupt Enable Position */
#define MCSPI_WPMR_WPITEN_Msk                 (_UINT32_(0x1) << MCSPI_WPMR_WPITEN_Pos)             /* (MCSPI_WPMR) Write Protection Interrupt Enable Mask */
#define MCSPI_WPMR_WPITEN(value)              (MCSPI_WPMR_WPITEN_Msk & (_UINT32_(value) << MCSPI_WPMR_WPITEN_Pos)) /* Assigment of value for WPITEN in the MCSPI_WPMR register */
#define MCSPI_WPMR_WPCREN_Pos                 _UINT32_(2)                                          /* (MCSPI_WPMR) Write Protection Control Register Enable Position */
#define MCSPI_WPMR_WPCREN_Msk                 (_UINT32_(0x1) << MCSPI_WPMR_WPCREN_Pos)             /* (MCSPI_WPMR) Write Protection Control Register Enable Mask */
#define MCSPI_WPMR_WPCREN(value)              (MCSPI_WPMR_WPCREN_Msk & (_UINT32_(value) << MCSPI_WPMR_WPCREN_Pos)) /* Assigment of value for WPCREN in the MCSPI_WPMR register */
#define MCSPI_WPMR_WPKEY_Pos                  _UINT32_(8)                                          /* (MCSPI_WPMR) Write Protection Key Position */
#define MCSPI_WPMR_WPKEY_Msk                  (_UINT32_(0xFFFFFF) << MCSPI_WPMR_WPKEY_Pos)         /* (MCSPI_WPMR) Write Protection Key Mask */
#define MCSPI_WPMR_WPKEY(value)               (MCSPI_WPMR_WPKEY_Msk & (_UINT32_(value) << MCSPI_WPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the MCSPI_WPMR register */
#define   MCSPI_WPMR_WPKEY_PASSWD_Val         _UINT32_(0x535049)                                   /* (MCSPI_WPMR) Writing any other value in this field aborts the write operation of WPEN. Always reads as 0.  */
#define MCSPI_WPMR_WPKEY_PASSWD               (MCSPI_WPMR_WPKEY_PASSWD_Val << MCSPI_WPMR_WPKEY_Pos) /* (MCSPI_WPMR) Writing any other value in this field aborts the write operation of WPEN. Always reads as 0. Position  */
#define MCSPI_WPMR_Msk                        _UINT32_(0xFFFFFF07)                                 /* (MCSPI_WPMR) Register Mask  */


/* -------- MCSPI_WPSR : (MCSPI Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define MCSPI_WPSR_WPVS_Pos                   _UINT32_(0)                                          /* (MCSPI_WPSR) Write Protection Violation Status Position */
#define MCSPI_WPSR_WPVS_Msk                   (_UINT32_(0x1) << MCSPI_WPSR_WPVS_Pos)               /* (MCSPI_WPSR) Write Protection Violation Status Mask */
#define MCSPI_WPSR_WPVS(value)                (MCSPI_WPSR_WPVS_Msk & (_UINT32_(value) << MCSPI_WPSR_WPVS_Pos)) /* Assigment of value for WPVS in the MCSPI_WPSR register */
#define MCSPI_WPSR_WPVSRC_Pos                 _UINT32_(8)                                          /* (MCSPI_WPSR) Write Protection Violation Source Position */
#define MCSPI_WPSR_WPVSRC_Msk                 (_UINT32_(0xFF) << MCSPI_WPSR_WPVSRC_Pos)            /* (MCSPI_WPSR) Write Protection Violation Source Mask */
#define MCSPI_WPSR_WPVSRC(value)              (MCSPI_WPSR_WPVSRC_Msk & (_UINT32_(value) << MCSPI_WPSR_WPVSRC_Pos)) /* Assigment of value for WPVSRC in the MCSPI_WPSR register */
#define MCSPI_WPSR_Msk                        _UINT32_(0x0000FF01)                                 /* (MCSPI_WPSR) Register Mask  */


/* -------- MCSPI_RPR : (MCSPI Offset: 0x100) (R/W 32) Receive Pointer Register -------- */
#define MCSPI_RPR_RXPTR_Pos                   _UINT32_(0)                                          /* (MCSPI_RPR) Receive Pointer Register Position */
#define MCSPI_RPR_RXPTR_Msk                   (_UINT32_(0xFFFFFFFF) << MCSPI_RPR_RXPTR_Pos)        /* (MCSPI_RPR) Receive Pointer Register Mask */
#define MCSPI_RPR_RXPTR(value)                (MCSPI_RPR_RXPTR_Msk & (_UINT32_(value) << MCSPI_RPR_RXPTR_Pos)) /* Assigment of value for RXPTR in the MCSPI_RPR register */
#define MCSPI_RPR_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (MCSPI_RPR) Register Mask  */


/* -------- MCSPI_RCR : (MCSPI Offset: 0x104) (R/W 32) Receive Counter Register -------- */
#define MCSPI_RCR_RXCTR_Pos                   _UINT32_(0)                                          /* (MCSPI_RCR) Receive Counter Register Position */
#define MCSPI_RCR_RXCTR_Msk                   (_UINT32_(0xFFFF) << MCSPI_RCR_RXCTR_Pos)            /* (MCSPI_RCR) Receive Counter Register Mask */
#define MCSPI_RCR_RXCTR(value)                (MCSPI_RCR_RXCTR_Msk & (_UINT32_(value) << MCSPI_RCR_RXCTR_Pos)) /* Assigment of value for RXCTR in the MCSPI_RCR register */
#define MCSPI_RCR_Msk                         _UINT32_(0x0000FFFF)                                 /* (MCSPI_RCR) Register Mask  */


/* -------- MCSPI_TPR : (MCSPI Offset: 0x108) (R/W 32) Transmit Pointer Register -------- */
#define MCSPI_TPR_TXPTR_Pos                   _UINT32_(0)                                          /* (MCSPI_TPR) Transmit Counter Register Position */
#define MCSPI_TPR_TXPTR_Msk                   (_UINT32_(0xFFFFFFFF) << MCSPI_TPR_TXPTR_Pos)        /* (MCSPI_TPR) Transmit Counter Register Mask */
#define MCSPI_TPR_TXPTR(value)                (MCSPI_TPR_TXPTR_Msk & (_UINT32_(value) << MCSPI_TPR_TXPTR_Pos)) /* Assigment of value for TXPTR in the MCSPI_TPR register */
#define MCSPI_TPR_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (MCSPI_TPR) Register Mask  */


/* -------- MCSPI_TCR : (MCSPI Offset: 0x10C) (R/W 32) Transmit Counter Register -------- */
#define MCSPI_TCR_TXCTR_Pos                   _UINT32_(0)                                          /* (MCSPI_TCR) Transmit Counter Register Position */
#define MCSPI_TCR_TXCTR_Msk                   (_UINT32_(0xFFFF) << MCSPI_TCR_TXCTR_Pos)            /* (MCSPI_TCR) Transmit Counter Register Mask */
#define MCSPI_TCR_TXCTR(value)                (MCSPI_TCR_TXCTR_Msk & (_UINT32_(value) << MCSPI_TCR_TXCTR_Pos)) /* Assigment of value for TXCTR in the MCSPI_TCR register */
#define MCSPI_TCR_Msk                         _UINT32_(0x0000FFFF)                                 /* (MCSPI_TCR) Register Mask  */


/* -------- MCSPI_RNPR : (MCSPI Offset: 0x110) (R/W 32) Receive Next Pointer Register -------- */
#define MCSPI_RNPR_RXNPTR_Pos                 _UINT32_(0)                                          /* (MCSPI_RNPR) Receive Next Pointer Position */
#define MCSPI_RNPR_RXNPTR_Msk                 (_UINT32_(0xFFFFFFFF) << MCSPI_RNPR_RXNPTR_Pos)      /* (MCSPI_RNPR) Receive Next Pointer Mask */
#define MCSPI_RNPR_RXNPTR(value)              (MCSPI_RNPR_RXNPTR_Msk & (_UINT32_(value) << MCSPI_RNPR_RXNPTR_Pos)) /* Assigment of value for RXNPTR in the MCSPI_RNPR register */
#define MCSPI_RNPR_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (MCSPI_RNPR) Register Mask  */


/* -------- MCSPI_RNCR : (MCSPI Offset: 0x114) (R/W 32) Receive Next Counter Register -------- */
#define MCSPI_RNCR_RXNCTR_Pos                 _UINT32_(0)                                          /* (MCSPI_RNCR) Receive Next Counter Position */
#define MCSPI_RNCR_RXNCTR_Msk                 (_UINT32_(0xFFFF) << MCSPI_RNCR_RXNCTR_Pos)          /* (MCSPI_RNCR) Receive Next Counter Mask */
#define MCSPI_RNCR_RXNCTR(value)              (MCSPI_RNCR_RXNCTR_Msk & (_UINT32_(value) << MCSPI_RNCR_RXNCTR_Pos)) /* Assigment of value for RXNCTR in the MCSPI_RNCR register */
#define MCSPI_RNCR_Msk                        _UINT32_(0x0000FFFF)                                 /* (MCSPI_RNCR) Register Mask  */


/* -------- MCSPI_TNPR : (MCSPI Offset: 0x118) (R/W 32) Transmit Next Pointer Register -------- */
#define MCSPI_TNPR_TXNPTR_Pos                 _UINT32_(0)                                          /* (MCSPI_TNPR) Transmit Next Pointer Position */
#define MCSPI_TNPR_TXNPTR_Msk                 (_UINT32_(0xFFFFFFFF) << MCSPI_TNPR_TXNPTR_Pos)      /* (MCSPI_TNPR) Transmit Next Pointer Mask */
#define MCSPI_TNPR_TXNPTR(value)              (MCSPI_TNPR_TXNPTR_Msk & (_UINT32_(value) << MCSPI_TNPR_TXNPTR_Pos)) /* Assigment of value for TXNPTR in the MCSPI_TNPR register */
#define MCSPI_TNPR_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (MCSPI_TNPR) Register Mask  */


/* -------- MCSPI_TNCR : (MCSPI Offset: 0x11C) (R/W 32) Transmit Next Counter Register -------- */
#define MCSPI_TNCR_TXNCTR_Pos                 _UINT32_(0)                                          /* (MCSPI_TNCR) Transmit Counter Next Position */
#define MCSPI_TNCR_TXNCTR_Msk                 (_UINT32_(0xFFFF) << MCSPI_TNCR_TXNCTR_Pos)          /* (MCSPI_TNCR) Transmit Counter Next Mask */
#define MCSPI_TNCR_TXNCTR(value)              (MCSPI_TNCR_TXNCTR_Msk & (_UINT32_(value) << MCSPI_TNCR_TXNCTR_Pos)) /* Assigment of value for TXNCTR in the MCSPI_TNCR register */
#define MCSPI_TNCR_Msk                        _UINT32_(0x0000FFFF)                                 /* (MCSPI_TNCR) Register Mask  */


/* -------- MCSPI_PTCR : (MCSPI Offset: 0x120) ( /W 32) Transfer Control Register -------- */
#define MCSPI_PTCR_RXTEN_Pos                  _UINT32_(0)                                          /* (MCSPI_PTCR) Receiver Transfer Enable Position */
#define MCSPI_PTCR_RXTEN_Msk                  (_UINT32_(0x1) << MCSPI_PTCR_RXTEN_Pos)              /* (MCSPI_PTCR) Receiver Transfer Enable Mask */
#define MCSPI_PTCR_RXTEN(value)               (MCSPI_PTCR_RXTEN_Msk & (_UINT32_(value) << MCSPI_PTCR_RXTEN_Pos)) /* Assigment of value for RXTEN in the MCSPI_PTCR register */
#define MCSPI_PTCR_RXTDIS_Pos                 _UINT32_(1)                                          /* (MCSPI_PTCR) Receiver Transfer Disable Position */
#define MCSPI_PTCR_RXTDIS_Msk                 (_UINT32_(0x1) << MCSPI_PTCR_RXTDIS_Pos)             /* (MCSPI_PTCR) Receiver Transfer Disable Mask */
#define MCSPI_PTCR_RXTDIS(value)              (MCSPI_PTCR_RXTDIS_Msk & (_UINT32_(value) << MCSPI_PTCR_RXTDIS_Pos)) /* Assigment of value for RXTDIS in the MCSPI_PTCR register */
#define MCSPI_PTCR_TXTEN_Pos                  _UINT32_(8)                                          /* (MCSPI_PTCR) Transmitter Transfer Enable Position */
#define MCSPI_PTCR_TXTEN_Msk                  (_UINT32_(0x1) << MCSPI_PTCR_TXTEN_Pos)              /* (MCSPI_PTCR) Transmitter Transfer Enable Mask */
#define MCSPI_PTCR_TXTEN(value)               (MCSPI_PTCR_TXTEN_Msk & (_UINT32_(value) << MCSPI_PTCR_TXTEN_Pos)) /* Assigment of value for TXTEN in the MCSPI_PTCR register */
#define MCSPI_PTCR_TXTDIS_Pos                 _UINT32_(9)                                          /* (MCSPI_PTCR) Transmitter Transfer Disable Position */
#define MCSPI_PTCR_TXTDIS_Msk                 (_UINT32_(0x1) << MCSPI_PTCR_TXTDIS_Pos)             /* (MCSPI_PTCR) Transmitter Transfer Disable Mask */
#define MCSPI_PTCR_TXTDIS(value)              (MCSPI_PTCR_TXTDIS_Msk & (_UINT32_(value) << MCSPI_PTCR_TXTDIS_Pos)) /* Assigment of value for TXTDIS in the MCSPI_PTCR register */
#define MCSPI_PTCR_RXCBEN_Pos                 _UINT32_(16)                                         /* (MCSPI_PTCR) Receiver Circular Buffer Enable Position */
#define MCSPI_PTCR_RXCBEN_Msk                 (_UINT32_(0x1) << MCSPI_PTCR_RXCBEN_Pos)             /* (MCSPI_PTCR) Receiver Circular Buffer Enable Mask */
#define MCSPI_PTCR_RXCBEN(value)              (MCSPI_PTCR_RXCBEN_Msk & (_UINT32_(value) << MCSPI_PTCR_RXCBEN_Pos)) /* Assigment of value for RXCBEN in the MCSPI_PTCR register */
#define MCSPI_PTCR_RXCBDIS_Pos                _UINT32_(17)                                         /* (MCSPI_PTCR) Receiver Circular Buffer Disable Position */
#define MCSPI_PTCR_RXCBDIS_Msk                (_UINT32_(0x1) << MCSPI_PTCR_RXCBDIS_Pos)            /* (MCSPI_PTCR) Receiver Circular Buffer Disable Mask */
#define MCSPI_PTCR_RXCBDIS(value)             (MCSPI_PTCR_RXCBDIS_Msk & (_UINT32_(value) << MCSPI_PTCR_RXCBDIS_Pos)) /* Assigment of value for RXCBDIS in the MCSPI_PTCR register */
#define MCSPI_PTCR_TXCBEN_Pos                 _UINT32_(18)                                         /* (MCSPI_PTCR) Transmitter Circular Buffer Enable Position */
#define MCSPI_PTCR_TXCBEN_Msk                 (_UINT32_(0x1) << MCSPI_PTCR_TXCBEN_Pos)             /* (MCSPI_PTCR) Transmitter Circular Buffer Enable Mask */
#define MCSPI_PTCR_TXCBEN(value)              (MCSPI_PTCR_TXCBEN_Msk & (_UINT32_(value) << MCSPI_PTCR_TXCBEN_Pos)) /* Assigment of value for TXCBEN in the MCSPI_PTCR register */
#define MCSPI_PTCR_TXCBDIS_Pos                _UINT32_(19)                                         /* (MCSPI_PTCR) Transmitter Circular Buffer Disable Position */
#define MCSPI_PTCR_TXCBDIS_Msk                (_UINT32_(0x1) << MCSPI_PTCR_TXCBDIS_Pos)            /* (MCSPI_PTCR) Transmitter Circular Buffer Disable Mask */
#define MCSPI_PTCR_TXCBDIS(value)             (MCSPI_PTCR_TXCBDIS_Msk & (_UINT32_(value) << MCSPI_PTCR_TXCBDIS_Pos)) /* Assigment of value for TXCBDIS in the MCSPI_PTCR register */
#define MCSPI_PTCR_ERRCLR_Pos                 _UINT32_(24)                                         /* (MCSPI_PTCR) Transfer Bus Error Clear Position */
#define MCSPI_PTCR_ERRCLR_Msk                 (_UINT32_(0x1) << MCSPI_PTCR_ERRCLR_Pos)             /* (MCSPI_PTCR) Transfer Bus Error Clear Mask */
#define MCSPI_PTCR_ERRCLR(value)              (MCSPI_PTCR_ERRCLR_Msk & (_UINT32_(value) << MCSPI_PTCR_ERRCLR_Pos)) /* Assigment of value for ERRCLR in the MCSPI_PTCR register */
#define MCSPI_PTCR_Msk                        _UINT32_(0x010F0303)                                 /* (MCSPI_PTCR) Register Mask  */


/* -------- MCSPI_PTSR : (MCSPI Offset: 0x124) ( R/ 32) Transfer Status Register -------- */
#define MCSPI_PTSR_RXTEN_Pos                  _UINT32_(0)                                          /* (MCSPI_PTSR) Receiver Transfer Enable Position */
#define MCSPI_PTSR_RXTEN_Msk                  (_UINT32_(0x1) << MCSPI_PTSR_RXTEN_Pos)              /* (MCSPI_PTSR) Receiver Transfer Enable Mask */
#define MCSPI_PTSR_RXTEN(value)               (MCSPI_PTSR_RXTEN_Msk & (_UINT32_(value) << MCSPI_PTSR_RXTEN_Pos)) /* Assigment of value for RXTEN in the MCSPI_PTSR register */
#define MCSPI_PTSR_TXTEN_Pos                  _UINT32_(8)                                          /* (MCSPI_PTSR) Transmitter Transfer Enable Position */
#define MCSPI_PTSR_TXTEN_Msk                  (_UINT32_(0x1) << MCSPI_PTSR_TXTEN_Pos)              /* (MCSPI_PTSR) Transmitter Transfer Enable Mask */
#define MCSPI_PTSR_TXTEN(value)               (MCSPI_PTSR_TXTEN_Msk & (_UINT32_(value) << MCSPI_PTSR_TXTEN_Pos)) /* Assigment of value for TXTEN in the MCSPI_PTSR register */
#define MCSPI_PTSR_RXCBEN_Pos                 _UINT32_(16)                                         /* (MCSPI_PTSR) Receiver Circular Buffer Enable Position */
#define MCSPI_PTSR_RXCBEN_Msk                 (_UINT32_(0x1) << MCSPI_PTSR_RXCBEN_Pos)             /* (MCSPI_PTSR) Receiver Circular Buffer Enable Mask */
#define MCSPI_PTSR_RXCBEN(value)              (MCSPI_PTSR_RXCBEN_Msk & (_UINT32_(value) << MCSPI_PTSR_RXCBEN_Pos)) /* Assigment of value for RXCBEN in the MCSPI_PTSR register */
#define MCSPI_PTSR_TXCBEN_Pos                 _UINT32_(18)                                         /* (MCSPI_PTSR) Transmitter Circular Buffer Enable Position */
#define MCSPI_PTSR_TXCBEN_Msk                 (_UINT32_(0x1) << MCSPI_PTSR_TXCBEN_Pos)             /* (MCSPI_PTSR) Transmitter Circular Buffer Enable Mask */
#define MCSPI_PTSR_TXCBEN(value)              (MCSPI_PTSR_TXCBEN_Msk & (_UINT32_(value) << MCSPI_PTSR_TXCBEN_Pos)) /* Assigment of value for TXCBEN in the MCSPI_PTSR register */
#define MCSPI_PTSR_ERR_Pos                    _UINT32_(24)                                         /* (MCSPI_PTSR) Transfer Bus Error Position */
#define MCSPI_PTSR_ERR_Msk                    (_UINT32_(0x1) << MCSPI_PTSR_ERR_Pos)                /* (MCSPI_PTSR) Transfer Bus Error Mask */
#define MCSPI_PTSR_ERR(value)                 (MCSPI_PTSR_ERR_Msk & (_UINT32_(value) << MCSPI_PTSR_ERR_Pos)) /* Assigment of value for ERR in the MCSPI_PTSR register */
#define MCSPI_PTSR_Msk                        _UINT32_(0x01050101)                                 /* (MCSPI_PTSR) Register Mask  */


/* -------- MCSPI_PWPMR : (MCSPI Offset: 0x128) (R/W 32) Write Protection Mode Register -------- */
#define MCSPI_PWPMR_WPPTREN_Pos               _UINT32_(0)                                          /* (MCSPI_PWPMR) Write Protection Pointer Registers Enable Position */
#define MCSPI_PWPMR_WPPTREN_Msk               (_UINT32_(0x1) << MCSPI_PWPMR_WPPTREN_Pos)           /* (MCSPI_PWPMR) Write Protection Pointer Registers Enable Mask */
#define MCSPI_PWPMR_WPPTREN(value)            (MCSPI_PWPMR_WPPTREN_Msk & (_UINT32_(value) << MCSPI_PWPMR_WPPTREN_Pos)) /* Assigment of value for WPPTREN in the MCSPI_PWPMR register */
#define MCSPI_PWPMR_WPCTREN_Pos               _UINT32_(1)                                          /* (MCSPI_PWPMR) Write Protection Counter Registers Enable Position */
#define MCSPI_PWPMR_WPCTREN_Msk               (_UINT32_(0x1) << MCSPI_PWPMR_WPCTREN_Pos)           /* (MCSPI_PWPMR) Write Protection Counter Registers Enable Mask */
#define MCSPI_PWPMR_WPCTREN(value)            (MCSPI_PWPMR_WPCTREN_Msk & (_UINT32_(value) << MCSPI_PWPMR_WPCTREN_Pos)) /* Assigment of value for WPCTREN in the MCSPI_PWPMR register */
#define MCSPI_PWPMR_WPCREN_Pos                _UINT32_(2)                                          /* (MCSPI_PWPMR) Write Protection Control Register Enable Position */
#define MCSPI_PWPMR_WPCREN_Msk                (_UINT32_(0x1) << MCSPI_PWPMR_WPCREN_Pos)            /* (MCSPI_PWPMR) Write Protection Control Register Enable Mask */
#define MCSPI_PWPMR_WPCREN(value)             (MCSPI_PWPMR_WPCREN_Msk & (_UINT32_(value) << MCSPI_PWPMR_WPCREN_Pos)) /* Assigment of value for WPCREN in the MCSPI_PWPMR register */
#define MCSPI_PWPMR_WPKEY_Pos                 _UINT32_(8)                                          /* (MCSPI_PWPMR) Write Protection Key Position */
#define MCSPI_PWPMR_WPKEY_Msk                 (_UINT32_(0xFFFFFF) << MCSPI_PWPMR_WPKEY_Pos)        /* (MCSPI_PWPMR) Write Protection Key Mask */
#define MCSPI_PWPMR_WPKEY(value)              (MCSPI_PWPMR_WPKEY_Msk & (_UINT32_(value) << MCSPI_PWPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the MCSPI_PWPMR register */
#define   MCSPI_PWPMR_WPKEY_PASSWD_Val        _UINT32_(0x504443)                                   /* (MCSPI_PWPMR) Writing any other value in this field aborts the write operation. Always reads as 0.  */
#define MCSPI_PWPMR_WPKEY_PASSWD              (MCSPI_PWPMR_WPKEY_PASSWD_Val << MCSPI_PWPMR_WPKEY_Pos) /* (MCSPI_PWPMR) Writing any other value in this field aborts the write operation. Always reads as 0. Position  */
#define MCSPI_PWPMR_Msk                       _UINT32_(0xFFFFFF07)                                 /* (MCSPI_PWPMR) Register Mask  */


/** \brief MCSPI register offsets definitions */
#define MCSPI_CR_REG_OFST              _UINT32_(0x00)      /* (MCSPI_CR) Control Register Offset */
#define MCSPI_MR_REG_OFST              _UINT32_(0x04)      /* (MCSPI_MR) Mode Register Offset */
#define MCSPI_RDR_REG_OFST             _UINT32_(0x08)      /* (MCSPI_RDR) Receive Data Register Offset */
#define MCSPI_TDR_REG_OFST             _UINT32_(0x0C)      /* (MCSPI_TDR) Transmit Data Register Offset */
#define MCSPI_SR_REG_OFST              _UINT32_(0x10)      /* (MCSPI_SR) Status Register Offset */
#define MCSPI_IER_REG_OFST             _UINT32_(0x14)      /* (MCSPI_IER) Interrupt Enable Register Offset */
#define MCSPI_IDR_REG_OFST             _UINT32_(0x18)      /* (MCSPI_IDR) Interrupt Disable Register Offset */
#define MCSPI_IMR_REG_OFST             _UINT32_(0x1C)      /* (MCSPI_IMR) Interrupt Mask Register Offset */
#define MCSPI_CSR_REG_OFST             _UINT32_(0x30)      /* (MCSPI_CSR) Chip Select Register (CS_number = 0) Offset */
#define MCSPI_CSR0_REG_OFST            _UINT32_(0x30)      /* (MCSPI_CSR0) Chip Select Register (CS_number = 0) Offset */
#define MCSPI_CSR1_REG_OFST            _UINT32_(0x34)      /* (MCSPI_CSR1) Chip Select Register (CS_number = 0) Offset */
#define MCSPI_CSR2_REG_OFST            _UINT32_(0x38)      /* (MCSPI_CSR2) Chip Select Register (CS_number = 0) Offset */
#define MCSPI_CSR3_REG_OFST            _UINT32_(0x3C)      /* (MCSPI_CSR3) Chip Select Register (CS_number = 0) Offset */
#define MCSPI_FMR_REG_OFST             _UINT32_(0x40)      /* (MCSPI_FMR) FIFO Mode Register Offset */
#define MCSPI_FLR_REG_OFST             _UINT32_(0x44)      /* (MCSPI_FLR) FIFO Level Register Offset */
#define MCSPI_CMPR_REG_OFST            _UINT32_(0x48)      /* (MCSPI_CMPR) Comparison Register Offset */
#define MCSPI_CRCR_REG_OFST            _UINT32_(0x4C)      /* (MCSPI_CRCR) CRC Register Offset */
#define MCSPI_TPMR_REG_OFST            _UINT32_(0x50)      /* (MCSPI_TPMR) Two-Pin Mode Register Offset */
#define MCSPI_TPHR_REG_OFST            _UINT32_(0x54)      /* (MCSPI_TPHR) Two-Pin Header Register Offset */
#define MCSPI_WPMR_REG_OFST            _UINT32_(0xE4)      /* (MCSPI_WPMR) Write Protection Mode Register Offset */
#define MCSPI_WPSR_REG_OFST            _UINT32_(0xE8)      /* (MCSPI_WPSR) Write Protection Status Register Offset */
#define MCSPI_RPR_REG_OFST             _UINT32_(0x100)     /* (MCSPI_RPR) Receive Pointer Register Offset */
#define MCSPI_RCR_REG_OFST             _UINT32_(0x104)     /* (MCSPI_RCR) Receive Counter Register Offset */
#define MCSPI_TPR_REG_OFST             _UINT32_(0x108)     /* (MCSPI_TPR) Transmit Pointer Register Offset */
#define MCSPI_TCR_REG_OFST             _UINT32_(0x10C)     /* (MCSPI_TCR) Transmit Counter Register Offset */
#define MCSPI_RNPR_REG_OFST            _UINT32_(0x110)     /* (MCSPI_RNPR) Receive Next Pointer Register Offset */
#define MCSPI_RNCR_REG_OFST            _UINT32_(0x114)     /* (MCSPI_RNCR) Receive Next Counter Register Offset */
#define MCSPI_TNPR_REG_OFST            _UINT32_(0x118)     /* (MCSPI_TNPR) Transmit Next Pointer Register Offset */
#define MCSPI_TNCR_REG_OFST            _UINT32_(0x11C)     /* (MCSPI_TNCR) Transmit Next Counter Register Offset */
#define MCSPI_PTCR_REG_OFST            _UINT32_(0x120)     /* (MCSPI_PTCR) Transfer Control Register Offset */
#define MCSPI_PTSR_REG_OFST            _UINT32_(0x124)     /* (MCSPI_PTSR) Transfer Status Register Offset */
#define MCSPI_PWPMR_REG_OFST           _UINT32_(0x128)     /* (MCSPI_PWPMR) Write Protection Mode Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief MCSPI register API structure */
typedef struct
{
  __O   uint32_t                       MCSPI_CR;           /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       MCSPI_MR;           /**< Offset: 0x04 (R/W  32) Mode Register */
  __I   uint32_t                       MCSPI_RDR;          /**< Offset: 0x08 (R/   32) Receive Data Register */
  __O   uint32_t                       MCSPI_TDR;          /**< Offset: 0x0C ( /W  32) Transmit Data Register */
  __I   uint32_t                       MCSPI_SR;           /**< Offset: 0x10 (R/   32) Status Register */
  __O   uint32_t                       MCSPI_IER;          /**< Offset: 0x14 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       MCSPI_IDR;          /**< Offset: 0x18 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       MCSPI_IMR;          /**< Offset: 0x1C (R/   32) Interrupt Mask Register */
  __I   uint8_t                        Reserved1[0x10];
  __IO  uint32_t                       MCSPI_CSR[4];       /**< Offset: 0x30 (R/W  32) Chip Select Register (CS_number = 0) */
  __IO  uint32_t                       MCSPI_FMR;          /**< Offset: 0x40 (R/W  32) FIFO Mode Register */
  __I   uint32_t                       MCSPI_FLR;          /**< Offset: 0x44 (R/   32) FIFO Level Register */
  __IO  uint32_t                       MCSPI_CMPR;         /**< Offset: 0x48 (R/W  32) Comparison Register */
  __IO  uint32_t                       MCSPI_CRCR;         /**< Offset: 0x4C (R/W  32) CRC Register */
  __IO  uint32_t                       MCSPI_TPMR;         /**< Offset: 0x50 (R/W  32) Two-Pin Mode Register */
  __I   uint32_t                       MCSPI_TPHR;         /**< Offset: 0x54 (R/   32) Two-Pin Header Register */
  __I   uint8_t                        Reserved2[0x8C];
  __IO  uint32_t                       MCSPI_WPMR;         /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       MCSPI_WPSR;         /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
  __I   uint8_t                        Reserved3[0x14];
  __IO  uint32_t                       MCSPI_RPR;          /**< Offset: 0x100 (R/W  32) Receive Pointer Register */
  __IO  uint32_t                       MCSPI_RCR;          /**< Offset: 0x104 (R/W  32) Receive Counter Register */
  __IO  uint32_t                       MCSPI_TPR;          /**< Offset: 0x108 (R/W  32) Transmit Pointer Register */
  __IO  uint32_t                       MCSPI_TCR;          /**< Offset: 0x10C (R/W  32) Transmit Counter Register */
  __IO  uint32_t                       MCSPI_RNPR;         /**< Offset: 0x110 (R/W  32) Receive Next Pointer Register */
  __IO  uint32_t                       MCSPI_RNCR;         /**< Offset: 0x114 (R/W  32) Receive Next Counter Register */
  __IO  uint32_t                       MCSPI_TNPR;         /**< Offset: 0x118 (R/W  32) Transmit Next Pointer Register */
  __IO  uint32_t                       MCSPI_TNCR;         /**< Offset: 0x11C (R/W  32) Transmit Next Counter Register */
  __O   uint32_t                       MCSPI_PTCR;         /**< Offset: 0x120 ( /W  32) Transfer Control Register */
  __I   uint32_t                       MCSPI_PTSR;         /**< Offset: 0x124 (R/   32) Transfer Status Register */
  __IO  uint32_t                       MCSPI_PWPMR;        /**< Offset: 0x128 (R/W  32) Write Protection Mode Register */
} mcspi_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CXMTSH_MCSPI_COMPONENT_H_ */
