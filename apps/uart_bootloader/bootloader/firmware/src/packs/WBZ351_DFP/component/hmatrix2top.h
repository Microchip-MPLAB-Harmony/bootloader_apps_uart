/*
 * Component description for HMATRIX2TOP
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

/* file generated from device description file (ATDF) version 2024-02-12T06:36:14Z */
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
