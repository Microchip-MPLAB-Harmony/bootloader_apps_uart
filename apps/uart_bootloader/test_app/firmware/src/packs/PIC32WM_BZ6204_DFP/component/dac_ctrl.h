/*
 * Component description for DAC_CTRL
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
#ifndef _PIC32WM_BZ6_DAC_CTRL_COMPONENT_H_
#define _PIC32WM_BZ6_DAC_CTRL_COMPONENT_H_

/* ************************************************************************** */
/*                    SOFTWARE API DEFINITION FOR DAC_CTRL                    */
/* ************************************************************************** */

/* -------- DAC_CTRL_DACCON : (DAC_CTRL Offset: 0x00) (R/W 32) CONTROL Register -------- */
#define DAC_CTRL_DACCON_RESETVALUE            _UINT32_(0x00)                                       /*  (DAC_CTRL_DACCON) CONTROL Register  Reset Value */

#define DAC_CTRL_DACCON_LPRCEN_Pos            _UINT32_(5)                                          /* (DAC_CTRL_DACCON) LPRC clock enabled for SnH mode Position */
#define DAC_CTRL_DACCON_LPRCEN_Msk            (_UINT32_(0x1) << DAC_CTRL_DACCON_LPRCEN_Pos)        /* (DAC_CTRL_DACCON) LPRC clock enabled for SnH mode Mask */
#define DAC_CTRL_DACCON_LPRCEN(value)         (DAC_CTRL_DACCON_LPRCEN_Msk & (_UINT32_(value) << DAC_CTRL_DACCON_LPRCEN_Pos)) /* Assignment of value for LPRCEN in the DAC_CTRL_DACCON register */
#define   DAC_CTRL_DACCON_LPRCEN_0_Val        _UINT32_(0x0)                                        /* (DAC_CTRL_DACCON) LPRC clock not enabled  */
#define   DAC_CTRL_DACCON_LPRCEN_1_Val        _UINT32_(0x1)                                        /* (DAC_CTRL_DACCON) LPRC clock enabled  */
#define DAC_CTRL_DACCON_LPRCEN_0              (DAC_CTRL_DACCON_LPRCEN_0_Val << DAC_CTRL_DACCON_LPRCEN_Pos) /* (DAC_CTRL_DACCON) LPRC clock not enabled Position */
#define DAC_CTRL_DACCON_LPRCEN_1              (DAC_CTRL_DACCON_LPRCEN_1_Val << DAC_CTRL_DACCON_LPRCEN_Pos) /* (DAC_CTRL_DACCON) LPRC clock enabled Position */
#define DAC_CTRL_DACCON_OUTEN_Pos             _UINT32_(6)                                          /* (DAC_CTRL_DACCON) Will enable the output buffer Position */
#define DAC_CTRL_DACCON_OUTEN_Msk             (_UINT32_(0x1) << DAC_CTRL_DACCON_OUTEN_Pos)         /* (DAC_CTRL_DACCON) Will enable the output buffer Mask */
#define DAC_CTRL_DACCON_OUTEN(value)          (DAC_CTRL_DACCON_OUTEN_Msk & (_UINT32_(value) << DAC_CTRL_DACCON_OUTEN_Pos)) /* Assignment of value for OUTEN in the DAC_CTRL_DACCON register */
#define   DAC_CTRL_DACCON_OUTEN_0_Val         _UINT32_(0x0)                                        /* (DAC_CTRL_DACCON) Output buffer disabled  */
#define   DAC_CTRL_DACCON_OUTEN_1_Val         _UINT32_(0x1)                                        /* (DAC_CTRL_DACCON) Output buffer enabled  */
#define DAC_CTRL_DACCON_OUTEN_0               (DAC_CTRL_DACCON_OUTEN_0_Val << DAC_CTRL_DACCON_OUTEN_Pos) /* (DAC_CTRL_DACCON) Output buffer disabled Position */
#define DAC_CTRL_DACCON_OUTEN_1               (DAC_CTRL_DACCON_OUTEN_1_Val << DAC_CTRL_DACCON_OUTEN_Pos) /* (DAC_CTRL_DACCON) Output buffer enabled Position */
#define DAC_CTRL_DACCON_SNH_Pos               _UINT32_(7)                                          /* (DAC_CTRL_DACCON) Sample and hold circuitry Position */
#define DAC_CTRL_DACCON_SNH_Msk               (_UINT32_(0x1) << DAC_CTRL_DACCON_SNH_Pos)           /* (DAC_CTRL_DACCON) Sample and hold circuitry Mask */
#define DAC_CTRL_DACCON_SNH(value)            (DAC_CTRL_DACCON_SNH_Msk & (_UINT32_(value) << DAC_CTRL_DACCON_SNH_Pos)) /* Assignment of value for SNH in the DAC_CTRL_DACCON register */
#define   DAC_CTRL_DACCON_SNH_0_Val           _UINT32_(0x0)                                        /* (DAC_CTRL_DACCON) DAC operation in normal mode  */
#define   DAC_CTRL_DACCON_SNH_1_Val           _UINT32_(0x1)                                        /* (DAC_CTRL_DACCON) DAC operation in low power mode  */
#define DAC_CTRL_DACCON_SNH_0                 (DAC_CTRL_DACCON_SNH_0_Val << DAC_CTRL_DACCON_SNH_Pos) /* (DAC_CTRL_DACCON) DAC operation in normal mode Position */
#define DAC_CTRL_DACCON_SNH_1                 (DAC_CTRL_DACCON_SNH_1_Val << DAC_CTRL_DACCON_SNH_Pos) /* (DAC_CTRL_DACCON) DAC operation in low power mode Position */
#define DAC_CTRL_DACCON_EN_Pos                _UINT32_(15)                                         /* (DAC_CTRL_DACCON) Enable Position */
#define DAC_CTRL_DACCON_EN_Msk                (_UINT32_(0x1) << DAC_CTRL_DACCON_EN_Pos)            /* (DAC_CTRL_DACCON) Enable Mask */
#define DAC_CTRL_DACCON_EN(value)             (DAC_CTRL_DACCON_EN_Msk & (_UINT32_(value) << DAC_CTRL_DACCON_EN_Pos)) /* Assignment of value for EN in the DAC_CTRL_DACCON register */
#define   DAC_CTRL_DACCON_EN_0_Val            _UINT32_(0x0)                                        /* (DAC_CTRL_DACCON) The peripheral is disabled.  */
#define   DAC_CTRL_DACCON_EN_1_Val            _UINT32_(0x1)                                        /* (DAC_CTRL_DACCON) The peripheral is enabled.  */
#define DAC_CTRL_DACCON_EN_0                  (DAC_CTRL_DACCON_EN_0_Val << DAC_CTRL_DACCON_EN_Pos) /* (DAC_CTRL_DACCON) The peripheral is disabled. Position */
#define DAC_CTRL_DACCON_EN_1                  (DAC_CTRL_DACCON_EN_1_Val << DAC_CTRL_DACCON_EN_Pos) /* (DAC_CTRL_DACCON) The peripheral is enabled. Position */
#define DAC_CTRL_DACCON_Msk                   _UINT32_(0x000080E0)                                 /* (DAC_CTRL_DACCON) Register Mask  */


/* -------- DAC_CTRL_DACCODE : (DAC_CTRL Offset: 0x04) (R/W 32) DAC CODE Register -------- */
#define DAC_CTRL_DACCODE_RESETVALUE           _UINT32_(0x00)                                       /*  (DAC_CTRL_DACCODE) DAC CODE Register  Reset Value */

#define DAC_CTRL_DACCODE_DATA_Pos             _UINT32_(0)                                          /* (DAC_CTRL_DACCODE) DAC data Position */
#define DAC_CTRL_DACCODE_DATA_Msk             (_UINT32_(0x7F) << DAC_CTRL_DACCODE_DATA_Pos)        /* (DAC_CTRL_DACCODE) DAC data Mask */
#define DAC_CTRL_DACCODE_DATA(value)          (DAC_CTRL_DACCODE_DATA_Msk & (_UINT32_(value) << DAC_CTRL_DACCODE_DATA_Pos)) /* Assignment of value for DATA in the DAC_CTRL_DACCODE register */
#define DAC_CTRL_DACCODE_Msk                  _UINT32_(0x0000007F)                                 /* (DAC_CTRL_DACCODE) Register Mask  */


/* -------- DAC_CTRL_DACCON2 : (DAC_CTRL Offset: 0x08) (R/W 32) DAC Config register1 -------- */
#define DAC_CTRL_DACCON2_RESETVALUE           _UINT32_(0x00)                                       /*  (DAC_CTRL_DACCON2) DAC Config register1  Reset Value */

#define DAC_CTRL_DACCON2_WIDTH_Pos            _UINT32_(0)                                          /* (DAC_CTRL_DACCON2) SnH clock width Position */
#define DAC_CTRL_DACCON2_WIDTH_Msk            (_UINT32_(0x3FF) << DAC_CTRL_DACCON2_WIDTH_Pos)      /* (DAC_CTRL_DACCON2) SnH clock width Mask */
#define DAC_CTRL_DACCON2_WIDTH(value)         (DAC_CTRL_DACCON2_WIDTH_Msk & (_UINT32_(value) << DAC_CTRL_DACCON2_WIDTH_Pos)) /* Assignment of value for WIDTH in the DAC_CTRL_DACCON2 register */
#define DAC_CTRL_DACCON2_PERIOD_Pos           _UINT32_(16)                                         /* (DAC_CTRL_DACCON2) SnH clock period Position */
#define DAC_CTRL_DACCON2_PERIOD_Msk           (_UINT32_(0x3FF) << DAC_CTRL_DACCON2_PERIOD_Pos)     /* (DAC_CTRL_DACCON2) SnH clock period Mask */
#define DAC_CTRL_DACCON2_PERIOD(value)        (DAC_CTRL_DACCON2_PERIOD_Msk & (_UINT32_(value) << DAC_CTRL_DACCON2_PERIOD_Pos)) /* Assignment of value for PERIOD in the DAC_CTRL_DACCON2 register */
#define DAC_CTRL_DACCON2_PRESCALAR_Pos        _UINT32_(29)                                         /* (DAC_CTRL_DACCON2) Prescaling factor for SnH clock Position */
#define DAC_CTRL_DACCON2_PRESCALAR_Msk        (_UINT32_(0x7) << DAC_CTRL_DACCON2_PRESCALAR_Pos)    /* (DAC_CTRL_DACCON2) Prescaling factor for SnH clock Mask */
#define DAC_CTRL_DACCON2_PRESCALAR(value)     (DAC_CTRL_DACCON2_PRESCALAR_Msk & (_UINT32_(value) << DAC_CTRL_DACCON2_PRESCALAR_Pos)) /* Assignment of value for PRESCALAR in the DAC_CTRL_DACCON2 register */
#define DAC_CTRL_DACCON2_Msk                  _UINT32_(0xE3FF03FF)                                 /* (DAC_CTRL_DACCON2) Register Mask  */


/* DAC_CTRL register offsets definitions */
#define DAC_CTRL_DACCON_REG_OFST       _UINT32_(0x00)      /* (DAC_CTRL_DACCON) CONTROL Register Offset */
#define DAC_CTRL_DACCODE_REG_OFST      _UINT32_(0x04)      /* (DAC_CTRL_DACCODE) DAC CODE Register Offset */
#define DAC_CTRL_DACCON2_REG_OFST      _UINT32_(0x08)      /* (DAC_CTRL_DACCON2) DAC Config register1 Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* DAC_CTRL register API structure */
typedef struct
{  /* Descriptive Title of Macro */
  __IO  uint32_t                       DAC_CTRL_DACCON;    /* Offset: 0x00 (R/W  32) CONTROL Register */
  __IO  uint32_t                       DAC_CTRL_DACCODE;   /* Offset: 0x04 (R/W  32) DAC CODE Register */
  __IO  uint32_t                       DAC_CTRL_DACCON2;   /* Offset: 0x08 (R/W  32) DAC Config register1 */
} dac_ctrl_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32WM_BZ6_DAC_CTRL_COMPONENT_H_ */
