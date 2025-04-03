/*
 * Component description for RSTC
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

/*  file generated from device description file (ATDF) version 2025-04-15T17:35:01Z  */
#ifndef _PIC32CZCA70_RSTC_COMPONENT_H_
#define _PIC32CZCA70_RSTC_COMPONENT_H_

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR RSTC                      */
/* ************************************************************************** */

/* -------- RSTC_CR : (RSTC Offset: 0x00) ( /W 32) Control Register -------- */
#define RSTC_CR_PROCRST_Pos                   _UINT32_(0)                                          /* (RSTC_CR) Processor Reset Position */
#define RSTC_CR_PROCRST_Msk                   (_UINT32_(0x1) << RSTC_CR_PROCRST_Pos)               /* (RSTC_CR) Processor Reset Mask */
#define RSTC_CR_PROCRST(value)                (RSTC_CR_PROCRST_Msk & (_UINT32_(value) << RSTC_CR_PROCRST_Pos)) /* Assignment of value for PROCRST in the RSTC_CR register */
#define RSTC_CR_EXTRST_Pos                    _UINT32_(3)                                          /* (RSTC_CR) External Reset Position */
#define RSTC_CR_EXTRST_Msk                    (_UINT32_(0x1) << RSTC_CR_EXTRST_Pos)                /* (RSTC_CR) External Reset Mask */
#define RSTC_CR_EXTRST(value)                 (RSTC_CR_EXTRST_Msk & (_UINT32_(value) << RSTC_CR_EXTRST_Pos)) /* Assignment of value for EXTRST in the RSTC_CR register */
#define RSTC_CR_KEY_Pos                       _UINT32_(24)                                         /* (RSTC_CR) System Reset Key Position */
#define RSTC_CR_KEY_Msk                       (_UINT32_(0xFF) << RSTC_CR_KEY_Pos)                  /* (RSTC_CR) System Reset Key Mask */
#define RSTC_CR_KEY(value)                    (RSTC_CR_KEY_Msk & (_UINT32_(value) << RSTC_CR_KEY_Pos)) /* Assignment of value for KEY in the RSTC_CR register */
#define   RSTC_CR_KEY_PASSWD_Val              _UINT32_(0xA5)                                       /* (RSTC_CR) Writing any other value in this field aborts the write operation.  */
#define RSTC_CR_KEY_PASSWD                    (RSTC_CR_KEY_PASSWD_Val << RSTC_CR_KEY_Pos)          /* (RSTC_CR) Writing any other value in this field aborts the write operation. Position */
#define RSTC_CR_Msk                           _UINT32_(0xFF000009)                                 /* (RSTC_CR) Register Mask  */


/* -------- RSTC_SR : (RSTC Offset: 0x04) ( R/ 32) Status Register -------- */
#define RSTC_SR_URSTS_Pos                     _UINT32_(0)                                          /* (RSTC_SR) User Reset Status Position */
#define RSTC_SR_URSTS_Msk                     (_UINT32_(0x1) << RSTC_SR_URSTS_Pos)                 /* (RSTC_SR) User Reset Status Mask */
#define RSTC_SR_URSTS(value)                  (RSTC_SR_URSTS_Msk & (_UINT32_(value) << RSTC_SR_URSTS_Pos)) /* Assignment of value for URSTS in the RSTC_SR register */
#define RSTC_SR_RSTTYP_Pos                    _UINT32_(8)                                          /* (RSTC_SR) Reset Type Position */
#define RSTC_SR_RSTTYP_Msk                    (_UINT32_(0x7) << RSTC_SR_RSTTYP_Pos)                /* (RSTC_SR) Reset Type Mask */
#define RSTC_SR_RSTTYP(value)                 (RSTC_SR_RSTTYP_Msk & (_UINT32_(value) << RSTC_SR_RSTTYP_Pos)) /* Assignment of value for RSTTYP in the RSTC_SR register */
#define   RSTC_SR_RSTTYP_GENERAL_RST_Val      _UINT32_(0x0)                                        /* (RSTC_SR) First power-up reset  */
#define   RSTC_SR_RSTTYP_BACKUP_RST_Val       _UINT32_(0x1)                                        /* (RSTC_SR) Return from Backup Mode  */
#define   RSTC_SR_RSTTYP_WDT_RST_Val          _UINT32_(0x2)                                        /* (RSTC_SR) Watchdog fault occurred  */
#define   RSTC_SR_RSTTYP_SOFT_RST_Val         _UINT32_(0x3)                                        /* (RSTC_SR) Processor reset required by the software  */
#define   RSTC_SR_RSTTYP_USER_RST_Val         _UINT32_(0x4)                                        /* (RSTC_SR) NRST pin detected low  */
#define RSTC_SR_RSTTYP_GENERAL_RST            (RSTC_SR_RSTTYP_GENERAL_RST_Val << RSTC_SR_RSTTYP_Pos) /* (RSTC_SR) First power-up reset Position */
#define RSTC_SR_RSTTYP_BACKUP_RST             (RSTC_SR_RSTTYP_BACKUP_RST_Val << RSTC_SR_RSTTYP_Pos) /* (RSTC_SR) Return from Backup Mode Position */
#define RSTC_SR_RSTTYP_WDT_RST                (RSTC_SR_RSTTYP_WDT_RST_Val << RSTC_SR_RSTTYP_Pos)   /* (RSTC_SR) Watchdog fault occurred Position */
#define RSTC_SR_RSTTYP_SOFT_RST               (RSTC_SR_RSTTYP_SOFT_RST_Val << RSTC_SR_RSTTYP_Pos)  /* (RSTC_SR) Processor reset required by the software Position */
#define RSTC_SR_RSTTYP_USER_RST               (RSTC_SR_RSTTYP_USER_RST_Val << RSTC_SR_RSTTYP_Pos)  /* (RSTC_SR) NRST pin detected low Position */
#define RSTC_SR_NRSTL_Pos                     _UINT32_(16)                                         /* (RSTC_SR) NRST Pin Level Position */
#define RSTC_SR_NRSTL_Msk                     (_UINT32_(0x1) << RSTC_SR_NRSTL_Pos)                 /* (RSTC_SR) NRST Pin Level Mask */
#define RSTC_SR_NRSTL(value)                  (RSTC_SR_NRSTL_Msk & (_UINT32_(value) << RSTC_SR_NRSTL_Pos)) /* Assignment of value for NRSTL in the RSTC_SR register */
#define RSTC_SR_SRCMP_Pos                     _UINT32_(17)                                         /* (RSTC_SR) Software Reset Command in Progress Position */
#define RSTC_SR_SRCMP_Msk                     (_UINT32_(0x1) << RSTC_SR_SRCMP_Pos)                 /* (RSTC_SR) Software Reset Command in Progress Mask */
#define RSTC_SR_SRCMP(value)                  (RSTC_SR_SRCMP_Msk & (_UINT32_(value) << RSTC_SR_SRCMP_Pos)) /* Assignment of value for SRCMP in the RSTC_SR register */
#define RSTC_SR_Msk                           _UINT32_(0x00030701)                                 /* (RSTC_SR) Register Mask  */


/* -------- RSTC_MR : (RSTC Offset: 0x08) (R/W 32) Mode Register -------- */
#define RSTC_MR_URSTEN_Pos                    _UINT32_(0)                                          /* (RSTC_MR) User Reset Enable Position */
#define RSTC_MR_URSTEN_Msk                    (_UINT32_(0x1) << RSTC_MR_URSTEN_Pos)                /* (RSTC_MR) User Reset Enable Mask */
#define RSTC_MR_URSTEN(value)                 (RSTC_MR_URSTEN_Msk & (_UINT32_(value) << RSTC_MR_URSTEN_Pos)) /* Assignment of value for URSTEN in the RSTC_MR register */
#define RSTC_MR_URSTIEN_Pos                   _UINT32_(4)                                          /* (RSTC_MR) User Reset Interrupt Enable Position */
#define RSTC_MR_URSTIEN_Msk                   (_UINT32_(0x1) << RSTC_MR_URSTIEN_Pos)               /* (RSTC_MR) User Reset Interrupt Enable Mask */
#define RSTC_MR_URSTIEN(value)                (RSTC_MR_URSTIEN_Msk & (_UINT32_(value) << RSTC_MR_URSTIEN_Pos)) /* Assignment of value for URSTIEN in the RSTC_MR register */
#define RSTC_MR_ERSTL_Pos                     _UINT32_(8)                                          /* (RSTC_MR) External Reset Length Position */
#define RSTC_MR_ERSTL_Msk                     (_UINT32_(0xF) << RSTC_MR_ERSTL_Pos)                 /* (RSTC_MR) External Reset Length Mask */
#define RSTC_MR_ERSTL(value)                  (RSTC_MR_ERSTL_Msk & (_UINT32_(value) << RSTC_MR_ERSTL_Pos)) /* Assignment of value for ERSTL in the RSTC_MR register */
#define RSTC_MR_KEY_Pos                       _UINT32_(24)                                         /* (RSTC_MR) Write Access Password Position */
#define RSTC_MR_KEY_Msk                       (_UINT32_(0xFF) << RSTC_MR_KEY_Pos)                  /* (RSTC_MR) Write Access Password Mask */
#define RSTC_MR_KEY(value)                    (RSTC_MR_KEY_Msk & (_UINT32_(value) << RSTC_MR_KEY_Pos)) /* Assignment of value for KEY in the RSTC_MR register */
#define   RSTC_MR_KEY_PASSWD_Val              _UINT32_(0xA5)                                       /* (RSTC_MR) Writing any other value in this field aborts the write operation.Always reads as 0.  */
#define RSTC_MR_KEY_PASSWD                    (RSTC_MR_KEY_PASSWD_Val << RSTC_MR_KEY_Pos)          /* (RSTC_MR) Writing any other value in this field aborts the write operation.Always reads as 0. Position */
#define RSTC_MR_Msk                           _UINT32_(0xFF000F11)                                 /* (RSTC_MR) Register Mask  */


/* RSTC register offsets definitions */
#define RSTC_CR_REG_OFST               _UINT32_(0x00)      /* (RSTC_CR) Control Register Offset */
#define RSTC_SR_REG_OFST               _UINT32_(0x04)      /* (RSTC_SR) Status Register Offset */
#define RSTC_MR_REG_OFST               _UINT32_(0x08)      /* (RSTC_MR) Mode Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* RSTC register API structure */
typedef struct
{
  __O   uint32_t                       RSTC_CR;            /* Offset: 0x00 ( /W  32) Control Register */
  __I   uint32_t                       RSTC_SR;            /* Offset: 0x04 (R/   32) Status Register */
  __IO  uint32_t                       RSTC_MR;            /* Offset: 0x08 (R/W  32) Mode Register */
} rstc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CZCA70_RSTC_COMPONENT_H_ */
