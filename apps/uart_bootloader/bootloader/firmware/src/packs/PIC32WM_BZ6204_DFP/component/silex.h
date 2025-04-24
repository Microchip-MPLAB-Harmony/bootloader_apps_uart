/*
 * Component description for SILEX
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

/*  file generated from device description file (ATDF) version 2025-01-29T18:23:31Z  */
#ifndef _PIC32WM_BZ6_SILEX_COMPONENT_H_
#define _PIC32WM_BZ6_SILEX_COMPONENT_H_

/* ************************************************************************** */
/*                     SOFTWARE API DEFINITION FOR SILEX                      */
/* ************************************************************************** */

/* -------- SILEX_DMA_FETCH_ADDR_LSB : (SILEX Offset: 0x00) (R/W 32)  -------- */
#define SILEX_DMA_FETCH_ADDR_LSB_RESETVALUE   _UINT32_(0x00)                                       /*  (SILEX_DMA_FETCH_ADDR_LSB)   Reset Value */

#define SILEX_DMA_FETCH_ADDR_LSB_FETCH_ADDR_LSB_Pos _UINT32_(0)                                          /* (SILEX_DMA_FETCH_ADDR_LSB)  Position */
#define SILEX_DMA_FETCH_ADDR_LSB_FETCH_ADDR_LSB_Msk (_UINT32_(0xFFFFFFFF) << SILEX_DMA_FETCH_ADDR_LSB_FETCH_ADDR_LSB_Pos) /* (SILEX_DMA_FETCH_ADDR_LSB)  Mask */
#define SILEX_DMA_FETCH_ADDR_LSB_FETCH_ADDR_LSB(value) (SILEX_DMA_FETCH_ADDR_LSB_FETCH_ADDR_LSB_Msk & (_UINT32_(value) << SILEX_DMA_FETCH_ADDR_LSB_FETCH_ADDR_LSB_Pos)) /* Assignment of value for FETCH_ADDR_LSB in the SILEX_DMA_FETCH_ADDR_LSB register */
#define SILEX_DMA_FETCH_ADDR_LSB_Msk          _UINT32_(0xFFFFFFFF)                                 /* (SILEX_DMA_FETCH_ADDR_LSB) Register Mask  */


/* -------- SILEX_DMA_FETCH_ADDR_MSB : (SILEX Offset: 0x04) (R/W 32)  -------- */
#define SILEX_DMA_FETCH_ADDR_MSB_RESETVALUE   _UINT32_(0x00)                                       /*  (SILEX_DMA_FETCH_ADDR_MSB)   Reset Value */

#define SILEX_DMA_FETCH_ADDR_MSB_FETCH_ADDR_MSB_Pos _UINT32_(0)                                          /* (SILEX_DMA_FETCH_ADDR_MSB)  Position */
#define SILEX_DMA_FETCH_ADDR_MSB_FETCH_ADDR_MSB_Msk (_UINT32_(0xFFFFFFFF) << SILEX_DMA_FETCH_ADDR_MSB_FETCH_ADDR_MSB_Pos) /* (SILEX_DMA_FETCH_ADDR_MSB)  Mask */
#define SILEX_DMA_FETCH_ADDR_MSB_FETCH_ADDR_MSB(value) (SILEX_DMA_FETCH_ADDR_MSB_FETCH_ADDR_MSB_Msk & (_UINT32_(value) << SILEX_DMA_FETCH_ADDR_MSB_FETCH_ADDR_MSB_Pos)) /* Assignment of value for FETCH_ADDR_MSB in the SILEX_DMA_FETCH_ADDR_MSB register */
#define SILEX_DMA_FETCH_ADDR_MSB_Msk          _UINT32_(0xFFFFFFFF)                                 /* (SILEX_DMA_FETCH_ADDR_MSB) Register Mask  */


/* -------- SILEX_DMA_FETCH_LEN : (SILEX Offset: 0x08) (R/W 32)  -------- */
#define SILEX_DMA_FETCH_LEN_RESETVALUE        _UINT32_(0x00)                                       /*  (SILEX_DMA_FETCH_LEN)   Reset Value */

#define SILEX_DMA_FETCH_LEN_FETCH_LEN_Pos     _UINT32_(0)                                          /* (SILEX_DMA_FETCH_LEN)  Position */
#define SILEX_DMA_FETCH_LEN_FETCH_LEN_Msk     (_UINT32_(0xFFFFFFF) << SILEX_DMA_FETCH_LEN_FETCH_LEN_Pos) /* (SILEX_DMA_FETCH_LEN)  Mask */
#define SILEX_DMA_FETCH_LEN_FETCH_LEN(value)  (SILEX_DMA_FETCH_LEN_FETCH_LEN_Msk & (_UINT32_(value) << SILEX_DMA_FETCH_LEN_FETCH_LEN_Pos)) /* Assignment of value for FETCH_LEN in the SILEX_DMA_FETCH_LEN register */
#define SILEX_DMA_FETCH_LEN_FETCH_CSTADDR_Pos _UINT32_(28)                                         /* (SILEX_DMA_FETCH_LEN)  Position */
#define SILEX_DMA_FETCH_LEN_FETCH_CSTADDR_Msk (_UINT32_(0x1) << SILEX_DMA_FETCH_LEN_FETCH_CSTADDR_Pos) /* (SILEX_DMA_FETCH_LEN)  Mask */
#define SILEX_DMA_FETCH_LEN_FETCH_CSTADDR(value) (SILEX_DMA_FETCH_LEN_FETCH_CSTADDR_Msk & (_UINT32_(value) << SILEX_DMA_FETCH_LEN_FETCH_CSTADDR_Pos)) /* Assignment of value for FETCH_CSTADDR in the SILEX_DMA_FETCH_LEN register */
#define SILEX_DMA_FETCH_LEN_FETCH_REALIGN_Pos _UINT32_(29)                                         /* (SILEX_DMA_FETCH_LEN)  Position */
#define SILEX_DMA_FETCH_LEN_FETCH_REALIGN_Msk (_UINT32_(0x1) << SILEX_DMA_FETCH_LEN_FETCH_REALIGN_Pos) /* (SILEX_DMA_FETCH_LEN)  Mask */
#define SILEX_DMA_FETCH_LEN_FETCH_REALIGN(value) (SILEX_DMA_FETCH_LEN_FETCH_REALIGN_Msk & (_UINT32_(value) << SILEX_DMA_FETCH_LEN_FETCH_REALIGN_Pos)) /* Assignment of value for FETCH_REALIGN in the SILEX_DMA_FETCH_LEN register */
#define SILEX_DMA_FETCH_LEN_FETCH_ZPADDING_Pos _UINT32_(30)                                         /* (SILEX_DMA_FETCH_LEN)  Position */
#define SILEX_DMA_FETCH_LEN_FETCH_ZPADDING_Msk (_UINT32_(0x1) << SILEX_DMA_FETCH_LEN_FETCH_ZPADDING_Pos) /* (SILEX_DMA_FETCH_LEN)  Mask */
#define SILEX_DMA_FETCH_LEN_FETCH_ZPADDING(value) (SILEX_DMA_FETCH_LEN_FETCH_ZPADDING_Msk & (_UINT32_(value) << SILEX_DMA_FETCH_LEN_FETCH_ZPADDING_Pos)) /* Assignment of value for FETCH_ZPADDING in the SILEX_DMA_FETCH_LEN register */
#define SILEX_DMA_FETCH_LEN_Msk               _UINT32_(0x7FFFFFFF)                                 /* (SILEX_DMA_FETCH_LEN) Register Mask  */


/* -------- SILEX_DMA_FETCH_TAG : (SILEX Offset: 0x0C) (R/W 32)  -------- */
#define SILEX_DMA_FETCH_TAG_RESETVALUE        _UINT32_(0x00)                                       /*  (SILEX_DMA_FETCH_TAG)   Reset Value */

#define SILEX_DMA_FETCH_TAG_FETCH_TAG_Pos     _UINT32_(0)                                          /* (SILEX_DMA_FETCH_TAG)  Position */
#define SILEX_DMA_FETCH_TAG_FETCH_TAG_Msk     (_UINT32_(0xFFFFFFFF) << SILEX_DMA_FETCH_TAG_FETCH_TAG_Pos) /* (SILEX_DMA_FETCH_TAG)  Mask */
#define SILEX_DMA_FETCH_TAG_FETCH_TAG(value)  (SILEX_DMA_FETCH_TAG_FETCH_TAG_Msk & (_UINT32_(value) << SILEX_DMA_FETCH_TAG_FETCH_TAG_Pos)) /* Assignment of value for FETCH_TAG in the SILEX_DMA_FETCH_TAG register */
#define SILEX_DMA_FETCH_TAG_Msk               _UINT32_(0xFFFFFFFF)                                 /* (SILEX_DMA_FETCH_TAG) Register Mask  */


/* -------- SILEX_DMA_PUSH_ADDR_LSB : (SILEX Offset: 0x10) (R/W 32)  -------- */
#define SILEX_DMA_PUSH_ADDR_LSB_RESETVALUE    _UINT32_(0x00)                                       /*  (SILEX_DMA_PUSH_ADDR_LSB)   Reset Value */

#define SILEX_DMA_PUSH_ADDR_LSB_PUSH_ADDR_LSB_Pos _UINT32_(0)                                          /* (SILEX_DMA_PUSH_ADDR_LSB)  Position */
#define SILEX_DMA_PUSH_ADDR_LSB_PUSH_ADDR_LSB_Msk (_UINT32_(0xFFFFFFFF) << SILEX_DMA_PUSH_ADDR_LSB_PUSH_ADDR_LSB_Pos) /* (SILEX_DMA_PUSH_ADDR_LSB)  Mask */
#define SILEX_DMA_PUSH_ADDR_LSB_PUSH_ADDR_LSB(value) (SILEX_DMA_PUSH_ADDR_LSB_PUSH_ADDR_LSB_Msk & (_UINT32_(value) << SILEX_DMA_PUSH_ADDR_LSB_PUSH_ADDR_LSB_Pos)) /* Assignment of value for PUSH_ADDR_LSB in the SILEX_DMA_PUSH_ADDR_LSB register */
#define SILEX_DMA_PUSH_ADDR_LSB_Msk           _UINT32_(0xFFFFFFFF)                                 /* (SILEX_DMA_PUSH_ADDR_LSB) Register Mask  */


/* -------- SILEX_DMA_PUSH_ADDR_MSB : (SILEX Offset: 0x14) (R/W 32)  -------- */
#define SILEX_DMA_PUSH_ADDR_MSB_RESETVALUE    _UINT32_(0x00)                                       /*  (SILEX_DMA_PUSH_ADDR_MSB)   Reset Value */

#define SILEX_DMA_PUSH_ADDR_MSB_PUSH_ADDR_MSB_Pos _UINT32_(0)                                          /* (SILEX_DMA_PUSH_ADDR_MSB)  Position */
#define SILEX_DMA_PUSH_ADDR_MSB_PUSH_ADDR_MSB_Msk (_UINT32_(0xFFFFFFFF) << SILEX_DMA_PUSH_ADDR_MSB_PUSH_ADDR_MSB_Pos) /* (SILEX_DMA_PUSH_ADDR_MSB)  Mask */
#define SILEX_DMA_PUSH_ADDR_MSB_PUSH_ADDR_MSB(value) (SILEX_DMA_PUSH_ADDR_MSB_PUSH_ADDR_MSB_Msk & (_UINT32_(value) << SILEX_DMA_PUSH_ADDR_MSB_PUSH_ADDR_MSB_Pos)) /* Assignment of value for PUSH_ADDR_MSB in the SILEX_DMA_PUSH_ADDR_MSB register */
#define SILEX_DMA_PUSH_ADDR_MSB_Msk           _UINT32_(0xFFFFFFFF)                                 /* (SILEX_DMA_PUSH_ADDR_MSB) Register Mask  */


/* -------- SILEX_DMA_PUSH_LEN : (SILEX Offset: 0x18) (R/W 32)  -------- */
#define SILEX_DMA_PUSH_LEN_RESETVALUE         _UINT32_(0x00)                                       /*  (SILEX_DMA_PUSH_LEN)   Reset Value */

#define SILEX_DMA_PUSH_LEN_PUSH_LEN_Pos       _UINT32_(0)                                          /* (SILEX_DMA_PUSH_LEN)  Position */
#define SILEX_DMA_PUSH_LEN_PUSH_LEN_Msk       (_UINT32_(0xFFFFFFF) << SILEX_DMA_PUSH_LEN_PUSH_LEN_Pos) /* (SILEX_DMA_PUSH_LEN)  Mask */
#define SILEX_DMA_PUSH_LEN_PUSH_LEN(value)    (SILEX_DMA_PUSH_LEN_PUSH_LEN_Msk & (_UINT32_(value) << SILEX_DMA_PUSH_LEN_PUSH_LEN_Pos)) /* Assignment of value for PUSH_LEN in the SILEX_DMA_PUSH_LEN register */
#define SILEX_DMA_PUSH_LEN_PUSH_CSTADDR_Pos   _UINT32_(28)                                         /* (SILEX_DMA_PUSH_LEN)  Position */
#define SILEX_DMA_PUSH_LEN_PUSH_CSTADDR_Msk   (_UINT32_(0x1) << SILEX_DMA_PUSH_LEN_PUSH_CSTADDR_Pos) /* (SILEX_DMA_PUSH_LEN)  Mask */
#define SILEX_DMA_PUSH_LEN_PUSH_CSTADDR(value) (SILEX_DMA_PUSH_LEN_PUSH_CSTADDR_Msk & (_UINT32_(value) << SILEX_DMA_PUSH_LEN_PUSH_CSTADDR_Pos)) /* Assignment of value for PUSH_CSTADDR in the SILEX_DMA_PUSH_LEN register */
#define SILEX_DMA_PUSH_LEN_PUSH_REALIGN_Pos   _UINT32_(29)                                         /* (SILEX_DMA_PUSH_LEN)  Position */
#define SILEX_DMA_PUSH_LEN_PUSH_REALIGN_Msk   (_UINT32_(0x1) << SILEX_DMA_PUSH_LEN_PUSH_REALIGN_Pos) /* (SILEX_DMA_PUSH_LEN)  Mask */
#define SILEX_DMA_PUSH_LEN_PUSH_REALIGN(value) (SILEX_DMA_PUSH_LEN_PUSH_REALIGN_Msk & (_UINT32_(value) << SILEX_DMA_PUSH_LEN_PUSH_REALIGN_Pos)) /* Assignment of value for PUSH_REALIGN in the SILEX_DMA_PUSH_LEN register */
#define SILEX_DMA_PUSH_LEN_PUSH_DISCARD_Pos   _UINT32_(30)                                         /* (SILEX_DMA_PUSH_LEN)  Position */
#define SILEX_DMA_PUSH_LEN_PUSH_DISCARD_Msk   (_UINT32_(0x1) << SILEX_DMA_PUSH_LEN_PUSH_DISCARD_Pos) /* (SILEX_DMA_PUSH_LEN)  Mask */
#define SILEX_DMA_PUSH_LEN_PUSH_DISCARD(value) (SILEX_DMA_PUSH_LEN_PUSH_DISCARD_Msk & (_UINT32_(value) << SILEX_DMA_PUSH_LEN_PUSH_DISCARD_Pos)) /* Assignment of value for PUSH_DISCARD in the SILEX_DMA_PUSH_LEN register */
#define SILEX_DMA_PUSH_LEN_Msk                _UINT32_(0x7FFFFFFF)                                 /* (SILEX_DMA_PUSH_LEN) Register Mask  */


/* -------- SILEX_DMA_INT_EN : (SILEX Offset: 0x1C) (R/W 32)  -------- */
#define SILEX_DMA_INT_EN_RESETVALUE           _UINT32_(0x00)                                       /*  (SILEX_DMA_INT_EN)   Reset Value */

#define SILEX_DMA_INT_EN_INT_EN_Pos           _UINT32_(0)                                          /* (SILEX_DMA_INT_EN)  Position */
#define SILEX_DMA_INT_EN_INT_EN_Msk           (_UINT32_(0xFFFFFFFF) << SILEX_DMA_INT_EN_INT_EN_Pos) /* (SILEX_DMA_INT_EN)  Mask */
#define SILEX_DMA_INT_EN_INT_EN(value)        (SILEX_DMA_INT_EN_INT_EN_Msk & (_UINT32_(value) << SILEX_DMA_INT_EN_INT_EN_Pos)) /* Assignment of value for INT_EN in the SILEX_DMA_INT_EN register */
#define SILEX_DMA_INT_EN_Msk                  _UINT32_(0xFFFFFFFF)                                 /* (SILEX_DMA_INT_EN) Register Mask  */


/* -------- SILEX_DMA_INT_ENSET : (SILEX Offset: 0x20) ( /W 32)  -------- */
#define SILEX_DMA_INT_ENSET_RESETVALUE        _UINT32_(0x00)                                       /*  (SILEX_DMA_INT_ENSET)   Reset Value */

#define SILEX_DMA_INT_ENSET_INT_ENSET_Pos     _UINT32_(0)                                          /* (SILEX_DMA_INT_ENSET)  Position */
#define SILEX_DMA_INT_ENSET_INT_ENSET_Msk     (_UINT32_(0xFFFFFFFF) << SILEX_DMA_INT_ENSET_INT_ENSET_Pos) /* (SILEX_DMA_INT_ENSET)  Mask */
#define SILEX_DMA_INT_ENSET_INT_ENSET(value)  (SILEX_DMA_INT_ENSET_INT_ENSET_Msk & (_UINT32_(value) << SILEX_DMA_INT_ENSET_INT_ENSET_Pos)) /* Assignment of value for INT_ENSET in the SILEX_DMA_INT_ENSET register */
#define SILEX_DMA_INT_ENSET_Msk               _UINT32_(0xFFFFFFFF)                                 /* (SILEX_DMA_INT_ENSET) Register Mask  */


/* -------- SILEX_DMA_INT_ENCLR : (SILEX Offset: 0x24) ( /W 32)  -------- */
#define SILEX_DMA_INT_ENCLR_RESETVALUE        _UINT32_(0x00)                                       /*  (SILEX_DMA_INT_ENCLR)   Reset Value */

#define SILEX_DMA_INT_ENCLR_INT_ENCLR_Pos     _UINT32_(0)                                          /* (SILEX_DMA_INT_ENCLR)  Position */
#define SILEX_DMA_INT_ENCLR_INT_ENCLR_Msk     (_UINT32_(0xFFFFFFFF) << SILEX_DMA_INT_ENCLR_INT_ENCLR_Pos) /* (SILEX_DMA_INT_ENCLR)  Mask */
#define SILEX_DMA_INT_ENCLR_INT_ENCLR(value)  (SILEX_DMA_INT_ENCLR_INT_ENCLR_Msk & (_UINT32_(value) << SILEX_DMA_INT_ENCLR_INT_ENCLR_Pos)) /* Assignment of value for INT_ENCLR in the SILEX_DMA_INT_ENCLR register */
#define SILEX_DMA_INT_ENCLR_Msk               _UINT32_(0xFFFFFFFF)                                 /* (SILEX_DMA_INT_ENCLR) Register Mask  */


/* -------- SILEX_DMA_INT_STATRAW : (SILEX Offset: 0x28) ( R/ 32)  -------- */
#define SILEX_DMA_INT_STATRAW_RESETVALUE      _UINT32_(0x00)                                       /*  (SILEX_DMA_INT_STATRAW)   Reset Value */

#define SILEX_DMA_INT_STATRAW_INT_STATRAW_Pos _UINT32_(0)                                          /* (SILEX_DMA_INT_STATRAW)  Position */
#define SILEX_DMA_INT_STATRAW_INT_STATRAW_Msk (_UINT32_(0xFFFFFFFF) << SILEX_DMA_INT_STATRAW_INT_STATRAW_Pos) /* (SILEX_DMA_INT_STATRAW)  Mask */
#define SILEX_DMA_INT_STATRAW_INT_STATRAW(value) (SILEX_DMA_INT_STATRAW_INT_STATRAW_Msk & (_UINT32_(value) << SILEX_DMA_INT_STATRAW_INT_STATRAW_Pos)) /* Assignment of value for INT_STATRAW in the SILEX_DMA_INT_STATRAW register */
#define SILEX_DMA_INT_STATRAW_Msk             _UINT32_(0xFFFFFFFF)                                 /* (SILEX_DMA_INT_STATRAW) Register Mask  */


/* -------- SILEX_DMA_INT_STAT : (SILEX Offset: 0x2C) ( R/ 32)  -------- */
#define SILEX_DMA_INT_STAT_RESETVALUE         _UINT32_(0x00)                                       /*  (SILEX_DMA_INT_STAT)   Reset Value */

#define SILEX_DMA_INT_STAT_INT_STAT_Pos       _UINT32_(0)                                          /* (SILEX_DMA_INT_STAT)  Position */
#define SILEX_DMA_INT_STAT_INT_STAT_Msk       (_UINT32_(0xFFFFFFFF) << SILEX_DMA_INT_STAT_INT_STAT_Pos) /* (SILEX_DMA_INT_STAT)  Mask */
#define SILEX_DMA_INT_STAT_INT_STAT(value)    (SILEX_DMA_INT_STAT_INT_STAT_Msk & (_UINT32_(value) << SILEX_DMA_INT_STAT_INT_STAT_Pos)) /* Assignment of value for INT_STAT in the SILEX_DMA_INT_STAT register */
#define SILEX_DMA_INT_STAT_Msk                _UINT32_(0xFFFFFFFF)                                 /* (SILEX_DMA_INT_STAT) Register Mask  */


/* -------- SILEX_DMA_INT_STATCLR : (SILEX Offset: 0x30) ( /W 32)  -------- */
#define SILEX_DMA_INT_STATCLR_RESETVALUE      _UINT32_(0x00)                                       /*  (SILEX_DMA_INT_STATCLR)   Reset Value */

#define SILEX_DMA_INT_STATCLR_INT_STATCLR_Pos _UINT32_(0)                                          /* (SILEX_DMA_INT_STATCLR)  Position */
#define SILEX_DMA_INT_STATCLR_INT_STATCLR_Msk (_UINT32_(0xFFFFFFFF) << SILEX_DMA_INT_STATCLR_INT_STATCLR_Pos) /* (SILEX_DMA_INT_STATCLR)  Mask */
#define SILEX_DMA_INT_STATCLR_INT_STATCLR(value) (SILEX_DMA_INT_STATCLR_INT_STATCLR_Msk & (_UINT32_(value) << SILEX_DMA_INT_STATCLR_INT_STATCLR_Pos)) /* Assignment of value for INT_STATCLR in the SILEX_DMA_INT_STATCLR register */
#define SILEX_DMA_INT_STATCLR_Msk             _UINT32_(0xFFFFFFFF)                                 /* (SILEX_DMA_INT_STATCLR) Register Mask  */


/* -------- SILEX_DMA_CONFIG : (SILEX Offset: 0x34) (R/W 32)  -------- */
#define SILEX_DMA_CONFIG_RESETVALUE           _UINT32_(0x00)                                       /*  (SILEX_DMA_CONFIG)   Reset Value */

#define SILEX_DMA_CONFIG_FETCH_CTRL_INDIRECT_Pos _UINT32_(0)                                          /* (SILEX_DMA_CONFIG)  Position */
#define SILEX_DMA_CONFIG_FETCH_CTRL_INDIRECT_Msk (_UINT32_(0x1) << SILEX_DMA_CONFIG_FETCH_CTRL_INDIRECT_Pos) /* (SILEX_DMA_CONFIG)  Mask */
#define SILEX_DMA_CONFIG_FETCH_CTRL_INDIRECT(value) (SILEX_DMA_CONFIG_FETCH_CTRL_INDIRECT_Msk & (_UINT32_(value) << SILEX_DMA_CONFIG_FETCH_CTRL_INDIRECT_Pos)) /* Assignment of value for FETCH_CTRL_INDIRECT in the SILEX_DMA_CONFIG register */
#define SILEX_DMA_CONFIG_PUSH_CTRL_INDIRECT_Pos _UINT32_(1)                                          /* (SILEX_DMA_CONFIG)  Position */
#define SILEX_DMA_CONFIG_PUSH_CTRL_INDIRECT_Msk (_UINT32_(0x1) << SILEX_DMA_CONFIG_PUSH_CTRL_INDIRECT_Pos) /* (SILEX_DMA_CONFIG)  Mask */
#define SILEX_DMA_CONFIG_PUSH_CTRL_INDIRECT(value) (SILEX_DMA_CONFIG_PUSH_CTRL_INDIRECT_Msk & (_UINT32_(value) << SILEX_DMA_CONFIG_PUSH_CTRL_INDIRECT_Pos)) /* Assignment of value for PUSH_CTRL_INDIRECT in the SILEX_DMA_CONFIG register */
#define SILEX_DMA_CONFIG_FETCH_STOP_Pos       _UINT32_(2)                                          /* (SILEX_DMA_CONFIG)  Position */
#define SILEX_DMA_CONFIG_FETCH_STOP_Msk       (_UINT32_(0x1) << SILEX_DMA_CONFIG_FETCH_STOP_Pos)   /* (SILEX_DMA_CONFIG)  Mask */
#define SILEX_DMA_CONFIG_FETCH_STOP(value)    (SILEX_DMA_CONFIG_FETCH_STOP_Msk & (_UINT32_(value) << SILEX_DMA_CONFIG_FETCH_STOP_Pos)) /* Assignment of value for FETCH_STOP in the SILEX_DMA_CONFIG register */
#define SILEX_DMA_CONFIG_PUSH_STOP_Pos        _UINT32_(3)                                          /* (SILEX_DMA_CONFIG)  Position */
#define SILEX_DMA_CONFIG_PUSH_STOP_Msk        (_UINT32_(0x1) << SILEX_DMA_CONFIG_PUSH_STOP_Pos)    /* (SILEX_DMA_CONFIG)  Mask */
#define SILEX_DMA_CONFIG_PUSH_STOP(value)     (SILEX_DMA_CONFIG_PUSH_STOP_Msk & (_UINT32_(value) << SILEX_DMA_CONFIG_PUSH_STOP_Pos)) /* Assignment of value for PUSH_STOP in the SILEX_DMA_CONFIG register */
#define SILEX_DMA_CONFIG_SOFT_RST_Pos         _UINT32_(4)                                          /* (SILEX_DMA_CONFIG)  Position */
#define SILEX_DMA_CONFIG_SOFT_RST_Msk         (_UINT32_(0x1) << SILEX_DMA_CONFIG_SOFT_RST_Pos)     /* (SILEX_DMA_CONFIG)  Mask */
#define SILEX_DMA_CONFIG_SOFT_RST(value)      (SILEX_DMA_CONFIG_SOFT_RST_Msk & (_UINT32_(value) << SILEX_DMA_CONFIG_SOFT_RST_Pos)) /* Assignment of value for SOFT_RST in the SILEX_DMA_CONFIG register */
#define SILEX_DMA_CONFIG_Msk                  _UINT32_(0x0000001F)                                 /* (SILEX_DMA_CONFIG) Register Mask  */


/* -------- SILEX_DMA_START : (SILEX Offset: 0x38) ( /W 32)  -------- */
#define SILEX_DMA_START_RESETVALUE            _UINT32_(0x00)                                       /*  (SILEX_DMA_START)   Reset Value */

#define SILEX_DMA_START_START_FETCH_Pos       _UINT32_(0)                                          /* (SILEX_DMA_START)  Position */
#define SILEX_DMA_START_START_FETCH_Msk       (_UINT32_(0x1) << SILEX_DMA_START_START_FETCH_Pos)   /* (SILEX_DMA_START)  Mask */
#define SILEX_DMA_START_START_FETCH(value)    (SILEX_DMA_START_START_FETCH_Msk & (_UINT32_(value) << SILEX_DMA_START_START_FETCH_Pos)) /* Assignment of value for START_FETCH in the SILEX_DMA_START register */
#define SILEX_DMA_START_START_PUSH_Pos        _UINT32_(1)                                          /* (SILEX_DMA_START)  Position */
#define SILEX_DMA_START_START_PUSH_Msk        (_UINT32_(0x1) << SILEX_DMA_START_START_PUSH_Pos)    /* (SILEX_DMA_START)  Mask */
#define SILEX_DMA_START_START_PUSH(value)     (SILEX_DMA_START_START_PUSH_Msk & (_UINT32_(value) << SILEX_DMA_START_START_PUSH_Pos)) /* Assignment of value for START_PUSH in the SILEX_DMA_START register */
#define SILEX_DMA_START_Msk                   _UINT32_(0x00000003)                                 /* (SILEX_DMA_START) Register Mask  */


/* -------- SILEX_DMA_STATUS : (SILEX Offset: 0x3C) ( R/ 32)  -------- */
#define SILEX_DMA_STATUS_RESETVALUE           _UINT32_(0x00)                                       /*  (SILEX_DMA_STATUS)   Reset Value */

#define SILEX_DMA_STATUS_FETCH_BUSY_Pos       _UINT32_(0)                                          /* (SILEX_DMA_STATUS)  Position */
#define SILEX_DMA_STATUS_FETCH_BUSY_Msk       (_UINT32_(0x1) << SILEX_DMA_STATUS_FETCH_BUSY_Pos)   /* (SILEX_DMA_STATUS)  Mask */
#define SILEX_DMA_STATUS_FETCH_BUSY(value)    (SILEX_DMA_STATUS_FETCH_BUSY_Msk & (_UINT32_(value) << SILEX_DMA_STATUS_FETCH_BUSY_Pos)) /* Assignment of value for FETCH_BUSY in the SILEX_DMA_STATUS register */
#define SILEX_DMA_STATUS_PUSH_BUSY_Pos        _UINT32_(1)                                          /* (SILEX_DMA_STATUS)  Position */
#define SILEX_DMA_STATUS_PUSH_BUSY_Msk        (_UINT32_(0x1) << SILEX_DMA_STATUS_PUSH_BUSY_Pos)    /* (SILEX_DMA_STATUS)  Mask */
#define SILEX_DMA_STATUS_PUSH_BUSY(value)     (SILEX_DMA_STATUS_PUSH_BUSY_Msk & (_UINT32_(value) << SILEX_DMA_STATUS_PUSH_BUSY_Pos)) /* Assignment of value for PUSH_BUSY in the SILEX_DMA_STATUS register */
#define SILEX_DMA_STATUS_FETCH_NOT_EMPTY_Pos  _UINT32_(4)                                          /* (SILEX_DMA_STATUS)  Position */
#define SILEX_DMA_STATUS_FETCH_NOT_EMPTY_Msk  (_UINT32_(0x1) << SILEX_DMA_STATUS_FETCH_NOT_EMPTY_Pos) /* (SILEX_DMA_STATUS)  Mask */
#define SILEX_DMA_STATUS_FETCH_NOT_EMPTY(value) (SILEX_DMA_STATUS_FETCH_NOT_EMPTY_Msk & (_UINT32_(value) << SILEX_DMA_STATUS_FETCH_NOT_EMPTY_Pos)) /* Assignment of value for FETCH_NOT_EMPTY in the SILEX_DMA_STATUS register */
#define SILEX_DMA_STATUS_PUSH_WAITINGFIFO_Pos _UINT32_(5)                                          /* (SILEX_DMA_STATUS)  Position */
#define SILEX_DMA_STATUS_PUSH_WAITINGFIFO_Msk (_UINT32_(0x1) << SILEX_DMA_STATUS_PUSH_WAITINGFIFO_Pos) /* (SILEX_DMA_STATUS)  Mask */
#define SILEX_DMA_STATUS_PUSH_WAITINGFIFO(value) (SILEX_DMA_STATUS_PUSH_WAITINGFIFO_Msk & (_UINT32_(value) << SILEX_DMA_STATUS_PUSH_WAITINGFIFO_Pos)) /* Assignment of value for PUSH_WAITINGFIFO in the SILEX_DMA_STATUS register */
#define SILEX_DMA_STATUS_SOFT_RST_BUSY_Pos    _UINT32_(6)                                          /* (SILEX_DMA_STATUS)  Position */
#define SILEX_DMA_STATUS_SOFT_RST_BUSY_Msk    (_UINT32_(0x1) << SILEX_DMA_STATUS_SOFT_RST_BUSY_Pos) /* (SILEX_DMA_STATUS)  Mask */
#define SILEX_DMA_STATUS_SOFT_RST_BUSY(value) (SILEX_DMA_STATUS_SOFT_RST_BUSY_Msk & (_UINT32_(value) << SILEX_DMA_STATUS_SOFT_RST_BUSY_Pos)) /* Assignment of value for SOFT_RST_BUSY in the SILEX_DMA_STATUS register */
#define SILEX_DMA_STATUS_PUSH_NBDATA_Pos      _UINT32_(16)                                         /* (SILEX_DMA_STATUS)  Position */
#define SILEX_DMA_STATUS_PUSH_NBDATA_Msk      (_UINT32_(0xFFFF) << SILEX_DMA_STATUS_PUSH_NBDATA_Pos) /* (SILEX_DMA_STATUS)  Mask */
#define SILEX_DMA_STATUS_PUSH_NBDATA(value)   (SILEX_DMA_STATUS_PUSH_NBDATA_Msk & (_UINT32_(value) << SILEX_DMA_STATUS_PUSH_NBDATA_Pos)) /* Assignment of value for PUSH_NBDATA in the SILEX_DMA_STATUS register */
#define SILEX_DMA_STATUS_Msk                  _UINT32_(0xFFFF0073)                                 /* (SILEX_DMA_STATUS) Register Mask  */


/* -------- SILEX_HWCONF_INCL_IPS_HW_CFG : (SILEX Offset: 0x400) ( R/ 32)  -------- */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_RESETVALUE _UINT32_(0x00)                                       /*  (SILEX_HWCONF_INCL_IPS_HW_CFG)   Reset Value */

#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA411_AES_INCLUDED_Pos _UINT32_(0)                                          /* (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeAES value. BA411E-AES IP included if set Position */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA411_AES_INCLUDED_Msk (_UINT32_(0x1) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA411_AES_INCLUDED_Pos) /* (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeAES value. BA411E-AES IP included if set Mask */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA411_AES_INCLUDED(value) (SILEX_HWCONF_INCL_IPS_HW_CFG_BA411_AES_INCLUDED_Msk & (_UINT32_(value) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA411_AES_INCLUDED_Pos)) /* Assignment of value for BA411_AES_INCLUDED in the SILEX_HWCONF_INCL_IPS_HW_CFG register */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA415_HP_AES_GCM_INCLUDED_Pos _UINT32_(1)                                          /* (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeAESGCM value. BA415-HP-AES-GCM IP included if set Position */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA415_HP_AES_GCM_INCLUDED_Msk (_UINT32_(0x1) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA415_HP_AES_GCM_INCLUDED_Pos) /* (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeAESGCM value. BA415-HP-AES-GCM IP included if set Mask */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA415_HP_AES_GCM_INCLUDED(value) (SILEX_HWCONF_INCL_IPS_HW_CFG_BA415_HP_AES_GCM_INCLUDED_Msk & (_UINT32_(value) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA415_HP_AES_GCM_INCLUDED_Pos)) /* Assignment of value for BA415_HP_AES_GCM_INCLUDED in the SILEX_HWCONF_INCL_IPS_HW_CFG register */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA416_HP_AES_XTS_INCLUDED_Pos _UINT32_(2)                                          /* (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeAESXTS value. BA416-HP-AES-XTS IP included if set Position */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA416_HP_AES_XTS_INCLUDED_Msk (_UINT32_(0x1) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA416_HP_AES_XTS_INCLUDED_Pos) /* (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeAESXTS value. BA416-HP-AES-XTS IP included if set Mask */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA416_HP_AES_XTS_INCLUDED(value) (SILEX_HWCONF_INCL_IPS_HW_CFG_BA416_HP_AES_XTS_INCLUDED_Msk & (_UINT32_(value) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA416_HP_AES_XTS_INCLUDED_Pos)) /* Assignment of value for BA416_HP_AES_XTS_INCLUDED in the SILEX_HWCONF_INCL_IPS_HW_CFG register */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA412_DES_INCLUDED_Pos _UINT32_(3)                                          /* (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeDES value. BA412-3DES IP included if set Position */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA412_DES_INCLUDED_Msk (_UINT32_(0x1) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA412_DES_INCLUDED_Pos) /* (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeDES value. BA412-3DES IP included if set Mask */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA412_DES_INCLUDED(value) (SILEX_HWCONF_INCL_IPS_HW_CFG_BA412_DES_INCLUDED_Msk & (_UINT32_(value) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA412_DES_INCLUDED_Pos)) /* Assignment of value for BA412_DES_INCLUDED in the SILEX_HWCONF_INCL_IPS_HW_CFG register */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA413_HASH_INCLUDED_Pos _UINT32_(4)                                          /* (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeHASH value. BA413-HASH IP included if set Position */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA413_HASH_INCLUDED_Msk (_UINT32_(0x1) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA413_HASH_INCLUDED_Pos) /* (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeHASH value. BA413-HASH IP included if set Mask */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA413_HASH_INCLUDED(value) (SILEX_HWCONF_INCL_IPS_HW_CFG_BA413_HASH_INCLUDED_Msk & (_UINT32_(value) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA413_HASH_INCLUDED_Pos)) /* Assignment of value for BA413_HASH_INCLUDED in the SILEX_HWCONF_INCL_IPS_HW_CFG register */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA417_CHACHAPOLY_INCLUDED_Pos _UINT32_(5)                                          /* (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeChachaPoly value. BA417-ChaChaPoly IP included if set Position */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA417_CHACHAPOLY_INCLUDED_Msk (_UINT32_(0x1) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA417_CHACHAPOLY_INCLUDED_Pos) /* (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeChachaPoly value. BA417-ChaChaPoly IP included if set Mask */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA417_CHACHAPOLY_INCLUDED(value) (SILEX_HWCONF_INCL_IPS_HW_CFG_BA417_CHACHAPOLY_INCLUDED_Msk & (_UINT32_(value) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA417_CHACHAPOLY_INCLUDED_Pos)) /* Assignment of value for BA417_CHACHAPOLY_INCLUDED in the SILEX_HWCONF_INCL_IPS_HW_CFG register */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA418_SHA3_INCLUDED_Pos _UINT32_(6)                                          /* (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeSHA3  value. BA418-SHA3 IP included if set Position */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA418_SHA3_INCLUDED_Msk (_UINT32_(0x1) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA418_SHA3_INCLUDED_Pos) /* (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeSHA3  value. BA418-SHA3 IP included if set Mask */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA418_SHA3_INCLUDED(value) (SILEX_HWCONF_INCL_IPS_HW_CFG_BA418_SHA3_INCLUDED_Msk & (_UINT32_(value) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA418_SHA3_INCLUDED_Pos)) /* Assignment of value for BA418_SHA3_INCLUDED in the SILEX_HWCONF_INCL_IPS_HW_CFG register */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA421_ZUC_INCLUDED_Pos _UINT32_(7)                                          /* (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeZUC  value. BA421-ZUC IP included if set Position */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA421_ZUC_INCLUDED_Msk (_UINT32_(0x1) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA421_ZUC_INCLUDED_Pos) /* (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeZUC  value. BA421-ZUC IP included if set Mask */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA421_ZUC_INCLUDED(value) (SILEX_HWCONF_INCL_IPS_HW_CFG_BA421_ZUC_INCLUDED_Msk & (_UINT32_(value) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA421_ZUC_INCLUDED_Pos)) /* Assignment of value for BA421_ZUC_INCLUDED in the SILEX_HWCONF_INCL_IPS_HW_CFG register */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA419_SM4_INCLUDED_Pos _UINT32_(8)                                          /* (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeSM4  value. BA419-SM4 IP included if set Position */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA419_SM4_INCLUDED_Msk (_UINT32_(0x1) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA419_SM4_INCLUDED_Pos) /* (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeSM4  value. BA419-SM4 IP included if set Mask */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA419_SM4_INCLUDED(value) (SILEX_HWCONF_INCL_IPS_HW_CFG_BA419_SM4_INCLUDED_Msk & (_UINT32_(value) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA419_SM4_INCLUDED_Pos)) /* Assignment of value for BA419_SM4_INCLUDED in the SILEX_HWCONF_INCL_IPS_HW_CFG register */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA414EP_PKE_INCLUDED_Pos _UINT32_(9)                                          /* (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludePKE  value. BA414EP-PKE IP included if set Position */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA414EP_PKE_INCLUDED_Msk (_UINT32_(0x1) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA414EP_PKE_INCLUDED_Pos) /* (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludePKE  value. BA414EP-PKE IP included if set Mask */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA414EP_PKE_INCLUDED(value) (SILEX_HWCONF_INCL_IPS_HW_CFG_BA414EP_PKE_INCLUDED_Msk & (_UINT32_(value) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA414EP_PKE_INCLUDED_Pos)) /* Assignment of value for BA414EP_PKE_INCLUDED in the SILEX_HWCONF_INCL_IPS_HW_CFG register */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA431_NDRNG_INCLUDED_Pos _UINT32_(10)                                         /* (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeNDRNG  value. BA431-NDRNG IP included if set Position */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA431_NDRNG_INCLUDED_Msk (_UINT32_(0x1) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA431_NDRNG_INCLUDED_Pos) /* (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeNDRNG  value. BA431-NDRNG IP included if set Mask */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA431_NDRNG_INCLUDED(value) (SILEX_HWCONF_INCL_IPS_HW_CFG_BA431_NDRNG_INCLUDED_Msk & (_UINT32_(value) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA431_NDRNG_INCLUDED_Pos)) /* Assignment of value for BA431_NDRNG_INCLUDED in the SILEX_HWCONF_INCL_IPS_HW_CFG register */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA420_HP_CHACHAPOLY_INCLUDED_Pos _UINT32_(11)                                         /* (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeHPChachaPoly  value. BA420-HP-ChaChaPoly IP included if set Position */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA420_HP_CHACHAPOLY_INCLUDED_Msk (_UINT32_(0x1) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA420_HP_CHACHAPOLY_INCLUDED_Pos) /* (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeHPChachaPoly  value. BA420-HP-ChaChaPoly IP included if set Mask */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA420_HP_CHACHAPOLY_INCLUDED(value) (SILEX_HWCONF_INCL_IPS_HW_CFG_BA420_HP_CHACHAPOLY_INCLUDED_Msk & (_UINT32_(value) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA420_HP_CHACHAPOLY_INCLUDED_Pos)) /* Assignment of value for BA420_HP_CHACHAPOLY_INCLUDED in the SILEX_HWCONF_INCL_IPS_HW_CFG register */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA423_SNOW3G_INCLUDED_Pos _UINT32_(12)                                         /* (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeSnow3G  value. BA423-Snow3G IP included if set Position */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA423_SNOW3G_INCLUDED_Msk (_UINT32_(0x1) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA423_SNOW3G_INCLUDED_Pos) /* (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeSnow3G  value. BA423-Snow3G IP included if set Mask */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA423_SNOW3G_INCLUDED(value) (SILEX_HWCONF_INCL_IPS_HW_CFG_BA423_SNOW3G_INCLUDED_Msk & (_UINT32_(value) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA423_SNOW3G_INCLUDED_Pos)) /* Assignment of value for BA423_SNOW3G_INCLUDED in the SILEX_HWCONF_INCL_IPS_HW_CFG register */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA422_KASUMI_INCLUDED_Pos _UINT32_(13)                                         /* (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeKasumi  value. BA422-Kasumi IP included if set Position */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA422_KASUMI_INCLUDED_Msk (_UINT32_(0x1) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA422_KASUMI_INCLUDED_Pos) /* (SILEX_HWCONF_INCL_IPS_HW_CFG) Generic g_IncludeKasumi  value. BA422-Kasumi IP included if set Mask */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_BA422_KASUMI_INCLUDED(value) (SILEX_HWCONF_INCL_IPS_HW_CFG_BA422_KASUMI_INCLUDED_Msk & (_UINT32_(value) << SILEX_HWCONF_INCL_IPS_HW_CFG_BA422_KASUMI_INCLUDED_Pos)) /* Assignment of value for BA422_KASUMI_INCLUDED in the SILEX_HWCONF_INCL_IPS_HW_CFG register */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_Msk      _UINT32_(0x00003FFF)                                 /* (SILEX_HWCONF_INCL_IPS_HW_CFG) Register Mask  */


/* -------- SILEX_HWCONF_BA411E_AES_HW_CFG_1 : (SILEX Offset: 0x404) ( R/ 32)  -------- */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_RESETVALUE _UINT32_(0x00)                                       /*  (SILEX_HWCONF_BA411E_AES_HW_CFG_1)   Reset Value */

#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MODE_Pos _UINT32_(0)                                          /* (SILEX_HWCONF_BA411E_AES_HW_CFG_1) Generic g_AesModesPoss value. BA411E-AES engine configuration. Position */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MODE_Msk (_UINT32_(0x1FF) << SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MODE_Pos) /* (SILEX_HWCONF_BA411E_AES_HW_CFG_1) Generic g_AesModesPoss value. BA411E-AES engine configuration. Mask */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MODE(value) (SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MODE_Msk & (_UINT32_(value) << SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MODE_Pos)) /* Assignment of value for BA411E_AES_HW_CFG_MODE in the SILEX_HWCONF_BA411E_AES_HW_CFG_1 register */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_CS_Pos _UINT32_(16)                                         /* (SILEX_HWCONF_BA411E_AES_HW_CFG_1) Generic g_CS value. BA411E-AES engine configuration. Position */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_CS_Msk (_UINT32_(0x1) << SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_CS_Pos) /* (SILEX_HWCONF_BA411E_AES_HW_CFG_1) Generic g_CS value. BA411E-AES engine configuration. Mask */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_CS(value) (SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_CS_Msk & (_UINT32_(value) << SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_CS_Pos)) /* Assignment of value for BA411E_AES_HW_CFG_CS in the SILEX_HWCONF_BA411E_AES_HW_CFG_1 register */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MASKING_Pos _UINT32_(17)                                         /* (SILEX_HWCONF_BA411E_AES_HW_CFG_1) Generic g_UseMasking value. BA411E-AES engine configuration. Position */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MASKING_Msk (_UINT32_(0x1) << SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MASKING_Pos) /* (SILEX_HWCONF_BA411E_AES_HW_CFG_1) Generic g_UseMasking value. BA411E-AES engine configuration. Mask */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MASKING(value) (SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MASKING_Msk & (_UINT32_(value) << SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_MASKING_Pos)) /* Assignment of value for BA411E_AES_HW_CFG_MASKING in the SILEX_HWCONF_BA411E_AES_HW_CFG_1 register */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_KEYSIZE_Pos _UINT32_(24)                                         /* (SILEX_HWCONF_BA411E_AES_HW_CFG_1) Generic g_Keysize value. BA411E-AES engine configuration. Position */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_KEYSIZE_Msk (_UINT32_(0x7) << SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_KEYSIZE_Pos) /* (SILEX_HWCONF_BA411E_AES_HW_CFG_1) Generic g_Keysize value. BA411E-AES engine configuration. Mask */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_KEYSIZE(value) (SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_KEYSIZE_Msk & (_UINT32_(value) << SILEX_HWCONF_BA411E_AES_HW_CFG_1_BA411E_AES_HW_CFG_KEYSIZE_Pos)) /* Assignment of value for BA411E_AES_HW_CFG_KEYSIZE in the SILEX_HWCONF_BA411E_AES_HW_CFG_1 register */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_Msk  _UINT32_(0x070301FF)                                 /* (SILEX_HWCONF_BA411E_AES_HW_CFG_1) Register Mask  */


/* -------- SILEX_HWCONF_BA411E_AES_HW_CFG_2 : (SILEX Offset: 0x408) ( R/ 32) Generic g_CtrSize value. BA411E-AES engine configuration. -------- */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_2_RESETVALUE _UINT32_(0x00)                                       /*  (SILEX_HWCONF_BA411E_AES_HW_CFG_2) Generic g_CtrSize value. BA411E-AES engine configuration.  Reset Value */

#define SILEX_HWCONF_BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2_Pos _UINT32_(0)                                          /* (SILEX_HWCONF_BA411E_AES_HW_CFG_2) Generic g_CtrSize value. BA411E-AES engine configuration. Position */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2_Msk (_UINT32_(0xFFFF) << SILEX_HWCONF_BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2_Pos) /* (SILEX_HWCONF_BA411E_AES_HW_CFG_2) Generic g_CtrSize value. BA411E-AES engine configuration. Mask */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2(value) (SILEX_HWCONF_BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2_Msk & (_UINT32_(value) << SILEX_HWCONF_BA411E_AES_HW_CFG_2_BA411E_AES_HW_CFG_2_Pos)) /* Assignment of value for BA411E_AES_HW_CFG_2 in the SILEX_HWCONF_BA411E_AES_HW_CFG_2 register */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_2_Msk  _UINT32_(0x0000FFFF)                                 /* (SILEX_HWCONF_BA411E_AES_HW_CFG_2) Register Mask  */


/* -------- SILEX_HWCONF_BA413_HASH_HW_CFG : (SILEX Offset: 0x40C) ( R/ 32)  -------- */
#define SILEX_HWCONF_BA413_HASH_HW_CFG_RESETVALUE _UINT32_(0x00)                                       /*  (SILEX_HWCONF_BA413_HASH_HW_CFG)   Reset Value */

#define SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_MASK_Pos _UINT32_(0)                                          /* (SILEX_HWCONF_BA413_HASH_HW_CFG) Generic g_HashMaskFunc value. BA413-Hash engine configuration. Position */
#define SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_MASK_Msk (_UINT32_(0x7F) << SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_MASK_Pos) /* (SILEX_HWCONF_BA413_HASH_HW_CFG) Generic g_HashMaskFunc value. BA413-Hash engine configuration. Mask */
#define SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_MASK(value) (SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_MASK_Msk & (_UINT32_(value) << SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_MASK_Pos)) /* Assignment of value for BA413_HASH_HW_CFG_MASK in the SILEX_HWCONF_BA413_HASH_HW_CFG register */
#define SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_PASSING_Pos _UINT32_(16)                                         /* (SILEX_HWCONF_BA413_HASH_HW_CFG) Generic g_HashPadding value. BA413-Hash engine configuration. Position */
#define SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_PASSING_Msk (_UINT32_(0x1) << SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_PASSING_Pos) /* (SILEX_HWCONF_BA413_HASH_HW_CFG) Generic g_HashPadding value. BA413-Hash engine configuration. Mask */
#define SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_PASSING(value) (SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_PASSING_Msk & (_UINT32_(value) << SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_PASSING_Pos)) /* Assignment of value for BA413_HASH_HW_CFG_PASSING in the SILEX_HWCONF_BA413_HASH_HW_CFG register */
#define SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_HMAC_Pos _UINT32_(17)                                         /* (SILEX_HWCONF_BA413_HASH_HW_CFG) Generic g_HMAC_enabled value. BA413-Hash engine configuration. Position */
#define SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_HMAC_Msk (_UINT32_(0x1) << SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_HMAC_Pos) /* (SILEX_HWCONF_BA413_HASH_HW_CFG) Generic g_HMAC_enabled value. BA413-Hash engine configuration. Mask */
#define SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_HMAC(value) (SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_HMAC_Msk & (_UINT32_(value) << SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_HMAC_Pos)) /* Assignment of value for BA413_HASH_HW_CFG_HMAC in the SILEX_HWCONF_BA413_HASH_HW_CFG register */
#define SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_VERIFYDIGEST_Pos _UINT32_(18)                                         /* (SILEX_HWCONF_BA413_HASH_HW_CFG) Generic g_HashVerifyDigest value. BA413-Hash engine configuration. Position */
#define SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_VERIFYDIGEST_Msk (_UINT32_(0x1) << SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_VERIFYDIGEST_Pos) /* (SILEX_HWCONF_BA413_HASH_HW_CFG) Generic g_HashVerifyDigest value. BA413-Hash engine configuration. Mask */
#define SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_VERIFYDIGEST(value) (SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_VERIFYDIGEST_Msk & (_UINT32_(value) << SILEX_HWCONF_BA413_HASH_HW_CFG_BA413_HASH_HW_CFG_VERIFYDIGEST_Pos)) /* Assignment of value for BA413_HASH_HW_CFG_VERIFYDIGEST in the SILEX_HWCONF_BA413_HASH_HW_CFG register */
#define SILEX_HWCONF_BA413_HASH_HW_CFG_Msk    _UINT32_(0x0007007F)                                 /* (SILEX_HWCONF_BA413_HASH_HW_CFG) Register Mask  */


/* -------- SILEX_HWCONF_BA418_SHA3_HW_CFG : (SILEX Offset: 0x410) ( R/ 32) Generic g_Sha3CtxtEn value. BA418-SHA3 configuration. -------- */
#define SILEX_HWCONF_BA418_SHA3_HW_CFG_RESETVALUE _UINT32_(0x00)                                       /*  (SILEX_HWCONF_BA418_SHA3_HW_CFG) Generic g_Sha3CtxtEn value. BA418-SHA3 configuration.  Reset Value */

#define SILEX_HWCONF_BA418_SHA3_HW_CFG_BA418_SHA3_HW_CFG_Pos _UINT32_(0)                                          /* (SILEX_HWCONF_BA418_SHA3_HW_CFG) Generic g_Sha3CtxtEn value. BA418-SHA3 configuration. Position */
#define SILEX_HWCONF_BA418_SHA3_HW_CFG_BA418_SHA3_HW_CFG_Msk (_UINT32_(0x1) << SILEX_HWCONF_BA418_SHA3_HW_CFG_BA418_SHA3_HW_CFG_Pos) /* (SILEX_HWCONF_BA418_SHA3_HW_CFG) Generic g_Sha3CtxtEn value. BA418-SHA3 configuration. Mask */
#define SILEX_HWCONF_BA418_SHA3_HW_CFG_BA418_SHA3_HW_CFG(value) (SILEX_HWCONF_BA418_SHA3_HW_CFG_BA418_SHA3_HW_CFG_Msk & (_UINT32_(value) << SILEX_HWCONF_BA418_SHA3_HW_CFG_BA418_SHA3_HW_CFG_Pos)) /* Assignment of value for BA418_SHA3_HW_CFG in the SILEX_HWCONF_BA418_SHA3_HW_CFG register */
#define SILEX_HWCONF_BA418_SHA3_HW_CFG_Msk    _UINT32_(0x00000001)                                 /* (SILEX_HWCONF_BA418_SHA3_HW_CFG) Register Mask  */


/* -------- SILEX_HWCONF_BA419_SM4_HW_CFG : (SILEX Offset: 0x414) ( R/ 32) Generic g_SM4ModesPoss value. BA419-SM4 engine configuration. -------- */
#define SILEX_HWCONF_BA419_SM4_HW_CFG_RESETVALUE _UINT32_(0x00)                                       /*  (SILEX_HWCONF_BA419_SM4_HW_CFG) Generic g_SM4ModesPoss value. BA419-SM4 engine configuration.  Reset Value */

#define SILEX_HWCONF_BA419_SM4_HW_CFG_BA419_SM4_HW_CFG_Pos _UINT32_(0)                                          /* (SILEX_HWCONF_BA419_SM4_HW_CFG) Generic g_SM4ModesPoss value. BA419-SM4 engine configuration. Position */
#define SILEX_HWCONF_BA419_SM4_HW_CFG_BA419_SM4_HW_CFG_Msk (_UINT32_(0x7F) << SILEX_HWCONF_BA419_SM4_HW_CFG_BA419_SM4_HW_CFG_Pos) /* (SILEX_HWCONF_BA419_SM4_HW_CFG) Generic g_SM4ModesPoss value. BA419-SM4 engine configuration. Mask */
#define SILEX_HWCONF_BA419_SM4_HW_CFG_BA419_SM4_HW_CFG(value) (SILEX_HWCONF_BA419_SM4_HW_CFG_BA419_SM4_HW_CFG_Msk & (_UINT32_(value) << SILEX_HWCONF_BA419_SM4_HW_CFG_BA419_SM4_HW_CFG_Pos)) /* Assignment of value for BA419_SM4_HW_CFG in the SILEX_HWCONF_BA419_SM4_HW_CFG register */
#define SILEX_HWCONF_BA419_SM4_HW_CFG_Msk     _UINT32_(0x0000007F)                                 /* (SILEX_HWCONF_BA419_SM4_HW_CFG) Register Mask  */


/* -------- SILEX_HWCONF_BA424_ARIA_HW_CFG : (SILEX Offset: 0x418) ( R/ 32) Generic g_aria_modePoss value. BA424-Aria engine configuration. -------- */
#define SILEX_HWCONF_BA424_ARIA_HW_CFG_RESETVALUE _UINT32_(0x00)                                       /*  (SILEX_HWCONF_BA424_ARIA_HW_CFG) Generic g_aria_modePoss value. BA424-Aria engine configuration.  Reset Value */

#define SILEX_HWCONF_BA424_ARIA_HW_CFG_BA424_ARIA_HW_CFG_Pos _UINT32_(0)                                          /* (SILEX_HWCONF_BA424_ARIA_HW_CFG) Generic g_aria_modePoss value. BA424-Aria engine configuration. Position */
#define SILEX_HWCONF_BA424_ARIA_HW_CFG_BA424_ARIA_HW_CFG_Msk (_UINT32_(0x1FF) << SILEX_HWCONF_BA424_ARIA_HW_CFG_BA424_ARIA_HW_CFG_Pos) /* (SILEX_HWCONF_BA424_ARIA_HW_CFG) Generic g_aria_modePoss value. BA424-Aria engine configuration. Mask */
#define SILEX_HWCONF_BA424_ARIA_HW_CFG_BA424_ARIA_HW_CFG(value) (SILEX_HWCONF_BA424_ARIA_HW_CFG_BA424_ARIA_HW_CFG_Msk & (_UINT32_(value) << SILEX_HWCONF_BA424_ARIA_HW_CFG_BA424_ARIA_HW_CFG_Pos)) /* Assignment of value for BA424_ARIA_HW_CFG in the SILEX_HWCONF_BA424_ARIA_HW_CFG register */
#define SILEX_HWCONF_BA424_ARIA_HW_CFG_Msk    _UINT32_(0x000001FF)                                 /* (SILEX_HWCONF_BA424_ARIA_HW_CFG) Register Mask  */


/* -------- SILEX_RNG_CONTROL_CONTROL : (SILEX Offset: 0x1000) (R/W 32) Control register -------- */
#define SILEX_RNG_CONTROL_CONTROL_RESETVALUE  _UINT32_(0x00)                                       /*  (SILEX_RNG_CONTROL_CONTROL) Control register  Reset Value */

#define SILEX_RNG_CONTROL_CONTROL_ENABLE_Pos  _UINT32_(0)                                          /* (SILEX_RNG_CONTROL_CONTROL) Enable the NDRNG. Position */
#define SILEX_RNG_CONTROL_CONTROL_ENABLE_Msk  (_UINT32_(0x1) << SILEX_RNG_CONTROL_CONTROL_ENABLE_Pos) /* (SILEX_RNG_CONTROL_CONTROL) Enable the NDRNG. Mask */
#define SILEX_RNG_CONTROL_CONTROL_ENABLE(value) (SILEX_RNG_CONTROL_CONTROL_ENABLE_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_CONTROL_ENABLE_Pos)) /* Assignment of value for ENABLE in the SILEX_RNG_CONTROL_CONTROL register */
#define SILEX_RNG_CONTROL_CONTROL_LFSREN_Pos  _UINT32_(1)                                          /* (SILEX_RNG_CONTROL_CONTROL) Select between the NDRNG with asynchronous free running oscillators (when '0') and the Pseudo-Random generator with synchronous oscillators for simulation purpose (when '1'). Position */
#define SILEX_RNG_CONTROL_CONTROL_LFSREN_Msk  (_UINT32_(0x1) << SILEX_RNG_CONTROL_CONTROL_LFSREN_Pos) /* (SILEX_RNG_CONTROL_CONTROL) Select between the NDRNG with asynchronous free running oscillators (when '0') and the Pseudo-Random generator with synchronous oscillators for simulation purpose (when '1'). Mask */
#define SILEX_RNG_CONTROL_CONTROL_LFSREN(value) (SILEX_RNG_CONTROL_CONTROL_LFSREN_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_CONTROL_LFSREN_Pos)) /* Assignment of value for LFSREN in the SILEX_RNG_CONTROL_CONTROL register */
#define SILEX_RNG_CONTROL_CONTROL_TESTEN_Pos  _UINT32_(2)                                          /* (SILEX_RNG_CONTROL_CONTROL) Select input for conditioning function and continuous tests: 0: Noise source (normal mode), 1: Test data register (test mode). Position */
#define SILEX_RNG_CONTROL_CONTROL_TESTEN_Msk  (_UINT32_(0x1) << SILEX_RNG_CONTROL_CONTROL_TESTEN_Pos) /* (SILEX_RNG_CONTROL_CONTROL) Select input for conditioning function and continuous tests: 0: Noise source (normal mode), 1: Test data register (test mode). Mask */
#define SILEX_RNG_CONTROL_CONTROL_TESTEN(value) (SILEX_RNG_CONTROL_CONTROL_TESTEN_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_CONTROL_TESTEN_Pos)) /* Assignment of value for TESTEN in the SILEX_RNG_CONTROL_CONTROL register */
#define SILEX_RNG_CONTROL_CONTROL_CONDBYPASS_Pos _UINT32_(3)                                          /* (SILEX_RNG_CONTROL_CONTROL) 0: the conditioning function is used (normal mode), 1: the conditioning function is bypassed (to observe entropy source directly). Position */
#define SILEX_RNG_CONTROL_CONTROL_CONDBYPASS_Msk (_UINT32_(0x1) << SILEX_RNG_CONTROL_CONTROL_CONDBYPASS_Pos) /* (SILEX_RNG_CONTROL_CONTROL) 0: the conditioning function is used (normal mode), 1: the conditioning function is bypassed (to observe entropy source directly). Mask */
#define SILEX_RNG_CONTROL_CONTROL_CONDBYPASS(value) (SILEX_RNG_CONTROL_CONTROL_CONDBYPASS_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_CONTROL_CONDBYPASS_Pos)) /* Assignment of value for CONDBYPASS in the SILEX_RNG_CONTROL_CONTROL register */
#define SILEX_RNG_CONTROL_CONTROL_INTENREP_Pos _UINT32_(4)                                          /* (SILEX_RNG_CONTROL_CONTROL) Interrupt enable for Repetition Count Test failure. Position */
#define SILEX_RNG_CONTROL_CONTROL_INTENREP_Msk (_UINT32_(0x1) << SILEX_RNG_CONTROL_CONTROL_INTENREP_Pos) /* (SILEX_RNG_CONTROL_CONTROL) Interrupt enable for Repetition Count Test failure. Mask */
#define SILEX_RNG_CONTROL_CONTROL_INTENREP(value) (SILEX_RNG_CONTROL_CONTROL_INTENREP_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_CONTROL_INTENREP_Pos)) /* Assignment of value for INTENREP in the SILEX_RNG_CONTROL_CONTROL register */
#define SILEX_RNG_CONTROL_CONTROL_INTENPROP_Pos _UINT32_(5)                                          /* (SILEX_RNG_CONTROL_CONTROL) Interrupt enable for Adaptive Proportion Test failure (1024-sample window). Position */
#define SILEX_RNG_CONTROL_CONTROL_INTENPROP_Msk (_UINT32_(0x1) << SILEX_RNG_CONTROL_CONTROL_INTENPROP_Pos) /* (SILEX_RNG_CONTROL_CONTROL) Interrupt enable for Adaptive Proportion Test failure (1024-sample window). Mask */
#define SILEX_RNG_CONTROL_CONTROL_INTENPROP(value) (SILEX_RNG_CONTROL_CONTROL_INTENPROP_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_CONTROL_INTENPROP_Pos)) /* Assignment of value for INTENPROP in the SILEX_RNG_CONTROL_CONTROL register */
#define SILEX_RNG_CONTROL_CONTROL_INTENFULL_Pos _UINT32_(7)                                          /* (SILEX_RNG_CONTROL_CONTROL) Interrupt enable for FIFO full. Position */
#define SILEX_RNG_CONTROL_CONTROL_INTENFULL_Msk (_UINT32_(0x1) << SILEX_RNG_CONTROL_CONTROL_INTENFULL_Pos) /* (SILEX_RNG_CONTROL_CONTROL) Interrupt enable for FIFO full. Mask */
#define SILEX_RNG_CONTROL_CONTROL_INTENFULL(value) (SILEX_RNG_CONTROL_CONTROL_INTENFULL_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_CONTROL_INTENFULL_Pos)) /* Assignment of value for INTENFULL in the SILEX_RNG_CONTROL_CONTROL register */
#define SILEX_RNG_CONTROL_CONTROL_SOFTRST_Pos _UINT32_(8)                                          /* (SILEX_RNG_CONTROL_CONTROL) Software reset: 0: Normal mode, 1: The continuous test, the conditioning function and the FIFO are reset. This bit is not cleared automatically. Position */
#define SILEX_RNG_CONTROL_CONTROL_SOFTRST_Msk (_UINT32_(0x1) << SILEX_RNG_CONTROL_CONTROL_SOFTRST_Pos) /* (SILEX_RNG_CONTROL_CONTROL) Software reset: 0: Normal mode, 1: The continuous test, the conditioning function and the FIFO are reset. This bit is not cleared automatically. Mask */
#define SILEX_RNG_CONTROL_CONTROL_SOFTRST(value) (SILEX_RNG_CONTROL_CONTROL_SOFTRST_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_CONTROL_SOFTRST_Pos)) /* Assignment of value for SOFTRST in the SILEX_RNG_CONTROL_CONTROL register */
#define SILEX_RNG_CONTROL_CONTROL_INTENPRE_Pos _UINT32_(9)                                          /* (SILEX_RNG_CONTROL_CONTROL) Interrupt enable for AIS31 preliminary noise alarm. Position */
#define SILEX_RNG_CONTROL_CONTROL_INTENPRE_Msk (_UINT32_(0x1) << SILEX_RNG_CONTROL_CONTROL_INTENPRE_Pos) /* (SILEX_RNG_CONTROL_CONTROL) Interrupt enable for AIS31 preliminary noise alarm. Mask */
#define SILEX_RNG_CONTROL_CONTROL_INTENPRE(value) (SILEX_RNG_CONTROL_CONTROL_INTENPRE_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_CONTROL_INTENPRE_Pos)) /* Assignment of value for INTENPRE in the SILEX_RNG_CONTROL_CONTROL register */
#define SILEX_RNG_CONTROL_CONTROL_INTENALM_Pos _UINT32_(10)                                         /* (SILEX_RNG_CONTROL_CONTROL) Interrupt enable for AIS31 noise alarm. Position */
#define SILEX_RNG_CONTROL_CONTROL_INTENALM_Msk (_UINT32_(0x1) << SILEX_RNG_CONTROL_CONTROL_INTENALM_Pos) /* (SILEX_RNG_CONTROL_CONTROL) Interrupt enable for AIS31 noise alarm. Mask */
#define SILEX_RNG_CONTROL_CONTROL_INTENALM(value) (SILEX_RNG_CONTROL_CONTROL_INTENALM_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_CONTROL_INTENALM_Pos)) /* Assignment of value for INTENALM in the SILEX_RNG_CONTROL_CONTROL register */
#define SILEX_RNG_CONTROL_CONTROL_FORCEACTIVEROS_Pos _UINT32_(11)                                         /* (SILEX_RNG_CONTROL_CONTROL) Force oscillators to run when FIFO is full. Position */
#define SILEX_RNG_CONTROL_CONTROL_FORCEACTIVEROS_Msk (_UINT32_(0x1) << SILEX_RNG_CONTROL_CONTROL_FORCEACTIVEROS_Pos) /* (SILEX_RNG_CONTROL_CONTROL) Force oscillators to run when FIFO is full. Mask */
#define SILEX_RNG_CONTROL_CONTROL_FORCEACTIVEROS(value) (SILEX_RNG_CONTROL_CONTROL_FORCEACTIVEROS_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_CONTROL_FORCEACTIVEROS_Pos)) /* Assignment of value for FORCEACTIVEROS in the SILEX_RNG_CONTROL_CONTROL register */
#define SILEX_RNG_CONTROL_CONTROL_HEALTHTESTBYPASS_Pos _UINT32_(12)                                         /* (SILEX_RNG_CONTROL_CONTROL) Bypass NIST tests such that the results of the start-up and online test do not affect the FSM state. Position */
#define SILEX_RNG_CONTROL_CONTROL_HEALTHTESTBYPASS_Msk (_UINT32_(0x1) << SILEX_RNG_CONTROL_CONTROL_HEALTHTESTBYPASS_Pos) /* (SILEX_RNG_CONTROL_CONTROL) Bypass NIST tests such that the results of the start-up and online test do not affect the FSM state. Mask */
#define SILEX_RNG_CONTROL_CONTROL_HEALTHTESTBYPASS(value) (SILEX_RNG_CONTROL_CONTROL_HEALTHTESTBYPASS_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_CONTROL_HEALTHTESTBYPASS_Pos)) /* Assignment of value for HEALTHTESTBYPASS in the SILEX_RNG_CONTROL_CONTROL register */
#define SILEX_RNG_CONTROL_CONTROL_AIS31BYPASS_Pos _UINT32_(13)                                         /* (SILEX_RNG_CONTROL_CONTROL) Bypass AIS31 tests such that the results of the start-up and online tests do not affect the FSM state. Position */
#define SILEX_RNG_CONTROL_CONTROL_AIS31BYPASS_Msk (_UINT32_(0x1) << SILEX_RNG_CONTROL_CONTROL_AIS31BYPASS_Pos) /* (SILEX_RNG_CONTROL_CONTROL) Bypass AIS31 tests such that the results of the start-up and online tests do not affect the FSM state. Mask */
#define SILEX_RNG_CONTROL_CONTROL_AIS31BYPASS(value) (SILEX_RNG_CONTROL_CONTROL_AIS31BYPASS_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_CONTROL_AIS31BYPASS_Pos)) /* Assignment of value for AIS31BYPASS in the SILEX_RNG_CONTROL_CONTROL register */
#define SILEX_RNG_CONTROL_CONTROL_HEALTHTESTSEL_Pos _UINT32_(14)                                         /* (SILEX_RNG_CONTROL_CONTROL) Select input to health test module: 0: Before conditioning, 1: After conditioning. Position */
#define SILEX_RNG_CONTROL_CONTROL_HEALTHTESTSEL_Msk (_UINT32_(0x1) << SILEX_RNG_CONTROL_CONTROL_HEALTHTESTSEL_Pos) /* (SILEX_RNG_CONTROL_CONTROL) Select input to health test module: 0: Before conditioning, 1: After conditioning. Mask */
#define SILEX_RNG_CONTROL_CONTROL_HEALTHTESTSEL(value) (SILEX_RNG_CONTROL_CONTROL_HEALTHTESTSEL_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_CONTROL_HEALTHTESTSEL_Pos)) /* Assignment of value for HEALTHTESTSEL in the SILEX_RNG_CONTROL_CONTROL register */
#define SILEX_RNG_CONTROL_CONTROL_AIS31TESTSEL_Pos _UINT32_(15)                                         /* (SILEX_RNG_CONTROL_CONTROL) Select input to the AIS31 test module: 0: Before conditioning, 1: After conditioning. Position */
#define SILEX_RNG_CONTROL_CONTROL_AIS31TESTSEL_Msk (_UINT32_(0x1) << SILEX_RNG_CONTROL_CONTROL_AIS31TESTSEL_Pos) /* (SILEX_RNG_CONTROL_CONTROL) Select input to the AIS31 test module: 0: Before conditioning, 1: After conditioning. Mask */
#define SILEX_RNG_CONTROL_CONTROL_AIS31TESTSEL(value) (SILEX_RNG_CONTROL_CONTROL_AIS31TESTSEL_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_CONTROL_AIS31TESTSEL_Pos)) /* Assignment of value for AIS31TESTSEL in the SILEX_RNG_CONTROL_CONTROL register */
#define SILEX_RNG_CONTROL_CONTROL_NB128BITBLOCKS_Pos _UINT32_(16)                                         /* (SILEX_RNG_CONTROL_CONTROL) Number of 128 bit blocks used in AES-CBCMAC post-processing. This value cannot be zero. Position */
#define SILEX_RNG_CONTROL_CONTROL_NB128BITBLOCKS_Msk (_UINT32_(0xF) << SILEX_RNG_CONTROL_CONTROL_NB128BITBLOCKS_Pos) /* (SILEX_RNG_CONTROL_CONTROL) Number of 128 bit blocks used in AES-CBCMAC post-processing. This value cannot be zero. Mask */
#define SILEX_RNG_CONTROL_CONTROL_NB128BITBLOCKS(value) (SILEX_RNG_CONTROL_CONTROL_NB128BITBLOCKS_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_CONTROL_NB128BITBLOCKS_Pos)) /* Assignment of value for NB128BITBLOCKS in the SILEX_RNG_CONTROL_CONTROL register */
#define SILEX_RNG_CONTROL_CONTROL_FIFOWRITESTARTUP_Pos _UINT32_(20)                                         /* (SILEX_RNG_CONTROL_CONTROL) Enable write of the samples in the FIFO during start-up. Position */
#define SILEX_RNG_CONTROL_CONTROL_FIFOWRITESTARTUP_Msk (_UINT32_(0x1) << SILEX_RNG_CONTROL_CONTROL_FIFOWRITESTARTUP_Pos) /* (SILEX_RNG_CONTROL_CONTROL) Enable write of the samples in the FIFO during start-up. Mask */
#define SILEX_RNG_CONTROL_CONTROL_FIFOWRITESTARTUP(value) (SILEX_RNG_CONTROL_CONTROL_FIFOWRITESTARTUP_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_CONTROL_FIFOWRITESTARTUP_Pos)) /* Assignment of value for FIFOWRITESTARTUP in the SILEX_RNG_CONTROL_CONTROL register */
#define SILEX_RNG_CONTROL_CONTROL_Msk         _UINT32_(0x001FFFBF)                                 /* (SILEX_RNG_CONTROL_CONTROL) Register Mask  */


/* -------- SILEX_RNG_CONTROL_FIFOLEVEL : (SILEX Offset: 0x1004) (R/W 32) FIFO level register. -------- */
#define SILEX_RNG_CONTROL_FIFOLEVEL_RESETVALUE _UINT32_(0x00)                                       /*  (SILEX_RNG_CONTROL_FIFOLEVEL) FIFO level register.  Reset Value */

#define SILEX_RNG_CONTROL_FIFOLEVEL_FIFOLEVEL_Pos _UINT32_(0)                                          /* (SILEX_RNG_CONTROL_FIFOLEVEL) Number of 32 bits words of random available in the FIFO. Any write to this register clears the FullInt flag in the Status register. Position */
#define SILEX_RNG_CONTROL_FIFOLEVEL_FIFOLEVEL_Msk (_UINT32_(0xFFFFFFFF) << SILEX_RNG_CONTROL_FIFOLEVEL_FIFOLEVEL_Pos) /* (SILEX_RNG_CONTROL_FIFOLEVEL) Number of 32 bits words of random available in the FIFO. Any write to this register clears the FullInt flag in the Status register. Mask */
#define SILEX_RNG_CONTROL_FIFOLEVEL_FIFOLEVEL(value) (SILEX_RNG_CONTROL_FIFOLEVEL_FIFOLEVEL_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_FIFOLEVEL_FIFOLEVEL_Pos)) /* Assignment of value for FIFOLEVEL in the SILEX_RNG_CONTROL_FIFOLEVEL register */
#define SILEX_RNG_CONTROL_FIFOLEVEL_Msk       _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_CONTROL_FIFOLEVEL) Register Mask  */


/* -------- SILEX_RNG_CONTROL_FIFOTHRESHOLD : (SILEX Offset: 0x1008) (R/W 32) FIFO threshold register. -------- */
#define SILEX_RNG_CONTROL_FIFOTHRESHOLD_RESETVALUE _UINT32_(0x00)                                       /*  (SILEX_RNG_CONTROL_FIFOTHRESHOLD) FIFO threshold register.  Reset Value */

#define SILEX_RNG_CONTROL_FIFOTHRESHOLD_FIFOTHRESHOLD_Pos _UINT32_(0)                                          /* (SILEX_RNG_CONTROL_FIFOTHRESHOLD) FIFO level below which the module leaves the idle state to refill the FIFO, expressed in number of 128bit blocks. Position */
#define SILEX_RNG_CONTROL_FIFOTHRESHOLD_FIFOTHRESHOLD_Msk (_UINT32_(0xFFFFFFFF) << SILEX_RNG_CONTROL_FIFOTHRESHOLD_FIFOTHRESHOLD_Pos) /* (SILEX_RNG_CONTROL_FIFOTHRESHOLD) FIFO level below which the module leaves the idle state to refill the FIFO, expressed in number of 128bit blocks. Mask */
#define SILEX_RNG_CONTROL_FIFOTHRESHOLD_FIFOTHRESHOLD(value) (SILEX_RNG_CONTROL_FIFOTHRESHOLD_FIFOTHRESHOLD_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_FIFOTHRESHOLD_FIFOTHRESHOLD_Pos)) /* Assignment of value for FIFOTHRESHOLD in the SILEX_RNG_CONTROL_FIFOTHRESHOLD register */
#define SILEX_RNG_CONTROL_FIFOTHRESHOLD_Msk   _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_CONTROL_FIFOTHRESHOLD) Register Mask  */


/* -------- SILEX_RNG_CONTROL_FIFODEPTH : (SILEX Offset: 0x100C) ( R/ 32) FIFO depth register. -------- */
#define SILEX_RNG_CONTROL_FIFODEPTH_RESETVALUE _UINT32_(0x00)                                       /*  (SILEX_RNG_CONTROL_FIFODEPTH) FIFO depth register.  Reset Value */

#define SILEX_RNG_CONTROL_FIFODEPTH_FIFODEPTH_Pos _UINT32_(0)                                          /* (SILEX_RNG_CONTROL_FIFODEPTH) Maximum number of 32 bits words that can be stored in the FIFO: 2**g_fifodepth. Position */
#define SILEX_RNG_CONTROL_FIFODEPTH_FIFODEPTH_Msk (_UINT32_(0xFFFFFFFF) << SILEX_RNG_CONTROL_FIFODEPTH_FIFODEPTH_Pos) /* (SILEX_RNG_CONTROL_FIFODEPTH) Maximum number of 32 bits words that can be stored in the FIFO: 2**g_fifodepth. Mask */
#define SILEX_RNG_CONTROL_FIFODEPTH_FIFODEPTH(value) (SILEX_RNG_CONTROL_FIFODEPTH_FIFODEPTH_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_FIFODEPTH_FIFODEPTH_Pos)) /* Assignment of value for FIFODEPTH in the SILEX_RNG_CONTROL_FIFODEPTH register */
#define SILEX_RNG_CONTROL_FIFODEPTH_Msk       _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_CONTROL_FIFODEPTH) Register Mask  */


/* -------- SILEX_RNG_CONTROL_KEY0 : (SILEX Offset: 0x1010) (R/W 32) Key register (MSB). -------- */
#define SILEX_RNG_CONTROL_KEY0_RESETVALUE     _UINT32_(0x00)                                       /*  (SILEX_RNG_CONTROL_KEY0) Key register (MSB).  Reset Value */

#define SILEX_RNG_CONTROL_KEY0_KEY0_Pos       _UINT32_(0)                                          /* (SILEX_RNG_CONTROL_KEY0) Key register (MSB). Position */
#define SILEX_RNG_CONTROL_KEY0_KEY0_Msk       (_UINT32_(0xFFFFFFFF) << SILEX_RNG_CONTROL_KEY0_KEY0_Pos) /* (SILEX_RNG_CONTROL_KEY0) Key register (MSB). Mask */
#define SILEX_RNG_CONTROL_KEY0_KEY0(value)    (SILEX_RNG_CONTROL_KEY0_KEY0_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_KEY0_KEY0_Pos)) /* Assignment of value for KEY0 in the SILEX_RNG_CONTROL_KEY0 register */
#define SILEX_RNG_CONTROL_KEY0_Msk            _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_CONTROL_KEY0) Register Mask  */


/* -------- SILEX_RNG_CONTROL_KEY1 : (SILEX Offset: 0x1014) (R/W 32) Key register. -------- */
#define SILEX_RNG_CONTROL_KEY1_RESETVALUE     _UINT32_(0x00)                                       /*  (SILEX_RNG_CONTROL_KEY1) Key register.  Reset Value */

#define SILEX_RNG_CONTROL_KEY1_KEY1_Pos       _UINT32_(0)                                          /* (SILEX_RNG_CONTROL_KEY1) Key register. Position */
#define SILEX_RNG_CONTROL_KEY1_KEY1_Msk       (_UINT32_(0xFFFFFFFF) << SILEX_RNG_CONTROL_KEY1_KEY1_Pos) /* (SILEX_RNG_CONTROL_KEY1) Key register. Mask */
#define SILEX_RNG_CONTROL_KEY1_KEY1(value)    (SILEX_RNG_CONTROL_KEY1_KEY1_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_KEY1_KEY1_Pos)) /* Assignment of value for KEY1 in the SILEX_RNG_CONTROL_KEY1 register */
#define SILEX_RNG_CONTROL_KEY1_Msk            _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_CONTROL_KEY1) Register Mask  */


/* -------- SILEX_RNG_CONTROL_KEY2 : (SILEX Offset: 0x1018) (R/W 32) Key register. -------- */
#define SILEX_RNG_CONTROL_KEY2_RESETVALUE     _UINT32_(0x00)                                       /*  (SILEX_RNG_CONTROL_KEY2) Key register.  Reset Value */

#define SILEX_RNG_CONTROL_KEY2_KEY2_Pos       _UINT32_(0)                                          /* (SILEX_RNG_CONTROL_KEY2) Key register. Position */
#define SILEX_RNG_CONTROL_KEY2_KEY2_Msk       (_UINT32_(0xFFFFFFFF) << SILEX_RNG_CONTROL_KEY2_KEY2_Pos) /* (SILEX_RNG_CONTROL_KEY2) Key register. Mask */
#define SILEX_RNG_CONTROL_KEY2_KEY2(value)    (SILEX_RNG_CONTROL_KEY2_KEY2_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_KEY2_KEY2_Pos)) /* Assignment of value for KEY2 in the SILEX_RNG_CONTROL_KEY2 register */
#define SILEX_RNG_CONTROL_KEY2_Msk            _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_CONTROL_KEY2) Register Mask  */


/* -------- SILEX_RNG_CONTROL_KEY3 : (SILEX Offset: 0x101C) (R/W 32) Key register (LSB). -------- */
#define SILEX_RNG_CONTROL_KEY3_RESETVALUE     _UINT32_(0x00)                                       /*  (SILEX_RNG_CONTROL_KEY3) Key register (LSB).  Reset Value */

#define SILEX_RNG_CONTROL_KEY3_KEY3_Pos       _UINT32_(0)                                          /* (SILEX_RNG_CONTROL_KEY3) Key register (LSB). Position */
#define SILEX_RNG_CONTROL_KEY3_KEY3_Msk       (_UINT32_(0xFFFFFFFF) << SILEX_RNG_CONTROL_KEY3_KEY3_Pos) /* (SILEX_RNG_CONTROL_KEY3) Key register (LSB). Mask */
#define SILEX_RNG_CONTROL_KEY3_KEY3(value)    (SILEX_RNG_CONTROL_KEY3_KEY3_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_KEY3_KEY3_Pos)) /* Assignment of value for KEY3 in the SILEX_RNG_CONTROL_KEY3 register */
#define SILEX_RNG_CONTROL_KEY3_Msk            _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_CONTROL_KEY3) Register Mask  */


/* -------- SILEX_RNG_CONTROL_TESTDATA : (SILEX Offset: 0x1020) ( /W 32) Test data register. -------- */
#define SILEX_RNG_CONTROL_TESTDATA_RESETVALUE _UINT32_(0x00)                                       /*  (SILEX_RNG_CONTROL_TESTDATA) Test data register.  Reset Value */

#define SILEX_RNG_CONTROL_TESTDATA_TESTDATA_Pos _UINT32_(0)                                          /* (SILEX_RNG_CONTROL_TESTDATA) Test data register. Position */
#define SILEX_RNG_CONTROL_TESTDATA_TESTDATA_Msk (_UINT32_(0xFFFFFFFF) << SILEX_RNG_CONTROL_TESTDATA_TESTDATA_Pos) /* (SILEX_RNG_CONTROL_TESTDATA) Test data register. Mask */
#define SILEX_RNG_CONTROL_TESTDATA_TESTDATA(value) (SILEX_RNG_CONTROL_TESTDATA_TESTDATA_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_TESTDATA_TESTDATA_Pos)) /* Assignment of value for TESTDATA in the SILEX_RNG_CONTROL_TESTDATA register */
#define SILEX_RNG_CONTROL_TESTDATA_Msk        _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_CONTROL_TESTDATA) Register Mask  */


/* -------- SILEX_RNG_CONTROL_REPEATTHRESHOLD : (SILEX Offset: 0x1024) (R/W 32) Repetition Test Count Cut-Off value. -------- */
#define SILEX_RNG_CONTROL_REPEATTHRESHOLD_RESETVALUE _UINT32_(0x00)                                       /*  (SILEX_RNG_CONTROL_REPEATTHRESHOLD) Repetition Test Count Cut-Off value.  Reset Value */

#define SILEX_RNG_CONTROL_REPEATTHRESHOLD_REPEATTHRESHOLD_Pos _UINT32_(0)                                          /* (SILEX_RNG_CONTROL_REPEATTHRESHOLD) Repetition Test Count Cut-Off value. Position */
#define SILEX_RNG_CONTROL_REPEATTHRESHOLD_REPEATTHRESHOLD_Msk (_UINT32_(0xFFFFFFFF) << SILEX_RNG_CONTROL_REPEATTHRESHOLD_REPEATTHRESHOLD_Pos) /* (SILEX_RNG_CONTROL_REPEATTHRESHOLD) Repetition Test Count Cut-Off value. Mask */
#define SILEX_RNG_CONTROL_REPEATTHRESHOLD_REPEATTHRESHOLD(value) (SILEX_RNG_CONTROL_REPEATTHRESHOLD_REPEATTHRESHOLD_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_REPEATTHRESHOLD_REPEATTHRESHOLD_Pos)) /* Assignment of value for REPEATTHRESHOLD in the SILEX_RNG_CONTROL_REPEATTHRESHOLD register */
#define SILEX_RNG_CONTROL_REPEATTHRESHOLD_Msk _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_CONTROL_REPEATTHRESHOLD) Register Mask  */


/* -------- SILEX_RNG_CONTROL_PROPTHRESHOLD : (SILEX Offset: 0x1028) (R/W 32) Adaptive Proportion Test (1024-sample window) Cut-Off value. -------- */
#define SILEX_RNG_CONTROL_PROPTHRESHOLD_RESETVALUE _UINT32_(0x00)                                       /*  (SILEX_RNG_CONTROL_PROPTHRESHOLD) Adaptive Proportion Test (1024-sample window) Cut-Off value.  Reset Value */

#define SILEX_RNG_CONTROL_PROPTHRESHOLD_PROPTHRESHOLD_Pos _UINT32_(0)                                          /* (SILEX_RNG_CONTROL_PROPTHRESHOLD) Adaptive Proportion Test (1024-sample window) Cut-Off value. Position */
#define SILEX_RNG_CONTROL_PROPTHRESHOLD_PROPTHRESHOLD_Msk (_UINT32_(0xFFFFFFFF) << SILEX_RNG_CONTROL_PROPTHRESHOLD_PROPTHRESHOLD_Pos) /* (SILEX_RNG_CONTROL_PROPTHRESHOLD) Adaptive Proportion Test (1024-sample window) Cut-Off value. Mask */
#define SILEX_RNG_CONTROL_PROPTHRESHOLD_PROPTHRESHOLD(value) (SILEX_RNG_CONTROL_PROPTHRESHOLD_PROPTHRESHOLD_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_PROPTHRESHOLD_PROPTHRESHOLD_Pos)) /* Assignment of value for PROPTHRESHOLD in the SILEX_RNG_CONTROL_PROPTHRESHOLD register */
#define SILEX_RNG_CONTROL_PROPTHRESHOLD_Msk   _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_CONTROL_PROPTHRESHOLD) Register Mask  */


/* -------- SILEX_RNG_CONTROL_STATUS : (SILEX Offset: 0x1030) (R/W 32) Status register. -------- */
#define SILEX_RNG_CONTROL_STATUS_RESETVALUE   _UINT32_(0x00)                                       /*  (SILEX_RNG_CONTROL_STATUS) Status register.  Reset Value */

#define SILEX_RNG_CONTROL_STATUS_TESTDATABUSY_Pos _UINT32_(0)                                          /* (SILEX_RNG_CONTROL_STATUS) High when data written to TestData register is being processed. (see section 4.7) Position */
#define SILEX_RNG_CONTROL_STATUS_TESTDATABUSY_Msk (_UINT32_(0x1) << SILEX_RNG_CONTROL_STATUS_TESTDATABUSY_Pos) /* (SILEX_RNG_CONTROL_STATUS) High when data written to TestData register is being processed. (see section 4.7) Mask */
#define SILEX_RNG_CONTROL_STATUS_TESTDATABUSY(value) (SILEX_RNG_CONTROL_STATUS_TESTDATABUSY_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_STATUS_TESTDATABUSY_Pos)) /* Assignment of value for TESTDATABUSY in the SILEX_RNG_CONTROL_STATUS register */
#define SILEX_RNG_CONTROL_STATUS_STATE_Pos    _UINT32_(1)                                          /* (SILEX_RNG_CONTROL_STATUS) State of the control FSM: 000: Reset, 001: Startup, 010: Idle (Rings On), 011: Idle (Rings Off), 100: Fill FIFO, 101: Error, 110: Unused, 111: Unused. Position */
#define SILEX_RNG_CONTROL_STATUS_STATE_Msk    (_UINT32_(0x7) << SILEX_RNG_CONTROL_STATUS_STATE_Pos) /* (SILEX_RNG_CONTROL_STATUS) State of the control FSM: 000: Reset, 001: Startup, 010: Idle (Rings On), 011: Idle (Rings Off), 100: Fill FIFO, 101: Error, 110: Unused, 111: Unused. Mask */
#define SILEX_RNG_CONTROL_STATUS_STATE(value) (SILEX_RNG_CONTROL_STATUS_STATE_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_STATUS_STATE_Pos)) /* Assignment of value for STATE in the SILEX_RNG_CONTROL_STATUS register */
#define SILEX_RNG_CONTROL_STATUS_REPFAIL_Pos  _UINT32_(4)                                          /* (SILEX_RNG_CONTROL_STATUS) NIST-800-90B repetition Count Test interrupt status. Position */
#define SILEX_RNG_CONTROL_STATUS_REPFAIL_Msk  (_UINT32_(0x1) << SILEX_RNG_CONTROL_STATUS_REPFAIL_Pos) /* (SILEX_RNG_CONTROL_STATUS) NIST-800-90B repetition Count Test interrupt status. Mask */
#define SILEX_RNG_CONTROL_STATUS_REPFAIL(value) (SILEX_RNG_CONTROL_STATUS_REPFAIL_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_STATUS_REPFAIL_Pos)) /* Assignment of value for REPFAIL in the SILEX_RNG_CONTROL_STATUS register */
#define SILEX_RNG_CONTROL_STATUS_PROPFAIL_Pos _UINT32_(5)                                          /* (SILEX_RNG_CONTROL_STATUS) NIST-800-90B adaptive Proportion Test (1024-sample window) interrupt status. Position */
#define SILEX_RNG_CONTROL_STATUS_PROPFAIL_Msk (_UINT32_(0x1) << SILEX_RNG_CONTROL_STATUS_PROPFAIL_Pos) /* (SILEX_RNG_CONTROL_STATUS) NIST-800-90B adaptive Proportion Test (1024-sample window) interrupt status. Mask */
#define SILEX_RNG_CONTROL_STATUS_PROPFAIL(value) (SILEX_RNG_CONTROL_STATUS_PROPFAIL_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_STATUS_PROPFAIL_Pos)) /* Assignment of value for PROPFAIL in the SILEX_RNG_CONTROL_STATUS register */
#define SILEX_RNG_CONTROL_STATUS_FULLINT_Pos  _UINT32_(7)                                          /* (SILEX_RNG_CONTROL_STATUS) FIFO full status. Position */
#define SILEX_RNG_CONTROL_STATUS_FULLINT_Msk  (_UINT32_(0x1) << SILEX_RNG_CONTROL_STATUS_FULLINT_Pos) /* (SILEX_RNG_CONTROL_STATUS) FIFO full status. Mask */
#define SILEX_RNG_CONTROL_STATUS_FULLINT(value) (SILEX_RNG_CONTROL_STATUS_FULLINT_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_STATUS_FULLINT_Pos)) /* Assignment of value for FULLINT in the SILEX_RNG_CONTROL_STATUS register */
#define SILEX_RNG_CONTROL_STATUS_PREINT_Pos   _UINT32_(8)                                          /* (SILEX_RNG_CONTROL_STATUS) AIS31 preliminary noise alarm interrupt status. Position */
#define SILEX_RNG_CONTROL_STATUS_PREINT_Msk   (_UINT32_(0x1) << SILEX_RNG_CONTROL_STATUS_PREINT_Pos) /* (SILEX_RNG_CONTROL_STATUS) AIS31 preliminary noise alarm interrupt status. Mask */
#define SILEX_RNG_CONTROL_STATUS_PREINT(value) (SILEX_RNG_CONTROL_STATUS_PREINT_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_STATUS_PREINT_Pos)) /* Assignment of value for PREINT in the SILEX_RNG_CONTROL_STATUS register */
#define SILEX_RNG_CONTROL_STATUS_ALMINT_Pos   _UINT32_(9)                                          /* (SILEX_RNG_CONTROL_STATUS) AIS31 noise alarm interrupt status. Position */
#define SILEX_RNG_CONTROL_STATUS_ALMINT_Msk   (_UINT32_(0x1) << SILEX_RNG_CONTROL_STATUS_ALMINT_Pos) /* (SILEX_RNG_CONTROL_STATUS) AIS31 noise alarm interrupt status. Mask */
#define SILEX_RNG_CONTROL_STATUS_ALMINT(value) (SILEX_RNG_CONTROL_STATUS_ALMINT_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_STATUS_ALMINT_Pos)) /* Assignment of value for ALMINT in the SILEX_RNG_CONTROL_STATUS register */
#define SILEX_RNG_CONTROL_STATUS_STARTUPFAIL_Pos _UINT32_(10)                                         /* (SILEX_RNG_CONTROL_STATUS) Start-up test failure. Position */
#define SILEX_RNG_CONTROL_STATUS_STARTUPFAIL_Msk (_UINT32_(0x1) << SILEX_RNG_CONTROL_STATUS_STARTUPFAIL_Pos) /* (SILEX_RNG_CONTROL_STATUS) Start-up test failure. Mask */
#define SILEX_RNG_CONTROL_STATUS_STARTUPFAIL(value) (SILEX_RNG_CONTROL_STATUS_STARTUPFAIL_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_STATUS_STARTUPFAIL_Pos)) /* Assignment of value for STARTUPFAIL in the SILEX_RNG_CONTROL_STATUS register */
#define SILEX_RNG_CONTROL_STATUS_FIFOACCFAIL_Pos _UINT32_(11)                                         /* (SILEX_RNG_CONTROL_STATUS) Set when a FIFO data read is performed while the NDRNG is disabled AND has its FIFO empty (FIFOLevel = 0). Position */
#define SILEX_RNG_CONTROL_STATUS_FIFOACCFAIL_Msk (_UINT32_(0x1) << SILEX_RNG_CONTROL_STATUS_FIFOACCFAIL_Pos) /* (SILEX_RNG_CONTROL_STATUS) Set when a FIFO data read is performed while the NDRNG is disabled AND has its FIFO empty (FIFOLevel = 0). Mask */
#define SILEX_RNG_CONTROL_STATUS_FIFOACCFAIL(value) (SILEX_RNG_CONTROL_STATUS_FIFOACCFAIL_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_STATUS_FIFOACCFAIL_Pos)) /* Assignment of value for FIFOACCFAIL in the SILEX_RNG_CONTROL_STATUS register */
#define SILEX_RNG_CONTROL_STATUS_Msk          _UINT32_(0x00000FBF)                                 /* (SILEX_RNG_CONTROL_STATUS) Register Mask  */


/* -------- SILEX_RNG_CONTROL_INITWAITVAL : (SILEX Offset: 0x1034) (R/W 32) Initial wait counter value. -------- */
#define SILEX_RNG_CONTROL_INITWAITVAL_RESETVALUE _UINT32_(0xFFFF)                                     /*  (SILEX_RNG_CONTROL_INITWAITVAL) Initial wait counter value.  Reset Value */

#define SILEX_RNG_CONTROL_INITWAITVAL_INITWAITVAL_Pos _UINT32_(0)                                          /* (SILEX_RNG_CONTROL_INITWAITVAL) Number of clock cycles to wait before sampling data from the noise source. Position */
#define SILEX_RNG_CONTROL_INITWAITVAL_INITWAITVAL_Msk (_UINT32_(0xFFFF) << SILEX_RNG_CONTROL_INITWAITVAL_INITWAITVAL_Pos) /* (SILEX_RNG_CONTROL_INITWAITVAL) Number of clock cycles to wait before sampling data from the noise source. Mask */
#define SILEX_RNG_CONTROL_INITWAITVAL_INITWAITVAL(value) (SILEX_RNG_CONTROL_INITWAITVAL_INITWAITVAL_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_INITWAITVAL_INITWAITVAL_Pos)) /* Assignment of value for INITWAITVAL in the SILEX_RNG_CONTROL_INITWAITVAL register */
#define SILEX_RNG_CONTROL_INITWAITVAL_Msk     _UINT32_(0x0000FFFF)                                 /* (SILEX_RNG_CONTROL_INITWAITVAL) Register Mask  */


/* -------- SILEX_RNG_CONTROL_DISABLEOSC0 : (SILEX Offset: 0x1038) (R/W 32) Disable oscillator rings #0 to #31. -------- */
#define SILEX_RNG_CONTROL_DISABLEOSC0_RESETVALUE _UINT32_(0x00)                                       /*  (SILEX_RNG_CONTROL_DISABLEOSC0) Disable oscillator rings #0 to #31.  Reset Value */

#define SILEX_RNG_CONTROL_DISABLEOSC0_DISABLEOSC0_Pos _UINT32_(0)                                          /* (SILEX_RNG_CONTROL_DISABLEOSC0) Disable oscillator rings #0 to #31. Position */
#define SILEX_RNG_CONTROL_DISABLEOSC0_DISABLEOSC0_Msk (_UINT32_(0xFFFFFFFF) << SILEX_RNG_CONTROL_DISABLEOSC0_DISABLEOSC0_Pos) /* (SILEX_RNG_CONTROL_DISABLEOSC0) Disable oscillator rings #0 to #31. Mask */
#define SILEX_RNG_CONTROL_DISABLEOSC0_DISABLEOSC0(value) (SILEX_RNG_CONTROL_DISABLEOSC0_DISABLEOSC0_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_DISABLEOSC0_DISABLEOSC0_Pos)) /* Assignment of value for DISABLEOSC0 in the SILEX_RNG_CONTROL_DISABLEOSC0 register */
#define SILEX_RNG_CONTROL_DISABLEOSC0_Msk     _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_CONTROL_DISABLEOSC0) Register Mask  */


/* -------- SILEX_RNG_CONTROL_DISABLEOSC1 : (SILEX Offset: 0x103C) (R/W 32) Disable oscillator rings #32 to #63. -------- */
#define SILEX_RNG_CONTROL_DISABLEOSC1_RESETVALUE _UINT32_(0x00)                                       /*  (SILEX_RNG_CONTROL_DISABLEOSC1) Disable oscillator rings #32 to #63.  Reset Value */

#define SILEX_RNG_CONTROL_DISABLEOSC1_DISABLEOSC1_Pos _UINT32_(0)                                          /* (SILEX_RNG_CONTROL_DISABLEOSC1) Disable oscillator rings #32 to #63. Position */
#define SILEX_RNG_CONTROL_DISABLEOSC1_DISABLEOSC1_Msk (_UINT32_(0xFFFFFFFF) << SILEX_RNG_CONTROL_DISABLEOSC1_DISABLEOSC1_Pos) /* (SILEX_RNG_CONTROL_DISABLEOSC1) Disable oscillator rings #32 to #63. Mask */
#define SILEX_RNG_CONTROL_DISABLEOSC1_DISABLEOSC1(value) (SILEX_RNG_CONTROL_DISABLEOSC1_DISABLEOSC1_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_DISABLEOSC1_DISABLEOSC1_Pos)) /* Assignment of value for DISABLEOSC1 in the SILEX_RNG_CONTROL_DISABLEOSC1 register */
#define SILEX_RNG_CONTROL_DISABLEOSC1_Msk     _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_CONTROL_DISABLEOSC1) Register Mask  */


/* -------- SILEX_RNG_CONTROL_SWOFFTMRVAL : (SILEX Offset: 0x1040) (R/W 32) Switch off timer value. -------- */
#define SILEX_RNG_CONTROL_SWOFFTMRVAL_RESETVALUE _UINT32_(0x00)                                       /*  (SILEX_RNG_CONTROL_SWOFFTMRVAL) Switch off timer value.  Reset Value */

#define SILEX_RNG_CONTROL_SWOFFTMRVAL_SWOFFTMRVAL_Pos _UINT32_(0)                                          /* (SILEX_RNG_CONTROL_SWOFFTMRVAL) Number of clk cycles to wait before stopping the rings after the FIFO is full. Position */
#define SILEX_RNG_CONTROL_SWOFFTMRVAL_SWOFFTMRVAL_Msk (_UINT32_(0xFFFF) << SILEX_RNG_CONTROL_SWOFFTMRVAL_SWOFFTMRVAL_Pos) /* (SILEX_RNG_CONTROL_SWOFFTMRVAL) Number of clk cycles to wait before stopping the rings after the FIFO is full. Mask */
#define SILEX_RNG_CONTROL_SWOFFTMRVAL_SWOFFTMRVAL(value) (SILEX_RNG_CONTROL_SWOFFTMRVAL_SWOFFTMRVAL_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_SWOFFTMRVAL_SWOFFTMRVAL_Pos)) /* Assignment of value for SWOFFTMRVAL in the SILEX_RNG_CONTROL_SWOFFTMRVAL register */
#define SILEX_RNG_CONTROL_SWOFFTMRVAL_Msk     _UINT32_(0x0000FFFF)                                 /* (SILEX_RNG_CONTROL_SWOFFTMRVAL) Register Mask  */


/* -------- SILEX_RNG_CONTROL_CLKDIV : (SILEX Offset: 0x1044) (R/W 32) Sample clock divider. -------- */
#define SILEX_RNG_CONTROL_CLKDIV_RESETVALUE   _UINT32_(0x00)                                       /*  (SILEX_RNG_CONTROL_CLKDIV) Sample clock divider.  Reset Value */

#define SILEX_RNG_CONTROL_CLKDIV_CLKDIV_Pos   _UINT32_(0)                                          /* (SILEX_RNG_CONTROL_CLKDIV) Sample clock divider. The frequency at which the outputs of the rings are sampled is given by: Fs=Fpclk/(ClkDiv+1). Position */
#define SILEX_RNG_CONTROL_CLKDIV_CLKDIV_Msk   (_UINT32_(0xFF) << SILEX_RNG_CONTROL_CLKDIV_CLKDIV_Pos) /* (SILEX_RNG_CONTROL_CLKDIV) Sample clock divider. The frequency at which the outputs of the rings are sampled is given by: Fs=Fpclk/(ClkDiv+1). Mask */
#define SILEX_RNG_CONTROL_CLKDIV_CLKDIV(value) (SILEX_RNG_CONTROL_CLKDIV_CLKDIV_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_CLKDIV_CLKDIV_Pos)) /* Assignment of value for CLKDIV in the SILEX_RNG_CONTROL_CLKDIV register */
#define SILEX_RNG_CONTROL_CLKDIV_Msk          _UINT32_(0x000000FF)                                 /* (SILEX_RNG_CONTROL_CLKDIV) Register Mask  */


/* -------- SILEX_RNG_CONTROL_AIS31CONF0 : (SILEX Offset: 0x1048) (R/W 32) AIS31 configuration register 0. -------- */
#define SILEX_RNG_CONTROL_AIS31CONF0_RESETVALUE _UINT32_(0x00)                                       /*  (SILEX_RNG_CONTROL_AIS31CONF0) AIS31 configuration register 0.  Reset Value */

#define SILEX_RNG_CONTROL_AIS31CONF0_STARTUPTHRESHOLD_Pos _UINT32_(0)                                          /* (SILEX_RNG_CONTROL_AIS31CONF0) Start-up test threshold. Position */
#define SILEX_RNG_CONTROL_AIS31CONF0_STARTUPTHRESHOLD_Msk (_UINT32_(0xFFFF) << SILEX_RNG_CONTROL_AIS31CONF0_STARTUPTHRESHOLD_Pos) /* (SILEX_RNG_CONTROL_AIS31CONF0) Start-up test threshold. Mask */
#define SILEX_RNG_CONTROL_AIS31CONF0_STARTUPTHRESHOLD(value) (SILEX_RNG_CONTROL_AIS31CONF0_STARTUPTHRESHOLD_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_AIS31CONF0_STARTUPTHRESHOLD_Pos)) /* Assignment of value for STARTUPTHRESHOLD in the SILEX_RNG_CONTROL_AIS31CONF0 register */
#define SILEX_RNG_CONTROL_AIS31CONF0_ONLINETHRESHOLD_Pos _UINT32_(16)                                         /* (SILEX_RNG_CONTROL_AIS31CONF0) Online threshold. Position */
#define SILEX_RNG_CONTROL_AIS31CONF0_ONLINETHRESHOLD_Msk (_UINT32_(0xFFFF) << SILEX_RNG_CONTROL_AIS31CONF0_ONLINETHRESHOLD_Pos) /* (SILEX_RNG_CONTROL_AIS31CONF0) Online threshold. Mask */
#define SILEX_RNG_CONTROL_AIS31CONF0_ONLINETHRESHOLD(value) (SILEX_RNG_CONTROL_AIS31CONF0_ONLINETHRESHOLD_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_AIS31CONF0_ONLINETHRESHOLD_Pos)) /* Assignment of value for ONLINETHRESHOLD in the SILEX_RNG_CONTROL_AIS31CONF0 register */
#define SILEX_RNG_CONTROL_AIS31CONF0_Msk      _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_CONTROL_AIS31CONF0) Register Mask  */


/* -------- SILEX_RNG_CONTROL_AIS31CONF1 : (SILEX Offset: 0x104C) (R/W 32) AIS31 configuration register 1. -------- */
#define SILEX_RNG_CONTROL_AIS31CONF1_RESETVALUE _UINT32_(0x00)                                       /*  (SILEX_RNG_CONTROL_AIS31CONF1) AIS31 configuration register 1.  Reset Value */

#define SILEX_RNG_CONTROL_AIS31CONF1_ONLINEREPTHRESHOLD_Pos _UINT32_(0)                                          /* (SILEX_RNG_CONTROL_AIS31CONF1) Online repeat threshold. Position */
#define SILEX_RNG_CONTROL_AIS31CONF1_ONLINEREPTHRESHOLD_Msk (_UINT32_(0xFFFF) << SILEX_RNG_CONTROL_AIS31CONF1_ONLINEREPTHRESHOLD_Pos) /* (SILEX_RNG_CONTROL_AIS31CONF1) Online repeat threshold. Mask */
#define SILEX_RNG_CONTROL_AIS31CONF1_ONLINEREPTHRESHOLD(value) (SILEX_RNG_CONTROL_AIS31CONF1_ONLINEREPTHRESHOLD_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_AIS31CONF1_ONLINEREPTHRESHOLD_Pos)) /* Assignment of value for ONLINEREPTHRESHOLD in the SILEX_RNG_CONTROL_AIS31CONF1 register */
#define SILEX_RNG_CONTROL_AIS31CONF1_HEXPECTEDVALUE_Pos _UINT32_(16)                                         /* (SILEX_RNG_CONTROL_AIS31CONF1) Expected history value. Position */
#define SILEX_RNG_CONTROL_AIS31CONF1_HEXPECTEDVALUE_Msk (_UINT32_(0xFFFF) << SILEX_RNG_CONTROL_AIS31CONF1_HEXPECTEDVALUE_Pos) /* (SILEX_RNG_CONTROL_AIS31CONF1) Expected history value. Mask */
#define SILEX_RNG_CONTROL_AIS31CONF1_HEXPECTEDVALUE(value) (SILEX_RNG_CONTROL_AIS31CONF1_HEXPECTEDVALUE_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_AIS31CONF1_HEXPECTEDVALUE_Pos)) /* Assignment of value for HEXPECTEDVALUE in the SILEX_RNG_CONTROL_AIS31CONF1 register */
#define SILEX_RNG_CONTROL_AIS31CONF1_Msk      _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_CONTROL_AIS31CONF1) Register Mask  */


/* -------- SILEX_RNG_CONTROL_AIS31CONF2 : (SILEX Offset: 0x1050) (R/W 32) AIS31 configuration register 2. -------- */
#define SILEX_RNG_CONTROL_AIS31CONF2_RESETVALUE _UINT32_(0x00)                                       /*  (SILEX_RNG_CONTROL_AIS31CONF2) AIS31 configuration register 2.  Reset Value */

#define SILEX_RNG_CONTROL_AIS31CONF2_HMIN_Pos _UINT32_(0)                                          /* (SILEX_RNG_CONTROL_AIS31CONF2) Minimum allowed history value. Position */
#define SILEX_RNG_CONTROL_AIS31CONF2_HMIN_Msk (_UINT32_(0xFFFF) << SILEX_RNG_CONTROL_AIS31CONF2_HMIN_Pos) /* (SILEX_RNG_CONTROL_AIS31CONF2) Minimum allowed history value. Mask */
#define SILEX_RNG_CONTROL_AIS31CONF2_HMIN(value) (SILEX_RNG_CONTROL_AIS31CONF2_HMIN_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_AIS31CONF2_HMIN_Pos)) /* Assignment of value for HMIN in the SILEX_RNG_CONTROL_AIS31CONF2 register */
#define SILEX_RNG_CONTROL_AIS31CONF2_HMAX_Pos _UINT32_(16)                                         /* (SILEX_RNG_CONTROL_AIS31CONF2) Maximum allowed history value. Position */
#define SILEX_RNG_CONTROL_AIS31CONF2_HMAX_Msk (_UINT32_(0xFFFF) << SILEX_RNG_CONTROL_AIS31CONF2_HMAX_Pos) /* (SILEX_RNG_CONTROL_AIS31CONF2) Maximum allowed history value. Mask */
#define SILEX_RNG_CONTROL_AIS31CONF2_HMAX(value) (SILEX_RNG_CONTROL_AIS31CONF2_HMAX_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_AIS31CONF2_HMAX_Pos)) /* Assignment of value for HMAX in the SILEX_RNG_CONTROL_AIS31CONF2 register */
#define SILEX_RNG_CONTROL_AIS31CONF2_Msk      _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_CONTROL_AIS31CONF2) Register Mask  */


/* -------- SILEX_RNG_CONTROL_AIS31STATUS : (SILEX Offset: 0x1054) (R/W 32) AIS31 status register. -------- */
#define SILEX_RNG_CONTROL_AIS31STATUS_RESETVALUE _UINT32_(0x00)                                       /*  (SILEX_RNG_CONTROL_AIS31STATUS) AIS31 status register.  Reset Value */

#define SILEX_RNG_CONTROL_AIS31STATUS_NUMPRELIMALARMS_Pos _UINT32_(0)                                          /* (SILEX_RNG_CONTROL_AIS31STATUS) Number of preliminary noise alarms since counter was last cleared. Position */
#define SILEX_RNG_CONTROL_AIS31STATUS_NUMPRELIMALARMS_Msk (_UINT32_(0xFFFF) << SILEX_RNG_CONTROL_AIS31STATUS_NUMPRELIMALARMS_Pos) /* (SILEX_RNG_CONTROL_AIS31STATUS) Number of preliminary noise alarms since counter was last cleared. Mask */
#define SILEX_RNG_CONTROL_AIS31STATUS_NUMPRELIMALARMS(value) (SILEX_RNG_CONTROL_AIS31STATUS_NUMPRELIMALARMS_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_AIS31STATUS_NUMPRELIMALARMS_Pos)) /* Assignment of value for NUMPRELIMALARMS in the SILEX_RNG_CONTROL_AIS31STATUS register */
#define SILEX_RNG_CONTROL_AIS31STATUS_PRELIMNOISEALARMRNG_Pos _UINT32_(16)                                         /* (SILEX_RNG_CONTROL_AIS31STATUS) Last preliminary noise alarm occurred due to history value out of range. Position */
#define SILEX_RNG_CONTROL_AIS31STATUS_PRELIMNOISEALARMRNG_Msk (_UINT32_(0x1) << SILEX_RNG_CONTROL_AIS31STATUS_PRELIMNOISEALARMRNG_Pos) /* (SILEX_RNG_CONTROL_AIS31STATUS) Last preliminary noise alarm occurred due to history value out of range. Mask */
#define SILEX_RNG_CONTROL_AIS31STATUS_PRELIMNOISEALARMRNG(value) (SILEX_RNG_CONTROL_AIS31STATUS_PRELIMNOISEALARMRNG_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_AIS31STATUS_PRELIMNOISEALARMRNG_Pos)) /* Assignment of value for PRELIMNOISEALARMRNG in the SILEX_RNG_CONTROL_AIS31STATUS register */
#define SILEX_RNG_CONTROL_AIS31STATUS_PRELIMNOISEALARMREP_Pos _UINT32_(17)                                         /* (SILEX_RNG_CONTROL_AIS31STATUS) Last preliminary noise alarm occurred due to consecutive high X**2. Position */
#define SILEX_RNG_CONTROL_AIS31STATUS_PRELIMNOISEALARMREP_Msk (_UINT32_(0x1) << SILEX_RNG_CONTROL_AIS31STATUS_PRELIMNOISEALARMREP_Pos) /* (SILEX_RNG_CONTROL_AIS31STATUS) Last preliminary noise alarm occurred due to consecutive high X**2. Mask */
#define SILEX_RNG_CONTROL_AIS31STATUS_PRELIMNOISEALARMREP(value) (SILEX_RNG_CONTROL_AIS31STATUS_PRELIMNOISEALARMREP_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_AIS31STATUS_PRELIMNOISEALARMREP_Pos)) /* Assignment of value for PRELIMNOISEALARMREP in the SILEX_RNG_CONTROL_AIS31STATUS register */
#define SILEX_RNG_CONTROL_AIS31STATUS_Msk     _UINT32_(0x0003FFFF)                                 /* (SILEX_RNG_CONTROL_AIS31STATUS) Register Mask  */


/* -------- SILEX_RNG_CONTROL_HWCONFIG : (SILEX Offset: 0x1058) ( R/ 32) Hardware configuration register. -------- */
#define SILEX_RNG_CONTROL_HWCONFIG_RESETVALUE _UINT32_(0x00)                                       /*  (SILEX_RNG_CONTROL_HWCONFIG) Hardware configuration register.  Reset Value */

#define SILEX_RNG_CONTROL_HWCONFIG_NUMBOFRINGS_Pos _UINT32_(0)                                          /* (SILEX_RNG_CONTROL_HWCONFIG) Generic g_NumRings value. Position */
#define SILEX_RNG_CONTROL_HWCONFIG_NUMBOFRINGS_Msk (_UINT32_(0xFF) << SILEX_RNG_CONTROL_HWCONFIG_NUMBOFRINGS_Pos) /* (SILEX_RNG_CONTROL_HWCONFIG) Generic g_NumRings value. Mask */
#define SILEX_RNG_CONTROL_HWCONFIG_NUMBOFRINGS(value) (SILEX_RNG_CONTROL_HWCONFIG_NUMBOFRINGS_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_HWCONFIG_NUMBOFRINGS_Pos)) /* Assignment of value for NUMBOFRINGS in the SILEX_RNG_CONTROL_HWCONFIG register */
#define SILEX_RNG_CONTROL_HWCONFIG_AIS31_Pos  _UINT32_(8)                                          /* (SILEX_RNG_CONTROL_HWCONFIG) Generic g_AIS31 value. Position */
#define SILEX_RNG_CONTROL_HWCONFIG_AIS31_Msk  (_UINT32_(0x1) << SILEX_RNG_CONTROL_HWCONFIG_AIS31_Pos) /* (SILEX_RNG_CONTROL_HWCONFIG) Generic g_AIS31 value. Mask */
#define SILEX_RNG_CONTROL_HWCONFIG_AIS31(value) (SILEX_RNG_CONTROL_HWCONFIG_AIS31_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_HWCONFIG_AIS31_Pos)) /* Assignment of value for AIS31 in the SILEX_RNG_CONTROL_HWCONFIG register */
#define SILEX_RNG_CONTROL_HWCONFIG_AIS31Full_Pos _UINT32_(9)                                          /* (SILEX_RNG_CONTROL_HWCONFIG) Generic g_AIS31Full value. Position */
#define SILEX_RNG_CONTROL_HWCONFIG_AIS31Full_Msk (_UINT32_(0x1) << SILEX_RNG_CONTROL_HWCONFIG_AIS31Full_Pos) /* (SILEX_RNG_CONTROL_HWCONFIG) Generic g_AIS31Full value. Mask */
#define SILEX_RNG_CONTROL_HWCONFIG_AIS31Full(value) (SILEX_RNG_CONTROL_HWCONFIG_AIS31Full_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_HWCONFIG_AIS31Full_Pos)) /* Assignment of value for AIS31Full in the SILEX_RNG_CONTROL_HWCONFIG register */
#define SILEX_RNG_CONTROL_HWCONFIG_Msk        _UINT32_(0x000003FF)                                 /* (SILEX_RNG_CONTROL_HWCONFIG) Register Mask  */

#define SILEX_RNG_CONTROL_HWCONFIG_AIS_Pos    _UINT32_(8)                                          /* (SILEX_RNG_CONTROL_HWCONFIG Position) Generic g_AIS3x value. */
#define SILEX_RNG_CONTROL_HWCONFIG_AIS_Msk    (_UINT32_(0x1) << SILEX_RNG_CONTROL_HWCONFIG_AIS_Pos) /* (SILEX_RNG_CONTROL_HWCONFIG Mask) AIS */
#define SILEX_RNG_CONTROL_HWCONFIG_AIS(value) (SILEX_RNG_CONTROL_HWCONFIG_AIS_Msk & (_UINT32_(value) << SILEX_RNG_CONTROL_HWCONFIG_AIS_Pos)) 

/* -------- SILEX_PK_POINTERS : (SILEX Offset: 0x2000) (R/W 32) Pointers register. -------- */
#define SILEX_PK_POINTERS_RESETVALUE          _UINT32_(0x00)                                       /*  (SILEX_PK_POINTERS) Pointers register.  Reset Value */

#define SILEX_PK_POINTERS_OPPTRA_Pos          _UINT32_(0)                                          /* (SILEX_PK_POINTERS) When executing primitive arithmetic operations, this pointer defines where operand A is located in memory (location 0x0 to 0xF). Position */
#define SILEX_PK_POINTERS_OPPTRA_Msk          (_UINT32_(0xF) << SILEX_PK_POINTERS_OPPTRA_Pos)      /* (SILEX_PK_POINTERS) When executing primitive arithmetic operations, this pointer defines where operand A is located in memory (location 0x0 to 0xF). Mask */
#define SILEX_PK_POINTERS_OPPTRA(value)       (SILEX_PK_POINTERS_OPPTRA_Msk & (_UINT32_(value) << SILEX_PK_POINTERS_OPPTRA_Pos)) /* Assignment of value for OPPTRA in the SILEX_PK_POINTERS register */
#define SILEX_PK_POINTERS_OPPTRB_Pos          _UINT32_(8)                                          /* (SILEX_PK_POINTERS) When executing primitive arithmetic operations, this pointer defines where operand B is located in memory (location 0x0 to 0xF). Position */
#define SILEX_PK_POINTERS_OPPTRB_Msk          (_UINT32_(0xF) << SILEX_PK_POINTERS_OPPTRB_Pos)      /* (SILEX_PK_POINTERS) When executing primitive arithmetic operations, this pointer defines where operand B is located in memory (location 0x0 to 0xF). Mask */
#define SILEX_PK_POINTERS_OPPTRB(value)       (SILEX_PK_POINTERS_OPPTRB_Msk & (_UINT32_(value) << SILEX_PK_POINTERS_OPPTRB_Pos)) /* Assignment of value for OPPTRB in the SILEX_PK_POINTERS register */
#define SILEX_PK_POINTERS_OPPTRC_Pos          _UINT32_(16)                                         /* (SILEX_PK_POINTERS) When executing primitive arithmetic operations, this pointer defines the location (0x0 to 0xF) where the result will be stored in memory. Position */
#define SILEX_PK_POINTERS_OPPTRC_Msk          (_UINT32_(0xF) << SILEX_PK_POINTERS_OPPTRC_Pos)      /* (SILEX_PK_POINTERS) When executing primitive arithmetic operations, this pointer defines the location (0x0 to 0xF) where the result will be stored in memory. Mask */
#define SILEX_PK_POINTERS_OPPTRC(value)       (SILEX_PK_POINTERS_OPPTRC_Msk & (_UINT32_(value) << SILEX_PK_POINTERS_OPPTRC_Pos)) /* Assignment of value for OPPTRC in the SILEX_PK_POINTERS register */
#define SILEX_PK_POINTERS_OPPTRN_Pos          _UINT32_(24)                                         /* (SILEX_PK_POINTERS) When executing primitive arithmetic operations, this pointer defines the location where the modulus is located in memory (location 0x0 to 0xF). Position */
#define SILEX_PK_POINTERS_OPPTRN_Msk          (_UINT32_(0xF) << SILEX_PK_POINTERS_OPPTRN_Pos)      /* (SILEX_PK_POINTERS) When executing primitive arithmetic operations, this pointer defines the location where the modulus is located in memory (location 0x0 to 0xF). Mask */
#define SILEX_PK_POINTERS_OPPTRN(value)       (SILEX_PK_POINTERS_OPPTRN_Msk & (_UINT32_(value) << SILEX_PK_POINTERS_OPPTRN_Pos)) /* Assignment of value for OPPTRN in the SILEX_PK_POINTERS register */
#define SILEX_PK_POINTERS_Msk                 _UINT32_(0x0F0F0F0F)                                 /* (SILEX_PK_POINTERS) Register Mask  */


/* -------- SILEX_PK_COMMAND : (SILEX Offset: 0x2004) (R/W 32) Command register. -------- */
#define SILEX_PK_COMMAND_RESETVALUE           _UINT32_(0x0F)                                       /*  (SILEX_PK_COMMAND) Command register.  Reset Value */

#define SILEX_PK_COMMAND_OPEADDR_Pos          _UINT32_(0)                                          /* (SILEX_PK_COMMAND) This field defines the operation to be performed. See documentation for more details. Position */
#define SILEX_PK_COMMAND_OPEADDR_Msk          (_UINT32_(0x7F) << SILEX_PK_COMMAND_OPEADDR_Pos)     /* (SILEX_PK_COMMAND) This field defines the operation to be performed. See documentation for more details. Mask */
#define SILEX_PK_COMMAND_OPEADDR(value)       (SILEX_PK_COMMAND_OPEADDR_Msk & (_UINT32_(value) << SILEX_PK_COMMAND_OPEADDR_Pos)) /* Assignment of value for OPEADDR in the SILEX_PK_COMMAND register */
#define SILEX_PK_COMMAND_FIELDF_Pos           _UINT32_(7)                                          /* (SILEX_PK_COMMAND) '0': Field is GF(p) '1': Field is GF(2**m) Position */
#define SILEX_PK_COMMAND_FIELDF_Msk           (_UINT32_(0x1) << SILEX_PK_COMMAND_FIELDF_Pos)       /* (SILEX_PK_COMMAND) '0': Field is GF(p) '1': Field is GF(2**m) Mask */
#define SILEX_PK_COMMAND_FIELDF(value)        (SILEX_PK_COMMAND_FIELDF_Msk & (_UINT32_(value) << SILEX_PK_COMMAND_FIELDF_Pos)) /* Assignment of value for FIELDF in the SILEX_PK_COMMAND register */
#define SILEX_PK_COMMAND_OPBYTESM1_Pos        _UINT32_(8)                                          /* (SILEX_PK_COMMAND) This field defines the size (= number of bytes minus one) of the operands for the current operation. Possible values are limited by the maximum supported operand size. Examples: - 0x014 -> ECC on curve K-163 - 0x01F -> ECC on curve P-256 - 0x02F -> ECC on curve P-384 - 0x033 -> ECC on curve K-409 - 0x041 -> ECC on curve P-521 - 0x07F -> 1024-bit RSA - 0x09F -> 1280-bit RSA - 0x1FF -> 4096-bit RSA - 0x3FF -> 8192-bit RSA Position */
#define SILEX_PK_COMMAND_OPBYTESM1_Msk        (_UINT32_(0x3FF) << SILEX_PK_COMMAND_OPBYTESM1_Pos)  /* (SILEX_PK_COMMAND) This field defines the size (= number of bytes minus one) of the operands for the current operation. Possible values are limited by the maximum supported operand size. Examples: - 0x014 -> ECC on curve K-163 - 0x01F -> ECC on curve P-256 - 0x02F -> ECC on curve P-384 - 0x033 -> ECC on curve K-409 - 0x041 -> ECC on curve P-521 - 0x07F -> 1024-bit RSA - 0x09F -> 1280-bit RSA - 0x1FF -> 4096-bit RSA - 0x3FF -> 8192-bit RSA Mask */
#define SILEX_PK_COMMAND_OPBYTESM1(value)     (SILEX_PK_COMMAND_OPBYTESM1_Msk & (_UINT32_(value) << SILEX_PK_COMMAND_OPBYTESM1_Pos)) /* Assignment of value for OPBYTESM1 in the SILEX_PK_COMMAND register */
#define SILEX_PK_COMMAND_RANDMOD_Pos          _UINT32_(19)                                         /* (SILEX_PK_COMMAND) Enable randomization of modulus (counter-measure). Position */
#define SILEX_PK_COMMAND_RANDMOD_Msk          (_UINT32_(0x1) << SILEX_PK_COMMAND_RANDMOD_Pos)      /* (SILEX_PK_COMMAND) Enable randomization of modulus (counter-measure). Mask */
#define SILEX_PK_COMMAND_RANDMOD(value)       (SILEX_PK_COMMAND_RANDMOD_Msk & (_UINT32_(value) << SILEX_PK_COMMAND_RANDMOD_Pos)) /* Assignment of value for RANDMOD in the SILEX_PK_COMMAND register */
#define SILEX_PK_COMMAND_SELCURVE_Pos         _UINT32_(20)                                         /* (SILEX_PK_COMMAND) Enable accelerator for specific curve modulus: 0x0: No acceleration (default) 0x1: P256 0x2: P384 0x3: P521 0x4: P192 0x5: Curve25519 0x6: Ed25519 This field has no effect when the optional acceleration hardware is not included. Position */
#define SILEX_PK_COMMAND_SELCURVE_Msk         (_UINT32_(0x7) << SILEX_PK_COMMAND_SELCURVE_Pos)     /* (SILEX_PK_COMMAND) Enable accelerator for specific curve modulus: 0x0: No acceleration (default) 0x1: P256 0x2: P384 0x3: P521 0x4: P192 0x5: Curve25519 0x6: Ed25519 This field has no effect when the optional acceleration hardware is not included. Mask */
#define SILEX_PK_COMMAND_SELCURVE(value)      (SILEX_PK_COMMAND_SELCURVE_Msk & (_UINT32_(value) << SILEX_PK_COMMAND_SELCURVE_Pos)) /* Assignment of value for SELCURVE in the SILEX_PK_COMMAND register */
#define SILEX_PK_COMMAND_RANDKE_Pos           _UINT32_(24)                                         /* (SILEX_PK_COMMAND) Enable randomization of exponent/scalar (counter-measure). Position */
#define SILEX_PK_COMMAND_RANDKE_Msk           (_UINT32_(0x1) << SILEX_PK_COMMAND_RANDKE_Pos)       /* (SILEX_PK_COMMAND) Enable randomization of exponent/scalar (counter-measure). Mask */
#define SILEX_PK_COMMAND_RANDKE(value)        (SILEX_PK_COMMAND_RANDKE_Msk & (_UINT32_(value) << SILEX_PK_COMMAND_RANDKE_Pos)) /* Assignment of value for RANDKE in the SILEX_PK_COMMAND register */
#define SILEX_PK_COMMAND_RANDPROJ_Pos         _UINT32_(25)                                         /* (SILEX_PK_COMMAND) Enable randomization of projective coordinates (counter-measure). Position */
#define SILEX_PK_COMMAND_RANDPROJ_Msk         (_UINT32_(0x1) << SILEX_PK_COMMAND_RANDPROJ_Pos)     /* (SILEX_PK_COMMAND) Enable randomization of projective coordinates (counter-measure). Mask */
#define SILEX_PK_COMMAND_RANDPROJ(value)      (SILEX_PK_COMMAND_RANDPROJ_Msk & (_UINT32_(value) << SILEX_PK_COMMAND_RANDPROJ_Pos)) /* Assignment of value for RANDPROJ in the SILEX_PK_COMMAND register */
#define SILEX_PK_COMMAND_EDWARDS_Pos          _UINT32_(26)                                         /* (SILEX_PK_COMMAND) Enable Edwards curve (see operation description). Position */
#define SILEX_PK_COMMAND_EDWARDS_Msk          (_UINT32_(0x1) << SILEX_PK_COMMAND_EDWARDS_Pos)      /* (SILEX_PK_COMMAND) Enable Edwards curve (see operation description). Mask */
#define SILEX_PK_COMMAND_EDWARDS(value)       (SILEX_PK_COMMAND_EDWARDS_Msk & (_UINT32_(value) << SILEX_PK_COMMAND_EDWARDS_Pos)) /* Assignment of value for EDWARDS in the SILEX_PK_COMMAND register */
#define SILEX_PK_COMMAND_SWAPBYTES_Pos        _UINT32_(28)                                         /* (SILEX_PK_COMMAND) Swap the bytes on AHB interface: '0': Native format (little endian) '1': Byte swapped (big endian) See also section 4.2.1. This bit must be programmed before writing/reading any data in data memory. Position */
#define SILEX_PK_COMMAND_SWAPBYTES_Msk        (_UINT32_(0x1) << SILEX_PK_COMMAND_SWAPBYTES_Pos)    /* (SILEX_PK_COMMAND) Swap the bytes on AHB interface: '0': Native format (little endian) '1': Byte swapped (big endian) See also section 4.2.1. This bit must be programmed before writing/reading any data in data memory. Mask */
#define SILEX_PK_COMMAND_SWAPBYTES(value)     (SILEX_PK_COMMAND_SWAPBYTES_Msk & (_UINT32_(value) << SILEX_PK_COMMAND_SWAPBYTES_Pos)) /* Assignment of value for SWAPBYTES in the SILEX_PK_COMMAND register */
#define SILEX_PK_COMMAND_FLAGA_Pos            _UINT32_(29)                                         /* (SILEX_PK_COMMAND) See operation description. Position */
#define SILEX_PK_COMMAND_FLAGA_Msk            (_UINT32_(0x1) << SILEX_PK_COMMAND_FLAGA_Pos)        /* (SILEX_PK_COMMAND) See operation description. Mask */
#define SILEX_PK_COMMAND_FLAGA(value)         (SILEX_PK_COMMAND_FLAGA_Msk & (_UINT32_(value) << SILEX_PK_COMMAND_FLAGA_Pos)) /* Assignment of value for FLAGA in the SILEX_PK_COMMAND register */
#define SILEX_PK_COMMAND_FLAGB_Pos            _UINT32_(30)                                         /* (SILEX_PK_COMMAND) See operation description. Position */
#define SILEX_PK_COMMAND_FLAGB_Msk            (_UINT32_(0x1) << SILEX_PK_COMMAND_FLAGB_Pos)        /* (SILEX_PK_COMMAND) See operation description. Mask */
#define SILEX_PK_COMMAND_FLAGB(value)         (SILEX_PK_COMMAND_FLAGB_Msk & (_UINT32_(value) << SILEX_PK_COMMAND_FLAGB_Pos)) /* Assignment of value for FLAGB in the SILEX_PK_COMMAND register */
#define SILEX_PK_COMMAND_CALCR2_Pos           _UINT32_(31)                                         /* (SILEX_PK_COMMAND) This bit indicates if the IP has to calculate R**2 mod N for the next operation. This bit must be set to '1' when a new prime number has been programmed. This bit is used for primitive operations and ignored for the other operations. '0': don't recalculate R**2 mod N '1': re-calculate R**2 mod N Position */
#define SILEX_PK_COMMAND_CALCR2_Msk           (_UINT32_(0x1) << SILEX_PK_COMMAND_CALCR2_Pos)       /* (SILEX_PK_COMMAND) This bit indicates if the IP has to calculate R**2 mod N for the next operation. This bit must be set to '1' when a new prime number has been programmed. This bit is used for primitive operations and ignored for the other operations. '0': don't recalculate R**2 mod N '1': re-calculate R**2 mod N Mask */
#define SILEX_PK_COMMAND_CALCR2(value)        (SILEX_PK_COMMAND_CALCR2_Msk & (_UINT32_(value) << SILEX_PK_COMMAND_CALCR2_Pos)) /* Assignment of value for CALCR2 in the SILEX_PK_COMMAND register */
#define SILEX_PK_COMMAND_Msk                  _UINT32_(0xF77BFFFF)                                 /* (SILEX_PK_COMMAND) Register Mask  */

#define SILEX_PK_COMMAND_CALCR_Pos            _UINT32_(31)                                         /* (SILEX_PK_COMMAND Position) This bit indicates if the IP has to calculate R**2 mod N for the next operation. This bit must be set to 'x' when a new prime number has been programmed. This bit is used for primitive operations and ignored for the other operations. 'x': don't recalculate R**2 mod N 'x': re-calculate R**2 mod N */
#define SILEX_PK_COMMAND_CALCR_Msk            (_UINT32_(0x1) << SILEX_PK_COMMAND_CALCR_Pos)        /* (SILEX_PK_COMMAND Mask) CALCR */
#define SILEX_PK_COMMAND_CALCR(value)         (SILEX_PK_COMMAND_CALCR_Msk & (_UINT32_(value) << SILEX_PK_COMMAND_CALCR_Pos)) 

/* -------- SILEX_PK_CONTROL : (SILEX Offset: 0x2008) ( /W 32) Command register. -------- */
#define SILEX_PK_CONTROL_RESETVALUE           _UINT32_(0x00)                                       /*  (SILEX_PK_CONTROL) Command register.  Reset Value */

#define SILEX_PK_CONTROL_START_Pos            _UINT32_(0)                                          /* (SILEX_PK_CONTROL) Writing a '1' starts the processing. Position */
#define SILEX_PK_CONTROL_START_Msk            (_UINT32_(0x1) << SILEX_PK_CONTROL_START_Pos)        /* (SILEX_PK_CONTROL) Writing a '1' starts the processing. Mask */
#define SILEX_PK_CONTROL_START(value)         (SILEX_PK_CONTROL_START_Msk & (_UINT32_(value) << SILEX_PK_CONTROL_START_Pos)) /* Assignment of value for START in the SILEX_PK_CONTROL register */
#define SILEX_PK_CONTROL_CLEARIRQ_Pos         _UINT32_(1)                                          /* (SILEX_PK_CONTROL) Writing a '1' clears the IRQ output. Position */
#define SILEX_PK_CONTROL_CLEARIRQ_Msk         (_UINT32_(0x1) << SILEX_PK_CONTROL_CLEARIRQ_Pos)     /* (SILEX_PK_CONTROL) Writing a '1' clears the IRQ output. Mask */
#define SILEX_PK_CONTROL_CLEARIRQ(value)      (SILEX_PK_CONTROL_CLEARIRQ_Msk & (_UINT32_(value) << SILEX_PK_CONTROL_CLEARIRQ_Pos)) /* Assignment of value for CLEARIRQ in the SILEX_PK_CONTROL register */
#define SILEX_PK_CONTROL_Msk                  _UINT32_(0x00000003)                                 /* (SILEX_PK_CONTROL) Register Mask  */


/* -------- SILEX_PK_STATUS : (SILEX Offset: 0x200C) ( R/ 32) Status register. -------- */
#define SILEX_PK_STATUS_RESETVALUE            _UINT32_(0x00)                                       /*  (SILEX_PK_STATUS) Status register.  Reset Value */

#define SILEX_PK_STATUS_ERRORFLAGS_Pos        _UINT32_(4)                                          /* (SILEX_PK_STATUS) These bits indicate an error condition. They are updated at the end of the operation. They are cleared when starting a new operation. See documentation for more details. Position */
#define SILEX_PK_STATUS_ERRORFLAGS_Msk        (_UINT32_(0xFFF) << SILEX_PK_STATUS_ERRORFLAGS_Pos)  /* (SILEX_PK_STATUS) These bits indicate an error condition. They are updated at the end of the operation. They are cleared when starting a new operation. See documentation for more details. Mask */
#define SILEX_PK_STATUS_ERRORFLAGS(value)     (SILEX_PK_STATUS_ERRORFLAGS_Msk & (_UINT32_(value) << SILEX_PK_STATUS_ERRORFLAGS_Pos)) /* Assignment of value for ERRORFLAGS in the SILEX_PK_STATUS register */
#define SILEX_PK_STATUS_PK_BUSY_Pos           _UINT32_(16)                                         /* (SILEX_PK_STATUS) This bit reflects the BUSY output value. It is set when the operation starts and it is cleared when the operation is finished. Position */
#define SILEX_PK_STATUS_PK_BUSY_Msk           (_UINT32_(0x1) << SILEX_PK_STATUS_PK_BUSY_Pos)       /* (SILEX_PK_STATUS) This bit reflects the BUSY output value. It is set when the operation starts and it is cleared when the operation is finished. Mask */
#define SILEX_PK_STATUS_PK_BUSY(value)        (SILEX_PK_STATUS_PK_BUSY_Msk & (_UINT32_(value) << SILEX_PK_STATUS_PK_BUSY_Pos)) /* Assignment of value for PK_BUSY in the SILEX_PK_STATUS register */
#define SILEX_PK_STATUS_INTRPTSTATUS_Pos      _UINT32_(17)                                         /* (SILEX_PK_STATUS) This bit reflects the IRQ output value. It is set when the operation is finished. It is cleared when the CPU writes the bit 1 of Control Register. Position */
#define SILEX_PK_STATUS_INTRPTSTATUS_Msk      (_UINT32_(0x1) << SILEX_PK_STATUS_INTRPTSTATUS_Pos)  /* (SILEX_PK_STATUS) This bit reflects the IRQ output value. It is set when the operation is finished. It is cleared when the CPU writes the bit 1 of Control Register. Mask */
#define SILEX_PK_STATUS_INTRPTSTATUS(value)   (SILEX_PK_STATUS_INTRPTSTATUS_Msk & (_UINT32_(value) << SILEX_PK_STATUS_INTRPTSTATUS_Pos)) /* Assignment of value for INTRPTSTATUS in the SILEX_PK_STATUS register */
#define SILEX_PK_STATUS_FAILPTR_Pos           _UINT32_(24)                                         /* (SILEX_PK_STATUS) These bits indicate which data location generated the error flag. They are not available for all error flags. Position */
#define SILEX_PK_STATUS_FAILPTR_Msk           (_UINT32_(0x1F) << SILEX_PK_STATUS_FAILPTR_Pos)      /* (SILEX_PK_STATUS) These bits indicate which data location generated the error flag. They are not available for all error flags. Mask */
#define SILEX_PK_STATUS_FAILPTR(value)        (SILEX_PK_STATUS_FAILPTR_Msk & (_UINT32_(value) << SILEX_PK_STATUS_FAILPTR_Pos)) /* Assignment of value for FAILPTR in the SILEX_PK_STATUS register */
#define SILEX_PK_STATUS_Msk                   _UINT32_(0x1F03FFF0)                                 /* (SILEX_PK_STATUS) Register Mask  */


/* -------- SILEX_PK_TIMER : (SILEX Offset: 0x2014) (R/W 32) Timer register. -------- */
#define SILEX_PK_TIMER_RESETVALUE             _UINT32_(0x00)                                       /*  (SILEX_PK_TIMER) Timer register.  Reset Value */

#define SILEX_PK_TIMER_TIMER_Pos              _UINT32_(0)                                          /* (SILEX_PK_TIMER) Number of core clock cycles. Position */
#define SILEX_PK_TIMER_TIMER_Msk              (_UINT32_(0xFFFFFFFF) << SILEX_PK_TIMER_TIMER_Pos)   /* (SILEX_PK_TIMER) Number of core clock cycles. Mask */
#define SILEX_PK_TIMER_TIMER(value)           (SILEX_PK_TIMER_TIMER_Msk & (_UINT32_(value) << SILEX_PK_TIMER_TIMER_Pos)) /* Assignment of value for TIMER in the SILEX_PK_TIMER register */
#define SILEX_PK_TIMER_Msk                    _UINT32_(0xFFFFFFFF)                                 /* (SILEX_PK_TIMER) Register Mask  */


/* -------- SILEX_PK_HWCONFIG : (SILEX Offset: 0x2018) ( R/ 32) Hardware configuration register. -------- */
#define SILEX_PK_HWCONFIG_RESETVALUE          _UINT32_(0x00)                                       /*  (SILEX_PK_HWCONFIG) Hardware configuration register.  Reset Value */

#define SILEX_PK_HWCONFIG_MAXOPSIZE_Pos       _UINT32_(0)                                          /* (SILEX_PK_HWCONFIG) Maximum operand size (number of bytes). Position */
#define SILEX_PK_HWCONFIG_MAXOPSIZE_Msk       (_UINT32_(0xFFF) << SILEX_PK_HWCONFIG_MAXOPSIZE_Pos) /* (SILEX_PK_HWCONFIG) Maximum operand size (number of bytes). Mask */
#define SILEX_PK_HWCONFIG_MAXOPSIZE(value)    (SILEX_PK_HWCONFIG_MAXOPSIZE_Msk & (_UINT32_(value) << SILEX_PK_HWCONFIG_MAXOPSIZE_Pos)) /* Assignment of value for MAXOPSIZE in the SILEX_PK_HWCONFIG register */
#define SILEX_PK_HWCONFIG_NBMULT_Pos          _UINT32_(12)                                         /* (SILEX_PK_HWCONFIG) Number of multipliers: 0x0: 1 multiplier 0x1: 4 multipliers 0x2: 16 multipliers 0x4: 64 multipliers 0x8: 256 multipliers Position */
#define SILEX_PK_HWCONFIG_NBMULT_Msk          (_UINT32_(0xF) << SILEX_PK_HWCONFIG_NBMULT_Pos)      /* (SILEX_PK_HWCONFIG) Number of multipliers: 0x0: 1 multiplier 0x1: 4 multipliers 0x2: 16 multipliers 0x4: 64 multipliers 0x8: 256 multipliers Mask */
#define SILEX_PK_HWCONFIG_NBMULT(value)       (SILEX_PK_HWCONFIG_NBMULT_Msk & (_UINT32_(value) << SILEX_PK_HWCONFIG_NBMULT_Pos)) /* Assignment of value for NBMULT in the SILEX_PK_HWCONFIG register */
#define SILEX_PK_HWCONFIG_PRIMEFIELD_Pos      _UINT32_(16)                                         /* (SILEX_PK_HWCONFIG) Support prime field. Position */
#define SILEX_PK_HWCONFIG_PRIMEFIELD_Msk      (_UINT32_(0x1) << SILEX_PK_HWCONFIG_PRIMEFIELD_Pos)  /* (SILEX_PK_HWCONFIG) Support prime field. Mask */
#define SILEX_PK_HWCONFIG_PRIMEFIELD(value)   (SILEX_PK_HWCONFIG_PRIMEFIELD_Msk & (_UINT32_(value) << SILEX_PK_HWCONFIG_PRIMEFIELD_Pos)) /* Assignment of value for PRIMEFIELD in the SILEX_PK_HWCONFIG register */
#define SILEX_PK_HWCONFIG_BINARYFIELD_Pos     _UINT32_(17)                                         /* (SILEX_PK_HWCONFIG) Support binary field. Position */
#define SILEX_PK_HWCONFIG_BINARYFIELD_Msk     (_UINT32_(0x1) << SILEX_PK_HWCONFIG_BINARYFIELD_Pos) /* (SILEX_PK_HWCONFIG) Support binary field. Mask */
#define SILEX_PK_HWCONFIG_BINARYFIELD(value)  (SILEX_PK_HWCONFIG_BINARYFIELD_Msk & (_UINT32_(value) << SILEX_PK_HWCONFIG_BINARYFIELD_Pos)) /* Assignment of value for BINARYFIELD in the SILEX_PK_HWCONFIG register */
#define SILEX_PK_HWCONFIG_P256_Pos            _UINT32_(20)                                         /* (SILEX_PK_HWCONFIG) Support ECC P256 acceleration. Position */
#define SILEX_PK_HWCONFIG_P256_Msk            (_UINT32_(0x1) << SILEX_PK_HWCONFIG_P256_Pos)        /* (SILEX_PK_HWCONFIG) Support ECC P256 acceleration. Mask */
#define SILEX_PK_HWCONFIG_P256(value)         (SILEX_PK_HWCONFIG_P256_Msk & (_UINT32_(value) << SILEX_PK_HWCONFIG_P256_Pos)) /* Assignment of value for P256 in the SILEX_PK_HWCONFIG register */
#define SILEX_PK_HWCONFIG_P384_Pos            _UINT32_(21)                                         /* (SILEX_PK_HWCONFIG) Support ECC P384 acceleration. Position */
#define SILEX_PK_HWCONFIG_P384_Msk            (_UINT32_(0x1) << SILEX_PK_HWCONFIG_P384_Pos)        /* (SILEX_PK_HWCONFIG) Support ECC P384 acceleration. Mask */
#define SILEX_PK_HWCONFIG_P384(value)         (SILEX_PK_HWCONFIG_P384_Msk & (_UINT32_(value) << SILEX_PK_HWCONFIG_P384_Pos)) /* Assignment of value for P384 in the SILEX_PK_HWCONFIG register */
#define SILEX_PK_HWCONFIG_P521_Pos            _UINT32_(22)                                         /* (SILEX_PK_HWCONFIG) Support ECC P521 acceleration. Position */
#define SILEX_PK_HWCONFIG_P521_Msk            (_UINT32_(0x1) << SILEX_PK_HWCONFIG_P521_Pos)        /* (SILEX_PK_HWCONFIG) Support ECC P521 acceleration. Mask */
#define SILEX_PK_HWCONFIG_P521(value)         (SILEX_PK_HWCONFIG_P521_Msk & (_UINT32_(value) << SILEX_PK_HWCONFIG_P521_Pos)) /* Assignment of value for P521 in the SILEX_PK_HWCONFIG register */
#define SILEX_PK_HWCONFIG_P192_Pos            _UINT32_(23)                                         /* (SILEX_PK_HWCONFIG) Support ECC P192 acceleration. Position */
#define SILEX_PK_HWCONFIG_P192_Msk            (_UINT32_(0x1) << SILEX_PK_HWCONFIG_P192_Pos)        /* (SILEX_PK_HWCONFIG) Support ECC P192 acceleration. Mask */
#define SILEX_PK_HWCONFIG_P192(value)         (SILEX_PK_HWCONFIG_P192_Msk & (_UINT32_(value) << SILEX_PK_HWCONFIG_P192_Pos)) /* Assignment of value for P192 in the SILEX_PK_HWCONFIG register */
#define SILEX_PK_HWCONFIG_X25519_Pos          _UINT32_(24)                                         /* (SILEX_PK_HWCONFIG) Support Curve25519/Ed25519 acceleration. Position */
#define SILEX_PK_HWCONFIG_X25519_Msk          (_UINT32_(0x1) << SILEX_PK_HWCONFIG_X25519_Pos)      /* (SILEX_PK_HWCONFIG) Support Curve25519/Ed25519 acceleration. Mask */
#define SILEX_PK_HWCONFIG_X25519(value)       (SILEX_PK_HWCONFIG_X25519_Msk & (_UINT32_(value) << SILEX_PK_HWCONFIG_X25519_Pos)) /* Assignment of value for X25519 in the SILEX_PK_HWCONFIG register */
#define SILEX_PK_HWCONFIG_AHBMASTER_Pos       _UINT32_(25)                                         /* (SILEX_PK_HWCONFIG) '0': Memory access through AHB Slave and internally in the PKE.                                                                             '1': Memory access through AHB Master, outside the PKE. Position */
#define SILEX_PK_HWCONFIG_AHBMASTER_Msk       (_UINT32_(0x1) << SILEX_PK_HWCONFIG_AHBMASTER_Pos)   /* (SILEX_PK_HWCONFIG) '0': Memory access through AHB Slave and internally in the PKE.                                                                             '1': Memory access through AHB Master, outside the PKE. Mask */
#define SILEX_PK_HWCONFIG_AHBMASTER(value)    (SILEX_PK_HWCONFIG_AHBMASTER_Msk & (_UINT32_(value) << SILEX_PK_HWCONFIG_AHBMASTER_Pos)) /* Assignment of value for AHBMASTER in the SILEX_PK_HWCONFIG register */
#define SILEX_PK_HWCONFIG_DISABLESMX_Pos      _UINT32_(29)                                         /* (SILEX_PK_HWCONFIG) State of DisableSMx input (high when SM2/SM9 operations are disabled). Position */
#define SILEX_PK_HWCONFIG_DISABLESMX_Msk      (_UINT32_(0x1) << SILEX_PK_HWCONFIG_DISABLESMX_Pos)  /* (SILEX_PK_HWCONFIG) State of DisableSMx input (high when SM2/SM9 operations are disabled). Mask */
#define SILEX_PK_HWCONFIG_DISABLESMX(value)   (SILEX_PK_HWCONFIG_DISABLESMX_Msk & (_UINT32_(value) << SILEX_PK_HWCONFIG_DISABLESMX_Pos)) /* Assignment of value for DISABLESMX in the SILEX_PK_HWCONFIG register */
#define SILEX_PK_HWCONFIG_DISABLECLRMEM_Pos   _UINT32_(30)                                         /* (SILEX_PK_HWCONFIG) State of DisableClrMem input (high when automatic clear of the RAM after reset is disabled). Position */
#define SILEX_PK_HWCONFIG_DISABLECLRMEM_Msk   (_UINT32_(0x1) << SILEX_PK_HWCONFIG_DISABLECLRMEM_Pos) /* (SILEX_PK_HWCONFIG) State of DisableClrMem input (high when automatic clear of the RAM after reset is disabled). Mask */
#define SILEX_PK_HWCONFIG_DISABLECLRMEM(value) (SILEX_PK_HWCONFIG_DISABLECLRMEM_Msk & (_UINT32_(value) << SILEX_PK_HWCONFIG_DISABLECLRMEM_Pos)) /* Assignment of value for DISABLECLRMEM in the SILEX_PK_HWCONFIG register */
#define SILEX_PK_HWCONFIG_DISABLECM_Pos       _UINT32_(31)                                         /* (SILEX_PK_HWCONFIG) State of DisableCM input (high when counter-measures are disabled). Position */
#define SILEX_PK_HWCONFIG_DISABLECM_Msk       (_UINT32_(0x1) << SILEX_PK_HWCONFIG_DISABLECM_Pos)   /* (SILEX_PK_HWCONFIG) State of DisableCM input (high when counter-measures are disabled). Mask */
#define SILEX_PK_HWCONFIG_DISABLECM(value)    (SILEX_PK_HWCONFIG_DISABLECM_Msk & (_UINT32_(value) << SILEX_PK_HWCONFIG_DISABLECM_Pos)) /* Assignment of value for DISABLECM in the SILEX_PK_HWCONFIG register */
#define SILEX_PK_HWCONFIG_Msk                 _UINT32_(0xE3F3FFFF)                                 /* (SILEX_PK_HWCONFIG) Register Mask  */

#define SILEX_PK_HWCONFIG_P_Pos               _UINT32_(20)                                         /* (SILEX_PK_HWCONFIG Position) Support ECC P256 acceleration. */
#define SILEX_PK_HWCONFIG_P_Msk               (_UINT32_(0xF) << SILEX_PK_HWCONFIG_P_Pos)           /* (SILEX_PK_HWCONFIG Mask) P */
#define SILEX_PK_HWCONFIG_P(value)            (SILEX_PK_HWCONFIG_P_Msk & (_UINT32_(value) << SILEX_PK_HWCONFIG_P_Pos)) 
#define SILEX_PK_HWCONFIG_X_Pos               _UINT32_(24)                                         /* (SILEX_PK_HWCONFIG Position) Support Curve255x9/Ed255x9 acceleration. */
#define SILEX_PK_HWCONFIG_X_Msk               (_UINT32_(0x1) << SILEX_PK_HWCONFIG_X_Pos)           /* (SILEX_PK_HWCONFIG Mask) X */
#define SILEX_PK_HWCONFIG_X(value)            (SILEX_PK_HWCONFIG_X_Msk & (_UINT32_(value) << SILEX_PK_HWCONFIG_X_Pos)) 

/* -------- SILEX_PK_OPSIZE : (SILEX Offset: 0x201C) (R/W 32) Operand size register. -------- */
#define SILEX_PK_OPSIZE_RESETVALUE            _UINT32_(0x1000)                                     /*  (SILEX_PK_OPSIZE) Operand size register.  Reset Value */

#define SILEX_PK_OPSIZE_OPSIZE_Pos            _UINT32_(0)                                          /* (SILEX_PK_OPSIZE) Operand size (number of bytes): 0x0100: 256 0x0209: 521 0x0800: 2048 0x0C00: 3072 0x1000: 4096 This register is used when the memory is accessed via AHB Master Position */
#define SILEX_PK_OPSIZE_OPSIZE_Msk            (_UINT32_(0x1FFF) << SILEX_PK_OPSIZE_OPSIZE_Pos)     /* (SILEX_PK_OPSIZE) Operand size (number of bytes): 0x0100: 256 0x0209: 521 0x0800: 2048 0x0C00: 3072 0x1000: 4096 This register is used when the memory is accessed via AHB Master Mask */
#define SILEX_PK_OPSIZE_OPSIZE(value)         (SILEX_PK_OPSIZE_OPSIZE_Msk & (_UINT32_(value) << SILEX_PK_OPSIZE_OPSIZE_Pos)) /* Assignment of value for OPSIZE in the SILEX_PK_OPSIZE register */
#define SILEX_PK_OPSIZE_Msk                   _UINT32_(0x00001FFF)                                 /* (SILEX_PK_OPSIZE) Register Mask  */


/* -------- SILEX_PK_MEMOFFSET : (SILEX Offset: 0x2020) (R/W 32) Memory offset register. -------- */
#define SILEX_PK_MEMOFFSET_RESETVALUE         _UINT32_(0x00)                                       /*  (SILEX_PK_MEMOFFSET) Memory offset register.  Reset Value */

#define SILEX_PK_MEMOFFSET_MEMOFFSET_Pos      _UINT32_(0)                                          /* (SILEX_PK_MEMOFFSET) Memory offset for AHB Master Position */
#define SILEX_PK_MEMOFFSET_MEMOFFSET_Msk      (_UINT32_(0xFFFFFFFF) << SILEX_PK_MEMOFFSET_MEMOFFSET_Pos) /* (SILEX_PK_MEMOFFSET) Memory offset for AHB Master Mask */
#define SILEX_PK_MEMOFFSET_MEMOFFSET(value)   (SILEX_PK_MEMOFFSET_MEMOFFSET_Msk & (_UINT32_(value) << SILEX_PK_MEMOFFSET_MEMOFFSET_Pos)) /* Assignment of value for MEMOFFSET in the SILEX_PK_MEMOFFSET register */
#define SILEX_PK_MEMOFFSET_Msk                _UINT32_(0xFFFFFFFF)                                 /* (SILEX_PK_MEMOFFSET) Register Mask  */


/* -------- SILEX_PK_MICROCODEOFFSET : (SILEX Offset: 0x2024) (R/W 32) MicroCode offset register. -------- */
#define SILEX_PK_MICROCODEOFFSET_RESETVALUE   _UINT32_(0x00)                                       /*  (SILEX_PK_MICROCODEOFFSET) MicroCode offset register.  Reset Value */

#define SILEX_PK_MICROCODEOFFSET_MICROCODEOFFSET_Pos _UINT32_(0)                                          /* (SILEX_PK_MICROCODEOFFSET) MicroCode offset for AHB Master Position */
#define SILEX_PK_MICROCODEOFFSET_MICROCODEOFFSET_Msk (_UINT32_(0xFFFFFFFF) << SILEX_PK_MICROCODEOFFSET_MICROCODEOFFSET_Pos) /* (SILEX_PK_MICROCODEOFFSET) MicroCode offset for AHB Master Mask */
#define SILEX_PK_MICROCODEOFFSET_MICROCODEOFFSET(value) (SILEX_PK_MICROCODEOFFSET_MICROCODEOFFSET_Msk & (_UINT32_(value) << SILEX_PK_MICROCODEOFFSET_MICROCODEOFFSET_Pos)) /* Assignment of value for MICROCODEOFFSET in the SILEX_PK_MICROCODEOFFSET register */
#define SILEX_PK_MICROCODEOFFSET_Msk          _UINT32_(0xFFFFFFFF)                                 /* (SILEX_PK_MICROCODEOFFSET) Register Mask  */


/* -------- SILEX_RNG_DATA_CONTROL : (SILEX Offset: 0x4000) (R/W 32) Control register -------- */
#define SILEX_RNG_DATA_CONTROL_RESETVALUE     _UINT32_(0x00)                                       /*  (SILEX_RNG_DATA_CONTROL) Control register  Reset Value */

#define SILEX_RNG_DATA_CONTROL_ENABLE_Pos     _UINT32_(0)                                          /* (SILEX_RNG_DATA_CONTROL) Enable the NDRNG. Position */
#define SILEX_RNG_DATA_CONTROL_ENABLE_Msk     (_UINT32_(0x1) << SILEX_RNG_DATA_CONTROL_ENABLE_Pos) /* (SILEX_RNG_DATA_CONTROL) Enable the NDRNG. Mask */
#define SILEX_RNG_DATA_CONTROL_ENABLE(value)  (SILEX_RNG_DATA_CONTROL_ENABLE_Msk & (_UINT32_(value) << SILEX_RNG_DATA_CONTROL_ENABLE_Pos)) /* Assignment of value for ENABLE in the SILEX_RNG_DATA_CONTROL register */
#define SILEX_RNG_DATA_CONTROL_LFSREN_Pos     _UINT32_(1)                                          /* (SILEX_RNG_DATA_CONTROL) Select between the NDRNG with asynchronous free running oscillators (when '0') and the Pseudo-Random generator with synchronous oscillators for simulation purpose (when '1'). Position */
#define SILEX_RNG_DATA_CONTROL_LFSREN_Msk     (_UINT32_(0x1) << SILEX_RNG_DATA_CONTROL_LFSREN_Pos) /* (SILEX_RNG_DATA_CONTROL) Select between the NDRNG with asynchronous free running oscillators (when '0') and the Pseudo-Random generator with synchronous oscillators for simulation purpose (when '1'). Mask */
#define SILEX_RNG_DATA_CONTROL_LFSREN(value)  (SILEX_RNG_DATA_CONTROL_LFSREN_Msk & (_UINT32_(value) << SILEX_RNG_DATA_CONTROL_LFSREN_Pos)) /* Assignment of value for LFSREN in the SILEX_RNG_DATA_CONTROL register */
#define SILEX_RNG_DATA_CONTROL_TESTEN_Pos     _UINT32_(2)                                          /* (SILEX_RNG_DATA_CONTROL) Select input for conditioning function and continuous tests: 0: Noise source (normal mode), 1: Test data register (test mode). Position */
#define SILEX_RNG_DATA_CONTROL_TESTEN_Msk     (_UINT32_(0x1) << SILEX_RNG_DATA_CONTROL_TESTEN_Pos) /* (SILEX_RNG_DATA_CONTROL) Select input for conditioning function and continuous tests: 0: Noise source (normal mode), 1: Test data register (test mode). Mask */
#define SILEX_RNG_DATA_CONTROL_TESTEN(value)  (SILEX_RNG_DATA_CONTROL_TESTEN_Msk & (_UINT32_(value) << SILEX_RNG_DATA_CONTROL_TESTEN_Pos)) /* Assignment of value for TESTEN in the SILEX_RNG_DATA_CONTROL register */
#define SILEX_RNG_DATA_CONTROL_CONDBYPASS_Pos _UINT32_(3)                                          /* (SILEX_RNG_DATA_CONTROL) 0: the conditioning function is used (normal mode), 1: the conditioning function is bypassed (to observe entropy source directly). Position */
#define SILEX_RNG_DATA_CONTROL_CONDBYPASS_Msk (_UINT32_(0x1) << SILEX_RNG_DATA_CONTROL_CONDBYPASS_Pos) /* (SILEX_RNG_DATA_CONTROL) 0: the conditioning function is used (normal mode), 1: the conditioning function is bypassed (to observe entropy source directly). Mask */
#define SILEX_RNG_DATA_CONTROL_CONDBYPASS(value) (SILEX_RNG_DATA_CONTROL_CONDBYPASS_Msk & (_UINT32_(value) << SILEX_RNG_DATA_CONTROL_CONDBYPASS_Pos)) /* Assignment of value for CONDBYPASS in the SILEX_RNG_DATA_CONTROL register */
#define SILEX_RNG_DATA_CONTROL_INTENREP_Pos   _UINT32_(4)                                          /* (SILEX_RNG_DATA_CONTROL) Interrupt enable for Repetition Count Test failure. Position */
#define SILEX_RNG_DATA_CONTROL_INTENREP_Msk   (_UINT32_(0x1) << SILEX_RNG_DATA_CONTROL_INTENREP_Pos) /* (SILEX_RNG_DATA_CONTROL) Interrupt enable for Repetition Count Test failure. Mask */
#define SILEX_RNG_DATA_CONTROL_INTENREP(value) (SILEX_RNG_DATA_CONTROL_INTENREP_Msk & (_UINT32_(value) << SILEX_RNG_DATA_CONTROL_INTENREP_Pos)) /* Assignment of value for INTENREP in the SILEX_RNG_DATA_CONTROL register */
#define SILEX_RNG_DATA_CONTROL_INTENPROP_Pos  _UINT32_(5)                                          /* (SILEX_RNG_DATA_CONTROL) Interrupt enable for Adaptive Proportion Test failure (1024-sample window). Position */
#define SILEX_RNG_DATA_CONTROL_INTENPROP_Msk  (_UINT32_(0x1) << SILEX_RNG_DATA_CONTROL_INTENPROP_Pos) /* (SILEX_RNG_DATA_CONTROL) Interrupt enable for Adaptive Proportion Test failure (1024-sample window). Mask */
#define SILEX_RNG_DATA_CONTROL_INTENPROP(value) (SILEX_RNG_DATA_CONTROL_INTENPROP_Msk & (_UINT32_(value) << SILEX_RNG_DATA_CONTROL_INTENPROP_Pos)) /* Assignment of value for INTENPROP in the SILEX_RNG_DATA_CONTROL register */
#define SILEX_RNG_DATA_CONTROL_INTENFULL_Pos  _UINT32_(7)                                          /* (SILEX_RNG_DATA_CONTROL) Interrupt enable for FIFO full. Position */
#define SILEX_RNG_DATA_CONTROL_INTENFULL_Msk  (_UINT32_(0x1) << SILEX_RNG_DATA_CONTROL_INTENFULL_Pos) /* (SILEX_RNG_DATA_CONTROL) Interrupt enable for FIFO full. Mask */
#define SILEX_RNG_DATA_CONTROL_INTENFULL(value) (SILEX_RNG_DATA_CONTROL_INTENFULL_Msk & (_UINT32_(value) << SILEX_RNG_DATA_CONTROL_INTENFULL_Pos)) /* Assignment of value for INTENFULL in the SILEX_RNG_DATA_CONTROL register */
#define SILEX_RNG_DATA_CONTROL_SOFTRST_Pos    _UINT32_(8)                                          /* (SILEX_RNG_DATA_CONTROL) Software reset: 0: Normal mode, 1: The continuous test, the conditioning function and the FIFO are reset. This bit is not cleared automatically. Position */
#define SILEX_RNG_DATA_CONTROL_SOFTRST_Msk    (_UINT32_(0x1) << SILEX_RNG_DATA_CONTROL_SOFTRST_Pos) /* (SILEX_RNG_DATA_CONTROL) Software reset: 0: Normal mode, 1: The continuous test, the conditioning function and the FIFO are reset. This bit is not cleared automatically. Mask */
#define SILEX_RNG_DATA_CONTROL_SOFTRST(value) (SILEX_RNG_DATA_CONTROL_SOFTRST_Msk & (_UINT32_(value) << SILEX_RNG_DATA_CONTROL_SOFTRST_Pos)) /* Assignment of value for SOFTRST in the SILEX_RNG_DATA_CONTROL register */
#define SILEX_RNG_DATA_CONTROL_INTENPRE_Pos   _UINT32_(9)                                          /* (SILEX_RNG_DATA_CONTROL) Interrupt enable for AIS31 preliminary noise alarm. Position */
#define SILEX_RNG_DATA_CONTROL_INTENPRE_Msk   (_UINT32_(0x1) << SILEX_RNG_DATA_CONTROL_INTENPRE_Pos) /* (SILEX_RNG_DATA_CONTROL) Interrupt enable for AIS31 preliminary noise alarm. Mask */
#define SILEX_RNG_DATA_CONTROL_INTENPRE(value) (SILEX_RNG_DATA_CONTROL_INTENPRE_Msk & (_UINT32_(value) << SILEX_RNG_DATA_CONTROL_INTENPRE_Pos)) /* Assignment of value for INTENPRE in the SILEX_RNG_DATA_CONTROL register */
#define SILEX_RNG_DATA_CONTROL_INTENALM_Pos   _UINT32_(10)                                         /* (SILEX_RNG_DATA_CONTROL) Interrupt enable for AIS31 noise alarm. Position */
#define SILEX_RNG_DATA_CONTROL_INTENALM_Msk   (_UINT32_(0x1) << SILEX_RNG_DATA_CONTROL_INTENALM_Pos) /* (SILEX_RNG_DATA_CONTROL) Interrupt enable for AIS31 noise alarm. Mask */
#define SILEX_RNG_DATA_CONTROL_INTENALM(value) (SILEX_RNG_DATA_CONTROL_INTENALM_Msk & (_UINT32_(value) << SILEX_RNG_DATA_CONTROL_INTENALM_Pos)) /* Assignment of value for INTENALM in the SILEX_RNG_DATA_CONTROL register */
#define SILEX_RNG_DATA_CONTROL_FORCEACTIVEROS_Pos _UINT32_(11)                                         /* (SILEX_RNG_DATA_CONTROL) Force oscillators to run when FIFO is full. Position */
#define SILEX_RNG_DATA_CONTROL_FORCEACTIVEROS_Msk (_UINT32_(0x1) << SILEX_RNG_DATA_CONTROL_FORCEACTIVEROS_Pos) /* (SILEX_RNG_DATA_CONTROL) Force oscillators to run when FIFO is full. Mask */
#define SILEX_RNG_DATA_CONTROL_FORCEACTIVEROS(value) (SILEX_RNG_DATA_CONTROL_FORCEACTIVEROS_Msk & (_UINT32_(value) << SILEX_RNG_DATA_CONTROL_FORCEACTIVEROS_Pos)) /* Assignment of value for FORCEACTIVEROS in the SILEX_RNG_DATA_CONTROL register */
#define SILEX_RNG_DATA_CONTROL_HEALTHTESTBYPASS_Pos _UINT32_(12)                                         /* (SILEX_RNG_DATA_CONTROL) Bypass NIST tests such that the results of the start-up and online test do not affect the FSM state. Position */
#define SILEX_RNG_DATA_CONTROL_HEALTHTESTBYPASS_Msk (_UINT32_(0x1) << SILEX_RNG_DATA_CONTROL_HEALTHTESTBYPASS_Pos) /* (SILEX_RNG_DATA_CONTROL) Bypass NIST tests such that the results of the start-up and online test do not affect the FSM state. Mask */
#define SILEX_RNG_DATA_CONTROL_HEALTHTESTBYPASS(value) (SILEX_RNG_DATA_CONTROL_HEALTHTESTBYPASS_Msk & (_UINT32_(value) << SILEX_RNG_DATA_CONTROL_HEALTHTESTBYPASS_Pos)) /* Assignment of value for HEALTHTESTBYPASS in the SILEX_RNG_DATA_CONTROL register */
#define SILEX_RNG_DATA_CONTROL_AIS31BYPASS_Pos _UINT32_(13)                                         /* (SILEX_RNG_DATA_CONTROL) Bypass AIS31 tests such that the results of the start-up and online tests do not affect the FSM state. Position */
#define SILEX_RNG_DATA_CONTROL_AIS31BYPASS_Msk (_UINT32_(0x1) << SILEX_RNG_DATA_CONTROL_AIS31BYPASS_Pos) /* (SILEX_RNG_DATA_CONTROL) Bypass AIS31 tests such that the results of the start-up and online tests do not affect the FSM state. Mask */
#define SILEX_RNG_DATA_CONTROL_AIS31BYPASS(value) (SILEX_RNG_DATA_CONTROL_AIS31BYPASS_Msk & (_UINT32_(value) << SILEX_RNG_DATA_CONTROL_AIS31BYPASS_Pos)) /* Assignment of value for AIS31BYPASS in the SILEX_RNG_DATA_CONTROL register */
#define SILEX_RNG_DATA_CONTROL_HEALTHTESTSEL_Pos _UINT32_(14)                                         /* (SILEX_RNG_DATA_CONTROL) Select input to health test module: 0: Before conditioning, 1: After conditioning. Position */
#define SILEX_RNG_DATA_CONTROL_HEALTHTESTSEL_Msk (_UINT32_(0x1) << SILEX_RNG_DATA_CONTROL_HEALTHTESTSEL_Pos) /* (SILEX_RNG_DATA_CONTROL) Select input to health test module: 0: Before conditioning, 1: After conditioning. Mask */
#define SILEX_RNG_DATA_CONTROL_HEALTHTESTSEL(value) (SILEX_RNG_DATA_CONTROL_HEALTHTESTSEL_Msk & (_UINT32_(value) << SILEX_RNG_DATA_CONTROL_HEALTHTESTSEL_Pos)) /* Assignment of value for HEALTHTESTSEL in the SILEX_RNG_DATA_CONTROL register */
#define SILEX_RNG_DATA_CONTROL_AIS31TESTSEL_Pos _UINT32_(15)                                         /* (SILEX_RNG_DATA_CONTROL) Select input to the AIS31 test module: 0: Before conditioning, 1: After conditioning. Position */
#define SILEX_RNG_DATA_CONTROL_AIS31TESTSEL_Msk (_UINT32_(0x1) << SILEX_RNG_DATA_CONTROL_AIS31TESTSEL_Pos) /* (SILEX_RNG_DATA_CONTROL) Select input to the AIS31 test module: 0: Before conditioning, 1: After conditioning. Mask */
#define SILEX_RNG_DATA_CONTROL_AIS31TESTSEL(value) (SILEX_RNG_DATA_CONTROL_AIS31TESTSEL_Msk & (_UINT32_(value) << SILEX_RNG_DATA_CONTROL_AIS31TESTSEL_Pos)) /* Assignment of value for AIS31TESTSEL in the SILEX_RNG_DATA_CONTROL register */
#define SILEX_RNG_DATA_CONTROL_NB128BITBLOCKS_Pos _UINT32_(16)                                         /* (SILEX_RNG_DATA_CONTROL) Number of 128 bit blocks used in AES-CBCMAC post-processing. This value cannot be zero. Position */
#define SILEX_RNG_DATA_CONTROL_NB128BITBLOCKS_Msk (_UINT32_(0xF) << SILEX_RNG_DATA_CONTROL_NB128BITBLOCKS_Pos) /* (SILEX_RNG_DATA_CONTROL) Number of 128 bit blocks used in AES-CBCMAC post-processing. This value cannot be zero. Mask */
#define SILEX_RNG_DATA_CONTROL_NB128BITBLOCKS(value) (SILEX_RNG_DATA_CONTROL_NB128BITBLOCKS_Msk & (_UINT32_(value) << SILEX_RNG_DATA_CONTROL_NB128BITBLOCKS_Pos)) /* Assignment of value for NB128BITBLOCKS in the SILEX_RNG_DATA_CONTROL register */
#define SILEX_RNG_DATA_CONTROL_FIFOWRITESTARTUP_Pos _UINT32_(20)                                         /* (SILEX_RNG_DATA_CONTROL) Enable write of the samples in the FIFO during start-up. Position */
#define SILEX_RNG_DATA_CONTROL_FIFOWRITESTARTUP_Msk (_UINT32_(0x1) << SILEX_RNG_DATA_CONTROL_FIFOWRITESTARTUP_Pos) /* (SILEX_RNG_DATA_CONTROL) Enable write of the samples in the FIFO during start-up. Mask */
#define SILEX_RNG_DATA_CONTROL_FIFOWRITESTARTUP(value) (SILEX_RNG_DATA_CONTROL_FIFOWRITESTARTUP_Msk & (_UINT32_(value) << SILEX_RNG_DATA_CONTROL_FIFOWRITESTARTUP_Pos)) /* Assignment of value for FIFOWRITESTARTUP in the SILEX_RNG_DATA_CONTROL register */
#define SILEX_RNG_DATA_CONTROL_Msk            _UINT32_(0x001FFFBF)                                 /* (SILEX_RNG_DATA_CONTROL) Register Mask  */


/* -------- SILEX_RNG_DATA_FIFOLEVEL : (SILEX Offset: 0x4004) (R/W 32) FIFO level register. -------- */
#define SILEX_RNG_DATA_FIFOLEVEL_RESETVALUE   _UINT32_(0x00)                                       /*  (SILEX_RNG_DATA_FIFOLEVEL) FIFO level register.  Reset Value */

#define SILEX_RNG_DATA_FIFOLEVEL_FIFOLEVEL_Pos _UINT32_(0)                                          /* (SILEX_RNG_DATA_FIFOLEVEL) Number of 32 bits words of random available in the FIFO. Any write to this register clears the FullInt flag in the Status register. Position */
#define SILEX_RNG_DATA_FIFOLEVEL_FIFOLEVEL_Msk (_UINT32_(0xFFFFFFFF) << SILEX_RNG_DATA_FIFOLEVEL_FIFOLEVEL_Pos) /* (SILEX_RNG_DATA_FIFOLEVEL) Number of 32 bits words of random available in the FIFO. Any write to this register clears the FullInt flag in the Status register. Mask */
#define SILEX_RNG_DATA_FIFOLEVEL_FIFOLEVEL(value) (SILEX_RNG_DATA_FIFOLEVEL_FIFOLEVEL_Msk & (_UINT32_(value) << SILEX_RNG_DATA_FIFOLEVEL_FIFOLEVEL_Pos)) /* Assignment of value for FIFOLEVEL in the SILEX_RNG_DATA_FIFOLEVEL register */
#define SILEX_RNG_DATA_FIFOLEVEL_Msk          _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_DATA_FIFOLEVEL) Register Mask  */


/* -------- SILEX_RNG_DATA_FIFOTHRESHOLD : (SILEX Offset: 0x4008) (R/W 32) FIFO threshold register. -------- */
#define SILEX_RNG_DATA_FIFOTHRESHOLD_RESETVALUE _UINT32_(0x00)                                       /*  (SILEX_RNG_DATA_FIFOTHRESHOLD) FIFO threshold register.  Reset Value */

#define SILEX_RNG_DATA_FIFOTHRESHOLD_FIFOTHRESHOLD_Pos _UINT32_(0)                                          /* (SILEX_RNG_DATA_FIFOTHRESHOLD) FIFO level below which the module leaves the idle state to refill the FIFO, expressed in number of 128bit blocks. Position */
#define SILEX_RNG_DATA_FIFOTHRESHOLD_FIFOTHRESHOLD_Msk (_UINT32_(0xFFFFFFFF) << SILEX_RNG_DATA_FIFOTHRESHOLD_FIFOTHRESHOLD_Pos) /* (SILEX_RNG_DATA_FIFOTHRESHOLD) FIFO level below which the module leaves the idle state to refill the FIFO, expressed in number of 128bit blocks. Mask */
#define SILEX_RNG_DATA_FIFOTHRESHOLD_FIFOTHRESHOLD(value) (SILEX_RNG_DATA_FIFOTHRESHOLD_FIFOTHRESHOLD_Msk & (_UINT32_(value) << SILEX_RNG_DATA_FIFOTHRESHOLD_FIFOTHRESHOLD_Pos)) /* Assignment of value for FIFOTHRESHOLD in the SILEX_RNG_DATA_FIFOTHRESHOLD register */
#define SILEX_RNG_DATA_FIFOTHRESHOLD_Msk      _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_DATA_FIFOTHRESHOLD) Register Mask  */


/* -------- SILEX_RNG_DATA_FIFODEPTH : (SILEX Offset: 0x400C) ( R/ 32) FIFO depth register. -------- */
#define SILEX_RNG_DATA_FIFODEPTH_RESETVALUE   _UINT32_(0x00)                                       /*  (SILEX_RNG_DATA_FIFODEPTH) FIFO depth register.  Reset Value */

#define SILEX_RNG_DATA_FIFODEPTH_FIFODEPTH_Pos _UINT32_(0)                                          /* (SILEX_RNG_DATA_FIFODEPTH) Maximum number of 32 bits words that can be stored in the FIFO: 2**g_fifodepth. Position */
#define SILEX_RNG_DATA_FIFODEPTH_FIFODEPTH_Msk (_UINT32_(0xFFFFFFFF) << SILEX_RNG_DATA_FIFODEPTH_FIFODEPTH_Pos) /* (SILEX_RNG_DATA_FIFODEPTH) Maximum number of 32 bits words that can be stored in the FIFO: 2**g_fifodepth. Mask */
#define SILEX_RNG_DATA_FIFODEPTH_FIFODEPTH(value) (SILEX_RNG_DATA_FIFODEPTH_FIFODEPTH_Msk & (_UINT32_(value) << SILEX_RNG_DATA_FIFODEPTH_FIFODEPTH_Pos)) /* Assignment of value for FIFODEPTH in the SILEX_RNG_DATA_FIFODEPTH register */
#define SILEX_RNG_DATA_FIFODEPTH_Msk          _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_DATA_FIFODEPTH) Register Mask  */


/* -------- SILEX_RNG_DATA_KEY0 : (SILEX Offset: 0x4010) (R/W 32) Key register (MSB). -------- */
#define SILEX_RNG_DATA_KEY0_RESETVALUE        _UINT32_(0x00)                                       /*  (SILEX_RNG_DATA_KEY0) Key register (MSB).  Reset Value */

#define SILEX_RNG_DATA_KEY0_KEY0_Pos          _UINT32_(0)                                          /* (SILEX_RNG_DATA_KEY0) Key register (MSB). Position */
#define SILEX_RNG_DATA_KEY0_KEY0_Msk          (_UINT32_(0xFFFFFFFF) << SILEX_RNG_DATA_KEY0_KEY0_Pos) /* (SILEX_RNG_DATA_KEY0) Key register (MSB). Mask */
#define SILEX_RNG_DATA_KEY0_KEY0(value)       (SILEX_RNG_DATA_KEY0_KEY0_Msk & (_UINT32_(value) << SILEX_RNG_DATA_KEY0_KEY0_Pos)) /* Assignment of value for KEY0 in the SILEX_RNG_DATA_KEY0 register */
#define SILEX_RNG_DATA_KEY0_Msk               _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_DATA_KEY0) Register Mask  */


/* -------- SILEX_RNG_DATA_KEY1 : (SILEX Offset: 0x4014) (R/W 32) Key register. -------- */
#define SILEX_RNG_DATA_KEY1_RESETVALUE        _UINT32_(0x00)                                       /*  (SILEX_RNG_DATA_KEY1) Key register.  Reset Value */

#define SILEX_RNG_DATA_KEY1_KEY1_Pos          _UINT32_(0)                                          /* (SILEX_RNG_DATA_KEY1) Key register. Position */
#define SILEX_RNG_DATA_KEY1_KEY1_Msk          (_UINT32_(0xFFFFFFFF) << SILEX_RNG_DATA_KEY1_KEY1_Pos) /* (SILEX_RNG_DATA_KEY1) Key register. Mask */
#define SILEX_RNG_DATA_KEY1_KEY1(value)       (SILEX_RNG_DATA_KEY1_KEY1_Msk & (_UINT32_(value) << SILEX_RNG_DATA_KEY1_KEY1_Pos)) /* Assignment of value for KEY1 in the SILEX_RNG_DATA_KEY1 register */
#define SILEX_RNG_DATA_KEY1_Msk               _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_DATA_KEY1) Register Mask  */


/* -------- SILEX_RNG_DATA_KEY2 : (SILEX Offset: 0x4018) (R/W 32) Key register. -------- */
#define SILEX_RNG_DATA_KEY2_RESETVALUE        _UINT32_(0x00)                                       /*  (SILEX_RNG_DATA_KEY2) Key register.  Reset Value */

#define SILEX_RNG_DATA_KEY2_KEY2_Pos          _UINT32_(0)                                          /* (SILEX_RNG_DATA_KEY2) Key register. Position */
#define SILEX_RNG_DATA_KEY2_KEY2_Msk          (_UINT32_(0xFFFFFFFF) << SILEX_RNG_DATA_KEY2_KEY2_Pos) /* (SILEX_RNG_DATA_KEY2) Key register. Mask */
#define SILEX_RNG_DATA_KEY2_KEY2(value)       (SILEX_RNG_DATA_KEY2_KEY2_Msk & (_UINT32_(value) << SILEX_RNG_DATA_KEY2_KEY2_Pos)) /* Assignment of value for KEY2 in the SILEX_RNG_DATA_KEY2 register */
#define SILEX_RNG_DATA_KEY2_Msk               _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_DATA_KEY2) Register Mask  */


/* -------- SILEX_RNG_DATA_KEY3 : (SILEX Offset: 0x401C) (R/W 32) Key register (LSB). -------- */
#define SILEX_RNG_DATA_KEY3_RESETVALUE        _UINT32_(0x00)                                       /*  (SILEX_RNG_DATA_KEY3) Key register (LSB).  Reset Value */

#define SILEX_RNG_DATA_KEY3_KEY3_Pos          _UINT32_(0)                                          /* (SILEX_RNG_DATA_KEY3) Key register (LSB). Position */
#define SILEX_RNG_DATA_KEY3_KEY3_Msk          (_UINT32_(0xFFFFFFFF) << SILEX_RNG_DATA_KEY3_KEY3_Pos) /* (SILEX_RNG_DATA_KEY3) Key register (LSB). Mask */
#define SILEX_RNG_DATA_KEY3_KEY3(value)       (SILEX_RNG_DATA_KEY3_KEY3_Msk & (_UINT32_(value) << SILEX_RNG_DATA_KEY3_KEY3_Pos)) /* Assignment of value for KEY3 in the SILEX_RNG_DATA_KEY3 register */
#define SILEX_RNG_DATA_KEY3_Msk               _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_DATA_KEY3) Register Mask  */


/* -------- SILEX_RNG_DATA_TESTDATA : (SILEX Offset: 0x4020) ( /W 32) Test data register. -------- */
#define SILEX_RNG_DATA_TESTDATA_RESETVALUE    _UINT32_(0x00)                                       /*  (SILEX_RNG_DATA_TESTDATA) Test data register.  Reset Value */

#define SILEX_RNG_DATA_TESTDATA_TESTDATA_Pos  _UINT32_(0)                                          /* (SILEX_RNG_DATA_TESTDATA) Test data register. Position */
#define SILEX_RNG_DATA_TESTDATA_TESTDATA_Msk  (_UINT32_(0xFFFFFFFF) << SILEX_RNG_DATA_TESTDATA_TESTDATA_Pos) /* (SILEX_RNG_DATA_TESTDATA) Test data register. Mask */
#define SILEX_RNG_DATA_TESTDATA_TESTDATA(value) (SILEX_RNG_DATA_TESTDATA_TESTDATA_Msk & (_UINT32_(value) << SILEX_RNG_DATA_TESTDATA_TESTDATA_Pos)) /* Assignment of value for TESTDATA in the SILEX_RNG_DATA_TESTDATA register */
#define SILEX_RNG_DATA_TESTDATA_Msk           _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_DATA_TESTDATA) Register Mask  */


/* -------- SILEX_RNG_DATA_REPEATTHRESHOLD : (SILEX Offset: 0x4024) (R/W 32) Repetition Test Count Cut-Off value. -------- */
#define SILEX_RNG_DATA_REPEATTHRESHOLD_RESETVALUE _UINT32_(0x00)                                       /*  (SILEX_RNG_DATA_REPEATTHRESHOLD) Repetition Test Count Cut-Off value.  Reset Value */

#define SILEX_RNG_DATA_REPEATTHRESHOLD_REPEATTHRESHOLD_Pos _UINT32_(0)                                          /* (SILEX_RNG_DATA_REPEATTHRESHOLD) Repetition Test Count Cut-Off value. Position */
#define SILEX_RNG_DATA_REPEATTHRESHOLD_REPEATTHRESHOLD_Msk (_UINT32_(0xFFFFFFFF) << SILEX_RNG_DATA_REPEATTHRESHOLD_REPEATTHRESHOLD_Pos) /* (SILEX_RNG_DATA_REPEATTHRESHOLD) Repetition Test Count Cut-Off value. Mask */
#define SILEX_RNG_DATA_REPEATTHRESHOLD_REPEATTHRESHOLD(value) (SILEX_RNG_DATA_REPEATTHRESHOLD_REPEATTHRESHOLD_Msk & (_UINT32_(value) << SILEX_RNG_DATA_REPEATTHRESHOLD_REPEATTHRESHOLD_Pos)) /* Assignment of value for REPEATTHRESHOLD in the SILEX_RNG_DATA_REPEATTHRESHOLD register */
#define SILEX_RNG_DATA_REPEATTHRESHOLD_Msk    _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_DATA_REPEATTHRESHOLD) Register Mask  */


/* -------- SILEX_RNG_DATA_PROPTHRESHOLD : (SILEX Offset: 0x4028) (R/W 32) Adaptive Proportion Test (1024-sample window) Cut-Off value. -------- */
#define SILEX_RNG_DATA_PROPTHRESHOLD_RESETVALUE _UINT32_(0x00)                                       /*  (SILEX_RNG_DATA_PROPTHRESHOLD) Adaptive Proportion Test (1024-sample window) Cut-Off value.  Reset Value */

#define SILEX_RNG_DATA_PROPTHRESHOLD_PROPTHRESHOLD_Pos _UINT32_(0)                                          /* (SILEX_RNG_DATA_PROPTHRESHOLD) Adaptive Proportion Test (1024-sample window) Cut-Off value. Position */
#define SILEX_RNG_DATA_PROPTHRESHOLD_PROPTHRESHOLD_Msk (_UINT32_(0xFFFFFFFF) << SILEX_RNG_DATA_PROPTHRESHOLD_PROPTHRESHOLD_Pos) /* (SILEX_RNG_DATA_PROPTHRESHOLD) Adaptive Proportion Test (1024-sample window) Cut-Off value. Mask */
#define SILEX_RNG_DATA_PROPTHRESHOLD_PROPTHRESHOLD(value) (SILEX_RNG_DATA_PROPTHRESHOLD_PROPTHRESHOLD_Msk & (_UINT32_(value) << SILEX_RNG_DATA_PROPTHRESHOLD_PROPTHRESHOLD_Pos)) /* Assignment of value for PROPTHRESHOLD in the SILEX_RNG_DATA_PROPTHRESHOLD register */
#define SILEX_RNG_DATA_PROPTHRESHOLD_Msk      _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_DATA_PROPTHRESHOLD) Register Mask  */


/* -------- SILEX_RNG_DATA_STATUS : (SILEX Offset: 0x4030) (R/W 32) Status register. -------- */
#define SILEX_RNG_DATA_STATUS_RESETVALUE      _UINT32_(0x00)                                       /*  (SILEX_RNG_DATA_STATUS) Status register.  Reset Value */

#define SILEX_RNG_DATA_STATUS_TESTDATABUSY_Pos _UINT32_(0)                                          /* (SILEX_RNG_DATA_STATUS) High when data written to TestData register is being processed. (see section 4.7) Position */
#define SILEX_RNG_DATA_STATUS_TESTDATABUSY_Msk (_UINT32_(0x1) << SILEX_RNG_DATA_STATUS_TESTDATABUSY_Pos) /* (SILEX_RNG_DATA_STATUS) High when data written to TestData register is being processed. (see section 4.7) Mask */
#define SILEX_RNG_DATA_STATUS_TESTDATABUSY(value) (SILEX_RNG_DATA_STATUS_TESTDATABUSY_Msk & (_UINT32_(value) << SILEX_RNG_DATA_STATUS_TESTDATABUSY_Pos)) /* Assignment of value for TESTDATABUSY in the SILEX_RNG_DATA_STATUS register */
#define SILEX_RNG_DATA_STATUS_STATE_Pos       _UINT32_(1)                                          /* (SILEX_RNG_DATA_STATUS) State of the control FSM: 000: Reset, 001: Startup, 010: Idle (Rings On), 011: Idle (Rings Off), 100: Fill FIFO, 101: Error, 110: Unused, 111: Unused. Position */
#define SILEX_RNG_DATA_STATUS_STATE_Msk       (_UINT32_(0x7) << SILEX_RNG_DATA_STATUS_STATE_Pos)   /* (SILEX_RNG_DATA_STATUS) State of the control FSM: 000: Reset, 001: Startup, 010: Idle (Rings On), 011: Idle (Rings Off), 100: Fill FIFO, 101: Error, 110: Unused, 111: Unused. Mask */
#define SILEX_RNG_DATA_STATUS_STATE(value)    (SILEX_RNG_DATA_STATUS_STATE_Msk & (_UINT32_(value) << SILEX_RNG_DATA_STATUS_STATE_Pos)) /* Assignment of value for STATE in the SILEX_RNG_DATA_STATUS register */
#define SILEX_RNG_DATA_STATUS_REPFAIL_Pos     _UINT32_(4)                                          /* (SILEX_RNG_DATA_STATUS) NIST-800-90B repetition Count Test interrupt status. Position */
#define SILEX_RNG_DATA_STATUS_REPFAIL_Msk     (_UINT32_(0x1) << SILEX_RNG_DATA_STATUS_REPFAIL_Pos) /* (SILEX_RNG_DATA_STATUS) NIST-800-90B repetition Count Test interrupt status. Mask */
#define SILEX_RNG_DATA_STATUS_REPFAIL(value)  (SILEX_RNG_DATA_STATUS_REPFAIL_Msk & (_UINT32_(value) << SILEX_RNG_DATA_STATUS_REPFAIL_Pos)) /* Assignment of value for REPFAIL in the SILEX_RNG_DATA_STATUS register */
#define SILEX_RNG_DATA_STATUS_PROPFAIL_Pos    _UINT32_(5)                                          /* (SILEX_RNG_DATA_STATUS) NIST-800-90B adaptive Proportion Test (1024-sample window) interrupt status. Position */
#define SILEX_RNG_DATA_STATUS_PROPFAIL_Msk    (_UINT32_(0x1) << SILEX_RNG_DATA_STATUS_PROPFAIL_Pos) /* (SILEX_RNG_DATA_STATUS) NIST-800-90B adaptive Proportion Test (1024-sample window) interrupt status. Mask */
#define SILEX_RNG_DATA_STATUS_PROPFAIL(value) (SILEX_RNG_DATA_STATUS_PROPFAIL_Msk & (_UINT32_(value) << SILEX_RNG_DATA_STATUS_PROPFAIL_Pos)) /* Assignment of value for PROPFAIL in the SILEX_RNG_DATA_STATUS register */
#define SILEX_RNG_DATA_STATUS_FULLINT_Pos     _UINT32_(7)                                          /* (SILEX_RNG_DATA_STATUS) FIFO full status. Position */
#define SILEX_RNG_DATA_STATUS_FULLINT_Msk     (_UINT32_(0x1) << SILEX_RNG_DATA_STATUS_FULLINT_Pos) /* (SILEX_RNG_DATA_STATUS) FIFO full status. Mask */
#define SILEX_RNG_DATA_STATUS_FULLINT(value)  (SILEX_RNG_DATA_STATUS_FULLINT_Msk & (_UINT32_(value) << SILEX_RNG_DATA_STATUS_FULLINT_Pos)) /* Assignment of value for FULLINT in the SILEX_RNG_DATA_STATUS register */
#define SILEX_RNG_DATA_STATUS_PREINT_Pos      _UINT32_(8)                                          /* (SILEX_RNG_DATA_STATUS) AIS31 preliminary noise alarm interrupt status. Position */
#define SILEX_RNG_DATA_STATUS_PREINT_Msk      (_UINT32_(0x1) << SILEX_RNG_DATA_STATUS_PREINT_Pos)  /* (SILEX_RNG_DATA_STATUS) AIS31 preliminary noise alarm interrupt status. Mask */
#define SILEX_RNG_DATA_STATUS_PREINT(value)   (SILEX_RNG_DATA_STATUS_PREINT_Msk & (_UINT32_(value) << SILEX_RNG_DATA_STATUS_PREINT_Pos)) /* Assignment of value for PREINT in the SILEX_RNG_DATA_STATUS register */
#define SILEX_RNG_DATA_STATUS_ALMINT_Pos      _UINT32_(9)                                          /* (SILEX_RNG_DATA_STATUS) AIS31 noise alarm interrupt status. Position */
#define SILEX_RNG_DATA_STATUS_ALMINT_Msk      (_UINT32_(0x1) << SILEX_RNG_DATA_STATUS_ALMINT_Pos)  /* (SILEX_RNG_DATA_STATUS) AIS31 noise alarm interrupt status. Mask */
#define SILEX_RNG_DATA_STATUS_ALMINT(value)   (SILEX_RNG_DATA_STATUS_ALMINT_Msk & (_UINT32_(value) << SILEX_RNG_DATA_STATUS_ALMINT_Pos)) /* Assignment of value for ALMINT in the SILEX_RNG_DATA_STATUS register */
#define SILEX_RNG_DATA_STATUS_STARTUPFAIL_Pos _UINT32_(10)                                         /* (SILEX_RNG_DATA_STATUS) Start-up test failure. Position */
#define SILEX_RNG_DATA_STATUS_STARTUPFAIL_Msk (_UINT32_(0x1) << SILEX_RNG_DATA_STATUS_STARTUPFAIL_Pos) /* (SILEX_RNG_DATA_STATUS) Start-up test failure. Mask */
#define SILEX_RNG_DATA_STATUS_STARTUPFAIL(value) (SILEX_RNG_DATA_STATUS_STARTUPFAIL_Msk & (_UINT32_(value) << SILEX_RNG_DATA_STATUS_STARTUPFAIL_Pos)) /* Assignment of value for STARTUPFAIL in the SILEX_RNG_DATA_STATUS register */
#define SILEX_RNG_DATA_STATUS_FIFOACCFAIL_Pos _UINT32_(11)                                         /* (SILEX_RNG_DATA_STATUS) Set when a FIFO data read is performed while the NDRNG is disabled AND has its FIFO empty (FIFOLevel = 0). Position */
#define SILEX_RNG_DATA_STATUS_FIFOACCFAIL_Msk (_UINT32_(0x1) << SILEX_RNG_DATA_STATUS_FIFOACCFAIL_Pos) /* (SILEX_RNG_DATA_STATUS) Set when a FIFO data read is performed while the NDRNG is disabled AND has its FIFO empty (FIFOLevel = 0). Mask */
#define SILEX_RNG_DATA_STATUS_FIFOACCFAIL(value) (SILEX_RNG_DATA_STATUS_FIFOACCFAIL_Msk & (_UINT32_(value) << SILEX_RNG_DATA_STATUS_FIFOACCFAIL_Pos)) /* Assignment of value for FIFOACCFAIL in the SILEX_RNG_DATA_STATUS register */
#define SILEX_RNG_DATA_STATUS_Msk             _UINT32_(0x00000FBF)                                 /* (SILEX_RNG_DATA_STATUS) Register Mask  */


/* -------- SILEX_RNG_DATA_INITWAITVAL : (SILEX Offset: 0x4034) (R/W 32) Initial wait counter value. -------- */
#define SILEX_RNG_DATA_INITWAITVAL_RESETVALUE _UINT32_(0xFFFF)                                     /*  (SILEX_RNG_DATA_INITWAITVAL) Initial wait counter value.  Reset Value */

#define SILEX_RNG_DATA_INITWAITVAL_INITWAITVAL_Pos _UINT32_(0)                                          /* (SILEX_RNG_DATA_INITWAITVAL) Number of clock cycles to wait before sampling data from the noise source. Position */
#define SILEX_RNG_DATA_INITWAITVAL_INITWAITVAL_Msk (_UINT32_(0xFFFF) << SILEX_RNG_DATA_INITWAITVAL_INITWAITVAL_Pos) /* (SILEX_RNG_DATA_INITWAITVAL) Number of clock cycles to wait before sampling data from the noise source. Mask */
#define SILEX_RNG_DATA_INITWAITVAL_INITWAITVAL(value) (SILEX_RNG_DATA_INITWAITVAL_INITWAITVAL_Msk & (_UINT32_(value) << SILEX_RNG_DATA_INITWAITVAL_INITWAITVAL_Pos)) /* Assignment of value for INITWAITVAL in the SILEX_RNG_DATA_INITWAITVAL register */
#define SILEX_RNG_DATA_INITWAITVAL_Msk        _UINT32_(0x0000FFFF)                                 /* (SILEX_RNG_DATA_INITWAITVAL) Register Mask  */


/* -------- SILEX_RNG_DATA_DISABLEOSC0 : (SILEX Offset: 0x4038) (R/W 32) Disable oscillator rings #0 to #31. -------- */
#define SILEX_RNG_DATA_DISABLEOSC0_RESETVALUE _UINT32_(0x00)                                       /*  (SILEX_RNG_DATA_DISABLEOSC0) Disable oscillator rings #0 to #31.  Reset Value */

#define SILEX_RNG_DATA_DISABLEOSC0_DISABLEOSC0_Pos _UINT32_(0)                                          /* (SILEX_RNG_DATA_DISABLEOSC0) Disable oscillator rings #0 to #31. Position */
#define SILEX_RNG_DATA_DISABLEOSC0_DISABLEOSC0_Msk (_UINT32_(0xFFFFFFFF) << SILEX_RNG_DATA_DISABLEOSC0_DISABLEOSC0_Pos) /* (SILEX_RNG_DATA_DISABLEOSC0) Disable oscillator rings #0 to #31. Mask */
#define SILEX_RNG_DATA_DISABLEOSC0_DISABLEOSC0(value) (SILEX_RNG_DATA_DISABLEOSC0_DISABLEOSC0_Msk & (_UINT32_(value) << SILEX_RNG_DATA_DISABLEOSC0_DISABLEOSC0_Pos)) /* Assignment of value for DISABLEOSC0 in the SILEX_RNG_DATA_DISABLEOSC0 register */
#define SILEX_RNG_DATA_DISABLEOSC0_Msk        _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_DATA_DISABLEOSC0) Register Mask  */


/* -------- SILEX_RNG_DATA_DISABLEOSC1 : (SILEX Offset: 0x403C) (R/W 32) Disable oscillator rings #32 to #63. -------- */
#define SILEX_RNG_DATA_DISABLEOSC1_RESETVALUE _UINT32_(0x00)                                       /*  (SILEX_RNG_DATA_DISABLEOSC1) Disable oscillator rings #32 to #63.  Reset Value */

#define SILEX_RNG_DATA_DISABLEOSC1_DISABLEOSC1_Pos _UINT32_(0)                                          /* (SILEX_RNG_DATA_DISABLEOSC1) Disable oscillator rings #32 to #63. Position */
#define SILEX_RNG_DATA_DISABLEOSC1_DISABLEOSC1_Msk (_UINT32_(0xFFFFFFFF) << SILEX_RNG_DATA_DISABLEOSC1_DISABLEOSC1_Pos) /* (SILEX_RNG_DATA_DISABLEOSC1) Disable oscillator rings #32 to #63. Mask */
#define SILEX_RNG_DATA_DISABLEOSC1_DISABLEOSC1(value) (SILEX_RNG_DATA_DISABLEOSC1_DISABLEOSC1_Msk & (_UINT32_(value) << SILEX_RNG_DATA_DISABLEOSC1_DISABLEOSC1_Pos)) /* Assignment of value for DISABLEOSC1 in the SILEX_RNG_DATA_DISABLEOSC1 register */
#define SILEX_RNG_DATA_DISABLEOSC1_Msk        _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_DATA_DISABLEOSC1) Register Mask  */


/* -------- SILEX_RNG_DATA_SWOFFTMRVAL : (SILEX Offset: 0x4040) (R/W 32) Switch off timer value. -------- */
#define SILEX_RNG_DATA_SWOFFTMRVAL_RESETVALUE _UINT32_(0x00)                                       /*  (SILEX_RNG_DATA_SWOFFTMRVAL) Switch off timer value.  Reset Value */

#define SILEX_RNG_DATA_SWOFFTMRVAL_SWOFFTMRVAL_Pos _UINT32_(0)                                          /* (SILEX_RNG_DATA_SWOFFTMRVAL) Number of clk cycles to wait before stopping the rings after the FIFO is full. Position */
#define SILEX_RNG_DATA_SWOFFTMRVAL_SWOFFTMRVAL_Msk (_UINT32_(0xFFFF) << SILEX_RNG_DATA_SWOFFTMRVAL_SWOFFTMRVAL_Pos) /* (SILEX_RNG_DATA_SWOFFTMRVAL) Number of clk cycles to wait before stopping the rings after the FIFO is full. Mask */
#define SILEX_RNG_DATA_SWOFFTMRVAL_SWOFFTMRVAL(value) (SILEX_RNG_DATA_SWOFFTMRVAL_SWOFFTMRVAL_Msk & (_UINT32_(value) << SILEX_RNG_DATA_SWOFFTMRVAL_SWOFFTMRVAL_Pos)) /* Assignment of value for SWOFFTMRVAL in the SILEX_RNG_DATA_SWOFFTMRVAL register */
#define SILEX_RNG_DATA_SWOFFTMRVAL_Msk        _UINT32_(0x0000FFFF)                                 /* (SILEX_RNG_DATA_SWOFFTMRVAL) Register Mask  */


/* -------- SILEX_RNG_DATA_CLKDIV : (SILEX Offset: 0x4044) (R/W 32) Sample clock divider. -------- */
#define SILEX_RNG_DATA_CLKDIV_RESETVALUE      _UINT32_(0x00)                                       /*  (SILEX_RNG_DATA_CLKDIV) Sample clock divider.  Reset Value */

#define SILEX_RNG_DATA_CLKDIV_CLKDIV_Pos      _UINT32_(0)                                          /* (SILEX_RNG_DATA_CLKDIV) Sample clock divider. The frequency at which the outputs of the rings are sampled is given by: Fs=Fpclk/(ClkDiv+1). Position */
#define SILEX_RNG_DATA_CLKDIV_CLKDIV_Msk      (_UINT32_(0xFF) << SILEX_RNG_DATA_CLKDIV_CLKDIV_Pos) /* (SILEX_RNG_DATA_CLKDIV) Sample clock divider. The frequency at which the outputs of the rings are sampled is given by: Fs=Fpclk/(ClkDiv+1). Mask */
#define SILEX_RNG_DATA_CLKDIV_CLKDIV(value)   (SILEX_RNG_DATA_CLKDIV_CLKDIV_Msk & (_UINT32_(value) << SILEX_RNG_DATA_CLKDIV_CLKDIV_Pos)) /* Assignment of value for CLKDIV in the SILEX_RNG_DATA_CLKDIV register */
#define SILEX_RNG_DATA_CLKDIV_Msk             _UINT32_(0x000000FF)                                 /* (SILEX_RNG_DATA_CLKDIV) Register Mask  */


/* -------- SILEX_RNG_DATA_AIS31CONF0 : (SILEX Offset: 0x4048) (R/W 32) AIS31 configuration register 0. -------- */
#define SILEX_RNG_DATA_AIS31CONF0_RESETVALUE  _UINT32_(0x00)                                       /*  (SILEX_RNG_DATA_AIS31CONF0) AIS31 configuration register 0.  Reset Value */

#define SILEX_RNG_DATA_AIS31CONF0_STARTUPTHRESHOLD_Pos _UINT32_(0)                                          /* (SILEX_RNG_DATA_AIS31CONF0) Start-up test threshold. Position */
#define SILEX_RNG_DATA_AIS31CONF0_STARTUPTHRESHOLD_Msk (_UINT32_(0xFFFF) << SILEX_RNG_DATA_AIS31CONF0_STARTUPTHRESHOLD_Pos) /* (SILEX_RNG_DATA_AIS31CONF0) Start-up test threshold. Mask */
#define SILEX_RNG_DATA_AIS31CONF0_STARTUPTHRESHOLD(value) (SILEX_RNG_DATA_AIS31CONF0_STARTUPTHRESHOLD_Msk & (_UINT32_(value) << SILEX_RNG_DATA_AIS31CONF0_STARTUPTHRESHOLD_Pos)) /* Assignment of value for STARTUPTHRESHOLD in the SILEX_RNG_DATA_AIS31CONF0 register */
#define SILEX_RNG_DATA_AIS31CONF0_ONLINETHRESHOLD_Pos _UINT32_(16)                                         /* (SILEX_RNG_DATA_AIS31CONF0) Online threshold. Position */
#define SILEX_RNG_DATA_AIS31CONF0_ONLINETHRESHOLD_Msk (_UINT32_(0xFFFF) << SILEX_RNG_DATA_AIS31CONF0_ONLINETHRESHOLD_Pos) /* (SILEX_RNG_DATA_AIS31CONF0) Online threshold. Mask */
#define SILEX_RNG_DATA_AIS31CONF0_ONLINETHRESHOLD(value) (SILEX_RNG_DATA_AIS31CONF0_ONLINETHRESHOLD_Msk & (_UINT32_(value) << SILEX_RNG_DATA_AIS31CONF0_ONLINETHRESHOLD_Pos)) /* Assignment of value for ONLINETHRESHOLD in the SILEX_RNG_DATA_AIS31CONF0 register */
#define SILEX_RNG_DATA_AIS31CONF0_Msk         _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_DATA_AIS31CONF0) Register Mask  */


/* -------- SILEX_RNG_DATA_AIS31CONF1 : (SILEX Offset: 0x404C) (R/W 32) AIS31 configuration register 1. -------- */
#define SILEX_RNG_DATA_AIS31CONF1_RESETVALUE  _UINT32_(0x00)                                       /*  (SILEX_RNG_DATA_AIS31CONF1) AIS31 configuration register 1.  Reset Value */

#define SILEX_RNG_DATA_AIS31CONF1_ONLINEREPTHRESHOLD_Pos _UINT32_(0)                                          /* (SILEX_RNG_DATA_AIS31CONF1) Online repeat threshold. Position */
#define SILEX_RNG_DATA_AIS31CONF1_ONLINEREPTHRESHOLD_Msk (_UINT32_(0xFFFF) << SILEX_RNG_DATA_AIS31CONF1_ONLINEREPTHRESHOLD_Pos) /* (SILEX_RNG_DATA_AIS31CONF1) Online repeat threshold. Mask */
#define SILEX_RNG_DATA_AIS31CONF1_ONLINEREPTHRESHOLD(value) (SILEX_RNG_DATA_AIS31CONF1_ONLINEREPTHRESHOLD_Msk & (_UINT32_(value) << SILEX_RNG_DATA_AIS31CONF1_ONLINEREPTHRESHOLD_Pos)) /* Assignment of value for ONLINEREPTHRESHOLD in the SILEX_RNG_DATA_AIS31CONF1 register */
#define SILEX_RNG_DATA_AIS31CONF1_HEXPECTEDVALUE_Pos _UINT32_(16)                                         /* (SILEX_RNG_DATA_AIS31CONF1) Expected history value. Position */
#define SILEX_RNG_DATA_AIS31CONF1_HEXPECTEDVALUE_Msk (_UINT32_(0xFFFF) << SILEX_RNG_DATA_AIS31CONF1_HEXPECTEDVALUE_Pos) /* (SILEX_RNG_DATA_AIS31CONF1) Expected history value. Mask */
#define SILEX_RNG_DATA_AIS31CONF1_HEXPECTEDVALUE(value) (SILEX_RNG_DATA_AIS31CONF1_HEXPECTEDVALUE_Msk & (_UINT32_(value) << SILEX_RNG_DATA_AIS31CONF1_HEXPECTEDVALUE_Pos)) /* Assignment of value for HEXPECTEDVALUE in the SILEX_RNG_DATA_AIS31CONF1 register */
#define SILEX_RNG_DATA_AIS31CONF1_Msk         _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_DATA_AIS31CONF1) Register Mask  */


/* -------- SILEX_RNG_DATA_AIS31CONF2 : (SILEX Offset: 0x4050) (R/W 32) AIS31 configuration register 2. -------- */
#define SILEX_RNG_DATA_AIS31CONF2_RESETVALUE  _UINT32_(0x00)                                       /*  (SILEX_RNG_DATA_AIS31CONF2) AIS31 configuration register 2.  Reset Value */

#define SILEX_RNG_DATA_AIS31CONF2_HMIN_Pos    _UINT32_(0)                                          /* (SILEX_RNG_DATA_AIS31CONF2) Minimum allowed history value. Position */
#define SILEX_RNG_DATA_AIS31CONF2_HMIN_Msk    (_UINT32_(0xFFFF) << SILEX_RNG_DATA_AIS31CONF2_HMIN_Pos) /* (SILEX_RNG_DATA_AIS31CONF2) Minimum allowed history value. Mask */
#define SILEX_RNG_DATA_AIS31CONF2_HMIN(value) (SILEX_RNG_DATA_AIS31CONF2_HMIN_Msk & (_UINT32_(value) << SILEX_RNG_DATA_AIS31CONF2_HMIN_Pos)) /* Assignment of value for HMIN in the SILEX_RNG_DATA_AIS31CONF2 register */
#define SILEX_RNG_DATA_AIS31CONF2_HMAX_Pos    _UINT32_(16)                                         /* (SILEX_RNG_DATA_AIS31CONF2) Maximum allowed history value. Position */
#define SILEX_RNG_DATA_AIS31CONF2_HMAX_Msk    (_UINT32_(0xFFFF) << SILEX_RNG_DATA_AIS31CONF2_HMAX_Pos) /* (SILEX_RNG_DATA_AIS31CONF2) Maximum allowed history value. Mask */
#define SILEX_RNG_DATA_AIS31CONF2_HMAX(value) (SILEX_RNG_DATA_AIS31CONF2_HMAX_Msk & (_UINT32_(value) << SILEX_RNG_DATA_AIS31CONF2_HMAX_Pos)) /* Assignment of value for HMAX in the SILEX_RNG_DATA_AIS31CONF2 register */
#define SILEX_RNG_DATA_AIS31CONF2_Msk         _UINT32_(0xFFFFFFFF)                                 /* (SILEX_RNG_DATA_AIS31CONF2) Register Mask  */


/* -------- SILEX_RNG_DATA_AIS31STATUS : (SILEX Offset: 0x4054) (R/W 32) AIS31 status register. -------- */
#define SILEX_RNG_DATA_AIS31STATUS_RESETVALUE _UINT32_(0x00)                                       /*  (SILEX_RNG_DATA_AIS31STATUS) AIS31 status register.  Reset Value */

#define SILEX_RNG_DATA_AIS31STATUS_NUMPRELIMALARMS_Pos _UINT32_(0)                                          /* (SILEX_RNG_DATA_AIS31STATUS) Number of preliminary noise alarms since counter was last cleared. Position */
#define SILEX_RNG_DATA_AIS31STATUS_NUMPRELIMALARMS_Msk (_UINT32_(0xFFFF) << SILEX_RNG_DATA_AIS31STATUS_NUMPRELIMALARMS_Pos) /* (SILEX_RNG_DATA_AIS31STATUS) Number of preliminary noise alarms since counter was last cleared. Mask */
#define SILEX_RNG_DATA_AIS31STATUS_NUMPRELIMALARMS(value) (SILEX_RNG_DATA_AIS31STATUS_NUMPRELIMALARMS_Msk & (_UINT32_(value) << SILEX_RNG_DATA_AIS31STATUS_NUMPRELIMALARMS_Pos)) /* Assignment of value for NUMPRELIMALARMS in the SILEX_RNG_DATA_AIS31STATUS register */
#define SILEX_RNG_DATA_AIS31STATUS_PRELIMNOISEALARMRNG_Pos _UINT32_(16)                                         /* (SILEX_RNG_DATA_AIS31STATUS) Last preliminary noise alarm occurred due to history value out of range. Position */
#define SILEX_RNG_DATA_AIS31STATUS_PRELIMNOISEALARMRNG_Msk (_UINT32_(0x1) << SILEX_RNG_DATA_AIS31STATUS_PRELIMNOISEALARMRNG_Pos) /* (SILEX_RNG_DATA_AIS31STATUS) Last preliminary noise alarm occurred due to history value out of range. Mask */
#define SILEX_RNG_DATA_AIS31STATUS_PRELIMNOISEALARMRNG(value) (SILEX_RNG_DATA_AIS31STATUS_PRELIMNOISEALARMRNG_Msk & (_UINT32_(value) << SILEX_RNG_DATA_AIS31STATUS_PRELIMNOISEALARMRNG_Pos)) /* Assignment of value for PRELIMNOISEALARMRNG in the SILEX_RNG_DATA_AIS31STATUS register */
#define SILEX_RNG_DATA_AIS31STATUS_PRELIMNOISEALARMREP_Pos _UINT32_(17)                                         /* (SILEX_RNG_DATA_AIS31STATUS) Last preliminary noise alarm occurred due to consecutive high X**2. Position */
#define SILEX_RNG_DATA_AIS31STATUS_PRELIMNOISEALARMREP_Msk (_UINT32_(0x1) << SILEX_RNG_DATA_AIS31STATUS_PRELIMNOISEALARMREP_Pos) /* (SILEX_RNG_DATA_AIS31STATUS) Last preliminary noise alarm occurred due to consecutive high X**2. Mask */
#define SILEX_RNG_DATA_AIS31STATUS_PRELIMNOISEALARMREP(value) (SILEX_RNG_DATA_AIS31STATUS_PRELIMNOISEALARMREP_Msk & (_UINT32_(value) << SILEX_RNG_DATA_AIS31STATUS_PRELIMNOISEALARMREP_Pos)) /* Assignment of value for PRELIMNOISEALARMREP in the SILEX_RNG_DATA_AIS31STATUS register */
#define SILEX_RNG_DATA_AIS31STATUS_Msk        _UINT32_(0x0003FFFF)                                 /* (SILEX_RNG_DATA_AIS31STATUS) Register Mask  */


/* -------- SILEX_RNG_DATA_HWCONFIG : (SILEX Offset: 0x4058) ( R/ 32) Hardware configuration register. -------- */
#define SILEX_RNG_DATA_HWCONFIG_RESETVALUE    _UINT32_(0x00)                                       /*  (SILEX_RNG_DATA_HWCONFIG) Hardware configuration register.  Reset Value */

#define SILEX_RNG_DATA_HWCONFIG_NUMBOFRINGS_Pos _UINT32_(0)                                          /* (SILEX_RNG_DATA_HWCONFIG) Generic g_NumRings value. Position */
#define SILEX_RNG_DATA_HWCONFIG_NUMBOFRINGS_Msk (_UINT32_(0xFF) << SILEX_RNG_DATA_HWCONFIG_NUMBOFRINGS_Pos) /* (SILEX_RNG_DATA_HWCONFIG) Generic g_NumRings value. Mask */
#define SILEX_RNG_DATA_HWCONFIG_NUMBOFRINGS(value) (SILEX_RNG_DATA_HWCONFIG_NUMBOFRINGS_Msk & (_UINT32_(value) << SILEX_RNG_DATA_HWCONFIG_NUMBOFRINGS_Pos)) /* Assignment of value for NUMBOFRINGS in the SILEX_RNG_DATA_HWCONFIG register */
#define SILEX_RNG_DATA_HWCONFIG_AIS31_Pos     _UINT32_(8)                                          /* (SILEX_RNG_DATA_HWCONFIG) Generic g_AIS31 value. Position */
#define SILEX_RNG_DATA_HWCONFIG_AIS31_Msk     (_UINT32_(0x1) << SILEX_RNG_DATA_HWCONFIG_AIS31_Pos) /* (SILEX_RNG_DATA_HWCONFIG) Generic g_AIS31 value. Mask */
#define SILEX_RNG_DATA_HWCONFIG_AIS31(value)  (SILEX_RNG_DATA_HWCONFIG_AIS31_Msk & (_UINT32_(value) << SILEX_RNG_DATA_HWCONFIG_AIS31_Pos)) /* Assignment of value for AIS31 in the SILEX_RNG_DATA_HWCONFIG register */
#define SILEX_RNG_DATA_HWCONFIG_AIS31FULL_Pos _UINT32_(9)                                          /* (SILEX_RNG_DATA_HWCONFIG) Generic g_AIS31Full value. Position */
#define SILEX_RNG_DATA_HWCONFIG_AIS31FULL_Msk (_UINT32_(0x1) << SILEX_RNG_DATA_HWCONFIG_AIS31FULL_Pos) /* (SILEX_RNG_DATA_HWCONFIG) Generic g_AIS31Full value. Mask */
#define SILEX_RNG_DATA_HWCONFIG_AIS31FULL(value) (SILEX_RNG_DATA_HWCONFIG_AIS31FULL_Msk & (_UINT32_(value) << SILEX_RNG_DATA_HWCONFIG_AIS31FULL_Pos)) /* Assignment of value for AIS31FULL in the SILEX_RNG_DATA_HWCONFIG register */
#define SILEX_RNG_DATA_HWCONFIG_Msk           _UINT32_(0x000003FF)                                 /* (SILEX_RNG_DATA_HWCONFIG) Register Mask  */

#define SILEX_RNG_DATA_HWCONFIG_AIS_Pos       _UINT32_(8)                                          /* (SILEX_RNG_DATA_HWCONFIG Position) Generic g_AIS3x value. */
#define SILEX_RNG_DATA_HWCONFIG_AIS_Msk       (_UINT32_(0x1) << SILEX_RNG_DATA_HWCONFIG_AIS_Pos)   /* (SILEX_RNG_DATA_HWCONFIG Mask) AIS */
#define SILEX_RNG_DATA_HWCONFIG_AIS(value)    (SILEX_RNG_DATA_HWCONFIG_AIS_Msk & (_UINT32_(value) << SILEX_RNG_DATA_HWCONFIG_AIS_Pos)) 

/* -------- SILEX_CRYPTOCON : (SILEX Offset: 0x00) (R/W 32) Crypto control register. -------- */
#define SILEX_CRYPTOCON_RESETVALUE            _UINT32_(0x00)                                       /*  (SILEX_CRYPTOCON) Crypto control register.  Reset Value */

#define SILEX_CRYPTOCON_SWRST_Pos             _UINT32_(0)                                          /* (SILEX_CRYPTOCON) Software Reset Position */
#define SILEX_CRYPTOCON_SWRST_Msk             (_UINT32_(0x1) << SILEX_CRYPTOCON_SWRST_Pos)         /* (SILEX_CRYPTOCON) Software Reset Mask */
#define SILEX_CRYPTOCON_SWRST(value)          (SILEX_CRYPTOCON_SWRST_Msk & (_UINT32_(value) << SILEX_CRYPTOCON_SWRST_Pos)) /* Assignment of value for SWRST in the SILEX_CRYPTOCON register */
#define SILEX_CRYPTOCON_ENABLE_Pos            _UINT32_(1)                                          /* (SILEX_CRYPTOCON) Enable clock to SILEX Position */
#define SILEX_CRYPTOCON_ENABLE_Msk            (_UINT32_(0x1) << SILEX_CRYPTOCON_ENABLE_Pos)        /* (SILEX_CRYPTOCON) Enable clock to SILEX Mask */
#define SILEX_CRYPTOCON_ENABLE(value)         (SILEX_CRYPTOCON_ENABLE_Msk & (_UINT32_(value) << SILEX_CRYPTOCON_ENABLE_Pos)) /* Assignment of value for ENABLE in the SILEX_CRYPTOCON register */
#define SILEX_CRYPTOCON_RUNSTDBY_Pos          _UINT32_(6)                                          /* (SILEX_CRYPTOCON) Enable clock in idle mode Position */
#define SILEX_CRYPTOCON_RUNSTDBY_Msk          (_UINT32_(0x1) << SILEX_CRYPTOCON_RUNSTDBY_Pos)      /* (SILEX_CRYPTOCON) Enable clock in idle mode Mask */
#define SILEX_CRYPTOCON_RUNSTDBY(value)       (SILEX_CRYPTOCON_RUNSTDBY_Msk & (_UINT32_(value) << SILEX_CRYPTOCON_RUNSTDBY_Pos)) /* Assignment of value for RUNSTDBY in the SILEX_CRYPTOCON register */
#define SILEX_CRYPTOCON_Msk                   _UINT32_(0x00000043)                                 /* (SILEX_CRYPTOCON) Register Mask  */


/* SILEX register offsets definitions */
#define SILEX_DMA_FETCH_ADDR_LSB_REG_OFST _UINT32_(0x00)      /* (SILEX_DMA_FETCH_ADDR_LSB)  Offset */
#define SILEX_DMA_FETCH_ADDR_MSB_REG_OFST _UINT32_(0x04)      /* (SILEX_DMA_FETCH_ADDR_MSB)  Offset */
#define SILEX_DMA_FETCH_LEN_REG_OFST   _UINT32_(0x08)      /* (SILEX_DMA_FETCH_LEN)  Offset */
#define SILEX_DMA_FETCH_TAG_REG_OFST   _UINT32_(0x0C)      /* (SILEX_DMA_FETCH_TAG)  Offset */
#define SILEX_DMA_PUSH_ADDR_LSB_REG_OFST _UINT32_(0x10)      /* (SILEX_DMA_PUSH_ADDR_LSB)  Offset */
#define SILEX_DMA_PUSH_ADDR_MSB_REG_OFST _UINT32_(0x14)      /* (SILEX_DMA_PUSH_ADDR_MSB)  Offset */
#define SILEX_DMA_PUSH_LEN_REG_OFST    _UINT32_(0x18)      /* (SILEX_DMA_PUSH_LEN)  Offset */
#define SILEX_DMA_INT_EN_REG_OFST      _UINT32_(0x1C)      /* (SILEX_DMA_INT_EN)  Offset */
#define SILEX_DMA_INT_ENSET_REG_OFST   _UINT32_(0x20)      /* (SILEX_DMA_INT_ENSET)  Offset */
#define SILEX_DMA_INT_ENCLR_REG_OFST   _UINT32_(0x24)      /* (SILEX_DMA_INT_ENCLR)  Offset */
#define SILEX_DMA_INT_STATRAW_REG_OFST _UINT32_(0x28)      /* (SILEX_DMA_INT_STATRAW)  Offset */
#define SILEX_DMA_INT_STAT_REG_OFST    _UINT32_(0x2C)      /* (SILEX_DMA_INT_STAT)  Offset */
#define SILEX_DMA_INT_STATCLR_REG_OFST _UINT32_(0x30)      /* (SILEX_DMA_INT_STATCLR)  Offset */
#define SILEX_DMA_CONFIG_REG_OFST      _UINT32_(0x34)      /* (SILEX_DMA_CONFIG)  Offset */
#define SILEX_DMA_START_REG_OFST       _UINT32_(0x38)      /* (SILEX_DMA_START)  Offset */
#define SILEX_DMA_STATUS_REG_OFST      _UINT32_(0x3C)      /* (SILEX_DMA_STATUS)  Offset */
#define SILEX_HWCONF_INCL_IPS_HW_CFG_REG_OFST _UINT32_(0x400)     /* (SILEX_HWCONF_INCL_IPS_HW_CFG)  Offset */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_1_REG_OFST _UINT32_(0x404)     /* (SILEX_HWCONF_BA411E_AES_HW_CFG_1)  Offset */
#define SILEX_HWCONF_BA411E_AES_HW_CFG_2_REG_OFST _UINT32_(0x408)     /* (SILEX_HWCONF_BA411E_AES_HW_CFG_2) Generic g_CtrSize value. BA411E-AES engine configuration. Offset */
#define SILEX_HWCONF_BA413_HASH_HW_CFG_REG_OFST _UINT32_(0x40C)     /* (SILEX_HWCONF_BA413_HASH_HW_CFG)  Offset */
#define SILEX_HWCONF_BA418_SHA3_HW_CFG_REG_OFST _UINT32_(0x410)     /* (SILEX_HWCONF_BA418_SHA3_HW_CFG) Generic g_Sha3CtxtEn value. BA418-SHA3 configuration. Offset */
#define SILEX_HWCONF_BA419_SM4_HW_CFG_REG_OFST _UINT32_(0x414)     /* (SILEX_HWCONF_BA419_SM4_HW_CFG) Generic g_SM4ModesPoss value. BA419-SM4 engine configuration. Offset */
#define SILEX_HWCONF_BA424_ARIA_HW_CFG_REG_OFST _UINT32_(0x418)     /* (SILEX_HWCONF_BA424_ARIA_HW_CFG) Generic g_aria_modePoss value. BA424-Aria engine configuration. Offset */
#define SILEX_RNG_CONTROL_CONTROL_REG_OFST _UINT32_(0x1000)    /* (SILEX_RNG_CONTROL_CONTROL) Control register Offset */
#define SILEX_RNG_CONTROL_FIFOLEVEL_REG_OFST _UINT32_(0x1004)    /* (SILEX_RNG_CONTROL_FIFOLEVEL) FIFO level register. Offset */
#define SILEX_RNG_CONTROL_FIFOTHRESHOLD_REG_OFST _UINT32_(0x1008)    /* (SILEX_RNG_CONTROL_FIFOTHRESHOLD) FIFO threshold register. Offset */
#define SILEX_RNG_CONTROL_FIFODEPTH_REG_OFST _UINT32_(0x100C)    /* (SILEX_RNG_CONTROL_FIFODEPTH) FIFO depth register. Offset */
#define SILEX_RNG_CONTROL_KEY0_REG_OFST _UINT32_(0x1010)    /* (SILEX_RNG_CONTROL_KEY0) Key register (MSB). Offset */
#define SILEX_RNG_CONTROL_KEY1_REG_OFST _UINT32_(0x1014)    /* (SILEX_RNG_CONTROL_KEY1) Key register. Offset */
#define SILEX_RNG_CONTROL_KEY2_REG_OFST _UINT32_(0x1018)    /* (SILEX_RNG_CONTROL_KEY2) Key register. Offset */
#define SILEX_RNG_CONTROL_KEY3_REG_OFST _UINT32_(0x101C)    /* (SILEX_RNG_CONTROL_KEY3) Key register (LSB). Offset */
#define SILEX_RNG_CONTROL_TESTDATA_REG_OFST _UINT32_(0x1020)    /* (SILEX_RNG_CONTROL_TESTDATA) Test data register. Offset */
#define SILEX_RNG_CONTROL_REPEATTHRESHOLD_REG_OFST _UINT32_(0x1024)    /* (SILEX_RNG_CONTROL_REPEATTHRESHOLD) Repetition Test Count Cut-Off value. Offset */
#define SILEX_RNG_CONTROL_PROPTHRESHOLD_REG_OFST _UINT32_(0x1028)    /* (SILEX_RNG_CONTROL_PROPTHRESHOLD) Adaptive Proportion Test (1024-sample window) Cut-Off value. Offset */
#define SILEX_RNG_CONTROL_STATUS_REG_OFST _UINT32_(0x1030)    /* (SILEX_RNG_CONTROL_STATUS) Status register. Offset */
#define SILEX_RNG_CONTROL_INITWAITVAL_REG_OFST _UINT32_(0x1034)    /* (SILEX_RNG_CONTROL_INITWAITVAL) Initial wait counter value. Offset */
#define SILEX_RNG_CONTROL_DISABLEOSC0_REG_OFST _UINT32_(0x1038)    /* (SILEX_RNG_CONTROL_DISABLEOSC0) Disable oscillator rings #0 to #31. Offset */
#define SILEX_RNG_CONTROL_DISABLEOSC1_REG_OFST _UINT32_(0x103C)    /* (SILEX_RNG_CONTROL_DISABLEOSC1) Disable oscillator rings #32 to #63. Offset */
#define SILEX_RNG_CONTROL_SWOFFTMRVAL_REG_OFST _UINT32_(0x1040)    /* (SILEX_RNG_CONTROL_SWOFFTMRVAL) Switch off timer value. Offset */
#define SILEX_RNG_CONTROL_CLKDIV_REG_OFST _UINT32_(0x1044)    /* (SILEX_RNG_CONTROL_CLKDIV) Sample clock divider. Offset */
#define SILEX_RNG_CONTROL_AIS31CONF0_REG_OFST _UINT32_(0x1048)    /* (SILEX_RNG_CONTROL_AIS31CONF0) AIS31 configuration register 0. Offset */
#define SILEX_RNG_CONTROL_AIS31CONF1_REG_OFST _UINT32_(0x104C)    /* (SILEX_RNG_CONTROL_AIS31CONF1) AIS31 configuration register 1. Offset */
#define SILEX_RNG_CONTROL_AIS31CONF2_REG_OFST _UINT32_(0x1050)    /* (SILEX_RNG_CONTROL_AIS31CONF2) AIS31 configuration register 2. Offset */
#define SILEX_RNG_CONTROL_AIS31STATUS_REG_OFST _UINT32_(0x1054)    /* (SILEX_RNG_CONTROL_AIS31STATUS) AIS31 status register. Offset */
#define SILEX_RNG_CONTROL_HWCONFIG_REG_OFST _UINT32_(0x1058)    /* (SILEX_RNG_CONTROL_HWCONFIG) Hardware configuration register. Offset */
#define SILEX_PK_POINTERS_REG_OFST     _UINT32_(0x2000)    /* (SILEX_PK_POINTERS) Pointers register. Offset */
#define SILEX_PK_COMMAND_REG_OFST      _UINT32_(0x2004)    /* (SILEX_PK_COMMAND) Command register. Offset */
#define SILEX_PK_CONTROL_REG_OFST      _UINT32_(0x2008)    /* (SILEX_PK_CONTROL) Command register. Offset */
#define SILEX_PK_STATUS_REG_OFST       _UINT32_(0x200C)    /* (SILEX_PK_STATUS) Status register. Offset */
#define SILEX_PK_TIMER_REG_OFST        _UINT32_(0x2014)    /* (SILEX_PK_TIMER) Timer register. Offset */
#define SILEX_PK_HWCONFIG_REG_OFST     _UINT32_(0x2018)    /* (SILEX_PK_HWCONFIG) Hardware configuration register. Offset */
#define SILEX_PK_OPSIZE_REG_OFST       _UINT32_(0x201C)    /* (SILEX_PK_OPSIZE) Operand size register. Offset */
#define SILEX_PK_MEMOFFSET_REG_OFST    _UINT32_(0x2020)    /* (SILEX_PK_MEMOFFSET) Memory offset register. Offset */
#define SILEX_PK_MICROCODEOFFSET_REG_OFST _UINT32_(0x2024)    /* (SILEX_PK_MICROCODEOFFSET) MicroCode offset register. Offset */
#define SILEX_RNG_DATA_CONTROL_REG_OFST _UINT32_(0x4000)    /* (SILEX_RNG_DATA_CONTROL) Control register Offset */
#define SILEX_RNG_DATA_FIFOLEVEL_REG_OFST _UINT32_(0x4004)    /* (SILEX_RNG_DATA_FIFOLEVEL) FIFO level register. Offset */
#define SILEX_RNG_DATA_FIFOTHRESHOLD_REG_OFST _UINT32_(0x4008)    /* (SILEX_RNG_DATA_FIFOTHRESHOLD) FIFO threshold register. Offset */
#define SILEX_RNG_DATA_FIFODEPTH_REG_OFST _UINT32_(0x400C)    /* (SILEX_RNG_DATA_FIFODEPTH) FIFO depth register. Offset */
#define SILEX_RNG_DATA_KEY0_REG_OFST   _UINT32_(0x4010)    /* (SILEX_RNG_DATA_KEY0) Key register (MSB). Offset */
#define SILEX_RNG_DATA_KEY1_REG_OFST   _UINT32_(0x4014)    /* (SILEX_RNG_DATA_KEY1) Key register. Offset */
#define SILEX_RNG_DATA_KEY2_REG_OFST   _UINT32_(0x4018)    /* (SILEX_RNG_DATA_KEY2) Key register. Offset */
#define SILEX_RNG_DATA_KEY3_REG_OFST   _UINT32_(0x401C)    /* (SILEX_RNG_DATA_KEY3) Key register (LSB). Offset */
#define SILEX_RNG_DATA_TESTDATA_REG_OFST _UINT32_(0x4020)    /* (SILEX_RNG_DATA_TESTDATA) Test data register. Offset */
#define SILEX_RNG_DATA_REPEATTHRESHOLD_REG_OFST _UINT32_(0x4024)    /* (SILEX_RNG_DATA_REPEATTHRESHOLD) Repetition Test Count Cut-Off value. Offset */
#define SILEX_RNG_DATA_PROPTHRESHOLD_REG_OFST _UINT32_(0x4028)    /* (SILEX_RNG_DATA_PROPTHRESHOLD) Adaptive Proportion Test (1024-sample window) Cut-Off value. Offset */
#define SILEX_RNG_DATA_STATUS_REG_OFST _UINT32_(0x4030)    /* (SILEX_RNG_DATA_STATUS) Status register. Offset */
#define SILEX_RNG_DATA_INITWAITVAL_REG_OFST _UINT32_(0x4034)    /* (SILEX_RNG_DATA_INITWAITVAL) Initial wait counter value. Offset */
#define SILEX_RNG_DATA_DISABLEOSC0_REG_OFST _UINT32_(0x4038)    /* (SILEX_RNG_DATA_DISABLEOSC0) Disable oscillator rings #0 to #31. Offset */
#define SILEX_RNG_DATA_DISABLEOSC1_REG_OFST _UINT32_(0x403C)    /* (SILEX_RNG_DATA_DISABLEOSC1) Disable oscillator rings #32 to #63. Offset */
#define SILEX_RNG_DATA_SWOFFTMRVAL_REG_OFST _UINT32_(0x4040)    /* (SILEX_RNG_DATA_SWOFFTMRVAL) Switch off timer value. Offset */
#define SILEX_RNG_DATA_CLKDIV_REG_OFST _UINT32_(0x4044)    /* (SILEX_RNG_DATA_CLKDIV) Sample clock divider. Offset */
#define SILEX_RNG_DATA_AIS31CONF0_REG_OFST _UINT32_(0x4048)    /* (SILEX_RNG_DATA_AIS31CONF0) AIS31 configuration register 0. Offset */
#define SILEX_RNG_DATA_AIS31CONF1_REG_OFST _UINT32_(0x404C)    /* (SILEX_RNG_DATA_AIS31CONF1) AIS31 configuration register 1. Offset */
#define SILEX_RNG_DATA_AIS31CONF2_REG_OFST _UINT32_(0x4050)    /* (SILEX_RNG_DATA_AIS31CONF2) AIS31 configuration register 2. Offset */
#define SILEX_RNG_DATA_AIS31STATUS_REG_OFST _UINT32_(0x4054)    /* (SILEX_RNG_DATA_AIS31STATUS) AIS31 status register. Offset */
#define SILEX_RNG_DATA_HWCONFIG_REG_OFST _UINT32_(0x4058)    /* (SILEX_RNG_DATA_HWCONFIG) Hardware configuration register. Offset */
#define SILEX_CRYPTOCON_REG_OFST       _UINT32_(0x00)      /* (SILEX_CRYPTOCON) Crypto control register. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* SFR register API structure */
typedef struct
{  /*  */
  __IO  uint32_t                       SILEX_DMA_FETCH_ADDR_LSB; /* Offset: 0x00 (R/W  32)  */
  __IO  uint32_t                       SILEX_DMA_FETCH_ADDR_MSB; /* Offset: 0x04 (R/W  32)  */
  __IO  uint32_t                       SILEX_DMA_FETCH_LEN; /* Offset: 0x08 (R/W  32)  */
  __IO  uint32_t                       SILEX_DMA_FETCH_TAG; /* Offset: 0x0C (R/W  32)  */
  __IO  uint32_t                       SILEX_DMA_PUSH_ADDR_LSB; /* Offset: 0x10 (R/W  32)  */
  __IO  uint32_t                       SILEX_DMA_PUSH_ADDR_MSB; /* Offset: 0x14 (R/W  32)  */
  __IO  uint32_t                       SILEX_DMA_PUSH_LEN; /* Offset: 0x18 (R/W  32)  */
  __IO  uint32_t                       SILEX_DMA_INT_EN;   /* Offset: 0x1C (R/W  32)  */
  __O   uint32_t                       SILEX_DMA_INT_ENSET; /* Offset: 0x20 ( /W  32)  */
  __O   uint32_t                       SILEX_DMA_INT_ENCLR; /* Offset: 0x24 ( /W  32)  */
  __I   uint32_t                       SILEX_DMA_INT_STATRAW; /* Offset: 0x28 (R/   32)  */
  __I   uint32_t                       SILEX_DMA_INT_STAT; /* Offset: 0x2C (R/   32)  */
  __O   uint32_t                       SILEX_DMA_INT_STATCLR; /* Offset: 0x30 ( /W  32)  */
  __IO  uint32_t                       SILEX_DMA_CONFIG;   /* Offset: 0x34 (R/W  32)  */
  __O   uint32_t                       SILEX_DMA_START;    /* Offset: 0x38 ( /W  32)  */
  __I   uint32_t                       SILEX_DMA_STATUS;   /* Offset: 0x3C (R/   32)  */
  __I   uint8_t                        Reserved1[0x3C0];
  __I   uint32_t                       SILEX_HWCONF_INCL_IPS_HW_CFG; /* Offset: 0x400 (R/   32)  */
  __I   uint32_t                       SILEX_HWCONF_BA411E_AES_HW_CFG_1; /* Offset: 0x404 (R/   32)  */
  __I   uint32_t                       SILEX_HWCONF_BA411E_AES_HW_CFG_2; /* Offset: 0x408 (R/   32) Generic g_CtrSize value. BA411E-AES engine configuration. */
  __I   uint32_t                       SILEX_HWCONF_BA413_HASH_HW_CFG; /* Offset: 0x40C (R/   32)  */
  __I   uint32_t                       SILEX_HWCONF_BA418_SHA3_HW_CFG; /* Offset: 0x410 (R/   32) Generic g_Sha3CtxtEn value. BA418-SHA3 configuration. */
  __I   uint32_t                       SILEX_HWCONF_BA419_SM4_HW_CFG; /* Offset: 0x414 (R/   32) Generic g_SM4ModesPoss value. BA419-SM4 engine configuration. */
  __I   uint32_t                       SILEX_HWCONF_BA424_ARIA_HW_CFG; /* Offset: 0x418 (R/   32) Generic g_aria_modePoss value. BA424-Aria engine configuration. */
  __I   uint8_t                        Reserved2[0xBE4];
  __IO  uint32_t                       SILEX_RNG_CONTROL_CONTROL; /* Offset: 0x1000 (R/W  32) Control register */
  __IO  uint32_t                       SILEX_RNG_CONTROL_FIFOLEVEL; /* Offset: 0x1004 (R/W  32) FIFO level register. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_FIFOTHRESHOLD; /* Offset: 0x1008 (R/W  32) FIFO threshold register. */
  __I   uint32_t                       SILEX_RNG_CONTROL_FIFODEPTH; /* Offset: 0x100C (R/   32) FIFO depth register. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_KEY0; /* Offset: 0x1010 (R/W  32) Key register (MSB). */
  __IO  uint32_t                       SILEX_RNG_CONTROL_KEY1; /* Offset: 0x1014 (R/W  32) Key register. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_KEY2; /* Offset: 0x1018 (R/W  32) Key register. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_KEY3; /* Offset: 0x101C (R/W  32) Key register (LSB). */
  __O   uint32_t                       SILEX_RNG_CONTROL_TESTDATA; /* Offset: 0x1020 ( /W  32) Test data register. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_REPEATTHRESHOLD; /* Offset: 0x1024 (R/W  32) Repetition Test Count Cut-Off value. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_PROPTHRESHOLD; /* Offset: 0x1028 (R/W  32) Adaptive Proportion Test (1024-sample window) Cut-Off value. */
  __I   uint8_t                        Reserved3[0x04];
  __IO  uint32_t                       SILEX_RNG_CONTROL_STATUS; /* Offset: 0x1030 (R/W  32) Status register. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_INITWAITVAL; /* Offset: 0x1034 (R/W  32) Initial wait counter value. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_DISABLEOSC0; /* Offset: 0x1038 (R/W  32) Disable oscillator rings #0 to #31. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_DISABLEOSC1; /* Offset: 0x103C (R/W  32) Disable oscillator rings #32 to #63. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_SWOFFTMRVAL; /* Offset: 0x1040 (R/W  32) Switch off timer value. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_CLKDIV; /* Offset: 0x1044 (R/W  32) Sample clock divider. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_AIS31CONF0; /* Offset: 0x1048 (R/W  32) AIS31 configuration register 0. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_AIS31CONF1; /* Offset: 0x104C (R/W  32) AIS31 configuration register 1. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_AIS31CONF2; /* Offset: 0x1050 (R/W  32) AIS31 configuration register 2. */
  __IO  uint32_t                       SILEX_RNG_CONTROL_AIS31STATUS; /* Offset: 0x1054 (R/W  32) AIS31 status register. */
  __I   uint32_t                       SILEX_RNG_CONTROL_HWCONFIG; /* Offset: 0x1058 (R/   32) Hardware configuration register. */
  __I   uint8_t                        Reserved4[0xFA4];
  __IO  uint32_t                       SILEX_PK_POINTERS;  /* Offset: 0x2000 (R/W  32) Pointers register. */
  __IO  uint32_t                       SILEX_PK_COMMAND;   /* Offset: 0x2004 (R/W  32) Command register. */
  __O   uint32_t                       SILEX_PK_CONTROL;   /* Offset: 0x2008 ( /W  32) Command register. */
  __I   uint32_t                       SILEX_PK_STATUS;    /* Offset: 0x200C (R/   32) Status register. */
  __I   uint8_t                        Reserved5[0x04];
  __IO  uint32_t                       SILEX_PK_TIMER;     /* Offset: 0x2014 (R/W  32) Timer register. */
  __I   uint32_t                       SILEX_PK_HWCONFIG;  /* Offset: 0x2018 (R/   32) Hardware configuration register. */
  __IO  uint32_t                       SILEX_PK_OPSIZE;    /* Offset: 0x201C (R/W  32) Operand size register. */
  __IO  uint32_t                       SILEX_PK_MEMOFFSET; /* Offset: 0x2020 (R/W  32) Memory offset register. */
  __IO  uint32_t                       SILEX_PK_MICROCODEOFFSET; /* Offset: 0x2024 (R/W  32) MicroCode offset register. */
  __I   uint8_t                        Reserved6[0x1FD8];
  __IO  uint32_t                       SILEX_RNG_DATA_CONTROL; /* Offset: 0x4000 (R/W  32) Control register */
  __IO  uint32_t                       SILEX_RNG_DATA_FIFOLEVEL; /* Offset: 0x4004 (R/W  32) FIFO level register. */
  __IO  uint32_t                       SILEX_RNG_DATA_FIFOTHRESHOLD; /* Offset: 0x4008 (R/W  32) FIFO threshold register. */
  __I   uint32_t                       SILEX_RNG_DATA_FIFODEPTH; /* Offset: 0x400C (R/   32) FIFO depth register. */
  __IO  uint32_t                       SILEX_RNG_DATA_KEY0; /* Offset: 0x4010 (R/W  32) Key register (MSB). */
  __IO  uint32_t                       SILEX_RNG_DATA_KEY1; /* Offset: 0x4014 (R/W  32) Key register. */
  __IO  uint32_t                       SILEX_RNG_DATA_KEY2; /* Offset: 0x4018 (R/W  32) Key register. */
  __IO  uint32_t                       SILEX_RNG_DATA_KEY3; /* Offset: 0x401C (R/W  32) Key register (LSB). */
  __O   uint32_t                       SILEX_RNG_DATA_TESTDATA; /* Offset: 0x4020 ( /W  32) Test data register. */
  __IO  uint32_t                       SILEX_RNG_DATA_REPEATTHRESHOLD; /* Offset: 0x4024 (R/W  32) Repetition Test Count Cut-Off value. */
  __IO  uint32_t                       SILEX_RNG_DATA_PROPTHRESHOLD; /* Offset: 0x4028 (R/W  32) Adaptive Proportion Test (1024-sample window) Cut-Off value. */
  __I   uint8_t                        Reserved7[0x04];
  __IO  uint32_t                       SILEX_RNG_DATA_STATUS; /* Offset: 0x4030 (R/W  32) Status register. */
  __IO  uint32_t                       SILEX_RNG_DATA_INITWAITVAL; /* Offset: 0x4034 (R/W  32) Initial wait counter value. */
  __IO  uint32_t                       SILEX_RNG_DATA_DISABLEOSC0; /* Offset: 0x4038 (R/W  32) Disable oscillator rings #0 to #31. */
  __IO  uint32_t                       SILEX_RNG_DATA_DISABLEOSC1; /* Offset: 0x403C (R/W  32) Disable oscillator rings #32 to #63. */
  __IO  uint32_t                       SILEX_RNG_DATA_SWOFFTMRVAL; /* Offset: 0x4040 (R/W  32) Switch off timer value. */
  __IO  uint32_t                       SILEX_RNG_DATA_CLKDIV; /* Offset: 0x4044 (R/W  32) Sample clock divider. */
  __IO  uint32_t                       SILEX_RNG_DATA_AIS31CONF0; /* Offset: 0x4048 (R/W  32) AIS31 configuration register 0. */
  __IO  uint32_t                       SILEX_RNG_DATA_AIS31CONF1; /* Offset: 0x404C (R/W  32) AIS31 configuration register 1. */
  __IO  uint32_t                       SILEX_RNG_DATA_AIS31CONF2; /* Offset: 0x4050 (R/W  32) AIS31 configuration register 2. */
  __IO  uint32_t                       SILEX_RNG_DATA_AIS31STATUS; /* Offset: 0x4054 (R/W  32) AIS31 status register. */
  __I   uint32_t                       SILEX_RNG_DATA_HWCONFIG; /* Offset: 0x4058 (R/   32) Hardware configuration register. */
} silex_sfr_registers_t;

#define SILEX_SFR_NUMBER 1

/* SILEX register API structure */
typedef struct
{  /*  */
  __IO  uint32_t                       SILEX_CRYPTOCON;    /* Offset: 0x00 (R/W  32) Crypto control register. */
  __I   uint8_t                        Reserved1[0xFFFC];
        silex_sfr_registers_t          SFR[SILEX_SFR_NUMBER]; /* Offset: 0x10000  */
} silex_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32WM_BZ6_SILEX_COMPONENT_H_ */
