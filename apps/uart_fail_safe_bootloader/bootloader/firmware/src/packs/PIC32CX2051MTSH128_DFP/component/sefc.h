/*
 * Component description for SEFC
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

/* file generated from device description file (ATDF) version 2023-12-19T08:59:35Z */
#ifndef _PIC32CXMTSH_SEFC_COMPONENT_H_
#define _PIC32CXMTSH_SEFC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SEFC                                         */
/* ************************************************************************** */

/* -------- SEFC_EEFC_FMR : (SEFC Offset: 0x00) (R/W 32) SEFC Flash Mode Register -------- */
#define SEFC_EEFC_FMR_FRDY_Pos                _UINT32_(0)                                          /* (SEFC_EEFC_FMR) Flash Ready Interrupt Enable Position */
#define SEFC_EEFC_FMR_FRDY_Msk                (_UINT32_(0x1) << SEFC_EEFC_FMR_FRDY_Pos)            /* (SEFC_EEFC_FMR) Flash Ready Interrupt Enable Mask */
#define SEFC_EEFC_FMR_FRDY(value)             (SEFC_EEFC_FMR_FRDY_Msk & (_UINT32_(value) << SEFC_EEFC_FMR_FRDY_Pos)) /* Assigment of value for FRDY in the SEFC_EEFC_FMR register */
#define SEFC_EEFC_FMR_FWS_Pos                 _UINT32_(8)                                          /* (SEFC_EEFC_FMR) Flash Wait State Position */
#define SEFC_EEFC_FMR_FWS_Msk                 (_UINT32_(0xF) << SEFC_EEFC_FMR_FWS_Pos)             /* (SEFC_EEFC_FMR) Flash Wait State Mask */
#define SEFC_EEFC_FMR_FWS(value)              (SEFC_EEFC_FMR_FWS_Msk & (_UINT32_(value) << SEFC_EEFC_FMR_FWS_Pos)) /* Assigment of value for FWS in the SEFC_EEFC_FMR register */
#define SEFC_EEFC_FMR_SCOD_Pos                _UINT32_(16)                                         /* (SEFC_EEFC_FMR) Sequential Code Optimization Disable Position */
#define SEFC_EEFC_FMR_SCOD_Msk                (_UINT32_(0x1) << SEFC_EEFC_FMR_SCOD_Pos)            /* (SEFC_EEFC_FMR) Sequential Code Optimization Disable Mask */
#define SEFC_EEFC_FMR_SCOD(value)             (SEFC_EEFC_FMR_SCOD_Msk & (_UINT32_(value) << SEFC_EEFC_FMR_SCOD_Pos)) /* Assigment of value for SCOD in the SEFC_EEFC_FMR register */
#define SEFC_EEFC_FMR_CLOE_Pos                _UINT32_(26)                                         /* (SEFC_EEFC_FMR) Code Loop Optimization Enable Position */
#define SEFC_EEFC_FMR_CLOE_Msk                (_UINT32_(0x1) << SEFC_EEFC_FMR_CLOE_Pos)            /* (SEFC_EEFC_FMR) Code Loop Optimization Enable Mask */
#define SEFC_EEFC_FMR_CLOE(value)             (SEFC_EEFC_FMR_CLOE_Msk & (_UINT32_(value) << SEFC_EEFC_FMR_CLOE_Pos)) /* Assigment of value for CLOE in the SEFC_EEFC_FMR register */
#define SEFC_EEFC_FMR_ALWAYS1_Pos             _UINT32_(27)                                         /* (SEFC_EEFC_FMR) Always Written to One Position */
#define SEFC_EEFC_FMR_ALWAYS1_Msk             (_UINT32_(0x1) << SEFC_EEFC_FMR_ALWAYS1_Pos)         /* (SEFC_EEFC_FMR) Always Written to One Mask */
#define SEFC_EEFC_FMR_ALWAYS1(value)          (SEFC_EEFC_FMR_ALWAYS1_Msk & (_UINT32_(value) << SEFC_EEFC_FMR_ALWAYS1_Pos)) /* Assigment of value for ALWAYS1 in the SEFC_EEFC_FMR register */
#define SEFC_EEFC_FMR_Msk                     _UINT32_(0x0C010F01)                                 /* (SEFC_EEFC_FMR) Register Mask  */

#define SEFC_EEFC_FMR_ALWAYS_Pos              _UINT32_(27)                                         /* (SEFC_EEFC_FMR Position) Always Written to One */
#define SEFC_EEFC_FMR_ALWAYS_Msk              (_UINT32_(0x1) << SEFC_EEFC_FMR_ALWAYS_Pos)          /* (SEFC_EEFC_FMR Mask) ALWAYS */
#define SEFC_EEFC_FMR_ALWAYS(value)           (SEFC_EEFC_FMR_ALWAYS_Msk & (_UINT32_(value) << SEFC_EEFC_FMR_ALWAYS_Pos)) 

/* -------- SEFC_EEFC_FCR : (SEFC Offset: 0x04) ( /W 32) SEFC Flash Command Register -------- */
#define SEFC_EEFC_FCR_FCMD_Pos                _UINT32_(0)                                          /* (SEFC_EEFC_FCR) Flash Command Position */
#define SEFC_EEFC_FCR_FCMD_Msk                (_UINT32_(0xFF) << SEFC_EEFC_FCR_FCMD_Pos)           /* (SEFC_EEFC_FCR) Flash Command Mask */
#define SEFC_EEFC_FCR_FCMD(value)             (SEFC_EEFC_FCR_FCMD_Msk & (_UINT32_(value) << SEFC_EEFC_FCR_FCMD_Pos)) /* Assigment of value for FCMD in the SEFC_EEFC_FCR register */
#define   SEFC_EEFC_FCR_FCMD_GETD_Val         _UINT32_(0x0)                                        /* (SEFC_EEFC_FCR) Get Flash descriptor  */
#define   SEFC_EEFC_FCR_FCMD_WP_Val           _UINT32_(0x1)                                        /* (SEFC_EEFC_FCR) Write page  */
#define   SEFC_EEFC_FCR_FCMD_WPL_Val          _UINT32_(0x2)                                        /* (SEFC_EEFC_FCR) Write page and lock  */
#define   SEFC_EEFC_FCR_FCMD_EPA_Val          _UINT32_(0x7)                                        /* (SEFC_EEFC_FCR) Erase pages (8, 16, 32, 64)  */
#define   SEFC_EEFC_FCR_FCMD_SLB_Val          _UINT32_(0x8)                                        /* (SEFC_EEFC_FCR) Set lock bit  */
#define   SEFC_EEFC_FCR_FCMD_CLB_Val          _UINT32_(0x9)                                        /* (SEFC_EEFC_FCR) Clear lock bit  */
#define   SEFC_EEFC_FCR_FCMD_GLB_Val          _UINT32_(0xA)                                        /* (SEFC_EEFC_FCR) Get lock bit  */
#define   SEFC_EEFC_FCR_FCMD_SGPB_Val         _UINT32_(0xB)                                        /* (SEFC_EEFC_FCR) Set GPNVM bit  */
#define   SEFC_EEFC_FCR_FCMD_CGPB_Val         _UINT32_(0xC)                                        /* (SEFC_EEFC_FCR) Clear GPNVM bit  */
#define   SEFC_EEFC_FCR_FCMD_GGPB_Val         _UINT32_(0xD)                                        /* (SEFC_EEFC_FCR) Get GPNVM bit  */
#define   SEFC_EEFC_FCR_FCMD_STUI_Val         _UINT32_(0xE)                                        /* (SEFC_EEFC_FCR) Start read unique identifier  */
#define   SEFC_EEFC_FCR_FCMD_SPUI_Val         _UINT32_(0xF)                                        /* (SEFC_EEFC_FCR) Stop read unique identifier  */
#define   SEFC_EEFC_FCR_FCMD_GCALB_Val        _UINT32_(0x10)                                       /* (SEFC_EEFC_FCR) Get CALIB bit  */
#define   SEFC_EEFC_FCR_FCMD_ES_Val           _UINT32_(0x11)                                       /* (SEFC_EEFC_FCR) Erase sector  */
#define   SEFC_EEFC_FCR_FCMD_WUS_Val          _UINT32_(0x12)                                       /* (SEFC_EEFC_FCR) Write user signature  */
#define   SEFC_EEFC_FCR_FCMD_EUS_Val          _UINT32_(0x13)                                       /* (SEFC_EEFC_FCR) Erase user signature  */
#define   SEFC_EEFC_FCR_FCMD_STUS_Val         _UINT32_(0x14)                                       /* (SEFC_EEFC_FCR) Start read user signature  */
#define   SEFC_EEFC_FCR_FCMD_SPUS_Val         _UINT32_(0x15)                                       /* (SEFC_EEFC_FCR) Stop read user signature  */
#define   SEFC_EEFC_FCR_FCMD_SUSP_Val         _UINT32_(0x17)                                       /* (SEFC_EEFC_FCR) Suspend  */
#define   SEFC_EEFC_FCR_FCMD_RES_Val          _UINT32_(0x18)                                       /* (SEFC_EEFC_FCR) Resume  */
#define   SEFC_EEFC_FCR_FCMD_SCK_Val          _UINT32_(0x19)                                       /* (SEFC_EEFC_FCR) Send cryptographic key  */
#define SEFC_EEFC_FCR_FCMD_GETD               (SEFC_EEFC_FCR_FCMD_GETD_Val << SEFC_EEFC_FCR_FCMD_Pos) /* (SEFC_EEFC_FCR) Get Flash descriptor Position  */
#define SEFC_EEFC_FCR_FCMD_WP                 (SEFC_EEFC_FCR_FCMD_WP_Val << SEFC_EEFC_FCR_FCMD_Pos) /* (SEFC_EEFC_FCR) Write page Position  */
#define SEFC_EEFC_FCR_FCMD_WPL                (SEFC_EEFC_FCR_FCMD_WPL_Val << SEFC_EEFC_FCR_FCMD_Pos) /* (SEFC_EEFC_FCR) Write page and lock Position  */
#define SEFC_EEFC_FCR_FCMD_EPA                (SEFC_EEFC_FCR_FCMD_EPA_Val << SEFC_EEFC_FCR_FCMD_Pos) /* (SEFC_EEFC_FCR) Erase pages (8, 16, 32, 64) Position  */
#define SEFC_EEFC_FCR_FCMD_SLB                (SEFC_EEFC_FCR_FCMD_SLB_Val << SEFC_EEFC_FCR_FCMD_Pos) /* (SEFC_EEFC_FCR) Set lock bit Position  */
#define SEFC_EEFC_FCR_FCMD_CLB                (SEFC_EEFC_FCR_FCMD_CLB_Val << SEFC_EEFC_FCR_FCMD_Pos) /* (SEFC_EEFC_FCR) Clear lock bit Position  */
#define SEFC_EEFC_FCR_FCMD_GLB                (SEFC_EEFC_FCR_FCMD_GLB_Val << SEFC_EEFC_FCR_FCMD_Pos) /* (SEFC_EEFC_FCR) Get lock bit Position  */
#define SEFC_EEFC_FCR_FCMD_SGPB               (SEFC_EEFC_FCR_FCMD_SGPB_Val << SEFC_EEFC_FCR_FCMD_Pos) /* (SEFC_EEFC_FCR) Set GPNVM bit Position  */
#define SEFC_EEFC_FCR_FCMD_CGPB               (SEFC_EEFC_FCR_FCMD_CGPB_Val << SEFC_EEFC_FCR_FCMD_Pos) /* (SEFC_EEFC_FCR) Clear GPNVM bit Position  */
#define SEFC_EEFC_FCR_FCMD_GGPB               (SEFC_EEFC_FCR_FCMD_GGPB_Val << SEFC_EEFC_FCR_FCMD_Pos) /* (SEFC_EEFC_FCR) Get GPNVM bit Position  */
#define SEFC_EEFC_FCR_FCMD_STUI               (SEFC_EEFC_FCR_FCMD_STUI_Val << SEFC_EEFC_FCR_FCMD_Pos) /* (SEFC_EEFC_FCR) Start read unique identifier Position  */
#define SEFC_EEFC_FCR_FCMD_SPUI               (SEFC_EEFC_FCR_FCMD_SPUI_Val << SEFC_EEFC_FCR_FCMD_Pos) /* (SEFC_EEFC_FCR) Stop read unique identifier Position  */
#define SEFC_EEFC_FCR_FCMD_GCALB              (SEFC_EEFC_FCR_FCMD_GCALB_Val << SEFC_EEFC_FCR_FCMD_Pos) /* (SEFC_EEFC_FCR) Get CALIB bit Position  */
#define SEFC_EEFC_FCR_FCMD_ES                 (SEFC_EEFC_FCR_FCMD_ES_Val << SEFC_EEFC_FCR_FCMD_Pos) /* (SEFC_EEFC_FCR) Erase sector Position  */
#define SEFC_EEFC_FCR_FCMD_WUS                (SEFC_EEFC_FCR_FCMD_WUS_Val << SEFC_EEFC_FCR_FCMD_Pos) /* (SEFC_EEFC_FCR) Write user signature Position  */
#define SEFC_EEFC_FCR_FCMD_EUS                (SEFC_EEFC_FCR_FCMD_EUS_Val << SEFC_EEFC_FCR_FCMD_Pos) /* (SEFC_EEFC_FCR) Erase user signature Position  */
#define SEFC_EEFC_FCR_FCMD_STUS               (SEFC_EEFC_FCR_FCMD_STUS_Val << SEFC_EEFC_FCR_FCMD_Pos) /* (SEFC_EEFC_FCR) Start read user signature Position  */
#define SEFC_EEFC_FCR_FCMD_SPUS               (SEFC_EEFC_FCR_FCMD_SPUS_Val << SEFC_EEFC_FCR_FCMD_Pos) /* (SEFC_EEFC_FCR) Stop read user signature Position  */
#define SEFC_EEFC_FCR_FCMD_SUSP               (SEFC_EEFC_FCR_FCMD_SUSP_Val << SEFC_EEFC_FCR_FCMD_Pos) /* (SEFC_EEFC_FCR) Suspend Position  */
#define SEFC_EEFC_FCR_FCMD_RES                (SEFC_EEFC_FCR_FCMD_RES_Val << SEFC_EEFC_FCR_FCMD_Pos) /* (SEFC_EEFC_FCR) Resume Position  */
#define SEFC_EEFC_FCR_FCMD_SCK                (SEFC_EEFC_FCR_FCMD_SCK_Val << SEFC_EEFC_FCR_FCMD_Pos) /* (SEFC_EEFC_FCR) Send cryptographic key Position  */
#define SEFC_EEFC_FCR_FARG_Pos                _UINT32_(8)                                          /* (SEFC_EEFC_FCR) Flash Command Argument Position */
#define SEFC_EEFC_FCR_FARG_Msk                (_UINT32_(0xFFFF) << SEFC_EEFC_FCR_FARG_Pos)         /* (SEFC_EEFC_FCR) Flash Command Argument Mask */
#define SEFC_EEFC_FCR_FARG(value)             (SEFC_EEFC_FCR_FARG_Msk & (_UINT32_(value) << SEFC_EEFC_FCR_FARG_Pos)) /* Assigment of value for FARG in the SEFC_EEFC_FCR register */
#define SEFC_EEFC_FCR_FKEY_Pos                _UINT32_(24)                                         /* (SEFC_EEFC_FCR) Flash Writing Protection Key Position */
#define SEFC_EEFC_FCR_FKEY_Msk                (_UINT32_(0xFF) << SEFC_EEFC_FCR_FKEY_Pos)           /* (SEFC_EEFC_FCR) Flash Writing Protection Key Mask */
#define SEFC_EEFC_FCR_FKEY(value)             (SEFC_EEFC_FCR_FKEY_Msk & (_UINT32_(value) << SEFC_EEFC_FCR_FKEY_Pos)) /* Assigment of value for FKEY in the SEFC_EEFC_FCR register */
#define   SEFC_EEFC_FCR_FKEY_PASSWD_Val       _UINT32_(0x5A)                                       /* (SEFC_EEFC_FCR) The 0x5A value enables the command defined by the bits in the register. If the field is written with a different value, the write is not performed and no action is started.  */
#define SEFC_EEFC_FCR_FKEY_PASSWD             (SEFC_EEFC_FCR_FKEY_PASSWD_Val << SEFC_EEFC_FCR_FKEY_Pos) /* (SEFC_EEFC_FCR) The 0x5A value enables the command defined by the bits in the register. If the field is written with a different value, the write is not performed and no action is started. Position  */
#define SEFC_EEFC_FCR_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (SEFC_EEFC_FCR) Register Mask  */


/* -------- SEFC_EEFC_FSR : (SEFC Offset: 0x08) ( R/ 32) SEFC Flash Status Register -------- */
#define SEFC_EEFC_FSR_FRDY_Pos                _UINT32_(0)                                          /* (SEFC_EEFC_FSR) Flash Ready Status (cleared when Flash is busy) Position */
#define SEFC_EEFC_FSR_FRDY_Msk                (_UINT32_(0x1) << SEFC_EEFC_FSR_FRDY_Pos)            /* (SEFC_EEFC_FSR) Flash Ready Status (cleared when Flash is busy) Mask */
#define SEFC_EEFC_FSR_FRDY(value)             (SEFC_EEFC_FSR_FRDY_Msk & (_UINT32_(value) << SEFC_EEFC_FSR_FRDY_Pos)) /* Assigment of value for FRDY in the SEFC_EEFC_FSR register */
#define SEFC_EEFC_FSR_FCMDE_Pos               _UINT32_(1)                                          /* (SEFC_EEFC_FSR) Flash Command Error Status (cleared on read) Position */
#define SEFC_EEFC_FSR_FCMDE_Msk               (_UINT32_(0x1) << SEFC_EEFC_FSR_FCMDE_Pos)           /* (SEFC_EEFC_FSR) Flash Command Error Status (cleared on read) Mask */
#define SEFC_EEFC_FSR_FCMDE(value)            (SEFC_EEFC_FSR_FCMDE_Msk & (_UINT32_(value) << SEFC_EEFC_FSR_FCMDE_Pos)) /* Assigment of value for FCMDE in the SEFC_EEFC_FSR register */
#define SEFC_EEFC_FSR_FLOCKE_Pos              _UINT32_(2)                                          /* (SEFC_EEFC_FSR) Flash Lock Error Status (cleared on read or by writing EEFC_FCR) Position */
#define SEFC_EEFC_FSR_FLOCKE_Msk              (_UINT32_(0x1) << SEFC_EEFC_FSR_FLOCKE_Pos)          /* (SEFC_EEFC_FSR) Flash Lock Error Status (cleared on read or by writing EEFC_FCR) Mask */
#define SEFC_EEFC_FSR_FLOCKE(value)           (SEFC_EEFC_FSR_FLOCKE_Msk & (_UINT32_(value) << SEFC_EEFC_FSR_FLOCKE_Pos)) /* Assigment of value for FLOCKE in the SEFC_EEFC_FSR register */
#define SEFC_EEFC_FSR_FLERR_Pos               _UINT32_(3)                                          /* (SEFC_EEFC_FSR) Flash Error Status (cleared when a programming operation starts) Position */
#define SEFC_EEFC_FSR_FLERR_Msk               (_UINT32_(0x1) << SEFC_EEFC_FSR_FLERR_Pos)           /* (SEFC_EEFC_FSR) Flash Error Status (cleared when a programming operation starts) Mask */
#define SEFC_EEFC_FSR_FLERR(value)            (SEFC_EEFC_FSR_FLERR_Msk & (_UINT32_(value) << SEFC_EEFC_FSR_FLERR_Pos)) /* Assigment of value for FLERR in the SEFC_EEFC_FSR register */
#define SEFC_EEFC_FSR_WPERR_Pos               _UINT32_(4)                                          /* (SEFC_EEFC_FSR) Write Protection Error Status (cleared on read) Position */
#define SEFC_EEFC_FSR_WPERR_Msk               (_UINT32_(0x1) << SEFC_EEFC_FSR_WPERR_Pos)           /* (SEFC_EEFC_FSR) Write Protection Error Status (cleared on read) Mask */
#define SEFC_EEFC_FSR_WPERR(value)            (SEFC_EEFC_FSR_WPERR_Msk & (_UINT32_(value) << SEFC_EEFC_FSR_WPERR_Pos)) /* Assigment of value for WPERR in the SEFC_EEFC_FSR register */
#define SEFC_EEFC_FSR_FLSUSP_Pos              _UINT32_(5)                                          /* (SEFC_EEFC_FSR) Flash Suspended Status (cleared when resuming the programming operation) Position */
#define SEFC_EEFC_FSR_FLSUSP_Msk              (_UINT32_(0x1) << SEFC_EEFC_FSR_FLSUSP_Pos)          /* (SEFC_EEFC_FSR) Flash Suspended Status (cleared when resuming the programming operation) Mask */
#define SEFC_EEFC_FSR_FLSUSP(value)           (SEFC_EEFC_FSR_FLSUSP_Msk & (_UINT32_(value) << SEFC_EEFC_FSR_FLSUSP_Pos)) /* Assigment of value for FLSUSP in the SEFC_EEFC_FSR register */
#define SEFC_EEFC_FSR_SECCELSBD_Pos           _UINT32_(16)                                         /* (SEFC_EEFC_FSR) Single ECC Error on LSB Part of the Memory Flash Data Bus (cleared on read) Position */
#define SEFC_EEFC_FSR_SECCELSBD_Msk           (_UINT32_(0x1) << SEFC_EEFC_FSR_SECCELSBD_Pos)       /* (SEFC_EEFC_FSR) Single ECC Error on LSB Part of the Memory Flash Data Bus (cleared on read) Mask */
#define SEFC_EEFC_FSR_SECCELSBD(value)        (SEFC_EEFC_FSR_SECCELSBD_Msk & (_UINT32_(value) << SEFC_EEFC_FSR_SECCELSBD_Pos)) /* Assigment of value for SECCELSBD in the SEFC_EEFC_FSR register */
#define SEFC_EEFC_FSR_MECCELSBD_Pos           _UINT32_(17)                                         /* (SEFC_EEFC_FSR) Multiple ECC Error on LSB Part of the Memory Flash Data Bus (cleared on read) Position */
#define SEFC_EEFC_FSR_MECCELSBD_Msk           (_UINT32_(0x1) << SEFC_EEFC_FSR_MECCELSBD_Pos)       /* (SEFC_EEFC_FSR) Multiple ECC Error on LSB Part of the Memory Flash Data Bus (cleared on read) Mask */
#define SEFC_EEFC_FSR_MECCELSBD(value)        (SEFC_EEFC_FSR_MECCELSBD_Msk & (_UINT32_(value) << SEFC_EEFC_FSR_MECCELSBD_Pos)) /* Assigment of value for MECCELSBD in the SEFC_EEFC_FSR register */
#define SEFC_EEFC_FSR_SECCEMSBD_Pos           _UINT32_(18)                                         /* (SEFC_EEFC_FSR) Single ECC Error on MSB Part of the Memory Flash Data Bus (cleared on read) Position */
#define SEFC_EEFC_FSR_SECCEMSBD_Msk           (_UINT32_(0x1) << SEFC_EEFC_FSR_SECCEMSBD_Pos)       /* (SEFC_EEFC_FSR) Single ECC Error on MSB Part of the Memory Flash Data Bus (cleared on read) Mask */
#define SEFC_EEFC_FSR_SECCEMSBD(value)        (SEFC_EEFC_FSR_SECCEMSBD_Msk & (_UINT32_(value) << SEFC_EEFC_FSR_SECCEMSBD_Pos)) /* Assigment of value for SECCEMSBD in the SEFC_EEFC_FSR register */
#define SEFC_EEFC_FSR_MECCEMSBD_Pos           _UINT32_(19)                                         /* (SEFC_EEFC_FSR) Multiple ECC Error on MSB Part of the Memory Flash Data Bus (cleared on read) Position */
#define SEFC_EEFC_FSR_MECCEMSBD_Msk           (_UINT32_(0x1) << SEFC_EEFC_FSR_MECCEMSBD_Pos)       /* (SEFC_EEFC_FSR) Multiple ECC Error on MSB Part of the Memory Flash Data Bus (cleared on read) Mask */
#define SEFC_EEFC_FSR_MECCEMSBD(value)        (SEFC_EEFC_FSR_MECCEMSBD_Msk & (_UINT32_(value) << SEFC_EEFC_FSR_MECCEMSBD_Pos)) /* Assigment of value for MECCEMSBD in the SEFC_EEFC_FSR register */
#define SEFC_EEFC_FSR_SECCELSBL_Pos           _UINT32_(20)                                         /* (SEFC_EEFC_FSR) Single ECC Error on LSB Part of the Memory Lock Bits Position */
#define SEFC_EEFC_FSR_SECCELSBL_Msk           (_UINT32_(0x1) << SEFC_EEFC_FSR_SECCELSBL_Pos)       /* (SEFC_EEFC_FSR) Single ECC Error on LSB Part of the Memory Lock Bits Mask */
#define SEFC_EEFC_FSR_SECCELSBL(value)        (SEFC_EEFC_FSR_SECCELSBL_Msk & (_UINT32_(value) << SEFC_EEFC_FSR_SECCELSBL_Pos)) /* Assigment of value for SECCELSBL in the SEFC_EEFC_FSR register */
#define SEFC_EEFC_FSR_MECCELSBL_Pos           _UINT32_(21)                                         /* (SEFC_EEFC_FSR) Multiple ECC Error on LSB Part of the Memory Lock Bits Position */
#define SEFC_EEFC_FSR_MECCELSBL_Msk           (_UINT32_(0x1) << SEFC_EEFC_FSR_MECCELSBL_Pos)       /* (SEFC_EEFC_FSR) Multiple ECC Error on LSB Part of the Memory Lock Bits Mask */
#define SEFC_EEFC_FSR_MECCELSBL(value)        (SEFC_EEFC_FSR_MECCELSBL_Msk & (_UINT32_(value) << SEFC_EEFC_FSR_MECCELSBL_Pos)) /* Assigment of value for MECCELSBL in the SEFC_EEFC_FSR register */
#define SEFC_EEFC_FSR_SECCEMSBL_Pos           _UINT32_(22)                                         /* (SEFC_EEFC_FSR) Single ECC Error on MSB Part of the Memory Lock Bits Position */
#define SEFC_EEFC_FSR_SECCEMSBL_Msk           (_UINT32_(0x1) << SEFC_EEFC_FSR_SECCEMSBL_Pos)       /* (SEFC_EEFC_FSR) Single ECC Error on MSB Part of the Memory Lock Bits Mask */
#define SEFC_EEFC_FSR_SECCEMSBL(value)        (SEFC_EEFC_FSR_SECCEMSBL_Msk & (_UINT32_(value) << SEFC_EEFC_FSR_SECCEMSBL_Pos)) /* Assigment of value for SECCEMSBL in the SEFC_EEFC_FSR register */
#define SEFC_EEFC_FSR_MECCEMSBL_Pos           _UINT32_(23)                                         /* (SEFC_EEFC_FSR) Multiple ECC Error on MSB Part of the Memory Lock Bits Position */
#define SEFC_EEFC_FSR_MECCEMSBL_Msk           (_UINT32_(0x1) << SEFC_EEFC_FSR_MECCEMSBL_Pos)       /* (SEFC_EEFC_FSR) Multiple ECC Error on MSB Part of the Memory Lock Bits Mask */
#define SEFC_EEFC_FSR_MECCEMSBL(value)        (SEFC_EEFC_FSR_MECCEMSBL_Msk & (_UINT32_(value) << SEFC_EEFC_FSR_MECCEMSBL_Pos)) /* Assigment of value for MECCEMSBL in the SEFC_EEFC_FSR register */
#define SEFC_EEFC_FSR_Msk                     _UINT32_(0x00FF003F)                                 /* (SEFC_EEFC_FSR) Register Mask  */


/* -------- SEFC_EEFC_FRR : (SEFC Offset: 0x0C) ( R/ 32) SEFC Flash Result Register -------- */
#define SEFC_EEFC_FRR_FVALUE_Pos              _UINT32_(0)                                          /* (SEFC_EEFC_FRR) Flash Result Value Position */
#define SEFC_EEFC_FRR_FVALUE_Msk              (_UINT32_(0xFFFFFFFF) << SEFC_EEFC_FRR_FVALUE_Pos)   /* (SEFC_EEFC_FRR) Flash Result Value Mask */
#define SEFC_EEFC_FRR_FVALUE(value)           (SEFC_EEFC_FRR_FVALUE_Msk & (_UINT32_(value) << SEFC_EEFC_FRR_FVALUE_Pos)) /* Assigment of value for FVALUE in the SEFC_EEFC_FRR register */
#define SEFC_EEFC_FRR_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (SEFC_EEFC_FRR) Register Mask  */


/* -------- SEFC_EEFC_USR : (SEFC Offset: 0x10) (R/W 32) SEFC User Signature Rights Register -------- */
#define SEFC_EEFC_USR_RDENUSB0_Pos            _UINT32_(0)                                          /* (SEFC_EEFC_USR) Read Enable for User Signature Block 0 Position */
#define SEFC_EEFC_USR_RDENUSB0_Msk            (_UINT32_(0x1) << SEFC_EEFC_USR_RDENUSB0_Pos)        /* (SEFC_EEFC_USR) Read Enable for User Signature Block 0 Mask */
#define SEFC_EEFC_USR_RDENUSB0(value)         (SEFC_EEFC_USR_RDENUSB0_Msk & (_UINT32_(value) << SEFC_EEFC_USR_RDENUSB0_Pos)) /* Assigment of value for RDENUSB0 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_RDENUSB1_Pos            _UINT32_(1)                                          /* (SEFC_EEFC_USR) Read Enable for User Signature Block 1 Position */
#define SEFC_EEFC_USR_RDENUSB1_Msk            (_UINT32_(0x1) << SEFC_EEFC_USR_RDENUSB1_Pos)        /* (SEFC_EEFC_USR) Read Enable for User Signature Block 1 Mask */
#define SEFC_EEFC_USR_RDENUSB1(value)         (SEFC_EEFC_USR_RDENUSB1_Msk & (_UINT32_(value) << SEFC_EEFC_USR_RDENUSB1_Pos)) /* Assigment of value for RDENUSB1 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_RDENUSB2_Pos            _UINT32_(2)                                          /* (SEFC_EEFC_USR) Read Enable for User Signature Block 2 Position */
#define SEFC_EEFC_USR_RDENUSB2_Msk            (_UINT32_(0x1) << SEFC_EEFC_USR_RDENUSB2_Pos)        /* (SEFC_EEFC_USR) Read Enable for User Signature Block 2 Mask */
#define SEFC_EEFC_USR_RDENUSB2(value)         (SEFC_EEFC_USR_RDENUSB2_Msk & (_UINT32_(value) << SEFC_EEFC_USR_RDENUSB2_Pos)) /* Assigment of value for RDENUSB2 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_RDENUSB3_Pos            _UINT32_(3)                                          /* (SEFC_EEFC_USR) Read Enable for User Signature Block 3 Position */
#define SEFC_EEFC_USR_RDENUSB3_Msk            (_UINT32_(0x1) << SEFC_EEFC_USR_RDENUSB3_Pos)        /* (SEFC_EEFC_USR) Read Enable for User Signature Block 3 Mask */
#define SEFC_EEFC_USR_RDENUSB3(value)         (SEFC_EEFC_USR_RDENUSB3_Msk & (_UINT32_(value) << SEFC_EEFC_USR_RDENUSB3_Pos)) /* Assigment of value for RDENUSB3 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_RDENUSB4_Pos            _UINT32_(4)                                          /* (SEFC_EEFC_USR) Read Enable for User Signature Block 4 Position */
#define SEFC_EEFC_USR_RDENUSB4_Msk            (_UINT32_(0x1) << SEFC_EEFC_USR_RDENUSB4_Pos)        /* (SEFC_EEFC_USR) Read Enable for User Signature Block 4 Mask */
#define SEFC_EEFC_USR_RDENUSB4(value)         (SEFC_EEFC_USR_RDENUSB4_Msk & (_UINT32_(value) << SEFC_EEFC_USR_RDENUSB4_Pos)) /* Assigment of value for RDENUSB4 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_RDENUSB5_Pos            _UINT32_(5)                                          /* (SEFC_EEFC_USR) Read Enable for User Signature Block 5 Position */
#define SEFC_EEFC_USR_RDENUSB5_Msk            (_UINT32_(0x1) << SEFC_EEFC_USR_RDENUSB5_Pos)        /* (SEFC_EEFC_USR) Read Enable for User Signature Block 5 Mask */
#define SEFC_EEFC_USR_RDENUSB5(value)         (SEFC_EEFC_USR_RDENUSB5_Msk & (_UINT32_(value) << SEFC_EEFC_USR_RDENUSB5_Pos)) /* Assigment of value for RDENUSB5 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_RDENUSB6_Pos            _UINT32_(6)                                          /* (SEFC_EEFC_USR) Read Enable for User Signature Block 6 Position */
#define SEFC_EEFC_USR_RDENUSB6_Msk            (_UINT32_(0x1) << SEFC_EEFC_USR_RDENUSB6_Pos)        /* (SEFC_EEFC_USR) Read Enable for User Signature Block 6 Mask */
#define SEFC_EEFC_USR_RDENUSB6(value)         (SEFC_EEFC_USR_RDENUSB6_Msk & (_UINT32_(value) << SEFC_EEFC_USR_RDENUSB6_Pos)) /* Assigment of value for RDENUSB6 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_RDENUSB7_Pos            _UINT32_(7)                                          /* (SEFC_EEFC_USR) Read Enable for User Signature Block 7 Position */
#define SEFC_EEFC_USR_RDENUSB7_Msk            (_UINT32_(0x1) << SEFC_EEFC_USR_RDENUSB7_Pos)        /* (SEFC_EEFC_USR) Read Enable for User Signature Block 7 Mask */
#define SEFC_EEFC_USR_RDENUSB7(value)         (SEFC_EEFC_USR_RDENUSB7_Msk & (_UINT32_(value) << SEFC_EEFC_USR_RDENUSB7_Pos)) /* Assigment of value for RDENUSB7 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_WRENUSB0_Pos            _UINT32_(8)                                          /* (SEFC_EEFC_USR) Write Enable for User Signature Block 0 Position */
#define SEFC_EEFC_USR_WRENUSB0_Msk            (_UINT32_(0x1) << SEFC_EEFC_USR_WRENUSB0_Pos)        /* (SEFC_EEFC_USR) Write Enable for User Signature Block 0 Mask */
#define SEFC_EEFC_USR_WRENUSB0(value)         (SEFC_EEFC_USR_WRENUSB0_Msk & (_UINT32_(value) << SEFC_EEFC_USR_WRENUSB0_Pos)) /* Assigment of value for WRENUSB0 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_WRENUSB1_Pos            _UINT32_(9)                                          /* (SEFC_EEFC_USR) Write Enable for User Signature Block 1 Position */
#define SEFC_EEFC_USR_WRENUSB1_Msk            (_UINT32_(0x1) << SEFC_EEFC_USR_WRENUSB1_Pos)        /* (SEFC_EEFC_USR) Write Enable for User Signature Block 1 Mask */
#define SEFC_EEFC_USR_WRENUSB1(value)         (SEFC_EEFC_USR_WRENUSB1_Msk & (_UINT32_(value) << SEFC_EEFC_USR_WRENUSB1_Pos)) /* Assigment of value for WRENUSB1 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_WRENUSB2_Pos            _UINT32_(10)                                         /* (SEFC_EEFC_USR) Write Enable for User Signature Block 2 Position */
#define SEFC_EEFC_USR_WRENUSB2_Msk            (_UINT32_(0x1) << SEFC_EEFC_USR_WRENUSB2_Pos)        /* (SEFC_EEFC_USR) Write Enable for User Signature Block 2 Mask */
#define SEFC_EEFC_USR_WRENUSB2(value)         (SEFC_EEFC_USR_WRENUSB2_Msk & (_UINT32_(value) << SEFC_EEFC_USR_WRENUSB2_Pos)) /* Assigment of value for WRENUSB2 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_WRENUSB3_Pos            _UINT32_(11)                                         /* (SEFC_EEFC_USR) Write Enable for User Signature Block 3 Position */
#define SEFC_EEFC_USR_WRENUSB3_Msk            (_UINT32_(0x1) << SEFC_EEFC_USR_WRENUSB3_Pos)        /* (SEFC_EEFC_USR) Write Enable for User Signature Block 3 Mask */
#define SEFC_EEFC_USR_WRENUSB3(value)         (SEFC_EEFC_USR_WRENUSB3_Msk & (_UINT32_(value) << SEFC_EEFC_USR_WRENUSB3_Pos)) /* Assigment of value for WRENUSB3 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_WRENUSB4_Pos            _UINT32_(12)                                         /* (SEFC_EEFC_USR) Write Enable for User Signature Block 4 Position */
#define SEFC_EEFC_USR_WRENUSB4_Msk            (_UINT32_(0x1) << SEFC_EEFC_USR_WRENUSB4_Pos)        /* (SEFC_EEFC_USR) Write Enable for User Signature Block 4 Mask */
#define SEFC_EEFC_USR_WRENUSB4(value)         (SEFC_EEFC_USR_WRENUSB4_Msk & (_UINT32_(value) << SEFC_EEFC_USR_WRENUSB4_Pos)) /* Assigment of value for WRENUSB4 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_WRENUSB5_Pos            _UINT32_(13)                                         /* (SEFC_EEFC_USR) Write Enable for User Signature Block 5 Position */
#define SEFC_EEFC_USR_WRENUSB5_Msk            (_UINT32_(0x1) << SEFC_EEFC_USR_WRENUSB5_Pos)        /* (SEFC_EEFC_USR) Write Enable for User Signature Block 5 Mask */
#define SEFC_EEFC_USR_WRENUSB5(value)         (SEFC_EEFC_USR_WRENUSB5_Msk & (_UINT32_(value) << SEFC_EEFC_USR_WRENUSB5_Pos)) /* Assigment of value for WRENUSB5 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_WRENUSB6_Pos            _UINT32_(14)                                         /* (SEFC_EEFC_USR) Write Enable for User Signature Block 6 Position */
#define SEFC_EEFC_USR_WRENUSB6_Msk            (_UINT32_(0x1) << SEFC_EEFC_USR_WRENUSB6_Pos)        /* (SEFC_EEFC_USR) Write Enable for User Signature Block 6 Mask */
#define SEFC_EEFC_USR_WRENUSB6(value)         (SEFC_EEFC_USR_WRENUSB6_Msk & (_UINT32_(value) << SEFC_EEFC_USR_WRENUSB6_Pos)) /* Assigment of value for WRENUSB6 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_WRENUSB7_Pos            _UINT32_(15)                                         /* (SEFC_EEFC_USR) Write Enable for User Signature Block 7 Position */
#define SEFC_EEFC_USR_WRENUSB7_Msk            (_UINT32_(0x1) << SEFC_EEFC_USR_WRENUSB7_Pos)        /* (SEFC_EEFC_USR) Write Enable for User Signature Block 7 Mask */
#define SEFC_EEFC_USR_WRENUSB7(value)         (SEFC_EEFC_USR_WRENUSB7_Msk & (_UINT32_(value) << SEFC_EEFC_USR_WRENUSB7_Pos)) /* Assigment of value for WRENUSB7 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_PRIVUSB0_Pos            _UINT32_(16)                                         /* (SEFC_EEFC_USR) Privileged Access for User Signature Block 0 Position */
#define SEFC_EEFC_USR_PRIVUSB0_Msk            (_UINT32_(0x1) << SEFC_EEFC_USR_PRIVUSB0_Pos)        /* (SEFC_EEFC_USR) Privileged Access for User Signature Block 0 Mask */
#define SEFC_EEFC_USR_PRIVUSB0(value)         (SEFC_EEFC_USR_PRIVUSB0_Msk & (_UINT32_(value) << SEFC_EEFC_USR_PRIVUSB0_Pos)) /* Assigment of value for PRIVUSB0 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_PRIVUSB1_Pos            _UINT32_(17)                                         /* (SEFC_EEFC_USR) Privileged Access for User Signature Block 1 Position */
#define SEFC_EEFC_USR_PRIVUSB1_Msk            (_UINT32_(0x1) << SEFC_EEFC_USR_PRIVUSB1_Pos)        /* (SEFC_EEFC_USR) Privileged Access for User Signature Block 1 Mask */
#define SEFC_EEFC_USR_PRIVUSB1(value)         (SEFC_EEFC_USR_PRIVUSB1_Msk & (_UINT32_(value) << SEFC_EEFC_USR_PRIVUSB1_Pos)) /* Assigment of value for PRIVUSB1 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_PRIVUSB2_Pos            _UINT32_(18)                                         /* (SEFC_EEFC_USR) Privileged Access for User Signature Block 2 Position */
#define SEFC_EEFC_USR_PRIVUSB2_Msk            (_UINT32_(0x1) << SEFC_EEFC_USR_PRIVUSB2_Pos)        /* (SEFC_EEFC_USR) Privileged Access for User Signature Block 2 Mask */
#define SEFC_EEFC_USR_PRIVUSB2(value)         (SEFC_EEFC_USR_PRIVUSB2_Msk & (_UINT32_(value) << SEFC_EEFC_USR_PRIVUSB2_Pos)) /* Assigment of value for PRIVUSB2 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_PRIVUSB3_Pos            _UINT32_(19)                                         /* (SEFC_EEFC_USR) Privileged Access for User Signature Block 3 Position */
#define SEFC_EEFC_USR_PRIVUSB3_Msk            (_UINT32_(0x1) << SEFC_EEFC_USR_PRIVUSB3_Pos)        /* (SEFC_EEFC_USR) Privileged Access for User Signature Block 3 Mask */
#define SEFC_EEFC_USR_PRIVUSB3(value)         (SEFC_EEFC_USR_PRIVUSB3_Msk & (_UINT32_(value) << SEFC_EEFC_USR_PRIVUSB3_Pos)) /* Assigment of value for PRIVUSB3 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_PRIVUSB4_Pos            _UINT32_(20)                                         /* (SEFC_EEFC_USR) Privileged Access for User Signature Block 4 Position */
#define SEFC_EEFC_USR_PRIVUSB4_Msk            (_UINT32_(0x1) << SEFC_EEFC_USR_PRIVUSB4_Pos)        /* (SEFC_EEFC_USR) Privileged Access for User Signature Block 4 Mask */
#define SEFC_EEFC_USR_PRIVUSB4(value)         (SEFC_EEFC_USR_PRIVUSB4_Msk & (_UINT32_(value) << SEFC_EEFC_USR_PRIVUSB4_Pos)) /* Assigment of value for PRIVUSB4 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_PRIVUSB5_Pos            _UINT32_(21)                                         /* (SEFC_EEFC_USR) Privileged Access for User Signature Block 5 Position */
#define SEFC_EEFC_USR_PRIVUSB5_Msk            (_UINT32_(0x1) << SEFC_EEFC_USR_PRIVUSB5_Pos)        /* (SEFC_EEFC_USR) Privileged Access for User Signature Block 5 Mask */
#define SEFC_EEFC_USR_PRIVUSB5(value)         (SEFC_EEFC_USR_PRIVUSB5_Msk & (_UINT32_(value) << SEFC_EEFC_USR_PRIVUSB5_Pos)) /* Assigment of value for PRIVUSB5 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_PRIVUSB6_Pos            _UINT32_(22)                                         /* (SEFC_EEFC_USR) Privileged Access for User Signature Block 6 Position */
#define SEFC_EEFC_USR_PRIVUSB6_Msk            (_UINT32_(0x1) << SEFC_EEFC_USR_PRIVUSB6_Pos)        /* (SEFC_EEFC_USR) Privileged Access for User Signature Block 6 Mask */
#define SEFC_EEFC_USR_PRIVUSB6(value)         (SEFC_EEFC_USR_PRIVUSB6_Msk & (_UINT32_(value) << SEFC_EEFC_USR_PRIVUSB6_Pos)) /* Assigment of value for PRIVUSB6 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_PRIVUSB7_Pos            _UINT32_(23)                                         /* (SEFC_EEFC_USR) Privileged Access for User Signature Block 7 Position */
#define SEFC_EEFC_USR_PRIVUSB7_Msk            (_UINT32_(0x1) << SEFC_EEFC_USR_PRIVUSB7_Pos)        /* (SEFC_EEFC_USR) Privileged Access for User Signature Block 7 Mask */
#define SEFC_EEFC_USR_PRIVUSB7(value)         (SEFC_EEFC_USR_PRIVUSB7_Msk & (_UINT32_(value) << SEFC_EEFC_USR_PRIVUSB7_Pos)) /* Assigment of value for PRIVUSB7 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_LOCKUSRB0_Pos           _UINT32_(24)                                         /* (SEFC_EEFC_USR) Lock User Signature Rights for User Signature Block 0 Position */
#define SEFC_EEFC_USR_LOCKUSRB0_Msk           (_UINT32_(0x1) << SEFC_EEFC_USR_LOCKUSRB0_Pos)       /* (SEFC_EEFC_USR) Lock User Signature Rights for User Signature Block 0 Mask */
#define SEFC_EEFC_USR_LOCKUSRB0(value)        (SEFC_EEFC_USR_LOCKUSRB0_Msk & (_UINT32_(value) << SEFC_EEFC_USR_LOCKUSRB0_Pos)) /* Assigment of value for LOCKUSRB0 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_LOCKUSRB1_Pos           _UINT32_(25)                                         /* (SEFC_EEFC_USR) Lock User Signature Rights for User Signature Block 1 Position */
#define SEFC_EEFC_USR_LOCKUSRB1_Msk           (_UINT32_(0x1) << SEFC_EEFC_USR_LOCKUSRB1_Pos)       /* (SEFC_EEFC_USR) Lock User Signature Rights for User Signature Block 1 Mask */
#define SEFC_EEFC_USR_LOCKUSRB1(value)        (SEFC_EEFC_USR_LOCKUSRB1_Msk & (_UINT32_(value) << SEFC_EEFC_USR_LOCKUSRB1_Pos)) /* Assigment of value for LOCKUSRB1 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_LOCKUSRB2_Pos           _UINT32_(26)                                         /* (SEFC_EEFC_USR) Lock User Signature Rights for User Signature Block 2 Position */
#define SEFC_EEFC_USR_LOCKUSRB2_Msk           (_UINT32_(0x1) << SEFC_EEFC_USR_LOCKUSRB2_Pos)       /* (SEFC_EEFC_USR) Lock User Signature Rights for User Signature Block 2 Mask */
#define SEFC_EEFC_USR_LOCKUSRB2(value)        (SEFC_EEFC_USR_LOCKUSRB2_Msk & (_UINT32_(value) << SEFC_EEFC_USR_LOCKUSRB2_Pos)) /* Assigment of value for LOCKUSRB2 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_LOCKUSRB3_Pos           _UINT32_(27)                                         /* (SEFC_EEFC_USR) Lock User Signature Rights for User Signature Block 3 Position */
#define SEFC_EEFC_USR_LOCKUSRB3_Msk           (_UINT32_(0x1) << SEFC_EEFC_USR_LOCKUSRB3_Pos)       /* (SEFC_EEFC_USR) Lock User Signature Rights for User Signature Block 3 Mask */
#define SEFC_EEFC_USR_LOCKUSRB3(value)        (SEFC_EEFC_USR_LOCKUSRB3_Msk & (_UINT32_(value) << SEFC_EEFC_USR_LOCKUSRB3_Pos)) /* Assigment of value for LOCKUSRB3 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_LOCKUSRB4_Pos           _UINT32_(28)                                         /* (SEFC_EEFC_USR) Lock User Signature Rights for User Signature Block 4 Position */
#define SEFC_EEFC_USR_LOCKUSRB4_Msk           (_UINT32_(0x1) << SEFC_EEFC_USR_LOCKUSRB4_Pos)       /* (SEFC_EEFC_USR) Lock User Signature Rights for User Signature Block 4 Mask */
#define SEFC_EEFC_USR_LOCKUSRB4(value)        (SEFC_EEFC_USR_LOCKUSRB4_Msk & (_UINT32_(value) << SEFC_EEFC_USR_LOCKUSRB4_Pos)) /* Assigment of value for LOCKUSRB4 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_LOCKUSRB5_Pos           _UINT32_(29)                                         /* (SEFC_EEFC_USR) Lock User Signature Rights for User Signature Block 5 Position */
#define SEFC_EEFC_USR_LOCKUSRB5_Msk           (_UINT32_(0x1) << SEFC_EEFC_USR_LOCKUSRB5_Pos)       /* (SEFC_EEFC_USR) Lock User Signature Rights for User Signature Block 5 Mask */
#define SEFC_EEFC_USR_LOCKUSRB5(value)        (SEFC_EEFC_USR_LOCKUSRB5_Msk & (_UINT32_(value) << SEFC_EEFC_USR_LOCKUSRB5_Pos)) /* Assigment of value for LOCKUSRB5 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_LOCKUSRB6_Pos           _UINT32_(30)                                         /* (SEFC_EEFC_USR) Lock User Signature Rights for User Signature Block 6 Position */
#define SEFC_EEFC_USR_LOCKUSRB6_Msk           (_UINT32_(0x1) << SEFC_EEFC_USR_LOCKUSRB6_Pos)       /* (SEFC_EEFC_USR) Lock User Signature Rights for User Signature Block 6 Mask */
#define SEFC_EEFC_USR_LOCKUSRB6(value)        (SEFC_EEFC_USR_LOCKUSRB6_Msk & (_UINT32_(value) << SEFC_EEFC_USR_LOCKUSRB6_Pos)) /* Assigment of value for LOCKUSRB6 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_LOCKUSRB7_Pos           _UINT32_(31)                                         /* (SEFC_EEFC_USR) Lock User Signature Rights for User Signature Block 7 Position */
#define SEFC_EEFC_USR_LOCKUSRB7_Msk           (_UINT32_(0x1) << SEFC_EEFC_USR_LOCKUSRB7_Pos)       /* (SEFC_EEFC_USR) Lock User Signature Rights for User Signature Block 7 Mask */
#define SEFC_EEFC_USR_LOCKUSRB7(value)        (SEFC_EEFC_USR_LOCKUSRB7_Msk & (_UINT32_(value) << SEFC_EEFC_USR_LOCKUSRB7_Pos)) /* Assigment of value for LOCKUSRB7 in the SEFC_EEFC_USR register */
#define SEFC_EEFC_USR_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (SEFC_EEFC_USR) Register Mask  */

#define SEFC_EEFC_USR_RDENUSB_Pos             _UINT32_(0)                                          /* (SEFC_EEFC_USR Position) Read Enable for User Signature Block x */
#define SEFC_EEFC_USR_RDENUSB_Msk             (_UINT32_(0xFF) << SEFC_EEFC_USR_RDENUSB_Pos)        /* (SEFC_EEFC_USR Mask) RDENUSB */
#define SEFC_EEFC_USR_RDENUSB(value)          (SEFC_EEFC_USR_RDENUSB_Msk & (_UINT32_(value) << SEFC_EEFC_USR_RDENUSB_Pos)) 
#define SEFC_EEFC_USR_WRENUSB_Pos             _UINT32_(8)                                          /* (SEFC_EEFC_USR Position) Write Enable for User Signature Block x */
#define SEFC_EEFC_USR_WRENUSB_Msk             (_UINT32_(0xFF) << SEFC_EEFC_USR_WRENUSB_Pos)        /* (SEFC_EEFC_USR Mask) WRENUSB */
#define SEFC_EEFC_USR_WRENUSB(value)          (SEFC_EEFC_USR_WRENUSB_Msk & (_UINT32_(value) << SEFC_EEFC_USR_WRENUSB_Pos)) 
#define SEFC_EEFC_USR_PRIVUSB_Pos             _UINT32_(16)                                         /* (SEFC_EEFC_USR Position) Privileged Access for User Signature Block x */
#define SEFC_EEFC_USR_PRIVUSB_Msk             (_UINT32_(0xFF) << SEFC_EEFC_USR_PRIVUSB_Pos)        /* (SEFC_EEFC_USR Mask) PRIVUSB */
#define SEFC_EEFC_USR_PRIVUSB(value)          (SEFC_EEFC_USR_PRIVUSB_Msk & (_UINT32_(value) << SEFC_EEFC_USR_PRIVUSB_Pos)) 
#define SEFC_EEFC_USR_LOCKUSRB_Pos            _UINT32_(24)                                         /* (SEFC_EEFC_USR Position) Lock User Signature Rights for User Signature Block 7 */
#define SEFC_EEFC_USR_LOCKUSRB_Msk            (_UINT32_(0xFF) << SEFC_EEFC_USR_LOCKUSRB_Pos)       /* (SEFC_EEFC_USR Mask) LOCKUSRB */
#define SEFC_EEFC_USR_LOCKUSRB(value)         (SEFC_EEFC_USR_LOCKUSRB_Msk & (_UINT32_(value) << SEFC_EEFC_USR_LOCKUSRB_Pos)) 

/* -------- SEFC_EEFC_KBLR : (SEFC Offset: 0x14) (R/W 32) SEFC Key Bus Lock Register -------- */
#define SEFC_EEFC_KBLR_KBTLUSB0_Pos           _UINT32_(0)                                          /* (SEFC_EEFC_KBLR) Key Bus Transfer Lock from User Signature Block 0 Position */
#define SEFC_EEFC_KBLR_KBTLUSB0_Msk           (_UINT32_(0x1) << SEFC_EEFC_KBLR_KBTLUSB0_Pos)       /* (SEFC_EEFC_KBLR) Key Bus Transfer Lock from User Signature Block 0 Mask */
#define SEFC_EEFC_KBLR_KBTLUSB0(value)        (SEFC_EEFC_KBLR_KBTLUSB0_Msk & (_UINT32_(value) << SEFC_EEFC_KBLR_KBTLUSB0_Pos)) /* Assigment of value for KBTLUSB0 in the SEFC_EEFC_KBLR register */
#define SEFC_EEFC_KBLR_KBTLUSB1_Pos           _UINT32_(1)                                          /* (SEFC_EEFC_KBLR) Key Bus Transfer Lock from User Signature Block 1 Position */
#define SEFC_EEFC_KBLR_KBTLUSB1_Msk           (_UINT32_(0x1) << SEFC_EEFC_KBLR_KBTLUSB1_Pos)       /* (SEFC_EEFC_KBLR) Key Bus Transfer Lock from User Signature Block 1 Mask */
#define SEFC_EEFC_KBLR_KBTLUSB1(value)        (SEFC_EEFC_KBLR_KBTLUSB1_Msk & (_UINT32_(value) << SEFC_EEFC_KBLR_KBTLUSB1_Pos)) /* Assigment of value for KBTLUSB1 in the SEFC_EEFC_KBLR register */
#define SEFC_EEFC_KBLR_KBTLUSB2_Pos           _UINT32_(2)                                          /* (SEFC_EEFC_KBLR) Key Bus Transfer Lock from User Signature Block 2 Position */
#define SEFC_EEFC_KBLR_KBTLUSB2_Msk           (_UINT32_(0x1) << SEFC_EEFC_KBLR_KBTLUSB2_Pos)       /* (SEFC_EEFC_KBLR) Key Bus Transfer Lock from User Signature Block 2 Mask */
#define SEFC_EEFC_KBLR_KBTLUSB2(value)        (SEFC_EEFC_KBLR_KBTLUSB2_Msk & (_UINT32_(value) << SEFC_EEFC_KBLR_KBTLUSB2_Pos)) /* Assigment of value for KBTLUSB2 in the SEFC_EEFC_KBLR register */
#define SEFC_EEFC_KBLR_KBTLUSB3_Pos           _UINT32_(3)                                          /* (SEFC_EEFC_KBLR) Key Bus Transfer Lock from User Signature Block 3 Position */
#define SEFC_EEFC_KBLR_KBTLUSB3_Msk           (_UINT32_(0x1) << SEFC_EEFC_KBLR_KBTLUSB3_Pos)       /* (SEFC_EEFC_KBLR) Key Bus Transfer Lock from User Signature Block 3 Mask */
#define SEFC_EEFC_KBLR_KBTLUSB3(value)        (SEFC_EEFC_KBLR_KBTLUSB3_Msk & (_UINT32_(value) << SEFC_EEFC_KBLR_KBTLUSB3_Pos)) /* Assigment of value for KBTLUSB3 in the SEFC_EEFC_KBLR register */
#define SEFC_EEFC_KBLR_KBTLUSB4_Pos           _UINT32_(4)                                          /* (SEFC_EEFC_KBLR) Key Bus Transfer Lock from User Signature Block 4 Position */
#define SEFC_EEFC_KBLR_KBTLUSB4_Msk           (_UINT32_(0x1) << SEFC_EEFC_KBLR_KBTLUSB4_Pos)       /* (SEFC_EEFC_KBLR) Key Bus Transfer Lock from User Signature Block 4 Mask */
#define SEFC_EEFC_KBLR_KBTLUSB4(value)        (SEFC_EEFC_KBLR_KBTLUSB4_Msk & (_UINT32_(value) << SEFC_EEFC_KBLR_KBTLUSB4_Pos)) /* Assigment of value for KBTLUSB4 in the SEFC_EEFC_KBLR register */
#define SEFC_EEFC_KBLR_KBTLUSB5_Pos           _UINT32_(5)                                          /* (SEFC_EEFC_KBLR) Key Bus Transfer Lock from User Signature Block 5 Position */
#define SEFC_EEFC_KBLR_KBTLUSB5_Msk           (_UINT32_(0x1) << SEFC_EEFC_KBLR_KBTLUSB5_Pos)       /* (SEFC_EEFC_KBLR) Key Bus Transfer Lock from User Signature Block 5 Mask */
#define SEFC_EEFC_KBLR_KBTLUSB5(value)        (SEFC_EEFC_KBLR_KBTLUSB5_Msk & (_UINT32_(value) << SEFC_EEFC_KBLR_KBTLUSB5_Pos)) /* Assigment of value for KBTLUSB5 in the SEFC_EEFC_KBLR register */
#define SEFC_EEFC_KBLR_KBTLUSB6_Pos           _UINT32_(6)                                          /* (SEFC_EEFC_KBLR) Key Bus Transfer Lock from User Signature Block 6 Position */
#define SEFC_EEFC_KBLR_KBTLUSB6_Msk           (_UINT32_(0x1) << SEFC_EEFC_KBLR_KBTLUSB6_Pos)       /* (SEFC_EEFC_KBLR) Key Bus Transfer Lock from User Signature Block 6 Mask */
#define SEFC_EEFC_KBLR_KBTLUSB6(value)        (SEFC_EEFC_KBLR_KBTLUSB6_Msk & (_UINT32_(value) << SEFC_EEFC_KBLR_KBTLUSB6_Pos)) /* Assigment of value for KBTLUSB6 in the SEFC_EEFC_KBLR register */
#define SEFC_EEFC_KBLR_KBTLUSB7_Pos           _UINT32_(7)                                          /* (SEFC_EEFC_KBLR) Key Bus Transfer Lock from User Signature Block 7 Position */
#define SEFC_EEFC_KBLR_KBTLUSB7_Msk           (_UINT32_(0x1) << SEFC_EEFC_KBLR_KBTLUSB7_Pos)       /* (SEFC_EEFC_KBLR) Key Bus Transfer Lock from User Signature Block 7 Mask */
#define SEFC_EEFC_KBLR_KBTLUSB7(value)        (SEFC_EEFC_KBLR_KBTLUSB7_Msk & (_UINT32_(value) << SEFC_EEFC_KBLR_KBTLUSB7_Pos)) /* Assigment of value for KBTLUSB7 in the SEFC_EEFC_KBLR register */
#define SEFC_EEFC_KBLR_Msk                    _UINT32_(0x000000FF)                                 /* (SEFC_EEFC_KBLR) Register Mask  */

#define SEFC_EEFC_KBLR_KBTLUSB_Pos            _UINT32_(0)                                          /* (SEFC_EEFC_KBLR Position) Key Bus Transfer Lock from User Signature Block 7 */
#define SEFC_EEFC_KBLR_KBTLUSB_Msk            (_UINT32_(0xFF) << SEFC_EEFC_KBLR_KBTLUSB_Pos)       /* (SEFC_EEFC_KBLR Mask) KBTLUSB */
#define SEFC_EEFC_KBLR_KBTLUSB(value)         (SEFC_EEFC_KBLR_KBTLUSB_Msk & (_UINT32_(value) << SEFC_EEFC_KBLR_KBTLUSB_Pos)) 

/* -------- SEFC_EEFC_WPMR : (SEFC Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define SEFC_EEFC_WPMR_WPEN_Pos               _UINT32_(0)                                          /* (SEFC_EEFC_WPMR) Write Protection Enable Position */
#define SEFC_EEFC_WPMR_WPEN_Msk               (_UINT32_(0x1) << SEFC_EEFC_WPMR_WPEN_Pos)           /* (SEFC_EEFC_WPMR) Write Protection Enable Mask */
#define SEFC_EEFC_WPMR_WPEN(value)            (SEFC_EEFC_WPMR_WPEN_Msk & (_UINT32_(value) << SEFC_EEFC_WPMR_WPEN_Pos)) /* Assigment of value for WPEN in the SEFC_EEFC_WPMR register */
#define SEFC_EEFC_WPMR_GPNVMWP_Pos            _UINT32_(1)                                          /* (SEFC_EEFC_WPMR) GPNVM Bit Write Protection Position */
#define SEFC_EEFC_WPMR_GPNVMWP_Msk            (_UINT32_(0x1) << SEFC_EEFC_WPMR_GPNVMWP_Pos)        /* (SEFC_EEFC_WPMR) GPNVM Bit Write Protection Mask */
#define SEFC_EEFC_WPMR_GPNVMWP(value)         (SEFC_EEFC_WPMR_GPNVMWP_Msk & (_UINT32_(value) << SEFC_EEFC_WPMR_GPNVMWP_Pos)) /* Assigment of value for GPNVMWP in the SEFC_EEFC_WPMR register */
#define SEFC_EEFC_WPMR_LOCKWP_Pos             _UINT32_(2)                                          /* (SEFC_EEFC_WPMR) Lock Bit Write Protection Position */
#define SEFC_EEFC_WPMR_LOCKWP_Msk             (_UINT32_(0x1) << SEFC_EEFC_WPMR_LOCKWP_Pos)         /* (SEFC_EEFC_WPMR) Lock Bit Write Protection Mask */
#define SEFC_EEFC_WPMR_LOCKWP(value)          (SEFC_EEFC_WPMR_LOCKWP_Msk & (_UINT32_(value) << SEFC_EEFC_WPMR_LOCKWP_Pos)) /* Assigment of value for LOCKWP in the SEFC_EEFC_WPMR register */
#define SEFC_EEFC_WPMR_ERASEWP_Pos            _UINT32_(3)                                          /* (SEFC_EEFC_WPMR) Erase and Write Protection Position */
#define SEFC_EEFC_WPMR_ERASEWP_Msk            (_UINT32_(0x1) << SEFC_EEFC_WPMR_ERASEWP_Pos)        /* (SEFC_EEFC_WPMR) Erase and Write Protection Mask */
#define SEFC_EEFC_WPMR_ERASEWP(value)         (SEFC_EEFC_WPMR_ERASEWP_Msk & (_UINT32_(value) << SEFC_EEFC_WPMR_ERASEWP_Pos)) /* Assigment of value for ERASEWP in the SEFC_EEFC_WPMR register */
#define SEFC_EEFC_WPMR_USRWP_Pos              _UINT32_(4)                                          /* (SEFC_EEFC_WPMR) User Signature Write Protection Position */
#define SEFC_EEFC_WPMR_USRWP_Msk              (_UINT32_(0x1) << SEFC_EEFC_WPMR_USRWP_Pos)          /* (SEFC_EEFC_WPMR) User Signature Write Protection Mask */
#define SEFC_EEFC_WPMR_USRWP(value)           (SEFC_EEFC_WPMR_USRWP_Msk & (_UINT32_(value) << SEFC_EEFC_WPMR_USRWP_Pos)) /* Assigment of value for USRWP in the SEFC_EEFC_WPMR register */
#define SEFC_EEFC_WPMR_ERASEWL_Pos            _UINT32_(7)                                          /* (SEFC_EEFC_WPMR) Erase and Write Lock Position */
#define SEFC_EEFC_WPMR_ERASEWL_Msk            (_UINT32_(0x1) << SEFC_EEFC_WPMR_ERASEWL_Pos)        /* (SEFC_EEFC_WPMR) Erase and Write Lock Mask */
#define SEFC_EEFC_WPMR_ERASEWL(value)         (SEFC_EEFC_WPMR_ERASEWL_Msk & (_UINT32_(value) << SEFC_EEFC_WPMR_ERASEWL_Pos)) /* Assigment of value for ERASEWL in the SEFC_EEFC_WPMR register */
#define SEFC_EEFC_WPMR_WPKEY_Pos              _UINT32_(8)                                          /* (SEFC_EEFC_WPMR) Write Protection Key Position */
#define SEFC_EEFC_WPMR_WPKEY_Msk              (_UINT32_(0xFFFFFF) << SEFC_EEFC_WPMR_WPKEY_Pos)     /* (SEFC_EEFC_WPMR) Write Protection Key Mask */
#define SEFC_EEFC_WPMR_WPKEY(value)           (SEFC_EEFC_WPMR_WPKEY_Msk & (_UINT32_(value) << SEFC_EEFC_WPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the SEFC_EEFC_WPMR register */
#define   SEFC_EEFC_WPMR_WPKEY_PASSWD_Val     _UINT32_(0x454643)                                   /* (SEFC_EEFC_WPMR) Writing any other value in this field aborts the write operation. Always reads as 0.  */
#define SEFC_EEFC_WPMR_WPKEY_PASSWD           (SEFC_EEFC_WPMR_WPKEY_PASSWD_Val << SEFC_EEFC_WPMR_WPKEY_Pos) /* (SEFC_EEFC_WPMR) Writing any other value in this field aborts the write operation. Always reads as 0. Position  */
#define SEFC_EEFC_WPMR_Msk                    _UINT32_(0xFFFFFF9F)                                 /* (SEFC_EEFC_WPMR) Register Mask  */


/** \brief SEFC register offsets definitions */
#define SEFC_EEFC_FMR_REG_OFST         _UINT32_(0x00)      /* (SEFC_EEFC_FMR) SEFC Flash Mode Register Offset */
#define SEFC_EEFC_FCR_REG_OFST         _UINT32_(0x04)      /* (SEFC_EEFC_FCR) SEFC Flash Command Register Offset */
#define SEFC_EEFC_FSR_REG_OFST         _UINT32_(0x08)      /* (SEFC_EEFC_FSR) SEFC Flash Status Register Offset */
#define SEFC_EEFC_FRR_REG_OFST         _UINT32_(0x0C)      /* (SEFC_EEFC_FRR) SEFC Flash Result Register Offset */
#define SEFC_EEFC_USR_REG_OFST         _UINT32_(0x10)      /* (SEFC_EEFC_USR) SEFC User Signature Rights Register Offset */
#define SEFC_EEFC_KBLR_REG_OFST        _UINT32_(0x14)      /* (SEFC_EEFC_KBLR) SEFC Key Bus Lock Register Offset */
#define SEFC_EEFC_WPMR_REG_OFST        _UINT32_(0xE4)      /* (SEFC_EEFC_WPMR) Write Protection Mode Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SEFC register API structure */
typedef struct
{
  __IO  uint32_t                       SEFC_EEFC_FMR;      /**< Offset: 0x00 (R/W  32) SEFC Flash Mode Register */
  __O   uint32_t                       SEFC_EEFC_FCR;      /**< Offset: 0x04 ( /W  32) SEFC Flash Command Register */
  __I   uint32_t                       SEFC_EEFC_FSR;      /**< Offset: 0x08 (R/   32) SEFC Flash Status Register */
  __I   uint32_t                       SEFC_EEFC_FRR;      /**< Offset: 0x0C (R/   32) SEFC Flash Result Register */
  __IO  uint32_t                       SEFC_EEFC_USR;      /**< Offset: 0x10 (R/W  32) SEFC User Signature Rights Register */
  __IO  uint32_t                       SEFC_EEFC_KBLR;     /**< Offset: 0x14 (R/W  32) SEFC Key Bus Lock Register */
  __I   uint8_t                        Reserved1[0xCC];
  __IO  uint32_t                       SEFC_EEFC_WPMR;     /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
} sefc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CXMTSH_SEFC_COMPONENT_H_ */
