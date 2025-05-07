/*
 * Component description for SUPC
 *
 * Copyright (c) 2023 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description file (ATDF) version 2023-12-19T08:59:38Z */
#ifndef _PIC32CXMTSH_SUPC_COMPONENT_H_
#define _PIC32CXMTSH_SUPC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SUPC                                         */
/* ************************************************************************** */

/* -------- SUPC_CR : (SUPC Offset: 0x00) ( /W 32) Control Register -------- */
#define SUPC_CR_SHDW_Pos                      _UINT32_(0)                                          /* (SUPC_CR) Shutdown Position */
#define SUPC_CR_SHDW_Msk                      (_UINT32_(0x1) << SUPC_CR_SHDW_Pos)                  /* (SUPC_CR) Shutdown Mask */
#define SUPC_CR_SHDW(value)                   (SUPC_CR_SHDW_Msk & (_UINT32_(value) << SUPC_CR_SHDW_Pos)) /* Assigment of value for SHDW in the SUPC_CR register */
#define SUPC_CR_SHDWEOF_Pos                   _UINT32_(1)                                          /* (SUPC_CR) Shutdown End Of Frame Position */
#define SUPC_CR_SHDWEOF_Msk                   (_UINT32_(0x1) << SUPC_CR_SHDWEOF_Pos)               /* (SUPC_CR) Shutdown End Of Frame Mask */
#define SUPC_CR_SHDWEOF(value)                (SUPC_CR_SHDWEOF_Msk & (_UINT32_(value) << SUPC_CR_SHDWEOF_Pos)) /* Assigment of value for SHDWEOF in the SUPC_CR register */
#define SUPC_CR_VROFF_Pos                     _UINT32_(2)                                          /* (SUPC_CR) Voltage Regulator Off Position */
#define SUPC_CR_VROFF_Msk                     (_UINT32_(0x1) << SUPC_CR_VROFF_Pos)                 /* (SUPC_CR) Voltage Regulator Off Mask */
#define SUPC_CR_VROFF(value)                  (SUPC_CR_VROFF_Msk & (_UINT32_(value) << SUPC_CR_VROFF_Pos)) /* Assigment of value for VROFF in the SUPC_CR register */
#define   SUPC_CR_VROFF_NO_EFFECT_Val         _UINT32_(0x0)                                        /* (SUPC_CR) No effect.  */
#define   SUPC_CR_VROFF_STOP_VREG_Val         _UINT32_(0x1)                                        /* (SUPC_CR) If KEY=0xA5, VROFF asserts the VDDCORE domain reset and stops the voltage regulator.  */
#define SUPC_CR_VROFF_NO_EFFECT               (SUPC_CR_VROFF_NO_EFFECT_Val << SUPC_CR_VROFF_Pos)   /* (SUPC_CR) No effect. Position  */
#define SUPC_CR_VROFF_STOP_VREG               (SUPC_CR_VROFF_STOP_VREG_Val << SUPC_CR_VROFF_Pos)   /* (SUPC_CR) If KEY=0xA5, VROFF asserts the VDDCORE domain reset and stops the voltage regulator. Position  */
#define SUPC_CR_TDXTALSEL_Pos                 _UINT32_(3)                                          /* (SUPC_CR) Timing Domain Slow Clock Selector Position */
#define SUPC_CR_TDXTALSEL_Msk                 (_UINT32_(0x1) << SUPC_CR_TDXTALSEL_Pos)             /* (SUPC_CR) Timing Domain Slow Clock Selector Mask */
#define SUPC_CR_TDXTALSEL(value)              (SUPC_CR_TDXTALSEL_Msk & (_UINT32_(value) << SUPC_CR_TDXTALSEL_Pos)) /* Assigment of value for TDXTALSEL in the SUPC_CR register */
#define   SUPC_CR_TDXTALSEL_RC_Val            _UINT32_(0x0)                                        /* (SUPC_CR) Slow clock of the timing domain is driven by the embedded 32 kHz (typical) RC oscillator.  */
#define   SUPC_CR_TDXTALSEL_XTAL_Val          _UINT32_(0x1)                                        /* (SUPC_CR) Slow clock of the timing domain is driven by the 32.768 kHz crystal oscillator.  */
#define SUPC_CR_TDXTALSEL_RC                  (SUPC_CR_TDXTALSEL_RC_Val << SUPC_CR_TDXTALSEL_Pos)  /* (SUPC_CR) Slow clock of the timing domain is driven by the embedded 32 kHz (typical) RC oscillator. Position  */
#define SUPC_CR_TDXTALSEL_XTAL                (SUPC_CR_TDXTALSEL_XTAL_Val << SUPC_CR_TDXTALSEL_Pos) /* (SUPC_CR) Slow clock of the timing domain is driven by the 32.768 kHz crystal oscillator. Position  */
#define SUPC_CR_KEY_Pos                       _UINT32_(24)                                         /* (SUPC_CR) Password Position */
#define SUPC_CR_KEY_Msk                       (_UINT32_(0xFF) << SUPC_CR_KEY_Pos)                  /* (SUPC_CR) Password Mask */
#define SUPC_CR_KEY(value)                    (SUPC_CR_KEY_Msk & (_UINT32_(value) << SUPC_CR_KEY_Pos)) /* Assigment of value for KEY in the SUPC_CR register */
#define   SUPC_CR_KEY_PASSWD_Val              _UINT32_(0xA5)                                       /* (SUPC_CR) Writing any other value in this field aborts the write operation.  */
#define SUPC_CR_KEY_PASSWD                    (SUPC_CR_KEY_PASSWD_Val << SUPC_CR_KEY_Pos)          /* (SUPC_CR) Writing any other value in this field aborts the write operation. Position  */
#define SUPC_CR_Msk                           _UINT32_(0xFF00000F)                                 /* (SUPC_CR) Register Mask  */


/* -------- SUPC_SMMR : (SUPC Offset: 0x04) (R/W 32) Supply Monitor Mode Register -------- */
#define SUPC_SMMR_VDD3V3SMTH_Pos              _UINT32_(0)                                          /* (SUPC_SMMR) VDD3V3 Supply Monitor Threshold Position */
#define SUPC_SMMR_VDD3V3SMTH_Msk              (_UINT32_(0xF) << SUPC_SMMR_VDD3V3SMTH_Pos)          /* (SUPC_SMMR) VDD3V3 Supply Monitor Threshold Mask */
#define SUPC_SMMR_VDD3V3SMTH(value)           (SUPC_SMMR_VDD3V3SMTH_Msk & (_UINT32_(value) << SUPC_SMMR_VDD3V3SMTH_Pos)) /* Assigment of value for VDD3V3SMTH in the SUPC_SMMR register */
#define SUPC_SMMR_VDD3V3SMSMPL_Pos            _UINT32_(8)                                          /* (SUPC_SMMR) VDD3V3 Supply Monitor Sampling Period Position */
#define SUPC_SMMR_VDD3V3SMSMPL_Msk            (_UINT32_(0x7) << SUPC_SMMR_VDD3V3SMSMPL_Pos)        /* (SUPC_SMMR) VDD3V3 Supply Monitor Sampling Period Mask */
#define SUPC_SMMR_VDD3V3SMSMPL(value)         (SUPC_SMMR_VDD3V3SMSMPL_Msk & (_UINT32_(value) << SUPC_SMMR_VDD3V3SMSMPL_Pos)) /* Assigment of value for VDD3V3SMSMPL in the SUPC_SMMR register */
#define   SUPC_SMMR_VDD3V3SMSMPL_DISABLED_Val _UINT32_(0x0)                                        /* (SUPC_SMMR) VDD3V3 supply monitor is disabled  */
#define   SUPC_SMMR_VDD3V3SMSMPL_ALWAYS_ON_Val _UINT32_(0x1)                                        /* (SUPC_SMMR) Continuous VDD3V3 supply monitoring  */
#define   SUPC_SMMR_VDD3V3SMSMPL_32SLCK_Val   _UINT32_(0x2)                                        /* (SUPC_SMMR) VDD3V3 supply monitor is enabled for 1 period every 32 MD_SLCK periods Energy optimization in Backup mode with VDD3V3 supplied.  */
#define   SUPC_SMMR_VDD3V3SMSMPL_256SLCK_Val  _UINT32_(0x3)                                        /* (SUPC_SMMR) VDD3V3 supply monitor is enabled for 1 period every 256 MD_SLCK periods Energy optimization in Backup mode with VDD3V3 supplied.  */
#define   SUPC_SMMR_VDD3V3SMSMPL_2048SLCK_Val _UINT32_(0x4)                                        /* (SUPC_SMMR) VDD3V3 supply monitor is enabled for 1 period every 2048 MD_SLCK periods Energy optimization in Backup mode with VDD3V3 supplied.  */
#define SUPC_SMMR_VDD3V3SMSMPL_DISABLED       (SUPC_SMMR_VDD3V3SMSMPL_DISABLED_Val << SUPC_SMMR_VDD3V3SMSMPL_Pos) /* (SUPC_SMMR) VDD3V3 supply monitor is disabled Position  */
#define SUPC_SMMR_VDD3V3SMSMPL_ALWAYS_ON      (SUPC_SMMR_VDD3V3SMSMPL_ALWAYS_ON_Val << SUPC_SMMR_VDD3V3SMSMPL_Pos) /* (SUPC_SMMR) Continuous VDD3V3 supply monitoring Position  */
#define SUPC_SMMR_VDD3V3SMSMPL_32SLCK         (SUPC_SMMR_VDD3V3SMSMPL_32SLCK_Val << SUPC_SMMR_VDD3V3SMSMPL_Pos) /* (SUPC_SMMR) VDD3V3 supply monitor is enabled for 1 period every 32 MD_SLCK periods Energy optimization in Backup mode with VDD3V3 supplied. Position  */
#define SUPC_SMMR_VDD3V3SMSMPL_256SLCK        (SUPC_SMMR_VDD3V3SMSMPL_256SLCK_Val << SUPC_SMMR_VDD3V3SMSMPL_Pos) /* (SUPC_SMMR) VDD3V3 supply monitor is enabled for 1 period every 256 MD_SLCK periods Energy optimization in Backup mode with VDD3V3 supplied. Position  */
#define SUPC_SMMR_VDD3V3SMSMPL_2048SLCK       (SUPC_SMMR_VDD3V3SMSMPL_2048SLCK_Val << SUPC_SMMR_VDD3V3SMSMPL_Pos) /* (SUPC_SMMR) VDD3V3 supply monitor is enabled for 1 period every 2048 MD_SLCK periods Energy optimization in Backup mode with VDD3V3 supplied. Position  */
#define SUPC_SMMR_VDD3V3SMRSTEN_Pos           _UINT32_(12)                                         /* (SUPC_SMMR) VDD3V3 Supply Monitor Reset Enable Position */
#define SUPC_SMMR_VDD3V3SMRSTEN_Msk           (_UINT32_(0x1) << SUPC_SMMR_VDD3V3SMRSTEN_Pos)       /* (SUPC_SMMR) VDD3V3 Supply Monitor Reset Enable Mask */
#define SUPC_SMMR_VDD3V3SMRSTEN(value)        (SUPC_SMMR_VDD3V3SMRSTEN_Msk & (_UINT32_(value) << SUPC_SMMR_VDD3V3SMRSTEN_Pos)) /* Assigment of value for VDD3V3SMRSTEN in the SUPC_SMMR register */
#define SUPC_SMMR_VDD3V3SMPWRM_Pos            _UINT32_(13)                                         /* (SUPC_SMMR) VDD3V3 Supply Monitor Power Supply Mode Position */
#define SUPC_SMMR_VDD3V3SMPWRM_Msk            (_UINT32_(0x1) << SUPC_SMMR_VDD3V3SMPWRM_Pos)        /* (SUPC_SMMR) VDD3V3 Supply Monitor Power Supply Mode Mask */
#define SUPC_SMMR_VDD3V3SMPWRM(value)         (SUPC_SMMR_VDD3V3SMPWRM_Msk & (_UINT32_(value) << SUPC_SMMR_VDD3V3SMPWRM_Pos)) /* Assigment of value for VDD3V3SMPWRM in the SUPC_SMMR register */
#define   SUPC_SMMR_VDD3V3SMPWRM_MANUAL_Val   _UINT32_(0x0)                                        /* (SUPC_SMMR) The VDDBU power source selection is controlled by configuring the bit RSTC_MR.PWRSW.  */
#define   SUPC_SMMR_VDD3V3SMPWRM_AUTO_VDD3V3SM_Val _UINT32_(0x1)                                        /* (SUPC_SMMR) The VDDBU power source is VBAT when a VDD3V3 undervoltage is detected by the VDD3V3 supply monitor.  */
#define SUPC_SMMR_VDD3V3SMPWRM_MANUAL         (SUPC_SMMR_VDD3V3SMPWRM_MANUAL_Val << SUPC_SMMR_VDD3V3SMPWRM_Pos) /* (SUPC_SMMR) The VDDBU power source selection is controlled by configuring the bit RSTC_MR.PWRSW. Position  */
#define SUPC_SMMR_VDD3V3SMPWRM_AUTO_VDD3V3SM  (SUPC_SMMR_VDD3V3SMPWRM_AUTO_VDD3V3SM_Val << SUPC_SMMR_VDD3V3SMPWRM_Pos) /* (SUPC_SMMR) The VDDBU power source is VBAT when a VDD3V3 undervoltage is detected by the VDD3V3 supply monitor. Position  */
#define SUPC_SMMR_Msk                         _UINT32_(0x0000370F)                                 /* (SUPC_SMMR) Register Mask  */


/* -------- SUPC_MR : (SUPC Offset: 0x08) (R/W 32) Mode Register -------- */
#define SUPC_MR_LCDOUT_Pos                    _UINT32_(0)                                          /* (SUPC_MR) LCD Voltage Regulator Output Position */
#define SUPC_MR_LCDOUT_Msk                    (_UINT32_(0xF) << SUPC_MR_LCDOUT_Pos)                /* (SUPC_MR) LCD Voltage Regulator Output Mask */
#define SUPC_MR_LCDOUT(value)                 (SUPC_MR_LCDOUT_Msk & (_UINT32_(value) << SUPC_MR_LCDOUT_Pos)) /* Assigment of value for LCDOUT in the SUPC_MR register */
#define SUPC_MR_LCDMODE_Pos                   _UINT32_(4)                                          /* (SUPC_MR) LCD Controller Mode of Operation Position */
#define SUPC_MR_LCDMODE_Msk                   (_UINT32_(0x3) << SUPC_MR_LCDMODE_Pos)               /* (SUPC_MR) LCD Controller Mode of Operation Mask */
#define SUPC_MR_LCDMODE(value)                (SUPC_MR_LCDMODE_Msk & (_UINT32_(value) << SUPC_MR_LCDMODE_Pos)) /* Assigment of value for LCDMODE in the SUPC_MR register */
#define   SUPC_MR_LCDMODE_LCDOFF_Val          _UINT32_(0x0)                                        /* (SUPC_MR) The internal supply source and the external supply source are both deselected (OFF Mode).  */
#define   SUPC_MR_LCDMODE_LCDON_EXTVR_Val     _UINT32_(0x2)                                        /* (SUPC_MR) The external supply source for LCD (VDDLCD) is selected (the embedded LCD voltage regulator is in High-impedance mode).  */
#define   SUPC_MR_LCDMODE_LCDON_INVR_Val      _UINT32_(0x3)                                        /* (SUPC_MR) The internal voltage regulator for VDDLCD is selected (Active mode).  */
#define SUPC_MR_LCDMODE_LCDOFF                (SUPC_MR_LCDMODE_LCDOFF_Val << SUPC_MR_LCDMODE_Pos)  /* (SUPC_MR) The internal supply source and the external supply source are both deselected (OFF Mode). Position  */
#define SUPC_MR_LCDMODE_LCDON_EXTVR           (SUPC_MR_LCDMODE_LCDON_EXTVR_Val << SUPC_MR_LCDMODE_Pos) /* (SUPC_MR) The external supply source for LCD (VDDLCD) is selected (the embedded LCD voltage regulator is in High-impedance mode). Position  */
#define SUPC_MR_LCDMODE_LCDON_INVR            (SUPC_MR_LCDMODE_LCDON_INVR_Val << SUPC_MR_LCDMODE_Pos) /* (SUPC_MR) The internal voltage regulator for VDDLCD is selected (Active mode). Position  */
#define SUPC_MR_CORSMM_Pos                    _UINT32_(6)                                          /* (SUPC_MR) VDDCORE Supply Monitor Output Mode Position */
#define SUPC_MR_CORSMM_Msk                    (_UINT32_(0x1) << SUPC_MR_CORSMM_Pos)                /* (SUPC_MR) VDDCORE Supply Monitor Output Mode Mask */
#define SUPC_MR_CORSMM(value)                 (SUPC_MR_CORSMM_Msk & (_UINT32_(value) << SUPC_MR_CORSMM_Pos)) /* Assigment of value for CORSMM in the SUPC_MR register */
#define   SUPC_MR_CORSMM_NO_EFFECT_Val        _UINT32_(0x0)                                        /* (SUPC_MR) VDDCORE supply monitor output value has no effect. Power-on is performed whatever the value of the supply monitor output.  */
#define   SUPC_MR_CORSMM_VALID_VDD_Val        _UINT32_(0x1)                                        /* (SUPC_MR) VDDCORE supply monitor output value is checked to validate the VDDCORE domain power-on.  */
#define SUPC_MR_CORSMM_NO_EFFECT              (SUPC_MR_CORSMM_NO_EFFECT_Val << SUPC_MR_CORSMM_Pos) /* (SUPC_MR) VDDCORE supply monitor output value has no effect. Power-on is performed whatever the value of the supply monitor output. Position  */
#define SUPC_MR_CORSMM_VALID_VDD              (SUPC_MR_CORSMM_VALID_VDD_Val << SUPC_MR_CORSMM_Pos) /* (SUPC_MR) VDDCORE supply monitor output value is checked to validate the VDDCORE domain power-on. Position  */
#define SUPC_MR_VREGDIS_Pos                   _UINT32_(7)                                          /* (SUPC_MR) Internal VDDCORE Voltage Regulator Disable Position */
#define SUPC_MR_VREGDIS_Msk                   (_UINT32_(0x1) << SUPC_MR_VREGDIS_Pos)               /* (SUPC_MR) Internal VDDCORE Voltage Regulator Disable Mask */
#define SUPC_MR_VREGDIS(value)                (SUPC_MR_VREGDIS_Msk & (_UINT32_(value) << SUPC_MR_VREGDIS_Pos)) /* Assigment of value for VREGDIS in the SUPC_MR register */
#define   SUPC_MR_VREGDIS_INT_VREG_Val        _UINT32_(0x0)                                        /* (SUPC_MR) Internal VDDCORE voltage regulator is enabled.  */
#define   SUPC_MR_VREGDIS_EXT_VREG_Val        _UINT32_(0x1)                                        /* (SUPC_MR) Internal VDDCORE voltage regulator is disabled (external power supply is used).  */
#define SUPC_MR_VREGDIS_INT_VREG              (SUPC_MR_VREGDIS_INT_VREG_Val << SUPC_MR_VREGDIS_Pos) /* (SUPC_MR) Internal VDDCORE voltage regulator is enabled. Position  */
#define SUPC_MR_VREGDIS_EXT_VREG              (SUPC_MR_VREGDIS_EXT_VREG_Val << SUPC_MR_VREGDIS_Pos) /* (SUPC_MR) Internal VDDCORE voltage regulator is disabled (external power supply is used). Position  */
#define SUPC_MR_CORSMRSTEN_Pos                _UINT32_(12)                                         /* (SUPC_MR) VDDCORE Supply Monitor Reset Enable Position */
#define SUPC_MR_CORSMRSTEN_Msk                (_UINT32_(0x1) << SUPC_MR_CORSMRSTEN_Pos)            /* (SUPC_MR) VDDCORE Supply Monitor Reset Enable Mask */
#define SUPC_MR_CORSMRSTEN(value)             (SUPC_MR_CORSMRSTEN_Msk & (_UINT32_(value) << SUPC_MR_CORSMRSTEN_Pos)) /* Assigment of value for CORSMRSTEN in the SUPC_MR register */
#define SUPC_MR_CORSMDIS_Pos                  _UINT32_(13)                                         /* (SUPC_MR) VDDCORE Supply Monitor Disable Position */
#define SUPC_MR_CORSMDIS_Msk                  (_UINT32_(0x1) << SUPC_MR_CORSMDIS_Pos)              /* (SUPC_MR) VDDCORE Supply Monitor Disable Mask */
#define SUPC_MR_CORSMDIS(value)               (SUPC_MR_CORSMDIS_Msk & (_UINT32_(value) << SUPC_MR_CORSMDIS_Pos)) /* Assigment of value for CORSMDIS in the SUPC_MR register */
#define SUPC_MR_IO_BACKUP_ISO_Pos             _UINT32_(14)                                         /* (SUPC_MR) Backup Domain IO Isolation Control Position */
#define SUPC_MR_IO_BACKUP_ISO_Msk             (_UINT32_(0x1) << SUPC_MR_IO_BACKUP_ISO_Pos)         /* (SUPC_MR) Backup Domain IO Isolation Control Mask */
#define SUPC_MR_IO_BACKUP_ISO(value)          (SUPC_MR_IO_BACKUP_ISO_Msk & (_UINT32_(value) << SUPC_MR_IO_BACKUP_ISO_Pos)) /* Assigment of value for IO_BACKUP_ISO in the SUPC_MR register */
#define SUPC_MR_OSCBYPASS_Pos                 _UINT32_(20)                                         /* (SUPC_MR) Slow Crystal Oscillator Bypass Position */
#define SUPC_MR_OSCBYPASS_Msk                 (_UINT32_(0x1) << SUPC_MR_OSCBYPASS_Pos)             /* (SUPC_MR) Slow Crystal Oscillator Bypass Mask */
#define SUPC_MR_OSCBYPASS(value)              (SUPC_MR_OSCBYPASS_Msk & (_UINT32_(value) << SUPC_MR_OSCBYPASS_Pos)) /* Assigment of value for OSCBYPASS in the SUPC_MR register */
#define   SUPC_MR_OSCBYPASS_NO_EFFECT_Val     _UINT32_(0x0)                                        /* (SUPC_MR) No effect. Clock selection depends on the value of the bit SUPC_CR.TDXTALSEL.  */
#define   SUPC_MR_OSCBYPASS_BYPASS_Val        _UINT32_(0x1)                                        /* (SUPC_MR) The slow crystal oscillator is bypassed if SUPC_CR.TDXTALSEL=1. The bit OSCBYPASS must be set prior to setting the bit TDXTALSEL.  */
#define SUPC_MR_OSCBYPASS_NO_EFFECT           (SUPC_MR_OSCBYPASS_NO_EFFECT_Val << SUPC_MR_OSCBYPASS_Pos) /* (SUPC_MR) No effect. Clock selection depends on the value of the bit SUPC_CR.TDXTALSEL. Position  */
#define SUPC_MR_OSCBYPASS_BYPASS              (SUPC_MR_OSCBYPASS_BYPASS_Val << SUPC_MR_OSCBYPASS_Pos) /* (SUPC_MR) The slow crystal oscillator is bypassed if SUPC_CR.TDXTALSEL=1. The bit OSCBYPASS must be set prior to setting the bit TDXTALSEL. Position  */
#define SUPC_MR_KEY_Pos                       _UINT32_(24)                                         /* (SUPC_MR) Password Key Position */
#define SUPC_MR_KEY_Msk                       (_UINT32_(0xFF) << SUPC_MR_KEY_Pos)                  /* (SUPC_MR) Password Key Mask */
#define SUPC_MR_KEY(value)                    (SUPC_MR_KEY_Msk & (_UINT32_(value) << SUPC_MR_KEY_Pos)) /* Assigment of value for KEY in the SUPC_MR register */
#define   SUPC_MR_KEY_PASSWD1_Val             _UINT32_(0x59)                                       /* (SUPC_MR) Modifies the VREGDIS bit. Other bits are not affected.  */
#define   SUPC_MR_KEY_PASSWD_Val              _UINT32_(0xA5)                                       /* (SUPC_MR) Writing any other value in this field aborts the write operation.  */
#define SUPC_MR_KEY_PASSWD1                   (SUPC_MR_KEY_PASSWD1_Val << SUPC_MR_KEY_Pos)         /* (SUPC_MR) Modifies the VREGDIS bit. Other bits are not affected. Position  */
#define SUPC_MR_KEY_PASSWD                    (SUPC_MR_KEY_PASSWD_Val << SUPC_MR_KEY_Pos)          /* (SUPC_MR) Writing any other value in this field aborts the write operation. Position  */
#define SUPC_MR_Msk                           _UINT32_(0xFF1070FF)                                 /* (SUPC_MR) Register Mask  */


/* -------- SUPC_WUMR : (SUPC Offset: 0x0C) (R/W 32) Wakeup Mode Register -------- */
#define SUPC_WUMR_LPDBCEN0_Pos                _UINT32_(0)                                          /* (SUPC_WUMR) Tamper Enable for WKUPx Pin Position */
#define SUPC_WUMR_LPDBCEN0_Msk                (_UINT32_(0x1) << SUPC_WUMR_LPDBCEN0_Pos)            /* (SUPC_WUMR) Tamper Enable for WKUPx Pin Mask */
#define SUPC_WUMR_LPDBCEN0(value)             (SUPC_WUMR_LPDBCEN0_Msk & (_UINT32_(value) << SUPC_WUMR_LPDBCEN0_Pos)) /* Assigment of value for LPDBCEN0 in the SUPC_WUMR register */
#define SUPC_WUMR_LPDBCEN1_Pos                _UINT32_(1)                                          /* (SUPC_WUMR) Tamper Enable for WKUPx Pin Position */
#define SUPC_WUMR_LPDBCEN1_Msk                (_UINT32_(0x1) << SUPC_WUMR_LPDBCEN1_Pos)            /* (SUPC_WUMR) Tamper Enable for WKUPx Pin Mask */
#define SUPC_WUMR_LPDBCEN1(value)             (SUPC_WUMR_LPDBCEN1_Msk & (_UINT32_(value) << SUPC_WUMR_LPDBCEN1_Pos)) /* Assigment of value for LPDBCEN1 in the SUPC_WUMR register */
#define SUPC_WUMR_LPDBCEN2_Pos                _UINT32_(2)                                          /* (SUPC_WUMR) Tamper Enable for WKUPx Pin Position */
#define SUPC_WUMR_LPDBCEN2_Msk                (_UINT32_(0x1) << SUPC_WUMR_LPDBCEN2_Pos)            /* (SUPC_WUMR) Tamper Enable for WKUPx Pin Mask */
#define SUPC_WUMR_LPDBCEN2(value)             (SUPC_WUMR_LPDBCEN2_Msk & (_UINT32_(value) << SUPC_WUMR_LPDBCEN2_Pos)) /* Assigment of value for LPDBCEN2 in the SUPC_WUMR register */
#define SUPC_WUMR_LPDBCEN3_Pos                _UINT32_(3)                                          /* (SUPC_WUMR) Tamper Enable for WKUPx Pin Position */
#define SUPC_WUMR_LPDBCEN3_Msk                (_UINT32_(0x1) << SUPC_WUMR_LPDBCEN3_Pos)            /* (SUPC_WUMR) Tamper Enable for WKUPx Pin Mask */
#define SUPC_WUMR_LPDBCEN3(value)             (SUPC_WUMR_LPDBCEN3_Msk & (_UINT32_(value) << SUPC_WUMR_LPDBCEN3_Pos)) /* Assigment of value for LPDBCEN3 in the SUPC_WUMR register */
#define SUPC_WUMR_LPDBCEN4_Pos                _UINT32_(4)                                          /* (SUPC_WUMR) Tamper Enable for WKUPx Pin Position */
#define SUPC_WUMR_LPDBCEN4_Msk                (_UINT32_(0x1) << SUPC_WUMR_LPDBCEN4_Pos)            /* (SUPC_WUMR) Tamper Enable for WKUPx Pin Mask */
#define SUPC_WUMR_LPDBCEN4(value)             (SUPC_WUMR_LPDBCEN4_Msk & (_UINT32_(value) << SUPC_WUMR_LPDBCEN4_Pos)) /* Assigment of value for LPDBCEN4 in the SUPC_WUMR register */
#define SUPC_WUMR_FWUPDBC_Pos                 _UINT32_(8)                                          /* (SUPC_WUMR) Force Wake-up Inputs Debouncer Period Position */
#define SUPC_WUMR_FWUPDBC_Msk                 (_UINT32_(0x7) << SUPC_WUMR_FWUPDBC_Pos)             /* (SUPC_WUMR) Force Wake-up Inputs Debouncer Period Mask */
#define SUPC_WUMR_FWUPDBC(value)              (SUPC_WUMR_FWUPDBC_Msk & (_UINT32_(value) << SUPC_WUMR_FWUPDBC_Pos)) /* Assigment of value for FWUPDBC in the SUPC_WUMR register */
#define   SUPC_WUMR_FWUPDBC_IMMEDIATE_Val     _UINT32_(0x0)                                        /* (SUPC_WUMR) Immediate, no debouncing, detected active at least on one Slow Clock edge.  */
#define   SUPC_WUMR_FWUPDBC_3_SK_Val          _UINT32_(0x1)                                        /* (SUPC_WUMR) WKUPx shall be in its active state for at least 3 MD_SLCK periods  */
#define   SUPC_WUMR_FWUPDBC_32_SK_Val         _UINT32_(0x2)                                        /* (SUPC_WUMR) WKUPx shall be in its active state for at least 32 MD_SLCK periods  */
#define   SUPC_WUMR_FWUPDBC_512_SK_Val        _UINT32_(0x3)                                        /* (SUPC_WUMR) WKUPx shall be in its active state for at least 512 MD_SLCK periods  */
#define   SUPC_WUMR_FWUPDBC_4096_SK_Val       _UINT32_(0x4)                                        /* (SUPC_WUMR) WKUPx shall be in its active state for at least 4,096 MD_SLCK periods  */
#define   SUPC_WUMR_FWUPDBC_32768_SK_Val      _UINT32_(0x5)                                        /* (SUPC_WUMR) WKUPx shall be in its active state for at least 32,768 MD_SLCK periods  */
#define SUPC_WUMR_FWUPDBC_IMMEDIATE           (SUPC_WUMR_FWUPDBC_IMMEDIATE_Val << SUPC_WUMR_FWUPDBC_Pos) /* (SUPC_WUMR) Immediate, no debouncing, detected active at least on one Slow Clock edge. Position  */
#define SUPC_WUMR_FWUPDBC_3_SK                (SUPC_WUMR_FWUPDBC_3_SK_Val << SUPC_WUMR_FWUPDBC_Pos) /* (SUPC_WUMR) WKUPx shall be in its active state for at least 3 MD_SLCK periods Position  */
#define SUPC_WUMR_FWUPDBC_32_SK               (SUPC_WUMR_FWUPDBC_32_SK_Val << SUPC_WUMR_FWUPDBC_Pos) /* (SUPC_WUMR) WKUPx shall be in its active state for at least 32 MD_SLCK periods Position  */
#define SUPC_WUMR_FWUPDBC_512_SK              (SUPC_WUMR_FWUPDBC_512_SK_Val << SUPC_WUMR_FWUPDBC_Pos) /* (SUPC_WUMR) WKUPx shall be in its active state for at least 512 MD_SLCK periods Position  */
#define SUPC_WUMR_FWUPDBC_4096_SK             (SUPC_WUMR_FWUPDBC_4096_SK_Val << SUPC_WUMR_FWUPDBC_Pos) /* (SUPC_WUMR) WKUPx shall be in its active state for at least 4,096 MD_SLCK periods Position  */
#define SUPC_WUMR_FWUPDBC_32768_SK            (SUPC_WUMR_FWUPDBC_32768_SK_Val << SUPC_WUMR_FWUPDBC_Pos) /* (SUPC_WUMR) WKUPx shall be in its active state for at least 32,768 MD_SLCK periods Position  */
#define SUPC_WUMR_WKUPDBC_Pos                 _UINT32_(12)                                         /* (SUPC_WUMR) Wake-up Inputs Debouncer Period Position */
#define SUPC_WUMR_WKUPDBC_Msk                 (_UINT32_(0x7) << SUPC_WUMR_WKUPDBC_Pos)             /* (SUPC_WUMR) Wake-up Inputs Debouncer Period Mask */
#define SUPC_WUMR_WKUPDBC(value)              (SUPC_WUMR_WKUPDBC_Msk & (_UINT32_(value) << SUPC_WUMR_WKUPDBC_Pos)) /* Assigment of value for WKUPDBC in the SUPC_WUMR register */
#define   SUPC_WUMR_WKUPDBC_IMMEDIATE_Val     _UINT32_(0x0)                                        /* (SUPC_WUMR) Immediate, no debouncing, detected active at least on one Slow Clock edge.  */
#define   SUPC_WUMR_WKUPDBC_3_SK_Val          _UINT32_(0x1)                                        /* (SUPC_WUMR) WKUPx shall be in its active state for at least 3 MD_SLCK periods  */
#define   SUPC_WUMR_WKUPDBC_32_SK_Val         _UINT32_(0x2)                                        /* (SUPC_WUMR) WKUPx shall be in its active state for at least 32 MD_SLCK periods  */
#define   SUPC_WUMR_WKUPDBC_512_SK_Val        _UINT32_(0x3)                                        /* (SUPC_WUMR) WKUPx shall be in its active state for at least 512 MD_SLCK periods  */
#define   SUPC_WUMR_WKUPDBC_4096_SK_Val       _UINT32_(0x4)                                        /* (SUPC_WUMR) WKUPx shall be in its active state for at least 4,096 MD_SLCK periods  */
#define   SUPC_WUMR_WKUPDBC_32768_SK_Val      _UINT32_(0x5)                                        /* (SUPC_WUMR) WKUPx shall be in its active state for at least 32,768 MD_SLCK periods  */
#define SUPC_WUMR_WKUPDBC_IMMEDIATE           (SUPC_WUMR_WKUPDBC_IMMEDIATE_Val << SUPC_WUMR_WKUPDBC_Pos) /* (SUPC_WUMR) Immediate, no debouncing, detected active at least on one Slow Clock edge. Position  */
#define SUPC_WUMR_WKUPDBC_3_SK                (SUPC_WUMR_WKUPDBC_3_SK_Val << SUPC_WUMR_WKUPDBC_Pos) /* (SUPC_WUMR) WKUPx shall be in its active state for at least 3 MD_SLCK periods Position  */
#define SUPC_WUMR_WKUPDBC_32_SK               (SUPC_WUMR_WKUPDBC_32_SK_Val << SUPC_WUMR_WKUPDBC_Pos) /* (SUPC_WUMR) WKUPx shall be in its active state for at least 32 MD_SLCK periods Position  */
#define SUPC_WUMR_WKUPDBC_512_SK              (SUPC_WUMR_WKUPDBC_512_SK_Val << SUPC_WUMR_WKUPDBC_Pos) /* (SUPC_WUMR) WKUPx shall be in its active state for at least 512 MD_SLCK periods Position  */
#define SUPC_WUMR_WKUPDBC_4096_SK             (SUPC_WUMR_WKUPDBC_4096_SK_Val << SUPC_WUMR_WKUPDBC_Pos) /* (SUPC_WUMR) WKUPx shall be in its active state for at least 4,096 MD_SLCK periods Position  */
#define SUPC_WUMR_WKUPDBC_32768_SK            (SUPC_WUMR_WKUPDBC_32768_SK_Val << SUPC_WUMR_WKUPDBC_Pos) /* (SUPC_WUMR) WKUPx shall be in its active state for at least 32,768 MD_SLCK periods Position  */
#define SUPC_WUMR_LPDBC0_Pos                  _UINT32_(16)                                         /* (SUPC_WUMR) Low-power Debouncer Period of WKUPx Position */
#define SUPC_WUMR_LPDBC0_Msk                  (_UINT32_(0x7) << SUPC_WUMR_LPDBC0_Pos)              /* (SUPC_WUMR) Low-power Debouncer Period of WKUPx Mask */
#define SUPC_WUMR_LPDBC0(value)               (SUPC_WUMR_LPDBC0_Msk & (_UINT32_(value) << SUPC_WUMR_LPDBC0_Pos)) /* Assigment of value for LPDBC0 in the SUPC_WUMR register */
#define   SUPC_WUMR_LPDBC0_DISABLE_Val        _UINT32_(0x0)                                        /* (SUPC_WUMR) Disables the low-power debouncers.  */
#define   SUPC_WUMR_LPDBC0_2_RTCOUT_Val       _UINT32_(0x1)                                        /* (SUPC_WUMR) WKUPx in active state for at least 2 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC0_3_RTCOUT_Val       _UINT32_(0x2)                                        /* (SUPC_WUMR) WKUPx in active state for at least 3 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC0_4_RTCOUT_Val       _UINT32_(0x3)                                        /* (SUPC_WUMR) WKUPx in active state for at least 4 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC0_5_RTCOUT_Val       _UINT32_(0x4)                                        /* (SUPC_WUMR) WKUPx in active state for at least 5 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC0_6_RTCOUT_Val       _UINT32_(0x5)                                        /* (SUPC_WUMR) WKUPx in active state for at least 6 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC0_7_RTCOUT_Val       _UINT32_(0x6)                                        /* (SUPC_WUMR) WKUPx in active state for at least 7 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC0_8_RTCOUT_Val       _UINT32_(0x7)                                        /* (SUPC_WUMR) WKUPx in active state for at least 8 RTCOUTx clock periods  */
#define SUPC_WUMR_LPDBC0_DISABLE              (SUPC_WUMR_LPDBC0_DISABLE_Val << SUPC_WUMR_LPDBC0_Pos) /* (SUPC_WUMR) Disables the low-power debouncers. Position  */
#define SUPC_WUMR_LPDBC0_2_RTCOUT             (SUPC_WUMR_LPDBC0_2_RTCOUT_Val << SUPC_WUMR_LPDBC0_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 2 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC0_3_RTCOUT             (SUPC_WUMR_LPDBC0_3_RTCOUT_Val << SUPC_WUMR_LPDBC0_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 3 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC0_4_RTCOUT             (SUPC_WUMR_LPDBC0_4_RTCOUT_Val << SUPC_WUMR_LPDBC0_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 4 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC0_5_RTCOUT             (SUPC_WUMR_LPDBC0_5_RTCOUT_Val << SUPC_WUMR_LPDBC0_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 5 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC0_6_RTCOUT             (SUPC_WUMR_LPDBC0_6_RTCOUT_Val << SUPC_WUMR_LPDBC0_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 6 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC0_7_RTCOUT             (SUPC_WUMR_LPDBC0_7_RTCOUT_Val << SUPC_WUMR_LPDBC0_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 7 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC0_8_RTCOUT             (SUPC_WUMR_LPDBC0_8_RTCOUT_Val << SUPC_WUMR_LPDBC0_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 8 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC1_Pos                  _UINT32_(19)                                         /* (SUPC_WUMR) Low-power Debouncer Period of WKUPx Position */
#define SUPC_WUMR_LPDBC1_Msk                  (_UINT32_(0x7) << SUPC_WUMR_LPDBC1_Pos)              /* (SUPC_WUMR) Low-power Debouncer Period of WKUPx Mask */
#define SUPC_WUMR_LPDBC1(value)               (SUPC_WUMR_LPDBC1_Msk & (_UINT32_(value) << SUPC_WUMR_LPDBC1_Pos)) /* Assigment of value for LPDBC1 in the SUPC_WUMR register */
#define   SUPC_WUMR_LPDBC1_DISABLE_Val        _UINT32_(0x0)                                        /* (SUPC_WUMR) Disables the low-power debouncers.  */
#define   SUPC_WUMR_LPDBC1_2_RTCOUT_Val       _UINT32_(0x1)                                        /* (SUPC_WUMR) WKUPx in active state for at least 2 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC1_3_RTCOUT_Val       _UINT32_(0x2)                                        /* (SUPC_WUMR) WKUPx in active state for at least 3 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC1_4_RTCOUT_Val       _UINT32_(0x3)                                        /* (SUPC_WUMR) WKUPx in active state for at least 4 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC1_5_RTCOUT_Val       _UINT32_(0x4)                                        /* (SUPC_WUMR) WKUPx in active state for at least 5 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC1_6_RTCOUT_Val       _UINT32_(0x5)                                        /* (SUPC_WUMR) WKUPx in active state for at least 6 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC1_7_RTCOUT_Val       _UINT32_(0x6)                                        /* (SUPC_WUMR) WKUPx in active state for at least 7 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC1_8_RTCOUT_Val       _UINT32_(0x7)                                        /* (SUPC_WUMR) WKUPx in active state for at least 8 RTCOUTx clock periods  */
#define SUPC_WUMR_LPDBC1_DISABLE              (SUPC_WUMR_LPDBC1_DISABLE_Val << SUPC_WUMR_LPDBC1_Pos) /* (SUPC_WUMR) Disables the low-power debouncers. Position  */
#define SUPC_WUMR_LPDBC1_2_RTCOUT             (SUPC_WUMR_LPDBC1_2_RTCOUT_Val << SUPC_WUMR_LPDBC1_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 2 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC1_3_RTCOUT             (SUPC_WUMR_LPDBC1_3_RTCOUT_Val << SUPC_WUMR_LPDBC1_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 3 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC1_4_RTCOUT             (SUPC_WUMR_LPDBC1_4_RTCOUT_Val << SUPC_WUMR_LPDBC1_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 4 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC1_5_RTCOUT             (SUPC_WUMR_LPDBC1_5_RTCOUT_Val << SUPC_WUMR_LPDBC1_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 5 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC1_6_RTCOUT             (SUPC_WUMR_LPDBC1_6_RTCOUT_Val << SUPC_WUMR_LPDBC1_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 6 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC1_7_RTCOUT             (SUPC_WUMR_LPDBC1_7_RTCOUT_Val << SUPC_WUMR_LPDBC1_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 7 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC1_8_RTCOUT             (SUPC_WUMR_LPDBC1_8_RTCOUT_Val << SUPC_WUMR_LPDBC1_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 8 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC2_Pos                  _UINT32_(22)                                         /* (SUPC_WUMR) Low-power Debouncer Period of WKUPx Position */
#define SUPC_WUMR_LPDBC2_Msk                  (_UINT32_(0x7) << SUPC_WUMR_LPDBC2_Pos)              /* (SUPC_WUMR) Low-power Debouncer Period of WKUPx Mask */
#define SUPC_WUMR_LPDBC2(value)               (SUPC_WUMR_LPDBC2_Msk & (_UINT32_(value) << SUPC_WUMR_LPDBC2_Pos)) /* Assigment of value for LPDBC2 in the SUPC_WUMR register */
#define   SUPC_WUMR_LPDBC2_DISABLE_Val        _UINT32_(0x0)                                        /* (SUPC_WUMR) Disables the low-power debouncers.  */
#define   SUPC_WUMR_LPDBC2_2_RTCOUT_Val       _UINT32_(0x1)                                        /* (SUPC_WUMR) WKUPx in active state for at least 2 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC2_3_RTCOUT_Val       _UINT32_(0x2)                                        /* (SUPC_WUMR) WKUPx in active state for at least 3 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC2_4_RTCOUT_Val       _UINT32_(0x3)                                        /* (SUPC_WUMR) WKUPx in active state for at least 4 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC2_5_RTCOUT_Val       _UINT32_(0x4)                                        /* (SUPC_WUMR) WKUPx in active state for at least 5 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC2_6_RTCOUT_Val       _UINT32_(0x5)                                        /* (SUPC_WUMR) WKUPx in active state for at least 6 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC2_7_RTCOUT_Val       _UINT32_(0x6)                                        /* (SUPC_WUMR) WKUPx in active state for at least 7 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC2_8_RTCOUT_Val       _UINT32_(0x7)                                        /* (SUPC_WUMR) WKUPx in active state for at least 8 RTCOUTx clock periods  */
#define SUPC_WUMR_LPDBC2_DISABLE              (SUPC_WUMR_LPDBC2_DISABLE_Val << SUPC_WUMR_LPDBC2_Pos) /* (SUPC_WUMR) Disables the low-power debouncers. Position  */
#define SUPC_WUMR_LPDBC2_2_RTCOUT             (SUPC_WUMR_LPDBC2_2_RTCOUT_Val << SUPC_WUMR_LPDBC2_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 2 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC2_3_RTCOUT             (SUPC_WUMR_LPDBC2_3_RTCOUT_Val << SUPC_WUMR_LPDBC2_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 3 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC2_4_RTCOUT             (SUPC_WUMR_LPDBC2_4_RTCOUT_Val << SUPC_WUMR_LPDBC2_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 4 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC2_5_RTCOUT             (SUPC_WUMR_LPDBC2_5_RTCOUT_Val << SUPC_WUMR_LPDBC2_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 5 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC2_6_RTCOUT             (SUPC_WUMR_LPDBC2_6_RTCOUT_Val << SUPC_WUMR_LPDBC2_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 6 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC2_7_RTCOUT             (SUPC_WUMR_LPDBC2_7_RTCOUT_Val << SUPC_WUMR_LPDBC2_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 7 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC2_8_RTCOUT             (SUPC_WUMR_LPDBC2_8_RTCOUT_Val << SUPC_WUMR_LPDBC2_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 8 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC3_Pos                  _UINT32_(25)                                         /* (SUPC_WUMR) Low-power Debouncer Period of WKUPx Position */
#define SUPC_WUMR_LPDBC3_Msk                  (_UINT32_(0x7) << SUPC_WUMR_LPDBC3_Pos)              /* (SUPC_WUMR) Low-power Debouncer Period of WKUPx Mask */
#define SUPC_WUMR_LPDBC3(value)               (SUPC_WUMR_LPDBC3_Msk & (_UINT32_(value) << SUPC_WUMR_LPDBC3_Pos)) /* Assigment of value for LPDBC3 in the SUPC_WUMR register */
#define   SUPC_WUMR_LPDBC3_DISABLE_Val        _UINT32_(0x0)                                        /* (SUPC_WUMR) Disables the low-power debouncers.  */
#define   SUPC_WUMR_LPDBC3_2_RTCOUT_Val       _UINT32_(0x1)                                        /* (SUPC_WUMR) WKUPx in active state for at least 2 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC3_3_RTCOUT_Val       _UINT32_(0x2)                                        /* (SUPC_WUMR) WKUPx in active state for at least 3 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC3_4_RTCOUT_Val       _UINT32_(0x3)                                        /* (SUPC_WUMR) WKUPx in active state for at least 4 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC3_5_RTCOUT_Val       _UINT32_(0x4)                                        /* (SUPC_WUMR) WKUPx in active state for at least 5 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC3_6_RTCOUT_Val       _UINT32_(0x5)                                        /* (SUPC_WUMR) WKUPx in active state for at least 6 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC3_7_RTCOUT_Val       _UINT32_(0x6)                                        /* (SUPC_WUMR) WKUPx in active state for at least 7 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC3_8_RTCOUT_Val       _UINT32_(0x7)                                        /* (SUPC_WUMR) WKUPx in active state for at least 8 RTCOUTx clock periods  */
#define SUPC_WUMR_LPDBC3_DISABLE              (SUPC_WUMR_LPDBC3_DISABLE_Val << SUPC_WUMR_LPDBC3_Pos) /* (SUPC_WUMR) Disables the low-power debouncers. Position  */
#define SUPC_WUMR_LPDBC3_2_RTCOUT             (SUPC_WUMR_LPDBC3_2_RTCOUT_Val << SUPC_WUMR_LPDBC3_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 2 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC3_3_RTCOUT             (SUPC_WUMR_LPDBC3_3_RTCOUT_Val << SUPC_WUMR_LPDBC3_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 3 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC3_4_RTCOUT             (SUPC_WUMR_LPDBC3_4_RTCOUT_Val << SUPC_WUMR_LPDBC3_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 4 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC3_5_RTCOUT             (SUPC_WUMR_LPDBC3_5_RTCOUT_Val << SUPC_WUMR_LPDBC3_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 5 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC3_6_RTCOUT             (SUPC_WUMR_LPDBC3_6_RTCOUT_Val << SUPC_WUMR_LPDBC3_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 6 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC3_7_RTCOUT             (SUPC_WUMR_LPDBC3_7_RTCOUT_Val << SUPC_WUMR_LPDBC3_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 7 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC3_8_RTCOUT             (SUPC_WUMR_LPDBC3_8_RTCOUT_Val << SUPC_WUMR_LPDBC3_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 8 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC4_Pos                  _UINT32_(28)                                         /* (SUPC_WUMR) Low-power Debouncer Period of WKUPx Position */
#define SUPC_WUMR_LPDBC4_Msk                  (_UINT32_(0x7) << SUPC_WUMR_LPDBC4_Pos)              /* (SUPC_WUMR) Low-power Debouncer Period of WKUPx Mask */
#define SUPC_WUMR_LPDBC4(value)               (SUPC_WUMR_LPDBC4_Msk & (_UINT32_(value) << SUPC_WUMR_LPDBC4_Pos)) /* Assigment of value for LPDBC4 in the SUPC_WUMR register */
#define   SUPC_WUMR_LPDBC4_DISABLE_Val        _UINT32_(0x0)                                        /* (SUPC_WUMR) Disables the low-power debouncers.  */
#define   SUPC_WUMR_LPDBC4_2_RTCOUT_Val       _UINT32_(0x1)                                        /* (SUPC_WUMR) WKUPx in active state for at least 2 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC4_3_RTCOUT_Val       _UINT32_(0x2)                                        /* (SUPC_WUMR) WKUPx in active state for at least 3 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC4_4_RTCOUT_Val       _UINT32_(0x3)                                        /* (SUPC_WUMR) WKUPx in active state for at least 4 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC4_5_RTCOUT_Val       _UINT32_(0x4)                                        /* (SUPC_WUMR) WKUPx in active state for at least 5 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC4_6_RTCOUT_Val       _UINT32_(0x5)                                        /* (SUPC_WUMR) WKUPx in active state for at least 6 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC4_7_RTCOUT_Val       _UINT32_(0x6)                                        /* (SUPC_WUMR) WKUPx in active state for at least 7 RTCOUTx clock periods  */
#define   SUPC_WUMR_LPDBC4_8_RTCOUT_Val       _UINT32_(0x7)                                        /* (SUPC_WUMR) WKUPx in active state for at least 8 RTCOUTx clock periods  */
#define SUPC_WUMR_LPDBC4_DISABLE              (SUPC_WUMR_LPDBC4_DISABLE_Val << SUPC_WUMR_LPDBC4_Pos) /* (SUPC_WUMR) Disables the low-power debouncers. Position  */
#define SUPC_WUMR_LPDBC4_2_RTCOUT             (SUPC_WUMR_LPDBC4_2_RTCOUT_Val << SUPC_WUMR_LPDBC4_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 2 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC4_3_RTCOUT             (SUPC_WUMR_LPDBC4_3_RTCOUT_Val << SUPC_WUMR_LPDBC4_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 3 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC4_4_RTCOUT             (SUPC_WUMR_LPDBC4_4_RTCOUT_Val << SUPC_WUMR_LPDBC4_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 4 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC4_5_RTCOUT             (SUPC_WUMR_LPDBC4_5_RTCOUT_Val << SUPC_WUMR_LPDBC4_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 5 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC4_6_RTCOUT             (SUPC_WUMR_LPDBC4_6_RTCOUT_Val << SUPC_WUMR_LPDBC4_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 6 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC4_7_RTCOUT             (SUPC_WUMR_LPDBC4_7_RTCOUT_Val << SUPC_WUMR_LPDBC4_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 7 RTCOUTx clock periods Position  */
#define SUPC_WUMR_LPDBC4_8_RTCOUT             (SUPC_WUMR_LPDBC4_8_RTCOUT_Val << SUPC_WUMR_LPDBC4_Pos) /* (SUPC_WUMR) WKUPx in active state for at least 8 RTCOUTx clock periods Position  */
#define SUPC_WUMR_Msk                         _UINT32_(0x7FFF771F)                                 /* (SUPC_WUMR) Register Mask  */

#define SUPC_WUMR_LPDBCEN_Pos                 _UINT32_(0)                                          /* (SUPC_WUMR Position) Tamper Enable for WKUPx Pin */
#define SUPC_WUMR_LPDBCEN_Msk                 (_UINT32_(0x1F) << SUPC_WUMR_LPDBCEN_Pos)            /* (SUPC_WUMR Mask) LPDBCEN */
#define SUPC_WUMR_LPDBCEN(value)              (SUPC_WUMR_LPDBCEN_Msk & (_UINT32_(value) << SUPC_WUMR_LPDBCEN_Pos)) 

/* -------- SUPC_WUIR : (SUPC Offset: 0x10) (R/W 32) Wakeup Inputs Register -------- */
#define SUPC_WUIR_WKUPEN0_Pos                 _UINT32_(0)                                          /* (SUPC_WUIR) Wake-up Input Enable 0 Position */
#define SUPC_WUIR_WKUPEN0_Msk                 (_UINT32_(0x1) << SUPC_WUIR_WKUPEN0_Pos)             /* (SUPC_WUIR) Wake-up Input Enable 0 Mask */
#define SUPC_WUIR_WKUPEN0(value)              (SUPC_WUIR_WKUPEN0_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPEN0_Pos)) /* Assigment of value for WKUPEN0 in the SUPC_WUIR register */
#define SUPC_WUIR_WKUPEN1_Pos                 _UINT32_(1)                                          /* (SUPC_WUIR) Wake-up Input Enable 1 Position */
#define SUPC_WUIR_WKUPEN1_Msk                 (_UINT32_(0x1) << SUPC_WUIR_WKUPEN1_Pos)             /* (SUPC_WUIR) Wake-up Input Enable 1 Mask */
#define SUPC_WUIR_WKUPEN1(value)              (SUPC_WUIR_WKUPEN1_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPEN1_Pos)) /* Assigment of value for WKUPEN1 in the SUPC_WUIR register */
#define SUPC_WUIR_WKUPEN2_Pos                 _UINT32_(2)                                          /* (SUPC_WUIR) Wake-up Input Enable 2 Position */
#define SUPC_WUIR_WKUPEN2_Msk                 (_UINT32_(0x1) << SUPC_WUIR_WKUPEN2_Pos)             /* (SUPC_WUIR) Wake-up Input Enable 2 Mask */
#define SUPC_WUIR_WKUPEN2(value)              (SUPC_WUIR_WKUPEN2_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPEN2_Pos)) /* Assigment of value for WKUPEN2 in the SUPC_WUIR register */
#define SUPC_WUIR_WKUPEN3_Pos                 _UINT32_(3)                                          /* (SUPC_WUIR) Wake-up Input Enable 3 Position */
#define SUPC_WUIR_WKUPEN3_Msk                 (_UINT32_(0x1) << SUPC_WUIR_WKUPEN3_Pos)             /* (SUPC_WUIR) Wake-up Input Enable 3 Mask */
#define SUPC_WUIR_WKUPEN3(value)              (SUPC_WUIR_WKUPEN3_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPEN3_Pos)) /* Assigment of value for WKUPEN3 in the SUPC_WUIR register */
#define SUPC_WUIR_WKUPEN4_Pos                 _UINT32_(4)                                          /* (SUPC_WUIR) Wake-up Input Enable 4 Position */
#define SUPC_WUIR_WKUPEN4_Msk                 (_UINT32_(0x1) << SUPC_WUIR_WKUPEN4_Pos)             /* (SUPC_WUIR) Wake-up Input Enable 4 Mask */
#define SUPC_WUIR_WKUPEN4(value)              (SUPC_WUIR_WKUPEN4_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPEN4_Pos)) /* Assigment of value for WKUPEN4 in the SUPC_WUIR register */
#define SUPC_WUIR_WKUPEN5_Pos                 _UINT32_(5)                                          /* (SUPC_WUIR) Wake-up Input Enable 5 Position */
#define SUPC_WUIR_WKUPEN5_Msk                 (_UINT32_(0x1) << SUPC_WUIR_WKUPEN5_Pos)             /* (SUPC_WUIR) Wake-up Input Enable 5 Mask */
#define SUPC_WUIR_WKUPEN5(value)              (SUPC_WUIR_WKUPEN5_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPEN5_Pos)) /* Assigment of value for WKUPEN5 in the SUPC_WUIR register */
#define SUPC_WUIR_WKUPEN6_Pos                 _UINT32_(6)                                          /* (SUPC_WUIR) Wake-up Input Enable 6 Position */
#define SUPC_WUIR_WKUPEN6_Msk                 (_UINT32_(0x1) << SUPC_WUIR_WKUPEN6_Pos)             /* (SUPC_WUIR) Wake-up Input Enable 6 Mask */
#define SUPC_WUIR_WKUPEN6(value)              (SUPC_WUIR_WKUPEN6_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPEN6_Pos)) /* Assigment of value for WKUPEN6 in the SUPC_WUIR register */
#define SUPC_WUIR_WKUPEN7_Pos                 _UINT32_(7)                                          /* (SUPC_WUIR) Wake-up Input Enable 7 Position */
#define SUPC_WUIR_WKUPEN7_Msk                 (_UINT32_(0x1) << SUPC_WUIR_WKUPEN7_Pos)             /* (SUPC_WUIR) Wake-up Input Enable 7 Mask */
#define SUPC_WUIR_WKUPEN7(value)              (SUPC_WUIR_WKUPEN7_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPEN7_Pos)) /* Assigment of value for WKUPEN7 in the SUPC_WUIR register */
#define SUPC_WUIR_WKUPEN8_Pos                 _UINT32_(8)                                          /* (SUPC_WUIR) Wake-up Input Enable 8 Position */
#define SUPC_WUIR_WKUPEN8_Msk                 (_UINT32_(0x1) << SUPC_WUIR_WKUPEN8_Pos)             /* (SUPC_WUIR) Wake-up Input Enable 8 Mask */
#define SUPC_WUIR_WKUPEN8(value)              (SUPC_WUIR_WKUPEN8_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPEN8_Pos)) /* Assigment of value for WKUPEN8 in the SUPC_WUIR register */
#define SUPC_WUIR_WKUPEN9_Pos                 _UINT32_(9)                                          /* (SUPC_WUIR) Wake-up Input Enable 9 Position */
#define SUPC_WUIR_WKUPEN9_Msk                 (_UINT32_(0x1) << SUPC_WUIR_WKUPEN9_Pos)             /* (SUPC_WUIR) Wake-up Input Enable 9 Mask */
#define SUPC_WUIR_WKUPEN9(value)              (SUPC_WUIR_WKUPEN9_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPEN9_Pos)) /* Assigment of value for WKUPEN9 in the SUPC_WUIR register */
#define SUPC_WUIR_WKUPEN10_Pos                _UINT32_(10)                                         /* (SUPC_WUIR) Wake-up Input Enable 10 Position */
#define SUPC_WUIR_WKUPEN10_Msk                (_UINT32_(0x1) << SUPC_WUIR_WKUPEN10_Pos)            /* (SUPC_WUIR) Wake-up Input Enable 10 Mask */
#define SUPC_WUIR_WKUPEN10(value)             (SUPC_WUIR_WKUPEN10_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPEN10_Pos)) /* Assigment of value for WKUPEN10 in the SUPC_WUIR register */
#define SUPC_WUIR_WKUPEN11_Pos                _UINT32_(11)                                         /* (SUPC_WUIR) Wake-up Input Enable 11 Position */
#define SUPC_WUIR_WKUPEN11_Msk                (_UINT32_(0x1) << SUPC_WUIR_WKUPEN11_Pos)            /* (SUPC_WUIR) Wake-up Input Enable 11 Mask */
#define SUPC_WUIR_WKUPEN11(value)             (SUPC_WUIR_WKUPEN11_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPEN11_Pos)) /* Assigment of value for WKUPEN11 in the SUPC_WUIR register */
#define SUPC_WUIR_WKUPEN12_Pos                _UINT32_(12)                                         /* (SUPC_WUIR) Wake-up Input Enable 12 Position */
#define SUPC_WUIR_WKUPEN12_Msk                (_UINT32_(0x1) << SUPC_WUIR_WKUPEN12_Pos)            /* (SUPC_WUIR) Wake-up Input Enable 12 Mask */
#define SUPC_WUIR_WKUPEN12(value)             (SUPC_WUIR_WKUPEN12_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPEN12_Pos)) /* Assigment of value for WKUPEN12 in the SUPC_WUIR register */
#define SUPC_WUIR_WKUPEN13_Pos                _UINT32_(13)                                         /* (SUPC_WUIR) Wake-up Input Enable 13 Position */
#define SUPC_WUIR_WKUPEN13_Msk                (_UINT32_(0x1) << SUPC_WUIR_WKUPEN13_Pos)            /* (SUPC_WUIR) Wake-up Input Enable 13 Mask */
#define SUPC_WUIR_WKUPEN13(value)             (SUPC_WUIR_WKUPEN13_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPEN13_Pos)) /* Assigment of value for WKUPEN13 in the SUPC_WUIR register */
#define SUPC_WUIR_WKUPEN14_Pos                _UINT32_(14)                                         /* (SUPC_WUIR) Wake-up Input Enable 14 Position */
#define SUPC_WUIR_WKUPEN14_Msk                (_UINT32_(0x1) << SUPC_WUIR_WKUPEN14_Pos)            /* (SUPC_WUIR) Wake-up Input Enable 14 Mask */
#define SUPC_WUIR_WKUPEN14(value)             (SUPC_WUIR_WKUPEN14_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPEN14_Pos)) /* Assigment of value for WKUPEN14 in the SUPC_WUIR register */
#define SUPC_WUIR_WKUPT0_Pos                  _UINT32_(16)                                         /* (SUPC_WUIR) Wake-up Input Type 0 Position */
#define SUPC_WUIR_WKUPT0_Msk                  (_UINT32_(0x1) << SUPC_WUIR_WKUPT0_Pos)              /* (SUPC_WUIR) Wake-up Input Type 0 Mask */
#define SUPC_WUIR_WKUPT0(value)               (SUPC_WUIR_WKUPT0_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPT0_Pos)) /* Assigment of value for WKUPT0 in the SUPC_WUIR register */
#define   SUPC_WUIR_WKUPT0_LOW_Val            _UINT32_(0x0)                                        /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT0_HIGH_Val           _UINT32_(0x1)                                        /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT0_LOW                  (SUPC_WUIR_WKUPT0_LOW_Val << SUPC_WUIR_WKUPT0_Pos)   /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT0_HIGH                 (SUPC_WUIR_WKUPT0_HIGH_Val << SUPC_WUIR_WKUPT0_Pos)  /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT1_Pos                  _UINT32_(17)                                         /* (SUPC_WUIR) Wake-up Input Type 1 Position */
#define SUPC_WUIR_WKUPT1_Msk                  (_UINT32_(0x1) << SUPC_WUIR_WKUPT1_Pos)              /* (SUPC_WUIR) Wake-up Input Type 1 Mask */
#define SUPC_WUIR_WKUPT1(value)               (SUPC_WUIR_WKUPT1_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPT1_Pos)) /* Assigment of value for WKUPT1 in the SUPC_WUIR register */
#define   SUPC_WUIR_WKUPT1_LOW_Val            _UINT32_(0x0)                                        /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT1_HIGH_Val           _UINT32_(0x1)                                        /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT1_LOW                  (SUPC_WUIR_WKUPT1_LOW_Val << SUPC_WUIR_WKUPT1_Pos)   /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT1_HIGH                 (SUPC_WUIR_WKUPT1_HIGH_Val << SUPC_WUIR_WKUPT1_Pos)  /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT2_Pos                  _UINT32_(18)                                         /* (SUPC_WUIR) Wake-up Input Type 2 Position */
#define SUPC_WUIR_WKUPT2_Msk                  (_UINT32_(0x1) << SUPC_WUIR_WKUPT2_Pos)              /* (SUPC_WUIR) Wake-up Input Type 2 Mask */
#define SUPC_WUIR_WKUPT2(value)               (SUPC_WUIR_WKUPT2_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPT2_Pos)) /* Assigment of value for WKUPT2 in the SUPC_WUIR register */
#define   SUPC_WUIR_WKUPT2_LOW_Val            _UINT32_(0x0)                                        /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT2_HIGH_Val           _UINT32_(0x1)                                        /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT2_LOW                  (SUPC_WUIR_WKUPT2_LOW_Val << SUPC_WUIR_WKUPT2_Pos)   /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT2_HIGH                 (SUPC_WUIR_WKUPT2_HIGH_Val << SUPC_WUIR_WKUPT2_Pos)  /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT3_Pos                  _UINT32_(19)                                         /* (SUPC_WUIR) Wake-up Input Type 3 Position */
#define SUPC_WUIR_WKUPT3_Msk                  (_UINT32_(0x1) << SUPC_WUIR_WKUPT3_Pos)              /* (SUPC_WUIR) Wake-up Input Type 3 Mask */
#define SUPC_WUIR_WKUPT3(value)               (SUPC_WUIR_WKUPT3_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPT3_Pos)) /* Assigment of value for WKUPT3 in the SUPC_WUIR register */
#define   SUPC_WUIR_WKUPT3_LOW_Val            _UINT32_(0x0)                                        /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT3_HIGH_Val           _UINT32_(0x1)                                        /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT3_LOW                  (SUPC_WUIR_WKUPT3_LOW_Val << SUPC_WUIR_WKUPT3_Pos)   /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT3_HIGH                 (SUPC_WUIR_WKUPT3_HIGH_Val << SUPC_WUIR_WKUPT3_Pos)  /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT4_Pos                  _UINT32_(20)                                         /* (SUPC_WUIR) Wake-up Input Type 4 Position */
#define SUPC_WUIR_WKUPT4_Msk                  (_UINT32_(0x1) << SUPC_WUIR_WKUPT4_Pos)              /* (SUPC_WUIR) Wake-up Input Type 4 Mask */
#define SUPC_WUIR_WKUPT4(value)               (SUPC_WUIR_WKUPT4_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPT4_Pos)) /* Assigment of value for WKUPT4 in the SUPC_WUIR register */
#define   SUPC_WUIR_WKUPT4_LOW_Val            _UINT32_(0x0)                                        /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT4_HIGH_Val           _UINT32_(0x1)                                        /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT4_LOW                  (SUPC_WUIR_WKUPT4_LOW_Val << SUPC_WUIR_WKUPT4_Pos)   /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT4_HIGH                 (SUPC_WUIR_WKUPT4_HIGH_Val << SUPC_WUIR_WKUPT4_Pos)  /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT5_Pos                  _UINT32_(21)                                         /* (SUPC_WUIR) Wake-up Input Type 5 Position */
#define SUPC_WUIR_WKUPT5_Msk                  (_UINT32_(0x1) << SUPC_WUIR_WKUPT5_Pos)              /* (SUPC_WUIR) Wake-up Input Type 5 Mask */
#define SUPC_WUIR_WKUPT5(value)               (SUPC_WUIR_WKUPT5_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPT5_Pos)) /* Assigment of value for WKUPT5 in the SUPC_WUIR register */
#define   SUPC_WUIR_WKUPT5_LOW_Val            _UINT32_(0x0)                                        /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT5_HIGH_Val           _UINT32_(0x1)                                        /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT5_LOW                  (SUPC_WUIR_WKUPT5_LOW_Val << SUPC_WUIR_WKUPT5_Pos)   /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT5_HIGH                 (SUPC_WUIR_WKUPT5_HIGH_Val << SUPC_WUIR_WKUPT5_Pos)  /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT6_Pos                  _UINT32_(22)                                         /* (SUPC_WUIR) Wake-up Input Type 6 Position */
#define SUPC_WUIR_WKUPT6_Msk                  (_UINT32_(0x1) << SUPC_WUIR_WKUPT6_Pos)              /* (SUPC_WUIR) Wake-up Input Type 6 Mask */
#define SUPC_WUIR_WKUPT6(value)               (SUPC_WUIR_WKUPT6_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPT6_Pos)) /* Assigment of value for WKUPT6 in the SUPC_WUIR register */
#define   SUPC_WUIR_WKUPT6_LOW_Val            _UINT32_(0x0)                                        /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT6_HIGH_Val           _UINT32_(0x1)                                        /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT6_LOW                  (SUPC_WUIR_WKUPT6_LOW_Val << SUPC_WUIR_WKUPT6_Pos)   /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT6_HIGH                 (SUPC_WUIR_WKUPT6_HIGH_Val << SUPC_WUIR_WKUPT6_Pos)  /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT7_Pos                  _UINT32_(23)                                         /* (SUPC_WUIR) Wake-up Input Type 7 Position */
#define SUPC_WUIR_WKUPT7_Msk                  (_UINT32_(0x1) << SUPC_WUIR_WKUPT7_Pos)              /* (SUPC_WUIR) Wake-up Input Type 7 Mask */
#define SUPC_WUIR_WKUPT7(value)               (SUPC_WUIR_WKUPT7_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPT7_Pos)) /* Assigment of value for WKUPT7 in the SUPC_WUIR register */
#define   SUPC_WUIR_WKUPT7_LOW_Val            _UINT32_(0x0)                                        /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT7_HIGH_Val           _UINT32_(0x1)                                        /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT7_LOW                  (SUPC_WUIR_WKUPT7_LOW_Val << SUPC_WUIR_WKUPT7_Pos)   /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT7_HIGH                 (SUPC_WUIR_WKUPT7_HIGH_Val << SUPC_WUIR_WKUPT7_Pos)  /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT8_Pos                  _UINT32_(24)                                         /* (SUPC_WUIR) Wake-up Input Type 8 Position */
#define SUPC_WUIR_WKUPT8_Msk                  (_UINT32_(0x1) << SUPC_WUIR_WKUPT8_Pos)              /* (SUPC_WUIR) Wake-up Input Type 8 Mask */
#define SUPC_WUIR_WKUPT8(value)               (SUPC_WUIR_WKUPT8_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPT8_Pos)) /* Assigment of value for WKUPT8 in the SUPC_WUIR register */
#define   SUPC_WUIR_WKUPT8_LOW_Val            _UINT32_(0x0)                                        /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT8_HIGH_Val           _UINT32_(0x1)                                        /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT8_LOW                  (SUPC_WUIR_WKUPT8_LOW_Val << SUPC_WUIR_WKUPT8_Pos)   /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT8_HIGH                 (SUPC_WUIR_WKUPT8_HIGH_Val << SUPC_WUIR_WKUPT8_Pos)  /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT9_Pos                  _UINT32_(25)                                         /* (SUPC_WUIR) Wake-up Input Type 9 Position */
#define SUPC_WUIR_WKUPT9_Msk                  (_UINT32_(0x1) << SUPC_WUIR_WKUPT9_Pos)              /* (SUPC_WUIR) Wake-up Input Type 9 Mask */
#define SUPC_WUIR_WKUPT9(value)               (SUPC_WUIR_WKUPT9_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPT9_Pos)) /* Assigment of value for WKUPT9 in the SUPC_WUIR register */
#define   SUPC_WUIR_WKUPT9_LOW_Val            _UINT32_(0x0)                                        /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT9_HIGH_Val           _UINT32_(0x1)                                        /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT9_LOW                  (SUPC_WUIR_WKUPT9_LOW_Val << SUPC_WUIR_WKUPT9_Pos)   /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT9_HIGH                 (SUPC_WUIR_WKUPT9_HIGH_Val << SUPC_WUIR_WKUPT9_Pos)  /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT10_Pos                 _UINT32_(26)                                         /* (SUPC_WUIR) Wake-up Input Type 10 Position */
#define SUPC_WUIR_WKUPT10_Msk                 (_UINT32_(0x1) << SUPC_WUIR_WKUPT10_Pos)             /* (SUPC_WUIR) Wake-up Input Type 10 Mask */
#define SUPC_WUIR_WKUPT10(value)              (SUPC_WUIR_WKUPT10_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPT10_Pos)) /* Assigment of value for WKUPT10 in the SUPC_WUIR register */
#define   SUPC_WUIR_WKUPT10_LOW_Val           _UINT32_(0x0)                                        /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT10_HIGH_Val          _UINT32_(0x1)                                        /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT10_LOW                 (SUPC_WUIR_WKUPT10_LOW_Val << SUPC_WUIR_WKUPT10_Pos) /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT10_HIGH                (SUPC_WUIR_WKUPT10_HIGH_Val << SUPC_WUIR_WKUPT10_Pos) /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT11_Pos                 _UINT32_(27)                                         /* (SUPC_WUIR) Wake-up Input Type 11 Position */
#define SUPC_WUIR_WKUPT11_Msk                 (_UINT32_(0x1) << SUPC_WUIR_WKUPT11_Pos)             /* (SUPC_WUIR) Wake-up Input Type 11 Mask */
#define SUPC_WUIR_WKUPT11(value)              (SUPC_WUIR_WKUPT11_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPT11_Pos)) /* Assigment of value for WKUPT11 in the SUPC_WUIR register */
#define   SUPC_WUIR_WKUPT11_LOW_Val           _UINT32_(0x0)                                        /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT11_HIGH_Val          _UINT32_(0x1)                                        /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT11_LOW                 (SUPC_WUIR_WKUPT11_LOW_Val << SUPC_WUIR_WKUPT11_Pos) /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT11_HIGH                (SUPC_WUIR_WKUPT11_HIGH_Val << SUPC_WUIR_WKUPT11_Pos) /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT12_Pos                 _UINT32_(28)                                         /* (SUPC_WUIR) Wake-up Input Type 12 Position */
#define SUPC_WUIR_WKUPT12_Msk                 (_UINT32_(0x1) << SUPC_WUIR_WKUPT12_Pos)             /* (SUPC_WUIR) Wake-up Input Type 12 Mask */
#define SUPC_WUIR_WKUPT12(value)              (SUPC_WUIR_WKUPT12_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPT12_Pos)) /* Assigment of value for WKUPT12 in the SUPC_WUIR register */
#define   SUPC_WUIR_WKUPT12_LOW_Val           _UINT32_(0x0)                                        /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT12_HIGH_Val          _UINT32_(0x1)                                        /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT12_LOW                 (SUPC_WUIR_WKUPT12_LOW_Val << SUPC_WUIR_WKUPT12_Pos) /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT12_HIGH                (SUPC_WUIR_WKUPT12_HIGH_Val << SUPC_WUIR_WKUPT12_Pos) /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT13_Pos                 _UINT32_(29)                                         /* (SUPC_WUIR) Wake-up Input Type 13 Position */
#define SUPC_WUIR_WKUPT13_Msk                 (_UINT32_(0x1) << SUPC_WUIR_WKUPT13_Pos)             /* (SUPC_WUIR) Wake-up Input Type 13 Mask */
#define SUPC_WUIR_WKUPT13(value)              (SUPC_WUIR_WKUPT13_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPT13_Pos)) /* Assigment of value for WKUPT13 in the SUPC_WUIR register */
#define   SUPC_WUIR_WKUPT13_LOW_Val           _UINT32_(0x0)                                        /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT13_HIGH_Val          _UINT32_(0x1)                                        /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT13_LOW                 (SUPC_WUIR_WKUPT13_LOW_Val << SUPC_WUIR_WKUPT13_Pos) /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT13_HIGH                (SUPC_WUIR_WKUPT13_HIGH_Val << SUPC_WUIR_WKUPT13_Pos) /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT14_Pos                 _UINT32_(30)                                         /* (SUPC_WUIR) Wake-up Input Type 14 Position */
#define SUPC_WUIR_WKUPT14_Msk                 (_UINT32_(0x1) << SUPC_WUIR_WKUPT14_Pos)             /* (SUPC_WUIR) Wake-up Input Type 14 Mask */
#define SUPC_WUIR_WKUPT14(value)              (SUPC_WUIR_WKUPT14_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPT14_Pos)) /* Assigment of value for WKUPT14 in the SUPC_WUIR register */
#define   SUPC_WUIR_WKUPT14_LOW_Val           _UINT32_(0x0)                                        /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define   SUPC_WUIR_WKUPT14_HIGH_Val          _UINT32_(0x1)                                        /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply.  */
#define SUPC_WUIR_WKUPT14_LOW                 (SUPC_WUIR_WKUPT14_LOW_Val << SUPC_WUIR_WKUPT14_Pos) /* (SUPC_WUIR) A falling edge followed by a low level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_WKUPT14_HIGH                (SUPC_WUIR_WKUPT14_HIGH_Val << SUPC_WUIR_WKUPT14_Pos) /* (SUPC_WUIR) A rising edge followed by a high level for a period defined by WKUPDBC on the corresponding wake-up input forces the wake-up of the core power supply. Position  */
#define SUPC_WUIR_Msk                         _UINT32_(0x7FFF7FFF)                                 /* (SUPC_WUIR) Register Mask  */

#define SUPC_WUIR_WKUPEN_Pos                  _UINT32_(0)                                          /* (SUPC_WUIR Position) Wake-up Input Enable x */
#define SUPC_WUIR_WKUPEN_Msk                  (_UINT32_(0x7FFF) << SUPC_WUIR_WKUPEN_Pos)           /* (SUPC_WUIR Mask) WKUPEN */
#define SUPC_WUIR_WKUPEN(value)               (SUPC_WUIR_WKUPEN_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPEN_Pos)) 
#define SUPC_WUIR_WKUPT_Pos                   _UINT32_(16)                                         /* (SUPC_WUIR Position) Wake-up Input Type x4 */
#define SUPC_WUIR_WKUPT_Msk                   (_UINT32_(0x7FFF) << SUPC_WUIR_WKUPT_Pos)            /* (SUPC_WUIR Mask) WKUPT */
#define SUPC_WUIR_WKUPT(value)                (SUPC_WUIR_WKUPT_Msk & (_UINT32_(value) << SUPC_WUIR_WKUPT_Pos)) 

/* -------- SUPC_SR : (SUPC Offset: 0x14) ( R/ 32) Status Register -------- */
#define SUPC_SR_TDOSCSEL_Pos                  _UINT32_(0)                                          /* (SUPC_SR) Timing Domain 32 kHz Oscillator Selection Status Position */
#define SUPC_SR_TDOSCSEL_Msk                  (_UINT32_(0x1) << SUPC_SR_TDOSCSEL_Pos)              /* (SUPC_SR) Timing Domain 32 kHz Oscillator Selection Status Mask */
#define SUPC_SR_TDOSCSEL(value)               (SUPC_SR_TDOSCSEL_Msk & (_UINT32_(value) << SUPC_SR_TDOSCSEL_Pos)) /* Assigment of value for TDOSCSEL in the SUPC_SR register */
#define   SUPC_SR_TDOSCSEL_RC_Val             _UINT32_(0x0)                                        /* (SUPC_SR) The timing domain slow clock (TD_SLCK) source is the slow RC oscillator output.  */
#define   SUPC_SR_TDOSCSEL_XTAL_Val           _UINT32_(0x1)                                        /* (SUPC_SR) The timing domain slow clock source is the 32.768 kHz crystal oscillator output.  */
#define SUPC_SR_TDOSCSEL_RC                   (SUPC_SR_TDOSCSEL_RC_Val << SUPC_SR_TDOSCSEL_Pos)    /* (SUPC_SR) The timing domain slow clock (TD_SLCK) source is the slow RC oscillator output. Position  */
#define SUPC_SR_TDOSCSEL_XTAL                 (SUPC_SR_TDOSCSEL_XTAL_Val << SUPC_SR_TDOSCSEL_Pos)  /* (SUPC_SR) The timing domain slow clock source is the 32.768 kHz crystal oscillator output. Position  */
#define SUPC_SR_VDD3V3SMWS_Pos                _UINT32_(2)                                          /* (SUPC_SR) VDD3V3 Supply Monitor Wake-up Status (cleared by reading SUPC_WUSR) Position */
#define SUPC_SR_VDD3V3SMWS_Msk                (_UINT32_(0x1) << SUPC_SR_VDD3V3SMWS_Pos)            /* (SUPC_SR) VDD3V3 Supply Monitor Wake-up Status (cleared by reading SUPC_WUSR) Mask */
#define SUPC_SR_VDD3V3SMWS(value)             (SUPC_SR_VDD3V3SMWS_Msk & (_UINT32_(value) << SUPC_SR_VDD3V3SMWS_Pos)) /* Assigment of value for VDD3V3SMWS in the SUPC_SR register */
#define SUPC_SR_CORSMRSTS_Pos                 _UINT32_(3)                                          /* (SUPC_SR) VDDCORE Supply Monitor Reset Status (cleared by reading SUPC_WUSR) Position */
#define SUPC_SR_CORSMRSTS_Msk                 (_UINT32_(0x1) << SUPC_SR_CORSMRSTS_Pos)             /* (SUPC_SR) VDDCORE Supply Monitor Reset Status (cleared by reading SUPC_WUSR) Mask */
#define SUPC_SR_CORSMRSTS(value)              (SUPC_SR_CORSMRSTS_Msk & (_UINT32_(value) << SUPC_SR_CORSMRSTS_Pos)) /* Assigment of value for CORSMRSTS in the SUPC_SR register */
#define SUPC_SR_VDD3V3SMRSTS_Pos              _UINT32_(4)                                          /* (SUPC_SR) VDD3V3 Supply Monitor Reset Status (cleared by reading SUPC_WUSR) Position */
#define SUPC_SR_VDD3V3SMRSTS_Msk              (_UINT32_(0x1) << SUPC_SR_VDD3V3SMRSTS_Pos)          /* (SUPC_SR) VDD3V3 Supply Monitor Reset Status (cleared by reading SUPC_WUSR) Mask */
#define SUPC_SR_VDD3V3SMRSTS(value)           (SUPC_SR_VDD3V3SMRSTS_Msk & (_UINT32_(value) << SUPC_SR_VDD3V3SMRSTS_Pos)) /* Assigment of value for VDD3V3SMRSTS in the SUPC_SR register */
#define SUPC_SR_VDD3V3SMIS_Pos                _UINT32_(5)                                          /* (SUPC_SR) VDD3V3 Supply Monitor Interrupt Status (cleared by reading SUPC_ISR) Position */
#define SUPC_SR_VDD3V3SMIS_Msk                (_UINT32_(0x1) << SUPC_SR_VDD3V3SMIS_Pos)            /* (SUPC_SR) VDD3V3 Supply Monitor Interrupt Status (cleared by reading SUPC_ISR) Mask */
#define SUPC_SR_VDD3V3SMIS(value)             (SUPC_SR_VDD3V3SMIS_Msk & (_UINT32_(value) << SUPC_SR_VDD3V3SMIS_Pos)) /* Assigment of value for VDD3V3SMIS in the SUPC_SR register */
#define SUPC_SR_VDD3V3SMS_Pos                 _UINT32_(6)                                          /* (SUPC_SR) VDD3V3 Supply Monitor Output Status Position */
#define SUPC_SR_VDD3V3SMS_Msk                 (_UINT32_(0x1) << SUPC_SR_VDD3V3SMS_Pos)             /* (SUPC_SR) VDD3V3 Supply Monitor Output Status Mask */
#define SUPC_SR_VDD3V3SMS(value)              (SUPC_SR_VDD3V3SMS_Msk & (_UINT32_(value) << SUPC_SR_VDD3V3SMS_Pos)) /* Assigment of value for VDD3V3SMS in the SUPC_SR register */
#define SUPC_SR_LCDS_Pos                      _UINT32_(8)                                          /* (SUPC_SR) LCD Power Domain Status Position */
#define SUPC_SR_LCDS_Msk                      (_UINT32_(0x1) << SUPC_SR_LCDS_Pos)                  /* (SUPC_SR) LCD Power Domain Status Mask */
#define SUPC_SR_LCDS(value)                   (SUPC_SR_LCDS_Msk & (_UINT32_(value) << SUPC_SR_LCDS_Pos)) /* Assigment of value for LCDS in the SUPC_SR register */
#define SUPC_SR_FWUPS_Pos                     _UINT32_(12)                                         /* (SUPC_SR) Force Wake-up Pin Status Position */
#define SUPC_SR_FWUPS_Msk                     (_UINT32_(0x1) << SUPC_SR_FWUPS_Pos)                 /* (SUPC_SR) Force Wake-up Pin Status Mask */
#define SUPC_SR_FWUPS(value)                  (SUPC_SR_FWUPS_Msk & (_UINT32_(value) << SUPC_SR_FWUPS_Pos)) /* Assigment of value for FWUPS in the SUPC_SR register */
#define SUPC_SR_LPDBCS0_Pos                   _UINT32_(16)                                         /* (SUPC_SR) Tamper Detection Wake-up Status (cleared by reading SUPC_ISR) Position */
#define SUPC_SR_LPDBCS0_Msk                   (_UINT32_(0x1) << SUPC_SR_LPDBCS0_Pos)               /* (SUPC_SR) Tamper Detection Wake-up Status (cleared by reading SUPC_ISR) Mask */
#define SUPC_SR_LPDBCS0(value)                (SUPC_SR_LPDBCS0_Msk & (_UINT32_(value) << SUPC_SR_LPDBCS0_Pos)) /* Assigment of value for LPDBCS0 in the SUPC_SR register */
#define SUPC_SR_LPDBCS1_Pos                   _UINT32_(17)                                         /* (SUPC_SR) Tamper Detection Wake-up Status (cleared by reading SUPC_ISR) Position */
#define SUPC_SR_LPDBCS1_Msk                   (_UINT32_(0x1) << SUPC_SR_LPDBCS1_Pos)               /* (SUPC_SR) Tamper Detection Wake-up Status (cleared by reading SUPC_ISR) Mask */
#define SUPC_SR_LPDBCS1(value)                (SUPC_SR_LPDBCS1_Msk & (_UINT32_(value) << SUPC_SR_LPDBCS1_Pos)) /* Assigment of value for LPDBCS1 in the SUPC_SR register */
#define SUPC_SR_LPDBCS2_Pos                   _UINT32_(18)                                         /* (SUPC_SR) Tamper Detection Wake-up Status (cleared by reading SUPC_ISR) Position */
#define SUPC_SR_LPDBCS2_Msk                   (_UINT32_(0x1) << SUPC_SR_LPDBCS2_Pos)               /* (SUPC_SR) Tamper Detection Wake-up Status (cleared by reading SUPC_ISR) Mask */
#define SUPC_SR_LPDBCS2(value)                (SUPC_SR_LPDBCS2_Msk & (_UINT32_(value) << SUPC_SR_LPDBCS2_Pos)) /* Assigment of value for LPDBCS2 in the SUPC_SR register */
#define SUPC_SR_LPDBCS3_Pos                   _UINT32_(19)                                         /* (SUPC_SR) Tamper Detection Wake-up Status (cleared by reading SUPC_ISR) Position */
#define SUPC_SR_LPDBCS3_Msk                   (_UINT32_(0x1) << SUPC_SR_LPDBCS3_Pos)               /* (SUPC_SR) Tamper Detection Wake-up Status (cleared by reading SUPC_ISR) Mask */
#define SUPC_SR_LPDBCS3(value)                (SUPC_SR_LPDBCS3_Msk & (_UINT32_(value) << SUPC_SR_LPDBCS3_Pos)) /* Assigment of value for LPDBCS3 in the SUPC_SR register */
#define SUPC_SR_LPDBCS4_Pos                   _UINT32_(20)                                         /* (SUPC_SR) Tamper Detection Wake-up Status (cleared by reading SUPC_ISR) Position */
#define SUPC_SR_LPDBCS4_Msk                   (_UINT32_(0x1) << SUPC_SR_LPDBCS4_Pos)               /* (SUPC_SR) Tamper Detection Wake-up Status (cleared by reading SUPC_ISR) Mask */
#define SUPC_SR_LPDBCS4(value)                (SUPC_SR_LPDBCS4_Msk & (_UINT32_(value) << SUPC_SR_LPDBCS4_Pos)) /* Assigment of value for LPDBCS4 in the SUPC_SR register */
#define SUPC_SR_SXFMS_Pos                     _UINT32_(24)                                         /* (SUPC_SR) Slow Crystal Oscillator Frequency Monitor Status (cleared on read) Position */
#define SUPC_SR_SXFMS_Msk                     (_UINT32_(0x3) << SUPC_SR_SXFMS_Pos)                 /* (SUPC_SR) Slow Crystal Oscillator Frequency Monitor Status (cleared on read) Mask */
#define SUPC_SR_SXFMS(value)                  (SUPC_SR_SXFMS_Msk & (_UINT32_(value) << SUPC_SR_SXFMS_Pos)) /* Assigment of value for SXFMS in the SUPC_SR register */
#define   SUPC_SR_SXFMS_GOOD_Val              _UINT32_(0x0)                                        /* (SUPC_SR) No frequency error detected.  */
#define   SUPC_SR_SXFMS_FREQ_ERROR_Val        _UINT32_(0x1)                                        /* (SUPC_SR) The frequency has not been correct over 4 consecutive monitoring periods but there are still edges detected on the slow crystal oscillator output.  */
#define   SUPC_SR_SXFMS_FAIL_Val              _UINT32_(0x2)                                        /* (SUPC_SR) No edge detected in the slow crystal oscillator output for at least 2 consecutive monitoring periods.  */
#define SUPC_SR_SXFMS_GOOD                    (SUPC_SR_SXFMS_GOOD_Val << SUPC_SR_SXFMS_Pos)        /* (SUPC_SR) No frequency error detected. Position  */
#define SUPC_SR_SXFMS_FREQ_ERROR              (SUPC_SR_SXFMS_FREQ_ERROR_Val << SUPC_SR_SXFMS_Pos)  /* (SUPC_SR) The frequency has not been correct over 4 consecutive monitoring periods but there are still edges detected on the slow crystal oscillator output. Position  */
#define SUPC_SR_SXFMS_FAIL                    (SUPC_SR_SXFMS_FAIL_Val << SUPC_SR_SXFMS_Pos)        /* (SUPC_SR) No edge detected in the slow crystal oscillator output for at least 2 consecutive monitoring periods. Position  */
#define SUPC_SR_SXFME_Pos                     _UINT32_(26)                                         /* (SUPC_SR) Slow Crystal Oscillator Frequency Monitor Error (cleared on read) Position */
#define SUPC_SR_SXFME_Msk                     (_UINT32_(0x1) << SUPC_SR_SXFME_Pos)                 /* (SUPC_SR) Slow Crystal Oscillator Frequency Monitor Error (cleared on read) Mask */
#define SUPC_SR_SXFME(value)                  (SUPC_SR_SXFME_Msk & (_UINT32_(value) << SUPC_SR_SXFME_Pos)) /* Assigment of value for SXFME in the SUPC_SR register */
#define SUPC_SR_WKUPS_Pos                     _UINT32_(27)                                         /* (SUPC_SR) WKUP Wake-up Status (cleared by reading SUPC_WUSR) Position */
#define SUPC_SR_WKUPS_Msk                     (_UINT32_(0x1) << SUPC_SR_WKUPS_Pos)                 /* (SUPC_SR) WKUP Wake-up Status (cleared by reading SUPC_WUSR) Mask */
#define SUPC_SR_WKUPS(value)                  (SUPC_SR_WKUPS_Msk & (_UINT32_(value) << SUPC_SR_WKUPS_Pos)) /* Assigment of value for WKUPS in the SUPC_SR register */
#define SUPC_SR_BADXTS_Pos                    _UINT32_(28)                                         /* (SUPC_SR) Slow Crystal Oscillator Wake-up Status (cleared by reading SUPC_WUSR) Position */
#define SUPC_SR_BADXTS_Msk                    (_UINT32_(0x1) << SUPC_SR_BADXTS_Pos)                /* (SUPC_SR) Slow Crystal Oscillator Wake-up Status (cleared by reading SUPC_WUSR) Mask */
#define SUPC_SR_BADXTS(value)                 (SUPC_SR_BADXTS_Msk & (_UINT32_(value) << SUPC_SR_BADXTS_Pos)) /* Assigment of value for BADXTS in the SUPC_SR register */
#define SUPC_SR_FWKUPS_Pos                    _UINT32_(29)                                         /* (SUPC_SR) FWUP Wake-up Status (cleared by reading SUPC_WUSR) Position */
#define SUPC_SR_FWKUPS_Msk                    (_UINT32_(0x1) << SUPC_SR_FWKUPS_Pos)                /* (SUPC_SR) FWUP Wake-up Status (cleared by reading SUPC_WUSR) Mask */
#define SUPC_SR_FWKUPS(value)                 (SUPC_SR_FWKUPS_Msk & (_UINT32_(value) << SUPC_SR_FWKUPS_Pos)) /* Assigment of value for FWKUPS in the SUPC_SR register */
#define SUPC_SR_RTTS_Pos                      _UINT32_(30)                                         /* (SUPC_SR) RTT Wake-up Status (cleared by reading SUPC_WUSR) Position */
#define SUPC_SR_RTTS_Msk                      (_UINT32_(0x1) << SUPC_SR_RTTS_Pos)                  /* (SUPC_SR) RTT Wake-up Status (cleared by reading SUPC_WUSR) Mask */
#define SUPC_SR_RTTS(value)                   (SUPC_SR_RTTS_Msk & (_UINT32_(value) << SUPC_SR_RTTS_Pos)) /* Assigment of value for RTTS in the SUPC_SR register */
#define SUPC_SR_RTCS_Pos                      _UINT32_(31)                                         /* (SUPC_SR) RTC Wake-up Status (cleared by reading SUPC_WUSR) Position */
#define SUPC_SR_RTCS_Msk                      (_UINT32_(0x1) << SUPC_SR_RTCS_Pos)                  /* (SUPC_SR) RTC Wake-up Status (cleared by reading SUPC_WUSR) Mask */
#define SUPC_SR_RTCS(value)                   (SUPC_SR_RTCS_Msk & (_UINT32_(value) << SUPC_SR_RTCS_Pos)) /* Assigment of value for RTCS in the SUPC_SR register */
#define SUPC_SR_Msk                           _UINT32_(0xFF1F117D)                                 /* (SUPC_SR) Register Mask  */

#define SUPC_SR_LPDBCS_Pos                    _UINT32_(16)                                         /* (SUPC_SR Position) Tamper Detection Wake-up Status (cleared by reading SUPC_ISR) */
#define SUPC_SR_LPDBCS_Msk                    (_UINT32_(0x1F) << SUPC_SR_LPDBCS_Pos)               /* (SUPC_SR Mask) LPDBCS */
#define SUPC_SR_LPDBCS(value)                 (SUPC_SR_LPDBCS_Msk & (_UINT32_(value) << SUPC_SR_LPDBCS_Pos)) 

/* -------- SUPC_EMR : (SUPC Offset: 0x1C) (R/W 32) Extended Mode Register -------- */
#define SUPC_EMR_FLRSGPBR_Pos                 _UINT32_(16)                                         /* (SUPC_EMR) Flash Erase GPBR Position */
#define SUPC_EMR_FLRSGPBR_Msk                 (_UINT32_(0x1) << SUPC_EMR_FLRSGPBR_Pos)             /* (SUPC_EMR) Flash Erase GPBR Mask */
#define SUPC_EMR_FLRSGPBR(value)              (SUPC_EMR_FLRSGPBR_Msk & (_UINT32_(value) << SUPC_EMR_FLRSGPBR_Pos)) /* Assigment of value for FLRSGPBR in the SUPC_EMR register */
#define SUPC_EMR_FULLGPBRC_Pos                _UINT32_(17)                                         /* (SUPC_EMR) Full GPBR Clean Position */
#define SUPC_EMR_FULLGPBRC_Msk                (_UINT32_(0x1) << SUPC_EMR_FULLGPBRC_Pos)            /* (SUPC_EMR) Full GPBR Clean Mask */
#define SUPC_EMR_FULLGPBRC(value)             (SUPC_EMR_FULLGPBRC_Msk & (_UINT32_(value) << SUPC_EMR_FULLGPBRC_Pos)) /* Assigment of value for FULLGPBRC in the SUPC_EMR register */
#define SUPC_EMR_COREBGEN_Pos                 _UINT32_(18)                                         /* (SUPC_EMR) VDDCORE Voltage Regulator Bandgap Enable Position */
#define SUPC_EMR_COREBGEN_Msk                 (_UINT32_(0x1) << SUPC_EMR_COREBGEN_Pos)             /* (SUPC_EMR) VDDCORE Voltage Regulator Bandgap Enable Mask */
#define SUPC_EMR_COREBGEN(value)              (SUPC_EMR_COREBGEN_Msk & (_UINT32_(value) << SUPC_EMR_COREBGEN_Pos)) /* Assigment of value for COREBGEN in the SUPC_EMR register */
#define SUPC_EMR_Msk                          _UINT32_(0x00070000)                                 /* (SUPC_EMR) Register Mask  */


/* -------- SUPC_BMR : (SUPC Offset: 0x20) (R/W 32) Backup Mode Register -------- */
#define SUPC_BMR_RTTWKEN_Pos                  _UINT32_(0)                                          /* (SUPC_BMR) Real-time Timer Wake-up Enable Position */
#define SUPC_BMR_RTTWKEN_Msk                  (_UINT32_(0x1) << SUPC_BMR_RTTWKEN_Pos)              /* (SUPC_BMR) Real-time Timer Wake-up Enable Mask */
#define SUPC_BMR_RTTWKEN(value)               (SUPC_BMR_RTTWKEN_Msk & (_UINT32_(value) << SUPC_BMR_RTTWKEN_Pos)) /* Assigment of value for RTTWKEN in the SUPC_BMR register */
#define   SUPC_BMR_RTTWKEN_DISABLE_Val        _UINT32_(0x0)                                        /* (SUPC_BMR) The RTT alarm signal has no wake-up effect.  */
#define   SUPC_BMR_RTTWKEN_ENABLE_Val         _UINT32_(0x1)                                        /* (SUPC_BMR) The RTT alarm signal forces the wake-up of the core power supply.  */
#define SUPC_BMR_RTTWKEN_DISABLE              (SUPC_BMR_RTTWKEN_DISABLE_Val << SUPC_BMR_RTTWKEN_Pos) /* (SUPC_BMR) The RTT alarm signal has no wake-up effect. Position  */
#define SUPC_BMR_RTTWKEN_ENABLE               (SUPC_BMR_RTTWKEN_ENABLE_Val << SUPC_BMR_RTTWKEN_Pos) /* (SUPC_BMR) The RTT alarm signal forces the wake-up of the core power supply. Position  */
#define SUPC_BMR_RTCWKEN_Pos                  _UINT32_(1)                                          /* (SUPC_BMR) Real-time Clock Wake-up Enable Position */
#define SUPC_BMR_RTCWKEN_Msk                  (_UINT32_(0x1) << SUPC_BMR_RTCWKEN_Pos)              /* (SUPC_BMR) Real-time Clock Wake-up Enable Mask */
#define SUPC_BMR_RTCWKEN(value)               (SUPC_BMR_RTCWKEN_Msk & (_UINT32_(value) << SUPC_BMR_RTCWKEN_Pos)) /* Assigment of value for RTCWKEN in the SUPC_BMR register */
#define   SUPC_BMR_RTCWKEN_DISABLE_Val        _UINT32_(0x0)                                        /* (SUPC_BMR) The RTC alarm signal has no wake-up effect.  */
#define   SUPC_BMR_RTCWKEN_ENABLE_Val         _UINT32_(0x1)                                        /* (SUPC_BMR) The RTC alarm signal forces the wake-up of the core power supply.  */
#define SUPC_BMR_RTCWKEN_DISABLE              (SUPC_BMR_RTCWKEN_DISABLE_Val << SUPC_BMR_RTCWKEN_Pos) /* (SUPC_BMR) The RTC alarm signal has no wake-up effect. Position  */
#define SUPC_BMR_RTCWKEN_ENABLE               (SUPC_BMR_RTCWKEN_ENABLE_Val << SUPC_BMR_RTCWKEN_Pos) /* (SUPC_BMR) The RTC alarm signal forces the wake-up of the core power supply. Position  */
#define SUPC_BMR_VBATWKEN_Pos                 _UINT32_(2)                                          /* (SUPC_BMR) VBAT Supply Monitor Wake-up Enable Position */
#define SUPC_BMR_VBATWKEN_Msk                 (_UINT32_(0x1) << SUPC_BMR_VBATWKEN_Pos)             /* (SUPC_BMR) VBAT Supply Monitor Wake-up Enable Mask */
#define SUPC_BMR_VBATWKEN(value)              (SUPC_BMR_VBATWKEN_Msk & (_UINT32_(value) << SUPC_BMR_VBATWKEN_Pos)) /* Assigment of value for VBATWKEN in the SUPC_BMR register */
#define   SUPC_BMR_VBATWKEN_DISABLE_Val       _UINT32_(0x0)                                        /* (SUPC_BMR) Wake-up on VBAT supply monitor under voltage detection is disabled.  */
#define   SUPC_BMR_VBATWKEN_ENABLE_Val        _UINT32_(0x1)                                        /* (SUPC_BMR) Wake-up on VBAT supply monitor under voltage detection is enabled.  */
#define SUPC_BMR_VBATWKEN_DISABLE             (SUPC_BMR_VBATWKEN_DISABLE_Val << SUPC_BMR_VBATWKEN_Pos) /* (SUPC_BMR) Wake-up on VBAT supply monitor under voltage detection is disabled. Position  */
#define SUPC_BMR_VBATWKEN_ENABLE              (SUPC_BMR_VBATWKEN_ENABLE_Val << SUPC_BMR_VBATWKEN_Pos) /* (SUPC_BMR) Wake-up on VBAT supply monitor under voltage detection is enabled. Position  */
#define SUPC_BMR_FWUPEN_Pos                   _UINT32_(4)                                          /* (SUPC_BMR) Force Wake-up Pin Wake-up Enable Position */
#define SUPC_BMR_FWUPEN_Msk                   (_UINT32_(0x1) << SUPC_BMR_FWUPEN_Pos)               /* (SUPC_BMR) Force Wake-up Pin Wake-up Enable Mask */
#define SUPC_BMR_FWUPEN(value)                (SUPC_BMR_FWUPEN_Msk & (_UINT32_(value) << SUPC_BMR_FWUPEN_Pos)) /* Assigment of value for FWUPEN in the SUPC_BMR register */
#define   SUPC_BMR_FWUPEN_DISABLE_Val         _UINT32_(0x0)                                        /* (SUPC_BMR) The fwup signal has no wake-up effect.  */
#define   SUPC_BMR_FWUPEN_ENABLE_Val          _UINT32_(0x1)                                        /* (SUPC_BMR) The fwup signal forces the wake-up of the core power supply.  */
#define SUPC_BMR_FWUPEN_DISABLE               (SUPC_BMR_FWUPEN_DISABLE_Val << SUPC_BMR_FWUPEN_Pos) /* (SUPC_BMR) The fwup signal has no wake-up effect. Position  */
#define SUPC_BMR_FWUPEN_ENABLE                (SUPC_BMR_FWUPEN_ENABLE_Val << SUPC_BMR_FWUPEN_Pos)  /* (SUPC_BMR) The fwup signal forces the wake-up of the core power supply. Position  */
#define SUPC_BMR_CORPORWKEN_Pos               _UINT32_(5)                                          /* (SUPC_BMR) VDDCORE POR Wake-up Enable Position */
#define SUPC_BMR_CORPORWKEN_Msk               (_UINT32_(0x1) << SUPC_BMR_CORPORWKEN_Pos)           /* (SUPC_BMR) VDDCORE POR Wake-up Enable Mask */
#define SUPC_BMR_CORPORWKEN(value)            (SUPC_BMR_CORPORWKEN_Msk & (_UINT32_(value) << SUPC_BMR_CORPORWKEN_Pos)) /* Assigment of value for CORPORWKEN in the SUPC_BMR register */
#define   SUPC_BMR_CORPORWKEN_DISABLE_Val     _UINT32_(0x0)                                        /* (SUPC_BMR) Wake-up on VDDCORE Power-On Reset Event is disabled.  */
#define   SUPC_BMR_CORPORWKEN_ENABLE_Val      _UINT32_(0x1)                                        /* (SUPC_BMR) Wake-up on VDDCORE Power-On Reset Event is enabled.  */
#define SUPC_BMR_CORPORWKEN_DISABLE           (SUPC_BMR_CORPORWKEN_DISABLE_Val << SUPC_BMR_CORPORWKEN_Pos) /* (SUPC_BMR) Wake-up on VDDCORE Power-On Reset Event is disabled. Position  */
#define SUPC_BMR_CORPORWKEN_ENABLE            (SUPC_BMR_CORPORWKEN_ENABLE_Val << SUPC_BMR_CORPORWKEN_Pos) /* (SUPC_BMR) Wake-up on VDDCORE Power-On Reset Event is enabled. Position  */
#define SUPC_BMR_VDD3V3SMWKEN_Pos             _UINT32_(6)                                          /* (SUPC_BMR) VDD3V3 Supply Monitor Wake-up Enable Position */
#define SUPC_BMR_VDD3V3SMWKEN_Msk             (_UINT32_(0x1) << SUPC_BMR_VDD3V3SMWKEN_Pos)         /* (SUPC_BMR) VDD3V3 Supply Monitor Wake-up Enable Mask */
#define SUPC_BMR_VDD3V3SMWKEN(value)          (SUPC_BMR_VDD3V3SMWKEN_Msk & (_UINT32_(value) << SUPC_BMR_VDD3V3SMWKEN_Pos)) /* Assigment of value for VDD3V3SMWKEN in the SUPC_BMR register */
#define   SUPC_BMR_VDD3V3SMWKEN_DISABLE_Val   _UINT32_(0x0)                                        /* (SUPC_BMR) Wake-up on VDD3V3 supply monitor under voltage detection is disabled.  */
#define   SUPC_BMR_VDD3V3SMWKEN_ENABLE_Val    _UINT32_(0x1)                                        /* (SUPC_BMR) Wake-up on VDD3V3 supply monitor under voltage detection is enabled.  */
#define SUPC_BMR_VDD3V3SMWKEN_DISABLE         (SUPC_BMR_VDD3V3SMWKEN_DISABLE_Val << SUPC_BMR_VDD3V3SMWKEN_Pos) /* (SUPC_BMR) Wake-up on VDD3V3 supply monitor under voltage detection is disabled. Position  */
#define SUPC_BMR_VDD3V3SMWKEN_ENABLE          (SUPC_BMR_VDD3V3SMWKEN_ENABLE_Val << SUPC_BMR_VDD3V3SMWKEN_Pos) /* (SUPC_BMR) Wake-up on VDD3V3 supply monitor under voltage detection is enabled. Position  */
#define SUPC_BMR_VBATREN_Pos                  _UINT32_(8)                                          /* (SUPC_BMR) Battery Voltage Event Report Enable Position */
#define SUPC_BMR_VBATREN_Msk                  (_UINT32_(0x1) << SUPC_BMR_VBATREN_Pos)              /* (SUPC_BMR) Battery Voltage Event Report Enable Mask */
#define SUPC_BMR_VBATREN(value)               (SUPC_BMR_VBATREN_Msk & (_UINT32_(value) << SUPC_BMR_VBATREN_Pos)) /* Assigment of value for VBATREN in the SUPC_BMR register */
#define   SUPC_BMR_VBATREN_DISABLE_Val        _UINT32_(0x0)                                        /* (SUPC_BMR) Disables the report of event on VBAT voltage.  */
#define   SUPC_BMR_VBATREN_ENABLE_Val         _UINT32_(0x1)                                        /* (SUPC_BMR) Enables the report of event on VBAT voltage.  */
#define SUPC_BMR_VBATREN_DISABLE              (SUPC_BMR_VBATREN_DISABLE_Val << SUPC_BMR_VBATREN_Pos) /* (SUPC_BMR) Disables the report of event on VBAT voltage. Position  */
#define SUPC_BMR_VBATREN_ENABLE               (SUPC_BMR_VBATREN_ENABLE_Val << SUPC_BMR_VBATREN_Pos) /* (SUPC_BMR) Enables the report of event on VBAT voltage. Position  */
#define SUPC_BMR_MRTCOUT_Pos                  _UINT32_(9)                                          /* (SUPC_BMR) RTCOUT0 Outputs Drive Mode Position */
#define SUPC_BMR_MRTCOUT_Msk                  (_UINT32_(0x1) << SUPC_BMR_MRTCOUT_Pos)              /* (SUPC_BMR) RTCOUT0 Outputs Drive Mode Mask */
#define SUPC_BMR_MRTCOUT(value)               (SUPC_BMR_MRTCOUT_Msk & (_UINT32_(value) << SUPC_BMR_MRTCOUT_Pos)) /* Assigment of value for MRTCOUT in the SUPC_BMR register */
#define   SUPC_BMR_MRTCOUT_USERDEF_Val        _UINT32_(0x0)                                        /* (SUPC_BMR) RTCOUT0 output is driven according to the configuration of the field RTC_MR.OUT0.  */
#define SUPC_BMR_MRTCOUT_USERDEF              (SUPC_BMR_MRTCOUT_USERDEF_Val << SUPC_BMR_MRTCOUT_Pos) /* (SUPC_BMR) RTCOUT0 output is driven according to the configuration of the field RTC_MR.OUT0. Position  */
#define SUPC_BMR_BADXTWKEN_Pos                _UINT32_(10)                                         /* (SUPC_BMR) Slow Crystal Oscillator Frequency Error Wake-up Enable Position */
#define SUPC_BMR_BADXTWKEN_Msk                (_UINT32_(0x1) << SUPC_BMR_BADXTWKEN_Pos)            /* (SUPC_BMR) Slow Crystal Oscillator Frequency Error Wake-up Enable Mask */
#define SUPC_BMR_BADXTWKEN(value)             (SUPC_BMR_BADXTWKEN_Msk & (_UINT32_(value) << SUPC_BMR_BADXTWKEN_Pos)) /* Assigment of value for BADXTWKEN in the SUPC_BMR register */
#define SUPC_BMR_KEY_Pos                      _UINT32_(24)                                         /* (SUPC_BMR) Password Key Position */
#define SUPC_BMR_KEY_Msk                      (_UINT32_(0xFF) << SUPC_BMR_KEY_Pos)                 /* (SUPC_BMR) Password Key Mask */
#define SUPC_BMR_KEY(value)                   (SUPC_BMR_KEY_Msk & (_UINT32_(value) << SUPC_BMR_KEY_Pos)) /* Assigment of value for KEY in the SUPC_BMR register */
#define   SUPC_BMR_KEY_PASSWD_Val             _UINT32_(0xA5)                                       /* (SUPC_BMR) Writing any other value in this field aborts the write operation.  */
#define SUPC_BMR_KEY_PASSWD                   (SUPC_BMR_KEY_PASSWD_Val << SUPC_BMR_KEY_Pos)        /* (SUPC_BMR) Writing any other value in this field aborts the write operation. Position  */
#define SUPC_BMR_Msk                          _UINT32_(0xFF000777)                                 /* (SUPC_BMR) Register Mask  */


/* -------- SUPC_WUSR : (SUPC Offset: 0x24) ( R/ 32) Wakeup Status Register -------- */
#define SUPC_WUSR_WKUPS_Pos                   _UINT32_(0)                                          /* (SUPC_WUSR) WKUP Wake-up Status (cleared on read) Position */
#define SUPC_WUSR_WKUPS_Msk                   (_UINT32_(0x1) << SUPC_WUSR_WKUPS_Pos)               /* (SUPC_WUSR) WKUP Wake-up Status (cleared on read) Mask */
#define SUPC_WUSR_WKUPS(value)                (SUPC_WUSR_WKUPS_Msk & (_UINT32_(value) << SUPC_WUSR_WKUPS_Pos)) /* Assigment of value for WKUPS in the SUPC_WUSR register */
#define SUPC_WUSR_BADXTWKS_Pos                _UINT32_(1)                                          /* (SUPC_WUSR) Slow Crystal Oscillator Frequency Error Wake-up Status (cleared on read) Position */
#define SUPC_WUSR_BADXTWKS_Msk                (_UINT32_(0x1) << SUPC_WUSR_BADXTWKS_Pos)            /* (SUPC_WUSR) Slow Crystal Oscillator Frequency Error Wake-up Status (cleared on read) Mask */
#define SUPC_WUSR_BADXTWKS(value)             (SUPC_WUSR_BADXTWKS_Msk & (_UINT32_(value) << SUPC_WUSR_BADXTWKS_Pos)) /* Assigment of value for BADXTWKS in the SUPC_WUSR register */
#define SUPC_WUSR_FWUPS_Pos                   _UINT32_(2)                                          /* (SUPC_WUSR) FWUP Wake-up Status (cleared on read) Position */
#define SUPC_WUSR_FWUPS_Msk                   (_UINT32_(0x1) << SUPC_WUSR_FWUPS_Pos)               /* (SUPC_WUSR) FWUP Wake-up Status (cleared on read) Mask */
#define SUPC_WUSR_FWUPS(value)                (SUPC_WUSR_FWUPS_Msk & (_UINT32_(value) << SUPC_WUSR_FWUPS_Pos)) /* Assigment of value for FWUPS in the SUPC_WUSR register */
#define SUPC_WUSR_VDD3V3SMWS_Pos              _UINT32_(3)                                          /* (SUPC_WUSR) VDD3V3 Supply Monitor Wake-up Status (cleared on read) Position */
#define SUPC_WUSR_VDD3V3SMWS_Msk              (_UINT32_(0x1) << SUPC_WUSR_VDD3V3SMWS_Pos)          /* (SUPC_WUSR) VDD3V3 Supply Monitor Wake-up Status (cleared on read) Mask */
#define SUPC_WUSR_VDD3V3SMWS(value)           (SUPC_WUSR_VDD3V3SMWS_Msk & (_UINT32_(value) << SUPC_WUSR_VDD3V3SMWS_Pos)) /* Assigment of value for VDD3V3SMWS in the SUPC_WUSR register */
#define SUPC_WUSR_RTTS_Pos                    _UINT32_(4)                                          /* (SUPC_WUSR) RTT Wake-up Status (cleared on read) Position */
#define SUPC_WUSR_RTTS_Msk                    (_UINT32_(0x1) << SUPC_WUSR_RTTS_Pos)                /* (SUPC_WUSR) RTT Wake-up Status (cleared on read) Mask */
#define SUPC_WUSR_RTTS(value)                 (SUPC_WUSR_RTTS_Msk & (_UINT32_(value) << SUPC_WUSR_RTTS_Pos)) /* Assigment of value for RTTS in the SUPC_WUSR register */
#define SUPC_WUSR_RTCS_Pos                    _UINT32_(5)                                          /* (SUPC_WUSR) RTC Wake-up Status (cleared on read) Position */
#define SUPC_WUSR_RTCS_Msk                    (_UINT32_(0x1) << SUPC_WUSR_RTCS_Pos)                /* (SUPC_WUSR) RTC Wake-up Status (cleared on read) Mask */
#define SUPC_WUSR_RTCS(value)                 (SUPC_WUSR_RTCS_Msk & (_UINT32_(value) << SUPC_WUSR_RTCS_Pos)) /* Assigment of value for RTCS in the SUPC_WUSR register */
#define SUPC_WUSR_VDD3V3SMRSTS_Pos            _UINT32_(8)                                          /* (SUPC_WUSR) VDD3V3 Supply Monitor Reset Status (cleared on read) Position */
#define SUPC_WUSR_VDD3V3SMRSTS_Msk            (_UINT32_(0x1) << SUPC_WUSR_VDD3V3SMRSTS_Pos)        /* (SUPC_WUSR) VDD3V3 Supply Monitor Reset Status (cleared on read) Mask */
#define SUPC_WUSR_VDD3V3SMRSTS(value)         (SUPC_WUSR_VDD3V3SMRSTS_Msk & (_UINT32_(value) << SUPC_WUSR_VDD3V3SMRSTS_Pos)) /* Assigment of value for VDD3V3SMRSTS in the SUPC_WUSR register */
#define SUPC_WUSR_WKUPIS0_Pos                 _UINT32_(16)                                         /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Position */
#define SUPC_WUSR_WKUPIS0_Msk                 (_UINT32_(0x1) << SUPC_WUSR_WKUPIS0_Pos)             /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Mask */
#define SUPC_WUSR_WKUPIS0(value)              (SUPC_WUSR_WKUPIS0_Msk & (_UINT32_(value) << SUPC_WUSR_WKUPIS0_Pos)) /* Assigment of value for WKUPIS0 in the SUPC_WUSR register */
#define SUPC_WUSR_WKUPIS1_Pos                 _UINT32_(17)                                         /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Position */
#define SUPC_WUSR_WKUPIS1_Msk                 (_UINT32_(0x1) << SUPC_WUSR_WKUPIS1_Pos)             /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Mask */
#define SUPC_WUSR_WKUPIS1(value)              (SUPC_WUSR_WKUPIS1_Msk & (_UINT32_(value) << SUPC_WUSR_WKUPIS1_Pos)) /* Assigment of value for WKUPIS1 in the SUPC_WUSR register */
#define SUPC_WUSR_WKUPIS2_Pos                 _UINT32_(18)                                         /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Position */
#define SUPC_WUSR_WKUPIS2_Msk                 (_UINT32_(0x1) << SUPC_WUSR_WKUPIS2_Pos)             /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Mask */
#define SUPC_WUSR_WKUPIS2(value)              (SUPC_WUSR_WKUPIS2_Msk & (_UINT32_(value) << SUPC_WUSR_WKUPIS2_Pos)) /* Assigment of value for WKUPIS2 in the SUPC_WUSR register */
#define SUPC_WUSR_WKUPIS3_Pos                 _UINT32_(19)                                         /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Position */
#define SUPC_WUSR_WKUPIS3_Msk                 (_UINT32_(0x1) << SUPC_WUSR_WKUPIS3_Pos)             /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Mask */
#define SUPC_WUSR_WKUPIS3(value)              (SUPC_WUSR_WKUPIS3_Msk & (_UINT32_(value) << SUPC_WUSR_WKUPIS3_Pos)) /* Assigment of value for WKUPIS3 in the SUPC_WUSR register */
#define SUPC_WUSR_WKUPIS4_Pos                 _UINT32_(20)                                         /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Position */
#define SUPC_WUSR_WKUPIS4_Msk                 (_UINT32_(0x1) << SUPC_WUSR_WKUPIS4_Pos)             /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Mask */
#define SUPC_WUSR_WKUPIS4(value)              (SUPC_WUSR_WKUPIS4_Msk & (_UINT32_(value) << SUPC_WUSR_WKUPIS4_Pos)) /* Assigment of value for WKUPIS4 in the SUPC_WUSR register */
#define SUPC_WUSR_WKUPIS5_Pos                 _UINT32_(21)                                         /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Position */
#define SUPC_WUSR_WKUPIS5_Msk                 (_UINT32_(0x1) << SUPC_WUSR_WKUPIS5_Pos)             /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Mask */
#define SUPC_WUSR_WKUPIS5(value)              (SUPC_WUSR_WKUPIS5_Msk & (_UINT32_(value) << SUPC_WUSR_WKUPIS5_Pos)) /* Assigment of value for WKUPIS5 in the SUPC_WUSR register */
#define SUPC_WUSR_WKUPIS6_Pos                 _UINT32_(22)                                         /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Position */
#define SUPC_WUSR_WKUPIS6_Msk                 (_UINT32_(0x1) << SUPC_WUSR_WKUPIS6_Pos)             /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Mask */
#define SUPC_WUSR_WKUPIS6(value)              (SUPC_WUSR_WKUPIS6_Msk & (_UINT32_(value) << SUPC_WUSR_WKUPIS6_Pos)) /* Assigment of value for WKUPIS6 in the SUPC_WUSR register */
#define SUPC_WUSR_WKUPIS7_Pos                 _UINT32_(23)                                         /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Position */
#define SUPC_WUSR_WKUPIS7_Msk                 (_UINT32_(0x1) << SUPC_WUSR_WKUPIS7_Pos)             /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Mask */
#define SUPC_WUSR_WKUPIS7(value)              (SUPC_WUSR_WKUPIS7_Msk & (_UINT32_(value) << SUPC_WUSR_WKUPIS7_Pos)) /* Assigment of value for WKUPIS7 in the SUPC_WUSR register */
#define SUPC_WUSR_WKUPIS8_Pos                 _UINT32_(24)                                         /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Position */
#define SUPC_WUSR_WKUPIS8_Msk                 (_UINT32_(0x1) << SUPC_WUSR_WKUPIS8_Pos)             /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Mask */
#define SUPC_WUSR_WKUPIS8(value)              (SUPC_WUSR_WKUPIS8_Msk & (_UINT32_(value) << SUPC_WUSR_WKUPIS8_Pos)) /* Assigment of value for WKUPIS8 in the SUPC_WUSR register */
#define SUPC_WUSR_WKUPIS9_Pos                 _UINT32_(25)                                         /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Position */
#define SUPC_WUSR_WKUPIS9_Msk                 (_UINT32_(0x1) << SUPC_WUSR_WKUPIS9_Pos)             /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Mask */
#define SUPC_WUSR_WKUPIS9(value)              (SUPC_WUSR_WKUPIS9_Msk & (_UINT32_(value) << SUPC_WUSR_WKUPIS9_Pos)) /* Assigment of value for WKUPIS9 in the SUPC_WUSR register */
#define SUPC_WUSR_WKUPIS10_Pos                _UINT32_(26)                                         /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Position */
#define SUPC_WUSR_WKUPIS10_Msk                (_UINT32_(0x1) << SUPC_WUSR_WKUPIS10_Pos)            /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Mask */
#define SUPC_WUSR_WKUPIS10(value)             (SUPC_WUSR_WKUPIS10_Msk & (_UINT32_(value) << SUPC_WUSR_WKUPIS10_Pos)) /* Assigment of value for WKUPIS10 in the SUPC_WUSR register */
#define SUPC_WUSR_WKUPIS11_Pos                _UINT32_(27)                                         /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Position */
#define SUPC_WUSR_WKUPIS11_Msk                (_UINT32_(0x1) << SUPC_WUSR_WKUPIS11_Pos)            /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Mask */
#define SUPC_WUSR_WKUPIS11(value)             (SUPC_WUSR_WKUPIS11_Msk & (_UINT32_(value) << SUPC_WUSR_WKUPIS11_Pos)) /* Assigment of value for WKUPIS11 in the SUPC_WUSR register */
#define SUPC_WUSR_WKUPIS12_Pos                _UINT32_(28)                                         /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Position */
#define SUPC_WUSR_WKUPIS12_Msk                (_UINT32_(0x1) << SUPC_WUSR_WKUPIS12_Pos)            /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Mask */
#define SUPC_WUSR_WKUPIS12(value)             (SUPC_WUSR_WKUPIS12_Msk & (_UINT32_(value) << SUPC_WUSR_WKUPIS12_Pos)) /* Assigment of value for WKUPIS12 in the SUPC_WUSR register */
#define SUPC_WUSR_WKUPIS13_Pos                _UINT32_(29)                                         /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Position */
#define SUPC_WUSR_WKUPIS13_Msk                (_UINT32_(0x1) << SUPC_WUSR_WKUPIS13_Pos)            /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Mask */
#define SUPC_WUSR_WKUPIS13(value)             (SUPC_WUSR_WKUPIS13_Msk & (_UINT32_(value) << SUPC_WUSR_WKUPIS13_Pos)) /* Assigment of value for WKUPIS13 in the SUPC_WUSR register */
#define SUPC_WUSR_WKUPIS14_Pos                _UINT32_(30)                                         /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Position */
#define SUPC_WUSR_WKUPIS14_Msk                (_UINT32_(0x1) << SUPC_WUSR_WKUPIS14_Pos)            /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Mask */
#define SUPC_WUSR_WKUPIS14(value)             (SUPC_WUSR_WKUPIS14_Msk & (_UINT32_(value) << SUPC_WUSR_WKUPIS14_Pos)) /* Assigment of value for WKUPIS14 in the SUPC_WUSR register */
#define SUPC_WUSR_WKUPIS15_Pos                _UINT32_(31)                                         /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Position */
#define SUPC_WUSR_WKUPIS15_Msk                (_UINT32_(0x1) << SUPC_WUSR_WKUPIS15_Pos)            /* (SUPC_WUSR) WKUPx Input Wake-up Status (cleared on read) Mask */
#define SUPC_WUSR_WKUPIS15(value)             (SUPC_WUSR_WKUPIS15_Msk & (_UINT32_(value) << SUPC_WUSR_WKUPIS15_Pos)) /* Assigment of value for WKUPIS15 in the SUPC_WUSR register */
#define SUPC_WUSR_Msk                         _UINT32_(0xFFFF013F)                                 /* (SUPC_WUSR) Register Mask  */

#define SUPC_WUSR_WKUPIS_Pos                  _UINT32_(16)                                         /* (SUPC_WUSR Position) WKUPx Input Wake-up Status (cleared on read) */
#define SUPC_WUSR_WKUPIS_Msk                  (_UINT32_(0xFFFF) << SUPC_WUSR_WKUPIS_Pos)           /* (SUPC_WUSR Mask) WKUPIS */
#define SUPC_WUSR_WKUPIS(value)               (SUPC_WUSR_WKUPIS_Msk & (_UINT32_(value) << SUPC_WUSR_WKUPIS_Pos)) 

/* -------- SUPC_IER : (SUPC Offset: 0x28) ( /W 32) Enable Interrupt Register -------- */
#define SUPC_IER_LPDBC0_Pos                   _UINT32_(0)                                          /* (SUPC_IER) WKUPx Pin Tamper Detection Interrupt Enable Position */
#define SUPC_IER_LPDBC0_Msk                   (_UINT32_(0x1) << SUPC_IER_LPDBC0_Pos)               /* (SUPC_IER) WKUPx Pin Tamper Detection Interrupt Enable Mask */
#define SUPC_IER_LPDBC0(value)                (SUPC_IER_LPDBC0_Msk & (_UINT32_(value) << SUPC_IER_LPDBC0_Pos)) /* Assigment of value for LPDBC0 in the SUPC_IER register */
#define SUPC_IER_LPDBC1_Pos                   _UINT32_(1)                                          /* (SUPC_IER) WKUPx Pin Tamper Detection Interrupt Enable Position */
#define SUPC_IER_LPDBC1_Msk                   (_UINT32_(0x1) << SUPC_IER_LPDBC1_Pos)               /* (SUPC_IER) WKUPx Pin Tamper Detection Interrupt Enable Mask */
#define SUPC_IER_LPDBC1(value)                (SUPC_IER_LPDBC1_Msk & (_UINT32_(value) << SUPC_IER_LPDBC1_Pos)) /* Assigment of value for LPDBC1 in the SUPC_IER register */
#define SUPC_IER_LPDBC2_Pos                   _UINT32_(2)                                          /* (SUPC_IER) WKUPx Pin Tamper Detection Interrupt Enable Position */
#define SUPC_IER_LPDBC2_Msk                   (_UINT32_(0x1) << SUPC_IER_LPDBC2_Pos)               /* (SUPC_IER) WKUPx Pin Tamper Detection Interrupt Enable Mask */
#define SUPC_IER_LPDBC2(value)                (SUPC_IER_LPDBC2_Msk & (_UINT32_(value) << SUPC_IER_LPDBC2_Pos)) /* Assigment of value for LPDBC2 in the SUPC_IER register */
#define SUPC_IER_LPDBC3_Pos                   _UINT32_(3)                                          /* (SUPC_IER) WKUPx Pin Tamper Detection Interrupt Enable Position */
#define SUPC_IER_LPDBC3_Msk                   (_UINT32_(0x1) << SUPC_IER_LPDBC3_Pos)               /* (SUPC_IER) WKUPx Pin Tamper Detection Interrupt Enable Mask */
#define SUPC_IER_LPDBC3(value)                (SUPC_IER_LPDBC3_Msk & (_UINT32_(value) << SUPC_IER_LPDBC3_Pos)) /* Assigment of value for LPDBC3 in the SUPC_IER register */
#define SUPC_IER_LPDBC4_Pos                   _UINT32_(4)                                          /* (SUPC_IER) WKUPx Pin Tamper Detection Interrupt Enable Position */
#define SUPC_IER_LPDBC4_Msk                   (_UINT32_(0x1) << SUPC_IER_LPDBC4_Pos)               /* (SUPC_IER) WKUPx Pin Tamper Detection Interrupt Enable Mask */
#define SUPC_IER_LPDBC4(value)                (SUPC_IER_LPDBC4_Msk & (_UINT32_(value) << SUPC_IER_LPDBC4_Pos)) /* Assigment of value for LPDBC4 in the SUPC_IER register */
#define SUPC_IER_VDD3V3SMEV_Pos               _UINT32_(16)                                         /* (SUPC_IER) VDD3V3 Supply Monitor Event Interrupt Enable Position */
#define SUPC_IER_VDD3V3SMEV_Msk               (_UINT32_(0x1) << SUPC_IER_VDD3V3SMEV_Pos)           /* (SUPC_IER) VDD3V3 Supply Monitor Event Interrupt Enable Mask */
#define SUPC_IER_VDD3V3SMEV(value)            (SUPC_IER_VDD3V3SMEV_Msk & (_UINT32_(value) << SUPC_IER_VDD3V3SMEV_Pos)) /* Assigment of value for VDD3V3SMEV in the SUPC_IER register */
#define SUPC_IER_VBATSMEV_Pos                 _UINT32_(17)                                         /* (SUPC_IER) VBAT Supply Monitor Event Interrupt Enable Position */
#define SUPC_IER_VBATSMEV_Msk                 (_UINT32_(0x1) << SUPC_IER_VBATSMEV_Pos)             /* (SUPC_IER) VBAT Supply Monitor Event Interrupt Enable Mask */
#define SUPC_IER_VBATSMEV(value)              (SUPC_IER_VBATSMEV_Msk & (_UINT32_(value) << SUPC_IER_VBATSMEV_Pos)) /* Assigment of value for VBATSMEV in the SUPC_IER register */
#define SUPC_IER_Msk                          _UINT32_(0x0003001F)                                 /* (SUPC_IER) Register Mask  */

#define SUPC_IER_LPDBC_Pos                    _UINT32_(0)                                          /* (SUPC_IER Position) WKUPx Pin Tamper Detection Interrupt Enable */
#define SUPC_IER_LPDBC_Msk                    (_UINT32_(0x1F) << SUPC_IER_LPDBC_Pos)               /* (SUPC_IER Mask) LPDBC */
#define SUPC_IER_LPDBC(value)                 (SUPC_IER_LPDBC_Msk & (_UINT32_(value) << SUPC_IER_LPDBC_Pos)) 

/* -------- SUPC_IDR : (SUPC Offset: 0x2C) ( /W 32) Disable Interrupt Register -------- */
#define SUPC_IDR_LPDBC0_Pos                   _UINT32_(0)                                          /* (SUPC_IDR) WKUPx Pin Tamper Detection Interrupt Disable Position */
#define SUPC_IDR_LPDBC0_Msk                   (_UINT32_(0x1) << SUPC_IDR_LPDBC0_Pos)               /* (SUPC_IDR) WKUPx Pin Tamper Detection Interrupt Disable Mask */
#define SUPC_IDR_LPDBC0(value)                (SUPC_IDR_LPDBC0_Msk & (_UINT32_(value) << SUPC_IDR_LPDBC0_Pos)) /* Assigment of value for LPDBC0 in the SUPC_IDR register */
#define SUPC_IDR_LPDBC1_Pos                   _UINT32_(1)                                          /* (SUPC_IDR) WKUPx Pin Tamper Detection Interrupt Disable Position */
#define SUPC_IDR_LPDBC1_Msk                   (_UINT32_(0x1) << SUPC_IDR_LPDBC1_Pos)               /* (SUPC_IDR) WKUPx Pin Tamper Detection Interrupt Disable Mask */
#define SUPC_IDR_LPDBC1(value)                (SUPC_IDR_LPDBC1_Msk & (_UINT32_(value) << SUPC_IDR_LPDBC1_Pos)) /* Assigment of value for LPDBC1 in the SUPC_IDR register */
#define SUPC_IDR_LPDBC2_Pos                   _UINT32_(2)                                          /* (SUPC_IDR) WKUPx Pin Tamper Detection Interrupt Disable Position */
#define SUPC_IDR_LPDBC2_Msk                   (_UINT32_(0x1) << SUPC_IDR_LPDBC2_Pos)               /* (SUPC_IDR) WKUPx Pin Tamper Detection Interrupt Disable Mask */
#define SUPC_IDR_LPDBC2(value)                (SUPC_IDR_LPDBC2_Msk & (_UINT32_(value) << SUPC_IDR_LPDBC2_Pos)) /* Assigment of value for LPDBC2 in the SUPC_IDR register */
#define SUPC_IDR_LPDBC3_Pos                   _UINT32_(3)                                          /* (SUPC_IDR) WKUPx Pin Tamper Detection Interrupt Disable Position */
#define SUPC_IDR_LPDBC3_Msk                   (_UINT32_(0x1) << SUPC_IDR_LPDBC3_Pos)               /* (SUPC_IDR) WKUPx Pin Tamper Detection Interrupt Disable Mask */
#define SUPC_IDR_LPDBC3(value)                (SUPC_IDR_LPDBC3_Msk & (_UINT32_(value) << SUPC_IDR_LPDBC3_Pos)) /* Assigment of value for LPDBC3 in the SUPC_IDR register */
#define SUPC_IDR_LPDBC4_Pos                   _UINT32_(4)                                          /* (SUPC_IDR) WKUPx Pin Tamper Detection Interrupt Disable Position */
#define SUPC_IDR_LPDBC4_Msk                   (_UINT32_(0x1) << SUPC_IDR_LPDBC4_Pos)               /* (SUPC_IDR) WKUPx Pin Tamper Detection Interrupt Disable Mask */
#define SUPC_IDR_LPDBC4(value)                (SUPC_IDR_LPDBC4_Msk & (_UINT32_(value) << SUPC_IDR_LPDBC4_Pos)) /* Assigment of value for LPDBC4 in the SUPC_IDR register */
#define SUPC_IDR_VDD3V3SMEV_Pos               _UINT32_(16)                                         /* (SUPC_IDR) VDD3V3 Supply Monitor Event Interrupt Disable Position */
#define SUPC_IDR_VDD3V3SMEV_Msk               (_UINT32_(0x1) << SUPC_IDR_VDD3V3SMEV_Pos)           /* (SUPC_IDR) VDD3V3 Supply Monitor Event Interrupt Disable Mask */
#define SUPC_IDR_VDD3V3SMEV(value)            (SUPC_IDR_VDD3V3SMEV_Msk & (_UINT32_(value) << SUPC_IDR_VDD3V3SMEV_Pos)) /* Assigment of value for VDD3V3SMEV in the SUPC_IDR register */
#define SUPC_IDR_VBATSMEV_Pos                 _UINT32_(17)                                         /* (SUPC_IDR) VBAT Supply Monitor Event Interrupt Disable Position */
#define SUPC_IDR_VBATSMEV_Msk                 (_UINT32_(0x1) << SUPC_IDR_VBATSMEV_Pos)             /* (SUPC_IDR) VBAT Supply Monitor Event Interrupt Disable Mask */
#define SUPC_IDR_VBATSMEV(value)              (SUPC_IDR_VBATSMEV_Msk & (_UINT32_(value) << SUPC_IDR_VBATSMEV_Pos)) /* Assigment of value for VBATSMEV in the SUPC_IDR register */
#define SUPC_IDR_Msk                          _UINT32_(0x0003001F)                                 /* (SUPC_IDR) Register Mask  */

#define SUPC_IDR_LPDBC_Pos                    _UINT32_(0)                                          /* (SUPC_IDR Position) WKUPx Pin Tamper Detection Interrupt Disable */
#define SUPC_IDR_LPDBC_Msk                    (_UINT32_(0x1F) << SUPC_IDR_LPDBC_Pos)               /* (SUPC_IDR Mask) LPDBC */
#define SUPC_IDR_LPDBC(value)                 (SUPC_IDR_LPDBC_Msk & (_UINT32_(value) << SUPC_IDR_LPDBC_Pos)) 

/* -------- SUPC_IMR : (SUPC Offset: 0x30) ( R/ 32) Mask Interrupt Register -------- */
#define SUPC_IMR_LPDBC0_Pos                   _UINT32_(0)                                          /* (SUPC_IMR) WKUPx Pin Tamper Detection Interrupt Mask Position */
#define SUPC_IMR_LPDBC0_Msk                   (_UINT32_(0x1) << SUPC_IMR_LPDBC0_Pos)               /* (SUPC_IMR) WKUPx Pin Tamper Detection Interrupt Mask Mask */
#define SUPC_IMR_LPDBC0(value)                (SUPC_IMR_LPDBC0_Msk & (_UINT32_(value) << SUPC_IMR_LPDBC0_Pos)) /* Assigment of value for LPDBC0 in the SUPC_IMR register */
#define SUPC_IMR_LPDBC1_Pos                   _UINT32_(1)                                          /* (SUPC_IMR) WKUPx Pin Tamper Detection Interrupt Mask Position */
#define SUPC_IMR_LPDBC1_Msk                   (_UINT32_(0x1) << SUPC_IMR_LPDBC1_Pos)               /* (SUPC_IMR) WKUPx Pin Tamper Detection Interrupt Mask Mask */
#define SUPC_IMR_LPDBC1(value)                (SUPC_IMR_LPDBC1_Msk & (_UINT32_(value) << SUPC_IMR_LPDBC1_Pos)) /* Assigment of value for LPDBC1 in the SUPC_IMR register */
#define SUPC_IMR_LPDBC2_Pos                   _UINT32_(2)                                          /* (SUPC_IMR) WKUPx Pin Tamper Detection Interrupt Mask Position */
#define SUPC_IMR_LPDBC2_Msk                   (_UINT32_(0x1) << SUPC_IMR_LPDBC2_Pos)               /* (SUPC_IMR) WKUPx Pin Tamper Detection Interrupt Mask Mask */
#define SUPC_IMR_LPDBC2(value)                (SUPC_IMR_LPDBC2_Msk & (_UINT32_(value) << SUPC_IMR_LPDBC2_Pos)) /* Assigment of value for LPDBC2 in the SUPC_IMR register */
#define SUPC_IMR_LPDBC3_Pos                   _UINT32_(3)                                          /* (SUPC_IMR) WKUPx Pin Tamper Detection Interrupt Mask Position */
#define SUPC_IMR_LPDBC3_Msk                   (_UINT32_(0x1) << SUPC_IMR_LPDBC3_Pos)               /* (SUPC_IMR) WKUPx Pin Tamper Detection Interrupt Mask Mask */
#define SUPC_IMR_LPDBC3(value)                (SUPC_IMR_LPDBC3_Msk & (_UINT32_(value) << SUPC_IMR_LPDBC3_Pos)) /* Assigment of value for LPDBC3 in the SUPC_IMR register */
#define SUPC_IMR_LPDBC4_Pos                   _UINT32_(4)                                          /* (SUPC_IMR) WKUPx Pin Tamper Detection Interrupt Mask Position */
#define SUPC_IMR_LPDBC4_Msk                   (_UINT32_(0x1) << SUPC_IMR_LPDBC4_Pos)               /* (SUPC_IMR) WKUPx Pin Tamper Detection Interrupt Mask Mask */
#define SUPC_IMR_LPDBC4(value)                (SUPC_IMR_LPDBC4_Msk & (_UINT32_(value) << SUPC_IMR_LPDBC4_Pos)) /* Assigment of value for LPDBC4 in the SUPC_IMR register */
#define SUPC_IMR_VDD3V3SMEV_Pos               _UINT32_(16)                                         /* (SUPC_IMR) VDD3V3 Supply Monitor Event Interrupt Mask Position */
#define SUPC_IMR_VDD3V3SMEV_Msk               (_UINT32_(0x1) << SUPC_IMR_VDD3V3SMEV_Pos)           /* (SUPC_IMR) VDD3V3 Supply Monitor Event Interrupt Mask Mask */
#define SUPC_IMR_VDD3V3SMEV(value)            (SUPC_IMR_VDD3V3SMEV_Msk & (_UINT32_(value) << SUPC_IMR_VDD3V3SMEV_Pos)) /* Assigment of value for VDD3V3SMEV in the SUPC_IMR register */
#define SUPC_IMR_VBATSMEV_Pos                 _UINT32_(17)                                         /* (SUPC_IMR) VBAT Supply Monitor Event Interrupt Mask Position */
#define SUPC_IMR_VBATSMEV_Msk                 (_UINT32_(0x1) << SUPC_IMR_VBATSMEV_Pos)             /* (SUPC_IMR) VBAT Supply Monitor Event Interrupt Mask Mask */
#define SUPC_IMR_VBATSMEV(value)              (SUPC_IMR_VBATSMEV_Msk & (_UINT32_(value) << SUPC_IMR_VBATSMEV_Pos)) /* Assigment of value for VBATSMEV in the SUPC_IMR register */
#define SUPC_IMR_Msk                          _UINT32_(0x0003001F)                                 /* (SUPC_IMR) Register Mask  */

#define SUPC_IMR_LPDBC_Pos                    _UINT32_(0)                                          /* (SUPC_IMR Position) WKUPx Pin Tamper Detection Interrupt Mask */
#define SUPC_IMR_LPDBC_Msk                    (_UINT32_(0x1F) << SUPC_IMR_LPDBC_Pos)               /* (SUPC_IMR Mask) LPDBC */
#define SUPC_IMR_LPDBC(value)                 (SUPC_IMR_LPDBC_Msk & (_UINT32_(value) << SUPC_IMR_LPDBC_Pos)) 

/* -------- SUPC_ISR : (SUPC Offset: 0x34) ( R/ 32) Status Interrupt Register -------- */
#define SUPC_ISR_LPDBC0_Pos                   _UINT32_(0)                                          /* (SUPC_ISR) WKUPx Pin Tamper Detection Interrupt Status (cleared on read) Position */
#define SUPC_ISR_LPDBC0_Msk                   (_UINT32_(0x1) << SUPC_ISR_LPDBC0_Pos)               /* (SUPC_ISR) WKUPx Pin Tamper Detection Interrupt Status (cleared on read) Mask */
#define SUPC_ISR_LPDBC0(value)                (SUPC_ISR_LPDBC0_Msk & (_UINT32_(value) << SUPC_ISR_LPDBC0_Pos)) /* Assigment of value for LPDBC0 in the SUPC_ISR register */
#define SUPC_ISR_LPDBC1_Pos                   _UINT32_(1)                                          /* (SUPC_ISR) WKUPx Pin Tamper Detection Interrupt Status (cleared on read) Position */
#define SUPC_ISR_LPDBC1_Msk                   (_UINT32_(0x1) << SUPC_ISR_LPDBC1_Pos)               /* (SUPC_ISR) WKUPx Pin Tamper Detection Interrupt Status (cleared on read) Mask */
#define SUPC_ISR_LPDBC1(value)                (SUPC_ISR_LPDBC1_Msk & (_UINT32_(value) << SUPC_ISR_LPDBC1_Pos)) /* Assigment of value for LPDBC1 in the SUPC_ISR register */
#define SUPC_ISR_LPDBC2_Pos                   _UINT32_(2)                                          /* (SUPC_ISR) WKUPx Pin Tamper Detection Interrupt Status (cleared on read) Position */
#define SUPC_ISR_LPDBC2_Msk                   (_UINT32_(0x1) << SUPC_ISR_LPDBC2_Pos)               /* (SUPC_ISR) WKUPx Pin Tamper Detection Interrupt Status (cleared on read) Mask */
#define SUPC_ISR_LPDBC2(value)                (SUPC_ISR_LPDBC2_Msk & (_UINT32_(value) << SUPC_ISR_LPDBC2_Pos)) /* Assigment of value for LPDBC2 in the SUPC_ISR register */
#define SUPC_ISR_LPDBC3_Pos                   _UINT32_(3)                                          /* (SUPC_ISR) WKUPx Pin Tamper Detection Interrupt Status (cleared on read) Position */
#define SUPC_ISR_LPDBC3_Msk                   (_UINT32_(0x1) << SUPC_ISR_LPDBC3_Pos)               /* (SUPC_ISR) WKUPx Pin Tamper Detection Interrupt Status (cleared on read) Mask */
#define SUPC_ISR_LPDBC3(value)                (SUPC_ISR_LPDBC3_Msk & (_UINT32_(value) << SUPC_ISR_LPDBC3_Pos)) /* Assigment of value for LPDBC3 in the SUPC_ISR register */
#define SUPC_ISR_LPDBC4_Pos                   _UINT32_(4)                                          /* (SUPC_ISR) WKUPx Pin Tamper Detection Interrupt Status (cleared on read) Position */
#define SUPC_ISR_LPDBC4_Msk                   (_UINT32_(0x1) << SUPC_ISR_LPDBC4_Pos)               /* (SUPC_ISR) WKUPx Pin Tamper Detection Interrupt Status (cleared on read) Mask */
#define SUPC_ISR_LPDBC4(value)                (SUPC_ISR_LPDBC4_Msk & (_UINT32_(value) << SUPC_ISR_LPDBC4_Pos)) /* Assigment of value for LPDBC4 in the SUPC_ISR register */
#define SUPC_ISR_VDD3V3SMEV_Pos               _UINT32_(16)                                         /* (SUPC_ISR) VDD3V3 Supply Monitor Event Interrupt Status (cleared on read) Position */
#define SUPC_ISR_VDD3V3SMEV_Msk               (_UINT32_(0x1) << SUPC_ISR_VDD3V3SMEV_Pos)           /* (SUPC_ISR) VDD3V3 Supply Monitor Event Interrupt Status (cleared on read) Mask */
#define SUPC_ISR_VDD3V3SMEV(value)            (SUPC_ISR_VDD3V3SMEV_Msk & (_UINT32_(value) << SUPC_ISR_VDD3V3SMEV_Pos)) /* Assigment of value for VDD3V3SMEV in the SUPC_ISR register */
#define SUPC_ISR_VBATSMEV_Pos                 _UINT32_(17)                                         /* (SUPC_ISR) VBAT Supply Monitor Event Interrupt Status (cleared on read) Position */
#define SUPC_ISR_VBATSMEV_Msk                 (_UINT32_(0x1) << SUPC_ISR_VBATSMEV_Pos)             /* (SUPC_ISR) VBAT Supply Monitor Event Interrupt Status (cleared on read) Mask */
#define SUPC_ISR_VBATSMEV(value)              (SUPC_ISR_VBATSMEV_Msk & (_UINT32_(value) << SUPC_ISR_VBATSMEV_Pos)) /* Assigment of value for VBATSMEV in the SUPC_ISR register */
#define SUPC_ISR_Msk                          _UINT32_(0x0003001F)                                 /* (SUPC_ISR) Register Mask  */

#define SUPC_ISR_LPDBC_Pos                    _UINT32_(0)                                          /* (SUPC_ISR Position) WKUPx Pin Tamper Detection Interrupt Status (cleared on read) */
#define SUPC_ISR_LPDBC_Msk                    (_UINT32_(0x1F) << SUPC_ISR_LPDBC_Pos)               /* (SUPC_ISR Mask) LPDBC */
#define SUPC_ISR_LPDBC(value)                 (SUPC_ISR_LPDBC_Msk & (_UINT32_(value) << SUPC_ISR_LPDBC_Pos)) 

/** \brief SUPC register offsets definitions */
#define SUPC_CR_REG_OFST               _UINT32_(0x00)      /* (SUPC_CR) Control Register Offset */
#define SUPC_SMMR_REG_OFST             _UINT32_(0x04)      /* (SUPC_SMMR) Supply Monitor Mode Register Offset */
#define SUPC_MR_REG_OFST               _UINT32_(0x08)      /* (SUPC_MR) Mode Register Offset */
#define SUPC_WUMR_REG_OFST             _UINT32_(0x0C)      /* (SUPC_WUMR) Wakeup Mode Register Offset */
#define SUPC_WUIR_REG_OFST             _UINT32_(0x10)      /* (SUPC_WUIR) Wakeup Inputs Register Offset */
#define SUPC_SR_REG_OFST               _UINT32_(0x14)      /* (SUPC_SR) Status Register Offset */
#define SUPC_EMR_REG_OFST              _UINT32_(0x1C)      /* (SUPC_EMR) Extended Mode Register Offset */
#define SUPC_BMR_REG_OFST              _UINT32_(0x20)      /* (SUPC_BMR) Backup Mode Register Offset */
#define SUPC_WUSR_REG_OFST             _UINT32_(0x24)      /* (SUPC_WUSR) Wakeup Status Register Offset */
#define SUPC_IER_REG_OFST              _UINT32_(0x28)      /* (SUPC_IER) Enable Interrupt Register Offset */
#define SUPC_IDR_REG_OFST              _UINT32_(0x2C)      /* (SUPC_IDR) Disable Interrupt Register Offset */
#define SUPC_IMR_REG_OFST              _UINT32_(0x30)      /* (SUPC_IMR) Mask Interrupt Register Offset */
#define SUPC_ISR_REG_OFST              _UINT32_(0x34)      /* (SUPC_ISR) Status Interrupt Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SUPC register API structure */
typedef struct
{
  __O   uint32_t                       SUPC_CR;            /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       SUPC_SMMR;          /**< Offset: 0x04 (R/W  32) Supply Monitor Mode Register */
  __IO  uint32_t                       SUPC_MR;            /**< Offset: 0x08 (R/W  32) Mode Register */
  __IO  uint32_t                       SUPC_WUMR;          /**< Offset: 0x0C (R/W  32) Wakeup Mode Register */
  __IO  uint32_t                       SUPC_WUIR;          /**< Offset: 0x10 (R/W  32) Wakeup Inputs Register */
  __I   uint32_t                       SUPC_SR;            /**< Offset: 0x14 (R/   32) Status Register */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       SUPC_EMR;           /**< Offset: 0x1C (R/W  32) Extended Mode Register */
  __IO  uint32_t                       SUPC_BMR;           /**< Offset: 0x20 (R/W  32) Backup Mode Register */
  __I   uint32_t                       SUPC_WUSR;          /**< Offset: 0x24 (R/   32) Wakeup Status Register */
  __O   uint32_t                       SUPC_IER;           /**< Offset: 0x28 ( /W  32) Enable Interrupt Register */
  __O   uint32_t                       SUPC_IDR;           /**< Offset: 0x2C ( /W  32) Disable Interrupt Register */
  __I   uint32_t                       SUPC_IMR;           /**< Offset: 0x30 (R/   32) Mask Interrupt Register */
  __I   uint32_t                       SUPC_ISR;           /**< Offset: 0x34 (R/   32) Status Interrupt Register */
} supc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CXMTSH_SUPC_COMPONENT_H_ */
