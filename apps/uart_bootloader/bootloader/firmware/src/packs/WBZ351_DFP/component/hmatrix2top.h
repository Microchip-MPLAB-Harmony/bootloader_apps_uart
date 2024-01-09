/*
 * Component description for HMATRIX2TOP
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
#ifndef _WBZ35_HMATRIX2TOP_COMPONENT_H_
#define _WBZ35_HMATRIX2TOP_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR HMATRIX2TOP                                  */
/* ************************************************************************** */

/* -------- HMATRIX2TOP_PRAS : (HMATRIX2TOP Offset: 0x00) (R/W 32) Priority A for Slave -------- */
#define HMATRIX2TOP_PRAS_RESETVALUE           _UINT32_(0x00)                                       /*  (HMATRIX2TOP_PRAS) Priority A for Slave  Reset Value */

#define HMATRIX2TOP_PRAS_Msk                  _UINT32_(0x00000000)                                 /* (HMATRIX2TOP_PRAS) Register Mask  */


/* -------- HMATRIX2TOP_PRBS : (HMATRIX2TOP Offset: 0x04) (R/W 32) Priority B for Slave -------- */
#define HMATRIX2TOP_PRBS_RESETVALUE           _UINT32_(0x00)                                       /*  (HMATRIX2TOP_PRBS) Priority B for Slave  Reset Value */

#define HMATRIX2TOP_PRBS_Msk                  _UINT32_(0x00000000)                                 /* (HMATRIX2TOP_PRBS) Register Mask  */


/** \brief HMATRIX2TOP register offsets definitions */
#define HMATRIX2TOP_PRAS_REG_OFST      _UINT32_(0x00)      /* (HMATRIX2TOP_PRAS) Priority A for Slave Offset */
#define HMATRIX2TOP_PRBS_REG_OFST      _UINT32_(0x04)      /* (HMATRIX2TOP_PRBS) Priority B for Slave Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PRS register API structure */
typedef struct
{
  __IO  uint32_t                       HMATRIX2TOP_PRAS;   /**< Offset: 0x00 (R/W  32) Priority A for Slave */
  __IO  uint32_t                       HMATRIX2TOP_PRBS;   /**< Offset: 0x04 (R/W  32) Priority B for Slave */
} hmatrix2top_prs_registers_t;

#define HMATRIX2TOP_PRS_NUMBER 16

/** \brief HMATRIX2TOP register API structure */
typedef struct
{  /* HSB Matrix */
  __I   uint8_t                        Reserved1[0x80];
        hmatrix2top_prs_registers_t    PRS[HMATRIX2TOP_PRS_NUMBER]; /**< Offset: 0x80  */
} hmatrix2top_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _WBZ35_HMATRIX2TOP_COMPONENT_H_ */
