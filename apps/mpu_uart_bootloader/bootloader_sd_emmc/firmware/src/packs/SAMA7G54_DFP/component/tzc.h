/*
 * Component description for TZC
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

/*      file generated from device description file (ATDF) version None       */
#ifndef _SAMA7G5_TZC_COMPONENT_H_
#define _SAMA7G5_TZC_COMPONENT_H_

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR TZC                       */
/* ************************************************************************** */

/* -------- TZC_CPU_REGION_BASE : (TZC Offset: 0x00) (R/W 32) TZC_CPU Region x Base Address Register  -------- */
#define TZC_CPU_REGION_BASE_RESETVALUE        _UINT32_(0x00)                                       /*  (TZC_CPU_REGION_BASE) TZC_CPU Region x Base Address Register   Reset Value */

#define TZC_CPU_REGION_BASE_BASE_ADDRESS_Pos  _UINT32_(12)                                         /* (TZC_CPU_REGION_BASE) Region y Base Address Position */
#define TZC_CPU_REGION_BASE_BASE_ADDRESS_Msk  (_UINT32_(0xFFFFF) << TZC_CPU_REGION_BASE_BASE_ADDRESS_Pos) /* (TZC_CPU_REGION_BASE) Region y Base Address Mask */
#define TZC_CPU_REGION_BASE_BASE_ADDRESS(value) (TZC_CPU_REGION_BASE_BASE_ADDRESS_Msk & (_UINT32_(value) << TZC_CPU_REGION_BASE_BASE_ADDRESS_Pos)) /* Assignment of value for BASE_ADDRESS in the TZC_CPU_REGION_BASE register */
#define TZC_CPU_REGION_BASE_Msk               _UINT32_(0xFFFFF000)                                 /* (TZC_CPU_REGION_BASE) Register Mask  */


/* -------- TZC_CPU_REGION_TOP : (TZC Offset: 0x08) (R/W 32) TZC_CPU Region x Top Address Register  -------- */
#define TZC_CPU_REGION_TOP_RESETVALUE         _UINT32_(0xFFF)                                      /*  (TZC_CPU_REGION_TOP) TZC_CPU Region x Top Address Register   Reset Value */

#define TZC_CPU_REGION_TOP_TOP_ADDRESS_Pos    _UINT32_(12)                                         /* (TZC_CPU_REGION_TOP) Region y Top Address Position */
#define TZC_CPU_REGION_TOP_TOP_ADDRESS_Msk    (_UINT32_(0xFFFFF) << TZC_CPU_REGION_TOP_TOP_ADDRESS_Pos) /* (TZC_CPU_REGION_TOP) Region y Top Address Mask */
#define TZC_CPU_REGION_TOP_TOP_ADDRESS(value) (TZC_CPU_REGION_TOP_TOP_ADDRESS_Msk & (_UINT32_(value) << TZC_CPU_REGION_TOP_TOP_ADDRESS_Pos)) /* Assignment of value for TOP_ADDRESS in the TZC_CPU_REGION_TOP register */
#define TZC_CPU_REGION_TOP_Msk                _UINT32_(0xFFFFF000)                                 /* (TZC_CPU_REGION_TOP) Register Mask  */


/* -------- TZC_CPU_REGION_ATTRIBUTES : (TZC Offset: 0x10) (R/W 32) TZC_CPU Region x Attribute Register  -------- */
#define TZC_CPU_REGION_ATTRIBUTES_RESETVALUE  _UINT32_(0x00)                                       /*  (TZC_CPU_REGION_ATTRIBUTES) TZC_CPU Region x Attribute Register   Reset Value */

#define TZC_CPU_REGION_ATTRIBUTES_FILTER_EN_Pos _UINT32_(0)                                          /* (TZC_CPU_REGION_ATTRIBUTES) Region y Filter Enable Position */
#define TZC_CPU_REGION_ATTRIBUTES_FILTER_EN_Msk (_UINT32_(0x1) << TZC_CPU_REGION_ATTRIBUTES_FILTER_EN_Pos) /* (TZC_CPU_REGION_ATTRIBUTES) Region y Filter Enable Mask */
#define TZC_CPU_REGION_ATTRIBUTES_FILTER_EN(value) (TZC_CPU_REGION_ATTRIBUTES_FILTER_EN_Msk & (_UINT32_(value) << TZC_CPU_REGION_ATTRIBUTES_FILTER_EN_Pos)) /* Assignment of value for FILTER_EN in the TZC_CPU_REGION_ATTRIBUTES register */
#define TZC_CPU_REGION_ATTRIBUTES_S_RD_EN_Pos _UINT32_(30)                                         /* (TZC_CPU_REGION_ATTRIBUTES) Region y Secure Global Read Enable Position */
#define TZC_CPU_REGION_ATTRIBUTES_S_RD_EN_Msk (_UINT32_(0x1) << TZC_CPU_REGION_ATTRIBUTES_S_RD_EN_Pos) /* (TZC_CPU_REGION_ATTRIBUTES) Region y Secure Global Read Enable Mask */
#define TZC_CPU_REGION_ATTRIBUTES_S_RD_EN(value) (TZC_CPU_REGION_ATTRIBUTES_S_RD_EN_Msk & (_UINT32_(value) << TZC_CPU_REGION_ATTRIBUTES_S_RD_EN_Pos)) /* Assignment of value for S_RD_EN in the TZC_CPU_REGION_ATTRIBUTES register */
#define TZC_CPU_REGION_ATTRIBUTES_S_WR_EN_Pos _UINT32_(31)                                         /* (TZC_CPU_REGION_ATTRIBUTES) Region y Secure Global Write Enable Position */
#define TZC_CPU_REGION_ATTRIBUTES_S_WR_EN_Msk (_UINT32_(0x1) << TZC_CPU_REGION_ATTRIBUTES_S_WR_EN_Pos) /* (TZC_CPU_REGION_ATTRIBUTES) Region y Secure Global Write Enable Mask */
#define TZC_CPU_REGION_ATTRIBUTES_S_WR_EN(value) (TZC_CPU_REGION_ATTRIBUTES_S_WR_EN_Msk & (_UINT32_(value) << TZC_CPU_REGION_ATTRIBUTES_S_WR_EN_Pos)) /* Assignment of value for S_WR_EN in the TZC_CPU_REGION_ATTRIBUTES register */
#define TZC_CPU_REGION_ATTRIBUTES_Msk         _UINT32_(0xC0000001)                                 /* (TZC_CPU_REGION_ATTRIBUTES) Register Mask  */


/* -------- TZC_CPU_REGION_ID_ACCESS : (TZC Offset: 0x14) (R/W 32) TZC_CPU Region x ID Access Register  -------- */
#define TZC_CPU_REGION_ID_ACCESS_RESETVALUE   _UINT32_(0x00)                                       /*  (TZC_CPU_REGION_ID_ACCESS) TZC_CPU Region x ID Access Register   Reset Value */

#define TZC_CPU_REGION_ID_ACCESS_NS_RD_EN_Pos _UINT32_(0)                                          /* (TZC_CPU_REGION_ID_ACCESS) Region y Non-Secure Global Read Enable Position */
#define TZC_CPU_REGION_ID_ACCESS_NS_RD_EN_Msk (_UINT32_(0x1) << TZC_CPU_REGION_ID_ACCESS_NS_RD_EN_Pos) /* (TZC_CPU_REGION_ID_ACCESS) Region y Non-Secure Global Read Enable Mask */
#define TZC_CPU_REGION_ID_ACCESS_NS_RD_EN(value) (TZC_CPU_REGION_ID_ACCESS_NS_RD_EN_Msk & (_UINT32_(value) << TZC_CPU_REGION_ID_ACCESS_NS_RD_EN_Pos)) /* Assignment of value for NS_RD_EN in the TZC_CPU_REGION_ID_ACCESS register */
#define TZC_CPU_REGION_ID_ACCESS_NS_WR_EN_Pos _UINT32_(16)                                         /* (TZC_CPU_REGION_ID_ACCESS) Region y 0 Non-Secure Global Write Enable Position */
#define TZC_CPU_REGION_ID_ACCESS_NS_WR_EN_Msk (_UINT32_(0x1) << TZC_CPU_REGION_ID_ACCESS_NS_WR_EN_Pos) /* (TZC_CPU_REGION_ID_ACCESS) Region y 0 Non-Secure Global Write Enable Mask */
#define TZC_CPU_REGION_ID_ACCESS_NS_WR_EN(value) (TZC_CPU_REGION_ID_ACCESS_NS_WR_EN_Msk & (_UINT32_(value) << TZC_CPU_REGION_ID_ACCESS_NS_WR_EN_Pos)) /* Assignment of value for NS_WR_EN in the TZC_CPU_REGION_ID_ACCESS register */
#define TZC_CPU_REGION_ID_ACCESS_Msk          _UINT32_(0x00010001)                                 /* (TZC_CPU_REGION_ID_ACCESS) Register Mask  */


/* -------- TZC_SYS_FAIL_ADDRESS : (TZC Offset: 0x00) ( R/ 32) TZC_SYS Fail Address Register  -------- */
#define TZC_SYS_FAIL_ADDRESS_RESETVALUE       _UINT32_(0x00)                                       /*  (TZC_SYS_FAIL_ADDRESS) TZC_SYS Fail Address Register   Reset Value */

#define TZC_SYS_FAIL_ADDRESS_FAIL_ADDRESS_Pos _UINT32_(0)                                          /* (TZC_SYS_FAIL_ADDRESS) Failure Access Address Position */
#define TZC_SYS_FAIL_ADDRESS_FAIL_ADDRESS_Msk (_UINT32_(0xFFFFFFFF) << TZC_SYS_FAIL_ADDRESS_FAIL_ADDRESS_Pos) /* (TZC_SYS_FAIL_ADDRESS) Failure Access Address Mask */
#define TZC_SYS_FAIL_ADDRESS_FAIL_ADDRESS(value) (TZC_SYS_FAIL_ADDRESS_FAIL_ADDRESS_Msk & (_UINT32_(value) << TZC_SYS_FAIL_ADDRESS_FAIL_ADDRESS_Pos)) /* Assignment of value for FAIL_ADDRESS in the TZC_SYS_FAIL_ADDRESS register */
#define TZC_SYS_FAIL_ADDRESS_Msk              _UINT32_(0xFFFFFFFF)                                 /* (TZC_SYS_FAIL_ADDRESS) Register Mask  */


/* -------- TZC_SYS_FAIL_CONTROL : (TZC Offset: 0x08) ( R/ 32) TZC_SYS Fail Control Register  -------- */
#define TZC_SYS_FAIL_CONTROL_RESETVALUE       _UINT32_(0x00)                                       /*  (TZC_SYS_FAIL_CONTROL) TZC_SYS Fail Control Register   Reset Value */

#define TZC_SYS_FAIL_CONTROL_PRIVILEGED_Pos   _UINT32_(20)                                         /* (TZC_SYS_FAIL_CONTROL) Failure Access Privileged Value Position */
#define TZC_SYS_FAIL_CONTROL_PRIVILEGED_Msk   (_UINT32_(0x1) << TZC_SYS_FAIL_CONTROL_PRIVILEGED_Pos) /* (TZC_SYS_FAIL_CONTROL) Failure Access Privileged Value Mask */
#define TZC_SYS_FAIL_CONTROL_PRIVILEGED(value) (TZC_SYS_FAIL_CONTROL_PRIVILEGED_Msk & (_UINT32_(value) << TZC_SYS_FAIL_CONTROL_PRIVILEGED_Pos)) /* Assignment of value for PRIVILEGED in the TZC_SYS_FAIL_CONTROL register */
#define TZC_SYS_FAIL_CONTROL_NONSECURE_Pos    _UINT32_(21)                                         /* (TZC_SYS_FAIL_CONTROL) Failure Access Security Value Position */
#define TZC_SYS_FAIL_CONTROL_NONSECURE_Msk    (_UINT32_(0x1) << TZC_SYS_FAIL_CONTROL_NONSECURE_Pos) /* (TZC_SYS_FAIL_CONTROL) Failure Access Security Value Mask */
#define TZC_SYS_FAIL_CONTROL_NONSECURE(value) (TZC_SYS_FAIL_CONTROL_NONSECURE_Msk & (_UINT32_(value) << TZC_SYS_FAIL_CONTROL_NONSECURE_Pos)) /* Assignment of value for NONSECURE in the TZC_SYS_FAIL_CONTROL register */
#define TZC_SYS_FAIL_CONTROL_DIRECTION_Pos    _UINT32_(24)                                         /* (TZC_SYS_FAIL_CONTROL) Failure Access Direction Position */
#define TZC_SYS_FAIL_CONTROL_DIRECTION_Msk    (_UINT32_(0x1) << TZC_SYS_FAIL_CONTROL_DIRECTION_Pos) /* (TZC_SYS_FAIL_CONTROL) Failure Access Direction Mask */
#define TZC_SYS_FAIL_CONTROL_DIRECTION(value) (TZC_SYS_FAIL_CONTROL_DIRECTION_Msk & (_UINT32_(value) << TZC_SYS_FAIL_CONTROL_DIRECTION_Pos)) /* Assignment of value for DIRECTION in the TZC_SYS_FAIL_CONTROL register */
#define   TZC_SYS_FAIL_CONTROL_DIRECTION_READ_ACCESS_Val _UINT32_(0x0)                                        /* (TZC_SYS_FAIL_CONTROL) Read access.  */
#define   TZC_SYS_FAIL_CONTROL_DIRECTION_WRITE_ACCESS_Val _UINT32_(0x1)                                        /* (TZC_SYS_FAIL_CONTROL) Write access.  */
#define TZC_SYS_FAIL_CONTROL_DIRECTION_READ_ACCESS (TZC_SYS_FAIL_CONTROL_DIRECTION_READ_ACCESS_Val << TZC_SYS_FAIL_CONTROL_DIRECTION_Pos) /* (TZC_SYS_FAIL_CONTROL) Read access. Position */
#define TZC_SYS_FAIL_CONTROL_DIRECTION_WRITE_ACCESS (TZC_SYS_FAIL_CONTROL_DIRECTION_WRITE_ACCESS_Val << TZC_SYS_FAIL_CONTROL_DIRECTION_Pos) /* (TZC_SYS_FAIL_CONTROL) Write access. Position */
#define TZC_SYS_FAIL_CONTROL_Msk              _UINT32_(0x01300000)                                 /* (TZC_SYS_FAIL_CONTROL) Register Mask  */


/* -------- TZC_SYS_FAIL_ID : (TZC Offset: 0x0C) ( R/ 32) TZC_SYS Fail ID Register  -------- */
#define TZC_SYS_FAIL_ID_RESETVALUE            _UINT32_(0x00)                                       /*  (TZC_SYS_FAIL_ID) TZC_SYS Fail ID Register   Reset Value */

#define TZC_SYS_FAIL_ID_FAIL_ID_Pos           _UINT32_(0)                                          /* (TZC_SYS_FAIL_ID) Failure Access ID Position */
#define TZC_SYS_FAIL_ID_FAIL_ID_Msk           (_UINT32_(0x1FFFF) << TZC_SYS_FAIL_ID_FAIL_ID_Pos)   /* (TZC_SYS_FAIL_ID) Failure Access ID Mask */
#define TZC_SYS_FAIL_ID_FAIL_ID(value)        (TZC_SYS_FAIL_ID_FAIL_ID_Msk & (_UINT32_(value) << TZC_SYS_FAIL_ID_FAIL_ID_Pos)) /* Assignment of value for FAIL_ID in the TZC_SYS_FAIL_ID register */
#define TZC_SYS_FAIL_ID_Msk                   _UINT32_(0x0001FFFF)                                 /* (TZC_SYS_FAIL_ID) Register Mask  */


/* -------- TZC_SYS_REGION_BASE : (TZC Offset: 0x00) (R/W 32) TZC_SYS Region x Base Address Register  -------- */
#define TZC_SYS_REGION_BASE_RESETVALUE        _UINT32_(0x00)                                       /*  (TZC_SYS_REGION_BASE) TZC_SYS Region x Base Address Register   Reset Value */

#define TZC_SYS_REGION_BASE_BASE_ADDRESS_Pos  _UINT32_(12)                                         /* (TZC_SYS_REGION_BASE) Region y Base Address Position */
#define TZC_SYS_REGION_BASE_BASE_ADDRESS_Msk  (_UINT32_(0xFFFFF) << TZC_SYS_REGION_BASE_BASE_ADDRESS_Pos) /* (TZC_SYS_REGION_BASE) Region y Base Address Mask */
#define TZC_SYS_REGION_BASE_BASE_ADDRESS(value) (TZC_SYS_REGION_BASE_BASE_ADDRESS_Msk & (_UINT32_(value) << TZC_SYS_REGION_BASE_BASE_ADDRESS_Pos)) /* Assignment of value for BASE_ADDRESS in the TZC_SYS_REGION_BASE register */
#define TZC_SYS_REGION_BASE_Msk               _UINT32_(0xFFFFF000)                                 /* (TZC_SYS_REGION_BASE) Register Mask  */


/* -------- TZC_SYS_REGION_TOP : (TZC Offset: 0x08) (R/W 32) TZC_SYS Region x Top Address Register  -------- */
#define TZC_SYS_REGION_TOP_RESETVALUE         _UINT32_(0xFFF)                                      /*  (TZC_SYS_REGION_TOP) TZC_SYS Region x Top Address Register   Reset Value */

#define TZC_SYS_REGION_TOP_TOP_ADDRESS_Pos    _UINT32_(12)                                         /* (TZC_SYS_REGION_TOP) Region y Top Address Position */
#define TZC_SYS_REGION_TOP_TOP_ADDRESS_Msk    (_UINT32_(0xFFFFF) << TZC_SYS_REGION_TOP_TOP_ADDRESS_Pos) /* (TZC_SYS_REGION_TOP) Region y Top Address Mask */
#define TZC_SYS_REGION_TOP_TOP_ADDRESS(value) (TZC_SYS_REGION_TOP_TOP_ADDRESS_Msk & (_UINT32_(value) << TZC_SYS_REGION_TOP_TOP_ADDRESS_Pos)) /* Assignment of value for TOP_ADDRESS in the TZC_SYS_REGION_TOP register */
#define TZC_SYS_REGION_TOP_Msk                _UINT32_(0xFFFFF000)                                 /* (TZC_SYS_REGION_TOP) Register Mask  */


/* -------- TZC_SYS_REGION_ATTRIBUTES : (TZC Offset: 0x10) (R/W 32) TZC_SYS Region x Attribute Register  -------- */
#define TZC_SYS_REGION_ATTRIBUTES_RESETVALUE  _UINT32_(0x00)                                       /*  (TZC_SYS_REGION_ATTRIBUTES) TZC_SYS Region x Attribute Register   Reset Value */

#define TZC_SYS_REGION_ATTRIBUTES_FILTER_EN_Pos _UINT32_(0)                                          /* (TZC_SYS_REGION_ATTRIBUTES) Region y Filter Enable Position */
#define TZC_SYS_REGION_ATTRIBUTES_FILTER_EN_Msk (_UINT32_(0xF) << TZC_SYS_REGION_ATTRIBUTES_FILTER_EN_Pos) /* (TZC_SYS_REGION_ATTRIBUTES) Region y Filter Enable Mask */
#define TZC_SYS_REGION_ATTRIBUTES_FILTER_EN(value) (TZC_SYS_REGION_ATTRIBUTES_FILTER_EN_Msk & (_UINT32_(value) << TZC_SYS_REGION_ATTRIBUTES_FILTER_EN_Pos)) /* Assignment of value for FILTER_EN in the TZC_SYS_REGION_ATTRIBUTES register */
#define TZC_SYS_REGION_ATTRIBUTES_S_RD_EN_Pos _UINT32_(30)                                         /* (TZC_SYS_REGION_ATTRIBUTES) Region y Secure Global Read Enable Position */
#define TZC_SYS_REGION_ATTRIBUTES_S_RD_EN_Msk (_UINT32_(0x1) << TZC_SYS_REGION_ATTRIBUTES_S_RD_EN_Pos) /* (TZC_SYS_REGION_ATTRIBUTES) Region y Secure Global Read Enable Mask */
#define TZC_SYS_REGION_ATTRIBUTES_S_RD_EN(value) (TZC_SYS_REGION_ATTRIBUTES_S_RD_EN_Msk & (_UINT32_(value) << TZC_SYS_REGION_ATTRIBUTES_S_RD_EN_Pos)) /* Assignment of value for S_RD_EN in the TZC_SYS_REGION_ATTRIBUTES register */
#define TZC_SYS_REGION_ATTRIBUTES_S_WR_EN_Pos _UINT32_(31)                                         /* (TZC_SYS_REGION_ATTRIBUTES) Region y Secure Global Write Enable Position */
#define TZC_SYS_REGION_ATTRIBUTES_S_WR_EN_Msk (_UINT32_(0x1) << TZC_SYS_REGION_ATTRIBUTES_S_WR_EN_Pos) /* (TZC_SYS_REGION_ATTRIBUTES) Region y Secure Global Write Enable Mask */
#define TZC_SYS_REGION_ATTRIBUTES_S_WR_EN(value) (TZC_SYS_REGION_ATTRIBUTES_S_WR_EN_Msk & (_UINT32_(value) << TZC_SYS_REGION_ATTRIBUTES_S_WR_EN_Pos)) /* Assignment of value for S_WR_EN in the TZC_SYS_REGION_ATTRIBUTES register */
#define TZC_SYS_REGION_ATTRIBUTES_Msk         _UINT32_(0xC000000F)                                 /* (TZC_SYS_REGION_ATTRIBUTES) Register Mask  */


/* -------- TZC_SYS_REGION_ID_ACCESS : (TZC Offset: 0x14) (R/W 32) TZC_SYS Region x ID Access Register  -------- */
#define TZC_SYS_REGION_ID_ACCESS_RESETVALUE   _UINT32_(0x00)                                       /*  (TZC_SYS_REGION_ID_ACCESS) TZC_SYS Region x ID Access Register   Reset Value */

#define TZC_SYS_REGION_ID_ACCESS_NS_RD_EN_Pos _UINT32_(0)                                          /* (TZC_SYS_REGION_ID_ACCESS) Region y Non-Secure Global Read Enable Position */
#define TZC_SYS_REGION_ID_ACCESS_NS_RD_EN_Msk (_UINT32_(0x1) << TZC_SYS_REGION_ID_ACCESS_NS_RD_EN_Pos) /* (TZC_SYS_REGION_ID_ACCESS) Region y Non-Secure Global Read Enable Mask */
#define TZC_SYS_REGION_ID_ACCESS_NS_RD_EN(value) (TZC_SYS_REGION_ID_ACCESS_NS_RD_EN_Msk & (_UINT32_(value) << TZC_SYS_REGION_ID_ACCESS_NS_RD_EN_Pos)) /* Assignment of value for NS_RD_EN in the TZC_SYS_REGION_ID_ACCESS register */
#define TZC_SYS_REGION_ID_ACCESS_NS_WR_EN_Pos _UINT32_(16)                                         /* (TZC_SYS_REGION_ID_ACCESS) Region y Non-Secure Global Write Enable Position */
#define TZC_SYS_REGION_ID_ACCESS_NS_WR_EN_Msk (_UINT32_(0x1) << TZC_SYS_REGION_ID_ACCESS_NS_WR_EN_Pos) /* (TZC_SYS_REGION_ID_ACCESS) Region y Non-Secure Global Write Enable Mask */
#define TZC_SYS_REGION_ID_ACCESS_NS_WR_EN(value) (TZC_SYS_REGION_ID_ACCESS_NS_WR_EN_Msk & (_UINT32_(value) << TZC_SYS_REGION_ID_ACCESS_NS_WR_EN_Pos)) /* Assignment of value for NS_WR_EN in the TZC_SYS_REGION_ID_ACCESS register */
#define TZC_SYS_REGION_ID_ACCESS_Msk          _UINT32_(0x00010001)                                 /* (TZC_SYS_REGION_ID_ACCESS) Register Mask  */


/* -------- TZC_SYS_ACTION : (TZC Offset: 0x04) (R/W 32) TZC_SYS Action Register -------- */
#define TZC_SYS_ACTION_RESETVALUE             _UINT32_(0x00)                                       /*  (TZC_SYS_ACTION) TZC_SYS Action Register  Reset Value */

#define TZC_SYS_ACTION_REACTION_VALUE_Pos     _UINT32_(0)                                          /* (TZC_SYS_ACTION) Failure Reaction Position */
#define TZC_SYS_ACTION_REACTION_VALUE_Msk     (_UINT32_(0x3) << TZC_SYS_ACTION_REACTION_VALUE_Pos) /* (TZC_SYS_ACTION) Failure Reaction Mask */
#define TZC_SYS_ACTION_REACTION_VALUE(value)  (TZC_SYS_ACTION_REACTION_VALUE_Msk & (_UINT32_(value) << TZC_SYS_ACTION_REACTION_VALUE_Pos)) /* Assignment of value for REACTION_VALUE in the TZC_SYS_ACTION register */
#define   TZC_SYS_ACTION_REACTION_VALUE_NO_IT_AND_NO_BUS_ERROR_Val _UINT32_(0x0)                                        /* (TZC_SYS_ACTION) No interrupt line and no system bus error report  */
#define   TZC_SYS_ACTION_REACTION_VALUE_NO_IT_BUT_BUS_ERROR_Val _UINT32_(0x1)                                        /* (TZC_SYS_ACTION) No interrupt triggered but bus error response  */
#define   TZC_SYS_ACTION_REACTION_VALUE_IT_AND_NO_BUS_ERROR_Val _UINT32_(0x2)                                        /* (TZC_SYS_ACTION) Interrupt line and no system bus error report  */
#define   TZC_SYS_ACTION_REACTION_VALUE_IT_AND_BUS_ERROR_Val _UINT32_(0x3)                                        /* (TZC_SYS_ACTION) Interrupt line and system bus error report  */
#define TZC_SYS_ACTION_REACTION_VALUE_NO_IT_AND_NO_BUS_ERROR (TZC_SYS_ACTION_REACTION_VALUE_NO_IT_AND_NO_BUS_ERROR_Val << TZC_SYS_ACTION_REACTION_VALUE_Pos) /* (TZC_SYS_ACTION) No interrupt line and no system bus error report Position */
#define TZC_SYS_ACTION_REACTION_VALUE_NO_IT_BUT_BUS_ERROR (TZC_SYS_ACTION_REACTION_VALUE_NO_IT_BUT_BUS_ERROR_Val << TZC_SYS_ACTION_REACTION_VALUE_Pos) /* (TZC_SYS_ACTION) No interrupt triggered but bus error response Position */
#define TZC_SYS_ACTION_REACTION_VALUE_IT_AND_NO_BUS_ERROR (TZC_SYS_ACTION_REACTION_VALUE_IT_AND_NO_BUS_ERROR_Val << TZC_SYS_ACTION_REACTION_VALUE_Pos) /* (TZC_SYS_ACTION) Interrupt line and no system bus error report Position */
#define TZC_SYS_ACTION_REACTION_VALUE_IT_AND_BUS_ERROR (TZC_SYS_ACTION_REACTION_VALUE_IT_AND_BUS_ERROR_Val << TZC_SYS_ACTION_REACTION_VALUE_Pos) /* (TZC_SYS_ACTION) Interrupt line and system bus error report Position */
#define TZC_SYS_ACTION_Msk                    _UINT32_(0x00000003)                                 /* (TZC_SYS_ACTION) Register Mask  */


/* -------- TZC_SYS_GATE_KEEPER : (TZC Offset: 0x08) (R/W 32) TZC_SYS Gate Keeper Register -------- */
#define TZC_SYS_GATE_KEEPER_RESETVALUE        _UINT32_(0x00)                                       /*  (TZC_SYS_GATE_KEEPER) TZC_SYS Gate Keeper Register  Reset Value */

#define TZC_SYS_GATE_KEEPER_OPEN_REQUEST_Pos  _UINT32_(0)                                          /* (TZC_SYS_GATE_KEEPER) Gate Keeper Open Request Position */
#define TZC_SYS_GATE_KEEPER_OPEN_REQUEST_Msk  (_UINT32_(0xF) << TZC_SYS_GATE_KEEPER_OPEN_REQUEST_Pos) /* (TZC_SYS_GATE_KEEPER) Gate Keeper Open Request Mask */
#define TZC_SYS_GATE_KEEPER_OPEN_REQUEST(value) (TZC_SYS_GATE_KEEPER_OPEN_REQUEST_Msk & (_UINT32_(value) << TZC_SYS_GATE_KEEPER_OPEN_REQUEST_Pos)) /* Assignment of value for OPEN_REQUEST in the TZC_SYS_GATE_KEEPER register */
#define TZC_SYS_GATE_KEEPER_OPEN_STATUS_Pos   _UINT32_(16)                                         /* (TZC_SYS_GATE_KEEPER) Gate Keeper Open Status (read-only) Position */
#define TZC_SYS_GATE_KEEPER_OPEN_STATUS_Msk   (_UINT32_(0xF) << TZC_SYS_GATE_KEEPER_OPEN_STATUS_Pos) /* (TZC_SYS_GATE_KEEPER) Gate Keeper Open Status (read-only) Mask */
#define TZC_SYS_GATE_KEEPER_OPEN_STATUS(value) (TZC_SYS_GATE_KEEPER_OPEN_STATUS_Msk & (_UINT32_(value) << TZC_SYS_GATE_KEEPER_OPEN_STATUS_Pos)) /* Assignment of value for OPEN_STATUS in the TZC_SYS_GATE_KEEPER register */
#define TZC_SYS_GATE_KEEPER_Msk               _UINT32_(0x000F000F)                                 /* (TZC_SYS_GATE_KEEPER) Register Mask  */


/* -------- TZC_SYS_SPECULATION_CTRL : (TZC Offset: 0x0C) (R/W 32) TZC_SYS Speculation Control Register -------- */
#define TZC_SYS_SPECULATION_CTRL_RESETVALUE   _UINT32_(0x00)                                       /*  (TZC_SYS_SPECULATION_CTRL) TZC_SYS Speculation Control Register  Reset Value */

#define TZC_SYS_SPECULATION_CTRL_READ_SPEC_DISABLE_Pos _UINT32_(0)                                          /* (TZC_SYS_SPECULATION_CTRL) Read Speculation Disable Control Position */
#define TZC_SYS_SPECULATION_CTRL_READ_SPEC_DISABLE_Msk (_UINT32_(0x1) << TZC_SYS_SPECULATION_CTRL_READ_SPEC_DISABLE_Pos) /* (TZC_SYS_SPECULATION_CTRL) Read Speculation Disable Control Mask */
#define TZC_SYS_SPECULATION_CTRL_READ_SPEC_DISABLE(value) (TZC_SYS_SPECULATION_CTRL_READ_SPEC_DISABLE_Msk & (_UINT32_(value) << TZC_SYS_SPECULATION_CTRL_READ_SPEC_DISABLE_Pos)) /* Assignment of value for READ_SPEC_DISABLE in the TZC_SYS_SPECULATION_CTRL register */
#define TZC_SYS_SPECULATION_CTRL_WRITE_SPEC_DISABLE_Pos _UINT32_(1)                                          /* (TZC_SYS_SPECULATION_CTRL) Write Speculation Disable Control Position */
#define TZC_SYS_SPECULATION_CTRL_WRITE_SPEC_DISABLE_Msk (_UINT32_(0x1) << TZC_SYS_SPECULATION_CTRL_WRITE_SPEC_DISABLE_Pos) /* (TZC_SYS_SPECULATION_CTRL) Write Speculation Disable Control Mask */
#define TZC_SYS_SPECULATION_CTRL_WRITE_SPEC_DISABLE(value) (TZC_SYS_SPECULATION_CTRL_WRITE_SPEC_DISABLE_Msk & (_UINT32_(value) << TZC_SYS_SPECULATION_CTRL_WRITE_SPEC_DISABLE_Pos)) /* Assignment of value for WRITE_SPEC_DISABLE in the TZC_SYS_SPECULATION_CTRL register */
#define TZC_SYS_SPECULATION_CTRL_Msk          _UINT32_(0x00000003)                                 /* (TZC_SYS_SPECULATION_CTRL) Register Mask  */


/* -------- TZC_SYS_INT_STATUS : (TZC Offset: 0x10) ( R/ 32) TZC_SYS Interrupt Status Register -------- */
#define TZC_SYS_INT_STATUS_RESETVALUE         _UINT32_(0x00)                                       /*  (TZC_SYS_INT_STATUS) TZC_SYS Interrupt Status Register  Reset Value */

#define TZC_SYS_INT_STATUS_STATUS_Pos         _UINT32_(0)                                          /* (TZC_SYS_INT_STATUS) Interrupt Status Position */
#define TZC_SYS_INT_STATUS_STATUS_Msk         (_UINT32_(0xF) << TZC_SYS_INT_STATUS_STATUS_Pos)     /* (TZC_SYS_INT_STATUS) Interrupt Status Mask */
#define TZC_SYS_INT_STATUS_STATUS(value)      (TZC_SYS_INT_STATUS_STATUS_Msk & (_UINT32_(value) << TZC_SYS_INT_STATUS_STATUS_Pos)) /* Assignment of value for STATUS in the TZC_SYS_INT_STATUS register */
#define TZC_SYS_INT_STATUS_OVERRUN_Pos        _UINT32_(8)                                          /* (TZC_SYS_INT_STATUS) Interrupt Status Overrun Position */
#define TZC_SYS_INT_STATUS_OVERRUN_Msk        (_UINT32_(0xF) << TZC_SYS_INT_STATUS_OVERRUN_Pos)    /* (TZC_SYS_INT_STATUS) Interrupt Status Overrun Mask */
#define TZC_SYS_INT_STATUS_OVERRUN(value)     (TZC_SYS_INT_STATUS_OVERRUN_Msk & (_UINT32_(value) << TZC_SYS_INT_STATUS_OVERRUN_Pos)) /* Assignment of value for OVERRUN in the TZC_SYS_INT_STATUS register */
#define TZC_SYS_INT_STATUS_OVERLAP_Pos        _UINT32_(16)                                         /* (TZC_SYS_INT_STATUS) Interrupt Status Overlap Position */
#define TZC_SYS_INT_STATUS_OVERLAP_Msk        (_UINT32_(0xF) << TZC_SYS_INT_STATUS_OVERLAP_Pos)    /* (TZC_SYS_INT_STATUS) Interrupt Status Overlap Mask */
#define TZC_SYS_INT_STATUS_OVERLAP(value)     (TZC_SYS_INT_STATUS_OVERLAP_Msk & (_UINT32_(value) << TZC_SYS_INT_STATUS_OVERLAP_Pos)) /* Assignment of value for OVERLAP in the TZC_SYS_INT_STATUS register */
#define TZC_SYS_INT_STATUS_Msk                _UINT32_(0x000F0F0F)                                 /* (TZC_SYS_INT_STATUS) Register Mask  */


/* -------- TZC_SYS_INT_CLEAR : (TZC Offset: 0x14) ( /W 32) TZC_SYS Interrupt Clear Register -------- */
#define TZC_SYS_INT_CLEAR_CLEAR_Pos           _UINT32_(0)                                          /* (TZC_SYS_INT_CLEAR) Interrupt Clear Position */
#define TZC_SYS_INT_CLEAR_CLEAR_Msk           (_UINT32_(0xF) << TZC_SYS_INT_CLEAR_CLEAR_Pos)       /* (TZC_SYS_INT_CLEAR) Interrupt Clear Mask */
#define TZC_SYS_INT_CLEAR_CLEAR(value)        (TZC_SYS_INT_CLEAR_CLEAR_Msk & (_UINT32_(value) << TZC_SYS_INT_CLEAR_CLEAR_Pos)) /* Assignment of value for CLEAR in the TZC_SYS_INT_CLEAR register */
#define TZC_SYS_INT_CLEAR_Msk                 _UINT32_(0x0000000F)                                 /* (TZC_SYS_INT_CLEAR) Register Mask  */


/* -------- TZC_SYS_LPR : (TZC Offset: 0xFC0) (R/W 32) TZC_SYS Low-Power Register -------- */
#define TZC_SYS_LPR_RESETVALUE                _UINT32_(0x00)                                       /*  (TZC_SYS_LPR) TZC_SYS Low-Power Register  Reset Value */

#define TZC_SYS_LPR_FILTER_LP_EN_Pos          _UINT32_(0)                                          /* (TZC_SYS_LPR) Filter Low-Power Enable Position */
#define TZC_SYS_LPR_FILTER_LP_EN_Msk          (_UINT32_(0xF) << TZC_SYS_LPR_FILTER_LP_EN_Pos)      /* (TZC_SYS_LPR) Filter Low-Power Enable Mask */
#define TZC_SYS_LPR_FILTER_LP_EN(value)       (TZC_SYS_LPR_FILTER_LP_EN_Msk & (_UINT32_(value) << TZC_SYS_LPR_FILTER_LP_EN_Pos)) /* Assignment of value for FILTER_LP_EN in the TZC_SYS_LPR register */
#define TZC_SYS_LPR_CU_LP_EN_Pos              _UINT32_(8)                                          /* (TZC_SYS_LPR) Control Unit Low-Power Enable Position */
#define TZC_SYS_LPR_CU_LP_EN_Msk              (_UINT32_(0x1) << TZC_SYS_LPR_CU_LP_EN_Pos)          /* (TZC_SYS_LPR) Control Unit Low-Power Enable Mask */
#define TZC_SYS_LPR_CU_LP_EN(value)           (TZC_SYS_LPR_CU_LP_EN_Msk & (_UINT32_(value) << TZC_SYS_LPR_CU_LP_EN_Pos)) /* Assignment of value for CU_LP_EN in the TZC_SYS_LPR register */
#define TZC_SYS_LPR_Msk                       _UINT32_(0x0000010F)                                 /* (TZC_SYS_LPR) Register Mask  */


/* -------- TZC_CPU_ACTION : (TZC Offset: 0x1004) (R/W 32) TZC_CPU Action Register -------- */
#define TZC_CPU_ACTION_RESETVALUE             _UINT32_(0x00)                                       /*  (TZC_CPU_ACTION) TZC_CPU Action Register  Reset Value */

#define TZC_CPU_ACTION_REACTION_VALUE_Pos     _UINT32_(0)                                          /* (TZC_CPU_ACTION) Failure Reaction Position */
#define TZC_CPU_ACTION_REACTION_VALUE_Msk     (_UINT32_(0x3) << TZC_CPU_ACTION_REACTION_VALUE_Pos) /* (TZC_CPU_ACTION) Failure Reaction Mask */
#define TZC_CPU_ACTION_REACTION_VALUE(value)  (TZC_CPU_ACTION_REACTION_VALUE_Msk & (_UINT32_(value) << TZC_CPU_ACTION_REACTION_VALUE_Pos)) /* Assignment of value for REACTION_VALUE in the TZC_CPU_ACTION register */
#define   TZC_CPU_ACTION_REACTION_VALUE_NO_IT_AND_NO_BUS_ERROR_Val _UINT32_(0x0)                                        /* (TZC_CPU_ACTION) No interrupt line and no system bus error report  */
#define   TZC_CPU_ACTION_REACTION_VALUE_NO_IT_BUT_BUS_ERROR_Val _UINT32_(0x1)                                        /* (TZC_CPU_ACTION) No interrupt triggered but bus error response  */
#define   TZC_CPU_ACTION_REACTION_VALUE_IT_AND_NO_BUS_ERROR_Val _UINT32_(0x2)                                        /* (TZC_CPU_ACTION) Interrupt line and no system bus error report  */
#define   TZC_CPU_ACTION_REACTION_VALUE_IT_AND_BUS_ERROR_Val _UINT32_(0x3)                                        /* (TZC_CPU_ACTION) Interrupt line and system bus error report  */
#define TZC_CPU_ACTION_REACTION_VALUE_NO_IT_AND_NO_BUS_ERROR (TZC_CPU_ACTION_REACTION_VALUE_NO_IT_AND_NO_BUS_ERROR_Val << TZC_CPU_ACTION_REACTION_VALUE_Pos) /* (TZC_CPU_ACTION) No interrupt line and no system bus error report Position */
#define TZC_CPU_ACTION_REACTION_VALUE_NO_IT_BUT_BUS_ERROR (TZC_CPU_ACTION_REACTION_VALUE_NO_IT_BUT_BUS_ERROR_Val << TZC_CPU_ACTION_REACTION_VALUE_Pos) /* (TZC_CPU_ACTION) No interrupt triggered but bus error response Position */
#define TZC_CPU_ACTION_REACTION_VALUE_IT_AND_NO_BUS_ERROR (TZC_CPU_ACTION_REACTION_VALUE_IT_AND_NO_BUS_ERROR_Val << TZC_CPU_ACTION_REACTION_VALUE_Pos) /* (TZC_CPU_ACTION) Interrupt line and no system bus error report Position */
#define TZC_CPU_ACTION_REACTION_VALUE_IT_AND_BUS_ERROR (TZC_CPU_ACTION_REACTION_VALUE_IT_AND_BUS_ERROR_Val << TZC_CPU_ACTION_REACTION_VALUE_Pos) /* (TZC_CPU_ACTION) Interrupt line and system bus error report Position */
#define TZC_CPU_ACTION_Msk                    _UINT32_(0x00000003)                                 /* (TZC_CPU_ACTION) Register Mask  */


/* -------- TZC_CPU_GATE_KEEPER : (TZC Offset: 0x1008) (R/W 32) TZC_CPU Gate Keeper Register -------- */
#define TZC_CPU_GATE_KEEPER_RESETVALUE        _UINT32_(0x00)                                       /*  (TZC_CPU_GATE_KEEPER) TZC_CPU Gate Keeper Register  Reset Value */

#define TZC_CPU_GATE_KEEPER_OPEN_REQUEST_Pos  _UINT32_(0)                                          /* (TZC_CPU_GATE_KEEPER) Gate Keeper Open Request Position */
#define TZC_CPU_GATE_KEEPER_OPEN_REQUEST_Msk  (_UINT32_(0x1) << TZC_CPU_GATE_KEEPER_OPEN_REQUEST_Pos) /* (TZC_CPU_GATE_KEEPER) Gate Keeper Open Request Mask */
#define TZC_CPU_GATE_KEEPER_OPEN_REQUEST(value) (TZC_CPU_GATE_KEEPER_OPEN_REQUEST_Msk & (_UINT32_(value) << TZC_CPU_GATE_KEEPER_OPEN_REQUEST_Pos)) /* Assignment of value for OPEN_REQUEST in the TZC_CPU_GATE_KEEPER register */
#define TZC_CPU_GATE_KEEPER_OPEN_STATUS_Pos   _UINT32_(16)                                         /* (TZC_CPU_GATE_KEEPER) Gate Keeper Open Status (read-only) Position */
#define TZC_CPU_GATE_KEEPER_OPEN_STATUS_Msk   (_UINT32_(0x1) << TZC_CPU_GATE_KEEPER_OPEN_STATUS_Pos) /* (TZC_CPU_GATE_KEEPER) Gate Keeper Open Status (read-only) Mask */
#define TZC_CPU_GATE_KEEPER_OPEN_STATUS(value) (TZC_CPU_GATE_KEEPER_OPEN_STATUS_Msk & (_UINT32_(value) << TZC_CPU_GATE_KEEPER_OPEN_STATUS_Pos)) /* Assignment of value for OPEN_STATUS in the TZC_CPU_GATE_KEEPER register */
#define TZC_CPU_GATE_KEEPER_Msk               _UINT32_(0x00010001)                                 /* (TZC_CPU_GATE_KEEPER) Register Mask  */


/* -------- TZC_CPU_SPECULATION_CTRL : (TZC Offset: 0x100C) (R/W 32) TZC_CPU Speculation Control Register -------- */
#define TZC_CPU_SPECULATION_CTRL_RESETVALUE   _UINT32_(0x00)                                       /*  (TZC_CPU_SPECULATION_CTRL) TZC_CPU Speculation Control Register  Reset Value */

#define TZC_CPU_SPECULATION_CTRL_READ_SPEC_DISABLE_Pos _UINT32_(0)                                          /* (TZC_CPU_SPECULATION_CTRL) Read Speculation Disable Control Position */
#define TZC_CPU_SPECULATION_CTRL_READ_SPEC_DISABLE_Msk (_UINT32_(0x1) << TZC_CPU_SPECULATION_CTRL_READ_SPEC_DISABLE_Pos) /* (TZC_CPU_SPECULATION_CTRL) Read Speculation Disable Control Mask */
#define TZC_CPU_SPECULATION_CTRL_READ_SPEC_DISABLE(value) (TZC_CPU_SPECULATION_CTRL_READ_SPEC_DISABLE_Msk & (_UINT32_(value) << TZC_CPU_SPECULATION_CTRL_READ_SPEC_DISABLE_Pos)) /* Assignment of value for READ_SPEC_DISABLE in the TZC_CPU_SPECULATION_CTRL register */
#define TZC_CPU_SPECULATION_CTRL_WRITE_SPEC_DISABLE_Pos _UINT32_(1)                                          /* (TZC_CPU_SPECULATION_CTRL) Write Speculation Disable Control Position */
#define TZC_CPU_SPECULATION_CTRL_WRITE_SPEC_DISABLE_Msk (_UINT32_(0x1) << TZC_CPU_SPECULATION_CTRL_WRITE_SPEC_DISABLE_Pos) /* (TZC_CPU_SPECULATION_CTRL) Write Speculation Disable Control Mask */
#define TZC_CPU_SPECULATION_CTRL_WRITE_SPEC_DISABLE(value) (TZC_CPU_SPECULATION_CTRL_WRITE_SPEC_DISABLE_Msk & (_UINT32_(value) << TZC_CPU_SPECULATION_CTRL_WRITE_SPEC_DISABLE_Pos)) /* Assignment of value for WRITE_SPEC_DISABLE in the TZC_CPU_SPECULATION_CTRL register */
#define TZC_CPU_SPECULATION_CTRL_Msk          _UINT32_(0x00000003)                                 /* (TZC_CPU_SPECULATION_CTRL) Register Mask  */


/* -------- TZC_CPU_INT_STATUS : (TZC Offset: 0x1010) ( R/ 32) TZC_CPU Interrupt Status Register -------- */
#define TZC_CPU_INT_STATUS_RESETVALUE         _UINT32_(0x00)                                       /*  (TZC_CPU_INT_STATUS) TZC_CPU Interrupt Status Register  Reset Value */

#define TZC_CPU_INT_STATUS_STATUS_Pos         _UINT32_(0)                                          /* (TZC_CPU_INT_STATUS) Interrupt Status Position */
#define TZC_CPU_INT_STATUS_STATUS_Msk         (_UINT32_(0x1) << TZC_CPU_INT_STATUS_STATUS_Pos)     /* (TZC_CPU_INT_STATUS) Interrupt Status Mask */
#define TZC_CPU_INT_STATUS_STATUS(value)      (TZC_CPU_INT_STATUS_STATUS_Msk & (_UINT32_(value) << TZC_CPU_INT_STATUS_STATUS_Pos)) /* Assignment of value for STATUS in the TZC_CPU_INT_STATUS register */
#define TZC_CPU_INT_STATUS_OVERRUN_Pos        _UINT32_(8)                                          /* (TZC_CPU_INT_STATUS) Interrupt Status Overrun Position */
#define TZC_CPU_INT_STATUS_OVERRUN_Msk        (_UINT32_(0x1) << TZC_CPU_INT_STATUS_OVERRUN_Pos)    /* (TZC_CPU_INT_STATUS) Interrupt Status Overrun Mask */
#define TZC_CPU_INT_STATUS_OVERRUN(value)     (TZC_CPU_INT_STATUS_OVERRUN_Msk & (_UINT32_(value) << TZC_CPU_INT_STATUS_OVERRUN_Pos)) /* Assignment of value for OVERRUN in the TZC_CPU_INT_STATUS register */
#define TZC_CPU_INT_STATUS_OVERLAP_Pos        _UINT32_(16)                                         /* (TZC_CPU_INT_STATUS) Interrupt Status Overlap Position */
#define TZC_CPU_INT_STATUS_OVERLAP_Msk        (_UINT32_(0x1) << TZC_CPU_INT_STATUS_OVERLAP_Pos)    /* (TZC_CPU_INT_STATUS) Interrupt Status Overlap Mask */
#define TZC_CPU_INT_STATUS_OVERLAP(value)     (TZC_CPU_INT_STATUS_OVERLAP_Msk & (_UINT32_(value) << TZC_CPU_INT_STATUS_OVERLAP_Pos)) /* Assignment of value for OVERLAP in the TZC_CPU_INT_STATUS register */
#define TZC_CPU_INT_STATUS_Msk                _UINT32_(0x00010101)                                 /* (TZC_CPU_INT_STATUS) Register Mask  */


/* -------- TZC_CPU_INT_CLEAR : (TZC Offset: 0x1014) ( /W 32) TZC_CPU Interrupt Clear Register -------- */
#define TZC_CPU_INT_CLEAR_CLEAR_Pos           _UINT32_(0)                                          /* (TZC_CPU_INT_CLEAR) Interrupt Clear Position */
#define TZC_CPU_INT_CLEAR_CLEAR_Msk           (_UINT32_(0x1) << TZC_CPU_INT_CLEAR_CLEAR_Pos)       /* (TZC_CPU_INT_CLEAR) Interrupt Clear Mask */
#define TZC_CPU_INT_CLEAR_CLEAR(value)        (TZC_CPU_INT_CLEAR_CLEAR_Msk & (_UINT32_(value) << TZC_CPU_INT_CLEAR_CLEAR_Pos)) /* Assignment of value for CLEAR in the TZC_CPU_INT_CLEAR register */
#define TZC_CPU_INT_CLEAR_Msk                 _UINT32_(0x00000001)                                 /* (TZC_CPU_INT_CLEAR) Register Mask  */


/* -------- TZC_CPU_FAIL_ADDRESS0 : (TZC Offset: 0x1020) ( R/ 32) TZC_CPU Fail Address Register 0 -------- */
#define TZC_CPU_FAIL_ADDRESS0_RESETVALUE      _UINT32_(0x00)                                       /*  (TZC_CPU_FAIL_ADDRESS0) TZC_CPU Fail Address Register 0  Reset Value */

#define TZC_CPU_FAIL_ADDRESS0_FAIL_ADDRESS_Pos _UINT32_(0)                                          /* (TZC_CPU_FAIL_ADDRESS0) Failure Access Address Position */
#define TZC_CPU_FAIL_ADDRESS0_FAIL_ADDRESS_Msk (_UINT32_(0xFFFFFFFF) << TZC_CPU_FAIL_ADDRESS0_FAIL_ADDRESS_Pos) /* (TZC_CPU_FAIL_ADDRESS0) Failure Access Address Mask */
#define TZC_CPU_FAIL_ADDRESS0_FAIL_ADDRESS(value) (TZC_CPU_FAIL_ADDRESS0_FAIL_ADDRESS_Msk & (_UINT32_(value) << TZC_CPU_FAIL_ADDRESS0_FAIL_ADDRESS_Pos)) /* Assignment of value for FAIL_ADDRESS in the TZC_CPU_FAIL_ADDRESS0 register */
#define TZC_CPU_FAIL_ADDRESS0_Msk             _UINT32_(0xFFFFFFFF)                                 /* (TZC_CPU_FAIL_ADDRESS0) Register Mask  */


/* -------- TZC_CPU_FAIL_CONTROL0 : (TZC Offset: 0x1028) ( R/ 32) TZC_CPU Fail Control Register 0 -------- */
#define TZC_CPU_FAIL_CONTROL0_RESETVALUE      _UINT32_(0x00)                                       /*  (TZC_CPU_FAIL_CONTROL0) TZC_CPU Fail Control Register 0  Reset Value */

#define TZC_CPU_FAIL_CONTROL0_PRIVILEGED_Pos  _UINT32_(20)                                         /* (TZC_CPU_FAIL_CONTROL0) Failure Access Privileged Value Position */
#define TZC_CPU_FAIL_CONTROL0_PRIVILEGED_Msk  (_UINT32_(0x1) << TZC_CPU_FAIL_CONTROL0_PRIVILEGED_Pos) /* (TZC_CPU_FAIL_CONTROL0) Failure Access Privileged Value Mask */
#define TZC_CPU_FAIL_CONTROL0_PRIVILEGED(value) (TZC_CPU_FAIL_CONTROL0_PRIVILEGED_Msk & (_UINT32_(value) << TZC_CPU_FAIL_CONTROL0_PRIVILEGED_Pos)) /* Assignment of value for PRIVILEGED in the TZC_CPU_FAIL_CONTROL0 register */
#define TZC_CPU_FAIL_CONTROL0_NONSECURE_Pos   _UINT32_(21)                                         /* (TZC_CPU_FAIL_CONTROL0) Failure Access Security Value Position */
#define TZC_CPU_FAIL_CONTROL0_NONSECURE_Msk   (_UINT32_(0x1) << TZC_CPU_FAIL_CONTROL0_NONSECURE_Pos) /* (TZC_CPU_FAIL_CONTROL0) Failure Access Security Value Mask */
#define TZC_CPU_FAIL_CONTROL0_NONSECURE(value) (TZC_CPU_FAIL_CONTROL0_NONSECURE_Msk & (_UINT32_(value) << TZC_CPU_FAIL_CONTROL0_NONSECURE_Pos)) /* Assignment of value for NONSECURE in the TZC_CPU_FAIL_CONTROL0 register */
#define TZC_CPU_FAIL_CONTROL0_DIRECTION_Pos   _UINT32_(24)                                         /* (TZC_CPU_FAIL_CONTROL0) Failure Access Direction Position */
#define TZC_CPU_FAIL_CONTROL0_DIRECTION_Msk   (_UINT32_(0x1) << TZC_CPU_FAIL_CONTROL0_DIRECTION_Pos) /* (TZC_CPU_FAIL_CONTROL0) Failure Access Direction Mask */
#define TZC_CPU_FAIL_CONTROL0_DIRECTION(value) (TZC_CPU_FAIL_CONTROL0_DIRECTION_Msk & (_UINT32_(value) << TZC_CPU_FAIL_CONTROL0_DIRECTION_Pos)) /* Assignment of value for DIRECTION in the TZC_CPU_FAIL_CONTROL0 register */
#define   TZC_CPU_FAIL_CONTROL0_DIRECTION_READ_ACCESS_Val _UINT32_(0x0)                                        /* (TZC_CPU_FAIL_CONTROL0) Read access.  */
#define   TZC_CPU_FAIL_CONTROL0_DIRECTION_WRITE_ACCESS_Val _UINT32_(0x1)                                        /* (TZC_CPU_FAIL_CONTROL0) Write access.  */
#define TZC_CPU_FAIL_CONTROL0_DIRECTION_READ_ACCESS (TZC_CPU_FAIL_CONTROL0_DIRECTION_READ_ACCESS_Val << TZC_CPU_FAIL_CONTROL0_DIRECTION_Pos) /* (TZC_CPU_FAIL_CONTROL0) Read access. Position */
#define TZC_CPU_FAIL_CONTROL0_DIRECTION_WRITE_ACCESS (TZC_CPU_FAIL_CONTROL0_DIRECTION_WRITE_ACCESS_Val << TZC_CPU_FAIL_CONTROL0_DIRECTION_Pos) /* (TZC_CPU_FAIL_CONTROL0) Write access. Position */
#define TZC_CPU_FAIL_CONTROL0_Msk             _UINT32_(0x01300000)                                 /* (TZC_CPU_FAIL_CONTROL0) Register Mask  */


/* -------- TZC_CPU_FAIL_ID0 : (TZC Offset: 0x102C) ( R/ 32) TZC_CPU Fail ID Register 0 -------- */
#define TZC_CPU_FAIL_ID0_RESETVALUE           _UINT32_(0x00)                                       /*  (TZC_CPU_FAIL_ID0) TZC_CPU Fail ID Register 0  Reset Value */

#define TZC_CPU_FAIL_ID0_FAIL_ID_Pos          _UINT32_(0)                                          /* (TZC_CPU_FAIL_ID0) Failure Access ID Position */
#define TZC_CPU_FAIL_ID0_FAIL_ID_Msk          (_UINT32_(0x1FFFF) << TZC_CPU_FAIL_ID0_FAIL_ID_Pos)  /* (TZC_CPU_FAIL_ID0) Failure Access ID Mask */
#define TZC_CPU_FAIL_ID0_FAIL_ID(value)       (TZC_CPU_FAIL_ID0_FAIL_ID_Msk & (_UINT32_(value) << TZC_CPU_FAIL_ID0_FAIL_ID_Pos)) /* Assignment of value for FAIL_ID in the TZC_CPU_FAIL_ID0 register */
#define TZC_CPU_FAIL_ID0_Msk                  _UINT32_(0x0001FFFF)                                 /* (TZC_CPU_FAIL_ID0) Register Mask  */


/* -------- TZC_CPU_LPR : (TZC Offset: 0x1FC0) (R/W 32) TZC_CPU Low-Power Register -------- */
#define TZC_CPU_LPR_RESETVALUE                _UINT32_(0x00)                                       /*  (TZC_CPU_LPR) TZC_CPU Low-Power Register  Reset Value */

#define TZC_CPU_LPR_FILTER_LP_EN_Pos          _UINT32_(0)                                          /* (TZC_CPU_LPR) Filter Low-Power Enable Position */
#define TZC_CPU_LPR_FILTER_LP_EN_Msk          (_UINT32_(0x1) << TZC_CPU_LPR_FILTER_LP_EN_Pos)      /* (TZC_CPU_LPR) Filter Low-Power Enable Mask */
#define TZC_CPU_LPR_FILTER_LP_EN(value)       (TZC_CPU_LPR_FILTER_LP_EN_Msk & (_UINT32_(value) << TZC_CPU_LPR_FILTER_LP_EN_Pos)) /* Assignment of value for FILTER_LP_EN in the TZC_CPU_LPR register */
#define TZC_CPU_LPR_CU_LP_EN_Pos              _UINT32_(8)                                          /* (TZC_CPU_LPR) Control Unit Low-Power Enable Position */
#define TZC_CPU_LPR_CU_LP_EN_Msk              (_UINT32_(0x1) << TZC_CPU_LPR_CU_LP_EN_Pos)          /* (TZC_CPU_LPR) Control Unit Low-Power Enable Mask */
#define TZC_CPU_LPR_CU_LP_EN(value)           (TZC_CPU_LPR_CU_LP_EN_Msk & (_UINT32_(value) << TZC_CPU_LPR_CU_LP_EN_Pos)) /* Assignment of value for CU_LP_EN in the TZC_CPU_LPR register */
#define TZC_CPU_LPR_Msk                       _UINT32_(0x00000101)                                 /* (TZC_CPU_LPR) Register Mask  */


/* TZC register offsets definitions */
#define TZC_CPU_REGION_BASE_REG_OFST   _UINT32_(0x00)      /* (TZC_CPU_REGION_BASE) TZC_CPU Region x Base Address Register  Offset */
#define TZC_CPU_REGION_TOP_REG_OFST    _UINT32_(0x08)      /* (TZC_CPU_REGION_TOP) TZC_CPU Region x Top Address Register  Offset */
#define TZC_CPU_REGION_ATTRIBUTES_REG_OFST _UINT32_(0x10)      /* (TZC_CPU_REGION_ATTRIBUTES) TZC_CPU Region x Attribute Register  Offset */
#define TZC_CPU_REGION_ID_ACCESS_REG_OFST _UINT32_(0x14)      /* (TZC_CPU_REGION_ID_ACCESS) TZC_CPU Region x ID Access Register  Offset */
#define TZC_SYS_FAIL_ADDRESS_REG_OFST  _UINT32_(0x00)      /* (TZC_SYS_FAIL_ADDRESS) TZC_SYS Fail Address Register  Offset */
#define TZC_SYS_FAIL_CONTROL_REG_OFST  _UINT32_(0x08)      /* (TZC_SYS_FAIL_CONTROL) TZC_SYS Fail Control Register  Offset */
#define TZC_SYS_FAIL_ID_REG_OFST       _UINT32_(0x0C)      /* (TZC_SYS_FAIL_ID) TZC_SYS Fail ID Register  Offset */
#define TZC_SYS_REGION_BASE_REG_OFST   _UINT32_(0x00)      /* (TZC_SYS_REGION_BASE) TZC_SYS Region x Base Address Register  Offset */
#define TZC_SYS_REGION_TOP_REG_OFST    _UINT32_(0x08)      /* (TZC_SYS_REGION_TOP) TZC_SYS Region x Top Address Register  Offset */
#define TZC_SYS_REGION_ATTRIBUTES_REG_OFST _UINT32_(0x10)      /* (TZC_SYS_REGION_ATTRIBUTES) TZC_SYS Region x Attribute Register  Offset */
#define TZC_SYS_REGION_ID_ACCESS_REG_OFST _UINT32_(0x14)      /* (TZC_SYS_REGION_ID_ACCESS) TZC_SYS Region x ID Access Register  Offset */
#define TZC_SYS_ACTION_REG_OFST        _UINT32_(0x04)      /* (TZC_SYS_ACTION) TZC_SYS Action Register Offset */
#define TZC_SYS_GATE_KEEPER_REG_OFST   _UINT32_(0x08)      /* (TZC_SYS_GATE_KEEPER) TZC_SYS Gate Keeper Register Offset */
#define TZC_SYS_SPECULATION_CTRL_REG_OFST _UINT32_(0x0C)      /* (TZC_SYS_SPECULATION_CTRL) TZC_SYS Speculation Control Register Offset */
#define TZC_SYS_INT_STATUS_REG_OFST    _UINT32_(0x10)      /* (TZC_SYS_INT_STATUS) TZC_SYS Interrupt Status Register Offset */
#define TZC_SYS_INT_CLEAR_REG_OFST     _UINT32_(0x14)      /* (TZC_SYS_INT_CLEAR) TZC_SYS Interrupt Clear Register Offset */
#define TZC_SYS_LPR_REG_OFST           _UINT32_(0xFC0)     /* (TZC_SYS_LPR) TZC_SYS Low-Power Register Offset */
#define TZC_CPU_ACTION_REG_OFST        _UINT32_(0x1004)    /* (TZC_CPU_ACTION) TZC_CPU Action Register Offset */
#define TZC_CPU_GATE_KEEPER_REG_OFST   _UINT32_(0x1008)    /* (TZC_CPU_GATE_KEEPER) TZC_CPU Gate Keeper Register Offset */
#define TZC_CPU_SPECULATION_CTRL_REG_OFST _UINT32_(0x100C)    /* (TZC_CPU_SPECULATION_CTRL) TZC_CPU Speculation Control Register Offset */
#define TZC_CPU_INT_STATUS_REG_OFST    _UINT32_(0x1010)    /* (TZC_CPU_INT_STATUS) TZC_CPU Interrupt Status Register Offset */
#define TZC_CPU_INT_CLEAR_REG_OFST     _UINT32_(0x1014)    /* (TZC_CPU_INT_CLEAR) TZC_CPU Interrupt Clear Register Offset */
#define TZC_CPU_FAIL_ADDRESS0_REG_OFST _UINT32_(0x1020)    /* (TZC_CPU_FAIL_ADDRESS0) TZC_CPU Fail Address Register 0 Offset */
#define TZC_CPU_FAIL_CONTROL0_REG_OFST _UINT32_(0x1028)    /* (TZC_CPU_FAIL_CONTROL0) TZC_CPU Fail Control Register 0 Offset */
#define TZC_CPU_FAIL_ID0_REG_OFST      _UINT32_(0x102C)    /* (TZC_CPU_FAIL_ID0) TZC_CPU Fail ID Register 0 Offset */
#define TZC_CPU_LPR_REG_OFST           _UINT32_(0x1FC0)    /* (TZC_CPU_LPR) TZC_CPU Low-Power Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* TZC_CPU_REGION register API structure */
typedef struct
{
  __IO  uint32_t                       TZC_CPU_REGION_BASE; /* Offset: 0x00 (R/W  32) TZC_CPU Region x Base Address Register  */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       TZC_CPU_REGION_TOP; /* Offset: 0x08 (R/W  32) TZC_CPU Region x Top Address Register  */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint32_t                       TZC_CPU_REGION_ATTRIBUTES; /* Offset: 0x10 (R/W  32) TZC_CPU Region x Attribute Register  */
  __IO  uint32_t                       TZC_CPU_REGION_ID_ACCESS; /* Offset: 0x14 (R/W  32) TZC_CPU Region x ID Access Register  */
  __I   uint8_t                        Reserved3[0x08];
} tzc_cpu_region_registers_t;

/* TZC_SYS_FAIL register API structure */
typedef struct
{
  __I   uint32_t                       TZC_SYS_FAIL_ADDRESS; /* Offset: 0x00 (R/   32) TZC_SYS Fail Address Register  */
  __I   uint8_t                        Reserved1[0x04];
  __I   uint32_t                       TZC_SYS_FAIL_CONTROL; /* Offset: 0x08 (R/   32) TZC_SYS Fail Control Register  */
  __I   uint32_t                       TZC_SYS_FAIL_ID;    /* Offset: 0x0C (R/   32) TZC_SYS Fail ID Register  */
} tzc_sys_fail_registers_t;

/* TZC_SYS_REGION register API structure */
typedef struct
{
  __IO  uint32_t                       TZC_SYS_REGION_BASE; /* Offset: 0x00 (R/W  32) TZC_SYS Region x Base Address Register  */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       TZC_SYS_REGION_TOP; /* Offset: 0x08 (R/W  32) TZC_SYS Region x Top Address Register  */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint32_t                       TZC_SYS_REGION_ATTRIBUTES; /* Offset: 0x10 (R/W  32) TZC_SYS Region x Attribute Register  */
  __IO  uint32_t                       TZC_SYS_REGION_ID_ACCESS; /* Offset: 0x14 (R/W  32) TZC_SYS Region x ID Access Register  */
  __I   uint8_t                        Reserved3[0x08];
} tzc_sys_region_registers_t;

#define TZC_SYS_FAIL_NUMBER 4

#define TZC_SYS_REGION_NUMBER 9

#define TZC_CPU_REGION_NUMBER 9

/* TZC register API structure */
typedef struct
{  /* TrustZone Address Space Controller (TZC) */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       TZC_SYS_ACTION;     /* Offset: 0x04 (R/W  32) TZC_SYS Action Register */
  __IO  uint32_t                       TZC_SYS_GATE_KEEPER; /* Offset: 0x08 (R/W  32) TZC_SYS Gate Keeper Register */
  __IO  uint32_t                       TZC_SYS_SPECULATION_CTRL; /* Offset: 0x0C (R/W  32) TZC_SYS Speculation Control Register */
  __I   uint32_t                       TZC_SYS_INT_STATUS; /* Offset: 0x10 (R/   32) TZC_SYS Interrupt Status Register */
  __O   uint32_t                       TZC_SYS_INT_CLEAR;  /* Offset: 0x14 ( /W  32) TZC_SYS Interrupt Clear Register */
  __I   uint8_t                        Reserved2[0x08];
        tzc_sys_fail_registers_t       TZC_SYS_FAIL[TZC_SYS_FAIL_NUMBER]; /* Offset: 0x20  */
  __I   uint8_t                        Reserved3[0xA0];
        tzc_sys_region_registers_t     TZC_SYS_REGION[TZC_SYS_REGION_NUMBER]; /* Offset: 0x100  */
  __I   uint8_t                        Reserved4[0xDA0];
  __IO  uint32_t                       TZC_SYS_LPR;        /* Offset: 0xFC0 (R/W  32) TZC_SYS Low-Power Register */
  __I   uint8_t                        Reserved5[0x40];
  __IO  uint32_t                       TZC_CPU_ACTION;     /* Offset: 0x1004 (R/W  32) TZC_CPU Action Register */
  __IO  uint32_t                       TZC_CPU_GATE_KEEPER; /* Offset: 0x1008 (R/W  32) TZC_CPU Gate Keeper Register */
  __IO  uint32_t                       TZC_CPU_SPECULATION_CTRL; /* Offset: 0x100C (R/W  32) TZC_CPU Speculation Control Register */
  __I   uint32_t                       TZC_CPU_INT_STATUS; /* Offset: 0x1010 (R/   32) TZC_CPU Interrupt Status Register */
  __O   uint32_t                       TZC_CPU_INT_CLEAR;  /* Offset: 0x1014 ( /W  32) TZC_CPU Interrupt Clear Register */
  __I   uint8_t                        Reserved6[0x08];
  __I   uint32_t                       TZC_CPU_FAIL_ADDRESS0; /* Offset: 0x1020 (R/   32) TZC_CPU Fail Address Register 0 */
  __I   uint8_t                        Reserved7[0x04];
  __I   uint32_t                       TZC_CPU_FAIL_CONTROL0; /* Offset: 0x1028 (R/   32) TZC_CPU Fail Control Register 0 */
  __I   uint32_t                       TZC_CPU_FAIL_ID0;   /* Offset: 0x102C (R/   32) TZC_CPU Fail ID Register 0 */
  __I   uint8_t                        Reserved8[0xD0];
        tzc_cpu_region_registers_t     TZC_CPU_REGION[TZC_CPU_REGION_NUMBER]; /* Offset: 0x1100  */
  __I   uint8_t                        Reserved9[0xDA0];
  __IO  uint32_t                       TZC_CPU_LPR;        /* Offset: 0x1FC0 (R/W  32) TZC_CPU Low-Power Register */
} tzc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G5_TZC_COMPONENT_H_ */
