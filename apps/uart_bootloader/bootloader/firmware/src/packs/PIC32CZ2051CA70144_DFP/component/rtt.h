/*
 * Component description for RTT
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
#ifndef _PIC32CZCA70_RTT_COMPONENT_H_
#define _PIC32CZCA70_RTT_COMPONENT_H_

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR RTT                       */
/* ************************************************************************** */

/* -------- RTT_MR : (RTT Offset: 0x00) (R/W 32) Mode Register -------- */
#define RTT_MR_RTPRES_Pos                     _UINT32_(0)                                          /* (RTT_MR) Real-time Timer Prescaler Value Position */
#define RTT_MR_RTPRES_Msk                     (_UINT32_(0xFFFF) << RTT_MR_RTPRES_Pos)              /* (RTT_MR) Real-time Timer Prescaler Value Mask */
#define RTT_MR_RTPRES(value)                  (RTT_MR_RTPRES_Msk & (_UINT32_(value) << RTT_MR_RTPRES_Pos)) /* Assignment of value for RTPRES in the RTT_MR register */
#define RTT_MR_ALMIEN_Pos                     _UINT32_(16)                                         /* (RTT_MR) Alarm Interrupt Enable Position */
#define RTT_MR_ALMIEN_Msk                     (_UINT32_(0x1) << RTT_MR_ALMIEN_Pos)                 /* (RTT_MR) Alarm Interrupt Enable Mask */
#define RTT_MR_ALMIEN(value)                  (RTT_MR_ALMIEN_Msk & (_UINT32_(value) << RTT_MR_ALMIEN_Pos)) /* Assignment of value for ALMIEN in the RTT_MR register */
#define RTT_MR_RTTINCIEN_Pos                  _UINT32_(17)                                         /* (RTT_MR) Real-time Timer Increment Interrupt Enable Position */
#define RTT_MR_RTTINCIEN_Msk                  (_UINT32_(0x1) << RTT_MR_RTTINCIEN_Pos)              /* (RTT_MR) Real-time Timer Increment Interrupt Enable Mask */
#define RTT_MR_RTTINCIEN(value)               (RTT_MR_RTTINCIEN_Msk & (_UINT32_(value) << RTT_MR_RTTINCIEN_Pos)) /* Assignment of value for RTTINCIEN in the RTT_MR register */
#define RTT_MR_RTTRST_Pos                     _UINT32_(18)                                         /* (RTT_MR) Real-time Timer Restart Position */
#define RTT_MR_RTTRST_Msk                     (_UINT32_(0x1) << RTT_MR_RTTRST_Pos)                 /* (RTT_MR) Real-time Timer Restart Mask */
#define RTT_MR_RTTRST(value)                  (RTT_MR_RTTRST_Msk & (_UINT32_(value) << RTT_MR_RTTRST_Pos)) /* Assignment of value for RTTRST in the RTT_MR register */
#define RTT_MR_RTTDIS_Pos                     _UINT32_(20)                                         /* (RTT_MR) Real-time Timer Disable Position */
#define RTT_MR_RTTDIS_Msk                     (_UINT32_(0x1) << RTT_MR_RTTDIS_Pos)                 /* (RTT_MR) Real-time Timer Disable Mask */
#define RTT_MR_RTTDIS(value)                  (RTT_MR_RTTDIS_Msk & (_UINT32_(value) << RTT_MR_RTTDIS_Pos)) /* Assignment of value for RTTDIS in the RTT_MR register */
#define RTT_MR_RTC1HZ_Pos                     _UINT32_(24)                                         /* (RTT_MR) Real-Time Clock 1Hz Clock Selection Position */
#define RTT_MR_RTC1HZ_Msk                     (_UINT32_(0x1) << RTT_MR_RTC1HZ_Pos)                 /* (RTT_MR) Real-Time Clock 1Hz Clock Selection Mask */
#define RTT_MR_RTC1HZ(value)                  (RTT_MR_RTC1HZ_Msk & (_UINT32_(value) << RTT_MR_RTC1HZ_Pos)) /* Assignment of value for RTC1HZ in the RTT_MR register */
#define RTT_MR_Msk                            _UINT32_(0x0117FFFF)                                 /* (RTT_MR) Register Mask  */


/* -------- RTT_AR : (RTT Offset: 0x04) (R/W 32) Alarm Register -------- */
#define RTT_AR_ALMV_Pos                       _UINT32_(0)                                          /* (RTT_AR) Alarm Value Position */
#define RTT_AR_ALMV_Msk                       (_UINT32_(0xFFFFFFFF) << RTT_AR_ALMV_Pos)            /* (RTT_AR) Alarm Value Mask */
#define RTT_AR_ALMV(value)                    (RTT_AR_ALMV_Msk & (_UINT32_(value) << RTT_AR_ALMV_Pos)) /* Assignment of value for ALMV in the RTT_AR register */
#define RTT_AR_Msk                            _UINT32_(0xFFFFFFFF)                                 /* (RTT_AR) Register Mask  */


/* -------- RTT_VR : (RTT Offset: 0x08) ( R/ 32) Value Register -------- */
#define RTT_VR_CRTV_Pos                       _UINT32_(0)                                          /* (RTT_VR) Current Real-time Value Position */
#define RTT_VR_CRTV_Msk                       (_UINT32_(0xFFFFFFFF) << RTT_VR_CRTV_Pos)            /* (RTT_VR) Current Real-time Value Mask */
#define RTT_VR_CRTV(value)                    (RTT_VR_CRTV_Msk & (_UINT32_(value) << RTT_VR_CRTV_Pos)) /* Assignment of value for CRTV in the RTT_VR register */
#define RTT_VR_Msk                            _UINT32_(0xFFFFFFFF)                                 /* (RTT_VR) Register Mask  */


/* -------- RTT_SR : (RTT Offset: 0x0C) ( R/ 32) Status Register -------- */
#define RTT_SR_ALMS_Pos                       _UINT32_(0)                                          /* (RTT_SR) Real-time Alarm Status (cleared on read) Position */
#define RTT_SR_ALMS_Msk                       (_UINT32_(0x1) << RTT_SR_ALMS_Pos)                   /* (RTT_SR) Real-time Alarm Status (cleared on read) Mask */
#define RTT_SR_ALMS(value)                    (RTT_SR_ALMS_Msk & (_UINT32_(value) << RTT_SR_ALMS_Pos)) /* Assignment of value for ALMS in the RTT_SR register */
#define RTT_SR_RTTINC_Pos                     _UINT32_(1)                                          /* (RTT_SR) Prescaler Roll-over Status (cleared on read) Position */
#define RTT_SR_RTTINC_Msk                     (_UINT32_(0x1) << RTT_SR_RTTINC_Pos)                 /* (RTT_SR) Prescaler Roll-over Status (cleared on read) Mask */
#define RTT_SR_RTTINC(value)                  (RTT_SR_RTTINC_Msk & (_UINT32_(value) << RTT_SR_RTTINC_Pos)) /* Assignment of value for RTTINC in the RTT_SR register */
#define RTT_SR_Msk                            _UINT32_(0x00000003)                                 /* (RTT_SR) Register Mask  */


/* RTT register offsets definitions */
#define RTT_MR_REG_OFST                _UINT32_(0x00)      /* (RTT_MR) Mode Register Offset */
#define RTT_AR_REG_OFST                _UINT32_(0x04)      /* (RTT_AR) Alarm Register Offset */
#define RTT_VR_REG_OFST                _UINT32_(0x08)      /* (RTT_VR) Value Register Offset */
#define RTT_SR_REG_OFST                _UINT32_(0x0C)      /* (RTT_SR) Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* RTT register API structure */
typedef struct
{
  __IO  uint32_t                       RTT_MR;             /* Offset: 0x00 (R/W  32) Mode Register */
  __IO  uint32_t                       RTT_AR;             /* Offset: 0x04 (R/W  32) Alarm Register */
  __I   uint32_t                       RTT_VR;             /* Offset: 0x08 (R/   32) Value Register */
  __I   uint32_t                       RTT_SR;             /* Offset: 0x0C (R/   32) Status Register */
} rtt_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CZCA70_RTT_COMPONENT_H_ */
