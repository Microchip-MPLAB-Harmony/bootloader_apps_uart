/*
 * Component description for SFRBU
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
#ifndef _SAMA7G5_SFRBU_COMPONENT_H_
#define _SAMA7G5_SFRBU_COMPONENT_H_

/* ************************************************************************** */
/*                     SOFTWARE API DEFINITION FOR SFRBU                      */
/* ************************************************************************** */

/* -------- SFRBU_PSWBU : (SFRBU Offset: 0x00) (R/W 32) VDDBU Power Switch Control -------- */
#define SFRBU_PSWBU_RESETVALUE                _UINT32_(0x01)                                       /*  (SFRBU_PSWBU) VDDBU Power Switch Control  Reset Value */

#define SFRBU_PSWBU_CTRL_Pos                  _UINT32_(0)                                          /* (SFRBU_PSWBU) VDDBU Power Switch Control Position */
#define SFRBU_PSWBU_CTRL_Msk                  (_UINT32_(0x1) << SFRBU_PSWBU_CTRL_Pos)              /* (SFRBU_PSWBU) VDDBU Power Switch Control Mask */
#define SFRBU_PSWBU_CTRL(value)               (SFRBU_PSWBU_CTRL_Msk & (_UINT32_(value) << SFRBU_PSWBU_CTRL_Pos)) /* Assignment of value for CTRL in the SFRBU_PSWBU register */
#define   SFRBU_PSWBU_CTRL_HARD_Val           _UINT32_(0x0)                                        /* (SFRBU_PSWBU) The VDDBU power switch is controlled by hardware (the SOFTSWITCH bit has no action).  */
#define   SFRBU_PSWBU_CTRL_SOFT_Val           _UINT32_(0x1)                                        /* (SFRBU_PSWBU) The VDDBU power switch is controlled by software (the SOFTSWITCH bit has an action).  */
#define SFRBU_PSWBU_CTRL_HARD                 (SFRBU_PSWBU_CTRL_HARD_Val << SFRBU_PSWBU_CTRL_Pos)  /* (SFRBU_PSWBU) The VDDBU power switch is controlled by hardware (the SOFTSWITCH bit has no action). Position */
#define SFRBU_PSWBU_CTRL_SOFT                 (SFRBU_PSWBU_CTRL_SOFT_Val << SFRBU_PSWBU_CTRL_Pos)  /* (SFRBU_PSWBU) The VDDBU power switch is controlled by software (the SOFTSWITCH bit has an action). Position */
#define SFRBU_PSWBU_SOFTSWITCH_Pos            _UINT32_(1)                                          /* (SFRBU_PSWBU) VDDBU Power Switch Source Selection Position */
#define SFRBU_PSWBU_SOFTSWITCH_Msk            (_UINT32_(0x1) << SFRBU_PSWBU_SOFTSWITCH_Pos)        /* (SFRBU_PSWBU) VDDBU Power Switch Source Selection Mask */
#define SFRBU_PSWBU_SOFTSWITCH(value)         (SFRBU_PSWBU_SOFTSWITCH_Msk & (_UINT32_(value) << SFRBU_PSWBU_SOFTSWITCH_Pos)) /* Assignment of value for SOFTSWITCH in the SFRBU_PSWBU register */
#define   SFRBU_PSWBU_SOFTSWITCH_VBAT_Val     _UINT32_(0x0)                                        /* (SFRBU_PSWBU) The VDDBU supply source is VBAT.  */
#define   SFRBU_PSWBU_SOFTSWITCH_VDDIN33_Val  _UINT32_(0x1)                                        /* (SFRBU_PSWBU) The VDDBU supply source is VDDIN33.  */
#define SFRBU_PSWBU_SOFTSWITCH_VBAT           (SFRBU_PSWBU_SOFTSWITCH_VBAT_Val << SFRBU_PSWBU_SOFTSWITCH_Pos) /* (SFRBU_PSWBU) The VDDBU supply source is VBAT. Position */
#define SFRBU_PSWBU_SOFTSWITCH_VDDIN33        (SFRBU_PSWBU_SOFTSWITCH_VDDIN33_Val << SFRBU_PSWBU_SOFTSWITCH_Pos) /* (SFRBU_PSWBU) The VDDBU supply source is VDDIN33. Position */
#define SFRBU_PSWBU_STATE_Pos                 _UINT32_(2)                                          /* (SFRBU_PSWBU) VDDBU Power Switch State (Read-only) Position */
#define SFRBU_PSWBU_STATE_Msk                 (_UINT32_(0x1) << SFRBU_PSWBU_STATE_Pos)             /* (SFRBU_PSWBU) VDDBU Power Switch State (Read-only) Mask */
#define SFRBU_PSWBU_STATE(value)              (SFRBU_PSWBU_STATE_Msk & (_UINT32_(value) << SFRBU_PSWBU_STATE_Pos)) /* Assignment of value for STATE in the SFRBU_PSWBU register */
#define   SFRBU_PSWBU_STATE_VBAT_Val          _UINT32_(0x0)                                        /* (SFRBU_PSWBU) The VDDBU supply source is VBAT.  */
#define   SFRBU_PSWBU_STATE_VDDIN33_Val       _UINT32_(0x1)                                        /* (SFRBU_PSWBU) The VDDBU supply source is VDDIN33.  */
#define SFRBU_PSWBU_STATE_VBAT                (SFRBU_PSWBU_STATE_VBAT_Val << SFRBU_PSWBU_STATE_Pos) /* (SFRBU_PSWBU) The VDDBU supply source is VBAT. Position */
#define SFRBU_PSWBU_STATE_VDDIN33             (SFRBU_PSWBU_STATE_VDDIN33_Val << SFRBU_PSWBU_STATE_Pos) /* (SFRBU_PSWBU) The VDDBU supply source is VDDIN33. Position */
#define SFRBU_PSWBU_PSWKEY_Pos                _UINT32_(8)                                          /* (SFRBU_PSWBU) Specific Value Mandatory to Allow Writing of Other Register Bits (Write-only) Position */
#define SFRBU_PSWBU_PSWKEY_Msk                (_UINT32_(0xFFFFFF) << SFRBU_PSWBU_PSWKEY_Pos)       /* (SFRBU_PSWBU) Specific Value Mandatory to Allow Writing of Other Register Bits (Write-only) Mask */
#define SFRBU_PSWBU_PSWKEY(value)             (SFRBU_PSWBU_PSWKEY_Msk & (_UINT32_(value) << SFRBU_PSWBU_PSWKEY_Pos)) /* Assignment of value for PSWKEY in the SFRBU_PSWBU register */
#define   SFRBU_PSWBU_PSWKEY_PASSWD_Val       _UINT32_(0x4BD20C)                                   /* (SFRBU_PSWBU) Writing any other value in this field aborts the write operation in the SFRBU_PSWBU register. Always reads as 0.  */
#define SFRBU_PSWBU_PSWKEY_PASSWD             (SFRBU_PSWBU_PSWKEY_PASSWD_Val << SFRBU_PSWBU_PSWKEY_Pos) /* (SFRBU_PSWBU) Writing any other value in this field aborts the write operation in the SFRBU_PSWBU register. Always reads as 0. Position */
#define SFRBU_PSWBU_Msk                       _UINT32_(0xFFFFFF07)                                 /* (SFRBU_PSWBU) Register Mask  */


/* -------- SFRBU_DDRPWR : (SFRBU Offset: 0x10) (R/W 32) DDR Power Control -------- */
#define SFRBU_DDRPWR_RESETVALUE               _UINT32_(0x00)                                       /*  (SFRBU_DDRPWR) DDR Power Control  Reset Value */

#define SFRBU_DDRPWR_RETENTION_Pos            _UINT32_(0)                                          /* (SFRBU_DDRPWR) SDRAM I/Os Retention Position */
#define SFRBU_DDRPWR_RETENTION_Msk            (_UINT32_(0x1) << SFRBU_DDRPWR_RETENTION_Pos)        /* (SFRBU_DDRPWR) SDRAM I/Os Retention Mask */
#define SFRBU_DDRPWR_RETENTION(value)         (SFRBU_DDRPWR_RETENTION_Msk & (_UINT32_(value) << SFRBU_DDRPWR_RETENTION_Pos)) /* Assignment of value for RETENTION in the SFRBU_DDRPWR register */
#define SFRBU_DDRPWR_Msk                      _UINT32_(0x00000001)                                 /* (SFRBU_DDRPWR) Register Mask  */


/* SFRBU register offsets definitions */
#define SFRBU_PSWBU_REG_OFST           _UINT32_(0x00)      /* (SFRBU_PSWBU) VDDBU Power Switch Control Offset */
#define SFRBU_DDRPWR_REG_OFST          _UINT32_(0x10)      /* (SFRBU_DDRPWR) DDR Power Control Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* SFRBU register API structure */
typedef struct
{  /* Special Function Register Backup */
  __IO  uint32_t                       SFRBU_PSWBU;        /* Offset: 0x00 (R/W  32) VDDBU Power Switch Control */
  __I   uint8_t                        Reserved1[0x0C];
  __IO  uint32_t                       SFRBU_DDRPWR;       /* Offset: 0x10 (R/W  32) DDR Power Control */
} sfrbu_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G5_SFRBU_COMPONENT_H_ */
