/*
 * Component description for ROT
 *
 * Copyright (c) 2023 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description version 2023-04-11T16:47:17Z */
#ifndef _WBZ35_ROT_COMPONENT_H_
#define _WBZ35_ROT_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR ROT                                          */
/* ************************************************************************** */

/* -------- ROT_SECCFG : (ROT Offset: 0x00) (R/W 32) Secure Configuration HOLDING REGISTER1,2 -------- */
#define ROT_SECCFG_RESETVALUE                 _UINT32_(0x00)                                       /*  (ROT_SECCFG) Secure Configuration HOLDING REGISTER1,2  Reset Value */

#define ROT_SECCFG_UUID_LCK_Pos               _UINT32_(4)                                          /* (ROT_SECCFG) Programming lock bits for Unique ID fuses Position */
#define ROT_SECCFG_UUID_LCK_Msk               (_UINT32_(0x3) << ROT_SECCFG_UUID_LCK_Pos)           /* (ROT_SECCFG) Programming lock bits for Unique ID fuses Mask */
#define ROT_SECCFG_UUID_LCK(value)            (ROT_SECCFG_UUID_LCK_Msk & (_UINT32_(value) << ROT_SECCFG_UUID_LCK_Pos)) /* Assigment of value for UUID_LCK in the ROT_SECCFG register */
#define   ROT_SECCFG_UUID_LCK_0_Val           _UINT32_(0x0)                                        /* (ROT_SECCFG) Unique ID is not locked  */
#define   ROT_SECCFG_UUID_LCK_1_Val           _UINT32_(0x1)                                        /* (ROT_SECCFG) Unique ID is locked and cannot be programmed  */
#define   ROT_SECCFG_UUID_LCK_2_Val           _UINT32_(0x2)                                        /* (ROT_SECCFG) Unique ID is locked and cannot be programmed  */
#define   ROT_SECCFG_UUID_LCK_3_Val           _UINT32_(0x3)                                        /* (ROT_SECCFG) Unique ID is locked and cannot be programmed  */
#define ROT_SECCFG_UUID_LCK_0                 (ROT_SECCFG_UUID_LCK_0_Val << ROT_SECCFG_UUID_LCK_Pos) /* (ROT_SECCFG) Unique ID is not locked Position  */
#define ROT_SECCFG_UUID_LCK_1                 (ROT_SECCFG_UUID_LCK_1_Val << ROT_SECCFG_UUID_LCK_Pos) /* (ROT_SECCFG) Unique ID is locked and cannot be programmed Position  */
#define ROT_SECCFG_UUID_LCK_2                 (ROT_SECCFG_UUID_LCK_2_Val << ROT_SECCFG_UUID_LCK_Pos) /* (ROT_SECCFG) Unique ID is locked and cannot be programmed Position  */
#define ROT_SECCFG_UUID_LCK_3                 (ROT_SECCFG_UUID_LCK_3_Val << ROT_SECCFG_UUID_LCK_Pos) /* (ROT_SECCFG) Unique ID is locked and cannot be programmed Position  */
#define ROT_SECCFG_DEBUG_LCK_Pos              _UINT32_(6)                                          /* (ROT_SECCFG) Lock bits for debug/programming Position */
#define ROT_SECCFG_DEBUG_LCK_Msk              (_UINT32_(0x3) << ROT_SECCFG_DEBUG_LCK_Pos)          /* (ROT_SECCFG) Lock bits for debug/programming Mask */
#define ROT_SECCFG_DEBUG_LCK(value)           (ROT_SECCFG_DEBUG_LCK_Msk & (_UINT32_(value) << ROT_SECCFG_DEBUG_LCK_Pos)) /* Assigment of value for DEBUG_LCK in the ROT_SECCFG register */
#define   ROT_SECCFG_DEBUG_LCK_0_Val          _UINT32_(0x0)                                        /* (ROT_SECCFG) Debug is not locked  */
#define   ROT_SECCFG_DEBUG_LCK_1_Val          _UINT32_(0x1)                                        /* (ROT_SECCFG) Debug is locked  */
#define   ROT_SECCFG_DEBUG_LCK_2_Val          _UINT32_(0x2)                                        /* (ROT_SECCFG) Debug is locked  */
#define   ROT_SECCFG_DEBUG_LCK_3_Val          _UINT32_(0x3)                                        /* (ROT_SECCFG) Debug is locked  */
#define ROT_SECCFG_DEBUG_LCK_0                (ROT_SECCFG_DEBUG_LCK_0_Val << ROT_SECCFG_DEBUG_LCK_Pos) /* (ROT_SECCFG) Debug is not locked Position  */
#define ROT_SECCFG_DEBUG_LCK_1                (ROT_SECCFG_DEBUG_LCK_1_Val << ROT_SECCFG_DEBUG_LCK_Pos) /* (ROT_SECCFG) Debug is locked Position  */
#define ROT_SECCFG_DEBUG_LCK_2                (ROT_SECCFG_DEBUG_LCK_2_Val << ROT_SECCFG_DEBUG_LCK_Pos) /* (ROT_SECCFG) Debug is locked Position  */
#define ROT_SECCFG_DEBUG_LCK_3                (ROT_SECCFG_DEBUG_LCK_3_Val << ROT_SECCFG_DEBUG_LCK_Pos) /* (ROT_SECCFG) Debug is locked Position  */
#define ROT_SECCFG_ROOT_KEY_LCK_Pos           _UINT32_(8)                                          /* (ROT_SECCFG) Lock bits for storage root Key Position */
#define ROT_SECCFG_ROOT_KEY_LCK_Msk           (_UINT32_(0x3) << ROT_SECCFG_ROOT_KEY_LCK_Pos)       /* (ROT_SECCFG) Lock bits for storage root Key Mask */
#define ROT_SECCFG_ROOT_KEY_LCK(value)        (ROT_SECCFG_ROOT_KEY_LCK_Msk & (_UINT32_(value) << ROT_SECCFG_ROOT_KEY_LCK_Pos)) /* Assigment of value for ROOT_KEY_LCK in the ROT_SECCFG register */
#define   ROT_SECCFG_ROOT_KEY_LCK_0_Val       _UINT32_(0x0)                                        /* (ROT_SECCFG) Storage root key is not locked  */
#define   ROT_SECCFG_ROOT_KEY_LCK_1_Val       _UINT32_(0x1)                                        /* (ROT_SECCFG) Storage root key is locked and cannot be programmed  */
#define   ROT_SECCFG_ROOT_KEY_LCK_2_Val       _UINT32_(0x2)                                        /* (ROT_SECCFG) Storage root key is locked and cannot be programmed  */
#define   ROT_SECCFG_ROOT_KEY_LCK_3_Val       _UINT32_(0x3)                                        /* (ROT_SECCFG) Storage root key is locked and cannot be programmed  */
#define ROT_SECCFG_ROOT_KEY_LCK_0             (ROT_SECCFG_ROOT_KEY_LCK_0_Val << ROT_SECCFG_ROOT_KEY_LCK_Pos) /* (ROT_SECCFG) Storage root key is not locked Position  */
#define ROT_SECCFG_ROOT_KEY_LCK_1             (ROT_SECCFG_ROOT_KEY_LCK_1_Val << ROT_SECCFG_ROOT_KEY_LCK_Pos) /* (ROT_SECCFG) Storage root key is locked and cannot be programmed Position  */
#define ROT_SECCFG_ROOT_KEY_LCK_2             (ROT_SECCFG_ROOT_KEY_LCK_2_Val << ROT_SECCFG_ROOT_KEY_LCK_Pos) /* (ROT_SECCFG) Storage root key is locked and cannot be programmed Position  */
#define ROT_SECCFG_ROOT_KEY_LCK_3             (ROT_SECCFG_ROOT_KEY_LCK_3_Val << ROT_SECCFG_ROOT_KEY_LCK_Pos) /* (ROT_SECCFG) Storage root key is locked and cannot be programmed Position  */
#define ROT_SECCFG_BOOT_KEY_LCK_Pos           _UINT32_(10)                                         /* (ROT_SECCFG) Lock bits for Secure Boot/OTA Key Position */
#define ROT_SECCFG_BOOT_KEY_LCK_Msk           (_UINT32_(0x3) << ROT_SECCFG_BOOT_KEY_LCK_Pos)       /* (ROT_SECCFG) Lock bits for Secure Boot/OTA Key Mask */
#define ROT_SECCFG_BOOT_KEY_LCK(value)        (ROT_SECCFG_BOOT_KEY_LCK_Msk & (_UINT32_(value) << ROT_SECCFG_BOOT_KEY_LCK_Pos)) /* Assigment of value for BOOT_KEY_LCK in the ROT_SECCFG register */
#define   ROT_SECCFG_BOOT_KEY_LCK_0_Val       _UINT32_(0x0)                                        /* (ROT_SECCFG) Secure boot key is not locked  */
#define   ROT_SECCFG_BOOT_KEY_LCK_1_Val       _UINT32_(0x1)                                        /* (ROT_SECCFG) Secure boot key is locked and cannot be programmed  */
#define   ROT_SECCFG_BOOT_KEY_LCK_2_Val       _UINT32_(0x2)                                        /* (ROT_SECCFG) Secure boot key is locked and cannot be programmed  */
#define   ROT_SECCFG_BOOT_KEY_LCK_3_Val       _UINT32_(0x3)                                        /* (ROT_SECCFG) Secure boot key is locked and cannot be programmed  */
#define ROT_SECCFG_BOOT_KEY_LCK_0             (ROT_SECCFG_BOOT_KEY_LCK_0_Val << ROT_SECCFG_BOOT_KEY_LCK_Pos) /* (ROT_SECCFG) Secure boot key is not locked Position  */
#define ROT_SECCFG_BOOT_KEY_LCK_1             (ROT_SECCFG_BOOT_KEY_LCK_1_Val << ROT_SECCFG_BOOT_KEY_LCK_Pos) /* (ROT_SECCFG) Secure boot key is locked and cannot be programmed Position  */
#define ROT_SECCFG_BOOT_KEY_LCK_2             (ROT_SECCFG_BOOT_KEY_LCK_2_Val << ROT_SECCFG_BOOT_KEY_LCK_Pos) /* (ROT_SECCFG) Secure boot key is locked and cannot be programmed Position  */
#define ROT_SECCFG_BOOT_KEY_LCK_3             (ROT_SECCFG_BOOT_KEY_LCK_3_Val << ROT_SECCFG_BOOT_KEY_LCK_Pos) /* (ROT_SECCFG) Secure boot key is locked and cannot be programmed Position  */
#define ROT_SECCFG_ADD_BOOT_KEY_Pos           _UINT32_(16)                                         /* (ROT_SECCFG) Additional boot Key bit Position */
#define ROT_SECCFG_ADD_BOOT_KEY_Msk           (_UINT32_(0x1) << ROT_SECCFG_ADD_BOOT_KEY_Pos)       /* (ROT_SECCFG) Additional boot Key bit Mask */
#define ROT_SECCFG_ADD_BOOT_KEY(value)        (ROT_SECCFG_ADD_BOOT_KEY_Msk & (_UINT32_(value) << ROT_SECCFG_ADD_BOOT_KEY_Pos)) /* Assigment of value for ADD_BOOT_KEY in the ROT_SECCFG register */
#define ROT_SECCFG_Msk                        _UINT32_(0x00010FF0)                                 /* (ROT_SECCFG) Register Mask  */


/* -------- ROT_SEC_BOOT : (ROT Offset: 0xC00) (R/W 32) Secure Boot Register -------- */
#define ROT_SEC_BOOT_RESETVALUE               _UINT32_(0x10002)                                    /*  (ROT_SEC_BOOT) Secure Boot Register  Reset Value */

#define ROT_SEC_BOOT_SEC_BOOT_REQD_Pos        _UINT32_(0)                                          /* (ROT_SEC_BOOT) Bits to indicate that secure boot is required on the next device reset. Position */
#define ROT_SEC_BOOT_SEC_BOOT_REQD_Msk        (_UINT32_(0x3) << ROT_SEC_BOOT_SEC_BOOT_REQD_Pos)    /* (ROT_SEC_BOOT) Bits to indicate that secure boot is required on the next device reset. Mask */
#define ROT_SEC_BOOT_SEC_BOOT_REQD(value)     (ROT_SEC_BOOT_SEC_BOOT_REQD_Msk & (_UINT32_(value) << ROT_SEC_BOOT_SEC_BOOT_REQD_Pos)) /* Assigment of value for SEC_BOOT_REQD in the ROT_SEC_BOOT register */
#define   ROT_SEC_BOOT_SEC_BOOT_REQD_0_Val    _UINT32_(0x0)                                        /* (ROT_SEC_BOOT) S ecure boot code authentication is required  */
#define   ROT_SEC_BOOT_SEC_BOOT_REQD_1_Val    _UINT32_(0x1)                                        /* (ROT_SEC_BOOT) S ecure boot code authentication is NOT required  */
#define   ROT_SEC_BOOT_SEC_BOOT_REQD_2_Val    _UINT32_(0x2)                                        /* (ROT_SEC_BOOT) S ecure boot code authentication is NOT required  */
#define   ROT_SEC_BOOT_SEC_BOOT_REQD_3_Val    _UINT32_(0x3)                                        /* (ROT_SEC_BOOT) S ecure boot code authentication is required  */
#define ROT_SEC_BOOT_SEC_BOOT_REQD_0          (ROT_SEC_BOOT_SEC_BOOT_REQD_0_Val << ROT_SEC_BOOT_SEC_BOOT_REQD_Pos) /* (ROT_SEC_BOOT) S ecure boot code authentication is required Position  */
#define ROT_SEC_BOOT_SEC_BOOT_REQD_1          (ROT_SEC_BOOT_SEC_BOOT_REQD_1_Val << ROT_SEC_BOOT_SEC_BOOT_REQD_Pos) /* (ROT_SEC_BOOT) S ecure boot code authentication is NOT required Position  */
#define ROT_SEC_BOOT_SEC_BOOT_REQD_2          (ROT_SEC_BOOT_SEC_BOOT_REQD_2_Val << ROT_SEC_BOOT_SEC_BOOT_REQD_Pos) /* (ROT_SEC_BOOT) S ecure boot code authentication is NOT required Position  */
#define ROT_SEC_BOOT_SEC_BOOT_REQD_3          (ROT_SEC_BOOT_SEC_BOOT_REQD_3_Val << ROT_SEC_BOOT_SEC_BOOT_REQD_Pos) /* (ROT_SEC_BOOT) S ecure boot code authentication is required Position  */
#define ROT_SEC_BOOT_SEC_BOOT_STATUS_Pos      _UINT32_(8)                                          /* (ROT_SEC_BOOT) Bits to indicate that secure boot status Position */
#define ROT_SEC_BOOT_SEC_BOOT_STATUS_Msk      (_UINT32_(0xFF) << ROT_SEC_BOOT_SEC_BOOT_STATUS_Pos) /* (ROT_SEC_BOOT) Bits to indicate that secure boot status Mask */
#define ROT_SEC_BOOT_SEC_BOOT_STATUS(value)   (ROT_SEC_BOOT_SEC_BOOT_STATUS_Msk & (_UINT32_(value) << ROT_SEC_BOOT_SEC_BOOT_STATUS_Pos)) /* Assigment of value for SEC_BOOT_STATUS in the ROT_SEC_BOOT register */
#define ROT_SEC_BOOT_SEC_BOOT_DONE_Pos        _UINT32_(16)                                         /* (ROT_SEC_BOOT) Bits to indicate that secure boot is done Position */
#define ROT_SEC_BOOT_SEC_BOOT_DONE_Msk        (_UINT32_(0x3) << ROT_SEC_BOOT_SEC_BOOT_DONE_Pos)    /* (ROT_SEC_BOOT) Bits to indicate that secure boot is done Mask */
#define ROT_SEC_BOOT_SEC_BOOT_DONE(value)     (ROT_SEC_BOOT_SEC_BOOT_DONE_Msk & (_UINT32_(value) << ROT_SEC_BOOT_SEC_BOOT_DONE_Pos)) /* Assigment of value for SEC_BOOT_DONE in the ROT_SEC_BOOT register */
#define   ROT_SEC_BOOT_SEC_BOOT_DONE_0_Val    _UINT32_(0x0)                                        /* (ROT_SEC_BOOT) S ecure boot is done  */
#define   ROT_SEC_BOOT_SEC_BOOT_DONE_1_Val    _UINT32_(0x1)                                        /* (ROT_SEC_BOOT) S ecure boot is not done  */
#define   ROT_SEC_BOOT_SEC_BOOT_DONE_2_Val    _UINT32_(0x2)                                        /* (ROT_SEC_BOOT) S ecure boot is not done  */
#define   ROT_SEC_BOOT_SEC_BOOT_DONE_3_Val    _UINT32_(0x3)                                        /* (ROT_SEC_BOOT) S ecure boot is done  */
#define ROT_SEC_BOOT_SEC_BOOT_DONE_0          (ROT_SEC_BOOT_SEC_BOOT_DONE_0_Val << ROT_SEC_BOOT_SEC_BOOT_DONE_Pos) /* (ROT_SEC_BOOT) S ecure boot is done Position  */
#define ROT_SEC_BOOT_SEC_BOOT_DONE_1          (ROT_SEC_BOOT_SEC_BOOT_DONE_1_Val << ROT_SEC_BOOT_SEC_BOOT_DONE_Pos) /* (ROT_SEC_BOOT) S ecure boot is not done Position  */
#define ROT_SEC_BOOT_SEC_BOOT_DONE_2          (ROT_SEC_BOOT_SEC_BOOT_DONE_2_Val << ROT_SEC_BOOT_SEC_BOOT_DONE_Pos) /* (ROT_SEC_BOOT) S ecure boot is not done Position  */
#define ROT_SEC_BOOT_SEC_BOOT_DONE_3          (ROT_SEC_BOOT_SEC_BOOT_DONE_3_Val << ROT_SEC_BOOT_SEC_BOOT_DONE_Pos) /* (ROT_SEC_BOOT) S ecure boot is done Position  */
#define ROT_SEC_BOOT_Msk                      _UINT32_(0x0003FF03)                                 /* (ROT_SEC_BOOT) Register Mask  */


/* -------- ROT_EFUSE_RWDATA : (ROT Offset: 0xC04) (R/W 32) EFuse RW Data Register -------- */
#define ROT_EFUSE_RWDATA_RESETVALUE           _UINT32_(0x00)                                       /*  (ROT_EFUSE_RWDATA) EFuse RW Data Register  Reset Value */

#define ROT_EFUSE_RWDATA_DATA_Pos             _UINT32_(0)                                          /* (ROT_EFUSE_RWDATA) eFuse Program (Write) Data Position */
#define ROT_EFUSE_RWDATA_DATA_Msk             (_UINT32_(0xFF) << ROT_EFUSE_RWDATA_DATA_Pos)        /* (ROT_EFUSE_RWDATA) eFuse Program (Write) Data Mask */
#define ROT_EFUSE_RWDATA_DATA(value)          (ROT_EFUSE_RWDATA_DATA_Msk & (_UINT32_(value) << ROT_EFUSE_RWDATA_DATA_Pos)) /* Assigment of value for DATA in the ROT_EFUSE_RWDATA register */
#define ROT_EFUSE_RWDATA_ADDR_Pos             _UINT32_(16)                                         /* (ROT_EFUSE_RWDATA) eFuse Program/Read Address Position */
#define ROT_EFUSE_RWDATA_ADDR_Msk             (_UINT32_(0xFFF) << ROT_EFUSE_RWDATA_ADDR_Pos)       /* (ROT_EFUSE_RWDATA) eFuse Program/Read Address Mask */
#define ROT_EFUSE_RWDATA_ADDR(value)          (ROT_EFUSE_RWDATA_ADDR_Msk & (_UINT32_(value) << ROT_EFUSE_RWDATA_ADDR_Pos)) /* Assigment of value for ADDR in the ROT_EFUSE_RWDATA register */
#define ROT_EFUSE_RWDATA_Msk                  _UINT32_(0x0FFF00FF)                                 /* (ROT_EFUSE_RWDATA) Register Mask  */


/* -------- ROT_EFUSE_CON : (ROT Offset: 0xC08) (R/W 32) Efuse Configuration Register2 -------- */
#define ROT_EFUSE_CON_RESETVALUE              _UINT32_(0x00)                                       /*  (ROT_EFUSE_CON) Efuse Configuration Register2  Reset Value */

#define ROT_EFUSE_CON_PGM_1BIT_Pos            _UINT32_(0)                                          /* (ROT_EFUSE_CON) eFuse CTRL to program 1 bit at a time. Valid only when EN_PGM is set Position */
#define ROT_EFUSE_CON_PGM_1BIT_Msk            (_UINT32_(0x1) << ROT_EFUSE_CON_PGM_1BIT_Pos)        /* (ROT_EFUSE_CON) eFuse CTRL to program 1 bit at a time. Valid only when EN_PGM is set Mask */
#define ROT_EFUSE_CON_PGM_1BIT(value)         (ROT_EFUSE_CON_PGM_1BIT_Msk & (_UINT32_(value) << ROT_EFUSE_CON_PGM_1BIT_Pos)) /* Assigment of value for PGM_1BIT in the ROT_EFUSE_CON register */
#define   ROT_EFUSE_CON_PGM_1BIT_0_Val        _UINT32_(0x0)                                        /* (ROT_EFUSE_CON) EFuse controller will program EFUSE_RWDATA.DATA[15:0] to the address in EFUSE_RWDATA.ADDR[11:3]  */
#define   ROT_EFUSE_CON_PGM_1BIT_1_Val        _UINT32_(0x1)                                        /* (ROT_EFUSE_CON) EFuse controller will program EFUSE_RWDATA.DATA[0] to the address in EFUSE_RWDATA.ADDR[11:0]  */
#define ROT_EFUSE_CON_PGM_1BIT_0              (ROT_EFUSE_CON_PGM_1BIT_0_Val << ROT_EFUSE_CON_PGM_1BIT_Pos) /* (ROT_EFUSE_CON) EFuse controller will program EFUSE_RWDATA.DATA[15:0] to the address in EFUSE_RWDATA.ADDR[11:3] Position  */
#define ROT_EFUSE_CON_PGM_1BIT_1              (ROT_EFUSE_CON_PGM_1BIT_1_Val << ROT_EFUSE_CON_PGM_1BIT_Pos) /* (ROT_EFUSE_CON) EFuse controller will program EFUSE_RWDATA.DATA[0] to the address in EFUSE_RWDATA.ADDR[11:0] Position  */
#define ROT_EFUSE_CON_PGM_MODE_Pos            _UINT32_(1)                                          /* (ROT_EFUSE_CON) eFuse Programming Mode Enable bit Position */
#define ROT_EFUSE_CON_PGM_MODE_Msk            (_UINT32_(0x1) << ROT_EFUSE_CON_PGM_MODE_Pos)        /* (ROT_EFUSE_CON) eFuse Programming Mode Enable bit Mask */
#define ROT_EFUSE_CON_PGM_MODE(value)         (ROT_EFUSE_CON_PGM_MODE_Msk & (_UINT32_(value) << ROT_EFUSE_CON_PGM_MODE_Pos)) /* Assigment of value for PGM_MODE in the ROT_EFUSE_CON register */
#define   ROT_EFUSE_CON_PGM_MODE_0_Val        _UINT32_(0x0)                                        /* (ROT_EFUSE_CON) EFuse Programming disabled  */
#define   ROT_EFUSE_CON_PGM_MODE_1_Val        _UINT32_(0x1)                                        /* (ROT_EFUSE_CON) EFuse Programming enabled  */
#define ROT_EFUSE_CON_PGM_MODE_0              (ROT_EFUSE_CON_PGM_MODE_0_Val << ROT_EFUSE_CON_PGM_MODE_Pos) /* (ROT_EFUSE_CON) EFuse Programming disabled Position  */
#define ROT_EFUSE_CON_PGM_MODE_1              (ROT_EFUSE_CON_PGM_MODE_1_Val << ROT_EFUSE_CON_PGM_MODE_Pos) /* (ROT_EFUSE_CON) EFuse Programming enabled Position  */
#define ROT_EFUSE_CON_EN_LD_Pos               _UINT32_(5)                                          /* (ROT_EFUSE_CON) eFuse Word Read Start bit for loading the fuse byte pointed by ADDR field into the holding register Position */
#define ROT_EFUSE_CON_EN_LD_Msk               (_UINT32_(0x1) << ROT_EFUSE_CON_EN_LD_Pos)           /* (ROT_EFUSE_CON) eFuse Word Read Start bit for loading the fuse byte pointed by ADDR field into the holding register Mask */
#define ROT_EFUSE_CON_EN_LD(value)            (ROT_EFUSE_CON_EN_LD_Msk & (_UINT32_(value) << ROT_EFUSE_CON_EN_LD_Pos)) /* Assigment of value for EN_LD in the ROT_EFUSE_CON register */
#define   ROT_EFUSE_CON_EN_LD_0_Val           _UINT32_(0x0)                                        /* (ROT_EFUSE_CON) EFuse Read operation has completed  */
#define   ROT_EFUSE_CON_EN_LD_1_Val           _UINT32_(0x1)                                        /* (ROT_EFUSE_CON) Start eFuse Read operation for specified eFuse word as addressed in EFUSE_RWDATA register  */
#define ROT_EFUSE_CON_EN_LD_0                 (ROT_EFUSE_CON_EN_LD_0_Val << ROT_EFUSE_CON_EN_LD_Pos) /* (ROT_EFUSE_CON) EFuse Read operation has completed Position  */
#define ROT_EFUSE_CON_EN_LD_1                 (ROT_EFUSE_CON_EN_LD_1_Val << ROT_EFUSE_CON_EN_LD_Pos) /* (ROT_EFUSE_CON) Start eFuse Read operation for specified eFuse word as addressed in EFUSE_RWDATA register Position  */
#define ROT_EFUSE_CON_EN_LD_ALL1_Pos          _UINT32_(6)                                          /* (ROT_EFUSE_CON) eFuse Panel Read Start bit for loading into the holding registers Position */
#define ROT_EFUSE_CON_EN_LD_ALL1_Msk          (_UINT32_(0x1) << ROT_EFUSE_CON_EN_LD_ALL1_Pos)      /* (ROT_EFUSE_CON) eFuse Panel Read Start bit for loading into the holding registers Mask */
#define ROT_EFUSE_CON_EN_LD_ALL1(value)       (ROT_EFUSE_CON_EN_LD_ALL1_Msk & (_UINT32_(value) << ROT_EFUSE_CON_EN_LD_ALL1_Pos)) /* Assigment of value for EN_LD_ALL1 in the ROT_EFUSE_CON register */
#define   ROT_EFUSE_CON_EN_LD_ALL1_0_Val      _UINT32_(0x0)                                        /* (ROT_EFUSE_CON) EFuse Read operation has completed  */
#define   ROT_EFUSE_CON_EN_LD_ALL1_1_Val      _UINT32_(0x1)                                        /* (ROT_EFUSE_CON) Start eFuse Read operation for entire eFuse panel  */
#define ROT_EFUSE_CON_EN_LD_ALL1_0            (ROT_EFUSE_CON_EN_LD_ALL1_0_Val << ROT_EFUSE_CON_EN_LD_ALL1_Pos) /* (ROT_EFUSE_CON) EFuse Read operation has completed Position  */
#define ROT_EFUSE_CON_EN_LD_ALL1_1            (ROT_EFUSE_CON_EN_LD_ALL1_1_Val << ROT_EFUSE_CON_EN_LD_ALL1_Pos) /* (ROT_EFUSE_CON) Start eFuse Read operation for entire eFuse panel Position  */
#define ROT_EFUSE_CON_EN_PGM_Pos              _UINT32_(7)                                          /* (ROT_EFUSE_CON) eFuse Programming Start bit Position */
#define ROT_EFUSE_CON_EN_PGM_Msk              (_UINT32_(0x1) << ROT_EFUSE_CON_EN_PGM_Pos)          /* (ROT_EFUSE_CON) eFuse Programming Start bit Mask */
#define ROT_EFUSE_CON_EN_PGM(value)           (ROT_EFUSE_CON_EN_PGM_Msk & (_UINT32_(value) << ROT_EFUSE_CON_EN_PGM_Pos)) /* Assigment of value for EN_PGM in the ROT_EFUSE_CON register */
#define   ROT_EFUSE_CON_EN_PGM_0_Val          _UINT32_(0x0)                                        /* (ROT_EFUSE_CON) EFuse Programming operation has completed  */
#define   ROT_EFUSE_CON_EN_PGM_1_Val          _UINT32_(0x1)                                        /* (ROT_EFUSE_CON) Start eFuse Programming operation  */
#define ROT_EFUSE_CON_EN_PGM_0                (ROT_EFUSE_CON_EN_PGM_0_Val << ROT_EFUSE_CON_EN_PGM_Pos) /* (ROT_EFUSE_CON) EFuse Programming operation has completed Position  */
#define ROT_EFUSE_CON_EN_PGM_1                (ROT_EFUSE_CON_EN_PGM_1_Val << ROT_EFUSE_CON_EN_PGM_Pos) /* (ROT_EFUSE_CON) Start eFuse Programming operation Position  */
#define ROT_EFUSE_CON_Msk                     _UINT32_(0x000000E3)                                 /* (ROT_EFUSE_CON) Register Mask  */

#define ROT_EFUSE_CON_EN_LD_ALL_Pos           _UINT32_(6)                                          /* (ROT_EFUSE_CON Position) eFuse Panel Read Start bit for loading into the holding registers */
#define ROT_EFUSE_CON_EN_LD_ALL_Msk           (_UINT32_(0x1) << ROT_EFUSE_CON_EN_LD_ALL_Pos)       /* (ROT_EFUSE_CON Mask) EN_LD_ALL */
#define ROT_EFUSE_CON_EN_LD_ALL(value)        (ROT_EFUSE_CON_EN_LD_ALL_Msk & (_UINT32_(value) << ROT_EFUSE_CON_EN_LD_ALL_Pos)) 

/** \brief ROT register offsets definitions */
#define ROT_SECCFG_REG_OFST            _UINT32_(0x00)      /* (ROT_SECCFG) Secure Configuration HOLDING REGISTER1,2 Offset */
#define ROT_SEC_BOOT_REG_OFST          _UINT32_(0xC00)     /* (ROT_SEC_BOOT) Secure Boot Register Offset */
#define ROT_EFUSE_RWDATA_REG_OFST      _UINT32_(0xC04)     /* (ROT_EFUSE_RWDATA) EFuse RW Data Register Offset */
#define ROT_EFUSE_CON_REG_OFST         _UINT32_(0xC08)     /* (ROT_EFUSE_CON) Efuse Configuration Register2 Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief ROT register API structure */
typedef struct
{  /* Secure Root of Trust Macro */
  __IO  uint32_t                       ROT_SECCFG;         /**< Offset: 0x00 (R/W  32) Secure Configuration HOLDING REGISTER1,2 */
  __I   uint8_t                        Reserved1[0xBFC];
  __IO  uint32_t                       ROT_SEC_BOOT;       /**< Offset: 0xC00 (R/W  32) Secure Boot Register */
  __IO  uint32_t                       ROT_EFUSE_RWDATA;   /**< Offset: 0xC04 (R/W  32) EFuse RW Data Register */
  __IO  uint32_t                       ROT_EFUSE_CON;      /**< Offset: 0xC08 (R/W  32) Efuse Configuration Register2 */
} rot_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _WBZ35_ROT_COMPONENT_H_ */
