/*
 * Component description for SFR
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

/* file generated from device description file (ATDF) version 2023-12-19T08:59:38Z */
#ifndef _PIC32CXMTSH_SFR_COMPONENT_H_
#define _PIC32CXMTSH_SFR_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SFR                                          */
/* ************************************************************************** */

/* -------- SFR_SRAM0_SW_CFG : (SFR Offset: 0x10) (R/W 32) SRAM0 Software Config Register -------- */
#define SFR_SRAM0_SW_CFG_M128LS_Pos           _UINT32_(0)                                          /* (SFR_SRAM0_SW_CFG) 128 KB Light Sleep Mode Position */
#define SFR_SRAM0_SW_CFG_M128LS_Msk           (_UINT32_(0x1) << SFR_SRAM0_SW_CFG_M128LS_Pos)       /* (SFR_SRAM0_SW_CFG) 128 KB Light Sleep Mode Mask */
#define SFR_SRAM0_SW_CFG_M128LS(value)        (SFR_SRAM0_SW_CFG_M128LS_Msk & (_UINT32_(value) << SFR_SRAM0_SW_CFG_M128LS_Pos)) /* Assigment of value for M128LS in the SFR_SRAM0_SW_CFG register */
#define SFR_SRAM0_SW_CFG_M128DS_Pos           _UINT32_(1)                                          /* (SFR_SRAM0_SW_CFG) 128 KB Deep Sleep Mode Position */
#define SFR_SRAM0_SW_CFG_M128DS_Msk           (_UINT32_(0x1) << SFR_SRAM0_SW_CFG_M128DS_Pos)       /* (SFR_SRAM0_SW_CFG) 128 KB Deep Sleep Mode Mask */
#define SFR_SRAM0_SW_CFG_M128DS(value)        (SFR_SRAM0_SW_CFG_M128DS_Msk & (_UINT32_(value) << SFR_SRAM0_SW_CFG_M128DS_Pos)) /* Assigment of value for M128DS in the SFR_SRAM0_SW_CFG register */
#define SFR_SRAM0_SW_CFG_M128SD_Pos           _UINT32_(2)                                          /* (SFR_SRAM0_SW_CFG) 128 KB Shutdown Mode Position */
#define SFR_SRAM0_SW_CFG_M128SD_Msk           (_UINT32_(0x1) << SFR_SRAM0_SW_CFG_M128SD_Pos)       /* (SFR_SRAM0_SW_CFG) 128 KB Shutdown Mode Mask */
#define SFR_SRAM0_SW_CFG_M128SD(value)        (SFR_SRAM0_SW_CFG_M128SD_Msk & (_UINT32_(value) << SFR_SRAM0_SW_CFG_M128SD_Pos)) /* Assigment of value for M128SD in the SFR_SRAM0_SW_CFG register */
#define SFR_SRAM0_SW_CFG_M256LS_Pos           _UINT32_(4)                                          /* (SFR_SRAM0_SW_CFG) 256 KB Light Sleep Mode Position */
#define SFR_SRAM0_SW_CFG_M256LS_Msk           (_UINT32_(0x1) << SFR_SRAM0_SW_CFG_M256LS_Pos)       /* (SFR_SRAM0_SW_CFG) 256 KB Light Sleep Mode Mask */
#define SFR_SRAM0_SW_CFG_M256LS(value)        (SFR_SRAM0_SW_CFG_M256LS_Msk & (_UINT32_(value) << SFR_SRAM0_SW_CFG_M256LS_Pos)) /* Assigment of value for M256LS in the SFR_SRAM0_SW_CFG register */
#define SFR_SRAM0_SW_CFG_M256DS_Pos           _UINT32_(5)                                          /* (SFR_SRAM0_SW_CFG) 256 KB Deep Sleep Mode Position */
#define SFR_SRAM0_SW_CFG_M256DS_Msk           (_UINT32_(0x1) << SFR_SRAM0_SW_CFG_M256DS_Pos)       /* (SFR_SRAM0_SW_CFG) 256 KB Deep Sleep Mode Mask */
#define SFR_SRAM0_SW_CFG_M256DS(value)        (SFR_SRAM0_SW_CFG_M256DS_Msk & (_UINT32_(value) << SFR_SRAM0_SW_CFG_M256DS_Pos)) /* Assigment of value for M256DS in the SFR_SRAM0_SW_CFG register */
#define SFR_SRAM0_SW_CFG_M256SD_Pos           _UINT32_(6)                                          /* (SFR_SRAM0_SW_CFG) 256 KB Shutdown Mode Position */
#define SFR_SRAM0_SW_CFG_M256SD_Msk           (_UINT32_(0x1) << SFR_SRAM0_SW_CFG_M256SD_Pos)       /* (SFR_SRAM0_SW_CFG) 256 KB Shutdown Mode Mask */
#define SFR_SRAM0_SW_CFG_M256SD(value)        (SFR_SRAM0_SW_CFG_M256SD_Msk & (_UINT32_(value) << SFR_SRAM0_SW_CFG_M256SD_Pos)) /* Assigment of value for M256SD in the SFR_SRAM0_SW_CFG register */
#define SFR_SRAM0_SW_CFG_M384LS_Pos           _UINT32_(8)                                          /* (SFR_SRAM0_SW_CFG) 384 KB Light Sleep Mode Position */
#define SFR_SRAM0_SW_CFG_M384LS_Msk           (_UINT32_(0x1) << SFR_SRAM0_SW_CFG_M384LS_Pos)       /* (SFR_SRAM0_SW_CFG) 384 KB Light Sleep Mode Mask */
#define SFR_SRAM0_SW_CFG_M384LS(value)        (SFR_SRAM0_SW_CFG_M384LS_Msk & (_UINT32_(value) << SFR_SRAM0_SW_CFG_M384LS_Pos)) /* Assigment of value for M384LS in the SFR_SRAM0_SW_CFG register */
#define SFR_SRAM0_SW_CFG_M384DS_Pos           _UINT32_(9)                                          /* (SFR_SRAM0_SW_CFG) 384 KB Deep Sleep Mode Position */
#define SFR_SRAM0_SW_CFG_M384DS_Msk           (_UINT32_(0x1) << SFR_SRAM0_SW_CFG_M384DS_Pos)       /* (SFR_SRAM0_SW_CFG) 384 KB Deep Sleep Mode Mask */
#define SFR_SRAM0_SW_CFG_M384DS(value)        (SFR_SRAM0_SW_CFG_M384DS_Msk & (_UINT32_(value) << SFR_SRAM0_SW_CFG_M384DS_Pos)) /* Assigment of value for M384DS in the SFR_SRAM0_SW_CFG register */
#define SFR_SRAM0_SW_CFG_M384SD_Pos           _UINT32_(10)                                         /* (SFR_SRAM0_SW_CFG) 384 KB Shutdown Mode Position */
#define SFR_SRAM0_SW_CFG_M384SD_Msk           (_UINT32_(0x1) << SFR_SRAM0_SW_CFG_M384SD_Pos)       /* (SFR_SRAM0_SW_CFG) 384 KB Shutdown Mode Mask */
#define SFR_SRAM0_SW_CFG_M384SD(value)        (SFR_SRAM0_SW_CFG_M384SD_Msk & (_UINT32_(value) << SFR_SRAM0_SW_CFG_M384SD_Pos)) /* Assigment of value for M384SD in the SFR_SRAM0_SW_CFG register */
#define SFR_SRAM0_SW_CFG_M512LS_Pos           _UINT32_(12)                                         /* (SFR_SRAM0_SW_CFG) 512 KB Light Sleep Mode Position */
#define SFR_SRAM0_SW_CFG_M512LS_Msk           (_UINT32_(0x1) << SFR_SRAM0_SW_CFG_M512LS_Pos)       /* (SFR_SRAM0_SW_CFG) 512 KB Light Sleep Mode Mask */
#define SFR_SRAM0_SW_CFG_M512LS(value)        (SFR_SRAM0_SW_CFG_M512LS_Msk & (_UINT32_(value) << SFR_SRAM0_SW_CFG_M512LS_Pos)) /* Assigment of value for M512LS in the SFR_SRAM0_SW_CFG register */
#define SFR_SRAM0_SW_CFG_M512DS_Pos           _UINT32_(13)                                         /* (SFR_SRAM0_SW_CFG) 512 KB Deep Sleep Mode Position */
#define SFR_SRAM0_SW_CFG_M512DS_Msk           (_UINT32_(0x1) << SFR_SRAM0_SW_CFG_M512DS_Pos)       /* (SFR_SRAM0_SW_CFG) 512 KB Deep Sleep Mode Mask */
#define SFR_SRAM0_SW_CFG_M512DS(value)        (SFR_SRAM0_SW_CFG_M512DS_Msk & (_UINT32_(value) << SFR_SRAM0_SW_CFG_M512DS_Pos)) /* Assigment of value for M512DS in the SFR_SRAM0_SW_CFG register */
#define SFR_SRAM0_SW_CFG_M512SD_Pos           _UINT32_(14)                                         /* (SFR_SRAM0_SW_CFG) 512 KB Shutdown Mode Position */
#define SFR_SRAM0_SW_CFG_M512SD_Msk           (_UINT32_(0x1) << SFR_SRAM0_SW_CFG_M512SD_Pos)       /* (SFR_SRAM0_SW_CFG) 512 KB Shutdown Mode Mask */
#define SFR_SRAM0_SW_CFG_M512SD(value)        (SFR_SRAM0_SW_CFG_M512SD_Msk & (_UINT32_(value) << SFR_SRAM0_SW_CFG_M512SD_Pos)) /* Assigment of value for M512SD in the SFR_SRAM0_SW_CFG register */
#define SFR_SRAM0_SW_CFG_CLKG_DIS_Pos         _UINT32_(16)                                         /* (SFR_SRAM0_SW_CFG) Clock Gating Disable Position */
#define SFR_SRAM0_SW_CFG_CLKG_DIS_Msk         (_UINT32_(0x1) << SFR_SRAM0_SW_CFG_CLKG_DIS_Pos)     /* (SFR_SRAM0_SW_CFG) Clock Gating Disable Mask */
#define SFR_SRAM0_SW_CFG_CLKG_DIS(value)      (SFR_SRAM0_SW_CFG_CLKG_DIS_Msk & (_UINT32_(value) << SFR_SRAM0_SW_CFG_CLKG_DIS_Pos)) /* Assigment of value for CLKG_DIS in the SFR_SRAM0_SW_CFG register */
#define SFR_SRAM0_SW_CFG_Msk                  _UINT32_(0x00017777)                                 /* (SFR_SRAM0_SW_CFG) Register Mask  */


/* -------- SFR_FLASH : (SFR Offset: 0x70) (R/W 32) Flash Memory Configuration Register -------- */
#define SFR_FLASH_PATCH_BYPASS_Pos            _UINT32_(0)                                          /* (SFR_FLASH)  Position */
#define SFR_FLASH_PATCH_BYPASS_Msk            (_UINT32_(0x1) << SFR_FLASH_PATCH_BYPASS_Pos)        /* (SFR_FLASH)  Mask */
#define SFR_FLASH_PATCH_BYPASS(value)         (SFR_FLASH_PATCH_BYPASS_Msk & (_UINT32_(value) << SFR_FLASH_PATCH_BYPASS_Pos)) /* Assigment of value for PATCH_BYPASS in the SFR_FLASH register */
#define SFR_FLASH_Msk                         _UINT32_(0x00000001)                                 /* (SFR_FLASH) Register Mask  */


/* -------- SFR_OPT_LINK : (SFR Offset: 0x80) (R/W 32) Optical Link Register -------- */
#define SFR_OPT_LINK_CLK_SELECT_Pos           _UINT32_(0)                                          /* (SFR_OPT_LINK) Clock Selection Position */
#define SFR_OPT_LINK_CLK_SELECT_Msk           (_UINT32_(0x1) << SFR_OPT_LINK_CLK_SELECT_Pos)       /* (SFR_OPT_LINK) Clock Selection Mask */
#define SFR_OPT_LINK_CLK_SELECT(value)        (SFR_OPT_LINK_CLK_SELECT_Msk & (_UINT32_(value) << SFR_OPT_LINK_CLK_SELECT_Pos)) /* Assigment of value for CLK_SELECT in the SFR_OPT_LINK register */
#define SFR_OPT_LINK_Msk                      _UINT32_(0x00000001)                                 /* (SFR_OPT_LINK) Register Mask  */


/* -------- SFR_CORE_DEBUG_CFG : (SFR Offset: 0xA0) (R/W 32) Core Debug Configuration Register -------- */
#define SFR_CORE_DEBUG_CFG_SWV_Pos            _UINT32_(0)                                          /* (SFR_CORE_DEBUG_CFG) SWV Selection Position */
#define SFR_CORE_DEBUG_CFG_SWV_Msk            (_UINT32_(0x1) << SFR_CORE_DEBUG_CFG_SWV_Pos)        /* (SFR_CORE_DEBUG_CFG) SWV Selection Mask */
#define SFR_CORE_DEBUG_CFG_SWV(value)         (SFR_CORE_DEBUG_CFG_SWV_Msk & (_UINT32_(value) << SFR_CORE_DEBUG_CFG_SWV_Pos)) /* Assigment of value for SWV in the SFR_CORE_DEBUG_CFG register */
#define SFR_CORE_DEBUG_CFG_XTRG1_Pos          _UINT32_(1)                                          /* (SFR_CORE_DEBUG_CFG) From Core 1 to Core 0 Cross Triggering Position */
#define SFR_CORE_DEBUG_CFG_XTRG1_Msk          (_UINT32_(0x1) << SFR_CORE_DEBUG_CFG_XTRG1_Pos)      /* (SFR_CORE_DEBUG_CFG) From Core 1 to Core 0 Cross Triggering Mask */
#define SFR_CORE_DEBUG_CFG_XTRG1(value)       (SFR_CORE_DEBUG_CFG_XTRG1_Msk & (_UINT32_(value) << SFR_CORE_DEBUG_CFG_XTRG1_Pos)) /* Assigment of value for XTRG1 in the SFR_CORE_DEBUG_CFG register */
#define SFR_CORE_DEBUG_CFG_XTRG0_Pos          _UINT32_(2)                                          /* (SFR_CORE_DEBUG_CFG) From Core 0 to Core 1 Cross Triggering Position */
#define SFR_CORE_DEBUG_CFG_XTRG0_Msk          (_UINT32_(0x1) << SFR_CORE_DEBUG_CFG_XTRG0_Pos)      /* (SFR_CORE_DEBUG_CFG) From Core 0 to Core 1 Cross Triggering Mask */
#define SFR_CORE_DEBUG_CFG_XTRG0(value)       (SFR_CORE_DEBUG_CFG_XTRG0_Msk & (_UINT32_(value) << SFR_CORE_DEBUG_CFG_XTRG0_Pos)) /* Assigment of value for XTRG0 in the SFR_CORE_DEBUG_CFG register */
#define SFR_CORE_DEBUG_CFG_Msk                _UINT32_(0x00000007)                                 /* (SFR_CORE_DEBUG_CFG) Register Mask  */

#define SFR_CORE_DEBUG_CFG_XTRG_Pos           _UINT32_(1)                                          /* (SFR_CORE_DEBUG_CFG Position) From Core x to Core x Cross Triggering */
#define SFR_CORE_DEBUG_CFG_XTRG_Msk           (_UINT32_(0x3) << SFR_CORE_DEBUG_CFG_XTRG_Pos)       /* (SFR_CORE_DEBUG_CFG Mask) XTRG */
#define SFR_CORE_DEBUG_CFG_XTRG(value)        (SFR_CORE_DEBUG_CFG_XTRG_Msk & (_UINT32_(value) << SFR_CORE_DEBUG_CFG_XTRG_Pos)) 

/* -------- SFR_ERASE_FLASH_SRAM : (SFR Offset: 0xB0) (R/W 32) Erase Flash/SRAM Register -------- */
#define SFR_ERASE_FLASH_SRAM_HW_ERASE_Pos     _UINT32_(0)                                          /* (SFR_ERASE_FLASH_SRAM) PB2/Peripherals or Hardware Erase Signal Assignment Position */
#define SFR_ERASE_FLASH_SRAM_HW_ERASE_Msk     (_UINT32_(0x1) << SFR_ERASE_FLASH_SRAM_HW_ERASE_Pos) /* (SFR_ERASE_FLASH_SRAM) PB2/Peripherals or Hardware Erase Signal Assignment Mask */
#define SFR_ERASE_FLASH_SRAM_HW_ERASE(value)  (SFR_ERASE_FLASH_SRAM_HW_ERASE_Msk & (_UINT32_(value) << SFR_ERASE_FLASH_SRAM_HW_ERASE_Pos)) /* Assigment of value for HW_ERASE in the SFR_ERASE_FLASH_SRAM register */
#define   SFR_ERASE_FLASH_SRAM_HW_ERASE_DISABLE_Val _UINT32_(0x0)                                        /* (SFR_ERASE_FLASH_SRAM) Hardware erase signal disabled. PB2 pin can be used in GPIO or Peripheral IO mode.  */
#define   SFR_ERASE_FLASH_SRAM_HW_ERASE_ENABLE_Val _UINT32_(0x1)                                        /* (SFR_ERASE_FLASH_SRAM) Hardware erase signal enabled. PB2 pin is assigned to Flash erase function.  */
#define SFR_ERASE_FLASH_SRAM_HW_ERASE_DISABLE (SFR_ERASE_FLASH_SRAM_HW_ERASE_DISABLE_Val << SFR_ERASE_FLASH_SRAM_HW_ERASE_Pos) /* (SFR_ERASE_FLASH_SRAM) Hardware erase signal disabled. PB2 pin can be used in GPIO or Peripheral IO mode. Position  */
#define SFR_ERASE_FLASH_SRAM_HW_ERASE_ENABLE  (SFR_ERASE_FLASH_SRAM_HW_ERASE_ENABLE_Val << SFR_ERASE_FLASH_SRAM_HW_ERASE_Pos) /* (SFR_ERASE_FLASH_SRAM) Hardware erase signal enabled. PB2 pin is assigned to Flash erase function. Position  */
#define SFR_ERASE_FLASH_SRAM_SRAM0_Pos        _UINT32_(1)                                          /* (SFR_ERASE_FLASH_SRAM) Erase SRAM0 Content Position */
#define SFR_ERASE_FLASH_SRAM_SRAM0_Msk        (_UINT32_(0x1) << SFR_ERASE_FLASH_SRAM_SRAM0_Pos)    /* (SFR_ERASE_FLASH_SRAM) Erase SRAM0 Content Mask */
#define SFR_ERASE_FLASH_SRAM_SRAM0(value)     (SFR_ERASE_FLASH_SRAM_SRAM0_Msk & (_UINT32_(value) << SFR_ERASE_FLASH_SRAM_SRAM0_Pos)) /* Assigment of value for SRAM0 in the SFR_ERASE_FLASH_SRAM register */
#define   SFR_ERASE_FLASH_SRAM_SRAM0_NOT_DELETED_Val _UINT32_(0x0)                                        /* (SFR_ERASE_FLASH_SRAM) If HW_ERASE = 1, and HW erase signal assertion occurs, SRAM0 content is not deleted.  */
#define   SFR_ERASE_FLASH_SRAM_SRAM0_DELETED_Val _UINT32_(0x1)                                        /* (SFR_ERASE_FLASH_SRAM) If HW_ERASE = 1, and HW erase signal assertion occurs, SRAM0 content is deleted.  */
#define SFR_ERASE_FLASH_SRAM_SRAM0_NOT_DELETED (SFR_ERASE_FLASH_SRAM_SRAM0_NOT_DELETED_Val << SFR_ERASE_FLASH_SRAM_SRAM0_Pos) /* (SFR_ERASE_FLASH_SRAM) If HW_ERASE = 1, and HW erase signal assertion occurs, SRAM0 content is not deleted. Position  */
#define SFR_ERASE_FLASH_SRAM_SRAM0_DELETED    (SFR_ERASE_FLASH_SRAM_SRAM0_DELETED_Val << SFR_ERASE_FLASH_SRAM_SRAM0_Pos) /* (SFR_ERASE_FLASH_SRAM) If HW_ERASE = 1, and HW erase signal assertion occurs, SRAM0 content is deleted. Position  */
#define SFR_ERASE_FLASH_SRAM_Msk              _UINT32_(0x00000003)                                 /* (SFR_ERASE_FLASH_SRAM) Register Mask  */

#define SFR_ERASE_FLASH_SRAM_SRAM_Pos         _UINT32_(1)                                          /* (SFR_ERASE_FLASH_SRAM Position) Erase SRAMx Content */
#define SFR_ERASE_FLASH_SRAM_SRAM_Msk         (_UINT32_(0x1) << SFR_ERASE_FLASH_SRAM_SRAM_Pos)     /* (SFR_ERASE_FLASH_SRAM Mask) SRAM */
#define SFR_ERASE_FLASH_SRAM_SRAM(value)      (SFR_ERASE_FLASH_SRAM_SRAM_Msk & (_UINT32_(value) << SFR_ERASE_FLASH_SRAM_SRAM_Pos)) 

/* -------- SFR_PWM_DEBUG : (SFR Offset: 0xB4) (R/W 32) PWM Debug Register -------- */
#define SFR_PWM_DEBUG_CORE0_Pos               _UINT32_(0)                                          /* (SFR_PWM_DEBUG) Debug Information Propagation Mode Position */
#define SFR_PWM_DEBUG_CORE0_Msk               (_UINT32_(0x1) << SFR_PWM_DEBUG_CORE0_Pos)           /* (SFR_PWM_DEBUG) Debug Information Propagation Mode Mask */
#define SFR_PWM_DEBUG_CORE0(value)            (SFR_PWM_DEBUG_CORE0_Msk & (_UINT32_(value) << SFR_PWM_DEBUG_CORE0_Pos)) /* Assigment of value for CORE0 in the SFR_PWM_DEBUG register */
#define   SFR_PWM_DEBUG_CORE0_NOT_SENT_Val    _UINT32_(0x0)                                        /* (SFR_PWM_DEBUG) Core x does not send the debug signal to the PWM.  */
#define   SFR_PWM_DEBUG_CORE0_SENT_Val        _UINT32_(0x1)                                        /* (SFR_PWM_DEBUG) Core x sends the debug signal to PWM. Refer to "Debug Mode" in the section "Pulse Width Modulation Controller (PWM)" for details on configuring an action when the debug signal is active.  */
#define SFR_PWM_DEBUG_CORE0_NOT_SENT          (SFR_PWM_DEBUG_CORE0_NOT_SENT_Val << SFR_PWM_DEBUG_CORE0_Pos) /* (SFR_PWM_DEBUG) Core x does not send the debug signal to the PWM. Position  */
#define SFR_PWM_DEBUG_CORE0_SENT              (SFR_PWM_DEBUG_CORE0_SENT_Val << SFR_PWM_DEBUG_CORE0_Pos) /* (SFR_PWM_DEBUG) Core x sends the debug signal to PWM. Refer to "Debug Mode" in the section "Pulse Width Modulation Controller (PWM)" for details on configuring an action when the debug signal is active. Position  */
#define SFR_PWM_DEBUG_CORE1_Pos               _UINT32_(1)                                          /* (SFR_PWM_DEBUG) Debug Information Propagation Mode Position */
#define SFR_PWM_DEBUG_CORE1_Msk               (_UINT32_(0x1) << SFR_PWM_DEBUG_CORE1_Pos)           /* (SFR_PWM_DEBUG) Debug Information Propagation Mode Mask */
#define SFR_PWM_DEBUG_CORE1(value)            (SFR_PWM_DEBUG_CORE1_Msk & (_UINT32_(value) << SFR_PWM_DEBUG_CORE1_Pos)) /* Assigment of value for CORE1 in the SFR_PWM_DEBUG register */
#define   SFR_PWM_DEBUG_CORE1_NOT_SENT_Val    _UINT32_(0x0)                                        /* (SFR_PWM_DEBUG) Core x does not send the debug signal to the PWM.  */
#define   SFR_PWM_DEBUG_CORE1_SENT_Val        _UINT32_(0x1)                                        /* (SFR_PWM_DEBUG) Core x sends the debug signal to PWM. Refer to "Debug Mode" in the section "Pulse Width Modulation Controller (PWM)" for details on configuring an action when the debug signal is active.  */
#define SFR_PWM_DEBUG_CORE1_NOT_SENT          (SFR_PWM_DEBUG_CORE1_NOT_SENT_Val << SFR_PWM_DEBUG_CORE1_Pos) /* (SFR_PWM_DEBUG) Core x does not send the debug signal to the PWM. Position  */
#define SFR_PWM_DEBUG_CORE1_SENT              (SFR_PWM_DEBUG_CORE1_SENT_Val << SFR_PWM_DEBUG_CORE1_Pos) /* (SFR_PWM_DEBUG) Core x sends the debug signal to PWM. Refer to "Debug Mode" in the section "Pulse Width Modulation Controller (PWM)" for details on configuring an action when the debug signal is active. Position  */
#define SFR_PWM_DEBUG_Msk                     _UINT32_(0x00000003)                                 /* (SFR_PWM_DEBUG) Register Mask  */

#define SFR_PWM_DEBUG_CORE_Pos                _UINT32_(0)                                          /* (SFR_PWM_DEBUG Position) Debug Information Propagation Mode */
#define SFR_PWM_DEBUG_CORE_Msk                (_UINT32_(0x3) << SFR_PWM_DEBUG_CORE_Pos)            /* (SFR_PWM_DEBUG Mask) CORE */
#define SFR_PWM_DEBUG_CORE(value)             (SFR_PWM_DEBUG_CORE_Msk & (_UINT32_(value) << SFR_PWM_DEBUG_CORE_Pos)) 

/* -------- SFR_WAIT_MODE : (SFR Offset: 0xBC) (R/W 32) Improved Wait Mode Register -------- */
#define SFR_WAIT_MODE_CONTROL_Pos             _UINT32_(0)                                          /* (SFR_WAIT_MODE) Improved Wait Mode Control Position */
#define SFR_WAIT_MODE_CONTROL_Msk             (_UINT32_(0x1) << SFR_WAIT_MODE_CONTROL_Pos)         /* (SFR_WAIT_MODE) Improved Wait Mode Control Mask */
#define SFR_WAIT_MODE_CONTROL(value)          (SFR_WAIT_MODE_CONTROL_Msk & (_UINT32_(value) << SFR_WAIT_MODE_CONTROL_Pos)) /* Assigment of value for CONTROL in the SFR_WAIT_MODE register */
#define SFR_WAIT_MODE_Msk                     _UINT32_(0x00000001)                                 /* (SFR_WAIT_MODE) Register Mask  */


/* -------- SFR_WPMR : (SFR Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define SFR_WPMR_WPEN_Pos                     _UINT32_(0)                                          /* (SFR_WPMR) Write Protection Enable Position */
#define SFR_WPMR_WPEN_Msk                     (_UINT32_(0x1) << SFR_WPMR_WPEN_Pos)                 /* (SFR_WPMR) Write Protection Enable Mask */
#define SFR_WPMR_WPEN(value)                  (SFR_WPMR_WPEN_Msk & (_UINT32_(value) << SFR_WPMR_WPEN_Pos)) /* Assigment of value for WPEN in the SFR_WPMR register */
#define SFR_WPMR_WPKEY_Pos                    _UINT32_(8)                                          /* (SFR_WPMR) Write Protection Key Position */
#define SFR_WPMR_WPKEY_Msk                    (_UINT32_(0xFFFFFF) << SFR_WPMR_WPKEY_Pos)           /* (SFR_WPMR) Write Protection Key Mask */
#define SFR_WPMR_WPKEY(value)                 (SFR_WPMR_WPKEY_Msk & (_UINT32_(value) << SFR_WPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the SFR_WPMR register */
#define   SFR_WPMR_WPKEY_PASSWD_Val           _UINT32_(0x534652)                                   /* (SFR_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0.  */
#define SFR_WPMR_WPKEY_PASSWD                 (SFR_WPMR_WPKEY_PASSWD_Val << SFR_WPMR_WPKEY_Pos)    /* (SFR_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0. Position  */
#define SFR_WPMR_Msk                          _UINT32_(0xFFFFFF01)                                 /* (SFR_WPMR) Register Mask  */


/* -------- SFR_WPSR : (SFR Offset: 0xE8) (R/W 32) Write Protection Status Register -------- */
#define SFR_WPSR_WPVS_Pos                     _UINT32_(0)                                          /* (SFR_WPSR) Write Protection Violation Status Position */
#define SFR_WPSR_WPVS_Msk                     (_UINT32_(0x1) << SFR_WPSR_WPVS_Pos)                 /* (SFR_WPSR) Write Protection Violation Status Mask */
#define SFR_WPSR_WPVS(value)                  (SFR_WPSR_WPVS_Msk & (_UINT32_(value) << SFR_WPSR_WPVS_Pos)) /* Assigment of value for WPVS in the SFR_WPSR register */
#define SFR_WPSR_WPSRC_Pos                    _UINT32_(8)                                          /* (SFR_WPSR) Write Protection Source Position */
#define SFR_WPSR_WPSRC_Msk                    (_UINT32_(0xFFFF) << SFR_WPSR_WPSRC_Pos)             /* (SFR_WPSR) Write Protection Source Mask */
#define SFR_WPSR_WPSRC(value)                 (SFR_WPSR_WPSRC_Msk & (_UINT32_(value) << SFR_WPSR_WPSRC_Pos)) /* Assigment of value for WPSRC in the SFR_WPSR register */
#define SFR_WPSR_Msk                          _UINT32_(0x00FFFF01)                                 /* (SFR_WPSR) Register Mask  */


/** \brief SFR register offsets definitions */
#define SFR_SRAM0_SW_CFG_REG_OFST      _UINT32_(0x10)      /* (SFR_SRAM0_SW_CFG) SRAM0 Software Config Register Offset */
#define SFR_FLASH_REG_OFST             _UINT32_(0x70)      /* (SFR_FLASH) Flash Memory Configuration Register Offset */
#define SFR_OPT_LINK_REG_OFST          _UINT32_(0x80)      /* (SFR_OPT_LINK) Optical Link Register Offset */
#define SFR_CORE_DEBUG_CFG_REG_OFST    _UINT32_(0xA0)      /* (SFR_CORE_DEBUG_CFG) Core Debug Configuration Register Offset */
#define SFR_ERASE_FLASH_SRAM_REG_OFST  _UINT32_(0xB0)      /* (SFR_ERASE_FLASH_SRAM) Erase Flash/SRAM Register Offset */
#define SFR_PWM_DEBUG_REG_OFST         _UINT32_(0xB4)      /* (SFR_PWM_DEBUG) PWM Debug Register Offset */
#define SFR_WAIT_MODE_REG_OFST         _UINT32_(0xBC)      /* (SFR_WAIT_MODE) Improved Wait Mode Register Offset */
#define SFR_WPMR_REG_OFST              _UINT32_(0xE4)      /* (SFR_WPMR) Write Protection Mode Register Offset */
#define SFR_WPSR_REG_OFST              _UINT32_(0xE8)      /* (SFR_WPSR) Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SFR register API structure */
typedef struct
{
  __I   uint8_t                        Reserved1[0x10];
  __IO  uint32_t                       SFR_SRAM0_SW_CFG;   /**< Offset: 0x10 (R/W  32) SRAM0 Software Config Register */
  __I   uint8_t                        Reserved2[0x5C];
  __IO  uint32_t                       SFR_FLASH;          /**< Offset: 0x70 (R/W  32) Flash Memory Configuration Register */
  __I   uint8_t                        Reserved3[0x0C];
  __IO  uint32_t                       SFR_OPT_LINK;       /**< Offset: 0x80 (R/W  32) Optical Link Register */
  __I   uint8_t                        Reserved4[0x1C];
  __IO  uint32_t                       SFR_CORE_DEBUG_CFG; /**< Offset: 0xA0 (R/W  32) Core Debug Configuration Register */
  __I   uint8_t                        Reserved5[0x0C];
  __IO  uint32_t                       SFR_ERASE_FLASH_SRAM; /**< Offset: 0xB0 (R/W  32) Erase Flash/SRAM Register */
  __IO  uint32_t                       SFR_PWM_DEBUG;      /**< Offset: 0xB4 (R/W  32) PWM Debug Register */
  __I   uint8_t                        Reserved6[0x04];
  __IO  uint32_t                       SFR_WAIT_MODE;      /**< Offset: 0xBC (R/W  32) Improved Wait Mode Register */
  __I   uint8_t                        Reserved7[0x24];
  __IO  uint32_t                       SFR_WPMR;           /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __IO  uint32_t                       SFR_WPSR;           /**< Offset: 0xE8 (R/W  32) Write Protection Status Register */
} sfr_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CXMTSH_SFR_COMPONENT_H_ */
