/*
 * Component description for PMC
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
#ifndef _PIC32CXMTSH_PMC_COMPONENT_H_
#define _PIC32CXMTSH_PMC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PMC                                          */
/* ************************************************************************** */

/* -------- PMC_SCER : (PMC Offset: 0x00) ( /W 32) System Clock Enable Register -------- */
#define PMC_SCER_PCK0_Pos                     _UINT32_(8)                                          /* (PMC_SCER) Programmable Clock 0 Output Enable Position */
#define PMC_SCER_PCK0_Msk                     (_UINT32_(0x1) << PMC_SCER_PCK0_Pos)                 /* (PMC_SCER) Programmable Clock 0 Output Enable Mask */
#define PMC_SCER_PCK0(value)                  (PMC_SCER_PCK0_Msk & (_UINT32_(value) << PMC_SCER_PCK0_Pos)) /* Assigment of value for PCK0 in the PMC_SCER register */
#define PMC_SCER_PCK1_Pos                     _UINT32_(9)                                          /* (PMC_SCER) Programmable Clock 1 Output Enable Position */
#define PMC_SCER_PCK1_Msk                     (_UINT32_(0x1) << PMC_SCER_PCK1_Pos)                 /* (PMC_SCER) Programmable Clock 1 Output Enable Mask */
#define PMC_SCER_PCK1(value)                  (PMC_SCER_PCK1_Msk & (_UINT32_(value) << PMC_SCER_PCK1_Pos)) /* Assigment of value for PCK1 in the PMC_SCER register */
#define PMC_SCER_PCK2_Pos                     _UINT32_(10)                                         /* (PMC_SCER) Programmable Clock 2 Output Enable Position */
#define PMC_SCER_PCK2_Msk                     (_UINT32_(0x1) << PMC_SCER_PCK2_Pos)                 /* (PMC_SCER) Programmable Clock 2 Output Enable Mask */
#define PMC_SCER_PCK2(value)                  (PMC_SCER_PCK2_Msk & (_UINT32_(value) << PMC_SCER_PCK2_Pos)) /* Assigment of value for PCK2 in the PMC_SCER register */
#define PMC_SCER_PCK3_Pos                     _UINT32_(11)                                         /* (PMC_SCER) Programmable Clock 3 Output Enable Position */
#define PMC_SCER_PCK3_Msk                     (_UINT32_(0x1) << PMC_SCER_PCK3_Pos)                 /* (PMC_SCER) Programmable Clock 3 Output Enable Mask */
#define PMC_SCER_PCK3(value)                  (PMC_SCER_PCK3_Msk & (_UINT32_(value) << PMC_SCER_PCK3_Pos)) /* Assigment of value for PCK3 in the PMC_SCER register */
#define PMC_SCER_CPCK_Pos                     _UINT32_(16)                                         /* (PMC_SCER) Coprocessor (Second Processor) Clocks Enable Position */
#define PMC_SCER_CPCK_Msk                     (_UINT32_(0x1) << PMC_SCER_CPCK_Pos)                 /* (PMC_SCER) Coprocessor (Second Processor) Clocks Enable Mask */
#define PMC_SCER_CPCK(value)                  (PMC_SCER_CPCK_Msk & (_UINT32_(value) << PMC_SCER_CPCK_Pos)) /* Assigment of value for CPCK in the PMC_SCER register */
#define PMC_SCER_CPBMCK_Pos                   _UINT32_(17)                                         /* (PMC_SCER) Coprocessor Bus Master Clocks Enable Position */
#define PMC_SCER_CPBMCK_Msk                   (_UINT32_(0x1) << PMC_SCER_CPBMCK_Pos)               /* (PMC_SCER) Coprocessor Bus Master Clocks Enable Mask */
#define PMC_SCER_CPBMCK(value)                (PMC_SCER_CPBMCK_Msk & (_UINT32_(value) << PMC_SCER_CPBMCK_Pos)) /* Assigment of value for CPBMCK in the PMC_SCER register */
#define PMC_SCER_CPKEY_Pos                    _UINT32_(20)                                         /* (PMC_SCER) Coprocessor Clocks Enable Key Position */
#define PMC_SCER_CPKEY_Msk                    (_UINT32_(0xF) << PMC_SCER_CPKEY_Pos)                /* (PMC_SCER) Coprocessor Clocks Enable Key Mask */
#define PMC_SCER_CPKEY(value)                 (PMC_SCER_CPKEY_Msk & (_UINT32_(value) << PMC_SCER_CPKEY_Pos)) /* Assigment of value for CPKEY in the PMC_SCER register */
#define   PMC_SCER_CPKEY_PASSWD_Val           _UINT32_(0xA)                                        /* (PMC_SCER) This field must be written to 0xA to validate CPBMCK and CPCK.  */
#define PMC_SCER_CPKEY_PASSWD                 (PMC_SCER_CPKEY_PASSWD_Val << PMC_SCER_CPKEY_Pos)    /* (PMC_SCER) This field must be written to 0xA to validate CPBMCK and CPCK. Position  */
#define PMC_SCER_Msk                          _UINT32_(0x00F30F00)                                 /* (PMC_SCER) Register Mask  */

#define PMC_SCER_PCK_Pos                      _UINT32_(8)                                          /* (PMC_SCER Position) Programmable Clock x Output Enable */
#define PMC_SCER_PCK_Msk                      (_UINT32_(0xF) << PMC_SCER_PCK_Pos)                  /* (PMC_SCER Mask) PCK */
#define PMC_SCER_PCK(value)                   (PMC_SCER_PCK_Msk & (_UINT32_(value) << PMC_SCER_PCK_Pos)) 

/* -------- PMC_SCDR : (PMC Offset: 0x04) ( /W 32) System Clock Disable Register -------- */
#define PMC_SCDR_PCK0_Pos                     _UINT32_(8)                                          /* (PMC_SCDR) Programmable Clock 0 Output Disable Position */
#define PMC_SCDR_PCK0_Msk                     (_UINT32_(0x1) << PMC_SCDR_PCK0_Pos)                 /* (PMC_SCDR) Programmable Clock 0 Output Disable Mask */
#define PMC_SCDR_PCK0(value)                  (PMC_SCDR_PCK0_Msk & (_UINT32_(value) << PMC_SCDR_PCK0_Pos)) /* Assigment of value for PCK0 in the PMC_SCDR register */
#define PMC_SCDR_PCK1_Pos                     _UINT32_(9)                                          /* (PMC_SCDR) Programmable Clock 1 Output Disable Position */
#define PMC_SCDR_PCK1_Msk                     (_UINT32_(0x1) << PMC_SCDR_PCK1_Pos)                 /* (PMC_SCDR) Programmable Clock 1 Output Disable Mask */
#define PMC_SCDR_PCK1(value)                  (PMC_SCDR_PCK1_Msk & (_UINT32_(value) << PMC_SCDR_PCK1_Pos)) /* Assigment of value for PCK1 in the PMC_SCDR register */
#define PMC_SCDR_PCK2_Pos                     _UINT32_(10)                                         /* (PMC_SCDR) Programmable Clock 2 Output Disable Position */
#define PMC_SCDR_PCK2_Msk                     (_UINT32_(0x1) << PMC_SCDR_PCK2_Pos)                 /* (PMC_SCDR) Programmable Clock 2 Output Disable Mask */
#define PMC_SCDR_PCK2(value)                  (PMC_SCDR_PCK2_Msk & (_UINT32_(value) << PMC_SCDR_PCK2_Pos)) /* Assigment of value for PCK2 in the PMC_SCDR register */
#define PMC_SCDR_PCK3_Pos                     _UINT32_(11)                                         /* (PMC_SCDR) Programmable Clock 3 Output Disable Position */
#define PMC_SCDR_PCK3_Msk                     (_UINT32_(0x1) << PMC_SCDR_PCK3_Pos)                 /* (PMC_SCDR) Programmable Clock 3 Output Disable Mask */
#define PMC_SCDR_PCK3(value)                  (PMC_SCDR_PCK3_Msk & (_UINT32_(value) << PMC_SCDR_PCK3_Pos)) /* Assigment of value for PCK3 in the PMC_SCDR register */
#define PMC_SCDR_CPCK_Pos                     _UINT32_(16)                                         /* (PMC_SCDR) Coprocessor (Second Processor) Clocks Disable Position */
#define PMC_SCDR_CPCK_Msk                     (_UINT32_(0x1) << PMC_SCDR_CPCK_Pos)                 /* (PMC_SCDR) Coprocessor (Second Processor) Clocks Disable Mask */
#define PMC_SCDR_CPCK(value)                  (PMC_SCDR_CPCK_Msk & (_UINT32_(value) << PMC_SCDR_CPCK_Pos)) /* Assigment of value for CPCK in the PMC_SCDR register */
#define PMC_SCDR_CPBMCK_Pos                   _UINT32_(17)                                         /* (PMC_SCDR) Coprocessor Bus Master Clocks Disable Position */
#define PMC_SCDR_CPBMCK_Msk                   (_UINT32_(0x1) << PMC_SCDR_CPBMCK_Pos)               /* (PMC_SCDR) Coprocessor Bus Master Clocks Disable Mask */
#define PMC_SCDR_CPBMCK(value)                (PMC_SCDR_CPBMCK_Msk & (_UINT32_(value) << PMC_SCDR_CPBMCK_Pos)) /* Assigment of value for CPBMCK in the PMC_SCDR register */
#define PMC_SCDR_CPKEY_Pos                    _UINT32_(20)                                         /* (PMC_SCDR) Coprocessor Clocks Enable Key Position */
#define PMC_SCDR_CPKEY_Msk                    (_UINT32_(0xF) << PMC_SCDR_CPKEY_Pos)                /* (PMC_SCDR) Coprocessor Clocks Enable Key Mask */
#define PMC_SCDR_CPKEY(value)                 (PMC_SCDR_CPKEY_Msk & (_UINT32_(value) << PMC_SCDR_CPKEY_Pos)) /* Assigment of value for CPKEY in the PMC_SCDR register */
#define   PMC_SCDR_CPKEY_PASSWD_Val           _UINT32_(0xA)                                        /* (PMC_SCDR) This field must be written to 0xA to validate CPBMCK and CPCK.  */
#define PMC_SCDR_CPKEY_PASSWD                 (PMC_SCDR_CPKEY_PASSWD_Val << PMC_SCDR_CPKEY_Pos)    /* (PMC_SCDR) This field must be written to 0xA to validate CPBMCK and CPCK. Position  */
#define PMC_SCDR_Msk                          _UINT32_(0x00F30F00)                                 /* (PMC_SCDR) Register Mask  */

#define PMC_SCDR_PCK_Pos                      _UINT32_(8)                                          /* (PMC_SCDR Position) Programmable Clock x Output Disable */
#define PMC_SCDR_PCK_Msk                      (_UINT32_(0xF) << PMC_SCDR_PCK_Pos)                  /* (PMC_SCDR Mask) PCK */
#define PMC_SCDR_PCK(value)                   (PMC_SCDR_PCK_Msk & (_UINT32_(value) << PMC_SCDR_PCK_Pos)) 

/* -------- PMC_SCSR : (PMC Offset: 0x08) ( R/ 32) System Clock Status Register -------- */
#define PMC_SCSR_CPU_CLK0S_Pos                _UINT32_(0)                                          /* (PMC_SCSR) CPU_CLK Status for Core 0 Position */
#define PMC_SCSR_CPU_CLK0S_Msk                (_UINT32_(0x1) << PMC_SCSR_CPU_CLK0S_Pos)            /* (PMC_SCSR) CPU_CLK Status for Core 0 Mask */
#define PMC_SCSR_CPU_CLK0S(value)             (PMC_SCSR_CPU_CLK0S_Msk & (_UINT32_(value) << PMC_SCSR_CPU_CLK0S_Pos)) /* Assigment of value for CPU_CLK0S in the PMC_SCSR register */
#define PMC_SCSR_CPU_CLK1S_Pos                _UINT32_(1)                                          /* (PMC_SCSR) CPU_CLK Status for Core 1 Position */
#define PMC_SCSR_CPU_CLK1S_Msk                (_UINT32_(0x1) << PMC_SCSR_CPU_CLK1S_Pos)            /* (PMC_SCSR) CPU_CLK Status for Core 1 Mask */
#define PMC_SCSR_CPU_CLK1S(value)             (PMC_SCSR_CPU_CLK1S_Msk & (_UINT32_(value) << PMC_SCSR_CPU_CLK1S_Pos)) /* Assigment of value for CPU_CLK1S in the PMC_SCSR register */
#define PMC_SCSR_PCK0_Pos                     _UINT32_(8)                                          /* (PMC_SCSR) Programmable Clock 0 Output Status Position */
#define PMC_SCSR_PCK0_Msk                     (_UINT32_(0x1) << PMC_SCSR_PCK0_Pos)                 /* (PMC_SCSR) Programmable Clock 0 Output Status Mask */
#define PMC_SCSR_PCK0(value)                  (PMC_SCSR_PCK0_Msk & (_UINT32_(value) << PMC_SCSR_PCK0_Pos)) /* Assigment of value for PCK0 in the PMC_SCSR register */
#define PMC_SCSR_PCK1_Pos                     _UINT32_(9)                                          /* (PMC_SCSR) Programmable Clock 1 Output Status Position */
#define PMC_SCSR_PCK1_Msk                     (_UINT32_(0x1) << PMC_SCSR_PCK1_Pos)                 /* (PMC_SCSR) Programmable Clock 1 Output Status Mask */
#define PMC_SCSR_PCK1(value)                  (PMC_SCSR_PCK1_Msk & (_UINT32_(value) << PMC_SCSR_PCK1_Pos)) /* Assigment of value for PCK1 in the PMC_SCSR register */
#define PMC_SCSR_PCK2_Pos                     _UINT32_(10)                                         /* (PMC_SCSR) Programmable Clock 2 Output Status Position */
#define PMC_SCSR_PCK2_Msk                     (_UINT32_(0x1) << PMC_SCSR_PCK2_Pos)                 /* (PMC_SCSR) Programmable Clock 2 Output Status Mask */
#define PMC_SCSR_PCK2(value)                  (PMC_SCSR_PCK2_Msk & (_UINT32_(value) << PMC_SCSR_PCK2_Pos)) /* Assigment of value for PCK2 in the PMC_SCSR register */
#define PMC_SCSR_PCK3_Pos                     _UINT32_(11)                                         /* (PMC_SCSR) Programmable Clock 3 Output Status Position */
#define PMC_SCSR_PCK3_Msk                     (_UINT32_(0x1) << PMC_SCSR_PCK3_Pos)                 /* (PMC_SCSR) Programmable Clock 3 Output Status Mask */
#define PMC_SCSR_PCK3(value)                  (PMC_SCSR_PCK3_Msk & (_UINT32_(value) << PMC_SCSR_PCK3_Pos)) /* Assigment of value for PCK3 in the PMC_SCSR register */
#define PMC_SCSR_CPCK_Pos                     _UINT32_(16)                                         /* (PMC_SCSR) Coprocessor (Second Processor) Clocks Status Position */
#define PMC_SCSR_CPCK_Msk                     (_UINT32_(0x1) << PMC_SCSR_CPCK_Pos)                 /* (PMC_SCSR) Coprocessor (Second Processor) Clocks Status Mask */
#define PMC_SCSR_CPCK(value)                  (PMC_SCSR_CPCK_Msk & (_UINT32_(value) << PMC_SCSR_CPCK_Pos)) /* Assigment of value for CPCK in the PMC_SCSR register */
#define PMC_SCSR_CPBMCK_Pos                   _UINT32_(17)                                         /* (PMC_SCSR) Coprocessor Bus Master Clocks Status Position */
#define PMC_SCSR_CPBMCK_Msk                   (_UINT32_(0x1) << PMC_SCSR_CPBMCK_Pos)               /* (PMC_SCSR) Coprocessor Bus Master Clocks Status Mask */
#define PMC_SCSR_CPBMCK(value)                (PMC_SCSR_CPBMCK_Msk & (_UINT32_(value) << PMC_SCSR_CPBMCK_Pos)) /* Assigment of value for CPBMCK in the PMC_SCSR register */
#define PMC_SCSR_Msk                          _UINT32_(0x00030F03)                                 /* (PMC_SCSR) Register Mask  */

#define PMC_SCSR_PCK_Pos                      _UINT32_(8)                                          /* (PMC_SCSR Position) Programmable Clock x Output Status */
#define PMC_SCSR_PCK_Msk                      (_UINT32_(0xF) << PMC_SCSR_PCK_Pos)                  /* (PMC_SCSR Mask) PCK */
#define PMC_SCSR_PCK(value)                   (PMC_SCSR_PCK_Msk & (_UINT32_(value) << PMC_SCSR_PCK_Pos)) 

/* -------- PMC_PLL_CTRL0 : (PMC Offset: 0x0C) (R/W 32) PLL Control Register 0 -------- */
#define PMC_PLL_CTRL0_DIVPMC0_Pos             _UINT32_(0)                                          /* (PMC_PLL_CTRL0) Divider for PMC output 0 Position */
#define PMC_PLL_CTRL0_DIVPMC0_Msk             (_UINT32_(0xFF) << PMC_PLL_CTRL0_DIVPMC0_Pos)        /* (PMC_PLL_CTRL0) Divider for PMC output 0 Mask */
#define PMC_PLL_CTRL0_DIVPMC0(value)          (PMC_PLL_CTRL0_DIVPMC0_Msk & (_UINT32_(value) << PMC_PLL_CTRL0_DIVPMC0_Pos)) /* Assigment of value for DIVPMC0 in the PMC_PLL_CTRL0 register */
#define PMC_PLL_CTRL0_DIVPMC1_Pos             _UINT32_(12)                                         /* (PMC_PLL_CTRL0) Divider for PMC output 1 (PLLA only) Position */
#define PMC_PLL_CTRL0_DIVPMC1_Msk             (_UINT32_(0xFF) << PMC_PLL_CTRL0_DIVPMC1_Pos)        /* (PMC_PLL_CTRL0) Divider for PMC output 1 (PLLA only) Mask */
#define PMC_PLL_CTRL0_DIVPMC1(value)          (PMC_PLL_CTRL0_DIVPMC1_Msk & (_UINT32_(value) << PMC_PLL_CTRL0_DIVPMC1_Pos)) /* Assigment of value for DIVPMC1 in the PMC_PLL_CTRL0 register */
#define PMC_PLL_CTRL0_PLLMS_Pos               _UINT32_(27)                                         /* (PMC_PLL_CTRL0) PLL Multiplexer Select Position */
#define PMC_PLL_CTRL0_PLLMS_Msk               (_UINT32_(0x1) << PMC_PLL_CTRL0_PLLMS_Pos)           /* (PMC_PLL_CTRL0) PLL Multiplexer Select Mask */
#define PMC_PLL_CTRL0_PLLMS(value)            (PMC_PLL_CTRL0_PLLMS_Msk & (_UINT32_(value) << PMC_PLL_CTRL0_PLLMS_Pos)) /* Assigment of value for PLLMS in the PMC_PLL_CTRL0 register */
#define PMC_PLL_CTRL0_ENPLL_Pos               _UINT32_(28)                                         /* (PMC_PLL_CTRL0) Enable PLL Position */
#define PMC_PLL_CTRL0_ENPLL_Msk               (_UINT32_(0x1) << PMC_PLL_CTRL0_ENPLL_Pos)           /* (PMC_PLL_CTRL0) Enable PLL Mask */
#define PMC_PLL_CTRL0_ENPLL(value)            (PMC_PLL_CTRL0_ENPLL_Msk & (_UINT32_(value) << PMC_PLL_CTRL0_ENPLL_Pos)) /* Assigment of value for ENPLL in the PMC_PLL_CTRL0 register */
#define PMC_PLL_CTRL0_ENPLLO0_Pos             _UINT32_(29)                                         /* (PMC_PLL_CTRL0) Enable PLL Clock Output 0 Position */
#define PMC_PLL_CTRL0_ENPLLO0_Msk             (_UINT32_(0x1) << PMC_PLL_CTRL0_ENPLLO0_Pos)         /* (PMC_PLL_CTRL0) Enable PLL Clock Output 0 Mask */
#define PMC_PLL_CTRL0_ENPLLO0(value)          (PMC_PLL_CTRL0_ENPLLO0_Msk & (_UINT32_(value) << PMC_PLL_CTRL0_ENPLLO0_Pos)) /* Assigment of value for ENPLLO0 in the PMC_PLL_CTRL0 register */
#define PMC_PLL_CTRL0_ENPLLO1_Pos             _UINT32_(30)                                         /* (PMC_PLL_CTRL0) Enable PLL Clock Output 1 (PLLA only) Position */
#define PMC_PLL_CTRL0_ENPLLO1_Msk             (_UINT32_(0x1) << PMC_PLL_CTRL0_ENPLLO1_Pos)         /* (PMC_PLL_CTRL0) Enable PLL Clock Output 1 (PLLA only) Mask */
#define PMC_PLL_CTRL0_ENPLLO1(value)          (PMC_PLL_CTRL0_ENPLLO1_Msk & (_UINT32_(value) << PMC_PLL_CTRL0_ENPLLO1_Pos)) /* Assigment of value for ENPLLO1 in the PMC_PLL_CTRL0 register */
#define PMC_PLL_CTRL0_ENLOCK_Pos              _UINT32_(31)                                         /* (PMC_PLL_CTRL0) Enable PLL Lock Position */
#define PMC_PLL_CTRL0_ENLOCK_Msk              (_UINT32_(0x1) << PMC_PLL_CTRL0_ENLOCK_Pos)          /* (PMC_PLL_CTRL0) Enable PLL Lock Mask */
#define PMC_PLL_CTRL0_ENLOCK(value)           (PMC_PLL_CTRL0_ENLOCK_Msk & (_UINT32_(value) << PMC_PLL_CTRL0_ENLOCK_Pos)) /* Assigment of value for ENLOCK in the PMC_PLL_CTRL0 register */
#define PMC_PLL_CTRL0_Msk                     _UINT32_(0xF80FF0FF)                                 /* (PMC_PLL_CTRL0) Register Mask  */

#define PMC_PLL_CTRL0_ENPLLO_Pos              _UINT32_(29)                                         /* (PMC_PLL_CTRL0 Position) Enable PLL Clock Output x */
#define PMC_PLL_CTRL0_ENPLLO_Msk              (_UINT32_(0x3) << PMC_PLL_CTRL0_ENPLLO_Pos)          /* (PMC_PLL_CTRL0 Mask) ENPLLO */
#define PMC_PLL_CTRL0_ENPLLO(value)           (PMC_PLL_CTRL0_ENPLLO_Msk & (_UINT32_(value) << PMC_PLL_CTRL0_ENPLLO_Pos)) 

/* -------- PMC_PLL_CTRL1 : (PMC Offset: 0x10) (R/W 32) PLL Control Register 1 -------- */
#define PMC_PLL_CTRL1_MUL_Pos                 _UINT32_(0)                                          /* (PMC_PLL_CTRL1) Multiplier Factor Value for PLLA, B and C Position */
#define PMC_PLL_CTRL1_MUL_Msk                 (_UINT32_(0xFFFF) << PMC_PLL_CTRL1_MUL_Pos)          /* (PMC_PLL_CTRL1) Multiplier Factor Value for PLLA, B and C Mask */
#define PMC_PLL_CTRL1_MUL(value)              (PMC_PLL_CTRL1_MUL_Msk & (_UINT32_(value) << PMC_PLL_CTRL1_MUL_Pos)) /* Assigment of value for MUL in the PMC_PLL_CTRL1 register */
#define PMC_PLL_CTRL1_Msk                     _UINT32_(0x0000FFFF)                                 /* (PMC_PLL_CTRL1) Register Mask  */


/* -------- PMC_PLL_CTRL2 : (PMC Offset: 0x14) (R/W 32) PLL Control Register 2 -------- */
#define PMC_PLL_CTRL2_FRACR_Pos               _UINT32_(0)                                          /* (PMC_PLL_CTRL2) Fractional Loop Divider Setting Position */
#define PMC_PLL_CTRL2_FRACR_Msk               (_UINT32_(0x3FFFFF) << PMC_PLL_CTRL2_FRACR_Pos)      /* (PMC_PLL_CTRL2) Fractional Loop Divider Setting Mask */
#define PMC_PLL_CTRL2_FRACR(value)            (PMC_PLL_CTRL2_FRACR_Msk & (_UINT32_(value) << PMC_PLL_CTRL2_FRACR_Pos)) /* Assigment of value for FRACR in the PMC_PLL_CTRL2 register */
#define PMC_PLL_CTRL2_Msk                     _UINT32_(0x003FFFFF)                                 /* (PMC_PLL_CTRL2) Register Mask  */


/* -------- PMC_PLL_SSR : (PMC Offset: 0x18) (R/W 32) PLL Spread Spectrum Register -------- */
#define PMC_PLL_SSR_STEP_Pos                  _UINT32_(0)                                          /* (PMC_PLL_SSR) Spread Spectrum Step Size Position */
#define PMC_PLL_SSR_STEP_Msk                  (_UINT32_(0xFFFF) << PMC_PLL_SSR_STEP_Pos)           /* (PMC_PLL_SSR) Spread Spectrum Step Size Mask */
#define PMC_PLL_SSR_STEP(value)               (PMC_PLL_SSR_STEP_Msk & (_UINT32_(value) << PMC_PLL_SSR_STEP_Pos)) /* Assigment of value for STEP in the PMC_PLL_SSR register */
#define PMC_PLL_SSR_NSTEP_Pos                 _UINT32_(16)                                         /* (PMC_PLL_SSR) Spread Spectrum Number of Step Position */
#define PMC_PLL_SSR_NSTEP_Msk                 (_UINT32_(0xFF) << PMC_PLL_SSR_NSTEP_Pos)            /* (PMC_PLL_SSR) Spread Spectrum Number of Step Mask */
#define PMC_PLL_SSR_NSTEP(value)              (PMC_PLL_SSR_NSTEP_Msk & (_UINT32_(value) << PMC_PLL_SSR_NSTEP_Pos)) /* Assigment of value for NSTEP in the PMC_PLL_SSR register */
#define PMC_PLL_SSR_ENSPREAD_Pos              _UINT32_(28)                                         /* (PMC_PLL_SSR) Spread Spectrum Enable Position */
#define PMC_PLL_SSR_ENSPREAD_Msk              (_UINT32_(0x1) << PMC_PLL_SSR_ENSPREAD_Pos)          /* (PMC_PLL_SSR) Spread Spectrum Enable Mask */
#define PMC_PLL_SSR_ENSPREAD(value)           (PMC_PLL_SSR_ENSPREAD_Msk & (_UINT32_(value) << PMC_PLL_SSR_ENSPREAD_Pos)) /* Assigment of value for ENSPREAD in the PMC_PLL_SSR register */
#define PMC_PLL_SSR_Msk                       _UINT32_(0x10FFFFFF)                                 /* (PMC_PLL_SSR) Register Mask  */


/* -------- PMC_PLL_ACR : (PMC Offset: 0x1C) (R/W 32) PLL Analog Control Register -------- */
#define PMC_PLL_ACR_CONTROL_Pos               _UINT32_(0)                                          /* (PMC_PLL_ACR) PLL Control Value Selection Position */
#define PMC_PLL_ACR_CONTROL_Msk               (_UINT32_(0xFFF) << PMC_PLL_ACR_CONTROL_Pos)         /* (PMC_PLL_ACR) PLL Control Value Selection Mask */
#define PMC_PLL_ACR_CONTROL(value)            (PMC_PLL_ACR_CONTROL_Msk & (_UINT32_(value) << PMC_PLL_ACR_CONTROL_Pos)) /* Assigment of value for CONTROL in the PMC_PLL_ACR register */
#define PMC_PLL_ACR_LOCK_THR_Pos              _UINT32_(16)                                         /* (PMC_PLL_ACR) PLL Lock Threshold Value Selection Position */
#define PMC_PLL_ACR_LOCK_THR_Msk              (_UINT32_(0xFF) << PMC_PLL_ACR_LOCK_THR_Pos)         /* (PMC_PLL_ACR) PLL Lock Threshold Value Selection Mask */
#define PMC_PLL_ACR_LOCK_THR(value)           (PMC_PLL_ACR_LOCK_THR_Msk & (_UINT32_(value) << PMC_PLL_ACR_LOCK_THR_Pos)) /* Assigment of value for LOCK_THR in the PMC_PLL_ACR register */
#define PMC_PLL_ACR_LOOP_FILTER_Pos           _UINT32_(24)                                         /* (PMC_PLL_ACR) PLL Loop Filter Selection Position */
#define PMC_PLL_ACR_LOOP_FILTER_Msk           (_UINT32_(0xFF) << PMC_PLL_ACR_LOOP_FILTER_Pos)      /* (PMC_PLL_ACR) PLL Loop Filter Selection Mask */
#define PMC_PLL_ACR_LOOP_FILTER(value)        (PMC_PLL_ACR_LOOP_FILTER_Msk & (_UINT32_(value) << PMC_PLL_ACR_LOOP_FILTER_Pos)) /* Assigment of value for LOOP_FILTER in the PMC_PLL_ACR register */
#define PMC_PLL_ACR_Msk                       _UINT32_(0xFFFF0FFF)                                 /* (PMC_PLL_ACR) Register Mask  */


/* -------- PMC_PLL_UPDT : (PMC Offset: 0x20) (R/W 32) PLL Update Register -------- */
#define PMC_PLL_UPDT_ID_Pos                   _UINT32_(0)                                          /* (PMC_PLL_UPDT) PLL ID Position */
#define PMC_PLL_UPDT_ID_Msk                   (_UINT32_(0xF) << PMC_PLL_UPDT_ID_Pos)               /* (PMC_PLL_UPDT) PLL ID Mask */
#define PMC_PLL_UPDT_ID(value)                (PMC_PLL_UPDT_ID_Msk & (_UINT32_(value) << PMC_PLL_UPDT_ID_Pos)) /* Assigment of value for ID in the PMC_PLL_UPDT register */
#define PMC_PLL_UPDT_UPDATE_Pos               _UINT32_(8)                                          /* (PMC_PLL_UPDT) PLL Setting Update (write-only) Position */
#define PMC_PLL_UPDT_UPDATE_Msk               (_UINT32_(0x1) << PMC_PLL_UPDT_UPDATE_Pos)           /* (PMC_PLL_UPDT) PLL Setting Update (write-only) Mask */
#define PMC_PLL_UPDT_UPDATE(value)            (PMC_PLL_UPDT_UPDATE_Msk & (_UINT32_(value) << PMC_PLL_UPDT_UPDATE_Pos)) /* Assigment of value for UPDATE in the PMC_PLL_UPDT register */
#define PMC_PLL_UPDT_STUPTIM_Pos              _UINT32_(16)                                         /* (PMC_PLL_UPDT) Start-up Time Position */
#define PMC_PLL_UPDT_STUPTIM_Msk              (_UINT32_(0xFF) << PMC_PLL_UPDT_STUPTIM_Pos)         /* (PMC_PLL_UPDT) Start-up Time Mask */
#define PMC_PLL_UPDT_STUPTIM(value)           (PMC_PLL_UPDT_STUPTIM_Msk & (_UINT32_(value) << PMC_PLL_UPDT_STUPTIM_Pos)) /* Assigment of value for STUPTIM in the PMC_PLL_UPDT register */
#define PMC_PLL_UPDT_Msk                      _UINT32_(0x00FF010F)                                 /* (PMC_PLL_UPDT) Register Mask  */


/* -------- CKGR_MOR : (PMC Offset: 0x24) (R/W 32) Main Oscillator Register -------- */
#define CKGR_MOR_MOSCXTEN_Pos                 _UINT32_(0)                                          /* (CKGR_MOR) Main Crystal Oscillator Enable Position */
#define CKGR_MOR_MOSCXTEN_Msk                 (_UINT32_(0x1) << CKGR_MOR_MOSCXTEN_Pos)             /* (CKGR_MOR) Main Crystal Oscillator Enable Mask */
#define CKGR_MOR_MOSCXTEN(value)              (CKGR_MOR_MOSCXTEN_Msk & (_UINT32_(value) << CKGR_MOR_MOSCXTEN_Pos)) /* Assigment of value for MOSCXTEN in the CKGR_MOR register */
#define CKGR_MOR_MOSCXTBY_Pos                 _UINT32_(1)                                          /* (CKGR_MOR) 12 to 48 MHz Crystal Oscillator Bypass Position */
#define CKGR_MOR_MOSCXTBY_Msk                 (_UINT32_(0x1) << CKGR_MOR_MOSCXTBY_Pos)             /* (CKGR_MOR) 12 to 48 MHz Crystal Oscillator Bypass Mask */
#define CKGR_MOR_MOSCXTBY(value)              (CKGR_MOR_MOSCXTBY_Msk & (_UINT32_(value) << CKGR_MOR_MOSCXTBY_Pos)) /* Assigment of value for MOSCXTBY in the CKGR_MOR register */
#define CKGR_MOR_WAITMODE_Pos                 _UINT32_(2)                                          /* (CKGR_MOR) Wait Mode Command (write-only) Position */
#define CKGR_MOR_WAITMODE_Msk                 (_UINT32_(0x1) << CKGR_MOR_WAITMODE_Pos)             /* (CKGR_MOR) Wait Mode Command (write-only) Mask */
#define CKGR_MOR_WAITMODE(value)              (CKGR_MOR_WAITMODE_Msk & (_UINT32_(value) << CKGR_MOR_WAITMODE_Pos)) /* Assigment of value for WAITMODE in the CKGR_MOR register */
#define CKGR_MOR_MOSCRCEN_Pos                 _UINT32_(3)                                          /* (CKGR_MOR) Main RC Oscillator Enable Position */
#define CKGR_MOR_MOSCRCEN_Msk                 (_UINT32_(0x1) << CKGR_MOR_MOSCRCEN_Pos)             /* (CKGR_MOR) Main RC Oscillator Enable Mask */
#define CKGR_MOR_MOSCRCEN(value)              (CKGR_MOR_MOSCRCEN_Msk & (_UINT32_(value) << CKGR_MOR_MOSCRCEN_Pos)) /* Assigment of value for MOSCRCEN in the CKGR_MOR register */
#define CKGR_MOR_MOSCXTST_Pos                 _UINT32_(8)                                          /* (CKGR_MOR) Main Crystal Oscillator Start-up Time Position */
#define CKGR_MOR_MOSCXTST_Msk                 (_UINT32_(0xFF) << CKGR_MOR_MOSCXTST_Pos)            /* (CKGR_MOR) Main Crystal Oscillator Start-up Time Mask */
#define CKGR_MOR_MOSCXTST(value)              (CKGR_MOR_MOSCXTST_Msk & (_UINT32_(value) << CKGR_MOR_MOSCXTST_Pos)) /* Assigment of value for MOSCXTST in the CKGR_MOR register */
#define CKGR_MOR_KEY_Pos                      _UINT32_(16)                                         /* (CKGR_MOR) Write Access Password Position */
#define CKGR_MOR_KEY_Msk                      (_UINT32_(0xFF) << CKGR_MOR_KEY_Pos)                 /* (CKGR_MOR) Write Access Password Mask */
#define CKGR_MOR_KEY(value)                   (CKGR_MOR_KEY_Msk & (_UINT32_(value) << CKGR_MOR_KEY_Pos)) /* Assigment of value for KEY in the CKGR_MOR register */
#define   CKGR_MOR_KEY_PASSWD_Val             _UINT32_(0x37)                                       /* (CKGR_MOR) Writing any other value in this field aborts the write operation. Always reads as 0.  */
#define CKGR_MOR_KEY_PASSWD                   (CKGR_MOR_KEY_PASSWD_Val << CKGR_MOR_KEY_Pos)        /* (CKGR_MOR) Writing any other value in this field aborts the write operation. Always reads as 0. Position  */
#define CKGR_MOR_MOSCSEL_Pos                  _UINT32_(24)                                         /* (CKGR_MOR) Main Clock Oscillator Selection Position */
#define CKGR_MOR_MOSCSEL_Msk                  (_UINT32_(0x1) << CKGR_MOR_MOSCSEL_Pos)              /* (CKGR_MOR) Main Clock Oscillator Selection Mask */
#define CKGR_MOR_MOSCSEL(value)               (CKGR_MOR_MOSCSEL_Msk & (_UINT32_(value) << CKGR_MOR_MOSCSEL_Pos)) /* Assigment of value for MOSCSEL in the CKGR_MOR register */
#define   CKGR_MOR_MOSCSEL_RC_Val             _UINT32_(0x0)                                        /* (CKGR_MOR) The main RC oscillator is selected.  */
#define   CKGR_MOR_MOSCSEL_XT_Val             _UINT32_(0x1)                                        /* (CKGR_MOR) The main crystal oscillator is selected.  */
#define CKGR_MOR_MOSCSEL_RC                   (CKGR_MOR_MOSCSEL_RC_Val << CKGR_MOR_MOSCSEL_Pos)    /* (CKGR_MOR) The main RC oscillator is selected. Position  */
#define CKGR_MOR_MOSCSEL_XT                   (CKGR_MOR_MOSCSEL_XT_Val << CKGR_MOR_MOSCSEL_Pos)    /* (CKGR_MOR) The main crystal oscillator is selected. Position  */
#define CKGR_MOR_CFDEN_Pos                    _UINT32_(25)                                         /* (CKGR_MOR) Clock Failure Detector Enable Position */
#define CKGR_MOR_CFDEN_Msk                    (_UINT32_(0x1) << CKGR_MOR_CFDEN_Pos)                /* (CKGR_MOR) Clock Failure Detector Enable Mask */
#define CKGR_MOR_CFDEN(value)                 (CKGR_MOR_CFDEN_Msk & (_UINT32_(value) << CKGR_MOR_CFDEN_Pos)) /* Assigment of value for CFDEN in the CKGR_MOR register */
#define CKGR_MOR_XT32KFME_Pos                 _UINT32_(26)                                         /* (CKGR_MOR) 32.768 kHz Crystal Oscillator Frequency Monitoring Enable Position */
#define CKGR_MOR_XT32KFME_Msk                 (_UINT32_(0x1) << CKGR_MOR_XT32KFME_Pos)             /* (CKGR_MOR) 32.768 kHz Crystal Oscillator Frequency Monitoring Enable Mask */
#define CKGR_MOR_XT32KFME(value)              (CKGR_MOR_XT32KFME_Msk & (_UINT32_(value) << CKGR_MOR_XT32KFME_Pos)) /* Assigment of value for XT32KFME in the CKGR_MOR register */
#define CKGR_MOR_BMCKRST_Pos                  _UINT32_(27)                                         /* (CKGR_MOR) Bad MCK0 Clock Reset Enable Position */
#define CKGR_MOR_BMCKRST_Msk                  (_UINT32_(0x1) << CKGR_MOR_BMCKRST_Pos)              /* (CKGR_MOR) Bad MCK0 Clock Reset Enable Mask */
#define CKGR_MOR_BMCKRST(value)               (CKGR_MOR_BMCKRST_Msk & (_UINT32_(value) << CKGR_MOR_BMCKRST_Pos)) /* Assigment of value for BMCKRST in the CKGR_MOR register */
#define CKGR_MOR_Msk                          _UINT32_(0x0FFFFF0F)                                 /* (CKGR_MOR) Register Mask  */


/* -------- CKGR_MCFR : (PMC Offset: 0x28) (R/W 32) Main Clock Frequency Register -------- */
#define CKGR_MCFR_MAINF_Pos                   _UINT32_(0)                                          /* (CKGR_MCFR) Main Clock Frequency Position */
#define CKGR_MCFR_MAINF_Msk                   (_UINT32_(0xFFFF) << CKGR_MCFR_MAINF_Pos)            /* (CKGR_MCFR) Main Clock Frequency Mask */
#define CKGR_MCFR_MAINF(value)                (CKGR_MCFR_MAINF_Msk & (_UINT32_(value) << CKGR_MCFR_MAINF_Pos)) /* Assigment of value for MAINF in the CKGR_MCFR register */
#define CKGR_MCFR_MAINFRDY_Pos                _UINT32_(16)                                         /* (CKGR_MCFR) Main Clock Frequency Measure Ready Position */
#define CKGR_MCFR_MAINFRDY_Msk                (_UINT32_(0x1) << CKGR_MCFR_MAINFRDY_Pos)            /* (CKGR_MCFR) Main Clock Frequency Measure Ready Mask */
#define CKGR_MCFR_MAINFRDY(value)             (CKGR_MCFR_MAINFRDY_Msk & (_UINT32_(value) << CKGR_MCFR_MAINFRDY_Pos)) /* Assigment of value for MAINFRDY in the CKGR_MCFR register */
#define CKGR_MCFR_RCMEAS_Pos                  _UINT32_(20)                                         /* (CKGR_MCFR) RC Oscillator Frequency Measure (write-only) Position */
#define CKGR_MCFR_RCMEAS_Msk                  (_UINT32_(0x1) << CKGR_MCFR_RCMEAS_Pos)              /* (CKGR_MCFR) RC Oscillator Frequency Measure (write-only) Mask */
#define CKGR_MCFR_RCMEAS(value)               (CKGR_MCFR_RCMEAS_Msk & (_UINT32_(value) << CKGR_MCFR_RCMEAS_Pos)) /* Assigment of value for RCMEAS in the CKGR_MCFR register */
#define CKGR_MCFR_CCSS_Pos                    _UINT32_(24)                                         /* (CKGR_MCFR) Counter Clock Source Selection Position */
#define CKGR_MCFR_CCSS_Msk                    (_UINT32_(0x1) << CKGR_MCFR_CCSS_Pos)                /* (CKGR_MCFR) Counter Clock Source Selection Mask */
#define CKGR_MCFR_CCSS(value)                 (CKGR_MCFR_CCSS_Msk & (_UINT32_(value) << CKGR_MCFR_CCSS_Pos)) /* Assigment of value for CCSS in the CKGR_MCFR register */
#define CKGR_MCFR_Msk                         _UINT32_(0x0111FFFF)                                 /* (CKGR_MCFR) Register Mask  */


/* -------- PMC_CPU_CKR : (PMC Offset: 0x2C) (R/W 32) CPU Clock Register -------- */
#define PMC_CPU_CKR_CSS_Pos                   _UINT32_(0)                                          /* (PMC_CPU_CKR) Processor (CPU_CLK0) and Master Clock (MCK0) Source Selection Position */
#define PMC_CPU_CKR_CSS_Msk                   (_UINT32_(0x3) << PMC_CPU_CKR_CSS_Pos)               /* (PMC_CPU_CKR) Processor (CPU_CLK0) and Master Clock (MCK0) Source Selection Mask */
#define PMC_CPU_CKR_CSS(value)                (PMC_CPU_CKR_CSS_Msk & (_UINT32_(value) << PMC_CPU_CKR_CSS_Pos)) /* Assigment of value for CSS in the PMC_CPU_CKR register */
#define   PMC_CPU_CKR_CSS_MD_SLOW_CLK_Val     _UINT32_(0x0)                                        /* (PMC_CPU_CKR) MD_SLCK is selected  */
#define   PMC_CPU_CKR_CSS_MAINCK_Val          _UINT32_(0x1)                                        /* (PMC_CPU_CKR) MAINCK is selected  */
#define   PMC_CPU_CKR_CSS_PLLACK1_Val         _UINT32_(0x2)                                        /* (PMC_CPU_CKR) PLLACK1 is selected  */
#define   PMC_CPU_CKR_CSS_PLLBCK_Val          _UINT32_(0x3)                                        /* (PMC_CPU_CKR) PLLBCK is selected  */
#define PMC_CPU_CKR_CSS_MD_SLOW_CLK           (PMC_CPU_CKR_CSS_MD_SLOW_CLK_Val << PMC_CPU_CKR_CSS_Pos) /* (PMC_CPU_CKR) MD_SLCK is selected Position  */
#define PMC_CPU_CKR_CSS_MAINCK                (PMC_CPU_CKR_CSS_MAINCK_Val << PMC_CPU_CKR_CSS_Pos)  /* (PMC_CPU_CKR) MAINCK is selected Position  */
#define PMC_CPU_CKR_CSS_PLLACK1               (PMC_CPU_CKR_CSS_PLLACK1_Val << PMC_CPU_CKR_CSS_Pos) /* (PMC_CPU_CKR) PLLACK1 is selected Position  */
#define PMC_CPU_CKR_CSS_PLLBCK                (PMC_CPU_CKR_CSS_PLLBCK_Val << PMC_CPU_CKR_CSS_Pos)  /* (PMC_CPU_CKR) PLLBCK is selected Position  */
#define PMC_CPU_CKR_PRES_Pos                  _UINT32_(4)                                          /* (PMC_CPU_CKR) Processor (CPU_CLK0) and Master Clock (MCK0) Prescaler Position */
#define PMC_CPU_CKR_PRES_Msk                  (_UINT32_(0x7) << PMC_CPU_CKR_PRES_Pos)              /* (PMC_CPU_CKR) Processor (CPU_CLK0) and Master Clock (MCK0) Prescaler Mask */
#define PMC_CPU_CKR_PRES(value)               (PMC_CPU_CKR_PRES_Msk & (_UINT32_(value) << PMC_CPU_CKR_PRES_Pos)) /* Assigment of value for PRES in the PMC_CPU_CKR register */
#define   PMC_CPU_CKR_PRES_CLK_1_Val          _UINT32_(0x0)                                        /* (PMC_CPU_CKR) Selected clock  */
#define   PMC_CPU_CKR_PRES_CLK_2_Val          _UINT32_(0x1)                                        /* (PMC_CPU_CKR) Selected clock divided by 2  */
#define   PMC_CPU_CKR_PRES_CLK_4_Val          _UINT32_(0x2)                                        /* (PMC_CPU_CKR) Selected clock divided by 4  */
#define   PMC_CPU_CKR_PRES_CLK_8_Val          _UINT32_(0x3)                                        /* (PMC_CPU_CKR) Selected clock divided by 8  */
#define   PMC_CPU_CKR_PRES_CLK_16_Val         _UINT32_(0x4)                                        /* (PMC_CPU_CKR) Selected clock divided by 16  */
#define   PMC_CPU_CKR_PRES_CLK_32_Val         _UINT32_(0x5)                                        /* (PMC_CPU_CKR) Selected clock divided by 32  */
#define   PMC_CPU_CKR_PRES_CLK_64_Val         _UINT32_(0x6)                                        /* (PMC_CPU_CKR) Selected clock divided by 64  */
#define   PMC_CPU_CKR_PRES_CLK_3_Val          _UINT32_(0x7)                                        /* (PMC_CPU_CKR) Selected clock divided by 3  */
#define PMC_CPU_CKR_PRES_CLK_1                (PMC_CPU_CKR_PRES_CLK_1_Val << PMC_CPU_CKR_PRES_Pos) /* (PMC_CPU_CKR) Selected clock Position  */
#define PMC_CPU_CKR_PRES_CLK_2                (PMC_CPU_CKR_PRES_CLK_2_Val << PMC_CPU_CKR_PRES_Pos) /* (PMC_CPU_CKR) Selected clock divided by 2 Position  */
#define PMC_CPU_CKR_PRES_CLK_4                (PMC_CPU_CKR_PRES_CLK_4_Val << PMC_CPU_CKR_PRES_Pos) /* (PMC_CPU_CKR) Selected clock divided by 4 Position  */
#define PMC_CPU_CKR_PRES_CLK_8                (PMC_CPU_CKR_PRES_CLK_8_Val << PMC_CPU_CKR_PRES_Pos) /* (PMC_CPU_CKR) Selected clock divided by 8 Position  */
#define PMC_CPU_CKR_PRES_CLK_16               (PMC_CPU_CKR_PRES_CLK_16_Val << PMC_CPU_CKR_PRES_Pos) /* (PMC_CPU_CKR) Selected clock divided by 16 Position  */
#define PMC_CPU_CKR_PRES_CLK_32               (PMC_CPU_CKR_PRES_CLK_32_Val << PMC_CPU_CKR_PRES_Pos) /* (PMC_CPU_CKR) Selected clock divided by 32 Position  */
#define PMC_CPU_CKR_PRES_CLK_64               (PMC_CPU_CKR_PRES_CLK_64_Val << PMC_CPU_CKR_PRES_Pos) /* (PMC_CPU_CKR) Selected clock divided by 64 Position  */
#define PMC_CPU_CKR_PRES_CLK_3                (PMC_CPU_CKR_PRES_CLK_3_Val << PMC_CPU_CKR_PRES_Pos) /* (PMC_CPU_CKR) Selected clock divided by 3 Position  */
#define PMC_CPU_CKR_CPCSS_Pos                 _UINT32_(16)                                         /* (PMC_CPU_CKR) Coprocessor MCK1 Source Selection Position */
#define PMC_CPU_CKR_CPCSS_Msk                 (_UINT32_(0x7) << PMC_CPU_CKR_CPCSS_Pos)             /* (PMC_CPU_CKR) Coprocessor MCK1 Source Selection Mask */
#define PMC_CPU_CKR_CPCSS(value)              (PMC_CPU_CKR_CPCSS_Msk & (_UINT32_(value) << PMC_CPU_CKR_CPCSS_Pos)) /* Assigment of value for CPCSS in the PMC_CPU_CKR register */
#define   PMC_CPU_CKR_CPCSS_MD_SLOW_CLK_Val   _UINT32_(0x0)                                        /* (PMC_CPU_CKR) MD_SLCK is selected  */
#define   PMC_CPU_CKR_CPCSS_MAINCK_Val        _UINT32_(0x1)                                        /* (PMC_CPU_CKR) MAINCK is selected  */
#define   PMC_CPU_CKR_CPCSS_MCK0_Val          _UINT32_(0x2)                                        /* (PMC_CPU_CKR) MCK0 is selected  */
#define   PMC_CPU_CKR_CPCSS_PLLACK1_Val       _UINT32_(0x3)                                        /* (PMC_CPU_CKR) PLLACK1 is selected  */
#define   PMC_CPU_CKR_CPCSS_PLLBCK_Val        _UINT32_(0x4)                                        /* (PMC_CPU_CKR) PLLBCK is selected  */
#define   PMC_CPU_CKR_CPCSS_PLLCCK_Val        _UINT32_(0x5)                                        /* (PMC_CPU_CKR) PLLCCK is selected  */
#define PMC_CPU_CKR_CPCSS_MD_SLOW_CLK         (PMC_CPU_CKR_CPCSS_MD_SLOW_CLK_Val << PMC_CPU_CKR_CPCSS_Pos) /* (PMC_CPU_CKR) MD_SLCK is selected Position  */
#define PMC_CPU_CKR_CPCSS_MAINCK              (PMC_CPU_CKR_CPCSS_MAINCK_Val << PMC_CPU_CKR_CPCSS_Pos) /* (PMC_CPU_CKR) MAINCK is selected Position  */
#define PMC_CPU_CKR_CPCSS_MCK0                (PMC_CPU_CKR_CPCSS_MCK0_Val << PMC_CPU_CKR_CPCSS_Pos) /* (PMC_CPU_CKR) MCK0 is selected Position  */
#define PMC_CPU_CKR_CPCSS_PLLACK1             (PMC_CPU_CKR_CPCSS_PLLACK1_Val << PMC_CPU_CKR_CPCSS_Pos) /* (PMC_CPU_CKR) PLLACK1 is selected Position  */
#define PMC_CPU_CKR_CPCSS_PLLBCK              (PMC_CPU_CKR_CPCSS_PLLBCK_Val << PMC_CPU_CKR_CPCSS_Pos) /* (PMC_CPU_CKR) PLLBCK is selected Position  */
#define PMC_CPU_CKR_CPCSS_PLLCCK              (PMC_CPU_CKR_CPCSS_PLLCCK_Val << PMC_CPU_CKR_CPCSS_Pos) /* (PMC_CPU_CKR) PLLCCK is selected Position  */
#define PMC_CPU_CKR_CPPRES_Pos                _UINT32_(20)                                         /* (PMC_CPU_CKR) Coprocessor MCK1 Prescaler Position */
#define PMC_CPU_CKR_CPPRES_Msk                (_UINT32_(0xF) << PMC_CPU_CKR_CPPRES_Pos)            /* (PMC_CPU_CKR) Coprocessor MCK1 Prescaler Mask */
#define PMC_CPU_CKR_CPPRES(value)             (PMC_CPU_CKR_CPPRES_Msk & (_UINT32_(value) << PMC_CPU_CKR_CPPRES_Pos)) /* Assigment of value for CPPRES in the PMC_CPU_CKR register */
#define   PMC_CPU_CKR_CPPRES_CLK_1_Val        _UINT32_(0x0)                                        /* (PMC_CPU_CKR) Selected clock  */
#define   PMC_CPU_CKR_CPPRES_CLK_2_Val        _UINT32_(0x1)                                        /* (PMC_CPU_CKR) Selected clock divided by 2  */
#define   PMC_CPU_CKR_CPPRES_CLK_3_Val        _UINT32_(0x2)                                        /* (PMC_CPU_CKR) Selected clock divided by 3  */
#define   PMC_CPU_CKR_CPPRES_CLK_4_Val        _UINT32_(0x3)                                        /* (PMC_CPU_CKR) Selected clock divided by 4  */
#define   PMC_CPU_CKR_CPPRES_CLK_5_Val        _UINT32_(0x4)                                        /* (PMC_CPU_CKR) Selected clock divided by 5  */
#define   PMC_CPU_CKR_CPPRES_CLK_6_Val        _UINT32_(0x5)                                        /* (PMC_CPU_CKR) Selected clock divided by 6  */
#define   PMC_CPU_CKR_CPPRES_CLK_7_Val        _UINT32_(0x6)                                        /* (PMC_CPU_CKR) Selected clock divided by 7  */
#define   PMC_CPU_CKR_CPPRES_CLK_8_Val        _UINT32_(0x7)                                        /* (PMC_CPU_CKR) Selected clock divided by 8  */
#define   PMC_CPU_CKR_CPPRES_CLK_9_Val        _UINT32_(0x8)                                        /* (PMC_CPU_CKR) Selected clock divided by 9  */
#define   PMC_CPU_CKR_CPPRES_CLK_10_Val       _UINT32_(0x9)                                        /* (PMC_CPU_CKR) Selected clock divided by 10  */
#define   PMC_CPU_CKR_CPPRES_CLK_11_Val       _UINT32_(0xA)                                        /* (PMC_CPU_CKR) Selected clock divided by 11  */
#define   PMC_CPU_CKR_CPPRES_CLK_12_Val       _UINT32_(0xB)                                        /* (PMC_CPU_CKR) Selected clock divided by 12  */
#define   PMC_CPU_CKR_CPPRES_CLK_13_Val       _UINT32_(0xC)                                        /* (PMC_CPU_CKR) Selected clock divided by 13  */
#define   PMC_CPU_CKR_CPPRES_CLK_14_Val       _UINT32_(0xD)                                        /* (PMC_CPU_CKR) Selected clock divided by 14  */
#define   PMC_CPU_CKR_CPPRES_CLK_15_Val       _UINT32_(0xE)                                        /* (PMC_CPU_CKR) Selected clock divided by 15  */
#define   PMC_CPU_CKR_CPPRES_CLK_16_Val       _UINT32_(0xF)                                        /* (PMC_CPU_CKR) Selected clock divided by 16  */
#define PMC_CPU_CKR_CPPRES_CLK_1              (PMC_CPU_CKR_CPPRES_CLK_1_Val << PMC_CPU_CKR_CPPRES_Pos) /* (PMC_CPU_CKR) Selected clock Position  */
#define PMC_CPU_CKR_CPPRES_CLK_2              (PMC_CPU_CKR_CPPRES_CLK_2_Val << PMC_CPU_CKR_CPPRES_Pos) /* (PMC_CPU_CKR) Selected clock divided by 2 Position  */
#define PMC_CPU_CKR_CPPRES_CLK_3              (PMC_CPU_CKR_CPPRES_CLK_3_Val << PMC_CPU_CKR_CPPRES_Pos) /* (PMC_CPU_CKR) Selected clock divided by 3 Position  */
#define PMC_CPU_CKR_CPPRES_CLK_4              (PMC_CPU_CKR_CPPRES_CLK_4_Val << PMC_CPU_CKR_CPPRES_Pos) /* (PMC_CPU_CKR) Selected clock divided by 4 Position  */
#define PMC_CPU_CKR_CPPRES_CLK_5              (PMC_CPU_CKR_CPPRES_CLK_5_Val << PMC_CPU_CKR_CPPRES_Pos) /* (PMC_CPU_CKR) Selected clock divided by 5 Position  */
#define PMC_CPU_CKR_CPPRES_CLK_6              (PMC_CPU_CKR_CPPRES_CLK_6_Val << PMC_CPU_CKR_CPPRES_Pos) /* (PMC_CPU_CKR) Selected clock divided by 6 Position  */
#define PMC_CPU_CKR_CPPRES_CLK_7              (PMC_CPU_CKR_CPPRES_CLK_7_Val << PMC_CPU_CKR_CPPRES_Pos) /* (PMC_CPU_CKR) Selected clock divided by 7 Position  */
#define PMC_CPU_CKR_CPPRES_CLK_8              (PMC_CPU_CKR_CPPRES_CLK_8_Val << PMC_CPU_CKR_CPPRES_Pos) /* (PMC_CPU_CKR) Selected clock divided by 8 Position  */
#define PMC_CPU_CKR_CPPRES_CLK_9              (PMC_CPU_CKR_CPPRES_CLK_9_Val << PMC_CPU_CKR_CPPRES_Pos) /* (PMC_CPU_CKR) Selected clock divided by 9 Position  */
#define PMC_CPU_CKR_CPPRES_CLK_10             (PMC_CPU_CKR_CPPRES_CLK_10_Val << PMC_CPU_CKR_CPPRES_Pos) /* (PMC_CPU_CKR) Selected clock divided by 10 Position  */
#define PMC_CPU_CKR_CPPRES_CLK_11             (PMC_CPU_CKR_CPPRES_CLK_11_Val << PMC_CPU_CKR_CPPRES_Pos) /* (PMC_CPU_CKR) Selected clock divided by 11 Position  */
#define PMC_CPU_CKR_CPPRES_CLK_12             (PMC_CPU_CKR_CPPRES_CLK_12_Val << PMC_CPU_CKR_CPPRES_Pos) /* (PMC_CPU_CKR) Selected clock divided by 12 Position  */
#define PMC_CPU_CKR_CPPRES_CLK_13             (PMC_CPU_CKR_CPPRES_CLK_13_Val << PMC_CPU_CKR_CPPRES_Pos) /* (PMC_CPU_CKR) Selected clock divided by 13 Position  */
#define PMC_CPU_CKR_CPPRES_CLK_14             (PMC_CPU_CKR_CPPRES_CLK_14_Val << PMC_CPU_CKR_CPPRES_Pos) /* (PMC_CPU_CKR) Selected clock divided by 14 Position  */
#define PMC_CPU_CKR_CPPRES_CLK_15             (PMC_CPU_CKR_CPPRES_CLK_15_Val << PMC_CPU_CKR_CPPRES_Pos) /* (PMC_CPU_CKR) Selected clock divided by 15 Position  */
#define PMC_CPU_CKR_CPPRES_CLK_16             (PMC_CPU_CKR_CPPRES_CLK_16_Val << PMC_CPU_CKR_CPPRES_Pos) /* (PMC_CPU_CKR) Selected clock divided by 16 Position  */
#define PMC_CPU_CKR_RATIO_MCK0DIV_Pos         _UINT32_(24)                                         /* (PMC_CPU_CKR) MCK0 Clock Frequency Division for MCK0DIV Clock Position */
#define PMC_CPU_CKR_RATIO_MCK0DIV_Msk         (_UINT32_(0x1) << PMC_CPU_CKR_RATIO_MCK0DIV_Pos)     /* (PMC_CPU_CKR) MCK0 Clock Frequency Division for MCK0DIV Clock Mask */
#define PMC_CPU_CKR_RATIO_MCK0DIV(value)      (PMC_CPU_CKR_RATIO_MCK0DIV_Msk & (_UINT32_(value) << PMC_CPU_CKR_RATIO_MCK0DIV_Pos)) /* Assigment of value for RATIO_MCK0DIV in the PMC_CPU_CKR register */
#define PMC_CPU_CKR_RATIO_MCK1DIV_Pos         _UINT32_(25)                                         /* (PMC_CPU_CKR) MCK1 Clock Frequency Division for MCK1DIV Clock Position */
#define PMC_CPU_CKR_RATIO_MCK1DIV_Msk         (_UINT32_(0x1) << PMC_CPU_CKR_RATIO_MCK1DIV_Pos)     /* (PMC_CPU_CKR) MCK1 Clock Frequency Division for MCK1DIV Clock Mask */
#define PMC_CPU_CKR_RATIO_MCK1DIV(value)      (PMC_CPU_CKR_RATIO_MCK1DIV_Msk & (_UINT32_(value) << PMC_CPU_CKR_RATIO_MCK1DIV_Pos)) /* Assigment of value for RATIO_MCK1DIV in the PMC_CPU_CKR register */
#define PMC_CPU_CKR_RATIO_MCK0DIV2_Pos        _UINT32_(26)                                         /* (PMC_CPU_CKR) MCK0 Clock Frequency Division for MCK0DIV2 Clock Position */
#define PMC_CPU_CKR_RATIO_MCK0DIV2_Msk        (_UINT32_(0x1) << PMC_CPU_CKR_RATIO_MCK0DIV2_Pos)    /* (PMC_CPU_CKR) MCK0 Clock Frequency Division for MCK0DIV2 Clock Mask */
#define PMC_CPU_CKR_RATIO_MCK0DIV2(value)     (PMC_CPU_CKR_RATIO_MCK0DIV2_Msk & (_UINT32_(value) << PMC_CPU_CKR_RATIO_MCK0DIV2_Pos)) /* Assigment of value for RATIO_MCK0DIV2 in the PMC_CPU_CKR register */
#define PMC_CPU_CKR_Msk                       _UINT32_(0x07F70073)                                 /* (PMC_CPU_CKR) Register Mask  */


/* -------- PMC_PCK : (PMC Offset: 0x44) (R/W 32) Programmable Clock Register (chid = 0) -------- */
#define PMC_PCK_CSS_Pos                       _UINT32_(0)                                          /* (PMC_PCK) Programmable Clock Source Selection Position */
#define PMC_PCK_CSS_Msk                       (_UINT32_(0x1F) << PMC_PCK_CSS_Pos)                  /* (PMC_PCK) Programmable Clock Source Selection Mask */
#define PMC_PCK_CSS(value)                    (PMC_PCK_CSS_Msk & (_UINT32_(value) << PMC_PCK_CSS_Pos)) /* Assigment of value for CSS in the PMC_PCK register */
#define   PMC_PCK_CSS_MD_SLOW_CLK_Val         _UINT32_(0x0)                                        /* (PMC_PCK) MD_SLCK is selected  */
#define   PMC_PCK_CSS_TD_SLOW_CLOCK_Val       _UINT32_(0x1)                                        /* (PMC_PCK) TD_SLCK is selected  */
#define   PMC_PCK_CSS_MAINCK_Val              _UINT32_(0x2)                                        /* (PMC_PCK) MAINCK is selected  */
#define   PMC_PCK_CSS_MCK0_Val                _UINT32_(0x3)                                        /* (PMC_PCK) MCK0 is selected  */
#define   PMC_PCK_CSS_PLLACK1_Val             _UINT32_(0x4)                                        /* (PMC_PCK) PLLACK1 is selected.  */
#define   PMC_PCK_CSS_PLLBCK_Val              _UINT32_(0x5)                                        /* (PMC_PCK) PLLBCK is selected.  */
#define   PMC_PCK_CSS_PLLCCK_Val              _UINT32_(0x6)                                        /* (PMC_PCK) PLLCCK is selected.  */
#define   PMC_PCK_CSS_PLLCSRC_Val             _UINT32_(0x7)                                        /* (PMC_PCK) PLLCSRC is selected.  */
#define PMC_PCK_CSS_MD_SLOW_CLK               (PMC_PCK_CSS_MD_SLOW_CLK_Val << PMC_PCK_CSS_Pos)     /* (PMC_PCK) MD_SLCK is selected Position  */
#define PMC_PCK_CSS_TD_SLOW_CLOCK             (PMC_PCK_CSS_TD_SLOW_CLOCK_Val << PMC_PCK_CSS_Pos)   /* (PMC_PCK) TD_SLCK is selected Position  */
#define PMC_PCK_CSS_MAINCK                    (PMC_PCK_CSS_MAINCK_Val << PMC_PCK_CSS_Pos)          /* (PMC_PCK) MAINCK is selected Position  */
#define PMC_PCK_CSS_MCK0                      (PMC_PCK_CSS_MCK0_Val << PMC_PCK_CSS_Pos)            /* (PMC_PCK) MCK0 is selected Position  */
#define PMC_PCK_CSS_PLLACK1                   (PMC_PCK_CSS_PLLACK1_Val << PMC_PCK_CSS_Pos)         /* (PMC_PCK) PLLACK1 is selected. Position  */
#define PMC_PCK_CSS_PLLBCK                    (PMC_PCK_CSS_PLLBCK_Val << PMC_PCK_CSS_Pos)          /* (PMC_PCK) PLLBCK is selected. Position  */
#define PMC_PCK_CSS_PLLCCK                    (PMC_PCK_CSS_PLLCCK_Val << PMC_PCK_CSS_Pos)          /* (PMC_PCK) PLLCCK is selected. Position  */
#define PMC_PCK_CSS_PLLCSRC                   (PMC_PCK_CSS_PLLCSRC_Val << PMC_PCK_CSS_Pos)         /* (PMC_PCK) PLLCSRC is selected. Position  */
#define PMC_PCK_PRES_Pos                      _UINT32_(8)                                          /* (PMC_PCK) Programmable Clock Prescaler Position */
#define PMC_PCK_PRES_Msk                      (_UINT32_(0xFF) << PMC_PCK_PRES_Pos)                 /* (PMC_PCK) Programmable Clock Prescaler Mask */
#define PMC_PCK_PRES(value)                   (PMC_PCK_PRES_Msk & (_UINT32_(value) << PMC_PCK_PRES_Pos)) /* Assigment of value for PRES in the PMC_PCK register */
#define PMC_PCK_Msk                           _UINT32_(0x0000FF1F)                                 /* (PMC_PCK) Register Mask  */


/* -------- PMC_IER : (PMC Offset: 0x64) ( /W 32) Interrupt Enable Register -------- */
#define PMC_IER_MOSCXTS_Pos                   _UINT32_(0)                                          /* (PMC_IER) Main Crystal Oscillator Status Interrupt Enable Position */
#define PMC_IER_MOSCXTS_Msk                   (_UINT32_(0x1) << PMC_IER_MOSCXTS_Pos)               /* (PMC_IER) Main Crystal Oscillator Status Interrupt Enable Mask */
#define PMC_IER_MOSCXTS(value)                (PMC_IER_MOSCXTS_Msk & (_UINT32_(value) << PMC_IER_MOSCXTS_Pos)) /* Assigment of value for MOSCXTS in the PMC_IER register */
#define PMC_IER_MCKRDY_Pos                    _UINT32_(3)                                          /* (PMC_IER) Master Clock 0 Ready Interrupt Enable Position */
#define PMC_IER_MCKRDY_Msk                    (_UINT32_(0x1) << PMC_IER_MCKRDY_Pos)                /* (PMC_IER) Master Clock 0 Ready Interrupt Enable Mask */
#define PMC_IER_MCKRDY(value)                 (PMC_IER_MCKRDY_Msk & (_UINT32_(value) << PMC_IER_MCKRDY_Pos)) /* Assigment of value for MCKRDY in the PMC_IER register */
#define PMC_IER_CPMCKRDY_Pos                  _UINT32_(4)                                          /* (PMC_IER) Coprocessor Master Clock Ready Interrupt Enable Position */
#define PMC_IER_CPMCKRDY_Msk                  (_UINT32_(0x1) << PMC_IER_CPMCKRDY_Pos)              /* (PMC_IER) Coprocessor Master Clock Ready Interrupt Enable Mask */
#define PMC_IER_CPMCKRDY(value)               (PMC_IER_CPMCKRDY_Msk & (_UINT32_(value) << PMC_IER_CPMCKRDY_Pos)) /* Assigment of value for CPMCKRDY in the PMC_IER register */
#define PMC_IER_PCKRDY0_Pos                   _UINT32_(8)                                          /* (PMC_IER) Programmable Clock Ready 0 Interrupt Enable Position */
#define PMC_IER_PCKRDY0_Msk                   (_UINT32_(0x1) << PMC_IER_PCKRDY0_Pos)               /* (PMC_IER) Programmable Clock Ready 0 Interrupt Enable Mask */
#define PMC_IER_PCKRDY0(value)                (PMC_IER_PCKRDY0_Msk & (_UINT32_(value) << PMC_IER_PCKRDY0_Pos)) /* Assigment of value for PCKRDY0 in the PMC_IER register */
#define PMC_IER_PCKRDY1_Pos                   _UINT32_(9)                                          /* (PMC_IER) Programmable Clock Ready 1 Interrupt Enable Position */
#define PMC_IER_PCKRDY1_Msk                   (_UINT32_(0x1) << PMC_IER_PCKRDY1_Pos)               /* (PMC_IER) Programmable Clock Ready 1 Interrupt Enable Mask */
#define PMC_IER_PCKRDY1(value)                (PMC_IER_PCKRDY1_Msk & (_UINT32_(value) << PMC_IER_PCKRDY1_Pos)) /* Assigment of value for PCKRDY1 in the PMC_IER register */
#define PMC_IER_PCKRDY2_Pos                   _UINT32_(10)                                         /* (PMC_IER) Programmable Clock Ready 2 Interrupt Enable Position */
#define PMC_IER_PCKRDY2_Msk                   (_UINT32_(0x1) << PMC_IER_PCKRDY2_Pos)               /* (PMC_IER) Programmable Clock Ready 2 Interrupt Enable Mask */
#define PMC_IER_PCKRDY2(value)                (PMC_IER_PCKRDY2_Msk & (_UINT32_(value) << PMC_IER_PCKRDY2_Pos)) /* Assigment of value for PCKRDY2 in the PMC_IER register */
#define PMC_IER_PCKRDY3_Pos                   _UINT32_(11)                                         /* (PMC_IER) Programmable Clock Ready 3 Interrupt Enable Position */
#define PMC_IER_PCKRDY3_Msk                   (_UINT32_(0x1) << PMC_IER_PCKRDY3_Pos)               /* (PMC_IER) Programmable Clock Ready 3 Interrupt Enable Mask */
#define PMC_IER_PCKRDY3(value)                (PMC_IER_PCKRDY3_Msk & (_UINT32_(value) << PMC_IER_PCKRDY3_Pos)) /* Assigment of value for PCKRDY3 in the PMC_IER register */
#define PMC_IER_MOSCSELS_Pos                  _UINT32_(16)                                         /* (PMC_IER) Main Clock Source Oscillator Selection Status Interrupt Enable Position */
#define PMC_IER_MOSCSELS_Msk                  (_UINT32_(0x1) << PMC_IER_MOSCSELS_Pos)              /* (PMC_IER) Main Clock Source Oscillator Selection Status Interrupt Enable Mask */
#define PMC_IER_MOSCSELS(value)               (PMC_IER_MOSCSELS_Msk & (_UINT32_(value) << PMC_IER_MOSCSELS_Pos)) /* Assigment of value for MOSCSELS in the PMC_IER register */
#define PMC_IER_MOSCRCS_Pos                   _UINT32_(17)                                         /* (PMC_IER) Main RC Oscillator Status Interrupt Enable Position */
#define PMC_IER_MOSCRCS_Msk                   (_UINT32_(0x1) << PMC_IER_MOSCRCS_Pos)               /* (PMC_IER) Main RC Oscillator Status Interrupt Enable Mask */
#define PMC_IER_MOSCRCS(value)                (PMC_IER_MOSCRCS_Msk & (_UINT32_(value) << PMC_IER_MOSCRCS_Pos)) /* Assigment of value for MOSCRCS in the PMC_IER register */
#define PMC_IER_CFDEV_Pos                     _UINT32_(18)                                         /* (PMC_IER) Clock Failure Detector Event Interrupt Enable Position */
#define PMC_IER_CFDEV_Msk                     (_UINT32_(0x1) << PMC_IER_CFDEV_Pos)                 /* (PMC_IER) Clock Failure Detector Event Interrupt Enable Mask */
#define PMC_IER_CFDEV(value)                  (PMC_IER_CFDEV_Msk & (_UINT32_(value) << PMC_IER_CFDEV_Pos)) /* Assigment of value for CFDEV in the PMC_IER register */
#define PMC_IER_XT32KERR_Pos                  _UINT32_(21)                                         /* (PMC_IER) 32.768 kHz Crystal Oscillator Error Interrupt Enable Position */
#define PMC_IER_XT32KERR_Msk                  (_UINT32_(0x1) << PMC_IER_XT32KERR_Pos)              /* (PMC_IER) 32.768 kHz Crystal Oscillator Error Interrupt Enable Mask */
#define PMC_IER_XT32KERR(value)               (PMC_IER_XT32KERR_Msk & (_UINT32_(value) << PMC_IER_XT32KERR_Pos)) /* Assigment of value for XT32KERR in the PMC_IER register */
#define PMC_IER_MCKMON_Pos                    _UINT32_(23)                                         /* (PMC_IER) Master Clock 0 Clock Monitor Interrupt Enable Position */
#define PMC_IER_MCKMON_Msk                    (_UINT32_(0x1) << PMC_IER_MCKMON_Pos)                /* (PMC_IER) Master Clock 0 Clock Monitor Interrupt Enable Mask */
#define PMC_IER_MCKMON(value)                 (PMC_IER_MCKMON_Msk & (_UINT32_(value) << PMC_IER_MCKMON_Pos)) /* Assigment of value for MCKMON in the PMC_IER register */
#define PMC_IER_Msk                           _UINT32_(0x00A70F19)                                 /* (PMC_IER) Register Mask  */

#define PMC_IER_PCKRDY_Pos                    _UINT32_(8)                                          /* (PMC_IER Position) Programmable Clock Ready x Interrupt Enable */
#define PMC_IER_PCKRDY_Msk                    (_UINT32_(0xF) << PMC_IER_PCKRDY_Pos)                /* (PMC_IER Mask) PCKRDY */
#define PMC_IER_PCKRDY(value)                 (PMC_IER_PCKRDY_Msk & (_UINT32_(value) << PMC_IER_PCKRDY_Pos)) 

/* -------- PMC_IDR : (PMC Offset: 0x68) ( /W 32) Interrupt Disable Register -------- */
#define PMC_IDR_MOSCXTS_Pos                   _UINT32_(0)                                          /* (PMC_IDR) Main Crystal Oscillator Status Interrupt Disable Position */
#define PMC_IDR_MOSCXTS_Msk                   (_UINT32_(0x1) << PMC_IDR_MOSCXTS_Pos)               /* (PMC_IDR) Main Crystal Oscillator Status Interrupt Disable Mask */
#define PMC_IDR_MOSCXTS(value)                (PMC_IDR_MOSCXTS_Msk & (_UINT32_(value) << PMC_IDR_MOSCXTS_Pos)) /* Assigment of value for MOSCXTS in the PMC_IDR register */
#define PMC_IDR_MCKRDY_Pos                    _UINT32_(3)                                          /* (PMC_IDR) Master Clock 0 Ready Interrupt Disable Position */
#define PMC_IDR_MCKRDY_Msk                    (_UINT32_(0x1) << PMC_IDR_MCKRDY_Pos)                /* (PMC_IDR) Master Clock 0 Ready Interrupt Disable Mask */
#define PMC_IDR_MCKRDY(value)                 (PMC_IDR_MCKRDY_Msk & (_UINT32_(value) << PMC_IDR_MCKRDY_Pos)) /* Assigment of value for MCKRDY in the PMC_IDR register */
#define PMC_IDR_CPMCKRDY_Pos                  _UINT32_(4)                                          /* (PMC_IDR) Coprocessor Master Clock Ready Interrupt Disable Position */
#define PMC_IDR_CPMCKRDY_Msk                  (_UINT32_(0x1) << PMC_IDR_CPMCKRDY_Pos)              /* (PMC_IDR) Coprocessor Master Clock Ready Interrupt Disable Mask */
#define PMC_IDR_CPMCKRDY(value)               (PMC_IDR_CPMCKRDY_Msk & (_UINT32_(value) << PMC_IDR_CPMCKRDY_Pos)) /* Assigment of value for CPMCKRDY in the PMC_IDR register */
#define PMC_IDR_PCKRDY0_Pos                   _UINT32_(8)                                          /* (PMC_IDR) Programmable Clock Ready 0 Interrupt DIsable Position */
#define PMC_IDR_PCKRDY0_Msk                   (_UINT32_(0x1) << PMC_IDR_PCKRDY0_Pos)               /* (PMC_IDR) Programmable Clock Ready 0 Interrupt DIsable Mask */
#define PMC_IDR_PCKRDY0(value)                (PMC_IDR_PCKRDY0_Msk & (_UINT32_(value) << PMC_IDR_PCKRDY0_Pos)) /* Assigment of value for PCKRDY0 in the PMC_IDR register */
#define PMC_IDR_PCKRDY1_Pos                   _UINT32_(9)                                          /* (PMC_IDR) Programmable Clock Ready 1 Interrupt DIsable Position */
#define PMC_IDR_PCKRDY1_Msk                   (_UINT32_(0x1) << PMC_IDR_PCKRDY1_Pos)               /* (PMC_IDR) Programmable Clock Ready 1 Interrupt DIsable Mask */
#define PMC_IDR_PCKRDY1(value)                (PMC_IDR_PCKRDY1_Msk & (_UINT32_(value) << PMC_IDR_PCKRDY1_Pos)) /* Assigment of value for PCKRDY1 in the PMC_IDR register */
#define PMC_IDR_PCKRDY2_Pos                   _UINT32_(10)                                         /* (PMC_IDR) Programmable Clock Ready 2 Interrupt DIsable Position */
#define PMC_IDR_PCKRDY2_Msk                   (_UINT32_(0x1) << PMC_IDR_PCKRDY2_Pos)               /* (PMC_IDR) Programmable Clock Ready 2 Interrupt DIsable Mask */
#define PMC_IDR_PCKRDY2(value)                (PMC_IDR_PCKRDY2_Msk & (_UINT32_(value) << PMC_IDR_PCKRDY2_Pos)) /* Assigment of value for PCKRDY2 in the PMC_IDR register */
#define PMC_IDR_PCKRDY3_Pos                   _UINT32_(11)                                         /* (PMC_IDR) Programmable Clock Ready 3 Interrupt DIsable Position */
#define PMC_IDR_PCKRDY3_Msk                   (_UINT32_(0x1) << PMC_IDR_PCKRDY3_Pos)               /* (PMC_IDR) Programmable Clock Ready 3 Interrupt DIsable Mask */
#define PMC_IDR_PCKRDY3(value)                (PMC_IDR_PCKRDY3_Msk & (_UINT32_(value) << PMC_IDR_PCKRDY3_Pos)) /* Assigment of value for PCKRDY3 in the PMC_IDR register */
#define PMC_IDR_MOSCSELS_Pos                  _UINT32_(16)                                         /* (PMC_IDR) Main Clock Source Oscillator Selection Status Interrupt Disable Position */
#define PMC_IDR_MOSCSELS_Msk                  (_UINT32_(0x1) << PMC_IDR_MOSCSELS_Pos)              /* (PMC_IDR) Main Clock Source Oscillator Selection Status Interrupt Disable Mask */
#define PMC_IDR_MOSCSELS(value)               (PMC_IDR_MOSCSELS_Msk & (_UINT32_(value) << PMC_IDR_MOSCSELS_Pos)) /* Assigment of value for MOSCSELS in the PMC_IDR register */
#define PMC_IDR_MOSCRCS_Pos                   _UINT32_(17)                                         /* (PMC_IDR) Main RC Status Interrupt Disable Position */
#define PMC_IDR_MOSCRCS_Msk                   (_UINT32_(0x1) << PMC_IDR_MOSCRCS_Pos)               /* (PMC_IDR) Main RC Status Interrupt Disable Mask */
#define PMC_IDR_MOSCRCS(value)                (PMC_IDR_MOSCRCS_Msk & (_UINT32_(value) << PMC_IDR_MOSCRCS_Pos)) /* Assigment of value for MOSCRCS in the PMC_IDR register */
#define PMC_IDR_CFDEV_Pos                     _UINT32_(18)                                         /* (PMC_IDR) Clock Failure Detector Event Interrupt Disable Position */
#define PMC_IDR_CFDEV_Msk                     (_UINT32_(0x1) << PMC_IDR_CFDEV_Pos)                 /* (PMC_IDR) Clock Failure Detector Event Interrupt Disable Mask */
#define PMC_IDR_CFDEV(value)                  (PMC_IDR_CFDEV_Msk & (_UINT32_(value) << PMC_IDR_CFDEV_Pos)) /* Assigment of value for CFDEV in the PMC_IDR register */
#define PMC_IDR_XT32KERR_Pos                  _UINT32_(21)                                         /* (PMC_IDR) 32.768 kHz Crystal Oscillator Error Interrupt Disable Position */
#define PMC_IDR_XT32KERR_Msk                  (_UINT32_(0x1) << PMC_IDR_XT32KERR_Pos)              /* (PMC_IDR) 32.768 kHz Crystal Oscillator Error Interrupt Disable Mask */
#define PMC_IDR_XT32KERR(value)               (PMC_IDR_XT32KERR_Msk & (_UINT32_(value) << PMC_IDR_XT32KERR_Pos)) /* Assigment of value for XT32KERR in the PMC_IDR register */
#define PMC_IDR_MCKMON_Pos                    _UINT32_(23)                                         /* (PMC_IDR) Master Clock 0 Clock Monitor Interrupt Disable Position */
#define PMC_IDR_MCKMON_Msk                    (_UINT32_(0x1) << PMC_IDR_MCKMON_Pos)                /* (PMC_IDR) Master Clock 0 Clock Monitor Interrupt Disable Mask */
#define PMC_IDR_MCKMON(value)                 (PMC_IDR_MCKMON_Msk & (_UINT32_(value) << PMC_IDR_MCKMON_Pos)) /* Assigment of value for MCKMON in the PMC_IDR register */
#define PMC_IDR_Msk                           _UINT32_(0x00A70F19)                                 /* (PMC_IDR) Register Mask  */

#define PMC_IDR_PCKRDY_Pos                    _UINT32_(8)                                          /* (PMC_IDR Position) Programmable Clock Ready x Interrupt DIsable */
#define PMC_IDR_PCKRDY_Msk                    (_UINT32_(0xF) << PMC_IDR_PCKRDY_Pos)                /* (PMC_IDR Mask) PCKRDY */
#define PMC_IDR_PCKRDY(value)                 (PMC_IDR_PCKRDY_Msk & (_UINT32_(value) << PMC_IDR_PCKRDY_Pos)) 

/* -------- PMC_SR : (PMC Offset: 0x6C) ( R/ 32) Status Register -------- */
#define PMC_SR_MOSCXTS_Pos                    _UINT32_(0)                                          /* (PMC_SR) Main Crystal Oscillator Status Position */
#define PMC_SR_MOSCXTS_Msk                    (_UINT32_(0x1) << PMC_SR_MOSCXTS_Pos)                /* (PMC_SR) Main Crystal Oscillator Status Mask */
#define PMC_SR_MOSCXTS(value)                 (PMC_SR_MOSCXTS_Msk & (_UINT32_(value) << PMC_SR_MOSCXTS_Pos)) /* Assigment of value for MOSCXTS in the PMC_SR register */
#define PMC_SR_MCKRDY_Pos                     _UINT32_(3)                                          /* (PMC_SR) Master Clock 0 Status Position */
#define PMC_SR_MCKRDY_Msk                     (_UINT32_(0x1) << PMC_SR_MCKRDY_Pos)                 /* (PMC_SR) Master Clock 0 Status Mask */
#define PMC_SR_MCKRDY(value)                  (PMC_SR_MCKRDY_Msk & (_UINT32_(value) << PMC_SR_MCKRDY_Pos)) /* Assigment of value for MCKRDY in the PMC_SR register */
#define PMC_SR_CPMCKRDY_Pos                   _UINT32_(4)                                          /* (PMC_SR) Coprocessor Master Clock Status Position */
#define PMC_SR_CPMCKRDY_Msk                   (_UINT32_(0x1) << PMC_SR_CPMCKRDY_Pos)               /* (PMC_SR) Coprocessor Master Clock Status Mask */
#define PMC_SR_CPMCKRDY(value)                (PMC_SR_CPMCKRDY_Msk & (_UINT32_(value) << PMC_SR_CPMCKRDY_Pos)) /* Assigment of value for CPMCKRDY in the PMC_SR register */
#define PMC_SR_OSCSELS_Pos                    _UINT32_(7)                                          /* (PMC_SR) Monitoring Domain Slow Clock Source Oscillator Selection Position */
#define PMC_SR_OSCSELS_Msk                    (_UINT32_(0x1) << PMC_SR_OSCSELS_Pos)                /* (PMC_SR) Monitoring Domain Slow Clock Source Oscillator Selection Mask */
#define PMC_SR_OSCSELS(value)                 (PMC_SR_OSCSELS_Msk & (_UINT32_(value) << PMC_SR_OSCSELS_Pos)) /* Assigment of value for OSCSELS in the PMC_SR register */
#define PMC_SR_PCKRDY0_Pos                    _UINT32_(8)                                          /* (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY0_Msk                    (_UINT32_(0x1) << PMC_SR_PCKRDY0_Pos)                /* (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY0(value)                 (PMC_SR_PCKRDY0_Msk & (_UINT32_(value) << PMC_SR_PCKRDY0_Pos)) /* Assigment of value for PCKRDY0 in the PMC_SR register */
#define PMC_SR_PCKRDY1_Pos                    _UINT32_(9)                                          /* (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY1_Msk                    (_UINT32_(0x1) << PMC_SR_PCKRDY1_Pos)                /* (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY1(value)                 (PMC_SR_PCKRDY1_Msk & (_UINT32_(value) << PMC_SR_PCKRDY1_Pos)) /* Assigment of value for PCKRDY1 in the PMC_SR register */
#define PMC_SR_PCKRDY2_Pos                    _UINT32_(10)                                         /* (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY2_Msk                    (_UINT32_(0x1) << PMC_SR_PCKRDY2_Pos)                /* (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY2(value)                 (PMC_SR_PCKRDY2_Msk & (_UINT32_(value) << PMC_SR_PCKRDY2_Pos)) /* Assigment of value for PCKRDY2 in the PMC_SR register */
#define PMC_SR_PCKRDY3_Pos                    _UINT32_(11)                                         /* (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY3_Msk                    (_UINT32_(0x1) << PMC_SR_PCKRDY3_Pos)                /* (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY3(value)                 (PMC_SR_PCKRDY3_Msk & (_UINT32_(value) << PMC_SR_PCKRDY3_Pos)) /* Assigment of value for PCKRDY3 in the PMC_SR register */
#define PMC_SR_MOSCSELS_Pos                   _UINT32_(16)                                         /* (PMC_SR) Main Clock Source Oscillator Selection Status Position */
#define PMC_SR_MOSCSELS_Msk                   (_UINT32_(0x1) << PMC_SR_MOSCSELS_Pos)               /* (PMC_SR) Main Clock Source Oscillator Selection Status Mask */
#define PMC_SR_MOSCSELS(value)                (PMC_SR_MOSCSELS_Msk & (_UINT32_(value) << PMC_SR_MOSCSELS_Pos)) /* Assigment of value for MOSCSELS in the PMC_SR register */
#define PMC_SR_MOSCRCS_Pos                    _UINT32_(17)                                         /* (PMC_SR) Main RC Oscillator Status Position */
#define PMC_SR_MOSCRCS_Msk                    (_UINT32_(0x1) << PMC_SR_MOSCRCS_Pos)                /* (PMC_SR) Main RC Oscillator Status Mask */
#define PMC_SR_MOSCRCS(value)                 (PMC_SR_MOSCRCS_Msk & (_UINT32_(value) << PMC_SR_MOSCRCS_Pos)) /* Assigment of value for MOSCRCS in the PMC_SR register */
#define PMC_SR_CFDEV_Pos                      _UINT32_(18)                                         /* (PMC_SR) Clock Failure Detector Event Position */
#define PMC_SR_CFDEV_Msk                      (_UINT32_(0x1) << PMC_SR_CFDEV_Pos)                  /* (PMC_SR) Clock Failure Detector Event Mask */
#define PMC_SR_CFDEV(value)                   (PMC_SR_CFDEV_Msk & (_UINT32_(value) << PMC_SR_CFDEV_Pos)) /* Assigment of value for CFDEV in the PMC_SR register */
#define PMC_SR_CFDS_Pos                       _UINT32_(19)                                         /* (PMC_SR) Clock Failure Detector Status Position */
#define PMC_SR_CFDS_Msk                       (_UINT32_(0x1) << PMC_SR_CFDS_Pos)                   /* (PMC_SR) Clock Failure Detector Status Mask */
#define PMC_SR_CFDS(value)                    (PMC_SR_CFDS_Msk & (_UINT32_(value) << PMC_SR_CFDS_Pos)) /* Assigment of value for CFDS in the PMC_SR register */
#define PMC_SR_FOS_Pos                        _UINT32_(20)                                         /* (PMC_SR) Clock Failure Detector Fault Output Status Position */
#define PMC_SR_FOS_Msk                        (_UINT32_(0x1) << PMC_SR_FOS_Pos)                    /* (PMC_SR) Clock Failure Detector Fault Output Status Mask */
#define PMC_SR_FOS(value)                     (PMC_SR_FOS_Msk & (_UINT32_(value) << PMC_SR_FOS_Pos)) /* Assigment of value for FOS in the PMC_SR register */
#define PMC_SR_XT32KERR_Pos                   _UINT32_(21)                                         /* (PMC_SR) Slow Crystal Oscillator Error Position */
#define PMC_SR_XT32KERR_Msk                   (_UINT32_(0x1) << PMC_SR_XT32KERR_Pos)               /* (PMC_SR) Slow Crystal Oscillator Error Mask */
#define PMC_SR_XT32KERR(value)                (PMC_SR_XT32KERR_Msk & (_UINT32_(value) << PMC_SR_XT32KERR_Pos)) /* Assigment of value for XT32KERR in the PMC_SR register */
#define PMC_SR_MCKMON_Pos                     _UINT32_(23)                                         /* (PMC_SR) Master Clock 0 Clock Monitor Error Position */
#define PMC_SR_MCKMON_Msk                     (_UINT32_(0x1) << PMC_SR_MCKMON_Pos)                 /* (PMC_SR) Master Clock 0 Clock Monitor Error Mask */
#define PMC_SR_MCKMON(value)                  (PMC_SR_MCKMON_Msk & (_UINT32_(value) << PMC_SR_MCKMON_Pos)) /* Assigment of value for MCKMON in the PMC_SR register */
#define PMC_SR_GCLKRDY_Pos                    _UINT32_(24)                                         /* (PMC_SR) GCLK Ready Position */
#define PMC_SR_GCLKRDY_Msk                    (_UINT32_(0x1) << PMC_SR_GCLKRDY_Pos)                /* (PMC_SR) GCLK Ready Mask */
#define PMC_SR_GCLKRDY(value)                 (PMC_SR_GCLKRDY_Msk & (_UINT32_(value) << PMC_SR_GCLKRDY_Pos)) /* Assigment of value for GCLKRDY in the PMC_SR register */
#define PMC_SR_PLL_INT_Pos                    _UINT32_(25)                                         /* (PMC_SR) PLL Interrupt Status Position */
#define PMC_SR_PLL_INT_Msk                    (_UINT32_(0x1) << PMC_SR_PLL_INT_Pos)                /* (PMC_SR) PLL Interrupt Status Mask */
#define PMC_SR_PLL_INT(value)                 (PMC_SR_PLL_INT_Msk & (_UINT32_(value) << PMC_SR_PLL_INT_Pos)) /* Assigment of value for PLL_INT in the PMC_SR register */
#define PMC_SR_Msk                            _UINT32_(0x03BF0F99)                                 /* (PMC_SR) Register Mask  */

#define PMC_SR_PCKRDY_Pos                     _UINT32_(8)                                          /* (PMC_SR Position) Programmable Clock Ready Status */
#define PMC_SR_PCKRDY_Msk                     (_UINT32_(0xF) << PMC_SR_PCKRDY_Pos)                 /* (PMC_SR Mask) PCKRDY */
#define PMC_SR_PCKRDY(value)                  (PMC_SR_PCKRDY_Msk & (_UINT32_(value) << PMC_SR_PCKRDY_Pos)) 

/* -------- PMC_IMR : (PMC Offset: 0x70) ( R/ 32) Interrupt Mask Register -------- */
#define PMC_IMR_MOSCXTS_Pos                   _UINT32_(0)                                          /* (PMC_IMR) Main Crystal Oscillator Status Interrupt Mask Position */
#define PMC_IMR_MOSCXTS_Msk                   (_UINT32_(0x1) << PMC_IMR_MOSCXTS_Pos)               /* (PMC_IMR) Main Crystal Oscillator Status Interrupt Mask Mask */
#define PMC_IMR_MOSCXTS(value)                (PMC_IMR_MOSCXTS_Msk & (_UINT32_(value) << PMC_IMR_MOSCXTS_Pos)) /* Assigment of value for MOSCXTS in the PMC_IMR register */
#define PMC_IMR_MCKRDY_Pos                    _UINT32_(3)                                          /* (PMC_IMR) Master Clock 0 Ready Interrupt Mask Position */
#define PMC_IMR_MCKRDY_Msk                    (_UINT32_(0x1) << PMC_IMR_MCKRDY_Pos)                /* (PMC_IMR) Master Clock 0 Ready Interrupt Mask Mask */
#define PMC_IMR_MCKRDY(value)                 (PMC_IMR_MCKRDY_Msk & (_UINT32_(value) << PMC_IMR_MCKRDY_Pos)) /* Assigment of value for MCKRDY in the PMC_IMR register */
#define PMC_IMR_CPMCKRDY_Pos                  _UINT32_(4)                                          /* (PMC_IMR) Coprocessor Master Clock Ready Interrupt Mask Position */
#define PMC_IMR_CPMCKRDY_Msk                  (_UINT32_(0x1) << PMC_IMR_CPMCKRDY_Pos)              /* (PMC_IMR) Coprocessor Master Clock Ready Interrupt Mask Mask */
#define PMC_IMR_CPMCKRDY(value)               (PMC_IMR_CPMCKRDY_Msk & (_UINT32_(value) << PMC_IMR_CPMCKRDY_Pos)) /* Assigment of value for CPMCKRDY in the PMC_IMR register */
#define PMC_IMR_PCKRDY0_Pos                   _UINT32_(8)                                          /* (PMC_IMR) Programmable Clock Ready 0 Interrupt Mask Position */
#define PMC_IMR_PCKRDY0_Msk                   (_UINT32_(0x1) << PMC_IMR_PCKRDY0_Pos)               /* (PMC_IMR) Programmable Clock Ready 0 Interrupt Mask Mask */
#define PMC_IMR_PCKRDY0(value)                (PMC_IMR_PCKRDY0_Msk & (_UINT32_(value) << PMC_IMR_PCKRDY0_Pos)) /* Assigment of value for PCKRDY0 in the PMC_IMR register */
#define PMC_IMR_PCKRDY1_Pos                   _UINT32_(9)                                          /* (PMC_IMR) Programmable Clock Ready 1 Interrupt Mask Position */
#define PMC_IMR_PCKRDY1_Msk                   (_UINT32_(0x1) << PMC_IMR_PCKRDY1_Pos)               /* (PMC_IMR) Programmable Clock Ready 1 Interrupt Mask Mask */
#define PMC_IMR_PCKRDY1(value)                (PMC_IMR_PCKRDY1_Msk & (_UINT32_(value) << PMC_IMR_PCKRDY1_Pos)) /* Assigment of value for PCKRDY1 in the PMC_IMR register */
#define PMC_IMR_PCKRDY2_Pos                   _UINT32_(10)                                         /* (PMC_IMR) Programmable Clock Ready 2 Interrupt Mask Position */
#define PMC_IMR_PCKRDY2_Msk                   (_UINT32_(0x1) << PMC_IMR_PCKRDY2_Pos)               /* (PMC_IMR) Programmable Clock Ready 2 Interrupt Mask Mask */
#define PMC_IMR_PCKRDY2(value)                (PMC_IMR_PCKRDY2_Msk & (_UINT32_(value) << PMC_IMR_PCKRDY2_Pos)) /* Assigment of value for PCKRDY2 in the PMC_IMR register */
#define PMC_IMR_PCKRDY3_Pos                   _UINT32_(11)                                         /* (PMC_IMR) Programmable Clock Ready 3 Interrupt Mask Position */
#define PMC_IMR_PCKRDY3_Msk                   (_UINT32_(0x1) << PMC_IMR_PCKRDY3_Pos)               /* (PMC_IMR) Programmable Clock Ready 3 Interrupt Mask Mask */
#define PMC_IMR_PCKRDY3(value)                (PMC_IMR_PCKRDY3_Msk & (_UINT32_(value) << PMC_IMR_PCKRDY3_Pos)) /* Assigment of value for PCKRDY3 in the PMC_IMR register */
#define PMC_IMR_MOSCSELS_Pos                  _UINT32_(16)                                         /* (PMC_IMR) Main Clock Source Oscillator Selection Status Interrupt Mask Position */
#define PMC_IMR_MOSCSELS_Msk                  (_UINT32_(0x1) << PMC_IMR_MOSCSELS_Pos)              /* (PMC_IMR) Main Clock Source Oscillator Selection Status Interrupt Mask Mask */
#define PMC_IMR_MOSCSELS(value)               (PMC_IMR_MOSCSELS_Msk & (_UINT32_(value) << PMC_IMR_MOSCSELS_Pos)) /* Assigment of value for MOSCSELS in the PMC_IMR register */
#define PMC_IMR_MOSCRCS_Pos                   _UINT32_(17)                                         /* (PMC_IMR) Main RC Status Interrupt Mask Position */
#define PMC_IMR_MOSCRCS_Msk                   (_UINT32_(0x1) << PMC_IMR_MOSCRCS_Pos)               /* (PMC_IMR) Main RC Status Interrupt Mask Mask */
#define PMC_IMR_MOSCRCS(value)                (PMC_IMR_MOSCRCS_Msk & (_UINT32_(value) << PMC_IMR_MOSCRCS_Pos)) /* Assigment of value for MOSCRCS in the PMC_IMR register */
#define PMC_IMR_CFDEV_Pos                     _UINT32_(18)                                         /* (PMC_IMR) Clock Failure Detector Event Interrupt Mask Position */
#define PMC_IMR_CFDEV_Msk                     (_UINT32_(0x1) << PMC_IMR_CFDEV_Pos)                 /* (PMC_IMR) Clock Failure Detector Event Interrupt Mask Mask */
#define PMC_IMR_CFDEV(value)                  (PMC_IMR_CFDEV_Msk & (_UINT32_(value) << PMC_IMR_CFDEV_Pos)) /* Assigment of value for CFDEV in the PMC_IMR register */
#define PMC_IMR_XT32KERR_Pos                  _UINT32_(21)                                         /* (PMC_IMR) 32.768 kHz Crystal Oscillator Error Interrupt Mask Position */
#define PMC_IMR_XT32KERR_Msk                  (_UINT32_(0x1) << PMC_IMR_XT32KERR_Pos)              /* (PMC_IMR) 32.768 kHz Crystal Oscillator Error Interrupt Mask Mask */
#define PMC_IMR_XT32KERR(value)               (PMC_IMR_XT32KERR_Msk & (_UINT32_(value) << PMC_IMR_XT32KERR_Pos)) /* Assigment of value for XT32KERR in the PMC_IMR register */
#define PMC_IMR_MCKMON_Pos                    _UINT32_(23)                                         /* (PMC_IMR) Master Clock 0 Monitor Error Interrupt Mask Position */
#define PMC_IMR_MCKMON_Msk                    (_UINT32_(0x1) << PMC_IMR_MCKMON_Pos)                /* (PMC_IMR) Master Clock 0 Monitor Error Interrupt Mask Mask */
#define PMC_IMR_MCKMON(value)                 (PMC_IMR_MCKMON_Msk & (_UINT32_(value) << PMC_IMR_MCKMON_Pos)) /* Assigment of value for MCKMON in the PMC_IMR register */
#define PMC_IMR_Msk                           _UINT32_(0x00A70F19)                                 /* (PMC_IMR) Register Mask  */

#define PMC_IMR_PCKRDY_Pos                    _UINT32_(8)                                          /* (PMC_IMR Position) Programmable Clock Ready x Interrupt Mask */
#define PMC_IMR_PCKRDY_Msk                    (_UINT32_(0xF) << PMC_IMR_PCKRDY_Pos)                /* (PMC_IMR Mask) PCKRDY */
#define PMC_IMR_PCKRDY(value)                 (PMC_IMR_PCKRDY_Msk & (_UINT32_(value) << PMC_IMR_PCKRDY_Pos)) 

/* -------- PMC_FSMR : (PMC Offset: 0x74) (R/W 32) Fast Start-up Mode Register -------- */
#define PMC_FSMR_RTTAL_Pos                    _UINT32_(16)                                         /* (PMC_FSMR) RTT Alarm Enable Position */
#define PMC_FSMR_RTTAL_Msk                    (_UINT32_(0x1) << PMC_FSMR_RTTAL_Pos)                /* (PMC_FSMR) RTT Alarm Enable Mask */
#define PMC_FSMR_RTTAL(value)                 (PMC_FSMR_RTTAL_Msk & (_UINT32_(value) << PMC_FSMR_RTTAL_Pos)) /* Assigment of value for RTTAL in the PMC_FSMR register */
#define PMC_FSMR_RTCAL_Pos                    _UINT32_(17)                                         /* (PMC_FSMR) RTC Alarm Enable Position */
#define PMC_FSMR_RTCAL_Msk                    (_UINT32_(0x1) << PMC_FSMR_RTCAL_Pos)                /* (PMC_FSMR) RTC Alarm Enable Mask */
#define PMC_FSMR_RTCAL(value)                 (PMC_FSMR_RTCAL_Msk & (_UINT32_(value) << PMC_FSMR_RTCAL_Pos)) /* Assigment of value for RTCAL in the PMC_FSMR register */
#define PMC_FSMR_XTFA_Pos                     _UINT32_(18)                                         /* (PMC_FSMR) 32KHz Crystal Failure Alarm Enable Position */
#define PMC_FSMR_XTFA_Msk                     (_UINT32_(0x1) << PMC_FSMR_XTFA_Pos)                 /* (PMC_FSMR) 32KHz Crystal Failure Alarm Enable Mask */
#define PMC_FSMR_XTFA(value)                  (PMC_FSMR_XTFA_Msk & (_UINT32_(value) << PMC_FSMR_XTFA_Pos)) /* Assigment of value for XTFA in the PMC_FSMR register */
#define PMC_FSMR_SMAL_Pos                     _UINT32_(19)                                         /* (PMC_FSMR) Supply Monitor Alarm Enable Position */
#define PMC_FSMR_SMAL_Msk                     (_UINT32_(0x1) << PMC_FSMR_SMAL_Pos)                 /* (PMC_FSMR) Supply Monitor Alarm Enable Mask */
#define PMC_FSMR_SMAL(value)                  (PMC_FSMR_SMAL_Msk & (_UINT32_(value) << PMC_FSMR_SMAL_Pos)) /* Assigment of value for SMAL in the PMC_FSMR register */
#define PMC_FSMR_LPM_Pos                      _UINT32_(20)                                         /* (PMC_FSMR) Low Power Mode Position */
#define PMC_FSMR_LPM_Msk                      (_UINT32_(0x1) << PMC_FSMR_LPM_Pos)                  /* (PMC_FSMR) Low Power Mode Mask */
#define PMC_FSMR_LPM(value)                   (PMC_FSMR_LPM_Msk & (_UINT32_(value) << PMC_FSMR_LPM_Pos)) /* Assigment of value for LPM in the PMC_FSMR register */
#define PMC_FSMR_FLPM_Pos                     _UINT32_(21)                                         /* (PMC_FSMR) Flash Low-power Mode Position */
#define PMC_FSMR_FLPM_Msk                     (_UINT32_(0x3) << PMC_FSMR_FLPM_Pos)                 /* (PMC_FSMR) Flash Low-power Mode Mask */
#define PMC_FSMR_FLPM(value)                  (PMC_FSMR_FLPM_Msk & (_UINT32_(value) << PMC_FSMR_FLPM_Pos)) /* Assigment of value for FLPM in the PMC_FSMR register */
#define   PMC_FSMR_FLPM_FLASH_STANDBY_Val     _UINT32_(0x0)                                        /* (PMC_FSMR) Flash is in Standby Mode when system enters Wait Mode  */
#define   PMC_FSMR_FLPM_FLASH_DEEP_POWERDOWN_Val _UINT32_(0x1)                                        /* (PMC_FSMR) Flash is in Deep-powerdown mode when system enters Wait Mode  */
#define   PMC_FSMR_FLPM_FLASH_IDLE_Val        _UINT32_(0x2)                                        /* (PMC_FSMR) Idle mode  */
#define PMC_FSMR_FLPM_FLASH_STANDBY           (PMC_FSMR_FLPM_FLASH_STANDBY_Val << PMC_FSMR_FLPM_Pos) /* (PMC_FSMR) Flash is in Standby Mode when system enters Wait Mode Position  */
#define PMC_FSMR_FLPM_FLASH_DEEP_POWERDOWN    (PMC_FSMR_FLPM_FLASH_DEEP_POWERDOWN_Val << PMC_FSMR_FLPM_Pos) /* (PMC_FSMR) Flash is in Deep-powerdown mode when system enters Wait Mode Position  */
#define PMC_FSMR_FLPM_FLASH_IDLE              (PMC_FSMR_FLPM_FLASH_IDLE_Val << PMC_FSMR_FLPM_Pos)  /* (PMC_FSMR) Idle mode Position  */
#define PMC_FSMR_FFLPM_Pos                    _UINT32_(23)                                         /* (PMC_FSMR) Force Flash Low-power Mode Position */
#define PMC_FSMR_FFLPM_Msk                    (_UINT32_(0x1) << PMC_FSMR_FFLPM_Pos)                /* (PMC_FSMR) Force Flash Low-power Mode Mask */
#define PMC_FSMR_FFLPM(value)                 (PMC_FSMR_FFLPM_Msk & (_UINT32_(value) << PMC_FSMR_FFLPM_Pos)) /* Assigment of value for FFLPM in the PMC_FSMR register */
#define PMC_FSMR_Msk                          _UINT32_(0x00FF0000)                                 /* (PMC_FSMR) Register Mask  */


/* -------- PMC_WCR : (PMC Offset: 0x78) (R/W 32) Wake-up Control Register -------- */
#define PMC_WCR_WKPIONB_Pos                   _UINT32_(0)                                          /* (PMC_WCR) Wake-up Input Number Position */
#define PMC_WCR_WKPIONB_Msk                   (_UINT32_(0xF) << PMC_WCR_WKPIONB_Pos)               /* (PMC_WCR) Wake-up Input Number Mask */
#define PMC_WCR_WKPIONB(value)                (PMC_WCR_WKPIONB_Msk & (_UINT32_(value) << PMC_WCR_WKPIONB_Pos)) /* Assigment of value for WKPIONB in the PMC_WCR register */
#define PMC_WCR_EN_Pos                        _UINT32_(16)                                         /* (PMC_WCR) Wake-up Input Enable Position */
#define PMC_WCR_EN_Msk                        (_UINT32_(0x1) << PMC_WCR_EN_Pos)                    /* (PMC_WCR) Wake-up Input Enable Mask */
#define PMC_WCR_EN(value)                     (PMC_WCR_EN_Msk & (_UINT32_(value) << PMC_WCR_EN_Pos)) /* Assigment of value for EN in the PMC_WCR register */
#define PMC_WCR_WIP_Pos                       _UINT32_(17)                                         /* (PMC_WCR) Wake-up Input Polarity Position */
#define PMC_WCR_WIP_Msk                       (_UINT32_(0x1) << PMC_WCR_WIP_Pos)                   /* (PMC_WCR) Wake-up Input Polarity Mask */
#define PMC_WCR_WIP(value)                    (PMC_WCR_WIP_Msk & (_UINT32_(value) << PMC_WCR_WIP_Pos)) /* Assigment of value for WIP in the PMC_WCR register */
#define PMC_WCR_WIEN1_Pos                     _UINT32_(20)                                         /* (PMC_WCR) Wake-up Input Enable 1 Position */
#define PMC_WCR_WIEN1_Msk                     (_UINT32_(0x1) << PMC_WCR_WIEN1_Pos)                 /* (PMC_WCR) Wake-up Input Enable 1 Mask */
#define PMC_WCR_WIEN1(value)                  (PMC_WCR_WIEN1_Msk & (_UINT32_(value) << PMC_WCR_WIEN1_Pos)) /* Assigment of value for WIEN1 in the PMC_WCR register */
#define PMC_WCR_CMD_Pos                       _UINT32_(24)                                         /* (PMC_WCR) Command Position */
#define PMC_WCR_CMD_Msk                       (_UINT32_(0x1) << PMC_WCR_CMD_Pos)                   /* (PMC_WCR) Command Mask */
#define PMC_WCR_CMD(value)                    (PMC_WCR_CMD_Msk & (_UINT32_(value) << PMC_WCR_CMD_Pos)) /* Assigment of value for CMD in the PMC_WCR register */
#define PMC_WCR_Msk                           _UINT32_(0x0113000F)                                 /* (PMC_WCR) Register Mask  */

#define PMC_WCR_WIEN_Pos                      _UINT32_(20)                                         /* (PMC_WCR Position) Wake-up Input Enable x */
#define PMC_WCR_WIEN_Msk                      (_UINT32_(0x1) << PMC_WCR_WIEN_Pos)                  /* (PMC_WCR Mask) WIEN */
#define PMC_WCR_WIEN(value)                   (PMC_WCR_WIEN_Msk & (_UINT32_(value) << PMC_WCR_WIEN_Pos)) 

/* -------- PMC_FOCR : (PMC Offset: 0x7C) ( /W 32) Fault Output Clear Register -------- */
#define PMC_FOCR_FOCLR_Pos                    _UINT32_(0)                                          /* (PMC_FOCR) Fault Output Clear Position */
#define PMC_FOCR_FOCLR_Msk                    (_UINT32_(0x1) << PMC_FOCR_FOCLR_Pos)                /* (PMC_FOCR) Fault Output Clear Mask */
#define PMC_FOCR_FOCLR(value)                 (PMC_FOCR_FOCLR_Msk & (_UINT32_(value) << PMC_FOCR_FOCLR_Pos)) /* Assigment of value for FOCLR in the PMC_FOCR register */
#define PMC_FOCR_Msk                          _UINT32_(0x00000001)                                 /* (PMC_FOCR) Register Mask  */


/* -------- PMC_CPFSMR : (PMC Offset: 0x80) (R/W 32) Coprocessor Fast Start-up Mode Register -------- */
#define PMC_CPFSMR_RTTAL_Pos                  _UINT32_(16)                                         /* (PMC_CPFSMR) RTT Alarm Enable Position */
#define PMC_CPFSMR_RTTAL_Msk                  (_UINT32_(0x1) << PMC_CPFSMR_RTTAL_Pos)              /* (PMC_CPFSMR) RTT Alarm Enable Mask */
#define PMC_CPFSMR_RTTAL(value)               (PMC_CPFSMR_RTTAL_Msk & (_UINT32_(value) << PMC_CPFSMR_RTTAL_Pos)) /* Assigment of value for RTTAL in the PMC_CPFSMR register */
#define PMC_CPFSMR_RTCAL_Pos                  _UINT32_(17)                                         /* (PMC_CPFSMR) RTC Alarm Enable Position */
#define PMC_CPFSMR_RTCAL_Msk                  (_UINT32_(0x1) << PMC_CPFSMR_RTCAL_Pos)              /* (PMC_CPFSMR) RTC Alarm Enable Mask */
#define PMC_CPFSMR_RTCAL(value)               (PMC_CPFSMR_RTCAL_Msk & (_UINT32_(value) << PMC_CPFSMR_RTCAL_Pos)) /* Assigment of value for RTCAL in the PMC_CPFSMR register */
#define PMC_CPFSMR_XTFA_Pos                   _UINT32_(18)                                         /* (PMC_CPFSMR) 32KHz Crystal Failure Alarm Enable Position */
#define PMC_CPFSMR_XTFA_Msk                   (_UINT32_(0x1) << PMC_CPFSMR_XTFA_Pos)               /* (PMC_CPFSMR) 32KHz Crystal Failure Alarm Enable Mask */
#define PMC_CPFSMR_XTFA(value)                (PMC_CPFSMR_XTFA_Msk & (_UINT32_(value) << PMC_CPFSMR_XTFA_Pos)) /* Assigment of value for XTFA in the PMC_CPFSMR register */
#define PMC_CPFSMR_SMAL_Pos                   _UINT32_(19)                                         /* (PMC_CPFSMR) Supply Monitor Alarm Enable Position */
#define PMC_CPFSMR_SMAL_Msk                   (_UINT32_(0x1) << PMC_CPFSMR_SMAL_Pos)               /* (PMC_CPFSMR) Supply Monitor Alarm Enable Mask */
#define PMC_CPFSMR_SMAL(value)                (PMC_CPFSMR_SMAL_Msk & (_UINT32_(value) << PMC_CPFSMR_SMAL_Pos)) /* Assigment of value for SMAL in the PMC_CPFSMR register */
#define PMC_CPFSMR_Msk                        _UINT32_(0x000F0000)                                 /* (PMC_CPFSMR) Register Mask  */


/* -------- PMC_WPMR : (PMC Offset: 0x84) (R/W 32) Write Protection Mode Register -------- */
#define PMC_WPMR_WPEN_Pos                     _UINT32_(0)                                          /* (PMC_WPMR) Write Protection Enable Position */
#define PMC_WPMR_WPEN_Msk                     (_UINT32_(0x1) << PMC_WPMR_WPEN_Pos)                 /* (PMC_WPMR) Write Protection Enable Mask */
#define PMC_WPMR_WPEN(value)                  (PMC_WPMR_WPEN_Msk & (_UINT32_(value) << PMC_WPMR_WPEN_Pos)) /* Assigment of value for WPEN in the PMC_WPMR register */
#define PMC_WPMR_WPITEN_Pos                   _UINT32_(1)                                          /* (PMC_WPMR) Write Protection Interrupt Enable Position */
#define PMC_WPMR_WPITEN_Msk                   (_UINT32_(0x1) << PMC_WPMR_WPITEN_Pos)               /* (PMC_WPMR) Write Protection Interrupt Enable Mask */
#define PMC_WPMR_WPITEN(value)                (PMC_WPMR_WPITEN_Msk & (_UINT32_(value) << PMC_WPMR_WPITEN_Pos)) /* Assigment of value for WPITEN in the PMC_WPMR register */
#define PMC_WPMR_WPKEY_Pos                    _UINT32_(8)                                          /* (PMC_WPMR) Write Protection Key Position */
#define PMC_WPMR_WPKEY_Msk                    (_UINT32_(0xFFFFFF) << PMC_WPMR_WPKEY_Pos)           /* (PMC_WPMR) Write Protection Key Mask */
#define PMC_WPMR_WPKEY(value)                 (PMC_WPMR_WPKEY_Msk & (_UINT32_(value) << PMC_WPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the PMC_WPMR register */
#define   PMC_WPMR_WPKEY_PASSWD_Val           _UINT32_(0x504D43)                                   /* (PMC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0.  */
#define PMC_WPMR_WPKEY_PASSWD                 (PMC_WPMR_WPKEY_PASSWD_Val << PMC_WPMR_WPKEY_Pos)    /* (PMC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0. Position  */
#define PMC_WPMR_Msk                          _UINT32_(0xFFFFFF03)                                 /* (PMC_WPMR) Register Mask  */


/* -------- PMC_WPSR : (PMC Offset: 0x88) ( R/ 32) Write Protection Status Register -------- */
#define PMC_WPSR_WPVS_Pos                     _UINT32_(0)                                          /* (PMC_WPSR) Write Protection Violation Status Position */
#define PMC_WPSR_WPVS_Msk                     (_UINT32_(0x1) << PMC_WPSR_WPVS_Pos)                 /* (PMC_WPSR) Write Protection Violation Status Mask */
#define PMC_WPSR_WPVS(value)                  (PMC_WPSR_WPVS_Msk & (_UINT32_(value) << PMC_WPSR_WPVS_Pos)) /* Assigment of value for WPVS in the PMC_WPSR register */
#define PMC_WPSR_WPVSRC_Pos                   _UINT32_(8)                                          /* (PMC_WPSR) Write Protection Violation Source Position */
#define PMC_WPSR_WPVSRC_Msk                   (_UINT32_(0xFFFF) << PMC_WPSR_WPVSRC_Pos)            /* (PMC_WPSR) Write Protection Violation Source Mask */
#define PMC_WPSR_WPVSRC(value)                (PMC_WPSR_WPVSRC_Msk & (_UINT32_(value) << PMC_WPSR_WPVSRC_Pos)) /* Assigment of value for WPVSRC in the PMC_WPSR register */
#define PMC_WPSR_Msk                          _UINT32_(0x00FFFF01)                                 /* (PMC_WPSR) Register Mask  */


/* -------- PMC_PCR : (PMC Offset: 0x8C) (R/W 32) Peripheral Control Register -------- */
#define PMC_PCR_PID_Pos                       _UINT32_(0)                                          /* (PMC_PCR) Peripheral ID Position */
#define PMC_PCR_PID_Msk                       (_UINT32_(0x7F) << PMC_PCR_PID_Pos)                  /* (PMC_PCR) Peripheral ID Mask */
#define PMC_PCR_PID(value)                    (PMC_PCR_PID_Msk & (_UINT32_(value) << PMC_PCR_PID_Pos)) /* Assigment of value for PID in the PMC_PCR register */
#define PMC_PCR_GCLKCSS_Pos                   _UINT32_(8)                                          /* (PMC_PCR) Generic Clock Source Selection Position */
#define PMC_PCR_GCLKCSS_Msk                   (_UINT32_(0x1F) << PMC_PCR_GCLKCSS_Pos)              /* (PMC_PCR) Generic Clock Source Selection Mask */
#define PMC_PCR_GCLKCSS(value)                (PMC_PCR_GCLKCSS_Msk & (_UINT32_(value) << PMC_PCR_GCLKCSS_Pos)) /* Assigment of value for GCLKCSS in the PMC_PCR register */
#define   PMC_PCR_GCLKCSS_MD_SLOW_CLK_Val     _UINT32_(0x0)                                        /* (PMC_PCR) MD_SLCK is selected  */
#define   PMC_PCR_GCLKCSS_TD_SLOW_CLOCK_Val   _UINT32_(0x1)                                        /* (PMC_PCR) TD_SLCK is selected  */
#define   PMC_PCR_GCLKCSS_MAINCK_Val          _UINT32_(0x2)                                        /* (PMC_PCR) MAINCK is selected  */
#define   PMC_PCR_GCLKCSS_MCK0_Val            _UINT32_(0x3)                                        /* (PMC_PCR) MCK0 is selected  */
#define   PMC_PCR_GCLKCSS_PLLACK1_Val         _UINT32_(0x4)                                        /* (PMC_PCR) PLLACK1 is selected.  */
#define   PMC_PCR_GCLKCSS_PLLBCK_Val          _UINT32_(0x5)                                        /* (PMC_PCR) PLLBCK is selected.  */
#define   PMC_PCR_GCLKCSS_PLLCCK_Val          _UINT32_(0x6)                                        /* (PMC_PCR) PLLCCK is selected.  */
#define   PMC_PCR_GCLKCSS_PLLCSRC_Val         _UINT32_(0x7)                                        /* (PMC_PCR) PLLCSRC is selected.  */
#define PMC_PCR_GCLKCSS_MD_SLOW_CLK           (PMC_PCR_GCLKCSS_MD_SLOW_CLK_Val << PMC_PCR_GCLKCSS_Pos) /* (PMC_PCR) MD_SLCK is selected Position  */
#define PMC_PCR_GCLKCSS_TD_SLOW_CLOCK         (PMC_PCR_GCLKCSS_TD_SLOW_CLOCK_Val << PMC_PCR_GCLKCSS_Pos) /* (PMC_PCR) TD_SLCK is selected Position  */
#define PMC_PCR_GCLKCSS_MAINCK                (PMC_PCR_GCLKCSS_MAINCK_Val << PMC_PCR_GCLKCSS_Pos)  /* (PMC_PCR) MAINCK is selected Position  */
#define PMC_PCR_GCLKCSS_MCK0                  (PMC_PCR_GCLKCSS_MCK0_Val << PMC_PCR_GCLKCSS_Pos)    /* (PMC_PCR) MCK0 is selected Position  */
#define PMC_PCR_GCLKCSS_PLLACK1               (PMC_PCR_GCLKCSS_PLLACK1_Val << PMC_PCR_GCLKCSS_Pos) /* (PMC_PCR) PLLACK1 is selected. Position  */
#define PMC_PCR_GCLKCSS_PLLBCK                (PMC_PCR_GCLKCSS_PLLBCK_Val << PMC_PCR_GCLKCSS_Pos)  /* (PMC_PCR) PLLBCK is selected. Position  */
#define PMC_PCR_GCLKCSS_PLLCCK                (PMC_PCR_GCLKCSS_PLLCCK_Val << PMC_PCR_GCLKCSS_Pos)  /* (PMC_PCR) PLLCCK is selected. Position  */
#define PMC_PCR_GCLKCSS_PLLCSRC               (PMC_PCR_GCLKCSS_PLLCSRC_Val << PMC_PCR_GCLKCSS_Pos) /* (PMC_PCR) PLLCSRC is selected. Position  */
#define PMC_PCR_MCKID_Pos                     _UINT32_(16)                                         /* (PMC_PCR) Master Clock Index (Read-only) Position */
#define PMC_PCR_MCKID_Msk                     (_UINT32_(0xF) << PMC_PCR_MCKID_Pos)                 /* (PMC_PCR) Master Clock Index (Read-only) Mask */
#define PMC_PCR_MCKID(value)                  (PMC_PCR_MCKID_Msk & (_UINT32_(value) << PMC_PCR_MCKID_Pos)) /* Assigment of value for MCKID in the PMC_PCR register */
#define PMC_PCR_GCLKDIV_Pos                   _UINT32_(20)                                         /* (PMC_PCR) Generic Clock Division Ratio Position */
#define PMC_PCR_GCLKDIV_Msk                   (_UINT32_(0xFF) << PMC_PCR_GCLKDIV_Pos)              /* (PMC_PCR) Generic Clock Division Ratio Mask */
#define PMC_PCR_GCLKDIV(value)                (PMC_PCR_GCLKDIV_Msk & (_UINT32_(value) << PMC_PCR_GCLKDIV_Pos)) /* Assigment of value for GCLKDIV in the PMC_PCR register */
#define PMC_PCR_EN_Pos                        _UINT32_(28)                                         /* (PMC_PCR) Enable Position */
#define PMC_PCR_EN_Msk                        (_UINT32_(0x1) << PMC_PCR_EN_Pos)                    /* (PMC_PCR) Enable Mask */
#define PMC_PCR_EN(value)                     (PMC_PCR_EN_Msk & (_UINT32_(value) << PMC_PCR_EN_Pos)) /* Assigment of value for EN in the PMC_PCR register */
#define PMC_PCR_GCLKEN_Pos                    _UINT32_(29)                                         /* (PMC_PCR) Generic Clock Enable Position */
#define PMC_PCR_GCLKEN_Msk                    (_UINT32_(0x1) << PMC_PCR_GCLKEN_Pos)                /* (PMC_PCR) Generic Clock Enable Mask */
#define PMC_PCR_GCLKEN(value)                 (PMC_PCR_GCLKEN_Msk & (_UINT32_(value) << PMC_PCR_GCLKEN_Pos)) /* Assigment of value for GCLKEN in the PMC_PCR register */
#define PMC_PCR_CMD_Pos                       _UINT32_(31)                                         /* (PMC_PCR) Command Position */
#define PMC_PCR_CMD_Msk                       (_UINT32_(0x1) << PMC_PCR_CMD_Pos)                   /* (PMC_PCR) Command Mask */
#define PMC_PCR_CMD(value)                    (PMC_PCR_CMD_Msk & (_UINT32_(value) << PMC_PCR_CMD_Pos)) /* Assigment of value for CMD in the PMC_PCR register */
#define PMC_PCR_Msk                           _UINT32_(0xBFFF1F7F)                                 /* (PMC_PCR) Register Mask  */


/* -------- PMC_OCR : (PMC Offset: 0x90) (R/W 32) Oscillator Calibration Register -------- */
#define PMC_OCR_CAL12_Pos                     _UINT32_(16)                                         /* (PMC_OCR) Main RC Oscillator Calibration Bits Position */
#define PMC_OCR_CAL12_Msk                     (_UINT32_(0x7F) << PMC_OCR_CAL12_Pos)                /* (PMC_OCR) Main RC Oscillator Calibration Bits Mask */
#define PMC_OCR_CAL12(value)                  (PMC_OCR_CAL12_Msk & (_UINT32_(value) << PMC_OCR_CAL12_Pos)) /* Assigment of value for CAL12 in the PMC_OCR register */
#define PMC_OCR_SEL12_Pos                     _UINT32_(23)                                         /* (PMC_OCR) Selection of Main RC Oscillator Calibration Bits Position */
#define PMC_OCR_SEL12_Msk                     (_UINT32_(0x1) << PMC_OCR_SEL12_Pos)                 /* (PMC_OCR) Selection of Main RC Oscillator Calibration Bits Mask */
#define PMC_OCR_SEL12(value)                  (PMC_OCR_SEL12_Msk & (_UINT32_(value) << PMC_OCR_SEL12_Pos)) /* Assigment of value for SEL12 in the PMC_OCR register */
#define PMC_OCR_Msk                           _UINT32_(0x00FF0000)                                 /* (PMC_OCR) Register Mask  */

#define PMC_OCR_SEL_Pos                       _UINT32_(23)                                         /* (PMC_OCR Position) Selection of Main RC Oscillator Calibration Bits */
#define PMC_OCR_SEL_Msk                       (_UINT32_(0x1) << PMC_OCR_SEL_Pos)                   /* (PMC_OCR Mask) SEL */
#define PMC_OCR_SEL(value)                    (PMC_OCR_SEL_Msk & (_UINT32_(value) << PMC_OCR_SEL_Pos)) 

/* -------- PMC_SLPWK_AIPR : (PMC Offset: 0x94) ( R/ 32) Partial Wake-up Activity In Progress Register -------- */
#define PMC_SLPWK_AIPR_AIP_Pos                _UINT32_(0)                                          /* (PMC_SLPWK_AIPR) Activity In Progress Position */
#define PMC_SLPWK_AIPR_AIP_Msk                (_UINT32_(0x1) << PMC_SLPWK_AIPR_AIP_Pos)            /* (PMC_SLPWK_AIPR) Activity In Progress Mask */
#define PMC_SLPWK_AIPR_AIP(value)             (PMC_SLPWK_AIPR_AIP_Msk & (_UINT32_(value) << PMC_SLPWK_AIPR_AIP_Pos)) /* Assigment of value for AIP in the PMC_SLPWK_AIPR register */
#define PMC_SLPWK_AIPR_Msk                    _UINT32_(0x00000001)                                 /* (PMC_SLPWK_AIPR) Register Mask  */


/* -------- PMC_SLPWKCR : (PMC Offset: 0x98) (R/W 32) Partial Wake-up Control Register -------- */
#define PMC_SLPWKCR_PID_Pos                   _UINT32_(0)                                          /* (PMC_SLPWKCR) Peripheral ID Position */
#define PMC_SLPWKCR_PID_Msk                   (_UINT32_(0x7F) << PMC_SLPWKCR_PID_Pos)              /* (PMC_SLPWKCR) Peripheral ID Mask */
#define PMC_SLPWKCR_PID(value)                (PMC_SLPWKCR_PID_Msk & (_UINT32_(value) << PMC_SLPWKCR_PID_Pos)) /* Assigment of value for PID in the PMC_SLPWKCR register */
#define PMC_SLPWKCR_CMD_Pos                   _UINT32_(12)                                         /* (PMC_SLPWKCR) Command Position */
#define PMC_SLPWKCR_CMD_Msk                   (_UINT32_(0x1) << PMC_SLPWKCR_CMD_Pos)               /* (PMC_SLPWKCR) Command Mask */
#define PMC_SLPWKCR_CMD(value)                (PMC_SLPWKCR_CMD_Msk & (_UINT32_(value) << PMC_SLPWKCR_CMD_Pos)) /* Assigment of value for CMD in the PMC_SLPWKCR register */
#define PMC_SLPWKCR_ASR_Pos                   _UINT32_(16)                                         /* (PMC_SLPWKCR) Activity Status Register Position */
#define PMC_SLPWKCR_ASR_Msk                   (_UINT32_(0x1) << PMC_SLPWKCR_ASR_Pos)               /* (PMC_SLPWKCR) Activity Status Register Mask */
#define PMC_SLPWKCR_ASR(value)                (PMC_SLPWKCR_ASR_Msk & (_UINT32_(value) << PMC_SLPWKCR_ASR_Pos)) /* Assigment of value for ASR in the PMC_SLPWKCR register */
#define PMC_SLPWKCR_SLPWKSR_Pos               _UINT32_(28)                                         /* (PMC_SLPWKCR) Partial Wake-up Sleep Register Position */
#define PMC_SLPWKCR_SLPWKSR_Msk               (_UINT32_(0x1) << PMC_SLPWKCR_SLPWKSR_Pos)           /* (PMC_SLPWKCR) Partial Wake-up Sleep Register Mask */
#define PMC_SLPWKCR_SLPWKSR(value)            (PMC_SLPWKCR_SLPWKSR_Msk & (_UINT32_(value) << PMC_SLPWKCR_SLPWKSR_Pos)) /* Assigment of value for SLPWKSR in the PMC_SLPWKCR register */
#define PMC_SLPWKCR_Msk                       _UINT32_(0x1001107F)                                 /* (PMC_SLPWKCR) Register Mask  */


/* -------- PMC_MCKLIM : (PMC Offset: 0xA0) (R/W 32) MCK0 Monitor Limits Register -------- */
#define PMC_MCKLIM_MCK_LOW_IT_Pos             _UINT32_(0)                                          /* (PMC_MCKLIM) MCK0 Monitoring Low IT Limit Position */
#define PMC_MCKLIM_MCK_LOW_IT_Msk             (_UINT32_(0xFF) << PMC_MCKLIM_MCK_LOW_IT_Pos)        /* (PMC_MCKLIM) MCK0 Monitoring Low IT Limit Mask */
#define PMC_MCKLIM_MCK_LOW_IT(value)          (PMC_MCKLIM_MCK_LOW_IT_Msk & (_UINT32_(value) << PMC_MCKLIM_MCK_LOW_IT_Pos)) /* Assigment of value for MCK_LOW_IT in the PMC_MCKLIM register */
#define PMC_MCKLIM_MCK_HIGH_IT_Pos            _UINT32_(8)                                          /* (PMC_MCKLIM) MCK0 Monitoring High IT Limit Position */
#define PMC_MCKLIM_MCK_HIGH_IT_Msk            (_UINT32_(0xFF) << PMC_MCKLIM_MCK_HIGH_IT_Pos)       /* (PMC_MCKLIM) MCK0 Monitoring High IT Limit Mask */
#define PMC_MCKLIM_MCK_HIGH_IT(value)         (PMC_MCKLIM_MCK_HIGH_IT_Msk & (_UINT32_(value) << PMC_MCKLIM_MCK_HIGH_IT_Pos)) /* Assigment of value for MCK_HIGH_IT in the PMC_MCKLIM register */
#define PMC_MCKLIM_MCK_LOW_RES_Pos            _UINT32_(16)                                         /* (PMC_MCKLIM) MCK0 Monitoring Low RESET Limit Position */
#define PMC_MCKLIM_MCK_LOW_RES_Msk            (_UINT32_(0xFF) << PMC_MCKLIM_MCK_LOW_RES_Pos)       /* (PMC_MCKLIM) MCK0 Monitoring Low RESET Limit Mask */
#define PMC_MCKLIM_MCK_LOW_RES(value)         (PMC_MCKLIM_MCK_LOW_RES_Msk & (_UINT32_(value) << PMC_MCKLIM_MCK_LOW_RES_Pos)) /* Assigment of value for MCK_LOW_RES in the PMC_MCKLIM register */
#define PMC_MCKLIM_MCK_HIGH_RES_Pos           _UINT32_(24)                                         /* (PMC_MCKLIM) MCK0 Monitoring High Reset Limit Position */
#define PMC_MCKLIM_MCK_HIGH_RES_Msk           (_UINT32_(0xFF) << PMC_MCKLIM_MCK_HIGH_RES_Pos)      /* (PMC_MCKLIM) MCK0 Monitoring High Reset Limit Mask */
#define PMC_MCKLIM_MCK_HIGH_RES(value)        (PMC_MCKLIM_MCK_HIGH_RES_Msk & (_UINT32_(value) << PMC_MCKLIM_MCK_HIGH_RES_Pos)) /* Assigment of value for MCK_HIGH_RES in the PMC_MCKLIM register */
#define PMC_MCKLIM_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (PMC_MCKLIM) Register Mask  */


/* -------- PMC_CSR0 : (PMC Offset: 0xA4) ( R/ 32) Peripheral Clock Status Register 0 -------- */
#define PMC_CSR0_PID9_Pos                     _UINT32_(9)                                          /* (PMC_CSR0) Peripheral Clock 9 Status Position */
#define PMC_CSR0_PID9_Msk                     (_UINT32_(0x1) << PMC_CSR0_PID9_Pos)                 /* (PMC_CSR0) Peripheral Clock 9 Status Mask */
#define PMC_CSR0_PID9(value)                  (PMC_CSR0_PID9_Msk & (_UINT32_(value) << PMC_CSR0_PID9_Pos)) /* Assigment of value for PID9 in the PMC_CSR0 register */
#define PMC_CSR0_PID10_Pos                    _UINT32_(10)                                         /* (PMC_CSR0) Peripheral Clock 10 Status Position */
#define PMC_CSR0_PID10_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID10_Pos)                /* (PMC_CSR0) Peripheral Clock 10 Status Mask */
#define PMC_CSR0_PID10(value)                 (PMC_CSR0_PID10_Msk & (_UINT32_(value) << PMC_CSR0_PID10_Pos)) /* Assigment of value for PID10 in the PMC_CSR0 register */
#define PMC_CSR0_PID11_Pos                    _UINT32_(11)                                         /* (PMC_CSR0) Peripheral Clock 11 Status Position */
#define PMC_CSR0_PID11_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID11_Pos)                /* (PMC_CSR0) Peripheral Clock 11 Status Mask */
#define PMC_CSR0_PID11(value)                 (PMC_CSR0_PID11_Msk & (_UINT32_(value) << PMC_CSR0_PID11_Pos)) /* Assigment of value for PID11 in the PMC_CSR0 register */
#define PMC_CSR0_PID12_Pos                    _UINT32_(12)                                         /* (PMC_CSR0) Peripheral Clock 12 Status Position */
#define PMC_CSR0_PID12_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID12_Pos)                /* (PMC_CSR0) Peripheral Clock 12 Status Mask */
#define PMC_CSR0_PID12(value)                 (PMC_CSR0_PID12_Msk & (_UINT32_(value) << PMC_CSR0_PID12_Pos)) /* Assigment of value for PID12 in the PMC_CSR0 register */
#define PMC_CSR0_PID13_Pos                    _UINT32_(13)                                         /* (PMC_CSR0) Peripheral Clock 13 Status Position */
#define PMC_CSR0_PID13_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID13_Pos)                /* (PMC_CSR0) Peripheral Clock 13 Status Mask */
#define PMC_CSR0_PID13(value)                 (PMC_CSR0_PID13_Msk & (_UINT32_(value) << PMC_CSR0_PID13_Pos)) /* Assigment of value for PID13 in the PMC_CSR0 register */
#define PMC_CSR0_PID14_Pos                    _UINT32_(14)                                         /* (PMC_CSR0) Peripheral Clock 14 Status Position */
#define PMC_CSR0_PID14_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID14_Pos)                /* (PMC_CSR0) Peripheral Clock 14 Status Mask */
#define PMC_CSR0_PID14(value)                 (PMC_CSR0_PID14_Msk & (_UINT32_(value) << PMC_CSR0_PID14_Pos)) /* Assigment of value for PID14 in the PMC_CSR0 register */
#define PMC_CSR0_PID15_Pos                    _UINT32_(15)                                         /* (PMC_CSR0) Peripheral Clock 15 Status Position */
#define PMC_CSR0_PID15_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID15_Pos)                /* (PMC_CSR0) Peripheral Clock 15 Status Mask */
#define PMC_CSR0_PID15(value)                 (PMC_CSR0_PID15_Msk & (_UINT32_(value) << PMC_CSR0_PID15_Pos)) /* Assigment of value for PID15 in the PMC_CSR0 register */
#define PMC_CSR0_PID16_Pos                    _UINT32_(16)                                         /* (PMC_CSR0) Peripheral Clock 16 Status Position */
#define PMC_CSR0_PID16_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID16_Pos)                /* (PMC_CSR0) Peripheral Clock 16 Status Mask */
#define PMC_CSR0_PID16(value)                 (PMC_CSR0_PID16_Msk & (_UINT32_(value) << PMC_CSR0_PID16_Pos)) /* Assigment of value for PID16 in the PMC_CSR0 register */
#define PMC_CSR0_PID17_Pos                    _UINT32_(17)                                         /* (PMC_CSR0) Peripheral Clock 17 Status Position */
#define PMC_CSR0_PID17_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID17_Pos)                /* (PMC_CSR0) Peripheral Clock 17 Status Mask */
#define PMC_CSR0_PID17(value)                 (PMC_CSR0_PID17_Msk & (_UINT32_(value) << PMC_CSR0_PID17_Pos)) /* Assigment of value for PID17 in the PMC_CSR0 register */
#define PMC_CSR0_PID23_Pos                    _UINT32_(23)                                         /* (PMC_CSR0) Peripheral Clock 23 Status Position */
#define PMC_CSR0_PID23_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID23_Pos)                /* (PMC_CSR0) Peripheral Clock 23 Status Mask */
#define PMC_CSR0_PID23(value)                 (PMC_CSR0_PID23_Msk & (_UINT32_(value) << PMC_CSR0_PID23_Pos)) /* Assigment of value for PID23 in the PMC_CSR0 register */
#define PMC_CSR0_PID24_Pos                    _UINT32_(24)                                         /* (PMC_CSR0) Peripheral Clock 24 Status Position */
#define PMC_CSR0_PID24_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID24_Pos)                /* (PMC_CSR0) Peripheral Clock 24 Status Mask */
#define PMC_CSR0_PID24(value)                 (PMC_CSR0_PID24_Msk & (_UINT32_(value) << PMC_CSR0_PID24_Pos)) /* Assigment of value for PID24 in the PMC_CSR0 register */
#define PMC_CSR0_PID25_Pos                    _UINT32_(25)                                         /* (PMC_CSR0) Peripheral Clock 25 Status Position */
#define PMC_CSR0_PID25_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID25_Pos)                /* (PMC_CSR0) Peripheral Clock 25 Status Mask */
#define PMC_CSR0_PID25(value)                 (PMC_CSR0_PID25_Msk & (_UINT32_(value) << PMC_CSR0_PID25_Pos)) /* Assigment of value for PID25 in the PMC_CSR0 register */
#define PMC_CSR0_PID28_Pos                    _UINT32_(28)                                         /* (PMC_CSR0) Peripheral Clock 28 Status Position */
#define PMC_CSR0_PID28_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID28_Pos)                /* (PMC_CSR0) Peripheral Clock 28 Status Mask */
#define PMC_CSR0_PID28(value)                 (PMC_CSR0_PID28_Msk & (_UINT32_(value) << PMC_CSR0_PID28_Pos)) /* Assigment of value for PID28 in the PMC_CSR0 register */
#define PMC_CSR0_PID30_Pos                    _UINT32_(30)                                         /* (PMC_CSR0) Peripheral Clock 30 Status Position */
#define PMC_CSR0_PID30_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID30_Pos)                /* (PMC_CSR0) Peripheral Clock 30 Status Mask */
#define PMC_CSR0_PID30(value)                 (PMC_CSR0_PID30_Msk & (_UINT32_(value) << PMC_CSR0_PID30_Pos)) /* Assigment of value for PID30 in the PMC_CSR0 register */
#define PMC_CSR0_PID31_Pos                    _UINT32_(31)                                         /* (PMC_CSR0) Peripheral Clock 31 Status Position */
#define PMC_CSR0_PID31_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID31_Pos)                /* (PMC_CSR0) Peripheral Clock 31 Status Mask */
#define PMC_CSR0_PID31(value)                 (PMC_CSR0_PID31_Msk & (_UINT32_(value) << PMC_CSR0_PID31_Pos)) /* Assigment of value for PID31 in the PMC_CSR0 register */
#define PMC_CSR0_Msk                          _UINT32_(0xD383FE00)                                 /* (PMC_CSR0) Register Mask  */

#define PMC_CSR0_PID_Pos                      _UINT32_(9)                                          /* (PMC_CSR0 Position) Peripheral Clock 3x Status */
#define PMC_CSR0_PID_Msk                      (_UINT32_(0x7FFF) << PMC_CSR0_PID_Pos)               /* (PMC_CSR0 Mask) PID */
#define PMC_CSR0_PID(value)                   (PMC_CSR0_PID_Msk & (_UINT32_(value) << PMC_CSR0_PID_Pos)) 

/* -------- PMC_CSR1 : (PMC Offset: 0xA8) ( R/ 32) Peripheral Clock Status Register 1 -------- */
#define PMC_CSR1_PID32_Pos                    _UINT32_(0)                                          /* (PMC_CSR1) Peripheral Clock 32 Status Position */
#define PMC_CSR1_PID32_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID32_Pos)                /* (PMC_CSR1) Peripheral Clock 32 Status Mask */
#define PMC_CSR1_PID32(value)                 (PMC_CSR1_PID32_Msk & (_UINT32_(value) << PMC_CSR1_PID32_Pos)) /* Assigment of value for PID32 in the PMC_CSR1 register */
#define PMC_CSR1_PID33_Pos                    _UINT32_(1)                                          /* (PMC_CSR1) Peripheral Clock 33 Status Position */
#define PMC_CSR1_PID33_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID33_Pos)                /* (PMC_CSR1) Peripheral Clock 33 Status Mask */
#define PMC_CSR1_PID33(value)                 (PMC_CSR1_PID33_Msk & (_UINT32_(value) << PMC_CSR1_PID33_Pos)) /* Assigment of value for PID33 in the PMC_CSR1 register */
#define PMC_CSR1_PID34_Pos                    _UINT32_(2)                                          /* (PMC_CSR1) Peripheral Clock 34 Status Position */
#define PMC_CSR1_PID34_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID34_Pos)                /* (PMC_CSR1) Peripheral Clock 34 Status Mask */
#define PMC_CSR1_PID34(value)                 (PMC_CSR1_PID34_Msk & (_UINT32_(value) << PMC_CSR1_PID34_Pos)) /* Assigment of value for PID34 in the PMC_CSR1 register */
#define PMC_CSR1_PID35_Pos                    _UINT32_(3)                                          /* (PMC_CSR1) Peripheral Clock 35 Status Position */
#define PMC_CSR1_PID35_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID35_Pos)                /* (PMC_CSR1) Peripheral Clock 35 Status Mask */
#define PMC_CSR1_PID35(value)                 (PMC_CSR1_PID35_Msk & (_UINT32_(value) << PMC_CSR1_PID35_Pos)) /* Assigment of value for PID35 in the PMC_CSR1 register */
#define PMC_CSR1_PID36_Pos                    _UINT32_(4)                                          /* (PMC_CSR1) Peripheral Clock 36 Status Position */
#define PMC_CSR1_PID36_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID36_Pos)                /* (PMC_CSR1) Peripheral Clock 36 Status Mask */
#define PMC_CSR1_PID36(value)                 (PMC_CSR1_PID36_Msk & (_UINT32_(value) << PMC_CSR1_PID36_Pos)) /* Assigment of value for PID36 in the PMC_CSR1 register */
#define PMC_CSR1_PID37_Pos                    _UINT32_(5)                                          /* (PMC_CSR1) Peripheral Clock 37 Status Position */
#define PMC_CSR1_PID37_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID37_Pos)                /* (PMC_CSR1) Peripheral Clock 37 Status Mask */
#define PMC_CSR1_PID37(value)                 (PMC_CSR1_PID37_Msk & (_UINT32_(value) << PMC_CSR1_PID37_Pos)) /* Assigment of value for PID37 in the PMC_CSR1 register */
#define PMC_CSR1_PID38_Pos                    _UINT32_(6)                                          /* (PMC_CSR1) Peripheral Clock 38 Status Position */
#define PMC_CSR1_PID38_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID38_Pos)                /* (PMC_CSR1) Peripheral Clock 38 Status Mask */
#define PMC_CSR1_PID38(value)                 (PMC_CSR1_PID38_Msk & (_UINT32_(value) << PMC_CSR1_PID38_Pos)) /* Assigment of value for PID38 in the PMC_CSR1 register */
#define PMC_CSR1_PID39_Pos                    _UINT32_(7)                                          /* (PMC_CSR1) Peripheral Clock 39 Status Position */
#define PMC_CSR1_PID39_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID39_Pos)                /* (PMC_CSR1) Peripheral Clock 39 Status Mask */
#define PMC_CSR1_PID39(value)                 (PMC_CSR1_PID39_Msk & (_UINT32_(value) << PMC_CSR1_PID39_Pos)) /* Assigment of value for PID39 in the PMC_CSR1 register */
#define PMC_CSR1_PID49_Pos                    _UINT32_(17)                                         /* (PMC_CSR1) Peripheral Clock 49 Status Position */
#define PMC_CSR1_PID49_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID49_Pos)                /* (PMC_CSR1) Peripheral Clock 49 Status Mask */
#define PMC_CSR1_PID49(value)                 (PMC_CSR1_PID49_Msk & (_UINT32_(value) << PMC_CSR1_PID49_Pos)) /* Assigment of value for PID49 in the PMC_CSR1 register */
#define PMC_CSR1_PID51_Pos                    _UINT32_(19)                                         /* (PMC_CSR1) Peripheral Clock 51 Status Position */
#define PMC_CSR1_PID51_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID51_Pos)                /* (PMC_CSR1) Peripheral Clock 51 Status Mask */
#define PMC_CSR1_PID51(value)                 (PMC_CSR1_PID51_Msk & (_UINT32_(value) << PMC_CSR1_PID51_Pos)) /* Assigment of value for PID51 in the PMC_CSR1 register */
#define PMC_CSR1_PID53_Pos                    _UINT32_(21)                                         /* (PMC_CSR1) Peripheral Clock 53 Status Position */
#define PMC_CSR1_PID53_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID53_Pos)                /* (PMC_CSR1) Peripheral Clock 53 Status Mask */
#define PMC_CSR1_PID53(value)                 (PMC_CSR1_PID53_Msk & (_UINT32_(value) << PMC_CSR1_PID53_Pos)) /* Assigment of value for PID53 in the PMC_CSR1 register */
#define PMC_CSR1_PID55_Pos                    _UINT32_(23)                                         /* (PMC_CSR1) Peripheral Clock 55 Status Position */
#define PMC_CSR1_PID55_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID55_Pos)                /* (PMC_CSR1) Peripheral Clock 55 Status Mask */
#define PMC_CSR1_PID55(value)                 (PMC_CSR1_PID55_Msk & (_UINT32_(value) << PMC_CSR1_PID55_Pos)) /* Assigment of value for PID55 in the PMC_CSR1 register */
#define PMC_CSR1_PID57_Pos                    _UINT32_(25)                                         /* (PMC_CSR1) Peripheral Clock 57 Status Position */
#define PMC_CSR1_PID57_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID57_Pos)                /* (PMC_CSR1) Peripheral Clock 57 Status Mask */
#define PMC_CSR1_PID57(value)                 (PMC_CSR1_PID57_Msk & (_UINT32_(value) << PMC_CSR1_PID57_Pos)) /* Assigment of value for PID57 in the PMC_CSR1 register */
#define PMC_CSR1_PID59_Pos                    _UINT32_(27)                                         /* (PMC_CSR1) Peripheral Clock 59 Status Position */
#define PMC_CSR1_PID59_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID59_Pos)                /* (PMC_CSR1) Peripheral Clock 59 Status Mask */
#define PMC_CSR1_PID59(value)                 (PMC_CSR1_PID59_Msk & (_UINT32_(value) << PMC_CSR1_PID59_Pos)) /* Assigment of value for PID59 in the PMC_CSR1 register */
#define PMC_CSR1_Msk                          _UINT32_(0x0AAA00FF)                                 /* (PMC_CSR1) Register Mask  */

#define PMC_CSR1_PID_Pos                      _UINT32_(0)                                          /* (PMC_CSR1 Position) Peripheral Clock 59 Status */
#define PMC_CSR1_PID_Msk                      (_UINT32_(0x3FFF) << PMC_CSR1_PID_Pos)               /* (PMC_CSR1 Mask) PID */
#define PMC_CSR1_PID(value)                   (PMC_CSR1_PID_Msk & (_UINT32_(value) << PMC_CSR1_PID_Pos)) 

/* -------- PMC_CSR2 : (PMC Offset: 0xAC) ( R/ 32) Peripheral Clock Status Register 2 -------- */
#define PMC_CSR2_PID75_Pos                    _UINT32_(11)                                         /* (PMC_CSR2) Peripheral Clock 75 Status Position */
#define PMC_CSR2_PID75_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID75_Pos)                /* (PMC_CSR2) Peripheral Clock 75 Status Mask */
#define PMC_CSR2_PID75(value)                 (PMC_CSR2_PID75_Msk & (_UINT32_(value) << PMC_CSR2_PID75_Pos)) /* Assigment of value for PID75 in the PMC_CSR2 register */
#define PMC_CSR2_PID78_Pos                    _UINT32_(14)                                         /* (PMC_CSR2) Peripheral Clock 78 Status Position */
#define PMC_CSR2_PID78_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID78_Pos)                /* (PMC_CSR2) Peripheral Clock 78 Status Mask */
#define PMC_CSR2_PID78(value)                 (PMC_CSR2_PID78_Msk & (_UINT32_(value) << PMC_CSR2_PID78_Pos)) /* Assigment of value for PID78 in the PMC_CSR2 register */
#define PMC_CSR2_PID79_Pos                    _UINT32_(15)                                         /* (PMC_CSR2) Peripheral Clock 79 Status Position */
#define PMC_CSR2_PID79_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID79_Pos)                /* (PMC_CSR2) Peripheral Clock 79 Status Mask */
#define PMC_CSR2_PID79(value)                 (PMC_CSR2_PID79_Msk & (_UINT32_(value) << PMC_CSR2_PID79_Pos)) /* Assigment of value for PID79 in the PMC_CSR2 register */
#define PMC_CSR2_PID80_Pos                    _UINT32_(16)                                         /* (PMC_CSR2) Peripheral Clock 80 Status Position */
#define PMC_CSR2_PID80_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID80_Pos)                /* (PMC_CSR2) Peripheral Clock 80 Status Mask */
#define PMC_CSR2_PID80(value)                 (PMC_CSR2_PID80_Msk & (_UINT32_(value) << PMC_CSR2_PID80_Pos)) /* Assigment of value for PID80 in the PMC_CSR2 register */
#define PMC_CSR2_PID81_Pos                    _UINT32_(17)                                         /* (PMC_CSR2) Peripheral Clock 81 Status Position */
#define PMC_CSR2_PID81_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID81_Pos)                /* (PMC_CSR2) Peripheral Clock 81 Status Mask */
#define PMC_CSR2_PID81(value)                 (PMC_CSR2_PID81_Msk & (_UINT32_(value) << PMC_CSR2_PID81_Pos)) /* Assigment of value for PID81 in the PMC_CSR2 register */
#define PMC_CSR2_PID85_Pos                    _UINT32_(21)                                         /* (PMC_CSR2) Peripheral Clock 85 Status Position */
#define PMC_CSR2_PID85_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID85_Pos)                /* (PMC_CSR2) Peripheral Clock 85 Status Mask */
#define PMC_CSR2_PID85(value)                 (PMC_CSR2_PID85_Msk & (_UINT32_(value) << PMC_CSR2_PID85_Pos)) /* Assigment of value for PID85 in the PMC_CSR2 register */
#define PMC_CSR2_PID87_Pos                    _UINT32_(23)                                         /* (PMC_CSR2) Peripheral Clock 87 Status Position */
#define PMC_CSR2_PID87_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID87_Pos)                /* (PMC_CSR2) Peripheral Clock 87 Status Mask */
#define PMC_CSR2_PID87(value)                 (PMC_CSR2_PID87_Msk & (_UINT32_(value) << PMC_CSR2_PID87_Pos)) /* Assigment of value for PID87 in the PMC_CSR2 register */
#define PMC_CSR2_PID88_Pos                    _UINT32_(24)                                         /* (PMC_CSR2) Peripheral Clock 88 Status Position */
#define PMC_CSR2_PID88_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID88_Pos)                /* (PMC_CSR2) Peripheral Clock 88 Status Mask */
#define PMC_CSR2_PID88(value)                 (PMC_CSR2_PID88_Msk & (_UINT32_(value) << PMC_CSR2_PID88_Pos)) /* Assigment of value for PID88 in the PMC_CSR2 register */
#define PMC_CSR2_PID89_Pos                    _UINT32_(25)                                         /* (PMC_CSR2) Peripheral Clock 89 Status Position */
#define PMC_CSR2_PID89_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID89_Pos)                /* (PMC_CSR2) Peripheral Clock 89 Status Mask */
#define PMC_CSR2_PID89(value)                 (PMC_CSR2_PID89_Msk & (_UINT32_(value) << PMC_CSR2_PID89_Pos)) /* Assigment of value for PID89 in the PMC_CSR2 register */
#define PMC_CSR2_PID90_Pos                    _UINT32_(26)                                         /* (PMC_CSR2) Peripheral Clock 90 Status Position */
#define PMC_CSR2_PID90_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID90_Pos)                /* (PMC_CSR2) Peripheral Clock 90 Status Mask */
#define PMC_CSR2_PID90(value)                 (PMC_CSR2_PID90_Msk & (_UINT32_(value) << PMC_CSR2_PID90_Pos)) /* Assigment of value for PID90 in the PMC_CSR2 register */
#define PMC_CSR2_PID91_Pos                    _UINT32_(27)                                         /* (PMC_CSR2) Peripheral Clock 91 Status Position */
#define PMC_CSR2_PID91_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID91_Pos)                /* (PMC_CSR2) Peripheral Clock 91 Status Mask */
#define PMC_CSR2_PID91(value)                 (PMC_CSR2_PID91_Msk & (_UINT32_(value) << PMC_CSR2_PID91_Pos)) /* Assigment of value for PID91 in the PMC_CSR2 register */
#define PMC_CSR2_Msk                          _UINT32_(0x0FA3C800)                                 /* (PMC_CSR2) Register Mask  */

#define PMC_CSR2_PID_Pos                      _UINT32_(11)                                         /* (PMC_CSR2 Position) Peripheral Clock 9x Status */
#define PMC_CSR2_PID_Msk                      (_UINT32_(0x7FF) << PMC_CSR2_PID_Pos)                /* (PMC_CSR2 Mask) PID */
#define PMC_CSR2_PID(value)                   (PMC_CSR2_PID_Msk & (_UINT32_(value) << PMC_CSR2_PID_Pos)) 

/* -------- PMC_CSR3 : (PMC Offset: 0xB0) ( R/ 32) Peripheral Clock Status Register 3 -------- */
#define PMC_CSR3_PID96_Pos                    _UINT32_(0)                                          /* (PMC_CSR3) Peripheral Clock 96 Status Position */
#define PMC_CSR3_PID96_Msk                    (_UINT32_(0x1) << PMC_CSR3_PID96_Pos)                /* (PMC_CSR3) Peripheral Clock 96 Status Mask */
#define PMC_CSR3_PID96(value)                 (PMC_CSR3_PID96_Msk & (_UINT32_(value) << PMC_CSR3_PID96_Pos)) /* Assigment of value for PID96 in the PMC_CSR3 register */
#define PMC_CSR3_Msk                          _UINT32_(0x00000001)                                 /* (PMC_CSR3) Register Mask  */

#define PMC_CSR3_PID_Pos                      _UINT32_(0)                                          /* (PMC_CSR3 Position) Peripheral Clock 96 Status */
#define PMC_CSR3_PID_Msk                      (_UINT32_(0x1) << PMC_CSR3_PID_Pos)                  /* (PMC_CSR3 Mask) PID */
#define PMC_CSR3_PID(value)                   (PMC_CSR3_PID_Msk & (_UINT32_(value) << PMC_CSR3_PID_Pos)) 

/* -------- PMC_GCSR0 : (PMC Offset: 0xC4) ( R/ 32) Generic Clock Status Register 0 -------- */
#define PMC_GCSR0_GPID9_Pos                   _UINT32_(9)                                          /* (PMC_GCSR0) Generic Clock 9 Status Position */
#define PMC_GCSR0_GPID9_Msk                   (_UINT32_(0x1) << PMC_GCSR0_GPID9_Pos)               /* (PMC_GCSR0) Generic Clock 9 Status Mask */
#define PMC_GCSR0_GPID9(value)                (PMC_GCSR0_GPID9_Msk & (_UINT32_(value) << PMC_GCSR0_GPID9_Pos)) /* Assigment of value for GPID9 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID10_Pos                  _UINT32_(10)                                         /* (PMC_GCSR0) Generic Clock 10 Status Position */
#define PMC_GCSR0_GPID10_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID10_Pos)              /* (PMC_GCSR0) Generic Clock 10 Status Mask */
#define PMC_GCSR0_GPID10(value)               (PMC_GCSR0_GPID10_Msk & (_UINT32_(value) << PMC_GCSR0_GPID10_Pos)) /* Assigment of value for GPID10 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID11_Pos                  _UINT32_(11)                                         /* (PMC_GCSR0) Generic Clock 11 Status Position */
#define PMC_GCSR0_GPID11_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID11_Pos)              /* (PMC_GCSR0) Generic Clock 11 Status Mask */
#define PMC_GCSR0_GPID11(value)               (PMC_GCSR0_GPID11_Msk & (_UINT32_(value) << PMC_GCSR0_GPID11_Pos)) /* Assigment of value for GPID11 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID12_Pos                  _UINT32_(12)                                         /* (PMC_GCSR0) Generic Clock 12 Status Position */
#define PMC_GCSR0_GPID12_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID12_Pos)              /* (PMC_GCSR0) Generic Clock 12 Status Mask */
#define PMC_GCSR0_GPID12(value)               (PMC_GCSR0_GPID12_Msk & (_UINT32_(value) << PMC_GCSR0_GPID12_Pos)) /* Assigment of value for GPID12 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID13_Pos                  _UINT32_(13)                                         /* (PMC_GCSR0) Generic Clock 13 Status Position */
#define PMC_GCSR0_GPID13_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID13_Pos)              /* (PMC_GCSR0) Generic Clock 13 Status Mask */
#define PMC_GCSR0_GPID13(value)               (PMC_GCSR0_GPID13_Msk & (_UINT32_(value) << PMC_GCSR0_GPID13_Pos)) /* Assigment of value for GPID13 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID14_Pos                  _UINT32_(14)                                         /* (PMC_GCSR0) Generic Clock 14 Status Position */
#define PMC_GCSR0_GPID14_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID14_Pos)              /* (PMC_GCSR0) Generic Clock 14 Status Mask */
#define PMC_GCSR0_GPID14(value)               (PMC_GCSR0_GPID14_Msk & (_UINT32_(value) << PMC_GCSR0_GPID14_Pos)) /* Assigment of value for GPID14 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID15_Pos                  _UINT32_(15)                                         /* (PMC_GCSR0) Generic Clock 15 Status Position */
#define PMC_GCSR0_GPID15_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID15_Pos)              /* (PMC_GCSR0) Generic Clock 15 Status Mask */
#define PMC_GCSR0_GPID15(value)               (PMC_GCSR0_GPID15_Msk & (_UINT32_(value) << PMC_GCSR0_GPID15_Pos)) /* Assigment of value for GPID15 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID16_Pos                  _UINT32_(16)                                         /* (PMC_GCSR0) Generic Clock 16 Status Position */
#define PMC_GCSR0_GPID16_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID16_Pos)              /* (PMC_GCSR0) Generic Clock 16 Status Mask */
#define PMC_GCSR0_GPID16(value)               (PMC_GCSR0_GPID16_Msk & (_UINT32_(value) << PMC_GCSR0_GPID16_Pos)) /* Assigment of value for GPID16 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID23_Pos                  _UINT32_(23)                                         /* (PMC_GCSR0) Generic Clock 23 Status Position */
#define PMC_GCSR0_GPID23_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID23_Pos)              /* (PMC_GCSR0) Generic Clock 23 Status Mask */
#define PMC_GCSR0_GPID23(value)               (PMC_GCSR0_GPID23_Msk & (_UINT32_(value) << PMC_GCSR0_GPID23_Pos)) /* Assigment of value for GPID23 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID24_Pos                  _UINT32_(24)                                         /* (PMC_GCSR0) Generic Clock 24 Status Position */
#define PMC_GCSR0_GPID24_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID24_Pos)              /* (PMC_GCSR0) Generic Clock 24 Status Mask */
#define PMC_GCSR0_GPID24(value)               (PMC_GCSR0_GPID24_Msk & (_UINT32_(value) << PMC_GCSR0_GPID24_Pos)) /* Assigment of value for GPID24 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID31_Pos                  _UINT32_(31)                                         /* (PMC_GCSR0) Generic Clock 31 Status Position */
#define PMC_GCSR0_GPID31_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID31_Pos)              /* (PMC_GCSR0) Generic Clock 31 Status Mask */
#define PMC_GCSR0_GPID31(value)               (PMC_GCSR0_GPID31_Msk & (_UINT32_(value) << PMC_GCSR0_GPID31_Pos)) /* Assigment of value for GPID31 in the PMC_GCSR0 register */
#define PMC_GCSR0_Msk                         _UINT32_(0x8181FE00)                                 /* (PMC_GCSR0) Register Mask  */

#define PMC_GCSR0_GPID_Pos                    _UINT32_(9)                                          /* (PMC_GCSR0 Position) Generic Clock 3x Status */
#define PMC_GCSR0_GPID_Msk                    (_UINT32_(0x7FF) << PMC_GCSR0_GPID_Pos)              /* (PMC_GCSR0 Mask) GPID */
#define PMC_GCSR0_GPID(value)                 (PMC_GCSR0_GPID_Msk & (_UINT32_(value) << PMC_GCSR0_GPID_Pos)) 

/* -------- PMC_GCSR1 : (PMC Offset: 0xC8) ( R/ 32) Generic Clock Status Register 1 -------- */
#define PMC_GCSR1_GPID34_Pos                  _UINT32_(2)                                          /* (PMC_GCSR1) Generic Clock 34 Status Position */
#define PMC_GCSR1_GPID34_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID34_Pos)              /* (PMC_GCSR1) Generic Clock 34 Status Mask */
#define PMC_GCSR1_GPID34(value)               (PMC_GCSR1_GPID34_Msk & (_UINT32_(value) << PMC_GCSR1_GPID34_Pos)) /* Assigment of value for GPID34 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID37_Pos                  _UINT32_(5)                                          /* (PMC_GCSR1) Generic Clock 37 Status Position */
#define PMC_GCSR1_GPID37_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID37_Pos)              /* (PMC_GCSR1) Generic Clock 37 Status Mask */
#define PMC_GCSR1_GPID37(value)               (PMC_GCSR1_GPID37_Msk & (_UINT32_(value) << PMC_GCSR1_GPID37_Pos)) /* Assigment of value for GPID37 in the PMC_GCSR1 register */
#define PMC_GCSR1_Msk                         _UINT32_(0x00000024)                                 /* (PMC_GCSR1) Register Mask  */

#define PMC_GCSR1_GPID_Pos                    _UINT32_(2)                                          /* (PMC_GCSR1 Position) Generic Clock 37 Status */
#define PMC_GCSR1_GPID_Msk                    (_UINT32_(0x3) << PMC_GCSR1_GPID_Pos)                /* (PMC_GCSR1 Mask) GPID */
#define PMC_GCSR1_GPID(value)                 (PMC_GCSR1_GPID_Msk & (_UINT32_(value) << PMC_GCSR1_GPID_Pos)) 

/* -------- PMC_GCSR2 : (PMC Offset: 0xCC) ( R/ 32) Generic Clock Status Register 2 -------- */
#define PMC_GCSR2_GPID75_Pos                  _UINT32_(11)                                         /* (PMC_GCSR2) Generic Clock 75 Status Position */
#define PMC_GCSR2_GPID75_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID75_Pos)              /* (PMC_GCSR2) Generic Clock 75 Status Mask */
#define PMC_GCSR2_GPID75(value)               (PMC_GCSR2_GPID75_Msk & (_UINT32_(value) << PMC_GCSR2_GPID75_Pos)) /* Assigment of value for GPID75 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID79_Pos                  _UINT32_(15)                                         /* (PMC_GCSR2) Generic Clock 79 Status Position */
#define PMC_GCSR2_GPID79_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID79_Pos)              /* (PMC_GCSR2) Generic Clock 79 Status Mask */
#define PMC_GCSR2_GPID79(value)               (PMC_GCSR2_GPID79_Msk & (_UINT32_(value) << PMC_GCSR2_GPID79_Pos)) /* Assigment of value for GPID79 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID87_Pos                  _UINT32_(23)                                         /* (PMC_GCSR2) Generic Clock 87 Status Position */
#define PMC_GCSR2_GPID87_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID87_Pos)              /* (PMC_GCSR2) Generic Clock 87 Status Mask */
#define PMC_GCSR2_GPID87(value)               (PMC_GCSR2_GPID87_Msk & (_UINT32_(value) << PMC_GCSR2_GPID87_Pos)) /* Assigment of value for GPID87 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID89_Pos                  _UINT32_(25)                                         /* (PMC_GCSR2) Generic Clock 89 Status Position */
#define PMC_GCSR2_GPID89_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID89_Pos)              /* (PMC_GCSR2) Generic Clock 89 Status Mask */
#define PMC_GCSR2_GPID89(value)               (PMC_GCSR2_GPID89_Msk & (_UINT32_(value) << PMC_GCSR2_GPID89_Pos)) /* Assigment of value for GPID89 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID90_Pos                  _UINT32_(26)                                         /* (PMC_GCSR2) Generic Clock 90 Status Position */
#define PMC_GCSR2_GPID90_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID90_Pos)              /* (PMC_GCSR2) Generic Clock 90 Status Mask */
#define PMC_GCSR2_GPID90(value)               (PMC_GCSR2_GPID90_Msk & (_UINT32_(value) << PMC_GCSR2_GPID90_Pos)) /* Assigment of value for GPID90 in the PMC_GCSR2 register */
#define PMC_GCSR2_Msk                         _UINT32_(0x06808800)                                 /* (PMC_GCSR2) Register Mask  */

#define PMC_GCSR2_GPID_Pos                    _UINT32_(11)                                         /* (PMC_GCSR2 Position) Generic Clock 9x Status */
#define PMC_GCSR2_GPID_Msk                    (_UINT32_(0x1F) << PMC_GCSR2_GPID_Pos)               /* (PMC_GCSR2 Mask) GPID */
#define PMC_GCSR2_GPID(value)                 (PMC_GCSR2_GPID_Msk & (_UINT32_(value) << PMC_GCSR2_GPID_Pos)) 

/* -------- PMC_GCSR3 : (PMC Offset: 0xD0) ( R/ 32) Generic Clock Status Register 3 -------- */
#define PMC_GCSR3_GPID96_Pos                  _UINT32_(0)                                          /* (PMC_GCSR3) Generic Clock 96 Status Position */
#define PMC_GCSR3_GPID96_Msk                  (_UINT32_(0x1) << PMC_GCSR3_GPID96_Pos)              /* (PMC_GCSR3) Generic Clock 96 Status Mask */
#define PMC_GCSR3_GPID96(value)               (PMC_GCSR3_GPID96_Msk & (_UINT32_(value) << PMC_GCSR3_GPID96_Pos)) /* Assigment of value for GPID96 in the PMC_GCSR3 register */
#define PMC_GCSR3_Msk                         _UINT32_(0x00000001)                                 /* (PMC_GCSR3) Register Mask  */

#define PMC_GCSR3_GPID_Pos                    _UINT32_(0)                                          /* (PMC_GCSR3 Position) Generic Clock 96 Status */
#define PMC_GCSR3_GPID_Msk                    (_UINT32_(0x1) << PMC_GCSR3_GPID_Pos)                /* (PMC_GCSR3 Mask) GPID */
#define PMC_GCSR3_GPID(value)                 (PMC_GCSR3_GPID_Msk & (_UINT32_(value) << PMC_GCSR3_GPID_Pos)) 

/* -------- PMC_PLL_IER : (PMC Offset: 0xE4) ( /W 32) PLL Interrupt Enable Register -------- */
#define PMC_PLL_IER_LOCK0_Pos                 _UINT32_(0)                                          /* (PMC_PLL_IER) PLL of Index 0 Lock Interrupt Enable Position */
#define PMC_PLL_IER_LOCK0_Msk                 (_UINT32_(0x1) << PMC_PLL_IER_LOCK0_Pos)             /* (PMC_PLL_IER) PLL of Index 0 Lock Interrupt Enable Mask */
#define PMC_PLL_IER_LOCK0(value)              (PMC_PLL_IER_LOCK0_Msk & (_UINT32_(value) << PMC_PLL_IER_LOCK0_Pos)) /* Assigment of value for LOCK0 in the PMC_PLL_IER register */
#define PMC_PLL_IER_LOCK1_Pos                 _UINT32_(1)                                          /* (PMC_PLL_IER) PLL of Index 1 Lock Interrupt Enable Position */
#define PMC_PLL_IER_LOCK1_Msk                 (_UINT32_(0x1) << PMC_PLL_IER_LOCK1_Pos)             /* (PMC_PLL_IER) PLL of Index 1 Lock Interrupt Enable Mask */
#define PMC_PLL_IER_LOCK1(value)              (PMC_PLL_IER_LOCK1_Msk & (_UINT32_(value) << PMC_PLL_IER_LOCK1_Pos)) /* Assigment of value for LOCK1 in the PMC_PLL_IER register */
#define PMC_PLL_IER_LOCK2_Pos                 _UINT32_(2)                                          /* (PMC_PLL_IER) PLL of Index 2 Lock Interrupt Enable Position */
#define PMC_PLL_IER_LOCK2_Msk                 (_UINT32_(0x1) << PMC_PLL_IER_LOCK2_Pos)             /* (PMC_PLL_IER) PLL of Index 2 Lock Interrupt Enable Mask */
#define PMC_PLL_IER_LOCK2(value)              (PMC_PLL_IER_LOCK2_Msk & (_UINT32_(value) << PMC_PLL_IER_LOCK2_Pos)) /* Assigment of value for LOCK2 in the PMC_PLL_IER register */
#define PMC_PLL_IER_UNLOCK0_Pos               _UINT32_(16)                                         /* (PMC_PLL_IER) PLL of Index 0 Unlock Interrupt Enable Position */
#define PMC_PLL_IER_UNLOCK0_Msk               (_UINT32_(0x1) << PMC_PLL_IER_UNLOCK0_Pos)           /* (PMC_PLL_IER) PLL of Index 0 Unlock Interrupt Enable Mask */
#define PMC_PLL_IER_UNLOCK0(value)            (PMC_PLL_IER_UNLOCK0_Msk & (_UINT32_(value) << PMC_PLL_IER_UNLOCK0_Pos)) /* Assigment of value for UNLOCK0 in the PMC_PLL_IER register */
#define PMC_PLL_IER_UNLOCK1_Pos               _UINT32_(17)                                         /* (PMC_PLL_IER) PLL of Index 1 Unlock Interrupt Enable Position */
#define PMC_PLL_IER_UNLOCK1_Msk               (_UINT32_(0x1) << PMC_PLL_IER_UNLOCK1_Pos)           /* (PMC_PLL_IER) PLL of Index 1 Unlock Interrupt Enable Mask */
#define PMC_PLL_IER_UNLOCK1(value)            (PMC_PLL_IER_UNLOCK1_Msk & (_UINT32_(value) << PMC_PLL_IER_UNLOCK1_Pos)) /* Assigment of value for UNLOCK1 in the PMC_PLL_IER register */
#define PMC_PLL_IER_UNLOCK2_Pos               _UINT32_(18)                                         /* (PMC_PLL_IER) PLL of Index 2 Unlock Interrupt Enable Position */
#define PMC_PLL_IER_UNLOCK2_Msk               (_UINT32_(0x1) << PMC_PLL_IER_UNLOCK2_Pos)           /* (PMC_PLL_IER) PLL of Index 2 Unlock Interrupt Enable Mask */
#define PMC_PLL_IER_UNLOCK2(value)            (PMC_PLL_IER_UNLOCK2_Msk & (_UINT32_(value) << PMC_PLL_IER_UNLOCK2_Pos)) /* Assigment of value for UNLOCK2 in the PMC_PLL_IER register */
#define PMC_PLL_IER_Msk                       _UINT32_(0x00070007)                                 /* (PMC_PLL_IER) Register Mask  */

#define PMC_PLL_IER_LOCK_Pos                  _UINT32_(0)                                          /* (PMC_PLL_IER Position) PLL of Index x Lock Interrupt Enable */
#define PMC_PLL_IER_LOCK_Msk                  (_UINT32_(0x7) << PMC_PLL_IER_LOCK_Pos)              /* (PMC_PLL_IER Mask) LOCK */
#define PMC_PLL_IER_LOCK(value)               (PMC_PLL_IER_LOCK_Msk & (_UINT32_(value) << PMC_PLL_IER_LOCK_Pos)) 
#define PMC_PLL_IER_UNLOCK_Pos                _UINT32_(16)                                         /* (PMC_PLL_IER Position) PLL of Index 2 Unlock Interrupt Enable */
#define PMC_PLL_IER_UNLOCK_Msk                (_UINT32_(0x7) << PMC_PLL_IER_UNLOCK_Pos)            /* (PMC_PLL_IER Mask) UNLOCK */
#define PMC_PLL_IER_UNLOCK(value)             (PMC_PLL_IER_UNLOCK_Msk & (_UINT32_(value) << PMC_PLL_IER_UNLOCK_Pos)) 

/* -------- PMC_PLL_IDR : (PMC Offset: 0xE8) ( /W 32) PLL Interrupt Disable Register -------- */
#define PMC_PLL_IDR_LOCK0_Pos                 _UINT32_(0)                                          /* (PMC_PLL_IDR) PLL of Index 0 Lock Interrupt Disable Position */
#define PMC_PLL_IDR_LOCK0_Msk                 (_UINT32_(0x1) << PMC_PLL_IDR_LOCK0_Pos)             /* (PMC_PLL_IDR) PLL of Index 0 Lock Interrupt Disable Mask */
#define PMC_PLL_IDR_LOCK0(value)              (PMC_PLL_IDR_LOCK0_Msk & (_UINT32_(value) << PMC_PLL_IDR_LOCK0_Pos)) /* Assigment of value for LOCK0 in the PMC_PLL_IDR register */
#define PMC_PLL_IDR_LOCK1_Pos                 _UINT32_(1)                                          /* (PMC_PLL_IDR) PLL of Index 1 Lock Interrupt Disable Position */
#define PMC_PLL_IDR_LOCK1_Msk                 (_UINT32_(0x1) << PMC_PLL_IDR_LOCK1_Pos)             /* (PMC_PLL_IDR) PLL of Index 1 Lock Interrupt Disable Mask */
#define PMC_PLL_IDR_LOCK1(value)              (PMC_PLL_IDR_LOCK1_Msk & (_UINT32_(value) << PMC_PLL_IDR_LOCK1_Pos)) /* Assigment of value for LOCK1 in the PMC_PLL_IDR register */
#define PMC_PLL_IDR_LOCK2_Pos                 _UINT32_(2)                                          /* (PMC_PLL_IDR) PLL of Index 2 Lock Interrupt Disable Position */
#define PMC_PLL_IDR_LOCK2_Msk                 (_UINT32_(0x1) << PMC_PLL_IDR_LOCK2_Pos)             /* (PMC_PLL_IDR) PLL of Index 2 Lock Interrupt Disable Mask */
#define PMC_PLL_IDR_LOCK2(value)              (PMC_PLL_IDR_LOCK2_Msk & (_UINT32_(value) << PMC_PLL_IDR_LOCK2_Pos)) /* Assigment of value for LOCK2 in the PMC_PLL_IDR register */
#define PMC_PLL_IDR_UNLOCK0_Pos               _UINT32_(16)                                         /* (PMC_PLL_IDR) PLL of Index 0 Unlock Interrupt Disable Position */
#define PMC_PLL_IDR_UNLOCK0_Msk               (_UINT32_(0x1) << PMC_PLL_IDR_UNLOCK0_Pos)           /* (PMC_PLL_IDR) PLL of Index 0 Unlock Interrupt Disable Mask */
#define PMC_PLL_IDR_UNLOCK0(value)            (PMC_PLL_IDR_UNLOCK0_Msk & (_UINT32_(value) << PMC_PLL_IDR_UNLOCK0_Pos)) /* Assigment of value for UNLOCK0 in the PMC_PLL_IDR register */
#define PMC_PLL_IDR_UNLOCK1_Pos               _UINT32_(17)                                         /* (PMC_PLL_IDR) PLL of Index 1 Unlock Interrupt Disable Position */
#define PMC_PLL_IDR_UNLOCK1_Msk               (_UINT32_(0x1) << PMC_PLL_IDR_UNLOCK1_Pos)           /* (PMC_PLL_IDR) PLL of Index 1 Unlock Interrupt Disable Mask */
#define PMC_PLL_IDR_UNLOCK1(value)            (PMC_PLL_IDR_UNLOCK1_Msk & (_UINT32_(value) << PMC_PLL_IDR_UNLOCK1_Pos)) /* Assigment of value for UNLOCK1 in the PMC_PLL_IDR register */
#define PMC_PLL_IDR_UNLOCK2_Pos               _UINT32_(18)                                         /* (PMC_PLL_IDR) PLL of Index 2 Unlock Interrupt Disable Position */
#define PMC_PLL_IDR_UNLOCK2_Msk               (_UINT32_(0x1) << PMC_PLL_IDR_UNLOCK2_Pos)           /* (PMC_PLL_IDR) PLL of Index 2 Unlock Interrupt Disable Mask */
#define PMC_PLL_IDR_UNLOCK2(value)            (PMC_PLL_IDR_UNLOCK2_Msk & (_UINT32_(value) << PMC_PLL_IDR_UNLOCK2_Pos)) /* Assigment of value for UNLOCK2 in the PMC_PLL_IDR register */
#define PMC_PLL_IDR_Msk                       _UINT32_(0x00070007)                                 /* (PMC_PLL_IDR) Register Mask  */

#define PMC_PLL_IDR_LOCK_Pos                  _UINT32_(0)                                          /* (PMC_PLL_IDR Position) PLL of Index x Lock Interrupt Disable */
#define PMC_PLL_IDR_LOCK_Msk                  (_UINT32_(0x7) << PMC_PLL_IDR_LOCK_Pos)              /* (PMC_PLL_IDR Mask) LOCK */
#define PMC_PLL_IDR_LOCK(value)               (PMC_PLL_IDR_LOCK_Msk & (_UINT32_(value) << PMC_PLL_IDR_LOCK_Pos)) 
#define PMC_PLL_IDR_UNLOCK_Pos                _UINT32_(16)                                         /* (PMC_PLL_IDR Position) PLL of Index 2 Unlock Interrupt Disable */
#define PMC_PLL_IDR_UNLOCK_Msk                (_UINT32_(0x7) << PMC_PLL_IDR_UNLOCK_Pos)            /* (PMC_PLL_IDR Mask) UNLOCK */
#define PMC_PLL_IDR_UNLOCK(value)             (PMC_PLL_IDR_UNLOCK_Msk & (_UINT32_(value) << PMC_PLL_IDR_UNLOCK_Pos)) 

/* -------- PMC_PLL_IMR : (PMC Offset: 0xEC) ( R/ 32) PLL Interrupt Mask Register -------- */
#define PMC_PLL_IMR_LOCK0_Pos                 _UINT32_(0)                                          /* (PMC_PLL_IMR) PLL of Index 0 Lock Interrupt Mask Position */
#define PMC_PLL_IMR_LOCK0_Msk                 (_UINT32_(0x1) << PMC_PLL_IMR_LOCK0_Pos)             /* (PMC_PLL_IMR) PLL of Index 0 Lock Interrupt Mask Mask */
#define PMC_PLL_IMR_LOCK0(value)              (PMC_PLL_IMR_LOCK0_Msk & (_UINT32_(value) << PMC_PLL_IMR_LOCK0_Pos)) /* Assigment of value for LOCK0 in the PMC_PLL_IMR register */
#define PMC_PLL_IMR_LOCK1_Pos                 _UINT32_(1)                                          /* (PMC_PLL_IMR) PLL of Index 1 Lock Interrupt Mask Position */
#define PMC_PLL_IMR_LOCK1_Msk                 (_UINT32_(0x1) << PMC_PLL_IMR_LOCK1_Pos)             /* (PMC_PLL_IMR) PLL of Index 1 Lock Interrupt Mask Mask */
#define PMC_PLL_IMR_LOCK1(value)              (PMC_PLL_IMR_LOCK1_Msk & (_UINT32_(value) << PMC_PLL_IMR_LOCK1_Pos)) /* Assigment of value for LOCK1 in the PMC_PLL_IMR register */
#define PMC_PLL_IMR_LOCK2_Pos                 _UINT32_(2)                                          /* (PMC_PLL_IMR) PLL of Index 2 Lock Interrupt Mask Position */
#define PMC_PLL_IMR_LOCK2_Msk                 (_UINT32_(0x1) << PMC_PLL_IMR_LOCK2_Pos)             /* (PMC_PLL_IMR) PLL of Index 2 Lock Interrupt Mask Mask */
#define PMC_PLL_IMR_LOCK2(value)              (PMC_PLL_IMR_LOCK2_Msk & (_UINT32_(value) << PMC_PLL_IMR_LOCK2_Pos)) /* Assigment of value for LOCK2 in the PMC_PLL_IMR register */
#define PMC_PLL_IMR_UNLOCK0_Pos               _UINT32_(16)                                         /* (PMC_PLL_IMR) PLL of Index 0 Unlock Interrupt Mask Position */
#define PMC_PLL_IMR_UNLOCK0_Msk               (_UINT32_(0x1) << PMC_PLL_IMR_UNLOCK0_Pos)           /* (PMC_PLL_IMR) PLL of Index 0 Unlock Interrupt Mask Mask */
#define PMC_PLL_IMR_UNLOCK0(value)            (PMC_PLL_IMR_UNLOCK0_Msk & (_UINT32_(value) << PMC_PLL_IMR_UNLOCK0_Pos)) /* Assigment of value for UNLOCK0 in the PMC_PLL_IMR register */
#define PMC_PLL_IMR_UNLOCK1_Pos               _UINT32_(17)                                         /* (PMC_PLL_IMR) PLL of Index 1 Unlock Interrupt Mask Position */
#define PMC_PLL_IMR_UNLOCK1_Msk               (_UINT32_(0x1) << PMC_PLL_IMR_UNLOCK1_Pos)           /* (PMC_PLL_IMR) PLL of Index 1 Unlock Interrupt Mask Mask */
#define PMC_PLL_IMR_UNLOCK1(value)            (PMC_PLL_IMR_UNLOCK1_Msk & (_UINT32_(value) << PMC_PLL_IMR_UNLOCK1_Pos)) /* Assigment of value for UNLOCK1 in the PMC_PLL_IMR register */
#define PMC_PLL_IMR_UNLOCK2_Pos               _UINT32_(18)                                         /* (PMC_PLL_IMR) PLL of Index 2 Unlock Interrupt Mask Position */
#define PMC_PLL_IMR_UNLOCK2_Msk               (_UINT32_(0x1) << PMC_PLL_IMR_UNLOCK2_Pos)           /* (PMC_PLL_IMR) PLL of Index 2 Unlock Interrupt Mask Mask */
#define PMC_PLL_IMR_UNLOCK2(value)            (PMC_PLL_IMR_UNLOCK2_Msk & (_UINT32_(value) << PMC_PLL_IMR_UNLOCK2_Pos)) /* Assigment of value for UNLOCK2 in the PMC_PLL_IMR register */
#define PMC_PLL_IMR_Msk                       _UINT32_(0x00070007)                                 /* (PMC_PLL_IMR) Register Mask  */

#define PMC_PLL_IMR_LOCK_Pos                  _UINT32_(0)                                          /* (PMC_PLL_IMR Position) PLL of Index x Lock Interrupt Mask */
#define PMC_PLL_IMR_LOCK_Msk                  (_UINT32_(0x7) << PMC_PLL_IMR_LOCK_Pos)              /* (PMC_PLL_IMR Mask) LOCK */
#define PMC_PLL_IMR_LOCK(value)               (PMC_PLL_IMR_LOCK_Msk & (_UINT32_(value) << PMC_PLL_IMR_LOCK_Pos)) 
#define PMC_PLL_IMR_UNLOCK_Pos                _UINT32_(16)                                         /* (PMC_PLL_IMR Position) PLL of Index 2 Unlock Interrupt Mask */
#define PMC_PLL_IMR_UNLOCK_Msk                (_UINT32_(0x7) << PMC_PLL_IMR_UNLOCK_Pos)            /* (PMC_PLL_IMR Mask) UNLOCK */
#define PMC_PLL_IMR_UNLOCK(value)             (PMC_PLL_IMR_UNLOCK_Msk & (_UINT32_(value) << PMC_PLL_IMR_UNLOCK_Pos)) 

/* -------- PMC_PLL_ISR0 : (PMC Offset: 0xF0) ( R/ 32) PLL Interrupt Status Register 0 -------- */
#define PMC_PLL_ISR0_LOCK0_Pos                _UINT32_(0)                                          /* (PMC_PLL_ISR0) PLL of Index 0 Lock Interrupt Status Position */
#define PMC_PLL_ISR0_LOCK0_Msk                (_UINT32_(0x1) << PMC_PLL_ISR0_LOCK0_Pos)            /* (PMC_PLL_ISR0) PLL of Index 0 Lock Interrupt Status Mask */
#define PMC_PLL_ISR0_LOCK0(value)             (PMC_PLL_ISR0_LOCK0_Msk & (_UINT32_(value) << PMC_PLL_ISR0_LOCK0_Pos)) /* Assigment of value for LOCK0 in the PMC_PLL_ISR0 register */
#define PMC_PLL_ISR0_LOCK1_Pos                _UINT32_(1)                                          /* (PMC_PLL_ISR0) PLL of Index 1 Lock Interrupt Status Position */
#define PMC_PLL_ISR0_LOCK1_Msk                (_UINT32_(0x1) << PMC_PLL_ISR0_LOCK1_Pos)            /* (PMC_PLL_ISR0) PLL of Index 1 Lock Interrupt Status Mask */
#define PMC_PLL_ISR0_LOCK1(value)             (PMC_PLL_ISR0_LOCK1_Msk & (_UINT32_(value) << PMC_PLL_ISR0_LOCK1_Pos)) /* Assigment of value for LOCK1 in the PMC_PLL_ISR0 register */
#define PMC_PLL_ISR0_LOCK2_Pos                _UINT32_(2)                                          /* (PMC_PLL_ISR0) PLL of Index 2 Lock Interrupt Status Position */
#define PMC_PLL_ISR0_LOCK2_Msk                (_UINT32_(0x1) << PMC_PLL_ISR0_LOCK2_Pos)            /* (PMC_PLL_ISR0) PLL of Index 2 Lock Interrupt Status Mask */
#define PMC_PLL_ISR0_LOCK2(value)             (PMC_PLL_ISR0_LOCK2_Msk & (_UINT32_(value) << PMC_PLL_ISR0_LOCK2_Pos)) /* Assigment of value for LOCK2 in the PMC_PLL_ISR0 register */
#define PMC_PLL_ISR0_UNLOCK0_Pos              _UINT32_(16)                                         /* (PMC_PLL_ISR0) PLL of Index 0 Unlock Interrupt Status Position */
#define PMC_PLL_ISR0_UNLOCK0_Msk              (_UINT32_(0x1) << PMC_PLL_ISR0_UNLOCK0_Pos)          /* (PMC_PLL_ISR0) PLL of Index 0 Unlock Interrupt Status Mask */
#define PMC_PLL_ISR0_UNLOCK0(value)           (PMC_PLL_ISR0_UNLOCK0_Msk & (_UINT32_(value) << PMC_PLL_ISR0_UNLOCK0_Pos)) /* Assigment of value for UNLOCK0 in the PMC_PLL_ISR0 register */
#define PMC_PLL_ISR0_UNLOCK1_Pos              _UINT32_(17)                                         /* (PMC_PLL_ISR0) PLL of Index 1 Unlock Interrupt Status Position */
#define PMC_PLL_ISR0_UNLOCK1_Msk              (_UINT32_(0x1) << PMC_PLL_ISR0_UNLOCK1_Pos)          /* (PMC_PLL_ISR0) PLL of Index 1 Unlock Interrupt Status Mask */
#define PMC_PLL_ISR0_UNLOCK1(value)           (PMC_PLL_ISR0_UNLOCK1_Msk & (_UINT32_(value) << PMC_PLL_ISR0_UNLOCK1_Pos)) /* Assigment of value for UNLOCK1 in the PMC_PLL_ISR0 register */
#define PMC_PLL_ISR0_UNLOCK2_Pos              _UINT32_(18)                                         /* (PMC_PLL_ISR0) PLL of Index 2 Unlock Interrupt Status Position */
#define PMC_PLL_ISR0_UNLOCK2_Msk              (_UINT32_(0x1) << PMC_PLL_ISR0_UNLOCK2_Pos)          /* (PMC_PLL_ISR0) PLL of Index 2 Unlock Interrupt Status Mask */
#define PMC_PLL_ISR0_UNLOCK2(value)           (PMC_PLL_ISR0_UNLOCK2_Msk & (_UINT32_(value) << PMC_PLL_ISR0_UNLOCK2_Pos)) /* Assigment of value for UNLOCK2 in the PMC_PLL_ISR0 register */
#define PMC_PLL_ISR0_Msk                      _UINT32_(0x00070007)                                 /* (PMC_PLL_ISR0) Register Mask  */

#define PMC_PLL_ISR0_LOCK_Pos                 _UINT32_(0)                                          /* (PMC_PLL_ISR0 Position) PLL of Index x Lock Interrupt Status */
#define PMC_PLL_ISR0_LOCK_Msk                 (_UINT32_(0x7) << PMC_PLL_ISR0_LOCK_Pos)             /* (PMC_PLL_ISR0 Mask) LOCK */
#define PMC_PLL_ISR0_LOCK(value)              (PMC_PLL_ISR0_LOCK_Msk & (_UINT32_(value) << PMC_PLL_ISR0_LOCK_Pos)) 
#define PMC_PLL_ISR0_UNLOCK_Pos               _UINT32_(16)                                         /* (PMC_PLL_ISR0 Position) PLL of Index 2 Unlock Interrupt Status */
#define PMC_PLL_ISR0_UNLOCK_Msk               (_UINT32_(0x7) << PMC_PLL_ISR0_UNLOCK_Pos)           /* (PMC_PLL_ISR0 Mask) UNLOCK */
#define PMC_PLL_ISR0_UNLOCK(value)            (PMC_PLL_ISR0_UNLOCK_Msk & (_UINT32_(value) << PMC_PLL_ISR0_UNLOCK_Pos)) 

/* -------- PMC_PLL_ISR1 : (PMC Offset: 0xF4) ( R/ 32) PLL Interrupt Status Register 1 -------- */
#define PMC_PLL_ISR1_UDR0_Pos                 _UINT32_(0)                                          /* (PMC_PLL_ISR1) PLLx Underflow Position */
#define PMC_PLL_ISR1_UDR0_Msk                 (_UINT32_(0x1) << PMC_PLL_ISR1_UDR0_Pos)             /* (PMC_PLL_ISR1) PLLx Underflow Mask */
#define PMC_PLL_ISR1_UDR0(value)              (PMC_PLL_ISR1_UDR0_Msk & (_UINT32_(value) << PMC_PLL_ISR1_UDR0_Pos)) /* Assigment of value for UDR0 in the PMC_PLL_ISR1 register */
#define PMC_PLL_ISR1_UDR1_Pos                 _UINT32_(1)                                          /* (PMC_PLL_ISR1) PLLx Underflow Position */
#define PMC_PLL_ISR1_UDR1_Msk                 (_UINT32_(0x1) << PMC_PLL_ISR1_UDR1_Pos)             /* (PMC_PLL_ISR1) PLLx Underflow Mask */
#define PMC_PLL_ISR1_UDR1(value)              (PMC_PLL_ISR1_UDR1_Msk & (_UINT32_(value) << PMC_PLL_ISR1_UDR1_Pos)) /* Assigment of value for UDR1 in the PMC_PLL_ISR1 register */
#define PMC_PLL_ISR1_UDR2_Pos                 _UINT32_(2)                                          /* (PMC_PLL_ISR1) PLLx Underflow Position */
#define PMC_PLL_ISR1_UDR2_Msk                 (_UINT32_(0x1) << PMC_PLL_ISR1_UDR2_Pos)             /* (PMC_PLL_ISR1) PLLx Underflow Mask */
#define PMC_PLL_ISR1_UDR2(value)              (PMC_PLL_ISR1_UDR2_Msk & (_UINT32_(value) << PMC_PLL_ISR1_UDR2_Pos)) /* Assigment of value for UDR2 in the PMC_PLL_ISR1 register */
#define PMC_PLL_ISR1_OVR0_Pos                 _UINT32_(16)                                         /* (PMC_PLL_ISR1) PLLx Overflow Position */
#define PMC_PLL_ISR1_OVR0_Msk                 (_UINT32_(0x1) << PMC_PLL_ISR1_OVR0_Pos)             /* (PMC_PLL_ISR1) PLLx Overflow Mask */
#define PMC_PLL_ISR1_OVR0(value)              (PMC_PLL_ISR1_OVR0_Msk & (_UINT32_(value) << PMC_PLL_ISR1_OVR0_Pos)) /* Assigment of value for OVR0 in the PMC_PLL_ISR1 register */
#define PMC_PLL_ISR1_OVR1_Pos                 _UINT32_(17)                                         /* (PMC_PLL_ISR1) PLLx Overflow Position */
#define PMC_PLL_ISR1_OVR1_Msk                 (_UINT32_(0x1) << PMC_PLL_ISR1_OVR1_Pos)             /* (PMC_PLL_ISR1) PLLx Overflow Mask */
#define PMC_PLL_ISR1_OVR1(value)              (PMC_PLL_ISR1_OVR1_Msk & (_UINT32_(value) << PMC_PLL_ISR1_OVR1_Pos)) /* Assigment of value for OVR1 in the PMC_PLL_ISR1 register */
#define PMC_PLL_ISR1_OVR2_Pos                 _UINT32_(18)                                         /* (PMC_PLL_ISR1) PLLx Overflow Position */
#define PMC_PLL_ISR1_OVR2_Msk                 (_UINT32_(0x1) << PMC_PLL_ISR1_OVR2_Pos)             /* (PMC_PLL_ISR1) PLLx Overflow Mask */
#define PMC_PLL_ISR1_OVR2(value)              (PMC_PLL_ISR1_OVR2_Msk & (_UINT32_(value) << PMC_PLL_ISR1_OVR2_Pos)) /* Assigment of value for OVR2 in the PMC_PLL_ISR1 register */
#define PMC_PLL_ISR1_Msk                      _UINT32_(0x00070007)                                 /* (PMC_PLL_ISR1) Register Mask  */

#define PMC_PLL_ISR1_UDR_Pos                  _UINT32_(0)                                          /* (PMC_PLL_ISR1 Position) PLLx Underflow */
#define PMC_PLL_ISR1_UDR_Msk                  (_UINT32_(0x7) << PMC_PLL_ISR1_UDR_Pos)              /* (PMC_PLL_ISR1 Mask) UDR */
#define PMC_PLL_ISR1_UDR(value)               (PMC_PLL_ISR1_UDR_Msk & (_UINT32_(value) << PMC_PLL_ISR1_UDR_Pos)) 
#define PMC_PLL_ISR1_OVR_Pos                  _UINT32_(16)                                         /* (PMC_PLL_ISR1 Position) PLLx Overflow */
#define PMC_PLL_ISR1_OVR_Msk                  (_UINT32_(0x7) << PMC_PLL_ISR1_OVR_Pos)              /* (PMC_PLL_ISR1 Mask) OVR */
#define PMC_PLL_ISR1_OVR(value)               (PMC_PLL_ISR1_OVR_Msk & (_UINT32_(value) << PMC_PLL_ISR1_OVR_Pos)) 

/** \brief PMC register offsets definitions */
#define PMC_SCER_REG_OFST              _UINT32_(0x00)      /* (PMC_SCER) System Clock Enable Register Offset */
#define PMC_SCDR_REG_OFST              _UINT32_(0x04)      /* (PMC_SCDR) System Clock Disable Register Offset */
#define PMC_SCSR_REG_OFST              _UINT32_(0x08)      /* (PMC_SCSR) System Clock Status Register Offset */
#define PMC_PLL_CTRL0_REG_OFST         _UINT32_(0x0C)      /* (PMC_PLL_CTRL0) PLL Control Register 0 Offset */
#define PMC_PLL_CTRL1_REG_OFST         _UINT32_(0x10)      /* (PMC_PLL_CTRL1) PLL Control Register 1 Offset */
#define PMC_PLL_CTRL2_REG_OFST         _UINT32_(0x14)      /* (PMC_PLL_CTRL2) PLL Control Register 2 Offset */
#define PMC_PLL_SSR_REG_OFST           _UINT32_(0x18)      /* (PMC_PLL_SSR) PLL Spread Spectrum Register Offset */
#define PMC_PLL_ACR_REG_OFST           _UINT32_(0x1C)      /* (PMC_PLL_ACR) PLL Analog Control Register Offset */
#define PMC_PLL_UPDT_REG_OFST          _UINT32_(0x20)      /* (PMC_PLL_UPDT) PLL Update Register Offset */
#define CKGR_MOR_REG_OFST              _UINT32_(0x24)      /* (CKGR_MOR) Main Oscillator Register Offset */
#define CKGR_MCFR_REG_OFST             _UINT32_(0x28)      /* (CKGR_MCFR) Main Clock Frequency Register Offset */
#define PMC_CPU_CKR_REG_OFST           _UINT32_(0x2C)      /* (PMC_CPU_CKR) CPU Clock Register Offset */
#define PMC_PCK_REG_OFST               _UINT32_(0x44)      /* (PMC_PCK) Programmable Clock Register (chid = 0) Offset */
#define PMC_PCK0_REG_OFST              _UINT32_(0x44)      /* (PMC_PCK0) Programmable Clock Register (chid = 0) Offset */
#define PMC_PCK1_REG_OFST              _UINT32_(0x48)      /* (PMC_PCK1) Programmable Clock Register (chid = 0) Offset */
#define PMC_PCK2_REG_OFST              _UINT32_(0x4C)      /* (PMC_PCK2) Programmable Clock Register (chid = 0) Offset */
#define PMC_IER_REG_OFST               _UINT32_(0x64)      /* (PMC_IER) Interrupt Enable Register Offset */
#define PMC_IDR_REG_OFST               _UINT32_(0x68)      /* (PMC_IDR) Interrupt Disable Register Offset */
#define PMC_SR_REG_OFST                _UINT32_(0x6C)      /* (PMC_SR) Status Register Offset */
#define PMC_IMR_REG_OFST               _UINT32_(0x70)      /* (PMC_IMR) Interrupt Mask Register Offset */
#define PMC_FSMR_REG_OFST              _UINT32_(0x74)      /* (PMC_FSMR) Fast Start-up Mode Register Offset */
#define PMC_WCR_REG_OFST               _UINT32_(0x78)      /* (PMC_WCR) Wake-up Control Register Offset */
#define PMC_FOCR_REG_OFST              _UINT32_(0x7C)      /* (PMC_FOCR) Fault Output Clear Register Offset */
#define PMC_CPFSMR_REG_OFST            _UINT32_(0x80)      /* (PMC_CPFSMR) Coprocessor Fast Start-up Mode Register Offset */
#define PMC_WPMR_REG_OFST              _UINT32_(0x84)      /* (PMC_WPMR) Write Protection Mode Register Offset */
#define PMC_WPSR_REG_OFST              _UINT32_(0x88)      /* (PMC_WPSR) Write Protection Status Register Offset */
#define PMC_PCR_REG_OFST               _UINT32_(0x8C)      /* (PMC_PCR) Peripheral Control Register Offset */
#define PMC_OCR_REG_OFST               _UINT32_(0x90)      /* (PMC_OCR) Oscillator Calibration Register Offset */
#define PMC_SLPWK_AIPR_REG_OFST        _UINT32_(0x94)      /* (PMC_SLPWK_AIPR) Partial Wake-up Activity In Progress Register Offset */
#define PMC_SLPWKCR_REG_OFST           _UINT32_(0x98)      /* (PMC_SLPWKCR) Partial Wake-up Control Register Offset */
#define PMC_MCKLIM_REG_OFST            _UINT32_(0xA0)      /* (PMC_MCKLIM) MCK0 Monitor Limits Register Offset */
#define PMC_CSR0_REG_OFST              _UINT32_(0xA4)      /* (PMC_CSR0) Peripheral Clock Status Register 0 Offset */
#define PMC_CSR1_REG_OFST              _UINT32_(0xA8)      /* (PMC_CSR1) Peripheral Clock Status Register 1 Offset */
#define PMC_CSR2_REG_OFST              _UINT32_(0xAC)      /* (PMC_CSR2) Peripheral Clock Status Register 2 Offset */
#define PMC_CSR3_REG_OFST              _UINT32_(0xB0)      /* (PMC_CSR3) Peripheral Clock Status Register 3 Offset */
#define PMC_GCSR0_REG_OFST             _UINT32_(0xC4)      /* (PMC_GCSR0) Generic Clock Status Register 0 Offset */
#define PMC_GCSR1_REG_OFST             _UINT32_(0xC8)      /* (PMC_GCSR1) Generic Clock Status Register 1 Offset */
#define PMC_GCSR2_REG_OFST             _UINT32_(0xCC)      /* (PMC_GCSR2) Generic Clock Status Register 2 Offset */
#define PMC_GCSR3_REG_OFST             _UINT32_(0xD0)      /* (PMC_GCSR3) Generic Clock Status Register 3 Offset */
#define PMC_PLL_IER_REG_OFST           _UINT32_(0xE4)      /* (PMC_PLL_IER) PLL Interrupt Enable Register Offset */
#define PMC_PLL_IDR_REG_OFST           _UINT32_(0xE8)      /* (PMC_PLL_IDR) PLL Interrupt Disable Register Offset */
#define PMC_PLL_IMR_REG_OFST           _UINT32_(0xEC)      /* (PMC_PLL_IMR) PLL Interrupt Mask Register Offset */
#define PMC_PLL_ISR0_REG_OFST          _UINT32_(0xF0)      /* (PMC_PLL_ISR0) PLL Interrupt Status Register 0 Offset */
#define PMC_PLL_ISR1_REG_OFST          _UINT32_(0xF4)      /* (PMC_PLL_ISR1) PLL Interrupt Status Register 1 Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PMC register API structure */
typedef struct
{
  __O   uint32_t                       PMC_SCER;           /**< Offset: 0x00 ( /W  32) System Clock Enable Register */
  __O   uint32_t                       PMC_SCDR;           /**< Offset: 0x04 ( /W  32) System Clock Disable Register */
  __I   uint32_t                       PMC_SCSR;           /**< Offset: 0x08 (R/   32) System Clock Status Register */
  __IO  uint32_t                       PMC_PLL_CTRL0;      /**< Offset: 0x0C (R/W  32) PLL Control Register 0 */
  __IO  uint32_t                       PMC_PLL_CTRL1;      /**< Offset: 0x10 (R/W  32) PLL Control Register 1 */
  __IO  uint32_t                       PMC_PLL_CTRL2;      /**< Offset: 0x14 (R/W  32) PLL Control Register 2 */
  __IO  uint32_t                       PMC_PLL_SSR;        /**< Offset: 0x18 (R/W  32) PLL Spread Spectrum Register */
  __IO  uint32_t                       PMC_PLL_ACR;        /**< Offset: 0x1C (R/W  32) PLL Analog Control Register */
  __IO  uint32_t                       PMC_PLL_UPDT;       /**< Offset: 0x20 (R/W  32) PLL Update Register */
  __IO  uint32_t                       CKGR_MOR;           /**< Offset: 0x24 (R/W  32) Main Oscillator Register */
  __IO  uint32_t                       CKGR_MCFR;          /**< Offset: 0x28 (R/W  32) Main Clock Frequency Register */
  __IO  uint32_t                       PMC_CPU_CKR;        /**< Offset: 0x2C (R/W  32) CPU Clock Register */
  __I   uint8_t                        Reserved1[0x14];
  __IO  uint32_t                       PMC_PCK[3];         /**< Offset: 0x44 (R/W  32) Programmable Clock Register (chid = 0) */
  __I   uint8_t                        Reserved2[0x14];
  __O   uint32_t                       PMC_IER;            /**< Offset: 0x64 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       PMC_IDR;            /**< Offset: 0x68 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       PMC_SR;             /**< Offset: 0x6C (R/   32) Status Register */
  __I   uint32_t                       PMC_IMR;            /**< Offset: 0x70 (R/   32) Interrupt Mask Register */
  __IO  uint32_t                       PMC_FSMR;           /**< Offset: 0x74 (R/W  32) Fast Start-up Mode Register */
  __IO  uint32_t                       PMC_WCR;            /**< Offset: 0x78 (R/W  32) Wake-up Control Register */
  __O   uint32_t                       PMC_FOCR;           /**< Offset: 0x7C ( /W  32) Fault Output Clear Register */
  __IO  uint32_t                       PMC_CPFSMR;         /**< Offset: 0x80 (R/W  32) Coprocessor Fast Start-up Mode Register */
  __IO  uint32_t                       PMC_WPMR;           /**< Offset: 0x84 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       PMC_WPSR;           /**< Offset: 0x88 (R/   32) Write Protection Status Register */
  __IO  uint32_t                       PMC_PCR;            /**< Offset: 0x8C (R/W  32) Peripheral Control Register */
  __IO  uint32_t                       PMC_OCR;            /**< Offset: 0x90 (R/W  32) Oscillator Calibration Register */
  __I   uint32_t                       PMC_SLPWK_AIPR;     /**< Offset: 0x94 (R/   32) Partial Wake-up Activity In Progress Register */
  __IO  uint32_t                       PMC_SLPWKCR;        /**< Offset: 0x98 (R/W  32) Partial Wake-up Control Register */
  __I   uint8_t                        Reserved3[0x04];
  __IO  uint32_t                       PMC_MCKLIM;         /**< Offset: 0xA0 (R/W  32) MCK0 Monitor Limits Register */
  __I   uint32_t                       PMC_CSR0;           /**< Offset: 0xA4 (R/   32) Peripheral Clock Status Register 0 */
  __I   uint32_t                       PMC_CSR1;           /**< Offset: 0xA8 (R/   32) Peripheral Clock Status Register 1 */
  __I   uint32_t                       PMC_CSR2;           /**< Offset: 0xAC (R/   32) Peripheral Clock Status Register 2 */
  __I   uint32_t                       PMC_CSR3;           /**< Offset: 0xB0 (R/   32) Peripheral Clock Status Register 3 */
  __I   uint8_t                        Reserved4[0x10];
  __I   uint32_t                       PMC_GCSR0;          /**< Offset: 0xC4 (R/   32) Generic Clock Status Register 0 */
  __I   uint32_t                       PMC_GCSR1;          /**< Offset: 0xC8 (R/   32) Generic Clock Status Register 1 */
  __I   uint32_t                       PMC_GCSR2;          /**< Offset: 0xCC (R/   32) Generic Clock Status Register 2 */
  __I   uint32_t                       PMC_GCSR3;          /**< Offset: 0xD0 (R/   32) Generic Clock Status Register 3 */
  __I   uint8_t                        Reserved5[0x10];
  __O   uint32_t                       PMC_PLL_IER;        /**< Offset: 0xE4 ( /W  32) PLL Interrupt Enable Register */
  __O   uint32_t                       PMC_PLL_IDR;        /**< Offset: 0xE8 ( /W  32) PLL Interrupt Disable Register */
  __I   uint32_t                       PMC_PLL_IMR;        /**< Offset: 0xEC (R/   32) PLL Interrupt Mask Register */
  __I   uint32_t                       PMC_PLL_ISR0;       /**< Offset: 0xF0 (R/   32) PLL Interrupt Status Register 0 */
  __I   uint32_t                       PMC_PLL_ISR1;       /**< Offset: 0xF4 (R/   32) PLL Interrupt Status Register 1 */
} pmc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CXMTSH_PMC_COMPONENT_H_ */
