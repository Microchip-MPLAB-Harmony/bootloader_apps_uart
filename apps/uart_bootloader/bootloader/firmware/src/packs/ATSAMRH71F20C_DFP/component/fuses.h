/*
 * Component description for FUSES
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

/* file generated from device description version 2022-01-06T10:24:17Z */
#ifndef _SAMRH71_FUSES_COMPONENT_H_
#define _SAMRH71_FUSES_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR FUSES                                        */
/* ************************************************************************** */

/* -------- FUSES_USER_WORD_0 : (FUSES Offset: 0x00) ( R/ 32) USER Page Word 0. Contains factory setting values, do no override. -------- */
#define FUSES_USER_WORD_0_DEBUG_INTF_Pos      _UINT32_(1)                                          /* (FUSES_USER_WORD_0) Debug interface Selection Position */
#define FUSES_USER_WORD_0_DEBUG_INTF_Msk      (_UINT32_(0x1) << FUSES_USER_WORD_0_DEBUG_INTF_Pos)  /* (FUSES_USER_WORD_0) Debug interface Selection Mask */
#define FUSES_USER_WORD_0_DEBUG_INTF(value)   (FUSES_USER_WORD_0_DEBUG_INTF_Msk & (_UINT32_(value) << FUSES_USER_WORD_0_DEBUG_INTF_Pos)) /* Assigment of value for DEBUG_INTF in the FUSES_USER_WORD_0 register */
#define   FUSES_USER_WORD_0_DEBUG_INTF_JTAG_Val _UINT32_(0x0)                                        /* (FUSES_USER_WORD_0) JTAG  */
#define   FUSES_USER_WORD_0_DEBUG_INTF_SWD_Val _UINT32_(0x1)                                        /* (FUSES_USER_WORD_0) SWD  */
#define FUSES_USER_WORD_0_DEBUG_INTF_JTAG     (FUSES_USER_WORD_0_DEBUG_INTF_JTAG_Val << FUSES_USER_WORD_0_DEBUG_INTF_Pos) /* (FUSES_USER_WORD_0) JTAG Position  */
#define FUSES_USER_WORD_0_DEBUG_INTF_SWD      (FUSES_USER_WORD_0_DEBUG_INTF_SWD_Val << FUSES_USER_WORD_0_DEBUG_INTF_Pos) /* (FUSES_USER_WORD_0) SWD Position  */
#define FUSES_USER_WORD_0_PFD_TRIM_Pos        _UINT32_(8)                                          /* (FUSES_USER_WORD_0) PFD Trim value Position */
#define FUSES_USER_WORD_0_PFD_TRIM_Msk        (_UINT32_(0x7) << FUSES_USER_WORD_0_PFD_TRIM_Pos)    /* (FUSES_USER_WORD_0) PFD Trim value Mask */
#define FUSES_USER_WORD_0_PFD_TRIM(value)     (FUSES_USER_WORD_0_PFD_TRIM_Msk & (_UINT32_(value) << FUSES_USER_WORD_0_PFD_TRIM_Pos)) /* Assigment of value for PFD_TRIM in the FUSES_USER_WORD_0 register */
#define FUSES_USER_WORD_0_Msk                 _UINT32_(0x00000702)                                 /* (FUSES_USER_WORD_0) Register Mask  */


/* -------- FUSES_USER_WORD_1 : (FUSES Offset: 0x04) ( R/ 32) USER Page Word 1. Contains factory setting values, do no override. -------- */
#define FUSES_USER_WORD_1_RC_TTRIM_Pos        _UINT32_(0)                                          /* (FUSES_USER_WORD_1) RC Temperature Trim Position */
#define FUSES_USER_WORD_1_RC_TTRIM_Msk        (_UINT32_(0x3) << FUSES_USER_WORD_1_RC_TTRIM_Pos)    /* (FUSES_USER_WORD_1) RC Temperature Trim Mask */
#define FUSES_USER_WORD_1_RC_TTRIM(value)     (FUSES_USER_WORD_1_RC_TTRIM_Msk & (_UINT32_(value) << FUSES_USER_WORD_1_RC_TTRIM_Pos)) /* Assigment of value for RC_TTRIM in the FUSES_USER_WORD_1 register */
#define FUSES_USER_WORD_1_RC2_TTRIM_Pos       _UINT32_(2)                                          /* (FUSES_USER_WORD_1) RC2 Temperature Trim Position */
#define FUSES_USER_WORD_1_RC2_TTRIM_Msk       (_UINT32_(0x3) << FUSES_USER_WORD_1_RC2_TTRIM_Pos)   /* (FUSES_USER_WORD_1) RC2 Temperature Trim Mask */
#define FUSES_USER_WORD_1_RC2_TTRIM(value)    (FUSES_USER_WORD_1_RC2_TTRIM_Msk & (_UINT32_(value) << FUSES_USER_WORD_1_RC2_TTRIM_Pos)) /* Assigment of value for RC2_TTRIM in the FUSES_USER_WORD_1 register */
#define FUSES_USER_WORD_1_RC_FTRIM_4MHZ_Pos   _UINT32_(4)                                          /* (FUSES_USER_WORD_1) RC Frequency Trim 4MHz Position */
#define FUSES_USER_WORD_1_RC_FTRIM_4MHZ_Msk   (_UINT32_(0x7) << FUSES_USER_WORD_1_RC_FTRIM_4MHZ_Pos) /* (FUSES_USER_WORD_1) RC Frequency Trim 4MHz Mask */
#define FUSES_USER_WORD_1_RC_FTRIM_4MHZ(value) (FUSES_USER_WORD_1_RC_FTRIM_4MHZ_Msk & (_UINT32_(value) << FUSES_USER_WORD_1_RC_FTRIM_4MHZ_Pos)) /* Assigment of value for RC_FTRIM_4MHZ in the FUSES_USER_WORD_1 register */
#define FUSES_USER_WORD_1_RC_FTRIM_8MHZ_Pos   _UINT32_(7)                                          /* (FUSES_USER_WORD_1) RC Frequency Trim 8MHz Position */
#define FUSES_USER_WORD_1_RC_FTRIM_8MHZ_Msk   (_UINT32_(0x7) << FUSES_USER_WORD_1_RC_FTRIM_8MHZ_Pos) /* (FUSES_USER_WORD_1) RC Frequency Trim 8MHz Mask */
#define FUSES_USER_WORD_1_RC_FTRIM_8MHZ(value) (FUSES_USER_WORD_1_RC_FTRIM_8MHZ_Msk & (_UINT32_(value) << FUSES_USER_WORD_1_RC_FTRIM_8MHZ_Pos)) /* Assigment of value for RC_FTRIM_8MHZ in the FUSES_USER_WORD_1 register */
#define FUSES_USER_WORD_1_RC_FTRIM_10MHZ_Pos  _UINT32_(10)                                         /* (FUSES_USER_WORD_1) RC Frequency Trim 10MHz Position */
#define FUSES_USER_WORD_1_RC_FTRIM_10MHZ_Msk  (_UINT32_(0x7) << FUSES_USER_WORD_1_RC_FTRIM_10MHZ_Pos) /* (FUSES_USER_WORD_1) RC Frequency Trim 10MHz Mask */
#define FUSES_USER_WORD_1_RC_FTRIM_10MHZ(value) (FUSES_USER_WORD_1_RC_FTRIM_10MHZ_Msk & (_UINT32_(value) << FUSES_USER_WORD_1_RC_FTRIM_10MHZ_Pos)) /* Assigment of value for RC_FTRIM_10MHZ in the FUSES_USER_WORD_1 register */
#define FUSES_USER_WORD_1_RC_FTRIM_12MHZ_Pos  _UINT32_(13)                                         /* (FUSES_USER_WORD_1) RC Frequency Trim 12MHz Position */
#define FUSES_USER_WORD_1_RC_FTRIM_12MHZ_Msk  (_UINT32_(0x7) << FUSES_USER_WORD_1_RC_FTRIM_12MHZ_Pos) /* (FUSES_USER_WORD_1) RC Frequency Trim 12MHz Mask */
#define FUSES_USER_WORD_1_RC_FTRIM_12MHZ(value) (FUSES_USER_WORD_1_RC_FTRIM_12MHZ_Msk & (_UINT32_(value) << FUSES_USER_WORD_1_RC_FTRIM_12MHZ_Pos)) /* Assigment of value for RC_FTRIM_12MHZ in the FUSES_USER_WORD_1 register */
#define FUSES_USER_WORD_1_RC2_FTRIM_4MHZ_Pos  _UINT32_(16)                                         /* (FUSES_USER_WORD_1) RC2 Frequency Trim 4MHz Position */
#define FUSES_USER_WORD_1_RC2_FTRIM_4MHZ_Msk  (_UINT32_(0x7) << FUSES_USER_WORD_1_RC2_FTRIM_4MHZ_Pos) /* (FUSES_USER_WORD_1) RC2 Frequency Trim 4MHz Mask */
#define FUSES_USER_WORD_1_RC2_FTRIM_4MHZ(value) (FUSES_USER_WORD_1_RC2_FTRIM_4MHZ_Msk & (_UINT32_(value) << FUSES_USER_WORD_1_RC2_FTRIM_4MHZ_Pos)) /* Assigment of value for RC2_FTRIM_4MHZ in the FUSES_USER_WORD_1 register */
#define FUSES_USER_WORD_1_RC2_FTRIM_8MHZ_Pos  _UINT32_(19)                                         /* (FUSES_USER_WORD_1) RC2 Frequency Trim 8MHz Position */
#define FUSES_USER_WORD_1_RC2_FTRIM_8MHZ_Msk  (_UINT32_(0x7) << FUSES_USER_WORD_1_RC2_FTRIM_8MHZ_Pos) /* (FUSES_USER_WORD_1) RC2 Frequency Trim 8MHz Mask */
#define FUSES_USER_WORD_1_RC2_FTRIM_8MHZ(value) (FUSES_USER_WORD_1_RC2_FTRIM_8MHZ_Msk & (_UINT32_(value) << FUSES_USER_WORD_1_RC2_FTRIM_8MHZ_Pos)) /* Assigment of value for RC2_FTRIM_8MHZ in the FUSES_USER_WORD_1 register */
#define FUSES_USER_WORD_1_RC2_FTRIM_10MHZ_Pos _UINT32_(22)                                         /* (FUSES_USER_WORD_1) RC2 Frequency Trim 10MHz Position */
#define FUSES_USER_WORD_1_RC2_FTRIM_10MHZ_Msk (_UINT32_(0x7) << FUSES_USER_WORD_1_RC2_FTRIM_10MHZ_Pos) /* (FUSES_USER_WORD_1) RC2 Frequency Trim 10MHz Mask */
#define FUSES_USER_WORD_1_RC2_FTRIM_10MHZ(value) (FUSES_USER_WORD_1_RC2_FTRIM_10MHZ_Msk & (_UINT32_(value) << FUSES_USER_WORD_1_RC2_FTRIM_10MHZ_Pos)) /* Assigment of value for RC2_FTRIM_10MHZ in the FUSES_USER_WORD_1 register */
#define FUSES_USER_WORD_1_RC2_FTRIM_12MHZ_Pos _UINT32_(25)                                         /* (FUSES_USER_WORD_1) RC2 Frequency Trim 12MHz Position */
#define FUSES_USER_WORD_1_RC2_FTRIM_12MHZ_Msk (_UINT32_(0x7) << FUSES_USER_WORD_1_RC2_FTRIM_12MHZ_Pos) /* (FUSES_USER_WORD_1) RC2 Frequency Trim 12MHz Mask */
#define FUSES_USER_WORD_1_RC2_FTRIM_12MHZ(value) (FUSES_USER_WORD_1_RC2_FTRIM_12MHZ_Msk & (_UINT32_(value) << FUSES_USER_WORD_1_RC2_FTRIM_12MHZ_Pos)) /* Assigment of value for RC2_FTRIM_12MHZ in the FUSES_USER_WORD_1 register */
#define FUSES_USER_WORD_1_Msk                 _UINT32_(0x0FFFFFFF)                                 /* (FUSES_USER_WORD_1) Register Mask  */


/* -------- FUSES_USER_WORD_2 : (FUSES Offset: 0x08) ( R/ 32) USER Page Word 2. Contains factory setting values, do no override. -------- */
#define FUSES_USER_WORD_2_RC_TTRIM_Pos        _UINT32_(0)                                          /* (FUSES_USER_WORD_2) RC Temperature Trim Position */
#define FUSES_USER_WORD_2_RC_TTRIM_Msk        (_UINT32_(0x3) << FUSES_USER_WORD_2_RC_TTRIM_Pos)    /* (FUSES_USER_WORD_2) RC Temperature Trim Mask */
#define FUSES_USER_WORD_2_RC_TTRIM(value)     (FUSES_USER_WORD_2_RC_TTRIM_Msk & (_UINT32_(value) << FUSES_USER_WORD_2_RC_TTRIM_Pos)) /* Assigment of value for RC_TTRIM in the FUSES_USER_WORD_2 register */
#define FUSES_USER_WORD_2_RC2_TTRIM_Pos       _UINT32_(2)                                          /* (FUSES_USER_WORD_2) RC2 Temperature Trim Position */
#define FUSES_USER_WORD_2_RC2_TTRIM_Msk       (_UINT32_(0x3) << FUSES_USER_WORD_2_RC2_TTRIM_Pos)   /* (FUSES_USER_WORD_2) RC2 Temperature Trim Mask */
#define FUSES_USER_WORD_2_RC2_TTRIM(value)    (FUSES_USER_WORD_2_RC2_TTRIM_Msk & (_UINT32_(value) << FUSES_USER_WORD_2_RC2_TTRIM_Pos)) /* Assigment of value for RC2_TTRIM in the FUSES_USER_WORD_2 register */
#define FUSES_USER_WORD_2_RC_FTRIM_4MHZ_Pos   _UINT32_(4)                                          /* (FUSES_USER_WORD_2) RC Frequency Trim 4MHz Position */
#define FUSES_USER_WORD_2_RC_FTRIM_4MHZ_Msk   (_UINT32_(0x7) << FUSES_USER_WORD_2_RC_FTRIM_4MHZ_Pos) /* (FUSES_USER_WORD_2) RC Frequency Trim 4MHz Mask */
#define FUSES_USER_WORD_2_RC_FTRIM_4MHZ(value) (FUSES_USER_WORD_2_RC_FTRIM_4MHZ_Msk & (_UINT32_(value) << FUSES_USER_WORD_2_RC_FTRIM_4MHZ_Pos)) /* Assigment of value for RC_FTRIM_4MHZ in the FUSES_USER_WORD_2 register */
#define FUSES_USER_WORD_2_RC_FTRIM_8MHZ_Pos   _UINT32_(7)                                          /* (FUSES_USER_WORD_2) RC Frequency Trim 8MHz Position */
#define FUSES_USER_WORD_2_RC_FTRIM_8MHZ_Msk   (_UINT32_(0x7) << FUSES_USER_WORD_2_RC_FTRIM_8MHZ_Pos) /* (FUSES_USER_WORD_2) RC Frequency Trim 8MHz Mask */
#define FUSES_USER_WORD_2_RC_FTRIM_8MHZ(value) (FUSES_USER_WORD_2_RC_FTRIM_8MHZ_Msk & (_UINT32_(value) << FUSES_USER_WORD_2_RC_FTRIM_8MHZ_Pos)) /* Assigment of value for RC_FTRIM_8MHZ in the FUSES_USER_WORD_2 register */
#define FUSES_USER_WORD_2_RC_FTRIM_10MHZ_Pos  _UINT32_(10)                                         /* (FUSES_USER_WORD_2) RC Frequency Trim 10MHz Position */
#define FUSES_USER_WORD_2_RC_FTRIM_10MHZ_Msk  (_UINT32_(0x7) << FUSES_USER_WORD_2_RC_FTRIM_10MHZ_Pos) /* (FUSES_USER_WORD_2) RC Frequency Trim 10MHz Mask */
#define FUSES_USER_WORD_2_RC_FTRIM_10MHZ(value) (FUSES_USER_WORD_2_RC_FTRIM_10MHZ_Msk & (_UINT32_(value) << FUSES_USER_WORD_2_RC_FTRIM_10MHZ_Pos)) /* Assigment of value for RC_FTRIM_10MHZ in the FUSES_USER_WORD_2 register */
#define FUSES_USER_WORD_2_RC_FTRIM_12MHZ_Pos  _UINT32_(13)                                         /* (FUSES_USER_WORD_2) RC Frequency Trim 12MHz Position */
#define FUSES_USER_WORD_2_RC_FTRIM_12MHZ_Msk  (_UINT32_(0x7) << FUSES_USER_WORD_2_RC_FTRIM_12MHZ_Pos) /* (FUSES_USER_WORD_2) RC Frequency Trim 12MHz Mask */
#define FUSES_USER_WORD_2_RC_FTRIM_12MHZ(value) (FUSES_USER_WORD_2_RC_FTRIM_12MHZ_Msk & (_UINT32_(value) << FUSES_USER_WORD_2_RC_FTRIM_12MHZ_Pos)) /* Assigment of value for RC_FTRIM_12MHZ in the FUSES_USER_WORD_2 register */
#define FUSES_USER_WORD_2_RC2_FTRIM_4MHZ_Pos  _UINT32_(16)                                         /* (FUSES_USER_WORD_2) RC2 Frequency Trim 4MHz Position */
#define FUSES_USER_WORD_2_RC2_FTRIM_4MHZ_Msk  (_UINT32_(0x7) << FUSES_USER_WORD_2_RC2_FTRIM_4MHZ_Pos) /* (FUSES_USER_WORD_2) RC2 Frequency Trim 4MHz Mask */
#define FUSES_USER_WORD_2_RC2_FTRIM_4MHZ(value) (FUSES_USER_WORD_2_RC2_FTRIM_4MHZ_Msk & (_UINT32_(value) << FUSES_USER_WORD_2_RC2_FTRIM_4MHZ_Pos)) /* Assigment of value for RC2_FTRIM_4MHZ in the FUSES_USER_WORD_2 register */
#define FUSES_USER_WORD_2_RC2_FTRIM_8MHZ_Pos  _UINT32_(19)                                         /* (FUSES_USER_WORD_2) RC2 Frequency Trim 8MHz Position */
#define FUSES_USER_WORD_2_RC2_FTRIM_8MHZ_Msk  (_UINT32_(0x7) << FUSES_USER_WORD_2_RC2_FTRIM_8MHZ_Pos) /* (FUSES_USER_WORD_2) RC2 Frequency Trim 8MHz Mask */
#define FUSES_USER_WORD_2_RC2_FTRIM_8MHZ(value) (FUSES_USER_WORD_2_RC2_FTRIM_8MHZ_Msk & (_UINT32_(value) << FUSES_USER_WORD_2_RC2_FTRIM_8MHZ_Pos)) /* Assigment of value for RC2_FTRIM_8MHZ in the FUSES_USER_WORD_2 register */
#define FUSES_USER_WORD_2_RC2_FTRIM_10MHZ_Pos _UINT32_(22)                                         /* (FUSES_USER_WORD_2) RC2 Frequency Trim 10MHz Position */
#define FUSES_USER_WORD_2_RC2_FTRIM_10MHZ_Msk (_UINT32_(0x7) << FUSES_USER_WORD_2_RC2_FTRIM_10MHZ_Pos) /* (FUSES_USER_WORD_2) RC2 Frequency Trim 10MHz Mask */
#define FUSES_USER_WORD_2_RC2_FTRIM_10MHZ(value) (FUSES_USER_WORD_2_RC2_FTRIM_10MHZ_Msk & (_UINT32_(value) << FUSES_USER_WORD_2_RC2_FTRIM_10MHZ_Pos)) /* Assigment of value for RC2_FTRIM_10MHZ in the FUSES_USER_WORD_2 register */
#define FUSES_USER_WORD_2_RC2_FTRIM_12MHZ_Pos _UINT32_(25)                                         /* (FUSES_USER_WORD_2) RC2 Frequency Trim 12MHz Position */
#define FUSES_USER_WORD_2_RC2_FTRIM_12MHZ_Msk (_UINT32_(0x7) << FUSES_USER_WORD_2_RC2_FTRIM_12MHZ_Pos) /* (FUSES_USER_WORD_2) RC2 Frequency Trim 12MHz Mask */
#define FUSES_USER_WORD_2_RC2_FTRIM_12MHZ(value) (FUSES_USER_WORD_2_RC2_FTRIM_12MHZ_Msk & (_UINT32_(value) << FUSES_USER_WORD_2_RC2_FTRIM_12MHZ_Pos)) /* Assigment of value for RC2_FTRIM_12MHZ in the FUSES_USER_WORD_2 register */
#define FUSES_USER_WORD_2_Msk                 _UINT32_(0x0FFFFFFF)                                 /* (FUSES_USER_WORD_2) Register Mask  */


/* -------- FUSES_USER_WORD_3 : (FUSES Offset: 0x0C) ( R/ 32) USER Page Word 3. Contains factory setting values, do no override. -------- */
#define FUSES_USER_WORD_3_RC_TTRIM_Pos        _UINT32_(0)                                          /* (FUSES_USER_WORD_3) RC Temperature Trim Position */
#define FUSES_USER_WORD_3_RC_TTRIM_Msk        (_UINT32_(0x3) << FUSES_USER_WORD_3_RC_TTRIM_Pos)    /* (FUSES_USER_WORD_3) RC Temperature Trim Mask */
#define FUSES_USER_WORD_3_RC_TTRIM(value)     (FUSES_USER_WORD_3_RC_TTRIM_Msk & (_UINT32_(value) << FUSES_USER_WORD_3_RC_TTRIM_Pos)) /* Assigment of value for RC_TTRIM in the FUSES_USER_WORD_3 register */
#define FUSES_USER_WORD_3_RC2_TTRIM_Pos       _UINT32_(2)                                          /* (FUSES_USER_WORD_3) RC2 Temperature Trim Position */
#define FUSES_USER_WORD_3_RC2_TTRIM_Msk       (_UINT32_(0x3) << FUSES_USER_WORD_3_RC2_TTRIM_Pos)   /* (FUSES_USER_WORD_3) RC2 Temperature Trim Mask */
#define FUSES_USER_WORD_3_RC2_TTRIM(value)    (FUSES_USER_WORD_3_RC2_TTRIM_Msk & (_UINT32_(value) << FUSES_USER_WORD_3_RC2_TTRIM_Pos)) /* Assigment of value for RC2_TTRIM in the FUSES_USER_WORD_3 register */
#define FUSES_USER_WORD_3_RC_FTRIM_4MHZ_Pos   _UINT32_(4)                                          /* (FUSES_USER_WORD_3) RC Frequency Trim 4MHz Position */
#define FUSES_USER_WORD_3_RC_FTRIM_4MHZ_Msk   (_UINT32_(0x7) << FUSES_USER_WORD_3_RC_FTRIM_4MHZ_Pos) /* (FUSES_USER_WORD_3) RC Frequency Trim 4MHz Mask */
#define FUSES_USER_WORD_3_RC_FTRIM_4MHZ(value) (FUSES_USER_WORD_3_RC_FTRIM_4MHZ_Msk & (_UINT32_(value) << FUSES_USER_WORD_3_RC_FTRIM_4MHZ_Pos)) /* Assigment of value for RC_FTRIM_4MHZ in the FUSES_USER_WORD_3 register */
#define FUSES_USER_WORD_3_RC_FTRIM_8MHZ_Pos   _UINT32_(7)                                          /* (FUSES_USER_WORD_3) RC Frequency Trim 8MHz Position */
#define FUSES_USER_WORD_3_RC_FTRIM_8MHZ_Msk   (_UINT32_(0x7) << FUSES_USER_WORD_3_RC_FTRIM_8MHZ_Pos) /* (FUSES_USER_WORD_3) RC Frequency Trim 8MHz Mask */
#define FUSES_USER_WORD_3_RC_FTRIM_8MHZ(value) (FUSES_USER_WORD_3_RC_FTRIM_8MHZ_Msk & (_UINT32_(value) << FUSES_USER_WORD_3_RC_FTRIM_8MHZ_Pos)) /* Assigment of value for RC_FTRIM_8MHZ in the FUSES_USER_WORD_3 register */
#define FUSES_USER_WORD_3_RC_FTRIM_10MHZ_Pos  _UINT32_(10)                                         /* (FUSES_USER_WORD_3) RC Frequency Trim 10MHz Position */
#define FUSES_USER_WORD_3_RC_FTRIM_10MHZ_Msk  (_UINT32_(0x7) << FUSES_USER_WORD_3_RC_FTRIM_10MHZ_Pos) /* (FUSES_USER_WORD_3) RC Frequency Trim 10MHz Mask */
#define FUSES_USER_WORD_3_RC_FTRIM_10MHZ(value) (FUSES_USER_WORD_3_RC_FTRIM_10MHZ_Msk & (_UINT32_(value) << FUSES_USER_WORD_3_RC_FTRIM_10MHZ_Pos)) /* Assigment of value for RC_FTRIM_10MHZ in the FUSES_USER_WORD_3 register */
#define FUSES_USER_WORD_3_RC_FTRIM_12MHZ_Pos  _UINT32_(13)                                         /* (FUSES_USER_WORD_3) RC Frequency Trim 12MHz Position */
#define FUSES_USER_WORD_3_RC_FTRIM_12MHZ_Msk  (_UINT32_(0x7) << FUSES_USER_WORD_3_RC_FTRIM_12MHZ_Pos) /* (FUSES_USER_WORD_3) RC Frequency Trim 12MHz Mask */
#define FUSES_USER_WORD_3_RC_FTRIM_12MHZ(value) (FUSES_USER_WORD_3_RC_FTRIM_12MHZ_Msk & (_UINT32_(value) << FUSES_USER_WORD_3_RC_FTRIM_12MHZ_Pos)) /* Assigment of value for RC_FTRIM_12MHZ in the FUSES_USER_WORD_3 register */
#define FUSES_USER_WORD_3_RC2_FTRIM_4MHZ_Pos  _UINT32_(16)                                         /* (FUSES_USER_WORD_3) RC2 Frequency Trim 4MHz Position */
#define FUSES_USER_WORD_3_RC2_FTRIM_4MHZ_Msk  (_UINT32_(0x7) << FUSES_USER_WORD_3_RC2_FTRIM_4MHZ_Pos) /* (FUSES_USER_WORD_3) RC2 Frequency Trim 4MHz Mask */
#define FUSES_USER_WORD_3_RC2_FTRIM_4MHZ(value) (FUSES_USER_WORD_3_RC2_FTRIM_4MHZ_Msk & (_UINT32_(value) << FUSES_USER_WORD_3_RC2_FTRIM_4MHZ_Pos)) /* Assigment of value for RC2_FTRIM_4MHZ in the FUSES_USER_WORD_3 register */
#define FUSES_USER_WORD_3_RC2_FTRIM_8MHZ_Pos  _UINT32_(19)                                         /* (FUSES_USER_WORD_3) RC2 Frequency Trim 8MHz Position */
#define FUSES_USER_WORD_3_RC2_FTRIM_8MHZ_Msk  (_UINT32_(0x7) << FUSES_USER_WORD_3_RC2_FTRIM_8MHZ_Pos) /* (FUSES_USER_WORD_3) RC2 Frequency Trim 8MHz Mask */
#define FUSES_USER_WORD_3_RC2_FTRIM_8MHZ(value) (FUSES_USER_WORD_3_RC2_FTRIM_8MHZ_Msk & (_UINT32_(value) << FUSES_USER_WORD_3_RC2_FTRIM_8MHZ_Pos)) /* Assigment of value for RC2_FTRIM_8MHZ in the FUSES_USER_WORD_3 register */
#define FUSES_USER_WORD_3_RC2_FTRIM_10MHZ_Pos _UINT32_(22)                                         /* (FUSES_USER_WORD_3) RC2 Frequency Trim 10MHz Position */
#define FUSES_USER_WORD_3_RC2_FTRIM_10MHZ_Msk (_UINT32_(0x7) << FUSES_USER_WORD_3_RC2_FTRIM_10MHZ_Pos) /* (FUSES_USER_WORD_3) RC2 Frequency Trim 10MHz Mask */
#define FUSES_USER_WORD_3_RC2_FTRIM_10MHZ(value) (FUSES_USER_WORD_3_RC2_FTRIM_10MHZ_Msk & (_UINT32_(value) << FUSES_USER_WORD_3_RC2_FTRIM_10MHZ_Pos)) /* Assigment of value for RC2_FTRIM_10MHZ in the FUSES_USER_WORD_3 register */
#define FUSES_USER_WORD_3_RC2_FTRIM_12MHZ_Pos _UINT32_(25)                                         /* (FUSES_USER_WORD_3) RC2 Frequency Trim 12MHz Position */
#define FUSES_USER_WORD_3_RC2_FTRIM_12MHZ_Msk (_UINT32_(0x7) << FUSES_USER_WORD_3_RC2_FTRIM_12MHZ_Pos) /* (FUSES_USER_WORD_3) RC2 Frequency Trim 12MHz Mask */
#define FUSES_USER_WORD_3_RC2_FTRIM_12MHZ(value) (FUSES_USER_WORD_3_RC2_FTRIM_12MHZ_Msk & (_UINT32_(value) << FUSES_USER_WORD_3_RC2_FTRIM_12MHZ_Pos)) /* Assigment of value for RC2_FTRIM_12MHZ in the FUSES_USER_WORD_3 register */
#define FUSES_USER_WORD_3_Msk                 _UINT32_(0x0FFFFFFF)                                 /* (FUSES_USER_WORD_3) Register Mask  */


/** \brief FUSES register offsets definitions */
#define FUSES_USER_WORD_0_REG_OFST     _UINT32_(0x00)      /* (FUSES_USER_WORD_0) USER Page Word 0. Contains factory setting values, do no override. Offset */
#define FUSES_USER_WORD_1_REG_OFST     _UINT32_(0x04)      /* (FUSES_USER_WORD_1) USER Page Word 1. Contains factory setting values, do no override. Offset */
#define FUSES_USER_WORD_2_REG_OFST     _UINT32_(0x08)      /* (FUSES_USER_WORD_2) USER Page Word 2. Contains factory setting values, do no override. Offset */
#define FUSES_USER_WORD_3_REG_OFST     _UINT32_(0x0C)      /* (FUSES_USER_WORD_3) USER Page Word 3. Contains factory setting values, do no override. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief GPNVMBITS register API structure */
typedef struct
{  /* GPNVM Bits */
  __I   uint32_t                       FUSES_USER_WORD_0;  /**< Offset: 0x00 (R/   32) USER Page Word 0. Contains factory setting values, do no override. */
  __I   uint32_t                       FUSES_USER_WORD_1;  /**< Offset: 0x04 (R/   32) USER Page Word 1. Contains factory setting values, do no override. */
  __I   uint32_t                       FUSES_USER_WORD_2;  /**< Offset: 0x08 (R/   32) USER Page Word 2. Contains factory setting values, do no override. */
  __I   uint32_t                       FUSES_USER_WORD_3;  /**< Offset: 0x0C (R/   32) USER Page Word 3. Contains factory setting values, do no override. */
} fuses_gpnvmbits_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMRH71_FUSES_COMPONENT_H_ */
