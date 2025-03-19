/*
 * Component description for DGI_SPI
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
#ifndef _WBZ35_DGI_SPI_COMPONENT_H_
#define _WBZ35_DGI_SPI_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR DGI_SPI                                      */
/* ************************************************************************** */

/* -------- DGI_SPI_SPICON : (DGI_SPI Offset: 0x00) (R/W 32) SPI control register -------- */
#define DGI_SPI_SPICON_RESETVALUE             _UINT32_(0x00)                                       /*  (DGI_SPI_SPICON) SPI control register  Reset Value */

#define DGI_SPI_SPICON_GO_Pos                 _UINT32_(0)                                          /* (DGI_SPI_SPICON) DMA Operation Status bitThis bit is set by the user software to start the DMA operation. It is reset back to zero by the DMA engine whenthe DMA operation is completed or aborted by clearing the ON bit. Position */
#define DGI_SPI_SPICON_GO_Msk                 (_UINT32_(0x1) << DGI_SPI_SPICON_GO_Pos)             /* (DGI_SPI_SPICON) DMA Operation Status bitThis bit is set by the user software to start the DMA operation. It is reset back to zero by the DMA engine whenthe DMA operation is completed or aborted by clearing the ON bit. Mask */
#define DGI_SPI_SPICON_GO(value)              (DGI_SPI_SPICON_GO_Msk & (_UINT32_(value) << DGI_SPI_SPICON_GO_Pos)) /* Assigment of value for GO in the DGI_SPI_SPICON register */
#define   DGI_SPI_SPICON_GO_GO_NODMA_Val      _UINT32_(0x0)                                        /* (DGI_SPI_SPICON) DMA is not in operation  */
#define   DGI_SPI_SPICON_GO_GO_DMA_Val        _UINT32_(0x1)                                        /* (DGI_SPI_SPICON) DMA is in operation  */
#define DGI_SPI_SPICON_GO_GO_NODMA            (DGI_SPI_SPICON_GO_GO_NODMA_Val << DGI_SPI_SPICON_GO_Pos) /* (DGI_SPI_SPICON) DMA is not in operation Position  */
#define DGI_SPI_SPICON_GO_GO_DMA              (DGI_SPI_SPICON_GO_GO_DMA_Val << DGI_SPI_SPICON_GO_Pos) /* (DGI_SPI_SPICON) DMA is in operation Position  */
#define DGI_SPI_SPICON_STXISEL_Pos            _UINT32_(2)                                          /* (DGI_SPI_SPICON) SPI Transmit Service Request Interrupt SelectFor enhanced buffer mode, the SPI generates a Transmit Service Request when: Position */
#define DGI_SPI_SPICON_STXISEL_Msk            (_UINT32_(0x3) << DGI_SPI_SPICON_STXISEL_Pos)        /* (DGI_SPI_SPICON) SPI Transmit Service Request Interrupt SelectFor enhanced buffer mode, the SPI generates a Transmit Service Request when: Mask */
#define DGI_SPI_SPICON_STXISEL(value)         (DGI_SPI_SPICON_STXISEL_Msk & (_UINT32_(value) << DGI_SPI_SPICON_STXISEL_Pos)) /* Assigment of value for STXISEL in the DGI_SPI_SPICON register */
#define   DGI_SPI_SPICON_STXISEL_SPIxTXB_SR_EMPTY_Val _UINT32_(0x0)                                        /* (DGI_SPI_SPICON) The SPIxTXB is empty and SPIxSR is empty (i.e. all transmit operations are complete)  */
#define   DGI_SPI_SPICON_STXISEL_SPIxTXB_EMPTY_Val _UINT32_(0x1)                                        /* (DGI_SPI_SPICON) The SPIxTXB is empty  */
#define   DGI_SPI_SPICON_STXISEL_SPIxTXB_HALF_EMPTY_Val _UINT32_(0x2)                                        /* (DGI_SPI_SPICON) The SPIxTXB is at least half empty  */
#define   DGI_SPI_SPICON_STXISEL_SPIxTXB_FULL_Val _UINT32_(0x3)                                        /* (DGI_SPI_SPICON) The SPIxTXB is not full  */
#define DGI_SPI_SPICON_STXISEL_SPIxTXB_SR_EMPTY (DGI_SPI_SPICON_STXISEL_SPIxTXB_SR_EMPTY_Val << DGI_SPI_SPICON_STXISEL_Pos) /* (DGI_SPI_SPICON) The SPIxTXB is empty and SPIxSR is empty (i.e. all transmit operations are complete) Position  */
#define DGI_SPI_SPICON_STXISEL_SPIxTXB_EMPTY  (DGI_SPI_SPICON_STXISEL_SPIxTXB_EMPTY_Val << DGI_SPI_SPICON_STXISEL_Pos) /* (DGI_SPI_SPICON) The SPIxTXB is empty Position  */
#define DGI_SPI_SPICON_STXISEL_SPIxTXB_HALF_EMPTY (DGI_SPI_SPICON_STXISEL_SPIxTXB_HALF_EMPTY_Val << DGI_SPI_SPICON_STXISEL_Pos) /* (DGI_SPI_SPICON) The SPIxTXB is at least half empty Position  */
#define DGI_SPI_SPICON_STXISEL_SPIxTXB_FULL   (DGI_SPI_SPICON_STXISEL_SPIxTXB_FULL_Val << DGI_SPI_SPICON_STXISEL_Pos) /* (DGI_SPI_SPICON) The SPIxTXB is not full Position  */
#define DGI_SPI_SPICON_CKP_Pos                _UINT32_(6)                                          /* (DGI_SPI_SPICON) Clock Polarity Select bit Position */
#define DGI_SPI_SPICON_CKP_Msk                (_UINT32_(0x1) << DGI_SPI_SPICON_CKP_Pos)            /* (DGI_SPI_SPICON) Clock Polarity Select bit Mask */
#define DGI_SPI_SPICON_CKP(value)             (DGI_SPI_SPICON_CKP_Msk & (_UINT32_(value) << DGI_SPI_SPICON_CKP_Pos)) /* Assigment of value for CKP in the DGI_SPI_SPICON register */
#define   DGI_SPI_SPICON_CKP_IDLE_LOW_ACTIVE_HIGH_Val _UINT32_(0x0)                                        /* (DGI_SPI_SPICON) Idle state for clock is a low level; active state is a high level  */
#define   DGI_SPI_SPICON_CKP_IDLE_HIGH_ACTIVE_LOW_Val _UINT32_(0x1)                                        /* (DGI_SPI_SPICON) Idle state for clock is a high level; active state is a low level  */
#define DGI_SPI_SPICON_CKP_IDLE_LOW_ACTIVE_HIGH (DGI_SPI_SPICON_CKP_IDLE_LOW_ACTIVE_HIGH_Val << DGI_SPI_SPICON_CKP_Pos) /* (DGI_SPI_SPICON) Idle state for clock is a low level; active state is a high level Position  */
#define DGI_SPI_SPICON_CKP_IDLE_HIGH_ACTIVE_LOW (DGI_SPI_SPICON_CKP_IDLE_HIGH_ACTIVE_LOW_Val << DGI_SPI_SPICON_CKP_Pos) /* (DGI_SPI_SPICON) Idle state for clock is a high level; active state is a low level Position  */
#define DGI_SPI_SPICON_SSCON_Pos              _UINT32_(7)                                          /* (DGI_SPI_SPICON) SSControl bits Position */
#define DGI_SPI_SPICON_SSCON_Msk              (_UINT32_(0x1) << DGI_SPI_SPICON_SSCON_Pos)          /* (DGI_SPI_SPICON) SSControl bits Mask */
#define DGI_SPI_SPICON_SSCON(value)           (DGI_SPI_SPICON_SSCON_Msk & (_UINT32_(value) << DGI_SPI_SPICON_SSCON_Pos)) /* Assigment of value for SSCON in the DGI_SPI_SPICON register */
#define   DGI_SPI_SPICON_SSCON_SS_NOT_DMA_Val _UINT32_(0x0)                                        /* (DGI_SPI_SPICON) SS is not controlled by the DMA module  */
#define   DGI_SPI_SPICON_SSCON_SS_TXCNT_Val   _UINT32_(0x1)                                        /* (DGI_SPI_SPICON) SS is asserted for the duration of TXCNT  */
#define DGI_SPI_SPICON_SSCON_SS_NOT_DMA       (DGI_SPI_SPICON_SSCON_SS_NOT_DMA_Val << DGI_SPI_SPICON_SSCON_Pos) /* (DGI_SPI_SPICON) SS is not controlled by the DMA module Position  */
#define DGI_SPI_SPICON_SSCON_SS_TXCNT         (DGI_SPI_SPICON_SSCON_SS_TXCNT_Val << DGI_SPI_SPICON_SSCON_Pos) /* (DGI_SPI_SPICON) SS is asserted for the duration of TXCNT Position  */
#define DGI_SPI_SPICON_CKE_Pos                _UINT32_(8)                                          /* (DGI_SPI_SPICON) SPI Clock Edge Select bit Position */
#define DGI_SPI_SPICON_CKE_Msk                (_UINT32_(0x1) << DGI_SPI_SPICON_CKE_Pos)            /* (DGI_SPI_SPICON) SPI Clock Edge Select bit Mask */
#define DGI_SPI_SPICON_CKE(value)             (DGI_SPI_SPICON_CKE_Msk & (_UINT32_(value) << DGI_SPI_SPICON_CKE_Pos)) /* Assigment of value for CKE in the DGI_SPI_SPICON register */
#define   DGI_SPI_SPICON_CKE_TX_IDLE_TO_ACTIVE_Val _UINT32_(0x0)                                        /* (DGI_SPI_SPICON) Transmit happens on transition from idle clock state to active clock stat e  */
#define   DGI_SPI_SPICON_CKE_TX_ACTIVE_TO_IDLE_Val _UINT32_(0x1)                                        /* (DGI_SPI_SPICON) Transmit happens on transition from active clock state to idle clock state  */
#define DGI_SPI_SPICON_CKE_TX_IDLE_TO_ACTIVE  (DGI_SPI_SPICON_CKE_TX_IDLE_TO_ACTIVE_Val << DGI_SPI_SPICON_CKE_Pos) /* (DGI_SPI_SPICON) Transmit happens on transition from idle clock state to active clock stat e Position  */
#define DGI_SPI_SPICON_CKE_TX_ACTIVE_TO_IDLE  (DGI_SPI_SPICON_CKE_TX_ACTIVE_TO_IDLE_Val << DGI_SPI_SPICON_CKE_Pos) /* (DGI_SPI_SPICON) Transmit happens on transition from active clock state to idle clock state Position  */
#define DGI_SPI_SPICON_MODE_Pos               _UINT32_(10)                                         /* (DGI_SPI_SPICON) Serial Word Length bits Position */
#define DGI_SPI_SPICON_MODE_Msk               (_UINT32_(0x3) << DGI_SPI_SPICON_MODE_Pos)           /* (DGI_SPI_SPICON) Serial Word Length bits Mask */
#define DGI_SPI_SPICON_MODE(value)            (DGI_SPI_SPICON_MODE_Msk & (_UINT32_(value) << DGI_SPI_SPICON_MODE_Pos)) /* Assigment of value for MODE in the DGI_SPI_SPICON register */
#define DGI_SPI_SPICON_DISSDO_Pos             _UINT32_(12)                                         /* (DGI_SPI_SPICON) Disable SDO bit Position */
#define DGI_SPI_SPICON_DISSDO_Msk             (_UINT32_(0x1) << DGI_SPI_SPICON_DISSDO_Pos)         /* (DGI_SPI_SPICON) Disable SDO bit Mask */
#define DGI_SPI_SPICON_DISSDO(value)          (DGI_SPI_SPICON_DISSDO_Msk & (_UINT32_(value) << DGI_SPI_SPICON_DISSDO_Pos)) /* Assigment of value for DISSDO in the DGI_SPI_SPICON register */
#define   DGI_SPI_SPICON_DISSDO_SDO_MACRO_Val _UINT32_(0x0)                                        /* (DGI_SPI_SPICON) SDO pin is controlled by the macro  */
#define   DGI_SPI_SPICON_DISSDO_SDO_PORT_Val  _UINT32_(0x1)                                        /* (DGI_SPI_SPICON) SDO pin is not used by the macro. Pin controlled by PORT function  */
#define DGI_SPI_SPICON_DISSDO_SDO_MACRO       (DGI_SPI_SPICON_DISSDO_SDO_MACRO_Val << DGI_SPI_SPICON_DISSDO_Pos) /* (DGI_SPI_SPICON) SDO pin is controlled by the macro Position  */
#define DGI_SPI_SPICON_DISSDO_SDO_PORT        (DGI_SPI_SPICON_DISSDO_SDO_PORT_Val << DGI_SPI_SPICON_DISSDO_Pos) /* (DGI_SPI_SPICON) SDO pin is not used by the macro. Pin controlled by PORT function Position  */
#define DGI_SPI_SPICON_SIDL_Pos               _UINT32_(13)                                         /* (DGI_SPI_SPICON) Stop in Idle control bit Position */
#define DGI_SPI_SPICON_SIDL_Msk               (_UINT32_(0x1) << DGI_SPI_SPICON_SIDL_Pos)           /* (DGI_SPI_SPICON) Stop in Idle control bit Mask */
#define DGI_SPI_SPICON_SIDL(value)            (DGI_SPI_SPICON_SIDL_Msk & (_UINT32_(value) << DGI_SPI_SPICON_SIDL_Pos)) /* Assigment of value for SIDL in the DGI_SPI_SPICON register */
#define   DGI_SPI_SPICON_SIDL_SIDL_OPER_IDLE_Val _UINT32_(0x0)                                        /* (DGI_SPI_SPICON) Continue to operate in CPU Idle mode  */
#define   DGI_SPI_SPICON_SIDL_SIDL_HALT_IDLE_Val _UINT32_(0x1)                                        /* (DGI_SPI_SPICON) Halt in CPU Idle mode  */
#define DGI_SPI_SPICON_SIDL_SIDL_OPER_IDLE    (DGI_SPI_SPICON_SIDL_SIDL_OPER_IDLE_Val << DGI_SPI_SPICON_SIDL_Pos) /* (DGI_SPI_SPICON) Continue to operate in CPU Idle mode Position  */
#define DGI_SPI_SPICON_SIDL_SIDL_HALT_IDLE    (DGI_SPI_SPICON_SIDL_SIDL_HALT_IDLE_Val << DGI_SPI_SPICON_SIDL_Pos) /* (DGI_SPI_SPICON) Halt in CPU Idle mode Position  */
#define DGI_SPI_SPICON_FRZ_Pos                _UINT32_(14)                                         /* (DGI_SPI_SPICON) Freeze bit (in Debug Mode) Position */
#define DGI_SPI_SPICON_FRZ_Msk                (_UINT32_(0x1) << DGI_SPI_SPICON_FRZ_Pos)            /* (DGI_SPI_SPICON) Freeze bit (in Debug Mode) Mask */
#define DGI_SPI_SPICON_FRZ(value)             (DGI_SPI_SPICON_FRZ_Msk & (_UINT32_(value) << DGI_SPI_SPICON_FRZ_Pos)) /* Assigment of value for FRZ in the DGI_SPI_SPICON register */
#define   DGI_SPI_SPICON_FRZ_CONTINUE_DEBUG_Val _UINT32_(0x0)                                        /* (DGI_SPI_SPICON) Continue macro operation when in Debug mode  */
#define   DGI_SPI_SPICON_FRZ_BREAK_DEBUG_Val  _UINT32_(0x1)                                        /* (DGI_SPI_SPICON) Break macro operation when in Debug mode  */
#define DGI_SPI_SPICON_FRZ_CONTINUE_DEBUG     (DGI_SPI_SPICON_FRZ_CONTINUE_DEBUG_Val << DGI_SPI_SPICON_FRZ_Pos) /* (DGI_SPI_SPICON) Continue macro operation when in Debug mode Position  */
#define DGI_SPI_SPICON_FRZ_BREAK_DEBUG        (DGI_SPI_SPICON_FRZ_BREAK_DEBUG_Val << DGI_SPI_SPICON_FRZ_Pos) /* (DGI_SPI_SPICON) Break macro operation when in Debug mode Position  */
#define DGI_SPI_SPICON_ON_Pos                 _UINT32_(15)                                         /* (DGI_SPI_SPICON) DGISPI On bit Position */
#define DGI_SPI_SPICON_ON_Msk                 (_UINT32_(0x1) << DGI_SPI_SPICON_ON_Pos)             /* (DGI_SPI_SPICON) DGISPI On bit Mask */
#define DGI_SPI_SPICON_ON(value)              (DGI_SPI_SPICON_ON_Msk & (_UINT32_(value) << DGI_SPI_SPICON_ON_Pos)) /* Assigment of value for ON in the DGI_SPI_SPICON register */
#define   DGI_SPI_SPICON_ON_DISABLE_SFR_Val   _UINT32_(0x0)                                        /* (DGI_SPI_SPICON) Turn off and reset macro, disable clocks, disable interrupt event generation, allow SFR modifications.  */
#define   DGI_SPI_SPICON_ON_ENABLE_SFR_Val    _UINT32_(0x1)                                        /* (DGI_SPI_SPICON) Enable macro  */
#define DGI_SPI_SPICON_ON_DISABLE_SFR         (DGI_SPI_SPICON_ON_DISABLE_SFR_Val << DGI_SPI_SPICON_ON_Pos) /* (DGI_SPI_SPICON) Turn off and reset macro, disable clocks, disable interrupt event generation, allow SFR modifications. Position  */
#define DGI_SPI_SPICON_ON_ENABLE_SFR          (DGI_SPI_SPICON_ON_ENABLE_SFR_Val << DGI_SPI_SPICON_ON_Pos) /* (DGI_SPI_SPICON) Enable macro Position  */
#define DGI_SPI_SPICON_ENHBUF_Pos             _UINT32_(16)                                         /* (DGI_SPI_SPICON) Enhanced Buffer Enable bit Position */
#define DGI_SPI_SPICON_ENHBUF_Msk             (_UINT32_(0x1) << DGI_SPI_SPICON_ENHBUF_Pos)         /* (DGI_SPI_SPICON) Enhanced Buffer Enable bit Mask */
#define DGI_SPI_SPICON_ENHBUF(value)          (DGI_SPI_SPICON_ENHBUF_Msk & (_UINT32_(value) << DGI_SPI_SPICON_ENHBUF_Pos)) /* Assigment of value for ENHBUF in the DGI_SPI_SPICON register */
#define   DGI_SPI_SPICON_ENHBUF_BUF_DISABLED_Val _UINT32_(0x0)                                        /* (DGI_SPI_SPICON) Enhanced Buffer Mode is disabled  */
#define   DGI_SPI_SPICON_ENHBUF_BUF_ENABLED_Val _UINT32_(0x1)                                        /* (DGI_SPI_SPICON) Enhanced Buffer Mode is enabled  */
#define DGI_SPI_SPICON_ENHBUF_BUF_DISABLED    (DGI_SPI_SPICON_ENHBUF_BUF_DISABLED_Val << DGI_SPI_SPICON_ENHBUF_Pos) /* (DGI_SPI_SPICON) Enhanced Buffer Mode is disabled Position  */
#define DGI_SPI_SPICON_ENHBUF_BUF_ENABLED     (DGI_SPI_SPICON_ENHBUF_BUF_ENABLED_Val << DGI_SPI_SPICON_ENHBUF_Pos) /* (DGI_SPI_SPICON) Enhanced Buffer Mode is enabled Position  */
#define DGI_SPI_SPICON_MCLKEN_Pos             _UINT32_(23)                                         /* (DGI_SPI_SPICON) Master Clock Enable Position */
#define DGI_SPI_SPICON_MCLKEN_Msk             (_UINT32_(0x1) << DGI_SPI_SPICON_MCLKEN_Pos)         /* (DGI_SPI_SPICON) Master Clock Enable Mask */
#define DGI_SPI_SPICON_MCLKEN(value)          (DGI_SPI_SPICON_MCLKEN_Msk & (_UINT32_(value) << DGI_SPI_SPICON_MCLKEN_Pos)) /* Assigment of value for MCLKEN in the DGI_SPI_SPICON register */
#define   DGI_SPI_SPICON_MCLKEN_PBCLK_BRG_Val _UINT32_(0x0)                                        /* (DGI_SPI_SPICON) PBCLK is used by the BRG  */
#define   DGI_SPI_SPICON_MCLKEN_MCLK_BRG_Val  _UINT32_(0x1)                                        /* (DGI_SPI_SPICON) MCLK is used by the BRG  */
#define DGI_SPI_SPICON_MCLKEN_PBCLK_BRG       (DGI_SPI_SPICON_MCLKEN_PBCLK_BRG_Val << DGI_SPI_SPICON_MCLKEN_Pos) /* (DGI_SPI_SPICON) PBCLK is used by the BRG Position  */
#define DGI_SPI_SPICON_MCLKEN_MCLK_BRG        (DGI_SPI_SPICON_MCLKEN_MCLK_BRG_Val << DGI_SPI_SPICON_MCLKEN_Pos) /* (DGI_SPI_SPICON) MCLK is used by the BRG Position  */
#define DGI_SPI_SPICON_MSSEN_Pos              _UINT32_(28)                                         /* (DGI_SPI_SPICON) Master Mode Slave Select Enable bit Position */
#define DGI_SPI_SPICON_MSSEN_Msk              (_UINT32_(0x1) << DGI_SPI_SPICON_MSSEN_Pos)          /* (DGI_SPI_SPICON) Master Mode Slave Select Enable bit Mask */
#define DGI_SPI_SPICON_MSSEN(value)           (DGI_SPI_SPICON_MSSEN_Msk & (_UINT32_(value) << DGI_SPI_SPICON_MSSEN_Pos)) /* Assigment of value for MSSEN in the DGI_SPI_SPICON register */
#define   DGI_SPI_SPICON_MSSEN_SLAVE_DISABLED_Val _UINT32_(0x0)                                        /* (DGI_SPI_SPICON) Slave select SPI support disabled  */
#define   DGI_SPI_SPICON_MSSEN_SLAVE_ENABLED_Val _UINT32_(0x1)                                        /* (DGI_SPI_SPICON) SPI Slave Select support enabled   */
#define DGI_SPI_SPICON_MSSEN_SLAVE_DISABLED   (DGI_SPI_SPICON_MSSEN_SLAVE_DISABLED_Val << DGI_SPI_SPICON_MSSEN_Pos) /* (DGI_SPI_SPICON) Slave select SPI support disabled Position  */
#define DGI_SPI_SPICON_MSSEN_SLAVE_ENABLED    (DGI_SPI_SPICON_MSSEN_SLAVE_ENABLED_Val << DGI_SPI_SPICON_MSSEN_Pos) /* (DGI_SPI_SPICON) SPI Slave Select support enabled  Position  */
#define DGI_SPI_SPICON_Msk                    _UINT32_(0x1081FDCD)                                 /* (DGI_SPI_SPICON) Register Mask  */


/* -------- DGI_SPI_SPISTAT : (DGI_SPI Offset: 0x10) ( R/ 32) SPI Status register -------- */
#define DGI_SPI_SPISTAT_RESETVALUE            _UINT32_(0x08)                                       /*  (DGI_SPI_SPISTAT) SPI Status register  Reset Value */

#define DGI_SPI_SPISTAT_SPITBF_Pos            _UINT32_(1)                                          /* (DGI_SPI_SPISTAT) SPI Transmit Buffer Full Status bit Position */
#define DGI_SPI_SPISTAT_SPITBF_Msk            (_UINT32_(0x1) << DGI_SPI_SPISTAT_SPITBF_Pos)        /* (DGI_SPI_SPISTAT) SPI Transmit Buffer Full Status bit Mask */
#define DGI_SPI_SPISTAT_SPITBF(value)         (DGI_SPI_SPISTAT_SPITBF_Msk & (_UINT32_(value) << DGI_SPI_SPISTAT_SPITBF_Pos)) /* Assigment of value for SPITBF in the DGI_SPI_SPISTAT register */
#define   DGI_SPI_SPISTAT_SPITBF_TXB_NOT_FULL_Val _UINT32_(0x0)                                        /* (DGI_SPI_SPISTAT) SPIxTXB not full  */
#define   DGI_SPI_SPISTAT_SPITBF_TXB_FULL_Val _UINT32_(0x1)                                        /* (DGI_SPI_SPISTAT) SPIxTXB is full  */
#define DGI_SPI_SPISTAT_SPITBF_TXB_NOT_FULL   (DGI_SPI_SPISTAT_SPITBF_TXB_NOT_FULL_Val << DGI_SPI_SPISTAT_SPITBF_Pos) /* (DGI_SPI_SPISTAT) SPIxTXB not full Position  */
#define DGI_SPI_SPISTAT_SPITBF_TXB_FULL       (DGI_SPI_SPISTAT_SPITBF_TXB_FULL_Val << DGI_SPI_SPISTAT_SPITBF_Pos) /* (DGI_SPI_SPISTAT) SPIxTXB is full Position  */
#define DGI_SPI_SPISTAT_SPITBE_Pos            _UINT32_(3)                                          /* (DGI_SPI_SPISTAT) SPI Transmit Buffer Empty status bit Position */
#define DGI_SPI_SPISTAT_SPITBE_Msk            (_UINT32_(0x1) << DGI_SPI_SPISTAT_SPITBE_Pos)        /* (DGI_SPI_SPISTAT) SPI Transmit Buffer Empty status bit Mask */
#define DGI_SPI_SPISTAT_SPITBE(value)         (DGI_SPI_SPISTAT_SPITBE_Msk & (_UINT32_(value) << DGI_SPI_SPISTAT_SPITBE_Pos)) /* Assigment of value for SPITBE in the DGI_SPI_SPISTAT register */
#define   DGI_SPI_SPISTAT_SPITBE_TXB_NOT_EMPTY_Val _UINT32_(0x0)                                        /* (DGI_SPI_SPISTAT) SPIxTXB is not empty  */
#define   DGI_SPI_SPISTAT_SPITBE_TXB_EMPTY_Val _UINT32_(0x1)                                        /* (DGI_SPI_SPISTAT) SPIxTXB is empty  */
#define DGI_SPI_SPISTAT_SPITBE_TXB_NOT_EMPTY  (DGI_SPI_SPISTAT_SPITBE_TXB_NOT_EMPTY_Val << DGI_SPI_SPISTAT_SPITBE_Pos) /* (DGI_SPI_SPISTAT) SPIxTXB is not empty Position  */
#define DGI_SPI_SPISTAT_SPITBE_TXB_EMPTY      (DGI_SPI_SPISTAT_SPITBE_TXB_EMPTY_Val << DGI_SPI_SPISTAT_SPITBE_Pos) /* (DGI_SPI_SPISTAT) SPIxTXB is empty Position  */
#define DGI_SPI_SPISTAT_SRMT_Pos              _UINT32_(7)                                          /* (DGI_SPI_SPISTAT) Shift Register (SPIxSR) Empty bit0= There are current or pending transactions Position */
#define DGI_SPI_SPISTAT_SRMT_Msk              (_UINT32_(0x1) << DGI_SPI_SPISTAT_SRMT_Pos)          /* (DGI_SPI_SPISTAT) Shift Register (SPIxSR) Empty bit0= There are current or pending transactions Mask */
#define DGI_SPI_SPISTAT_SRMT(value)           (DGI_SPI_SPISTAT_SRMT_Msk & (_UINT32_(value) << DGI_SPI_SPISTAT_SRMT_Pos)) /* Assigment of value for SRMT in the DGI_SPI_SPISTAT register */
#define   DGI_SPI_SPISTAT_SRMT_SRMT_NO_TRANS_Val _UINT32_(0x1)                                        /* (DGI_SPI_SPISTAT) There are no current or pending transactions  */
#define DGI_SPI_SPISTAT_SRMT_SRMT_NO_TRANS    (DGI_SPI_SPISTAT_SRMT_SRMT_NO_TRANS_Val << DGI_SPI_SPISTAT_SRMT_Pos) /* (DGI_SPI_SPISTAT) There are no current or pending transactions Position  */
#define DGI_SPI_SPISTAT_SPIBUSY_Pos           _UINT32_(11)                                         /* (DGI_SPI_SPISTAT) SPI activity status bit Position */
#define DGI_SPI_SPISTAT_SPIBUSY_Msk           (_UINT32_(0x1) << DGI_SPI_SPISTAT_SPIBUSY_Pos)       /* (DGI_SPI_SPISTAT) SPI activity status bit Mask */
#define DGI_SPI_SPISTAT_SPIBUSY(value)        (DGI_SPI_SPISTAT_SPIBUSY_Msk & (_UINT32_(value) << DGI_SPI_SPISTAT_SPIBUSY_Pos)) /* Assigment of value for SPIBUSY in the DGI_SPI_SPISTAT register */
#define   DGI_SPI_SPISTAT_SPIBUSY_SPI_FREE_Val _UINT32_(0x0)                                        /* (DGI_SPI_SPISTAT) No on-going transactions (at time of read)  */
#define   DGI_SPI_SPISTAT_SPIBUSY_SPI_BUSY_Val _UINT32_(0x1)                                        /* (DGI_SPI_SPISTAT) Macro currently busy with some transactions  */
#define DGI_SPI_SPISTAT_SPIBUSY_SPI_FREE      (DGI_SPI_SPISTAT_SPIBUSY_SPI_FREE_Val << DGI_SPI_SPISTAT_SPIBUSY_Pos) /* (DGI_SPI_SPISTAT) No on-going transactions (at time of read) Position  */
#define DGI_SPI_SPISTAT_SPIBUSY_SPI_BUSY      (DGI_SPI_SPISTAT_SPIBUSY_SPI_BUSY_Val << DGI_SPI_SPISTAT_SPIBUSY_Pos) /* (DGI_SPI_SPISTAT) Macro currently busy with some transactions Position  */
#define DGI_SPI_SPISTAT_TXBUFELM_Pos          _UINT32_(16)                                         /* (DGI_SPI_SPISTAT) TransmitBuffer Element Count bits (valid only when ENHBUF = 1) Position */
#define DGI_SPI_SPISTAT_TXBUFELM_Msk          (_UINT32_(0x1F) << DGI_SPI_SPISTAT_TXBUFELM_Pos)     /* (DGI_SPI_SPISTAT) TransmitBuffer Element Count bits (valid only when ENHBUF = 1) Mask */
#define DGI_SPI_SPISTAT_TXBUFELM(value)       (DGI_SPI_SPISTAT_TXBUFELM_Msk & (_UINT32_(value) << DGI_SPI_SPISTAT_TXBUFELM_Pos)) /* Assigment of value for TXBUFELM in the DGI_SPI_SPISTAT register */
#define DGI_SPI_SPISTAT_Msk                   _UINT32_(0x001F088A)                                 /* (DGI_SPI_SPISTAT) Register Mask  */


/* -------- DGI_SPI_SPIBUF : (DGI_SPI Offset: 0x20) (R/W 32) SPI BUFFER register -------- */
#define DGI_SPI_SPIBUF_RESETVALUE             _UINT32_(0x00)                                       /*  (DGI_SPI_SPIBUF) SPI BUFFER register  Reset Value */

#define DGI_SPI_SPIBUF_DATA_Pos               _UINT32_(0)                                          /* (DGI_SPI_SPIBUF) FIFO Data bits Position */
#define DGI_SPI_SPIBUF_DATA_Msk               (_UINT32_(0xFFFFFFFF) << DGI_SPI_SPIBUF_DATA_Pos)    /* (DGI_SPI_SPIBUF) FIFO Data bits Mask */
#define DGI_SPI_SPIBUF_DATA(value)            (DGI_SPI_SPIBUF_DATA_Msk & (_UINT32_(value) << DGI_SPI_SPIBUF_DATA_Pos)) /* Assigment of value for DATA in the DGI_SPI_SPIBUF register */
#define DGI_SPI_SPIBUF_Msk                    _UINT32_(0xFFFFFFFF)                                 /* (DGI_SPI_SPIBUF) Register Mask  */


/* -------- DGI_SPI_SPIBRG : (DGI_SPI Offset: 0x30) (R/W 32) SPI Baud rate register -------- */
#define DGI_SPI_SPIBRG_RESETVALUE             _UINT32_(0x00)                                       /*  (DGI_SPI_SPIBRG) SPI Baud rate register  Reset Value */

#define DGI_SPI_SPIBRG_BRG_Pos                _UINT32_(0)                                          /* (DGI_SPI_SPIBRG) Baud Rate Divisor bitsseeSection 2.4.1. Position */
#define DGI_SPI_SPIBRG_BRG_Msk                (_UINT32_(0x1FFF) << DGI_SPI_SPIBRG_BRG_Pos)         /* (DGI_SPI_SPIBRG) Baud Rate Divisor bitsseeSection 2.4.1. Mask */
#define DGI_SPI_SPIBRG_BRG(value)             (DGI_SPI_SPIBRG_BRG_Msk & (_UINT32_(value) << DGI_SPI_SPIBRG_BRG_Pos)) /* Assigment of value for BRG in the DGI_SPI_SPIBRG register */
#define DGI_SPI_SPIBRG_Msk                    _UINT32_(0x00001FFF)                                 /* (DGI_SPI_SPIBRG) Register Mask  */


/* -------- DGI_SPI_SPITXADD : (DGI_SPI Offset: 0x40) (R/W 32) SPI DMA Transmit Address register -------- */
#define DGI_SPI_SPITXADD_RESETVALUE           _UINT32_(0x00)                                       /*  (DGI_SPI_SPITXADD) SPI DMA Transmit Address register  Reset Value */

#define DGI_SPI_SPITXADD_TXADD_Pos            _UINT32_(0)                                          /* (DGI_SPI_SPITXADD) Transmit Source Address bitsTXADD can constantly be updated to reflect the current transmit address as the transfer progresses Position */
#define DGI_SPI_SPITXADD_TXADD_Msk            (_UINT32_(0xFFFF) << DGI_SPI_SPITXADD_TXADD_Pos)     /* (DGI_SPI_SPITXADD) Transmit Source Address bitsTXADD can constantly be updated to reflect the current transmit address as the transfer progresses Mask */
#define DGI_SPI_SPITXADD_TXADD(value)         (DGI_SPI_SPITXADD_TXADD_Msk & (_UINT32_(value) << DGI_SPI_SPITXADD_TXADD_Pos)) /* Assigment of value for TXADD in the DGI_SPI_SPITXADD register */
#define DGI_SPI_SPITXADD_Msk                  _UINT32_(0x0000FFFF)                                 /* (DGI_SPI_SPITXADD) Register Mask  */


/* -------- DGI_SPI_SPITXCNT : (DGI_SPI Offset: 0x50) (R/W 32) SPI DMA Transmit Count register -------- */
#define DGI_SPI_SPITXCNT_RESETVALUE           _UINT32_(0x00)                                       /*  (DGI_SPI_SPITXCNT) SPI DMA Transmit Count register  Reset Value */

#define DGI_SPI_SPITXCNT_TXCNT_Pos            _UINT32_(0)                                          /* (DGI_SPI_SPITXCNT) Transmit Count bitsThis register indicates the number of transferred data words. As the DMA progresses, TXCNT is constantly decremented to reflect the remaining count yet to be transferred. Position */
#define DGI_SPI_SPITXCNT_TXCNT_Msk            (_UINT32_(0xFFFF) << DGI_SPI_SPITXCNT_TXCNT_Pos)     /* (DGI_SPI_SPITXCNT) Transmit Count bitsThis register indicates the number of transferred data words. As the DMA progresses, TXCNT is constantly decremented to reflect the remaining count yet to be transferred. Mask */
#define DGI_SPI_SPITXCNT_TXCNT(value)         (DGI_SPI_SPITXCNT_TXCNT_Msk & (_UINT32_(value) << DGI_SPI_SPITXCNT_TXCNT_Pos)) /* Assigment of value for TXCNT in the DGI_SPI_SPITXCNT register */
#define DGI_SPI_SPITXCNT_Msk                  _UINT32_(0x0000FFFF)                                 /* (DGI_SPI_SPITXCNT) Register Mask  */


/** \brief DGI_SPI register offsets definitions */
#define DGI_SPI_SPICON_REG_OFST        _UINT32_(0x00)      /* (DGI_SPI_SPICON) SPI control register Offset */
#define DGI_SPI_SPISTAT_REG_OFST       _UINT32_(0x10)      /* (DGI_SPI_SPISTAT) SPI Status register Offset */
#define DGI_SPI_SPIBUF_REG_OFST        _UINT32_(0x20)      /* (DGI_SPI_SPIBUF) SPI BUFFER register Offset */
#define DGI_SPI_SPIBRG_REG_OFST        _UINT32_(0x30)      /* (DGI_SPI_SPIBRG) SPI Baud rate register Offset */
#define DGI_SPI_SPITXADD_REG_OFST      _UINT32_(0x40)      /* (DGI_SPI_SPITXADD) SPI DMA Transmit Address register Offset */
#define DGI_SPI_SPITXCNT_REG_OFST      _UINT32_(0x50)      /* (DGI_SPI_SPITXCNT) SPI DMA Transmit Count register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief DGI_SPI register API structure */
typedef struct
{  /* SPI DMA for DGI Macro */
  __IO  uint32_t                       DGI_SPI_SPICON;     /**< Offset: 0x00 (R/W  32) SPI control register */
  __I   uint8_t                        Reserved1[0x0C];
  __I   uint32_t                       DGI_SPI_SPISTAT;    /**< Offset: 0x10 (R/   32) SPI Status register */
  __I   uint8_t                        Reserved2[0x0C];
  __IO  uint32_t                       DGI_SPI_SPIBUF;     /**< Offset: 0x20 (R/W  32) SPI BUFFER register */
  __I   uint8_t                        Reserved3[0x0C];
  __IO  uint32_t                       DGI_SPI_SPIBRG;     /**< Offset: 0x30 (R/W  32) SPI Baud rate register */
  __I   uint8_t                        Reserved4[0x0C];
  __IO  uint32_t                       DGI_SPI_SPITXADD;   /**< Offset: 0x40 (R/W  32) SPI DMA Transmit Address register */
  __I   uint8_t                        Reserved5[0x0C];
  __IO  uint32_t                       DGI_SPI_SPITXCNT;   /**< Offset: 0x50 (R/W  32) SPI DMA Transmit Count register */
} dgi_spi_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _WBZ35_DGI_SPI_COMPONENT_H_ */
