/*
 * Component description for SPW
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
#ifndef _SAMRH71_SPW_COMPONENT_H_
#define _SAMRH71_SPW_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SPW                                          */
/* ************************************************************************** */

/* -------- SPW_ROUTER_STS : (SPW Offset: 0x00) ( R/ 32) SpW Router Status -------- */
#define SPW_ROUTER_STS_DEST_Pos               _UINT32_(0)                                          /* (SPW_ROUTER_STS) Destination addr Position */
#define SPW_ROUTER_STS_DEST_Msk               (_UINT32_(0x1F) << SPW_ROUTER_STS_DEST_Pos)          /* (SPW_ROUTER_STS) Destination addr Mask */
#define SPW_ROUTER_STS_DEST(value)            (SPW_ROUTER_STS_DEST_Msk & (_UINT32_(value) << SPW_ROUTER_STS_DEST_Pos)) /* Assigment of value for DEST in the SPW_ROUTER_STS register */
#define SPW_ROUTER_STS_SOURCE_Pos             _UINT32_(8)                                          /* (SPW_ROUTER_STS) Source address Position */
#define SPW_ROUTER_STS_SOURCE_Msk             (_UINT32_(0x1F) << SPW_ROUTER_STS_SOURCE_Pos)        /* (SPW_ROUTER_STS) Source address Mask */
#define SPW_ROUTER_STS_SOURCE(value)          (SPW_ROUTER_STS_SOURCE_Msk & (_UINT32_(value) << SPW_ROUTER_STS_SOURCE_Pos)) /* Assigment of value for SOURCE in the SPW_ROUTER_STS register */
#define SPW_ROUTER_STS_BYTE_Pos               _UINT32_(16)                                         /* (SPW_ROUTER_STS) Router byte Position */
#define SPW_ROUTER_STS_BYTE_Msk               (_UINT32_(0xFF) << SPW_ROUTER_STS_BYTE_Pos)          /* (SPW_ROUTER_STS) Router byte Mask */
#define SPW_ROUTER_STS_BYTE(value)            (SPW_ROUTER_STS_BYTE_Msk & (_UINT32_(value) << SPW_ROUTER_STS_BYTE_Pos)) /* Assigment of value for BYTE in the SPW_ROUTER_STS register */
#define SPW_ROUTER_STS_COUNT_Pos              _UINT32_(24)                                         /* (SPW_ROUTER_STS) Packet Count Position */
#define SPW_ROUTER_STS_COUNT_Msk              (_UINT32_(0xFF) << SPW_ROUTER_STS_COUNT_Pos)         /* (SPW_ROUTER_STS) Packet Count Mask */
#define SPW_ROUTER_STS_COUNT(value)           (SPW_ROUTER_STS_COUNT_Msk & (_UINT32_(value) << SPW_ROUTER_STS_COUNT_Pos)) /* Assigment of value for COUNT in the SPW_ROUTER_STS register */
#define SPW_ROUTER_STS_Msk                    _UINT32_(0xFFFF1F1F)                                 /* (SPW_ROUTER_STS) Register Mask  */


/* -------- SPW_ROUTER_CFG : (SPW Offset: 0x04) (R/W 32) SpW Router Config -------- */
#define SPW_ROUTER_CFG_LAENA_Pos              _UINT32_(0)                                          /* (SPW_ROUTER_CFG) LA Routing Enable Position */
#define SPW_ROUTER_CFG_LAENA_Msk              (_UINT32_(0x1) << SPW_ROUTER_CFG_LAENA_Pos)          /* (SPW_ROUTER_CFG) LA Routing Enable Mask */
#define SPW_ROUTER_CFG_LAENA(value)           (SPW_ROUTER_CFG_LAENA_Msk & (_UINT32_(value) << SPW_ROUTER_CFG_LAENA_Pos)) /* Assigment of value for LAENA in the SPW_ROUTER_CFG register */
#define SPW_ROUTER_CFG_FALLBACK_Pos           _UINT32_(1)                                          /* (SPW_ROUTER_CFG) Fallback Routing Position */
#define SPW_ROUTER_CFG_FALLBACK_Msk           (_UINT32_(0x1) << SPW_ROUTER_CFG_FALLBACK_Pos)       /* (SPW_ROUTER_CFG) Fallback Routing Mask */
#define SPW_ROUTER_CFG_FALLBACK(value)        (SPW_ROUTER_CFG_FALLBACK_Msk & (_UINT32_(value) << SPW_ROUTER_CFG_FALLBACK_Pos)) /* Assigment of value for FALLBACK in the SPW_ROUTER_CFG register */
#define SPW_ROUTER_CFG_DISTIMEOUT_Pos         _UINT32_(2)                                          /* (SPW_ROUTER_CFG) Disable Timeout Position */
#define SPW_ROUTER_CFG_DISTIMEOUT_Msk         (_UINT32_(0x1) << SPW_ROUTER_CFG_DISTIMEOUT_Pos)     /* (SPW_ROUTER_CFG) Disable Timeout Mask */
#define SPW_ROUTER_CFG_DISTIMEOUT(value)      (SPW_ROUTER_CFG_DISTIMEOUT_Msk & (_UINT32_(value) << SPW_ROUTER_CFG_DISTIMEOUT_Pos)) /* Assigment of value for DISTIMEOUT in the SPW_ROUTER_CFG register */
#define SPW_ROUTER_CFG_Msk                    _UINT32_(0x00000007)                                 /* (SPW_ROUTER_CFG) Register Mask  */


/* -------- SPW_ROUTER_TIMEOUT : (SPW Offset: 0x08) ( R/ 32) SpW Router Timeout -------- */
#define SPW_ROUTER_TIMEOUT_ADDR_Pos           _UINT32_(0)                                          /* (SPW_ROUTER_TIMEOUT) Physical Address Position */
#define SPW_ROUTER_TIMEOUT_ADDR_Msk           (_UINT32_(0x1F) << SPW_ROUTER_TIMEOUT_ADDR_Pos)      /* (SPW_ROUTER_TIMEOUT) Physical Address Mask */
#define SPW_ROUTER_TIMEOUT_ADDR(value)        (SPW_ROUTER_TIMEOUT_ADDR_Msk & (_UINT32_(value) << SPW_ROUTER_TIMEOUT_ADDR_Pos)) /* Assigment of value for ADDR in the SPW_ROUTER_TIMEOUT register */
#define SPW_ROUTER_TIMEOUT_LOCKED_Pos         _UINT32_(31)                                         /* (SPW_ROUTER_TIMEOUT) Locked Position */
#define SPW_ROUTER_TIMEOUT_LOCKED_Msk         (_UINT32_(0x1) << SPW_ROUTER_TIMEOUT_LOCKED_Pos)     /* (SPW_ROUTER_TIMEOUT) Locked Mask */
#define SPW_ROUTER_TIMEOUT_LOCKED(value)      (SPW_ROUTER_TIMEOUT_LOCKED_Msk & (_UINT32_(value) << SPW_ROUTER_TIMEOUT_LOCKED_Pos)) /* Assigment of value for LOCKED in the SPW_ROUTER_TIMEOUT register */
#define SPW_ROUTER_TIMEOUT_Msk                _UINT32_(0x8000001F)                                 /* (SPW_ROUTER_TIMEOUT) Register Mask  */


/* -------- SPW_ROUTER_TABLE : (SPW Offset: 0x80) (R/W 32) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) -------- */
#define SPW_ROUTER_TABLE_ADDR_Pos             _UINT32_(0)                                          /* (SPW_ROUTER_TABLE) Address Position */
#define SPW_ROUTER_TABLE_ADDR_Msk             (_UINT32_(0x1F) << SPW_ROUTER_TABLE_ADDR_Pos)        /* (SPW_ROUTER_TABLE) Address Mask */
#define SPW_ROUTER_TABLE_ADDR(value)          (SPW_ROUTER_TABLE_ADDR_Msk & (_UINT32_(value) << SPW_ROUTER_TABLE_ADDR_Pos)) /* Assigment of value for ADDR in the SPW_ROUTER_TABLE register */
#define SPW_ROUTER_TABLE_DELHEAD_Pos          _UINT32_(8)                                          /* (SPW_ROUTER_TABLE) Delete Header Byte Position */
#define SPW_ROUTER_TABLE_DELHEAD_Msk          (_UINT32_(0x1) << SPW_ROUTER_TABLE_DELHEAD_Pos)      /* (SPW_ROUTER_TABLE) Delete Header Byte Mask */
#define SPW_ROUTER_TABLE_DELHEAD(value)       (SPW_ROUTER_TABLE_DELHEAD_Msk & (_UINT32_(value) << SPW_ROUTER_TABLE_DELHEAD_Pos)) /* Assigment of value for DELHEAD in the SPW_ROUTER_TABLE register */
#define SPW_ROUTER_TABLE_Msk                  _UINT32_(0x0000011F)                                 /* (SPW_ROUTER_TABLE) Register Mask  */


/* -------- SPW_LINK1_PI_RM : (SPW Offset: 0x400) ( R/ 32) SpW Link 1 Pending Read Masked Interrupt -------- */
#define SPW_LINK1_PI_RM_DISERR_Pos            _UINT32_(0)                                          /* (SPW_LINK1_PI_RM) DisErr Position */
#define SPW_LINK1_PI_RM_DISERR_Msk            (_UINT32_(0x1) << SPW_LINK1_PI_RM_DISERR_Pos)        /* (SPW_LINK1_PI_RM) DisErr Mask */
#define SPW_LINK1_PI_RM_DISERR(value)         (SPW_LINK1_PI_RM_DISERR_Msk & (_UINT32_(value) << SPW_LINK1_PI_RM_DISERR_Pos)) /* Assigment of value for DISERR in the SPW_LINK1_PI_RM register */
#define SPW_LINK1_PI_RM_PARERR_Pos            _UINT32_(1)                                          /* (SPW_LINK1_PI_RM) ParErr Position */
#define SPW_LINK1_PI_RM_PARERR_Msk            (_UINT32_(0x1) << SPW_LINK1_PI_RM_PARERR_Pos)        /* (SPW_LINK1_PI_RM) ParErr Mask */
#define SPW_LINK1_PI_RM_PARERR(value)         (SPW_LINK1_PI_RM_PARERR_Msk & (_UINT32_(value) << SPW_LINK1_PI_RM_PARERR_Pos)) /* Assigment of value for PARERR in the SPW_LINK1_PI_RM register */
#define SPW_LINK1_PI_RM_ESCERR_Pos            _UINT32_(2)                                          /* (SPW_LINK1_PI_RM) ESCErr Position */
#define SPW_LINK1_PI_RM_ESCERR_Msk            (_UINT32_(0x1) << SPW_LINK1_PI_RM_ESCERR_Pos)        /* (SPW_LINK1_PI_RM) ESCErr Mask */
#define SPW_LINK1_PI_RM_ESCERR(value)         (SPW_LINK1_PI_RM_ESCERR_Msk & (_UINT32_(value) << SPW_LINK1_PI_RM_ESCERR_Pos)) /* Assigment of value for ESCERR in the SPW_LINK1_PI_RM register */
#define SPW_LINK1_PI_RM_CRERR_Pos             _UINT32_(3)                                          /* (SPW_LINK1_PI_RM) CrErr Position */
#define SPW_LINK1_PI_RM_CRERR_Msk             (_UINT32_(0x1) << SPW_LINK1_PI_RM_CRERR_Pos)         /* (SPW_LINK1_PI_RM) CrErr Mask */
#define SPW_LINK1_PI_RM_CRERR(value)          (SPW_LINK1_PI_RM_CRERR_Msk & (_UINT32_(value) << SPW_LINK1_PI_RM_CRERR_Pos)) /* Assigment of value for CRERR in the SPW_LINK1_PI_RM register */
#define SPW_LINK1_PI_RM_LINKABORT_Pos         _UINT32_(4)                                          /* (SPW_LINK1_PI_RM) LinkAbort Position */
#define SPW_LINK1_PI_RM_LINKABORT_Msk         (_UINT32_(0x1) << SPW_LINK1_PI_RM_LINKABORT_Pos)     /* (SPW_LINK1_PI_RM) LinkAbort Mask */
#define SPW_LINK1_PI_RM_LINKABORT(value)      (SPW_LINK1_PI_RM_LINKABORT_Msk & (_UINT32_(value) << SPW_LINK1_PI_RM_LINKABORT_Pos)) /* Assigment of value for LINKABORT in the SPW_LINK1_PI_RM register */
#define SPW_LINK1_PI_RM_EEPTRANS_Pos          _UINT32_(5)                                          /* (SPW_LINK1_PI_RM) EEP transmitted Position */
#define SPW_LINK1_PI_RM_EEPTRANS_Msk          (_UINT32_(0x1) << SPW_LINK1_PI_RM_EEPTRANS_Pos)      /* (SPW_LINK1_PI_RM) EEP transmitted Mask */
#define SPW_LINK1_PI_RM_EEPTRANS(value)       (SPW_LINK1_PI_RM_EEPTRANS_Msk & (_UINT32_(value) << SPW_LINK1_PI_RM_EEPTRANS_Pos)) /* Assigment of value for EEPTRANS in the SPW_LINK1_PI_RM register */
#define SPW_LINK1_PI_RM_EEPREC_Pos            _UINT32_(6)                                          /* (SPW_LINK1_PI_RM) EEP received Position */
#define SPW_LINK1_PI_RM_EEPREC_Msk            (_UINT32_(0x1) << SPW_LINK1_PI_RM_EEPREC_Pos)        /* (SPW_LINK1_PI_RM) EEP received Mask */
#define SPW_LINK1_PI_RM_EEPREC(value)         (SPW_LINK1_PI_RM_EEPREC_Msk & (_UINT32_(value) << SPW_LINK1_PI_RM_EEPREC_Pos)) /* Assigment of value for EEPREC in the SPW_LINK1_PI_RM register */
#define SPW_LINK1_PI_RM_DISCARD_Pos           _UINT32_(7)                                          /* (SPW_LINK1_PI_RM) Discard Position */
#define SPW_LINK1_PI_RM_DISCARD_Msk           (_UINT32_(0x1) << SPW_LINK1_PI_RM_DISCARD_Pos)       /* (SPW_LINK1_PI_RM) Discard Mask */
#define SPW_LINK1_PI_RM_DISCARD(value)        (SPW_LINK1_PI_RM_DISCARD_Msk & (_UINT32_(value) << SPW_LINK1_PI_RM_DISCARD_Pos)) /* Assigment of value for DISCARD in the SPW_LINK1_PI_RM register */
#define SPW_LINK1_PI_RM_ESCEVENT2_Pos         _UINT32_(8)                                          /* (SPW_LINK1_PI_RM) Escape Event 2 Position */
#define SPW_LINK1_PI_RM_ESCEVENT2_Msk         (_UINT32_(0x1) << SPW_LINK1_PI_RM_ESCEVENT2_Pos)     /* (SPW_LINK1_PI_RM) Escape Event 2 Mask */
#define SPW_LINK1_PI_RM_ESCEVENT2(value)      (SPW_LINK1_PI_RM_ESCEVENT2_Msk & (_UINT32_(value) << SPW_LINK1_PI_RM_ESCEVENT2_Pos)) /* Assigment of value for ESCEVENT2 in the SPW_LINK1_PI_RM register */
#define SPW_LINK1_PI_RM_ESCEVENT1_Pos         _UINT32_(9)                                          /* (SPW_LINK1_PI_RM) Escape Event 1 Position */
#define SPW_LINK1_PI_RM_ESCEVENT1_Msk         (_UINT32_(0x1) << SPW_LINK1_PI_RM_ESCEVENT1_Pos)     /* (SPW_LINK1_PI_RM) Escape Event 1 Mask */
#define SPW_LINK1_PI_RM_ESCEVENT1(value)      (SPW_LINK1_PI_RM_ESCEVENT1_Msk & (_UINT32_(value) << SPW_LINK1_PI_RM_ESCEVENT1_Pos)) /* Assigment of value for ESCEVENT1 in the SPW_LINK1_PI_RM register */
#define SPW_LINK1_PI_RM_Msk                   _UINT32_(0x000003FF)                                 /* (SPW_LINK1_PI_RM) Register Mask  */

#define SPW_LINK1_PI_RM_ESCEVENT_Pos          _UINT32_(8)                                          /* (SPW_LINK1_PI_RM Position) Escape Event x */
#define SPW_LINK1_PI_RM_ESCEVENT_Msk          (_UINT32_(0x3) << SPW_LINK1_PI_RM_ESCEVENT_Pos)      /* (SPW_LINK1_PI_RM Mask) ESCEVENT */
#define SPW_LINK1_PI_RM_ESCEVENT(value)       (SPW_LINK1_PI_RM_ESCEVENT_Msk & (_UINT32_(value) << SPW_LINK1_PI_RM_ESCEVENT_Pos)) 

/* -------- SPW_LINK1_PI_RCM : (SPW Offset: 0x404) ( R/ 32) SpW Link 1 Pending Read and Clear Masked Interrupt -------- */
#define SPW_LINK1_PI_RCM_DISERR_Pos           _UINT32_(0)                                          /* (SPW_LINK1_PI_RCM) DisErr Position */
#define SPW_LINK1_PI_RCM_DISERR_Msk           (_UINT32_(0x1) << SPW_LINK1_PI_RCM_DISERR_Pos)       /* (SPW_LINK1_PI_RCM) DisErr Mask */
#define SPW_LINK1_PI_RCM_DISERR(value)        (SPW_LINK1_PI_RCM_DISERR_Msk & (_UINT32_(value) << SPW_LINK1_PI_RCM_DISERR_Pos)) /* Assigment of value for DISERR in the SPW_LINK1_PI_RCM register */
#define SPW_LINK1_PI_RCM_PARERR_Pos           _UINT32_(1)                                          /* (SPW_LINK1_PI_RCM) ParErr Position */
#define SPW_LINK1_PI_RCM_PARERR_Msk           (_UINT32_(0x1) << SPW_LINK1_PI_RCM_PARERR_Pos)       /* (SPW_LINK1_PI_RCM) ParErr Mask */
#define SPW_LINK1_PI_RCM_PARERR(value)        (SPW_LINK1_PI_RCM_PARERR_Msk & (_UINT32_(value) << SPW_LINK1_PI_RCM_PARERR_Pos)) /* Assigment of value for PARERR in the SPW_LINK1_PI_RCM register */
#define SPW_LINK1_PI_RCM_ESCERR_Pos           _UINT32_(2)                                          /* (SPW_LINK1_PI_RCM) ESCErr Position */
#define SPW_LINK1_PI_RCM_ESCERR_Msk           (_UINT32_(0x1) << SPW_LINK1_PI_RCM_ESCERR_Pos)       /* (SPW_LINK1_PI_RCM) ESCErr Mask */
#define SPW_LINK1_PI_RCM_ESCERR(value)        (SPW_LINK1_PI_RCM_ESCERR_Msk & (_UINT32_(value) << SPW_LINK1_PI_RCM_ESCERR_Pos)) /* Assigment of value for ESCERR in the SPW_LINK1_PI_RCM register */
#define SPW_LINK1_PI_RCM_CRERR_Pos            _UINT32_(3)                                          /* (SPW_LINK1_PI_RCM) CrErr Position */
#define SPW_LINK1_PI_RCM_CRERR_Msk            (_UINT32_(0x1) << SPW_LINK1_PI_RCM_CRERR_Pos)        /* (SPW_LINK1_PI_RCM) CrErr Mask */
#define SPW_LINK1_PI_RCM_CRERR(value)         (SPW_LINK1_PI_RCM_CRERR_Msk & (_UINT32_(value) << SPW_LINK1_PI_RCM_CRERR_Pos)) /* Assigment of value for CRERR in the SPW_LINK1_PI_RCM register */
#define SPW_LINK1_PI_RCM_LINKABORT_Pos        _UINT32_(4)                                          /* (SPW_LINK1_PI_RCM) LinkAbort Position */
#define SPW_LINK1_PI_RCM_LINKABORT_Msk        (_UINT32_(0x1) << SPW_LINK1_PI_RCM_LINKABORT_Pos)    /* (SPW_LINK1_PI_RCM) LinkAbort Mask */
#define SPW_LINK1_PI_RCM_LINKABORT(value)     (SPW_LINK1_PI_RCM_LINKABORT_Msk & (_UINT32_(value) << SPW_LINK1_PI_RCM_LINKABORT_Pos)) /* Assigment of value for LINKABORT in the SPW_LINK1_PI_RCM register */
#define SPW_LINK1_PI_RCM_EEPTRANS_Pos         _UINT32_(5)                                          /* (SPW_LINK1_PI_RCM) EEP transmitted Position */
#define SPW_LINK1_PI_RCM_EEPTRANS_Msk         (_UINT32_(0x1) << SPW_LINK1_PI_RCM_EEPTRANS_Pos)     /* (SPW_LINK1_PI_RCM) EEP transmitted Mask */
#define SPW_LINK1_PI_RCM_EEPTRANS(value)      (SPW_LINK1_PI_RCM_EEPTRANS_Msk & (_UINT32_(value) << SPW_LINK1_PI_RCM_EEPTRANS_Pos)) /* Assigment of value for EEPTRANS in the SPW_LINK1_PI_RCM register */
#define SPW_LINK1_PI_RCM_EEPREC_Pos           _UINT32_(6)                                          /* (SPW_LINK1_PI_RCM) EEP received Position */
#define SPW_LINK1_PI_RCM_EEPREC_Msk           (_UINT32_(0x1) << SPW_LINK1_PI_RCM_EEPREC_Pos)       /* (SPW_LINK1_PI_RCM) EEP received Mask */
#define SPW_LINK1_PI_RCM_EEPREC(value)        (SPW_LINK1_PI_RCM_EEPREC_Msk & (_UINT32_(value) << SPW_LINK1_PI_RCM_EEPREC_Pos)) /* Assigment of value for EEPREC in the SPW_LINK1_PI_RCM register */
#define SPW_LINK1_PI_RCM_DISCARD_Pos          _UINT32_(7)                                          /* (SPW_LINK1_PI_RCM) Discard Position */
#define SPW_LINK1_PI_RCM_DISCARD_Msk          (_UINT32_(0x1) << SPW_LINK1_PI_RCM_DISCARD_Pos)      /* (SPW_LINK1_PI_RCM) Discard Mask */
#define SPW_LINK1_PI_RCM_DISCARD(value)       (SPW_LINK1_PI_RCM_DISCARD_Msk & (_UINT32_(value) << SPW_LINK1_PI_RCM_DISCARD_Pos)) /* Assigment of value for DISCARD in the SPW_LINK1_PI_RCM register */
#define SPW_LINK1_PI_RCM_ESCEVENT2_Pos        _UINT32_(8)                                          /* (SPW_LINK1_PI_RCM) Escape Event 2 Position */
#define SPW_LINK1_PI_RCM_ESCEVENT2_Msk        (_UINT32_(0x1) << SPW_LINK1_PI_RCM_ESCEVENT2_Pos)    /* (SPW_LINK1_PI_RCM) Escape Event 2 Mask */
#define SPW_LINK1_PI_RCM_ESCEVENT2(value)     (SPW_LINK1_PI_RCM_ESCEVENT2_Msk & (_UINT32_(value) << SPW_LINK1_PI_RCM_ESCEVENT2_Pos)) /* Assigment of value for ESCEVENT2 in the SPW_LINK1_PI_RCM register */
#define SPW_LINK1_PI_RCM_ESCEVENT1_Pos        _UINT32_(9)                                          /* (SPW_LINK1_PI_RCM) Escape Event 1 Position */
#define SPW_LINK1_PI_RCM_ESCEVENT1_Msk        (_UINT32_(0x1) << SPW_LINK1_PI_RCM_ESCEVENT1_Pos)    /* (SPW_LINK1_PI_RCM) Escape Event 1 Mask */
#define SPW_LINK1_PI_RCM_ESCEVENT1(value)     (SPW_LINK1_PI_RCM_ESCEVENT1_Msk & (_UINT32_(value) << SPW_LINK1_PI_RCM_ESCEVENT1_Pos)) /* Assigment of value for ESCEVENT1 in the SPW_LINK1_PI_RCM register */
#define SPW_LINK1_PI_RCM_Msk                  _UINT32_(0x000003FF)                                 /* (SPW_LINK1_PI_RCM) Register Mask  */

#define SPW_LINK1_PI_RCM_ESCEVENT_Pos         _UINT32_(8)                                          /* (SPW_LINK1_PI_RCM Position) Escape Event x */
#define SPW_LINK1_PI_RCM_ESCEVENT_Msk         (_UINT32_(0x3) << SPW_LINK1_PI_RCM_ESCEVENT_Pos)     /* (SPW_LINK1_PI_RCM Mask) ESCEVENT */
#define SPW_LINK1_PI_RCM_ESCEVENT(value)      (SPW_LINK1_PI_RCM_ESCEVENT_Msk & (_UINT32_(value) << SPW_LINK1_PI_RCM_ESCEVENT_Pos)) 

/* -------- SPW_LINK1_PI_R : (SPW Offset: 0x408) ( R/ 32) SpW Link 1 Pending Read Interrupt -------- */
#define SPW_LINK1_PI_R_DISERR_Pos             _UINT32_(0)                                          /* (SPW_LINK1_PI_R) DisErr Position */
#define SPW_LINK1_PI_R_DISERR_Msk             (_UINT32_(0x1) << SPW_LINK1_PI_R_DISERR_Pos)         /* (SPW_LINK1_PI_R) DisErr Mask */
#define SPW_LINK1_PI_R_DISERR(value)          (SPW_LINK1_PI_R_DISERR_Msk & (_UINT32_(value) << SPW_LINK1_PI_R_DISERR_Pos)) /* Assigment of value for DISERR in the SPW_LINK1_PI_R register */
#define SPW_LINK1_PI_R_PARERR_Pos             _UINT32_(1)                                          /* (SPW_LINK1_PI_R) ParErr Position */
#define SPW_LINK1_PI_R_PARERR_Msk             (_UINT32_(0x1) << SPW_LINK1_PI_R_PARERR_Pos)         /* (SPW_LINK1_PI_R) ParErr Mask */
#define SPW_LINK1_PI_R_PARERR(value)          (SPW_LINK1_PI_R_PARERR_Msk & (_UINT32_(value) << SPW_LINK1_PI_R_PARERR_Pos)) /* Assigment of value for PARERR in the SPW_LINK1_PI_R register */
#define SPW_LINK1_PI_R_ESCERR_Pos             _UINT32_(2)                                          /* (SPW_LINK1_PI_R) ESCErr Position */
#define SPW_LINK1_PI_R_ESCERR_Msk             (_UINT32_(0x1) << SPW_LINK1_PI_R_ESCERR_Pos)         /* (SPW_LINK1_PI_R) ESCErr Mask */
#define SPW_LINK1_PI_R_ESCERR(value)          (SPW_LINK1_PI_R_ESCERR_Msk & (_UINT32_(value) << SPW_LINK1_PI_R_ESCERR_Pos)) /* Assigment of value for ESCERR in the SPW_LINK1_PI_R register */
#define SPW_LINK1_PI_R_CRERR_Pos              _UINT32_(3)                                          /* (SPW_LINK1_PI_R) CrErr Position */
#define SPW_LINK1_PI_R_CRERR_Msk              (_UINT32_(0x1) << SPW_LINK1_PI_R_CRERR_Pos)          /* (SPW_LINK1_PI_R) CrErr Mask */
#define SPW_LINK1_PI_R_CRERR(value)           (SPW_LINK1_PI_R_CRERR_Msk & (_UINT32_(value) << SPW_LINK1_PI_R_CRERR_Pos)) /* Assigment of value for CRERR in the SPW_LINK1_PI_R register */
#define SPW_LINK1_PI_R_LINKABORT_Pos          _UINT32_(4)                                          /* (SPW_LINK1_PI_R) LinkAbort Position */
#define SPW_LINK1_PI_R_LINKABORT_Msk          (_UINT32_(0x1) << SPW_LINK1_PI_R_LINKABORT_Pos)      /* (SPW_LINK1_PI_R) LinkAbort Mask */
#define SPW_LINK1_PI_R_LINKABORT(value)       (SPW_LINK1_PI_R_LINKABORT_Msk & (_UINT32_(value) << SPW_LINK1_PI_R_LINKABORT_Pos)) /* Assigment of value for LINKABORT in the SPW_LINK1_PI_R register */
#define SPW_LINK1_PI_R_EEPTRANS_Pos           _UINT32_(5)                                          /* (SPW_LINK1_PI_R) EEP transmitted Position */
#define SPW_LINK1_PI_R_EEPTRANS_Msk           (_UINT32_(0x1) << SPW_LINK1_PI_R_EEPTRANS_Pos)       /* (SPW_LINK1_PI_R) EEP transmitted Mask */
#define SPW_LINK1_PI_R_EEPTRANS(value)        (SPW_LINK1_PI_R_EEPTRANS_Msk & (_UINT32_(value) << SPW_LINK1_PI_R_EEPTRANS_Pos)) /* Assigment of value for EEPTRANS in the SPW_LINK1_PI_R register */
#define SPW_LINK1_PI_R_EEPREC_Pos             _UINT32_(6)                                          /* (SPW_LINK1_PI_R) EEP received Position */
#define SPW_LINK1_PI_R_EEPREC_Msk             (_UINT32_(0x1) << SPW_LINK1_PI_R_EEPREC_Pos)         /* (SPW_LINK1_PI_R) EEP received Mask */
#define SPW_LINK1_PI_R_EEPREC(value)          (SPW_LINK1_PI_R_EEPREC_Msk & (_UINT32_(value) << SPW_LINK1_PI_R_EEPREC_Pos)) /* Assigment of value for EEPREC in the SPW_LINK1_PI_R register */
#define SPW_LINK1_PI_R_DISCARD_Pos            _UINT32_(7)                                          /* (SPW_LINK1_PI_R) Discard Position */
#define SPW_LINK1_PI_R_DISCARD_Msk            (_UINT32_(0x1) << SPW_LINK1_PI_R_DISCARD_Pos)        /* (SPW_LINK1_PI_R) Discard Mask */
#define SPW_LINK1_PI_R_DISCARD(value)         (SPW_LINK1_PI_R_DISCARD_Msk & (_UINT32_(value) << SPW_LINK1_PI_R_DISCARD_Pos)) /* Assigment of value for DISCARD in the SPW_LINK1_PI_R register */
#define SPW_LINK1_PI_R_ESCEVENT2_Pos          _UINT32_(8)                                          /* (SPW_LINK1_PI_R) Escape Event 2 Position */
#define SPW_LINK1_PI_R_ESCEVENT2_Msk          (_UINT32_(0x1) << SPW_LINK1_PI_R_ESCEVENT2_Pos)      /* (SPW_LINK1_PI_R) Escape Event 2 Mask */
#define SPW_LINK1_PI_R_ESCEVENT2(value)       (SPW_LINK1_PI_R_ESCEVENT2_Msk & (_UINT32_(value) << SPW_LINK1_PI_R_ESCEVENT2_Pos)) /* Assigment of value for ESCEVENT2 in the SPW_LINK1_PI_R register */
#define SPW_LINK1_PI_R_ESCEVENT1_Pos          _UINT32_(9)                                          /* (SPW_LINK1_PI_R) Escape Event 1 Position */
#define SPW_LINK1_PI_R_ESCEVENT1_Msk          (_UINT32_(0x1) << SPW_LINK1_PI_R_ESCEVENT1_Pos)      /* (SPW_LINK1_PI_R) Escape Event 1 Mask */
#define SPW_LINK1_PI_R_ESCEVENT1(value)       (SPW_LINK1_PI_R_ESCEVENT1_Msk & (_UINT32_(value) << SPW_LINK1_PI_R_ESCEVENT1_Pos)) /* Assigment of value for ESCEVENT1 in the SPW_LINK1_PI_R register */
#define SPW_LINK1_PI_R_Msk                    _UINT32_(0x000003FF)                                 /* (SPW_LINK1_PI_R) Register Mask  */

#define SPW_LINK1_PI_R_ESCEVENT_Pos           _UINT32_(8)                                          /* (SPW_LINK1_PI_R Position) Escape Event x */
#define SPW_LINK1_PI_R_ESCEVENT_Msk           (_UINT32_(0x3) << SPW_LINK1_PI_R_ESCEVENT_Pos)       /* (SPW_LINK1_PI_R Mask) ESCEVENT */
#define SPW_LINK1_PI_R_ESCEVENT(value)        (SPW_LINK1_PI_R_ESCEVENT_Msk & (_UINT32_(value) << SPW_LINK1_PI_R_ESCEVENT_Pos)) 

/* -------- SPW_LINK1_PI_RCS : (SPW Offset: 0x40C) (R/W 32) SpW Link 1 Pending Read, Clear and Enabed Interrupt -------- */
#define SPW_LINK1_PI_RCS_DISERR_Pos           _UINT32_(0)                                          /* (SPW_LINK1_PI_RCS) DisErr Position */
#define SPW_LINK1_PI_RCS_DISERR_Msk           (_UINT32_(0x1) << SPW_LINK1_PI_RCS_DISERR_Pos)       /* (SPW_LINK1_PI_RCS) DisErr Mask */
#define SPW_LINK1_PI_RCS_DISERR(value)        (SPW_LINK1_PI_RCS_DISERR_Msk & (_UINT32_(value) << SPW_LINK1_PI_RCS_DISERR_Pos)) /* Assigment of value for DISERR in the SPW_LINK1_PI_RCS register */
#define SPW_LINK1_PI_RCS_PARERR_Pos           _UINT32_(1)                                          /* (SPW_LINK1_PI_RCS) ParErr Position */
#define SPW_LINK1_PI_RCS_PARERR_Msk           (_UINT32_(0x1) << SPW_LINK1_PI_RCS_PARERR_Pos)       /* (SPW_LINK1_PI_RCS) ParErr Mask */
#define SPW_LINK1_PI_RCS_PARERR(value)        (SPW_LINK1_PI_RCS_PARERR_Msk & (_UINT32_(value) << SPW_LINK1_PI_RCS_PARERR_Pos)) /* Assigment of value for PARERR in the SPW_LINK1_PI_RCS register */
#define SPW_LINK1_PI_RCS_ESCERR_Pos           _UINT32_(2)                                          /* (SPW_LINK1_PI_RCS) ESCErr Position */
#define SPW_LINK1_PI_RCS_ESCERR_Msk           (_UINT32_(0x1) << SPW_LINK1_PI_RCS_ESCERR_Pos)       /* (SPW_LINK1_PI_RCS) ESCErr Mask */
#define SPW_LINK1_PI_RCS_ESCERR(value)        (SPW_LINK1_PI_RCS_ESCERR_Msk & (_UINT32_(value) << SPW_LINK1_PI_RCS_ESCERR_Pos)) /* Assigment of value for ESCERR in the SPW_LINK1_PI_RCS register */
#define SPW_LINK1_PI_RCS_CRERR_Pos            _UINT32_(3)                                          /* (SPW_LINK1_PI_RCS) CrErr Position */
#define SPW_LINK1_PI_RCS_CRERR_Msk            (_UINT32_(0x1) << SPW_LINK1_PI_RCS_CRERR_Pos)        /* (SPW_LINK1_PI_RCS) CrErr Mask */
#define SPW_LINK1_PI_RCS_CRERR(value)         (SPW_LINK1_PI_RCS_CRERR_Msk & (_UINT32_(value) << SPW_LINK1_PI_RCS_CRERR_Pos)) /* Assigment of value for CRERR in the SPW_LINK1_PI_RCS register */
#define SPW_LINK1_PI_RCS_LINKABORT_Pos        _UINT32_(4)                                          /* (SPW_LINK1_PI_RCS) LinkAbort Position */
#define SPW_LINK1_PI_RCS_LINKABORT_Msk        (_UINT32_(0x1) << SPW_LINK1_PI_RCS_LINKABORT_Pos)    /* (SPW_LINK1_PI_RCS) LinkAbort Mask */
#define SPW_LINK1_PI_RCS_LINKABORT(value)     (SPW_LINK1_PI_RCS_LINKABORT_Msk & (_UINT32_(value) << SPW_LINK1_PI_RCS_LINKABORT_Pos)) /* Assigment of value for LINKABORT in the SPW_LINK1_PI_RCS register */
#define SPW_LINK1_PI_RCS_EEPTRANS_Pos         _UINT32_(5)                                          /* (SPW_LINK1_PI_RCS) EEP transmitted Position */
#define SPW_LINK1_PI_RCS_EEPTRANS_Msk         (_UINT32_(0x1) << SPW_LINK1_PI_RCS_EEPTRANS_Pos)     /* (SPW_LINK1_PI_RCS) EEP transmitted Mask */
#define SPW_LINK1_PI_RCS_EEPTRANS(value)      (SPW_LINK1_PI_RCS_EEPTRANS_Msk & (_UINT32_(value) << SPW_LINK1_PI_RCS_EEPTRANS_Pos)) /* Assigment of value for EEPTRANS in the SPW_LINK1_PI_RCS register */
#define SPW_LINK1_PI_RCS_EEPREC_Pos           _UINT32_(6)                                          /* (SPW_LINK1_PI_RCS) EEP received Position */
#define SPW_LINK1_PI_RCS_EEPREC_Msk           (_UINT32_(0x1) << SPW_LINK1_PI_RCS_EEPREC_Pos)       /* (SPW_LINK1_PI_RCS) EEP received Mask */
#define SPW_LINK1_PI_RCS_EEPREC(value)        (SPW_LINK1_PI_RCS_EEPREC_Msk & (_UINT32_(value) << SPW_LINK1_PI_RCS_EEPREC_Pos)) /* Assigment of value for EEPREC in the SPW_LINK1_PI_RCS register */
#define SPW_LINK1_PI_RCS_DISCARD_Pos          _UINT32_(7)                                          /* (SPW_LINK1_PI_RCS) Discard Position */
#define SPW_LINK1_PI_RCS_DISCARD_Msk          (_UINT32_(0x1) << SPW_LINK1_PI_RCS_DISCARD_Pos)      /* (SPW_LINK1_PI_RCS) Discard Mask */
#define SPW_LINK1_PI_RCS_DISCARD(value)       (SPW_LINK1_PI_RCS_DISCARD_Msk & (_UINT32_(value) << SPW_LINK1_PI_RCS_DISCARD_Pos)) /* Assigment of value for DISCARD in the SPW_LINK1_PI_RCS register */
#define SPW_LINK1_PI_RCS_ESCEVENT2_Pos        _UINT32_(8)                                          /* (SPW_LINK1_PI_RCS) Escape Event 2 Position */
#define SPW_LINK1_PI_RCS_ESCEVENT2_Msk        (_UINT32_(0x1) << SPW_LINK1_PI_RCS_ESCEVENT2_Pos)    /* (SPW_LINK1_PI_RCS) Escape Event 2 Mask */
#define SPW_LINK1_PI_RCS_ESCEVENT2(value)     (SPW_LINK1_PI_RCS_ESCEVENT2_Msk & (_UINT32_(value) << SPW_LINK1_PI_RCS_ESCEVENT2_Pos)) /* Assigment of value for ESCEVENT2 in the SPW_LINK1_PI_RCS register */
#define SPW_LINK1_PI_RCS_ESCEVENT1_Pos        _UINT32_(9)                                          /* (SPW_LINK1_PI_RCS) Escape Event 1 Position */
#define SPW_LINK1_PI_RCS_ESCEVENT1_Msk        (_UINT32_(0x1) << SPW_LINK1_PI_RCS_ESCEVENT1_Pos)    /* (SPW_LINK1_PI_RCS) Escape Event 1 Mask */
#define SPW_LINK1_PI_RCS_ESCEVENT1(value)     (SPW_LINK1_PI_RCS_ESCEVENT1_Msk & (_UINT32_(value) << SPW_LINK1_PI_RCS_ESCEVENT1_Pos)) /* Assigment of value for ESCEVENT1 in the SPW_LINK1_PI_RCS register */
#define SPW_LINK1_PI_RCS_Msk                  _UINT32_(0x000003FF)                                 /* (SPW_LINK1_PI_RCS) Register Mask  */

#define SPW_LINK1_PI_RCS_ESCEVENT_Pos         _UINT32_(8)                                          /* (SPW_LINK1_PI_RCS Position) Escape Event x */
#define SPW_LINK1_PI_RCS_ESCEVENT_Msk         (_UINT32_(0x3) << SPW_LINK1_PI_RCS_ESCEVENT_Pos)     /* (SPW_LINK1_PI_RCS Mask) ESCEVENT */
#define SPW_LINK1_PI_RCS_ESCEVENT(value)      (SPW_LINK1_PI_RCS_ESCEVENT_Msk & (_UINT32_(value) << SPW_LINK1_PI_RCS_ESCEVENT_Pos)) 

/* -------- SPW_LINK1_IM : (SPW Offset: 0x410) (R/W 32) SpW Link 1 Interrupt Mask -------- */
#define SPW_LINK1_IM_DISERR_Pos               _UINT32_(0)                                          /* (SPW_LINK1_IM) DisErr Position */
#define SPW_LINK1_IM_DISERR_Msk               (_UINT32_(0x1) << SPW_LINK1_IM_DISERR_Pos)           /* (SPW_LINK1_IM) DisErr Mask */
#define SPW_LINK1_IM_DISERR(value)            (SPW_LINK1_IM_DISERR_Msk & (_UINT32_(value) << SPW_LINK1_IM_DISERR_Pos)) /* Assigment of value for DISERR in the SPW_LINK1_IM register */
#define SPW_LINK1_IM_PARERR_Pos               _UINT32_(1)                                          /* (SPW_LINK1_IM) ParErr Position */
#define SPW_LINK1_IM_PARERR_Msk               (_UINT32_(0x1) << SPW_LINK1_IM_PARERR_Pos)           /* (SPW_LINK1_IM) ParErr Mask */
#define SPW_LINK1_IM_PARERR(value)            (SPW_LINK1_IM_PARERR_Msk & (_UINT32_(value) << SPW_LINK1_IM_PARERR_Pos)) /* Assigment of value for PARERR in the SPW_LINK1_IM register */
#define SPW_LINK1_IM_ESCERR_Pos               _UINT32_(2)                                          /* (SPW_LINK1_IM) ESCErr Position */
#define SPW_LINK1_IM_ESCERR_Msk               (_UINT32_(0x1) << SPW_LINK1_IM_ESCERR_Pos)           /* (SPW_LINK1_IM) ESCErr Mask */
#define SPW_LINK1_IM_ESCERR(value)            (SPW_LINK1_IM_ESCERR_Msk & (_UINT32_(value) << SPW_LINK1_IM_ESCERR_Pos)) /* Assigment of value for ESCERR in the SPW_LINK1_IM register */
#define SPW_LINK1_IM_CRERR_Pos                _UINT32_(3)                                          /* (SPW_LINK1_IM) CrErr Position */
#define SPW_LINK1_IM_CRERR_Msk                (_UINT32_(0x1) << SPW_LINK1_IM_CRERR_Pos)            /* (SPW_LINK1_IM) CrErr Mask */
#define SPW_LINK1_IM_CRERR(value)             (SPW_LINK1_IM_CRERR_Msk & (_UINT32_(value) << SPW_LINK1_IM_CRERR_Pos)) /* Assigment of value for CRERR in the SPW_LINK1_IM register */
#define SPW_LINK1_IM_LINKABORT_Pos            _UINT32_(4)                                          /* (SPW_LINK1_IM) LinkAbort Position */
#define SPW_LINK1_IM_LINKABORT_Msk            (_UINT32_(0x1) << SPW_LINK1_IM_LINKABORT_Pos)        /* (SPW_LINK1_IM) LinkAbort Mask */
#define SPW_LINK1_IM_LINKABORT(value)         (SPW_LINK1_IM_LINKABORT_Msk & (_UINT32_(value) << SPW_LINK1_IM_LINKABORT_Pos)) /* Assigment of value for LINKABORT in the SPW_LINK1_IM register */
#define SPW_LINK1_IM_EEPTRANS_Pos             _UINT32_(5)                                          /* (SPW_LINK1_IM) EEP transmitted Position */
#define SPW_LINK1_IM_EEPTRANS_Msk             (_UINT32_(0x1) << SPW_LINK1_IM_EEPTRANS_Pos)         /* (SPW_LINK1_IM) EEP transmitted Mask */
#define SPW_LINK1_IM_EEPTRANS(value)          (SPW_LINK1_IM_EEPTRANS_Msk & (_UINT32_(value) << SPW_LINK1_IM_EEPTRANS_Pos)) /* Assigment of value for EEPTRANS in the SPW_LINK1_IM register */
#define SPW_LINK1_IM_EEPREC_Pos               _UINT32_(6)                                          /* (SPW_LINK1_IM) EEP received Position */
#define SPW_LINK1_IM_EEPREC_Msk               (_UINT32_(0x1) << SPW_LINK1_IM_EEPREC_Pos)           /* (SPW_LINK1_IM) EEP received Mask */
#define SPW_LINK1_IM_EEPREC(value)            (SPW_LINK1_IM_EEPREC_Msk & (_UINT32_(value) << SPW_LINK1_IM_EEPREC_Pos)) /* Assigment of value for EEPREC in the SPW_LINK1_IM register */
#define SPW_LINK1_IM_DISCARD_Pos              _UINT32_(7)                                          /* (SPW_LINK1_IM) Discard Position */
#define SPW_LINK1_IM_DISCARD_Msk              (_UINT32_(0x1) << SPW_LINK1_IM_DISCARD_Pos)          /* (SPW_LINK1_IM) Discard Mask */
#define SPW_LINK1_IM_DISCARD(value)           (SPW_LINK1_IM_DISCARD_Msk & (_UINT32_(value) << SPW_LINK1_IM_DISCARD_Pos)) /* Assigment of value for DISCARD in the SPW_LINK1_IM register */
#define SPW_LINK1_IM_ESCEVENT2_Pos            _UINT32_(8)                                          /* (SPW_LINK1_IM) Escape Event 2 Position */
#define SPW_LINK1_IM_ESCEVENT2_Msk            (_UINT32_(0x1) << SPW_LINK1_IM_ESCEVENT2_Pos)        /* (SPW_LINK1_IM) Escape Event 2 Mask */
#define SPW_LINK1_IM_ESCEVENT2(value)         (SPW_LINK1_IM_ESCEVENT2_Msk & (_UINT32_(value) << SPW_LINK1_IM_ESCEVENT2_Pos)) /* Assigment of value for ESCEVENT2 in the SPW_LINK1_IM register */
#define SPW_LINK1_IM_ESCEVENT1_Pos            _UINT32_(9)                                          /* (SPW_LINK1_IM) Escape Event 1 Position */
#define SPW_LINK1_IM_ESCEVENT1_Msk            (_UINT32_(0x1) << SPW_LINK1_IM_ESCEVENT1_Pos)        /* (SPW_LINK1_IM) Escape Event 1 Mask */
#define SPW_LINK1_IM_ESCEVENT1(value)         (SPW_LINK1_IM_ESCEVENT1_Msk & (_UINT32_(value) << SPW_LINK1_IM_ESCEVENT1_Pos)) /* Assigment of value for ESCEVENT1 in the SPW_LINK1_IM register */
#define SPW_LINK1_IM_Msk                      _UINT32_(0x000003FF)                                 /* (SPW_LINK1_IM) Register Mask  */

#define SPW_LINK1_IM_ESCEVENT_Pos             _UINT32_(8)                                          /* (SPW_LINK1_IM Position) Escape Event x */
#define SPW_LINK1_IM_ESCEVENT_Msk             (_UINT32_(0x3) << SPW_LINK1_IM_ESCEVENT_Pos)         /* (SPW_LINK1_IM Mask) ESCEVENT */
#define SPW_LINK1_IM_ESCEVENT(value)          (SPW_LINK1_IM_ESCEVENT_Msk & (_UINT32_(value) << SPW_LINK1_IM_ESCEVENT_Pos)) 

/* -------- SPW_LINK1_PI_C : (SPW Offset: 0x414) ( /W 32) SpW Link 1 Clear Pending Interrupt -------- */
#define SPW_LINK1_PI_C_DISERR_Pos             _UINT32_(0)                                          /* (SPW_LINK1_PI_C) DisErr Position */
#define SPW_LINK1_PI_C_DISERR_Msk             (_UINT32_(0x1) << SPW_LINK1_PI_C_DISERR_Pos)         /* (SPW_LINK1_PI_C) DisErr Mask */
#define SPW_LINK1_PI_C_DISERR(value)          (SPW_LINK1_PI_C_DISERR_Msk & (_UINT32_(value) << SPW_LINK1_PI_C_DISERR_Pos)) /* Assigment of value for DISERR in the SPW_LINK1_PI_C register */
#define SPW_LINK1_PI_C_PARERR_Pos             _UINT32_(1)                                          /* (SPW_LINK1_PI_C) ParErr Position */
#define SPW_LINK1_PI_C_PARERR_Msk             (_UINT32_(0x1) << SPW_LINK1_PI_C_PARERR_Pos)         /* (SPW_LINK1_PI_C) ParErr Mask */
#define SPW_LINK1_PI_C_PARERR(value)          (SPW_LINK1_PI_C_PARERR_Msk & (_UINT32_(value) << SPW_LINK1_PI_C_PARERR_Pos)) /* Assigment of value for PARERR in the SPW_LINK1_PI_C register */
#define SPW_LINK1_PI_C_ESCERR_Pos             _UINT32_(2)                                          /* (SPW_LINK1_PI_C) ESCErr Position */
#define SPW_LINK1_PI_C_ESCERR_Msk             (_UINT32_(0x1) << SPW_LINK1_PI_C_ESCERR_Pos)         /* (SPW_LINK1_PI_C) ESCErr Mask */
#define SPW_LINK1_PI_C_ESCERR(value)          (SPW_LINK1_PI_C_ESCERR_Msk & (_UINT32_(value) << SPW_LINK1_PI_C_ESCERR_Pos)) /* Assigment of value for ESCERR in the SPW_LINK1_PI_C register */
#define SPW_LINK1_PI_C_CRERR_Pos              _UINT32_(3)                                          /* (SPW_LINK1_PI_C) CrErr Position */
#define SPW_LINK1_PI_C_CRERR_Msk              (_UINT32_(0x1) << SPW_LINK1_PI_C_CRERR_Pos)          /* (SPW_LINK1_PI_C) CrErr Mask */
#define SPW_LINK1_PI_C_CRERR(value)           (SPW_LINK1_PI_C_CRERR_Msk & (_UINT32_(value) << SPW_LINK1_PI_C_CRERR_Pos)) /* Assigment of value for CRERR in the SPW_LINK1_PI_C register */
#define SPW_LINK1_PI_C_LINKABORT_Pos          _UINT32_(4)                                          /* (SPW_LINK1_PI_C) LinkAbort Position */
#define SPW_LINK1_PI_C_LINKABORT_Msk          (_UINT32_(0x1) << SPW_LINK1_PI_C_LINKABORT_Pos)      /* (SPW_LINK1_PI_C) LinkAbort Mask */
#define SPW_LINK1_PI_C_LINKABORT(value)       (SPW_LINK1_PI_C_LINKABORT_Msk & (_UINT32_(value) << SPW_LINK1_PI_C_LINKABORT_Pos)) /* Assigment of value for LINKABORT in the SPW_LINK1_PI_C register */
#define SPW_LINK1_PI_C_EEPTRANS_Pos           _UINT32_(5)                                          /* (SPW_LINK1_PI_C) EEP transmitted Position */
#define SPW_LINK1_PI_C_EEPTRANS_Msk           (_UINT32_(0x1) << SPW_LINK1_PI_C_EEPTRANS_Pos)       /* (SPW_LINK1_PI_C) EEP transmitted Mask */
#define SPW_LINK1_PI_C_EEPTRANS(value)        (SPW_LINK1_PI_C_EEPTRANS_Msk & (_UINT32_(value) << SPW_LINK1_PI_C_EEPTRANS_Pos)) /* Assigment of value for EEPTRANS in the SPW_LINK1_PI_C register */
#define SPW_LINK1_PI_C_EEPREC_Pos             _UINT32_(6)                                          /* (SPW_LINK1_PI_C) EEP received Position */
#define SPW_LINK1_PI_C_EEPREC_Msk             (_UINT32_(0x1) << SPW_LINK1_PI_C_EEPREC_Pos)         /* (SPW_LINK1_PI_C) EEP received Mask */
#define SPW_LINK1_PI_C_EEPREC(value)          (SPW_LINK1_PI_C_EEPREC_Msk & (_UINT32_(value) << SPW_LINK1_PI_C_EEPREC_Pos)) /* Assigment of value for EEPREC in the SPW_LINK1_PI_C register */
#define SPW_LINK1_PI_C_DISCARD_Pos            _UINT32_(7)                                          /* (SPW_LINK1_PI_C) Discard Position */
#define SPW_LINK1_PI_C_DISCARD_Msk            (_UINT32_(0x1) << SPW_LINK1_PI_C_DISCARD_Pos)        /* (SPW_LINK1_PI_C) Discard Mask */
#define SPW_LINK1_PI_C_DISCARD(value)         (SPW_LINK1_PI_C_DISCARD_Msk & (_UINT32_(value) << SPW_LINK1_PI_C_DISCARD_Pos)) /* Assigment of value for DISCARD in the SPW_LINK1_PI_C register */
#define SPW_LINK1_PI_C_ESCEVENT2_Pos          _UINT32_(8)                                          /* (SPW_LINK1_PI_C) Escape Event 2 Position */
#define SPW_LINK1_PI_C_ESCEVENT2_Msk          (_UINT32_(0x1) << SPW_LINK1_PI_C_ESCEVENT2_Pos)      /* (SPW_LINK1_PI_C) Escape Event 2 Mask */
#define SPW_LINK1_PI_C_ESCEVENT2(value)       (SPW_LINK1_PI_C_ESCEVENT2_Msk & (_UINT32_(value) << SPW_LINK1_PI_C_ESCEVENT2_Pos)) /* Assigment of value for ESCEVENT2 in the SPW_LINK1_PI_C register */
#define SPW_LINK1_PI_C_ESCEVENT1_Pos          _UINT32_(9)                                          /* (SPW_LINK1_PI_C) Escape Event 1 Position */
#define SPW_LINK1_PI_C_ESCEVENT1_Msk          (_UINT32_(0x1) << SPW_LINK1_PI_C_ESCEVENT1_Pos)      /* (SPW_LINK1_PI_C) Escape Event 1 Mask */
#define SPW_LINK1_PI_C_ESCEVENT1(value)       (SPW_LINK1_PI_C_ESCEVENT1_Msk & (_UINT32_(value) << SPW_LINK1_PI_C_ESCEVENT1_Pos)) /* Assigment of value for ESCEVENT1 in the SPW_LINK1_PI_C register */
#define SPW_LINK1_PI_C_Msk                    _UINT32_(0x000003FF)                                 /* (SPW_LINK1_PI_C) Register Mask  */

#define SPW_LINK1_PI_C_ESCEVENT_Pos           _UINT32_(8)                                          /* (SPW_LINK1_PI_C Position) Escape Event x */
#define SPW_LINK1_PI_C_ESCEVENT_Msk           (_UINT32_(0x3) << SPW_LINK1_PI_C_ESCEVENT_Pos)       /* (SPW_LINK1_PI_C Mask) ESCEVENT */
#define SPW_LINK1_PI_C_ESCEVENT(value)        (SPW_LINK1_PI_C_ESCEVENT_Msk & (_UINT32_(value) << SPW_LINK1_PI_C_ESCEVENT_Pos)) 

/* -------- SPW_LINK1_IM_S : (SPW Offset: 0x418) ( /W 32) SpW Link 1 Interrupt Set Mask -------- */
#define SPW_LINK1_IM_S_DISERR_Pos             _UINT32_(0)                                          /* (SPW_LINK1_IM_S) DisErr Position */
#define SPW_LINK1_IM_S_DISERR_Msk             (_UINT32_(0x1) << SPW_LINK1_IM_S_DISERR_Pos)         /* (SPW_LINK1_IM_S) DisErr Mask */
#define SPW_LINK1_IM_S_DISERR(value)          (SPW_LINK1_IM_S_DISERR_Msk & (_UINT32_(value) << SPW_LINK1_IM_S_DISERR_Pos)) /* Assigment of value for DISERR in the SPW_LINK1_IM_S register */
#define SPW_LINK1_IM_S_PARERR_Pos             _UINT32_(1)                                          /* (SPW_LINK1_IM_S) ParErr Position */
#define SPW_LINK1_IM_S_PARERR_Msk             (_UINT32_(0x1) << SPW_LINK1_IM_S_PARERR_Pos)         /* (SPW_LINK1_IM_S) ParErr Mask */
#define SPW_LINK1_IM_S_PARERR(value)          (SPW_LINK1_IM_S_PARERR_Msk & (_UINT32_(value) << SPW_LINK1_IM_S_PARERR_Pos)) /* Assigment of value for PARERR in the SPW_LINK1_IM_S register */
#define SPW_LINK1_IM_S_ESCERR_Pos             _UINT32_(2)                                          /* (SPW_LINK1_IM_S) ESCErr Position */
#define SPW_LINK1_IM_S_ESCERR_Msk             (_UINT32_(0x1) << SPW_LINK1_IM_S_ESCERR_Pos)         /* (SPW_LINK1_IM_S) ESCErr Mask */
#define SPW_LINK1_IM_S_ESCERR(value)          (SPW_LINK1_IM_S_ESCERR_Msk & (_UINT32_(value) << SPW_LINK1_IM_S_ESCERR_Pos)) /* Assigment of value for ESCERR in the SPW_LINK1_IM_S register */
#define SPW_LINK1_IM_S_CRERR_Pos              _UINT32_(3)                                          /* (SPW_LINK1_IM_S) CrErr Position */
#define SPW_LINK1_IM_S_CRERR_Msk              (_UINT32_(0x1) << SPW_LINK1_IM_S_CRERR_Pos)          /* (SPW_LINK1_IM_S) CrErr Mask */
#define SPW_LINK1_IM_S_CRERR(value)           (SPW_LINK1_IM_S_CRERR_Msk & (_UINT32_(value) << SPW_LINK1_IM_S_CRERR_Pos)) /* Assigment of value for CRERR in the SPW_LINK1_IM_S register */
#define SPW_LINK1_IM_S_LINKABORT_Pos          _UINT32_(4)                                          /* (SPW_LINK1_IM_S) LinkAbort Position */
#define SPW_LINK1_IM_S_LINKABORT_Msk          (_UINT32_(0x1) << SPW_LINK1_IM_S_LINKABORT_Pos)      /* (SPW_LINK1_IM_S) LinkAbort Mask */
#define SPW_LINK1_IM_S_LINKABORT(value)       (SPW_LINK1_IM_S_LINKABORT_Msk & (_UINT32_(value) << SPW_LINK1_IM_S_LINKABORT_Pos)) /* Assigment of value for LINKABORT in the SPW_LINK1_IM_S register */
#define SPW_LINK1_IM_S_EEPTRANS_Pos           _UINT32_(5)                                          /* (SPW_LINK1_IM_S) EEP transmitted Position */
#define SPW_LINK1_IM_S_EEPTRANS_Msk           (_UINT32_(0x1) << SPW_LINK1_IM_S_EEPTRANS_Pos)       /* (SPW_LINK1_IM_S) EEP transmitted Mask */
#define SPW_LINK1_IM_S_EEPTRANS(value)        (SPW_LINK1_IM_S_EEPTRANS_Msk & (_UINT32_(value) << SPW_LINK1_IM_S_EEPTRANS_Pos)) /* Assigment of value for EEPTRANS in the SPW_LINK1_IM_S register */
#define SPW_LINK1_IM_S_EEPREC_Pos             _UINT32_(6)                                          /* (SPW_LINK1_IM_S) EEP received Position */
#define SPW_LINK1_IM_S_EEPREC_Msk             (_UINT32_(0x1) << SPW_LINK1_IM_S_EEPREC_Pos)         /* (SPW_LINK1_IM_S) EEP received Mask */
#define SPW_LINK1_IM_S_EEPREC(value)          (SPW_LINK1_IM_S_EEPREC_Msk & (_UINT32_(value) << SPW_LINK1_IM_S_EEPREC_Pos)) /* Assigment of value for EEPREC in the SPW_LINK1_IM_S register */
#define SPW_LINK1_IM_S_DISCARD_Pos            _UINT32_(7)                                          /* (SPW_LINK1_IM_S) Discard Position */
#define SPW_LINK1_IM_S_DISCARD_Msk            (_UINT32_(0x1) << SPW_LINK1_IM_S_DISCARD_Pos)        /* (SPW_LINK1_IM_S) Discard Mask */
#define SPW_LINK1_IM_S_DISCARD(value)         (SPW_LINK1_IM_S_DISCARD_Msk & (_UINT32_(value) << SPW_LINK1_IM_S_DISCARD_Pos)) /* Assigment of value for DISCARD in the SPW_LINK1_IM_S register */
#define SPW_LINK1_IM_S_ESCEVENT2_Pos          _UINT32_(8)                                          /* (SPW_LINK1_IM_S) Escape Event 2 Position */
#define SPW_LINK1_IM_S_ESCEVENT2_Msk          (_UINT32_(0x1) << SPW_LINK1_IM_S_ESCEVENT2_Pos)      /* (SPW_LINK1_IM_S) Escape Event 2 Mask */
#define SPW_LINK1_IM_S_ESCEVENT2(value)       (SPW_LINK1_IM_S_ESCEVENT2_Msk & (_UINT32_(value) << SPW_LINK1_IM_S_ESCEVENT2_Pos)) /* Assigment of value for ESCEVENT2 in the SPW_LINK1_IM_S register */
#define SPW_LINK1_IM_S_ESCEVENT1_Pos          _UINT32_(9)                                          /* (SPW_LINK1_IM_S) Escape Event 1 Position */
#define SPW_LINK1_IM_S_ESCEVENT1_Msk          (_UINT32_(0x1) << SPW_LINK1_IM_S_ESCEVENT1_Pos)      /* (SPW_LINK1_IM_S) Escape Event 1 Mask */
#define SPW_LINK1_IM_S_ESCEVENT1(value)       (SPW_LINK1_IM_S_ESCEVENT1_Msk & (_UINT32_(value) << SPW_LINK1_IM_S_ESCEVENT1_Pos)) /* Assigment of value for ESCEVENT1 in the SPW_LINK1_IM_S register */
#define SPW_LINK1_IM_S_Msk                    _UINT32_(0x000003FF)                                 /* (SPW_LINK1_IM_S) Register Mask  */

#define SPW_LINK1_IM_S_ESCEVENT_Pos           _UINT32_(8)                                          /* (SPW_LINK1_IM_S Position) Escape Event x */
#define SPW_LINK1_IM_S_ESCEVENT_Msk           (_UINT32_(0x3) << SPW_LINK1_IM_S_ESCEVENT_Pos)       /* (SPW_LINK1_IM_S Mask) ESCEVENT */
#define SPW_LINK1_IM_S_ESCEVENT(value)        (SPW_LINK1_IM_S_ESCEVENT_Msk & (_UINT32_(value) << SPW_LINK1_IM_S_ESCEVENT_Pos)) 

/* -------- SPW_LINK1_IM_C : (SPW Offset: 0x41C) ( /W 32) SpW Link 1 Interrupt Clear Mask -------- */
#define SPW_LINK1_IM_C_DISERR_Pos             _UINT32_(0)                                          /* (SPW_LINK1_IM_C) DisErr Position */
#define SPW_LINK1_IM_C_DISERR_Msk             (_UINT32_(0x1) << SPW_LINK1_IM_C_DISERR_Pos)         /* (SPW_LINK1_IM_C) DisErr Mask */
#define SPW_LINK1_IM_C_DISERR(value)          (SPW_LINK1_IM_C_DISERR_Msk & (_UINT32_(value) << SPW_LINK1_IM_C_DISERR_Pos)) /* Assigment of value for DISERR in the SPW_LINK1_IM_C register */
#define SPW_LINK1_IM_C_PARERR_Pos             _UINT32_(1)                                          /* (SPW_LINK1_IM_C) ParErr Position */
#define SPW_LINK1_IM_C_PARERR_Msk             (_UINT32_(0x1) << SPW_LINK1_IM_C_PARERR_Pos)         /* (SPW_LINK1_IM_C) ParErr Mask */
#define SPW_LINK1_IM_C_PARERR(value)          (SPW_LINK1_IM_C_PARERR_Msk & (_UINT32_(value) << SPW_LINK1_IM_C_PARERR_Pos)) /* Assigment of value for PARERR in the SPW_LINK1_IM_C register */
#define SPW_LINK1_IM_C_ESCERR_Pos             _UINT32_(2)                                          /* (SPW_LINK1_IM_C) ESCErr Position */
#define SPW_LINK1_IM_C_ESCERR_Msk             (_UINT32_(0x1) << SPW_LINK1_IM_C_ESCERR_Pos)         /* (SPW_LINK1_IM_C) ESCErr Mask */
#define SPW_LINK1_IM_C_ESCERR(value)          (SPW_LINK1_IM_C_ESCERR_Msk & (_UINT32_(value) << SPW_LINK1_IM_C_ESCERR_Pos)) /* Assigment of value for ESCERR in the SPW_LINK1_IM_C register */
#define SPW_LINK1_IM_C_CRERR_Pos              _UINT32_(3)                                          /* (SPW_LINK1_IM_C) CrErr Position */
#define SPW_LINK1_IM_C_CRERR_Msk              (_UINT32_(0x1) << SPW_LINK1_IM_C_CRERR_Pos)          /* (SPW_LINK1_IM_C) CrErr Mask */
#define SPW_LINK1_IM_C_CRERR(value)           (SPW_LINK1_IM_C_CRERR_Msk & (_UINT32_(value) << SPW_LINK1_IM_C_CRERR_Pos)) /* Assigment of value for CRERR in the SPW_LINK1_IM_C register */
#define SPW_LINK1_IM_C_LINKABORT_Pos          _UINT32_(4)                                          /* (SPW_LINK1_IM_C) LinkAbort Position */
#define SPW_LINK1_IM_C_LINKABORT_Msk          (_UINT32_(0x1) << SPW_LINK1_IM_C_LINKABORT_Pos)      /* (SPW_LINK1_IM_C) LinkAbort Mask */
#define SPW_LINK1_IM_C_LINKABORT(value)       (SPW_LINK1_IM_C_LINKABORT_Msk & (_UINT32_(value) << SPW_LINK1_IM_C_LINKABORT_Pos)) /* Assigment of value for LINKABORT in the SPW_LINK1_IM_C register */
#define SPW_LINK1_IM_C_EEPTRANS_Pos           _UINT32_(5)                                          /* (SPW_LINK1_IM_C) EEP transmitted Position */
#define SPW_LINK1_IM_C_EEPTRANS_Msk           (_UINT32_(0x1) << SPW_LINK1_IM_C_EEPTRANS_Pos)       /* (SPW_LINK1_IM_C) EEP transmitted Mask */
#define SPW_LINK1_IM_C_EEPTRANS(value)        (SPW_LINK1_IM_C_EEPTRANS_Msk & (_UINT32_(value) << SPW_LINK1_IM_C_EEPTRANS_Pos)) /* Assigment of value for EEPTRANS in the SPW_LINK1_IM_C register */
#define SPW_LINK1_IM_C_EEPREC_Pos             _UINT32_(6)                                          /* (SPW_LINK1_IM_C) EEP received Position */
#define SPW_LINK1_IM_C_EEPREC_Msk             (_UINT32_(0x1) << SPW_LINK1_IM_C_EEPREC_Pos)         /* (SPW_LINK1_IM_C) EEP received Mask */
#define SPW_LINK1_IM_C_EEPREC(value)          (SPW_LINK1_IM_C_EEPREC_Msk & (_UINT32_(value) << SPW_LINK1_IM_C_EEPREC_Pos)) /* Assigment of value for EEPREC in the SPW_LINK1_IM_C register */
#define SPW_LINK1_IM_C_DISCARD_Pos            _UINT32_(7)                                          /* (SPW_LINK1_IM_C) Discard Position */
#define SPW_LINK1_IM_C_DISCARD_Msk            (_UINT32_(0x1) << SPW_LINK1_IM_C_DISCARD_Pos)        /* (SPW_LINK1_IM_C) Discard Mask */
#define SPW_LINK1_IM_C_DISCARD(value)         (SPW_LINK1_IM_C_DISCARD_Msk & (_UINT32_(value) << SPW_LINK1_IM_C_DISCARD_Pos)) /* Assigment of value for DISCARD in the SPW_LINK1_IM_C register */
#define SPW_LINK1_IM_C_ESCEVENT2_Pos          _UINT32_(8)                                          /* (SPW_LINK1_IM_C) Escape Event 2 Position */
#define SPW_LINK1_IM_C_ESCEVENT2_Msk          (_UINT32_(0x1) << SPW_LINK1_IM_C_ESCEVENT2_Pos)      /* (SPW_LINK1_IM_C) Escape Event 2 Mask */
#define SPW_LINK1_IM_C_ESCEVENT2(value)       (SPW_LINK1_IM_C_ESCEVENT2_Msk & (_UINT32_(value) << SPW_LINK1_IM_C_ESCEVENT2_Pos)) /* Assigment of value for ESCEVENT2 in the SPW_LINK1_IM_C register */
#define SPW_LINK1_IM_C_ESCEVENT1_Pos          _UINT32_(9)                                          /* (SPW_LINK1_IM_C) Escape Event 1 Position */
#define SPW_LINK1_IM_C_ESCEVENT1_Msk          (_UINT32_(0x1) << SPW_LINK1_IM_C_ESCEVENT1_Pos)      /* (SPW_LINK1_IM_C) Escape Event 1 Mask */
#define SPW_LINK1_IM_C_ESCEVENT1(value)       (SPW_LINK1_IM_C_ESCEVENT1_Msk & (_UINT32_(value) << SPW_LINK1_IM_C_ESCEVENT1_Pos)) /* Assigment of value for ESCEVENT1 in the SPW_LINK1_IM_C register */
#define SPW_LINK1_IM_C_Msk                    _UINT32_(0x000003FF)                                 /* (SPW_LINK1_IM_C) Register Mask  */

#define SPW_LINK1_IM_C_ESCEVENT_Pos           _UINT32_(8)                                          /* (SPW_LINK1_IM_C Position) Escape Event x */
#define SPW_LINK1_IM_C_ESCEVENT_Msk           (_UINT32_(0x3) << SPW_LINK1_IM_C_ESCEVENT_Pos)       /* (SPW_LINK1_IM_C Mask) ESCEVENT */
#define SPW_LINK1_IM_C_ESCEVENT(value)        (SPW_LINK1_IM_C_ESCEVENT_Msk & (_UINT32_(value) << SPW_LINK1_IM_C_ESCEVENT_Pos)) 

/* -------- SPW_LINK1_CFG : (SPW Offset: 0x420) (R/W 32) SpW Link 1 Config -------- */
#define SPW_LINK1_CFG_COMMAND_Pos             _UINT32_(0)                                          /* (SPW_LINK1_CFG) Command Position */
#define SPW_LINK1_CFG_COMMAND_Msk             (_UINT32_(0x3) << SPW_LINK1_CFG_COMMAND_Pos)         /* (SPW_LINK1_CFG) Command Mask */
#define SPW_LINK1_CFG_COMMAND(value)          (SPW_LINK1_CFG_COMMAND_Msk & (_UINT32_(value) << SPW_LINK1_CFG_COMMAND_Pos)) /* Assigment of value for COMMAND in the SPW_LINK1_CFG register */
#define   SPW_LINK1_CFG_COMMAND_LINK_DISABLE_Val _UINT32_(0x0)                                        /* (SPW_LINK1_CFG) The link proceeds directly to the ErrorReset state when reaching the Run state.  */
#define   SPW_LINK1_CFG_COMMAND_NO_COMMAND_Val _UINT32_(0x1)                                        /* (SPW_LINK1_CFG) State is not actively changed.  */
#define   SPW_LINK1_CFG_COMMAND_AUTO_START_Val _UINT32_(0x2)                                        /* (SPW_LINK1_CFG) The Codec will wait in state Ready until the first NULL character is received.  */
#define   SPW_LINK1_CFG_COMMAND_LINK_START_Val _UINT32_(0x3)                                        /* (SPW_LINK1_CFG) SpaceWire link can proceed to Started state.  */
#define SPW_LINK1_CFG_COMMAND_LINK_DISABLE    (SPW_LINK1_CFG_COMMAND_LINK_DISABLE_Val << SPW_LINK1_CFG_COMMAND_Pos) /* (SPW_LINK1_CFG) The link proceeds directly to the ErrorReset state when reaching the Run state. Position  */
#define SPW_LINK1_CFG_COMMAND_NO_COMMAND      (SPW_LINK1_CFG_COMMAND_NO_COMMAND_Val << SPW_LINK1_CFG_COMMAND_Pos) /* (SPW_LINK1_CFG) State is not actively changed. Position  */
#define SPW_LINK1_CFG_COMMAND_AUTO_START      (SPW_LINK1_CFG_COMMAND_AUTO_START_Val << SPW_LINK1_CFG_COMMAND_Pos) /* (SPW_LINK1_CFG) The Codec will wait in state Ready until the first NULL character is received. Position  */
#define SPW_LINK1_CFG_COMMAND_LINK_START      (SPW_LINK1_CFG_COMMAND_LINK_START_Val << SPW_LINK1_CFG_COMMAND_Pos) /* (SPW_LINK1_CFG) SpaceWire link can proceed to Started state. Position  */
#define SPW_LINK1_CFG_Msk                     _UINT32_(0x00000003)                                 /* (SPW_LINK1_CFG) Register Mask  */


/* -------- SPW_LINK1_CLKDIV : (SPW Offset: 0x424) (R/W 32) SpW Link 1 Clock Division -------- */
#define SPW_LINK1_CLKDIV_TXOPERDIV_Pos        _UINT32_(0)                                          /* (SPW_LINK1_CLKDIV) TxOperDiv Position */
#define SPW_LINK1_CLKDIV_TXOPERDIV_Msk        (_UINT32_(0x1F) << SPW_LINK1_CLKDIV_TXOPERDIV_Pos)   /* (SPW_LINK1_CLKDIV) TxOperDiv Mask */
#define SPW_LINK1_CLKDIV_TXOPERDIV(value)     (SPW_LINK1_CLKDIV_TXOPERDIV_Msk & (_UINT32_(value) << SPW_LINK1_CLKDIV_TXOPERDIV_Pos)) /* Assigment of value for TXOPERDIV in the SPW_LINK1_CLKDIV register */
#define SPW_LINK1_CLKDIV_TXINITDIV_Pos        _UINT32_(16)                                         /* (SPW_LINK1_CLKDIV) TxInitDiv Position */
#define SPW_LINK1_CLKDIV_TXINITDIV_Msk        (_UINT32_(0x1F) << SPW_LINK1_CLKDIV_TXINITDIV_Pos)   /* (SPW_LINK1_CLKDIV) TxInitDiv Mask */
#define SPW_LINK1_CLKDIV_TXINITDIV(value)     (SPW_LINK1_CLKDIV_TXINITDIV_Msk & (_UINT32_(value) << SPW_LINK1_CLKDIV_TXINITDIV_Pos)) /* Assigment of value for TXINITDIV in the SPW_LINK1_CLKDIV register */
#define SPW_LINK1_CLKDIV_Msk                  _UINT32_(0x001F001F)                                 /* (SPW_LINK1_CLKDIV) Register Mask  */


/* -------- SPW_LINK1_STATUS : (SPW Offset: 0x428) ( R/ 32) SpW Link 1 Status -------- */
#define SPW_LINK1_STATUS_LINKSTATE_Pos        _UINT32_(0)                                          /* (SPW_LINK1_STATUS) LinkState Position */
#define SPW_LINK1_STATUS_LINKSTATE_Msk        (_UINT32_(0x7) << SPW_LINK1_STATUS_LINKSTATE_Pos)    /* (SPW_LINK1_STATUS) LinkState Mask */
#define SPW_LINK1_STATUS_LINKSTATE(value)     (SPW_LINK1_STATUS_LINKSTATE_Msk & (_UINT32_(value) << SPW_LINK1_STATUS_LINKSTATE_Pos)) /* Assigment of value for LINKSTATE in the SPW_LINK1_STATUS register */
#define   SPW_LINK1_STATUS_LINKSTATE_ERRORRESET_Val _UINT32_(0x0)                                        /* (SPW_LINK1_STATUS) CODEC link state machine in ErrorReset state  */
#define   SPW_LINK1_STATUS_LINKSTATE_ERRORWAIT_Val _UINT32_(0x1)                                        /* (SPW_LINK1_STATUS) CODEC link state machine in ErrorWait state  */
#define   SPW_LINK1_STATUS_LINKSTATE_READY_Val _UINT32_(0x2)                                        /* (SPW_LINK1_STATUS) CODEC link state machine in Ready state  */
#define   SPW_LINK1_STATUS_LINKSTATE_STARTED_Val _UINT32_(0x3)                                        /* (SPW_LINK1_STATUS) CODEC link state machine in Started state  */
#define   SPW_LINK1_STATUS_LINKSTATE_CONNECTING_Val _UINT32_(0x4)                                        /* (SPW_LINK1_STATUS) CODEC link state machine in Connecting state  */
#define   SPW_LINK1_STATUS_LINKSTATE_RUN_Val  _UINT32_(0x5)                                        /* (SPW_LINK1_STATUS) CODEC link state machine in Run state  */
#define SPW_LINK1_STATUS_LINKSTATE_ERRORRESET (SPW_LINK1_STATUS_LINKSTATE_ERRORRESET_Val << SPW_LINK1_STATUS_LINKSTATE_Pos) /* (SPW_LINK1_STATUS) CODEC link state machine in ErrorReset state Position  */
#define SPW_LINK1_STATUS_LINKSTATE_ERRORWAIT  (SPW_LINK1_STATUS_LINKSTATE_ERRORWAIT_Val << SPW_LINK1_STATUS_LINKSTATE_Pos) /* (SPW_LINK1_STATUS) CODEC link state machine in ErrorWait state Position  */
#define SPW_LINK1_STATUS_LINKSTATE_READY      (SPW_LINK1_STATUS_LINKSTATE_READY_Val << SPW_LINK1_STATUS_LINKSTATE_Pos) /* (SPW_LINK1_STATUS) CODEC link state machine in Ready state Position  */
#define SPW_LINK1_STATUS_LINKSTATE_STARTED    (SPW_LINK1_STATUS_LINKSTATE_STARTED_Val << SPW_LINK1_STATUS_LINKSTATE_Pos) /* (SPW_LINK1_STATUS) CODEC link state machine in Started state Position  */
#define SPW_LINK1_STATUS_LINKSTATE_CONNECTING (SPW_LINK1_STATUS_LINKSTATE_CONNECTING_Val << SPW_LINK1_STATUS_LINKSTATE_Pos) /* (SPW_LINK1_STATUS) CODEC link state machine in Connecting state Position  */
#define SPW_LINK1_STATUS_LINKSTATE_RUN        (SPW_LINK1_STATUS_LINKSTATE_RUN_Val << SPW_LINK1_STATUS_LINKSTATE_Pos) /* (SPW_LINK1_STATUS) CODEC link state machine in Run state Position  */
#define SPW_LINK1_STATUS_TXDEFDIV_Pos         _UINT32_(4)                                          /* (SPW_LINK1_STATUS) TxDefDiv Position */
#define SPW_LINK1_STATUS_TXDEFDIV_Msk         (_UINT32_(0x1F) << SPW_LINK1_STATUS_TXDEFDIV_Pos)    /* (SPW_LINK1_STATUS) TxDefDiv Mask */
#define SPW_LINK1_STATUS_TXDEFDIV(value)      (SPW_LINK1_STATUS_TXDEFDIV_Msk & (_UINT32_(value) << SPW_LINK1_STATUS_TXDEFDIV_Pos)) /* Assigment of value for TXDEFDIV in the SPW_LINK1_STATUS register */
#define SPW_LINK1_STATUS_TXEMPTY_Pos          _UINT32_(16)                                         /* (SPW_LINK1_STATUS) TxEmpty Position */
#define SPW_LINK1_STATUS_TXEMPTY_Msk          (_UINT32_(0x1) << SPW_LINK1_STATUS_TXEMPTY_Pos)      /* (SPW_LINK1_STATUS) TxEmpty Mask */
#define SPW_LINK1_STATUS_TXEMPTY(value)       (SPW_LINK1_STATUS_TXEMPTY_Msk & (_UINT32_(value) << SPW_LINK1_STATUS_TXEMPTY_Pos)) /* Assigment of value for TXEMPTY in the SPW_LINK1_STATUS register */
#define SPW_LINK1_STATUS_GOTNULL_Pos          _UINT32_(17)                                         /* (SPW_LINK1_STATUS) GotNull Position */
#define SPW_LINK1_STATUS_GOTNULL_Msk          (_UINT32_(0x1) << SPW_LINK1_STATUS_GOTNULL_Pos)      /* (SPW_LINK1_STATUS) GotNull Mask */
#define SPW_LINK1_STATUS_GOTNULL(value)       (SPW_LINK1_STATUS_GOTNULL_Msk & (_UINT32_(value) << SPW_LINK1_STATUS_GOTNULL_Pos)) /* Assigment of value for GOTNULL in the SPW_LINK1_STATUS register */
#define SPW_LINK1_STATUS_GOTFCT_Pos           _UINT32_(18)                                         /* (SPW_LINK1_STATUS) GotFCT Position */
#define SPW_LINK1_STATUS_GOTFCT_Msk           (_UINT32_(0x1) << SPW_LINK1_STATUS_GOTFCT_Pos)       /* (SPW_LINK1_STATUS) GotFCT Mask */
#define SPW_LINK1_STATUS_GOTFCT(value)        (SPW_LINK1_STATUS_GOTFCT_Msk & (_UINT32_(value) << SPW_LINK1_STATUS_GOTFCT_Pos)) /* Assigment of value for GOTFCT in the SPW_LINK1_STATUS register */
#define SPW_LINK1_STATUS_GOTNCHAR_Pos         _UINT32_(19)                                         /* (SPW_LINK1_STATUS) GotNChar Position */
#define SPW_LINK1_STATUS_GOTNCHAR_Msk         (_UINT32_(0x1) << SPW_LINK1_STATUS_GOTNCHAR_Pos)     /* (SPW_LINK1_STATUS) GotNChar Mask */
#define SPW_LINK1_STATUS_GOTNCHAR(value)      (SPW_LINK1_STATUS_GOTNCHAR_Msk & (_UINT32_(value) << SPW_LINK1_STATUS_GOTNCHAR_Pos)) /* Assigment of value for GOTNCHAR in the SPW_LINK1_STATUS register */
#define SPW_LINK1_STATUS_SEEN0_Pos            _UINT32_(20)                                         /* (SPW_LINK1_STATUS) SEEN0 Position */
#define SPW_LINK1_STATUS_SEEN0_Msk            (_UINT32_(0x1) << SPW_LINK1_STATUS_SEEN0_Pos)        /* (SPW_LINK1_STATUS) SEEN0 Mask */
#define SPW_LINK1_STATUS_SEEN0(value)         (SPW_LINK1_STATUS_SEEN0_Msk & (_UINT32_(value) << SPW_LINK1_STATUS_SEEN0_Pos)) /* Assigment of value for SEEN0 in the SPW_LINK1_STATUS register */
#define SPW_LINK1_STATUS_SEEN1_Pos            _UINT32_(21)                                         /* (SPW_LINK1_STATUS) SEEN1 Position */
#define SPW_LINK1_STATUS_SEEN1_Msk            (_UINT32_(0x1) << SPW_LINK1_STATUS_SEEN1_Pos)        /* (SPW_LINK1_STATUS) SEEN1 Mask */
#define SPW_LINK1_STATUS_SEEN1(value)         (SPW_LINK1_STATUS_SEEN1_Msk & (_UINT32_(value) << SPW_LINK1_STATUS_SEEN1_Pos)) /* Assigment of value for SEEN1 in the SPW_LINK1_STATUS register */
#define SPW_LINK1_STATUS_SEEN2_Pos            _UINT32_(22)                                         /* (SPW_LINK1_STATUS) SEEN2 Position */
#define SPW_LINK1_STATUS_SEEN2_Msk            (_UINT32_(0x1) << SPW_LINK1_STATUS_SEEN2_Pos)        /* (SPW_LINK1_STATUS) SEEN2 Mask */
#define SPW_LINK1_STATUS_SEEN2(value)         (SPW_LINK1_STATUS_SEEN2_Msk & (_UINT32_(value) << SPW_LINK1_STATUS_SEEN2_Pos)) /* Assigment of value for SEEN2 in the SPW_LINK1_STATUS register */
#define SPW_LINK1_STATUS_SEEN3_Pos            _UINT32_(23)                                         /* (SPW_LINK1_STATUS) SEEN3 Position */
#define SPW_LINK1_STATUS_SEEN3_Msk            (_UINT32_(0x1) << SPW_LINK1_STATUS_SEEN3_Pos)        /* (SPW_LINK1_STATUS) SEEN3 Mask */
#define SPW_LINK1_STATUS_SEEN3(value)         (SPW_LINK1_STATUS_SEEN3_Msk & (_UINT32_(value) << SPW_LINK1_STATUS_SEEN3_Pos)) /* Assigment of value for SEEN3 in the SPW_LINK1_STATUS register */
#define SPW_LINK1_STATUS_SEEN4_Pos            _UINT32_(24)                                         /* (SPW_LINK1_STATUS) SEEN4 Position */
#define SPW_LINK1_STATUS_SEEN4_Msk            (_UINT32_(0x1) << SPW_LINK1_STATUS_SEEN4_Pos)        /* (SPW_LINK1_STATUS) SEEN4 Mask */
#define SPW_LINK1_STATUS_SEEN4(value)         (SPW_LINK1_STATUS_SEEN4_Msk & (_UINT32_(value) << SPW_LINK1_STATUS_SEEN4_Pos)) /* Assigment of value for SEEN4 in the SPW_LINK1_STATUS register */
#define SPW_LINK1_STATUS_SEEN5_Pos            _UINT32_(25)                                         /* (SPW_LINK1_STATUS) SEEN5 Position */
#define SPW_LINK1_STATUS_SEEN5_Msk            (_UINT32_(0x1) << SPW_LINK1_STATUS_SEEN5_Pos)        /* (SPW_LINK1_STATUS) SEEN5 Mask */
#define SPW_LINK1_STATUS_SEEN5(value)         (SPW_LINK1_STATUS_SEEN5_Msk & (_UINT32_(value) << SPW_LINK1_STATUS_SEEN5_Pos)) /* Assigment of value for SEEN5 in the SPW_LINK1_STATUS register */
#define SPW_LINK1_STATUS_Msk                  _UINT32_(0x03FF01F7)                                 /* (SPW_LINK1_STATUS) Register Mask  */

#define SPW_LINK1_STATUS_SEEN_Pos             _UINT32_(20)                                         /* (SPW_LINK1_STATUS Position) SEEN5 */
#define SPW_LINK1_STATUS_SEEN_Msk             (_UINT32_(0x3F) << SPW_LINK1_STATUS_SEEN_Pos)        /* (SPW_LINK1_STATUS Mask) SEEN */
#define SPW_LINK1_STATUS_SEEN(value)          (SPW_LINK1_STATUS_SEEN_Msk & (_UINT32_(value) << SPW_LINK1_STATUS_SEEN_Pos)) 

/* -------- SPW_LINK1_SWRESET : (SPW Offset: 0x42C) (R/W 32) SpW Link 1 Software Reset -------- */
#define SPW_LINK1_SWRESET_PATTERN_Pos         _UINT32_(0)                                          /* (SPW_LINK1_SWRESET) Pattern Position */
#define SPW_LINK1_SWRESET_PATTERN_Msk         (_UINT32_(0xFFFFFFFF) << SPW_LINK1_SWRESET_PATTERN_Pos) /* (SPW_LINK1_SWRESET) Pattern Mask */
#define SPW_LINK1_SWRESET_PATTERN(value)      (SPW_LINK1_SWRESET_PATTERN_Msk & (_UINT32_(value) << SPW_LINK1_SWRESET_PATTERN_Pos)) /* Assigment of value for PATTERN in the SPW_LINK1_SWRESET register */
#define SPW_LINK1_SWRESET_Msk                 _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK1_SWRESET) Register Mask  */


/* -------- SPW_LINK1_ESCCHAREVENT0 : (SPW Offset: 0x430) (R/W 32) SpW Link 1 Escape Character Event 0 -------- */
#define SPW_LINK1_ESCCHAREVENT0_VALUE_Pos     _UINT32_(0)                                          /* (SPW_LINK1_ESCCHAREVENT0) Value Position */
#define SPW_LINK1_ESCCHAREVENT0_VALUE_Msk     (_UINT32_(0xFF) << SPW_LINK1_ESCCHAREVENT0_VALUE_Pos) /* (SPW_LINK1_ESCCHAREVENT0) Value Mask */
#define SPW_LINK1_ESCCHAREVENT0_VALUE(value)  (SPW_LINK1_ESCCHAREVENT0_VALUE_Msk & (_UINT32_(value) << SPW_LINK1_ESCCHAREVENT0_VALUE_Pos)) /* Assigment of value for VALUE in the SPW_LINK1_ESCCHAREVENT0 register */
#define SPW_LINK1_ESCCHAREVENT0_MASK_Pos      _UINT32_(8)                                          /* (SPW_LINK1_ESCCHAREVENT0) Mask Position */
#define SPW_LINK1_ESCCHAREVENT0_MASK_Msk      (_UINT32_(0xFF) << SPW_LINK1_ESCCHAREVENT0_MASK_Pos) /* (SPW_LINK1_ESCCHAREVENT0) Mask Mask */
#define SPW_LINK1_ESCCHAREVENT0_MASK(value)   (SPW_LINK1_ESCCHAREVENT0_MASK_Msk & (_UINT32_(value) << SPW_LINK1_ESCCHAREVENT0_MASK_Pos)) /* Assigment of value for MASK in the SPW_LINK1_ESCCHAREVENT0 register */
#define SPW_LINK1_ESCCHAREVENT0_ACTIVE_Pos    _UINT32_(16)                                         /* (SPW_LINK1_ESCCHAREVENT0) Active Position */
#define SPW_LINK1_ESCCHAREVENT0_ACTIVE_Msk    (_UINT32_(0x1) << SPW_LINK1_ESCCHAREVENT0_ACTIVE_Pos) /* (SPW_LINK1_ESCCHAREVENT0) Active Mask */
#define SPW_LINK1_ESCCHAREVENT0_ACTIVE(value) (SPW_LINK1_ESCCHAREVENT0_ACTIVE_Msk & (_UINT32_(value) << SPW_LINK1_ESCCHAREVENT0_ACTIVE_Pos)) /* Assigment of value for ACTIVE in the SPW_LINK1_ESCCHAREVENT0 register */
#define SPW_LINK1_ESCCHAREVENT0_HWEVENT_Pos   _UINT32_(17)                                         /* (SPW_LINK1_ESCCHAREVENT0) HwEvent Position */
#define SPW_LINK1_ESCCHAREVENT0_HWEVENT_Msk   (_UINT32_(0x1) << SPW_LINK1_ESCCHAREVENT0_HWEVENT_Pos) /* (SPW_LINK1_ESCCHAREVENT0) HwEvent Mask */
#define SPW_LINK1_ESCCHAREVENT0_HWEVENT(value) (SPW_LINK1_ESCCHAREVENT0_HWEVENT_Msk & (_UINT32_(value) << SPW_LINK1_ESCCHAREVENT0_HWEVENT_Pos)) /* Assigment of value for HWEVENT in the SPW_LINK1_ESCCHAREVENT0 register */
#define SPW_LINK1_ESCCHAREVENT0_Msk           _UINT32_(0x0003FFFF)                                 /* (SPW_LINK1_ESCCHAREVENT0) Register Mask  */


/* -------- SPW_LINK1_ESCCHAREVENT1 : (SPW Offset: 0x434) (R/W 32) SpW Link 1 Escape Character Event 1 -------- */
#define SPW_LINK1_ESCCHAREVENT1_VALUE_Pos     _UINT32_(0)                                          /* (SPW_LINK1_ESCCHAREVENT1) Value Position */
#define SPW_LINK1_ESCCHAREVENT1_VALUE_Msk     (_UINT32_(0xFF) << SPW_LINK1_ESCCHAREVENT1_VALUE_Pos) /* (SPW_LINK1_ESCCHAREVENT1) Value Mask */
#define SPW_LINK1_ESCCHAREVENT1_VALUE(value)  (SPW_LINK1_ESCCHAREVENT1_VALUE_Msk & (_UINT32_(value) << SPW_LINK1_ESCCHAREVENT1_VALUE_Pos)) /* Assigment of value for VALUE in the SPW_LINK1_ESCCHAREVENT1 register */
#define SPW_LINK1_ESCCHAREVENT1_MASK_Pos      _UINT32_(8)                                          /* (SPW_LINK1_ESCCHAREVENT1) Mask Position */
#define SPW_LINK1_ESCCHAREVENT1_MASK_Msk      (_UINT32_(0xFF) << SPW_LINK1_ESCCHAREVENT1_MASK_Pos) /* (SPW_LINK1_ESCCHAREVENT1) Mask Mask */
#define SPW_LINK1_ESCCHAREVENT1_MASK(value)   (SPW_LINK1_ESCCHAREVENT1_MASK_Msk & (_UINT32_(value) << SPW_LINK1_ESCCHAREVENT1_MASK_Pos)) /* Assigment of value for MASK in the SPW_LINK1_ESCCHAREVENT1 register */
#define SPW_LINK1_ESCCHAREVENT1_ACTIVE_Pos    _UINT32_(16)                                         /* (SPW_LINK1_ESCCHAREVENT1) Active Position */
#define SPW_LINK1_ESCCHAREVENT1_ACTIVE_Msk    (_UINT32_(0x1) << SPW_LINK1_ESCCHAREVENT1_ACTIVE_Pos) /* (SPW_LINK1_ESCCHAREVENT1) Active Mask */
#define SPW_LINK1_ESCCHAREVENT1_ACTIVE(value) (SPW_LINK1_ESCCHAREVENT1_ACTIVE_Msk & (_UINT32_(value) << SPW_LINK1_ESCCHAREVENT1_ACTIVE_Pos)) /* Assigment of value for ACTIVE in the SPW_LINK1_ESCCHAREVENT1 register */
#define SPW_LINK1_ESCCHAREVENT1_HWEVENT_Pos   _UINT32_(17)                                         /* (SPW_LINK1_ESCCHAREVENT1) HwEvent Position */
#define SPW_LINK1_ESCCHAREVENT1_HWEVENT_Msk   (_UINT32_(0x1) << SPW_LINK1_ESCCHAREVENT1_HWEVENT_Pos) /* (SPW_LINK1_ESCCHAREVENT1) HwEvent Mask */
#define SPW_LINK1_ESCCHAREVENT1_HWEVENT(value) (SPW_LINK1_ESCCHAREVENT1_HWEVENT_Msk & (_UINT32_(value) << SPW_LINK1_ESCCHAREVENT1_HWEVENT_Pos)) /* Assigment of value for HWEVENT in the SPW_LINK1_ESCCHAREVENT1 register */
#define SPW_LINK1_ESCCHAREVENT1_Msk           _UINT32_(0x0003FFFF)                                 /* (SPW_LINK1_ESCCHAREVENT1) Register Mask  */


/* -------- SPW_LINK1_ESCCHARSTS : (SPW Offset: 0x438) ( R/ 32) SpW Link 1 Escape Character Status -------- */
#define SPW_LINK1_ESCCHARSTS_CHAR1_Pos        _UINT32_(0)                                          /* (SPW_LINK1_ESCCHARSTS) Esc Char 1 Position */
#define SPW_LINK1_ESCCHARSTS_CHAR1_Msk        (_UINT32_(0xFF) << SPW_LINK1_ESCCHARSTS_CHAR1_Pos)   /* (SPW_LINK1_ESCCHARSTS) Esc Char 1 Mask */
#define SPW_LINK1_ESCCHARSTS_CHAR1(value)     (SPW_LINK1_ESCCHARSTS_CHAR1_Msk & (_UINT32_(value) << SPW_LINK1_ESCCHARSTS_CHAR1_Pos)) /* Assigment of value for CHAR1 in the SPW_LINK1_ESCCHARSTS register */
#define SPW_LINK1_ESCCHARSTS_CHAR2_Pos        _UINT32_(8)                                          /* (SPW_LINK1_ESCCHARSTS) Esc Char 2 Position */
#define SPW_LINK1_ESCCHARSTS_CHAR2_Msk        (_UINT32_(0xFF) << SPW_LINK1_ESCCHARSTS_CHAR2_Pos)   /* (SPW_LINK1_ESCCHARSTS) Esc Char 2 Mask */
#define SPW_LINK1_ESCCHARSTS_CHAR2(value)     (SPW_LINK1_ESCCHARSTS_CHAR2_Msk & (_UINT32_(value) << SPW_LINK1_ESCCHARSTS_CHAR2_Pos)) /* Assigment of value for CHAR2 in the SPW_LINK1_ESCCHARSTS register */
#define SPW_LINK1_ESCCHARSTS_Msk              _UINT32_(0x0000FFFF)                                 /* (SPW_LINK1_ESCCHARSTS) Register Mask  */


/* -------- SPW_LINK1_TRANSESC : (SPW Offset: 0x43C) (R/W 32) SpW Link 1 Transmit Escape Character -------- */
#define SPW_LINK1_TRANSESC_CHAR_Pos           _UINT32_(0)                                          /* (SPW_LINK1_TRANSESC) Character Position */
#define SPW_LINK1_TRANSESC_CHAR_Msk           (_UINT32_(0xFF) << SPW_LINK1_TRANSESC_CHAR_Pos)      /* (SPW_LINK1_TRANSESC) Character Mask */
#define SPW_LINK1_TRANSESC_CHAR(value)        (SPW_LINK1_TRANSESC_CHAR_Msk & (_UINT32_(value) << SPW_LINK1_TRANSESC_CHAR_Pos)) /* Assigment of value for CHAR in the SPW_LINK1_TRANSESC register */
#define SPW_LINK1_TRANSESC_Msk                _UINT32_(0x000000FF)                                 /* (SPW_LINK1_TRANSESC) Register Mask  */


/* -------- SPW_LINK1_DISTINTPI_RM : (SPW Offset: 0x440) ( R/ 32) SpW Link 1 Distributed Interrupt Pending Read Masked Interrupt -------- */
#define SPW_LINK1_DISTINTPI_RM_DI0_Pos        _UINT32_(0)                                          /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI0_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI0_Pos)    /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI0(value)     (SPW_LINK1_DISTINTPI_RM_DI0_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI0_Pos)) /* Assigment of value for DI0 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI1_Pos        _UINT32_(1)                                          /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI1_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI1_Pos)    /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI1(value)     (SPW_LINK1_DISTINTPI_RM_DI1_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI1_Pos)) /* Assigment of value for DI1 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI2_Pos        _UINT32_(2)                                          /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI2_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI2_Pos)    /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI2(value)     (SPW_LINK1_DISTINTPI_RM_DI2_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI2_Pos)) /* Assigment of value for DI2 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI3_Pos        _UINT32_(3)                                          /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI3_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI3_Pos)    /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI3(value)     (SPW_LINK1_DISTINTPI_RM_DI3_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI3_Pos)) /* Assigment of value for DI3 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI4_Pos        _UINT32_(4)                                          /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI4_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI4_Pos)    /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI4(value)     (SPW_LINK1_DISTINTPI_RM_DI4_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI4_Pos)) /* Assigment of value for DI4 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI5_Pos        _UINT32_(5)                                          /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI5_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI5_Pos)    /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI5(value)     (SPW_LINK1_DISTINTPI_RM_DI5_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI5_Pos)) /* Assigment of value for DI5 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI6_Pos        _UINT32_(6)                                          /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI6_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI6_Pos)    /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI6(value)     (SPW_LINK1_DISTINTPI_RM_DI6_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI6_Pos)) /* Assigment of value for DI6 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI7_Pos        _UINT32_(7)                                          /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI7_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI7_Pos)    /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI7(value)     (SPW_LINK1_DISTINTPI_RM_DI7_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI7_Pos)) /* Assigment of value for DI7 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI8_Pos        _UINT32_(8)                                          /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI8_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI8_Pos)    /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI8(value)     (SPW_LINK1_DISTINTPI_RM_DI8_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI8_Pos)) /* Assigment of value for DI8 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI9_Pos        _UINT32_(9)                                          /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI9_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI9_Pos)    /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI9(value)     (SPW_LINK1_DISTINTPI_RM_DI9_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI9_Pos)) /* Assigment of value for DI9 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI10_Pos       _UINT32_(10)                                         /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI10_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI10_Pos)   /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI10(value)    (SPW_LINK1_DISTINTPI_RM_DI10_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI10_Pos)) /* Assigment of value for DI10 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI11_Pos       _UINT32_(11)                                         /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI11_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI11_Pos)   /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI11(value)    (SPW_LINK1_DISTINTPI_RM_DI11_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI11_Pos)) /* Assigment of value for DI11 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI12_Pos       _UINT32_(12)                                         /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI12_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI12_Pos)   /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI12(value)    (SPW_LINK1_DISTINTPI_RM_DI12_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI12_Pos)) /* Assigment of value for DI12 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI13_Pos       _UINT32_(13)                                         /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI13_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI13_Pos)   /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI13(value)    (SPW_LINK1_DISTINTPI_RM_DI13_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI13_Pos)) /* Assigment of value for DI13 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI14_Pos       _UINT32_(14)                                         /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI14_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI14_Pos)   /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI14(value)    (SPW_LINK1_DISTINTPI_RM_DI14_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI14_Pos)) /* Assigment of value for DI14 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI15_Pos       _UINT32_(15)                                         /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI15_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI15_Pos)   /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI15(value)    (SPW_LINK1_DISTINTPI_RM_DI15_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI15_Pos)) /* Assigment of value for DI15 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI16_Pos       _UINT32_(16)                                         /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI16_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI16_Pos)   /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI16(value)    (SPW_LINK1_DISTINTPI_RM_DI16_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI16_Pos)) /* Assigment of value for DI16 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI17_Pos       _UINT32_(17)                                         /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI17_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI17_Pos)   /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI17(value)    (SPW_LINK1_DISTINTPI_RM_DI17_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI17_Pos)) /* Assigment of value for DI17 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI18_Pos       _UINT32_(18)                                         /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI18_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI18_Pos)   /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI18(value)    (SPW_LINK1_DISTINTPI_RM_DI18_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI18_Pos)) /* Assigment of value for DI18 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI19_Pos       _UINT32_(19)                                         /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI19_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI19_Pos)   /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI19(value)    (SPW_LINK1_DISTINTPI_RM_DI19_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI19_Pos)) /* Assigment of value for DI19 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI20_Pos       _UINT32_(20)                                         /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI20_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI20_Pos)   /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI20(value)    (SPW_LINK1_DISTINTPI_RM_DI20_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI20_Pos)) /* Assigment of value for DI20 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI21_Pos       _UINT32_(21)                                         /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI21_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI21_Pos)   /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI21(value)    (SPW_LINK1_DISTINTPI_RM_DI21_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI21_Pos)) /* Assigment of value for DI21 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI22_Pos       _UINT32_(22)                                         /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI22_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI22_Pos)   /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI22(value)    (SPW_LINK1_DISTINTPI_RM_DI22_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI22_Pos)) /* Assigment of value for DI22 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI23_Pos       _UINT32_(23)                                         /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI23_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI23_Pos)   /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI23(value)    (SPW_LINK1_DISTINTPI_RM_DI23_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI23_Pos)) /* Assigment of value for DI23 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI24_Pos       _UINT32_(24)                                         /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI24_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI24_Pos)   /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI24(value)    (SPW_LINK1_DISTINTPI_RM_DI24_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI24_Pos)) /* Assigment of value for DI24 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI25_Pos       _UINT32_(25)                                         /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI25_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI25_Pos)   /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI25(value)    (SPW_LINK1_DISTINTPI_RM_DI25_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI25_Pos)) /* Assigment of value for DI25 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI26_Pos       _UINT32_(26)                                         /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI26_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI26_Pos)   /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI26(value)    (SPW_LINK1_DISTINTPI_RM_DI26_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI26_Pos)) /* Assigment of value for DI26 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI27_Pos       _UINT32_(27)                                         /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI27_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI27_Pos)   /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI27(value)    (SPW_LINK1_DISTINTPI_RM_DI27_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI27_Pos)) /* Assigment of value for DI27 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI28_Pos       _UINT32_(28)                                         /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI28_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI28_Pos)   /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI28(value)    (SPW_LINK1_DISTINTPI_RM_DI28_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI28_Pos)) /* Assigment of value for DI28 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI29_Pos       _UINT32_(29)                                         /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI29_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI29_Pos)   /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI29(value)    (SPW_LINK1_DISTINTPI_RM_DI29_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI29_Pos)) /* Assigment of value for DI29 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI30_Pos       _UINT32_(30)                                         /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI30_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI30_Pos)   /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI30(value)    (SPW_LINK1_DISTINTPI_RM_DI30_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI30_Pos)) /* Assigment of value for DI30 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_DI31_Pos       _UINT32_(31)                                         /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RM_DI31_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RM_DI31_Pos)   /* (SPW_LINK1_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RM_DI31(value)    (SPW_LINK1_DISTINTPI_RM_DI31_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI31_Pos)) /* Assigment of value for DI31 in the SPW_LINK1_DISTINTPI_RM register */
#define SPW_LINK1_DISTINTPI_RM_Msk            _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK1_DISTINTPI_RM) Register Mask  */

#define SPW_LINK1_DISTINTPI_RM_DI_Pos         _UINT32_(0)                                          /* (SPW_LINK1_DISTINTPI_RM Position) Distributed Interrupt */
#define SPW_LINK1_DISTINTPI_RM_DI_Msk         (_UINT32_(0xFFFFFFFF) << SPW_LINK1_DISTINTPI_RM_DI_Pos) /* (SPW_LINK1_DISTINTPI_RM Mask) DI */
#define SPW_LINK1_DISTINTPI_RM_DI(value)      (SPW_LINK1_DISTINTPI_RM_DI_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RM_DI_Pos)) 

/* -------- SPW_LINK1_DISTINTPI_RCM : (SPW Offset: 0x444) ( R/ 32) SpW Link 1 Distributed Interrupt Pending Read and Clear Masked Interrupt -------- */
#define SPW_LINK1_DISTINTPI_RCM_DI0_Pos       _UINT32_(0)                                          /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI0_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI0_Pos)   /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI0(value)    (SPW_LINK1_DISTINTPI_RCM_DI0_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI0_Pos)) /* Assigment of value for DI0 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI1_Pos       _UINT32_(1)                                          /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI1_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI1_Pos)   /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI1(value)    (SPW_LINK1_DISTINTPI_RCM_DI1_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI1_Pos)) /* Assigment of value for DI1 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI2_Pos       _UINT32_(2)                                          /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI2_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI2_Pos)   /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI2(value)    (SPW_LINK1_DISTINTPI_RCM_DI2_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI2_Pos)) /* Assigment of value for DI2 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI3_Pos       _UINT32_(3)                                          /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI3_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI3_Pos)   /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI3(value)    (SPW_LINK1_DISTINTPI_RCM_DI3_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI3_Pos)) /* Assigment of value for DI3 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI4_Pos       _UINT32_(4)                                          /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI4_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI4_Pos)   /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI4(value)    (SPW_LINK1_DISTINTPI_RCM_DI4_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI4_Pos)) /* Assigment of value for DI4 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI5_Pos       _UINT32_(5)                                          /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI5_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI5_Pos)   /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI5(value)    (SPW_LINK1_DISTINTPI_RCM_DI5_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI5_Pos)) /* Assigment of value for DI5 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI6_Pos       _UINT32_(6)                                          /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI6_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI6_Pos)   /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI6(value)    (SPW_LINK1_DISTINTPI_RCM_DI6_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI6_Pos)) /* Assigment of value for DI6 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI7_Pos       _UINT32_(7)                                          /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI7_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI7_Pos)   /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI7(value)    (SPW_LINK1_DISTINTPI_RCM_DI7_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI7_Pos)) /* Assigment of value for DI7 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI8_Pos       _UINT32_(8)                                          /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI8_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI8_Pos)   /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI8(value)    (SPW_LINK1_DISTINTPI_RCM_DI8_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI8_Pos)) /* Assigment of value for DI8 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI9_Pos       _UINT32_(9)                                          /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI9_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI9_Pos)   /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI9(value)    (SPW_LINK1_DISTINTPI_RCM_DI9_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI9_Pos)) /* Assigment of value for DI9 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI10_Pos      _UINT32_(10)                                         /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI10_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI10_Pos)  /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI10(value)   (SPW_LINK1_DISTINTPI_RCM_DI10_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI10_Pos)) /* Assigment of value for DI10 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI11_Pos      _UINT32_(11)                                         /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI11_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI11_Pos)  /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI11(value)   (SPW_LINK1_DISTINTPI_RCM_DI11_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI11_Pos)) /* Assigment of value for DI11 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI12_Pos      _UINT32_(12)                                         /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI12_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI12_Pos)  /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI12(value)   (SPW_LINK1_DISTINTPI_RCM_DI12_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI12_Pos)) /* Assigment of value for DI12 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI13_Pos      _UINT32_(13)                                         /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI13_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI13_Pos)  /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI13(value)   (SPW_LINK1_DISTINTPI_RCM_DI13_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI13_Pos)) /* Assigment of value for DI13 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI14_Pos      _UINT32_(14)                                         /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI14_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI14_Pos)  /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI14(value)   (SPW_LINK1_DISTINTPI_RCM_DI14_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI14_Pos)) /* Assigment of value for DI14 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI15_Pos      _UINT32_(15)                                         /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI15_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI15_Pos)  /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI15(value)   (SPW_LINK1_DISTINTPI_RCM_DI15_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI15_Pos)) /* Assigment of value for DI15 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI16_Pos      _UINT32_(16)                                         /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI16_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI16_Pos)  /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI16(value)   (SPW_LINK1_DISTINTPI_RCM_DI16_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI16_Pos)) /* Assigment of value for DI16 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI17_Pos      _UINT32_(17)                                         /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI17_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI17_Pos)  /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI17(value)   (SPW_LINK1_DISTINTPI_RCM_DI17_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI17_Pos)) /* Assigment of value for DI17 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI18_Pos      _UINT32_(18)                                         /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI18_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI18_Pos)  /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI18(value)   (SPW_LINK1_DISTINTPI_RCM_DI18_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI18_Pos)) /* Assigment of value for DI18 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI19_Pos      _UINT32_(19)                                         /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI19_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI19_Pos)  /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI19(value)   (SPW_LINK1_DISTINTPI_RCM_DI19_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI19_Pos)) /* Assigment of value for DI19 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI20_Pos      _UINT32_(20)                                         /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI20_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI20_Pos)  /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI20(value)   (SPW_LINK1_DISTINTPI_RCM_DI20_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI20_Pos)) /* Assigment of value for DI20 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI21_Pos      _UINT32_(21)                                         /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI21_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI21_Pos)  /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI21(value)   (SPW_LINK1_DISTINTPI_RCM_DI21_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI21_Pos)) /* Assigment of value for DI21 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI22_Pos      _UINT32_(22)                                         /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI22_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI22_Pos)  /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI22(value)   (SPW_LINK1_DISTINTPI_RCM_DI22_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI22_Pos)) /* Assigment of value for DI22 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI23_Pos      _UINT32_(23)                                         /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI23_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI23_Pos)  /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI23(value)   (SPW_LINK1_DISTINTPI_RCM_DI23_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI23_Pos)) /* Assigment of value for DI23 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI24_Pos      _UINT32_(24)                                         /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI24_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI24_Pos)  /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI24(value)   (SPW_LINK1_DISTINTPI_RCM_DI24_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI24_Pos)) /* Assigment of value for DI24 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI25_Pos      _UINT32_(25)                                         /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI25_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI25_Pos)  /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI25(value)   (SPW_LINK1_DISTINTPI_RCM_DI25_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI25_Pos)) /* Assigment of value for DI25 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI26_Pos      _UINT32_(26)                                         /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI26_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI26_Pos)  /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI26(value)   (SPW_LINK1_DISTINTPI_RCM_DI26_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI26_Pos)) /* Assigment of value for DI26 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI27_Pos      _UINT32_(27)                                         /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI27_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI27_Pos)  /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI27(value)   (SPW_LINK1_DISTINTPI_RCM_DI27_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI27_Pos)) /* Assigment of value for DI27 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI28_Pos      _UINT32_(28)                                         /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI28_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI28_Pos)  /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI28(value)   (SPW_LINK1_DISTINTPI_RCM_DI28_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI28_Pos)) /* Assigment of value for DI28 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI29_Pos      _UINT32_(29)                                         /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI29_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI29_Pos)  /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI29(value)   (SPW_LINK1_DISTINTPI_RCM_DI29_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI29_Pos)) /* Assigment of value for DI29 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI30_Pos      _UINT32_(30)                                         /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI30_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI30_Pos)  /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI30(value)   (SPW_LINK1_DISTINTPI_RCM_DI30_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI30_Pos)) /* Assigment of value for DI30 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_DI31_Pos      _UINT32_(31)                                         /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCM_DI31_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCM_DI31_Pos)  /* (SPW_LINK1_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCM_DI31(value)   (SPW_LINK1_DISTINTPI_RCM_DI31_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI31_Pos)) /* Assigment of value for DI31 in the SPW_LINK1_DISTINTPI_RCM register */
#define SPW_LINK1_DISTINTPI_RCM_Msk           _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK1_DISTINTPI_RCM) Register Mask  */

#define SPW_LINK1_DISTINTPI_RCM_DI_Pos        _UINT32_(0)                                          /* (SPW_LINK1_DISTINTPI_RCM Position) Distributed Interrupt */
#define SPW_LINK1_DISTINTPI_RCM_DI_Msk        (_UINT32_(0xFFFFFFFF) << SPW_LINK1_DISTINTPI_RCM_DI_Pos) /* (SPW_LINK1_DISTINTPI_RCM Mask) DI */
#define SPW_LINK1_DISTINTPI_RCM_DI(value)     (SPW_LINK1_DISTINTPI_RCM_DI_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCM_DI_Pos)) 

/* -------- SPW_LINK1_DISTINTPI_R : (SPW Offset: 0x448) ( R/ 32) SpW Link 1 Distributed Interrupt Pending Read Interrupt -------- */
#define SPW_LINK1_DISTINTPI_R_DI0_Pos         _UINT32_(0)                                          /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI0_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI0_Pos)     /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI0(value)      (SPW_LINK1_DISTINTPI_R_DI0_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI0_Pos)) /* Assigment of value for DI0 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI1_Pos         _UINT32_(1)                                          /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI1_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI1_Pos)     /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI1(value)      (SPW_LINK1_DISTINTPI_R_DI1_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI1_Pos)) /* Assigment of value for DI1 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI2_Pos         _UINT32_(2)                                          /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI2_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI2_Pos)     /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI2(value)      (SPW_LINK1_DISTINTPI_R_DI2_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI2_Pos)) /* Assigment of value for DI2 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI3_Pos         _UINT32_(3)                                          /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI3_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI3_Pos)     /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI3(value)      (SPW_LINK1_DISTINTPI_R_DI3_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI3_Pos)) /* Assigment of value for DI3 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI4_Pos         _UINT32_(4)                                          /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI4_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI4_Pos)     /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI4(value)      (SPW_LINK1_DISTINTPI_R_DI4_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI4_Pos)) /* Assigment of value for DI4 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI5_Pos         _UINT32_(5)                                          /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI5_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI5_Pos)     /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI5(value)      (SPW_LINK1_DISTINTPI_R_DI5_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI5_Pos)) /* Assigment of value for DI5 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI6_Pos         _UINT32_(6)                                          /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI6_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI6_Pos)     /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI6(value)      (SPW_LINK1_DISTINTPI_R_DI6_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI6_Pos)) /* Assigment of value for DI6 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI7_Pos         _UINT32_(7)                                          /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI7_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI7_Pos)     /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI7(value)      (SPW_LINK1_DISTINTPI_R_DI7_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI7_Pos)) /* Assigment of value for DI7 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI8_Pos         _UINT32_(8)                                          /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI8_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI8_Pos)     /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI8(value)      (SPW_LINK1_DISTINTPI_R_DI8_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI8_Pos)) /* Assigment of value for DI8 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI9_Pos         _UINT32_(9)                                          /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI9_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI9_Pos)     /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI9(value)      (SPW_LINK1_DISTINTPI_R_DI9_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI9_Pos)) /* Assigment of value for DI9 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI10_Pos        _UINT32_(10)                                         /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI10_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI10_Pos)    /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI10(value)     (SPW_LINK1_DISTINTPI_R_DI10_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI10_Pos)) /* Assigment of value for DI10 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI11_Pos        _UINT32_(11)                                         /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI11_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI11_Pos)    /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI11(value)     (SPW_LINK1_DISTINTPI_R_DI11_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI11_Pos)) /* Assigment of value for DI11 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI12_Pos        _UINT32_(12)                                         /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI12_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI12_Pos)    /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI12(value)     (SPW_LINK1_DISTINTPI_R_DI12_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI12_Pos)) /* Assigment of value for DI12 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI13_Pos        _UINT32_(13)                                         /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI13_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI13_Pos)    /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI13(value)     (SPW_LINK1_DISTINTPI_R_DI13_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI13_Pos)) /* Assigment of value for DI13 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI14_Pos        _UINT32_(14)                                         /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI14_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI14_Pos)    /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI14(value)     (SPW_LINK1_DISTINTPI_R_DI14_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI14_Pos)) /* Assigment of value for DI14 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI15_Pos        _UINT32_(15)                                         /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI15_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI15_Pos)    /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI15(value)     (SPW_LINK1_DISTINTPI_R_DI15_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI15_Pos)) /* Assigment of value for DI15 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI16_Pos        _UINT32_(16)                                         /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI16_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI16_Pos)    /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI16(value)     (SPW_LINK1_DISTINTPI_R_DI16_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI16_Pos)) /* Assigment of value for DI16 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI17_Pos        _UINT32_(17)                                         /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI17_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI17_Pos)    /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI17(value)     (SPW_LINK1_DISTINTPI_R_DI17_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI17_Pos)) /* Assigment of value for DI17 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI18_Pos        _UINT32_(18)                                         /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI18_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI18_Pos)    /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI18(value)     (SPW_LINK1_DISTINTPI_R_DI18_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI18_Pos)) /* Assigment of value for DI18 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI19_Pos        _UINT32_(19)                                         /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI19_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI19_Pos)    /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI19(value)     (SPW_LINK1_DISTINTPI_R_DI19_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI19_Pos)) /* Assigment of value for DI19 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI20_Pos        _UINT32_(20)                                         /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI20_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI20_Pos)    /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI20(value)     (SPW_LINK1_DISTINTPI_R_DI20_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI20_Pos)) /* Assigment of value for DI20 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI21_Pos        _UINT32_(21)                                         /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI21_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI21_Pos)    /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI21(value)     (SPW_LINK1_DISTINTPI_R_DI21_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI21_Pos)) /* Assigment of value for DI21 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI22_Pos        _UINT32_(22)                                         /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI22_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI22_Pos)    /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI22(value)     (SPW_LINK1_DISTINTPI_R_DI22_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI22_Pos)) /* Assigment of value for DI22 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI23_Pos        _UINT32_(23)                                         /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI23_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI23_Pos)    /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI23(value)     (SPW_LINK1_DISTINTPI_R_DI23_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI23_Pos)) /* Assigment of value for DI23 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI24_Pos        _UINT32_(24)                                         /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI24_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI24_Pos)    /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI24(value)     (SPW_LINK1_DISTINTPI_R_DI24_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI24_Pos)) /* Assigment of value for DI24 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI25_Pos        _UINT32_(25)                                         /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI25_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI25_Pos)    /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI25(value)     (SPW_LINK1_DISTINTPI_R_DI25_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI25_Pos)) /* Assigment of value for DI25 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI26_Pos        _UINT32_(26)                                         /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI26_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI26_Pos)    /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI26(value)     (SPW_LINK1_DISTINTPI_R_DI26_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI26_Pos)) /* Assigment of value for DI26 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI27_Pos        _UINT32_(27)                                         /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI27_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI27_Pos)    /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI27(value)     (SPW_LINK1_DISTINTPI_R_DI27_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI27_Pos)) /* Assigment of value for DI27 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI28_Pos        _UINT32_(28)                                         /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI28_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI28_Pos)    /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI28(value)     (SPW_LINK1_DISTINTPI_R_DI28_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI28_Pos)) /* Assigment of value for DI28 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI29_Pos        _UINT32_(29)                                         /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI29_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI29_Pos)    /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI29(value)     (SPW_LINK1_DISTINTPI_R_DI29_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI29_Pos)) /* Assigment of value for DI29 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI30_Pos        _UINT32_(30)                                         /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI30_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI30_Pos)    /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI30(value)     (SPW_LINK1_DISTINTPI_R_DI30_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI30_Pos)) /* Assigment of value for DI30 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_DI31_Pos        _UINT32_(31)                                         /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_R_DI31_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_R_DI31_Pos)    /* (SPW_LINK1_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_R_DI31(value)     (SPW_LINK1_DISTINTPI_R_DI31_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI31_Pos)) /* Assigment of value for DI31 in the SPW_LINK1_DISTINTPI_R register */
#define SPW_LINK1_DISTINTPI_R_Msk             _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK1_DISTINTPI_R) Register Mask  */

#define SPW_LINK1_DISTINTPI_R_DI_Pos          _UINT32_(0)                                          /* (SPW_LINK1_DISTINTPI_R Position) Distributed Interrupt */
#define SPW_LINK1_DISTINTPI_R_DI_Msk          (_UINT32_(0xFFFFFFFF) << SPW_LINK1_DISTINTPI_R_DI_Pos) /* (SPW_LINK1_DISTINTPI_R Mask) DI */
#define SPW_LINK1_DISTINTPI_R_DI(value)       (SPW_LINK1_DISTINTPI_R_DI_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_R_DI_Pos)) 

/* -------- SPW_LINK1_DISTINTPI_RCS : (SPW Offset: 0x44C) (R/W 32) SpW Link 1 Distributed Interrupt Pending Read and Clear Interrupt -------- */
#define SPW_LINK1_DISTINTPI_RCS_DI0_Pos       _UINT32_(0)                                          /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI0_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI0_Pos)   /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI0(value)    (SPW_LINK1_DISTINTPI_RCS_DI0_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI0_Pos)) /* Assigment of value for DI0 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI1_Pos       _UINT32_(1)                                          /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI1_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI1_Pos)   /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI1(value)    (SPW_LINK1_DISTINTPI_RCS_DI1_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI1_Pos)) /* Assigment of value for DI1 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI2_Pos       _UINT32_(2)                                          /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI2_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI2_Pos)   /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI2(value)    (SPW_LINK1_DISTINTPI_RCS_DI2_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI2_Pos)) /* Assigment of value for DI2 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI3_Pos       _UINT32_(3)                                          /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI3_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI3_Pos)   /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI3(value)    (SPW_LINK1_DISTINTPI_RCS_DI3_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI3_Pos)) /* Assigment of value for DI3 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI4_Pos       _UINT32_(4)                                          /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI4_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI4_Pos)   /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI4(value)    (SPW_LINK1_DISTINTPI_RCS_DI4_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI4_Pos)) /* Assigment of value for DI4 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI5_Pos       _UINT32_(5)                                          /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI5_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI5_Pos)   /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI5(value)    (SPW_LINK1_DISTINTPI_RCS_DI5_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI5_Pos)) /* Assigment of value for DI5 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI6_Pos       _UINT32_(6)                                          /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI6_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI6_Pos)   /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI6(value)    (SPW_LINK1_DISTINTPI_RCS_DI6_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI6_Pos)) /* Assigment of value for DI6 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI7_Pos       _UINT32_(7)                                          /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI7_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI7_Pos)   /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI7(value)    (SPW_LINK1_DISTINTPI_RCS_DI7_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI7_Pos)) /* Assigment of value for DI7 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI8_Pos       _UINT32_(8)                                          /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI8_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI8_Pos)   /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI8(value)    (SPW_LINK1_DISTINTPI_RCS_DI8_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI8_Pos)) /* Assigment of value for DI8 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI9_Pos       _UINT32_(9)                                          /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI9_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI9_Pos)   /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI9(value)    (SPW_LINK1_DISTINTPI_RCS_DI9_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI9_Pos)) /* Assigment of value for DI9 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI10_Pos      _UINT32_(10)                                         /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI10_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI10_Pos)  /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI10(value)   (SPW_LINK1_DISTINTPI_RCS_DI10_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI10_Pos)) /* Assigment of value for DI10 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI11_Pos      _UINT32_(11)                                         /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI11_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI11_Pos)  /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI11(value)   (SPW_LINK1_DISTINTPI_RCS_DI11_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI11_Pos)) /* Assigment of value for DI11 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI12_Pos      _UINT32_(12)                                         /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI12_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI12_Pos)  /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI12(value)   (SPW_LINK1_DISTINTPI_RCS_DI12_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI12_Pos)) /* Assigment of value for DI12 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI13_Pos      _UINT32_(13)                                         /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI13_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI13_Pos)  /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI13(value)   (SPW_LINK1_DISTINTPI_RCS_DI13_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI13_Pos)) /* Assigment of value for DI13 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI14_Pos      _UINT32_(14)                                         /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI14_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI14_Pos)  /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI14(value)   (SPW_LINK1_DISTINTPI_RCS_DI14_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI14_Pos)) /* Assigment of value for DI14 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI15_Pos      _UINT32_(15)                                         /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI15_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI15_Pos)  /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI15(value)   (SPW_LINK1_DISTINTPI_RCS_DI15_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI15_Pos)) /* Assigment of value for DI15 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI16_Pos      _UINT32_(16)                                         /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI16_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI16_Pos)  /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI16(value)   (SPW_LINK1_DISTINTPI_RCS_DI16_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI16_Pos)) /* Assigment of value for DI16 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI17_Pos      _UINT32_(17)                                         /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI17_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI17_Pos)  /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI17(value)   (SPW_LINK1_DISTINTPI_RCS_DI17_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI17_Pos)) /* Assigment of value for DI17 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI18_Pos      _UINT32_(18)                                         /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI18_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI18_Pos)  /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI18(value)   (SPW_LINK1_DISTINTPI_RCS_DI18_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI18_Pos)) /* Assigment of value for DI18 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI19_Pos      _UINT32_(19)                                         /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI19_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI19_Pos)  /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI19(value)   (SPW_LINK1_DISTINTPI_RCS_DI19_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI19_Pos)) /* Assigment of value for DI19 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI20_Pos      _UINT32_(20)                                         /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI20_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI20_Pos)  /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI20(value)   (SPW_LINK1_DISTINTPI_RCS_DI20_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI20_Pos)) /* Assigment of value for DI20 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI21_Pos      _UINT32_(21)                                         /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI21_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI21_Pos)  /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI21(value)   (SPW_LINK1_DISTINTPI_RCS_DI21_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI21_Pos)) /* Assigment of value for DI21 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI22_Pos      _UINT32_(22)                                         /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI22_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI22_Pos)  /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI22(value)   (SPW_LINK1_DISTINTPI_RCS_DI22_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI22_Pos)) /* Assigment of value for DI22 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI23_Pos      _UINT32_(23)                                         /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI23_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI23_Pos)  /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI23(value)   (SPW_LINK1_DISTINTPI_RCS_DI23_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI23_Pos)) /* Assigment of value for DI23 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI24_Pos      _UINT32_(24)                                         /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI24_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI24_Pos)  /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI24(value)   (SPW_LINK1_DISTINTPI_RCS_DI24_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI24_Pos)) /* Assigment of value for DI24 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI25_Pos      _UINT32_(25)                                         /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI25_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI25_Pos)  /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI25(value)   (SPW_LINK1_DISTINTPI_RCS_DI25_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI25_Pos)) /* Assigment of value for DI25 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI26_Pos      _UINT32_(26)                                         /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI26_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI26_Pos)  /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI26(value)   (SPW_LINK1_DISTINTPI_RCS_DI26_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI26_Pos)) /* Assigment of value for DI26 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI27_Pos      _UINT32_(27)                                         /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI27_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI27_Pos)  /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI27(value)   (SPW_LINK1_DISTINTPI_RCS_DI27_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI27_Pos)) /* Assigment of value for DI27 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI28_Pos      _UINT32_(28)                                         /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI28_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI28_Pos)  /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI28(value)   (SPW_LINK1_DISTINTPI_RCS_DI28_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI28_Pos)) /* Assigment of value for DI28 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI29_Pos      _UINT32_(29)                                         /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI29_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI29_Pos)  /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI29(value)   (SPW_LINK1_DISTINTPI_RCS_DI29_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI29_Pos)) /* Assigment of value for DI29 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI30_Pos      _UINT32_(30)                                         /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI30_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI30_Pos)  /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI30(value)   (SPW_LINK1_DISTINTPI_RCS_DI30_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI30_Pos)) /* Assigment of value for DI30 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_DI31_Pos      _UINT32_(31)                                         /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_RCS_DI31_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_RCS_DI31_Pos)  /* (SPW_LINK1_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_RCS_DI31(value)   (SPW_LINK1_DISTINTPI_RCS_DI31_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI31_Pos)) /* Assigment of value for DI31 in the SPW_LINK1_DISTINTPI_RCS register */
#define SPW_LINK1_DISTINTPI_RCS_Msk           _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK1_DISTINTPI_RCS) Register Mask  */

#define SPW_LINK1_DISTINTPI_RCS_DI_Pos        _UINT32_(0)                                          /* (SPW_LINK1_DISTINTPI_RCS Position) Distributed Interrupt */
#define SPW_LINK1_DISTINTPI_RCS_DI_Msk        (_UINT32_(0xFFFFFFFF) << SPW_LINK1_DISTINTPI_RCS_DI_Pos) /* (SPW_LINK1_DISTINTPI_RCS Mask) DI */
#define SPW_LINK1_DISTINTPI_RCS_DI(value)     (SPW_LINK1_DISTINTPI_RCS_DI_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_RCS_DI_Pos)) 

/* -------- SPW_LINK1_DISTINTIM : (SPW Offset: 0x450) (R/W 32) SpW Link 1 Distributed Interrupt Mask -------- */
#define SPW_LINK1_DISTINTIM_DI0_Pos           _UINT32_(0)                                          /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI0_Msk           (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI0_Pos)       /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI0(value)        (SPW_LINK1_DISTINTIM_DI0_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI0_Pos)) /* Assigment of value for DI0 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI1_Pos           _UINT32_(1)                                          /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI1_Msk           (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI1_Pos)       /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI1(value)        (SPW_LINK1_DISTINTIM_DI1_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI1_Pos)) /* Assigment of value for DI1 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI2_Pos           _UINT32_(2)                                          /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI2_Msk           (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI2_Pos)       /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI2(value)        (SPW_LINK1_DISTINTIM_DI2_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI2_Pos)) /* Assigment of value for DI2 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI3_Pos           _UINT32_(3)                                          /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI3_Msk           (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI3_Pos)       /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI3(value)        (SPW_LINK1_DISTINTIM_DI3_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI3_Pos)) /* Assigment of value for DI3 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI4_Pos           _UINT32_(4)                                          /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI4_Msk           (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI4_Pos)       /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI4(value)        (SPW_LINK1_DISTINTIM_DI4_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI4_Pos)) /* Assigment of value for DI4 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI5_Pos           _UINT32_(5)                                          /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI5_Msk           (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI5_Pos)       /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI5(value)        (SPW_LINK1_DISTINTIM_DI5_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI5_Pos)) /* Assigment of value for DI5 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI6_Pos           _UINT32_(6)                                          /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI6_Msk           (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI6_Pos)       /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI6(value)        (SPW_LINK1_DISTINTIM_DI6_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI6_Pos)) /* Assigment of value for DI6 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI7_Pos           _UINT32_(7)                                          /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI7_Msk           (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI7_Pos)       /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI7(value)        (SPW_LINK1_DISTINTIM_DI7_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI7_Pos)) /* Assigment of value for DI7 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI8_Pos           _UINT32_(8)                                          /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI8_Msk           (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI8_Pos)       /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI8(value)        (SPW_LINK1_DISTINTIM_DI8_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI8_Pos)) /* Assigment of value for DI8 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI9_Pos           _UINT32_(9)                                          /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI9_Msk           (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI9_Pos)       /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI9(value)        (SPW_LINK1_DISTINTIM_DI9_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI9_Pos)) /* Assigment of value for DI9 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI10_Pos          _UINT32_(10)                                         /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI10_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI10_Pos)      /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI10(value)       (SPW_LINK1_DISTINTIM_DI10_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI10_Pos)) /* Assigment of value for DI10 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI11_Pos          _UINT32_(11)                                         /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI11_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI11_Pos)      /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI11(value)       (SPW_LINK1_DISTINTIM_DI11_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI11_Pos)) /* Assigment of value for DI11 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI12_Pos          _UINT32_(12)                                         /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI12_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI12_Pos)      /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI12(value)       (SPW_LINK1_DISTINTIM_DI12_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI12_Pos)) /* Assigment of value for DI12 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI13_Pos          _UINT32_(13)                                         /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI13_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI13_Pos)      /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI13(value)       (SPW_LINK1_DISTINTIM_DI13_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI13_Pos)) /* Assigment of value for DI13 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI14_Pos          _UINT32_(14)                                         /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI14_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI14_Pos)      /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI14(value)       (SPW_LINK1_DISTINTIM_DI14_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI14_Pos)) /* Assigment of value for DI14 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI15_Pos          _UINT32_(15)                                         /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI15_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI15_Pos)      /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI15(value)       (SPW_LINK1_DISTINTIM_DI15_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI15_Pos)) /* Assigment of value for DI15 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI16_Pos          _UINT32_(16)                                         /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI16_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI16_Pos)      /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI16(value)       (SPW_LINK1_DISTINTIM_DI16_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI16_Pos)) /* Assigment of value for DI16 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI17_Pos          _UINT32_(17)                                         /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI17_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI17_Pos)      /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI17(value)       (SPW_LINK1_DISTINTIM_DI17_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI17_Pos)) /* Assigment of value for DI17 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI18_Pos          _UINT32_(18)                                         /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI18_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI18_Pos)      /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI18(value)       (SPW_LINK1_DISTINTIM_DI18_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI18_Pos)) /* Assigment of value for DI18 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI19_Pos          _UINT32_(19)                                         /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI19_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI19_Pos)      /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI19(value)       (SPW_LINK1_DISTINTIM_DI19_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI19_Pos)) /* Assigment of value for DI19 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI20_Pos          _UINT32_(20)                                         /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI20_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI20_Pos)      /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI20(value)       (SPW_LINK1_DISTINTIM_DI20_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI20_Pos)) /* Assigment of value for DI20 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI21_Pos          _UINT32_(21)                                         /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI21_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI21_Pos)      /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI21(value)       (SPW_LINK1_DISTINTIM_DI21_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI21_Pos)) /* Assigment of value for DI21 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI22_Pos          _UINT32_(22)                                         /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI22_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI22_Pos)      /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI22(value)       (SPW_LINK1_DISTINTIM_DI22_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI22_Pos)) /* Assigment of value for DI22 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI23_Pos          _UINT32_(23)                                         /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI23_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI23_Pos)      /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI23(value)       (SPW_LINK1_DISTINTIM_DI23_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI23_Pos)) /* Assigment of value for DI23 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI24_Pos          _UINT32_(24)                                         /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI24_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI24_Pos)      /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI24(value)       (SPW_LINK1_DISTINTIM_DI24_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI24_Pos)) /* Assigment of value for DI24 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI25_Pos          _UINT32_(25)                                         /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI25_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI25_Pos)      /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI25(value)       (SPW_LINK1_DISTINTIM_DI25_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI25_Pos)) /* Assigment of value for DI25 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI26_Pos          _UINT32_(26)                                         /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI26_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI26_Pos)      /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI26(value)       (SPW_LINK1_DISTINTIM_DI26_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI26_Pos)) /* Assigment of value for DI26 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI27_Pos          _UINT32_(27)                                         /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI27_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI27_Pos)      /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI27(value)       (SPW_LINK1_DISTINTIM_DI27_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI27_Pos)) /* Assigment of value for DI27 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI28_Pos          _UINT32_(28)                                         /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI28_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI28_Pos)      /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI28(value)       (SPW_LINK1_DISTINTIM_DI28_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI28_Pos)) /* Assigment of value for DI28 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI29_Pos          _UINT32_(29)                                         /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI29_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI29_Pos)      /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI29(value)       (SPW_LINK1_DISTINTIM_DI29_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI29_Pos)) /* Assigment of value for DI29 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI30_Pos          _UINT32_(30)                                         /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI30_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI30_Pos)      /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI30(value)       (SPW_LINK1_DISTINTIM_DI30_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI30_Pos)) /* Assigment of value for DI30 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_DI31_Pos          _UINT32_(31)                                         /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_DI31_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_DI31_Pos)      /* (SPW_LINK1_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_DI31(value)       (SPW_LINK1_DISTINTIM_DI31_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI31_Pos)) /* Assigment of value for DI31 in the SPW_LINK1_DISTINTIM register */
#define SPW_LINK1_DISTINTIM_Msk               _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK1_DISTINTIM) Register Mask  */

#define SPW_LINK1_DISTINTIM_DI_Pos            _UINT32_(0)                                          /* (SPW_LINK1_DISTINTIM Position) Distributed Interrupt mask */
#define SPW_LINK1_DISTINTIM_DI_Msk            (_UINT32_(0xFFFFFFFF) << SPW_LINK1_DISTINTIM_DI_Pos) /* (SPW_LINK1_DISTINTIM Mask) DI */
#define SPW_LINK1_DISTINTIM_DI(value)         (SPW_LINK1_DISTINTIM_DI_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_DI_Pos)) 

/* -------- SPW_LINK1_DISTINTPI_C : (SPW Offset: 0x454) ( /W 32) SpW Link 1 Distributed Interrupt Clear Pending Interrupt -------- */
#define SPW_LINK1_DISTINTPI_C_DI0_Pos         _UINT32_(0)                                          /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI0_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI0_Pos)     /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI0(value)      (SPW_LINK1_DISTINTPI_C_DI0_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI0_Pos)) /* Assigment of value for DI0 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI1_Pos         _UINT32_(1)                                          /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI1_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI1_Pos)     /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI1(value)      (SPW_LINK1_DISTINTPI_C_DI1_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI1_Pos)) /* Assigment of value for DI1 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI2_Pos         _UINT32_(2)                                          /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI2_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI2_Pos)     /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI2(value)      (SPW_LINK1_DISTINTPI_C_DI2_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI2_Pos)) /* Assigment of value for DI2 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI3_Pos         _UINT32_(3)                                          /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI3_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI3_Pos)     /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI3(value)      (SPW_LINK1_DISTINTPI_C_DI3_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI3_Pos)) /* Assigment of value for DI3 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI4_Pos         _UINT32_(4)                                          /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI4_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI4_Pos)     /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI4(value)      (SPW_LINK1_DISTINTPI_C_DI4_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI4_Pos)) /* Assigment of value for DI4 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI5_Pos         _UINT32_(5)                                          /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI5_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI5_Pos)     /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI5(value)      (SPW_LINK1_DISTINTPI_C_DI5_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI5_Pos)) /* Assigment of value for DI5 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI6_Pos         _UINT32_(6)                                          /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI6_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI6_Pos)     /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI6(value)      (SPW_LINK1_DISTINTPI_C_DI6_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI6_Pos)) /* Assigment of value for DI6 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI7_Pos         _UINT32_(7)                                          /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI7_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI7_Pos)     /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI7(value)      (SPW_LINK1_DISTINTPI_C_DI7_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI7_Pos)) /* Assigment of value for DI7 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI8_Pos         _UINT32_(8)                                          /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI8_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI8_Pos)     /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI8(value)      (SPW_LINK1_DISTINTPI_C_DI8_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI8_Pos)) /* Assigment of value for DI8 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI9_Pos         _UINT32_(9)                                          /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI9_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI9_Pos)     /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI9(value)      (SPW_LINK1_DISTINTPI_C_DI9_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI9_Pos)) /* Assigment of value for DI9 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI10_Pos        _UINT32_(10)                                         /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI10_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI10_Pos)    /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI10(value)     (SPW_LINK1_DISTINTPI_C_DI10_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI10_Pos)) /* Assigment of value for DI10 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI11_Pos        _UINT32_(11)                                         /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI11_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI11_Pos)    /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI11(value)     (SPW_LINK1_DISTINTPI_C_DI11_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI11_Pos)) /* Assigment of value for DI11 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI12_Pos        _UINT32_(12)                                         /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI12_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI12_Pos)    /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI12(value)     (SPW_LINK1_DISTINTPI_C_DI12_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI12_Pos)) /* Assigment of value for DI12 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI13_Pos        _UINT32_(13)                                         /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI13_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI13_Pos)    /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI13(value)     (SPW_LINK1_DISTINTPI_C_DI13_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI13_Pos)) /* Assigment of value for DI13 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI14_Pos        _UINT32_(14)                                         /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI14_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI14_Pos)    /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI14(value)     (SPW_LINK1_DISTINTPI_C_DI14_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI14_Pos)) /* Assigment of value for DI14 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI15_Pos        _UINT32_(15)                                         /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI15_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI15_Pos)    /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI15(value)     (SPW_LINK1_DISTINTPI_C_DI15_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI15_Pos)) /* Assigment of value for DI15 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI16_Pos        _UINT32_(16)                                         /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI16_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI16_Pos)    /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI16(value)     (SPW_LINK1_DISTINTPI_C_DI16_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI16_Pos)) /* Assigment of value for DI16 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI17_Pos        _UINT32_(17)                                         /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI17_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI17_Pos)    /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI17(value)     (SPW_LINK1_DISTINTPI_C_DI17_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI17_Pos)) /* Assigment of value for DI17 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI18_Pos        _UINT32_(18)                                         /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI18_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI18_Pos)    /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI18(value)     (SPW_LINK1_DISTINTPI_C_DI18_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI18_Pos)) /* Assigment of value for DI18 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI19_Pos        _UINT32_(19)                                         /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI19_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI19_Pos)    /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI19(value)     (SPW_LINK1_DISTINTPI_C_DI19_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI19_Pos)) /* Assigment of value for DI19 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI20_Pos        _UINT32_(20)                                         /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI20_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI20_Pos)    /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI20(value)     (SPW_LINK1_DISTINTPI_C_DI20_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI20_Pos)) /* Assigment of value for DI20 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI21_Pos        _UINT32_(21)                                         /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI21_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI21_Pos)    /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI21(value)     (SPW_LINK1_DISTINTPI_C_DI21_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI21_Pos)) /* Assigment of value for DI21 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI22_Pos        _UINT32_(22)                                         /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI22_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI22_Pos)    /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI22(value)     (SPW_LINK1_DISTINTPI_C_DI22_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI22_Pos)) /* Assigment of value for DI22 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI23_Pos        _UINT32_(23)                                         /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI23_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI23_Pos)    /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI23(value)     (SPW_LINK1_DISTINTPI_C_DI23_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI23_Pos)) /* Assigment of value for DI23 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI24_Pos        _UINT32_(24)                                         /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI24_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI24_Pos)    /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI24(value)     (SPW_LINK1_DISTINTPI_C_DI24_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI24_Pos)) /* Assigment of value for DI24 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI25_Pos        _UINT32_(25)                                         /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI25_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI25_Pos)    /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI25(value)     (SPW_LINK1_DISTINTPI_C_DI25_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI25_Pos)) /* Assigment of value for DI25 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI26_Pos        _UINT32_(26)                                         /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI26_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI26_Pos)    /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI26(value)     (SPW_LINK1_DISTINTPI_C_DI26_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI26_Pos)) /* Assigment of value for DI26 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI27_Pos        _UINT32_(27)                                         /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI27_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI27_Pos)    /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI27(value)     (SPW_LINK1_DISTINTPI_C_DI27_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI27_Pos)) /* Assigment of value for DI27 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI28_Pos        _UINT32_(28)                                         /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI28_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI28_Pos)    /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI28(value)     (SPW_LINK1_DISTINTPI_C_DI28_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI28_Pos)) /* Assigment of value for DI28 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI29_Pos        _UINT32_(29)                                         /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI29_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI29_Pos)    /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI29(value)     (SPW_LINK1_DISTINTPI_C_DI29_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI29_Pos)) /* Assigment of value for DI29 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI30_Pos        _UINT32_(30)                                         /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI30_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI30_Pos)    /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI30(value)     (SPW_LINK1_DISTINTPI_C_DI30_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI30_Pos)) /* Assigment of value for DI30 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_DI31_Pos        _UINT32_(31)                                         /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK1_DISTINTPI_C_DI31_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTPI_C_DI31_Pos)    /* (SPW_LINK1_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK1_DISTINTPI_C_DI31(value)     (SPW_LINK1_DISTINTPI_C_DI31_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI31_Pos)) /* Assigment of value for DI31 in the SPW_LINK1_DISTINTPI_C register */
#define SPW_LINK1_DISTINTPI_C_Msk             _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK1_DISTINTPI_C) Register Mask  */

#define SPW_LINK1_DISTINTPI_C_DI_Pos          _UINT32_(0)                                          /* (SPW_LINK1_DISTINTPI_C Position) Distributed Interrupt */
#define SPW_LINK1_DISTINTPI_C_DI_Msk          (_UINT32_(0xFFFFFFFF) << SPW_LINK1_DISTINTPI_C_DI_Pos) /* (SPW_LINK1_DISTINTPI_C Mask) DI */
#define SPW_LINK1_DISTINTPI_C_DI(value)       (SPW_LINK1_DISTINTPI_C_DI_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTPI_C_DI_Pos)) 

/* -------- SPW_LINK1_DISTINTIM_S : (SPW Offset: 0x458) ( /W 32) SpW Link 1 Distributed Interrupt Set Mask -------- */
#define SPW_LINK1_DISTINTIM_S_DI0_Pos         _UINT32_(0)                                          /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI0_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI0_Pos)     /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI0(value)      (SPW_LINK1_DISTINTIM_S_DI0_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI0_Pos)) /* Assigment of value for DI0 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI1_Pos         _UINT32_(1)                                          /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI1_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI1_Pos)     /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI1(value)      (SPW_LINK1_DISTINTIM_S_DI1_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI1_Pos)) /* Assigment of value for DI1 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI2_Pos         _UINT32_(2)                                          /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI2_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI2_Pos)     /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI2(value)      (SPW_LINK1_DISTINTIM_S_DI2_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI2_Pos)) /* Assigment of value for DI2 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI3_Pos         _UINT32_(3)                                          /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI3_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI3_Pos)     /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI3(value)      (SPW_LINK1_DISTINTIM_S_DI3_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI3_Pos)) /* Assigment of value for DI3 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI4_Pos         _UINT32_(4)                                          /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI4_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI4_Pos)     /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI4(value)      (SPW_LINK1_DISTINTIM_S_DI4_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI4_Pos)) /* Assigment of value for DI4 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI5_Pos         _UINT32_(5)                                          /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI5_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI5_Pos)     /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI5(value)      (SPW_LINK1_DISTINTIM_S_DI5_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI5_Pos)) /* Assigment of value for DI5 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI6_Pos         _UINT32_(6)                                          /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI6_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI6_Pos)     /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI6(value)      (SPW_LINK1_DISTINTIM_S_DI6_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI6_Pos)) /* Assigment of value for DI6 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI7_Pos         _UINT32_(7)                                          /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI7_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI7_Pos)     /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI7(value)      (SPW_LINK1_DISTINTIM_S_DI7_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI7_Pos)) /* Assigment of value for DI7 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI8_Pos         _UINT32_(8)                                          /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI8_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI8_Pos)     /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI8(value)      (SPW_LINK1_DISTINTIM_S_DI8_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI8_Pos)) /* Assigment of value for DI8 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI9_Pos         _UINT32_(9)                                          /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI9_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI9_Pos)     /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI9(value)      (SPW_LINK1_DISTINTIM_S_DI9_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI9_Pos)) /* Assigment of value for DI9 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI10_Pos        _UINT32_(10)                                         /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI10_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI10_Pos)    /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI10(value)     (SPW_LINK1_DISTINTIM_S_DI10_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI10_Pos)) /* Assigment of value for DI10 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI11_Pos        _UINT32_(11)                                         /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI11_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI11_Pos)    /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI11(value)     (SPW_LINK1_DISTINTIM_S_DI11_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI11_Pos)) /* Assigment of value for DI11 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI12_Pos        _UINT32_(12)                                         /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI12_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI12_Pos)    /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI12(value)     (SPW_LINK1_DISTINTIM_S_DI12_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI12_Pos)) /* Assigment of value for DI12 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI13_Pos        _UINT32_(13)                                         /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI13_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI13_Pos)    /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI13(value)     (SPW_LINK1_DISTINTIM_S_DI13_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI13_Pos)) /* Assigment of value for DI13 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI14_Pos        _UINT32_(14)                                         /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI14_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI14_Pos)    /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI14(value)     (SPW_LINK1_DISTINTIM_S_DI14_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI14_Pos)) /* Assigment of value for DI14 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI15_Pos        _UINT32_(15)                                         /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI15_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI15_Pos)    /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI15(value)     (SPW_LINK1_DISTINTIM_S_DI15_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI15_Pos)) /* Assigment of value for DI15 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI16_Pos        _UINT32_(16)                                         /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI16_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI16_Pos)    /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI16(value)     (SPW_LINK1_DISTINTIM_S_DI16_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI16_Pos)) /* Assigment of value for DI16 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI17_Pos        _UINT32_(17)                                         /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI17_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI17_Pos)    /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI17(value)     (SPW_LINK1_DISTINTIM_S_DI17_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI17_Pos)) /* Assigment of value for DI17 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI18_Pos        _UINT32_(18)                                         /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI18_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI18_Pos)    /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI18(value)     (SPW_LINK1_DISTINTIM_S_DI18_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI18_Pos)) /* Assigment of value for DI18 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI19_Pos        _UINT32_(19)                                         /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI19_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI19_Pos)    /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI19(value)     (SPW_LINK1_DISTINTIM_S_DI19_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI19_Pos)) /* Assigment of value for DI19 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI20_Pos        _UINT32_(20)                                         /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI20_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI20_Pos)    /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI20(value)     (SPW_LINK1_DISTINTIM_S_DI20_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI20_Pos)) /* Assigment of value for DI20 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI21_Pos        _UINT32_(21)                                         /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI21_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI21_Pos)    /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI21(value)     (SPW_LINK1_DISTINTIM_S_DI21_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI21_Pos)) /* Assigment of value for DI21 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI22_Pos        _UINT32_(22)                                         /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI22_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI22_Pos)    /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI22(value)     (SPW_LINK1_DISTINTIM_S_DI22_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI22_Pos)) /* Assigment of value for DI22 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI23_Pos        _UINT32_(23)                                         /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI23_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI23_Pos)    /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI23(value)     (SPW_LINK1_DISTINTIM_S_DI23_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI23_Pos)) /* Assigment of value for DI23 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI24_Pos        _UINT32_(24)                                         /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI24_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI24_Pos)    /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI24(value)     (SPW_LINK1_DISTINTIM_S_DI24_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI24_Pos)) /* Assigment of value for DI24 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI25_Pos        _UINT32_(25)                                         /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI25_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI25_Pos)    /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI25(value)     (SPW_LINK1_DISTINTIM_S_DI25_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI25_Pos)) /* Assigment of value for DI25 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI26_Pos        _UINT32_(26)                                         /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI26_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI26_Pos)    /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI26(value)     (SPW_LINK1_DISTINTIM_S_DI26_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI26_Pos)) /* Assigment of value for DI26 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI27_Pos        _UINT32_(27)                                         /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI27_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI27_Pos)    /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI27(value)     (SPW_LINK1_DISTINTIM_S_DI27_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI27_Pos)) /* Assigment of value for DI27 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI28_Pos        _UINT32_(28)                                         /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI28_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI28_Pos)    /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI28(value)     (SPW_LINK1_DISTINTIM_S_DI28_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI28_Pos)) /* Assigment of value for DI28 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI29_Pos        _UINT32_(29)                                         /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI29_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI29_Pos)    /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI29(value)     (SPW_LINK1_DISTINTIM_S_DI29_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI29_Pos)) /* Assigment of value for DI29 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI30_Pos        _UINT32_(30)                                         /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI30_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI30_Pos)    /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI30(value)     (SPW_LINK1_DISTINTIM_S_DI30_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI30_Pos)) /* Assigment of value for DI30 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_DI31_Pos        _UINT32_(31)                                         /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_S_DI31_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_S_DI31_Pos)    /* (SPW_LINK1_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_S_DI31(value)     (SPW_LINK1_DISTINTIM_S_DI31_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI31_Pos)) /* Assigment of value for DI31 in the SPW_LINK1_DISTINTIM_S register */
#define SPW_LINK1_DISTINTIM_S_Msk             _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK1_DISTINTIM_S) Register Mask  */

#define SPW_LINK1_DISTINTIM_S_DI_Pos          _UINT32_(0)                                          /* (SPW_LINK1_DISTINTIM_S Position) Distributed Interrupt mask */
#define SPW_LINK1_DISTINTIM_S_DI_Msk          (_UINT32_(0xFFFFFFFF) << SPW_LINK1_DISTINTIM_S_DI_Pos) /* (SPW_LINK1_DISTINTIM_S Mask) DI */
#define SPW_LINK1_DISTINTIM_S_DI(value)       (SPW_LINK1_DISTINTIM_S_DI_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_S_DI_Pos)) 

/* -------- SPW_LINK1_DISTINTIM_C : (SPW Offset: 0x45C) ( /W 32) SpW Link 1 Distributed Interrupt Clear Mask -------- */
#define SPW_LINK1_DISTINTIM_C_DI0_Pos         _UINT32_(0)                                          /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI0_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI0_Pos)     /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI0(value)      (SPW_LINK1_DISTINTIM_C_DI0_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI0_Pos)) /* Assigment of value for DI0 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI1_Pos         _UINT32_(1)                                          /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI1_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI1_Pos)     /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI1(value)      (SPW_LINK1_DISTINTIM_C_DI1_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI1_Pos)) /* Assigment of value for DI1 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI2_Pos         _UINT32_(2)                                          /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI2_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI2_Pos)     /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI2(value)      (SPW_LINK1_DISTINTIM_C_DI2_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI2_Pos)) /* Assigment of value for DI2 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI3_Pos         _UINT32_(3)                                          /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI3_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI3_Pos)     /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI3(value)      (SPW_LINK1_DISTINTIM_C_DI3_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI3_Pos)) /* Assigment of value for DI3 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI4_Pos         _UINT32_(4)                                          /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI4_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI4_Pos)     /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI4(value)      (SPW_LINK1_DISTINTIM_C_DI4_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI4_Pos)) /* Assigment of value for DI4 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI5_Pos         _UINT32_(5)                                          /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI5_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI5_Pos)     /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI5(value)      (SPW_LINK1_DISTINTIM_C_DI5_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI5_Pos)) /* Assigment of value for DI5 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI6_Pos         _UINT32_(6)                                          /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI6_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI6_Pos)     /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI6(value)      (SPW_LINK1_DISTINTIM_C_DI6_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI6_Pos)) /* Assigment of value for DI6 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI7_Pos         _UINT32_(7)                                          /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI7_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI7_Pos)     /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI7(value)      (SPW_LINK1_DISTINTIM_C_DI7_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI7_Pos)) /* Assigment of value for DI7 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI8_Pos         _UINT32_(8)                                          /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI8_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI8_Pos)     /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI8(value)      (SPW_LINK1_DISTINTIM_C_DI8_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI8_Pos)) /* Assigment of value for DI8 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI9_Pos         _UINT32_(9)                                          /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI9_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI9_Pos)     /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI9(value)      (SPW_LINK1_DISTINTIM_C_DI9_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI9_Pos)) /* Assigment of value for DI9 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI10_Pos        _UINT32_(10)                                         /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI10_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI10_Pos)    /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI10(value)     (SPW_LINK1_DISTINTIM_C_DI10_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI10_Pos)) /* Assigment of value for DI10 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI11_Pos        _UINT32_(11)                                         /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI11_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI11_Pos)    /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI11(value)     (SPW_LINK1_DISTINTIM_C_DI11_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI11_Pos)) /* Assigment of value for DI11 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI12_Pos        _UINT32_(12)                                         /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI12_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI12_Pos)    /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI12(value)     (SPW_LINK1_DISTINTIM_C_DI12_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI12_Pos)) /* Assigment of value for DI12 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI13_Pos        _UINT32_(13)                                         /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI13_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI13_Pos)    /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI13(value)     (SPW_LINK1_DISTINTIM_C_DI13_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI13_Pos)) /* Assigment of value for DI13 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI14_Pos        _UINT32_(14)                                         /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI14_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI14_Pos)    /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI14(value)     (SPW_LINK1_DISTINTIM_C_DI14_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI14_Pos)) /* Assigment of value for DI14 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI15_Pos        _UINT32_(15)                                         /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI15_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI15_Pos)    /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI15(value)     (SPW_LINK1_DISTINTIM_C_DI15_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI15_Pos)) /* Assigment of value for DI15 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI16_Pos        _UINT32_(16)                                         /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI16_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI16_Pos)    /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI16(value)     (SPW_LINK1_DISTINTIM_C_DI16_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI16_Pos)) /* Assigment of value for DI16 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI17_Pos        _UINT32_(17)                                         /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI17_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI17_Pos)    /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI17(value)     (SPW_LINK1_DISTINTIM_C_DI17_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI17_Pos)) /* Assigment of value for DI17 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI18_Pos        _UINT32_(18)                                         /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI18_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI18_Pos)    /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI18(value)     (SPW_LINK1_DISTINTIM_C_DI18_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI18_Pos)) /* Assigment of value for DI18 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI19_Pos        _UINT32_(19)                                         /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI19_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI19_Pos)    /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI19(value)     (SPW_LINK1_DISTINTIM_C_DI19_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI19_Pos)) /* Assigment of value for DI19 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI20_Pos        _UINT32_(20)                                         /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI20_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI20_Pos)    /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI20(value)     (SPW_LINK1_DISTINTIM_C_DI20_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI20_Pos)) /* Assigment of value for DI20 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI21_Pos        _UINT32_(21)                                         /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI21_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI21_Pos)    /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI21(value)     (SPW_LINK1_DISTINTIM_C_DI21_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI21_Pos)) /* Assigment of value for DI21 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI22_Pos        _UINT32_(22)                                         /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI22_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI22_Pos)    /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI22(value)     (SPW_LINK1_DISTINTIM_C_DI22_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI22_Pos)) /* Assigment of value for DI22 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI23_Pos        _UINT32_(23)                                         /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI23_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI23_Pos)    /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI23(value)     (SPW_LINK1_DISTINTIM_C_DI23_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI23_Pos)) /* Assigment of value for DI23 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI24_Pos        _UINT32_(24)                                         /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI24_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI24_Pos)    /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI24(value)     (SPW_LINK1_DISTINTIM_C_DI24_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI24_Pos)) /* Assigment of value for DI24 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI25_Pos        _UINT32_(25)                                         /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI25_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI25_Pos)    /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI25(value)     (SPW_LINK1_DISTINTIM_C_DI25_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI25_Pos)) /* Assigment of value for DI25 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI26_Pos        _UINT32_(26)                                         /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI26_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI26_Pos)    /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI26(value)     (SPW_LINK1_DISTINTIM_C_DI26_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI26_Pos)) /* Assigment of value for DI26 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI27_Pos        _UINT32_(27)                                         /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI27_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI27_Pos)    /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI27(value)     (SPW_LINK1_DISTINTIM_C_DI27_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI27_Pos)) /* Assigment of value for DI27 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI28_Pos        _UINT32_(28)                                         /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI28_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI28_Pos)    /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI28(value)     (SPW_LINK1_DISTINTIM_C_DI28_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI28_Pos)) /* Assigment of value for DI28 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI29_Pos        _UINT32_(29)                                         /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI29_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI29_Pos)    /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI29(value)     (SPW_LINK1_DISTINTIM_C_DI29_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI29_Pos)) /* Assigment of value for DI29 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI30_Pos        _UINT32_(30)                                         /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI30_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI30_Pos)    /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI30(value)     (SPW_LINK1_DISTINTIM_C_DI30_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI30_Pos)) /* Assigment of value for DI30 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_DI31_Pos        _UINT32_(31)                                         /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK1_DISTINTIM_C_DI31_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTINTIM_C_DI31_Pos)    /* (SPW_LINK1_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK1_DISTINTIM_C_DI31(value)     (SPW_LINK1_DISTINTIM_C_DI31_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI31_Pos)) /* Assigment of value for DI31 in the SPW_LINK1_DISTINTIM_C register */
#define SPW_LINK1_DISTINTIM_C_Msk             _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK1_DISTINTIM_C) Register Mask  */

#define SPW_LINK1_DISTINTIM_C_DI_Pos          _UINT32_(0)                                          /* (SPW_LINK1_DISTINTIM_C Position) Distributed Interrupt mask */
#define SPW_LINK1_DISTINTIM_C_DI_Msk          (_UINT32_(0xFFFFFFFF) << SPW_LINK1_DISTINTIM_C_DI_Pos) /* (SPW_LINK1_DISTINTIM_C Mask) DI */
#define SPW_LINK1_DISTINTIM_C_DI(value)       (SPW_LINK1_DISTINTIM_C_DI_Msk & (_UINT32_(value) << SPW_LINK1_DISTINTIM_C_DI_Pos)) 

/* -------- SPW_LINK1_DISTACKPI_RM : (SPW Offset: 0x460) ( R/ 32) SpW Link 1 Distributed Interrupt Acknowledge Pending Read Masked Interrupt -------- */
#define SPW_LINK1_DISTACKPI_RM_DA0_Pos        _UINT32_(0)                                          /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA0_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA0_Pos)    /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA0(value)     (SPW_LINK1_DISTACKPI_RM_DA0_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA0_Pos)) /* Assigment of value for DA0 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA1_Pos        _UINT32_(1)                                          /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA1_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA1_Pos)    /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA1(value)     (SPW_LINK1_DISTACKPI_RM_DA1_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA1_Pos)) /* Assigment of value for DA1 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA2_Pos        _UINT32_(2)                                          /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA2_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA2_Pos)    /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA2(value)     (SPW_LINK1_DISTACKPI_RM_DA2_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA2_Pos)) /* Assigment of value for DA2 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA3_Pos        _UINT32_(3)                                          /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA3_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA3_Pos)    /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA3(value)     (SPW_LINK1_DISTACKPI_RM_DA3_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA3_Pos)) /* Assigment of value for DA3 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA4_Pos        _UINT32_(4)                                          /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA4_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA4_Pos)    /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA4(value)     (SPW_LINK1_DISTACKPI_RM_DA4_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA4_Pos)) /* Assigment of value for DA4 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA5_Pos        _UINT32_(5)                                          /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA5_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA5_Pos)    /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA5(value)     (SPW_LINK1_DISTACKPI_RM_DA5_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA5_Pos)) /* Assigment of value for DA5 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA6_Pos        _UINT32_(6)                                          /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA6_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA6_Pos)    /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA6(value)     (SPW_LINK1_DISTACKPI_RM_DA6_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA6_Pos)) /* Assigment of value for DA6 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA7_Pos        _UINT32_(7)                                          /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA7_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA7_Pos)    /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA7(value)     (SPW_LINK1_DISTACKPI_RM_DA7_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA7_Pos)) /* Assigment of value for DA7 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA8_Pos        _UINT32_(8)                                          /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA8_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA8_Pos)    /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA8(value)     (SPW_LINK1_DISTACKPI_RM_DA8_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA8_Pos)) /* Assigment of value for DA8 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA9_Pos        _UINT32_(9)                                          /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA9_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA9_Pos)    /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA9(value)     (SPW_LINK1_DISTACKPI_RM_DA9_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA9_Pos)) /* Assigment of value for DA9 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA10_Pos       _UINT32_(10)                                         /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA10_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA10_Pos)   /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA10(value)    (SPW_LINK1_DISTACKPI_RM_DA10_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA10_Pos)) /* Assigment of value for DA10 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA11_Pos       _UINT32_(11)                                         /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA11_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA11_Pos)   /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA11(value)    (SPW_LINK1_DISTACKPI_RM_DA11_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA11_Pos)) /* Assigment of value for DA11 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA12_Pos       _UINT32_(12)                                         /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA12_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA12_Pos)   /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA12(value)    (SPW_LINK1_DISTACKPI_RM_DA12_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA12_Pos)) /* Assigment of value for DA12 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA13_Pos       _UINT32_(13)                                         /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA13_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA13_Pos)   /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA13(value)    (SPW_LINK1_DISTACKPI_RM_DA13_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA13_Pos)) /* Assigment of value for DA13 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA14_Pos       _UINT32_(14)                                         /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA14_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA14_Pos)   /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA14(value)    (SPW_LINK1_DISTACKPI_RM_DA14_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA14_Pos)) /* Assigment of value for DA14 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA15_Pos       _UINT32_(15)                                         /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA15_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA15_Pos)   /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA15(value)    (SPW_LINK1_DISTACKPI_RM_DA15_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA15_Pos)) /* Assigment of value for DA15 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA16_Pos       _UINT32_(16)                                         /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA16_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA16_Pos)   /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA16(value)    (SPW_LINK1_DISTACKPI_RM_DA16_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA16_Pos)) /* Assigment of value for DA16 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA17_Pos       _UINT32_(17)                                         /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA17_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA17_Pos)   /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA17(value)    (SPW_LINK1_DISTACKPI_RM_DA17_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA17_Pos)) /* Assigment of value for DA17 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA18_Pos       _UINT32_(18)                                         /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA18_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA18_Pos)   /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA18(value)    (SPW_LINK1_DISTACKPI_RM_DA18_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA18_Pos)) /* Assigment of value for DA18 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA19_Pos       _UINT32_(19)                                         /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA19_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA19_Pos)   /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA19(value)    (SPW_LINK1_DISTACKPI_RM_DA19_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA19_Pos)) /* Assigment of value for DA19 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA20_Pos       _UINT32_(20)                                         /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA20_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA20_Pos)   /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA20(value)    (SPW_LINK1_DISTACKPI_RM_DA20_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA20_Pos)) /* Assigment of value for DA20 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA21_Pos       _UINT32_(21)                                         /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA21_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA21_Pos)   /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA21(value)    (SPW_LINK1_DISTACKPI_RM_DA21_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA21_Pos)) /* Assigment of value for DA21 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA22_Pos       _UINT32_(22)                                         /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA22_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA22_Pos)   /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA22(value)    (SPW_LINK1_DISTACKPI_RM_DA22_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA22_Pos)) /* Assigment of value for DA22 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA23_Pos       _UINT32_(23)                                         /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA23_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA23_Pos)   /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA23(value)    (SPW_LINK1_DISTACKPI_RM_DA23_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA23_Pos)) /* Assigment of value for DA23 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA24_Pos       _UINT32_(24)                                         /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA24_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA24_Pos)   /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA24(value)    (SPW_LINK1_DISTACKPI_RM_DA24_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA24_Pos)) /* Assigment of value for DA24 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA25_Pos       _UINT32_(25)                                         /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA25_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA25_Pos)   /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA25(value)    (SPW_LINK1_DISTACKPI_RM_DA25_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA25_Pos)) /* Assigment of value for DA25 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA26_Pos       _UINT32_(26)                                         /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA26_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA26_Pos)   /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA26(value)    (SPW_LINK1_DISTACKPI_RM_DA26_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA26_Pos)) /* Assigment of value for DA26 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA27_Pos       _UINT32_(27)                                         /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA27_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA27_Pos)   /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA27(value)    (SPW_LINK1_DISTACKPI_RM_DA27_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA27_Pos)) /* Assigment of value for DA27 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA28_Pos       _UINT32_(28)                                         /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA28_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA28_Pos)   /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA28(value)    (SPW_LINK1_DISTACKPI_RM_DA28_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA28_Pos)) /* Assigment of value for DA28 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA29_Pos       _UINT32_(29)                                         /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA29_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA29_Pos)   /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA29(value)    (SPW_LINK1_DISTACKPI_RM_DA29_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA29_Pos)) /* Assigment of value for DA29 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA30_Pos       _UINT32_(30)                                         /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA30_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA30_Pos)   /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA30(value)    (SPW_LINK1_DISTACKPI_RM_DA30_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA30_Pos)) /* Assigment of value for DA30 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_DA31_Pos       _UINT32_(31)                                         /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RM_DA31_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RM_DA31_Pos)   /* (SPW_LINK1_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RM_DA31(value)    (SPW_LINK1_DISTACKPI_RM_DA31_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA31_Pos)) /* Assigment of value for DA31 in the SPW_LINK1_DISTACKPI_RM register */
#define SPW_LINK1_DISTACKPI_RM_Msk            _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK1_DISTACKPI_RM) Register Mask  */

#define SPW_LINK1_DISTACKPI_RM_DA_Pos         _UINT32_(0)                                          /* (SPW_LINK1_DISTACKPI_RM Position) Distributed Acknowledge */
#define SPW_LINK1_DISTACKPI_RM_DA_Msk         (_UINT32_(0xFFFFFFFF) << SPW_LINK1_DISTACKPI_RM_DA_Pos) /* (SPW_LINK1_DISTACKPI_RM Mask) DA */
#define SPW_LINK1_DISTACKPI_RM_DA(value)      (SPW_LINK1_DISTACKPI_RM_DA_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RM_DA_Pos)) 

/* -------- SPW_LINK1_DISTACKPI_RCM : (SPW Offset: 0x464) ( R/ 32) SpW Link 1 Distributed Interrupt Acknowledge Pending Read and Clear Masked Interrupt -------- */
#define SPW_LINK1_DISTACKPI_RCM_DA0_Pos       _UINT32_(0)                                          /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA0_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA0_Pos)   /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA0(value)    (SPW_LINK1_DISTACKPI_RCM_DA0_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA0_Pos)) /* Assigment of value for DA0 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA1_Pos       _UINT32_(1)                                          /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA1_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA1_Pos)   /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA1(value)    (SPW_LINK1_DISTACKPI_RCM_DA1_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA1_Pos)) /* Assigment of value for DA1 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA2_Pos       _UINT32_(2)                                          /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA2_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA2_Pos)   /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA2(value)    (SPW_LINK1_DISTACKPI_RCM_DA2_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA2_Pos)) /* Assigment of value for DA2 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA3_Pos       _UINT32_(3)                                          /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA3_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA3_Pos)   /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA3(value)    (SPW_LINK1_DISTACKPI_RCM_DA3_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA3_Pos)) /* Assigment of value for DA3 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA4_Pos       _UINT32_(4)                                          /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA4_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA4_Pos)   /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA4(value)    (SPW_LINK1_DISTACKPI_RCM_DA4_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA4_Pos)) /* Assigment of value for DA4 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA5_Pos       _UINT32_(5)                                          /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA5_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA5_Pos)   /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA5(value)    (SPW_LINK1_DISTACKPI_RCM_DA5_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA5_Pos)) /* Assigment of value for DA5 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA6_Pos       _UINT32_(6)                                          /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA6_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA6_Pos)   /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA6(value)    (SPW_LINK1_DISTACKPI_RCM_DA6_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA6_Pos)) /* Assigment of value for DA6 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA7_Pos       _UINT32_(7)                                          /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA7_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA7_Pos)   /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA7(value)    (SPW_LINK1_DISTACKPI_RCM_DA7_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA7_Pos)) /* Assigment of value for DA7 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA8_Pos       _UINT32_(8)                                          /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA8_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA8_Pos)   /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA8(value)    (SPW_LINK1_DISTACKPI_RCM_DA8_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA8_Pos)) /* Assigment of value for DA8 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA9_Pos       _UINT32_(9)                                          /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA9_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA9_Pos)   /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA9(value)    (SPW_LINK1_DISTACKPI_RCM_DA9_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA9_Pos)) /* Assigment of value for DA9 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA10_Pos      _UINT32_(10)                                         /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA10_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA10_Pos)  /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA10(value)   (SPW_LINK1_DISTACKPI_RCM_DA10_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA10_Pos)) /* Assigment of value for DA10 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA11_Pos      _UINT32_(11)                                         /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA11_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA11_Pos)  /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA11(value)   (SPW_LINK1_DISTACKPI_RCM_DA11_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA11_Pos)) /* Assigment of value for DA11 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA12_Pos      _UINT32_(12)                                         /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA12_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA12_Pos)  /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA12(value)   (SPW_LINK1_DISTACKPI_RCM_DA12_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA12_Pos)) /* Assigment of value for DA12 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA13_Pos      _UINT32_(13)                                         /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA13_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA13_Pos)  /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA13(value)   (SPW_LINK1_DISTACKPI_RCM_DA13_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA13_Pos)) /* Assigment of value for DA13 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA14_Pos      _UINT32_(14)                                         /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA14_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA14_Pos)  /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA14(value)   (SPW_LINK1_DISTACKPI_RCM_DA14_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA14_Pos)) /* Assigment of value for DA14 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA15_Pos      _UINT32_(15)                                         /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA15_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA15_Pos)  /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA15(value)   (SPW_LINK1_DISTACKPI_RCM_DA15_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA15_Pos)) /* Assigment of value for DA15 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA16_Pos      _UINT32_(16)                                         /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA16_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA16_Pos)  /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA16(value)   (SPW_LINK1_DISTACKPI_RCM_DA16_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA16_Pos)) /* Assigment of value for DA16 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA17_Pos      _UINT32_(17)                                         /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA17_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA17_Pos)  /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA17(value)   (SPW_LINK1_DISTACKPI_RCM_DA17_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA17_Pos)) /* Assigment of value for DA17 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA18_Pos      _UINT32_(18)                                         /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA18_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA18_Pos)  /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA18(value)   (SPW_LINK1_DISTACKPI_RCM_DA18_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA18_Pos)) /* Assigment of value for DA18 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA19_Pos      _UINT32_(19)                                         /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA19_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA19_Pos)  /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA19(value)   (SPW_LINK1_DISTACKPI_RCM_DA19_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA19_Pos)) /* Assigment of value for DA19 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA20_Pos      _UINT32_(20)                                         /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA20_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA20_Pos)  /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA20(value)   (SPW_LINK1_DISTACKPI_RCM_DA20_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA20_Pos)) /* Assigment of value for DA20 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA21_Pos      _UINT32_(21)                                         /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA21_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA21_Pos)  /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA21(value)   (SPW_LINK1_DISTACKPI_RCM_DA21_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA21_Pos)) /* Assigment of value for DA21 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA22_Pos      _UINT32_(22)                                         /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA22_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA22_Pos)  /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA22(value)   (SPW_LINK1_DISTACKPI_RCM_DA22_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA22_Pos)) /* Assigment of value for DA22 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA23_Pos      _UINT32_(23)                                         /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA23_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA23_Pos)  /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA23(value)   (SPW_LINK1_DISTACKPI_RCM_DA23_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA23_Pos)) /* Assigment of value for DA23 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA24_Pos      _UINT32_(24)                                         /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA24_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA24_Pos)  /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA24(value)   (SPW_LINK1_DISTACKPI_RCM_DA24_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA24_Pos)) /* Assigment of value for DA24 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA25_Pos      _UINT32_(25)                                         /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA25_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA25_Pos)  /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA25(value)   (SPW_LINK1_DISTACKPI_RCM_DA25_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA25_Pos)) /* Assigment of value for DA25 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA26_Pos      _UINT32_(26)                                         /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA26_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA26_Pos)  /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA26(value)   (SPW_LINK1_DISTACKPI_RCM_DA26_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA26_Pos)) /* Assigment of value for DA26 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA27_Pos      _UINT32_(27)                                         /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA27_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA27_Pos)  /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA27(value)   (SPW_LINK1_DISTACKPI_RCM_DA27_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA27_Pos)) /* Assigment of value for DA27 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA28_Pos      _UINT32_(28)                                         /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA28_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA28_Pos)  /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA28(value)   (SPW_LINK1_DISTACKPI_RCM_DA28_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA28_Pos)) /* Assigment of value for DA28 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA29_Pos      _UINT32_(29)                                         /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA29_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA29_Pos)  /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA29(value)   (SPW_LINK1_DISTACKPI_RCM_DA29_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA29_Pos)) /* Assigment of value for DA29 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA30_Pos      _UINT32_(30)                                         /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA30_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA30_Pos)  /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA30(value)   (SPW_LINK1_DISTACKPI_RCM_DA30_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA30_Pos)) /* Assigment of value for DA30 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_DA31_Pos      _UINT32_(31)                                         /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCM_DA31_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCM_DA31_Pos)  /* (SPW_LINK1_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCM_DA31(value)   (SPW_LINK1_DISTACKPI_RCM_DA31_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA31_Pos)) /* Assigment of value for DA31 in the SPW_LINK1_DISTACKPI_RCM register */
#define SPW_LINK1_DISTACKPI_RCM_Msk           _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK1_DISTACKPI_RCM) Register Mask  */

#define SPW_LINK1_DISTACKPI_RCM_DA_Pos        _UINT32_(0)                                          /* (SPW_LINK1_DISTACKPI_RCM Position) Distributed Acknowledge */
#define SPW_LINK1_DISTACKPI_RCM_DA_Msk        (_UINT32_(0xFFFFFFFF) << SPW_LINK1_DISTACKPI_RCM_DA_Pos) /* (SPW_LINK1_DISTACKPI_RCM Mask) DA */
#define SPW_LINK1_DISTACKPI_RCM_DA(value)     (SPW_LINK1_DISTACKPI_RCM_DA_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCM_DA_Pos)) 

/* -------- SPW_LINK1_DISTACKPI_R : (SPW Offset: 0x468) ( R/ 32) SpW Link 1 Distributed Interrupt Acknowledge Pending Read Interrupt -------- */
#define SPW_LINK1_DISTACKPI_R_DA0_Pos         _UINT32_(0)                                          /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA0_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA0_Pos)     /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA0(value)      (SPW_LINK1_DISTACKPI_R_DA0_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA0_Pos)) /* Assigment of value for DA0 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA1_Pos         _UINT32_(1)                                          /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA1_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA1_Pos)     /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA1(value)      (SPW_LINK1_DISTACKPI_R_DA1_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA1_Pos)) /* Assigment of value for DA1 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA2_Pos         _UINT32_(2)                                          /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA2_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA2_Pos)     /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA2(value)      (SPW_LINK1_DISTACKPI_R_DA2_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA2_Pos)) /* Assigment of value for DA2 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA3_Pos         _UINT32_(3)                                          /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA3_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA3_Pos)     /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA3(value)      (SPW_LINK1_DISTACKPI_R_DA3_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA3_Pos)) /* Assigment of value for DA3 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA4_Pos         _UINT32_(4)                                          /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA4_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA4_Pos)     /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA4(value)      (SPW_LINK1_DISTACKPI_R_DA4_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA4_Pos)) /* Assigment of value for DA4 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA5_Pos         _UINT32_(5)                                          /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA5_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA5_Pos)     /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA5(value)      (SPW_LINK1_DISTACKPI_R_DA5_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA5_Pos)) /* Assigment of value for DA5 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA6_Pos         _UINT32_(6)                                          /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA6_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA6_Pos)     /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA6(value)      (SPW_LINK1_DISTACKPI_R_DA6_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA6_Pos)) /* Assigment of value for DA6 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA7_Pos         _UINT32_(7)                                          /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA7_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA7_Pos)     /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA7(value)      (SPW_LINK1_DISTACKPI_R_DA7_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA7_Pos)) /* Assigment of value for DA7 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA8_Pos         _UINT32_(8)                                          /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA8_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA8_Pos)     /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA8(value)      (SPW_LINK1_DISTACKPI_R_DA8_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA8_Pos)) /* Assigment of value for DA8 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA9_Pos         _UINT32_(9)                                          /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA9_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA9_Pos)     /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA9(value)      (SPW_LINK1_DISTACKPI_R_DA9_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA9_Pos)) /* Assigment of value for DA9 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA10_Pos        _UINT32_(10)                                         /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA10_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA10_Pos)    /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA10(value)     (SPW_LINK1_DISTACKPI_R_DA10_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA10_Pos)) /* Assigment of value for DA10 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA11_Pos        _UINT32_(11)                                         /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA11_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA11_Pos)    /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA11(value)     (SPW_LINK1_DISTACKPI_R_DA11_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA11_Pos)) /* Assigment of value for DA11 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA12_Pos        _UINT32_(12)                                         /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA12_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA12_Pos)    /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA12(value)     (SPW_LINK1_DISTACKPI_R_DA12_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA12_Pos)) /* Assigment of value for DA12 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA13_Pos        _UINT32_(13)                                         /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA13_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA13_Pos)    /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA13(value)     (SPW_LINK1_DISTACKPI_R_DA13_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA13_Pos)) /* Assigment of value for DA13 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA14_Pos        _UINT32_(14)                                         /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA14_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA14_Pos)    /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA14(value)     (SPW_LINK1_DISTACKPI_R_DA14_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA14_Pos)) /* Assigment of value for DA14 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA15_Pos        _UINT32_(15)                                         /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA15_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA15_Pos)    /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA15(value)     (SPW_LINK1_DISTACKPI_R_DA15_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA15_Pos)) /* Assigment of value for DA15 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA16_Pos        _UINT32_(16)                                         /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA16_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA16_Pos)    /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA16(value)     (SPW_LINK1_DISTACKPI_R_DA16_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA16_Pos)) /* Assigment of value for DA16 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA17_Pos        _UINT32_(17)                                         /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA17_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA17_Pos)    /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA17(value)     (SPW_LINK1_DISTACKPI_R_DA17_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA17_Pos)) /* Assigment of value for DA17 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA18_Pos        _UINT32_(18)                                         /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA18_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA18_Pos)    /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA18(value)     (SPW_LINK1_DISTACKPI_R_DA18_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA18_Pos)) /* Assigment of value for DA18 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA19_Pos        _UINT32_(19)                                         /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA19_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA19_Pos)    /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA19(value)     (SPW_LINK1_DISTACKPI_R_DA19_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA19_Pos)) /* Assigment of value for DA19 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA20_Pos        _UINT32_(20)                                         /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA20_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA20_Pos)    /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA20(value)     (SPW_LINK1_DISTACKPI_R_DA20_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA20_Pos)) /* Assigment of value for DA20 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA21_Pos        _UINT32_(21)                                         /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA21_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA21_Pos)    /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA21(value)     (SPW_LINK1_DISTACKPI_R_DA21_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA21_Pos)) /* Assigment of value for DA21 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA22_Pos        _UINT32_(22)                                         /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA22_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA22_Pos)    /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA22(value)     (SPW_LINK1_DISTACKPI_R_DA22_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA22_Pos)) /* Assigment of value for DA22 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA23_Pos        _UINT32_(23)                                         /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA23_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA23_Pos)    /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA23(value)     (SPW_LINK1_DISTACKPI_R_DA23_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA23_Pos)) /* Assigment of value for DA23 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA24_Pos        _UINT32_(24)                                         /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA24_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA24_Pos)    /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA24(value)     (SPW_LINK1_DISTACKPI_R_DA24_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA24_Pos)) /* Assigment of value for DA24 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA25_Pos        _UINT32_(25)                                         /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA25_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA25_Pos)    /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA25(value)     (SPW_LINK1_DISTACKPI_R_DA25_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA25_Pos)) /* Assigment of value for DA25 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA26_Pos        _UINT32_(26)                                         /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA26_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA26_Pos)    /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA26(value)     (SPW_LINK1_DISTACKPI_R_DA26_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA26_Pos)) /* Assigment of value for DA26 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA27_Pos        _UINT32_(27)                                         /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA27_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA27_Pos)    /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA27(value)     (SPW_LINK1_DISTACKPI_R_DA27_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA27_Pos)) /* Assigment of value for DA27 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA28_Pos        _UINT32_(28)                                         /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA28_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA28_Pos)    /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA28(value)     (SPW_LINK1_DISTACKPI_R_DA28_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA28_Pos)) /* Assigment of value for DA28 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA29_Pos        _UINT32_(29)                                         /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA29_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA29_Pos)    /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA29(value)     (SPW_LINK1_DISTACKPI_R_DA29_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA29_Pos)) /* Assigment of value for DA29 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA30_Pos        _UINT32_(30)                                         /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA30_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA30_Pos)    /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA30(value)     (SPW_LINK1_DISTACKPI_R_DA30_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA30_Pos)) /* Assigment of value for DA30 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_DA31_Pos        _UINT32_(31)                                         /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_R_DA31_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_R_DA31_Pos)    /* (SPW_LINK1_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_R_DA31(value)     (SPW_LINK1_DISTACKPI_R_DA31_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA31_Pos)) /* Assigment of value for DA31 in the SPW_LINK1_DISTACKPI_R register */
#define SPW_LINK1_DISTACKPI_R_Msk             _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK1_DISTACKPI_R) Register Mask  */

#define SPW_LINK1_DISTACKPI_R_DA_Pos          _UINT32_(0)                                          /* (SPW_LINK1_DISTACKPI_R Position) Distributed Acknowledge */
#define SPW_LINK1_DISTACKPI_R_DA_Msk          (_UINT32_(0xFFFFFFFF) << SPW_LINK1_DISTACKPI_R_DA_Pos) /* (SPW_LINK1_DISTACKPI_R Mask) DA */
#define SPW_LINK1_DISTACKPI_R_DA(value)       (SPW_LINK1_DISTACKPI_R_DA_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_R_DA_Pos)) 

/* -------- SPW_LINK1_DISTACKPI_RCS : (SPW Offset: 0x46C) (R/W 32) SpW Link 1 Distributed Interrupt Acknowledge Pending Read and Clear Interrupt -------- */
#define SPW_LINK1_DISTACKPI_RCS_DA0_Pos       _UINT32_(0)                                          /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA0_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA0_Pos)   /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA0(value)    (SPW_LINK1_DISTACKPI_RCS_DA0_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA0_Pos)) /* Assigment of value for DA0 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA1_Pos       _UINT32_(1)                                          /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA1_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA1_Pos)   /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA1(value)    (SPW_LINK1_DISTACKPI_RCS_DA1_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA1_Pos)) /* Assigment of value for DA1 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA2_Pos       _UINT32_(2)                                          /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA2_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA2_Pos)   /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA2(value)    (SPW_LINK1_DISTACKPI_RCS_DA2_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA2_Pos)) /* Assigment of value for DA2 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA3_Pos       _UINT32_(3)                                          /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA3_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA3_Pos)   /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA3(value)    (SPW_LINK1_DISTACKPI_RCS_DA3_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA3_Pos)) /* Assigment of value for DA3 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA4_Pos       _UINT32_(4)                                          /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA4_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA4_Pos)   /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA4(value)    (SPW_LINK1_DISTACKPI_RCS_DA4_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA4_Pos)) /* Assigment of value for DA4 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA5_Pos       _UINT32_(5)                                          /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA5_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA5_Pos)   /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA5(value)    (SPW_LINK1_DISTACKPI_RCS_DA5_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA5_Pos)) /* Assigment of value for DA5 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA6_Pos       _UINT32_(6)                                          /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA6_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA6_Pos)   /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA6(value)    (SPW_LINK1_DISTACKPI_RCS_DA6_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA6_Pos)) /* Assigment of value for DA6 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA7_Pos       _UINT32_(7)                                          /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA7_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA7_Pos)   /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA7(value)    (SPW_LINK1_DISTACKPI_RCS_DA7_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA7_Pos)) /* Assigment of value for DA7 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA8_Pos       _UINT32_(8)                                          /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA8_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA8_Pos)   /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA8(value)    (SPW_LINK1_DISTACKPI_RCS_DA8_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA8_Pos)) /* Assigment of value for DA8 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA9_Pos       _UINT32_(9)                                          /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA9_Msk       (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA9_Pos)   /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA9(value)    (SPW_LINK1_DISTACKPI_RCS_DA9_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA9_Pos)) /* Assigment of value for DA9 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA10_Pos      _UINT32_(10)                                         /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA10_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA10_Pos)  /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA10(value)   (SPW_LINK1_DISTACKPI_RCS_DA10_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA10_Pos)) /* Assigment of value for DA10 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA11_Pos      _UINT32_(11)                                         /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA11_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA11_Pos)  /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA11(value)   (SPW_LINK1_DISTACKPI_RCS_DA11_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA11_Pos)) /* Assigment of value for DA11 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA12_Pos      _UINT32_(12)                                         /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA12_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA12_Pos)  /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA12(value)   (SPW_LINK1_DISTACKPI_RCS_DA12_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA12_Pos)) /* Assigment of value for DA12 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA13_Pos      _UINT32_(13)                                         /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA13_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA13_Pos)  /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA13(value)   (SPW_LINK1_DISTACKPI_RCS_DA13_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA13_Pos)) /* Assigment of value for DA13 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA14_Pos      _UINT32_(14)                                         /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA14_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA14_Pos)  /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA14(value)   (SPW_LINK1_DISTACKPI_RCS_DA14_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA14_Pos)) /* Assigment of value for DA14 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA15_Pos      _UINT32_(15)                                         /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA15_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA15_Pos)  /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA15(value)   (SPW_LINK1_DISTACKPI_RCS_DA15_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA15_Pos)) /* Assigment of value for DA15 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA16_Pos      _UINT32_(16)                                         /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA16_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA16_Pos)  /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA16(value)   (SPW_LINK1_DISTACKPI_RCS_DA16_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA16_Pos)) /* Assigment of value for DA16 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA17_Pos      _UINT32_(17)                                         /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA17_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA17_Pos)  /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA17(value)   (SPW_LINK1_DISTACKPI_RCS_DA17_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA17_Pos)) /* Assigment of value for DA17 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA18_Pos      _UINT32_(18)                                         /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA18_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA18_Pos)  /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA18(value)   (SPW_LINK1_DISTACKPI_RCS_DA18_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA18_Pos)) /* Assigment of value for DA18 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA19_Pos      _UINT32_(19)                                         /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA19_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA19_Pos)  /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA19(value)   (SPW_LINK1_DISTACKPI_RCS_DA19_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA19_Pos)) /* Assigment of value for DA19 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA20_Pos      _UINT32_(20)                                         /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA20_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA20_Pos)  /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA20(value)   (SPW_LINK1_DISTACKPI_RCS_DA20_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA20_Pos)) /* Assigment of value for DA20 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA21_Pos      _UINT32_(21)                                         /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA21_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA21_Pos)  /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA21(value)   (SPW_LINK1_DISTACKPI_RCS_DA21_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA21_Pos)) /* Assigment of value for DA21 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA22_Pos      _UINT32_(22)                                         /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA22_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA22_Pos)  /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA22(value)   (SPW_LINK1_DISTACKPI_RCS_DA22_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA22_Pos)) /* Assigment of value for DA22 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA23_Pos      _UINT32_(23)                                         /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA23_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA23_Pos)  /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA23(value)   (SPW_LINK1_DISTACKPI_RCS_DA23_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA23_Pos)) /* Assigment of value for DA23 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA24_Pos      _UINT32_(24)                                         /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA24_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA24_Pos)  /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA24(value)   (SPW_LINK1_DISTACKPI_RCS_DA24_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA24_Pos)) /* Assigment of value for DA24 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA25_Pos      _UINT32_(25)                                         /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA25_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA25_Pos)  /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA25(value)   (SPW_LINK1_DISTACKPI_RCS_DA25_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA25_Pos)) /* Assigment of value for DA25 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA26_Pos      _UINT32_(26)                                         /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA26_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA26_Pos)  /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA26(value)   (SPW_LINK1_DISTACKPI_RCS_DA26_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA26_Pos)) /* Assigment of value for DA26 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA27_Pos      _UINT32_(27)                                         /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA27_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA27_Pos)  /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA27(value)   (SPW_LINK1_DISTACKPI_RCS_DA27_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA27_Pos)) /* Assigment of value for DA27 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA28_Pos      _UINT32_(28)                                         /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA28_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA28_Pos)  /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA28(value)   (SPW_LINK1_DISTACKPI_RCS_DA28_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA28_Pos)) /* Assigment of value for DA28 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA29_Pos      _UINT32_(29)                                         /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA29_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA29_Pos)  /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA29(value)   (SPW_LINK1_DISTACKPI_RCS_DA29_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA29_Pos)) /* Assigment of value for DA29 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA30_Pos      _UINT32_(30)                                         /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA30_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA30_Pos)  /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA30(value)   (SPW_LINK1_DISTACKPI_RCS_DA30_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA30_Pos)) /* Assigment of value for DA30 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_DA31_Pos      _UINT32_(31)                                         /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_RCS_DA31_Msk      (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_RCS_DA31_Pos)  /* (SPW_LINK1_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_RCS_DA31(value)   (SPW_LINK1_DISTACKPI_RCS_DA31_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA31_Pos)) /* Assigment of value for DA31 in the SPW_LINK1_DISTACKPI_RCS register */
#define SPW_LINK1_DISTACKPI_RCS_Msk           _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK1_DISTACKPI_RCS) Register Mask  */

#define SPW_LINK1_DISTACKPI_RCS_DA_Pos        _UINT32_(0)                                          /* (SPW_LINK1_DISTACKPI_RCS Position) Distributed Acknowledge */
#define SPW_LINK1_DISTACKPI_RCS_DA_Msk        (_UINT32_(0xFFFFFFFF) << SPW_LINK1_DISTACKPI_RCS_DA_Pos) /* (SPW_LINK1_DISTACKPI_RCS Mask) DA */
#define SPW_LINK1_DISTACKPI_RCS_DA(value)     (SPW_LINK1_DISTACKPI_RCS_DA_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_RCS_DA_Pos)) 

/* -------- SPW_LINK1_DISTACKIM : (SPW Offset: 0x470) (R/W 32) SpW Link 1 Distributed Interrupt Acknowledge Mask -------- */
#define SPW_LINK1_DISTACKIM_DA0_Pos           _UINT32_(0)                                          /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA0_Msk           (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA0_Pos)       /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA0(value)        (SPW_LINK1_DISTACKIM_DA0_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA0_Pos)) /* Assigment of value for DA0 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA1_Pos           _UINT32_(1)                                          /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA1_Msk           (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA1_Pos)       /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA1(value)        (SPW_LINK1_DISTACKIM_DA1_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA1_Pos)) /* Assigment of value for DA1 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA2_Pos           _UINT32_(2)                                          /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA2_Msk           (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA2_Pos)       /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA2(value)        (SPW_LINK1_DISTACKIM_DA2_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA2_Pos)) /* Assigment of value for DA2 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA3_Pos           _UINT32_(3)                                          /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA3_Msk           (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA3_Pos)       /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA3(value)        (SPW_LINK1_DISTACKIM_DA3_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA3_Pos)) /* Assigment of value for DA3 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA4_Pos           _UINT32_(4)                                          /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA4_Msk           (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA4_Pos)       /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA4(value)        (SPW_LINK1_DISTACKIM_DA4_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA4_Pos)) /* Assigment of value for DA4 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA5_Pos           _UINT32_(5)                                          /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA5_Msk           (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA5_Pos)       /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA5(value)        (SPW_LINK1_DISTACKIM_DA5_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA5_Pos)) /* Assigment of value for DA5 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA6_Pos           _UINT32_(6)                                          /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA6_Msk           (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA6_Pos)       /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA6(value)        (SPW_LINK1_DISTACKIM_DA6_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA6_Pos)) /* Assigment of value for DA6 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA7_Pos           _UINT32_(7)                                          /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA7_Msk           (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA7_Pos)       /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA7(value)        (SPW_LINK1_DISTACKIM_DA7_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA7_Pos)) /* Assigment of value for DA7 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA8_Pos           _UINT32_(8)                                          /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA8_Msk           (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA8_Pos)       /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA8(value)        (SPW_LINK1_DISTACKIM_DA8_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA8_Pos)) /* Assigment of value for DA8 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA9_Pos           _UINT32_(9)                                          /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA9_Msk           (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA9_Pos)       /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA9(value)        (SPW_LINK1_DISTACKIM_DA9_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA9_Pos)) /* Assigment of value for DA9 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA10_Pos          _UINT32_(10)                                         /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA10_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA10_Pos)      /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA10(value)       (SPW_LINK1_DISTACKIM_DA10_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA10_Pos)) /* Assigment of value for DA10 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA11_Pos          _UINT32_(11)                                         /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA11_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA11_Pos)      /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA11(value)       (SPW_LINK1_DISTACKIM_DA11_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA11_Pos)) /* Assigment of value for DA11 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA12_Pos          _UINT32_(12)                                         /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA12_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA12_Pos)      /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA12(value)       (SPW_LINK1_DISTACKIM_DA12_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA12_Pos)) /* Assigment of value for DA12 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA13_Pos          _UINT32_(13)                                         /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA13_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA13_Pos)      /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA13(value)       (SPW_LINK1_DISTACKIM_DA13_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA13_Pos)) /* Assigment of value for DA13 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA14_Pos          _UINT32_(14)                                         /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA14_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA14_Pos)      /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA14(value)       (SPW_LINK1_DISTACKIM_DA14_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA14_Pos)) /* Assigment of value for DA14 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA15_Pos          _UINT32_(15)                                         /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA15_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA15_Pos)      /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA15(value)       (SPW_LINK1_DISTACKIM_DA15_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA15_Pos)) /* Assigment of value for DA15 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA16_Pos          _UINT32_(16)                                         /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA16_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA16_Pos)      /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA16(value)       (SPW_LINK1_DISTACKIM_DA16_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA16_Pos)) /* Assigment of value for DA16 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA17_Pos          _UINT32_(17)                                         /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA17_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA17_Pos)      /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA17(value)       (SPW_LINK1_DISTACKIM_DA17_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA17_Pos)) /* Assigment of value for DA17 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA18_Pos          _UINT32_(18)                                         /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA18_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA18_Pos)      /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA18(value)       (SPW_LINK1_DISTACKIM_DA18_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA18_Pos)) /* Assigment of value for DA18 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA19_Pos          _UINT32_(19)                                         /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA19_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA19_Pos)      /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA19(value)       (SPW_LINK1_DISTACKIM_DA19_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA19_Pos)) /* Assigment of value for DA19 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA20_Pos          _UINT32_(20)                                         /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA20_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA20_Pos)      /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA20(value)       (SPW_LINK1_DISTACKIM_DA20_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA20_Pos)) /* Assigment of value for DA20 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA21_Pos          _UINT32_(21)                                         /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA21_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA21_Pos)      /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA21(value)       (SPW_LINK1_DISTACKIM_DA21_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA21_Pos)) /* Assigment of value for DA21 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA22_Pos          _UINT32_(22)                                         /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA22_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA22_Pos)      /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA22(value)       (SPW_LINK1_DISTACKIM_DA22_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA22_Pos)) /* Assigment of value for DA22 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA23_Pos          _UINT32_(23)                                         /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA23_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA23_Pos)      /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA23(value)       (SPW_LINK1_DISTACKIM_DA23_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA23_Pos)) /* Assigment of value for DA23 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA24_Pos          _UINT32_(24)                                         /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA24_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA24_Pos)      /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA24(value)       (SPW_LINK1_DISTACKIM_DA24_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA24_Pos)) /* Assigment of value for DA24 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA25_Pos          _UINT32_(25)                                         /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA25_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA25_Pos)      /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA25(value)       (SPW_LINK1_DISTACKIM_DA25_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA25_Pos)) /* Assigment of value for DA25 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA26_Pos          _UINT32_(26)                                         /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA26_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA26_Pos)      /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA26(value)       (SPW_LINK1_DISTACKIM_DA26_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA26_Pos)) /* Assigment of value for DA26 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA27_Pos          _UINT32_(27)                                         /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA27_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA27_Pos)      /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA27(value)       (SPW_LINK1_DISTACKIM_DA27_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA27_Pos)) /* Assigment of value for DA27 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA28_Pos          _UINT32_(28)                                         /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA28_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA28_Pos)      /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA28(value)       (SPW_LINK1_DISTACKIM_DA28_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA28_Pos)) /* Assigment of value for DA28 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA29_Pos          _UINT32_(29)                                         /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA29_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA29_Pos)      /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA29(value)       (SPW_LINK1_DISTACKIM_DA29_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA29_Pos)) /* Assigment of value for DA29 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA30_Pos          _UINT32_(30)                                         /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA30_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA30_Pos)      /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA30(value)       (SPW_LINK1_DISTACKIM_DA30_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA30_Pos)) /* Assigment of value for DA30 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_DA31_Pos          _UINT32_(31)                                         /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_DA31_Msk          (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_DA31_Pos)      /* (SPW_LINK1_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_DA31(value)       (SPW_LINK1_DISTACKIM_DA31_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA31_Pos)) /* Assigment of value for DA31 in the SPW_LINK1_DISTACKIM register */
#define SPW_LINK1_DISTACKIM_Msk               _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK1_DISTACKIM) Register Mask  */

#define SPW_LINK1_DISTACKIM_DA_Pos            _UINT32_(0)                                          /* (SPW_LINK1_DISTACKIM Position) Distributed Acknowledge mask */
#define SPW_LINK1_DISTACKIM_DA_Msk            (_UINT32_(0xFFFFFFFF) << SPW_LINK1_DISTACKIM_DA_Pos) /* (SPW_LINK1_DISTACKIM Mask) DA */
#define SPW_LINK1_DISTACKIM_DA(value)         (SPW_LINK1_DISTACKIM_DA_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_DA_Pos)) 

/* -------- SPW_LINK1_DISTACKPI_C : (SPW Offset: 0x474) ( /W 32) SpW Link 1 Distributed Interrupt Acknowledge Clear Pending Interrupt -------- */
#define SPW_LINK1_DISTACKPI_C_DA0_Pos         _UINT32_(0)                                          /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA0_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA0_Pos)     /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA0(value)      (SPW_LINK1_DISTACKPI_C_DA0_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA0_Pos)) /* Assigment of value for DA0 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA1_Pos         _UINT32_(1)                                          /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA1_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA1_Pos)     /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA1(value)      (SPW_LINK1_DISTACKPI_C_DA1_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA1_Pos)) /* Assigment of value for DA1 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA2_Pos         _UINT32_(2)                                          /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA2_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA2_Pos)     /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA2(value)      (SPW_LINK1_DISTACKPI_C_DA2_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA2_Pos)) /* Assigment of value for DA2 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA3_Pos         _UINT32_(3)                                          /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA3_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA3_Pos)     /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA3(value)      (SPW_LINK1_DISTACKPI_C_DA3_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA3_Pos)) /* Assigment of value for DA3 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA4_Pos         _UINT32_(4)                                          /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA4_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA4_Pos)     /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA4(value)      (SPW_LINK1_DISTACKPI_C_DA4_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA4_Pos)) /* Assigment of value for DA4 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA5_Pos         _UINT32_(5)                                          /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA5_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA5_Pos)     /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA5(value)      (SPW_LINK1_DISTACKPI_C_DA5_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA5_Pos)) /* Assigment of value for DA5 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA6_Pos         _UINT32_(6)                                          /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA6_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA6_Pos)     /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA6(value)      (SPW_LINK1_DISTACKPI_C_DA6_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA6_Pos)) /* Assigment of value for DA6 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA7_Pos         _UINT32_(7)                                          /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA7_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA7_Pos)     /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA7(value)      (SPW_LINK1_DISTACKPI_C_DA7_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA7_Pos)) /* Assigment of value for DA7 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA8_Pos         _UINT32_(8)                                          /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA8_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA8_Pos)     /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA8(value)      (SPW_LINK1_DISTACKPI_C_DA8_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA8_Pos)) /* Assigment of value for DA8 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA9_Pos         _UINT32_(9)                                          /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA9_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA9_Pos)     /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA9(value)      (SPW_LINK1_DISTACKPI_C_DA9_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA9_Pos)) /* Assigment of value for DA9 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA10_Pos        _UINT32_(10)                                         /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA10_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA10_Pos)    /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA10(value)     (SPW_LINK1_DISTACKPI_C_DA10_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA10_Pos)) /* Assigment of value for DA10 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA11_Pos        _UINT32_(11)                                         /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA11_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA11_Pos)    /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA11(value)     (SPW_LINK1_DISTACKPI_C_DA11_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA11_Pos)) /* Assigment of value for DA11 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA12_Pos        _UINT32_(12)                                         /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA12_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA12_Pos)    /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA12(value)     (SPW_LINK1_DISTACKPI_C_DA12_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA12_Pos)) /* Assigment of value for DA12 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA13_Pos        _UINT32_(13)                                         /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA13_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA13_Pos)    /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA13(value)     (SPW_LINK1_DISTACKPI_C_DA13_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA13_Pos)) /* Assigment of value for DA13 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA14_Pos        _UINT32_(14)                                         /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA14_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA14_Pos)    /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA14(value)     (SPW_LINK1_DISTACKPI_C_DA14_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA14_Pos)) /* Assigment of value for DA14 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA15_Pos        _UINT32_(15)                                         /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA15_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA15_Pos)    /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA15(value)     (SPW_LINK1_DISTACKPI_C_DA15_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA15_Pos)) /* Assigment of value for DA15 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA16_Pos        _UINT32_(16)                                         /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA16_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA16_Pos)    /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA16(value)     (SPW_LINK1_DISTACKPI_C_DA16_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA16_Pos)) /* Assigment of value for DA16 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA17_Pos        _UINT32_(17)                                         /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA17_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA17_Pos)    /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA17(value)     (SPW_LINK1_DISTACKPI_C_DA17_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA17_Pos)) /* Assigment of value for DA17 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA18_Pos        _UINT32_(18)                                         /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA18_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA18_Pos)    /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA18(value)     (SPW_LINK1_DISTACKPI_C_DA18_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA18_Pos)) /* Assigment of value for DA18 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA19_Pos        _UINT32_(19)                                         /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA19_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA19_Pos)    /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA19(value)     (SPW_LINK1_DISTACKPI_C_DA19_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA19_Pos)) /* Assigment of value for DA19 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA20_Pos        _UINT32_(20)                                         /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA20_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA20_Pos)    /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA20(value)     (SPW_LINK1_DISTACKPI_C_DA20_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA20_Pos)) /* Assigment of value for DA20 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA21_Pos        _UINT32_(21)                                         /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA21_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA21_Pos)    /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA21(value)     (SPW_LINK1_DISTACKPI_C_DA21_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA21_Pos)) /* Assigment of value for DA21 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA22_Pos        _UINT32_(22)                                         /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA22_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA22_Pos)    /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA22(value)     (SPW_LINK1_DISTACKPI_C_DA22_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA22_Pos)) /* Assigment of value for DA22 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA23_Pos        _UINT32_(23)                                         /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA23_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA23_Pos)    /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA23(value)     (SPW_LINK1_DISTACKPI_C_DA23_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA23_Pos)) /* Assigment of value for DA23 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA24_Pos        _UINT32_(24)                                         /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA24_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA24_Pos)    /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA24(value)     (SPW_LINK1_DISTACKPI_C_DA24_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA24_Pos)) /* Assigment of value for DA24 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA25_Pos        _UINT32_(25)                                         /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA25_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA25_Pos)    /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA25(value)     (SPW_LINK1_DISTACKPI_C_DA25_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA25_Pos)) /* Assigment of value for DA25 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA26_Pos        _UINT32_(26)                                         /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA26_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA26_Pos)    /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA26(value)     (SPW_LINK1_DISTACKPI_C_DA26_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA26_Pos)) /* Assigment of value for DA26 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA27_Pos        _UINT32_(27)                                         /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA27_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA27_Pos)    /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA27(value)     (SPW_LINK1_DISTACKPI_C_DA27_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA27_Pos)) /* Assigment of value for DA27 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA28_Pos        _UINT32_(28)                                         /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA28_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA28_Pos)    /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA28(value)     (SPW_LINK1_DISTACKPI_C_DA28_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA28_Pos)) /* Assigment of value for DA28 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA29_Pos        _UINT32_(29)                                         /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA29_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA29_Pos)    /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA29(value)     (SPW_LINK1_DISTACKPI_C_DA29_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA29_Pos)) /* Assigment of value for DA29 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA30_Pos        _UINT32_(30)                                         /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA30_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA30_Pos)    /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA30(value)     (SPW_LINK1_DISTACKPI_C_DA30_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA30_Pos)) /* Assigment of value for DA30 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_DA31_Pos        _UINT32_(31)                                         /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK1_DISTACKPI_C_DA31_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKPI_C_DA31_Pos)    /* (SPW_LINK1_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK1_DISTACKPI_C_DA31(value)     (SPW_LINK1_DISTACKPI_C_DA31_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA31_Pos)) /* Assigment of value for DA31 in the SPW_LINK1_DISTACKPI_C register */
#define SPW_LINK1_DISTACKPI_C_Msk             _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK1_DISTACKPI_C) Register Mask  */

#define SPW_LINK1_DISTACKPI_C_DA_Pos          _UINT32_(0)                                          /* (SPW_LINK1_DISTACKPI_C Position) Distributed Acknowledge */
#define SPW_LINK1_DISTACKPI_C_DA_Msk          (_UINT32_(0xFFFFFFFF) << SPW_LINK1_DISTACKPI_C_DA_Pos) /* (SPW_LINK1_DISTACKPI_C Mask) DA */
#define SPW_LINK1_DISTACKPI_C_DA(value)       (SPW_LINK1_DISTACKPI_C_DA_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKPI_C_DA_Pos)) 

/* -------- SPW_LINK1_DISTACKIM_S : (SPW Offset: 0x478) ( /W 32) SpW Link 1 Distributed Interrupt Acknowledge Set Mask -------- */
#define SPW_LINK1_DISTACKIM_S_DA0_Pos         _UINT32_(0)                                          /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA0_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA0_Pos)     /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA0(value)      (SPW_LINK1_DISTACKIM_S_DA0_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA0_Pos)) /* Assigment of value for DA0 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA1_Pos         _UINT32_(1)                                          /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA1_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA1_Pos)     /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA1(value)      (SPW_LINK1_DISTACKIM_S_DA1_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA1_Pos)) /* Assigment of value for DA1 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA2_Pos         _UINT32_(2)                                          /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA2_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA2_Pos)     /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA2(value)      (SPW_LINK1_DISTACKIM_S_DA2_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA2_Pos)) /* Assigment of value for DA2 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA3_Pos         _UINT32_(3)                                          /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA3_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA3_Pos)     /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA3(value)      (SPW_LINK1_DISTACKIM_S_DA3_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA3_Pos)) /* Assigment of value for DA3 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA4_Pos         _UINT32_(4)                                          /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA4_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA4_Pos)     /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA4(value)      (SPW_LINK1_DISTACKIM_S_DA4_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA4_Pos)) /* Assigment of value for DA4 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA5_Pos         _UINT32_(5)                                          /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA5_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA5_Pos)     /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA5(value)      (SPW_LINK1_DISTACKIM_S_DA5_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA5_Pos)) /* Assigment of value for DA5 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA6_Pos         _UINT32_(6)                                          /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA6_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA6_Pos)     /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA6(value)      (SPW_LINK1_DISTACKIM_S_DA6_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA6_Pos)) /* Assigment of value for DA6 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA7_Pos         _UINT32_(7)                                          /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA7_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA7_Pos)     /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA7(value)      (SPW_LINK1_DISTACKIM_S_DA7_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA7_Pos)) /* Assigment of value for DA7 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA8_Pos         _UINT32_(8)                                          /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA8_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA8_Pos)     /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA8(value)      (SPW_LINK1_DISTACKIM_S_DA8_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA8_Pos)) /* Assigment of value for DA8 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA9_Pos         _UINT32_(9)                                          /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA9_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA9_Pos)     /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA9(value)      (SPW_LINK1_DISTACKIM_S_DA9_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA9_Pos)) /* Assigment of value for DA9 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA10_Pos        _UINT32_(10)                                         /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA10_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA10_Pos)    /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA10(value)     (SPW_LINK1_DISTACKIM_S_DA10_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA10_Pos)) /* Assigment of value for DA10 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA11_Pos        _UINT32_(11)                                         /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA11_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA11_Pos)    /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA11(value)     (SPW_LINK1_DISTACKIM_S_DA11_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA11_Pos)) /* Assigment of value for DA11 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA12_Pos        _UINT32_(12)                                         /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA12_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA12_Pos)    /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA12(value)     (SPW_LINK1_DISTACKIM_S_DA12_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA12_Pos)) /* Assigment of value for DA12 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA13_Pos        _UINT32_(13)                                         /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA13_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA13_Pos)    /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA13(value)     (SPW_LINK1_DISTACKIM_S_DA13_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA13_Pos)) /* Assigment of value for DA13 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA14_Pos        _UINT32_(14)                                         /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA14_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA14_Pos)    /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA14(value)     (SPW_LINK1_DISTACKIM_S_DA14_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA14_Pos)) /* Assigment of value for DA14 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA15_Pos        _UINT32_(15)                                         /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA15_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA15_Pos)    /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA15(value)     (SPW_LINK1_DISTACKIM_S_DA15_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA15_Pos)) /* Assigment of value for DA15 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA16_Pos        _UINT32_(16)                                         /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA16_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA16_Pos)    /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA16(value)     (SPW_LINK1_DISTACKIM_S_DA16_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA16_Pos)) /* Assigment of value for DA16 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA17_Pos        _UINT32_(17)                                         /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA17_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA17_Pos)    /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA17(value)     (SPW_LINK1_DISTACKIM_S_DA17_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA17_Pos)) /* Assigment of value for DA17 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA18_Pos        _UINT32_(18)                                         /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA18_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA18_Pos)    /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA18(value)     (SPW_LINK1_DISTACKIM_S_DA18_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA18_Pos)) /* Assigment of value for DA18 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA19_Pos        _UINT32_(19)                                         /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA19_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA19_Pos)    /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA19(value)     (SPW_LINK1_DISTACKIM_S_DA19_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA19_Pos)) /* Assigment of value for DA19 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA20_Pos        _UINT32_(20)                                         /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA20_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA20_Pos)    /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA20(value)     (SPW_LINK1_DISTACKIM_S_DA20_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA20_Pos)) /* Assigment of value for DA20 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA21_Pos        _UINT32_(21)                                         /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA21_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA21_Pos)    /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA21(value)     (SPW_LINK1_DISTACKIM_S_DA21_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA21_Pos)) /* Assigment of value for DA21 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA22_Pos        _UINT32_(22)                                         /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA22_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA22_Pos)    /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA22(value)     (SPW_LINK1_DISTACKIM_S_DA22_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA22_Pos)) /* Assigment of value for DA22 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA23_Pos        _UINT32_(23)                                         /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA23_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA23_Pos)    /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA23(value)     (SPW_LINK1_DISTACKIM_S_DA23_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA23_Pos)) /* Assigment of value for DA23 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA24_Pos        _UINT32_(24)                                         /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA24_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA24_Pos)    /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA24(value)     (SPW_LINK1_DISTACKIM_S_DA24_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA24_Pos)) /* Assigment of value for DA24 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA25_Pos        _UINT32_(25)                                         /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA25_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA25_Pos)    /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA25(value)     (SPW_LINK1_DISTACKIM_S_DA25_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA25_Pos)) /* Assigment of value for DA25 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA26_Pos        _UINT32_(26)                                         /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA26_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA26_Pos)    /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA26(value)     (SPW_LINK1_DISTACKIM_S_DA26_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA26_Pos)) /* Assigment of value for DA26 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA27_Pos        _UINT32_(27)                                         /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA27_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA27_Pos)    /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA27(value)     (SPW_LINK1_DISTACKIM_S_DA27_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA27_Pos)) /* Assigment of value for DA27 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA28_Pos        _UINT32_(28)                                         /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA28_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA28_Pos)    /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA28(value)     (SPW_LINK1_DISTACKIM_S_DA28_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA28_Pos)) /* Assigment of value for DA28 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA29_Pos        _UINT32_(29)                                         /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA29_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA29_Pos)    /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA29(value)     (SPW_LINK1_DISTACKIM_S_DA29_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA29_Pos)) /* Assigment of value for DA29 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA30_Pos        _UINT32_(30)                                         /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA30_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA30_Pos)    /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA30(value)     (SPW_LINK1_DISTACKIM_S_DA30_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA30_Pos)) /* Assigment of value for DA30 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_DA31_Pos        _UINT32_(31)                                         /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_S_DA31_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_S_DA31_Pos)    /* (SPW_LINK1_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_S_DA31(value)     (SPW_LINK1_DISTACKIM_S_DA31_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA31_Pos)) /* Assigment of value for DA31 in the SPW_LINK1_DISTACKIM_S register */
#define SPW_LINK1_DISTACKIM_S_Msk             _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK1_DISTACKIM_S) Register Mask  */

#define SPW_LINK1_DISTACKIM_S_DA_Pos          _UINT32_(0)                                          /* (SPW_LINK1_DISTACKIM_S Position) Distributed Acknowledge mask */
#define SPW_LINK1_DISTACKIM_S_DA_Msk          (_UINT32_(0xFFFFFFFF) << SPW_LINK1_DISTACKIM_S_DA_Pos) /* (SPW_LINK1_DISTACKIM_S Mask) DA */
#define SPW_LINK1_DISTACKIM_S_DA(value)       (SPW_LINK1_DISTACKIM_S_DA_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_S_DA_Pos)) 

/* -------- SPW_LINK1_DISTACKIM_C : (SPW Offset: 0x47C) ( /W 32) SpW Link 1 Distributed Interrupt Acknowledge Clear Mask -------- */
#define SPW_LINK1_DISTACKIM_C_DA0_Pos         _UINT32_(0)                                          /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA0_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA0_Pos)     /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA0(value)      (SPW_LINK1_DISTACKIM_C_DA0_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA0_Pos)) /* Assigment of value for DA0 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA1_Pos         _UINT32_(1)                                          /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA1_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA1_Pos)     /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA1(value)      (SPW_LINK1_DISTACKIM_C_DA1_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA1_Pos)) /* Assigment of value for DA1 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA2_Pos         _UINT32_(2)                                          /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA2_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA2_Pos)     /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA2(value)      (SPW_LINK1_DISTACKIM_C_DA2_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA2_Pos)) /* Assigment of value for DA2 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA3_Pos         _UINT32_(3)                                          /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA3_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA3_Pos)     /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA3(value)      (SPW_LINK1_DISTACKIM_C_DA3_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA3_Pos)) /* Assigment of value for DA3 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA4_Pos         _UINT32_(4)                                          /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA4_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA4_Pos)     /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA4(value)      (SPW_LINK1_DISTACKIM_C_DA4_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA4_Pos)) /* Assigment of value for DA4 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA5_Pos         _UINT32_(5)                                          /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA5_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA5_Pos)     /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA5(value)      (SPW_LINK1_DISTACKIM_C_DA5_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA5_Pos)) /* Assigment of value for DA5 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA6_Pos         _UINT32_(6)                                          /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA6_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA6_Pos)     /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA6(value)      (SPW_LINK1_DISTACKIM_C_DA6_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA6_Pos)) /* Assigment of value for DA6 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA7_Pos         _UINT32_(7)                                          /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA7_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA7_Pos)     /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA7(value)      (SPW_LINK1_DISTACKIM_C_DA7_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA7_Pos)) /* Assigment of value for DA7 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA8_Pos         _UINT32_(8)                                          /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA8_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA8_Pos)     /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA8(value)      (SPW_LINK1_DISTACKIM_C_DA8_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA8_Pos)) /* Assigment of value for DA8 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA9_Pos         _UINT32_(9)                                          /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA9_Msk         (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA9_Pos)     /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA9(value)      (SPW_LINK1_DISTACKIM_C_DA9_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA9_Pos)) /* Assigment of value for DA9 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA10_Pos        _UINT32_(10)                                         /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA10_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA10_Pos)    /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA10(value)     (SPW_LINK1_DISTACKIM_C_DA10_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA10_Pos)) /* Assigment of value for DA10 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA11_Pos        _UINT32_(11)                                         /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA11_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA11_Pos)    /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA11(value)     (SPW_LINK1_DISTACKIM_C_DA11_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA11_Pos)) /* Assigment of value for DA11 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA12_Pos        _UINT32_(12)                                         /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA12_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA12_Pos)    /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA12(value)     (SPW_LINK1_DISTACKIM_C_DA12_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA12_Pos)) /* Assigment of value for DA12 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA13_Pos        _UINT32_(13)                                         /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA13_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA13_Pos)    /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA13(value)     (SPW_LINK1_DISTACKIM_C_DA13_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA13_Pos)) /* Assigment of value for DA13 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA14_Pos        _UINT32_(14)                                         /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA14_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA14_Pos)    /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA14(value)     (SPW_LINK1_DISTACKIM_C_DA14_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA14_Pos)) /* Assigment of value for DA14 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA15_Pos        _UINT32_(15)                                         /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA15_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA15_Pos)    /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA15(value)     (SPW_LINK1_DISTACKIM_C_DA15_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA15_Pos)) /* Assigment of value for DA15 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA16_Pos        _UINT32_(16)                                         /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA16_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA16_Pos)    /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA16(value)     (SPW_LINK1_DISTACKIM_C_DA16_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA16_Pos)) /* Assigment of value for DA16 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA17_Pos        _UINT32_(17)                                         /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA17_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA17_Pos)    /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA17(value)     (SPW_LINK1_DISTACKIM_C_DA17_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA17_Pos)) /* Assigment of value for DA17 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA18_Pos        _UINT32_(18)                                         /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA18_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA18_Pos)    /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA18(value)     (SPW_LINK1_DISTACKIM_C_DA18_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA18_Pos)) /* Assigment of value for DA18 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA19_Pos        _UINT32_(19)                                         /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA19_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA19_Pos)    /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA19(value)     (SPW_LINK1_DISTACKIM_C_DA19_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA19_Pos)) /* Assigment of value for DA19 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA20_Pos        _UINT32_(20)                                         /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA20_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA20_Pos)    /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA20(value)     (SPW_LINK1_DISTACKIM_C_DA20_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA20_Pos)) /* Assigment of value for DA20 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA21_Pos        _UINT32_(21)                                         /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA21_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA21_Pos)    /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA21(value)     (SPW_LINK1_DISTACKIM_C_DA21_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA21_Pos)) /* Assigment of value for DA21 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA22_Pos        _UINT32_(22)                                         /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA22_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA22_Pos)    /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA22(value)     (SPW_LINK1_DISTACKIM_C_DA22_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA22_Pos)) /* Assigment of value for DA22 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA23_Pos        _UINT32_(23)                                         /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA23_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA23_Pos)    /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA23(value)     (SPW_LINK1_DISTACKIM_C_DA23_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA23_Pos)) /* Assigment of value for DA23 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA24_Pos        _UINT32_(24)                                         /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA24_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA24_Pos)    /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA24(value)     (SPW_LINK1_DISTACKIM_C_DA24_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA24_Pos)) /* Assigment of value for DA24 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA25_Pos        _UINT32_(25)                                         /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA25_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA25_Pos)    /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA25(value)     (SPW_LINK1_DISTACKIM_C_DA25_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA25_Pos)) /* Assigment of value for DA25 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA26_Pos        _UINT32_(26)                                         /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA26_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA26_Pos)    /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA26(value)     (SPW_LINK1_DISTACKIM_C_DA26_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA26_Pos)) /* Assigment of value for DA26 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA27_Pos        _UINT32_(27)                                         /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA27_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA27_Pos)    /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA27(value)     (SPW_LINK1_DISTACKIM_C_DA27_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA27_Pos)) /* Assigment of value for DA27 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA28_Pos        _UINT32_(28)                                         /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA28_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA28_Pos)    /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA28(value)     (SPW_LINK1_DISTACKIM_C_DA28_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA28_Pos)) /* Assigment of value for DA28 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA29_Pos        _UINT32_(29)                                         /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA29_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA29_Pos)    /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA29(value)     (SPW_LINK1_DISTACKIM_C_DA29_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA29_Pos)) /* Assigment of value for DA29 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA30_Pos        _UINT32_(30)                                         /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA30_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA30_Pos)    /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA30(value)     (SPW_LINK1_DISTACKIM_C_DA30_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA30_Pos)) /* Assigment of value for DA30 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_DA31_Pos        _UINT32_(31)                                         /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK1_DISTACKIM_C_DA31_Msk        (_UINT32_(0x1) << SPW_LINK1_DISTACKIM_C_DA31_Pos)    /* (SPW_LINK1_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK1_DISTACKIM_C_DA31(value)     (SPW_LINK1_DISTACKIM_C_DA31_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA31_Pos)) /* Assigment of value for DA31 in the SPW_LINK1_DISTACKIM_C register */
#define SPW_LINK1_DISTACKIM_C_Msk             _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK1_DISTACKIM_C) Register Mask  */

#define SPW_LINK1_DISTACKIM_C_DA_Pos          _UINT32_(0)                                          /* (SPW_LINK1_DISTACKIM_C Position) Distributed Acknowledge mask */
#define SPW_LINK1_DISTACKIM_C_DA_Msk          (_UINT32_(0xFFFFFFFF) << SPW_LINK1_DISTACKIM_C_DA_Pos) /* (SPW_LINK1_DISTACKIM_C Mask) DA */
#define SPW_LINK1_DISTACKIM_C_DA(value)       (SPW_LINK1_DISTACKIM_C_DA_Msk & (_UINT32_(value) << SPW_LINK1_DISTACKIM_C_DA_Pos)) 

/* -------- SPW_LINK2_PI_RM : (SPW Offset: 0x480) ( R/ 32) SpW Link 2 Pending Read Masked Interrupt -------- */
#define SPW_LINK2_PI_RM_DISERR_Pos            _UINT32_(0)                                          /* (SPW_LINK2_PI_RM) DisErr Position */
#define SPW_LINK2_PI_RM_DISERR_Msk            (_UINT32_(0x1) << SPW_LINK2_PI_RM_DISERR_Pos)        /* (SPW_LINK2_PI_RM) DisErr Mask */
#define SPW_LINK2_PI_RM_DISERR(value)         (SPW_LINK2_PI_RM_DISERR_Msk & (_UINT32_(value) << SPW_LINK2_PI_RM_DISERR_Pos)) /* Assigment of value for DISERR in the SPW_LINK2_PI_RM register */
#define SPW_LINK2_PI_RM_PARERR_Pos            _UINT32_(1)                                          /* (SPW_LINK2_PI_RM) ParErr Position */
#define SPW_LINK2_PI_RM_PARERR_Msk            (_UINT32_(0x1) << SPW_LINK2_PI_RM_PARERR_Pos)        /* (SPW_LINK2_PI_RM) ParErr Mask */
#define SPW_LINK2_PI_RM_PARERR(value)         (SPW_LINK2_PI_RM_PARERR_Msk & (_UINT32_(value) << SPW_LINK2_PI_RM_PARERR_Pos)) /* Assigment of value for PARERR in the SPW_LINK2_PI_RM register */
#define SPW_LINK2_PI_RM_ESCERR_Pos            _UINT32_(2)                                          /* (SPW_LINK2_PI_RM) ESCErr Position */
#define SPW_LINK2_PI_RM_ESCERR_Msk            (_UINT32_(0x1) << SPW_LINK2_PI_RM_ESCERR_Pos)        /* (SPW_LINK2_PI_RM) ESCErr Mask */
#define SPW_LINK2_PI_RM_ESCERR(value)         (SPW_LINK2_PI_RM_ESCERR_Msk & (_UINT32_(value) << SPW_LINK2_PI_RM_ESCERR_Pos)) /* Assigment of value for ESCERR in the SPW_LINK2_PI_RM register */
#define SPW_LINK2_PI_RM_CRERR_Pos             _UINT32_(3)                                          /* (SPW_LINK2_PI_RM) CrErr Position */
#define SPW_LINK2_PI_RM_CRERR_Msk             (_UINT32_(0x1) << SPW_LINK2_PI_RM_CRERR_Pos)         /* (SPW_LINK2_PI_RM) CrErr Mask */
#define SPW_LINK2_PI_RM_CRERR(value)          (SPW_LINK2_PI_RM_CRERR_Msk & (_UINT32_(value) << SPW_LINK2_PI_RM_CRERR_Pos)) /* Assigment of value for CRERR in the SPW_LINK2_PI_RM register */
#define SPW_LINK2_PI_RM_LINKABORT_Pos         _UINT32_(4)                                          /* (SPW_LINK2_PI_RM) LinkAbort Position */
#define SPW_LINK2_PI_RM_LINKABORT_Msk         (_UINT32_(0x1) << SPW_LINK2_PI_RM_LINKABORT_Pos)     /* (SPW_LINK2_PI_RM) LinkAbort Mask */
#define SPW_LINK2_PI_RM_LINKABORT(value)      (SPW_LINK2_PI_RM_LINKABORT_Msk & (_UINT32_(value) << SPW_LINK2_PI_RM_LINKABORT_Pos)) /* Assigment of value for LINKABORT in the SPW_LINK2_PI_RM register */
#define SPW_LINK2_PI_RM_EEPTRANS_Pos          _UINT32_(5)                                          /* (SPW_LINK2_PI_RM) EEP transmitted Position */
#define SPW_LINK2_PI_RM_EEPTRANS_Msk          (_UINT32_(0x1) << SPW_LINK2_PI_RM_EEPTRANS_Pos)      /* (SPW_LINK2_PI_RM) EEP transmitted Mask */
#define SPW_LINK2_PI_RM_EEPTRANS(value)       (SPW_LINK2_PI_RM_EEPTRANS_Msk & (_UINT32_(value) << SPW_LINK2_PI_RM_EEPTRANS_Pos)) /* Assigment of value for EEPTRANS in the SPW_LINK2_PI_RM register */
#define SPW_LINK2_PI_RM_EEPREC_Pos            _UINT32_(6)                                          /* (SPW_LINK2_PI_RM) EEP received Position */
#define SPW_LINK2_PI_RM_EEPREC_Msk            (_UINT32_(0x1) << SPW_LINK2_PI_RM_EEPREC_Pos)        /* (SPW_LINK2_PI_RM) EEP received Mask */
#define SPW_LINK2_PI_RM_EEPREC(value)         (SPW_LINK2_PI_RM_EEPREC_Msk & (_UINT32_(value) << SPW_LINK2_PI_RM_EEPREC_Pos)) /* Assigment of value for EEPREC in the SPW_LINK2_PI_RM register */
#define SPW_LINK2_PI_RM_DISCARD_Pos           _UINT32_(7)                                          /* (SPW_LINK2_PI_RM) Discard Position */
#define SPW_LINK2_PI_RM_DISCARD_Msk           (_UINT32_(0x1) << SPW_LINK2_PI_RM_DISCARD_Pos)       /* (SPW_LINK2_PI_RM) Discard Mask */
#define SPW_LINK2_PI_RM_DISCARD(value)        (SPW_LINK2_PI_RM_DISCARD_Msk & (_UINT32_(value) << SPW_LINK2_PI_RM_DISCARD_Pos)) /* Assigment of value for DISCARD in the SPW_LINK2_PI_RM register */
#define SPW_LINK2_PI_RM_ESCEVENT2_Pos         _UINT32_(8)                                          /* (SPW_LINK2_PI_RM) Escape Event 2 Position */
#define SPW_LINK2_PI_RM_ESCEVENT2_Msk         (_UINT32_(0x1) << SPW_LINK2_PI_RM_ESCEVENT2_Pos)     /* (SPW_LINK2_PI_RM) Escape Event 2 Mask */
#define SPW_LINK2_PI_RM_ESCEVENT2(value)      (SPW_LINK2_PI_RM_ESCEVENT2_Msk & (_UINT32_(value) << SPW_LINK2_PI_RM_ESCEVENT2_Pos)) /* Assigment of value for ESCEVENT2 in the SPW_LINK2_PI_RM register */
#define SPW_LINK2_PI_RM_ESCEVENT1_Pos         _UINT32_(9)                                          /* (SPW_LINK2_PI_RM) Escape Event 1 Position */
#define SPW_LINK2_PI_RM_ESCEVENT1_Msk         (_UINT32_(0x1) << SPW_LINK2_PI_RM_ESCEVENT1_Pos)     /* (SPW_LINK2_PI_RM) Escape Event 1 Mask */
#define SPW_LINK2_PI_RM_ESCEVENT1(value)      (SPW_LINK2_PI_RM_ESCEVENT1_Msk & (_UINT32_(value) << SPW_LINK2_PI_RM_ESCEVENT1_Pos)) /* Assigment of value for ESCEVENT1 in the SPW_LINK2_PI_RM register */
#define SPW_LINK2_PI_RM_Msk                   _UINT32_(0x000003FF)                                 /* (SPW_LINK2_PI_RM) Register Mask  */

#define SPW_LINK2_PI_RM_ESCEVENT_Pos          _UINT32_(8)                                          /* (SPW_LINK2_PI_RM Position) Escape Event x */
#define SPW_LINK2_PI_RM_ESCEVENT_Msk          (_UINT32_(0x3) << SPW_LINK2_PI_RM_ESCEVENT_Pos)      /* (SPW_LINK2_PI_RM Mask) ESCEVENT */
#define SPW_LINK2_PI_RM_ESCEVENT(value)       (SPW_LINK2_PI_RM_ESCEVENT_Msk & (_UINT32_(value) << SPW_LINK2_PI_RM_ESCEVENT_Pos)) 

/* -------- SPW_LINK2_PI_RCM : (SPW Offset: 0x484) ( R/ 32) SpW Link 2 Pending Read and Clear Masked Interrupt -------- */
#define SPW_LINK2_PI_RCM_DISERR_Pos           _UINT32_(0)                                          /* (SPW_LINK2_PI_RCM) DisErr Position */
#define SPW_LINK2_PI_RCM_DISERR_Msk           (_UINT32_(0x1) << SPW_LINK2_PI_RCM_DISERR_Pos)       /* (SPW_LINK2_PI_RCM) DisErr Mask */
#define SPW_LINK2_PI_RCM_DISERR(value)        (SPW_LINK2_PI_RCM_DISERR_Msk & (_UINT32_(value) << SPW_LINK2_PI_RCM_DISERR_Pos)) /* Assigment of value for DISERR in the SPW_LINK2_PI_RCM register */
#define SPW_LINK2_PI_RCM_PARERR_Pos           _UINT32_(1)                                          /* (SPW_LINK2_PI_RCM) ParErr Position */
#define SPW_LINK2_PI_RCM_PARERR_Msk           (_UINT32_(0x1) << SPW_LINK2_PI_RCM_PARERR_Pos)       /* (SPW_LINK2_PI_RCM) ParErr Mask */
#define SPW_LINK2_PI_RCM_PARERR(value)        (SPW_LINK2_PI_RCM_PARERR_Msk & (_UINT32_(value) << SPW_LINK2_PI_RCM_PARERR_Pos)) /* Assigment of value for PARERR in the SPW_LINK2_PI_RCM register */
#define SPW_LINK2_PI_RCM_ESCERR_Pos           _UINT32_(2)                                          /* (SPW_LINK2_PI_RCM) ESCErr Position */
#define SPW_LINK2_PI_RCM_ESCERR_Msk           (_UINT32_(0x1) << SPW_LINK2_PI_RCM_ESCERR_Pos)       /* (SPW_LINK2_PI_RCM) ESCErr Mask */
#define SPW_LINK2_PI_RCM_ESCERR(value)        (SPW_LINK2_PI_RCM_ESCERR_Msk & (_UINT32_(value) << SPW_LINK2_PI_RCM_ESCERR_Pos)) /* Assigment of value for ESCERR in the SPW_LINK2_PI_RCM register */
#define SPW_LINK2_PI_RCM_CRERR_Pos            _UINT32_(3)                                          /* (SPW_LINK2_PI_RCM) CrErr Position */
#define SPW_LINK2_PI_RCM_CRERR_Msk            (_UINT32_(0x1) << SPW_LINK2_PI_RCM_CRERR_Pos)        /* (SPW_LINK2_PI_RCM) CrErr Mask */
#define SPW_LINK2_PI_RCM_CRERR(value)         (SPW_LINK2_PI_RCM_CRERR_Msk & (_UINT32_(value) << SPW_LINK2_PI_RCM_CRERR_Pos)) /* Assigment of value for CRERR in the SPW_LINK2_PI_RCM register */
#define SPW_LINK2_PI_RCM_LINKABORT_Pos        _UINT32_(4)                                          /* (SPW_LINK2_PI_RCM) LinkAbort Position */
#define SPW_LINK2_PI_RCM_LINKABORT_Msk        (_UINT32_(0x1) << SPW_LINK2_PI_RCM_LINKABORT_Pos)    /* (SPW_LINK2_PI_RCM) LinkAbort Mask */
#define SPW_LINK2_PI_RCM_LINKABORT(value)     (SPW_LINK2_PI_RCM_LINKABORT_Msk & (_UINT32_(value) << SPW_LINK2_PI_RCM_LINKABORT_Pos)) /* Assigment of value for LINKABORT in the SPW_LINK2_PI_RCM register */
#define SPW_LINK2_PI_RCM_EEPTRANS_Pos         _UINT32_(5)                                          /* (SPW_LINK2_PI_RCM) EEP transmitted Position */
#define SPW_LINK2_PI_RCM_EEPTRANS_Msk         (_UINT32_(0x1) << SPW_LINK2_PI_RCM_EEPTRANS_Pos)     /* (SPW_LINK2_PI_RCM) EEP transmitted Mask */
#define SPW_LINK2_PI_RCM_EEPTRANS(value)      (SPW_LINK2_PI_RCM_EEPTRANS_Msk & (_UINT32_(value) << SPW_LINK2_PI_RCM_EEPTRANS_Pos)) /* Assigment of value for EEPTRANS in the SPW_LINK2_PI_RCM register */
#define SPW_LINK2_PI_RCM_EEPREC_Pos           _UINT32_(6)                                          /* (SPW_LINK2_PI_RCM) EEP received Position */
#define SPW_LINK2_PI_RCM_EEPREC_Msk           (_UINT32_(0x1) << SPW_LINK2_PI_RCM_EEPREC_Pos)       /* (SPW_LINK2_PI_RCM) EEP received Mask */
#define SPW_LINK2_PI_RCM_EEPREC(value)        (SPW_LINK2_PI_RCM_EEPREC_Msk & (_UINT32_(value) << SPW_LINK2_PI_RCM_EEPREC_Pos)) /* Assigment of value for EEPREC in the SPW_LINK2_PI_RCM register */
#define SPW_LINK2_PI_RCM_DISCARD_Pos          _UINT32_(7)                                          /* (SPW_LINK2_PI_RCM) Discard Position */
#define SPW_LINK2_PI_RCM_DISCARD_Msk          (_UINT32_(0x1) << SPW_LINK2_PI_RCM_DISCARD_Pos)      /* (SPW_LINK2_PI_RCM) Discard Mask */
#define SPW_LINK2_PI_RCM_DISCARD(value)       (SPW_LINK2_PI_RCM_DISCARD_Msk & (_UINT32_(value) << SPW_LINK2_PI_RCM_DISCARD_Pos)) /* Assigment of value for DISCARD in the SPW_LINK2_PI_RCM register */
#define SPW_LINK2_PI_RCM_ESCEVENT2_Pos        _UINT32_(8)                                          /* (SPW_LINK2_PI_RCM) Escape Event 2 Position */
#define SPW_LINK2_PI_RCM_ESCEVENT2_Msk        (_UINT32_(0x1) << SPW_LINK2_PI_RCM_ESCEVENT2_Pos)    /* (SPW_LINK2_PI_RCM) Escape Event 2 Mask */
#define SPW_LINK2_PI_RCM_ESCEVENT2(value)     (SPW_LINK2_PI_RCM_ESCEVENT2_Msk & (_UINT32_(value) << SPW_LINK2_PI_RCM_ESCEVENT2_Pos)) /* Assigment of value for ESCEVENT2 in the SPW_LINK2_PI_RCM register */
#define SPW_LINK2_PI_RCM_ESCEVENT1_Pos        _UINT32_(9)                                          /* (SPW_LINK2_PI_RCM) Escape Event 1 Position */
#define SPW_LINK2_PI_RCM_ESCEVENT1_Msk        (_UINT32_(0x1) << SPW_LINK2_PI_RCM_ESCEVENT1_Pos)    /* (SPW_LINK2_PI_RCM) Escape Event 1 Mask */
#define SPW_LINK2_PI_RCM_ESCEVENT1(value)     (SPW_LINK2_PI_RCM_ESCEVENT1_Msk & (_UINT32_(value) << SPW_LINK2_PI_RCM_ESCEVENT1_Pos)) /* Assigment of value for ESCEVENT1 in the SPW_LINK2_PI_RCM register */
#define SPW_LINK2_PI_RCM_Msk                  _UINT32_(0x000003FF)                                 /* (SPW_LINK2_PI_RCM) Register Mask  */

#define SPW_LINK2_PI_RCM_ESCEVENT_Pos         _UINT32_(8)                                          /* (SPW_LINK2_PI_RCM Position) Escape Event x */
#define SPW_LINK2_PI_RCM_ESCEVENT_Msk         (_UINT32_(0x3) << SPW_LINK2_PI_RCM_ESCEVENT_Pos)     /* (SPW_LINK2_PI_RCM Mask) ESCEVENT */
#define SPW_LINK2_PI_RCM_ESCEVENT(value)      (SPW_LINK2_PI_RCM_ESCEVENT_Msk & (_UINT32_(value) << SPW_LINK2_PI_RCM_ESCEVENT_Pos)) 

/* -------- SPW_LINK2_PI_R : (SPW Offset: 0x488) ( R/ 32) SpW Link 2 Pending Read Interrupt -------- */
#define SPW_LINK2_PI_R_DISERR_Pos             _UINT32_(0)                                          /* (SPW_LINK2_PI_R) DisErr Position */
#define SPW_LINK2_PI_R_DISERR_Msk             (_UINT32_(0x1) << SPW_LINK2_PI_R_DISERR_Pos)         /* (SPW_LINK2_PI_R) DisErr Mask */
#define SPW_LINK2_PI_R_DISERR(value)          (SPW_LINK2_PI_R_DISERR_Msk & (_UINT32_(value) << SPW_LINK2_PI_R_DISERR_Pos)) /* Assigment of value for DISERR in the SPW_LINK2_PI_R register */
#define SPW_LINK2_PI_R_PARERR_Pos             _UINT32_(1)                                          /* (SPW_LINK2_PI_R) ParErr Position */
#define SPW_LINK2_PI_R_PARERR_Msk             (_UINT32_(0x1) << SPW_LINK2_PI_R_PARERR_Pos)         /* (SPW_LINK2_PI_R) ParErr Mask */
#define SPW_LINK2_PI_R_PARERR(value)          (SPW_LINK2_PI_R_PARERR_Msk & (_UINT32_(value) << SPW_LINK2_PI_R_PARERR_Pos)) /* Assigment of value for PARERR in the SPW_LINK2_PI_R register */
#define SPW_LINK2_PI_R_ESCERR_Pos             _UINT32_(2)                                          /* (SPW_LINK2_PI_R) ESCErr Position */
#define SPW_LINK2_PI_R_ESCERR_Msk             (_UINT32_(0x1) << SPW_LINK2_PI_R_ESCERR_Pos)         /* (SPW_LINK2_PI_R) ESCErr Mask */
#define SPW_LINK2_PI_R_ESCERR(value)          (SPW_LINK2_PI_R_ESCERR_Msk & (_UINT32_(value) << SPW_LINK2_PI_R_ESCERR_Pos)) /* Assigment of value for ESCERR in the SPW_LINK2_PI_R register */
#define SPW_LINK2_PI_R_CRERR_Pos              _UINT32_(3)                                          /* (SPW_LINK2_PI_R) CrErr Position */
#define SPW_LINK2_PI_R_CRERR_Msk              (_UINT32_(0x1) << SPW_LINK2_PI_R_CRERR_Pos)          /* (SPW_LINK2_PI_R) CrErr Mask */
#define SPW_LINK2_PI_R_CRERR(value)           (SPW_LINK2_PI_R_CRERR_Msk & (_UINT32_(value) << SPW_LINK2_PI_R_CRERR_Pos)) /* Assigment of value for CRERR in the SPW_LINK2_PI_R register */
#define SPW_LINK2_PI_R_LINKABORT_Pos          _UINT32_(4)                                          /* (SPW_LINK2_PI_R) LinkAbort Position */
#define SPW_LINK2_PI_R_LINKABORT_Msk          (_UINT32_(0x1) << SPW_LINK2_PI_R_LINKABORT_Pos)      /* (SPW_LINK2_PI_R) LinkAbort Mask */
#define SPW_LINK2_PI_R_LINKABORT(value)       (SPW_LINK2_PI_R_LINKABORT_Msk & (_UINT32_(value) << SPW_LINK2_PI_R_LINKABORT_Pos)) /* Assigment of value for LINKABORT in the SPW_LINK2_PI_R register */
#define SPW_LINK2_PI_R_EEPTRANS_Pos           _UINT32_(5)                                          /* (SPW_LINK2_PI_R) EEP transmitted Position */
#define SPW_LINK2_PI_R_EEPTRANS_Msk           (_UINT32_(0x1) << SPW_LINK2_PI_R_EEPTRANS_Pos)       /* (SPW_LINK2_PI_R) EEP transmitted Mask */
#define SPW_LINK2_PI_R_EEPTRANS(value)        (SPW_LINK2_PI_R_EEPTRANS_Msk & (_UINT32_(value) << SPW_LINK2_PI_R_EEPTRANS_Pos)) /* Assigment of value for EEPTRANS in the SPW_LINK2_PI_R register */
#define SPW_LINK2_PI_R_EEPREC_Pos             _UINT32_(6)                                          /* (SPW_LINK2_PI_R) EEP received Position */
#define SPW_LINK2_PI_R_EEPREC_Msk             (_UINT32_(0x1) << SPW_LINK2_PI_R_EEPREC_Pos)         /* (SPW_LINK2_PI_R) EEP received Mask */
#define SPW_LINK2_PI_R_EEPREC(value)          (SPW_LINK2_PI_R_EEPREC_Msk & (_UINT32_(value) << SPW_LINK2_PI_R_EEPREC_Pos)) /* Assigment of value for EEPREC in the SPW_LINK2_PI_R register */
#define SPW_LINK2_PI_R_DISCARD_Pos            _UINT32_(7)                                          /* (SPW_LINK2_PI_R) Discard Position */
#define SPW_LINK2_PI_R_DISCARD_Msk            (_UINT32_(0x1) << SPW_LINK2_PI_R_DISCARD_Pos)        /* (SPW_LINK2_PI_R) Discard Mask */
#define SPW_LINK2_PI_R_DISCARD(value)         (SPW_LINK2_PI_R_DISCARD_Msk & (_UINT32_(value) << SPW_LINK2_PI_R_DISCARD_Pos)) /* Assigment of value for DISCARD in the SPW_LINK2_PI_R register */
#define SPW_LINK2_PI_R_ESCEVENT2_Pos          _UINT32_(8)                                          /* (SPW_LINK2_PI_R) Escape Event 2 Position */
#define SPW_LINK2_PI_R_ESCEVENT2_Msk          (_UINT32_(0x1) << SPW_LINK2_PI_R_ESCEVENT2_Pos)      /* (SPW_LINK2_PI_R) Escape Event 2 Mask */
#define SPW_LINK2_PI_R_ESCEVENT2(value)       (SPW_LINK2_PI_R_ESCEVENT2_Msk & (_UINT32_(value) << SPW_LINK2_PI_R_ESCEVENT2_Pos)) /* Assigment of value for ESCEVENT2 in the SPW_LINK2_PI_R register */
#define SPW_LINK2_PI_R_ESCEVENT1_Pos          _UINT32_(9)                                          /* (SPW_LINK2_PI_R) Escape Event 1 Position */
#define SPW_LINK2_PI_R_ESCEVENT1_Msk          (_UINT32_(0x1) << SPW_LINK2_PI_R_ESCEVENT1_Pos)      /* (SPW_LINK2_PI_R) Escape Event 1 Mask */
#define SPW_LINK2_PI_R_ESCEVENT1(value)       (SPW_LINK2_PI_R_ESCEVENT1_Msk & (_UINT32_(value) << SPW_LINK2_PI_R_ESCEVENT1_Pos)) /* Assigment of value for ESCEVENT1 in the SPW_LINK2_PI_R register */
#define SPW_LINK2_PI_R_Msk                    _UINT32_(0x000003FF)                                 /* (SPW_LINK2_PI_R) Register Mask  */

#define SPW_LINK2_PI_R_ESCEVENT_Pos           _UINT32_(8)                                          /* (SPW_LINK2_PI_R Position) Escape Event x */
#define SPW_LINK2_PI_R_ESCEVENT_Msk           (_UINT32_(0x3) << SPW_LINK2_PI_R_ESCEVENT_Pos)       /* (SPW_LINK2_PI_R Mask) ESCEVENT */
#define SPW_LINK2_PI_R_ESCEVENT(value)        (SPW_LINK2_PI_R_ESCEVENT_Msk & (_UINT32_(value) << SPW_LINK2_PI_R_ESCEVENT_Pos)) 

/* -------- SPW_LINK2_PI_RCS : (SPW Offset: 0x48C) (R/W 32) SpW Link 2 Pending Read, Clear and Enabled Interrupt -------- */
#define SPW_LINK2_PI_RCS_DISERR_Pos           _UINT32_(0)                                          /* (SPW_LINK2_PI_RCS) DisErr Position */
#define SPW_LINK2_PI_RCS_DISERR_Msk           (_UINT32_(0x1) << SPW_LINK2_PI_RCS_DISERR_Pos)       /* (SPW_LINK2_PI_RCS) DisErr Mask */
#define SPW_LINK2_PI_RCS_DISERR(value)        (SPW_LINK2_PI_RCS_DISERR_Msk & (_UINT32_(value) << SPW_LINK2_PI_RCS_DISERR_Pos)) /* Assigment of value for DISERR in the SPW_LINK2_PI_RCS register */
#define SPW_LINK2_PI_RCS_PARERR_Pos           _UINT32_(1)                                          /* (SPW_LINK2_PI_RCS) ParErr Position */
#define SPW_LINK2_PI_RCS_PARERR_Msk           (_UINT32_(0x1) << SPW_LINK2_PI_RCS_PARERR_Pos)       /* (SPW_LINK2_PI_RCS) ParErr Mask */
#define SPW_LINK2_PI_RCS_PARERR(value)        (SPW_LINK2_PI_RCS_PARERR_Msk & (_UINT32_(value) << SPW_LINK2_PI_RCS_PARERR_Pos)) /* Assigment of value for PARERR in the SPW_LINK2_PI_RCS register */
#define SPW_LINK2_PI_RCS_ESCERR_Pos           _UINT32_(2)                                          /* (SPW_LINK2_PI_RCS) ESCErr Position */
#define SPW_LINK2_PI_RCS_ESCERR_Msk           (_UINT32_(0x1) << SPW_LINK2_PI_RCS_ESCERR_Pos)       /* (SPW_LINK2_PI_RCS) ESCErr Mask */
#define SPW_LINK2_PI_RCS_ESCERR(value)        (SPW_LINK2_PI_RCS_ESCERR_Msk & (_UINT32_(value) << SPW_LINK2_PI_RCS_ESCERR_Pos)) /* Assigment of value for ESCERR in the SPW_LINK2_PI_RCS register */
#define SPW_LINK2_PI_RCS_CRERR_Pos            _UINT32_(3)                                          /* (SPW_LINK2_PI_RCS) CrErr Position */
#define SPW_LINK2_PI_RCS_CRERR_Msk            (_UINT32_(0x1) << SPW_LINK2_PI_RCS_CRERR_Pos)        /* (SPW_LINK2_PI_RCS) CrErr Mask */
#define SPW_LINK2_PI_RCS_CRERR(value)         (SPW_LINK2_PI_RCS_CRERR_Msk & (_UINT32_(value) << SPW_LINK2_PI_RCS_CRERR_Pos)) /* Assigment of value for CRERR in the SPW_LINK2_PI_RCS register */
#define SPW_LINK2_PI_RCS_LINKABORT_Pos        _UINT32_(4)                                          /* (SPW_LINK2_PI_RCS) LinkAbort Position */
#define SPW_LINK2_PI_RCS_LINKABORT_Msk        (_UINT32_(0x1) << SPW_LINK2_PI_RCS_LINKABORT_Pos)    /* (SPW_LINK2_PI_RCS) LinkAbort Mask */
#define SPW_LINK2_PI_RCS_LINKABORT(value)     (SPW_LINK2_PI_RCS_LINKABORT_Msk & (_UINT32_(value) << SPW_LINK2_PI_RCS_LINKABORT_Pos)) /* Assigment of value for LINKABORT in the SPW_LINK2_PI_RCS register */
#define SPW_LINK2_PI_RCS_EEPTRANS_Pos         _UINT32_(5)                                          /* (SPW_LINK2_PI_RCS) EEP transmitted Position */
#define SPW_LINK2_PI_RCS_EEPTRANS_Msk         (_UINT32_(0x1) << SPW_LINK2_PI_RCS_EEPTRANS_Pos)     /* (SPW_LINK2_PI_RCS) EEP transmitted Mask */
#define SPW_LINK2_PI_RCS_EEPTRANS(value)      (SPW_LINK2_PI_RCS_EEPTRANS_Msk & (_UINT32_(value) << SPW_LINK2_PI_RCS_EEPTRANS_Pos)) /* Assigment of value for EEPTRANS in the SPW_LINK2_PI_RCS register */
#define SPW_LINK2_PI_RCS_EEPREC_Pos           _UINT32_(6)                                          /* (SPW_LINK2_PI_RCS) EEP received Position */
#define SPW_LINK2_PI_RCS_EEPREC_Msk           (_UINT32_(0x1) << SPW_LINK2_PI_RCS_EEPREC_Pos)       /* (SPW_LINK2_PI_RCS) EEP received Mask */
#define SPW_LINK2_PI_RCS_EEPREC(value)        (SPW_LINK2_PI_RCS_EEPREC_Msk & (_UINT32_(value) << SPW_LINK2_PI_RCS_EEPREC_Pos)) /* Assigment of value for EEPREC in the SPW_LINK2_PI_RCS register */
#define SPW_LINK2_PI_RCS_DISCARD_Pos          _UINT32_(7)                                          /* (SPW_LINK2_PI_RCS) Discard Position */
#define SPW_LINK2_PI_RCS_DISCARD_Msk          (_UINT32_(0x1) << SPW_LINK2_PI_RCS_DISCARD_Pos)      /* (SPW_LINK2_PI_RCS) Discard Mask */
#define SPW_LINK2_PI_RCS_DISCARD(value)       (SPW_LINK2_PI_RCS_DISCARD_Msk & (_UINT32_(value) << SPW_LINK2_PI_RCS_DISCARD_Pos)) /* Assigment of value for DISCARD in the SPW_LINK2_PI_RCS register */
#define SPW_LINK2_PI_RCS_ESCEVENT2_Pos        _UINT32_(8)                                          /* (SPW_LINK2_PI_RCS) Escape Event 2 Position */
#define SPW_LINK2_PI_RCS_ESCEVENT2_Msk        (_UINT32_(0x1) << SPW_LINK2_PI_RCS_ESCEVENT2_Pos)    /* (SPW_LINK2_PI_RCS) Escape Event 2 Mask */
#define SPW_LINK2_PI_RCS_ESCEVENT2(value)     (SPW_LINK2_PI_RCS_ESCEVENT2_Msk & (_UINT32_(value) << SPW_LINK2_PI_RCS_ESCEVENT2_Pos)) /* Assigment of value for ESCEVENT2 in the SPW_LINK2_PI_RCS register */
#define SPW_LINK2_PI_RCS_ESCEVENT1_Pos        _UINT32_(9)                                          /* (SPW_LINK2_PI_RCS) Escape Event 1 Position */
#define SPW_LINK2_PI_RCS_ESCEVENT1_Msk        (_UINT32_(0x1) << SPW_LINK2_PI_RCS_ESCEVENT1_Pos)    /* (SPW_LINK2_PI_RCS) Escape Event 1 Mask */
#define SPW_LINK2_PI_RCS_ESCEVENT1(value)     (SPW_LINK2_PI_RCS_ESCEVENT1_Msk & (_UINT32_(value) << SPW_LINK2_PI_RCS_ESCEVENT1_Pos)) /* Assigment of value for ESCEVENT1 in the SPW_LINK2_PI_RCS register */
#define SPW_LINK2_PI_RCS_Msk                  _UINT32_(0x000003FF)                                 /* (SPW_LINK2_PI_RCS) Register Mask  */

#define SPW_LINK2_PI_RCS_ESCEVENT_Pos         _UINT32_(8)                                          /* (SPW_LINK2_PI_RCS Position) Escape Event x */
#define SPW_LINK2_PI_RCS_ESCEVENT_Msk         (_UINT32_(0x3) << SPW_LINK2_PI_RCS_ESCEVENT_Pos)     /* (SPW_LINK2_PI_RCS Mask) ESCEVENT */
#define SPW_LINK2_PI_RCS_ESCEVENT(value)      (SPW_LINK2_PI_RCS_ESCEVENT_Msk & (_UINT32_(value) << SPW_LINK2_PI_RCS_ESCEVENT_Pos)) 

/* -------- SPW_LINK2_IM : (SPW Offset: 0x490) (R/W 32) SpW Link 2 Interrupt Mask -------- */
#define SPW_LINK2_IM_DISERR_Pos               _UINT32_(0)                                          /* (SPW_LINK2_IM) DisErr Position */
#define SPW_LINK2_IM_DISERR_Msk               (_UINT32_(0x1) << SPW_LINK2_IM_DISERR_Pos)           /* (SPW_LINK2_IM) DisErr Mask */
#define SPW_LINK2_IM_DISERR(value)            (SPW_LINK2_IM_DISERR_Msk & (_UINT32_(value) << SPW_LINK2_IM_DISERR_Pos)) /* Assigment of value for DISERR in the SPW_LINK2_IM register */
#define SPW_LINK2_IM_PARERR_Pos               _UINT32_(1)                                          /* (SPW_LINK2_IM) ParErr Position */
#define SPW_LINK2_IM_PARERR_Msk               (_UINT32_(0x1) << SPW_LINK2_IM_PARERR_Pos)           /* (SPW_LINK2_IM) ParErr Mask */
#define SPW_LINK2_IM_PARERR(value)            (SPW_LINK2_IM_PARERR_Msk & (_UINT32_(value) << SPW_LINK2_IM_PARERR_Pos)) /* Assigment of value for PARERR in the SPW_LINK2_IM register */
#define SPW_LINK2_IM_ESCERR_Pos               _UINT32_(2)                                          /* (SPW_LINK2_IM) ESCErr Position */
#define SPW_LINK2_IM_ESCERR_Msk               (_UINT32_(0x1) << SPW_LINK2_IM_ESCERR_Pos)           /* (SPW_LINK2_IM) ESCErr Mask */
#define SPW_LINK2_IM_ESCERR(value)            (SPW_LINK2_IM_ESCERR_Msk & (_UINT32_(value) << SPW_LINK2_IM_ESCERR_Pos)) /* Assigment of value for ESCERR in the SPW_LINK2_IM register */
#define SPW_LINK2_IM_CRERR_Pos                _UINT32_(3)                                          /* (SPW_LINK2_IM) CrErr Position */
#define SPW_LINK2_IM_CRERR_Msk                (_UINT32_(0x1) << SPW_LINK2_IM_CRERR_Pos)            /* (SPW_LINK2_IM) CrErr Mask */
#define SPW_LINK2_IM_CRERR(value)             (SPW_LINK2_IM_CRERR_Msk & (_UINT32_(value) << SPW_LINK2_IM_CRERR_Pos)) /* Assigment of value for CRERR in the SPW_LINK2_IM register */
#define SPW_LINK2_IM_LINKABORT_Pos            _UINT32_(4)                                          /* (SPW_LINK2_IM) LinkAbort Position */
#define SPW_LINK2_IM_LINKABORT_Msk            (_UINT32_(0x1) << SPW_LINK2_IM_LINKABORT_Pos)        /* (SPW_LINK2_IM) LinkAbort Mask */
#define SPW_LINK2_IM_LINKABORT(value)         (SPW_LINK2_IM_LINKABORT_Msk & (_UINT32_(value) << SPW_LINK2_IM_LINKABORT_Pos)) /* Assigment of value for LINKABORT in the SPW_LINK2_IM register */
#define SPW_LINK2_IM_EEPTRANS_Pos             _UINT32_(5)                                          /* (SPW_LINK2_IM) EEP transmitted Position */
#define SPW_LINK2_IM_EEPTRANS_Msk             (_UINT32_(0x1) << SPW_LINK2_IM_EEPTRANS_Pos)         /* (SPW_LINK2_IM) EEP transmitted Mask */
#define SPW_LINK2_IM_EEPTRANS(value)          (SPW_LINK2_IM_EEPTRANS_Msk & (_UINT32_(value) << SPW_LINK2_IM_EEPTRANS_Pos)) /* Assigment of value for EEPTRANS in the SPW_LINK2_IM register */
#define SPW_LINK2_IM_EEPREC_Pos               _UINT32_(6)                                          /* (SPW_LINK2_IM) EEP received Position */
#define SPW_LINK2_IM_EEPREC_Msk               (_UINT32_(0x1) << SPW_LINK2_IM_EEPREC_Pos)           /* (SPW_LINK2_IM) EEP received Mask */
#define SPW_LINK2_IM_EEPREC(value)            (SPW_LINK2_IM_EEPREC_Msk & (_UINT32_(value) << SPW_LINK2_IM_EEPREC_Pos)) /* Assigment of value for EEPREC in the SPW_LINK2_IM register */
#define SPW_LINK2_IM_DISCARD_Pos              _UINT32_(7)                                          /* (SPW_LINK2_IM) Discard Position */
#define SPW_LINK2_IM_DISCARD_Msk              (_UINT32_(0x1) << SPW_LINK2_IM_DISCARD_Pos)          /* (SPW_LINK2_IM) Discard Mask */
#define SPW_LINK2_IM_DISCARD(value)           (SPW_LINK2_IM_DISCARD_Msk & (_UINT32_(value) << SPW_LINK2_IM_DISCARD_Pos)) /* Assigment of value for DISCARD in the SPW_LINK2_IM register */
#define SPW_LINK2_IM_ESCEVENT2_Pos            _UINT32_(8)                                          /* (SPW_LINK2_IM) Escape Event 2 Position */
#define SPW_LINK2_IM_ESCEVENT2_Msk            (_UINT32_(0x1) << SPW_LINK2_IM_ESCEVENT2_Pos)        /* (SPW_LINK2_IM) Escape Event 2 Mask */
#define SPW_LINK2_IM_ESCEVENT2(value)         (SPW_LINK2_IM_ESCEVENT2_Msk & (_UINT32_(value) << SPW_LINK2_IM_ESCEVENT2_Pos)) /* Assigment of value for ESCEVENT2 in the SPW_LINK2_IM register */
#define SPW_LINK2_IM_ESCEVENT1_Pos            _UINT32_(9)                                          /* (SPW_LINK2_IM) Escape Event 1 Position */
#define SPW_LINK2_IM_ESCEVENT1_Msk            (_UINT32_(0x1) << SPW_LINK2_IM_ESCEVENT1_Pos)        /* (SPW_LINK2_IM) Escape Event 1 Mask */
#define SPW_LINK2_IM_ESCEVENT1(value)         (SPW_LINK2_IM_ESCEVENT1_Msk & (_UINT32_(value) << SPW_LINK2_IM_ESCEVENT1_Pos)) /* Assigment of value for ESCEVENT1 in the SPW_LINK2_IM register */
#define SPW_LINK2_IM_Msk                      _UINT32_(0x000003FF)                                 /* (SPW_LINK2_IM) Register Mask  */

#define SPW_LINK2_IM_ESCEVENT_Pos             _UINT32_(8)                                          /* (SPW_LINK2_IM Position) Escape Event x */
#define SPW_LINK2_IM_ESCEVENT_Msk             (_UINT32_(0x3) << SPW_LINK2_IM_ESCEVENT_Pos)         /* (SPW_LINK2_IM Mask) ESCEVENT */
#define SPW_LINK2_IM_ESCEVENT(value)          (SPW_LINK2_IM_ESCEVENT_Msk & (_UINT32_(value) << SPW_LINK2_IM_ESCEVENT_Pos)) 

/* -------- SPW_LINK2_PI_C : (SPW Offset: 0x494) ( /W 32) SpW Link 2 Clear Pending Interrupt -------- */
#define SPW_LINK2_PI_C_DISERR_Pos             _UINT32_(0)                                          /* (SPW_LINK2_PI_C) DisErr Position */
#define SPW_LINK2_PI_C_DISERR_Msk             (_UINT32_(0x1) << SPW_LINK2_PI_C_DISERR_Pos)         /* (SPW_LINK2_PI_C) DisErr Mask */
#define SPW_LINK2_PI_C_DISERR(value)          (SPW_LINK2_PI_C_DISERR_Msk & (_UINT32_(value) << SPW_LINK2_PI_C_DISERR_Pos)) /* Assigment of value for DISERR in the SPW_LINK2_PI_C register */
#define SPW_LINK2_PI_C_PARERR_Pos             _UINT32_(1)                                          /* (SPW_LINK2_PI_C) ParErr Position */
#define SPW_LINK2_PI_C_PARERR_Msk             (_UINT32_(0x1) << SPW_LINK2_PI_C_PARERR_Pos)         /* (SPW_LINK2_PI_C) ParErr Mask */
#define SPW_LINK2_PI_C_PARERR(value)          (SPW_LINK2_PI_C_PARERR_Msk & (_UINT32_(value) << SPW_LINK2_PI_C_PARERR_Pos)) /* Assigment of value for PARERR in the SPW_LINK2_PI_C register */
#define SPW_LINK2_PI_C_ESCERR_Pos             _UINT32_(2)                                          /* (SPW_LINK2_PI_C) ESCErr Position */
#define SPW_LINK2_PI_C_ESCERR_Msk             (_UINT32_(0x1) << SPW_LINK2_PI_C_ESCERR_Pos)         /* (SPW_LINK2_PI_C) ESCErr Mask */
#define SPW_LINK2_PI_C_ESCERR(value)          (SPW_LINK2_PI_C_ESCERR_Msk & (_UINT32_(value) << SPW_LINK2_PI_C_ESCERR_Pos)) /* Assigment of value for ESCERR in the SPW_LINK2_PI_C register */
#define SPW_LINK2_PI_C_CRERR_Pos              _UINT32_(3)                                          /* (SPW_LINK2_PI_C) CrErr Position */
#define SPW_LINK2_PI_C_CRERR_Msk              (_UINT32_(0x1) << SPW_LINK2_PI_C_CRERR_Pos)          /* (SPW_LINK2_PI_C) CrErr Mask */
#define SPW_LINK2_PI_C_CRERR(value)           (SPW_LINK2_PI_C_CRERR_Msk & (_UINT32_(value) << SPW_LINK2_PI_C_CRERR_Pos)) /* Assigment of value for CRERR in the SPW_LINK2_PI_C register */
#define SPW_LINK2_PI_C_LINKABORT_Pos          _UINT32_(4)                                          /* (SPW_LINK2_PI_C) LinkAbort Position */
#define SPW_LINK2_PI_C_LINKABORT_Msk          (_UINT32_(0x1) << SPW_LINK2_PI_C_LINKABORT_Pos)      /* (SPW_LINK2_PI_C) LinkAbort Mask */
#define SPW_LINK2_PI_C_LINKABORT(value)       (SPW_LINK2_PI_C_LINKABORT_Msk & (_UINT32_(value) << SPW_LINK2_PI_C_LINKABORT_Pos)) /* Assigment of value for LINKABORT in the SPW_LINK2_PI_C register */
#define SPW_LINK2_PI_C_EEPTRANS_Pos           _UINT32_(5)                                          /* (SPW_LINK2_PI_C) EEP transmitted Position */
#define SPW_LINK2_PI_C_EEPTRANS_Msk           (_UINT32_(0x1) << SPW_LINK2_PI_C_EEPTRANS_Pos)       /* (SPW_LINK2_PI_C) EEP transmitted Mask */
#define SPW_LINK2_PI_C_EEPTRANS(value)        (SPW_LINK2_PI_C_EEPTRANS_Msk & (_UINT32_(value) << SPW_LINK2_PI_C_EEPTRANS_Pos)) /* Assigment of value for EEPTRANS in the SPW_LINK2_PI_C register */
#define SPW_LINK2_PI_C_EEPREC_Pos             _UINT32_(6)                                          /* (SPW_LINK2_PI_C) EEP received Position */
#define SPW_LINK2_PI_C_EEPREC_Msk             (_UINT32_(0x1) << SPW_LINK2_PI_C_EEPREC_Pos)         /* (SPW_LINK2_PI_C) EEP received Mask */
#define SPW_LINK2_PI_C_EEPREC(value)          (SPW_LINK2_PI_C_EEPREC_Msk & (_UINT32_(value) << SPW_LINK2_PI_C_EEPREC_Pos)) /* Assigment of value for EEPREC in the SPW_LINK2_PI_C register */
#define SPW_LINK2_PI_C_DISCARD_Pos            _UINT32_(7)                                          /* (SPW_LINK2_PI_C) Discard Position */
#define SPW_LINK2_PI_C_DISCARD_Msk            (_UINT32_(0x1) << SPW_LINK2_PI_C_DISCARD_Pos)        /* (SPW_LINK2_PI_C) Discard Mask */
#define SPW_LINK2_PI_C_DISCARD(value)         (SPW_LINK2_PI_C_DISCARD_Msk & (_UINT32_(value) << SPW_LINK2_PI_C_DISCARD_Pos)) /* Assigment of value for DISCARD in the SPW_LINK2_PI_C register */
#define SPW_LINK2_PI_C_ESCEVENT2_Pos          _UINT32_(8)                                          /* (SPW_LINK2_PI_C) Escape Event 2 Position */
#define SPW_LINK2_PI_C_ESCEVENT2_Msk          (_UINT32_(0x1) << SPW_LINK2_PI_C_ESCEVENT2_Pos)      /* (SPW_LINK2_PI_C) Escape Event 2 Mask */
#define SPW_LINK2_PI_C_ESCEVENT2(value)       (SPW_LINK2_PI_C_ESCEVENT2_Msk & (_UINT32_(value) << SPW_LINK2_PI_C_ESCEVENT2_Pos)) /* Assigment of value for ESCEVENT2 in the SPW_LINK2_PI_C register */
#define SPW_LINK2_PI_C_ESCEVENT1_Pos          _UINT32_(9)                                          /* (SPW_LINK2_PI_C) Escape Event 1 Position */
#define SPW_LINK2_PI_C_ESCEVENT1_Msk          (_UINT32_(0x1) << SPW_LINK2_PI_C_ESCEVENT1_Pos)      /* (SPW_LINK2_PI_C) Escape Event 1 Mask */
#define SPW_LINK2_PI_C_ESCEVENT1(value)       (SPW_LINK2_PI_C_ESCEVENT1_Msk & (_UINT32_(value) << SPW_LINK2_PI_C_ESCEVENT1_Pos)) /* Assigment of value for ESCEVENT1 in the SPW_LINK2_PI_C register */
#define SPW_LINK2_PI_C_Msk                    _UINT32_(0x000003FF)                                 /* (SPW_LINK2_PI_C) Register Mask  */

#define SPW_LINK2_PI_C_ESCEVENT_Pos           _UINT32_(8)                                          /* (SPW_LINK2_PI_C Position) Escape Event x */
#define SPW_LINK2_PI_C_ESCEVENT_Msk           (_UINT32_(0x3) << SPW_LINK2_PI_C_ESCEVENT_Pos)       /* (SPW_LINK2_PI_C Mask) ESCEVENT */
#define SPW_LINK2_PI_C_ESCEVENT(value)        (SPW_LINK2_PI_C_ESCEVENT_Msk & (_UINT32_(value) << SPW_LINK2_PI_C_ESCEVENT_Pos)) 

/* -------- SPW_LINK2_IM_S : (SPW Offset: 0x498) ( /W 32) SpW Link 2 Interrupt Set Mask -------- */
#define SPW_LINK2_IM_S_DISERR_Pos             _UINT32_(0)                                          /* (SPW_LINK2_IM_S) DisErr Position */
#define SPW_LINK2_IM_S_DISERR_Msk             (_UINT32_(0x1) << SPW_LINK2_IM_S_DISERR_Pos)         /* (SPW_LINK2_IM_S) DisErr Mask */
#define SPW_LINK2_IM_S_DISERR(value)          (SPW_LINK2_IM_S_DISERR_Msk & (_UINT32_(value) << SPW_LINK2_IM_S_DISERR_Pos)) /* Assigment of value for DISERR in the SPW_LINK2_IM_S register */
#define SPW_LINK2_IM_S_PARERR_Pos             _UINT32_(1)                                          /* (SPW_LINK2_IM_S) ParErr Position */
#define SPW_LINK2_IM_S_PARERR_Msk             (_UINT32_(0x1) << SPW_LINK2_IM_S_PARERR_Pos)         /* (SPW_LINK2_IM_S) ParErr Mask */
#define SPW_LINK2_IM_S_PARERR(value)          (SPW_LINK2_IM_S_PARERR_Msk & (_UINT32_(value) << SPW_LINK2_IM_S_PARERR_Pos)) /* Assigment of value for PARERR in the SPW_LINK2_IM_S register */
#define SPW_LINK2_IM_S_ESCERR_Pos             _UINT32_(2)                                          /* (SPW_LINK2_IM_S) ESCErr Position */
#define SPW_LINK2_IM_S_ESCERR_Msk             (_UINT32_(0x1) << SPW_LINK2_IM_S_ESCERR_Pos)         /* (SPW_LINK2_IM_S) ESCErr Mask */
#define SPW_LINK2_IM_S_ESCERR(value)          (SPW_LINK2_IM_S_ESCERR_Msk & (_UINT32_(value) << SPW_LINK2_IM_S_ESCERR_Pos)) /* Assigment of value for ESCERR in the SPW_LINK2_IM_S register */
#define SPW_LINK2_IM_S_CRERR_Pos              _UINT32_(3)                                          /* (SPW_LINK2_IM_S) CrErr Position */
#define SPW_LINK2_IM_S_CRERR_Msk              (_UINT32_(0x1) << SPW_LINK2_IM_S_CRERR_Pos)          /* (SPW_LINK2_IM_S) CrErr Mask */
#define SPW_LINK2_IM_S_CRERR(value)           (SPW_LINK2_IM_S_CRERR_Msk & (_UINT32_(value) << SPW_LINK2_IM_S_CRERR_Pos)) /* Assigment of value for CRERR in the SPW_LINK2_IM_S register */
#define SPW_LINK2_IM_S_LINKABORT_Pos          _UINT32_(4)                                          /* (SPW_LINK2_IM_S) LinkAbort Position */
#define SPW_LINK2_IM_S_LINKABORT_Msk          (_UINT32_(0x1) << SPW_LINK2_IM_S_LINKABORT_Pos)      /* (SPW_LINK2_IM_S) LinkAbort Mask */
#define SPW_LINK2_IM_S_LINKABORT(value)       (SPW_LINK2_IM_S_LINKABORT_Msk & (_UINT32_(value) << SPW_LINK2_IM_S_LINKABORT_Pos)) /* Assigment of value for LINKABORT in the SPW_LINK2_IM_S register */
#define SPW_LINK2_IM_S_EEPTRANS_Pos           _UINT32_(5)                                          /* (SPW_LINK2_IM_S) EEP transmitted Position */
#define SPW_LINK2_IM_S_EEPTRANS_Msk           (_UINT32_(0x1) << SPW_LINK2_IM_S_EEPTRANS_Pos)       /* (SPW_LINK2_IM_S) EEP transmitted Mask */
#define SPW_LINK2_IM_S_EEPTRANS(value)        (SPW_LINK2_IM_S_EEPTRANS_Msk & (_UINT32_(value) << SPW_LINK2_IM_S_EEPTRANS_Pos)) /* Assigment of value for EEPTRANS in the SPW_LINK2_IM_S register */
#define SPW_LINK2_IM_S_EEPREC_Pos             _UINT32_(6)                                          /* (SPW_LINK2_IM_S) EEP received Position */
#define SPW_LINK2_IM_S_EEPREC_Msk             (_UINT32_(0x1) << SPW_LINK2_IM_S_EEPREC_Pos)         /* (SPW_LINK2_IM_S) EEP received Mask */
#define SPW_LINK2_IM_S_EEPREC(value)          (SPW_LINK2_IM_S_EEPREC_Msk & (_UINT32_(value) << SPW_LINK2_IM_S_EEPREC_Pos)) /* Assigment of value for EEPREC in the SPW_LINK2_IM_S register */
#define SPW_LINK2_IM_S_DISCARD_Pos            _UINT32_(7)                                          /* (SPW_LINK2_IM_S) Discard Position */
#define SPW_LINK2_IM_S_DISCARD_Msk            (_UINT32_(0x1) << SPW_LINK2_IM_S_DISCARD_Pos)        /* (SPW_LINK2_IM_S) Discard Mask */
#define SPW_LINK2_IM_S_DISCARD(value)         (SPW_LINK2_IM_S_DISCARD_Msk & (_UINT32_(value) << SPW_LINK2_IM_S_DISCARD_Pos)) /* Assigment of value for DISCARD in the SPW_LINK2_IM_S register */
#define SPW_LINK2_IM_S_ESCEVENT2_Pos          _UINT32_(8)                                          /* (SPW_LINK2_IM_S) Escape Event 2 Position */
#define SPW_LINK2_IM_S_ESCEVENT2_Msk          (_UINT32_(0x1) << SPW_LINK2_IM_S_ESCEVENT2_Pos)      /* (SPW_LINK2_IM_S) Escape Event 2 Mask */
#define SPW_LINK2_IM_S_ESCEVENT2(value)       (SPW_LINK2_IM_S_ESCEVENT2_Msk & (_UINT32_(value) << SPW_LINK2_IM_S_ESCEVENT2_Pos)) /* Assigment of value for ESCEVENT2 in the SPW_LINK2_IM_S register */
#define SPW_LINK2_IM_S_ESCEVENT1_Pos          _UINT32_(9)                                          /* (SPW_LINK2_IM_S) Escape Event 1 Position */
#define SPW_LINK2_IM_S_ESCEVENT1_Msk          (_UINT32_(0x1) << SPW_LINK2_IM_S_ESCEVENT1_Pos)      /* (SPW_LINK2_IM_S) Escape Event 1 Mask */
#define SPW_LINK2_IM_S_ESCEVENT1(value)       (SPW_LINK2_IM_S_ESCEVENT1_Msk & (_UINT32_(value) << SPW_LINK2_IM_S_ESCEVENT1_Pos)) /* Assigment of value for ESCEVENT1 in the SPW_LINK2_IM_S register */
#define SPW_LINK2_IM_S_Msk                    _UINT32_(0x000003FF)                                 /* (SPW_LINK2_IM_S) Register Mask  */

#define SPW_LINK2_IM_S_ESCEVENT_Pos           _UINT32_(8)                                          /* (SPW_LINK2_IM_S Position) Escape Event x */
#define SPW_LINK2_IM_S_ESCEVENT_Msk           (_UINT32_(0x3) << SPW_LINK2_IM_S_ESCEVENT_Pos)       /* (SPW_LINK2_IM_S Mask) ESCEVENT */
#define SPW_LINK2_IM_S_ESCEVENT(value)        (SPW_LINK2_IM_S_ESCEVENT_Msk & (_UINT32_(value) << SPW_LINK2_IM_S_ESCEVENT_Pos)) 

/* -------- SPW_LINK2_IM_C : (SPW Offset: 0x49C) ( /W 32) SpW Link 2 Interrupt Clear Mask -------- */
#define SPW_LINK2_IM_C_DISERR_Pos             _UINT32_(0)                                          /* (SPW_LINK2_IM_C) DisErr Position */
#define SPW_LINK2_IM_C_DISERR_Msk             (_UINT32_(0x1) << SPW_LINK2_IM_C_DISERR_Pos)         /* (SPW_LINK2_IM_C) DisErr Mask */
#define SPW_LINK2_IM_C_DISERR(value)          (SPW_LINK2_IM_C_DISERR_Msk & (_UINT32_(value) << SPW_LINK2_IM_C_DISERR_Pos)) /* Assigment of value for DISERR in the SPW_LINK2_IM_C register */
#define SPW_LINK2_IM_C_PARERR_Pos             _UINT32_(1)                                          /* (SPW_LINK2_IM_C) ParErr Position */
#define SPW_LINK2_IM_C_PARERR_Msk             (_UINT32_(0x1) << SPW_LINK2_IM_C_PARERR_Pos)         /* (SPW_LINK2_IM_C) ParErr Mask */
#define SPW_LINK2_IM_C_PARERR(value)          (SPW_LINK2_IM_C_PARERR_Msk & (_UINT32_(value) << SPW_LINK2_IM_C_PARERR_Pos)) /* Assigment of value for PARERR in the SPW_LINK2_IM_C register */
#define SPW_LINK2_IM_C_ESCERR_Pos             _UINT32_(2)                                          /* (SPW_LINK2_IM_C) ESCErr Position */
#define SPW_LINK2_IM_C_ESCERR_Msk             (_UINT32_(0x1) << SPW_LINK2_IM_C_ESCERR_Pos)         /* (SPW_LINK2_IM_C) ESCErr Mask */
#define SPW_LINK2_IM_C_ESCERR(value)          (SPW_LINK2_IM_C_ESCERR_Msk & (_UINT32_(value) << SPW_LINK2_IM_C_ESCERR_Pos)) /* Assigment of value for ESCERR in the SPW_LINK2_IM_C register */
#define SPW_LINK2_IM_C_CRERR_Pos              _UINT32_(3)                                          /* (SPW_LINK2_IM_C) CrErr Position */
#define SPW_LINK2_IM_C_CRERR_Msk              (_UINT32_(0x1) << SPW_LINK2_IM_C_CRERR_Pos)          /* (SPW_LINK2_IM_C) CrErr Mask */
#define SPW_LINK2_IM_C_CRERR(value)           (SPW_LINK2_IM_C_CRERR_Msk & (_UINT32_(value) << SPW_LINK2_IM_C_CRERR_Pos)) /* Assigment of value for CRERR in the SPW_LINK2_IM_C register */
#define SPW_LINK2_IM_C_LINKABORT_Pos          _UINT32_(4)                                          /* (SPW_LINK2_IM_C) LinkAbort Position */
#define SPW_LINK2_IM_C_LINKABORT_Msk          (_UINT32_(0x1) << SPW_LINK2_IM_C_LINKABORT_Pos)      /* (SPW_LINK2_IM_C) LinkAbort Mask */
#define SPW_LINK2_IM_C_LINKABORT(value)       (SPW_LINK2_IM_C_LINKABORT_Msk & (_UINT32_(value) << SPW_LINK2_IM_C_LINKABORT_Pos)) /* Assigment of value for LINKABORT in the SPW_LINK2_IM_C register */
#define SPW_LINK2_IM_C_EEPTRANS_Pos           _UINT32_(5)                                          /* (SPW_LINK2_IM_C) EEP transmitted Position */
#define SPW_LINK2_IM_C_EEPTRANS_Msk           (_UINT32_(0x1) << SPW_LINK2_IM_C_EEPTRANS_Pos)       /* (SPW_LINK2_IM_C) EEP transmitted Mask */
#define SPW_LINK2_IM_C_EEPTRANS(value)        (SPW_LINK2_IM_C_EEPTRANS_Msk & (_UINT32_(value) << SPW_LINK2_IM_C_EEPTRANS_Pos)) /* Assigment of value for EEPTRANS in the SPW_LINK2_IM_C register */
#define SPW_LINK2_IM_C_EEPREC_Pos             _UINT32_(6)                                          /* (SPW_LINK2_IM_C) EEP received Position */
#define SPW_LINK2_IM_C_EEPREC_Msk             (_UINT32_(0x1) << SPW_LINK2_IM_C_EEPREC_Pos)         /* (SPW_LINK2_IM_C) EEP received Mask */
#define SPW_LINK2_IM_C_EEPREC(value)          (SPW_LINK2_IM_C_EEPREC_Msk & (_UINT32_(value) << SPW_LINK2_IM_C_EEPREC_Pos)) /* Assigment of value for EEPREC in the SPW_LINK2_IM_C register */
#define SPW_LINK2_IM_C_DISCARD_Pos            _UINT32_(7)                                          /* (SPW_LINK2_IM_C) Discard Position */
#define SPW_LINK2_IM_C_DISCARD_Msk            (_UINT32_(0x1) << SPW_LINK2_IM_C_DISCARD_Pos)        /* (SPW_LINK2_IM_C) Discard Mask */
#define SPW_LINK2_IM_C_DISCARD(value)         (SPW_LINK2_IM_C_DISCARD_Msk & (_UINT32_(value) << SPW_LINK2_IM_C_DISCARD_Pos)) /* Assigment of value for DISCARD in the SPW_LINK2_IM_C register */
#define SPW_LINK2_IM_C_ESCEVENT2_Pos          _UINT32_(8)                                          /* (SPW_LINK2_IM_C) Escape Event 2 Position */
#define SPW_LINK2_IM_C_ESCEVENT2_Msk          (_UINT32_(0x1) << SPW_LINK2_IM_C_ESCEVENT2_Pos)      /* (SPW_LINK2_IM_C) Escape Event 2 Mask */
#define SPW_LINK2_IM_C_ESCEVENT2(value)       (SPW_LINK2_IM_C_ESCEVENT2_Msk & (_UINT32_(value) << SPW_LINK2_IM_C_ESCEVENT2_Pos)) /* Assigment of value for ESCEVENT2 in the SPW_LINK2_IM_C register */
#define SPW_LINK2_IM_C_ESCEVENT1_Pos          _UINT32_(9)                                          /* (SPW_LINK2_IM_C) Escape Event 1 Position */
#define SPW_LINK2_IM_C_ESCEVENT1_Msk          (_UINT32_(0x1) << SPW_LINK2_IM_C_ESCEVENT1_Pos)      /* (SPW_LINK2_IM_C) Escape Event 1 Mask */
#define SPW_LINK2_IM_C_ESCEVENT1(value)       (SPW_LINK2_IM_C_ESCEVENT1_Msk & (_UINT32_(value) << SPW_LINK2_IM_C_ESCEVENT1_Pos)) /* Assigment of value for ESCEVENT1 in the SPW_LINK2_IM_C register */
#define SPW_LINK2_IM_C_Msk                    _UINT32_(0x000003FF)                                 /* (SPW_LINK2_IM_C) Register Mask  */

#define SPW_LINK2_IM_C_ESCEVENT_Pos           _UINT32_(8)                                          /* (SPW_LINK2_IM_C Position) Escape Event x */
#define SPW_LINK2_IM_C_ESCEVENT_Msk           (_UINT32_(0x3) << SPW_LINK2_IM_C_ESCEVENT_Pos)       /* (SPW_LINK2_IM_C Mask) ESCEVENT */
#define SPW_LINK2_IM_C_ESCEVENT(value)        (SPW_LINK2_IM_C_ESCEVENT_Msk & (_UINT32_(value) << SPW_LINK2_IM_C_ESCEVENT_Pos)) 

/* -------- SPW_LINK2_CFG : (SPW Offset: 0x4A0) (R/W 32) SpW Link 2 Config -------- */
#define SPW_LINK2_CFG_COMMAND_Pos             _UINT32_(0)                                          /* (SPW_LINK2_CFG) Command Position */
#define SPW_LINK2_CFG_COMMAND_Msk             (_UINT32_(0x3) << SPW_LINK2_CFG_COMMAND_Pos)         /* (SPW_LINK2_CFG) Command Mask */
#define SPW_LINK2_CFG_COMMAND(value)          (SPW_LINK2_CFG_COMMAND_Msk & (_UINT32_(value) << SPW_LINK2_CFG_COMMAND_Pos)) /* Assigment of value for COMMAND in the SPW_LINK2_CFG register */
#define   SPW_LINK2_CFG_COMMAND_LINK_DISABLE_Val _UINT32_(0x0)                                        /* (SPW_LINK2_CFG) The link proceeds directly to the ErrorReset state when reaching the Run state.  */
#define   SPW_LINK2_CFG_COMMAND_NO_COMMAND_Val _UINT32_(0x1)                                        /* (SPW_LINK2_CFG) State is not actively changed.  */
#define   SPW_LINK2_CFG_COMMAND_AUTO_START_Val _UINT32_(0x2)                                        /* (SPW_LINK2_CFG) The Codec will wait in state Ready until the first NULL character is received.  */
#define   SPW_LINK2_CFG_COMMAND_LINK_START_Val _UINT32_(0x3)                                        /* (SPW_LINK2_CFG) SpaceWire link can proceed to Started state.  */
#define SPW_LINK2_CFG_COMMAND_LINK_DISABLE    (SPW_LINK2_CFG_COMMAND_LINK_DISABLE_Val << SPW_LINK2_CFG_COMMAND_Pos) /* (SPW_LINK2_CFG) The link proceeds directly to the ErrorReset state when reaching the Run state. Position  */
#define SPW_LINK2_CFG_COMMAND_NO_COMMAND      (SPW_LINK2_CFG_COMMAND_NO_COMMAND_Val << SPW_LINK2_CFG_COMMAND_Pos) /* (SPW_LINK2_CFG) State is not actively changed. Position  */
#define SPW_LINK2_CFG_COMMAND_AUTO_START      (SPW_LINK2_CFG_COMMAND_AUTO_START_Val << SPW_LINK2_CFG_COMMAND_Pos) /* (SPW_LINK2_CFG) The Codec will wait in state Ready until the first NULL character is received. Position  */
#define SPW_LINK2_CFG_COMMAND_LINK_START      (SPW_LINK2_CFG_COMMAND_LINK_START_Val << SPW_LINK2_CFG_COMMAND_Pos) /* (SPW_LINK2_CFG) SpaceWire link can proceed to Started state. Position  */
#define SPW_LINK2_CFG_Msk                     _UINT32_(0x00000003)                                 /* (SPW_LINK2_CFG) Register Mask  */


/* -------- SPW_LINK2_CLKDIV : (SPW Offset: 0x4A4) (R/W 32) SpW Link 2 Clock Division -------- */
#define SPW_LINK2_CLKDIV_TXOPERDIV_Pos        _UINT32_(0)                                          /* (SPW_LINK2_CLKDIV) TxOperDiv Position */
#define SPW_LINK2_CLKDIV_TXOPERDIV_Msk        (_UINT32_(0x1F) << SPW_LINK2_CLKDIV_TXOPERDIV_Pos)   /* (SPW_LINK2_CLKDIV) TxOperDiv Mask */
#define SPW_LINK2_CLKDIV_TXOPERDIV(value)     (SPW_LINK2_CLKDIV_TXOPERDIV_Msk & (_UINT32_(value) << SPW_LINK2_CLKDIV_TXOPERDIV_Pos)) /* Assigment of value for TXOPERDIV in the SPW_LINK2_CLKDIV register */
#define SPW_LINK2_CLKDIV_TXINITDIV_Pos        _UINT32_(16)                                         /* (SPW_LINK2_CLKDIV) TxInitDiv Position */
#define SPW_LINK2_CLKDIV_TXINITDIV_Msk        (_UINT32_(0x1F) << SPW_LINK2_CLKDIV_TXINITDIV_Pos)   /* (SPW_LINK2_CLKDIV) TxInitDiv Mask */
#define SPW_LINK2_CLKDIV_TXINITDIV(value)     (SPW_LINK2_CLKDIV_TXINITDIV_Msk & (_UINT32_(value) << SPW_LINK2_CLKDIV_TXINITDIV_Pos)) /* Assigment of value for TXINITDIV in the SPW_LINK2_CLKDIV register */
#define SPW_LINK2_CLKDIV_Msk                  _UINT32_(0x001F001F)                                 /* (SPW_LINK2_CLKDIV) Register Mask  */


/* -------- SPW_LINK2_STATUS : (SPW Offset: 0x4A8) ( R/ 32) SpW Link 2 Status -------- */
#define SPW_LINK2_STATUS_LINKSTATE_Pos        _UINT32_(0)                                          /* (SPW_LINK2_STATUS) LinkState Position */
#define SPW_LINK2_STATUS_LINKSTATE_Msk        (_UINT32_(0x7) << SPW_LINK2_STATUS_LINKSTATE_Pos)    /* (SPW_LINK2_STATUS) LinkState Mask */
#define SPW_LINK2_STATUS_LINKSTATE(value)     (SPW_LINK2_STATUS_LINKSTATE_Msk & (_UINT32_(value) << SPW_LINK2_STATUS_LINKSTATE_Pos)) /* Assigment of value for LINKSTATE in the SPW_LINK2_STATUS register */
#define   SPW_LINK2_STATUS_LINKSTATE_ERRORRESET_Val _UINT32_(0x0)                                        /* (SPW_LINK2_STATUS) CODEC link state machine in ErrorReset state  */
#define   SPW_LINK2_STATUS_LINKSTATE_ERRORWAIT_Val _UINT32_(0x1)                                        /* (SPW_LINK2_STATUS) CODEC link state machine in ErrorWait state  */
#define   SPW_LINK2_STATUS_LINKSTATE_READY_Val _UINT32_(0x2)                                        /* (SPW_LINK2_STATUS) CODEC link state machine in Ready state  */
#define   SPW_LINK2_STATUS_LINKSTATE_STARTED_Val _UINT32_(0x3)                                        /* (SPW_LINK2_STATUS) CODEC link state machine in Started state  */
#define   SPW_LINK2_STATUS_LINKSTATE_CONNECTING_Val _UINT32_(0x4)                                        /* (SPW_LINK2_STATUS) CODEC link state machine in Connecting state  */
#define   SPW_LINK2_STATUS_LINKSTATE_RUN_Val  _UINT32_(0x5)                                        /* (SPW_LINK2_STATUS) CODEC link state machine in Run state  */
#define SPW_LINK2_STATUS_LINKSTATE_ERRORRESET (SPW_LINK2_STATUS_LINKSTATE_ERRORRESET_Val << SPW_LINK2_STATUS_LINKSTATE_Pos) /* (SPW_LINK2_STATUS) CODEC link state machine in ErrorReset state Position  */
#define SPW_LINK2_STATUS_LINKSTATE_ERRORWAIT  (SPW_LINK2_STATUS_LINKSTATE_ERRORWAIT_Val << SPW_LINK2_STATUS_LINKSTATE_Pos) /* (SPW_LINK2_STATUS) CODEC link state machine in ErrorWait state Position  */
#define SPW_LINK2_STATUS_LINKSTATE_READY      (SPW_LINK2_STATUS_LINKSTATE_READY_Val << SPW_LINK2_STATUS_LINKSTATE_Pos) /* (SPW_LINK2_STATUS) CODEC link state machine in Ready state Position  */
#define SPW_LINK2_STATUS_LINKSTATE_STARTED    (SPW_LINK2_STATUS_LINKSTATE_STARTED_Val << SPW_LINK2_STATUS_LINKSTATE_Pos) /* (SPW_LINK2_STATUS) CODEC link state machine in Started state Position  */
#define SPW_LINK2_STATUS_LINKSTATE_CONNECTING (SPW_LINK2_STATUS_LINKSTATE_CONNECTING_Val << SPW_LINK2_STATUS_LINKSTATE_Pos) /* (SPW_LINK2_STATUS) CODEC link state machine in Connecting state Position  */
#define SPW_LINK2_STATUS_LINKSTATE_RUN        (SPW_LINK2_STATUS_LINKSTATE_RUN_Val << SPW_LINK2_STATUS_LINKSTATE_Pos) /* (SPW_LINK2_STATUS) CODEC link state machine in Run state Position  */
#define SPW_LINK2_STATUS_TXDEFDIV_Pos         _UINT32_(4)                                          /* (SPW_LINK2_STATUS) TxDefDiv Position */
#define SPW_LINK2_STATUS_TXDEFDIV_Msk         (_UINT32_(0x1F) << SPW_LINK2_STATUS_TXDEFDIV_Pos)    /* (SPW_LINK2_STATUS) TxDefDiv Mask */
#define SPW_LINK2_STATUS_TXDEFDIV(value)      (SPW_LINK2_STATUS_TXDEFDIV_Msk & (_UINT32_(value) << SPW_LINK2_STATUS_TXDEFDIV_Pos)) /* Assigment of value for TXDEFDIV in the SPW_LINK2_STATUS register */
#define SPW_LINK2_STATUS_TXEMPTY_Pos          _UINT32_(16)                                         /* (SPW_LINK2_STATUS) TxEmpty Position */
#define SPW_LINK2_STATUS_TXEMPTY_Msk          (_UINT32_(0x1) << SPW_LINK2_STATUS_TXEMPTY_Pos)      /* (SPW_LINK2_STATUS) TxEmpty Mask */
#define SPW_LINK2_STATUS_TXEMPTY(value)       (SPW_LINK2_STATUS_TXEMPTY_Msk & (_UINT32_(value) << SPW_LINK2_STATUS_TXEMPTY_Pos)) /* Assigment of value for TXEMPTY in the SPW_LINK2_STATUS register */
#define SPW_LINK2_STATUS_GOTNULL_Pos          _UINT32_(17)                                         /* (SPW_LINK2_STATUS) GotNull Position */
#define SPW_LINK2_STATUS_GOTNULL_Msk          (_UINT32_(0x1) << SPW_LINK2_STATUS_GOTNULL_Pos)      /* (SPW_LINK2_STATUS) GotNull Mask */
#define SPW_LINK2_STATUS_GOTNULL(value)       (SPW_LINK2_STATUS_GOTNULL_Msk & (_UINT32_(value) << SPW_LINK2_STATUS_GOTNULL_Pos)) /* Assigment of value for GOTNULL in the SPW_LINK2_STATUS register */
#define SPW_LINK2_STATUS_GOTFCT_Pos           _UINT32_(18)                                         /* (SPW_LINK2_STATUS) GotFCT Position */
#define SPW_LINK2_STATUS_GOTFCT_Msk           (_UINT32_(0x1) << SPW_LINK2_STATUS_GOTFCT_Pos)       /* (SPW_LINK2_STATUS) GotFCT Mask */
#define SPW_LINK2_STATUS_GOTFCT(value)        (SPW_LINK2_STATUS_GOTFCT_Msk & (_UINT32_(value) << SPW_LINK2_STATUS_GOTFCT_Pos)) /* Assigment of value for GOTFCT in the SPW_LINK2_STATUS register */
#define SPW_LINK2_STATUS_GOTNCHAR_Pos         _UINT32_(19)                                         /* (SPW_LINK2_STATUS) GotNChar Position */
#define SPW_LINK2_STATUS_GOTNCHAR_Msk         (_UINT32_(0x1) << SPW_LINK2_STATUS_GOTNCHAR_Pos)     /* (SPW_LINK2_STATUS) GotNChar Mask */
#define SPW_LINK2_STATUS_GOTNCHAR(value)      (SPW_LINK2_STATUS_GOTNCHAR_Msk & (_UINT32_(value) << SPW_LINK2_STATUS_GOTNCHAR_Pos)) /* Assigment of value for GOTNCHAR in the SPW_LINK2_STATUS register */
#define SPW_LINK2_STATUS_SEEN0_Pos            _UINT32_(20)                                         /* (SPW_LINK2_STATUS) SEEN0 Position */
#define SPW_LINK2_STATUS_SEEN0_Msk            (_UINT32_(0x1) << SPW_LINK2_STATUS_SEEN0_Pos)        /* (SPW_LINK2_STATUS) SEEN0 Mask */
#define SPW_LINK2_STATUS_SEEN0(value)         (SPW_LINK2_STATUS_SEEN0_Msk & (_UINT32_(value) << SPW_LINK2_STATUS_SEEN0_Pos)) /* Assigment of value for SEEN0 in the SPW_LINK2_STATUS register */
#define SPW_LINK2_STATUS_SEEN1_Pos            _UINT32_(21)                                         /* (SPW_LINK2_STATUS) SEEN1 Position */
#define SPW_LINK2_STATUS_SEEN1_Msk            (_UINT32_(0x1) << SPW_LINK2_STATUS_SEEN1_Pos)        /* (SPW_LINK2_STATUS) SEEN1 Mask */
#define SPW_LINK2_STATUS_SEEN1(value)         (SPW_LINK2_STATUS_SEEN1_Msk & (_UINT32_(value) << SPW_LINK2_STATUS_SEEN1_Pos)) /* Assigment of value for SEEN1 in the SPW_LINK2_STATUS register */
#define SPW_LINK2_STATUS_SEEN2_Pos            _UINT32_(22)                                         /* (SPW_LINK2_STATUS) SEEN2 Position */
#define SPW_LINK2_STATUS_SEEN2_Msk            (_UINT32_(0x1) << SPW_LINK2_STATUS_SEEN2_Pos)        /* (SPW_LINK2_STATUS) SEEN2 Mask */
#define SPW_LINK2_STATUS_SEEN2(value)         (SPW_LINK2_STATUS_SEEN2_Msk & (_UINT32_(value) << SPW_LINK2_STATUS_SEEN2_Pos)) /* Assigment of value for SEEN2 in the SPW_LINK2_STATUS register */
#define SPW_LINK2_STATUS_SEEN3_Pos            _UINT32_(23)                                         /* (SPW_LINK2_STATUS) SEEN3 Position */
#define SPW_LINK2_STATUS_SEEN3_Msk            (_UINT32_(0x1) << SPW_LINK2_STATUS_SEEN3_Pos)        /* (SPW_LINK2_STATUS) SEEN3 Mask */
#define SPW_LINK2_STATUS_SEEN3(value)         (SPW_LINK2_STATUS_SEEN3_Msk & (_UINT32_(value) << SPW_LINK2_STATUS_SEEN3_Pos)) /* Assigment of value for SEEN3 in the SPW_LINK2_STATUS register */
#define SPW_LINK2_STATUS_SEEN4_Pos            _UINT32_(24)                                         /* (SPW_LINK2_STATUS) SEEN4 Position */
#define SPW_LINK2_STATUS_SEEN4_Msk            (_UINT32_(0x1) << SPW_LINK2_STATUS_SEEN4_Pos)        /* (SPW_LINK2_STATUS) SEEN4 Mask */
#define SPW_LINK2_STATUS_SEEN4(value)         (SPW_LINK2_STATUS_SEEN4_Msk & (_UINT32_(value) << SPW_LINK2_STATUS_SEEN4_Pos)) /* Assigment of value for SEEN4 in the SPW_LINK2_STATUS register */
#define SPW_LINK2_STATUS_SEEN5_Pos            _UINT32_(25)                                         /* (SPW_LINK2_STATUS) SEEN5 Position */
#define SPW_LINK2_STATUS_SEEN5_Msk            (_UINT32_(0x1) << SPW_LINK2_STATUS_SEEN5_Pos)        /* (SPW_LINK2_STATUS) SEEN5 Mask */
#define SPW_LINK2_STATUS_SEEN5(value)         (SPW_LINK2_STATUS_SEEN5_Msk & (_UINT32_(value) << SPW_LINK2_STATUS_SEEN5_Pos)) /* Assigment of value for SEEN5 in the SPW_LINK2_STATUS register */
#define SPW_LINK2_STATUS_Msk                  _UINT32_(0x03FF01F7)                                 /* (SPW_LINK2_STATUS) Register Mask  */

#define SPW_LINK2_STATUS_SEEN_Pos             _UINT32_(20)                                         /* (SPW_LINK2_STATUS Position) SEEN5 */
#define SPW_LINK2_STATUS_SEEN_Msk             (_UINT32_(0x3F) << SPW_LINK2_STATUS_SEEN_Pos)        /* (SPW_LINK2_STATUS Mask) SEEN */
#define SPW_LINK2_STATUS_SEEN(value)          (SPW_LINK2_STATUS_SEEN_Msk & (_UINT32_(value) << SPW_LINK2_STATUS_SEEN_Pos)) 

/* -------- SPW_LINK2_SWRESET : (SPW Offset: 0x4AC) (R/W 32) SpW Link 2 Software Reset -------- */
#define SPW_LINK2_SWRESET_PATTERN_Pos         _UINT32_(0)                                          /* (SPW_LINK2_SWRESET) Pattern Position */
#define SPW_LINK2_SWRESET_PATTERN_Msk         (_UINT32_(0xFFFFFFFF) << SPW_LINK2_SWRESET_PATTERN_Pos) /* (SPW_LINK2_SWRESET) Pattern Mask */
#define SPW_LINK2_SWRESET_PATTERN(value)      (SPW_LINK2_SWRESET_PATTERN_Msk & (_UINT32_(value) << SPW_LINK2_SWRESET_PATTERN_Pos)) /* Assigment of value for PATTERN in the SPW_LINK2_SWRESET register */
#define SPW_LINK2_SWRESET_Msk                 _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK2_SWRESET) Register Mask  */


/* -------- SPW_LINK2_ESCCHAREVENT0 : (SPW Offset: 0x4B0) (R/W 32) SpW Link 2 Escape Character Event 0 -------- */
#define SPW_LINK2_ESCCHAREVENT0_VALUE_Pos     _UINT32_(0)                                          /* (SPW_LINK2_ESCCHAREVENT0) Value Position */
#define SPW_LINK2_ESCCHAREVENT0_VALUE_Msk     (_UINT32_(0xFF) << SPW_LINK2_ESCCHAREVENT0_VALUE_Pos) /* (SPW_LINK2_ESCCHAREVENT0) Value Mask */
#define SPW_LINK2_ESCCHAREVENT0_VALUE(value)  (SPW_LINK2_ESCCHAREVENT0_VALUE_Msk & (_UINT32_(value) << SPW_LINK2_ESCCHAREVENT0_VALUE_Pos)) /* Assigment of value for VALUE in the SPW_LINK2_ESCCHAREVENT0 register */
#define SPW_LINK2_ESCCHAREVENT0_MASK_Pos      _UINT32_(8)                                          /* (SPW_LINK2_ESCCHAREVENT0) Mask Position */
#define SPW_LINK2_ESCCHAREVENT0_MASK_Msk      (_UINT32_(0xFF) << SPW_LINK2_ESCCHAREVENT0_MASK_Pos) /* (SPW_LINK2_ESCCHAREVENT0) Mask Mask */
#define SPW_LINK2_ESCCHAREVENT0_MASK(value)   (SPW_LINK2_ESCCHAREVENT0_MASK_Msk & (_UINT32_(value) << SPW_LINK2_ESCCHAREVENT0_MASK_Pos)) /* Assigment of value for MASK in the SPW_LINK2_ESCCHAREVENT0 register */
#define SPW_LINK2_ESCCHAREVENT0_ACTIVE_Pos    _UINT32_(16)                                         /* (SPW_LINK2_ESCCHAREVENT0) Active Position */
#define SPW_LINK2_ESCCHAREVENT0_ACTIVE_Msk    (_UINT32_(0x1) << SPW_LINK2_ESCCHAREVENT0_ACTIVE_Pos) /* (SPW_LINK2_ESCCHAREVENT0) Active Mask */
#define SPW_LINK2_ESCCHAREVENT0_ACTIVE(value) (SPW_LINK2_ESCCHAREVENT0_ACTIVE_Msk & (_UINT32_(value) << SPW_LINK2_ESCCHAREVENT0_ACTIVE_Pos)) /* Assigment of value for ACTIVE in the SPW_LINK2_ESCCHAREVENT0 register */
#define SPW_LINK2_ESCCHAREVENT0_HWEVENT_Pos   _UINT32_(17)                                         /* (SPW_LINK2_ESCCHAREVENT0) HwEvent Position */
#define SPW_LINK2_ESCCHAREVENT0_HWEVENT_Msk   (_UINT32_(0x1) << SPW_LINK2_ESCCHAREVENT0_HWEVENT_Pos) /* (SPW_LINK2_ESCCHAREVENT0) HwEvent Mask */
#define SPW_LINK2_ESCCHAREVENT0_HWEVENT(value) (SPW_LINK2_ESCCHAREVENT0_HWEVENT_Msk & (_UINT32_(value) << SPW_LINK2_ESCCHAREVENT0_HWEVENT_Pos)) /* Assigment of value for HWEVENT in the SPW_LINK2_ESCCHAREVENT0 register */
#define SPW_LINK2_ESCCHAREVENT0_Msk           _UINT32_(0x0003FFFF)                                 /* (SPW_LINK2_ESCCHAREVENT0) Register Mask  */


/* -------- SPW_LINK2_ESCCHAREVENT1 : (SPW Offset: 0x4B4) (R/W 32) SpW Link 2 Escape Character Event 1 -------- */
#define SPW_LINK2_ESCCHAREVENT1_VALUE_Pos     _UINT32_(0)                                          /* (SPW_LINK2_ESCCHAREVENT1) Value Position */
#define SPW_LINK2_ESCCHAREVENT1_VALUE_Msk     (_UINT32_(0xFF) << SPW_LINK2_ESCCHAREVENT1_VALUE_Pos) /* (SPW_LINK2_ESCCHAREVENT1) Value Mask */
#define SPW_LINK2_ESCCHAREVENT1_VALUE(value)  (SPW_LINK2_ESCCHAREVENT1_VALUE_Msk & (_UINT32_(value) << SPW_LINK2_ESCCHAREVENT1_VALUE_Pos)) /* Assigment of value for VALUE in the SPW_LINK2_ESCCHAREVENT1 register */
#define SPW_LINK2_ESCCHAREVENT1_MASK_Pos      _UINT32_(8)                                          /* (SPW_LINK2_ESCCHAREVENT1) Mask Position */
#define SPW_LINK2_ESCCHAREVENT1_MASK_Msk      (_UINT32_(0xFF) << SPW_LINK2_ESCCHAREVENT1_MASK_Pos) /* (SPW_LINK2_ESCCHAREVENT1) Mask Mask */
#define SPW_LINK2_ESCCHAREVENT1_MASK(value)   (SPW_LINK2_ESCCHAREVENT1_MASK_Msk & (_UINT32_(value) << SPW_LINK2_ESCCHAREVENT1_MASK_Pos)) /* Assigment of value for MASK in the SPW_LINK2_ESCCHAREVENT1 register */
#define SPW_LINK2_ESCCHAREVENT1_ACTIVE_Pos    _UINT32_(16)                                         /* (SPW_LINK2_ESCCHAREVENT1) Active Position */
#define SPW_LINK2_ESCCHAREVENT1_ACTIVE_Msk    (_UINT32_(0x1) << SPW_LINK2_ESCCHAREVENT1_ACTIVE_Pos) /* (SPW_LINK2_ESCCHAREVENT1) Active Mask */
#define SPW_LINK2_ESCCHAREVENT1_ACTIVE(value) (SPW_LINK2_ESCCHAREVENT1_ACTIVE_Msk & (_UINT32_(value) << SPW_LINK2_ESCCHAREVENT1_ACTIVE_Pos)) /* Assigment of value for ACTIVE in the SPW_LINK2_ESCCHAREVENT1 register */
#define SPW_LINK2_ESCCHAREVENT1_HWEVENT_Pos   _UINT32_(17)                                         /* (SPW_LINK2_ESCCHAREVENT1) HwEvent Position */
#define SPW_LINK2_ESCCHAREVENT1_HWEVENT_Msk   (_UINT32_(0x1) << SPW_LINK2_ESCCHAREVENT1_HWEVENT_Pos) /* (SPW_LINK2_ESCCHAREVENT1) HwEvent Mask */
#define SPW_LINK2_ESCCHAREVENT1_HWEVENT(value) (SPW_LINK2_ESCCHAREVENT1_HWEVENT_Msk & (_UINT32_(value) << SPW_LINK2_ESCCHAREVENT1_HWEVENT_Pos)) /* Assigment of value for HWEVENT in the SPW_LINK2_ESCCHAREVENT1 register */
#define SPW_LINK2_ESCCHAREVENT1_Msk           _UINT32_(0x0003FFFF)                                 /* (SPW_LINK2_ESCCHAREVENT1) Register Mask  */


/* -------- SPW_LINK2_ESCCHARSTS : (SPW Offset: 0x4B8) ( R/ 32) SpW Link 2 Escape Character Status -------- */
#define SPW_LINK2_ESCCHARSTS_CHAR1_Pos        _UINT32_(0)                                          /* (SPW_LINK2_ESCCHARSTS) Esc Char 1 Position */
#define SPW_LINK2_ESCCHARSTS_CHAR1_Msk        (_UINT32_(0xFF) << SPW_LINK2_ESCCHARSTS_CHAR1_Pos)   /* (SPW_LINK2_ESCCHARSTS) Esc Char 1 Mask */
#define SPW_LINK2_ESCCHARSTS_CHAR1(value)     (SPW_LINK2_ESCCHARSTS_CHAR1_Msk & (_UINT32_(value) << SPW_LINK2_ESCCHARSTS_CHAR1_Pos)) /* Assigment of value for CHAR1 in the SPW_LINK2_ESCCHARSTS register */
#define SPW_LINK2_ESCCHARSTS_CHAR2_Pos        _UINT32_(8)                                          /* (SPW_LINK2_ESCCHARSTS) Esc Char 2 Position */
#define SPW_LINK2_ESCCHARSTS_CHAR2_Msk        (_UINT32_(0xFF) << SPW_LINK2_ESCCHARSTS_CHAR2_Pos)   /* (SPW_LINK2_ESCCHARSTS) Esc Char 2 Mask */
#define SPW_LINK2_ESCCHARSTS_CHAR2(value)     (SPW_LINK2_ESCCHARSTS_CHAR2_Msk & (_UINT32_(value) << SPW_LINK2_ESCCHARSTS_CHAR2_Pos)) /* Assigment of value for CHAR2 in the SPW_LINK2_ESCCHARSTS register */
#define SPW_LINK2_ESCCHARSTS_Msk              _UINT32_(0x0000FFFF)                                 /* (SPW_LINK2_ESCCHARSTS) Register Mask  */


/* -------- SPW_LINK2_TRANSESC : (SPW Offset: 0x4BC) (R/W 32) SpW Link 2 Transmit Escape Character -------- */
#define SPW_LINK2_TRANSESC_CHAR_Pos           _UINT32_(0)                                          /* (SPW_LINK2_TRANSESC) Character Position */
#define SPW_LINK2_TRANSESC_CHAR_Msk           (_UINT32_(0xFF) << SPW_LINK2_TRANSESC_CHAR_Pos)      /* (SPW_LINK2_TRANSESC) Character Mask */
#define SPW_LINK2_TRANSESC_CHAR(value)        (SPW_LINK2_TRANSESC_CHAR_Msk & (_UINT32_(value) << SPW_LINK2_TRANSESC_CHAR_Pos)) /* Assigment of value for CHAR in the SPW_LINK2_TRANSESC register */
#define SPW_LINK2_TRANSESC_Msk                _UINT32_(0x000000FF)                                 /* (SPW_LINK2_TRANSESC) Register Mask  */


/* -------- SPW_LINK2_DISTINTPI_RM : (SPW Offset: 0x4C0) ( R/ 32) SpW Link 2 Distributed Interrupt Pending Read Masked Interrupt -------- */
#define SPW_LINK2_DISTINTPI_RM_DI0_Pos        _UINT32_(0)                                          /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI0_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI0_Pos)    /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI0(value)     (SPW_LINK2_DISTINTPI_RM_DI0_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI0_Pos)) /* Assigment of value for DI0 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI1_Pos        _UINT32_(1)                                          /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI1_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI1_Pos)    /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI1(value)     (SPW_LINK2_DISTINTPI_RM_DI1_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI1_Pos)) /* Assigment of value for DI1 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI2_Pos        _UINT32_(2)                                          /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI2_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI2_Pos)    /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI2(value)     (SPW_LINK2_DISTINTPI_RM_DI2_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI2_Pos)) /* Assigment of value for DI2 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI3_Pos        _UINT32_(3)                                          /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI3_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI3_Pos)    /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI3(value)     (SPW_LINK2_DISTINTPI_RM_DI3_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI3_Pos)) /* Assigment of value for DI3 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI4_Pos        _UINT32_(4)                                          /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI4_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI4_Pos)    /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI4(value)     (SPW_LINK2_DISTINTPI_RM_DI4_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI4_Pos)) /* Assigment of value for DI4 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI5_Pos        _UINT32_(5)                                          /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI5_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI5_Pos)    /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI5(value)     (SPW_LINK2_DISTINTPI_RM_DI5_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI5_Pos)) /* Assigment of value for DI5 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI6_Pos        _UINT32_(6)                                          /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI6_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI6_Pos)    /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI6(value)     (SPW_LINK2_DISTINTPI_RM_DI6_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI6_Pos)) /* Assigment of value for DI6 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI7_Pos        _UINT32_(7)                                          /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI7_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI7_Pos)    /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI7(value)     (SPW_LINK2_DISTINTPI_RM_DI7_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI7_Pos)) /* Assigment of value for DI7 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI8_Pos        _UINT32_(8)                                          /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI8_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI8_Pos)    /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI8(value)     (SPW_LINK2_DISTINTPI_RM_DI8_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI8_Pos)) /* Assigment of value for DI8 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI9_Pos        _UINT32_(9)                                          /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI9_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI9_Pos)    /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI9(value)     (SPW_LINK2_DISTINTPI_RM_DI9_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI9_Pos)) /* Assigment of value for DI9 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI10_Pos       _UINT32_(10)                                         /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI10_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI10_Pos)   /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI10(value)    (SPW_LINK2_DISTINTPI_RM_DI10_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI10_Pos)) /* Assigment of value for DI10 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI11_Pos       _UINT32_(11)                                         /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI11_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI11_Pos)   /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI11(value)    (SPW_LINK2_DISTINTPI_RM_DI11_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI11_Pos)) /* Assigment of value for DI11 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI12_Pos       _UINT32_(12)                                         /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI12_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI12_Pos)   /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI12(value)    (SPW_LINK2_DISTINTPI_RM_DI12_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI12_Pos)) /* Assigment of value for DI12 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI13_Pos       _UINT32_(13)                                         /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI13_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI13_Pos)   /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI13(value)    (SPW_LINK2_DISTINTPI_RM_DI13_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI13_Pos)) /* Assigment of value for DI13 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI14_Pos       _UINT32_(14)                                         /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI14_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI14_Pos)   /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI14(value)    (SPW_LINK2_DISTINTPI_RM_DI14_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI14_Pos)) /* Assigment of value for DI14 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI15_Pos       _UINT32_(15)                                         /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI15_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI15_Pos)   /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI15(value)    (SPW_LINK2_DISTINTPI_RM_DI15_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI15_Pos)) /* Assigment of value for DI15 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI16_Pos       _UINT32_(16)                                         /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI16_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI16_Pos)   /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI16(value)    (SPW_LINK2_DISTINTPI_RM_DI16_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI16_Pos)) /* Assigment of value for DI16 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI17_Pos       _UINT32_(17)                                         /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI17_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI17_Pos)   /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI17(value)    (SPW_LINK2_DISTINTPI_RM_DI17_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI17_Pos)) /* Assigment of value for DI17 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI18_Pos       _UINT32_(18)                                         /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI18_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI18_Pos)   /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI18(value)    (SPW_LINK2_DISTINTPI_RM_DI18_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI18_Pos)) /* Assigment of value for DI18 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI19_Pos       _UINT32_(19)                                         /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI19_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI19_Pos)   /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI19(value)    (SPW_LINK2_DISTINTPI_RM_DI19_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI19_Pos)) /* Assigment of value for DI19 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI20_Pos       _UINT32_(20)                                         /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI20_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI20_Pos)   /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI20(value)    (SPW_LINK2_DISTINTPI_RM_DI20_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI20_Pos)) /* Assigment of value for DI20 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI21_Pos       _UINT32_(21)                                         /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI21_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI21_Pos)   /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI21(value)    (SPW_LINK2_DISTINTPI_RM_DI21_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI21_Pos)) /* Assigment of value for DI21 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI22_Pos       _UINT32_(22)                                         /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI22_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI22_Pos)   /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI22(value)    (SPW_LINK2_DISTINTPI_RM_DI22_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI22_Pos)) /* Assigment of value for DI22 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI23_Pos       _UINT32_(23)                                         /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI23_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI23_Pos)   /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI23(value)    (SPW_LINK2_DISTINTPI_RM_DI23_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI23_Pos)) /* Assigment of value for DI23 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI24_Pos       _UINT32_(24)                                         /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI24_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI24_Pos)   /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI24(value)    (SPW_LINK2_DISTINTPI_RM_DI24_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI24_Pos)) /* Assigment of value for DI24 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI25_Pos       _UINT32_(25)                                         /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI25_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI25_Pos)   /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI25(value)    (SPW_LINK2_DISTINTPI_RM_DI25_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI25_Pos)) /* Assigment of value for DI25 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI26_Pos       _UINT32_(26)                                         /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI26_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI26_Pos)   /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI26(value)    (SPW_LINK2_DISTINTPI_RM_DI26_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI26_Pos)) /* Assigment of value for DI26 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI27_Pos       _UINT32_(27)                                         /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI27_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI27_Pos)   /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI27(value)    (SPW_LINK2_DISTINTPI_RM_DI27_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI27_Pos)) /* Assigment of value for DI27 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI28_Pos       _UINT32_(28)                                         /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI28_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI28_Pos)   /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI28(value)    (SPW_LINK2_DISTINTPI_RM_DI28_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI28_Pos)) /* Assigment of value for DI28 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI29_Pos       _UINT32_(29)                                         /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI29_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI29_Pos)   /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI29(value)    (SPW_LINK2_DISTINTPI_RM_DI29_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI29_Pos)) /* Assigment of value for DI29 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI30_Pos       _UINT32_(30)                                         /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI30_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI30_Pos)   /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI30(value)    (SPW_LINK2_DISTINTPI_RM_DI30_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI30_Pos)) /* Assigment of value for DI30 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_DI31_Pos       _UINT32_(31)                                         /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RM_DI31_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RM_DI31_Pos)   /* (SPW_LINK2_DISTINTPI_RM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RM_DI31(value)    (SPW_LINK2_DISTINTPI_RM_DI31_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI31_Pos)) /* Assigment of value for DI31 in the SPW_LINK2_DISTINTPI_RM register */
#define SPW_LINK2_DISTINTPI_RM_Msk            _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK2_DISTINTPI_RM) Register Mask  */

#define SPW_LINK2_DISTINTPI_RM_DI_Pos         _UINT32_(0)                                          /* (SPW_LINK2_DISTINTPI_RM Position) Distributed Interrupt */
#define SPW_LINK2_DISTINTPI_RM_DI_Msk         (_UINT32_(0xFFFFFFFF) << SPW_LINK2_DISTINTPI_RM_DI_Pos) /* (SPW_LINK2_DISTINTPI_RM Mask) DI */
#define SPW_LINK2_DISTINTPI_RM_DI(value)      (SPW_LINK2_DISTINTPI_RM_DI_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RM_DI_Pos)) 

/* -------- SPW_LINK2_DISTINTPI_RCM : (SPW Offset: 0x4C4) ( R/ 32) SpW Link 2 Distributed Interrupt Pending Read and Clear Masked Interrupt -------- */
#define SPW_LINK2_DISTINTPI_RCM_DI0_Pos       _UINT32_(0)                                          /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI0_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI0_Pos)   /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI0(value)    (SPW_LINK2_DISTINTPI_RCM_DI0_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI0_Pos)) /* Assigment of value for DI0 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI1_Pos       _UINT32_(1)                                          /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI1_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI1_Pos)   /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI1(value)    (SPW_LINK2_DISTINTPI_RCM_DI1_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI1_Pos)) /* Assigment of value for DI1 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI2_Pos       _UINT32_(2)                                          /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI2_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI2_Pos)   /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI2(value)    (SPW_LINK2_DISTINTPI_RCM_DI2_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI2_Pos)) /* Assigment of value for DI2 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI3_Pos       _UINT32_(3)                                          /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI3_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI3_Pos)   /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI3(value)    (SPW_LINK2_DISTINTPI_RCM_DI3_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI3_Pos)) /* Assigment of value for DI3 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI4_Pos       _UINT32_(4)                                          /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI4_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI4_Pos)   /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI4(value)    (SPW_LINK2_DISTINTPI_RCM_DI4_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI4_Pos)) /* Assigment of value for DI4 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI5_Pos       _UINT32_(5)                                          /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI5_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI5_Pos)   /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI5(value)    (SPW_LINK2_DISTINTPI_RCM_DI5_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI5_Pos)) /* Assigment of value for DI5 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI6_Pos       _UINT32_(6)                                          /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI6_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI6_Pos)   /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI6(value)    (SPW_LINK2_DISTINTPI_RCM_DI6_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI6_Pos)) /* Assigment of value for DI6 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI7_Pos       _UINT32_(7)                                          /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI7_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI7_Pos)   /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI7(value)    (SPW_LINK2_DISTINTPI_RCM_DI7_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI7_Pos)) /* Assigment of value for DI7 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI8_Pos       _UINT32_(8)                                          /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI8_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI8_Pos)   /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI8(value)    (SPW_LINK2_DISTINTPI_RCM_DI8_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI8_Pos)) /* Assigment of value for DI8 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI9_Pos       _UINT32_(9)                                          /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI9_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI9_Pos)   /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI9(value)    (SPW_LINK2_DISTINTPI_RCM_DI9_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI9_Pos)) /* Assigment of value for DI9 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI10_Pos      _UINT32_(10)                                         /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI10_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI10_Pos)  /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI10(value)   (SPW_LINK2_DISTINTPI_RCM_DI10_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI10_Pos)) /* Assigment of value for DI10 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI11_Pos      _UINT32_(11)                                         /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI11_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI11_Pos)  /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI11(value)   (SPW_LINK2_DISTINTPI_RCM_DI11_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI11_Pos)) /* Assigment of value for DI11 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI12_Pos      _UINT32_(12)                                         /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI12_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI12_Pos)  /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI12(value)   (SPW_LINK2_DISTINTPI_RCM_DI12_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI12_Pos)) /* Assigment of value for DI12 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI13_Pos      _UINT32_(13)                                         /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI13_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI13_Pos)  /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI13(value)   (SPW_LINK2_DISTINTPI_RCM_DI13_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI13_Pos)) /* Assigment of value for DI13 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI14_Pos      _UINT32_(14)                                         /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI14_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI14_Pos)  /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI14(value)   (SPW_LINK2_DISTINTPI_RCM_DI14_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI14_Pos)) /* Assigment of value for DI14 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI15_Pos      _UINT32_(15)                                         /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI15_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI15_Pos)  /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI15(value)   (SPW_LINK2_DISTINTPI_RCM_DI15_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI15_Pos)) /* Assigment of value for DI15 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI16_Pos      _UINT32_(16)                                         /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI16_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI16_Pos)  /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI16(value)   (SPW_LINK2_DISTINTPI_RCM_DI16_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI16_Pos)) /* Assigment of value for DI16 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI17_Pos      _UINT32_(17)                                         /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI17_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI17_Pos)  /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI17(value)   (SPW_LINK2_DISTINTPI_RCM_DI17_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI17_Pos)) /* Assigment of value for DI17 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI18_Pos      _UINT32_(18)                                         /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI18_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI18_Pos)  /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI18(value)   (SPW_LINK2_DISTINTPI_RCM_DI18_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI18_Pos)) /* Assigment of value for DI18 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI19_Pos      _UINT32_(19)                                         /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI19_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI19_Pos)  /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI19(value)   (SPW_LINK2_DISTINTPI_RCM_DI19_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI19_Pos)) /* Assigment of value for DI19 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI20_Pos      _UINT32_(20)                                         /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI20_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI20_Pos)  /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI20(value)   (SPW_LINK2_DISTINTPI_RCM_DI20_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI20_Pos)) /* Assigment of value for DI20 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI21_Pos      _UINT32_(21)                                         /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI21_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI21_Pos)  /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI21(value)   (SPW_LINK2_DISTINTPI_RCM_DI21_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI21_Pos)) /* Assigment of value for DI21 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI22_Pos      _UINT32_(22)                                         /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI22_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI22_Pos)  /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI22(value)   (SPW_LINK2_DISTINTPI_RCM_DI22_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI22_Pos)) /* Assigment of value for DI22 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI23_Pos      _UINT32_(23)                                         /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI23_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI23_Pos)  /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI23(value)   (SPW_LINK2_DISTINTPI_RCM_DI23_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI23_Pos)) /* Assigment of value for DI23 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI24_Pos      _UINT32_(24)                                         /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI24_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI24_Pos)  /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI24(value)   (SPW_LINK2_DISTINTPI_RCM_DI24_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI24_Pos)) /* Assigment of value for DI24 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI25_Pos      _UINT32_(25)                                         /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI25_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI25_Pos)  /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI25(value)   (SPW_LINK2_DISTINTPI_RCM_DI25_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI25_Pos)) /* Assigment of value for DI25 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI26_Pos      _UINT32_(26)                                         /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI26_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI26_Pos)  /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI26(value)   (SPW_LINK2_DISTINTPI_RCM_DI26_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI26_Pos)) /* Assigment of value for DI26 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI27_Pos      _UINT32_(27)                                         /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI27_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI27_Pos)  /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI27(value)   (SPW_LINK2_DISTINTPI_RCM_DI27_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI27_Pos)) /* Assigment of value for DI27 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI28_Pos      _UINT32_(28)                                         /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI28_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI28_Pos)  /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI28(value)   (SPW_LINK2_DISTINTPI_RCM_DI28_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI28_Pos)) /* Assigment of value for DI28 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI29_Pos      _UINT32_(29)                                         /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI29_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI29_Pos)  /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI29(value)   (SPW_LINK2_DISTINTPI_RCM_DI29_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI29_Pos)) /* Assigment of value for DI29 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI30_Pos      _UINT32_(30)                                         /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI30_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI30_Pos)  /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI30(value)   (SPW_LINK2_DISTINTPI_RCM_DI30_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI30_Pos)) /* Assigment of value for DI30 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_DI31_Pos      _UINT32_(31)                                         /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCM_DI31_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCM_DI31_Pos)  /* (SPW_LINK2_DISTINTPI_RCM) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCM_DI31(value)   (SPW_LINK2_DISTINTPI_RCM_DI31_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI31_Pos)) /* Assigment of value for DI31 in the SPW_LINK2_DISTINTPI_RCM register */
#define SPW_LINK2_DISTINTPI_RCM_Msk           _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK2_DISTINTPI_RCM) Register Mask  */

#define SPW_LINK2_DISTINTPI_RCM_DI_Pos        _UINT32_(0)                                          /* (SPW_LINK2_DISTINTPI_RCM Position) Distributed Interrupt */
#define SPW_LINK2_DISTINTPI_RCM_DI_Msk        (_UINT32_(0xFFFFFFFF) << SPW_LINK2_DISTINTPI_RCM_DI_Pos) /* (SPW_LINK2_DISTINTPI_RCM Mask) DI */
#define SPW_LINK2_DISTINTPI_RCM_DI(value)     (SPW_LINK2_DISTINTPI_RCM_DI_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCM_DI_Pos)) 

/* -------- SPW_LINK2_DISTINTPI_R : (SPW Offset: 0x4C8) ( R/ 32) SpW Link 2 Distributed Interrupt Pending Read Interrupt -------- */
#define SPW_LINK2_DISTINTPI_R_DI0_Pos         _UINT32_(0)                                          /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI0_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI0_Pos)     /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI0(value)      (SPW_LINK2_DISTINTPI_R_DI0_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI0_Pos)) /* Assigment of value for DI0 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI1_Pos         _UINT32_(1)                                          /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI1_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI1_Pos)     /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI1(value)      (SPW_LINK2_DISTINTPI_R_DI1_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI1_Pos)) /* Assigment of value for DI1 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI2_Pos         _UINT32_(2)                                          /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI2_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI2_Pos)     /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI2(value)      (SPW_LINK2_DISTINTPI_R_DI2_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI2_Pos)) /* Assigment of value for DI2 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI3_Pos         _UINT32_(3)                                          /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI3_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI3_Pos)     /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI3(value)      (SPW_LINK2_DISTINTPI_R_DI3_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI3_Pos)) /* Assigment of value for DI3 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI4_Pos         _UINT32_(4)                                          /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI4_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI4_Pos)     /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI4(value)      (SPW_LINK2_DISTINTPI_R_DI4_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI4_Pos)) /* Assigment of value for DI4 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI5_Pos         _UINT32_(5)                                          /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI5_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI5_Pos)     /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI5(value)      (SPW_LINK2_DISTINTPI_R_DI5_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI5_Pos)) /* Assigment of value for DI5 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI6_Pos         _UINT32_(6)                                          /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI6_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI6_Pos)     /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI6(value)      (SPW_LINK2_DISTINTPI_R_DI6_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI6_Pos)) /* Assigment of value for DI6 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI7_Pos         _UINT32_(7)                                          /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI7_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI7_Pos)     /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI7(value)      (SPW_LINK2_DISTINTPI_R_DI7_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI7_Pos)) /* Assigment of value for DI7 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI8_Pos         _UINT32_(8)                                          /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI8_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI8_Pos)     /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI8(value)      (SPW_LINK2_DISTINTPI_R_DI8_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI8_Pos)) /* Assigment of value for DI8 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI9_Pos         _UINT32_(9)                                          /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI9_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI9_Pos)     /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI9(value)      (SPW_LINK2_DISTINTPI_R_DI9_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI9_Pos)) /* Assigment of value for DI9 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI10_Pos        _UINT32_(10)                                         /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI10_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI10_Pos)    /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI10(value)     (SPW_LINK2_DISTINTPI_R_DI10_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI10_Pos)) /* Assigment of value for DI10 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI11_Pos        _UINT32_(11)                                         /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI11_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI11_Pos)    /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI11(value)     (SPW_LINK2_DISTINTPI_R_DI11_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI11_Pos)) /* Assigment of value for DI11 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI12_Pos        _UINT32_(12)                                         /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI12_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI12_Pos)    /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI12(value)     (SPW_LINK2_DISTINTPI_R_DI12_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI12_Pos)) /* Assigment of value for DI12 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI13_Pos        _UINT32_(13)                                         /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI13_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI13_Pos)    /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI13(value)     (SPW_LINK2_DISTINTPI_R_DI13_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI13_Pos)) /* Assigment of value for DI13 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI14_Pos        _UINT32_(14)                                         /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI14_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI14_Pos)    /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI14(value)     (SPW_LINK2_DISTINTPI_R_DI14_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI14_Pos)) /* Assigment of value for DI14 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI15_Pos        _UINT32_(15)                                         /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI15_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI15_Pos)    /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI15(value)     (SPW_LINK2_DISTINTPI_R_DI15_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI15_Pos)) /* Assigment of value for DI15 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI16_Pos        _UINT32_(16)                                         /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI16_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI16_Pos)    /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI16(value)     (SPW_LINK2_DISTINTPI_R_DI16_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI16_Pos)) /* Assigment of value for DI16 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI17_Pos        _UINT32_(17)                                         /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI17_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI17_Pos)    /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI17(value)     (SPW_LINK2_DISTINTPI_R_DI17_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI17_Pos)) /* Assigment of value for DI17 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI18_Pos        _UINT32_(18)                                         /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI18_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI18_Pos)    /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI18(value)     (SPW_LINK2_DISTINTPI_R_DI18_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI18_Pos)) /* Assigment of value for DI18 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI19_Pos        _UINT32_(19)                                         /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI19_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI19_Pos)    /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI19(value)     (SPW_LINK2_DISTINTPI_R_DI19_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI19_Pos)) /* Assigment of value for DI19 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI20_Pos        _UINT32_(20)                                         /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI20_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI20_Pos)    /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI20(value)     (SPW_LINK2_DISTINTPI_R_DI20_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI20_Pos)) /* Assigment of value for DI20 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI21_Pos        _UINT32_(21)                                         /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI21_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI21_Pos)    /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI21(value)     (SPW_LINK2_DISTINTPI_R_DI21_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI21_Pos)) /* Assigment of value for DI21 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI22_Pos        _UINT32_(22)                                         /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI22_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI22_Pos)    /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI22(value)     (SPW_LINK2_DISTINTPI_R_DI22_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI22_Pos)) /* Assigment of value for DI22 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI23_Pos        _UINT32_(23)                                         /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI23_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI23_Pos)    /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI23(value)     (SPW_LINK2_DISTINTPI_R_DI23_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI23_Pos)) /* Assigment of value for DI23 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI24_Pos        _UINT32_(24)                                         /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI24_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI24_Pos)    /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI24(value)     (SPW_LINK2_DISTINTPI_R_DI24_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI24_Pos)) /* Assigment of value for DI24 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI25_Pos        _UINT32_(25)                                         /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI25_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI25_Pos)    /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI25(value)     (SPW_LINK2_DISTINTPI_R_DI25_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI25_Pos)) /* Assigment of value for DI25 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI26_Pos        _UINT32_(26)                                         /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI26_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI26_Pos)    /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI26(value)     (SPW_LINK2_DISTINTPI_R_DI26_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI26_Pos)) /* Assigment of value for DI26 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI27_Pos        _UINT32_(27)                                         /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI27_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI27_Pos)    /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI27(value)     (SPW_LINK2_DISTINTPI_R_DI27_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI27_Pos)) /* Assigment of value for DI27 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI28_Pos        _UINT32_(28)                                         /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI28_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI28_Pos)    /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI28(value)     (SPW_LINK2_DISTINTPI_R_DI28_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI28_Pos)) /* Assigment of value for DI28 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI29_Pos        _UINT32_(29)                                         /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI29_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI29_Pos)    /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI29(value)     (SPW_LINK2_DISTINTPI_R_DI29_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI29_Pos)) /* Assigment of value for DI29 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI30_Pos        _UINT32_(30)                                         /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI30_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI30_Pos)    /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI30(value)     (SPW_LINK2_DISTINTPI_R_DI30_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI30_Pos)) /* Assigment of value for DI30 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_DI31_Pos        _UINT32_(31)                                         /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_R_DI31_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_R_DI31_Pos)    /* (SPW_LINK2_DISTINTPI_R) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_R_DI31(value)     (SPW_LINK2_DISTINTPI_R_DI31_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI31_Pos)) /* Assigment of value for DI31 in the SPW_LINK2_DISTINTPI_R register */
#define SPW_LINK2_DISTINTPI_R_Msk             _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK2_DISTINTPI_R) Register Mask  */

#define SPW_LINK2_DISTINTPI_R_DI_Pos          _UINT32_(0)                                          /* (SPW_LINK2_DISTINTPI_R Position) Distributed Interrupt */
#define SPW_LINK2_DISTINTPI_R_DI_Msk          (_UINT32_(0xFFFFFFFF) << SPW_LINK2_DISTINTPI_R_DI_Pos) /* (SPW_LINK2_DISTINTPI_R Mask) DI */
#define SPW_LINK2_DISTINTPI_R_DI(value)       (SPW_LINK2_DISTINTPI_R_DI_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_R_DI_Pos)) 

/* -------- SPW_LINK2_DISTINTPI_RCS : (SPW Offset: 0x4CC) (R/W 32) SpW Link 2 Distributed Interrupt Pending Read and Clear Interrupt -------- */
#define SPW_LINK2_DISTINTPI_RCS_DI0_Pos       _UINT32_(0)                                          /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI0_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI0_Pos)   /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI0(value)    (SPW_LINK2_DISTINTPI_RCS_DI0_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI0_Pos)) /* Assigment of value for DI0 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI1_Pos       _UINT32_(1)                                          /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI1_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI1_Pos)   /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI1(value)    (SPW_LINK2_DISTINTPI_RCS_DI1_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI1_Pos)) /* Assigment of value for DI1 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI2_Pos       _UINT32_(2)                                          /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI2_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI2_Pos)   /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI2(value)    (SPW_LINK2_DISTINTPI_RCS_DI2_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI2_Pos)) /* Assigment of value for DI2 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI3_Pos       _UINT32_(3)                                          /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI3_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI3_Pos)   /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI3(value)    (SPW_LINK2_DISTINTPI_RCS_DI3_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI3_Pos)) /* Assigment of value for DI3 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI4_Pos       _UINT32_(4)                                          /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI4_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI4_Pos)   /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI4(value)    (SPW_LINK2_DISTINTPI_RCS_DI4_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI4_Pos)) /* Assigment of value for DI4 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI5_Pos       _UINT32_(5)                                          /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI5_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI5_Pos)   /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI5(value)    (SPW_LINK2_DISTINTPI_RCS_DI5_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI5_Pos)) /* Assigment of value for DI5 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI6_Pos       _UINT32_(6)                                          /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI6_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI6_Pos)   /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI6(value)    (SPW_LINK2_DISTINTPI_RCS_DI6_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI6_Pos)) /* Assigment of value for DI6 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI7_Pos       _UINT32_(7)                                          /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI7_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI7_Pos)   /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI7(value)    (SPW_LINK2_DISTINTPI_RCS_DI7_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI7_Pos)) /* Assigment of value for DI7 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI8_Pos       _UINT32_(8)                                          /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI8_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI8_Pos)   /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI8(value)    (SPW_LINK2_DISTINTPI_RCS_DI8_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI8_Pos)) /* Assigment of value for DI8 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI9_Pos       _UINT32_(9)                                          /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI9_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI9_Pos)   /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI9(value)    (SPW_LINK2_DISTINTPI_RCS_DI9_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI9_Pos)) /* Assigment of value for DI9 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI10_Pos      _UINT32_(10)                                         /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI10_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI10_Pos)  /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI10(value)   (SPW_LINK2_DISTINTPI_RCS_DI10_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI10_Pos)) /* Assigment of value for DI10 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI11_Pos      _UINT32_(11)                                         /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI11_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI11_Pos)  /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI11(value)   (SPW_LINK2_DISTINTPI_RCS_DI11_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI11_Pos)) /* Assigment of value for DI11 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI12_Pos      _UINT32_(12)                                         /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI12_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI12_Pos)  /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI12(value)   (SPW_LINK2_DISTINTPI_RCS_DI12_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI12_Pos)) /* Assigment of value for DI12 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI13_Pos      _UINT32_(13)                                         /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI13_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI13_Pos)  /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI13(value)   (SPW_LINK2_DISTINTPI_RCS_DI13_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI13_Pos)) /* Assigment of value for DI13 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI14_Pos      _UINT32_(14)                                         /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI14_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI14_Pos)  /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI14(value)   (SPW_LINK2_DISTINTPI_RCS_DI14_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI14_Pos)) /* Assigment of value for DI14 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI15_Pos      _UINT32_(15)                                         /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI15_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI15_Pos)  /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI15(value)   (SPW_LINK2_DISTINTPI_RCS_DI15_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI15_Pos)) /* Assigment of value for DI15 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI16_Pos      _UINT32_(16)                                         /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI16_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI16_Pos)  /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI16(value)   (SPW_LINK2_DISTINTPI_RCS_DI16_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI16_Pos)) /* Assigment of value for DI16 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI17_Pos      _UINT32_(17)                                         /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI17_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI17_Pos)  /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI17(value)   (SPW_LINK2_DISTINTPI_RCS_DI17_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI17_Pos)) /* Assigment of value for DI17 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI18_Pos      _UINT32_(18)                                         /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI18_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI18_Pos)  /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI18(value)   (SPW_LINK2_DISTINTPI_RCS_DI18_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI18_Pos)) /* Assigment of value for DI18 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI19_Pos      _UINT32_(19)                                         /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI19_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI19_Pos)  /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI19(value)   (SPW_LINK2_DISTINTPI_RCS_DI19_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI19_Pos)) /* Assigment of value for DI19 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI20_Pos      _UINT32_(20)                                         /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI20_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI20_Pos)  /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI20(value)   (SPW_LINK2_DISTINTPI_RCS_DI20_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI20_Pos)) /* Assigment of value for DI20 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI21_Pos      _UINT32_(21)                                         /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI21_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI21_Pos)  /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI21(value)   (SPW_LINK2_DISTINTPI_RCS_DI21_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI21_Pos)) /* Assigment of value for DI21 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI22_Pos      _UINT32_(22)                                         /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI22_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI22_Pos)  /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI22(value)   (SPW_LINK2_DISTINTPI_RCS_DI22_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI22_Pos)) /* Assigment of value for DI22 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI23_Pos      _UINT32_(23)                                         /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI23_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI23_Pos)  /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI23(value)   (SPW_LINK2_DISTINTPI_RCS_DI23_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI23_Pos)) /* Assigment of value for DI23 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI24_Pos      _UINT32_(24)                                         /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI24_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI24_Pos)  /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI24(value)   (SPW_LINK2_DISTINTPI_RCS_DI24_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI24_Pos)) /* Assigment of value for DI24 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI25_Pos      _UINT32_(25)                                         /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI25_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI25_Pos)  /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI25(value)   (SPW_LINK2_DISTINTPI_RCS_DI25_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI25_Pos)) /* Assigment of value for DI25 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI26_Pos      _UINT32_(26)                                         /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI26_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI26_Pos)  /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI26(value)   (SPW_LINK2_DISTINTPI_RCS_DI26_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI26_Pos)) /* Assigment of value for DI26 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI27_Pos      _UINT32_(27)                                         /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI27_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI27_Pos)  /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI27(value)   (SPW_LINK2_DISTINTPI_RCS_DI27_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI27_Pos)) /* Assigment of value for DI27 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI28_Pos      _UINT32_(28)                                         /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI28_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI28_Pos)  /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI28(value)   (SPW_LINK2_DISTINTPI_RCS_DI28_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI28_Pos)) /* Assigment of value for DI28 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI29_Pos      _UINT32_(29)                                         /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI29_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI29_Pos)  /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI29(value)   (SPW_LINK2_DISTINTPI_RCS_DI29_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI29_Pos)) /* Assigment of value for DI29 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI30_Pos      _UINT32_(30)                                         /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI30_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI30_Pos)  /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI30(value)   (SPW_LINK2_DISTINTPI_RCS_DI30_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI30_Pos)) /* Assigment of value for DI30 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_DI31_Pos      _UINT32_(31)                                         /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_RCS_DI31_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_RCS_DI31_Pos)  /* (SPW_LINK2_DISTINTPI_RCS) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_RCS_DI31(value)   (SPW_LINK2_DISTINTPI_RCS_DI31_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI31_Pos)) /* Assigment of value for DI31 in the SPW_LINK2_DISTINTPI_RCS register */
#define SPW_LINK2_DISTINTPI_RCS_Msk           _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK2_DISTINTPI_RCS) Register Mask  */

#define SPW_LINK2_DISTINTPI_RCS_DI_Pos        _UINT32_(0)                                          /* (SPW_LINK2_DISTINTPI_RCS Position) Distributed Interrupt */
#define SPW_LINK2_DISTINTPI_RCS_DI_Msk        (_UINT32_(0xFFFFFFFF) << SPW_LINK2_DISTINTPI_RCS_DI_Pos) /* (SPW_LINK2_DISTINTPI_RCS Mask) DI */
#define SPW_LINK2_DISTINTPI_RCS_DI(value)     (SPW_LINK2_DISTINTPI_RCS_DI_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_RCS_DI_Pos)) 

/* -------- SPW_LINK2_DISTINTIM : (SPW Offset: 0x4D0) (R/W 32) SpW Link 2 Distributed Interrupt Mask -------- */
#define SPW_LINK2_DISTINTIM_DI0_Pos           _UINT32_(0)                                          /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI0_Msk           (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI0_Pos)       /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI0(value)        (SPW_LINK2_DISTINTIM_DI0_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI0_Pos)) /* Assigment of value for DI0 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI1_Pos           _UINT32_(1)                                          /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI1_Msk           (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI1_Pos)       /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI1(value)        (SPW_LINK2_DISTINTIM_DI1_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI1_Pos)) /* Assigment of value for DI1 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI2_Pos           _UINT32_(2)                                          /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI2_Msk           (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI2_Pos)       /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI2(value)        (SPW_LINK2_DISTINTIM_DI2_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI2_Pos)) /* Assigment of value for DI2 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI3_Pos           _UINT32_(3)                                          /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI3_Msk           (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI3_Pos)       /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI3(value)        (SPW_LINK2_DISTINTIM_DI3_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI3_Pos)) /* Assigment of value for DI3 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI4_Pos           _UINT32_(4)                                          /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI4_Msk           (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI4_Pos)       /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI4(value)        (SPW_LINK2_DISTINTIM_DI4_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI4_Pos)) /* Assigment of value for DI4 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI5_Pos           _UINT32_(5)                                          /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI5_Msk           (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI5_Pos)       /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI5(value)        (SPW_LINK2_DISTINTIM_DI5_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI5_Pos)) /* Assigment of value for DI5 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI6_Pos           _UINT32_(6)                                          /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI6_Msk           (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI6_Pos)       /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI6(value)        (SPW_LINK2_DISTINTIM_DI6_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI6_Pos)) /* Assigment of value for DI6 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI7_Pos           _UINT32_(7)                                          /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI7_Msk           (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI7_Pos)       /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI7(value)        (SPW_LINK2_DISTINTIM_DI7_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI7_Pos)) /* Assigment of value for DI7 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI8_Pos           _UINT32_(8)                                          /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI8_Msk           (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI8_Pos)       /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI8(value)        (SPW_LINK2_DISTINTIM_DI8_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI8_Pos)) /* Assigment of value for DI8 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI9_Pos           _UINT32_(9)                                          /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI9_Msk           (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI9_Pos)       /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI9(value)        (SPW_LINK2_DISTINTIM_DI9_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI9_Pos)) /* Assigment of value for DI9 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI10_Pos          _UINT32_(10)                                         /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI10_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI10_Pos)      /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI10(value)       (SPW_LINK2_DISTINTIM_DI10_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI10_Pos)) /* Assigment of value for DI10 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI11_Pos          _UINT32_(11)                                         /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI11_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI11_Pos)      /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI11(value)       (SPW_LINK2_DISTINTIM_DI11_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI11_Pos)) /* Assigment of value for DI11 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI12_Pos          _UINT32_(12)                                         /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI12_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI12_Pos)      /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI12(value)       (SPW_LINK2_DISTINTIM_DI12_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI12_Pos)) /* Assigment of value for DI12 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI13_Pos          _UINT32_(13)                                         /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI13_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI13_Pos)      /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI13(value)       (SPW_LINK2_DISTINTIM_DI13_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI13_Pos)) /* Assigment of value for DI13 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI14_Pos          _UINT32_(14)                                         /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI14_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI14_Pos)      /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI14(value)       (SPW_LINK2_DISTINTIM_DI14_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI14_Pos)) /* Assigment of value for DI14 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI15_Pos          _UINT32_(15)                                         /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI15_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI15_Pos)      /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI15(value)       (SPW_LINK2_DISTINTIM_DI15_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI15_Pos)) /* Assigment of value for DI15 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI16_Pos          _UINT32_(16)                                         /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI16_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI16_Pos)      /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI16(value)       (SPW_LINK2_DISTINTIM_DI16_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI16_Pos)) /* Assigment of value for DI16 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI17_Pos          _UINT32_(17)                                         /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI17_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI17_Pos)      /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI17(value)       (SPW_LINK2_DISTINTIM_DI17_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI17_Pos)) /* Assigment of value for DI17 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI18_Pos          _UINT32_(18)                                         /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI18_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI18_Pos)      /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI18(value)       (SPW_LINK2_DISTINTIM_DI18_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI18_Pos)) /* Assigment of value for DI18 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI19_Pos          _UINT32_(19)                                         /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI19_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI19_Pos)      /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI19(value)       (SPW_LINK2_DISTINTIM_DI19_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI19_Pos)) /* Assigment of value for DI19 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI20_Pos          _UINT32_(20)                                         /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI20_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI20_Pos)      /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI20(value)       (SPW_LINK2_DISTINTIM_DI20_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI20_Pos)) /* Assigment of value for DI20 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI21_Pos          _UINT32_(21)                                         /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI21_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI21_Pos)      /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI21(value)       (SPW_LINK2_DISTINTIM_DI21_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI21_Pos)) /* Assigment of value for DI21 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI22_Pos          _UINT32_(22)                                         /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI22_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI22_Pos)      /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI22(value)       (SPW_LINK2_DISTINTIM_DI22_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI22_Pos)) /* Assigment of value for DI22 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI23_Pos          _UINT32_(23)                                         /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI23_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI23_Pos)      /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI23(value)       (SPW_LINK2_DISTINTIM_DI23_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI23_Pos)) /* Assigment of value for DI23 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI24_Pos          _UINT32_(24)                                         /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI24_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI24_Pos)      /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI24(value)       (SPW_LINK2_DISTINTIM_DI24_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI24_Pos)) /* Assigment of value for DI24 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI25_Pos          _UINT32_(25)                                         /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI25_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI25_Pos)      /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI25(value)       (SPW_LINK2_DISTINTIM_DI25_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI25_Pos)) /* Assigment of value for DI25 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI26_Pos          _UINT32_(26)                                         /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI26_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI26_Pos)      /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI26(value)       (SPW_LINK2_DISTINTIM_DI26_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI26_Pos)) /* Assigment of value for DI26 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI27_Pos          _UINT32_(27)                                         /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI27_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI27_Pos)      /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI27(value)       (SPW_LINK2_DISTINTIM_DI27_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI27_Pos)) /* Assigment of value for DI27 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI28_Pos          _UINT32_(28)                                         /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI28_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI28_Pos)      /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI28(value)       (SPW_LINK2_DISTINTIM_DI28_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI28_Pos)) /* Assigment of value for DI28 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI29_Pos          _UINT32_(29)                                         /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI29_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI29_Pos)      /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI29(value)       (SPW_LINK2_DISTINTIM_DI29_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI29_Pos)) /* Assigment of value for DI29 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI30_Pos          _UINT32_(30)                                         /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI30_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI30_Pos)      /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI30(value)       (SPW_LINK2_DISTINTIM_DI30_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI30_Pos)) /* Assigment of value for DI30 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_DI31_Pos          _UINT32_(31)                                         /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_DI31_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_DI31_Pos)      /* (SPW_LINK2_DISTINTIM) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_DI31(value)       (SPW_LINK2_DISTINTIM_DI31_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI31_Pos)) /* Assigment of value for DI31 in the SPW_LINK2_DISTINTIM register */
#define SPW_LINK2_DISTINTIM_Msk               _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK2_DISTINTIM) Register Mask  */

#define SPW_LINK2_DISTINTIM_DI_Pos            _UINT32_(0)                                          /* (SPW_LINK2_DISTINTIM Position) Distributed Interrupt mask */
#define SPW_LINK2_DISTINTIM_DI_Msk            (_UINT32_(0xFFFFFFFF) << SPW_LINK2_DISTINTIM_DI_Pos) /* (SPW_LINK2_DISTINTIM Mask) DI */
#define SPW_LINK2_DISTINTIM_DI(value)         (SPW_LINK2_DISTINTIM_DI_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_DI_Pos)) 

/* -------- SPW_LINK2_DISTINTPI_C : (SPW Offset: 0x4D4) ( /W 32) SpW Link 2 Distributed Interrupt Clear Pending Interrupt -------- */
#define SPW_LINK2_DISTINTPI_C_DI0_Pos         _UINT32_(0)                                          /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI0_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI0_Pos)     /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI0(value)      (SPW_LINK2_DISTINTPI_C_DI0_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI0_Pos)) /* Assigment of value for DI0 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI1_Pos         _UINT32_(1)                                          /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI1_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI1_Pos)     /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI1(value)      (SPW_LINK2_DISTINTPI_C_DI1_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI1_Pos)) /* Assigment of value for DI1 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI2_Pos         _UINT32_(2)                                          /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI2_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI2_Pos)     /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI2(value)      (SPW_LINK2_DISTINTPI_C_DI2_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI2_Pos)) /* Assigment of value for DI2 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI3_Pos         _UINT32_(3)                                          /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI3_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI3_Pos)     /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI3(value)      (SPW_LINK2_DISTINTPI_C_DI3_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI3_Pos)) /* Assigment of value for DI3 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI4_Pos         _UINT32_(4)                                          /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI4_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI4_Pos)     /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI4(value)      (SPW_LINK2_DISTINTPI_C_DI4_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI4_Pos)) /* Assigment of value for DI4 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI5_Pos         _UINT32_(5)                                          /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI5_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI5_Pos)     /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI5(value)      (SPW_LINK2_DISTINTPI_C_DI5_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI5_Pos)) /* Assigment of value for DI5 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI6_Pos         _UINT32_(6)                                          /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI6_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI6_Pos)     /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI6(value)      (SPW_LINK2_DISTINTPI_C_DI6_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI6_Pos)) /* Assigment of value for DI6 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI7_Pos         _UINT32_(7)                                          /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI7_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI7_Pos)     /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI7(value)      (SPW_LINK2_DISTINTPI_C_DI7_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI7_Pos)) /* Assigment of value for DI7 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI8_Pos         _UINT32_(8)                                          /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI8_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI8_Pos)     /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI8(value)      (SPW_LINK2_DISTINTPI_C_DI8_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI8_Pos)) /* Assigment of value for DI8 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI9_Pos         _UINT32_(9)                                          /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI9_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI9_Pos)     /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI9(value)      (SPW_LINK2_DISTINTPI_C_DI9_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI9_Pos)) /* Assigment of value for DI9 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI10_Pos        _UINT32_(10)                                         /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI10_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI10_Pos)    /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI10(value)     (SPW_LINK2_DISTINTPI_C_DI10_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI10_Pos)) /* Assigment of value for DI10 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI11_Pos        _UINT32_(11)                                         /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI11_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI11_Pos)    /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI11(value)     (SPW_LINK2_DISTINTPI_C_DI11_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI11_Pos)) /* Assigment of value for DI11 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI12_Pos        _UINT32_(12)                                         /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI12_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI12_Pos)    /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI12(value)     (SPW_LINK2_DISTINTPI_C_DI12_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI12_Pos)) /* Assigment of value for DI12 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI13_Pos        _UINT32_(13)                                         /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI13_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI13_Pos)    /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI13(value)     (SPW_LINK2_DISTINTPI_C_DI13_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI13_Pos)) /* Assigment of value for DI13 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI14_Pos        _UINT32_(14)                                         /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI14_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI14_Pos)    /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI14(value)     (SPW_LINK2_DISTINTPI_C_DI14_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI14_Pos)) /* Assigment of value for DI14 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI15_Pos        _UINT32_(15)                                         /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI15_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI15_Pos)    /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI15(value)     (SPW_LINK2_DISTINTPI_C_DI15_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI15_Pos)) /* Assigment of value for DI15 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI16_Pos        _UINT32_(16)                                         /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI16_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI16_Pos)    /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI16(value)     (SPW_LINK2_DISTINTPI_C_DI16_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI16_Pos)) /* Assigment of value for DI16 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI17_Pos        _UINT32_(17)                                         /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI17_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI17_Pos)    /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI17(value)     (SPW_LINK2_DISTINTPI_C_DI17_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI17_Pos)) /* Assigment of value for DI17 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI18_Pos        _UINT32_(18)                                         /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI18_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI18_Pos)    /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI18(value)     (SPW_LINK2_DISTINTPI_C_DI18_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI18_Pos)) /* Assigment of value for DI18 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI19_Pos        _UINT32_(19)                                         /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI19_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI19_Pos)    /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI19(value)     (SPW_LINK2_DISTINTPI_C_DI19_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI19_Pos)) /* Assigment of value for DI19 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI20_Pos        _UINT32_(20)                                         /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI20_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI20_Pos)    /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI20(value)     (SPW_LINK2_DISTINTPI_C_DI20_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI20_Pos)) /* Assigment of value for DI20 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI21_Pos        _UINT32_(21)                                         /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI21_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI21_Pos)    /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI21(value)     (SPW_LINK2_DISTINTPI_C_DI21_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI21_Pos)) /* Assigment of value for DI21 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI22_Pos        _UINT32_(22)                                         /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI22_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI22_Pos)    /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI22(value)     (SPW_LINK2_DISTINTPI_C_DI22_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI22_Pos)) /* Assigment of value for DI22 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI23_Pos        _UINT32_(23)                                         /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI23_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI23_Pos)    /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI23(value)     (SPW_LINK2_DISTINTPI_C_DI23_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI23_Pos)) /* Assigment of value for DI23 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI24_Pos        _UINT32_(24)                                         /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI24_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI24_Pos)    /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI24(value)     (SPW_LINK2_DISTINTPI_C_DI24_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI24_Pos)) /* Assigment of value for DI24 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI25_Pos        _UINT32_(25)                                         /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI25_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI25_Pos)    /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI25(value)     (SPW_LINK2_DISTINTPI_C_DI25_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI25_Pos)) /* Assigment of value for DI25 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI26_Pos        _UINT32_(26)                                         /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI26_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI26_Pos)    /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI26(value)     (SPW_LINK2_DISTINTPI_C_DI26_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI26_Pos)) /* Assigment of value for DI26 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI27_Pos        _UINT32_(27)                                         /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI27_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI27_Pos)    /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI27(value)     (SPW_LINK2_DISTINTPI_C_DI27_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI27_Pos)) /* Assigment of value for DI27 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI28_Pos        _UINT32_(28)                                         /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI28_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI28_Pos)    /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI28(value)     (SPW_LINK2_DISTINTPI_C_DI28_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI28_Pos)) /* Assigment of value for DI28 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI29_Pos        _UINT32_(29)                                         /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI29_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI29_Pos)    /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI29(value)     (SPW_LINK2_DISTINTPI_C_DI29_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI29_Pos)) /* Assigment of value for DI29 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI30_Pos        _UINT32_(30)                                         /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI30_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI30_Pos)    /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI30(value)     (SPW_LINK2_DISTINTPI_C_DI30_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI30_Pos)) /* Assigment of value for DI30 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_DI31_Pos        _UINT32_(31)                                         /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Position */
#define SPW_LINK2_DISTINTPI_C_DI31_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTPI_C_DI31_Pos)    /* (SPW_LINK2_DISTINTPI_C) Distributed Interrupt Mask */
#define SPW_LINK2_DISTINTPI_C_DI31(value)     (SPW_LINK2_DISTINTPI_C_DI31_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI31_Pos)) /* Assigment of value for DI31 in the SPW_LINK2_DISTINTPI_C register */
#define SPW_LINK2_DISTINTPI_C_Msk             _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK2_DISTINTPI_C) Register Mask  */

#define SPW_LINK2_DISTINTPI_C_DI_Pos          _UINT32_(0)                                          /* (SPW_LINK2_DISTINTPI_C Position) Distributed Interrupt */
#define SPW_LINK2_DISTINTPI_C_DI_Msk          (_UINT32_(0xFFFFFFFF) << SPW_LINK2_DISTINTPI_C_DI_Pos) /* (SPW_LINK2_DISTINTPI_C Mask) DI */
#define SPW_LINK2_DISTINTPI_C_DI(value)       (SPW_LINK2_DISTINTPI_C_DI_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTPI_C_DI_Pos)) 

/* -------- SPW_LINK2_DISTINTIM_S : (SPW Offset: 0x4D8) ( /W 32) SpW Link 2 Distributed Interrupt Set Mask -------- */
#define SPW_LINK2_DISTINTIM_S_DI0_Pos         _UINT32_(0)                                          /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI0_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI0_Pos)     /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI0(value)      (SPW_LINK2_DISTINTIM_S_DI0_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI0_Pos)) /* Assigment of value for DI0 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI1_Pos         _UINT32_(1)                                          /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI1_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI1_Pos)     /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI1(value)      (SPW_LINK2_DISTINTIM_S_DI1_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI1_Pos)) /* Assigment of value for DI1 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI2_Pos         _UINT32_(2)                                          /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI2_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI2_Pos)     /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI2(value)      (SPW_LINK2_DISTINTIM_S_DI2_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI2_Pos)) /* Assigment of value for DI2 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI3_Pos         _UINT32_(3)                                          /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI3_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI3_Pos)     /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI3(value)      (SPW_LINK2_DISTINTIM_S_DI3_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI3_Pos)) /* Assigment of value for DI3 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI4_Pos         _UINT32_(4)                                          /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI4_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI4_Pos)     /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI4(value)      (SPW_LINK2_DISTINTIM_S_DI4_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI4_Pos)) /* Assigment of value for DI4 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI5_Pos         _UINT32_(5)                                          /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI5_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI5_Pos)     /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI5(value)      (SPW_LINK2_DISTINTIM_S_DI5_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI5_Pos)) /* Assigment of value for DI5 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI6_Pos         _UINT32_(6)                                          /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI6_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI6_Pos)     /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI6(value)      (SPW_LINK2_DISTINTIM_S_DI6_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI6_Pos)) /* Assigment of value for DI6 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI7_Pos         _UINT32_(7)                                          /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI7_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI7_Pos)     /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI7(value)      (SPW_LINK2_DISTINTIM_S_DI7_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI7_Pos)) /* Assigment of value for DI7 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI8_Pos         _UINT32_(8)                                          /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI8_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI8_Pos)     /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI8(value)      (SPW_LINK2_DISTINTIM_S_DI8_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI8_Pos)) /* Assigment of value for DI8 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI9_Pos         _UINT32_(9)                                          /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI9_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI9_Pos)     /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI9(value)      (SPW_LINK2_DISTINTIM_S_DI9_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI9_Pos)) /* Assigment of value for DI9 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI10_Pos        _UINT32_(10)                                         /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI10_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI10_Pos)    /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI10(value)     (SPW_LINK2_DISTINTIM_S_DI10_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI10_Pos)) /* Assigment of value for DI10 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI11_Pos        _UINT32_(11)                                         /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI11_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI11_Pos)    /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI11(value)     (SPW_LINK2_DISTINTIM_S_DI11_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI11_Pos)) /* Assigment of value for DI11 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI12_Pos        _UINT32_(12)                                         /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI12_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI12_Pos)    /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI12(value)     (SPW_LINK2_DISTINTIM_S_DI12_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI12_Pos)) /* Assigment of value for DI12 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI13_Pos        _UINT32_(13)                                         /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI13_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI13_Pos)    /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI13(value)     (SPW_LINK2_DISTINTIM_S_DI13_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI13_Pos)) /* Assigment of value for DI13 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI14_Pos        _UINT32_(14)                                         /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI14_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI14_Pos)    /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI14(value)     (SPW_LINK2_DISTINTIM_S_DI14_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI14_Pos)) /* Assigment of value for DI14 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI15_Pos        _UINT32_(15)                                         /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI15_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI15_Pos)    /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI15(value)     (SPW_LINK2_DISTINTIM_S_DI15_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI15_Pos)) /* Assigment of value for DI15 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI16_Pos        _UINT32_(16)                                         /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI16_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI16_Pos)    /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI16(value)     (SPW_LINK2_DISTINTIM_S_DI16_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI16_Pos)) /* Assigment of value for DI16 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI17_Pos        _UINT32_(17)                                         /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI17_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI17_Pos)    /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI17(value)     (SPW_LINK2_DISTINTIM_S_DI17_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI17_Pos)) /* Assigment of value for DI17 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI18_Pos        _UINT32_(18)                                         /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI18_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI18_Pos)    /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI18(value)     (SPW_LINK2_DISTINTIM_S_DI18_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI18_Pos)) /* Assigment of value for DI18 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI19_Pos        _UINT32_(19)                                         /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI19_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI19_Pos)    /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI19(value)     (SPW_LINK2_DISTINTIM_S_DI19_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI19_Pos)) /* Assigment of value for DI19 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI20_Pos        _UINT32_(20)                                         /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI20_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI20_Pos)    /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI20(value)     (SPW_LINK2_DISTINTIM_S_DI20_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI20_Pos)) /* Assigment of value for DI20 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI21_Pos        _UINT32_(21)                                         /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI21_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI21_Pos)    /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI21(value)     (SPW_LINK2_DISTINTIM_S_DI21_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI21_Pos)) /* Assigment of value for DI21 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI22_Pos        _UINT32_(22)                                         /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI22_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI22_Pos)    /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI22(value)     (SPW_LINK2_DISTINTIM_S_DI22_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI22_Pos)) /* Assigment of value for DI22 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI23_Pos        _UINT32_(23)                                         /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI23_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI23_Pos)    /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI23(value)     (SPW_LINK2_DISTINTIM_S_DI23_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI23_Pos)) /* Assigment of value for DI23 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI24_Pos        _UINT32_(24)                                         /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI24_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI24_Pos)    /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI24(value)     (SPW_LINK2_DISTINTIM_S_DI24_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI24_Pos)) /* Assigment of value for DI24 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI25_Pos        _UINT32_(25)                                         /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI25_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI25_Pos)    /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI25(value)     (SPW_LINK2_DISTINTIM_S_DI25_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI25_Pos)) /* Assigment of value for DI25 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI26_Pos        _UINT32_(26)                                         /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI26_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI26_Pos)    /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI26(value)     (SPW_LINK2_DISTINTIM_S_DI26_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI26_Pos)) /* Assigment of value for DI26 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI27_Pos        _UINT32_(27)                                         /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI27_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI27_Pos)    /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI27(value)     (SPW_LINK2_DISTINTIM_S_DI27_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI27_Pos)) /* Assigment of value for DI27 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI28_Pos        _UINT32_(28)                                         /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI28_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI28_Pos)    /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI28(value)     (SPW_LINK2_DISTINTIM_S_DI28_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI28_Pos)) /* Assigment of value for DI28 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI29_Pos        _UINT32_(29)                                         /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI29_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI29_Pos)    /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI29(value)     (SPW_LINK2_DISTINTIM_S_DI29_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI29_Pos)) /* Assigment of value for DI29 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI30_Pos        _UINT32_(30)                                         /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI30_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI30_Pos)    /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI30(value)     (SPW_LINK2_DISTINTIM_S_DI30_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI30_Pos)) /* Assigment of value for DI30 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_DI31_Pos        _UINT32_(31)                                         /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_S_DI31_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_S_DI31_Pos)    /* (SPW_LINK2_DISTINTIM_S) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_S_DI31(value)     (SPW_LINK2_DISTINTIM_S_DI31_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI31_Pos)) /* Assigment of value for DI31 in the SPW_LINK2_DISTINTIM_S register */
#define SPW_LINK2_DISTINTIM_S_Msk             _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK2_DISTINTIM_S) Register Mask  */

#define SPW_LINK2_DISTINTIM_S_DI_Pos          _UINT32_(0)                                          /* (SPW_LINK2_DISTINTIM_S Position) Distributed Interrupt mask */
#define SPW_LINK2_DISTINTIM_S_DI_Msk          (_UINT32_(0xFFFFFFFF) << SPW_LINK2_DISTINTIM_S_DI_Pos) /* (SPW_LINK2_DISTINTIM_S Mask) DI */
#define SPW_LINK2_DISTINTIM_S_DI(value)       (SPW_LINK2_DISTINTIM_S_DI_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_S_DI_Pos)) 

/* -------- SPW_LINK2_DISTINTIM_C : (SPW Offset: 0x4DC) ( /W 32) SpW Link 2 Distributed Interrupt Clear Mask -------- */
#define SPW_LINK2_DISTINTIM_C_DI0_Pos         _UINT32_(0)                                          /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI0_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI0_Pos)     /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI0(value)      (SPW_LINK2_DISTINTIM_C_DI0_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI0_Pos)) /* Assigment of value for DI0 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI1_Pos         _UINT32_(1)                                          /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI1_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI1_Pos)     /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI1(value)      (SPW_LINK2_DISTINTIM_C_DI1_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI1_Pos)) /* Assigment of value for DI1 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI2_Pos         _UINT32_(2)                                          /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI2_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI2_Pos)     /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI2(value)      (SPW_LINK2_DISTINTIM_C_DI2_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI2_Pos)) /* Assigment of value for DI2 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI3_Pos         _UINT32_(3)                                          /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI3_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI3_Pos)     /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI3(value)      (SPW_LINK2_DISTINTIM_C_DI3_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI3_Pos)) /* Assigment of value for DI3 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI4_Pos         _UINT32_(4)                                          /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI4_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI4_Pos)     /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI4(value)      (SPW_LINK2_DISTINTIM_C_DI4_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI4_Pos)) /* Assigment of value for DI4 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI5_Pos         _UINT32_(5)                                          /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI5_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI5_Pos)     /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI5(value)      (SPW_LINK2_DISTINTIM_C_DI5_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI5_Pos)) /* Assigment of value for DI5 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI6_Pos         _UINT32_(6)                                          /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI6_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI6_Pos)     /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI6(value)      (SPW_LINK2_DISTINTIM_C_DI6_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI6_Pos)) /* Assigment of value for DI6 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI7_Pos         _UINT32_(7)                                          /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI7_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI7_Pos)     /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI7(value)      (SPW_LINK2_DISTINTIM_C_DI7_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI7_Pos)) /* Assigment of value for DI7 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI8_Pos         _UINT32_(8)                                          /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI8_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI8_Pos)     /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI8(value)      (SPW_LINK2_DISTINTIM_C_DI8_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI8_Pos)) /* Assigment of value for DI8 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI9_Pos         _UINT32_(9)                                          /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI9_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI9_Pos)     /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI9(value)      (SPW_LINK2_DISTINTIM_C_DI9_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI9_Pos)) /* Assigment of value for DI9 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI10_Pos        _UINT32_(10)                                         /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI10_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI10_Pos)    /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI10(value)     (SPW_LINK2_DISTINTIM_C_DI10_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI10_Pos)) /* Assigment of value for DI10 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI11_Pos        _UINT32_(11)                                         /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI11_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI11_Pos)    /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI11(value)     (SPW_LINK2_DISTINTIM_C_DI11_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI11_Pos)) /* Assigment of value for DI11 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI12_Pos        _UINT32_(12)                                         /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI12_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI12_Pos)    /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI12(value)     (SPW_LINK2_DISTINTIM_C_DI12_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI12_Pos)) /* Assigment of value for DI12 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI13_Pos        _UINT32_(13)                                         /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI13_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI13_Pos)    /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI13(value)     (SPW_LINK2_DISTINTIM_C_DI13_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI13_Pos)) /* Assigment of value for DI13 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI14_Pos        _UINT32_(14)                                         /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI14_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI14_Pos)    /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI14(value)     (SPW_LINK2_DISTINTIM_C_DI14_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI14_Pos)) /* Assigment of value for DI14 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI15_Pos        _UINT32_(15)                                         /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI15_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI15_Pos)    /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI15(value)     (SPW_LINK2_DISTINTIM_C_DI15_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI15_Pos)) /* Assigment of value for DI15 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI16_Pos        _UINT32_(16)                                         /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI16_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI16_Pos)    /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI16(value)     (SPW_LINK2_DISTINTIM_C_DI16_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI16_Pos)) /* Assigment of value for DI16 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI17_Pos        _UINT32_(17)                                         /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI17_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI17_Pos)    /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI17(value)     (SPW_LINK2_DISTINTIM_C_DI17_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI17_Pos)) /* Assigment of value for DI17 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI18_Pos        _UINT32_(18)                                         /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI18_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI18_Pos)    /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI18(value)     (SPW_LINK2_DISTINTIM_C_DI18_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI18_Pos)) /* Assigment of value for DI18 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI19_Pos        _UINT32_(19)                                         /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI19_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI19_Pos)    /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI19(value)     (SPW_LINK2_DISTINTIM_C_DI19_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI19_Pos)) /* Assigment of value for DI19 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI20_Pos        _UINT32_(20)                                         /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI20_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI20_Pos)    /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI20(value)     (SPW_LINK2_DISTINTIM_C_DI20_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI20_Pos)) /* Assigment of value for DI20 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI21_Pos        _UINT32_(21)                                         /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI21_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI21_Pos)    /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI21(value)     (SPW_LINK2_DISTINTIM_C_DI21_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI21_Pos)) /* Assigment of value for DI21 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI22_Pos        _UINT32_(22)                                         /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI22_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI22_Pos)    /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI22(value)     (SPW_LINK2_DISTINTIM_C_DI22_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI22_Pos)) /* Assigment of value for DI22 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI23_Pos        _UINT32_(23)                                         /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI23_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI23_Pos)    /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI23(value)     (SPW_LINK2_DISTINTIM_C_DI23_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI23_Pos)) /* Assigment of value for DI23 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI24_Pos        _UINT32_(24)                                         /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI24_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI24_Pos)    /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI24(value)     (SPW_LINK2_DISTINTIM_C_DI24_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI24_Pos)) /* Assigment of value for DI24 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI25_Pos        _UINT32_(25)                                         /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI25_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI25_Pos)    /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI25(value)     (SPW_LINK2_DISTINTIM_C_DI25_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI25_Pos)) /* Assigment of value for DI25 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI26_Pos        _UINT32_(26)                                         /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI26_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI26_Pos)    /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI26(value)     (SPW_LINK2_DISTINTIM_C_DI26_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI26_Pos)) /* Assigment of value for DI26 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI27_Pos        _UINT32_(27)                                         /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI27_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI27_Pos)    /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI27(value)     (SPW_LINK2_DISTINTIM_C_DI27_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI27_Pos)) /* Assigment of value for DI27 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI28_Pos        _UINT32_(28)                                         /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI28_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI28_Pos)    /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI28(value)     (SPW_LINK2_DISTINTIM_C_DI28_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI28_Pos)) /* Assigment of value for DI28 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI29_Pos        _UINT32_(29)                                         /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI29_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI29_Pos)    /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI29(value)     (SPW_LINK2_DISTINTIM_C_DI29_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI29_Pos)) /* Assigment of value for DI29 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI30_Pos        _UINT32_(30)                                         /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI30_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI30_Pos)    /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI30(value)     (SPW_LINK2_DISTINTIM_C_DI30_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI30_Pos)) /* Assigment of value for DI30 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_DI31_Pos        _UINT32_(31)                                         /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Position */
#define SPW_LINK2_DISTINTIM_C_DI31_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTINTIM_C_DI31_Pos)    /* (SPW_LINK2_DISTINTIM_C) Distributed Interrupt mask Mask */
#define SPW_LINK2_DISTINTIM_C_DI31(value)     (SPW_LINK2_DISTINTIM_C_DI31_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI31_Pos)) /* Assigment of value for DI31 in the SPW_LINK2_DISTINTIM_C register */
#define SPW_LINK2_DISTINTIM_C_Msk             _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK2_DISTINTIM_C) Register Mask  */

#define SPW_LINK2_DISTINTIM_C_DI_Pos          _UINT32_(0)                                          /* (SPW_LINK2_DISTINTIM_C Position) Distributed Interrupt mask */
#define SPW_LINK2_DISTINTIM_C_DI_Msk          (_UINT32_(0xFFFFFFFF) << SPW_LINK2_DISTINTIM_C_DI_Pos) /* (SPW_LINK2_DISTINTIM_C Mask) DI */
#define SPW_LINK2_DISTINTIM_C_DI(value)       (SPW_LINK2_DISTINTIM_C_DI_Msk & (_UINT32_(value) << SPW_LINK2_DISTINTIM_C_DI_Pos)) 

/* -------- SPW_LINK2_DISTACKPI_RM : (SPW Offset: 0x4E0) ( R/ 32) SpW Link 2 Distributed Interrupt Acknowledge Pending Read Masked Interrupt -------- */
#define SPW_LINK2_DISTACKPI_RM_DA0_Pos        _UINT32_(0)                                          /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA0_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA0_Pos)    /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA0(value)     (SPW_LINK2_DISTACKPI_RM_DA0_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA0_Pos)) /* Assigment of value for DA0 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA1_Pos        _UINT32_(1)                                          /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA1_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA1_Pos)    /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA1(value)     (SPW_LINK2_DISTACKPI_RM_DA1_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA1_Pos)) /* Assigment of value for DA1 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA2_Pos        _UINT32_(2)                                          /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA2_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA2_Pos)    /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA2(value)     (SPW_LINK2_DISTACKPI_RM_DA2_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA2_Pos)) /* Assigment of value for DA2 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA3_Pos        _UINT32_(3)                                          /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA3_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA3_Pos)    /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA3(value)     (SPW_LINK2_DISTACKPI_RM_DA3_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA3_Pos)) /* Assigment of value for DA3 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA4_Pos        _UINT32_(4)                                          /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA4_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA4_Pos)    /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA4(value)     (SPW_LINK2_DISTACKPI_RM_DA4_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA4_Pos)) /* Assigment of value for DA4 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA5_Pos        _UINT32_(5)                                          /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA5_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA5_Pos)    /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA5(value)     (SPW_LINK2_DISTACKPI_RM_DA5_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA5_Pos)) /* Assigment of value for DA5 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA6_Pos        _UINT32_(6)                                          /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA6_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA6_Pos)    /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA6(value)     (SPW_LINK2_DISTACKPI_RM_DA6_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA6_Pos)) /* Assigment of value for DA6 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA7_Pos        _UINT32_(7)                                          /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA7_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA7_Pos)    /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA7(value)     (SPW_LINK2_DISTACKPI_RM_DA7_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA7_Pos)) /* Assigment of value for DA7 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA8_Pos        _UINT32_(8)                                          /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA8_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA8_Pos)    /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA8(value)     (SPW_LINK2_DISTACKPI_RM_DA8_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA8_Pos)) /* Assigment of value for DA8 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA9_Pos        _UINT32_(9)                                          /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA9_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA9_Pos)    /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA9(value)     (SPW_LINK2_DISTACKPI_RM_DA9_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA9_Pos)) /* Assigment of value for DA9 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA10_Pos       _UINT32_(10)                                         /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA10_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA10_Pos)   /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA10(value)    (SPW_LINK2_DISTACKPI_RM_DA10_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA10_Pos)) /* Assigment of value for DA10 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA11_Pos       _UINT32_(11)                                         /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA11_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA11_Pos)   /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA11(value)    (SPW_LINK2_DISTACKPI_RM_DA11_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA11_Pos)) /* Assigment of value for DA11 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA12_Pos       _UINT32_(12)                                         /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA12_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA12_Pos)   /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA12(value)    (SPW_LINK2_DISTACKPI_RM_DA12_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA12_Pos)) /* Assigment of value for DA12 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA13_Pos       _UINT32_(13)                                         /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA13_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA13_Pos)   /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA13(value)    (SPW_LINK2_DISTACKPI_RM_DA13_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA13_Pos)) /* Assigment of value for DA13 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA14_Pos       _UINT32_(14)                                         /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA14_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA14_Pos)   /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA14(value)    (SPW_LINK2_DISTACKPI_RM_DA14_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA14_Pos)) /* Assigment of value for DA14 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA15_Pos       _UINT32_(15)                                         /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA15_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA15_Pos)   /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA15(value)    (SPW_LINK2_DISTACKPI_RM_DA15_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA15_Pos)) /* Assigment of value for DA15 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA16_Pos       _UINT32_(16)                                         /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA16_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA16_Pos)   /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA16(value)    (SPW_LINK2_DISTACKPI_RM_DA16_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA16_Pos)) /* Assigment of value for DA16 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA17_Pos       _UINT32_(17)                                         /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA17_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA17_Pos)   /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA17(value)    (SPW_LINK2_DISTACKPI_RM_DA17_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA17_Pos)) /* Assigment of value for DA17 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA18_Pos       _UINT32_(18)                                         /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA18_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA18_Pos)   /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA18(value)    (SPW_LINK2_DISTACKPI_RM_DA18_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA18_Pos)) /* Assigment of value for DA18 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA19_Pos       _UINT32_(19)                                         /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA19_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA19_Pos)   /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA19(value)    (SPW_LINK2_DISTACKPI_RM_DA19_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA19_Pos)) /* Assigment of value for DA19 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA20_Pos       _UINT32_(20)                                         /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA20_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA20_Pos)   /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA20(value)    (SPW_LINK2_DISTACKPI_RM_DA20_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA20_Pos)) /* Assigment of value for DA20 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA21_Pos       _UINT32_(21)                                         /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA21_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA21_Pos)   /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA21(value)    (SPW_LINK2_DISTACKPI_RM_DA21_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA21_Pos)) /* Assigment of value for DA21 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA22_Pos       _UINT32_(22)                                         /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA22_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA22_Pos)   /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA22(value)    (SPW_LINK2_DISTACKPI_RM_DA22_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA22_Pos)) /* Assigment of value for DA22 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA23_Pos       _UINT32_(23)                                         /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA23_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA23_Pos)   /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA23(value)    (SPW_LINK2_DISTACKPI_RM_DA23_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA23_Pos)) /* Assigment of value for DA23 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA24_Pos       _UINT32_(24)                                         /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA24_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA24_Pos)   /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA24(value)    (SPW_LINK2_DISTACKPI_RM_DA24_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA24_Pos)) /* Assigment of value for DA24 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA25_Pos       _UINT32_(25)                                         /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA25_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA25_Pos)   /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA25(value)    (SPW_LINK2_DISTACKPI_RM_DA25_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA25_Pos)) /* Assigment of value for DA25 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA26_Pos       _UINT32_(26)                                         /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA26_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA26_Pos)   /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA26(value)    (SPW_LINK2_DISTACKPI_RM_DA26_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA26_Pos)) /* Assigment of value for DA26 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA27_Pos       _UINT32_(27)                                         /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA27_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA27_Pos)   /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA27(value)    (SPW_LINK2_DISTACKPI_RM_DA27_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA27_Pos)) /* Assigment of value for DA27 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA28_Pos       _UINT32_(28)                                         /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA28_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA28_Pos)   /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA28(value)    (SPW_LINK2_DISTACKPI_RM_DA28_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA28_Pos)) /* Assigment of value for DA28 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA29_Pos       _UINT32_(29)                                         /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA29_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA29_Pos)   /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA29(value)    (SPW_LINK2_DISTACKPI_RM_DA29_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA29_Pos)) /* Assigment of value for DA29 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA30_Pos       _UINT32_(30)                                         /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA30_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA30_Pos)   /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA30(value)    (SPW_LINK2_DISTACKPI_RM_DA30_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA30_Pos)) /* Assigment of value for DA30 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_DA31_Pos       _UINT32_(31)                                         /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RM_DA31_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RM_DA31_Pos)   /* (SPW_LINK2_DISTACKPI_RM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RM_DA31(value)    (SPW_LINK2_DISTACKPI_RM_DA31_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA31_Pos)) /* Assigment of value for DA31 in the SPW_LINK2_DISTACKPI_RM register */
#define SPW_LINK2_DISTACKPI_RM_Msk            _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK2_DISTACKPI_RM) Register Mask  */

#define SPW_LINK2_DISTACKPI_RM_DA_Pos         _UINT32_(0)                                          /* (SPW_LINK2_DISTACKPI_RM Position) Distributed Acknowledge */
#define SPW_LINK2_DISTACKPI_RM_DA_Msk         (_UINT32_(0xFFFFFFFF) << SPW_LINK2_DISTACKPI_RM_DA_Pos) /* (SPW_LINK2_DISTACKPI_RM Mask) DA */
#define SPW_LINK2_DISTACKPI_RM_DA(value)      (SPW_LINK2_DISTACKPI_RM_DA_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RM_DA_Pos)) 

/* -------- SPW_LINK2_DISTACKPI_RCM : (SPW Offset: 0x4E4) ( R/ 32) SpW Link 2 Distributed Interrupt Acknowledge Pending Read and Clear Masked Interrupt -------- */
#define SPW_LINK2_DISTACKPI_RCM_DA0_Pos       _UINT32_(0)                                          /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA0_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA0_Pos)   /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA0(value)    (SPW_LINK2_DISTACKPI_RCM_DA0_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA0_Pos)) /* Assigment of value for DA0 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA1_Pos       _UINT32_(1)                                          /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA1_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA1_Pos)   /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA1(value)    (SPW_LINK2_DISTACKPI_RCM_DA1_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA1_Pos)) /* Assigment of value for DA1 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA2_Pos       _UINT32_(2)                                          /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA2_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA2_Pos)   /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA2(value)    (SPW_LINK2_DISTACKPI_RCM_DA2_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA2_Pos)) /* Assigment of value for DA2 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA3_Pos       _UINT32_(3)                                          /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA3_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA3_Pos)   /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA3(value)    (SPW_LINK2_DISTACKPI_RCM_DA3_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA3_Pos)) /* Assigment of value for DA3 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA4_Pos       _UINT32_(4)                                          /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA4_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA4_Pos)   /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA4(value)    (SPW_LINK2_DISTACKPI_RCM_DA4_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA4_Pos)) /* Assigment of value for DA4 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA5_Pos       _UINT32_(5)                                          /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA5_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA5_Pos)   /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA5(value)    (SPW_LINK2_DISTACKPI_RCM_DA5_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA5_Pos)) /* Assigment of value for DA5 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA6_Pos       _UINT32_(6)                                          /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA6_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA6_Pos)   /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA6(value)    (SPW_LINK2_DISTACKPI_RCM_DA6_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA6_Pos)) /* Assigment of value for DA6 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA7_Pos       _UINT32_(7)                                          /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA7_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA7_Pos)   /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA7(value)    (SPW_LINK2_DISTACKPI_RCM_DA7_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA7_Pos)) /* Assigment of value for DA7 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA8_Pos       _UINT32_(8)                                          /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA8_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA8_Pos)   /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA8(value)    (SPW_LINK2_DISTACKPI_RCM_DA8_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA8_Pos)) /* Assigment of value for DA8 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA9_Pos       _UINT32_(9)                                          /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA9_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA9_Pos)   /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA9(value)    (SPW_LINK2_DISTACKPI_RCM_DA9_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA9_Pos)) /* Assigment of value for DA9 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA10_Pos      _UINT32_(10)                                         /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA10_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA10_Pos)  /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA10(value)   (SPW_LINK2_DISTACKPI_RCM_DA10_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA10_Pos)) /* Assigment of value for DA10 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA11_Pos      _UINT32_(11)                                         /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA11_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA11_Pos)  /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA11(value)   (SPW_LINK2_DISTACKPI_RCM_DA11_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA11_Pos)) /* Assigment of value for DA11 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA12_Pos      _UINT32_(12)                                         /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA12_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA12_Pos)  /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA12(value)   (SPW_LINK2_DISTACKPI_RCM_DA12_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA12_Pos)) /* Assigment of value for DA12 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA13_Pos      _UINT32_(13)                                         /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA13_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA13_Pos)  /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA13(value)   (SPW_LINK2_DISTACKPI_RCM_DA13_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA13_Pos)) /* Assigment of value for DA13 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA14_Pos      _UINT32_(14)                                         /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA14_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA14_Pos)  /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA14(value)   (SPW_LINK2_DISTACKPI_RCM_DA14_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA14_Pos)) /* Assigment of value for DA14 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA15_Pos      _UINT32_(15)                                         /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA15_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA15_Pos)  /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA15(value)   (SPW_LINK2_DISTACKPI_RCM_DA15_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA15_Pos)) /* Assigment of value for DA15 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA16_Pos      _UINT32_(16)                                         /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA16_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA16_Pos)  /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA16(value)   (SPW_LINK2_DISTACKPI_RCM_DA16_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA16_Pos)) /* Assigment of value for DA16 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA17_Pos      _UINT32_(17)                                         /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA17_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA17_Pos)  /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA17(value)   (SPW_LINK2_DISTACKPI_RCM_DA17_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA17_Pos)) /* Assigment of value for DA17 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA18_Pos      _UINT32_(18)                                         /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA18_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA18_Pos)  /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA18(value)   (SPW_LINK2_DISTACKPI_RCM_DA18_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA18_Pos)) /* Assigment of value for DA18 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA19_Pos      _UINT32_(19)                                         /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA19_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA19_Pos)  /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA19(value)   (SPW_LINK2_DISTACKPI_RCM_DA19_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA19_Pos)) /* Assigment of value for DA19 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA20_Pos      _UINT32_(20)                                         /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA20_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA20_Pos)  /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA20(value)   (SPW_LINK2_DISTACKPI_RCM_DA20_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA20_Pos)) /* Assigment of value for DA20 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA21_Pos      _UINT32_(21)                                         /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA21_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA21_Pos)  /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA21(value)   (SPW_LINK2_DISTACKPI_RCM_DA21_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA21_Pos)) /* Assigment of value for DA21 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA22_Pos      _UINT32_(22)                                         /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA22_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA22_Pos)  /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA22(value)   (SPW_LINK2_DISTACKPI_RCM_DA22_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA22_Pos)) /* Assigment of value for DA22 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA23_Pos      _UINT32_(23)                                         /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA23_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA23_Pos)  /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA23(value)   (SPW_LINK2_DISTACKPI_RCM_DA23_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA23_Pos)) /* Assigment of value for DA23 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA24_Pos      _UINT32_(24)                                         /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA24_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA24_Pos)  /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA24(value)   (SPW_LINK2_DISTACKPI_RCM_DA24_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA24_Pos)) /* Assigment of value for DA24 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA25_Pos      _UINT32_(25)                                         /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA25_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA25_Pos)  /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA25(value)   (SPW_LINK2_DISTACKPI_RCM_DA25_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA25_Pos)) /* Assigment of value for DA25 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA26_Pos      _UINT32_(26)                                         /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA26_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA26_Pos)  /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA26(value)   (SPW_LINK2_DISTACKPI_RCM_DA26_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA26_Pos)) /* Assigment of value for DA26 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA27_Pos      _UINT32_(27)                                         /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA27_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA27_Pos)  /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA27(value)   (SPW_LINK2_DISTACKPI_RCM_DA27_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA27_Pos)) /* Assigment of value for DA27 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA28_Pos      _UINT32_(28)                                         /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA28_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA28_Pos)  /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA28(value)   (SPW_LINK2_DISTACKPI_RCM_DA28_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA28_Pos)) /* Assigment of value for DA28 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA29_Pos      _UINT32_(29)                                         /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA29_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA29_Pos)  /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA29(value)   (SPW_LINK2_DISTACKPI_RCM_DA29_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA29_Pos)) /* Assigment of value for DA29 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA30_Pos      _UINT32_(30)                                         /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA30_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA30_Pos)  /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA30(value)   (SPW_LINK2_DISTACKPI_RCM_DA30_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA30_Pos)) /* Assigment of value for DA30 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_DA31_Pos      _UINT32_(31)                                         /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCM_DA31_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCM_DA31_Pos)  /* (SPW_LINK2_DISTACKPI_RCM) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCM_DA31(value)   (SPW_LINK2_DISTACKPI_RCM_DA31_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA31_Pos)) /* Assigment of value for DA31 in the SPW_LINK2_DISTACKPI_RCM register */
#define SPW_LINK2_DISTACKPI_RCM_Msk           _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK2_DISTACKPI_RCM) Register Mask  */

#define SPW_LINK2_DISTACKPI_RCM_DA_Pos        _UINT32_(0)                                          /* (SPW_LINK2_DISTACKPI_RCM Position) Distributed Acknowledge */
#define SPW_LINK2_DISTACKPI_RCM_DA_Msk        (_UINT32_(0xFFFFFFFF) << SPW_LINK2_DISTACKPI_RCM_DA_Pos) /* (SPW_LINK2_DISTACKPI_RCM Mask) DA */
#define SPW_LINK2_DISTACKPI_RCM_DA(value)     (SPW_LINK2_DISTACKPI_RCM_DA_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCM_DA_Pos)) 

/* -------- SPW_LINK2_DISTACKPI_R : (SPW Offset: 0x4E8) ( R/ 32) SpW Link 2 Distributed Interrupt Acknowledge Pending Read Interrupt -------- */
#define SPW_LINK2_DISTACKPI_R_DA0_Pos         _UINT32_(0)                                          /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA0_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA0_Pos)     /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA0(value)      (SPW_LINK2_DISTACKPI_R_DA0_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA0_Pos)) /* Assigment of value for DA0 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA1_Pos         _UINT32_(1)                                          /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA1_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA1_Pos)     /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA1(value)      (SPW_LINK2_DISTACKPI_R_DA1_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA1_Pos)) /* Assigment of value for DA1 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA2_Pos         _UINT32_(2)                                          /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA2_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA2_Pos)     /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA2(value)      (SPW_LINK2_DISTACKPI_R_DA2_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA2_Pos)) /* Assigment of value for DA2 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA3_Pos         _UINT32_(3)                                          /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA3_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA3_Pos)     /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA3(value)      (SPW_LINK2_DISTACKPI_R_DA3_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA3_Pos)) /* Assigment of value for DA3 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA4_Pos         _UINT32_(4)                                          /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA4_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA4_Pos)     /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA4(value)      (SPW_LINK2_DISTACKPI_R_DA4_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA4_Pos)) /* Assigment of value for DA4 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA5_Pos         _UINT32_(5)                                          /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA5_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA5_Pos)     /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA5(value)      (SPW_LINK2_DISTACKPI_R_DA5_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA5_Pos)) /* Assigment of value for DA5 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA6_Pos         _UINT32_(6)                                          /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA6_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA6_Pos)     /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA6(value)      (SPW_LINK2_DISTACKPI_R_DA6_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA6_Pos)) /* Assigment of value for DA6 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA7_Pos         _UINT32_(7)                                          /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA7_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA7_Pos)     /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA7(value)      (SPW_LINK2_DISTACKPI_R_DA7_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA7_Pos)) /* Assigment of value for DA7 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA8_Pos         _UINT32_(8)                                          /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA8_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA8_Pos)     /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA8(value)      (SPW_LINK2_DISTACKPI_R_DA8_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA8_Pos)) /* Assigment of value for DA8 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA9_Pos         _UINT32_(9)                                          /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA9_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA9_Pos)     /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA9(value)      (SPW_LINK2_DISTACKPI_R_DA9_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA9_Pos)) /* Assigment of value for DA9 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA10_Pos        _UINT32_(10)                                         /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA10_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA10_Pos)    /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA10(value)     (SPW_LINK2_DISTACKPI_R_DA10_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA10_Pos)) /* Assigment of value for DA10 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA11_Pos        _UINT32_(11)                                         /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA11_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA11_Pos)    /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA11(value)     (SPW_LINK2_DISTACKPI_R_DA11_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA11_Pos)) /* Assigment of value for DA11 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA12_Pos        _UINT32_(12)                                         /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA12_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA12_Pos)    /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA12(value)     (SPW_LINK2_DISTACKPI_R_DA12_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA12_Pos)) /* Assigment of value for DA12 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA13_Pos        _UINT32_(13)                                         /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA13_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA13_Pos)    /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA13(value)     (SPW_LINK2_DISTACKPI_R_DA13_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA13_Pos)) /* Assigment of value for DA13 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA14_Pos        _UINT32_(14)                                         /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA14_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA14_Pos)    /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA14(value)     (SPW_LINK2_DISTACKPI_R_DA14_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA14_Pos)) /* Assigment of value for DA14 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA15_Pos        _UINT32_(15)                                         /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA15_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA15_Pos)    /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA15(value)     (SPW_LINK2_DISTACKPI_R_DA15_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA15_Pos)) /* Assigment of value for DA15 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA16_Pos        _UINT32_(16)                                         /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA16_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA16_Pos)    /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA16(value)     (SPW_LINK2_DISTACKPI_R_DA16_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA16_Pos)) /* Assigment of value for DA16 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA17_Pos        _UINT32_(17)                                         /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA17_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA17_Pos)    /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA17(value)     (SPW_LINK2_DISTACKPI_R_DA17_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA17_Pos)) /* Assigment of value for DA17 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA18_Pos        _UINT32_(18)                                         /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA18_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA18_Pos)    /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA18(value)     (SPW_LINK2_DISTACKPI_R_DA18_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA18_Pos)) /* Assigment of value for DA18 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA19_Pos        _UINT32_(19)                                         /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA19_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA19_Pos)    /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA19(value)     (SPW_LINK2_DISTACKPI_R_DA19_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA19_Pos)) /* Assigment of value for DA19 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA20_Pos        _UINT32_(20)                                         /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA20_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA20_Pos)    /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA20(value)     (SPW_LINK2_DISTACKPI_R_DA20_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA20_Pos)) /* Assigment of value for DA20 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA21_Pos        _UINT32_(21)                                         /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA21_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA21_Pos)    /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA21(value)     (SPW_LINK2_DISTACKPI_R_DA21_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA21_Pos)) /* Assigment of value for DA21 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA22_Pos        _UINT32_(22)                                         /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA22_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA22_Pos)    /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA22(value)     (SPW_LINK2_DISTACKPI_R_DA22_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA22_Pos)) /* Assigment of value for DA22 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA23_Pos        _UINT32_(23)                                         /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA23_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA23_Pos)    /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA23(value)     (SPW_LINK2_DISTACKPI_R_DA23_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA23_Pos)) /* Assigment of value for DA23 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA24_Pos        _UINT32_(24)                                         /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA24_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA24_Pos)    /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA24(value)     (SPW_LINK2_DISTACKPI_R_DA24_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA24_Pos)) /* Assigment of value for DA24 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA25_Pos        _UINT32_(25)                                         /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA25_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA25_Pos)    /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA25(value)     (SPW_LINK2_DISTACKPI_R_DA25_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA25_Pos)) /* Assigment of value for DA25 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA26_Pos        _UINT32_(26)                                         /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA26_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA26_Pos)    /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA26(value)     (SPW_LINK2_DISTACKPI_R_DA26_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA26_Pos)) /* Assigment of value for DA26 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA27_Pos        _UINT32_(27)                                         /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA27_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA27_Pos)    /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA27(value)     (SPW_LINK2_DISTACKPI_R_DA27_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA27_Pos)) /* Assigment of value for DA27 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA28_Pos        _UINT32_(28)                                         /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA28_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA28_Pos)    /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA28(value)     (SPW_LINK2_DISTACKPI_R_DA28_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA28_Pos)) /* Assigment of value for DA28 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA29_Pos        _UINT32_(29)                                         /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA29_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA29_Pos)    /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA29(value)     (SPW_LINK2_DISTACKPI_R_DA29_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA29_Pos)) /* Assigment of value for DA29 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA30_Pos        _UINT32_(30)                                         /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA30_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA30_Pos)    /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA30(value)     (SPW_LINK2_DISTACKPI_R_DA30_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA30_Pos)) /* Assigment of value for DA30 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_DA31_Pos        _UINT32_(31)                                         /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_R_DA31_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_R_DA31_Pos)    /* (SPW_LINK2_DISTACKPI_R) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_R_DA31(value)     (SPW_LINK2_DISTACKPI_R_DA31_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA31_Pos)) /* Assigment of value for DA31 in the SPW_LINK2_DISTACKPI_R register */
#define SPW_LINK2_DISTACKPI_R_Msk             _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK2_DISTACKPI_R) Register Mask  */

#define SPW_LINK2_DISTACKPI_R_DA_Pos          _UINT32_(0)                                          /* (SPW_LINK2_DISTACKPI_R Position) Distributed Acknowledge */
#define SPW_LINK2_DISTACKPI_R_DA_Msk          (_UINT32_(0xFFFFFFFF) << SPW_LINK2_DISTACKPI_R_DA_Pos) /* (SPW_LINK2_DISTACKPI_R Mask) DA */
#define SPW_LINK2_DISTACKPI_R_DA(value)       (SPW_LINK2_DISTACKPI_R_DA_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_R_DA_Pos)) 

/* -------- SPW_LINK2_DISTACKPI_RCS : (SPW Offset: 0x4EC) (R/W 32) SpW Link 2 Distributed Interrupt Acknowledge Pending Read and Clear Interrupt -------- */
#define SPW_LINK2_DISTACKPI_RCS_DA0_Pos       _UINT32_(0)                                          /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA0_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA0_Pos)   /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA0(value)    (SPW_LINK2_DISTACKPI_RCS_DA0_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA0_Pos)) /* Assigment of value for DA0 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA1_Pos       _UINT32_(1)                                          /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA1_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA1_Pos)   /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA1(value)    (SPW_LINK2_DISTACKPI_RCS_DA1_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA1_Pos)) /* Assigment of value for DA1 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA2_Pos       _UINT32_(2)                                          /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA2_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA2_Pos)   /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA2(value)    (SPW_LINK2_DISTACKPI_RCS_DA2_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA2_Pos)) /* Assigment of value for DA2 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA3_Pos       _UINT32_(3)                                          /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA3_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA3_Pos)   /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA3(value)    (SPW_LINK2_DISTACKPI_RCS_DA3_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA3_Pos)) /* Assigment of value for DA3 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA4_Pos       _UINT32_(4)                                          /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA4_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA4_Pos)   /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA4(value)    (SPW_LINK2_DISTACKPI_RCS_DA4_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA4_Pos)) /* Assigment of value for DA4 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA5_Pos       _UINT32_(5)                                          /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA5_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA5_Pos)   /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA5(value)    (SPW_LINK2_DISTACKPI_RCS_DA5_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA5_Pos)) /* Assigment of value for DA5 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA6_Pos       _UINT32_(6)                                          /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA6_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA6_Pos)   /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA6(value)    (SPW_LINK2_DISTACKPI_RCS_DA6_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA6_Pos)) /* Assigment of value for DA6 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA7_Pos       _UINT32_(7)                                          /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA7_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA7_Pos)   /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA7(value)    (SPW_LINK2_DISTACKPI_RCS_DA7_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA7_Pos)) /* Assigment of value for DA7 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA8_Pos       _UINT32_(8)                                          /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA8_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA8_Pos)   /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA8(value)    (SPW_LINK2_DISTACKPI_RCS_DA8_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA8_Pos)) /* Assigment of value for DA8 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA9_Pos       _UINT32_(9)                                          /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA9_Msk       (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA9_Pos)   /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA9(value)    (SPW_LINK2_DISTACKPI_RCS_DA9_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA9_Pos)) /* Assigment of value for DA9 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA10_Pos      _UINT32_(10)                                         /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA10_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA10_Pos)  /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA10(value)   (SPW_LINK2_DISTACKPI_RCS_DA10_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA10_Pos)) /* Assigment of value for DA10 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA11_Pos      _UINT32_(11)                                         /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA11_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA11_Pos)  /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA11(value)   (SPW_LINK2_DISTACKPI_RCS_DA11_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA11_Pos)) /* Assigment of value for DA11 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA12_Pos      _UINT32_(12)                                         /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA12_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA12_Pos)  /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA12(value)   (SPW_LINK2_DISTACKPI_RCS_DA12_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA12_Pos)) /* Assigment of value for DA12 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA13_Pos      _UINT32_(13)                                         /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA13_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA13_Pos)  /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA13(value)   (SPW_LINK2_DISTACKPI_RCS_DA13_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA13_Pos)) /* Assigment of value for DA13 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA14_Pos      _UINT32_(14)                                         /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA14_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA14_Pos)  /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA14(value)   (SPW_LINK2_DISTACKPI_RCS_DA14_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA14_Pos)) /* Assigment of value for DA14 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA15_Pos      _UINT32_(15)                                         /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA15_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA15_Pos)  /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA15(value)   (SPW_LINK2_DISTACKPI_RCS_DA15_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA15_Pos)) /* Assigment of value for DA15 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA16_Pos      _UINT32_(16)                                         /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA16_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA16_Pos)  /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA16(value)   (SPW_LINK2_DISTACKPI_RCS_DA16_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA16_Pos)) /* Assigment of value for DA16 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA17_Pos      _UINT32_(17)                                         /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA17_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA17_Pos)  /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA17(value)   (SPW_LINK2_DISTACKPI_RCS_DA17_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA17_Pos)) /* Assigment of value for DA17 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA18_Pos      _UINT32_(18)                                         /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA18_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA18_Pos)  /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA18(value)   (SPW_LINK2_DISTACKPI_RCS_DA18_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA18_Pos)) /* Assigment of value for DA18 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA19_Pos      _UINT32_(19)                                         /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA19_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA19_Pos)  /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA19(value)   (SPW_LINK2_DISTACKPI_RCS_DA19_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA19_Pos)) /* Assigment of value for DA19 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA20_Pos      _UINT32_(20)                                         /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA20_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA20_Pos)  /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA20(value)   (SPW_LINK2_DISTACKPI_RCS_DA20_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA20_Pos)) /* Assigment of value for DA20 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA21_Pos      _UINT32_(21)                                         /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA21_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA21_Pos)  /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA21(value)   (SPW_LINK2_DISTACKPI_RCS_DA21_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA21_Pos)) /* Assigment of value for DA21 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA22_Pos      _UINT32_(22)                                         /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA22_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA22_Pos)  /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA22(value)   (SPW_LINK2_DISTACKPI_RCS_DA22_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA22_Pos)) /* Assigment of value for DA22 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA23_Pos      _UINT32_(23)                                         /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA23_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA23_Pos)  /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA23(value)   (SPW_LINK2_DISTACKPI_RCS_DA23_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA23_Pos)) /* Assigment of value for DA23 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA24_Pos      _UINT32_(24)                                         /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA24_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA24_Pos)  /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA24(value)   (SPW_LINK2_DISTACKPI_RCS_DA24_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA24_Pos)) /* Assigment of value for DA24 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA25_Pos      _UINT32_(25)                                         /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA25_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA25_Pos)  /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA25(value)   (SPW_LINK2_DISTACKPI_RCS_DA25_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA25_Pos)) /* Assigment of value for DA25 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA26_Pos      _UINT32_(26)                                         /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA26_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA26_Pos)  /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA26(value)   (SPW_LINK2_DISTACKPI_RCS_DA26_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA26_Pos)) /* Assigment of value for DA26 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA27_Pos      _UINT32_(27)                                         /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA27_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA27_Pos)  /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA27(value)   (SPW_LINK2_DISTACKPI_RCS_DA27_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA27_Pos)) /* Assigment of value for DA27 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA28_Pos      _UINT32_(28)                                         /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA28_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA28_Pos)  /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA28(value)   (SPW_LINK2_DISTACKPI_RCS_DA28_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA28_Pos)) /* Assigment of value for DA28 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA29_Pos      _UINT32_(29)                                         /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA29_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA29_Pos)  /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA29(value)   (SPW_LINK2_DISTACKPI_RCS_DA29_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA29_Pos)) /* Assigment of value for DA29 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA30_Pos      _UINT32_(30)                                         /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA30_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA30_Pos)  /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA30(value)   (SPW_LINK2_DISTACKPI_RCS_DA30_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA30_Pos)) /* Assigment of value for DA30 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_DA31_Pos      _UINT32_(31)                                         /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_RCS_DA31_Msk      (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_RCS_DA31_Pos)  /* (SPW_LINK2_DISTACKPI_RCS) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_RCS_DA31(value)   (SPW_LINK2_DISTACKPI_RCS_DA31_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA31_Pos)) /* Assigment of value for DA31 in the SPW_LINK2_DISTACKPI_RCS register */
#define SPW_LINK2_DISTACKPI_RCS_Msk           _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK2_DISTACKPI_RCS) Register Mask  */

#define SPW_LINK2_DISTACKPI_RCS_DA_Pos        _UINT32_(0)                                          /* (SPW_LINK2_DISTACKPI_RCS Position) Distributed Acknowledge */
#define SPW_LINK2_DISTACKPI_RCS_DA_Msk        (_UINT32_(0xFFFFFFFF) << SPW_LINK2_DISTACKPI_RCS_DA_Pos) /* (SPW_LINK2_DISTACKPI_RCS Mask) DA */
#define SPW_LINK2_DISTACKPI_RCS_DA(value)     (SPW_LINK2_DISTACKPI_RCS_DA_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_RCS_DA_Pos)) 

/* -------- SPW_LINK2_DISTACKIM : (SPW Offset: 0x4F0) (R/W 32) SpW Link 2 Distributed Interrupt Acknowledge Mask -------- */
#define SPW_LINK2_DISTACKIM_DA0_Pos           _UINT32_(0)                                          /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA0_Msk           (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA0_Pos)       /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA0(value)        (SPW_LINK2_DISTACKIM_DA0_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA0_Pos)) /* Assigment of value for DA0 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA1_Pos           _UINT32_(1)                                          /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA1_Msk           (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA1_Pos)       /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA1(value)        (SPW_LINK2_DISTACKIM_DA1_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA1_Pos)) /* Assigment of value for DA1 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA2_Pos           _UINT32_(2)                                          /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA2_Msk           (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA2_Pos)       /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA2(value)        (SPW_LINK2_DISTACKIM_DA2_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA2_Pos)) /* Assigment of value for DA2 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA3_Pos           _UINT32_(3)                                          /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA3_Msk           (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA3_Pos)       /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA3(value)        (SPW_LINK2_DISTACKIM_DA3_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA3_Pos)) /* Assigment of value for DA3 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA4_Pos           _UINT32_(4)                                          /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA4_Msk           (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA4_Pos)       /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA4(value)        (SPW_LINK2_DISTACKIM_DA4_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA4_Pos)) /* Assigment of value for DA4 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA5_Pos           _UINT32_(5)                                          /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA5_Msk           (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA5_Pos)       /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA5(value)        (SPW_LINK2_DISTACKIM_DA5_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA5_Pos)) /* Assigment of value for DA5 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA6_Pos           _UINT32_(6)                                          /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA6_Msk           (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA6_Pos)       /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA6(value)        (SPW_LINK2_DISTACKIM_DA6_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA6_Pos)) /* Assigment of value for DA6 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA7_Pos           _UINT32_(7)                                          /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA7_Msk           (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA7_Pos)       /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA7(value)        (SPW_LINK2_DISTACKIM_DA7_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA7_Pos)) /* Assigment of value for DA7 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA8_Pos           _UINT32_(8)                                          /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA8_Msk           (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA8_Pos)       /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA8(value)        (SPW_LINK2_DISTACKIM_DA8_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA8_Pos)) /* Assigment of value for DA8 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA9_Pos           _UINT32_(9)                                          /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA9_Msk           (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA9_Pos)       /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA9(value)        (SPW_LINK2_DISTACKIM_DA9_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA9_Pos)) /* Assigment of value for DA9 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA10_Pos          _UINT32_(10)                                         /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA10_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA10_Pos)      /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA10(value)       (SPW_LINK2_DISTACKIM_DA10_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA10_Pos)) /* Assigment of value for DA10 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA11_Pos          _UINT32_(11)                                         /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA11_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA11_Pos)      /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA11(value)       (SPW_LINK2_DISTACKIM_DA11_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA11_Pos)) /* Assigment of value for DA11 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA12_Pos          _UINT32_(12)                                         /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA12_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA12_Pos)      /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA12(value)       (SPW_LINK2_DISTACKIM_DA12_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA12_Pos)) /* Assigment of value for DA12 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA13_Pos          _UINT32_(13)                                         /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA13_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA13_Pos)      /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA13(value)       (SPW_LINK2_DISTACKIM_DA13_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA13_Pos)) /* Assigment of value for DA13 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA14_Pos          _UINT32_(14)                                         /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA14_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA14_Pos)      /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA14(value)       (SPW_LINK2_DISTACKIM_DA14_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA14_Pos)) /* Assigment of value for DA14 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA15_Pos          _UINT32_(15)                                         /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA15_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA15_Pos)      /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA15(value)       (SPW_LINK2_DISTACKIM_DA15_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA15_Pos)) /* Assigment of value for DA15 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA16_Pos          _UINT32_(16)                                         /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA16_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA16_Pos)      /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA16(value)       (SPW_LINK2_DISTACKIM_DA16_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA16_Pos)) /* Assigment of value for DA16 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA17_Pos          _UINT32_(17)                                         /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA17_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA17_Pos)      /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA17(value)       (SPW_LINK2_DISTACKIM_DA17_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA17_Pos)) /* Assigment of value for DA17 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA18_Pos          _UINT32_(18)                                         /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA18_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA18_Pos)      /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA18(value)       (SPW_LINK2_DISTACKIM_DA18_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA18_Pos)) /* Assigment of value for DA18 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA19_Pos          _UINT32_(19)                                         /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA19_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA19_Pos)      /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA19(value)       (SPW_LINK2_DISTACKIM_DA19_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA19_Pos)) /* Assigment of value for DA19 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA20_Pos          _UINT32_(20)                                         /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA20_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA20_Pos)      /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA20(value)       (SPW_LINK2_DISTACKIM_DA20_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA20_Pos)) /* Assigment of value for DA20 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA21_Pos          _UINT32_(21)                                         /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA21_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA21_Pos)      /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA21(value)       (SPW_LINK2_DISTACKIM_DA21_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA21_Pos)) /* Assigment of value for DA21 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA22_Pos          _UINT32_(22)                                         /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA22_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA22_Pos)      /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA22(value)       (SPW_LINK2_DISTACKIM_DA22_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA22_Pos)) /* Assigment of value for DA22 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA23_Pos          _UINT32_(23)                                         /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA23_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA23_Pos)      /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA23(value)       (SPW_LINK2_DISTACKIM_DA23_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA23_Pos)) /* Assigment of value for DA23 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA24_Pos          _UINT32_(24)                                         /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA24_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA24_Pos)      /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA24(value)       (SPW_LINK2_DISTACKIM_DA24_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA24_Pos)) /* Assigment of value for DA24 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA25_Pos          _UINT32_(25)                                         /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA25_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA25_Pos)      /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA25(value)       (SPW_LINK2_DISTACKIM_DA25_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA25_Pos)) /* Assigment of value for DA25 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA26_Pos          _UINT32_(26)                                         /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA26_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA26_Pos)      /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA26(value)       (SPW_LINK2_DISTACKIM_DA26_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA26_Pos)) /* Assigment of value for DA26 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA27_Pos          _UINT32_(27)                                         /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA27_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA27_Pos)      /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA27(value)       (SPW_LINK2_DISTACKIM_DA27_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA27_Pos)) /* Assigment of value for DA27 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA28_Pos          _UINT32_(28)                                         /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA28_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA28_Pos)      /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA28(value)       (SPW_LINK2_DISTACKIM_DA28_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA28_Pos)) /* Assigment of value for DA28 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA29_Pos          _UINT32_(29)                                         /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA29_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA29_Pos)      /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA29(value)       (SPW_LINK2_DISTACKIM_DA29_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA29_Pos)) /* Assigment of value for DA29 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA30_Pos          _UINT32_(30)                                         /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA30_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA30_Pos)      /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA30(value)       (SPW_LINK2_DISTACKIM_DA30_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA30_Pos)) /* Assigment of value for DA30 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_DA31_Pos          _UINT32_(31)                                         /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_DA31_Msk          (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_DA31_Pos)      /* (SPW_LINK2_DISTACKIM) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_DA31(value)       (SPW_LINK2_DISTACKIM_DA31_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA31_Pos)) /* Assigment of value for DA31 in the SPW_LINK2_DISTACKIM register */
#define SPW_LINK2_DISTACKIM_Msk               _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK2_DISTACKIM) Register Mask  */

#define SPW_LINK2_DISTACKIM_DA_Pos            _UINT32_(0)                                          /* (SPW_LINK2_DISTACKIM Position) Distributed Acknowledge mask */
#define SPW_LINK2_DISTACKIM_DA_Msk            (_UINT32_(0xFFFFFFFF) << SPW_LINK2_DISTACKIM_DA_Pos) /* (SPW_LINK2_DISTACKIM Mask) DA */
#define SPW_LINK2_DISTACKIM_DA(value)         (SPW_LINK2_DISTACKIM_DA_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_DA_Pos)) 

/* -------- SPW_LINK2_DISTACKPI_C : (SPW Offset: 0x4F4) ( /W 32) SpW Link 2 Distributed Interrupt Acknowledge Clear Pending Interrupt -------- */
#define SPW_LINK2_DISTACKPI_C_DA0_Pos         _UINT32_(0)                                          /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA0_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA0_Pos)     /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA0(value)      (SPW_LINK2_DISTACKPI_C_DA0_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA0_Pos)) /* Assigment of value for DA0 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA1_Pos         _UINT32_(1)                                          /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA1_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA1_Pos)     /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA1(value)      (SPW_LINK2_DISTACKPI_C_DA1_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA1_Pos)) /* Assigment of value for DA1 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA2_Pos         _UINT32_(2)                                          /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA2_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA2_Pos)     /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA2(value)      (SPW_LINK2_DISTACKPI_C_DA2_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA2_Pos)) /* Assigment of value for DA2 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA3_Pos         _UINT32_(3)                                          /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA3_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA3_Pos)     /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA3(value)      (SPW_LINK2_DISTACKPI_C_DA3_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA3_Pos)) /* Assigment of value for DA3 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA4_Pos         _UINT32_(4)                                          /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA4_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA4_Pos)     /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA4(value)      (SPW_LINK2_DISTACKPI_C_DA4_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA4_Pos)) /* Assigment of value for DA4 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA5_Pos         _UINT32_(5)                                          /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA5_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA5_Pos)     /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA5(value)      (SPW_LINK2_DISTACKPI_C_DA5_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA5_Pos)) /* Assigment of value for DA5 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA6_Pos         _UINT32_(6)                                          /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA6_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA6_Pos)     /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA6(value)      (SPW_LINK2_DISTACKPI_C_DA6_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA6_Pos)) /* Assigment of value for DA6 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA7_Pos         _UINT32_(7)                                          /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA7_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA7_Pos)     /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA7(value)      (SPW_LINK2_DISTACKPI_C_DA7_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA7_Pos)) /* Assigment of value for DA7 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA8_Pos         _UINT32_(8)                                          /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA8_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA8_Pos)     /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA8(value)      (SPW_LINK2_DISTACKPI_C_DA8_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA8_Pos)) /* Assigment of value for DA8 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA9_Pos         _UINT32_(9)                                          /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA9_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA9_Pos)     /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA9(value)      (SPW_LINK2_DISTACKPI_C_DA9_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA9_Pos)) /* Assigment of value for DA9 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA10_Pos        _UINT32_(10)                                         /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA10_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA10_Pos)    /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA10(value)     (SPW_LINK2_DISTACKPI_C_DA10_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA10_Pos)) /* Assigment of value for DA10 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA11_Pos        _UINT32_(11)                                         /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA11_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA11_Pos)    /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA11(value)     (SPW_LINK2_DISTACKPI_C_DA11_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA11_Pos)) /* Assigment of value for DA11 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA12_Pos        _UINT32_(12)                                         /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA12_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA12_Pos)    /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA12(value)     (SPW_LINK2_DISTACKPI_C_DA12_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA12_Pos)) /* Assigment of value for DA12 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA13_Pos        _UINT32_(13)                                         /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA13_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA13_Pos)    /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA13(value)     (SPW_LINK2_DISTACKPI_C_DA13_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA13_Pos)) /* Assigment of value for DA13 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA14_Pos        _UINT32_(14)                                         /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA14_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA14_Pos)    /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA14(value)     (SPW_LINK2_DISTACKPI_C_DA14_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA14_Pos)) /* Assigment of value for DA14 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA15_Pos        _UINT32_(15)                                         /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA15_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA15_Pos)    /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA15(value)     (SPW_LINK2_DISTACKPI_C_DA15_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA15_Pos)) /* Assigment of value for DA15 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA16_Pos        _UINT32_(16)                                         /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA16_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA16_Pos)    /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA16(value)     (SPW_LINK2_DISTACKPI_C_DA16_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA16_Pos)) /* Assigment of value for DA16 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA17_Pos        _UINT32_(17)                                         /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA17_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA17_Pos)    /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA17(value)     (SPW_LINK2_DISTACKPI_C_DA17_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA17_Pos)) /* Assigment of value for DA17 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA18_Pos        _UINT32_(18)                                         /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA18_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA18_Pos)    /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA18(value)     (SPW_LINK2_DISTACKPI_C_DA18_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA18_Pos)) /* Assigment of value for DA18 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA19_Pos        _UINT32_(19)                                         /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA19_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA19_Pos)    /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA19(value)     (SPW_LINK2_DISTACKPI_C_DA19_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA19_Pos)) /* Assigment of value for DA19 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA20_Pos        _UINT32_(20)                                         /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA20_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA20_Pos)    /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA20(value)     (SPW_LINK2_DISTACKPI_C_DA20_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA20_Pos)) /* Assigment of value for DA20 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA21_Pos        _UINT32_(21)                                         /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA21_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA21_Pos)    /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA21(value)     (SPW_LINK2_DISTACKPI_C_DA21_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA21_Pos)) /* Assigment of value for DA21 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA22_Pos        _UINT32_(22)                                         /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA22_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA22_Pos)    /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA22(value)     (SPW_LINK2_DISTACKPI_C_DA22_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA22_Pos)) /* Assigment of value for DA22 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA23_Pos        _UINT32_(23)                                         /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA23_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA23_Pos)    /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA23(value)     (SPW_LINK2_DISTACKPI_C_DA23_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA23_Pos)) /* Assigment of value for DA23 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA24_Pos        _UINT32_(24)                                         /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA24_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA24_Pos)    /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA24(value)     (SPW_LINK2_DISTACKPI_C_DA24_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA24_Pos)) /* Assigment of value for DA24 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA25_Pos        _UINT32_(25)                                         /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA25_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA25_Pos)    /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA25(value)     (SPW_LINK2_DISTACKPI_C_DA25_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA25_Pos)) /* Assigment of value for DA25 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA26_Pos        _UINT32_(26)                                         /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA26_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA26_Pos)    /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA26(value)     (SPW_LINK2_DISTACKPI_C_DA26_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA26_Pos)) /* Assigment of value for DA26 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA27_Pos        _UINT32_(27)                                         /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA27_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA27_Pos)    /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA27(value)     (SPW_LINK2_DISTACKPI_C_DA27_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA27_Pos)) /* Assigment of value for DA27 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA28_Pos        _UINT32_(28)                                         /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA28_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA28_Pos)    /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA28(value)     (SPW_LINK2_DISTACKPI_C_DA28_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA28_Pos)) /* Assigment of value for DA28 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA29_Pos        _UINT32_(29)                                         /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA29_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA29_Pos)    /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA29(value)     (SPW_LINK2_DISTACKPI_C_DA29_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA29_Pos)) /* Assigment of value for DA29 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA30_Pos        _UINT32_(30)                                         /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA30_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA30_Pos)    /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA30(value)     (SPW_LINK2_DISTACKPI_C_DA30_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA30_Pos)) /* Assigment of value for DA30 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_DA31_Pos        _UINT32_(31)                                         /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Position */
#define SPW_LINK2_DISTACKPI_C_DA31_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKPI_C_DA31_Pos)    /* (SPW_LINK2_DISTACKPI_C) Distributed Acknowledge Mask */
#define SPW_LINK2_DISTACKPI_C_DA31(value)     (SPW_LINK2_DISTACKPI_C_DA31_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA31_Pos)) /* Assigment of value for DA31 in the SPW_LINK2_DISTACKPI_C register */
#define SPW_LINK2_DISTACKPI_C_Msk             _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK2_DISTACKPI_C) Register Mask  */

#define SPW_LINK2_DISTACKPI_C_DA_Pos          _UINT32_(0)                                          /* (SPW_LINK2_DISTACKPI_C Position) Distributed Acknowledge */
#define SPW_LINK2_DISTACKPI_C_DA_Msk          (_UINT32_(0xFFFFFFFF) << SPW_LINK2_DISTACKPI_C_DA_Pos) /* (SPW_LINK2_DISTACKPI_C Mask) DA */
#define SPW_LINK2_DISTACKPI_C_DA(value)       (SPW_LINK2_DISTACKPI_C_DA_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKPI_C_DA_Pos)) 

/* -------- SPW_LINK2_DISTACKIM_S : (SPW Offset: 0x4F8) ( /W 32) SpW Link 2 Distributed Interrupt Acknowledge Set Mask -------- */
#define SPW_LINK2_DISTACKIM_S_DA0_Pos         _UINT32_(0)                                          /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA0_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA0_Pos)     /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA0(value)      (SPW_LINK2_DISTACKIM_S_DA0_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA0_Pos)) /* Assigment of value for DA0 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA1_Pos         _UINT32_(1)                                          /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA1_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA1_Pos)     /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA1(value)      (SPW_LINK2_DISTACKIM_S_DA1_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA1_Pos)) /* Assigment of value for DA1 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA2_Pos         _UINT32_(2)                                          /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA2_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA2_Pos)     /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA2(value)      (SPW_LINK2_DISTACKIM_S_DA2_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA2_Pos)) /* Assigment of value for DA2 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA3_Pos         _UINT32_(3)                                          /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA3_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA3_Pos)     /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA3(value)      (SPW_LINK2_DISTACKIM_S_DA3_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA3_Pos)) /* Assigment of value for DA3 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA4_Pos         _UINT32_(4)                                          /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA4_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA4_Pos)     /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA4(value)      (SPW_LINK2_DISTACKIM_S_DA4_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA4_Pos)) /* Assigment of value for DA4 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA5_Pos         _UINT32_(5)                                          /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA5_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA5_Pos)     /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA5(value)      (SPW_LINK2_DISTACKIM_S_DA5_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA5_Pos)) /* Assigment of value for DA5 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA6_Pos         _UINT32_(6)                                          /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA6_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA6_Pos)     /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA6(value)      (SPW_LINK2_DISTACKIM_S_DA6_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA6_Pos)) /* Assigment of value for DA6 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA7_Pos         _UINT32_(7)                                          /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA7_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA7_Pos)     /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA7(value)      (SPW_LINK2_DISTACKIM_S_DA7_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA7_Pos)) /* Assigment of value for DA7 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA8_Pos         _UINT32_(8)                                          /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA8_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA8_Pos)     /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA8(value)      (SPW_LINK2_DISTACKIM_S_DA8_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA8_Pos)) /* Assigment of value for DA8 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA9_Pos         _UINT32_(9)                                          /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA9_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA9_Pos)     /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA9(value)      (SPW_LINK2_DISTACKIM_S_DA9_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA9_Pos)) /* Assigment of value for DA9 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA10_Pos        _UINT32_(10)                                         /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA10_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA10_Pos)    /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA10(value)     (SPW_LINK2_DISTACKIM_S_DA10_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA10_Pos)) /* Assigment of value for DA10 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA11_Pos        _UINT32_(11)                                         /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA11_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA11_Pos)    /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA11(value)     (SPW_LINK2_DISTACKIM_S_DA11_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA11_Pos)) /* Assigment of value for DA11 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA12_Pos        _UINT32_(12)                                         /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA12_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA12_Pos)    /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA12(value)     (SPW_LINK2_DISTACKIM_S_DA12_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA12_Pos)) /* Assigment of value for DA12 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA13_Pos        _UINT32_(13)                                         /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA13_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA13_Pos)    /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA13(value)     (SPW_LINK2_DISTACKIM_S_DA13_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA13_Pos)) /* Assigment of value for DA13 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA14_Pos        _UINT32_(14)                                         /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA14_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA14_Pos)    /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA14(value)     (SPW_LINK2_DISTACKIM_S_DA14_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA14_Pos)) /* Assigment of value for DA14 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA15_Pos        _UINT32_(15)                                         /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA15_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA15_Pos)    /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA15(value)     (SPW_LINK2_DISTACKIM_S_DA15_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA15_Pos)) /* Assigment of value for DA15 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA16_Pos        _UINT32_(16)                                         /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA16_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA16_Pos)    /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA16(value)     (SPW_LINK2_DISTACKIM_S_DA16_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA16_Pos)) /* Assigment of value for DA16 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA17_Pos        _UINT32_(17)                                         /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA17_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA17_Pos)    /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA17(value)     (SPW_LINK2_DISTACKIM_S_DA17_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA17_Pos)) /* Assigment of value for DA17 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA18_Pos        _UINT32_(18)                                         /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA18_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA18_Pos)    /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA18(value)     (SPW_LINK2_DISTACKIM_S_DA18_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA18_Pos)) /* Assigment of value for DA18 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA19_Pos        _UINT32_(19)                                         /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA19_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA19_Pos)    /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA19(value)     (SPW_LINK2_DISTACKIM_S_DA19_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA19_Pos)) /* Assigment of value for DA19 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA20_Pos        _UINT32_(20)                                         /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA20_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA20_Pos)    /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA20(value)     (SPW_LINK2_DISTACKIM_S_DA20_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA20_Pos)) /* Assigment of value for DA20 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA21_Pos        _UINT32_(21)                                         /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA21_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA21_Pos)    /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA21(value)     (SPW_LINK2_DISTACKIM_S_DA21_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA21_Pos)) /* Assigment of value for DA21 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA22_Pos        _UINT32_(22)                                         /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA22_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA22_Pos)    /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA22(value)     (SPW_LINK2_DISTACKIM_S_DA22_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA22_Pos)) /* Assigment of value for DA22 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA23_Pos        _UINT32_(23)                                         /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA23_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA23_Pos)    /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA23(value)     (SPW_LINK2_DISTACKIM_S_DA23_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA23_Pos)) /* Assigment of value for DA23 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA24_Pos        _UINT32_(24)                                         /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA24_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA24_Pos)    /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA24(value)     (SPW_LINK2_DISTACKIM_S_DA24_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA24_Pos)) /* Assigment of value for DA24 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA25_Pos        _UINT32_(25)                                         /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA25_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA25_Pos)    /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA25(value)     (SPW_LINK2_DISTACKIM_S_DA25_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA25_Pos)) /* Assigment of value for DA25 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA26_Pos        _UINT32_(26)                                         /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA26_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA26_Pos)    /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA26(value)     (SPW_LINK2_DISTACKIM_S_DA26_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA26_Pos)) /* Assigment of value for DA26 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA27_Pos        _UINT32_(27)                                         /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA27_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA27_Pos)    /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA27(value)     (SPW_LINK2_DISTACKIM_S_DA27_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA27_Pos)) /* Assigment of value for DA27 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA28_Pos        _UINT32_(28)                                         /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA28_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA28_Pos)    /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA28(value)     (SPW_LINK2_DISTACKIM_S_DA28_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA28_Pos)) /* Assigment of value for DA28 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA29_Pos        _UINT32_(29)                                         /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA29_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA29_Pos)    /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA29(value)     (SPW_LINK2_DISTACKIM_S_DA29_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA29_Pos)) /* Assigment of value for DA29 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA30_Pos        _UINT32_(30)                                         /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA30_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA30_Pos)    /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA30(value)     (SPW_LINK2_DISTACKIM_S_DA30_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA30_Pos)) /* Assigment of value for DA30 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_DA31_Pos        _UINT32_(31)                                         /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_S_DA31_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_S_DA31_Pos)    /* (SPW_LINK2_DISTACKIM_S) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_S_DA31(value)     (SPW_LINK2_DISTACKIM_S_DA31_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA31_Pos)) /* Assigment of value for DA31 in the SPW_LINK2_DISTACKIM_S register */
#define SPW_LINK2_DISTACKIM_S_Msk             _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK2_DISTACKIM_S) Register Mask  */

#define SPW_LINK2_DISTACKIM_S_DA_Pos          _UINT32_(0)                                          /* (SPW_LINK2_DISTACKIM_S Position) Distributed Acknowledge mask */
#define SPW_LINK2_DISTACKIM_S_DA_Msk          (_UINT32_(0xFFFFFFFF) << SPW_LINK2_DISTACKIM_S_DA_Pos) /* (SPW_LINK2_DISTACKIM_S Mask) DA */
#define SPW_LINK2_DISTACKIM_S_DA(value)       (SPW_LINK2_DISTACKIM_S_DA_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_S_DA_Pos)) 

/* -------- SPW_LINK2_DISTACKIM_C : (SPW Offset: 0x4FC) ( /W 32) SpW Link 2 Distributed Interrupt Acknowledge Clear Mask -------- */
#define SPW_LINK2_DISTACKIM_C_DA0_Pos         _UINT32_(0)                                          /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA0_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA0_Pos)     /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA0(value)      (SPW_LINK2_DISTACKIM_C_DA0_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA0_Pos)) /* Assigment of value for DA0 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA1_Pos         _UINT32_(1)                                          /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA1_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA1_Pos)     /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA1(value)      (SPW_LINK2_DISTACKIM_C_DA1_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA1_Pos)) /* Assigment of value for DA1 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA2_Pos         _UINT32_(2)                                          /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA2_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA2_Pos)     /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA2(value)      (SPW_LINK2_DISTACKIM_C_DA2_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA2_Pos)) /* Assigment of value for DA2 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA3_Pos         _UINT32_(3)                                          /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA3_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA3_Pos)     /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA3(value)      (SPW_LINK2_DISTACKIM_C_DA3_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA3_Pos)) /* Assigment of value for DA3 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA4_Pos         _UINT32_(4)                                          /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA4_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA4_Pos)     /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA4(value)      (SPW_LINK2_DISTACKIM_C_DA4_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA4_Pos)) /* Assigment of value for DA4 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA5_Pos         _UINT32_(5)                                          /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA5_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA5_Pos)     /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA5(value)      (SPW_LINK2_DISTACKIM_C_DA5_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA5_Pos)) /* Assigment of value for DA5 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA6_Pos         _UINT32_(6)                                          /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA6_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA6_Pos)     /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA6(value)      (SPW_LINK2_DISTACKIM_C_DA6_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA6_Pos)) /* Assigment of value for DA6 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA7_Pos         _UINT32_(7)                                          /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA7_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA7_Pos)     /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA7(value)      (SPW_LINK2_DISTACKIM_C_DA7_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA7_Pos)) /* Assigment of value for DA7 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA8_Pos         _UINT32_(8)                                          /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA8_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA8_Pos)     /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA8(value)      (SPW_LINK2_DISTACKIM_C_DA8_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA8_Pos)) /* Assigment of value for DA8 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA9_Pos         _UINT32_(9)                                          /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA9_Msk         (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA9_Pos)     /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA9(value)      (SPW_LINK2_DISTACKIM_C_DA9_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA9_Pos)) /* Assigment of value for DA9 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA10_Pos        _UINT32_(10)                                         /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA10_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA10_Pos)    /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA10(value)     (SPW_LINK2_DISTACKIM_C_DA10_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA10_Pos)) /* Assigment of value for DA10 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA11_Pos        _UINT32_(11)                                         /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA11_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA11_Pos)    /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA11(value)     (SPW_LINK2_DISTACKIM_C_DA11_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA11_Pos)) /* Assigment of value for DA11 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA12_Pos        _UINT32_(12)                                         /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA12_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA12_Pos)    /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA12(value)     (SPW_LINK2_DISTACKIM_C_DA12_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA12_Pos)) /* Assigment of value for DA12 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA13_Pos        _UINT32_(13)                                         /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA13_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA13_Pos)    /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA13(value)     (SPW_LINK2_DISTACKIM_C_DA13_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA13_Pos)) /* Assigment of value for DA13 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA14_Pos        _UINT32_(14)                                         /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA14_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA14_Pos)    /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA14(value)     (SPW_LINK2_DISTACKIM_C_DA14_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA14_Pos)) /* Assigment of value for DA14 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA15_Pos        _UINT32_(15)                                         /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA15_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA15_Pos)    /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA15(value)     (SPW_LINK2_DISTACKIM_C_DA15_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA15_Pos)) /* Assigment of value for DA15 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA16_Pos        _UINT32_(16)                                         /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA16_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA16_Pos)    /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA16(value)     (SPW_LINK2_DISTACKIM_C_DA16_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA16_Pos)) /* Assigment of value for DA16 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA17_Pos        _UINT32_(17)                                         /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA17_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA17_Pos)    /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA17(value)     (SPW_LINK2_DISTACKIM_C_DA17_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA17_Pos)) /* Assigment of value for DA17 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA18_Pos        _UINT32_(18)                                         /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA18_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA18_Pos)    /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA18(value)     (SPW_LINK2_DISTACKIM_C_DA18_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA18_Pos)) /* Assigment of value for DA18 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA19_Pos        _UINT32_(19)                                         /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA19_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA19_Pos)    /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA19(value)     (SPW_LINK2_DISTACKIM_C_DA19_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA19_Pos)) /* Assigment of value for DA19 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA20_Pos        _UINT32_(20)                                         /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA20_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA20_Pos)    /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA20(value)     (SPW_LINK2_DISTACKIM_C_DA20_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA20_Pos)) /* Assigment of value for DA20 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA21_Pos        _UINT32_(21)                                         /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA21_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA21_Pos)    /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA21(value)     (SPW_LINK2_DISTACKIM_C_DA21_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA21_Pos)) /* Assigment of value for DA21 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA22_Pos        _UINT32_(22)                                         /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA22_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA22_Pos)    /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA22(value)     (SPW_LINK2_DISTACKIM_C_DA22_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA22_Pos)) /* Assigment of value for DA22 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA23_Pos        _UINT32_(23)                                         /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA23_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA23_Pos)    /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA23(value)     (SPW_LINK2_DISTACKIM_C_DA23_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA23_Pos)) /* Assigment of value for DA23 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA24_Pos        _UINT32_(24)                                         /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA24_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA24_Pos)    /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA24(value)     (SPW_LINK2_DISTACKIM_C_DA24_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA24_Pos)) /* Assigment of value for DA24 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA25_Pos        _UINT32_(25)                                         /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA25_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA25_Pos)    /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA25(value)     (SPW_LINK2_DISTACKIM_C_DA25_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA25_Pos)) /* Assigment of value for DA25 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA26_Pos        _UINT32_(26)                                         /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA26_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA26_Pos)    /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA26(value)     (SPW_LINK2_DISTACKIM_C_DA26_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA26_Pos)) /* Assigment of value for DA26 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA27_Pos        _UINT32_(27)                                         /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA27_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA27_Pos)    /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA27(value)     (SPW_LINK2_DISTACKIM_C_DA27_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA27_Pos)) /* Assigment of value for DA27 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA28_Pos        _UINT32_(28)                                         /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA28_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA28_Pos)    /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA28(value)     (SPW_LINK2_DISTACKIM_C_DA28_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA28_Pos)) /* Assigment of value for DA28 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA29_Pos        _UINT32_(29)                                         /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA29_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA29_Pos)    /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA29(value)     (SPW_LINK2_DISTACKIM_C_DA29_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA29_Pos)) /* Assigment of value for DA29 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA30_Pos        _UINT32_(30)                                         /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA30_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA30_Pos)    /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA30(value)     (SPW_LINK2_DISTACKIM_C_DA30_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA30_Pos)) /* Assigment of value for DA30 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_DA31_Pos        _UINT32_(31)                                         /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Position */
#define SPW_LINK2_DISTACKIM_C_DA31_Msk        (_UINT32_(0x1) << SPW_LINK2_DISTACKIM_C_DA31_Pos)    /* (SPW_LINK2_DISTACKIM_C) Distributed Acknowledge mask Mask */
#define SPW_LINK2_DISTACKIM_C_DA31(value)     (SPW_LINK2_DISTACKIM_C_DA31_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA31_Pos)) /* Assigment of value for DA31 in the SPW_LINK2_DISTACKIM_C register */
#define SPW_LINK2_DISTACKIM_C_Msk             _UINT32_(0xFFFFFFFF)                                 /* (SPW_LINK2_DISTACKIM_C) Register Mask  */

#define SPW_LINK2_DISTACKIM_C_DA_Pos          _UINT32_(0)                                          /* (SPW_LINK2_DISTACKIM_C Position) Distributed Acknowledge mask */
#define SPW_LINK2_DISTACKIM_C_DA_Msk          (_UINT32_(0xFFFFFFFF) << SPW_LINK2_DISTACKIM_C_DA_Pos) /* (SPW_LINK2_DISTACKIM_C Mask) DA */
#define SPW_LINK2_DISTACKIM_C_DA(value)       (SPW_LINK2_DISTACKIM_C_DA_Msk & (_UINT32_(value) << SPW_LINK2_DISTACKIM_C_DA_Pos)) 

/* -------- SPW_PKTRX1_PI_RM : (SPW Offset: 0x800) ( R/ 32) PktRx Pending Read Masked Interrupt -------- */
#define SPW_PKTRX1_PI_RM_DEACT_Pos            _UINT32_(0)                                          /* (SPW_PKTRX1_PI_RM) Deactivated Position */
#define SPW_PKTRX1_PI_RM_DEACT_Msk            (_UINT32_(0x1) << SPW_PKTRX1_PI_RM_DEACT_Pos)        /* (SPW_PKTRX1_PI_RM) Deactivated Mask */
#define SPW_PKTRX1_PI_RM_DEACT(value)         (SPW_PKTRX1_PI_RM_DEACT_Msk & (_UINT32_(value) << SPW_PKTRX1_PI_RM_DEACT_Pos)) /* Assigment of value for DEACT in the SPW_PKTRX1_PI_RM register */
#define SPW_PKTRX1_PI_RM_EOP_Pos              _UINT32_(1)                                          /* (SPW_PKTRX1_PI_RM) EOP seen Position */
#define SPW_PKTRX1_PI_RM_EOP_Msk              (_UINT32_(0x1) << SPW_PKTRX1_PI_RM_EOP_Pos)          /* (SPW_PKTRX1_PI_RM) EOP seen Mask */
#define SPW_PKTRX1_PI_RM_EOP(value)           (SPW_PKTRX1_PI_RM_EOP_Msk & (_UINT32_(value) << SPW_PKTRX1_PI_RM_EOP_Pos)) /* Assigment of value for EOP in the SPW_PKTRX1_PI_RM register */
#define SPW_PKTRX1_PI_RM_EEP_Pos              _UINT32_(2)                                          /* (SPW_PKTRX1_PI_RM) EEP seen Position */
#define SPW_PKTRX1_PI_RM_EEP_Msk              (_UINT32_(0x1) << SPW_PKTRX1_PI_RM_EEP_Pos)          /* (SPW_PKTRX1_PI_RM) EEP seen Mask */
#define SPW_PKTRX1_PI_RM_EEP(value)           (SPW_PKTRX1_PI_RM_EEP_Msk & (_UINT32_(value) << SPW_PKTRX1_PI_RM_EEP_Pos)) /* Assigment of value for EEP in the SPW_PKTRX1_PI_RM register */
#define SPW_PKTRX1_PI_RM_DISCARD_Pos          _UINT32_(3)                                          /* (SPW_PKTRX1_PI_RM) Packet Discard Position */
#define SPW_PKTRX1_PI_RM_DISCARD_Msk          (_UINT32_(0x1) << SPW_PKTRX1_PI_RM_DISCARD_Pos)      /* (SPW_PKTRX1_PI_RM) Packet Discard Mask */
#define SPW_PKTRX1_PI_RM_DISCARD(value)       (SPW_PKTRX1_PI_RM_DISCARD_Msk & (_UINT32_(value) << SPW_PKTRX1_PI_RM_DISCARD_Pos)) /* Assigment of value for DISCARD in the SPW_PKTRX1_PI_RM register */
#define SPW_PKTRX1_PI_RM_ACT_Pos              _UINT32_(4)                                          /* (SPW_PKTRX1_PI_RM) Activated Position */
#define SPW_PKTRX1_PI_RM_ACT_Msk              (_UINT32_(0x1) << SPW_PKTRX1_PI_RM_ACT_Pos)          /* (SPW_PKTRX1_PI_RM) Activated Mask */
#define SPW_PKTRX1_PI_RM_ACT(value)           (SPW_PKTRX1_PI_RM_ACT_Msk & (_UINT32_(value) << SPW_PKTRX1_PI_RM_ACT_Pos)) /* Assigment of value for ACT in the SPW_PKTRX1_PI_RM register */
#define SPW_PKTRX1_PI_RM_Msk                  _UINT32_(0x0000001F)                                 /* (SPW_PKTRX1_PI_RM) Register Mask  */


/* -------- SPW_PKTRX1_PI_RCM : (SPW Offset: 0x804) ( R/ 32) PktRx Pending Read and Clear Masked Interrupt -------- */
#define SPW_PKTRX1_PI_RCM_DEACT_Pos           _UINT32_(0)                                          /* (SPW_PKTRX1_PI_RCM) Deactivated Position */
#define SPW_PKTRX1_PI_RCM_DEACT_Msk           (_UINT32_(0x1) << SPW_PKTRX1_PI_RCM_DEACT_Pos)       /* (SPW_PKTRX1_PI_RCM) Deactivated Mask */
#define SPW_PKTRX1_PI_RCM_DEACT(value)        (SPW_PKTRX1_PI_RCM_DEACT_Msk & (_UINT32_(value) << SPW_PKTRX1_PI_RCM_DEACT_Pos)) /* Assigment of value for DEACT in the SPW_PKTRX1_PI_RCM register */
#define SPW_PKTRX1_PI_RCM_EOP_Pos             _UINT32_(1)                                          /* (SPW_PKTRX1_PI_RCM) EOP seen Position */
#define SPW_PKTRX1_PI_RCM_EOP_Msk             (_UINT32_(0x1) << SPW_PKTRX1_PI_RCM_EOP_Pos)         /* (SPW_PKTRX1_PI_RCM) EOP seen Mask */
#define SPW_PKTRX1_PI_RCM_EOP(value)          (SPW_PKTRX1_PI_RCM_EOP_Msk & (_UINT32_(value) << SPW_PKTRX1_PI_RCM_EOP_Pos)) /* Assigment of value for EOP in the SPW_PKTRX1_PI_RCM register */
#define SPW_PKTRX1_PI_RCM_EEP_Pos             _UINT32_(2)                                          /* (SPW_PKTRX1_PI_RCM) EEP seen Position */
#define SPW_PKTRX1_PI_RCM_EEP_Msk             (_UINT32_(0x1) << SPW_PKTRX1_PI_RCM_EEP_Pos)         /* (SPW_PKTRX1_PI_RCM) EEP seen Mask */
#define SPW_PKTRX1_PI_RCM_EEP(value)          (SPW_PKTRX1_PI_RCM_EEP_Msk & (_UINT32_(value) << SPW_PKTRX1_PI_RCM_EEP_Pos)) /* Assigment of value for EEP in the SPW_PKTRX1_PI_RCM register */
#define SPW_PKTRX1_PI_RCM_DISCARD_Pos         _UINT32_(3)                                          /* (SPW_PKTRX1_PI_RCM) Packet Discard Position */
#define SPW_PKTRX1_PI_RCM_DISCARD_Msk         (_UINT32_(0x1) << SPW_PKTRX1_PI_RCM_DISCARD_Pos)     /* (SPW_PKTRX1_PI_RCM) Packet Discard Mask */
#define SPW_PKTRX1_PI_RCM_DISCARD(value)      (SPW_PKTRX1_PI_RCM_DISCARD_Msk & (_UINT32_(value) << SPW_PKTRX1_PI_RCM_DISCARD_Pos)) /* Assigment of value for DISCARD in the SPW_PKTRX1_PI_RCM register */
#define SPW_PKTRX1_PI_RCM_ACT_Pos             _UINT32_(4)                                          /* (SPW_PKTRX1_PI_RCM) Activated Position */
#define SPW_PKTRX1_PI_RCM_ACT_Msk             (_UINT32_(0x1) << SPW_PKTRX1_PI_RCM_ACT_Pos)         /* (SPW_PKTRX1_PI_RCM) Activated Mask */
#define SPW_PKTRX1_PI_RCM_ACT(value)          (SPW_PKTRX1_PI_RCM_ACT_Msk & (_UINT32_(value) << SPW_PKTRX1_PI_RCM_ACT_Pos)) /* Assigment of value for ACT in the SPW_PKTRX1_PI_RCM register */
#define SPW_PKTRX1_PI_RCM_Msk                 _UINT32_(0x0000001F)                                 /* (SPW_PKTRX1_PI_RCM) Register Mask  */


/* -------- SPW_PKTRX1_PI_R : (SPW Offset: 0x808) ( R/ 32) PktRx Pending Read Interrupt -------- */
#define SPW_PKTRX1_PI_R_DEACT_Pos             _UINT32_(0)                                          /* (SPW_PKTRX1_PI_R) Deactivated Position */
#define SPW_PKTRX1_PI_R_DEACT_Msk             (_UINT32_(0x1) << SPW_PKTRX1_PI_R_DEACT_Pos)         /* (SPW_PKTRX1_PI_R) Deactivated Mask */
#define SPW_PKTRX1_PI_R_DEACT(value)          (SPW_PKTRX1_PI_R_DEACT_Msk & (_UINT32_(value) << SPW_PKTRX1_PI_R_DEACT_Pos)) /* Assigment of value for DEACT in the SPW_PKTRX1_PI_R register */
#define SPW_PKTRX1_PI_R_EOP_Pos               _UINT32_(1)                                          /* (SPW_PKTRX1_PI_R) EOP seen Position */
#define SPW_PKTRX1_PI_R_EOP_Msk               (_UINT32_(0x1) << SPW_PKTRX1_PI_R_EOP_Pos)           /* (SPW_PKTRX1_PI_R) EOP seen Mask */
#define SPW_PKTRX1_PI_R_EOP(value)            (SPW_PKTRX1_PI_R_EOP_Msk & (_UINT32_(value) << SPW_PKTRX1_PI_R_EOP_Pos)) /* Assigment of value for EOP in the SPW_PKTRX1_PI_R register */
#define SPW_PKTRX1_PI_R_EEP_Pos               _UINT32_(2)                                          /* (SPW_PKTRX1_PI_R) EEP seen Position */
#define SPW_PKTRX1_PI_R_EEP_Msk               (_UINT32_(0x1) << SPW_PKTRX1_PI_R_EEP_Pos)           /* (SPW_PKTRX1_PI_R) EEP seen Mask */
#define SPW_PKTRX1_PI_R_EEP(value)            (SPW_PKTRX1_PI_R_EEP_Msk & (_UINT32_(value) << SPW_PKTRX1_PI_R_EEP_Pos)) /* Assigment of value for EEP in the SPW_PKTRX1_PI_R register */
#define SPW_PKTRX1_PI_R_DISCARD_Pos           _UINT32_(3)                                          /* (SPW_PKTRX1_PI_R) Packet Discard Position */
#define SPW_PKTRX1_PI_R_DISCARD_Msk           (_UINT32_(0x1) << SPW_PKTRX1_PI_R_DISCARD_Pos)       /* (SPW_PKTRX1_PI_R) Packet Discard Mask */
#define SPW_PKTRX1_PI_R_DISCARD(value)        (SPW_PKTRX1_PI_R_DISCARD_Msk & (_UINT32_(value) << SPW_PKTRX1_PI_R_DISCARD_Pos)) /* Assigment of value for DISCARD in the SPW_PKTRX1_PI_R register */
#define SPW_PKTRX1_PI_R_ACT_Pos               _UINT32_(4)                                          /* (SPW_PKTRX1_PI_R) Activated Position */
#define SPW_PKTRX1_PI_R_ACT_Msk               (_UINT32_(0x1) << SPW_PKTRX1_PI_R_ACT_Pos)           /* (SPW_PKTRX1_PI_R) Activated Mask */
#define SPW_PKTRX1_PI_R_ACT(value)            (SPW_PKTRX1_PI_R_ACT_Msk & (_UINT32_(value) << SPW_PKTRX1_PI_R_ACT_Pos)) /* Assigment of value for ACT in the SPW_PKTRX1_PI_R register */
#define SPW_PKTRX1_PI_R_Msk                   _UINT32_(0x0000001F)                                 /* (SPW_PKTRX1_PI_R) Register Mask  */


/* -------- SPW_PKTRX1_PI_RCS : (SPW Offset: 0x80C) (R/W 32) PktRx Pending Read, Clear and Enabled Interrupt -------- */
#define SPW_PKTRX1_PI_RCS_DEACT_Pos           _UINT32_(0)                                          /* (SPW_PKTRX1_PI_RCS) Deactivated Position */
#define SPW_PKTRX1_PI_RCS_DEACT_Msk           (_UINT32_(0x1) << SPW_PKTRX1_PI_RCS_DEACT_Pos)       /* (SPW_PKTRX1_PI_RCS) Deactivated Mask */
#define SPW_PKTRX1_PI_RCS_DEACT(value)        (SPW_PKTRX1_PI_RCS_DEACT_Msk & (_UINT32_(value) << SPW_PKTRX1_PI_RCS_DEACT_Pos)) /* Assigment of value for DEACT in the SPW_PKTRX1_PI_RCS register */
#define SPW_PKTRX1_PI_RCS_EOP_Pos             _UINT32_(1)                                          /* (SPW_PKTRX1_PI_RCS) EOP seen Position */
#define SPW_PKTRX1_PI_RCS_EOP_Msk             (_UINT32_(0x1) << SPW_PKTRX1_PI_RCS_EOP_Pos)         /* (SPW_PKTRX1_PI_RCS) EOP seen Mask */
#define SPW_PKTRX1_PI_RCS_EOP(value)          (SPW_PKTRX1_PI_RCS_EOP_Msk & (_UINT32_(value) << SPW_PKTRX1_PI_RCS_EOP_Pos)) /* Assigment of value for EOP in the SPW_PKTRX1_PI_RCS register */
#define SPW_PKTRX1_PI_RCS_EEP_Pos             _UINT32_(2)                                          /* (SPW_PKTRX1_PI_RCS) EEP seen Position */
#define SPW_PKTRX1_PI_RCS_EEP_Msk             (_UINT32_(0x1) << SPW_PKTRX1_PI_RCS_EEP_Pos)         /* (SPW_PKTRX1_PI_RCS) EEP seen Mask */
#define SPW_PKTRX1_PI_RCS_EEP(value)          (SPW_PKTRX1_PI_RCS_EEP_Msk & (_UINT32_(value) << SPW_PKTRX1_PI_RCS_EEP_Pos)) /* Assigment of value for EEP in the SPW_PKTRX1_PI_RCS register */
#define SPW_PKTRX1_PI_RCS_DISCARD_Pos         _UINT32_(3)                                          /* (SPW_PKTRX1_PI_RCS) Packet Discard Position */
#define SPW_PKTRX1_PI_RCS_DISCARD_Msk         (_UINT32_(0x1) << SPW_PKTRX1_PI_RCS_DISCARD_Pos)     /* (SPW_PKTRX1_PI_RCS) Packet Discard Mask */
#define SPW_PKTRX1_PI_RCS_DISCARD(value)      (SPW_PKTRX1_PI_RCS_DISCARD_Msk & (_UINT32_(value) << SPW_PKTRX1_PI_RCS_DISCARD_Pos)) /* Assigment of value for DISCARD in the SPW_PKTRX1_PI_RCS register */
#define SPW_PKTRX1_PI_RCS_ACT_Pos             _UINT32_(4)                                          /* (SPW_PKTRX1_PI_RCS) Activated Position */
#define SPW_PKTRX1_PI_RCS_ACT_Msk             (_UINT32_(0x1) << SPW_PKTRX1_PI_RCS_ACT_Pos)         /* (SPW_PKTRX1_PI_RCS) Activated Mask */
#define SPW_PKTRX1_PI_RCS_ACT(value)          (SPW_PKTRX1_PI_RCS_ACT_Msk & (_UINT32_(value) << SPW_PKTRX1_PI_RCS_ACT_Pos)) /* Assigment of value for ACT in the SPW_PKTRX1_PI_RCS register */
#define SPW_PKTRX1_PI_RCS_Msk                 _UINT32_(0x0000001F)                                 /* (SPW_PKTRX1_PI_RCS) Register Mask  */


/* -------- SPW_PKTRX1_IM : (SPW Offset: 0x810) (R/W 32) PktRx Interrupt Mask -------- */
#define SPW_PKTRX1_IM_DEACT_Pos               _UINT32_(0)                                          /* (SPW_PKTRX1_IM) Deactivated Position */
#define SPW_PKTRX1_IM_DEACT_Msk               (_UINT32_(0x1) << SPW_PKTRX1_IM_DEACT_Pos)           /* (SPW_PKTRX1_IM) Deactivated Mask */
#define SPW_PKTRX1_IM_DEACT(value)            (SPW_PKTRX1_IM_DEACT_Msk & (_UINT32_(value) << SPW_PKTRX1_IM_DEACT_Pos)) /* Assigment of value for DEACT in the SPW_PKTRX1_IM register */
#define SPW_PKTRX1_IM_EOP_Pos                 _UINT32_(1)                                          /* (SPW_PKTRX1_IM) EOP seen Position */
#define SPW_PKTRX1_IM_EOP_Msk                 (_UINT32_(0x1) << SPW_PKTRX1_IM_EOP_Pos)             /* (SPW_PKTRX1_IM) EOP seen Mask */
#define SPW_PKTRX1_IM_EOP(value)              (SPW_PKTRX1_IM_EOP_Msk & (_UINT32_(value) << SPW_PKTRX1_IM_EOP_Pos)) /* Assigment of value for EOP in the SPW_PKTRX1_IM register */
#define SPW_PKTRX1_IM_EEP_Pos                 _UINT32_(2)                                          /* (SPW_PKTRX1_IM) EEP seen Position */
#define SPW_PKTRX1_IM_EEP_Msk                 (_UINT32_(0x1) << SPW_PKTRX1_IM_EEP_Pos)             /* (SPW_PKTRX1_IM) EEP seen Mask */
#define SPW_PKTRX1_IM_EEP(value)              (SPW_PKTRX1_IM_EEP_Msk & (_UINT32_(value) << SPW_PKTRX1_IM_EEP_Pos)) /* Assigment of value for EEP in the SPW_PKTRX1_IM register */
#define SPW_PKTRX1_IM_DISCARD_Pos             _UINT32_(3)                                          /* (SPW_PKTRX1_IM) Packet Discard Position */
#define SPW_PKTRX1_IM_DISCARD_Msk             (_UINT32_(0x1) << SPW_PKTRX1_IM_DISCARD_Pos)         /* (SPW_PKTRX1_IM) Packet Discard Mask */
#define SPW_PKTRX1_IM_DISCARD(value)          (SPW_PKTRX1_IM_DISCARD_Msk & (_UINT32_(value) << SPW_PKTRX1_IM_DISCARD_Pos)) /* Assigment of value for DISCARD in the SPW_PKTRX1_IM register */
#define SPW_PKTRX1_IM_ACT_Pos                 _UINT32_(4)                                          /* (SPW_PKTRX1_IM) Activated Position */
#define SPW_PKTRX1_IM_ACT_Msk                 (_UINT32_(0x1) << SPW_PKTRX1_IM_ACT_Pos)             /* (SPW_PKTRX1_IM) Activated Mask */
#define SPW_PKTRX1_IM_ACT(value)              (SPW_PKTRX1_IM_ACT_Msk & (_UINT32_(value) << SPW_PKTRX1_IM_ACT_Pos)) /* Assigment of value for ACT in the SPW_PKTRX1_IM register */
#define SPW_PKTRX1_IM_Msk                     _UINT32_(0x0000001F)                                 /* (SPW_PKTRX1_IM) Register Mask  */


/* -------- SPW_PKTRX1_PI_C : (SPW Offset: 0x814) ( /W 32) PktRx Clear Pending Interrupt -------- */
#define SPW_PKTRX1_PI_C_DEACT_Pos             _UINT32_(0)                                          /* (SPW_PKTRX1_PI_C) Deactivated Position */
#define SPW_PKTRX1_PI_C_DEACT_Msk             (_UINT32_(0x1) << SPW_PKTRX1_PI_C_DEACT_Pos)         /* (SPW_PKTRX1_PI_C) Deactivated Mask */
#define SPW_PKTRX1_PI_C_DEACT(value)          (SPW_PKTRX1_PI_C_DEACT_Msk & (_UINT32_(value) << SPW_PKTRX1_PI_C_DEACT_Pos)) /* Assigment of value for DEACT in the SPW_PKTRX1_PI_C register */
#define SPW_PKTRX1_PI_C_EOP_Pos               _UINT32_(1)                                          /* (SPW_PKTRX1_PI_C) EOP seen Position */
#define SPW_PKTRX1_PI_C_EOP_Msk               (_UINT32_(0x1) << SPW_PKTRX1_PI_C_EOP_Pos)           /* (SPW_PKTRX1_PI_C) EOP seen Mask */
#define SPW_PKTRX1_PI_C_EOP(value)            (SPW_PKTRX1_PI_C_EOP_Msk & (_UINT32_(value) << SPW_PKTRX1_PI_C_EOP_Pos)) /* Assigment of value for EOP in the SPW_PKTRX1_PI_C register */
#define SPW_PKTRX1_PI_C_EEP_Pos               _UINT32_(2)                                          /* (SPW_PKTRX1_PI_C) EEP seen Position */
#define SPW_PKTRX1_PI_C_EEP_Msk               (_UINT32_(0x1) << SPW_PKTRX1_PI_C_EEP_Pos)           /* (SPW_PKTRX1_PI_C) EEP seen Mask */
#define SPW_PKTRX1_PI_C_EEP(value)            (SPW_PKTRX1_PI_C_EEP_Msk & (_UINT32_(value) << SPW_PKTRX1_PI_C_EEP_Pos)) /* Assigment of value for EEP in the SPW_PKTRX1_PI_C register */
#define SPW_PKTRX1_PI_C_DISCARD_Pos           _UINT32_(3)                                          /* (SPW_PKTRX1_PI_C) Packet Discard Position */
#define SPW_PKTRX1_PI_C_DISCARD_Msk           (_UINT32_(0x1) << SPW_PKTRX1_PI_C_DISCARD_Pos)       /* (SPW_PKTRX1_PI_C) Packet Discard Mask */
#define SPW_PKTRX1_PI_C_DISCARD(value)        (SPW_PKTRX1_PI_C_DISCARD_Msk & (_UINT32_(value) << SPW_PKTRX1_PI_C_DISCARD_Pos)) /* Assigment of value for DISCARD in the SPW_PKTRX1_PI_C register */
#define SPW_PKTRX1_PI_C_ACT_Pos               _UINT32_(4)                                          /* (SPW_PKTRX1_PI_C) Activated Position */
#define SPW_PKTRX1_PI_C_ACT_Msk               (_UINT32_(0x1) << SPW_PKTRX1_PI_C_ACT_Pos)           /* (SPW_PKTRX1_PI_C) Activated Mask */
#define SPW_PKTRX1_PI_C_ACT(value)            (SPW_PKTRX1_PI_C_ACT_Msk & (_UINT32_(value) << SPW_PKTRX1_PI_C_ACT_Pos)) /* Assigment of value for ACT in the SPW_PKTRX1_PI_C register */
#define SPW_PKTRX1_PI_C_Msk                   _UINT32_(0x0000001F)                                 /* (SPW_PKTRX1_PI_C) Register Mask  */


/* -------- SPW_PKTRX1_IM_S : (SPW Offset: 0x818) ( /W 32) PktRx Interrupt Set Mask -------- */
#define SPW_PKTRX1_IM_S_DEACT_Pos             _UINT32_(0)                                          /* (SPW_PKTRX1_IM_S) Deactivated Position */
#define SPW_PKTRX1_IM_S_DEACT_Msk             (_UINT32_(0x1) << SPW_PKTRX1_IM_S_DEACT_Pos)         /* (SPW_PKTRX1_IM_S) Deactivated Mask */
#define SPW_PKTRX1_IM_S_DEACT(value)          (SPW_PKTRX1_IM_S_DEACT_Msk & (_UINT32_(value) << SPW_PKTRX1_IM_S_DEACT_Pos)) /* Assigment of value for DEACT in the SPW_PKTRX1_IM_S register */
#define SPW_PKTRX1_IM_S_EOP_Pos               _UINT32_(1)                                          /* (SPW_PKTRX1_IM_S) EOP seen Position */
#define SPW_PKTRX1_IM_S_EOP_Msk               (_UINT32_(0x1) << SPW_PKTRX1_IM_S_EOP_Pos)           /* (SPW_PKTRX1_IM_S) EOP seen Mask */
#define SPW_PKTRX1_IM_S_EOP(value)            (SPW_PKTRX1_IM_S_EOP_Msk & (_UINT32_(value) << SPW_PKTRX1_IM_S_EOP_Pos)) /* Assigment of value for EOP in the SPW_PKTRX1_IM_S register */
#define SPW_PKTRX1_IM_S_EEP_Pos               _UINT32_(2)                                          /* (SPW_PKTRX1_IM_S) EEP seen Position */
#define SPW_PKTRX1_IM_S_EEP_Msk               (_UINT32_(0x1) << SPW_PKTRX1_IM_S_EEP_Pos)           /* (SPW_PKTRX1_IM_S) EEP seen Mask */
#define SPW_PKTRX1_IM_S_EEP(value)            (SPW_PKTRX1_IM_S_EEP_Msk & (_UINT32_(value) << SPW_PKTRX1_IM_S_EEP_Pos)) /* Assigment of value for EEP in the SPW_PKTRX1_IM_S register */
#define SPW_PKTRX1_IM_S_DISCARD_Pos           _UINT32_(3)                                          /* (SPW_PKTRX1_IM_S) Packet Discard Position */
#define SPW_PKTRX1_IM_S_DISCARD_Msk           (_UINT32_(0x1) << SPW_PKTRX1_IM_S_DISCARD_Pos)       /* (SPW_PKTRX1_IM_S) Packet Discard Mask */
#define SPW_PKTRX1_IM_S_DISCARD(value)        (SPW_PKTRX1_IM_S_DISCARD_Msk & (_UINT32_(value) << SPW_PKTRX1_IM_S_DISCARD_Pos)) /* Assigment of value for DISCARD in the SPW_PKTRX1_IM_S register */
#define SPW_PKTRX1_IM_S_ACT_Pos               _UINT32_(4)                                          /* (SPW_PKTRX1_IM_S) Activated Position */
#define SPW_PKTRX1_IM_S_ACT_Msk               (_UINT32_(0x1) << SPW_PKTRX1_IM_S_ACT_Pos)           /* (SPW_PKTRX1_IM_S) Activated Mask */
#define SPW_PKTRX1_IM_S_ACT(value)            (SPW_PKTRX1_IM_S_ACT_Msk & (_UINT32_(value) << SPW_PKTRX1_IM_S_ACT_Pos)) /* Assigment of value for ACT in the SPW_PKTRX1_IM_S register */
#define SPW_PKTRX1_IM_S_Msk                   _UINT32_(0x0000001F)                                 /* (SPW_PKTRX1_IM_S) Register Mask  */


/* -------- SPW_PKTRX1_IM_C : (SPW Offset: 0x81C) ( /W 32) PktRx Interrupt Clear Mask -------- */
#define SPW_PKTRX1_IM_C_DEACT_Pos             _UINT32_(0)                                          /* (SPW_PKTRX1_IM_C) Deactivated Position */
#define SPW_PKTRX1_IM_C_DEACT_Msk             (_UINT32_(0x1) << SPW_PKTRX1_IM_C_DEACT_Pos)         /* (SPW_PKTRX1_IM_C) Deactivated Mask */
#define SPW_PKTRX1_IM_C_DEACT(value)          (SPW_PKTRX1_IM_C_DEACT_Msk & (_UINT32_(value) << SPW_PKTRX1_IM_C_DEACT_Pos)) /* Assigment of value for DEACT in the SPW_PKTRX1_IM_C register */
#define SPW_PKTRX1_IM_C_EOP_Pos               _UINT32_(1)                                          /* (SPW_PKTRX1_IM_C) EOP seen Position */
#define SPW_PKTRX1_IM_C_EOP_Msk               (_UINT32_(0x1) << SPW_PKTRX1_IM_C_EOP_Pos)           /* (SPW_PKTRX1_IM_C) EOP seen Mask */
#define SPW_PKTRX1_IM_C_EOP(value)            (SPW_PKTRX1_IM_C_EOP_Msk & (_UINT32_(value) << SPW_PKTRX1_IM_C_EOP_Pos)) /* Assigment of value for EOP in the SPW_PKTRX1_IM_C register */
#define SPW_PKTRX1_IM_C_EEP_Pos               _UINT32_(2)                                          /* (SPW_PKTRX1_IM_C) EEP seen Position */
#define SPW_PKTRX1_IM_C_EEP_Msk               (_UINT32_(0x1) << SPW_PKTRX1_IM_C_EEP_Pos)           /* (SPW_PKTRX1_IM_C) EEP seen Mask */
#define SPW_PKTRX1_IM_C_EEP(value)            (SPW_PKTRX1_IM_C_EEP_Msk & (_UINT32_(value) << SPW_PKTRX1_IM_C_EEP_Pos)) /* Assigment of value for EEP in the SPW_PKTRX1_IM_C register */
#define SPW_PKTRX1_IM_C_DISCARD_Pos           _UINT32_(3)                                          /* (SPW_PKTRX1_IM_C) Packet Discard Position */
#define SPW_PKTRX1_IM_C_DISCARD_Msk           (_UINT32_(0x1) << SPW_PKTRX1_IM_C_DISCARD_Pos)       /* (SPW_PKTRX1_IM_C) Packet Discard Mask */
#define SPW_PKTRX1_IM_C_DISCARD(value)        (SPW_PKTRX1_IM_C_DISCARD_Msk & (_UINT32_(value) << SPW_PKTRX1_IM_C_DISCARD_Pos)) /* Assigment of value for DISCARD in the SPW_PKTRX1_IM_C register */
#define SPW_PKTRX1_IM_C_ACT_Pos               _UINT32_(4)                                          /* (SPW_PKTRX1_IM_C) Activated Position */
#define SPW_PKTRX1_IM_C_ACT_Msk               (_UINT32_(0x1) << SPW_PKTRX1_IM_C_ACT_Pos)           /* (SPW_PKTRX1_IM_C) Activated Mask */
#define SPW_PKTRX1_IM_C_ACT(value)            (SPW_PKTRX1_IM_C_ACT_Msk & (_UINT32_(value) << SPW_PKTRX1_IM_C_ACT_Pos)) /* Assigment of value for ACT in the SPW_PKTRX1_IM_C register */
#define SPW_PKTRX1_IM_C_Msk                   _UINT32_(0x0000001F)                                 /* (SPW_PKTRX1_IM_C) Register Mask  */


/* -------- SPW_PKTRX1_CFG : (SPW Offset: 0x820) (R/W 32) PktRx Config -------- */
#define SPW_PKTRX1_CFG_DISCARD_Pos            _UINT32_(0)                                          /* (SPW_PKTRX1_CFG) Discard Position */
#define SPW_PKTRX1_CFG_DISCARD_Msk            (_UINT32_(0x1) << SPW_PKTRX1_CFG_DISCARD_Pos)        /* (SPW_PKTRX1_CFG) Discard Mask */
#define SPW_PKTRX1_CFG_DISCARD(value)         (SPW_PKTRX1_CFG_DISCARD_Msk & (_UINT32_(value) << SPW_PKTRX1_CFG_DISCARD_Pos)) /* Assigment of value for DISCARD in the SPW_PKTRX1_CFG register */
#define SPW_PKTRX1_CFG_Msk                    _UINT32_(0x00000001)                                 /* (SPW_PKTRX1_CFG) Register Mask  */


/* -------- SPW_PKTRX1_STATUS : (SPW Offset: 0x824) ( R/ 32) PktRx Status -------- */
#define SPW_PKTRX1_STATUS_COUNT_Pos           _UINT32_(0)                                          /* (SPW_PKTRX1_STATUS) Packet Count Position */
#define SPW_PKTRX1_STATUS_COUNT_Msk           (_UINT32_(0xFFFF) << SPW_PKTRX1_STATUS_COUNT_Pos)    /* (SPW_PKTRX1_STATUS) Packet Count Mask */
#define SPW_PKTRX1_STATUS_COUNT(value)        (SPW_PKTRX1_STATUS_COUNT_Msk & (_UINT32_(value) << SPW_PKTRX1_STATUS_COUNT_Pos)) /* Assigment of value for COUNT in the SPW_PKTRX1_STATUS register */
#define SPW_PKTRX1_STATUS_PACKET_Pos          _UINT32_(16)                                         /* (SPW_PKTRX1_STATUS) Packet Position */
#define SPW_PKTRX1_STATUS_PACKET_Msk          (_UINT32_(0x1) << SPW_PKTRX1_STATUS_PACKET_Pos)      /* (SPW_PKTRX1_STATUS) Packet Mask */
#define SPW_PKTRX1_STATUS_PACKET(value)       (SPW_PKTRX1_STATUS_PACKET_Msk & (_UINT32_(value) << SPW_PKTRX1_STATUS_PACKET_Pos)) /* Assigment of value for PACKET in the SPW_PKTRX1_STATUS register */
#define SPW_PKTRX1_STATUS_LOCKED_Pos          _UINT32_(17)                                         /* (SPW_PKTRX1_STATUS) Locked Position */
#define SPW_PKTRX1_STATUS_LOCKED_Msk          (_UINT32_(0x1) << SPW_PKTRX1_STATUS_LOCKED_Pos)      /* (SPW_PKTRX1_STATUS) Locked Mask */
#define SPW_PKTRX1_STATUS_LOCKED(value)       (SPW_PKTRX1_STATUS_LOCKED_Msk & (_UINT32_(value) << SPW_PKTRX1_STATUS_LOCKED_Pos)) /* Assigment of value for LOCKED in the SPW_PKTRX1_STATUS register */
#define SPW_PKTRX1_STATUS_ARM_Pos             _UINT32_(18)                                         /* (SPW_PKTRX1_STATUS) Armed Position */
#define SPW_PKTRX1_STATUS_ARM_Msk             (_UINT32_(0x1) << SPW_PKTRX1_STATUS_ARM_Pos)         /* (SPW_PKTRX1_STATUS) Armed Mask */
#define SPW_PKTRX1_STATUS_ARM(value)          (SPW_PKTRX1_STATUS_ARM_Msk & (_UINT32_(value) << SPW_PKTRX1_STATUS_ARM_Pos)) /* Assigment of value for ARM in the SPW_PKTRX1_STATUS register */
#define SPW_PKTRX1_STATUS_ACT_Pos             _UINT32_(19)                                         /* (SPW_PKTRX1_STATUS) Active Position */
#define SPW_PKTRX1_STATUS_ACT_Msk             (_UINT32_(0x1) << SPW_PKTRX1_STATUS_ACT_Pos)         /* (SPW_PKTRX1_STATUS) Active Mask */
#define SPW_PKTRX1_STATUS_ACT(value)          (SPW_PKTRX1_STATUS_ACT_Msk & (_UINT32_(value) << SPW_PKTRX1_STATUS_ACT_Pos)) /* Assigment of value for ACT in the SPW_PKTRX1_STATUS register */
#define SPW_PKTRX1_STATUS_PENDING_Pos         _UINT32_(20)                                         /* (SPW_PKTRX1_STATUS) Pending Position */
#define SPW_PKTRX1_STATUS_PENDING_Msk         (_UINT32_(0x1) << SPW_PKTRX1_STATUS_PENDING_Pos)     /* (SPW_PKTRX1_STATUS) Pending Mask */
#define SPW_PKTRX1_STATUS_PENDING(value)      (SPW_PKTRX1_STATUS_PENDING_Msk & (_UINT32_(value) << SPW_PKTRX1_STATUS_PENDING_Pos)) /* Assigment of value for PENDING in the SPW_PKTRX1_STATUS register */
#define SPW_PKTRX1_STATUS_DEACT_Pos           _UINT32_(21)                                         /* (SPW_PKTRX1_STATUS) Deactivating Position */
#define SPW_PKTRX1_STATUS_DEACT_Msk           (_UINT32_(0x1) << SPW_PKTRX1_STATUS_DEACT_Pos)       /* (SPW_PKTRX1_STATUS) Deactivating Mask */
#define SPW_PKTRX1_STATUS_DEACT(value)        (SPW_PKTRX1_STATUS_DEACT_Msk & (_UINT32_(value) << SPW_PKTRX1_STATUS_DEACT_Pos)) /* Assigment of value for DEACT in the SPW_PKTRX1_STATUS register */
#define SPW_PKTRX1_STATUS_Msk                 _UINT32_(0x003FFFFF)                                 /* (SPW_PKTRX1_STATUS) Register Mask  */


/* -------- SPW_PKTRX1_NXTBUFDATAADDR : (SPW Offset: 0x830) (R/W 32) PktRx Next Buffer Data Address -------- */
#define SPW_PKTRX1_NXTBUFDATAADDR_ADDR_Pos    _UINT32_(0)                                          /* (SPW_PKTRX1_NXTBUFDATAADDR) Address Position */
#define SPW_PKTRX1_NXTBUFDATAADDR_ADDR_Msk    (_UINT32_(0xFFFFFFFF) << SPW_PKTRX1_NXTBUFDATAADDR_ADDR_Pos) /* (SPW_PKTRX1_NXTBUFDATAADDR) Address Mask */
#define SPW_PKTRX1_NXTBUFDATAADDR_ADDR(value) (SPW_PKTRX1_NXTBUFDATAADDR_ADDR_Msk & (_UINT32_(value) << SPW_PKTRX1_NXTBUFDATAADDR_ADDR_Pos)) /* Assigment of value for ADDR in the SPW_PKTRX1_NXTBUFDATAADDR register */
#define SPW_PKTRX1_NXTBUFDATAADDR_Msk         _UINT32_(0xFFFFFFFF)                                 /* (SPW_PKTRX1_NXTBUFDATAADDR) Register Mask  */


/* -------- SPW_PKTRX1_NXTBUFDATALEN : (SPW Offset: 0x834) (R/W 32) PktRx Next Buffer Data Length -------- */
#define SPW_PKTRX1_NXTBUFDATALEN_LEN_Pos      _UINT32_(0)                                          /* (SPW_PKTRX1_NXTBUFDATALEN) Length Position */
#define SPW_PKTRX1_NXTBUFDATALEN_LEN_Msk      (_UINT32_(0xFFFFFF) << SPW_PKTRX1_NXTBUFDATALEN_LEN_Pos) /* (SPW_PKTRX1_NXTBUFDATALEN) Length Mask */
#define SPW_PKTRX1_NXTBUFDATALEN_LEN(value)   (SPW_PKTRX1_NXTBUFDATALEN_LEN_Msk & (_UINT32_(value) << SPW_PKTRX1_NXTBUFDATALEN_LEN_Pos)) /* Assigment of value for LEN in the SPW_PKTRX1_NXTBUFDATALEN register */
#define SPW_PKTRX1_NXTBUFDATALEN_Msk          _UINT32_(0x00FFFFFF)                                 /* (SPW_PKTRX1_NXTBUFDATALEN) Register Mask  */


/* -------- SPW_PKTRX1_NXTBUFPKTADDR : (SPW Offset: 0x838) (R/W 32) PktRx Next Buffer Packet Address -------- */
#define SPW_PKTRX1_NXTBUFPKTADDR_ADDR_Pos     _UINT32_(0)                                          /* (SPW_PKTRX1_NXTBUFPKTADDR) Address Position */
#define SPW_PKTRX1_NXTBUFPKTADDR_ADDR_Msk     (_UINT32_(0xFFFFFFFF) << SPW_PKTRX1_NXTBUFPKTADDR_ADDR_Pos) /* (SPW_PKTRX1_NXTBUFPKTADDR) Address Mask */
#define SPW_PKTRX1_NXTBUFPKTADDR_ADDR(value)  (SPW_PKTRX1_NXTBUFPKTADDR_ADDR_Msk & (_UINT32_(value) << SPW_PKTRX1_NXTBUFPKTADDR_ADDR_Pos)) /* Assigment of value for ADDR in the SPW_PKTRX1_NXTBUFPKTADDR register */
#define SPW_PKTRX1_NXTBUFPKTADDR_Msk          _UINT32_(0xFFFFFFFF)                                 /* (SPW_PKTRX1_NXTBUFPKTADDR) Register Mask  */


/* -------- SPW_PKTRX1_NXTBUFCFG : (SPW Offset: 0x83C) (R/W 32) PktRx Next Buffer Config -------- */
#define SPW_PKTRX1_NXTBUFCFG_MAXCNT_Pos       _UINT32_(0)                                          /* (SPW_PKTRX1_NXTBUFCFG) Max Count Position */
#define SPW_PKTRX1_NXTBUFCFG_MAXCNT_Msk       (_UINT32_(0xFFFF) << SPW_PKTRX1_NXTBUFCFG_MAXCNT_Pos) /* (SPW_PKTRX1_NXTBUFCFG) Max Count Mask */
#define SPW_PKTRX1_NXTBUFCFG_MAXCNT(value)    (SPW_PKTRX1_NXTBUFCFG_MAXCNT_Msk & (_UINT32_(value) << SPW_PKTRX1_NXTBUFCFG_MAXCNT_Pos)) /* Assigment of value for MAXCNT in the SPW_PKTRX1_NXTBUFCFG register */
#define SPW_PKTRX1_NXTBUFCFG_VALUE_Pos        _UINT32_(16)                                         /* (SPW_PKTRX1_NXTBUFCFG) Start Value Position */
#define SPW_PKTRX1_NXTBUFCFG_VALUE_Msk        (_UINT32_(0x3F) << SPW_PKTRX1_NXTBUFCFG_VALUE_Pos)   /* (SPW_PKTRX1_NXTBUFCFG) Start Value Mask */
#define SPW_PKTRX1_NXTBUFCFG_VALUE(value)     (SPW_PKTRX1_NXTBUFCFG_VALUE_Msk & (_UINT32_(value) << SPW_PKTRX1_NXTBUFCFG_VALUE_Pos)) /* Assigment of value for VALUE in the SPW_PKTRX1_NXTBUFCFG register */
#define SPW_PKTRX1_NXTBUFCFG_START_Pos        _UINT32_(22)                                         /* (SPW_PKTRX1_NXTBUFCFG) Start Mode Position */
#define SPW_PKTRX1_NXTBUFCFG_START_Msk        (_UINT32_(0x7) << SPW_PKTRX1_NXTBUFCFG_START_Pos)    /* (SPW_PKTRX1_NXTBUFCFG) Start Mode Mask */
#define SPW_PKTRX1_NXTBUFCFG_START(value)     (SPW_PKTRX1_NXTBUFCFG_START_Msk & (_UINT32_(value) << SPW_PKTRX1_NXTBUFCFG_START_Pos)) /* Assigment of value for START in the SPW_PKTRX1_NXTBUFCFG register */
#define   SPW_PKTRX1_NXTBUFCFG_START_STARTEVENT_Val _UINT32_(0x0)                                        /* (SPW_PKTRX1_NXTBUFCFG) Start if any bit in Start Value matches an incoming event  */
#define   SPW_PKTRX1_NXTBUFCFG_START_STARTNOW_Val _UINT32_(0x1)                                        /* (SPW_PKTRX1_NXTBUFCFG) Start immediately. Request a deactivation on next packet boundary.  */
#define   SPW_PKTRX1_NXTBUFCFG_START_STARTTCH1_Val _UINT32_(0x2)                                        /* (SPW_PKTRX1_NXTBUFCFG) Start if Start Value matches an incoming Time Code from Time Code Handler 1  */
#define   SPW_PKTRX1_NXTBUFCFG_START_STARTLATER_Val _UINT32_(0x4)                                        /* (SPW_PKTRX1_NXTBUFCFG) Start when current buffer is deactivated (e.g., by buffer becoming full)  */
#define SPW_PKTRX1_NXTBUFCFG_START_STARTEVENT (SPW_PKTRX1_NXTBUFCFG_START_STARTEVENT_Val << SPW_PKTRX1_NXTBUFCFG_START_Pos) /* (SPW_PKTRX1_NXTBUFCFG) Start if any bit in Start Value matches an incoming event Position  */
#define SPW_PKTRX1_NXTBUFCFG_START_STARTNOW   (SPW_PKTRX1_NXTBUFCFG_START_STARTNOW_Val << SPW_PKTRX1_NXTBUFCFG_START_Pos) /* (SPW_PKTRX1_NXTBUFCFG) Start immediately. Request a deactivation on next packet boundary. Position  */
#define SPW_PKTRX1_NXTBUFCFG_START_STARTTCH1  (SPW_PKTRX1_NXTBUFCFG_START_STARTTCH1_Val << SPW_PKTRX1_NXTBUFCFG_START_Pos) /* (SPW_PKTRX1_NXTBUFCFG) Start if Start Value matches an incoming Time Code from Time Code Handler 1 Position  */
#define SPW_PKTRX1_NXTBUFCFG_START_STARTLATER (SPW_PKTRX1_NXTBUFCFG_START_STARTLATER_Val << SPW_PKTRX1_NXTBUFCFG_START_Pos) /* (SPW_PKTRX1_NXTBUFCFG) Start when current buffer is deactivated (e.g., by buffer becoming full) Position  */
#define SPW_PKTRX1_NXTBUFCFG_SPLIT_Pos        _UINT32_(30)                                         /* (SPW_PKTRX1_NXTBUFCFG) Split Pkt Position */
#define SPW_PKTRX1_NXTBUFCFG_SPLIT_Msk        (_UINT32_(0x1) << SPW_PKTRX1_NXTBUFCFG_SPLIT_Pos)    /* (SPW_PKTRX1_NXTBUFCFG) Split Pkt Mask */
#define SPW_PKTRX1_NXTBUFCFG_SPLIT(value)     (SPW_PKTRX1_NXTBUFCFG_SPLIT_Msk & (_UINT32_(value) << SPW_PKTRX1_NXTBUFCFG_SPLIT_Pos)) /* Assigment of value for SPLIT in the SPW_PKTRX1_NXTBUFCFG register */
#define SPW_PKTRX1_NXTBUFCFG_Msk              _UINT32_(0x41FFFFFF)                                 /* (SPW_PKTRX1_NXTBUFCFG) Register Mask  */


/* -------- SPW_PKTRX1_CURBUFDATAADDR : (SPW Offset: 0x840) ( R/ 32) PktRx Current Buffer Data Address -------- */
#define SPW_PKTRX1_CURBUFDATAADDR_ADDR_Pos    _UINT32_(0)                                          /* (SPW_PKTRX1_CURBUFDATAADDR) Address Position */
#define SPW_PKTRX1_CURBUFDATAADDR_ADDR_Msk    (_UINT32_(0xFFFFFFFF) << SPW_PKTRX1_CURBUFDATAADDR_ADDR_Pos) /* (SPW_PKTRX1_CURBUFDATAADDR) Address Mask */
#define SPW_PKTRX1_CURBUFDATAADDR_ADDR(value) (SPW_PKTRX1_CURBUFDATAADDR_ADDR_Msk & (_UINT32_(value) << SPW_PKTRX1_CURBUFDATAADDR_ADDR_Pos)) /* Assigment of value for ADDR in the SPW_PKTRX1_CURBUFDATAADDR register */
#define SPW_PKTRX1_CURBUFDATAADDR_Msk         _UINT32_(0xFFFFFFFF)                                 /* (SPW_PKTRX1_CURBUFDATAADDR) Register Mask  */


/* -------- SPW_PKTRX1_CURBUFDATALEN : (SPW Offset: 0x844) ( R/ 32) PktRx Current Buffer Data Length -------- */
#define SPW_PKTRX1_CURBUFDATALEN_LEN_Pos      _UINT32_(0)                                          /* (SPW_PKTRX1_CURBUFDATALEN) Length Position */
#define SPW_PKTRX1_CURBUFDATALEN_LEN_Msk      (_UINT32_(0xFFFFFF) << SPW_PKTRX1_CURBUFDATALEN_LEN_Pos) /* (SPW_PKTRX1_CURBUFDATALEN) Length Mask */
#define SPW_PKTRX1_CURBUFDATALEN_LEN(value)   (SPW_PKTRX1_CURBUFDATALEN_LEN_Msk & (_UINT32_(value) << SPW_PKTRX1_CURBUFDATALEN_LEN_Pos)) /* Assigment of value for LEN in the SPW_PKTRX1_CURBUFDATALEN register */
#define SPW_PKTRX1_CURBUFDATALEN_Msk          _UINT32_(0x00FFFFFF)                                 /* (SPW_PKTRX1_CURBUFDATALEN) Register Mask  */


/* -------- SPW_PKTRX1_CURBUFPKTADDR : (SPW Offset: 0x848) ( R/ 32) PktRx Current Buffer Packet Address -------- */
#define SPW_PKTRX1_CURBUFPKTADDR_ADDR_Pos     _UINT32_(0)                                          /* (SPW_PKTRX1_CURBUFPKTADDR) Address Position */
#define SPW_PKTRX1_CURBUFPKTADDR_ADDR_Msk     (_UINT32_(0xFFFFFFFF) << SPW_PKTRX1_CURBUFPKTADDR_ADDR_Pos) /* (SPW_PKTRX1_CURBUFPKTADDR) Address Mask */
#define SPW_PKTRX1_CURBUFPKTADDR_ADDR(value)  (SPW_PKTRX1_CURBUFPKTADDR_ADDR_Msk & (_UINT32_(value) << SPW_PKTRX1_CURBUFPKTADDR_ADDR_Pos)) /* Assigment of value for ADDR in the SPW_PKTRX1_CURBUFPKTADDR register */
#define SPW_PKTRX1_CURBUFPKTADDR_Msk          _UINT32_(0xFFFFFFFF)                                 /* (SPW_PKTRX1_CURBUFPKTADDR) Register Mask  */


/* -------- SPW_PKTRX1_CURBUFCFG : (SPW Offset: 0x84C) (R/W 32) PktRx Current Buffer Config -------- */
#define SPW_PKTRX1_CURBUFCFG_MAXCNT_Pos       _UINT32_(0)                                          /* (SPW_PKTRX1_CURBUFCFG) Max Count Position */
#define SPW_PKTRX1_CURBUFCFG_MAXCNT_Msk       (_UINT32_(0xFFFF) << SPW_PKTRX1_CURBUFCFG_MAXCNT_Pos) /* (SPW_PKTRX1_CURBUFCFG) Max Count Mask */
#define SPW_PKTRX1_CURBUFCFG_MAXCNT(value)    (SPW_PKTRX1_CURBUFCFG_MAXCNT_Msk & (_UINT32_(value) << SPW_PKTRX1_CURBUFCFG_MAXCNT_Pos)) /* Assigment of value for MAXCNT in the SPW_PKTRX1_CURBUFCFG register */
#define SPW_PKTRX1_CURBUFCFG_SPLIT_Pos        _UINT32_(30)                                         /* (SPW_PKTRX1_CURBUFCFG) Split Position */
#define SPW_PKTRX1_CURBUFCFG_SPLIT_Msk        (_UINT32_(0x1) << SPW_PKTRX1_CURBUFCFG_SPLIT_Pos)    /* (SPW_PKTRX1_CURBUFCFG) Split Mask */
#define SPW_PKTRX1_CURBUFCFG_SPLIT(value)     (SPW_PKTRX1_CURBUFCFG_SPLIT_Msk & (_UINT32_(value) << SPW_PKTRX1_CURBUFCFG_SPLIT_Pos)) /* Assigment of value for SPLIT in the SPW_PKTRX1_CURBUFCFG register */
#define SPW_PKTRX1_CURBUFCFG_ABORT_Pos        _UINT32_(31)                                         /* (SPW_PKTRX1_CURBUFCFG) Abort Position */
#define SPW_PKTRX1_CURBUFCFG_ABORT_Msk        (_UINT32_(0x1) << SPW_PKTRX1_CURBUFCFG_ABORT_Pos)    /* (SPW_PKTRX1_CURBUFCFG) Abort Mask */
#define SPW_PKTRX1_CURBUFCFG_ABORT(value)     (SPW_PKTRX1_CURBUFCFG_ABORT_Msk & (_UINT32_(value) << SPW_PKTRX1_CURBUFCFG_ABORT_Pos)) /* Assigment of value for ABORT in the SPW_PKTRX1_CURBUFCFG register */
#define SPW_PKTRX1_CURBUFCFG_Msk              _UINT32_(0xC000FFFF)                                 /* (SPW_PKTRX1_CURBUFCFG) Register Mask  */


/* -------- SPW_PKTRX1_PREVBUFDATALEN : (SPW Offset: 0x850) ( R/ 32) PktRx Previous Buffer Data Length -------- */
#define SPW_PKTRX1_PREVBUFDATALEN_LEN_Pos     _UINT32_(0)                                          /* (SPW_PKTRX1_PREVBUFDATALEN) Length Position */
#define SPW_PKTRX1_PREVBUFDATALEN_LEN_Msk     (_UINT32_(0xFFFFFF) << SPW_PKTRX1_PREVBUFDATALEN_LEN_Pos) /* (SPW_PKTRX1_PREVBUFDATALEN) Length Mask */
#define SPW_PKTRX1_PREVBUFDATALEN_LEN(value)  (SPW_PKTRX1_PREVBUFDATALEN_LEN_Msk & (_UINT32_(value) << SPW_PKTRX1_PREVBUFDATALEN_LEN_Pos)) /* Assigment of value for LEN in the SPW_PKTRX1_PREVBUFDATALEN register */
#define SPW_PKTRX1_PREVBUFDATALEN_Msk         _UINT32_(0x00FFFFFF)                                 /* (SPW_PKTRX1_PREVBUFDATALEN) Register Mask  */


/* -------- SPW_PKTRX1_PREVBUFSTS : (SPW Offset: 0x854) ( R/ 32) PktRx Previous Buffer Status -------- */
#define SPW_PKTRX1_PREVBUFSTS_CNT_Pos         _UINT32_(0)                                          /* (SPW_PKTRX1_PREVBUFSTS) Count Position */
#define SPW_PKTRX1_PREVBUFSTS_CNT_Msk         (_UINT32_(0xFFFF) << SPW_PKTRX1_PREVBUFSTS_CNT_Pos)  /* (SPW_PKTRX1_PREVBUFSTS) Count Mask */
#define SPW_PKTRX1_PREVBUFSTS_CNT(value)      (SPW_PKTRX1_PREVBUFSTS_CNT_Msk & (_UINT32_(value) << SPW_PKTRX1_PREVBUFSTS_CNT_Pos)) /* Assigment of value for CNT in the SPW_PKTRX1_PREVBUFSTS register */
#define SPW_PKTRX1_PREVBUFSTS_EEP_Pos         _UINT32_(16)                                         /* (SPW_PKTRX1_PREVBUFSTS) EEP seen Position */
#define SPW_PKTRX1_PREVBUFSTS_EEP_Msk         (_UINT32_(0x1) << SPW_PKTRX1_PREVBUFSTS_EEP_Pos)     /* (SPW_PKTRX1_PREVBUFSTS) EEP seen Mask */
#define SPW_PKTRX1_PREVBUFSTS_EEP(value)      (SPW_PKTRX1_PREVBUFSTS_EEP_Msk & (_UINT32_(value) << SPW_PKTRX1_PREVBUFSTS_EEP_Pos)) /* Assigment of value for EEP in the SPW_PKTRX1_PREVBUFSTS register */
#define SPW_PKTRX1_PREVBUFSTS_FULLI_Pos       _UINT32_(17)                                         /* (SPW_PKTRX1_PREVBUFSTS) Buffer Info Full Position */
#define SPW_PKTRX1_PREVBUFSTS_FULLI_Msk       (_UINT32_(0x1) << SPW_PKTRX1_PREVBUFSTS_FULLI_Pos)   /* (SPW_PKTRX1_PREVBUFSTS) Buffer Info Full Mask */
#define SPW_PKTRX1_PREVBUFSTS_FULLI(value)    (SPW_PKTRX1_PREVBUFSTS_FULLI_Msk & (_UINT32_(value) << SPW_PKTRX1_PREVBUFSTS_FULLI_Pos)) /* Assigment of value for FULLI in the SPW_PKTRX1_PREVBUFSTS register */
#define SPW_PKTRX1_PREVBUFSTS_FULLD_Pos       _UINT32_(18)                                         /* (SPW_PKTRX1_PREVBUFSTS) Buffer Data Full Position */
#define SPW_PKTRX1_PREVBUFSTS_FULLD_Msk       (_UINT32_(0x1) << SPW_PKTRX1_PREVBUFSTS_FULLD_Pos)   /* (SPW_PKTRX1_PREVBUFSTS) Buffer Data Full Mask */
#define SPW_PKTRX1_PREVBUFSTS_FULLD(value)    (SPW_PKTRX1_PREVBUFSTS_FULLD_Msk & (_UINT32_(value) << SPW_PKTRX1_PREVBUFSTS_FULLD_Pos)) /* Assigment of value for FULLD in the SPW_PKTRX1_PREVBUFSTS register */
#define SPW_PKTRX1_PREVBUFSTS_DMAERR_Pos      _UINT32_(19)                                         /* (SPW_PKTRX1_PREVBUFSTS) DMA Error Position */
#define SPW_PKTRX1_PREVBUFSTS_DMAERR_Msk      (_UINT32_(0x1) << SPW_PKTRX1_PREVBUFSTS_DMAERR_Pos)  /* (SPW_PKTRX1_PREVBUFSTS) DMA Error Mask */
#define SPW_PKTRX1_PREVBUFSTS_DMAERR(value)   (SPW_PKTRX1_PREVBUFSTS_DMAERR_Msk & (_UINT32_(value) << SPW_PKTRX1_PREVBUFSTS_DMAERR_Pos)) /* Assigment of value for DMAERR in the SPW_PKTRX1_PREVBUFSTS register */
#define SPW_PKTRX1_PREVBUFSTS_LOCKED_Pos      _UINT32_(31)                                         /* (SPW_PKTRX1_PREVBUFSTS) Locked Position */
#define SPW_PKTRX1_PREVBUFSTS_LOCKED_Msk      (_UINT32_(0x1) << SPW_PKTRX1_PREVBUFSTS_LOCKED_Pos)  /* (SPW_PKTRX1_PREVBUFSTS) Locked Mask */
#define SPW_PKTRX1_PREVBUFSTS_LOCKED(value)   (SPW_PKTRX1_PREVBUFSTS_LOCKED_Msk & (_UINT32_(value) << SPW_PKTRX1_PREVBUFSTS_LOCKED_Pos)) /* Assigment of value for LOCKED in the SPW_PKTRX1_PREVBUFSTS register */
#define SPW_PKTRX1_PREVBUFSTS_Msk             _UINT32_(0x800FFFFF)                                 /* (SPW_PKTRX1_PREVBUFSTS) Register Mask  */


/* -------- SPW_PKTRX1_SWRESET : (SPW Offset: 0x87C) (R/W 32) PktRx Software Reset -------- */
#define SPW_PKTRX1_SWRESET_PATTERN_Pos        _UINT32_(0)                                          /* (SPW_PKTRX1_SWRESET) Pattern Position */
#define SPW_PKTRX1_SWRESET_PATTERN_Msk        (_UINT32_(0xFFFFFFFF) << SPW_PKTRX1_SWRESET_PATTERN_Pos) /* (SPW_PKTRX1_SWRESET) Pattern Mask */
#define SPW_PKTRX1_SWRESET_PATTERN(value)     (SPW_PKTRX1_SWRESET_PATTERN_Msk & (_UINT32_(value) << SPW_PKTRX1_SWRESET_PATTERN_Pos)) /* Assigment of value for PATTERN in the SPW_PKTRX1_SWRESET register */
#define SPW_PKTRX1_SWRESET_Msk                _UINT32_(0xFFFFFFFF)                                 /* (SPW_PKTRX1_SWRESET) Register Mask  */


/* -------- SPW_PKTTX1_PI_RM : (SPW Offset: 0xC00) ( R/ 32) PktTx Pending Read Masked Interrupt -------- */
#define SPW_PKTTX1_PI_RM_DEACT_Pos            _UINT32_(0)                                          /* (SPW_PKTTX1_PI_RM) Deactivated Position */
#define SPW_PKTTX1_PI_RM_DEACT_Msk            (_UINT32_(0x1) << SPW_PKTTX1_PI_RM_DEACT_Pos)        /* (SPW_PKTTX1_PI_RM) Deactivated Mask */
#define SPW_PKTTX1_PI_RM_DEACT(value)         (SPW_PKTTX1_PI_RM_DEACT_Msk & (_UINT32_(value) << SPW_PKTTX1_PI_RM_DEACT_Pos)) /* Assigment of value for DEACT in the SPW_PKTTX1_PI_RM register */
#define SPW_PKTTX1_PI_RM_ACT_Pos              _UINT32_(1)                                          /* (SPW_PKTTX1_PI_RM) Activated Position */
#define SPW_PKTTX1_PI_RM_ACT_Msk              (_UINT32_(0x1) << SPW_PKTTX1_PI_RM_ACT_Pos)          /* (SPW_PKTTX1_PI_RM) Activated Mask */
#define SPW_PKTTX1_PI_RM_ACT(value)           (SPW_PKTTX1_PI_RM_ACT_Msk & (_UINT32_(value) << SPW_PKTTX1_PI_RM_ACT_Pos)) /* Assigment of value for ACT in the SPW_PKTTX1_PI_RM register */
#define SPW_PKTTX1_PI_RM_EOP_Pos              _UINT32_(2)                                          /* (SPW_PKTTX1_PI_RM) EOP sent Position */
#define SPW_PKTTX1_PI_RM_EOP_Msk              (_UINT32_(0x1) << SPW_PKTTX1_PI_RM_EOP_Pos)          /* (SPW_PKTTX1_PI_RM) EOP sent Mask */
#define SPW_PKTTX1_PI_RM_EOP(value)           (SPW_PKTTX1_PI_RM_EOP_Msk & (_UINT32_(value) << SPW_PKTTX1_PI_RM_EOP_Pos)) /* Assigment of value for EOP in the SPW_PKTTX1_PI_RM register */
#define SPW_PKTTX1_PI_RM_EEP_Pos              _UINT32_(3)                                          /* (SPW_PKTTX1_PI_RM) EEP sent Position */
#define SPW_PKTTX1_PI_RM_EEP_Msk              (_UINT32_(0x1) << SPW_PKTTX1_PI_RM_EEP_Pos)          /* (SPW_PKTTX1_PI_RM) EEP sent Mask */
#define SPW_PKTTX1_PI_RM_EEP(value)           (SPW_PKTTX1_PI_RM_EEP_Msk & (_UINT32_(value) << SPW_PKTTX1_PI_RM_EEP_Pos)) /* Assigment of value for EEP in the SPW_PKTTX1_PI_RM register */
#define SPW_PKTTX1_PI_RM_Msk                  _UINT32_(0x0000000F)                                 /* (SPW_PKTTX1_PI_RM) Register Mask  */


/* -------- SPW_PKTTX1_PI_RCM : (SPW Offset: 0xC04) ( R/ 32) PktTx Pending Read and Clear Masked Interrupt -------- */
#define SPW_PKTTX1_PI_RCM_DEACT_Pos           _UINT32_(0)                                          /* (SPW_PKTTX1_PI_RCM) Deactivated Position */
#define SPW_PKTTX1_PI_RCM_DEACT_Msk           (_UINT32_(0x1) << SPW_PKTTX1_PI_RCM_DEACT_Pos)       /* (SPW_PKTTX1_PI_RCM) Deactivated Mask */
#define SPW_PKTTX1_PI_RCM_DEACT(value)        (SPW_PKTTX1_PI_RCM_DEACT_Msk & (_UINT32_(value) << SPW_PKTTX1_PI_RCM_DEACT_Pos)) /* Assigment of value for DEACT in the SPW_PKTTX1_PI_RCM register */
#define SPW_PKTTX1_PI_RCM_ACT_Pos             _UINT32_(1)                                          /* (SPW_PKTTX1_PI_RCM) Activated Position */
#define SPW_PKTTX1_PI_RCM_ACT_Msk             (_UINT32_(0x1) << SPW_PKTTX1_PI_RCM_ACT_Pos)         /* (SPW_PKTTX1_PI_RCM) Activated Mask */
#define SPW_PKTTX1_PI_RCM_ACT(value)          (SPW_PKTTX1_PI_RCM_ACT_Msk & (_UINT32_(value) << SPW_PKTTX1_PI_RCM_ACT_Pos)) /* Assigment of value for ACT in the SPW_PKTTX1_PI_RCM register */
#define SPW_PKTTX1_PI_RCM_EOP_Pos             _UINT32_(2)                                          /* (SPW_PKTTX1_PI_RCM) EOP sent Position */
#define SPW_PKTTX1_PI_RCM_EOP_Msk             (_UINT32_(0x1) << SPW_PKTTX1_PI_RCM_EOP_Pos)         /* (SPW_PKTTX1_PI_RCM) EOP sent Mask */
#define SPW_PKTTX1_PI_RCM_EOP(value)          (SPW_PKTTX1_PI_RCM_EOP_Msk & (_UINT32_(value) << SPW_PKTTX1_PI_RCM_EOP_Pos)) /* Assigment of value for EOP in the SPW_PKTTX1_PI_RCM register */
#define SPW_PKTTX1_PI_RCM_EEP_Pos             _UINT32_(3)                                          /* (SPW_PKTTX1_PI_RCM) EEP sent Position */
#define SPW_PKTTX1_PI_RCM_EEP_Msk             (_UINT32_(0x1) << SPW_PKTTX1_PI_RCM_EEP_Pos)         /* (SPW_PKTTX1_PI_RCM) EEP sent Mask */
#define SPW_PKTTX1_PI_RCM_EEP(value)          (SPW_PKTTX1_PI_RCM_EEP_Msk & (_UINT32_(value) << SPW_PKTTX1_PI_RCM_EEP_Pos)) /* Assigment of value for EEP in the SPW_PKTTX1_PI_RCM register */
#define SPW_PKTTX1_PI_RCM_Msk                 _UINT32_(0x0000000F)                                 /* (SPW_PKTTX1_PI_RCM) Register Mask  */


/* -------- SPW_PKTTX1_PI_R : (SPW Offset: 0xC08) ( R/ 32) PktTx Pending Read Interrupt -------- */
#define SPW_PKTTX1_PI_R_DEACT_Pos             _UINT32_(0)                                          /* (SPW_PKTTX1_PI_R) Deactivated Position */
#define SPW_PKTTX1_PI_R_DEACT_Msk             (_UINT32_(0x1) << SPW_PKTTX1_PI_R_DEACT_Pos)         /* (SPW_PKTTX1_PI_R) Deactivated Mask */
#define SPW_PKTTX1_PI_R_DEACT(value)          (SPW_PKTTX1_PI_R_DEACT_Msk & (_UINT32_(value) << SPW_PKTTX1_PI_R_DEACT_Pos)) /* Assigment of value for DEACT in the SPW_PKTTX1_PI_R register */
#define SPW_PKTTX1_PI_R_ACT_Pos               _UINT32_(1)                                          /* (SPW_PKTTX1_PI_R) Activated Position */
#define SPW_PKTTX1_PI_R_ACT_Msk               (_UINT32_(0x1) << SPW_PKTTX1_PI_R_ACT_Pos)           /* (SPW_PKTTX1_PI_R) Activated Mask */
#define SPW_PKTTX1_PI_R_ACT(value)            (SPW_PKTTX1_PI_R_ACT_Msk & (_UINT32_(value) << SPW_PKTTX1_PI_R_ACT_Pos)) /* Assigment of value for ACT in the SPW_PKTTX1_PI_R register */
#define SPW_PKTTX1_PI_R_EOP_Pos               _UINT32_(2)                                          /* (SPW_PKTTX1_PI_R) EOP sent Position */
#define SPW_PKTTX1_PI_R_EOP_Msk               (_UINT32_(0x1) << SPW_PKTTX1_PI_R_EOP_Pos)           /* (SPW_PKTTX1_PI_R) EOP sent Mask */
#define SPW_PKTTX1_PI_R_EOP(value)            (SPW_PKTTX1_PI_R_EOP_Msk & (_UINT32_(value) << SPW_PKTTX1_PI_R_EOP_Pos)) /* Assigment of value for EOP in the SPW_PKTTX1_PI_R register */
#define SPW_PKTTX1_PI_R_EEP_Pos               _UINT32_(3)                                          /* (SPW_PKTTX1_PI_R) EEP sent Position */
#define SPW_PKTTX1_PI_R_EEP_Msk               (_UINT32_(0x1) << SPW_PKTTX1_PI_R_EEP_Pos)           /* (SPW_PKTTX1_PI_R) EEP sent Mask */
#define SPW_PKTTX1_PI_R_EEP(value)            (SPW_PKTTX1_PI_R_EEP_Msk & (_UINT32_(value) << SPW_PKTTX1_PI_R_EEP_Pos)) /* Assigment of value for EEP in the SPW_PKTTX1_PI_R register */
#define SPW_PKTTX1_PI_R_Msk                   _UINT32_(0x0000000F)                                 /* (SPW_PKTTX1_PI_R) Register Mask  */


/* -------- SPW_PKTTX1_PI_RCS : (SPW Offset: 0xC0C) (R/W 32) PktTx Pending Read, Clear and Enabled Interrupt -------- */
#define SPW_PKTTX1_PI_RCS_DEACT_Pos           _UINT32_(0)                                          /* (SPW_PKTTX1_PI_RCS) Deactivated Position */
#define SPW_PKTTX1_PI_RCS_DEACT_Msk           (_UINT32_(0x1) << SPW_PKTTX1_PI_RCS_DEACT_Pos)       /* (SPW_PKTTX1_PI_RCS) Deactivated Mask */
#define SPW_PKTTX1_PI_RCS_DEACT(value)        (SPW_PKTTX1_PI_RCS_DEACT_Msk & (_UINT32_(value) << SPW_PKTTX1_PI_RCS_DEACT_Pos)) /* Assigment of value for DEACT in the SPW_PKTTX1_PI_RCS register */
#define SPW_PKTTX1_PI_RCS_ACT_Pos             _UINT32_(1)                                          /* (SPW_PKTTX1_PI_RCS) Activated Position */
#define SPW_PKTTX1_PI_RCS_ACT_Msk             (_UINT32_(0x1) << SPW_PKTTX1_PI_RCS_ACT_Pos)         /* (SPW_PKTTX1_PI_RCS) Activated Mask */
#define SPW_PKTTX1_PI_RCS_ACT(value)          (SPW_PKTTX1_PI_RCS_ACT_Msk & (_UINT32_(value) << SPW_PKTTX1_PI_RCS_ACT_Pos)) /* Assigment of value for ACT in the SPW_PKTTX1_PI_RCS register */
#define SPW_PKTTX1_PI_RCS_EOP_Pos             _UINT32_(2)                                          /* (SPW_PKTTX1_PI_RCS) EOP sent Position */
#define SPW_PKTTX1_PI_RCS_EOP_Msk             (_UINT32_(0x1) << SPW_PKTTX1_PI_RCS_EOP_Pos)         /* (SPW_PKTTX1_PI_RCS) EOP sent Mask */
#define SPW_PKTTX1_PI_RCS_EOP(value)          (SPW_PKTTX1_PI_RCS_EOP_Msk & (_UINT32_(value) << SPW_PKTTX1_PI_RCS_EOP_Pos)) /* Assigment of value for EOP in the SPW_PKTTX1_PI_RCS register */
#define SPW_PKTTX1_PI_RCS_EEP_Pos             _UINT32_(3)                                          /* (SPW_PKTTX1_PI_RCS) EEP sent Position */
#define SPW_PKTTX1_PI_RCS_EEP_Msk             (_UINT32_(0x1) << SPW_PKTTX1_PI_RCS_EEP_Pos)         /* (SPW_PKTTX1_PI_RCS) EEP sent Mask */
#define SPW_PKTTX1_PI_RCS_EEP(value)          (SPW_PKTTX1_PI_RCS_EEP_Msk & (_UINT32_(value) << SPW_PKTTX1_PI_RCS_EEP_Pos)) /* Assigment of value for EEP in the SPW_PKTTX1_PI_RCS register */
#define SPW_PKTTX1_PI_RCS_Msk                 _UINT32_(0x0000000F)                                 /* (SPW_PKTTX1_PI_RCS) Register Mask  */


/* -------- SPW_PKTTX1_IM : (SPW Offset: 0xC10) (R/W 32) PktTx Interrupt Mask -------- */
#define SPW_PKTTX1_IM_DEACT_Pos               _UINT32_(0)                                          /* (SPW_PKTTX1_IM) Deactivated Position */
#define SPW_PKTTX1_IM_DEACT_Msk               (_UINT32_(0x1) << SPW_PKTTX1_IM_DEACT_Pos)           /* (SPW_PKTTX1_IM) Deactivated Mask */
#define SPW_PKTTX1_IM_DEACT(value)            (SPW_PKTTX1_IM_DEACT_Msk & (_UINT32_(value) << SPW_PKTTX1_IM_DEACT_Pos)) /* Assigment of value for DEACT in the SPW_PKTTX1_IM register */
#define SPW_PKTTX1_IM_ACT_Pos                 _UINT32_(1)                                          /* (SPW_PKTTX1_IM) Activated Position */
#define SPW_PKTTX1_IM_ACT_Msk                 (_UINT32_(0x1) << SPW_PKTTX1_IM_ACT_Pos)             /* (SPW_PKTTX1_IM) Activated Mask */
#define SPW_PKTTX1_IM_ACT(value)              (SPW_PKTTX1_IM_ACT_Msk & (_UINT32_(value) << SPW_PKTTX1_IM_ACT_Pos)) /* Assigment of value for ACT in the SPW_PKTTX1_IM register */
#define SPW_PKTTX1_IM_EOP_Pos                 _UINT32_(2)                                          /* (SPW_PKTTX1_IM) EOP sent Position */
#define SPW_PKTTX1_IM_EOP_Msk                 (_UINT32_(0x1) << SPW_PKTTX1_IM_EOP_Pos)             /* (SPW_PKTTX1_IM) EOP sent Mask */
#define SPW_PKTTX1_IM_EOP(value)              (SPW_PKTTX1_IM_EOP_Msk & (_UINT32_(value) << SPW_PKTTX1_IM_EOP_Pos)) /* Assigment of value for EOP in the SPW_PKTTX1_IM register */
#define SPW_PKTTX1_IM_EEP_Pos                 _UINT32_(3)                                          /* (SPW_PKTTX1_IM) EEP sent Position */
#define SPW_PKTTX1_IM_EEP_Msk                 (_UINT32_(0x1) << SPW_PKTTX1_IM_EEP_Pos)             /* (SPW_PKTTX1_IM) EEP sent Mask */
#define SPW_PKTTX1_IM_EEP(value)              (SPW_PKTTX1_IM_EEP_Msk & (_UINT32_(value) << SPW_PKTTX1_IM_EEP_Pos)) /* Assigment of value for EEP in the SPW_PKTTX1_IM register */
#define SPW_PKTTX1_IM_Msk                     _UINT32_(0x0000000F)                                 /* (SPW_PKTTX1_IM) Register Mask  */


/* -------- SPW_PKTTX1_PI_C : (SPW Offset: 0xC14) ( /W 32) PktTx Clear Pending Interrupt -------- */
#define SPW_PKTTX1_PI_C_DEACT_Pos             _UINT32_(0)                                          /* (SPW_PKTTX1_PI_C) Deactivated Position */
#define SPW_PKTTX1_PI_C_DEACT_Msk             (_UINT32_(0x1) << SPW_PKTTX1_PI_C_DEACT_Pos)         /* (SPW_PKTTX1_PI_C) Deactivated Mask */
#define SPW_PKTTX1_PI_C_DEACT(value)          (SPW_PKTTX1_PI_C_DEACT_Msk & (_UINT32_(value) << SPW_PKTTX1_PI_C_DEACT_Pos)) /* Assigment of value for DEACT in the SPW_PKTTX1_PI_C register */
#define SPW_PKTTX1_PI_C_ACT_Pos               _UINT32_(1)                                          /* (SPW_PKTTX1_PI_C) Activated Position */
#define SPW_PKTTX1_PI_C_ACT_Msk               (_UINT32_(0x1) << SPW_PKTTX1_PI_C_ACT_Pos)           /* (SPW_PKTTX1_PI_C) Activated Mask */
#define SPW_PKTTX1_PI_C_ACT(value)            (SPW_PKTTX1_PI_C_ACT_Msk & (_UINT32_(value) << SPW_PKTTX1_PI_C_ACT_Pos)) /* Assigment of value for ACT in the SPW_PKTTX1_PI_C register */
#define SPW_PKTTX1_PI_C_EOP_Pos               _UINT32_(2)                                          /* (SPW_PKTTX1_PI_C) EOP sent Position */
#define SPW_PKTTX1_PI_C_EOP_Msk               (_UINT32_(0x1) << SPW_PKTTX1_PI_C_EOP_Pos)           /* (SPW_PKTTX1_PI_C) EOP sent Mask */
#define SPW_PKTTX1_PI_C_EOP(value)            (SPW_PKTTX1_PI_C_EOP_Msk & (_UINT32_(value) << SPW_PKTTX1_PI_C_EOP_Pos)) /* Assigment of value for EOP in the SPW_PKTTX1_PI_C register */
#define SPW_PKTTX1_PI_C_EEP_Pos               _UINT32_(3)                                          /* (SPW_PKTTX1_PI_C) EEP sent Position */
#define SPW_PKTTX1_PI_C_EEP_Msk               (_UINT32_(0x1) << SPW_PKTTX1_PI_C_EEP_Pos)           /* (SPW_PKTTX1_PI_C) EEP sent Mask */
#define SPW_PKTTX1_PI_C_EEP(value)            (SPW_PKTTX1_PI_C_EEP_Msk & (_UINT32_(value) << SPW_PKTTX1_PI_C_EEP_Pos)) /* Assigment of value for EEP in the SPW_PKTTX1_PI_C register */
#define SPW_PKTTX1_PI_C_Msk                   _UINT32_(0x0000000F)                                 /* (SPW_PKTTX1_PI_C) Register Mask  */


/* -------- SPW_PKTTX1_IM_S : (SPW Offset: 0xC18) ( /W 32) PktTx Interrupt Set Mask -------- */
#define SPW_PKTTX1_IM_S_DEACT_Pos             _UINT32_(0)                                          /* (SPW_PKTTX1_IM_S) Deactivated Position */
#define SPW_PKTTX1_IM_S_DEACT_Msk             (_UINT32_(0x1) << SPW_PKTTX1_IM_S_DEACT_Pos)         /* (SPW_PKTTX1_IM_S) Deactivated Mask */
#define SPW_PKTTX1_IM_S_DEACT(value)          (SPW_PKTTX1_IM_S_DEACT_Msk & (_UINT32_(value) << SPW_PKTTX1_IM_S_DEACT_Pos)) /* Assigment of value for DEACT in the SPW_PKTTX1_IM_S register */
#define SPW_PKTTX1_IM_S_ACT_Pos               _UINT32_(1)                                          /* (SPW_PKTTX1_IM_S) Activated Position */
#define SPW_PKTTX1_IM_S_ACT_Msk               (_UINT32_(0x1) << SPW_PKTTX1_IM_S_ACT_Pos)           /* (SPW_PKTTX1_IM_S) Activated Mask */
#define SPW_PKTTX1_IM_S_ACT(value)            (SPW_PKTTX1_IM_S_ACT_Msk & (_UINT32_(value) << SPW_PKTTX1_IM_S_ACT_Pos)) /* Assigment of value for ACT in the SPW_PKTTX1_IM_S register */
#define SPW_PKTTX1_IM_S_EOP_Pos               _UINT32_(2)                                          /* (SPW_PKTTX1_IM_S) EOP sent Position */
#define SPW_PKTTX1_IM_S_EOP_Msk               (_UINT32_(0x1) << SPW_PKTTX1_IM_S_EOP_Pos)           /* (SPW_PKTTX1_IM_S) EOP sent Mask */
#define SPW_PKTTX1_IM_S_EOP(value)            (SPW_PKTTX1_IM_S_EOP_Msk & (_UINT32_(value) << SPW_PKTTX1_IM_S_EOP_Pos)) /* Assigment of value for EOP in the SPW_PKTTX1_IM_S register */
#define SPW_PKTTX1_IM_S_EEP_Pos               _UINT32_(3)                                          /* (SPW_PKTTX1_IM_S) EEP sent Position */
#define SPW_PKTTX1_IM_S_EEP_Msk               (_UINT32_(0x1) << SPW_PKTTX1_IM_S_EEP_Pos)           /* (SPW_PKTTX1_IM_S) EEP sent Mask */
#define SPW_PKTTX1_IM_S_EEP(value)            (SPW_PKTTX1_IM_S_EEP_Msk & (_UINT32_(value) << SPW_PKTTX1_IM_S_EEP_Pos)) /* Assigment of value for EEP in the SPW_PKTTX1_IM_S register */
#define SPW_PKTTX1_IM_S_Msk                   _UINT32_(0x0000000F)                                 /* (SPW_PKTTX1_IM_S) Register Mask  */


/* -------- SPW_PKTTX1_IM_C : (SPW Offset: 0xC1C) ( /W 32) PktTx Interrupt Clear Mask -------- */
#define SPW_PKTTX1_IM_C_DEACT_Pos             _UINT32_(0)                                          /* (SPW_PKTTX1_IM_C) Deactivated Position */
#define SPW_PKTTX1_IM_C_DEACT_Msk             (_UINT32_(0x1) << SPW_PKTTX1_IM_C_DEACT_Pos)         /* (SPW_PKTTX1_IM_C) Deactivated Mask */
#define SPW_PKTTX1_IM_C_DEACT(value)          (SPW_PKTTX1_IM_C_DEACT_Msk & (_UINT32_(value) << SPW_PKTTX1_IM_C_DEACT_Pos)) /* Assigment of value for DEACT in the SPW_PKTTX1_IM_C register */
#define SPW_PKTTX1_IM_C_ACT_Pos               _UINT32_(1)                                          /* (SPW_PKTTX1_IM_C) Activated Position */
#define SPW_PKTTX1_IM_C_ACT_Msk               (_UINT32_(0x1) << SPW_PKTTX1_IM_C_ACT_Pos)           /* (SPW_PKTTX1_IM_C) Activated Mask */
#define SPW_PKTTX1_IM_C_ACT(value)            (SPW_PKTTX1_IM_C_ACT_Msk & (_UINT32_(value) << SPW_PKTTX1_IM_C_ACT_Pos)) /* Assigment of value for ACT in the SPW_PKTTX1_IM_C register */
#define SPW_PKTTX1_IM_C_EOP_Pos               _UINT32_(2)                                          /* (SPW_PKTTX1_IM_C) EOP sent Position */
#define SPW_PKTTX1_IM_C_EOP_Msk               (_UINT32_(0x1) << SPW_PKTTX1_IM_C_EOP_Pos)           /* (SPW_PKTTX1_IM_C) EOP sent Mask */
#define SPW_PKTTX1_IM_C_EOP(value)            (SPW_PKTTX1_IM_C_EOP_Msk & (_UINT32_(value) << SPW_PKTTX1_IM_C_EOP_Pos)) /* Assigment of value for EOP in the SPW_PKTTX1_IM_C register */
#define SPW_PKTTX1_IM_C_EEP_Pos               _UINT32_(3)                                          /* (SPW_PKTTX1_IM_C) EEP sent Position */
#define SPW_PKTTX1_IM_C_EEP_Msk               (_UINT32_(0x1) << SPW_PKTTX1_IM_C_EEP_Pos)           /* (SPW_PKTTX1_IM_C) EEP sent Mask */
#define SPW_PKTTX1_IM_C_EEP(value)            (SPW_PKTTX1_IM_C_EEP_Msk & (_UINT32_(value) << SPW_PKTTX1_IM_C_EEP_Pos)) /* Assigment of value for EEP in the SPW_PKTTX1_IM_C register */
#define SPW_PKTTX1_IM_C_Msk                   _UINT32_(0x0000000F)                                 /* (SPW_PKTTX1_IM_C) Register Mask  */


/* -------- SPW_PKTTX1_STATUS : (SPW Offset: 0xC20) (R/W 32) PktTx Status -------- */
#define SPW_PKTTX1_STATUS_ARM_Pos             _UINT32_(0)                                          /* (SPW_PKTTX1_STATUS) Armed Position */
#define SPW_PKTTX1_STATUS_ARM_Msk             (_UINT32_(0x1) << SPW_PKTTX1_STATUS_ARM_Pos)         /* (SPW_PKTTX1_STATUS) Armed Mask */
#define SPW_PKTTX1_STATUS_ARM(value)          (SPW_PKTTX1_STATUS_ARM_Msk & (_UINT32_(value) << SPW_PKTTX1_STATUS_ARM_Pos)) /* Assigment of value for ARM in the SPW_PKTTX1_STATUS register */
#define SPW_PKTTX1_STATUS_ACT_Pos             _UINT32_(1)                                          /* (SPW_PKTTX1_STATUS) Active Position */
#define SPW_PKTTX1_STATUS_ACT_Msk             (_UINT32_(0x1) << SPW_PKTTX1_STATUS_ACT_Pos)         /* (SPW_PKTTX1_STATUS) Active Mask */
#define SPW_PKTTX1_STATUS_ACT(value)          (SPW_PKTTX1_STATUS_ACT_Msk & (_UINT32_(value) << SPW_PKTTX1_STATUS_ACT_Pos)) /* Assigment of value for ACT in the SPW_PKTTX1_STATUS register */
#define SPW_PKTTX1_STATUS_PENDING_Pos         _UINT32_(2)                                          /* (SPW_PKTTX1_STATUS) Pending Position */
#define SPW_PKTTX1_STATUS_PENDING_Msk         (_UINT32_(0x1) << SPW_PKTTX1_STATUS_PENDING_Pos)     /* (SPW_PKTTX1_STATUS) Pending Mask */
#define SPW_PKTTX1_STATUS_PENDING(value)      (SPW_PKTTX1_STATUS_PENDING_Msk & (_UINT32_(value) << SPW_PKTTX1_STATUS_PENDING_Pos)) /* Assigment of value for PENDING in the SPW_PKTTX1_STATUS register */
#define SPW_PKTTX1_STATUS_DEACT_Pos           _UINT32_(3)                                          /* (SPW_PKTTX1_STATUS) Deactivating Position */
#define SPW_PKTTX1_STATUS_DEACT_Msk           (_UINT32_(0x1) << SPW_PKTTX1_STATUS_DEACT_Pos)       /* (SPW_PKTTX1_STATUS) Deactivating Mask */
#define SPW_PKTTX1_STATUS_DEACT(value)        (SPW_PKTTX1_STATUS_DEACT_Msk & (_UINT32_(value) << SPW_PKTTX1_STATUS_DEACT_Pos)) /* Assigment of value for DEACT in the SPW_PKTTX1_STATUS register */
#define SPW_PKTTX1_STATUS_PREV_Pos            _UINT32_(16)                                         /* (SPW_PKTTX1_STATUS) Previous Position */
#define SPW_PKTTX1_STATUS_PREV_Msk            (_UINT32_(0x7) << SPW_PKTTX1_STATUS_PREV_Pos)        /* (SPW_PKTTX1_STATUS) Previous Mask */
#define SPW_PKTTX1_STATUS_PREV(value)         (SPW_PKTTX1_STATUS_PREV_Msk & (_UINT32_(value) << SPW_PKTTX1_STATUS_PREV_Pos)) /* Assigment of value for PREV in the SPW_PKTTX1_STATUS register */
#define   SPW_PKTTX1_STATUS_PREV_NOINFO_Val   _UINT32_(0x0)                                        /* (SPW_PKTTX1_STATUS) No information. Field not locked.  */
#define   SPW_PKTTX1_STATUS_PREV_LASTSENDLISTOK_Val _UINT32_(0x1)                                        /* (SPW_PKTTX1_STATUS) Last send list fully done  */
#define   SPW_PKTTX1_STATUS_PREV_ABORTEDMEMERR_Val _UINT32_(0x2)                                        /* (SPW_PKTTX1_STATUS) Aborted due to memory access error.  */
#define   SPW_PKTTX1_STATUS_PREV_ABORTEDNEWSD_Val _UINT32_(0x3)                                        /* (SPW_PKTTX1_STATUS) Aborted by new send list.  */
#define   SPW_PKTTX1_STATUS_PREV_ABORTEDUSERCMD_Val _UINT32_(0x4)                                        /* (SPW_PKTTX1_STATUS) Aborted by direct user command.  */
#define   SPW_PKTTX1_STATUS_PREV_ABORTEDTIMEOUT_Val _UINT32_(0x5)                                        /* (SPW_PKTTX1_STATUS) Aborted by timeout.  */
#define SPW_PKTTX1_STATUS_PREV_NOINFO         (SPW_PKTTX1_STATUS_PREV_NOINFO_Val << SPW_PKTTX1_STATUS_PREV_Pos) /* (SPW_PKTTX1_STATUS) No information. Field not locked. Position  */
#define SPW_PKTTX1_STATUS_PREV_LASTSENDLISTOK (SPW_PKTTX1_STATUS_PREV_LASTSENDLISTOK_Val << SPW_PKTTX1_STATUS_PREV_Pos) /* (SPW_PKTTX1_STATUS) Last send list fully done Position  */
#define SPW_PKTTX1_STATUS_PREV_ABORTEDMEMERR  (SPW_PKTTX1_STATUS_PREV_ABORTEDMEMERR_Val << SPW_PKTTX1_STATUS_PREV_Pos) /* (SPW_PKTTX1_STATUS) Aborted due to memory access error. Position  */
#define SPW_PKTTX1_STATUS_PREV_ABORTEDNEWSD   (SPW_PKTTX1_STATUS_PREV_ABORTEDNEWSD_Val << SPW_PKTTX1_STATUS_PREV_Pos) /* (SPW_PKTTX1_STATUS) Aborted by new send list. Position  */
#define SPW_PKTTX1_STATUS_PREV_ABORTEDUSERCMD (SPW_PKTTX1_STATUS_PREV_ABORTEDUSERCMD_Val << SPW_PKTTX1_STATUS_PREV_Pos) /* (SPW_PKTTX1_STATUS) Aborted by direct user command. Position  */
#define SPW_PKTTX1_STATUS_PREV_ABORTEDTIMEOUT (SPW_PKTTX1_STATUS_PREV_ABORTEDTIMEOUT_Val << SPW_PKTTX1_STATUS_PREV_Pos) /* (SPW_PKTTX1_STATUS) Aborted by timeout. Position  */
#define SPW_PKTTX1_STATUS_Msk                 _UINT32_(0x0007000F)                                 /* (SPW_PKTTX1_STATUS) Register Mask  */


/* -------- SPW_PKTTX1_NXTSENDROUT : (SPW Offset: 0xC24) (R/W 32) PktTx Next Send List Router Bytes -------- */
#define SPW_PKTTX1_NXTSENDROUT_BYTE4_Pos      _UINT32_(0)                                          /* (SPW_PKTTX1_NXTSENDROUT) Byte4 Position */
#define SPW_PKTTX1_NXTSENDROUT_BYTE4_Msk      (_UINT32_(0xFF) << SPW_PKTTX1_NXTSENDROUT_BYTE4_Pos) /* (SPW_PKTTX1_NXTSENDROUT) Byte4 Mask */
#define SPW_PKTTX1_NXTSENDROUT_BYTE4(value)   (SPW_PKTTX1_NXTSENDROUT_BYTE4_Msk & (_UINT32_(value) << SPW_PKTTX1_NXTSENDROUT_BYTE4_Pos)) /* Assigment of value for BYTE4 in the SPW_PKTTX1_NXTSENDROUT register */
#define SPW_PKTTX1_NXTSENDROUT_BYTE3_Pos      _UINT32_(8)                                          /* (SPW_PKTTX1_NXTSENDROUT) Byte3 Position */
#define SPW_PKTTX1_NXTSENDROUT_BYTE3_Msk      (_UINT32_(0xFF) << SPW_PKTTX1_NXTSENDROUT_BYTE3_Pos) /* (SPW_PKTTX1_NXTSENDROUT) Byte3 Mask */
#define SPW_PKTTX1_NXTSENDROUT_BYTE3(value)   (SPW_PKTTX1_NXTSENDROUT_BYTE3_Msk & (_UINT32_(value) << SPW_PKTTX1_NXTSENDROUT_BYTE3_Pos)) /* Assigment of value for BYTE3 in the SPW_PKTTX1_NXTSENDROUT register */
#define SPW_PKTTX1_NXTSENDROUT_BYTE2_Pos      _UINT32_(16)                                         /* (SPW_PKTTX1_NXTSENDROUT) Byte2 Position */
#define SPW_PKTTX1_NXTSENDROUT_BYTE2_Msk      (_UINT32_(0xFF) << SPW_PKTTX1_NXTSENDROUT_BYTE2_Pos) /* (SPW_PKTTX1_NXTSENDROUT) Byte2 Mask */
#define SPW_PKTTX1_NXTSENDROUT_BYTE2(value)   (SPW_PKTTX1_NXTSENDROUT_BYTE2_Msk & (_UINT32_(value) << SPW_PKTTX1_NXTSENDROUT_BYTE2_Pos)) /* Assigment of value for BYTE2 in the SPW_PKTTX1_NXTSENDROUT register */
#define SPW_PKTTX1_NXTSENDROUT_BYTE1_Pos      _UINT32_(24)                                         /* (SPW_PKTTX1_NXTSENDROUT) Byte1 Position */
#define SPW_PKTTX1_NXTSENDROUT_BYTE1_Msk      (_UINT32_(0xFF) << SPW_PKTTX1_NXTSENDROUT_BYTE1_Pos) /* (SPW_PKTTX1_NXTSENDROUT) Byte1 Mask */
#define SPW_PKTTX1_NXTSENDROUT_BYTE1(value)   (SPW_PKTTX1_NXTSENDROUT_BYTE1_Msk & (_UINT32_(value) << SPW_PKTTX1_NXTSENDROUT_BYTE1_Pos)) /* Assigment of value for BYTE1 in the SPW_PKTTX1_NXTSENDROUT register */
#define SPW_PKTTX1_NXTSENDROUT_Msk            _UINT32_(0xFFFFFFFF)                                 /* (SPW_PKTTX1_NXTSENDROUT) Register Mask  */


/* -------- SPW_PKTTX1_NXTSENDADDR : (SPW Offset: 0xC28) (R/W 32) PktTx Next Send List Address -------- */
#define SPW_PKTTX1_NXTSENDADDR_ADDR_Pos       _UINT32_(0)                                          /* (SPW_PKTTX1_NXTSENDADDR) Address Position */
#define SPW_PKTTX1_NXTSENDADDR_ADDR_Msk       (_UINT32_(0xFFFFFFFF) << SPW_PKTTX1_NXTSENDADDR_ADDR_Pos) /* (SPW_PKTTX1_NXTSENDADDR) Address Mask */
#define SPW_PKTTX1_NXTSENDADDR_ADDR(value)    (SPW_PKTTX1_NXTSENDADDR_ADDR_Msk & (_UINT32_(value) << SPW_PKTTX1_NXTSENDADDR_ADDR_Pos)) /* Assigment of value for ADDR in the SPW_PKTTX1_NXTSENDADDR register */
#define SPW_PKTTX1_NXTSENDADDR_Msk            _UINT32_(0xFFFFFFFF)                                 /* (SPW_PKTTX1_NXTSENDADDR) Register Mask  */


/* -------- SPW_PKTTX1_NXTSENDCFG : (SPW Offset: 0xC2C) (R/W 32) PktTx Next Send List Config -------- */
#define SPW_PKTTX1_NXTSENDCFG_LEN_Pos         _UINT32_(0)                                          /* (SPW_PKTTX1_NXTSENDCFG) Length Position */
#define SPW_PKTTX1_NXTSENDCFG_LEN_Msk         (_UINT32_(0xFFFF) << SPW_PKTTX1_NXTSENDCFG_LEN_Pos)  /* (SPW_PKTTX1_NXTSENDCFG) Length Mask */
#define SPW_PKTTX1_NXTSENDCFG_LEN(value)      (SPW_PKTTX1_NXTSENDCFG_LEN_Msk & (_UINT32_(value) << SPW_PKTTX1_NXTSENDCFG_LEN_Pos)) /* Assigment of value for LEN in the SPW_PKTTX1_NXTSENDCFG register */
#define SPW_PKTTX1_NXTSENDCFG_VALUE_Pos       _UINT32_(16)                                         /* (SPW_PKTTX1_NXTSENDCFG) Start Value Position */
#define SPW_PKTTX1_NXTSENDCFG_VALUE_Msk       (_UINT32_(0x3F) << SPW_PKTTX1_NXTSENDCFG_VALUE_Pos)  /* (SPW_PKTTX1_NXTSENDCFG) Start Value Mask */
#define SPW_PKTTX1_NXTSENDCFG_VALUE(value)    (SPW_PKTTX1_NXTSENDCFG_VALUE_Msk & (_UINT32_(value) << SPW_PKTTX1_NXTSENDCFG_VALUE_Pos)) /* Assigment of value for VALUE in the SPW_PKTTX1_NXTSENDCFG register */
#define SPW_PKTTX1_NXTSENDCFG_START_Pos       _UINT32_(22)                                         /* (SPW_PKTTX1_NXTSENDCFG) Start Mode Position */
#define SPW_PKTTX1_NXTSENDCFG_START_Msk       (_UINT32_(0x3) << SPW_PKTTX1_NXTSENDCFG_START_Pos)   /* (SPW_PKTTX1_NXTSENDCFG) Start Mode Mask */
#define SPW_PKTTX1_NXTSENDCFG_START(value)    (SPW_PKTTX1_NXTSENDCFG_START_Msk & (_UINT32_(value) << SPW_PKTTX1_NXTSENDCFG_START_Pos)) /* Assigment of value for START in the SPW_PKTTX1_NXTSENDCFG register */
#define   SPW_PKTTX1_NXTSENDCFG_START_STARTEVENT_Val _UINT32_(0x0)                                        /* (SPW_PKTTX1_NXTSENDCFG) Start if any bit in Start Value matches an incoming event  */
#define   SPW_PKTTX1_NXTSENDCFG_START_STARTNOW_Val _UINT32_(0x1)                                        /* (SPW_PKTTX1_NXTSENDCFG) Start immediately, if possible  */
#define   SPW_PKTTX1_NXTSENDCFG_START_STARTTCH1_Val _UINT32_(0x2)                                        /* (SPW_PKTTX1_NXTSENDCFG) Start if Start Value matches an incoming Time Code from Time Code Handler 1  */
#define SPW_PKTTX1_NXTSENDCFG_START_STARTEVENT (SPW_PKTTX1_NXTSENDCFG_START_STARTEVENT_Val << SPW_PKTTX1_NXTSENDCFG_START_Pos) /* (SPW_PKTTX1_NXTSENDCFG) Start if any bit in Start Value matches an incoming event Position  */
#define SPW_PKTTX1_NXTSENDCFG_START_STARTNOW  (SPW_PKTTX1_NXTSENDCFG_START_STARTNOW_Val << SPW_PKTTX1_NXTSENDCFG_START_Pos) /* (SPW_PKTTX1_NXTSENDCFG) Start immediately, if possible Position  */
#define SPW_PKTTX1_NXTSENDCFG_START_STARTTCH1 (SPW_PKTTX1_NXTSENDCFG_START_STARTTCH1_Val << SPW_PKTTX1_NXTSENDCFG_START_Pos) /* (SPW_PKTTX1_NXTSENDCFG) Start if Start Value matches an incoming Time Code from Time Code Handler 1 Position  */
#define SPW_PKTTX1_NXTSENDCFG_ABORT_Pos       _UINT32_(29)                                         /* (SPW_PKTTX1_NXTSENDCFG) Abort Position */
#define SPW_PKTTX1_NXTSENDCFG_ABORT_Msk       (_UINT32_(0x1) << SPW_PKTTX1_NXTSENDCFG_ABORT_Pos)   /* (SPW_PKTTX1_NXTSENDCFG) Abort Mask */
#define SPW_PKTTX1_NXTSENDCFG_ABORT(value)    (SPW_PKTTX1_NXTSENDCFG_ABORT_Msk & (_UINT32_(value) << SPW_PKTTX1_NXTSENDCFG_ABORT_Pos)) /* Assigment of value for ABORT in the SPW_PKTTX1_NXTSENDCFG register */
#define SPW_PKTTX1_NXTSENDCFG_Msk             _UINT32_(0x20FFFFFF)                                 /* (SPW_PKTTX1_NXTSENDCFG) Register Mask  */


/* -------- SPW_PKTTX1_CURSENDROUT : (SPW Offset: 0xC30) ( R/ 32) PktTx Current Send List Router Bytes -------- */
#define SPW_PKTTX1_CURSENDROUT_BYTE4_Pos      _UINT32_(0)                                          /* (SPW_PKTTX1_CURSENDROUT) Byte4 Position */
#define SPW_PKTTX1_CURSENDROUT_BYTE4_Msk      (_UINT32_(0xFF) << SPW_PKTTX1_CURSENDROUT_BYTE4_Pos) /* (SPW_PKTTX1_CURSENDROUT) Byte4 Mask */
#define SPW_PKTTX1_CURSENDROUT_BYTE4(value)   (SPW_PKTTX1_CURSENDROUT_BYTE4_Msk & (_UINT32_(value) << SPW_PKTTX1_CURSENDROUT_BYTE4_Pos)) /* Assigment of value for BYTE4 in the SPW_PKTTX1_CURSENDROUT register */
#define SPW_PKTTX1_CURSENDROUT_BYTE3_Pos      _UINT32_(8)                                          /* (SPW_PKTTX1_CURSENDROUT) Byte3 Position */
#define SPW_PKTTX1_CURSENDROUT_BYTE3_Msk      (_UINT32_(0xFF) << SPW_PKTTX1_CURSENDROUT_BYTE3_Pos) /* (SPW_PKTTX1_CURSENDROUT) Byte3 Mask */
#define SPW_PKTTX1_CURSENDROUT_BYTE3(value)   (SPW_PKTTX1_CURSENDROUT_BYTE3_Msk & (_UINT32_(value) << SPW_PKTTX1_CURSENDROUT_BYTE3_Pos)) /* Assigment of value for BYTE3 in the SPW_PKTTX1_CURSENDROUT register */
#define SPW_PKTTX1_CURSENDROUT_BYTE2_Pos      _UINT32_(16)                                         /* (SPW_PKTTX1_CURSENDROUT) Byte2 Position */
#define SPW_PKTTX1_CURSENDROUT_BYTE2_Msk      (_UINT32_(0xFF) << SPW_PKTTX1_CURSENDROUT_BYTE2_Pos) /* (SPW_PKTTX1_CURSENDROUT) Byte2 Mask */
#define SPW_PKTTX1_CURSENDROUT_BYTE2(value)   (SPW_PKTTX1_CURSENDROUT_BYTE2_Msk & (_UINT32_(value) << SPW_PKTTX1_CURSENDROUT_BYTE2_Pos)) /* Assigment of value for BYTE2 in the SPW_PKTTX1_CURSENDROUT register */
#define SPW_PKTTX1_CURSENDROUT_BYTE1_Pos      _UINT32_(24)                                         /* (SPW_PKTTX1_CURSENDROUT) Byte1 Position */
#define SPW_PKTTX1_CURSENDROUT_BYTE1_Msk      (_UINT32_(0xFF) << SPW_PKTTX1_CURSENDROUT_BYTE1_Pos) /* (SPW_PKTTX1_CURSENDROUT) Byte1 Mask */
#define SPW_PKTTX1_CURSENDROUT_BYTE1(value)   (SPW_PKTTX1_CURSENDROUT_BYTE1_Msk & (_UINT32_(value) << SPW_PKTTX1_CURSENDROUT_BYTE1_Pos)) /* Assigment of value for BYTE1 in the SPW_PKTTX1_CURSENDROUT register */
#define SPW_PKTTX1_CURSENDROUT_Msk            _UINT32_(0xFFFFFFFF)                                 /* (SPW_PKTTX1_CURSENDROUT) Register Mask  */


/* -------- SPW_PKTTX1_CURSENDADDR : (SPW Offset: 0xC34) ( R/ 32) PktTx Current Send List Address -------- */
#define SPW_PKTTX1_CURSENDADDR_ADDR_Pos       _UINT32_(0)                                          /* (SPW_PKTTX1_CURSENDADDR) Address Position */
#define SPW_PKTTX1_CURSENDADDR_ADDR_Msk       (_UINT32_(0xFFFFFFFF) << SPW_PKTTX1_CURSENDADDR_ADDR_Pos) /* (SPW_PKTTX1_CURSENDADDR) Address Mask */
#define SPW_PKTTX1_CURSENDADDR_ADDR(value)    (SPW_PKTTX1_CURSENDADDR_ADDR_Msk & (_UINT32_(value) << SPW_PKTTX1_CURSENDADDR_ADDR_Pos)) /* Assigment of value for ADDR in the SPW_PKTTX1_CURSENDADDR register */
#define SPW_PKTTX1_CURSENDADDR_Msk            _UINT32_(0xFFFFFFFF)                                 /* (SPW_PKTTX1_CURSENDADDR) Register Mask  */


/* -------- SPW_PKTTX1_CURSENDCFG : (SPW Offset: 0xC38) (R/W 32) PktTx Current Send List Config -------- */
#define SPW_PKTTX1_CURSENDCFG_LEN_Pos         _UINT32_(0)                                          /* (SPW_PKTTX1_CURSENDCFG) Length Position */
#define SPW_PKTTX1_CURSENDCFG_LEN_Msk         (_UINT32_(0xFFFF) << SPW_PKTTX1_CURSENDCFG_LEN_Pos)  /* (SPW_PKTTX1_CURSENDCFG) Length Mask */
#define SPW_PKTTX1_CURSENDCFG_LEN(value)      (SPW_PKTTX1_CURSENDCFG_LEN_Msk & (_UINT32_(value) << SPW_PKTTX1_CURSENDCFG_LEN_Pos)) /* Assigment of value for LEN in the SPW_PKTTX1_CURSENDCFG register */
#define SPW_PKTTX1_CURSENDCFG_ABORT_Pos       _UINT32_(31)                                         /* (SPW_PKTTX1_CURSENDCFG) Abort Position */
#define SPW_PKTTX1_CURSENDCFG_ABORT_Msk       (_UINT32_(0x1) << SPW_PKTTX1_CURSENDCFG_ABORT_Pos)   /* (SPW_PKTTX1_CURSENDCFG) Abort Mask */
#define SPW_PKTTX1_CURSENDCFG_ABORT(value)    (SPW_PKTTX1_CURSENDCFG_ABORT_Msk & (_UINT32_(value) << SPW_PKTTX1_CURSENDCFG_ABORT_Pos)) /* Assigment of value for ABORT in the SPW_PKTTX1_CURSENDCFG register */
#define SPW_PKTTX1_CURSENDCFG_Msk             _UINT32_(0x8000FFFF)                                 /* (SPW_PKTTX1_CURSENDCFG) Register Mask  */


/* -------- SPW_PKTTX1_SWRESET : (SPW Offset: 0xC3C) (R/W 32) PktTx Software Reset -------- */
#define SPW_PKTTX1_SWRESET_PATTERN_Pos        _UINT32_(0)                                          /* (SPW_PKTTX1_SWRESET) Pattern Position */
#define SPW_PKTTX1_SWRESET_PATTERN_Msk        (_UINT32_(0xFFFFFFFF) << SPW_PKTTX1_SWRESET_PATTERN_Pos) /* (SPW_PKTTX1_SWRESET) Pattern Mask */
#define SPW_PKTTX1_SWRESET_PATTERN(value)     (SPW_PKTTX1_SWRESET_PATTERN_Msk & (_UINT32_(value) << SPW_PKTTX1_SWRESET_PATTERN_Pos)) /* Assigment of value for PATTERN in the SPW_PKTTX1_SWRESET register */
#define SPW_PKTTX1_SWRESET_Msk                _UINT32_(0xFFFFFFFF)                                 /* (SPW_PKTTX1_SWRESET) Register Mask  */


/* -------- SPW_RMAP1_CFG : (SPW Offset: 0xE00) (R/W 32) SpW RMAP 1 Config -------- */
#define SPW_RMAP1_CFG_DESTKEY_Pos             _UINT32_(0)                                          /* (SPW_RMAP1_CFG) DestKey Position */
#define SPW_RMAP1_CFG_DESTKEY_Msk             (_UINT32_(0xFF) << SPW_RMAP1_CFG_DESTKEY_Pos)        /* (SPW_RMAP1_CFG) DestKey Mask */
#define SPW_RMAP1_CFG_DESTKEY(value)          (SPW_RMAP1_CFG_DESTKEY_Msk & (_UINT32_(value) << SPW_RMAP1_CFG_DESTKEY_Pos)) /* Assigment of value for DESTKEY in the SPW_RMAP1_CFG register */
#define SPW_RMAP1_CFG_TLA_Pos                 _UINT32_(8)                                          /* (SPW_RMAP1_CFG) Address Position */
#define SPW_RMAP1_CFG_TLA_Msk                 (_UINT32_(0xFF) << SPW_RMAP1_CFG_TLA_Pos)            /* (SPW_RMAP1_CFG) Address Mask */
#define SPW_RMAP1_CFG_TLA(value)              (SPW_RMAP1_CFG_TLA_Msk & (_UINT32_(value) << SPW_RMAP1_CFG_TLA_Pos)) /* Assigment of value for TLA in the SPW_RMAP1_CFG register */
#define SPW_RMAP1_CFG_RMAPENA_Pos             _UINT32_(16)                                         /* (SPW_RMAP1_CFG) RMAP Enable Position */
#define SPW_RMAP1_CFG_RMAPENA_Msk             (_UINT32_(0x1) << SPW_RMAP1_CFG_RMAPENA_Pos)         /* (SPW_RMAP1_CFG) RMAP Enable Mask */
#define SPW_RMAP1_CFG_RMAPENA(value)          (SPW_RMAP1_CFG_RMAPENA_Msk & (_UINT32_(value) << SPW_RMAP1_CFG_RMAPENA_Pos)) /* Assigment of value for RMAPENA in the SPW_RMAP1_CFG register */
#define SPW_RMAP1_CFG_Msk                     _UINT32_(0x0001FFFF)                                 /* (SPW_RMAP1_CFG) Register Mask  */


/* -------- SPW_RMAP1_STS_RC : (SPW Offset: 0xE04) ( R/ 32) SpW RMAP 1 Read and Clear Status -------- */
#define SPW_RMAP1_STS_RC_ERRCODE_Pos          _UINT32_(0)                                          /* (SPW_RMAP1_STS_RC) Error Code Position */
#define SPW_RMAP1_STS_RC_ERRCODE_Msk          (_UINT32_(0xFF) << SPW_RMAP1_STS_RC_ERRCODE_Pos)     /* (SPW_RMAP1_STS_RC) Error Code Mask */
#define SPW_RMAP1_STS_RC_ERRCODE(value)       (SPW_RMAP1_STS_RC_ERRCODE_Msk & (_UINT32_(value) << SPW_RMAP1_STS_RC_ERRCODE_Pos)) /* Assigment of value for ERRCODE in the SPW_RMAP1_STS_RC register */
#define   SPW_RMAP1_STS_RC_ERRCODE_NOERROR_Val _UINT32_(0x0)                                        /* (SPW_RMAP1_STS_RC) No error detected  */
#define   SPW_RMAP1_STS_RC_ERRCODE_DMAERROR_Val _UINT32_(0x1)                                        /* (SPW_RMAP1_STS_RC) Error while DMA accessing the internal bus, e.g. illegal address.  */
#define   SPW_RMAP1_STS_RC_ERRCODE_RMAPERROR_Val _UINT32_(0x2)                                        /* (SPW_RMAP1_STS_RC) Unused RMAP command according to [RMAP]  */
#define   SPW_RMAP1_STS_RC_ERRCODE_DESTKEYERROR_Val _UINT32_(0x3)                                        /* (SPW_RMAP1_STS_RC) Destination key error  */
#define   SPW_RMAP1_STS_RC_ERRCODE_DATACRCERROR_Val _UINT32_(0x4)                                        /* (SPW_RMAP1_STS_RC) Data CRC error  */
#define   SPW_RMAP1_STS_RC_ERRCODE_EOPERROR_Val _UINT32_(0x5)                                        /* (SPW_RMAP1_STS_RC) Early EOP in header or data, i.e. EOP has been received with less data than expected from the RMAP command header.  */
#define   SPW_RMAP1_STS_RC_ERRCODE_CARGOERROR_Val _UINT32_(0x6)                                        /* (SPW_RMAP1_STS_RC) Cargo too large. Late EOP or EEP in data, i.e. EOP/EEP has been received with more data than expected from the RMAP command header.  */
#define   SPW_RMAP1_STS_RC_ERRCODE_EEPERROR_Val _UINT32_(0x7)                                        /* (SPW_RMAP1_STS_RC) Early EEP in data for RMAP commands. EEP has been received with less data or exactly as much as expected from the RMAP command header.  */
#define   SPW_RMAP1_STS_RC_ERRCODE_CMDERROR_Val _UINT32_(0xA)                                        /* (SPW_RMAP1_STS_RC) Authorisation error:Invalid or unsupported command.  */
#define   SPW_RMAP1_STS_RC_ERRCODE_TLAERROR_Val _UINT32_(0xC)                                        /* (SPW_RMAP1_STS_RC) Non-matching Target Logical Address.  */
#define   SPW_RMAP1_STS_RC_ERRCODE_HEADERCRCERROR_Val _UINT32_(0x10)                                       /* (SPW_RMAP1_STS_RC) Incorrect header CRC.  */
#define   SPW_RMAP1_STS_RC_ERRCODE_PROTOCOLIDERROR_Val _UINT32_(0x11)                                       /* (SPW_RMAP1_STS_RC) Protocol Identifier not supported.  */
#define   SPW_RMAP1_STS_RC_ERRCODE_REPLYADDERROR_Val _UINT32_(0x12)                                       /* (SPW_RMAP1_STS_RC) Unsupported reply address length  */
#define SPW_RMAP1_STS_RC_ERRCODE_NOERROR      (SPW_RMAP1_STS_RC_ERRCODE_NOERROR_Val << SPW_RMAP1_STS_RC_ERRCODE_Pos) /* (SPW_RMAP1_STS_RC) No error detected Position  */
#define SPW_RMAP1_STS_RC_ERRCODE_DMAERROR     (SPW_RMAP1_STS_RC_ERRCODE_DMAERROR_Val << SPW_RMAP1_STS_RC_ERRCODE_Pos) /* (SPW_RMAP1_STS_RC) Error while DMA accessing the internal bus, e.g. illegal address. Position  */
#define SPW_RMAP1_STS_RC_ERRCODE_RMAPERROR    (SPW_RMAP1_STS_RC_ERRCODE_RMAPERROR_Val << SPW_RMAP1_STS_RC_ERRCODE_Pos) /* (SPW_RMAP1_STS_RC) Unused RMAP command according to [RMAP] Position  */
#define SPW_RMAP1_STS_RC_ERRCODE_DESTKEYERROR (SPW_RMAP1_STS_RC_ERRCODE_DESTKEYERROR_Val << SPW_RMAP1_STS_RC_ERRCODE_Pos) /* (SPW_RMAP1_STS_RC) Destination key error Position  */
#define SPW_RMAP1_STS_RC_ERRCODE_DATACRCERROR (SPW_RMAP1_STS_RC_ERRCODE_DATACRCERROR_Val << SPW_RMAP1_STS_RC_ERRCODE_Pos) /* (SPW_RMAP1_STS_RC) Data CRC error Position  */
#define SPW_RMAP1_STS_RC_ERRCODE_EOPERROR     (SPW_RMAP1_STS_RC_ERRCODE_EOPERROR_Val << SPW_RMAP1_STS_RC_ERRCODE_Pos) /* (SPW_RMAP1_STS_RC) Early EOP in header or data, i.e. EOP has been received with less data than expected from the RMAP command header. Position  */
#define SPW_RMAP1_STS_RC_ERRCODE_CARGOERROR   (SPW_RMAP1_STS_RC_ERRCODE_CARGOERROR_Val << SPW_RMAP1_STS_RC_ERRCODE_Pos) /* (SPW_RMAP1_STS_RC) Cargo too large. Late EOP or EEP in data, i.e. EOP/EEP has been received with more data than expected from the RMAP command header. Position  */
#define SPW_RMAP1_STS_RC_ERRCODE_EEPERROR     (SPW_RMAP1_STS_RC_ERRCODE_EEPERROR_Val << SPW_RMAP1_STS_RC_ERRCODE_Pos) /* (SPW_RMAP1_STS_RC) Early EEP in data for RMAP commands. EEP has been received with less data or exactly as much as expected from the RMAP command header. Position  */
#define SPW_RMAP1_STS_RC_ERRCODE_CMDERROR     (SPW_RMAP1_STS_RC_ERRCODE_CMDERROR_Val << SPW_RMAP1_STS_RC_ERRCODE_Pos) /* (SPW_RMAP1_STS_RC) Authorisation error:Invalid or unsupported command. Position  */
#define SPW_RMAP1_STS_RC_ERRCODE_TLAERROR     (SPW_RMAP1_STS_RC_ERRCODE_TLAERROR_Val << SPW_RMAP1_STS_RC_ERRCODE_Pos) /* (SPW_RMAP1_STS_RC) Non-matching Target Logical Address. Position  */
#define SPW_RMAP1_STS_RC_ERRCODE_HEADERCRCERROR (SPW_RMAP1_STS_RC_ERRCODE_HEADERCRCERROR_Val << SPW_RMAP1_STS_RC_ERRCODE_Pos) /* (SPW_RMAP1_STS_RC) Incorrect header CRC. Position  */
#define SPW_RMAP1_STS_RC_ERRCODE_PROTOCOLIDERROR (SPW_RMAP1_STS_RC_ERRCODE_PROTOCOLIDERROR_Val << SPW_RMAP1_STS_RC_ERRCODE_Pos) /* (SPW_RMAP1_STS_RC) Protocol Identifier not supported. Position  */
#define SPW_RMAP1_STS_RC_ERRCODE_REPLYADDERROR (SPW_RMAP1_STS_RC_ERRCODE_REPLYADDERROR_Val << SPW_RMAP1_STS_RC_ERRCODE_Pos) /* (SPW_RMAP1_STS_RC) Unsupported reply address length Position  */
#define SPW_RMAP1_STS_RC_VALID_Pos            _UINT32_(8)                                          /* (SPW_RMAP1_STS_RC) Valid Position */
#define SPW_RMAP1_STS_RC_VALID_Msk            (_UINT32_(0x1) << SPW_RMAP1_STS_RC_VALID_Pos)        /* (SPW_RMAP1_STS_RC) Valid Mask */
#define SPW_RMAP1_STS_RC_VALID(value)         (SPW_RMAP1_STS_RC_VALID_Msk & (_UINT32_(value) << SPW_RMAP1_STS_RC_VALID_Pos)) /* Assigment of value for VALID in the SPW_RMAP1_STS_RC register */
#define SPW_RMAP1_STS_RC_Msk                  _UINT32_(0x000001FF)                                 /* (SPW_RMAP1_STS_RC) Register Mask  */


/* -------- SPW_RMAP1_STS : (SPW Offset: 0xE08) ( R/ 32) SpW RMAP 1 Read Status -------- */
#define SPW_RMAP1_STS_ERRCODE_Pos             _UINT32_(0)                                          /* (SPW_RMAP1_STS) Error Code Position */
#define SPW_RMAP1_STS_ERRCODE_Msk             (_UINT32_(0xFF) << SPW_RMAP1_STS_ERRCODE_Pos)        /* (SPW_RMAP1_STS) Error Code Mask */
#define SPW_RMAP1_STS_ERRCODE(value)          (SPW_RMAP1_STS_ERRCODE_Msk & (_UINT32_(value) << SPW_RMAP1_STS_ERRCODE_Pos)) /* Assigment of value for ERRCODE in the SPW_RMAP1_STS register */
#define   SPW_RMAP1_STS_ERRCODE_NOERROR_Val   _UINT32_(0x0)                                        /* (SPW_RMAP1_STS) No error detected  */
#define   SPW_RMAP1_STS_ERRCODE_DMAERROR_Val  _UINT32_(0x1)                                        /* (SPW_RMAP1_STS) Error while DMA accessing the internal bus, e.g. illegal address.  */
#define   SPW_RMAP1_STS_ERRCODE_RMAPERROR_Val _UINT32_(0x2)                                        /* (SPW_RMAP1_STS) Unused RMAP command according to [RMAP]  */
#define   SPW_RMAP1_STS_ERRCODE_DESTKEYERROR_Val _UINT32_(0x3)                                        /* (SPW_RMAP1_STS) Destination key error  */
#define   SPW_RMAP1_STS_ERRCODE_DATACRCERROR_Val _UINT32_(0x4)                                        /* (SPW_RMAP1_STS) Data CRC error  */
#define   SPW_RMAP1_STS_ERRCODE_EOPERROR_Val  _UINT32_(0x5)                                        /* (SPW_RMAP1_STS) Early EOP in header or data, i.e. EOP has been received with less data than expected from the RMAP command header.  */
#define   SPW_RMAP1_STS_ERRCODE_CARGOERROR_Val _UINT32_(0x6)                                        /* (SPW_RMAP1_STS) Cargo too large. Late EOP or EEP in data, i.e. EOP/EEP has been received with more data than expected from the RMAP command header.  */
#define   SPW_RMAP1_STS_ERRCODE_EEPERROR_Val  _UINT32_(0x7)                                        /* (SPW_RMAP1_STS) Early EEP in data for RMAP commands. EEP has been received with less data or exactly as much as expected from the RMAP command header.  */
#define   SPW_RMAP1_STS_ERRCODE_CMDERROR_Val  _UINT32_(0xA)                                        /* (SPW_RMAP1_STS) Authorisation error:Invalid or unsupported command.  */
#define   SPW_RMAP1_STS_ERRCODE_TLAERROR_Val  _UINT32_(0xC)                                        /* (SPW_RMAP1_STS) Non-matching Target Logical Address.  */
#define   SPW_RMAP1_STS_ERRCODE_HEADERCRCERROR_Val _UINT32_(0x10)                                       /* (SPW_RMAP1_STS) Incorrect header CRC.  */
#define   SPW_RMAP1_STS_ERRCODE_PROTOCOLIDERROR_Val _UINT32_(0x11)                                       /* (SPW_RMAP1_STS) Protocol Identifier not supported.  */
#define   SPW_RMAP1_STS_ERRCODE_REPLYADDERROR_Val _UINT32_(0x12)                                       /* (SPW_RMAP1_STS) Unsupported reply address length  */
#define SPW_RMAP1_STS_ERRCODE_NOERROR         (SPW_RMAP1_STS_ERRCODE_NOERROR_Val << SPW_RMAP1_STS_ERRCODE_Pos) /* (SPW_RMAP1_STS) No error detected Position  */
#define SPW_RMAP1_STS_ERRCODE_DMAERROR        (SPW_RMAP1_STS_ERRCODE_DMAERROR_Val << SPW_RMAP1_STS_ERRCODE_Pos) /* (SPW_RMAP1_STS) Error while DMA accessing the internal bus, e.g. illegal address. Position  */
#define SPW_RMAP1_STS_ERRCODE_RMAPERROR       (SPW_RMAP1_STS_ERRCODE_RMAPERROR_Val << SPW_RMAP1_STS_ERRCODE_Pos) /* (SPW_RMAP1_STS) Unused RMAP command according to [RMAP] Position  */
#define SPW_RMAP1_STS_ERRCODE_DESTKEYERROR    (SPW_RMAP1_STS_ERRCODE_DESTKEYERROR_Val << SPW_RMAP1_STS_ERRCODE_Pos) /* (SPW_RMAP1_STS) Destination key error Position  */
#define SPW_RMAP1_STS_ERRCODE_DATACRCERROR    (SPW_RMAP1_STS_ERRCODE_DATACRCERROR_Val << SPW_RMAP1_STS_ERRCODE_Pos) /* (SPW_RMAP1_STS) Data CRC error Position  */
#define SPW_RMAP1_STS_ERRCODE_EOPERROR        (SPW_RMAP1_STS_ERRCODE_EOPERROR_Val << SPW_RMAP1_STS_ERRCODE_Pos) /* (SPW_RMAP1_STS) Early EOP in header or data, i.e. EOP has been received with less data than expected from the RMAP command header. Position  */
#define SPW_RMAP1_STS_ERRCODE_CARGOERROR      (SPW_RMAP1_STS_ERRCODE_CARGOERROR_Val << SPW_RMAP1_STS_ERRCODE_Pos) /* (SPW_RMAP1_STS) Cargo too large. Late EOP or EEP in data, i.e. EOP/EEP has been received with more data than expected from the RMAP command header. Position  */
#define SPW_RMAP1_STS_ERRCODE_EEPERROR        (SPW_RMAP1_STS_ERRCODE_EEPERROR_Val << SPW_RMAP1_STS_ERRCODE_Pos) /* (SPW_RMAP1_STS) Early EEP in data for RMAP commands. EEP has been received with less data or exactly as much as expected from the RMAP command header. Position  */
#define SPW_RMAP1_STS_ERRCODE_CMDERROR        (SPW_RMAP1_STS_ERRCODE_CMDERROR_Val << SPW_RMAP1_STS_ERRCODE_Pos) /* (SPW_RMAP1_STS) Authorisation error:Invalid or unsupported command. Position  */
#define SPW_RMAP1_STS_ERRCODE_TLAERROR        (SPW_RMAP1_STS_ERRCODE_TLAERROR_Val << SPW_RMAP1_STS_ERRCODE_Pos) /* (SPW_RMAP1_STS) Non-matching Target Logical Address. Position  */
#define SPW_RMAP1_STS_ERRCODE_HEADERCRCERROR  (SPW_RMAP1_STS_ERRCODE_HEADERCRCERROR_Val << SPW_RMAP1_STS_ERRCODE_Pos) /* (SPW_RMAP1_STS) Incorrect header CRC. Position  */
#define SPW_RMAP1_STS_ERRCODE_PROTOCOLIDERROR (SPW_RMAP1_STS_ERRCODE_PROTOCOLIDERROR_Val << SPW_RMAP1_STS_ERRCODE_Pos) /* (SPW_RMAP1_STS) Protocol Identifier not supported. Position  */
#define SPW_RMAP1_STS_ERRCODE_REPLYADDERROR   (SPW_RMAP1_STS_ERRCODE_REPLYADDERROR_Val << SPW_RMAP1_STS_ERRCODE_Pos) /* (SPW_RMAP1_STS) Unsupported reply address length Position  */
#define SPW_RMAP1_STS_VALID_Pos               _UINT32_(8)                                          /* (SPW_RMAP1_STS) Valid Position */
#define SPW_RMAP1_STS_VALID_Msk               (_UINT32_(0x1) << SPW_RMAP1_STS_VALID_Pos)           /* (SPW_RMAP1_STS) Valid Mask */
#define SPW_RMAP1_STS_VALID(value)            (SPW_RMAP1_STS_VALID_Msk & (_UINT32_(value) << SPW_RMAP1_STS_VALID_Pos)) /* Assigment of value for VALID in the SPW_RMAP1_STS register */
#define SPW_RMAP1_STS_Msk                     _UINT32_(0x000001FF)                                 /* (SPW_RMAP1_STS) Register Mask  */


/* -------- SPW_TCH_PI_RM : (SPW Offset: 0xE80) ( R/ 32) SpW Tch Pending Read Masked Interrupt -------- */
#define SPW_TCH_PI_RM_TCEVENT_Pos             _UINT32_(0)                                          /* (SPW_TCH_PI_RM) TcEvent Position */
#define SPW_TCH_PI_RM_TCEVENT_Msk             (_UINT32_(0x1) << SPW_TCH_PI_RM_TCEVENT_Pos)         /* (SPW_TCH_PI_RM) TcEvent Mask */
#define SPW_TCH_PI_RM_TCEVENT(value)          (SPW_TCH_PI_RM_TCEVENT_Msk & (_UINT32_(value) << SPW_TCH_PI_RM_TCEVENT_Pos)) /* Assigment of value for TCEVENT in the SPW_TCH_PI_RM register */
#define SPW_TCH_PI_RM_TIMECODE_Pos            _UINT32_(1)                                          /* (SPW_TCH_PI_RM) Time Code Position */
#define SPW_TCH_PI_RM_TIMECODE_Msk            (_UINT32_(0x1) << SPW_TCH_PI_RM_TIMECODE_Pos)        /* (SPW_TCH_PI_RM) Time Code Mask */
#define SPW_TCH_PI_RM_TIMECODE(value)         (SPW_TCH_PI_RM_TIMECODE_Msk & (_UINT32_(value) << SPW_TCH_PI_RM_TIMECODE_Pos)) /* Assigment of value for TIMECODE in the SPW_TCH_PI_RM register */
#define SPW_TCH_PI_RM_ANYTIMECODE_Pos         _UINT32_(2)                                          /* (SPW_TCH_PI_RM) Any Time Code Position */
#define SPW_TCH_PI_RM_ANYTIMECODE_Msk         (_UINT32_(0x1) << SPW_TCH_PI_RM_ANYTIMECODE_Pos)     /* (SPW_TCH_PI_RM) Any Time Code Mask */
#define SPW_TCH_PI_RM_ANYTIMECODE(value)      (SPW_TCH_PI_RM_ANYTIMECODE_Msk & (_UINT32_(value) << SPW_TCH_PI_RM_ANYTIMECODE_Pos)) /* Assigment of value for ANYTIMECODE in the SPW_TCH_PI_RM register */
#define SPW_TCH_PI_RM_LATEWD_Pos              _UINT32_(3)                                          /* (SPW_TCH_PI_RM) Late Watchdog Position */
#define SPW_TCH_PI_RM_LATEWD_Msk              (_UINT32_(0x1) << SPW_TCH_PI_RM_LATEWD_Pos)          /* (SPW_TCH_PI_RM) Late Watchdog Mask */
#define SPW_TCH_PI_RM_LATEWD(value)           (SPW_TCH_PI_RM_LATEWD_Msk & (_UINT32_(value) << SPW_TCH_PI_RM_LATEWD_Pos)) /* Assigment of value for LATEWD in the SPW_TCH_PI_RM register */
#define SPW_TCH_PI_RM_EARLYWD_Pos             _UINT32_(4)                                          /* (SPW_TCH_PI_RM) Early Watchdog Position */
#define SPW_TCH_PI_RM_EARLYWD_Msk             (_UINT32_(0x1) << SPW_TCH_PI_RM_EARLYWD_Pos)         /* (SPW_TCH_PI_RM) Early Watchdog Mask */
#define SPW_TCH_PI_RM_EARLYWD(value)          (SPW_TCH_PI_RM_EARLYWD_Msk & (_UINT32_(value) << SPW_TCH_PI_RM_EARLYWD_Pos)) /* Assigment of value for EARLYWD in the SPW_TCH_PI_RM register */
#define SPW_TCH_PI_RM_Msk                     _UINT32_(0x0000001F)                                 /* (SPW_TCH_PI_RM) Register Mask  */


/* -------- SPW_TCH_PI_RCM : (SPW Offset: 0xE84) ( R/ 32) SpW Tch Pending Read and Clear Masked Interrupt -------- */
#define SPW_TCH_PI_RCM_TCEVENT_Pos            _UINT32_(0)                                          /* (SPW_TCH_PI_RCM) TcEvent Position */
#define SPW_TCH_PI_RCM_TCEVENT_Msk            (_UINT32_(0x1) << SPW_TCH_PI_RCM_TCEVENT_Pos)        /* (SPW_TCH_PI_RCM) TcEvent Mask */
#define SPW_TCH_PI_RCM_TCEVENT(value)         (SPW_TCH_PI_RCM_TCEVENT_Msk & (_UINT32_(value) << SPW_TCH_PI_RCM_TCEVENT_Pos)) /* Assigment of value for TCEVENT in the SPW_TCH_PI_RCM register */
#define SPW_TCH_PI_RCM_TIMECODE_Pos           _UINT32_(1)                                          /* (SPW_TCH_PI_RCM) Time Code Position */
#define SPW_TCH_PI_RCM_TIMECODE_Msk           (_UINT32_(0x1) << SPW_TCH_PI_RCM_TIMECODE_Pos)       /* (SPW_TCH_PI_RCM) Time Code Mask */
#define SPW_TCH_PI_RCM_TIMECODE(value)        (SPW_TCH_PI_RCM_TIMECODE_Msk & (_UINT32_(value) << SPW_TCH_PI_RCM_TIMECODE_Pos)) /* Assigment of value for TIMECODE in the SPW_TCH_PI_RCM register */
#define SPW_TCH_PI_RCM_ANYTIMECODE_Pos        _UINT32_(2)                                          /* (SPW_TCH_PI_RCM) Any Time Code Position */
#define SPW_TCH_PI_RCM_ANYTIMECODE_Msk        (_UINT32_(0x1) << SPW_TCH_PI_RCM_ANYTIMECODE_Pos)    /* (SPW_TCH_PI_RCM) Any Time Code Mask */
#define SPW_TCH_PI_RCM_ANYTIMECODE(value)     (SPW_TCH_PI_RCM_ANYTIMECODE_Msk & (_UINT32_(value) << SPW_TCH_PI_RCM_ANYTIMECODE_Pos)) /* Assigment of value for ANYTIMECODE in the SPW_TCH_PI_RCM register */
#define SPW_TCH_PI_RCM_LATEWD_Pos             _UINT32_(3)                                          /* (SPW_TCH_PI_RCM) Late Watchdog Position */
#define SPW_TCH_PI_RCM_LATEWD_Msk             (_UINT32_(0x1) << SPW_TCH_PI_RCM_LATEWD_Pos)         /* (SPW_TCH_PI_RCM) Late Watchdog Mask */
#define SPW_TCH_PI_RCM_LATEWD(value)          (SPW_TCH_PI_RCM_LATEWD_Msk & (_UINT32_(value) << SPW_TCH_PI_RCM_LATEWD_Pos)) /* Assigment of value for LATEWD in the SPW_TCH_PI_RCM register */
#define SPW_TCH_PI_RCM_EARLYWD_Pos            _UINT32_(4)                                          /* (SPW_TCH_PI_RCM) Early Watchdog Position */
#define SPW_TCH_PI_RCM_EARLYWD_Msk            (_UINT32_(0x1) << SPW_TCH_PI_RCM_EARLYWD_Pos)        /* (SPW_TCH_PI_RCM) Early Watchdog Mask */
#define SPW_TCH_PI_RCM_EARLYWD(value)         (SPW_TCH_PI_RCM_EARLYWD_Msk & (_UINT32_(value) << SPW_TCH_PI_RCM_EARLYWD_Pos)) /* Assigment of value for EARLYWD in the SPW_TCH_PI_RCM register */
#define SPW_TCH_PI_RCM_Msk                    _UINT32_(0x0000001F)                                 /* (SPW_TCH_PI_RCM) Register Mask  */


/* -------- SPW_TCH_PI_R : (SPW Offset: 0xE88) ( R/ 32) SpW Tch Pending Read Interrupt -------- */
#define SPW_TCH_PI_R_TCEVENT_Pos              _UINT32_(0)                                          /* (SPW_TCH_PI_R) TcEvent Position */
#define SPW_TCH_PI_R_TCEVENT_Msk              (_UINT32_(0x1) << SPW_TCH_PI_R_TCEVENT_Pos)          /* (SPW_TCH_PI_R) TcEvent Mask */
#define SPW_TCH_PI_R_TCEVENT(value)           (SPW_TCH_PI_R_TCEVENT_Msk & (_UINT32_(value) << SPW_TCH_PI_R_TCEVENT_Pos)) /* Assigment of value for TCEVENT in the SPW_TCH_PI_R register */
#define SPW_TCH_PI_R_TIMECODE_Pos             _UINT32_(1)                                          /* (SPW_TCH_PI_R) Time Code Position */
#define SPW_TCH_PI_R_TIMECODE_Msk             (_UINT32_(0x1) << SPW_TCH_PI_R_TIMECODE_Pos)         /* (SPW_TCH_PI_R) Time Code Mask */
#define SPW_TCH_PI_R_TIMECODE(value)          (SPW_TCH_PI_R_TIMECODE_Msk & (_UINT32_(value) << SPW_TCH_PI_R_TIMECODE_Pos)) /* Assigment of value for TIMECODE in the SPW_TCH_PI_R register */
#define SPW_TCH_PI_R_ANYTIMECODE_Pos          _UINT32_(2)                                          /* (SPW_TCH_PI_R) Any Time Code Position */
#define SPW_TCH_PI_R_ANYTIMECODE_Msk          (_UINT32_(0x1) << SPW_TCH_PI_R_ANYTIMECODE_Pos)      /* (SPW_TCH_PI_R) Any Time Code Mask */
#define SPW_TCH_PI_R_ANYTIMECODE(value)       (SPW_TCH_PI_R_ANYTIMECODE_Msk & (_UINT32_(value) << SPW_TCH_PI_R_ANYTIMECODE_Pos)) /* Assigment of value for ANYTIMECODE in the SPW_TCH_PI_R register */
#define SPW_TCH_PI_R_LATEWD_Pos               _UINT32_(3)                                          /* (SPW_TCH_PI_R) Late Watchdog Position */
#define SPW_TCH_PI_R_LATEWD_Msk               (_UINT32_(0x1) << SPW_TCH_PI_R_LATEWD_Pos)           /* (SPW_TCH_PI_R) Late Watchdog Mask */
#define SPW_TCH_PI_R_LATEWD(value)            (SPW_TCH_PI_R_LATEWD_Msk & (_UINT32_(value) << SPW_TCH_PI_R_LATEWD_Pos)) /* Assigment of value for LATEWD in the SPW_TCH_PI_R register */
#define SPW_TCH_PI_R_EARLYWD_Pos              _UINT32_(4)                                          /* (SPW_TCH_PI_R) Early Watchdog Position */
#define SPW_TCH_PI_R_EARLYWD_Msk              (_UINT32_(0x1) << SPW_TCH_PI_R_EARLYWD_Pos)          /* (SPW_TCH_PI_R) Early Watchdog Mask */
#define SPW_TCH_PI_R_EARLYWD(value)           (SPW_TCH_PI_R_EARLYWD_Msk & (_UINT32_(value) << SPW_TCH_PI_R_EARLYWD_Pos)) /* Assigment of value for EARLYWD in the SPW_TCH_PI_R register */
#define SPW_TCH_PI_R_Msk                      _UINT32_(0x0000001F)                                 /* (SPW_TCH_PI_R) Register Mask  */


/* -------- SPW_TCH_PI_RCS : (SPW Offset: 0xE8C) (R/W 32) SpW Tch Pending Read, Clear and Enabled Interrupt -------- */
#define SPW_TCH_PI_RCS_TCEVENT_Pos            _UINT32_(0)                                          /* (SPW_TCH_PI_RCS) TcEvent Position */
#define SPW_TCH_PI_RCS_TCEVENT_Msk            (_UINT32_(0x1) << SPW_TCH_PI_RCS_TCEVENT_Pos)        /* (SPW_TCH_PI_RCS) TcEvent Mask */
#define SPW_TCH_PI_RCS_TCEVENT(value)         (SPW_TCH_PI_RCS_TCEVENT_Msk & (_UINT32_(value) << SPW_TCH_PI_RCS_TCEVENT_Pos)) /* Assigment of value for TCEVENT in the SPW_TCH_PI_RCS register */
#define SPW_TCH_PI_RCS_TIMECODE_Pos           _UINT32_(1)                                          /* (SPW_TCH_PI_RCS) Time Code Position */
#define SPW_TCH_PI_RCS_TIMECODE_Msk           (_UINT32_(0x1) << SPW_TCH_PI_RCS_TIMECODE_Pos)       /* (SPW_TCH_PI_RCS) Time Code Mask */
#define SPW_TCH_PI_RCS_TIMECODE(value)        (SPW_TCH_PI_RCS_TIMECODE_Msk & (_UINT32_(value) << SPW_TCH_PI_RCS_TIMECODE_Pos)) /* Assigment of value for TIMECODE in the SPW_TCH_PI_RCS register */
#define SPW_TCH_PI_RCS_ANYTIMECODE_Pos        _UINT32_(2)                                          /* (SPW_TCH_PI_RCS) Any Time Code Position */
#define SPW_TCH_PI_RCS_ANYTIMECODE_Msk        (_UINT32_(0x1) << SPW_TCH_PI_RCS_ANYTIMECODE_Pos)    /* (SPW_TCH_PI_RCS) Any Time Code Mask */
#define SPW_TCH_PI_RCS_ANYTIMECODE(value)     (SPW_TCH_PI_RCS_ANYTIMECODE_Msk & (_UINT32_(value) << SPW_TCH_PI_RCS_ANYTIMECODE_Pos)) /* Assigment of value for ANYTIMECODE in the SPW_TCH_PI_RCS register */
#define SPW_TCH_PI_RCS_LATEWD_Pos             _UINT32_(3)                                          /* (SPW_TCH_PI_RCS) Late Watchdog Position */
#define SPW_TCH_PI_RCS_LATEWD_Msk             (_UINT32_(0x1) << SPW_TCH_PI_RCS_LATEWD_Pos)         /* (SPW_TCH_PI_RCS) Late Watchdog Mask */
#define SPW_TCH_PI_RCS_LATEWD(value)          (SPW_TCH_PI_RCS_LATEWD_Msk & (_UINT32_(value) << SPW_TCH_PI_RCS_LATEWD_Pos)) /* Assigment of value for LATEWD in the SPW_TCH_PI_RCS register */
#define SPW_TCH_PI_RCS_EARLYWD_Pos            _UINT32_(4)                                          /* (SPW_TCH_PI_RCS) Early Watchdog Position */
#define SPW_TCH_PI_RCS_EARLYWD_Msk            (_UINT32_(0x1) << SPW_TCH_PI_RCS_EARLYWD_Pos)        /* (SPW_TCH_PI_RCS) Early Watchdog Mask */
#define SPW_TCH_PI_RCS_EARLYWD(value)         (SPW_TCH_PI_RCS_EARLYWD_Msk & (_UINT32_(value) << SPW_TCH_PI_RCS_EARLYWD_Pos)) /* Assigment of value for EARLYWD in the SPW_TCH_PI_RCS register */
#define SPW_TCH_PI_RCS_Msk                    _UINT32_(0x0000001F)                                 /* (SPW_TCH_PI_RCS) Register Mask  */


/* -------- SPW_TCH_IM : (SPW Offset: 0xE90) (R/W 32) SpW Tch Interrupt Mask -------- */
#define SPW_TCH_IM_TCEVENT_Pos                _UINT32_(0)                                          /* (SPW_TCH_IM) TcEvent Position */
#define SPW_TCH_IM_TCEVENT_Msk                (_UINT32_(0x1) << SPW_TCH_IM_TCEVENT_Pos)            /* (SPW_TCH_IM) TcEvent Mask */
#define SPW_TCH_IM_TCEVENT(value)             (SPW_TCH_IM_TCEVENT_Msk & (_UINT32_(value) << SPW_TCH_IM_TCEVENT_Pos)) /* Assigment of value for TCEVENT in the SPW_TCH_IM register */
#define SPW_TCH_IM_TIMECODE_Pos               _UINT32_(1)                                          /* (SPW_TCH_IM) Time Code Position */
#define SPW_TCH_IM_TIMECODE_Msk               (_UINT32_(0x1) << SPW_TCH_IM_TIMECODE_Pos)           /* (SPW_TCH_IM) Time Code Mask */
#define SPW_TCH_IM_TIMECODE(value)            (SPW_TCH_IM_TIMECODE_Msk & (_UINT32_(value) << SPW_TCH_IM_TIMECODE_Pos)) /* Assigment of value for TIMECODE in the SPW_TCH_IM register */
#define SPW_TCH_IM_ANYTIMECODE_Pos            _UINT32_(2)                                          /* (SPW_TCH_IM) Any Time Code Position */
#define SPW_TCH_IM_ANYTIMECODE_Msk            (_UINT32_(0x1) << SPW_TCH_IM_ANYTIMECODE_Pos)        /* (SPW_TCH_IM) Any Time Code Mask */
#define SPW_TCH_IM_ANYTIMECODE(value)         (SPW_TCH_IM_ANYTIMECODE_Msk & (_UINT32_(value) << SPW_TCH_IM_ANYTIMECODE_Pos)) /* Assigment of value for ANYTIMECODE in the SPW_TCH_IM register */
#define SPW_TCH_IM_LATEWD_Pos                 _UINT32_(3)                                          /* (SPW_TCH_IM) Late Watchdog Position */
#define SPW_TCH_IM_LATEWD_Msk                 (_UINT32_(0x1) << SPW_TCH_IM_LATEWD_Pos)             /* (SPW_TCH_IM) Late Watchdog Mask */
#define SPW_TCH_IM_LATEWD(value)              (SPW_TCH_IM_LATEWD_Msk & (_UINT32_(value) << SPW_TCH_IM_LATEWD_Pos)) /* Assigment of value for LATEWD in the SPW_TCH_IM register */
#define SPW_TCH_IM_EARLYWD_Pos                _UINT32_(4)                                          /* (SPW_TCH_IM) Early Watchdog Position */
#define SPW_TCH_IM_EARLYWD_Msk                (_UINT32_(0x1) << SPW_TCH_IM_EARLYWD_Pos)            /* (SPW_TCH_IM) Early Watchdog Mask */
#define SPW_TCH_IM_EARLYWD(value)             (SPW_TCH_IM_EARLYWD_Msk & (_UINT32_(value) << SPW_TCH_IM_EARLYWD_Pos)) /* Assigment of value for EARLYWD in the SPW_TCH_IM register */
#define SPW_TCH_IM_Msk                        _UINT32_(0x0000001F)                                 /* (SPW_TCH_IM) Register Mask  */


/* -------- SPW_TCH_PI_C : (SPW Offset: 0xE94) ( /W 32) SpW Tch Clear Pending Interrupt -------- */
#define SPW_TCH_PI_C_TCEVENT_Pos              _UINT32_(0)                                          /* (SPW_TCH_PI_C) TcEvent Position */
#define SPW_TCH_PI_C_TCEVENT_Msk              (_UINT32_(0x1) << SPW_TCH_PI_C_TCEVENT_Pos)          /* (SPW_TCH_PI_C) TcEvent Mask */
#define SPW_TCH_PI_C_TCEVENT(value)           (SPW_TCH_PI_C_TCEVENT_Msk & (_UINT32_(value) << SPW_TCH_PI_C_TCEVENT_Pos)) /* Assigment of value for TCEVENT in the SPW_TCH_PI_C register */
#define SPW_TCH_PI_C_TIMECODE_Pos             _UINT32_(1)                                          /* (SPW_TCH_PI_C) Time Code Position */
#define SPW_TCH_PI_C_TIMECODE_Msk             (_UINT32_(0x1) << SPW_TCH_PI_C_TIMECODE_Pos)         /* (SPW_TCH_PI_C) Time Code Mask */
#define SPW_TCH_PI_C_TIMECODE(value)          (SPW_TCH_PI_C_TIMECODE_Msk & (_UINT32_(value) << SPW_TCH_PI_C_TIMECODE_Pos)) /* Assigment of value for TIMECODE in the SPW_TCH_PI_C register */
#define SPW_TCH_PI_C_ANYTIMECODE_Pos          _UINT32_(2)                                          /* (SPW_TCH_PI_C) Any Time Code Position */
#define SPW_TCH_PI_C_ANYTIMECODE_Msk          (_UINT32_(0x1) << SPW_TCH_PI_C_ANYTIMECODE_Pos)      /* (SPW_TCH_PI_C) Any Time Code Mask */
#define SPW_TCH_PI_C_ANYTIMECODE(value)       (SPW_TCH_PI_C_ANYTIMECODE_Msk & (_UINT32_(value) << SPW_TCH_PI_C_ANYTIMECODE_Pos)) /* Assigment of value for ANYTIMECODE in the SPW_TCH_PI_C register */
#define SPW_TCH_PI_C_LATEWD_Pos               _UINT32_(3)                                          /* (SPW_TCH_PI_C) Late Watchdog Position */
#define SPW_TCH_PI_C_LATEWD_Msk               (_UINT32_(0x1) << SPW_TCH_PI_C_LATEWD_Pos)           /* (SPW_TCH_PI_C) Late Watchdog Mask */
#define SPW_TCH_PI_C_LATEWD(value)            (SPW_TCH_PI_C_LATEWD_Msk & (_UINT32_(value) << SPW_TCH_PI_C_LATEWD_Pos)) /* Assigment of value for LATEWD in the SPW_TCH_PI_C register */
#define SPW_TCH_PI_C_EARLYWD_Pos              _UINT32_(4)                                          /* (SPW_TCH_PI_C) Early Watchdog Position */
#define SPW_TCH_PI_C_EARLYWD_Msk              (_UINT32_(0x1) << SPW_TCH_PI_C_EARLYWD_Pos)          /* (SPW_TCH_PI_C) Early Watchdog Mask */
#define SPW_TCH_PI_C_EARLYWD(value)           (SPW_TCH_PI_C_EARLYWD_Msk & (_UINT32_(value) << SPW_TCH_PI_C_EARLYWD_Pos)) /* Assigment of value for EARLYWD in the SPW_TCH_PI_C register */
#define SPW_TCH_PI_C_Msk                      _UINT32_(0x0000001F)                                 /* (SPW_TCH_PI_C) Register Mask  */


/* -------- SPW_TCH_IM_S : (SPW Offset: 0xE98) ( /W 32) SpW Tch Interrupt Set Mask -------- */
#define SPW_TCH_IM_S_TCEVENT_Pos              _UINT32_(0)                                          /* (SPW_TCH_IM_S) TcEvent Position */
#define SPW_TCH_IM_S_TCEVENT_Msk              (_UINT32_(0x1) << SPW_TCH_IM_S_TCEVENT_Pos)          /* (SPW_TCH_IM_S) TcEvent Mask */
#define SPW_TCH_IM_S_TCEVENT(value)           (SPW_TCH_IM_S_TCEVENT_Msk & (_UINT32_(value) << SPW_TCH_IM_S_TCEVENT_Pos)) /* Assigment of value for TCEVENT in the SPW_TCH_IM_S register */
#define SPW_TCH_IM_S_TIMECODE_Pos             _UINT32_(1)                                          /* (SPW_TCH_IM_S) Time Code Position */
#define SPW_TCH_IM_S_TIMECODE_Msk             (_UINT32_(0x1) << SPW_TCH_IM_S_TIMECODE_Pos)         /* (SPW_TCH_IM_S) Time Code Mask */
#define SPW_TCH_IM_S_TIMECODE(value)          (SPW_TCH_IM_S_TIMECODE_Msk & (_UINT32_(value) << SPW_TCH_IM_S_TIMECODE_Pos)) /* Assigment of value for TIMECODE in the SPW_TCH_IM_S register */
#define SPW_TCH_IM_S_ANYTIMECODE_Pos          _UINT32_(2)                                          /* (SPW_TCH_IM_S) Any Time Code Position */
#define SPW_TCH_IM_S_ANYTIMECODE_Msk          (_UINT32_(0x1) << SPW_TCH_IM_S_ANYTIMECODE_Pos)      /* (SPW_TCH_IM_S) Any Time Code Mask */
#define SPW_TCH_IM_S_ANYTIMECODE(value)       (SPW_TCH_IM_S_ANYTIMECODE_Msk & (_UINT32_(value) << SPW_TCH_IM_S_ANYTIMECODE_Pos)) /* Assigment of value for ANYTIMECODE in the SPW_TCH_IM_S register */
#define SPW_TCH_IM_S_LATEWD_Pos               _UINT32_(3)                                          /* (SPW_TCH_IM_S) Late Watchdog Position */
#define SPW_TCH_IM_S_LATEWD_Msk               (_UINT32_(0x1) << SPW_TCH_IM_S_LATEWD_Pos)           /* (SPW_TCH_IM_S) Late Watchdog Mask */
#define SPW_TCH_IM_S_LATEWD(value)            (SPW_TCH_IM_S_LATEWD_Msk & (_UINT32_(value) << SPW_TCH_IM_S_LATEWD_Pos)) /* Assigment of value for LATEWD in the SPW_TCH_IM_S register */
#define SPW_TCH_IM_S_EARLYWD_Pos              _UINT32_(4)                                          /* (SPW_TCH_IM_S) Early Watchdog Position */
#define SPW_TCH_IM_S_EARLYWD_Msk              (_UINT32_(0x1) << SPW_TCH_IM_S_EARLYWD_Pos)          /* (SPW_TCH_IM_S) Early Watchdog Mask */
#define SPW_TCH_IM_S_EARLYWD(value)           (SPW_TCH_IM_S_EARLYWD_Msk & (_UINT32_(value) << SPW_TCH_IM_S_EARLYWD_Pos)) /* Assigment of value for EARLYWD in the SPW_TCH_IM_S register */
#define SPW_TCH_IM_S_Msk                      _UINT32_(0x0000001F)                                 /* (SPW_TCH_IM_S) Register Mask  */


/* -------- SPW_TCH_IM_C : (SPW Offset: 0xE9C) ( /W 32) SpW Tch Interrupt Clear Mask -------- */
#define SPW_TCH_IM_C_TCEVENT_Pos              _UINT32_(0)                                          /* (SPW_TCH_IM_C) TcEvent Position */
#define SPW_TCH_IM_C_TCEVENT_Msk              (_UINT32_(0x1) << SPW_TCH_IM_C_TCEVENT_Pos)          /* (SPW_TCH_IM_C) TcEvent Mask */
#define SPW_TCH_IM_C_TCEVENT(value)           (SPW_TCH_IM_C_TCEVENT_Msk & (_UINT32_(value) << SPW_TCH_IM_C_TCEVENT_Pos)) /* Assigment of value for TCEVENT in the SPW_TCH_IM_C register */
#define SPW_TCH_IM_C_TIMECODE_Pos             _UINT32_(1)                                          /* (SPW_TCH_IM_C) Time Code Position */
#define SPW_TCH_IM_C_TIMECODE_Msk             (_UINT32_(0x1) << SPW_TCH_IM_C_TIMECODE_Pos)         /* (SPW_TCH_IM_C) Time Code Mask */
#define SPW_TCH_IM_C_TIMECODE(value)          (SPW_TCH_IM_C_TIMECODE_Msk & (_UINT32_(value) << SPW_TCH_IM_C_TIMECODE_Pos)) /* Assigment of value for TIMECODE in the SPW_TCH_IM_C register */
#define SPW_TCH_IM_C_ANYTIMECODE_Pos          _UINT32_(2)                                          /* (SPW_TCH_IM_C) Any Time Code Position */
#define SPW_TCH_IM_C_ANYTIMECODE_Msk          (_UINT32_(0x1) << SPW_TCH_IM_C_ANYTIMECODE_Pos)      /* (SPW_TCH_IM_C) Any Time Code Mask */
#define SPW_TCH_IM_C_ANYTIMECODE(value)       (SPW_TCH_IM_C_ANYTIMECODE_Msk & (_UINT32_(value) << SPW_TCH_IM_C_ANYTIMECODE_Pos)) /* Assigment of value for ANYTIMECODE in the SPW_TCH_IM_C register */
#define SPW_TCH_IM_C_LATEWD_Pos               _UINT32_(3)                                          /* (SPW_TCH_IM_C) Late Watchdog Position */
#define SPW_TCH_IM_C_LATEWD_Msk               (_UINT32_(0x1) << SPW_TCH_IM_C_LATEWD_Pos)           /* (SPW_TCH_IM_C) Late Watchdog Mask */
#define SPW_TCH_IM_C_LATEWD(value)            (SPW_TCH_IM_C_LATEWD_Msk & (_UINT32_(value) << SPW_TCH_IM_C_LATEWD_Pos)) /* Assigment of value for LATEWD in the SPW_TCH_IM_C register */
#define SPW_TCH_IM_C_EARLYWD_Pos              _UINT32_(4)                                          /* (SPW_TCH_IM_C) Early Watchdog Position */
#define SPW_TCH_IM_C_EARLYWD_Msk              (_UINT32_(0x1) << SPW_TCH_IM_C_EARLYWD_Pos)          /* (SPW_TCH_IM_C) Early Watchdog Mask */
#define SPW_TCH_IM_C_EARLYWD(value)           (SPW_TCH_IM_C_EARLYWD_Msk & (_UINT32_(value) << SPW_TCH_IM_C_EARLYWD_Pos)) /* Assigment of value for EARLYWD in the SPW_TCH_IM_C register */
#define SPW_TCH_IM_C_Msk                      _UINT32_(0x0000001F)                                 /* (SPW_TCH_IM_C) Register Mask  */


/* -------- SPW_TCH_CFGLISTEN : (SPW Offset: 0xEA0) (R/W 32) SpW Tch Config Listener -------- */
#define SPW_TCH_CFGLISTEN_L1_Pos              _UINT32_(0)                                          /* (SPW_TCH_CFGLISTEN) Listen  link 1 Position */
#define SPW_TCH_CFGLISTEN_L1_Msk              (_UINT32_(0x1) << SPW_TCH_CFGLISTEN_L1_Pos)          /* (SPW_TCH_CFGLISTEN) Listen  link 1 Mask */
#define SPW_TCH_CFGLISTEN_L1(value)           (SPW_TCH_CFGLISTEN_L1_Msk & (_UINT32_(value) << SPW_TCH_CFGLISTEN_L1_Pos)) /* Assigment of value for L1 in the SPW_TCH_CFGLISTEN register */
#define SPW_TCH_CFGLISTEN_L2_Pos              _UINT32_(1)                                          /* (SPW_TCH_CFGLISTEN) Listen link 2 Position */
#define SPW_TCH_CFGLISTEN_L2_Msk              (_UINT32_(0x1) << SPW_TCH_CFGLISTEN_L2_Pos)          /* (SPW_TCH_CFGLISTEN) Listen link 2 Mask */
#define SPW_TCH_CFGLISTEN_L2(value)           (SPW_TCH_CFGLISTEN_L2_Msk & (_UINT32_(value) << SPW_TCH_CFGLISTEN_L2_Pos)) /* Assigment of value for L2 in the SPW_TCH_CFGLISTEN register */
#define SPW_TCH_CFGLISTEN_Msk                 _UINT32_(0x00000003)                                 /* (SPW_TCH_CFGLISTEN) Register Mask  */

#define SPW_TCH_CFGLISTEN_L_Pos               _UINT32_(0)                                          /* (SPW_TCH_CFGLISTEN Position) Listen link 2 */
#define SPW_TCH_CFGLISTEN_L_Msk               (_UINT32_(0x3) << SPW_TCH_CFGLISTEN_L_Pos)           /* (SPW_TCH_CFGLISTEN Mask) L */
#define SPW_TCH_CFGLISTEN_L(value)            (SPW_TCH_CFGLISTEN_L_Msk & (_UINT32_(value) << SPW_TCH_CFGLISTEN_L_Pos)) 

/* -------- SPW_TCH_CFGSEND : (SPW Offset: 0xEA4) (R/W 32) SpW Tch Config Sender -------- */
#define SPW_TCH_CFGSEND_S1_Pos                _UINT32_(0)                                          /* (SPW_TCH_CFGSEND) Send link 1 Position */
#define SPW_TCH_CFGSEND_S1_Msk                (_UINT32_(0x1) << SPW_TCH_CFGSEND_S1_Pos)            /* (SPW_TCH_CFGSEND) Send link 1 Mask */
#define SPW_TCH_CFGSEND_S1(value)             (SPW_TCH_CFGSEND_S1_Msk & (_UINT32_(value) << SPW_TCH_CFGSEND_S1_Pos)) /* Assigment of value for S1 in the SPW_TCH_CFGSEND register */
#define SPW_TCH_CFGSEND_S2_Pos                _UINT32_(1)                                          /* (SPW_TCH_CFGSEND) Send link 2 Position */
#define SPW_TCH_CFGSEND_S2_Msk                (_UINT32_(0x1) << SPW_TCH_CFGSEND_S2_Pos)            /* (SPW_TCH_CFGSEND) Send link 2 Mask */
#define SPW_TCH_CFGSEND_S2(value)             (SPW_TCH_CFGSEND_S2_Msk & (_UINT32_(value) << SPW_TCH_CFGSEND_S2_Pos)) /* Assigment of value for S2 in the SPW_TCH_CFGSEND register */
#define SPW_TCH_CFGSEND_Msk                   _UINT32_(0x00000003)                                 /* (SPW_TCH_CFGSEND) Register Mask  */

#define SPW_TCH_CFGSEND_S_Pos                 _UINT32_(0)                                          /* (SPW_TCH_CFGSEND Position) Send link 2 */
#define SPW_TCH_CFGSEND_S_Msk                 (_UINT32_(0x3) << SPW_TCH_CFGSEND_S_Pos)             /* (SPW_TCH_CFGSEND Mask) S */
#define SPW_TCH_CFGSEND_S(value)              (SPW_TCH_CFGSEND_S_Msk & (_UINT32_(value) << SPW_TCH_CFGSEND_S_Pos)) 

/* -------- SPW_TCH_CFG : (SPW Offset: 0xEA8) (R/W 32) SpW Tch Config -------- */
#define SPW_TCH_CFG_EVENT_Pos                 _UINT32_(0)                                          /* (SPW_TCH_CFG) Event Position */
#define SPW_TCH_CFG_EVENT_Msk                 (_UINT32_(0x3F) << SPW_TCH_CFG_EVENT_Pos)            /* (SPW_TCH_CFG) Event Mask */
#define SPW_TCH_CFG_EVENT(value)              (SPW_TCH_CFG_EVENT_Msk & (_UINT32_(value) << SPW_TCH_CFG_EVENT_Pos)) /* Assigment of value for EVENT in the SPW_TCH_CFG register */
#define SPW_TCH_CFG_Msk                       _UINT32_(0x0000003F)                                 /* (SPW_TCH_CFG) Register Mask  */


/* -------- SPW_TCH_CFGRESTART : (SPW Offset: 0xEAC) (R/W 32) SpW Tch Config Restart -------- */
#define SPW_TCH_CFGRESTART_VALUE_Pos          _UINT32_(0)                                          /* (SPW_TCH_CFGRESTART) Value Position */
#define SPW_TCH_CFGRESTART_VALUE_Msk          (_UINT32_(0x3F) << SPW_TCH_CFGRESTART_VALUE_Pos)     /* (SPW_TCH_CFGRESTART) Value Mask */
#define SPW_TCH_CFGRESTART_VALUE(value)       (SPW_TCH_CFGRESTART_VALUE_Msk & (_UINT32_(value) << SPW_TCH_CFGRESTART_VALUE_Pos)) /* Assigment of value for VALUE in the SPW_TCH_CFGRESTART register */
#define SPW_TCH_CFGRESTART_EVENT_Pos          _UINT32_(8)                                          /* (SPW_TCH_CFGRESTART) Event Position */
#define SPW_TCH_CFGRESTART_EVENT_Msk          (_UINT32_(0x3F) << SPW_TCH_CFGRESTART_EVENT_Pos)     /* (SPW_TCH_CFGRESTART) Event Mask */
#define SPW_TCH_CFGRESTART_EVENT(value)       (SPW_TCH_CFGRESTART_EVENT_Msk & (_UINT32_(value) << SPW_TCH_CFGRESTART_EVENT_Pos)) /* Assigment of value for EVENT in the SPW_TCH_CFGRESTART register */
#define SPW_TCH_CFGRESTART_PPS_Pos            _UINT32_(14)                                         /* (SPW_TCH_CFGRESTART) Pps Position */
#define SPW_TCH_CFGRESTART_PPS_Msk            (_UINT32_(0x1) << SPW_TCH_CFGRESTART_PPS_Pos)        /* (SPW_TCH_CFGRESTART) Pps Mask */
#define SPW_TCH_CFGRESTART_PPS(value)         (SPW_TCH_CFGRESTART_PPS_Msk & (_UINT32_(value) << SPW_TCH_CFGRESTART_PPS_Pos)) /* Assigment of value for PPS in the SPW_TCH_CFGRESTART register */
#define SPW_TCH_CFGRESTART_ONESHOT_Pos        _UINT32_(15)                                         /* (SPW_TCH_CFGRESTART) One Shot Position */
#define SPW_TCH_CFGRESTART_ONESHOT_Msk        (_UINT32_(0x1) << SPW_TCH_CFGRESTART_ONESHOT_Pos)    /* (SPW_TCH_CFGRESTART) One Shot Mask */
#define SPW_TCH_CFGRESTART_ONESHOT(value)     (SPW_TCH_CFGRESTART_ONESHOT_Msk & (_UINT32_(value) << SPW_TCH_CFGRESTART_ONESHOT_Pos)) /* Assigment of value for ONESHOT in the SPW_TCH_CFGRESTART register */
#define SPW_TCH_CFGRESTART_Msk                _UINT32_(0x0000FF3F)                                 /* (SPW_TCH_CFGRESTART) Register Mask  */


/* -------- SPW_TCH_CFGTCEVENT : (SPW Offset: 0xEB0) (R/W 32) SpW Tch Config Tc Event -------- */
#define SPW_TCH_CFGTCEVENT_VALUE_Pos          _UINT32_(0)                                          /* (SPW_TCH_CFGTCEVENT) Value Position */
#define SPW_TCH_CFGTCEVENT_VALUE_Msk          (_UINT32_(0x3F) << SPW_TCH_CFGTCEVENT_VALUE_Pos)     /* (SPW_TCH_CFGTCEVENT) Value Mask */
#define SPW_TCH_CFGTCEVENT_VALUE(value)       (SPW_TCH_CFGTCEVENT_VALUE_Msk & (_UINT32_(value) << SPW_TCH_CFGTCEVENT_VALUE_Pos)) /* Assigment of value for VALUE in the SPW_TCH_CFGTCEVENT register */
#define SPW_TCH_CFGTCEVENT_MASK_Pos           _UINT32_(8)                                          /* (SPW_TCH_CFGTCEVENT) Mask Position */
#define SPW_TCH_CFGTCEVENT_MASK_Msk           (_UINT32_(0x3F) << SPW_TCH_CFGTCEVENT_MASK_Pos)      /* (SPW_TCH_CFGTCEVENT) Mask Mask */
#define SPW_TCH_CFGTCEVENT_MASK(value)        (SPW_TCH_CFGTCEVENT_MASK_Msk & (_UINT32_(value) << SPW_TCH_CFGTCEVENT_MASK_Pos)) /* Assigment of value for MASK in the SPW_TCH_CFGTCEVENT register */
#define SPW_TCH_CFGTCEVENT_Msk                _UINT32_(0x00003F3F)                                 /* (SPW_TCH_CFGTCEVENT) Register Mask  */


/* -------- SPW_TCH_CFGWD : (SPW Offset: 0xEB4) (R/W 32) SpW Tch Config Watchdog -------- */
#define SPW_TCH_CFGWD_LATE_Pos                _UINT32_(0)                                          /* (SPW_TCH_CFGWD) Late Position */
#define SPW_TCH_CFGWD_LATE_Msk                (_UINT32_(0xFFFF) << SPW_TCH_CFGWD_LATE_Pos)         /* (SPW_TCH_CFGWD) Late Mask */
#define SPW_TCH_CFGWD_LATE(value)             (SPW_TCH_CFGWD_LATE_Msk & (_UINT32_(value) << SPW_TCH_CFGWD_LATE_Pos)) /* Assigment of value for LATE in the SPW_TCH_CFGWD register */
#define SPW_TCH_CFGWD_EARLY_Pos               _UINT32_(16)                                         /* (SPW_TCH_CFGWD) Early Position */
#define SPW_TCH_CFGWD_EARLY_Msk               (_UINT32_(0xFFFF) << SPW_TCH_CFGWD_EARLY_Pos)        /* (SPW_TCH_CFGWD) Early Mask */
#define SPW_TCH_CFGWD_EARLY(value)            (SPW_TCH_CFGWD_EARLY_Msk & (_UINT32_(value) << SPW_TCH_CFGWD_EARLY_Pos)) /* Assigment of value for EARLY in the SPW_TCH_CFGWD register */
#define SPW_TCH_CFGWD_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (SPW_TCH_CFGWD) Register Mask  */


/* -------- SPW_TCH_LASTTIMECODE : (SPW Offset: 0xEB8) (R/W 32) SpW Tch Last Time Code -------- */
#define SPW_TCH_LASTTIMECODE_VALUE_Pos        _UINT32_(0)                                          /* (SPW_TCH_LASTTIMECODE) Value Position */
#define SPW_TCH_LASTTIMECODE_VALUE_Msk        (_UINT32_(0x3F) << SPW_TCH_LASTTIMECODE_VALUE_Pos)   /* (SPW_TCH_LASTTIMECODE) Value Mask */
#define SPW_TCH_LASTTIMECODE_VALUE(value)     (SPW_TCH_LASTTIMECODE_VALUE_Msk & (_UINT32_(value) << SPW_TCH_LASTTIMECODE_VALUE_Pos)) /* Assigment of value for VALUE in the SPW_TCH_LASTTIMECODE register */
#define SPW_TCH_LASTTIMECODE_SEND_Pos         _UINT32_(8)                                          /* (SPW_TCH_LASTTIMECODE) Send Now Position */
#define SPW_TCH_LASTTIMECODE_SEND_Msk         (_UINT32_(0x1) << SPW_TCH_LASTTIMECODE_SEND_Pos)     /* (SPW_TCH_LASTTIMECODE) Send Now Mask */
#define SPW_TCH_LASTTIMECODE_SEND(value)      (SPW_TCH_LASTTIMECODE_SEND_Msk & (_UINT32_(value) << SPW_TCH_LASTTIMECODE_SEND_Pos)) /* Assigment of value for SEND in the SPW_TCH_LASTTIMECODE register */
#define SPW_TCH_LASTTIMECODE_Msk              _UINT32_(0x0000013F)                                 /* (SPW_TCH_LASTTIMECODE) Register Mask  */


/* -------- SPW_TCH_SWRESET : (SPW Offset: 0xEBC) (R/W 32) SpW Tch Software Reset -------- */
#define SPW_TCH_SWRESET_PATTERN_Pos           _UINT32_(0)                                          /* (SPW_TCH_SWRESET) Pattern Position */
#define SPW_TCH_SWRESET_PATTERN_Msk           (_UINT32_(0xFFFFFFFF) << SPW_TCH_SWRESET_PATTERN_Pos) /* (SPW_TCH_SWRESET) Pattern Mask */
#define SPW_TCH_SWRESET_PATTERN(value)        (SPW_TCH_SWRESET_PATTERN_Msk & (_UINT32_(value) << SPW_TCH_SWRESET_PATTERN_Pos)) /* Assigment of value for PATTERN in the SPW_TCH_SWRESET register */
#define SPW_TCH_SWRESET_Msk                   _UINT32_(0xFFFFFFFF)                                 /* (SPW_TCH_SWRESET) Register Mask  */


/* -------- SPW_GROUP_IRQSTS1 : (SPW Offset: 0xF00) ( R/ 32) SpW Group Interrupt status 1 -------- */
#define SPW_GROUP_IRQSTS1_TX1_Pos             _UINT32_(7)                                          /* (SPW_GROUP_IRQSTS1) Tx 1 Position */
#define SPW_GROUP_IRQSTS1_TX1_Msk             (_UINT32_(0x1) << SPW_GROUP_IRQSTS1_TX1_Pos)         /* (SPW_GROUP_IRQSTS1) Tx 1 Mask */
#define SPW_GROUP_IRQSTS1_TX1(value)          (SPW_GROUP_IRQSTS1_TX1_Msk & (_UINT32_(value) << SPW_GROUP_IRQSTS1_TX1_Pos)) /* Assigment of value for TX1 in the SPW_GROUP_IRQSTS1 register */
#define SPW_GROUP_IRQSTS1_RX1_Pos             _UINT32_(15)                                         /* (SPW_GROUP_IRQSTS1) Rx 1 Position */
#define SPW_GROUP_IRQSTS1_RX1_Msk             (_UINT32_(0x1) << SPW_GROUP_IRQSTS1_RX1_Pos)         /* (SPW_GROUP_IRQSTS1) Rx 1 Mask */
#define SPW_GROUP_IRQSTS1_RX1(value)          (SPW_GROUP_IRQSTS1_RX1_Msk & (_UINT32_(value) << SPW_GROUP_IRQSTS1_RX1_Pos)) /* Assigment of value for RX1 in the SPW_GROUP_IRQSTS1 register */
#define SPW_GROUP_IRQSTS1_TCH_Pos             _UINT32_(16)                                         /* (SPW_GROUP_IRQSTS1) Time Code Handler Position */
#define SPW_GROUP_IRQSTS1_TCH_Msk             (_UINT32_(0x1) << SPW_GROUP_IRQSTS1_TCH_Pos)         /* (SPW_GROUP_IRQSTS1) Time Code Handler Mask */
#define SPW_GROUP_IRQSTS1_TCH(value)          (SPW_GROUP_IRQSTS1_TCH_Msk & (_UINT32_(value) << SPW_GROUP_IRQSTS1_TCH_Pos)) /* Assigment of value for TCH in the SPW_GROUP_IRQSTS1 register */
#define SPW_GROUP_IRQSTS1_Msk                 _UINT32_(0x00018080)                                 /* (SPW_GROUP_IRQSTS1) Register Mask  */

#define SPW_GROUP_IRQSTS1_TX_Pos              _UINT32_(7)                                          /* (SPW_GROUP_IRQSTS1 Position) Tx x */
#define SPW_GROUP_IRQSTS1_TX_Msk              (_UINT32_(0x1) << SPW_GROUP_IRQSTS1_TX_Pos)          /* (SPW_GROUP_IRQSTS1 Mask) TX */
#define SPW_GROUP_IRQSTS1_TX(value)           (SPW_GROUP_IRQSTS1_TX_Msk & (_UINT32_(value) << SPW_GROUP_IRQSTS1_TX_Pos)) 
#define SPW_GROUP_IRQSTS1_RX_Pos              _UINT32_(15)                                         /* (SPW_GROUP_IRQSTS1 Position) Rx x */
#define SPW_GROUP_IRQSTS1_RX_Msk              (_UINT32_(0x1) << SPW_GROUP_IRQSTS1_RX_Pos)          /* (SPW_GROUP_IRQSTS1 Mask) RX */
#define SPW_GROUP_IRQSTS1_RX(value)           (SPW_GROUP_IRQSTS1_RX_Msk & (_UINT32_(value) << SPW_GROUP_IRQSTS1_RX_Pos)) 

/* -------- SPW_GROUP_IRQSTS2 : (SPW Offset: 0xF04) ( R/ 32) SpW Group Interrupt status 2 -------- */
#define SPW_GROUP_IRQSTS2_Link2_Pos           _UINT32_(18)                                         /* (SPW_GROUP_IRQSTS2) Link 2 Position */
#define SPW_GROUP_IRQSTS2_Link2_Msk           (_UINT32_(0x1) << SPW_GROUP_IRQSTS2_Link2_Pos)       /* (SPW_GROUP_IRQSTS2) Link 2 Mask */
#define SPW_GROUP_IRQSTS2_Link2(value)        (SPW_GROUP_IRQSTS2_Link2_Msk & (_UINT32_(value) << SPW_GROUP_IRQSTS2_Link2_Pos)) /* Assigment of value for Link2 in the SPW_GROUP_IRQSTS2 register */
#define SPW_GROUP_IRQSTS2_Dia2_Pos            _UINT32_(19)                                         /* (SPW_GROUP_IRQSTS2) Distributed Interrupt Acknowledge, Link 2 Position */
#define SPW_GROUP_IRQSTS2_Dia2_Msk            (_UINT32_(0x1) << SPW_GROUP_IRQSTS2_Dia2_Pos)        /* (SPW_GROUP_IRQSTS2) Distributed Interrupt Acknowledge, Link 2 Mask */
#define SPW_GROUP_IRQSTS2_Dia2(value)         (SPW_GROUP_IRQSTS2_Dia2_Msk & (_UINT32_(value) << SPW_GROUP_IRQSTS2_Dia2_Pos)) /* Assigment of value for Dia2 in the SPW_GROUP_IRQSTS2 register */
#define SPW_GROUP_IRQSTS2_Di2_Pos             _UINT32_(20)                                         /* (SPW_GROUP_IRQSTS2) Distributed Interrupt 2 Position */
#define SPW_GROUP_IRQSTS2_Di2_Msk             (_UINT32_(0x1) << SPW_GROUP_IRQSTS2_Di2_Pos)         /* (SPW_GROUP_IRQSTS2) Distributed Interrupt 2 Mask */
#define SPW_GROUP_IRQSTS2_Di2(value)          (SPW_GROUP_IRQSTS2_Di2_Msk & (_UINT32_(value) << SPW_GROUP_IRQSTS2_Di2_Pos)) /* Assigment of value for Di2 in the SPW_GROUP_IRQSTS2 register */
#define SPW_GROUP_IRQSTS2_Link1_Pos           _UINT32_(21)                                         /* (SPW_GROUP_IRQSTS2) Link 1 Position */
#define SPW_GROUP_IRQSTS2_Link1_Msk           (_UINT32_(0x1) << SPW_GROUP_IRQSTS2_Link1_Pos)       /* (SPW_GROUP_IRQSTS2) Link 1 Mask */
#define SPW_GROUP_IRQSTS2_Link1(value)        (SPW_GROUP_IRQSTS2_Link1_Msk & (_UINT32_(value) << SPW_GROUP_IRQSTS2_Link1_Pos)) /* Assigment of value for Link1 in the SPW_GROUP_IRQSTS2 register */
#define SPW_GROUP_IRQSTS2_Dia1_Pos            _UINT32_(22)                                         /* (SPW_GROUP_IRQSTS2) Distributed Interrupt Acknowledge, Link 1 Position */
#define SPW_GROUP_IRQSTS2_Dia1_Msk            (_UINT32_(0x1) << SPW_GROUP_IRQSTS2_Dia1_Pos)        /* (SPW_GROUP_IRQSTS2) Distributed Interrupt Acknowledge, Link 1 Mask */
#define SPW_GROUP_IRQSTS2_Dia1(value)         (SPW_GROUP_IRQSTS2_Dia1_Msk & (_UINT32_(value) << SPW_GROUP_IRQSTS2_Dia1_Pos)) /* Assigment of value for Dia1 in the SPW_GROUP_IRQSTS2 register */
#define SPW_GROUP_IRQSTS2_Di1_Pos             _UINT32_(23)                                         /* (SPW_GROUP_IRQSTS2) Distributed Interrupt 1 Position */
#define SPW_GROUP_IRQSTS2_Di1_Msk             (_UINT32_(0x1) << SPW_GROUP_IRQSTS2_Di1_Pos)         /* (SPW_GROUP_IRQSTS2) Distributed Interrupt 1 Mask */
#define SPW_GROUP_IRQSTS2_Di1(value)          (SPW_GROUP_IRQSTS2_Di1_Msk & (_UINT32_(value) << SPW_GROUP_IRQSTS2_Di1_Pos)) /* Assigment of value for Di1 in the SPW_GROUP_IRQSTS2 register */
#define SPW_GROUP_IRQSTS2_Msk                 _UINT32_(0x00FC0000)                                 /* (SPW_GROUP_IRQSTS2) Register Mask  */


/* -------- SPW_GROUP_EDACSTS : (SPW Offset: 0xF0C) ( R/ 32) SpW Group Interrupt status -------- */
#define SPW_GROUP_EDACSTS_CORR_Pos            _UINT32_(0)                                          /* (SPW_GROUP_EDACSTS) Correction Count Position */
#define SPW_GROUP_EDACSTS_CORR_Msk            (_UINT32_(0xFF) << SPW_GROUP_EDACSTS_CORR_Pos)       /* (SPW_GROUP_EDACSTS) Correction Count Mask */
#define SPW_GROUP_EDACSTS_CORR(value)         (SPW_GROUP_EDACSTS_CORR_Msk & (_UINT32_(value) << SPW_GROUP_EDACSTS_CORR_Pos)) /* Assigment of value for CORR in the SPW_GROUP_EDACSTS register */
#define SPW_GROUP_EDACSTS_UNCORR_Pos          _UINT32_(8)                                          /* (SPW_GROUP_EDACSTS) Uncorrectable Error Position */
#define SPW_GROUP_EDACSTS_UNCORR_Msk          (_UINT32_(0xFF) << SPW_GROUP_EDACSTS_UNCORR_Pos)     /* (SPW_GROUP_EDACSTS) Uncorrectable Error Mask */
#define SPW_GROUP_EDACSTS_UNCORR(value)       (SPW_GROUP_EDACSTS_UNCORR_Msk & (_UINT32_(value) << SPW_GROUP_EDACSTS_UNCORR_Pos)) /* Assigment of value for UNCORR in the SPW_GROUP_EDACSTS register */
#define SPW_GROUP_EDACSTS_Msk                 _UINT32_(0x0000FFFF)                                 /* (SPW_GROUP_EDACSTS) Register Mask  */


/** \brief SPW register offsets definitions */
#define SPW_ROUTER_STS_REG_OFST        _UINT32_(0x00)      /* (SPW_ROUTER_STS) SpW Router Status Offset */
#define SPW_ROUTER_CFG_REG_OFST        _UINT32_(0x04)      /* (SPW_ROUTER_CFG) SpW Router Config Offset */
#define SPW_ROUTER_TIMEOUT_REG_OFST    _UINT32_(0x08)      /* (SPW_ROUTER_TIMEOUT) SpW Router Timeout Offset */
#define SPW_ROUTER_TABLE_REG_OFST      _UINT32_(0x80)      /* (SPW_ROUTER_TABLE) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE0_REG_OFST     _UINT32_(0x80)      /* (SPW_ROUTER_TABLE0) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE1_REG_OFST     _UINT32_(0x84)      /* (SPW_ROUTER_TABLE1) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE2_REG_OFST     _UINT32_(0x88)      /* (SPW_ROUTER_TABLE2) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE3_REG_OFST     _UINT32_(0x8C)      /* (SPW_ROUTER_TABLE3) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE4_REG_OFST     _UINT32_(0x90)      /* (SPW_ROUTER_TABLE4) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE5_REG_OFST     _UINT32_(0x94)      /* (SPW_ROUTER_TABLE5) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE6_REG_OFST     _UINT32_(0x98)      /* (SPW_ROUTER_TABLE6) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE7_REG_OFST     _UINT32_(0x9C)      /* (SPW_ROUTER_TABLE7) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE8_REG_OFST     _UINT32_(0xA0)      /* (SPW_ROUTER_TABLE8) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE9_REG_OFST     _UINT32_(0xA4)      /* (SPW_ROUTER_TABLE9) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE10_REG_OFST    _UINT32_(0xA8)      /* (SPW_ROUTER_TABLE10) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE11_REG_OFST    _UINT32_(0xAC)      /* (SPW_ROUTER_TABLE11) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE12_REG_OFST    _UINT32_(0xB0)      /* (SPW_ROUTER_TABLE12) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE13_REG_OFST    _UINT32_(0xB4)      /* (SPW_ROUTER_TABLE13) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE14_REG_OFST    _UINT32_(0xB8)      /* (SPW_ROUTER_TABLE14) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE15_REG_OFST    _UINT32_(0xBC)      /* (SPW_ROUTER_TABLE15) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE16_REG_OFST    _UINT32_(0xC0)      /* (SPW_ROUTER_TABLE16) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE17_REG_OFST    _UINT32_(0xC4)      /* (SPW_ROUTER_TABLE17) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE18_REG_OFST    _UINT32_(0xC8)      /* (SPW_ROUTER_TABLE18) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE19_REG_OFST    _UINT32_(0xCC)      /* (SPW_ROUTER_TABLE19) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE20_REG_OFST    _UINT32_(0xD0)      /* (SPW_ROUTER_TABLE20) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE21_REG_OFST    _UINT32_(0xD4)      /* (SPW_ROUTER_TABLE21) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE22_REG_OFST    _UINT32_(0xD8)      /* (SPW_ROUTER_TABLE22) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE23_REG_OFST    _UINT32_(0xDC)      /* (SPW_ROUTER_TABLE23) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE24_REG_OFST    _UINT32_(0xE0)      /* (SPW_ROUTER_TABLE24) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE25_REG_OFST    _UINT32_(0xE4)      /* (SPW_ROUTER_TABLE25) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE26_REG_OFST    _UINT32_(0xE8)      /* (SPW_ROUTER_TABLE26) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE27_REG_OFST    _UINT32_(0xEC)      /* (SPW_ROUTER_TABLE27) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE28_REG_OFST    _UINT32_(0xF0)      /* (SPW_ROUTER_TABLE28) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE29_REG_OFST    _UINT32_(0xF4)      /* (SPW_ROUTER_TABLE29) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE30_REG_OFST    _UINT32_(0xF8)      /* (SPW_ROUTER_TABLE30) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE31_REG_OFST    _UINT32_(0xFC)      /* (SPW_ROUTER_TABLE31) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE32_REG_OFST    _UINT32_(0x100)     /* (SPW_ROUTER_TABLE32) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE33_REG_OFST    _UINT32_(0x104)     /* (SPW_ROUTER_TABLE33) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE34_REG_OFST    _UINT32_(0x108)     /* (SPW_ROUTER_TABLE34) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE35_REG_OFST    _UINT32_(0x10C)     /* (SPW_ROUTER_TABLE35) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE36_REG_OFST    _UINT32_(0x110)     /* (SPW_ROUTER_TABLE36) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE37_REG_OFST    _UINT32_(0x114)     /* (SPW_ROUTER_TABLE37) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE38_REG_OFST    _UINT32_(0x118)     /* (SPW_ROUTER_TABLE38) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE39_REG_OFST    _UINT32_(0x11C)     /* (SPW_ROUTER_TABLE39) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE40_REG_OFST    _UINT32_(0x120)     /* (SPW_ROUTER_TABLE40) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE41_REG_OFST    _UINT32_(0x124)     /* (SPW_ROUTER_TABLE41) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE42_REG_OFST    _UINT32_(0x128)     /* (SPW_ROUTER_TABLE42) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE43_REG_OFST    _UINT32_(0x12C)     /* (SPW_ROUTER_TABLE43) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE44_REG_OFST    _UINT32_(0x130)     /* (SPW_ROUTER_TABLE44) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE45_REG_OFST    _UINT32_(0x134)     /* (SPW_ROUTER_TABLE45) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE46_REG_OFST    _UINT32_(0x138)     /* (SPW_ROUTER_TABLE46) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE47_REG_OFST    _UINT32_(0x13C)     /* (SPW_ROUTER_TABLE47) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE48_REG_OFST    _UINT32_(0x140)     /* (SPW_ROUTER_TABLE48) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE49_REG_OFST    _UINT32_(0x144)     /* (SPW_ROUTER_TABLE49) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE50_REG_OFST    _UINT32_(0x148)     /* (SPW_ROUTER_TABLE50) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE51_REG_OFST    _UINT32_(0x14C)     /* (SPW_ROUTER_TABLE51) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE52_REG_OFST    _UINT32_(0x150)     /* (SPW_ROUTER_TABLE52) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE53_REG_OFST    _UINT32_(0x154)     /* (SPW_ROUTER_TABLE53) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE54_REG_OFST    _UINT32_(0x158)     /* (SPW_ROUTER_TABLE54) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE55_REG_OFST    _UINT32_(0x15C)     /* (SPW_ROUTER_TABLE55) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE56_REG_OFST    _UINT32_(0x160)     /* (SPW_ROUTER_TABLE56) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE57_REG_OFST    _UINT32_(0x164)     /* (SPW_ROUTER_TABLE57) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE58_REG_OFST    _UINT32_(0x168)     /* (SPW_ROUTER_TABLE58) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE59_REG_OFST    _UINT32_(0x16C)     /* (SPW_ROUTER_TABLE59) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE60_REG_OFST    _UINT32_(0x170)     /* (SPW_ROUTER_TABLE60) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE61_REG_OFST    _UINT32_(0x174)     /* (SPW_ROUTER_TABLE61) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE62_REG_OFST    _UINT32_(0x178)     /* (SPW_ROUTER_TABLE62) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE63_REG_OFST    _UINT32_(0x17C)     /* (SPW_ROUTER_TABLE63) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE64_REG_OFST    _UINT32_(0x180)     /* (SPW_ROUTER_TABLE64) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE65_REG_OFST    _UINT32_(0x184)     /* (SPW_ROUTER_TABLE65) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE66_REG_OFST    _UINT32_(0x188)     /* (SPW_ROUTER_TABLE66) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE67_REG_OFST    _UINT32_(0x18C)     /* (SPW_ROUTER_TABLE67) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE68_REG_OFST    _UINT32_(0x190)     /* (SPW_ROUTER_TABLE68) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE69_REG_OFST    _UINT32_(0x194)     /* (SPW_ROUTER_TABLE69) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE70_REG_OFST    _UINT32_(0x198)     /* (SPW_ROUTER_TABLE70) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE71_REG_OFST    _UINT32_(0x19C)     /* (SPW_ROUTER_TABLE71) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE72_REG_OFST    _UINT32_(0x1A0)     /* (SPW_ROUTER_TABLE72) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE73_REG_OFST    _UINT32_(0x1A4)     /* (SPW_ROUTER_TABLE73) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE74_REG_OFST    _UINT32_(0x1A8)     /* (SPW_ROUTER_TABLE74) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE75_REG_OFST    _UINT32_(0x1AC)     /* (SPW_ROUTER_TABLE75) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE76_REG_OFST    _UINT32_(0x1B0)     /* (SPW_ROUTER_TABLE76) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE77_REG_OFST    _UINT32_(0x1B4)     /* (SPW_ROUTER_TABLE77) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE78_REG_OFST    _UINT32_(0x1B8)     /* (SPW_ROUTER_TABLE78) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE79_REG_OFST    _UINT32_(0x1BC)     /* (SPW_ROUTER_TABLE79) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE80_REG_OFST    _UINT32_(0x1C0)     /* (SPW_ROUTER_TABLE80) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE81_REG_OFST    _UINT32_(0x1C4)     /* (SPW_ROUTER_TABLE81) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE82_REG_OFST    _UINT32_(0x1C8)     /* (SPW_ROUTER_TABLE82) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE83_REG_OFST    _UINT32_(0x1CC)     /* (SPW_ROUTER_TABLE83) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE84_REG_OFST    _UINT32_(0x1D0)     /* (SPW_ROUTER_TABLE84) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE85_REG_OFST    _UINT32_(0x1D4)     /* (SPW_ROUTER_TABLE85) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE86_REG_OFST    _UINT32_(0x1D8)     /* (SPW_ROUTER_TABLE86) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE87_REG_OFST    _UINT32_(0x1DC)     /* (SPW_ROUTER_TABLE87) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE88_REG_OFST    _UINT32_(0x1E0)     /* (SPW_ROUTER_TABLE88) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE89_REG_OFST    _UINT32_(0x1E4)     /* (SPW_ROUTER_TABLE89) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE90_REG_OFST    _UINT32_(0x1E8)     /* (SPW_ROUTER_TABLE90) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE91_REG_OFST    _UINT32_(0x1EC)     /* (SPW_ROUTER_TABLE91) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE92_REG_OFST    _UINT32_(0x1F0)     /* (SPW_ROUTER_TABLE92) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE93_REG_OFST    _UINT32_(0x1F4)     /* (SPW_ROUTER_TABLE93) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE94_REG_OFST    _UINT32_(0x1F8)     /* (SPW_ROUTER_TABLE94) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE95_REG_OFST    _UINT32_(0x1FC)     /* (SPW_ROUTER_TABLE95) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE96_REG_OFST    _UINT32_(0x200)     /* (SPW_ROUTER_TABLE96) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE97_REG_OFST    _UINT32_(0x204)     /* (SPW_ROUTER_TABLE97) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE98_REG_OFST    _UINT32_(0x208)     /* (SPW_ROUTER_TABLE98) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE99_REG_OFST    _UINT32_(0x20C)     /* (SPW_ROUTER_TABLE99) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE100_REG_OFST   _UINT32_(0x210)     /* (SPW_ROUTER_TABLE100) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE101_REG_OFST   _UINT32_(0x214)     /* (SPW_ROUTER_TABLE101) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE102_REG_OFST   _UINT32_(0x218)     /* (SPW_ROUTER_TABLE102) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE103_REG_OFST   _UINT32_(0x21C)     /* (SPW_ROUTER_TABLE103) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE104_REG_OFST   _UINT32_(0x220)     /* (SPW_ROUTER_TABLE104) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE105_REG_OFST   _UINT32_(0x224)     /* (SPW_ROUTER_TABLE105) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE106_REG_OFST   _UINT32_(0x228)     /* (SPW_ROUTER_TABLE106) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE107_REG_OFST   _UINT32_(0x22C)     /* (SPW_ROUTER_TABLE107) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE108_REG_OFST   _UINT32_(0x230)     /* (SPW_ROUTER_TABLE108) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE109_REG_OFST   _UINT32_(0x234)     /* (SPW_ROUTER_TABLE109) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE110_REG_OFST   _UINT32_(0x238)     /* (SPW_ROUTER_TABLE110) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE111_REG_OFST   _UINT32_(0x23C)     /* (SPW_ROUTER_TABLE111) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE112_REG_OFST   _UINT32_(0x240)     /* (SPW_ROUTER_TABLE112) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE113_REG_OFST   _UINT32_(0x244)     /* (SPW_ROUTER_TABLE113) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE114_REG_OFST   _UINT32_(0x248)     /* (SPW_ROUTER_TABLE114) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE115_REG_OFST   _UINT32_(0x24C)     /* (SPW_ROUTER_TABLE115) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE116_REG_OFST   _UINT32_(0x250)     /* (SPW_ROUTER_TABLE116) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE117_REG_OFST   _UINT32_(0x254)     /* (SPW_ROUTER_TABLE117) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE118_REG_OFST   _UINT32_(0x258)     /* (SPW_ROUTER_TABLE118) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE119_REG_OFST   _UINT32_(0x25C)     /* (SPW_ROUTER_TABLE119) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE120_REG_OFST   _UINT32_(0x260)     /* (SPW_ROUTER_TABLE120) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE121_REG_OFST   _UINT32_(0x264)     /* (SPW_ROUTER_TABLE121) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE122_REG_OFST   _UINT32_(0x268)     /* (SPW_ROUTER_TABLE122) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE123_REG_OFST   _UINT32_(0x26C)     /* (SPW_ROUTER_TABLE123) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE124_REG_OFST   _UINT32_(0x270)     /* (SPW_ROUTER_TABLE124) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE125_REG_OFST   _UINT32_(0x274)     /* (SPW_ROUTER_TABLE125) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE126_REG_OFST   _UINT32_(0x278)     /* (SPW_ROUTER_TABLE126) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE127_REG_OFST   _UINT32_(0x27C)     /* (SPW_ROUTER_TABLE127) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE128_REG_OFST   _UINT32_(0x280)     /* (SPW_ROUTER_TABLE128) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE129_REG_OFST   _UINT32_(0x284)     /* (SPW_ROUTER_TABLE129) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE130_REG_OFST   _UINT32_(0x288)     /* (SPW_ROUTER_TABLE130) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE131_REG_OFST   _UINT32_(0x28C)     /* (SPW_ROUTER_TABLE131) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE132_REG_OFST   _UINT32_(0x290)     /* (SPW_ROUTER_TABLE132) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE133_REG_OFST   _UINT32_(0x294)     /* (SPW_ROUTER_TABLE133) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE134_REG_OFST   _UINT32_(0x298)     /* (SPW_ROUTER_TABLE134) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE135_REG_OFST   _UINT32_(0x29C)     /* (SPW_ROUTER_TABLE135) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE136_REG_OFST   _UINT32_(0x2A0)     /* (SPW_ROUTER_TABLE136) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE137_REG_OFST   _UINT32_(0x2A4)     /* (SPW_ROUTER_TABLE137) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE138_REG_OFST   _UINT32_(0x2A8)     /* (SPW_ROUTER_TABLE138) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE139_REG_OFST   _UINT32_(0x2AC)     /* (SPW_ROUTER_TABLE139) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE140_REG_OFST   _UINT32_(0x2B0)     /* (SPW_ROUTER_TABLE140) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE141_REG_OFST   _UINT32_(0x2B4)     /* (SPW_ROUTER_TABLE141) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE142_REG_OFST   _UINT32_(0x2B8)     /* (SPW_ROUTER_TABLE142) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE143_REG_OFST   _UINT32_(0x2BC)     /* (SPW_ROUTER_TABLE143) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE144_REG_OFST   _UINT32_(0x2C0)     /* (SPW_ROUTER_TABLE144) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE145_REG_OFST   _UINT32_(0x2C4)     /* (SPW_ROUTER_TABLE145) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE146_REG_OFST   _UINT32_(0x2C8)     /* (SPW_ROUTER_TABLE146) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE147_REG_OFST   _UINT32_(0x2CC)     /* (SPW_ROUTER_TABLE147) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE148_REG_OFST   _UINT32_(0x2D0)     /* (SPW_ROUTER_TABLE148) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE149_REG_OFST   _UINT32_(0x2D4)     /* (SPW_ROUTER_TABLE149) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE150_REG_OFST   _UINT32_(0x2D8)     /* (SPW_ROUTER_TABLE150) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE151_REG_OFST   _UINT32_(0x2DC)     /* (SPW_ROUTER_TABLE151) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE152_REG_OFST   _UINT32_(0x2E0)     /* (SPW_ROUTER_TABLE152) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE153_REG_OFST   _UINT32_(0x2E4)     /* (SPW_ROUTER_TABLE153) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE154_REG_OFST   _UINT32_(0x2E8)     /* (SPW_ROUTER_TABLE154) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE155_REG_OFST   _UINT32_(0x2EC)     /* (SPW_ROUTER_TABLE155) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE156_REG_OFST   _UINT32_(0x2F0)     /* (SPW_ROUTER_TABLE156) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE157_REG_OFST   _UINT32_(0x2F4)     /* (SPW_ROUTER_TABLE157) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE158_REG_OFST   _UINT32_(0x2F8)     /* (SPW_ROUTER_TABLE158) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE159_REG_OFST   _UINT32_(0x2FC)     /* (SPW_ROUTER_TABLE159) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE160_REG_OFST   _UINT32_(0x300)     /* (SPW_ROUTER_TABLE160) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE161_REG_OFST   _UINT32_(0x304)     /* (SPW_ROUTER_TABLE161) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE162_REG_OFST   _UINT32_(0x308)     /* (SPW_ROUTER_TABLE162) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE163_REG_OFST   _UINT32_(0x30C)     /* (SPW_ROUTER_TABLE163) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE164_REG_OFST   _UINT32_(0x310)     /* (SPW_ROUTER_TABLE164) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE165_REG_OFST   _UINT32_(0x314)     /* (SPW_ROUTER_TABLE165) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE166_REG_OFST   _UINT32_(0x318)     /* (SPW_ROUTER_TABLE166) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE167_REG_OFST   _UINT32_(0x31C)     /* (SPW_ROUTER_TABLE167) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE168_REG_OFST   _UINT32_(0x320)     /* (SPW_ROUTER_TABLE168) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE169_REG_OFST   _UINT32_(0x324)     /* (SPW_ROUTER_TABLE169) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE170_REG_OFST   _UINT32_(0x328)     /* (SPW_ROUTER_TABLE170) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE171_REG_OFST   _UINT32_(0x32C)     /* (SPW_ROUTER_TABLE171) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE172_REG_OFST   _UINT32_(0x330)     /* (SPW_ROUTER_TABLE172) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE173_REG_OFST   _UINT32_(0x334)     /* (SPW_ROUTER_TABLE173) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE174_REG_OFST   _UINT32_(0x338)     /* (SPW_ROUTER_TABLE174) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE175_REG_OFST   _UINT32_(0x33C)     /* (SPW_ROUTER_TABLE175) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE176_REG_OFST   _UINT32_(0x340)     /* (SPW_ROUTER_TABLE176) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE177_REG_OFST   _UINT32_(0x344)     /* (SPW_ROUTER_TABLE177) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE178_REG_OFST   _UINT32_(0x348)     /* (SPW_ROUTER_TABLE178) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE179_REG_OFST   _UINT32_(0x34C)     /* (SPW_ROUTER_TABLE179) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE180_REG_OFST   _UINT32_(0x350)     /* (SPW_ROUTER_TABLE180) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE181_REG_OFST   _UINT32_(0x354)     /* (SPW_ROUTER_TABLE181) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE182_REG_OFST   _UINT32_(0x358)     /* (SPW_ROUTER_TABLE182) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE183_REG_OFST   _UINT32_(0x35C)     /* (SPW_ROUTER_TABLE183) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE184_REG_OFST   _UINT32_(0x360)     /* (SPW_ROUTER_TABLE184) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE185_REG_OFST   _UINT32_(0x364)     /* (SPW_ROUTER_TABLE185) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE186_REG_OFST   _UINT32_(0x368)     /* (SPW_ROUTER_TABLE186) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE187_REG_OFST   _UINT32_(0x36C)     /* (SPW_ROUTER_TABLE187) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE188_REG_OFST   _UINT32_(0x370)     /* (SPW_ROUTER_TABLE188) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE189_REG_OFST   _UINT32_(0x374)     /* (SPW_ROUTER_TABLE189) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE190_REG_OFST   _UINT32_(0x378)     /* (SPW_ROUTER_TABLE190) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE191_REG_OFST   _UINT32_(0x37C)     /* (SPW_ROUTER_TABLE191) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE192_REG_OFST   _UINT32_(0x380)     /* (SPW_ROUTER_TABLE192) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE193_REG_OFST   _UINT32_(0x384)     /* (SPW_ROUTER_TABLE193) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE194_REG_OFST   _UINT32_(0x388)     /* (SPW_ROUTER_TABLE194) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE195_REG_OFST   _UINT32_(0x38C)     /* (SPW_ROUTER_TABLE195) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE196_REG_OFST   _UINT32_(0x390)     /* (SPW_ROUTER_TABLE196) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE197_REG_OFST   _UINT32_(0x394)     /* (SPW_ROUTER_TABLE197) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE198_REG_OFST   _UINT32_(0x398)     /* (SPW_ROUTER_TABLE198) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE199_REG_OFST   _UINT32_(0x39C)     /* (SPW_ROUTER_TABLE199) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE200_REG_OFST   _UINT32_(0x3A0)     /* (SPW_ROUTER_TABLE200) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE201_REG_OFST   _UINT32_(0x3A4)     /* (SPW_ROUTER_TABLE201) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE202_REG_OFST   _UINT32_(0x3A8)     /* (SPW_ROUTER_TABLE202) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE203_REG_OFST   _UINT32_(0x3AC)     /* (SPW_ROUTER_TABLE203) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE204_REG_OFST   _UINT32_(0x3B0)     /* (SPW_ROUTER_TABLE204) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE205_REG_OFST   _UINT32_(0x3B4)     /* (SPW_ROUTER_TABLE205) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE206_REG_OFST   _UINT32_(0x3B8)     /* (SPW_ROUTER_TABLE206) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE207_REG_OFST   _UINT32_(0x3BC)     /* (SPW_ROUTER_TABLE207) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE208_REG_OFST   _UINT32_(0x3C0)     /* (SPW_ROUTER_TABLE208) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE209_REG_OFST   _UINT32_(0x3C4)     /* (SPW_ROUTER_TABLE209) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE210_REG_OFST   _UINT32_(0x3C8)     /* (SPW_ROUTER_TABLE210) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE211_REG_OFST   _UINT32_(0x3CC)     /* (SPW_ROUTER_TABLE211) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE212_REG_OFST   _UINT32_(0x3D0)     /* (SPW_ROUTER_TABLE212) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE213_REG_OFST   _UINT32_(0x3D4)     /* (SPW_ROUTER_TABLE213) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE214_REG_OFST   _UINT32_(0x3D8)     /* (SPW_ROUTER_TABLE214) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE215_REG_OFST   _UINT32_(0x3DC)     /* (SPW_ROUTER_TABLE215) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE216_REG_OFST   _UINT32_(0x3E0)     /* (SPW_ROUTER_TABLE216) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE217_REG_OFST   _UINT32_(0x3E4)     /* (SPW_ROUTER_TABLE217) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE218_REG_OFST   _UINT32_(0x3E8)     /* (SPW_ROUTER_TABLE218) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE219_REG_OFST   _UINT32_(0x3EC)     /* (SPW_ROUTER_TABLE219) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE220_REG_OFST   _UINT32_(0x3F0)     /* (SPW_ROUTER_TABLE220) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE221_REG_OFST   _UINT32_(0x3F4)     /* (SPW_ROUTER_TABLE221) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE222_REG_OFST   _UINT32_(0x3F8)     /* (SPW_ROUTER_TABLE222) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_ROUTER_TABLE223_REG_OFST   _UINT32_(0x3FC)     /* (SPW_ROUTER_TABLE223) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) Offset */
#define SPW_LINK1_PI_RM_REG_OFST       _UINT32_(0x400)     /* (SPW_LINK1_PI_RM) SpW Link 1 Pending Read Masked Interrupt Offset */
#define SPW_LINK1_PI_RCM_REG_OFST      _UINT32_(0x404)     /* (SPW_LINK1_PI_RCM) SpW Link 1 Pending Read and Clear Masked Interrupt Offset */
#define SPW_LINK1_PI_R_REG_OFST        _UINT32_(0x408)     /* (SPW_LINK1_PI_R) SpW Link 1 Pending Read Interrupt Offset */
#define SPW_LINK1_PI_RCS_REG_OFST      _UINT32_(0x40C)     /* (SPW_LINK1_PI_RCS) SpW Link 1 Pending Read, Clear and Enabed Interrupt Offset */
#define SPW_LINK1_IM_REG_OFST          _UINT32_(0x410)     /* (SPW_LINK1_IM) SpW Link 1 Interrupt Mask Offset */
#define SPW_LINK1_PI_C_REG_OFST        _UINT32_(0x414)     /* (SPW_LINK1_PI_C) SpW Link 1 Clear Pending Interrupt Offset */
#define SPW_LINK1_IM_S_REG_OFST        _UINT32_(0x418)     /* (SPW_LINK1_IM_S) SpW Link 1 Interrupt Set Mask Offset */
#define SPW_LINK1_IM_C_REG_OFST        _UINT32_(0x41C)     /* (SPW_LINK1_IM_C) SpW Link 1 Interrupt Clear Mask Offset */
#define SPW_LINK1_CFG_REG_OFST         _UINT32_(0x420)     /* (SPW_LINK1_CFG) SpW Link 1 Config Offset */
#define SPW_LINK1_CLKDIV_REG_OFST      _UINT32_(0x424)     /* (SPW_LINK1_CLKDIV) SpW Link 1 Clock Division Offset */
#define SPW_LINK1_STATUS_REG_OFST      _UINT32_(0x428)     /* (SPW_LINK1_STATUS) SpW Link 1 Status Offset */
#define SPW_LINK1_SWRESET_REG_OFST     _UINT32_(0x42C)     /* (SPW_LINK1_SWRESET) SpW Link 1 Software Reset Offset */
#define SPW_LINK1_ESCCHAREVENT0_REG_OFST _UINT32_(0x430)     /* (SPW_LINK1_ESCCHAREVENT0) SpW Link 1 Escape Character Event 0 Offset */
#define SPW_LINK1_ESCCHAREVENT1_REG_OFST _UINT32_(0x434)     /* (SPW_LINK1_ESCCHAREVENT1) SpW Link 1 Escape Character Event 1 Offset */
#define SPW_LINK1_ESCCHARSTS_REG_OFST  _UINT32_(0x438)     /* (SPW_LINK1_ESCCHARSTS) SpW Link 1 Escape Character Status Offset */
#define SPW_LINK1_TRANSESC_REG_OFST    _UINT32_(0x43C)     /* (SPW_LINK1_TRANSESC) SpW Link 1 Transmit Escape Character Offset */
#define SPW_LINK1_DISTINTPI_RM_REG_OFST _UINT32_(0x440)     /* (SPW_LINK1_DISTINTPI_RM) SpW Link 1 Distributed Interrupt Pending Read Masked Interrupt Offset */
#define SPW_LINK1_DISTINTPI_RCM_REG_OFST _UINT32_(0x444)     /* (SPW_LINK1_DISTINTPI_RCM) SpW Link 1 Distributed Interrupt Pending Read and Clear Masked Interrupt Offset */
#define SPW_LINK1_DISTINTPI_R_REG_OFST _UINT32_(0x448)     /* (SPW_LINK1_DISTINTPI_R) SpW Link 1 Distributed Interrupt Pending Read Interrupt Offset */
#define SPW_LINK1_DISTINTPI_RCS_REG_OFST _UINT32_(0x44C)     /* (SPW_LINK1_DISTINTPI_RCS) SpW Link 1 Distributed Interrupt Pending Read and Clear Interrupt Offset */
#define SPW_LINK1_DISTINTIM_REG_OFST   _UINT32_(0x450)     /* (SPW_LINK1_DISTINTIM) SpW Link 1 Distributed Interrupt Mask Offset */
#define SPW_LINK1_DISTINTPI_C_REG_OFST _UINT32_(0x454)     /* (SPW_LINK1_DISTINTPI_C) SpW Link 1 Distributed Interrupt Clear Pending Interrupt Offset */
#define SPW_LINK1_DISTINTIM_S_REG_OFST _UINT32_(0x458)     /* (SPW_LINK1_DISTINTIM_S) SpW Link 1 Distributed Interrupt Set Mask Offset */
#define SPW_LINK1_DISTINTIM_C_REG_OFST _UINT32_(0x45C)     /* (SPW_LINK1_DISTINTIM_C) SpW Link 1 Distributed Interrupt Clear Mask Offset */
#define SPW_LINK1_DISTACKPI_RM_REG_OFST _UINT32_(0x460)     /* (SPW_LINK1_DISTACKPI_RM) SpW Link 1 Distributed Interrupt Acknowledge Pending Read Masked Interrupt Offset */
#define SPW_LINK1_DISTACKPI_RCM_REG_OFST _UINT32_(0x464)     /* (SPW_LINK1_DISTACKPI_RCM) SpW Link 1 Distributed Interrupt Acknowledge Pending Read and Clear Masked Interrupt Offset */
#define SPW_LINK1_DISTACKPI_R_REG_OFST _UINT32_(0x468)     /* (SPW_LINK1_DISTACKPI_R) SpW Link 1 Distributed Interrupt Acknowledge Pending Read Interrupt Offset */
#define SPW_LINK1_DISTACKPI_RCS_REG_OFST _UINT32_(0x46C)     /* (SPW_LINK1_DISTACKPI_RCS) SpW Link 1 Distributed Interrupt Acknowledge Pending Read and Clear Interrupt Offset */
#define SPW_LINK1_DISTACKIM_REG_OFST   _UINT32_(0x470)     /* (SPW_LINK1_DISTACKIM) SpW Link 1 Distributed Interrupt Acknowledge Mask Offset */
#define SPW_LINK1_DISTACKPI_C_REG_OFST _UINT32_(0x474)     /* (SPW_LINK1_DISTACKPI_C) SpW Link 1 Distributed Interrupt Acknowledge Clear Pending Interrupt Offset */
#define SPW_LINK1_DISTACKIM_S_REG_OFST _UINT32_(0x478)     /* (SPW_LINK1_DISTACKIM_S) SpW Link 1 Distributed Interrupt Acknowledge Set Mask Offset */
#define SPW_LINK1_DISTACKIM_C_REG_OFST _UINT32_(0x47C)     /* (SPW_LINK1_DISTACKIM_C) SpW Link 1 Distributed Interrupt Acknowledge Clear Mask Offset */
#define SPW_LINK2_PI_RM_REG_OFST       _UINT32_(0x480)     /* (SPW_LINK2_PI_RM) SpW Link 2 Pending Read Masked Interrupt Offset */
#define SPW_LINK2_PI_RCM_REG_OFST      _UINT32_(0x484)     /* (SPW_LINK2_PI_RCM) SpW Link 2 Pending Read and Clear Masked Interrupt Offset */
#define SPW_LINK2_PI_R_REG_OFST        _UINT32_(0x488)     /* (SPW_LINK2_PI_R) SpW Link 2 Pending Read Interrupt Offset */
#define SPW_LINK2_PI_RCS_REG_OFST      _UINT32_(0x48C)     /* (SPW_LINK2_PI_RCS) SpW Link 2 Pending Read, Clear and Enabled Interrupt Offset */
#define SPW_LINK2_IM_REG_OFST          _UINT32_(0x490)     /* (SPW_LINK2_IM) SpW Link 2 Interrupt Mask Offset */
#define SPW_LINK2_PI_C_REG_OFST        _UINT32_(0x494)     /* (SPW_LINK2_PI_C) SpW Link 2 Clear Pending Interrupt Offset */
#define SPW_LINK2_IM_S_REG_OFST        _UINT32_(0x498)     /* (SPW_LINK2_IM_S) SpW Link 2 Interrupt Set Mask Offset */
#define SPW_LINK2_IM_C_REG_OFST        _UINT32_(0x49C)     /* (SPW_LINK2_IM_C) SpW Link 2 Interrupt Clear Mask Offset */
#define SPW_LINK2_CFG_REG_OFST         _UINT32_(0x4A0)     /* (SPW_LINK2_CFG) SpW Link 2 Config Offset */
#define SPW_LINK2_CLKDIV_REG_OFST      _UINT32_(0x4A4)     /* (SPW_LINK2_CLKDIV) SpW Link 2 Clock Division Offset */
#define SPW_LINK2_STATUS_REG_OFST      _UINT32_(0x4A8)     /* (SPW_LINK2_STATUS) SpW Link 2 Status Offset */
#define SPW_LINK2_SWRESET_REG_OFST     _UINT32_(0x4AC)     /* (SPW_LINK2_SWRESET) SpW Link 2 Software Reset Offset */
#define SPW_LINK2_ESCCHAREVENT0_REG_OFST _UINT32_(0x4B0)     /* (SPW_LINK2_ESCCHAREVENT0) SpW Link 2 Escape Character Event 0 Offset */
#define SPW_LINK2_ESCCHAREVENT1_REG_OFST _UINT32_(0x4B4)     /* (SPW_LINK2_ESCCHAREVENT1) SpW Link 2 Escape Character Event 1 Offset */
#define SPW_LINK2_ESCCHARSTS_REG_OFST  _UINT32_(0x4B8)     /* (SPW_LINK2_ESCCHARSTS) SpW Link 2 Escape Character Status Offset */
#define SPW_LINK2_TRANSESC_REG_OFST    _UINT32_(0x4BC)     /* (SPW_LINK2_TRANSESC) SpW Link 2 Transmit Escape Character Offset */
#define SPW_LINK2_DISTINTPI_RM_REG_OFST _UINT32_(0x4C0)     /* (SPW_LINK2_DISTINTPI_RM) SpW Link 2 Distributed Interrupt Pending Read Masked Interrupt Offset */
#define SPW_LINK2_DISTINTPI_RCM_REG_OFST _UINT32_(0x4C4)     /* (SPW_LINK2_DISTINTPI_RCM) SpW Link 2 Distributed Interrupt Pending Read and Clear Masked Interrupt Offset */
#define SPW_LINK2_DISTINTPI_R_REG_OFST _UINT32_(0x4C8)     /* (SPW_LINK2_DISTINTPI_R) SpW Link 2 Distributed Interrupt Pending Read Interrupt Offset */
#define SPW_LINK2_DISTINTPI_RCS_REG_OFST _UINT32_(0x4CC)     /* (SPW_LINK2_DISTINTPI_RCS) SpW Link 2 Distributed Interrupt Pending Read and Clear Interrupt Offset */
#define SPW_LINK2_DISTINTIM_REG_OFST   _UINT32_(0x4D0)     /* (SPW_LINK2_DISTINTIM) SpW Link 2 Distributed Interrupt Mask Offset */
#define SPW_LINK2_DISTINTPI_C_REG_OFST _UINT32_(0x4D4)     /* (SPW_LINK2_DISTINTPI_C) SpW Link 2 Distributed Interrupt Clear Pending Interrupt Offset */
#define SPW_LINK2_DISTINTIM_S_REG_OFST _UINT32_(0x4D8)     /* (SPW_LINK2_DISTINTIM_S) SpW Link 2 Distributed Interrupt Set Mask Offset */
#define SPW_LINK2_DISTINTIM_C_REG_OFST _UINT32_(0x4DC)     /* (SPW_LINK2_DISTINTIM_C) SpW Link 2 Distributed Interrupt Clear Mask Offset */
#define SPW_LINK2_DISTACKPI_RM_REG_OFST _UINT32_(0x4E0)     /* (SPW_LINK2_DISTACKPI_RM) SpW Link 2 Distributed Interrupt Acknowledge Pending Read Masked Interrupt Offset */
#define SPW_LINK2_DISTACKPI_RCM_REG_OFST _UINT32_(0x4E4)     /* (SPW_LINK2_DISTACKPI_RCM) SpW Link 2 Distributed Interrupt Acknowledge Pending Read and Clear Masked Interrupt Offset */
#define SPW_LINK2_DISTACKPI_R_REG_OFST _UINT32_(0x4E8)     /* (SPW_LINK2_DISTACKPI_R) SpW Link 2 Distributed Interrupt Acknowledge Pending Read Interrupt Offset */
#define SPW_LINK2_DISTACKPI_RCS_REG_OFST _UINT32_(0x4EC)     /* (SPW_LINK2_DISTACKPI_RCS) SpW Link 2 Distributed Interrupt Acknowledge Pending Read and Clear Interrupt Offset */
#define SPW_LINK2_DISTACKIM_REG_OFST   _UINT32_(0x4F0)     /* (SPW_LINK2_DISTACKIM) SpW Link 2 Distributed Interrupt Acknowledge Mask Offset */
#define SPW_LINK2_DISTACKPI_C_REG_OFST _UINT32_(0x4F4)     /* (SPW_LINK2_DISTACKPI_C) SpW Link 2 Distributed Interrupt Acknowledge Clear Pending Interrupt Offset */
#define SPW_LINK2_DISTACKIM_S_REG_OFST _UINT32_(0x4F8)     /* (SPW_LINK2_DISTACKIM_S) SpW Link 2 Distributed Interrupt Acknowledge Set Mask Offset */
#define SPW_LINK2_DISTACKIM_C_REG_OFST _UINT32_(0x4FC)     /* (SPW_LINK2_DISTACKIM_C) SpW Link 2 Distributed Interrupt Acknowledge Clear Mask Offset */
#define SPW_PKTRX1_PI_RM_REG_OFST      _UINT32_(0x800)     /* (SPW_PKTRX1_PI_RM) PktRx Pending Read Masked Interrupt Offset */
#define SPW_PKTRX1_PI_RCM_REG_OFST     _UINT32_(0x804)     /* (SPW_PKTRX1_PI_RCM) PktRx Pending Read and Clear Masked Interrupt Offset */
#define SPW_PKTRX1_PI_R_REG_OFST       _UINT32_(0x808)     /* (SPW_PKTRX1_PI_R) PktRx Pending Read Interrupt Offset */
#define SPW_PKTRX1_PI_RCS_REG_OFST     _UINT32_(0x80C)     /* (SPW_PKTRX1_PI_RCS) PktRx Pending Read, Clear and Enabled Interrupt Offset */
#define SPW_PKTRX1_IM_REG_OFST         _UINT32_(0x810)     /* (SPW_PKTRX1_IM) PktRx Interrupt Mask Offset */
#define SPW_PKTRX1_PI_C_REG_OFST       _UINT32_(0x814)     /* (SPW_PKTRX1_PI_C) PktRx Clear Pending Interrupt Offset */
#define SPW_PKTRX1_IM_S_REG_OFST       _UINT32_(0x818)     /* (SPW_PKTRX1_IM_S) PktRx Interrupt Set Mask Offset */
#define SPW_PKTRX1_IM_C_REG_OFST       _UINT32_(0x81C)     /* (SPW_PKTRX1_IM_C) PktRx Interrupt Clear Mask Offset */
#define SPW_PKTRX1_CFG_REG_OFST        _UINT32_(0x820)     /* (SPW_PKTRX1_CFG) PktRx Config Offset */
#define SPW_PKTRX1_STATUS_REG_OFST     _UINT32_(0x824)     /* (SPW_PKTRX1_STATUS) PktRx Status Offset */
#define SPW_PKTRX1_NXTBUFDATAADDR_REG_OFST _UINT32_(0x830)     /* (SPW_PKTRX1_NXTBUFDATAADDR) PktRx Next Buffer Data Address Offset */
#define SPW_PKTRX1_NXTBUFDATALEN_REG_OFST _UINT32_(0x834)     /* (SPW_PKTRX1_NXTBUFDATALEN) PktRx Next Buffer Data Length Offset */
#define SPW_PKTRX1_NXTBUFPKTADDR_REG_OFST _UINT32_(0x838)     /* (SPW_PKTRX1_NXTBUFPKTADDR) PktRx Next Buffer Packet Address Offset */
#define SPW_PKTRX1_NXTBUFCFG_REG_OFST  _UINT32_(0x83C)     /* (SPW_PKTRX1_NXTBUFCFG) PktRx Next Buffer Config Offset */
#define SPW_PKTRX1_CURBUFDATAADDR_REG_OFST _UINT32_(0x840)     /* (SPW_PKTRX1_CURBUFDATAADDR) PktRx Current Buffer Data Address Offset */
#define SPW_PKTRX1_CURBUFDATALEN_REG_OFST _UINT32_(0x844)     /* (SPW_PKTRX1_CURBUFDATALEN) PktRx Current Buffer Data Length Offset */
#define SPW_PKTRX1_CURBUFPKTADDR_REG_OFST _UINT32_(0x848)     /* (SPW_PKTRX1_CURBUFPKTADDR) PktRx Current Buffer Packet Address Offset */
#define SPW_PKTRX1_CURBUFCFG_REG_OFST  _UINT32_(0x84C)     /* (SPW_PKTRX1_CURBUFCFG) PktRx Current Buffer Config Offset */
#define SPW_PKTRX1_PREVBUFDATALEN_REG_OFST _UINT32_(0x850)     /* (SPW_PKTRX1_PREVBUFDATALEN) PktRx Previous Buffer Data Length Offset */
#define SPW_PKTRX1_PREVBUFSTS_REG_OFST _UINT32_(0x854)     /* (SPW_PKTRX1_PREVBUFSTS) PktRx Previous Buffer Status Offset */
#define SPW_PKTRX1_SWRESET_REG_OFST    _UINT32_(0x87C)     /* (SPW_PKTRX1_SWRESET) PktRx Software Reset Offset */
#define SPW_PKTTX1_PI_RM_REG_OFST      _UINT32_(0xC00)     /* (SPW_PKTTX1_PI_RM) PktTx Pending Read Masked Interrupt Offset */
#define SPW_PKTTX1_PI_RCM_REG_OFST     _UINT32_(0xC04)     /* (SPW_PKTTX1_PI_RCM) PktTx Pending Read and Clear Masked Interrupt Offset */
#define SPW_PKTTX1_PI_R_REG_OFST       _UINT32_(0xC08)     /* (SPW_PKTTX1_PI_R) PktTx Pending Read Interrupt Offset */
#define SPW_PKTTX1_PI_RCS_REG_OFST     _UINT32_(0xC0C)     /* (SPW_PKTTX1_PI_RCS) PktTx Pending Read, Clear and Enabled Interrupt Offset */
#define SPW_PKTTX1_IM_REG_OFST         _UINT32_(0xC10)     /* (SPW_PKTTX1_IM) PktTx Interrupt Mask Offset */
#define SPW_PKTTX1_PI_C_REG_OFST       _UINT32_(0xC14)     /* (SPW_PKTTX1_PI_C) PktTx Clear Pending Interrupt Offset */
#define SPW_PKTTX1_IM_S_REG_OFST       _UINT32_(0xC18)     /* (SPW_PKTTX1_IM_S) PktTx Interrupt Set Mask Offset */
#define SPW_PKTTX1_IM_C_REG_OFST       _UINT32_(0xC1C)     /* (SPW_PKTTX1_IM_C) PktTx Interrupt Clear Mask Offset */
#define SPW_PKTTX1_STATUS_REG_OFST     _UINT32_(0xC20)     /* (SPW_PKTTX1_STATUS) PktTx Status Offset */
#define SPW_PKTTX1_NXTSENDROUT_REG_OFST _UINT32_(0xC24)     /* (SPW_PKTTX1_NXTSENDROUT) PktTx Next Send List Router Bytes Offset */
#define SPW_PKTTX1_NXTSENDADDR_REG_OFST _UINT32_(0xC28)     /* (SPW_PKTTX1_NXTSENDADDR) PktTx Next Send List Address Offset */
#define SPW_PKTTX1_NXTSENDCFG_REG_OFST _UINT32_(0xC2C)     /* (SPW_PKTTX1_NXTSENDCFG) PktTx Next Send List Config Offset */
#define SPW_PKTTX1_CURSENDROUT_REG_OFST _UINT32_(0xC30)     /* (SPW_PKTTX1_CURSENDROUT) PktTx Current Send List Router Bytes Offset */
#define SPW_PKTTX1_CURSENDADDR_REG_OFST _UINT32_(0xC34)     /* (SPW_PKTTX1_CURSENDADDR) PktTx Current Send List Address Offset */
#define SPW_PKTTX1_CURSENDCFG_REG_OFST _UINT32_(0xC38)     /* (SPW_PKTTX1_CURSENDCFG) PktTx Current Send List Config Offset */
#define SPW_PKTTX1_SWRESET_REG_OFST    _UINT32_(0xC3C)     /* (SPW_PKTTX1_SWRESET) PktTx Software Reset Offset */
#define SPW_RMAP1_CFG_REG_OFST         _UINT32_(0xE00)     /* (SPW_RMAP1_CFG) SpW RMAP 1 Config Offset */
#define SPW_RMAP1_STS_RC_REG_OFST      _UINT32_(0xE04)     /* (SPW_RMAP1_STS_RC) SpW RMAP 1 Read and Clear Status Offset */
#define SPW_RMAP1_STS_REG_OFST         _UINT32_(0xE08)     /* (SPW_RMAP1_STS) SpW RMAP 1 Read Status Offset */
#define SPW_TCH_PI_RM_REG_OFST         _UINT32_(0xE80)     /* (SPW_TCH_PI_RM) SpW Tch Pending Read Masked Interrupt Offset */
#define SPW_TCH_PI_RCM_REG_OFST        _UINT32_(0xE84)     /* (SPW_TCH_PI_RCM) SpW Tch Pending Read and Clear Masked Interrupt Offset */
#define SPW_TCH_PI_R_REG_OFST          _UINT32_(0xE88)     /* (SPW_TCH_PI_R) SpW Tch Pending Read Interrupt Offset */
#define SPW_TCH_PI_RCS_REG_OFST        _UINT32_(0xE8C)     /* (SPW_TCH_PI_RCS) SpW Tch Pending Read, Clear and Enabled Interrupt Offset */
#define SPW_TCH_IM_REG_OFST            _UINT32_(0xE90)     /* (SPW_TCH_IM) SpW Tch Interrupt Mask Offset */
#define SPW_TCH_PI_C_REG_OFST          _UINT32_(0xE94)     /* (SPW_TCH_PI_C) SpW Tch Clear Pending Interrupt Offset */
#define SPW_TCH_IM_S_REG_OFST          _UINT32_(0xE98)     /* (SPW_TCH_IM_S) SpW Tch Interrupt Set Mask Offset */
#define SPW_TCH_IM_C_REG_OFST          _UINT32_(0xE9C)     /* (SPW_TCH_IM_C) SpW Tch Interrupt Clear Mask Offset */
#define SPW_TCH_CFGLISTEN_REG_OFST     _UINT32_(0xEA0)     /* (SPW_TCH_CFGLISTEN) SpW Tch Config Listener Offset */
#define SPW_TCH_CFGSEND_REG_OFST       _UINT32_(0xEA4)     /* (SPW_TCH_CFGSEND) SpW Tch Config Sender Offset */
#define SPW_TCH_CFG_REG_OFST           _UINT32_(0xEA8)     /* (SPW_TCH_CFG) SpW Tch Config Offset */
#define SPW_TCH_CFGRESTART_REG_OFST    _UINT32_(0xEAC)     /* (SPW_TCH_CFGRESTART) SpW Tch Config Restart Offset */
#define SPW_TCH_CFGTCEVENT_REG_OFST    _UINT32_(0xEB0)     /* (SPW_TCH_CFGTCEVENT) SpW Tch Config Tc Event Offset */
#define SPW_TCH_CFGWD_REG_OFST         _UINT32_(0xEB4)     /* (SPW_TCH_CFGWD) SpW Tch Config Watchdog Offset */
#define SPW_TCH_LASTTIMECODE_REG_OFST  _UINT32_(0xEB8)     /* (SPW_TCH_LASTTIMECODE) SpW Tch Last Time Code Offset */
#define SPW_TCH_SWRESET_REG_OFST       _UINT32_(0xEBC)     /* (SPW_TCH_SWRESET) SpW Tch Software Reset Offset */
#define SPW_GROUP_IRQSTS1_REG_OFST     _UINT32_(0xF00)     /* (SPW_GROUP_IRQSTS1) SpW Group Interrupt status 1 Offset */
#define SPW_GROUP_IRQSTS2_REG_OFST     _UINT32_(0xF04)     /* (SPW_GROUP_IRQSTS2) SpW Group Interrupt status 2 Offset */
#define SPW_GROUP_EDACSTS_REG_OFST     _UINT32_(0xF0C)     /* (SPW_GROUP_EDACSTS) SpW Group Interrupt status Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SPW register API structure */
typedef struct
{
  __I   uint32_t                       SPW_ROUTER_STS;     /**< Offset: 0x00 (R/   32) SpW Router Status */
  __IO  uint32_t                       SPW_ROUTER_CFG;     /**< Offset: 0x04 (R/W  32) SpW Router Config */
  __I   uint32_t                       SPW_ROUTER_TIMEOUT; /**< Offset: 0x08 (R/   32) SpW Router Timeout */
  __I   uint8_t                        Reserved1[0x74];
  __IO  uint32_t                       SPW_ROUTER_TABLE[224]; /**< Offset: 0x80 (R/W  32) SpW Router Table (Logical addresses 32 to 255, index 0 for logical address 32) */
  __I   uint32_t                       SPW_LINK1_PI_RM;    /**< Offset: 0x400 (R/   32) SpW Link 1 Pending Read Masked Interrupt */
  __I   uint32_t                       SPW_LINK1_PI_RCM;   /**< Offset: 0x404 (R/   32) SpW Link 1 Pending Read and Clear Masked Interrupt */
  __I   uint32_t                       SPW_LINK1_PI_R;     /**< Offset: 0x408 (R/   32) SpW Link 1 Pending Read Interrupt */
  __IO  uint32_t                       SPW_LINK1_PI_RCS;   /**< Offset: 0x40C (R/W  32) SpW Link 1 Pending Read, Clear and Enabed Interrupt */
  __IO  uint32_t                       SPW_LINK1_IM;       /**< Offset: 0x410 (R/W  32) SpW Link 1 Interrupt Mask */
  __O   uint32_t                       SPW_LINK1_PI_C;     /**< Offset: 0x414 ( /W  32) SpW Link 1 Clear Pending Interrupt */
  __O   uint32_t                       SPW_LINK1_IM_S;     /**< Offset: 0x418 ( /W  32) SpW Link 1 Interrupt Set Mask */
  __O   uint32_t                       SPW_LINK1_IM_C;     /**< Offset: 0x41C ( /W  32) SpW Link 1 Interrupt Clear Mask */
  __IO  uint32_t                       SPW_LINK1_CFG;      /**< Offset: 0x420 (R/W  32) SpW Link 1 Config */
  __IO  uint32_t                       SPW_LINK1_CLKDIV;   /**< Offset: 0x424 (R/W  32) SpW Link 1 Clock Division */
  __I   uint32_t                       SPW_LINK1_STATUS;   /**< Offset: 0x428 (R/   32) SpW Link 1 Status */
  __IO  uint32_t                       SPW_LINK1_SWRESET;  /**< Offset: 0x42C (R/W  32) SpW Link 1 Software Reset */
  __IO  uint32_t                       SPW_LINK1_ESCCHAREVENT0; /**< Offset: 0x430 (R/W  32) SpW Link 1 Escape Character Event 0 */
  __IO  uint32_t                       SPW_LINK1_ESCCHAREVENT1; /**< Offset: 0x434 (R/W  32) SpW Link 1 Escape Character Event 1 */
  __I   uint32_t                       SPW_LINK1_ESCCHARSTS; /**< Offset: 0x438 (R/   32) SpW Link 1 Escape Character Status */
  __IO  uint32_t                       SPW_LINK1_TRANSESC; /**< Offset: 0x43C (R/W  32) SpW Link 1 Transmit Escape Character */
  __I   uint32_t                       SPW_LINK1_DISTINTPI_RM; /**< Offset: 0x440 (R/   32) SpW Link 1 Distributed Interrupt Pending Read Masked Interrupt */
  __I   uint32_t                       SPW_LINK1_DISTINTPI_RCM; /**< Offset: 0x444 (R/   32) SpW Link 1 Distributed Interrupt Pending Read and Clear Masked Interrupt */
  __I   uint32_t                       SPW_LINK1_DISTINTPI_R; /**< Offset: 0x448 (R/   32) SpW Link 1 Distributed Interrupt Pending Read Interrupt */
  __IO  uint32_t                       SPW_LINK1_DISTINTPI_RCS; /**< Offset: 0x44C (R/W  32) SpW Link 1 Distributed Interrupt Pending Read and Clear Interrupt */
  __IO  uint32_t                       SPW_LINK1_DISTINTIM; /**< Offset: 0x450 (R/W  32) SpW Link 1 Distributed Interrupt Mask */
  __O   uint32_t                       SPW_LINK1_DISTINTPI_C; /**< Offset: 0x454 ( /W  32) SpW Link 1 Distributed Interrupt Clear Pending Interrupt */
  __O   uint32_t                       SPW_LINK1_DISTINTIM_S; /**< Offset: 0x458 ( /W  32) SpW Link 1 Distributed Interrupt Set Mask */
  __O   uint32_t                       SPW_LINK1_DISTINTIM_C; /**< Offset: 0x45C ( /W  32) SpW Link 1 Distributed Interrupt Clear Mask */
  __I   uint32_t                       SPW_LINK1_DISTACKPI_RM; /**< Offset: 0x460 (R/   32) SpW Link 1 Distributed Interrupt Acknowledge Pending Read Masked Interrupt */
  __I   uint32_t                       SPW_LINK1_DISTACKPI_RCM; /**< Offset: 0x464 (R/   32) SpW Link 1 Distributed Interrupt Acknowledge Pending Read and Clear Masked Interrupt */
  __I   uint32_t                       SPW_LINK1_DISTACKPI_R; /**< Offset: 0x468 (R/   32) SpW Link 1 Distributed Interrupt Acknowledge Pending Read Interrupt */
  __IO  uint32_t                       SPW_LINK1_DISTACKPI_RCS; /**< Offset: 0x46C (R/W  32) SpW Link 1 Distributed Interrupt Acknowledge Pending Read and Clear Interrupt */
  __IO  uint32_t                       SPW_LINK1_DISTACKIM; /**< Offset: 0x470 (R/W  32) SpW Link 1 Distributed Interrupt Acknowledge Mask */
  __O   uint32_t                       SPW_LINK1_DISTACKPI_C; /**< Offset: 0x474 ( /W  32) SpW Link 1 Distributed Interrupt Acknowledge Clear Pending Interrupt */
  __O   uint32_t                       SPW_LINK1_DISTACKIM_S; /**< Offset: 0x478 ( /W  32) SpW Link 1 Distributed Interrupt Acknowledge Set Mask */
  __O   uint32_t                       SPW_LINK1_DISTACKIM_C; /**< Offset: 0x47C ( /W  32) SpW Link 1 Distributed Interrupt Acknowledge Clear Mask */
  __I   uint32_t                       SPW_LINK2_PI_RM;    /**< Offset: 0x480 (R/   32) SpW Link 2 Pending Read Masked Interrupt */
  __I   uint32_t                       SPW_LINK2_PI_RCM;   /**< Offset: 0x484 (R/   32) SpW Link 2 Pending Read and Clear Masked Interrupt */
  __I   uint32_t                       SPW_LINK2_PI_R;     /**< Offset: 0x488 (R/   32) SpW Link 2 Pending Read Interrupt */
  __IO  uint32_t                       SPW_LINK2_PI_RCS;   /**< Offset: 0x48C (R/W  32) SpW Link 2 Pending Read, Clear and Enabled Interrupt */
  __IO  uint32_t                       SPW_LINK2_IM;       /**< Offset: 0x490 (R/W  32) SpW Link 2 Interrupt Mask */
  __O   uint32_t                       SPW_LINK2_PI_C;     /**< Offset: 0x494 ( /W  32) SpW Link 2 Clear Pending Interrupt */
  __O   uint32_t                       SPW_LINK2_IM_S;     /**< Offset: 0x498 ( /W  32) SpW Link 2 Interrupt Set Mask */
  __O   uint32_t                       SPW_LINK2_IM_C;     /**< Offset: 0x49C ( /W  32) SpW Link 2 Interrupt Clear Mask */
  __IO  uint32_t                       SPW_LINK2_CFG;      /**< Offset: 0x4A0 (R/W  32) SpW Link 2 Config */
  __IO  uint32_t                       SPW_LINK2_CLKDIV;   /**< Offset: 0x4A4 (R/W  32) SpW Link 2 Clock Division */
  __I   uint32_t                       SPW_LINK2_STATUS;   /**< Offset: 0x4A8 (R/   32) SpW Link 2 Status */
  __IO  uint32_t                       SPW_LINK2_SWRESET;  /**< Offset: 0x4AC (R/W  32) SpW Link 2 Software Reset */
  __IO  uint32_t                       SPW_LINK2_ESCCHAREVENT0; /**< Offset: 0x4B0 (R/W  32) SpW Link 2 Escape Character Event 0 */
  __IO  uint32_t                       SPW_LINK2_ESCCHAREVENT1; /**< Offset: 0x4B4 (R/W  32) SpW Link 2 Escape Character Event 1 */
  __I   uint32_t                       SPW_LINK2_ESCCHARSTS; /**< Offset: 0x4B8 (R/   32) SpW Link 2 Escape Character Status */
  __IO  uint32_t                       SPW_LINK2_TRANSESC; /**< Offset: 0x4BC (R/W  32) SpW Link 2 Transmit Escape Character */
  __I   uint32_t                       SPW_LINK2_DISTINTPI_RM; /**< Offset: 0x4C0 (R/   32) SpW Link 2 Distributed Interrupt Pending Read Masked Interrupt */
  __I   uint32_t                       SPW_LINK2_DISTINTPI_RCM; /**< Offset: 0x4C4 (R/   32) SpW Link 2 Distributed Interrupt Pending Read and Clear Masked Interrupt */
  __I   uint32_t                       SPW_LINK2_DISTINTPI_R; /**< Offset: 0x4C8 (R/   32) SpW Link 2 Distributed Interrupt Pending Read Interrupt */
  __IO  uint32_t                       SPW_LINK2_DISTINTPI_RCS; /**< Offset: 0x4CC (R/W  32) SpW Link 2 Distributed Interrupt Pending Read and Clear Interrupt */
  __IO  uint32_t                       SPW_LINK2_DISTINTIM; /**< Offset: 0x4D0 (R/W  32) SpW Link 2 Distributed Interrupt Mask */
  __O   uint32_t                       SPW_LINK2_DISTINTPI_C; /**< Offset: 0x4D4 ( /W  32) SpW Link 2 Distributed Interrupt Clear Pending Interrupt */
  __O   uint32_t                       SPW_LINK2_DISTINTIM_S; /**< Offset: 0x4D8 ( /W  32) SpW Link 2 Distributed Interrupt Set Mask */
  __O   uint32_t                       SPW_LINK2_DISTINTIM_C; /**< Offset: 0x4DC ( /W  32) SpW Link 2 Distributed Interrupt Clear Mask */
  __I   uint32_t                       SPW_LINK2_DISTACKPI_RM; /**< Offset: 0x4E0 (R/   32) SpW Link 2 Distributed Interrupt Acknowledge Pending Read Masked Interrupt */
  __I   uint32_t                       SPW_LINK2_DISTACKPI_RCM; /**< Offset: 0x4E4 (R/   32) SpW Link 2 Distributed Interrupt Acknowledge Pending Read and Clear Masked Interrupt */
  __I   uint32_t                       SPW_LINK2_DISTACKPI_R; /**< Offset: 0x4E8 (R/   32) SpW Link 2 Distributed Interrupt Acknowledge Pending Read Interrupt */
  __IO  uint32_t                       SPW_LINK2_DISTACKPI_RCS; /**< Offset: 0x4EC (R/W  32) SpW Link 2 Distributed Interrupt Acknowledge Pending Read and Clear Interrupt */
  __IO  uint32_t                       SPW_LINK2_DISTACKIM; /**< Offset: 0x4F0 (R/W  32) SpW Link 2 Distributed Interrupt Acknowledge Mask */
  __O   uint32_t                       SPW_LINK2_DISTACKPI_C; /**< Offset: 0x4F4 ( /W  32) SpW Link 2 Distributed Interrupt Acknowledge Clear Pending Interrupt */
  __O   uint32_t                       SPW_LINK2_DISTACKIM_S; /**< Offset: 0x4F8 ( /W  32) SpW Link 2 Distributed Interrupt Acknowledge Set Mask */
  __O   uint32_t                       SPW_LINK2_DISTACKIM_C; /**< Offset: 0x4FC ( /W  32) SpW Link 2 Distributed Interrupt Acknowledge Clear Mask */
  __I   uint8_t                        Reserved2[0x300];
  __I   uint32_t                       SPW_PKTRX1_PI_RM;   /**< Offset: 0x800 (R/   32) PktRx Pending Read Masked Interrupt */
  __I   uint32_t                       SPW_PKTRX1_PI_RCM;  /**< Offset: 0x804 (R/   32) PktRx Pending Read and Clear Masked Interrupt */
  __I   uint32_t                       SPW_PKTRX1_PI_R;    /**< Offset: 0x808 (R/   32) PktRx Pending Read Interrupt */
  __IO  uint32_t                       SPW_PKTRX1_PI_RCS;  /**< Offset: 0x80C (R/W  32) PktRx Pending Read, Clear and Enabled Interrupt */
  __IO  uint32_t                       SPW_PKTRX1_IM;      /**< Offset: 0x810 (R/W  32) PktRx Interrupt Mask */
  __O   uint32_t                       SPW_PKTRX1_PI_C;    /**< Offset: 0x814 ( /W  32) PktRx Clear Pending Interrupt */
  __O   uint32_t                       SPW_PKTRX1_IM_S;    /**< Offset: 0x818 ( /W  32) PktRx Interrupt Set Mask */
  __O   uint32_t                       SPW_PKTRX1_IM_C;    /**< Offset: 0x81C ( /W  32) PktRx Interrupt Clear Mask */
  __IO  uint32_t                       SPW_PKTRX1_CFG;     /**< Offset: 0x820 (R/W  32) PktRx Config */
  __I   uint32_t                       SPW_PKTRX1_STATUS;  /**< Offset: 0x824 (R/   32) PktRx Status */
  __I   uint8_t                        Reserved3[0x08];
  __IO  uint32_t                       SPW_PKTRX1_NXTBUFDATAADDR; /**< Offset: 0x830 (R/W  32) PktRx Next Buffer Data Address */
  __IO  uint32_t                       SPW_PKTRX1_NXTBUFDATALEN; /**< Offset: 0x834 (R/W  32) PktRx Next Buffer Data Length */
  __IO  uint32_t                       SPW_PKTRX1_NXTBUFPKTADDR; /**< Offset: 0x838 (R/W  32) PktRx Next Buffer Packet Address */
  __IO  uint32_t                       SPW_PKTRX1_NXTBUFCFG; /**< Offset: 0x83C (R/W  32) PktRx Next Buffer Config */
  __I   uint32_t                       SPW_PKTRX1_CURBUFDATAADDR; /**< Offset: 0x840 (R/   32) PktRx Current Buffer Data Address */
  __I   uint32_t                       SPW_PKTRX1_CURBUFDATALEN; /**< Offset: 0x844 (R/   32) PktRx Current Buffer Data Length */
  __I   uint32_t                       SPW_PKTRX1_CURBUFPKTADDR; /**< Offset: 0x848 (R/   32) PktRx Current Buffer Packet Address */
  __IO  uint32_t                       SPW_PKTRX1_CURBUFCFG; /**< Offset: 0x84C (R/W  32) PktRx Current Buffer Config */
  __I   uint32_t                       SPW_PKTRX1_PREVBUFDATALEN; /**< Offset: 0x850 (R/   32) PktRx Previous Buffer Data Length */
  __I   uint32_t                       SPW_PKTRX1_PREVBUFSTS; /**< Offset: 0x854 (R/   32) PktRx Previous Buffer Status */
  __I   uint8_t                        Reserved4[0x24];
  __IO  uint32_t                       SPW_PKTRX1_SWRESET; /**< Offset: 0x87C (R/W  32) PktRx Software Reset */
  __I   uint8_t                        Reserved5[0x380];
  __I   uint32_t                       SPW_PKTTX1_PI_RM;   /**< Offset: 0xC00 (R/   32) PktTx Pending Read Masked Interrupt */
  __I   uint32_t                       SPW_PKTTX1_PI_RCM;  /**< Offset: 0xC04 (R/   32) PktTx Pending Read and Clear Masked Interrupt */
  __I   uint32_t                       SPW_PKTTX1_PI_R;    /**< Offset: 0xC08 (R/   32) PktTx Pending Read Interrupt */
  __IO  uint32_t                       SPW_PKTTX1_PI_RCS;  /**< Offset: 0xC0C (R/W  32) PktTx Pending Read, Clear and Enabled Interrupt */
  __IO  uint32_t                       SPW_PKTTX1_IM;      /**< Offset: 0xC10 (R/W  32) PktTx Interrupt Mask */
  __O   uint32_t                       SPW_PKTTX1_PI_C;    /**< Offset: 0xC14 ( /W  32) PktTx Clear Pending Interrupt */
  __O   uint32_t                       SPW_PKTTX1_IM_S;    /**< Offset: 0xC18 ( /W  32) PktTx Interrupt Set Mask */
  __O   uint32_t                       SPW_PKTTX1_IM_C;    /**< Offset: 0xC1C ( /W  32) PktTx Interrupt Clear Mask */
  __IO  uint32_t                       SPW_PKTTX1_STATUS;  /**< Offset: 0xC20 (R/W  32) PktTx Status */
  __IO  uint32_t                       SPW_PKTTX1_NXTSENDROUT; /**< Offset: 0xC24 (R/W  32) PktTx Next Send List Router Bytes */
  __IO  uint32_t                       SPW_PKTTX1_NXTSENDADDR; /**< Offset: 0xC28 (R/W  32) PktTx Next Send List Address */
  __IO  uint32_t                       SPW_PKTTX1_NXTSENDCFG; /**< Offset: 0xC2C (R/W  32) PktTx Next Send List Config */
  __I   uint32_t                       SPW_PKTTX1_CURSENDROUT; /**< Offset: 0xC30 (R/   32) PktTx Current Send List Router Bytes */
  __I   uint32_t                       SPW_PKTTX1_CURSENDADDR; /**< Offset: 0xC34 (R/   32) PktTx Current Send List Address */
  __IO  uint32_t                       SPW_PKTTX1_CURSENDCFG; /**< Offset: 0xC38 (R/W  32) PktTx Current Send List Config */
  __IO  uint32_t                       SPW_PKTTX1_SWRESET; /**< Offset: 0xC3C (R/W  32) PktTx Software Reset */
  __I   uint8_t                        Reserved6[0x1C0];
  __IO  uint32_t                       SPW_RMAP1_CFG;      /**< Offset: 0xE00 (R/W  32) SpW RMAP 1 Config */
  __I   uint32_t                       SPW_RMAP1_STS_RC;   /**< Offset: 0xE04 (R/   32) SpW RMAP 1 Read and Clear Status */
  __I   uint32_t                       SPW_RMAP1_STS;      /**< Offset: 0xE08 (R/   32) SpW RMAP 1 Read Status */
  __I   uint8_t                        Reserved7[0x74];
  __I   uint32_t                       SPW_TCH_PI_RM;      /**< Offset: 0xE80 (R/   32) SpW Tch Pending Read Masked Interrupt */
  __I   uint32_t                       SPW_TCH_PI_RCM;     /**< Offset: 0xE84 (R/   32) SpW Tch Pending Read and Clear Masked Interrupt */
  __I   uint32_t                       SPW_TCH_PI_R;       /**< Offset: 0xE88 (R/   32) SpW Tch Pending Read Interrupt */
  __IO  uint32_t                       SPW_TCH_PI_RCS;     /**< Offset: 0xE8C (R/W  32) SpW Tch Pending Read, Clear and Enabled Interrupt */
  __IO  uint32_t                       SPW_TCH_IM;         /**< Offset: 0xE90 (R/W  32) SpW Tch Interrupt Mask */
  __O   uint32_t                       SPW_TCH_PI_C;       /**< Offset: 0xE94 ( /W  32) SpW Tch Clear Pending Interrupt */
  __O   uint32_t                       SPW_TCH_IM_S;       /**< Offset: 0xE98 ( /W  32) SpW Tch Interrupt Set Mask */
  __O   uint32_t                       SPW_TCH_IM_C;       /**< Offset: 0xE9C ( /W  32) SpW Tch Interrupt Clear Mask */
  __IO  uint32_t                       SPW_TCH_CFGLISTEN;  /**< Offset: 0xEA0 (R/W  32) SpW Tch Config Listener */
  __IO  uint32_t                       SPW_TCH_CFGSEND;    /**< Offset: 0xEA4 (R/W  32) SpW Tch Config Sender */
  __IO  uint32_t                       SPW_TCH_CFG;        /**< Offset: 0xEA8 (R/W  32) SpW Tch Config */
  __IO  uint32_t                       SPW_TCH_CFGRESTART; /**< Offset: 0xEAC (R/W  32) SpW Tch Config Restart */
  __IO  uint32_t                       SPW_TCH_CFGTCEVENT; /**< Offset: 0xEB0 (R/W  32) SpW Tch Config Tc Event */
  __IO  uint32_t                       SPW_TCH_CFGWD;      /**< Offset: 0xEB4 (R/W  32) SpW Tch Config Watchdog */
  __IO  uint32_t                       SPW_TCH_LASTTIMECODE; /**< Offset: 0xEB8 (R/W  32) SpW Tch Last Time Code */
  __IO  uint32_t                       SPW_TCH_SWRESET;    /**< Offset: 0xEBC (R/W  32) SpW Tch Software Reset */
  __I   uint8_t                        Reserved8[0x40];
  __I   uint32_t                       SPW_GROUP_IRQSTS1;  /**< Offset: 0xF00 (R/   32) SpW Group Interrupt status 1 */
  __I   uint32_t                       SPW_GROUP_IRQSTS2;  /**< Offset: 0xF04 (R/   32) SpW Group Interrupt status 2 */
  __I   uint8_t                        Reserved9[0x04];
  __I   uint32_t                       SPW_GROUP_EDACSTS;  /**< Offset: 0xF0C (R/   32) SpW Group Interrupt status */
} spw_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMRH71_SPW_COMPONENT_H_ */
