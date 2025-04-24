/*
 * Component description for EFUSE
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
#ifndef _PIC32WM_BZ6_EFUSE_COMPONENT_H_
#define _PIC32WM_BZ6_EFUSE_COMPONENT_H_

/* ************************************************************************** */
/*                     SOFTWARE API DEFINITION FOR EFUSE                      */
/* ************************************************************************** */

/* -------- EFUSE_SECCFG0 : (EFUSE Offset: 0x00) (R/W 8) Secure Configuration -------- */
#define EFUSE_SECCFG0_RESETVALUE              _UINT8_(0x00)                                        /*  (EFUSE_SECCFG0) Secure Configuration  Reset Value */

#define EFUSE_SECCFG0_UUID_LCK_Pos            _UINT8_(4)                                           /* (EFUSE_SECCFG0) Programming lock bits for Unique ID fuses Position */
#define EFUSE_SECCFG0_UUID_LCK_Msk            (_UINT8_(0x3) << EFUSE_SECCFG0_UUID_LCK_Pos)         /* (EFUSE_SECCFG0) Programming lock bits for Unique ID fuses Mask */
#define EFUSE_SECCFG0_UUID_LCK(value)         (EFUSE_SECCFG0_UUID_LCK_Msk & (_UINT8_(value) << EFUSE_SECCFG0_UUID_LCK_Pos)) /* Assignment of value for UUID_LCK in the EFUSE_SECCFG0 register */
#define   EFUSE_SECCFG0_UUID_LCK_0_Val        _UINT8_(0x0)                                         /* (EFUSE_SECCFG0) Unique ID is not locked  */
#define   EFUSE_SECCFG0_UUID_LCK_1_Val        _UINT8_(0x1)                                         /* (EFUSE_SECCFG0) Unique ID is locked and cannot be programmed  */
#define   EFUSE_SECCFG0_UUID_LCK_2_Val        _UINT8_(0x2)                                         /* (EFUSE_SECCFG0) Unique ID is locked and cannot be programmed  */
#define   EFUSE_SECCFG0_UUID_LCK_3_Val        _UINT8_(0x3)                                         /* (EFUSE_SECCFG0) Unique ID is locked and cannot be programmed  */
#define EFUSE_SECCFG0_UUID_LCK_0              (EFUSE_SECCFG0_UUID_LCK_0_Val << EFUSE_SECCFG0_UUID_LCK_Pos) /* (EFUSE_SECCFG0) Unique ID is not locked Position */
#define EFUSE_SECCFG0_UUID_LCK_1              (EFUSE_SECCFG0_UUID_LCK_1_Val << EFUSE_SECCFG0_UUID_LCK_Pos) /* (EFUSE_SECCFG0) Unique ID is locked and cannot be programmed Position */
#define EFUSE_SECCFG0_UUID_LCK_2              (EFUSE_SECCFG0_UUID_LCK_2_Val << EFUSE_SECCFG0_UUID_LCK_Pos) /* (EFUSE_SECCFG0) Unique ID is locked and cannot be programmed Position */
#define EFUSE_SECCFG0_UUID_LCK_3              (EFUSE_SECCFG0_UUID_LCK_3_Val << EFUSE_SECCFG0_UUID_LCK_Pos) /* (EFUSE_SECCFG0) Unique ID is locked and cannot be programmed Position */
#define EFUSE_SECCFG0_DEBUG_LCK_Pos           _UINT8_(6)                                           /* (EFUSE_SECCFG0) Lock bits for debug/programming Position */
#define EFUSE_SECCFG0_DEBUG_LCK_Msk           (_UINT8_(0x3) << EFUSE_SECCFG0_DEBUG_LCK_Pos)        /* (EFUSE_SECCFG0) Lock bits for debug/programming Mask */
#define EFUSE_SECCFG0_DEBUG_LCK(value)        (EFUSE_SECCFG0_DEBUG_LCK_Msk & (_UINT8_(value) << EFUSE_SECCFG0_DEBUG_LCK_Pos)) /* Assignment of value for DEBUG_LCK in the EFUSE_SECCFG0 register */
#define   EFUSE_SECCFG0_DEBUG_LCK_0_Val       _UINT8_(0x0)                                         /* (EFUSE_SECCFG0) Debug is not locked  */
#define   EFUSE_SECCFG0_DEBUG_LCK_1_Val       _UINT8_(0x1)                                         /* (EFUSE_SECCFG0) Debug is locked  */
#define   EFUSE_SECCFG0_DEBUG_LCK_2_Val       _UINT8_(0x2)                                         /* (EFUSE_SECCFG0) Debug is locked  */
#define   EFUSE_SECCFG0_DEBUG_LCK_3_Val       _UINT8_(0x3)                                         /* (EFUSE_SECCFG0) Debug is locked  */
#define EFUSE_SECCFG0_DEBUG_LCK_0             (EFUSE_SECCFG0_DEBUG_LCK_0_Val << EFUSE_SECCFG0_DEBUG_LCK_Pos) /* (EFUSE_SECCFG0) Debug is not locked Position */
#define EFUSE_SECCFG0_DEBUG_LCK_1             (EFUSE_SECCFG0_DEBUG_LCK_1_Val << EFUSE_SECCFG0_DEBUG_LCK_Pos) /* (EFUSE_SECCFG0) Debug is locked Position */
#define EFUSE_SECCFG0_DEBUG_LCK_2             (EFUSE_SECCFG0_DEBUG_LCK_2_Val << EFUSE_SECCFG0_DEBUG_LCK_Pos) /* (EFUSE_SECCFG0) Debug is locked Position */
#define EFUSE_SECCFG0_DEBUG_LCK_3             (EFUSE_SECCFG0_DEBUG_LCK_3_Val << EFUSE_SECCFG0_DEBUG_LCK_Pos) /* (EFUSE_SECCFG0) Debug is locked Position */
#define EFUSE_SECCFG0_Msk                     _UINT8_(0xF0)                                        /* (EFUSE_SECCFG0) Register Mask  */


/* -------- EFUSE_SECCFG1 : (EFUSE Offset: 0x01) (R/W 8) Secure Configuration -------- */
#define EFUSE_SECCFG1_RESETVALUE              _UINT8_(0x00)                                        /*  (EFUSE_SECCFG1) Secure Configuration  Reset Value */

#define EFUSE_SECCFG1_ROOT_KEY_LCK_Pos        _UINT8_(0)                                           /* (EFUSE_SECCFG1) Lock bits for storage root Key Position */
#define EFUSE_SECCFG1_ROOT_KEY_LCK_Msk        (_UINT8_(0x3) << EFUSE_SECCFG1_ROOT_KEY_LCK_Pos)     /* (EFUSE_SECCFG1) Lock bits for storage root Key Mask */
#define EFUSE_SECCFG1_ROOT_KEY_LCK(value)     (EFUSE_SECCFG1_ROOT_KEY_LCK_Msk & (_UINT8_(value) << EFUSE_SECCFG1_ROOT_KEY_LCK_Pos)) /* Assignment of value for ROOT_KEY_LCK in the EFUSE_SECCFG1 register */
#define   EFUSE_SECCFG1_ROOT_KEY_LCK_0_Val    _UINT8_(0x0)                                         /* (EFUSE_SECCFG1) Storage root key is not locked  */
#define   EFUSE_SECCFG1_ROOT_KEY_LCK_1_Val    _UINT8_(0x1)                                         /* (EFUSE_SECCFG1) Storage root key is locked and cannot be programmed  */
#define   EFUSE_SECCFG1_ROOT_KEY_LCK_2_Val    _UINT8_(0x2)                                         /* (EFUSE_SECCFG1) Storage root key is locked and cannot be programmed  */
#define   EFUSE_SECCFG1_ROOT_KEY_LCK_3_Val    _UINT8_(0x3)                                         /* (EFUSE_SECCFG1) Storage root key is locked and cannot be programmed  */
#define EFUSE_SECCFG1_ROOT_KEY_LCK_0          (EFUSE_SECCFG1_ROOT_KEY_LCK_0_Val << EFUSE_SECCFG1_ROOT_KEY_LCK_Pos) /* (EFUSE_SECCFG1) Storage root key is not locked Position */
#define EFUSE_SECCFG1_ROOT_KEY_LCK_1          (EFUSE_SECCFG1_ROOT_KEY_LCK_1_Val << EFUSE_SECCFG1_ROOT_KEY_LCK_Pos) /* (EFUSE_SECCFG1) Storage root key is locked and cannot be programmed Position */
#define EFUSE_SECCFG1_ROOT_KEY_LCK_2          (EFUSE_SECCFG1_ROOT_KEY_LCK_2_Val << EFUSE_SECCFG1_ROOT_KEY_LCK_Pos) /* (EFUSE_SECCFG1) Storage root key is locked and cannot be programmed Position */
#define EFUSE_SECCFG1_ROOT_KEY_LCK_3          (EFUSE_SECCFG1_ROOT_KEY_LCK_3_Val << EFUSE_SECCFG1_ROOT_KEY_LCK_Pos) /* (EFUSE_SECCFG1) Storage root key is locked and cannot be programmed Position */
#define EFUSE_SECCFG1_BOOT_KEY_LCK_Pos        _UINT8_(2)                                           /* (EFUSE_SECCFG1) Lock bits for Secure Boot/OTA Key Position */
#define EFUSE_SECCFG1_BOOT_KEY_LCK_Msk        (_UINT8_(0x3) << EFUSE_SECCFG1_BOOT_KEY_LCK_Pos)     /* (EFUSE_SECCFG1) Lock bits for Secure Boot/OTA Key Mask */
#define EFUSE_SECCFG1_BOOT_KEY_LCK(value)     (EFUSE_SECCFG1_BOOT_KEY_LCK_Msk & (_UINT8_(value) << EFUSE_SECCFG1_BOOT_KEY_LCK_Pos)) /* Assignment of value for BOOT_KEY_LCK in the EFUSE_SECCFG1 register */
#define   EFUSE_SECCFG1_BOOT_KEY_LCK_0_Val    _UINT8_(0x0)                                         /* (EFUSE_SECCFG1) Secure boot key is not locked  */
#define   EFUSE_SECCFG1_BOOT_KEY_LCK_1_Val    _UINT8_(0x1)                                         /* (EFUSE_SECCFG1) Secure boot key is locked and cannot be programmed  */
#define   EFUSE_SECCFG1_BOOT_KEY_LCK_2_Val    _UINT8_(0x2)                                         /* (EFUSE_SECCFG1) Secure boot key is locked and cannot be programmed  */
#define   EFUSE_SECCFG1_BOOT_KEY_LCK_3_Val    _UINT8_(0x3)                                         /* (EFUSE_SECCFG1) Secure boot key is locked and cannot be programmed  */
#define EFUSE_SECCFG1_BOOT_KEY_LCK_0          (EFUSE_SECCFG1_BOOT_KEY_LCK_0_Val << EFUSE_SECCFG1_BOOT_KEY_LCK_Pos) /* (EFUSE_SECCFG1) Secure boot key is not locked Position */
#define EFUSE_SECCFG1_BOOT_KEY_LCK_1          (EFUSE_SECCFG1_BOOT_KEY_LCK_1_Val << EFUSE_SECCFG1_BOOT_KEY_LCK_Pos) /* (EFUSE_SECCFG1) Secure boot key is locked and cannot be programmed Position */
#define EFUSE_SECCFG1_BOOT_KEY_LCK_2          (EFUSE_SECCFG1_BOOT_KEY_LCK_2_Val << EFUSE_SECCFG1_BOOT_KEY_LCK_Pos) /* (EFUSE_SECCFG1) Secure boot key is locked and cannot be programmed Position */
#define EFUSE_SECCFG1_BOOT_KEY_LCK_3          (EFUSE_SECCFG1_BOOT_KEY_LCK_3_Val << EFUSE_SECCFG1_BOOT_KEY_LCK_Pos) /* (EFUSE_SECCFG1) Secure boot key is locked and cannot be programmed Position */
#define EFUSE_SECCFG1_Msk                     _UINT8_(0x0F)                                        /* (EFUSE_SECCFG1) Register Mask  */


/* -------- EFUSE_SECCFG2 : (EFUSE Offset: 0x02) (R/W 8) Secure Configuration -------- */
#define EFUSE_SECCFG2_RESETVALUE              _UINT8_(0x00)                                        /*  (EFUSE_SECCFG2) Secure Configuration  Reset Value */

#define EFUSE_SECCFG2_ADD_BOOT_KEY_Pos        _UINT8_(0)                                           /* (EFUSE_SECCFG2) Additional boot Key bit Position */
#define EFUSE_SECCFG2_ADD_BOOT_KEY_Msk        (_UINT8_(0x1) << EFUSE_SECCFG2_ADD_BOOT_KEY_Pos)     /* (EFUSE_SECCFG2) Additional boot Key bit Mask */
#define EFUSE_SECCFG2_ADD_BOOT_KEY(value)     (EFUSE_SECCFG2_ADD_BOOT_KEY_Msk & (_UINT8_(value) << EFUSE_SECCFG2_ADD_BOOT_KEY_Pos)) /* Assignment of value for ADD_BOOT_KEY in the EFUSE_SECCFG2 register */
#define EFUSE_SECCFG2_Msk                     _UINT8_(0x01)                                        /* (EFUSE_SECCFG2) Register Mask  */


/* -------- EFUSE_ANTIROLLBACKCOUNTER : (EFUSE Offset: 0x04) (R/W 8) Anti Roll back counter -------- */
#define EFUSE_ANTIROLLBACKCOUNTER_RESETVALUE  _UINT8_(0x00)                                        /*  (EFUSE_ANTIROLLBACKCOUNTER) Anti Roll back counter  Reset Value */

#define EFUSE_ANTIROLLBACKCOUNTER_ANTIROLLBACKCOUNTER_Pos _UINT8_(0)                                           /* (EFUSE_ANTIROLLBACKCOUNTER) Anti rollback counter bits Position */
#define EFUSE_ANTIROLLBACKCOUNTER_ANTIROLLBACKCOUNTER_Msk (_UINT8_(0xFF) << EFUSE_ANTIROLLBACKCOUNTER_ANTIROLLBACKCOUNTER_Pos) /* (EFUSE_ANTIROLLBACKCOUNTER) Anti rollback counter bits Mask */
#define EFUSE_ANTIROLLBACKCOUNTER_ANTIROLLBACKCOUNTER(value) (EFUSE_ANTIROLLBACKCOUNTER_ANTIROLLBACKCOUNTER_Msk & (_UINT8_(value) << EFUSE_ANTIROLLBACKCOUNTER_ANTIROLLBACKCOUNTER_Pos)) /* Assignment of value for ANTIROLLBACKCOUNTER in the EFUSE_ANTIROLLBACKCOUNTER register */
#define EFUSE_ANTIROLLBACKCOUNTER_Msk         _UINT8_(0xFF)                                        /* (EFUSE_ANTIROLLBACKCOUNTER) Register Mask  */


/* -------- EFUSE_LIFECYCLECOUNTER : (EFUSE Offset: 0x24) (R/W 8) Life cycle counter -------- */
#define EFUSE_LIFECYCLECOUNTER_RESETVALUE     _UINT8_(0x00)                                        /*  (EFUSE_LIFECYCLECOUNTER) Life cycle counter  Reset Value */

#define EFUSE_LIFECYCLECOUNTER_LIFECYCLECOUNTER_Pos _UINT8_(0)                                           /* (EFUSE_LIFECYCLECOUNTER) Life cycle counter bits Position */
#define EFUSE_LIFECYCLECOUNTER_LIFECYCLECOUNTER_Msk (_UINT8_(0xFF) << EFUSE_LIFECYCLECOUNTER_LIFECYCLECOUNTER_Pos) /* (EFUSE_LIFECYCLECOUNTER) Life cycle counter bits Mask */
#define EFUSE_LIFECYCLECOUNTER_LIFECYCLECOUNTER(value) (EFUSE_LIFECYCLECOUNTER_LIFECYCLECOUNTER_Msk & (_UINT8_(value) << EFUSE_LIFECYCLECOUNTER_LIFECYCLECOUNTER_Pos)) /* Assignment of value for LIFECYCLECOUNTER in the EFUSE_LIFECYCLECOUNTER register */
#define EFUSE_LIFECYCLECOUNTER_Msk            _UINT8_(0xFF)                                        /* (EFUSE_LIFECYCLECOUNTER) Register Mask  */


/* -------- EFUSE_SECUREBOOTKEY : (EFUSE Offset: 0x26) (R/W 8) Secure boot key -------- */
#define EFUSE_SECUREBOOTKEY_RESETVALUE        _UINT8_(0x00)                                        /*  (EFUSE_SECUREBOOTKEY) Secure boot key  Reset Value */

#define EFUSE_SECUREBOOTKEY_SECUREBOOTKEY_Pos _UINT8_(0)                                           /* (EFUSE_SECUREBOOTKEY) Secure boot key bits Position */
#define EFUSE_SECUREBOOTKEY_SECUREBOOTKEY_Msk (_UINT8_(0xFF) << EFUSE_SECUREBOOTKEY_SECUREBOOTKEY_Pos) /* (EFUSE_SECUREBOOTKEY) Secure boot key bits Mask */
#define EFUSE_SECUREBOOTKEY_SECUREBOOTKEY(value) (EFUSE_SECUREBOOTKEY_SECUREBOOTKEY_Msk & (_UINT8_(value) << EFUSE_SECUREBOOTKEY_SECUREBOOTKEY_Pos)) /* Assignment of value for SECUREBOOTKEY in the EFUSE_SECUREBOOTKEY register */
#define EFUSE_SECUREBOOTKEY_Msk               _UINT8_(0xFF)                                        /* (EFUSE_SECUREBOOTKEY) Register Mask  */


/* -------- EFUSE_UUID : (EFUSE Offset: 0x1D8) (R/W 8) Unique ID -------- */
#define EFUSE_UUID_RESETVALUE                 _UINT8_(0x00)                                        /*  (EFUSE_UUID) Unique ID  Reset Value */

#define EFUSE_UUID_UUID_Pos                   _UINT8_(0)                                           /* (EFUSE_UUID) Unique ID bits Position */
#define EFUSE_UUID_UUID_Msk                   (_UINT8_(0xFF) << EFUSE_UUID_UUID_Pos)               /* (EFUSE_UUID) Unique ID bits Mask */
#define EFUSE_UUID_UUID(value)                (EFUSE_UUID_UUID_Msk & (_UINT8_(value) << EFUSE_UUID_UUID_Pos)) /* Assignment of value for UUID in the EFUSE_UUID register */
#define EFUSE_UUID_Msk                        _UINT8_(0xFF)                                        /* (EFUSE_UUID) Register Mask  */


/* EFUSE register offsets definitions */
#define EFUSE_SECCFG0_REG_OFST         _UINT32_(0x00)      /* (EFUSE_SECCFG0) Secure Configuration Offset */
#define EFUSE_SECCFG1_REG_OFST         _UINT32_(0x01)      /* (EFUSE_SECCFG1) Secure Configuration Offset */
#define EFUSE_SECCFG2_REG_OFST         _UINT32_(0x02)      /* (EFUSE_SECCFG2) Secure Configuration Offset */
#define EFUSE_ANTIROLLBACKCOUNTER_REG_OFST _UINT32_(0x04)      /* (EFUSE_ANTIROLLBACKCOUNTER) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER0_REG_OFST _UINT32_(0x04)      /* (EFUSE_ANTIROLLBACKCOUNTER0) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER1_REG_OFST _UINT32_(0x05)      /* (EFUSE_ANTIROLLBACKCOUNTER1) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER2_REG_OFST _UINT32_(0x06)      /* (EFUSE_ANTIROLLBACKCOUNTER2) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER3_REG_OFST _UINT32_(0x07)      /* (EFUSE_ANTIROLLBACKCOUNTER3) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER4_REG_OFST _UINT32_(0x08)      /* (EFUSE_ANTIROLLBACKCOUNTER4) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER5_REG_OFST _UINT32_(0x09)      /* (EFUSE_ANTIROLLBACKCOUNTER5) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER6_REG_OFST _UINT32_(0x0A)      /* (EFUSE_ANTIROLLBACKCOUNTER6) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER7_REG_OFST _UINT32_(0x0B)      /* (EFUSE_ANTIROLLBACKCOUNTER7) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER8_REG_OFST _UINT32_(0x0C)      /* (EFUSE_ANTIROLLBACKCOUNTER8) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER9_REG_OFST _UINT32_(0x0D)      /* (EFUSE_ANTIROLLBACKCOUNTER9) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER10_REG_OFST _UINT32_(0x0E)      /* (EFUSE_ANTIROLLBACKCOUNTER10) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER11_REG_OFST _UINT32_(0x0F)      /* (EFUSE_ANTIROLLBACKCOUNTER11) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER12_REG_OFST _UINT32_(0x10)      /* (EFUSE_ANTIROLLBACKCOUNTER12) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER13_REG_OFST _UINT32_(0x11)      /* (EFUSE_ANTIROLLBACKCOUNTER13) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER14_REG_OFST _UINT32_(0x12)      /* (EFUSE_ANTIROLLBACKCOUNTER14) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER15_REG_OFST _UINT32_(0x13)      /* (EFUSE_ANTIROLLBACKCOUNTER15) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER16_REG_OFST _UINT32_(0x14)      /* (EFUSE_ANTIROLLBACKCOUNTER16) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER17_REG_OFST _UINT32_(0x15)      /* (EFUSE_ANTIROLLBACKCOUNTER17) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER18_REG_OFST _UINT32_(0x16)      /* (EFUSE_ANTIROLLBACKCOUNTER18) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER19_REG_OFST _UINT32_(0x17)      /* (EFUSE_ANTIROLLBACKCOUNTER19) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER20_REG_OFST _UINT32_(0x18)      /* (EFUSE_ANTIROLLBACKCOUNTER20) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER21_REG_OFST _UINT32_(0x19)      /* (EFUSE_ANTIROLLBACKCOUNTER21) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER22_REG_OFST _UINT32_(0x1A)      /* (EFUSE_ANTIROLLBACKCOUNTER22) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER23_REG_OFST _UINT32_(0x1B)      /* (EFUSE_ANTIROLLBACKCOUNTER23) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER24_REG_OFST _UINT32_(0x1C)      /* (EFUSE_ANTIROLLBACKCOUNTER24) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER25_REG_OFST _UINT32_(0x1D)      /* (EFUSE_ANTIROLLBACKCOUNTER25) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER26_REG_OFST _UINT32_(0x1E)      /* (EFUSE_ANTIROLLBACKCOUNTER26) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER27_REG_OFST _UINT32_(0x1F)      /* (EFUSE_ANTIROLLBACKCOUNTER27) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER28_REG_OFST _UINT32_(0x20)      /* (EFUSE_ANTIROLLBACKCOUNTER28) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER29_REG_OFST _UINT32_(0x21)      /* (EFUSE_ANTIROLLBACKCOUNTER29) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER30_REG_OFST _UINT32_(0x22)      /* (EFUSE_ANTIROLLBACKCOUNTER30) Anti Roll back counter Offset */
#define EFUSE_ANTIROLLBACKCOUNTER31_REG_OFST _UINT32_(0x23)      /* (EFUSE_ANTIROLLBACKCOUNTER31) Anti Roll back counter Offset */
#define EFUSE_LIFECYCLECOUNTER_REG_OFST _UINT32_(0x24)      /* (EFUSE_LIFECYCLECOUNTER) Life cycle counter Offset */
#define EFUSE_LIFECYCLECOUNTER0_REG_OFST _UINT32_(0x24)      /* (EFUSE_LIFECYCLECOUNTER0) Life cycle counter Offset */
#define EFUSE_LIFECYCLECOUNTER1_REG_OFST _UINT32_(0x25)      /* (EFUSE_LIFECYCLECOUNTER1) Life cycle counter Offset */
#define EFUSE_SECUREBOOTKEY_REG_OFST   _UINT32_(0x26)      /* (EFUSE_SECUREBOOTKEY) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY0_REG_OFST  _UINT32_(0x26)      /* (EFUSE_SECUREBOOTKEY0) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY1_REG_OFST  _UINT32_(0x27)      /* (EFUSE_SECUREBOOTKEY1) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY2_REG_OFST  _UINT32_(0x28)      /* (EFUSE_SECUREBOOTKEY2) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY3_REG_OFST  _UINT32_(0x29)      /* (EFUSE_SECUREBOOTKEY3) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY4_REG_OFST  _UINT32_(0x2A)      /* (EFUSE_SECUREBOOTKEY4) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY5_REG_OFST  _UINT32_(0x2B)      /* (EFUSE_SECUREBOOTKEY5) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY6_REG_OFST  _UINT32_(0x2C)      /* (EFUSE_SECUREBOOTKEY6) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY7_REG_OFST  _UINT32_(0x2D)      /* (EFUSE_SECUREBOOTKEY7) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY8_REG_OFST  _UINT32_(0x2E)      /* (EFUSE_SECUREBOOTKEY8) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY9_REG_OFST  _UINT32_(0x2F)      /* (EFUSE_SECUREBOOTKEY9) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY10_REG_OFST _UINT32_(0x30)      /* (EFUSE_SECUREBOOTKEY10) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY11_REG_OFST _UINT32_(0x31)      /* (EFUSE_SECUREBOOTKEY11) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY12_REG_OFST _UINT32_(0x32)      /* (EFUSE_SECUREBOOTKEY12) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY13_REG_OFST _UINT32_(0x33)      /* (EFUSE_SECUREBOOTKEY13) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY14_REG_OFST _UINT32_(0x34)      /* (EFUSE_SECUREBOOTKEY14) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY15_REG_OFST _UINT32_(0x35)      /* (EFUSE_SECUREBOOTKEY15) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY16_REG_OFST _UINT32_(0x36)      /* (EFUSE_SECUREBOOTKEY16) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY17_REG_OFST _UINT32_(0x37)      /* (EFUSE_SECUREBOOTKEY17) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY18_REG_OFST _UINT32_(0x38)      /* (EFUSE_SECUREBOOTKEY18) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY19_REG_OFST _UINT32_(0x39)      /* (EFUSE_SECUREBOOTKEY19) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY20_REG_OFST _UINT32_(0x3A)      /* (EFUSE_SECUREBOOTKEY20) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY21_REG_OFST _UINT32_(0x3B)      /* (EFUSE_SECUREBOOTKEY21) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY22_REG_OFST _UINT32_(0x3C)      /* (EFUSE_SECUREBOOTKEY22) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY23_REG_OFST _UINT32_(0x3D)      /* (EFUSE_SECUREBOOTKEY23) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY24_REG_OFST _UINT32_(0x3E)      /* (EFUSE_SECUREBOOTKEY24) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY25_REG_OFST _UINT32_(0x3F)      /* (EFUSE_SECUREBOOTKEY25) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY26_REG_OFST _UINT32_(0x40)      /* (EFUSE_SECUREBOOTKEY26) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY27_REG_OFST _UINT32_(0x41)      /* (EFUSE_SECUREBOOTKEY27) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY28_REG_OFST _UINT32_(0x42)      /* (EFUSE_SECUREBOOTKEY28) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY29_REG_OFST _UINT32_(0x43)      /* (EFUSE_SECUREBOOTKEY29) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY30_REG_OFST _UINT32_(0x44)      /* (EFUSE_SECUREBOOTKEY30) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY31_REG_OFST _UINT32_(0x45)      /* (EFUSE_SECUREBOOTKEY31) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY32_REG_OFST _UINT32_(0x46)      /* (EFUSE_SECUREBOOTKEY32) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY33_REG_OFST _UINT32_(0x47)      /* (EFUSE_SECUREBOOTKEY33) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY34_REG_OFST _UINT32_(0x48)      /* (EFUSE_SECUREBOOTKEY34) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY35_REG_OFST _UINT32_(0x49)      /* (EFUSE_SECUREBOOTKEY35) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY36_REG_OFST _UINT32_(0x4A)      /* (EFUSE_SECUREBOOTKEY36) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY37_REG_OFST _UINT32_(0x4B)      /* (EFUSE_SECUREBOOTKEY37) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY38_REG_OFST _UINT32_(0x4C)      /* (EFUSE_SECUREBOOTKEY38) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY39_REG_OFST _UINT32_(0x4D)      /* (EFUSE_SECUREBOOTKEY39) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY40_REG_OFST _UINT32_(0x4E)      /* (EFUSE_SECUREBOOTKEY40) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY41_REG_OFST _UINT32_(0x4F)      /* (EFUSE_SECUREBOOTKEY41) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY42_REG_OFST _UINT32_(0x50)      /* (EFUSE_SECUREBOOTKEY42) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY43_REG_OFST _UINT32_(0x51)      /* (EFUSE_SECUREBOOTKEY43) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY44_REG_OFST _UINT32_(0x52)      /* (EFUSE_SECUREBOOTKEY44) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY45_REG_OFST _UINT32_(0x53)      /* (EFUSE_SECUREBOOTKEY45) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY46_REG_OFST _UINT32_(0x54)      /* (EFUSE_SECUREBOOTKEY46) Secure boot key Offset */
#define EFUSE_SECUREBOOTKEY47_REG_OFST _UINT32_(0x55)      /* (EFUSE_SECUREBOOTKEY47) Secure boot key Offset */
#define EFUSE_UUID_REG_OFST            _UINT32_(0x1D8)     /* (EFUSE_UUID) Unique ID Offset */
#define EFUSE_UUID0_REG_OFST           _UINT32_(0x1D8)     /* (EFUSE_UUID0) Unique ID Offset */
#define EFUSE_UUID1_REG_OFST           _UINT32_(0x1D9)     /* (EFUSE_UUID1) Unique ID Offset */
#define EFUSE_UUID2_REG_OFST           _UINT32_(0x1DA)     /* (EFUSE_UUID2) Unique ID Offset */
#define EFUSE_UUID3_REG_OFST           _UINT32_(0x1DB)     /* (EFUSE_UUID3) Unique ID Offset */
#define EFUSE_UUID4_REG_OFST           _UINT32_(0x1DC)     /* (EFUSE_UUID4) Unique ID Offset */
#define EFUSE_UUID5_REG_OFST           _UINT32_(0x1DD)     /* (EFUSE_UUID5) Unique ID Offset */
#define EFUSE_UUID6_REG_OFST           _UINT32_(0x1DE)     /* (EFUSE_UUID6) Unique ID Offset */
#define EFUSE_UUID7_REG_OFST           _UINT32_(0x1DF)     /* (EFUSE_UUID7) Unique ID Offset */
#define EFUSE_UUID8_REG_OFST           _UINT32_(0x1E0)     /* (EFUSE_UUID8) Unique ID Offset */
#define EFUSE_UUID9_REG_OFST           _UINT32_(0x1E1)     /* (EFUSE_UUID9) Unique ID Offset */
#define EFUSE_UUID10_REG_OFST          _UINT32_(0x1E2)     /* (EFUSE_UUID10) Unique ID Offset */
#define EFUSE_UUID11_REG_OFST          _UINT32_(0x1E3)     /* (EFUSE_UUID11) Unique ID Offset */
#define EFUSE_UUID12_REG_OFST          _UINT32_(0x1E4)     /* (EFUSE_UUID12) Unique ID Offset */
#define EFUSE_UUID13_REG_OFST          _UINT32_(0x1E5)     /* (EFUSE_UUID13) Unique ID Offset */
#define EFUSE_UUID14_REG_OFST          _UINT32_(0x1E6)     /* (EFUSE_UUID14) Unique ID Offset */
#define EFUSE_UUID15_REG_OFST          _UINT32_(0x1E7)     /* (EFUSE_UUID15) Unique ID Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* EFUSE register API structure */
typedef struct
{  /* Efuse Memory Map */
  __IO  uint8_t                        EFUSE_SECCFG0;      /* Offset: 0x00 (R/W  8) Secure Configuration */
  __IO  uint8_t                        EFUSE_SECCFG1;      /* Offset: 0x01 (R/W  8) Secure Configuration */
  __IO  uint8_t                        EFUSE_SECCFG2;      /* Offset: 0x02 (R/W  8) Secure Configuration */
  __I   uint8_t                        Reserved1[0x01];
  __IO  uint8_t                        EFUSE_ANTIROLLBACKCOUNTER[32]; /* Offset: 0x04 (R/W  8) Anti Roll back counter */
  __IO  uint8_t                        EFUSE_LIFECYCLECOUNTER[2]; /* Offset: 0x24 (R/W  8) Life cycle counter */
  __IO  uint8_t                        EFUSE_SECUREBOOTKEY[48]; /* Offset: 0x26 (R/W  8) Secure boot key */
  __I   uint8_t                        Reserved2[0x182];
  __IO  uint8_t                        EFUSE_UUID[16];     /* Offset: 0x1D8 (R/W  8) Unique ID */
} efuse_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32WM_BZ6_EFUSE_COMPONENT_H_ */
