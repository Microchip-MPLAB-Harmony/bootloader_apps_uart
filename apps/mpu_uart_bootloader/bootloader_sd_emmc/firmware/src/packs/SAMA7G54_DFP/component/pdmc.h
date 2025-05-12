/*
 * Component description for PDMC
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

/*      file generated from device description file (ATDF) version None       */
#ifndef _SAMA7G5_PDMC_COMPONENT_H_
#define _SAMA7G5_PDMC_COMPONENT_H_

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR PDMC                      */
/* ************************************************************************** */

/* -------- PDMC_CR : (PDMC Offset: 0x00) ( /W 32) Control Register -------- */
#define PDMC_CR_SWRST_Pos                     _UINT32_(0)                                          /* (PDMC_CR) Software Reset Position */
#define PDMC_CR_SWRST_Msk                     (_UINT32_(0x1) << PDMC_CR_SWRST_Pos)                 /* (PDMC_CR) Software Reset Mask */
#define PDMC_CR_SWRST(value)                  (PDMC_CR_SWRST_Msk & (_UINT32_(value) << PDMC_CR_SWRST_Pos)) /* Assignment of value for SWRST in the PDMC_CR register */
#define   PDMC_CR_SWRST_0_Val                 _UINT32_(0x0)                                        /* (PDMC_CR) No effect.  */
#define   PDMC_CR_SWRST_1_Val                 _UINT32_(0x1)                                        /* (PDMC_CR) Resets the PDMC interface.  */
#define PDMC_CR_SWRST_0                       (PDMC_CR_SWRST_0_Val << PDMC_CR_SWRST_Pos)           /* (PDMC_CR) No effect. Position */
#define PDMC_CR_SWRST_1                       (PDMC_CR_SWRST_1_Val << PDMC_CR_SWRST_Pos)           /* (PDMC_CR) Resets the PDMC interface. Position */
#define PDMC_CR_Msk                           _UINT32_(0x00000001)                                 /* (PDMC_CR) Register Mask  */


/* -------- PDMC_MR : (PDMC Offset: 0x04) (R/W 32) Mode Register -------- */
#define PDMC_MR_RESETVALUE                    _UINT32_(0x10300000)                                 /*  (PDMC_MR) Mode Register  Reset Value */

#define PDMC_MR_PDMCEN0_Pos                   _UINT32_(0)                                          /* (PDMC_MR) PDMC Channel 0 Enable Position */
#define PDMC_MR_PDMCEN0_Msk                   (_UINT32_(0x1) << PDMC_MR_PDMCEN0_Pos)               /* (PDMC_MR) PDMC Channel 0 Enable Mask */
#define PDMC_MR_PDMCEN0(value)                (PDMC_MR_PDMCEN0_Msk & (_UINT32_(value) << PDMC_MR_PDMCEN0_Pos)) /* Assignment of value for PDMCEN0 in the PDMC_MR register */
#define   PDMC_MR_PDMCEN0_DISABLE_Val         _UINT32_(0x0)                                        /* (PDMC_MR) PDMC is disabled.  */
#define   PDMC_MR_PDMCEN0_ENABLE_Val          _UINT32_(0x1)                                        /* (PDMC_MR) PDMC is enabled.  */
#define PDMC_MR_PDMCEN0_DISABLE               (PDMC_MR_PDMCEN0_DISABLE_Val << PDMC_MR_PDMCEN0_Pos) /* (PDMC_MR) PDMC is disabled. Position */
#define PDMC_MR_PDMCEN0_ENABLE                (PDMC_MR_PDMCEN0_ENABLE_Val << PDMC_MR_PDMCEN0_Pos)  /* (PDMC_MR) PDMC is enabled. Position */
#define PDMC_MR_PDMCEN1_Pos                   _UINT32_(1)                                          /* (PDMC_MR) PDMC Channel 1 Enable Position */
#define PDMC_MR_PDMCEN1_Msk                   (_UINT32_(0x1) << PDMC_MR_PDMCEN1_Pos)               /* (PDMC_MR) PDMC Channel 1 Enable Mask */
#define PDMC_MR_PDMCEN1(value)                (PDMC_MR_PDMCEN1_Msk & (_UINT32_(value) << PDMC_MR_PDMCEN1_Pos)) /* Assignment of value for PDMCEN1 in the PDMC_MR register */
#define   PDMC_MR_PDMCEN1_DISABLE_Val         _UINT32_(0x0)                                        /* (PDMC_MR) PDMC is disabled.  */
#define   PDMC_MR_PDMCEN1_ENABLE_Val          _UINT32_(0x1)                                        /* (PDMC_MR) PDMC is enabled.  */
#define PDMC_MR_PDMCEN1_DISABLE               (PDMC_MR_PDMCEN1_DISABLE_Val << PDMC_MR_PDMCEN1_Pos) /* (PDMC_MR) PDMC is disabled. Position */
#define PDMC_MR_PDMCEN1_ENABLE                (PDMC_MR_PDMCEN1_ENABLE_Val << PDMC_MR_PDMCEN1_Pos)  /* (PDMC_MR) PDMC is enabled. Position */
#define PDMC_MR_PDMCEN2_Pos                   _UINT32_(2)                                          /* (PDMC_MR) PDMC Channel 2 Enable Position */
#define PDMC_MR_PDMCEN2_Msk                   (_UINT32_(0x1) << PDMC_MR_PDMCEN2_Pos)               /* (PDMC_MR) PDMC Channel 2 Enable Mask */
#define PDMC_MR_PDMCEN2(value)                (PDMC_MR_PDMCEN2_Msk & (_UINT32_(value) << PDMC_MR_PDMCEN2_Pos)) /* Assignment of value for PDMCEN2 in the PDMC_MR register */
#define   PDMC_MR_PDMCEN2_DISABLE_Val         _UINT32_(0x0)                                        /* (PDMC_MR) PDMC is disabled.  */
#define   PDMC_MR_PDMCEN2_ENABLE_Val          _UINT32_(0x1)                                        /* (PDMC_MR) PDMC is enabled.  */
#define PDMC_MR_PDMCEN2_DISABLE               (PDMC_MR_PDMCEN2_DISABLE_Val << PDMC_MR_PDMCEN2_Pos) /* (PDMC_MR) PDMC is disabled. Position */
#define PDMC_MR_PDMCEN2_ENABLE                (PDMC_MR_PDMCEN2_ENABLE_Val << PDMC_MR_PDMCEN2_Pos)  /* (PDMC_MR) PDMC is enabled. Position */
#define PDMC_MR_PDMCEN3_Pos                   _UINT32_(3)                                          /* (PDMC_MR) PDMC Channel 3 Enable Position */
#define PDMC_MR_PDMCEN3_Msk                   (_UINT32_(0x1) << PDMC_MR_PDMCEN3_Pos)               /* (PDMC_MR) PDMC Channel 3 Enable Mask */
#define PDMC_MR_PDMCEN3(value)                (PDMC_MR_PDMCEN3_Msk & (_UINT32_(value) << PDMC_MR_PDMCEN3_Pos)) /* Assignment of value for PDMCEN3 in the PDMC_MR register */
#define   PDMC_MR_PDMCEN3_DISABLE_Val         _UINT32_(0x0)                                        /* (PDMC_MR) PDMC is disabled.  */
#define   PDMC_MR_PDMCEN3_ENABLE_Val          _UINT32_(0x1)                                        /* (PDMC_MR) PDMC is enabled.  */
#define PDMC_MR_PDMCEN3_DISABLE               (PDMC_MR_PDMCEN3_DISABLE_Val << PDMC_MR_PDMCEN3_Pos) /* (PDMC_MR) PDMC is disabled. Position */
#define PDMC_MR_PDMCEN3_ENABLE                (PDMC_MR_PDMCEN3_ENABLE_Val << PDMC_MR_PDMCEN3_Pos)  /* (PDMC_MR) PDMC is enabled. Position */
#define PDMC_MR_OSR_Pos                       _UINT32_(16)                                         /* (PDMC_MR) Audio Oversampling Ratio Position */
#define PDMC_MR_OSR_Msk                       (_UINT32_(0x3) << PDMC_MR_OSR_Pos)                   /* (PDMC_MR) Audio Oversampling Ratio Mask */
#define PDMC_MR_OSR(value)                    (PDMC_MR_OSR_Msk & (_UINT32_(value) << PDMC_MR_OSR_Pos)) /* Assignment of value for OSR in the PDMC_MR register */
#define   PDMC_MR_OSR_OSR64_Val               _UINT32_(0x1)                                        /* (PDMC_MR) OSR is 64  */
#define   PDMC_MR_OSR_OSR128_Val              _UINT32_(0x2)                                        /* (PDMC_MR) OSR is 128  */
#define   PDMC_MR_OSR_OSR256_Val              _UINT32_(0x3)                                        /* (PDMC_MR) OSR is 256  */
#define PDMC_MR_OSR_OSR64                     (PDMC_MR_OSR_OSR64_Val << PDMC_MR_OSR_Pos)           /* (PDMC_MR) OSR is 64 Position */
#define PDMC_MR_OSR_OSR128                    (PDMC_MR_OSR_OSR128_Val << PDMC_MR_OSR_Pos)          /* (PDMC_MR) OSR is 128 Position */
#define PDMC_MR_OSR_OSR256                    (PDMC_MR_OSR_OSR256_Val << PDMC_MR_OSR_Pos)          /* (PDMC_MR) OSR is 256 Position */
#define PDMC_MR_SINCORDER_Pos                 _UINT32_(20)                                         /* (PDMC_MR) SINC Filter Order Position */
#define PDMC_MR_SINCORDER_Msk                 (_UINT32_(0xF) << PDMC_MR_SINCORDER_Pos)             /* (PDMC_MR) SINC Filter Order Mask */
#define PDMC_MR_SINCORDER(value)              (PDMC_MR_SINCORDER_Msk & (_UINT32_(value) << PDMC_MR_SINCORDER_Pos)) /* Assignment of value for SINCORDER in the PDMC_MR register */
#define   PDMC_MR_SINCORDER_ORDER1_Val        _UINT32_(0x1)                                        /* (PDMC_MR) SINC filter order is 1.  */
#define   PDMC_MR_SINCORDER_ORDER2_Val        _UINT32_(0x2)                                        /* (PDMC_MR) SINC filter order is 2.  */
#define   PDMC_MR_SINCORDER_ORDER3_Val        _UINT32_(0x3)                                        /* (PDMC_MR) SINC filter order is 3. Recommended if SINC_OSR=0  */
#define   PDMC_MR_SINCORDER_ORDER4_Val        _UINT32_(0x4)                                        /* (PDMC_MR) SINC filter order is 4.  */
#define   PDMC_MR_SINCORDER_ORDER5_Val        _UINT32_(0x5)                                        /* (PDMC_MR) SINC filter order is 5.  */
#define PDMC_MR_SINCORDER_ORDER1              (PDMC_MR_SINCORDER_ORDER1_Val << PDMC_MR_SINCORDER_Pos) /* (PDMC_MR) SINC filter order is 1. Position */
#define PDMC_MR_SINCORDER_ORDER2              (PDMC_MR_SINCORDER_ORDER2_Val << PDMC_MR_SINCORDER_Pos) /* (PDMC_MR) SINC filter order is 2. Position */
#define PDMC_MR_SINCORDER_ORDER3              (PDMC_MR_SINCORDER_ORDER3_Val << PDMC_MR_SINCORDER_Pos) /* (PDMC_MR) SINC filter order is 3. Recommended if SINC_OSR=0 Position */
#define PDMC_MR_SINCORDER_ORDER4              (PDMC_MR_SINCORDER_ORDER4_Val << PDMC_MR_SINCORDER_Pos) /* (PDMC_MR) SINC filter order is 4. Position */
#define PDMC_MR_SINCORDER_ORDER5              (PDMC_MR_SINCORDER_ORDER5_Val << PDMC_MR_SINCORDER_Pos) /* (PDMC_MR) SINC filter order is 5. Position */
#define PDMC_MR_SINC_OSR_Pos                  _UINT32_(24)                                         /* (PDMC_MR) SINC Filter Oversampling Ratio Position */
#define PDMC_MR_SINC_OSR_Msk                  (_UINT32_(0xF) << PDMC_MR_SINC_OSR_Pos)              /* (PDMC_MR) SINC Filter Oversampling Ratio Mask */
#define PDMC_MR_SINC_OSR(value)               (PDMC_MR_SINC_OSR_Msk & (_UINT32_(value) << PDMC_MR_SINC_OSR_Pos)) /* Assignment of value for SINC_OSR in the PDMC_MR register */
#define   PDMC_MR_SINC_OSR_DISABLE_Val        _UINT32_(0x0)                                        /* (PDMC_MR) Audio filtering mode. The SINC filter OSR is implicitly defined by the PDMC_MR.OSR field.  */
#define   PDMC_MR_SINC_OSR_OSR8_Val           _UINT32_(0x1)                                        /* (PDMC_MR) The SINC filter OSR is 8.  */
#define   PDMC_MR_SINC_OSR_OSR16_Val          _UINT32_(0x2)                                        /* (PDMC_MR) The SINC filter OSR is 16.  */
#define   PDMC_MR_SINC_OSR_OSR32_Val          _UINT32_(0x3)                                        /* (PDMC_MR) The SINC filter OSR is 32.  */
#define   PDMC_MR_SINC_OSR_OSR64_Val          _UINT32_(0x4)                                        /* (PDMC_MR) The SINC filter OSR is 64.  */
#define   PDMC_MR_SINC_OSR_OSR128_Val         _UINT32_(0x5)                                        /* (PDMC_MR) The SINC filter OSR is 128.  */
#define   PDMC_MR_SINC_OSR_OSR256_Val         _UINT32_(0x6)                                        /* (PDMC_MR) The SINC filter OSR is 256.  */
#define PDMC_MR_SINC_OSR_DISABLE              (PDMC_MR_SINC_OSR_DISABLE_Val << PDMC_MR_SINC_OSR_Pos) /* (PDMC_MR) Audio filtering mode. The SINC filter OSR is implicitly defined by the PDMC_MR.OSR field. Position */
#define PDMC_MR_SINC_OSR_OSR8                 (PDMC_MR_SINC_OSR_OSR8_Val << PDMC_MR_SINC_OSR_Pos)  /* (PDMC_MR) The SINC filter OSR is 8. Position */
#define PDMC_MR_SINC_OSR_OSR16                (PDMC_MR_SINC_OSR_OSR16_Val << PDMC_MR_SINC_OSR_Pos) /* (PDMC_MR) The SINC filter OSR is 16. Position */
#define PDMC_MR_SINC_OSR_OSR32                (PDMC_MR_SINC_OSR_OSR32_Val << PDMC_MR_SINC_OSR_Pos) /* (PDMC_MR) The SINC filter OSR is 32. Position */
#define PDMC_MR_SINC_OSR_OSR64                (PDMC_MR_SINC_OSR_OSR64_Val << PDMC_MR_SINC_OSR_Pos) /* (PDMC_MR) The SINC filter OSR is 64. Position */
#define PDMC_MR_SINC_OSR_OSR128               (PDMC_MR_SINC_OSR_OSR128_Val << PDMC_MR_SINC_OSR_Pos) /* (PDMC_MR) The SINC filter OSR is 128. Position */
#define PDMC_MR_SINC_OSR_OSR256               (PDMC_MR_SINC_OSR_OSR256_Val << PDMC_MR_SINC_OSR_Pos) /* (PDMC_MR) The SINC filter OSR is 256. Position */
#define PDMC_MR_CHUNK_Pos                     _UINT32_(28)                                         /* (PDMC_MR) Chunk Size Position */
#define PDMC_MR_CHUNK_Msk                     (_UINT32_(0xF) << PDMC_MR_CHUNK_Pos)                 /* (PDMC_MR) Chunk Size Mask */
#define PDMC_MR_CHUNK(value)                  (PDMC_MR_CHUNK_Msk & (_UINT32_(value) << PDMC_MR_CHUNK_Pos)) /* Assignment of value for CHUNK in the PDMC_MR register */
#define PDMC_MR_Msk                           _UINT32_(0xFFF3000F)                                 /* (PDMC_MR) Register Mask  */

#define PDMC_MR_PDMCEN_Pos                    _UINT32_(0)                                          /* (PDMC_MR Position) PDMC Channel x Enable */
#define PDMC_MR_PDMCEN_Msk                    (_UINT32_(0xF) << PDMC_MR_PDMCEN_Pos)                /* (PDMC_MR Mask) PDMCEN */
#define PDMC_MR_PDMCEN(value)                 (PDMC_MR_PDMCEN_Msk & (_UINT32_(value) << PDMC_MR_PDMCEN_Pos)) 

/* -------- PDMC_CFGR : (PDMC Offset: 0x08) (R/W 32) Configuration Register -------- */
#define PDMC_CFGR_RESETVALUE                  _UINT32_(0x500044)                                   /*  (PDMC_CFGR) Configuration Register  Reset Value */

#define PDMC_CFGR_BSSEL0_Pos                  _UINT32_(0)                                          /* (PDMC_CFGR) Bitstream Source Selection Position */
#define PDMC_CFGR_BSSEL0_Msk                  (_UINT32_(0x1) << PDMC_CFGR_BSSEL0_Pos)              /* (PDMC_CFGR) Bitstream Source Selection Mask */
#define PDMC_CFGR_BSSEL0(value)               (PDMC_CFGR_BSSEL0_Msk & (_UINT32_(value) << PDMC_CFGR_BSSEL0_Pos)) /* Assignment of value for BSSEL0 in the PDMC_CFGR register */
#define   PDMC_CFGR_BSSEL0_0_Val              _UINT32_(0x0)                                        /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the positive edge of PDMC_CLK.  */
#define   PDMC_CFGR_BSSEL0_1_Val              _UINT32_(0x1)                                        /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the negative edge of PDMC_CLK.  */
#define PDMC_CFGR_BSSEL0_0                    (PDMC_CFGR_BSSEL0_0_Val << PDMC_CFGR_BSSEL0_Pos)     /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the positive edge of PDMC_CLK. Position */
#define PDMC_CFGR_BSSEL0_1                    (PDMC_CFGR_BSSEL0_1_Val << PDMC_CFGR_BSSEL0_Pos)     /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the negative edge of PDMC_CLK. Position */
#define PDMC_CFGR_BSSEL1_Pos                  _UINT32_(2)                                          /* (PDMC_CFGR) Bitstream Source Selection Position */
#define PDMC_CFGR_BSSEL1_Msk                  (_UINT32_(0x1) << PDMC_CFGR_BSSEL1_Pos)              /* (PDMC_CFGR) Bitstream Source Selection Mask */
#define PDMC_CFGR_BSSEL1(value)               (PDMC_CFGR_BSSEL1_Msk & (_UINT32_(value) << PDMC_CFGR_BSSEL1_Pos)) /* Assignment of value for BSSEL1 in the PDMC_CFGR register */
#define   PDMC_CFGR_BSSEL1_0_Val              _UINT32_(0x0)                                        /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the positive edge of PDMC_CLK.  */
#define   PDMC_CFGR_BSSEL1_1_Val              _UINT32_(0x1)                                        /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the negative edge of PDMC_CLK.  */
#define PDMC_CFGR_BSSEL1_0                    (PDMC_CFGR_BSSEL1_0_Val << PDMC_CFGR_BSSEL1_Pos)     /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the positive edge of PDMC_CLK. Position */
#define PDMC_CFGR_BSSEL1_1                    (PDMC_CFGR_BSSEL1_1_Val << PDMC_CFGR_BSSEL1_Pos)     /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the negative edge of PDMC_CLK. Position */
#define PDMC_CFGR_BSSEL2_Pos                  _UINT32_(4)                                          /* (PDMC_CFGR) Bitstream Source Selection Position */
#define PDMC_CFGR_BSSEL2_Msk                  (_UINT32_(0x1) << PDMC_CFGR_BSSEL2_Pos)              /* (PDMC_CFGR) Bitstream Source Selection Mask */
#define PDMC_CFGR_BSSEL2(value)               (PDMC_CFGR_BSSEL2_Msk & (_UINT32_(value) << PDMC_CFGR_BSSEL2_Pos)) /* Assignment of value for BSSEL2 in the PDMC_CFGR register */
#define   PDMC_CFGR_BSSEL2_0_Val              _UINT32_(0x0)                                        /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the positive edge of PDMC_CLK.  */
#define   PDMC_CFGR_BSSEL2_1_Val              _UINT32_(0x1)                                        /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the negative edge of PDMC_CLK.  */
#define PDMC_CFGR_BSSEL2_0                    (PDMC_CFGR_BSSEL2_0_Val << PDMC_CFGR_BSSEL2_Pos)     /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the positive edge of PDMC_CLK. Position */
#define PDMC_CFGR_BSSEL2_1                    (PDMC_CFGR_BSSEL2_1_Val << PDMC_CFGR_BSSEL2_Pos)     /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the negative edge of PDMC_CLK. Position */
#define PDMC_CFGR_BSSEL3_Pos                  _UINT32_(6)                                          /* (PDMC_CFGR) Bitstream Source Selection Position */
#define PDMC_CFGR_BSSEL3_Msk                  (_UINT32_(0x1) << PDMC_CFGR_BSSEL3_Pos)              /* (PDMC_CFGR) Bitstream Source Selection Mask */
#define PDMC_CFGR_BSSEL3(value)               (PDMC_CFGR_BSSEL3_Msk & (_UINT32_(value) << PDMC_CFGR_BSSEL3_Pos)) /* Assignment of value for BSSEL3 in the PDMC_CFGR register */
#define   PDMC_CFGR_BSSEL3_0_Val              _UINT32_(0x0)                                        /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the positive edge of PDMC_CLK.  */
#define   PDMC_CFGR_BSSEL3_1_Val              _UINT32_(0x1)                                        /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the negative edge of PDMC_CLK.  */
#define PDMC_CFGR_BSSEL3_0                    (PDMC_CFGR_BSSEL3_0_Val << PDMC_CFGR_BSSEL3_Pos)     /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the positive edge of PDMC_CLK. Position */
#define PDMC_CFGR_BSSEL3_1                    (PDMC_CFGR_BSSEL3_1_Val << PDMC_CFGR_BSSEL3_Pos)     /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the negative edge of PDMC_CLK. Position */
#define PDMC_CFGR_PDMSEL0_Pos                 _UINT32_(16)                                         /* (PDMC_CFGR) PDM Microphone Source Selection Position */
#define PDMC_CFGR_PDMSEL0_Msk                 (_UINT32_(0x1) << PDMC_CFGR_PDMSEL0_Pos)             /* (PDMC_CFGR) PDM Microphone Source Selection Mask */
#define PDMC_CFGR_PDMSEL0(value)              (PDMC_CFGR_PDMSEL0_Msk & (_UINT32_(value) << PDMC_CFGR_PDMSEL0_Pos)) /* Assignment of value for PDMSEL0 in the PDMC_CFGR register */
#define   PDMC_CFGR_PDMSEL0_DS0_Val           _UINT32_(0x0)                                        /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS0.  */
#define   PDMC_CFGR_PDMSEL0_DS1_Val           _UINT32_(0x1)                                        /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS1.  */
#define PDMC_CFGR_PDMSEL0_DS0                 (PDMC_CFGR_PDMSEL0_DS0_Val << PDMC_CFGR_PDMSEL0_Pos) /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS0. Position */
#define PDMC_CFGR_PDMSEL0_DS1                 (PDMC_CFGR_PDMSEL0_DS1_Val << PDMC_CFGR_PDMSEL0_Pos) /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS1. Position */
#define PDMC_CFGR_PDMSEL1_Pos                 _UINT32_(18)                                         /* (PDMC_CFGR) PDM Microphone Source Selection Position */
#define PDMC_CFGR_PDMSEL1_Msk                 (_UINT32_(0x1) << PDMC_CFGR_PDMSEL1_Pos)             /* (PDMC_CFGR) PDM Microphone Source Selection Mask */
#define PDMC_CFGR_PDMSEL1(value)              (PDMC_CFGR_PDMSEL1_Msk & (_UINT32_(value) << PDMC_CFGR_PDMSEL1_Pos)) /* Assignment of value for PDMSEL1 in the PDMC_CFGR register */
#define   PDMC_CFGR_PDMSEL1_DS0_Val           _UINT32_(0x0)                                        /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS0.  */
#define   PDMC_CFGR_PDMSEL1_DS1_Val           _UINT32_(0x1)                                        /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS1.  */
#define PDMC_CFGR_PDMSEL1_DS0                 (PDMC_CFGR_PDMSEL1_DS0_Val << PDMC_CFGR_PDMSEL1_Pos) /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS0. Position */
#define PDMC_CFGR_PDMSEL1_DS1                 (PDMC_CFGR_PDMSEL1_DS1_Val << PDMC_CFGR_PDMSEL1_Pos) /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS1. Position */
#define PDMC_CFGR_PDMSEL2_Pos                 _UINT32_(20)                                         /* (PDMC_CFGR) PDM Microphone Source Selection Position */
#define PDMC_CFGR_PDMSEL2_Msk                 (_UINT32_(0x1) << PDMC_CFGR_PDMSEL2_Pos)             /* (PDMC_CFGR) PDM Microphone Source Selection Mask */
#define PDMC_CFGR_PDMSEL2(value)              (PDMC_CFGR_PDMSEL2_Msk & (_UINT32_(value) << PDMC_CFGR_PDMSEL2_Pos)) /* Assignment of value for PDMSEL2 in the PDMC_CFGR register */
#define   PDMC_CFGR_PDMSEL2_DS0_Val           _UINT32_(0x0)                                        /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS0.  */
#define   PDMC_CFGR_PDMSEL2_DS1_Val           _UINT32_(0x1)                                        /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS1.  */
#define PDMC_CFGR_PDMSEL2_DS0                 (PDMC_CFGR_PDMSEL2_DS0_Val << PDMC_CFGR_PDMSEL2_Pos) /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS0. Position */
#define PDMC_CFGR_PDMSEL2_DS1                 (PDMC_CFGR_PDMSEL2_DS1_Val << PDMC_CFGR_PDMSEL2_Pos) /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS1. Position */
#define PDMC_CFGR_PDMSEL3_Pos                 _UINT32_(22)                                         /* (PDMC_CFGR) PDM Microphone Source Selection Position */
#define PDMC_CFGR_PDMSEL3_Msk                 (_UINT32_(0x1) << PDMC_CFGR_PDMSEL3_Pos)             /* (PDMC_CFGR) PDM Microphone Source Selection Mask */
#define PDMC_CFGR_PDMSEL3(value)              (PDMC_CFGR_PDMSEL3_Msk & (_UINT32_(value) << PDMC_CFGR_PDMSEL3_Pos)) /* Assignment of value for PDMSEL3 in the PDMC_CFGR register */
#define   PDMC_CFGR_PDMSEL3_DS0_Val           _UINT32_(0x0)                                        /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS0.  */
#define   PDMC_CFGR_PDMSEL3_DS1_Val           _UINT32_(0x1)                                        /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS1.  */
#define PDMC_CFGR_PDMSEL3_DS0                 (PDMC_CFGR_PDMSEL3_DS0_Val << PDMC_CFGR_PDMSEL3_Pos) /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS0. Position */
#define PDMC_CFGR_PDMSEL3_DS1                 (PDMC_CFGR_PDMSEL3_DS1_Val << PDMC_CFGR_PDMSEL3_Pos) /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS1. Position */
#define PDMC_CFGR_Msk                         _UINT32_(0x00550055)                                 /* (PDMC_CFGR) Register Mask  */

#define PDMC_CFGR_BSSEL_Pos                   _UINT32_(0)                                          /* (PDMC_CFGR Position) Bitstream Source Selection */
#define PDMC_CFGR_BSSEL_Msk                   (_UINT32_(0xF) << PDMC_CFGR_BSSEL_Pos)               /* (PDMC_CFGR Mask) BSSEL */
#define PDMC_CFGR_BSSEL(value)                (PDMC_CFGR_BSSEL_Msk & (_UINT32_(value) << PDMC_CFGR_BSSEL_Pos)) 
#define PDMC_CFGR_PDMSEL_Pos                  _UINT32_(16)                                         /* (PDMC_CFGR Position) PDM Microphone Source Selection */
#define PDMC_CFGR_PDMSEL_Msk                  (_UINT32_(0xF) << PDMC_CFGR_PDMSEL_Pos)              /* (PDMC_CFGR Mask) PDMSEL */
#define PDMC_CFGR_PDMSEL(value)               (PDMC_CFGR_PDMSEL_Msk & (_UINT32_(value) << PDMC_CFGR_PDMSEL_Pos)) 

/* -------- PDMC_RHR : (PDMC Offset: 0x0C) ( R/ 32) Receive Holding Register -------- */
#define PDMC_RHR_RESETVALUE                   _UINT32_(0x00)                                       /*  (PDMC_RHR) Receive Holding Register  Reset Value */

#define PDMC_RHR_DATA_Pos                     _UINT32_(0)                                          /* (PDMC_RHR) Converted Data Position */
#define PDMC_RHR_DATA_Msk                     (_UINT32_(0xFFFFFF) << PDMC_RHR_DATA_Pos)            /* (PDMC_RHR) Converted Data Mask */
#define PDMC_RHR_DATA(value)                  (PDMC_RHR_DATA_Msk & (_UINT32_(value) << PDMC_RHR_DATA_Pos)) /* Assignment of value for DATA in the PDMC_RHR register */
#define PDMC_RHR_CHANNEL_Pos                  _UINT32_(24)                                         /* (PDMC_RHR) Channel Index of Data Position */
#define PDMC_RHR_CHANNEL_Msk                  (_UINT32_(0xFF) << PDMC_RHR_CHANNEL_Pos)             /* (PDMC_RHR) Channel Index of Data Mask */
#define PDMC_RHR_CHANNEL(value)               (PDMC_RHR_CHANNEL_Msk & (_UINT32_(value) << PDMC_RHR_CHANNEL_Pos)) /* Assignment of value for CHANNEL in the PDMC_RHR register */
#define PDMC_RHR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PDMC_RHR) Register Mask  */


/* -------- PDMC_IER : (PDMC Offset: 0x14) ( /W 32) Interrupt Enable Register -------- */
#define PDMC_IER_RXRDY_Pos                    _UINT32_(0)                                          /* (PDMC_IER) Receive Ready Interrupt Enable Position */
#define PDMC_IER_RXRDY_Msk                    (_UINT32_(0x1) << PDMC_IER_RXRDY_Pos)                /* (PDMC_IER) Receive Ready Interrupt Enable Mask */
#define PDMC_IER_RXRDY(value)                 (PDMC_IER_RXRDY_Msk & (_UINT32_(value) << PDMC_IER_RXRDY_Pos)) /* Assignment of value for RXRDY in the PDMC_IER register */
#define PDMC_IER_RXEMPTY_Pos                  _UINT32_(1)                                          /* (PDMC_IER) Receive FIFO Empty Interrupt Enable Position */
#define PDMC_IER_RXEMPTY_Msk                  (_UINT32_(0x1) << PDMC_IER_RXEMPTY_Pos)              /* (PDMC_IER) Receive FIFO Empty Interrupt Enable Mask */
#define PDMC_IER_RXEMPTY(value)               (PDMC_IER_RXEMPTY_Msk & (_UINT32_(value) << PDMC_IER_RXEMPTY_Pos)) /* Assignment of value for RXEMPTY in the PDMC_IER register */
#define PDMC_IER_RXFULL_Pos                   _UINT32_(2)                                          /* (PDMC_IER) Receive FIFO Full Interrupt Enable Position */
#define PDMC_IER_RXFULL_Msk                   (_UINT32_(0x1) << PDMC_IER_RXFULL_Pos)               /* (PDMC_IER) Receive FIFO Full Interrupt Enable Mask */
#define PDMC_IER_RXFULL(value)                (PDMC_IER_RXFULL_Msk & (_UINT32_(value) << PDMC_IER_RXFULL_Pos)) /* Assignment of value for RXFULL in the PDMC_IER register */
#define PDMC_IER_RXCHUNK_Pos                  _UINT32_(3)                                          /* (PDMC_IER) Receive FIFO Chunk Interrupt Enable Position */
#define PDMC_IER_RXCHUNK_Msk                  (_UINT32_(0x1) << PDMC_IER_RXCHUNK_Pos)              /* (PDMC_IER) Receive FIFO Chunk Interrupt Enable Mask */
#define PDMC_IER_RXCHUNK(value)               (PDMC_IER_RXCHUNK_Msk & (_UINT32_(value) << PDMC_IER_RXCHUNK_Pos)) /* Assignment of value for RXCHUNK in the PDMC_IER register */
#define PDMC_IER_RXUDR_Pos                    _UINT32_(4)                                          /* (PDMC_IER) Receive Under Flow Interrupt Enable Position */
#define PDMC_IER_RXUDR_Msk                    (_UINT32_(0x1) << PDMC_IER_RXUDR_Pos)                /* (PDMC_IER) Receive Under Flow Interrupt Enable Mask */
#define PDMC_IER_RXUDR(value)                 (PDMC_IER_RXUDR_Msk & (_UINT32_(value) << PDMC_IER_RXUDR_Pos)) /* Assignment of value for RXUDR in the PDMC_IER register */
#define PDMC_IER_RXOVR_Pos                    _UINT32_(5)                                          /* (PDMC_IER) Receive Over Flow Interrupt Enable Position */
#define PDMC_IER_RXOVR_Msk                    (_UINT32_(0x1) << PDMC_IER_RXOVR_Pos)                /* (PDMC_IER) Receive Over Flow Interrupt Enable Mask */
#define PDMC_IER_RXOVR(value)                 (PDMC_IER_RXOVR_Msk & (_UINT32_(value) << PDMC_IER_RXOVR_Pos)) /* Assignment of value for RXOVR in the PDMC_IER register */
#define PDMC_IER_WPERR_Pos                    _UINT32_(28)                                         /* (PDMC_IER) Write Protect Event Interrupt Enable Position */
#define PDMC_IER_WPERR_Msk                    (_UINT32_(0x1) << PDMC_IER_WPERR_Pos)                /* (PDMC_IER) Write Protect Event Interrupt Enable Mask */
#define PDMC_IER_WPERR(value)                 (PDMC_IER_WPERR_Msk & (_UINT32_(value) << PDMC_IER_WPERR_Pos)) /* Assignment of value for WPERR in the PDMC_IER register */
#define PDMC_IER_Msk                          _UINT32_(0x1000003F)                                 /* (PDMC_IER) Register Mask  */


/* -------- PDMC_IDR : (PDMC Offset: 0x18) ( /W 32) Interrupt Disable Register -------- */
#define PDMC_IDR_RXRDY_Pos                    _UINT32_(0)                                          /* (PDMC_IDR) Receive Ready Interrupt Disable Position */
#define PDMC_IDR_RXRDY_Msk                    (_UINT32_(0x1) << PDMC_IDR_RXRDY_Pos)                /* (PDMC_IDR) Receive Ready Interrupt Disable Mask */
#define PDMC_IDR_RXRDY(value)                 (PDMC_IDR_RXRDY_Msk & (_UINT32_(value) << PDMC_IDR_RXRDY_Pos)) /* Assignment of value for RXRDY in the PDMC_IDR register */
#define PDMC_IDR_RXEMPTY_Pos                  _UINT32_(1)                                          /* (PDMC_IDR) Receive FIFO Empty Interrupt Disable Position */
#define PDMC_IDR_RXEMPTY_Msk                  (_UINT32_(0x1) << PDMC_IDR_RXEMPTY_Pos)              /* (PDMC_IDR) Receive FIFO Empty Interrupt Disable Mask */
#define PDMC_IDR_RXEMPTY(value)               (PDMC_IDR_RXEMPTY_Msk & (_UINT32_(value) << PDMC_IDR_RXEMPTY_Pos)) /* Assignment of value for RXEMPTY in the PDMC_IDR register */
#define PDMC_IDR_RXFULL_Pos                   _UINT32_(2)                                          /* (PDMC_IDR) Receive FIFO Full Interrupt Disable Position */
#define PDMC_IDR_RXFULL_Msk                   (_UINT32_(0x1) << PDMC_IDR_RXFULL_Pos)               /* (PDMC_IDR) Receive FIFO Full Interrupt Disable Mask */
#define PDMC_IDR_RXFULL(value)                (PDMC_IDR_RXFULL_Msk & (_UINT32_(value) << PDMC_IDR_RXFULL_Pos)) /* Assignment of value for RXFULL in the PDMC_IDR register */
#define PDMC_IDR_RXCHUNK_Pos                  _UINT32_(3)                                          /* (PDMC_IDR) Receive FIFO Chunk Interrupt Disable Position */
#define PDMC_IDR_RXCHUNK_Msk                  (_UINT32_(0x1) << PDMC_IDR_RXCHUNK_Pos)              /* (PDMC_IDR) Receive FIFO Chunk Interrupt Disable Mask */
#define PDMC_IDR_RXCHUNK(value)               (PDMC_IDR_RXCHUNK_Msk & (_UINT32_(value) << PDMC_IDR_RXCHUNK_Pos)) /* Assignment of value for RXCHUNK in the PDMC_IDR register */
#define PDMC_IDR_RXUDR_Pos                    _UINT32_(4)                                          /* (PDMC_IDR) Receive Under Flow Interrupt Disable Position */
#define PDMC_IDR_RXUDR_Msk                    (_UINT32_(0x1) << PDMC_IDR_RXUDR_Pos)                /* (PDMC_IDR) Receive Under Flow Interrupt Disable Mask */
#define PDMC_IDR_RXUDR(value)                 (PDMC_IDR_RXUDR_Msk & (_UINT32_(value) << PDMC_IDR_RXUDR_Pos)) /* Assignment of value for RXUDR in the PDMC_IDR register */
#define PDMC_IDR_RXOVR_Pos                    _UINT32_(5)                                          /* (PDMC_IDR) Receive Over Flow Interrupt Disable Position */
#define PDMC_IDR_RXOVR_Msk                    (_UINT32_(0x1) << PDMC_IDR_RXOVR_Pos)                /* (PDMC_IDR) Receive Over Flow Interrupt Disable Mask */
#define PDMC_IDR_RXOVR(value)                 (PDMC_IDR_RXOVR_Msk & (_UINT32_(value) << PDMC_IDR_RXOVR_Pos)) /* Assignment of value for RXOVR in the PDMC_IDR register */
#define PDMC_IDR_WPERR_Pos                    _UINT32_(28)                                         /* (PDMC_IDR) Write Protect Event Interrupt Disable Position */
#define PDMC_IDR_WPERR_Msk                    (_UINT32_(0x1) << PDMC_IDR_WPERR_Pos)                /* (PDMC_IDR) Write Protect Event Interrupt Disable Mask */
#define PDMC_IDR_WPERR(value)                 (PDMC_IDR_WPERR_Msk & (_UINT32_(value) << PDMC_IDR_WPERR_Pos)) /* Assignment of value for WPERR in the PDMC_IDR register */
#define PDMC_IDR_Msk                          _UINT32_(0x1000003F)                                 /* (PDMC_IDR) Register Mask  */


/* -------- PDMC_IMR : (PDMC Offset: 0x1C) ( R/ 32) Interrupt Mask Register -------- */
#define PDMC_IMR_RESETVALUE                   _UINT32_(0x00)                                       /*  (PDMC_IMR) Interrupt Mask Register  Reset Value */

#define PDMC_IMR_RXRDY_Pos                    _UINT32_(0)                                          /* (PDMC_IMR) Receive Ready Interrupt Mask Position */
#define PDMC_IMR_RXRDY_Msk                    (_UINT32_(0x1) << PDMC_IMR_RXRDY_Pos)                /* (PDMC_IMR) Receive Ready Interrupt Mask Mask */
#define PDMC_IMR_RXRDY(value)                 (PDMC_IMR_RXRDY_Msk & (_UINT32_(value) << PDMC_IMR_RXRDY_Pos)) /* Assignment of value for RXRDY in the PDMC_IMR register */
#define PDMC_IMR_RXEMPTY_Pos                  _UINT32_(1)                                          /* (PDMC_IMR) Receive FIFO Empty Interrupt Mask Position */
#define PDMC_IMR_RXEMPTY_Msk                  (_UINT32_(0x1) << PDMC_IMR_RXEMPTY_Pos)              /* (PDMC_IMR) Receive FIFO Empty Interrupt Mask Mask */
#define PDMC_IMR_RXEMPTY(value)               (PDMC_IMR_RXEMPTY_Msk & (_UINT32_(value) << PDMC_IMR_RXEMPTY_Pos)) /* Assignment of value for RXEMPTY in the PDMC_IMR register */
#define PDMC_IMR_RXFULL_Pos                   _UINT32_(2)                                          /* (PDMC_IMR) Receive FIFO Full Interrupt Mask Position */
#define PDMC_IMR_RXFULL_Msk                   (_UINT32_(0x1) << PDMC_IMR_RXFULL_Pos)               /* (PDMC_IMR) Receive FIFO Full Interrupt Mask Mask */
#define PDMC_IMR_RXFULL(value)                (PDMC_IMR_RXFULL_Msk & (_UINT32_(value) << PDMC_IMR_RXFULL_Pos)) /* Assignment of value for RXFULL in the PDMC_IMR register */
#define PDMC_IMR_RXCHUNK_Pos                  _UINT32_(3)                                          /* (PDMC_IMR) Receive FIFO Chunk Interrupt Mask Position */
#define PDMC_IMR_RXCHUNK_Msk                  (_UINT32_(0x1) << PDMC_IMR_RXCHUNK_Pos)              /* (PDMC_IMR) Receive FIFO Chunk Interrupt Mask Mask */
#define PDMC_IMR_RXCHUNK(value)               (PDMC_IMR_RXCHUNK_Msk & (_UINT32_(value) << PDMC_IMR_RXCHUNK_Pos)) /* Assignment of value for RXCHUNK in the PDMC_IMR register */
#define PDMC_IMR_RXUDR_Pos                    _UINT32_(4)                                          /* (PDMC_IMR) Receive Under Flow Interrupt Mask Position */
#define PDMC_IMR_RXUDR_Msk                    (_UINT32_(0x1) << PDMC_IMR_RXUDR_Pos)                /* (PDMC_IMR) Receive Under Flow Interrupt Mask Mask */
#define PDMC_IMR_RXUDR(value)                 (PDMC_IMR_RXUDR_Msk & (_UINT32_(value) << PDMC_IMR_RXUDR_Pos)) /* Assignment of value for RXUDR in the PDMC_IMR register */
#define PDMC_IMR_RXOVR_Pos                    _UINT32_(5)                                          /* (PDMC_IMR) Receive Over Flow Interrupt Mask Position */
#define PDMC_IMR_RXOVR_Msk                    (_UINT32_(0x1) << PDMC_IMR_RXOVR_Pos)                /* (PDMC_IMR) Receive Over Flow Interrupt Mask Mask */
#define PDMC_IMR_RXOVR(value)                 (PDMC_IMR_RXOVR_Msk & (_UINT32_(value) << PDMC_IMR_RXOVR_Pos)) /* Assignment of value for RXOVR in the PDMC_IMR register */
#define PDMC_IMR_WPERR_Pos                    _UINT32_(28)                                         /* (PDMC_IMR) Write Protect Event Interrupt Mask Position */
#define PDMC_IMR_WPERR_Msk                    (_UINT32_(0x1) << PDMC_IMR_WPERR_Pos)                /* (PDMC_IMR) Write Protect Event Interrupt Mask Mask */
#define PDMC_IMR_WPERR(value)                 (PDMC_IMR_WPERR_Msk & (_UINT32_(value) << PDMC_IMR_WPERR_Pos)) /* Assignment of value for WPERR in the PDMC_IMR register */
#define PDMC_IMR_Msk                          _UINT32_(0x1000003F)                                 /* (PDMC_IMR) Register Mask  */


/* -------- PDMC_ISR : (PDMC Offset: 0x20) ( R/ 32) Interrupt Status Register -------- */
#define PDMC_ISR_RESETVALUE                   _UINT32_(0x02)                                       /*  (PDMC_ISR) Interrupt Status Register  Reset Value */

#define PDMC_ISR_RXRDY_Pos                    _UINT32_(0)                                          /* (PDMC_ISR) Receive Ready Interrupt Status (cleared by reading PDMC_RHR) Position */
#define PDMC_ISR_RXRDY_Msk                    (_UINT32_(0x1) << PDMC_ISR_RXRDY_Pos)                /* (PDMC_ISR) Receive Ready Interrupt Status (cleared by reading PDMC_RHR) Mask */
#define PDMC_ISR_RXRDY(value)                 (PDMC_ISR_RXRDY_Msk & (_UINT32_(value) << PDMC_ISR_RXRDY_Pos)) /* Assignment of value for RXRDY in the PDMC_ISR register */
#define   PDMC_ISR_RXRDY_0_Val                _UINT32_(0x0)                                        /* (PDMC_ISR) There is no data in the RX FIFO.  */
#define   PDMC_ISR_RXRDY_1_Val                _UINT32_(0x1)                                        /* (PDMC_ISR) At least one data is in the RX FIFO and can be read through PDMC_RHR.  */
#define PDMC_ISR_RXRDY_0                      (PDMC_ISR_RXRDY_0_Val << PDMC_ISR_RXRDY_Pos)         /* (PDMC_ISR) There is no data in the RX FIFO. Position */
#define PDMC_ISR_RXRDY_1                      (PDMC_ISR_RXRDY_1_Val << PDMC_ISR_RXRDY_Pos)         /* (PDMC_ISR) At least one data is in the RX FIFO and can be read through PDMC_RHR. Position */
#define PDMC_ISR_RXEMPTY_Pos                  _UINT32_(1)                                          /* (PDMC_ISR) Receive FIFO Empty Interrupt Status (automatically cleared when an audio sample is generated) Position */
#define PDMC_ISR_RXEMPTY_Msk                  (_UINT32_(0x1) << PDMC_ISR_RXEMPTY_Pos)              /* (PDMC_ISR) Receive FIFO Empty Interrupt Status (automatically cleared when an audio sample is generated) Mask */
#define PDMC_ISR_RXEMPTY(value)               (PDMC_ISR_RXEMPTY_Msk & (_UINT32_(value) << PDMC_ISR_RXEMPTY_Pos)) /* Assignment of value for RXEMPTY in the PDMC_ISR register */
#define   PDMC_ISR_RXEMPTY_0_Val              _UINT32_(0x0)                                        /* (PDMC_ISR) At least one data is in the RX FIFO.  */
#define   PDMC_ISR_RXEMPTY_1_Val              _UINT32_(0x1)                                        /* (PDMC_ISR) The RX FIFO is empty.  */
#define PDMC_ISR_RXEMPTY_0                    (PDMC_ISR_RXEMPTY_0_Val << PDMC_ISR_RXEMPTY_Pos)     /* (PDMC_ISR) At least one data is in the RX FIFO. Position */
#define PDMC_ISR_RXEMPTY_1                    (PDMC_ISR_RXEMPTY_1_Val << PDMC_ISR_RXEMPTY_Pos)     /* (PDMC_ISR) The RX FIFO is empty. Position */
#define PDMC_ISR_RXFULL_Pos                   _UINT32_(2)                                          /* (PDMC_ISR) Receive FIFO Full Interrupt Status (cleared by reading PDMC_RHR) Position */
#define PDMC_ISR_RXFULL_Msk                   (_UINT32_(0x1) << PDMC_ISR_RXFULL_Pos)               /* (PDMC_ISR) Receive FIFO Full Interrupt Status (cleared by reading PDMC_RHR) Mask */
#define PDMC_ISR_RXFULL(value)                (PDMC_ISR_RXFULL_Msk & (_UINT32_(value) << PDMC_ISR_RXFULL_Pos)) /* Assignment of value for RXFULL in the PDMC_ISR register */
#define   PDMC_ISR_RXFULL_0_Val               _UINT32_(0x0)                                        /* (PDMC_ISR) The RX FIFO is not full and can still receive data.  */
#define   PDMC_ISR_RXFULL_1_Val               _UINT32_(0x1)                                        /* (PDMC_ISR) The RX FIFO is full and cannot receive more data.  */
#define PDMC_ISR_RXFULL_0                     (PDMC_ISR_RXFULL_0_Val << PDMC_ISR_RXFULL_Pos)       /* (PDMC_ISR) The RX FIFO is not full and can still receive data. Position */
#define PDMC_ISR_RXFULL_1                     (PDMC_ISR_RXFULL_1_Val << PDMC_ISR_RXFULL_Pos)       /* (PDMC_ISR) The RX FIFO is full and cannot receive more data. Position */
#define PDMC_ISR_RXCHUNK_Pos                  _UINT32_(3)                                          /* (PDMC_ISR) Receive FIFO Chunk Interrupt Status (cleared by reading PDMC_RHR) Position */
#define PDMC_ISR_RXCHUNK_Msk                  (_UINT32_(0x1) << PDMC_ISR_RXCHUNK_Pos)              /* (PDMC_ISR) Receive FIFO Chunk Interrupt Status (cleared by reading PDMC_RHR) Mask */
#define PDMC_ISR_RXCHUNK(value)               (PDMC_ISR_RXCHUNK_Msk & (_UINT32_(value) << PDMC_ISR_RXCHUNK_Pos)) /* Assignment of value for RXCHUNK in the PDMC_ISR register */
#define   PDMC_ISR_RXCHUNK_0_Val              _UINT32_(0x0)                                        /* (PDMC_ISR) There is less than PDMC_MR.CHUNK data in the RX FIFO.  */
#define   PDMC_ISR_RXCHUNK_1_Val              _UINT32_(0x1)                                        /* (PDMC_ISR) At least PDMC_MR.CHUNK data can be read in the RX FIFO.  */
#define PDMC_ISR_RXCHUNK_0                    (PDMC_ISR_RXCHUNK_0_Val << PDMC_ISR_RXCHUNK_Pos)     /* (PDMC_ISR) There is less than PDMC_MR.CHUNK data in the RX FIFO. Position */
#define PDMC_ISR_RXCHUNK_1                    (PDMC_ISR_RXCHUNK_1_Val << PDMC_ISR_RXCHUNK_Pos)     /* (PDMC_ISR) At least PDMC_MR.CHUNK data can be read in the RX FIFO. Position */
#define PDMC_ISR_RXUDR_Pos                    _UINT32_(4)                                          /* (PDMC_ISR) Receive Under Flow Interrupt Status (cleared on read) Position */
#define PDMC_ISR_RXUDR_Msk                    (_UINT32_(0x1) << PDMC_ISR_RXUDR_Pos)                /* (PDMC_ISR) Receive Under Flow Interrupt Status (cleared on read) Mask */
#define PDMC_ISR_RXUDR(value)                 (PDMC_ISR_RXUDR_Msk & (_UINT32_(value) << PDMC_ISR_RXUDR_Pos)) /* Assignment of value for RXUDR in the PDMC_ISR register */
#define   PDMC_ISR_RXUDR_0_Val                _UINT32_(0x0)                                        /* (PDMC_ISR) No underflow event occurred since the last read of PDMC_ISR.  */
#define   PDMC_ISR_RXUDR_1_Val                _UINT32_(0x1)                                        /* (PDMC_ISR) At least one underflow event occurred since the last read of PDMC_ISR.  */
#define PDMC_ISR_RXUDR_0                      (PDMC_ISR_RXUDR_0_Val << PDMC_ISR_RXUDR_Pos)         /* (PDMC_ISR) No underflow event occurred since the last read of PDMC_ISR. Position */
#define PDMC_ISR_RXUDR_1                      (PDMC_ISR_RXUDR_1_Val << PDMC_ISR_RXUDR_Pos)         /* (PDMC_ISR) At least one underflow event occurred since the last read of PDMC_ISR. Position */
#define PDMC_ISR_RXOVR_Pos                    _UINT32_(5)                                          /* (PDMC_ISR) Receive Over Flow Interrupt Status (cleared on read) Position */
#define PDMC_ISR_RXOVR_Msk                    (_UINT32_(0x1) << PDMC_ISR_RXOVR_Pos)                /* (PDMC_ISR) Receive Over Flow Interrupt Status (cleared on read) Mask */
#define PDMC_ISR_RXOVR(value)                 (PDMC_ISR_RXOVR_Msk & (_UINT32_(value) << PDMC_ISR_RXOVR_Pos)) /* Assignment of value for RXOVR in the PDMC_ISR register */
#define   PDMC_ISR_RXOVR_0_Val                _UINT32_(0x0)                                        /* (PDMC_ISR) No overflow event occurred since the last read of PDMC_ISR.  */
#define   PDMC_ISR_RXOVR_1_Val                _UINT32_(0x1)                                        /* (PDMC_ISR) At least one overflow event occurred since the last read of PDMC_ISR.  */
#define PDMC_ISR_RXOVR_0                      (PDMC_ISR_RXOVR_0_Val << PDMC_ISR_RXOVR_Pos)         /* (PDMC_ISR) No overflow event occurred since the last read of PDMC_ISR. Position */
#define PDMC_ISR_RXOVR_1                      (PDMC_ISR_RXOVR_1_Val << PDMC_ISR_RXOVR_Pos)         /* (PDMC_ISR) At least one overflow event occurred since the last read of PDMC_ISR. Position */
#define PDMC_ISR_WPERR_Pos                    _UINT32_(28)                                         /* (PDMC_ISR) Write Protect Event Interrupt Status (cleared on read) Position */
#define PDMC_ISR_WPERR_Msk                    (_UINT32_(0x1) << PDMC_ISR_WPERR_Pos)                /* (PDMC_ISR) Write Protect Event Interrupt Status (cleared on read) Mask */
#define PDMC_ISR_WPERR(value)                 (PDMC_ISR_WPERR_Msk & (_UINT32_(value) << PDMC_ISR_WPERR_Pos)) /* Assignment of value for WPERR in the PDMC_ISR register */
#define   PDMC_ISR_WPERR_0_Val                _UINT32_(0x0)                                        /* (PDMC_ISR) No security event has occurred since the last read of PDMC_ISR.  */
#define   PDMC_ISR_WPERR_1_Val                _UINT32_(0x1)                                        /* (PDMC_ISR) One or more security events occurred since the last read of PDMC_ISR. For details on the event(s), see PDMC Write Protection Status Register.  */
#define PDMC_ISR_WPERR_0                      (PDMC_ISR_WPERR_0_Val << PDMC_ISR_WPERR_Pos)         /* (PDMC_ISR) No security event has occurred since the last read of PDMC_ISR. Position */
#define PDMC_ISR_WPERR_1                      (PDMC_ISR_WPERR_1_Val << PDMC_ISR_WPERR_Pos)         /* (PDMC_ISR) One or more security events occurred since the last read of PDMC_ISR. For details on the event(s), see PDMC Write Protection Status Register. Position */
#define PDMC_ISR_Msk                          _UINT32_(0x1000003F)                                 /* (PDMC_ISR) Register Mask  */


/* -------- PDMC_WPMR : (PDMC Offset: 0x2C) (R/W 32) Write Protection Mode Register -------- */
#define PDMC_WPMR_RESETVALUE                  _UINT32_(0x00)                                       /*  (PDMC_WPMR) Write Protection Mode Register  Reset Value */

#define PDMC_WPMR_WPEN_Pos                    _UINT32_(0)                                          /* (PDMC_WPMR) Write Protection Enable for Configuration Registers Position */
#define PDMC_WPMR_WPEN_Msk                    (_UINT32_(0x1) << PDMC_WPMR_WPEN_Pos)                /* (PDMC_WPMR) Write Protection Enable for Configuration Registers Mask */
#define PDMC_WPMR_WPEN(value)                 (PDMC_WPMR_WPEN_Msk & (_UINT32_(value) << PDMC_WPMR_WPEN_Pos)) /* Assignment of value for WPEN in the PDMC_WPMR register */
#define   PDMC_WPMR_WPEN_0_Val                _UINT32_(0x0)                                        /* (PDMC_WPMR) Disables write protection if WPKEY corresponds to 0x50444D ("PDM" in ASCII).  */
#define   PDMC_WPMR_WPEN_1_Val                _UINT32_(0x1)                                        /* (PDMC_WPMR) Enables write protection if WPKEY corresponds to 0x50444D ("PDM" in ASCII).  */
#define PDMC_WPMR_WPEN_0                      (PDMC_WPMR_WPEN_0_Val << PDMC_WPMR_WPEN_Pos)         /* (PDMC_WPMR) Disables write protection if WPKEY corresponds to 0x50444D ("PDM" in ASCII). Position */
#define PDMC_WPMR_WPEN_1                      (PDMC_WPMR_WPEN_1_Val << PDMC_WPMR_WPEN_Pos)         /* (PDMC_WPMR) Enables write protection if WPKEY corresponds to 0x50444D ("PDM" in ASCII). Position */
#define PDMC_WPMR_WPITEN_Pos                  _UINT32_(1)                                          /* (PDMC_WPMR) Write Protection Enable for Interrupt Position */
#define PDMC_WPMR_WPITEN_Msk                  (_UINT32_(0x1) << PDMC_WPMR_WPITEN_Pos)              /* (PDMC_WPMR) Write Protection Enable for Interrupt Mask */
#define PDMC_WPMR_WPITEN(value)               (PDMC_WPMR_WPITEN_Msk & (_UINT32_(value) << PDMC_WPMR_WPITEN_Pos)) /* Assignment of value for WPITEN in the PDMC_WPMR register */
#define   PDMC_WPMR_WPITEN_0_Val              _UINT32_(0x0)                                        /* (PDMC_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x50444D ("PDM" in ASCII).  */
#define   PDMC_WPMR_WPITEN_1_Val              _UINT32_(0x1)                                        /* (PDMC_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x50444D ("PDM" in ASCII).  */
#define PDMC_WPMR_WPITEN_0                    (PDMC_WPMR_WPITEN_0_Val << PDMC_WPMR_WPITEN_Pos)     /* (PDMC_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x50444D ("PDM" in ASCII). Position */
#define PDMC_WPMR_WPITEN_1                    (PDMC_WPMR_WPITEN_1_Val << PDMC_WPMR_WPITEN_Pos)     /* (PDMC_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x50444D ("PDM" in ASCII). Position */
#define PDMC_WPMR_WPKEY_Pos                   _UINT32_(8)                                          /* (PDMC_WPMR) Write Protection Key Position */
#define PDMC_WPMR_WPKEY_Msk                   (_UINT32_(0xFFFFFF) << PDMC_WPMR_WPKEY_Pos)          /* (PDMC_WPMR) Write Protection Key Mask */
#define PDMC_WPMR_WPKEY(value)                (PDMC_WPMR_WPKEY_Msk & (_UINT32_(value) << PDMC_WPMR_WPKEY_Pos)) /* Assignment of value for WPKEY in the PDMC_WPMR register */
#define   PDMC_WPMR_WPKEY_PASSWD_Val          _UINT32_(0x50444D)                                   /* (PDMC_WPMR) Writing any other value in this field aborts the write operation of the WPEN and WPITEN bits. Always read at 0.  */
#define PDMC_WPMR_WPKEY_PASSWD                (PDMC_WPMR_WPKEY_PASSWD_Val << PDMC_WPMR_WPKEY_Pos)  /* (PDMC_WPMR) Writing any other value in this field aborts the write operation of the WPEN and WPITEN bits. Always read at 0. Position */
#define PDMC_WPMR_Msk                         _UINT32_(0xFFFFFF03)                                 /* (PDMC_WPMR) Register Mask  */


/* -------- PDMC_WPSR : (PDMC Offset: 0x30) ( R/ 32) Write Protection Status Register -------- */
#define PDMC_WPSR_RESETVALUE                  _UINT32_(0x00)                                       /*  (PDMC_WPSR) Write Protection Status Register  Reset Value */

#define PDMC_WPSR_WPVS_Pos                    _UINT32_(0)                                          /* (PDMC_WPSR) Write Protection Violation Status (cleared on read) Position */
#define PDMC_WPSR_WPVS_Msk                    (_UINT32_(0x1) << PDMC_WPSR_WPVS_Pos)                /* (PDMC_WPSR) Write Protection Violation Status (cleared on read) Mask */
#define PDMC_WPSR_WPVS(value)                 (PDMC_WPSR_WPVS_Msk & (_UINT32_(value) << PDMC_WPSR_WPVS_Pos)) /* Assignment of value for WPVS in the PDMC_WPSR register */
#define   PDMC_WPSR_WPVS_0_Val                _UINT32_(0x0)                                        /* (PDMC_WPSR) No write protection violation has occurred since the last read of PDMC_WPSR.  */
#define   PDMC_WPSR_WPVS_1_Val                _UINT32_(0x1)                                        /* (PDMC_WPSR) A write protection violation has occurred since the last read of PDMC_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into the field WPSRC.  */
#define PDMC_WPSR_WPVS_0                      (PDMC_WPSR_WPVS_0_Val << PDMC_WPSR_WPVS_Pos)         /* (PDMC_WPSR) No write protection violation has occurred since the last read of PDMC_WPSR. Position */
#define PDMC_WPSR_WPVS_1                      (PDMC_WPSR_WPVS_1_Val << PDMC_WPSR_WPVS_Pos)         /* (PDMC_WPSR) A write protection violation has occurred since the last read of PDMC_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into the field WPSRC. Position */
#define PDMC_WPSR_SEQE_Pos                    _UINT32_(2)                                          /* (PDMC_WPSR) Internal Sequencer Error (cleared on read) Position */
#define PDMC_WPSR_SEQE_Msk                    (_UINT32_(0x1) << PDMC_WPSR_SEQE_Pos)                /* (PDMC_WPSR) Internal Sequencer Error (cleared on read) Mask */
#define PDMC_WPSR_SEQE(value)                 (PDMC_WPSR_SEQE_Msk & (_UINT32_(value) << PDMC_WPSR_SEQE_Pos)) /* Assignment of value for SEQE in the PDMC_WPSR register */
#define   PDMC_WPSR_SEQE_0_Val                _UINT32_(0x0)                                        /* (PDMC_WPSR) No peripheral internal sequencer error has occurred since the last read of PDMC_WPSR.  */
#define   PDMC_WPSR_SEQE_1_Val                _UINT32_(0x1)                                        /* (PDMC_WPSR) A peripheral internal sequencer error has occurred since the last read of PDMC_WPSR.  */
#define PDMC_WPSR_SEQE_0                      (PDMC_WPSR_SEQE_0_Val << PDMC_WPSR_SEQE_Pos)         /* (PDMC_WPSR) No peripheral internal sequencer error has occurred since the last read of PDMC_WPSR. Position */
#define PDMC_WPSR_SEQE_1                      (PDMC_WPSR_SEQE_1_Val << PDMC_WPSR_SEQE_Pos)         /* (PDMC_WPSR) A peripheral internal sequencer error has occurred since the last read of PDMC_WPSR. Position */
#define PDMC_WPSR_WPSRC_Pos                   _UINT32_(8)                                          /* (PDMC_WPSR) Write Protection Source Position */
#define PDMC_WPSR_WPSRC_Msk                   (_UINT32_(0xFFFF) << PDMC_WPSR_WPSRC_Pos)            /* (PDMC_WPSR) Write Protection Source Mask */
#define PDMC_WPSR_WPSRC(value)                (PDMC_WPSR_WPSRC_Msk & (_UINT32_(value) << PDMC_WPSR_WPSRC_Pos)) /* Assignment of value for WPSRC in the PDMC_WPSR register */
#define PDMC_WPSR_Msk                         _UINT32_(0x00FFFF05)                                 /* (PDMC_WPSR) Register Mask  */


/* PDMC register offsets definitions */
#define PDMC_CR_REG_OFST               _UINT32_(0x00)      /* (PDMC_CR) Control Register Offset */
#define PDMC_MR_REG_OFST               _UINT32_(0x04)      /* (PDMC_MR) Mode Register Offset */
#define PDMC_CFGR_REG_OFST             _UINT32_(0x08)      /* (PDMC_CFGR) Configuration Register Offset */
#define PDMC_RHR_REG_OFST              _UINT32_(0x0C)      /* (PDMC_RHR) Receive Holding Register Offset */
#define PDMC_IER_REG_OFST              _UINT32_(0x14)      /* (PDMC_IER) Interrupt Enable Register Offset */
#define PDMC_IDR_REG_OFST              _UINT32_(0x18)      /* (PDMC_IDR) Interrupt Disable Register Offset */
#define PDMC_IMR_REG_OFST              _UINT32_(0x1C)      /* (PDMC_IMR) Interrupt Mask Register Offset */
#define PDMC_ISR_REG_OFST              _UINT32_(0x20)      /* (PDMC_ISR) Interrupt Status Register Offset */
#define PDMC_WPMR_REG_OFST             _UINT32_(0x2C)      /* (PDMC_WPMR) Write Protection Mode Register Offset */
#define PDMC_WPSR_REG_OFST             _UINT32_(0x30)      /* (PDMC_WPSR) Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* PDMC register API structure */
typedef struct
{  /* Pulse Density Microphone Controller */
  __O   uint32_t                       PDMC_CR;            /* Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       PDMC_MR;            /* Offset: 0x04 (R/W  32) Mode Register */
  __IO  uint32_t                       PDMC_CFGR;          /* Offset: 0x08 (R/W  32) Configuration Register */
  __I   uint32_t                       PDMC_RHR;           /* Offset: 0x0C (R/   32) Receive Holding Register */
  __I   uint8_t                        Reserved1[0x04];
  __O   uint32_t                       PDMC_IER;           /* Offset: 0x14 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       PDMC_IDR;           /* Offset: 0x18 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       PDMC_IMR;           /* Offset: 0x1C (R/   32) Interrupt Mask Register */
  __I   uint32_t                       PDMC_ISR;           /* Offset: 0x20 (R/   32) Interrupt Status Register */
  __I   uint8_t                        Reserved2[0x08];
  __IO  uint32_t                       PDMC_WPMR;          /* Offset: 0x2C (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       PDMC_WPSR;          /* Offset: 0x30 (R/   32) Write Protection Status Register */
} pdmc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G5_PDMC_COMPONENT_H_ */
