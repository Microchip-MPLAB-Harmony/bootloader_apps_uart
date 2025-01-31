/*
 * Component description for UTMI
 *
 * Copyright (c) 2024 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description file (ATDF) version 2023-09-08T03:06:20Z */
#ifndef _PIC32CZCA70_UTMI_COMPONENT_H_
#define _PIC32CZCA70_UTMI_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR UTMI                                         */
/* ************************************************************************** */

/* -------- UTMI_OHCIICR : (UTMI Offset: 0x10) (R/W 32) OHCI Interrupt Configuration Register -------- */
#define UTMI_OHCIICR_RES0_Pos                 _UINT32_(0)                                          /* (UTMI_OHCIICR) USB PORTx Reset Position */
#define UTMI_OHCIICR_RES0_Msk                 (_UINT32_(0x1) << UTMI_OHCIICR_RES0_Pos)             /* (UTMI_OHCIICR) USB PORTx Reset Mask */
#define UTMI_OHCIICR_RES0(value)              (UTMI_OHCIICR_RES0_Msk & (_UINT32_(value) << UTMI_OHCIICR_RES0_Pos)) /* Assigment of value for RES0 in the UTMI_OHCIICR register */
#define UTMI_OHCIICR_ARIE_Pos                 _UINT32_(4)                                          /* (UTMI_OHCIICR) OHCI Asynchronous Resume Interrupt Enable Position */
#define UTMI_OHCIICR_ARIE_Msk                 (_UINT32_(0x1) << UTMI_OHCIICR_ARIE_Pos)             /* (UTMI_OHCIICR) OHCI Asynchronous Resume Interrupt Enable Mask */
#define UTMI_OHCIICR_ARIE(value)              (UTMI_OHCIICR_ARIE_Msk & (_UINT32_(value) << UTMI_OHCIICR_ARIE_Pos)) /* Assigment of value for ARIE in the UTMI_OHCIICR register */
#define UTMI_OHCIICR_APPSTART_Pos             _UINT32_(5)                                          /* (UTMI_OHCIICR) Reserved Position */
#define UTMI_OHCIICR_APPSTART_Msk             (_UINT32_(0x1) << UTMI_OHCIICR_APPSTART_Pos)         /* (UTMI_OHCIICR) Reserved Mask */
#define UTMI_OHCIICR_APPSTART(value)          (UTMI_OHCIICR_APPSTART_Msk & (_UINT32_(value) << UTMI_OHCIICR_APPSTART_Pos)) /* Assigment of value for APPSTART in the UTMI_OHCIICR register */
#define UTMI_OHCIICR_UDPPUDIS_Pos             _UINT32_(23)                                         /* (UTMI_OHCIICR) USB Device Pull-up Disable Position */
#define UTMI_OHCIICR_UDPPUDIS_Msk             (_UINT32_(0x1) << UTMI_OHCIICR_UDPPUDIS_Pos)         /* (UTMI_OHCIICR) USB Device Pull-up Disable Mask */
#define UTMI_OHCIICR_UDPPUDIS(value)          (UTMI_OHCIICR_UDPPUDIS_Msk & (_UINT32_(value) << UTMI_OHCIICR_UDPPUDIS_Pos)) /* Assigment of value for UDPPUDIS in the UTMI_OHCIICR register */
#define UTMI_OHCIICR_Msk                      _UINT32_(0x00800031)                                 /* (UTMI_OHCIICR) Register Mask  */

#define UTMI_OHCIICR_RES_Pos                  _UINT32_(0)                                          /* (UTMI_OHCIICR Position) USB PORTx Reset */
#define UTMI_OHCIICR_RES_Msk                  (_UINT32_(0x1) << UTMI_OHCIICR_RES_Pos)              /* (UTMI_OHCIICR Mask) RES */
#define UTMI_OHCIICR_RES(value)               (UTMI_OHCIICR_RES_Msk & (_UINT32_(value) << UTMI_OHCIICR_RES_Pos)) 

/* -------- UTMI_CKTRIM : (UTMI Offset: 0x30) (R/W 32) UTMI Clock Trimming Register -------- */
#define UTMI_CKTRIM_FREQ_Pos                  _UINT32_(0)                                          /* (UTMI_CKTRIM) UTMI Reference Clock Frequency Position */
#define UTMI_CKTRIM_FREQ_Msk                  (_UINT32_(0x3) << UTMI_CKTRIM_FREQ_Pos)              /* (UTMI_CKTRIM) UTMI Reference Clock Frequency Mask */
#define UTMI_CKTRIM_FREQ(value)               (UTMI_CKTRIM_FREQ_Msk & (_UINT32_(value) << UTMI_CKTRIM_FREQ_Pos)) /* Assigment of value for FREQ in the UTMI_CKTRIM register */
#define   UTMI_CKTRIM_FREQ_XTAL12_Val         _UINT32_(0x0)                                        /* (UTMI_CKTRIM) 12 MHz reference clock  */
#define   UTMI_CKTRIM_FREQ_XTAL16_Val         _UINT32_(0x1)                                        /* (UTMI_CKTRIM) 16 MHz reference clock  */
#define UTMI_CKTRIM_FREQ_XTAL12               (UTMI_CKTRIM_FREQ_XTAL12_Val << UTMI_CKTRIM_FREQ_Pos) /* (UTMI_CKTRIM) 12 MHz reference clock Position  */
#define UTMI_CKTRIM_FREQ_XTAL16               (UTMI_CKTRIM_FREQ_XTAL16_Val << UTMI_CKTRIM_FREQ_Pos) /* (UTMI_CKTRIM) 16 MHz reference clock Position  */
#define UTMI_CKTRIM_Msk                       _UINT32_(0x00000003)                                 /* (UTMI_CKTRIM) Register Mask  */


/** \brief UTMI register offsets definitions */
#define UTMI_OHCIICR_REG_OFST          _UINT32_(0x10)      /* (UTMI_OHCIICR) OHCI Interrupt Configuration Register Offset */
#define UTMI_CKTRIM_REG_OFST           _UINT32_(0x30)      /* (UTMI_CKTRIM) UTMI Clock Trimming Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief UTMI register API structure */
typedef struct
{
  __I   uint8_t                        Reserved1[0x10];
  __IO  uint32_t                       UTMI_OHCIICR;       /**< Offset: 0x10 (R/W  32) OHCI Interrupt Configuration Register */
  __I   uint8_t                        Reserved2[0x1C];
  __IO  uint32_t                       UTMI_CKTRIM;        /**< Offset: 0x30 (R/W  32) UTMI Clock Trimming Register */
} utmi_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CZCA70_UTMI_COMPONENT_H_ */
