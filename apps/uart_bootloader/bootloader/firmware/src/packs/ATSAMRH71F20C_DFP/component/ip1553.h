/*
 * Component description for IP1553
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
#ifndef _SAMRH71_IP1553_COMPONENT_H_
#define _SAMRH71_IP1553_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR IP1553                                       */
/* ************************************************************************** */

/* -------- IP1553_CR : (IP1553 Offset: 0x00) (R/W 32) Configuration Register -------- */
#define IP1553_CR_PT_Pos                      _UINT32_(0)                                          /* (IP1553_CR) POTermConf Position */
#define IP1553_CR_PT_Msk                      (_UINT32_(0x1) << IP1553_CR_PT_Pos)                  /* (IP1553_CR) POTermConf Mask */
#define IP1553_CR_PT(value)                   (IP1553_CR_PT_Msk & (_UINT32_(value) << IP1553_CR_PT_Pos)) /* Assigment of value for PT in the IP1553_CR register */
#define IP1553_CR_TA_Pos                      _UINT32_(1)                                          /* (IP1553_CR) TermAddressConf Position */
#define IP1553_CR_TA_Msk                      (_UINT32_(0x1F) << IP1553_CR_TA_Pos)                 /* (IP1553_CR) TermAddressConf Mask */
#define IP1553_CR_TA(value)                   (IP1553_CR_TA_Msk & (_UINT32_(value) << IP1553_CR_TA_Pos)) /* Assigment of value for TA in the IP1553_CR register */
#define IP1553_CR_TC_Pos                      _UINT32_(6)                                          /* (IP1553_CR) TRBitCmd Position */
#define IP1553_CR_TC_Msk                      (_UINT32_(0x1) << IP1553_CR_TC_Pos)                  /* (IP1553_CR) TRBitCmd Mask */
#define IP1553_CR_TC(value)                   (IP1553_CR_TC_Msk & (_UINT32_(value) << IP1553_CR_TC_Pos)) /* Assigment of value for TC in the IP1553_CR register */
#define IP1553_CR_SC_Pos                      _UINT32_(7)                                          /* (IP1553_CR) SSBitCmd Position */
#define IP1553_CR_SC_Msk                      (_UINT32_(0x1) << IP1553_CR_SC_Pos)                  /* (IP1553_CR) SSBitCmd Mask */
#define IP1553_CR_SC(value)                   (IP1553_CR_SC_Msk & (_UINT32_(value) << IP1553_CR_SC_Pos)) /* Assigment of value for SC in the IP1553_CR register */
#define IP1553_CR_BC_Pos                      _UINT32_(8)                                          /* (IP1553_CR) BusyBitCmd Position */
#define IP1553_CR_BC_Msk                      (_UINT32_(0x1) << IP1553_CR_BC_Pos)                  /* (IP1553_CR) BusyBitCmd Mask */
#define IP1553_CR_BC(value)                   (IP1553_CR_BC_Msk & (_UINT32_(value) << IP1553_CR_BC_Pos)) /* Assigment of value for BC in the IP1553_CR register */
#define IP1553_CR_SRC_Pos                     _UINT32_(9)                                          /* (IP1553_CR) SREQBitCmd Position */
#define IP1553_CR_SRC_Msk                     (_UINT32_(0x1) << IP1553_CR_SRC_Pos)                 /* (IP1553_CR) SREQBitCmd Mask */
#define IP1553_CR_SRC(value)                  (IP1553_CR_SRC_Msk & (_UINT32_(value) << IP1553_CR_SRC_Pos)) /* Assigment of value for SRC in the IP1553_CR register */
#define IP1553_CR_BEC_Pos                     _UINT32_(10)                                         /* (IP1553_CR) BCEnableCmd Position */
#define IP1553_CR_BEC_Msk                     (_UINT32_(0x1) << IP1553_CR_BEC_Pos)                 /* (IP1553_CR) BCEnableCmd Mask */
#define IP1553_CR_BEC(value)                  (IP1553_CR_BEC_Msk & (_UINT32_(value) << IP1553_CR_BEC_Pos)) /* Assigment of value for BEC in the IP1553_CR register */
#define IP1553_CR_RST_Pos                     _UINT32_(11)                                         /* (IP1553_CR) Soft Reset Position */
#define IP1553_CR_RST_Msk                     (_UINT32_(0x1) << IP1553_CR_RST_Pos)                 /* (IP1553_CR) Soft Reset Mask */
#define IP1553_CR_RST(value)                  (IP1553_CR_RST_Msk & (_UINT32_(value) << IP1553_CR_RST_Pos)) /* Assigment of value for RST in the IP1553_CR register */
#define IP1553_CR_Msk                         _UINT32_(0x00000FFF)                                 /* (IP1553_CR) Register Mask  */


/* -------- IP1553_CMDR1 : (IP1553 Offset: 0x0C) ( /W 32) Command Register 1 -------- */
#define IP1553_CMDR1_DATAWORDCOUNT_Pos        _UINT32_(0)                                          /* (IP1553_CMDR1) DATA WORD COUNT Position */
#define IP1553_CMDR1_DATAWORDCOUNT_Msk        (_UINT32_(0x1F) << IP1553_CMDR1_DATAWORDCOUNT_Pos)   /* (IP1553_CMDR1) DATA WORD COUNT Mask */
#define IP1553_CMDR1_DATAWORDCOUNT(value)     (IP1553_CMDR1_DATAWORDCOUNT_Msk & (_UINT32_(value) << IP1553_CMDR1_DATAWORDCOUNT_Pos)) /* Assigment of value for DATAWORDCOUNT in the IP1553_CMDR1 register */
#define IP1553_CMDR1_RTSUBADDRESS_Pos         _UINT32_(5)                                          /* (IP1553_CMDR1) RT SUBADDRESS Position */
#define IP1553_CMDR1_RTSUBADDRESS_Msk         (_UINT32_(0x1F) << IP1553_CMDR1_RTSUBADDRESS_Pos)    /* (IP1553_CMDR1) RT SUBADDRESS Mask */
#define IP1553_CMDR1_RTSUBADDRESS(value)      (IP1553_CMDR1_RTSUBADDRESS_Msk & (_UINT32_(value) << IP1553_CMDR1_RTSUBADDRESS_Pos)) /* Assigment of value for RTSUBADDRESS in the IP1553_CMDR1 register */
#define IP1553_CMDR1_T_R_Pos                  _UINT32_(10)                                         /* (IP1553_CMDR1) T/R Position */
#define IP1553_CMDR1_T_R_Msk                  (_UINT32_(0x1) << IP1553_CMDR1_T_R_Pos)              /* (IP1553_CMDR1) T/R Mask */
#define IP1553_CMDR1_T_R(value)               (IP1553_CMDR1_T_R_Msk & (_UINT32_(value) << IP1553_CMDR1_T_R_Pos)) /* Assigment of value for T_R in the IP1553_CMDR1 register */
#define IP1553_CMDR1_RTADDRESS_Pos            _UINT32_(11)                                         /* (IP1553_CMDR1) RT ADDRESS Position */
#define IP1553_CMDR1_RTADDRESS_Msk            (_UINT32_(0x1F) << IP1553_CMDR1_RTADDRESS_Pos)       /* (IP1553_CMDR1) RT ADDRESS Mask */
#define IP1553_CMDR1_RTADDRESS(value)         (IP1553_CMDR1_RTADDRESS_Msk & (_UINT32_(value) << IP1553_CMDR1_RTADDRESS_Pos)) /* Assigment of value for RTADDRESS in the IP1553_CMDR1 register */
#define IP1553_CMDR1_Msk                      _UINT32_(0x0000FFFF)                                 /* (IP1553_CMDR1) Register Mask  */


/* -------- IP1553_CMDR2 : (IP1553 Offset: 0x10) ( /W 32) Command Register 2 -------- */
#define IP1553_CMDR2_DATAWORDCOUNT_Pos        _UINT32_(0)                                          /* (IP1553_CMDR2) DATA WORD COUNT Position */
#define IP1553_CMDR2_DATAWORDCOUNT_Msk        (_UINT32_(0x1F) << IP1553_CMDR2_DATAWORDCOUNT_Pos)   /* (IP1553_CMDR2) DATA WORD COUNT Mask */
#define IP1553_CMDR2_DATAWORDCOUNT(value)     (IP1553_CMDR2_DATAWORDCOUNT_Msk & (_UINT32_(value) << IP1553_CMDR2_DATAWORDCOUNT_Pos)) /* Assigment of value for DATAWORDCOUNT in the IP1553_CMDR2 register */
#define IP1553_CMDR2_RTSUBADDRESS_Pos         _UINT32_(5)                                          /* (IP1553_CMDR2) RT SUBADDRESS Position */
#define IP1553_CMDR2_RTSUBADDRESS_Msk         (_UINT32_(0x1F) << IP1553_CMDR2_RTSUBADDRESS_Pos)    /* (IP1553_CMDR2) RT SUBADDRESS Mask */
#define IP1553_CMDR2_RTSUBADDRESS(value)      (IP1553_CMDR2_RTSUBADDRESS_Msk & (_UINT32_(value) << IP1553_CMDR2_RTSUBADDRESS_Pos)) /* Assigment of value for RTSUBADDRESS in the IP1553_CMDR2 register */
#define IP1553_CMDR2_T_R_Pos                  _UINT32_(10)                                         /* (IP1553_CMDR2) R/T Position */
#define IP1553_CMDR2_T_R_Msk                  (_UINT32_(0x1) << IP1553_CMDR2_T_R_Pos)              /* (IP1553_CMDR2) R/T Mask */
#define IP1553_CMDR2_T_R(value)               (IP1553_CMDR2_T_R_Msk & (_UINT32_(value) << IP1553_CMDR2_T_R_Pos)) /* Assigment of value for T_R in the IP1553_CMDR2 register */
#define IP1553_CMDR2_RTADDRESS_Pos            _UINT32_(11)                                         /* (IP1553_CMDR2) RT ADDRESS Position */
#define IP1553_CMDR2_RTADDRESS_Msk            (_UINT32_(0x1F) << IP1553_CMDR2_RTADDRESS_Pos)       /* (IP1553_CMDR2) RT ADDRESS Mask */
#define IP1553_CMDR2_RTADDRESS(value)         (IP1553_CMDR2_RTADDRESS_Msk & (_UINT32_(value) << IP1553_CMDR2_RTADDRESS_Pos)) /* Assigment of value for RTADDRESS in the IP1553_CMDR2 register */
#define IP1553_CMDR2_Msk                      _UINT32_(0x0000FFFF)                                 /* (IP1553_CMDR2) Register Mask  */


/* -------- IP1553_CMDR3 : (IP1553 Offset: 0x14) ( /W 32) Command Register 3 -------- */
#define IP1553_CMDR3_BUS_Pos                  _UINT32_(0)                                          /* (IP1553_CMDR3) bus used Position */
#define IP1553_CMDR3_BUS_Msk                  (_UINT32_(0x1) << IP1553_CMDR3_BUS_Pos)              /* (IP1553_CMDR3) bus used Mask */
#define IP1553_CMDR3_BUS(value)               (IP1553_CMDR3_BUS_Msk & (_UINT32_(value) << IP1553_CMDR3_BUS_Pos)) /* Assigment of value for BUS in the IP1553_CMDR3 register */
#define IP1553_CMDR3_BCE_Pos                  _UINT32_(1)                                          /* (IP1553_CMDR3) 1553 emitter Position */
#define IP1553_CMDR3_BCE_Msk                  (_UINT32_(0x1) << IP1553_CMDR3_BCE_Pos)              /* (IP1553_CMDR3) 1553 emitter Mask */
#define IP1553_CMDR3_BCE(value)               (IP1553_CMDR3_BCE_Msk & (_UINT32_(value) << IP1553_CMDR3_BCE_Pos)) /* Assigment of value for BCE in the IP1553_CMDR3 register */
#define IP1553_CMDR3_BCR_Pos                  _UINT32_(2)                                          /* (IP1553_CMDR3) 1553 receiver Position */
#define IP1553_CMDR3_BCR_Msk                  (_UINT32_(0x1) << IP1553_CMDR3_BCR_Pos)              /* (IP1553_CMDR3) 1553 receiver Mask */
#define IP1553_CMDR3_BCR(value)               (IP1553_CMDR3_BCR_Msk & (_UINT32_(value) << IP1553_CMDR3_BCR_Pos)) /* Assigment of value for BCR in the IP1553_CMDR3 register */
#define IP1553_CMDR3_ER_Pos                   _UINT32_(3)                                          /* (IP1553_CMDR3) data or command transfer Position */
#define IP1553_CMDR3_ER_Msk                   (_UINT32_(0x1) << IP1553_CMDR3_ER_Pos)               /* (IP1553_CMDR3) data or command transfer Mask */
#define IP1553_CMDR3_ER(value)                (IP1553_CMDR3_ER_Msk & (_UINT32_(value) << IP1553_CMDR3_ER_Pos)) /* Assigment of value for ER in the IP1553_CMDR3 register */
#define IP1553_CMDR3_Msk                      _UINT32_(0x0000000F)                                 /* (IP1553_CMDR3) Register Mask  */


/* -------- IP1553_BITR : (IP1553 Offset: 0x18) ( /W 32) BIT Register -------- */
#define IP1553_BITR_TOBITWORD_Pos             _UINT32_(0)                                          /* (IP1553_BITR) to bit word Position */
#define IP1553_BITR_TOBITWORD_Msk             (_UINT32_(0xFFFF) << IP1553_BITR_TOBITWORD_Pos)      /* (IP1553_BITR) to bit word Mask */
#define IP1553_BITR_TOBITWORD(value)          (IP1553_BITR_TOBITWORD_Msk & (_UINT32_(value) << IP1553_BITR_TOBITWORD_Pos)) /* Assigment of value for TOBITWORD in the IP1553_BITR register */
#define IP1553_BITR_Msk                       _UINT32_(0x0000FFFF)                                 /* (IP1553_BITR) Register Mask  */


/* -------- IP1553_VWR : (IP1553 Offset: 0x1C) ( /W 32) Vector Word Register -------- */
#define IP1553_VWR_TOVECTORWORD_Pos           _UINT32_(0)                                          /* (IP1553_VWR) to vector word Position */
#define IP1553_VWR_TOVECTORWORD_Msk           (_UINT32_(0xFFFF) << IP1553_VWR_TOVECTORWORD_Pos)    /* (IP1553_VWR) to vector word Mask */
#define IP1553_VWR_TOVECTORWORD(value)        (IP1553_VWR_TOVECTORWORD_Msk & (_UINT32_(value) << IP1553_VWR_TOVECTORWORD_Pos)) /* Assigment of value for TOVECTORWORD in the IP1553_VWR register */
#define IP1553_VWR_Msk                        _UINT32_(0x0000FFFF)                                 /* (IP1553_VWR) Register Mask  */


/* -------- IP1553_IER : (IP1553 Offset: 0x20) ( /W 32) IRQ Mask Enable Register -------- */
#define IP1553_IER_EMT_Pos                    _UINT32_(0)                                          /* (IP1553_IER) EndMemTransfer Position */
#define IP1553_IER_EMT_Msk                    (_UINT32_(0x1) << IP1553_IER_EMT_Pos)                /* (IP1553_IER) EndMemTransfer Mask */
#define IP1553_IER_EMT(value)                 (IP1553_IER_EMT_Msk & (_UINT32_(value) << IP1553_IER_EMT_Pos)) /* Assigment of value for EMT in the IP1553_IER register */
#define IP1553_IER_MTE_Pos                    _UINT32_(1)                                          /* (IP1553_IER) MemTransferErr Position */
#define IP1553_IER_MTE_Msk                    (_UINT32_(0x1) << IP1553_IER_MTE_Pos)                /* (IP1553_IER) MemTransferErr Mask */
#define IP1553_IER_MTE(value)                 (IP1553_IER_MTE_Msk & (_UINT32_(value) << IP1553_IER_MTE_Pos)) /* Assigment of value for MTE in the IP1553_IER register */
#define IP1553_IER_ERX_Pos                    _UINT32_(2)                                          /* (IP1553_IER) End reception Position */
#define IP1553_IER_ERX_Msk                    (_UINT32_(0x1) << IP1553_IER_ERX_Pos)                /* (IP1553_IER) End reception Mask */
#define IP1553_IER_ERX(value)                 (IP1553_IER_ERX_Msk & (_UINT32_(value) << IP1553_IER_ERX_Pos)) /* Assigment of value for ERX in the IP1553_IER register */
#define IP1553_IER_ETX_Pos                    _UINT32_(3)                                          /* (IP1553_IER) EndTransmission Position */
#define IP1553_IER_ETX_Msk                    (_UINT32_(0x1) << IP1553_IER_ETX_Pos)                /* (IP1553_IER) EndTransmission Mask */
#define IP1553_IER_ETX(value)                 (IP1553_IER_ETX_Msk & (_UINT32_(value) << IP1553_IER_ETX_Pos)) /* Assigment of value for ETX in the IP1553_IER register */
#define IP1553_IER_ETRANS_Pos                 _UINT32_(4)                                          /* (IP1553_IER) EndTransfer Position */
#define IP1553_IER_ETRANS_Msk                 (_UINT32_(0x3) << IP1553_IER_ETRANS_Pos)             /* (IP1553_IER) EndTransfer Mask */
#define IP1553_IER_ETRANS(value)              (IP1553_IER_ETRANS_Msk & (_UINT32_(value) << IP1553_IER_ETRANS_Pos)) /* Assigment of value for ETRANS in the IP1553_IER register */
#define IP1553_IER_TE_Pos                     _UINT32_(6)                                          /* (IP1553_IER) TransErr Position */
#define IP1553_IER_TE_Msk                     (_UINT32_(0x1) << IP1553_IER_TE_Pos)                 /* (IP1553_IER) TransErr Mask */
#define IP1553_IER_TE(value)                  (IP1553_IER_TE_Msk & (_UINT32_(value) << IP1553_IER_TE_Pos)) /* Assigment of value for TE in the IP1553_IER register */
#define IP1553_IER_TCE_Pos                    _UINT32_(7)                                          /* (IP1553_IER) TransCodingErr Position */
#define IP1553_IER_TCE_Msk                    (_UINT32_(0x1) << IP1553_IER_TCE_Pos)                /* (IP1553_IER) TransCodingErr Mask */
#define IP1553_IER_TCE(value)                 (IP1553_IER_TCE_Msk & (_UINT32_(value) << IP1553_IER_TCE_Pos)) /* Assigment of value for TCE in the IP1553_IER register */
#define IP1553_IER_TPE_Pos                    _UINT32_(8)                                          /* (IP1553_IER) TransParityErr Position */
#define IP1553_IER_TPE_Msk                    (_UINT32_(0x1) << IP1553_IER_TPE_Pos)                /* (IP1553_IER) TransParityErr Mask */
#define IP1553_IER_TPE(value)                 (IP1553_IER_TPE_Msk & (_UINT32_(value) << IP1553_IER_TPE_Pos)) /* Assigment of value for TPE in the IP1553_IER register */
#define IP1553_IER_TDE_Pos                    _UINT32_(9)                                          /* (IP1553_IER) TransDataTypeErr Position */
#define IP1553_IER_TDE_Msk                    (_UINT32_(0x1) << IP1553_IER_TDE_Pos)                /* (IP1553_IER) TransDataTypeErr Mask */
#define IP1553_IER_TDE(value)                 (IP1553_IER_TDE_Msk & (_UINT32_(value) << IP1553_IER_TDE_Pos)) /* Assigment of value for TDE in the IP1553_IER register */
#define IP1553_IER_TTE_Pos                    _UINT32_(10)                                         /* (IP1553_IER) TransTimeOutErr Position */
#define IP1553_IER_TTE_Msk                    (_UINT32_(0x1) << IP1553_IER_TTE_Pos)                /* (IP1553_IER) TransTimeOutErr Mask */
#define IP1553_IER_TTE(value)                 (IP1553_IER_TTE_Msk & (_UINT32_(value) << IP1553_IER_TTE_Pos)) /* Assigment of value for TTE in the IP1553_IER register */
#define IP1553_IER_TWE_Pos                    _UINT32_(11)                                         /* (IP1553_IER) TransWordCounterErr Position */
#define IP1553_IER_TWE_Msk                    (_UINT32_(0x1) << IP1553_IER_TWE_Pos)                /* (IP1553_IER) TransWordCounterErr Mask */
#define IP1553_IER_TWE(value)                 (IP1553_IER_TWE_Msk & (_UINT32_(value) << IP1553_IER_TWE_Pos)) /* Assigment of value for TWE in the IP1553_IER register */
#define IP1553_IER_BE_Pos                     _UINT32_(12)                                         /* (IP1553_IER) BufIFErr Position */
#define IP1553_IER_BE_Msk                     (_UINT32_(0x1) << IP1553_IER_BE_Pos)                 /* (IP1553_IER) BufIFErr Mask */
#define IP1553_IER_BE(value)                  (IP1553_IER_BE_Msk & (_UINT32_(value) << IP1553_IER_BE_Pos)) /* Assigment of value for BE in the IP1553_IER register */
#define IP1553_IER_ITR_Pos                    _UINT32_(13)                                         /* (IP1553_IER) IllegalTransferReq Position */
#define IP1553_IER_ITR_Msk                    (_UINT32_(0x1) << IP1553_IER_ITR_Pos)                /* (IP1553_IER) IllegalTransferReq Mask */
#define IP1553_IER_ITR(value)                 (IP1553_IER_ITR_Msk & (_UINT32_(value) << IP1553_IER_ITR_Pos)) /* Assigment of value for ITR in the IP1553_IER register */
#define IP1553_IER_TVR_Pos                    _UINT32_(14)                                         /* (IP1553_IER) TransVecWordReq Position */
#define IP1553_IER_TVR_Msk                    (_UINT32_(0x1) << IP1553_IER_TVR_Pos)                /* (IP1553_IER) TransVecWordReq Mask */
#define IP1553_IER_TVR(value)                 (IP1553_IER_TVR_Msk & (_UINT32_(value) << IP1553_IER_TVR_Pos)) /* Assigment of value for TVR in the IP1553_IER register */
#define IP1553_IER_DBR_Pos                    _UINT32_(15)                                         /* (IP1553_IER) DynamicBusContReq Position */
#define IP1553_IER_DBR_Msk                    (_UINT32_(0x1) << IP1553_IER_DBR_Pos)                /* (IP1553_IER) DynamicBusContReq Mask */
#define IP1553_IER_DBR(value)                 (IP1553_IER_DBR_Msk & (_UINT32_(value) << IP1553_IER_DBR_Pos)) /* Assigment of value for DBR in the IP1553_IER register */
#define IP1553_IER_STR_Pos                    _UINT32_(16)                                         /* (IP1553_IER) InitSelfTestReq Position */
#define IP1553_IER_STR_Msk                    (_UINT32_(0x1) << IP1553_IER_STR_Pos)                /* (IP1553_IER) InitSelfTestReq Mask */
#define IP1553_IER_STR(value)                 (IP1553_IER_STR_Msk & (_UINT32_(value) << IP1553_IER_STR_Pos)) /* Assigment of value for STR in the IP1553_IER register */
#define IP1553_IER_TSR_Pos                    _UINT32_(17)                                         /* (IP1553_IER) TranShutdownReq Position */
#define IP1553_IER_TSR_Msk                    (_UINT32_(0x1) << IP1553_IER_TSR_Pos)                /* (IP1553_IER) TranShutdownReq Mask */
#define IP1553_IER_TSR(value)                 (IP1553_IER_TSR_Msk & (_UINT32_(value) << IP1553_IER_TSR_Pos)) /* Assigment of value for TSR in the IP1553_IER register */
#define IP1553_IER_OSR_Pos                    _UINT32_(18)                                         /* (IP1553_IER) OvTranShutdownReq Position */
#define IP1553_IER_OSR_Msk                    (_UINT32_(0x1) << IP1553_IER_OSR_Pos)                /* (IP1553_IER) OvTranShutdownReq Mask */
#define IP1553_IER_OSR(value)                 (IP1553_IER_OSR_Msk & (_UINT32_(value) << IP1553_IER_OSR_Pos)) /* Assigment of value for OSR in the IP1553_IER register */
#define IP1553_IER_SDR_Pos                    _UINT32_(19)                                         /* (IP1553_IER) SyncWithDataReq Position */
#define IP1553_IER_SDR_Msk                    (_UINT32_(0x1) << IP1553_IER_SDR_Pos)                /* (IP1553_IER) SyncWithDataReq Mask */
#define IP1553_IER_SDR(value)                 (IP1553_IER_SDR_Msk & (_UINT32_(value) << IP1553_IER_SDR_Pos)) /* Assigment of value for SDR in the IP1553_IER register */
#define IP1553_IER_SWD_Pos                    _UINT32_(20)                                         /* (IP1553_IER) SyncWithoutDataReq Position */
#define IP1553_IER_SWD_Msk                    (_UINT32_(0x1) << IP1553_IER_SWD_Pos)                /* (IP1553_IER) SyncWithoutDataReq Mask */
#define IP1553_IER_SWD(value)                 (IP1553_IER_SWD_Msk & (_UINT32_(value) << IP1553_IER_SWD_Pos)) /* Assigment of value for SWD in the IP1553_IER register */
#define IP1553_IER_RRT_Pos                    _UINT32_(21)                                         /* (IP1553_IER) ResetRTReq Position */
#define IP1553_IER_RRT_Msk                    (_UINT32_(0x1) << IP1553_IER_RRT_Pos)                /* (IP1553_IER) ResetRTReq Mask */
#define IP1553_IER_RRT(value)                 (IP1553_IER_RRT_Msk & (_UINT32_(value) << IP1553_IER_RRT_Pos)) /* Assigment of value for RRT in the IP1553_IER register */
#define IP1553_IER_ITF_Pos                    _UINT32_(22)                                         /* (IP1553_IER) InhibitTermFlagReq Position */
#define IP1553_IER_ITF_Msk                    (_UINT32_(0x1) << IP1553_IER_ITF_Pos)                /* (IP1553_IER) InhibitTermFlagReq Mask */
#define IP1553_IER_ITF(value)                 (IP1553_IER_ITF_Msk & (_UINT32_(value) << IP1553_IER_ITF_Pos)) /* Assigment of value for ITF in the IP1553_IER register */
#define IP1553_IER_OTF_Pos                    _UINT32_(23)                                         /* (IP1553_IER) OvInhibitTermFlagReq Position */
#define IP1553_IER_OTF_Msk                    (_UINT32_(0x1) << IP1553_IER_OTF_Pos)                /* (IP1553_IER) OvInhibitTermFlagReq Mask */
#define IP1553_IER_OTF(value)                 (IP1553_IER_OTF_Msk & (_UINT32_(value) << IP1553_IER_OTF_Pos)) /* Assigment of value for OTF in the IP1553_IER register */
#define IP1553_IER_IPB_Pos                    _UINT32_(24)                                         /* (IP1553_IER) IPBusy Position */
#define IP1553_IER_IPB_Msk                    (_UINT32_(0x1) << IP1553_IER_IPB_Pos)                /* (IP1553_IER) IPBusy Mask */
#define IP1553_IER_IPB(value)                 (IP1553_IER_IPB_Msk & (_UINT32_(value) << IP1553_IER_IPB_Pos)) /* Assigment of value for IPB in the IP1553_IER register */
#define IP1553_IER_Msk                        _UINT32_(0x01FFFFFF)                                 /* (IP1553_IER) Register Mask  */


/* -------- IP1553_IDR : (IP1553 Offset: 0x24) ( /W 32) IRQ Mask Disable Register -------- */
#define IP1553_IDR_EMT_Pos                    _UINT32_(0)                                          /* (IP1553_IDR) EndMemTransfer Position */
#define IP1553_IDR_EMT_Msk                    (_UINT32_(0x1) << IP1553_IDR_EMT_Pos)                /* (IP1553_IDR) EndMemTransfer Mask */
#define IP1553_IDR_EMT(value)                 (IP1553_IDR_EMT_Msk & (_UINT32_(value) << IP1553_IDR_EMT_Pos)) /* Assigment of value for EMT in the IP1553_IDR register */
#define IP1553_IDR_MTE_Pos                    _UINT32_(1)                                          /* (IP1553_IDR) MemTransferErr Position */
#define IP1553_IDR_MTE_Msk                    (_UINT32_(0x1) << IP1553_IDR_MTE_Pos)                /* (IP1553_IDR) MemTransferErr Mask */
#define IP1553_IDR_MTE(value)                 (IP1553_IDR_MTE_Msk & (_UINT32_(value) << IP1553_IDR_MTE_Pos)) /* Assigment of value for MTE in the IP1553_IDR register */
#define IP1553_IDR_ERX_Pos                    _UINT32_(2)                                          /* (IP1553_IDR) End reception Position */
#define IP1553_IDR_ERX_Msk                    (_UINT32_(0x1) << IP1553_IDR_ERX_Pos)                /* (IP1553_IDR) End reception Mask */
#define IP1553_IDR_ERX(value)                 (IP1553_IDR_ERX_Msk & (_UINT32_(value) << IP1553_IDR_ERX_Pos)) /* Assigment of value for ERX in the IP1553_IDR register */
#define IP1553_IDR_ETX_Pos                    _UINT32_(3)                                          /* (IP1553_IDR) EndTransmission Position */
#define IP1553_IDR_ETX_Msk                    (_UINT32_(0x1) << IP1553_IDR_ETX_Pos)                /* (IP1553_IDR) EndTransmission Mask */
#define IP1553_IDR_ETX(value)                 (IP1553_IDR_ETX_Msk & (_UINT32_(value) << IP1553_IDR_ETX_Pos)) /* Assigment of value for ETX in the IP1553_IDR register */
#define IP1553_IDR_ETRANS_Pos                 _UINT32_(4)                                          /* (IP1553_IDR) EndTransfer Position */
#define IP1553_IDR_ETRANS_Msk                 (_UINT32_(0x3) << IP1553_IDR_ETRANS_Pos)             /* (IP1553_IDR) EndTransfer Mask */
#define IP1553_IDR_ETRANS(value)              (IP1553_IDR_ETRANS_Msk & (_UINT32_(value) << IP1553_IDR_ETRANS_Pos)) /* Assigment of value for ETRANS in the IP1553_IDR register */
#define IP1553_IDR_TE_Pos                     _UINT32_(6)                                          /* (IP1553_IDR) TransErr Position */
#define IP1553_IDR_TE_Msk                     (_UINT32_(0x1) << IP1553_IDR_TE_Pos)                 /* (IP1553_IDR) TransErr Mask */
#define IP1553_IDR_TE(value)                  (IP1553_IDR_TE_Msk & (_UINT32_(value) << IP1553_IDR_TE_Pos)) /* Assigment of value for TE in the IP1553_IDR register */
#define IP1553_IDR_TCE_Pos                    _UINT32_(7)                                          /* (IP1553_IDR) TransCodingErr Position */
#define IP1553_IDR_TCE_Msk                    (_UINT32_(0x1) << IP1553_IDR_TCE_Pos)                /* (IP1553_IDR) TransCodingErr Mask */
#define IP1553_IDR_TCE(value)                 (IP1553_IDR_TCE_Msk & (_UINT32_(value) << IP1553_IDR_TCE_Pos)) /* Assigment of value for TCE in the IP1553_IDR register */
#define IP1553_IDR_TPE_Pos                    _UINT32_(8)                                          /* (IP1553_IDR) TransParityErr Position */
#define IP1553_IDR_TPE_Msk                    (_UINT32_(0x1) << IP1553_IDR_TPE_Pos)                /* (IP1553_IDR) TransParityErr Mask */
#define IP1553_IDR_TPE(value)                 (IP1553_IDR_TPE_Msk & (_UINT32_(value) << IP1553_IDR_TPE_Pos)) /* Assigment of value for TPE in the IP1553_IDR register */
#define IP1553_IDR_TDE_Pos                    _UINT32_(9)                                          /* (IP1553_IDR) TransDataTypeErr Position */
#define IP1553_IDR_TDE_Msk                    (_UINT32_(0x1) << IP1553_IDR_TDE_Pos)                /* (IP1553_IDR) TransDataTypeErr Mask */
#define IP1553_IDR_TDE(value)                 (IP1553_IDR_TDE_Msk & (_UINT32_(value) << IP1553_IDR_TDE_Pos)) /* Assigment of value for TDE in the IP1553_IDR register */
#define IP1553_IDR_TTE_Pos                    _UINT32_(10)                                         /* (IP1553_IDR) TransTimeOutErr Position */
#define IP1553_IDR_TTE_Msk                    (_UINT32_(0x1) << IP1553_IDR_TTE_Pos)                /* (IP1553_IDR) TransTimeOutErr Mask */
#define IP1553_IDR_TTE(value)                 (IP1553_IDR_TTE_Msk & (_UINT32_(value) << IP1553_IDR_TTE_Pos)) /* Assigment of value for TTE in the IP1553_IDR register */
#define IP1553_IDR_TWE_Pos                    _UINT32_(11)                                         /* (IP1553_IDR) TransWordCounterErr Position */
#define IP1553_IDR_TWE_Msk                    (_UINT32_(0x1) << IP1553_IDR_TWE_Pos)                /* (IP1553_IDR) TransWordCounterErr Mask */
#define IP1553_IDR_TWE(value)                 (IP1553_IDR_TWE_Msk & (_UINT32_(value) << IP1553_IDR_TWE_Pos)) /* Assigment of value for TWE in the IP1553_IDR register */
#define IP1553_IDR_BE_Pos                     _UINT32_(12)                                         /* (IP1553_IDR) BufIFErr Position */
#define IP1553_IDR_BE_Msk                     (_UINT32_(0x1) << IP1553_IDR_BE_Pos)                 /* (IP1553_IDR) BufIFErr Mask */
#define IP1553_IDR_BE(value)                  (IP1553_IDR_BE_Msk & (_UINT32_(value) << IP1553_IDR_BE_Pos)) /* Assigment of value for BE in the IP1553_IDR register */
#define IP1553_IDR_ITR_Pos                    _UINT32_(13)                                         /* (IP1553_IDR) IllegalTransferReq Position */
#define IP1553_IDR_ITR_Msk                    (_UINT32_(0x1) << IP1553_IDR_ITR_Pos)                /* (IP1553_IDR) IllegalTransferReq Mask */
#define IP1553_IDR_ITR(value)                 (IP1553_IDR_ITR_Msk & (_UINT32_(value) << IP1553_IDR_ITR_Pos)) /* Assigment of value for ITR in the IP1553_IDR register */
#define IP1553_IDR_TVR_Pos                    _UINT32_(14)                                         /* (IP1553_IDR) TransVecWordReq Position */
#define IP1553_IDR_TVR_Msk                    (_UINT32_(0x1) << IP1553_IDR_TVR_Pos)                /* (IP1553_IDR) TransVecWordReq Mask */
#define IP1553_IDR_TVR(value)                 (IP1553_IDR_TVR_Msk & (_UINT32_(value) << IP1553_IDR_TVR_Pos)) /* Assigment of value for TVR in the IP1553_IDR register */
#define IP1553_IDR_DBR_Pos                    _UINT32_(15)                                         /* (IP1553_IDR) DynamicBusContReq Position */
#define IP1553_IDR_DBR_Msk                    (_UINT32_(0x1) << IP1553_IDR_DBR_Pos)                /* (IP1553_IDR) DynamicBusContReq Mask */
#define IP1553_IDR_DBR(value)                 (IP1553_IDR_DBR_Msk & (_UINT32_(value) << IP1553_IDR_DBR_Pos)) /* Assigment of value for DBR in the IP1553_IDR register */
#define IP1553_IDR_STR_Pos                    _UINT32_(16)                                         /* (IP1553_IDR) InitSelfTestReq Position */
#define IP1553_IDR_STR_Msk                    (_UINT32_(0x1) << IP1553_IDR_STR_Pos)                /* (IP1553_IDR) InitSelfTestReq Mask */
#define IP1553_IDR_STR(value)                 (IP1553_IDR_STR_Msk & (_UINT32_(value) << IP1553_IDR_STR_Pos)) /* Assigment of value for STR in the IP1553_IDR register */
#define IP1553_IDR_TSR_Pos                    _UINT32_(17)                                         /* (IP1553_IDR) TranShutdownReq Position */
#define IP1553_IDR_TSR_Msk                    (_UINT32_(0x1) << IP1553_IDR_TSR_Pos)                /* (IP1553_IDR) TranShutdownReq Mask */
#define IP1553_IDR_TSR(value)                 (IP1553_IDR_TSR_Msk & (_UINT32_(value) << IP1553_IDR_TSR_Pos)) /* Assigment of value for TSR in the IP1553_IDR register */
#define IP1553_IDR_OSR_Pos                    _UINT32_(18)                                         /* (IP1553_IDR) OvTranShutdownReq Position */
#define IP1553_IDR_OSR_Msk                    (_UINT32_(0x1) << IP1553_IDR_OSR_Pos)                /* (IP1553_IDR) OvTranShutdownReq Mask */
#define IP1553_IDR_OSR(value)                 (IP1553_IDR_OSR_Msk & (_UINT32_(value) << IP1553_IDR_OSR_Pos)) /* Assigment of value for OSR in the IP1553_IDR register */
#define IP1553_IDR_SDR_Pos                    _UINT32_(19)                                         /* (IP1553_IDR) SyncWithDataReq Position */
#define IP1553_IDR_SDR_Msk                    (_UINT32_(0x1) << IP1553_IDR_SDR_Pos)                /* (IP1553_IDR) SyncWithDataReq Mask */
#define IP1553_IDR_SDR(value)                 (IP1553_IDR_SDR_Msk & (_UINT32_(value) << IP1553_IDR_SDR_Pos)) /* Assigment of value for SDR in the IP1553_IDR register */
#define IP1553_IDR_SWD_Pos                    _UINT32_(20)                                         /* (IP1553_IDR) SyncWithoutDataReq Position */
#define IP1553_IDR_SWD_Msk                    (_UINT32_(0x1) << IP1553_IDR_SWD_Pos)                /* (IP1553_IDR) SyncWithoutDataReq Mask */
#define IP1553_IDR_SWD(value)                 (IP1553_IDR_SWD_Msk & (_UINT32_(value) << IP1553_IDR_SWD_Pos)) /* Assigment of value for SWD in the IP1553_IDR register */
#define IP1553_IDR_RRT_Pos                    _UINT32_(21)                                         /* (IP1553_IDR) ResetRTReq Position */
#define IP1553_IDR_RRT_Msk                    (_UINT32_(0x1) << IP1553_IDR_RRT_Pos)                /* (IP1553_IDR) ResetRTReq Mask */
#define IP1553_IDR_RRT(value)                 (IP1553_IDR_RRT_Msk & (_UINT32_(value) << IP1553_IDR_RRT_Pos)) /* Assigment of value for RRT in the IP1553_IDR register */
#define IP1553_IDR_ITF_Pos                    _UINT32_(22)                                         /* (IP1553_IDR) InhibitTermFlagReq Position */
#define IP1553_IDR_ITF_Msk                    (_UINT32_(0x1) << IP1553_IDR_ITF_Pos)                /* (IP1553_IDR) InhibitTermFlagReq Mask */
#define IP1553_IDR_ITF(value)                 (IP1553_IDR_ITF_Msk & (_UINT32_(value) << IP1553_IDR_ITF_Pos)) /* Assigment of value for ITF in the IP1553_IDR register */
#define IP1553_IDR_OTF_Pos                    _UINT32_(23)                                         /* (IP1553_IDR) OvInhibitTermFlagReq Position */
#define IP1553_IDR_OTF_Msk                    (_UINT32_(0x1) << IP1553_IDR_OTF_Pos)                /* (IP1553_IDR) OvInhibitTermFlagReq Mask */
#define IP1553_IDR_OTF(value)                 (IP1553_IDR_OTF_Msk & (_UINT32_(value) << IP1553_IDR_OTF_Pos)) /* Assigment of value for OTF in the IP1553_IDR register */
#define IP1553_IDR_IPB_Pos                    _UINT32_(24)                                         /* (IP1553_IDR) IPBusy Position */
#define IP1553_IDR_IPB_Msk                    (_UINT32_(0x1) << IP1553_IDR_IPB_Pos)                /* (IP1553_IDR) IPBusy Mask */
#define IP1553_IDR_IPB(value)                 (IP1553_IDR_IPB_Msk & (_UINT32_(value) << IP1553_IDR_IPB_Pos)) /* Assigment of value for IPB in the IP1553_IDR register */
#define IP1553_IDR_Msk                        _UINT32_(0x01FFFFFF)                                 /* (IP1553_IDR) Register Mask  */


/* -------- IP1553_IMR : (IP1553 Offset: 0x28) ( R/ 32) IRQ Mask Register -------- */
#define IP1553_IMR_EMT_Pos                    _UINT32_(0)                                          /* (IP1553_IMR) EndMemTransfer Position */
#define IP1553_IMR_EMT_Msk                    (_UINT32_(0x1) << IP1553_IMR_EMT_Pos)                /* (IP1553_IMR) EndMemTransfer Mask */
#define IP1553_IMR_EMT(value)                 (IP1553_IMR_EMT_Msk & (_UINT32_(value) << IP1553_IMR_EMT_Pos)) /* Assigment of value for EMT in the IP1553_IMR register */
#define IP1553_IMR_MTE_Pos                    _UINT32_(1)                                          /* (IP1553_IMR) MemTransferErr Position */
#define IP1553_IMR_MTE_Msk                    (_UINT32_(0x1) << IP1553_IMR_MTE_Pos)                /* (IP1553_IMR) MemTransferErr Mask */
#define IP1553_IMR_MTE(value)                 (IP1553_IMR_MTE_Msk & (_UINT32_(value) << IP1553_IMR_MTE_Pos)) /* Assigment of value for MTE in the IP1553_IMR register */
#define IP1553_IMR_ERX_Pos                    _UINT32_(2)                                          /* (IP1553_IMR) End reception Position */
#define IP1553_IMR_ERX_Msk                    (_UINT32_(0x1) << IP1553_IMR_ERX_Pos)                /* (IP1553_IMR) End reception Mask */
#define IP1553_IMR_ERX(value)                 (IP1553_IMR_ERX_Msk & (_UINT32_(value) << IP1553_IMR_ERX_Pos)) /* Assigment of value for ERX in the IP1553_IMR register */
#define IP1553_IMR_ETX_Pos                    _UINT32_(3)                                          /* (IP1553_IMR) EndTransmission Position */
#define IP1553_IMR_ETX_Msk                    (_UINT32_(0x1) << IP1553_IMR_ETX_Pos)                /* (IP1553_IMR) EndTransmission Mask */
#define IP1553_IMR_ETX(value)                 (IP1553_IMR_ETX_Msk & (_UINT32_(value) << IP1553_IMR_ETX_Pos)) /* Assigment of value for ETX in the IP1553_IMR register */
#define IP1553_IMR_ETRANS_Pos                 _UINT32_(4)                                          /* (IP1553_IMR) EndTransfer Position */
#define IP1553_IMR_ETRANS_Msk                 (_UINT32_(0x3) << IP1553_IMR_ETRANS_Pos)             /* (IP1553_IMR) EndTransfer Mask */
#define IP1553_IMR_ETRANS(value)              (IP1553_IMR_ETRANS_Msk & (_UINT32_(value) << IP1553_IMR_ETRANS_Pos)) /* Assigment of value for ETRANS in the IP1553_IMR register */
#define IP1553_IMR_TE_Pos                     _UINT32_(6)                                          /* (IP1553_IMR) TransErr Position */
#define IP1553_IMR_TE_Msk                     (_UINT32_(0x1) << IP1553_IMR_TE_Pos)                 /* (IP1553_IMR) TransErr Mask */
#define IP1553_IMR_TE(value)                  (IP1553_IMR_TE_Msk & (_UINT32_(value) << IP1553_IMR_TE_Pos)) /* Assigment of value for TE in the IP1553_IMR register */
#define IP1553_IMR_TCE_Pos                    _UINT32_(7)                                          /* (IP1553_IMR) TransCodingErr Position */
#define IP1553_IMR_TCE_Msk                    (_UINT32_(0x1) << IP1553_IMR_TCE_Pos)                /* (IP1553_IMR) TransCodingErr Mask */
#define IP1553_IMR_TCE(value)                 (IP1553_IMR_TCE_Msk & (_UINT32_(value) << IP1553_IMR_TCE_Pos)) /* Assigment of value for TCE in the IP1553_IMR register */
#define IP1553_IMR_TPE_Pos                    _UINT32_(8)                                          /* (IP1553_IMR) TransParityErr Position */
#define IP1553_IMR_TPE_Msk                    (_UINT32_(0x1) << IP1553_IMR_TPE_Pos)                /* (IP1553_IMR) TransParityErr Mask */
#define IP1553_IMR_TPE(value)                 (IP1553_IMR_TPE_Msk & (_UINT32_(value) << IP1553_IMR_TPE_Pos)) /* Assigment of value for TPE in the IP1553_IMR register */
#define IP1553_IMR_TDE_Pos                    _UINT32_(9)                                          /* (IP1553_IMR) TransDataTypeErr Position */
#define IP1553_IMR_TDE_Msk                    (_UINT32_(0x1) << IP1553_IMR_TDE_Pos)                /* (IP1553_IMR) TransDataTypeErr Mask */
#define IP1553_IMR_TDE(value)                 (IP1553_IMR_TDE_Msk & (_UINT32_(value) << IP1553_IMR_TDE_Pos)) /* Assigment of value for TDE in the IP1553_IMR register */
#define IP1553_IMR_TTE_Pos                    _UINT32_(10)                                         /* (IP1553_IMR) TransTimeOutErr Position */
#define IP1553_IMR_TTE_Msk                    (_UINT32_(0x1) << IP1553_IMR_TTE_Pos)                /* (IP1553_IMR) TransTimeOutErr Mask */
#define IP1553_IMR_TTE(value)                 (IP1553_IMR_TTE_Msk & (_UINT32_(value) << IP1553_IMR_TTE_Pos)) /* Assigment of value for TTE in the IP1553_IMR register */
#define IP1553_IMR_TWE_Pos                    _UINT32_(11)                                         /* (IP1553_IMR) TransWordCounterErr Position */
#define IP1553_IMR_TWE_Msk                    (_UINT32_(0x1) << IP1553_IMR_TWE_Pos)                /* (IP1553_IMR) TransWordCounterErr Mask */
#define IP1553_IMR_TWE(value)                 (IP1553_IMR_TWE_Msk & (_UINT32_(value) << IP1553_IMR_TWE_Pos)) /* Assigment of value for TWE in the IP1553_IMR register */
#define IP1553_IMR_BE_Pos                     _UINT32_(12)                                         /* (IP1553_IMR) BufIFErr Position */
#define IP1553_IMR_BE_Msk                     (_UINT32_(0x1) << IP1553_IMR_BE_Pos)                 /* (IP1553_IMR) BufIFErr Mask */
#define IP1553_IMR_BE(value)                  (IP1553_IMR_BE_Msk & (_UINT32_(value) << IP1553_IMR_BE_Pos)) /* Assigment of value for BE in the IP1553_IMR register */
#define IP1553_IMR_ITR_Pos                    _UINT32_(13)                                         /* (IP1553_IMR) IllegalTransferReq Position */
#define IP1553_IMR_ITR_Msk                    (_UINT32_(0x1) << IP1553_IMR_ITR_Pos)                /* (IP1553_IMR) IllegalTransferReq Mask */
#define IP1553_IMR_ITR(value)                 (IP1553_IMR_ITR_Msk & (_UINT32_(value) << IP1553_IMR_ITR_Pos)) /* Assigment of value for ITR in the IP1553_IMR register */
#define IP1553_IMR_TVR_Pos                    _UINT32_(14)                                         /* (IP1553_IMR) TransVecWordReq Position */
#define IP1553_IMR_TVR_Msk                    (_UINT32_(0x1) << IP1553_IMR_TVR_Pos)                /* (IP1553_IMR) TransVecWordReq Mask */
#define IP1553_IMR_TVR(value)                 (IP1553_IMR_TVR_Msk & (_UINT32_(value) << IP1553_IMR_TVR_Pos)) /* Assigment of value for TVR in the IP1553_IMR register */
#define IP1553_IMR_DBR_Pos                    _UINT32_(15)                                         /* (IP1553_IMR) DynamicBusContReq Position */
#define IP1553_IMR_DBR_Msk                    (_UINT32_(0x1) << IP1553_IMR_DBR_Pos)                /* (IP1553_IMR) DynamicBusContReq Mask */
#define IP1553_IMR_DBR(value)                 (IP1553_IMR_DBR_Msk & (_UINT32_(value) << IP1553_IMR_DBR_Pos)) /* Assigment of value for DBR in the IP1553_IMR register */
#define IP1553_IMR_STR_Pos                    _UINT32_(16)                                         /* (IP1553_IMR) InitSelfTestReq Position */
#define IP1553_IMR_STR_Msk                    (_UINT32_(0x1) << IP1553_IMR_STR_Pos)                /* (IP1553_IMR) InitSelfTestReq Mask */
#define IP1553_IMR_STR(value)                 (IP1553_IMR_STR_Msk & (_UINT32_(value) << IP1553_IMR_STR_Pos)) /* Assigment of value for STR in the IP1553_IMR register */
#define IP1553_IMR_TSR_Pos                    _UINT32_(17)                                         /* (IP1553_IMR) TranShutdownReq Position */
#define IP1553_IMR_TSR_Msk                    (_UINT32_(0x1) << IP1553_IMR_TSR_Pos)                /* (IP1553_IMR) TranShutdownReq Mask */
#define IP1553_IMR_TSR(value)                 (IP1553_IMR_TSR_Msk & (_UINT32_(value) << IP1553_IMR_TSR_Pos)) /* Assigment of value for TSR in the IP1553_IMR register */
#define IP1553_IMR_OSR_Pos                    _UINT32_(18)                                         /* (IP1553_IMR) OvTranShutdownReq Position */
#define IP1553_IMR_OSR_Msk                    (_UINT32_(0x1) << IP1553_IMR_OSR_Pos)                /* (IP1553_IMR) OvTranShutdownReq Mask */
#define IP1553_IMR_OSR(value)                 (IP1553_IMR_OSR_Msk & (_UINT32_(value) << IP1553_IMR_OSR_Pos)) /* Assigment of value for OSR in the IP1553_IMR register */
#define IP1553_IMR_SDR_Pos                    _UINT32_(19)                                         /* (IP1553_IMR) SyncWithDataReq Position */
#define IP1553_IMR_SDR_Msk                    (_UINT32_(0x1) << IP1553_IMR_SDR_Pos)                /* (IP1553_IMR) SyncWithDataReq Mask */
#define IP1553_IMR_SDR(value)                 (IP1553_IMR_SDR_Msk & (_UINT32_(value) << IP1553_IMR_SDR_Pos)) /* Assigment of value for SDR in the IP1553_IMR register */
#define IP1553_IMR_SWD_Pos                    _UINT32_(20)                                         /* (IP1553_IMR) SyncWithoutDataReq Position */
#define IP1553_IMR_SWD_Msk                    (_UINT32_(0x1) << IP1553_IMR_SWD_Pos)                /* (IP1553_IMR) SyncWithoutDataReq Mask */
#define IP1553_IMR_SWD(value)                 (IP1553_IMR_SWD_Msk & (_UINT32_(value) << IP1553_IMR_SWD_Pos)) /* Assigment of value for SWD in the IP1553_IMR register */
#define IP1553_IMR_RRT_Pos                    _UINT32_(21)                                         /* (IP1553_IMR) ResetRTReq Position */
#define IP1553_IMR_RRT_Msk                    (_UINT32_(0x1) << IP1553_IMR_RRT_Pos)                /* (IP1553_IMR) ResetRTReq Mask */
#define IP1553_IMR_RRT(value)                 (IP1553_IMR_RRT_Msk & (_UINT32_(value) << IP1553_IMR_RRT_Pos)) /* Assigment of value for RRT in the IP1553_IMR register */
#define IP1553_IMR_ITF_Pos                    _UINT32_(22)                                         /* (IP1553_IMR) InhibitTermFlagReq Position */
#define IP1553_IMR_ITF_Msk                    (_UINT32_(0x1) << IP1553_IMR_ITF_Pos)                /* (IP1553_IMR) InhibitTermFlagReq Mask */
#define IP1553_IMR_ITF(value)                 (IP1553_IMR_ITF_Msk & (_UINT32_(value) << IP1553_IMR_ITF_Pos)) /* Assigment of value for ITF in the IP1553_IMR register */
#define IP1553_IMR_OTF_Pos                    _UINT32_(23)                                         /* (IP1553_IMR) OvInhibitTermFlagReq Position */
#define IP1553_IMR_OTF_Msk                    (_UINT32_(0x1) << IP1553_IMR_OTF_Pos)                /* (IP1553_IMR) OvInhibitTermFlagReq Mask */
#define IP1553_IMR_OTF(value)                 (IP1553_IMR_OTF_Msk & (_UINT32_(value) << IP1553_IMR_OTF_Pos)) /* Assigment of value for OTF in the IP1553_IMR register */
#define IP1553_IMR_IPB_Pos                    _UINT32_(24)                                         /* (IP1553_IMR) IPBusy Position */
#define IP1553_IMR_IPB_Msk                    (_UINT32_(0x1) << IP1553_IMR_IPB_Pos)                /* (IP1553_IMR) IPBusy Mask */
#define IP1553_IMR_IPB(value)                 (IP1553_IMR_IPB_Msk & (_UINT32_(value) << IP1553_IMR_IPB_Pos)) /* Assigment of value for IPB in the IP1553_IMR register */
#define IP1553_IMR_Msk                        _UINT32_(0x01FFFFFF)                                 /* (IP1553_IMR) Register Mask  */


/* -------- IP1553_ISR : (IP1553 Offset: 0x2C) ( R/ 32) IRQ Status Register -------- */
#define IP1553_ISR_EMT_Pos                    _UINT32_(0)                                          /* (IP1553_ISR) EndMemTransfer Position */
#define IP1553_ISR_EMT_Msk                    (_UINT32_(0x1) << IP1553_ISR_EMT_Pos)                /* (IP1553_ISR) EndMemTransfer Mask */
#define IP1553_ISR_EMT(value)                 (IP1553_ISR_EMT_Msk & (_UINT32_(value) << IP1553_ISR_EMT_Pos)) /* Assigment of value for EMT in the IP1553_ISR register */
#define IP1553_ISR_MTE_Pos                    _UINT32_(1)                                          /* (IP1553_ISR) MemTransferErr Position */
#define IP1553_ISR_MTE_Msk                    (_UINT32_(0x1) << IP1553_ISR_MTE_Pos)                /* (IP1553_ISR) MemTransferErr Mask */
#define IP1553_ISR_MTE(value)                 (IP1553_ISR_MTE_Msk & (_UINT32_(value) << IP1553_ISR_MTE_Pos)) /* Assigment of value for MTE in the IP1553_ISR register */
#define IP1553_ISR_ERX_Pos                    _UINT32_(2)                                          /* (IP1553_ISR) End reception Position */
#define IP1553_ISR_ERX_Msk                    (_UINT32_(0x1) << IP1553_ISR_ERX_Pos)                /* (IP1553_ISR) End reception Mask */
#define IP1553_ISR_ERX(value)                 (IP1553_ISR_ERX_Msk & (_UINT32_(value) << IP1553_ISR_ERX_Pos)) /* Assigment of value for ERX in the IP1553_ISR register */
#define IP1553_ISR_ETX_Pos                    _UINT32_(3)                                          /* (IP1553_ISR) EndTransmission Position */
#define IP1553_ISR_ETX_Msk                    (_UINT32_(0x1) << IP1553_ISR_ETX_Pos)                /* (IP1553_ISR) EndTransmission Mask */
#define IP1553_ISR_ETX(value)                 (IP1553_ISR_ETX_Msk & (_UINT32_(value) << IP1553_ISR_ETX_Pos)) /* Assigment of value for ETX in the IP1553_ISR register */
#define IP1553_ISR_ETRANS_Pos                 _UINT32_(4)                                          /* (IP1553_ISR) EndTransfer Position */
#define IP1553_ISR_ETRANS_Msk                 (_UINT32_(0x3) << IP1553_ISR_ETRANS_Pos)             /* (IP1553_ISR) EndTransfer Mask */
#define IP1553_ISR_ETRANS(value)              (IP1553_ISR_ETRANS_Msk & (_UINT32_(value) << IP1553_ISR_ETRANS_Pos)) /* Assigment of value for ETRANS in the IP1553_ISR register */
#define IP1553_ISR_TE_Pos                     _UINT32_(6)                                          /* (IP1553_ISR) TransErr Position */
#define IP1553_ISR_TE_Msk                     (_UINT32_(0x1) << IP1553_ISR_TE_Pos)                 /* (IP1553_ISR) TransErr Mask */
#define IP1553_ISR_TE(value)                  (IP1553_ISR_TE_Msk & (_UINT32_(value) << IP1553_ISR_TE_Pos)) /* Assigment of value for TE in the IP1553_ISR register */
#define IP1553_ISR_TCE_Pos                    _UINT32_(7)                                          /* (IP1553_ISR) TransCodingErr Position */
#define IP1553_ISR_TCE_Msk                    (_UINT32_(0x1) << IP1553_ISR_TCE_Pos)                /* (IP1553_ISR) TransCodingErr Mask */
#define IP1553_ISR_TCE(value)                 (IP1553_ISR_TCE_Msk & (_UINT32_(value) << IP1553_ISR_TCE_Pos)) /* Assigment of value for TCE in the IP1553_ISR register */
#define IP1553_ISR_TPE_Pos                    _UINT32_(8)                                          /* (IP1553_ISR) TransParityErr Position */
#define IP1553_ISR_TPE_Msk                    (_UINT32_(0x1) << IP1553_ISR_TPE_Pos)                /* (IP1553_ISR) TransParityErr Mask */
#define IP1553_ISR_TPE(value)                 (IP1553_ISR_TPE_Msk & (_UINT32_(value) << IP1553_ISR_TPE_Pos)) /* Assigment of value for TPE in the IP1553_ISR register */
#define IP1553_ISR_TDE_Pos                    _UINT32_(9)                                          /* (IP1553_ISR) TransDataTypeErr Position */
#define IP1553_ISR_TDE_Msk                    (_UINT32_(0x1) << IP1553_ISR_TDE_Pos)                /* (IP1553_ISR) TransDataTypeErr Mask */
#define IP1553_ISR_TDE(value)                 (IP1553_ISR_TDE_Msk & (_UINT32_(value) << IP1553_ISR_TDE_Pos)) /* Assigment of value for TDE in the IP1553_ISR register */
#define IP1553_ISR_TTE_Pos                    _UINT32_(10)                                         /* (IP1553_ISR) TransTimeOutErr Position */
#define IP1553_ISR_TTE_Msk                    (_UINT32_(0x1) << IP1553_ISR_TTE_Pos)                /* (IP1553_ISR) TransTimeOutErr Mask */
#define IP1553_ISR_TTE(value)                 (IP1553_ISR_TTE_Msk & (_UINT32_(value) << IP1553_ISR_TTE_Pos)) /* Assigment of value for TTE in the IP1553_ISR register */
#define IP1553_ISR_TWE_Pos                    _UINT32_(11)                                         /* (IP1553_ISR) TransWordCounterErr Position */
#define IP1553_ISR_TWE_Msk                    (_UINT32_(0x1) << IP1553_ISR_TWE_Pos)                /* (IP1553_ISR) TransWordCounterErr Mask */
#define IP1553_ISR_TWE(value)                 (IP1553_ISR_TWE_Msk & (_UINT32_(value) << IP1553_ISR_TWE_Pos)) /* Assigment of value for TWE in the IP1553_ISR register */
#define IP1553_ISR_BE_Pos                     _UINT32_(12)                                         /* (IP1553_ISR) BufIFErr Position */
#define IP1553_ISR_BE_Msk                     (_UINT32_(0x1) << IP1553_ISR_BE_Pos)                 /* (IP1553_ISR) BufIFErr Mask */
#define IP1553_ISR_BE(value)                  (IP1553_ISR_BE_Msk & (_UINT32_(value) << IP1553_ISR_BE_Pos)) /* Assigment of value for BE in the IP1553_ISR register */
#define IP1553_ISR_ITR_Pos                    _UINT32_(13)                                         /* (IP1553_ISR) IllegalTransferReq Position */
#define IP1553_ISR_ITR_Msk                    (_UINT32_(0x1) << IP1553_ISR_ITR_Pos)                /* (IP1553_ISR) IllegalTransferReq Mask */
#define IP1553_ISR_ITR(value)                 (IP1553_ISR_ITR_Msk & (_UINT32_(value) << IP1553_ISR_ITR_Pos)) /* Assigment of value for ITR in the IP1553_ISR register */
#define IP1553_ISR_TVR_Pos                    _UINT32_(14)                                         /* (IP1553_ISR) TransVecWordReq Position */
#define IP1553_ISR_TVR_Msk                    (_UINT32_(0x1) << IP1553_ISR_TVR_Pos)                /* (IP1553_ISR) TransVecWordReq Mask */
#define IP1553_ISR_TVR(value)                 (IP1553_ISR_TVR_Msk & (_UINT32_(value) << IP1553_ISR_TVR_Pos)) /* Assigment of value for TVR in the IP1553_ISR register */
#define IP1553_ISR_DBR_Pos                    _UINT32_(15)                                         /* (IP1553_ISR) DynamicBusContReq Position */
#define IP1553_ISR_DBR_Msk                    (_UINT32_(0x1) << IP1553_ISR_DBR_Pos)                /* (IP1553_ISR) DynamicBusContReq Mask */
#define IP1553_ISR_DBR(value)                 (IP1553_ISR_DBR_Msk & (_UINT32_(value) << IP1553_ISR_DBR_Pos)) /* Assigment of value for DBR in the IP1553_ISR register */
#define IP1553_ISR_STR_Pos                    _UINT32_(16)                                         /* (IP1553_ISR) InitSelfTestReq Position */
#define IP1553_ISR_STR_Msk                    (_UINT32_(0x1) << IP1553_ISR_STR_Pos)                /* (IP1553_ISR) InitSelfTestReq Mask */
#define IP1553_ISR_STR(value)                 (IP1553_ISR_STR_Msk & (_UINT32_(value) << IP1553_ISR_STR_Pos)) /* Assigment of value for STR in the IP1553_ISR register */
#define IP1553_ISR_TSR_Pos                    _UINT32_(17)                                         /* (IP1553_ISR) TranShutdownReq Position */
#define IP1553_ISR_TSR_Msk                    (_UINT32_(0x1) << IP1553_ISR_TSR_Pos)                /* (IP1553_ISR) TranShutdownReq Mask */
#define IP1553_ISR_TSR(value)                 (IP1553_ISR_TSR_Msk & (_UINT32_(value) << IP1553_ISR_TSR_Pos)) /* Assigment of value for TSR in the IP1553_ISR register */
#define IP1553_ISR_OSR_Pos                    _UINT32_(18)                                         /* (IP1553_ISR) OvTranShutdownReq Position */
#define IP1553_ISR_OSR_Msk                    (_UINT32_(0x1) << IP1553_ISR_OSR_Pos)                /* (IP1553_ISR) OvTranShutdownReq Mask */
#define IP1553_ISR_OSR(value)                 (IP1553_ISR_OSR_Msk & (_UINT32_(value) << IP1553_ISR_OSR_Pos)) /* Assigment of value for OSR in the IP1553_ISR register */
#define IP1553_ISR_SDR_Pos                    _UINT32_(19)                                         /* (IP1553_ISR) SyncWithDataReq Position */
#define IP1553_ISR_SDR_Msk                    (_UINT32_(0x1) << IP1553_ISR_SDR_Pos)                /* (IP1553_ISR) SyncWithDataReq Mask */
#define IP1553_ISR_SDR(value)                 (IP1553_ISR_SDR_Msk & (_UINT32_(value) << IP1553_ISR_SDR_Pos)) /* Assigment of value for SDR in the IP1553_ISR register */
#define IP1553_ISR_SWD_Pos                    _UINT32_(20)                                         /* (IP1553_ISR) SyncWithoutDataReq Position */
#define IP1553_ISR_SWD_Msk                    (_UINT32_(0x1) << IP1553_ISR_SWD_Pos)                /* (IP1553_ISR) SyncWithoutDataReq Mask */
#define IP1553_ISR_SWD(value)                 (IP1553_ISR_SWD_Msk & (_UINT32_(value) << IP1553_ISR_SWD_Pos)) /* Assigment of value for SWD in the IP1553_ISR register */
#define IP1553_ISR_RRT_Pos                    _UINT32_(21)                                         /* (IP1553_ISR) ResetRTReq Position */
#define IP1553_ISR_RRT_Msk                    (_UINT32_(0x1) << IP1553_ISR_RRT_Pos)                /* (IP1553_ISR) ResetRTReq Mask */
#define IP1553_ISR_RRT(value)                 (IP1553_ISR_RRT_Msk & (_UINT32_(value) << IP1553_ISR_RRT_Pos)) /* Assigment of value for RRT in the IP1553_ISR register */
#define IP1553_ISR_ITF_Pos                    _UINT32_(22)                                         /* (IP1553_ISR) InhibitTermFlagReq Position */
#define IP1553_ISR_ITF_Msk                    (_UINT32_(0x1) << IP1553_ISR_ITF_Pos)                /* (IP1553_ISR) InhibitTermFlagReq Mask */
#define IP1553_ISR_ITF(value)                 (IP1553_ISR_ITF_Msk & (_UINT32_(value) << IP1553_ISR_ITF_Pos)) /* Assigment of value for ITF in the IP1553_ISR register */
#define IP1553_ISR_OTF_Pos                    _UINT32_(23)                                         /* (IP1553_ISR) OvInhibitTermFlagReq Position */
#define IP1553_ISR_OTF_Msk                    (_UINT32_(0x1) << IP1553_ISR_OTF_Pos)                /* (IP1553_ISR) OvInhibitTermFlagReq Mask */
#define IP1553_ISR_OTF(value)                 (IP1553_ISR_OTF_Msk & (_UINT32_(value) << IP1553_ISR_OTF_Pos)) /* Assigment of value for OTF in the IP1553_ISR register */
#define IP1553_ISR_IPB_Pos                    _UINT32_(24)                                         /* (IP1553_ISR) IPBusy Position */
#define IP1553_ISR_IPB_Msk                    (_UINT32_(0x1) << IP1553_ISR_IPB_Pos)                /* (IP1553_ISR) IPBusy Mask */
#define IP1553_ISR_IPB(value)                 (IP1553_ISR_IPB_Msk & (_UINT32_(value) << IP1553_ISR_IPB_Pos)) /* Assigment of value for IPB in the IP1553_ISR register */
#define IP1553_ISR_Msk                        _UINT32_(0x01FFFFFF)                                 /* (IP1553_ISR) Register Mask  */


/* -------- IP1553_CTRL1 : (IP1553 Offset: 0x30) ( R/ 32) Control Register 1 -------- */
#define IP1553_CTRL1_IP1553DATA1_Pos          _UINT32_(0)                                          /* (IP1553_CTRL1) IP1553 data value 1 Position */
#define IP1553_CTRL1_IP1553DATA1_Msk          (_UINT32_(0xFFFF) << IP1553_CTRL1_IP1553DATA1_Pos)   /* (IP1553_CTRL1) IP1553 data value 1 Mask */
#define IP1553_CTRL1_IP1553DATA1(value)       (IP1553_CTRL1_IP1553DATA1_Msk & (_UINT32_(value) << IP1553_CTRL1_IP1553DATA1_Pos)) /* Assigment of value for IP1553DATA1 in the IP1553_CTRL1 register */
#define IP1553_CTRL1_IP1553DATA2_Pos          _UINT32_(16)                                         /* (IP1553_CTRL1) IP1553 data value 2 Position */
#define IP1553_CTRL1_IP1553DATA2_Msk          (_UINT32_(0xFFFF) << IP1553_CTRL1_IP1553DATA2_Pos)   /* (IP1553_CTRL1) IP1553 data value 2 Mask */
#define IP1553_CTRL1_IP1553DATA2(value)       (IP1553_CTRL1_IP1553DATA2_Msk & (_UINT32_(value) << IP1553_CTRL1_IP1553DATA2_Pos)) /* Assigment of value for IP1553DATA2 in the IP1553_CTRL1 register */
#define IP1553_CTRL1_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (IP1553_CTRL1) Register Mask  */


/* -------- IP1553_CTRL2 : (IP1553 Offset: 0x34) ( R/ 32) Control Register 2 -------- */
#define IP1553_CTRL2_FROMCOMMANDREG_Pos       _UINT32_(0)                                          /* (IP1553_CTRL2) from command register Position */
#define IP1553_CTRL2_FROMCOMMANDREG_Msk       (_UINT32_(0xF) << IP1553_CTRL2_FROMCOMMANDREG_Pos)   /* (IP1553_CTRL2) from command register Mask */
#define IP1553_CTRL2_FROMCOMMANDREG(value)    (IP1553_CTRL2_FROMCOMMANDREG_Msk & (_UINT32_(value) << IP1553_CTRL2_FROMCOMMANDREG_Pos)) /* Assigment of value for FROMCOMMANDREG in the IP1553_CTRL2 register */
#define IP1553_CTRL2_FROMVECTORWORD_Pos       _UINT32_(4)                                          /* (IP1553_CTRL2) from vector register Position */
#define IP1553_CTRL2_FROMVECTORWORD_Msk       (_UINT32_(0xFFFF) << IP1553_CTRL2_FROMVECTORWORD_Pos) /* (IP1553_CTRL2) from vector register Mask */
#define IP1553_CTRL2_FROMVECTORWORD(value)    (IP1553_CTRL2_FROMVECTORWORD_Msk & (_UINT32_(value) << IP1553_CTRL2_FROMVECTORWORD_Pos)) /* Assigment of value for FROMVECTORWORD in the IP1553_CTRL2 register */
#define IP1553_CTRL2_Msk                      _UINT32_(0x000FFFFF)                                 /* (IP1553_CTRL2) Register Mask  */


/* -------- IP1553_CTRL3 : (IP1553 Offset: 0x38) ( R/ 32) Control Register 3 -------- */
#define IP1553_CTRL3_FROMSTATUSWORD_Pos       _UINT32_(0)                                          /* (IP1553_CTRL3) content of status word register Position */
#define IP1553_CTRL3_FROMSTATUSWORD_Msk       (_UINT32_(0xFFFF) << IP1553_CTRL3_FROMSTATUSWORD_Pos) /* (IP1553_CTRL3) content of status word register Mask */
#define IP1553_CTRL3_FROMSTATUSWORD(value)    (IP1553_CTRL3_FROMSTATUSWORD_Msk & (_UINT32_(value) << IP1553_CTRL3_FROMSTATUSWORD_Pos)) /* Assigment of value for FROMSTATUSWORD in the IP1553_CTRL3 register */
#define IP1553_CTRL3_FROMBITWORD_Pos          _UINT32_(16)                                         /* (IP1553_CTRL3) content of bit word register Position */
#define IP1553_CTRL3_FROMBITWORD_Msk          (_UINT32_(0xFFFF) << IP1553_CTRL3_FROMBITWORD_Pos)   /* (IP1553_CTRL3) content of bit word register Mask */
#define IP1553_CTRL3_FROMBITWORD(value)       (IP1553_CTRL3_FROMBITWORD_Msk & (_UINT32_(value) << IP1553_CTRL3_FROMBITWORD_Pos)) /* Assigment of value for FROMBITWORD in the IP1553_CTRL3 register */
#define IP1553_CTRL3_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (IP1553_CTRL3) Register Mask  */


/* -------- IP1553_ARW : (IP1553 Offset: 0x3C) (R/W 32) Address Register Write -------- */
#define IP1553_ARW_REG_ADDR_APB_W_Pos         _UINT32_(0)                                          /* (IP1553_ARW) TX base address Position */
#define IP1553_ARW_REG_ADDR_APB_W_Msk         (_UINT32_(0xFFFFFFFF) << IP1553_ARW_REG_ADDR_APB_W_Pos) /* (IP1553_ARW) TX base address Mask */
#define IP1553_ARW_REG_ADDR_APB_W(value)      (IP1553_ARW_REG_ADDR_APB_W_Msk & (_UINT32_(value) << IP1553_ARW_REG_ADDR_APB_W_Pos)) /* Assigment of value for REG_ADDR_APB_W in the IP1553_ARW register */
#define IP1553_ARW_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (IP1553_ARW) Register Mask  */


/* -------- IP1553_ARR : (IP1553 Offset: 0x40) (R/W 32) Address Register Read -------- */
#define IP1553_ARR_REG_ADDR_APB_R_Pos         _UINT32_(0)                                          /* (IP1553_ARR) RX base address Position */
#define IP1553_ARR_REG_ADDR_APB_R_Msk         (_UINT32_(0xFFFFFFFF) << IP1553_ARR_REG_ADDR_APB_R_Pos) /* (IP1553_ARR) RX base address Mask */
#define IP1553_ARR_REG_ADDR_APB_R(value)      (IP1553_ARR_REG_ADDR_APB_R_Msk & (_UINT32_(value) << IP1553_ARR_REG_ADDR_APB_R_Pos)) /* Assigment of value for REG_ADDR_APB_R in the IP1553_ARR register */
#define IP1553_ARR_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (IP1553_ARR) Register Mask  */


/* -------- IP1553_RXBSR : (IP1553 Offset: 0x44) (R/W 32) Rx Buffer Status Register -------- */
#define IP1553_RXBSR_RE0_Pos                  _UINT32_(0)                                          /* (IP1553_RXBSR) Receive Buffer, 0 with x=[0-31] Position */
#define IP1553_RXBSR_RE0_Msk                  (_UINT32_(0x1) << IP1553_RXBSR_RE0_Pos)              /* (IP1553_RXBSR) Receive Buffer, 0 with x=[0-31] Mask */
#define IP1553_RXBSR_RE0(value)               (IP1553_RXBSR_RE0_Msk & (_UINT32_(value) << IP1553_RXBSR_RE0_Pos)) /* Assigment of value for RE0 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE1_Pos                  _UINT32_(1)                                          /* (IP1553_RXBSR) Receive Buffer, 1 with x=[0-31] Position */
#define IP1553_RXBSR_RE1_Msk                  (_UINT32_(0x1) << IP1553_RXBSR_RE1_Pos)              /* (IP1553_RXBSR) Receive Buffer, 1 with x=[0-31] Mask */
#define IP1553_RXBSR_RE1(value)               (IP1553_RXBSR_RE1_Msk & (_UINT32_(value) << IP1553_RXBSR_RE1_Pos)) /* Assigment of value for RE1 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE2_Pos                  _UINT32_(2)                                          /* (IP1553_RXBSR) Receive Buffer, 2 with x=[0-31] Position */
#define IP1553_RXBSR_RE2_Msk                  (_UINT32_(0x1) << IP1553_RXBSR_RE2_Pos)              /* (IP1553_RXBSR) Receive Buffer, 2 with x=[0-31] Mask */
#define IP1553_RXBSR_RE2(value)               (IP1553_RXBSR_RE2_Msk & (_UINT32_(value) << IP1553_RXBSR_RE2_Pos)) /* Assigment of value for RE2 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE3_Pos                  _UINT32_(3)                                          /* (IP1553_RXBSR) Receive Buffer, 3 with x=[0-31] Position */
#define IP1553_RXBSR_RE3_Msk                  (_UINT32_(0x1) << IP1553_RXBSR_RE3_Pos)              /* (IP1553_RXBSR) Receive Buffer, 3 with x=[0-31] Mask */
#define IP1553_RXBSR_RE3(value)               (IP1553_RXBSR_RE3_Msk & (_UINT32_(value) << IP1553_RXBSR_RE3_Pos)) /* Assigment of value for RE3 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE4_Pos                  _UINT32_(4)                                          /* (IP1553_RXBSR) Receive Buffer, 4 with x=[0-31] Position */
#define IP1553_RXBSR_RE4_Msk                  (_UINT32_(0x1) << IP1553_RXBSR_RE4_Pos)              /* (IP1553_RXBSR) Receive Buffer, 4 with x=[0-31] Mask */
#define IP1553_RXBSR_RE4(value)               (IP1553_RXBSR_RE4_Msk & (_UINT32_(value) << IP1553_RXBSR_RE4_Pos)) /* Assigment of value for RE4 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE5_Pos                  _UINT32_(5)                                          /* (IP1553_RXBSR) Receive Buffer, 5 with x=[0-31] Position */
#define IP1553_RXBSR_RE5_Msk                  (_UINT32_(0x1) << IP1553_RXBSR_RE5_Pos)              /* (IP1553_RXBSR) Receive Buffer, 5 with x=[0-31] Mask */
#define IP1553_RXBSR_RE5(value)               (IP1553_RXBSR_RE5_Msk & (_UINT32_(value) << IP1553_RXBSR_RE5_Pos)) /* Assigment of value for RE5 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE6_Pos                  _UINT32_(6)                                          /* (IP1553_RXBSR) Receive Buffer, 6 with x=[0-31] Position */
#define IP1553_RXBSR_RE6_Msk                  (_UINT32_(0x1) << IP1553_RXBSR_RE6_Pos)              /* (IP1553_RXBSR) Receive Buffer, 6 with x=[0-31] Mask */
#define IP1553_RXBSR_RE6(value)               (IP1553_RXBSR_RE6_Msk & (_UINT32_(value) << IP1553_RXBSR_RE6_Pos)) /* Assigment of value for RE6 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE7_Pos                  _UINT32_(7)                                          /* (IP1553_RXBSR) Receive Buffer, 7 with x=[0-31] Position */
#define IP1553_RXBSR_RE7_Msk                  (_UINT32_(0x1) << IP1553_RXBSR_RE7_Pos)              /* (IP1553_RXBSR) Receive Buffer, 7 with x=[0-31] Mask */
#define IP1553_RXBSR_RE7(value)               (IP1553_RXBSR_RE7_Msk & (_UINT32_(value) << IP1553_RXBSR_RE7_Pos)) /* Assigment of value for RE7 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE8_Pos                  _UINT32_(8)                                          /* (IP1553_RXBSR) Receive Buffer, 8 with x=[0-31] Position */
#define IP1553_RXBSR_RE8_Msk                  (_UINT32_(0x1) << IP1553_RXBSR_RE8_Pos)              /* (IP1553_RXBSR) Receive Buffer, 8 with x=[0-31] Mask */
#define IP1553_RXBSR_RE8(value)               (IP1553_RXBSR_RE8_Msk & (_UINT32_(value) << IP1553_RXBSR_RE8_Pos)) /* Assigment of value for RE8 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE9_Pos                  _UINT32_(9)                                          /* (IP1553_RXBSR) Receive Buffer, 9 with x=[0-31] Position */
#define IP1553_RXBSR_RE9_Msk                  (_UINT32_(0x1) << IP1553_RXBSR_RE9_Pos)              /* (IP1553_RXBSR) Receive Buffer, 9 with x=[0-31] Mask */
#define IP1553_RXBSR_RE9(value)               (IP1553_RXBSR_RE9_Msk & (_UINT32_(value) << IP1553_RXBSR_RE9_Pos)) /* Assigment of value for RE9 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE10_Pos                 _UINT32_(10)                                         /* (IP1553_RXBSR) Receive Buffer, 10 with x=[0-31] Position */
#define IP1553_RXBSR_RE10_Msk                 (_UINT32_(0x1) << IP1553_RXBSR_RE10_Pos)             /* (IP1553_RXBSR) Receive Buffer, 10 with x=[0-31] Mask */
#define IP1553_RXBSR_RE10(value)              (IP1553_RXBSR_RE10_Msk & (_UINT32_(value) << IP1553_RXBSR_RE10_Pos)) /* Assigment of value for RE10 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE11_Pos                 _UINT32_(11)                                         /* (IP1553_RXBSR) Receive Buffer, 11 with x=[0-31] Position */
#define IP1553_RXBSR_RE11_Msk                 (_UINT32_(0x1) << IP1553_RXBSR_RE11_Pos)             /* (IP1553_RXBSR) Receive Buffer, 11 with x=[0-31] Mask */
#define IP1553_RXBSR_RE11(value)              (IP1553_RXBSR_RE11_Msk & (_UINT32_(value) << IP1553_RXBSR_RE11_Pos)) /* Assigment of value for RE11 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE12_Pos                 _UINT32_(12)                                         /* (IP1553_RXBSR) Receive Buffer, 12 with x=[0-31] Position */
#define IP1553_RXBSR_RE12_Msk                 (_UINT32_(0x1) << IP1553_RXBSR_RE12_Pos)             /* (IP1553_RXBSR) Receive Buffer, 12 with x=[0-31] Mask */
#define IP1553_RXBSR_RE12(value)              (IP1553_RXBSR_RE12_Msk & (_UINT32_(value) << IP1553_RXBSR_RE12_Pos)) /* Assigment of value for RE12 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE13_Pos                 _UINT32_(13)                                         /* (IP1553_RXBSR) Receive Buffer, 13 with x=[0-31] Position */
#define IP1553_RXBSR_RE13_Msk                 (_UINT32_(0x1) << IP1553_RXBSR_RE13_Pos)             /* (IP1553_RXBSR) Receive Buffer, 13 with x=[0-31] Mask */
#define IP1553_RXBSR_RE13(value)              (IP1553_RXBSR_RE13_Msk & (_UINT32_(value) << IP1553_RXBSR_RE13_Pos)) /* Assigment of value for RE13 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE14_Pos                 _UINT32_(14)                                         /* (IP1553_RXBSR) Receive Buffer, 14 with x=[0-31] Position */
#define IP1553_RXBSR_RE14_Msk                 (_UINT32_(0x1) << IP1553_RXBSR_RE14_Pos)             /* (IP1553_RXBSR) Receive Buffer, 14 with x=[0-31] Mask */
#define IP1553_RXBSR_RE14(value)              (IP1553_RXBSR_RE14_Msk & (_UINT32_(value) << IP1553_RXBSR_RE14_Pos)) /* Assigment of value for RE14 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE15_Pos                 _UINT32_(15)                                         /* (IP1553_RXBSR) Receive Buffer, 15 with x=[0-31] Position */
#define IP1553_RXBSR_RE15_Msk                 (_UINT32_(0x1) << IP1553_RXBSR_RE15_Pos)             /* (IP1553_RXBSR) Receive Buffer, 15 with x=[0-31] Mask */
#define IP1553_RXBSR_RE15(value)              (IP1553_RXBSR_RE15_Msk & (_UINT32_(value) << IP1553_RXBSR_RE15_Pos)) /* Assigment of value for RE15 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE16_Pos                 _UINT32_(16)                                         /* (IP1553_RXBSR) Receive Buffer, 16 with x=[0-31] Position */
#define IP1553_RXBSR_RE16_Msk                 (_UINT32_(0x1) << IP1553_RXBSR_RE16_Pos)             /* (IP1553_RXBSR) Receive Buffer, 16 with x=[0-31] Mask */
#define IP1553_RXBSR_RE16(value)              (IP1553_RXBSR_RE16_Msk & (_UINT32_(value) << IP1553_RXBSR_RE16_Pos)) /* Assigment of value for RE16 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE17_Pos                 _UINT32_(17)                                         /* (IP1553_RXBSR) Receive Buffer, 17 with x=[0-31] Position */
#define IP1553_RXBSR_RE17_Msk                 (_UINT32_(0x1) << IP1553_RXBSR_RE17_Pos)             /* (IP1553_RXBSR) Receive Buffer, 17 with x=[0-31] Mask */
#define IP1553_RXBSR_RE17(value)              (IP1553_RXBSR_RE17_Msk & (_UINT32_(value) << IP1553_RXBSR_RE17_Pos)) /* Assigment of value for RE17 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE18_Pos                 _UINT32_(18)                                         /* (IP1553_RXBSR) Receive Buffer, 18 with x=[0-31] Position */
#define IP1553_RXBSR_RE18_Msk                 (_UINT32_(0x1) << IP1553_RXBSR_RE18_Pos)             /* (IP1553_RXBSR) Receive Buffer, 18 with x=[0-31] Mask */
#define IP1553_RXBSR_RE18(value)              (IP1553_RXBSR_RE18_Msk & (_UINT32_(value) << IP1553_RXBSR_RE18_Pos)) /* Assigment of value for RE18 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE19_Pos                 _UINT32_(19)                                         /* (IP1553_RXBSR) Receive Buffer, 19 with x=[0-31] Position */
#define IP1553_RXBSR_RE19_Msk                 (_UINT32_(0x1) << IP1553_RXBSR_RE19_Pos)             /* (IP1553_RXBSR) Receive Buffer, 19 with x=[0-31] Mask */
#define IP1553_RXBSR_RE19(value)              (IP1553_RXBSR_RE19_Msk & (_UINT32_(value) << IP1553_RXBSR_RE19_Pos)) /* Assigment of value for RE19 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE20_Pos                 _UINT32_(20)                                         /* (IP1553_RXBSR) Receive Buffer, 20 with x=[0-31] Position */
#define IP1553_RXBSR_RE20_Msk                 (_UINT32_(0x1) << IP1553_RXBSR_RE20_Pos)             /* (IP1553_RXBSR) Receive Buffer, 20 with x=[0-31] Mask */
#define IP1553_RXBSR_RE20(value)              (IP1553_RXBSR_RE20_Msk & (_UINT32_(value) << IP1553_RXBSR_RE20_Pos)) /* Assigment of value for RE20 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE21_Pos                 _UINT32_(21)                                         /* (IP1553_RXBSR) Receive Buffer, 21 with x=[0-31] Position */
#define IP1553_RXBSR_RE21_Msk                 (_UINT32_(0x1) << IP1553_RXBSR_RE21_Pos)             /* (IP1553_RXBSR) Receive Buffer, 21 with x=[0-31] Mask */
#define IP1553_RXBSR_RE21(value)              (IP1553_RXBSR_RE21_Msk & (_UINT32_(value) << IP1553_RXBSR_RE21_Pos)) /* Assigment of value for RE21 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE22_Pos                 _UINT32_(22)                                         /* (IP1553_RXBSR) Receive Buffer, 22 with x=[0-31] Position */
#define IP1553_RXBSR_RE22_Msk                 (_UINT32_(0x1) << IP1553_RXBSR_RE22_Pos)             /* (IP1553_RXBSR) Receive Buffer, 22 with x=[0-31] Mask */
#define IP1553_RXBSR_RE22(value)              (IP1553_RXBSR_RE22_Msk & (_UINT32_(value) << IP1553_RXBSR_RE22_Pos)) /* Assigment of value for RE22 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE23_Pos                 _UINT32_(23)                                         /* (IP1553_RXBSR) Receive Buffer, 23 with x=[0-31] Position */
#define IP1553_RXBSR_RE23_Msk                 (_UINT32_(0x1) << IP1553_RXBSR_RE23_Pos)             /* (IP1553_RXBSR) Receive Buffer, 23 with x=[0-31] Mask */
#define IP1553_RXBSR_RE23(value)              (IP1553_RXBSR_RE23_Msk & (_UINT32_(value) << IP1553_RXBSR_RE23_Pos)) /* Assigment of value for RE23 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE24_Pos                 _UINT32_(24)                                         /* (IP1553_RXBSR) Receive Buffer, 24 with x=[0-31] Position */
#define IP1553_RXBSR_RE24_Msk                 (_UINT32_(0x1) << IP1553_RXBSR_RE24_Pos)             /* (IP1553_RXBSR) Receive Buffer, 24 with x=[0-31] Mask */
#define IP1553_RXBSR_RE24(value)              (IP1553_RXBSR_RE24_Msk & (_UINT32_(value) << IP1553_RXBSR_RE24_Pos)) /* Assigment of value for RE24 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE25_Pos                 _UINT32_(25)                                         /* (IP1553_RXBSR) Receive Buffer, 25 with x=[0-31] Position */
#define IP1553_RXBSR_RE25_Msk                 (_UINT32_(0x1) << IP1553_RXBSR_RE25_Pos)             /* (IP1553_RXBSR) Receive Buffer, 25 with x=[0-31] Mask */
#define IP1553_RXBSR_RE25(value)              (IP1553_RXBSR_RE25_Msk & (_UINT32_(value) << IP1553_RXBSR_RE25_Pos)) /* Assigment of value for RE25 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE26_Pos                 _UINT32_(26)                                         /* (IP1553_RXBSR) Receive Buffer, 26 with x=[0-31] Position */
#define IP1553_RXBSR_RE26_Msk                 (_UINT32_(0x1) << IP1553_RXBSR_RE26_Pos)             /* (IP1553_RXBSR) Receive Buffer, 26 with x=[0-31] Mask */
#define IP1553_RXBSR_RE26(value)              (IP1553_RXBSR_RE26_Msk & (_UINT32_(value) << IP1553_RXBSR_RE26_Pos)) /* Assigment of value for RE26 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE27_Pos                 _UINT32_(27)                                         /* (IP1553_RXBSR) Receive Buffer, 27 with x=[0-31] Position */
#define IP1553_RXBSR_RE27_Msk                 (_UINT32_(0x1) << IP1553_RXBSR_RE27_Pos)             /* (IP1553_RXBSR) Receive Buffer, 27 with x=[0-31] Mask */
#define IP1553_RXBSR_RE27(value)              (IP1553_RXBSR_RE27_Msk & (_UINT32_(value) << IP1553_RXBSR_RE27_Pos)) /* Assigment of value for RE27 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE28_Pos                 _UINT32_(28)                                         /* (IP1553_RXBSR) Receive Buffer, 28 with x=[0-31] Position */
#define IP1553_RXBSR_RE28_Msk                 (_UINT32_(0x1) << IP1553_RXBSR_RE28_Pos)             /* (IP1553_RXBSR) Receive Buffer, 28 with x=[0-31] Mask */
#define IP1553_RXBSR_RE28(value)              (IP1553_RXBSR_RE28_Msk & (_UINT32_(value) << IP1553_RXBSR_RE28_Pos)) /* Assigment of value for RE28 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE29_Pos                 _UINT32_(29)                                         /* (IP1553_RXBSR) Receive Buffer, 29 with x=[0-31] Position */
#define IP1553_RXBSR_RE29_Msk                 (_UINT32_(0x1) << IP1553_RXBSR_RE29_Pos)             /* (IP1553_RXBSR) Receive Buffer, 29 with x=[0-31] Mask */
#define IP1553_RXBSR_RE29(value)              (IP1553_RXBSR_RE29_Msk & (_UINT32_(value) << IP1553_RXBSR_RE29_Pos)) /* Assigment of value for RE29 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE30_Pos                 _UINT32_(30)                                         /* (IP1553_RXBSR) Receive Buffer, 30 with x=[0-31] Position */
#define IP1553_RXBSR_RE30_Msk                 (_UINT32_(0x1) << IP1553_RXBSR_RE30_Pos)             /* (IP1553_RXBSR) Receive Buffer, 30 with x=[0-31] Mask */
#define IP1553_RXBSR_RE30(value)              (IP1553_RXBSR_RE30_Msk & (_UINT32_(value) << IP1553_RXBSR_RE30_Pos)) /* Assigment of value for RE30 in the IP1553_RXBSR register */
#define IP1553_RXBSR_RE31_Pos                 _UINT32_(31)                                         /* (IP1553_RXBSR) Receive Buffer, 31 with x=[0-31] Position */
#define IP1553_RXBSR_RE31_Msk                 (_UINT32_(0x1) << IP1553_RXBSR_RE31_Pos)             /* (IP1553_RXBSR) Receive Buffer, 31 with x=[0-31] Mask */
#define IP1553_RXBSR_RE31(value)              (IP1553_RXBSR_RE31_Msk & (_UINT32_(value) << IP1553_RXBSR_RE31_Pos)) /* Assigment of value for RE31 in the IP1553_RXBSR register */
#define IP1553_RXBSR_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (IP1553_RXBSR) Register Mask  */

#define IP1553_RXBSR_RE_Pos                   _UINT32_(0)                                          /* (IP1553_RXBSR Position) Receive Buffer, 3x with x=[x-3x] */
#define IP1553_RXBSR_RE_Msk                   (_UINT32_(0xFFFFFFFF) << IP1553_RXBSR_RE_Pos)        /* (IP1553_RXBSR Mask) RE */
#define IP1553_RXBSR_RE(value)                (IP1553_RXBSR_RE_Msk & (_UINT32_(value) << IP1553_RXBSR_RE_Pos)) 

/* -------- IP1553_RXBAER : (IP1553 Offset: 0x48) (R/W 32) Rx Buffer Access Error Register -------- */
#define IP1553_RXBAER_RER0_Pos                _UINT32_(0)                                          /* (IP1553_RXBAER) Receive error 0, x with x=[0-31] Position */
#define IP1553_RXBAER_RER0_Msk                (_UINT32_(0x1) << IP1553_RXBAER_RER0_Pos)            /* (IP1553_RXBAER) Receive error 0, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER0(value)             (IP1553_RXBAER_RER0_Msk & (_UINT32_(value) << IP1553_RXBAER_RER0_Pos)) /* Assigment of value for RER0 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER1_Pos                _UINT32_(1)                                          /* (IP1553_RXBAER) Receive error 1, x with x=[0-31] Position */
#define IP1553_RXBAER_RER1_Msk                (_UINT32_(0x1) << IP1553_RXBAER_RER1_Pos)            /* (IP1553_RXBAER) Receive error 1, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER1(value)             (IP1553_RXBAER_RER1_Msk & (_UINT32_(value) << IP1553_RXBAER_RER1_Pos)) /* Assigment of value for RER1 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER2_Pos                _UINT32_(2)                                          /* (IP1553_RXBAER) Receive error 2, x with x=[0-31] Position */
#define IP1553_RXBAER_RER2_Msk                (_UINT32_(0x1) << IP1553_RXBAER_RER2_Pos)            /* (IP1553_RXBAER) Receive error 2, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER2(value)             (IP1553_RXBAER_RER2_Msk & (_UINT32_(value) << IP1553_RXBAER_RER2_Pos)) /* Assigment of value for RER2 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER3_Pos                _UINT32_(3)                                          /* (IP1553_RXBAER) Receive error 3, x with x=[0-31] Position */
#define IP1553_RXBAER_RER3_Msk                (_UINT32_(0x1) << IP1553_RXBAER_RER3_Pos)            /* (IP1553_RXBAER) Receive error 3, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER3(value)             (IP1553_RXBAER_RER3_Msk & (_UINT32_(value) << IP1553_RXBAER_RER3_Pos)) /* Assigment of value for RER3 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER4_Pos                _UINT32_(4)                                          /* (IP1553_RXBAER) Receive error 4, x with x=[0-31] Position */
#define IP1553_RXBAER_RER4_Msk                (_UINT32_(0x1) << IP1553_RXBAER_RER4_Pos)            /* (IP1553_RXBAER) Receive error 4, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER4(value)             (IP1553_RXBAER_RER4_Msk & (_UINT32_(value) << IP1553_RXBAER_RER4_Pos)) /* Assigment of value for RER4 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER5_Pos                _UINT32_(5)                                          /* (IP1553_RXBAER) Receive error 5, x with x=[0-31] Position */
#define IP1553_RXBAER_RER5_Msk                (_UINT32_(0x1) << IP1553_RXBAER_RER5_Pos)            /* (IP1553_RXBAER) Receive error 5, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER5(value)             (IP1553_RXBAER_RER5_Msk & (_UINT32_(value) << IP1553_RXBAER_RER5_Pos)) /* Assigment of value for RER5 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER6_Pos                _UINT32_(6)                                          /* (IP1553_RXBAER) Receive error 6, x with x=[0-31] Position */
#define IP1553_RXBAER_RER6_Msk                (_UINT32_(0x1) << IP1553_RXBAER_RER6_Pos)            /* (IP1553_RXBAER) Receive error 6, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER6(value)             (IP1553_RXBAER_RER6_Msk & (_UINT32_(value) << IP1553_RXBAER_RER6_Pos)) /* Assigment of value for RER6 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER7_Pos                _UINT32_(7)                                          /* (IP1553_RXBAER) Receive error 7, x with x=[0-31] Position */
#define IP1553_RXBAER_RER7_Msk                (_UINT32_(0x1) << IP1553_RXBAER_RER7_Pos)            /* (IP1553_RXBAER) Receive error 7, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER7(value)             (IP1553_RXBAER_RER7_Msk & (_UINT32_(value) << IP1553_RXBAER_RER7_Pos)) /* Assigment of value for RER7 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER8_Pos                _UINT32_(8)                                          /* (IP1553_RXBAER) Receive error 8, x with x=[0-31] Position */
#define IP1553_RXBAER_RER8_Msk                (_UINT32_(0x1) << IP1553_RXBAER_RER8_Pos)            /* (IP1553_RXBAER) Receive error 8, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER8(value)             (IP1553_RXBAER_RER8_Msk & (_UINT32_(value) << IP1553_RXBAER_RER8_Pos)) /* Assigment of value for RER8 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER9_Pos                _UINT32_(9)                                          /* (IP1553_RXBAER) Receive error 9, x with x=[0-31] Position */
#define IP1553_RXBAER_RER9_Msk                (_UINT32_(0x1) << IP1553_RXBAER_RER9_Pos)            /* (IP1553_RXBAER) Receive error 9, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER9(value)             (IP1553_RXBAER_RER9_Msk & (_UINT32_(value) << IP1553_RXBAER_RER9_Pos)) /* Assigment of value for RER9 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER10_Pos               _UINT32_(10)                                         /* (IP1553_RXBAER) Receive error 10, x with x=[0-31] Position */
#define IP1553_RXBAER_RER10_Msk               (_UINT32_(0x1) << IP1553_RXBAER_RER10_Pos)           /* (IP1553_RXBAER) Receive error 10, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER10(value)            (IP1553_RXBAER_RER10_Msk & (_UINT32_(value) << IP1553_RXBAER_RER10_Pos)) /* Assigment of value for RER10 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER11_Pos               _UINT32_(11)                                         /* (IP1553_RXBAER) Receive error 11, x with x=[0-31] Position */
#define IP1553_RXBAER_RER11_Msk               (_UINT32_(0x1) << IP1553_RXBAER_RER11_Pos)           /* (IP1553_RXBAER) Receive error 11, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER11(value)            (IP1553_RXBAER_RER11_Msk & (_UINT32_(value) << IP1553_RXBAER_RER11_Pos)) /* Assigment of value for RER11 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER12_Pos               _UINT32_(12)                                         /* (IP1553_RXBAER) Receive error 12, x with x=[0-31] Position */
#define IP1553_RXBAER_RER12_Msk               (_UINT32_(0x1) << IP1553_RXBAER_RER12_Pos)           /* (IP1553_RXBAER) Receive error 12, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER12(value)            (IP1553_RXBAER_RER12_Msk & (_UINT32_(value) << IP1553_RXBAER_RER12_Pos)) /* Assigment of value for RER12 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER13_Pos               _UINT32_(13)                                         /* (IP1553_RXBAER) Receive error 13, x with x=[0-31] Position */
#define IP1553_RXBAER_RER13_Msk               (_UINT32_(0x1) << IP1553_RXBAER_RER13_Pos)           /* (IP1553_RXBAER) Receive error 13, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER13(value)            (IP1553_RXBAER_RER13_Msk & (_UINT32_(value) << IP1553_RXBAER_RER13_Pos)) /* Assigment of value for RER13 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER14_Pos               _UINT32_(14)                                         /* (IP1553_RXBAER) Receive error 14, x with x=[0-31] Position */
#define IP1553_RXBAER_RER14_Msk               (_UINT32_(0x1) << IP1553_RXBAER_RER14_Pos)           /* (IP1553_RXBAER) Receive error 14, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER14(value)            (IP1553_RXBAER_RER14_Msk & (_UINT32_(value) << IP1553_RXBAER_RER14_Pos)) /* Assigment of value for RER14 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER15_Pos               _UINT32_(15)                                         /* (IP1553_RXBAER) Receive error 15, x with x=[0-31] Position */
#define IP1553_RXBAER_RER15_Msk               (_UINT32_(0x1) << IP1553_RXBAER_RER15_Pos)           /* (IP1553_RXBAER) Receive error 15, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER15(value)            (IP1553_RXBAER_RER15_Msk & (_UINT32_(value) << IP1553_RXBAER_RER15_Pos)) /* Assigment of value for RER15 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER16_Pos               _UINT32_(16)                                         /* (IP1553_RXBAER) Receive error 16, x with x=[0-31] Position */
#define IP1553_RXBAER_RER16_Msk               (_UINT32_(0x1) << IP1553_RXBAER_RER16_Pos)           /* (IP1553_RXBAER) Receive error 16, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER16(value)            (IP1553_RXBAER_RER16_Msk & (_UINT32_(value) << IP1553_RXBAER_RER16_Pos)) /* Assigment of value for RER16 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER17_Pos               _UINT32_(17)                                         /* (IP1553_RXBAER) Receive error 17, x with x=[0-31] Position */
#define IP1553_RXBAER_RER17_Msk               (_UINT32_(0x1) << IP1553_RXBAER_RER17_Pos)           /* (IP1553_RXBAER) Receive error 17, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER17(value)            (IP1553_RXBAER_RER17_Msk & (_UINT32_(value) << IP1553_RXBAER_RER17_Pos)) /* Assigment of value for RER17 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER18_Pos               _UINT32_(18)                                         /* (IP1553_RXBAER) Receive error 18, x with x=[0-31] Position */
#define IP1553_RXBAER_RER18_Msk               (_UINT32_(0x1) << IP1553_RXBAER_RER18_Pos)           /* (IP1553_RXBAER) Receive error 18, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER18(value)            (IP1553_RXBAER_RER18_Msk & (_UINT32_(value) << IP1553_RXBAER_RER18_Pos)) /* Assigment of value for RER18 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER19_Pos               _UINT32_(19)                                         /* (IP1553_RXBAER) Receive error 19, x with x=[0-31] Position */
#define IP1553_RXBAER_RER19_Msk               (_UINT32_(0x1) << IP1553_RXBAER_RER19_Pos)           /* (IP1553_RXBAER) Receive error 19, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER19(value)            (IP1553_RXBAER_RER19_Msk & (_UINT32_(value) << IP1553_RXBAER_RER19_Pos)) /* Assigment of value for RER19 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER20_Pos               _UINT32_(20)                                         /* (IP1553_RXBAER) Receive error 20, x with x=[0-31] Position */
#define IP1553_RXBAER_RER20_Msk               (_UINT32_(0x1) << IP1553_RXBAER_RER20_Pos)           /* (IP1553_RXBAER) Receive error 20, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER20(value)            (IP1553_RXBAER_RER20_Msk & (_UINT32_(value) << IP1553_RXBAER_RER20_Pos)) /* Assigment of value for RER20 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER21_Pos               _UINT32_(21)                                         /* (IP1553_RXBAER) Receive error 21, x with x=[0-31] Position */
#define IP1553_RXBAER_RER21_Msk               (_UINT32_(0x1) << IP1553_RXBAER_RER21_Pos)           /* (IP1553_RXBAER) Receive error 21, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER21(value)            (IP1553_RXBAER_RER21_Msk & (_UINT32_(value) << IP1553_RXBAER_RER21_Pos)) /* Assigment of value for RER21 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER22_Pos               _UINT32_(22)                                         /* (IP1553_RXBAER) Receive error 22, x with x=[0-31] Position */
#define IP1553_RXBAER_RER22_Msk               (_UINT32_(0x1) << IP1553_RXBAER_RER22_Pos)           /* (IP1553_RXBAER) Receive error 22, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER22(value)            (IP1553_RXBAER_RER22_Msk & (_UINT32_(value) << IP1553_RXBAER_RER22_Pos)) /* Assigment of value for RER22 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER23_Pos               _UINT32_(23)                                         /* (IP1553_RXBAER) Receive error 23, x with x=[0-31] Position */
#define IP1553_RXBAER_RER23_Msk               (_UINT32_(0x1) << IP1553_RXBAER_RER23_Pos)           /* (IP1553_RXBAER) Receive error 23, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER23(value)            (IP1553_RXBAER_RER23_Msk & (_UINT32_(value) << IP1553_RXBAER_RER23_Pos)) /* Assigment of value for RER23 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER24_Pos               _UINT32_(24)                                         /* (IP1553_RXBAER) Receive error 24, x with x=[0-31] Position */
#define IP1553_RXBAER_RER24_Msk               (_UINT32_(0x1) << IP1553_RXBAER_RER24_Pos)           /* (IP1553_RXBAER) Receive error 24, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER24(value)            (IP1553_RXBAER_RER24_Msk & (_UINT32_(value) << IP1553_RXBAER_RER24_Pos)) /* Assigment of value for RER24 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER25_Pos               _UINT32_(25)                                         /* (IP1553_RXBAER) Receive error 25, x with x=[0-31] Position */
#define IP1553_RXBAER_RER25_Msk               (_UINT32_(0x1) << IP1553_RXBAER_RER25_Pos)           /* (IP1553_RXBAER) Receive error 25, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER25(value)            (IP1553_RXBAER_RER25_Msk & (_UINT32_(value) << IP1553_RXBAER_RER25_Pos)) /* Assigment of value for RER25 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER26_Pos               _UINT32_(26)                                         /* (IP1553_RXBAER) Receive error 26, x with x=[0-31] Position */
#define IP1553_RXBAER_RER26_Msk               (_UINT32_(0x1) << IP1553_RXBAER_RER26_Pos)           /* (IP1553_RXBAER) Receive error 26, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER26(value)            (IP1553_RXBAER_RER26_Msk & (_UINT32_(value) << IP1553_RXBAER_RER26_Pos)) /* Assigment of value for RER26 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER27_Pos               _UINT32_(27)                                         /* (IP1553_RXBAER) Receive error 27, x with x=[0-31] Position */
#define IP1553_RXBAER_RER27_Msk               (_UINT32_(0x1) << IP1553_RXBAER_RER27_Pos)           /* (IP1553_RXBAER) Receive error 27, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER27(value)            (IP1553_RXBAER_RER27_Msk & (_UINT32_(value) << IP1553_RXBAER_RER27_Pos)) /* Assigment of value for RER27 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER28_Pos               _UINT32_(28)                                         /* (IP1553_RXBAER) Receive error 28, x with x=[0-31] Position */
#define IP1553_RXBAER_RER28_Msk               (_UINT32_(0x1) << IP1553_RXBAER_RER28_Pos)           /* (IP1553_RXBAER) Receive error 28, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER28(value)            (IP1553_RXBAER_RER28_Msk & (_UINT32_(value) << IP1553_RXBAER_RER28_Pos)) /* Assigment of value for RER28 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER29_Pos               _UINT32_(29)                                         /* (IP1553_RXBAER) Receive error 29, x with x=[0-31] Position */
#define IP1553_RXBAER_RER29_Msk               (_UINT32_(0x1) << IP1553_RXBAER_RER29_Pos)           /* (IP1553_RXBAER) Receive error 29, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER29(value)            (IP1553_RXBAER_RER29_Msk & (_UINT32_(value) << IP1553_RXBAER_RER29_Pos)) /* Assigment of value for RER29 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER30_Pos               _UINT32_(30)                                         /* (IP1553_RXBAER) Receive error 30, x with x=[0-31] Position */
#define IP1553_RXBAER_RER30_Msk               (_UINT32_(0x1) << IP1553_RXBAER_RER30_Pos)           /* (IP1553_RXBAER) Receive error 30, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER30(value)            (IP1553_RXBAER_RER30_Msk & (_UINT32_(value) << IP1553_RXBAER_RER30_Pos)) /* Assigment of value for RER30 in the IP1553_RXBAER register */
#define IP1553_RXBAER_RER31_Pos               _UINT32_(31)                                         /* (IP1553_RXBAER) Receive error 31, x with x=[0-31] Position */
#define IP1553_RXBAER_RER31_Msk               (_UINT32_(0x1) << IP1553_RXBAER_RER31_Pos)           /* (IP1553_RXBAER) Receive error 31, x with x=[0-31] Mask */
#define IP1553_RXBAER_RER31(value)            (IP1553_RXBAER_RER31_Msk & (_UINT32_(value) << IP1553_RXBAER_RER31_Pos)) /* Assigment of value for RER31 in the IP1553_RXBAER register */
#define IP1553_RXBAER_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (IP1553_RXBAER) Register Mask  */

#define IP1553_RXBAER_RER_Pos                 _UINT32_(0)                                          /* (IP1553_RXBAER Position) Receive error 3x, x with x=[x-3x] */
#define IP1553_RXBAER_RER_Msk                 (_UINT32_(0xFFFFFFFF) << IP1553_RXBAER_RER_Pos)      /* (IP1553_RXBAER Mask) RER */
#define IP1553_RXBAER_RER(value)              (IP1553_RXBAER_RER_Msk & (_UINT32_(value) << IP1553_RXBAER_RER_Pos)) 

/* -------- IP1553_TXBSR : (IP1553 Offset: 0x4C) (R/W 32) Tx Buffer Status Register -------- */
#define IP1553_TXBSR_TF0_Pos                  _UINT32_(0)                                          /* (IP1553_TXBSR) Transmit buffer 0, x with x=[0-31] Position */
#define IP1553_TXBSR_TF0_Msk                  (_UINT32_(0x1) << IP1553_TXBSR_TF0_Pos)              /* (IP1553_TXBSR) Transmit buffer 0, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF0(value)               (IP1553_TXBSR_TF0_Msk & (_UINT32_(value) << IP1553_TXBSR_TF0_Pos)) /* Assigment of value for TF0 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF1_Pos                  _UINT32_(1)                                          /* (IP1553_TXBSR) Transmit buffer 1, x with x=[0-31] Position */
#define IP1553_TXBSR_TF1_Msk                  (_UINT32_(0x1) << IP1553_TXBSR_TF1_Pos)              /* (IP1553_TXBSR) Transmit buffer 1, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF1(value)               (IP1553_TXBSR_TF1_Msk & (_UINT32_(value) << IP1553_TXBSR_TF1_Pos)) /* Assigment of value for TF1 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF2_Pos                  _UINT32_(2)                                          /* (IP1553_TXBSR) Transmit buffer 2, x with x=[0-31] Position */
#define IP1553_TXBSR_TF2_Msk                  (_UINT32_(0x1) << IP1553_TXBSR_TF2_Pos)              /* (IP1553_TXBSR) Transmit buffer 2, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF2(value)               (IP1553_TXBSR_TF2_Msk & (_UINT32_(value) << IP1553_TXBSR_TF2_Pos)) /* Assigment of value for TF2 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF3_Pos                  _UINT32_(3)                                          /* (IP1553_TXBSR) Transmit buffer 3, x with x=[0-31] Position */
#define IP1553_TXBSR_TF3_Msk                  (_UINT32_(0x1) << IP1553_TXBSR_TF3_Pos)              /* (IP1553_TXBSR) Transmit buffer 3, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF3(value)               (IP1553_TXBSR_TF3_Msk & (_UINT32_(value) << IP1553_TXBSR_TF3_Pos)) /* Assigment of value for TF3 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF4_Pos                  _UINT32_(4)                                          /* (IP1553_TXBSR) Transmit buffer 4, x with x=[0-31] Position */
#define IP1553_TXBSR_TF4_Msk                  (_UINT32_(0x1) << IP1553_TXBSR_TF4_Pos)              /* (IP1553_TXBSR) Transmit buffer 4, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF4(value)               (IP1553_TXBSR_TF4_Msk & (_UINT32_(value) << IP1553_TXBSR_TF4_Pos)) /* Assigment of value for TF4 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF5_Pos                  _UINT32_(5)                                          /* (IP1553_TXBSR) Transmit buffer 5, x with x=[0-31] Position */
#define IP1553_TXBSR_TF5_Msk                  (_UINT32_(0x1) << IP1553_TXBSR_TF5_Pos)              /* (IP1553_TXBSR) Transmit buffer 5, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF5(value)               (IP1553_TXBSR_TF5_Msk & (_UINT32_(value) << IP1553_TXBSR_TF5_Pos)) /* Assigment of value for TF5 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF6_Pos                  _UINT32_(6)                                          /* (IP1553_TXBSR) Transmit buffer 6, x with x=[0-31] Position */
#define IP1553_TXBSR_TF6_Msk                  (_UINT32_(0x1) << IP1553_TXBSR_TF6_Pos)              /* (IP1553_TXBSR) Transmit buffer 6, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF6(value)               (IP1553_TXBSR_TF6_Msk & (_UINT32_(value) << IP1553_TXBSR_TF6_Pos)) /* Assigment of value for TF6 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF7_Pos                  _UINT32_(7)                                          /* (IP1553_TXBSR) Transmit buffer 7, x with x=[0-31] Position */
#define IP1553_TXBSR_TF7_Msk                  (_UINT32_(0x1) << IP1553_TXBSR_TF7_Pos)              /* (IP1553_TXBSR) Transmit buffer 7, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF7(value)               (IP1553_TXBSR_TF7_Msk & (_UINT32_(value) << IP1553_TXBSR_TF7_Pos)) /* Assigment of value for TF7 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF8_Pos                  _UINT32_(8)                                          /* (IP1553_TXBSR) Transmit buffer 8, x with x=[0-31] Position */
#define IP1553_TXBSR_TF8_Msk                  (_UINT32_(0x1) << IP1553_TXBSR_TF8_Pos)              /* (IP1553_TXBSR) Transmit buffer 8, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF8(value)               (IP1553_TXBSR_TF8_Msk & (_UINT32_(value) << IP1553_TXBSR_TF8_Pos)) /* Assigment of value for TF8 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF9_Pos                  _UINT32_(9)                                          /* (IP1553_TXBSR) Transmit buffer 9, x with x=[0-31] Position */
#define IP1553_TXBSR_TF9_Msk                  (_UINT32_(0x1) << IP1553_TXBSR_TF9_Pos)              /* (IP1553_TXBSR) Transmit buffer 9, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF9(value)               (IP1553_TXBSR_TF9_Msk & (_UINT32_(value) << IP1553_TXBSR_TF9_Pos)) /* Assigment of value for TF9 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF10_Pos                 _UINT32_(10)                                         /* (IP1553_TXBSR) Transmit buffer 10, x with x=[0-31] Position */
#define IP1553_TXBSR_TF10_Msk                 (_UINT32_(0x1) << IP1553_TXBSR_TF10_Pos)             /* (IP1553_TXBSR) Transmit buffer 10, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF10(value)              (IP1553_TXBSR_TF10_Msk & (_UINT32_(value) << IP1553_TXBSR_TF10_Pos)) /* Assigment of value for TF10 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF11_Pos                 _UINT32_(11)                                         /* (IP1553_TXBSR) Transmit buffer 11, x with x=[0-31] Position */
#define IP1553_TXBSR_TF11_Msk                 (_UINT32_(0x1) << IP1553_TXBSR_TF11_Pos)             /* (IP1553_TXBSR) Transmit buffer 11, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF11(value)              (IP1553_TXBSR_TF11_Msk & (_UINT32_(value) << IP1553_TXBSR_TF11_Pos)) /* Assigment of value for TF11 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF12_Pos                 _UINT32_(12)                                         /* (IP1553_TXBSR) Transmit buffer 12, x with x=[0-31] Position */
#define IP1553_TXBSR_TF12_Msk                 (_UINT32_(0x1) << IP1553_TXBSR_TF12_Pos)             /* (IP1553_TXBSR) Transmit buffer 12, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF12(value)              (IP1553_TXBSR_TF12_Msk & (_UINT32_(value) << IP1553_TXBSR_TF12_Pos)) /* Assigment of value for TF12 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF13_Pos                 _UINT32_(13)                                         /* (IP1553_TXBSR) Transmit buffer 13, x with x=[0-31] Position */
#define IP1553_TXBSR_TF13_Msk                 (_UINT32_(0x1) << IP1553_TXBSR_TF13_Pos)             /* (IP1553_TXBSR) Transmit buffer 13, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF13(value)              (IP1553_TXBSR_TF13_Msk & (_UINT32_(value) << IP1553_TXBSR_TF13_Pos)) /* Assigment of value for TF13 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF14_Pos                 _UINT32_(14)                                         /* (IP1553_TXBSR) Transmit buffer 14, x with x=[0-31] Position */
#define IP1553_TXBSR_TF14_Msk                 (_UINT32_(0x1) << IP1553_TXBSR_TF14_Pos)             /* (IP1553_TXBSR) Transmit buffer 14, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF14(value)              (IP1553_TXBSR_TF14_Msk & (_UINT32_(value) << IP1553_TXBSR_TF14_Pos)) /* Assigment of value for TF14 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF15_Pos                 _UINT32_(15)                                         /* (IP1553_TXBSR) Transmit buffer 15, x with x=[0-31] Position */
#define IP1553_TXBSR_TF15_Msk                 (_UINT32_(0x1) << IP1553_TXBSR_TF15_Pos)             /* (IP1553_TXBSR) Transmit buffer 15, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF15(value)              (IP1553_TXBSR_TF15_Msk & (_UINT32_(value) << IP1553_TXBSR_TF15_Pos)) /* Assigment of value for TF15 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF16_Pos                 _UINT32_(16)                                         /* (IP1553_TXBSR) Transmit buffer 16, x with x=[0-31] Position */
#define IP1553_TXBSR_TF16_Msk                 (_UINT32_(0x1) << IP1553_TXBSR_TF16_Pos)             /* (IP1553_TXBSR) Transmit buffer 16, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF16(value)              (IP1553_TXBSR_TF16_Msk & (_UINT32_(value) << IP1553_TXBSR_TF16_Pos)) /* Assigment of value for TF16 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF17_Pos                 _UINT32_(17)                                         /* (IP1553_TXBSR) Transmit buffer 17, x with x=[0-31] Position */
#define IP1553_TXBSR_TF17_Msk                 (_UINT32_(0x1) << IP1553_TXBSR_TF17_Pos)             /* (IP1553_TXBSR) Transmit buffer 17, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF17(value)              (IP1553_TXBSR_TF17_Msk & (_UINT32_(value) << IP1553_TXBSR_TF17_Pos)) /* Assigment of value for TF17 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF18_Pos                 _UINT32_(18)                                         /* (IP1553_TXBSR) Transmit buffer 18, x with x=[0-31] Position */
#define IP1553_TXBSR_TF18_Msk                 (_UINT32_(0x1) << IP1553_TXBSR_TF18_Pos)             /* (IP1553_TXBSR) Transmit buffer 18, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF18(value)              (IP1553_TXBSR_TF18_Msk & (_UINT32_(value) << IP1553_TXBSR_TF18_Pos)) /* Assigment of value for TF18 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF19_Pos                 _UINT32_(19)                                         /* (IP1553_TXBSR) Transmit buffer 19, x with x=[0-31] Position */
#define IP1553_TXBSR_TF19_Msk                 (_UINT32_(0x1) << IP1553_TXBSR_TF19_Pos)             /* (IP1553_TXBSR) Transmit buffer 19, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF19(value)              (IP1553_TXBSR_TF19_Msk & (_UINT32_(value) << IP1553_TXBSR_TF19_Pos)) /* Assigment of value for TF19 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF20_Pos                 _UINT32_(20)                                         /* (IP1553_TXBSR) Transmit buffer 20, x with x=[0-31] Position */
#define IP1553_TXBSR_TF20_Msk                 (_UINT32_(0x1) << IP1553_TXBSR_TF20_Pos)             /* (IP1553_TXBSR) Transmit buffer 20, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF20(value)              (IP1553_TXBSR_TF20_Msk & (_UINT32_(value) << IP1553_TXBSR_TF20_Pos)) /* Assigment of value for TF20 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF21_Pos                 _UINT32_(21)                                         /* (IP1553_TXBSR) Transmit buffer 21, x with x=[0-31] Position */
#define IP1553_TXBSR_TF21_Msk                 (_UINT32_(0x1) << IP1553_TXBSR_TF21_Pos)             /* (IP1553_TXBSR) Transmit buffer 21, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF21(value)              (IP1553_TXBSR_TF21_Msk & (_UINT32_(value) << IP1553_TXBSR_TF21_Pos)) /* Assigment of value for TF21 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF22_Pos                 _UINT32_(22)                                         /* (IP1553_TXBSR) Transmit buffer 22, x with x=[0-31] Position */
#define IP1553_TXBSR_TF22_Msk                 (_UINT32_(0x1) << IP1553_TXBSR_TF22_Pos)             /* (IP1553_TXBSR) Transmit buffer 22, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF22(value)              (IP1553_TXBSR_TF22_Msk & (_UINT32_(value) << IP1553_TXBSR_TF22_Pos)) /* Assigment of value for TF22 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF23_Pos                 _UINT32_(23)                                         /* (IP1553_TXBSR) Transmit buffer 23, x with x=[0-31] Position */
#define IP1553_TXBSR_TF23_Msk                 (_UINT32_(0x1) << IP1553_TXBSR_TF23_Pos)             /* (IP1553_TXBSR) Transmit buffer 23, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF23(value)              (IP1553_TXBSR_TF23_Msk & (_UINT32_(value) << IP1553_TXBSR_TF23_Pos)) /* Assigment of value for TF23 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF24_Pos                 _UINT32_(24)                                         /* (IP1553_TXBSR) Transmit buffer 24, x with x=[0-31] Position */
#define IP1553_TXBSR_TF24_Msk                 (_UINT32_(0x1) << IP1553_TXBSR_TF24_Pos)             /* (IP1553_TXBSR) Transmit buffer 24, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF24(value)              (IP1553_TXBSR_TF24_Msk & (_UINT32_(value) << IP1553_TXBSR_TF24_Pos)) /* Assigment of value for TF24 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF25_Pos                 _UINT32_(25)                                         /* (IP1553_TXBSR) Transmit buffer 25, x with x=[0-31] Position */
#define IP1553_TXBSR_TF25_Msk                 (_UINT32_(0x1) << IP1553_TXBSR_TF25_Pos)             /* (IP1553_TXBSR) Transmit buffer 25, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF25(value)              (IP1553_TXBSR_TF25_Msk & (_UINT32_(value) << IP1553_TXBSR_TF25_Pos)) /* Assigment of value for TF25 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF26_Pos                 _UINT32_(26)                                         /* (IP1553_TXBSR) Transmit buffer 26, x with x=[0-31] Position */
#define IP1553_TXBSR_TF26_Msk                 (_UINT32_(0x1) << IP1553_TXBSR_TF26_Pos)             /* (IP1553_TXBSR) Transmit buffer 26, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF26(value)              (IP1553_TXBSR_TF26_Msk & (_UINT32_(value) << IP1553_TXBSR_TF26_Pos)) /* Assigment of value for TF26 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF27_Pos                 _UINT32_(27)                                         /* (IP1553_TXBSR) Transmit buffer 27, x with x=[0-31] Position */
#define IP1553_TXBSR_TF27_Msk                 (_UINT32_(0x1) << IP1553_TXBSR_TF27_Pos)             /* (IP1553_TXBSR) Transmit buffer 27, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF27(value)              (IP1553_TXBSR_TF27_Msk & (_UINT32_(value) << IP1553_TXBSR_TF27_Pos)) /* Assigment of value for TF27 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF28_Pos                 _UINT32_(28)                                         /* (IP1553_TXBSR) Transmit buffer 28, x with x=[0-31] Position */
#define IP1553_TXBSR_TF28_Msk                 (_UINT32_(0x1) << IP1553_TXBSR_TF28_Pos)             /* (IP1553_TXBSR) Transmit buffer 28, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF28(value)              (IP1553_TXBSR_TF28_Msk & (_UINT32_(value) << IP1553_TXBSR_TF28_Pos)) /* Assigment of value for TF28 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF29_Pos                 _UINT32_(29)                                         /* (IP1553_TXBSR) Transmit buffer 29, x with x=[0-31] Position */
#define IP1553_TXBSR_TF29_Msk                 (_UINT32_(0x1) << IP1553_TXBSR_TF29_Pos)             /* (IP1553_TXBSR) Transmit buffer 29, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF29(value)              (IP1553_TXBSR_TF29_Msk & (_UINT32_(value) << IP1553_TXBSR_TF29_Pos)) /* Assigment of value for TF29 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF30_Pos                 _UINT32_(30)                                         /* (IP1553_TXBSR) Transmit buffer 30, x with x=[0-31] Position */
#define IP1553_TXBSR_TF30_Msk                 (_UINT32_(0x1) << IP1553_TXBSR_TF30_Pos)             /* (IP1553_TXBSR) Transmit buffer 30, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF30(value)              (IP1553_TXBSR_TF30_Msk & (_UINT32_(value) << IP1553_TXBSR_TF30_Pos)) /* Assigment of value for TF30 in the IP1553_TXBSR register */
#define IP1553_TXBSR_TF31_Pos                 _UINT32_(31)                                         /* (IP1553_TXBSR) Transmit buffer 31, x with x=[0-31] Position */
#define IP1553_TXBSR_TF31_Msk                 (_UINT32_(0x1) << IP1553_TXBSR_TF31_Pos)             /* (IP1553_TXBSR) Transmit buffer 31, x with x=[0-31] Mask */
#define IP1553_TXBSR_TF31(value)              (IP1553_TXBSR_TF31_Msk & (_UINT32_(value) << IP1553_TXBSR_TF31_Pos)) /* Assigment of value for TF31 in the IP1553_TXBSR register */
#define IP1553_TXBSR_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (IP1553_TXBSR) Register Mask  */

#define IP1553_TXBSR_TF_Pos                   _UINT32_(0)                                          /* (IP1553_TXBSR Position) Transmit buffer 3x, x with x=[x-3x] */
#define IP1553_TXBSR_TF_Msk                   (_UINT32_(0xFFFFFFFF) << IP1553_TXBSR_TF_Pos)        /* (IP1553_TXBSR Mask) TF */
#define IP1553_TXBSR_TF(value)                (IP1553_TXBSR_TF_Msk & (_UINT32_(value) << IP1553_TXBSR_TF_Pos)) 

/* -------- IP1553_TXBAER : (IP1553 Offset: 0x50) (R/W 32) Tx Buffer Access Error Register -------- */
#define IP1553_TXBAER_TER0_Pos                _UINT32_(0)                                          /* (IP1553_TXBAER) Transmit error 0, x with x=[0-31] Position */
#define IP1553_TXBAER_TER0_Msk                (_UINT32_(0x1) << IP1553_TXBAER_TER0_Pos)            /* (IP1553_TXBAER) Transmit error 0, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER0(value)             (IP1553_TXBAER_TER0_Msk & (_UINT32_(value) << IP1553_TXBAER_TER0_Pos)) /* Assigment of value for TER0 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER1_Pos                _UINT32_(1)                                          /* (IP1553_TXBAER) Transmit error 1, x with x=[0-31] Position */
#define IP1553_TXBAER_TER1_Msk                (_UINT32_(0x1) << IP1553_TXBAER_TER1_Pos)            /* (IP1553_TXBAER) Transmit error 1, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER1(value)             (IP1553_TXBAER_TER1_Msk & (_UINT32_(value) << IP1553_TXBAER_TER1_Pos)) /* Assigment of value for TER1 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER2_Pos                _UINT32_(2)                                          /* (IP1553_TXBAER) Transmit error 2, x with x=[0-31] Position */
#define IP1553_TXBAER_TER2_Msk                (_UINT32_(0x1) << IP1553_TXBAER_TER2_Pos)            /* (IP1553_TXBAER) Transmit error 2, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER2(value)             (IP1553_TXBAER_TER2_Msk & (_UINT32_(value) << IP1553_TXBAER_TER2_Pos)) /* Assigment of value for TER2 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER3_Pos                _UINT32_(3)                                          /* (IP1553_TXBAER) Transmit error 3, x with x=[0-31] Position */
#define IP1553_TXBAER_TER3_Msk                (_UINT32_(0x1) << IP1553_TXBAER_TER3_Pos)            /* (IP1553_TXBAER) Transmit error 3, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER3(value)             (IP1553_TXBAER_TER3_Msk & (_UINT32_(value) << IP1553_TXBAER_TER3_Pos)) /* Assigment of value for TER3 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER4_Pos                _UINT32_(4)                                          /* (IP1553_TXBAER) Transmit error 4, x with x=[0-31] Position */
#define IP1553_TXBAER_TER4_Msk                (_UINT32_(0x1) << IP1553_TXBAER_TER4_Pos)            /* (IP1553_TXBAER) Transmit error 4, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER4(value)             (IP1553_TXBAER_TER4_Msk & (_UINT32_(value) << IP1553_TXBAER_TER4_Pos)) /* Assigment of value for TER4 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER5_Pos                _UINT32_(5)                                          /* (IP1553_TXBAER) Transmit error 5, x with x=[0-31] Position */
#define IP1553_TXBAER_TER5_Msk                (_UINT32_(0x1) << IP1553_TXBAER_TER5_Pos)            /* (IP1553_TXBAER) Transmit error 5, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER5(value)             (IP1553_TXBAER_TER5_Msk & (_UINT32_(value) << IP1553_TXBAER_TER5_Pos)) /* Assigment of value for TER5 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER6_Pos                _UINT32_(6)                                          /* (IP1553_TXBAER) Transmit error 6, x with x=[0-31] Position */
#define IP1553_TXBAER_TER6_Msk                (_UINT32_(0x1) << IP1553_TXBAER_TER6_Pos)            /* (IP1553_TXBAER) Transmit error 6, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER6(value)             (IP1553_TXBAER_TER6_Msk & (_UINT32_(value) << IP1553_TXBAER_TER6_Pos)) /* Assigment of value for TER6 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER7_Pos                _UINT32_(7)                                          /* (IP1553_TXBAER) Transmit error 7, x with x=[0-31] Position */
#define IP1553_TXBAER_TER7_Msk                (_UINT32_(0x1) << IP1553_TXBAER_TER7_Pos)            /* (IP1553_TXBAER) Transmit error 7, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER7(value)             (IP1553_TXBAER_TER7_Msk & (_UINT32_(value) << IP1553_TXBAER_TER7_Pos)) /* Assigment of value for TER7 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER8_Pos                _UINT32_(8)                                          /* (IP1553_TXBAER) Transmit error 8, x with x=[0-31] Position */
#define IP1553_TXBAER_TER8_Msk                (_UINT32_(0x1) << IP1553_TXBAER_TER8_Pos)            /* (IP1553_TXBAER) Transmit error 8, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER8(value)             (IP1553_TXBAER_TER8_Msk & (_UINT32_(value) << IP1553_TXBAER_TER8_Pos)) /* Assigment of value for TER8 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER9_Pos                _UINT32_(9)                                          /* (IP1553_TXBAER) Transmit error 9, x with x=[0-31] Position */
#define IP1553_TXBAER_TER9_Msk                (_UINT32_(0x1) << IP1553_TXBAER_TER9_Pos)            /* (IP1553_TXBAER) Transmit error 9, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER9(value)             (IP1553_TXBAER_TER9_Msk & (_UINT32_(value) << IP1553_TXBAER_TER9_Pos)) /* Assigment of value for TER9 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER10_Pos               _UINT32_(10)                                         /* (IP1553_TXBAER) Transmit error 10, x with x=[0-31] Position */
#define IP1553_TXBAER_TER10_Msk               (_UINT32_(0x1) << IP1553_TXBAER_TER10_Pos)           /* (IP1553_TXBAER) Transmit error 10, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER10(value)            (IP1553_TXBAER_TER10_Msk & (_UINT32_(value) << IP1553_TXBAER_TER10_Pos)) /* Assigment of value for TER10 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER11_Pos               _UINT32_(11)                                         /* (IP1553_TXBAER) Transmit error 11, x with x=[0-31] Position */
#define IP1553_TXBAER_TER11_Msk               (_UINT32_(0x1) << IP1553_TXBAER_TER11_Pos)           /* (IP1553_TXBAER) Transmit error 11, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER11(value)            (IP1553_TXBAER_TER11_Msk & (_UINT32_(value) << IP1553_TXBAER_TER11_Pos)) /* Assigment of value for TER11 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER12_Pos               _UINT32_(12)                                         /* (IP1553_TXBAER) Transmit error 12, x with x=[0-31] Position */
#define IP1553_TXBAER_TER12_Msk               (_UINT32_(0x1) << IP1553_TXBAER_TER12_Pos)           /* (IP1553_TXBAER) Transmit error 12, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER12(value)            (IP1553_TXBAER_TER12_Msk & (_UINT32_(value) << IP1553_TXBAER_TER12_Pos)) /* Assigment of value for TER12 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER13_Pos               _UINT32_(13)                                         /* (IP1553_TXBAER) Transmit error 13, x with x=[0-31] Position */
#define IP1553_TXBAER_TER13_Msk               (_UINT32_(0x1) << IP1553_TXBAER_TER13_Pos)           /* (IP1553_TXBAER) Transmit error 13, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER13(value)            (IP1553_TXBAER_TER13_Msk & (_UINT32_(value) << IP1553_TXBAER_TER13_Pos)) /* Assigment of value for TER13 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER14_Pos               _UINT32_(14)                                         /* (IP1553_TXBAER) Transmit error 14, x with x=[0-31] Position */
#define IP1553_TXBAER_TER14_Msk               (_UINT32_(0x1) << IP1553_TXBAER_TER14_Pos)           /* (IP1553_TXBAER) Transmit error 14, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER14(value)            (IP1553_TXBAER_TER14_Msk & (_UINT32_(value) << IP1553_TXBAER_TER14_Pos)) /* Assigment of value for TER14 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER15_Pos               _UINT32_(15)                                         /* (IP1553_TXBAER) Transmit error 15, x with x=[0-31] Position */
#define IP1553_TXBAER_TER15_Msk               (_UINT32_(0x1) << IP1553_TXBAER_TER15_Pos)           /* (IP1553_TXBAER) Transmit error 15, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER15(value)            (IP1553_TXBAER_TER15_Msk & (_UINT32_(value) << IP1553_TXBAER_TER15_Pos)) /* Assigment of value for TER15 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER16_Pos               _UINT32_(16)                                         /* (IP1553_TXBAER) Transmit error 16, x with x=[0-31] Position */
#define IP1553_TXBAER_TER16_Msk               (_UINT32_(0x1) << IP1553_TXBAER_TER16_Pos)           /* (IP1553_TXBAER) Transmit error 16, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER16(value)            (IP1553_TXBAER_TER16_Msk & (_UINT32_(value) << IP1553_TXBAER_TER16_Pos)) /* Assigment of value for TER16 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER17_Pos               _UINT32_(17)                                         /* (IP1553_TXBAER) Transmit error 17, x with x=[0-31] Position */
#define IP1553_TXBAER_TER17_Msk               (_UINT32_(0x1) << IP1553_TXBAER_TER17_Pos)           /* (IP1553_TXBAER) Transmit error 17, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER17(value)            (IP1553_TXBAER_TER17_Msk & (_UINT32_(value) << IP1553_TXBAER_TER17_Pos)) /* Assigment of value for TER17 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER18_Pos               _UINT32_(18)                                         /* (IP1553_TXBAER) Transmit error 18, x with x=[0-31] Position */
#define IP1553_TXBAER_TER18_Msk               (_UINT32_(0x1) << IP1553_TXBAER_TER18_Pos)           /* (IP1553_TXBAER) Transmit error 18, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER18(value)            (IP1553_TXBAER_TER18_Msk & (_UINT32_(value) << IP1553_TXBAER_TER18_Pos)) /* Assigment of value for TER18 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER19_Pos               _UINT32_(19)                                         /* (IP1553_TXBAER) Transmit error 19, x with x=[0-31] Position */
#define IP1553_TXBAER_TER19_Msk               (_UINT32_(0x1) << IP1553_TXBAER_TER19_Pos)           /* (IP1553_TXBAER) Transmit error 19, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER19(value)            (IP1553_TXBAER_TER19_Msk & (_UINT32_(value) << IP1553_TXBAER_TER19_Pos)) /* Assigment of value for TER19 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER20_Pos               _UINT32_(20)                                         /* (IP1553_TXBAER) Transmit error 20, x with x=[0-31] Position */
#define IP1553_TXBAER_TER20_Msk               (_UINT32_(0x1) << IP1553_TXBAER_TER20_Pos)           /* (IP1553_TXBAER) Transmit error 20, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER20(value)            (IP1553_TXBAER_TER20_Msk & (_UINT32_(value) << IP1553_TXBAER_TER20_Pos)) /* Assigment of value for TER20 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER21_Pos               _UINT32_(21)                                         /* (IP1553_TXBAER) Transmit error 21, x with x=[0-31] Position */
#define IP1553_TXBAER_TER21_Msk               (_UINT32_(0x1) << IP1553_TXBAER_TER21_Pos)           /* (IP1553_TXBAER) Transmit error 21, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER21(value)            (IP1553_TXBAER_TER21_Msk & (_UINT32_(value) << IP1553_TXBAER_TER21_Pos)) /* Assigment of value for TER21 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER22_Pos               _UINT32_(22)                                         /* (IP1553_TXBAER) Transmit error 22, x with x=[0-31] Position */
#define IP1553_TXBAER_TER22_Msk               (_UINT32_(0x1) << IP1553_TXBAER_TER22_Pos)           /* (IP1553_TXBAER) Transmit error 22, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER22(value)            (IP1553_TXBAER_TER22_Msk & (_UINT32_(value) << IP1553_TXBAER_TER22_Pos)) /* Assigment of value for TER22 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER23_Pos               _UINT32_(23)                                         /* (IP1553_TXBAER) Transmit error 23, x with x=[0-31] Position */
#define IP1553_TXBAER_TER23_Msk               (_UINT32_(0x1) << IP1553_TXBAER_TER23_Pos)           /* (IP1553_TXBAER) Transmit error 23, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER23(value)            (IP1553_TXBAER_TER23_Msk & (_UINT32_(value) << IP1553_TXBAER_TER23_Pos)) /* Assigment of value for TER23 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER24_Pos               _UINT32_(24)                                         /* (IP1553_TXBAER) Transmit error 24, x with x=[0-31] Position */
#define IP1553_TXBAER_TER24_Msk               (_UINT32_(0x1) << IP1553_TXBAER_TER24_Pos)           /* (IP1553_TXBAER) Transmit error 24, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER24(value)            (IP1553_TXBAER_TER24_Msk & (_UINT32_(value) << IP1553_TXBAER_TER24_Pos)) /* Assigment of value for TER24 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER25_Pos               _UINT32_(25)                                         /* (IP1553_TXBAER) Transmit error 25, x with x=[0-31] Position */
#define IP1553_TXBAER_TER25_Msk               (_UINT32_(0x1) << IP1553_TXBAER_TER25_Pos)           /* (IP1553_TXBAER) Transmit error 25, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER25(value)            (IP1553_TXBAER_TER25_Msk & (_UINT32_(value) << IP1553_TXBAER_TER25_Pos)) /* Assigment of value for TER25 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER26_Pos               _UINT32_(26)                                         /* (IP1553_TXBAER) Transmit error 26, x with x=[0-31] Position */
#define IP1553_TXBAER_TER26_Msk               (_UINT32_(0x1) << IP1553_TXBAER_TER26_Pos)           /* (IP1553_TXBAER) Transmit error 26, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER26(value)            (IP1553_TXBAER_TER26_Msk & (_UINT32_(value) << IP1553_TXBAER_TER26_Pos)) /* Assigment of value for TER26 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER27_Pos               _UINT32_(27)                                         /* (IP1553_TXBAER) Transmit error 27, x with x=[0-31] Position */
#define IP1553_TXBAER_TER27_Msk               (_UINT32_(0x1) << IP1553_TXBAER_TER27_Pos)           /* (IP1553_TXBAER) Transmit error 27, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER27(value)            (IP1553_TXBAER_TER27_Msk & (_UINT32_(value) << IP1553_TXBAER_TER27_Pos)) /* Assigment of value for TER27 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER28_Pos               _UINT32_(28)                                         /* (IP1553_TXBAER) Transmit error 28, x with x=[0-31] Position */
#define IP1553_TXBAER_TER28_Msk               (_UINT32_(0x1) << IP1553_TXBAER_TER28_Pos)           /* (IP1553_TXBAER) Transmit error 28, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER28(value)            (IP1553_TXBAER_TER28_Msk & (_UINT32_(value) << IP1553_TXBAER_TER28_Pos)) /* Assigment of value for TER28 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER29_Pos               _UINT32_(29)                                         /* (IP1553_TXBAER) Transmit error 29, x with x=[0-31] Position */
#define IP1553_TXBAER_TER29_Msk               (_UINT32_(0x1) << IP1553_TXBAER_TER29_Pos)           /* (IP1553_TXBAER) Transmit error 29, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER29(value)            (IP1553_TXBAER_TER29_Msk & (_UINT32_(value) << IP1553_TXBAER_TER29_Pos)) /* Assigment of value for TER29 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER30_Pos               _UINT32_(30)                                         /* (IP1553_TXBAER) Transmit error 30, x with x=[0-31] Position */
#define IP1553_TXBAER_TER30_Msk               (_UINT32_(0x1) << IP1553_TXBAER_TER30_Pos)           /* (IP1553_TXBAER) Transmit error 30, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER30(value)            (IP1553_TXBAER_TER30_Msk & (_UINT32_(value) << IP1553_TXBAER_TER30_Pos)) /* Assigment of value for TER30 in the IP1553_TXBAER register */
#define IP1553_TXBAER_TER31_Pos               _UINT32_(31)                                         /* (IP1553_TXBAER) Transmit error 31, x with x=[0-31] Position */
#define IP1553_TXBAER_TER31_Msk               (_UINT32_(0x1) << IP1553_TXBAER_TER31_Pos)           /* (IP1553_TXBAER) Transmit error 31, x with x=[0-31] Mask */
#define IP1553_TXBAER_TER31(value)            (IP1553_TXBAER_TER31_Msk & (_UINT32_(value) << IP1553_TXBAER_TER31_Pos)) /* Assigment of value for TER31 in the IP1553_TXBAER register */
#define IP1553_TXBAER_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (IP1553_TXBAER) Register Mask  */

#define IP1553_TXBAER_TER_Pos                 _UINT32_(0)                                          /* (IP1553_TXBAER Position) Transmit error 3x, x with x=[x-3x] */
#define IP1553_TXBAER_TER_Msk                 (_UINT32_(0xFFFFFFFF) << IP1553_TXBAER_TER_Pos)      /* (IP1553_TXBAER Mask) TER */
#define IP1553_TXBAER_TER(value)              (IP1553_TXBAER_TER_Msk & (_UINT32_(value) << IP1553_TXBAER_TER_Pos)) 

/** \brief IP1553 register offsets definitions */
#define IP1553_CR_REG_OFST             _UINT32_(0x00)      /* (IP1553_CR) Configuration Register Offset */
#define IP1553_CMDR1_REG_OFST          _UINT32_(0x0C)      /* (IP1553_CMDR1) Command Register 1 Offset */
#define IP1553_CMDR2_REG_OFST          _UINT32_(0x10)      /* (IP1553_CMDR2) Command Register 2 Offset */
#define IP1553_CMDR3_REG_OFST          _UINT32_(0x14)      /* (IP1553_CMDR3) Command Register 3 Offset */
#define IP1553_BITR_REG_OFST           _UINT32_(0x18)      /* (IP1553_BITR) BIT Register Offset */
#define IP1553_VWR_REG_OFST            _UINT32_(0x1C)      /* (IP1553_VWR) Vector Word Register Offset */
#define IP1553_IER_REG_OFST            _UINT32_(0x20)      /* (IP1553_IER) IRQ Mask Enable Register Offset */
#define IP1553_IDR_REG_OFST            _UINT32_(0x24)      /* (IP1553_IDR) IRQ Mask Disable Register Offset */
#define IP1553_IMR_REG_OFST            _UINT32_(0x28)      /* (IP1553_IMR) IRQ Mask Register Offset */
#define IP1553_ISR_REG_OFST            _UINT32_(0x2C)      /* (IP1553_ISR) IRQ Status Register Offset */
#define IP1553_CTRL1_REG_OFST          _UINT32_(0x30)      /* (IP1553_CTRL1) Control Register 1 Offset */
#define IP1553_CTRL2_REG_OFST          _UINT32_(0x34)      /* (IP1553_CTRL2) Control Register 2 Offset */
#define IP1553_CTRL3_REG_OFST          _UINT32_(0x38)      /* (IP1553_CTRL3) Control Register 3 Offset */
#define IP1553_ARW_REG_OFST            _UINT32_(0x3C)      /* (IP1553_ARW) Address Register Write Offset */
#define IP1553_ARR_REG_OFST            _UINT32_(0x40)      /* (IP1553_ARR) Address Register Read Offset */
#define IP1553_RXBSR_REG_OFST          _UINT32_(0x44)      /* (IP1553_RXBSR) Rx Buffer Status Register Offset */
#define IP1553_RXBAER_REG_OFST         _UINT32_(0x48)      /* (IP1553_RXBAER) Rx Buffer Access Error Register Offset */
#define IP1553_TXBSR_REG_OFST          _UINT32_(0x4C)      /* (IP1553_TXBSR) Tx Buffer Status Register Offset */
#define IP1553_TXBAER_REG_OFST         _UINT32_(0x50)      /* (IP1553_TXBAER) Tx Buffer Access Error Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief IP1553 register API structure */
typedef struct
{
  __IO  uint32_t                       IP1553_CR;          /**< Offset: 0x00 (R/W  32) Configuration Register */
  __I   uint8_t                        Reserved1[0x08];
  __O   uint32_t                       IP1553_CMDR1;       /**< Offset: 0x0C ( /W  32) Command Register 1 */
  __O   uint32_t                       IP1553_CMDR2;       /**< Offset: 0x10 ( /W  32) Command Register 2 */
  __O   uint32_t                       IP1553_CMDR3;       /**< Offset: 0x14 ( /W  32) Command Register 3 */
  __O   uint32_t                       IP1553_BITR;        /**< Offset: 0x18 ( /W  32) BIT Register */
  __O   uint32_t                       IP1553_VWR;         /**< Offset: 0x1C ( /W  32) Vector Word Register */
  __O   uint32_t                       IP1553_IER;         /**< Offset: 0x20 ( /W  32) IRQ Mask Enable Register */
  __O   uint32_t                       IP1553_IDR;         /**< Offset: 0x24 ( /W  32) IRQ Mask Disable Register */
  __I   uint32_t                       IP1553_IMR;         /**< Offset: 0x28 (R/   32) IRQ Mask Register */
  __I   uint32_t                       IP1553_ISR;         /**< Offset: 0x2C (R/   32) IRQ Status Register */
  __I   uint32_t                       IP1553_CTRL1;       /**< Offset: 0x30 (R/   32) Control Register 1 */
  __I   uint32_t                       IP1553_CTRL2;       /**< Offset: 0x34 (R/   32) Control Register 2 */
  __I   uint32_t                       IP1553_CTRL3;       /**< Offset: 0x38 (R/   32) Control Register 3 */
  __IO  uint32_t                       IP1553_ARW;         /**< Offset: 0x3C (R/W  32) Address Register Write */
  __IO  uint32_t                       IP1553_ARR;         /**< Offset: 0x40 (R/W  32) Address Register Read */
  __IO  uint32_t                       IP1553_RXBSR;       /**< Offset: 0x44 (R/W  32) Rx Buffer Status Register */
  __IO  uint32_t                       IP1553_RXBAER;      /**< Offset: 0x48 (R/W  32) Rx Buffer Access Error Register */
  __IO  uint32_t                       IP1553_TXBSR;       /**< Offset: 0x4C (R/W  32) Tx Buffer Status Register */
  __IO  uint32_t                       IP1553_TXBAER;      /**< Offset: 0x50 (R/W  32) Tx Buffer Access Error Register */
} ip1553_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMRH71_IP1553_COMPONENT_H_ */
