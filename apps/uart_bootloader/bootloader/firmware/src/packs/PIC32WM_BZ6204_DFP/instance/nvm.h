/*
 * Instance header file for PIC32WM_BZ6204
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

/* file generated from device description file (ATDF) version 2025-01-29T18:23:31Z */
#ifndef _PIC32WM_BZ6_NVM_INSTANCE_
#define _PIC32WM_BZ6_NVM_INSTANCE_


/* ========== Instance Parameter definitions for NVM peripheral ========== */
#define NVM_ALT_CFG_SEL_BIT                      (8)        /* Bit number to toggle in Main BCFG or TCFG address to generate the equivalent address within the Alternate BCFG or TCFG space.Used in the event of an (unrecoverable) ECC DED error while reading the Main BCFG or TCFG data set. */
#define NVM_BCFG_NUM_WORDS                       (1)        /* Number of Boot configuration words to be read from Flash */
#define NVM_BCFG_PAGE                            (16)       /* NVR page contain BCFG data. The page must be consistent with the BCFG_ADDR[] parameter. */
#define NVM_CP_BIT_LOCATION                      (252)      /* The Code Protect value is stored in it own flash word at CP_ADDR[] location. This is to support flash panels with ECC or restrictions on multi-programming per word/bit.The sign bit position must be set to PFM_DATA_MSB-3. */
#define NVM_FIXED_BOOT_SEL_BIT                   (18)       /* The highest bit position that allows address decode to differentiate between fixed and aliased NVR address space. When set, this bit will select fixed NVR space. */
#define NVM_FLASH_SIZE                           (2097152)  
#define NVM_JTAGEN_BIT_LOCATION                  (226)      /* Location of the sign bit in the boot config word. This bit must never be programmed to 0 during a checkerboard program. PFM_DATA_MSB-29Config words are 128-bit regardless of the flash word size. */
#define NVM_NVMOTP_PAGE                          (17)       /* NVR page contain OTP data. The page must be consistentwith the OTP_ADDR_BASE[] parameter. */
#define NVM_NVR_NUM_PAGES                        (24)       /* Number of Pages in the NVR regionThe following values must be supported: 8, 24 */
#define NVM_NVR_PANEL_SEL_BIT                    (17)       /* The highest bit position that allows address decode to differentiate between NVR address space in Panel 1 and Panel 2 (if supported).Note: The value for NVR_PANEL_SEL_BIT will typically be FIXED_BOOT_SEL_BIT-1 */
#define NVM_NVR_TEST_PAGES                       (1)        /* Number of Pages in the Panel 1 NVR for Test. */
#define NVM_PAGES                                (512)      
#define NVM_PAGES_PR_REGION                      (32)       
#define NVM_PAGE_ADDR_MSB                        (11)       /* Flash Page Size MSB (using byte addressing)   (11=4KB page) */
#define NVM_PFM_DATA_MSB                         (255)      /* Flash wrapper read data bus width-1 */
#define NVM_PFM_ECC_PRESENT                      (1)        /* 0: ECC not supported,1: ECC supported */
#define NVM_PFM_ERASE_RETRY_PRESENT              (1)        /* 0: Erase/Retry Feature not Present1: Erase/Retry Feature Present */
#define NVM_PFM_JTAG_MSB                         (67)       /* JTAG checkerboard pattern data width-1 */
#define NVM_PFM_NUM_PANELS                       (1)        /* Number of Flash panels supported in deviceValid entries are 1 or 2. */
#define NVM_PFM_PNL_ADDR_MSB                     (20)       /* Flash panel read address bus width-1 */
#define NVM_PFM_PNL_DATA_MSB                     (271)      /* Flash panel read data bus width-1 */
#define NVM_PFM_SRHT_PRESENT                     (0)        /* Slow Read High Temp0: SRHT Feature not Present1: SRHT Feature Present */
#define NVM_PFM_SYS_ADDR_MSB                     (20)       /* The MS bit of the system address needed to address all flash memory. Used by Flash BIST. MSB of 19 = 2^20 = 1MB */
#define NVM_ROW_ADDR_MSB                         (9)        /* Flash row word counter MSB  (9=256 words per row) */
#define NVM_RR_NUM_RECORDS                       (8)        /* Number of Redundancy Records per Panel. Redundancy Records are 16-bit values. Panels usually have 1 Redundant Page per 512KB.Note: Valid values are 1,2,4,8,16,32. */
#define NVM_RR_NUM_WORDS                         (1)        /* Number of Flash reads to load Redundancy Record wordsfrom Flash. Does not include Flash IP CFG.Note: This value must always be greater than or equal 1 */
#define NVM_SIGN_BIT_LOCATION                    (255)      /* The signature value is stored in it own flash word at SIGN_ADDR[] location. This is to support flash panels with ECC or restrictions on multi-programming per word/bit. The sign bit position must be set to PFM_DATA_MSB. */
#define NVM_TCFG_NUM_WORDS                       (2)        /* Number of Test configuration words to be read from Flash */
#define NVM_TCFG_PAGE                            (18)       /* NVR page contain TCFG data. The page must be consistent with the TCFG_ADDR[] parameter. */
#define NVM_VALIDS_PER_WORD                      (2)        /* Number of 128-bit writes to CFG per configuration reads fromflash. If the CFG block does not implement all CFG registersas defined then those VALIDS should not be connected.Note: This value must always be either 1 or 2. */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define NVM_BCFG_ADDR                            0x0085_0F9F /* System physical address of first BCFG data.Typically CP_ADDR-32. */
#define NVM_BOOT_ADDR_BASE                       0x0080_0000 /* Physical Start address of boot flash memory (system address). Address must be aligned to the NVR size. */
#define NVM_BOOT_ADDR_END                        0x0081_0FFF /* Physical End address of boot flash memory (system address) */
#define NVM_CP_ADDR                              0x0085_0FBF /* System physical address CPTypically SIGN_ADDR-32. */
#define NVM_F1RR_ADDR                            0x0085_2FFF /* System physical address of Panel 1's first Redundancy Record.Typically TEST_ADDR_END */
#define NVM_F2RR_ADDR                            0x0085_2FDF /* System physical address of Panel 2's first RedundancyRecord.Typically F1RR_ADDR-(32*RR_NUM_WORDS) */
#define NVM_NVR_ADDR_END                         0x0081_2FFF /* Physical End address of secure boot flash memory (system address) */
#define NVM_OTP_ADDR_BASE                        0x0081_1000 /* Physical Start address of OTP page flash memory (system address) */
#define NVM_PFM_ADDR_BASE                        0x0100_0000 /* Physical Start address of Program Flash Memory in KSEG0/KSEG1 (system address). Address must be aligned to the PFM size. Refer Table 3-24 */
#define NVM_SEQNUM_ADDR                          0x0085_0FFF /* System physical address of Panel 1's Sequence Number.Typically BOOT_ADDR_END. */
#define NVM_SIGN_ADDR                            0x0085_0FDF /* System physical address of SIGNTypically SEQNUM_ADDR-32. */
#define NVM_TCFG_ADDR                            0x0085_2FBF /* System physical address of first TCFG data.Typically F2RR_ADDR-(32*RR_NUM_WORDS) */
#define NVM_TEST_ADDR_BASE                       0x0085_2000 /* Physical Base address of Test page flash memory (system address) */
#define NVM_TEST_ADDR_END                        0x0085_2FFF /* Physical End address of test flash memory (system address) */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */



#endif /* _PIC32WM_BZ6_NVM_INSTANCE_ */
