/*
 * Component description for CRCCU
 *
 * Copyright (c) 2022 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description version 2022-03-22T03:45:07Z */
#ifndef _SAMG55_CRCCU_COMPONENT_H_
#define _SAMG55_CRCCU_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR CRCCU                                        */
/* ************************************************************************** */

/* -------- CRCCU_DSCR : (CRCCU Offset: 0x00) (R/W 32) CRCCU Descriptor Base Register -------- */
#define CRCCU_DSCR_DSCR_Pos                   _UINT32_(9)                                          /* (CRCCU_DSCR) Descriptor Base Address Position */
#define CRCCU_DSCR_DSCR_Msk                   (_UINT32_(0x7FFFFF) << CRCCU_DSCR_DSCR_Pos)          /* (CRCCU_DSCR) Descriptor Base Address Mask */
#define CRCCU_DSCR_DSCR(value)                (CRCCU_DSCR_DSCR_Msk & (_UINT32_(value) << CRCCU_DSCR_DSCR_Pos)) /* Assigment of value for DSCR in the CRCCU_DSCR register */
#define CRCCU_DSCR_Msk                        _UINT32_(0xFFFFFE00)                                 /* (CRCCU_DSCR) Register Mask  */


/* -------- CRCCU_DMA_EN : (CRCCU Offset: 0x08) ( /W 32) CRCCU DMA Enable Register -------- */
#define CRCCU_DMA_EN_DMAEN_Pos                _UINT32_(0)                                          /* (CRCCU_DMA_EN) DMA Enable Position */
#define CRCCU_DMA_EN_DMAEN_Msk                (_UINT32_(0x1) << CRCCU_DMA_EN_DMAEN_Pos)            /* (CRCCU_DMA_EN) DMA Enable Mask */
#define CRCCU_DMA_EN_DMAEN(value)             (CRCCU_DMA_EN_DMAEN_Msk & (_UINT32_(value) << CRCCU_DMA_EN_DMAEN_Pos)) /* Assigment of value for DMAEN in the CRCCU_DMA_EN register */
#define CRCCU_DMA_EN_Msk                      _UINT32_(0x00000001)                                 /* (CRCCU_DMA_EN) Register Mask  */


/* -------- CRCCU_DMA_DIS : (CRCCU Offset: 0x0C) ( /W 32) CRCCU DMA Disable Register -------- */
#define CRCCU_DMA_DIS_DMADIS_Pos              _UINT32_(0)                                          /* (CRCCU_DMA_DIS) DMA Disable Position */
#define CRCCU_DMA_DIS_DMADIS_Msk              (_UINT32_(0x1) << CRCCU_DMA_DIS_DMADIS_Pos)          /* (CRCCU_DMA_DIS) DMA Disable Mask */
#define CRCCU_DMA_DIS_DMADIS(value)           (CRCCU_DMA_DIS_DMADIS_Msk & (_UINT32_(value) << CRCCU_DMA_DIS_DMADIS_Pos)) /* Assigment of value for DMADIS in the CRCCU_DMA_DIS register */
#define CRCCU_DMA_DIS_Msk                     _UINT32_(0x00000001)                                 /* (CRCCU_DMA_DIS) Register Mask  */


/* -------- CRCCU_DMA_SR : (CRCCU Offset: 0x10) ( R/ 32) CRCCU DMA Status Register -------- */
#define CRCCU_DMA_SR_DMASR_Pos                _UINT32_(0)                                          /* (CRCCU_DMA_SR) DMA Status Position */
#define CRCCU_DMA_SR_DMASR_Msk                (_UINT32_(0x1) << CRCCU_DMA_SR_DMASR_Pos)            /* (CRCCU_DMA_SR) DMA Status Mask */
#define CRCCU_DMA_SR_DMASR(value)             (CRCCU_DMA_SR_DMASR_Msk & (_UINT32_(value) << CRCCU_DMA_SR_DMASR_Pos)) /* Assigment of value for DMASR in the CRCCU_DMA_SR register */
#define CRCCU_DMA_SR_Msk                      _UINT32_(0x00000001)                                 /* (CRCCU_DMA_SR) Register Mask  */


/* -------- CRCCU_DMA_IER : (CRCCU Offset: 0x14) ( /W 32) CRCCU DMA Interrupt Enable Register -------- */
#define CRCCU_DMA_IER_DMAIER_Pos              _UINT32_(0)                                          /* (CRCCU_DMA_IER) Interrupt Enable Position */
#define CRCCU_DMA_IER_DMAIER_Msk              (_UINT32_(0x1) << CRCCU_DMA_IER_DMAIER_Pos)          /* (CRCCU_DMA_IER) Interrupt Enable Mask */
#define CRCCU_DMA_IER_DMAIER(value)           (CRCCU_DMA_IER_DMAIER_Msk & (_UINT32_(value) << CRCCU_DMA_IER_DMAIER_Pos)) /* Assigment of value for DMAIER in the CRCCU_DMA_IER register */
#define CRCCU_DMA_IER_Msk                     _UINT32_(0x00000001)                                 /* (CRCCU_DMA_IER) Register Mask  */


/* -------- CRCCU_DMA_IDR : (CRCCU Offset: 0x18) ( /W 32) CRCCU DMA Interrupt Disable Register -------- */
#define CRCCU_DMA_IDR_DMAIDR_Pos              _UINT32_(0)                                          /* (CRCCU_DMA_IDR) Interrupt Disable Position */
#define CRCCU_DMA_IDR_DMAIDR_Msk              (_UINT32_(0x1) << CRCCU_DMA_IDR_DMAIDR_Pos)          /* (CRCCU_DMA_IDR) Interrupt Disable Mask */
#define CRCCU_DMA_IDR_DMAIDR(value)           (CRCCU_DMA_IDR_DMAIDR_Msk & (_UINT32_(value) << CRCCU_DMA_IDR_DMAIDR_Pos)) /* Assigment of value for DMAIDR in the CRCCU_DMA_IDR register */
#define CRCCU_DMA_IDR_Msk                     _UINT32_(0x00000001)                                 /* (CRCCU_DMA_IDR) Register Mask  */


/* -------- CRCCU_DMA_IMR : (CRCCU Offset: 0x1C) ( R/ 32) CRCCU DMA Interrupt Mask Register -------- */
#define CRCCU_DMA_IMR_DMAIMR_Pos              _UINT32_(0)                                          /* (CRCCU_DMA_IMR) Interrupt Mask Position */
#define CRCCU_DMA_IMR_DMAIMR_Msk              (_UINT32_(0x1) << CRCCU_DMA_IMR_DMAIMR_Pos)          /* (CRCCU_DMA_IMR) Interrupt Mask Mask */
#define CRCCU_DMA_IMR_DMAIMR(value)           (CRCCU_DMA_IMR_DMAIMR_Msk & (_UINT32_(value) << CRCCU_DMA_IMR_DMAIMR_Pos)) /* Assigment of value for DMAIMR in the CRCCU_DMA_IMR register */
#define CRCCU_DMA_IMR_Msk                     _UINT32_(0x00000001)                                 /* (CRCCU_DMA_IMR) Register Mask  */


/* -------- CRCCU_DMA_ISR : (CRCCU Offset: 0x20) ( R/ 32) CRCCU DMA Interrupt Status Register -------- */
#define CRCCU_DMA_ISR_DMAISR_Pos              _UINT32_(0)                                          /* (CRCCU_DMA_ISR) Interrupt Status Position */
#define CRCCU_DMA_ISR_DMAISR_Msk              (_UINT32_(0x1) << CRCCU_DMA_ISR_DMAISR_Pos)          /* (CRCCU_DMA_ISR) Interrupt Status Mask */
#define CRCCU_DMA_ISR_DMAISR(value)           (CRCCU_DMA_ISR_DMAISR_Msk & (_UINT32_(value) << CRCCU_DMA_ISR_DMAISR_Pos)) /* Assigment of value for DMAISR in the CRCCU_DMA_ISR register */
#define CRCCU_DMA_ISR_Msk                     _UINT32_(0x00000001)                                 /* (CRCCU_DMA_ISR) Register Mask  */


/* -------- CRCCU_CR : (CRCCU Offset: 0x34) ( /W 32) CRCCU Control Register -------- */
#define CRCCU_CR_RESET_Pos                    _UINT32_(0)                                          /* (CRCCU_CR) CRC Computation Reset Position */
#define CRCCU_CR_RESET_Msk                    (_UINT32_(0x1) << CRCCU_CR_RESET_Pos)                /* (CRCCU_CR) CRC Computation Reset Mask */
#define CRCCU_CR_RESET(value)                 (CRCCU_CR_RESET_Msk & (_UINT32_(value) << CRCCU_CR_RESET_Pos)) /* Assigment of value for RESET in the CRCCU_CR register */
#define CRCCU_CR_Msk                          _UINT32_(0x00000001)                                 /* (CRCCU_CR) Register Mask  */


/* -------- CRCCU_MR : (CRCCU Offset: 0x38) (R/W 32) CRCCU Mode Register -------- */
#define CRCCU_MR_ENABLE_Pos                   _UINT32_(0)                                          /* (CRCCU_MR) CRC Enable Position */
#define CRCCU_MR_ENABLE_Msk                   (_UINT32_(0x1) << CRCCU_MR_ENABLE_Pos)               /* (CRCCU_MR) CRC Enable Mask */
#define CRCCU_MR_ENABLE(value)                (CRCCU_MR_ENABLE_Msk & (_UINT32_(value) << CRCCU_MR_ENABLE_Pos)) /* Assigment of value for ENABLE in the CRCCU_MR register */
#define CRCCU_MR_COMPARE_Pos                  _UINT32_(1)                                          /* (CRCCU_MR) CRC Compare Position */
#define CRCCU_MR_COMPARE_Msk                  (_UINT32_(0x1) << CRCCU_MR_COMPARE_Pos)              /* (CRCCU_MR) CRC Compare Mask */
#define CRCCU_MR_COMPARE(value)               (CRCCU_MR_COMPARE_Msk & (_UINT32_(value) << CRCCU_MR_COMPARE_Pos)) /* Assigment of value for COMPARE in the CRCCU_MR register */
#define CRCCU_MR_PTYPE_Pos                    _UINT32_(2)                                          /* (CRCCU_MR) Primitive Polynomial Position */
#define CRCCU_MR_PTYPE_Msk                    (_UINT32_(0x3) << CRCCU_MR_PTYPE_Pos)                /* (CRCCU_MR) Primitive Polynomial Mask */
#define CRCCU_MR_PTYPE(value)                 (CRCCU_MR_PTYPE_Msk & (_UINT32_(value) << CRCCU_MR_PTYPE_Pos)) /* Assigment of value for PTYPE in the CRCCU_MR register */
#define   CRCCU_MR_PTYPE_CCITT8023_Val        _UINT32_(0x0)                                        /* (CRCCU_MR) Polynom 0x04C11DB7  */
#define   CRCCU_MR_PTYPE_CASTAGNOLI_Val       _UINT32_(0x1)                                        /* (CRCCU_MR) Polynom 0x1EDC6F41  */
#define   CRCCU_MR_PTYPE_CCITT16_Val          _UINT32_(0x2)                                        /* (CRCCU_MR) Polynom 0x1021  */
#define CRCCU_MR_PTYPE_CCITT8023              (CRCCU_MR_PTYPE_CCITT8023_Val << CRCCU_MR_PTYPE_Pos) /* (CRCCU_MR) Polynom 0x04C11DB7 Position  */
#define CRCCU_MR_PTYPE_CASTAGNOLI             (CRCCU_MR_PTYPE_CASTAGNOLI_Val << CRCCU_MR_PTYPE_Pos) /* (CRCCU_MR) Polynom 0x1EDC6F41 Position  */
#define CRCCU_MR_PTYPE_CCITT16                (CRCCU_MR_PTYPE_CCITT16_Val << CRCCU_MR_PTYPE_Pos)   /* (CRCCU_MR) Polynom 0x1021 Position  */
#define CRCCU_MR_DIVIDER_Pos                  _UINT32_(4)                                          /* (CRCCU_MR) Request Divider Position */
#define CRCCU_MR_DIVIDER_Msk                  (_UINT32_(0xF) << CRCCU_MR_DIVIDER_Pos)              /* (CRCCU_MR) Request Divider Mask */
#define CRCCU_MR_DIVIDER(value)               (CRCCU_MR_DIVIDER_Msk & (_UINT32_(value) << CRCCU_MR_DIVIDER_Pos)) /* Assigment of value for DIVIDER in the CRCCU_MR register */
#define CRCCU_MR_BITORDER_Pos                 _UINT32_(17)                                         /* (CRCCU_MR) Precomputation Bit Swap Operation of the CRC Position */
#define CRCCU_MR_BITORDER_Msk                 (_UINT32_(0x1) << CRCCU_MR_BITORDER_Pos)             /* (CRCCU_MR) Precomputation Bit Swap Operation of the CRC Mask */
#define CRCCU_MR_BITORDER(value)              (CRCCU_MR_BITORDER_Msk & (_UINT32_(value) << CRCCU_MR_BITORDER_Pos)) /* Assigment of value for BITORDER in the CRCCU_MR register */
#define   CRCCU_MR_BITORDER_MSBFIRST_Val      _UINT32_(0x0)                                        /* (CRCCU_MR) CRC computation is performed from the most significant bit to the least significant bit  */
#define   CRCCU_MR_BITORDER_LSBFIRST_Val      _UINT32_(0x1)                                        /* (CRCCU_MR) CRC computation is performed from the least significant bit to the most significant bit  */
#define CRCCU_MR_BITORDER_MSBFIRST            (CRCCU_MR_BITORDER_MSBFIRST_Val << CRCCU_MR_BITORDER_Pos) /* (CRCCU_MR) CRC computation is performed from the most significant bit to the least significant bit Position  */
#define CRCCU_MR_BITORDER_LSBFIRST            (CRCCU_MR_BITORDER_LSBFIRST_Val << CRCCU_MR_BITORDER_Pos) /* (CRCCU_MR) CRC computation is performed from the least significant bit to the most significant bit Position  */
#define CRCCU_MR_Msk                          _UINT32_(0x000200FF)                                 /* (CRCCU_MR) Register Mask  */


/* -------- CRCCU_SR : (CRCCU Offset: 0x3C) ( R/ 32) CRCCU Status Register -------- */
#define CRCCU_SR_CRC_Pos                      _UINT32_(0)                                          /* (CRCCU_SR) Cyclic Redundancy Check Value Position */
#define CRCCU_SR_CRC_Msk                      (_UINT32_(0xFFFFFFFF) << CRCCU_SR_CRC_Pos)           /* (CRCCU_SR) Cyclic Redundancy Check Value Mask */
#define CRCCU_SR_CRC(value)                   (CRCCU_SR_CRC_Msk & (_UINT32_(value) << CRCCU_SR_CRC_Pos)) /* Assigment of value for CRC in the CRCCU_SR register */
#define CRCCU_SR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (CRCCU_SR) Register Mask  */


/* -------- CRCCU_IER : (CRCCU Offset: 0x40) ( /W 32) CRCCU Interrupt Enable Register -------- */
#define CRCCU_IER_ERRIER_Pos                  _UINT32_(0)                                          /* (CRCCU_IER) CRC Error Interrupt Enable Position */
#define CRCCU_IER_ERRIER_Msk                  (_UINT32_(0x1) << CRCCU_IER_ERRIER_Pos)              /* (CRCCU_IER) CRC Error Interrupt Enable Mask */
#define CRCCU_IER_ERRIER(value)               (CRCCU_IER_ERRIER_Msk & (_UINT32_(value) << CRCCU_IER_ERRIER_Pos)) /* Assigment of value for ERRIER in the CRCCU_IER register */
#define CRCCU_IER_Msk                         _UINT32_(0x00000001)                                 /* (CRCCU_IER) Register Mask  */


/* -------- CRCCU_IDR : (CRCCU Offset: 0x44) ( /W 32) CRCCU Interrupt Disable Register -------- */
#define CRCCU_IDR_ERRIDR_Pos                  _UINT32_(0)                                          /* (CRCCU_IDR) CRC Error Interrupt Disable Position */
#define CRCCU_IDR_ERRIDR_Msk                  (_UINT32_(0x1) << CRCCU_IDR_ERRIDR_Pos)              /* (CRCCU_IDR) CRC Error Interrupt Disable Mask */
#define CRCCU_IDR_ERRIDR(value)               (CRCCU_IDR_ERRIDR_Msk & (_UINT32_(value) << CRCCU_IDR_ERRIDR_Pos)) /* Assigment of value for ERRIDR in the CRCCU_IDR register */
#define CRCCU_IDR_Msk                         _UINT32_(0x00000001)                                 /* (CRCCU_IDR) Register Mask  */


/* -------- CRCCU_IMR : (CRCCU Offset: 0x48) ( R/ 32) CRCCU Interrupt Mask Register -------- */
#define CRCCU_IMR_ERRIMR_Pos                  _UINT32_(0)                                          /* (CRCCU_IMR) CRC Error Interrupt Mask Position */
#define CRCCU_IMR_ERRIMR_Msk                  (_UINT32_(0x1) << CRCCU_IMR_ERRIMR_Pos)              /* (CRCCU_IMR) CRC Error Interrupt Mask Mask */
#define CRCCU_IMR_ERRIMR(value)               (CRCCU_IMR_ERRIMR_Msk & (_UINT32_(value) << CRCCU_IMR_ERRIMR_Pos)) /* Assigment of value for ERRIMR in the CRCCU_IMR register */
#define CRCCU_IMR_Msk                         _UINT32_(0x00000001)                                 /* (CRCCU_IMR) Register Mask  */


/* -------- CRCCU_ISR : (CRCCU Offset: 0x4C) ( R/ 32) CRCCU Interrupt Status Register -------- */
#define CRCCU_ISR_ERRISR_Pos                  _UINT32_(0)                                          /* (CRCCU_ISR) CRC Error Interrupt Status Position */
#define CRCCU_ISR_ERRISR_Msk                  (_UINT32_(0x1) << CRCCU_ISR_ERRISR_Pos)              /* (CRCCU_ISR) CRC Error Interrupt Status Mask */
#define CRCCU_ISR_ERRISR(value)               (CRCCU_ISR_ERRISR_Msk & (_UINT32_(value) << CRCCU_ISR_ERRISR_Pos)) /* Assigment of value for ERRISR in the CRCCU_ISR register */
#define CRCCU_ISR_Msk                         _UINT32_(0x00000001)                                 /* (CRCCU_ISR) Register Mask  */


/** \brief CRCCU register offsets definitions */
#define CRCCU_DSCR_REG_OFST            _UINT32_(0x00)      /* (CRCCU_DSCR) CRCCU Descriptor Base Register Offset */
#define CRCCU_DMA_EN_REG_OFST          _UINT32_(0x08)      /* (CRCCU_DMA_EN) CRCCU DMA Enable Register Offset */
#define CRCCU_DMA_DIS_REG_OFST         _UINT32_(0x0C)      /* (CRCCU_DMA_DIS) CRCCU DMA Disable Register Offset */
#define CRCCU_DMA_SR_REG_OFST          _UINT32_(0x10)      /* (CRCCU_DMA_SR) CRCCU DMA Status Register Offset */
#define CRCCU_DMA_IER_REG_OFST         _UINT32_(0x14)      /* (CRCCU_DMA_IER) CRCCU DMA Interrupt Enable Register Offset */
#define CRCCU_DMA_IDR_REG_OFST         _UINT32_(0x18)      /* (CRCCU_DMA_IDR) CRCCU DMA Interrupt Disable Register Offset */
#define CRCCU_DMA_IMR_REG_OFST         _UINT32_(0x1C)      /* (CRCCU_DMA_IMR) CRCCU DMA Interrupt Mask Register Offset */
#define CRCCU_DMA_ISR_REG_OFST         _UINT32_(0x20)      /* (CRCCU_DMA_ISR) CRCCU DMA Interrupt Status Register Offset */
#define CRCCU_CR_REG_OFST              _UINT32_(0x34)      /* (CRCCU_CR) CRCCU Control Register Offset */
#define CRCCU_MR_REG_OFST              _UINT32_(0x38)      /* (CRCCU_MR) CRCCU Mode Register Offset */
#define CRCCU_SR_REG_OFST              _UINT32_(0x3C)      /* (CRCCU_SR) CRCCU Status Register Offset */
#define CRCCU_IER_REG_OFST             _UINT32_(0x40)      /* (CRCCU_IER) CRCCU Interrupt Enable Register Offset */
#define CRCCU_IDR_REG_OFST             _UINT32_(0x44)      /* (CRCCU_IDR) CRCCU Interrupt Disable Register Offset */
#define CRCCU_IMR_REG_OFST             _UINT32_(0x48)      /* (CRCCU_IMR) CRCCU Interrupt Mask Register Offset */
#define CRCCU_ISR_REG_OFST             _UINT32_(0x4C)      /* (CRCCU_ISR) CRCCU Interrupt Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief CRCCU register API structure */
typedef struct
{
  __IO  uint32_t                       CRCCU_DSCR;         /**< Offset: 0x00 (R/W  32) CRCCU Descriptor Base Register */
  __I   uint8_t                        Reserved1[0x04];
  __O   uint32_t                       CRCCU_DMA_EN;       /**< Offset: 0x08 ( /W  32) CRCCU DMA Enable Register */
  __O   uint32_t                       CRCCU_DMA_DIS;      /**< Offset: 0x0C ( /W  32) CRCCU DMA Disable Register */
  __I   uint32_t                       CRCCU_DMA_SR;       /**< Offset: 0x10 (R/   32) CRCCU DMA Status Register */
  __O   uint32_t                       CRCCU_DMA_IER;      /**< Offset: 0x14 ( /W  32) CRCCU DMA Interrupt Enable Register */
  __O   uint32_t                       CRCCU_DMA_IDR;      /**< Offset: 0x18 ( /W  32) CRCCU DMA Interrupt Disable Register */
  __I   uint32_t                       CRCCU_DMA_IMR;      /**< Offset: 0x1C (R/   32) CRCCU DMA Interrupt Mask Register */
  __I   uint32_t                       CRCCU_DMA_ISR;      /**< Offset: 0x20 (R/   32) CRCCU DMA Interrupt Status Register */
  __I   uint8_t                        Reserved2[0x10];
  __O   uint32_t                       CRCCU_CR;           /**< Offset: 0x34 ( /W  32) CRCCU Control Register */
  __IO  uint32_t                       CRCCU_MR;           /**< Offset: 0x38 (R/W  32) CRCCU Mode Register */
  __I   uint32_t                       CRCCU_SR;           /**< Offset: 0x3C (R/   32) CRCCU Status Register */
  __O   uint32_t                       CRCCU_IER;          /**< Offset: 0x40 ( /W  32) CRCCU Interrupt Enable Register */
  __O   uint32_t                       CRCCU_IDR;          /**< Offset: 0x44 ( /W  32) CRCCU Interrupt Disable Register */
  __I   uint32_t                       CRCCU_IMR;          /**< Offset: 0x48 (R/   32) CRCCU Interrupt Mask Register */
  __I   uint32_t                       CRCCU_ISR;          /**< Offset: 0x4C (R/   32) CRCCU Interrupt Status Register */
} crccu_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMG55_CRCCU_COMPONENT_H_ */
