/*
 * Component description for HSMC
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

/* file generated from device description version 2022-01-06T10:24:17Z */
#ifndef _SAMRH71_HSMC_COMPONENT_H_
#define _SAMRH71_HSMC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR HSMC                                         */
/* ************************************************************************** */

/* -------- HSMC_SETUP : (HSMC Offset: 0x00) (R/W 32) HSMC Setup Register -------- */
#define HSMC_SETUP_NWE_SETUP_Pos              _UINT32_(0)                                          /* (HSMC_SETUP) NWE Setup Length Position */
#define HSMC_SETUP_NWE_SETUP_Msk              (_UINT32_(0x3F) << HSMC_SETUP_NWE_SETUP_Pos)         /* (HSMC_SETUP) NWE Setup Length Mask */
#define HSMC_SETUP_NWE_SETUP(value)           (HSMC_SETUP_NWE_SETUP_Msk & (_UINT32_(value) << HSMC_SETUP_NWE_SETUP_Pos)) /* Assigment of value for NWE_SETUP in the HSMC_SETUP register */
#define HSMC_SETUP_NCS_WR_SETUP_Pos           _UINT32_(8)                                          /* (HSMC_SETUP) NCS Setup Length in WRITE Access Position */
#define HSMC_SETUP_NCS_WR_SETUP_Msk           (_UINT32_(0x3F) << HSMC_SETUP_NCS_WR_SETUP_Pos)      /* (HSMC_SETUP) NCS Setup Length in WRITE Access Mask */
#define HSMC_SETUP_NCS_WR_SETUP(value)        (HSMC_SETUP_NCS_WR_SETUP_Msk & (_UINT32_(value) << HSMC_SETUP_NCS_WR_SETUP_Pos)) /* Assigment of value for NCS_WR_SETUP in the HSMC_SETUP register */
#define HSMC_SETUP_NRD_SETUP_Pos              _UINT32_(16)                                         /* (HSMC_SETUP) NRD Setup Length Position */
#define HSMC_SETUP_NRD_SETUP_Msk              (_UINT32_(0x3F) << HSMC_SETUP_NRD_SETUP_Pos)         /* (HSMC_SETUP) NRD Setup Length Mask */
#define HSMC_SETUP_NRD_SETUP(value)           (HSMC_SETUP_NRD_SETUP_Msk & (_UINT32_(value) << HSMC_SETUP_NRD_SETUP_Pos)) /* Assigment of value for NRD_SETUP in the HSMC_SETUP register */
#define HSMC_SETUP_NCS_RD_SETUP_Pos           _UINT32_(24)                                         /* (HSMC_SETUP) NCS Setup Length in READ Access Position */
#define HSMC_SETUP_NCS_RD_SETUP_Msk           (_UINT32_(0x3F) << HSMC_SETUP_NCS_RD_SETUP_Pos)      /* (HSMC_SETUP) NCS Setup Length in READ Access Mask */
#define HSMC_SETUP_NCS_RD_SETUP(value)        (HSMC_SETUP_NCS_RD_SETUP_Msk & (_UINT32_(value) << HSMC_SETUP_NCS_RD_SETUP_Pos)) /* Assigment of value for NCS_RD_SETUP in the HSMC_SETUP register */
#define HSMC_SETUP_Msk                        _UINT32_(0x3F3F3F3F)                                 /* (HSMC_SETUP) Register Mask  */


/* -------- HSMC_PULSE : (HSMC Offset: 0x04) (R/W 32) HSMC Pulse Register -------- */
#define HSMC_PULSE_NWE_PULSE_Pos              _UINT32_(0)                                          /* (HSMC_PULSE) NWE Pulse Length Position */
#define HSMC_PULSE_NWE_PULSE_Msk              (_UINT32_(0x7F) << HSMC_PULSE_NWE_PULSE_Pos)         /* (HSMC_PULSE) NWE Pulse Length Mask */
#define HSMC_PULSE_NWE_PULSE(value)           (HSMC_PULSE_NWE_PULSE_Msk & (_UINT32_(value) << HSMC_PULSE_NWE_PULSE_Pos)) /* Assigment of value for NWE_PULSE in the HSMC_PULSE register */
#define HSMC_PULSE_NCS_WR_PULSE_Pos           _UINT32_(8)                                          /* (HSMC_PULSE) NCS Pulse Length in WRITE Access Position */
#define HSMC_PULSE_NCS_WR_PULSE_Msk           (_UINT32_(0x7F) << HSMC_PULSE_NCS_WR_PULSE_Pos)      /* (HSMC_PULSE) NCS Pulse Length in WRITE Access Mask */
#define HSMC_PULSE_NCS_WR_PULSE(value)        (HSMC_PULSE_NCS_WR_PULSE_Msk & (_UINT32_(value) << HSMC_PULSE_NCS_WR_PULSE_Pos)) /* Assigment of value for NCS_WR_PULSE in the HSMC_PULSE register */
#define HSMC_PULSE_NRD_PULSE_Pos              _UINT32_(16)                                         /* (HSMC_PULSE) NRD Pulse Length Position */
#define HSMC_PULSE_NRD_PULSE_Msk              (_UINT32_(0x7F) << HSMC_PULSE_NRD_PULSE_Pos)         /* (HSMC_PULSE) NRD Pulse Length Mask */
#define HSMC_PULSE_NRD_PULSE(value)           (HSMC_PULSE_NRD_PULSE_Msk & (_UINT32_(value) << HSMC_PULSE_NRD_PULSE_Pos)) /* Assigment of value for NRD_PULSE in the HSMC_PULSE register */
#define HSMC_PULSE_NCS_RD_PULSE_Pos           _UINT32_(24)                                         /* (HSMC_PULSE) NCS Pulse Length in READ Access Position */
#define HSMC_PULSE_NCS_RD_PULSE_Msk           (_UINT32_(0x7F) << HSMC_PULSE_NCS_RD_PULSE_Pos)      /* (HSMC_PULSE) NCS Pulse Length in READ Access Mask */
#define HSMC_PULSE_NCS_RD_PULSE(value)        (HSMC_PULSE_NCS_RD_PULSE_Msk & (_UINT32_(value) << HSMC_PULSE_NCS_RD_PULSE_Pos)) /* Assigment of value for NCS_RD_PULSE in the HSMC_PULSE register */
#define HSMC_PULSE_Msk                        _UINT32_(0x7F7F7F7F)                                 /* (HSMC_PULSE) Register Mask  */


/* -------- HSMC_CYCLE : (HSMC Offset: 0x08) (R/W 32) HSMC Cycle Register -------- */
#define HSMC_CYCLE_NWE_CYCLE_Pos              _UINT32_(0)                                          /* (HSMC_CYCLE) Total Write Cycle Length Position */
#define HSMC_CYCLE_NWE_CYCLE_Msk              (_UINT32_(0x1FF) << HSMC_CYCLE_NWE_CYCLE_Pos)        /* (HSMC_CYCLE) Total Write Cycle Length Mask */
#define HSMC_CYCLE_NWE_CYCLE(value)           (HSMC_CYCLE_NWE_CYCLE_Msk & (_UINT32_(value) << HSMC_CYCLE_NWE_CYCLE_Pos)) /* Assigment of value for NWE_CYCLE in the HSMC_CYCLE register */
#define HSMC_CYCLE_NRD_CYCLE_Pos              _UINT32_(16)                                         /* (HSMC_CYCLE) Total Read Cycle Length Position */
#define HSMC_CYCLE_NRD_CYCLE_Msk              (_UINT32_(0x1FF) << HSMC_CYCLE_NRD_CYCLE_Pos)        /* (HSMC_CYCLE) Total Read Cycle Length Mask */
#define HSMC_CYCLE_NRD_CYCLE(value)           (HSMC_CYCLE_NRD_CYCLE_Msk & (_UINT32_(value) << HSMC_CYCLE_NRD_CYCLE_Pos)) /* Assigment of value for NRD_CYCLE in the HSMC_CYCLE register */
#define HSMC_CYCLE_Msk                        _UINT32_(0x01FF01FF)                                 /* (HSMC_CYCLE) Register Mask  */


/* -------- HSMC_MODE : (HSMC Offset: 0x0C) (R/W 32) HSMC Mode Register -------- */
#define HSMC_MODE_READ_MODE_Pos               _UINT32_(0)                                          /* (HSMC_MODE) Read Mode Position */
#define HSMC_MODE_READ_MODE_Msk               (_UINT32_(0x1) << HSMC_MODE_READ_MODE_Pos)           /* (HSMC_MODE) Read Mode Mask */
#define HSMC_MODE_READ_MODE(value)            (HSMC_MODE_READ_MODE_Msk & (_UINT32_(value) << HSMC_MODE_READ_MODE_Pos)) /* Assigment of value for READ_MODE in the HSMC_MODE register */
#define HSMC_MODE_WRITE_MODE_Pos              _UINT32_(1)                                          /* (HSMC_MODE) Write Mode Position */
#define HSMC_MODE_WRITE_MODE_Msk              (_UINT32_(0x1) << HSMC_MODE_WRITE_MODE_Pos)          /* (HSMC_MODE) Write Mode Mask */
#define HSMC_MODE_WRITE_MODE(value)           (HSMC_MODE_WRITE_MODE_Msk & (_UINT32_(value) << HSMC_MODE_WRITE_MODE_Pos)) /* Assigment of value for WRITE_MODE in the HSMC_MODE register */
#define HSMC_MODE_RMW_ENABLE_Pos              _UINT32_(2)                                          /* (HSMC_MODE) Read-Modify Write enable Position */
#define HSMC_MODE_RMW_ENABLE_Msk              (_UINT32_(0x1) << HSMC_MODE_RMW_ENABLE_Pos)          /* (HSMC_MODE) Read-Modify Write enable Mask */
#define HSMC_MODE_RMW_ENABLE(value)           (HSMC_MODE_RMW_ENABLE_Msk & (_UINT32_(value) << HSMC_MODE_RMW_ENABLE_Pos)) /* Assigment of value for RMW_ENABLE in the HSMC_MODE register */
#define HSMC_MODE_EXNW_MODE_Pos               _UINT32_(4)                                          /* (HSMC_MODE) NWAIT Mode Position */
#define HSMC_MODE_EXNW_MODE_Msk               (_UINT32_(0x3) << HSMC_MODE_EXNW_MODE_Pos)           /* (HSMC_MODE) NWAIT Mode Mask */
#define HSMC_MODE_EXNW_MODE(value)            (HSMC_MODE_EXNW_MODE_Msk & (_UINT32_(value) << HSMC_MODE_EXNW_MODE_Pos)) /* Assigment of value for EXNW_MODE in the HSMC_MODE register */
#define   HSMC_MODE_EXNW_MODE_DISABLED_Val    _UINT32_(0x0)                                        /* (HSMC_MODE) Disabled-The NWAIT input signal is ignored on the corresponding chip select.  */
#define   HSMC_MODE_EXNW_MODE_FROZEN_Val      _UINT32_(0x2)                                        /* (HSMC_MODE) Frozen Mode-If asserted, the NWAIT signal freezes the current read or write cycle. After deassertion, the read/write cycle is resumed from the point where it was stopped.  */
#define   HSMC_MODE_EXNW_MODE_READY_Val       _UINT32_(0x3)                                        /* (HSMC_MODE) Ready Mode-The NWAIT signal indicates the availability of the external device at the end of the pulse of the controlling read or write signal, to complete the access. If high, the access normally completes. If low, the access is extended until NWAIT returns high.  */
#define HSMC_MODE_EXNW_MODE_DISABLED          (HSMC_MODE_EXNW_MODE_DISABLED_Val << HSMC_MODE_EXNW_MODE_Pos) /* (HSMC_MODE) Disabled-The NWAIT input signal is ignored on the corresponding chip select. Position  */
#define HSMC_MODE_EXNW_MODE_FROZEN            (HSMC_MODE_EXNW_MODE_FROZEN_Val << HSMC_MODE_EXNW_MODE_Pos) /* (HSMC_MODE) Frozen Mode-If asserted, the NWAIT signal freezes the current read or write cycle. After deassertion, the read/write cycle is resumed from the point where it was stopped. Position  */
#define HSMC_MODE_EXNW_MODE_READY             (HSMC_MODE_EXNW_MODE_READY_Val << HSMC_MODE_EXNW_MODE_Pos) /* (HSMC_MODE) Ready Mode-The NWAIT signal indicates the availability of the external device at the end of the pulse of the controlling read or write signal, to complete the access. If high, the access normally completes. If low, the access is extended until NWAIT returns high. Position  */
#define HSMC_MODE_DBW_Pos                     _UINT32_(8)                                          /* (HSMC_MODE) Data Bus Width Position */
#define HSMC_MODE_DBW_Msk                     (_UINT32_(0x3) << HSMC_MODE_DBW_Pos)                 /* (HSMC_MODE) Data Bus Width Mask */
#define HSMC_MODE_DBW(value)                  (HSMC_MODE_DBW_Msk & (_UINT32_(value) << HSMC_MODE_DBW_Pos)) /* Assigment of value for DBW in the HSMC_MODE register */
#define   HSMC_MODE_DBW_8_BIT_Val             _UINT32_(0x0)                                        /* (HSMC_MODE) 8-bit Data Bus  */
#define   HSMC_MODE_DBW_16_BIT_Val            _UINT32_(0x1)                                        /* (HSMC_MODE) 16-bit Data Bus  */
#define   HSMC_MODE_DBW_32_BIT_Val            _UINT32_(0x2)                                        /* (HSMC_MODE) 32-bit Data Bus  */
#define HSMC_MODE_DBW_8_BIT                   (HSMC_MODE_DBW_8_BIT_Val << HSMC_MODE_DBW_Pos)       /* (HSMC_MODE) 8-bit Data Bus Position  */
#define HSMC_MODE_DBW_16_BIT                  (HSMC_MODE_DBW_16_BIT_Val << HSMC_MODE_DBW_Pos)      /* (HSMC_MODE) 16-bit Data Bus Position  */
#define HSMC_MODE_DBW_32_BIT                  (HSMC_MODE_DBW_32_BIT_Val << HSMC_MODE_DBW_Pos)      /* (HSMC_MODE) 32-bit Data Bus Position  */
#define HSMC_MODE_Msk                         _UINT32_(0x00000337)                                 /* (HSMC_MODE) Register Mask  */


/* -------- HSMC_WPMR : (HSMC Offset: 0x70) (R/W 32) HSMC Write Protection Mode Register -------- */
#define HSMC_WPMR_WPEN_Pos                    _UINT32_(0)                                          /* (HSMC_WPMR) Write Protect Enable Position */
#define HSMC_WPMR_WPEN_Msk                    (_UINT32_(0x1) << HSMC_WPMR_WPEN_Pos)                /* (HSMC_WPMR) Write Protect Enable Mask */
#define HSMC_WPMR_WPEN(value)                 (HSMC_WPMR_WPEN_Msk & (_UINT32_(value) << HSMC_WPMR_WPEN_Pos)) /* Assigment of value for WPEN in the HSMC_WPMR register */
#define HSMC_WPMR_WPKEY_Pos                   _UINT32_(8)                                          /* (HSMC_WPMR) Write Protection Key Position */
#define HSMC_WPMR_WPKEY_Msk                   (_UINT32_(0xFFFFFF) << HSMC_WPMR_WPKEY_Pos)          /* (HSMC_WPMR) Write Protection Key Mask */
#define HSMC_WPMR_WPKEY(value)                (HSMC_WPMR_WPKEY_Msk & (_UINT32_(value) << HSMC_WPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the HSMC_WPMR register */
#define   HSMC_WPMR_WPKEY_PASSWD_Val          _UINT32_(0x534D43)                                   /* (HSMC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0.  */
#define HSMC_WPMR_WPKEY_PASSWD                (HSMC_WPMR_WPKEY_PASSWD_Val << HSMC_WPMR_WPKEY_Pos)  /* (HSMC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0. Position  */
#define HSMC_WPMR_Msk                         _UINT32_(0xFFFFFF01)                                 /* (HSMC_WPMR) Register Mask  */


/* -------- HSMC_WPSR : (HSMC Offset: 0x74) ( R/ 32) HSMC Write Protection Status Register -------- */
#define HSMC_WPSR_WPVS_Pos                    _UINT32_(0)                                          /* (HSMC_WPSR) Write Protection Violation Status Position */
#define HSMC_WPSR_WPVS_Msk                    (_UINT32_(0x1) << HSMC_WPSR_WPVS_Pos)                /* (HSMC_WPSR) Write Protection Violation Status Mask */
#define HSMC_WPSR_WPVS(value)                 (HSMC_WPSR_WPVS_Msk & (_UINT32_(value) << HSMC_WPSR_WPVS_Pos)) /* Assigment of value for WPVS in the HSMC_WPSR register */
#define HSMC_WPSR_WPVSRC_Pos                  _UINT32_(8)                                          /* (HSMC_WPSR) Write Protection Violation Source Position */
#define HSMC_WPSR_WPVSRC_Msk                  (_UINT32_(0xFFFF) << HSMC_WPSR_WPVSRC_Pos)           /* (HSMC_WPSR) Write Protection Violation Source Mask */
#define HSMC_WPSR_WPVSRC(value)               (HSMC_WPSR_WPVSRC_Msk & (_UINT32_(value) << HSMC_WPSR_WPVSRC_Pos)) /* Assigment of value for WPVSRC in the HSMC_WPSR register */
#define HSMC_WPSR_Msk                         _UINT32_(0x00FFFF01)                                 /* (HSMC_WPSR) Register Mask  */


/** \brief HSMC register offsets definitions */
#define HSMC_SETUP_REG_OFST            _UINT32_(0x00)      /* (HSMC_SETUP) HSMC Setup Register Offset */
#define HSMC_PULSE_REG_OFST            _UINT32_(0x04)      /* (HSMC_PULSE) HSMC Pulse Register Offset */
#define HSMC_CYCLE_REG_OFST            _UINT32_(0x08)      /* (HSMC_CYCLE) HSMC Cycle Register Offset */
#define HSMC_MODE_REG_OFST             _UINT32_(0x0C)      /* (HSMC_MODE) HSMC Mode Register Offset */
#define HSMC_WPMR_REG_OFST             _UINT32_(0x70)      /* (HSMC_WPMR) HSMC Write Protection Mode Register Offset */
#define HSMC_WPSR_REG_OFST             _UINT32_(0x74)      /* (HSMC_WPSR) HSMC Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief HSMC_CS register API structure */
typedef struct
{
  __IO  uint32_t                       HSMC_SETUP;         /**< Offset: 0x00 (R/W  32) HSMC Setup Register */
  __IO  uint32_t                       HSMC_PULSE;         /**< Offset: 0x04 (R/W  32) HSMC Pulse Register */
  __IO  uint32_t                       HSMC_CYCLE;         /**< Offset: 0x08 (R/W  32) HSMC Cycle Register */
  __IO  uint32_t                       HSMC_MODE;          /**< Offset: 0x0C (R/W  32) HSMC Mode Register */
} hsmc_cs_registers_t;

#define HSMC_CS_NUMBER 6

/** \brief HSMC register API structure */
typedef struct
{
        hsmc_cs_registers_t            HSMC_CS[HSMC_CS_NUMBER]; /**< Offset: 0x00  */
  __I   uint8_t                        Reserved1[0x10];
  __IO  uint32_t                       HSMC_WPMR;          /**< Offset: 0x70 (R/W  32) HSMC Write Protection Mode Register */
  __I   uint32_t                       HSMC_WPSR;          /**< Offset: 0x74 (R/   32) HSMC Write Protection Status Register */
} hsmc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMRH71_HSMC_COMPONENT_H_ */
