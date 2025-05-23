/*
 * Component description for AT
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
#ifndef _PIC32CMGC00_AT_COMPONENT_H_
#define _PIC32CMGC00_AT_COMPONENT_H_

/* ************************************************************************** */
/*                       SOFTWARE API DEFINITION FOR AT                       */
/* ************************************************************************** */

/* -------- AT_CTRLA : (AT Offset: 0x00) (R/W 32) Control Register A -------- */
#define AT_CTRLA_RESETVALUE                   _UINT32_(0x00)                                       /*  (AT_CTRLA) Control Register A  Reset Value */

#define AT_CTRLA_SWRST_Pos                    _UINT32_(0)                                          /* (AT_CTRLA) Software Reset1 = Reset registers , Bus I/F and internal state0 = No effect Position */
#define AT_CTRLA_SWRST_Msk                    (_UINT32_(0x1) << AT_CTRLA_SWRST_Pos)                /* (AT_CTRLA) Software Reset1 = Reset registers , Bus I/F and internal state0 = No effect Mask */
#define AT_CTRLA_SWRST(value)                 (AT_CTRLA_SWRST_Msk & (_UINT32_(value) << AT_CTRLA_SWRST_Pos)) /* Assignment of value for SWRST in the AT_CTRLA register */
#define AT_CTRLA_PRIV_Pos                     _UINT32_(2)                                          /* (AT_CTRLA) Privileged Access Only Position */
#define AT_CTRLA_PRIV_Msk                     (_UINT32_(0x1) << AT_CTRLA_PRIV_Pos)                 /* (AT_CTRLA) Privileged Access Only Mask */
#define AT_CTRLA_PRIV(value)                  (AT_CTRLA_PRIV_Msk & (_UINT32_(value) << AT_CTRLA_PRIV_Pos)) /* Assignment of value for PRIV in the AT_CTRLA register */
#define   AT_CTRLA_PRIV_0_Val                 _UINT32_(0x0)                                        /* (AT_CTRLA) AT registers accessible in privileged and unprivileged modes.  */
#define   AT_CTRLA_PRIV_1_Val                 _UINT32_(0x1)                                        /* (AT_CTRLA) AT registers only accessible in privileged mode.  */
#define AT_CTRLA_PRIV_0                       (AT_CTRLA_PRIV_0_Val << AT_CTRLA_PRIV_Pos)           /* (AT_CTRLA) AT registers accessible in privileged and unprivileged modes. Position */
#define AT_CTRLA_PRIV_1                       (AT_CTRLA_PRIV_1_Val << AT_CTRLA_PRIV_Pos)           /* (AT_CTRLA) AT registers only accessible in privileged mode. Position */
#define AT_CTRLA_RUNSTDBY_Pos                 _UINT32_(6)                                          /* (AT_CTRLA) RUNSTDBY Enable Bit Position */
#define AT_CTRLA_RUNSTDBY_Msk                 (_UINT32_(0x1) << AT_CTRLA_RUNSTDBY_Pos)             /* (AT_CTRLA) RUNSTDBY Enable Bit Mask */
#define AT_CTRLA_RUNSTDBY(value)              (AT_CTRLA_RUNSTDBY_Msk & (_UINT32_(value) << AT_CTRLA_RUNSTDBY_Pos)) /* Assignment of value for RUNSTDBY in the AT_CTRLA register */
#define AT_CTRLA_Msk                          _UINT32_(0x00000045)                                 /* (AT_CTRLA) Register Mask  */


/* -------- AT_TAMPER_KEY : (AT Offset: 0x100) (R/W 32) Tamper Key n Register -------- */
#define AT_TAMPER_KEY_RESETVALUE              _UINT32_(0x00)                                       /*  (AT_TAMPER_KEY) Tamper Key n Register  Reset Value */

#define AT_TAMPER_KEY_TAMPERKEY_Pos           _UINT32_(0)                                          /* (AT_TAMPER_KEY) Tamper Key Value Position */
#define AT_TAMPER_KEY_TAMPERKEY_Msk           (_UINT32_(0xFFFFFFFF) << AT_TAMPER_KEY_TAMPERKEY_Pos) /* (AT_TAMPER_KEY) Tamper Key Value Mask */
#define AT_TAMPER_KEY_TAMPERKEY(value)        (AT_TAMPER_KEY_TAMPERKEY_Msk & (_UINT32_(value) << AT_TAMPER_KEY_TAMPERKEY_Pos)) /* Assignment of value for TAMPERKEY in the AT_TAMPER_KEY register */
#define AT_TAMPER_KEY_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (AT_TAMPER_KEY) Register Mask  */


/* -------- AT_anti_tamper__LEVELA : (AT Offset: 0x200) ( R/ 32) Tamper levels 0 to 7. -------- */
#define AT_anti_tamper__LEVELA_RESETVALUE     _UINT32_(0x00)                                       /*  (AT_anti_tamper__LEVELA) Tamper levels 0 to 7.  Reset Value */

#define AT_anti_tamper__LEVELA_LEVEL0_Pos     _UINT32_(0)                                          /* (AT_anti_tamper__LEVELA) Level 0. Position */
#define AT_anti_tamper__LEVELA_LEVEL0_Msk     (_UINT32_(0xF) << AT_anti_tamper__LEVELA_LEVEL0_Pos) /* (AT_anti_tamper__LEVELA) Level 0. Mask */
#define AT_anti_tamper__LEVELA_LEVEL0(value)  (AT_anti_tamper__LEVELA_LEVEL0_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELA_LEVEL0_Pos)) /* Assignment of value for LEVEL0 in the AT_anti_tamper__LEVELA register */
#define AT_anti_tamper__LEVELA_LEVEL1_Pos     _UINT32_(4)                                          /* (AT_anti_tamper__LEVELA) Level 1. Position */
#define AT_anti_tamper__LEVELA_LEVEL1_Msk     (_UINT32_(0xF) << AT_anti_tamper__LEVELA_LEVEL1_Pos) /* (AT_anti_tamper__LEVELA) Level 1. Mask */
#define AT_anti_tamper__LEVELA_LEVEL1(value)  (AT_anti_tamper__LEVELA_LEVEL1_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELA_LEVEL1_Pos)) /* Assignment of value for LEVEL1 in the AT_anti_tamper__LEVELA register */
#define AT_anti_tamper__LEVELA_LEVEL2_Pos     _UINT32_(8)                                          /* (AT_anti_tamper__LEVELA) Level 2. Position */
#define AT_anti_tamper__LEVELA_LEVEL2_Msk     (_UINT32_(0xF) << AT_anti_tamper__LEVELA_LEVEL2_Pos) /* (AT_anti_tamper__LEVELA) Level 2. Mask */
#define AT_anti_tamper__LEVELA_LEVEL2(value)  (AT_anti_tamper__LEVELA_LEVEL2_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELA_LEVEL2_Pos)) /* Assignment of value for LEVEL2 in the AT_anti_tamper__LEVELA register */
#define AT_anti_tamper__LEVELA_LEVEL3_Pos     _UINT32_(12)                                         /* (AT_anti_tamper__LEVELA) Level 3. Position */
#define AT_anti_tamper__LEVELA_LEVEL3_Msk     (_UINT32_(0xF) << AT_anti_tamper__LEVELA_LEVEL3_Pos) /* (AT_anti_tamper__LEVELA) Level 3. Mask */
#define AT_anti_tamper__LEVELA_LEVEL3(value)  (AT_anti_tamper__LEVELA_LEVEL3_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELA_LEVEL3_Pos)) /* Assignment of value for LEVEL3 in the AT_anti_tamper__LEVELA register */
#define AT_anti_tamper__LEVELA_LEVEL4_Pos     _UINT32_(16)                                         /* (AT_anti_tamper__LEVELA) Level 4. Position */
#define AT_anti_tamper__LEVELA_LEVEL4_Msk     (_UINT32_(0xF) << AT_anti_tamper__LEVELA_LEVEL4_Pos) /* (AT_anti_tamper__LEVELA) Level 4. Mask */
#define AT_anti_tamper__LEVELA_LEVEL4(value)  (AT_anti_tamper__LEVELA_LEVEL4_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELA_LEVEL4_Pos)) /* Assignment of value for LEVEL4 in the AT_anti_tamper__LEVELA register */
#define AT_anti_tamper__LEVELA_LEVEL5_Pos     _UINT32_(20)                                         /* (AT_anti_tamper__LEVELA) Level 5. Position */
#define AT_anti_tamper__LEVELA_LEVEL5_Msk     (_UINT32_(0xF) << AT_anti_tamper__LEVELA_LEVEL5_Pos) /* (AT_anti_tamper__LEVELA) Level 5. Mask */
#define AT_anti_tamper__LEVELA_LEVEL5(value)  (AT_anti_tamper__LEVELA_LEVEL5_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELA_LEVEL5_Pos)) /* Assignment of value for LEVEL5 in the AT_anti_tamper__LEVELA register */
#define AT_anti_tamper__LEVELA_LEVEL6_Pos     _UINT32_(24)                                         /* (AT_anti_tamper__LEVELA) Level 6. Position */
#define AT_anti_tamper__LEVELA_LEVEL6_Msk     (_UINT32_(0xF) << AT_anti_tamper__LEVELA_LEVEL6_Pos) /* (AT_anti_tamper__LEVELA) Level 6. Mask */
#define AT_anti_tamper__LEVELA_LEVEL6(value)  (AT_anti_tamper__LEVELA_LEVEL6_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELA_LEVEL6_Pos)) /* Assignment of value for LEVEL6 in the AT_anti_tamper__LEVELA register */
#define AT_anti_tamper__LEVELA_LEVEL7_Pos     _UINT32_(28)                                         /* (AT_anti_tamper__LEVELA) Level 7. Position */
#define AT_anti_tamper__LEVELA_LEVEL7_Msk     (_UINT32_(0xF) << AT_anti_tamper__LEVELA_LEVEL7_Pos) /* (AT_anti_tamper__LEVELA) Level 7. Mask */
#define AT_anti_tamper__LEVELA_LEVEL7(value)  (AT_anti_tamper__LEVELA_LEVEL7_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELA_LEVEL7_Pos)) /* Assignment of value for LEVEL7 in the AT_anti_tamper__LEVELA register */
#define AT_anti_tamper__LEVELA_Msk            _UINT32_(0xFFFFFFFF)                                 /* (AT_anti_tamper__LEVELA) Register Mask  */


/* -------- AT_anti_tamper__LEVELB : (AT Offset: 0x204) ( R/ 32) Tamper levels 8 to 15. -------- */
#define AT_anti_tamper__LEVELB_RESETVALUE     _UINT32_(0x00)                                       /*  (AT_anti_tamper__LEVELB) Tamper levels 8 to 15.  Reset Value */

#define AT_anti_tamper__LEVELB_LEVEL8_Pos     _UINT32_(0)                                          /* (AT_anti_tamper__LEVELB) Level 8. Position */
#define AT_anti_tamper__LEVELB_LEVEL8_Msk     (_UINT32_(0xF) << AT_anti_tamper__LEVELB_LEVEL8_Pos) /* (AT_anti_tamper__LEVELB) Level 8. Mask */
#define AT_anti_tamper__LEVELB_LEVEL8(value)  (AT_anti_tamper__LEVELB_LEVEL8_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELB_LEVEL8_Pos)) /* Assignment of value for LEVEL8 in the AT_anti_tamper__LEVELB register */
#define AT_anti_tamper__LEVELB_LEVEL9_Pos     _UINT32_(4)                                          /* (AT_anti_tamper__LEVELB) Level 9. Position */
#define AT_anti_tamper__LEVELB_LEVEL9_Msk     (_UINT32_(0xF) << AT_anti_tamper__LEVELB_LEVEL9_Pos) /* (AT_anti_tamper__LEVELB) Level 9. Mask */
#define AT_anti_tamper__LEVELB_LEVEL9(value)  (AT_anti_tamper__LEVELB_LEVEL9_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELB_LEVEL9_Pos)) /* Assignment of value for LEVEL9 in the AT_anti_tamper__LEVELB register */
#define AT_anti_tamper__LEVELB_LEVEL10_Pos    _UINT32_(8)                                          /* (AT_anti_tamper__LEVELB) Level 10. Position */
#define AT_anti_tamper__LEVELB_LEVEL10_Msk    (_UINT32_(0xF) << AT_anti_tamper__LEVELB_LEVEL10_Pos) /* (AT_anti_tamper__LEVELB) Level 10. Mask */
#define AT_anti_tamper__LEVELB_LEVEL10(value) (AT_anti_tamper__LEVELB_LEVEL10_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELB_LEVEL10_Pos)) /* Assignment of value for LEVEL10 in the AT_anti_tamper__LEVELB register */
#define AT_anti_tamper__LEVELB_LEVEL11_Pos    _UINT32_(12)                                         /* (AT_anti_tamper__LEVELB) Level 11. Position */
#define AT_anti_tamper__LEVELB_LEVEL11_Msk    (_UINT32_(0xF) << AT_anti_tamper__LEVELB_LEVEL11_Pos) /* (AT_anti_tamper__LEVELB) Level 11. Mask */
#define AT_anti_tamper__LEVELB_LEVEL11(value) (AT_anti_tamper__LEVELB_LEVEL11_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELB_LEVEL11_Pos)) /* Assignment of value for LEVEL11 in the AT_anti_tamper__LEVELB register */
#define AT_anti_tamper__LEVELB_LEVEL12_Pos    _UINT32_(16)                                         /* (AT_anti_tamper__LEVELB) Level 12. Position */
#define AT_anti_tamper__LEVELB_LEVEL12_Msk    (_UINT32_(0xF) << AT_anti_tamper__LEVELB_LEVEL12_Pos) /* (AT_anti_tamper__LEVELB) Level 12. Mask */
#define AT_anti_tamper__LEVELB_LEVEL12(value) (AT_anti_tamper__LEVELB_LEVEL12_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELB_LEVEL12_Pos)) /* Assignment of value for LEVEL12 in the AT_anti_tamper__LEVELB register */
#define AT_anti_tamper__LEVELB_LEVEL13_Pos    _UINT32_(20)                                         /* (AT_anti_tamper__LEVELB) Level 13. Position */
#define AT_anti_tamper__LEVELB_LEVEL13_Msk    (_UINT32_(0xF) << AT_anti_tamper__LEVELB_LEVEL13_Pos) /* (AT_anti_tamper__LEVELB) Level 13. Mask */
#define AT_anti_tamper__LEVELB_LEVEL13(value) (AT_anti_tamper__LEVELB_LEVEL13_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELB_LEVEL13_Pos)) /* Assignment of value for LEVEL13 in the AT_anti_tamper__LEVELB register */
#define AT_anti_tamper__LEVELB_LEVEL14_Pos    _UINT32_(24)                                         /* (AT_anti_tamper__LEVELB) Level 14. Position */
#define AT_anti_tamper__LEVELB_LEVEL14_Msk    (_UINT32_(0xF) << AT_anti_tamper__LEVELB_LEVEL14_Pos) /* (AT_anti_tamper__LEVELB) Level 14. Mask */
#define AT_anti_tamper__LEVELB_LEVEL14(value) (AT_anti_tamper__LEVELB_LEVEL14_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELB_LEVEL14_Pos)) /* Assignment of value for LEVEL14 in the AT_anti_tamper__LEVELB register */
#define AT_anti_tamper__LEVELB_LEVEL15_Pos    _UINT32_(28)                                         /* (AT_anti_tamper__LEVELB) Level 15. Position */
#define AT_anti_tamper__LEVELB_LEVEL15_Msk    (_UINT32_(0xF) << AT_anti_tamper__LEVELB_LEVEL15_Pos) /* (AT_anti_tamper__LEVELB) Level 15. Mask */
#define AT_anti_tamper__LEVELB_LEVEL15(value) (AT_anti_tamper__LEVELB_LEVEL15_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELB_LEVEL15_Pos)) /* Assignment of value for LEVEL15 in the AT_anti_tamper__LEVELB register */
#define AT_anti_tamper__LEVELB_Msk            _UINT32_(0xFFFFFFFF)                                 /* (AT_anti_tamper__LEVELB) Register Mask  */


/* -------- AT_anti_tamper__LEVELC : (AT Offset: 0x208) ( R/ 32) Tamper levels 16 to 23. -------- */
#define AT_anti_tamper__LEVELC_RESETVALUE     _UINT32_(0x00)                                       /*  (AT_anti_tamper__LEVELC) Tamper levels 16 to 23.  Reset Value */

#define AT_anti_tamper__LEVELC_LEVEL16_Pos    _UINT32_(0)                                          /* (AT_anti_tamper__LEVELC) Level 16. Position */
#define AT_anti_tamper__LEVELC_LEVEL16_Msk    (_UINT32_(0xF) << AT_anti_tamper__LEVELC_LEVEL16_Pos) /* (AT_anti_tamper__LEVELC) Level 16. Mask */
#define AT_anti_tamper__LEVELC_LEVEL16(value) (AT_anti_tamper__LEVELC_LEVEL16_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELC_LEVEL16_Pos)) /* Assignment of value for LEVEL16 in the AT_anti_tamper__LEVELC register */
#define AT_anti_tamper__LEVELC_LEVEL17_Pos    _UINT32_(4)                                          /* (AT_anti_tamper__LEVELC) Level 17. Position */
#define AT_anti_tamper__LEVELC_LEVEL17_Msk    (_UINT32_(0xF) << AT_anti_tamper__LEVELC_LEVEL17_Pos) /* (AT_anti_tamper__LEVELC) Level 17. Mask */
#define AT_anti_tamper__LEVELC_LEVEL17(value) (AT_anti_tamper__LEVELC_LEVEL17_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELC_LEVEL17_Pos)) /* Assignment of value for LEVEL17 in the AT_anti_tamper__LEVELC register */
#define AT_anti_tamper__LEVELC_LEVEL18_Pos    _UINT32_(8)                                          /* (AT_anti_tamper__LEVELC) Level 18. Position */
#define AT_anti_tamper__LEVELC_LEVEL18_Msk    (_UINT32_(0xF) << AT_anti_tamper__LEVELC_LEVEL18_Pos) /* (AT_anti_tamper__LEVELC) Level 18. Mask */
#define AT_anti_tamper__LEVELC_LEVEL18(value) (AT_anti_tamper__LEVELC_LEVEL18_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELC_LEVEL18_Pos)) /* Assignment of value for LEVEL18 in the AT_anti_tamper__LEVELC register */
#define AT_anti_tamper__LEVELC_LEVEL19_Pos    _UINT32_(12)                                         /* (AT_anti_tamper__LEVELC) Level 19. Position */
#define AT_anti_tamper__LEVELC_LEVEL19_Msk    (_UINT32_(0xF) << AT_anti_tamper__LEVELC_LEVEL19_Pos) /* (AT_anti_tamper__LEVELC) Level 19. Mask */
#define AT_anti_tamper__LEVELC_LEVEL19(value) (AT_anti_tamper__LEVELC_LEVEL19_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELC_LEVEL19_Pos)) /* Assignment of value for LEVEL19 in the AT_anti_tamper__LEVELC register */
#define AT_anti_tamper__LEVELC_LEVEL20_Pos    _UINT32_(16)                                         /* (AT_anti_tamper__LEVELC) Level 20. Position */
#define AT_anti_tamper__LEVELC_LEVEL20_Msk    (_UINT32_(0xF) << AT_anti_tamper__LEVELC_LEVEL20_Pos) /* (AT_anti_tamper__LEVELC) Level 20. Mask */
#define AT_anti_tamper__LEVELC_LEVEL20(value) (AT_anti_tamper__LEVELC_LEVEL20_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELC_LEVEL20_Pos)) /* Assignment of value for LEVEL20 in the AT_anti_tamper__LEVELC register */
#define AT_anti_tamper__LEVELC_LEVEL21_Pos    _UINT32_(20)                                         /* (AT_anti_tamper__LEVELC) Level 21. Position */
#define AT_anti_tamper__LEVELC_LEVEL21_Msk    (_UINT32_(0xF) << AT_anti_tamper__LEVELC_LEVEL21_Pos) /* (AT_anti_tamper__LEVELC) Level 21. Mask */
#define AT_anti_tamper__LEVELC_LEVEL21(value) (AT_anti_tamper__LEVELC_LEVEL21_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELC_LEVEL21_Pos)) /* Assignment of value for LEVEL21 in the AT_anti_tamper__LEVELC register */
#define AT_anti_tamper__LEVELC_LEVEL22_Pos    _UINT32_(24)                                         /* (AT_anti_tamper__LEVELC) Level 22. Position */
#define AT_anti_tamper__LEVELC_LEVEL22_Msk    (_UINT32_(0xF) << AT_anti_tamper__LEVELC_LEVEL22_Pos) /* (AT_anti_tamper__LEVELC) Level 22. Mask */
#define AT_anti_tamper__LEVELC_LEVEL22(value) (AT_anti_tamper__LEVELC_LEVEL22_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELC_LEVEL22_Pos)) /* Assignment of value for LEVEL22 in the AT_anti_tamper__LEVELC register */
#define AT_anti_tamper__LEVELC_LEVEL23_Pos    _UINT32_(28)                                         /* (AT_anti_tamper__LEVELC) Level 23. Position */
#define AT_anti_tamper__LEVELC_LEVEL23_Msk    (_UINT32_(0xF) << AT_anti_tamper__LEVELC_LEVEL23_Pos) /* (AT_anti_tamper__LEVELC) Level 23. Mask */
#define AT_anti_tamper__LEVELC_LEVEL23(value) (AT_anti_tamper__LEVELC_LEVEL23_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELC_LEVEL23_Pos)) /* Assignment of value for LEVEL23 in the AT_anti_tamper__LEVELC register */
#define AT_anti_tamper__LEVELC_Msk            _UINT32_(0xFFFFFFFF)                                 /* (AT_anti_tamper__LEVELC) Register Mask  */


/* -------- AT_anti_tamper__LEVELD : (AT Offset: 0x20C) ( R/ 32) Tamper levels 24 to 31. -------- */
#define AT_anti_tamper__LEVELD_RESETVALUE     _UINT32_(0x00)                                       /*  (AT_anti_tamper__LEVELD) Tamper levels 24 to 31.  Reset Value */

#define AT_anti_tamper__LEVELD_LEVEL24_Pos    _UINT32_(0)                                          /* (AT_anti_tamper__LEVELD) Level 24. Position */
#define AT_anti_tamper__LEVELD_LEVEL24_Msk    (_UINT32_(0xF) << AT_anti_tamper__LEVELD_LEVEL24_Pos) /* (AT_anti_tamper__LEVELD) Level 24. Mask */
#define AT_anti_tamper__LEVELD_LEVEL24(value) (AT_anti_tamper__LEVELD_LEVEL24_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELD_LEVEL24_Pos)) /* Assignment of value for LEVEL24 in the AT_anti_tamper__LEVELD register */
#define AT_anti_tamper__LEVELD_LEVEL25_Pos    _UINT32_(4)                                          /* (AT_anti_tamper__LEVELD) Level 25. Position */
#define AT_anti_tamper__LEVELD_LEVEL25_Msk    (_UINT32_(0xF) << AT_anti_tamper__LEVELD_LEVEL25_Pos) /* (AT_anti_tamper__LEVELD) Level 25. Mask */
#define AT_anti_tamper__LEVELD_LEVEL25(value) (AT_anti_tamper__LEVELD_LEVEL25_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELD_LEVEL25_Pos)) /* Assignment of value for LEVEL25 in the AT_anti_tamper__LEVELD register */
#define AT_anti_tamper__LEVELD_LEVEL26_Pos    _UINT32_(8)                                          /* (AT_anti_tamper__LEVELD) Level 26. Position */
#define AT_anti_tamper__LEVELD_LEVEL26_Msk    (_UINT32_(0xF) << AT_anti_tamper__LEVELD_LEVEL26_Pos) /* (AT_anti_tamper__LEVELD) Level 26. Mask */
#define AT_anti_tamper__LEVELD_LEVEL26(value) (AT_anti_tamper__LEVELD_LEVEL26_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELD_LEVEL26_Pos)) /* Assignment of value for LEVEL26 in the AT_anti_tamper__LEVELD register */
#define AT_anti_tamper__LEVELD_LEVEL27_Pos    _UINT32_(12)                                         /* (AT_anti_tamper__LEVELD) Level 27. Position */
#define AT_anti_tamper__LEVELD_LEVEL27_Msk    (_UINT32_(0xF) << AT_anti_tamper__LEVELD_LEVEL27_Pos) /* (AT_anti_tamper__LEVELD) Level 27. Mask */
#define AT_anti_tamper__LEVELD_LEVEL27(value) (AT_anti_tamper__LEVELD_LEVEL27_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELD_LEVEL27_Pos)) /* Assignment of value for LEVEL27 in the AT_anti_tamper__LEVELD register */
#define AT_anti_tamper__LEVELD_LEVEL28_Pos    _UINT32_(16)                                         /* (AT_anti_tamper__LEVELD) Level 28. Position */
#define AT_anti_tamper__LEVELD_LEVEL28_Msk    (_UINT32_(0xF) << AT_anti_tamper__LEVELD_LEVEL28_Pos) /* (AT_anti_tamper__LEVELD) Level 28. Mask */
#define AT_anti_tamper__LEVELD_LEVEL28(value) (AT_anti_tamper__LEVELD_LEVEL28_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELD_LEVEL28_Pos)) /* Assignment of value for LEVEL28 in the AT_anti_tamper__LEVELD register */
#define AT_anti_tamper__LEVELD_LEVEL29_Pos    _UINT32_(20)                                         /* (AT_anti_tamper__LEVELD) Level 29. Position */
#define AT_anti_tamper__LEVELD_LEVEL29_Msk    (_UINT32_(0xF) << AT_anti_tamper__LEVELD_LEVEL29_Pos) /* (AT_anti_tamper__LEVELD) Level 29. Mask */
#define AT_anti_tamper__LEVELD_LEVEL29(value) (AT_anti_tamper__LEVELD_LEVEL29_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELD_LEVEL29_Pos)) /* Assignment of value for LEVEL29 in the AT_anti_tamper__LEVELD register */
#define AT_anti_tamper__LEVELD_LEVEL30_Pos    _UINT32_(24)                                         /* (AT_anti_tamper__LEVELD) Level 30. Position */
#define AT_anti_tamper__LEVELD_LEVEL30_Msk    (_UINT32_(0xF) << AT_anti_tamper__LEVELD_LEVEL30_Pos) /* (AT_anti_tamper__LEVELD) Level 30. Mask */
#define AT_anti_tamper__LEVELD_LEVEL30(value) (AT_anti_tamper__LEVELD_LEVEL30_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELD_LEVEL30_Pos)) /* Assignment of value for LEVEL30 in the AT_anti_tamper__LEVELD register */
#define AT_anti_tamper__LEVELD_LEVEL31_Pos    _UINT32_(28)                                         /* (AT_anti_tamper__LEVELD) Level 31. Position */
#define AT_anti_tamper__LEVELD_LEVEL31_Msk    (_UINT32_(0xF) << AT_anti_tamper__LEVELD_LEVEL31_Pos) /* (AT_anti_tamper__LEVELD) Level 31. Mask */
#define AT_anti_tamper__LEVELD_LEVEL31(value) (AT_anti_tamper__LEVELD_LEVEL31_Msk & (_UINT32_(value) << AT_anti_tamper__LEVELD_LEVEL31_Pos)) /* Assignment of value for LEVEL31 in the AT_anti_tamper__LEVELD register */
#define AT_anti_tamper__LEVELD_Msk            _UINT32_(0xFFFFFFFF)                                 /* (AT_anti_tamper__LEVELD) Register Mask  */


/* -------- AT_anti_tamper__SETLEVEL : (AT Offset: 0x210) ( /W 32) Set tamper level. -------- */
#define AT_anti_tamper__SETLEVEL_RESETVALUE   _UINT32_(0x00)                                       /*  (AT_anti_tamper__SETLEVEL) Set tamper level.  Reset Value */

#define AT_anti_tamper__SETLEVEL_LEVEL_Pos    _UINT32_(0)                                          /* (AT_anti_tamper__SETLEVEL) Tamper level. Position */
#define AT_anti_tamper__SETLEVEL_LEVEL_Msk    (_UINT32_(0x7) << AT_anti_tamper__SETLEVEL_LEVEL_Pos) /* (AT_anti_tamper__SETLEVEL) Tamper level. Mask */
#define AT_anti_tamper__SETLEVEL_LEVEL(value) (AT_anti_tamper__SETLEVEL_LEVEL_Msk & (_UINT32_(value) << AT_anti_tamper__SETLEVEL_LEVEL_Pos)) /* Assignment of value for LEVEL in the AT_anti_tamper__SETLEVEL register */
#define AT_anti_tamper__SETLEVEL_ID_Pos       _UINT32_(8)                                          /* (AT_anti_tamper__SETLEVEL) Tamper ID. Position */
#define AT_anti_tamper__SETLEVEL_ID_Msk       (_UINT32_(0x1F) << AT_anti_tamper__SETLEVEL_ID_Pos)  /* (AT_anti_tamper__SETLEVEL) Tamper ID. Mask */
#define AT_anti_tamper__SETLEVEL_ID(value)    (AT_anti_tamper__SETLEVEL_ID_Msk & (_UINT32_(value) << AT_anti_tamper__SETLEVEL_ID_Pos)) /* Assignment of value for ID in the AT_anti_tamper__SETLEVEL register */
#define AT_anti_tamper__SETLEVEL_PROTKEY_Pos  _UINT32_(16)                                         /* (AT_anti_tamper__SETLEVEL) Protection key (0xA84C). Position */
#define AT_anti_tamper__SETLEVEL_PROTKEY_Msk  (_UINT32_(0xFFFF) << AT_anti_tamper__SETLEVEL_PROTKEY_Pos) /* (AT_anti_tamper__SETLEVEL) Protection key (0xA84C). Mask */
#define AT_anti_tamper__SETLEVEL_PROTKEY(value) (AT_anti_tamper__SETLEVEL_PROTKEY_Msk & (_UINT32_(value) << AT_anti_tamper__SETLEVEL_PROTKEY_Pos)) /* Assignment of value for PROTKEY in the AT_anti_tamper__SETLEVEL register */
#define AT_anti_tamper__SETLEVEL_Msk          _UINT32_(0xFFFF1F07)                                 /* (AT_anti_tamper__SETLEVEL) Register Mask  */


/* -------- AT_anti_tamper__FILTERCFG : (AT Offset: 0x214) (R/W 32) Filter configuration (threshold, period). -------- */
#define AT_anti_tamper__FILTERCFG_RESETVALUE  _UINT32_(0x00)                                       /*  (AT_anti_tamper__FILTERCFG) Filter configuration (threshold, period).  Reset Value */

#define AT_anti_tamper__FILTERCFG_THRESH_Pos  _UINT32_(0)                                          /* (AT_anti_tamper__FILTERCFG) Threshold. Position */
#define AT_anti_tamper__FILTERCFG_THRESH_Msk  (_UINT32_(0x7) << AT_anti_tamper__FILTERCFG_THRESH_Pos) /* (AT_anti_tamper__FILTERCFG) Threshold. Mask */
#define AT_anti_tamper__FILTERCFG_THRESH(value) (AT_anti_tamper__FILTERCFG_THRESH_Msk & (_UINT32_(value) << AT_anti_tamper__FILTERCFG_THRESH_Pos)) /* Assignment of value for THRESH in the AT_anti_tamper__FILTERCFG register */
#define AT_anti_tamper__FILTERCFG_PERIOD_Pos  _UINT32_(8)                                          /* (AT_anti_tamper__FILTERCFG) Period. Position */
#define AT_anti_tamper__FILTERCFG_PERIOD_Msk  (_UINT32_(0x1F) << AT_anti_tamper__FILTERCFG_PERIOD_Pos) /* (AT_anti_tamper__FILTERCFG) Period. Mask */
#define AT_anti_tamper__FILTERCFG_PERIOD(value) (AT_anti_tamper__FILTERCFG_PERIOD_Msk & (_UINT32_(value) << AT_anti_tamper__FILTERCFG_PERIOD_Pos)) /* Assignment of value for PERIOD in the AT_anti_tamper__FILTERCFG register */
#define AT_anti_tamper__FILTERCFG_PROTKEY_Pos _UINT32_(16)                                         /* (AT_anti_tamper__FILTERCFG) Protection key (0x92F5). Position */
#define AT_anti_tamper__FILTERCFG_PROTKEY_Msk (_UINT32_(0xFFFF) << AT_anti_tamper__FILTERCFG_PROTKEY_Pos) /* (AT_anti_tamper__FILTERCFG) Protection key (0x92F5). Mask */
#define AT_anti_tamper__FILTERCFG_PROTKEY(value) (AT_anti_tamper__FILTERCFG_PROTKEY_Msk & (_UINT32_(value) << AT_anti_tamper__FILTERCFG_PROTKEY_Pos)) /* Assignment of value for PROTKEY in the AT_anti_tamper__FILTERCFG register */
#define AT_anti_tamper__FILTERCFG_Msk         _UINT32_(0xFFFF1F07)                                 /* (AT_anti_tamper__FILTERCFG) Register Mask  */


/* -------- AT_anti_tamper__SOFTTAMP : (AT Offset: 0x218) (R/W 32) Software triggered tamper. -------- */
#define AT_anti_tamper__SOFTTAMP_RESETVALUE   _UINT32_(0x00)                                       /*  (AT_anti_tamper__SOFTTAMP) Software triggered tamper.  Reset Value */

#define AT_anti_tamper__SOFTTAMP_ACTIVE_Pos   _UINT32_(0)                                          /* (AT_anti_tamper__SOFTTAMP) Tamper active. Position */
#define AT_anti_tamper__SOFTTAMP_ACTIVE_Msk   (_UINT32_(0x1) << AT_anti_tamper__SOFTTAMP_ACTIVE_Pos) /* (AT_anti_tamper__SOFTTAMP) Tamper active. Mask */
#define AT_anti_tamper__SOFTTAMP_ACTIVE(value) (AT_anti_tamper__SOFTTAMP_ACTIVE_Msk & (_UINT32_(value) << AT_anti_tamper__SOFTTAMP_ACTIVE_Pos)) /* Assignment of value for ACTIVE in the AT_anti_tamper__SOFTTAMP register */
#define AT_anti_tamper__SOFTTAMP_ID_Pos       _UINT32_(8)                                          /* (AT_anti_tamper__SOFTTAMP) Tamper ID. Position */
#define AT_anti_tamper__SOFTTAMP_ID_Msk       (_UINT32_(0x1F) << AT_anti_tamper__SOFTTAMP_ID_Pos)  /* (AT_anti_tamper__SOFTTAMP) Tamper ID. Mask */
#define AT_anti_tamper__SOFTTAMP_ID(value)    (AT_anti_tamper__SOFTTAMP_ID_Msk & (_UINT32_(value) << AT_anti_tamper__SOFTTAMP_ID_Pos)) /* Assignment of value for ID in the AT_anti_tamper__SOFTTAMP register */
#define AT_anti_tamper__SOFTTAMP_PROTKEY_Pos  _UINT32_(16)                                         /* (AT_anti_tamper__SOFTTAMP) Protection key (0x4BEE). Position */
#define AT_anti_tamper__SOFTTAMP_PROTKEY_Msk  (_UINT32_(0xFFFF) << AT_anti_tamper__SOFTTAMP_PROTKEY_Pos) /* (AT_anti_tamper__SOFTTAMP) Protection key (0x4BEE). Mask */
#define AT_anti_tamper__SOFTTAMP_PROTKEY(value) (AT_anti_tamper__SOFTTAMP_PROTKEY_Msk & (_UINT32_(value) << AT_anti_tamper__SOFTTAMP_PROTKEY_Pos)) /* Assignment of value for PROTKEY in the AT_anti_tamper__SOFTTAMP register */
#define AT_anti_tamper__SOFTTAMP_Msk          _UINT32_(0xFFFF1F01)                                 /* (AT_anti_tamper__SOFTTAMP) Register Mask  */


/* -------- AT_anti_tamper__RAWSTAT : (AT Offset: 0x21C) ( R/ 32) Raw status. -------- */
#define AT_anti_tamper__RAWSTAT_RESETVALUE    _UINT32_(0x00)                                       /*  (AT_anti_tamper__RAWSTAT) Raw status.  Reset Value */

#define AT_anti_tamper__RAWSTAT_RAWSTAT_Pos   _UINT32_(0)                                          /* (AT_anti_tamper__RAWSTAT) Raw status. Position */
#define AT_anti_tamper__RAWSTAT_RAWSTAT_Msk   (_UINT32_(0xFFFFFFFF) << AT_anti_tamper__RAWSTAT_RAWSTAT_Pos) /* (AT_anti_tamper__RAWSTAT) Raw status. Mask */
#define AT_anti_tamper__RAWSTAT_RAWSTAT(value) (AT_anti_tamper__RAWSTAT_RAWSTAT_Msk & (_UINT32_(value) << AT_anti_tamper__RAWSTAT_RAWSTAT_Pos)) /* Assignment of value for RAWSTAT in the AT_anti_tamper__RAWSTAT register */
#define AT_anti_tamper__RAWSTAT_Msk           _UINT32_(0xFFFFFFFF)                                 /* (AT_anti_tamper__RAWSTAT) Register Mask  */


/* -------- AT_anti_tamper__STAT : (AT Offset: 0x220) (R/W 32) Status (write to clear). -------- */
#define AT_anti_tamper__STAT_RESETVALUE       _UINT32_(0x01)                                       /*  (AT_anti_tamper__STAT) Status (write to clear).  Reset Value */

#define AT_anti_tamper__STAT_STAT_Pos         _UINT32_(0)                                          /* (AT_anti_tamper__STAT) Status (write to clear). Position */
#define AT_anti_tamper__STAT_STAT_Msk         (_UINT32_(0xFFFFFFFF) << AT_anti_tamper__STAT_STAT_Pos) /* (AT_anti_tamper__STAT) Status (write to clear). Mask */
#define AT_anti_tamper__STAT_STAT(value)      (AT_anti_tamper__STAT_STAT_Msk & (_UINT32_(value) << AT_anti_tamper__STAT_STAT_Pos)) /* Assignment of value for STAT in the AT_anti_tamper__STAT register */
#define AT_anti_tamper__STAT_Msk              _UINT32_(0xFFFFFFFF)                                 /* (AT_anti_tamper__STAT) Register Mask  */


/* -------- AT_anti_tamper__TIMESTAMP : (AT Offset: 0x224) ( R/ 32) Timestamp for the last tamper. -------- */
#define AT_anti_tamper__TIMESTAMP_RESETVALUE  _UINT32_(0x00)                                       /*  (AT_anti_tamper__TIMESTAMP) Timestamp for the last tamper.  Reset Value */

#define AT_anti_tamper__TIMESTAMP_TIMESTAMP_Pos _UINT32_(0)                                          /* (AT_anti_tamper__TIMESTAMP) Timestamp for the last tamper. Position */
#define AT_anti_tamper__TIMESTAMP_TIMESTAMP_Msk (_UINT32_(0xFFFFFFFF) << AT_anti_tamper__TIMESTAMP_TIMESTAMP_Pos) /* (AT_anti_tamper__TIMESTAMP) Timestamp for the last tamper. Mask */
#define AT_anti_tamper__TIMESTAMP_TIMESTAMP(value) (AT_anti_tamper__TIMESTAMP_TIMESTAMP_Msk & (_UINT32_(value) << AT_anti_tamper__TIMESTAMP_TIMESTAMP_Pos)) /* Assignment of value for TIMESTAMP in the AT_anti_tamper__TIMESTAMP register */
#define AT_anti_tamper__TIMESTAMP_Msk         _UINT32_(0xFFFFFFFF)                                 /* (AT_anti_tamper__TIMESTAMP) Register Mask  */


/* -------- AT_anti_tamper__FILTERCNT : (AT Offset: 0x228) ( R/ 32) Current value of filter counter. -------- */
#define AT_anti_tamper__FILTERCNT_RESETVALUE  _UINT32_(0x00)                                       /*  (AT_anti_tamper__FILTERCNT) Current value of filter counter.  Reset Value */

#define AT_anti_tamper__FILTERCNT_FILTERCNT_Pos _UINT32_(0)                                          /* (AT_anti_tamper__FILTERCNT) Current value of filter counter. Position */
#define AT_anti_tamper__FILTERCNT_FILTERCNT_Msk (_UINT32_(0xFFFFFFFF) << AT_anti_tamper__FILTERCNT_FILTERCNT_Pos) /* (AT_anti_tamper__FILTERCNT) Current value of filter counter. Mask */
#define AT_anti_tamper__FILTERCNT_FILTERCNT(value) (AT_anti_tamper__FILTERCNT_FILTERCNT_Msk & (_UINT32_(value) << AT_anti_tamper__FILTERCNT_FILTERCNT_Pos)) /* Assignment of value for FILTERCNT in the AT_anti_tamper__FILTERCNT register */
#define AT_anti_tamper__FILTERCNT_Msk         _UINT32_(0xFFFFFFFF)                                 /* (AT_anti_tamper__FILTERCNT) Register Mask  */


/* -------- AT_anti_tamper__SOFTINFO : (AT Offset: 0x22C) (R/W 32) Register for software purpose only. -------- */
#define AT_anti_tamper__SOFTINFO_RESETVALUE   _UINT32_(0x00)                                       /*  (AT_anti_tamper__SOFTINFO) Register for software purpose only.  Reset Value */

#define AT_anti_tamper__SOFTINFO_SOFTINFO_Pos _UINT32_(0)                                          /* (AT_anti_tamper__SOFTINFO) Register for software purpose only. Position */
#define AT_anti_tamper__SOFTINFO_SOFTINFO_Msk (_UINT32_(0xFFFFFFFF) << AT_anti_tamper__SOFTINFO_SOFTINFO_Pos) /* (AT_anti_tamper__SOFTINFO) Register for software purpose only. Mask */
#define AT_anti_tamper__SOFTINFO_SOFTINFO(value) (AT_anti_tamper__SOFTINFO_SOFTINFO_Msk & (_UINT32_(value) << AT_anti_tamper__SOFTINFO_SOFTINFO_Pos)) /* Assignment of value for SOFTINFO in the AT_anti_tamper__SOFTINFO register */
#define AT_anti_tamper__SOFTINFO_Msk          _UINT32_(0xFFFFFFFF)                                 /* (AT_anti_tamper__SOFTINFO) Register Mask  */


/* -------- AT_anti_tamper__TAMPERFLAG : (AT Offset: 0x230) (R/W 32) The 1-bit TAMPERFLAG register directly controls the TAMPER_FLAG output. -------- */
#define AT_anti_tamper__TAMPERFLAG_RESETVALUE _UINT32_(0x00)                                       /*  (AT_anti_tamper__TAMPERFLAG) The 1-bit TAMPERFLAG register directly controls the TAMPER_FLAG output.  Reset Value */

#define AT_anti_tamper__TAMPERFLAG_TAMPERFLAG_Pos _UINT32_(0)                                          /* (AT_anti_tamper__TAMPERFLAG) The 1-bit TAMPERFLAG register directly controls the TAMPER_FLAG output. Position */
#define AT_anti_tamper__TAMPERFLAG_TAMPERFLAG_Msk (_UINT32_(0x1) << AT_anti_tamper__TAMPERFLAG_TAMPERFLAG_Pos) /* (AT_anti_tamper__TAMPERFLAG) The 1-bit TAMPERFLAG register directly controls the TAMPER_FLAG output. Mask */
#define AT_anti_tamper__TAMPERFLAG_TAMPERFLAG(value) (AT_anti_tamper__TAMPERFLAG_TAMPERFLAG_Msk & (_UINT32_(value) << AT_anti_tamper__TAMPERFLAG_TAMPERFLAG_Pos)) /* Assignment of value for TAMPERFLAG in the AT_anti_tamper__TAMPERFLAG register */
#define AT_anti_tamper__TAMPERFLAG_Msk        _UINT32_(0x00000001)                                 /* (AT_anti_tamper__TAMPERFLAG) Register Mask  */


/* -------- AT_anti_tamper__SOFTRESET : (AT Offset: 0x234) ( R/ 32) Reading the SOFTLVL4 register returns 1 if any active soft tamper has a level of 4 or above. -------- */
#define AT_anti_tamper__SOFTRESET_RESETVALUE  _UINT32_(0x00)                                       /*  (AT_anti_tamper__SOFTRESET) Reading the SOFTLVL4 register returns 1 if any active soft tamper has a level of 4 or above.  Reset Value */

#define AT_anti_tamper__SOFTRESET_SOFTRESET_Pos _UINT32_(0)                                          /* (AT_anti_tamper__SOFTRESET) Reading the SOFTLVL4 register returns 1 if any active soft tamper has a level of 4 or above. Position */
#define AT_anti_tamper__SOFTRESET_SOFTRESET_Msk (_UINT32_(0x1) << AT_anti_tamper__SOFTRESET_SOFTRESET_Pos) /* (AT_anti_tamper__SOFTRESET) Reading the SOFTLVL4 register returns 1 if any active soft tamper has a level of 4 or above. Mask */
#define AT_anti_tamper__SOFTRESET_SOFTRESET(value) (AT_anti_tamper__SOFTRESET_SOFTRESET_Msk & (_UINT32_(value) << AT_anti_tamper__SOFTRESET_SOFTRESET_Pos)) /* Assignment of value for SOFTRESET in the AT_anti_tamper__SOFTRESET register */
#define AT_anti_tamper__SOFTRESET_Msk         _UINT32_(0x00000001)                                 /* (AT_anti_tamper__SOFTRESET) Register Mask  */


/* AT register offsets definitions */
#define AT_CTRLA_REG_OFST              _UINT32_(0x00)      /* (AT_CTRLA) Control Register A Offset */
#define AT_TAMPER_KEY_REG_OFST         _UINT32_(0x100)     /* (AT_TAMPER_KEY) Tamper Key n Register Offset */
#define AT_TAMPER_KEY0_REG_OFST        _UINT32_(0x100)     /* (AT_TAMPER_KEY0) Tamper Key n Register Offset */
#define AT_TAMPER_KEY1_REG_OFST        _UINT32_(0x104)     /* (AT_TAMPER_KEY1) Tamper Key n Register Offset */
#define AT_TAMPER_KEY2_REG_OFST        _UINT32_(0x108)     /* (AT_TAMPER_KEY2) Tamper Key n Register Offset */
#define AT_TAMPER_KEY3_REG_OFST        _UINT32_(0x10C)     /* (AT_TAMPER_KEY3) Tamper Key n Register Offset */
#define AT_TAMPER_KEY4_REG_OFST        _UINT32_(0x110)     /* (AT_TAMPER_KEY4) Tamper Key n Register Offset */
#define AT_TAMPER_KEY5_REG_OFST        _UINT32_(0x114)     /* (AT_TAMPER_KEY5) Tamper Key n Register Offset */
#define AT_TAMPER_KEY6_REG_OFST        _UINT32_(0x118)     /* (AT_TAMPER_KEY6) Tamper Key n Register Offset */
#define AT_TAMPER_KEY7_REG_OFST        _UINT32_(0x11C)     /* (AT_TAMPER_KEY7) Tamper Key n Register Offset */
#define AT_TAMPER_KEY8_REG_OFST        _UINT32_(0x120)     /* (AT_TAMPER_KEY8) Tamper Key n Register Offset */
#define AT_TAMPER_KEY9_REG_OFST        _UINT32_(0x124)     /* (AT_TAMPER_KEY9) Tamper Key n Register Offset */
#define AT_TAMPER_KEY10_REG_OFST       _UINT32_(0x128)     /* (AT_TAMPER_KEY10) Tamper Key n Register Offset */
#define AT_TAMPER_KEY11_REG_OFST       _UINT32_(0x12C)     /* (AT_TAMPER_KEY11) Tamper Key n Register Offset */
#define AT_TAMPER_KEY12_REG_OFST       _UINT32_(0x130)     /* (AT_TAMPER_KEY12) Tamper Key n Register Offset */
#define AT_TAMPER_KEY13_REG_OFST       _UINT32_(0x134)     /* (AT_TAMPER_KEY13) Tamper Key n Register Offset */
#define AT_TAMPER_KEY14_REG_OFST       _UINT32_(0x138)     /* (AT_TAMPER_KEY14) Tamper Key n Register Offset */
#define AT_TAMPER_KEY15_REG_OFST       _UINT32_(0x13C)     /* (AT_TAMPER_KEY15) Tamper Key n Register Offset */
#define AT_anti_tamper__LEVELA_REG_OFST _UINT32_(0x200)     /* (AT_anti_tamper__LEVELA) Tamper levels 0 to 7. Offset */
#define AT_anti_tamper__LEVELB_REG_OFST _UINT32_(0x204)     /* (AT_anti_tamper__LEVELB) Tamper levels 8 to 15. Offset */
#define AT_anti_tamper__LEVELC_REG_OFST _UINT32_(0x208)     /* (AT_anti_tamper__LEVELC) Tamper levels 16 to 23. Offset */
#define AT_anti_tamper__LEVELD_REG_OFST _UINT32_(0x20C)     /* (AT_anti_tamper__LEVELD) Tamper levels 24 to 31. Offset */
#define AT_anti_tamper__SETLEVEL_REG_OFST _UINT32_(0x210)     /* (AT_anti_tamper__SETLEVEL) Set tamper level. Offset */
#define AT_anti_tamper__FILTERCFG_REG_OFST _UINT32_(0x214)     /* (AT_anti_tamper__FILTERCFG) Filter configuration (threshold, period). Offset */
#define AT_anti_tamper__SOFTTAMP_REG_OFST _UINT32_(0x218)     /* (AT_anti_tamper__SOFTTAMP) Software triggered tamper. Offset */
#define AT_anti_tamper__RAWSTAT_REG_OFST _UINT32_(0x21C)     /* (AT_anti_tamper__RAWSTAT) Raw status. Offset */
#define AT_anti_tamper__STAT_REG_OFST  _UINT32_(0x220)     /* (AT_anti_tamper__STAT) Status (write to clear). Offset */
#define AT_anti_tamper__TIMESTAMP_REG_OFST _UINT32_(0x224)     /* (AT_anti_tamper__TIMESTAMP) Timestamp for the last tamper. Offset */
#define AT_anti_tamper__FILTERCNT_REG_OFST _UINT32_(0x228)     /* (AT_anti_tamper__FILTERCNT) Current value of filter counter. Offset */
#define AT_anti_tamper__SOFTINFO_REG_OFST _UINT32_(0x22C)     /* (AT_anti_tamper__SOFTINFO) Register for software purpose only. Offset */
#define AT_anti_tamper__TAMPERFLAG_REG_OFST _UINT32_(0x230)     /* (AT_anti_tamper__TAMPERFLAG) The 1-bit TAMPERFLAG register directly controls the TAMPER_FLAG output. Offset */
#define AT_anti_tamper__SOFTRESET_REG_OFST _UINT32_(0x234)     /* (AT_anti_tamper__SOFTRESET) Reading the SOFTLVL4 register returns 1 if any active soft tamper has a level of 4 or above. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* AT register API structure */
typedef struct
{  /* Anti-Tamper Controller (AT) */
  __IO  uint32_t                       AT_CTRLA;           /* Offset: 0x00 (R/W  32) Control Register A */
  __I   uint8_t                        Reserved1[0xFC];
  __IO  uint32_t                       AT_TAMPER_KEY[16];  /* Offset: 0x100 (R/W  32) Tamper Key n Register */
  __I   uint8_t                        Reserved2[0xC0];
  __I   uint32_t                       AT_anti_tamper__LEVELA; /* Offset: 0x200 (R/   32) Tamper levels 0 to 7. */
  __I   uint32_t                       AT_anti_tamper__LEVELB; /* Offset: 0x204 (R/   32) Tamper levels 8 to 15. */
  __I   uint32_t                       AT_anti_tamper__LEVELC; /* Offset: 0x208 (R/   32) Tamper levels 16 to 23. */
  __I   uint32_t                       AT_anti_tamper__LEVELD; /* Offset: 0x20C (R/   32) Tamper levels 24 to 31. */
  __O   uint32_t                       AT_anti_tamper__SETLEVEL; /* Offset: 0x210 ( /W  32) Set tamper level. */
  __IO  uint32_t                       AT_anti_tamper__FILTERCFG; /* Offset: 0x214 (R/W  32) Filter configuration (threshold, period). */
  __IO  uint32_t                       AT_anti_tamper__SOFTTAMP; /* Offset: 0x218 (R/W  32) Software triggered tamper. */
  __I   uint32_t                       AT_anti_tamper__RAWSTAT; /* Offset: 0x21C (R/   32) Raw status. */
  __IO  uint32_t                       AT_anti_tamper__STAT; /* Offset: 0x220 (R/W  32) Status (write to clear). */
  __I   uint32_t                       AT_anti_tamper__TIMESTAMP; /* Offset: 0x224 (R/   32) Timestamp for the last tamper. */
  __I   uint32_t                       AT_anti_tamper__FILTERCNT; /* Offset: 0x228 (R/   32) Current value of filter counter. */
  __IO  uint32_t                       AT_anti_tamper__SOFTINFO; /* Offset: 0x22C (R/W  32) Register for software purpose only. */
  __IO  uint32_t                       AT_anti_tamper__TAMPERFLAG; /* Offset: 0x230 (R/W  32) The 1-bit TAMPERFLAG register directly controls the TAMPER_FLAG output. */
  __I   uint32_t                       AT_anti_tamper__SOFTRESET; /* Offset: 0x234 (R/   32) Reading the SOFTLVL4 register returns 1 if any active soft tamper has a level of 4 or above. */
} at_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMGC00_AT_COMPONENT_H_ */
