/*
 * Component description for CMCC
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
#ifndef _PIC32CXMTSH_CMCC_COMPONENT_H_
#define _PIC32CXMTSH_CMCC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR CMCC                                         */
/* ************************************************************************** */

/* -------- CMCC_TYPE : (CMCC Offset: 0x00) ( R/ 32) Cache Controller Type Register -------- */
#define CMCC_TYPE_AP_Pos                      _UINT32_(0)                                          /* (CMCC_TYPE) Access Port Access Allowed Position */
#define CMCC_TYPE_AP_Msk                      (_UINT32_(0x1) << CMCC_TYPE_AP_Pos)                  /* (CMCC_TYPE) Access Port Access Allowed Mask */
#define CMCC_TYPE_AP(value)                   (CMCC_TYPE_AP_Msk & (_UINT32_(value) << CMCC_TYPE_AP_Pos)) /* Assigment of value for AP in the CMCC_TYPE register */
#define CMCC_TYPE_GCLK_Pos                    _UINT32_(1)                                          /* (CMCC_TYPE) Dynamic Clock Gating Supported Position */
#define CMCC_TYPE_GCLK_Msk                    (_UINT32_(0x1) << CMCC_TYPE_GCLK_Pos)                /* (CMCC_TYPE) Dynamic Clock Gating Supported Mask */
#define CMCC_TYPE_GCLK(value)                 (CMCC_TYPE_GCLK_Msk & (_UINT32_(value) << CMCC_TYPE_GCLK_Pos)) /* Assigment of value for GCLK in the CMCC_TYPE register */
#define CMCC_TYPE_RANDP_Pos                   _UINT32_(2)                                          /* (CMCC_TYPE) Random Selection Policy Supported Position */
#define CMCC_TYPE_RANDP_Msk                   (_UINT32_(0x1) << CMCC_TYPE_RANDP_Pos)               /* (CMCC_TYPE) Random Selection Policy Supported Mask */
#define CMCC_TYPE_RANDP(value)                (CMCC_TYPE_RANDP_Msk & (_UINT32_(value) << CMCC_TYPE_RANDP_Pos)) /* Assigment of value for RANDP in the CMCC_TYPE register */
#define CMCC_TYPE_LRUP_Pos                    _UINT32_(3)                                          /* (CMCC_TYPE) Least Recently Used Policy Supported Position */
#define CMCC_TYPE_LRUP_Msk                    (_UINT32_(0x1) << CMCC_TYPE_LRUP_Pos)                /* (CMCC_TYPE) Least Recently Used Policy Supported Mask */
#define CMCC_TYPE_LRUP(value)                 (CMCC_TYPE_LRUP_Msk & (_UINT32_(value) << CMCC_TYPE_LRUP_Pos)) /* Assigment of value for LRUP in the CMCC_TYPE register */
#define CMCC_TYPE_RRP_Pos                     _UINT32_(4)                                          /* (CMCC_TYPE) Random Selection Policy Supported Position */
#define CMCC_TYPE_RRP_Msk                     (_UINT32_(0x1) << CMCC_TYPE_RRP_Pos)                 /* (CMCC_TYPE) Random Selection Policy Supported Mask */
#define CMCC_TYPE_RRP(value)                  (CMCC_TYPE_RRP_Msk & (_UINT32_(value) << CMCC_TYPE_RRP_Pos)) /* Assigment of value for RRP in the CMCC_TYPE register */
#define CMCC_TYPE_WAYNUM_Pos                  _UINT32_(5)                                          /* (CMCC_TYPE) Number of Ways Position */
#define CMCC_TYPE_WAYNUM_Msk                  (_UINT32_(0x3) << CMCC_TYPE_WAYNUM_Pos)              /* (CMCC_TYPE) Number of Ways Mask */
#define CMCC_TYPE_WAYNUM(value)               (CMCC_TYPE_WAYNUM_Msk & (_UINT32_(value) << CMCC_TYPE_WAYNUM_Pos)) /* Assigment of value for WAYNUM in the CMCC_TYPE register */
#define   CMCC_TYPE_WAYNUM_DMAPPED_Val        _UINT32_(0x0)                                        /* (CMCC_TYPE) Direct Mapped Cache  */
#define   CMCC_TYPE_WAYNUM_ARCH2WAY_Val       _UINT32_(0x1)                                        /* (CMCC_TYPE) 2-way set associative  */
#define   CMCC_TYPE_WAYNUM_ARCH4WAY_Val       _UINT32_(0x2)                                        /* (CMCC_TYPE) 4-way set associative  */
#define   CMCC_TYPE_WAYNUM_ARCH8WAY_Val       _UINT32_(0x3)                                        /* (CMCC_TYPE) 8-way set associative  */
#define CMCC_TYPE_WAYNUM_DMAPPED              (CMCC_TYPE_WAYNUM_DMAPPED_Val << CMCC_TYPE_WAYNUM_Pos) /* (CMCC_TYPE) Direct Mapped Cache Position  */
#define CMCC_TYPE_WAYNUM_ARCH2WAY             (CMCC_TYPE_WAYNUM_ARCH2WAY_Val << CMCC_TYPE_WAYNUM_Pos) /* (CMCC_TYPE) 2-way set associative Position  */
#define CMCC_TYPE_WAYNUM_ARCH4WAY             (CMCC_TYPE_WAYNUM_ARCH4WAY_Val << CMCC_TYPE_WAYNUM_Pos) /* (CMCC_TYPE) 4-way set associative Position  */
#define CMCC_TYPE_WAYNUM_ARCH8WAY             (CMCC_TYPE_WAYNUM_ARCH8WAY_Val << CMCC_TYPE_WAYNUM_Pos) /* (CMCC_TYPE) 8-way set associative Position  */
#define CMCC_TYPE_LCKDOWN_Pos                 _UINT32_(7)                                          /* (CMCC_TYPE) Lockdown Supported Position */
#define CMCC_TYPE_LCKDOWN_Msk                 (_UINT32_(0x1) << CMCC_TYPE_LCKDOWN_Pos)             /* (CMCC_TYPE) Lockdown Supported Mask */
#define CMCC_TYPE_LCKDOWN(value)              (CMCC_TYPE_LCKDOWN_Msk & (_UINT32_(value) << CMCC_TYPE_LCKDOWN_Pos)) /* Assigment of value for LCKDOWN in the CMCC_TYPE register */
#define CMCC_TYPE_CSIZE_Pos                   _UINT32_(8)                                          /* (CMCC_TYPE) Data Cache Size Position */
#define CMCC_TYPE_CSIZE_Msk                   (_UINT32_(0x7) << CMCC_TYPE_CSIZE_Pos)               /* (CMCC_TYPE) Data Cache Size Mask */
#define CMCC_TYPE_CSIZE(value)                (CMCC_TYPE_CSIZE_Msk & (_UINT32_(value) << CMCC_TYPE_CSIZE_Pos)) /* Assigment of value for CSIZE in the CMCC_TYPE register */
#define   CMCC_TYPE_CSIZE_CSIZE_1KB_Val       _UINT32_(0x0)                                        /* (CMCC_TYPE) Cache size is 1 Kbyte  */
#define   CMCC_TYPE_CSIZE_CSIZE_2KB_Val       _UINT32_(0x1)                                        /* (CMCC_TYPE) Cache size is 2 Kbytes  */
#define   CMCC_TYPE_CSIZE_CSIZE_4KB_Val       _UINT32_(0x2)                                        /* (CMCC_TYPE) Cache size is 4 Kbytes  */
#define   CMCC_TYPE_CSIZE_CSIZE_8KB_Val       _UINT32_(0x3)                                        /* (CMCC_TYPE) Cache size is 8 Kbytes  */
#define   CMCC_TYPE_CSIZE_CSIZE_16KB_Val      _UINT32_(0x4)                                        /* (CMCC_TYPE) Cache size is 16 Kbytes  */
#define   CMCC_TYPE_CSIZE_CSIZE_32KB_Val      _UINT32_(0x5)                                        /* (CMCC_TYPE) Cache size is 32 Kbytes  */
#define   CMCC_TYPE_CSIZE_CSIZE_64KB_Val      _UINT32_(0x6)                                        /* (CMCC_TYPE) Cache size is 64 Kbytes  */
#define CMCC_TYPE_CSIZE_CSIZE_1KB             (CMCC_TYPE_CSIZE_CSIZE_1KB_Val << CMCC_TYPE_CSIZE_Pos) /* (CMCC_TYPE) Cache size is 1 Kbyte Position  */
#define CMCC_TYPE_CSIZE_CSIZE_2KB             (CMCC_TYPE_CSIZE_CSIZE_2KB_Val << CMCC_TYPE_CSIZE_Pos) /* (CMCC_TYPE) Cache size is 2 Kbytes Position  */
#define CMCC_TYPE_CSIZE_CSIZE_4KB             (CMCC_TYPE_CSIZE_CSIZE_4KB_Val << CMCC_TYPE_CSIZE_Pos) /* (CMCC_TYPE) Cache size is 4 Kbytes Position  */
#define CMCC_TYPE_CSIZE_CSIZE_8KB             (CMCC_TYPE_CSIZE_CSIZE_8KB_Val << CMCC_TYPE_CSIZE_Pos) /* (CMCC_TYPE) Cache size is 8 Kbytes Position  */
#define CMCC_TYPE_CSIZE_CSIZE_16KB            (CMCC_TYPE_CSIZE_CSIZE_16KB_Val << CMCC_TYPE_CSIZE_Pos) /* (CMCC_TYPE) Cache size is 16 Kbytes Position  */
#define CMCC_TYPE_CSIZE_CSIZE_32KB            (CMCC_TYPE_CSIZE_CSIZE_32KB_Val << CMCC_TYPE_CSIZE_Pos) /* (CMCC_TYPE) Cache size is 32 Kbytes Position  */
#define CMCC_TYPE_CSIZE_CSIZE_64KB            (CMCC_TYPE_CSIZE_CSIZE_64KB_Val << CMCC_TYPE_CSIZE_Pos) /* (CMCC_TYPE) Cache size is 64 Kbytes Position  */
#define CMCC_TYPE_CLSIZE_Pos                  _UINT32_(11)                                         /* (CMCC_TYPE) Cache LIne Size Position */
#define CMCC_TYPE_CLSIZE_Msk                  (_UINT32_(0x7) << CMCC_TYPE_CLSIZE_Pos)              /* (CMCC_TYPE) Cache LIne Size Mask */
#define CMCC_TYPE_CLSIZE(value)               (CMCC_TYPE_CLSIZE_Msk & (_UINT32_(value) << CMCC_TYPE_CLSIZE_Pos)) /* Assigment of value for CLSIZE in the CMCC_TYPE register */
#define   CMCC_TYPE_CLSIZE_CLSIZE_1KB_Val     _UINT32_(0x0)                                        /* (CMCC_TYPE) Cache line size is 4 bytes  */
#define   CMCC_TYPE_CLSIZE_CLSIZE_2KB_Val     _UINT32_(0x1)                                        /* (CMCC_TYPE) Cache line size is 8 bytes  */
#define   CMCC_TYPE_CLSIZE_CLSIZE_4KB_Val     _UINT32_(0x2)                                        /* (CMCC_TYPE) Cache line size is 16 bytes  */
#define   CMCC_TYPE_CLSIZE_CLSIZE_8KB_Val     _UINT32_(0x3)                                        /* (CMCC_TYPE) Cache line size is 32 bytes  */
#define CMCC_TYPE_CLSIZE_CLSIZE_1KB           (CMCC_TYPE_CLSIZE_CLSIZE_1KB_Val << CMCC_TYPE_CLSIZE_Pos) /* (CMCC_TYPE) Cache line size is 4 bytes Position  */
#define CMCC_TYPE_CLSIZE_CLSIZE_2KB           (CMCC_TYPE_CLSIZE_CLSIZE_2KB_Val << CMCC_TYPE_CLSIZE_Pos) /* (CMCC_TYPE) Cache line size is 8 bytes Position  */
#define CMCC_TYPE_CLSIZE_CLSIZE_4KB           (CMCC_TYPE_CLSIZE_CLSIZE_4KB_Val << CMCC_TYPE_CLSIZE_Pos) /* (CMCC_TYPE) Cache line size is 16 bytes Position  */
#define CMCC_TYPE_CLSIZE_CLSIZE_8KB           (CMCC_TYPE_CLSIZE_CLSIZE_8KB_Val << CMCC_TYPE_CLSIZE_Pos) /* (CMCC_TYPE) Cache line size is 32 bytes Position  */
#define CMCC_TYPE_Msk                         _UINT32_(0x00003FFF)                                 /* (CMCC_TYPE) Register Mask  */


/* -------- CMCC_CFG : (CMCC Offset: 0x04) (R/W 32) Configuration Register -------- */
#define CMCC_CFG_GCLKDIS_Pos                  _UINT32_(0)                                          /* (CMCC_CFG) Disable Clock Gating Position */
#define CMCC_CFG_GCLKDIS_Msk                  (_UINT32_(0x1) << CMCC_CFG_GCLKDIS_Pos)              /* (CMCC_CFG) Disable Clock Gating Mask */
#define CMCC_CFG_GCLKDIS(value)               (CMCC_CFG_GCLKDIS_Msk & (_UINT32_(value) << CMCC_CFG_GCLKDIS_Pos)) /* Assigment of value for GCLKDIS in the CMCC_CFG register */
#define CMCC_CFG_ICDIS_Pos                    _UINT32_(1)                                          /* (CMCC_CFG) Instruction Caching Disable Position */
#define CMCC_CFG_ICDIS_Msk                    (_UINT32_(0x1) << CMCC_CFG_ICDIS_Pos)                /* (CMCC_CFG) Instruction Caching Disable Mask */
#define CMCC_CFG_ICDIS(value)                 (CMCC_CFG_ICDIS_Msk & (_UINT32_(value) << CMCC_CFG_ICDIS_Pos)) /* Assigment of value for ICDIS in the CMCC_CFG register */
#define CMCC_CFG_DCDIS_Pos                    _UINT32_(2)                                          /* (CMCC_CFG) Data Caching Disable Position */
#define CMCC_CFG_DCDIS_Msk                    (_UINT32_(0x1) << CMCC_CFG_DCDIS_Pos)                /* (CMCC_CFG) Data Caching Disable Mask */
#define CMCC_CFG_DCDIS(value)                 (CMCC_CFG_DCDIS_Msk & (_UINT32_(value) << CMCC_CFG_DCDIS_Pos)) /* Assigment of value for DCDIS in the CMCC_CFG register */
#define CMCC_CFG_PRGCSIZE_Pos                 _UINT32_(4)                                          /* (CMCC_CFG) Programmable Cache Size Position */
#define CMCC_CFG_PRGCSIZE_Msk                 (_UINT32_(0x7) << CMCC_CFG_PRGCSIZE_Pos)             /* (CMCC_CFG) Programmable Cache Size Mask */
#define CMCC_CFG_PRGCSIZE(value)              (CMCC_CFG_PRGCSIZE_Msk & (_UINT32_(value) << CMCC_CFG_PRGCSIZE_Pos)) /* Assigment of value for PRGCSIZE in the CMCC_CFG register */
#define CMCC_CFG_LOCK_Pos                     _UINT32_(8)                                          /* (CMCC_CFG) Configuration Lock Until Next System Reset (Write-once) Position */
#define CMCC_CFG_LOCK_Msk                     (_UINT32_(0x1) << CMCC_CFG_LOCK_Pos)                 /* (CMCC_CFG) Configuration Lock Until Next System Reset (Write-once) Mask */
#define CMCC_CFG_LOCK(value)                  (CMCC_CFG_LOCK_Msk & (_UINT32_(value) << CMCC_CFG_LOCK_Pos)) /* Assigment of value for LOCK in the CMCC_CFG register */
#define CMCC_CFG_Msk                          _UINT32_(0x00000177)                                 /* (CMCC_CFG) Register Mask  */


/* -------- CMCC_CTRL : (CMCC Offset: 0x08) ( /W 32) Control Register -------- */
#define CMCC_CTRL_CEN_Pos                     _UINT32_(0)                                          /* (CMCC_CTRL) Cache Controller Enable Position */
#define CMCC_CTRL_CEN_Msk                     (_UINT32_(0x1) << CMCC_CTRL_CEN_Pos)                 /* (CMCC_CTRL) Cache Controller Enable Mask */
#define CMCC_CTRL_CEN(value)                  (CMCC_CTRL_CEN_Msk & (_UINT32_(value) << CMCC_CTRL_CEN_Pos)) /* Assigment of value for CEN in the CMCC_CTRL register */
#define CMCC_CTRL_LOCK_Pos                    _UINT32_(8)                                          /* (CMCC_CTRL) Control Lock Until Next System Reset (Write-once) Position */
#define CMCC_CTRL_LOCK_Msk                    (_UINT32_(0x1) << CMCC_CTRL_LOCK_Pos)                /* (CMCC_CTRL) Control Lock Until Next System Reset (Write-once) Mask */
#define CMCC_CTRL_LOCK(value)                 (CMCC_CTRL_LOCK_Msk & (_UINT32_(value) << CMCC_CTRL_LOCK_Pos)) /* Assigment of value for LOCK in the CMCC_CTRL register */
#define CMCC_CTRL_Msk                         _UINT32_(0x00000101)                                 /* (CMCC_CTRL) Register Mask  */


/* -------- CMCC_SR : (CMCC Offset: 0x0C) ( R/ 32) Status Register -------- */
#define CMCC_SR_CSTS_Pos                      _UINT32_(0)                                          /* (CMCC_SR) Cache Controller Status Position */
#define CMCC_SR_CSTS_Msk                      (_UINT32_(0x1) << CMCC_SR_CSTS_Pos)                  /* (CMCC_SR) Cache Controller Status Mask */
#define CMCC_SR_CSTS(value)                   (CMCC_SR_CSTS_Msk & (_UINT32_(value) << CMCC_SR_CSTS_Pos)) /* Assigment of value for CSTS in the CMCC_SR register */
#define CMCC_SR_Msk                           _UINT32_(0x00000001)                                 /* (CMCC_SR) Register Mask  */


/* -------- CMCC_MAINT0 : (CMCC Offset: 0x20) ( /W 32) Maintenance Register 0 -------- */
#define CMCC_MAINT0_INVALL_Pos                _UINT32_(0)                                          /* (CMCC_MAINT0) Cache Controller Invalidate All Position */
#define CMCC_MAINT0_INVALL_Msk                (_UINT32_(0x1) << CMCC_MAINT0_INVALL_Pos)            /* (CMCC_MAINT0) Cache Controller Invalidate All Mask */
#define CMCC_MAINT0_INVALL(value)             (CMCC_MAINT0_INVALL_Msk & (_UINT32_(value) << CMCC_MAINT0_INVALL_Pos)) /* Assigment of value for INVALL in the CMCC_MAINT0 register */
#define CMCC_MAINT0_Msk                       _UINT32_(0x00000001)                                 /* (CMCC_MAINT0) Register Mask  */


/* -------- CMCC_MAINT1 : (CMCC Offset: 0x24) ( /W 32) Maintenance Register 1 -------- */
#define CMCC_MAINT1_INDEX_Pos                 _UINT32_(4)                                          /* (CMCC_MAINT1) Invalidate Index Position */
#define CMCC_MAINT1_INDEX_Msk                 (_UINT32_(0x7F) << CMCC_MAINT1_INDEX_Pos)            /* (CMCC_MAINT1) Invalidate Index Mask */
#define CMCC_MAINT1_INDEX(value)              (CMCC_MAINT1_INDEX_Msk & (_UINT32_(value) << CMCC_MAINT1_INDEX_Pos)) /* Assigment of value for INDEX in the CMCC_MAINT1 register */
#define CMCC_MAINT1_WAY_Pos                   _UINT32_(30)                                         /* (CMCC_MAINT1) Invalidate Way Position */
#define CMCC_MAINT1_WAY_Msk                   (_UINT32_(0x3) << CMCC_MAINT1_WAY_Pos)               /* (CMCC_MAINT1) Invalidate Way Mask */
#define CMCC_MAINT1_WAY(value)                (CMCC_MAINT1_WAY_Msk & (_UINT32_(value) << CMCC_MAINT1_WAY_Pos)) /* Assigment of value for WAY in the CMCC_MAINT1 register */
#define   CMCC_MAINT1_WAY_WAY0_Val            _UINT32_(0x0)                                        /* (CMCC_MAINT1) Way 0 is selection for index invalidation.  */
#define   CMCC_MAINT1_WAY_WAY1_Val            _UINT32_(0x1)                                        /* (CMCC_MAINT1) Way 1 is selection for index invalidation.  */
#define   CMCC_MAINT1_WAY_WAY2_Val            _UINT32_(0x2)                                        /* (CMCC_MAINT1) Way 2 is selection for index invalidation.  */
#define   CMCC_MAINT1_WAY_WAY3_Val            _UINT32_(0x3)                                        /* (CMCC_MAINT1) Way 3 is selection for index invalidation.  */
#define CMCC_MAINT1_WAY_WAY0                  (CMCC_MAINT1_WAY_WAY0_Val << CMCC_MAINT1_WAY_Pos)    /* (CMCC_MAINT1) Way 0 is selection for index invalidation. Position  */
#define CMCC_MAINT1_WAY_WAY1                  (CMCC_MAINT1_WAY_WAY1_Val << CMCC_MAINT1_WAY_Pos)    /* (CMCC_MAINT1) Way 1 is selection for index invalidation. Position  */
#define CMCC_MAINT1_WAY_WAY2                  (CMCC_MAINT1_WAY_WAY2_Val << CMCC_MAINT1_WAY_Pos)    /* (CMCC_MAINT1) Way 2 is selection for index invalidation. Position  */
#define CMCC_MAINT1_WAY_WAY3                  (CMCC_MAINT1_WAY_WAY3_Val << CMCC_MAINT1_WAY_Pos)    /* (CMCC_MAINT1) Way 3 is selection for index invalidation. Position  */
#define CMCC_MAINT1_Msk                       _UINT32_(0xC00007F0)                                 /* (CMCC_MAINT1) Register Mask  */


/* -------- CMCC_MCFG : (CMCC Offset: 0x28) (R/W 32) Monitor Configuration Register -------- */
#define CMCC_MCFG_MODE_Pos                    _UINT32_(0)                                          /* (CMCC_MCFG) Cache Controller Monitor Counter Mode Position */
#define CMCC_MCFG_MODE_Msk                    (_UINT32_(0x3) << CMCC_MCFG_MODE_Pos)                /* (CMCC_MCFG) Cache Controller Monitor Counter Mode Mask */
#define CMCC_MCFG_MODE(value)                 (CMCC_MCFG_MODE_Msk & (_UINT32_(value) << CMCC_MCFG_MODE_Pos)) /* Assigment of value for MODE in the CMCC_MCFG register */
#define   CMCC_MCFG_MODE_CYCLE_COUNT_Val      _UINT32_(0x0)                                        /* (CMCC_MCFG) Cycle counter  */
#define   CMCC_MCFG_MODE_IHIT_COUNT_Val       _UINT32_(0x1)                                        /* (CMCC_MCFG) Instruction hit counter, only relevant for unified cache and instruction cache architecture  */
#define   CMCC_MCFG_MODE_DHIT_COUNT_Val       _UINT32_(0x2)                                        /* (CMCC_MCFG) Data hit counter, only relevant for unified cache and data cache architecture  */
#define CMCC_MCFG_MODE_CYCLE_COUNT            (CMCC_MCFG_MODE_CYCLE_COUNT_Val << CMCC_MCFG_MODE_Pos) /* (CMCC_MCFG) Cycle counter Position  */
#define CMCC_MCFG_MODE_IHIT_COUNT             (CMCC_MCFG_MODE_IHIT_COUNT_Val << CMCC_MCFG_MODE_Pos) /* (CMCC_MCFG) Instruction hit counter, only relevant for unified cache and instruction cache architecture Position  */
#define CMCC_MCFG_MODE_DHIT_COUNT             (CMCC_MCFG_MODE_DHIT_COUNT_Val << CMCC_MCFG_MODE_Pos) /* (CMCC_MCFG) Data hit counter, only relevant for unified cache and data cache architecture Position  */
#define CMCC_MCFG_Msk                         _UINT32_(0x00000003)                                 /* (CMCC_MCFG) Register Mask  */


/* -------- CMCC_MEN : (CMCC Offset: 0x2C) (R/W 32) Monitor Enable Register -------- */
#define CMCC_MEN_MENABLE_Pos                  _UINT32_(0)                                          /* (CMCC_MEN) Cache Controller Monitor Enable Position */
#define CMCC_MEN_MENABLE_Msk                  (_UINT32_(0x1) << CMCC_MEN_MENABLE_Pos)              /* (CMCC_MEN) Cache Controller Monitor Enable Mask */
#define CMCC_MEN_MENABLE(value)               (CMCC_MEN_MENABLE_Msk & (_UINT32_(value) << CMCC_MEN_MENABLE_Pos)) /* Assigment of value for MENABLE in the CMCC_MEN register */
#define CMCC_MEN_Msk                          _UINT32_(0x00000001)                                 /* (CMCC_MEN) Register Mask  */


/* -------- CMCC_MCTRL : (CMCC Offset: 0x30) ( /W 32) Monitor Control Register -------- */
#define CMCC_MCTRL_SWRST_Pos                  _UINT32_(0)                                          /* (CMCC_MCTRL) Monitor Position */
#define CMCC_MCTRL_SWRST_Msk                  (_UINT32_(0x1) << CMCC_MCTRL_SWRST_Pos)              /* (CMCC_MCTRL) Monitor Mask */
#define CMCC_MCTRL_SWRST(value)               (CMCC_MCTRL_SWRST_Msk & (_UINT32_(value) << CMCC_MCTRL_SWRST_Pos)) /* Assigment of value for SWRST in the CMCC_MCTRL register */
#define CMCC_MCTRL_Msk                        _UINT32_(0x00000001)                                 /* (CMCC_MCTRL) Register Mask  */


/* -------- CMCC_MSR : (CMCC Offset: 0x34) ( R/ 32) Monitor Status Register -------- */
#define CMCC_MSR_EVENT_CNT_Pos                _UINT32_(0)                                          /* (CMCC_MSR) Monitor Event Counter Position */
#define CMCC_MSR_EVENT_CNT_Msk                (_UINT32_(0xFFFFFFFF) << CMCC_MSR_EVENT_CNT_Pos)     /* (CMCC_MSR) Monitor Event Counter Mask */
#define CMCC_MSR_EVENT_CNT(value)             (CMCC_MSR_EVENT_CNT_Msk & (_UINT32_(value) << CMCC_MSR_EVENT_CNT_Pos)) /* Assigment of value for EVENT_CNT in the CMCC_MSR register */
#define CMCC_MSR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (CMCC_MSR) Register Mask  */


/* -------- CMCC_WPMR : (CMCC Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define CMCC_WPMR_WPCFG_Pos                   _UINT32_(0)                                          /* (CMCC_WPMR) Write Protection Configuration Enable Position */
#define CMCC_WPMR_WPCFG_Msk                   (_UINT32_(0x1) << CMCC_WPMR_WPCFG_Pos)               /* (CMCC_WPMR) Write Protection Configuration Enable Mask */
#define CMCC_WPMR_WPCFG(value)                (CMCC_WPMR_WPCFG_Msk & (_UINT32_(value) << CMCC_WPMR_WPCFG_Pos)) /* Assigment of value for WPCFG in the CMCC_WPMR register */
#define CMCC_WPMR_WPCR_Pos                    _UINT32_(2)                                          /* (CMCC_WPMR) Write Protection Control Enable Position */
#define CMCC_WPMR_WPCR_Msk                    (_UINT32_(0x1) << CMCC_WPMR_WPCR_Pos)                /* (CMCC_WPMR) Write Protection Control Enable Mask */
#define CMCC_WPMR_WPCR(value)                 (CMCC_WPMR_WPCR_Msk & (_UINT32_(value) << CMCC_WPMR_WPCR_Pos)) /* Assigment of value for WPCR in the CMCC_WPMR register */
#define CMCC_WPMR_WPKEY_Pos                   _UINT32_(8)                                          /* (CMCC_WPMR) Write Protection Key Position */
#define CMCC_WPMR_WPKEY_Msk                   (_UINT32_(0xFFFFFF) << CMCC_WPMR_WPKEY_Pos)          /* (CMCC_WPMR) Write Protection Key Mask */
#define CMCC_WPMR_WPKEY(value)                (CMCC_WPMR_WPKEY_Msk & (_UINT32_(value) << CMCC_WPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the CMCC_WPMR register */
#define   CMCC_WPMR_WPKEY_PASSWD_Val          _UINT32_(0x434D43)                                   /* (CMCC_WPMR) Writing any other value in this field aborts the write operation of the WPCFG and WPCR bits. Always reads as 0.  */
#define CMCC_WPMR_WPKEY_PASSWD                (CMCC_WPMR_WPKEY_PASSWD_Val << CMCC_WPMR_WPKEY_Pos)  /* (CMCC_WPMR) Writing any other value in this field aborts the write operation of the WPCFG and WPCR bits. Always reads as 0. Position  */
#define CMCC_WPMR_Msk                         _UINT32_(0xFFFFFF05)                                 /* (CMCC_WPMR) Register Mask  */


/** \brief CMCC register offsets definitions */
#define CMCC_TYPE_REG_OFST             _UINT32_(0x00)      /* (CMCC_TYPE) Cache Controller Type Register Offset */
#define CMCC_CFG_REG_OFST              _UINT32_(0x04)      /* (CMCC_CFG) Configuration Register Offset */
#define CMCC_CTRL_REG_OFST             _UINT32_(0x08)      /* (CMCC_CTRL) Control Register Offset */
#define CMCC_SR_REG_OFST               _UINT32_(0x0C)      /* (CMCC_SR) Status Register Offset */
#define CMCC_MAINT0_REG_OFST           _UINT32_(0x20)      /* (CMCC_MAINT0) Maintenance Register 0 Offset */
#define CMCC_MAINT1_REG_OFST           _UINT32_(0x24)      /* (CMCC_MAINT1) Maintenance Register 1 Offset */
#define CMCC_MCFG_REG_OFST             _UINT32_(0x28)      /* (CMCC_MCFG) Monitor Configuration Register Offset */
#define CMCC_MEN_REG_OFST              _UINT32_(0x2C)      /* (CMCC_MEN) Monitor Enable Register Offset */
#define CMCC_MCTRL_REG_OFST            _UINT32_(0x30)      /* (CMCC_MCTRL) Monitor Control Register Offset */
#define CMCC_MSR_REG_OFST              _UINT32_(0x34)      /* (CMCC_MSR) Monitor Status Register Offset */
#define CMCC_WPMR_REG_OFST             _UINT32_(0xE4)      /* (CMCC_WPMR) Write Protection Mode Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief CMCC register API structure */
typedef struct
{
  __I   uint32_t                       CMCC_TYPE;          /**< Offset: 0x00 (R/   32) Cache Controller Type Register */
  __IO  uint32_t                       CMCC_CFG;           /**< Offset: 0x04 (R/W  32) Configuration Register */
  __O   uint32_t                       CMCC_CTRL;          /**< Offset: 0x08 ( /W  32) Control Register */
  __I   uint32_t                       CMCC_SR;            /**< Offset: 0x0C (R/   32) Status Register */
  __I   uint8_t                        Reserved1[0x10];
  __O   uint32_t                       CMCC_MAINT0;        /**< Offset: 0x20 ( /W  32) Maintenance Register 0 */
  __O   uint32_t                       CMCC_MAINT1;        /**< Offset: 0x24 ( /W  32) Maintenance Register 1 */
  __IO  uint32_t                       CMCC_MCFG;          /**< Offset: 0x28 (R/W  32) Monitor Configuration Register */
  __IO  uint32_t                       CMCC_MEN;           /**< Offset: 0x2C (R/W  32) Monitor Enable Register */
  __O   uint32_t                       CMCC_MCTRL;         /**< Offset: 0x30 ( /W  32) Monitor Control Register */
  __I   uint32_t                       CMCC_MSR;           /**< Offset: 0x34 (R/   32) Monitor Status Register */
  __I   uint8_t                        Reserved2[0xAC];
  __IO  uint32_t                       CMCC_WPMR;          /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
} cmcc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CXMTSH_CMCC_COMPONENT_H_ */
