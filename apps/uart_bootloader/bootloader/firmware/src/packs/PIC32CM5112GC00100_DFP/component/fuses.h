/*
 * Component description for FUSES
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

/*  file generated from device description file (ATDF) version 2024-11-05T16:47:43Z  */
#ifndef _PIC32CMGC00_FUSES_COMPONENT_H_
#define _PIC32CMGC00_FUSES_COMPONENT_H_

/* ************************************************************************** */
/*                     SOFTWARE API DEFINITION FOR FUSES                      */
/* ************************************************************************** */

/* -------- FUSES_DAL : (FUSES Offset: 0x00) (R/W 32) DEVICE ACCESS LEVEL Register -------- */
#define FUSES_DAL_DAL_CPU_Pos                 _UINT32_(0)                                          /* (FUSES_DAL) CPU Device Access Level Position */
#define FUSES_DAL_DAL_CPU_Msk                 (_UINT32_(0xFFFFFFFF) << FUSES_DAL_DAL_CPU_Pos)      /* (FUSES_DAL) CPU Device Access Level Mask */
#define FUSES_DAL_DAL_CPU(value)              (FUSES_DAL_DAL_CPU_Msk & (_UINT32_(value) << FUSES_DAL_DAL_CPU_Pos)) /* Assignment of value for DAL_CPU in the FUSES_DAL register */
#define FUSES_DAL_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (FUSES_DAL) Register Mask  */


/* -------- FUSES_FRCFGBROM : (FUSES Offset: 0x400) (R/W 32) PRE-BOOT bromc user Options Register -------- */
#define FUSES_FRCFGBROM_BCRCDIS_Pos           _UINT32_(0)                                          /* (FUSES_FRCFGBROM) Boot ROM CRC Disable Position */
#define FUSES_FRCFGBROM_BCRCDIS_Msk           (_UINT32_(0x1) << FUSES_FRCFGBROM_BCRCDIS_Pos)       /* (FUSES_FRCFGBROM) Boot ROM CRC Disable Mask */
#define FUSES_FRCFGBROM_BCRCDIS(value)        (FUSES_FRCFGBROM_BCRCDIS_Msk & (_UINT32_(value) << FUSES_FRCFGBROM_BCRCDIS_Pos)) /* Assignment of value for BCRCDIS in the FUSES_FRCFGBROM register */
#define FUSES_FRCFGBROM_Msk                   _UINT32_(0x00000001)                                 /* (FUSES_FRCFGBROM) Register Mask  */


/* -------- FUSES_FRCFGMBIST : (FUSES Offset: 0x408) (R/W 32) PRE-BOOT MBIST user Options Register -------- */
#define FUSES_FRCFGMBIST_MOBH_Pos             _UINT32_(2)                                          /* (FUSES_FRCFGMBIST) MBIST On Boot Enable for HIBERNATE Only Retaining Memory Groups Position */
#define FUSES_FRCFGMBIST_MOBH_Msk             (_UINT32_(0x3) << FUSES_FRCFGMBIST_MOBH_Pos)         /* (FUSES_FRCFGMBIST) MBIST On Boot Enable for HIBERNATE Only Retaining Memory Groups Mask */
#define FUSES_FRCFGMBIST_MOBH(value)          (FUSES_FRCFGMBIST_MOBH_Msk & (_UINT32_(value) << FUSES_FRCFGMBIST_MOBH_Pos)) /* Assignment of value for MOBH in the FUSES_FRCFGMBIST register */
#define   FUSES_FRCFGMBIST_MOBH_ENABLED_ANY_Val _UINT32_(0x1)                                        /* (FUSES_FRCFGMBIST) MOB runs after any non-BACKUP/HIBERNATE exit reset  */
#define   FUSES_FRCFGMBIST_MOBH_ENABLED_POR_Val _UINT32_(0x2)                                        /* (FUSES_FRCFGMBIST) MOB runs only after a POR  */
#define   FUSES_FRCFGMBIST_MOBH_DISABLED_Val  _UINT32_(0x3)                                        /* (FUSES_FRCFGMBIST) MOB Disabled  */
#define FUSES_FRCFGMBIST_MOBH_ENABLED_ANY     (FUSES_FRCFGMBIST_MOBH_ENABLED_ANY_Val << FUSES_FRCFGMBIST_MOBH_Pos) /* (FUSES_FRCFGMBIST) MOB runs after any non-BACKUP/HIBERNATE exit reset Position */
#define FUSES_FRCFGMBIST_MOBH_ENABLED_POR     (FUSES_FRCFGMBIST_MOBH_ENABLED_POR_Val << FUSES_FRCFGMBIST_MOBH_Pos) /* (FUSES_FRCFGMBIST) MOB runs only after a POR Position */
#define FUSES_FRCFGMBIST_MOBH_DISABLED        (FUSES_FRCFGMBIST_MOBH_DISABLED_Val << FUSES_FRCFGMBIST_MOBH_Pos) /* (FUSES_FRCFGMBIST) MOB Disabled Position */
#define FUSES_FRCFGMBIST_MOBB_Pos             _UINT32_(4)                                          /* (FUSES_FRCFGMBIST) MBIST On Boot Enable for BACKUP/HIBERNATE Retaining Memory Groups Position */
#define FUSES_FRCFGMBIST_MOBB_Msk             (_UINT32_(0x3) << FUSES_FRCFGMBIST_MOBB_Pos)         /* (FUSES_FRCFGMBIST) MBIST On Boot Enable for BACKUP/HIBERNATE Retaining Memory Groups Mask */
#define FUSES_FRCFGMBIST_MOBB(value)          (FUSES_FRCFGMBIST_MOBB_Msk & (_UINT32_(value) << FUSES_FRCFGMBIST_MOBB_Pos)) /* Assignment of value for MOBB in the FUSES_FRCFGMBIST register */
#define   FUSES_FRCFGMBIST_MOBB_ENABLED_ANY_Val _UINT32_(0x1)                                        /* (FUSES_FRCFGMBIST) MOB runs after any non-BACKUP/HIBERNATE exit reset  */
#define   FUSES_FRCFGMBIST_MOBB_ENABLED_POR_Val _UINT32_(0x2)                                        /* (FUSES_FRCFGMBIST) MOB runs only after a POR  */
#define   FUSES_FRCFGMBIST_MOBB_DISABLED_Val  _UINT32_(0x3)                                        /* (FUSES_FRCFGMBIST) MOB Disabled  */
#define FUSES_FRCFGMBIST_MOBB_ENABLED_ANY     (FUSES_FRCFGMBIST_MOBB_ENABLED_ANY_Val << FUSES_FRCFGMBIST_MOBB_Pos) /* (FUSES_FRCFGMBIST) MOB runs after any non-BACKUP/HIBERNATE exit reset Position */
#define FUSES_FRCFGMBIST_MOBB_ENABLED_POR     (FUSES_FRCFGMBIST_MOBB_ENABLED_POR_Val << FUSES_FRCFGMBIST_MOBB_Pos) /* (FUSES_FRCFGMBIST) MOB runs only after a POR Position */
#define FUSES_FRCFGMBIST_MOBB_DISABLED        (FUSES_FRCFGMBIST_MOBB_DISABLED_Val << FUSES_FRCFGMBIST_MOBB_Pos) /* (FUSES_FRCFGMBIST) MOB Disabled Position */
#define FUSES_FRCFGMBIST_Msk                  _UINT32_(0x0000003C)                                 /* (FUSES_FRCFGMBIST) Register Mask  */


/* -------- FUSES_KEYVAL_INTCHK0 : (FUSES Offset: 0x420) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_INTCHK0_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_INTCHK0) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_INTCHK0_KEYVAL_INTCHK0_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_INTCHK0)  Position */
#define FUSES_KEYVAL_INTCHK0_KEYVAL_INTCHK0_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_INTCHK0_KEYVAL_INTCHK0_Pos) /* (FUSES_KEYVAL_INTCHK0)  Mask */
#define FUSES_KEYVAL_INTCHK0_KEYVAL_INTCHK0(value) (FUSES_KEYVAL_INTCHK0_KEYVAL_INTCHK0_Msk & (_UINT32_(value) << FUSES_KEYVAL_INTCHK0_KEYVAL_INTCHK0_Pos)) /* Assignment of value for KEYVAL_INTCHK0 in the FUSES_KEYVAL_INTCHK0 register */
#define FUSES_KEYVAL_INTCHK0_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_INTCHK0) Register Mask  */


/* -------- FUSES_KEYVAL_INTCHK1 : (FUSES Offset: 0x424) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_INTCHK1_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_INTCHK1) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_INTCHK1_KEYVAL_INTCHK1_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_INTCHK1)  Position */
#define FUSES_KEYVAL_INTCHK1_KEYVAL_INTCHK1_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_INTCHK1_KEYVAL_INTCHK1_Pos) /* (FUSES_KEYVAL_INTCHK1)  Mask */
#define FUSES_KEYVAL_INTCHK1_KEYVAL_INTCHK1(value) (FUSES_KEYVAL_INTCHK1_KEYVAL_INTCHK1_Msk & (_UINT32_(value) << FUSES_KEYVAL_INTCHK1_KEYVAL_INTCHK1_Pos)) /* Assignment of value for KEYVAL_INTCHK1 in the FUSES_KEYVAL_INTCHK1 register */
#define FUSES_KEYVAL_INTCHK1_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_INTCHK1) Register Mask  */


/* -------- FUSES_KEYVAL_INTCHK2 : (FUSES Offset: 0x428) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_INTCHK2_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_INTCHK2) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_INTCHK2_KEYVAL_INTCHK2_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_INTCHK2)  Position */
#define FUSES_KEYVAL_INTCHK2_KEYVAL_INTCHK2_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_INTCHK2_KEYVAL_INTCHK2_Pos) /* (FUSES_KEYVAL_INTCHK2)  Mask */
#define FUSES_KEYVAL_INTCHK2_KEYVAL_INTCHK2(value) (FUSES_KEYVAL_INTCHK2_KEYVAL_INTCHK2_Msk & (_UINT32_(value) << FUSES_KEYVAL_INTCHK2_KEYVAL_INTCHK2_Pos)) /* Assignment of value for KEYVAL_INTCHK2 in the FUSES_KEYVAL_INTCHK2 register */
#define FUSES_KEYVAL_INTCHK2_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_INTCHK2) Register Mask  */


/* -------- FUSES_KEYVAL_INTCHK3 : (FUSES Offset: 0x42C) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_INTCHK3_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_INTCHK3) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_INTCHK3_KEYVAL_INTCHK3_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_INTCHK3)  Position */
#define FUSES_KEYVAL_INTCHK3_KEYVAL_INTCHK3_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_INTCHK3_KEYVAL_INTCHK3_Pos) /* (FUSES_KEYVAL_INTCHK3)  Mask */
#define FUSES_KEYVAL_INTCHK3_KEYVAL_INTCHK3(value) (FUSES_KEYVAL_INTCHK3_KEYVAL_INTCHK3_Msk & (_UINT32_(value) << FUSES_KEYVAL_INTCHK3_KEYVAL_INTCHK3_Pos)) /* Assignment of value for KEYVAL_INTCHK3 in the FUSES_KEYVAL_INTCHK3 register */
#define FUSES_KEYVAL_INTCHK3_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_INTCHK3) Register Mask  */


/* -------- FUSES_KEYVAL_INTCHK4 : (FUSES Offset: 0x430) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_INTCHK4_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_INTCHK4) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_INTCHK4_KEYVAL_INTCHK4_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_INTCHK4)  Position */
#define FUSES_KEYVAL_INTCHK4_KEYVAL_INTCHK4_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_INTCHK4_KEYVAL_INTCHK4_Pos) /* (FUSES_KEYVAL_INTCHK4)  Mask */
#define FUSES_KEYVAL_INTCHK4_KEYVAL_INTCHK4(value) (FUSES_KEYVAL_INTCHK4_KEYVAL_INTCHK4_Msk & (_UINT32_(value) << FUSES_KEYVAL_INTCHK4_KEYVAL_INTCHK4_Pos)) /* Assignment of value for KEYVAL_INTCHK4 in the FUSES_KEYVAL_INTCHK4 register */
#define FUSES_KEYVAL_INTCHK4_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_INTCHK4) Register Mask  */


/* -------- FUSES_KEYVAL_INTCHK5 : (FUSES Offset: 0x434) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_INTCHK5_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_INTCHK5) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_INTCHK5_KEYVAL_INTCHK5_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_INTCHK5)  Position */
#define FUSES_KEYVAL_INTCHK5_KEYVAL_INTCHK5_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_INTCHK5_KEYVAL_INTCHK5_Pos) /* (FUSES_KEYVAL_INTCHK5)  Mask */
#define FUSES_KEYVAL_INTCHK5_KEYVAL_INTCHK5(value) (FUSES_KEYVAL_INTCHK5_KEYVAL_INTCHK5_Msk & (_UINT32_(value) << FUSES_KEYVAL_INTCHK5_KEYVAL_INTCHK5_Pos)) /* Assignment of value for KEYVAL_INTCHK5 in the FUSES_KEYVAL_INTCHK5 register */
#define FUSES_KEYVAL_INTCHK5_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_INTCHK5) Register Mask  */


/* -------- FUSES_KEYVAL_INTCHK6 : (FUSES Offset: 0x438) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_INTCHK6_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_INTCHK6) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_INTCHK6_KEYVAL_INTCHK6_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_INTCHK6)  Position */
#define FUSES_KEYVAL_INTCHK6_KEYVAL_INTCHK6_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_INTCHK6_KEYVAL_INTCHK6_Pos) /* (FUSES_KEYVAL_INTCHK6)  Mask */
#define FUSES_KEYVAL_INTCHK6_KEYVAL_INTCHK6(value) (FUSES_KEYVAL_INTCHK6_KEYVAL_INTCHK6_Msk & (_UINT32_(value) << FUSES_KEYVAL_INTCHK6_KEYVAL_INTCHK6_Pos)) /* Assignment of value for KEYVAL_INTCHK6 in the FUSES_KEYVAL_INTCHK6 register */
#define FUSES_KEYVAL_INTCHK6_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_INTCHK6) Register Mask  */


/* -------- FUSES_KEYVAL_INTCHK7 : (FUSES Offset: 0x43C) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_INTCHK7_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_INTCHK7) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_INTCHK7_KEYVAL_INTCHK7_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_INTCHK7)  Position */
#define FUSES_KEYVAL_INTCHK7_KEYVAL_INTCHK7_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_INTCHK7_KEYVAL_INTCHK7_Pos) /* (FUSES_KEYVAL_INTCHK7)  Mask */
#define FUSES_KEYVAL_INTCHK7_KEYVAL_INTCHK7(value) (FUSES_KEYVAL_INTCHK7_KEYVAL_INTCHK7_Msk & (_UINT32_(value) << FUSES_KEYVAL_INTCHK7_KEYVAL_INTCHK7_Pos)) /* Assignment of value for KEYVAL_INTCHK7 in the FUSES_KEYVAL_INTCHK7 register */
#define FUSES_KEYVAL_INTCHK7_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_INTCHK7) Register Mask  */


/* -------- FUSES_KEYVAL_CE_ALL0 : (FUSES Offset: 0x440) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_ALL0_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_ALL0) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_ALL0_KEYVAL_CE_ALL0_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_ALL0)  Position */
#define FUSES_KEYVAL_CE_ALL0_KEYVAL_CE_ALL0_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_ALL0_KEYVAL_CE_ALL0_Pos) /* (FUSES_KEYVAL_CE_ALL0)  Mask */
#define FUSES_KEYVAL_CE_ALL0_KEYVAL_CE_ALL0(value) (FUSES_KEYVAL_CE_ALL0_KEYVAL_CE_ALL0_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_ALL0_KEYVAL_CE_ALL0_Pos)) /* Assignment of value for KEYVAL_CE_ALL0 in the FUSES_KEYVAL_CE_ALL0 register */
#define FUSES_KEYVAL_CE_ALL0_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_ALL0) Register Mask  */


/* -------- FUSES_KEYVAL_CE_ALL1 : (FUSES Offset: 0x444) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_ALL1_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_ALL1) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_ALL1_KEYVAL_CE_ALL1_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_ALL1)  Position */
#define FUSES_KEYVAL_CE_ALL1_KEYVAL_CE_ALL1_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_ALL1_KEYVAL_CE_ALL1_Pos) /* (FUSES_KEYVAL_CE_ALL1)  Mask */
#define FUSES_KEYVAL_CE_ALL1_KEYVAL_CE_ALL1(value) (FUSES_KEYVAL_CE_ALL1_KEYVAL_CE_ALL1_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_ALL1_KEYVAL_CE_ALL1_Pos)) /* Assignment of value for KEYVAL_CE_ALL1 in the FUSES_KEYVAL_CE_ALL1 register */
#define FUSES_KEYVAL_CE_ALL1_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_ALL1) Register Mask  */


/* -------- FUSES_KEYVAL_CE_ALL2 : (FUSES Offset: 0x448) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_ALL2_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_ALL2) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_ALL2_KEYVAL_CE_ALL2_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_ALL2)  Position */
#define FUSES_KEYVAL_CE_ALL2_KEYVAL_CE_ALL2_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_ALL2_KEYVAL_CE_ALL2_Pos) /* (FUSES_KEYVAL_CE_ALL2)  Mask */
#define FUSES_KEYVAL_CE_ALL2_KEYVAL_CE_ALL2(value) (FUSES_KEYVAL_CE_ALL2_KEYVAL_CE_ALL2_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_ALL2_KEYVAL_CE_ALL2_Pos)) /* Assignment of value for KEYVAL_CE_ALL2 in the FUSES_KEYVAL_CE_ALL2 register */
#define FUSES_KEYVAL_CE_ALL2_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_ALL2) Register Mask  */


/* -------- FUSES_KEYVAL_CE_ALL3 : (FUSES Offset: 0x44C) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_ALL3_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_ALL3) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_ALL3_KEYVAL_CE_ALL3_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_ALL3)  Position */
#define FUSES_KEYVAL_CE_ALL3_KEYVAL_CE_ALL3_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_ALL3_KEYVAL_CE_ALL3_Pos) /* (FUSES_KEYVAL_CE_ALL3)  Mask */
#define FUSES_KEYVAL_CE_ALL3_KEYVAL_CE_ALL3(value) (FUSES_KEYVAL_CE_ALL3_KEYVAL_CE_ALL3_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_ALL3_KEYVAL_CE_ALL3_Pos)) /* Assignment of value for KEYVAL_CE_ALL3 in the FUSES_KEYVAL_CE_ALL3 register */
#define FUSES_KEYVAL_CE_ALL3_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_ALL3) Register Mask  */


/* -------- FUSES_KEYVAL_CE_ALL4 : (FUSES Offset: 0x450) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_ALL4_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_ALL4) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_ALL4_KEYVAL_CE_ALL4_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_ALL4)  Position */
#define FUSES_KEYVAL_CE_ALL4_KEYVAL_CE_ALL4_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_ALL4_KEYVAL_CE_ALL4_Pos) /* (FUSES_KEYVAL_CE_ALL4)  Mask */
#define FUSES_KEYVAL_CE_ALL4_KEYVAL_CE_ALL4(value) (FUSES_KEYVAL_CE_ALL4_KEYVAL_CE_ALL4_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_ALL4_KEYVAL_CE_ALL4_Pos)) /* Assignment of value for KEYVAL_CE_ALL4 in the FUSES_KEYVAL_CE_ALL4 register */
#define FUSES_KEYVAL_CE_ALL4_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_ALL4) Register Mask  */


/* -------- FUSES_KEYVAL_CE_ALL5 : (FUSES Offset: 0x454) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_ALL5_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_ALL5) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_ALL5_KEYVAL_CE_ALL5_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_ALL5)  Position */
#define FUSES_KEYVAL_CE_ALL5_KEYVAL_CE_ALL5_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_ALL5_KEYVAL_CE_ALL5_Pos) /* (FUSES_KEYVAL_CE_ALL5)  Mask */
#define FUSES_KEYVAL_CE_ALL5_KEYVAL_CE_ALL5(value) (FUSES_KEYVAL_CE_ALL5_KEYVAL_CE_ALL5_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_ALL5_KEYVAL_CE_ALL5_Pos)) /* Assignment of value for KEYVAL_CE_ALL5 in the FUSES_KEYVAL_CE_ALL5 register */
#define FUSES_KEYVAL_CE_ALL5_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_ALL5) Register Mask  */


/* -------- FUSES_KEYVAL_CE_ALL6 : (FUSES Offset: 0x458) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_ALL6_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_ALL6) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_ALL6_KEYVAL_CE_ALL6_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_ALL6)  Position */
#define FUSES_KEYVAL_CE_ALL6_KEYVAL_CE_ALL6_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_ALL6_KEYVAL_CE_ALL6_Pos) /* (FUSES_KEYVAL_CE_ALL6)  Mask */
#define FUSES_KEYVAL_CE_ALL6_KEYVAL_CE_ALL6(value) (FUSES_KEYVAL_CE_ALL6_KEYVAL_CE_ALL6_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_ALL6_KEYVAL_CE_ALL6_Pos)) /* Assignment of value for KEYVAL_CE_ALL6 in the FUSES_KEYVAL_CE_ALL6 register */
#define FUSES_KEYVAL_CE_ALL6_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_ALL6) Register Mask  */


/* -------- FUSES_KEYVAL_CE_ALL7 : (FUSES Offset: 0x45C) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_ALL7_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_ALL7) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_ALL7_KEYVAL_CE_ALL7_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_ALL7)  Position */
#define FUSES_KEYVAL_CE_ALL7_KEYVAL_CE_ALL7_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_ALL7_KEYVAL_CE_ALL7_Pos) /* (FUSES_KEYVAL_CE_ALL7)  Mask */
#define FUSES_KEYVAL_CE_ALL7_KEYVAL_CE_ALL7(value) (FUSES_KEYVAL_CE_ALL7_KEYVAL_CE_ALL7_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_ALL7_KEYVAL_CE_ALL7_Pos)) /* Assignment of value for KEYVAL_CE_ALL7 in the FUSES_KEYVAL_CE_ALL7 register */
#define FUSES_KEYVAL_CE_ALL7_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_ALL7) Register Mask  */


/* -------- FUSES_KEYVAL_CE_S_CR0 : (FUSES Offset: 0x460) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_S_CR0_RESETVALUE      _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_S_CR0) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_S_CR0_KEYVAL_CE_S_CR0_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_S_CR0)  Position */
#define FUSES_KEYVAL_CE_S_CR0_KEYVAL_CE_S_CR0_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_S_CR0_KEYVAL_CE_S_CR0_Pos) /* (FUSES_KEYVAL_CE_S_CR0)  Mask */
#define FUSES_KEYVAL_CE_S_CR0_KEYVAL_CE_S_CR0(value) (FUSES_KEYVAL_CE_S_CR0_KEYVAL_CE_S_CR0_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_S_CR0_KEYVAL_CE_S_CR0_Pos)) /* Assignment of value for KEYVAL_CE_S_CR0 in the FUSES_KEYVAL_CE_S_CR0 register */
#define FUSES_KEYVAL_CE_S_CR0_Msk             _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_S_CR0) Register Mask  */


/* -------- FUSES_KEYVAL_CE_S_CR1 : (FUSES Offset: 0x464) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_S_CR1_RESETVALUE      _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_S_CR1) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_S_CR1_KEYVAL_CE_S_CR1_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_S_CR1)  Position */
#define FUSES_KEYVAL_CE_S_CR1_KEYVAL_CE_S_CR1_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_S_CR1_KEYVAL_CE_S_CR1_Pos) /* (FUSES_KEYVAL_CE_S_CR1)  Mask */
#define FUSES_KEYVAL_CE_S_CR1_KEYVAL_CE_S_CR1(value) (FUSES_KEYVAL_CE_S_CR1_KEYVAL_CE_S_CR1_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_S_CR1_KEYVAL_CE_S_CR1_Pos)) /* Assignment of value for KEYVAL_CE_S_CR1 in the FUSES_KEYVAL_CE_S_CR1 register */
#define FUSES_KEYVAL_CE_S_CR1_Msk             _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_S_CR1) Register Mask  */


/* -------- FUSES_KEYVAL_CE_S_CR2 : (FUSES Offset: 0x468) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_S_CR2_RESETVALUE      _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_S_CR2) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_S_CR2_KEYVAL_CE_S_CR2_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_S_CR2)  Position */
#define FUSES_KEYVAL_CE_S_CR2_KEYVAL_CE_S_CR2_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_S_CR2_KEYVAL_CE_S_CR2_Pos) /* (FUSES_KEYVAL_CE_S_CR2)  Mask */
#define FUSES_KEYVAL_CE_S_CR2_KEYVAL_CE_S_CR2(value) (FUSES_KEYVAL_CE_S_CR2_KEYVAL_CE_S_CR2_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_S_CR2_KEYVAL_CE_S_CR2_Pos)) /* Assignment of value for KEYVAL_CE_S_CR2 in the FUSES_KEYVAL_CE_S_CR2 register */
#define FUSES_KEYVAL_CE_S_CR2_Msk             _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_S_CR2) Register Mask  */


/* -------- FUSES_KEYVAL_CE_S_CR3 : (FUSES Offset: 0x46C) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_S_CR3_RESETVALUE      _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_S_CR3) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_S_CR3_KEYVAL_CE_S_CR3_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_S_CR3)  Position */
#define FUSES_KEYVAL_CE_S_CR3_KEYVAL_CE_S_CR3_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_S_CR3_KEYVAL_CE_S_CR3_Pos) /* (FUSES_KEYVAL_CE_S_CR3)  Mask */
#define FUSES_KEYVAL_CE_S_CR3_KEYVAL_CE_S_CR3(value) (FUSES_KEYVAL_CE_S_CR3_KEYVAL_CE_S_CR3_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_S_CR3_KEYVAL_CE_S_CR3_Pos)) /* Assignment of value for KEYVAL_CE_S_CR3 in the FUSES_KEYVAL_CE_S_CR3 register */
#define FUSES_KEYVAL_CE_S_CR3_Msk             _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_S_CR3) Register Mask  */


/* -------- FUSES_KEYVAL_CE_S_CR4 : (FUSES Offset: 0x470) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_S_CR4_RESETVALUE      _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_S_CR4) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_S_CR4_KEYVAL_CE_S_CR4_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_S_CR4)  Position */
#define FUSES_KEYVAL_CE_S_CR4_KEYVAL_CE_S_CR4_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_S_CR4_KEYVAL_CE_S_CR4_Pos) /* (FUSES_KEYVAL_CE_S_CR4)  Mask */
#define FUSES_KEYVAL_CE_S_CR4_KEYVAL_CE_S_CR4(value) (FUSES_KEYVAL_CE_S_CR4_KEYVAL_CE_S_CR4_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_S_CR4_KEYVAL_CE_S_CR4_Pos)) /* Assignment of value for KEYVAL_CE_S_CR4 in the FUSES_KEYVAL_CE_S_CR4 register */
#define FUSES_KEYVAL_CE_S_CR4_Msk             _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_S_CR4) Register Mask  */


/* -------- FUSES_KEYVAL_CE_S_CR5 : (FUSES Offset: 0x474) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_S_CR5_RESETVALUE      _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_S_CR5) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_S_CR5_KEYVAL_CE_S_CR5_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_S_CR5)  Position */
#define FUSES_KEYVAL_CE_S_CR5_KEYVAL_CE_S_CR5_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_S_CR5_KEYVAL_CE_S_CR5_Pos) /* (FUSES_KEYVAL_CE_S_CR5)  Mask */
#define FUSES_KEYVAL_CE_S_CR5_KEYVAL_CE_S_CR5(value) (FUSES_KEYVAL_CE_S_CR5_KEYVAL_CE_S_CR5_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_S_CR5_KEYVAL_CE_S_CR5_Pos)) /* Assignment of value for KEYVAL_CE_S_CR5 in the FUSES_KEYVAL_CE_S_CR5 register */
#define FUSES_KEYVAL_CE_S_CR5_Msk             _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_S_CR5) Register Mask  */


/* -------- FUSES_KEYVAL_CE_S_CR6 : (FUSES Offset: 0x478) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_S_CR6_RESETVALUE      _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_S_CR6) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_S_CR6_KEYVAL_CE_S_CR6_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_S_CR6)  Position */
#define FUSES_KEYVAL_CE_S_CR6_KEYVAL_CE_S_CR6_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_S_CR6_KEYVAL_CE_S_CR6_Pos) /* (FUSES_KEYVAL_CE_S_CR6)  Mask */
#define FUSES_KEYVAL_CE_S_CR6_KEYVAL_CE_S_CR6(value) (FUSES_KEYVAL_CE_S_CR6_KEYVAL_CE_S_CR6_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_S_CR6_KEYVAL_CE_S_CR6_Pos)) /* Assignment of value for KEYVAL_CE_S_CR6 in the FUSES_KEYVAL_CE_S_CR6 register */
#define FUSES_KEYVAL_CE_S_CR6_Msk             _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_S_CR6) Register Mask  */


/* -------- FUSES_KEYVAL_CE_S_CR7 : (FUSES Offset: 0x47C) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_S_CR7_RESETVALUE      _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_S_CR7) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_S_CR7_KEYVAL_CE_S_CR7_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_S_CR7)  Position */
#define FUSES_KEYVAL_CE_S_CR7_KEYVAL_CE_S_CR7_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_S_CR7_KEYVAL_CE_S_CR7_Pos) /* (FUSES_KEYVAL_CE_S_CR7)  Mask */
#define FUSES_KEYVAL_CE_S_CR7_KEYVAL_CE_S_CR7(value) (FUSES_KEYVAL_CE_S_CR7_KEYVAL_CE_S_CR7_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_S_CR7_KEYVAL_CE_S_CR7_Pos)) /* Assignment of value for KEYVAL_CE_S_CR7 in the FUSES_KEYVAL_CE_S_CR7 register */
#define FUSES_KEYVAL_CE_S_CR7_Msk             _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_S_CR7) Register Mask  */


/* -------- FUSES_KEYVAL_CE_S0 : (FUSES Offset: 0x480) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_S0_RESETVALUE         _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_S0) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_S0_KEYVAL_CE_S0_Pos   _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_S0)  Position */
#define FUSES_KEYVAL_CE_S0_KEYVAL_CE_S0_Msk   (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_S0_KEYVAL_CE_S0_Pos) /* (FUSES_KEYVAL_CE_S0)  Mask */
#define FUSES_KEYVAL_CE_S0_KEYVAL_CE_S0(value) (FUSES_KEYVAL_CE_S0_KEYVAL_CE_S0_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_S0_KEYVAL_CE_S0_Pos)) /* Assignment of value for KEYVAL_CE_S0 in the FUSES_KEYVAL_CE_S0 register */
#define FUSES_KEYVAL_CE_S0_Msk                _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_S0) Register Mask  */


/* -------- FUSES_KEYVAL_CE_S1 : (FUSES Offset: 0x484) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_S1_RESETVALUE         _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_S1) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_S1_KEYVAL_CE_S1_Pos   _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_S1)  Position */
#define FUSES_KEYVAL_CE_S1_KEYVAL_CE_S1_Msk   (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_S1_KEYVAL_CE_S1_Pos) /* (FUSES_KEYVAL_CE_S1)  Mask */
#define FUSES_KEYVAL_CE_S1_KEYVAL_CE_S1(value) (FUSES_KEYVAL_CE_S1_KEYVAL_CE_S1_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_S1_KEYVAL_CE_S1_Pos)) /* Assignment of value for KEYVAL_CE_S1 in the FUSES_KEYVAL_CE_S1 register */
#define FUSES_KEYVAL_CE_S1_Msk                _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_S1) Register Mask  */


/* -------- FUSES_KEYVAL_CE_S2 : (FUSES Offset: 0x488) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_S2_RESETVALUE         _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_S2) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_S2_KEYVAL_CE_S2_Pos   _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_S2)  Position */
#define FUSES_KEYVAL_CE_S2_KEYVAL_CE_S2_Msk   (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_S2_KEYVAL_CE_S2_Pos) /* (FUSES_KEYVAL_CE_S2)  Mask */
#define FUSES_KEYVAL_CE_S2_KEYVAL_CE_S2(value) (FUSES_KEYVAL_CE_S2_KEYVAL_CE_S2_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_S2_KEYVAL_CE_S2_Pos)) /* Assignment of value for KEYVAL_CE_S2 in the FUSES_KEYVAL_CE_S2 register */
#define FUSES_KEYVAL_CE_S2_Msk                _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_S2) Register Mask  */


/* -------- FUSES_KEYVAL_CE_S3 : (FUSES Offset: 0x48C) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_S3_RESETVALUE         _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_S3) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_S3_KEYVAL_CE_S3_Pos   _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_S3)  Position */
#define FUSES_KEYVAL_CE_S3_KEYVAL_CE_S3_Msk   (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_S3_KEYVAL_CE_S3_Pos) /* (FUSES_KEYVAL_CE_S3)  Mask */
#define FUSES_KEYVAL_CE_S3_KEYVAL_CE_S3(value) (FUSES_KEYVAL_CE_S3_KEYVAL_CE_S3_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_S3_KEYVAL_CE_S3_Pos)) /* Assignment of value for KEYVAL_CE_S3 in the FUSES_KEYVAL_CE_S3 register */
#define FUSES_KEYVAL_CE_S3_Msk                _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_S3) Register Mask  */


/* -------- FUSES_KEYVAL_CE_S4 : (FUSES Offset: 0x490) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_S4_RESETVALUE         _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_S4) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_S4_KEYVAL_CE_S4_Pos   _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_S4)  Position */
#define FUSES_KEYVAL_CE_S4_KEYVAL_CE_S4_Msk   (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_S4_KEYVAL_CE_S4_Pos) /* (FUSES_KEYVAL_CE_S4)  Mask */
#define FUSES_KEYVAL_CE_S4_KEYVAL_CE_S4(value) (FUSES_KEYVAL_CE_S4_KEYVAL_CE_S4_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_S4_KEYVAL_CE_S4_Pos)) /* Assignment of value for KEYVAL_CE_S4 in the FUSES_KEYVAL_CE_S4 register */
#define FUSES_KEYVAL_CE_S4_Msk                _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_S4) Register Mask  */


/* -------- FUSES_KEYVAL_CE_S5 : (FUSES Offset: 0x494) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_S5_RESETVALUE         _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_S5) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_S5_KEYVAL_CE_S5_Pos   _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_S5)  Position */
#define FUSES_KEYVAL_CE_S5_KEYVAL_CE_S5_Msk   (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_S5_KEYVAL_CE_S5_Pos) /* (FUSES_KEYVAL_CE_S5)  Mask */
#define FUSES_KEYVAL_CE_S5_KEYVAL_CE_S5(value) (FUSES_KEYVAL_CE_S5_KEYVAL_CE_S5_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_S5_KEYVAL_CE_S5_Pos)) /* Assignment of value for KEYVAL_CE_S5 in the FUSES_KEYVAL_CE_S5 register */
#define FUSES_KEYVAL_CE_S5_Msk                _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_S5) Register Mask  */


/* -------- FUSES_KEYVAL_CE_S6 : (FUSES Offset: 0x498) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_S6_RESETVALUE         _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_S6) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_S6_KEYVAL_CE_S6_Pos   _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_S6)  Position */
#define FUSES_KEYVAL_CE_S6_KEYVAL_CE_S6_Msk   (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_S6_KEYVAL_CE_S6_Pos) /* (FUSES_KEYVAL_CE_S6)  Mask */
#define FUSES_KEYVAL_CE_S6_KEYVAL_CE_S6(value) (FUSES_KEYVAL_CE_S6_KEYVAL_CE_S6_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_S6_KEYVAL_CE_S6_Pos)) /* Assignment of value for KEYVAL_CE_S6 in the FUSES_KEYVAL_CE_S6 register */
#define FUSES_KEYVAL_CE_S6_Msk                _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_S6) Register Mask  */


/* -------- FUSES_KEYVAL_CE_S7 : (FUSES Offset: 0x49C) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_S7_RESETVALUE         _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_S7) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_S7_KEYVAL_CE_S7_Pos   _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_S7)  Position */
#define FUSES_KEYVAL_CE_S7_KEYVAL_CE_S7_Msk   (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_S7_KEYVAL_CE_S7_Pos) /* (FUSES_KEYVAL_CE_S7)  Mask */
#define FUSES_KEYVAL_CE_S7_KEYVAL_CE_S7(value) (FUSES_KEYVAL_CE_S7_KEYVAL_CE_S7_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_S7_KEYVAL_CE_S7_Pos)) /* Assignment of value for KEYVAL_CE_S7 in the FUSES_KEYVAL_CE_S7 register */
#define FUSES_KEYVAL_CE_S7_Msk                _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_S7) Register Mask  */


/* -------- FUSES_KEYVAL_CE_NS_CR0 : (FUSES Offset: 0x4A0) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_NS_CR0_RESETVALUE     _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_NS_CR0) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_NS_CR0_KEYVAL_CE_NS_CR0_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_NS_CR0)  Position */
#define FUSES_KEYVAL_CE_NS_CR0_KEYVAL_CE_NS_CR0_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_NS_CR0_KEYVAL_CE_NS_CR0_Pos) /* (FUSES_KEYVAL_CE_NS_CR0)  Mask */
#define FUSES_KEYVAL_CE_NS_CR0_KEYVAL_CE_NS_CR0(value) (FUSES_KEYVAL_CE_NS_CR0_KEYVAL_CE_NS_CR0_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_NS_CR0_KEYVAL_CE_NS_CR0_Pos)) /* Assignment of value for KEYVAL_CE_NS_CR0 in the FUSES_KEYVAL_CE_NS_CR0 register */
#define FUSES_KEYVAL_CE_NS_CR0_Msk            _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_NS_CR0) Register Mask  */


/* -------- FUSES_KEYVAL_CE_NS_CR1 : (FUSES Offset: 0x4A4) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_NS_CR1_RESETVALUE     _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_NS_CR1) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_NS_CR1_KEYVAL_CE_NS_CR1_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_NS_CR1)  Position */
#define FUSES_KEYVAL_CE_NS_CR1_KEYVAL_CE_NS_CR1_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_NS_CR1_KEYVAL_CE_NS_CR1_Pos) /* (FUSES_KEYVAL_CE_NS_CR1)  Mask */
#define FUSES_KEYVAL_CE_NS_CR1_KEYVAL_CE_NS_CR1(value) (FUSES_KEYVAL_CE_NS_CR1_KEYVAL_CE_NS_CR1_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_NS_CR1_KEYVAL_CE_NS_CR1_Pos)) /* Assignment of value for KEYVAL_CE_NS_CR1 in the FUSES_KEYVAL_CE_NS_CR1 register */
#define FUSES_KEYVAL_CE_NS_CR1_Msk            _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_NS_CR1) Register Mask  */


/* -------- FUSES_KEYVAL_CE_NS_CR2 : (FUSES Offset: 0x4A8) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_NS_CR2_RESETVALUE     _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_NS_CR2) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_NS_CR2_KEYVAL_CE_NS_CR2_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_NS_CR2)  Position */
#define FUSES_KEYVAL_CE_NS_CR2_KEYVAL_CE_NS_CR2_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_NS_CR2_KEYVAL_CE_NS_CR2_Pos) /* (FUSES_KEYVAL_CE_NS_CR2)  Mask */
#define FUSES_KEYVAL_CE_NS_CR2_KEYVAL_CE_NS_CR2(value) (FUSES_KEYVAL_CE_NS_CR2_KEYVAL_CE_NS_CR2_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_NS_CR2_KEYVAL_CE_NS_CR2_Pos)) /* Assignment of value for KEYVAL_CE_NS_CR2 in the FUSES_KEYVAL_CE_NS_CR2 register */
#define FUSES_KEYVAL_CE_NS_CR2_Msk            _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_NS_CR2) Register Mask  */


/* -------- FUSES_KEYVAL_CE_NS_CR3 : (FUSES Offset: 0x4AC) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_NS_CR3_RESETVALUE     _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_NS_CR3) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_NS_CR3_KEYVAL_CE_NS_CR3_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_NS_CR3)  Position */
#define FUSES_KEYVAL_CE_NS_CR3_KEYVAL_CE_NS_CR3_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_NS_CR3_KEYVAL_CE_NS_CR3_Pos) /* (FUSES_KEYVAL_CE_NS_CR3)  Mask */
#define FUSES_KEYVAL_CE_NS_CR3_KEYVAL_CE_NS_CR3(value) (FUSES_KEYVAL_CE_NS_CR3_KEYVAL_CE_NS_CR3_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_NS_CR3_KEYVAL_CE_NS_CR3_Pos)) /* Assignment of value for KEYVAL_CE_NS_CR3 in the FUSES_KEYVAL_CE_NS_CR3 register */
#define FUSES_KEYVAL_CE_NS_CR3_Msk            _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_NS_CR3) Register Mask  */


/* -------- FUSES_KEYVAL_CE_NS_CR4 : (FUSES Offset: 0x4B0) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_NS_CR4_RESETVALUE     _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_NS_CR4) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_NS_CR4_KEYVAL_CE_NS_CR4_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_NS_CR4)  Position */
#define FUSES_KEYVAL_CE_NS_CR4_KEYVAL_CE_NS_CR4_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_NS_CR4_KEYVAL_CE_NS_CR4_Pos) /* (FUSES_KEYVAL_CE_NS_CR4)  Mask */
#define FUSES_KEYVAL_CE_NS_CR4_KEYVAL_CE_NS_CR4(value) (FUSES_KEYVAL_CE_NS_CR4_KEYVAL_CE_NS_CR4_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_NS_CR4_KEYVAL_CE_NS_CR4_Pos)) /* Assignment of value for KEYVAL_CE_NS_CR4 in the FUSES_KEYVAL_CE_NS_CR4 register */
#define FUSES_KEYVAL_CE_NS_CR4_Msk            _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_NS_CR4) Register Mask  */


/* -------- FUSES_KEYVAL_CE_NS_CR5 : (FUSES Offset: 0x4B4) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_NS_CR5_RESETVALUE     _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_NS_CR5) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_NS_CR5_KEYVAL_CE_NS_CR5_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_NS_CR5)  Position */
#define FUSES_KEYVAL_CE_NS_CR5_KEYVAL_CE_NS_CR5_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_NS_CR5_KEYVAL_CE_NS_CR5_Pos) /* (FUSES_KEYVAL_CE_NS_CR5)  Mask */
#define FUSES_KEYVAL_CE_NS_CR5_KEYVAL_CE_NS_CR5(value) (FUSES_KEYVAL_CE_NS_CR5_KEYVAL_CE_NS_CR5_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_NS_CR5_KEYVAL_CE_NS_CR5_Pos)) /* Assignment of value for KEYVAL_CE_NS_CR5 in the FUSES_KEYVAL_CE_NS_CR5 register */
#define FUSES_KEYVAL_CE_NS_CR5_Msk            _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_NS_CR5) Register Mask  */


/* -------- FUSES_KEYVAL_CE_NS_CR6 : (FUSES Offset: 0x4B8) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_NS_CR6_RESETVALUE     _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_NS_CR6) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_NS_CR6_KEYVAL_CE_NS_CR6_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_NS_CR6)  Position */
#define FUSES_KEYVAL_CE_NS_CR6_KEYVAL_CE_NS_CR6_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_NS_CR6_KEYVAL_CE_NS_CR6_Pos) /* (FUSES_KEYVAL_CE_NS_CR6)  Mask */
#define FUSES_KEYVAL_CE_NS_CR6_KEYVAL_CE_NS_CR6(value) (FUSES_KEYVAL_CE_NS_CR6_KEYVAL_CE_NS_CR6_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_NS_CR6_KEYVAL_CE_NS_CR6_Pos)) /* Assignment of value for KEYVAL_CE_NS_CR6 in the FUSES_KEYVAL_CE_NS_CR6 register */
#define FUSES_KEYVAL_CE_NS_CR6_Msk            _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_NS_CR6) Register Mask  */


/* -------- FUSES_KEYVAL_CE_NS_CR7 : (FUSES Offset: 0x4BC) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_NS_CR7_RESETVALUE     _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_NS_CR7) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_NS_CR7_KEYVAL_CE_NS_CR7_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_NS_CR7)  Position */
#define FUSES_KEYVAL_CE_NS_CR7_KEYVAL_CE_NS_CR7_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_NS_CR7_KEYVAL_CE_NS_CR7_Pos) /* (FUSES_KEYVAL_CE_NS_CR7)  Mask */
#define FUSES_KEYVAL_CE_NS_CR7_KEYVAL_CE_NS_CR7(value) (FUSES_KEYVAL_CE_NS_CR7_KEYVAL_CE_NS_CR7_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_NS_CR7_KEYVAL_CE_NS_CR7_Pos)) /* Assignment of value for KEYVAL_CE_NS_CR7 in the FUSES_KEYVAL_CE_NS_CR7 register */
#define FUSES_KEYVAL_CE_NS_CR7_Msk            _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_NS_CR7) Register Mask  */


/* -------- FUSES_KEYVAL_CE_NS0 : (FUSES Offset: 0x4C0) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_NS0_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_NS0) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_NS0_KEYVAL_CE_NS0_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_NS0)  Position */
#define FUSES_KEYVAL_CE_NS0_KEYVAL_CE_NS0_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_NS0_KEYVAL_CE_NS0_Pos) /* (FUSES_KEYVAL_CE_NS0)  Mask */
#define FUSES_KEYVAL_CE_NS0_KEYVAL_CE_NS0(value) (FUSES_KEYVAL_CE_NS0_KEYVAL_CE_NS0_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_NS0_KEYVAL_CE_NS0_Pos)) /* Assignment of value for KEYVAL_CE_NS0 in the FUSES_KEYVAL_CE_NS0 register */
#define FUSES_KEYVAL_CE_NS0_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_NS0) Register Mask  */


/* -------- FUSES_KEYVAL_CE_NS1 : (FUSES Offset: 0x4C4) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_NS1_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_NS1) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_NS1_KEYVAL_CE_NS1_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_NS1)  Position */
#define FUSES_KEYVAL_CE_NS1_KEYVAL_CE_NS1_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_NS1_KEYVAL_CE_NS1_Pos) /* (FUSES_KEYVAL_CE_NS1)  Mask */
#define FUSES_KEYVAL_CE_NS1_KEYVAL_CE_NS1(value) (FUSES_KEYVAL_CE_NS1_KEYVAL_CE_NS1_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_NS1_KEYVAL_CE_NS1_Pos)) /* Assignment of value for KEYVAL_CE_NS1 in the FUSES_KEYVAL_CE_NS1 register */
#define FUSES_KEYVAL_CE_NS1_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_NS1) Register Mask  */


/* -------- FUSES_KEYVAL_CE_NS2 : (FUSES Offset: 0x4C8) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_NS2_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_NS2) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_NS2_KEYVAL_CE_NS2_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_NS2)  Position */
#define FUSES_KEYVAL_CE_NS2_KEYVAL_CE_NS2_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_NS2_KEYVAL_CE_NS2_Pos) /* (FUSES_KEYVAL_CE_NS2)  Mask */
#define FUSES_KEYVAL_CE_NS2_KEYVAL_CE_NS2(value) (FUSES_KEYVAL_CE_NS2_KEYVAL_CE_NS2_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_NS2_KEYVAL_CE_NS2_Pos)) /* Assignment of value for KEYVAL_CE_NS2 in the FUSES_KEYVAL_CE_NS2 register */
#define FUSES_KEYVAL_CE_NS2_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_NS2) Register Mask  */


/* -------- FUSES_KEYVAL_CE_NS3 : (FUSES Offset: 0x4CC) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_NS3_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_NS3) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_NS3_KEYVAL_CE_NS3_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_NS3)  Position */
#define FUSES_KEYVAL_CE_NS3_KEYVAL_CE_NS3_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_NS3_KEYVAL_CE_NS3_Pos) /* (FUSES_KEYVAL_CE_NS3)  Mask */
#define FUSES_KEYVAL_CE_NS3_KEYVAL_CE_NS3(value) (FUSES_KEYVAL_CE_NS3_KEYVAL_CE_NS3_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_NS3_KEYVAL_CE_NS3_Pos)) /* Assignment of value for KEYVAL_CE_NS3 in the FUSES_KEYVAL_CE_NS3 register */
#define FUSES_KEYVAL_CE_NS3_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_NS3) Register Mask  */


/* -------- FUSES_KEYVAL_CE_NS4 : (FUSES Offset: 0x4D0) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_NS4_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_NS4) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_NS4_KEYVAL_CE_NS4_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_NS4)  Position */
#define FUSES_KEYVAL_CE_NS4_KEYVAL_CE_NS4_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_NS4_KEYVAL_CE_NS4_Pos) /* (FUSES_KEYVAL_CE_NS4)  Mask */
#define FUSES_KEYVAL_CE_NS4_KEYVAL_CE_NS4(value) (FUSES_KEYVAL_CE_NS4_KEYVAL_CE_NS4_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_NS4_KEYVAL_CE_NS4_Pos)) /* Assignment of value for KEYVAL_CE_NS4 in the FUSES_KEYVAL_CE_NS4 register */
#define FUSES_KEYVAL_CE_NS4_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_NS4) Register Mask  */


/* -------- FUSES_KEYVAL_CE_NS5 : (FUSES Offset: 0x4D4) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_NS5_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_NS5) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_NS5_KEYVAL_CE_NS5_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_NS5)  Position */
#define FUSES_KEYVAL_CE_NS5_KEYVAL_CE_NS5_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_NS5_KEYVAL_CE_NS5_Pos) /* (FUSES_KEYVAL_CE_NS5)  Mask */
#define FUSES_KEYVAL_CE_NS5_KEYVAL_CE_NS5(value) (FUSES_KEYVAL_CE_NS5_KEYVAL_CE_NS5_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_NS5_KEYVAL_CE_NS5_Pos)) /* Assignment of value for KEYVAL_CE_NS5 in the FUSES_KEYVAL_CE_NS5 register */
#define FUSES_KEYVAL_CE_NS5_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_NS5) Register Mask  */


/* -------- FUSES_KEYVAL_CE_NS6 : (FUSES Offset: 0x4D8) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_NS6_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_NS6) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_NS6_KEYVAL_CE_NS6_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_NS6)  Position */
#define FUSES_KEYVAL_CE_NS6_KEYVAL_CE_NS6_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_NS6_KEYVAL_CE_NS6_Pos) /* (FUSES_KEYVAL_CE_NS6)  Mask */
#define FUSES_KEYVAL_CE_NS6_KEYVAL_CE_NS6(value) (FUSES_KEYVAL_CE_NS6_KEYVAL_CE_NS6_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_NS6_KEYVAL_CE_NS6_Pos)) /* Assignment of value for KEYVAL_CE_NS6 in the FUSES_KEYVAL_CE_NS6 register */
#define FUSES_KEYVAL_CE_NS6_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_NS6) Register Mask  */


/* -------- FUSES_KEYVAL_CE_NS7 : (FUSES Offset: 0x4DC) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_CE_NS7_RESETVALUE        _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_CE_NS7) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_CE_NS7_KEYVAL_CE_NS7_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_CE_NS7)  Position */
#define FUSES_KEYVAL_CE_NS7_KEYVAL_CE_NS7_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_CE_NS7_KEYVAL_CE_NS7_Pos) /* (FUSES_KEYVAL_CE_NS7)  Mask */
#define FUSES_KEYVAL_CE_NS7_KEYVAL_CE_NS7(value) (FUSES_KEYVAL_CE_NS7_KEYVAL_CE_NS7_Msk & (_UINT32_(value) << FUSES_KEYVAL_CE_NS7_KEYVAL_CE_NS7_Pos)) /* Assignment of value for KEYVAL_CE_NS7 in the FUSES_KEYVAL_CE_NS7 register */
#define FUSES_KEYVAL_CE_NS7_Msk               _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_CE_NS7) Register Mask  */


/* -------- FUSES_KEYVAL_PRG_PG0 : (FUSES Offset: 0x4E0) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_PRG_PG0_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_PRG_PG0) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_PRG_PG0_KEYVAL_PRG_PG0_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_PRG_PG0)  Position */
#define FUSES_KEYVAL_PRG_PG0_KEYVAL_PRG_PG0_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_PRG_PG0_KEYVAL_PRG_PG0_Pos) /* (FUSES_KEYVAL_PRG_PG0)  Mask */
#define FUSES_KEYVAL_PRG_PG0_KEYVAL_PRG_PG0(value) (FUSES_KEYVAL_PRG_PG0_KEYVAL_PRG_PG0_Msk & (_UINT32_(value) << FUSES_KEYVAL_PRG_PG0_KEYVAL_PRG_PG0_Pos)) /* Assignment of value for KEYVAL_PRG_PG0 in the FUSES_KEYVAL_PRG_PG0 register */
#define FUSES_KEYVAL_PRG_PG0_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_PRG_PG0) Register Mask  */


/* -------- FUSES_KEYVAL_PRG_PG1 : (FUSES Offset: 0x4E4) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_PRG_PG1_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_PRG_PG1) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_PRG_PG1_KEYVAL_PRG_PG1_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_PRG_PG1)  Position */
#define FUSES_KEYVAL_PRG_PG1_KEYVAL_PRG_PG1_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_PRG_PG1_KEYVAL_PRG_PG1_Pos) /* (FUSES_KEYVAL_PRG_PG1)  Mask */
#define FUSES_KEYVAL_PRG_PG1_KEYVAL_PRG_PG1(value) (FUSES_KEYVAL_PRG_PG1_KEYVAL_PRG_PG1_Msk & (_UINT32_(value) << FUSES_KEYVAL_PRG_PG1_KEYVAL_PRG_PG1_Pos)) /* Assignment of value for KEYVAL_PRG_PG1 in the FUSES_KEYVAL_PRG_PG1 register */
#define FUSES_KEYVAL_PRG_PG1_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_PRG_PG1) Register Mask  */


/* -------- FUSES_KEYVAL_PRG_PG2 : (FUSES Offset: 0x4E8) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_PRG_PG2_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_PRG_PG2) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_PRG_PG2_KEYVAL_PRG_PG2_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_PRG_PG2)  Position */
#define FUSES_KEYVAL_PRG_PG2_KEYVAL_PRG_PG2_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_PRG_PG2_KEYVAL_PRG_PG2_Pos) /* (FUSES_KEYVAL_PRG_PG2)  Mask */
#define FUSES_KEYVAL_PRG_PG2_KEYVAL_PRG_PG2(value) (FUSES_KEYVAL_PRG_PG2_KEYVAL_PRG_PG2_Msk & (_UINT32_(value) << FUSES_KEYVAL_PRG_PG2_KEYVAL_PRG_PG2_Pos)) /* Assignment of value for KEYVAL_PRG_PG2 in the FUSES_KEYVAL_PRG_PG2 register */
#define FUSES_KEYVAL_PRG_PG2_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_PRG_PG2) Register Mask  */


/* -------- FUSES_KEYVAL_PRG_PG3 : (FUSES Offset: 0x4EC) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_PRG_PG3_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_PRG_PG3) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_PRG_PG3_KEYVAL_PRG_PG3_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_PRG_PG3)  Position */
#define FUSES_KEYVAL_PRG_PG3_KEYVAL_PRG_PG3_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_PRG_PG3_KEYVAL_PRG_PG3_Pos) /* (FUSES_KEYVAL_PRG_PG3)  Mask */
#define FUSES_KEYVAL_PRG_PG3_KEYVAL_PRG_PG3(value) (FUSES_KEYVAL_PRG_PG3_KEYVAL_PRG_PG3_Msk & (_UINT32_(value) << FUSES_KEYVAL_PRG_PG3_KEYVAL_PRG_PG3_Pos)) /* Assignment of value for KEYVAL_PRG_PG3 in the FUSES_KEYVAL_PRG_PG3 register */
#define FUSES_KEYVAL_PRG_PG3_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_PRG_PG3) Register Mask  */


/* -------- FUSES_KEYVAL_PRG_PG4 : (FUSES Offset: 0x4F0) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_PRG_PG4_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_PRG_PG4) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_PRG_PG4_KEYVAL_PRG_PG4_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_PRG_PG4)  Position */
#define FUSES_KEYVAL_PRG_PG4_KEYVAL_PRG_PG4_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_PRG_PG4_KEYVAL_PRG_PG4_Pos) /* (FUSES_KEYVAL_PRG_PG4)  Mask */
#define FUSES_KEYVAL_PRG_PG4_KEYVAL_PRG_PG4(value) (FUSES_KEYVAL_PRG_PG4_KEYVAL_PRG_PG4_Msk & (_UINT32_(value) << FUSES_KEYVAL_PRG_PG4_KEYVAL_PRG_PG4_Pos)) /* Assignment of value for KEYVAL_PRG_PG4 in the FUSES_KEYVAL_PRG_PG4 register */
#define FUSES_KEYVAL_PRG_PG4_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_PRG_PG4) Register Mask  */


/* -------- FUSES_KEYVAL_PRG_PG5 : (FUSES Offset: 0x4F4) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_PRG_PG5_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_PRG_PG5) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_PRG_PG5_KEYVAL_PRG_PG5_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_PRG_PG5)  Position */
#define FUSES_KEYVAL_PRG_PG5_KEYVAL_PRG_PG5_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_PRG_PG5_KEYVAL_PRG_PG5_Pos) /* (FUSES_KEYVAL_PRG_PG5)  Mask */
#define FUSES_KEYVAL_PRG_PG5_KEYVAL_PRG_PG5(value) (FUSES_KEYVAL_PRG_PG5_KEYVAL_PRG_PG5_Msk & (_UINT32_(value) << FUSES_KEYVAL_PRG_PG5_KEYVAL_PRG_PG5_Pos)) /* Assignment of value for KEYVAL_PRG_PG5 in the FUSES_KEYVAL_PRG_PG5 register */
#define FUSES_KEYVAL_PRG_PG5_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_PRG_PG5) Register Mask  */


/* -------- FUSES_KEYVAL_PRG_PG6 : (FUSES Offset: 0x4F8) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_PRG_PG6_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_PRG_PG6) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_PRG_PG6_KEYVAL_PRG_PG6_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_PRG_PG6)  Position */
#define FUSES_KEYVAL_PRG_PG6_KEYVAL_PRG_PG6_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_PRG_PG6_KEYVAL_PRG_PG6_Pos) /* (FUSES_KEYVAL_PRG_PG6)  Mask */
#define FUSES_KEYVAL_PRG_PG6_KEYVAL_PRG_PG6(value) (FUSES_KEYVAL_PRG_PG6_KEYVAL_PRG_PG6_Msk & (_UINT32_(value) << FUSES_KEYVAL_PRG_PG6_KEYVAL_PRG_PG6_Pos)) /* Assignment of value for KEYVAL_PRG_PG6 in the FUSES_KEYVAL_PRG_PG6 register */
#define FUSES_KEYVAL_PRG_PG6_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_PRG_PG6) Register Mask  */


/* -------- FUSES_KEYVAL_PRG_PG7 : (FUSES Offset: 0x4FC) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_PRG_PG7_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_PRG_PG7) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_PRG_PG7_KEYVAL_PRG_PG7_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_PRG_PG7)  Position */
#define FUSES_KEYVAL_PRG_PG7_KEYVAL_PRG_PG7_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_PRG_PG7_KEYVAL_PRG_PG7_Pos) /* (FUSES_KEYVAL_PRG_PG7)  Mask */
#define FUSES_KEYVAL_PRG_PG7_KEYVAL_PRG_PG7(value) (FUSES_KEYVAL_PRG_PG7_KEYVAL_PRG_PG7_Msk & (_UINT32_(value) << FUSES_KEYVAL_PRG_PG7_KEYVAL_PRG_PG7_Pos)) /* Assignment of value for KEYVAL_PRG_PG7 in the FUSES_KEYVAL_PRG_PG7 register */
#define FUSES_KEYVAL_PRG_PG7_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_PRG_PG7) Register Mask  */


/* -------- FUSES_KEYVAL_SDAL1_0 : (FUSES Offset: 0x500) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_SDAL1_0_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_SDAL1_0) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_SDAL1_0_KEYVAL_SDAL1_0_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_SDAL1_0)  Position */
#define FUSES_KEYVAL_SDAL1_0_KEYVAL_SDAL1_0_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_SDAL1_0_KEYVAL_SDAL1_0_Pos) /* (FUSES_KEYVAL_SDAL1_0)  Mask */
#define FUSES_KEYVAL_SDAL1_0_KEYVAL_SDAL1_0(value) (FUSES_KEYVAL_SDAL1_0_KEYVAL_SDAL1_0_Msk & (_UINT32_(value) << FUSES_KEYVAL_SDAL1_0_KEYVAL_SDAL1_0_Pos)) /* Assignment of value for KEYVAL_SDAL1_0 in the FUSES_KEYVAL_SDAL1_0 register */
#define FUSES_KEYVAL_SDAL1_0_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_SDAL1_0) Register Mask  */


/* -------- FUSES_KEYVAL_SDAL1_1 : (FUSES Offset: 0x504) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_SDAL1_1_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_SDAL1_1) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_SDAL1_1_KEYVAL_SDAL1_1_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_SDAL1_1)  Position */
#define FUSES_KEYVAL_SDAL1_1_KEYVAL_SDAL1_1_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_SDAL1_1_KEYVAL_SDAL1_1_Pos) /* (FUSES_KEYVAL_SDAL1_1)  Mask */
#define FUSES_KEYVAL_SDAL1_1_KEYVAL_SDAL1_1(value) (FUSES_KEYVAL_SDAL1_1_KEYVAL_SDAL1_1_Msk & (_UINT32_(value) << FUSES_KEYVAL_SDAL1_1_KEYVAL_SDAL1_1_Pos)) /* Assignment of value for KEYVAL_SDAL1_1 in the FUSES_KEYVAL_SDAL1_1 register */
#define FUSES_KEYVAL_SDAL1_1_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_SDAL1_1) Register Mask  */


/* -------- FUSES_KEYVAL_SDAL1_2 : (FUSES Offset: 0x508) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_SDAL1_2_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_SDAL1_2) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_SDAL1_2_KEYVAL_SDAL1_2_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_SDAL1_2)  Position */
#define FUSES_KEYVAL_SDAL1_2_KEYVAL_SDAL1_2_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_SDAL1_2_KEYVAL_SDAL1_2_Pos) /* (FUSES_KEYVAL_SDAL1_2)  Mask */
#define FUSES_KEYVAL_SDAL1_2_KEYVAL_SDAL1_2(value) (FUSES_KEYVAL_SDAL1_2_KEYVAL_SDAL1_2_Msk & (_UINT32_(value) << FUSES_KEYVAL_SDAL1_2_KEYVAL_SDAL1_2_Pos)) /* Assignment of value for KEYVAL_SDAL1_2 in the FUSES_KEYVAL_SDAL1_2 register */
#define FUSES_KEYVAL_SDAL1_2_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_SDAL1_2) Register Mask  */


/* -------- FUSES_KEYVAL_SDAL1_3 : (FUSES Offset: 0x50C) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_SDAL1_3_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_SDAL1_3) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_SDAL1_3_KEYVAL_SDAL1_3_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_SDAL1_3)  Position */
#define FUSES_KEYVAL_SDAL1_3_KEYVAL_SDAL1_3_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_SDAL1_3_KEYVAL_SDAL1_3_Pos) /* (FUSES_KEYVAL_SDAL1_3)  Mask */
#define FUSES_KEYVAL_SDAL1_3_KEYVAL_SDAL1_3(value) (FUSES_KEYVAL_SDAL1_3_KEYVAL_SDAL1_3_Msk & (_UINT32_(value) << FUSES_KEYVAL_SDAL1_3_KEYVAL_SDAL1_3_Pos)) /* Assignment of value for KEYVAL_SDAL1_3 in the FUSES_KEYVAL_SDAL1_3 register */
#define FUSES_KEYVAL_SDAL1_3_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_SDAL1_3) Register Mask  */


/* -------- FUSES_KEYVAL_SDAL1_4 : (FUSES Offset: 0x510) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_SDAL1_4_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_SDAL1_4) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_SDAL1_4_KEYVAL_SDAL1_4_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_SDAL1_4)  Position */
#define FUSES_KEYVAL_SDAL1_4_KEYVAL_SDAL1_4_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_SDAL1_4_KEYVAL_SDAL1_4_Pos) /* (FUSES_KEYVAL_SDAL1_4)  Mask */
#define FUSES_KEYVAL_SDAL1_4_KEYVAL_SDAL1_4(value) (FUSES_KEYVAL_SDAL1_4_KEYVAL_SDAL1_4_Msk & (_UINT32_(value) << FUSES_KEYVAL_SDAL1_4_KEYVAL_SDAL1_4_Pos)) /* Assignment of value for KEYVAL_SDAL1_4 in the FUSES_KEYVAL_SDAL1_4 register */
#define FUSES_KEYVAL_SDAL1_4_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_SDAL1_4) Register Mask  */


/* -------- FUSES_KEYVAL_SDAL1_5 : (FUSES Offset: 0x514) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_SDAL1_5_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_SDAL1_5) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_SDAL1_5_KEYVAL_SDAL1_5_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_SDAL1_5)  Position */
#define FUSES_KEYVAL_SDAL1_5_KEYVAL_SDAL1_5_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_SDAL1_5_KEYVAL_SDAL1_5_Pos) /* (FUSES_KEYVAL_SDAL1_5)  Mask */
#define FUSES_KEYVAL_SDAL1_5_KEYVAL_SDAL1_5(value) (FUSES_KEYVAL_SDAL1_5_KEYVAL_SDAL1_5_Msk & (_UINT32_(value) << FUSES_KEYVAL_SDAL1_5_KEYVAL_SDAL1_5_Pos)) /* Assignment of value for KEYVAL_SDAL1_5 in the FUSES_KEYVAL_SDAL1_5 register */
#define FUSES_KEYVAL_SDAL1_5_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_SDAL1_5) Register Mask  */


/* -------- FUSES_KEYVAL_SDAL1_6 : (FUSES Offset: 0x518) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_SDAL1_6_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_SDAL1_6) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_SDAL1_6_KEYVAL_SDAL1_6_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_SDAL1_6)  Position */
#define FUSES_KEYVAL_SDAL1_6_KEYVAL_SDAL1_6_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_SDAL1_6_KEYVAL_SDAL1_6_Pos) /* (FUSES_KEYVAL_SDAL1_6)  Mask */
#define FUSES_KEYVAL_SDAL1_6_KEYVAL_SDAL1_6(value) (FUSES_KEYVAL_SDAL1_6_KEYVAL_SDAL1_6_Msk & (_UINT32_(value) << FUSES_KEYVAL_SDAL1_6_KEYVAL_SDAL1_6_Pos)) /* Assignment of value for KEYVAL_SDAL1_6 in the FUSES_KEYVAL_SDAL1_6 register */
#define FUSES_KEYVAL_SDAL1_6_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_SDAL1_6) Register Mask  */


/* -------- FUSES_KEYVAL_SDAL1_7 : (FUSES Offset: 0x51C) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_SDAL1_7_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_SDAL1_7) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_SDAL1_7_KEYVAL_SDAL1_7_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_SDAL1_7)  Position */
#define FUSES_KEYVAL_SDAL1_7_KEYVAL_SDAL1_7_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_SDAL1_7_KEYVAL_SDAL1_7_Pos) /* (FUSES_KEYVAL_SDAL1_7)  Mask */
#define FUSES_KEYVAL_SDAL1_7_KEYVAL_SDAL1_7(value) (FUSES_KEYVAL_SDAL1_7_KEYVAL_SDAL1_7_Msk & (_UINT32_(value) << FUSES_KEYVAL_SDAL1_7_KEYVAL_SDAL1_7_Pos)) /* Assignment of value for KEYVAL_SDAL1_7 in the FUSES_KEYVAL_SDAL1_7 register */
#define FUSES_KEYVAL_SDAL1_7_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_SDAL1_7) Register Mask  */


/* -------- FUSES_KEYVAL_SDAL0_0 : (FUSES Offset: 0x520) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_SDAL0_0_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_SDAL0_0) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_SDAL0_0_KEYVAL_SDAL0_0_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_SDAL0_0)  Position */
#define FUSES_KEYVAL_SDAL0_0_KEYVAL_SDAL0_0_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_SDAL0_0_KEYVAL_SDAL0_0_Pos) /* (FUSES_KEYVAL_SDAL0_0)  Mask */
#define FUSES_KEYVAL_SDAL0_0_KEYVAL_SDAL0_0(value) (FUSES_KEYVAL_SDAL0_0_KEYVAL_SDAL0_0_Msk & (_UINT32_(value) << FUSES_KEYVAL_SDAL0_0_KEYVAL_SDAL0_0_Pos)) /* Assignment of value for KEYVAL_SDAL0_0 in the FUSES_KEYVAL_SDAL0_0 register */
#define FUSES_KEYVAL_SDAL0_0_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_SDAL0_0) Register Mask  */


/* -------- FUSES_KEYVAL_SDAL0_1 : (FUSES Offset: 0x524) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_SDAL0_1_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_SDAL0_1) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_SDAL0_1_KEYVAL_SDAL0_1_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_SDAL0_1)  Position */
#define FUSES_KEYVAL_SDAL0_1_KEYVAL_SDAL0_1_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_SDAL0_1_KEYVAL_SDAL0_1_Pos) /* (FUSES_KEYVAL_SDAL0_1)  Mask */
#define FUSES_KEYVAL_SDAL0_1_KEYVAL_SDAL0_1(value) (FUSES_KEYVAL_SDAL0_1_KEYVAL_SDAL0_1_Msk & (_UINT32_(value) << FUSES_KEYVAL_SDAL0_1_KEYVAL_SDAL0_1_Pos)) /* Assignment of value for KEYVAL_SDAL0_1 in the FUSES_KEYVAL_SDAL0_1 register */
#define FUSES_KEYVAL_SDAL0_1_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_SDAL0_1) Register Mask  */


/* -------- FUSES_KEYVAL_SDAL0_2 : (FUSES Offset: 0x528) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_SDAL0_2_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_SDAL0_2) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_SDAL0_2_KEYVAL_SDAL0_2_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_SDAL0_2)  Position */
#define FUSES_KEYVAL_SDAL0_2_KEYVAL_SDAL0_2_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_SDAL0_2_KEYVAL_SDAL0_2_Pos) /* (FUSES_KEYVAL_SDAL0_2)  Mask */
#define FUSES_KEYVAL_SDAL0_2_KEYVAL_SDAL0_2(value) (FUSES_KEYVAL_SDAL0_2_KEYVAL_SDAL0_2_Msk & (_UINT32_(value) << FUSES_KEYVAL_SDAL0_2_KEYVAL_SDAL0_2_Pos)) /* Assignment of value for KEYVAL_SDAL0_2 in the FUSES_KEYVAL_SDAL0_2 register */
#define FUSES_KEYVAL_SDAL0_2_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_SDAL0_2) Register Mask  */


/* -------- FUSES_KEYVAL_SDAL0_3 : (FUSES Offset: 0x52C) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_SDAL0_3_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_SDAL0_3) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_SDAL0_3_KEYVAL_SDAL0_3_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_SDAL0_3)  Position */
#define FUSES_KEYVAL_SDAL0_3_KEYVAL_SDAL0_3_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_SDAL0_3_KEYVAL_SDAL0_3_Pos) /* (FUSES_KEYVAL_SDAL0_3)  Mask */
#define FUSES_KEYVAL_SDAL0_3_KEYVAL_SDAL0_3(value) (FUSES_KEYVAL_SDAL0_3_KEYVAL_SDAL0_3_Msk & (_UINT32_(value) << FUSES_KEYVAL_SDAL0_3_KEYVAL_SDAL0_3_Pos)) /* Assignment of value for KEYVAL_SDAL0_3 in the FUSES_KEYVAL_SDAL0_3 register */
#define FUSES_KEYVAL_SDAL0_3_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_SDAL0_3) Register Mask  */


/* -------- FUSES_KEYVAL_SDAL0_4 : (FUSES Offset: 0x530) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_SDAL0_4_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_SDAL0_4) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_SDAL0_4_KEYVAL_SDAL0_4_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_SDAL0_4)  Position */
#define FUSES_KEYVAL_SDAL0_4_KEYVAL_SDAL0_4_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_SDAL0_4_KEYVAL_SDAL0_4_Pos) /* (FUSES_KEYVAL_SDAL0_4)  Mask */
#define FUSES_KEYVAL_SDAL0_4_KEYVAL_SDAL0_4(value) (FUSES_KEYVAL_SDAL0_4_KEYVAL_SDAL0_4_Msk & (_UINT32_(value) << FUSES_KEYVAL_SDAL0_4_KEYVAL_SDAL0_4_Pos)) /* Assignment of value for KEYVAL_SDAL0_4 in the FUSES_KEYVAL_SDAL0_4 register */
#define FUSES_KEYVAL_SDAL0_4_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_SDAL0_4) Register Mask  */


/* -------- FUSES_KEYVAL_SDAL0_5 : (FUSES Offset: 0x534) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_SDAL0_5_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_SDAL0_5) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_SDAL0_5_KEYVAL_SDAL0_5_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_SDAL0_5)  Position */
#define FUSES_KEYVAL_SDAL0_5_KEYVAL_SDAL0_5_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_SDAL0_5_KEYVAL_SDAL0_5_Pos) /* (FUSES_KEYVAL_SDAL0_5)  Mask */
#define FUSES_KEYVAL_SDAL0_5_KEYVAL_SDAL0_5(value) (FUSES_KEYVAL_SDAL0_5_KEYVAL_SDAL0_5_Msk & (_UINT32_(value) << FUSES_KEYVAL_SDAL0_5_KEYVAL_SDAL0_5_Pos)) /* Assignment of value for KEYVAL_SDAL0_5 in the FUSES_KEYVAL_SDAL0_5 register */
#define FUSES_KEYVAL_SDAL0_5_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_SDAL0_5) Register Mask  */


/* -------- FUSES_KEYVAL_SDAL0_6 : (FUSES Offset: 0x538) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_SDAL0_6_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_SDAL0_6) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_SDAL0_6_KEYVAL_SDAL0_6_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_SDAL0_6)  Position */
#define FUSES_KEYVAL_SDAL0_6_KEYVAL_SDAL0_6_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_SDAL0_6_KEYVAL_SDAL0_6_Pos) /* (FUSES_KEYVAL_SDAL0_6)  Mask */
#define FUSES_KEYVAL_SDAL0_6_KEYVAL_SDAL0_6(value) (FUSES_KEYVAL_SDAL0_6_KEYVAL_SDAL0_6_Msk & (_UINT32_(value) << FUSES_KEYVAL_SDAL0_6_KEYVAL_SDAL0_6_Pos)) /* Assignment of value for KEYVAL_SDAL0_6 in the FUSES_KEYVAL_SDAL0_6 register */
#define FUSES_KEYVAL_SDAL0_6_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_SDAL0_6) Register Mask  */


/* -------- FUSES_KEYVAL_SDAL0_7 : (FUSES Offset: 0x53C) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_SDAL0_7_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_SDAL0_7) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_SDAL0_7_KEYVAL_SDAL0_7_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_SDAL0_7)  Position */
#define FUSES_KEYVAL_SDAL0_7_KEYVAL_SDAL0_7_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_SDAL0_7_KEYVAL_SDAL0_7_Pos) /* (FUSES_KEYVAL_SDAL0_7)  Mask */
#define FUSES_KEYVAL_SDAL0_7_KEYVAL_SDAL0_7(value) (FUSES_KEYVAL_SDAL0_7_KEYVAL_SDAL0_7_Msk & (_UINT32_(value) << FUSES_KEYVAL_SDAL0_7_KEYVAL_SDAL0_7_Pos)) /* Assignment of value for KEYVAL_SDAL0_7 in the FUSES_KEYVAL_SDAL0_7 register */
#define FUSES_KEYVAL_SDAL0_7_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_SDAL0_7) Register Mask  */


/* -------- FUSES_KEYVAL_DAL_EL0 : (FUSES Offset: 0x540) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_DAL_EL0_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_DAL_EL0) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_DAL_EL0_KEYVAL_DAL_EL0_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_DAL_EL0)  Position */
#define FUSES_KEYVAL_DAL_EL0_KEYVAL_DAL_EL0_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_DAL_EL0_KEYVAL_DAL_EL0_Pos) /* (FUSES_KEYVAL_DAL_EL0)  Mask */
#define FUSES_KEYVAL_DAL_EL0_KEYVAL_DAL_EL0(value) (FUSES_KEYVAL_DAL_EL0_KEYVAL_DAL_EL0_Msk & (_UINT32_(value) << FUSES_KEYVAL_DAL_EL0_KEYVAL_DAL_EL0_Pos)) /* Assignment of value for KEYVAL_DAL_EL0 in the FUSES_KEYVAL_DAL_EL0 register */
#define FUSES_KEYVAL_DAL_EL0_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_DAL_EL0) Register Mask  */


/* -------- FUSES_KEYVAL_DAL_EL1 : (FUSES Offset: 0x544) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_DAL_EL1_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_DAL_EL1) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_DAL_EL1_KEYVAL_DAL_EL1_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_DAL_EL1)  Position */
#define FUSES_KEYVAL_DAL_EL1_KEYVAL_DAL_EL1_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_DAL_EL1_KEYVAL_DAL_EL1_Pos) /* (FUSES_KEYVAL_DAL_EL1)  Mask */
#define FUSES_KEYVAL_DAL_EL1_KEYVAL_DAL_EL1(value) (FUSES_KEYVAL_DAL_EL1_KEYVAL_DAL_EL1_Msk & (_UINT32_(value) << FUSES_KEYVAL_DAL_EL1_KEYVAL_DAL_EL1_Pos)) /* Assignment of value for KEYVAL_DAL_EL1 in the FUSES_KEYVAL_DAL_EL1 register */
#define FUSES_KEYVAL_DAL_EL1_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_DAL_EL1) Register Mask  */


/* -------- FUSES_KEYVAL_DAL_EL2 : (FUSES Offset: 0x548) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_DAL_EL2_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_DAL_EL2) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_DAL_EL2_KEYVAL_DAL_EL2_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_DAL_EL2)  Position */
#define FUSES_KEYVAL_DAL_EL2_KEYVAL_DAL_EL2_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_DAL_EL2_KEYVAL_DAL_EL2_Pos) /* (FUSES_KEYVAL_DAL_EL2)  Mask */
#define FUSES_KEYVAL_DAL_EL2_KEYVAL_DAL_EL2(value) (FUSES_KEYVAL_DAL_EL2_KEYVAL_DAL_EL2_Msk & (_UINT32_(value) << FUSES_KEYVAL_DAL_EL2_KEYVAL_DAL_EL2_Pos)) /* Assignment of value for KEYVAL_DAL_EL2 in the FUSES_KEYVAL_DAL_EL2 register */
#define FUSES_KEYVAL_DAL_EL2_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_DAL_EL2) Register Mask  */


/* -------- FUSES_KEYVAL_DAL_EL3 : (FUSES Offset: 0x54C) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_DAL_EL3_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_DAL_EL3) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_DAL_EL3_KEYVAL_DAL_EL3_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_DAL_EL3)  Position */
#define FUSES_KEYVAL_DAL_EL3_KEYVAL_DAL_EL3_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_DAL_EL3_KEYVAL_DAL_EL3_Pos) /* (FUSES_KEYVAL_DAL_EL3)  Mask */
#define FUSES_KEYVAL_DAL_EL3_KEYVAL_DAL_EL3(value) (FUSES_KEYVAL_DAL_EL3_KEYVAL_DAL_EL3_Msk & (_UINT32_(value) << FUSES_KEYVAL_DAL_EL3_KEYVAL_DAL_EL3_Pos)) /* Assignment of value for KEYVAL_DAL_EL3 in the FUSES_KEYVAL_DAL_EL3 register */
#define FUSES_KEYVAL_DAL_EL3_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_DAL_EL3) Register Mask  */


/* -------- FUSES_KEYVAL_DAL_EL4 : (FUSES Offset: 0x550) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_DAL_EL4_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_DAL_EL4) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_DAL_EL4_KEYVAL_DAL_EL4_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_DAL_EL4)  Position */
#define FUSES_KEYVAL_DAL_EL4_KEYVAL_DAL_EL4_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_DAL_EL4_KEYVAL_DAL_EL4_Pos) /* (FUSES_KEYVAL_DAL_EL4)  Mask */
#define FUSES_KEYVAL_DAL_EL4_KEYVAL_DAL_EL4(value) (FUSES_KEYVAL_DAL_EL4_KEYVAL_DAL_EL4_Msk & (_UINT32_(value) << FUSES_KEYVAL_DAL_EL4_KEYVAL_DAL_EL4_Pos)) /* Assignment of value for KEYVAL_DAL_EL4 in the FUSES_KEYVAL_DAL_EL4 register */
#define FUSES_KEYVAL_DAL_EL4_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_DAL_EL4) Register Mask  */


/* -------- FUSES_KEYVAL_DAL_EL5 : (FUSES Offset: 0x554) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_DAL_EL5_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_DAL_EL5) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_DAL_EL5_KEYVAL_DAL_EL5_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_DAL_EL5)  Position */
#define FUSES_KEYVAL_DAL_EL5_KEYVAL_DAL_EL5_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_DAL_EL5_KEYVAL_DAL_EL5_Pos) /* (FUSES_KEYVAL_DAL_EL5)  Mask */
#define FUSES_KEYVAL_DAL_EL5_KEYVAL_DAL_EL5(value) (FUSES_KEYVAL_DAL_EL5_KEYVAL_DAL_EL5_Msk & (_UINT32_(value) << FUSES_KEYVAL_DAL_EL5_KEYVAL_DAL_EL5_Pos)) /* Assignment of value for KEYVAL_DAL_EL5 in the FUSES_KEYVAL_DAL_EL5 register */
#define FUSES_KEYVAL_DAL_EL5_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_DAL_EL5) Register Mask  */


/* -------- FUSES_KEYVAL_DAL_EL6 : (FUSES Offset: 0x558) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_DAL_EL6_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_DAL_EL6) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_DAL_EL6_KEYVAL_DAL_EL6_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_DAL_EL6)  Position */
#define FUSES_KEYVAL_DAL_EL6_KEYVAL_DAL_EL6_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_DAL_EL6_KEYVAL_DAL_EL6_Pos) /* (FUSES_KEYVAL_DAL_EL6)  Mask */
#define FUSES_KEYVAL_DAL_EL6_KEYVAL_DAL_EL6(value) (FUSES_KEYVAL_DAL_EL6_KEYVAL_DAL_EL6_Msk & (_UINT32_(value) << FUSES_KEYVAL_DAL_EL6_KEYVAL_DAL_EL6_Pos)) /* Assignment of value for KEYVAL_DAL_EL6 in the FUSES_KEYVAL_DAL_EL6 register */
#define FUSES_KEYVAL_DAL_EL6_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_DAL_EL6) Register Mask  */


/* -------- FUSES_KEYVAL_DAL_EL7 : (FUSES Offset: 0x55C) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_KEYVAL_DAL_EL7_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_KEYVAL_DAL_EL7) Mapped Fuse Register  Reset Value */

#define FUSES_KEYVAL_DAL_EL7_KEYVAL_DAL_EL7_Pos _UINT32_(0)                                          /* (FUSES_KEYVAL_DAL_EL7)  Position */
#define FUSES_KEYVAL_DAL_EL7_KEYVAL_DAL_EL7_Msk (_UINT32_(0xFFFFFFFF) << FUSES_KEYVAL_DAL_EL7_KEYVAL_DAL_EL7_Pos) /* (FUSES_KEYVAL_DAL_EL7)  Mask */
#define FUSES_KEYVAL_DAL_EL7_KEYVAL_DAL_EL7(value) (FUSES_KEYVAL_DAL_EL7_KEYVAL_DAL_EL7_Msk & (_UINT32_(value) << FUSES_KEYVAL_DAL_EL7_KEYVAL_DAL_EL7_Pos)) /* Assignment of value for KEYVAL_DAL_EL7 in the FUSES_KEYVAL_DAL_EL7 register */
#define FUSES_KEYVAL_DAL_EL7_Msk              _UINT32_(0xFFFFFFFF)                                 /* (FUSES_KEYVAL_DAL_EL7) Register Mask  */


/* -------- FUSES_PUF_AC : (FUSES Offset: 0xC00) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_PUF_AC_RESETVALUE               _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_PUF_AC) Mapped Fuse Register  Reset Value */

#define FUSES_PUF_AC_PUF_AC_Pos               _UINT32_(0)                                          /* (FUSES_PUF_AC)  Position */
#define FUSES_PUF_AC_PUF_AC_Msk               (_UINT32_(0xFFFFFFFF) << FUSES_PUF_AC_PUF_AC_Pos)    /* (FUSES_PUF_AC)  Mask */
#define FUSES_PUF_AC_PUF_AC(value)            (FUSES_PUF_AC_PUF_AC_Msk & (_UINT32_(value) << FUSES_PUF_AC_PUF_AC_Pos)) /* Assignment of value for PUF_AC in the FUSES_PUF_AC register */
#define FUSES_PUF_AC_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (FUSES_PUF_AC) Register Mask  */


/* -------- FUSES_DEVSIGN : (FUSES Offset: 0x0C) (R/W 32) DEVSIGN -------- */
#define FUSES_DEVSIGN_RESETVALUE              _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_DEVSIGN) DEVSIGN  Reset Value */

#define FUSES_DEVSIGN_SEQ_Pos                 _UINT32_(0)                                          /* (FUSES_DEVSIGN) Sequence number Position */
#define FUSES_DEVSIGN_SEQ_Msk                 (_UINT32_(0xFFFF) << FUSES_DEVSIGN_SEQ_Pos)          /* (FUSES_DEVSIGN) Sequence number Mask */
#define FUSES_DEVSIGN_SEQ(value)              (FUSES_DEVSIGN_SEQ_Msk & (_UINT32_(value) << FUSES_DEVSIGN_SEQ_Pos)) /* Assignment of value for SEQ in the FUSES_DEVSIGN register */
#define FUSES_DEVSIGN_SEQBAR_Pos              _UINT32_(16)                                         /* (FUSES_DEVSIGN) Sequence number BAR Position */
#define FUSES_DEVSIGN_SEQBAR_Msk              (_UINT32_(0xFFFF) << FUSES_DEVSIGN_SEQBAR_Pos)       /* (FUSES_DEVSIGN) Sequence number BAR Mask */
#define FUSES_DEVSIGN_SEQBAR(value)           (FUSES_DEVSIGN_SEQBAR_Msk & (_UINT32_(value) << FUSES_DEVSIGN_SEQBAR_Pos)) /* Assignment of value for SEQBAR in the FUSES_DEVSIGN register */
#define FUSES_DEVSIGN_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (FUSES_DEVSIGN) Register Mask  */


/* -------- FUSES_BOOT_FLAG : (FUSES Offset: 0x800) (R/W 32) BOOT CODE FLAGS REGISTER -------- */
#define FUSES_BOOT_FLAG_RESETVALUE            _UINT32_(0xFFFFFFF9)                                 /*  (FUSES_BOOT_FLAG) BOOT CODE FLAGS REGISTER  Reset Value */

#define FUSES_BOOT_FLAG_PUFRETRY_Pos          _UINT32_(1)                                          /* (FUSES_BOOT_FLAG) PUF Retry Position */
#define FUSES_BOOT_FLAG_PUFRETRY_Msk          (_UINT32_(0x1) << FUSES_BOOT_FLAG_PUFRETRY_Pos)      /* (FUSES_BOOT_FLAG) PUF Retry Mask */
#define FUSES_BOOT_FLAG_PUFRETRY(value)       (FUSES_BOOT_FLAG_PUFRETRY_Msk & (_UINT32_(value) << FUSES_BOOT_FLAG_PUFRETRY_Pos)) /* Assignment of value for PUFRETRY in the FUSES_BOOT_FLAG register */
#define FUSES_BOOT_FLAG_PUFSTARTUP_Pos        _UINT32_(2)                                          /* (FUSES_BOOT_FLAG) PUF Start Up Mode Position */
#define FUSES_BOOT_FLAG_PUFSTARTUP_Msk        (_UINT32_(0x1) << FUSES_BOOT_FLAG_PUFSTARTUP_Pos)    /* (FUSES_BOOT_FLAG) PUF Start Up Mode Mask */
#define FUSES_BOOT_FLAG_PUFSTARTUP(value)     (FUSES_BOOT_FLAG_PUFSTARTUP_Msk & (_UINT32_(value) << FUSES_BOOT_FLAG_PUFSTARTUP_Pos)) /* Assignment of value for PUFSTARTUP in the FUSES_BOOT_FLAG register */
#define FUSES_BOOT_FLAG_DICEDIS_Pos           _UINT32_(3)                                          /* (FUSES_BOOT_FLAG) Device Identifier Composition Engine Disable Position */
#define FUSES_BOOT_FLAG_DICEDIS_Msk           (_UINT32_(0x1) << FUSES_BOOT_FLAG_DICEDIS_Pos)       /* (FUSES_BOOT_FLAG) Device Identifier Composition Engine Disable Mask */
#define FUSES_BOOT_FLAG_DICEDIS(value)        (FUSES_BOOT_FLAG_DICEDIS_Msk & (_UINT32_(value) << FUSES_BOOT_FLAG_DICEDIS_Pos)) /* Assignment of value for DICEDIS in the FUSES_BOOT_FLAG register */
#define FUSES_BOOT_FLAG_BOOTMODE_Pos          _UINT32_(4)                                          /* (FUSES_BOOT_FLAG) Boot Mode Position */
#define FUSES_BOOT_FLAG_BOOTMODE_Msk          (_UINT32_(0x1) << FUSES_BOOT_FLAG_BOOTMODE_Pos)      /* (FUSES_BOOT_FLAG) Boot Mode Mask */
#define FUSES_BOOT_FLAG_BOOTMODE(value)       (FUSES_BOOT_FLAG_BOOTMODE_Msk & (_UINT32_(value) << FUSES_BOOT_FLAG_BOOTMODE_Pos)) /* Assignment of value for BOOTMODE in the FUSES_BOOT_FLAG register */
#define FUSES_BOOT_FLAG_RAM_INIT_ENB_Pos      _UINT32_(6)                                          /* (FUSES_BOOT_FLAG) RAM ECC Enable Position */
#define FUSES_BOOT_FLAG_RAM_INIT_ENB_Msk      (_UINT32_(0x1) << FUSES_BOOT_FLAG_RAM_INIT_ENB_Pos)  /* (FUSES_BOOT_FLAG) RAM ECC Enable Mask */
#define FUSES_BOOT_FLAG_RAM_INIT_ENB(value)   (FUSES_BOOT_FLAG_RAM_INIT_ENB_Msk & (_UINT32_(value) << FUSES_BOOT_FLAG_RAM_INIT_ENB_Pos)) /* Assignment of value for RAM_INIT_ENB in the FUSES_BOOT_FLAG register */
#define FUSES_BOOT_FLAG_PUFSCORE_Pos          _UINT32_(8)                                          /* (FUSES_BOOT_FLAG) PUF Score Value Position */
#define FUSES_BOOT_FLAG_PUFSCORE_Msk          (_UINT32_(0x7) << FUSES_BOOT_FLAG_PUFSCORE_Pos)      /* (FUSES_BOOT_FLAG) PUF Score Value Mask */
#define FUSES_BOOT_FLAG_PUFSCORE(value)       (FUSES_BOOT_FLAG_PUFSCORE_Msk & (_UINT32_(value) << FUSES_BOOT_FLAG_PUFSCORE_Pos)) /* Assignment of value for PUFSCORE in the FUSES_BOOT_FLAG register */
#define   FUSES_BOOT_FLAG_PUFSCORE_0_Val      _UINT32_(0x0)                                        /* (FUSES_BOOT_FLAG) 0  */
#define   FUSES_BOOT_FLAG_PUFSCORE_1_Val      _UINT32_(0x1)                                        /* (FUSES_BOOT_FLAG) 1  */
#define   FUSES_BOOT_FLAG_PUFSCORE_2_Val      _UINT32_(0x2)                                        /* (FUSES_BOOT_FLAG) 2  */
#define   FUSES_BOOT_FLAG_PUFSCORE_3_Val      _UINT32_(0x3)                                        /* (FUSES_BOOT_FLAG) 3  */
#define   FUSES_BOOT_FLAG_PUFSCORE_4_Val      _UINT32_(0x4)                                        /* (FUSES_BOOT_FLAG) 4  */
#define   FUSES_BOOT_FLAG_PUFSCORE_5_Val      _UINT32_(0x5)                                        /* (FUSES_BOOT_FLAG) 5  */
#define   FUSES_BOOT_FLAG_PUFSCORE_6_Val      _UINT32_(0x6)                                        /* (FUSES_BOOT_FLAG) 6  */
#define   FUSES_BOOT_FLAG_PUFSCORE_7_Val      _UINT32_(0x7)                                        /* (FUSES_BOOT_FLAG) 7  */
#define FUSES_BOOT_FLAG_PUFSCORE_0            (FUSES_BOOT_FLAG_PUFSCORE_0_Val << FUSES_BOOT_FLAG_PUFSCORE_Pos) /* (FUSES_BOOT_FLAG) 0 Position */
#define FUSES_BOOT_FLAG_PUFSCORE_1            (FUSES_BOOT_FLAG_PUFSCORE_1_Val << FUSES_BOOT_FLAG_PUFSCORE_Pos) /* (FUSES_BOOT_FLAG) 1 Position */
#define FUSES_BOOT_FLAG_PUFSCORE_2            (FUSES_BOOT_FLAG_PUFSCORE_2_Val << FUSES_BOOT_FLAG_PUFSCORE_Pos) /* (FUSES_BOOT_FLAG) 2 Position */
#define FUSES_BOOT_FLAG_PUFSCORE_3            (FUSES_BOOT_FLAG_PUFSCORE_3_Val << FUSES_BOOT_FLAG_PUFSCORE_Pos) /* (FUSES_BOOT_FLAG) 3 Position */
#define FUSES_BOOT_FLAG_PUFSCORE_4            (FUSES_BOOT_FLAG_PUFSCORE_4_Val << FUSES_BOOT_FLAG_PUFSCORE_Pos) /* (FUSES_BOOT_FLAG) 4 Position */
#define FUSES_BOOT_FLAG_PUFSCORE_5            (FUSES_BOOT_FLAG_PUFSCORE_5_Val << FUSES_BOOT_FLAG_PUFSCORE_Pos) /* (FUSES_BOOT_FLAG) 5 Position */
#define FUSES_BOOT_FLAG_PUFSCORE_6            (FUSES_BOOT_FLAG_PUFSCORE_6_Val << FUSES_BOOT_FLAG_PUFSCORE_Pos) /* (FUSES_BOOT_FLAG) 6 Position */
#define FUSES_BOOT_FLAG_PUFSCORE_7            (FUSES_BOOT_FLAG_PUFSCORE_7_Val << FUSES_BOOT_FLAG_PUFSCORE_Pos) /* (FUSES_BOOT_FLAG) 7 Position */
#define FUSES_BOOT_FLAG_Msk                   _UINT32_(0x0000075E)                                 /* (FUSES_BOOT_FLAG) Register Mask  */


/* -------- FUSES_DICE_CDI_INDEX : (FUSES Offset: 0x810) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_DICE_CDI_INDEX_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_DICE_CDI_INDEX) Mapped Fuse Register  Reset Value */

#define FUSES_DICE_CDI_INDEX_DICE_CDI_INDEX_Pos _UINT32_(0)                                          /* (FUSES_DICE_CDI_INDEX)  Position */
#define FUSES_DICE_CDI_INDEX_DICE_CDI_INDEX_Msk (_UINT32_(0x7F) << FUSES_DICE_CDI_INDEX_DICE_CDI_INDEX_Pos) /* (FUSES_DICE_CDI_INDEX)  Mask */
#define FUSES_DICE_CDI_INDEX_DICE_CDI_INDEX(value) (FUSES_DICE_CDI_INDEX_DICE_CDI_INDEX_Msk & (_UINT32_(value) << FUSES_DICE_CDI_INDEX_DICE_CDI_INDEX_Pos)) /* Assignment of value for DICE_CDI_INDEX in the FUSES_DICE_CDI_INDEX register */
#define FUSES_DICE_CDI_INDEX_Msk              _UINT32_(0x0000007F)                                 /* (FUSES_DICE_CDI_INDEX) Register Mask  */


/* -------- FUSES_DICE_FW_HASH_INDEX : (FUSES Offset: 0x814) (R/W 32) Mapped Fuse Register -------- */
#define FUSES_DICE_FW_HASH_INDEX_RESETVALUE   _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_DICE_FW_HASH_INDEX) Mapped Fuse Register  Reset Value */

#define FUSES_DICE_FW_HASH_INDEX_DICE_FW_HASH_INDEX_Pos _UINT32_(0)                                          /* (FUSES_DICE_FW_HASH_INDEX)  Position */
#define FUSES_DICE_FW_HASH_INDEX_DICE_FW_HASH_INDEX_Msk (_UINT32_(0x7F) << FUSES_DICE_FW_HASH_INDEX_DICE_FW_HASH_INDEX_Pos) /* (FUSES_DICE_FW_HASH_INDEX)  Mask */
#define FUSES_DICE_FW_HASH_INDEX_DICE_FW_HASH_INDEX(value) (FUSES_DICE_FW_HASH_INDEX_DICE_FW_HASH_INDEX_Msk & (_UINT32_(value) << FUSES_DICE_FW_HASH_INDEX_DICE_FW_HASH_INDEX_Pos)) /* Assignment of value for DICE_FW_HASH_INDEX in the FUSES_DICE_FW_HASH_INDEX register */
#define FUSES_DICE_FW_HASH_INDEX_Msk          _UINT32_(0x0000007F)                                 /* (FUSES_DICE_FW_HASH_INDEX) Register Mask  */


/* -------- FUSES_BOOT_GPIOSEL : (FUSES Offset: 0x818) (R/W 32) BOOT EXTERNAL NOTIFICATION IO PIN REGISTER -------- */
#define FUSES_BOOT_GPIOSEL_RESETVALUE         _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOOT_GPIOSEL) BOOT EXTERNAL NOTIFICATION IO PIN REGISTER  Reset Value */

#define FUSES_BOOT_GPIOSEL_GPIOPINSEL_Pos     _UINT32_(0)                                          /* (FUSES_BOOT_GPIOSEL) Selects IO Port Pin for Boot External Notification Signal Position */
#define FUSES_BOOT_GPIOSEL_GPIOPINSEL_Msk     (_UINT32_(0x1F) << FUSES_BOOT_GPIOSEL_GPIOPINSEL_Pos) /* (FUSES_BOOT_GPIOSEL) Selects IO Port Pin for Boot External Notification Signal Mask */
#define FUSES_BOOT_GPIOSEL_GPIOPINSEL(value)  (FUSES_BOOT_GPIOSEL_GPIOPINSEL_Msk & (_UINT32_(value) << FUSES_BOOT_GPIOSEL_GPIOPINSEL_Pos)) /* Assignment of value for GPIOPINSEL in the FUSES_BOOT_GPIOSEL register */
#define FUSES_BOOT_GPIOSEL_GPIOPORTSEL_Pos    _UINT32_(5)                                          /* (FUSES_BOOT_GPIOSEL) Selects IO Port for Boot External Notification Signal Position */
#define FUSES_BOOT_GPIOSEL_GPIOPORTSEL_Msk    (_UINT32_(0xF) << FUSES_BOOT_GPIOSEL_GPIOPORTSEL_Pos) /* (FUSES_BOOT_GPIOSEL) Selects IO Port for Boot External Notification Signal Mask */
#define FUSES_BOOT_GPIOSEL_GPIOPORTSEL(value) (FUSES_BOOT_GPIOSEL_GPIOPORTSEL_Msk & (_UINT32_(value) << FUSES_BOOT_GPIOSEL_GPIOPORTSEL_Pos)) /* Assignment of value for GPIOPORTSEL in the FUSES_BOOT_GPIOSEL register */
#define FUSES_BOOT_GPIOSEL_FLTPOL_Pos         _UINT32_(9)                                          /* (FUSES_BOOT_GPIOSEL) Selects IO Port for Boot External Notification Signal Position */
#define FUSES_BOOT_GPIOSEL_FLTPOL_Msk         (_UINT32_(0x1) << FUSES_BOOT_GPIOSEL_FLTPOL_Pos)     /* (FUSES_BOOT_GPIOSEL) Selects IO Port for Boot External Notification Signal Mask */
#define FUSES_BOOT_GPIOSEL_FLTPOL(value)      (FUSES_BOOT_GPIOSEL_FLTPOL_Msk & (_UINT32_(value) << FUSES_BOOT_GPIOSEL_FLTPOL_Pos)) /* Assignment of value for FLTPOL in the FUSES_BOOT_GPIOSEL register */
#define FUSES_BOOT_GPIOSEL_FLTODRAIN_Pos      _UINT32_(11)                                         /* (FUSES_BOOT_GPIOSEL) Open Drain Control for Boot External Notification Signal Position */
#define FUSES_BOOT_GPIOSEL_FLTODRAIN_Msk      (_UINT32_(0x1) << FUSES_BOOT_GPIOSEL_FLTODRAIN_Pos)  /* (FUSES_BOOT_GPIOSEL) Open Drain Control for Boot External Notification Signal Mask */
#define FUSES_BOOT_GPIOSEL_FLTODRAIN(value)   (FUSES_BOOT_GPIOSEL_FLTODRAIN_Msk & (_UINT32_(value) << FUSES_BOOT_GPIOSEL_FLTODRAIN_Pos)) /* Assignment of value for FLTODRAIN in the FUSES_BOOT_GPIOSEL register */
#define FUSES_BOOT_GPIOSEL_FLTSLEWLIM_Pos     _UINT32_(12)                                         /* (FUSES_BOOT_GPIOSEL) Selects Driver Slew Rate Selection for Boot External Notification Signal Position */
#define FUSES_BOOT_GPIOSEL_FLTSLEWLIM_Msk     (_UINT32_(0x3) << FUSES_BOOT_GPIOSEL_FLTSLEWLIM_Pos) /* (FUSES_BOOT_GPIOSEL) Selects Driver Slew Rate Selection for Boot External Notification Signal Mask */
#define FUSES_BOOT_GPIOSEL_FLTSLEWLIM(value)  (FUSES_BOOT_GPIOSEL_FLTSLEWLIM_Msk & (_UINT32_(value) << FUSES_BOOT_GPIOSEL_FLTSLEWLIM_Pos)) /* Assignment of value for FLTSLEWLIM in the FUSES_BOOT_GPIOSEL register */
#define FUSES_BOOT_GPIOSEL_Msk                _UINT32_(0x00003BFF)                                 /* (FUSES_BOOT_GPIOSEL) Register Mask  */


/* -------- FUSES_H2PB0_NONSECCLRA : (FUSES Offset: 0x81C) (R/W 32) Non-Security Clear Register A -------- */
#define FUSES_H2PB0_NONSECCLRA_RESETVALUE     _UINT32_(0xFFFFFFFE)                                 /*  (FUSES_H2PB0_NONSECCLRA) Non-Security Clear Register A  Reset Value */

#define FUSES_H2PB0_NONSECCLRA_NONSEC0_Pos    _UINT32_(0)                                          /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC0_Msk    (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC0_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC0(value) (FUSES_H2PB0_NONSECCLRA_NONSEC0_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC0_Pos)) /* Assignment of value for NONSEC0 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC1_Pos    _UINT32_(1)                                          /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC1_Msk    (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC1_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC1(value) (FUSES_H2PB0_NONSECCLRA_NONSEC1_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC1_Pos)) /* Assignment of value for NONSEC1 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC2_Pos    _UINT32_(2)                                          /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC2_Msk    (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC2_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC2(value) (FUSES_H2PB0_NONSECCLRA_NONSEC2_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC2_Pos)) /* Assignment of value for NONSEC2 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC3_Pos    _UINT32_(3)                                          /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC3_Msk    (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC3_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC3(value) (FUSES_H2PB0_NONSECCLRA_NONSEC3_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC3_Pos)) /* Assignment of value for NONSEC3 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC4_Pos    _UINT32_(4)                                          /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC4_Msk    (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC4_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC4(value) (FUSES_H2PB0_NONSECCLRA_NONSEC4_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC4_Pos)) /* Assignment of value for NONSEC4 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC5_Pos    _UINT32_(5)                                          /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC5_Msk    (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC5_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC5(value) (FUSES_H2PB0_NONSECCLRA_NONSEC5_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC5_Pos)) /* Assignment of value for NONSEC5 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC6_Pos    _UINT32_(6)                                          /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC6_Msk    (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC6_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC6(value) (FUSES_H2PB0_NONSECCLRA_NONSEC6_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC6_Pos)) /* Assignment of value for NONSEC6 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC7_Pos    _UINT32_(7)                                          /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC7_Msk    (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC7_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC7(value) (FUSES_H2PB0_NONSECCLRA_NONSEC7_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC7_Pos)) /* Assignment of value for NONSEC7 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC8_Pos    _UINT32_(8)                                          /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC8_Msk    (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC8_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC8(value) (FUSES_H2PB0_NONSECCLRA_NONSEC8_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC8_Pos)) /* Assignment of value for NONSEC8 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC9_Pos    _UINT32_(9)                                          /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC9_Msk    (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC9_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC9(value) (FUSES_H2PB0_NONSECCLRA_NONSEC9_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC9_Pos)) /* Assignment of value for NONSEC9 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC10_Pos   _UINT32_(10)                                         /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC10_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC10_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC10(value) (FUSES_H2PB0_NONSECCLRA_NONSEC10_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC10_Pos)) /* Assignment of value for NONSEC10 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC11_Pos   _UINT32_(11)                                         /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC11_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC11_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC11(value) (FUSES_H2PB0_NONSECCLRA_NONSEC11_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC11_Pos)) /* Assignment of value for NONSEC11 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC12_Pos   _UINT32_(12)                                         /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC12_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC12_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC12(value) (FUSES_H2PB0_NONSECCLRA_NONSEC12_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC12_Pos)) /* Assignment of value for NONSEC12 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC13_Pos   _UINT32_(13)                                         /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC13_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC13_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC13(value) (FUSES_H2PB0_NONSECCLRA_NONSEC13_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC13_Pos)) /* Assignment of value for NONSEC13 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC14_Pos   _UINT32_(14)                                         /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC14_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC14_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC14(value) (FUSES_H2PB0_NONSECCLRA_NONSEC14_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC14_Pos)) /* Assignment of value for NONSEC14 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC15_Pos   _UINT32_(15)                                         /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC15_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC15_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC15(value) (FUSES_H2PB0_NONSECCLRA_NONSEC15_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC15_Pos)) /* Assignment of value for NONSEC15 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC16_Pos   _UINT32_(16)                                         /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC16_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC16_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC16(value) (FUSES_H2PB0_NONSECCLRA_NONSEC16_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC16_Pos)) /* Assignment of value for NONSEC16 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC17_Pos   _UINT32_(17)                                         /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC17_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC17_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC17(value) (FUSES_H2PB0_NONSECCLRA_NONSEC17_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC17_Pos)) /* Assignment of value for NONSEC17 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC18_Pos   _UINT32_(18)                                         /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC18_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC18_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC18(value) (FUSES_H2PB0_NONSECCLRA_NONSEC18_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC18_Pos)) /* Assignment of value for NONSEC18 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC19_Pos   _UINT32_(19)                                         /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC19_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC19_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC19(value) (FUSES_H2PB0_NONSECCLRA_NONSEC19_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC19_Pos)) /* Assignment of value for NONSEC19 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC20_Pos   _UINT32_(20)                                         /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC20_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC20_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC20(value) (FUSES_H2PB0_NONSECCLRA_NONSEC20_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC20_Pos)) /* Assignment of value for NONSEC20 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC21_Pos   _UINT32_(21)                                         /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC21_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC21_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC21(value) (FUSES_H2PB0_NONSECCLRA_NONSEC21_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC21_Pos)) /* Assignment of value for NONSEC21 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC22_Pos   _UINT32_(22)                                         /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC22_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC22_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC22(value) (FUSES_H2PB0_NONSECCLRA_NONSEC22_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC22_Pos)) /* Assignment of value for NONSEC22 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC23_Pos   _UINT32_(23)                                         /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC23_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC23_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC23(value) (FUSES_H2PB0_NONSECCLRA_NONSEC23_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC23_Pos)) /* Assignment of value for NONSEC23 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC24_Pos   _UINT32_(24)                                         /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC24_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC24_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC24(value) (FUSES_H2PB0_NONSECCLRA_NONSEC24_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC24_Pos)) /* Assignment of value for NONSEC24 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC25_Pos   _UINT32_(25)                                         /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC25_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC25_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC25(value) (FUSES_H2PB0_NONSECCLRA_NONSEC25_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC25_Pos)) /* Assignment of value for NONSEC25 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC26_Pos   _UINT32_(26)                                         /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC26_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC26_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC26(value) (FUSES_H2PB0_NONSECCLRA_NONSEC26_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC26_Pos)) /* Assignment of value for NONSEC26 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC27_Pos   _UINT32_(27)                                         /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC27_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC27_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC27(value) (FUSES_H2PB0_NONSECCLRA_NONSEC27_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC27_Pos)) /* Assignment of value for NONSEC27 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC28_Pos   _UINT32_(28)                                         /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC28_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC28_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC28(value) (FUSES_H2PB0_NONSECCLRA_NONSEC28_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC28_Pos)) /* Assignment of value for NONSEC28 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC29_Pos   _UINT32_(29)                                         /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC29_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC29_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC29(value) (FUSES_H2PB0_NONSECCLRA_NONSEC29_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC29_Pos)) /* Assignment of value for NONSEC29 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC30_Pos   _UINT32_(30)                                         /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC30_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC30_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC30(value) (FUSES_H2PB0_NONSECCLRA_NONSEC30_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC30_Pos)) /* Assignment of value for NONSEC30 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_NONSEC31_Pos   _UINT32_(31)                                         /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECCLRA_NONSEC31_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECCLRA_NONSEC31_Pos) /* (FUSES_H2PB0_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECCLRA_NONSEC31(value) (FUSES_H2PB0_NONSECCLRA_NONSEC31_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC31_Pos)) /* Assignment of value for NONSEC31 in the FUSES_H2PB0_NONSECCLRA register */
#define FUSES_H2PB0_NONSECCLRA_Msk            _UINT32_(0xFFFFFFFF)                                 /* (FUSES_H2PB0_NONSECCLRA) Register Mask  */

#define FUSES_H2PB0_NONSECCLRA_NONSEC_Pos     _UINT32_(0)                                          /* (FUSES_H2PB0_NONSECCLRA Position) non-security bit for APB Slave k, k=x..3x */
#define FUSES_H2PB0_NONSECCLRA_NONSEC_Msk     (_UINT32_(0xFFFFFFFF) << FUSES_H2PB0_NONSECCLRA_NONSEC_Pos) /* (FUSES_H2PB0_NONSECCLRA Mask) NONSEC */
#define FUSES_H2PB0_NONSECCLRA_NONSEC(value)  (FUSES_H2PB0_NONSECCLRA_NONSEC_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECCLRA_NONSEC_Pos)) 

/* -------- FUSES_H2PB0_NONSECSETA : (FUSES Offset: 0x820) (R/W 32) Non-Security SET Register A -------- */
#define FUSES_H2PB0_NONSECSETA_RESETVALUE     _UINT32_(0x01)                                       /*  (FUSES_H2PB0_NONSECSETA) Non-Security SET Register A  Reset Value */

#define FUSES_H2PB0_NONSECSETA_NONSEC0_Pos    _UINT32_(0)                                          /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC0_Msk    (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC0_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC0(value) (FUSES_H2PB0_NONSECSETA_NONSEC0_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC0_Pos)) /* Assignment of value for NONSEC0 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC1_Pos    _UINT32_(1)                                          /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC1_Msk    (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC1_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC1(value) (FUSES_H2PB0_NONSECSETA_NONSEC1_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC1_Pos)) /* Assignment of value for NONSEC1 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC2_Pos    _UINT32_(2)                                          /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC2_Msk    (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC2_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC2(value) (FUSES_H2PB0_NONSECSETA_NONSEC2_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC2_Pos)) /* Assignment of value for NONSEC2 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC3_Pos    _UINT32_(3)                                          /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC3_Msk    (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC3_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC3(value) (FUSES_H2PB0_NONSECSETA_NONSEC3_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC3_Pos)) /* Assignment of value for NONSEC3 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC4_Pos    _UINT32_(4)                                          /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC4_Msk    (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC4_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC4(value) (FUSES_H2PB0_NONSECSETA_NONSEC4_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC4_Pos)) /* Assignment of value for NONSEC4 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC5_Pos    _UINT32_(5)                                          /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC5_Msk    (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC5_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC5(value) (FUSES_H2PB0_NONSECSETA_NONSEC5_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC5_Pos)) /* Assignment of value for NONSEC5 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC6_Pos    _UINT32_(6)                                          /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC6_Msk    (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC6_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC6(value) (FUSES_H2PB0_NONSECSETA_NONSEC6_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC6_Pos)) /* Assignment of value for NONSEC6 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC7_Pos    _UINT32_(7)                                          /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC7_Msk    (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC7_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC7(value) (FUSES_H2PB0_NONSECSETA_NONSEC7_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC7_Pos)) /* Assignment of value for NONSEC7 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC8_Pos    _UINT32_(8)                                          /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC8_Msk    (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC8_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC8(value) (FUSES_H2PB0_NONSECSETA_NONSEC8_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC8_Pos)) /* Assignment of value for NONSEC8 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC9_Pos    _UINT32_(9)                                          /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC9_Msk    (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC9_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC9(value) (FUSES_H2PB0_NONSECSETA_NONSEC9_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC9_Pos)) /* Assignment of value for NONSEC9 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC10_Pos   _UINT32_(10)                                         /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC10_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC10_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC10(value) (FUSES_H2PB0_NONSECSETA_NONSEC10_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC10_Pos)) /* Assignment of value for NONSEC10 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC11_Pos   _UINT32_(11)                                         /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC11_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC11_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC11(value) (FUSES_H2PB0_NONSECSETA_NONSEC11_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC11_Pos)) /* Assignment of value for NONSEC11 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC12_Pos   _UINT32_(12)                                         /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC12_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC12_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC12(value) (FUSES_H2PB0_NONSECSETA_NONSEC12_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC12_Pos)) /* Assignment of value for NONSEC12 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC13_Pos   _UINT32_(13)                                         /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC13_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC13_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC13(value) (FUSES_H2PB0_NONSECSETA_NONSEC13_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC13_Pos)) /* Assignment of value for NONSEC13 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC14_Pos   _UINT32_(14)                                         /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC14_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC14_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC14(value) (FUSES_H2PB0_NONSECSETA_NONSEC14_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC14_Pos)) /* Assignment of value for NONSEC14 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC15_Pos   _UINT32_(15)                                         /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC15_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC15_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC15(value) (FUSES_H2PB0_NONSECSETA_NONSEC15_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC15_Pos)) /* Assignment of value for NONSEC15 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC16_Pos   _UINT32_(16)                                         /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC16_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC16_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC16(value) (FUSES_H2PB0_NONSECSETA_NONSEC16_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC16_Pos)) /* Assignment of value for NONSEC16 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC17_Pos   _UINT32_(17)                                         /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC17_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC17_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC17(value) (FUSES_H2PB0_NONSECSETA_NONSEC17_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC17_Pos)) /* Assignment of value for NONSEC17 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC18_Pos   _UINT32_(18)                                         /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC18_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC18_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC18(value) (FUSES_H2PB0_NONSECSETA_NONSEC18_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC18_Pos)) /* Assignment of value for NONSEC18 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC19_Pos   _UINT32_(19)                                         /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC19_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC19_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC19(value) (FUSES_H2PB0_NONSECSETA_NONSEC19_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC19_Pos)) /* Assignment of value for NONSEC19 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC20_Pos   _UINT32_(20)                                         /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC20_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC20_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC20(value) (FUSES_H2PB0_NONSECSETA_NONSEC20_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC20_Pos)) /* Assignment of value for NONSEC20 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC21_Pos   _UINT32_(21)                                         /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC21_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC21_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC21(value) (FUSES_H2PB0_NONSECSETA_NONSEC21_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC21_Pos)) /* Assignment of value for NONSEC21 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC22_Pos   _UINT32_(22)                                         /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC22_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC22_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC22(value) (FUSES_H2PB0_NONSECSETA_NONSEC22_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC22_Pos)) /* Assignment of value for NONSEC22 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC23_Pos   _UINT32_(23)                                         /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC23_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC23_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC23(value) (FUSES_H2PB0_NONSECSETA_NONSEC23_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC23_Pos)) /* Assignment of value for NONSEC23 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC24_Pos   _UINT32_(24)                                         /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC24_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC24_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC24(value) (FUSES_H2PB0_NONSECSETA_NONSEC24_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC24_Pos)) /* Assignment of value for NONSEC24 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC25_Pos   _UINT32_(25)                                         /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC25_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC25_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC25(value) (FUSES_H2PB0_NONSECSETA_NONSEC25_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC25_Pos)) /* Assignment of value for NONSEC25 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC26_Pos   _UINT32_(26)                                         /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC26_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC26_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC26(value) (FUSES_H2PB0_NONSECSETA_NONSEC26_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC26_Pos)) /* Assignment of value for NONSEC26 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC27_Pos   _UINT32_(27)                                         /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC27_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC27_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC27(value) (FUSES_H2PB0_NONSECSETA_NONSEC27_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC27_Pos)) /* Assignment of value for NONSEC27 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC28_Pos   _UINT32_(28)                                         /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC28_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC28_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC28(value) (FUSES_H2PB0_NONSECSETA_NONSEC28_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC28_Pos)) /* Assignment of value for NONSEC28 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC29_Pos   _UINT32_(29)                                         /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC29_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC29_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC29(value) (FUSES_H2PB0_NONSECSETA_NONSEC29_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC29_Pos)) /* Assignment of value for NONSEC29 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC30_Pos   _UINT32_(30)                                         /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC30_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC30_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC30(value) (FUSES_H2PB0_NONSECSETA_NONSEC30_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC30_Pos)) /* Assignment of value for NONSEC30 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_NONSEC31_Pos   _UINT32_(31)                                         /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB0_NONSECSETA_NONSEC31_Msk   (_UINT32_(0x1) << FUSES_H2PB0_NONSECSETA_NONSEC31_Pos) /* (FUSES_H2PB0_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB0_NONSECSETA_NONSEC31(value) (FUSES_H2PB0_NONSECSETA_NONSEC31_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC31_Pos)) /* Assignment of value for NONSEC31 in the FUSES_H2PB0_NONSECSETA register */
#define FUSES_H2PB0_NONSECSETA_Msk            _UINT32_(0xFFFFFFFF)                                 /* (FUSES_H2PB0_NONSECSETA) Register Mask  */

#define FUSES_H2PB0_NONSECSETA_NONSEC_Pos     _UINT32_(0)                                          /* (FUSES_H2PB0_NONSECSETA Position) non-security bit for APB Slave k, k=x..3x */
#define FUSES_H2PB0_NONSECSETA_NONSEC_Msk     (_UINT32_(0xFFFFFFFF) << FUSES_H2PB0_NONSECSETA_NONSEC_Pos) /* (FUSES_H2PB0_NONSECSETA Mask) NONSEC */
#define FUSES_H2PB0_NONSECSETA_NONSEC(value)  (FUSES_H2PB0_NONSECSETA_NONSEC_Msk & (_UINT32_(value) << FUSES_H2PB0_NONSECSETA_NONSEC_Pos)) 

/* -------- FUSES_PAC_WRCTRL_H2PB0 : (FUSES Offset: 0x830) (R/W 32) Write Control Register -------- */
#define FUSES_PAC_WRCTRL_H2PB0_RESETVALUE     _UINT32_(0x13)                                       /*  (FUSES_PAC_WRCTRL_H2PB0) Write Control Register  Reset Value */

#define FUSES_PAC_WRCTRL_H2PB0_PERID_Pos      _UINT32_(0)                                          /* (FUSES_PAC_WRCTRL_H2PB0) Peripheral Identifier Position */
#define FUSES_PAC_WRCTRL_H2PB0_PERID_Msk      (_UINT32_(0xFF) << FUSES_PAC_WRCTRL_H2PB0_PERID_Pos) /* (FUSES_PAC_WRCTRL_H2PB0) Peripheral Identifier Mask */
#define FUSES_PAC_WRCTRL_H2PB0_PERID(value)   (FUSES_PAC_WRCTRL_H2PB0_PERID_Msk & (_UINT32_(value) << FUSES_PAC_WRCTRL_H2PB0_PERID_Pos)) /* Assignment of value for PERID in the FUSES_PAC_WRCTRL_H2PB0 register */
#define FUSES_PAC_WRCTRL_H2PB0_KEY_Pos        _UINT32_(16)                                         /* (FUSES_PAC_WRCTRL_H2PB0) Peripheral Access Control Key Position */
#define FUSES_PAC_WRCTRL_H2PB0_KEY_Msk        (_UINT32_(0xFF) << FUSES_PAC_WRCTRL_H2PB0_KEY_Pos)   /* (FUSES_PAC_WRCTRL_H2PB0) Peripheral Access Control Key Mask */
#define FUSES_PAC_WRCTRL_H2PB0_KEY(value)     (FUSES_PAC_WRCTRL_H2PB0_KEY_Msk & (_UINT32_(value) << FUSES_PAC_WRCTRL_H2PB0_KEY_Pos)) /* Assignment of value for KEY in the FUSES_PAC_WRCTRL_H2PB0 register */
#define   FUSES_PAC_WRCTRL_H2PB0_KEY_OFF_Val  _UINT32_(0x0)                                        /* (FUSES_PAC_WRCTRL_H2PB0) OFF - No Action  */
#define   FUSES_PAC_WRCTRL_H2PB0_KEY_CLEAR_Val _UINT32_(0x1)                                        /* (FUSES_PAC_WRCTRL_H2PB0) CLEAR - Clear the peripheral write protection  */
#define   FUSES_PAC_WRCTRL_H2PB0_KEY_SET_Val  _UINT32_(0x2)                                        /* (FUSES_PAC_WRCTRL_H2PB0) SET - Set the peripheral write protection  */
#define   FUSES_PAC_WRCTRL_H2PB0_KEY_LOCK_Val _UINT32_(0x3)                                        /* (FUSES_PAC_WRCTRL_H2PB0) LOCK - Set and Lock the write protection state of the peripheral until the next reset  */
#define FUSES_PAC_WRCTRL_H2PB0_KEY_OFF        (FUSES_PAC_WRCTRL_H2PB0_KEY_OFF_Val << FUSES_PAC_WRCTRL_H2PB0_KEY_Pos) /* (FUSES_PAC_WRCTRL_H2PB0) OFF - No Action Position */
#define FUSES_PAC_WRCTRL_H2PB0_KEY_CLEAR      (FUSES_PAC_WRCTRL_H2PB0_KEY_CLEAR_Val << FUSES_PAC_WRCTRL_H2PB0_KEY_Pos) /* (FUSES_PAC_WRCTRL_H2PB0) CLEAR - Clear the peripheral write protection Position */
#define FUSES_PAC_WRCTRL_H2PB0_KEY_SET        (FUSES_PAC_WRCTRL_H2PB0_KEY_SET_Val << FUSES_PAC_WRCTRL_H2PB0_KEY_Pos) /* (FUSES_PAC_WRCTRL_H2PB0) SET - Set the peripheral write protection Position */
#define FUSES_PAC_WRCTRL_H2PB0_KEY_LOCK       (FUSES_PAC_WRCTRL_H2PB0_KEY_LOCK_Val << FUSES_PAC_WRCTRL_H2PB0_KEY_Pos) /* (FUSES_PAC_WRCTRL_H2PB0) LOCK - Set and Lock the write protection state of the peripheral until the next reset Position */
#define FUSES_PAC_WRCTRL_H2PB0_Msk            _UINT32_(0x00FF00FF)                                 /* (FUSES_PAC_WRCTRL_H2PB0) Register Mask  */


/* -------- FUSES_H2PB1_NONSECCLRA : (FUSES Offset: 0x834) (R/W 32) Non-Security Clear Register A -------- */
#define FUSES_H2PB1_NONSECCLRA_RESETVALUE     _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_H2PB1_NONSECCLRA) Non-Security Clear Register A  Reset Value */

#define FUSES_H2PB1_NONSECCLRA_NONSEC0_Pos    _UINT32_(0)                                          /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC0_Msk    (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC0_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC0(value) (FUSES_H2PB1_NONSECCLRA_NONSEC0_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC0_Pos)) /* Assignment of value for NONSEC0 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC1_Pos    _UINT32_(1)                                          /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC1_Msk    (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC1_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC1(value) (FUSES_H2PB1_NONSECCLRA_NONSEC1_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC1_Pos)) /* Assignment of value for NONSEC1 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC2_Pos    _UINT32_(2)                                          /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC2_Msk    (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC2_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC2(value) (FUSES_H2PB1_NONSECCLRA_NONSEC2_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC2_Pos)) /* Assignment of value for NONSEC2 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC3_Pos    _UINT32_(3)                                          /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC3_Msk    (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC3_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC3(value) (FUSES_H2PB1_NONSECCLRA_NONSEC3_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC3_Pos)) /* Assignment of value for NONSEC3 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC4_Pos    _UINT32_(4)                                          /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC4_Msk    (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC4_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC4(value) (FUSES_H2PB1_NONSECCLRA_NONSEC4_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC4_Pos)) /* Assignment of value for NONSEC4 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC5_Pos    _UINT32_(5)                                          /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC5_Msk    (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC5_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC5(value) (FUSES_H2PB1_NONSECCLRA_NONSEC5_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC5_Pos)) /* Assignment of value for NONSEC5 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC6_Pos    _UINT32_(6)                                          /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC6_Msk    (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC6_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC6(value) (FUSES_H2PB1_NONSECCLRA_NONSEC6_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC6_Pos)) /* Assignment of value for NONSEC6 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC7_Pos    _UINT32_(7)                                          /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC7_Msk    (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC7_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC7(value) (FUSES_H2PB1_NONSECCLRA_NONSEC7_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC7_Pos)) /* Assignment of value for NONSEC7 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC8_Pos    _UINT32_(8)                                          /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC8_Msk    (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC8_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC8(value) (FUSES_H2PB1_NONSECCLRA_NONSEC8_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC8_Pos)) /* Assignment of value for NONSEC8 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC9_Pos    _UINT32_(9)                                          /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC9_Msk    (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC9_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC9(value) (FUSES_H2PB1_NONSECCLRA_NONSEC9_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC9_Pos)) /* Assignment of value for NONSEC9 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC10_Pos   _UINT32_(10)                                         /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC10_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC10_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC10(value) (FUSES_H2PB1_NONSECCLRA_NONSEC10_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC10_Pos)) /* Assignment of value for NONSEC10 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC11_Pos   _UINT32_(11)                                         /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC11_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC11_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC11(value) (FUSES_H2PB1_NONSECCLRA_NONSEC11_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC11_Pos)) /* Assignment of value for NONSEC11 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC12_Pos   _UINT32_(12)                                         /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC12_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC12_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC12(value) (FUSES_H2PB1_NONSECCLRA_NONSEC12_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC12_Pos)) /* Assignment of value for NONSEC12 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC13_Pos   _UINT32_(13)                                         /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC13_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC13_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC13(value) (FUSES_H2PB1_NONSECCLRA_NONSEC13_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC13_Pos)) /* Assignment of value for NONSEC13 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC14_Pos   _UINT32_(14)                                         /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC14_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC14_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC14(value) (FUSES_H2PB1_NONSECCLRA_NONSEC14_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC14_Pos)) /* Assignment of value for NONSEC14 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC15_Pos   _UINT32_(15)                                         /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC15_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC15_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC15(value) (FUSES_H2PB1_NONSECCLRA_NONSEC15_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC15_Pos)) /* Assignment of value for NONSEC15 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC16_Pos   _UINT32_(16)                                         /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC16_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC16_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC16(value) (FUSES_H2PB1_NONSECCLRA_NONSEC16_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC16_Pos)) /* Assignment of value for NONSEC16 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC17_Pos   _UINT32_(17)                                         /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC17_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC17_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC17(value) (FUSES_H2PB1_NONSECCLRA_NONSEC17_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC17_Pos)) /* Assignment of value for NONSEC17 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC18_Pos   _UINT32_(18)                                         /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC18_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC18_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC18(value) (FUSES_H2PB1_NONSECCLRA_NONSEC18_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC18_Pos)) /* Assignment of value for NONSEC18 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC19_Pos   _UINT32_(19)                                         /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC19_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC19_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC19(value) (FUSES_H2PB1_NONSECCLRA_NONSEC19_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC19_Pos)) /* Assignment of value for NONSEC19 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC20_Pos   _UINT32_(20)                                         /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC20_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC20_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC20(value) (FUSES_H2PB1_NONSECCLRA_NONSEC20_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC20_Pos)) /* Assignment of value for NONSEC20 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC21_Pos   _UINT32_(21)                                         /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC21_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC21_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC21(value) (FUSES_H2PB1_NONSECCLRA_NONSEC21_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC21_Pos)) /* Assignment of value for NONSEC21 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC22_Pos   _UINT32_(22)                                         /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC22_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC22_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC22(value) (FUSES_H2PB1_NONSECCLRA_NONSEC22_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC22_Pos)) /* Assignment of value for NONSEC22 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC23_Pos   _UINT32_(23)                                         /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC23_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC23_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC23(value) (FUSES_H2PB1_NONSECCLRA_NONSEC23_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC23_Pos)) /* Assignment of value for NONSEC23 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC24_Pos   _UINT32_(24)                                         /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC24_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC24_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC24(value) (FUSES_H2PB1_NONSECCLRA_NONSEC24_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC24_Pos)) /* Assignment of value for NONSEC24 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC25_Pos   _UINT32_(25)                                         /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC25_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC25_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC25(value) (FUSES_H2PB1_NONSECCLRA_NONSEC25_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC25_Pos)) /* Assignment of value for NONSEC25 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC26_Pos   _UINT32_(26)                                         /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC26_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC26_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC26(value) (FUSES_H2PB1_NONSECCLRA_NONSEC26_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC26_Pos)) /* Assignment of value for NONSEC26 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC27_Pos   _UINT32_(27)                                         /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC27_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC27_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC27(value) (FUSES_H2PB1_NONSECCLRA_NONSEC27_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC27_Pos)) /* Assignment of value for NONSEC27 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC28_Pos   _UINT32_(28)                                         /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC28_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC28_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC28(value) (FUSES_H2PB1_NONSECCLRA_NONSEC28_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC28_Pos)) /* Assignment of value for NONSEC28 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC29_Pos   _UINT32_(29)                                         /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC29_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC29_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC29(value) (FUSES_H2PB1_NONSECCLRA_NONSEC29_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC29_Pos)) /* Assignment of value for NONSEC29 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC30_Pos   _UINT32_(30)                                         /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC30_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC30_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC30(value) (FUSES_H2PB1_NONSECCLRA_NONSEC30_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC30_Pos)) /* Assignment of value for NONSEC30 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_NONSEC31_Pos   _UINT32_(31)                                         /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECCLRA_NONSEC31_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECCLRA_NONSEC31_Pos) /* (FUSES_H2PB1_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECCLRA_NONSEC31(value) (FUSES_H2PB1_NONSECCLRA_NONSEC31_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC31_Pos)) /* Assignment of value for NONSEC31 in the FUSES_H2PB1_NONSECCLRA register */
#define FUSES_H2PB1_NONSECCLRA_Msk            _UINT32_(0xFFFFFFFF)                                 /* (FUSES_H2PB1_NONSECCLRA) Register Mask  */

#define FUSES_H2PB1_NONSECCLRA_NONSEC_Pos     _UINT32_(0)                                          /* (FUSES_H2PB1_NONSECCLRA Position) non-security bit for APB Slave k, k=x..3x */
#define FUSES_H2PB1_NONSECCLRA_NONSEC_Msk     (_UINT32_(0xFFFFFFFF) << FUSES_H2PB1_NONSECCLRA_NONSEC_Pos) /* (FUSES_H2PB1_NONSECCLRA Mask) NONSEC */
#define FUSES_H2PB1_NONSECCLRA_NONSEC(value)  (FUSES_H2PB1_NONSECCLRA_NONSEC_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECCLRA_NONSEC_Pos)) 

/* -------- FUSES_H2PB1_NONSECSETA : (FUSES Offset: 0x838) (R/W 32) Non-Security SET Register A -------- */
#define FUSES_H2PB1_NONSECSETA_RESETVALUE     _UINT32_(0x00)                                       /*  (FUSES_H2PB1_NONSECSETA) Non-Security SET Register A  Reset Value */

#define FUSES_H2PB1_NONSECSETA_NONSEC0_Pos    _UINT32_(0)                                          /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC0_Msk    (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC0_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC0(value) (FUSES_H2PB1_NONSECSETA_NONSEC0_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC0_Pos)) /* Assignment of value for NONSEC0 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC1_Pos    _UINT32_(1)                                          /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC1_Msk    (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC1_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC1(value) (FUSES_H2PB1_NONSECSETA_NONSEC1_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC1_Pos)) /* Assignment of value for NONSEC1 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC2_Pos    _UINT32_(2)                                          /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC2_Msk    (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC2_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC2(value) (FUSES_H2PB1_NONSECSETA_NONSEC2_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC2_Pos)) /* Assignment of value for NONSEC2 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC3_Pos    _UINT32_(3)                                          /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC3_Msk    (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC3_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC3(value) (FUSES_H2PB1_NONSECSETA_NONSEC3_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC3_Pos)) /* Assignment of value for NONSEC3 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC4_Pos    _UINT32_(4)                                          /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC4_Msk    (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC4_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC4(value) (FUSES_H2PB1_NONSECSETA_NONSEC4_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC4_Pos)) /* Assignment of value for NONSEC4 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC5_Pos    _UINT32_(5)                                          /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC5_Msk    (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC5_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC5(value) (FUSES_H2PB1_NONSECSETA_NONSEC5_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC5_Pos)) /* Assignment of value for NONSEC5 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC6_Pos    _UINT32_(6)                                          /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC6_Msk    (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC6_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC6(value) (FUSES_H2PB1_NONSECSETA_NONSEC6_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC6_Pos)) /* Assignment of value for NONSEC6 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC7_Pos    _UINT32_(7)                                          /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC7_Msk    (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC7_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC7(value) (FUSES_H2PB1_NONSECSETA_NONSEC7_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC7_Pos)) /* Assignment of value for NONSEC7 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC8_Pos    _UINT32_(8)                                          /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC8_Msk    (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC8_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC8(value) (FUSES_H2PB1_NONSECSETA_NONSEC8_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC8_Pos)) /* Assignment of value for NONSEC8 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC9_Pos    _UINT32_(9)                                          /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC9_Msk    (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC9_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC9(value) (FUSES_H2PB1_NONSECSETA_NONSEC9_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC9_Pos)) /* Assignment of value for NONSEC9 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC10_Pos   _UINT32_(10)                                         /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC10_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC10_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC10(value) (FUSES_H2PB1_NONSECSETA_NONSEC10_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC10_Pos)) /* Assignment of value for NONSEC10 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC11_Pos   _UINT32_(11)                                         /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC11_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC11_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC11(value) (FUSES_H2PB1_NONSECSETA_NONSEC11_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC11_Pos)) /* Assignment of value for NONSEC11 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC12_Pos   _UINT32_(12)                                         /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC12_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC12_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC12(value) (FUSES_H2PB1_NONSECSETA_NONSEC12_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC12_Pos)) /* Assignment of value for NONSEC12 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC13_Pos   _UINT32_(13)                                         /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC13_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC13_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC13(value) (FUSES_H2PB1_NONSECSETA_NONSEC13_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC13_Pos)) /* Assignment of value for NONSEC13 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC14_Pos   _UINT32_(14)                                         /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC14_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC14_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC14(value) (FUSES_H2PB1_NONSECSETA_NONSEC14_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC14_Pos)) /* Assignment of value for NONSEC14 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC15_Pos   _UINT32_(15)                                         /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC15_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC15_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC15(value) (FUSES_H2PB1_NONSECSETA_NONSEC15_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC15_Pos)) /* Assignment of value for NONSEC15 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC16_Pos   _UINT32_(16)                                         /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC16_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC16_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC16(value) (FUSES_H2PB1_NONSECSETA_NONSEC16_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC16_Pos)) /* Assignment of value for NONSEC16 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC17_Pos   _UINT32_(17)                                         /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC17_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC17_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC17(value) (FUSES_H2PB1_NONSECSETA_NONSEC17_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC17_Pos)) /* Assignment of value for NONSEC17 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC18_Pos   _UINT32_(18)                                         /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC18_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC18_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC18(value) (FUSES_H2PB1_NONSECSETA_NONSEC18_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC18_Pos)) /* Assignment of value for NONSEC18 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC19_Pos   _UINT32_(19)                                         /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC19_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC19_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC19(value) (FUSES_H2PB1_NONSECSETA_NONSEC19_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC19_Pos)) /* Assignment of value for NONSEC19 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC20_Pos   _UINT32_(20)                                         /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC20_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC20_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC20(value) (FUSES_H2PB1_NONSECSETA_NONSEC20_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC20_Pos)) /* Assignment of value for NONSEC20 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC21_Pos   _UINT32_(21)                                         /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC21_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC21_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC21(value) (FUSES_H2PB1_NONSECSETA_NONSEC21_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC21_Pos)) /* Assignment of value for NONSEC21 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC22_Pos   _UINT32_(22)                                         /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC22_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC22_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC22(value) (FUSES_H2PB1_NONSECSETA_NONSEC22_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC22_Pos)) /* Assignment of value for NONSEC22 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC23_Pos   _UINT32_(23)                                         /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC23_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC23_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC23(value) (FUSES_H2PB1_NONSECSETA_NONSEC23_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC23_Pos)) /* Assignment of value for NONSEC23 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC24_Pos   _UINT32_(24)                                         /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC24_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC24_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC24(value) (FUSES_H2PB1_NONSECSETA_NONSEC24_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC24_Pos)) /* Assignment of value for NONSEC24 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC25_Pos   _UINT32_(25)                                         /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC25_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC25_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC25(value) (FUSES_H2PB1_NONSECSETA_NONSEC25_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC25_Pos)) /* Assignment of value for NONSEC25 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC26_Pos   _UINT32_(26)                                         /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC26_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC26_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC26(value) (FUSES_H2PB1_NONSECSETA_NONSEC26_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC26_Pos)) /* Assignment of value for NONSEC26 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC27_Pos   _UINT32_(27)                                         /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC27_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC27_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC27(value) (FUSES_H2PB1_NONSECSETA_NONSEC27_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC27_Pos)) /* Assignment of value for NONSEC27 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC28_Pos   _UINT32_(28)                                         /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC28_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC28_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC28(value) (FUSES_H2PB1_NONSECSETA_NONSEC28_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC28_Pos)) /* Assignment of value for NONSEC28 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC29_Pos   _UINT32_(29)                                         /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC29_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC29_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC29(value) (FUSES_H2PB1_NONSECSETA_NONSEC29_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC29_Pos)) /* Assignment of value for NONSEC29 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC30_Pos   _UINT32_(30)                                         /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC30_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC30_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC30(value) (FUSES_H2PB1_NONSECSETA_NONSEC30_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC30_Pos)) /* Assignment of value for NONSEC30 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_NONSEC31_Pos   _UINT32_(31)                                         /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB1_NONSECSETA_NONSEC31_Msk   (_UINT32_(0x1) << FUSES_H2PB1_NONSECSETA_NONSEC31_Pos) /* (FUSES_H2PB1_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB1_NONSECSETA_NONSEC31(value) (FUSES_H2PB1_NONSECSETA_NONSEC31_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC31_Pos)) /* Assignment of value for NONSEC31 in the FUSES_H2PB1_NONSECSETA register */
#define FUSES_H2PB1_NONSECSETA_Msk            _UINT32_(0xFFFFFFFF)                                 /* (FUSES_H2PB1_NONSECSETA) Register Mask  */

#define FUSES_H2PB1_NONSECSETA_NONSEC_Pos     _UINT32_(0)                                          /* (FUSES_H2PB1_NONSECSETA Position) non-security bit for APB Slave k, k=x..3x */
#define FUSES_H2PB1_NONSECSETA_NONSEC_Msk     (_UINT32_(0xFFFFFFFF) << FUSES_H2PB1_NONSECSETA_NONSEC_Pos) /* (FUSES_H2PB1_NONSECSETA Mask) NONSEC */
#define FUSES_H2PB1_NONSECSETA_NONSEC(value)  (FUSES_H2PB1_NONSECSETA_NONSEC_Msk & (_UINT32_(value) << FUSES_H2PB1_NONSECSETA_NONSEC_Pos)) 

/* -------- FUSES_PAC_WRCTRL_H2PB1 : (FUSES Offset: 0x848) (R/W 32) Write Control Register -------- */
#define FUSES_PAC_WRCTRL_H2PB1_RESETVALUE     _UINT32_(0x2E)                                       /*  (FUSES_PAC_WRCTRL_H2PB1) Write Control Register  Reset Value */

#define FUSES_PAC_WRCTRL_H2PB1_PERID_Pos      _UINT32_(0)                                          /* (FUSES_PAC_WRCTRL_H2PB1) Peripheral Identifier Position */
#define FUSES_PAC_WRCTRL_H2PB1_PERID_Msk      (_UINT32_(0xFF) << FUSES_PAC_WRCTRL_H2PB1_PERID_Pos) /* (FUSES_PAC_WRCTRL_H2PB1) Peripheral Identifier Mask */
#define FUSES_PAC_WRCTRL_H2PB1_PERID(value)   (FUSES_PAC_WRCTRL_H2PB1_PERID_Msk & (_UINT32_(value) << FUSES_PAC_WRCTRL_H2PB1_PERID_Pos)) /* Assignment of value for PERID in the FUSES_PAC_WRCTRL_H2PB1 register */
#define FUSES_PAC_WRCTRL_H2PB1_KEY_Pos        _UINT32_(16)                                         /* (FUSES_PAC_WRCTRL_H2PB1) Peripheral Access Control Key Position */
#define FUSES_PAC_WRCTRL_H2PB1_KEY_Msk        (_UINT32_(0xFF) << FUSES_PAC_WRCTRL_H2PB1_KEY_Pos)   /* (FUSES_PAC_WRCTRL_H2PB1) Peripheral Access Control Key Mask */
#define FUSES_PAC_WRCTRL_H2PB1_KEY(value)     (FUSES_PAC_WRCTRL_H2PB1_KEY_Msk & (_UINT32_(value) << FUSES_PAC_WRCTRL_H2PB1_KEY_Pos)) /* Assignment of value for KEY in the FUSES_PAC_WRCTRL_H2PB1 register */
#define   FUSES_PAC_WRCTRL_H2PB1_KEY_OFF_Val  _UINT32_(0x0)                                        /* (FUSES_PAC_WRCTRL_H2PB1) OFF - No Action  */
#define   FUSES_PAC_WRCTRL_H2PB1_KEY_CLEAR_Val _UINT32_(0x1)                                        /* (FUSES_PAC_WRCTRL_H2PB1) CLEAR - Clear the peripheral write protection  */
#define   FUSES_PAC_WRCTRL_H2PB1_KEY_SET_Val  _UINT32_(0x2)                                        /* (FUSES_PAC_WRCTRL_H2PB1) SET - Set the peripheral write protection  */
#define   FUSES_PAC_WRCTRL_H2PB1_KEY_LOCK_Val _UINT32_(0x3)                                        /* (FUSES_PAC_WRCTRL_H2PB1) LOCK - Set and Lock the write protection state of the peripheral until the next reset  */
#define FUSES_PAC_WRCTRL_H2PB1_KEY_OFF        (FUSES_PAC_WRCTRL_H2PB1_KEY_OFF_Val << FUSES_PAC_WRCTRL_H2PB1_KEY_Pos) /* (FUSES_PAC_WRCTRL_H2PB1) OFF - No Action Position */
#define FUSES_PAC_WRCTRL_H2PB1_KEY_CLEAR      (FUSES_PAC_WRCTRL_H2PB1_KEY_CLEAR_Val << FUSES_PAC_WRCTRL_H2PB1_KEY_Pos) /* (FUSES_PAC_WRCTRL_H2PB1) CLEAR - Clear the peripheral write protection Position */
#define FUSES_PAC_WRCTRL_H2PB1_KEY_SET        (FUSES_PAC_WRCTRL_H2PB1_KEY_SET_Val << FUSES_PAC_WRCTRL_H2PB1_KEY_Pos) /* (FUSES_PAC_WRCTRL_H2PB1) SET - Set the peripheral write protection Position */
#define FUSES_PAC_WRCTRL_H2PB1_KEY_LOCK       (FUSES_PAC_WRCTRL_H2PB1_KEY_LOCK_Val << FUSES_PAC_WRCTRL_H2PB1_KEY_Pos) /* (FUSES_PAC_WRCTRL_H2PB1) LOCK - Set and Lock the write protection state of the peripheral until the next reset Position */
#define FUSES_PAC_WRCTRL_H2PB1_Msk            _UINT32_(0x00FF00FF)                                 /* (FUSES_PAC_WRCTRL_H2PB1) Register Mask  */


/* -------- FUSES_H2PB2_NONSECCLRA : (FUSES Offset: 0x84C) (R/W 32) Non-Security Clear Register A -------- */
#define FUSES_H2PB2_NONSECCLRA_RESETVALUE     _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_H2PB2_NONSECCLRA) Non-Security Clear Register A  Reset Value */

#define FUSES_H2PB2_NONSECCLRA_NONSEC0_Pos    _UINT32_(0)                                          /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC0_Msk    (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC0_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC0(value) (FUSES_H2PB2_NONSECCLRA_NONSEC0_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC0_Pos)) /* Assignment of value for NONSEC0 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC1_Pos    _UINT32_(1)                                          /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC1_Msk    (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC1_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC1(value) (FUSES_H2PB2_NONSECCLRA_NONSEC1_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC1_Pos)) /* Assignment of value for NONSEC1 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC2_Pos    _UINT32_(2)                                          /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC2_Msk    (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC2_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC2(value) (FUSES_H2PB2_NONSECCLRA_NONSEC2_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC2_Pos)) /* Assignment of value for NONSEC2 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC3_Pos    _UINT32_(3)                                          /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC3_Msk    (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC3_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC3(value) (FUSES_H2PB2_NONSECCLRA_NONSEC3_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC3_Pos)) /* Assignment of value for NONSEC3 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC4_Pos    _UINT32_(4)                                          /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC4_Msk    (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC4_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC4(value) (FUSES_H2PB2_NONSECCLRA_NONSEC4_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC4_Pos)) /* Assignment of value for NONSEC4 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC5_Pos    _UINT32_(5)                                          /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC5_Msk    (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC5_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC5(value) (FUSES_H2PB2_NONSECCLRA_NONSEC5_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC5_Pos)) /* Assignment of value for NONSEC5 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC6_Pos    _UINT32_(6)                                          /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC6_Msk    (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC6_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC6(value) (FUSES_H2PB2_NONSECCLRA_NONSEC6_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC6_Pos)) /* Assignment of value for NONSEC6 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC7_Pos    _UINT32_(7)                                          /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC7_Msk    (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC7_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC7(value) (FUSES_H2PB2_NONSECCLRA_NONSEC7_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC7_Pos)) /* Assignment of value for NONSEC7 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC8_Pos    _UINT32_(8)                                          /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC8_Msk    (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC8_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC8(value) (FUSES_H2PB2_NONSECCLRA_NONSEC8_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC8_Pos)) /* Assignment of value for NONSEC8 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC9_Pos    _UINT32_(9)                                          /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC9_Msk    (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC9_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC9(value) (FUSES_H2PB2_NONSECCLRA_NONSEC9_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC9_Pos)) /* Assignment of value for NONSEC9 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC10_Pos   _UINT32_(10)                                         /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC10_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC10_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC10(value) (FUSES_H2PB2_NONSECCLRA_NONSEC10_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC10_Pos)) /* Assignment of value for NONSEC10 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC11_Pos   _UINT32_(11)                                         /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC11_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC11_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC11(value) (FUSES_H2PB2_NONSECCLRA_NONSEC11_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC11_Pos)) /* Assignment of value for NONSEC11 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC12_Pos   _UINT32_(12)                                         /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC12_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC12_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC12(value) (FUSES_H2PB2_NONSECCLRA_NONSEC12_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC12_Pos)) /* Assignment of value for NONSEC12 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC13_Pos   _UINT32_(13)                                         /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC13_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC13_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC13(value) (FUSES_H2PB2_NONSECCLRA_NONSEC13_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC13_Pos)) /* Assignment of value for NONSEC13 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC14_Pos   _UINT32_(14)                                         /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC14_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC14_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC14(value) (FUSES_H2PB2_NONSECCLRA_NONSEC14_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC14_Pos)) /* Assignment of value for NONSEC14 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC15_Pos   _UINT32_(15)                                         /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC15_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC15_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC15(value) (FUSES_H2PB2_NONSECCLRA_NONSEC15_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC15_Pos)) /* Assignment of value for NONSEC15 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC16_Pos   _UINT32_(16)                                         /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC16_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC16_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC16(value) (FUSES_H2PB2_NONSECCLRA_NONSEC16_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC16_Pos)) /* Assignment of value for NONSEC16 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC17_Pos   _UINT32_(17)                                         /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC17_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC17_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC17(value) (FUSES_H2PB2_NONSECCLRA_NONSEC17_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC17_Pos)) /* Assignment of value for NONSEC17 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC18_Pos   _UINT32_(18)                                         /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC18_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC18_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC18(value) (FUSES_H2PB2_NONSECCLRA_NONSEC18_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC18_Pos)) /* Assignment of value for NONSEC18 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC19_Pos   _UINT32_(19)                                         /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC19_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC19_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC19(value) (FUSES_H2PB2_NONSECCLRA_NONSEC19_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC19_Pos)) /* Assignment of value for NONSEC19 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC20_Pos   _UINT32_(20)                                         /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC20_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC20_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC20(value) (FUSES_H2PB2_NONSECCLRA_NONSEC20_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC20_Pos)) /* Assignment of value for NONSEC20 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC21_Pos   _UINT32_(21)                                         /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC21_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC21_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC21(value) (FUSES_H2PB2_NONSECCLRA_NONSEC21_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC21_Pos)) /* Assignment of value for NONSEC21 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC22_Pos   _UINT32_(22)                                         /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC22_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC22_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC22(value) (FUSES_H2PB2_NONSECCLRA_NONSEC22_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC22_Pos)) /* Assignment of value for NONSEC22 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC23_Pos   _UINT32_(23)                                         /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC23_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC23_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC23(value) (FUSES_H2PB2_NONSECCLRA_NONSEC23_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC23_Pos)) /* Assignment of value for NONSEC23 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC24_Pos   _UINT32_(24)                                         /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC24_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC24_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC24(value) (FUSES_H2PB2_NONSECCLRA_NONSEC24_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC24_Pos)) /* Assignment of value for NONSEC24 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC25_Pos   _UINT32_(25)                                         /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC25_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC25_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC25(value) (FUSES_H2PB2_NONSECCLRA_NONSEC25_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC25_Pos)) /* Assignment of value for NONSEC25 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC26_Pos   _UINT32_(26)                                         /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC26_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC26_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC26(value) (FUSES_H2PB2_NONSECCLRA_NONSEC26_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC26_Pos)) /* Assignment of value for NONSEC26 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC27_Pos   _UINT32_(27)                                         /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC27_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC27_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC27(value) (FUSES_H2PB2_NONSECCLRA_NONSEC27_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC27_Pos)) /* Assignment of value for NONSEC27 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC28_Pos   _UINT32_(28)                                         /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC28_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC28_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC28(value) (FUSES_H2PB2_NONSECCLRA_NONSEC28_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC28_Pos)) /* Assignment of value for NONSEC28 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC29_Pos   _UINT32_(29)                                         /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC29_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC29_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC29(value) (FUSES_H2PB2_NONSECCLRA_NONSEC29_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC29_Pos)) /* Assignment of value for NONSEC29 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC30_Pos   _UINT32_(30)                                         /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC30_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC30_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC30(value) (FUSES_H2PB2_NONSECCLRA_NONSEC30_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC30_Pos)) /* Assignment of value for NONSEC30 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_NONSEC31_Pos   _UINT32_(31)                                         /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECCLRA_NONSEC31_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECCLRA_NONSEC31_Pos) /* (FUSES_H2PB2_NONSECCLRA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECCLRA_NONSEC31(value) (FUSES_H2PB2_NONSECCLRA_NONSEC31_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC31_Pos)) /* Assignment of value for NONSEC31 in the FUSES_H2PB2_NONSECCLRA register */
#define FUSES_H2PB2_NONSECCLRA_Msk            _UINT32_(0xFFFFFFFF)                                 /* (FUSES_H2PB2_NONSECCLRA) Register Mask  */

#define FUSES_H2PB2_NONSECCLRA_NONSEC_Pos     _UINT32_(0)                                          /* (FUSES_H2PB2_NONSECCLRA Position) non-security bit for APB Slave k, k=x..3x */
#define FUSES_H2PB2_NONSECCLRA_NONSEC_Msk     (_UINT32_(0xFFFFFFFF) << FUSES_H2PB2_NONSECCLRA_NONSEC_Pos) /* (FUSES_H2PB2_NONSECCLRA Mask) NONSEC */
#define FUSES_H2PB2_NONSECCLRA_NONSEC(value)  (FUSES_H2PB2_NONSECCLRA_NONSEC_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECCLRA_NONSEC_Pos)) 

/* -------- FUSES_H2PB2_NONSECSETA : (FUSES Offset: 0x850) (R/W 32) Non-Security SET Register A -------- */
#define FUSES_H2PB2_NONSECSETA_RESETVALUE     _UINT32_(0x00)                                       /*  (FUSES_H2PB2_NONSECSETA) Non-Security SET Register A  Reset Value */

#define FUSES_H2PB2_NONSECSETA_NONSEC0_Pos    _UINT32_(0)                                          /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC0_Msk    (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC0_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC0(value) (FUSES_H2PB2_NONSECSETA_NONSEC0_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC0_Pos)) /* Assignment of value for NONSEC0 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC1_Pos    _UINT32_(1)                                          /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC1_Msk    (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC1_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC1(value) (FUSES_H2PB2_NONSECSETA_NONSEC1_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC1_Pos)) /* Assignment of value for NONSEC1 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC2_Pos    _UINT32_(2)                                          /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC2_Msk    (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC2_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC2(value) (FUSES_H2PB2_NONSECSETA_NONSEC2_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC2_Pos)) /* Assignment of value for NONSEC2 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC3_Pos    _UINT32_(3)                                          /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC3_Msk    (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC3_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC3(value) (FUSES_H2PB2_NONSECSETA_NONSEC3_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC3_Pos)) /* Assignment of value for NONSEC3 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC4_Pos    _UINT32_(4)                                          /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC4_Msk    (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC4_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC4(value) (FUSES_H2PB2_NONSECSETA_NONSEC4_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC4_Pos)) /* Assignment of value for NONSEC4 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC5_Pos    _UINT32_(5)                                          /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC5_Msk    (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC5_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC5(value) (FUSES_H2PB2_NONSECSETA_NONSEC5_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC5_Pos)) /* Assignment of value for NONSEC5 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC6_Pos    _UINT32_(6)                                          /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC6_Msk    (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC6_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC6(value) (FUSES_H2PB2_NONSECSETA_NONSEC6_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC6_Pos)) /* Assignment of value for NONSEC6 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC7_Pos    _UINT32_(7)                                          /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC7_Msk    (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC7_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC7(value) (FUSES_H2PB2_NONSECSETA_NONSEC7_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC7_Pos)) /* Assignment of value for NONSEC7 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC8_Pos    _UINT32_(8)                                          /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC8_Msk    (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC8_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC8(value) (FUSES_H2PB2_NONSECSETA_NONSEC8_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC8_Pos)) /* Assignment of value for NONSEC8 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC9_Pos    _UINT32_(9)                                          /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC9_Msk    (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC9_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC9(value) (FUSES_H2PB2_NONSECSETA_NONSEC9_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC9_Pos)) /* Assignment of value for NONSEC9 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC10_Pos   _UINT32_(10)                                         /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC10_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC10_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC10(value) (FUSES_H2PB2_NONSECSETA_NONSEC10_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC10_Pos)) /* Assignment of value for NONSEC10 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC11_Pos   _UINT32_(11)                                         /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC11_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC11_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC11(value) (FUSES_H2PB2_NONSECSETA_NONSEC11_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC11_Pos)) /* Assignment of value for NONSEC11 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC12_Pos   _UINT32_(12)                                         /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC12_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC12_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC12(value) (FUSES_H2PB2_NONSECSETA_NONSEC12_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC12_Pos)) /* Assignment of value for NONSEC12 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC13_Pos   _UINT32_(13)                                         /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC13_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC13_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC13(value) (FUSES_H2PB2_NONSECSETA_NONSEC13_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC13_Pos)) /* Assignment of value for NONSEC13 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC14_Pos   _UINT32_(14)                                         /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC14_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC14_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC14(value) (FUSES_H2PB2_NONSECSETA_NONSEC14_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC14_Pos)) /* Assignment of value for NONSEC14 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC15_Pos   _UINT32_(15)                                         /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC15_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC15_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC15(value) (FUSES_H2PB2_NONSECSETA_NONSEC15_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC15_Pos)) /* Assignment of value for NONSEC15 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC16_Pos   _UINT32_(16)                                         /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC16_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC16_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC16(value) (FUSES_H2PB2_NONSECSETA_NONSEC16_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC16_Pos)) /* Assignment of value for NONSEC16 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC17_Pos   _UINT32_(17)                                         /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC17_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC17_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC17(value) (FUSES_H2PB2_NONSECSETA_NONSEC17_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC17_Pos)) /* Assignment of value for NONSEC17 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC18_Pos   _UINT32_(18)                                         /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC18_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC18_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC18(value) (FUSES_H2PB2_NONSECSETA_NONSEC18_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC18_Pos)) /* Assignment of value for NONSEC18 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC19_Pos   _UINT32_(19)                                         /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC19_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC19_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC19(value) (FUSES_H2PB2_NONSECSETA_NONSEC19_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC19_Pos)) /* Assignment of value for NONSEC19 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC20_Pos   _UINT32_(20)                                         /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC20_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC20_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC20(value) (FUSES_H2PB2_NONSECSETA_NONSEC20_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC20_Pos)) /* Assignment of value for NONSEC20 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC21_Pos   _UINT32_(21)                                         /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC21_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC21_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC21(value) (FUSES_H2PB2_NONSECSETA_NONSEC21_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC21_Pos)) /* Assignment of value for NONSEC21 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC22_Pos   _UINT32_(22)                                         /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC22_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC22_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC22(value) (FUSES_H2PB2_NONSECSETA_NONSEC22_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC22_Pos)) /* Assignment of value for NONSEC22 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC23_Pos   _UINT32_(23)                                         /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC23_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC23_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC23(value) (FUSES_H2PB2_NONSECSETA_NONSEC23_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC23_Pos)) /* Assignment of value for NONSEC23 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC24_Pos   _UINT32_(24)                                         /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC24_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC24_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC24(value) (FUSES_H2PB2_NONSECSETA_NONSEC24_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC24_Pos)) /* Assignment of value for NONSEC24 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC25_Pos   _UINT32_(25)                                         /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC25_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC25_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC25(value) (FUSES_H2PB2_NONSECSETA_NONSEC25_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC25_Pos)) /* Assignment of value for NONSEC25 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC26_Pos   _UINT32_(26)                                         /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC26_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC26_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC26(value) (FUSES_H2PB2_NONSECSETA_NONSEC26_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC26_Pos)) /* Assignment of value for NONSEC26 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC27_Pos   _UINT32_(27)                                         /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC27_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC27_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC27(value) (FUSES_H2PB2_NONSECSETA_NONSEC27_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC27_Pos)) /* Assignment of value for NONSEC27 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC28_Pos   _UINT32_(28)                                         /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC28_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC28_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC28(value) (FUSES_H2PB2_NONSECSETA_NONSEC28_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC28_Pos)) /* Assignment of value for NONSEC28 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC29_Pos   _UINT32_(29)                                         /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC29_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC29_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC29(value) (FUSES_H2PB2_NONSECSETA_NONSEC29_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC29_Pos)) /* Assignment of value for NONSEC29 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC30_Pos   _UINT32_(30)                                         /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC30_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC30_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC30(value) (FUSES_H2PB2_NONSECSETA_NONSEC30_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC30_Pos)) /* Assignment of value for NONSEC30 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_NONSEC31_Pos   _UINT32_(31)                                         /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Position */
#define FUSES_H2PB2_NONSECSETA_NONSEC31_Msk   (_UINT32_(0x1) << FUSES_H2PB2_NONSECSETA_NONSEC31_Pos) /* (FUSES_H2PB2_NONSECSETA) non-security bit for APB Slave k, k=0..31 Mask */
#define FUSES_H2PB2_NONSECSETA_NONSEC31(value) (FUSES_H2PB2_NONSECSETA_NONSEC31_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC31_Pos)) /* Assignment of value for NONSEC31 in the FUSES_H2PB2_NONSECSETA register */
#define FUSES_H2PB2_NONSECSETA_Msk            _UINT32_(0xFFFFFFFF)                                 /* (FUSES_H2PB2_NONSECSETA) Register Mask  */

#define FUSES_H2PB2_NONSECSETA_NONSEC_Pos     _UINT32_(0)                                          /* (FUSES_H2PB2_NONSECSETA Position) non-security bit for APB Slave k, k=x..3x */
#define FUSES_H2PB2_NONSECSETA_NONSEC_Msk     (_UINT32_(0xFFFFFFFF) << FUSES_H2PB2_NONSECSETA_NONSEC_Pos) /* (FUSES_H2PB2_NONSECSETA Mask) NONSEC */
#define FUSES_H2PB2_NONSECSETA_NONSEC(value)  (FUSES_H2PB2_NONSECSETA_NONSEC_Msk & (_UINT32_(value) << FUSES_H2PB2_NONSECSETA_NONSEC_Pos)) 

/* -------- FUSES_PAC_WRCTRL_H2PB2 : (FUSES Offset: 0x860) (R/W 32) Write Control Register -------- */
#define FUSES_PAC_WRCTRL_H2PB2_RESETVALUE     _UINT32_(0x2F)                                       /*  (FUSES_PAC_WRCTRL_H2PB2) Write Control Register  Reset Value */

#define FUSES_PAC_WRCTRL_H2PB2_PERID_Pos      _UINT32_(0)                                          /* (FUSES_PAC_WRCTRL_H2PB2) Peripheral Identifier Position */
#define FUSES_PAC_WRCTRL_H2PB2_PERID_Msk      (_UINT32_(0xFF) << FUSES_PAC_WRCTRL_H2PB2_PERID_Pos) /* (FUSES_PAC_WRCTRL_H2PB2) Peripheral Identifier Mask */
#define FUSES_PAC_WRCTRL_H2PB2_PERID(value)   (FUSES_PAC_WRCTRL_H2PB2_PERID_Msk & (_UINT32_(value) << FUSES_PAC_WRCTRL_H2PB2_PERID_Pos)) /* Assignment of value for PERID in the FUSES_PAC_WRCTRL_H2PB2 register */
#define FUSES_PAC_WRCTRL_H2PB2_KEY_Pos        _UINT32_(16)                                         /* (FUSES_PAC_WRCTRL_H2PB2) Peripheral Access Control Key Position */
#define FUSES_PAC_WRCTRL_H2PB2_KEY_Msk        (_UINT32_(0xFF) << FUSES_PAC_WRCTRL_H2PB2_KEY_Pos)   /* (FUSES_PAC_WRCTRL_H2PB2) Peripheral Access Control Key Mask */
#define FUSES_PAC_WRCTRL_H2PB2_KEY(value)     (FUSES_PAC_WRCTRL_H2PB2_KEY_Msk & (_UINT32_(value) << FUSES_PAC_WRCTRL_H2PB2_KEY_Pos)) /* Assignment of value for KEY in the FUSES_PAC_WRCTRL_H2PB2 register */
#define   FUSES_PAC_WRCTRL_H2PB2_KEY_OFF_Val  _UINT32_(0x0)                                        /* (FUSES_PAC_WRCTRL_H2PB2) OFF - No Action  */
#define   FUSES_PAC_WRCTRL_H2PB2_KEY_CLEAR_Val _UINT32_(0x1)                                        /* (FUSES_PAC_WRCTRL_H2PB2) CLEAR - Clear the peripheral write protection  */
#define   FUSES_PAC_WRCTRL_H2PB2_KEY_SET_Val  _UINT32_(0x2)                                        /* (FUSES_PAC_WRCTRL_H2PB2) SET - Set the peripheral write protection  */
#define   FUSES_PAC_WRCTRL_H2PB2_KEY_LOCK_Val _UINT32_(0x3)                                        /* (FUSES_PAC_WRCTRL_H2PB2) LOCK - Set and Lock the write protection state of the peripheral until the next reset  */
#define FUSES_PAC_WRCTRL_H2PB2_KEY_OFF        (FUSES_PAC_WRCTRL_H2PB2_KEY_OFF_Val << FUSES_PAC_WRCTRL_H2PB2_KEY_Pos) /* (FUSES_PAC_WRCTRL_H2PB2) OFF - No Action Position */
#define FUSES_PAC_WRCTRL_H2PB2_KEY_CLEAR      (FUSES_PAC_WRCTRL_H2PB2_KEY_CLEAR_Val << FUSES_PAC_WRCTRL_H2PB2_KEY_Pos) /* (FUSES_PAC_WRCTRL_H2PB2) CLEAR - Clear the peripheral write protection Position */
#define FUSES_PAC_WRCTRL_H2PB2_KEY_SET        (FUSES_PAC_WRCTRL_H2PB2_KEY_SET_Val << FUSES_PAC_WRCTRL_H2PB2_KEY_Pos) /* (FUSES_PAC_WRCTRL_H2PB2) SET - Set the peripheral write protection Position */
#define FUSES_PAC_WRCTRL_H2PB2_KEY_LOCK       (FUSES_PAC_WRCTRL_H2PB2_KEY_LOCK_Val << FUSES_PAC_WRCTRL_H2PB2_KEY_Pos) /* (FUSES_PAC_WRCTRL_H2PB2) LOCK - Set and Lock the write protection state of the peripheral until the next reset Position */
#define FUSES_PAC_WRCTRL_H2PB2_Msk            _UINT32_(0x00FF00FF)                                 /* (FUSES_PAC_WRCTRL_H2PB2) Register Mask  */


/* -------- FUSES_IDAU_RCTRL_BFM : (FUSES Offset: 0x864) (R/W 32) Region Control -------- */
#define FUSES_IDAU_RCTRL_BFM_RESETVALUE       _UINT32_(0x5C000000)                                 /*  (FUSES_IDAU_RCTRL_BFM) Region Control  Reset Value */

#define FUSES_IDAU_RCTRL_BFM_Msk              _UINT32_(0x00000000)                                 /* (FUSES_IDAU_RCTRL_BFM) Register Mask  */

/* BLOCK mode */
#define FUSES_IDAU_RCTRL_BFM_BLOCK_ARG_Pos    _UINT32_(0)                                          /* (FUSES_IDAU_RCTRL_BFM) IDAU Region Control BFM Command Argument (Block ID) Position */
#define FUSES_IDAU_RCTRL_BFM_BLOCK_ARG_Msk    (_UINT32_(0x1F) << FUSES_IDAU_RCTRL_BFM_BLOCK_ARG_Pos) /* (FUSES_IDAU_RCTRL_BFM) IDAU Region Control BFM Command Argument (Block ID) Mask */
#define FUSES_IDAU_RCTRL_BFM_BLOCK_ARG(value) (FUSES_IDAU_RCTRL_BFM_BLOCK_ARG_Msk & (_UINT32_(value) << FUSES_IDAU_RCTRL_BFM_BLOCK_ARG_Pos))
#define FUSES_IDAU_RCTRL_BFM_BLOCK_CMD_Pos    _UINT32_(24)                                         /* (FUSES_IDAU_RCTRL_BFM) IDAU Region Control BFM Command Position */
#define FUSES_IDAU_RCTRL_BFM_BLOCK_CMD_Msk    (_UINT32_(0xFF) << FUSES_IDAU_RCTRL_BFM_BLOCK_CMD_Pos) /* (FUSES_IDAU_RCTRL_BFM) IDAU Region Control BFM Command Mask */
#define FUSES_IDAU_RCTRL_BFM_BLOCK_CMD(value) (FUSES_IDAU_RCTRL_BFM_BLOCK_CMD_Msk & (_UINT32_(value) << FUSES_IDAU_RCTRL_BFM_BLOCK_CMD_Pos))
#define   FUSES_IDAU_RCTRL_BFM_BLOCK_CMD_CLRNONSEC_Val _UINT32_(0x5A)                                       /* (FUSES_IDAU_RCTRL_BFM) Clear IDAU region x Non-Secure State of block ARG (RSTATUSB[x].NONSEC[ARG]=0)  */
#define   FUSES_IDAU_RCTRL_BFM_BLOCK_CMD_SETNONSEC_Val _UINT32_(0x5B)                                       /* (FUSES_IDAU_RCTRL_BFM) Set IDAU region x Non-Secure State of block ARG (RSTATUSB[x].NONSEC[ARG]=1)  */
#define FUSES_IDAU_RCTRL_BFM_BLOCK_CMD_CLRNONSEC (FUSES_IDAU_RCTRL_BFM_BLOCK_CMD_CLRNONSEC_Val << FUSES_IDAU_RCTRL_BFM_BLOCK_CMD_Pos) /* (FUSES_IDAU_RCTRL_BFM) Clear IDAU region x Non-Secure State of block ARG (RSTATUSB[x].NONSEC[ARG]=0) Position */
#define FUSES_IDAU_RCTRL_BFM_BLOCK_CMD_SETNONSEC (FUSES_IDAU_RCTRL_BFM_BLOCK_CMD_SETNONSEC_Val << FUSES_IDAU_RCTRL_BFM_BLOCK_CMD_Pos) /* (FUSES_IDAU_RCTRL_BFM) Set IDAU region x Non-Secure State of block ARG (RSTATUSB[x].NONSEC[ARG]=1) Position */
#define FUSES_IDAU_RCTRL_BFM_BLOCK_Msk        _UINT32_(0xFF00001F)                                 /* (FUSES_IDAU_RCTRL_BFM_BLOCK) Register Mask  */

/* WATERMARK mode */
#define FUSES_IDAU_RCTRL_BFM_WATERMARK_ARG_Pos _UINT32_(0)                                          /* (FUSES_IDAU_RCTRL_BFM) IDAU Region Control BFM Command Argument (Watermark) Position */
#define FUSES_IDAU_RCTRL_BFM_WATERMARK_ARG_Msk (_UINT32_(0xFFFFFF) << FUSES_IDAU_RCTRL_BFM_WATERMARK_ARG_Pos) /* (FUSES_IDAU_RCTRL_BFM) IDAU Region Control BFM Command Argument (Watermark) Mask */
#define FUSES_IDAU_RCTRL_BFM_WATERMARK_ARG(value) (FUSES_IDAU_RCTRL_BFM_WATERMARK_ARG_Msk & (_UINT32_(value) << FUSES_IDAU_RCTRL_BFM_WATERMARK_ARG_Pos))
#define FUSES_IDAU_RCTRL_BFM_WATERMARK_CMD_Pos _UINT32_(24)                                         /* (FUSES_IDAU_RCTRL_BFM) IDAU Region Control BFM Command Position */
#define FUSES_IDAU_RCTRL_BFM_WATERMARK_CMD_Msk (_UINT32_(0xFF) << FUSES_IDAU_RCTRL_BFM_WATERMARK_CMD_Pos) /* (FUSES_IDAU_RCTRL_BFM) IDAU Region Control BFM Command Mask */
#define FUSES_IDAU_RCTRL_BFM_WATERMARK_CMD(value) (FUSES_IDAU_RCTRL_BFM_WATERMARK_CMD_Msk & (_UINT32_(value) << FUSES_IDAU_RCTRL_BFM_WATERMARK_CMD_Pos))
#define   FUSES_IDAU_RCTRL_BFM_WATERMARK_CMD_WRSZ_Val _UINT32_(0x5C)                                       /* (FUSES_IDAU_RCTRL_BFM) Write IDAU region x Size (RSTATUSB[x].SIZE=ARG)  */
#define FUSES_IDAU_RCTRL_BFM_WATERMARK_CMD_WRSZ (FUSES_IDAU_RCTRL_BFM_WATERMARK_CMD_WRSZ_Val << FUSES_IDAU_RCTRL_BFM_WATERMARK_CMD_Pos) /* (FUSES_IDAU_RCTRL_BFM) Write IDAU region x Size (RSTATUSB[x].SIZE=ARG) Position */
#define FUSES_IDAU_RCTRL_BFM_WATERMARK_Msk    _UINT32_(0xFFFFFFFF)                                 /* (FUSES_IDAU_RCTRL_BFM_WATERMARK) Register Mask  */


/* -------- FUSES_IDAU_RCTRL_PFMANS : (FUSES Offset: 0x868) (R/W 32) Region Control -------- */
#define FUSES_IDAU_RCTRL_PFMANS_RESETVALUE    _UINT32_(0x5C000000)                                 /*  (FUSES_IDAU_RCTRL_PFMANS) Region Control  Reset Value */

#define FUSES_IDAU_RCTRL_PFMANS_Msk           _UINT32_(0x00000000)                                 /* (FUSES_IDAU_RCTRL_PFMANS) Register Mask  */

/* BLOCK mode */
#define FUSES_IDAU_RCTRL_PFMANS_BLOCK_ARG_Pos _UINT32_(0)                                          /* (FUSES_IDAU_RCTRL_PFMANS) IDAU Region Control PFMANS Command Argument (Block ID) Position */
#define FUSES_IDAU_RCTRL_PFMANS_BLOCK_ARG_Msk (_UINT32_(0x1F) << FUSES_IDAU_RCTRL_PFMANS_BLOCK_ARG_Pos) /* (FUSES_IDAU_RCTRL_PFMANS) IDAU Region Control PFMANS Command Argument (Block ID) Mask */
#define FUSES_IDAU_RCTRL_PFMANS_BLOCK_ARG(value) (FUSES_IDAU_RCTRL_PFMANS_BLOCK_ARG_Msk & (_UINT32_(value) << FUSES_IDAU_RCTRL_PFMANS_BLOCK_ARG_Pos))
#define FUSES_IDAU_RCTRL_PFMANS_BLOCK_CMD_Pos _UINT32_(24)                                         /* (FUSES_IDAU_RCTRL_PFMANS) IDAU Region Control PFMAN Command Position */
#define FUSES_IDAU_RCTRL_PFMANS_BLOCK_CMD_Msk (_UINT32_(0xFF) << FUSES_IDAU_RCTRL_PFMANS_BLOCK_CMD_Pos) /* (FUSES_IDAU_RCTRL_PFMANS) IDAU Region Control PFMAN Command Mask */
#define FUSES_IDAU_RCTRL_PFMANS_BLOCK_CMD(value) (FUSES_IDAU_RCTRL_PFMANS_BLOCK_CMD_Msk & (_UINT32_(value) << FUSES_IDAU_RCTRL_PFMANS_BLOCK_CMD_Pos))
#define   FUSES_IDAU_RCTRL_PFMANS_BLOCK_CMD_CLRNONSEC_Val _UINT32_(0x5A)                                       /* (FUSES_IDAU_RCTRL_PFMANS) Clear IDAU region x Non-Secure State of block ARG (RSTATUSB[x].NONSEC[ARG]=0)  */
#define   FUSES_IDAU_RCTRL_PFMANS_BLOCK_CMD_SETNONSEC_Val _UINT32_(0x5B)                                       /* (FUSES_IDAU_RCTRL_PFMANS) Set IDAU region x Non-Secure State of block ARG (RSTATUSB[x].NONSEC[ARG]=1)  */
#define FUSES_IDAU_RCTRL_PFMANS_BLOCK_CMD_CLRNONSEC (FUSES_IDAU_RCTRL_PFMANS_BLOCK_CMD_CLRNONSEC_Val << FUSES_IDAU_RCTRL_PFMANS_BLOCK_CMD_Pos) /* (FUSES_IDAU_RCTRL_PFMANS) Clear IDAU region x Non-Secure State of block ARG (RSTATUSB[x].NONSEC[ARG]=0) Position */
#define FUSES_IDAU_RCTRL_PFMANS_BLOCK_CMD_SETNONSEC (FUSES_IDAU_RCTRL_PFMANS_BLOCK_CMD_SETNONSEC_Val << FUSES_IDAU_RCTRL_PFMANS_BLOCK_CMD_Pos) /* (FUSES_IDAU_RCTRL_PFMANS) Set IDAU region x Non-Secure State of block ARG (RSTATUSB[x].NONSEC[ARG]=1) Position */
#define FUSES_IDAU_RCTRL_PFMANS_BLOCK_Msk     _UINT32_(0xFF00001F)                                 /* (FUSES_IDAU_RCTRL_PFMANS_BLOCK) Register Mask  */

/* WATERMARK mode */
#define FUSES_IDAU_RCTRL_PFMANS_WATERMARK_ARG_Pos _UINT32_(0)                                          /* (FUSES_IDAU_RCTRL_PFMANS) IDAU Region Control PFMAN Command Argument (Watermark) Position */
#define FUSES_IDAU_RCTRL_PFMANS_WATERMARK_ARG_Msk (_UINT32_(0xFFFFFF) << FUSES_IDAU_RCTRL_PFMANS_WATERMARK_ARG_Pos) /* (FUSES_IDAU_RCTRL_PFMANS) IDAU Region Control PFMAN Command Argument (Watermark) Mask */
#define FUSES_IDAU_RCTRL_PFMANS_WATERMARK_ARG(value) (FUSES_IDAU_RCTRL_PFMANS_WATERMARK_ARG_Msk & (_UINT32_(value) << FUSES_IDAU_RCTRL_PFMANS_WATERMARK_ARG_Pos))
#define FUSES_IDAU_RCTRL_PFMANS_WATERMARK_CMD_Pos _UINT32_(24)                                         /* (FUSES_IDAU_RCTRL_PFMANS) IDAU Region Control PFMAN Command Position */
#define FUSES_IDAU_RCTRL_PFMANS_WATERMARK_CMD_Msk (_UINT32_(0xFF) << FUSES_IDAU_RCTRL_PFMANS_WATERMARK_CMD_Pos) /* (FUSES_IDAU_RCTRL_PFMANS) IDAU Region Control PFMAN Command Mask */
#define FUSES_IDAU_RCTRL_PFMANS_WATERMARK_CMD(value) (FUSES_IDAU_RCTRL_PFMANS_WATERMARK_CMD_Msk & (_UINT32_(value) << FUSES_IDAU_RCTRL_PFMANS_WATERMARK_CMD_Pos))
#define   FUSES_IDAU_RCTRL_PFMANS_WATERMARK_CMD_WRSZ_Val _UINT32_(0x5C)                                       /* (FUSES_IDAU_RCTRL_PFMANS) Write IDAU region x Size (RSTATUSB[x].SIZE=ARG)  */
#define FUSES_IDAU_RCTRL_PFMANS_WATERMARK_CMD_WRSZ (FUSES_IDAU_RCTRL_PFMANS_WATERMARK_CMD_WRSZ_Val << FUSES_IDAU_RCTRL_PFMANS_WATERMARK_CMD_Pos) /* (FUSES_IDAU_RCTRL_PFMANS) Write IDAU region x Size (RSTATUSB[x].SIZE=ARG) Position */
#define FUSES_IDAU_RCTRL_PFMANS_WATERMARK_Msk _UINT32_(0xFFFFFFFF)                                 /* (FUSES_IDAU_RCTRL_PFMANS_WATERMARK) Register Mask  */


/* -------- FUSES_IDAU_RCTRL_PFMANSC : (FUSES Offset: 0x86C) (R/W 32) Region Control -------- */
#define FUSES_IDAU_RCTRL_PFMANSC_RESETVALUE   _UINT32_(0x5C000000)                                 /*  (FUSES_IDAU_RCTRL_PFMANSC) Region Control  Reset Value */

#define FUSES_IDAU_RCTRL_PFMANSC_Msk          _UINT32_(0x00000000)                                 /* (FUSES_IDAU_RCTRL_PFMANSC) Register Mask  */

/* BLOCK mode */
#define FUSES_IDAU_RCTRL_PFMANSC_BLOCK_ARG_Pos _UINT32_(0)                                          /* (FUSES_IDAU_RCTRL_PFMANSC) IDAU Region Control PFMANSC Command Argument (Block ID) Position */
#define FUSES_IDAU_RCTRL_PFMANSC_BLOCK_ARG_Msk (_UINT32_(0x1F) << FUSES_IDAU_RCTRL_PFMANSC_BLOCK_ARG_Pos) /* (FUSES_IDAU_RCTRL_PFMANSC) IDAU Region Control PFMANSC Command Argument (Block ID) Mask */
#define FUSES_IDAU_RCTRL_PFMANSC_BLOCK_ARG(value) (FUSES_IDAU_RCTRL_PFMANSC_BLOCK_ARG_Msk & (_UINT32_(value) << FUSES_IDAU_RCTRL_PFMANSC_BLOCK_ARG_Pos))
#define FUSES_IDAU_RCTRL_PFMANSC_BLOCK_CMD_Pos _UINT32_(24)                                         /* (FUSES_IDAU_RCTRL_PFMANSC) IDAU Region Control PFMANSC Command Position */
#define FUSES_IDAU_RCTRL_PFMANSC_BLOCK_CMD_Msk (_UINT32_(0xFF) << FUSES_IDAU_RCTRL_PFMANSC_BLOCK_CMD_Pos) /* (FUSES_IDAU_RCTRL_PFMANSC) IDAU Region Control PFMANSC Command Mask */
#define FUSES_IDAU_RCTRL_PFMANSC_BLOCK_CMD(value) (FUSES_IDAU_RCTRL_PFMANSC_BLOCK_CMD_Msk & (_UINT32_(value) << FUSES_IDAU_RCTRL_PFMANSC_BLOCK_CMD_Pos))
#define   FUSES_IDAU_RCTRL_PFMANSC_BLOCK_CMD_CLRNONSEC_Val _UINT32_(0x5A)                                       /* (FUSES_IDAU_RCTRL_PFMANSC) Clear IDAU region x Non-Secure State of block ARG (RSTATUSB[x].NONSEC[ARG]=0)  */
#define   FUSES_IDAU_RCTRL_PFMANSC_BLOCK_CMD_SETNONSEC_Val _UINT32_(0x5B)                                       /* (FUSES_IDAU_RCTRL_PFMANSC) Set IDAU region x Non-Secure State of block ARG (RSTATUSB[x].NONSEC[ARG]=1)  */
#define FUSES_IDAU_RCTRL_PFMANSC_BLOCK_CMD_CLRNONSEC (FUSES_IDAU_RCTRL_PFMANSC_BLOCK_CMD_CLRNONSEC_Val << FUSES_IDAU_RCTRL_PFMANSC_BLOCK_CMD_Pos) /* (FUSES_IDAU_RCTRL_PFMANSC) Clear IDAU region x Non-Secure State of block ARG (RSTATUSB[x].NONSEC[ARG]=0) Position */
#define FUSES_IDAU_RCTRL_PFMANSC_BLOCK_CMD_SETNONSEC (FUSES_IDAU_RCTRL_PFMANSC_BLOCK_CMD_SETNONSEC_Val << FUSES_IDAU_RCTRL_PFMANSC_BLOCK_CMD_Pos) /* (FUSES_IDAU_RCTRL_PFMANSC) Set IDAU region x Non-Secure State of block ARG (RSTATUSB[x].NONSEC[ARG]=1) Position */
#define FUSES_IDAU_RCTRL_PFMANSC_BLOCK_Msk    _UINT32_(0xFF00001F)                                 /* (FUSES_IDAU_RCTRL_PFMANSC_BLOCK) Register Mask  */

/* WATERMARK mode */
#define FUSES_IDAU_RCTRL_PFMANSC_WATERMARK_ARG_Pos _UINT32_(0)                                          /* (FUSES_IDAU_RCTRL_PFMANSC) IDAU Region Control PFMANSC Command Argument (Watermark) Position */
#define FUSES_IDAU_RCTRL_PFMANSC_WATERMARK_ARG_Msk (_UINT32_(0xFFFFFF) << FUSES_IDAU_RCTRL_PFMANSC_WATERMARK_ARG_Pos) /* (FUSES_IDAU_RCTRL_PFMANSC) IDAU Region Control PFMANSC Command Argument (Watermark) Mask */
#define FUSES_IDAU_RCTRL_PFMANSC_WATERMARK_ARG(value) (FUSES_IDAU_RCTRL_PFMANSC_WATERMARK_ARG_Msk & (_UINT32_(value) << FUSES_IDAU_RCTRL_PFMANSC_WATERMARK_ARG_Pos))
#define FUSES_IDAU_RCTRL_PFMANSC_WATERMARK_CMD_Pos _UINT32_(24)                                         /* (FUSES_IDAU_RCTRL_PFMANSC) IDAU Region Control PFMANSC Command Position */
#define FUSES_IDAU_RCTRL_PFMANSC_WATERMARK_CMD_Msk (_UINT32_(0xFF) << FUSES_IDAU_RCTRL_PFMANSC_WATERMARK_CMD_Pos) /* (FUSES_IDAU_RCTRL_PFMANSC) IDAU Region Control PFMANSC Command Mask */
#define FUSES_IDAU_RCTRL_PFMANSC_WATERMARK_CMD(value) (FUSES_IDAU_RCTRL_PFMANSC_WATERMARK_CMD_Msk & (_UINT32_(value) << FUSES_IDAU_RCTRL_PFMANSC_WATERMARK_CMD_Pos))
#define   FUSES_IDAU_RCTRL_PFMANSC_WATERMARK_CMD_WRSZ_Val _UINT32_(0x5C)                                       /* (FUSES_IDAU_RCTRL_PFMANSC) Write IDAU region x Size (RSTATUSB[x].SIZE=ARG)  */
#define FUSES_IDAU_RCTRL_PFMANSC_WATERMARK_CMD_WRSZ (FUSES_IDAU_RCTRL_PFMANSC_WATERMARK_CMD_WRSZ_Val << FUSES_IDAU_RCTRL_PFMANSC_WATERMARK_CMD_Pos) /* (FUSES_IDAU_RCTRL_PFMANSC) Write IDAU region x Size (RSTATUSB[x].SIZE=ARG) Position */
#define FUSES_IDAU_RCTRL_PFMANSC_WATERMARK_Msk _UINT32_(0xFFFFFFFF)                                 /* (FUSES_IDAU_RCTRL_PFMANSC_WATERMARK) Register Mask  */


/* -------- FUSES_IDAU_RCTRL_DRM : (FUSES Offset: 0x870) (R/W 32) Region Control -------- */
#define FUSES_IDAU_RCTRL_DRM_RESETVALUE       _UINT32_(0x5C000000)                                 /*  (FUSES_IDAU_RCTRL_DRM) Region Control  Reset Value */

#define FUSES_IDAU_RCTRL_DRM_Msk              _UINT32_(0x00000000)                                 /* (FUSES_IDAU_RCTRL_DRM) Register Mask  */

/* BLOCK mode */
#define FUSES_IDAU_RCTRL_DRM_BLOCK_ARG_Pos    _UINT32_(0)                                          /* (FUSES_IDAU_RCTRL_DRM) IDAU Region Control DRM Command Argument (Block ID) Position */
#define FUSES_IDAU_RCTRL_DRM_BLOCK_ARG_Msk    (_UINT32_(0x1F) << FUSES_IDAU_RCTRL_DRM_BLOCK_ARG_Pos) /* (FUSES_IDAU_RCTRL_DRM) IDAU Region Control DRM Command Argument (Block ID) Mask */
#define FUSES_IDAU_RCTRL_DRM_BLOCK_ARG(value) (FUSES_IDAU_RCTRL_DRM_BLOCK_ARG_Msk & (_UINT32_(value) << FUSES_IDAU_RCTRL_DRM_BLOCK_ARG_Pos))
#define FUSES_IDAU_RCTRL_DRM_BLOCK_CMD_Pos    _UINT32_(24)                                         /* (FUSES_IDAU_RCTRL_DRM) IDAU Region Control DRM Command Position */
#define FUSES_IDAU_RCTRL_DRM_BLOCK_CMD_Msk    (_UINT32_(0xFF) << FUSES_IDAU_RCTRL_DRM_BLOCK_CMD_Pos) /* (FUSES_IDAU_RCTRL_DRM) IDAU Region Control DRM Command Mask */
#define FUSES_IDAU_RCTRL_DRM_BLOCK_CMD(value) (FUSES_IDAU_RCTRL_DRM_BLOCK_CMD_Msk & (_UINT32_(value) << FUSES_IDAU_RCTRL_DRM_BLOCK_CMD_Pos))
#define   FUSES_IDAU_RCTRL_DRM_BLOCK_CMD_CLRNONSEC_Val _UINT32_(0x5A)                                       /* (FUSES_IDAU_RCTRL_DRM) Clear IDAU region x Non-Secure State of block ARG (RSTATUSB[x].NONSEC[ARG]=0)  */
#define   FUSES_IDAU_RCTRL_DRM_BLOCK_CMD_SETNONSEC_Val _UINT32_(0x5B)                                       /* (FUSES_IDAU_RCTRL_DRM) Set IDAU region x Non-Secure State of block ARG (RSTATUSB[x].NONSEC[ARG]=1)  */
#define FUSES_IDAU_RCTRL_DRM_BLOCK_CMD_CLRNONSEC (FUSES_IDAU_RCTRL_DRM_BLOCK_CMD_CLRNONSEC_Val << FUSES_IDAU_RCTRL_DRM_BLOCK_CMD_Pos) /* (FUSES_IDAU_RCTRL_DRM) Clear IDAU region x Non-Secure State of block ARG (RSTATUSB[x].NONSEC[ARG]=0) Position */
#define FUSES_IDAU_RCTRL_DRM_BLOCK_CMD_SETNONSEC (FUSES_IDAU_RCTRL_DRM_BLOCK_CMD_SETNONSEC_Val << FUSES_IDAU_RCTRL_DRM_BLOCK_CMD_Pos) /* (FUSES_IDAU_RCTRL_DRM) Set IDAU region x Non-Secure State of block ARG (RSTATUSB[x].NONSEC[ARG]=1) Position */
#define FUSES_IDAU_RCTRL_DRM_BLOCK_Msk        _UINT32_(0xFF00001F)                                 /* (FUSES_IDAU_RCTRL_DRM_BLOCK) Register Mask  */

/* WATERMARK mode */
#define FUSES_IDAU_RCTRL_DRM_WATERMARK_ARG_Pos _UINT32_(0)                                          /* (FUSES_IDAU_RCTRL_DRM) IDAU Region Control DRM Command Argument (Watermark) Position */
#define FUSES_IDAU_RCTRL_DRM_WATERMARK_ARG_Msk (_UINT32_(0xFFFFFF) << FUSES_IDAU_RCTRL_DRM_WATERMARK_ARG_Pos) /* (FUSES_IDAU_RCTRL_DRM) IDAU Region Control DRM Command Argument (Watermark) Mask */
#define FUSES_IDAU_RCTRL_DRM_WATERMARK_ARG(value) (FUSES_IDAU_RCTRL_DRM_WATERMARK_ARG_Msk & (_UINT32_(value) << FUSES_IDAU_RCTRL_DRM_WATERMARK_ARG_Pos))
#define FUSES_IDAU_RCTRL_DRM_WATERMARK_CMD_Pos _UINT32_(24)                                         /* (FUSES_IDAU_RCTRL_DRM) IDAU Region Control DRM Command Position */
#define FUSES_IDAU_RCTRL_DRM_WATERMARK_CMD_Msk (_UINT32_(0xFF) << FUSES_IDAU_RCTRL_DRM_WATERMARK_CMD_Pos) /* (FUSES_IDAU_RCTRL_DRM) IDAU Region Control DRM Command Mask */
#define FUSES_IDAU_RCTRL_DRM_WATERMARK_CMD(value) (FUSES_IDAU_RCTRL_DRM_WATERMARK_CMD_Msk & (_UINT32_(value) << FUSES_IDAU_RCTRL_DRM_WATERMARK_CMD_Pos))
#define   FUSES_IDAU_RCTRL_DRM_WATERMARK_CMD_WRSZ_Val _UINT32_(0x5C)                                       /* (FUSES_IDAU_RCTRL_DRM) Write IDAU region x Size (RSTATUSB[x].SIZE=ARG)  */
#define FUSES_IDAU_RCTRL_DRM_WATERMARK_CMD_WRSZ (FUSES_IDAU_RCTRL_DRM_WATERMARK_CMD_WRSZ_Val << FUSES_IDAU_RCTRL_DRM_WATERMARK_CMD_Pos) /* (FUSES_IDAU_RCTRL_DRM) Write IDAU region x Size (RSTATUSB[x].SIZE=ARG) Position */
#define FUSES_IDAU_RCTRL_DRM_WATERMARK_Msk    _UINT32_(0xFFFFFFFF)                                 /* (FUSES_IDAU_RCTRL_DRM_WATERMARK) Register Mask  */


/* -------- FUSES_IDAU_CTRL_EN : (FUSES Offset: 0x874) (R/W 32) Control -------- */
#define FUSES_IDAU_CTRL_EN_RESETVALUE         _UINT32_(0xA5010000)                                 /*  (FUSES_IDAU_CTRL_EN) Control  Reset Value */

#define FUSES_IDAU_CTRL_EN_CMD_Pos            _UINT32_(16)                                         /* (FUSES_IDAU_CTRL_EN) IDAU Enable Command Register Position */
#define FUSES_IDAU_CTRL_EN_CMD_Msk            (_UINT32_(0xFFFF) << FUSES_IDAU_CTRL_EN_CMD_Pos)     /* (FUSES_IDAU_CTRL_EN) IDAU Enable Command Register Mask */
#define FUSES_IDAU_CTRL_EN_CMD(value)         (FUSES_IDAU_CTRL_EN_CMD_Msk & (_UINT32_(value) << FUSES_IDAU_CTRL_EN_CMD_Pos)) /* Assignment of value for CMD in the FUSES_IDAU_CTRL_EN register */
#define   FUSES_IDAU_CTRL_EN_CMD_ENABLE_Val   _UINT32_(0xA501)                                     /* (FUSES_IDAU_CTRL_EN) Module Enable  */
#define   FUSES_IDAU_CTRL_EN_CMD_DISABLE_Val  _UINT32_(0xA502)                                     /* (FUSES_IDAU_CTRL_EN) Module Disable  */
#define FUSES_IDAU_CTRL_EN_CMD_ENABLE         (FUSES_IDAU_CTRL_EN_CMD_ENABLE_Val << FUSES_IDAU_CTRL_EN_CMD_Pos) /* (FUSES_IDAU_CTRL_EN) Module Enable Position */
#define FUSES_IDAU_CTRL_EN_CMD_DISABLE        (FUSES_IDAU_CTRL_EN_CMD_DISABLE_Val << FUSES_IDAU_CTRL_EN_CMD_Pos) /* (FUSES_IDAU_CTRL_EN) Module Disable Position */
#define FUSES_IDAU_CTRL_EN_Msk                _UINT32_(0xFFFF0000)                                 /* (FUSES_IDAU_CTRL_EN) Register Mask  */


/* -------- FUSES_IDAU_CTRL_WLCK : (FUSES Offset: 0x878) (R/W 32) Control -------- */
#define FUSES_IDAU_CTRL_WLCK_RESETVALUE       _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_IDAU_CTRL_WLCK) Control  Reset Value */

#define FUSES_IDAU_CTRL_WLCK_CMD_Pos          _UINT32_(16)                                         /* (FUSES_IDAU_CTRL_WLCK) IDAU Write Lock Command Register Position */
#define FUSES_IDAU_CTRL_WLCK_CMD_Msk          (_UINT32_(0xFFFF) << FUSES_IDAU_CTRL_WLCK_CMD_Pos)   /* (FUSES_IDAU_CTRL_WLCK) IDAU Write Lock Command Register Mask */
#define FUSES_IDAU_CTRL_WLCK_CMD(value)       (FUSES_IDAU_CTRL_WLCK_CMD_Msk & (_UINT32_(value) << FUSES_IDAU_CTRL_WLCK_CMD_Pos)) /* Assignment of value for CMD in the FUSES_IDAU_CTRL_WLCK register */
#define   FUSES_IDAU_CTRL_WLCK_CMD_WLCK_Val   _UINT32_(0xA503)                                     /* (FUSES_IDAU_CTRL_WLCK) Write Lock  */
#define FUSES_IDAU_CTRL_WLCK_CMD_WLCK         (FUSES_IDAU_CTRL_WLCK_CMD_WLCK_Val << FUSES_IDAU_CTRL_WLCK_CMD_Pos) /* (FUSES_IDAU_CTRL_WLCK) Write Lock Position */
#define FUSES_IDAU_CTRL_WLCK_Msk              _UINT32_(0xFFFF0000)                                 /* (FUSES_IDAU_CTRL_WLCK) Register Mask  */


/* -------- FUSES_FCW_CWP : (FUSES Offset: 0x87C) (R/W 32) CFM Page Write Protect REGISTER -------- */
#define FUSES_FCW_CWP_RESETVALUE              _UINT32_(0x00)                                       /*  (FUSES_FCW_CWP) CFM Page Write Protect REGISTER  Reset Value */

#define FUSES_FCW_CWP_BC1AWP_Pos              _UINT32_(0)                                          /* (FUSES_FCW_CWP) Panel 1 Write Protect BootCfg1A Position */
#define FUSES_FCW_CWP_BC1AWP_Msk              (_UINT32_(0x1) << FUSES_FCW_CWP_BC1AWP_Pos)          /* (FUSES_FCW_CWP) Panel 1 Write Protect BootCfg1A Mask */
#define FUSES_FCW_CWP_BC1AWP(value)           (FUSES_FCW_CWP_BC1AWP_Msk & (_UINT32_(value) << FUSES_FCW_CWP_BC1AWP_Pos)) /* Assignment of value for BC1AWP in the FUSES_FCW_CWP register */
#define   FUSES_FCW_CWP_BC1AWP_DISABLE_Val    _UINT32_(0x0)                                        /* (FUSES_FCW_CWP) Erase and Write Protection for this Page is Disabled  */
#define   FUSES_FCW_CWP_BC1AWP_ENABLE_Val     _UINT32_(0x1)                                        /* (FUSES_FCW_CWP) Erase and Write Protection for this Page is Enabled  */
#define FUSES_FCW_CWP_BC1AWP_DISABLE          (FUSES_FCW_CWP_BC1AWP_DISABLE_Val << FUSES_FCW_CWP_BC1AWP_Pos) /* (FUSES_FCW_CWP) Erase and Write Protection for this Page is Disabled Position */
#define FUSES_FCW_CWP_BC1AWP_ENABLE           (FUSES_FCW_CWP_BC1AWP_ENABLE_Val << FUSES_FCW_CWP_BC1AWP_Pos) /* (FUSES_FCW_CWP) Erase and Write Protection for this Page is Enabled Position */
#define FUSES_FCW_CWP_BC1WP_Pos               _UINT32_(2)                                          /* (FUSES_FCW_CWP) Panel 1 Write Protect BootCfg1 Position */
#define FUSES_FCW_CWP_BC1WP_Msk               (_UINT32_(0x1) << FUSES_FCW_CWP_BC1WP_Pos)           /* (FUSES_FCW_CWP) Panel 1 Write Protect BootCfg1 Mask */
#define FUSES_FCW_CWP_BC1WP(value)            (FUSES_FCW_CWP_BC1WP_Msk & (_UINT32_(value) << FUSES_FCW_CWP_BC1WP_Pos)) /* Assignment of value for BC1WP in the FUSES_FCW_CWP register */
#define   FUSES_FCW_CWP_BC1WP_DISABLE_Val     _UINT32_(0x0)                                        /* (FUSES_FCW_CWP) Erase and Write Protection for this Page is Disabled  */
#define   FUSES_FCW_CWP_BC1WP_ENABLE_Val      _UINT32_(0x1)                                        /* (FUSES_FCW_CWP) Erase and Write Protection for this Page is Enabled  */
#define FUSES_FCW_CWP_BC1WP_DISABLE           (FUSES_FCW_CWP_BC1WP_DISABLE_Val << FUSES_FCW_CWP_BC1WP_Pos) /* (FUSES_FCW_CWP) Erase and Write Protection for this Page is Disabled Position */
#define FUSES_FCW_CWP_BC1WP_ENABLE            (FUSES_FCW_CWP_BC1WP_ENABLE_Val << FUSES_FCW_CWP_BC1WP_Pos) /* (FUSES_FCW_CWP) Erase and Write Protection for this Page is Enabled Position */
#define FUSES_FCW_CWP_RCWP_Pos                _UINT32_(3)                                          /* (FUSES_FCW_CWP) Panel 1 Write Protect ROMCfg Position */
#define FUSES_FCW_CWP_RCWP_Msk                (_UINT32_(0x1) << FUSES_FCW_CWP_RCWP_Pos)            /* (FUSES_FCW_CWP) Panel 1 Write Protect ROMCfg Mask */
#define FUSES_FCW_CWP_RCWP(value)             (FUSES_FCW_CWP_RCWP_Msk & (_UINT32_(value) << FUSES_FCW_CWP_RCWP_Pos)) /* Assignment of value for RCWP in the FUSES_FCW_CWP register */
#define   FUSES_FCW_CWP_RCWP_DISABLE_Val      _UINT32_(0x0)                                        /* (FUSES_FCW_CWP) Erase and Write Protection for this Page is Disabled  */
#define   FUSES_FCW_CWP_RCWP_ENABLE_Val       _UINT32_(0x1)                                        /* (FUSES_FCW_CWP) Erase and Write Protection for this Page is Enabled  */
#define FUSES_FCW_CWP_RCWP_DISABLE            (FUSES_FCW_CWP_RCWP_DISABLE_Val << FUSES_FCW_CWP_RCWP_Pos) /* (FUSES_FCW_CWP) Erase and Write Protection for this Page is Disabled Position */
#define FUSES_FCW_CWP_RCWP_ENABLE             (FUSES_FCW_CWP_RCWP_ENABLE_Val << FUSES_FCW_CWP_RCWP_Pos) /* (FUSES_FCW_CWP) Erase and Write Protection for this Page is Enabled Position */
#define FUSES_FCW_CWP_VSSWP0_Pos              _UINT32_(4)                                          /* (FUSES_FCW_CWP) Panel 1 Write Protect VSSn Position */
#define FUSES_FCW_CWP_VSSWP0_Msk              (_UINT32_(0x1) << FUSES_FCW_CWP_VSSWP0_Pos)          /* (FUSES_FCW_CWP) Panel 1 Write Protect VSSn Mask */
#define FUSES_FCW_CWP_VSSWP0(value)           (FUSES_FCW_CWP_VSSWP0_Msk & (_UINT32_(value) << FUSES_FCW_CWP_VSSWP0_Pos)) /* Assignment of value for VSSWP0 in the FUSES_FCW_CWP register */
#define   FUSES_FCW_CWP_VSSWP0_DISABLE_Val    _UINT32_(0x0)                                        /* (FUSES_FCW_CWP) Erase and Write Protection for this Page is Disabled  */
#define   FUSES_FCW_CWP_VSSWP0_ENABLE_Val     _UINT32_(0x1)                                        /* (FUSES_FCW_CWP) Erase and Write Protection for this Page is Enabled  */
#define FUSES_FCW_CWP_VSSWP0_DISABLE          (FUSES_FCW_CWP_VSSWP0_DISABLE_Val << FUSES_FCW_CWP_VSSWP0_Pos) /* (FUSES_FCW_CWP) Erase and Write Protection for this Page is Disabled Position */
#define FUSES_FCW_CWP_VSSWP0_ENABLE           (FUSES_FCW_CWP_VSSWP0_ENABLE_Val << FUSES_FCW_CWP_VSSWP0_Pos) /* (FUSES_FCW_CWP) Erase and Write Protection for this Page is Enabled Position */
#define FUSES_FCW_CWP_VSSWP1_Pos              _UINT32_(5)                                          /* (FUSES_FCW_CWP) Panel 1 Write Protect VSSn Position */
#define FUSES_FCW_CWP_VSSWP1_Msk              (_UINT32_(0x1) << FUSES_FCW_CWP_VSSWP1_Pos)          /* (FUSES_FCW_CWP) Panel 1 Write Protect VSSn Mask */
#define FUSES_FCW_CWP_VSSWP1(value)           (FUSES_FCW_CWP_VSSWP1_Msk & (_UINT32_(value) << FUSES_FCW_CWP_VSSWP1_Pos)) /* Assignment of value for VSSWP1 in the FUSES_FCW_CWP register */
#define   FUSES_FCW_CWP_VSSWP1_DISABLE_Val    _UINT32_(0x0)                                        /* (FUSES_FCW_CWP) Erase and Write Protection for this Page is Disabled  */
#define   FUSES_FCW_CWP_VSSWP1_ENABLE_Val     _UINT32_(0x1)                                        /* (FUSES_FCW_CWP) Erase and Write Protection for this Page is Enabled  */
#define FUSES_FCW_CWP_VSSWP1_DISABLE          (FUSES_FCW_CWP_VSSWP1_DISABLE_Val << FUSES_FCW_CWP_VSSWP1_Pos) /* (FUSES_FCW_CWP) Erase and Write Protection for this Page is Disabled Position */
#define FUSES_FCW_CWP_VSSWP1_ENABLE           (FUSES_FCW_CWP_VSSWP1_ENABLE_Val << FUSES_FCW_CWP_VSSWP1_Pos) /* (FUSES_FCW_CWP) Erase and Write Protection for this Page is Enabled Position */
#define FUSES_FCW_CWP_BC1AWPLOCK_Pos          _UINT32_(16)                                         /* (FUSES_FCW_CWP) Panel 1 Lock Write Protection BootCfg1A Position */
#define FUSES_FCW_CWP_BC1AWPLOCK_Msk          (_UINT32_(0x1) << FUSES_FCW_CWP_BC1AWPLOCK_Pos)      /* (FUSES_FCW_CWP) Panel 1 Lock Write Protection BootCfg1A Mask */
#define FUSES_FCW_CWP_BC1AWPLOCK(value)       (FUSES_FCW_CWP_BC1AWPLOCK_Msk & (_UINT32_(value) << FUSES_FCW_CWP_BC1AWPLOCK_Pos)) /* Assignment of value for BC1AWPLOCK in the FUSES_FCW_CWP register */
#define   FUSES_FCW_CWP_BC1AWPLOCK_UNLOCKED_Val _UINT32_(0x0)                                        /* (FUSES_FCW_CWP) The Lock &amp;amp; Write Protect bits for this Page are NOT Locked and can be modified  */
#define   FUSES_FCW_CWP_BC1AWPLOCK_LOCKED_Val _UINT32_(0x1)                                        /* (FUSES_FCW_CWP) The Lock &amp;amp; Write Protect bits for this Page are Locked and cannot be modified  */
#define FUSES_FCW_CWP_BC1AWPLOCK_UNLOCKED     (FUSES_FCW_CWP_BC1AWPLOCK_UNLOCKED_Val << FUSES_FCW_CWP_BC1AWPLOCK_Pos) /* (FUSES_FCW_CWP) The Lock &amp;amp; Write Protect bits for this Page are NOT Locked and can be modified Position */
#define FUSES_FCW_CWP_BC1AWPLOCK_LOCKED       (FUSES_FCW_CWP_BC1AWPLOCK_LOCKED_Val << FUSES_FCW_CWP_BC1AWPLOCK_Pos) /* (FUSES_FCW_CWP) The Lock &amp;amp; Write Protect bits for this Page are Locked and cannot be modified Position */
#define FUSES_FCW_CWP_BC1WPLOCK_Pos           _UINT32_(18)                                         /* (FUSES_FCW_CWP) Panel 1 Lock Write Protection BootCfg1 Position */
#define FUSES_FCW_CWP_BC1WPLOCK_Msk           (_UINT32_(0x1) << FUSES_FCW_CWP_BC1WPLOCK_Pos)       /* (FUSES_FCW_CWP) Panel 1 Lock Write Protection BootCfg1 Mask */
#define FUSES_FCW_CWP_BC1WPLOCK(value)        (FUSES_FCW_CWP_BC1WPLOCK_Msk & (_UINT32_(value) << FUSES_FCW_CWP_BC1WPLOCK_Pos)) /* Assignment of value for BC1WPLOCK in the FUSES_FCW_CWP register */
#define   FUSES_FCW_CWP_BC1WPLOCK_UNLOCKED_Val _UINT32_(0x0)                                        /* (FUSES_FCW_CWP) The Lock &amp;amp; Write Protect bits for this Page are NOT Locked and can be modified  */
#define   FUSES_FCW_CWP_BC1WPLOCK_LOCKED_Val  _UINT32_(0x1)                                        /* (FUSES_FCW_CWP) The Lock &amp;amp; Write Protect bits for this Page are Locked and cannot be modified  */
#define FUSES_FCW_CWP_BC1WPLOCK_UNLOCKED      (FUSES_FCW_CWP_BC1WPLOCK_UNLOCKED_Val << FUSES_FCW_CWP_BC1WPLOCK_Pos) /* (FUSES_FCW_CWP) The Lock &amp;amp; Write Protect bits for this Page are NOT Locked and can be modified Position */
#define FUSES_FCW_CWP_BC1WPLOCK_LOCKED        (FUSES_FCW_CWP_BC1WPLOCK_LOCKED_Val << FUSES_FCW_CWP_BC1WPLOCK_Pos) /* (FUSES_FCW_CWP) The Lock &amp;amp; Write Protect bits for this Page are Locked and cannot be modified Position */
#define FUSES_FCW_CWP_RCWPLOCK_Pos            _UINT32_(19)                                         /* (FUSES_FCW_CWP) Panel 1 Lock Write Protection ROMCfg Position */
#define FUSES_FCW_CWP_RCWPLOCK_Msk            (_UINT32_(0x1) << FUSES_FCW_CWP_RCWPLOCK_Pos)        /* (FUSES_FCW_CWP) Panel 1 Lock Write Protection ROMCfg Mask */
#define FUSES_FCW_CWP_RCWPLOCK(value)         (FUSES_FCW_CWP_RCWPLOCK_Msk & (_UINT32_(value) << FUSES_FCW_CWP_RCWPLOCK_Pos)) /* Assignment of value for RCWPLOCK in the FUSES_FCW_CWP register */
#define   FUSES_FCW_CWP_RCWPLOCK_UNLOCKED_Val _UINT32_(0x0)                                        /* (FUSES_FCW_CWP) The Lock &amp;amp; Write Protect bits for this Page are NOT Locked and can be modified  */
#define   FUSES_FCW_CWP_RCWPLOCK_LOCKED_Val   _UINT32_(0x1)                                        /* (FUSES_FCW_CWP) The Lock &amp;amp; Write Protect bits for this Page are Locked and cannot be modified  */
#define FUSES_FCW_CWP_RCWPLOCK_UNLOCKED       (FUSES_FCW_CWP_RCWPLOCK_UNLOCKED_Val << FUSES_FCW_CWP_RCWPLOCK_Pos) /* (FUSES_FCW_CWP) The Lock &amp;amp; Write Protect bits for this Page are NOT Locked and can be modified Position */
#define FUSES_FCW_CWP_RCWPLOCK_LOCKED         (FUSES_FCW_CWP_RCWPLOCK_LOCKED_Val << FUSES_FCW_CWP_RCWPLOCK_Pos) /* (FUSES_FCW_CWP) The Lock &amp;amp; Write Protect bits for this Page are Locked and cannot be modified Position */
#define FUSES_FCW_CWP_VSSWPLOCK0_Pos          _UINT32_(20)                                         /* (FUSES_FCW_CWP) Panel 1 Lock Write Protection VSSn Position */
#define FUSES_FCW_CWP_VSSWPLOCK0_Msk          (_UINT32_(0x1) << FUSES_FCW_CWP_VSSWPLOCK0_Pos)      /* (FUSES_FCW_CWP) Panel 1 Lock Write Protection VSSn Mask */
#define FUSES_FCW_CWP_VSSWPLOCK0(value)       (FUSES_FCW_CWP_VSSWPLOCK0_Msk & (_UINT32_(value) << FUSES_FCW_CWP_VSSWPLOCK0_Pos)) /* Assignment of value for VSSWPLOCK0 in the FUSES_FCW_CWP register */
#define   FUSES_FCW_CWP_VSSWPLOCK0_UNLOCKED_Val _UINT32_(0x0)                                        /* (FUSES_FCW_CWP) The Lock &amp;amp; Write Protect bits for this Page are NOT Locked and can be modified  */
#define   FUSES_FCW_CWP_VSSWPLOCK0_LOCKED_Val _UINT32_(0x1)                                        /* (FUSES_FCW_CWP) The Lock &amp;amp; Write Protect bits for this Page are Locked and cannot be modified  */
#define FUSES_FCW_CWP_VSSWPLOCK0_UNLOCKED     (FUSES_FCW_CWP_VSSWPLOCK0_UNLOCKED_Val << FUSES_FCW_CWP_VSSWPLOCK0_Pos) /* (FUSES_FCW_CWP) The Lock &amp;amp; Write Protect bits for this Page are NOT Locked and can be modified Position */
#define FUSES_FCW_CWP_VSSWPLOCK0_LOCKED       (FUSES_FCW_CWP_VSSWPLOCK0_LOCKED_Val << FUSES_FCW_CWP_VSSWPLOCK0_Pos) /* (FUSES_FCW_CWP) The Lock &amp;amp; Write Protect bits for this Page are Locked and cannot be modified Position */
#define FUSES_FCW_CWP_VSSWPLOCK1_Pos          _UINT32_(21)                                         /* (FUSES_FCW_CWP) Panel 1 Lock Write Protection VSSn Position */
#define FUSES_FCW_CWP_VSSWPLOCK1_Msk          (_UINT32_(0x1) << FUSES_FCW_CWP_VSSWPLOCK1_Pos)      /* (FUSES_FCW_CWP) Panel 1 Lock Write Protection VSSn Mask */
#define FUSES_FCW_CWP_VSSWPLOCK1(value)       (FUSES_FCW_CWP_VSSWPLOCK1_Msk & (_UINT32_(value) << FUSES_FCW_CWP_VSSWPLOCK1_Pos)) /* Assignment of value for VSSWPLOCK1 in the FUSES_FCW_CWP register */
#define   FUSES_FCW_CWP_VSSWPLOCK1_UNLOCKED_Val _UINT32_(0x0)                                        /* (FUSES_FCW_CWP) The Lock &amp;amp; Write Protect bits for this Page are NOT Locked and can be modified  */
#define   FUSES_FCW_CWP_VSSWPLOCK1_LOCKED_Val _UINT32_(0x1)                                        /* (FUSES_FCW_CWP) The Lock &amp;amp; Write Protect bits for this Page are Locked and cannot be modified  */
#define FUSES_FCW_CWP_VSSWPLOCK1_UNLOCKED     (FUSES_FCW_CWP_VSSWPLOCK1_UNLOCKED_Val << FUSES_FCW_CWP_VSSWPLOCK1_Pos) /* (FUSES_FCW_CWP) The Lock &amp;amp; Write Protect bits for this Page are NOT Locked and can be modified Position */
#define FUSES_FCW_CWP_VSSWPLOCK1_LOCKED       (FUSES_FCW_CWP_VSSWPLOCK1_LOCKED_Val << FUSES_FCW_CWP_VSSWPLOCK1_Pos) /* (FUSES_FCW_CWP) The Lock &amp;amp; Write Protect bits for this Page are Locked and cannot be modified Position */
#define FUSES_FCW_CWP_Msk                     _UINT32_(0x003D003D)                                 /* (FUSES_FCW_CWP) Register Mask  */

#define FUSES_FCW_CWP_VSSWP_Pos               _UINT32_(4)                                          /* (FUSES_FCW_CWP Position) Panel x Write Protect VSSn */
#define FUSES_FCW_CWP_VSSWP_Msk               (_UINT32_(0x3) << FUSES_FCW_CWP_VSSWP_Pos)           /* (FUSES_FCW_CWP Mask) VSSWP */
#define FUSES_FCW_CWP_VSSWP(value)            (FUSES_FCW_CWP_VSSWP_Msk & (_UINT32_(value) << FUSES_FCW_CWP_VSSWP_Pos)) 
#define FUSES_FCW_CWP_VSSWPLOCK_Pos           _UINT32_(20)                                         /* (FUSES_FCW_CWP Position) Panel x Lock Write Protection VSSn */
#define FUSES_FCW_CWP_VSSWPLOCK_Msk           (_UINT32_(0x3) << FUSES_FCW_CWP_VSSWPLOCK_Pos)       /* (FUSES_FCW_CWP Mask) VSSWPLOCK */
#define FUSES_FCW_CWP_VSSWPLOCK(value)        (FUSES_FCW_CWP_VSSWPLOCK_Msk & (_UINT32_(value) << FUSES_FCW_CWP_VSSWPLOCK_Pos)) 

/* -------- FUSES_FCR_CRP : (FUSES Offset: 0x880) (R/W 32) CFM Page Read Protection Register -------- */
#define FUSES_FCR_CRP_RESETVALUE              _UINT32_(0x00)                                       /*  (FUSES_FCR_CRP) CFM Page Read Protection Register  Reset Value */

#define FUSES_FCR_CRP_BC1ARP_Pos              _UINT32_(0)                                          /* (FUSES_FCR_CRP) Panel 1 Read Protect BootCfg1A Position */
#define FUSES_FCR_CRP_BC1ARP_Msk              (_UINT32_(0x1) << FUSES_FCR_CRP_BC1ARP_Pos)          /* (FUSES_FCR_CRP) Panel 1 Read Protect BootCfg1A Mask */
#define FUSES_FCR_CRP_BC1ARP(value)           (FUSES_FCR_CRP_BC1ARP_Msk & (_UINT32_(value) << FUSES_FCR_CRP_BC1ARP_Pos)) /* Assignment of value for BC1ARP in the FUSES_FCR_CRP register */
#define   FUSES_FCR_CRP_BC1ARP_DISABLE_Val    _UINT32_(0x0)                                        /* (FUSES_FCR_CRP) Read Protection for this Page is Disabled  */
#define   FUSES_FCR_CRP_BC1ARP_ENABLE_Val     _UINT32_(0x1)                                        /* (FUSES_FCR_CRP) Read Protection for this Page is Enabled  */
#define FUSES_FCR_CRP_BC1ARP_DISABLE          (FUSES_FCR_CRP_BC1ARP_DISABLE_Val << FUSES_FCR_CRP_BC1ARP_Pos) /* (FUSES_FCR_CRP) Read Protection for this Page is Disabled Position */
#define FUSES_FCR_CRP_BC1ARP_ENABLE           (FUSES_FCR_CRP_BC1ARP_ENABLE_Val << FUSES_FCR_CRP_BC1ARP_Pos) /* (FUSES_FCR_CRP) Read Protection for this Page is Enabled Position */
#define FUSES_FCR_CRP_BC1RP_Pos               _UINT32_(2)                                          /* (FUSES_FCR_CRP) Panel 1 Read Protect BootCfg1 Position */
#define FUSES_FCR_CRP_BC1RP_Msk               (_UINT32_(0x1) << FUSES_FCR_CRP_BC1RP_Pos)           /* (FUSES_FCR_CRP) Panel 1 Read Protect BootCfg1 Mask */
#define FUSES_FCR_CRP_BC1RP(value)            (FUSES_FCR_CRP_BC1RP_Msk & (_UINT32_(value) << FUSES_FCR_CRP_BC1RP_Pos)) /* Assignment of value for BC1RP in the FUSES_FCR_CRP register */
#define   FUSES_FCR_CRP_BC1RP_DISABLE_Val     _UINT32_(0x0)                                        /* (FUSES_FCR_CRP) Read Protection for this Page is Disabled  */
#define   FUSES_FCR_CRP_BC1RP_ENABLE_Val      _UINT32_(0x1)                                        /* (FUSES_FCR_CRP) Read Protection for this Page is Enabled  */
#define FUSES_FCR_CRP_BC1RP_DISABLE           (FUSES_FCR_CRP_BC1RP_DISABLE_Val << FUSES_FCR_CRP_BC1RP_Pos) /* (FUSES_FCR_CRP) Read Protection for this Page is Disabled Position */
#define FUSES_FCR_CRP_BC1RP_ENABLE            (FUSES_FCR_CRP_BC1RP_ENABLE_Val << FUSES_FCR_CRP_BC1RP_Pos) /* (FUSES_FCR_CRP) Read Protection for this Page is Enabled Position */
#define FUSES_FCR_CRP_RCRP_Pos                _UINT32_(3)                                          /* (FUSES_FCR_CRP) Panel 1 Read Protect ROMCfg Position */
#define FUSES_FCR_CRP_RCRP_Msk                (_UINT32_(0x1) << FUSES_FCR_CRP_RCRP_Pos)            /* (FUSES_FCR_CRP) Panel 1 Read Protect ROMCfg Mask */
#define FUSES_FCR_CRP_RCRP(value)             (FUSES_FCR_CRP_RCRP_Msk & (_UINT32_(value) << FUSES_FCR_CRP_RCRP_Pos)) /* Assignment of value for RCRP in the FUSES_FCR_CRP register */
#define   FUSES_FCR_CRP_RCRP_DISABLE_Val      _UINT32_(0x0)                                        /* (FUSES_FCR_CRP) Read Protection for this Page is Disabled  */
#define   FUSES_FCR_CRP_RCRP_ENABLE_Val       _UINT32_(0x1)                                        /* (FUSES_FCR_CRP) Read Protection for this Page is Enabled  */
#define FUSES_FCR_CRP_RCRP_DISABLE            (FUSES_FCR_CRP_RCRP_DISABLE_Val << FUSES_FCR_CRP_RCRP_Pos) /* (FUSES_FCR_CRP) Read Protection for this Page is Disabled Position */
#define FUSES_FCR_CRP_RCRP_ENABLE             (FUSES_FCR_CRP_RCRP_ENABLE_Val << FUSES_FCR_CRP_RCRP_Pos) /* (FUSES_FCR_CRP) Read Protection for this Page is Enabled Position */
#define FUSES_FCR_CRP_VSSRP0_Pos              _UINT32_(4)                                          /* (FUSES_FCR_CRP) Panel 1 Read Protect VSSn Position */
#define FUSES_FCR_CRP_VSSRP0_Msk              (_UINT32_(0x1) << FUSES_FCR_CRP_VSSRP0_Pos)          /* (FUSES_FCR_CRP) Panel 1 Read Protect VSSn Mask */
#define FUSES_FCR_CRP_VSSRP0(value)           (FUSES_FCR_CRP_VSSRP0_Msk & (_UINT32_(value) << FUSES_FCR_CRP_VSSRP0_Pos)) /* Assignment of value for VSSRP0 in the FUSES_FCR_CRP register */
#define   FUSES_FCR_CRP_VSSRP0_DISABLE_Val    _UINT32_(0x0)                                        /* (FUSES_FCR_CRP) Read Protection for this Page is Disabled  */
#define   FUSES_FCR_CRP_VSSRP0_ENABLE_Val     _UINT32_(0x1)                                        /* (FUSES_FCR_CRP) Read Protection for this Page is Enabled  */
#define FUSES_FCR_CRP_VSSRP0_DISABLE          (FUSES_FCR_CRP_VSSRP0_DISABLE_Val << FUSES_FCR_CRP_VSSRP0_Pos) /* (FUSES_FCR_CRP) Read Protection for this Page is Disabled Position */
#define FUSES_FCR_CRP_VSSRP0_ENABLE           (FUSES_FCR_CRP_VSSRP0_ENABLE_Val << FUSES_FCR_CRP_VSSRP0_Pos) /* (FUSES_FCR_CRP) Read Protection for this Page is Enabled Position */
#define FUSES_FCR_CRP_VSSRP1_Pos              _UINT32_(5)                                          /* (FUSES_FCR_CRP) Panel 1 Read Protect VSSn Position */
#define FUSES_FCR_CRP_VSSRP1_Msk              (_UINT32_(0x1) << FUSES_FCR_CRP_VSSRP1_Pos)          /* (FUSES_FCR_CRP) Panel 1 Read Protect VSSn Mask */
#define FUSES_FCR_CRP_VSSRP1(value)           (FUSES_FCR_CRP_VSSRP1_Msk & (_UINT32_(value) << FUSES_FCR_CRP_VSSRP1_Pos)) /* Assignment of value for VSSRP1 in the FUSES_FCR_CRP register */
#define   FUSES_FCR_CRP_VSSRP1_DISABLE_Val    _UINT32_(0x0)                                        /* (FUSES_FCR_CRP) Read Protection for this Page is Disabled  */
#define   FUSES_FCR_CRP_VSSRP1_ENABLE_Val     _UINT32_(0x1)                                        /* (FUSES_FCR_CRP) Read Protection for this Page is Enabled  */
#define FUSES_FCR_CRP_VSSRP1_DISABLE          (FUSES_FCR_CRP_VSSRP1_DISABLE_Val << FUSES_FCR_CRP_VSSRP1_Pos) /* (FUSES_FCR_CRP) Read Protection for this Page is Disabled Position */
#define FUSES_FCR_CRP_VSSRP1_ENABLE           (FUSES_FCR_CRP_VSSRP1_ENABLE_Val << FUSES_FCR_CRP_VSSRP1_Pos) /* (FUSES_FCR_CRP) Read Protection for this Page is Enabled Position */
#define FUSES_FCR_CRP_BC1ARPLOCK_Pos          _UINT32_(16)                                         /* (FUSES_FCR_CRP) Panel 1 Lock Read Protection BootCfg1A Position */
#define FUSES_FCR_CRP_BC1ARPLOCK_Msk          (_UINT32_(0x1) << FUSES_FCR_CRP_BC1ARPLOCK_Pos)      /* (FUSES_FCR_CRP) Panel 1 Lock Read Protection BootCfg1A Mask */
#define FUSES_FCR_CRP_BC1ARPLOCK(value)       (FUSES_FCR_CRP_BC1ARPLOCK_Msk & (_UINT32_(value) << FUSES_FCR_CRP_BC1ARPLOCK_Pos)) /* Assignment of value for BC1ARPLOCK in the FUSES_FCR_CRP register */
#define   FUSES_FCR_CRP_BC1ARPLOCK_UNLOCKED_Val _UINT32_(0x0)                                        /* (FUSES_FCR_CRP) The Lock &amp;amp; Read Protect bits for this Page are NOT Locked and can be modified  */
#define   FUSES_FCR_CRP_BC1ARPLOCK_LOCKED_Val _UINT32_(0x1)                                        /* (FUSES_FCR_CRP) The Lock &amp;amp; Read Protect bits for this Page are Locked and cannot be modified  */
#define FUSES_FCR_CRP_BC1ARPLOCK_UNLOCKED     (FUSES_FCR_CRP_BC1ARPLOCK_UNLOCKED_Val << FUSES_FCR_CRP_BC1ARPLOCK_Pos) /* (FUSES_FCR_CRP) The Lock &amp;amp; Read Protect bits for this Page are NOT Locked and can be modified Position */
#define FUSES_FCR_CRP_BC1ARPLOCK_LOCKED       (FUSES_FCR_CRP_BC1ARPLOCK_LOCKED_Val << FUSES_FCR_CRP_BC1ARPLOCK_Pos) /* (FUSES_FCR_CRP) The Lock &amp;amp; Read Protect bits for this Page are Locked and cannot be modified Position */
#define FUSES_FCR_CRP_BC1RPLOCK_Pos           _UINT32_(18)                                         /* (FUSES_FCR_CRP) Panel 1 Lock Read Protection BootCfg1 Position */
#define FUSES_FCR_CRP_BC1RPLOCK_Msk           (_UINT32_(0x1) << FUSES_FCR_CRP_BC1RPLOCK_Pos)       /* (FUSES_FCR_CRP) Panel 1 Lock Read Protection BootCfg1 Mask */
#define FUSES_FCR_CRP_BC1RPLOCK(value)        (FUSES_FCR_CRP_BC1RPLOCK_Msk & (_UINT32_(value) << FUSES_FCR_CRP_BC1RPLOCK_Pos)) /* Assignment of value for BC1RPLOCK in the FUSES_FCR_CRP register */
#define   FUSES_FCR_CRP_BC1RPLOCK_UNLOCKED_Val _UINT32_(0x0)                                        /* (FUSES_FCR_CRP) The Lock &amp;amp; Read Protect bits for this Page are NOT Locked and can be modified  */
#define   FUSES_FCR_CRP_BC1RPLOCK_LOCKED_Val  _UINT32_(0x1)                                        /* (FUSES_FCR_CRP) The Lock &amp;amp; Read Protect bits for this Page are Locked and cannot be modified  */
#define FUSES_FCR_CRP_BC1RPLOCK_UNLOCKED      (FUSES_FCR_CRP_BC1RPLOCK_UNLOCKED_Val << FUSES_FCR_CRP_BC1RPLOCK_Pos) /* (FUSES_FCR_CRP) The Lock &amp;amp; Read Protect bits for this Page are NOT Locked and can be modified Position */
#define FUSES_FCR_CRP_BC1RPLOCK_LOCKED        (FUSES_FCR_CRP_BC1RPLOCK_LOCKED_Val << FUSES_FCR_CRP_BC1RPLOCK_Pos) /* (FUSES_FCR_CRP) The Lock &amp;amp; Read Protect bits for this Page are Locked and cannot be modified Position */
#define FUSES_FCR_CRP_RCRPLOCK_Pos            _UINT32_(19)                                         /* (FUSES_FCR_CRP) Panel 1 Lock Read Protection ROMCfg Position */
#define FUSES_FCR_CRP_RCRPLOCK_Msk            (_UINT32_(0x1) << FUSES_FCR_CRP_RCRPLOCK_Pos)        /* (FUSES_FCR_CRP) Panel 1 Lock Read Protection ROMCfg Mask */
#define FUSES_FCR_CRP_RCRPLOCK(value)         (FUSES_FCR_CRP_RCRPLOCK_Msk & (_UINT32_(value) << FUSES_FCR_CRP_RCRPLOCK_Pos)) /* Assignment of value for RCRPLOCK in the FUSES_FCR_CRP register */
#define   FUSES_FCR_CRP_RCRPLOCK_UNLOCKED_Val _UINT32_(0x0)                                        /* (FUSES_FCR_CRP) The Lock &amp;amp; Read Protect bits for this Page are NOT Locked and can be modified  */
#define   FUSES_FCR_CRP_RCRPLOCK_LOCKED_Val   _UINT32_(0x1)                                        /* (FUSES_FCR_CRP) The Lock &amp;amp; Read Protect bits for this Page are Locked and cannot be modified  */
#define FUSES_FCR_CRP_RCRPLOCK_UNLOCKED       (FUSES_FCR_CRP_RCRPLOCK_UNLOCKED_Val << FUSES_FCR_CRP_RCRPLOCK_Pos) /* (FUSES_FCR_CRP) The Lock &amp;amp; Read Protect bits for this Page are NOT Locked and can be modified Position */
#define FUSES_FCR_CRP_RCRPLOCK_LOCKED         (FUSES_FCR_CRP_RCRPLOCK_LOCKED_Val << FUSES_FCR_CRP_RCRPLOCK_Pos) /* (FUSES_FCR_CRP) The Lock &amp;amp; Read Protect bits for this Page are Locked and cannot be modified Position */
#define FUSES_FCR_CRP_VSSRPLOCK0_Pos          _UINT32_(20)                                         /* (FUSES_FCR_CRP) Panel 1 Lock Read Protection VSSn Position */
#define FUSES_FCR_CRP_VSSRPLOCK0_Msk          (_UINT32_(0x1) << FUSES_FCR_CRP_VSSRPLOCK0_Pos)      /* (FUSES_FCR_CRP) Panel 1 Lock Read Protection VSSn Mask */
#define FUSES_FCR_CRP_VSSRPLOCK0(value)       (FUSES_FCR_CRP_VSSRPLOCK0_Msk & (_UINT32_(value) << FUSES_FCR_CRP_VSSRPLOCK0_Pos)) /* Assignment of value for VSSRPLOCK0 in the FUSES_FCR_CRP register */
#define   FUSES_FCR_CRP_VSSRPLOCK0_UNLOCKED_Val _UINT32_(0x0)                                        /* (FUSES_FCR_CRP) The Lock &amp;amp; Read Protect bits for this Page are NOT Locked and can be modified  */
#define   FUSES_FCR_CRP_VSSRPLOCK0_LOCKED_Val _UINT32_(0x1)                                        /* (FUSES_FCR_CRP) The Lock &amp;amp; Read Protect bits for this Page are Locked and cannot be modified  */
#define FUSES_FCR_CRP_VSSRPLOCK0_UNLOCKED     (FUSES_FCR_CRP_VSSRPLOCK0_UNLOCKED_Val << FUSES_FCR_CRP_VSSRPLOCK0_Pos) /* (FUSES_FCR_CRP) The Lock &amp;amp; Read Protect bits for this Page are NOT Locked and can be modified Position */
#define FUSES_FCR_CRP_VSSRPLOCK0_LOCKED       (FUSES_FCR_CRP_VSSRPLOCK0_LOCKED_Val << FUSES_FCR_CRP_VSSRPLOCK0_Pos) /* (FUSES_FCR_CRP) The Lock &amp;amp; Read Protect bits for this Page are Locked and cannot be modified Position */
#define FUSES_FCR_CRP_VSSRPLOCK1_Pos          _UINT32_(21)                                         /* (FUSES_FCR_CRP) Panel 1 Lock Read Protection VSSn Position */
#define FUSES_FCR_CRP_VSSRPLOCK1_Msk          (_UINT32_(0x1) << FUSES_FCR_CRP_VSSRPLOCK1_Pos)      /* (FUSES_FCR_CRP) Panel 1 Lock Read Protection VSSn Mask */
#define FUSES_FCR_CRP_VSSRPLOCK1(value)       (FUSES_FCR_CRP_VSSRPLOCK1_Msk & (_UINT32_(value) << FUSES_FCR_CRP_VSSRPLOCK1_Pos)) /* Assignment of value for VSSRPLOCK1 in the FUSES_FCR_CRP register */
#define   FUSES_FCR_CRP_VSSRPLOCK1_UNLOCKED_Val _UINT32_(0x0)                                        /* (FUSES_FCR_CRP) The Lock &amp;amp; Read Protect bits for this Page are NOT Locked and can be modified  */
#define   FUSES_FCR_CRP_VSSRPLOCK1_LOCKED_Val _UINT32_(0x1)                                        /* (FUSES_FCR_CRP) The Lock &amp;amp; Read Protect bits for this Page are Locked and cannot be modified  */
#define FUSES_FCR_CRP_VSSRPLOCK1_UNLOCKED     (FUSES_FCR_CRP_VSSRPLOCK1_UNLOCKED_Val << FUSES_FCR_CRP_VSSRPLOCK1_Pos) /* (FUSES_FCR_CRP) The Lock &amp;amp; Read Protect bits for this Page are NOT Locked and can be modified Position */
#define FUSES_FCR_CRP_VSSRPLOCK1_LOCKED       (FUSES_FCR_CRP_VSSRPLOCK1_LOCKED_Val << FUSES_FCR_CRP_VSSRPLOCK1_Pos) /* (FUSES_FCR_CRP) The Lock &amp;amp; Read Protect bits for this Page are Locked and cannot be modified Position */
#define FUSES_FCR_CRP_Msk                     _UINT32_(0x003D003D)                                 /* (FUSES_FCR_CRP) Register Mask  */

#define FUSES_FCR_CRP_VSSRP_Pos               _UINT32_(4)                                          /* (FUSES_FCR_CRP Position) Panel x Read Protect VSSn */
#define FUSES_FCR_CRP_VSSRP_Msk               (_UINT32_(0x3) << FUSES_FCR_CRP_VSSRP_Pos)           /* (FUSES_FCR_CRP Mask) VSSRP */
#define FUSES_FCR_CRP_VSSRP(value)            (FUSES_FCR_CRP_VSSRP_Msk & (_UINT32_(value) << FUSES_FCR_CRP_VSSRP_Pos)) 
#define FUSES_FCR_CRP_VSSRPLOCK_Pos           _UINT32_(20)                                         /* (FUSES_FCR_CRP Position) Panel x Lock Read Protection VSSn */
#define FUSES_FCR_CRP_VSSRPLOCK_Msk           (_UINT32_(0x3) << FUSES_FCR_CRP_VSSRPLOCK_Pos)       /* (FUSES_FCR_CRP Mask) VSSRPLOCK */
#define FUSES_FCR_CRP_VSSRPLOCK(value)        (FUSES_FCR_CRP_VSSRPLOCK_Msk & (_UINT32_(value) << FUSES_FCR_CRP_VSSRPLOCK_Pos)) 

/* -------- FUSES_FCR_ECCCTRL : (FUSES Offset: 0x884) (R/W 32) ECC Control REGISTER -------- */
#define FUSES_FCR_ECCCTRL_RESETVALUE          _UINT32_(0x70)                                       /*  (FUSES_FCR_ECCCTRL) ECC Control REGISTER  Reset Value */

#define FUSES_FCR_ECCCTRL_ECCCTL_Pos          _UINT32_(4)                                          /* (FUSES_FCR_ECCCTRL) NVM ECC Mode Control - restricts one or more NVMOPs Position */
#define FUSES_FCR_ECCCTRL_ECCCTL_Msk          (_UINT32_(0x3) << FUSES_FCR_ECCCTRL_ECCCTL_Pos)      /* (FUSES_FCR_ECCCTRL) NVM ECC Mode Control - restricts one or more NVMOPs Mask */
#define FUSES_FCR_ECCCTRL_ECCCTL(value)       (FUSES_FCR_ECCCTRL_ECCCTL_Msk & (_UINT32_(value) << FUSES_FCR_ECCCTRL_ECCCTL_Pos)) /* Assignment of value for ECCCTL in the FUSES_FCR_ECCCTRL register */
#define   FUSES_FCR_ECCCTRL_ECCCTL_STRICT_Val _UINT32_(0x0)                                        /* (FUSES_FCR_ECCCTRL) ECC Writes with ECC Reads (NVMOP = Single Program Operation disabled)  */
#define   FUSES_FCR_ECCCTRL_ECCCTL_DYNAMIC_Val _UINT32_(0x1)                                        /* (FUSES_FCR_ECCCTRL) Dynamic Writes with Dynamic Reads  */
#define   FUSES_FCR_ECCCTRL_ECCCTL_ECC_Val    _UINT32_(0x2)                                        /* (FUSES_FCR_ECCCTRL) ECC Writes with Dynamic Reads (NVMOP = Single Program Operation disabled)  */
#define   FUSES_FCR_ECCCTRL_ECCCTL_DISABLE_Val _UINT32_(0x3)                                        /* (FUSES_FCR_ECCCTRL) Dynamic Writes with No Error Check Reads  */
#define FUSES_FCR_ECCCTRL_ECCCTL_STRICT       (FUSES_FCR_ECCCTRL_ECCCTL_STRICT_Val << FUSES_FCR_ECCCTRL_ECCCTL_Pos) /* (FUSES_FCR_ECCCTRL) ECC Writes with ECC Reads (NVMOP = Single Program Operation disabled) Position */
#define FUSES_FCR_ECCCTRL_ECCCTL_DYNAMIC      (FUSES_FCR_ECCCTRL_ECCCTL_DYNAMIC_Val << FUSES_FCR_ECCCTRL_ECCCTL_Pos) /* (FUSES_FCR_ECCCTRL) Dynamic Writes with Dynamic Reads Position */
#define FUSES_FCR_ECCCTRL_ECCCTL_ECC          (FUSES_FCR_ECCCTRL_ECCCTL_ECC_Val << FUSES_FCR_ECCCTRL_ECCCTL_Pos) /* (FUSES_FCR_ECCCTRL) ECC Writes with Dynamic Reads (NVMOP = Single Program Operation disabled) Position */
#define FUSES_FCR_ECCCTRL_ECCCTL_DISABLE      (FUSES_FCR_ECCCTRL_ECCCTL_DISABLE_Val << FUSES_FCR_ECCCTRL_ECCCTL_Pos) /* (FUSES_FCR_ECCCTRL) Dynamic Writes with No Error Check Reads Position */
#define FUSES_FCR_ECCCTRL_ECCUNLCK_Pos        _UINT32_(6)                                          /* (FUSES_FCR_ECCCTRL) NVM ECC Mode Control Unlock Position */
#define FUSES_FCR_ECCCTRL_ECCUNLCK_Msk        (_UINT32_(0x1) << FUSES_FCR_ECCCTRL_ECCUNLCK_Pos)    /* (FUSES_FCR_ECCCTRL) NVM ECC Mode Control Unlock Mask */
#define FUSES_FCR_ECCCTRL_ECCUNLCK(value)     (FUSES_FCR_ECCCTRL_ECCUNLCK_Msk & (_UINT32_(value) << FUSES_FCR_ECCCTRL_ECCUNLCK_Pos)) /* Assignment of value for ECCUNLCK in the FUSES_FCR_ECCCTRL register */
#define   FUSES_FCR_ECCCTRL_ECCUNLCK_LOCKED_Val _UINT32_(0x0)                                        /* (FUSES_FCR_ECCCTRL) ECCUNLCK and ECCCTL[1:0] cannot be written  */
#define   FUSES_FCR_ECCCTRL_ECCUNLCK_UNLOCKED_Val _UINT32_(0x1)                                        /* (FUSES_FCR_ECCCTRL) ECCUNLCK and ECCCTL[1:0] can be written  */
#define FUSES_FCR_ECCCTRL_ECCUNLCK_LOCKED     (FUSES_FCR_ECCCTRL_ECCUNLCK_LOCKED_Val << FUSES_FCR_ECCCTRL_ECCUNLCK_Pos) /* (FUSES_FCR_ECCCTRL) ECCUNLCK and ECCCTL[1:0] cannot be written Position */
#define FUSES_FCR_ECCCTRL_ECCUNLCK_UNLOCKED   (FUSES_FCR_ECCCTRL_ECCUNLCK_UNLOCKED_Val << FUSES_FCR_ECCCTRL_ECCUNLCK_Pos) /* (FUSES_FCR_ECCCTRL) ECCUNLCK and ECCCTL[1:0] can be written Position */
#define FUSES_FCR_ECCCTRL_SECCNT_Pos          _UINT32_(8)                                          /* (FUSES_FCR_ECCCTRL) Flash SEC Count Position */
#define FUSES_FCR_ECCCTRL_SECCNT_Msk          (_UINT32_(0xFF) << FUSES_FCR_ECCCTRL_SECCNT_Pos)     /* (FUSES_FCR_ECCCTRL) Flash SEC Count Mask */
#define FUSES_FCR_ECCCTRL_SECCNT(value)       (FUSES_FCR_ECCCTRL_SECCNT_Msk & (_UINT32_(value) << FUSES_FCR_ECCCTRL_SECCNT_Pos)) /* Assignment of value for SECCNT in the FUSES_FCR_ECCCTRL register */
#define FUSES_FCR_ECCCTRL_Msk                 _UINT32_(0x0000FF70)                                 /* (FUSES_FCR_ECCCTRL) Register Mask  */


/* -------- FUSES_SUPC_BRCFGUSMOR_BOR : (FUSES Offset: 0x888) (R/W 32) Boot Rom Configurable SMOR User CFG BOR register -------- */
#define FUSES_SUPC_BRCFGUSMOR_BOR_RESETVALUE  _UINT32_(0x00)                                       /*  (FUSES_SUPC_BRCFGUSMOR_BOR) Boot Rom Configurable SMOR User CFG BOR register  Reset Value */

#define FUSES_SUPC_BRCFGUSMOR_BOR_HYST_BOR_VDDIO_Pos _UINT32_(0)                                          /* (FUSES_SUPC_BRCFGUSMOR_BOR) Refer to pwr_smor_[nn]_v2 DOS document for details. Position */
#define FUSES_SUPC_BRCFGUSMOR_BOR_HYST_BOR_VDDIO_Msk (_UINT32_(0x1) << FUSES_SUPC_BRCFGUSMOR_BOR_HYST_BOR_VDDIO_Pos) /* (FUSES_SUPC_BRCFGUSMOR_BOR) Refer to pwr_smor_[nn]_v2 DOS document for details. Mask */
#define FUSES_SUPC_BRCFGUSMOR_BOR_HYST_BOR_VDDIO(value) (FUSES_SUPC_BRCFGUSMOR_BOR_HYST_BOR_VDDIO_Msk & (_UINT32_(value) << FUSES_SUPC_BRCFGUSMOR_BOR_HYST_BOR_VDDIO_Pos)) /* Assignment of value for HYST_BOR_VDDIO in the FUSES_SUPC_BRCFGUSMOR_BOR register */
#define   FUSES_SUPC_BRCFGUSMOR_BOR_HYST_BOR_VDDIO_LOW_Val _UINT32_(0x0)                                        /* (FUSES_SUPC_BRCFGUSMOR_BOR) Low Hysteresis (default)  */
#define   FUSES_SUPC_BRCFGUSMOR_BOR_HYST_BOR_VDDIO_HIGH_Val _UINT32_(0x1)                                        /* (FUSES_SUPC_BRCFGUSMOR_BOR) High Hysteresis  */
#define FUSES_SUPC_BRCFGUSMOR_BOR_HYST_BOR_VDDIO_LOW (FUSES_SUPC_BRCFGUSMOR_BOR_HYST_BOR_VDDIO_LOW_Val << FUSES_SUPC_BRCFGUSMOR_BOR_HYST_BOR_VDDIO_Pos) /* (FUSES_SUPC_BRCFGUSMOR_BOR) Low Hysteresis (default) Position */
#define FUSES_SUPC_BRCFGUSMOR_BOR_HYST_BOR_VDDIO_HIGH (FUSES_SUPC_BRCFGUSMOR_BOR_HYST_BOR_VDDIO_HIGH_Val << FUSES_SUPC_BRCFGUSMOR_BOR_HYST_BOR_VDDIO_Pos) /* (FUSES_SUPC_BRCFGUSMOR_BOR) High Hysteresis Position */
#define FUSES_SUPC_BRCFGUSMOR_BOR_BOR_TRIP_VDDIO_Pos _UINT32_(1)                                          /* (FUSES_SUPC_BRCFGUSMOR_BOR) Nominal BOR Trip, Refer to pwr_smor_[nn]_v2 DOS document for details. Position */
#define FUSES_SUPC_BRCFGUSMOR_BOR_BOR_TRIP_VDDIO_Msk (_UINT32_(0x3) << FUSES_SUPC_BRCFGUSMOR_BOR_BOR_TRIP_VDDIO_Pos) /* (FUSES_SUPC_BRCFGUSMOR_BOR) Nominal BOR Trip, Refer to pwr_smor_[nn]_v2 DOS document for details. Mask */
#define FUSES_SUPC_BRCFGUSMOR_BOR_BOR_TRIP_VDDIO(value) (FUSES_SUPC_BRCFGUSMOR_BOR_BOR_TRIP_VDDIO_Msk & (_UINT32_(value) << FUSES_SUPC_BRCFGUSMOR_BOR_BOR_TRIP_VDDIO_Pos)) /* Assignment of value for BOR_TRIP_VDDIO in the FUSES_SUPC_BRCFGUSMOR_BOR register */
#define   FUSES_SUPC_BRCFGUSMOR_BOR_BOR_TRIP_VDDIO_0_Val _UINT32_(0x0)                                        /* (FUSES_SUPC_BRCFGUSMOR_BOR) 1.68V (default)  */
#define   FUSES_SUPC_BRCFGUSMOR_BOR_BOR_TRIP_VDDIO_1_Val _UINT32_(0x1)                                        /* (FUSES_SUPC_BRCFGUSMOR_BOR) 2.2V  */
#define   FUSES_SUPC_BRCFGUSMOR_BOR_BOR_TRIP_VDDIO_2_Val _UINT32_(0x2)                                        /* (FUSES_SUPC_BRCFGUSMOR_BOR) 2.64V  */
#define   FUSES_SUPC_BRCFGUSMOR_BOR_BOR_TRIP_VDDIO_3_Val _UINT32_(0x3)                                        /* (FUSES_SUPC_BRCFGUSMOR_BOR) 2.93V  */
#define FUSES_SUPC_BRCFGUSMOR_BOR_BOR_TRIP_VDDIO_0 (FUSES_SUPC_BRCFGUSMOR_BOR_BOR_TRIP_VDDIO_0_Val << FUSES_SUPC_BRCFGUSMOR_BOR_BOR_TRIP_VDDIO_Pos) /* (FUSES_SUPC_BRCFGUSMOR_BOR) 1.68V (default) Position */
#define FUSES_SUPC_BRCFGUSMOR_BOR_BOR_TRIP_VDDIO_1 (FUSES_SUPC_BRCFGUSMOR_BOR_BOR_TRIP_VDDIO_1_Val << FUSES_SUPC_BRCFGUSMOR_BOR_BOR_TRIP_VDDIO_Pos) /* (FUSES_SUPC_BRCFGUSMOR_BOR) 2.2V Position */
#define FUSES_SUPC_BRCFGUSMOR_BOR_BOR_TRIP_VDDIO_2 (FUSES_SUPC_BRCFGUSMOR_BOR_BOR_TRIP_VDDIO_2_Val << FUSES_SUPC_BRCFGUSMOR_BOR_BOR_TRIP_VDDIO_Pos) /* (FUSES_SUPC_BRCFGUSMOR_BOR) 2.64V Position */
#define FUSES_SUPC_BRCFGUSMOR_BOR_BOR_TRIP_VDDIO_3 (FUSES_SUPC_BRCFGUSMOR_BOR_BOR_TRIP_VDDIO_3_Val << FUSES_SUPC_BRCFGUSMOR_BOR_BOR_TRIP_VDDIO_Pos) /* (FUSES_SUPC_BRCFGUSMOR_BOR) 2.93V Position */
#define FUSES_SUPC_BRCFGUSMOR_BOR_HYST_BOR_VDDREG_Pos _UINT32_(10)                                         /* (FUSES_SUPC_BRCFGUSMOR_BOR) Refer to pwr_smor_[nn]_v2 DOS document for details. Position */
#define FUSES_SUPC_BRCFGUSMOR_BOR_HYST_BOR_VDDREG_Msk (_UINT32_(0x1) << FUSES_SUPC_BRCFGUSMOR_BOR_HYST_BOR_VDDREG_Pos) /* (FUSES_SUPC_BRCFGUSMOR_BOR) Refer to pwr_smor_[nn]_v2 DOS document for details. Mask */
#define FUSES_SUPC_BRCFGUSMOR_BOR_HYST_BOR_VDDREG(value) (FUSES_SUPC_BRCFGUSMOR_BOR_HYST_BOR_VDDREG_Msk & (_UINT32_(value) << FUSES_SUPC_BRCFGUSMOR_BOR_HYST_BOR_VDDREG_Pos)) /* Assignment of value for HYST_BOR_VDDREG in the FUSES_SUPC_BRCFGUSMOR_BOR register */
#define   FUSES_SUPC_BRCFGUSMOR_BOR_HYST_BOR_VDDREG_LOW_Val _UINT32_(0x0)                                        /* (FUSES_SUPC_BRCFGUSMOR_BOR) Low Hysteresis (default)  */
#define   FUSES_SUPC_BRCFGUSMOR_BOR_HYST_BOR_VDDREG_HIGH_Val _UINT32_(0x1)                                        /* (FUSES_SUPC_BRCFGUSMOR_BOR) High Hysteresis  */
#define FUSES_SUPC_BRCFGUSMOR_BOR_HYST_BOR_VDDREG_LOW (FUSES_SUPC_BRCFGUSMOR_BOR_HYST_BOR_VDDREG_LOW_Val << FUSES_SUPC_BRCFGUSMOR_BOR_HYST_BOR_VDDREG_Pos) /* (FUSES_SUPC_BRCFGUSMOR_BOR) Low Hysteresis (default) Position */
#define FUSES_SUPC_BRCFGUSMOR_BOR_HYST_BOR_VDDREG_HIGH (FUSES_SUPC_BRCFGUSMOR_BOR_HYST_BOR_VDDREG_HIGH_Val << FUSES_SUPC_BRCFGUSMOR_BOR_HYST_BOR_VDDREG_Pos) /* (FUSES_SUPC_BRCFGUSMOR_BOR) High Hysteresis Position */
#define FUSES_SUPC_BRCFGUSMOR_BOR_Msk         _UINT32_(0x00000407)                                 /* (FUSES_SUPC_BRCFGUSMOR_BOR) Register Mask  */


/* -------- FUSES_SUPC_BRCFGUDSSMOR : (FUSES Offset: 0x890) (R/W 32) Boot Rom Configurable DSSMOR User CFG register -------- */
#define FUSES_SUPC_BRCFGUDSSMOR_RESETVALUE    _UINT32_(0x00)                                       /*  (FUSES_SUPC_BRCFGUDSSMOR) Boot Rom Configurable DSSMOR User CFG register  Reset Value */

#define FUSES_SUPC_BRCFGUDSSMOR_BOR_HYST_Pos  _UINT32_(0)                                          /* (FUSES_SUPC_BRCFGUDSSMOR) Refer to pwr_smor_ds_[nn]_v2 DOS document for details. Position */
#define FUSES_SUPC_BRCFGUDSSMOR_BOR_HYST_Msk  (_UINT32_(0x1) << FUSES_SUPC_BRCFGUDSSMOR_BOR_HYST_Pos) /* (FUSES_SUPC_BRCFGUDSSMOR) Refer to pwr_smor_ds_[nn]_v2 DOS document for details. Mask */
#define FUSES_SUPC_BRCFGUDSSMOR_BOR_HYST(value) (FUSES_SUPC_BRCFGUDSSMOR_BOR_HYST_Msk & (_UINT32_(value) << FUSES_SUPC_BRCFGUDSSMOR_BOR_HYST_Pos)) /* Assignment of value for BOR_HYST in the FUSES_SUPC_BRCFGUDSSMOR register */
#define   FUSES_SUPC_BRCFGUDSSMOR_BOR_HYST_LOW_Val _UINT32_(0x0)                                        /* (FUSES_SUPC_BRCFGUDSSMOR) Low Hysteresis (default)  */
#define   FUSES_SUPC_BRCFGUDSSMOR_BOR_HYST_HIGH_Val _UINT32_(0x1)                                        /* (FUSES_SUPC_BRCFGUDSSMOR) High Hysteresis  */
#define FUSES_SUPC_BRCFGUDSSMOR_BOR_HYST_LOW  (FUSES_SUPC_BRCFGUDSSMOR_BOR_HYST_LOW_Val << FUSES_SUPC_BRCFGUDSSMOR_BOR_HYST_Pos) /* (FUSES_SUPC_BRCFGUDSSMOR) Low Hysteresis (default) Position */
#define FUSES_SUPC_BRCFGUDSSMOR_BOR_HYST_HIGH (FUSES_SUPC_BRCFGUDSSMOR_BOR_HYST_HIGH_Val << FUSES_SUPC_BRCFGUDSSMOR_BOR_HYST_Pos) /* (FUSES_SUPC_BRCFGUDSSMOR) High Hysteresis Position */
#define FUSES_SUPC_BRCFGUDSSMOR_BOR_TRIP_Pos  _UINT32_(1)                                          /* (FUSES_SUPC_BRCFGUDSSMOR) Nominal BOR Trip, Refer to pwr_smor_ds_[nn]_v2 DOS document for details. Position */
#define FUSES_SUPC_BRCFGUDSSMOR_BOR_TRIP_Msk  (_UINT32_(0x3) << FUSES_SUPC_BRCFGUDSSMOR_BOR_TRIP_Pos) /* (FUSES_SUPC_BRCFGUDSSMOR) Nominal BOR Trip, Refer to pwr_smor_ds_[nn]_v2 DOS document for details. Mask */
#define FUSES_SUPC_BRCFGUDSSMOR_BOR_TRIP(value) (FUSES_SUPC_BRCFGUDSSMOR_BOR_TRIP_Msk & (_UINT32_(value) << FUSES_SUPC_BRCFGUDSSMOR_BOR_TRIP_Pos)) /* Assignment of value for BOR_TRIP in the FUSES_SUPC_BRCFGUDSSMOR register */
#define   FUSES_SUPC_BRCFGUDSSMOR_BOR_TRIP_0_Val _UINT32_(0x0)                                        /* (FUSES_SUPC_BRCFGUDSSMOR) 1.61V (default)  */
#define   FUSES_SUPC_BRCFGUDSSMOR_BOR_TRIP_1_Val _UINT32_(0x1)                                        /* (FUSES_SUPC_BRCFGUDSSMOR) 2.12V  */
#define   FUSES_SUPC_BRCFGUDSSMOR_BOR_TRIP_2_Val _UINT32_(0x2)                                        /* (FUSES_SUPC_BRCFGUDSSMOR) 2.55V  */
#define   FUSES_SUPC_BRCFGUDSSMOR_BOR_TRIP_3_Val _UINT32_(0x3)                                        /* (FUSES_SUPC_BRCFGUDSSMOR) 2.8V  */
#define FUSES_SUPC_BRCFGUDSSMOR_BOR_TRIP_0    (FUSES_SUPC_BRCFGUDSSMOR_BOR_TRIP_0_Val << FUSES_SUPC_BRCFGUDSSMOR_BOR_TRIP_Pos) /* (FUSES_SUPC_BRCFGUDSSMOR) 1.61V (default) Position */
#define FUSES_SUPC_BRCFGUDSSMOR_BOR_TRIP_1    (FUSES_SUPC_BRCFGUDSSMOR_BOR_TRIP_1_Val << FUSES_SUPC_BRCFGUDSSMOR_BOR_TRIP_Pos) /* (FUSES_SUPC_BRCFGUDSSMOR) 2.12V Position */
#define FUSES_SUPC_BRCFGUDSSMOR_BOR_TRIP_2    (FUSES_SUPC_BRCFGUDSSMOR_BOR_TRIP_2_Val << FUSES_SUPC_BRCFGUDSSMOR_BOR_TRIP_Pos) /* (FUSES_SUPC_BRCFGUDSSMOR) 2.55V Position */
#define FUSES_SUPC_BRCFGUDSSMOR_BOR_TRIP_3    (FUSES_SUPC_BRCFGUDSSMOR_BOR_TRIP_3_Val << FUSES_SUPC_BRCFGUDSSMOR_BOR_TRIP_Pos) /* (FUSES_SUPC_BRCFGUDSSMOR) 2.8V Position */
#define FUSES_SUPC_BRCFGUDSSMOR_Msk           _UINT32_(0x00000007)                                 /* (FUSES_SUPC_BRCFGUDSSMOR) Register Mask  */


/* -------- FUSES_SUPC_BRCFGUCP0 : (FUSES Offset: 0x894) (R/W 32) Boot Rom Configurable CHARGE PUMP User CFG register -------- */
#define FUSES_SUPC_BRCFGUCP0_RESETVALUE       _UINT32_(0x01)                                       /*  (FUSES_SUPC_BRCFGUCP0) Boot Rom Configurable CHARGE PUMP User CFG register  Reset Value */

#define FUSES_SUPC_BRCFGUCP0_CP_Pos           _UINT32_(0)                                          /* (FUSES_SUPC_BRCFGUCP0) Refer to vreg_chrg_pump_v4 DOS document for details. Position */
#define FUSES_SUPC_BRCFGUCP0_CP_Msk           (_UINT32_(0xF) << FUSES_SUPC_BRCFGUCP0_CP_Pos)       /* (FUSES_SUPC_BRCFGUCP0) Refer to vreg_chrg_pump_v4 DOS document for details. Mask */
#define FUSES_SUPC_BRCFGUCP0_CP(value)        (FUSES_SUPC_BRCFGUCP0_CP_Msk & (_UINT32_(value) << FUSES_SUPC_BRCFGUCP0_CP_Pos)) /* Assignment of value for CP in the FUSES_SUPC_BRCFGUCP0 register */
#define   FUSES_SUPC_BRCFGUCP0_CP_0_Val       _UINT32_(0x0)                                        /* (FUSES_SUPC_BRCFGUCP0) Clock gating trip optimized for low output threshold voltage (3.01V)  */
#define   FUSES_SUPC_BRCFGUCP0_CP_1_Val       _UINT32_(0x1)                                        /* (FUSES_SUPC_BRCFGUCP0) Clock gating trip optimized for high output threshold voltage (3.2V) (default)  */
#define FUSES_SUPC_BRCFGUCP0_CP_0             (FUSES_SUPC_BRCFGUCP0_CP_0_Val << FUSES_SUPC_BRCFGUCP0_CP_Pos) /* (FUSES_SUPC_BRCFGUCP0) Clock gating trip optimized for low output threshold voltage (3.01V) Position */
#define FUSES_SUPC_BRCFGUCP0_CP_1             (FUSES_SUPC_BRCFGUCP0_CP_1_Val << FUSES_SUPC_BRCFGUCP0_CP_Pos) /* (FUSES_SUPC_BRCFGUCP0) Clock gating trip optimized for high output threshold voltage (3.2V) (default) Position */
#define FUSES_SUPC_BRCFGUCP0_Msk              _UINT32_(0x0000000F)                                 /* (FUSES_SUPC_BRCFGUCP0) Register Mask  */


/* -------- FUSES_WDT_SETUP : (FUSES Offset: 0x898) (R/W 32)  -------- */
#define FUSES_WDT_SETUP_RESETVALUE            _UINT32_(0x00)                                       /*  (FUSES_WDT_SETUP)   Reset Value */

#define FUSES_WDT_SETUP_ENABLE_Pos            _UINT32_(1)                                          /* (FUSES_WDT_SETUP) Enable Position */
#define FUSES_WDT_SETUP_ENABLE_Msk            (_UINT32_(0x1) << FUSES_WDT_SETUP_ENABLE_Pos)        /* (FUSES_WDT_SETUP) Enable Mask */
#define FUSES_WDT_SETUP_ENABLE(value)         (FUSES_WDT_SETUP_ENABLE_Msk & (_UINT32_(value) << FUSES_WDT_SETUP_ENABLE_Pos)) /* Assignment of value for ENABLE in the FUSES_WDT_SETUP register */
#define FUSES_WDT_SETUP_WEN_Pos               _UINT32_(2)                                          /* (FUSES_WDT_SETUP) Watchdog Timer Window Mode Enable Position */
#define FUSES_WDT_SETUP_WEN_Msk               (_UINT32_(0x1) << FUSES_WDT_SETUP_WEN_Pos)           /* (FUSES_WDT_SETUP) Watchdog Timer Window Mode Enable Mask */
#define FUSES_WDT_SETUP_WEN(value)            (FUSES_WDT_SETUP_WEN_Msk & (_UINT32_(value) << FUSES_WDT_SETUP_WEN_Pos)) /* Assignment of value for WEN in the FUSES_WDT_SETUP register */
#define FUSES_WDT_SETUP_RUNSTDBY_Pos          _UINT32_(6)                                          /* (FUSES_WDT_SETUP) Run During Standby Position */
#define FUSES_WDT_SETUP_RUNSTDBY_Msk          (_UINT32_(0x1) << FUSES_WDT_SETUP_RUNSTDBY_Pos)      /* (FUSES_WDT_SETUP) Run During Standby Mask */
#define FUSES_WDT_SETUP_RUNSTDBY(value)       (FUSES_WDT_SETUP_RUNSTDBY_Msk & (_UINT32_(value) << FUSES_WDT_SETUP_RUNSTDBY_Pos)) /* Assignment of value for RUNSTDBY in the FUSES_WDT_SETUP register */
#define FUSES_WDT_SETUP_ALWAYSON_Pos          _UINT32_(7)                                          /* (FUSES_WDT_SETUP) Always-On Position */
#define FUSES_WDT_SETUP_ALWAYSON_Msk          (_UINT32_(0x1) << FUSES_WDT_SETUP_ALWAYSON_Pos)      /* (FUSES_WDT_SETUP) Always-On Mask */
#define FUSES_WDT_SETUP_ALWAYSON(value)       (FUSES_WDT_SETUP_ALWAYSON_Msk & (_UINT32_(value) << FUSES_WDT_SETUP_ALWAYSON_Pos)) /* Assignment of value for ALWAYSON in the FUSES_WDT_SETUP register */
#define FUSES_WDT_SETUP_PER_Pos               _UINT32_(8)                                          /* (FUSES_WDT_SETUP) Time-Out Period Position */
#define FUSES_WDT_SETUP_PER_Msk               (_UINT32_(0xF) << FUSES_WDT_SETUP_PER_Pos)           /* (FUSES_WDT_SETUP) Time-Out Period Mask */
#define FUSES_WDT_SETUP_PER(value)            (FUSES_WDT_SETUP_PER_Msk & (_UINT32_(value) << FUSES_WDT_SETUP_PER_Pos)) /* Assignment of value for PER in the FUSES_WDT_SETUP register */
#define   FUSES_WDT_SETUP_PER_CYC8_Val        _UINT32_(0x0)                                        /* (FUSES_WDT_SETUP) 8 clock cycles  */
#define   FUSES_WDT_SETUP_PER_CYC16_Val       _UINT32_(0x1)                                        /* (FUSES_WDT_SETUP) 16 clock cycles  */
#define   FUSES_WDT_SETUP_PER_CYC32_Val       _UINT32_(0x2)                                        /* (FUSES_WDT_SETUP) 32 clock cycles  */
#define   FUSES_WDT_SETUP_PER_CYC64_Val       _UINT32_(0x3)                                        /* (FUSES_WDT_SETUP) 64 clock cycles  */
#define   FUSES_WDT_SETUP_PER_CYC128_Val      _UINT32_(0x4)                                        /* (FUSES_WDT_SETUP) 128 clock cycles  */
#define   FUSES_WDT_SETUP_PER_CYC256_Val      _UINT32_(0x5)                                        /* (FUSES_WDT_SETUP) 256 clock cycles  */
#define   FUSES_WDT_SETUP_PER_CYC512_Val      _UINT32_(0x6)                                        /* (FUSES_WDT_SETUP) 512 clock cycles  */
#define   FUSES_WDT_SETUP_PER_CYC1024_Val     _UINT32_(0x7)                                        /* (FUSES_WDT_SETUP) 1024 clock cycles  */
#define   FUSES_WDT_SETUP_PER_CYC2048_Val     _UINT32_(0x8)                                        /* (FUSES_WDT_SETUP) 2048 clock cycles  */
#define   FUSES_WDT_SETUP_PER_CYC4096_Val     _UINT32_(0x9)                                        /* (FUSES_WDT_SETUP) 4096 clock cycles  */
#define   FUSES_WDT_SETUP_PER_CYC8192_Val     _UINT32_(0xA)                                        /* (FUSES_WDT_SETUP) 8192 clock cycles  */
#define   FUSES_WDT_SETUP_PER_CYC16384_Val    _UINT32_(0xB)                                        /* (FUSES_WDT_SETUP) 16384 clock cycles  */
#define FUSES_WDT_SETUP_PER_CYC8              (FUSES_WDT_SETUP_PER_CYC8_Val << FUSES_WDT_SETUP_PER_Pos) /* (FUSES_WDT_SETUP) 8 clock cycles Position */
#define FUSES_WDT_SETUP_PER_CYC16             (FUSES_WDT_SETUP_PER_CYC16_Val << FUSES_WDT_SETUP_PER_Pos) /* (FUSES_WDT_SETUP) 16 clock cycles Position */
#define FUSES_WDT_SETUP_PER_CYC32             (FUSES_WDT_SETUP_PER_CYC32_Val << FUSES_WDT_SETUP_PER_Pos) /* (FUSES_WDT_SETUP) 32 clock cycles Position */
#define FUSES_WDT_SETUP_PER_CYC64             (FUSES_WDT_SETUP_PER_CYC64_Val << FUSES_WDT_SETUP_PER_Pos) /* (FUSES_WDT_SETUP) 64 clock cycles Position */
#define FUSES_WDT_SETUP_PER_CYC128            (FUSES_WDT_SETUP_PER_CYC128_Val << FUSES_WDT_SETUP_PER_Pos) /* (FUSES_WDT_SETUP) 128 clock cycles Position */
#define FUSES_WDT_SETUP_PER_CYC256            (FUSES_WDT_SETUP_PER_CYC256_Val << FUSES_WDT_SETUP_PER_Pos) /* (FUSES_WDT_SETUP) 256 clock cycles Position */
#define FUSES_WDT_SETUP_PER_CYC512            (FUSES_WDT_SETUP_PER_CYC512_Val << FUSES_WDT_SETUP_PER_Pos) /* (FUSES_WDT_SETUP) 512 clock cycles Position */
#define FUSES_WDT_SETUP_PER_CYC1024           (FUSES_WDT_SETUP_PER_CYC1024_Val << FUSES_WDT_SETUP_PER_Pos) /* (FUSES_WDT_SETUP) 1024 clock cycles Position */
#define FUSES_WDT_SETUP_PER_CYC2048           (FUSES_WDT_SETUP_PER_CYC2048_Val << FUSES_WDT_SETUP_PER_Pos) /* (FUSES_WDT_SETUP) 2048 clock cycles Position */
#define FUSES_WDT_SETUP_PER_CYC4096           (FUSES_WDT_SETUP_PER_CYC4096_Val << FUSES_WDT_SETUP_PER_Pos) /* (FUSES_WDT_SETUP) 4096 clock cycles Position */
#define FUSES_WDT_SETUP_PER_CYC8192           (FUSES_WDT_SETUP_PER_CYC8192_Val << FUSES_WDT_SETUP_PER_Pos) /* (FUSES_WDT_SETUP) 8192 clock cycles Position */
#define FUSES_WDT_SETUP_PER_CYC16384          (FUSES_WDT_SETUP_PER_CYC16384_Val << FUSES_WDT_SETUP_PER_Pos) /* (FUSES_WDT_SETUP) 16384 clock cycles Position */
#define FUSES_WDT_SETUP_WINDOW_Pos            _UINT32_(12)                                         /* (FUSES_WDT_SETUP) Window Mode Time-Out Period Position */
#define FUSES_WDT_SETUP_WINDOW_Msk            (_UINT32_(0xF) << FUSES_WDT_SETUP_WINDOW_Pos)        /* (FUSES_WDT_SETUP) Window Mode Time-Out Period Mask */
#define FUSES_WDT_SETUP_WINDOW(value)         (FUSES_WDT_SETUP_WINDOW_Msk & (_UINT32_(value) << FUSES_WDT_SETUP_WINDOW_Pos)) /* Assignment of value for WINDOW in the FUSES_WDT_SETUP register */
#define   FUSES_WDT_SETUP_WINDOW_CYC8_Val     _UINT32_(0x0)                                        /* (FUSES_WDT_SETUP) 8 clock cycles  */
#define   FUSES_WDT_SETUP_WINDOW_CYC16_Val    _UINT32_(0x1)                                        /* (FUSES_WDT_SETUP) 16 clock cycles  */
#define   FUSES_WDT_SETUP_WINDOW_CYC32_Val    _UINT32_(0x2)                                        /* (FUSES_WDT_SETUP) 32 clock cycles  */
#define   FUSES_WDT_SETUP_WINDOW_CYC64_Val    _UINT32_(0x3)                                        /* (FUSES_WDT_SETUP) 64 clock cycles  */
#define   FUSES_WDT_SETUP_WINDOW_CYC128_Val   _UINT32_(0x4)                                        /* (FUSES_WDT_SETUP) 128 clock cycles  */
#define   FUSES_WDT_SETUP_WINDOW_CYC256_Val   _UINT32_(0x5)                                        /* (FUSES_WDT_SETUP) 256 clock cycles  */
#define   FUSES_WDT_SETUP_WINDOW_CYC512_Val   _UINT32_(0x6)                                        /* (FUSES_WDT_SETUP) 512 clock cycles  */
#define   FUSES_WDT_SETUP_WINDOW_CYC1024_Val  _UINT32_(0x7)                                        /* (FUSES_WDT_SETUP) 1024 clock cycles  */
#define   FUSES_WDT_SETUP_WINDOW_CYC2048_Val  _UINT32_(0x8)                                        /* (FUSES_WDT_SETUP) 2048 clock cycles  */
#define   FUSES_WDT_SETUP_WINDOW_CYC4096_Val  _UINT32_(0x9)                                        /* (FUSES_WDT_SETUP) 4096 clock cycles  */
#define   FUSES_WDT_SETUP_WINDOW_CYC8192_Val  _UINT32_(0xA)                                        /* (FUSES_WDT_SETUP) 8192 clock cycles  */
#define   FUSES_WDT_SETUP_WINDOW_CYC16384_Val _UINT32_(0xB)                                        /* (FUSES_WDT_SETUP) 16384 clock cycles  */
#define FUSES_WDT_SETUP_WINDOW_CYC8           (FUSES_WDT_SETUP_WINDOW_CYC8_Val << FUSES_WDT_SETUP_WINDOW_Pos) /* (FUSES_WDT_SETUP) 8 clock cycles Position */
#define FUSES_WDT_SETUP_WINDOW_CYC16          (FUSES_WDT_SETUP_WINDOW_CYC16_Val << FUSES_WDT_SETUP_WINDOW_Pos) /* (FUSES_WDT_SETUP) 16 clock cycles Position */
#define FUSES_WDT_SETUP_WINDOW_CYC32          (FUSES_WDT_SETUP_WINDOW_CYC32_Val << FUSES_WDT_SETUP_WINDOW_Pos) /* (FUSES_WDT_SETUP) 32 clock cycles Position */
#define FUSES_WDT_SETUP_WINDOW_CYC64          (FUSES_WDT_SETUP_WINDOW_CYC64_Val << FUSES_WDT_SETUP_WINDOW_Pos) /* (FUSES_WDT_SETUP) 64 clock cycles Position */
#define FUSES_WDT_SETUP_WINDOW_CYC128         (FUSES_WDT_SETUP_WINDOW_CYC128_Val << FUSES_WDT_SETUP_WINDOW_Pos) /* (FUSES_WDT_SETUP) 128 clock cycles Position */
#define FUSES_WDT_SETUP_WINDOW_CYC256         (FUSES_WDT_SETUP_WINDOW_CYC256_Val << FUSES_WDT_SETUP_WINDOW_Pos) /* (FUSES_WDT_SETUP) 256 clock cycles Position */
#define FUSES_WDT_SETUP_WINDOW_CYC512         (FUSES_WDT_SETUP_WINDOW_CYC512_Val << FUSES_WDT_SETUP_WINDOW_Pos) /* (FUSES_WDT_SETUP) 512 clock cycles Position */
#define FUSES_WDT_SETUP_WINDOW_CYC1024        (FUSES_WDT_SETUP_WINDOW_CYC1024_Val << FUSES_WDT_SETUP_WINDOW_Pos) /* (FUSES_WDT_SETUP) 1024 clock cycles Position */
#define FUSES_WDT_SETUP_WINDOW_CYC2048        (FUSES_WDT_SETUP_WINDOW_CYC2048_Val << FUSES_WDT_SETUP_WINDOW_Pos) /* (FUSES_WDT_SETUP) 2048 clock cycles Position */
#define FUSES_WDT_SETUP_WINDOW_CYC4096        (FUSES_WDT_SETUP_WINDOW_CYC4096_Val << FUSES_WDT_SETUP_WINDOW_Pos) /* (FUSES_WDT_SETUP) 4096 clock cycles Position */
#define FUSES_WDT_SETUP_WINDOW_CYC8192        (FUSES_WDT_SETUP_WINDOW_CYC8192_Val << FUSES_WDT_SETUP_WINDOW_Pos) /* (FUSES_WDT_SETUP) 8192 clock cycles Position */
#define FUSES_WDT_SETUP_WINDOW_CYC16384       (FUSES_WDT_SETUP_WINDOW_CYC16384_Val << FUSES_WDT_SETUP_WINDOW_Pos) /* (FUSES_WDT_SETUP) 16384 clock cycles Position */
#define FUSES_WDT_SETUP_EWOFFSET_Pos          _UINT32_(16)                                         /* (FUSES_WDT_SETUP) Early Warning Interrupt Time Offset Position */
#define FUSES_WDT_SETUP_EWOFFSET_Msk          (_UINT32_(0xF) << FUSES_WDT_SETUP_EWOFFSET_Pos)      /* (FUSES_WDT_SETUP) Early Warning Interrupt Time Offset Mask */
#define FUSES_WDT_SETUP_EWOFFSET(value)       (FUSES_WDT_SETUP_EWOFFSET_Msk & (_UINT32_(value) << FUSES_WDT_SETUP_EWOFFSET_Pos)) /* Assignment of value for EWOFFSET in the FUSES_WDT_SETUP register */
#define   FUSES_WDT_SETUP_EWOFFSET_CYC8_Val   _UINT32_(0x0)                                        /* (FUSES_WDT_SETUP) 8 clock cycles  */
#define   FUSES_WDT_SETUP_EWOFFSET_CYC16_Val  _UINT32_(0x1)                                        /* (FUSES_WDT_SETUP) 16 clock cycles  */
#define   FUSES_WDT_SETUP_EWOFFSET_CYC32_Val  _UINT32_(0x2)                                        /* (FUSES_WDT_SETUP) 32 clock cycles  */
#define   FUSES_WDT_SETUP_EWOFFSET_CYC64_Val  _UINT32_(0x3)                                        /* (FUSES_WDT_SETUP) 64 clock cycles  */
#define   FUSES_WDT_SETUP_EWOFFSET_CYC128_Val _UINT32_(0x4)                                        /* (FUSES_WDT_SETUP) 128 clock cycles  */
#define   FUSES_WDT_SETUP_EWOFFSET_CYC256_Val _UINT32_(0x5)                                        /* (FUSES_WDT_SETUP) 256 clock cycles  */
#define   FUSES_WDT_SETUP_EWOFFSET_CYC512_Val _UINT32_(0x6)                                        /* (FUSES_WDT_SETUP) 512 clock cycles  */
#define   FUSES_WDT_SETUP_EWOFFSET_CYC1024_Val _UINT32_(0x7)                                        /* (FUSES_WDT_SETUP) 1024 clock cycles  */
#define   FUSES_WDT_SETUP_EWOFFSET_CYC2048_Val _UINT32_(0x8)                                        /* (FUSES_WDT_SETUP) 2048 clock cycles  */
#define   FUSES_WDT_SETUP_EWOFFSET_CYC4096_Val _UINT32_(0x9)                                        /* (FUSES_WDT_SETUP) 4096 clock cycles  */
#define   FUSES_WDT_SETUP_EWOFFSET_CYC8192_Val _UINT32_(0xA)                                        /* (FUSES_WDT_SETUP) 8192 clock cycles  */
#define   FUSES_WDT_SETUP_EWOFFSET_CYC16384_Val _UINT32_(0xB)                                        /* (FUSES_WDT_SETUP) 16384 clock cycles  */
#define FUSES_WDT_SETUP_EWOFFSET_CYC8         (FUSES_WDT_SETUP_EWOFFSET_CYC8_Val << FUSES_WDT_SETUP_EWOFFSET_Pos) /* (FUSES_WDT_SETUP) 8 clock cycles Position */
#define FUSES_WDT_SETUP_EWOFFSET_CYC16        (FUSES_WDT_SETUP_EWOFFSET_CYC16_Val << FUSES_WDT_SETUP_EWOFFSET_Pos) /* (FUSES_WDT_SETUP) 16 clock cycles Position */
#define FUSES_WDT_SETUP_EWOFFSET_CYC32        (FUSES_WDT_SETUP_EWOFFSET_CYC32_Val << FUSES_WDT_SETUP_EWOFFSET_Pos) /* (FUSES_WDT_SETUP) 32 clock cycles Position */
#define FUSES_WDT_SETUP_EWOFFSET_CYC64        (FUSES_WDT_SETUP_EWOFFSET_CYC64_Val << FUSES_WDT_SETUP_EWOFFSET_Pos) /* (FUSES_WDT_SETUP) 64 clock cycles Position */
#define FUSES_WDT_SETUP_EWOFFSET_CYC128       (FUSES_WDT_SETUP_EWOFFSET_CYC128_Val << FUSES_WDT_SETUP_EWOFFSET_Pos) /* (FUSES_WDT_SETUP) 128 clock cycles Position */
#define FUSES_WDT_SETUP_EWOFFSET_CYC256       (FUSES_WDT_SETUP_EWOFFSET_CYC256_Val << FUSES_WDT_SETUP_EWOFFSET_Pos) /* (FUSES_WDT_SETUP) 256 clock cycles Position */
#define FUSES_WDT_SETUP_EWOFFSET_CYC512       (FUSES_WDT_SETUP_EWOFFSET_CYC512_Val << FUSES_WDT_SETUP_EWOFFSET_Pos) /* (FUSES_WDT_SETUP) 512 clock cycles Position */
#define FUSES_WDT_SETUP_EWOFFSET_CYC1024      (FUSES_WDT_SETUP_EWOFFSET_CYC1024_Val << FUSES_WDT_SETUP_EWOFFSET_Pos) /* (FUSES_WDT_SETUP) 1024 clock cycles Position */
#define FUSES_WDT_SETUP_EWOFFSET_CYC2048      (FUSES_WDT_SETUP_EWOFFSET_CYC2048_Val << FUSES_WDT_SETUP_EWOFFSET_Pos) /* (FUSES_WDT_SETUP) 2048 clock cycles Position */
#define FUSES_WDT_SETUP_EWOFFSET_CYC4096      (FUSES_WDT_SETUP_EWOFFSET_CYC4096_Val << FUSES_WDT_SETUP_EWOFFSET_Pos) /* (FUSES_WDT_SETUP) 4096 clock cycles Position */
#define FUSES_WDT_SETUP_EWOFFSET_CYC8192      (FUSES_WDT_SETUP_EWOFFSET_CYC8192_Val << FUSES_WDT_SETUP_EWOFFSET_Pos) /* (FUSES_WDT_SETUP) 8192 clock cycles Position */
#define FUSES_WDT_SETUP_EWOFFSET_CYC16384     (FUSES_WDT_SETUP_EWOFFSET_CYC16384_Val << FUSES_WDT_SETUP_EWOFFSET_Pos) /* (FUSES_WDT_SETUP) 16384 clock cycles Position */
#define FUSES_WDT_SETUP_Msk                   _UINT32_(0x000FFFC6)                                 /* (FUSES_WDT_SETUP) Register Mask  */


/* -------- FUSES_F1RR : (FUSES Offset: 0x00) ( R/ 32) PANEL 0 REDUNDANCY RECORD 1-0 Register -------- */
#define FUSES_F1RR_RR0ADDR_Pos                _UINT32_(0)                                          /* (FUSES_F1RR) Redundancy Replaced Page Address Position */
#define FUSES_F1RR_RR0ADDR_Msk                (_UINT32_(0x7F) << FUSES_F1RR_RR0ADDR_Pos)           /* (FUSES_F1RR) Redundancy Replaced Page Address Mask */
#define FUSES_F1RR_RR0ADDR(value)             (FUSES_F1RR_RR0ADDR_Msk & (_UINT32_(value) << FUSES_F1RR_RR0ADDR_Pos)) /* Assignment of value for RR0ADDR in the FUSES_F1RR register */
#define FUSES_F1RR_RR0DIS_Pos                 _UINT32_(15)                                         /* (FUSES_F1RR) Redundancy Record 0 enabled Position */
#define FUSES_F1RR_RR0DIS_Msk                 (_UINT32_(0x1) << FUSES_F1RR_RR0DIS_Pos)             /* (FUSES_F1RR) Redundancy Record 0 enabled Mask */
#define FUSES_F1RR_RR0DIS(value)              (FUSES_F1RR_RR0DIS_Msk & (_UINT32_(value) << FUSES_F1RR_RR0DIS_Pos)) /* Assignment of value for RR0DIS in the FUSES_F1RR register */
#define   FUSES_F1RR_RR0DIS_0_Val             _UINT32_(0x0)                                        /* (FUSES_F1RR) FCR maps the redundant page 0 into the address defined by RR0ADDR  */
#define   FUSES_F1RR_RR0DIS_1_Val             _UINT32_(0x1)                                        /* (FUSES_F1RR) Redundant page 0 mapping is Disabled  */
#define FUSES_F1RR_RR0DIS_0                   (FUSES_F1RR_RR0DIS_0_Val << FUSES_F1RR_RR0DIS_Pos)   /* (FUSES_F1RR) FCR maps the redundant page 0 into the address defined by RR0ADDR Position */
#define FUSES_F1RR_RR0DIS_1                   (FUSES_F1RR_RR0DIS_1_Val << FUSES_F1RR_RR0DIS_Pos)   /* (FUSES_F1RR) Redundant page 0 mapping is Disabled Position */
#define FUSES_F1RR_RR1ADDR_Pos                _UINT32_(16)                                         /* (FUSES_F1RR) Redundancy Replaced Page Address Position */
#define FUSES_F1RR_RR1ADDR_Msk                (_UINT32_(0x7F) << FUSES_F1RR_RR1ADDR_Pos)           /* (FUSES_F1RR) Redundancy Replaced Page Address Mask */
#define FUSES_F1RR_RR1ADDR(value)             (FUSES_F1RR_RR1ADDR_Msk & (_UINT32_(value) << FUSES_F1RR_RR1ADDR_Pos)) /* Assignment of value for RR1ADDR in the FUSES_F1RR register */
#define FUSES_F1RR_RR1DIS_Pos                 _UINT32_(31)                                         /* (FUSES_F1RR) Redundancy Record 1 enabled Position */
#define FUSES_F1RR_RR1DIS_Msk                 (_UINT32_(0x1) << FUSES_F1RR_RR1DIS_Pos)             /* (FUSES_F1RR) Redundancy Record 1 enabled Mask */
#define FUSES_F1RR_RR1DIS(value)              (FUSES_F1RR_RR1DIS_Msk & (_UINT32_(value) << FUSES_F1RR_RR1DIS_Pos)) /* Assignment of value for RR1DIS in the FUSES_F1RR register */
#define   FUSES_F1RR_RR1DIS_0_Val             _UINT32_(0x0)                                        /* (FUSES_F1RR) FCR maps the redundant page 1 into the address defined by RR1ADDR  */
#define   FUSES_F1RR_RR1DIS_1_Val             _UINT32_(0x1)                                        /* (FUSES_F1RR) Redundant page 1 mapping is Disabled  */
#define FUSES_F1RR_RR1DIS_0                   (FUSES_F1RR_RR1DIS_0_Val << FUSES_F1RR_RR1DIS_Pos)   /* (FUSES_F1RR) FCR maps the redundant page 1 into the address defined by RR1ADDR Position */
#define FUSES_F1RR_RR1DIS_1                   (FUSES_F1RR_RR1DIS_1_Val << FUSES_F1RR_RR1DIS_Pos)   /* (FUSES_F1RR) Redundant page 1 mapping is Disabled Position */
#define FUSES_F1RR_Msk                        _UINT32_(0x807F807F)                                 /* (FUSES_F1RR) Register Mask  */


/* -------- FUSES_FCCFG0 : (FUSES Offset: 0x80) ( R/ 32) Calibration Configuration 0 Register -------- */
#define FUSES_FCCFG0_CFG_SMOR0_Pos            _UINT32_(0)                                          /* (FUSES_FCCFG0) SMOR configuration bits Position */
#define FUSES_FCCFG0_CFG_SMOR0_Msk            (_UINT32_(0xFFFFFFFF) << FUSES_FCCFG0_CFG_SMOR0_Pos) /* (FUSES_FCCFG0) SMOR configuration bits Mask */
#define FUSES_FCCFG0_CFG_SMOR0(value)         (FUSES_FCCFG0_CFG_SMOR0_Msk & (_UINT32_(value) << FUSES_FCCFG0_CFG_SMOR0_Pos)) /* Assignment of value for CFG_SMOR0 in the FUSES_FCCFG0 register */
#define FUSES_FCCFG0_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (FUSES_FCCFG0) Register Mask  */


/* -------- FUSES_FCCFG1 : (FUSES Offset: 0x84) ( R/ 32) Calibration Configuration 1 Register -------- */
#define FUSES_FCCFG1_CFG_SMOR1_Pos            _UINT32_(0)                                          /* (FUSES_FCCFG1) SMOR configuration bits Position */
#define FUSES_FCCFG1_CFG_SMOR1_Msk            (_UINT32_(0xFFFFFFFF) << FUSES_FCCFG1_CFG_SMOR1_Pos) /* (FUSES_FCCFG1) SMOR configuration bits Mask */
#define FUSES_FCCFG1_CFG_SMOR1(value)         (FUSES_FCCFG1_CFG_SMOR1_Msk & (_UINT32_(value) << FUSES_FCCFG1_CFG_SMOR1_Pos)) /* Assignment of value for CFG_SMOR1 in the FUSES_FCCFG1 register */
#define FUSES_FCCFG1_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (FUSES_FCCFG1) Register Mask  */


/* -------- FUSES_FCCFG8 : (FUSES Offset: 0xA0) ( R/ 32) Calibration Configuration 8 Register -------- */
#define FUSES_FCCFG8_CFG_DS_SMOR_REF_Pos      _UINT32_(0)                                          /* (FUSES_FCCFG8) DSSMOR configuration bits Position */
#define FUSES_FCCFG8_CFG_DS_SMOR_REF_Msk      (_UINT32_(0xFFFF) << FUSES_FCCFG8_CFG_DS_SMOR_REF_Pos) /* (FUSES_FCCFG8) DSSMOR configuration bits Mask */
#define FUSES_FCCFG8_CFG_DS_SMOR_REF(value)   (FUSES_FCCFG8_CFG_DS_SMOR_REF_Msk & (_UINT32_(value) << FUSES_FCCFG8_CFG_DS_SMOR_REF_Pos)) /* Assignment of value for CFG_DS_SMOR_REF in the FUSES_FCCFG8 register */
#define FUSES_FCCFG8_CFG_DS_SMOR_CLK_Pos      _UINT32_(16)                                         /* (FUSES_FCCFG8) DSSMOR configuration bits Position */
#define FUSES_FCCFG8_CFG_DS_SMOR_CLK_Msk      (_UINT32_(0xFFFF) << FUSES_FCCFG8_CFG_DS_SMOR_CLK_Pos) /* (FUSES_FCCFG8) DSSMOR configuration bits Mask */
#define FUSES_FCCFG8_CFG_DS_SMOR_CLK(value)   (FUSES_FCCFG8_CFG_DS_SMOR_CLK_Msk & (_UINT32_(value) << FUSES_FCCFG8_CFG_DS_SMOR_CLK_Pos)) /* Assignment of value for CFG_DS_SMOR_CLK in the FUSES_FCCFG8 register */
#define FUSES_FCCFG8_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (FUSES_FCCFG8) Register Mask  */


/* -------- FUSES_FCCFG16 : (FUSES Offset: 0xC0) ( R/ 32) Calibration Configuration 16 Register -------- */
#define FUSES_FCCFG16_CFG_DFLL48M_Pos         _UINT32_(0)                                          /* (FUSES_FCCFG16) Comparator configuration bits Position */
#define FUSES_FCCFG16_CFG_DFLL48M_Msk         (_UINT32_(0xFFFFFFFF) << FUSES_FCCFG16_CFG_DFLL48M_Pos) /* (FUSES_FCCFG16) Comparator configuration bits Mask */
#define FUSES_FCCFG16_CFG_DFLL48M(value)      (FUSES_FCCFG16_CFG_DFLL48M_Msk & (_UINT32_(value) << FUSES_FCCFG16_CFG_DFLL48M_Pos)) /* Assignment of value for CFG_DFLL48M in the FUSES_FCCFG16 register */
#define FUSES_FCCFG16_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (FUSES_FCCFG16) Register Mask  */


/* -------- FUSES_FCCFG17 : (FUSES Offset: 0xC4) ( R/ 32) Calibration Configuration 17 Register -------- */
#define FUSES_FCCFG17_CFG_XTAL_HF_Pos         _UINT32_(0)                                          /* (FUSES_FCCFG17) Crystal Oscillator calibration configuration bits Position */
#define FUSES_FCCFG17_CFG_XTAL_HF_Msk         (_UINT32_(0xFFFF) << FUSES_FCCFG17_CFG_XTAL_HF_Pos)  /* (FUSES_FCCFG17) Crystal Oscillator calibration configuration bits Mask */
#define FUSES_FCCFG17_CFG_XTAL_HF(value)      (FUSES_FCCFG17_CFG_XTAL_HF_Msk & (_UINT32_(value) << FUSES_FCCFG17_CFG_XTAL_HF_Pos)) /* Assignment of value for CFG_XTAL_HF in the FUSES_FCCFG17 register */
#define FUSES_FCCFG17_Msk                     _UINT32_(0x0000FFFF)                                 /* (FUSES_FCCFG17) Register Mask  */


/* -------- FUSES_FCCFG24 : (FUSES Offset: 0xE0) ( R/ 32) Calibration Configuration 24 Register -------- */
#define FUSES_FCCFG24_CFG_CALVREGSW0_Pos      _UINT32_(0)                                          /* (FUSES_FCCFG24) 99 ma VREG Calibration configuration bits Position */
#define FUSES_FCCFG24_CFG_CALVREGSW0_Msk      (_UINT32_(0xFFFF) << FUSES_FCCFG24_CFG_CALVREGSW0_Pos) /* (FUSES_FCCFG24) 99 ma VREG Calibration configuration bits Mask */
#define FUSES_FCCFG24_CFG_CALVREGSW0(value)   (FUSES_FCCFG24_CFG_CALVREGSW0_Msk & (_UINT32_(value) << FUSES_FCCFG24_CFG_CALVREGSW0_Pos)) /* Assignment of value for CFG_CALVREGSW0 in the FUSES_FCCFG24 register */
#define FUSES_FCCFG24_Msk                     _UINT32_(0x0000FFFF)                                 /* (FUSES_FCCFG24) Register Mask  */


/* -------- FUSES_FCCFG27 : (FUSES Offset: 0xEC) ( R/ 32) Calibration Configuration 27 Register -------- */
#define FUSES_FCCFG27_CFG_CALVREGRAM_Pos      _UINT32_(16)                                         /* (FUSES_FCCFG27) 50 ma VREG Calibration configuration bits Position */
#define FUSES_FCCFG27_CFG_CALVREGRAM_Msk      (_UINT32_(0xFFFF) << FUSES_FCCFG27_CFG_CALVREGRAM_Pos) /* (FUSES_FCCFG27) 50 ma VREG Calibration configuration bits Mask */
#define FUSES_FCCFG27_CFG_CALVREGRAM(value)   (FUSES_FCCFG27_CFG_CALVREGRAM_Msk & (_UINT32_(value) << FUSES_FCCFG27_CFG_CALVREGRAM_Pos)) /* Assignment of value for CFG_CALVREGRAM in the FUSES_FCCFG27 register */
#define FUSES_FCCFG27_Msk                     _UINT32_(0xFFFF0000)                                 /* (FUSES_FCCFG27) Register Mask  */


/* -------- FUSES_FCCFG28 : (FUSES Offset: 0xF0) ( R/ 32) Calibration Configuration 28 Register -------- */
#define FUSES_FCCFG28_CALCP_Pos               _UINT32_(0)                                          /* (FUSES_FCCFG28) Charge Pump Calibration  configuration bits for all charge pumps Position */
#define FUSES_FCCFG28_CALCP_Msk               (_UINT32_(0xF) << FUSES_FCCFG28_CALCP_Pos)           /* (FUSES_FCCFG28) Charge Pump Calibration  configuration bits for all charge pumps Mask */
#define FUSES_FCCFG28_CALCP(value)            (FUSES_FCCFG28_CALCP_Msk & (_UINT32_(value) << FUSES_FCCFG28_CALCP_Pos)) /* Assignment of value for CALCP in the FUSES_FCCFG28 register */
#define FUSES_FCCFG28_CALSUPC_Pos             _UINT32_(8)                                          /* (FUSES_FCCFG28) RPMU / SUPC configuration bits Position */
#define FUSES_FCCFG28_CALSUPC_Msk             (_UINT32_(0xFF) << FUSES_FCCFG28_CALSUPC_Pos)        /* (FUSES_FCCFG28) RPMU / SUPC configuration bits Mask */
#define FUSES_FCCFG28_CALSUPC(value)          (FUSES_FCCFG28_CALSUPC_Msk & (_UINT32_(value) << FUSES_FCCFG28_CALSUPC_Pos)) /* Assignment of value for CALSUPC in the FUSES_FCCFG28 register */
#define FUSES_FCCFG28_Msk                     _UINT32_(0x0000FF0F)                                 /* (FUSES_FCCFG28) Register Mask  */


/* -------- FUSES_FCCFG29 : (FUSES Offset: 0xF4) ( R/ 32) Calibration Configuration 29 Register -------- */
#define FUSES_FCCFG29_CALUSERLDO_Pos          _UINT32_(0)                                          /* (FUSES_FCCFG29) User LDO Calibration  configuration bits Position */
#define FUSES_FCCFG29_CALUSERLDO_Msk          (_UINT32_(0xFF) << FUSES_FCCFG29_CALUSERLDO_Pos)     /* (FUSES_FCCFG29) User LDO Calibration  configuration bits Mask */
#define FUSES_FCCFG29_CALUSERLDO(value)       (FUSES_FCCFG29_CALUSERLDO_Msk & (_UINT32_(value) << FUSES_FCCFG29_CALUSERLDO_Pos)) /* Assignment of value for CALUSERLDO in the FUSES_FCCFG29 register */
#define FUSES_FCCFG29_Msk                     _UINT32_(0x000000FF)                                 /* (FUSES_FCCFG29) Register Mask  */


/* -------- FUSES_FCCFG32 : (FUSES Offset: 0x100) ( R/ 32) DSU Device Configuration 0 Register (DEVID) -------- */
#define FUSES_FCCFG32_PFM_SZ_Pos              _UINT32_(0)                                          /* (FUSES_FCCFG32) Program Flash Memory (PFM) Size on Device Position */
#define FUSES_FCCFG32_PFM_SZ_Msk              (_UINT32_(0xF) << FUSES_FCCFG32_PFM_SZ_Pos)          /* (FUSES_FCCFG32) Program Flash Memory (PFM) Size on Device Mask */
#define FUSES_FCCFG32_PFM_SZ(value)           (FUSES_FCCFG32_PFM_SZ_Msk & (_UINT32_(value) << FUSES_FCCFG32_PFM_SZ_Pos)) /* Assignment of value for PFM_SZ in the FUSES_FCCFG32 register */
#define   FUSES_FCCFG32_PFM_SZ_6_Val          _UINT32_(0x6)                                        /* (FUSES_FCCFG32) 512KB  */
#define FUSES_FCCFG32_PFM_SZ_6                (FUSES_FCCFG32_PFM_SZ_6_Val << FUSES_FCCFG32_PFM_SZ_Pos) /* (FUSES_FCCFG32) 512KB Position */
#define FUSES_FCCFG32_DRM_SZ_Pos              _UINT32_(8)                                          /* (FUSES_FCCFG32) Data Ram Memory (DRM) Size on Device Position */
#define FUSES_FCCFG32_DRM_SZ_Msk              (_UINT32_(0xFF) << FUSES_FCCFG32_DRM_SZ_Pos)         /* (FUSES_FCCFG32) Data Ram Memory (DRM) Size on Device Mask */
#define FUSES_FCCFG32_DRM_SZ(value)           (FUSES_FCCFG32_DRM_SZ_Msk & (_UINT32_(value) << FUSES_FCCFG32_DRM_SZ_Pos)) /* Assignment of value for DRM_SZ in the FUSES_FCCFG32 register */
#define   FUSES_FCCFG32_DRM_SZ_0_Val          _UINT32_(0x0)                                        /* (FUSES_FCCFG32) Rsvd  */
#define   FUSES_FCCFG32_DRM_SZ_1_Val          _UINT32_(0x1)                                        /* (FUSES_FCCFG32) 128KB  */
#define FUSES_FCCFG32_DRM_SZ_0                (FUSES_FCCFG32_DRM_SZ_0_Val << FUSES_FCCFG32_DRM_SZ_Pos) /* (FUSES_FCCFG32) Rsvd Position */
#define FUSES_FCCFG32_DRM_SZ_1                (FUSES_FCCFG32_DRM_SZ_1_Val << FUSES_FCCFG32_DRM_SZ_Pos) /* (FUSES_FCCFG32) 128KB Position */
#define FUSES_FCCFG32_FPACKAGE_Pos            _UINT32_(16)                                         /* (FUSES_FCCFG32) Number of Pins present on the Package Position */
#define FUSES_FCCFG32_FPACKAGE_Msk            (_UINT32_(0xF) << FUSES_FCCFG32_FPACKAGE_Pos)        /* (FUSES_FCCFG32) Number of Pins present on the Package Mask */
#define FUSES_FCCFG32_FPACKAGE(value)         (FUSES_FCCFG32_FPACKAGE_Msk & (_UINT32_(value) << FUSES_FCCFG32_FPACKAGE_Pos)) /* Assignment of value for FPACKAGE in the FUSES_FCCFG32 register */
#define   FUSES_FCCFG32_FPACKAGE_5_Val        _UINT32_(0x5)                                        /* (FUSES_FCCFG32) 48 pins  */
#define   FUSES_FCCFG32_FPACKAGE_6_Val        _UINT32_(0x6)                                        /* (FUSES_FCCFG32) 64 pins  */
#define   FUSES_FCCFG32_FPACKAGE_7_Val        _UINT32_(0x7)                                        /* (FUSES_FCCFG32) Rsvd  */
#define   FUSES_FCCFG32_FPACKAGE_8_Val        _UINT32_(0x8)                                        /* (FUSES_FCCFG32) 100 pins  */
#define FUSES_FCCFG32_FPACKAGE_5              (FUSES_FCCFG32_FPACKAGE_5_Val << FUSES_FCCFG32_FPACKAGE_Pos) /* (FUSES_FCCFG32) 48 pins Position */
#define FUSES_FCCFG32_FPACKAGE_6              (FUSES_FCCFG32_FPACKAGE_6_Val << FUSES_FCCFG32_FPACKAGE_Pos) /* (FUSES_FCCFG32) 64 pins Position */
#define FUSES_FCCFG32_FPACKAGE_7              (FUSES_FCCFG32_FPACKAGE_7_Val << FUSES_FCCFG32_FPACKAGE_Pos) /* (FUSES_FCCFG32) Rsvd Position */
#define FUSES_FCCFG32_FPACKAGE_8              (FUSES_FCCFG32_FPACKAGE_8_Val << FUSES_FCCFG32_FPACKAGE_Pos) /* (FUSES_FCCFG32) 100 pins Position */
#define FUSES_FCCFG32_DEVSEL_Pos              _UINT32_(24)                                         /* (FUSES_FCCFG32) Device Variant Configuration Position */
#define FUSES_FCCFG32_DEVSEL_Msk              (_UINT32_(0xFF) << FUSES_FCCFG32_DEVSEL_Pos)         /* (FUSES_FCCFG32) Device Variant Configuration Mask */
#define FUSES_FCCFG32_DEVSEL(value)           (FUSES_FCCFG32_DEVSEL_Msk & (_UINT32_(value) << FUSES_FCCFG32_DEVSEL_Pos)) /* Assignment of value for DEVSEL in the FUSES_FCCFG32 register */
#define FUSES_FCCFG32_Msk                     _UINT32_(0xFF0FFF0F)                                 /* (FUSES_FCCFG32) Register Mask  */


/* -------- FUSES_FCCFG33 : (FUSES Offset: 0x104) ( R/ 32) DSU Device Configuration 1 Register -------- */
#define FUSES_FCCFG33_ME_HSM_Pos              _UINT32_(7)                                          /* (FUSES_FCCFG33) Module enables for Variant configuration Position */
#define FUSES_FCCFG33_ME_HSM_Msk              (_UINT32_(0x1) << FUSES_FCCFG33_ME_HSM_Pos)          /* (FUSES_FCCFG33) Module enables for Variant configuration Mask */
#define FUSES_FCCFG33_ME_HSM(value)           (FUSES_FCCFG33_ME_HSM_Msk & (_UINT32_(value) << FUSES_FCCFG33_ME_HSM_Pos)) /* Assignment of value for ME_HSM in the FUSES_FCCFG33 register */
#define   FUSES_FCCFG33_ME_HSM_0_Val          _UINT32_(0x0)                                        /* (FUSES_FCCFG33) Module is Disabled  */
#define   FUSES_FCCFG33_ME_HSM_1_Val          _UINT32_(0x1)                                        /* (FUSES_FCCFG33) Module is Enabled  */
#define FUSES_FCCFG33_ME_HSM_0                (FUSES_FCCFG33_ME_HSM_0_Val << FUSES_FCCFG33_ME_HSM_Pos) /* (FUSES_FCCFG33) Module is Disabled Position */
#define FUSES_FCCFG33_ME_HSM_1                (FUSES_FCCFG33_ME_HSM_1_Val << FUSES_FCCFG33_ME_HSM_Pos) /* (FUSES_FCCFG33) Module is Enabled Position */
#define FUSES_FCCFG33_ME_TCC0_Pos             _UINT32_(8)                                          /* (FUSES_FCCFG33) Module enables for Variant configuration Position */
#define FUSES_FCCFG33_ME_TCC0_Msk             (_UINT32_(0x1) << FUSES_FCCFG33_ME_TCC0_Pos)         /* (FUSES_FCCFG33) Module enables for Variant configuration Mask */
#define FUSES_FCCFG33_ME_TCC0(value)          (FUSES_FCCFG33_ME_TCC0_Msk & (_UINT32_(value) << FUSES_FCCFG33_ME_TCC0_Pos)) /* Assignment of value for ME_TCC0 in the FUSES_FCCFG33 register */
#define   FUSES_FCCFG33_ME_TCC0_0_Val         _UINT32_(0x0)                                        /* (FUSES_FCCFG33) Module is Disabled  */
#define   FUSES_FCCFG33_ME_TCC0_1_Val         _UINT32_(0x1)                                        /* (FUSES_FCCFG33) Module is Enabled  */
#define FUSES_FCCFG33_ME_TCC0_0               (FUSES_FCCFG33_ME_TCC0_0_Val << FUSES_FCCFG33_ME_TCC0_Pos) /* (FUSES_FCCFG33) Module is Disabled Position */
#define FUSES_FCCFG33_ME_TCC0_1               (FUSES_FCCFG33_ME_TCC0_1_Val << FUSES_FCCFG33_ME_TCC0_Pos) /* (FUSES_FCCFG33) Module is Enabled Position */
#define FUSES_FCCFG33_ME_TCC1_Pos             _UINT32_(9)                                          /* (FUSES_FCCFG33) Module enables for Variant configuration Position */
#define FUSES_FCCFG33_ME_TCC1_Msk             (_UINT32_(0x1) << FUSES_FCCFG33_ME_TCC1_Pos)         /* (FUSES_FCCFG33) Module enables for Variant configuration Mask */
#define FUSES_FCCFG33_ME_TCC1(value)          (FUSES_FCCFG33_ME_TCC1_Msk & (_UINT32_(value) << FUSES_FCCFG33_ME_TCC1_Pos)) /* Assignment of value for ME_TCC1 in the FUSES_FCCFG33 register */
#define   FUSES_FCCFG33_ME_TCC1_0_Val         _UINT32_(0x0)                                        /* (FUSES_FCCFG33) Module is Disabled  */
#define   FUSES_FCCFG33_ME_TCC1_1_Val         _UINT32_(0x1)                                        /* (FUSES_FCCFG33) Module is Enabled  */
#define FUSES_FCCFG33_ME_TCC1_0               (FUSES_FCCFG33_ME_TCC1_0_Val << FUSES_FCCFG33_ME_TCC1_Pos) /* (FUSES_FCCFG33) Module is Disabled Position */
#define FUSES_FCCFG33_ME_TCC1_1               (FUSES_FCCFG33_ME_TCC1_1_Val << FUSES_FCCFG33_ME_TCC1_Pos) /* (FUSES_FCCFG33) Module is Enabled Position */
#define FUSES_FCCFG33_ME_TCC2_Pos             _UINT32_(10)                                         /* (FUSES_FCCFG33) Module enables for Variant configuration Position */
#define FUSES_FCCFG33_ME_TCC2_Msk             (_UINT32_(0x1) << FUSES_FCCFG33_ME_TCC2_Pos)         /* (FUSES_FCCFG33) Module enables for Variant configuration Mask */
#define FUSES_FCCFG33_ME_TCC2(value)          (FUSES_FCCFG33_ME_TCC2_Msk & (_UINT32_(value) << FUSES_FCCFG33_ME_TCC2_Pos)) /* Assignment of value for ME_TCC2 in the FUSES_FCCFG33 register */
#define   FUSES_FCCFG33_ME_TCC2_0_Val         _UINT32_(0x0)                                        /* (FUSES_FCCFG33) Module is Disabled  */
#define   FUSES_FCCFG33_ME_TCC2_1_Val         _UINT32_(0x1)                                        /* (FUSES_FCCFG33) Module is Enabled  */
#define FUSES_FCCFG33_ME_TCC2_0               (FUSES_FCCFG33_ME_TCC2_0_Val << FUSES_FCCFG33_ME_TCC2_Pos) /* (FUSES_FCCFG33) Module is Disabled Position */
#define FUSES_FCCFG33_ME_TCC2_1               (FUSES_FCCFG33_ME_TCC2_1_Val << FUSES_FCCFG33_ME_TCC2_Pos) /* (FUSES_FCCFG33) Module is Enabled Position */
#define FUSES_FCCFG33_ME_TCC3_Pos             _UINT32_(11)                                         /* (FUSES_FCCFG33) Module enables for Variant configuration Position */
#define FUSES_FCCFG33_ME_TCC3_Msk             (_UINT32_(0x1) << FUSES_FCCFG33_ME_TCC3_Pos)         /* (FUSES_FCCFG33) Module enables for Variant configuration Mask */
#define FUSES_FCCFG33_ME_TCC3(value)          (FUSES_FCCFG33_ME_TCC3_Msk & (_UINT32_(value) << FUSES_FCCFG33_ME_TCC3_Pos)) /* Assignment of value for ME_TCC3 in the FUSES_FCCFG33 register */
#define   FUSES_FCCFG33_ME_TCC3_0_Val         _UINT32_(0x0)                                        /* (FUSES_FCCFG33) Module is Disabled  */
#define   FUSES_FCCFG33_ME_TCC3_1_Val         _UINT32_(0x1)                                        /* (FUSES_FCCFG33) Module is Enabled  */
#define FUSES_FCCFG33_ME_TCC3_0               (FUSES_FCCFG33_ME_TCC3_0_Val << FUSES_FCCFG33_ME_TCC3_Pos) /* (FUSES_FCCFG33) Module is Disabled Position */
#define FUSES_FCCFG33_ME_TCC3_1               (FUSES_FCCFG33_ME_TCC3_1_Val << FUSES_FCCFG33_ME_TCC3_Pos) /* (FUSES_FCCFG33) Module is Enabled Position */
#define FUSES_FCCFG33_ME_TCC4_Pos             _UINT32_(12)                                         /* (FUSES_FCCFG33) Module enables for Variant configuration Position */
#define FUSES_FCCFG33_ME_TCC4_Msk             (_UINT32_(0x1) << FUSES_FCCFG33_ME_TCC4_Pos)         /* (FUSES_FCCFG33) Module enables for Variant configuration Mask */
#define FUSES_FCCFG33_ME_TCC4(value)          (FUSES_FCCFG33_ME_TCC4_Msk & (_UINT32_(value) << FUSES_FCCFG33_ME_TCC4_Pos)) /* Assignment of value for ME_TCC4 in the FUSES_FCCFG33 register */
#define   FUSES_FCCFG33_ME_TCC4_0_Val         _UINT32_(0x0)                                        /* (FUSES_FCCFG33) Module is Disabled  */
#define   FUSES_FCCFG33_ME_TCC4_1_Val         _UINT32_(0x1)                                        /* (FUSES_FCCFG33) Module is Enabled  */
#define FUSES_FCCFG33_ME_TCC4_0               (FUSES_FCCFG33_ME_TCC4_0_Val << FUSES_FCCFG33_ME_TCC4_Pos) /* (FUSES_FCCFG33) Module is Disabled Position */
#define FUSES_FCCFG33_ME_TCC4_1               (FUSES_FCCFG33_ME_TCC4_1_Val << FUSES_FCCFG33_ME_TCC4_Pos) /* (FUSES_FCCFG33) Module is Enabled Position */
#define FUSES_FCCFG33_ME_TCC5_Pos             _UINT32_(13)                                         /* (FUSES_FCCFG33) Module enables for Variant configuration Position */
#define FUSES_FCCFG33_ME_TCC5_Msk             (_UINT32_(0x1) << FUSES_FCCFG33_ME_TCC5_Pos)         /* (FUSES_FCCFG33) Module enables for Variant configuration Mask */
#define FUSES_FCCFG33_ME_TCC5(value)          (FUSES_FCCFG33_ME_TCC5_Msk & (_UINT32_(value) << FUSES_FCCFG33_ME_TCC5_Pos)) /* Assignment of value for ME_TCC5 in the FUSES_FCCFG33 register */
#define   FUSES_FCCFG33_ME_TCC5_0_Val         _UINT32_(0x0)                                        /* (FUSES_FCCFG33) Module is Disabled  */
#define   FUSES_FCCFG33_ME_TCC5_1_Val         _UINT32_(0x1)                                        /* (FUSES_FCCFG33) Module is Enabled  */
#define FUSES_FCCFG33_ME_TCC5_0               (FUSES_FCCFG33_ME_TCC5_0_Val << FUSES_FCCFG33_ME_TCC5_Pos) /* (FUSES_FCCFG33) Module is Disabled Position */
#define FUSES_FCCFG33_ME_TCC5_1               (FUSES_FCCFG33_ME_TCC5_1_Val << FUSES_FCCFG33_ME_TCC5_Pos) /* (FUSES_FCCFG33) Module is Enabled Position */
#define FUSES_FCCFG33_ME_TCC6_Pos             _UINT32_(14)                                         /* (FUSES_FCCFG33) Module enables for Variant configuration Position */
#define FUSES_FCCFG33_ME_TCC6_Msk             (_UINT32_(0x1) << FUSES_FCCFG33_ME_TCC6_Pos)         /* (FUSES_FCCFG33) Module enables for Variant configuration Mask */
#define FUSES_FCCFG33_ME_TCC6(value)          (FUSES_FCCFG33_ME_TCC6_Msk & (_UINT32_(value) << FUSES_FCCFG33_ME_TCC6_Pos)) /* Assignment of value for ME_TCC6 in the FUSES_FCCFG33 register */
#define   FUSES_FCCFG33_ME_TCC6_0_Val         _UINT32_(0x0)                                        /* (FUSES_FCCFG33) Module is Disabled  */
#define   FUSES_FCCFG33_ME_TCC6_1_Val         _UINT32_(0x1)                                        /* (FUSES_FCCFG33) Module is Enabled  */
#define FUSES_FCCFG33_ME_TCC6_0               (FUSES_FCCFG33_ME_TCC6_0_Val << FUSES_FCCFG33_ME_TCC6_Pos) /* (FUSES_FCCFG33) Module is Disabled Position */
#define FUSES_FCCFG33_ME_TCC6_1               (FUSES_FCCFG33_ME_TCC6_1_Val << FUSES_FCCFG33_ME_TCC6_Pos) /* (FUSES_FCCFG33) Module is Enabled Position */
#define FUSES_FCCFG33_ME_SERCOM0_Pos          _UINT32_(18)                                         /* (FUSES_FCCFG33) Module enables for Variant configuration Position */
#define FUSES_FCCFG33_ME_SERCOM0_Msk          (_UINT32_(0x1) << FUSES_FCCFG33_ME_SERCOM0_Pos)      /* (FUSES_FCCFG33) Module enables for Variant configuration Mask */
#define FUSES_FCCFG33_ME_SERCOM0(value)       (FUSES_FCCFG33_ME_SERCOM0_Msk & (_UINT32_(value) << FUSES_FCCFG33_ME_SERCOM0_Pos)) /* Assignment of value for ME_SERCOM0 in the FUSES_FCCFG33 register */
#define   FUSES_FCCFG33_ME_SERCOM0_0_Val      _UINT32_(0x0)                                        /* (FUSES_FCCFG33) Module is Disabled  */
#define   FUSES_FCCFG33_ME_SERCOM0_1_Val      _UINT32_(0x1)                                        /* (FUSES_FCCFG33) Module is Enabled  */
#define FUSES_FCCFG33_ME_SERCOM0_0            (FUSES_FCCFG33_ME_SERCOM0_0_Val << FUSES_FCCFG33_ME_SERCOM0_Pos) /* (FUSES_FCCFG33) Module is Disabled Position */
#define FUSES_FCCFG33_ME_SERCOM0_1            (FUSES_FCCFG33_ME_SERCOM0_1_Val << FUSES_FCCFG33_ME_SERCOM0_Pos) /* (FUSES_FCCFG33) Module is Enabled Position */
#define FUSES_FCCFG33_ME_SERCOM1_Pos          _UINT32_(19)                                         /* (FUSES_FCCFG33) Module enables for Variant configuration Position */
#define FUSES_FCCFG33_ME_SERCOM1_Msk          (_UINT32_(0x1) << FUSES_FCCFG33_ME_SERCOM1_Pos)      /* (FUSES_FCCFG33) Module enables for Variant configuration Mask */
#define FUSES_FCCFG33_ME_SERCOM1(value)       (FUSES_FCCFG33_ME_SERCOM1_Msk & (_UINT32_(value) << FUSES_FCCFG33_ME_SERCOM1_Pos)) /* Assignment of value for ME_SERCOM1 in the FUSES_FCCFG33 register */
#define   FUSES_FCCFG33_ME_SERCOM1_0_Val      _UINT32_(0x0)                                        /* (FUSES_FCCFG33) Module is Disabled  */
#define   FUSES_FCCFG33_ME_SERCOM1_1_Val      _UINT32_(0x1)                                        /* (FUSES_FCCFG33) Module is Enabled  */
#define FUSES_FCCFG33_ME_SERCOM1_0            (FUSES_FCCFG33_ME_SERCOM1_0_Val << FUSES_FCCFG33_ME_SERCOM1_Pos) /* (FUSES_FCCFG33) Module is Disabled Position */
#define FUSES_FCCFG33_ME_SERCOM1_1            (FUSES_FCCFG33_ME_SERCOM1_1_Val << FUSES_FCCFG33_ME_SERCOM1_Pos) /* (FUSES_FCCFG33) Module is Enabled Position */
#define FUSES_FCCFG33_ME_SERCOM2_Pos          _UINT32_(20)                                         /* (FUSES_FCCFG33) Module enables for Variant configuration Position */
#define FUSES_FCCFG33_ME_SERCOM2_Msk          (_UINT32_(0x1) << FUSES_FCCFG33_ME_SERCOM2_Pos)      /* (FUSES_FCCFG33) Module enables for Variant configuration Mask */
#define FUSES_FCCFG33_ME_SERCOM2(value)       (FUSES_FCCFG33_ME_SERCOM2_Msk & (_UINT32_(value) << FUSES_FCCFG33_ME_SERCOM2_Pos)) /* Assignment of value for ME_SERCOM2 in the FUSES_FCCFG33 register */
#define   FUSES_FCCFG33_ME_SERCOM2_0_Val      _UINT32_(0x0)                                        /* (FUSES_FCCFG33) Module is Disabled  */
#define   FUSES_FCCFG33_ME_SERCOM2_1_Val      _UINT32_(0x1)                                        /* (FUSES_FCCFG33) Module is Enabled  */
#define FUSES_FCCFG33_ME_SERCOM2_0            (FUSES_FCCFG33_ME_SERCOM2_0_Val << FUSES_FCCFG33_ME_SERCOM2_Pos) /* (FUSES_FCCFG33) Module is Disabled Position */
#define FUSES_FCCFG33_ME_SERCOM2_1            (FUSES_FCCFG33_ME_SERCOM2_1_Val << FUSES_FCCFG33_ME_SERCOM2_Pos) /* (FUSES_FCCFG33) Module is Enabled Position */
#define FUSES_FCCFG33_ME_SERCOM3_Pos          _UINT32_(21)                                         /* (FUSES_FCCFG33) Module enables for Variant configuration Position */
#define FUSES_FCCFG33_ME_SERCOM3_Msk          (_UINT32_(0x1) << FUSES_FCCFG33_ME_SERCOM3_Pos)      /* (FUSES_FCCFG33) Module enables for Variant configuration Mask */
#define FUSES_FCCFG33_ME_SERCOM3(value)       (FUSES_FCCFG33_ME_SERCOM3_Msk & (_UINT32_(value) << FUSES_FCCFG33_ME_SERCOM3_Pos)) /* Assignment of value for ME_SERCOM3 in the FUSES_FCCFG33 register */
#define   FUSES_FCCFG33_ME_SERCOM3_0_Val      _UINT32_(0x0)                                        /* (FUSES_FCCFG33) Module is Disabled  */
#define   FUSES_FCCFG33_ME_SERCOM3_1_Val      _UINT32_(0x1)                                        /* (FUSES_FCCFG33) Module is Enabled  */
#define FUSES_FCCFG33_ME_SERCOM3_0            (FUSES_FCCFG33_ME_SERCOM3_0_Val << FUSES_FCCFG33_ME_SERCOM3_Pos) /* (FUSES_FCCFG33) Module is Disabled Position */
#define FUSES_FCCFG33_ME_SERCOM3_1            (FUSES_FCCFG33_ME_SERCOM3_1_Val << FUSES_FCCFG33_ME_SERCOM3_Pos) /* (FUSES_FCCFG33) Module is Enabled Position */
#define FUSES_FCCFG33_ME_SERCOM4_Pos          _UINT32_(22)                                         /* (FUSES_FCCFG33) Module enables for Variant configuration Position */
#define FUSES_FCCFG33_ME_SERCOM4_Msk          (_UINT32_(0x1) << FUSES_FCCFG33_ME_SERCOM4_Pos)      /* (FUSES_FCCFG33) Module enables for Variant configuration Mask */
#define FUSES_FCCFG33_ME_SERCOM4(value)       (FUSES_FCCFG33_ME_SERCOM4_Msk & (_UINT32_(value) << FUSES_FCCFG33_ME_SERCOM4_Pos)) /* Assignment of value for ME_SERCOM4 in the FUSES_FCCFG33 register */
#define   FUSES_FCCFG33_ME_SERCOM4_0_Val      _UINT32_(0x0)                                        /* (FUSES_FCCFG33) Module is Disabled  */
#define   FUSES_FCCFG33_ME_SERCOM4_1_Val      _UINT32_(0x1)                                        /* (FUSES_FCCFG33) Module is Enabled  */
#define FUSES_FCCFG33_ME_SERCOM4_0            (FUSES_FCCFG33_ME_SERCOM4_0_Val << FUSES_FCCFG33_ME_SERCOM4_Pos) /* (FUSES_FCCFG33) Module is Disabled Position */
#define FUSES_FCCFG33_ME_SERCOM4_1            (FUSES_FCCFG33_ME_SERCOM4_1_Val << FUSES_FCCFG33_ME_SERCOM4_Pos) /* (FUSES_FCCFG33) Module is Enabled Position */
#define FUSES_FCCFG33_ME_SERCOM5_Pos          _UINT32_(23)                                         /* (FUSES_FCCFG33) Module enables for Variant configuration Position */
#define FUSES_FCCFG33_ME_SERCOM5_Msk          (_UINT32_(0x1) << FUSES_FCCFG33_ME_SERCOM5_Pos)      /* (FUSES_FCCFG33) Module enables for Variant configuration Mask */
#define FUSES_FCCFG33_ME_SERCOM5(value)       (FUSES_FCCFG33_ME_SERCOM5_Msk & (_UINT32_(value) << FUSES_FCCFG33_ME_SERCOM5_Pos)) /* Assignment of value for ME_SERCOM5 in the FUSES_FCCFG33 register */
#define   FUSES_FCCFG33_ME_SERCOM5_0_Val      _UINT32_(0x0)                                        /* (FUSES_FCCFG33) Module is Disabled  */
#define   FUSES_FCCFG33_ME_SERCOM5_1_Val      _UINT32_(0x1)                                        /* (FUSES_FCCFG33) Module is Enabled  */
#define FUSES_FCCFG33_ME_SERCOM5_0            (FUSES_FCCFG33_ME_SERCOM5_0_Val << FUSES_FCCFG33_ME_SERCOM5_Pos) /* (FUSES_FCCFG33) Module is Disabled Position */
#define FUSES_FCCFG33_ME_SERCOM5_1            (FUSES_FCCFG33_ME_SERCOM5_1_Val << FUSES_FCCFG33_ME_SERCOM5_Pos) /* (FUSES_FCCFG33) Module is Enabled Position */
#define FUSES_FCCFG33_ME_PTC_Pos              _UINT32_(28)                                         /* (FUSES_FCCFG33) Module enables for Variant configuration Position */
#define FUSES_FCCFG33_ME_PTC_Msk              (_UINT32_(0x1) << FUSES_FCCFG33_ME_PTC_Pos)          /* (FUSES_FCCFG33) Module enables for Variant configuration Mask */
#define FUSES_FCCFG33_ME_PTC(value)           (FUSES_FCCFG33_ME_PTC_Msk & (_UINT32_(value) << FUSES_FCCFG33_ME_PTC_Pos)) /* Assignment of value for ME_PTC in the FUSES_FCCFG33 register */
#define   FUSES_FCCFG33_ME_PTC_0_Val          _UINT32_(0x0)                                        /* (FUSES_FCCFG33) Module is Disabled  */
#define   FUSES_FCCFG33_ME_PTC_1_Val          _UINT32_(0x1)                                        /* (FUSES_FCCFG33) Module is Enabled  */
#define FUSES_FCCFG33_ME_PTC_0                (FUSES_FCCFG33_ME_PTC_0_Val << FUSES_FCCFG33_ME_PTC_Pos) /* (FUSES_FCCFG33) Module is Disabled Position */
#define FUSES_FCCFG33_ME_PTC_1                (FUSES_FCCFG33_ME_PTC_1_Val << FUSES_FCCFG33_ME_PTC_Pos) /* (FUSES_FCCFG33) Module is Enabled Position */
#define FUSES_FCCFG33_Msk                     _UINT32_(0x10FC7F80)                                 /* (FUSES_FCCFG33) Register Mask  */

#define FUSES_FCCFG33_ME_TCC_Pos              _UINT32_(8)                                          /* (FUSES_FCCFG33 Position) Module enables for Variant configuration */
#define FUSES_FCCFG33_ME_TCC_Msk              (_UINT32_(0x7F) << FUSES_FCCFG33_ME_TCC_Pos)         /* (FUSES_FCCFG33 Mask) ME_TCC */
#define FUSES_FCCFG33_ME_TCC(value)           (FUSES_FCCFG33_ME_TCC_Msk & (_UINT32_(value) << FUSES_FCCFG33_ME_TCC_Pos)) 
#define FUSES_FCCFG33_ME_SERCOM_Pos           _UINT32_(18)                                         /* (FUSES_FCCFG33 Position) Module enables for Variant configuration */
#define FUSES_FCCFG33_ME_SERCOM_Msk           (_UINT32_(0x3F) << FUSES_FCCFG33_ME_SERCOM_Pos)      /* (FUSES_FCCFG33 Mask) ME_SERCOM */
#define FUSES_FCCFG33_ME_SERCOM(value)        (FUSES_FCCFG33_ME_SERCOM_Msk & (_UINT32_(value) << FUSES_FCCFG33_ME_SERCOM_Pos)) 

/* -------- FUSES_FCCFG34 : (FUSES Offset: 0x108) ( R/ 32) DSU Device Configuration 2 Register -------- */
#define FUSES_FCCFG34_ME_CAN0_Pos             _UINT32_(0)                                          /* (FUSES_FCCFG34) Module enables for Variant configuration Position */
#define FUSES_FCCFG34_ME_CAN0_Msk             (_UINT32_(0x1) << FUSES_FCCFG34_ME_CAN0_Pos)         /* (FUSES_FCCFG34) Module enables for Variant configuration Mask */
#define FUSES_FCCFG34_ME_CAN0(value)          (FUSES_FCCFG34_ME_CAN0_Msk & (_UINT32_(value) << FUSES_FCCFG34_ME_CAN0_Pos)) /* Assignment of value for ME_CAN0 in the FUSES_FCCFG34 register */
#define   FUSES_FCCFG34_ME_CAN0_0_Val         _UINT32_(0x0)                                        /* (FUSES_FCCFG34) Module is Disabled  */
#define   FUSES_FCCFG34_ME_CAN0_1_Val         _UINT32_(0x1)                                        /* (FUSES_FCCFG34) Module is Enabled  */
#define FUSES_FCCFG34_ME_CAN0_0               (FUSES_FCCFG34_ME_CAN0_0_Val << FUSES_FCCFG34_ME_CAN0_Pos) /* (FUSES_FCCFG34) Module is Disabled Position */
#define FUSES_FCCFG34_ME_CAN0_1               (FUSES_FCCFG34_ME_CAN0_1_Val << FUSES_FCCFG34_ME_CAN0_Pos) /* (FUSES_FCCFG34) Module is Enabled Position */
#define FUSES_FCCFG34_ME_CAN1_Pos             _UINT32_(1)                                          /* (FUSES_FCCFG34) Module enables for Variant configuration Position */
#define FUSES_FCCFG34_ME_CAN1_Msk             (_UINT32_(0x1) << FUSES_FCCFG34_ME_CAN1_Pos)         /* (FUSES_FCCFG34) Module enables for Variant configuration Mask */
#define FUSES_FCCFG34_ME_CAN1(value)          (FUSES_FCCFG34_ME_CAN1_Msk & (_UINT32_(value) << FUSES_FCCFG34_ME_CAN1_Pos)) /* Assignment of value for ME_CAN1 in the FUSES_FCCFG34 register */
#define   FUSES_FCCFG34_ME_CAN1_0_Val         _UINT32_(0x0)                                        /* (FUSES_FCCFG34) Module is Disabled  */
#define   FUSES_FCCFG34_ME_CAN1_1_Val         _UINT32_(0x1)                                        /* (FUSES_FCCFG34) Module is Enabled  */
#define FUSES_FCCFG34_ME_CAN1_0               (FUSES_FCCFG34_ME_CAN1_0_Val << FUSES_FCCFG34_ME_CAN1_Pos) /* (FUSES_FCCFG34) Module is Disabled Position */
#define FUSES_FCCFG34_ME_CAN1_1               (FUSES_FCCFG34_ME_CAN1_1_Val << FUSES_FCCFG34_ME_CAN1_Pos) /* (FUSES_FCCFG34) Module is Enabled Position */
#define FUSES_FCCFG34_ME_USBFS_Pos            _UINT32_(9)                                          /* (FUSES_FCCFG34) Module enables for Variant configuration Position */
#define FUSES_FCCFG34_ME_USBFS_Msk            (_UINT32_(0x1) << FUSES_FCCFG34_ME_USBFS_Pos)        /* (FUSES_FCCFG34) Module enables for Variant configuration Mask */
#define FUSES_FCCFG34_ME_USBFS(value)         (FUSES_FCCFG34_ME_USBFS_Msk & (_UINT32_(value) << FUSES_FCCFG34_ME_USBFS_Pos)) /* Assignment of value for ME_USBFS in the FUSES_FCCFG34 register */
#define   FUSES_FCCFG34_ME_USBFS_0_Val        _UINT32_(0x0)                                        /* (FUSES_FCCFG34) Module is Disabled  */
#define   FUSES_FCCFG34_ME_USBFS_1_Val        _UINT32_(0x1)                                        /* (FUSES_FCCFG34) Module is Enabled  */
#define FUSES_FCCFG34_ME_USBFS_0              (FUSES_FCCFG34_ME_USBFS_0_Val << FUSES_FCCFG34_ME_USBFS_Pos) /* (FUSES_FCCFG34) Module is Disabled Position */
#define FUSES_FCCFG34_ME_USBFS_1              (FUSES_FCCFG34_ME_USBFS_1_Val << FUSES_FCCFG34_ME_USBFS_Pos) /* (FUSES_FCCFG34) Module is Enabled Position */
#define FUSES_FCCFG34_ME_DPA_Pos              _UINT32_(23)                                         /* (FUSES_FCCFG34) Module enables for Variant configuration Position */
#define FUSES_FCCFG34_ME_DPA_Msk              (_UINT32_(0x1) << FUSES_FCCFG34_ME_DPA_Pos)          /* (FUSES_FCCFG34) Module enables for Variant configuration Mask */
#define FUSES_FCCFG34_ME_DPA(value)           (FUSES_FCCFG34_ME_DPA_Msk & (_UINT32_(value) << FUSES_FCCFG34_ME_DPA_Pos)) /* Assignment of value for ME_DPA in the FUSES_FCCFG34 register */
#define   FUSES_FCCFG34_ME_DPA_0_Val          _UINT32_(0x0)                                        /* (FUSES_FCCFG34) DPA is Disabled  */
#define   FUSES_FCCFG34_ME_DPA_1_Val          _UINT32_(0x1)                                        /* (FUSES_FCCFG34) DPA functions in HSM is Operational  */
#define FUSES_FCCFG34_ME_DPA_0                (FUSES_FCCFG34_ME_DPA_0_Val << FUSES_FCCFG34_ME_DPA_Pos) /* (FUSES_FCCFG34) DPA is Disabled Position */
#define FUSES_FCCFG34_ME_DPA_1                (FUSES_FCCFG34_ME_DPA_1_Val << FUSES_FCCFG34_ME_DPA_Pos) /* (FUSES_FCCFG34) DPA functions in HSM is Operational Position */
#define FUSES_FCCFG34_ME_TRAM_Pos             _UINT32_(30)                                         /* (FUSES_FCCFG34) Module enables for Variant configuration Position */
#define FUSES_FCCFG34_ME_TRAM_Msk             (_UINT32_(0x1) << FUSES_FCCFG34_ME_TRAM_Pos)         /* (FUSES_FCCFG34) Module enables for Variant configuration Mask */
#define FUSES_FCCFG34_ME_TRAM(value)          (FUSES_FCCFG34_ME_TRAM_Msk & (_UINT32_(value) << FUSES_FCCFG34_ME_TRAM_Pos)) /* Assignment of value for ME_TRAM in the FUSES_FCCFG34 register */
#define   FUSES_FCCFG34_ME_TRAM_0_Val         _UINT32_(0x0)                                        /* (FUSES_FCCFG34) Module is Disabled  */
#define   FUSES_FCCFG34_ME_TRAM_1_Val         _UINT32_(0x1)                                        /* (FUSES_FCCFG34) Module is Enabled  */
#define FUSES_FCCFG34_ME_TRAM_0               (FUSES_FCCFG34_ME_TRAM_0_Val << FUSES_FCCFG34_ME_TRAM_Pos) /* (FUSES_FCCFG34) Module is Disabled Position */
#define FUSES_FCCFG34_ME_TRAM_1               (FUSES_FCCFG34_ME_TRAM_1_Val << FUSES_FCCFG34_ME_TRAM_Pos) /* (FUSES_FCCFG34) Module is Enabled Position */
#define FUSES_FCCFG34_ME_PUF_Pos              _UINT32_(31)                                         /* (FUSES_FCCFG34) Module enables for Variant configuration Position */
#define FUSES_FCCFG34_ME_PUF_Msk              (_UINT32_(0x1) << FUSES_FCCFG34_ME_PUF_Pos)          /* (FUSES_FCCFG34) Module enables for Variant configuration Mask */
#define FUSES_FCCFG34_ME_PUF(value)           (FUSES_FCCFG34_ME_PUF_Msk & (_UINT32_(value) << FUSES_FCCFG34_ME_PUF_Pos)) /* Assignment of value for ME_PUF in the FUSES_FCCFG34 register */
#define   FUSES_FCCFG34_ME_PUF_0_Val          _UINT32_(0x0)                                        /* (FUSES_FCCFG34) Module is Disabled  */
#define   FUSES_FCCFG34_ME_PUF_1_Val          _UINT32_(0x1)                                        /* (FUSES_FCCFG34) Module is Enabled  */
#define FUSES_FCCFG34_ME_PUF_0                (FUSES_FCCFG34_ME_PUF_0_Val << FUSES_FCCFG34_ME_PUF_Pos) /* (FUSES_FCCFG34) Module is Disabled Position */
#define FUSES_FCCFG34_ME_PUF_1                (FUSES_FCCFG34_ME_PUF_1_Val << FUSES_FCCFG34_ME_PUF_Pos) /* (FUSES_FCCFG34) Module is Enabled Position */
#define FUSES_FCCFG34_Msk                     _UINT32_(0xC0800203)                                 /* (FUSES_FCCFG34) Register Mask  */

#define FUSES_FCCFG34_ME_CAN_Pos              _UINT32_(0)                                          /* (FUSES_FCCFG34 Position) Module enables for Variant configuration */
#define FUSES_FCCFG34_ME_CAN_Msk              (_UINT32_(0x3) << FUSES_FCCFG34_ME_CAN_Pos)          /* (FUSES_FCCFG34 Mask) ME_CAN */
#define FUSES_FCCFG34_ME_CAN(value)           (FUSES_FCCFG34_ME_CAN_Msk & (_UINT32_(value) << FUSES_FCCFG34_ME_CAN_Pos)) 

/* -------- FUSES_FCCFG49 : (FUSES Offset: 0x144) ( R/ 32) Calibration Configuration 49 Register -------- */
#define FUSES_FCCFG49_RAMC_EMAW_Pos           _UINT32_(0)                                          /* (FUSES_FCCFG49) Write Time Extra Margin Adjust Position */
#define FUSES_FCCFG49_RAMC_EMAW_Msk           (_UINT32_(0x3) << FUSES_FCCFG49_RAMC_EMAW_Pos)       /* (FUSES_FCCFG49) Write Time Extra Margin Adjust Mask */
#define FUSES_FCCFG49_RAMC_EMAW(value)        (FUSES_FCCFG49_RAMC_EMAW_Msk & (_UINT32_(value) << FUSES_FCCFG49_RAMC_EMAW_Pos)) /* Assignment of value for RAMC_EMAW in the FUSES_FCCFG49 register */
#define   FUSES_FCCFG49_RAMC_EMAW_0_Val       _UINT32_(0x0)                                        /* (FUSES_FCCFG49) Slowest Access  */
#define   FUSES_FCCFG49_RAMC_EMAW_1_Val       _UINT32_(0x1)                                        /* (FUSES_FCCFG49)   */
#define   FUSES_FCCFG49_RAMC_EMAW_2_Val       _UINT32_(0x2)                                        /* (FUSES_FCCFG49)   */
#define   FUSES_FCCFG49_RAMC_EMAW_3_Val       _UINT32_(0x3)                                        /* (FUSES_FCCFG49) Fastest Access; Default (reset)  */
#define FUSES_FCCFG49_RAMC_EMAW_0             (FUSES_FCCFG49_RAMC_EMAW_0_Val << FUSES_FCCFG49_RAMC_EMAW_Pos) /* (FUSES_FCCFG49) Slowest Access Position */
#define FUSES_FCCFG49_RAMC_EMAW_1             (FUSES_FCCFG49_RAMC_EMAW_1_Val << FUSES_FCCFG49_RAMC_EMAW_Pos) /* (FUSES_FCCFG49)  Position */
#define FUSES_FCCFG49_RAMC_EMAW_2             (FUSES_FCCFG49_RAMC_EMAW_2_Val << FUSES_FCCFG49_RAMC_EMAW_Pos) /* (FUSES_FCCFG49)  Position */
#define FUSES_FCCFG49_RAMC_EMAW_3             (FUSES_FCCFG49_RAMC_EMAW_3_Val << FUSES_FCCFG49_RAMC_EMAW_Pos) /* (FUSES_FCCFG49) Fastest Access; Default (reset) Position */
#define FUSES_FCCFG49_RAMC_EMA_Pos            _UINT32_(2)                                          /* (FUSES_FCCFG49) Cycle and Read Time Extra Margin Adjust Position */
#define FUSES_FCCFG49_RAMC_EMA_Msk            (_UINT32_(0x7) << FUSES_FCCFG49_RAMC_EMA_Pos)        /* (FUSES_FCCFG49) Cycle and Read Time Extra Margin Adjust Mask */
#define FUSES_FCCFG49_RAMC_EMA(value)         (FUSES_FCCFG49_RAMC_EMA_Msk & (_UINT32_(value) << FUSES_FCCFG49_RAMC_EMA_Pos)) /* Assignment of value for RAMC_EMA in the FUSES_FCCFG49 register */
#define   FUSES_FCCFG49_RAMC_EMA_0_Val        _UINT32_(0x0)                                        /* (FUSES_FCCFG49)   */
#define   FUSES_FCCFG49_RAMC_EMA_1_Val        _UINT32_(0x1)                                        /* (FUSES_FCCFG49)   */
#define   FUSES_FCCFG49_RAMC_EMA_2_Val        _UINT32_(0x2)                                        /* (FUSES_FCCFG49) Slowest Access  */
#define   FUSES_FCCFG49_RAMC_EMA_3_Val        _UINT32_(0x3)                                        /* (FUSES_FCCFG49)   */
#define   FUSES_FCCFG49_RAMC_EMA_4_Val        _UINT32_(0x4)                                        /* (FUSES_FCCFG49)   */
#define   FUSES_FCCFG49_RAMC_EMA_5_Val        _UINT32_(0x5)                                        /* (FUSES_FCCFG49) Fastest Access  */
#define   FUSES_FCCFG49_RAMC_EMA_6_Val        _UINT32_(0x6)                                        /* (FUSES_FCCFG49)   */
#define   FUSES_FCCFG49_RAMC_EMA_7_Val        _UINT32_(0x7)                                        /* (FUSES_FCCFG49) Default (reset)  */
#define FUSES_FCCFG49_RAMC_EMA_0              (FUSES_FCCFG49_RAMC_EMA_0_Val << FUSES_FCCFG49_RAMC_EMA_Pos) /* (FUSES_FCCFG49)  Position */
#define FUSES_FCCFG49_RAMC_EMA_1              (FUSES_FCCFG49_RAMC_EMA_1_Val << FUSES_FCCFG49_RAMC_EMA_Pos) /* (FUSES_FCCFG49)  Position */
#define FUSES_FCCFG49_RAMC_EMA_2              (FUSES_FCCFG49_RAMC_EMA_2_Val << FUSES_FCCFG49_RAMC_EMA_Pos) /* (FUSES_FCCFG49) Slowest Access Position */
#define FUSES_FCCFG49_RAMC_EMA_3              (FUSES_FCCFG49_RAMC_EMA_3_Val << FUSES_FCCFG49_RAMC_EMA_Pos) /* (FUSES_FCCFG49)  Position */
#define FUSES_FCCFG49_RAMC_EMA_4              (FUSES_FCCFG49_RAMC_EMA_4_Val << FUSES_FCCFG49_RAMC_EMA_Pos) /* (FUSES_FCCFG49)  Position */
#define FUSES_FCCFG49_RAMC_EMA_5              (FUSES_FCCFG49_RAMC_EMA_5_Val << FUSES_FCCFG49_RAMC_EMA_Pos) /* (FUSES_FCCFG49) Fastest Access Position */
#define FUSES_FCCFG49_RAMC_EMA_6              (FUSES_FCCFG49_RAMC_EMA_6_Val << FUSES_FCCFG49_RAMC_EMA_Pos) /* (FUSES_FCCFG49)  Position */
#define FUSES_FCCFG49_RAMC_EMA_7              (FUSES_FCCFG49_RAMC_EMA_7_Val << FUSES_FCCFG49_RAMC_EMA_Pos) /* (FUSES_FCCFG49) Default (reset) Position */
#define FUSES_FCCFG49_RAMAB_EMAW_Pos          _UINT32_(6)                                          /* (FUSES_FCCFG49) Write Time Extra Margin Adjust Position */
#define FUSES_FCCFG49_RAMAB_EMAW_Msk          (_UINT32_(0x3) << FUSES_FCCFG49_RAMAB_EMAW_Pos)      /* (FUSES_FCCFG49) Write Time Extra Margin Adjust Mask */
#define FUSES_FCCFG49_RAMAB_EMAW(value)       (FUSES_FCCFG49_RAMAB_EMAW_Msk & (_UINT32_(value) << FUSES_FCCFG49_RAMAB_EMAW_Pos)) /* Assignment of value for RAMAB_EMAW in the FUSES_FCCFG49 register */
#define FUSES_FCCFG49_RAMAB_EMA_Pos           _UINT32_(8)                                          /* (FUSES_FCCFG49) Cycle and Read Time Extra Margin Adjust Position */
#define FUSES_FCCFG49_RAMAB_EMA_Msk           (_UINT32_(0x7) << FUSES_FCCFG49_RAMAB_EMA_Pos)       /* (FUSES_FCCFG49) Cycle and Read Time Extra Margin Adjust Mask */
#define FUSES_FCCFG49_RAMAB_EMA(value)        (FUSES_FCCFG49_RAMAB_EMA_Msk & (_UINT32_(value) << FUSES_FCCFG49_RAMAB_EMA_Pos)) /* Assignment of value for RAMAB_EMA in the FUSES_FCCFG49 register */
#define FUSES_FCCFG49_TRAM_EMAW_Pos           _UINT32_(12)                                         /* (FUSES_FCCFG49) Write Time Extra Margin Adjust Position */
#define FUSES_FCCFG49_TRAM_EMAW_Msk           (_UINT32_(0x3) << FUSES_FCCFG49_TRAM_EMAW_Pos)       /* (FUSES_FCCFG49) Write Time Extra Margin Adjust Mask */
#define FUSES_FCCFG49_TRAM_EMAW(value)        (FUSES_FCCFG49_TRAM_EMAW_Msk & (_UINT32_(value) << FUSES_FCCFG49_TRAM_EMAW_Pos)) /* Assignment of value for TRAM_EMAW in the FUSES_FCCFG49 register */
#define FUSES_FCCFG49_TRAM_EMA_Pos            _UINT32_(14)                                         /* (FUSES_FCCFG49) Cycle and Read Time Extra Margin Adjust Position */
#define FUSES_FCCFG49_TRAM_EMA_Msk            (_UINT32_(0x7) << FUSES_FCCFG49_TRAM_EMA_Pos)        /* (FUSES_FCCFG49) Cycle and Read Time Extra Margin Adjust Mask */
#define FUSES_FCCFG49_TRAM_EMA(value)         (FUSES_FCCFG49_TRAM_EMA_Msk & (_UINT32_(value) << FUSES_FCCFG49_TRAM_EMA_Pos)) /* Assignment of value for TRAM_EMA in the FUSES_FCCFG49 register */
#define FUSES_FCCFG49_TRAM_EMAS_Pos           _UINT32_(17)                                         /* (FUSES_FCCFG49) Sense Amp Extra Margin Adjust Position */
#define FUSES_FCCFG49_TRAM_EMAS_Msk           (_UINT32_(0x1) << FUSES_FCCFG49_TRAM_EMAS_Pos)       /* (FUSES_FCCFG49) Sense Amp Extra Margin Adjust Mask */
#define FUSES_FCCFG49_TRAM_EMAS(value)        (FUSES_FCCFG49_TRAM_EMAS_Msk & (_UINT32_(value) << FUSES_FCCFG49_TRAM_EMAS_Pos)) /* Assignment of value for TRAM_EMAS in the FUSES_FCCFG49 register */
#define   FUSES_FCCFG49_TRAM_EMAS_0_Val       _UINT32_(0x0)                                        /* (FUSES_FCCFG49) Sense Amp Pulse Not Extended  */
#define   FUSES_FCCFG49_TRAM_EMAS_1_Val       _UINT32_(0x1)                                        /* (FUSES_FCCFG49) Sense Amp Pulse Extended; Default (reset)  */
#define FUSES_FCCFG49_TRAM_EMAS_0             (FUSES_FCCFG49_TRAM_EMAS_0_Val << FUSES_FCCFG49_TRAM_EMAS_Pos) /* (FUSES_FCCFG49) Sense Amp Pulse Not Extended Position */
#define FUSES_FCCFG49_TRAM_EMAS_1             (FUSES_FCCFG49_TRAM_EMAS_1_Val << FUSES_FCCFG49_TRAM_EMAS_Pos) /* (FUSES_FCCFG49) Sense Amp Pulse Extended; Default (reset) Position */
#define FUSES_FCCFG49_BROM_EMA_Pos            _UINT32_(20)                                         /* (FUSES_FCCFG49) Cycle and Read Time Extra Margin Adjust Position */
#define FUSES_FCCFG49_BROM_EMA_Msk            (_UINT32_(0x7) << FUSES_FCCFG49_BROM_EMA_Pos)        /* (FUSES_FCCFG49) Cycle and Read Time Extra Margin Adjust Mask */
#define FUSES_FCCFG49_BROM_EMA(value)         (FUSES_FCCFG49_BROM_EMA_Msk & (_UINT32_(value) << FUSES_FCCFG49_BROM_EMA_Pos)) /* Assignment of value for BROM_EMA in the FUSES_FCCFG49 register */
#define FUSES_FCCFG49_PUF_EMAW_Pos            _UINT32_(24)                                         /* (FUSES_FCCFG49) Write Time Extra Margin Adjust Position */
#define FUSES_FCCFG49_PUF_EMAW_Msk            (_UINT32_(0x3) << FUSES_FCCFG49_PUF_EMAW_Pos)        /* (FUSES_FCCFG49) Write Time Extra Margin Adjust Mask */
#define FUSES_FCCFG49_PUF_EMAW(value)         (FUSES_FCCFG49_PUF_EMAW_Msk & (_UINT32_(value) << FUSES_FCCFG49_PUF_EMAW_Pos)) /* Assignment of value for PUF_EMAW in the FUSES_FCCFG49 register */
#define FUSES_FCCFG49_PUF_EMA_Pos             _UINT32_(26)                                         /* (FUSES_FCCFG49) Cycle and Read Time Extra Margin Adjust Position */
#define FUSES_FCCFG49_PUF_EMA_Msk             (_UINT32_(0x7) << FUSES_FCCFG49_PUF_EMA_Pos)         /* (FUSES_FCCFG49) Cycle and Read Time Extra Margin Adjust Mask */
#define FUSES_FCCFG49_PUF_EMA(value)          (FUSES_FCCFG49_PUF_EMA_Msk & (_UINT32_(value) << FUSES_FCCFG49_PUF_EMA_Pos)) /* Assignment of value for PUF_EMA in the FUSES_FCCFG49 register */
#define FUSES_FCCFG49_PUF_EMAS_Pos            _UINT32_(29)                                         /* (FUSES_FCCFG49) Sense Amp Extra Margin Adjust Position */
#define FUSES_FCCFG49_PUF_EMAS_Msk            (_UINT32_(0x1) << FUSES_FCCFG49_PUF_EMAS_Pos)        /* (FUSES_FCCFG49) Sense Amp Extra Margin Adjust Mask */
#define FUSES_FCCFG49_PUF_EMAS(value)         (FUSES_FCCFG49_PUF_EMAS_Msk & (_UINT32_(value) << FUSES_FCCFG49_PUF_EMAS_Pos)) /* Assignment of value for PUF_EMAS in the FUSES_FCCFG49 register */
#define   FUSES_FCCFG49_PUF_EMAS_0_Val        _UINT32_(0x0)                                        /* (FUSES_FCCFG49) Sense Amp Pulse Not Extended  */
#define   FUSES_FCCFG49_PUF_EMAS_1_Val        _UINT32_(0x1)                                        /* (FUSES_FCCFG49) Sense Amp Pulse Extended; Default (reset)  */
#define FUSES_FCCFG49_PUF_EMAS_0              (FUSES_FCCFG49_PUF_EMAS_0_Val << FUSES_FCCFG49_PUF_EMAS_Pos) /* (FUSES_FCCFG49) Sense Amp Pulse Not Extended Position */
#define FUSES_FCCFG49_PUF_EMAS_1              (FUSES_FCCFG49_PUF_EMAS_1_Val << FUSES_FCCFG49_PUF_EMAS_Pos) /* (FUSES_FCCFG49) Sense Amp Pulse Extended; Default (reset) Position */
#define FUSES_FCCFG49_Msk                     _UINT32_(0x3F73F7DF)                                 /* (FUSES_FCCFG49) Register Mask  */


/* -------- FUSES_FCCFG56 : (FUSES Offset: 0x160) ( R/ 32) Calibration Configuration 56 Register -------- */
#define FUSES_FCCFG56_BRINGOSC_Pos            _UINT32_(0)                                          /* (FUSES_FCCFG56) SUPC Ring-osc depth Position */
#define FUSES_FCCFG56_BRINGOSC_Msk            (_UINT32_(0x3) << FUSES_FCCFG56_BRINGOSC_Pos)        /* (FUSES_FCCFG56) SUPC Ring-osc depth Mask */
#define FUSES_FCCFG56_BRINGOSC(value)         (FUSES_FCCFG56_BRINGOSC_Msk & (_UINT32_(value) << FUSES_FCCFG56_BRINGOSC_Pos)) /* Assignment of value for BRINGOSC in the FUSES_FCCFG56 register */
#define   FUSES_FCCFG56_BRINGOSC_0_Val        _UINT32_(0x0)                                        /* (FUSES_FCCFG56) Ring oscillator depth is default (DLY0)  */
#define   FUSES_FCCFG56_BRINGOSC_1_Val        _UINT32_(0x1)                                        /* (FUSES_FCCFG56) Ring oscillator depth is default + 1 ORDLY15 (DLY1)  */
#define   FUSES_FCCFG56_BRINGOSC_2_Val        _UINT32_(0x2)                                        /* (FUSES_FCCFG56) Ring oscillator depth is default + 2 ORDLY15 (DLY2)  */
#define   FUSES_FCCFG56_BRINGOSC_3_Val        _UINT32_(0x3)                                        /* (FUSES_FCCFG56) Ring oscillator depth is default + 3 ORDLY15 (DLY3)  */
#define FUSES_FCCFG56_BRINGOSC_0              (FUSES_FCCFG56_BRINGOSC_0_Val << FUSES_FCCFG56_BRINGOSC_Pos) /* (FUSES_FCCFG56) Ring oscillator depth is default (DLY0) Position */
#define FUSES_FCCFG56_BRINGOSC_1              (FUSES_FCCFG56_BRINGOSC_1_Val << FUSES_FCCFG56_BRINGOSC_Pos) /* (FUSES_FCCFG56) Ring oscillator depth is default + 1 ORDLY15 (DLY1) Position */
#define FUSES_FCCFG56_BRINGOSC_2              (FUSES_FCCFG56_BRINGOSC_2_Val << FUSES_FCCFG56_BRINGOSC_Pos) /* (FUSES_FCCFG56) Ring oscillator depth is default + 2 ORDLY15 (DLY2) Position */
#define FUSES_FCCFG56_BRINGOSC_3              (FUSES_FCCFG56_BRINGOSC_3_Val << FUSES_FCCFG56_BRINGOSC_Pos) /* (FUSES_FCCFG56) Ring oscillator depth is default + 3 ORDLY15 (DLY3) Position */
#define FUSES_FCCFG56_DIS_BOR12_RAMON_Pos     _UINT32_(4)                                          /* (FUSES_FCCFG56) Disable BOR12 (VREGRAM comparator) when RAM are turned ON when leaving sleep mode Position */
#define FUSES_FCCFG56_DIS_BOR12_RAMON_Msk     (_UINT32_(0x1) << FUSES_FCCFG56_DIS_BOR12_RAMON_Pos) /* (FUSES_FCCFG56) Disable BOR12 (VREGRAM comparator) when RAM are turned ON when leaving sleep mode Mask */
#define FUSES_FCCFG56_DIS_BOR12_RAMON(value)  (FUSES_FCCFG56_DIS_BOR12_RAMON_Msk & (_UINT32_(value) << FUSES_FCCFG56_DIS_BOR12_RAMON_Pos)) /* Assignment of value for DIS_BOR12_RAMON in the FUSES_FCCFG56 register */
#define FUSES_FCCFG56_DIS_BOR12_VSCALING_Pos  _UINT32_(5)                                          /* (FUSES_FCCFG56) Disable BOR12 (VREGRAM comparator) when down voltage scaling is on going from 1.2v to 0.8v to workaround VREG undershoot issue Position */
#define FUSES_FCCFG56_DIS_BOR12_VSCALING_Msk  (_UINT32_(0x1) << FUSES_FCCFG56_DIS_BOR12_VSCALING_Pos) /* (FUSES_FCCFG56) Disable BOR12 (VREGRAM comparator) when down voltage scaling is on going from 1.2v to 0.8v to workaround VREG undershoot issue Mask */
#define FUSES_FCCFG56_DIS_BOR12_VSCALING(value) (FUSES_FCCFG56_DIS_BOR12_VSCALING_Msk & (_UINT32_(value) << FUSES_FCCFG56_DIS_BOR12_VSCALING_Pos)) /* Assignment of value for DIS_BOR12_VSCALING in the FUSES_FCCFG56 register */
#define FUSES_FCCFG56_VLP2FPST_Pos            _UINT32_(16)                                         /* (FUSES_FCCFG56) Vreg Low Power to Full Power Stabilization Time Position */
#define FUSES_FCCFG56_VLP2FPST_Msk            (_UINT32_(0x3) << FUSES_FCCFG56_VLP2FPST_Pos)        /* (FUSES_FCCFG56) Vreg Low Power to Full Power Stabilization Time Mask */
#define FUSES_FCCFG56_VLP2FPST(value)         (FUSES_FCCFG56_VLP2FPST_Msk & (_UINT32_(value) << FUSES_FCCFG56_VLP2FPST_Pos)) /* Assignment of value for VLP2FPST in the FUSES_FCCFG56 register */
#define   FUSES_FCCFG56_VLP2FPST_0_Val        _UINT32_(0x0)                                        /* (FUSES_FCCFG56) 5us -32 clock cycles based on 6Mhz clock (5US)  */
#define   FUSES_FCCFG56_VLP2FPST_1_Val        _UINT32_(0x1)                                        /* (FUSES_FCCFG56) 10us -64 clock cycles based on 6Mhz clock (10US)  */
#define   FUSES_FCCFG56_VLP2FPST_2_Val        _UINT32_(0x2)                                        /* (FUSES_FCCFG56) 21us -128 clock cycles based on 6Mhz clock (21US)  */
#define   FUSES_FCCFG56_VLP2FPST_3_Val        _UINT32_(0x3)                                        /* (FUSES_FCCFG56) 1.3us -8 clock cycles based on 6Mhz clock (1US)  */
#define FUSES_FCCFG56_VLP2FPST_0              (FUSES_FCCFG56_VLP2FPST_0_Val << FUSES_FCCFG56_VLP2FPST_Pos) /* (FUSES_FCCFG56) 5us -32 clock cycles based on 6Mhz clock (5US) Position */
#define FUSES_FCCFG56_VLP2FPST_1              (FUSES_FCCFG56_VLP2FPST_1_Val << FUSES_FCCFG56_VLP2FPST_Pos) /* (FUSES_FCCFG56) 10us -64 clock cycles based on 6Mhz clock (10US) Position */
#define FUSES_FCCFG56_VLP2FPST_2              (FUSES_FCCFG56_VLP2FPST_2_Val << FUSES_FCCFG56_VLP2FPST_Pos) /* (FUSES_FCCFG56) 21us -128 clock cycles based on 6Mhz clock (21US) Position */
#define FUSES_FCCFG56_VLP2FPST_3              (FUSES_FCCFG56_VLP2FPST_3_Val << FUSES_FCCFG56_VLP2FPST_Pos) /* (FUSES_FCCFG56) 1.3us -8 clock cycles based on 6Mhz clock (1US) Position */
#define FUSES_FCCFG56_VLPMST_Pos              _UINT32_(18)                                         /* (FUSES_FCCFG56) Vreg LP Mode Stabilization Time Position */
#define FUSES_FCCFG56_VLPMST_Msk              (_UINT32_(0x3) << FUSES_FCCFG56_VLPMST_Pos)          /* (FUSES_FCCFG56) Vreg LP Mode Stabilization Time Mask */
#define FUSES_FCCFG56_VLPMST(value)           (FUSES_FCCFG56_VLPMST_Msk & (_UINT32_(value) << FUSES_FCCFG56_VLPMST_Pos)) /* Assignment of value for VLPMST in the FUSES_FCCFG56 register */
#define   FUSES_FCCFG56_VLPMST_0_Val          _UINT32_(0x0)                                        /* (FUSES_FCCFG56) 1.3us -8 clock cycles based on 6Mhz clock (1US)  */
#define   FUSES_FCCFG56_VLPMST_1_Val          _UINT32_(0x1)                                        /* (FUSES_FCCFG56) 2.6us -16 clock cycles based on 6Mhz clock (2US)  */
#define   FUSES_FCCFG56_VLPMST_2_Val          _UINT32_(0x2)                                        /* (FUSES_FCCFG56) 5us -32 clock cycles based on 6Mhz clock (5US)  */
#define   FUSES_FCCFG56_VLPMST_3_Val          _UINT32_(0x3)                                        /* (FUSES_FCCFG56) 0.166us -1 clock cycles based on 6Mhz clock (0US)  */
#define FUSES_FCCFG56_VLPMST_0                (FUSES_FCCFG56_VLPMST_0_Val << FUSES_FCCFG56_VLPMST_Pos) /* (FUSES_FCCFG56) 1.3us -8 clock cycles based on 6Mhz clock (1US) Position */
#define FUSES_FCCFG56_VLPMST_1                (FUSES_FCCFG56_VLPMST_1_Val << FUSES_FCCFG56_VLPMST_Pos) /* (FUSES_FCCFG56) 2.6us -16 clock cycles based on 6Mhz clock (2US) Position */
#define FUSES_FCCFG56_VLPMST_2                (FUSES_FCCFG56_VLPMST_2_Val << FUSES_FCCFG56_VLPMST_Pos) /* (FUSES_FCCFG56) 5us -32 clock cycles based on 6Mhz clock (5US) Position */
#define FUSES_FCCFG56_VLPMST_3                (FUSES_FCCFG56_VLPMST_3_Val << FUSES_FCCFG56_VLPMST_Pos) /* (FUSES_FCCFG56) 0.166us -1 clock cycles based on 6Mhz clock (0US) Position */
#define FUSES_FCCFG56_VTONST_Pos              _UINT32_(20)                                         /* (FUSES_FCCFG56) Vreg Turned On Stabilization Time Position */
#define FUSES_FCCFG56_VTONST_Msk              (_UINT32_(0x3) << FUSES_FCCFG56_VTONST_Pos)          /* (FUSES_FCCFG56) Vreg Turned On Stabilization Time Mask */
#define FUSES_FCCFG56_VTONST(value)           (FUSES_FCCFG56_VTONST_Msk & (_UINT32_(value) << FUSES_FCCFG56_VTONST_Pos)) /* Assignment of value for VTONST in the FUSES_FCCFG56 register */
#define   FUSES_FCCFG56_VTONST_0_Val          _UINT32_(0x0)                                        /* (FUSES_FCCFG56) 31us -192 clock cycles based on 6Mhz clock (31US)  */
#define   FUSES_FCCFG56_VTONST_1_Val          _UINT32_(0x1)                                        /* (FUSES_FCCFG56) 42us -256 clock cycles based on 6Mhz clock (42US)  */
#define   FUSES_FCCFG56_VTONST_2_Val          _UINT32_(0x2)                                        /* (FUSES_FCCFG56) 84us -512 clock cycles based on 6Mhz clock (84US)  */
#define   FUSES_FCCFG56_VTONST_3_Val          _UINT32_(0x3)                                        /* (FUSES_FCCFG56) 10.6us -64 clock cycles based on 6Mhz clock (10US)  */
#define FUSES_FCCFG56_VTONST_0                (FUSES_FCCFG56_VTONST_0_Val << FUSES_FCCFG56_VTONST_Pos) /* (FUSES_FCCFG56) 31us -192 clock cycles based on 6Mhz clock (31US) Position */
#define FUSES_FCCFG56_VTONST_1                (FUSES_FCCFG56_VTONST_1_Val << FUSES_FCCFG56_VTONST_Pos) /* (FUSES_FCCFG56) 42us -256 clock cycles based on 6Mhz clock (42US) Position */
#define FUSES_FCCFG56_VTONST_2                (FUSES_FCCFG56_VTONST_2_Val << FUSES_FCCFG56_VTONST_Pos) /* (FUSES_FCCFG56) 84us -512 clock cycles based on 6Mhz clock (84US) Position */
#define FUSES_FCCFG56_VTONST_3                (FUSES_FCCFG56_VTONST_3_Val << FUSES_FCCFG56_VTONST_Pos) /* (FUSES_FCCFG56) 10.6us -64 clock cycles based on 6Mhz clock (10US) Position */
#define FUSES_FCCFG56_VPDDST_Pos              _UINT32_(22)                                         /* (FUSES_FCCFG56) Vreg Pull Down Disable Stabilization Time Position */
#define FUSES_FCCFG56_VPDDST_Msk              (_UINT32_(0x3) << FUSES_FCCFG56_VPDDST_Pos)          /* (FUSES_FCCFG56) Vreg Pull Down Disable Stabilization Time Mask */
#define FUSES_FCCFG56_VPDDST(value)           (FUSES_FCCFG56_VPDDST_Msk & (_UINT32_(value) << FUSES_FCCFG56_VPDDST_Pos)) /* Assignment of value for VPDDST in the FUSES_FCCFG56 register */
#define   FUSES_FCCFG56_VPDDST_0_Val          _UINT32_(0x0)                                        /* (FUSES_FCCFG56) 21us -128 clock cycles based on 6Mhz clock (21US)  */
#define   FUSES_FCCFG56_VPDDST_1_Val          _UINT32_(0x1)                                        /* (FUSES_FCCFG56) 42us -256 clock cycles based on 6Mhz clock (42US)  */
#define   FUSES_FCCFG56_VPDDST_2_Val          _UINT32_(0x2)                                        /* (FUSES_FCCFG56) 84us -512 clock cycles based on 6Mhz clock (84US)  */
#define   FUSES_FCCFG56_VPDDST_3_Val          _UINT32_(0x3)                                        /* (FUSES_FCCFG56) 10.6us -64 clock cycles based on 6Mhz clock (10US)  */
#define FUSES_FCCFG56_VPDDST_0                (FUSES_FCCFG56_VPDDST_0_Val << FUSES_FCCFG56_VPDDST_Pos) /* (FUSES_FCCFG56) 21us -128 clock cycles based on 6Mhz clock (21US) Position */
#define FUSES_FCCFG56_VPDDST_1                (FUSES_FCCFG56_VPDDST_1_Val << FUSES_FCCFG56_VPDDST_Pos) /* (FUSES_FCCFG56) 42us -256 clock cycles based on 6Mhz clock (42US) Position */
#define FUSES_FCCFG56_VPDDST_2                (FUSES_FCCFG56_VPDDST_2_Val << FUSES_FCCFG56_VPDDST_Pos) /* (FUSES_FCCFG56) 84us -512 clock cycles based on 6Mhz clock (84US) Position */
#define FUSES_FCCFG56_VPDDST_3                (FUSES_FCCFG56_VPDDST_3_Val << FUSES_FCCFG56_VPDDST_Pos) /* (FUSES_FCCFG56) 10.6us -64 clock cycles based on 6Mhz clock (10US) Position */
#define FUSES_FCCFG56_VDVSST_Pos              _UINT32_(24)                                         /* (FUSES_FCCFG56) Vreg Down Voltage Scaling Stabilization Time Position */
#define FUSES_FCCFG56_VDVSST_Msk              (_UINT32_(0x3) << FUSES_FCCFG56_VDVSST_Pos)          /* (FUSES_FCCFG56) Vreg Down Voltage Scaling Stabilization Time Mask */
#define FUSES_FCCFG56_VDVSST(value)           (FUSES_FCCFG56_VDVSST_Msk & (_UINT32_(value) << FUSES_FCCFG56_VDVSST_Pos)) /* Assignment of value for VDVSST in the FUSES_FCCFG56 register */
#define   FUSES_FCCFG56_VDVSST_0_Val          _UINT32_(0x0)                                        /* (FUSES_FCCFG56) 32us -192 clock cycles based on 6Mhz clock (32US)  */
#define   FUSES_FCCFG56_VDVSST_1_Val          _UINT32_(0x1)                                        /* (FUSES_FCCFG56) 42us -256 clock cycles based on 6Mhz clock (42US)  */
#define   FUSES_FCCFG56_VDVSST_2_Val          _UINT32_(0x2)                                        /* (FUSES_FCCFG56) 84us -512 clock cycles based on 6Mhz clock (84US)  */
#define   FUSES_FCCFG56_VDVSST_3_Val          _UINT32_(0x3)                                        /* (FUSES_FCCFG56) 10us -64 clock cycles based on 6Mhz clock (10US)  */
#define FUSES_FCCFG56_VDVSST_0                (FUSES_FCCFG56_VDVSST_0_Val << FUSES_FCCFG56_VDVSST_Pos) /* (FUSES_FCCFG56) 32us -192 clock cycles based on 6Mhz clock (32US) Position */
#define FUSES_FCCFG56_VDVSST_1                (FUSES_FCCFG56_VDVSST_1_Val << FUSES_FCCFG56_VDVSST_Pos) /* (FUSES_FCCFG56) 42us -256 clock cycles based on 6Mhz clock (42US) Position */
#define FUSES_FCCFG56_VDVSST_2                (FUSES_FCCFG56_VDVSST_2_Val << FUSES_FCCFG56_VDVSST_Pos) /* (FUSES_FCCFG56) 84us -512 clock cycles based on 6Mhz clock (84US) Position */
#define FUSES_FCCFG56_VDVSST_3                (FUSES_FCCFG56_VDVSST_3_Val << FUSES_FCCFG56_VDVSST_Pos) /* (FUSES_FCCFG56) 10us -64 clock cycles based on 6Mhz clock (10US) Position */
#define FUSES_FCCFG56_Msk                     _UINT32_(0x03FF0033)                                 /* (FUSES_FCCFG56) Register Mask  */


/* -------- FUSES_FCCFG57 : (FUSES Offset: 0x164) ( R/ 32) Calibration Configuration 57 Register -------- */
#define FUSES_FCCFG57_DLYVAL_Pos              _UINT32_(0)                                          /* (FUSES_FCCFG57) Delay Value Position */
#define FUSES_FCCFG57_DLYVAL_Msk              (_UINT32_(0x7F) << FUSES_FCCFG57_DLYVAL_Pos)         /* (FUSES_FCCFG57) Delay Value Mask */
#define FUSES_FCCFG57_DLYVAL(value)           (FUSES_FCCFG57_DLYVAL_Msk & (_UINT32_(value) << FUSES_FCCFG57_DLYVAL_Pos)) /* Assignment of value for DLYVAL in the FUSES_FCCFG57 register */
#define FUSES_FCCFG57_IGNACK_Pos              _UINT32_(7)                                          /* (FUSES_FCCFG57) Ignore Acknowledge Position */
#define FUSES_FCCFG57_IGNACK_Msk              (_UINT32_(0x1) << FUSES_FCCFG57_IGNACK_Pos)          /* (FUSES_FCCFG57) Ignore Acknowledge Mask */
#define FUSES_FCCFG57_IGNACK(value)           (FUSES_FCCFG57_IGNACK_Msk & (_UINT32_(value) << FUSES_FCCFG57_IGNACK_Pos)) /* Assignment of value for IGNACK in the FUSES_FCCFG57 register */
#define   FUSES_FCCFG57_IGNACK_0_Val          _UINT32_(0x0)                                        /* (FUSES_FCCFG57) Power Switch acknowledge signal is taken into account when entering/exiting retention mode. According to the DLYVAL field, a supplementary delay is also added (from 0 to 127 digital ring oscillator period)  */
#define   FUSES_FCCFG57_IGNACK_1_Val          _UINT32_(0x1)                                        /* (FUSES_FCCFG57) Power Switch acknowledge signal is ignored when entering/exiting retention mode, and is replaced by a overflow counter signal clocked on internal digital ring oscillator. The overflow counter is programmable by using the DLYVAL field  */
#define FUSES_FCCFG57_IGNACK_0                (FUSES_FCCFG57_IGNACK_0_Val << FUSES_FCCFG57_IGNACK_Pos) /* (FUSES_FCCFG57) Power Switch acknowledge signal is taken into account when entering/exiting retention mode. According to the DLYVAL field, a supplementary delay is also added (from 0 to 127 digital ring oscillator period) Position */
#define FUSES_FCCFG57_IGNACK_1                (FUSES_FCCFG57_IGNACK_1_Val << FUSES_FCCFG57_IGNACK_Pos) /* (FUSES_FCCFG57) Power Switch acknowledge signal is ignored when entering/exiting retention mode, and is replaced by a overflow counter signal clocked on internal digital ring oscillator. The overflow counter is programmable by using the DLYVAL field Position */
#define FUSES_FCCFG57_Msk                     _UINT32_(0x000000FF)                                 /* (FUSES_FCCFG57) Register Mask  */


/* -------- FUSES_FCCFG58 : (FUSES Offset: 0x168) ( R/ 32) Calibration Configuration 58 Register -------- */
#define FUSES_FCCFG58_BRINGOSC_Pos            _UINT32_(0)                                          /* (FUSES_FCCFG58) Backup Ring Oscillator Size Depth Position */
#define FUSES_FCCFG58_BRINGOSC_Msk            (_UINT32_(0x3) << FUSES_FCCFG58_BRINGOSC_Pos)        /* (FUSES_FCCFG58) Backup Ring Oscillator Size Depth Mask */
#define FUSES_FCCFG58_BRINGOSC(value)         (FUSES_FCCFG58_BRINGOSC_Msk & (_UINT32_(value) << FUSES_FCCFG58_BRINGOSC_Pos)) /* Assignment of value for BRINGOSC in the FUSES_FCCFG58 register */
#define   FUSES_FCCFG58_BRINGOSC_0_Val        _UINT32_(0x0)                                        /* (FUSES_FCCFG58) Ring Oscillator depth is default (DLY0)  */
#define   FUSES_FCCFG58_BRINGOSC_1_Val        _UINT32_(0x1)                                        /* (FUSES_FCCFG58) Ring Oscillator depth is default + 1 ORDLY15 (DLY1)  */
#define   FUSES_FCCFG58_BRINGOSC_2_Val        _UINT32_(0x2)                                        /* (FUSES_FCCFG58) Ring Oscillator depth is default + 2 ORDLU15 (DLY2)  */
#define   FUSES_FCCFG58_BRINGOSC_3_Val        _UINT32_(0x3)                                        /* (FUSES_FCCFG58) Ring Oscillator depth is default + 3 ORDLY15 (DLY3)  */
#define FUSES_FCCFG58_BRINGOSC_0              (FUSES_FCCFG58_BRINGOSC_0_Val << FUSES_FCCFG58_BRINGOSC_Pos) /* (FUSES_FCCFG58) Ring Oscillator depth is default (DLY0) Position */
#define FUSES_FCCFG58_BRINGOSC_1              (FUSES_FCCFG58_BRINGOSC_1_Val << FUSES_FCCFG58_BRINGOSC_Pos) /* (FUSES_FCCFG58) Ring Oscillator depth is default + 1 ORDLY15 (DLY1) Position */
#define FUSES_FCCFG58_BRINGOSC_2              (FUSES_FCCFG58_BRINGOSC_2_Val << FUSES_FCCFG58_BRINGOSC_Pos) /* (FUSES_FCCFG58) Ring Oscillator depth is default + 2 ORDLU15 (DLY2) Position */
#define FUSES_FCCFG58_BRINGOSC_3              (FUSES_FCCFG58_BRINGOSC_3_Val << FUSES_FCCFG58_BRINGOSC_Pos) /* (FUSES_FCCFG58) Ring Oscillator depth is default + 3 ORDLY15 (DLY3) Position */
#define FUSES_FCCFG58_Msk                     _UINT32_(0x00000003)                                 /* (FUSES_FCCFG58) Register Mask  */


/* -------- FUSES_FCCFG59 : (FUSES Offset: 0x16C) ( R/ 32) Calibration Configuration 59 Register -------- */
#define FUSES_FCCFG59_IDAU_EN_Pos             _UINT32_(0)                                          /* (FUSES_FCCFG59) IDAU Enabled Position */
#define FUSES_FCCFG59_IDAU_EN_Msk             (_UINT32_(0x1) << FUSES_FCCFG59_IDAU_EN_Pos)         /* (FUSES_FCCFG59) IDAU Enabled Mask */
#define FUSES_FCCFG59_IDAU_EN(value)          (FUSES_FCCFG59_IDAU_EN_Msk & (_UINT32_(value) << FUSES_FCCFG59_IDAU_EN_Pos)) /* Assignment of value for IDAU_EN in the FUSES_FCCFG59 register */
#define   FUSES_FCCFG59_IDAU_EN_0_Val         _UINT32_(0x0)                                        /* (FUSES_FCCFG59) GC device. All IDAU regions exempt. The boot code will initialize the IDAU, H2PB and PAC as described in Section 2.9.2  */
#define   FUSES_FCCFG59_IDAU_EN_1_Val         _UINT32_(0x1)                                        /* (FUSES_FCCFG59) IDAU regions enabled. The boot code will initialize the IDAU, H2PB and PAC to the values set by customer and referred to in USERCFG as described in Section 2.9.3  */
#define FUSES_FCCFG59_IDAU_EN_0               (FUSES_FCCFG59_IDAU_EN_0_Val << FUSES_FCCFG59_IDAU_EN_Pos) /* (FUSES_FCCFG59) GC device. All IDAU regions exempt. The boot code will initialize the IDAU, H2PB and PAC as described in Section 2.9.2 Position */
#define FUSES_FCCFG59_IDAU_EN_1               (FUSES_FCCFG59_IDAU_EN_1_Val << FUSES_FCCFG59_IDAU_EN_Pos) /* (FUSES_FCCFG59) IDAU regions enabled. The boot code will initialize the IDAU, H2PB and PAC to the values set by customer and referred to in USERCFG as described in Section 2.9.3 Position */
#define FUSES_FCCFG59_Msk                     _UINT32_(0x00000001)                                 /* (FUSES_FCCFG59) Register Mask  */


/* -------- FUSES_FCCFG60 : (FUSES Offset: 0x170) ( R/ 32) Calibration Configuration 60 Register -------- */
#define FUSES_FCCFG60_PUFRAMDNTIME_Pos        _UINT32_(0)                                          /* (FUSES_FCCFG60) PUF RAM Power Down Delay Time Position */
#define FUSES_FCCFG60_PUFRAMDNTIME_Msk        (_UINT32_(0xFFFFFFFF) << FUSES_FCCFG60_PUFRAMDNTIME_Pos) /* (FUSES_FCCFG60) PUF RAM Power Down Delay Time Mask */
#define FUSES_FCCFG60_PUFRAMDNTIME(value)     (FUSES_FCCFG60_PUFRAMDNTIME_Msk & (_UINT32_(value) << FUSES_FCCFG60_PUFRAMDNTIME_Pos)) /* Assignment of value for PUFRAMDNTIME in the FUSES_FCCFG60 register */
#define FUSES_FCCFG60_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (FUSES_FCCFG60) Register Mask  */


/* -------- FUSES_FCCFG61 : (FUSES Offset: 0x174) ( R/ 32) Calibration Configuration 61 Register -------- */
#define FUSES_FCCFG61_PUFRAMUPTIME_Pos        _UINT32_(0)                                          /* (FUSES_FCCFG61) PUF RAM Power Up Delay Time Position */
#define FUSES_FCCFG61_PUFRAMUPTIME_Msk        (_UINT32_(0xFFFFFFFF) << FUSES_FCCFG61_PUFRAMUPTIME_Pos) /* (FUSES_FCCFG61) PUF RAM Power Up Delay Time Mask */
#define FUSES_FCCFG61_PUFRAMUPTIME(value)     (FUSES_FCCFG61_PUFRAMUPTIME_Msk & (_UINT32_(value) << FUSES_FCCFG61_PUFRAMUPTIME_Pos)) /* Assignment of value for PUFRAMUPTIME in the FUSES_FCCFG61 register */
#define FUSES_FCCFG61_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (FUSES_FCCFG61) Register Mask  */


/* -------- FUSES_FCCFG64 : (FUSES Offset: 0x180) ( R/ 32) Calibration Configuration 64 Register -------- */
#define FUSES_FCCFG64_PTC_CALIB_PTC_IBIAS_TRIM_Pos _UINT32_(0)                                          /* (FUSES_FCCFG64) PTC IBIAS TRIM Position */
#define FUSES_FCCFG64_PTC_CALIB_PTC_IBIAS_TRIM_Msk (_UINT32_(0x7) << FUSES_FCCFG64_PTC_CALIB_PTC_IBIAS_TRIM_Pos) /* (FUSES_FCCFG64) PTC IBIAS TRIM Mask */
#define FUSES_FCCFG64_PTC_CALIB_PTC_IBIAS_TRIM(value) (FUSES_FCCFG64_PTC_CALIB_PTC_IBIAS_TRIM_Msk & (_UINT32_(value) << FUSES_FCCFG64_PTC_CALIB_PTC_IBIAS_TRIM_Pos)) /* Assignment of value for PTC_CALIB_PTC_IBIAS_TRIM in the FUSES_FCCFG64 register */
#define FUSES_FCCFG64_PTC_CALIB_PTAT_EN_Pos   _UINT32_(3)                                          /* (FUSES_FCCFG64) Enable PTAT current Position */
#define FUSES_FCCFG64_PTC_CALIB_PTAT_EN_Msk   (_UINT32_(0x1) << FUSES_FCCFG64_PTC_CALIB_PTAT_EN_Pos) /* (FUSES_FCCFG64) Enable PTAT current Mask */
#define FUSES_FCCFG64_PTC_CALIB_PTAT_EN(value) (FUSES_FCCFG64_PTC_CALIB_PTAT_EN_Msk & (_UINT32_(value) << FUSES_FCCFG64_PTC_CALIB_PTAT_EN_Pos)) /* Assignment of value for PTC_CALIB_PTAT_EN in the FUSES_FCCFG64 register */
#define FUSES_FCCFG64_PTC_CALIB_EXT_IBIAS_EN_Pos _UINT32_(4)                                          /* (FUSES_FCCFG64) Enable External Bias Position */
#define FUSES_FCCFG64_PTC_CALIB_EXT_IBIAS_EN_Msk (_UINT32_(0x1) << FUSES_FCCFG64_PTC_CALIB_EXT_IBIAS_EN_Pos) /* (FUSES_FCCFG64) Enable External Bias Mask */
#define FUSES_FCCFG64_PTC_CALIB_EXT_IBIAS_EN(value) (FUSES_FCCFG64_PTC_CALIB_EXT_IBIAS_EN_Msk & (_UINT32_(value) << FUSES_FCCFG64_PTC_CALIB_EXT_IBIAS_EN_Pos)) /* Assignment of value for PTC_CALIB_EXT_IBIAS_EN in the FUSES_FCCFG64 register */
#define FUSES_FCCFG64_Msk                     _UINT32_(0x0000001F)                                 /* (FUSES_FCCFG64) Register Mask  */


/* -------- FUSES_FCCFG65 : (FUSES Offset: 0x184) ( R/ 32) Calibration Configuration 65 Register -------- */
#define FUSES_FCCFG65_EN_CMBF_Pos             _UINT32_(0)                                          /* (FUSES_FCCFG65) Enable Common Mode Power Cycling Position */
#define FUSES_FCCFG65_EN_CMBF_Msk             (_UINT32_(0x1) << FUSES_FCCFG65_EN_CMBF_Pos)         /* (FUSES_FCCFG65) Enable Common Mode Power Cycling Mask */
#define FUSES_FCCFG65_EN_CMBF(value)          (FUSES_FCCFG65_EN_CMBF_Msk & (_UINT32_(value) << FUSES_FCCFG65_EN_CMBF_Pos)) /* Assignment of value for EN_CMBF in the FUSES_FCCFG65 register */
#define FUSES_FCCFG65_EN_DITHER_Pos           _UINT32_(2)                                          /* (FUSES_FCCFG65) Enable Dithering Position */
#define FUSES_FCCFG65_EN_DITHER_Msk           (_UINT32_(0x1) << FUSES_FCCFG65_EN_DITHER_Pos)       /* (FUSES_FCCFG65) Enable Dithering Mask */
#define FUSES_FCCFG65_EN_DITHER(value)        (FUSES_FCCFG65_EN_DITHER_Msk & (_UINT32_(value) << FUSES_FCCFG65_EN_DITHER_Pos)) /* Assignment of value for EN_DITHER in the FUSES_FCCFG65 register */
#define FUSES_FCCFG65_DIS_FAZ_Pos             _UINT32_(3)                                          /* (FUSES_FCCFG65) First Auto Zeroing Position */
#define FUSES_FCCFG65_DIS_FAZ_Msk             (_UINT32_(0x1) << FUSES_FCCFG65_DIS_FAZ_Pos)         /* (FUSES_FCCFG65) First Auto Zeroing Mask */
#define FUSES_FCCFG65_DIS_FAZ(value)          (FUSES_FCCFG65_DIS_FAZ_Msk & (_UINT32_(value) << FUSES_FCCFG65_DIS_FAZ_Pos)) /* Assignment of value for DIS_FAZ in the FUSES_FCCFG65 register */
#define FUSES_FCCFG65_DIS_SAZ_Pos             _UINT32_(4)                                          /* (FUSES_FCCFG65) Second Auto Zeroing Position */
#define FUSES_FCCFG65_DIS_SAZ_Msk             (_UINT32_(0x1) << FUSES_FCCFG65_DIS_SAZ_Pos)         /* (FUSES_FCCFG65) Second Auto Zeroing Mask */
#define FUSES_FCCFG65_DIS_SAZ(value)          (FUSES_FCCFG65_DIS_SAZ_Msk & (_UINT32_(value) << FUSES_FCCFG65_DIS_SAZ_Pos)) /* Assignment of value for DIS_SAZ in the FUSES_FCCFG65 register */
#define FUSES_FCCFG65_DIS_LAZ_Pos             _UINT32_(5)                                          /* (FUSES_FCCFG65) Current Auto Zeroing Position */
#define FUSES_FCCFG65_DIS_LAZ_Msk             (_UINT32_(0x1) << FUSES_FCCFG65_DIS_LAZ_Pos)         /* (FUSES_FCCFG65) Current Auto Zeroing Mask */
#define FUSES_FCCFG65_DIS_LAZ(value)          (FUSES_FCCFG65_DIS_LAZ_Msk & (_UINT32_(value) << FUSES_FCCFG65_DIS_LAZ_Pos)) /* Assignment of value for DIS_LAZ in the FUSES_FCCFG65 register */
#define FUSES_FCCFG65_EN_RDAC_Pos             _UINT32_(6)                                          /* (FUSES_FCCFG65) RDAC Duty Cycle Position */
#define FUSES_FCCFG65_EN_RDAC_Msk             (_UINT32_(0x1) << FUSES_FCCFG65_EN_RDAC_Pos)         /* (FUSES_FCCFG65) RDAC Duty Cycle Mask */
#define FUSES_FCCFG65_EN_RDAC(value)          (FUSES_FCCFG65_EN_RDAC_Msk & (_UINT32_(value) << FUSES_FCCFG65_EN_RDAC_Pos)) /* Assignment of value for EN_RDAC in the FUSES_FCCFG65 register */
#define FUSES_FCCFG65_DBG_SEL_Pos             _UINT32_(7)                                          /* (FUSES_FCCFG65) Enable Test Output Position */
#define FUSES_FCCFG65_DBG_SEL_Msk             (_UINT32_(0x1) << FUSES_FCCFG65_DBG_SEL_Pos)         /* (FUSES_FCCFG65) Enable Test Output Mask */
#define FUSES_FCCFG65_DBG_SEL(value)          (FUSES_FCCFG65_DBG_SEL_Msk & (_UINT32_(value) << FUSES_FCCFG65_DBG_SEL_Pos)) /* Assignment of value for DBG_SEL in the FUSES_FCCFG65 register */
#define FUSES_FCCFG65_SEL_DEL_Pos             _UINT32_(8)                                          /* (FUSES_FCCFG65) Select Value to comp_out Position */
#define FUSES_FCCFG65_SEL_DEL_Msk             (_UINT32_(0x1) << FUSES_FCCFG65_SEL_DEL_Pos)         /* (FUSES_FCCFG65) Select Value to comp_out Mask */
#define FUSES_FCCFG65_SEL_DEL(value)          (FUSES_FCCFG65_SEL_DEL_Msk & (_UINT32_(value) << FUSES_FCCFG65_SEL_DEL_Pos)) /* Assignment of value for SEL_DEL in the FUSES_FCCFG65 register */
#define FUSES_FCCFG65_T1_DELAY_Pos            _UINT32_(9)                                          /* (FUSES_FCCFG65) Programmable delay, selects the delay between regen and latch Position */
#define FUSES_FCCFG65_T1_DELAY_Msk            (_UINT32_(0x3) << FUSES_FCCFG65_T1_DELAY_Pos)        /* (FUSES_FCCFG65) Programmable delay, selects the delay between regen and latch Mask */
#define FUSES_FCCFG65_T1_DELAY(value)         (FUSES_FCCFG65_T1_DELAY_Msk & (_UINT32_(value) << FUSES_FCCFG65_T1_DELAY_Pos)) /* Assignment of value for T1_DELAY in the FUSES_FCCFG65 register */
#define FUSES_FCCFG65_TCLK_DIV_Pos            _UINT32_(11)                                         /* (FUSES_FCCFG65) Programmable divider for adc_clk_div. The division ratio is 256, 128, 64,32, and 16 going from MSB to LSB. Position */
#define FUSES_FCCFG65_TCLK_DIV_Msk            (_UINT32_(0x1F) << FUSES_FCCFG65_TCLK_DIV_Pos)       /* (FUSES_FCCFG65) Programmable divider for adc_clk_div. The division ratio is 256, 128, 64,32, and 16 going from MSB to LSB. Mask */
#define FUSES_FCCFG65_TCLK_DIV(value)         (FUSES_FCCFG65_TCLK_DIV_Msk & (_UINT32_(value) << FUSES_FCCFG65_TCLK_DIV_Pos)) /* Assignment of value for TCLK_DIV in the FUSES_FCCFG65 register */
#define FUSES_FCCFG65_IADC_1_Pos              _UINT32_(20)                                         /* (FUSES_FCCFG65) Controls the current consumption for of the whole ADC Position */
#define FUSES_FCCFG65_IADC_1_Msk              (_UINT32_(0x3) << FUSES_FCCFG65_IADC_1_Pos)          /* (FUSES_FCCFG65) Controls the current consumption for of the whole ADC Mask */
#define FUSES_FCCFG65_IADC_1(value)           (FUSES_FCCFG65_IADC_1_Msk & (_UINT32_(value) << FUSES_FCCFG65_IADC_1_Pos)) /* Assignment of value for IADC_1 in the FUSES_FCCFG65 register */
#define FUSES_FCCFG65_IADC_2_Pos              _UINT32_(22)                                         /* (FUSES_FCCFG65) Controls the current consumption for of the whole ADC. Position */
#define FUSES_FCCFG65_IADC_2_Msk              (_UINT32_(0x3) << FUSES_FCCFG65_IADC_2_Pos)          /* (FUSES_FCCFG65) Controls the current consumption for of the whole ADC. Mask */
#define FUSES_FCCFG65_IADC_2(value)           (FUSES_FCCFG65_IADC_2_Msk & (_UINT32_(value) << FUSES_FCCFG65_IADC_2_Pos)) /* Assignment of value for IADC_2 in the FUSES_FCCFG65 register */
#define FUSES_FCCFG65_ICMP_1_Pos              _UINT32_(24)                                         /* (FUSES_FCCFG65) Controls the bias current for 1 stage of the comparator. This will control the resolution needed by comparator. More current means less time but at expense of gain. Position */
#define FUSES_FCCFG65_ICMP_1_Msk              (_UINT32_(0x3) << FUSES_FCCFG65_ICMP_1_Pos)          /* (FUSES_FCCFG65) Controls the bias current for 1 stage of the comparator. This will control the resolution needed by comparator. More current means less time but at expense of gain. Mask */
#define FUSES_FCCFG65_ICMP_1(value)           (FUSES_FCCFG65_ICMP_1_Msk & (_UINT32_(value) << FUSES_FCCFG65_ICMP_1_Pos)) /* Assignment of value for ICMP_1 in the FUSES_FCCFG65 register */
#define FUSES_FCCFG65_ICMP_2_Pos              _UINT32_(26)                                         /* (FUSES_FCCFG65) Controls the bias current for 2 stage of the comparator. This will control the resolution needed by comparator. More current means less time but at expense of gain. Position */
#define FUSES_FCCFG65_ICMP_2_Msk              (_UINT32_(0x3) << FUSES_FCCFG65_ICMP_2_Pos)          /* (FUSES_FCCFG65) Controls the bias current for 2 stage of the comparator. This will control the resolution needed by comparator. More current means less time but at expense of gain. Mask */
#define FUSES_FCCFG65_ICMP_2(value)           (FUSES_FCCFG65_ICMP_2_Msk & (_UINT32_(value) << FUSES_FCCFG65_ICMP_2_Pos)) /* Assignment of value for ICMP_2 in the FUSES_FCCFG65 register */
#define FUSES_FCCFG65_ICMBF_Pos               _UINT32_(28)                                         /* (FUSES_FCCFG65) Controls the bias current for Common mode buffer amplifier (CMBF) Position */
#define FUSES_FCCFG65_ICMBF_Msk               (_UINT32_(0x3) << FUSES_FCCFG65_ICMBF_Pos)           /* (FUSES_FCCFG65) Controls the bias current for Common mode buffer amplifier (CMBF) Mask */
#define FUSES_FCCFG65_ICMBF(value)            (FUSES_FCCFG65_ICMBF_Msk & (_UINT32_(value) << FUSES_FCCFG65_ICMBF_Pos)) /* Assignment of value for ICMBF in the FUSES_FCCFG65 register */
#define FUSES_FCCFG65_EN_ATEST_Pos            _UINT32_(30)                                         /* (FUSES_FCCFG65) Enable analog test signals Position */
#define FUSES_FCCFG65_EN_ATEST_Msk            (_UINT32_(0x1) << FUSES_FCCFG65_EN_ATEST_Pos)        /* (FUSES_FCCFG65) Enable analog test signals Mask */
#define FUSES_FCCFG65_EN_ATEST(value)         (FUSES_FCCFG65_EN_ATEST_Msk & (_UINT32_(value) << FUSES_FCCFG65_EN_ATEST_Pos)) /* Assignment of value for EN_ATEST in the FUSES_FCCFG65 register */
#define FUSES_FCCFG65_EN_EXT_BIAS_Pos         _UINT32_(31)                                         /* (FUSES_FCCFG65) Internal switched capacitor bias current allows to make the bias current proportional to conversion frequency. Position */
#define FUSES_FCCFG65_EN_EXT_BIAS_Msk         (_UINT32_(0x1) << FUSES_FCCFG65_EN_EXT_BIAS_Pos)     /* (FUSES_FCCFG65) Internal switched capacitor bias current allows to make the bias current proportional to conversion frequency. Mask */
#define FUSES_FCCFG65_EN_EXT_BIAS(value)      (FUSES_FCCFG65_EN_EXT_BIAS_Msk & (_UINT32_(value) << FUSES_FCCFG65_EN_EXT_BIAS_Pos)) /* Assignment of value for EN_EXT_BIAS in the FUSES_FCCFG65 register */
#define FUSES_FCCFG65_Msk                     _UINT32_(0xFFF0FFFD)                                 /* (FUSES_FCCFG65) Register Mask  */


/* -------- FUSES_FCCFG66 : (FUSES Offset: 0x188) ( R/ 32) Calibration Configuration 66 Register -------- */
#define FUSES_FCCFG66_AC_CONFIG_Pos           _UINT32_(0)                                          /* (FUSES_FCCFG66) Comparator 0 Calibration Configuration bits.' Position */
#define FUSES_FCCFG66_AC_CONFIG_Msk           (_UINT32_(0xF) << FUSES_FCCFG66_AC_CONFIG_Pos)       /* (FUSES_FCCFG66) Comparator 0 Calibration Configuration bits.' Mask */
#define FUSES_FCCFG66_AC_CONFIG(value)        (FUSES_FCCFG66_AC_CONFIG_Msk & (_UINT32_(value) << FUSES_FCCFG66_AC_CONFIG_Pos)) /* Assignment of value for AC_CONFIG in the FUSES_FCCFG66 register */
#define FUSES_FCCFG66_Msk                     _UINT32_(0x0000000F)                                 /* (FUSES_FCCFG66) Register Mask  */


/* -------- FUSES_FCCFG68 : (FUSES Offset: 0x190) ( R/ 32) Calibration Configuration 68 Register -------- */
#define FUSES_FCCFG68_TRANSP_Pos              _UINT32_(0)                                          /* (FUSES_FCCFG68) USB PAD P Driver Configuration bits.' Position */
#define FUSES_FCCFG68_TRANSP_Msk              (_UINT32_(0x1F) << FUSES_FCCFG68_TRANSP_Pos)         /* (FUSES_FCCFG68) USB PAD P Driver Configuration bits.' Mask */
#define FUSES_FCCFG68_TRANSP(value)           (FUSES_FCCFG68_TRANSP_Msk & (_UINT32_(value) << FUSES_FCCFG68_TRANSP_Pos)) /* Assignment of value for TRANSP in the FUSES_FCCFG68 register */
#define FUSES_FCCFG68_TRANSN_Pos              _UINT32_(6)                                          /* (FUSES_FCCFG68) USB PAD N Driver Configuration bits.' Position */
#define FUSES_FCCFG68_TRANSN_Msk              (_UINT32_(0x1F) << FUSES_FCCFG68_TRANSN_Pos)         /* (FUSES_FCCFG68) USB PAD N Driver Configuration bits.' Mask */
#define FUSES_FCCFG68_TRANSN(value)           (FUSES_FCCFG68_TRANSN_Msk & (_UINT32_(value) << FUSES_FCCFG68_TRANSN_Pos)) /* Assignment of value for TRANSN in the FUSES_FCCFG68 register */
#define FUSES_FCCFG68_TRIM_Pos                _UINT32_(12)                                         /* (FUSES_FCCFG68) USB PAD Rise/Fall Configuration bits.' Position */
#define FUSES_FCCFG68_TRIM_Msk                (_UINT32_(0x7) << FUSES_FCCFG68_TRIM_Pos)            /* (FUSES_FCCFG68) USB PAD Rise/Fall Configuration bits.' Mask */
#define FUSES_FCCFG68_TRIM(value)             (FUSES_FCCFG68_TRIM_Msk & (_UINT32_(value) << FUSES_FCCFG68_TRIM_Pos)) /* Assignment of value for TRIM in the FUSES_FCCFG68 register */
#define FUSES_FCCFG68_Msk                     _UINT32_(0x000077DF)                                 /* (FUSES_FCCFG68) Register Mask  */


/* FUSES register offsets definitions */
#define FUSES_DAL_REG_OFST             _UINT32_(0x00)      /* (FUSES_DAL) DEVICE ACCESS LEVEL Register Offset */
#define FUSES_FRCFGBROM_REG_OFST       _UINT32_(0x400)     /* (FUSES_FRCFGBROM) PRE-BOOT bromc user Options Register Offset */
#define FUSES_FRCFGMBIST_REG_OFST      _UINT32_(0x408)     /* (FUSES_FRCFGMBIST) PRE-BOOT MBIST user Options Register Offset */
#define FUSES_KEYVAL_INTCHK0_REG_OFST  _UINT32_(0x420)     /* (FUSES_KEYVAL_INTCHK0) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_INTCHK1_REG_OFST  _UINT32_(0x424)     /* (FUSES_KEYVAL_INTCHK1) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_INTCHK2_REG_OFST  _UINT32_(0x428)     /* (FUSES_KEYVAL_INTCHK2) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_INTCHK3_REG_OFST  _UINT32_(0x42C)     /* (FUSES_KEYVAL_INTCHK3) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_INTCHK4_REG_OFST  _UINT32_(0x430)     /* (FUSES_KEYVAL_INTCHK4) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_INTCHK5_REG_OFST  _UINT32_(0x434)     /* (FUSES_KEYVAL_INTCHK5) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_INTCHK6_REG_OFST  _UINT32_(0x438)     /* (FUSES_KEYVAL_INTCHK6) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_INTCHK7_REG_OFST  _UINT32_(0x43C)     /* (FUSES_KEYVAL_INTCHK7) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_ALL0_REG_OFST  _UINT32_(0x440)     /* (FUSES_KEYVAL_CE_ALL0) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_ALL1_REG_OFST  _UINT32_(0x444)     /* (FUSES_KEYVAL_CE_ALL1) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_ALL2_REG_OFST  _UINT32_(0x448)     /* (FUSES_KEYVAL_CE_ALL2) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_ALL3_REG_OFST  _UINT32_(0x44C)     /* (FUSES_KEYVAL_CE_ALL3) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_ALL4_REG_OFST  _UINT32_(0x450)     /* (FUSES_KEYVAL_CE_ALL4) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_ALL5_REG_OFST  _UINT32_(0x454)     /* (FUSES_KEYVAL_CE_ALL5) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_ALL6_REG_OFST  _UINT32_(0x458)     /* (FUSES_KEYVAL_CE_ALL6) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_ALL7_REG_OFST  _UINT32_(0x45C)     /* (FUSES_KEYVAL_CE_ALL7) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_S_CR0_REG_OFST _UINT32_(0x460)     /* (FUSES_KEYVAL_CE_S_CR0) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_S_CR1_REG_OFST _UINT32_(0x464)     /* (FUSES_KEYVAL_CE_S_CR1) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_S_CR2_REG_OFST _UINT32_(0x468)     /* (FUSES_KEYVAL_CE_S_CR2) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_S_CR3_REG_OFST _UINT32_(0x46C)     /* (FUSES_KEYVAL_CE_S_CR3) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_S_CR4_REG_OFST _UINT32_(0x470)     /* (FUSES_KEYVAL_CE_S_CR4) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_S_CR5_REG_OFST _UINT32_(0x474)     /* (FUSES_KEYVAL_CE_S_CR5) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_S_CR6_REG_OFST _UINT32_(0x478)     /* (FUSES_KEYVAL_CE_S_CR6) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_S_CR7_REG_OFST _UINT32_(0x47C)     /* (FUSES_KEYVAL_CE_S_CR7) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_S0_REG_OFST    _UINT32_(0x480)     /* (FUSES_KEYVAL_CE_S0) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_S1_REG_OFST    _UINT32_(0x484)     /* (FUSES_KEYVAL_CE_S1) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_S2_REG_OFST    _UINT32_(0x488)     /* (FUSES_KEYVAL_CE_S2) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_S3_REG_OFST    _UINT32_(0x48C)     /* (FUSES_KEYVAL_CE_S3) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_S4_REG_OFST    _UINT32_(0x490)     /* (FUSES_KEYVAL_CE_S4) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_S5_REG_OFST    _UINT32_(0x494)     /* (FUSES_KEYVAL_CE_S5) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_S6_REG_OFST    _UINT32_(0x498)     /* (FUSES_KEYVAL_CE_S6) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_S7_REG_OFST    _UINT32_(0x49C)     /* (FUSES_KEYVAL_CE_S7) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_NS_CR0_REG_OFST _UINT32_(0x4A0)     /* (FUSES_KEYVAL_CE_NS_CR0) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_NS_CR1_REG_OFST _UINT32_(0x4A4)     /* (FUSES_KEYVAL_CE_NS_CR1) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_NS_CR2_REG_OFST _UINT32_(0x4A8)     /* (FUSES_KEYVAL_CE_NS_CR2) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_NS_CR3_REG_OFST _UINT32_(0x4AC)     /* (FUSES_KEYVAL_CE_NS_CR3) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_NS_CR4_REG_OFST _UINT32_(0x4B0)     /* (FUSES_KEYVAL_CE_NS_CR4) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_NS_CR5_REG_OFST _UINT32_(0x4B4)     /* (FUSES_KEYVAL_CE_NS_CR5) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_NS_CR6_REG_OFST _UINT32_(0x4B8)     /* (FUSES_KEYVAL_CE_NS_CR6) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_NS_CR7_REG_OFST _UINT32_(0x4BC)     /* (FUSES_KEYVAL_CE_NS_CR7) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_NS0_REG_OFST   _UINT32_(0x4C0)     /* (FUSES_KEYVAL_CE_NS0) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_NS1_REG_OFST   _UINT32_(0x4C4)     /* (FUSES_KEYVAL_CE_NS1) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_NS2_REG_OFST   _UINT32_(0x4C8)     /* (FUSES_KEYVAL_CE_NS2) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_NS3_REG_OFST   _UINT32_(0x4CC)     /* (FUSES_KEYVAL_CE_NS3) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_NS4_REG_OFST   _UINT32_(0x4D0)     /* (FUSES_KEYVAL_CE_NS4) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_NS5_REG_OFST   _UINT32_(0x4D4)     /* (FUSES_KEYVAL_CE_NS5) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_NS6_REG_OFST   _UINT32_(0x4D8)     /* (FUSES_KEYVAL_CE_NS6) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_CE_NS7_REG_OFST   _UINT32_(0x4DC)     /* (FUSES_KEYVAL_CE_NS7) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_PRG_PG0_REG_OFST  _UINT32_(0x4E0)     /* (FUSES_KEYVAL_PRG_PG0) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_PRG_PG1_REG_OFST  _UINT32_(0x4E4)     /* (FUSES_KEYVAL_PRG_PG1) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_PRG_PG2_REG_OFST  _UINT32_(0x4E8)     /* (FUSES_KEYVAL_PRG_PG2) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_PRG_PG3_REG_OFST  _UINT32_(0x4EC)     /* (FUSES_KEYVAL_PRG_PG3) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_PRG_PG4_REG_OFST  _UINT32_(0x4F0)     /* (FUSES_KEYVAL_PRG_PG4) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_PRG_PG5_REG_OFST  _UINT32_(0x4F4)     /* (FUSES_KEYVAL_PRG_PG5) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_PRG_PG6_REG_OFST  _UINT32_(0x4F8)     /* (FUSES_KEYVAL_PRG_PG6) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_PRG_PG7_REG_OFST  _UINT32_(0x4FC)     /* (FUSES_KEYVAL_PRG_PG7) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_SDAL1_0_REG_OFST  _UINT32_(0x500)     /* (FUSES_KEYVAL_SDAL1_0) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_SDAL1_1_REG_OFST  _UINT32_(0x504)     /* (FUSES_KEYVAL_SDAL1_1) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_SDAL1_2_REG_OFST  _UINT32_(0x508)     /* (FUSES_KEYVAL_SDAL1_2) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_SDAL1_3_REG_OFST  _UINT32_(0x50C)     /* (FUSES_KEYVAL_SDAL1_3) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_SDAL1_4_REG_OFST  _UINT32_(0x510)     /* (FUSES_KEYVAL_SDAL1_4) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_SDAL1_5_REG_OFST  _UINT32_(0x514)     /* (FUSES_KEYVAL_SDAL1_5) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_SDAL1_6_REG_OFST  _UINT32_(0x518)     /* (FUSES_KEYVAL_SDAL1_6) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_SDAL1_7_REG_OFST  _UINT32_(0x51C)     /* (FUSES_KEYVAL_SDAL1_7) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_SDAL0_0_REG_OFST  _UINT32_(0x520)     /* (FUSES_KEYVAL_SDAL0_0) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_SDAL0_1_REG_OFST  _UINT32_(0x524)     /* (FUSES_KEYVAL_SDAL0_1) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_SDAL0_2_REG_OFST  _UINT32_(0x528)     /* (FUSES_KEYVAL_SDAL0_2) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_SDAL0_3_REG_OFST  _UINT32_(0x52C)     /* (FUSES_KEYVAL_SDAL0_3) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_SDAL0_4_REG_OFST  _UINT32_(0x530)     /* (FUSES_KEYVAL_SDAL0_4) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_SDAL0_5_REG_OFST  _UINT32_(0x534)     /* (FUSES_KEYVAL_SDAL0_5) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_SDAL0_6_REG_OFST  _UINT32_(0x538)     /* (FUSES_KEYVAL_SDAL0_6) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_SDAL0_7_REG_OFST  _UINT32_(0x53C)     /* (FUSES_KEYVAL_SDAL0_7) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_DAL_EL0_REG_OFST  _UINT32_(0x540)     /* (FUSES_KEYVAL_DAL_EL0) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_DAL_EL1_REG_OFST  _UINT32_(0x544)     /* (FUSES_KEYVAL_DAL_EL1) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_DAL_EL2_REG_OFST  _UINT32_(0x548)     /* (FUSES_KEYVAL_DAL_EL2) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_DAL_EL3_REG_OFST  _UINT32_(0x54C)     /* (FUSES_KEYVAL_DAL_EL3) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_DAL_EL4_REG_OFST  _UINT32_(0x550)     /* (FUSES_KEYVAL_DAL_EL4) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_DAL_EL5_REG_OFST  _UINT32_(0x554)     /* (FUSES_KEYVAL_DAL_EL5) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_DAL_EL6_REG_OFST  _UINT32_(0x558)     /* (FUSES_KEYVAL_DAL_EL6) Mapped Fuse Register Offset */
#define FUSES_KEYVAL_DAL_EL7_REG_OFST  _UINT32_(0x55C)     /* (FUSES_KEYVAL_DAL_EL7) Mapped Fuse Register Offset */
#define FUSES_PUF_AC_REG_OFST          _UINT32_(0xC00)     /* (FUSES_PUF_AC) Mapped Fuse Register Offset */
#define FUSES_PUF_AC0_REG_OFST         _UINT32_(0xC00)     /* (FUSES_PUF_AC0) Mapped Fuse Register Offset */
#define FUSES_PUF_AC1_REG_OFST         _UINT32_(0xC04)     /* (FUSES_PUF_AC1) Mapped Fuse Register Offset */
#define FUSES_PUF_AC2_REG_OFST         _UINT32_(0xC08)     /* (FUSES_PUF_AC2) Mapped Fuse Register Offset */
#define FUSES_PUF_AC3_REG_OFST         _UINT32_(0xC0C)     /* (FUSES_PUF_AC3) Mapped Fuse Register Offset */
#define FUSES_PUF_AC4_REG_OFST         _UINT32_(0xC10)     /* (FUSES_PUF_AC4) Mapped Fuse Register Offset */
#define FUSES_PUF_AC5_REG_OFST         _UINT32_(0xC14)     /* (FUSES_PUF_AC5) Mapped Fuse Register Offset */
#define FUSES_PUF_AC6_REG_OFST         _UINT32_(0xC18)     /* (FUSES_PUF_AC6) Mapped Fuse Register Offset */
#define FUSES_PUF_AC7_REG_OFST         _UINT32_(0xC1C)     /* (FUSES_PUF_AC7) Mapped Fuse Register Offset */
#define FUSES_PUF_AC8_REG_OFST         _UINT32_(0xC20)     /* (FUSES_PUF_AC8) Mapped Fuse Register Offset */
#define FUSES_PUF_AC9_REG_OFST         _UINT32_(0xC24)     /* (FUSES_PUF_AC9) Mapped Fuse Register Offset */
#define FUSES_PUF_AC10_REG_OFST        _UINT32_(0xC28)     /* (FUSES_PUF_AC10) Mapped Fuse Register Offset */
#define FUSES_PUF_AC11_REG_OFST        _UINT32_(0xC2C)     /* (FUSES_PUF_AC11) Mapped Fuse Register Offset */
#define FUSES_PUF_AC12_REG_OFST        _UINT32_(0xC30)     /* (FUSES_PUF_AC12) Mapped Fuse Register Offset */
#define FUSES_PUF_AC13_REG_OFST        _UINT32_(0xC34)     /* (FUSES_PUF_AC13) Mapped Fuse Register Offset */
#define FUSES_PUF_AC14_REG_OFST        _UINT32_(0xC38)     /* (FUSES_PUF_AC14) Mapped Fuse Register Offset */
#define FUSES_PUF_AC15_REG_OFST        _UINT32_(0xC3C)     /* (FUSES_PUF_AC15) Mapped Fuse Register Offset */
#define FUSES_PUF_AC16_REG_OFST        _UINT32_(0xC40)     /* (FUSES_PUF_AC16) Mapped Fuse Register Offset */
#define FUSES_PUF_AC17_REG_OFST        _UINT32_(0xC44)     /* (FUSES_PUF_AC17) Mapped Fuse Register Offset */
#define FUSES_PUF_AC18_REG_OFST        _UINT32_(0xC48)     /* (FUSES_PUF_AC18) Mapped Fuse Register Offset */
#define FUSES_PUF_AC19_REG_OFST        _UINT32_(0xC4C)     /* (FUSES_PUF_AC19) Mapped Fuse Register Offset */
#define FUSES_PUF_AC20_REG_OFST        _UINT32_(0xC50)     /* (FUSES_PUF_AC20) Mapped Fuse Register Offset */
#define FUSES_PUF_AC21_REG_OFST        _UINT32_(0xC54)     /* (FUSES_PUF_AC21) Mapped Fuse Register Offset */
#define FUSES_PUF_AC22_REG_OFST        _UINT32_(0xC58)     /* (FUSES_PUF_AC22) Mapped Fuse Register Offset */
#define FUSES_PUF_AC23_REG_OFST        _UINT32_(0xC5C)     /* (FUSES_PUF_AC23) Mapped Fuse Register Offset */
#define FUSES_PUF_AC24_REG_OFST        _UINT32_(0xC60)     /* (FUSES_PUF_AC24) Mapped Fuse Register Offset */
#define FUSES_PUF_AC25_REG_OFST        _UINT32_(0xC64)     /* (FUSES_PUF_AC25) Mapped Fuse Register Offset */
#define FUSES_PUF_AC26_REG_OFST        _UINT32_(0xC68)     /* (FUSES_PUF_AC26) Mapped Fuse Register Offset */
#define FUSES_PUF_AC27_REG_OFST        _UINT32_(0xC6C)     /* (FUSES_PUF_AC27) Mapped Fuse Register Offset */
#define FUSES_PUF_AC28_REG_OFST        _UINT32_(0xC70)     /* (FUSES_PUF_AC28) Mapped Fuse Register Offset */
#define FUSES_PUF_AC29_REG_OFST        _UINT32_(0xC74)     /* (FUSES_PUF_AC29) Mapped Fuse Register Offset */
#define FUSES_PUF_AC30_REG_OFST        _UINT32_(0xC78)     /* (FUSES_PUF_AC30) Mapped Fuse Register Offset */
#define FUSES_PUF_AC31_REG_OFST        _UINT32_(0xC7C)     /* (FUSES_PUF_AC31) Mapped Fuse Register Offset */
#define FUSES_PUF_AC32_REG_OFST        _UINT32_(0xC80)     /* (FUSES_PUF_AC32) Mapped Fuse Register Offset */
#define FUSES_PUF_AC33_REG_OFST        _UINT32_(0xC84)     /* (FUSES_PUF_AC33) Mapped Fuse Register Offset */
#define FUSES_PUF_AC34_REG_OFST        _UINT32_(0xC88)     /* (FUSES_PUF_AC34) Mapped Fuse Register Offset */
#define FUSES_PUF_AC35_REG_OFST        _UINT32_(0xC8C)     /* (FUSES_PUF_AC35) Mapped Fuse Register Offset */
#define FUSES_PUF_AC36_REG_OFST        _UINT32_(0xC90)     /* (FUSES_PUF_AC36) Mapped Fuse Register Offset */
#define FUSES_PUF_AC37_REG_OFST        _UINT32_(0xC94)     /* (FUSES_PUF_AC37) Mapped Fuse Register Offset */
#define FUSES_PUF_AC38_REG_OFST        _UINT32_(0xC98)     /* (FUSES_PUF_AC38) Mapped Fuse Register Offset */
#define FUSES_PUF_AC39_REG_OFST        _UINT32_(0xC9C)     /* (FUSES_PUF_AC39) Mapped Fuse Register Offset */
#define FUSES_PUF_AC40_REG_OFST        _UINT32_(0xCA0)     /* (FUSES_PUF_AC40) Mapped Fuse Register Offset */
#define FUSES_PUF_AC41_REG_OFST        _UINT32_(0xCA4)     /* (FUSES_PUF_AC41) Mapped Fuse Register Offset */
#define FUSES_PUF_AC42_REG_OFST        _UINT32_(0xCA8)     /* (FUSES_PUF_AC42) Mapped Fuse Register Offset */
#define FUSES_PUF_AC43_REG_OFST        _UINT32_(0xCAC)     /* (FUSES_PUF_AC43) Mapped Fuse Register Offset */
#define FUSES_PUF_AC44_REG_OFST        _UINT32_(0xCB0)     /* (FUSES_PUF_AC44) Mapped Fuse Register Offset */
#define FUSES_PUF_AC45_REG_OFST        _UINT32_(0xCB4)     /* (FUSES_PUF_AC45) Mapped Fuse Register Offset */
#define FUSES_PUF_AC46_REG_OFST        _UINT32_(0xCB8)     /* (FUSES_PUF_AC46) Mapped Fuse Register Offset */
#define FUSES_PUF_AC47_REG_OFST        _UINT32_(0xCBC)     /* (FUSES_PUF_AC47) Mapped Fuse Register Offset */
#define FUSES_PUF_AC48_REG_OFST        _UINT32_(0xCC0)     /* (FUSES_PUF_AC48) Mapped Fuse Register Offset */
#define FUSES_PUF_AC49_REG_OFST        _UINT32_(0xCC4)     /* (FUSES_PUF_AC49) Mapped Fuse Register Offset */
#define FUSES_PUF_AC50_REG_OFST        _UINT32_(0xCC8)     /* (FUSES_PUF_AC50) Mapped Fuse Register Offset */
#define FUSES_PUF_AC51_REG_OFST        _UINT32_(0xCCC)     /* (FUSES_PUF_AC51) Mapped Fuse Register Offset */
#define FUSES_PUF_AC52_REG_OFST        _UINT32_(0xCD0)     /* (FUSES_PUF_AC52) Mapped Fuse Register Offset */
#define FUSES_PUF_AC53_REG_OFST        _UINT32_(0xCD4)     /* (FUSES_PUF_AC53) Mapped Fuse Register Offset */
#define FUSES_PUF_AC54_REG_OFST        _UINT32_(0xCD8)     /* (FUSES_PUF_AC54) Mapped Fuse Register Offset */
#define FUSES_PUF_AC55_REG_OFST        _UINT32_(0xCDC)     /* (FUSES_PUF_AC55) Mapped Fuse Register Offset */
#define FUSES_PUF_AC56_REG_OFST        _UINT32_(0xCE0)     /* (FUSES_PUF_AC56) Mapped Fuse Register Offset */
#define FUSES_PUF_AC57_REG_OFST        _UINT32_(0xCE4)     /* (FUSES_PUF_AC57) Mapped Fuse Register Offset */
#define FUSES_PUF_AC58_REG_OFST        _UINT32_(0xCE8)     /* (FUSES_PUF_AC58) Mapped Fuse Register Offset */
#define FUSES_PUF_AC59_REG_OFST        _UINT32_(0xCEC)     /* (FUSES_PUF_AC59) Mapped Fuse Register Offset */
#define FUSES_PUF_AC60_REG_OFST        _UINT32_(0xCF0)     /* (FUSES_PUF_AC60) Mapped Fuse Register Offset */
#define FUSES_PUF_AC61_REG_OFST        _UINT32_(0xCF4)     /* (FUSES_PUF_AC61) Mapped Fuse Register Offset */
#define FUSES_PUF_AC62_REG_OFST        _UINT32_(0xCF8)     /* (FUSES_PUF_AC62) Mapped Fuse Register Offset */
#define FUSES_PUF_AC63_REG_OFST        _UINT32_(0xCFC)     /* (FUSES_PUF_AC63) Mapped Fuse Register Offset */
#define FUSES_PUF_AC64_REG_OFST        _UINT32_(0xD00)     /* (FUSES_PUF_AC64) Mapped Fuse Register Offset */
#define FUSES_PUF_AC65_REG_OFST        _UINT32_(0xD04)     /* (FUSES_PUF_AC65) Mapped Fuse Register Offset */
#define FUSES_PUF_AC66_REG_OFST        _UINT32_(0xD08)     /* (FUSES_PUF_AC66) Mapped Fuse Register Offset */
#define FUSES_PUF_AC67_REG_OFST        _UINT32_(0xD0C)     /* (FUSES_PUF_AC67) Mapped Fuse Register Offset */
#define FUSES_PUF_AC68_REG_OFST        _UINT32_(0xD10)     /* (FUSES_PUF_AC68) Mapped Fuse Register Offset */
#define FUSES_PUF_AC69_REG_OFST        _UINT32_(0xD14)     /* (FUSES_PUF_AC69) Mapped Fuse Register Offset */
#define FUSES_PUF_AC70_REG_OFST        _UINT32_(0xD18)     /* (FUSES_PUF_AC70) Mapped Fuse Register Offset */
#define FUSES_PUF_AC71_REG_OFST        _UINT32_(0xD1C)     /* (FUSES_PUF_AC71) Mapped Fuse Register Offset */
#define FUSES_PUF_AC72_REG_OFST        _UINT32_(0xD20)     /* (FUSES_PUF_AC72) Mapped Fuse Register Offset */
#define FUSES_PUF_AC73_REG_OFST        _UINT32_(0xD24)     /* (FUSES_PUF_AC73) Mapped Fuse Register Offset */
#define FUSES_PUF_AC74_REG_OFST        _UINT32_(0xD28)     /* (FUSES_PUF_AC74) Mapped Fuse Register Offset */
#define FUSES_PUF_AC75_REG_OFST        _UINT32_(0xD2C)     /* (FUSES_PUF_AC75) Mapped Fuse Register Offset */
#define FUSES_PUF_AC76_REG_OFST        _UINT32_(0xD30)     /* (FUSES_PUF_AC76) Mapped Fuse Register Offset */
#define FUSES_PUF_AC77_REG_OFST        _UINT32_(0xD34)     /* (FUSES_PUF_AC77) Mapped Fuse Register Offset */
#define FUSES_PUF_AC78_REG_OFST        _UINT32_(0xD38)     /* (FUSES_PUF_AC78) Mapped Fuse Register Offset */
#define FUSES_PUF_AC79_REG_OFST        _UINT32_(0xD3C)     /* (FUSES_PUF_AC79) Mapped Fuse Register Offset */
#define FUSES_PUF_AC80_REG_OFST        _UINT32_(0xD40)     /* (FUSES_PUF_AC80) Mapped Fuse Register Offset */
#define FUSES_PUF_AC81_REG_OFST        _UINT32_(0xD44)     /* (FUSES_PUF_AC81) Mapped Fuse Register Offset */
#define FUSES_PUF_AC82_REG_OFST        _UINT32_(0xD48)     /* (FUSES_PUF_AC82) Mapped Fuse Register Offset */
#define FUSES_PUF_AC83_REG_OFST        _UINT32_(0xD4C)     /* (FUSES_PUF_AC83) Mapped Fuse Register Offset */
#define FUSES_PUF_AC84_REG_OFST        _UINT32_(0xD50)     /* (FUSES_PUF_AC84) Mapped Fuse Register Offset */
#define FUSES_PUF_AC85_REG_OFST        _UINT32_(0xD54)     /* (FUSES_PUF_AC85) Mapped Fuse Register Offset */
#define FUSES_PUF_AC86_REG_OFST        _UINT32_(0xD58)     /* (FUSES_PUF_AC86) Mapped Fuse Register Offset */
#define FUSES_PUF_AC87_REG_OFST        _UINT32_(0xD5C)     /* (FUSES_PUF_AC87) Mapped Fuse Register Offset */
#define FUSES_PUF_AC88_REG_OFST        _UINT32_(0xD60)     /* (FUSES_PUF_AC88) Mapped Fuse Register Offset */
#define FUSES_PUF_AC89_REG_OFST        _UINT32_(0xD64)     /* (FUSES_PUF_AC89) Mapped Fuse Register Offset */
#define FUSES_PUF_AC90_REG_OFST        _UINT32_(0xD68)     /* (FUSES_PUF_AC90) Mapped Fuse Register Offset */
#define FUSES_PUF_AC91_REG_OFST        _UINT32_(0xD6C)     /* (FUSES_PUF_AC91) Mapped Fuse Register Offset */
#define FUSES_PUF_AC92_REG_OFST        _UINT32_(0xD70)     /* (FUSES_PUF_AC92) Mapped Fuse Register Offset */
#define FUSES_PUF_AC93_REG_OFST        _UINT32_(0xD74)     /* (FUSES_PUF_AC93) Mapped Fuse Register Offset */
#define FUSES_PUF_AC94_REG_OFST        _UINT32_(0xD78)     /* (FUSES_PUF_AC94) Mapped Fuse Register Offset */
#define FUSES_PUF_AC95_REG_OFST        _UINT32_(0xD7C)     /* (FUSES_PUF_AC95) Mapped Fuse Register Offset */
#define FUSES_PUF_AC96_REG_OFST        _UINT32_(0xD80)     /* (FUSES_PUF_AC96) Mapped Fuse Register Offset */
#define FUSES_PUF_AC97_REG_OFST        _UINT32_(0xD84)     /* (FUSES_PUF_AC97) Mapped Fuse Register Offset */
#define FUSES_PUF_AC98_REG_OFST        _UINT32_(0xD88)     /* (FUSES_PUF_AC98) Mapped Fuse Register Offset */
#define FUSES_PUF_AC99_REG_OFST        _UINT32_(0xD8C)     /* (FUSES_PUF_AC99) Mapped Fuse Register Offset */
#define FUSES_PUF_AC100_REG_OFST       _UINT32_(0xD90)     /* (FUSES_PUF_AC100) Mapped Fuse Register Offset */
#define FUSES_PUF_AC101_REG_OFST       _UINT32_(0xD94)     /* (FUSES_PUF_AC101) Mapped Fuse Register Offset */
#define FUSES_PUF_AC102_REG_OFST       _UINT32_(0xD98)     /* (FUSES_PUF_AC102) Mapped Fuse Register Offset */
#define FUSES_PUF_AC103_REG_OFST       _UINT32_(0xD9C)     /* (FUSES_PUF_AC103) Mapped Fuse Register Offset */
#define FUSES_PUF_AC104_REG_OFST       _UINT32_(0xDA0)     /* (FUSES_PUF_AC104) Mapped Fuse Register Offset */
#define FUSES_PUF_AC105_REG_OFST       _UINT32_(0xDA4)     /* (FUSES_PUF_AC105) Mapped Fuse Register Offset */
#define FUSES_PUF_AC106_REG_OFST       _UINT32_(0xDA8)     /* (FUSES_PUF_AC106) Mapped Fuse Register Offset */
#define FUSES_PUF_AC107_REG_OFST       _UINT32_(0xDAC)     /* (FUSES_PUF_AC107) Mapped Fuse Register Offset */
#define FUSES_PUF_AC108_REG_OFST       _UINT32_(0xDB0)     /* (FUSES_PUF_AC108) Mapped Fuse Register Offset */
#define FUSES_PUF_AC109_REG_OFST       _UINT32_(0xDB4)     /* (FUSES_PUF_AC109) Mapped Fuse Register Offset */
#define FUSES_PUF_AC110_REG_OFST       _UINT32_(0xDB8)     /* (FUSES_PUF_AC110) Mapped Fuse Register Offset */
#define FUSES_PUF_AC111_REG_OFST       _UINT32_(0xDBC)     /* (FUSES_PUF_AC111) Mapped Fuse Register Offset */
#define FUSES_PUF_AC112_REG_OFST       _UINT32_(0xDC0)     /* (FUSES_PUF_AC112) Mapped Fuse Register Offset */
#define FUSES_PUF_AC113_REG_OFST       _UINT32_(0xDC4)     /* (FUSES_PUF_AC113) Mapped Fuse Register Offset */
#define FUSES_PUF_AC114_REG_OFST       _UINT32_(0xDC8)     /* (FUSES_PUF_AC114) Mapped Fuse Register Offset */
#define FUSES_PUF_AC115_REG_OFST       _UINT32_(0xDCC)     /* (FUSES_PUF_AC115) Mapped Fuse Register Offset */
#define FUSES_PUF_AC116_REG_OFST       _UINT32_(0xDD0)     /* (FUSES_PUF_AC116) Mapped Fuse Register Offset */
#define FUSES_PUF_AC117_REG_OFST       _UINT32_(0xDD4)     /* (FUSES_PUF_AC117) Mapped Fuse Register Offset */
#define FUSES_PUF_AC118_REG_OFST       _UINT32_(0xDD8)     /* (FUSES_PUF_AC118) Mapped Fuse Register Offset */
#define FUSES_PUF_AC119_REG_OFST       _UINT32_(0xDDC)     /* (FUSES_PUF_AC119) Mapped Fuse Register Offset */
#define FUSES_PUF_AC120_REG_OFST       _UINT32_(0xDE0)     /* (FUSES_PUF_AC120) Mapped Fuse Register Offset */
#define FUSES_PUF_AC121_REG_OFST       _UINT32_(0xDE4)     /* (FUSES_PUF_AC121) Mapped Fuse Register Offset */
#define FUSES_PUF_AC122_REG_OFST       _UINT32_(0xDE8)     /* (FUSES_PUF_AC122) Mapped Fuse Register Offset */
#define FUSES_PUF_AC123_REG_OFST       _UINT32_(0xDEC)     /* (FUSES_PUF_AC123) Mapped Fuse Register Offset */
#define FUSES_PUF_AC124_REG_OFST       _UINT32_(0xDF0)     /* (FUSES_PUF_AC124) Mapped Fuse Register Offset */
#define FUSES_PUF_AC125_REG_OFST       _UINT32_(0xDF4)     /* (FUSES_PUF_AC125) Mapped Fuse Register Offset */
#define FUSES_PUF_AC126_REG_OFST       _UINT32_(0xDF8)     /* (FUSES_PUF_AC126) Mapped Fuse Register Offset */
#define FUSES_PUF_AC127_REG_OFST       _UINT32_(0xDFC)     /* (FUSES_PUF_AC127) Mapped Fuse Register Offset */
#define FUSES_PUF_AC128_REG_OFST       _UINT32_(0xE00)     /* (FUSES_PUF_AC128) Mapped Fuse Register Offset */
#define FUSES_PUF_AC129_REG_OFST       _UINT32_(0xE04)     /* (FUSES_PUF_AC129) Mapped Fuse Register Offset */
#define FUSES_PUF_AC130_REG_OFST       _UINT32_(0xE08)     /* (FUSES_PUF_AC130) Mapped Fuse Register Offset */
#define FUSES_PUF_AC131_REG_OFST       _UINT32_(0xE0C)     /* (FUSES_PUF_AC131) Mapped Fuse Register Offset */
#define FUSES_PUF_AC132_REG_OFST       _UINT32_(0xE10)     /* (FUSES_PUF_AC132) Mapped Fuse Register Offset */
#define FUSES_PUF_AC133_REG_OFST       _UINT32_(0xE14)     /* (FUSES_PUF_AC133) Mapped Fuse Register Offset */
#define FUSES_PUF_AC134_REG_OFST       _UINT32_(0xE18)     /* (FUSES_PUF_AC134) Mapped Fuse Register Offset */
#define FUSES_PUF_AC135_REG_OFST       _UINT32_(0xE1C)     /* (FUSES_PUF_AC135) Mapped Fuse Register Offset */
#define FUSES_PUF_AC136_REG_OFST       _UINT32_(0xE20)     /* (FUSES_PUF_AC136) Mapped Fuse Register Offset */
#define FUSES_PUF_AC137_REG_OFST       _UINT32_(0xE24)     /* (FUSES_PUF_AC137) Mapped Fuse Register Offset */
#define FUSES_PUF_AC138_REG_OFST       _UINT32_(0xE28)     /* (FUSES_PUF_AC138) Mapped Fuse Register Offset */
#define FUSES_PUF_AC139_REG_OFST       _UINT32_(0xE2C)     /* (FUSES_PUF_AC139) Mapped Fuse Register Offset */
#define FUSES_PUF_AC140_REG_OFST       _UINT32_(0xE30)     /* (FUSES_PUF_AC140) Mapped Fuse Register Offset */
#define FUSES_PUF_AC141_REG_OFST       _UINT32_(0xE34)     /* (FUSES_PUF_AC141) Mapped Fuse Register Offset */
#define FUSES_PUF_AC142_REG_OFST       _UINT32_(0xE38)     /* (FUSES_PUF_AC142) Mapped Fuse Register Offset */
#define FUSES_PUF_AC143_REG_OFST       _UINT32_(0xE3C)     /* (FUSES_PUF_AC143) Mapped Fuse Register Offset */
#define FUSES_PUF_AC144_REG_OFST       _UINT32_(0xE40)     /* (FUSES_PUF_AC144) Mapped Fuse Register Offset */
#define FUSES_PUF_AC145_REG_OFST       _UINT32_(0xE44)     /* (FUSES_PUF_AC145) Mapped Fuse Register Offset */
#define FUSES_PUF_AC146_REG_OFST       _UINT32_(0xE48)     /* (FUSES_PUF_AC146) Mapped Fuse Register Offset */
#define FUSES_PUF_AC147_REG_OFST       _UINT32_(0xE4C)     /* (FUSES_PUF_AC147) Mapped Fuse Register Offset */
#define FUSES_PUF_AC148_REG_OFST       _UINT32_(0xE50)     /* (FUSES_PUF_AC148) Mapped Fuse Register Offset */
#define FUSES_PUF_AC149_REG_OFST       _UINT32_(0xE54)     /* (FUSES_PUF_AC149) Mapped Fuse Register Offset */
#define FUSES_PUF_AC150_REG_OFST       _UINT32_(0xE58)     /* (FUSES_PUF_AC150) Mapped Fuse Register Offset */
#define FUSES_PUF_AC151_REG_OFST       _UINT32_(0xE5C)     /* (FUSES_PUF_AC151) Mapped Fuse Register Offset */
#define FUSES_PUF_AC152_REG_OFST       _UINT32_(0xE60)     /* (FUSES_PUF_AC152) Mapped Fuse Register Offset */
#define FUSES_PUF_AC153_REG_OFST       _UINT32_(0xE64)     /* (FUSES_PUF_AC153) Mapped Fuse Register Offset */
#define FUSES_PUF_AC154_REG_OFST       _UINT32_(0xE68)     /* (FUSES_PUF_AC154) Mapped Fuse Register Offset */
#define FUSES_PUF_AC155_REG_OFST       _UINT32_(0xE6C)     /* (FUSES_PUF_AC155) Mapped Fuse Register Offset */
#define FUSES_PUF_AC156_REG_OFST       _UINT32_(0xE70)     /* (FUSES_PUF_AC156) Mapped Fuse Register Offset */
#define FUSES_PUF_AC157_REG_OFST       _UINT32_(0xE74)     /* (FUSES_PUF_AC157) Mapped Fuse Register Offset */
#define FUSES_PUF_AC158_REG_OFST       _UINT32_(0xE78)     /* (FUSES_PUF_AC158) Mapped Fuse Register Offset */
#define FUSES_PUF_AC159_REG_OFST       _UINT32_(0xE7C)     /* (FUSES_PUF_AC159) Mapped Fuse Register Offset */
#define FUSES_PUF_AC160_REG_OFST       _UINT32_(0xE80)     /* (FUSES_PUF_AC160) Mapped Fuse Register Offset */
#define FUSES_PUF_AC161_REG_OFST       _UINT32_(0xE84)     /* (FUSES_PUF_AC161) Mapped Fuse Register Offset */
#define FUSES_PUF_AC162_REG_OFST       _UINT32_(0xE88)     /* (FUSES_PUF_AC162) Mapped Fuse Register Offset */
#define FUSES_PUF_AC163_REG_OFST       _UINT32_(0xE8C)     /* (FUSES_PUF_AC163) Mapped Fuse Register Offset */
#define FUSES_PUF_AC164_REG_OFST       _UINT32_(0xE90)     /* (FUSES_PUF_AC164) Mapped Fuse Register Offset */
#define FUSES_PUF_AC165_REG_OFST       _UINT32_(0xE94)     /* (FUSES_PUF_AC165) Mapped Fuse Register Offset */
#define FUSES_PUF_AC166_REG_OFST       _UINT32_(0xE98)     /* (FUSES_PUF_AC166) Mapped Fuse Register Offset */
#define FUSES_PUF_AC167_REG_OFST       _UINT32_(0xE9C)     /* (FUSES_PUF_AC167) Mapped Fuse Register Offset */
#define FUSES_PUF_AC168_REG_OFST       _UINT32_(0xEA0)     /* (FUSES_PUF_AC168) Mapped Fuse Register Offset */
#define FUSES_PUF_AC169_REG_OFST       _UINT32_(0xEA4)     /* (FUSES_PUF_AC169) Mapped Fuse Register Offset */
#define FUSES_PUF_AC170_REG_OFST       _UINT32_(0xEA8)     /* (FUSES_PUF_AC170) Mapped Fuse Register Offset */
#define FUSES_PUF_AC171_REG_OFST       _UINT32_(0xEAC)     /* (FUSES_PUF_AC171) Mapped Fuse Register Offset */
#define FUSES_PUF_AC172_REG_OFST       _UINT32_(0xEB0)     /* (FUSES_PUF_AC172) Mapped Fuse Register Offset */
#define FUSES_PUF_AC173_REG_OFST       _UINT32_(0xEB4)     /* (FUSES_PUF_AC173) Mapped Fuse Register Offset */
#define FUSES_PUF_AC174_REG_OFST       _UINT32_(0xEB8)     /* (FUSES_PUF_AC174) Mapped Fuse Register Offset */
#define FUSES_PUF_AC175_REG_OFST       _UINT32_(0xEBC)     /* (FUSES_PUF_AC175) Mapped Fuse Register Offset */
#define FUSES_PUF_AC176_REG_OFST       _UINT32_(0xEC0)     /* (FUSES_PUF_AC176) Mapped Fuse Register Offset */
#define FUSES_PUF_AC177_REG_OFST       _UINT32_(0xEC4)     /* (FUSES_PUF_AC177) Mapped Fuse Register Offset */
#define FUSES_PUF_AC178_REG_OFST       _UINT32_(0xEC8)     /* (FUSES_PUF_AC178) Mapped Fuse Register Offset */
#define FUSES_PUF_AC179_REG_OFST       _UINT32_(0xECC)     /* (FUSES_PUF_AC179) Mapped Fuse Register Offset */
#define FUSES_PUF_AC180_REG_OFST       _UINT32_(0xED0)     /* (FUSES_PUF_AC180) Mapped Fuse Register Offset */
#define FUSES_PUF_AC181_REG_OFST       _UINT32_(0xED4)     /* (FUSES_PUF_AC181) Mapped Fuse Register Offset */
#define FUSES_PUF_AC182_REG_OFST       _UINT32_(0xED8)     /* (FUSES_PUF_AC182) Mapped Fuse Register Offset */
#define FUSES_PUF_AC183_REG_OFST       _UINT32_(0xEDC)     /* (FUSES_PUF_AC183) Mapped Fuse Register Offset */
#define FUSES_PUF_AC184_REG_OFST       _UINT32_(0xEE0)     /* (FUSES_PUF_AC184) Mapped Fuse Register Offset */
#define FUSES_PUF_AC185_REG_OFST       _UINT32_(0xEE4)     /* (FUSES_PUF_AC185) Mapped Fuse Register Offset */
#define FUSES_PUF_AC186_REG_OFST       _UINT32_(0xEE8)     /* (FUSES_PUF_AC186) Mapped Fuse Register Offset */
#define FUSES_PUF_AC187_REG_OFST       _UINT32_(0xEEC)     /* (FUSES_PUF_AC187) Mapped Fuse Register Offset */
#define FUSES_PUF_AC188_REG_OFST       _UINT32_(0xEF0)     /* (FUSES_PUF_AC188) Mapped Fuse Register Offset */
#define FUSES_PUF_AC189_REG_OFST       _UINT32_(0xEF4)     /* (FUSES_PUF_AC189) Mapped Fuse Register Offset */
#define FUSES_PUF_AC190_REG_OFST       _UINT32_(0xEF8)     /* (FUSES_PUF_AC190) Mapped Fuse Register Offset */
#define FUSES_PUF_AC191_REG_OFST       _UINT32_(0xEFC)     /* (FUSES_PUF_AC191) Mapped Fuse Register Offset */
#define FUSES_PUF_AC192_REG_OFST       _UINT32_(0xF00)     /* (FUSES_PUF_AC192) Mapped Fuse Register Offset */
#define FUSES_PUF_AC193_REG_OFST       _UINT32_(0xF04)     /* (FUSES_PUF_AC193) Mapped Fuse Register Offset */
#define FUSES_PUF_AC194_REG_OFST       _UINT32_(0xF08)     /* (FUSES_PUF_AC194) Mapped Fuse Register Offset */
#define FUSES_PUF_AC195_REG_OFST       _UINT32_(0xF0C)     /* (FUSES_PUF_AC195) Mapped Fuse Register Offset */
#define FUSES_PUF_AC196_REG_OFST       _UINT32_(0xF10)     /* (FUSES_PUF_AC196) Mapped Fuse Register Offset */
#define FUSES_PUF_AC197_REG_OFST       _UINT32_(0xF14)     /* (FUSES_PUF_AC197) Mapped Fuse Register Offset */
#define FUSES_PUF_AC198_REG_OFST       _UINT32_(0xF18)     /* (FUSES_PUF_AC198) Mapped Fuse Register Offset */
#define FUSES_PUF_AC199_REG_OFST       _UINT32_(0xF1C)     /* (FUSES_PUF_AC199) Mapped Fuse Register Offset */
#define FUSES_PUF_AC200_REG_OFST       _UINT32_(0xF20)     /* (FUSES_PUF_AC200) Mapped Fuse Register Offset */
#define FUSES_PUF_AC201_REG_OFST       _UINT32_(0xF24)     /* (FUSES_PUF_AC201) Mapped Fuse Register Offset */
#define FUSES_PUF_AC202_REG_OFST       _UINT32_(0xF28)     /* (FUSES_PUF_AC202) Mapped Fuse Register Offset */
#define FUSES_PUF_AC203_REG_OFST       _UINT32_(0xF2C)     /* (FUSES_PUF_AC203) Mapped Fuse Register Offset */
#define FUSES_PUF_AC204_REG_OFST       _UINT32_(0xF30)     /* (FUSES_PUF_AC204) Mapped Fuse Register Offset */
#define FUSES_PUF_AC205_REG_OFST       _UINT32_(0xF34)     /* (FUSES_PUF_AC205) Mapped Fuse Register Offset */
#define FUSES_PUF_AC206_REG_OFST       _UINT32_(0xF38)     /* (FUSES_PUF_AC206) Mapped Fuse Register Offset */
#define FUSES_PUF_AC207_REG_OFST       _UINT32_(0xF3C)     /* (FUSES_PUF_AC207) Mapped Fuse Register Offset */
#define FUSES_PUF_AC208_REG_OFST       _UINT32_(0xF40)     /* (FUSES_PUF_AC208) Mapped Fuse Register Offset */
#define FUSES_PUF_AC209_REG_OFST       _UINT32_(0xF44)     /* (FUSES_PUF_AC209) Mapped Fuse Register Offset */
#define FUSES_PUF_AC210_REG_OFST       _UINT32_(0xF48)     /* (FUSES_PUF_AC210) Mapped Fuse Register Offset */
#define FUSES_PUF_AC211_REG_OFST       _UINT32_(0xF4C)     /* (FUSES_PUF_AC211) Mapped Fuse Register Offset */
#define FUSES_PUF_AC212_REG_OFST       _UINT32_(0xF50)     /* (FUSES_PUF_AC212) Mapped Fuse Register Offset */
#define FUSES_PUF_AC213_REG_OFST       _UINT32_(0xF54)     /* (FUSES_PUF_AC213) Mapped Fuse Register Offset */
#define FUSES_PUF_AC214_REG_OFST       _UINT32_(0xF58)     /* (FUSES_PUF_AC214) Mapped Fuse Register Offset */
#define FUSES_PUF_AC215_REG_OFST       _UINT32_(0xF5C)     /* (FUSES_PUF_AC215) Mapped Fuse Register Offset */
#define FUSES_PUF_AC216_REG_OFST       _UINT32_(0xF60)     /* (FUSES_PUF_AC216) Mapped Fuse Register Offset */
#define FUSES_PUF_AC217_REG_OFST       _UINT32_(0xF64)     /* (FUSES_PUF_AC217) Mapped Fuse Register Offset */
#define FUSES_PUF_AC218_REG_OFST       _UINT32_(0xF68)     /* (FUSES_PUF_AC218) Mapped Fuse Register Offset */
#define FUSES_PUF_AC219_REG_OFST       _UINT32_(0xF6C)     /* (FUSES_PUF_AC219) Mapped Fuse Register Offset */
#define FUSES_PUF_AC220_REG_OFST       _UINT32_(0xF70)     /* (FUSES_PUF_AC220) Mapped Fuse Register Offset */
#define FUSES_PUF_AC221_REG_OFST       _UINT32_(0xF74)     /* (FUSES_PUF_AC221) Mapped Fuse Register Offset */
#define FUSES_PUF_AC222_REG_OFST       _UINT32_(0xF78)     /* (FUSES_PUF_AC222) Mapped Fuse Register Offset */
#define FUSES_PUF_AC223_REG_OFST       _UINT32_(0xF7C)     /* (FUSES_PUF_AC223) Mapped Fuse Register Offset */
#define FUSES_PUF_AC224_REG_OFST       _UINT32_(0xF80)     /* (FUSES_PUF_AC224) Mapped Fuse Register Offset */
#define FUSES_PUF_AC225_REG_OFST       _UINT32_(0xF84)     /* (FUSES_PUF_AC225) Mapped Fuse Register Offset */
#define FUSES_PUF_AC226_REG_OFST       _UINT32_(0xF88)     /* (FUSES_PUF_AC226) Mapped Fuse Register Offset */
#define FUSES_PUF_AC227_REG_OFST       _UINT32_(0xF8C)     /* (FUSES_PUF_AC227) Mapped Fuse Register Offset */
#define FUSES_PUF_AC228_REG_OFST       _UINT32_(0xF90)     /* (FUSES_PUF_AC228) Mapped Fuse Register Offset */
#define FUSES_PUF_AC229_REG_OFST       _UINT32_(0xF94)     /* (FUSES_PUF_AC229) Mapped Fuse Register Offset */
#define FUSES_PUF_AC230_REG_OFST       _UINT32_(0xF98)     /* (FUSES_PUF_AC230) Mapped Fuse Register Offset */
#define FUSES_PUF_AC231_REG_OFST       _UINT32_(0xF9C)     /* (FUSES_PUF_AC231) Mapped Fuse Register Offset */
#define FUSES_PUF_AC232_REG_OFST       _UINT32_(0xFA0)     /* (FUSES_PUF_AC232) Mapped Fuse Register Offset */
#define FUSES_PUF_AC233_REG_OFST       _UINT32_(0xFA4)     /* (FUSES_PUF_AC233) Mapped Fuse Register Offset */
#define FUSES_PUF_AC234_REG_OFST       _UINT32_(0xFA8)     /* (FUSES_PUF_AC234) Mapped Fuse Register Offset */
#define FUSES_PUF_AC235_REG_OFST       _UINT32_(0xFAC)     /* (FUSES_PUF_AC235) Mapped Fuse Register Offset */
#define FUSES_PUF_AC236_REG_OFST       _UINT32_(0xFB0)     /* (FUSES_PUF_AC236) Mapped Fuse Register Offset */
#define FUSES_PUF_AC237_REG_OFST       _UINT32_(0xFB4)     /* (FUSES_PUF_AC237) Mapped Fuse Register Offset */
#define FUSES_PUF_AC238_REG_OFST       _UINT32_(0xFB8)     /* (FUSES_PUF_AC238) Mapped Fuse Register Offset */
#define FUSES_PUF_AC239_REG_OFST       _UINT32_(0xFBC)     /* (FUSES_PUF_AC239) Mapped Fuse Register Offset */
#define FUSES_PUF_AC240_REG_OFST       _UINT32_(0xFC0)     /* (FUSES_PUF_AC240) Mapped Fuse Register Offset */
#define FUSES_PUF_AC241_REG_OFST       _UINT32_(0xFC4)     /* (FUSES_PUF_AC241) Mapped Fuse Register Offset */
#define FUSES_PUF_AC242_REG_OFST       _UINT32_(0xFC8)     /* (FUSES_PUF_AC242) Mapped Fuse Register Offset */
#define FUSES_PUF_AC243_REG_OFST       _UINT32_(0xFCC)     /* (FUSES_PUF_AC243) Mapped Fuse Register Offset */
#define FUSES_PUF_AC244_REG_OFST       _UINT32_(0xFD0)     /* (FUSES_PUF_AC244) Mapped Fuse Register Offset */
#define FUSES_PUF_AC245_REG_OFST       _UINT32_(0xFD4)     /* (FUSES_PUF_AC245) Mapped Fuse Register Offset */
#define FUSES_PUF_AC246_REG_OFST       _UINT32_(0xFD8)     /* (FUSES_PUF_AC246) Mapped Fuse Register Offset */
#define FUSES_PUF_AC247_REG_OFST       _UINT32_(0xFDC)     /* (FUSES_PUF_AC247) Mapped Fuse Register Offset */
#define FUSES_PUF_AC248_REG_OFST       _UINT32_(0xFE0)     /* (FUSES_PUF_AC248) Mapped Fuse Register Offset */
#define FUSES_DEVSIGN_REG_OFST         _UINT32_(0x0C)      /* (FUSES_DEVSIGN) DEVSIGN Offset */
#define FUSES_BOOT_FLAG_REG_OFST       _UINT32_(0x800)     /* (FUSES_BOOT_FLAG) BOOT CODE FLAGS REGISTER Offset */
#define FUSES_DICE_CDI_INDEX_REG_OFST  _UINT32_(0x810)     /* (FUSES_DICE_CDI_INDEX) Mapped Fuse Register Offset */
#define FUSES_DICE_FW_HASH_INDEX_REG_OFST _UINT32_(0x814)     /* (FUSES_DICE_FW_HASH_INDEX) Mapped Fuse Register Offset */
#define FUSES_BOOT_GPIOSEL_REG_OFST    _UINT32_(0x818)     /* (FUSES_BOOT_GPIOSEL) BOOT EXTERNAL NOTIFICATION IO PIN REGISTER Offset */
#define FUSES_H2PB0_NONSECCLRA_REG_OFST _UINT32_(0x81C)     /* (FUSES_H2PB0_NONSECCLRA) Non-Security Clear Register A Offset */
#define FUSES_H2PB0_NONSECSETA_REG_OFST _UINT32_(0x820)     /* (FUSES_H2PB0_NONSECSETA) Non-Security SET Register A Offset */
#define FUSES_PAC_WRCTRL_H2PB0_REG_OFST _UINT32_(0x830)     /* (FUSES_PAC_WRCTRL_H2PB0) Write Control Register Offset */
#define FUSES_H2PB1_NONSECCLRA_REG_OFST _UINT32_(0x834)     /* (FUSES_H2PB1_NONSECCLRA) Non-Security Clear Register A Offset */
#define FUSES_H2PB1_NONSECSETA_REG_OFST _UINT32_(0x838)     /* (FUSES_H2PB1_NONSECSETA) Non-Security SET Register A Offset */
#define FUSES_PAC_WRCTRL_H2PB1_REG_OFST _UINT32_(0x848)     /* (FUSES_PAC_WRCTRL_H2PB1) Write Control Register Offset */
#define FUSES_H2PB2_NONSECCLRA_REG_OFST _UINT32_(0x84C)     /* (FUSES_H2PB2_NONSECCLRA) Non-Security Clear Register A Offset */
#define FUSES_H2PB2_NONSECSETA_REG_OFST _UINT32_(0x850)     /* (FUSES_H2PB2_NONSECSETA) Non-Security SET Register A Offset */
#define FUSES_PAC_WRCTRL_H2PB2_REG_OFST _UINT32_(0x860)     /* (FUSES_PAC_WRCTRL_H2PB2) Write Control Register Offset */
#define FUSES_IDAU_RCTRL_BFM_REG_OFST  _UINT32_(0x864)     /* (FUSES_IDAU_RCTRL_BFM) Region Control Offset */
#define FUSES_IDAU_RCTRL_PFMANS_REG_OFST _UINT32_(0x868)     /* (FUSES_IDAU_RCTRL_PFMANS) Region Control Offset */
#define FUSES_IDAU_RCTRL_PFMANSC_REG_OFST _UINT32_(0x86C)     /* (FUSES_IDAU_RCTRL_PFMANSC) Region Control Offset */
#define FUSES_IDAU_RCTRL_DRM_REG_OFST  _UINT32_(0x870)     /* (FUSES_IDAU_RCTRL_DRM) Region Control Offset */
#define FUSES_IDAU_CTRL_EN_REG_OFST    _UINT32_(0x874)     /* (FUSES_IDAU_CTRL_EN) Control Offset */
#define FUSES_IDAU_CTRL_WLCK_REG_OFST  _UINT32_(0x878)     /* (FUSES_IDAU_CTRL_WLCK) Control Offset */
#define FUSES_FCW_CWP_REG_OFST         _UINT32_(0x87C)     /* (FUSES_FCW_CWP) CFM Page Write Protect REGISTER Offset */
#define FUSES_FCR_CRP_REG_OFST         _UINT32_(0x880)     /* (FUSES_FCR_CRP) CFM Page Read Protection Register Offset */
#define FUSES_FCR_ECCCTRL_REG_OFST     _UINT32_(0x884)     /* (FUSES_FCR_ECCCTRL) ECC Control REGISTER Offset */
#define FUSES_SUPC_BRCFGUSMOR_BOR_REG_OFST _UINT32_(0x888)     /* (FUSES_SUPC_BRCFGUSMOR_BOR) Boot Rom Configurable SMOR User CFG BOR register Offset */
#define FUSES_SUPC_BRCFGUDSSMOR_REG_OFST _UINT32_(0x890)     /* (FUSES_SUPC_BRCFGUDSSMOR) Boot Rom Configurable DSSMOR User CFG register Offset */
#define FUSES_SUPC_BRCFGUCP0_REG_OFST  _UINT32_(0x894)     /* (FUSES_SUPC_BRCFGUCP0) Boot Rom Configurable CHARGE PUMP User CFG register Offset */
#define FUSES_WDT_SETUP_REG_OFST       _UINT32_(0x898)     /* (FUSES_WDT_SETUP)  Offset */
#define FUSES_F1RR_REG_OFST            _UINT32_(0x00)      /* (FUSES_F1RR) PANEL 0 REDUNDANCY RECORD 1-0 Register Offset */
#define FUSES_FCCFG0_REG_OFST          _UINT32_(0x80)      /* (FUSES_FCCFG0) Calibration Configuration 0 Register Offset */
#define FUSES_FCCFG1_REG_OFST          _UINT32_(0x84)      /* (FUSES_FCCFG1) Calibration Configuration 1 Register Offset */
#define FUSES_FCCFG8_REG_OFST          _UINT32_(0xA0)      /* (FUSES_FCCFG8) Calibration Configuration 8 Register Offset */
#define FUSES_FCCFG16_REG_OFST         _UINT32_(0xC0)      /* (FUSES_FCCFG16) Calibration Configuration 16 Register Offset */
#define FUSES_FCCFG17_REG_OFST         _UINT32_(0xC4)      /* (FUSES_FCCFG17) Calibration Configuration 17 Register Offset */
#define FUSES_FCCFG24_REG_OFST         _UINT32_(0xE0)      /* (FUSES_FCCFG24) Calibration Configuration 24 Register Offset */
#define FUSES_FCCFG27_REG_OFST         _UINT32_(0xEC)      /* (FUSES_FCCFG27) Calibration Configuration 27 Register Offset */
#define FUSES_FCCFG28_REG_OFST         _UINT32_(0xF0)      /* (FUSES_FCCFG28) Calibration Configuration 28 Register Offset */
#define FUSES_FCCFG29_REG_OFST         _UINT32_(0xF4)      /* (FUSES_FCCFG29) Calibration Configuration 29 Register Offset */
#define FUSES_FCCFG32_REG_OFST         _UINT32_(0x100)     /* (FUSES_FCCFG32) DSU Device Configuration 0 Register (DEVID) Offset */
#define FUSES_FCCFG33_REG_OFST         _UINT32_(0x104)     /* (FUSES_FCCFG33) DSU Device Configuration 1 Register Offset */
#define FUSES_FCCFG34_REG_OFST         _UINT32_(0x108)     /* (FUSES_FCCFG34) DSU Device Configuration 2 Register Offset */
#define FUSES_FCCFG49_REG_OFST         _UINT32_(0x144)     /* (FUSES_FCCFG49) Calibration Configuration 49 Register Offset */
#define FUSES_FCCFG56_REG_OFST         _UINT32_(0x160)     /* (FUSES_FCCFG56) Calibration Configuration 56 Register Offset */
#define FUSES_FCCFG57_REG_OFST         _UINT32_(0x164)     /* (FUSES_FCCFG57) Calibration Configuration 57 Register Offset */
#define FUSES_FCCFG58_REG_OFST         _UINT32_(0x168)     /* (FUSES_FCCFG58) Calibration Configuration 58 Register Offset */
#define FUSES_FCCFG59_REG_OFST         _UINT32_(0x16C)     /* (FUSES_FCCFG59) Calibration Configuration 59 Register Offset */
#define FUSES_FCCFG60_REG_OFST         _UINT32_(0x170)     /* (FUSES_FCCFG60) Calibration Configuration 60 Register Offset */
#define FUSES_FCCFG61_REG_OFST         _UINT32_(0x174)     /* (FUSES_FCCFG61) Calibration Configuration 61 Register Offset */
#define FUSES_FCCFG64_REG_OFST         _UINT32_(0x180)     /* (FUSES_FCCFG64) Calibration Configuration 64 Register Offset */
#define FUSES_FCCFG65_REG_OFST         _UINT32_(0x184)     /* (FUSES_FCCFG65) Calibration Configuration 65 Register Offset */
#define FUSES_FCCFG66_REG_OFST         _UINT32_(0x188)     /* (FUSES_FCCFG66) Calibration Configuration 66 Register Offset */
#define FUSES_FCCFG68_REG_OFST         _UINT32_(0x190)     /* (FUSES_FCCFG68) Calibration Configuration 68 Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* FUSES_ROMCFG register API structure */
typedef struct
{  /* Defines FUSES module data */
  __IO  uint32_t                       FUSES_DAL;          /* Offset: 0x00 (R/W  32) DEVICE ACCESS LEVEL Register */
  __I   uint8_t                        Reserved1[0x3FC];
  __IO  uint32_t                       FUSES_FRCFGBROM;    /* Offset: 0x400 (R/W  32) PRE-BOOT bromc user Options Register */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint32_t                       FUSES_FRCFGMBIST;   /* Offset: 0x408 (R/W  32) PRE-BOOT MBIST user Options Register */
  __I   uint8_t                        Reserved3[0x14];
  __IO  uint32_t                       FUSES_KEYVAL_INTCHK0; /* Offset: 0x420 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_INTCHK1; /* Offset: 0x424 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_INTCHK2; /* Offset: 0x428 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_INTCHK3; /* Offset: 0x42C (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_INTCHK4; /* Offset: 0x430 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_INTCHK5; /* Offset: 0x434 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_INTCHK6; /* Offset: 0x438 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_INTCHK7; /* Offset: 0x43C (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_ALL0; /* Offset: 0x440 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_ALL1; /* Offset: 0x444 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_ALL2; /* Offset: 0x448 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_ALL3; /* Offset: 0x44C (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_ALL4; /* Offset: 0x450 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_ALL5; /* Offset: 0x454 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_ALL6; /* Offset: 0x458 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_ALL7; /* Offset: 0x45C (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_S_CR0; /* Offset: 0x460 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_S_CR1; /* Offset: 0x464 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_S_CR2; /* Offset: 0x468 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_S_CR3; /* Offset: 0x46C (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_S_CR4; /* Offset: 0x470 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_S_CR5; /* Offset: 0x474 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_S_CR6; /* Offset: 0x478 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_S_CR7; /* Offset: 0x47C (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_S0; /* Offset: 0x480 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_S1; /* Offset: 0x484 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_S2; /* Offset: 0x488 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_S3; /* Offset: 0x48C (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_S4; /* Offset: 0x490 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_S5; /* Offset: 0x494 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_S6; /* Offset: 0x498 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_S7; /* Offset: 0x49C (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_NS_CR0; /* Offset: 0x4A0 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_NS_CR1; /* Offset: 0x4A4 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_NS_CR2; /* Offset: 0x4A8 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_NS_CR3; /* Offset: 0x4AC (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_NS_CR4; /* Offset: 0x4B0 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_NS_CR5; /* Offset: 0x4B4 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_NS_CR6; /* Offset: 0x4B8 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_NS_CR7; /* Offset: 0x4BC (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_NS0; /* Offset: 0x4C0 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_NS1; /* Offset: 0x4C4 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_NS2; /* Offset: 0x4C8 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_NS3; /* Offset: 0x4CC (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_NS4; /* Offset: 0x4D0 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_NS5; /* Offset: 0x4D4 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_NS6; /* Offset: 0x4D8 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_CE_NS7; /* Offset: 0x4DC (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_PRG_PG0; /* Offset: 0x4E0 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_PRG_PG1; /* Offset: 0x4E4 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_PRG_PG2; /* Offset: 0x4E8 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_PRG_PG3; /* Offset: 0x4EC (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_PRG_PG4; /* Offset: 0x4F0 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_PRG_PG5; /* Offset: 0x4F4 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_PRG_PG6; /* Offset: 0x4F8 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_PRG_PG7; /* Offset: 0x4FC (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_SDAL1_0; /* Offset: 0x500 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_SDAL1_1; /* Offset: 0x504 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_SDAL1_2; /* Offset: 0x508 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_SDAL1_3; /* Offset: 0x50C (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_SDAL1_4; /* Offset: 0x510 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_SDAL1_5; /* Offset: 0x514 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_SDAL1_6; /* Offset: 0x518 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_SDAL1_7; /* Offset: 0x51C (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_SDAL0_0; /* Offset: 0x520 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_SDAL0_1; /* Offset: 0x524 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_SDAL0_2; /* Offset: 0x528 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_SDAL0_3; /* Offset: 0x52C (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_SDAL0_4; /* Offset: 0x530 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_SDAL0_5; /* Offset: 0x534 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_SDAL0_6; /* Offset: 0x538 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_SDAL0_7; /* Offset: 0x53C (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_DAL_EL0; /* Offset: 0x540 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_DAL_EL1; /* Offset: 0x544 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_DAL_EL2; /* Offset: 0x548 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_DAL_EL3; /* Offset: 0x54C (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_DAL_EL4; /* Offset: 0x550 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_DAL_EL5; /* Offset: 0x554 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_DAL_EL6; /* Offset: 0x558 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_KEYVAL_DAL_EL7; /* Offset: 0x55C (R/W  32) Mapped Fuse Register */
  __I   uint8_t                        Reserved4[0x6A0];
  __IO  uint32_t                       FUSES_PUF_AC[249];  /* Offset: 0xC00 (R/W  32) Mapped Fuse Register */
} fuses_romcfg_registers_t;

/* FUSES_BOOTCFG1 register API structure */
typedef struct
{  /* Defines FUSES module data */
  __I   uint8_t                        Reserved1[0x0C];
  __IO  uint32_t                       FUSES_DEVSIGN;      /* Offset: 0x0C (R/W  32) DEVSIGN */
  __I   uint8_t                        Reserved2[0x7F0];
  __IO  uint32_t                       FUSES_BOOT_FLAG;    /* Offset: 0x800 (R/W  32) BOOT CODE FLAGS REGISTER */
  __I   uint8_t                        Reserved3[0x0C];
  __IO  uint32_t                       FUSES_DICE_CDI_INDEX; /* Offset: 0x810 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_DICE_FW_HASH_INDEX; /* Offset: 0x814 (R/W  32) Mapped Fuse Register */
  __IO  uint32_t                       FUSES_BOOT_GPIOSEL; /* Offset: 0x818 (R/W  32) BOOT EXTERNAL NOTIFICATION IO PIN REGISTER */
  __IO  uint32_t                       FUSES_H2PB0_NONSECCLRA; /* Offset: 0x81C (R/W  32) Non-Security Clear Register A */
  __IO  uint32_t                       FUSES_H2PB0_NONSECSETA; /* Offset: 0x820 (R/W  32) Non-Security SET Register A */
  __I   uint8_t                        Reserved4[0x0C];
  __IO  uint32_t                       FUSES_PAC_WRCTRL_H2PB0; /* Offset: 0x830 (R/W  32) Write Control Register */
  __IO  uint32_t                       FUSES_H2PB1_NONSECCLRA; /* Offset: 0x834 (R/W  32) Non-Security Clear Register A */
  __IO  uint32_t                       FUSES_H2PB1_NONSECSETA; /* Offset: 0x838 (R/W  32) Non-Security SET Register A */
  __I   uint8_t                        Reserved5[0x0C];
  __IO  uint32_t                       FUSES_PAC_WRCTRL_H2PB1; /* Offset: 0x848 (R/W  32) Write Control Register */
  __IO  uint32_t                       FUSES_H2PB2_NONSECCLRA; /* Offset: 0x84C (R/W  32) Non-Security Clear Register A */
  __IO  uint32_t                       FUSES_H2PB2_NONSECSETA; /* Offset: 0x850 (R/W  32) Non-Security SET Register A */
  __I   uint8_t                        Reserved6[0x0C];
  __IO  uint32_t                       FUSES_PAC_WRCTRL_H2PB2; /* Offset: 0x860 (R/W  32) Write Control Register */
  __IO  uint32_t                       FUSES_IDAU_RCTRL_BFM; /* Offset: 0x864 (R/W  32) Region Control */
  __IO  uint32_t                       FUSES_IDAU_RCTRL_PFMANS; /* Offset: 0x868 (R/W  32) Region Control */
  __IO  uint32_t                       FUSES_IDAU_RCTRL_PFMANSC; /* Offset: 0x86C (R/W  32) Region Control */
  __IO  uint32_t                       FUSES_IDAU_RCTRL_DRM; /* Offset: 0x870 (R/W  32) Region Control */
  __IO  uint32_t                       FUSES_IDAU_CTRL_EN; /* Offset: 0x874 (R/W  32) Control */
  __IO  uint32_t                       FUSES_IDAU_CTRL_WLCK; /* Offset: 0x878 (R/W  32) Control */
  __IO  uint32_t                       FUSES_FCW_CWP;      /* Offset: 0x87C (R/W  32) CFM Page Write Protect REGISTER */
  __IO  uint32_t                       FUSES_FCR_CRP;      /* Offset: 0x880 (R/W  32) CFM Page Read Protection Register */
  __IO  uint32_t                       FUSES_FCR_ECCCTRL;  /* Offset: 0x884 (R/W  32) ECC Control REGISTER */
  __IO  uint32_t                       FUSES_SUPC_BRCFGUSMOR_BOR; /* Offset: 0x888 (R/W  32) Boot Rom Configurable SMOR User CFG BOR register */
  __I   uint8_t                        Reserved7[0x04];
  __IO  uint32_t                       FUSES_SUPC_BRCFGUDSSMOR; /* Offset: 0x890 (R/W  32) Boot Rom Configurable DSSMOR User CFG register */
  __IO  uint32_t                       FUSES_SUPC_BRCFGUCP0; /* Offset: 0x894 (R/W  32) Boot Rom Configurable CHARGE PUMP User CFG register */
  __IO  uint32_t                       FUSES_WDT_SETUP;    /* Offset: 0x898 (R/W  32)  */
} fuses_bootcfg1_registers_t;

/* FUSES_CALOTP register API structure */
typedef struct
{  /* Defines FUSES module data */
  __I   uint32_t                       FUSES_F1RR;         /* Offset: 0x00 (R/   32) PANEL 0 REDUNDANCY RECORD 1-0 Register */
  __I   uint8_t                        Reserved1[0x7C];
  __I   uint32_t                       FUSES_FCCFG0;       /* Offset: 0x80 (R/   32) Calibration Configuration 0 Register */
  __I   uint32_t                       FUSES_FCCFG1;       /* Offset: 0x84 (R/   32) Calibration Configuration 1 Register */
  __I   uint8_t                        Reserved2[0x18];
  __I   uint32_t                       FUSES_FCCFG8;       /* Offset: 0xA0 (R/   32) Calibration Configuration 8 Register */
  __I   uint8_t                        Reserved3[0x1C];
  __I   uint32_t                       FUSES_FCCFG16;      /* Offset: 0xC0 (R/   32) Calibration Configuration 16 Register */
  __I   uint32_t                       FUSES_FCCFG17;      /* Offset: 0xC4 (R/   32) Calibration Configuration 17 Register */
  __I   uint8_t                        Reserved4[0x18];
  __I   uint32_t                       FUSES_FCCFG24;      /* Offset: 0xE0 (R/   32) Calibration Configuration 24 Register */
  __I   uint8_t                        Reserved5[0x08];
  __I   uint32_t                       FUSES_FCCFG27;      /* Offset: 0xEC (R/   32) Calibration Configuration 27 Register */
  __I   uint32_t                       FUSES_FCCFG28;      /* Offset: 0xF0 (R/   32) Calibration Configuration 28 Register */
  __I   uint32_t                       FUSES_FCCFG29;      /* Offset: 0xF4 (R/   32) Calibration Configuration 29 Register */
  __I   uint8_t                        Reserved6[0x08];
  __I   uint32_t                       FUSES_FCCFG32;      /* Offset: 0x100 (R/   32) DSU Device Configuration 0 Register (DEVID) */
  __I   uint32_t                       FUSES_FCCFG33;      /* Offset: 0x104 (R/   32) DSU Device Configuration 1 Register */
  __I   uint32_t                       FUSES_FCCFG34;      /* Offset: 0x108 (R/   32) DSU Device Configuration 2 Register */
  __I   uint8_t                        Reserved7[0x38];
  __I   uint32_t                       FUSES_FCCFG49;      /* Offset: 0x144 (R/   32) Calibration Configuration 49 Register */
  __I   uint8_t                        Reserved8[0x18];
  __I   uint32_t                       FUSES_FCCFG56;      /* Offset: 0x160 (R/   32) Calibration Configuration 56 Register */
  __I   uint32_t                       FUSES_FCCFG57;      /* Offset: 0x164 (R/   32) Calibration Configuration 57 Register */
  __I   uint32_t                       FUSES_FCCFG58;      /* Offset: 0x168 (R/   32) Calibration Configuration 58 Register */
  __I   uint32_t                       FUSES_FCCFG59;      /* Offset: 0x16C (R/   32) Calibration Configuration 59 Register */
  __I   uint32_t                       FUSES_FCCFG60;      /* Offset: 0x170 (R/   32) Calibration Configuration 60 Register */
  __I   uint32_t                       FUSES_FCCFG61;      /* Offset: 0x174 (R/   32) Calibration Configuration 61 Register */
  __I   uint8_t                        Reserved9[0x08];
  __I   uint32_t                       FUSES_FCCFG64;      /* Offset: 0x180 (R/   32) Calibration Configuration 64 Register */
  __I   uint32_t                       FUSES_FCCFG65;      /* Offset: 0x184 (R/   32) Calibration Configuration 65 Register */
  __I   uint32_t                       FUSES_FCCFG66;      /* Offset: 0x188 (R/   32) Calibration Configuration 66 Register */
  __I   uint8_t                        Reserved10[0x04];
  __I   uint32_t                       FUSES_FCCFG68;      /* Offset: 0x190 (R/   32) Calibration Configuration 68 Register */
} fuses_calotp_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMGC00_FUSES_COMPONENT_H_ */
