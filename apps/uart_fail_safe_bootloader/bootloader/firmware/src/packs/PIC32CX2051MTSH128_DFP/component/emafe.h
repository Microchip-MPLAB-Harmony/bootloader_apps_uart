/*
 * Component description for EMAFE
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
#ifndef _PIC32CXMTSH_EMAFE_COMPONENT_H_
#define _PIC32CXMTSH_EMAFE_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR EMAFE                                        */
/* ************************************************************************** */

/* -------- EMAFE_CR : (EMAFE Offset: 0x00) ( /W 32) Control Register -------- */
#define EMAFE_CR_SWRST_Pos                    _UINT32_(0)                                          /* (EMAFE_CR) Software Reset Position */
#define EMAFE_CR_SWRST_Msk                    (_UINT32_(0x1) << EMAFE_CR_SWRST_Pos)                /* (EMAFE_CR) Software Reset Mask */
#define EMAFE_CR_SWRST(value)                 (EMAFE_CR_SWRST_Msk & (_UINT32_(value) << EMAFE_CR_SWRST_Pos)) /* Assigment of value for SWRST in the EMAFE_CR register */
#define EMAFE_CR_SWRST_DECIM_Pos              _UINT32_(1)                                          /* (EMAFE_CR) Sinc Decimation Filters Reset Position */
#define EMAFE_CR_SWRST_DECIM_Msk              (_UINT32_(0x1) << EMAFE_CR_SWRST_DECIM_Pos)          /* (EMAFE_CR) Sinc Decimation Filters Reset Mask */
#define EMAFE_CR_SWRST_DECIM(value)           (EMAFE_CR_SWRST_DECIM_Msk & (_UINT32_(value) << EMAFE_CR_SWRST_DECIM_Pos)) /* Assigment of value for SWRST_DECIM in the EMAFE_CR register */
#define EMAFE_CR_Msk                          _UINT32_(0x00000003)                                 /* (EMAFE_CR) Register Mask  */


/* -------- EMAFE_MR : (EMAFE Offset: 0x04) (R/W 32) Mode Register -------- */
#define EMAFE_MR_LPF_ON0_Pos                  _UINT32_(0)                                          /* (EMAFE_MR) Low-Pass Filter 0 On Position */
#define EMAFE_MR_LPF_ON0_Msk                  (_UINT32_(0x1) << EMAFE_MR_LPF_ON0_Pos)              /* (EMAFE_MR) Low-Pass Filter 0 On Mask */
#define EMAFE_MR_LPF_ON0(value)               (EMAFE_MR_LPF_ON0_Msk & (_UINT32_(value) << EMAFE_MR_LPF_ON0_Pos)) /* Assigment of value for LPF_ON0 in the EMAFE_MR register */
#define EMAFE_MR_LPF_ON1_Pos                  _UINT32_(1)                                          /* (EMAFE_MR) Low-Pass Filter 1 On Position */
#define EMAFE_MR_LPF_ON1_Msk                  (_UINT32_(0x1) << EMAFE_MR_LPF_ON1_Pos)              /* (EMAFE_MR) Low-Pass Filter 1 On Mask */
#define EMAFE_MR_LPF_ON1(value)               (EMAFE_MR_LPF_ON1_Msk & (_UINT32_(value) << EMAFE_MR_LPF_ON1_Pos)) /* Assigment of value for LPF_ON1 in the EMAFE_MR register */
#define EMAFE_MR_LPF_ON2_Pos                  _UINT32_(2)                                          /* (EMAFE_MR) Low-Pass Filter 2 On Position */
#define EMAFE_MR_LPF_ON2_Msk                  (_UINT32_(0x1) << EMAFE_MR_LPF_ON2_Pos)              /* (EMAFE_MR) Low-Pass Filter 2 On Mask */
#define EMAFE_MR_LPF_ON2(value)               (EMAFE_MR_LPF_ON2_Msk & (_UINT32_(value) << EMAFE_MR_LPF_ON2_Pos)) /* Assigment of value for LPF_ON2 in the EMAFE_MR register */
#define EMAFE_MR_LPF_ON3_Pos                  _UINT32_(3)                                          /* (EMAFE_MR) Low-Pass Filter 3 On Position */
#define EMAFE_MR_LPF_ON3_Msk                  (_UINT32_(0x1) << EMAFE_MR_LPF_ON3_Pos)              /* (EMAFE_MR) Low-Pass Filter 3 On Mask */
#define EMAFE_MR_LPF_ON3(value)               (EMAFE_MR_LPF_ON3_Msk & (_UINT32_(value) << EMAFE_MR_LPF_ON3_Pos)) /* Assigment of value for LPF_ON3 in the EMAFE_MR register */
#define EMAFE_MR_LPF_ON4_Pos                  _UINT32_(4)                                          /* (EMAFE_MR) Low-Pass Filter 4 On Position */
#define EMAFE_MR_LPF_ON4_Msk                  (_UINT32_(0x1) << EMAFE_MR_LPF_ON4_Pos)              /* (EMAFE_MR) Low-Pass Filter 4 On Mask */
#define EMAFE_MR_LPF_ON4(value)               (EMAFE_MR_LPF_ON4_Msk & (_UINT32_(value) << EMAFE_MR_LPF_ON4_Pos)) /* Assigment of value for LPF_ON4 in the EMAFE_MR register */
#define EMAFE_MR_DMA_ON_Pos                   _UINT32_(7)                                          /* (EMAFE_MR) Direct Memory Access On Position */
#define EMAFE_MR_DMA_ON_Msk                   (_UINT32_(0x1) << EMAFE_MR_DMA_ON_Pos)               /* (EMAFE_MR) Direct Memory Access On Mask */
#define EMAFE_MR_DMA_ON(value)                (EMAFE_MR_DMA_ON_Msk & (_UINT32_(value) << EMAFE_MR_DMA_ON_Pos)) /* Assigment of value for DMA_ON in the EMAFE_MR register */
#define EMAFE_MR_DMACH0_Pos                   _UINT32_(8)                                          /* (EMAFE_MR) Channel 0 Enable for DMA transfer Position */
#define EMAFE_MR_DMACH0_Msk                   (_UINT32_(0x1) << EMAFE_MR_DMACH0_Pos)               /* (EMAFE_MR) Channel 0 Enable for DMA transfer Mask */
#define EMAFE_MR_DMACH0(value)                (EMAFE_MR_DMACH0_Msk & (_UINT32_(value) << EMAFE_MR_DMACH0_Pos)) /* Assigment of value for DMACH0 in the EMAFE_MR register */
#define EMAFE_MR_DMACH1_Pos                   _UINT32_(9)                                          /* (EMAFE_MR) Channel 1 Enable for DMA transfer Position */
#define EMAFE_MR_DMACH1_Msk                   (_UINT32_(0x1) << EMAFE_MR_DMACH1_Pos)               /* (EMAFE_MR) Channel 1 Enable for DMA transfer Mask */
#define EMAFE_MR_DMACH1(value)                (EMAFE_MR_DMACH1_Msk & (_UINT32_(value) << EMAFE_MR_DMACH1_Pos)) /* Assigment of value for DMACH1 in the EMAFE_MR register */
#define EMAFE_MR_DMACH2_Pos                   _UINT32_(10)                                         /* (EMAFE_MR) Channel 2 Enable for DMA transfer Position */
#define EMAFE_MR_DMACH2_Msk                   (_UINT32_(0x1) << EMAFE_MR_DMACH2_Pos)               /* (EMAFE_MR) Channel 2 Enable for DMA transfer Mask */
#define EMAFE_MR_DMACH2(value)                (EMAFE_MR_DMACH2_Msk & (_UINT32_(value) << EMAFE_MR_DMACH2_Pos)) /* Assigment of value for DMACH2 in the EMAFE_MR register */
#define EMAFE_MR_DMACH3_Pos                   _UINT32_(11)                                         /* (EMAFE_MR) Channel 3 Enable for DMA transfer Position */
#define EMAFE_MR_DMACH3_Msk                   (_UINT32_(0x1) << EMAFE_MR_DMACH3_Pos)               /* (EMAFE_MR) Channel 3 Enable for DMA transfer Mask */
#define EMAFE_MR_DMACH3(value)                (EMAFE_MR_DMACH3_Msk & (_UINT32_(value) << EMAFE_MR_DMACH3_Pos)) /* Assigment of value for DMACH3 in the EMAFE_MR register */
#define EMAFE_MR_DMACH4_Pos                   _UINT32_(12)                                         /* (EMAFE_MR) Channel 4 Enable for DMA transfer Position */
#define EMAFE_MR_DMACH4_Msk                   (_UINT32_(0x1) << EMAFE_MR_DMACH4_Pos)               /* (EMAFE_MR) Channel 4 Enable for DMA transfer Mask */
#define EMAFE_MR_DMACH4(value)                (EMAFE_MR_DMACH4_Msk & (_UINT32_(value) << EMAFE_MR_DMACH4_Pos)) /* Assigment of value for DMACH4 in the EMAFE_MR register */
#define EMAFE_MR_VAR_ON_Pos                   _UINT32_(15)                                         /* (EMAFE_MR) Variation Detection On Position */
#define EMAFE_MR_VAR_ON_Msk                   (_UINT32_(0x1) << EMAFE_MR_VAR_ON_Pos)               /* (EMAFE_MR) Variation Detection On Mask */
#define EMAFE_MR_VAR_ON(value)                (EMAFE_MR_VAR_ON_Msk & (_UINT32_(value) << EMAFE_MR_VAR_ON_Pos)) /* Assigment of value for VAR_ON in the EMAFE_MR register */
#define EMAFE_MR_VAR_CH_Pos                   _UINT32_(16)                                         /* (EMAFE_MR) Variation Detection Channel Selection Position */
#define EMAFE_MR_VAR_CH_Msk                   (_UINT32_(0x7) << EMAFE_MR_VAR_CH_Pos)               /* (EMAFE_MR) Variation Detection Channel Selection Mask */
#define EMAFE_MR_VAR_CH(value)                (EMAFE_MR_VAR_CH_Msk & (_UINT32_(value) << EMAFE_MR_VAR_CH_Pos)) /* Assigment of value for VAR_CH in the EMAFE_MR register */
#define   EMAFE_MR_VAR_CH_CH0_Val             _UINT32_(0x0)                                        /* (EMAFE_MR) Channel 0 is selected.  */
#define   EMAFE_MR_VAR_CH_CH1_Val             _UINT32_(0x1)                                        /* (EMAFE_MR) Channel 1 is selected.  */
#define   EMAFE_MR_VAR_CH_CH2_Val             _UINT32_(0x2)                                        /* (EMAFE_MR) Channel 2 is selected.  */
#define   EMAFE_MR_VAR_CH_CH3_Val             _UINT32_(0x3)                                        /* (EMAFE_MR) Channel 3 is selected.  */
#define   EMAFE_MR_VAR_CH_CH4_Val             _UINT32_(0x4)                                        /* (EMAFE_MR) Channel 4 is selected.  */
#define   EMAFE_MR_VAR_CH_CH5_Val             _UINT32_(0x5)                                        /* (EMAFE_MR) Channel 5 is selected.  */
#define   EMAFE_MR_VAR_CH_CH6_Val             _UINT32_(0x6)                                        /* (EMAFE_MR) Channel 6 is selected.  */
#define EMAFE_MR_VAR_CH_CH0                   (EMAFE_MR_VAR_CH_CH0_Val << EMAFE_MR_VAR_CH_Pos)     /* (EMAFE_MR) Channel 0 is selected. Position  */
#define EMAFE_MR_VAR_CH_CH1                   (EMAFE_MR_VAR_CH_CH1_Val << EMAFE_MR_VAR_CH_Pos)     /* (EMAFE_MR) Channel 1 is selected. Position  */
#define EMAFE_MR_VAR_CH_CH2                   (EMAFE_MR_VAR_CH_CH2_Val << EMAFE_MR_VAR_CH_Pos)     /* (EMAFE_MR) Channel 2 is selected. Position  */
#define EMAFE_MR_VAR_CH_CH3                   (EMAFE_MR_VAR_CH_CH3_Val << EMAFE_MR_VAR_CH_Pos)     /* (EMAFE_MR) Channel 3 is selected. Position  */
#define EMAFE_MR_VAR_CH_CH4                   (EMAFE_MR_VAR_CH_CH4_Val << EMAFE_MR_VAR_CH_Pos)     /* (EMAFE_MR) Channel 4 is selected. Position  */
#define EMAFE_MR_VAR_CH_CH5                   (EMAFE_MR_VAR_CH_CH5_Val << EMAFE_MR_VAR_CH_Pos)     /* (EMAFE_MR) Channel 5 is selected. Position  */
#define EMAFE_MR_VAR_CH_CH6                   (EMAFE_MR_VAR_CH_CH6_Val << EMAFE_MR_VAR_CH_Pos)     /* (EMAFE_MR) Channel 6 is selected. Position  */
#define EMAFE_MR_VAR_LIMIT_Pos                _UINT32_(20)                                         /* (EMAFE_MR) Variation Detection Limit for Event Triggering Position */
#define EMAFE_MR_VAR_LIMIT_Msk                (_UINT32_(0x3FF) << EMAFE_MR_VAR_LIMIT_Pos)          /* (EMAFE_MR) Variation Detection Limit for Event Triggering Mask */
#define EMAFE_MR_VAR_LIMIT(value)             (EMAFE_MR_VAR_LIMIT_Msk & (_UINT32_(value) << EMAFE_MR_VAR_LIMIT_Pos)) /* Assigment of value for VAR_LIMIT in the EMAFE_MR register */
#define EMAFE_MR_Msk                          _UINT32_(0x3FF79F9F)                                 /* (EMAFE_MR) Register Mask  */

#define EMAFE_MR_LPF_ON_Pos                   _UINT32_(0)                                          /* (EMAFE_MR Position) Low-Pass Filter x On */
#define EMAFE_MR_LPF_ON_Msk                   (_UINT32_(0x1F) << EMAFE_MR_LPF_ON_Pos)              /* (EMAFE_MR Mask) LPF_ON */
#define EMAFE_MR_LPF_ON(value)                (EMAFE_MR_LPF_ON_Msk & (_UINT32_(value) << EMAFE_MR_LPF_ON_Pos)) 
#define EMAFE_MR_DMACH_Pos                    _UINT32_(8)                                          /* (EMAFE_MR Position) Channel x Enable for DMA transfer */
#define EMAFE_MR_DMACH_Msk                    (_UINT32_(0x1F) << EMAFE_MR_DMACH_Pos)               /* (EMAFE_MR Mask) DMACH */
#define EMAFE_MR_DMACH(value)                 (EMAFE_MR_DMACH_Msk & (_UINT32_(value) << EMAFE_MR_DMACH_Pos)) 

/* -------- EMAFE_CDCR : (EMAFE Offset: 0x08) (R/W 32) Channels Difference Comparison Register -------- */
#define EMAFE_CDCR_CHA_IDX_Pos                _UINT32_(0)                                          /* (EMAFE_CDCR) First Channel to Compare Position */
#define EMAFE_CDCR_CHA_IDX_Msk                (_UINT32_(0x7) << EMAFE_CDCR_CHA_IDX_Pos)            /* (EMAFE_CDCR) First Channel to Compare Mask */
#define EMAFE_CDCR_CHA_IDX(value)             (EMAFE_CDCR_CHA_IDX_Msk & (_UINT32_(value) << EMAFE_CDCR_CHA_IDX_Pos)) /* Assigment of value for CHA_IDX in the EMAFE_CDCR register */
#define   EMAFE_CDCR_CHA_IDX_CH0_Val          _UINT32_(0x0)                                        /* (EMAFE_CDCR) Channel 0 is used to perform comparison.  */
#define   EMAFE_CDCR_CHA_IDX_CH1_Val          _UINT32_(0x1)                                        /* (EMAFE_CDCR) Channel 1 is used to perform comparison.  */
#define   EMAFE_CDCR_CHA_IDX_CH2_Val          _UINT32_(0x2)                                        /* (EMAFE_CDCR) Channel 2 is used to perform comparison.  */
#define   EMAFE_CDCR_CHA_IDX_CH3_Val          _UINT32_(0x3)                                        /* (EMAFE_CDCR) Channel 3 is used to perform comparison.  */
#define   EMAFE_CDCR_CHA_IDX_CH4_Val          _UINT32_(0x4)                                        /* (EMAFE_CDCR) Channel 4 is used to perform comparison.  */
#define   EMAFE_CDCR_CHA_IDX_CH5_Val          _UINT32_(0x5)                                        /* (EMAFE_CDCR) Channel 5 is used to perform comparison.  */
#define   EMAFE_CDCR_CHA_IDX_CH6_Val          _UINT32_(0x6)                                        /* (EMAFE_CDCR) Channel 6 is used to perform comparison.  */
#define EMAFE_CDCR_CHA_IDX_CH0                (EMAFE_CDCR_CHA_IDX_CH0_Val << EMAFE_CDCR_CHA_IDX_Pos) /* (EMAFE_CDCR) Channel 0 is used to perform comparison. Position  */
#define EMAFE_CDCR_CHA_IDX_CH1                (EMAFE_CDCR_CHA_IDX_CH1_Val << EMAFE_CDCR_CHA_IDX_Pos) /* (EMAFE_CDCR) Channel 1 is used to perform comparison. Position  */
#define EMAFE_CDCR_CHA_IDX_CH2                (EMAFE_CDCR_CHA_IDX_CH2_Val << EMAFE_CDCR_CHA_IDX_Pos) /* (EMAFE_CDCR) Channel 2 is used to perform comparison. Position  */
#define EMAFE_CDCR_CHA_IDX_CH3                (EMAFE_CDCR_CHA_IDX_CH3_Val << EMAFE_CDCR_CHA_IDX_Pos) /* (EMAFE_CDCR) Channel 3 is used to perform comparison. Position  */
#define EMAFE_CDCR_CHA_IDX_CH4                (EMAFE_CDCR_CHA_IDX_CH4_Val << EMAFE_CDCR_CHA_IDX_Pos) /* (EMAFE_CDCR) Channel 4 is used to perform comparison. Position  */
#define EMAFE_CDCR_CHA_IDX_CH5                (EMAFE_CDCR_CHA_IDX_CH5_Val << EMAFE_CDCR_CHA_IDX_Pos) /* (EMAFE_CDCR) Channel 5 is used to perform comparison. Position  */
#define EMAFE_CDCR_CHA_IDX_CH6                (EMAFE_CDCR_CHA_IDX_CH6_Val << EMAFE_CDCR_CHA_IDX_Pos) /* (EMAFE_CDCR) Channel 6 is used to perform comparison. Position  */
#define EMAFE_CDCR_CHB_IDX_Pos                _UINT32_(4)                                          /* (EMAFE_CDCR) Second Channel to Compare Position */
#define EMAFE_CDCR_CHB_IDX_Msk                (_UINT32_(0x7) << EMAFE_CDCR_CHB_IDX_Pos)            /* (EMAFE_CDCR) Second Channel to Compare Mask */
#define EMAFE_CDCR_CHB_IDX(value)             (EMAFE_CDCR_CHB_IDX_Msk & (_UINT32_(value) << EMAFE_CDCR_CHB_IDX_Pos)) /* Assigment of value for CHB_IDX in the EMAFE_CDCR register */
#define   EMAFE_CDCR_CHB_IDX_CH0_Val          _UINT32_(0x0)                                        /* (EMAFE_CDCR) Channel 0 is used to perform comparison  */
#define   EMAFE_CDCR_CHB_IDX_CH1_Val          _UINT32_(0x1)                                        /* (EMAFE_CDCR) Channel 1 is used to perform comparison  */
#define   EMAFE_CDCR_CHB_IDX_CH2_Val          _UINT32_(0x2)                                        /* (EMAFE_CDCR) Channel 2 is used to perform comparison  */
#define   EMAFE_CDCR_CHB_IDX_CH3_Val          _UINT32_(0x3)                                        /* (EMAFE_CDCR) Channel 3 is used to perform comparison  */
#define   EMAFE_CDCR_CHB_IDX_CH4_Val          _UINT32_(0x4)                                        /* (EMAFE_CDCR) Channel 4 is used to perform comparison  */
#define   EMAFE_CDCR_CHB_IDX_CH5_Val          _UINT32_(0x5)                                        /* (EMAFE_CDCR) Channel 5 is used to perform comparison.  */
#define   EMAFE_CDCR_CHB_IDX_CH6_Val          _UINT32_(0x6)                                        /* (EMAFE_CDCR) Channel 6 is used to perform comparison.  */
#define EMAFE_CDCR_CHB_IDX_CH0                (EMAFE_CDCR_CHB_IDX_CH0_Val << EMAFE_CDCR_CHB_IDX_Pos) /* (EMAFE_CDCR) Channel 0 is used to perform comparison Position  */
#define EMAFE_CDCR_CHB_IDX_CH1                (EMAFE_CDCR_CHB_IDX_CH1_Val << EMAFE_CDCR_CHB_IDX_Pos) /* (EMAFE_CDCR) Channel 1 is used to perform comparison Position  */
#define EMAFE_CDCR_CHB_IDX_CH2                (EMAFE_CDCR_CHB_IDX_CH2_Val << EMAFE_CDCR_CHB_IDX_Pos) /* (EMAFE_CDCR) Channel 2 is used to perform comparison Position  */
#define EMAFE_CDCR_CHB_IDX_CH3                (EMAFE_CDCR_CHB_IDX_CH3_Val << EMAFE_CDCR_CHB_IDX_Pos) /* (EMAFE_CDCR) Channel 3 is used to perform comparison Position  */
#define EMAFE_CDCR_CHB_IDX_CH4                (EMAFE_CDCR_CHB_IDX_CH4_Val << EMAFE_CDCR_CHB_IDX_Pos) /* (EMAFE_CDCR) Channel 4 is used to perform comparison Position  */
#define EMAFE_CDCR_CHB_IDX_CH5                (EMAFE_CDCR_CHB_IDX_CH5_Val << EMAFE_CDCR_CHB_IDX_Pos) /* (EMAFE_CDCR) Channel 5 is used to perform comparison. Position  */
#define EMAFE_CDCR_CHB_IDX_CH6                (EMAFE_CDCR_CHB_IDX_CH6_Val << EMAFE_CDCR_CHB_IDX_Pos) /* (EMAFE_CDCR) Channel 6 is used to perform comparison. Position  */
#define EMAFE_CDCR_DIFFTYPE_Pos               _UINT32_(8)                                          /* (EMAFE_CDCR) Type of Comparison Position */
#define EMAFE_CDCR_DIFFTYPE_Msk               (_UINT32_(0x1) << EMAFE_CDCR_DIFFTYPE_Pos)           /* (EMAFE_CDCR) Type of Comparison Mask */
#define EMAFE_CDCR_DIFFTYPE(value)            (EMAFE_CDCR_DIFFTYPE_Msk & (_UINT32_(value) << EMAFE_CDCR_DIFFTYPE_Pos)) /* Assigment of value for DIFFTYPE in the EMAFE_CDCR register */
#define EMAFE_CDCR_DIFFCOUNT_Pos              _UINT32_(12)                                         /* (EMAFE_CDCR) Successive Comparison Event Count Position */
#define EMAFE_CDCR_DIFFCOUNT_Msk              (_UINT32_(0xF) << EMAFE_CDCR_DIFFCOUNT_Pos)          /* (EMAFE_CDCR) Successive Comparison Event Count Mask */
#define EMAFE_CDCR_DIFFCOUNT(value)           (EMAFE_CDCR_DIFFCOUNT_Msk & (_UINT32_(value) << EMAFE_CDCR_DIFFCOUNT_Pos)) /* Assigment of value for DIFFCOUNT in the EMAFE_CDCR register */
#define EMAFE_CDCR_DIFFTHRES_Pos              _UINT32_(16)                                         /* (EMAFE_CDCR) Threshold Position */
#define EMAFE_CDCR_DIFFTHRES_Msk              (_UINT32_(0xFFF) << EMAFE_CDCR_DIFFTHRES_Pos)        /* (EMAFE_CDCR) Threshold Mask */
#define EMAFE_CDCR_DIFFTHRES(value)           (EMAFE_CDCR_DIFFTHRES_Msk & (_UINT32_(value) << EMAFE_CDCR_DIFFTHRES_Pos)) /* Assigment of value for DIFFTHRES in the EMAFE_CDCR register */
#define EMAFE_CDCR_Msk                        _UINT32_(0x0FFFF177)                                 /* (EMAFE_CDCR) Register Mask  */


/* -------- EMAFE_EMR : (EMAFE Offset: 0x0C) (R/W 32) Extended Mode Register -------- */
#define EMAFE_EMR_FORMAT_Pos                  _UINT32_(0)                                          /* (EMAFE_EMR) Data Format Position */
#define EMAFE_EMR_FORMAT_Msk                  (_UINT32_(0x3) << EMAFE_EMR_FORMAT_Pos)              /* (EMAFE_EMR) Data Format Mask */
#define EMAFE_EMR_FORMAT(value)               (EMAFE_EMR_FORMAT_Msk & (_UINT32_(value) << EMAFE_EMR_FORMAT_Pos)) /* Assigment of value for FORMAT in the EMAFE_EMR register */
#define   EMAFE_EMR_FORMAT_NB_CHANNEL_Val     _UINT32_(0x0)                                        /* (EMAFE_EMR) Index of channel is added in register EMAFE_DMA_DATA. 24-bit dynamic range. (default).  */
#define   EMAFE_EMR_FORMAT_SIGNEXTEND_Val     _UINT32_(0x1)                                        /* (EMAFE_EMR) 24-bit value with sign extension up to 32-bit applied to registers EMAFE_DMA_DATA and EMAFE _DATAx. 24-bit dynamic range  */
#define   EMAFE_EMR_FORMAT_FULLRANGE_Val      _UINT32_(0x2)                                        /* (EMAFE_EMR) 32-bit full range signed extension is applied in EMAFE_DMA_DATA and EMAFE _DATAx. 32-bit dynamic range.  */
#define EMAFE_EMR_FORMAT_NB_CHANNEL           (EMAFE_EMR_FORMAT_NB_CHANNEL_Val << EMAFE_EMR_FORMAT_Pos) /* (EMAFE_EMR) Index of channel is added in register EMAFE_DMA_DATA. 24-bit dynamic range. (default). Position  */
#define EMAFE_EMR_FORMAT_SIGNEXTEND           (EMAFE_EMR_FORMAT_SIGNEXTEND_Val << EMAFE_EMR_FORMAT_Pos) /* (EMAFE_EMR) 24-bit value with sign extension up to 32-bit applied to registers EMAFE_DMA_DATA and EMAFE _DATAx. 24-bit dynamic range Position  */
#define EMAFE_EMR_FORMAT_FULLRANGE            (EMAFE_EMR_FORMAT_FULLRANGE_Val << EMAFE_EMR_FORMAT_Pos) /* (EMAFE_EMR) 32-bit full range signed extension is applied in EMAFE_DMA_DATA and EMAFE _DATAx. 32-bit dynamic range. Position  */
#define EMAFE_EMR_MCLKDIV_LPF_Pos             _UINT32_(4)                                          /* (EMAFE_EMR) LPF Clock Prescaler Ratio Position */
#define EMAFE_EMR_MCLKDIV_LPF_Msk             (_UINT32_(0xF) << EMAFE_EMR_MCLKDIV_LPF_Pos)         /* (EMAFE_EMR) LPF Clock Prescaler Ratio Mask */
#define EMAFE_EMR_MCLKDIV_LPF(value)          (EMAFE_EMR_MCLKDIV_LPF_Msk & (_UINT32_(value) << EMAFE_EMR_MCLKDIV_LPF_Pos)) /* Assigment of value for MCLKDIV_LPF in the EMAFE_EMR register */
#define   EMAFE_EMR_MCLKDIV_LPF_MCLK_Val      _UINT32_(0x0)                                        /* (EMAFE_EMR) LPFIF clock is MCLK/1.  */
#define   EMAFE_EMR_MCLKDIV_LPF_MCLKDIV2_Val  _UINT32_(0x1)                                        /* (EMAFE_EMR) LPFIF clock is MCLK/2.  */
#define   EMAFE_EMR_MCLKDIV_LPF_MCLKDIV4_Val  _UINT32_(0x2)                                        /* (EMAFE_EMR) LPFIF clock is MCLK/4.  */
#define   EMAFE_EMR_MCLKDIV_LPF_MCLKDIV8_Val  _UINT32_(0x3)                                        /* (EMAFE_EMR) LPFIF clock is MCLK/8. (Default)  */
#define   EMAFE_EMR_MCLKDIV_LPF_MCLKDIV16_Val _UINT32_(0x4)                                        /* (EMAFE_EMR) LPFIF clock is MCLK/16.  */
#define   EMAFE_EMR_MCLKDIV_LPF_MCLKDIV32_Val _UINT32_(0x5)                                        /* (EMAFE_EMR) LPFIF clock is MCLK/32.  */
#define EMAFE_EMR_MCLKDIV_LPF_MCLK            (EMAFE_EMR_MCLKDIV_LPF_MCLK_Val << EMAFE_EMR_MCLKDIV_LPF_Pos) /* (EMAFE_EMR) LPFIF clock is MCLK/1. Position  */
#define EMAFE_EMR_MCLKDIV_LPF_MCLKDIV2        (EMAFE_EMR_MCLKDIV_LPF_MCLKDIV2_Val << EMAFE_EMR_MCLKDIV_LPF_Pos) /* (EMAFE_EMR) LPFIF clock is MCLK/2. Position  */
#define EMAFE_EMR_MCLKDIV_LPF_MCLKDIV4        (EMAFE_EMR_MCLKDIV_LPF_MCLKDIV4_Val << EMAFE_EMR_MCLKDIV_LPF_Pos) /* (EMAFE_EMR) LPFIF clock is MCLK/4. Position  */
#define EMAFE_EMR_MCLKDIV_LPF_MCLKDIV8        (EMAFE_EMR_MCLKDIV_LPF_MCLKDIV8_Val << EMAFE_EMR_MCLKDIV_LPF_Pos) /* (EMAFE_EMR) LPFIF clock is MCLK/8. (Default) Position  */
#define EMAFE_EMR_MCLKDIV_LPF_MCLKDIV16       (EMAFE_EMR_MCLKDIV_LPF_MCLKDIV16_Val << EMAFE_EMR_MCLKDIV_LPF_Pos) /* (EMAFE_EMR) LPFIF clock is MCLK/16. Position  */
#define EMAFE_EMR_MCLKDIV_LPF_MCLKDIV32       (EMAFE_EMR_MCLKDIV_LPF_MCLKDIV32_Val << EMAFE_EMR_MCLKDIV_LPF_Pos) /* (EMAFE_EMR) LPFIF clock is MCLK/32. Position  */
#define EMAFE_EMR_OSR_Pos                     _UINT32_(8)                                          /* (EMAFE_EMR) OSR of the Decimation Filters Position */
#define EMAFE_EMR_OSR_Msk                     (_UINT32_(0x7) << EMAFE_EMR_OSR_Pos)                 /* (EMAFE_EMR) OSR of the Decimation Filters Mask */
#define EMAFE_EMR_OSR(value)                  (EMAFE_EMR_OSR_Msk & (_UINT32_(value) << EMAFE_EMR_OSR_Pos)) /* Assigment of value for OSR in the EMAFE_EMR register */
#define   EMAFE_EMR_OSR_OSR8_Val              _UINT32_(0x0)                                        /* (EMAFE_EMR) OSR of the system is 8.  */
#define   EMAFE_EMR_OSR_OSR16_Val             _UINT32_(0x1)                                        /* (EMAFE_EMR) OSR of the system is 16.  */
#define   EMAFE_EMR_OSR_OSR32_Val             _UINT32_(0x2)                                        /* (EMAFE_EMR) OSR of the system is 32.  */
#define   EMAFE_EMR_OSR_OSR64_Val             _UINT32_(0x3)                                        /* (EMAFE_EMR) OSR of the system is 64 (Default).  */
#define EMAFE_EMR_OSR_OSR8                    (EMAFE_EMR_OSR_OSR8_Val << EMAFE_EMR_OSR_Pos)        /* (EMAFE_EMR) OSR of the system is 8. Position  */
#define EMAFE_EMR_OSR_OSR16                   (EMAFE_EMR_OSR_OSR16_Val << EMAFE_EMR_OSR_Pos)       /* (EMAFE_EMR) OSR of the system is 16. Position  */
#define EMAFE_EMR_OSR_OSR32                   (EMAFE_EMR_OSR_OSR32_Val << EMAFE_EMR_OSR_Pos)       /* (EMAFE_EMR) OSR of the system is 32. Position  */
#define EMAFE_EMR_OSR_OSR64                   (EMAFE_EMR_OSR_OSR64_Val << EMAFE_EMR_OSR_Pos)       /* (EMAFE_EMR) OSR of the system is 64 (Default). Position  */
#define EMAFE_EMR_Msk                         _UINT32_(0x000007F3)                                 /* (EMAFE_EMR) Register Mask  */


/* -------- EMAFE_DMA_DATA : (EMAFE Offset: 0x10) ( R/ 32) DMA Data Register -------- */
#define EMAFE_DMA_DATA_Msk                    _UINT32_(0x00000000)                                 /* (EMAFE_DMA_DATA) Register Mask  */

/* CH_INDEX_24BIT_DATA mode */
#define EMAFE_DMA_DATA_CH_INDEX_24BIT_DATA_DATA24_Pos _UINT32_(0)                                          /* (EMAFE_DMA_DATA) 24-bit Data read by DMA Position */
#define EMAFE_DMA_DATA_CH_INDEX_24BIT_DATA_DATA24_Msk (_UINT32_(0xFFFFFF) << EMAFE_DMA_DATA_CH_INDEX_24BIT_DATA_DATA24_Pos) /* (EMAFE_DMA_DATA) 24-bit Data read by DMA Mask */
#define EMAFE_DMA_DATA_CH_INDEX_24BIT_DATA_DATA24(value) (EMAFE_DMA_DATA_CH_INDEX_24BIT_DATA_DATA24_Msk & (_UINT32_(value) << EMAFE_DMA_DATA_CH_INDEX_24BIT_DATA_DATA24_Pos))
#define EMAFE_DMA_DATA_CH_INDEX_24BIT_DATA_CHIDX_Pos _UINT32_(24)                                         /* (EMAFE_DMA_DATA) Channel Index Position */
#define EMAFE_DMA_DATA_CH_INDEX_24BIT_DATA_CHIDX_Msk (_UINT32_(0xFF) << EMAFE_DMA_DATA_CH_INDEX_24BIT_DATA_CHIDX_Pos) /* (EMAFE_DMA_DATA) Channel Index Mask */
#define EMAFE_DMA_DATA_CH_INDEX_24BIT_DATA_CHIDX(value) (EMAFE_DMA_DATA_CH_INDEX_24BIT_DATA_CHIDX_Msk & (_UINT32_(value) << EMAFE_DMA_DATA_CH_INDEX_24BIT_DATA_CHIDX_Pos))
#define EMAFE_DMA_DATA_CH_INDEX_24BIT_DATA_Msk _UINT32_(0xFFFFFFFF)                                  /* (EMAFE_DMA_DATA_CH_INDEX_24BIT_DATA) Register Mask  */

/* ONLY_32BIT_DATA_SE24BIT mode */
#define EMAFE_DMA_DATA_ONLY_32BIT_DATA_SE24BIT_DATA24SE_Pos _UINT32_(0)                                          /* (EMAFE_DMA_DATA) Low-pass Filter 24-bit Data with 32-bit Sign Extension read by DMA Position */
#define EMAFE_DMA_DATA_ONLY_32BIT_DATA_SE24BIT_DATA24SE_Msk (_UINT32_(0xFFFFFFFF) << EMAFE_DMA_DATA_ONLY_32BIT_DATA_SE24BIT_DATA24SE_Pos) /* (EMAFE_DMA_DATA) Low-pass Filter 24-bit Data with 32-bit Sign Extension read by DMA Mask */
#define EMAFE_DMA_DATA_ONLY_32BIT_DATA_SE24BIT_DATA24SE(value) (EMAFE_DMA_DATA_ONLY_32BIT_DATA_SE24BIT_DATA24SE_Msk & (_UINT32_(value) << EMAFE_DMA_DATA_ONLY_32BIT_DATA_SE24BIT_DATA24SE_Pos))
#define EMAFE_DMA_DATA_ONLY_32BIT_DATA_SE24BIT_Msk _UINT32_(0xFFFFFFFF)                                  /* (EMAFE_DMA_DATA_ONLY_32BIT_DATA_SE24BIT) Register Mask  */

/* ONLY_32BIT_DATA mode */
#define EMAFE_DMA_DATA_ONLY_32BIT_DATA_DATA32_Pos _UINT32_(0)                                          /* (EMAFE_DMA_DATA) 32-bit Data read by DMA Position */
#define EMAFE_DMA_DATA_ONLY_32BIT_DATA_DATA32_Msk (_UINT32_(0xFFFFFFFF) << EMAFE_DMA_DATA_ONLY_32BIT_DATA_DATA32_Pos) /* (EMAFE_DMA_DATA) 32-bit Data read by DMA Mask */
#define EMAFE_DMA_DATA_ONLY_32BIT_DATA_DATA32(value) (EMAFE_DMA_DATA_ONLY_32BIT_DATA_DATA32_Msk & (_UINT32_(value) << EMAFE_DMA_DATA_ONLY_32BIT_DATA_DATA32_Pos))
#define EMAFE_DMA_DATA_ONLY_32BIT_DATA_Msk    _UINT32_(0xFFFFFFFF)                                  /* (EMAFE_DMA_DATA_ONLY_32BIT_DATA) Register Mask  */


/* -------- EMAFE_DATA : (EMAFE Offset: 0x14) ( R/ 32) Data Channel 0 Register -------- */
#define EMAFE_DATA_Msk                        _UINT32_(0x00000000)                                 /* (EMAFE_DATA) Register Mask  */

/* DATA_24BIT mode */
#define EMAFE_DATA_DATA_24BIT_DATA24_Pos      _UINT32_(0)                                          /* (EMAFE_DATA) Low-pass Filter 24-bit Signed Data Position */
#define EMAFE_DATA_DATA_24BIT_DATA24_Msk      (_UINT32_(0xFFFFFF) << EMAFE_DATA_DATA_24BIT_DATA24_Pos) /* (EMAFE_DATA) Low-pass Filter 24-bit Signed Data Mask */
#define EMAFE_DATA_DATA_24BIT_DATA24(value)   (EMAFE_DATA_DATA_24BIT_DATA24_Msk & (_UINT32_(value) << EMAFE_DATA_DATA_24BIT_DATA24_Pos))
#define EMAFE_DATA_DATA_24BIT_Msk             _UINT32_(0x00FFFFFF)                                  /* (EMAFE_DATA_DATA_24BIT) Register Mask  */

/* SE_24BIT_DATA mode */
#define EMAFE_DATA_SE_24BIT_DATA_DATA24SE_Pos _UINT32_(0)                                          /* (EMAFE_DATA) Low-pass Filter 24-bit Data with 32-bit Sign Extension Position */
#define EMAFE_DATA_SE_24BIT_DATA_DATA24SE_Msk (_UINT32_(0xFFFFFFFF) << EMAFE_DATA_SE_24BIT_DATA_DATA24SE_Pos) /* (EMAFE_DATA) Low-pass Filter 24-bit Data with 32-bit Sign Extension Mask */
#define EMAFE_DATA_SE_24BIT_DATA_DATA24SE(value) (EMAFE_DATA_SE_24BIT_DATA_DATA24SE_Msk & (_UINT32_(value) << EMAFE_DATA_SE_24BIT_DATA_DATA24SE_Pos))
#define EMAFE_DATA_SE_24BIT_DATA_Msk          _UINT32_(0xFFFFFFFF)                                  /* (EMAFE_DATA_SE_24BIT_DATA) Register Mask  */

/* DATA_32BIT mode */
#define EMAFE_DATA_DATA_32BIT_DATA32_Pos      _UINT32_(0)                                          /* (EMAFE_DATA) Low-pass Filter 32-bit Signed Data Position */
#define EMAFE_DATA_DATA_32BIT_DATA32_Msk      (_UINT32_(0xFFFFFFFF) << EMAFE_DATA_DATA_32BIT_DATA32_Pos) /* (EMAFE_DATA) Low-pass Filter 32-bit Signed Data Mask */
#define EMAFE_DATA_DATA_32BIT_DATA32(value)   (EMAFE_DATA_DATA_32BIT_DATA32_Msk & (_UINT32_(value) << EMAFE_DATA_DATA_32BIT_DATA32_Pos))
#define EMAFE_DATA_DATA_32BIT_Msk             _UINT32_(0xFFFFFFFF)                                  /* (EMAFE_DATA_DATA_32BIT) Register Mask  */


/* -------- EMAFE_CHA_CFG1 : (EMAFE Offset: 0x40) (R/W 32) Channel A Comparison Configuration 1 -------- */
#define EMAFE_CHA_CFG1_THRESH1_Pos            _UINT32_(0)                                          /* (EMAFE_CHA_CFG1) Threshold 1 for Channel A Position */
#define EMAFE_CHA_CFG1_THRESH1_Msk            (_UINT32_(0xFFFFFF) << EMAFE_CHA_CFG1_THRESH1_Pos)   /* (EMAFE_CHA_CFG1) Threshold 1 for Channel A Mask */
#define EMAFE_CHA_CFG1_THRESH1(value)         (EMAFE_CHA_CFG1_THRESH1_Msk & (_UINT32_(value) << EMAFE_CHA_CFG1_THRESH1_Pos)) /* Assigment of value for THRESH1 in the EMAFE_CHA_CFG1 register */
#define EMAFE_CHA_CFG1_IDX_Pos                _UINT32_(24)                                         /* (EMAFE_CHA_CFG1) Channel A Index Position */
#define EMAFE_CHA_CFG1_IDX_Msk                (_UINT32_(0x7) << EMAFE_CHA_CFG1_IDX_Pos)            /* (EMAFE_CHA_CFG1) Channel A Index Mask */
#define EMAFE_CHA_CFG1_IDX(value)             (EMAFE_CHA_CFG1_IDX_Msk & (_UINT32_(value) << EMAFE_CHA_CFG1_IDX_Pos)) /* Assigment of value for IDX in the EMAFE_CHA_CFG1 register */
#define   EMAFE_CHA_CFG1_IDX_CH0_Val          _UINT32_(0x0)                                        /* (EMAFE_CHA_CFG1) Channel 0 is selected.  */
#define   EMAFE_CHA_CFG1_IDX_CH1_Val          _UINT32_(0x1)                                        /* (EMAFE_CHA_CFG1) Channel 1 is selected.  */
#define   EMAFE_CHA_CFG1_IDX_CH2_Val          _UINT32_(0x2)                                        /* (EMAFE_CHA_CFG1) Channel 2 is selected.  */
#define   EMAFE_CHA_CFG1_IDX_CH3_Val          _UINT32_(0x3)                                        /* (EMAFE_CHA_CFG1) Channel 3 is selected.  */
#define   EMAFE_CHA_CFG1_IDX_CH4_Val          _UINT32_(0x4)                                        /* (EMAFE_CHA_CFG1) Channel 4 is selected.  */
#define   EMAFE_CHA_CFG1_IDX_CH5_Val          _UINT32_(0x5)                                        /* (EMAFE_CHA_CFG1) Channel 5 is selected.  */
#define   EMAFE_CHA_CFG1_IDX_CH6_Val          _UINT32_(0x6)                                        /* (EMAFE_CHA_CFG1) Channel 6 is selected.  */
#define EMAFE_CHA_CFG1_IDX_CH0                (EMAFE_CHA_CFG1_IDX_CH0_Val << EMAFE_CHA_CFG1_IDX_Pos) /* (EMAFE_CHA_CFG1) Channel 0 is selected. Position  */
#define EMAFE_CHA_CFG1_IDX_CH1                (EMAFE_CHA_CFG1_IDX_CH1_Val << EMAFE_CHA_CFG1_IDX_Pos) /* (EMAFE_CHA_CFG1) Channel 1 is selected. Position  */
#define EMAFE_CHA_CFG1_IDX_CH2                (EMAFE_CHA_CFG1_IDX_CH2_Val << EMAFE_CHA_CFG1_IDX_Pos) /* (EMAFE_CHA_CFG1) Channel 2 is selected. Position  */
#define EMAFE_CHA_CFG1_IDX_CH3                (EMAFE_CHA_CFG1_IDX_CH3_Val << EMAFE_CHA_CFG1_IDX_Pos) /* (EMAFE_CHA_CFG1) Channel 3 is selected. Position  */
#define EMAFE_CHA_CFG1_IDX_CH4                (EMAFE_CHA_CFG1_IDX_CH4_Val << EMAFE_CHA_CFG1_IDX_Pos) /* (EMAFE_CHA_CFG1) Channel 4 is selected. Position  */
#define EMAFE_CHA_CFG1_IDX_CH5                (EMAFE_CHA_CFG1_IDX_CH5_Val << EMAFE_CHA_CFG1_IDX_Pos) /* (EMAFE_CHA_CFG1) Channel 5 is selected. Position  */
#define EMAFE_CHA_CFG1_IDX_CH6                (EMAFE_CHA_CFG1_IDX_CH6_Val << EMAFE_CHA_CFG1_IDX_Pos) /* (EMAFE_CHA_CFG1) Channel 6 is selected. Position  */
#define EMAFE_CHA_CFG1_COND_Pos               _UINT32_(29)                                         /* (EMAFE_CHA_CFG1) Condition Applied for Detection on Channel A Position */
#define EMAFE_CHA_CFG1_COND_Msk               (_UINT32_(0x1) << EMAFE_CHA_CFG1_COND_Pos)           /* (EMAFE_CHA_CFG1) Condition Applied for Detection on Channel A Mask */
#define EMAFE_CHA_CFG1_COND(value)            (EMAFE_CHA_CFG1_COND_Msk & (_UINT32_(value) << EMAFE_CHA_CFG1_COND_Pos)) /* Assigment of value for COND in the EMAFE_CHA_CFG1 register */
#define   EMAFE_CHA_CFG1_COND_OR_Val          _UINT32_(0x0)                                        /* (EMAFE_CHA_CFG1) Selected channel data is lower than THRESH1 OR higher than THRESH2.  */
#define   EMAFE_CHA_CFG1_COND_AND_Val         _UINT32_(0x1)                                        /* (EMAFE_CHA_CFG1) Selected channel data is lower than THRESH1 AND higher than THRESH2.  */
#define EMAFE_CHA_CFG1_COND_OR                (EMAFE_CHA_CFG1_COND_OR_Val << EMAFE_CHA_CFG1_COND_Pos) /* (EMAFE_CHA_CFG1) Selected channel data is lower than THRESH1 OR higher than THRESH2. Position  */
#define EMAFE_CHA_CFG1_COND_AND               (EMAFE_CHA_CFG1_COND_AND_Val << EMAFE_CHA_CFG1_COND_Pos) /* (EMAFE_CHA_CFG1) Selected channel data is lower than THRESH1 AND higher than THRESH2. Position  */
#define EMAFE_CHA_CFG1_Msk                    _UINT32_(0x27FFFFFF)                                 /* (EMAFE_CHA_CFG1) Register Mask  */


/* -------- EMAFE_CHB_CFG1 : (EMAFE Offset: 0x44) (R/W 32) Channel B Comparison Configuration 1 -------- */
#define EMAFE_CHB_CFG1_THRESH1_Pos            _UINT32_(0)                                          /* (EMAFE_CHB_CFG1) Threshold 1 for Channel B Position */
#define EMAFE_CHB_CFG1_THRESH1_Msk            (_UINT32_(0xFFFFFF) << EMAFE_CHB_CFG1_THRESH1_Pos)   /* (EMAFE_CHB_CFG1) Threshold 1 for Channel B Mask */
#define EMAFE_CHB_CFG1_THRESH1(value)         (EMAFE_CHB_CFG1_THRESH1_Msk & (_UINT32_(value) << EMAFE_CHB_CFG1_THRESH1_Pos)) /* Assigment of value for THRESH1 in the EMAFE_CHB_CFG1 register */
#define EMAFE_CHB_CFG1_IDX_Pos                _UINT32_(24)                                         /* (EMAFE_CHB_CFG1) Channel B Index Position */
#define EMAFE_CHB_CFG1_IDX_Msk                (_UINT32_(0x7) << EMAFE_CHB_CFG1_IDX_Pos)            /* (EMAFE_CHB_CFG1) Channel B Index Mask */
#define EMAFE_CHB_CFG1_IDX(value)             (EMAFE_CHB_CFG1_IDX_Msk & (_UINT32_(value) << EMAFE_CHB_CFG1_IDX_Pos)) /* Assigment of value for IDX in the EMAFE_CHB_CFG1 register */
#define   EMAFE_CHB_CFG1_IDX_CH0_Val          _UINT32_(0x0)                                        /* (EMAFE_CHB_CFG1) Channel 0 is selected.  */
#define   EMAFE_CHB_CFG1_IDX_CH1_Val          _UINT32_(0x1)                                        /* (EMAFE_CHB_CFG1) Channel 1 is selected.  */
#define   EMAFE_CHB_CFG1_IDX_CH2_Val          _UINT32_(0x2)                                        /* (EMAFE_CHB_CFG1) Channel 2 is selected.  */
#define   EMAFE_CHB_CFG1_IDX_CH3_Val          _UINT32_(0x3)                                        /* (EMAFE_CHB_CFG1) Channel 3 is selected.  */
#define   EMAFE_CHB_CFG1_IDX_CH4_Val          _UINT32_(0x4)                                        /* (EMAFE_CHB_CFG1) Channel 4 is selected.  */
#define   EMAFE_CHB_CFG1_IDX_CH5_Val          _UINT32_(0x5)                                        /* (EMAFE_CHB_CFG1) Channel 5 is selected.  */
#define   EMAFE_CHB_CFG1_IDX_CH6_Val          _UINT32_(0x6)                                        /* (EMAFE_CHB_CFG1) Channel 6 is selected.  */
#define EMAFE_CHB_CFG1_IDX_CH0                (EMAFE_CHB_CFG1_IDX_CH0_Val << EMAFE_CHB_CFG1_IDX_Pos) /* (EMAFE_CHB_CFG1) Channel 0 is selected. Position  */
#define EMAFE_CHB_CFG1_IDX_CH1                (EMAFE_CHB_CFG1_IDX_CH1_Val << EMAFE_CHB_CFG1_IDX_Pos) /* (EMAFE_CHB_CFG1) Channel 1 is selected. Position  */
#define EMAFE_CHB_CFG1_IDX_CH2                (EMAFE_CHB_CFG1_IDX_CH2_Val << EMAFE_CHB_CFG1_IDX_Pos) /* (EMAFE_CHB_CFG1) Channel 2 is selected. Position  */
#define EMAFE_CHB_CFG1_IDX_CH3                (EMAFE_CHB_CFG1_IDX_CH3_Val << EMAFE_CHB_CFG1_IDX_Pos) /* (EMAFE_CHB_CFG1) Channel 3 is selected. Position  */
#define EMAFE_CHB_CFG1_IDX_CH4                (EMAFE_CHB_CFG1_IDX_CH4_Val << EMAFE_CHB_CFG1_IDX_Pos) /* (EMAFE_CHB_CFG1) Channel 4 is selected. Position  */
#define EMAFE_CHB_CFG1_IDX_CH5                (EMAFE_CHB_CFG1_IDX_CH5_Val << EMAFE_CHB_CFG1_IDX_Pos) /* (EMAFE_CHB_CFG1) Channel 5 is selected. Position  */
#define EMAFE_CHB_CFG1_IDX_CH6                (EMAFE_CHB_CFG1_IDX_CH6_Val << EMAFE_CHB_CFG1_IDX_Pos) /* (EMAFE_CHB_CFG1) Channel 6 is selected. Position  */
#define EMAFE_CHB_CFG1_COND_Pos               _UINT32_(29)                                         /* (EMAFE_CHB_CFG1) Condition Applied for Detection on Channel B Position */
#define EMAFE_CHB_CFG1_COND_Msk               (_UINT32_(0x1) << EMAFE_CHB_CFG1_COND_Pos)           /* (EMAFE_CHB_CFG1) Condition Applied for Detection on Channel B Mask */
#define EMAFE_CHB_CFG1_COND(value)            (EMAFE_CHB_CFG1_COND_Msk & (_UINT32_(value) << EMAFE_CHB_CFG1_COND_Pos)) /* Assigment of value for COND in the EMAFE_CHB_CFG1 register */
#define   EMAFE_CHB_CFG1_COND_OR_Val          _UINT32_(0x0)                                        /* (EMAFE_CHB_CFG1) Selected channel data is lower than THRESH1 OR higher than THRESH2.  */
#define   EMAFE_CHB_CFG1_COND_AND_Val         _UINT32_(0x1)                                        /* (EMAFE_CHB_CFG1) Selected channel data is lower than THRESH1 AND higher than THRESH2.  */
#define EMAFE_CHB_CFG1_COND_OR                (EMAFE_CHB_CFG1_COND_OR_Val << EMAFE_CHB_CFG1_COND_Pos) /* (EMAFE_CHB_CFG1) Selected channel data is lower than THRESH1 OR higher than THRESH2. Position  */
#define EMAFE_CHB_CFG1_COND_AND               (EMAFE_CHB_CFG1_COND_AND_Val << EMAFE_CHB_CFG1_COND_Pos) /* (EMAFE_CHB_CFG1) Selected channel data is lower than THRESH1 AND higher than THRESH2. Position  */
#define EMAFE_CHB_CFG1_Msk                    _UINT32_(0x27FFFFFF)                                 /* (EMAFE_CHB_CFG1) Register Mask  */


/* -------- EMAFE_CHA_CFG2 : (EMAFE Offset: 0x48) (R/W 32) Channel A Comparison Configuration 2 -------- */
#define EMAFE_CHA_CFG2_THRESH2_Pos            _UINT32_(0)                                          /* (EMAFE_CHA_CFG2) Threshold 2 for Channel A Position */
#define EMAFE_CHA_CFG2_THRESH2_Msk            (_UINT32_(0xFFFFFF) << EMAFE_CHA_CFG2_THRESH2_Pos)   /* (EMAFE_CHA_CFG2) Threshold 2 for Channel A Mask */
#define EMAFE_CHA_CFG2_THRESH2(value)         (EMAFE_CHA_CFG2_THRESH2_Msk & (_UINT32_(value) << EMAFE_CHA_CFG2_THRESH2_Pos)) /* Assigment of value for THRESH2 in the EMAFE_CHA_CFG2 register */
#define EMAFE_CHA_CFG2_Msk                    _UINT32_(0x00FFFFFF)                                 /* (EMAFE_CHA_CFG2) Register Mask  */


/* -------- EMAFE_CHB_CFG2 : (EMAFE Offset: 0x4C) (R/W 32) Channel B Comparison Configuration 2 -------- */
#define EMAFE_CHB_CFG2_THRESH2_Pos            _UINT32_(0)                                          /* (EMAFE_CHB_CFG2) Threshold 2 for Channel B Position */
#define EMAFE_CHB_CFG2_THRESH2_Msk            (_UINT32_(0xFFFFFF) << EMAFE_CHB_CFG2_THRESH2_Pos)   /* (EMAFE_CHB_CFG2) Threshold 2 for Channel B Mask */
#define EMAFE_CHB_CFG2_THRESH2(value)         (EMAFE_CHB_CFG2_THRESH2_Msk & (_UINT32_(value) << EMAFE_CHB_CFG2_THRESH2_Pos)) /* Assigment of value for THRESH2 in the EMAFE_CHB_CFG2 register */
#define EMAFE_CHB_CFG2_Msk                    _UINT32_(0x00FFFFFF)                                 /* (EMAFE_CHB_CFG2) Register Mask  */


/* -------- EMAFE_IER : (EMAFE Offset: 0x50) ( /W 32) Interrupt Enable Register -------- */
#define EMAFE_IER_DRDY_Pos                    _UINT32_(0)                                          /* (EMAFE_IER) Data Ready Interrupt Enable Position */
#define EMAFE_IER_DRDY_Msk                    (_UINT32_(0x1) << EMAFE_IER_DRDY_Pos)                /* (EMAFE_IER) Data Ready Interrupt Enable Mask */
#define EMAFE_IER_DRDY(value)                 (EMAFE_IER_DRDY_Msk & (_UINT32_(value) << EMAFE_IER_DRDY_Pos)) /* Assigment of value for DRDY in the EMAFE_IER register */
#define EMAFE_IER_RXUDR_Pos                   _UINT32_(1)                                          /* (EMAFE_IER) Receive Underflow Flow Interrupt Enable Position */
#define EMAFE_IER_RXUDR_Msk                   (_UINT32_(0x1) << EMAFE_IER_RXUDR_Pos)               /* (EMAFE_IER) Receive Underflow Flow Interrupt Enable Mask */
#define EMAFE_IER_RXUDR(value)                (EMAFE_IER_RXUDR_Msk & (_UINT32_(value) << EMAFE_IER_RXUDR_Pos)) /* Assigment of value for RXUDR in the EMAFE_IER register */
#define EMAFE_IER_RXFULL_Pos                  _UINT32_(2)                                          /* (EMAFE_IER) Receive FIFO Full Interrupt Enable Position */
#define EMAFE_IER_RXFULL_Msk                  (_UINT32_(0x1) << EMAFE_IER_RXFULL_Pos)              /* (EMAFE_IER) Receive FIFO Full Interrupt Enable Mask */
#define EMAFE_IER_RXFULL(value)               (EMAFE_IER_RXFULL_Msk & (_UINT32_(value) << EMAFE_IER_RXFULL_Pos)) /* Assigment of value for RXFULL in the EMAFE_IER register */
#define EMAFE_IER_RXEMPTY_Pos                 _UINT32_(3)                                          /* (EMAFE_IER) Receive FIFO Empty Interrupt Enable Position */
#define EMAFE_IER_RXEMPTY_Msk                 (_UINT32_(0x1) << EMAFE_IER_RXEMPTY_Pos)             /* (EMAFE_IER) Receive FIFO Empty Interrupt Enable Mask */
#define EMAFE_IER_RXEMPTY(value)              (EMAFE_IER_RXEMPTY_Msk & (_UINT32_(value) << EMAFE_IER_RXEMPTY_Pos)) /* Assigment of value for RXEMPTY in the EMAFE_IER register */
#define EMAFE_IER_CHCHG_Pos                   _UINT32_(4)                                          /* (EMAFE_IER) Channel Data Change Interrupt Enable Position */
#define EMAFE_IER_CHCHG_Msk                   (_UINT32_(0x1) << EMAFE_IER_CHCHG_Pos)               /* (EMAFE_IER) Channel Data Change Interrupt Enable Mask */
#define EMAFE_IER_CHCHG(value)                (EMAFE_IER_CHCHG_Msk & (_UINT32_(value) << EMAFE_IER_CHCHG_Pos)) /* Assigment of value for CHCHG in the EMAFE_IER register */
#define EMAFE_IER_CHDIFF_Pos                  _UINT32_(5)                                          /* (EMAFE_IER) Comparison Flag Interrupt Enable Position */
#define EMAFE_IER_CHDIFF_Msk                  (_UINT32_(0x1) << EMAFE_IER_CHDIFF_Pos)              /* (EMAFE_IER) Comparison Flag Interrupt Enable Mask */
#define EMAFE_IER_CHDIFF(value)               (EMAFE_IER_CHDIFF_Msk & (_UINT32_(value) << EMAFE_IER_CHDIFF_Pos)) /* Assigment of value for CHDIFF in the EMAFE_IER register */
#define EMAFE_IER_PARERROR_Pos                _UINT32_(6)                                          /* (EMAFE_IER) Parity Error Interrupt Enable Position */
#define EMAFE_IER_PARERROR_Msk                (_UINT32_(0x1) << EMAFE_IER_PARERROR_Pos)            /* (EMAFE_IER) Parity Error Interrupt Enable Mask */
#define EMAFE_IER_PARERROR(value)             (EMAFE_IER_PARERROR_Msk & (_UINT32_(value) << EMAFE_IER_PARERROR_Pos)) /* Assigment of value for PARERROR in the EMAFE_IER register */
#define EMAFE_IER_ENDRX_Pos                   _UINT32_(7)                                          /* (EMAFE_IER) PDC Receive Transfer End Interrupt Enable Position */
#define EMAFE_IER_ENDRX_Msk                   (_UINT32_(0x1) << EMAFE_IER_ENDRX_Pos)               /* (EMAFE_IER) PDC Receive Transfer End Interrupt Enable Mask */
#define EMAFE_IER_ENDRX(value)                (EMAFE_IER_ENDRX_Msk & (_UINT32_(value) << EMAFE_IER_ENDRX_Pos)) /* Assigment of value for ENDRX in the EMAFE_IER register */
#define EMAFE_IER_RXBUFF_Pos                  _UINT32_(8)                                          /* (EMAFE_IER) PDC Receive Buffer Full Interrupt Enable Position */
#define EMAFE_IER_RXBUFF_Msk                  (_UINT32_(0x1) << EMAFE_IER_RXBUFF_Pos)              /* (EMAFE_IER) PDC Receive Buffer Full Interrupt Enable Mask */
#define EMAFE_IER_RXBUFF(value)               (EMAFE_IER_RXBUFF_Msk & (_UINT32_(value) << EMAFE_IER_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the EMAFE_IER register */
#define EMAFE_IER_CHAEVT_Pos                  _UINT32_(9)                                          /* (EMAFE_IER) Channel A Event Interrupt Enable Position */
#define EMAFE_IER_CHAEVT_Msk                  (_UINT32_(0x1) << EMAFE_IER_CHAEVT_Pos)              /* (EMAFE_IER) Channel A Event Interrupt Enable Mask */
#define EMAFE_IER_CHAEVT(value)               (EMAFE_IER_CHAEVT_Msk & (_UINT32_(value) << EMAFE_IER_CHAEVT_Pos)) /* Assigment of value for CHAEVT in the EMAFE_IER register */
#define EMAFE_IER_CHBEVT_Pos                  _UINT32_(10)                                         /* (EMAFE_IER) Channel B Event Interrupt Enable Position */
#define EMAFE_IER_CHBEVT_Msk                  (_UINT32_(0x1) << EMAFE_IER_CHBEVT_Pos)              /* (EMAFE_IER) Channel B Event Interrupt Enable Mask */
#define EMAFE_IER_CHBEVT(value)               (EMAFE_IER_CHBEVT_Msk & (_UINT32_(value) << EMAFE_IER_CHBEVT_Pos)) /* Assigment of value for CHBEVT in the EMAFE_IER register */
#define EMAFE_IER_Msk                         _UINT32_(0x000007FF)                                 /* (EMAFE_IER) Register Mask  */


/* -------- EMAFE_IDR : (EMAFE Offset: 0x54) ( /W 32) Interrupt Disable Register -------- */
#define EMAFE_IDR_DRDY_Pos                    _UINT32_(0)                                          /* (EMAFE_IDR) Data Ready Interrupt Disable Position */
#define EMAFE_IDR_DRDY_Msk                    (_UINT32_(0x1) << EMAFE_IDR_DRDY_Pos)                /* (EMAFE_IDR) Data Ready Interrupt Disable Mask */
#define EMAFE_IDR_DRDY(value)                 (EMAFE_IDR_DRDY_Msk & (_UINT32_(value) << EMAFE_IDR_DRDY_Pos)) /* Assigment of value for DRDY in the EMAFE_IDR register */
#define EMAFE_IDR_RXUDR_Pos                   _UINT32_(1)                                          /* (EMAFE_IDR) Receive Underflow Flow Interrupt Disable Position */
#define EMAFE_IDR_RXUDR_Msk                   (_UINT32_(0x1) << EMAFE_IDR_RXUDR_Pos)               /* (EMAFE_IDR) Receive Underflow Flow Interrupt Disable Mask */
#define EMAFE_IDR_RXUDR(value)                (EMAFE_IDR_RXUDR_Msk & (_UINT32_(value) << EMAFE_IDR_RXUDR_Pos)) /* Assigment of value for RXUDR in the EMAFE_IDR register */
#define EMAFE_IDR_RXFULL_Pos                  _UINT32_(2)                                          /* (EMAFE_IDR) Receive FIFO Full Interrupt Disable Position */
#define EMAFE_IDR_RXFULL_Msk                  (_UINT32_(0x1) << EMAFE_IDR_RXFULL_Pos)              /* (EMAFE_IDR) Receive FIFO Full Interrupt Disable Mask */
#define EMAFE_IDR_RXFULL(value)               (EMAFE_IDR_RXFULL_Msk & (_UINT32_(value) << EMAFE_IDR_RXFULL_Pos)) /* Assigment of value for RXFULL in the EMAFE_IDR register */
#define EMAFE_IDR_RXEMPTY_Pos                 _UINT32_(3)                                          /* (EMAFE_IDR) Receive FIFO Empty Interrupt Disable Position */
#define EMAFE_IDR_RXEMPTY_Msk                 (_UINT32_(0x1) << EMAFE_IDR_RXEMPTY_Pos)             /* (EMAFE_IDR) Receive FIFO Empty Interrupt Disable Mask */
#define EMAFE_IDR_RXEMPTY(value)              (EMAFE_IDR_RXEMPTY_Msk & (_UINT32_(value) << EMAFE_IDR_RXEMPTY_Pos)) /* Assigment of value for RXEMPTY in the EMAFE_IDR register */
#define EMAFE_IDR_CHCHG_Pos                   _UINT32_(4)                                          /* (EMAFE_IDR) Channel Data Change Interrupt Disable Position */
#define EMAFE_IDR_CHCHG_Msk                   (_UINT32_(0x1) << EMAFE_IDR_CHCHG_Pos)               /* (EMAFE_IDR) Channel Data Change Interrupt Disable Mask */
#define EMAFE_IDR_CHCHG(value)                (EMAFE_IDR_CHCHG_Msk & (_UINT32_(value) << EMAFE_IDR_CHCHG_Pos)) /* Assigment of value for CHCHG in the EMAFE_IDR register */
#define EMAFE_IDR_CHDIFF_Pos                  _UINT32_(5)                                          /* (EMAFE_IDR) Comparison Flag Interrupt Disable Position */
#define EMAFE_IDR_CHDIFF_Msk                  (_UINT32_(0x1) << EMAFE_IDR_CHDIFF_Pos)              /* (EMAFE_IDR) Comparison Flag Interrupt Disable Mask */
#define EMAFE_IDR_CHDIFF(value)               (EMAFE_IDR_CHDIFF_Msk & (_UINT32_(value) << EMAFE_IDR_CHDIFF_Pos)) /* Assigment of value for CHDIFF in the EMAFE_IDR register */
#define EMAFE_IDR_PARERROR_Pos                _UINT32_(6)                                          /* (EMAFE_IDR) Parity Error Interrupt Disable Position */
#define EMAFE_IDR_PARERROR_Msk                (_UINT32_(0x1) << EMAFE_IDR_PARERROR_Pos)            /* (EMAFE_IDR) Parity Error Interrupt Disable Mask */
#define EMAFE_IDR_PARERROR(value)             (EMAFE_IDR_PARERROR_Msk & (_UINT32_(value) << EMAFE_IDR_PARERROR_Pos)) /* Assigment of value for PARERROR in the EMAFE_IDR register */
#define EMAFE_IDR_ENDRX_Pos                   _UINT32_(7)                                          /* (EMAFE_IDR) PDC Receive Transfer End Interrupt Disable Position */
#define EMAFE_IDR_ENDRX_Msk                   (_UINT32_(0x1) << EMAFE_IDR_ENDRX_Pos)               /* (EMAFE_IDR) PDC Receive Transfer End Interrupt Disable Mask */
#define EMAFE_IDR_ENDRX(value)                (EMAFE_IDR_ENDRX_Msk & (_UINT32_(value) << EMAFE_IDR_ENDRX_Pos)) /* Assigment of value for ENDRX in the EMAFE_IDR register */
#define EMAFE_IDR_RXBUFF_Pos                  _UINT32_(8)                                          /* (EMAFE_IDR) PDC Receive Buffer Full Interrupt Disable Position */
#define EMAFE_IDR_RXBUFF_Msk                  (_UINT32_(0x1) << EMAFE_IDR_RXBUFF_Pos)              /* (EMAFE_IDR) PDC Receive Buffer Full Interrupt Disable Mask */
#define EMAFE_IDR_RXBUFF(value)               (EMAFE_IDR_RXBUFF_Msk & (_UINT32_(value) << EMAFE_IDR_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the EMAFE_IDR register */
#define EMAFE_IDR_CHAEVT_Pos                  _UINT32_(9)                                          /* (EMAFE_IDR) Threshold Channel A Interrupt Disable Position */
#define EMAFE_IDR_CHAEVT_Msk                  (_UINT32_(0x1) << EMAFE_IDR_CHAEVT_Pos)              /* (EMAFE_IDR) Threshold Channel A Interrupt Disable Mask */
#define EMAFE_IDR_CHAEVT(value)               (EMAFE_IDR_CHAEVT_Msk & (_UINT32_(value) << EMAFE_IDR_CHAEVT_Pos)) /* Assigment of value for CHAEVT in the EMAFE_IDR register */
#define EMAFE_IDR_CHBEVT_Pos                  _UINT32_(10)                                         /* (EMAFE_IDR) Threshold Channel B Interrupt Disable Position */
#define EMAFE_IDR_CHBEVT_Msk                  (_UINT32_(0x1) << EMAFE_IDR_CHBEVT_Pos)              /* (EMAFE_IDR) Threshold Channel B Interrupt Disable Mask */
#define EMAFE_IDR_CHBEVT(value)               (EMAFE_IDR_CHBEVT_Msk & (_UINT32_(value) << EMAFE_IDR_CHBEVT_Pos)) /* Assigment of value for CHBEVT in the EMAFE_IDR register */
#define EMAFE_IDR_Msk                         _UINT32_(0x000007FF)                                 /* (EMAFE_IDR) Register Mask  */


/* -------- EMAFE_IMR : (EMAFE Offset: 0x58) ( R/ 32) Interrupt Mask Register -------- */
#define EMAFE_IMR_DRDY_Pos                    _UINT32_(0)                                          /* (EMAFE_IMR) Data Ready Interrupt Mask Position */
#define EMAFE_IMR_DRDY_Msk                    (_UINT32_(0x1) << EMAFE_IMR_DRDY_Pos)                /* (EMAFE_IMR) Data Ready Interrupt Mask Mask */
#define EMAFE_IMR_DRDY(value)                 (EMAFE_IMR_DRDY_Msk & (_UINT32_(value) << EMAFE_IMR_DRDY_Pos)) /* Assigment of value for DRDY in the EMAFE_IMR register */
#define EMAFE_IMR_RXUDR_Pos                   _UINT32_(1)                                          /* (EMAFE_IMR) Receive Underflow Flow Interrupt Mask Position */
#define EMAFE_IMR_RXUDR_Msk                   (_UINT32_(0x1) << EMAFE_IMR_RXUDR_Pos)               /* (EMAFE_IMR) Receive Underflow Flow Interrupt Mask Mask */
#define EMAFE_IMR_RXUDR(value)                (EMAFE_IMR_RXUDR_Msk & (_UINT32_(value) << EMAFE_IMR_RXUDR_Pos)) /* Assigment of value for RXUDR in the EMAFE_IMR register */
#define EMAFE_IMR_RXFULL_Pos                  _UINT32_(2)                                          /* (EMAFE_IMR) Receive FIFO Full Interrupt Mask Position */
#define EMAFE_IMR_RXFULL_Msk                  (_UINT32_(0x1) << EMAFE_IMR_RXFULL_Pos)              /* (EMAFE_IMR) Receive FIFO Full Interrupt Mask Mask */
#define EMAFE_IMR_RXFULL(value)               (EMAFE_IMR_RXFULL_Msk & (_UINT32_(value) << EMAFE_IMR_RXFULL_Pos)) /* Assigment of value for RXFULL in the EMAFE_IMR register */
#define EMAFE_IMR_RXEMPTY_Pos                 _UINT32_(3)                                          /* (EMAFE_IMR) Receive FIFO Empty Interrupt Mask Position */
#define EMAFE_IMR_RXEMPTY_Msk                 (_UINT32_(0x1) << EMAFE_IMR_RXEMPTY_Pos)             /* (EMAFE_IMR) Receive FIFO Empty Interrupt Mask Mask */
#define EMAFE_IMR_RXEMPTY(value)              (EMAFE_IMR_RXEMPTY_Msk & (_UINT32_(value) << EMAFE_IMR_RXEMPTY_Pos)) /* Assigment of value for RXEMPTY in the EMAFE_IMR register */
#define EMAFE_IMR_CHCHG_Pos                   _UINT32_(4)                                          /* (EMAFE_IMR) Channel Data Change Interrupt Mask Position */
#define EMAFE_IMR_CHCHG_Msk                   (_UINT32_(0x1) << EMAFE_IMR_CHCHG_Pos)               /* (EMAFE_IMR) Channel Data Change Interrupt Mask Mask */
#define EMAFE_IMR_CHCHG(value)                (EMAFE_IMR_CHCHG_Msk & (_UINT32_(value) << EMAFE_IMR_CHCHG_Pos)) /* Assigment of value for CHCHG in the EMAFE_IMR register */
#define EMAFE_IMR_CHDIFF_Pos                  _UINT32_(5)                                          /* (EMAFE_IMR) Comparison Flag Interrupt Mask Position */
#define EMAFE_IMR_CHDIFF_Msk                  (_UINT32_(0x1) << EMAFE_IMR_CHDIFF_Pos)              /* (EMAFE_IMR) Comparison Flag Interrupt Mask Mask */
#define EMAFE_IMR_CHDIFF(value)               (EMAFE_IMR_CHDIFF_Msk & (_UINT32_(value) << EMAFE_IMR_CHDIFF_Pos)) /* Assigment of value for CHDIFF in the EMAFE_IMR register */
#define EMAFE_IMR_PARERROR_Pos                _UINT32_(6)                                          /* (EMAFE_IMR) Parity Error Interrupt Mask Position */
#define EMAFE_IMR_PARERROR_Msk                (_UINT32_(0x1) << EMAFE_IMR_PARERROR_Pos)            /* (EMAFE_IMR) Parity Error Interrupt Mask Mask */
#define EMAFE_IMR_PARERROR(value)             (EMAFE_IMR_PARERROR_Msk & (_UINT32_(value) << EMAFE_IMR_PARERROR_Pos)) /* Assigment of value for PARERROR in the EMAFE_IMR register */
#define EMAFE_IMR_ENDRX_Pos                   _UINT32_(7)                                          /* (EMAFE_IMR) PDC Receive Transfer End Interrupt Mask Position */
#define EMAFE_IMR_ENDRX_Msk                   (_UINT32_(0x1) << EMAFE_IMR_ENDRX_Pos)               /* (EMAFE_IMR) PDC Receive Transfer End Interrupt Mask Mask */
#define EMAFE_IMR_ENDRX(value)                (EMAFE_IMR_ENDRX_Msk & (_UINT32_(value) << EMAFE_IMR_ENDRX_Pos)) /* Assigment of value for ENDRX in the EMAFE_IMR register */
#define EMAFE_IMR_RXBUFF_Pos                  _UINT32_(8)                                          /* (EMAFE_IMR) PDC Receive Buffer Full Interrupt Mask Position */
#define EMAFE_IMR_RXBUFF_Msk                  (_UINT32_(0x1) << EMAFE_IMR_RXBUFF_Pos)              /* (EMAFE_IMR) PDC Receive Buffer Full Interrupt Mask Mask */
#define EMAFE_IMR_RXBUFF(value)               (EMAFE_IMR_RXBUFF_Msk & (_UINT32_(value) << EMAFE_IMR_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the EMAFE_IMR register */
#define EMAFE_IMR_CHAEVT_Pos                  _UINT32_(9)                                          /* (EMAFE_IMR) Channel A Interrupt Mask Position */
#define EMAFE_IMR_CHAEVT_Msk                  (_UINT32_(0x1) << EMAFE_IMR_CHAEVT_Pos)              /* (EMAFE_IMR) Channel A Interrupt Mask Mask */
#define EMAFE_IMR_CHAEVT(value)               (EMAFE_IMR_CHAEVT_Msk & (_UINT32_(value) << EMAFE_IMR_CHAEVT_Pos)) /* Assigment of value for CHAEVT in the EMAFE_IMR register */
#define EMAFE_IMR_CHBEVT_Pos                  _UINT32_(10)                                         /* (EMAFE_IMR) Channel B Interrupt Mask Position */
#define EMAFE_IMR_CHBEVT_Msk                  (_UINT32_(0x1) << EMAFE_IMR_CHBEVT_Pos)              /* (EMAFE_IMR) Channel B Interrupt Mask Mask */
#define EMAFE_IMR_CHBEVT(value)               (EMAFE_IMR_CHBEVT_Msk & (_UINT32_(value) << EMAFE_IMR_CHBEVT_Pos)) /* Assigment of value for CHBEVT in the EMAFE_IMR register */
#define EMAFE_IMR_Msk                         _UINT32_(0x000007FF)                                 /* (EMAFE_IMR) Register Mask  */


/* -------- EMAFE_ISR : (EMAFE Offset: 0x5C) ( R/ 32) Interrupt Status Register -------- */
#define EMAFE_ISR_DRDY_Pos                    _UINT32_(0)                                          /* (EMAFE_ISR) Data Ready (cleared on read) Position */
#define EMAFE_ISR_DRDY_Msk                    (_UINT32_(0x1) << EMAFE_ISR_DRDY_Pos)                /* (EMAFE_ISR) Data Ready (cleared on read) Mask */
#define EMAFE_ISR_DRDY(value)                 (EMAFE_ISR_DRDY_Msk & (_UINT32_(value) << EMAFE_ISR_DRDY_Pos)) /* Assigment of value for DRDY in the EMAFE_ISR register */
#define EMAFE_ISR_RXUDR_Pos                   _UINT32_(1)                                          /* (EMAFE_ISR) Receive Under Flow (cleared on read) Position */
#define EMAFE_ISR_RXUDR_Msk                   (_UINT32_(0x1) << EMAFE_ISR_RXUDR_Pos)               /* (EMAFE_ISR) Receive Under Flow (cleared on read) Mask */
#define EMAFE_ISR_RXUDR(value)                (EMAFE_ISR_RXUDR_Msk & (_UINT32_(value) << EMAFE_ISR_RXUDR_Pos)) /* Assigment of value for RXUDR in the EMAFE_ISR register */
#define EMAFE_ISR_RXFULL_Pos                  _UINT32_(2)                                          /* (EMAFE_ISR) Receive FIFO Full (cleared on read) Position */
#define EMAFE_ISR_RXFULL_Msk                  (_UINT32_(0x1) << EMAFE_ISR_RXFULL_Pos)              /* (EMAFE_ISR) Receive FIFO Full (cleared on read) Mask */
#define EMAFE_ISR_RXFULL(value)               (EMAFE_ISR_RXFULL_Msk & (_UINT32_(value) << EMAFE_ISR_RXFULL_Pos)) /* Assigment of value for RXFULL in the EMAFE_ISR register */
#define EMAFE_ISR_RXEMPTY_Pos                 _UINT32_(3)                                          /* (EMAFE_ISR) Receive FIFO Empty (cleared on read) Position */
#define EMAFE_ISR_RXEMPTY_Msk                 (_UINT32_(0x1) << EMAFE_ISR_RXEMPTY_Pos)             /* (EMAFE_ISR) Receive FIFO Empty (cleared on read) Mask */
#define EMAFE_ISR_RXEMPTY(value)              (EMAFE_ISR_RXEMPTY_Msk & (_UINT32_(value) << EMAFE_ISR_RXEMPTY_Pos)) /* Assigment of value for RXEMPTY in the EMAFE_ISR register */
#define EMAFE_ISR_CHCHG_Pos                   _UINT32_(4)                                          /* (EMAFE_ISR) Channel Data Variation Detection Event (cleared on read) Position */
#define EMAFE_ISR_CHCHG_Msk                   (_UINT32_(0x1) << EMAFE_ISR_CHCHG_Pos)               /* (EMAFE_ISR) Channel Data Variation Detection Event (cleared on read) Mask */
#define EMAFE_ISR_CHCHG(value)                (EMAFE_ISR_CHCHG_Msk & (_UINT32_(value) << EMAFE_ISR_CHCHG_Pos)) /* Assigment of value for CHCHG in the EMAFE_ISR register */
#define EMAFE_ISR_CHDIFF_Pos                  _UINT32_(5)                                          /* (EMAFE_ISR) Channel Difference Comparison Event (cleared on read) Position */
#define EMAFE_ISR_CHDIFF_Msk                  (_UINT32_(0x1) << EMAFE_ISR_CHDIFF_Pos)              /* (EMAFE_ISR) Channel Difference Comparison Event (cleared on read) Mask */
#define EMAFE_ISR_CHDIFF(value)               (EMAFE_ISR_CHDIFF_Msk & (_UINT32_(value) << EMAFE_ISR_CHDIFF_Pos)) /* Assigment of value for CHDIFF in the EMAFE_ISR register */
#define EMAFE_ISR_PARERROR_Pos                _UINT32_(6)                                          /* (EMAFE_ISR) Parity Error Event (cleared on read) Position */
#define EMAFE_ISR_PARERROR_Msk                (_UINT32_(0x1) << EMAFE_ISR_PARERROR_Pos)            /* (EMAFE_ISR) Parity Error Event (cleared on read) Mask */
#define EMAFE_ISR_PARERROR(value)             (EMAFE_ISR_PARERROR_Msk & (_UINT32_(value) << EMAFE_ISR_PARERROR_Pos)) /* Assigment of value for PARERROR in the EMAFE_ISR register */
#define EMAFE_ISR_ENDRX_Pos                   _UINT32_(7)                                          /* (EMAFE_ISR) PDC Receive Transfer End Event (cleared by writing EMAFE_RCR or EMAFE_RNCR) Position */
#define EMAFE_ISR_ENDRX_Msk                   (_UINT32_(0x1) << EMAFE_ISR_ENDRX_Pos)               /* (EMAFE_ISR) PDC Receive Transfer End Event (cleared by writing EMAFE_RCR or EMAFE_RNCR) Mask */
#define EMAFE_ISR_ENDRX(value)                (EMAFE_ISR_ENDRX_Msk & (_UINT32_(value) << EMAFE_ISR_ENDRX_Pos)) /* Assigment of value for ENDRX in the EMAFE_ISR register */
#define EMAFE_ISR_RXBUFF_Pos                  _UINT32_(8)                                          /* (EMAFE_ISR) PDC Receive Buffer Full Event (cleared by writing EMAFE_RCR or EMAFE_RNCR) Position */
#define EMAFE_ISR_RXBUFF_Msk                  (_UINT32_(0x1) << EMAFE_ISR_RXBUFF_Pos)              /* (EMAFE_ISR) PDC Receive Buffer Full Event (cleared by writing EMAFE_RCR or EMAFE_RNCR) Mask */
#define EMAFE_ISR_RXBUFF(value)               (EMAFE_ISR_RXBUFF_Msk & (_UINT32_(value) << EMAFE_ISR_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the EMAFE_ISR register */
#define EMAFE_ISR_CHAEVT_Pos                  _UINT32_(9)                                          /* (EMAFE_ISR) Channel A Event (cleared on read) Position */
#define EMAFE_ISR_CHAEVT_Msk                  (_UINT32_(0x1) << EMAFE_ISR_CHAEVT_Pos)              /* (EMAFE_ISR) Channel A Event (cleared on read) Mask */
#define EMAFE_ISR_CHAEVT(value)               (EMAFE_ISR_CHAEVT_Msk & (_UINT32_(value) << EMAFE_ISR_CHAEVT_Pos)) /* Assigment of value for CHAEVT in the EMAFE_ISR register */
#define EMAFE_ISR_CHBEVT_Pos                  _UINT32_(10)                                         /* (EMAFE_ISR) Channel B Event (cleared on read) Position */
#define EMAFE_ISR_CHBEVT_Msk                  (_UINT32_(0x1) << EMAFE_ISR_CHBEVT_Pos)              /* (EMAFE_ISR) Channel B Event (cleared on read) Mask */
#define EMAFE_ISR_CHBEVT(value)               (EMAFE_ISR_CHBEVT_Msk & (_UINT32_(value) << EMAFE_ISR_CHBEVT_Pos)) /* Assigment of value for CHBEVT in the EMAFE_ISR register */
#define EMAFE_ISR_Msk                         _UINT32_(0x000007FF)                                 /* (EMAFE_ISR) Register Mask  */


/* -------- EMAFE_SR : (EMAFE Offset: 0x60) ( R/ 32) Status Register -------- */
#define EMAFE_SR_CHAEVT_Pos                   _UINT32_(0)                                          /* (EMAFE_SR) Event on Channel A Position */
#define EMAFE_SR_CHAEVT_Msk                   (_UINT32_(0x1) << EMAFE_SR_CHAEVT_Pos)               /* (EMAFE_SR) Event on Channel A Mask */
#define EMAFE_SR_CHAEVT(value)                (EMAFE_SR_CHAEVT_Msk & (_UINT32_(value) << EMAFE_SR_CHAEVT_Pos)) /* Assigment of value for CHAEVT in the EMAFE_SR register */
#define EMAFE_SR_CHBEVT_Pos                   _UINT32_(1)                                          /* (EMAFE_SR) Event on Channel B Position */
#define EMAFE_SR_CHBEVT_Msk                   (_UINT32_(0x1) << EMAFE_SR_CHBEVT_Pos)               /* (EMAFE_SR) Event on Channel B Mask */
#define EMAFE_SR_CHBEVT(value)                (EMAFE_SR_CHBEVT_Msk & (_UINT32_(value) << EMAFE_SR_CHBEVT_Pos)) /* Assigment of value for CHBEVT in the EMAFE_SR register */
#define EMAFE_SR_Msk                          _UINT32_(0x00000003)                                 /* (EMAFE_SR) Register Mask  */


/* -------- EMAFE_WPMR : (EMAFE Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define EMAFE_WPMR_WPCFEN_Pos                 _UINT32_(0)                                          /* (EMAFE_WPMR) Write Protection Configuration Enable Position */
#define EMAFE_WPMR_WPCFEN_Msk                 (_UINT32_(0x1) << EMAFE_WPMR_WPCFEN_Pos)             /* (EMAFE_WPMR) Write Protection Configuration Enable Mask */
#define EMAFE_WPMR_WPCFEN(value)              (EMAFE_WPMR_WPCFEN_Msk & (_UINT32_(value) << EMAFE_WPMR_WPCFEN_Pos)) /* Assigment of value for WPCFEN in the EMAFE_WPMR register */
#define EMAFE_WPMR_WPITEN_Pos                 _UINT32_(1)                                          /* (EMAFE_WPMR) Write Protection Interrupt Enable Position */
#define EMAFE_WPMR_WPITEN_Msk                 (_UINT32_(0x1) << EMAFE_WPMR_WPITEN_Pos)             /* (EMAFE_WPMR) Write Protection Interrupt Enable Mask */
#define EMAFE_WPMR_WPITEN(value)              (EMAFE_WPMR_WPITEN_Msk & (_UINT32_(value) << EMAFE_WPMR_WPITEN_Pos)) /* Assigment of value for WPITEN in the EMAFE_WPMR register */
#define EMAFE_WPMR_WPCTRL_Pos                 _UINT32_(2)                                          /* (EMAFE_WPMR) Write Protection Control Position */
#define EMAFE_WPMR_WPCTRL_Msk                 (_UINT32_(0x1) << EMAFE_WPMR_WPCTRL_Pos)             /* (EMAFE_WPMR) Write Protection Control Mask */
#define EMAFE_WPMR_WPCTRL(value)              (EMAFE_WPMR_WPCTRL_Msk & (_UINT32_(value) << EMAFE_WPMR_WPCTRL_Pos)) /* Assigment of value for WPCTRL in the EMAFE_WPMR register */
#define EMAFE_WPMR_WPKEY_Pos                  _UINT32_(8)                                          /* (EMAFE_WPMR) Write Protection Key Position */
#define EMAFE_WPMR_WPKEY_Msk                  (_UINT32_(0xFFFFFF) << EMAFE_WPMR_WPKEY_Pos)         /* (EMAFE_WPMR) Write Protection Key Mask */
#define EMAFE_WPMR_WPKEY(value)               (EMAFE_WPMR_WPKEY_Msk & (_UINT32_(value) << EMAFE_WPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the EMAFE_WPMR register */
#define   EMAFE_WPMR_WPKEY_PASSWD_Val         _UINT32_(0x768070)                                   /* (EMAFE_WPMR) Writing any other value in this field aborts the write operation of the WPCFEN and WPITEN bit. Always reads as 0.  */
#define EMAFE_WPMR_WPKEY_PASSWD               (EMAFE_WPMR_WPKEY_PASSWD_Val << EMAFE_WPMR_WPKEY_Pos) /* (EMAFE_WPMR) Writing any other value in this field aborts the write operation of the WPCFEN and WPITEN bit. Always reads as 0. Position  */
#define EMAFE_WPMR_Msk                        _UINT32_(0xFFFFFF07)                                 /* (EMAFE_WPMR) Register Mask  */


/* -------- EMAFE_WPSR : (EMAFE Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define EMAFE_WPSR_WPVS_Pos                   _UINT32_(0)                                          /* (EMAFE_WPSR) Write Protection Violation Status Position */
#define EMAFE_WPSR_WPVS_Msk                   (_UINT32_(0x1) << EMAFE_WPSR_WPVS_Pos)               /* (EMAFE_WPSR) Write Protection Violation Status Mask */
#define EMAFE_WPSR_WPVS(value)                (EMAFE_WPSR_WPVS_Msk & (_UINT32_(value) << EMAFE_WPSR_WPVS_Pos)) /* Assigment of value for WPVS in the EMAFE_WPSR register */
#define EMAFE_WPSR_WPVSRC_Pos                 _UINT32_(8)                                          /* (EMAFE_WPSR) Write Protection Violation Source Position */
#define EMAFE_WPSR_WPVSRC_Msk                 (_UINT32_(0xFFFF) << EMAFE_WPSR_WPVSRC_Pos)          /* (EMAFE_WPSR) Write Protection Violation Source Mask */
#define EMAFE_WPSR_WPVSRC(value)              (EMAFE_WPSR_WPVSRC_Msk & (_UINT32_(value) << EMAFE_WPSR_WPVSRC_Pos)) /* Assigment of value for WPVSRC in the EMAFE_WPSR register */
#define EMAFE_WPSR_Msk                        _UINT32_(0x00FFFF01)                                 /* (EMAFE_WPSR) Register Mask  */


/* -------- EMAFE_VERSION : (EMAFE Offset: 0xFC) ( R/ 32) Version Register -------- */
#define EMAFE_VERSION_VERSION_Pos             _UINT32_(0)                                          /* (EMAFE_VERSION) Version of the Hardware Module Position */
#define EMAFE_VERSION_VERSION_Msk             (_UINT32_(0xFFFF) << EMAFE_VERSION_VERSION_Pos)      /* (EMAFE_VERSION) Version of the Hardware Module Mask */
#define EMAFE_VERSION_VERSION(value)          (EMAFE_VERSION_VERSION_Msk & (_UINT32_(value) << EMAFE_VERSION_VERSION_Pos)) /* Assigment of value for VERSION in the EMAFE_VERSION register */
#define EMAFE_VERSION_MFN_Pos                 _UINT32_(16)                                         /* (EMAFE_VERSION) Metal Fix Number Position */
#define EMAFE_VERSION_MFN_Msk                 (_UINT32_(0xF) << EMAFE_VERSION_MFN_Pos)             /* (EMAFE_VERSION) Metal Fix Number Mask */
#define EMAFE_VERSION_MFN(value)              (EMAFE_VERSION_MFN_Msk & (_UINT32_(value) << EMAFE_VERSION_MFN_Pos)) /* Assigment of value for MFN in the EMAFE_VERSION register */
#define EMAFE_VERSION_Msk                     _UINT32_(0x000FFFFF)                                 /* (EMAFE_VERSION) Register Mask  */


/* -------- EMAFE_RPR : (EMAFE Offset: 0x100) (R/W 32) Receive Pointer Register -------- */
#define EMAFE_RPR_RXPTR_Pos                   _UINT32_(0)                                          /* (EMAFE_RPR) Receive Pointer Register Position */
#define EMAFE_RPR_RXPTR_Msk                   (_UINT32_(0xFFFFFFFF) << EMAFE_RPR_RXPTR_Pos)        /* (EMAFE_RPR) Receive Pointer Register Mask */
#define EMAFE_RPR_RXPTR(value)                (EMAFE_RPR_RXPTR_Msk & (_UINT32_(value) << EMAFE_RPR_RXPTR_Pos)) /* Assigment of value for RXPTR in the EMAFE_RPR register */
#define EMAFE_RPR_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (EMAFE_RPR) Register Mask  */


/* -------- EMAFE_RCR : (EMAFE Offset: 0x104) (R/W 32) Receive Counter Register -------- */
#define EMAFE_RCR_RXCTR_Pos                   _UINT32_(0)                                          /* (EMAFE_RCR) Receive Counter Register Position */
#define EMAFE_RCR_RXCTR_Msk                   (_UINT32_(0xFFFF) << EMAFE_RCR_RXCTR_Pos)            /* (EMAFE_RCR) Receive Counter Register Mask */
#define EMAFE_RCR_RXCTR(value)                (EMAFE_RCR_RXCTR_Msk & (_UINT32_(value) << EMAFE_RCR_RXCTR_Pos)) /* Assigment of value for RXCTR in the EMAFE_RCR register */
#define EMAFE_RCR_Msk                         _UINT32_(0x0000FFFF)                                 /* (EMAFE_RCR) Register Mask  */


/* -------- EMAFE_RNPR : (EMAFE Offset: 0x110) (R/W 32) Receive Next Pointer Register -------- */
#define EMAFE_RNPR_RXNPTR_Pos                 _UINT32_(0)                                          /* (EMAFE_RNPR) Receive Next Pointer Position */
#define EMAFE_RNPR_RXNPTR_Msk                 (_UINT32_(0xFFFFFFFF) << EMAFE_RNPR_RXNPTR_Pos)      /* (EMAFE_RNPR) Receive Next Pointer Mask */
#define EMAFE_RNPR_RXNPTR(value)              (EMAFE_RNPR_RXNPTR_Msk & (_UINT32_(value) << EMAFE_RNPR_RXNPTR_Pos)) /* Assigment of value for RXNPTR in the EMAFE_RNPR register */
#define EMAFE_RNPR_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (EMAFE_RNPR) Register Mask  */


/* -------- EMAFE_RNCR : (EMAFE Offset: 0x114) (R/W 32) Receive Next Counter Register -------- */
#define EMAFE_RNCR_RXNCTR_Pos                 _UINT32_(0)                                          /* (EMAFE_RNCR) Receive Next Counter Position */
#define EMAFE_RNCR_RXNCTR_Msk                 (_UINT32_(0xFFFF) << EMAFE_RNCR_RXNCTR_Pos)          /* (EMAFE_RNCR) Receive Next Counter Mask */
#define EMAFE_RNCR_RXNCTR(value)              (EMAFE_RNCR_RXNCTR_Msk & (_UINT32_(value) << EMAFE_RNCR_RXNCTR_Pos)) /* Assigment of value for RXNCTR in the EMAFE_RNCR register */
#define EMAFE_RNCR_Msk                        _UINT32_(0x0000FFFF)                                 /* (EMAFE_RNCR) Register Mask  */


/* -------- EMAFE_PTCR : (EMAFE Offset: 0x120) ( /W 32) Transfer Control Register -------- */
#define EMAFE_PTCR_RXTEN_Pos                  _UINT32_(0)                                          /* (EMAFE_PTCR) Receiver Transfer Enable Position */
#define EMAFE_PTCR_RXTEN_Msk                  (_UINT32_(0x1) << EMAFE_PTCR_RXTEN_Pos)              /* (EMAFE_PTCR) Receiver Transfer Enable Mask */
#define EMAFE_PTCR_RXTEN(value)               (EMAFE_PTCR_RXTEN_Msk & (_UINT32_(value) << EMAFE_PTCR_RXTEN_Pos)) /* Assigment of value for RXTEN in the EMAFE_PTCR register */
#define EMAFE_PTCR_RXTDIS_Pos                 _UINT32_(1)                                          /* (EMAFE_PTCR) Receiver Transfer Disable Position */
#define EMAFE_PTCR_RXTDIS_Msk                 (_UINT32_(0x1) << EMAFE_PTCR_RXTDIS_Pos)             /* (EMAFE_PTCR) Receiver Transfer Disable Mask */
#define EMAFE_PTCR_RXTDIS(value)              (EMAFE_PTCR_RXTDIS_Msk & (_UINT32_(value) << EMAFE_PTCR_RXTDIS_Pos)) /* Assigment of value for RXTDIS in the EMAFE_PTCR register */
#define EMAFE_PTCR_TXTEN_Pos                  _UINT32_(8)                                          /* (EMAFE_PTCR) Transmitter Transfer Enable Position */
#define EMAFE_PTCR_TXTEN_Msk                  (_UINT32_(0x1) << EMAFE_PTCR_TXTEN_Pos)              /* (EMAFE_PTCR) Transmitter Transfer Enable Mask */
#define EMAFE_PTCR_TXTEN(value)               (EMAFE_PTCR_TXTEN_Msk & (_UINT32_(value) << EMAFE_PTCR_TXTEN_Pos)) /* Assigment of value for TXTEN in the EMAFE_PTCR register */
#define EMAFE_PTCR_TXTDIS_Pos                 _UINT32_(9)                                          /* (EMAFE_PTCR) Transmitter Transfer Disable Position */
#define EMAFE_PTCR_TXTDIS_Msk                 (_UINT32_(0x1) << EMAFE_PTCR_TXTDIS_Pos)             /* (EMAFE_PTCR) Transmitter Transfer Disable Mask */
#define EMAFE_PTCR_TXTDIS(value)              (EMAFE_PTCR_TXTDIS_Msk & (_UINT32_(value) << EMAFE_PTCR_TXTDIS_Pos)) /* Assigment of value for TXTDIS in the EMAFE_PTCR register */
#define EMAFE_PTCR_RXCBEN_Pos                 _UINT32_(16)                                         /* (EMAFE_PTCR) Receiver Circular Buffer Enable Position */
#define EMAFE_PTCR_RXCBEN_Msk                 (_UINT32_(0x1) << EMAFE_PTCR_RXCBEN_Pos)             /* (EMAFE_PTCR) Receiver Circular Buffer Enable Mask */
#define EMAFE_PTCR_RXCBEN(value)              (EMAFE_PTCR_RXCBEN_Msk & (_UINT32_(value) << EMAFE_PTCR_RXCBEN_Pos)) /* Assigment of value for RXCBEN in the EMAFE_PTCR register */
#define EMAFE_PTCR_RXCBDIS_Pos                _UINT32_(17)                                         /* (EMAFE_PTCR) Receiver Circular Buffer Disable Position */
#define EMAFE_PTCR_RXCBDIS_Msk                (_UINT32_(0x1) << EMAFE_PTCR_RXCBDIS_Pos)            /* (EMAFE_PTCR) Receiver Circular Buffer Disable Mask */
#define EMAFE_PTCR_RXCBDIS(value)             (EMAFE_PTCR_RXCBDIS_Msk & (_UINT32_(value) << EMAFE_PTCR_RXCBDIS_Pos)) /* Assigment of value for RXCBDIS in the EMAFE_PTCR register */
#define EMAFE_PTCR_TXCBEN_Pos                 _UINT32_(18)                                         /* (EMAFE_PTCR) Transmitter Circular Buffer Enable Position */
#define EMAFE_PTCR_TXCBEN_Msk                 (_UINT32_(0x1) << EMAFE_PTCR_TXCBEN_Pos)             /* (EMAFE_PTCR) Transmitter Circular Buffer Enable Mask */
#define EMAFE_PTCR_TXCBEN(value)              (EMAFE_PTCR_TXCBEN_Msk & (_UINT32_(value) << EMAFE_PTCR_TXCBEN_Pos)) /* Assigment of value for TXCBEN in the EMAFE_PTCR register */
#define EMAFE_PTCR_TXCBDIS_Pos                _UINT32_(19)                                         /* (EMAFE_PTCR) Transmitter Circular Buffer Disable Position */
#define EMAFE_PTCR_TXCBDIS_Msk                (_UINT32_(0x1) << EMAFE_PTCR_TXCBDIS_Pos)            /* (EMAFE_PTCR) Transmitter Circular Buffer Disable Mask */
#define EMAFE_PTCR_TXCBDIS(value)             (EMAFE_PTCR_TXCBDIS_Msk & (_UINT32_(value) << EMAFE_PTCR_TXCBDIS_Pos)) /* Assigment of value for TXCBDIS in the EMAFE_PTCR register */
#define EMAFE_PTCR_ERRCLR_Pos                 _UINT32_(24)                                         /* (EMAFE_PTCR) Transfer Bus Error Clear Position */
#define EMAFE_PTCR_ERRCLR_Msk                 (_UINT32_(0x1) << EMAFE_PTCR_ERRCLR_Pos)             /* (EMAFE_PTCR) Transfer Bus Error Clear Mask */
#define EMAFE_PTCR_ERRCLR(value)              (EMAFE_PTCR_ERRCLR_Msk & (_UINT32_(value) << EMAFE_PTCR_ERRCLR_Pos)) /* Assigment of value for ERRCLR in the EMAFE_PTCR register */
#define EMAFE_PTCR_Msk                        _UINT32_(0x010F0303)                                 /* (EMAFE_PTCR) Register Mask  */


/* -------- EMAFE_PTSR : (EMAFE Offset: 0x124) ( R/ 32) Transfer Status Register -------- */
#define EMAFE_PTSR_RXTEN_Pos                  _UINT32_(0)                                          /* (EMAFE_PTSR) Receiver Transfer Enable Position */
#define EMAFE_PTSR_RXTEN_Msk                  (_UINT32_(0x1) << EMAFE_PTSR_RXTEN_Pos)              /* (EMAFE_PTSR) Receiver Transfer Enable Mask */
#define EMAFE_PTSR_RXTEN(value)               (EMAFE_PTSR_RXTEN_Msk & (_UINT32_(value) << EMAFE_PTSR_RXTEN_Pos)) /* Assigment of value for RXTEN in the EMAFE_PTSR register */
#define EMAFE_PTSR_TXTEN_Pos                  _UINT32_(8)                                          /* (EMAFE_PTSR) Transmitter Transfer Enable Position */
#define EMAFE_PTSR_TXTEN_Msk                  (_UINT32_(0x1) << EMAFE_PTSR_TXTEN_Pos)              /* (EMAFE_PTSR) Transmitter Transfer Enable Mask */
#define EMAFE_PTSR_TXTEN(value)               (EMAFE_PTSR_TXTEN_Msk & (_UINT32_(value) << EMAFE_PTSR_TXTEN_Pos)) /* Assigment of value for TXTEN in the EMAFE_PTSR register */
#define EMAFE_PTSR_RXCBEN_Pos                 _UINT32_(16)                                         /* (EMAFE_PTSR) Receiver Circular Buffer Enable Position */
#define EMAFE_PTSR_RXCBEN_Msk                 (_UINT32_(0x1) << EMAFE_PTSR_RXCBEN_Pos)             /* (EMAFE_PTSR) Receiver Circular Buffer Enable Mask */
#define EMAFE_PTSR_RXCBEN(value)              (EMAFE_PTSR_RXCBEN_Msk & (_UINT32_(value) << EMAFE_PTSR_RXCBEN_Pos)) /* Assigment of value for RXCBEN in the EMAFE_PTSR register */
#define EMAFE_PTSR_TXCBEN_Pos                 _UINT32_(18)                                         /* (EMAFE_PTSR) Transmitter Circular Buffer Enable Position */
#define EMAFE_PTSR_TXCBEN_Msk                 (_UINT32_(0x1) << EMAFE_PTSR_TXCBEN_Pos)             /* (EMAFE_PTSR) Transmitter Circular Buffer Enable Mask */
#define EMAFE_PTSR_TXCBEN(value)              (EMAFE_PTSR_TXCBEN_Msk & (_UINT32_(value) << EMAFE_PTSR_TXCBEN_Pos)) /* Assigment of value for TXCBEN in the EMAFE_PTSR register */
#define EMAFE_PTSR_ERR_Pos                    _UINT32_(24)                                         /* (EMAFE_PTSR) Transfer Bus Error Position */
#define EMAFE_PTSR_ERR_Msk                    (_UINT32_(0x1) << EMAFE_PTSR_ERR_Pos)                /* (EMAFE_PTSR) Transfer Bus Error Mask */
#define EMAFE_PTSR_ERR(value)                 (EMAFE_PTSR_ERR_Msk & (_UINT32_(value) << EMAFE_PTSR_ERR_Pos)) /* Assigment of value for ERR in the EMAFE_PTSR register */
#define EMAFE_PTSR_Msk                        _UINT32_(0x01050101)                                 /* (EMAFE_PTSR) Register Mask  */


/* -------- EMAFE_PWPMR : (EMAFE Offset: 0x128) (R/W 32) Write Protection Mode Register -------- */
#define EMAFE_PWPMR_WPPTREN_Pos               _UINT32_(0)                                          /* (EMAFE_PWPMR) Write Protection Pointer Registers Enable Position */
#define EMAFE_PWPMR_WPPTREN_Msk               (_UINT32_(0x1) << EMAFE_PWPMR_WPPTREN_Pos)           /* (EMAFE_PWPMR) Write Protection Pointer Registers Enable Mask */
#define EMAFE_PWPMR_WPPTREN(value)            (EMAFE_PWPMR_WPPTREN_Msk & (_UINT32_(value) << EMAFE_PWPMR_WPPTREN_Pos)) /* Assigment of value for WPPTREN in the EMAFE_PWPMR register */
#define EMAFE_PWPMR_WPCTREN_Pos               _UINT32_(1)                                          /* (EMAFE_PWPMR) Write Protection Counter Registers Enable Position */
#define EMAFE_PWPMR_WPCTREN_Msk               (_UINT32_(0x1) << EMAFE_PWPMR_WPCTREN_Pos)           /* (EMAFE_PWPMR) Write Protection Counter Registers Enable Mask */
#define EMAFE_PWPMR_WPCTREN(value)            (EMAFE_PWPMR_WPCTREN_Msk & (_UINT32_(value) << EMAFE_PWPMR_WPCTREN_Pos)) /* Assigment of value for WPCTREN in the EMAFE_PWPMR register */
#define EMAFE_PWPMR_WPCREN_Pos                _UINT32_(2)                                          /* (EMAFE_PWPMR) Write Protection Control Register Enable Position */
#define EMAFE_PWPMR_WPCREN_Msk                (_UINT32_(0x1) << EMAFE_PWPMR_WPCREN_Pos)            /* (EMAFE_PWPMR) Write Protection Control Register Enable Mask */
#define EMAFE_PWPMR_WPCREN(value)             (EMAFE_PWPMR_WPCREN_Msk & (_UINT32_(value) << EMAFE_PWPMR_WPCREN_Pos)) /* Assigment of value for WPCREN in the EMAFE_PWPMR register */
#define EMAFE_PWPMR_WPKEY_Pos                 _UINT32_(8)                                          /* (EMAFE_PWPMR) Write Protection Key Position */
#define EMAFE_PWPMR_WPKEY_Msk                 (_UINT32_(0xFFFFFF) << EMAFE_PWPMR_WPKEY_Pos)        /* (EMAFE_PWPMR) Write Protection Key Mask */
#define EMAFE_PWPMR_WPKEY(value)              (EMAFE_PWPMR_WPKEY_Msk & (_UINT32_(value) << EMAFE_PWPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the EMAFE_PWPMR register */
#define   EMAFE_PWPMR_WPKEY_PASSWD_Val        _UINT32_(0x504443)                                   /* (EMAFE_PWPMR) Writing any other value in this field aborts the write operation. Always reads as 0.  */
#define EMAFE_PWPMR_WPKEY_PASSWD              (EMAFE_PWPMR_WPKEY_PASSWD_Val << EMAFE_PWPMR_WPKEY_Pos) /* (EMAFE_PWPMR) Writing any other value in this field aborts the write operation. Always reads as 0. Position  */
#define EMAFE_PWPMR_Msk                       _UINT32_(0xFFFFFF07)                                 /* (EMAFE_PWPMR) Register Mask  */


/** \brief EMAFE register offsets definitions */
#define EMAFE_CR_REG_OFST              _UINT32_(0x00)      /* (EMAFE_CR) Control Register Offset */
#define EMAFE_MR_REG_OFST              _UINT32_(0x04)      /* (EMAFE_MR) Mode Register Offset */
#define EMAFE_CDCR_REG_OFST            _UINT32_(0x08)      /* (EMAFE_CDCR) Channels Difference Comparison Register Offset */
#define EMAFE_EMR_REG_OFST             _UINT32_(0x0C)      /* (EMAFE_EMR) Extended Mode Register Offset */
#define EMAFE_DMA_DATA_REG_OFST        _UINT32_(0x10)      /* (EMAFE_DMA_DATA) DMA Data Register Offset */
#define EMAFE_DATA_REG_OFST            _UINT32_(0x14)      /* (EMAFE_DATA) Data Channel 0 Register Offset */
#define EMAFE_DATA0_REG_OFST           _UINT32_(0x14)      /* (EMAFE_DATA0) Data Channel 0 Register Offset */
#define EMAFE_DATA1_REG_OFST           _UINT32_(0x18)      /* (EMAFE_DATA1) Data Channel 0 Register Offset */
#define EMAFE_DATA2_REG_OFST           _UINT32_(0x1C)      /* (EMAFE_DATA2) Data Channel 0 Register Offset */
#define EMAFE_DATA3_REG_OFST           _UINT32_(0x20)      /* (EMAFE_DATA3) Data Channel 0 Register Offset */
#define EMAFE_DATA4_REG_OFST           _UINT32_(0x24)      /* (EMAFE_DATA4) Data Channel 0 Register Offset */
#define EMAFE_CHA_CFG1_REG_OFST        _UINT32_(0x40)      /* (EMAFE_CHA_CFG1) Channel A Comparison Configuration 1 Offset */
#define EMAFE_CHB_CFG1_REG_OFST        _UINT32_(0x44)      /* (EMAFE_CHB_CFG1) Channel B Comparison Configuration 1 Offset */
#define EMAFE_CHA_CFG2_REG_OFST        _UINT32_(0x48)      /* (EMAFE_CHA_CFG2) Channel A Comparison Configuration 2 Offset */
#define EMAFE_CHB_CFG2_REG_OFST        _UINT32_(0x4C)      /* (EMAFE_CHB_CFG2) Channel B Comparison Configuration 2 Offset */
#define EMAFE_IER_REG_OFST             _UINT32_(0x50)      /* (EMAFE_IER) Interrupt Enable Register Offset */
#define EMAFE_IDR_REG_OFST             _UINT32_(0x54)      /* (EMAFE_IDR) Interrupt Disable Register Offset */
#define EMAFE_IMR_REG_OFST             _UINT32_(0x58)      /* (EMAFE_IMR) Interrupt Mask Register Offset */
#define EMAFE_ISR_REG_OFST             _UINT32_(0x5C)      /* (EMAFE_ISR) Interrupt Status Register Offset */
#define EMAFE_SR_REG_OFST              _UINT32_(0x60)      /* (EMAFE_SR) Status Register Offset */
#define EMAFE_WPMR_REG_OFST            _UINT32_(0xE4)      /* (EMAFE_WPMR) Write Protection Mode Register Offset */
#define EMAFE_WPSR_REG_OFST            _UINT32_(0xE8)      /* (EMAFE_WPSR) Write Protection Status Register Offset */
#define EMAFE_VERSION_REG_OFST         _UINT32_(0xFC)      /* (EMAFE_VERSION) Version Register Offset */
#define EMAFE_RPR_REG_OFST             _UINT32_(0x100)     /* (EMAFE_RPR) Receive Pointer Register Offset */
#define EMAFE_RCR_REG_OFST             _UINT32_(0x104)     /* (EMAFE_RCR) Receive Counter Register Offset */
#define EMAFE_RNPR_REG_OFST            _UINT32_(0x110)     /* (EMAFE_RNPR) Receive Next Pointer Register Offset */
#define EMAFE_RNCR_REG_OFST            _UINT32_(0x114)     /* (EMAFE_RNCR) Receive Next Counter Register Offset */
#define EMAFE_PTCR_REG_OFST            _UINT32_(0x120)     /* (EMAFE_PTCR) Transfer Control Register Offset */
#define EMAFE_PTSR_REG_OFST            _UINT32_(0x124)     /* (EMAFE_PTSR) Transfer Status Register Offset */
#define EMAFE_PWPMR_REG_OFST           _UINT32_(0x128)     /* (EMAFE_PWPMR) Write Protection Mode Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief EMAFE register API structure */
typedef struct
{
  __O   uint32_t                       EMAFE_CR;           /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       EMAFE_MR;           /**< Offset: 0x04 (R/W  32) Mode Register */
  __IO  uint32_t                       EMAFE_CDCR;         /**< Offset: 0x08 (R/W  32) Channels Difference Comparison Register */
  __IO  uint32_t                       EMAFE_EMR;          /**< Offset: 0x0C (R/W  32) Extended Mode Register */
  __I   uint32_t                       EMAFE_DMA_DATA;     /**< Offset: 0x10 (R/   32) DMA Data Register */
  __I   uint32_t                       EMAFE_DATA[5];      /**< Offset: 0x14 (R/   32) Data Channel 0 Register */
  __I   uint8_t                        Reserved1[0x18];
  __IO  uint32_t                       EMAFE_CHA_CFG1;     /**< Offset: 0x40 (R/W  32) Channel A Comparison Configuration 1 */
  __IO  uint32_t                       EMAFE_CHB_CFG1;     /**< Offset: 0x44 (R/W  32) Channel B Comparison Configuration 1 */
  __IO  uint32_t                       EMAFE_CHA_CFG2;     /**< Offset: 0x48 (R/W  32) Channel A Comparison Configuration 2 */
  __IO  uint32_t                       EMAFE_CHB_CFG2;     /**< Offset: 0x4C (R/W  32) Channel B Comparison Configuration 2 */
  __O   uint32_t                       EMAFE_IER;          /**< Offset: 0x50 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       EMAFE_IDR;          /**< Offset: 0x54 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       EMAFE_IMR;          /**< Offset: 0x58 (R/   32) Interrupt Mask Register */
  __I   uint32_t                       EMAFE_ISR;          /**< Offset: 0x5C (R/   32) Interrupt Status Register */
  __I   uint32_t                       EMAFE_SR;           /**< Offset: 0x60 (R/   32) Status Register */
  __I   uint8_t                        Reserved2[0x80];
  __IO  uint32_t                       EMAFE_WPMR;         /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       EMAFE_WPSR;         /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
  __I   uint8_t                        Reserved3[0x10];
  __I   uint32_t                       EMAFE_VERSION;      /**< Offset: 0xFC (R/   32) Version Register */
  __IO  uint32_t                       EMAFE_RPR;          /**< Offset: 0x100 (R/W  32) Receive Pointer Register */
  __IO  uint32_t                       EMAFE_RCR;          /**< Offset: 0x104 (R/W  32) Receive Counter Register */
  __I   uint8_t                        Reserved4[0x08];
  __IO  uint32_t                       EMAFE_RNPR;         /**< Offset: 0x110 (R/W  32) Receive Next Pointer Register */
  __IO  uint32_t                       EMAFE_RNCR;         /**< Offset: 0x114 (R/W  32) Receive Next Counter Register */
  __I   uint8_t                        Reserved5[0x08];
  __O   uint32_t                       EMAFE_PTCR;         /**< Offset: 0x120 ( /W  32) Transfer Control Register */
  __I   uint32_t                       EMAFE_PTSR;         /**< Offset: 0x124 (R/   32) Transfer Status Register */
  __IO  uint32_t                       EMAFE_PWPMR;        /**< Offset: 0x128 (R/W  32) Write Protection Mode Register */
} emafe_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CXMTSH_EMAFE_COMPONENT_H_ */
