/*
 * Component description for SLCDC
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
#ifndef _PIC32CXMTSH_SLCDC_COMPONENT_H_
#define _PIC32CXMTSH_SLCDC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SLCDC                                        */
/* ************************************************************************** */

/* -------- SLCDC_CR : (SLCDC Offset: 0x00) ( /W 32) Control Register -------- */
#define SLCDC_CR_LCDEN_Pos                    _UINT32_(0)                                          /* (SLCDC_CR) Enable the LCDC Position */
#define SLCDC_CR_LCDEN_Msk                    (_UINT32_(0x1) << SLCDC_CR_LCDEN_Pos)                /* (SLCDC_CR) Enable the LCDC Mask */
#define SLCDC_CR_LCDEN(value)                 (SLCDC_CR_LCDEN_Msk & (_UINT32_(value) << SLCDC_CR_LCDEN_Pos)) /* Assigment of value for LCDEN in the SLCDC_CR register */
#define SLCDC_CR_LCDDIS_Pos                   _UINT32_(1)                                          /* (SLCDC_CR) Disable LCDC Position */
#define SLCDC_CR_LCDDIS_Msk                   (_UINT32_(0x1) << SLCDC_CR_LCDDIS_Pos)               /* (SLCDC_CR) Disable LCDC Mask */
#define SLCDC_CR_LCDDIS(value)                (SLCDC_CR_LCDDIS_Msk & (_UINT32_(value) << SLCDC_CR_LCDDIS_Pos)) /* Assigment of value for LCDDIS in the SLCDC_CR register */
#define SLCDC_CR_SWRST_Pos                    _UINT32_(3)                                          /* (SLCDC_CR) Software Reset Position */
#define SLCDC_CR_SWRST_Msk                    (_UINT32_(0x1) << SLCDC_CR_SWRST_Pos)                /* (SLCDC_CR) Software Reset Mask */
#define SLCDC_CR_SWRST(value)                 (SLCDC_CR_SWRST_Msk & (_UINT32_(value) << SLCDC_CR_SWRST_Pos)) /* Assigment of value for SWRST in the SLCDC_CR register */
#define SLCDC_CR_FRZDF_Pos                    _UINT32_(6)                                          /* (SLCDC_CR) Freeze Display Panel Features Configuration Position */
#define SLCDC_CR_FRZDF_Msk                    (_UINT32_(0x1) << SLCDC_CR_FRZDF_Pos)                /* (SLCDC_CR) Freeze Display Panel Features Configuration Mask */
#define SLCDC_CR_FRZDF(value)                 (SLCDC_CR_FRZDF_Msk & (_UINT32_(value) << SLCDC_CR_FRZDF_Pos)) /* Assigment of value for FRZDF in the SLCDC_CR register */
#define SLCDC_CR_FRZMAP_Pos                   _UINT32_(7)                                          /* (SLCDC_CR) Freeze Remap Configuration Position */
#define SLCDC_CR_FRZMAP_Msk                   (_UINT32_(0x1) << SLCDC_CR_FRZMAP_Pos)               /* (SLCDC_CR) Freeze Remap Configuration Mask */
#define SLCDC_CR_FRZMAP(value)                (SLCDC_CR_FRZMAP_Msk & (_UINT32_(value) << SLCDC_CR_FRZMAP_Pos)) /* Assigment of value for FRZMAP in the SLCDC_CR register */
#define SLCDC_CR_FRZKEY_Pos                   _UINT32_(8)                                          /* (SLCDC_CR) Freeze Key (write-only) Position */
#define SLCDC_CR_FRZKEY_Msk                   (_UINT32_(0xFF) << SLCDC_CR_FRZKEY_Pos)              /* (SLCDC_CR) Freeze Key (write-only) Mask */
#define SLCDC_CR_FRZKEY(value)                (SLCDC_CR_FRZKEY_Msk & (_UINT32_(value) << SLCDC_CR_FRZKEY_Pos)) /* Assigment of value for FRZKEY in the SLCDC_CR register */
#define   SLCDC_CR_FRZKEY_PASSWD_Val          _UINT32_(0x4E)                                       /* (SLCDC_CR) Writing any other value in this field aborts the write operation of the FRZDF bit or FRZMAP bit. Always reads as 0.  */
#define SLCDC_CR_FRZKEY_PASSWD                (SLCDC_CR_FRZKEY_PASSWD_Val << SLCDC_CR_FRZKEY_Pos)  /* (SLCDC_CR) Writing any other value in this field aborts the write operation of the FRZDF bit or FRZMAP bit. Always reads as 0. Position  */
#define SLCDC_CR_Msk                          _UINT32_(0x0000FFCB)                                 /* (SLCDC_CR) Register Mask  */


/* -------- SLCDC_MR : (SLCDC Offset: 0x04) (R/W 32) Mode Register -------- */
#define SLCDC_MR_COMSEL_Pos                   _UINT32_(0)                                          /* (SLCDC_MR) Selection of the Number of Commons Position */
#define SLCDC_MR_COMSEL_Msk                   (_UINT32_(0x7) << SLCDC_MR_COMSEL_Pos)               /* (SLCDC_MR) Selection of the Number of Commons Mask */
#define SLCDC_MR_COMSEL(value)                (SLCDC_MR_COMSEL_Msk & (_UINT32_(value) << SLCDC_MR_COMSEL_Pos)) /* Assigment of value for COMSEL in the SLCDC_MR register */
#define   SLCDC_MR_COMSEL_COM_0_Val           _UINT32_(0x0)                                        /* (SLCDC_MR) COM0 is driven by SLCDC, COM1:7 are driven by digital function  */
#define   SLCDC_MR_COMSEL_COM_0TO1_Val        _UINT32_(0x1)                                        /* (SLCDC_MR) COM0:1 are driven by SLCDC, COM2:7 are driven by digital function  */
#define   SLCDC_MR_COMSEL_COM_0TO2_Val        _UINT32_(0x2)                                        /* (SLCDC_MR) COM0:2 are driven by SLCDC, COM3:7 are driven by digital function  */
#define   SLCDC_MR_COMSEL_COM_0TO3_Val        _UINT32_(0x3)                                        /* (SLCDC_MR) COM0:3 are driven by SLCDC, COM4:7 are driven by digital function  */
#define   SLCDC_MR_COMSEL_COM_0TO4_Val        _UINT32_(0x4)                                        /* (SLCDC_MR) COM0:4 are driven by SLCDC, COM5:7 are driven by digital function  */
#define   SLCDC_MR_COMSEL_COM_0TO5_Val        _UINT32_(0x5)                                        /* (SLCDC_MR) COM0:5 are driven by SLCDC, COM6:7 are driven by digital function  */
#define   SLCDC_MR_COMSEL_COM_0TO6_Val        _UINT32_(0x6)                                        /* (SLCDC_MR) COM0:6 are driven by SLCDC, COM7 driven by digital function  */
#define   SLCDC_MR_COMSEL_COM_0TO7_Val        _UINT32_(0x7)                                        /* (SLCDC_MR) COM0:7 are driven by SLCDC, no COM pin driven by digital function  */
#define SLCDC_MR_COMSEL_COM_0                 (SLCDC_MR_COMSEL_COM_0_Val << SLCDC_MR_COMSEL_Pos)   /* (SLCDC_MR) COM0 is driven by SLCDC, COM1:7 are driven by digital function Position  */
#define SLCDC_MR_COMSEL_COM_0TO1              (SLCDC_MR_COMSEL_COM_0TO1_Val << SLCDC_MR_COMSEL_Pos) /* (SLCDC_MR) COM0:1 are driven by SLCDC, COM2:7 are driven by digital function Position  */
#define SLCDC_MR_COMSEL_COM_0TO2              (SLCDC_MR_COMSEL_COM_0TO2_Val << SLCDC_MR_COMSEL_Pos) /* (SLCDC_MR) COM0:2 are driven by SLCDC, COM3:7 are driven by digital function Position  */
#define SLCDC_MR_COMSEL_COM_0TO3              (SLCDC_MR_COMSEL_COM_0TO3_Val << SLCDC_MR_COMSEL_Pos) /* (SLCDC_MR) COM0:3 are driven by SLCDC, COM4:7 are driven by digital function Position  */
#define SLCDC_MR_COMSEL_COM_0TO4              (SLCDC_MR_COMSEL_COM_0TO4_Val << SLCDC_MR_COMSEL_Pos) /* (SLCDC_MR) COM0:4 are driven by SLCDC, COM5:7 are driven by digital function Position  */
#define SLCDC_MR_COMSEL_COM_0TO5              (SLCDC_MR_COMSEL_COM_0TO5_Val << SLCDC_MR_COMSEL_Pos) /* (SLCDC_MR) COM0:5 are driven by SLCDC, COM6:7 are driven by digital function Position  */
#define SLCDC_MR_COMSEL_COM_0TO6              (SLCDC_MR_COMSEL_COM_0TO6_Val << SLCDC_MR_COMSEL_Pos) /* (SLCDC_MR) COM0:6 are driven by SLCDC, COM7 driven by digital function Position  */
#define SLCDC_MR_COMSEL_COM_0TO7              (SLCDC_MR_COMSEL_COM_0TO7_Val << SLCDC_MR_COMSEL_Pos) /* (SLCDC_MR) COM0:7 are driven by SLCDC, no COM pin driven by digital function Position  */
#define SLCDC_MR_SEGSEL_Pos                   _UINT32_(8)                                          /* (SLCDC_MR) Selection of the Number of Segments Position */
#define SLCDC_MR_SEGSEL_Msk                   (_UINT32_(0x3F) << SLCDC_MR_SEGSEL_Pos)              /* (SLCDC_MR) Selection of the Number of Segments Mask */
#define SLCDC_MR_SEGSEL(value)                (SLCDC_MR_SEGSEL_Msk & (_UINT32_(value) << SLCDC_MR_SEGSEL_Pos)) /* Assigment of value for SEGSEL in the SLCDC_MR register */
#define SLCDC_MR_BUFTIME_Pos                  _UINT32_(16)                                         /* (SLCDC_MR) Buffer On-Time Position */
#define SLCDC_MR_BUFTIME_Msk                  (_UINT32_(0xF) << SLCDC_MR_BUFTIME_Pos)              /* (SLCDC_MR) Buffer On-Time Mask */
#define SLCDC_MR_BUFTIME(value)               (SLCDC_MR_BUFTIME_Msk & (_UINT32_(value) << SLCDC_MR_BUFTIME_Pos)) /* Assigment of value for BUFTIME in the SLCDC_MR register */
#define   SLCDC_MR_BUFTIME_OFF_Val            _UINT32_(0x0)                                        /* (SLCDC_MR) Nominal drive time is 0% of SLCK period  */
#define   SLCDC_MR_BUFTIME_X2_SLCK_PERIOD_Val _UINT32_(0x1)                                        /* (SLCDC_MR) Nominal drive time is 2 periods of SLCK clock  */
#define   SLCDC_MR_BUFTIME_X4_SLCK_PERIOD_Val _UINT32_(0x2)                                        /* (SLCDC_MR) Nominal drive time is 4 periods of SLCK clock  */
#define   SLCDC_MR_BUFTIME_X8_SLCK_PERIOD_Val _UINT32_(0x3)                                        /* (SLCDC_MR) Nominal drive time is 8 periods of SLCK clock  */
#define   SLCDC_MR_BUFTIME_X16_SLCK_PERIOD_Val _UINT32_(0x4)                                        /* (SLCDC_MR) Nominal drive time is 16 periods of SLCK clock  */
#define   SLCDC_MR_BUFTIME_X32_SLCK_PERIOD_Val _UINT32_(0x5)                                        /* (SLCDC_MR) Nominal drive time is 32 periods of SLCK clock  */
#define   SLCDC_MR_BUFTIME_X64_SLCK_PERIOD_Val _UINT32_(0x6)                                        /* (SLCDC_MR) Nominal drive time is 64 periods of SLCK clock  */
#define   SLCDC_MR_BUFTIME_X128_SLCK_PERIOD_Val _UINT32_(0x7)                                        /* (SLCDC_MR) Nominal drive time is 128 periods of SLCK clock  */
#define   SLCDC_MR_BUFTIME_PERCENT_50_Val     _UINT32_(0x8)                                        /* (SLCDC_MR) Nominal drive time is 50% of SLCK period  */
#define   SLCDC_MR_BUFTIME_PERCENT_100_Val    _UINT32_(0x9)                                        /* (SLCDC_MR) Nominal drive time is 100% of SLCK period  */
#define SLCDC_MR_BUFTIME_OFF                  (SLCDC_MR_BUFTIME_OFF_Val << SLCDC_MR_BUFTIME_Pos)   /* (SLCDC_MR) Nominal drive time is 0% of SLCK period Position  */
#define SLCDC_MR_BUFTIME_X2_SLCK_PERIOD       (SLCDC_MR_BUFTIME_X2_SLCK_PERIOD_Val << SLCDC_MR_BUFTIME_Pos) /* (SLCDC_MR) Nominal drive time is 2 periods of SLCK clock Position  */
#define SLCDC_MR_BUFTIME_X4_SLCK_PERIOD       (SLCDC_MR_BUFTIME_X4_SLCK_PERIOD_Val << SLCDC_MR_BUFTIME_Pos) /* (SLCDC_MR) Nominal drive time is 4 periods of SLCK clock Position  */
#define SLCDC_MR_BUFTIME_X8_SLCK_PERIOD       (SLCDC_MR_BUFTIME_X8_SLCK_PERIOD_Val << SLCDC_MR_BUFTIME_Pos) /* (SLCDC_MR) Nominal drive time is 8 periods of SLCK clock Position  */
#define SLCDC_MR_BUFTIME_X16_SLCK_PERIOD      (SLCDC_MR_BUFTIME_X16_SLCK_PERIOD_Val << SLCDC_MR_BUFTIME_Pos) /* (SLCDC_MR) Nominal drive time is 16 periods of SLCK clock Position  */
#define SLCDC_MR_BUFTIME_X32_SLCK_PERIOD      (SLCDC_MR_BUFTIME_X32_SLCK_PERIOD_Val << SLCDC_MR_BUFTIME_Pos) /* (SLCDC_MR) Nominal drive time is 32 periods of SLCK clock Position  */
#define SLCDC_MR_BUFTIME_X64_SLCK_PERIOD      (SLCDC_MR_BUFTIME_X64_SLCK_PERIOD_Val << SLCDC_MR_BUFTIME_Pos) /* (SLCDC_MR) Nominal drive time is 64 periods of SLCK clock Position  */
#define SLCDC_MR_BUFTIME_X128_SLCK_PERIOD     (SLCDC_MR_BUFTIME_X128_SLCK_PERIOD_Val << SLCDC_MR_BUFTIME_Pos) /* (SLCDC_MR) Nominal drive time is 128 periods of SLCK clock Position  */
#define SLCDC_MR_BUFTIME_PERCENT_50           (SLCDC_MR_BUFTIME_PERCENT_50_Val << SLCDC_MR_BUFTIME_Pos) /* (SLCDC_MR) Nominal drive time is 50% of SLCK period Position  */
#define SLCDC_MR_BUFTIME_PERCENT_100          (SLCDC_MR_BUFTIME_PERCENT_100_Val << SLCDC_MR_BUFTIME_Pos) /* (SLCDC_MR) Nominal drive time is 100% of SLCK period Position  */
#define SLCDC_MR_BIAS_Pos                     _UINT32_(20)                                         /* (SLCDC_MR) LCD Display Configuration Position */
#define SLCDC_MR_BIAS_Msk                     (_UINT32_(0x3) << SLCDC_MR_BIAS_Pos)                 /* (SLCDC_MR) LCD Display Configuration Mask */
#define SLCDC_MR_BIAS(value)                  (SLCDC_MR_BIAS_Msk & (_UINT32_(value) << SLCDC_MR_BIAS_Pos)) /* Assigment of value for BIAS in the SLCDC_MR register */
#define   SLCDC_MR_BIAS_STATIC_Val            _UINT32_(0x0)                                        /* (SLCDC_MR) Static  */
#define   SLCDC_MR_BIAS_BIAS_1_2_Val          _UINT32_(0x1)                                        /* (SLCDC_MR) Bias 1/2  */
#define   SLCDC_MR_BIAS_BIAS_1_3_Val          _UINT32_(0x2)                                        /* (SLCDC_MR) Bias 1/3  */
#define   SLCDC_MR_BIAS_BIAS_1_4_Val          _UINT32_(0x3)                                        /* (SLCDC_MR) Bias 1/4  */
#define SLCDC_MR_BIAS_STATIC                  (SLCDC_MR_BIAS_STATIC_Val << SLCDC_MR_BIAS_Pos)      /* (SLCDC_MR) Static Position  */
#define SLCDC_MR_BIAS_BIAS_1_2                (SLCDC_MR_BIAS_BIAS_1_2_Val << SLCDC_MR_BIAS_Pos)    /* (SLCDC_MR) Bias 1/2 Position  */
#define SLCDC_MR_BIAS_BIAS_1_3                (SLCDC_MR_BIAS_BIAS_1_3_Val << SLCDC_MR_BIAS_Pos)    /* (SLCDC_MR) Bias 1/3 Position  */
#define SLCDC_MR_BIAS_BIAS_1_4                (SLCDC_MR_BIAS_BIAS_1_4_Val << SLCDC_MR_BIAS_Pos)    /* (SLCDC_MR) Bias 1/4 Position  */
#define SLCDC_MR_LPMODE_Pos                   _UINT32_(24)                                         /* (SLCDC_MR) Low-Power Mode Position */
#define SLCDC_MR_LPMODE_Msk                   (_UINT32_(0x1) << SLCDC_MR_LPMODE_Pos)               /* (SLCDC_MR) Low-Power Mode Mask */
#define SLCDC_MR_LPMODE(value)                (SLCDC_MR_LPMODE_Msk & (_UINT32_(value) << SLCDC_MR_LPMODE_Pos)) /* Assigment of value for LPMODE in the SLCDC_MR register */
#define SLCDC_MR_Msk                          _UINT32_(0x013F3F07)                                 /* (SLCDC_MR) Register Mask  */


/* -------- SLCDC_FRR : (SLCDC Offset: 0x08) (R/W 32) Frame Rate Register -------- */
#define SLCDC_FRR_PRESC_Pos                   _UINT32_(0)                                          /* (SLCDC_FRR) Clock Prescaler Position */
#define SLCDC_FRR_PRESC_Msk                   (_UINT32_(0x7) << SLCDC_FRR_PRESC_Pos)               /* (SLCDC_FRR) Clock Prescaler Mask */
#define SLCDC_FRR_PRESC(value)                (SLCDC_FRR_PRESC_Msk & (_UINT32_(value) << SLCDC_FRR_PRESC_Pos)) /* Assigment of value for PRESC in the SLCDC_FRR register */
#define   SLCDC_FRR_PRESC_SLCK_DIV8_Val       _UINT32_(0x0)                                        /* (SLCDC_FRR) Slow clock is divided by 8  */
#define   SLCDC_FRR_PRESC_SLCK_DIV16_Val      _UINT32_(0x1)                                        /* (SLCDC_FRR) Slow clock is divided by 16  */
#define   SLCDC_FRR_PRESC_SLCK_DIV32_Val      _UINT32_(0x2)                                        /* (SLCDC_FRR) Slow clock is divided by 32  */
#define   SLCDC_FRR_PRESC_SLCK_DIV64_Val      _UINT32_(0x3)                                        /* (SLCDC_FRR) Slow clock is divided by 64  */
#define   SLCDC_FRR_PRESC_SLCK_DIV128_Val     _UINT32_(0x4)                                        /* (SLCDC_FRR) Slow clock is divided by 128  */
#define   SLCDC_FRR_PRESC_SLCK_DIV256_Val     _UINT32_(0x5)                                        /* (SLCDC_FRR) Slow clock is divided by 256  */
#define   SLCDC_FRR_PRESC_SLCK_DIV512_Val     _UINT32_(0x6)                                        /* (SLCDC_FRR) Slow clock is divided by 512  */
#define   SLCDC_FRR_PRESC_SLCK_DIV1024_Val    _UINT32_(0x7)                                        /* (SLCDC_FRR) Slow clock is divided by 1024  */
#define SLCDC_FRR_PRESC_SLCK_DIV8             (SLCDC_FRR_PRESC_SLCK_DIV8_Val << SLCDC_FRR_PRESC_Pos) /* (SLCDC_FRR) Slow clock is divided by 8 Position  */
#define SLCDC_FRR_PRESC_SLCK_DIV16            (SLCDC_FRR_PRESC_SLCK_DIV16_Val << SLCDC_FRR_PRESC_Pos) /* (SLCDC_FRR) Slow clock is divided by 16 Position  */
#define SLCDC_FRR_PRESC_SLCK_DIV32            (SLCDC_FRR_PRESC_SLCK_DIV32_Val << SLCDC_FRR_PRESC_Pos) /* (SLCDC_FRR) Slow clock is divided by 32 Position  */
#define SLCDC_FRR_PRESC_SLCK_DIV64            (SLCDC_FRR_PRESC_SLCK_DIV64_Val << SLCDC_FRR_PRESC_Pos) /* (SLCDC_FRR) Slow clock is divided by 64 Position  */
#define SLCDC_FRR_PRESC_SLCK_DIV128           (SLCDC_FRR_PRESC_SLCK_DIV128_Val << SLCDC_FRR_PRESC_Pos) /* (SLCDC_FRR) Slow clock is divided by 128 Position  */
#define SLCDC_FRR_PRESC_SLCK_DIV256           (SLCDC_FRR_PRESC_SLCK_DIV256_Val << SLCDC_FRR_PRESC_Pos) /* (SLCDC_FRR) Slow clock is divided by 256 Position  */
#define SLCDC_FRR_PRESC_SLCK_DIV512           (SLCDC_FRR_PRESC_SLCK_DIV512_Val << SLCDC_FRR_PRESC_Pos) /* (SLCDC_FRR) Slow clock is divided by 512 Position  */
#define SLCDC_FRR_PRESC_SLCK_DIV1024          (SLCDC_FRR_PRESC_SLCK_DIV1024_Val << SLCDC_FRR_PRESC_Pos) /* (SLCDC_FRR) Slow clock is divided by 1024 Position  */
#define SLCDC_FRR_DIV_Pos                     _UINT32_(8)                                          /* (SLCDC_FRR) Clock Division Position */
#define SLCDC_FRR_DIV_Msk                     (_UINT32_(0x7) << SLCDC_FRR_DIV_Pos)                 /* (SLCDC_FRR) Clock Division Mask */
#define SLCDC_FRR_DIV(value)                  (SLCDC_FRR_DIV_Msk & (_UINT32_(value) << SLCDC_FRR_DIV_Pos)) /* Assigment of value for DIV in the SLCDC_FRR register */
#define   SLCDC_FRR_DIV_PRESC_CLK_DIV1_Val    _UINT32_(0x0)                                        /* (SLCDC_FRR) Clock output from prescaler is divided by 1  */
#define   SLCDC_FRR_DIV_PRESC_CLK_DIV2_Val    _UINT32_(0x1)                                        /* (SLCDC_FRR) Clock output from prescaler is divided by 2  */
#define   SLCDC_FRR_DIV_PRESC_CLK_DIV3_Val    _UINT32_(0x2)                                        /* (SLCDC_FRR) Clock output from prescaler is divided by 3  */
#define   SLCDC_FRR_DIV_PRESC_CLK_DIV4_Val    _UINT32_(0x3)                                        /* (SLCDC_FRR) Clock output from prescaler is divided by 4  */
#define   SLCDC_FRR_DIV_PRESC_CLK_DIV5_Val    _UINT32_(0x4)                                        /* (SLCDC_FRR) Clock output from prescaler is divided by 5  */
#define   SLCDC_FRR_DIV_PRESC_CLK_DIV6_Val    _UINT32_(0x5)                                        /* (SLCDC_FRR) Clock output from prescaler is divided by 6  */
#define   SLCDC_FRR_DIV_PRESC_CLK_DIV7_Val    _UINT32_(0x6)                                        /* (SLCDC_FRR) Clock output from prescaler is divided by 7  */
#define   SLCDC_FRR_DIV_PRESC_CLK_DIV8_Val    _UINT32_(0x7)                                        /* (SLCDC_FRR) Clock output from prescaler is divided by 8  */
#define SLCDC_FRR_DIV_PRESC_CLK_DIV1          (SLCDC_FRR_DIV_PRESC_CLK_DIV1_Val << SLCDC_FRR_DIV_Pos) /* (SLCDC_FRR) Clock output from prescaler is divided by 1 Position  */
#define SLCDC_FRR_DIV_PRESC_CLK_DIV2          (SLCDC_FRR_DIV_PRESC_CLK_DIV2_Val << SLCDC_FRR_DIV_Pos) /* (SLCDC_FRR) Clock output from prescaler is divided by 2 Position  */
#define SLCDC_FRR_DIV_PRESC_CLK_DIV3          (SLCDC_FRR_DIV_PRESC_CLK_DIV3_Val << SLCDC_FRR_DIV_Pos) /* (SLCDC_FRR) Clock output from prescaler is divided by 3 Position  */
#define SLCDC_FRR_DIV_PRESC_CLK_DIV4          (SLCDC_FRR_DIV_PRESC_CLK_DIV4_Val << SLCDC_FRR_DIV_Pos) /* (SLCDC_FRR) Clock output from prescaler is divided by 4 Position  */
#define SLCDC_FRR_DIV_PRESC_CLK_DIV5          (SLCDC_FRR_DIV_PRESC_CLK_DIV5_Val << SLCDC_FRR_DIV_Pos) /* (SLCDC_FRR) Clock output from prescaler is divided by 5 Position  */
#define SLCDC_FRR_DIV_PRESC_CLK_DIV6          (SLCDC_FRR_DIV_PRESC_CLK_DIV6_Val << SLCDC_FRR_DIV_Pos) /* (SLCDC_FRR) Clock output from prescaler is divided by 6 Position  */
#define SLCDC_FRR_DIV_PRESC_CLK_DIV7          (SLCDC_FRR_DIV_PRESC_CLK_DIV7_Val << SLCDC_FRR_DIV_Pos) /* (SLCDC_FRR) Clock output from prescaler is divided by 7 Position  */
#define SLCDC_FRR_DIV_PRESC_CLK_DIV8          (SLCDC_FRR_DIV_PRESC_CLK_DIV8_Val << SLCDC_FRR_DIV_Pos) /* (SLCDC_FRR) Clock output from prescaler is divided by 8 Position  */
#define SLCDC_FRR_Msk                         _UINT32_(0x00000707)                                 /* (SLCDC_FRR) Register Mask  */


/* -------- SLCDC_DR : (SLCDC Offset: 0x0C) (R/W 32) Display Register -------- */
#define SLCDC_DR_DISPMODE_Pos                 _UINT32_(0)                                          /* (SLCDC_DR) Display Mode Register Position */
#define SLCDC_DR_DISPMODE_Msk                 (_UINT32_(0x7) << SLCDC_DR_DISPMODE_Pos)             /* (SLCDC_DR) Display Mode Register Mask */
#define SLCDC_DR_DISPMODE(value)              (SLCDC_DR_DISPMODE_Msk & (_UINT32_(value) << SLCDC_DR_DISPMODE_Pos)) /* Assigment of value for DISPMODE in the SLCDC_DR register */
#define   SLCDC_DR_DISPMODE_NORMAL_Val        _UINT32_(0x0)                                        /* (SLCDC_DR) Normal Mode-Latched data are displayed.  */
#define   SLCDC_DR_DISPMODE_FORCE_OFF_Val     _UINT32_(0x1)                                        /* (SLCDC_DR) Force Off Mode-All pixels are invisible. (The SLCDC memory is unchanged.)  */
#define   SLCDC_DR_DISPMODE_FORCE_ON_Val      _UINT32_(0x2)                                        /* (SLCDC_DR) Force On Mode-All pixels are visible. (The SLCDC memory is unchanged.)  */
#define   SLCDC_DR_DISPMODE_BLINKING_Val      _UINT32_(0x3)                                        /* (SLCDC_DR) Blinking Mode-All pixels are alternately turned off to the predefined state in SLCDC memory at LCDBLKFREQ frequency. (The SLCDC memory is unchanged.)  */
#define   SLCDC_DR_DISPMODE_INVERTED_Val      _UINT32_(0x4)                                        /* (SLCDC_DR) Inverted Mode-All pixels are set in the inverted state as defined in SLCDC memory. (The SLCDC memory is unchanged.)  */
#define   SLCDC_DR_DISPMODE_INVERTED_BLINK_Val _UINT32_(0x5)                                        /* (SLCDC_DR) Inverted Blinking Mode-All pixels are alternately turned off to the predefined opposite state in SLCDC memory at LCDBLKFREQ frequency. (The SLCDC memory is unchanged.)  */
#define   SLCDC_DR_DISPMODE_USER_BUFFER_LOAD_Val _UINT32_(0x6)                                        /* (SLCDC_DR) User Buffer Only Load Mode-Blocks the automatic transfer from User Buffer to Display Buffer.  */
#define   SLCDC_DR_DISPMODE_BUFFERS_SWAP_Val  _UINT32_(0x7)                                        /* (SLCDC_DR) Buffer Swap Mode-All pixels are alternatively assigned to the state defined in the User Buffer, then to the state defined in the Display Buffer at LCDBLKFREQ frequency.  */
#define SLCDC_DR_DISPMODE_NORMAL              (SLCDC_DR_DISPMODE_NORMAL_Val << SLCDC_DR_DISPMODE_Pos) /* (SLCDC_DR) Normal Mode-Latched data are displayed. Position  */
#define SLCDC_DR_DISPMODE_FORCE_OFF           (SLCDC_DR_DISPMODE_FORCE_OFF_Val << SLCDC_DR_DISPMODE_Pos) /* (SLCDC_DR) Force Off Mode-All pixels are invisible. (The SLCDC memory is unchanged.) Position  */
#define SLCDC_DR_DISPMODE_FORCE_ON            (SLCDC_DR_DISPMODE_FORCE_ON_Val << SLCDC_DR_DISPMODE_Pos) /* (SLCDC_DR) Force On Mode-All pixels are visible. (The SLCDC memory is unchanged.) Position  */
#define SLCDC_DR_DISPMODE_BLINKING            (SLCDC_DR_DISPMODE_BLINKING_Val << SLCDC_DR_DISPMODE_Pos) /* (SLCDC_DR) Blinking Mode-All pixels are alternately turned off to the predefined state in SLCDC memory at LCDBLKFREQ frequency. (The SLCDC memory is unchanged.) Position  */
#define SLCDC_DR_DISPMODE_INVERTED            (SLCDC_DR_DISPMODE_INVERTED_Val << SLCDC_DR_DISPMODE_Pos) /* (SLCDC_DR) Inverted Mode-All pixels are set in the inverted state as defined in SLCDC memory. (The SLCDC memory is unchanged.) Position  */
#define SLCDC_DR_DISPMODE_INVERTED_BLINK      (SLCDC_DR_DISPMODE_INVERTED_BLINK_Val << SLCDC_DR_DISPMODE_Pos) /* (SLCDC_DR) Inverted Blinking Mode-All pixels are alternately turned off to the predefined opposite state in SLCDC memory at LCDBLKFREQ frequency. (The SLCDC memory is unchanged.) Position  */
#define SLCDC_DR_DISPMODE_USER_BUFFER_LOAD    (SLCDC_DR_DISPMODE_USER_BUFFER_LOAD_Val << SLCDC_DR_DISPMODE_Pos) /* (SLCDC_DR) User Buffer Only Load Mode-Blocks the automatic transfer from User Buffer to Display Buffer. Position  */
#define SLCDC_DR_DISPMODE_BUFFERS_SWAP        (SLCDC_DR_DISPMODE_BUFFERS_SWAP_Val << SLCDC_DR_DISPMODE_Pos) /* (SLCDC_DR) Buffer Swap Mode-All pixels are alternatively assigned to the state defined in the User Buffer, then to the state defined in the Display Buffer at LCDBLKFREQ frequency. Position  */
#define SLCDC_DR_LCDBLKFREQ_Pos               _UINT32_(8)                                          /* (SLCDC_DR) LCD Blinking Frequency Selection Position */
#define SLCDC_DR_LCDBLKFREQ_Msk               (_UINT32_(0xFF) << SLCDC_DR_LCDBLKFREQ_Pos)          /* (SLCDC_DR) LCD Blinking Frequency Selection Mask */
#define SLCDC_DR_LCDBLKFREQ(value)            (SLCDC_DR_LCDBLKFREQ_Msk & (_UINT32_(value) << SLCDC_DR_LCDBLKFREQ_Pos)) /* Assigment of value for LCDBLKFREQ in the SLCDC_DR register */
#define SLCDC_DR_Msk                          _UINT32_(0x0000FF07)                                 /* (SLCDC_DR) Register Mask  */


/* -------- SLCDC_SR : (SLCDC Offset: 0x10) ( R/ 32) Status Register -------- */
#define SLCDC_SR_ENA_Pos                      _UINT32_(0)                                          /* (SLCDC_SR) Enable Status (Automatically Set/Reset) Position */
#define SLCDC_SR_ENA_Msk                      (_UINT32_(0x1) << SLCDC_SR_ENA_Pos)                  /* (SLCDC_SR) Enable Status (Automatically Set/Reset) Mask */
#define SLCDC_SR_ENA(value)                   (SLCDC_SR_ENA_Msk & (_UINT32_(value) << SLCDC_SR_ENA_Pos)) /* Assigment of value for ENA in the SLCDC_SR register */
#define SLCDC_SR_DFFRZS_Pos                   _UINT32_(6)                                          /* (SLCDC_SR) Display Panel Features Configuration Freeze Status Position */
#define SLCDC_SR_DFFRZS_Msk                   (_UINT32_(0x1) << SLCDC_SR_DFFRZS_Pos)               /* (SLCDC_SR) Display Panel Features Configuration Freeze Status Mask */
#define SLCDC_SR_DFFRZS(value)                (SLCDC_SR_DFFRZS_Msk & (_UINT32_(value) << SLCDC_SR_DFFRZS_Pos)) /* Assigment of value for DFFRZS in the SLCDC_SR register */
#define SLCDC_SR_MAPFRZS_Pos                  _UINT32_(7)                                          /* (SLCDC_SR) Remapping Configuration Freeze Status Position */
#define SLCDC_SR_MAPFRZS_Msk                  (_UINT32_(0x1) << SLCDC_SR_MAPFRZS_Pos)              /* (SLCDC_SR) Remapping Configuration Freeze Status Mask */
#define SLCDC_SR_MAPFRZS(value)               (SLCDC_SR_MAPFRZS_Msk & (_UINT32_(value) << SLCDC_SR_MAPFRZS_Pos)) /* Assigment of value for MAPFRZS in the SLCDC_SR register */
#define SLCDC_SR_Msk                          _UINT32_(0x000000C1)                                 /* (SLCDC_SR) Register Mask  */


/* -------- SLCDC_IER : (SLCDC Offset: 0x20) ( /W 32) Interrupt Enable Register -------- */
#define SLCDC_IER_ENDFRAME_Pos                _UINT32_(0)                                          /* (SLCDC_IER) End of Frame Interrupt Enable Position */
#define SLCDC_IER_ENDFRAME_Msk                (_UINT32_(0x1) << SLCDC_IER_ENDFRAME_Pos)            /* (SLCDC_IER) End of Frame Interrupt Enable Mask */
#define SLCDC_IER_ENDFRAME(value)             (SLCDC_IER_ENDFRAME_Msk & (_UINT32_(value) << SLCDC_IER_ENDFRAME_Pos)) /* Assigment of value for ENDFRAME in the SLCDC_IER register */
#define SLCDC_IER_DIS_Pos                     _UINT32_(2)                                          /* (SLCDC_IER) Disable Completion Interrupt Enable Position */
#define SLCDC_IER_DIS_Msk                     (_UINT32_(0x1) << SLCDC_IER_DIS_Pos)                 /* (SLCDC_IER) Disable Completion Interrupt Enable Mask */
#define SLCDC_IER_DIS(value)                  (SLCDC_IER_DIS_Msk & (_UINT32_(value) << SLCDC_IER_DIS_Pos)) /* Assigment of value for DIS in the SLCDC_IER register */
#define SLCDC_IER_Msk                         _UINT32_(0x00000005)                                 /* (SLCDC_IER) Register Mask  */


/* -------- SLCDC_IDR : (SLCDC Offset: 0x24) ( /W 32) Interrupt Disable Register -------- */
#define SLCDC_IDR_ENDFRAME_Pos                _UINT32_(0)                                          /* (SLCDC_IDR) End of Frame Interrupt Disable Position */
#define SLCDC_IDR_ENDFRAME_Msk                (_UINT32_(0x1) << SLCDC_IDR_ENDFRAME_Pos)            /* (SLCDC_IDR) End of Frame Interrupt Disable Mask */
#define SLCDC_IDR_ENDFRAME(value)             (SLCDC_IDR_ENDFRAME_Msk & (_UINT32_(value) << SLCDC_IDR_ENDFRAME_Pos)) /* Assigment of value for ENDFRAME in the SLCDC_IDR register */
#define SLCDC_IDR_DIS_Pos                     _UINT32_(2)                                          /* (SLCDC_IDR) Disable Completion Interrupt Disable Position */
#define SLCDC_IDR_DIS_Msk                     (_UINT32_(0x1) << SLCDC_IDR_DIS_Pos)                 /* (SLCDC_IDR) Disable Completion Interrupt Disable Mask */
#define SLCDC_IDR_DIS(value)                  (SLCDC_IDR_DIS_Msk & (_UINT32_(value) << SLCDC_IDR_DIS_Pos)) /* Assigment of value for DIS in the SLCDC_IDR register */
#define SLCDC_IDR_Msk                         _UINT32_(0x00000005)                                 /* (SLCDC_IDR) Register Mask  */


/* -------- SLCDC_IMR : (SLCDC Offset: 0x28) ( R/ 32) Interrupt Mask Register -------- */
#define SLCDC_IMR_ENDFRAME_Pos                _UINT32_(0)                                          /* (SLCDC_IMR) End of Frame Interrupt Mask Position */
#define SLCDC_IMR_ENDFRAME_Msk                (_UINT32_(0x1) << SLCDC_IMR_ENDFRAME_Pos)            /* (SLCDC_IMR) End of Frame Interrupt Mask Mask */
#define SLCDC_IMR_ENDFRAME(value)             (SLCDC_IMR_ENDFRAME_Msk & (_UINT32_(value) << SLCDC_IMR_ENDFRAME_Pos)) /* Assigment of value for ENDFRAME in the SLCDC_IMR register */
#define SLCDC_IMR_DIS_Pos                     _UINT32_(2)                                          /* (SLCDC_IMR) Disable Completion Interrupt Mask Position */
#define SLCDC_IMR_DIS_Msk                     (_UINT32_(0x1) << SLCDC_IMR_DIS_Pos)                 /* (SLCDC_IMR) Disable Completion Interrupt Mask Mask */
#define SLCDC_IMR_DIS(value)                  (SLCDC_IMR_DIS_Msk & (_UINT32_(value) << SLCDC_IMR_DIS_Pos)) /* Assigment of value for DIS in the SLCDC_IMR register */
#define SLCDC_IMR_Msk                         _UINT32_(0x00000005)                                 /* (SLCDC_IMR) Register Mask  */


/* -------- SLCDC_ISR : (SLCDC Offset: 0x2C) ( R/ 32) Interrupt Status Register -------- */
#define SLCDC_ISR_ENDFRAME_Pos                _UINT32_(0)                                          /* (SLCDC_ISR) End of Frame Interrupt Status Position */
#define SLCDC_ISR_ENDFRAME_Msk                (_UINT32_(0x1) << SLCDC_ISR_ENDFRAME_Pos)            /* (SLCDC_ISR) End of Frame Interrupt Status Mask */
#define SLCDC_ISR_ENDFRAME(value)             (SLCDC_ISR_ENDFRAME_Msk & (_UINT32_(value) << SLCDC_ISR_ENDFRAME_Pos)) /* Assigment of value for ENDFRAME in the SLCDC_ISR register */
#define SLCDC_ISR_DIS_Pos                     _UINT32_(2)                                          /* (SLCDC_ISR) Disable Completion Interrupt Status Position */
#define SLCDC_ISR_DIS_Msk                     (_UINT32_(0x1) << SLCDC_ISR_DIS_Pos)                 /* (SLCDC_ISR) Disable Completion Interrupt Status Mask */
#define SLCDC_ISR_DIS(value)                  (SLCDC_ISR_DIS_Msk & (_UINT32_(value) << SLCDC_ISR_DIS_Pos)) /* Assigment of value for DIS in the SLCDC_ISR register */
#define SLCDC_ISR_Msk                         _UINT32_(0x00000005)                                 /* (SLCDC_ISR) Register Mask  */


/* -------- SLCDC_SMR0 : (SLCDC Offset: 0x30) (R/W 32) Segment Map Register 0 -------- */
#define SLCDC_SMR0_LCD0_Pos                   _UINT32_(0)                                          /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD0_Msk                   (_UINT32_(0x1) << SLCDC_SMR0_LCD0_Pos)               /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD0(value)                (SLCDC_SMR0_LCD0_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD0_Pos)) /* Assigment of value for LCD0 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD1_Pos                   _UINT32_(1)                                          /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD1_Msk                   (_UINT32_(0x1) << SLCDC_SMR0_LCD1_Pos)               /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD1(value)                (SLCDC_SMR0_LCD1_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD1_Pos)) /* Assigment of value for LCD1 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD2_Pos                   _UINT32_(2)                                          /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD2_Msk                   (_UINT32_(0x1) << SLCDC_SMR0_LCD2_Pos)               /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD2(value)                (SLCDC_SMR0_LCD2_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD2_Pos)) /* Assigment of value for LCD2 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD3_Pos                   _UINT32_(3)                                          /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD3_Msk                   (_UINT32_(0x1) << SLCDC_SMR0_LCD3_Pos)               /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD3(value)                (SLCDC_SMR0_LCD3_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD3_Pos)) /* Assigment of value for LCD3 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD4_Pos                   _UINT32_(4)                                          /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD4_Msk                   (_UINT32_(0x1) << SLCDC_SMR0_LCD4_Pos)               /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD4(value)                (SLCDC_SMR0_LCD4_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD4_Pos)) /* Assigment of value for LCD4 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD5_Pos                   _UINT32_(5)                                          /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD5_Msk                   (_UINT32_(0x1) << SLCDC_SMR0_LCD5_Pos)               /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD5(value)                (SLCDC_SMR0_LCD5_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD5_Pos)) /* Assigment of value for LCD5 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD6_Pos                   _UINT32_(6)                                          /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD6_Msk                   (_UINT32_(0x1) << SLCDC_SMR0_LCD6_Pos)               /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD6(value)                (SLCDC_SMR0_LCD6_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD6_Pos)) /* Assigment of value for LCD6 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD7_Pos                   _UINT32_(7)                                          /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD7_Msk                   (_UINT32_(0x1) << SLCDC_SMR0_LCD7_Pos)               /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD7(value)                (SLCDC_SMR0_LCD7_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD7_Pos)) /* Assigment of value for LCD7 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD8_Pos                   _UINT32_(8)                                          /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD8_Msk                   (_UINT32_(0x1) << SLCDC_SMR0_LCD8_Pos)               /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD8(value)                (SLCDC_SMR0_LCD8_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD8_Pos)) /* Assigment of value for LCD8 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD9_Pos                   _UINT32_(9)                                          /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD9_Msk                   (_UINT32_(0x1) << SLCDC_SMR0_LCD9_Pos)               /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD9(value)                (SLCDC_SMR0_LCD9_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD9_Pos)) /* Assigment of value for LCD9 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD10_Pos                  _UINT32_(10)                                         /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD10_Msk                  (_UINT32_(0x1) << SLCDC_SMR0_LCD10_Pos)              /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD10(value)               (SLCDC_SMR0_LCD10_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD10_Pos)) /* Assigment of value for LCD10 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD11_Pos                  _UINT32_(11)                                         /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD11_Msk                  (_UINT32_(0x1) << SLCDC_SMR0_LCD11_Pos)              /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD11(value)               (SLCDC_SMR0_LCD11_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD11_Pos)) /* Assigment of value for LCD11 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD12_Pos                  _UINT32_(12)                                         /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD12_Msk                  (_UINT32_(0x1) << SLCDC_SMR0_LCD12_Pos)              /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD12(value)               (SLCDC_SMR0_LCD12_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD12_Pos)) /* Assigment of value for LCD12 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD13_Pos                  _UINT32_(13)                                         /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD13_Msk                  (_UINT32_(0x1) << SLCDC_SMR0_LCD13_Pos)              /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD13(value)               (SLCDC_SMR0_LCD13_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD13_Pos)) /* Assigment of value for LCD13 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD14_Pos                  _UINT32_(14)                                         /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD14_Msk                  (_UINT32_(0x1) << SLCDC_SMR0_LCD14_Pos)              /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD14(value)               (SLCDC_SMR0_LCD14_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD14_Pos)) /* Assigment of value for LCD14 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD15_Pos                  _UINT32_(15)                                         /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD15_Msk                  (_UINT32_(0x1) << SLCDC_SMR0_LCD15_Pos)              /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD15(value)               (SLCDC_SMR0_LCD15_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD15_Pos)) /* Assigment of value for LCD15 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD16_Pos                  _UINT32_(16)                                         /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD16_Msk                  (_UINT32_(0x1) << SLCDC_SMR0_LCD16_Pos)              /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD16(value)               (SLCDC_SMR0_LCD16_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD16_Pos)) /* Assigment of value for LCD16 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD17_Pos                  _UINT32_(17)                                         /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD17_Msk                  (_UINT32_(0x1) << SLCDC_SMR0_LCD17_Pos)              /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD17(value)               (SLCDC_SMR0_LCD17_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD17_Pos)) /* Assigment of value for LCD17 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD18_Pos                  _UINT32_(18)                                         /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD18_Msk                  (_UINT32_(0x1) << SLCDC_SMR0_LCD18_Pos)              /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD18(value)               (SLCDC_SMR0_LCD18_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD18_Pos)) /* Assigment of value for LCD18 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD19_Pos                  _UINT32_(19)                                         /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD19_Msk                  (_UINT32_(0x1) << SLCDC_SMR0_LCD19_Pos)              /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD19(value)               (SLCDC_SMR0_LCD19_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD19_Pos)) /* Assigment of value for LCD19 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD20_Pos                  _UINT32_(20)                                         /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD20_Msk                  (_UINT32_(0x1) << SLCDC_SMR0_LCD20_Pos)              /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD20(value)               (SLCDC_SMR0_LCD20_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD20_Pos)) /* Assigment of value for LCD20 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD21_Pos                  _UINT32_(21)                                         /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD21_Msk                  (_UINT32_(0x1) << SLCDC_SMR0_LCD21_Pos)              /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD21(value)               (SLCDC_SMR0_LCD21_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD21_Pos)) /* Assigment of value for LCD21 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD22_Pos                  _UINT32_(22)                                         /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD22_Msk                  (_UINT32_(0x1) << SLCDC_SMR0_LCD22_Pos)              /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD22(value)               (SLCDC_SMR0_LCD22_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD22_Pos)) /* Assigment of value for LCD22 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD23_Pos                  _UINT32_(23)                                         /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD23_Msk                  (_UINT32_(0x1) << SLCDC_SMR0_LCD23_Pos)              /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD23(value)               (SLCDC_SMR0_LCD23_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD23_Pos)) /* Assigment of value for LCD23 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD24_Pos                  _UINT32_(24)                                         /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD24_Msk                  (_UINT32_(0x1) << SLCDC_SMR0_LCD24_Pos)              /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD24(value)               (SLCDC_SMR0_LCD24_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD24_Pos)) /* Assigment of value for LCD24 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD25_Pos                  _UINT32_(25)                                         /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD25_Msk                  (_UINT32_(0x1) << SLCDC_SMR0_LCD25_Pos)              /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD25(value)               (SLCDC_SMR0_LCD25_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD25_Pos)) /* Assigment of value for LCD25 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD26_Pos                  _UINT32_(26)                                         /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD26_Msk                  (_UINT32_(0x1) << SLCDC_SMR0_LCD26_Pos)              /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD26(value)               (SLCDC_SMR0_LCD26_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD26_Pos)) /* Assigment of value for LCD26 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD27_Pos                  _UINT32_(27)                                         /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD27_Msk                  (_UINT32_(0x1) << SLCDC_SMR0_LCD27_Pos)              /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD27(value)               (SLCDC_SMR0_LCD27_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD27_Pos)) /* Assigment of value for LCD27 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD28_Pos                  _UINT32_(28)                                         /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD28_Msk                  (_UINT32_(0x1) << SLCDC_SMR0_LCD28_Pos)              /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD28(value)               (SLCDC_SMR0_LCD28_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD28_Pos)) /* Assigment of value for LCD28 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD29_Pos                  _UINT32_(29)                                         /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD29_Msk                  (_UINT32_(0x1) << SLCDC_SMR0_LCD29_Pos)              /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD29(value)               (SLCDC_SMR0_LCD29_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD29_Pos)) /* Assigment of value for LCD29 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD30_Pos                  _UINT32_(30)                                         /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD30_Msk                  (_UINT32_(0x1) << SLCDC_SMR0_LCD30_Pos)              /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD30(value)               (SLCDC_SMR0_LCD30_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD30_Pos)) /* Assigment of value for LCD30 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_LCD31_Pos                  _UINT32_(31)                                         /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Position */
#define SLCDC_SMR0_LCD31_Msk                  (_UINT32_(0x1) << SLCDC_SMR0_LCD31_Pos)              /* (SLCDC_SMR0) LCD Segment Mapped on SEGx I/O Pin Mask */
#define SLCDC_SMR0_LCD31(value)               (SLCDC_SMR0_LCD31_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD31_Pos)) /* Assigment of value for LCD31 in the SLCDC_SMR0 register */
#define SLCDC_SMR0_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (SLCDC_SMR0) Register Mask  */

#define SLCDC_SMR0_LCD_Pos                    _UINT32_(0)                                          /* (SLCDC_SMR0 Position) LCD Segment Mapped on SEGx I/O Pin */
#define SLCDC_SMR0_LCD_Msk                    (_UINT32_(0xFFFFFFFF) << SLCDC_SMR0_LCD_Pos)         /* (SLCDC_SMR0 Mask) LCD */
#define SLCDC_SMR0_LCD(value)                 (SLCDC_SMR0_LCD_Msk & (_UINT32_(value) << SLCDC_SMR0_LCD_Pos)) 

/* -------- SLCDC_WPMR : (SLCDC Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define SLCDC_WPMR_WPEN_Pos                   _UINT32_(0)                                          /* (SLCDC_WPMR) Write Protection Enable Position */
#define SLCDC_WPMR_WPEN_Msk                   (_UINT32_(0x1) << SLCDC_WPMR_WPEN_Pos)               /* (SLCDC_WPMR) Write Protection Enable Mask */
#define SLCDC_WPMR_WPEN(value)                (SLCDC_WPMR_WPEN_Msk & (_UINT32_(value) << SLCDC_WPMR_WPEN_Pos)) /* Assigment of value for WPEN in the SLCDC_WPMR register */
#define SLCDC_WPMR_WPITEN_Pos                 _UINT32_(1)                                          /* (SLCDC_WPMR) Write Protection Interrupt Enable Position */
#define SLCDC_WPMR_WPITEN_Msk                 (_UINT32_(0x1) << SLCDC_WPMR_WPITEN_Pos)             /* (SLCDC_WPMR) Write Protection Interrupt Enable Mask */
#define SLCDC_WPMR_WPITEN(value)              (SLCDC_WPMR_WPITEN_Msk & (_UINT32_(value) << SLCDC_WPMR_WPITEN_Pos)) /* Assigment of value for WPITEN in the SLCDC_WPMR register */
#define SLCDC_WPMR_WPCREN_Pos                 _UINT32_(2)                                          /* (SLCDC_WPMR) Write Protection Control Enable Position */
#define SLCDC_WPMR_WPCREN_Msk                 (_UINT32_(0x1) << SLCDC_WPMR_WPCREN_Pos)             /* (SLCDC_WPMR) Write Protection Control Enable Mask */
#define SLCDC_WPMR_WPCREN(value)              (SLCDC_WPMR_WPCREN_Msk & (_UINT32_(value) << SLCDC_WPMR_WPCREN_Pos)) /* Assigment of value for WPCREN in the SLCDC_WPMR register */
#define SLCDC_WPMR_WPKEY_Pos                  _UINT32_(8)                                          /* (SLCDC_WPMR) Write Protection Key Position */
#define SLCDC_WPMR_WPKEY_Msk                  (_UINT32_(0xFFFFFF) << SLCDC_WPMR_WPKEY_Pos)         /* (SLCDC_WPMR) Write Protection Key Mask */
#define SLCDC_WPMR_WPKEY(value)               (SLCDC_WPMR_WPKEY_Msk & (_UINT32_(value) << SLCDC_WPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the SLCDC_WPMR register */
#define   SLCDC_WPMR_WPKEY_PASSWD_Val         _UINT32_(0x534C43)                                   /* (SLCDC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0.  */
#define SLCDC_WPMR_WPKEY_PASSWD               (SLCDC_WPMR_WPKEY_PASSWD_Val << SLCDC_WPMR_WPKEY_Pos) /* (SLCDC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0. Position  */
#define SLCDC_WPMR_Msk                        _UINT32_(0xFFFFFF07)                                 /* (SLCDC_WPMR) Register Mask  */


/* -------- SLCDC_LMEMR0 : (SLCDC Offset: 0x200) (R/W 32) LSB Memory Register (com = 0) -------- */
#define SLCDC_LMEMR0_LPIXEL_Pos               _UINT32_(0)                                          /* (SLCDC_LMEMR0) LSB Pixels Pattern Associated to COMx Terminal Position */
#define SLCDC_LMEMR0_LPIXEL_Msk               (_UINT32_(0xFFFFFFFF) << SLCDC_LMEMR0_LPIXEL_Pos)    /* (SLCDC_LMEMR0) LSB Pixels Pattern Associated to COMx Terminal Mask */
#define SLCDC_LMEMR0_LPIXEL(value)            (SLCDC_LMEMR0_LPIXEL_Msk & (_UINT32_(value) << SLCDC_LMEMR0_LPIXEL_Pos)) /* Assigment of value for LPIXEL in the SLCDC_LMEMR0 register */
#define SLCDC_LMEMR0_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (SLCDC_LMEMR0) Register Mask  */


/* -------- SLCDC_LMEMR1 : (SLCDC Offset: 0x208) (R/W 32) LSB Memory Register (com = 1) -------- */
#define SLCDC_LMEMR1_LPIXEL_Pos               _UINT32_(0)                                          /* (SLCDC_LMEMR1) LSB Pixels Pattern Associated to COMx Terminal Position */
#define SLCDC_LMEMR1_LPIXEL_Msk               (_UINT32_(0xFFFFFFFF) << SLCDC_LMEMR1_LPIXEL_Pos)    /* (SLCDC_LMEMR1) LSB Pixels Pattern Associated to COMx Terminal Mask */
#define SLCDC_LMEMR1_LPIXEL(value)            (SLCDC_LMEMR1_LPIXEL_Msk & (_UINT32_(value) << SLCDC_LMEMR1_LPIXEL_Pos)) /* Assigment of value for LPIXEL in the SLCDC_LMEMR1 register */
#define SLCDC_LMEMR1_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (SLCDC_LMEMR1) Register Mask  */


/* -------- SLCDC_LMEMR2 : (SLCDC Offset: 0x210) (R/W 32) LSB Memory Register (com = 2) -------- */
#define SLCDC_LMEMR2_LPIXEL_Pos               _UINT32_(0)                                          /* (SLCDC_LMEMR2) LSB Pixels Pattern Associated to COMx Terminal Position */
#define SLCDC_LMEMR2_LPIXEL_Msk               (_UINT32_(0xFFFFFFFF) << SLCDC_LMEMR2_LPIXEL_Pos)    /* (SLCDC_LMEMR2) LSB Pixels Pattern Associated to COMx Terminal Mask */
#define SLCDC_LMEMR2_LPIXEL(value)            (SLCDC_LMEMR2_LPIXEL_Msk & (_UINT32_(value) << SLCDC_LMEMR2_LPIXEL_Pos)) /* Assigment of value for LPIXEL in the SLCDC_LMEMR2 register */
#define SLCDC_LMEMR2_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (SLCDC_LMEMR2) Register Mask  */


/* -------- SLCDC_LMEMR3 : (SLCDC Offset: 0x218) (R/W 32) LSB Memory Register (com = 3) -------- */
#define SLCDC_LMEMR3_LPIXEL_Pos               _UINT32_(0)                                          /* (SLCDC_LMEMR3) LSB Pixels Pattern Associated to COMx Terminal Position */
#define SLCDC_LMEMR3_LPIXEL_Msk               (_UINT32_(0xFFFFFFFF) << SLCDC_LMEMR3_LPIXEL_Pos)    /* (SLCDC_LMEMR3) LSB Pixels Pattern Associated to COMx Terminal Mask */
#define SLCDC_LMEMR3_LPIXEL(value)            (SLCDC_LMEMR3_LPIXEL_Msk & (_UINT32_(value) << SLCDC_LMEMR3_LPIXEL_Pos)) /* Assigment of value for LPIXEL in the SLCDC_LMEMR3 register */
#define SLCDC_LMEMR3_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (SLCDC_LMEMR3) Register Mask  */


/* -------- SLCDC_LMEMR4 : (SLCDC Offset: 0x220) (R/W 32) LSB Memory Register (com = 4) -------- */
#define SLCDC_LMEMR4_LPIXEL_Pos               _UINT32_(0)                                          /* (SLCDC_LMEMR4) LSB Pixels Pattern Associated to COMx Terminal Position */
#define SLCDC_LMEMR4_LPIXEL_Msk               (_UINT32_(0xFFFFFFFF) << SLCDC_LMEMR4_LPIXEL_Pos)    /* (SLCDC_LMEMR4) LSB Pixels Pattern Associated to COMx Terminal Mask */
#define SLCDC_LMEMR4_LPIXEL(value)            (SLCDC_LMEMR4_LPIXEL_Msk & (_UINT32_(value) << SLCDC_LMEMR4_LPIXEL_Pos)) /* Assigment of value for LPIXEL in the SLCDC_LMEMR4 register */
#define SLCDC_LMEMR4_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (SLCDC_LMEMR4) Register Mask  */


/* -------- SLCDC_LMEMR5 : (SLCDC Offset: 0x228) (R/W 32) LSB Memory Register (com = 5) -------- */
#define SLCDC_LMEMR5_LPIXEL_Pos               _UINT32_(0)                                          /* (SLCDC_LMEMR5) LSB Pixels Pattern Associated to COMx Terminal Position */
#define SLCDC_LMEMR5_LPIXEL_Msk               (_UINT32_(0xFFFFFFFF) << SLCDC_LMEMR5_LPIXEL_Pos)    /* (SLCDC_LMEMR5) LSB Pixels Pattern Associated to COMx Terminal Mask */
#define SLCDC_LMEMR5_LPIXEL(value)            (SLCDC_LMEMR5_LPIXEL_Msk & (_UINT32_(value) << SLCDC_LMEMR5_LPIXEL_Pos)) /* Assigment of value for LPIXEL in the SLCDC_LMEMR5 register */
#define SLCDC_LMEMR5_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (SLCDC_LMEMR5) Register Mask  */


/* -------- SLCDC_LMEMR6 : (SLCDC Offset: 0x230) (R/W 32) LSB Memory Register (com = 6) -------- */
#define SLCDC_LMEMR6_LPIXEL_Pos               _UINT32_(0)                                          /* (SLCDC_LMEMR6) LSB Pixels Pattern Associated to COMx Terminal Position */
#define SLCDC_LMEMR6_LPIXEL_Msk               (_UINT32_(0xFFFFFFFF) << SLCDC_LMEMR6_LPIXEL_Pos)    /* (SLCDC_LMEMR6) LSB Pixels Pattern Associated to COMx Terminal Mask */
#define SLCDC_LMEMR6_LPIXEL(value)            (SLCDC_LMEMR6_LPIXEL_Msk & (_UINT32_(value) << SLCDC_LMEMR6_LPIXEL_Pos)) /* Assigment of value for LPIXEL in the SLCDC_LMEMR6 register */
#define SLCDC_LMEMR6_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (SLCDC_LMEMR6) Register Mask  */


/* -------- SLCDC_LMEMR7 : (SLCDC Offset: 0x238) (R/W 32) LSB Memory Register (com = 7) -------- */
#define SLCDC_LMEMR7_LPIXEL_Pos               _UINT32_(0)                                          /* (SLCDC_LMEMR7) LSB Pixels Pattern Associated to COMx Terminal Position */
#define SLCDC_LMEMR7_LPIXEL_Msk               (_UINT32_(0xFFFFFFFF) << SLCDC_LMEMR7_LPIXEL_Pos)    /* (SLCDC_LMEMR7) LSB Pixels Pattern Associated to COMx Terminal Mask */
#define SLCDC_LMEMR7_LPIXEL(value)            (SLCDC_LMEMR7_LPIXEL_Msk & (_UINT32_(value) << SLCDC_LMEMR7_LPIXEL_Pos)) /* Assigment of value for LPIXEL in the SLCDC_LMEMR7 register */
#define SLCDC_LMEMR7_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (SLCDC_LMEMR7) Register Mask  */


/** \brief SLCDC register offsets definitions */
#define SLCDC_CR_REG_OFST              _UINT32_(0x00)      /* (SLCDC_CR) Control Register Offset */
#define SLCDC_MR_REG_OFST              _UINT32_(0x04)      /* (SLCDC_MR) Mode Register Offset */
#define SLCDC_FRR_REG_OFST             _UINT32_(0x08)      /* (SLCDC_FRR) Frame Rate Register Offset */
#define SLCDC_DR_REG_OFST              _UINT32_(0x0C)      /* (SLCDC_DR) Display Register Offset */
#define SLCDC_SR_REG_OFST              _UINT32_(0x10)      /* (SLCDC_SR) Status Register Offset */
#define SLCDC_IER_REG_OFST             _UINT32_(0x20)      /* (SLCDC_IER) Interrupt Enable Register Offset */
#define SLCDC_IDR_REG_OFST             _UINT32_(0x24)      /* (SLCDC_IDR) Interrupt Disable Register Offset */
#define SLCDC_IMR_REG_OFST             _UINT32_(0x28)      /* (SLCDC_IMR) Interrupt Mask Register Offset */
#define SLCDC_ISR_REG_OFST             _UINT32_(0x2C)      /* (SLCDC_ISR) Interrupt Status Register Offset */
#define SLCDC_SMR0_REG_OFST            _UINT32_(0x30)      /* (SLCDC_SMR0) Segment Map Register 0 Offset */
#define SLCDC_WPMR_REG_OFST            _UINT32_(0xE4)      /* (SLCDC_WPMR) Write Protection Mode Register Offset */
#define SLCDC_LMEMR0_REG_OFST          _UINT32_(0x200)     /* (SLCDC_LMEMR0) LSB Memory Register (com = 0) Offset */
#define SLCDC_LMEMR1_REG_OFST          _UINT32_(0x208)     /* (SLCDC_LMEMR1) LSB Memory Register (com = 1) Offset */
#define SLCDC_LMEMR2_REG_OFST          _UINT32_(0x210)     /* (SLCDC_LMEMR2) LSB Memory Register (com = 2) Offset */
#define SLCDC_LMEMR3_REG_OFST          _UINT32_(0x218)     /* (SLCDC_LMEMR3) LSB Memory Register (com = 3) Offset */
#define SLCDC_LMEMR4_REG_OFST          _UINT32_(0x220)     /* (SLCDC_LMEMR4) LSB Memory Register (com = 4) Offset */
#define SLCDC_LMEMR5_REG_OFST          _UINT32_(0x228)     /* (SLCDC_LMEMR5) LSB Memory Register (com = 5) Offset */
#define SLCDC_LMEMR6_REG_OFST          _UINT32_(0x230)     /* (SLCDC_LMEMR6) LSB Memory Register (com = 6) Offset */
#define SLCDC_LMEMR7_REG_OFST          _UINT32_(0x238)     /* (SLCDC_LMEMR7) LSB Memory Register (com = 7) Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SLCDC register API structure */
typedef struct
{
  __O   uint32_t                       SLCDC_CR;           /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       SLCDC_MR;           /**< Offset: 0x04 (R/W  32) Mode Register */
  __IO  uint32_t                       SLCDC_FRR;          /**< Offset: 0x08 (R/W  32) Frame Rate Register */
  __IO  uint32_t                       SLCDC_DR;           /**< Offset: 0x0C (R/W  32) Display Register */
  __I   uint32_t                       SLCDC_SR;           /**< Offset: 0x10 (R/   32) Status Register */
  __I   uint8_t                        Reserved1[0x0C];
  __O   uint32_t                       SLCDC_IER;          /**< Offset: 0x20 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       SLCDC_IDR;          /**< Offset: 0x24 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       SLCDC_IMR;          /**< Offset: 0x28 (R/   32) Interrupt Mask Register */
  __I   uint32_t                       SLCDC_ISR;          /**< Offset: 0x2C (R/   32) Interrupt Status Register */
  __IO  uint32_t                       SLCDC_SMR0;         /**< Offset: 0x30 (R/W  32) Segment Map Register 0 */
  __I   uint8_t                        Reserved2[0xB0];
  __IO  uint32_t                       SLCDC_WPMR;         /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint8_t                        Reserved3[0x118];
  __IO  uint32_t                       SLCDC_LMEMR0;       /**< Offset: 0x200 (R/W  32) LSB Memory Register (com = 0) */
  __I   uint8_t                        Reserved4[0x04];
  __IO  uint32_t                       SLCDC_LMEMR1;       /**< Offset: 0x208 (R/W  32) LSB Memory Register (com = 1) */
  __I   uint8_t                        Reserved5[0x04];
  __IO  uint32_t                       SLCDC_LMEMR2;       /**< Offset: 0x210 (R/W  32) LSB Memory Register (com = 2) */
  __I   uint8_t                        Reserved6[0x04];
  __IO  uint32_t                       SLCDC_LMEMR3;       /**< Offset: 0x218 (R/W  32) LSB Memory Register (com = 3) */
  __I   uint8_t                        Reserved7[0x04];
  __IO  uint32_t                       SLCDC_LMEMR4;       /**< Offset: 0x220 (R/W  32) LSB Memory Register (com = 4) */
  __I   uint8_t                        Reserved8[0x04];
  __IO  uint32_t                       SLCDC_LMEMR5;       /**< Offset: 0x228 (R/W  32) LSB Memory Register (com = 5) */
  __I   uint8_t                        Reserved9[0x04];
  __IO  uint32_t                       SLCDC_LMEMR6;       /**< Offset: 0x230 (R/W  32) LSB Memory Register (com = 6) */
  __I   uint8_t                        Reserved10[0x04];
  __IO  uint32_t                       SLCDC_LMEMR7;       /**< Offset: 0x238 (R/W  32) LSB Memory Register (com = 7) */
} slcdc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CXMTSH_SLCDC_COMPONENT_H_ */
