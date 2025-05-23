/*
 * Component description for MCLK
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

/*  file generated from device description file (ATDF) version 2024-11-05T16:47:43Z  */
#ifndef _PIC32CMGC00_MCLK_COMPONENT_H_
#define _PIC32CMGC00_MCLK_COMPONENT_H_

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR MCLK                      */
/* ************************************************************************** */

/* -------- MCLK_INTENCLR : (MCLK Offset: 0x00) (R/W 32) Interrupt Enable Clear Register -------- */
#define MCLK_INTENCLR_RESETVALUE              _UINT32_(0x00)                                       /*  (MCLK_INTENCLR) Interrupt Enable Clear Register  Reset Value */

#define MCLK_INTENCLR_CKRDY_Pos               _UINT32_(0)                                          /* (MCLK_INTENCLR) Clock Ready Interrupt Enable Clear Position */
#define MCLK_INTENCLR_CKRDY_Msk               (_UINT32_(0x1) << MCLK_INTENCLR_CKRDY_Pos)           /* (MCLK_INTENCLR) Clock Ready Interrupt Enable Clear Mask */
#define MCLK_INTENCLR_CKRDY(value)            (MCLK_INTENCLR_CKRDY_Msk & (_UINT32_(value) << MCLK_INTENCLR_CKRDY_Pos)) /* Assignment of value for CKRDY in the MCLK_INTENCLR register */
#define   MCLK_INTENCLR_CKRDY_0_Val           _UINT32_(0x0)                                        /* (MCLK_INTENCLR) The Clock Ready interrupt is disabled  */
#define   MCLK_INTENCLR_CKRDY_1_Val           _UINT32_(0x1)                                        /* (MCLK_INTENCLR) The Clock Ready interrupt is enabled.  */
#define MCLK_INTENCLR_CKRDY_0                 (MCLK_INTENCLR_CKRDY_0_Val << MCLK_INTENCLR_CKRDY_Pos) /* (MCLK_INTENCLR) The Clock Ready interrupt is disabled Position */
#define MCLK_INTENCLR_CKRDY_1                 (MCLK_INTENCLR_CKRDY_1_Val << MCLK_INTENCLR_CKRDY_Pos) /* (MCLK_INTENCLR) The Clock Ready interrupt is enabled. Position */
#define MCLK_INTENCLR_Msk                     _UINT32_(0x00000001)                                 /* (MCLK_INTENCLR) Register Mask  */


/* -------- MCLK_INTENSET : (MCLK Offset: 0x04) (R/W 32) Interrupt Enable Set Register -------- */
#define MCLK_INTENSET_RESETVALUE              _UINT32_(0x00)                                       /*  (MCLK_INTENSET) Interrupt Enable Set Register  Reset Value */

#define MCLK_INTENSET_CKRDY_Pos               _UINT32_(0)                                          /* (MCLK_INTENSET) Clock Ready Interrupt Enable Set Position */
#define MCLK_INTENSET_CKRDY_Msk               (_UINT32_(0x1) << MCLK_INTENSET_CKRDY_Pos)           /* (MCLK_INTENSET) Clock Ready Interrupt Enable Set Mask */
#define MCLK_INTENSET_CKRDY(value)            (MCLK_INTENSET_CKRDY_Msk & (_UINT32_(value) << MCLK_INTENSET_CKRDY_Pos)) /* Assignment of value for CKRDY in the MCLK_INTENSET register */
#define   MCLK_INTENSET_CKRDY_0_Val           _UINT32_(0x0)                                        /* (MCLK_INTENSET) The Clock Ready interrupt is disabled.  */
#define   MCLK_INTENSET_CKRDY_1_Val           _UINT32_(0x1)                                        /* (MCLK_INTENSET) The Clock Ready interrupt is enabled.  */
#define MCLK_INTENSET_CKRDY_0                 (MCLK_INTENSET_CKRDY_0_Val << MCLK_INTENSET_CKRDY_Pos) /* (MCLK_INTENSET) The Clock Ready interrupt is disabled. Position */
#define MCLK_INTENSET_CKRDY_1                 (MCLK_INTENSET_CKRDY_1_Val << MCLK_INTENSET_CKRDY_Pos) /* (MCLK_INTENSET) The Clock Ready interrupt is enabled. Position */
#define MCLK_INTENSET_Msk                     _UINT32_(0x00000001)                                 /* (MCLK_INTENSET) Register Mask  */


/* -------- MCLK_INTFLAG : (MCLK Offset: 0x08) ( /W 32) Interrupt Flag Status Register -------- */
#define MCLK_INTFLAG_RESETVALUE               _UINT32_(0x01)                                       /*  (MCLK_INTFLAG) Interrupt Flag Status Register  Reset Value */

#define MCLK_INTFLAG_CKRDY_Pos                _UINT32_(0)                                          /* (MCLK_INTFLAG) Clock Ready Interrupt Flag Position */
#define MCLK_INTFLAG_CKRDY_Msk                (_UINT32_(0x1) << MCLK_INTFLAG_CKRDY_Pos)            /* (MCLK_INTFLAG) Clock Ready Interrupt Flag Mask */
#define MCLK_INTFLAG_CKRDY(value)             (MCLK_INTFLAG_CKRDY_Msk & (_UINT32_(value) << MCLK_INTFLAG_CKRDY_Pos)) /* Assignment of value for CKRDY in the MCLK_INTFLAG register */
#define MCLK_INTFLAG_Msk                      _UINT32_(0x00000001)                                 /* (MCLK_INTFLAG) Register Mask  */


/* -------- MCLK_CLKDIV : (MCLK Offset: 0x0C) (R/W 32) Clock Divider Control n Register -------- */
#define MCLK_CLKDIV_RESETVALUE                _UINT32_(0x00)                                       /*  (MCLK_CLKDIV) Clock Divider Control n Register  Reset Value */

#define MCLK_CLKDIV_DIV_Pos                   _UINT32_(0)                                          /* (MCLK_CLKDIV) Clock Domain n Division Factor Position */
#define MCLK_CLKDIV_DIV_Msk                   (_UINT32_(0xFF) << MCLK_CLKDIV_DIV_Pos)              /* (MCLK_CLKDIV) Clock Domain n Division Factor Mask */
#define MCLK_CLKDIV_DIV(value)                (MCLK_CLKDIV_DIV_Msk & (_UINT32_(value) << MCLK_CLKDIV_DIV_Pos)) /* Assignment of value for DIV in the MCLK_CLKDIV register */
#define   MCLK_CLKDIV_DIV_DIV1_Val            _UINT32_(0x1)                                        /* (MCLK_CLKDIV) Divide by 1  */
#define   MCLK_CLKDIV_DIV_DIV2_Val            _UINT32_(0x2)                                        /* (MCLK_CLKDIV) Divide by 2  */
#define   MCLK_CLKDIV_DIV_DIV4_Val            _UINT32_(0x4)                                        /* (MCLK_CLKDIV) Divide by 4  */
#define   MCLK_CLKDIV_DIV_DIV8_Val            _UINT32_(0x8)                                        /* (MCLK_CLKDIV) Divide by 8  */
#define   MCLK_CLKDIV_DIV_DIV16_Val           _UINT32_(0x10)                                       /* (MCLK_CLKDIV) Divide by 16  */
#define   MCLK_CLKDIV_DIV_DIV32_Val           _UINT32_(0x20)                                       /* (MCLK_CLKDIV) Divide by 32  */
#define   MCLK_CLKDIV_DIV_DIV64_Val           _UINT32_(0x40)                                       /* (MCLK_CLKDIV) Divide by 64  */
#define   MCLK_CLKDIV_DIV_DIV128_Val          _UINT32_(0x80)                                       /* (MCLK_CLKDIV) Divide by 128  */
#define MCLK_CLKDIV_DIV_DIV1                  (MCLK_CLKDIV_DIV_DIV1_Val << MCLK_CLKDIV_DIV_Pos)    /* (MCLK_CLKDIV) Divide by 1 Position */
#define MCLK_CLKDIV_DIV_DIV2                  (MCLK_CLKDIV_DIV_DIV2_Val << MCLK_CLKDIV_DIV_Pos)    /* (MCLK_CLKDIV) Divide by 2 Position */
#define MCLK_CLKDIV_DIV_DIV4                  (MCLK_CLKDIV_DIV_DIV4_Val << MCLK_CLKDIV_DIV_Pos)    /* (MCLK_CLKDIV) Divide by 4 Position */
#define MCLK_CLKDIV_DIV_DIV8                  (MCLK_CLKDIV_DIV_DIV8_Val << MCLK_CLKDIV_DIV_Pos)    /* (MCLK_CLKDIV) Divide by 8 Position */
#define MCLK_CLKDIV_DIV_DIV16                 (MCLK_CLKDIV_DIV_DIV16_Val << MCLK_CLKDIV_DIV_Pos)   /* (MCLK_CLKDIV) Divide by 16 Position */
#define MCLK_CLKDIV_DIV_DIV32                 (MCLK_CLKDIV_DIV_DIV32_Val << MCLK_CLKDIV_DIV_Pos)   /* (MCLK_CLKDIV) Divide by 32 Position */
#define MCLK_CLKDIV_DIV_DIV64                 (MCLK_CLKDIV_DIV_DIV64_Val << MCLK_CLKDIV_DIV_Pos)   /* (MCLK_CLKDIV) Divide by 64 Position */
#define MCLK_CLKDIV_DIV_DIV128                (MCLK_CLKDIV_DIV_DIV128_Val << MCLK_CLKDIV_DIV_Pos)  /* (MCLK_CLKDIV) Divide by 128 Position */
#define MCLK_CLKDIV_Msk                       _UINT32_(0x000000FF)                                 /* (MCLK_CLKDIV) Register Mask  */


/* -------- MCLK_CLKMSK : (MCLK Offset: 0x3C) (R/W 32) Peripheral Clock Enable Mask n Register -------- */
#define MCLK_CLKMSK_RESETVALUE                _UINT32_(0x00)                                       /*  (MCLK_CLKMSK) Peripheral Clock Enable Mask n Register  Reset Value */

#define MCLK_CLKMSK_MASK0_Pos                 _UINT32_(0)                                          /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK0_Msk                 (_UINT32_(0x1) << MCLK_CLKMSK_MASK0_Pos)             /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK0(value)              (MCLK_CLKMSK_MASK0_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK0_Pos)) /* Assignment of value for MASK0 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK0_0_Val             _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK0_1_Val             _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK0_0                   (MCLK_CLKMSK_MASK0_0_Val << MCLK_CLKMSK_MASK0_Pos)   /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK0_1                   (MCLK_CLKMSK_MASK0_1_Val << MCLK_CLKMSK_MASK0_Pos)   /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK1_Pos                 _UINT32_(1)                                          /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK1_Msk                 (_UINT32_(0x1) << MCLK_CLKMSK_MASK1_Pos)             /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK1(value)              (MCLK_CLKMSK_MASK1_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK1_Pos)) /* Assignment of value for MASK1 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK1_0_Val             _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK1_1_Val             _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK1_0                   (MCLK_CLKMSK_MASK1_0_Val << MCLK_CLKMSK_MASK1_Pos)   /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK1_1                   (MCLK_CLKMSK_MASK1_1_Val << MCLK_CLKMSK_MASK1_Pos)   /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK2_Pos                 _UINT32_(2)                                          /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK2_Msk                 (_UINT32_(0x1) << MCLK_CLKMSK_MASK2_Pos)             /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK2(value)              (MCLK_CLKMSK_MASK2_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK2_Pos)) /* Assignment of value for MASK2 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK2_0_Val             _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK2_1_Val             _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK2_0                   (MCLK_CLKMSK_MASK2_0_Val << MCLK_CLKMSK_MASK2_Pos)   /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK2_1                   (MCLK_CLKMSK_MASK2_1_Val << MCLK_CLKMSK_MASK2_Pos)   /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK3_Pos                 _UINT32_(3)                                          /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK3_Msk                 (_UINT32_(0x1) << MCLK_CLKMSK_MASK3_Pos)             /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK3(value)              (MCLK_CLKMSK_MASK3_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK3_Pos)) /* Assignment of value for MASK3 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK3_0_Val             _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK3_1_Val             _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK3_0                   (MCLK_CLKMSK_MASK3_0_Val << MCLK_CLKMSK_MASK3_Pos)   /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK3_1                   (MCLK_CLKMSK_MASK3_1_Val << MCLK_CLKMSK_MASK3_Pos)   /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK4_Pos                 _UINT32_(4)                                          /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK4_Msk                 (_UINT32_(0x1) << MCLK_CLKMSK_MASK4_Pos)             /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK4(value)              (MCLK_CLKMSK_MASK4_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK4_Pos)) /* Assignment of value for MASK4 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK4_0_Val             _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK4_1_Val             _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK4_0                   (MCLK_CLKMSK_MASK4_0_Val << MCLK_CLKMSK_MASK4_Pos)   /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK4_1                   (MCLK_CLKMSK_MASK4_1_Val << MCLK_CLKMSK_MASK4_Pos)   /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK5_Pos                 _UINT32_(5)                                          /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK5_Msk                 (_UINT32_(0x1) << MCLK_CLKMSK_MASK5_Pos)             /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK5(value)              (MCLK_CLKMSK_MASK5_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK5_Pos)) /* Assignment of value for MASK5 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK5_0_Val             _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK5_1_Val             _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK5_0                   (MCLK_CLKMSK_MASK5_0_Val << MCLK_CLKMSK_MASK5_Pos)   /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK5_1                   (MCLK_CLKMSK_MASK5_1_Val << MCLK_CLKMSK_MASK5_Pos)   /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK6_Pos                 _UINT32_(6)                                          /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK6_Msk                 (_UINT32_(0x1) << MCLK_CLKMSK_MASK6_Pos)             /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK6(value)              (MCLK_CLKMSK_MASK6_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK6_Pos)) /* Assignment of value for MASK6 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK6_0_Val             _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK6_1_Val             _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK6_0                   (MCLK_CLKMSK_MASK6_0_Val << MCLK_CLKMSK_MASK6_Pos)   /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK6_1                   (MCLK_CLKMSK_MASK6_1_Val << MCLK_CLKMSK_MASK6_Pos)   /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK7_Pos                 _UINT32_(7)                                          /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK7_Msk                 (_UINT32_(0x1) << MCLK_CLKMSK_MASK7_Pos)             /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK7(value)              (MCLK_CLKMSK_MASK7_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK7_Pos)) /* Assignment of value for MASK7 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK7_0_Val             _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK7_1_Val             _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK7_0                   (MCLK_CLKMSK_MASK7_0_Val << MCLK_CLKMSK_MASK7_Pos)   /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK7_1                   (MCLK_CLKMSK_MASK7_1_Val << MCLK_CLKMSK_MASK7_Pos)   /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK8_Pos                 _UINT32_(8)                                          /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK8_Msk                 (_UINT32_(0x1) << MCLK_CLKMSK_MASK8_Pos)             /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK8(value)              (MCLK_CLKMSK_MASK8_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK8_Pos)) /* Assignment of value for MASK8 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK8_0_Val             _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK8_1_Val             _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK8_0                   (MCLK_CLKMSK_MASK8_0_Val << MCLK_CLKMSK_MASK8_Pos)   /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK8_1                   (MCLK_CLKMSK_MASK8_1_Val << MCLK_CLKMSK_MASK8_Pos)   /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK9_Pos                 _UINT32_(9)                                          /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK9_Msk                 (_UINT32_(0x1) << MCLK_CLKMSK_MASK9_Pos)             /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK9(value)              (MCLK_CLKMSK_MASK9_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK9_Pos)) /* Assignment of value for MASK9 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK9_0_Val             _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK9_1_Val             _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK9_0                   (MCLK_CLKMSK_MASK9_0_Val << MCLK_CLKMSK_MASK9_Pos)   /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK9_1                   (MCLK_CLKMSK_MASK9_1_Val << MCLK_CLKMSK_MASK9_Pos)   /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK10_Pos                _UINT32_(10)                                         /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK10_Msk                (_UINT32_(0x1) << MCLK_CLKMSK_MASK10_Pos)            /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK10(value)             (MCLK_CLKMSK_MASK10_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK10_Pos)) /* Assignment of value for MASK10 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK10_0_Val            _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK10_1_Val            _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK10_0                  (MCLK_CLKMSK_MASK10_0_Val << MCLK_CLKMSK_MASK10_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK10_1                  (MCLK_CLKMSK_MASK10_1_Val << MCLK_CLKMSK_MASK10_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK11_Pos                _UINT32_(11)                                         /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK11_Msk                (_UINT32_(0x1) << MCLK_CLKMSK_MASK11_Pos)            /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK11(value)             (MCLK_CLKMSK_MASK11_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK11_Pos)) /* Assignment of value for MASK11 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK11_0_Val            _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK11_1_Val            _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK11_0                  (MCLK_CLKMSK_MASK11_0_Val << MCLK_CLKMSK_MASK11_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK11_1                  (MCLK_CLKMSK_MASK11_1_Val << MCLK_CLKMSK_MASK11_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK12_Pos                _UINT32_(12)                                         /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK12_Msk                (_UINT32_(0x1) << MCLK_CLKMSK_MASK12_Pos)            /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK12(value)             (MCLK_CLKMSK_MASK12_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK12_Pos)) /* Assignment of value for MASK12 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK12_0_Val            _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK12_1_Val            _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK12_0                  (MCLK_CLKMSK_MASK12_0_Val << MCLK_CLKMSK_MASK12_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK12_1                  (MCLK_CLKMSK_MASK12_1_Val << MCLK_CLKMSK_MASK12_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK13_Pos                _UINT32_(13)                                         /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK13_Msk                (_UINT32_(0x1) << MCLK_CLKMSK_MASK13_Pos)            /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK13(value)             (MCLK_CLKMSK_MASK13_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK13_Pos)) /* Assignment of value for MASK13 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK13_0_Val            _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK13_1_Val            _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK13_0                  (MCLK_CLKMSK_MASK13_0_Val << MCLK_CLKMSK_MASK13_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK13_1                  (MCLK_CLKMSK_MASK13_1_Val << MCLK_CLKMSK_MASK13_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK14_Pos                _UINT32_(14)                                         /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK14_Msk                (_UINT32_(0x1) << MCLK_CLKMSK_MASK14_Pos)            /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK14(value)             (MCLK_CLKMSK_MASK14_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK14_Pos)) /* Assignment of value for MASK14 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK14_0_Val            _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK14_1_Val            _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK14_0                  (MCLK_CLKMSK_MASK14_0_Val << MCLK_CLKMSK_MASK14_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK14_1                  (MCLK_CLKMSK_MASK14_1_Val << MCLK_CLKMSK_MASK14_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK15_Pos                _UINT32_(15)                                         /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK15_Msk                (_UINT32_(0x1) << MCLK_CLKMSK_MASK15_Pos)            /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK15(value)             (MCLK_CLKMSK_MASK15_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK15_Pos)) /* Assignment of value for MASK15 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK15_0_Val            _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK15_1_Val            _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK15_0                  (MCLK_CLKMSK_MASK15_0_Val << MCLK_CLKMSK_MASK15_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK15_1                  (MCLK_CLKMSK_MASK15_1_Val << MCLK_CLKMSK_MASK15_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK16_Pos                _UINT32_(16)                                         /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK16_Msk                (_UINT32_(0x1) << MCLK_CLKMSK_MASK16_Pos)            /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK16(value)             (MCLK_CLKMSK_MASK16_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK16_Pos)) /* Assignment of value for MASK16 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK16_0_Val            _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK16_1_Val            _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK16_0                  (MCLK_CLKMSK_MASK16_0_Val << MCLK_CLKMSK_MASK16_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK16_1                  (MCLK_CLKMSK_MASK16_1_Val << MCLK_CLKMSK_MASK16_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK17_Pos                _UINT32_(17)                                         /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK17_Msk                (_UINT32_(0x1) << MCLK_CLKMSK_MASK17_Pos)            /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK17(value)             (MCLK_CLKMSK_MASK17_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK17_Pos)) /* Assignment of value for MASK17 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK17_0_Val            _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK17_1_Val            _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK17_0                  (MCLK_CLKMSK_MASK17_0_Val << MCLK_CLKMSK_MASK17_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK17_1                  (MCLK_CLKMSK_MASK17_1_Val << MCLK_CLKMSK_MASK17_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK18_Pos                _UINT32_(18)                                         /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK18_Msk                (_UINT32_(0x1) << MCLK_CLKMSK_MASK18_Pos)            /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK18(value)             (MCLK_CLKMSK_MASK18_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK18_Pos)) /* Assignment of value for MASK18 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK18_0_Val            _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK18_1_Val            _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK18_0                  (MCLK_CLKMSK_MASK18_0_Val << MCLK_CLKMSK_MASK18_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK18_1                  (MCLK_CLKMSK_MASK18_1_Val << MCLK_CLKMSK_MASK18_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK19_Pos                _UINT32_(19)                                         /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK19_Msk                (_UINT32_(0x1) << MCLK_CLKMSK_MASK19_Pos)            /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK19(value)             (MCLK_CLKMSK_MASK19_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK19_Pos)) /* Assignment of value for MASK19 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK19_0_Val            _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK19_1_Val            _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK19_0                  (MCLK_CLKMSK_MASK19_0_Val << MCLK_CLKMSK_MASK19_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK19_1                  (MCLK_CLKMSK_MASK19_1_Val << MCLK_CLKMSK_MASK19_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK20_Pos                _UINT32_(20)                                         /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK20_Msk                (_UINT32_(0x1) << MCLK_CLKMSK_MASK20_Pos)            /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK20(value)             (MCLK_CLKMSK_MASK20_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK20_Pos)) /* Assignment of value for MASK20 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK20_0_Val            _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK20_1_Val            _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK20_0                  (MCLK_CLKMSK_MASK20_0_Val << MCLK_CLKMSK_MASK20_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK20_1                  (MCLK_CLKMSK_MASK20_1_Val << MCLK_CLKMSK_MASK20_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK21_Pos                _UINT32_(21)                                         /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK21_Msk                (_UINT32_(0x1) << MCLK_CLKMSK_MASK21_Pos)            /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK21(value)             (MCLK_CLKMSK_MASK21_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK21_Pos)) /* Assignment of value for MASK21 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK21_0_Val            _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK21_1_Val            _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK21_0                  (MCLK_CLKMSK_MASK21_0_Val << MCLK_CLKMSK_MASK21_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK21_1                  (MCLK_CLKMSK_MASK21_1_Val << MCLK_CLKMSK_MASK21_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK22_Pos                _UINT32_(22)                                         /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK22_Msk                (_UINT32_(0x1) << MCLK_CLKMSK_MASK22_Pos)            /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK22(value)             (MCLK_CLKMSK_MASK22_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK22_Pos)) /* Assignment of value for MASK22 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK22_0_Val            _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK22_1_Val            _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK22_0                  (MCLK_CLKMSK_MASK22_0_Val << MCLK_CLKMSK_MASK22_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK22_1                  (MCLK_CLKMSK_MASK22_1_Val << MCLK_CLKMSK_MASK22_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK23_Pos                _UINT32_(23)                                         /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK23_Msk                (_UINT32_(0x1) << MCLK_CLKMSK_MASK23_Pos)            /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK23(value)             (MCLK_CLKMSK_MASK23_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK23_Pos)) /* Assignment of value for MASK23 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK23_0_Val            _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK23_1_Val            _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK23_0                  (MCLK_CLKMSK_MASK23_0_Val << MCLK_CLKMSK_MASK23_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK23_1                  (MCLK_CLKMSK_MASK23_1_Val << MCLK_CLKMSK_MASK23_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK24_Pos                _UINT32_(24)                                         /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK24_Msk                (_UINT32_(0x1) << MCLK_CLKMSK_MASK24_Pos)            /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK24(value)             (MCLK_CLKMSK_MASK24_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK24_Pos)) /* Assignment of value for MASK24 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK24_0_Val            _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK24_1_Val            _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK24_0                  (MCLK_CLKMSK_MASK24_0_Val << MCLK_CLKMSK_MASK24_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK24_1                  (MCLK_CLKMSK_MASK24_1_Val << MCLK_CLKMSK_MASK24_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK25_Pos                _UINT32_(25)                                         /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK25_Msk                (_UINT32_(0x1) << MCLK_CLKMSK_MASK25_Pos)            /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK25(value)             (MCLK_CLKMSK_MASK25_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK25_Pos)) /* Assignment of value for MASK25 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK25_0_Val            _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK25_1_Val            _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK25_0                  (MCLK_CLKMSK_MASK25_0_Val << MCLK_CLKMSK_MASK25_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK25_1                  (MCLK_CLKMSK_MASK25_1_Val << MCLK_CLKMSK_MASK25_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK26_Pos                _UINT32_(26)                                         /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK26_Msk                (_UINT32_(0x1) << MCLK_CLKMSK_MASK26_Pos)            /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK26(value)             (MCLK_CLKMSK_MASK26_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK26_Pos)) /* Assignment of value for MASK26 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK26_0_Val            _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK26_1_Val            _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK26_0                  (MCLK_CLKMSK_MASK26_0_Val << MCLK_CLKMSK_MASK26_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK26_1                  (MCLK_CLKMSK_MASK26_1_Val << MCLK_CLKMSK_MASK26_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK27_Pos                _UINT32_(27)                                         /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK27_Msk                (_UINT32_(0x1) << MCLK_CLKMSK_MASK27_Pos)            /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK27(value)             (MCLK_CLKMSK_MASK27_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK27_Pos)) /* Assignment of value for MASK27 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK27_0_Val            _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK27_1_Val            _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK27_0                  (MCLK_CLKMSK_MASK27_0_Val << MCLK_CLKMSK_MASK27_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK27_1                  (MCLK_CLKMSK_MASK27_1_Val << MCLK_CLKMSK_MASK27_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK28_Pos                _UINT32_(28)                                         /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK28_Msk                (_UINT32_(0x1) << MCLK_CLKMSK_MASK28_Pos)            /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK28(value)             (MCLK_CLKMSK_MASK28_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK28_Pos)) /* Assignment of value for MASK28 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK28_0_Val            _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK28_1_Val            _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK28_0                  (MCLK_CLKMSK_MASK28_0_Val << MCLK_CLKMSK_MASK28_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK28_1                  (MCLK_CLKMSK_MASK28_1_Val << MCLK_CLKMSK_MASK28_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK29_Pos                _UINT32_(29)                                         /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK29_Msk                (_UINT32_(0x1) << MCLK_CLKMSK_MASK29_Pos)            /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK29(value)             (MCLK_CLKMSK_MASK29_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK29_Pos)) /* Assignment of value for MASK29 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK29_0_Val            _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK29_1_Val            _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK29_0                  (MCLK_CLKMSK_MASK29_0_Val << MCLK_CLKMSK_MASK29_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK29_1                  (MCLK_CLKMSK_MASK29_1_Val << MCLK_CLKMSK_MASK29_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK30_Pos                _UINT32_(30)                                         /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK30_Msk                (_UINT32_(0x1) << MCLK_CLKMSK_MASK30_Pos)            /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK30(value)             (MCLK_CLKMSK_MASK30_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK30_Pos)) /* Assignment of value for MASK30 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK30_0_Val            _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK30_1_Val            _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK30_0                  (MCLK_CLKMSK_MASK30_0_Val << MCLK_CLKMSK_MASK30_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK30_1                  (MCLK_CLKMSK_MASK30_1_Val << MCLK_CLKMSK_MASK30_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_MASK31_Pos                _UINT32_(31)                                         /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Position */
#define MCLK_CLKMSK_MASK31_Msk                (_UINT32_(0x1) << MCLK_CLKMSK_MASK31_Pos)            /* (MCLK_CLKMSK) Peripheral Clock Enable Mask Mask */
#define MCLK_CLKMSK_MASK31(value)             (MCLK_CLKMSK_MASK31_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK31_Pos)) /* Assignment of value for MASK31 in the MCLK_CLKMSK register */
#define   MCLK_CLKMSK_MASK31_0_Val            _UINT32_(0x0)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped  */
#define   MCLK_CLKMSK_MASK31_1_Val            _UINT32_(0x1)                                        /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled  */
#define MCLK_CLKMSK_MASK31_0                  (MCLK_CLKMSK_MASK31_0_Val << MCLK_CLKMSK_MASK31_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] stopped Position */
#define MCLK_CLKMSK_MASK31_1                  (MCLK_CLKMSK_MASK31_1_Val << MCLK_CLKMSK_MASK31_Pos) /* (MCLK_CLKMSK) Peripheral clock mclk_clk_periph[n*32+x] enabled Position */
#define MCLK_CLKMSK_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (MCLK_CLKMSK) Register Mask  */

#define MCLK_CLKMSK_MASK_Pos                  _UINT32_(0)                                          /* (MCLK_CLKMSK Position) Peripheral Clock Enable Mask */
#define MCLK_CLKMSK_MASK_Msk                  (_UINT32_(0xFFFFFFFF) << MCLK_CLKMSK_MASK_Pos)       /* (MCLK_CLKMSK Mask) MASK */
#define MCLK_CLKMSK_MASK(value)               (MCLK_CLKMSK_MASK_Msk & (_UINT32_(value) << MCLK_CLKMSK_MASK_Pos)) 

/* MCLK register offsets definitions */
#define MCLK_INTENCLR_REG_OFST         _UINT32_(0x00)      /* (MCLK_INTENCLR) Interrupt Enable Clear Register Offset */
#define MCLK_INTENSET_REG_OFST         _UINT32_(0x04)      /* (MCLK_INTENSET) Interrupt Enable Set Register Offset */
#define MCLK_INTFLAG_REG_OFST          _UINT32_(0x08)      /* (MCLK_INTFLAG) Interrupt Flag Status Register Offset */
#define MCLK_CLKDIV_REG_OFST           _UINT32_(0x0C)      /* (MCLK_CLKDIV) Clock Divider Control n Register Offset */
#define MCLK_CLKDIV0_REG_OFST          _UINT32_(0x0C)      /* (MCLK_CLKDIV0) Clock Divider Control n Register Offset */
#define MCLK_CLKDIV1_REG_OFST          _UINT32_(0x10)      /* (MCLK_CLKDIV1) Clock Divider Control n Register Offset */
#define MCLK_CLKDIV2_REG_OFST          _UINT32_(0x14)      /* (MCLK_CLKDIV2) Clock Divider Control n Register Offset */
#define MCLK_CLKMSK_REG_OFST           _UINT32_(0x3C)      /* (MCLK_CLKMSK) Peripheral Clock Enable Mask n Register Offset */
#define MCLK_CLKMSK0_REG_OFST          _UINT32_(0x3C)      /* (MCLK_CLKMSK0) Peripheral Clock Enable Mask n Register Offset */
#define MCLK_CLKMSK1_REG_OFST          _UINT32_(0x40)      /* (MCLK_CLKMSK1) Peripheral Clock Enable Mask n Register Offset */
#define MCLK_CLKMSK2_REG_OFST          _UINT32_(0x44)      /* (MCLK_CLKMSK2) Peripheral Clock Enable Mask n Register Offset */
#define MCLK_CLKMSK3_REG_OFST          _UINT32_(0x48)      /* (MCLK_CLKMSK3) Peripheral Clock Enable Mask n Register Offset */
#define MCLK_CLKMSK4_REG_OFST          _UINT32_(0x4C)      /* (MCLK_CLKMSK4) Peripheral Clock Enable Mask n Register Offset */
#define MCLK_CLKMSK5_REG_OFST          _UINT32_(0x50)      /* (MCLK_CLKMSK5) Peripheral Clock Enable Mask n Register Offset */
#define MCLK_CLKMSK6_REG_OFST          _UINT32_(0x54)      /* (MCLK_CLKMSK6) Peripheral Clock Enable Mask n Register Offset */
#define MCLK_CLKMSK7_REG_OFST          _UINT32_(0x58)      /* (MCLK_CLKMSK7) Peripheral Clock Enable Mask n Register Offset */
#define MCLK_CLKMSK8_REG_OFST          _UINT32_(0x5C)      /* (MCLK_CLKMSK8) Peripheral Clock Enable Mask n Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* MCLK register API structure */
typedef struct
{  /* Polaris Main Clock Controller */
  __IO  uint32_t                       MCLK_INTENCLR;      /* Offset: 0x00 (R/W  32) Interrupt Enable Clear Register */
  __IO  uint32_t                       MCLK_INTENSET;      /* Offset: 0x04 (R/W  32) Interrupt Enable Set Register */
  __O   uint32_t                       MCLK_INTFLAG;       /* Offset: 0x08 ( /W  32) Interrupt Flag Status Register */
  __IO  uint32_t                       MCLK_CLKDIV[3];     /* Offset: 0x0C (R/W  32) Clock Divider Control n Register */
  __I   uint8_t                        Reserved1[0x24];
  __IO  uint32_t                       MCLK_CLKMSK[9];     /* Offset: 0x3C (R/W  32) Peripheral Clock Enable Mask n Register */
} mclk_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMGC00_MCLK_COMPONENT_H_ */
