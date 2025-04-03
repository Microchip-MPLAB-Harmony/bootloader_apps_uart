/*
 * Component description for RSWDT
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
#ifndef _PIC32CZCA70_RSWDT_COMPONENT_H_
#define _PIC32CZCA70_RSWDT_COMPONENT_H_

/* ************************************************************************** */
/*                     SOFTWARE API DEFINITION FOR RSWDT                      */
/* ************************************************************************** */

/* -------- RSWDT_CR : (RSWDT Offset: 0x00) ( /W 32) Control Register -------- */
#define RSWDT_CR_WDRSTT_Pos                   _UINT32_(0)                                          /* (RSWDT_CR) Watchdog Restart Position */
#define RSWDT_CR_WDRSTT_Msk                   (_UINT32_(0x1) << RSWDT_CR_WDRSTT_Pos)               /* (RSWDT_CR) Watchdog Restart Mask */
#define RSWDT_CR_WDRSTT(value)                (RSWDT_CR_WDRSTT_Msk & (_UINT32_(value) << RSWDT_CR_WDRSTT_Pos)) /* Assignment of value for WDRSTT in the RSWDT_CR register */
#define RSWDT_CR_KEY_Pos                      _UINT32_(24)                                         /* (RSWDT_CR) Password Position */
#define RSWDT_CR_KEY_Msk                      (_UINT32_(0xFF) << RSWDT_CR_KEY_Pos)                 /* (RSWDT_CR) Password Mask */
#define RSWDT_CR_KEY(value)                   (RSWDT_CR_KEY_Msk & (_UINT32_(value) << RSWDT_CR_KEY_Pos)) /* Assignment of value for KEY in the RSWDT_CR register */
#define   RSWDT_CR_KEY_PASSWD_Val             _UINT32_(0xC4)                                       /* (RSWDT_CR) Writing any other value in this field aborts the write operation.  */
#define RSWDT_CR_KEY_PASSWD                   (RSWDT_CR_KEY_PASSWD_Val << RSWDT_CR_KEY_Pos)        /* (RSWDT_CR) Writing any other value in this field aborts the write operation. Position */
#define RSWDT_CR_Msk                          _UINT32_(0xFF000001)                                 /* (RSWDT_CR) Register Mask  */


/* -------- RSWDT_MR : (RSWDT Offset: 0x04) (R/W 32) Mode Register -------- */
#define RSWDT_MR_WDV_Pos                      _UINT32_(0)                                          /* (RSWDT_MR) Watchdog Counter Value Position */
#define RSWDT_MR_WDV_Msk                      (_UINT32_(0xFFF) << RSWDT_MR_WDV_Pos)                /* (RSWDT_MR) Watchdog Counter Value Mask */
#define RSWDT_MR_WDV(value)                   (RSWDT_MR_WDV_Msk & (_UINT32_(value) << RSWDT_MR_WDV_Pos)) /* Assignment of value for WDV in the RSWDT_MR register */
#define RSWDT_MR_WDFIEN_Pos                   _UINT32_(12)                                         /* (RSWDT_MR) Watchdog Fault Interrupt Enable Position */
#define RSWDT_MR_WDFIEN_Msk                   (_UINT32_(0x1) << RSWDT_MR_WDFIEN_Pos)               /* (RSWDT_MR) Watchdog Fault Interrupt Enable Mask */
#define RSWDT_MR_WDFIEN(value)                (RSWDT_MR_WDFIEN_Msk & (_UINT32_(value) << RSWDT_MR_WDFIEN_Pos)) /* Assignment of value for WDFIEN in the RSWDT_MR register */
#define RSWDT_MR_WDRSTEN_Pos                  _UINT32_(13)                                         /* (RSWDT_MR) Watchdog Reset Enable Position */
#define RSWDT_MR_WDRSTEN_Msk                  (_UINT32_(0x1) << RSWDT_MR_WDRSTEN_Pos)              /* (RSWDT_MR) Watchdog Reset Enable Mask */
#define RSWDT_MR_WDRSTEN(value)               (RSWDT_MR_WDRSTEN_Msk & (_UINT32_(value) << RSWDT_MR_WDRSTEN_Pos)) /* Assignment of value for WDRSTEN in the RSWDT_MR register */
#define RSWDT_MR_WDDIS_Pos                    _UINT32_(15)                                         /* (RSWDT_MR) Watchdog Disable Position */
#define RSWDT_MR_WDDIS_Msk                    (_UINT32_(0x1) << RSWDT_MR_WDDIS_Pos)                /* (RSWDT_MR) Watchdog Disable Mask */
#define RSWDT_MR_WDDIS(value)                 (RSWDT_MR_WDDIS_Msk & (_UINT32_(value) << RSWDT_MR_WDDIS_Pos)) /* Assignment of value for WDDIS in the RSWDT_MR register */
#define RSWDT_MR_ALLONES_Pos                  _UINT32_(16)                                         /* (RSWDT_MR) Must Always Be Written with 0xFFF Position */
#define RSWDT_MR_ALLONES_Msk                  (_UINT32_(0xFFF) << RSWDT_MR_ALLONES_Pos)            /* (RSWDT_MR) Must Always Be Written with 0xFFF Mask */
#define RSWDT_MR_ALLONES(value)               (RSWDT_MR_ALLONES_Msk & (_UINT32_(value) << RSWDT_MR_ALLONES_Pos)) /* Assignment of value for ALLONES in the RSWDT_MR register */
#define RSWDT_MR_WDDBGHLT_Pos                 _UINT32_(28)                                         /* (RSWDT_MR) Watchdog Debug Halt Position */
#define RSWDT_MR_WDDBGHLT_Msk                 (_UINT32_(0x1) << RSWDT_MR_WDDBGHLT_Pos)             /* (RSWDT_MR) Watchdog Debug Halt Mask */
#define RSWDT_MR_WDDBGHLT(value)              (RSWDT_MR_WDDBGHLT_Msk & (_UINT32_(value) << RSWDT_MR_WDDBGHLT_Pos)) /* Assignment of value for WDDBGHLT in the RSWDT_MR register */
#define RSWDT_MR_WDIDLEHLT_Pos                _UINT32_(29)                                         /* (RSWDT_MR) Watchdog Idle Halt Position */
#define RSWDT_MR_WDIDLEHLT_Msk                (_UINT32_(0x1) << RSWDT_MR_WDIDLEHLT_Pos)            /* (RSWDT_MR) Watchdog Idle Halt Mask */
#define RSWDT_MR_WDIDLEHLT(value)             (RSWDT_MR_WDIDLEHLT_Msk & (_UINT32_(value) << RSWDT_MR_WDIDLEHLT_Pos)) /* Assignment of value for WDIDLEHLT in the RSWDT_MR register */
#define RSWDT_MR_Msk                          _UINT32_(0x3FFFBFFF)                                 /* (RSWDT_MR) Register Mask  */


/* -------- RSWDT_SR : (RSWDT Offset: 0x08) ( R/ 32) Status Register -------- */
#define RSWDT_SR_WDUNF_Pos                    _UINT32_(0)                                          /* (RSWDT_SR) Watchdog Underflow Position */
#define RSWDT_SR_WDUNF_Msk                    (_UINT32_(0x1) << RSWDT_SR_WDUNF_Pos)                /* (RSWDT_SR) Watchdog Underflow Mask */
#define RSWDT_SR_WDUNF(value)                 (RSWDT_SR_WDUNF_Msk & (_UINT32_(value) << RSWDT_SR_WDUNF_Pos)) /* Assignment of value for WDUNF in the RSWDT_SR register */
#define RSWDT_SR_Msk                          _UINT32_(0x00000001)                                 /* (RSWDT_SR) Register Mask  */


/* RSWDT register offsets definitions */
#define RSWDT_CR_REG_OFST              _UINT32_(0x00)      /* (RSWDT_CR) Control Register Offset */
#define RSWDT_MR_REG_OFST              _UINT32_(0x04)      /* (RSWDT_MR) Mode Register Offset */
#define RSWDT_SR_REG_OFST              _UINT32_(0x08)      /* (RSWDT_SR) Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* RSWDT register API structure */
typedef struct
{
  __O   uint32_t                       RSWDT_CR;           /* Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       RSWDT_MR;           /* Offset: 0x04 (R/W  32) Mode Register */
  __I   uint32_t                       RSWDT_SR;           /* Offset: 0x08 (R/   32) Status Register */
} rswdt_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CZCA70_RSWDT_COMPONENT_H_ */
