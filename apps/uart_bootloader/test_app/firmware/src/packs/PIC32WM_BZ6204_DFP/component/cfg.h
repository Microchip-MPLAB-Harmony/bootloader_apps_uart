/*
 * Component description for CFG
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
#ifndef _PIC32WM_BZ6_CFG_COMPONENT_H_
#define _PIC32WM_BZ6_CFG_COMPONENT_H_

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR CFG                       */
/* ************************************************************************** */

/* -------- CFG_CFGCON0 : (CFG Offset: 0x00) (R/W 32)  -------- */
#define CFG_CFGCON0_RESETVALUE                _UINT32_(0x7960000B)                                 /*  (CFG_CFGCON0)   Reset Value */

#define CFG_CFGCON0_SWOEN_Pos                 _UINT32_(1)                                          /* (CFG_CFGCON0) SWO enable on 2-wire debug interface Position */
#define CFG_CFGCON0_SWOEN_Msk                 (_UINT32_(0x1) << CFG_CFGCON0_SWOEN_Pos)             /* (CFG_CFGCON0) SWO enable on 2-wire debug interface Mask */
#define CFG_CFGCON0_SWOEN(value)              (CFG_CFGCON0_SWOEN_Msk & (_UINT32_(value) << CFG_CFGCON0_SWOEN_Pos)) /* Assignment of value for SWOEN in the CFG_CFGCON0 register */
#define CFG_CFGCON0_TROEN_Pos                 _UINT32_(2)                                          /* (CFG_CFGCON0) Trace Output Enable Position */
#define CFG_CFGCON0_TROEN_Msk                 (_UINT32_(0x1) << CFG_CFGCON0_TROEN_Pos)             /* (CFG_CFGCON0) Trace Output Enable Mask */
#define CFG_CFGCON0_TROEN(value)              (CFG_CFGCON0_TROEN_Msk & (_UINT32_(value) << CFG_CFGCON0_TROEN_Pos)) /* Assignment of value for TROEN in the CFG_CFGCON0 register */
#define CFG_CFGCON0_JTAGEN_Pos                _UINT32_(3)                                          /* (CFG_CFGCON0) JTAG Enable Position */
#define CFG_CFGCON0_JTAGEN_Msk                (_UINT32_(0x1) << CFG_CFGCON0_JTAGEN_Pos)            /* (CFG_CFGCON0) JTAG Enable Mask */
#define CFG_CFGCON0_JTAGEN(value)             (CFG_CFGCON0_JTAGEN_Msk & (_UINT32_(value) << CFG_CFGCON0_JTAGEN_Pos)) /* Assignment of value for JTAGEN in the CFG_CFGCON0 register */
#define CFG_CFGCON0_ADCPOVR_Pos               _UINT32_(4)                                          /* (CFG_CFGCON0) ADC Charge Pump Override Position */
#define CFG_CFGCON0_ADCPOVR_Msk               (_UINT32_(0x1) << CFG_CFGCON0_ADCPOVR_Pos)           /* (CFG_CFGCON0) ADC Charge Pump Override Mask */
#define CFG_CFGCON0_ADCPOVR(value)            (CFG_CFGCON0_ADCPOVR_Msk & (_UINT32_(value) << CFG_CFGCON0_ADCPOVR_Pos)) /* Assignment of value for ADCPOVR in the CFG_CFGCON0 register */
#define CFG_CFGCON0_CPENFILT_Pos              _UINT32_(7)                                          /* (CFG_CFGCON0) ADC CP Filter Enable Position */
#define CFG_CFGCON0_CPENFILT_Msk              (_UINT32_(0x1) << CFG_CFGCON0_CPENFILT_Pos)          /* (CFG_CFGCON0) ADC CP Filter Enable Mask */
#define CFG_CFGCON0_CPENFILT(value)           (CFG_CFGCON0_CPENFILT_Msk & (_UINT32_(value) << CFG_CFGCON0_CPENFILT_Pos)) /* Assignment of value for CPENFILT in the CFG_CFGCON0 register */
#define CFG_CFGCON0_RTCIN0_ALTEN_Pos          _UINT32_(8)                                          /* (CFG_CFGCON0) RTCIN0 Alternate Enable Position */
#define CFG_CFGCON0_RTCIN0_ALTEN_Msk          (_UINT32_(0x1) << CFG_CFGCON0_RTCIN0_ALTEN_Pos)      /* (CFG_CFGCON0) RTCIN0 Alternate Enable Mask */
#define CFG_CFGCON0_RTCIN0_ALTEN(value)       (CFG_CFGCON0_RTCIN0_ALTEN_Msk & (_UINT32_(value) << CFG_CFGCON0_RTCIN0_ALTEN_Pos)) /* Assignment of value for RTCIN0_ALTEN in the CFG_CFGCON0 register */
#define CFG_CFGCON0_RTCOUT_ALTEN_Pos          _UINT32_(9)                                          /* (CFG_CFGCON0) RTCOUT Alternate Enable Position */
#define CFG_CFGCON0_RTCOUT_ALTEN_Msk          (_UINT32_(0x1) << CFG_CFGCON0_RTCOUT_ALTEN_Pos)      /* (CFG_CFGCON0) RTCOUT Alternate Enable Mask */
#define CFG_CFGCON0_RTCOUT_ALTEN(value)       (CFG_CFGCON0_RTCOUT_ALTEN_Msk & (_UINT32_(value) << CFG_CFGCON0_RTCOUT_ALTEN_Pos)) /* Assignment of value for RTCOUT_ALTEN in the CFG_CFGCON0 register */
#define CFG_CFGCON0_PMULOCK_Pos               _UINT32_(10)                                         /* (CFG_CFGCON0) PMU Controller Register LOCK Position */
#define CFG_CFGCON0_PMULOCK_Msk               (_UINT32_(0x1) << CFG_CFGCON0_PMULOCK_Pos)           /* (CFG_CFGCON0) PMU Controller Register LOCK Mask */
#define CFG_CFGCON0_PMULOCK(value)            (CFG_CFGCON0_PMULOCK_Msk & (_UINT32_(value) << CFG_CFGCON0_PMULOCK_Pos)) /* Assignment of value for PMULOCK in the CFG_CFGCON0 register */
#define CFG_CFGCON0_PGLCOK_Pos                _UINT32_(11)                                         /* (CFG_CFGCON0) Permission Group LOCK Position */
#define CFG_CFGCON0_PGLCOK_Msk                (_UINT32_(0x1) << CFG_CFGCON0_PGLCOK_Pos)            /* (CFG_CFGCON0) Permission Group LOCK Mask */
#define CFG_CFGCON0_PGLCOK(value)             (CFG_CFGCON0_PGLCOK_Msk & (_UINT32_(value) << CFG_CFGCON0_PGLCOK_Pos)) /* Assignment of value for PGLCOK in the CFG_CFGCON0 register */
#define CFG_CFGCON0_PMDLOCK_Pos               _UINT32_(12)                                         /* (CFG_CFGCON0) Peripheral Module Disable (PMD) LOCK Position */
#define CFG_CFGCON0_PMDLOCK_Msk               (_UINT32_(0x1) << CFG_CFGCON0_PMDLOCK_Pos)           /* (CFG_CFGCON0) Peripheral Module Disable (PMD) LOCK Mask */
#define CFG_CFGCON0_PMDLOCK(value)            (CFG_CFGCON0_PMDLOCK_Msk & (_UINT32_(value) << CFG_CFGCON0_PMDLOCK_Pos)) /* Assignment of value for PMDLOCK in the CFG_CFGCON0 register */
#define CFG_CFGCON0_IOLOCK_Pos                _UINT32_(13)                                         /* (CFG_CFGCON0) IO LOCK Position */
#define CFG_CFGCON0_IOLOCK_Msk                (_UINT32_(0x1) << CFG_CFGCON0_IOLOCK_Pos)            /* (CFG_CFGCON0) IO LOCK Mask */
#define CFG_CFGCON0_IOLOCK(value)             (CFG_CFGCON0_IOLOCK_Msk & (_UINT32_(value) << CFG_CFGCON0_IOLOCK_Pos)) /* Assignment of value for IOLOCK in the CFG_CFGCON0 register */
#define CFG_CFGCON0_CFGCLOCK_Pos              _UINT32_(14)                                         /* (CFG_CFGCON0) Configuration Register Lock Position */
#define CFG_CFGCON0_CFGCLOCK_Msk              (_UINT32_(0x3) << CFG_CFGCON0_CFGCLOCK_Pos)          /* (CFG_CFGCON0) Configuration Register Lock Mask */
#define CFG_CFGCON0_CFGCLOCK(value)           (CFG_CFGCON0_CFGCLOCK_Msk & (_UINT32_(value) << CFG_CFGCON0_CFGCLOCK_Pos)) /* Assignment of value for CFGCLOCK in the CFG_CFGCON0 register */
#define CFG_CFGCON0_USBSSEN_Pos               _UINT32_(17)                                         /* (CFG_CFGCON0) USB Suspend Sleep Enable Position */
#define CFG_CFGCON0_USBSSEN_Msk               (_UINT32_(0x1) << CFG_CFGCON0_USBSSEN_Pos)           /* (CFG_CFGCON0) USB Suspend Sleep Enable Mask */
#define CFG_CFGCON0_USBSSEN(value)            (CFG_CFGCON0_USBSSEN_Msk & (_UINT32_(value) << CFG_CFGCON0_USBSSEN_Pos)) /* Assignment of value for USBSSEN in the CFG_CFGCON0 register */
#define CFG_CFGCON0_EPLLHWMD_Pos              _UINT32_(18)                                         /* (CFG_CFGCON0) EWPLL HW Control Mode for PWDN and RESET Position */
#define CFG_CFGCON0_EPLLHWMD_Msk              (_UINT32_(0x1) << CFG_CFGCON0_EPLLHWMD_Pos)          /* (CFG_CFGCON0) EWPLL HW Control Mode for PWDN and RESET Mask */
#define CFG_CFGCON0_EPLLHWMD(value)           (CFG_CFGCON0_EPLLHWMD_Msk & (_UINT32_(value) << CFG_CFGCON0_EPLLHWMD_Pos)) /* Assignment of value for EPLLHWMD in the CFG_CFGCON0 register */
#define CFG_CFGCON0_UPLLHWMD_Pos              _UINT32_(19)                                         /* (CFG_CFGCON0) UWPLL HW Control Mode for PWDN and RESET Position */
#define CFG_CFGCON0_UPLLHWMD_Msk              (_UINT32_(0x1) << CFG_CFGCON0_UPLLHWMD_Pos)          /* (CFG_CFGCON0) UWPLL HW Control Mode for PWDN and RESET Mask */
#define CFG_CFGCON0_UPLLHWMD(value)           (CFG_CFGCON0_UPLLHWMD_Msk & (_UINT32_(value) << CFG_CFGCON0_UPLLHWMD_Pos)) /* Assignment of value for UPLLHWMD in the CFG_CFGCON0 register */
#define CFG_CFGCON0_HPLUGDIS_Pos              _UINT32_(20)                                         /* (CFG_CFGCON0) Hot Plugging Disable (Outside Fuse Loading) Position */
#define CFG_CFGCON0_HPLUGDIS_Msk              (_UINT32_(0x1) << CFG_CFGCON0_HPLUGDIS_Pos)          /* (CFG_CFGCON0) Hot Plugging Disable (Outside Fuse Loading) Mask */
#define CFG_CFGCON0_HPLUGDIS(value)           (CFG_CFGCON0_HPLUGDIS_Msk & (_UINT32_(value) << CFG_CFGCON0_HPLUGDIS_Pos)) /* Assignment of value for HPLUGDIS in the CFG_CFGCON0 register */
#define CFG_CFGCON0_USBIDIO_Pos               _UINT32_(21)                                         /* (CFG_CFGCON0) USB USBID Selection bit Position */
#define CFG_CFGCON0_USBIDIO_Msk               (_UINT32_(0x1) << CFG_CFGCON0_USBIDIO_Pos)           /* (CFG_CFGCON0) USB USBID Selection bit Mask */
#define CFG_CFGCON0_USBIDIO(value)            (CFG_CFGCON0_USBIDIO_Msk & (_UINT32_(value) << CFG_CFGCON0_USBIDIO_Pos)) /* Assignment of value for USBIDIO in the CFG_CFGCON0 register */
#define CFG_CFGCON0_VBUSONIO_Pos              _UINT32_(22)                                         /* (CFG_CFGCON0) USB VBUS_ON Selection bit Position */
#define CFG_CFGCON0_VBUSONIO_Msk              (_UINT32_(0x1) << CFG_CFGCON0_VBUSONIO_Pos)          /* (CFG_CFGCON0) USB VBUS_ON Selection bit Mask */
#define CFG_CFGCON0_VBUSONIO(value)           (CFG_CFGCON0_VBUSONIO_Msk & (_UINT32_(value) << CFG_CFGCON0_VBUSONIO_Pos)) /* Assignment of value for VBUSONIO in the CFG_CFGCON0 register */
#define CFG_CFGCON0_SMBUS3EN2_Pos             _UINT32_(23)                                         /* (CFG_CFGCON0) SMBus3 Enable for SERCOM2 Position */
#define CFG_CFGCON0_SMBUS3EN2_Msk             (_UINT32_(0x1) << CFG_CFGCON0_SMBUS3EN2_Pos)         /* (CFG_CFGCON0) SMBus3 Enable for SERCOM2 Mask */
#define CFG_CFGCON0_SMBUS3EN2(value)          (CFG_CFGCON0_SMBUS3EN2_Msk & (_UINT32_(value) << CFG_CFGCON0_SMBUS3EN2_Pos)) /* Assignment of value for SMBUS3EN2 in the CFG_CFGCON0 register */
#define CFG_CFGCON0_PCM_Pos                   _UINT32_(24)                                         /* (CFG_CFGCON0) PCHE I/D Cacheable Mode Position */
#define CFG_CFGCON0_PCM_Msk                   (_UINT32_(0x1) << CFG_CFGCON0_PCM_Pos)               /* (CFG_CFGCON0) PCHE I/D Cacheable Mode Mask */
#define CFG_CFGCON0_PCM(value)                (CFG_CFGCON0_PCM_Msk & (_UINT32_(value) << CFG_CFGCON0_PCM_Pos)) /* Assignment of value for PCM in the CFG_CFGCON0 register */
#define CFG_CFGCON0_INT0E_Pos                 _UINT32_(25)                                         /* (CFG_CFGCON0) INT0 Enable Position */
#define CFG_CFGCON0_INT0E_Msk                 (_UINT32_(0x1) << CFG_CFGCON0_INT0E_Pos)             /* (CFG_CFGCON0) INT0 Enable Mask */
#define CFG_CFGCON0_INT0E(value)              (CFG_CFGCON0_INT0E_Msk & (_UINT32_(value) << CFG_CFGCON0_INT0E_Pos)) /* Assignment of value for INT0E in the CFG_CFGCON0 register */
#define CFG_CFGCON0_INT0P_Pos                 _UINT32_(26)                                         /* (CFG_CFGCON0) INT0P Polarity Position */
#define CFG_CFGCON0_INT0P_Msk                 (_UINT32_(0x1) << CFG_CFGCON0_INT0P_Pos)             /* (CFG_CFGCON0) INT0P Polarity Mask */
#define CFG_CFGCON0_INT0P(value)              (CFG_CFGCON0_INT0P_Msk & (_UINT32_(value) << CFG_CFGCON0_INT0P_Pos)) /* Assignment of value for INT0P in the CFG_CFGCON0 register */
#define CFG_CFGCON0_CMEN_Pos                  _UINT32_(27)                                         /* (CFG_CFGCON0) SPA/DPA Countermeasures Enable Position */
#define CFG_CFGCON0_CMEN_Msk                  (_UINT32_(0x1) << CFG_CFGCON0_CMEN_Pos)              /* (CFG_CFGCON0) SPA/DPA Countermeasures Enable Mask */
#define CFG_CFGCON0_CMEN(value)               (CFG_CFGCON0_CMEN_Msk & (_UINT32_(value) << CFG_CFGCON0_CMEN_Pos)) /* Assignment of value for CMEN in the CFG_CFGCON0 register */
#define CFG_CFGCON0_FECCCON_Pos               _UINT32_(28)                                         /* (CFG_CFGCON0) Flash ECC Control Position */
#define CFG_CFGCON0_FECCCON_Msk               (_UINT32_(0x3) << CFG_CFGCON0_FECCCON_Pos)           /* (CFG_CFGCON0) Flash ECC Control Mask */
#define CFG_CFGCON0_FECCCON(value)            (CFG_CFGCON0_FECCCON_Msk & (_UINT32_(value) << CFG_CFGCON0_FECCCON_Pos)) /* Assignment of value for FECCCON in the CFG_CFGCON0 register */
#define CFG_CFGCON0_FRECCDIS_Pos              _UINT32_(30)                                         /* (CFG_CFGCON0) Flex RAM ECC Control Position */
#define CFG_CFGCON0_FRECCDIS_Msk              (_UINT32_(0x1) << CFG_CFGCON0_FRECCDIS_Pos)          /* (CFG_CFGCON0) Flex RAM ECC Control Mask */
#define CFG_CFGCON0_FRECCDIS(value)           (CFG_CFGCON0_FRECCDIS_Msk & (_UINT32_(value) << CFG_CFGCON0_FRECCDIS_Pos)) /* Assignment of value for FRECCDIS in the CFG_CFGCON0 register */
#define CFG_CFGCON0_Msk                       _UINT32_(0x7FFEFF9E)                                 /* (CFG_CFGCON0) Register Mask  */

#define CFG_CFGCON0_SMBUS3EN_Pos              _UINT32_(23)                                         /* (CFG_CFGCON0 Position) SMBus3 Enable for SERCOM2 */
#define CFG_CFGCON0_SMBUS3EN_Msk              (_UINT32_(0x1) << CFG_CFGCON0_SMBUS3EN_Pos)          /* (CFG_CFGCON0 Mask) SMBUS3EN */
#define CFG_CFGCON0_SMBUS3EN(value)           (CFG_CFGCON0_SMBUS3EN_Msk & (_UINT32_(value) << CFG_CFGCON0_SMBUS3EN_Pos)) 

/* -------- CFG_CFGCON0CLR : (CFG Offset: 0x04) (R/W 32) Bit clear register -------- */
#define CFG_CFGCON0CLR_RESETVALUE             _UINT32_(0x00)                                       /*  (CFG_CFGCON0CLR) Bit clear register  Reset Value */

#define CFG_CFGCON0CLR_Msk                    _UINT32_(0x00000000)                                 /* (CFG_CFGCON0CLR) Register Mask  */


/* -------- CFG_CFGCON0SET : (CFG Offset: 0x08) (R/W 32) Bit set register -------- */
#define CFG_CFGCON0SET_RESETVALUE             _UINT32_(0x00)                                       /*  (CFG_CFGCON0SET) Bit set register  Reset Value */

#define CFG_CFGCON0SET_Msk                    _UINT32_(0x00000000)                                 /* (CFG_CFGCON0SET) Register Mask  */


/* -------- CFG_CFGCON0INV : (CFG Offset: 0x0C) (R/W 32) Bit invert register -------- */
#define CFG_CFGCON0INV_RESETVALUE             _UINT32_(0x00)                                       /*  (CFG_CFGCON0INV) Bit invert register  Reset Value */

#define CFG_CFGCON0INV_Msk                    _UINT32_(0x00000000)                                 /* (CFG_CFGCON0INV) Register Mask  */


/* -------- CFG_CFGCON1 : (CFG Offset: 0x10) (R/W 32)  -------- */
#define CFG_CFGCON1_RESETVALUE                _UINT32_(0x1F00403B)                                 /*  (CFG_CFGCON1)   Reset Value */

#define CFG_CFGCON1_CAN0_PIN_EN_Pos           _UINT32_(2)                                          /* (CFG_CFGCON1) CAN0 Pin Enable Position */
#define CFG_CFGCON1_CAN0_PIN_EN_Msk           (_UINT32_(0x1) << CFG_CFGCON1_CAN0_PIN_EN_Pos)       /* (CFG_CFGCON1) CAN0 Pin Enable Mask */
#define CFG_CFGCON1_CAN0_PIN_EN(value)        (CFG_CFGCON1_CAN0_PIN_EN_Msk & (_UINT32_(value) << CFG_CFGCON1_CAN0_PIN_EN_Pos)) /* Assignment of value for CAN0_PIN_EN in the CFG_CFGCON1 register */
#define CFG_CFGCON1_TRCEN_Pos                 _UINT32_(5)                                          /* (CFG_CFGCON1) Trace Enable Position */
#define CFG_CFGCON1_TRCEN_Msk                 (_UINT32_(0x1) << CFG_CFGCON1_TRCEN_Pos)             /* (CFG_CFGCON1) Trace Enable Mask */
#define CFG_CFGCON1_TRCEN(value)              (CFG_CFGCON1_TRCEN_Msk & (_UINT32_(value) << CFG_CFGCON1_TRCEN_Pos)) /* Assignment of value for TRCEN in the CFG_CFGCON1 register */
#define CFG_CFGCON1_CCL_OE_Pos                _UINT32_(6)                                          /* (CFG_CFGCON1) CCL Pads (via PPS) Output Enable Position */
#define CFG_CFGCON1_CCL_OE_Msk                (_UINT32_(0x1) << CFG_CFGCON1_CCL_OE_Pos)            /* (CFG_CFGCON1) CCL Pads (via PPS) Output Enable Mask */
#define CFG_CFGCON1_CCL_OE(value)             (CFG_CFGCON1_CCL_OE_Msk & (_UINT32_(value) << CFG_CFGCON1_CCL_OE_Pos)) /* Assignment of value for CCL_OE in the CFG_CFGCON1 register */
#define CFG_CFGCON1_ZBTWKSYS_Pos              _UINT32_(7)                                          /* (CFG_CFGCON1) ZBT Subsystem External Wake-up source Position */
#define CFG_CFGCON1_ZBTWKSYS_Msk              (_UINT32_(0x1) << CFG_CFGCON1_ZBTWKSYS_Pos)          /* (CFG_CFGCON1) ZBT Subsystem External Wake-up source Mask */
#define CFG_CFGCON1_ZBTWKSYS(value)           (CFG_CFGCON1_ZBTWKSYS_Msk & (_UINT32_(value) << CFG_CFGCON1_ZBTWKSYS_Pos)) /* Assignment of value for ZBTWKSYS in the CFG_CFGCON1 register */
#define CFG_CFGCON1_CMP0_OE_Pos               _UINT32_(8)                                          /* (CFG_CFGCON1) Analog Comparator-0 Output Enable Position */
#define CFG_CFGCON1_CMP0_OE_Msk               (_UINT32_(0x1) << CFG_CFGCON1_CMP0_OE_Pos)           /* (CFG_CFGCON1) Analog Comparator-0 Output Enable Mask */
#define CFG_CFGCON1_CMP0_OE(value)            (CFG_CFGCON1_CMP0_OE_Msk & (_UINT32_(value) << CFG_CFGCON1_CMP0_OE_Pos)) /* Assignment of value for CMP0_OE in the CFG_CFGCON1 register */
#define CFG_CFGCON1_CMP1_OE_Pos               _UINT32_(9)                                          /* (CFG_CFGCON1) Analog Comparator-1 Output Enable Position */
#define CFG_CFGCON1_CMP1_OE_Msk               (_UINT32_(0x1) << CFG_CFGCON1_CMP1_OE_Pos)           /* (CFG_CFGCON1) Analog Comparator-1 Output Enable Mask */
#define CFG_CFGCON1_CMP1_OE(value)            (CFG_CFGCON1_CMP1_OE_Msk & (_UINT32_(value) << CFG_CFGCON1_CMP1_OE_Pos)) /* Assignment of value for CMP1_OE in the CFG_CFGCON1 register */
#define CFG_CFGCON1_QSPI_HSEN_Pos             _UINT32_(10)                                         /* (CFG_CFGCON1) QSPI (Direct) Enable Position */
#define CFG_CFGCON1_QSPI_HSEN_Msk             (_UINT32_(0x1) << CFG_CFGCON1_QSPI_HSEN_Pos)         /* (CFG_CFGCON1) QSPI (Direct) Enable Mask */
#define CFG_CFGCON1_QSPI_HSEN(value)          (CFG_CFGCON1_QSPI_HSEN_Msk & (_UINT32_(value) << CFG_CFGCON1_QSPI_HSEN_Pos)) /* Assignment of value for QSPI_HSEN in the CFG_CFGCON1 register */
#define CFG_CFGCON1_SCOM0_HSEN_Pos            _UINT32_(11)                                         /* (CFG_CFGCON1) SERCOM0 Direct (High Speed) Pin Enable Position */
#define CFG_CFGCON1_SCOM0_HSEN_Msk            (_UINT32_(0x1) << CFG_CFGCON1_SCOM0_HSEN_Pos)        /* (CFG_CFGCON1) SERCOM0 Direct (High Speed) Pin Enable Mask */
#define CFG_CFGCON1_SCOM0_HSEN(value)         (CFG_CFGCON1_SCOM0_HSEN_Msk & (_UINT32_(value) << CFG_CFGCON1_SCOM0_HSEN_Pos)) /* Assignment of value for SCOM0_HSEN in the CFG_CFGCON1 register */
#define CFG_CFGCON1_SCOM1_HSEN_Pos            _UINT32_(12)                                         /* (CFG_CFGCON1) SERCOM1 Direct (High Speed) Pin Enable Position */
#define CFG_CFGCON1_SCOM1_HSEN_Msk            (_UINT32_(0x1) << CFG_CFGCON1_SCOM1_HSEN_Pos)        /* (CFG_CFGCON1) SERCOM1 Direct (High Speed) Pin Enable Mask */
#define CFG_CFGCON1_SCOM1_HSEN(value)         (CFG_CFGCON1_SCOM1_HSEN_Msk & (_UINT32_(value) << CFG_CFGCON1_SCOM1_HSEN_Pos)) /* Assignment of value for SCOM1_HSEN in the CFG_CFGCON1 register */
#define CFG_CFGCON1_SCOM2_HSEN_Pos            _UINT32_(13)                                         /* (CFG_CFGCON1) SERCOM2 Direct (High Speed) Pin Enable Position */
#define CFG_CFGCON1_SCOM2_HSEN_Msk            (_UINT32_(0x1) << CFG_CFGCON1_SCOM2_HSEN_Pos)        /* (CFG_CFGCON1) SERCOM2 Direct (High Speed) Pin Enable Mask */
#define CFG_CFGCON1_SCOM2_HSEN(value)         (CFG_CFGCON1_SCOM2_HSEN_Msk & (_UINT32_(value) << CFG_CFGCON1_SCOM2_HSEN_Pos)) /* Assignment of value for SCOM2_HSEN in the CFG_CFGCON1 register */
#define CFG_CFGCON1_SMCLR_Pos                 _UINT32_(14)                                         /* (CFG_CFGCON1) Selects CRU handling of MCLR Control Position */
#define CFG_CFGCON1_SMCLR_Msk                 (_UINT32_(0x1) << CFG_CFGCON1_SMCLR_Pos)             /* (CFG_CFGCON1) Selects CRU handling of MCLR Control Mask */
#define CFG_CFGCON1_SMCLR(value)              (CFG_CFGCON1_SMCLR_Msk & (_UINT32_(value) << CFG_CFGCON1_SMCLR_Pos)) /* Assignment of value for SMCLR in the CFG_CFGCON1 register */
#define CFG_CFGCON1_QSCHE_EN_Pos              _UINT32_(15)                                         /* (CFG_CFGCON1) QSPI Address Space Cache Attribute Position */
#define CFG_CFGCON1_QSCHE_EN_Msk              (_UINT32_(0x1) << CFG_CFGCON1_QSCHE_EN_Pos)          /* (CFG_CFGCON1) QSPI Address Space Cache Attribute Mask */
#define CFG_CFGCON1_QSCHE_EN(value)           (CFG_CFGCON1_QSCHE_EN_Msk & (_UINT32_(value) << CFG_CFGCON1_QSCHE_EN_Pos)) /* Assignment of value for QSCHE_EN in the CFG_CFGCON1 register */
#define CFG_CFGCON1_USBDMFTRIM_Pos            _UINT32_(16)                                         /* (CFG_CFGCON1) USB DM Fall Trim fuse bits Position */
#define CFG_CFGCON1_USBDMFTRIM_Msk            (_UINT32_(0x3) << CFG_CFGCON1_USBDMFTRIM_Pos)        /* (CFG_CFGCON1) USB DM Fall Trim fuse bits Mask */
#define CFG_CFGCON1_USBDMFTRIM(value)         (CFG_CFGCON1_USBDMFTRIM_Msk & (_UINT32_(value) << CFG_CFGCON1_USBDMFTRIM_Pos)) /* Assignment of value for USBDMFTRIM in the CFG_CFGCON1 register */
#define CFG_CFGCON1_USBDMRTRIM_Pos            _UINT32_(18)                                         /* (CFG_CFGCON1) USB DM Rise Trim fuse bits Position */
#define CFG_CFGCON1_USBDMRTRIM_Msk            (_UINT32_(0x3) << CFG_CFGCON1_USBDMRTRIM_Pos)        /* (CFG_CFGCON1) USB DM Rise Trim fuse bits Mask */
#define CFG_CFGCON1_USBDMRTRIM(value)         (CFG_CFGCON1_USBDMRTRIM_Msk & (_UINT32_(value) << CFG_CFGCON1_USBDMRTRIM_Pos)) /* Assignment of value for USBDMRTRIM in the CFG_CFGCON1 register */
#define CFG_CFGCON1_USBDPFTRIM_Pos            _UINT32_(20)                                         /* (CFG_CFGCON1) USB DP Fall Trim fuse bits Position */
#define CFG_CFGCON1_USBDPFTRIM_Msk            (_UINT32_(0x3) << CFG_CFGCON1_USBDPFTRIM_Pos)        /* (CFG_CFGCON1) USB DP Fall Trim fuse bits Mask */
#define CFG_CFGCON1_USBDPFTRIM(value)         (CFG_CFGCON1_USBDPFTRIM_Msk & (_UINT32_(value) << CFG_CFGCON1_USBDPFTRIM_Pos)) /* Assignment of value for USBDPFTRIM in the CFG_CFGCON1 register */
#define CFG_CFGCON1_USBDPRTRIM_Pos            _UINT32_(22)                                         /* (CFG_CFGCON1) USB DP Rise Trim fuse bits Position */
#define CFG_CFGCON1_USBDPRTRIM_Msk            (_UINT32_(0x3) << CFG_CFGCON1_USBDPRTRIM_Pos)        /* (CFG_CFGCON1) USB DP Rise Trim fuse bits Mask */
#define CFG_CFGCON1_USBDPRTRIM(value)         (CFG_CFGCON1_USBDPRTRIM_Msk & (_UINT32_(value) << CFG_CFGCON1_USBDPRTRIM_Pos)) /* Assignment of value for USBDPRTRIM in the CFG_CFGCON1 register */
#define CFG_CFGCON1_WDTPSS_Pos                _UINT32_(24)                                         /* (CFG_CFGCON1) Watchdog Timer Post-scale Select Sleep Position */
#define CFG_CFGCON1_WDTPSS_Msk                (_UINT32_(0x1F) << CFG_CFGCON1_WDTPSS_Pos)           /* (CFG_CFGCON1) Watchdog Timer Post-scale Select Sleep Mask */
#define CFG_CFGCON1_WDTPSS(value)             (CFG_CFGCON1_WDTPSS_Msk & (_UINT32_(value) << CFG_CFGCON1_WDTPSS_Pos)) /* Assignment of value for WDTPSS in the CFG_CFGCON1 register */
#define CFG_CFGCON1_QSPIDDRM_Pos              _UINT32_(29)                                         /* (CFG_CFGCON1) QSPI DDR Mode Clock Enable Position */
#define CFG_CFGCON1_QSPIDDRM_Msk              (_UINT32_(0x1) << CFG_CFGCON1_QSPIDDRM_Pos)          /* (CFG_CFGCON1) QSPI DDR Mode Clock Enable Mask */
#define CFG_CFGCON1_QSPIDDRM(value)           (CFG_CFGCON1_QSPIDDRM_Msk & (_UINT32_(value) << CFG_CFGCON1_QSPIDDRM_Pos)) /* Assignment of value for QSPIDDRM in the CFG_CFGCON1 register */
#define CFG_CFGCON1_CLKZBREF_Pos              _UINT32_(30)                                         /* (CFG_CFGCON1) External Reference Clock ZB Enable Position */
#define CFG_CFGCON1_CLKZBREF_Msk              (_UINT32_(0x1) << CFG_CFGCON1_CLKZBREF_Pos)          /* (CFG_CFGCON1) External Reference Clock ZB Enable Mask */
#define CFG_CFGCON1_CLKZBREF(value)           (CFG_CFGCON1_CLKZBREF_Msk & (_UINT32_(value) << CFG_CFGCON1_CLKZBREF_Pos)) /* Assignment of value for CLKZBREF in the CFG_CFGCON1 register */
#define CFG_CFGCON1_CAN1_PIN_EN_Pos           _UINT32_(31)                                         /* (CFG_CFGCON1) CAN1 Pin Enable Position */
#define CFG_CFGCON1_CAN1_PIN_EN_Msk           (_UINT32_(0x1) << CFG_CFGCON1_CAN1_PIN_EN_Pos)       /* (CFG_CFGCON1) CAN1 Pin Enable Mask */
#define CFG_CFGCON1_CAN1_PIN_EN(value)        (CFG_CFGCON1_CAN1_PIN_EN_Msk & (_UINT32_(value) << CFG_CFGCON1_CAN1_PIN_EN_Pos)) /* Assignment of value for CAN1_PIN_EN in the CFG_CFGCON1 register */
#define CFG_CFGCON1_Msk                       _UINT32_(0xFFFFFFE4)                                 /* (CFG_CFGCON1) Register Mask  */


/* -------- CFG_CFGCON1CLR : (CFG Offset: 0x14) (R/W 32) Bit clear register -------- */
#define CFG_CFGCON1CLR_RESETVALUE             _UINT32_(0x00)                                       /*  (CFG_CFGCON1CLR) Bit clear register  Reset Value */

#define CFG_CFGCON1CLR_Msk                    _UINT32_(0x00000000)                                 /* (CFG_CFGCON1CLR) Register Mask  */


/* -------- CFG_CFGCON1SET : (CFG Offset: 0x18) (R/W 32) Bit set register -------- */
#define CFG_CFGCON1SET_RESETVALUE             _UINT32_(0x00)                                       /*  (CFG_CFGCON1SET) Bit set register  Reset Value */

#define CFG_CFGCON1SET_Msk                    _UINT32_(0x00000000)                                 /* (CFG_CFGCON1SET) Register Mask  */


/* -------- CFG_CFGCON1INV : (CFG Offset: 0x1C) (R/W 32) Bit invert register -------- */
#define CFG_CFGCON1INV_RESETVALUE             _UINT32_(0x00)                                       /*  (CFG_CFGCON1INV) Bit invert register  Reset Value */

#define CFG_CFGCON1INV_Msk                    _UINT32_(0x00000000)                                 /* (CFG_CFGCON1INV) Register Mask  */


/* -------- CFG_CFGCON2 : (CFG Offset: 0x20) (R/W 32)  -------- */
#define CFG_CFGCON2_RESETVALUE                _UINT32_(0x7F7FFF38)                                 /*  (CFG_CFGCON2)   Reset Value */

#define CFG_CFGCON2_ACMP_CYCLE_Pos            _UINT32_(0)                                          /* (CFG_CFGCON2) AC SIB Comparator Result Wait Cycles Position */
#define CFG_CFGCON2_ACMP_CYCLE_Msk            (_UINT32_(0x7) << CFG_CFGCON2_ACMP_CYCLE_Pos)        /* (CFG_CFGCON2) AC SIB Comparator Result Wait Cycles Mask */
#define CFG_CFGCON2_ACMP_CYCLE(value)         (CFG_CFGCON2_ACMP_CYCLE_Msk & (_UINT32_(value) << CFG_CFGCON2_ACMP_CYCLE_Pos)) /* Assignment of value for ACMP_CYCLE in the CFG_CFGCON2 register */
#define CFG_CFGCON2_DMTINTV_Pos               _UINT32_(3)                                          /* (CFG_CFGCON2) Dead Man Timer Count Window Interval Position */
#define CFG_CFGCON2_DMTINTV_Msk               (_UINT32_(0x7) << CFG_CFGCON2_DMTINTV_Pos)           /* (CFG_CFGCON2) Dead Man Timer Count Window Interval Mask */
#define CFG_CFGCON2_DMTINTV(value)            (CFG_CFGCON2_DMTINTV_Msk & (_UINT32_(value) << CFG_CFGCON2_DMTINTV_Pos)) /* Assignment of value for DMTINTV in the CFG_CFGCON2 register */
#define CFG_CFGCON2_PMUTEST_VDD_EN_Pos        _UINT32_(7)                                          /* (CFG_CFGCON2) PMU Test Output or VDD/2 Enable via ADC IE12 Position */
#define CFG_CFGCON2_PMUTEST_VDD_EN_Msk        (_UINT32_(0x1) << CFG_CFGCON2_PMUTEST_VDD_EN_Pos)    /* (CFG_CFGCON2) PMU Test Output or VDD/2 Enable via ADC IE12 Mask */
#define CFG_CFGCON2_PMUTEST_VDD_EN(value)     (CFG_CFGCON2_PMUTEST_VDD_EN_Msk & (_UINT32_(value) << CFG_CFGCON2_PMUTEST_VDD_EN_Pos)) /* Assignment of value for PMUTEST_VDD_EN in the CFG_CFGCON2 register */
#define CFG_CFGCON2_POSCMOD_Pos               _UINT32_(8)                                          /* (CFG_CFGCON2) Primary Oscillator Configuration Position */
#define CFG_CFGCON2_POSCMOD_Msk               (_UINT32_(0x3) << CFG_CFGCON2_POSCMOD_Pos)           /* (CFG_CFGCON2) Primary Oscillator Configuration Mask */
#define CFG_CFGCON2_POSCMOD(value)            (CFG_CFGCON2_POSCMOD_Msk & (_UINT32_(value) << CFG_CFGCON2_POSCMOD_Pos)) /* Assignment of value for POSCMOD in the CFG_CFGCON2 register */
#define CFG_CFGCON2_WDTRMCS_Pos               _UINT32_(10)                                         /* (CFG_CFGCON2) WDT RUN Mode Clock Select Position */
#define CFG_CFGCON2_WDTRMCS_Msk               (_UINT32_(0x3) << CFG_CFGCON2_WDTRMCS_Pos)           /* (CFG_CFGCON2) WDT RUN Mode Clock Select Mask */
#define CFG_CFGCON2_WDTRMCS(value)            (CFG_CFGCON2_WDTRMCS_Msk & (_UINT32_(value) << CFG_CFGCON2_WDTRMCS_Pos)) /* Assignment of value for WDTRMCS in the CFG_CFGCON2 register */
#define CFG_CFGCON2_SOSCSEL_Pos               _UINT32_(12)                                         /* (CFG_CFGCON2) SOSC Selection Configuration Position */
#define CFG_CFGCON2_SOSCSEL_Msk               (_UINT32_(0x1) << CFG_CFGCON2_SOSCSEL_Pos)           /* (CFG_CFGCON2) SOSC Selection Configuration Mask */
#define CFG_CFGCON2_SOSCSEL(value)            (CFG_CFGCON2_SOSCSEL_Msk & (_UINT32_(value) << CFG_CFGCON2_SOSCSEL_Pos)) /* Assignment of value for SOSCSEL in the CFG_CFGCON2 register */
#define CFG_CFGCON2_WAKE2SPD_Pos              _UINT32_(13)                                         /* (CFG_CFGCON2) 2-Speed startup enabled in Sleep mode Position */
#define CFG_CFGCON2_WAKE2SPD_Msk              (_UINT32_(0x1) << CFG_CFGCON2_WAKE2SPD_Pos)          /* (CFG_CFGCON2) 2-Speed startup enabled in Sleep mode Mask */
#define CFG_CFGCON2_WAKE2SPD(value)           (CFG_CFGCON2_WAKE2SPD_Msk & (_UINT32_(value) << CFG_CFGCON2_WAKE2SPD_Pos)) /* Assignment of value for WAKE2SPD in the CFG_CFGCON2 register */
#define CFG_CFGCON2_CKSWEN_Pos                _UINT32_(14)                                         /* (CFG_CFGCON2) Software Clock Switching Enable Position */
#define CFG_CFGCON2_CKSWEN_Msk                (_UINT32_(0x1) << CFG_CFGCON2_CKSWEN_Pos)            /* (CFG_CFGCON2) Software Clock Switching Enable Mask */
#define CFG_CFGCON2_CKSWEN(value)             (CFG_CFGCON2_CKSWEN_Msk & (_UINT32_(value) << CFG_CFGCON2_CKSWEN_Pos)) /* Assignment of value for CKSWEN in the CFG_CFGCON2 register */
#define CFG_CFGCON2_FSCMEN_Pos                _UINT32_(15)                                         /* (CFG_CFGCON2) Fail-Safe Clock Monitor Enable Position */
#define CFG_CFGCON2_FSCMEN_Msk                (_UINT32_(0x1) << CFG_CFGCON2_FSCMEN_Pos)            /* (CFG_CFGCON2) Fail-Safe Clock Monitor Enable Mask */
#define CFG_CFGCON2_FSCMEN(value)             (CFG_CFGCON2_FSCMEN_Msk & (_UINT32_(value) << CFG_CFGCON2_FSCMEN_Pos)) /* Assignment of value for FSCMEN in the CFG_CFGCON2 register */
#define CFG_CFGCON2_WDTPSR_Pos                _UINT32_(16)                                         /* (CFG_CFGCON2) Watchdog Timer Post-scale Select Run Position */
#define CFG_CFGCON2_WDTPSR_Msk                (_UINT32_(0x1F) << CFG_CFGCON2_WDTPSR_Pos)           /* (CFG_CFGCON2) Watchdog Timer Post-scale Select Run Mask */
#define CFG_CFGCON2_WDTPSR(value)             (CFG_CFGCON2_WDTPSR_Msk & (_UINT32_(value) << CFG_CFGCON2_WDTPSR_Pos)) /* Assignment of value for WDTPSR in the CFG_CFGCON2 register */
#define CFG_CFGCON2_WDTSPGM_Pos               _UINT32_(21)                                         /* (CFG_CFGCON2) Watchdog Timer Stop during Flash Programming Position */
#define CFG_CFGCON2_WDTSPGM_Msk               (_UINT32_(0x1) << CFG_CFGCON2_WDTSPGM_Pos)           /* (CFG_CFGCON2) Watchdog Timer Stop during Flash Programming Mask */
#define CFG_CFGCON2_WDTSPGM(value)            (CFG_CFGCON2_WDTSPGM_Msk & (_UINT32_(value) << CFG_CFGCON2_WDTSPGM_Pos)) /* Assignment of value for WDTSPGM in the CFG_CFGCON2 register */
#define CFG_CFGCON2_WINDIS_Pos                _UINT32_(22)                                         /* (CFG_CFGCON2) Windowed Watchdog Timer Disable Position */
#define CFG_CFGCON2_WINDIS_Msk                (_UINT32_(0x1) << CFG_CFGCON2_WINDIS_Pos)            /* (CFG_CFGCON2) Windowed Watchdog Timer Disable Mask */
#define CFG_CFGCON2_WINDIS(value)             (CFG_CFGCON2_WINDIS_Msk & (_UINT32_(value) << CFG_CFGCON2_WINDIS_Pos)) /* Assignment of value for WINDIS in the CFG_CFGCON2 register */
#define CFG_CFGCON2_WDTEN_Pos                 _UINT32_(23)                                         /* (CFG_CFGCON2) Watchdog Timer Enable Position */
#define CFG_CFGCON2_WDTEN_Msk                 (_UINT32_(0x1) << CFG_CFGCON2_WDTEN_Pos)             /* (CFG_CFGCON2) Watchdog Timer Enable Mask */
#define CFG_CFGCON2_WDTEN(value)              (CFG_CFGCON2_WDTEN_Msk & (_UINT32_(value) << CFG_CFGCON2_WDTEN_Pos)) /* Assignment of value for WDTEN in the CFG_CFGCON2 register */
#define CFG_CFGCON2_WDTWINSZ_Pos              _UINT32_(24)                                         /* (CFG_CFGCON2) Watchdog Timer Window Size Position */
#define CFG_CFGCON2_WDTWINSZ_Msk              (_UINT32_(0x3) << CFG_CFGCON2_WDTWINSZ_Pos)          /* (CFG_CFGCON2) Watchdog Timer Window Size Mask */
#define CFG_CFGCON2_WDTWINSZ(value)           (CFG_CFGCON2_WDTWINSZ_Msk & (_UINT32_(value) << CFG_CFGCON2_WDTWINSZ_Pos)) /* Assignment of value for WDTWINSZ in the CFG_CFGCON2 register */
#define CFG_CFGCON2_DMTCNT_Pos                _UINT32_(26)                                         /* (CFG_CFGCON2) Dead Man Timer Count Select Position */
#define CFG_CFGCON2_DMTCNT_Msk                (_UINT32_(0x1F) << CFG_CFGCON2_DMTCNT_Pos)           /* (CFG_CFGCON2) Dead Man Timer Count Select Mask */
#define CFG_CFGCON2_DMTCNT(value)             (CFG_CFGCON2_DMTCNT_Msk & (_UINT32_(value) << CFG_CFGCON2_DMTCNT_Pos)) /* Assignment of value for DMTCNT in the CFG_CFGCON2 register */
#define CFG_CFGCON2_DMTEN_Pos                 _UINT32_(31)                                         /* (CFG_CFGCON2) Dead Man Timer Enable Position */
#define CFG_CFGCON2_DMTEN_Msk                 (_UINT32_(0x1) << CFG_CFGCON2_DMTEN_Pos)             /* (CFG_CFGCON2) Dead Man Timer Enable Mask */
#define CFG_CFGCON2_DMTEN(value)              (CFG_CFGCON2_DMTEN_Msk & (_UINT32_(value) << CFG_CFGCON2_DMTEN_Pos)) /* Assignment of value for DMTEN in the CFG_CFGCON2 register */
#define CFG_CFGCON2_Msk                       _UINT32_(0xFFFFFFBF)                                 /* (CFG_CFGCON2) Register Mask  */


/* -------- CFG_CFGCON2CLR : (CFG Offset: 0x24) (R/W 32) Bit clear register -------- */
#define CFG_CFGCON2CLR_RESETVALUE             _UINT32_(0x00)                                       /*  (CFG_CFGCON2CLR) Bit clear register  Reset Value */

#define CFG_CFGCON2CLR_Msk                    _UINT32_(0x00000000)                                 /* (CFG_CFGCON2CLR) Register Mask  */


/* -------- CFG_CFGCON2SET : (CFG Offset: 0x28) (R/W 32) Bit set register -------- */
#define CFG_CFGCON2SET_RESETVALUE             _UINT32_(0x00)                                       /*  (CFG_CFGCON2SET) Bit set register  Reset Value */

#define CFG_CFGCON2SET_Msk                    _UINT32_(0x00000000)                                 /* (CFG_CFGCON2SET) Register Mask  */


/* -------- CFG_CFGCON2INV : (CFG Offset: 0x2C) (R/W 32) Bit invert register -------- */
#define CFG_CFGCON2INV_RESETVALUE             _UINT32_(0x00)                                       /*  (CFG_CFGCON2INV) Bit invert register  Reset Value */

#define CFG_CFGCON2INV_Msk                    _UINT32_(0x00000000)                                 /* (CFG_CFGCON2INV) Register Mask  */


/* -------- CFG_CFGCON4 : (CFG Offset: 0x40) (R/W 32)  -------- */
#define CFG_CFGCON4_RESETVALUE                _UINT32_(0x840E4000)                                 /*  (CFG_CFGCON4)   Reset Value */

#define CFG_CFGCON4_SOSC_CFG_Pos              _UINT32_(0)                                          /* (CFG_CFGCON4) SOSC Configuration Position */
#define CFG_CFGCON4_SOSC_CFG_Msk              (_UINT32_(0xFF) << CFG_CFGCON4_SOSC_CFG_Pos)         /* (CFG_CFGCON4) SOSC Configuration Mask */
#define CFG_CFGCON4_SOSC_CFG(value)           (CFG_CFGCON4_SOSC_CFG_Msk & (_UINT32_(value) << CFG_CFGCON4_SOSC_CFG_Pos)) /* Assignment of value for SOSC_CFG in the CFG_CFGCON4 register */
#define CFG_CFGCON4_RTCEVENT_SEL_Pos          _UINT32_(8)                                          /* (CFG_CFGCON4) RTC Event Selection Position */
#define CFG_CFGCON4_RTCEVENT_SEL_Msk          (_UINT32_(0x3) << CFG_CFGCON4_RTCEVENT_SEL_Pos)      /* (CFG_CFGCON4) RTC Event Selection Mask */
#define CFG_CFGCON4_RTCEVENT_SEL(value)       (CFG_CFGCON4_RTCEVENT_SEL_Msk & (_UINT32_(value) << CFG_CFGCON4_RTCEVENT_SEL_Pos)) /* Assignment of value for RTCEVENT_SEL in the CFG_CFGCON4 register */
#define CFG_CFGCON4_RTCEVENT_EN_Pos           _UINT32_(10)                                         /* (CFG_CFGCON4) Pad Output Enable for MCHP legacy RTC event output Position */
#define CFG_CFGCON4_RTCEVENT_EN_Msk           (_UINT32_(0x1) << CFG_CFGCON4_RTCEVENT_EN_Pos)       /* (CFG_CFGCON4) Pad Output Enable for MCHP legacy RTC event output Mask */
#define CFG_CFGCON4_RTCEVENT_EN(value)        (CFG_CFGCON4_RTCEVENT_EN_Msk & (_UINT32_(value) << CFG_CFGCON4_RTCEVENT_EN_Pos)) /* Assignment of value for RTCEVENT_EN in the CFG_CFGCON4 register */
#define CFG_CFGCON4_VBKP_1KCSEL_Pos           _UINT32_(11)                                         /* (CFG_CFGCON4) VDDBUKPCORE LPCLK Clock Selection Position */
#define CFG_CFGCON4_VBKP_1KCSEL_Msk           (_UINT32_(0x1) << CFG_CFGCON4_VBKP_1KCSEL_Pos)       /* (CFG_CFGCON4) VDDBUKPCORE LPCLK Clock Selection Mask */
#define CFG_CFGCON4_VBKP_1KCSEL(value)        (CFG_CFGCON4_VBKP_1KCSEL_Msk & (_UINT32_(value) << CFG_CFGCON4_VBKP_1KCSEL_Pos)) /* Assignment of value for VBKP_1KCSEL in the CFG_CFGCON4 register */
#define CFG_CFGCON4_VBKP_32KCSEL_Pos          _UINT32_(12)                                         /* (CFG_CFGCON4) VDDBUKPCORE 32KHz clock source selection Position */
#define CFG_CFGCON4_VBKP_32KCSEL_Msk          (_UINT32_(0x3) << CFG_CFGCON4_VBKP_32KCSEL_Pos)      /* (CFG_CFGCON4) VDDBUKPCORE 32KHz clock source selection Mask */
#define CFG_CFGCON4_VBKP_32KCSEL(value)       (CFG_CFGCON4_VBKP_32KCSEL_Msk & (_UINT32_(value) << CFG_CFGCON4_VBKP_32KCSEL_Pos)) /* Assignment of value for VBKP_32KCSEL in the CFG_CFGCON4 register */
#define CFG_CFGCON4_VBKP_DIVSEL_Pos           _UINT32_(14)                                         /* (CFG_CFGCON4) VDDBUKPCORE LPCLK Clock Divider Selection Position */
#define CFG_CFGCON4_VBKP_DIVSEL_Msk           (_UINT32_(0x1) << CFG_CFGCON4_VBKP_DIVSEL_Pos)       /* (CFG_CFGCON4) VDDBUKPCORE LPCLK Clock Divider Selection Mask */
#define CFG_CFGCON4_VBKP_DIVSEL(value)        (CFG_CFGCON4_VBKP_DIVSEL_Msk & (_UINT32_(value) << CFG_CFGCON4_VBKP_DIVSEL_Pos)) /* Assignment of value for VBKP_DIVSEL in the CFG_CFGCON4 register */
#define CFG_CFGCON4_LPCLK_MOD_Pos             _UINT32_(15)                                         /* (CFG_CFGCON4) LPCLK modifier in counter/delay mode Position */
#define CFG_CFGCON4_LPCLK_MOD_Msk             (_UINT32_(0x1) << CFG_CFGCON4_LPCLK_MOD_Pos)         /* (CFG_CFGCON4) LPCLK modifier in counter/delay mode Mask */
#define CFG_CFGCON4_LPCLK_MOD(value)          (CFG_CFGCON4_LPCLK_MOD_Msk & (_UINT32_(value) << CFG_CFGCON4_LPCLK_MOD_Pos)) /* Assignment of value for LPCLK_MOD in the CFG_CFGCON4 register */
#define CFG_CFGCON4_RTCEVTYPE_Pos             _UINT32_(16)                                         /* (CFG_CFGCON4) RTC Event Type Position */
#define CFG_CFGCON4_RTCEVTYPE_Msk             (_UINT32_(0x1) << CFG_CFGCON4_RTCEVTYPE_Pos)         /* (CFG_CFGCON4) RTC Event Type Mask */
#define CFG_CFGCON4_RTCEVTYPE(value)          (CFG_CFGCON4_RTCEVTYPE_Msk & (_UINT32_(value) << CFG_CFGCON4_RTCEVTYPE_Pos)) /* Assignment of value for RTCEVTYPE in the CFG_CFGCON4 register */
#define CFG_CFGCON4_CPEN_DLY_Pos              _UINT32_(17)                                         /* (CFG_CFGCON4) Charge-pump ready digital delay Position */
#define CFG_CFGCON4_CPEN_DLY_Msk              (_UINT32_(0x7) << CFG_CFGCON4_CPEN_DLY_Pos)          /* (CFG_CFGCON4) Charge-pump ready digital delay Mask */
#define CFG_CFGCON4_CPEN_DLY(value)           (CFG_CFGCON4_CPEN_DLY_Msk & (_UINT32_(value) << CFG_CFGCON4_CPEN_DLY_Pos)) /* Assignment of value for CPEN_DLY in the CFG_CFGCON4 register */
#define CFG_CFGCON4_DSZPBOREN_Pos             _UINT32_(20)                                         /* (CFG_CFGCON4) Deep Sleep Zero-Power BOR Enable Position */
#define CFG_CFGCON4_DSZPBOREN_Msk             (_UINT32_(0x1) << CFG_CFGCON4_DSZPBOREN_Pos)         /* (CFG_CFGCON4) Deep Sleep Zero-Power BOR Enable Mask */
#define CFG_CFGCON4_DSZPBOREN(value)          (CFG_CFGCON4_DSZPBOREN_Msk & (_UINT32_(value) << CFG_CFGCON4_DSZPBOREN_Pos)) /* Assignment of value for DSZPBOREN in the CFG_CFGCON4 register */
#define CFG_CFGCON4_DSWDTPS_Pos               _UINT32_(21)                                         /* (CFG_CFGCON4) Deep Sleep Watchdog Timer Postscale Select Position */
#define CFG_CFGCON4_DSWDTPS_Msk               (_UINT32_(0x1F) << CFG_CFGCON4_DSWDTPS_Pos)          /* (CFG_CFGCON4) Deep Sleep Watchdog Timer Postscale Select Mask */
#define CFG_CFGCON4_DSWDTPS(value)            (CFG_CFGCON4_DSWDTPS_Msk & (_UINT32_(value) << CFG_CFGCON4_DSWDTPS_Pos)) /* Assignment of value for DSWDTPS in the CFG_CFGCON4 register */
#define CFG_CFGCON4_DSWDTOSC_Pos              _UINT32_(26)                                         /* (CFG_CFGCON4) Deep Sleep Watchdog Timer Reference Clock Select Position */
#define CFG_CFGCON4_DSWDTOSC_Msk              (_UINT32_(0x1) << CFG_CFGCON4_DSWDTOSC_Pos)          /* (CFG_CFGCON4) Deep Sleep Watchdog Timer Reference Clock Select Mask */
#define CFG_CFGCON4_DSWDTOSC(value)           (CFG_CFGCON4_DSWDTOSC_Msk & (_UINT32_(value) << CFG_CFGCON4_DSWDTOSC_Pos)) /* Assignment of value for DSWDTOSC in the CFG_CFGCON4 register */
#define CFG_CFGCON4_DSWDTEN_Pos               _UINT32_(27)                                         /* (CFG_CFGCON4) Deep Sleep Watchdog Timer Enable Position */
#define CFG_CFGCON4_DSWDTEN_Msk               (_UINT32_(0x1) << CFG_CFGCON4_DSWDTEN_Pos)           /* (CFG_CFGCON4) Deep Sleep Watchdog Timer Enable Mask */
#define CFG_CFGCON4_DSWDTEN(value)            (CFG_CFGCON4_DSWDTEN_Msk & (_UINT32_(value) << CFG_CFGCON4_DSWDTEN_Pos)) /* Assignment of value for DSWDTEN in the CFG_CFGCON4 register */
#define CFG_CFGCON4_DSEN_Pos                  _UINT32_(28)                                         /* (CFG_CFGCON4) Deep Sleep Bit Enable Position */
#define CFG_CFGCON4_DSEN_Msk                  (_UINT32_(0x1) << CFG_CFGCON4_DSEN_Pos)              /* (CFG_CFGCON4) Deep Sleep Bit Enable Mask */
#define CFG_CFGCON4_DSEN(value)               (CFG_CFGCON4_DSEN_Msk & (_UINT32_(value) << CFG_CFGCON4_DSEN_Pos)) /* Assignment of value for DSEN in the CFG_CFGCON4 register */
#define CFG_CFGCON4_UVREGROVR_Pos             _UINT32_(29)                                         /* (CFG_CFGCON4) ULPVREG Retention Mode Override Position */
#define CFG_CFGCON4_UVREGROVR_Msk             (_UINT32_(0x1) << CFG_CFGCON4_UVREGROVR_Pos)         /* (CFG_CFGCON4) ULPVREG Retention Mode Override Mask */
#define CFG_CFGCON4_UVREGROVR(value)          (CFG_CFGCON4_UVREGROVR_Msk & (_UINT32_(value) << CFG_CFGCON4_UVREGROVR_Pos)) /* Assignment of value for UVREGROVR in the CFG_CFGCON4 register */
#define CFG_CFGCON4_LPOSCEN_Pos               _UINT32_(30)                                         /* (CFG_CFGCON4) Low Power (Secondary) Oscillator Enable Position */
#define CFG_CFGCON4_LPOSCEN_Msk               (_UINT32_(0x1) << CFG_CFGCON4_LPOSCEN_Pos)           /* (CFG_CFGCON4) Low Power (Secondary) Oscillator Enable Mask */
#define CFG_CFGCON4_LPOSCEN(value)            (CFG_CFGCON4_LPOSCEN_Msk & (_UINT32_(value) << CFG_CFGCON4_LPOSCEN_Pos)) /* Assignment of value for LPOSCEN in the CFG_CFGCON4 register */
#define CFG_CFGCON4_RTCNTM_CSEL_Pos           _UINT32_(31)                                         /* (CFG_CFGCON4) RTC Counter Mode Clock Select Position */
#define CFG_CFGCON4_RTCNTM_CSEL_Msk           (_UINT32_(0x1) << CFG_CFGCON4_RTCNTM_CSEL_Pos)       /* (CFG_CFGCON4) RTC Counter Mode Clock Select Mask */
#define CFG_CFGCON4_RTCNTM_CSEL(value)        (CFG_CFGCON4_RTCNTM_CSEL_Msk & (_UINT32_(value) << CFG_CFGCON4_RTCNTM_CSEL_Pos)) /* Assignment of value for RTCNTM_CSEL in the CFG_CFGCON4 register */
#define CFG_CFGCON4_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (CFG_CFGCON4) Register Mask  */


/* -------- CFG_CFGCON4CLR : (CFG Offset: 0x44) (R/W 32) Bit clear register -------- */
#define CFG_CFGCON4CLR_RESETVALUE             _UINT32_(0x00)                                       /*  (CFG_CFGCON4CLR) Bit clear register  Reset Value */

#define CFG_CFGCON4CLR_Msk                    _UINT32_(0x00000000)                                 /* (CFG_CFGCON4CLR) Register Mask  */


/* -------- CFG_CFGCON4SET : (CFG Offset: 0x48) (R/W 32) Bit set register -------- */
#define CFG_CFGCON4SET_RESETVALUE             _UINT32_(0x00)                                       /*  (CFG_CFGCON4SET) Bit set register  Reset Value */

#define CFG_CFGCON4SET_Msk                    _UINT32_(0x00000000)                                 /* (CFG_CFGCON4SET) Register Mask  */


/* -------- CFG_CFGCON4INV : (CFG Offset: 0x4C) (R/W 32) Bit invert register -------- */
#define CFG_CFGCON4INV_RESETVALUE             _UINT32_(0x00)                                       /*  (CFG_CFGCON4INV) Bit invert register  Reset Value */

#define CFG_CFGCON4INV_Msk                    _UINT32_(0x00000000)                                 /* (CFG_CFGCON4INV) Register Mask  */


/* -------- CFG_CFGPGQOS1 : (CFG Offset: 0x50) (R/W 32)  -------- */
#define CFG_CFGPGQOS1_RESETVALUE              _UINT32_(0xE040004C)                                 /*  (CFG_CFGPGQOS1)   Reset Value */

#define CFG_CFGPGQOS1_CPUPG_Pos               _UINT32_(0)                                          /* (CFG_CFGPGQOS1) CPU (Code) Permission Group Position */
#define CFG_CFGPGQOS1_CPUPG_Msk               (_UINT32_(0x3) << CFG_CFGPGQOS1_CPUPG_Pos)           /* (CFG_CFGPGQOS1) CPU (Code) Permission Group Mask */
#define CFG_CFGPGQOS1_CPUPG(value)            (CFG_CFGPGQOS1_CPUPG_Msk & (_UINT32_(value) << CFG_CFGPGQOS1_CPUPG_Pos)) /* Assignment of value for CPUPG in the CFG_CFGPGQOS1 register */
#define CFG_CFGPGQOS1_CPUQOS_Pos              _UINT32_(2)                                          /* (CFG_CFGPGQOS1) CPU I/D and System Bus QOS Control Position */
#define CFG_CFGPGQOS1_CPUQOS_Msk              (_UINT32_(0x3) << CFG_CFGPGQOS1_CPUQOS_Pos)          /* (CFG_CFGPGQOS1) CPU I/D and System Bus QOS Control Mask */
#define CFG_CFGPGQOS1_CPUQOS(value)           (CFG_CFGPGQOS1_CPUQOS_Msk & (_UINT32_(value) << CFG_CFGPGQOS1_CPUQOS_Pos)) /* Assignment of value for CPUQOS in the CFG_CFGPGQOS1 register */
#define CFG_CFGPGQOS1_DMAPG_Pos               _UINT32_(8)                                          /* (CFG_CFGPGQOS1) DMA (Rd/Wr) Permission Group Position */
#define CFG_CFGPGQOS1_DMAPG_Msk               (_UINT32_(0x3) << CFG_CFGPGQOS1_DMAPG_Pos)           /* (CFG_CFGPGQOS1) DMA (Rd/Wr) Permission Group Mask */
#define CFG_CFGPGQOS1_DMAPG(value)            (CFG_CFGPGQOS1_DMAPG_Msk & (_UINT32_(value) << CFG_CFGPGQOS1_DMAPG_Pos)) /* Assignment of value for DMAPG in the CFG_CFGPGQOS1 register */
#define CFG_CFGPGQOS1_CRYPTOPG_Pos            _UINT32_(20)                                         /* (CFG_CFGPGQOS1) Crypto Permission Group Position */
#define CFG_CFGPGQOS1_CRYPTOPG_Msk            (_UINT32_(0x3) << CFG_CFGPGQOS1_CRYPTOPG_Pos)        /* (CFG_CFGPGQOS1) Crypto Permission Group Mask */
#define CFG_CFGPGQOS1_CRYPTOPG(value)         (CFG_CFGPGQOS1_CRYPTOPG_Msk & (_UINT32_(value) << CFG_CFGPGQOS1_CRYPTOPG_Pos)) /* Assignment of value for CRYPTOPG in the CFG_CFGPGQOS1 register */
#define CFG_CFGPGQOS1_CRYPTOQOS_Pos           _UINT32_(22)                                         /* (CFG_CFGPGQOS1) Crypto QOS Control Position */
#define CFG_CFGPGQOS1_CRYPTOQOS_Msk           (_UINT32_(0x3) << CFG_CFGPGQOS1_CRYPTOQOS_Pos)       /* (CFG_CFGPGQOS1) Crypto QOS Control Mask */
#define CFG_CFGPGQOS1_CRYPTOQOS(value)        (CFG_CFGPGQOS1_CRYPTOQOS_Msk & (_UINT32_(value) << CFG_CFGPGQOS1_CRYPTOQOS_Pos)) /* Assignment of value for CRYPTOQOS in the CFG_CFGPGQOS1 register */
#define CFG_CFGPGQOS1_DSUPG_Pos               _UINT32_(24)                                         /* (CFG_CFGPGQOS1) DSU Permission Group Position */
#define CFG_CFGPGQOS1_DSUPG_Msk               (_UINT32_(0x3) << CFG_CFGPGQOS1_DSUPG_Pos)           /* (CFG_CFGPGQOS1) DSU Permission Group Mask */
#define CFG_CFGPGQOS1_DSUPG(value)            (CFG_CFGPGQOS1_DSUPG_Msk & (_UINT32_(value) << CFG_CFGPGQOS1_DSUPG_Pos)) /* Assignment of value for DSUPG in the CFG_CFGPGQOS1 register */
#define CFG_CFGPGQOS1_FCQOS_Pos               _UINT32_(28)                                         /* (CFG_CFGPGQOS1) FC Controller QOS Control Position */
#define CFG_CFGPGQOS1_FCQOS_Msk               (_UINT32_(0x3) << CFG_CFGPGQOS1_FCQOS_Pos)           /* (CFG_CFGPGQOS1) FC Controller QOS Control Mask */
#define CFG_CFGPGQOS1_FCQOS(value)            (CFG_CFGPGQOS1_FCQOS_Msk & (_UINT32_(value) << CFG_CFGPGQOS1_FCQOS_Pos)) /* Assignment of value for FCQOS in the CFG_CFGPGQOS1 register */
#define CFG_CFGPGQOS1_WISIBQOS_Pos            _UINT32_(30)                                         /* (CFG_CFGPGQOS1) Wireless SIB QOS Control Position */
#define CFG_CFGPGQOS1_WISIBQOS_Msk            (_UINT32_(0x3) << CFG_CFGPGQOS1_WISIBQOS_Pos)        /* (CFG_CFGPGQOS1) Wireless SIB QOS Control Mask */
#define CFG_CFGPGQOS1_WISIBQOS(value)         (CFG_CFGPGQOS1_WISIBQOS_Msk & (_UINT32_(value) << CFG_CFGPGQOS1_WISIBQOS_Pos)) /* Assignment of value for WISIBQOS in the CFG_CFGPGQOS1 register */
#define CFG_CFGPGQOS1_Msk                     _UINT32_(0xF3F0030F)                                 /* (CFG_CFGPGQOS1) Register Mask  */


/* -------- CFG_CFGPGQOS1CLR : (CFG Offset: 0x54) (R/W 32) Bit clear register -------- */
#define CFG_CFGPGQOS1CLR_RESETVALUE           _UINT32_(0x00)                                       /*  (CFG_CFGPGQOS1CLR) Bit clear register  Reset Value */

#define CFG_CFGPGQOS1CLR_Msk                  _UINT32_(0x00000000)                                 /* (CFG_CFGPGQOS1CLR) Register Mask  */


/* -------- CFG_CFGPGQOS1SET : (CFG Offset: 0x58) (R/W 32) Bit set register -------- */
#define CFG_CFGPGQOS1SET_RESETVALUE           _UINT32_(0x00)                                       /*  (CFG_CFGPGQOS1SET) Bit set register  Reset Value */

#define CFG_CFGPGQOS1SET_Msk                  _UINT32_(0x00000000)                                 /* (CFG_CFGPGQOS1SET) Register Mask  */


/* -------- CFG_CFGPGQOS1INV : (CFG Offset: 0x5C) (R/W 32) Bit invert register -------- */
#define CFG_CFGPGQOS1INV_RESETVALUE           _UINT32_(0x00)                                       /*  (CFG_CFGPGQOS1INV) Bit invert register  Reset Value */

#define CFG_CFGPGQOS1INV_Msk                  _UINT32_(0x00000000)                                 /* (CFG_CFGPGQOS1INV) Register Mask  */


/* -------- CFG_CFGPGQOS2 : (CFG Offset: 0x60) (R/W 32)  -------- */
#define CFG_CFGPGQOS2_RESETVALUE              _UINT32_(0x84444)                                    /*  (CFG_CFGPGQOS2)   Reset Value */

#define CFG_CFGPGQOS2_ADCPG_Pos               _UINT32_(0)                                          /* (CFG_CFGPGQOS2) ADC Permission Group Position */
#define CFG_CFGPGQOS2_ADCPG_Msk               (_UINT32_(0x3) << CFG_CFGPGQOS2_ADCPG_Pos)           /* (CFG_CFGPGQOS2) ADC Permission Group Mask */
#define CFG_CFGPGQOS2_ADCPG(value)            (CFG_CFGPGQOS2_ADCPG_Msk & (_UINT32_(value) << CFG_CFGPGQOS2_ADCPG_Pos)) /* Assignment of value for ADCPG in the CFG_CFGPGQOS2 register */
#define CFG_CFGPGQOS2_ADCQOS_Pos              _UINT32_(2)                                          /* (CFG_CFGPGQOS2) ADC QOS Control bits Position */
#define CFG_CFGPGQOS2_ADCQOS_Msk              (_UINT32_(0x3) << CFG_CFGPGQOS2_ADCQOS_Pos)          /* (CFG_CFGPGQOS2) ADC QOS Control bits Mask */
#define CFG_CFGPGQOS2_ADCQOS(value)           (CFG_CFGPGQOS2_ADCQOS_Msk & (_UINT32_(value) << CFG_CFGPGQOS2_ADCQOS_Pos)) /* Assignment of value for ADCQOS in the CFG_CFGPGQOS2 register */
#define CFG_CFGPGQOS2_USBPG_Pos               _UINT32_(4)                                          /* (CFG_CFGPGQOS2) USB Permission Group Position */
#define CFG_CFGPGQOS2_USBPG_Msk               (_UINT32_(0x3) << CFG_CFGPGQOS2_USBPG_Pos)           /* (CFG_CFGPGQOS2) USB Permission Group Mask */
#define CFG_CFGPGQOS2_USBPG(value)            (CFG_CFGPGQOS2_USBPG_Msk & (_UINT32_(value) << CFG_CFGPGQOS2_USBPG_Pos)) /* Assignment of value for USBPG in the CFG_CFGPGQOS2 register */
#define CFG_CFGPGQOS2_USBQOS_Pos              _UINT32_(6)                                          /* (CFG_CFGPGQOS2) USB QOS Control bits Position */
#define CFG_CFGPGQOS2_USBQOS_Msk              (_UINT32_(0x3) << CFG_CFGPGQOS2_USBQOS_Pos)          /* (CFG_CFGPGQOS2) USB QOS Control bits Mask */
#define CFG_CFGPGQOS2_USBQOS(value)           (CFG_CFGPGQOS2_USBQOS_Msk & (_UINT32_(value) << CFG_CFGPGQOS2_USBQOS_Pos)) /* Assignment of value for USBQOS in the CFG_CFGPGQOS2 register */
#define CFG_CFGPGQOS2_CAN0PG_Pos              _UINT32_(8)                                          /* (CFG_CFGPGQOS2) CAN0 Permission Group Position */
#define CFG_CFGPGQOS2_CAN0PG_Msk              (_UINT32_(0x3) << CFG_CFGPGQOS2_CAN0PG_Pos)          /* (CFG_CFGPGQOS2) CAN0 Permission Group Mask */
#define CFG_CFGPGQOS2_CAN0PG(value)           (CFG_CFGPGQOS2_CAN0PG_Msk & (_UINT32_(value) << CFG_CFGPGQOS2_CAN0PG_Pos)) /* Assignment of value for CAN0PG in the CFG_CFGPGQOS2 register */
#define CFG_CFGPGQOS2_CAN0QOS_Pos             _UINT32_(10)                                         /* (CFG_CFGPGQOS2) CAN0 QOS Control bits Position */
#define CFG_CFGPGQOS2_CAN0QOS_Msk             (_UINT32_(0x3) << CFG_CFGPGQOS2_CAN0QOS_Pos)         /* (CFG_CFGPGQOS2) CAN0 QOS Control bits Mask */
#define CFG_CFGPGQOS2_CAN0QOS(value)          (CFG_CFGPGQOS2_CAN0QOS_Msk & (_UINT32_(value) << CFG_CFGPGQOS2_CAN0QOS_Pos)) /* Assignment of value for CAN0QOS in the CFG_CFGPGQOS2 register */
#define CFG_CFGPGQOS2_CAN1PG_Pos              _UINT32_(12)                                         /* (CFG_CFGPGQOS2) CAN1 Permission Group Position */
#define CFG_CFGPGQOS2_CAN1PG_Msk              (_UINT32_(0x3) << CFG_CFGPGQOS2_CAN1PG_Pos)          /* (CFG_CFGPGQOS2) CAN1 Permission Group Mask */
#define CFG_CFGPGQOS2_CAN1PG(value)           (CFG_CFGPGQOS2_CAN1PG_Msk & (_UINT32_(value) << CFG_CFGPGQOS2_CAN1PG_Pos)) /* Assignment of value for CAN1PG in the CFG_CFGPGQOS2 register */
#define CFG_CFGPGQOS2_CAN1QOS_Pos             _UINT32_(14)                                         /* (CFG_CFGPGQOS2) CAN1 QOS Control bits Position */
#define CFG_CFGPGQOS2_CAN1QOS_Msk             (_UINT32_(0x3) << CFG_CFGPGQOS2_CAN1QOS_Pos)         /* (CFG_CFGPGQOS2) CAN1 QOS Control bits Mask */
#define CFG_CFGPGQOS2_CAN1QOS(value)          (CFG_CFGPGQOS2_CAN1QOS_Msk & (_UINT32_(value) << CFG_CFGPGQOS2_CAN1QOS_Pos)) /* Assignment of value for CAN1QOS in the CFG_CFGPGQOS2 register */
#define CFG_CFGPGQOS2_ETHPG_Pos               _UINT32_(16)                                         /* (CFG_CFGPGQOS2) ETH Permission Group Position */
#define CFG_CFGPGQOS2_ETHPG_Msk               (_UINT32_(0x3) << CFG_CFGPGQOS2_ETHPG_Pos)           /* (CFG_CFGPGQOS2) ETH Permission Group Mask */
#define CFG_CFGPGQOS2_ETHPG(value)            (CFG_CFGPGQOS2_ETHPG_Msk & (_UINT32_(value) << CFG_CFGPGQOS2_ETHPG_Pos)) /* Assignment of value for ETHPG in the CFG_CFGPGQOS2 register */
#define CFG_CFGPGQOS2_ETHQOS_Pos              _UINT32_(18)                                         /* (CFG_CFGPGQOS2) ETH QOS Control bits Position */
#define CFG_CFGPGQOS2_ETHQOS_Msk              (_UINT32_(0x3) << CFG_CFGPGQOS2_ETHQOS_Pos)          /* (CFG_CFGPGQOS2) ETH QOS Control bits Mask */
#define CFG_CFGPGQOS2_ETHQOS(value)           (CFG_CFGPGQOS2_ETHQOS_Msk & (_UINT32_(value) << CFG_CFGPGQOS2_ETHQOS_Pos)) /* Assignment of value for ETHQOS in the CFG_CFGPGQOS2 register */
#define CFG_CFGPGQOS2_Msk                     _UINT32_(0x000FFFFF)                                 /* (CFG_CFGPGQOS2) Register Mask  */


/* -------- CFG_CFGPGQOS2CLR : (CFG Offset: 0x64) (R/W 32) Bit clear register -------- */
#define CFG_CFGPGQOS2CLR_RESETVALUE           _UINT32_(0x00)                                       /*  (CFG_CFGPGQOS2CLR) Bit clear register  Reset Value */

#define CFG_CFGPGQOS2CLR_Msk                  _UINT32_(0x00000000)                                 /* (CFG_CFGPGQOS2CLR) Register Mask  */


/* -------- CFG_CFGPGQOS2SET : (CFG Offset: 0x68) (R/W 32) Bit set register -------- */
#define CFG_CFGPGQOS2SET_RESETVALUE           _UINT32_(0x00)                                       /*  (CFG_CFGPGQOS2SET) Bit set register  Reset Value */

#define CFG_CFGPGQOS2SET_Msk                  _UINT32_(0x00000000)                                 /* (CFG_CFGPGQOS2SET) Register Mask  */


/* -------- CFG_CFGPGQOS2INV : (CFG Offset: 0x6C) (R/W 32) Bit invert register -------- */
#define CFG_CFGPGQOS2INV_RESETVALUE           _UINT32_(0x00)                                       /*  (CFG_CFGPGQOS2INV) Bit invert register  Reset Value */

#define CFG_CFGPGQOS2INV_Msk                  _UINT32_(0x00000000)                                 /* (CFG_CFGPGQOS2INV) Register Mask  */


/* -------- CFG_CFGI2C : (CFG Offset: 0x70) (R/W 32)  -------- */
#define CFG_CFGI2C_RESETVALUE                 _UINT32_(0x00)                                       /*  (CFG_CFGI2C)   Reset Value */

#define CFG_CFGI2C_SMBUSEN0_Pos               _UINT32_(0)                                          /* (CFG_CFGI2C) SMBus Enable for SERCOM0 Position */
#define CFG_CFGI2C_SMBUSEN0_Msk               (_UINT32_(0x1) << CFG_CFGI2C_SMBUSEN0_Pos)           /* (CFG_CFGI2C) SMBus Enable for SERCOM0 Mask */
#define CFG_CFGI2C_SMBUSEN0(value)            (CFG_CFGI2C_SMBUSEN0_Msk & (_UINT32_(value) << CFG_CFGI2C_SMBUSEN0_Pos)) /* Assignment of value for SMBUSEN0 in the CFG_CFGI2C register */
#define CFG_CFGI2C_SMBUSEN1_Pos               _UINT32_(1)                                          /* (CFG_CFGI2C) SMBus Enable for SERCOM1 Position */
#define CFG_CFGI2C_SMBUSEN1_Msk               (_UINT32_(0x1) << CFG_CFGI2C_SMBUSEN1_Pos)           /* (CFG_CFGI2C) SMBus Enable for SERCOM1 Mask */
#define CFG_CFGI2C_SMBUSEN1(value)            (CFG_CFGI2C_SMBUSEN1_Msk & (_UINT32_(value) << CFG_CFGI2C_SMBUSEN1_Pos)) /* Assignment of value for SMBUSEN1 in the CFG_CFGI2C register */
#define CFG_CFGI2C_SMBUSEN2_Pos               _UINT32_(2)                                          /* (CFG_CFGI2C) SMBus Enable for SERCOM2 Position */
#define CFG_CFGI2C_SMBUSEN2_Msk               (_UINT32_(0x1) << CFG_CFGI2C_SMBUSEN2_Pos)           /* (CFG_CFGI2C) SMBus Enable for SERCOM2 Mask */
#define CFG_CFGI2C_SMBUSEN2(value)            (CFG_CFGI2C_SMBUSEN2_Msk & (_UINT32_(value) << CFG_CFGI2C_SMBUSEN2_Pos)) /* Assignment of value for SMBUSEN2 in the CFG_CFGI2C register */
#define CFG_CFGI2C_SMBUSEN6_Pos               _UINT32_(6)                                          /* (CFG_CFGI2C) SMBus Enable for SERCOM6 Position */
#define CFG_CFGI2C_SMBUSEN6_Msk               (_UINT32_(0x1) << CFG_CFGI2C_SMBUSEN6_Pos)           /* (CFG_CFGI2C) SMBus Enable for SERCOM6 Mask */
#define CFG_CFGI2C_SMBUSEN6(value)            (CFG_CFGI2C_SMBUSEN6_Msk & (_UINT32_(value) << CFG_CFGI2C_SMBUSEN6_Pos)) /* Assignment of value for SMBUSEN6 in the CFG_CFGI2C register */
#define CFG_CFGI2C_I2CDSEL0_Pos               _UINT32_(8)                                          /* (CFG_CFGI2C) I2C Delay Select for SERCOM0 Position */
#define CFG_CFGI2C_I2CDSEL0_Msk               (_UINT32_(0x1) << CFG_CFGI2C_I2CDSEL0_Pos)           /* (CFG_CFGI2C) I2C Delay Select for SERCOM0 Mask */
#define CFG_CFGI2C_I2CDSEL0(value)            (CFG_CFGI2C_I2CDSEL0_Msk & (_UINT32_(value) << CFG_CFGI2C_I2CDSEL0_Pos)) /* Assignment of value for I2CDSEL0 in the CFG_CFGI2C register */
#define CFG_CFGI2C_I2CDSEL1_Pos               _UINT32_(9)                                          /* (CFG_CFGI2C) I2C Delay Select for SERCOM1 Position */
#define CFG_CFGI2C_I2CDSEL1_Msk               (_UINT32_(0x1) << CFG_CFGI2C_I2CDSEL1_Pos)           /* (CFG_CFGI2C) I2C Delay Select for SERCOM1 Mask */
#define CFG_CFGI2C_I2CDSEL1(value)            (CFG_CFGI2C_I2CDSEL1_Msk & (_UINT32_(value) << CFG_CFGI2C_I2CDSEL1_Pos)) /* Assignment of value for I2CDSEL1 in the CFG_CFGI2C register */
#define CFG_CFGI2C_I2CDSEL2_Pos               _UINT32_(10)                                         /* (CFG_CFGI2C) I2C Delay Select for SERCOM2 Position */
#define CFG_CFGI2C_I2CDSEL2_Msk               (_UINT32_(0x1) << CFG_CFGI2C_I2CDSEL2_Pos)           /* (CFG_CFGI2C) I2C Delay Select for SERCOM2 Mask */
#define CFG_CFGI2C_I2CDSEL2(value)            (CFG_CFGI2C_I2CDSEL2_Msk & (_UINT32_(value) << CFG_CFGI2C_I2CDSEL2_Pos)) /* Assignment of value for I2CDSEL2 in the CFG_CFGI2C register */
#define CFG_CFGI2C_I2CDSEL6_Pos               _UINT32_(14)                                         /* (CFG_CFGI2C) I2C Delay Select for SERCOM6 Position */
#define CFG_CFGI2C_I2CDSEL6_Msk               (_UINT32_(0x1) << CFG_CFGI2C_I2CDSEL6_Pos)           /* (CFG_CFGI2C) I2C Delay Select for SERCOM6 Mask */
#define CFG_CFGI2C_I2CDSEL6(value)            (CFG_CFGI2C_I2CDSEL6_Msk & (_UINT32_(value) << CFG_CFGI2C_I2CDSEL6_Pos)) /* Assignment of value for I2CDSEL6 in the CFG_CFGI2C register */
#define CFG_CFGI2C_SLRCTRL0_Pos               _UINT32_(16)                                         /* (CFG_CFGI2C) I2C Slew Rate Control for SERCOM0 Position */
#define CFG_CFGI2C_SLRCTRL0_Msk               (_UINT32_(0x1) << CFG_CFGI2C_SLRCTRL0_Pos)           /* (CFG_CFGI2C) I2C Slew Rate Control for SERCOM0 Mask */
#define CFG_CFGI2C_SLRCTRL0(value)            (CFG_CFGI2C_SLRCTRL0_Msk & (_UINT32_(value) << CFG_CFGI2C_SLRCTRL0_Pos)) /* Assignment of value for SLRCTRL0 in the CFG_CFGI2C register */
#define CFG_CFGI2C_SLRCTRL1_Pos               _UINT32_(17)                                         /* (CFG_CFGI2C) I2C Slew Rate Control for SERCOM1 Position */
#define CFG_CFGI2C_SLRCTRL1_Msk               (_UINT32_(0x1) << CFG_CFGI2C_SLRCTRL1_Pos)           /* (CFG_CFGI2C) I2C Slew Rate Control for SERCOM1 Mask */
#define CFG_CFGI2C_SLRCTRL1(value)            (CFG_CFGI2C_SLRCTRL1_Msk & (_UINT32_(value) << CFG_CFGI2C_SLRCTRL1_Pos)) /* Assignment of value for SLRCTRL1 in the CFG_CFGI2C register */
#define CFG_CFGI2C_SLRCTRL2_Pos               _UINT32_(18)                                         /* (CFG_CFGI2C) I2C Slew Rate Control for SERCOM2 Position */
#define CFG_CFGI2C_SLRCTRL2_Msk               (_UINT32_(0x1) << CFG_CFGI2C_SLRCTRL2_Pos)           /* (CFG_CFGI2C) I2C Slew Rate Control for SERCOM2 Mask */
#define CFG_CFGI2C_SLRCTRL2(value)            (CFG_CFGI2C_SLRCTRL2_Msk & (_UINT32_(value) << CFG_CFGI2C_SLRCTRL2_Pos)) /* Assignment of value for SLRCTRL2 in the CFG_CFGI2C register */
#define CFG_CFGI2C_SLRCTRL6_Pos               _UINT32_(22)                                         /* (CFG_CFGI2C) I2C Slew Rate Control for SERCOM6 Position */
#define CFG_CFGI2C_SLRCTRL6_Msk               (_UINT32_(0x1) << CFG_CFGI2C_SLRCTRL6_Pos)           /* (CFG_CFGI2C) I2C Slew Rate Control for SERCOM6 Mask */
#define CFG_CFGI2C_SLRCTRL6(value)            (CFG_CFGI2C_SLRCTRL6_Msk & (_UINT32_(value) << CFG_CFGI2C_SLRCTRL6_Pos)) /* Assignment of value for SLRCTRL6 in the CFG_CFGI2C register */
#define CFG_CFGI2C_SLRTEN0_Pos                _UINT32_(24)                                         /* (CFG_CFGI2C) SLRT Enable for SERCOM0 Position */
#define CFG_CFGI2C_SLRTEN0_Msk                (_UINT32_(0x1) << CFG_CFGI2C_SLRTEN0_Pos)            /* (CFG_CFGI2C) SLRT Enable for SERCOM0 Mask */
#define CFG_CFGI2C_SLRTEN0(value)             (CFG_CFGI2C_SLRTEN0_Msk & (_UINT32_(value) << CFG_CFGI2C_SLRTEN0_Pos)) /* Assignment of value for SLRTEN0 in the CFG_CFGI2C register */
#define CFG_CFGI2C_SLRTEN1_Pos                _UINT32_(25)                                         /* (CFG_CFGI2C) SLRT Enable for SERCOM1 Position */
#define CFG_CFGI2C_SLRTEN1_Msk                (_UINT32_(0x1) << CFG_CFGI2C_SLRTEN1_Pos)            /* (CFG_CFGI2C) SLRT Enable for SERCOM1 Mask */
#define CFG_CFGI2C_SLRTEN1(value)             (CFG_CFGI2C_SLRTEN1_Msk & (_UINT32_(value) << CFG_CFGI2C_SLRTEN1_Pos)) /* Assignment of value for SLRTEN1 in the CFG_CFGI2C register */
#define CFG_CFGI2C_SLRTEN2_Pos                _UINT32_(26)                                         /* (CFG_CFGI2C) SLRT Enable for SERCOM2 Position */
#define CFG_CFGI2C_SLRTEN2_Msk                (_UINT32_(0x1) << CFG_CFGI2C_SLRTEN2_Pos)            /* (CFG_CFGI2C) SLRT Enable for SERCOM2 Mask */
#define CFG_CFGI2C_SLRTEN2(value)             (CFG_CFGI2C_SLRTEN2_Msk & (_UINT32_(value) << CFG_CFGI2C_SLRTEN2_Pos)) /* Assignment of value for SLRTEN2 in the CFG_CFGI2C register */
#define CFG_CFGI2C_SLRTEN6_Pos                _UINT32_(30)                                         /* (CFG_CFGI2C) SLRT Enable for SERCOM6 Position */
#define CFG_CFGI2C_SLRTEN6_Msk                (_UINT32_(0x1) << CFG_CFGI2C_SLRTEN6_Pos)            /* (CFG_CFGI2C) SLRT Enable for SERCOM6 Mask */
#define CFG_CFGI2C_SLRTEN6(value)             (CFG_CFGI2C_SLRTEN6_Msk & (_UINT32_(value) << CFG_CFGI2C_SLRTEN6_Pos)) /* Assignment of value for SLRTEN6 in the CFG_CFGI2C register */
#define CFG_CFGI2C_Msk                        _UINT32_(0x47474747)                                 /* (CFG_CFGI2C) Register Mask  */

#define CFG_CFGI2C_SMBUSEN_Pos                _UINT32_(0)                                          /* (CFG_CFGI2C Position) SMBus Enable for SERCOMx */
#define CFG_CFGI2C_SMBUSEN_Msk                (_UINT32_(0xF) << CFG_CFGI2C_SMBUSEN_Pos)            /* (CFG_CFGI2C Mask) SMBUSEN */
#define CFG_CFGI2C_SMBUSEN(value)             (CFG_CFGI2C_SMBUSEN_Msk & (_UINT32_(value) << CFG_CFGI2C_SMBUSEN_Pos)) 
#define CFG_CFGI2C_I2CDSEL_Pos                _UINT32_(8)                                          /* (CFG_CFGI2C Position) I2C Delay Select for SERCOMx */
#define CFG_CFGI2C_I2CDSEL_Msk                (_UINT32_(0xF) << CFG_CFGI2C_I2CDSEL_Pos)            /* (CFG_CFGI2C Mask) I2CDSEL */
#define CFG_CFGI2C_I2CDSEL(value)             (CFG_CFGI2C_I2CDSEL_Msk & (_UINT32_(value) << CFG_CFGI2C_I2CDSEL_Pos)) 
#define CFG_CFGI2C_SLRCTRL_Pos                _UINT32_(16)                                         /* (CFG_CFGI2C Position) I2C Slew Rate Control for SERCOMx */
#define CFG_CFGI2C_SLRCTRL_Msk                (_UINT32_(0xF) << CFG_CFGI2C_SLRCTRL_Pos)            /* (CFG_CFGI2C Mask) SLRCTRL */
#define CFG_CFGI2C_SLRCTRL(value)             (CFG_CFGI2C_SLRCTRL_Msk & (_UINT32_(value) << CFG_CFGI2C_SLRCTRL_Pos)) 
#define CFG_CFGI2C_SLRTEN_Pos                 _UINT32_(24)                                         /* (CFG_CFGI2C Position) SLRT Enable for SERCOM6 */
#define CFG_CFGI2C_SLRTEN_Msk                 (_UINT32_(0xF) << CFG_CFGI2C_SLRTEN_Pos)             /* (CFG_CFGI2C Mask) SLRTEN */
#define CFG_CFGI2C_SLRTEN(value)              (CFG_CFGI2C_SLRTEN_Msk & (_UINT32_(value) << CFG_CFGI2C_SLRTEN_Pos)) 

/* -------- CFG_CFGI2CCLR : (CFG Offset: 0x74) (R/W 32) Bit clear register -------- */
#define CFG_CFGI2CCLR_RESETVALUE              _UINT32_(0x00)                                       /*  (CFG_CFGI2CCLR) Bit clear register  Reset Value */

#define CFG_CFGI2CCLR_Msk                     _UINT32_(0x00000000)                                 /* (CFG_CFGI2CCLR) Register Mask  */


/* -------- CFG_CFGI2CSET : (CFG Offset: 0x78) (R/W 32) Bit set register -------- */
#define CFG_CFGI2CSET_RESETVALUE              _UINT32_(0x00)                                       /*  (CFG_CFGI2CSET) Bit set register  Reset Value */

#define CFG_CFGI2CSET_Msk                     _UINT32_(0x00000000)                                 /* (CFG_CFGI2CSET) Register Mask  */


/* -------- CFG_CFGI2CINV : (CFG Offset: 0x7C) (R/W 32) Bit invert register -------- */
#define CFG_CFGI2CINV_RESETVALUE              _UINT32_(0x00)                                       /*  (CFG_CFGI2CINV) Bit invert register  Reset Value */

#define CFG_CFGI2CINV_Msk                     _UINT32_(0x00000000)                                 /* (CFG_CFGI2CINV) Register Mask  */


/* -------- CFG_CFGPCLKGEN1 : (CFG Offset: 0x80) (R/W 32)  -------- */
#define CFG_CFGPCLKGEN1_RESETVALUE            _UINT32_(0x00)                                       /*  (CFG_CFGPCLKGEN1)   Reset Value */

#define CFG_CFGPCLKGEN1_EIC__CCL_CSEL_Pos     _UINT32_(0)                                          /* (CFG_CFGPCLKGEN1) EIC/CCL Clock Selection Position */
#define CFG_CFGPCLKGEN1_EIC__CCL_CSEL_Msk     (_UINT32_(0x7) << CFG_CFGPCLKGEN1_EIC__CCL_CSEL_Pos) /* (CFG_CFGPCLKGEN1) EIC/CCL Clock Selection Mask */
#define CFG_CFGPCLKGEN1_EIC__CCL_CSEL(value)  (CFG_CFGPCLKGEN1_EIC__CCL_CSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN1_EIC__CCL_CSEL_Pos)) /* Assignment of value for EIC__CCL_CSEL in the CFG_CFGPCLKGEN1 register */
#define   CFG_CFGPCLKGEN1_EIC__CCL_CSEL_NO_CLK_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN1) No Clock  */
#define   CFG_CFGPCLKGEN1_EIC__CCL_CSEL_REFO1_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 1  */
#define   CFG_CFGPCLKGEN1_EIC__CCL_CSEL_REFO2_Val _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 2  */
#define   CFG_CFGPCLKGEN1_EIC__CCL_CSEL_REFO3_Val _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 3  */
#define   CFG_CFGPCLKGEN1_EIC__CCL_CSEL_REFO4_Val _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 4  */
#define   CFG_CFGPCLKGEN1_EIC__CCL_CSEL_REFO5_Val _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 5  */
#define   CFG_CFGPCLKGEN1_EIC__CCL_CSEL_REFO6_Val _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 6  */
#define   CFG_CFGPCLKGEN1_EIC__CCL_CSEL_LPCLK_Val _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN1_EIC__CCL_CSEL_NO_CLK  (CFG_CFGPCLKGEN1_EIC__CCL_CSEL_NO_CLK_Val << CFG_CFGPCLKGEN1_EIC__CCL_CSEL_Pos) /* (CFG_CFGPCLKGEN1) No Clock Position */
#define CFG_CFGPCLKGEN1_EIC__CCL_CSEL_REFO1   (CFG_CFGPCLKGEN1_EIC__CCL_CSEL_REFO1_Val << CFG_CFGPCLKGEN1_EIC__CCL_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN1_EIC__CCL_CSEL_REFO2   (CFG_CFGPCLKGEN1_EIC__CCL_CSEL_REFO2_Val << CFG_CFGPCLKGEN1_EIC__CCL_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN1_EIC__CCL_CSEL_REFO3   (CFG_CFGPCLKGEN1_EIC__CCL_CSEL_REFO3_Val << CFG_CFGPCLKGEN1_EIC__CCL_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN1_EIC__CCL_CSEL_REFO4   (CFG_CFGPCLKGEN1_EIC__CCL_CSEL_REFO4_Val << CFG_CFGPCLKGEN1_EIC__CCL_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN1_EIC__CCL_CSEL_REFO5   (CFG_CFGPCLKGEN1_EIC__CCL_CSEL_REFO5_Val << CFG_CFGPCLKGEN1_EIC__CCL_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN1_EIC__CCL_CSEL_REFO6   (CFG_CFGPCLKGEN1_EIC__CCL_CSEL_REFO6_Val << CFG_CFGPCLKGEN1_EIC__CCL_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN1_EIC__CCL_CSEL_LPCLK   (CFG_CFGPCLKGEN1_EIC__CCL_CSEL_LPCLK_Val << CFG_CFGPCLKGEN1_EIC__CCL_CSEL_Pos) /* (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN1_EIC__CCL_CD_Pos       _UINT32_(3)                                          /* (CFG_CFGPCLKGEN1) EIC/CCL Clock Disable Position */
#define CFG_CFGPCLKGEN1_EIC__CCL_CD_Msk       (_UINT32_(0x1) << CFG_CFGPCLKGEN1_EIC__CCL_CD_Pos)   /* (CFG_CFGPCLKGEN1) EIC/CCL Clock Disable Mask */
#define CFG_CFGPCLKGEN1_EIC__CCL_CD(value)    (CFG_CFGPCLKGEN1_EIC__CCL_CD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN1_EIC__CCL_CD_Pos)) /* Assignment of value for EIC__CCL_CD in the CFG_CFGPCLKGEN1 register */
#define   CFG_CFGPCLKGEN1_EIC__CCL_CD_ON_Val  _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN1) Enable PGCLK  */
#define   CFG_CFGPCLKGEN1_EIC__CCL_CD_OFF_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN1) Disable PGCLK  */
#define CFG_CFGPCLKGEN1_EIC__CCL_CD_ON        (CFG_CFGPCLKGEN1_EIC__CCL_CD_ON_Val << CFG_CFGPCLKGEN1_EIC__CCL_CD_Pos) /* (CFG_CFGPCLKGEN1) Enable PGCLK Position */
#define CFG_CFGPCLKGEN1_EIC__CCL_CD_OFF       (CFG_CFGPCLKGEN1_EIC__CCL_CD_OFF_Val << CFG_CFGPCLKGEN1_EIC__CCL_CD_Pos) /* (CFG_CFGPCLKGEN1) Disable PGCLK Position */
#define CFG_CFGPCLKGEN1_FREQM_REF_CSEL_Pos    _UINT32_(4)                                          /* (CFG_CFGPCLKGEN1) FREQMRC Clock Selection Position */
#define CFG_CFGPCLKGEN1_FREQM_REF_CSEL_Msk    (_UINT32_(0x7) << CFG_CFGPCLKGEN1_FREQM_REF_CSEL_Pos) /* (CFG_CFGPCLKGEN1) FREQMRC Clock Selection Mask */
#define CFG_CFGPCLKGEN1_FREQM_REF_CSEL(value) (CFG_CFGPCLKGEN1_FREQM_REF_CSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN1_FREQM_REF_CSEL_Pos)) /* Assignment of value for FREQM_REF_CSEL in the CFG_CFGPCLKGEN1 register */
#define   CFG_CFGPCLKGEN1_FREQM_REF_CSEL_NO_CLK_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN1) No Clock  */
#define   CFG_CFGPCLKGEN1_FREQM_REF_CSEL_REFO1_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 1  */
#define   CFG_CFGPCLKGEN1_FREQM_REF_CSEL_REFO2_Val _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 2  */
#define   CFG_CFGPCLKGEN1_FREQM_REF_CSEL_REFO3_Val _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 3  */
#define   CFG_CFGPCLKGEN1_FREQM_REF_CSEL_REFO4_Val _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 4  */
#define   CFG_CFGPCLKGEN1_FREQM_REF_CSEL_REFO5_Val _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 5  */
#define   CFG_CFGPCLKGEN1_FREQM_REF_CSEL_REFO6_Val _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 6  */
#define   CFG_CFGPCLKGEN1_FREQM_REF_CSEL_LPCLK_Val _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN1_FREQM_REF_CSEL_NO_CLK (CFG_CFGPCLKGEN1_FREQM_REF_CSEL_NO_CLK_Val << CFG_CFGPCLKGEN1_FREQM_REF_CSEL_Pos) /* (CFG_CFGPCLKGEN1) No Clock Position */
#define CFG_CFGPCLKGEN1_FREQM_REF_CSEL_REFO1  (CFG_CFGPCLKGEN1_FREQM_REF_CSEL_REFO1_Val << CFG_CFGPCLKGEN1_FREQM_REF_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN1_FREQM_REF_CSEL_REFO2  (CFG_CFGPCLKGEN1_FREQM_REF_CSEL_REFO2_Val << CFG_CFGPCLKGEN1_FREQM_REF_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN1_FREQM_REF_CSEL_REFO3  (CFG_CFGPCLKGEN1_FREQM_REF_CSEL_REFO3_Val << CFG_CFGPCLKGEN1_FREQM_REF_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN1_FREQM_REF_CSEL_REFO4  (CFG_CFGPCLKGEN1_FREQM_REF_CSEL_REFO4_Val << CFG_CFGPCLKGEN1_FREQM_REF_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN1_FREQM_REF_CSEL_REFO5  (CFG_CFGPCLKGEN1_FREQM_REF_CSEL_REFO5_Val << CFG_CFGPCLKGEN1_FREQM_REF_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN1_FREQM_REF_CSEL_REFO6  (CFG_CFGPCLKGEN1_FREQM_REF_CSEL_REFO6_Val << CFG_CFGPCLKGEN1_FREQM_REF_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN1_FREQM_REF_CSEL_LPCLK  (CFG_CFGPCLKGEN1_FREQM_REF_CSEL_LPCLK_Val << CFG_CFGPCLKGEN1_FREQM_REF_CSEL_Pos) /* (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN1_FREQM_REF_CD_Pos      _UINT32_(7)                                          /* (CFG_CFGPCLKGEN1) FREQMRC Clock Disable Position */
#define CFG_CFGPCLKGEN1_FREQM_REF_CD_Msk      (_UINT32_(0x1) << CFG_CFGPCLKGEN1_FREQM_REF_CD_Pos)  /* (CFG_CFGPCLKGEN1) FREQMRC Clock Disable Mask */
#define CFG_CFGPCLKGEN1_FREQM_REF_CD(value)   (CFG_CFGPCLKGEN1_FREQM_REF_CD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN1_FREQM_REF_CD_Pos)) /* Assignment of value for FREQM_REF_CD in the CFG_CFGPCLKGEN1 register */
#define   CFG_CFGPCLKGEN1_FREQM_REF_CD_ON_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN1) Enable PGCLK  */
#define   CFG_CFGPCLKGEN1_FREQM_REF_CD_OFF_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN1) Disable PGCLK  */
#define CFG_CFGPCLKGEN1_FREQM_REF_CD_ON       (CFG_CFGPCLKGEN1_FREQM_REF_CD_ON_Val << CFG_CFGPCLKGEN1_FREQM_REF_CD_Pos) /* (CFG_CFGPCLKGEN1) Enable PGCLK Position */
#define CFG_CFGPCLKGEN1_FREQM_REF_CD_OFF      (CFG_CFGPCLKGEN1_FREQM_REF_CD_OFF_Val << CFG_CFGPCLKGEN1_FREQM_REF_CD_Pos) /* (CFG_CFGPCLKGEN1) Disable PGCLK Position */
#define CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_Pos    _UINT32_(8)                                          /* (CFG_CFGPCLKGEN1) FREQMMC Clock Selection Position */
#define CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_Msk    (_UINT32_(0x7) << CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_Pos) /* (CFG_CFGPCLKGEN1) FREQMMC Clock Selection Mask */
#define CFG_CFGPCLKGEN1_FREQM_MSR_CSEL(value) (CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_Pos)) /* Assignment of value for FREQM_MSR_CSEL in the CFG_CFGPCLKGEN1 register */
#define   CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_NO_CLK_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN1) No Clock  */
#define   CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_REFO1_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 1  */
#define   CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_REFO2_Val _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 2  */
#define   CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_REFO3_Val _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 3  */
#define   CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_REFO4_Val _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 4  */
#define   CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_REFO5_Val _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 5  */
#define   CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_REFO6_Val _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 6  */
#define   CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_LPCLK_Val _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_NO_CLK (CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_NO_CLK_Val << CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_Pos) /* (CFG_CFGPCLKGEN1) No Clock Position */
#define CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_REFO1  (CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_REFO1_Val << CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_REFO2  (CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_REFO2_Val << CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_REFO3  (CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_REFO3_Val << CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_REFO4  (CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_REFO4_Val << CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_REFO5  (CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_REFO5_Val << CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_REFO6  (CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_REFO6_Val << CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_LPCLK  (CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_LPCLK_Val << CFG_CFGPCLKGEN1_FREQM_MSR_CSEL_Pos) /* (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN1_FREQM_MSR_CD_Pos      _UINT32_(11)                                         /* (CFG_CFGPCLKGEN1) FREQMMC Clock Disable Position */
#define CFG_CFGPCLKGEN1_FREQM_MSR_CD_Msk      (_UINT32_(0x1) << CFG_CFGPCLKGEN1_FREQM_MSR_CD_Pos)  /* (CFG_CFGPCLKGEN1) FREQMMC Clock Disable Mask */
#define CFG_CFGPCLKGEN1_FREQM_MSR_CD(value)   (CFG_CFGPCLKGEN1_FREQM_MSR_CD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN1_FREQM_MSR_CD_Pos)) /* Assignment of value for FREQM_MSR_CD in the CFG_CFGPCLKGEN1 register */
#define   CFG_CFGPCLKGEN1_FREQM_MSR_CD_ON_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN1) Enable PGCLK  */
#define   CFG_CFGPCLKGEN1_FREQM_MSR_CD_OFF_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN1) Disable PGCLK  */
#define CFG_CFGPCLKGEN1_FREQM_MSR_CD_ON       (CFG_CFGPCLKGEN1_FREQM_MSR_CD_ON_Val << CFG_CFGPCLKGEN1_FREQM_MSR_CD_Pos) /* (CFG_CFGPCLKGEN1) Enable PGCLK Position */
#define CFG_CFGPCLKGEN1_FREQM_MSR_CD_OFF      (CFG_CFGPCLKGEN1_FREQM_MSR_CD_OFF_Val << CFG_CFGPCLKGEN1_FREQM_MSR_CD_Pos) /* (CFG_CFGPCLKGEN1) Disable PGCLK Position */
#define CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_Pos _UINT32_(12)                                         /* (CFG_CFGPCLKGEN1) SERCOM0/1/2 Clock Selection Position */
#define CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_Msk (_UINT32_(0x7) << CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_Pos) /* (CFG_CFGPCLKGEN1) SERCOM0/1/2 Clock Selection Mask */
#define CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL(value) (CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_Pos)) /* Assignment of value for SERCOM_0_1_2_CSEL in the CFG_CFGPCLKGEN1 register */
#define   CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_NO_CLK_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN1) No Clock  */
#define   CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_REFO1_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 1  */
#define   CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_REFO2_Val _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 2  */
#define   CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_REFO3_Val _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 3  */
#define   CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_REFO4_Val _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 4  */
#define   CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_REFO5_Val _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 5  */
#define   CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_REFO6_Val _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 6  */
#define   CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_LPCLK_Val _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_NO_CLK (CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_NO_CLK_Val << CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_Pos) /* (CFG_CFGPCLKGEN1) No Clock Position */
#define CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_REFO1 (CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_REFO1_Val << CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_REFO2 (CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_REFO2_Val << CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_REFO3 (CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_REFO3_Val << CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_REFO4 (CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_REFO4_Val << CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_REFO5 (CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_REFO5_Val << CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_REFO6 (CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_REFO6_Val << CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_LPCLK (CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_LPCLK_Val << CFG_CFGPCLKGEN1_SERCOM_0_1_2_CSEL_Pos) /* (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN1_SERCOM_0_1_2_CD_Pos   _UINT32_(15)                                         /* (CFG_CFGPCLKGEN1) SERCOM0/1/2 Clock Disable Position */
#define CFG_CFGPCLKGEN1_SERCOM_0_1_2_CD_Msk   (_UINT32_(0x1) << CFG_CFGPCLKGEN1_SERCOM_0_1_2_CD_Pos) /* (CFG_CFGPCLKGEN1) SERCOM0/1/2 Clock Disable Mask */
#define CFG_CFGPCLKGEN1_SERCOM_0_1_2_CD(value) (CFG_CFGPCLKGEN1_SERCOM_0_1_2_CD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN1_SERCOM_0_1_2_CD_Pos)) /* Assignment of value for SERCOM_0_1_2_CD in the CFG_CFGPCLKGEN1 register */
#define   CFG_CFGPCLKGEN1_SERCOM_0_1_2_CD_ON_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN1) Enable PGCLK  */
#define   CFG_CFGPCLKGEN1_SERCOM_0_1_2_CD_OFF_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN1) Disable PGCLK  */
#define CFG_CFGPCLKGEN1_SERCOM_0_1_2_CD_ON    (CFG_CFGPCLKGEN1_SERCOM_0_1_2_CD_ON_Val << CFG_CFGPCLKGEN1_SERCOM_0_1_2_CD_Pos) /* (CFG_CFGPCLKGEN1) Enable PGCLK Position */
#define CFG_CFGPCLKGEN1_SERCOM_0_1_2_CD_OFF   (CFG_CFGPCLKGEN1_SERCOM_0_1_2_CD_OFF_Val << CFG_CFGPCLKGEN1_SERCOM_0_1_2_CD_Pos) /* (CFG_CFGPCLKGEN1) Disable PGCLK Position */
#define CFG_CFGPCLKGEN1_SERCOM_6_CSEL_Pos     _UINT32_(16)                                         /* (CFG_CFGPCLKGEN1) SERCOM6 Clock Selection Position */
#define CFG_CFGPCLKGEN1_SERCOM_6_CSEL_Msk     (_UINT32_(0x7) << CFG_CFGPCLKGEN1_SERCOM_6_CSEL_Pos) /* (CFG_CFGPCLKGEN1) SERCOM6 Clock Selection Mask */
#define CFG_CFGPCLKGEN1_SERCOM_6_CSEL(value)  (CFG_CFGPCLKGEN1_SERCOM_6_CSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN1_SERCOM_6_CSEL_Pos)) /* Assignment of value for SERCOM_6_CSEL in the CFG_CFGPCLKGEN1 register */
#define   CFG_CFGPCLKGEN1_SERCOM_6_CSEL_NO_CLK_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN1) No Clock  */
#define   CFG_CFGPCLKGEN1_SERCOM_6_CSEL_REFO1_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 1  */
#define   CFG_CFGPCLKGEN1_SERCOM_6_CSEL_REFO2_Val _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 2  */
#define   CFG_CFGPCLKGEN1_SERCOM_6_CSEL_REFO3_Val _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 3  */
#define   CFG_CFGPCLKGEN1_SERCOM_6_CSEL_REFO4_Val _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 4  */
#define   CFG_CFGPCLKGEN1_SERCOM_6_CSEL_REFO5_Val _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 5  */
#define   CFG_CFGPCLKGEN1_SERCOM_6_CSEL_REFO6_Val _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 6  */
#define   CFG_CFGPCLKGEN1_SERCOM_6_CSEL_LPCLK_Val _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN1_SERCOM_6_CSEL_NO_CLK  (CFG_CFGPCLKGEN1_SERCOM_6_CSEL_NO_CLK_Val << CFG_CFGPCLKGEN1_SERCOM_6_CSEL_Pos) /* (CFG_CFGPCLKGEN1) No Clock Position */
#define CFG_CFGPCLKGEN1_SERCOM_6_CSEL_REFO1   (CFG_CFGPCLKGEN1_SERCOM_6_CSEL_REFO1_Val << CFG_CFGPCLKGEN1_SERCOM_6_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN1_SERCOM_6_CSEL_REFO2   (CFG_CFGPCLKGEN1_SERCOM_6_CSEL_REFO2_Val << CFG_CFGPCLKGEN1_SERCOM_6_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN1_SERCOM_6_CSEL_REFO3   (CFG_CFGPCLKGEN1_SERCOM_6_CSEL_REFO3_Val << CFG_CFGPCLKGEN1_SERCOM_6_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN1_SERCOM_6_CSEL_REFO4   (CFG_CFGPCLKGEN1_SERCOM_6_CSEL_REFO4_Val << CFG_CFGPCLKGEN1_SERCOM_6_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN1_SERCOM_6_CSEL_REFO5   (CFG_CFGPCLKGEN1_SERCOM_6_CSEL_REFO5_Val << CFG_CFGPCLKGEN1_SERCOM_6_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN1_SERCOM_6_CSEL_REFO6   (CFG_CFGPCLKGEN1_SERCOM_6_CSEL_REFO6_Val << CFG_CFGPCLKGEN1_SERCOM_6_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN1_SERCOM_6_CSEL_LPCLK   (CFG_CFGPCLKGEN1_SERCOM_6_CSEL_LPCLK_Val << CFG_CFGPCLKGEN1_SERCOM_6_CSEL_Pos) /* (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN1_SERCOM_6_CD_Pos       _UINT32_(19)                                         /* (CFG_CFGPCLKGEN1) SERCOM6 Clock Disable Position */
#define CFG_CFGPCLKGEN1_SERCOM_6_CD_Msk       (_UINT32_(0x1) << CFG_CFGPCLKGEN1_SERCOM_6_CD_Pos)   /* (CFG_CFGPCLKGEN1) SERCOM6 Clock Disable Mask */
#define CFG_CFGPCLKGEN1_SERCOM_6_CD(value)    (CFG_CFGPCLKGEN1_SERCOM_6_CD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN1_SERCOM_6_CD_Pos)) /* Assignment of value for SERCOM_6_CD in the CFG_CFGPCLKGEN1 register */
#define   CFG_CFGPCLKGEN1_SERCOM_6_CD_ON_Val  _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN1) Enable PGCLK  */
#define   CFG_CFGPCLKGEN1_SERCOM_6_CD_OFF_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN1) Disable PGCLK  */
#define CFG_CFGPCLKGEN1_SERCOM_6_CD_ON        (CFG_CFGPCLKGEN1_SERCOM_6_CD_ON_Val << CFG_CFGPCLKGEN1_SERCOM_6_CD_Pos) /* (CFG_CFGPCLKGEN1) Enable PGCLK Position */
#define CFG_CFGPCLKGEN1_SERCOM_6_CD_OFF       (CFG_CFGPCLKGEN1_SERCOM_6_CD_OFF_Val << CFG_CFGPCLKGEN1_SERCOM_6_CD_Pos) /* (CFG_CFGPCLKGEN1) Disable PGCLK Position */
#define CFG_CFGPCLKGEN1_TCC_1_2_CSEL_Pos      _UINT32_(20)                                         /* (CFG_CFGPCLKGEN1) TCC1/2 Clock Selection Position */
#define CFG_CFGPCLKGEN1_TCC_1_2_CSEL_Msk      (_UINT32_(0x7) << CFG_CFGPCLKGEN1_TCC_1_2_CSEL_Pos)  /* (CFG_CFGPCLKGEN1) TCC1/2 Clock Selection Mask */
#define CFG_CFGPCLKGEN1_TCC_1_2_CSEL(value)   (CFG_CFGPCLKGEN1_TCC_1_2_CSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN1_TCC_1_2_CSEL_Pos)) /* Assignment of value for TCC_1_2_CSEL in the CFG_CFGPCLKGEN1 register */
#define   CFG_CFGPCLKGEN1_TCC_1_2_CSEL_NO_CLK_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN1) No Clock  */
#define   CFG_CFGPCLKGEN1_TCC_1_2_CSEL_REFO1_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 1  */
#define   CFG_CFGPCLKGEN1_TCC_1_2_CSEL_REFO2_Val _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 2  */
#define   CFG_CFGPCLKGEN1_TCC_1_2_CSEL_REFO3_Val _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 3  */
#define   CFG_CFGPCLKGEN1_TCC_1_2_CSEL_REFO4_Val _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 4  */
#define   CFG_CFGPCLKGEN1_TCC_1_2_CSEL_REFO5_Val _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 5  */
#define   CFG_CFGPCLKGEN1_TCC_1_2_CSEL_REFO6_Val _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 6  */
#define   CFG_CFGPCLKGEN1_TCC_1_2_CSEL_LPCLK_Val _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN1_TCC_1_2_CSEL_NO_CLK   (CFG_CFGPCLKGEN1_TCC_1_2_CSEL_NO_CLK_Val << CFG_CFGPCLKGEN1_TCC_1_2_CSEL_Pos) /* (CFG_CFGPCLKGEN1) No Clock Position */
#define CFG_CFGPCLKGEN1_TCC_1_2_CSEL_REFO1    (CFG_CFGPCLKGEN1_TCC_1_2_CSEL_REFO1_Val << CFG_CFGPCLKGEN1_TCC_1_2_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN1_TCC_1_2_CSEL_REFO2    (CFG_CFGPCLKGEN1_TCC_1_2_CSEL_REFO2_Val << CFG_CFGPCLKGEN1_TCC_1_2_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN1_TCC_1_2_CSEL_REFO3    (CFG_CFGPCLKGEN1_TCC_1_2_CSEL_REFO3_Val << CFG_CFGPCLKGEN1_TCC_1_2_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN1_TCC_1_2_CSEL_REFO4    (CFG_CFGPCLKGEN1_TCC_1_2_CSEL_REFO4_Val << CFG_CFGPCLKGEN1_TCC_1_2_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN1_TCC_1_2_CSEL_REFO5    (CFG_CFGPCLKGEN1_TCC_1_2_CSEL_REFO5_Val << CFG_CFGPCLKGEN1_TCC_1_2_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN1_TCC_1_2_CSEL_REFO6    (CFG_CFGPCLKGEN1_TCC_1_2_CSEL_REFO6_Val << CFG_CFGPCLKGEN1_TCC_1_2_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN1_TCC_1_2_CSEL_LPCLK    (CFG_CFGPCLKGEN1_TCC_1_2_CSEL_LPCLK_Val << CFG_CFGPCLKGEN1_TCC_1_2_CSEL_Pos) /* (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN1_TCC_1_2_CD_Pos        _UINT32_(23)                                         /* (CFG_CFGPCLKGEN1) TCC1/2 Clock Disable Position */
#define CFG_CFGPCLKGEN1_TCC_1_2_CD_Msk        (_UINT32_(0x1) << CFG_CFGPCLKGEN1_TCC_1_2_CD_Pos)    /* (CFG_CFGPCLKGEN1) TCC1/2 Clock Disable Mask */
#define CFG_CFGPCLKGEN1_TCC_1_2_CD(value)     (CFG_CFGPCLKGEN1_TCC_1_2_CD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN1_TCC_1_2_CD_Pos)) /* Assignment of value for TCC_1_2_CD in the CFG_CFGPCLKGEN1 register */
#define   CFG_CFGPCLKGEN1_TCC_1_2_CD_ON_Val   _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN1) Enable PGCLK  */
#define   CFG_CFGPCLKGEN1_TCC_1_2_CD_OFF_Val  _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN1) Disable PGCLK  */
#define CFG_CFGPCLKGEN1_TCC_1_2_CD_ON         (CFG_CFGPCLKGEN1_TCC_1_2_CD_ON_Val << CFG_CFGPCLKGEN1_TCC_1_2_CD_Pos) /* (CFG_CFGPCLKGEN1) Enable PGCLK Position */
#define CFG_CFGPCLKGEN1_TCC_1_2_CD_OFF        (CFG_CFGPCLKGEN1_TCC_1_2_CD_OFF_Val << CFG_CFGPCLKGEN1_TCC_1_2_CD_Pos) /* (CFG_CFGPCLKGEN1) Disable PGCLK Position */
#define CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_Pos _UINT32_(24)                                         /* (CFG_CFGPCLKGEN1) SERCOM3/4/5 Clock Selection Position */
#define CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_Msk (_UINT32_(0x7) << CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_Pos) /* (CFG_CFGPCLKGEN1) SERCOM3/4/5 Clock Selection Mask */
#define CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL(value) (CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_Pos)) /* Assignment of value for SERCOM_3_4_5_CSEL in the CFG_CFGPCLKGEN1 register */
#define   CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_NO_CLK_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN1) No Clock  */
#define   CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_REFO1_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 1  */
#define   CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_REFO2_Val _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 2  */
#define   CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_REFO3_Val _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 3  */
#define   CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_REFO4_Val _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 4  */
#define   CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_REFO5_Val _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 5  */
#define   CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_REFO6_Val _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 6  */
#define   CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_LPCLK_Val _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_NO_CLK (CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_NO_CLK_Val << CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_Pos) /* (CFG_CFGPCLKGEN1) No Clock Position */
#define CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_REFO1 (CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_REFO1_Val << CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_REFO2 (CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_REFO2_Val << CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_REFO3 (CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_REFO3_Val << CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_REFO4 (CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_REFO4_Val << CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_REFO5 (CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_REFO5_Val << CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_REFO6 (CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_REFO6_Val << CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_LPCLK (CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_LPCLK_Val << CFG_CFGPCLKGEN1_SERCOM_3_4_5_CSEL_Pos) /* (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN1_SERCOM_3_4_5_CD_Pos   _UINT32_(27)                                         /* (CFG_CFGPCLKGEN1) SERCOM3/4/5 Clock Disable Position */
#define CFG_CFGPCLKGEN1_SERCOM_3_4_5_CD_Msk   (_UINT32_(0x1) << CFG_CFGPCLKGEN1_SERCOM_3_4_5_CD_Pos) /* (CFG_CFGPCLKGEN1) SERCOM3/4/5 Clock Disable Mask */
#define CFG_CFGPCLKGEN1_SERCOM_3_4_5_CD(value) (CFG_CFGPCLKGEN1_SERCOM_3_4_5_CD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN1_SERCOM_3_4_5_CD_Pos)) /* Assignment of value for SERCOM_3_4_5_CD in the CFG_CFGPCLKGEN1 register */
#define   CFG_CFGPCLKGEN1_SERCOM_3_4_5_CD_ON_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN1) Enable PGCLK  */
#define   CFG_CFGPCLKGEN1_SERCOM_3_4_5_CD_OFF_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN1) Disable PGCLK  */
#define CFG_CFGPCLKGEN1_SERCOM_3_4_5_CD_ON    (CFG_CFGPCLKGEN1_SERCOM_3_4_5_CD_ON_Val << CFG_CFGPCLKGEN1_SERCOM_3_4_5_CD_Pos) /* (CFG_CFGPCLKGEN1) Enable PGCLK Position */
#define CFG_CFGPCLKGEN1_SERCOM_3_4_5_CD_OFF   (CFG_CFGPCLKGEN1_SERCOM_3_4_5_CD_OFF_Val << CFG_CFGPCLKGEN1_SERCOM_3_4_5_CD_Pos) /* (CFG_CFGPCLKGEN1) Disable PGCLK Position */
#define CFG_CFGPCLKGEN1_CM4TCSEL_Pos          _UINT32_(28)                                         /* (CFG_CFGPCLKGEN1) CM4T Clock Selection Position */
#define CFG_CFGPCLKGEN1_CM4TCSEL_Msk          (_UINT32_(0x7) << CFG_CFGPCLKGEN1_CM4TCSEL_Pos)      /* (CFG_CFGPCLKGEN1) CM4T Clock Selection Mask */
#define CFG_CFGPCLKGEN1_CM4TCSEL(value)       (CFG_CFGPCLKGEN1_CM4TCSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN1_CM4TCSEL_Pos)) /* Assignment of value for CM4TCSEL in the CFG_CFGPCLKGEN1 register */
#define   CFG_CFGPCLKGEN1_CM4TCSEL_NO_CLK_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN1) No Clock  */
#define   CFG_CFGPCLKGEN1_CM4TCSEL_REFO1_Val  _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 1  */
#define   CFG_CFGPCLKGEN1_CM4TCSEL_REFO2_Val  _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 2  */
#define   CFG_CFGPCLKGEN1_CM4TCSEL_REFO3_Val  _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 3  */
#define   CFG_CFGPCLKGEN1_CM4TCSEL_REFO4_Val  _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 4  */
#define   CFG_CFGPCLKGEN1_CM4TCSEL_REFO5_Val  _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 5  */
#define   CFG_CFGPCLKGEN1_CM4TCSEL_REFO6_Val  _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN1) Reference Clock 6  */
#define   CFG_CFGPCLKGEN1_CM4TCSEL_LPCLK_Val  _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN1_CM4TCSEL_NO_CLK       (CFG_CFGPCLKGEN1_CM4TCSEL_NO_CLK_Val << CFG_CFGPCLKGEN1_CM4TCSEL_Pos) /* (CFG_CFGPCLKGEN1) No Clock Position */
#define CFG_CFGPCLKGEN1_CM4TCSEL_REFO1        (CFG_CFGPCLKGEN1_CM4TCSEL_REFO1_Val << CFG_CFGPCLKGEN1_CM4TCSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN1_CM4TCSEL_REFO2        (CFG_CFGPCLKGEN1_CM4TCSEL_REFO2_Val << CFG_CFGPCLKGEN1_CM4TCSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN1_CM4TCSEL_REFO3        (CFG_CFGPCLKGEN1_CM4TCSEL_REFO3_Val << CFG_CFGPCLKGEN1_CM4TCSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN1_CM4TCSEL_REFO4        (CFG_CFGPCLKGEN1_CM4TCSEL_REFO4_Val << CFG_CFGPCLKGEN1_CM4TCSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN1_CM4TCSEL_REFO5        (CFG_CFGPCLKGEN1_CM4TCSEL_REFO5_Val << CFG_CFGPCLKGEN1_CM4TCSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN1_CM4TCSEL_REFO6        (CFG_CFGPCLKGEN1_CM4TCSEL_REFO6_Val << CFG_CFGPCLKGEN1_CM4TCSEL_Pos) /* (CFG_CFGPCLKGEN1) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN1_CM4TCSEL_LPCLK        (CFG_CFGPCLKGEN1_CM4TCSEL_LPCLK_Val << CFG_CFGPCLKGEN1_CM4TCSEL_Pos) /* (CFG_CFGPCLKGEN1) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN1_CM4TCD_Pos            _UINT32_(31)                                         /* (CFG_CFGPCLKGEN1) CM4T Clock Disable Position */
#define CFG_CFGPCLKGEN1_CM4TCD_Msk            (_UINT32_(0x1) << CFG_CFGPCLKGEN1_CM4TCD_Pos)        /* (CFG_CFGPCLKGEN1) CM4T Clock Disable Mask */
#define CFG_CFGPCLKGEN1_CM4TCD(value)         (CFG_CFGPCLKGEN1_CM4TCD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN1_CM4TCD_Pos)) /* Assignment of value for CM4TCD in the CFG_CFGPCLKGEN1 register */
#define   CFG_CFGPCLKGEN1_CM4TCD_ON_Val       _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN1) Enable PGCLK  */
#define   CFG_CFGPCLKGEN1_CM4TCD_OFF_Val      _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN1) Disable PGCLK  */
#define CFG_CFGPCLKGEN1_CM4TCD_ON             (CFG_CFGPCLKGEN1_CM4TCD_ON_Val << CFG_CFGPCLKGEN1_CM4TCD_Pos) /* (CFG_CFGPCLKGEN1) Enable PGCLK Position */
#define CFG_CFGPCLKGEN1_CM4TCD_OFF            (CFG_CFGPCLKGEN1_CM4TCD_OFF_Val << CFG_CFGPCLKGEN1_CM4TCD_Pos) /* (CFG_CFGPCLKGEN1) Disable PGCLK Position */
#define CFG_CFGPCLKGEN1_Msk                   _UINT32_(0xFFFFFFFF)                                 /* (CFG_CFGPCLKGEN1) Register Mask  */


/* -------- CFG_CFGPCLKGEN1CLR : (CFG Offset: 0x84) (R/W 32) Bit clear register -------- */
#define CFG_CFGPCLKGEN1CLR_RESETVALUE         _UINT32_(0x00)                                       /*  (CFG_CFGPCLKGEN1CLR) Bit clear register  Reset Value */

#define CFG_CFGPCLKGEN1CLR_Msk                _UINT32_(0x00000000)                                 /* (CFG_CFGPCLKGEN1CLR) Register Mask  */


/* -------- CFG_CFGPCLKGEN1SET : (CFG Offset: 0x88) (R/W 32) Bit set register -------- */
#define CFG_CFGPCLKGEN1SET_RESETVALUE         _UINT32_(0x00)                                       /*  (CFG_CFGPCLKGEN1SET) Bit set register  Reset Value */

#define CFG_CFGPCLKGEN1SET_Msk                _UINT32_(0x00000000)                                 /* (CFG_CFGPCLKGEN1SET) Register Mask  */


/* -------- CFG_CFGPCLKGEN1INV : (CFG Offset: 0x8C) (R/W 32) Bit invert register -------- */
#define CFG_CFGPCLKGEN1INV_RESETVALUE         _UINT32_(0x00)                                       /*  (CFG_CFGPCLKGEN1INV) Bit invert register  Reset Value */

#define CFG_CFGPCLKGEN1INV_Msk                _UINT32_(0x00000000)                                 /* (CFG_CFGPCLKGEN1INV) Register Mask  */


/* -------- CFG_CFGPCLKGEN2 : (CFG Offset: 0x90) (R/W 32)  -------- */
#define CFG_CFGPCLKGEN2_RESETVALUE            _UINT32_(0x00)                                       /*  (CFG_CFGPCLKGEN2)   Reset Value */

#define CFG_CFGPCLKGEN2_EVSYS_1_CSEL_Pos      _UINT32_(0)                                          /* (CFG_CFGPCLKGEN2) EVSYSC1 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN2_EVSYS_1_CSEL_Msk      (_UINT32_(0x7) << CFG_CFGPCLKGEN2_EVSYS_1_CSEL_Pos)  /* (CFG_CFGPCLKGEN2) EVSYSC1 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN2_EVSYS_1_CSEL(value)   (CFG_CFGPCLKGEN2_EVSYS_1_CSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN2_EVSYS_1_CSEL_Pos)) /* Assignment of value for EVSYS_1_CSEL in the CFG_CFGPCLKGEN2 register */
#define   CFG_CFGPCLKGEN2_EVSYS_1_CSEL_NO_CLK_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN2) No Clock  */
#define   CFG_CFGPCLKGEN2_EVSYS_1_CSEL_REFO1_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 1  */
#define   CFG_CFGPCLKGEN2_EVSYS_1_CSEL_REFO2_Val _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 2  */
#define   CFG_CFGPCLKGEN2_EVSYS_1_CSEL_REFO3_Val _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 3  */
#define   CFG_CFGPCLKGEN2_EVSYS_1_CSEL_REFO4_Val _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 4  */
#define   CFG_CFGPCLKGEN2_EVSYS_1_CSEL_REFO5_Val _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 5  */
#define   CFG_CFGPCLKGEN2_EVSYS_1_CSEL_REFO6_Val _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 6  */
#define   CFG_CFGPCLKGEN2_EVSYS_1_CSEL_LPCLK_Val _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN2_EVSYS_1_CSEL_NO_CLK   (CFG_CFGPCLKGEN2_EVSYS_1_CSEL_NO_CLK_Val << CFG_CFGPCLKGEN2_EVSYS_1_CSEL_Pos) /* (CFG_CFGPCLKGEN2) No Clock Position */
#define CFG_CFGPCLKGEN2_EVSYS_1_CSEL_REFO1    (CFG_CFGPCLKGEN2_EVSYS_1_CSEL_REFO1_Val << CFG_CFGPCLKGEN2_EVSYS_1_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN2_EVSYS_1_CSEL_REFO2    (CFG_CFGPCLKGEN2_EVSYS_1_CSEL_REFO2_Val << CFG_CFGPCLKGEN2_EVSYS_1_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN2_EVSYS_1_CSEL_REFO3    (CFG_CFGPCLKGEN2_EVSYS_1_CSEL_REFO3_Val << CFG_CFGPCLKGEN2_EVSYS_1_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN2_EVSYS_1_CSEL_REFO4    (CFG_CFGPCLKGEN2_EVSYS_1_CSEL_REFO4_Val << CFG_CFGPCLKGEN2_EVSYS_1_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN2_EVSYS_1_CSEL_REFO5    (CFG_CFGPCLKGEN2_EVSYS_1_CSEL_REFO5_Val << CFG_CFGPCLKGEN2_EVSYS_1_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN2_EVSYS_1_CSEL_REFO6    (CFG_CFGPCLKGEN2_EVSYS_1_CSEL_REFO6_Val << CFG_CFGPCLKGEN2_EVSYS_1_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN2_EVSYS_1_CSEL_LPCLK    (CFG_CFGPCLKGEN2_EVSYS_1_CSEL_LPCLK_Val << CFG_CFGPCLKGEN2_EVSYS_1_CSEL_Pos) /* (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN2_EVSYS_1_CD_Pos        _UINT32_(3)                                          /* (CFG_CFGPCLKGEN2) EVSYSC1 Clock Disable Position */
#define CFG_CFGPCLKGEN2_EVSYS_1_CD_Msk        (_UINT32_(0x1) << CFG_CFGPCLKGEN2_EVSYS_1_CD_Pos)    /* (CFG_CFGPCLKGEN2) EVSYSC1 Clock Disable Mask */
#define CFG_CFGPCLKGEN2_EVSYS_1_CD(value)     (CFG_CFGPCLKGEN2_EVSYS_1_CD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN2_EVSYS_1_CD_Pos)) /* Assignment of value for EVSYS_1_CD in the CFG_CFGPCLKGEN2 register */
#define   CFG_CFGPCLKGEN2_EVSYS_1_CD_ON_Val   _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN2) Enable PGCLK  */
#define   CFG_CFGPCLKGEN2_EVSYS_1_CD_OFF_Val  _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN2) Disable PGCLK  */
#define CFG_CFGPCLKGEN2_EVSYS_1_CD_ON         (CFG_CFGPCLKGEN2_EVSYS_1_CD_ON_Val << CFG_CFGPCLKGEN2_EVSYS_1_CD_Pos) /* (CFG_CFGPCLKGEN2) Enable PGCLK Position */
#define CFG_CFGPCLKGEN2_EVSYS_1_CD_OFF        (CFG_CFGPCLKGEN2_EVSYS_1_CD_OFF_Val << CFG_CFGPCLKGEN2_EVSYS_1_CD_Pos) /* (CFG_CFGPCLKGEN2) Disable PGCLK Position */
#define CFG_CFGPCLKGEN2_EVSYS_2_CSEL_Pos      _UINT32_(4)                                          /* (CFG_CFGPCLKGEN2) EVSYSC2 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN2_EVSYS_2_CSEL_Msk      (_UINT32_(0x7) << CFG_CFGPCLKGEN2_EVSYS_2_CSEL_Pos)  /* (CFG_CFGPCLKGEN2) EVSYSC2 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN2_EVSYS_2_CSEL(value)   (CFG_CFGPCLKGEN2_EVSYS_2_CSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN2_EVSYS_2_CSEL_Pos)) /* Assignment of value for EVSYS_2_CSEL in the CFG_CFGPCLKGEN2 register */
#define   CFG_CFGPCLKGEN2_EVSYS_2_CSEL_NO_CLK_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN2) No Clock  */
#define   CFG_CFGPCLKGEN2_EVSYS_2_CSEL_REFO1_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 1  */
#define   CFG_CFGPCLKGEN2_EVSYS_2_CSEL_REFO2_Val _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 2  */
#define   CFG_CFGPCLKGEN2_EVSYS_2_CSEL_REFO3_Val _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 3  */
#define   CFG_CFGPCLKGEN2_EVSYS_2_CSEL_REFO4_Val _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 4  */
#define   CFG_CFGPCLKGEN2_EVSYS_2_CSEL_REFO5_Val _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 5  */
#define   CFG_CFGPCLKGEN2_EVSYS_2_CSEL_REFO6_Val _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 6  */
#define   CFG_CFGPCLKGEN2_EVSYS_2_CSEL_LPCLK_Val _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN2_EVSYS_2_CSEL_NO_CLK   (CFG_CFGPCLKGEN2_EVSYS_2_CSEL_NO_CLK_Val << CFG_CFGPCLKGEN2_EVSYS_2_CSEL_Pos) /* (CFG_CFGPCLKGEN2) No Clock Position */
#define CFG_CFGPCLKGEN2_EVSYS_2_CSEL_REFO1    (CFG_CFGPCLKGEN2_EVSYS_2_CSEL_REFO1_Val << CFG_CFGPCLKGEN2_EVSYS_2_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN2_EVSYS_2_CSEL_REFO2    (CFG_CFGPCLKGEN2_EVSYS_2_CSEL_REFO2_Val << CFG_CFGPCLKGEN2_EVSYS_2_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN2_EVSYS_2_CSEL_REFO3    (CFG_CFGPCLKGEN2_EVSYS_2_CSEL_REFO3_Val << CFG_CFGPCLKGEN2_EVSYS_2_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN2_EVSYS_2_CSEL_REFO4    (CFG_CFGPCLKGEN2_EVSYS_2_CSEL_REFO4_Val << CFG_CFGPCLKGEN2_EVSYS_2_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN2_EVSYS_2_CSEL_REFO5    (CFG_CFGPCLKGEN2_EVSYS_2_CSEL_REFO5_Val << CFG_CFGPCLKGEN2_EVSYS_2_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN2_EVSYS_2_CSEL_REFO6    (CFG_CFGPCLKGEN2_EVSYS_2_CSEL_REFO6_Val << CFG_CFGPCLKGEN2_EVSYS_2_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN2_EVSYS_2_CSEL_LPCLK    (CFG_CFGPCLKGEN2_EVSYS_2_CSEL_LPCLK_Val << CFG_CFGPCLKGEN2_EVSYS_2_CSEL_Pos) /* (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN2_EVSYS_2_CD_Pos        _UINT32_(7)                                          /* (CFG_CFGPCLKGEN2) EVSYSC2 Clock Disable Position */
#define CFG_CFGPCLKGEN2_EVSYS_2_CD_Msk        (_UINT32_(0x1) << CFG_CFGPCLKGEN2_EVSYS_2_CD_Pos)    /* (CFG_CFGPCLKGEN2) EVSYSC2 Clock Disable Mask */
#define CFG_CFGPCLKGEN2_EVSYS_2_CD(value)     (CFG_CFGPCLKGEN2_EVSYS_2_CD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN2_EVSYS_2_CD_Pos)) /* Assignment of value for EVSYS_2_CD in the CFG_CFGPCLKGEN2 register */
#define   CFG_CFGPCLKGEN2_EVSYS_2_CD_ON_Val   _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN2) Enable PGCLK  */
#define   CFG_CFGPCLKGEN2_EVSYS_2_CD_OFF_Val  _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN2) Disable PGCLK  */
#define CFG_CFGPCLKGEN2_EVSYS_2_CD_ON         (CFG_CFGPCLKGEN2_EVSYS_2_CD_ON_Val << CFG_CFGPCLKGEN2_EVSYS_2_CD_Pos) /* (CFG_CFGPCLKGEN2) Enable PGCLK Position */
#define CFG_CFGPCLKGEN2_EVSYS_2_CD_OFF        (CFG_CFGPCLKGEN2_EVSYS_2_CD_OFF_Val << CFG_CFGPCLKGEN2_EVSYS_2_CD_Pos) /* (CFG_CFGPCLKGEN2) Disable PGCLK Position */
#define CFG_CFGPCLKGEN2_EVSYS_3_CSEL_Pos      _UINT32_(8)                                          /* (CFG_CFGPCLKGEN2) EVSYSC3 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN2_EVSYS_3_CSEL_Msk      (_UINT32_(0x7) << CFG_CFGPCLKGEN2_EVSYS_3_CSEL_Pos)  /* (CFG_CFGPCLKGEN2) EVSYSC3 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN2_EVSYS_3_CSEL(value)   (CFG_CFGPCLKGEN2_EVSYS_3_CSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN2_EVSYS_3_CSEL_Pos)) /* Assignment of value for EVSYS_3_CSEL in the CFG_CFGPCLKGEN2 register */
#define   CFG_CFGPCLKGEN2_EVSYS_3_CSEL_NO_CLK_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN2) No Clock  */
#define   CFG_CFGPCLKGEN2_EVSYS_3_CSEL_REFO1_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 1  */
#define   CFG_CFGPCLKGEN2_EVSYS_3_CSEL_REFO2_Val _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 2  */
#define   CFG_CFGPCLKGEN2_EVSYS_3_CSEL_REFO3_Val _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 3  */
#define   CFG_CFGPCLKGEN2_EVSYS_3_CSEL_REFO4_Val _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 4  */
#define   CFG_CFGPCLKGEN2_EVSYS_3_CSEL_REFO5_Val _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 5  */
#define   CFG_CFGPCLKGEN2_EVSYS_3_CSEL_REFO6_Val _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 6  */
#define   CFG_CFGPCLKGEN2_EVSYS_3_CSEL_LPCLK_Val _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN2_EVSYS_3_CSEL_NO_CLK   (CFG_CFGPCLKGEN2_EVSYS_3_CSEL_NO_CLK_Val << CFG_CFGPCLKGEN2_EVSYS_3_CSEL_Pos) /* (CFG_CFGPCLKGEN2) No Clock Position */
#define CFG_CFGPCLKGEN2_EVSYS_3_CSEL_REFO1    (CFG_CFGPCLKGEN2_EVSYS_3_CSEL_REFO1_Val << CFG_CFGPCLKGEN2_EVSYS_3_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN2_EVSYS_3_CSEL_REFO2    (CFG_CFGPCLKGEN2_EVSYS_3_CSEL_REFO2_Val << CFG_CFGPCLKGEN2_EVSYS_3_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN2_EVSYS_3_CSEL_REFO3    (CFG_CFGPCLKGEN2_EVSYS_3_CSEL_REFO3_Val << CFG_CFGPCLKGEN2_EVSYS_3_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN2_EVSYS_3_CSEL_REFO4    (CFG_CFGPCLKGEN2_EVSYS_3_CSEL_REFO4_Val << CFG_CFGPCLKGEN2_EVSYS_3_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN2_EVSYS_3_CSEL_REFO5    (CFG_CFGPCLKGEN2_EVSYS_3_CSEL_REFO5_Val << CFG_CFGPCLKGEN2_EVSYS_3_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN2_EVSYS_3_CSEL_REFO6    (CFG_CFGPCLKGEN2_EVSYS_3_CSEL_REFO6_Val << CFG_CFGPCLKGEN2_EVSYS_3_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN2_EVSYS_3_CSEL_LPCLK    (CFG_CFGPCLKGEN2_EVSYS_3_CSEL_LPCLK_Val << CFG_CFGPCLKGEN2_EVSYS_3_CSEL_Pos) /* (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN2_EVSYS_3_CD_Pos        _UINT32_(11)                                         /* (CFG_CFGPCLKGEN2) EVSYSC3 Clock Disable Position */
#define CFG_CFGPCLKGEN2_EVSYS_3_CD_Msk        (_UINT32_(0x1) << CFG_CFGPCLKGEN2_EVSYS_3_CD_Pos)    /* (CFG_CFGPCLKGEN2) EVSYSC3 Clock Disable Mask */
#define CFG_CFGPCLKGEN2_EVSYS_3_CD(value)     (CFG_CFGPCLKGEN2_EVSYS_3_CD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN2_EVSYS_3_CD_Pos)) /* Assignment of value for EVSYS_3_CD in the CFG_CFGPCLKGEN2 register */
#define   CFG_CFGPCLKGEN2_EVSYS_3_CD_ON_Val   _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN2) Enable PGCLK  */
#define   CFG_CFGPCLKGEN2_EVSYS_3_CD_OFF_Val  _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN2) Disable PGCLK  */
#define CFG_CFGPCLKGEN2_EVSYS_3_CD_ON         (CFG_CFGPCLKGEN2_EVSYS_3_CD_ON_Val << CFG_CFGPCLKGEN2_EVSYS_3_CD_Pos) /* (CFG_CFGPCLKGEN2) Enable PGCLK Position */
#define CFG_CFGPCLKGEN2_EVSYS_3_CD_OFF        (CFG_CFGPCLKGEN2_EVSYS_3_CD_OFF_Val << CFG_CFGPCLKGEN2_EVSYS_3_CD_Pos) /* (CFG_CFGPCLKGEN2) Disable PGCLK Position */
#define CFG_CFGPCLKGEN2_EVSYS_4_CSEL_Pos      _UINT32_(12)                                         /* (CFG_CFGPCLKGEN2) EVSYSC4 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN2_EVSYS_4_CSEL_Msk      (_UINT32_(0x7) << CFG_CFGPCLKGEN2_EVSYS_4_CSEL_Pos)  /* (CFG_CFGPCLKGEN2) EVSYSC4 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN2_EVSYS_4_CSEL(value)   (CFG_CFGPCLKGEN2_EVSYS_4_CSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN2_EVSYS_4_CSEL_Pos)) /* Assignment of value for EVSYS_4_CSEL in the CFG_CFGPCLKGEN2 register */
#define   CFG_CFGPCLKGEN2_EVSYS_4_CSEL_NO_CLK_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN2) No Clock  */
#define   CFG_CFGPCLKGEN2_EVSYS_4_CSEL_REFO1_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 1  */
#define   CFG_CFGPCLKGEN2_EVSYS_4_CSEL_REFO2_Val _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 2  */
#define   CFG_CFGPCLKGEN2_EVSYS_4_CSEL_REFO3_Val _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 3  */
#define   CFG_CFGPCLKGEN2_EVSYS_4_CSEL_REFO4_Val _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 4  */
#define   CFG_CFGPCLKGEN2_EVSYS_4_CSEL_REFO5_Val _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 5  */
#define   CFG_CFGPCLKGEN2_EVSYS_4_CSEL_REFO6_Val _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 6  */
#define   CFG_CFGPCLKGEN2_EVSYS_4_CSEL_LPCLK_Val _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN2_EVSYS_4_CSEL_NO_CLK   (CFG_CFGPCLKGEN2_EVSYS_4_CSEL_NO_CLK_Val << CFG_CFGPCLKGEN2_EVSYS_4_CSEL_Pos) /* (CFG_CFGPCLKGEN2) No Clock Position */
#define CFG_CFGPCLKGEN2_EVSYS_4_CSEL_REFO1    (CFG_CFGPCLKGEN2_EVSYS_4_CSEL_REFO1_Val << CFG_CFGPCLKGEN2_EVSYS_4_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN2_EVSYS_4_CSEL_REFO2    (CFG_CFGPCLKGEN2_EVSYS_4_CSEL_REFO2_Val << CFG_CFGPCLKGEN2_EVSYS_4_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN2_EVSYS_4_CSEL_REFO3    (CFG_CFGPCLKGEN2_EVSYS_4_CSEL_REFO3_Val << CFG_CFGPCLKGEN2_EVSYS_4_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN2_EVSYS_4_CSEL_REFO4    (CFG_CFGPCLKGEN2_EVSYS_4_CSEL_REFO4_Val << CFG_CFGPCLKGEN2_EVSYS_4_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN2_EVSYS_4_CSEL_REFO5    (CFG_CFGPCLKGEN2_EVSYS_4_CSEL_REFO5_Val << CFG_CFGPCLKGEN2_EVSYS_4_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN2_EVSYS_4_CSEL_REFO6    (CFG_CFGPCLKGEN2_EVSYS_4_CSEL_REFO6_Val << CFG_CFGPCLKGEN2_EVSYS_4_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN2_EVSYS_4_CSEL_LPCLK    (CFG_CFGPCLKGEN2_EVSYS_4_CSEL_LPCLK_Val << CFG_CFGPCLKGEN2_EVSYS_4_CSEL_Pos) /* (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN2_EVSYS_4_CD_Pos        _UINT32_(15)                                         /* (CFG_CFGPCLKGEN2) EVSYSC4 Clock Disable Position */
#define CFG_CFGPCLKGEN2_EVSYS_4_CD_Msk        (_UINT32_(0x1) << CFG_CFGPCLKGEN2_EVSYS_4_CD_Pos)    /* (CFG_CFGPCLKGEN2) EVSYSC4 Clock Disable Mask */
#define CFG_CFGPCLKGEN2_EVSYS_4_CD(value)     (CFG_CFGPCLKGEN2_EVSYS_4_CD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN2_EVSYS_4_CD_Pos)) /* Assignment of value for EVSYS_4_CD in the CFG_CFGPCLKGEN2 register */
#define   CFG_CFGPCLKGEN2_EVSYS_4_CD_ON_Val   _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN2) Enable PGCLK  */
#define   CFG_CFGPCLKGEN2_EVSYS_4_CD_OFF_Val  _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN2) Disable PGCLK  */
#define CFG_CFGPCLKGEN2_EVSYS_4_CD_ON         (CFG_CFGPCLKGEN2_EVSYS_4_CD_ON_Val << CFG_CFGPCLKGEN2_EVSYS_4_CD_Pos) /* (CFG_CFGPCLKGEN2) Enable PGCLK Position */
#define CFG_CFGPCLKGEN2_EVSYS_4_CD_OFF        (CFG_CFGPCLKGEN2_EVSYS_4_CD_OFF_Val << CFG_CFGPCLKGEN2_EVSYS_4_CD_Pos) /* (CFG_CFGPCLKGEN2) Disable PGCLK Position */
#define CFG_CFGPCLKGEN2_EVSYS_5_CSEL_Pos      _UINT32_(16)                                         /* (CFG_CFGPCLKGEN2) EVSYSC5 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN2_EVSYS_5_CSEL_Msk      (_UINT32_(0x7) << CFG_CFGPCLKGEN2_EVSYS_5_CSEL_Pos)  /* (CFG_CFGPCLKGEN2) EVSYSC5 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN2_EVSYS_5_CSEL(value)   (CFG_CFGPCLKGEN2_EVSYS_5_CSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN2_EVSYS_5_CSEL_Pos)) /* Assignment of value for EVSYS_5_CSEL in the CFG_CFGPCLKGEN2 register */
#define   CFG_CFGPCLKGEN2_EVSYS_5_CSEL_NO_CLK_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN2) No Clock  */
#define   CFG_CFGPCLKGEN2_EVSYS_5_CSEL_REFO1_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 1  */
#define   CFG_CFGPCLKGEN2_EVSYS_5_CSEL_REFO2_Val _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 2  */
#define   CFG_CFGPCLKGEN2_EVSYS_5_CSEL_REFO3_Val _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 3  */
#define   CFG_CFGPCLKGEN2_EVSYS_5_CSEL_REFO4_Val _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 4  */
#define   CFG_CFGPCLKGEN2_EVSYS_5_CSEL_REFO5_Val _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 5  */
#define   CFG_CFGPCLKGEN2_EVSYS_5_CSEL_REFO6_Val _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 6  */
#define   CFG_CFGPCLKGEN2_EVSYS_5_CSEL_LPCLK_Val _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN2_EVSYS_5_CSEL_NO_CLK   (CFG_CFGPCLKGEN2_EVSYS_5_CSEL_NO_CLK_Val << CFG_CFGPCLKGEN2_EVSYS_5_CSEL_Pos) /* (CFG_CFGPCLKGEN2) No Clock Position */
#define CFG_CFGPCLKGEN2_EVSYS_5_CSEL_REFO1    (CFG_CFGPCLKGEN2_EVSYS_5_CSEL_REFO1_Val << CFG_CFGPCLKGEN2_EVSYS_5_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN2_EVSYS_5_CSEL_REFO2    (CFG_CFGPCLKGEN2_EVSYS_5_CSEL_REFO2_Val << CFG_CFGPCLKGEN2_EVSYS_5_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN2_EVSYS_5_CSEL_REFO3    (CFG_CFGPCLKGEN2_EVSYS_5_CSEL_REFO3_Val << CFG_CFGPCLKGEN2_EVSYS_5_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN2_EVSYS_5_CSEL_REFO4    (CFG_CFGPCLKGEN2_EVSYS_5_CSEL_REFO4_Val << CFG_CFGPCLKGEN2_EVSYS_5_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN2_EVSYS_5_CSEL_REFO5    (CFG_CFGPCLKGEN2_EVSYS_5_CSEL_REFO5_Val << CFG_CFGPCLKGEN2_EVSYS_5_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN2_EVSYS_5_CSEL_REFO6    (CFG_CFGPCLKGEN2_EVSYS_5_CSEL_REFO6_Val << CFG_CFGPCLKGEN2_EVSYS_5_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN2_EVSYS_5_CSEL_LPCLK    (CFG_CFGPCLKGEN2_EVSYS_5_CSEL_LPCLK_Val << CFG_CFGPCLKGEN2_EVSYS_5_CSEL_Pos) /* (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN2_EVSYS_5_CD_Pos        _UINT32_(19)                                         /* (CFG_CFGPCLKGEN2) EVSYSC5 Clock Disable Position */
#define CFG_CFGPCLKGEN2_EVSYS_5_CD_Msk        (_UINT32_(0x1) << CFG_CFGPCLKGEN2_EVSYS_5_CD_Pos)    /* (CFG_CFGPCLKGEN2) EVSYSC5 Clock Disable Mask */
#define CFG_CFGPCLKGEN2_EVSYS_5_CD(value)     (CFG_CFGPCLKGEN2_EVSYS_5_CD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN2_EVSYS_5_CD_Pos)) /* Assignment of value for EVSYS_5_CD in the CFG_CFGPCLKGEN2 register */
#define   CFG_CFGPCLKGEN2_EVSYS_5_CD_ON_Val   _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN2) Enable PGCLK  */
#define   CFG_CFGPCLKGEN2_EVSYS_5_CD_OFF_Val  _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN2) Disable PGCLK  */
#define CFG_CFGPCLKGEN2_EVSYS_5_CD_ON         (CFG_CFGPCLKGEN2_EVSYS_5_CD_ON_Val << CFG_CFGPCLKGEN2_EVSYS_5_CD_Pos) /* (CFG_CFGPCLKGEN2) Enable PGCLK Position */
#define CFG_CFGPCLKGEN2_EVSYS_5_CD_OFF        (CFG_CFGPCLKGEN2_EVSYS_5_CD_OFF_Val << CFG_CFGPCLKGEN2_EVSYS_5_CD_Pos) /* (CFG_CFGPCLKGEN2) Disable PGCLK Position */
#define CFG_CFGPCLKGEN2_EVSYS_6_CSEL_Pos      _UINT32_(20)                                         /* (CFG_CFGPCLKGEN2) EVSYSC6 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN2_EVSYS_6_CSEL_Msk      (_UINT32_(0x7) << CFG_CFGPCLKGEN2_EVSYS_6_CSEL_Pos)  /* (CFG_CFGPCLKGEN2) EVSYSC6 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN2_EVSYS_6_CSEL(value)   (CFG_CFGPCLKGEN2_EVSYS_6_CSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN2_EVSYS_6_CSEL_Pos)) /* Assignment of value for EVSYS_6_CSEL in the CFG_CFGPCLKGEN2 register */
#define   CFG_CFGPCLKGEN2_EVSYS_6_CSEL_NO_CLK_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN2) No Clock  */
#define   CFG_CFGPCLKGEN2_EVSYS_6_CSEL_REFO1_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 1  */
#define   CFG_CFGPCLKGEN2_EVSYS_6_CSEL_REFO2_Val _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 2  */
#define   CFG_CFGPCLKGEN2_EVSYS_6_CSEL_REFO3_Val _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 3  */
#define   CFG_CFGPCLKGEN2_EVSYS_6_CSEL_REFO4_Val _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 4  */
#define   CFG_CFGPCLKGEN2_EVSYS_6_CSEL_REFO5_Val _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 5  */
#define   CFG_CFGPCLKGEN2_EVSYS_6_CSEL_REFO6_Val _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 6  */
#define   CFG_CFGPCLKGEN2_EVSYS_6_CSEL_LPCLK_Val _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN2_EVSYS_6_CSEL_NO_CLK   (CFG_CFGPCLKGEN2_EVSYS_6_CSEL_NO_CLK_Val << CFG_CFGPCLKGEN2_EVSYS_6_CSEL_Pos) /* (CFG_CFGPCLKGEN2) No Clock Position */
#define CFG_CFGPCLKGEN2_EVSYS_6_CSEL_REFO1    (CFG_CFGPCLKGEN2_EVSYS_6_CSEL_REFO1_Val << CFG_CFGPCLKGEN2_EVSYS_6_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN2_EVSYS_6_CSEL_REFO2    (CFG_CFGPCLKGEN2_EVSYS_6_CSEL_REFO2_Val << CFG_CFGPCLKGEN2_EVSYS_6_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN2_EVSYS_6_CSEL_REFO3    (CFG_CFGPCLKGEN2_EVSYS_6_CSEL_REFO3_Val << CFG_CFGPCLKGEN2_EVSYS_6_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN2_EVSYS_6_CSEL_REFO4    (CFG_CFGPCLKGEN2_EVSYS_6_CSEL_REFO4_Val << CFG_CFGPCLKGEN2_EVSYS_6_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN2_EVSYS_6_CSEL_REFO5    (CFG_CFGPCLKGEN2_EVSYS_6_CSEL_REFO5_Val << CFG_CFGPCLKGEN2_EVSYS_6_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN2_EVSYS_6_CSEL_REFO6    (CFG_CFGPCLKGEN2_EVSYS_6_CSEL_REFO6_Val << CFG_CFGPCLKGEN2_EVSYS_6_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN2_EVSYS_6_CSEL_LPCLK    (CFG_CFGPCLKGEN2_EVSYS_6_CSEL_LPCLK_Val << CFG_CFGPCLKGEN2_EVSYS_6_CSEL_Pos) /* (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN2_EVSYS_6_CD_Pos        _UINT32_(23)                                         /* (CFG_CFGPCLKGEN2) EVSYSC6 Clock Disable Position */
#define CFG_CFGPCLKGEN2_EVSYS_6_CD_Msk        (_UINT32_(0x1) << CFG_CFGPCLKGEN2_EVSYS_6_CD_Pos)    /* (CFG_CFGPCLKGEN2) EVSYSC6 Clock Disable Mask */
#define CFG_CFGPCLKGEN2_EVSYS_6_CD(value)     (CFG_CFGPCLKGEN2_EVSYS_6_CD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN2_EVSYS_6_CD_Pos)) /* Assignment of value for EVSYS_6_CD in the CFG_CFGPCLKGEN2 register */
#define   CFG_CFGPCLKGEN2_EVSYS_6_CD_ON_Val   _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN2) Enable PGCLK  */
#define   CFG_CFGPCLKGEN2_EVSYS_6_CD_OFF_Val  _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN2) Disable PGCLK  */
#define CFG_CFGPCLKGEN2_EVSYS_6_CD_ON         (CFG_CFGPCLKGEN2_EVSYS_6_CD_ON_Val << CFG_CFGPCLKGEN2_EVSYS_6_CD_Pos) /* (CFG_CFGPCLKGEN2) Enable PGCLK Position */
#define CFG_CFGPCLKGEN2_EVSYS_6_CD_OFF        (CFG_CFGPCLKGEN2_EVSYS_6_CD_OFF_Val << CFG_CFGPCLKGEN2_EVSYS_6_CD_Pos) /* (CFG_CFGPCLKGEN2) Disable PGCLK Position */
#define CFG_CFGPCLKGEN2_EVSYS_7_CSEL_Pos      _UINT32_(24)                                         /* (CFG_CFGPCLKGEN2) EVSYSC7 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN2_EVSYS_7_CSEL_Msk      (_UINT32_(0x7) << CFG_CFGPCLKGEN2_EVSYS_7_CSEL_Pos)  /* (CFG_CFGPCLKGEN2) EVSYSC7 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN2_EVSYS_7_CSEL(value)   (CFG_CFGPCLKGEN2_EVSYS_7_CSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN2_EVSYS_7_CSEL_Pos)) /* Assignment of value for EVSYS_7_CSEL in the CFG_CFGPCLKGEN2 register */
#define   CFG_CFGPCLKGEN2_EVSYS_7_CSEL_NO_CLK_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN2) No Clock  */
#define   CFG_CFGPCLKGEN2_EVSYS_7_CSEL_REFO1_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 1  */
#define   CFG_CFGPCLKGEN2_EVSYS_7_CSEL_REFO2_Val _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 2  */
#define   CFG_CFGPCLKGEN2_EVSYS_7_CSEL_REFO3_Val _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 3  */
#define   CFG_CFGPCLKGEN2_EVSYS_7_CSEL_REFO4_Val _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 4  */
#define   CFG_CFGPCLKGEN2_EVSYS_7_CSEL_REFO5_Val _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 5  */
#define   CFG_CFGPCLKGEN2_EVSYS_7_CSEL_REFO6_Val _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 6  */
#define   CFG_CFGPCLKGEN2_EVSYS_7_CSEL_LPCLK_Val _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN2_EVSYS_7_CSEL_NO_CLK   (CFG_CFGPCLKGEN2_EVSYS_7_CSEL_NO_CLK_Val << CFG_CFGPCLKGEN2_EVSYS_7_CSEL_Pos) /* (CFG_CFGPCLKGEN2) No Clock Position */
#define CFG_CFGPCLKGEN2_EVSYS_7_CSEL_REFO1    (CFG_CFGPCLKGEN2_EVSYS_7_CSEL_REFO1_Val << CFG_CFGPCLKGEN2_EVSYS_7_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN2_EVSYS_7_CSEL_REFO2    (CFG_CFGPCLKGEN2_EVSYS_7_CSEL_REFO2_Val << CFG_CFGPCLKGEN2_EVSYS_7_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN2_EVSYS_7_CSEL_REFO3    (CFG_CFGPCLKGEN2_EVSYS_7_CSEL_REFO3_Val << CFG_CFGPCLKGEN2_EVSYS_7_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN2_EVSYS_7_CSEL_REFO4    (CFG_CFGPCLKGEN2_EVSYS_7_CSEL_REFO4_Val << CFG_CFGPCLKGEN2_EVSYS_7_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN2_EVSYS_7_CSEL_REFO5    (CFG_CFGPCLKGEN2_EVSYS_7_CSEL_REFO5_Val << CFG_CFGPCLKGEN2_EVSYS_7_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN2_EVSYS_7_CSEL_REFO6    (CFG_CFGPCLKGEN2_EVSYS_7_CSEL_REFO6_Val << CFG_CFGPCLKGEN2_EVSYS_7_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN2_EVSYS_7_CSEL_LPCLK    (CFG_CFGPCLKGEN2_EVSYS_7_CSEL_LPCLK_Val << CFG_CFGPCLKGEN2_EVSYS_7_CSEL_Pos) /* (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN2_EVSYS_7_CD_Pos        _UINT32_(27)                                         /* (CFG_CFGPCLKGEN2) EVSYSC7 Clock Disable Position */
#define CFG_CFGPCLKGEN2_EVSYS_7_CD_Msk        (_UINT32_(0x1) << CFG_CFGPCLKGEN2_EVSYS_7_CD_Pos)    /* (CFG_CFGPCLKGEN2) EVSYSC7 Clock Disable Mask */
#define CFG_CFGPCLKGEN2_EVSYS_7_CD(value)     (CFG_CFGPCLKGEN2_EVSYS_7_CD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN2_EVSYS_7_CD_Pos)) /* Assignment of value for EVSYS_7_CD in the CFG_CFGPCLKGEN2 register */
#define   CFG_CFGPCLKGEN2_EVSYS_7_CD_ON_Val   _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN2) Enable PGCLK  */
#define   CFG_CFGPCLKGEN2_EVSYS_7_CD_OFF_Val  _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN2) Disable PGCLK  */
#define CFG_CFGPCLKGEN2_EVSYS_7_CD_ON         (CFG_CFGPCLKGEN2_EVSYS_7_CD_ON_Val << CFG_CFGPCLKGEN2_EVSYS_7_CD_Pos) /* (CFG_CFGPCLKGEN2) Enable PGCLK Position */
#define CFG_CFGPCLKGEN2_EVSYS_7_CD_OFF        (CFG_CFGPCLKGEN2_EVSYS_7_CD_OFF_Val << CFG_CFGPCLKGEN2_EVSYS_7_CD_Pos) /* (CFG_CFGPCLKGEN2) Disable PGCLK Position */
#define CFG_CFGPCLKGEN2_EVSYS_8_CSEL_Pos      _UINT32_(28)                                         /* (CFG_CFGPCLKGEN2) EVSYSC8 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN2_EVSYS_8_CSEL_Msk      (_UINT32_(0x7) << CFG_CFGPCLKGEN2_EVSYS_8_CSEL_Pos)  /* (CFG_CFGPCLKGEN2) EVSYSC8 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN2_EVSYS_8_CSEL(value)   (CFG_CFGPCLKGEN2_EVSYS_8_CSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN2_EVSYS_8_CSEL_Pos)) /* Assignment of value for EVSYS_8_CSEL in the CFG_CFGPCLKGEN2 register */
#define   CFG_CFGPCLKGEN2_EVSYS_8_CSEL_NO_CLK_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN2) No Clock  */
#define   CFG_CFGPCLKGEN2_EVSYS_8_CSEL_REFO1_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 1  */
#define   CFG_CFGPCLKGEN2_EVSYS_8_CSEL_REFO2_Val _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 2  */
#define   CFG_CFGPCLKGEN2_EVSYS_8_CSEL_REFO3_Val _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 3  */
#define   CFG_CFGPCLKGEN2_EVSYS_8_CSEL_REFO4_Val _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 4  */
#define   CFG_CFGPCLKGEN2_EVSYS_8_CSEL_REFO5_Val _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 5  */
#define   CFG_CFGPCLKGEN2_EVSYS_8_CSEL_REFO6_Val _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN2) Reference Clock 6  */
#define   CFG_CFGPCLKGEN2_EVSYS_8_CSEL_LPCLK_Val _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN2_EVSYS_8_CSEL_NO_CLK   (CFG_CFGPCLKGEN2_EVSYS_8_CSEL_NO_CLK_Val << CFG_CFGPCLKGEN2_EVSYS_8_CSEL_Pos) /* (CFG_CFGPCLKGEN2) No Clock Position */
#define CFG_CFGPCLKGEN2_EVSYS_8_CSEL_REFO1    (CFG_CFGPCLKGEN2_EVSYS_8_CSEL_REFO1_Val << CFG_CFGPCLKGEN2_EVSYS_8_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN2_EVSYS_8_CSEL_REFO2    (CFG_CFGPCLKGEN2_EVSYS_8_CSEL_REFO2_Val << CFG_CFGPCLKGEN2_EVSYS_8_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN2_EVSYS_8_CSEL_REFO3    (CFG_CFGPCLKGEN2_EVSYS_8_CSEL_REFO3_Val << CFG_CFGPCLKGEN2_EVSYS_8_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN2_EVSYS_8_CSEL_REFO4    (CFG_CFGPCLKGEN2_EVSYS_8_CSEL_REFO4_Val << CFG_CFGPCLKGEN2_EVSYS_8_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN2_EVSYS_8_CSEL_REFO5    (CFG_CFGPCLKGEN2_EVSYS_8_CSEL_REFO5_Val << CFG_CFGPCLKGEN2_EVSYS_8_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN2_EVSYS_8_CSEL_REFO6    (CFG_CFGPCLKGEN2_EVSYS_8_CSEL_REFO6_Val << CFG_CFGPCLKGEN2_EVSYS_8_CSEL_Pos) /* (CFG_CFGPCLKGEN2) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN2_EVSYS_8_CSEL_LPCLK    (CFG_CFGPCLKGEN2_EVSYS_8_CSEL_LPCLK_Val << CFG_CFGPCLKGEN2_EVSYS_8_CSEL_Pos) /* (CFG_CFGPCLKGEN2) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN2_EVSYS_8_CD_Pos        _UINT32_(31)                                         /* (CFG_CFGPCLKGEN2) EVSYSC8 Clock Disable Position */
#define CFG_CFGPCLKGEN2_EVSYS_8_CD_Msk        (_UINT32_(0x1) << CFG_CFGPCLKGEN2_EVSYS_8_CD_Pos)    /* (CFG_CFGPCLKGEN2) EVSYSC8 Clock Disable Mask */
#define CFG_CFGPCLKGEN2_EVSYS_8_CD(value)     (CFG_CFGPCLKGEN2_EVSYS_8_CD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN2_EVSYS_8_CD_Pos)) /* Assignment of value for EVSYS_8_CD in the CFG_CFGPCLKGEN2 register */
#define   CFG_CFGPCLKGEN2_EVSYS_8_CD_ON_Val   _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN2) Enable PGCLK  */
#define   CFG_CFGPCLKGEN2_EVSYS_8_CD_OFF_Val  _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN2) Disable PGCLK  */
#define CFG_CFGPCLKGEN2_EVSYS_8_CD_ON         (CFG_CFGPCLKGEN2_EVSYS_8_CD_ON_Val << CFG_CFGPCLKGEN2_EVSYS_8_CD_Pos) /* (CFG_CFGPCLKGEN2) Enable PGCLK Position */
#define CFG_CFGPCLKGEN2_EVSYS_8_CD_OFF        (CFG_CFGPCLKGEN2_EVSYS_8_CD_OFF_Val << CFG_CFGPCLKGEN2_EVSYS_8_CD_Pos) /* (CFG_CFGPCLKGEN2) Disable PGCLK Position */
#define CFG_CFGPCLKGEN2_Msk                   _UINT32_(0xFFFFFFFF)                                 /* (CFG_CFGPCLKGEN2) Register Mask  */


/* -------- CFG_CFGPCLKGEN2CLR : (CFG Offset: 0x94) (R/W 32) Bit clear register -------- */
#define CFG_CFGPCLKGEN2CLR_RESETVALUE         _UINT32_(0x00)                                       /*  (CFG_CFGPCLKGEN2CLR) Bit clear register  Reset Value */

#define CFG_CFGPCLKGEN2CLR_Msk                _UINT32_(0x00000000)                                 /* (CFG_CFGPCLKGEN2CLR) Register Mask  */


/* -------- CFG_CFGPCLKGEN2SET : (CFG Offset: 0x98) (R/W 32) Bit set register -------- */
#define CFG_CFGPCLKGEN2SET_RESETVALUE         _UINT32_(0x00)                                       /*  (CFG_CFGPCLKGEN2SET) Bit set register  Reset Value */

#define CFG_CFGPCLKGEN2SET_Msk                _UINT32_(0x00000000)                                 /* (CFG_CFGPCLKGEN2SET) Register Mask  */


/* -------- CFG_CFGPCLKGEN2INV : (CFG Offset: 0x9C) (R/W 32) Bit invert register -------- */
#define CFG_CFGPCLKGEN2INV_RESETVALUE         _UINT32_(0x00)                                       /*  (CFG_CFGPCLKGEN2INV) Bit invert register  Reset Value */

#define CFG_CFGPCLKGEN2INV_Msk                _UINT32_(0x00000000)                                 /* (CFG_CFGPCLKGEN2INV) Register Mask  */


/* -------- CFG_CFGPCLKGEN3 : (CFG Offset: 0xA0) (R/W 32)  -------- */
#define CFG_CFGPCLKGEN3_RESETVALUE            _UINT32_(0x00)                                       /*  (CFG_CFGPCLKGEN3)   Reset Value */

#define CFG_CFGPCLKGEN3_EVSYS_9_CSEL_Pos      _UINT32_(0)                                          /* (CFG_CFGPCLKGEN3) EVSYSC9 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN3_EVSYS_9_CSEL_Msk      (_UINT32_(0x7) << CFG_CFGPCLKGEN3_EVSYS_9_CSEL_Pos)  /* (CFG_CFGPCLKGEN3) EVSYSC9 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN3_EVSYS_9_CSEL(value)   (CFG_CFGPCLKGEN3_EVSYS_9_CSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN3_EVSYS_9_CSEL_Pos)) /* Assignment of value for EVSYS_9_CSEL in the CFG_CFGPCLKGEN3 register */
#define   CFG_CFGPCLKGEN3_EVSYS_9_CSEL_NO_CLK_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN3) No Clock  */
#define   CFG_CFGPCLKGEN3_EVSYS_9_CSEL_REFO1_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 1  */
#define   CFG_CFGPCLKGEN3_EVSYS_9_CSEL_REFO2_Val _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 2  */
#define   CFG_CFGPCLKGEN3_EVSYS_9_CSEL_REFO3_Val _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 3  */
#define   CFG_CFGPCLKGEN3_EVSYS_9_CSEL_REFO4_Val _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 4  */
#define   CFG_CFGPCLKGEN3_EVSYS_9_CSEL_REFO5_Val _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 5  */
#define   CFG_CFGPCLKGEN3_EVSYS_9_CSEL_REFO6_Val _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 6  */
#define   CFG_CFGPCLKGEN3_EVSYS_9_CSEL_LPCLK_Val _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN3_EVSYS_9_CSEL_NO_CLK   (CFG_CFGPCLKGEN3_EVSYS_9_CSEL_NO_CLK_Val << CFG_CFGPCLKGEN3_EVSYS_9_CSEL_Pos) /* (CFG_CFGPCLKGEN3) No Clock Position */
#define CFG_CFGPCLKGEN3_EVSYS_9_CSEL_REFO1    (CFG_CFGPCLKGEN3_EVSYS_9_CSEL_REFO1_Val << CFG_CFGPCLKGEN3_EVSYS_9_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN3_EVSYS_9_CSEL_REFO2    (CFG_CFGPCLKGEN3_EVSYS_9_CSEL_REFO2_Val << CFG_CFGPCLKGEN3_EVSYS_9_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN3_EVSYS_9_CSEL_REFO3    (CFG_CFGPCLKGEN3_EVSYS_9_CSEL_REFO3_Val << CFG_CFGPCLKGEN3_EVSYS_9_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN3_EVSYS_9_CSEL_REFO4    (CFG_CFGPCLKGEN3_EVSYS_9_CSEL_REFO4_Val << CFG_CFGPCLKGEN3_EVSYS_9_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN3_EVSYS_9_CSEL_REFO5    (CFG_CFGPCLKGEN3_EVSYS_9_CSEL_REFO5_Val << CFG_CFGPCLKGEN3_EVSYS_9_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN3_EVSYS_9_CSEL_REFO6    (CFG_CFGPCLKGEN3_EVSYS_9_CSEL_REFO6_Val << CFG_CFGPCLKGEN3_EVSYS_9_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN3_EVSYS_9_CSEL_LPCLK    (CFG_CFGPCLKGEN3_EVSYS_9_CSEL_LPCLK_Val << CFG_CFGPCLKGEN3_EVSYS_9_CSEL_Pos) /* (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN3_EVSYS_9_CD_Pos        _UINT32_(3)                                          /* (CFG_CFGPCLKGEN3) EVSYSC9 Clock Disable Position */
#define CFG_CFGPCLKGEN3_EVSYS_9_CD_Msk        (_UINT32_(0x1) << CFG_CFGPCLKGEN3_EVSYS_9_CD_Pos)    /* (CFG_CFGPCLKGEN3) EVSYSC9 Clock Disable Mask */
#define CFG_CFGPCLKGEN3_EVSYS_9_CD(value)     (CFG_CFGPCLKGEN3_EVSYS_9_CD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN3_EVSYS_9_CD_Pos)) /* Assignment of value for EVSYS_9_CD in the CFG_CFGPCLKGEN3 register */
#define   CFG_CFGPCLKGEN3_EVSYS_9_CD_ON_Val   _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN3) Enable PGCLK  */
#define   CFG_CFGPCLKGEN3_EVSYS_9_CD_OFF_Val  _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN3) Disable PGCLK  */
#define CFG_CFGPCLKGEN3_EVSYS_9_CD_ON         (CFG_CFGPCLKGEN3_EVSYS_9_CD_ON_Val << CFG_CFGPCLKGEN3_EVSYS_9_CD_Pos) /* (CFG_CFGPCLKGEN3) Enable PGCLK Position */
#define CFG_CFGPCLKGEN3_EVSYS_9_CD_OFF        (CFG_CFGPCLKGEN3_EVSYS_9_CD_OFF_Val << CFG_CFGPCLKGEN3_EVSYS_9_CD_Pos) /* (CFG_CFGPCLKGEN3) Disable PGCLK Position */
#define CFG_CFGPCLKGEN3_EVSYS_10_CSEL_Pos     _UINT32_(4)                                          /* (CFG_CFGPCLKGEN3) EVSYSC10 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN3_EVSYS_10_CSEL_Msk     (_UINT32_(0x7) << CFG_CFGPCLKGEN3_EVSYS_10_CSEL_Pos) /* (CFG_CFGPCLKGEN3) EVSYSC10 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN3_EVSYS_10_CSEL(value)  (CFG_CFGPCLKGEN3_EVSYS_10_CSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN3_EVSYS_10_CSEL_Pos)) /* Assignment of value for EVSYS_10_CSEL in the CFG_CFGPCLKGEN3 register */
#define   CFG_CFGPCLKGEN3_EVSYS_10_CSEL_NO_CLK_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN3) No Clock  */
#define   CFG_CFGPCLKGEN3_EVSYS_10_CSEL_REFO1_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 1  */
#define   CFG_CFGPCLKGEN3_EVSYS_10_CSEL_REFO2_Val _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 2  */
#define   CFG_CFGPCLKGEN3_EVSYS_10_CSEL_REFO3_Val _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 3  */
#define   CFG_CFGPCLKGEN3_EVSYS_10_CSEL_REFO4_Val _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 4  */
#define   CFG_CFGPCLKGEN3_EVSYS_10_CSEL_REFO5_Val _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 5  */
#define   CFG_CFGPCLKGEN3_EVSYS_10_CSEL_REFO6_Val _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 6  */
#define   CFG_CFGPCLKGEN3_EVSYS_10_CSEL_LPCLK_Val _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN3_EVSYS_10_CSEL_NO_CLK  (CFG_CFGPCLKGEN3_EVSYS_10_CSEL_NO_CLK_Val << CFG_CFGPCLKGEN3_EVSYS_10_CSEL_Pos) /* (CFG_CFGPCLKGEN3) No Clock Position */
#define CFG_CFGPCLKGEN3_EVSYS_10_CSEL_REFO1   (CFG_CFGPCLKGEN3_EVSYS_10_CSEL_REFO1_Val << CFG_CFGPCLKGEN3_EVSYS_10_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN3_EVSYS_10_CSEL_REFO2   (CFG_CFGPCLKGEN3_EVSYS_10_CSEL_REFO2_Val << CFG_CFGPCLKGEN3_EVSYS_10_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN3_EVSYS_10_CSEL_REFO3   (CFG_CFGPCLKGEN3_EVSYS_10_CSEL_REFO3_Val << CFG_CFGPCLKGEN3_EVSYS_10_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN3_EVSYS_10_CSEL_REFO4   (CFG_CFGPCLKGEN3_EVSYS_10_CSEL_REFO4_Val << CFG_CFGPCLKGEN3_EVSYS_10_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN3_EVSYS_10_CSEL_REFO5   (CFG_CFGPCLKGEN3_EVSYS_10_CSEL_REFO5_Val << CFG_CFGPCLKGEN3_EVSYS_10_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN3_EVSYS_10_CSEL_REFO6   (CFG_CFGPCLKGEN3_EVSYS_10_CSEL_REFO6_Val << CFG_CFGPCLKGEN3_EVSYS_10_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN3_EVSYS_10_CSEL_LPCLK   (CFG_CFGPCLKGEN3_EVSYS_10_CSEL_LPCLK_Val << CFG_CFGPCLKGEN3_EVSYS_10_CSEL_Pos) /* (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN3_EVSYS_10_CD_Pos       _UINT32_(7)                                          /* (CFG_CFGPCLKGEN3) EVSYSC10 Clock Disable Position */
#define CFG_CFGPCLKGEN3_EVSYS_10_CD_Msk       (_UINT32_(0x1) << CFG_CFGPCLKGEN3_EVSYS_10_CD_Pos)   /* (CFG_CFGPCLKGEN3) EVSYSC10 Clock Disable Mask */
#define CFG_CFGPCLKGEN3_EVSYS_10_CD(value)    (CFG_CFGPCLKGEN3_EVSYS_10_CD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN3_EVSYS_10_CD_Pos)) /* Assignment of value for EVSYS_10_CD in the CFG_CFGPCLKGEN3 register */
#define   CFG_CFGPCLKGEN3_EVSYS_10_CD_ON_Val  _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN3) Enable PGCLK  */
#define   CFG_CFGPCLKGEN3_EVSYS_10_CD_OFF_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN3) Disable PGCLK  */
#define CFG_CFGPCLKGEN3_EVSYS_10_CD_ON        (CFG_CFGPCLKGEN3_EVSYS_10_CD_ON_Val << CFG_CFGPCLKGEN3_EVSYS_10_CD_Pos) /* (CFG_CFGPCLKGEN3) Enable PGCLK Position */
#define CFG_CFGPCLKGEN3_EVSYS_10_CD_OFF       (CFG_CFGPCLKGEN3_EVSYS_10_CD_OFF_Val << CFG_CFGPCLKGEN3_EVSYS_10_CD_Pos) /* (CFG_CFGPCLKGEN3) Disable PGCLK Position */
#define CFG_CFGPCLKGEN3_EVSYS_11_CSEL_Pos     _UINT32_(8)                                          /* (CFG_CFGPCLKGEN3) EVSYSC11 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN3_EVSYS_11_CSEL_Msk     (_UINT32_(0x7) << CFG_CFGPCLKGEN3_EVSYS_11_CSEL_Pos) /* (CFG_CFGPCLKGEN3) EVSYSC11 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN3_EVSYS_11_CSEL(value)  (CFG_CFGPCLKGEN3_EVSYS_11_CSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN3_EVSYS_11_CSEL_Pos)) /* Assignment of value for EVSYS_11_CSEL in the CFG_CFGPCLKGEN3 register */
#define   CFG_CFGPCLKGEN3_EVSYS_11_CSEL_NO_CLK_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN3) No Clock  */
#define   CFG_CFGPCLKGEN3_EVSYS_11_CSEL_REFO1_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 1  */
#define   CFG_CFGPCLKGEN3_EVSYS_11_CSEL_REFO2_Val _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 2  */
#define   CFG_CFGPCLKGEN3_EVSYS_11_CSEL_REFO3_Val _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 3  */
#define   CFG_CFGPCLKGEN3_EVSYS_11_CSEL_REFO4_Val _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 4  */
#define   CFG_CFGPCLKGEN3_EVSYS_11_CSEL_REFO5_Val _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 5  */
#define   CFG_CFGPCLKGEN3_EVSYS_11_CSEL_REFO6_Val _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 6  */
#define   CFG_CFGPCLKGEN3_EVSYS_11_CSEL_LPCLK_Val _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN3_EVSYS_11_CSEL_NO_CLK  (CFG_CFGPCLKGEN3_EVSYS_11_CSEL_NO_CLK_Val << CFG_CFGPCLKGEN3_EVSYS_11_CSEL_Pos) /* (CFG_CFGPCLKGEN3) No Clock Position */
#define CFG_CFGPCLKGEN3_EVSYS_11_CSEL_REFO1   (CFG_CFGPCLKGEN3_EVSYS_11_CSEL_REFO1_Val << CFG_CFGPCLKGEN3_EVSYS_11_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN3_EVSYS_11_CSEL_REFO2   (CFG_CFGPCLKGEN3_EVSYS_11_CSEL_REFO2_Val << CFG_CFGPCLKGEN3_EVSYS_11_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN3_EVSYS_11_CSEL_REFO3   (CFG_CFGPCLKGEN3_EVSYS_11_CSEL_REFO3_Val << CFG_CFGPCLKGEN3_EVSYS_11_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN3_EVSYS_11_CSEL_REFO4   (CFG_CFGPCLKGEN3_EVSYS_11_CSEL_REFO4_Val << CFG_CFGPCLKGEN3_EVSYS_11_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN3_EVSYS_11_CSEL_REFO5   (CFG_CFGPCLKGEN3_EVSYS_11_CSEL_REFO5_Val << CFG_CFGPCLKGEN3_EVSYS_11_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN3_EVSYS_11_CSEL_REFO6   (CFG_CFGPCLKGEN3_EVSYS_11_CSEL_REFO6_Val << CFG_CFGPCLKGEN3_EVSYS_11_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN3_EVSYS_11_CSEL_LPCLK   (CFG_CFGPCLKGEN3_EVSYS_11_CSEL_LPCLK_Val << CFG_CFGPCLKGEN3_EVSYS_11_CSEL_Pos) /* (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN3_EVSYS_11_CD_Pos       _UINT32_(11)                                         /* (CFG_CFGPCLKGEN3) EVSYSC11 Clock Disable Position */
#define CFG_CFGPCLKGEN3_EVSYS_11_CD_Msk       (_UINT32_(0x1) << CFG_CFGPCLKGEN3_EVSYS_11_CD_Pos)   /* (CFG_CFGPCLKGEN3) EVSYSC11 Clock Disable Mask */
#define CFG_CFGPCLKGEN3_EVSYS_11_CD(value)    (CFG_CFGPCLKGEN3_EVSYS_11_CD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN3_EVSYS_11_CD_Pos)) /* Assignment of value for EVSYS_11_CD in the CFG_CFGPCLKGEN3 register */
#define   CFG_CFGPCLKGEN3_EVSYS_11_CD_ON_Val  _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN3) Enable PGCLK  */
#define   CFG_CFGPCLKGEN3_EVSYS_11_CD_OFF_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN3) Disable PGCLK  */
#define CFG_CFGPCLKGEN3_EVSYS_11_CD_ON        (CFG_CFGPCLKGEN3_EVSYS_11_CD_ON_Val << CFG_CFGPCLKGEN3_EVSYS_11_CD_Pos) /* (CFG_CFGPCLKGEN3) Enable PGCLK Position */
#define CFG_CFGPCLKGEN3_EVSYS_11_CD_OFF       (CFG_CFGPCLKGEN3_EVSYS_11_CD_OFF_Val << CFG_CFGPCLKGEN3_EVSYS_11_CD_Pos) /* (CFG_CFGPCLKGEN3) Disable PGCLK Position */
#define CFG_CFGPCLKGEN3_EVSYS_12_CSEL_Pos     _UINT32_(12)                                         /* (CFG_CFGPCLKGEN3) EVSYSC12 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN3_EVSYS_12_CSEL_Msk     (_UINT32_(0x7) << CFG_CFGPCLKGEN3_EVSYS_12_CSEL_Pos) /* (CFG_CFGPCLKGEN3) EVSYSC12 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN3_EVSYS_12_CSEL(value)  (CFG_CFGPCLKGEN3_EVSYS_12_CSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN3_EVSYS_12_CSEL_Pos)) /* Assignment of value for EVSYS_12_CSEL in the CFG_CFGPCLKGEN3 register */
#define   CFG_CFGPCLKGEN3_EVSYS_12_CSEL_NO_CLK_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN3) No Clock  */
#define   CFG_CFGPCLKGEN3_EVSYS_12_CSEL_REFO1_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 1  */
#define   CFG_CFGPCLKGEN3_EVSYS_12_CSEL_REFO2_Val _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 2  */
#define   CFG_CFGPCLKGEN3_EVSYS_12_CSEL_REFO3_Val _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 3  */
#define   CFG_CFGPCLKGEN3_EVSYS_12_CSEL_REFO4_Val _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 4  */
#define   CFG_CFGPCLKGEN3_EVSYS_12_CSEL_REFO5_Val _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 5  */
#define   CFG_CFGPCLKGEN3_EVSYS_12_CSEL_REFO6_Val _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 6  */
#define   CFG_CFGPCLKGEN3_EVSYS_12_CSEL_LPCLK_Val _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN3_EVSYS_12_CSEL_NO_CLK  (CFG_CFGPCLKGEN3_EVSYS_12_CSEL_NO_CLK_Val << CFG_CFGPCLKGEN3_EVSYS_12_CSEL_Pos) /* (CFG_CFGPCLKGEN3) No Clock Position */
#define CFG_CFGPCLKGEN3_EVSYS_12_CSEL_REFO1   (CFG_CFGPCLKGEN3_EVSYS_12_CSEL_REFO1_Val << CFG_CFGPCLKGEN3_EVSYS_12_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN3_EVSYS_12_CSEL_REFO2   (CFG_CFGPCLKGEN3_EVSYS_12_CSEL_REFO2_Val << CFG_CFGPCLKGEN3_EVSYS_12_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN3_EVSYS_12_CSEL_REFO3   (CFG_CFGPCLKGEN3_EVSYS_12_CSEL_REFO3_Val << CFG_CFGPCLKGEN3_EVSYS_12_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN3_EVSYS_12_CSEL_REFO4   (CFG_CFGPCLKGEN3_EVSYS_12_CSEL_REFO4_Val << CFG_CFGPCLKGEN3_EVSYS_12_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN3_EVSYS_12_CSEL_REFO5   (CFG_CFGPCLKGEN3_EVSYS_12_CSEL_REFO5_Val << CFG_CFGPCLKGEN3_EVSYS_12_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN3_EVSYS_12_CSEL_REFO6   (CFG_CFGPCLKGEN3_EVSYS_12_CSEL_REFO6_Val << CFG_CFGPCLKGEN3_EVSYS_12_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN3_EVSYS_12_CSEL_LPCLK   (CFG_CFGPCLKGEN3_EVSYS_12_CSEL_LPCLK_Val << CFG_CFGPCLKGEN3_EVSYS_12_CSEL_Pos) /* (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN3_EVSYS_12_CD_Pos       _UINT32_(15)                                         /* (CFG_CFGPCLKGEN3) EVSYSC12 Clock Disable Position */
#define CFG_CFGPCLKGEN3_EVSYS_12_CD_Msk       (_UINT32_(0x1) << CFG_CFGPCLKGEN3_EVSYS_12_CD_Pos)   /* (CFG_CFGPCLKGEN3) EVSYSC12 Clock Disable Mask */
#define CFG_CFGPCLKGEN3_EVSYS_12_CD(value)    (CFG_CFGPCLKGEN3_EVSYS_12_CD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN3_EVSYS_12_CD_Pos)) /* Assignment of value for EVSYS_12_CD in the CFG_CFGPCLKGEN3 register */
#define   CFG_CFGPCLKGEN3_EVSYS_12_CD_ON_Val  _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN3) Enable PGCLK  */
#define   CFG_CFGPCLKGEN3_EVSYS_12_CD_OFF_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN3) Disable PGCLK  */
#define CFG_CFGPCLKGEN3_EVSYS_12_CD_ON        (CFG_CFGPCLKGEN3_EVSYS_12_CD_ON_Val << CFG_CFGPCLKGEN3_EVSYS_12_CD_Pos) /* (CFG_CFGPCLKGEN3) Enable PGCLK Position */
#define CFG_CFGPCLKGEN3_EVSYS_12_CD_OFF       (CFG_CFGPCLKGEN3_EVSYS_12_CD_OFF_Val << CFG_CFGPCLKGEN3_EVSYS_12_CD_Pos) /* (CFG_CFGPCLKGEN3) Disable PGCLK Position */
#define CFG_CFGPCLKGEN3_ACCSEL_Pos            _UINT32_(16)                                         /* (CFG_CFGPCLKGEN3) AC Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN3_ACCSEL_Msk            (_UINT32_(0x7) << CFG_CFGPCLKGEN3_ACCSEL_Pos)        /* (CFG_CFGPCLKGEN3) AC Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN3_ACCSEL(value)         (CFG_CFGPCLKGEN3_ACCSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN3_ACCSEL_Pos)) /* Assignment of value for ACCSEL in the CFG_CFGPCLKGEN3 register */
#define   CFG_CFGPCLKGEN3_ACCSEL_NO_CLK_Val   _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN3) No Clock  */
#define   CFG_CFGPCLKGEN3_ACCSEL_REFO1_Val    _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 1  */
#define   CFG_CFGPCLKGEN3_ACCSEL_REFO2_Val    _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 2  */
#define   CFG_CFGPCLKGEN3_ACCSEL_REFO3_Val    _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 3  */
#define   CFG_CFGPCLKGEN3_ACCSEL_REFO4_Val    _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 4  */
#define   CFG_CFGPCLKGEN3_ACCSEL_REFO5_Val    _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 5  */
#define   CFG_CFGPCLKGEN3_ACCSEL_REFO6_Val    _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 6  */
#define   CFG_CFGPCLKGEN3_ACCSEL_LPCLK_Val    _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN3_ACCSEL_NO_CLK         (CFG_CFGPCLKGEN3_ACCSEL_NO_CLK_Val << CFG_CFGPCLKGEN3_ACCSEL_Pos) /* (CFG_CFGPCLKGEN3) No Clock Position */
#define CFG_CFGPCLKGEN3_ACCSEL_REFO1          (CFG_CFGPCLKGEN3_ACCSEL_REFO1_Val << CFG_CFGPCLKGEN3_ACCSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN3_ACCSEL_REFO2          (CFG_CFGPCLKGEN3_ACCSEL_REFO2_Val << CFG_CFGPCLKGEN3_ACCSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN3_ACCSEL_REFO3          (CFG_CFGPCLKGEN3_ACCSEL_REFO3_Val << CFG_CFGPCLKGEN3_ACCSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN3_ACCSEL_REFO4          (CFG_CFGPCLKGEN3_ACCSEL_REFO4_Val << CFG_CFGPCLKGEN3_ACCSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN3_ACCSEL_REFO5          (CFG_CFGPCLKGEN3_ACCSEL_REFO5_Val << CFG_CFGPCLKGEN3_ACCSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN3_ACCSEL_REFO6          (CFG_CFGPCLKGEN3_ACCSEL_REFO6_Val << CFG_CFGPCLKGEN3_ACCSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN3_ACCSEL_LPCLK          (CFG_CFGPCLKGEN3_ACCSEL_LPCLK_Val << CFG_CFGPCLKGEN3_ACCSEL_Pos) /* (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN3_ACCD_Pos              _UINT32_(19)                                         /* (CFG_CFGPCLKGEN3) AC Clock Disable Position */
#define CFG_CFGPCLKGEN3_ACCD_Msk              (_UINT32_(0x1) << CFG_CFGPCLKGEN3_ACCD_Pos)          /* (CFG_CFGPCLKGEN3) AC Clock Disable Mask */
#define CFG_CFGPCLKGEN3_ACCD(value)           (CFG_CFGPCLKGEN3_ACCD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN3_ACCD_Pos)) /* Assignment of value for ACCD in the CFG_CFGPCLKGEN3 register */
#define   CFG_CFGPCLKGEN3_ACCD_ON_Val         _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN3) Enable PGCLK  */
#define   CFG_CFGPCLKGEN3_ACCD_OFF_Val        _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN3) Disable PGCLK  */
#define CFG_CFGPCLKGEN3_ACCD_ON               (CFG_CFGPCLKGEN3_ACCD_ON_Val << CFG_CFGPCLKGEN3_ACCD_Pos) /* (CFG_CFGPCLKGEN3) Enable PGCLK Position */
#define CFG_CFGPCLKGEN3_ACCD_OFF              (CFG_CFGPCLKGEN3_ACCD_OFF_Val << CFG_CFGPCLKGEN3_ACCD_Pos) /* (CFG_CFGPCLKGEN3) Disable PGCLK Position */
#define CFG_CFGPCLKGEN3_TCC_0_CSEL_Pos        _UINT32_(20)                                         /* (CFG_CFGPCLKGEN3) TCC0 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN3_TCC_0_CSEL_Msk        (_UINT32_(0x7) << CFG_CFGPCLKGEN3_TCC_0_CSEL_Pos)    /* (CFG_CFGPCLKGEN3) TCC0 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN3_TCC_0_CSEL(value)     (CFG_CFGPCLKGEN3_TCC_0_CSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN3_TCC_0_CSEL_Pos)) /* Assignment of value for TCC_0_CSEL in the CFG_CFGPCLKGEN3 register */
#define   CFG_CFGPCLKGEN3_TCC_0_CSEL_NO_CLK_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN3) No Clock  */
#define   CFG_CFGPCLKGEN3_TCC_0_CSEL_REFO1_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 1  */
#define   CFG_CFGPCLKGEN3_TCC_0_CSEL_REFO2_Val _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 2  */
#define   CFG_CFGPCLKGEN3_TCC_0_CSEL_REFO3_Val _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 3  */
#define   CFG_CFGPCLKGEN3_TCC_0_CSEL_REFO4_Val _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 4  */
#define   CFG_CFGPCLKGEN3_TCC_0_CSEL_REFO5_Val _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 5  */
#define   CFG_CFGPCLKGEN3_TCC_0_CSEL_REFO6_Val _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 6  */
#define   CFG_CFGPCLKGEN3_TCC_0_CSEL_LPCLK_Val _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN3_TCC_0_CSEL_NO_CLK     (CFG_CFGPCLKGEN3_TCC_0_CSEL_NO_CLK_Val << CFG_CFGPCLKGEN3_TCC_0_CSEL_Pos) /* (CFG_CFGPCLKGEN3) No Clock Position */
#define CFG_CFGPCLKGEN3_TCC_0_CSEL_REFO1      (CFG_CFGPCLKGEN3_TCC_0_CSEL_REFO1_Val << CFG_CFGPCLKGEN3_TCC_0_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN3_TCC_0_CSEL_REFO2      (CFG_CFGPCLKGEN3_TCC_0_CSEL_REFO2_Val << CFG_CFGPCLKGEN3_TCC_0_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN3_TCC_0_CSEL_REFO3      (CFG_CFGPCLKGEN3_TCC_0_CSEL_REFO3_Val << CFG_CFGPCLKGEN3_TCC_0_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN3_TCC_0_CSEL_REFO4      (CFG_CFGPCLKGEN3_TCC_0_CSEL_REFO4_Val << CFG_CFGPCLKGEN3_TCC_0_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN3_TCC_0_CSEL_REFO5      (CFG_CFGPCLKGEN3_TCC_0_CSEL_REFO5_Val << CFG_CFGPCLKGEN3_TCC_0_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN3_TCC_0_CSEL_REFO6      (CFG_CFGPCLKGEN3_TCC_0_CSEL_REFO6_Val << CFG_CFGPCLKGEN3_TCC_0_CSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN3_TCC_0_CSEL_LPCLK      (CFG_CFGPCLKGEN3_TCC_0_CSEL_LPCLK_Val << CFG_CFGPCLKGEN3_TCC_0_CSEL_Pos) /* (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN3_TCC_0_CD_Pos          _UINT32_(23)                                         /* (CFG_CFGPCLKGEN3) TCC0 Clock Disable Position */
#define CFG_CFGPCLKGEN3_TCC_0_CD_Msk          (_UINT32_(0x1) << CFG_CFGPCLKGEN3_TCC_0_CD_Pos)      /* (CFG_CFGPCLKGEN3) TCC0 Clock Disable Mask */
#define CFG_CFGPCLKGEN3_TCC_0_CD(value)       (CFG_CFGPCLKGEN3_TCC_0_CD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN3_TCC_0_CD_Pos)) /* Assignment of value for TCC_0_CD in the CFG_CFGPCLKGEN3 register */
#define   CFG_CFGPCLKGEN3_TCC_0_CD_ON_Val     _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN3) Enable PGCLK  */
#define   CFG_CFGPCLKGEN3_TCC_0_CD_OFF_Val    _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN3) Disable PGCLK  */
#define CFG_CFGPCLKGEN3_TCC_0_CD_ON           (CFG_CFGPCLKGEN3_TCC_0_CD_ON_Val << CFG_CFGPCLKGEN3_TCC_0_CD_Pos) /* (CFG_CFGPCLKGEN3) Enable PGCLK Position */
#define CFG_CFGPCLKGEN3_TCC_0_CD_OFF          (CFG_CFGPCLKGEN3_TCC_0_CD_OFF_Val << CFG_CFGPCLKGEN3_TCC_0_CD_Pos) /* (CFG_CFGPCLKGEN3) Disable PGCLK Position */
#define CFG_CFGPCLKGEN3_ETHCSEL_Pos           _UINT32_(24)                                         /* (CFG_CFGPCLKGEN3) Ethernet Clock Selection Position */
#define CFG_CFGPCLKGEN3_ETHCSEL_Msk           (_UINT32_(0x7) << CFG_CFGPCLKGEN3_ETHCSEL_Pos)       /* (CFG_CFGPCLKGEN3) Ethernet Clock Selection Mask */
#define CFG_CFGPCLKGEN3_ETHCSEL(value)        (CFG_CFGPCLKGEN3_ETHCSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN3_ETHCSEL_Pos)) /* Assignment of value for ETHCSEL in the CFG_CFGPCLKGEN3 register */
#define   CFG_CFGPCLKGEN3_ETHCSEL_NO_CLK_Val  _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN3) No Clock  */
#define   CFG_CFGPCLKGEN3_ETHCSEL_REFO1_Val   _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 1  */
#define   CFG_CFGPCLKGEN3_ETHCSEL_REFO2_Val   _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 2  */
#define   CFG_CFGPCLKGEN3_ETHCSEL_REFO3_Val   _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 3  */
#define   CFG_CFGPCLKGEN3_ETHCSEL_REFO4_Val   _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 4  */
#define   CFG_CFGPCLKGEN3_ETHCSEL_REFO5_Val   _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 5  */
#define   CFG_CFGPCLKGEN3_ETHCSEL_REFO6_Val   _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 6  */
#define   CFG_CFGPCLKGEN3_ETHCSEL_LPCLK_Val   _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN3_ETHCSEL_NO_CLK        (CFG_CFGPCLKGEN3_ETHCSEL_NO_CLK_Val << CFG_CFGPCLKGEN3_ETHCSEL_Pos) /* (CFG_CFGPCLKGEN3) No Clock Position */
#define CFG_CFGPCLKGEN3_ETHCSEL_REFO1         (CFG_CFGPCLKGEN3_ETHCSEL_REFO1_Val << CFG_CFGPCLKGEN3_ETHCSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN3_ETHCSEL_REFO2         (CFG_CFGPCLKGEN3_ETHCSEL_REFO2_Val << CFG_CFGPCLKGEN3_ETHCSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN3_ETHCSEL_REFO3         (CFG_CFGPCLKGEN3_ETHCSEL_REFO3_Val << CFG_CFGPCLKGEN3_ETHCSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN3_ETHCSEL_REFO4         (CFG_CFGPCLKGEN3_ETHCSEL_REFO4_Val << CFG_CFGPCLKGEN3_ETHCSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN3_ETHCSEL_REFO5         (CFG_CFGPCLKGEN3_ETHCSEL_REFO5_Val << CFG_CFGPCLKGEN3_ETHCSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN3_ETHCSEL_REFO6         (CFG_CFGPCLKGEN3_ETHCSEL_REFO6_Val << CFG_CFGPCLKGEN3_ETHCSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN3_ETHCSEL_LPCLK         (CFG_CFGPCLKGEN3_ETHCSEL_LPCLK_Val << CFG_CFGPCLKGEN3_ETHCSEL_Pos) /* (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN3_ETHCD_Pos             _UINT32_(27)                                         /* (CFG_CFGPCLKGEN3) Ethernet Clock Disable Position */
#define CFG_CFGPCLKGEN3_ETHCD_Msk             (_UINT32_(0x1) << CFG_CFGPCLKGEN3_ETHCD_Pos)         /* (CFG_CFGPCLKGEN3) Ethernet Clock Disable Mask */
#define CFG_CFGPCLKGEN3_ETHCD(value)          (CFG_CFGPCLKGEN3_ETHCD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN3_ETHCD_Pos)) /* Assignment of value for ETHCD in the CFG_CFGPCLKGEN3 register */
#define   CFG_CFGPCLKGEN3_ETHCD_ON_Val        _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN3) Enable PGCLK  */
#define   CFG_CFGPCLKGEN3_ETHCD_OFF_Val       _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN3) Disable PGCLK  */
#define CFG_CFGPCLKGEN3_ETHCD_ON              (CFG_CFGPCLKGEN3_ETHCD_ON_Val << CFG_CFGPCLKGEN3_ETHCD_Pos) /* (CFG_CFGPCLKGEN3) Enable PGCLK Position */
#define CFG_CFGPCLKGEN3_ETHCD_OFF             (CFG_CFGPCLKGEN3_ETHCD_OFF_Val << CFG_CFGPCLKGEN3_ETHCD_Pos) /* (CFG_CFGPCLKGEN3) Disable PGCLK Position */
#define CFG_CFGPCLKGEN3_CVDCSEL_Pos           _UINT32_(28)                                         /* (CFG_CFGPCLKGEN3) CVD Selection Position */
#define CFG_CFGPCLKGEN3_CVDCSEL_Msk           (_UINT32_(0x7) << CFG_CFGPCLKGEN3_CVDCSEL_Pos)       /* (CFG_CFGPCLKGEN3) CVD Selection Mask */
#define CFG_CFGPCLKGEN3_CVDCSEL(value)        (CFG_CFGPCLKGEN3_CVDCSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN3_CVDCSEL_Pos)) /* Assignment of value for CVDCSEL in the CFG_CFGPCLKGEN3 register */
#define   CFG_CFGPCLKGEN3_CVDCSEL_NO_CLK_Val  _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN3) No Clock  */
#define   CFG_CFGPCLKGEN3_CVDCSEL_REFO1_Val   _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 1  */
#define   CFG_CFGPCLKGEN3_CVDCSEL_REFO2_Val   _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 2  */
#define   CFG_CFGPCLKGEN3_CVDCSEL_REFO3_Val   _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 3  */
#define   CFG_CFGPCLKGEN3_CVDCSEL_REFO4_Val   _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 4  */
#define   CFG_CFGPCLKGEN3_CVDCSEL_REFO5_Val   _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 5  */
#define   CFG_CFGPCLKGEN3_CVDCSEL_REFO6_Val   _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN3) Reference Clock 6  */
#define   CFG_CFGPCLKGEN3_CVDCSEL_LPCLK_Val   _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN3_CVDCSEL_NO_CLK        (CFG_CFGPCLKGEN3_CVDCSEL_NO_CLK_Val << CFG_CFGPCLKGEN3_CVDCSEL_Pos) /* (CFG_CFGPCLKGEN3) No Clock Position */
#define CFG_CFGPCLKGEN3_CVDCSEL_REFO1         (CFG_CFGPCLKGEN3_CVDCSEL_REFO1_Val << CFG_CFGPCLKGEN3_CVDCSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN3_CVDCSEL_REFO2         (CFG_CFGPCLKGEN3_CVDCSEL_REFO2_Val << CFG_CFGPCLKGEN3_CVDCSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN3_CVDCSEL_REFO3         (CFG_CFGPCLKGEN3_CVDCSEL_REFO3_Val << CFG_CFGPCLKGEN3_CVDCSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN3_CVDCSEL_REFO4         (CFG_CFGPCLKGEN3_CVDCSEL_REFO4_Val << CFG_CFGPCLKGEN3_CVDCSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN3_CVDCSEL_REFO5         (CFG_CFGPCLKGEN3_CVDCSEL_REFO5_Val << CFG_CFGPCLKGEN3_CVDCSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN3_CVDCSEL_REFO6         (CFG_CFGPCLKGEN3_CVDCSEL_REFO6_Val << CFG_CFGPCLKGEN3_CVDCSEL_Pos) /* (CFG_CFGPCLKGEN3) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN3_CVDCSEL_LPCLK         (CFG_CFGPCLKGEN3_CVDCSEL_LPCLK_Val << CFG_CFGPCLKGEN3_CVDCSEL_Pos) /* (CFG_CFGPCLKGEN3) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN3_CVDCD_Pos             _UINT32_(31)                                         /* (CFG_CFGPCLKGEN3) CVD Clock Disable Position */
#define CFG_CFGPCLKGEN3_CVDCD_Msk             (_UINT32_(0x1) << CFG_CFGPCLKGEN3_CVDCD_Pos)         /* (CFG_CFGPCLKGEN3) CVD Clock Disable Mask */
#define CFG_CFGPCLKGEN3_CVDCD(value)          (CFG_CFGPCLKGEN3_CVDCD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN3_CVDCD_Pos)) /* Assignment of value for CVDCD in the CFG_CFGPCLKGEN3 register */
#define   CFG_CFGPCLKGEN3_CVDCD_ON_Val        _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN3) Enable PGCLK  */
#define   CFG_CFGPCLKGEN3_CVDCD_OFF_Val       _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN3) Disable PGCLK  */
#define CFG_CFGPCLKGEN3_CVDCD_ON              (CFG_CFGPCLKGEN3_CVDCD_ON_Val << CFG_CFGPCLKGEN3_CVDCD_Pos) /* (CFG_CFGPCLKGEN3) Enable PGCLK Position */
#define CFG_CFGPCLKGEN3_CVDCD_OFF             (CFG_CFGPCLKGEN3_CVDCD_OFF_Val << CFG_CFGPCLKGEN3_CVDCD_Pos) /* (CFG_CFGPCLKGEN3) Disable PGCLK Position */
#define CFG_CFGPCLKGEN3_Msk                   _UINT32_(0xFFFFFFFF)                                 /* (CFG_CFGPCLKGEN3) Register Mask  */


/* -------- CFG_CFGPCLKGEN3CLR : (CFG Offset: 0xA4) (R/W 32) Bit clear register -------- */
#define CFG_CFGPCLKGEN3CLR_RESETVALUE         _UINT32_(0x00)                                       /*  (CFG_CFGPCLKGEN3CLR) Bit clear register  Reset Value */

#define CFG_CFGPCLKGEN3CLR_Msk                _UINT32_(0x00000000)                                 /* (CFG_CFGPCLKGEN3CLR) Register Mask  */


/* -------- CFG_CFGPCLKGEN3SET : (CFG Offset: 0xA8) (R/W 32) Bit set register -------- */
#define CFG_CFGPCLKGEN3SET_RESETVALUE         _UINT32_(0x00)                                       /*  (CFG_CFGPCLKGEN3SET) Bit set register  Reset Value */

#define CFG_CFGPCLKGEN3SET_Msk                _UINT32_(0x00000000)                                 /* (CFG_CFGPCLKGEN3SET) Register Mask  */


/* -------- CFG_CFGPCLKGEN3INV : (CFG Offset: 0xAC) (R/W 32) Bit invert register -------- */
#define CFG_CFGPCLKGEN3INV_RESETVALUE         _UINT32_(0x00)                                       /*  (CFG_CFGPCLKGEN3INV) Bit invert register  Reset Value */

#define CFG_CFGPCLKGEN3INV_Msk                _UINT32_(0x00000000)                                 /* (CFG_CFGPCLKGEN3INV) Register Mask  */


/* -------- CFG_CFGPCLKGEN4 : (CFG Offset: 0xB0) (R/W 32)  -------- */
#define CFG_CFGPCLKGEN4_RESETVALUE            _UINT32_(0x00)                                       /*  (CFG_CFGPCLKGEN4)   Reset Value */

#define CFG_CFGPCLKGEN4_TC_0_CSEL_Pos         _UINT32_(0)                                          /* (CFG_CFGPCLKGEN4) TC0 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN4_TC_0_CSEL_Msk         (_UINT32_(0x7) << CFG_CFGPCLKGEN4_TC_0_CSEL_Pos)     /* (CFG_CFGPCLKGEN4) TC0 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN4_TC_0_CSEL(value)      (CFG_CFGPCLKGEN4_TC_0_CSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN4_TC_0_CSEL_Pos)) /* Assignment of value for TC_0_CSEL in the CFG_CFGPCLKGEN4 register */
#define   CFG_CFGPCLKGEN4_TC_0_CSEL_NO_CLK_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN4) No Clock  */
#define   CFG_CFGPCLKGEN4_TC_0_CSEL_REFO1_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 1  */
#define   CFG_CFGPCLKGEN4_TC_0_CSEL_REFO2_Val _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 2  */
#define   CFG_CFGPCLKGEN4_TC_0_CSEL_REFO3_Val _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 3  */
#define   CFG_CFGPCLKGEN4_TC_0_CSEL_REFO4_Val _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 4  */
#define   CFG_CFGPCLKGEN4_TC_0_CSEL_REFO5_Val _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 5  */
#define   CFG_CFGPCLKGEN4_TC_0_CSEL_REFO6_Val _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 6  */
#define   CFG_CFGPCLKGEN4_TC_0_CSEL_LPCLK_Val _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN4) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN4_TC_0_CSEL_NO_CLK      (CFG_CFGPCLKGEN4_TC_0_CSEL_NO_CLK_Val << CFG_CFGPCLKGEN4_TC_0_CSEL_Pos) /* (CFG_CFGPCLKGEN4) No Clock Position */
#define CFG_CFGPCLKGEN4_TC_0_CSEL_REFO1       (CFG_CFGPCLKGEN4_TC_0_CSEL_REFO1_Val << CFG_CFGPCLKGEN4_TC_0_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN4_TC_0_CSEL_REFO2       (CFG_CFGPCLKGEN4_TC_0_CSEL_REFO2_Val << CFG_CFGPCLKGEN4_TC_0_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN4_TC_0_CSEL_REFO3       (CFG_CFGPCLKGEN4_TC_0_CSEL_REFO3_Val << CFG_CFGPCLKGEN4_TC_0_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN4_TC_0_CSEL_REFO4       (CFG_CFGPCLKGEN4_TC_0_CSEL_REFO4_Val << CFG_CFGPCLKGEN4_TC_0_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN4_TC_0_CSEL_REFO5       (CFG_CFGPCLKGEN4_TC_0_CSEL_REFO5_Val << CFG_CFGPCLKGEN4_TC_0_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN4_TC_0_CSEL_REFO6       (CFG_CFGPCLKGEN4_TC_0_CSEL_REFO6_Val << CFG_CFGPCLKGEN4_TC_0_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN4_TC_0_CSEL_LPCLK       (CFG_CFGPCLKGEN4_TC_0_CSEL_LPCLK_Val << CFG_CFGPCLKGEN4_TC_0_CSEL_Pos) /* (CFG_CFGPCLKGEN4) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN4_TC_0_CD_Pos           _UINT32_(3)                                          /* (CFG_CFGPCLKGEN4) TC0 Clock Disable Position */
#define CFG_CFGPCLKGEN4_TC_0_CD_Msk           (_UINT32_(0x1) << CFG_CFGPCLKGEN4_TC_0_CD_Pos)       /* (CFG_CFGPCLKGEN4) TC0 Clock Disable Mask */
#define CFG_CFGPCLKGEN4_TC_0_CD(value)        (CFG_CFGPCLKGEN4_TC_0_CD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN4_TC_0_CD_Pos)) /* Assignment of value for TC_0_CD in the CFG_CFGPCLKGEN4 register */
#define   CFG_CFGPCLKGEN4_TC_0_CD_ON_Val      _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN4) Enable PGCLK  */
#define   CFG_CFGPCLKGEN4_TC_0_CD_OFF_Val     _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN4) Disable PGCLK  */
#define CFG_CFGPCLKGEN4_TC_0_CD_ON            (CFG_CFGPCLKGEN4_TC_0_CD_ON_Val << CFG_CFGPCLKGEN4_TC_0_CD_Pos) /* (CFG_CFGPCLKGEN4) Enable PGCLK Position */
#define CFG_CFGPCLKGEN4_TC_0_CD_OFF           (CFG_CFGPCLKGEN4_TC_0_CD_OFF_Val << CFG_CFGPCLKGEN4_TC_0_CD_Pos) /* (CFG_CFGPCLKGEN4) Disable PGCLK Position */
#define CFG_CFGPCLKGEN4_TC_1_CSEL_Pos         _UINT32_(4)                                          /* (CFG_CFGPCLKGEN4) TC1 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN4_TC_1_CSEL_Msk         (_UINT32_(0x7) << CFG_CFGPCLKGEN4_TC_1_CSEL_Pos)     /* (CFG_CFGPCLKGEN4) TC1 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN4_TC_1_CSEL(value)      (CFG_CFGPCLKGEN4_TC_1_CSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN4_TC_1_CSEL_Pos)) /* Assignment of value for TC_1_CSEL in the CFG_CFGPCLKGEN4 register */
#define   CFG_CFGPCLKGEN4_TC_1_CSEL_NO_CLK_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN4) No Clock  */
#define   CFG_CFGPCLKGEN4_TC_1_CSEL_REFO1_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 1  */
#define   CFG_CFGPCLKGEN4_TC_1_CSEL_REFO2_Val _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 2  */
#define   CFG_CFGPCLKGEN4_TC_1_CSEL_REFO3_Val _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 3  */
#define   CFG_CFGPCLKGEN4_TC_1_CSEL_REFO4_Val _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 4  */
#define   CFG_CFGPCLKGEN4_TC_1_CSEL_REFO5_Val _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 5  */
#define   CFG_CFGPCLKGEN4_TC_1_CSEL_REFO6_Val _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 6  */
#define   CFG_CFGPCLKGEN4_TC_1_CSEL_LPCLK_Val _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN4) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN4_TC_1_CSEL_NO_CLK      (CFG_CFGPCLKGEN4_TC_1_CSEL_NO_CLK_Val << CFG_CFGPCLKGEN4_TC_1_CSEL_Pos) /* (CFG_CFGPCLKGEN4) No Clock Position */
#define CFG_CFGPCLKGEN4_TC_1_CSEL_REFO1       (CFG_CFGPCLKGEN4_TC_1_CSEL_REFO1_Val << CFG_CFGPCLKGEN4_TC_1_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN4_TC_1_CSEL_REFO2       (CFG_CFGPCLKGEN4_TC_1_CSEL_REFO2_Val << CFG_CFGPCLKGEN4_TC_1_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN4_TC_1_CSEL_REFO3       (CFG_CFGPCLKGEN4_TC_1_CSEL_REFO3_Val << CFG_CFGPCLKGEN4_TC_1_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN4_TC_1_CSEL_REFO4       (CFG_CFGPCLKGEN4_TC_1_CSEL_REFO4_Val << CFG_CFGPCLKGEN4_TC_1_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN4_TC_1_CSEL_REFO5       (CFG_CFGPCLKGEN4_TC_1_CSEL_REFO5_Val << CFG_CFGPCLKGEN4_TC_1_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN4_TC_1_CSEL_REFO6       (CFG_CFGPCLKGEN4_TC_1_CSEL_REFO6_Val << CFG_CFGPCLKGEN4_TC_1_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN4_TC_1_CSEL_LPCLK       (CFG_CFGPCLKGEN4_TC_1_CSEL_LPCLK_Val << CFG_CFGPCLKGEN4_TC_1_CSEL_Pos) /* (CFG_CFGPCLKGEN4) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN4_TC_1_CD_Pos           _UINT32_(7)                                          /* (CFG_CFGPCLKGEN4) TC1 Clock Disable Position */
#define CFG_CFGPCLKGEN4_TC_1_CD_Msk           (_UINT32_(0x1) << CFG_CFGPCLKGEN4_TC_1_CD_Pos)       /* (CFG_CFGPCLKGEN4) TC1 Clock Disable Mask */
#define CFG_CFGPCLKGEN4_TC_1_CD(value)        (CFG_CFGPCLKGEN4_TC_1_CD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN4_TC_1_CD_Pos)) /* Assignment of value for TC_1_CD in the CFG_CFGPCLKGEN4 register */
#define   CFG_CFGPCLKGEN4_TC_1_CD_ON_Val      _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN4) Enable PGCLK  */
#define   CFG_CFGPCLKGEN4_TC_1_CD_OFF_Val     _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN4) Disable PGCLK  */
#define CFG_CFGPCLKGEN4_TC_1_CD_ON            (CFG_CFGPCLKGEN4_TC_1_CD_ON_Val << CFG_CFGPCLKGEN4_TC_1_CD_Pos) /* (CFG_CFGPCLKGEN4) Enable PGCLK Position */
#define CFG_CFGPCLKGEN4_TC_1_CD_OFF           (CFG_CFGPCLKGEN4_TC_1_CD_OFF_Val << CFG_CFGPCLKGEN4_TC_1_CD_Pos) /* (CFG_CFGPCLKGEN4) Disable PGCLK Position */
#define CFG_CFGPCLKGEN4_TC_2_3_CSEL_Pos       _UINT32_(8)                                          /* (CFG_CFGPCLKGEN4) TC23 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN4_TC_2_3_CSEL_Msk       (_UINT32_(0x7) << CFG_CFGPCLKGEN4_TC_2_3_CSEL_Pos)   /* (CFG_CFGPCLKGEN4) TC23 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN4_TC_2_3_CSEL(value)    (CFG_CFGPCLKGEN4_TC_2_3_CSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN4_TC_2_3_CSEL_Pos)) /* Assignment of value for TC_2_3_CSEL in the CFG_CFGPCLKGEN4 register */
#define   CFG_CFGPCLKGEN4_TC_2_3_CSEL_NO_CLK_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN4) No Clock  */
#define   CFG_CFGPCLKGEN4_TC_2_3_CSEL_REFO1_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 1  */
#define   CFG_CFGPCLKGEN4_TC_2_3_CSEL_REFO2_Val _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 2  */
#define   CFG_CFGPCLKGEN4_TC_2_3_CSEL_REFO3_Val _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 3  */
#define   CFG_CFGPCLKGEN4_TC_2_3_CSEL_REFO4_Val _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 4  */
#define   CFG_CFGPCLKGEN4_TC_2_3_CSEL_REFO5_Val _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 5  */
#define   CFG_CFGPCLKGEN4_TC_2_3_CSEL_REFO6_Val _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 6  */
#define   CFG_CFGPCLKGEN4_TC_2_3_CSEL_LPCLK_Val _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN4) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN4_TC_2_3_CSEL_NO_CLK    (CFG_CFGPCLKGEN4_TC_2_3_CSEL_NO_CLK_Val << CFG_CFGPCLKGEN4_TC_2_3_CSEL_Pos) /* (CFG_CFGPCLKGEN4) No Clock Position */
#define CFG_CFGPCLKGEN4_TC_2_3_CSEL_REFO1     (CFG_CFGPCLKGEN4_TC_2_3_CSEL_REFO1_Val << CFG_CFGPCLKGEN4_TC_2_3_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN4_TC_2_3_CSEL_REFO2     (CFG_CFGPCLKGEN4_TC_2_3_CSEL_REFO2_Val << CFG_CFGPCLKGEN4_TC_2_3_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN4_TC_2_3_CSEL_REFO3     (CFG_CFGPCLKGEN4_TC_2_3_CSEL_REFO3_Val << CFG_CFGPCLKGEN4_TC_2_3_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN4_TC_2_3_CSEL_REFO4     (CFG_CFGPCLKGEN4_TC_2_3_CSEL_REFO4_Val << CFG_CFGPCLKGEN4_TC_2_3_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN4_TC_2_3_CSEL_REFO5     (CFG_CFGPCLKGEN4_TC_2_3_CSEL_REFO5_Val << CFG_CFGPCLKGEN4_TC_2_3_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN4_TC_2_3_CSEL_REFO6     (CFG_CFGPCLKGEN4_TC_2_3_CSEL_REFO6_Val << CFG_CFGPCLKGEN4_TC_2_3_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN4_TC_2_3_CSEL_LPCLK     (CFG_CFGPCLKGEN4_TC_2_3_CSEL_LPCLK_Val << CFG_CFGPCLKGEN4_TC_2_3_CSEL_Pos) /* (CFG_CFGPCLKGEN4) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN4_TC_2_3_CD_Pos         _UINT32_(11)                                         /* (CFG_CFGPCLKGEN4) TC23 Clock Disable Position */
#define CFG_CFGPCLKGEN4_TC_2_3_CD_Msk         (_UINT32_(0x1) << CFG_CFGPCLKGEN4_TC_2_3_CD_Pos)     /* (CFG_CFGPCLKGEN4) TC23 Clock Disable Mask */
#define CFG_CFGPCLKGEN4_TC_2_3_CD(value)      (CFG_CFGPCLKGEN4_TC_2_3_CD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN4_TC_2_3_CD_Pos)) /* Assignment of value for TC_2_3_CD in the CFG_CFGPCLKGEN4 register */
#define   CFG_CFGPCLKGEN4_TC_2_3_CD_ON_Val    _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN4) Enable PGCLK  */
#define   CFG_CFGPCLKGEN4_TC_2_3_CD_OFF_Val   _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN4) Disable PGCLK  */
#define CFG_CFGPCLKGEN4_TC_2_3_CD_ON          (CFG_CFGPCLKGEN4_TC_2_3_CD_ON_Val << CFG_CFGPCLKGEN4_TC_2_3_CD_Pos) /* (CFG_CFGPCLKGEN4) Enable PGCLK Position */
#define CFG_CFGPCLKGEN4_TC_2_3_CD_OFF         (CFG_CFGPCLKGEN4_TC_2_3_CD_OFF_Val << CFG_CFGPCLKGEN4_TC_2_3_CD_Pos) /* (CFG_CFGPCLKGEN4) Disable PGCLK Position */
#define CFG_CFGPCLKGEN4_TC_4_5_CSEL_Pos       _UINT32_(12)                                         /* (CFG_CFGPCLKGEN4) TC45 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN4_TC_4_5_CSEL_Msk       (_UINT32_(0x7) << CFG_CFGPCLKGEN4_TC_4_5_CSEL_Pos)   /* (CFG_CFGPCLKGEN4) TC45 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN4_TC_4_5_CSEL(value)    (CFG_CFGPCLKGEN4_TC_4_5_CSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN4_TC_4_5_CSEL_Pos)) /* Assignment of value for TC_4_5_CSEL in the CFG_CFGPCLKGEN4 register */
#define   CFG_CFGPCLKGEN4_TC_4_5_CSEL_NO_CLK_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN4) No Clock  */
#define   CFG_CFGPCLKGEN4_TC_4_5_CSEL_REFO1_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 1  */
#define   CFG_CFGPCLKGEN4_TC_4_5_CSEL_REFO2_Val _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 2  */
#define   CFG_CFGPCLKGEN4_TC_4_5_CSEL_REFO3_Val _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 3  */
#define   CFG_CFGPCLKGEN4_TC_4_5_CSEL_REFO4_Val _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 4  */
#define   CFG_CFGPCLKGEN4_TC_4_5_CSEL_REFO5_Val _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 5  */
#define   CFG_CFGPCLKGEN4_TC_4_5_CSEL_REFO6_Val _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 6  */
#define   CFG_CFGPCLKGEN4_TC_4_5_CSEL_LPCLK_Val _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN4) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN4_TC_4_5_CSEL_NO_CLK    (CFG_CFGPCLKGEN4_TC_4_5_CSEL_NO_CLK_Val << CFG_CFGPCLKGEN4_TC_4_5_CSEL_Pos) /* (CFG_CFGPCLKGEN4) No Clock Position */
#define CFG_CFGPCLKGEN4_TC_4_5_CSEL_REFO1     (CFG_CFGPCLKGEN4_TC_4_5_CSEL_REFO1_Val << CFG_CFGPCLKGEN4_TC_4_5_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN4_TC_4_5_CSEL_REFO2     (CFG_CFGPCLKGEN4_TC_4_5_CSEL_REFO2_Val << CFG_CFGPCLKGEN4_TC_4_5_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN4_TC_4_5_CSEL_REFO3     (CFG_CFGPCLKGEN4_TC_4_5_CSEL_REFO3_Val << CFG_CFGPCLKGEN4_TC_4_5_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN4_TC_4_5_CSEL_REFO4     (CFG_CFGPCLKGEN4_TC_4_5_CSEL_REFO4_Val << CFG_CFGPCLKGEN4_TC_4_5_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN4_TC_4_5_CSEL_REFO5     (CFG_CFGPCLKGEN4_TC_4_5_CSEL_REFO5_Val << CFG_CFGPCLKGEN4_TC_4_5_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN4_TC_4_5_CSEL_REFO6     (CFG_CFGPCLKGEN4_TC_4_5_CSEL_REFO6_Val << CFG_CFGPCLKGEN4_TC_4_5_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN4_TC_4_5_CSEL_LPCLK     (CFG_CFGPCLKGEN4_TC_4_5_CSEL_LPCLK_Val << CFG_CFGPCLKGEN4_TC_4_5_CSEL_Pos) /* (CFG_CFGPCLKGEN4) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN4_TC_4_5_CD_Pos         _UINT32_(15)                                         /* (CFG_CFGPCLKGEN4) TC45 Clock Disable Position */
#define CFG_CFGPCLKGEN4_TC_4_5_CD_Msk         (_UINT32_(0x1) << CFG_CFGPCLKGEN4_TC_4_5_CD_Pos)     /* (CFG_CFGPCLKGEN4) TC45 Clock Disable Mask */
#define CFG_CFGPCLKGEN4_TC_4_5_CD(value)      (CFG_CFGPCLKGEN4_TC_4_5_CD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN4_TC_4_5_CD_Pos)) /* Assignment of value for TC_4_5_CD in the CFG_CFGPCLKGEN4 register */
#define   CFG_CFGPCLKGEN4_TC_4_5_CD_ON_Val    _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN4) Enable PGCLK  */
#define   CFG_CFGPCLKGEN4_TC_4_5_CD_OFF_Val   _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN4) Disable PGCLK  */
#define CFG_CFGPCLKGEN4_TC_4_5_CD_ON          (CFG_CFGPCLKGEN4_TC_4_5_CD_ON_Val << CFG_CFGPCLKGEN4_TC_4_5_CD_Pos) /* (CFG_CFGPCLKGEN4) Enable PGCLK Position */
#define CFG_CFGPCLKGEN4_TC_4_5_CD_OFF         (CFG_CFGPCLKGEN4_TC_4_5_CD_OFF_Val << CFG_CFGPCLKGEN4_TC_4_5_CD_Pos) /* (CFG_CFGPCLKGEN4) Disable PGCLK Position */
#define CFG_CFGPCLKGEN4_TC_6_7_CSEL_Pos       _UINT32_(16)                                         /* (CFG_CFGPCLKGEN4) TC67 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN4_TC_6_7_CSEL_Msk       (_UINT32_(0x7) << CFG_CFGPCLKGEN4_TC_6_7_CSEL_Pos)   /* (CFG_CFGPCLKGEN4) TC67 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN4_TC_6_7_CSEL(value)    (CFG_CFGPCLKGEN4_TC_6_7_CSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN4_TC_6_7_CSEL_Pos)) /* Assignment of value for TC_6_7_CSEL in the CFG_CFGPCLKGEN4 register */
#define   CFG_CFGPCLKGEN4_TC_6_7_CSEL_NO_CLK_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN4) No Clock  */
#define   CFG_CFGPCLKGEN4_TC_6_7_CSEL_REFO1_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 1  */
#define   CFG_CFGPCLKGEN4_TC_6_7_CSEL_REFO2_Val _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 2  */
#define   CFG_CFGPCLKGEN4_TC_6_7_CSEL_REFO3_Val _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 3  */
#define   CFG_CFGPCLKGEN4_TC_6_7_CSEL_REFO4_Val _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 4  */
#define   CFG_CFGPCLKGEN4_TC_6_7_CSEL_REFO5_Val _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 5  */
#define   CFG_CFGPCLKGEN4_TC_6_7_CSEL_REFO6_Val _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 6  */
#define   CFG_CFGPCLKGEN4_TC_6_7_CSEL_LPCLK_Val _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN4) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN4_TC_6_7_CSEL_NO_CLK    (CFG_CFGPCLKGEN4_TC_6_7_CSEL_NO_CLK_Val << CFG_CFGPCLKGEN4_TC_6_7_CSEL_Pos) /* (CFG_CFGPCLKGEN4) No Clock Position */
#define CFG_CFGPCLKGEN4_TC_6_7_CSEL_REFO1     (CFG_CFGPCLKGEN4_TC_6_7_CSEL_REFO1_Val << CFG_CFGPCLKGEN4_TC_6_7_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN4_TC_6_7_CSEL_REFO2     (CFG_CFGPCLKGEN4_TC_6_7_CSEL_REFO2_Val << CFG_CFGPCLKGEN4_TC_6_7_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN4_TC_6_7_CSEL_REFO3     (CFG_CFGPCLKGEN4_TC_6_7_CSEL_REFO3_Val << CFG_CFGPCLKGEN4_TC_6_7_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN4_TC_6_7_CSEL_REFO4     (CFG_CFGPCLKGEN4_TC_6_7_CSEL_REFO4_Val << CFG_CFGPCLKGEN4_TC_6_7_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN4_TC_6_7_CSEL_REFO5     (CFG_CFGPCLKGEN4_TC_6_7_CSEL_REFO5_Val << CFG_CFGPCLKGEN4_TC_6_7_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN4_TC_6_7_CSEL_REFO6     (CFG_CFGPCLKGEN4_TC_6_7_CSEL_REFO6_Val << CFG_CFGPCLKGEN4_TC_6_7_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN4_TC_6_7_CSEL_LPCLK     (CFG_CFGPCLKGEN4_TC_6_7_CSEL_LPCLK_Val << CFG_CFGPCLKGEN4_TC_6_7_CSEL_Pos) /* (CFG_CFGPCLKGEN4) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN4_TC_6_7_CD_Pos         _UINT32_(19)                                         /* (CFG_CFGPCLKGEN4) TC67 Clock Disable Position */
#define CFG_CFGPCLKGEN4_TC_6_7_CD_Msk         (_UINT32_(0x1) << CFG_CFGPCLKGEN4_TC_6_7_CD_Pos)     /* (CFG_CFGPCLKGEN4) TC67 Clock Disable Mask */
#define CFG_CFGPCLKGEN4_TC_6_7_CD(value)      (CFG_CFGPCLKGEN4_TC_6_7_CD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN4_TC_6_7_CD_Pos)) /* Assignment of value for TC_6_7_CD in the CFG_CFGPCLKGEN4 register */
#define   CFG_CFGPCLKGEN4_TC_6_7_CD_ON_Val    _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN4) Enable PGCLK  */
#define   CFG_CFGPCLKGEN4_TC_6_7_CD_OFF_Val   _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN4) Disable PGCLK  */
#define CFG_CFGPCLKGEN4_TC_6_7_CD_ON          (CFG_CFGPCLKGEN4_TC_6_7_CD_ON_Val << CFG_CFGPCLKGEN4_TC_6_7_CD_Pos) /* (CFG_CFGPCLKGEN4) Enable PGCLK Position */
#define CFG_CFGPCLKGEN4_TC_6_7_CD_OFF         (CFG_CFGPCLKGEN4_TC_6_7_CD_OFF_Val << CFG_CFGPCLKGEN4_TC_6_7_CD_Pos) /* (CFG_CFGPCLKGEN4) Disable PGCLK Position */
#define CFG_CFGPCLKGEN4_TC_8_9_CSEL_Pos       _UINT32_(20)                                         /* (CFG_CFGPCLKGEN4) TC89 Peripheral Clock Selection Position */
#define CFG_CFGPCLKGEN4_TC_8_9_CSEL_Msk       (_UINT32_(0x7) << CFG_CFGPCLKGEN4_TC_8_9_CSEL_Pos)   /* (CFG_CFGPCLKGEN4) TC89 Peripheral Clock Selection Mask */
#define CFG_CFGPCLKGEN4_TC_8_9_CSEL(value)    (CFG_CFGPCLKGEN4_TC_8_9_CSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN4_TC_8_9_CSEL_Pos)) /* Assignment of value for TC_8_9_CSEL in the CFG_CFGPCLKGEN4 register */
#define   CFG_CFGPCLKGEN4_TC_8_9_CSEL_NO_CLK_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN4) No Clock  */
#define   CFG_CFGPCLKGEN4_TC_8_9_CSEL_REFO1_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 1  */
#define   CFG_CFGPCLKGEN4_TC_8_9_CSEL_REFO2_Val _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 2  */
#define   CFG_CFGPCLKGEN4_TC_8_9_CSEL_REFO3_Val _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 3  */
#define   CFG_CFGPCLKGEN4_TC_8_9_CSEL_REFO4_Val _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 4  */
#define   CFG_CFGPCLKGEN4_TC_8_9_CSEL_REFO5_Val _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 5  */
#define   CFG_CFGPCLKGEN4_TC_8_9_CSEL_REFO6_Val _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 6  */
#define   CFG_CFGPCLKGEN4_TC_8_9_CSEL_LPCLK_Val _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN4) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN4_TC_8_9_CSEL_NO_CLK    (CFG_CFGPCLKGEN4_TC_8_9_CSEL_NO_CLK_Val << CFG_CFGPCLKGEN4_TC_8_9_CSEL_Pos) /* (CFG_CFGPCLKGEN4) No Clock Position */
#define CFG_CFGPCLKGEN4_TC_8_9_CSEL_REFO1     (CFG_CFGPCLKGEN4_TC_8_9_CSEL_REFO1_Val << CFG_CFGPCLKGEN4_TC_8_9_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN4_TC_8_9_CSEL_REFO2     (CFG_CFGPCLKGEN4_TC_8_9_CSEL_REFO2_Val << CFG_CFGPCLKGEN4_TC_8_9_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN4_TC_8_9_CSEL_REFO3     (CFG_CFGPCLKGEN4_TC_8_9_CSEL_REFO3_Val << CFG_CFGPCLKGEN4_TC_8_9_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN4_TC_8_9_CSEL_REFO4     (CFG_CFGPCLKGEN4_TC_8_9_CSEL_REFO4_Val << CFG_CFGPCLKGEN4_TC_8_9_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN4_TC_8_9_CSEL_REFO5     (CFG_CFGPCLKGEN4_TC_8_9_CSEL_REFO5_Val << CFG_CFGPCLKGEN4_TC_8_9_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN4_TC_8_9_CSEL_REFO6     (CFG_CFGPCLKGEN4_TC_8_9_CSEL_REFO6_Val << CFG_CFGPCLKGEN4_TC_8_9_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN4_TC_8_9_CSEL_LPCLK     (CFG_CFGPCLKGEN4_TC_8_9_CSEL_LPCLK_Val << CFG_CFGPCLKGEN4_TC_8_9_CSEL_Pos) /* (CFG_CFGPCLKGEN4) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN4_TC_8_9_CD_Pos         _UINT32_(23)                                         /* (CFG_CFGPCLKGEN4) TC89 Clock Disable Position */
#define CFG_CFGPCLKGEN4_TC_8_9_CD_Msk         (_UINT32_(0x1) << CFG_CFGPCLKGEN4_TC_8_9_CD_Pos)     /* (CFG_CFGPCLKGEN4) TC89 Clock Disable Mask */
#define CFG_CFGPCLKGEN4_TC_8_9_CD(value)      (CFG_CFGPCLKGEN4_TC_8_9_CD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN4_TC_8_9_CD_Pos)) /* Assignment of value for TC_8_9_CD in the CFG_CFGPCLKGEN4 register */
#define   CFG_CFGPCLKGEN4_TC_8_9_CD_ON_Val    _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN4) Enable PGCLK  */
#define   CFG_CFGPCLKGEN4_TC_8_9_CD_OFF_Val   _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN4) Disable PGCLK  */
#define CFG_CFGPCLKGEN4_TC_8_9_CD_ON          (CFG_CFGPCLKGEN4_TC_8_9_CD_ON_Val << CFG_CFGPCLKGEN4_TC_8_9_CD_Pos) /* (CFG_CFGPCLKGEN4) Enable PGCLK Position */
#define CFG_CFGPCLKGEN4_TC_8_9_CD_OFF         (CFG_CFGPCLKGEN4_TC_8_9_CD_OFF_Val << CFG_CFGPCLKGEN4_TC_8_9_CD_Pos) /* (CFG_CFGPCLKGEN4) Disable PGCLK Position */
#define CFG_CFGPCLKGEN4_CAN_0_CSEL_Pos        _UINT32_(24)                                         /* (CFG_CFGPCLKGEN4) CAN0 Clock Selection Position */
#define CFG_CFGPCLKGEN4_CAN_0_CSEL_Msk        (_UINT32_(0x7) << CFG_CFGPCLKGEN4_CAN_0_CSEL_Pos)    /* (CFG_CFGPCLKGEN4) CAN0 Clock Selection Mask */
#define CFG_CFGPCLKGEN4_CAN_0_CSEL(value)     (CFG_CFGPCLKGEN4_CAN_0_CSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN4_CAN_0_CSEL_Pos)) /* Assignment of value for CAN_0_CSEL in the CFG_CFGPCLKGEN4 register */
#define   CFG_CFGPCLKGEN4_CAN_0_CSEL_NO_CLK_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN4) No Clock  */
#define   CFG_CFGPCLKGEN4_CAN_0_CSEL_REFO1_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 1  */
#define   CFG_CFGPCLKGEN4_CAN_0_CSEL_REFO2_Val _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 2  */
#define   CFG_CFGPCLKGEN4_CAN_0_CSEL_REFO3_Val _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 3  */
#define   CFG_CFGPCLKGEN4_CAN_0_CSEL_REFO4_Val _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 4  */
#define   CFG_CFGPCLKGEN4_CAN_0_CSEL_REFO5_Val _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 5  */
#define   CFG_CFGPCLKGEN4_CAN_0_CSEL_REFO6_Val _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 6  */
#define   CFG_CFGPCLKGEN4_CAN_0_CSEL_LPCLK_Val _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN4) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN4_CAN_0_CSEL_NO_CLK     (CFG_CFGPCLKGEN4_CAN_0_CSEL_NO_CLK_Val << CFG_CFGPCLKGEN4_CAN_0_CSEL_Pos) /* (CFG_CFGPCLKGEN4) No Clock Position */
#define CFG_CFGPCLKGEN4_CAN_0_CSEL_REFO1      (CFG_CFGPCLKGEN4_CAN_0_CSEL_REFO1_Val << CFG_CFGPCLKGEN4_CAN_0_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN4_CAN_0_CSEL_REFO2      (CFG_CFGPCLKGEN4_CAN_0_CSEL_REFO2_Val << CFG_CFGPCLKGEN4_CAN_0_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN4_CAN_0_CSEL_REFO3      (CFG_CFGPCLKGEN4_CAN_0_CSEL_REFO3_Val << CFG_CFGPCLKGEN4_CAN_0_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN4_CAN_0_CSEL_REFO4      (CFG_CFGPCLKGEN4_CAN_0_CSEL_REFO4_Val << CFG_CFGPCLKGEN4_CAN_0_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN4_CAN_0_CSEL_REFO5      (CFG_CFGPCLKGEN4_CAN_0_CSEL_REFO5_Val << CFG_CFGPCLKGEN4_CAN_0_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN4_CAN_0_CSEL_REFO6      (CFG_CFGPCLKGEN4_CAN_0_CSEL_REFO6_Val << CFG_CFGPCLKGEN4_CAN_0_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN4_CAN_0_CSEL_LPCLK      (CFG_CFGPCLKGEN4_CAN_0_CSEL_LPCLK_Val << CFG_CFGPCLKGEN4_CAN_0_CSEL_Pos) /* (CFG_CFGPCLKGEN4) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN4_CAN_0_CD_Pos          _UINT32_(27)                                         /* (CFG_CFGPCLKGEN4) CAN0 Clock Disable Position */
#define CFG_CFGPCLKGEN4_CAN_0_CD_Msk          (_UINT32_(0x1) << CFG_CFGPCLKGEN4_CAN_0_CD_Pos)      /* (CFG_CFGPCLKGEN4) CAN0 Clock Disable Mask */
#define CFG_CFGPCLKGEN4_CAN_0_CD(value)       (CFG_CFGPCLKGEN4_CAN_0_CD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN4_CAN_0_CD_Pos)) /* Assignment of value for CAN_0_CD in the CFG_CFGPCLKGEN4 register */
#define   CFG_CFGPCLKGEN4_CAN_0_CD_ON_Val     _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN4) Enable PGCLK  */
#define   CFG_CFGPCLKGEN4_CAN_0_CD_OFF_Val    _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN4) Disable PGCLK  */
#define CFG_CFGPCLKGEN4_CAN_0_CD_ON           (CFG_CFGPCLKGEN4_CAN_0_CD_ON_Val << CFG_CFGPCLKGEN4_CAN_0_CD_Pos) /* (CFG_CFGPCLKGEN4) Enable PGCLK Position */
#define CFG_CFGPCLKGEN4_CAN_0_CD_OFF          (CFG_CFGPCLKGEN4_CAN_0_CD_OFF_Val << CFG_CFGPCLKGEN4_CAN_0_CD_Pos) /* (CFG_CFGPCLKGEN4) Disable PGCLK Position */
#define CFG_CFGPCLKGEN4_CAN_1_CSEL_Pos        _UINT32_(28)                                         /* (CFG_CFGPCLKGEN4) CAN1 Clock Selection Position */
#define CFG_CFGPCLKGEN4_CAN_1_CSEL_Msk        (_UINT32_(0x7) << CFG_CFGPCLKGEN4_CAN_1_CSEL_Pos)    /* (CFG_CFGPCLKGEN4) CAN1 Clock Selection Mask */
#define CFG_CFGPCLKGEN4_CAN_1_CSEL(value)     (CFG_CFGPCLKGEN4_CAN_1_CSEL_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN4_CAN_1_CSEL_Pos)) /* Assignment of value for CAN_1_CSEL in the CFG_CFGPCLKGEN4 register */
#define   CFG_CFGPCLKGEN4_CAN_1_CSEL_NO_CLK_Val _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN4) No Clock  */
#define   CFG_CFGPCLKGEN4_CAN_1_CSEL_REFO1_Val _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 1  */
#define   CFG_CFGPCLKGEN4_CAN_1_CSEL_REFO2_Val _UINT32_(0x2)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 2  */
#define   CFG_CFGPCLKGEN4_CAN_1_CSEL_REFO3_Val _UINT32_(0x3)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 3  */
#define   CFG_CFGPCLKGEN4_CAN_1_CSEL_REFO4_Val _UINT32_(0x4)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 4  */
#define   CFG_CFGPCLKGEN4_CAN_1_CSEL_REFO5_Val _UINT32_(0x5)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 5  */
#define   CFG_CFGPCLKGEN4_CAN_1_CSEL_REFO6_Val _UINT32_(0x6)                                        /* (CFG_CFGPCLKGEN4) Reference Clock 6  */
#define   CFG_CFGPCLKGEN4_CAN_1_CSEL_LPCLK_Val _UINT32_(0x7)                                        /* (CFG_CFGPCLKGEN4) 32 KHz Low Power Clock  */
#define CFG_CFGPCLKGEN4_CAN_1_CSEL_NO_CLK     (CFG_CFGPCLKGEN4_CAN_1_CSEL_NO_CLK_Val << CFG_CFGPCLKGEN4_CAN_1_CSEL_Pos) /* (CFG_CFGPCLKGEN4) No Clock Position */
#define CFG_CFGPCLKGEN4_CAN_1_CSEL_REFO1      (CFG_CFGPCLKGEN4_CAN_1_CSEL_REFO1_Val << CFG_CFGPCLKGEN4_CAN_1_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 1 Position */
#define CFG_CFGPCLKGEN4_CAN_1_CSEL_REFO2      (CFG_CFGPCLKGEN4_CAN_1_CSEL_REFO2_Val << CFG_CFGPCLKGEN4_CAN_1_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 2 Position */
#define CFG_CFGPCLKGEN4_CAN_1_CSEL_REFO3      (CFG_CFGPCLKGEN4_CAN_1_CSEL_REFO3_Val << CFG_CFGPCLKGEN4_CAN_1_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 3 Position */
#define CFG_CFGPCLKGEN4_CAN_1_CSEL_REFO4      (CFG_CFGPCLKGEN4_CAN_1_CSEL_REFO4_Val << CFG_CFGPCLKGEN4_CAN_1_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 4 Position */
#define CFG_CFGPCLKGEN4_CAN_1_CSEL_REFO5      (CFG_CFGPCLKGEN4_CAN_1_CSEL_REFO5_Val << CFG_CFGPCLKGEN4_CAN_1_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 5 Position */
#define CFG_CFGPCLKGEN4_CAN_1_CSEL_REFO6      (CFG_CFGPCLKGEN4_CAN_1_CSEL_REFO6_Val << CFG_CFGPCLKGEN4_CAN_1_CSEL_Pos) /* (CFG_CFGPCLKGEN4) Reference Clock 6 Position */
#define CFG_CFGPCLKGEN4_CAN_1_CSEL_LPCLK      (CFG_CFGPCLKGEN4_CAN_1_CSEL_LPCLK_Val << CFG_CFGPCLKGEN4_CAN_1_CSEL_Pos) /* (CFG_CFGPCLKGEN4) 32 KHz Low Power Clock Position */
#define CFG_CFGPCLKGEN4_CAN_1_CD_Pos          _UINT32_(31)                                         /* (CFG_CFGPCLKGEN4) CAN1 Clock Disable Position */
#define CFG_CFGPCLKGEN4_CAN_1_CD_Msk          (_UINT32_(0x1) << CFG_CFGPCLKGEN4_CAN_1_CD_Pos)      /* (CFG_CFGPCLKGEN4) CAN1 Clock Disable Mask */
#define CFG_CFGPCLKGEN4_CAN_1_CD(value)       (CFG_CFGPCLKGEN4_CAN_1_CD_Msk & (_UINT32_(value) << CFG_CFGPCLKGEN4_CAN_1_CD_Pos)) /* Assignment of value for CAN_1_CD in the CFG_CFGPCLKGEN4 register */
#define   CFG_CFGPCLKGEN4_CAN_1_CD_ON_Val     _UINT32_(0x1)                                        /* (CFG_CFGPCLKGEN4) Enable PGCLK  */
#define   CFG_CFGPCLKGEN4_CAN_1_CD_OFF_Val    _UINT32_(0x0)                                        /* (CFG_CFGPCLKGEN4) Disable PGCLK  */
#define CFG_CFGPCLKGEN4_CAN_1_CD_ON           (CFG_CFGPCLKGEN4_CAN_1_CD_ON_Val << CFG_CFGPCLKGEN4_CAN_1_CD_Pos) /* (CFG_CFGPCLKGEN4) Enable PGCLK Position */
#define CFG_CFGPCLKGEN4_CAN_1_CD_OFF          (CFG_CFGPCLKGEN4_CAN_1_CD_OFF_Val << CFG_CFGPCLKGEN4_CAN_1_CD_Pos) /* (CFG_CFGPCLKGEN4) Disable PGCLK Position */
#define CFG_CFGPCLKGEN4_Msk                   _UINT32_(0xFFFFFFFF)                                 /* (CFG_CFGPCLKGEN4) Register Mask  */


/* -------- CFG_CFGPCLKGEN4CLR : (CFG Offset: 0xB4) (R/W 32) Bit clear register -------- */
#define CFG_CFGPCLKGEN4CLR_RESETVALUE         _UINT32_(0x00)                                       /*  (CFG_CFGPCLKGEN4CLR) Bit clear register  Reset Value */

#define CFG_CFGPCLKGEN4CLR_Msk                _UINT32_(0x00000000)                                 /* (CFG_CFGPCLKGEN4CLR) Register Mask  */


/* -------- CFG_CFGPCLKGEN4SET : (CFG Offset: 0xB8) (R/W 32) Bit set register -------- */
#define CFG_CFGPCLKGEN4SET_RESETVALUE         _UINT32_(0x00)                                       /*  (CFG_CFGPCLKGEN4SET) Bit set register  Reset Value */

#define CFG_CFGPCLKGEN4SET_Msk                _UINT32_(0x00000000)                                 /* (CFG_CFGPCLKGEN4SET) Register Mask  */


/* -------- CFG_CFGPCLKGEN4INV : (CFG Offset: 0xBC) (R/W 32) Bit invert register -------- */
#define CFG_CFGPCLKGEN4INV_RESETVALUE         _UINT32_(0x00)                                       /*  (CFG_CFGPCLKGEN4INV) Bit invert register  Reset Value */

#define CFG_CFGPCLKGEN4INV_Msk                _UINT32_(0x00000000)                                 /* (CFG_CFGPCLKGEN4INV) Register Mask  */


/* -------- CFG_USER_ID : (CFG Offset: 0xC0) (R/W 32)  -------- */
#define CFG_USER_ID_RESETVALUE                _UINT32_(0x00)                                       /*  (CFG_USER_ID)   Reset Value */

#define CFG_USER_ID_USER_ID_Pos               _UINT32_(0)                                          /* (CFG_USER_ID) User unique ID, readable using the SWD USER_ID instruction Position */
#define CFG_USER_ID_USER_ID_Msk               (_UINT32_(0xFFFF) << CFG_USER_ID_USER_ID_Pos)        /* (CFG_USER_ID) User unique ID, readable using the SWD USER_ID instruction Mask */
#define CFG_USER_ID_USER_ID(value)            (CFG_USER_ID_USER_ID_Msk & (_UINT32_(value) << CFG_USER_ID_USER_ID_Pos)) /* Assignment of value for USER_ID in the CFG_USER_ID register */
#define CFG_USER_ID_Msk                       _UINT32_(0x0000FFFF)                                 /* (CFG_USER_ID) Register Mask  */


/* -------- CFG_USER_IDCLR : (CFG Offset: 0xC4) (R/W 32) Bit clear register -------- */
#define CFG_USER_IDCLR_RESETVALUE             _UINT32_(0x00)                                       /*  (CFG_USER_IDCLR) Bit clear register  Reset Value */

#define CFG_USER_IDCLR_Msk                    _UINT32_(0x00000000)                                 /* (CFG_USER_IDCLR) Register Mask  */


/* -------- CFG_USER_IDSET : (CFG Offset: 0xC8) (R/W 32) Bit set register -------- */
#define CFG_USER_IDSET_RESETVALUE             _UINT32_(0x00)                                       /*  (CFG_USER_IDSET) Bit set register  Reset Value */

#define CFG_USER_IDSET_Msk                    _UINT32_(0x00000000)                                 /* (CFG_USER_IDSET) Register Mask  */


/* -------- CFG_USER_IDINV : (CFG Offset: 0xCC) (R/W 32) Bit invert register -------- */
#define CFG_USER_IDINV_RESETVALUE             _UINT32_(0x00)                                       /*  (CFG_USER_IDINV) Bit invert register  Reset Value */

#define CFG_USER_IDINV_Msk                    _UINT32_(0x00000000)                                 /* (CFG_USER_IDINV) Register Mask  */


/* -------- CFG_SYSKEY : (CFG Offset: 0xD0) (R/W 32)  -------- */
#define CFG_SYSKEY_RESETVALUE                 _UINT32_(0x00)                                       /*  (CFG_SYSKEY)   Reset Value */

#define CFG_SYSKEY_SYSKEY_Pos                 _UINT32_(0)                                          /* (CFG_SYSKEY) System Key Position */
#define CFG_SYSKEY_SYSKEY_Msk                 (_UINT32_(0xFFFFFFFF) << CFG_SYSKEY_SYSKEY_Pos)      /* (CFG_SYSKEY) System Key Mask */
#define CFG_SYSKEY_SYSKEY(value)              (CFG_SYSKEY_SYSKEY_Msk & (_UINT32_(value) << CFG_SYSKEY_SYSKEY_Pos)) /* Assignment of value for SYSKEY in the CFG_SYSKEY register */
#define CFG_SYSKEY_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (CFG_SYSKEY) Register Mask  */


/* -------- CFG_PMD1 : (CFG Offset: 0xE0) (R/W 32)  -------- */
#define CFG_PMD1_RESETVALUE                   _UINT32_(0x00)                                       /*  (CFG_PMD1)   Reset Value */

#define CFG_PMD1_DACMD_Pos                    _UINT32_(5)                                          /* (CFG_PMD1) DAC Module Disable Position */
#define CFG_PMD1_DACMD_Msk                    (_UINT32_(0x1) << CFG_PMD1_DACMD_Pos)                /* (CFG_PMD1) DAC Module Disable Mask */
#define CFG_PMD1_DACMD(value)                 (CFG_PMD1_DACMD_Msk & (_UINT32_(value) << CFG_PMD1_DACMD_Pos)) /* Assignment of value for DACMD in the CFG_PMD1 register */
#define CFG_PMD1_ACMD_Pos                     _UINT32_(6)                                          /* (CFG_PMD1) AC Module Disable Position */
#define CFG_PMD1_ACMD_Msk                     (_UINT32_(0x1) << CFG_PMD1_ACMD_Pos)                 /* (CFG_PMD1) AC Module Disable Mask */
#define CFG_PMD1_ACMD(value)                  (CFG_PMD1_ACMD_Msk & (_UINT32_(value) << CFG_PMD1_ACMD_Pos)) /* Assignment of value for ACMD in the CFG_PMD1 register */
#define CFG_PMD1_ADCMD_Pos                    _UINT32_(7)                                          /* (CFG_PMD1) ADC Controller Module Disable Position */
#define CFG_PMD1_ADCMD_Msk                    (_UINT32_(0x1) << CFG_PMD1_ADCMD_Pos)                /* (CFG_PMD1) ADC Controller Module Disable Mask */
#define CFG_PMD1_ADCMD(value)                 (CFG_PMD1_ADCMD_Msk & (_UINT32_(value) << CFG_PMD1_ADCMD_Pos)) /* Assignment of value for ADCMD in the CFG_PMD1 register */
#define CFG_PMD1_ADCSARMD_Pos                 _UINT32_(8)                                          /* (CFG_PMD1) ADC SAR Core Module Disable Position */
#define CFG_PMD1_ADCSARMD_Msk                 (_UINT32_(0x1) << CFG_PMD1_ADCSARMD_Pos)             /* (CFG_PMD1) ADC SAR Core Module Disable Mask */
#define CFG_PMD1_ADCSARMD(value)              (CFG_PMD1_ADCSARMD_Msk & (_UINT32_(value) << CFG_PMD1_ADCSARMD_Pos)) /* Assignment of value for ADCSARMD in the CFG_PMD1 register */
#define CFG_PMD1_CVDMD_Pos                    _UINT32_(9)                                          /* (CFG_PMD1) ADC CVD Module Disable Position */
#define CFG_PMD1_CVDMD_Msk                    (_UINT32_(0x1) << CFG_PMD1_CVDMD_Pos)                /* (CFG_PMD1) ADC CVD Module Disable Mask */
#define CFG_PMD1_CVDMD(value)                 (CFG_PMD1_CVDMD_Msk & (_UINT32_(value) << CFG_PMD1_CVDMD_Pos)) /* Assignment of value for CVDMD in the CFG_PMD1 register */
#define CFG_PMD1_ADCSARSHRMD_Pos              _UINT32_(10)                                         /* (CFG_PMD1) Shared ADC SAR Core Module Disable Position */
#define CFG_PMD1_ADCSARSHRMD_Msk              (_UINT32_(0x1) << CFG_PMD1_ADCSARSHRMD_Pos)          /* (CFG_PMD1) Shared ADC SAR Core Module Disable Mask */
#define CFG_PMD1_ADCSARSHRMD(value)           (CFG_PMD1_ADCSARSHRMD_Msk & (_UINT32_(value) << CFG_PMD1_ADCSARSHRMD_Pos)) /* Assignment of value for ADCSARSHRMD in the CFG_PMD1 register */
#define CFG_PMD1_RTCCMD_Pos                   _UINT32_(16)                                         /* (CFG_PMD1) RTCC Module Disable Position */
#define CFG_PMD1_RTCCMD_Msk                   (_UINT32_(0x1) << CFG_PMD1_RTCCMD_Pos)               /* (CFG_PMD1) RTCC Module Disable Mask */
#define CFG_PMD1_RTCCMD(value)                (CFG_PMD1_RTCCMD_Msk & (_UINT32_(value) << CFG_PMD1_RTCCMD_Pos)) /* Assignment of value for RTCCMD in the CFG_PMD1 register */
#define CFG_PMD1_SQIMD_Pos                    _UINT32_(29)                                         /* (CFG_PMD1) SQI Module Disable Position */
#define CFG_PMD1_SQIMD_Msk                    (_UINT32_(0x1) << CFG_PMD1_SQIMD_Pos)                /* (CFG_PMD1) SQI Module Disable Mask */
#define CFG_PMD1_SQIMD(value)                 (CFG_PMD1_SQIMD_Msk & (_UINT32_(value) << CFG_PMD1_SQIMD_Pos)) /* Assignment of value for SQIMD in the CFG_PMD1 register */
#define CFG_PMD1_Msk                          _UINT32_(0x200107E0)                                 /* (CFG_PMD1) Register Mask  */


/* -------- CFG_PMD1CLR : (CFG Offset: 0xE4) (R/W 32) Bit clear register -------- */
#define CFG_PMD1CLR_RESETVALUE                _UINT32_(0x00)                                       /*  (CFG_PMD1CLR) Bit clear register  Reset Value */

#define CFG_PMD1CLR_Msk                       _UINT32_(0x00000000)                                 /* (CFG_PMD1CLR) Register Mask  */


/* -------- CFG_PMD1SET : (CFG Offset: 0xE8) (R/W 32) Bit set register -------- */
#define CFG_PMD1SET_RESETVALUE                _UINT32_(0x00)                                       /*  (CFG_PMD1SET) Bit set register  Reset Value */

#define CFG_PMD1SET_Msk                       _UINT32_(0x00000000)                                 /* (CFG_PMD1SET) Register Mask  */


/* -------- CFG_PMD1INV : (CFG Offset: 0xEC) (R/W 32) Bit invert register -------- */
#define CFG_PMD1INV_RESETVALUE                _UINT32_(0x00)                                       /*  (CFG_PMD1INV) Bit invert register  Reset Value */

#define CFG_PMD1INV_Msk                       _UINT32_(0x00000000)                                 /* (CFG_PMD1INV) Register Mask  */


/* -------- CFG_PMD2 : (CFG Offset: 0xF0) (R/W 32)  -------- */
#define CFG_PMD2_RESETVALUE                   _UINT32_(0x00)                                       /*  (CFG_PMD2)   Reset Value */

#define CFG_PMD2_REFO5MD_Pos                  _UINT32_(24)                                         /* (CFG_PMD2) Reference (Clock) Out 5 Module Disable Position */
#define CFG_PMD2_REFO5MD_Msk                  (_UINT32_(0x1) << CFG_PMD2_REFO5MD_Pos)              /* (CFG_PMD2) Reference (Clock) Out 5 Module Disable Mask */
#define CFG_PMD2_REFO5MD(value)               (CFG_PMD2_REFO5MD_Msk & (_UINT32_(value) << CFG_PMD2_REFO5MD_Pos)) /* Assignment of value for REFO5MD in the CFG_PMD2 register */
#define CFG_PMD2_REFO6MD_Pos                  _UINT32_(25)                                         /* (CFG_PMD2) Reference (Clock) Out 6 Module Disable Position */
#define CFG_PMD2_REFO6MD_Msk                  (_UINT32_(0x1) << CFG_PMD2_REFO6MD_Pos)              /* (CFG_PMD2) Reference (Clock) Out 6 Module Disable Mask */
#define CFG_PMD2_REFO6MD(value)               (CFG_PMD2_REFO6MD_Msk & (_UINT32_(value) << CFG_PMD2_REFO6MD_Pos)) /* Assignment of value for REFO6MD in the CFG_PMD2 register */
#define CFG_PMD2_REFO1MD_Pos                  _UINT32_(28)                                         /* (CFG_PMD2) Reference (Clock) Out 1 Module Disable Position */
#define CFG_PMD2_REFO1MD_Msk                  (_UINT32_(0x1) << CFG_PMD2_REFO1MD_Pos)              /* (CFG_PMD2) Reference (Clock) Out 1 Module Disable Mask */
#define CFG_PMD2_REFO1MD(value)               (CFG_PMD2_REFO1MD_Msk & (_UINT32_(value) << CFG_PMD2_REFO1MD_Pos)) /* Assignment of value for REFO1MD in the CFG_PMD2 register */
#define CFG_PMD2_REFO2MD_Pos                  _UINT32_(29)                                         /* (CFG_PMD2) Reference (Clock) Out 2 Module Disable Position */
#define CFG_PMD2_REFO2MD_Msk                  (_UINT32_(0x1) << CFG_PMD2_REFO2MD_Pos)              /* (CFG_PMD2) Reference (Clock) Out 2 Module Disable Mask */
#define CFG_PMD2_REFO2MD(value)               (CFG_PMD2_REFO2MD_Msk & (_UINT32_(value) << CFG_PMD2_REFO2MD_Pos)) /* Assignment of value for REFO2MD in the CFG_PMD2 register */
#define CFG_PMD2_REFO3MD_Pos                  _UINT32_(30)                                         /* (CFG_PMD2) Reference (Clock) Out 3 Module Disable Position */
#define CFG_PMD2_REFO3MD_Msk                  (_UINT32_(0x1) << CFG_PMD2_REFO3MD_Pos)              /* (CFG_PMD2) Reference (Clock) Out 3 Module Disable Mask */
#define CFG_PMD2_REFO3MD(value)               (CFG_PMD2_REFO3MD_Msk & (_UINT32_(value) << CFG_PMD2_REFO3MD_Pos)) /* Assignment of value for REFO3MD in the CFG_PMD2 register */
#define CFG_PMD2_REFO4MD_Pos                  _UINT32_(31)                                         /* (CFG_PMD2) Reference (Clock) Out 4 Module Disable Position */
#define CFG_PMD2_REFO4MD_Msk                  (_UINT32_(0x1) << CFG_PMD2_REFO4MD_Pos)              /* (CFG_PMD2) Reference (Clock) Out 4 Module Disable Mask */
#define CFG_PMD2_REFO4MD(value)               (CFG_PMD2_REFO4MD_Msk & (_UINT32_(value) << CFG_PMD2_REFO4MD_Pos)) /* Assignment of value for REFO4MD in the CFG_PMD2 register */
#define CFG_PMD2_Msk                          _UINT32_(0xF3000000)                                 /* (CFG_PMD2) Register Mask  */


/* -------- CFG_PMD2CLR : (CFG Offset: 0xF4) (R/W 32) Bit clear register -------- */
#define CFG_PMD2CLR_RESETVALUE                _UINT32_(0x00)                                       /*  (CFG_PMD2CLR) Bit clear register  Reset Value */

#define CFG_PMD2CLR_Msk                       _UINT32_(0x00000000)                                 /* (CFG_PMD2CLR) Register Mask  */


/* -------- CFG_PMD2SET : (CFG Offset: 0xF8) (R/W 32) Bit set register -------- */
#define CFG_PMD2SET_RESETVALUE                _UINT32_(0x00)                                       /*  (CFG_PMD2SET) Bit set register  Reset Value */

#define CFG_PMD2SET_Msk                       _UINT32_(0x00000000)                                 /* (CFG_PMD2SET) Register Mask  */


/* -------- CFG_PMD2INV : (CFG Offset: 0xFC) (R/W 32) Bit invert register -------- */
#define CFG_PMD2INV_RESETVALUE                _UINT32_(0x00)                                       /*  (CFG_PMD2INV) Bit invert register  Reset Value */

#define CFG_PMD2INV_Msk                       _UINT32_(0x00000000)                                 /* (CFG_PMD2INV) Register Mask  */


/* -------- CFG_PMD3 : (CFG Offset: 0x100) (R/W 32)  -------- */
#define CFG_PMD3_RESETVALUE                   _UINT32_(0x00)                                       /*  (CFG_PMD3)   Reset Value */

#define CFG_PMD3_SER0MD_Pos                   _UINT32_(0)                                          /* (CFG_PMD3) SERCOM0 Module Disable Position */
#define CFG_PMD3_SER0MD_Msk                   (_UINT32_(0x1) << CFG_PMD3_SER0MD_Pos)               /* (CFG_PMD3) SERCOM0 Module Disable Mask */
#define CFG_PMD3_SER0MD(value)                (CFG_PMD3_SER0MD_Msk & (_UINT32_(value) << CFG_PMD3_SER0MD_Pos)) /* Assignment of value for SER0MD in the CFG_PMD3 register */
#define CFG_PMD3_SER1MD_Pos                   _UINT32_(1)                                          /* (CFG_PMD3) SERCOM1 Module Disable Position */
#define CFG_PMD3_SER1MD_Msk                   (_UINT32_(0x1) << CFG_PMD3_SER1MD_Pos)               /* (CFG_PMD3) SERCOM1 Module Disable Mask */
#define CFG_PMD3_SER1MD(value)                (CFG_PMD3_SER1MD_Msk & (_UINT32_(value) << CFG_PMD3_SER1MD_Pos)) /* Assignment of value for SER1MD in the CFG_PMD3 register */
#define CFG_PMD3_SER2MD_Pos                   _UINT32_(2)                                          /* (CFG_PMD3) SERCOM2 Module Disable Position */
#define CFG_PMD3_SER2MD_Msk                   (_UINT32_(0x1) << CFG_PMD3_SER2MD_Pos)               /* (CFG_PMD3) SERCOM2 Module Disable Mask */
#define CFG_PMD3_SER2MD(value)                (CFG_PMD3_SER2MD_Msk & (_UINT32_(value) << CFG_PMD3_SER2MD_Pos)) /* Assignment of value for SER2MD in the CFG_PMD3 register */
#define CFG_PMD3_SER3MD_Pos                   _UINT32_(3)                                          /* (CFG_PMD3) SERCOM3 Module Disable Position */
#define CFG_PMD3_SER3MD_Msk                   (_UINT32_(0x1) << CFG_PMD3_SER3MD_Pos)               /* (CFG_PMD3) SERCOM3 Module Disable Mask */
#define CFG_PMD3_SER3MD(value)                (CFG_PMD3_SER3MD_Msk & (_UINT32_(value) << CFG_PMD3_SER3MD_Pos)) /* Assignment of value for SER3MD in the CFG_PMD3 register */
#define CFG_PMD3_SER4MD_Pos                   _UINT32_(4)                                          /* (CFG_PMD3) SERCOM4 Module Disable Position */
#define CFG_PMD3_SER4MD_Msk                   (_UINT32_(0x1) << CFG_PMD3_SER4MD_Pos)               /* (CFG_PMD3) SERCOM4 Module Disable Mask */
#define CFG_PMD3_SER4MD(value)                (CFG_PMD3_SER4MD_Msk & (_UINT32_(value) << CFG_PMD3_SER4MD_Pos)) /* Assignment of value for SER4MD in the CFG_PMD3 register */
#define CFG_PMD3_SER5MD_Pos                   _UINT32_(5)                                          /* (CFG_PMD3) SERCOM5 Module Disable Position */
#define CFG_PMD3_SER5MD_Msk                   (_UINT32_(0x1) << CFG_PMD3_SER5MD_Pos)               /* (CFG_PMD3) SERCOM5 Module Disable Mask */
#define CFG_PMD3_SER5MD(value)                (CFG_PMD3_SER5MD_Msk & (_UINT32_(value) << CFG_PMD3_SER5MD_Pos)) /* Assignment of value for SER5MD in the CFG_PMD3 register */
#define CFG_PMD3_SER6MD_Pos                   _UINT32_(6)                                          /* (CFG_PMD3) SERCOM6 Module Disable Position */
#define CFG_PMD3_SER6MD_Msk                   (_UINT32_(0x1) << CFG_PMD3_SER6MD_Pos)               /* (CFG_PMD3) SERCOM6 Module Disable Mask */
#define CFG_PMD3_SER6MD(value)                (CFG_PMD3_SER6MD_Msk & (_UINT32_(value) << CFG_PMD3_SER6MD_Pos)) /* Assignment of value for SER6MD in the CFG_PMD3 register */
#define CFG_PMD3_QEIMD_Pos                    _UINT32_(7)                                          /* (CFG_PMD3) QEI Module Disable Position */
#define CFG_PMD3_QEIMD_Msk                    (_UINT32_(0x1) << CFG_PMD3_QEIMD_Pos)                /* (CFG_PMD3) QEI Module Disable Mask */
#define CFG_PMD3_QEIMD(value)                 (CFG_PMD3_QEIMD_Msk & (_UINT32_(value) << CFG_PMD3_QEIMD_Pos)) /* Assignment of value for QEIMD in the CFG_PMD3 register */
#define CFG_PMD3_TC0MD_Pos                    _UINT32_(8)                                          /* (CFG_PMD3) TC0 Module Disable Position */
#define CFG_PMD3_TC0MD_Msk                    (_UINT32_(0x1) << CFG_PMD3_TC0MD_Pos)                /* (CFG_PMD3) TC0 Module Disable Mask */
#define CFG_PMD3_TC0MD(value)                 (CFG_PMD3_TC0MD_Msk & (_UINT32_(value) << CFG_PMD3_TC0MD_Pos)) /* Assignment of value for TC0MD in the CFG_PMD3 register */
#define CFG_PMD3_TC1MD_Pos                    _UINT32_(9)                                          /* (CFG_PMD3) TC1 Module Disable Position */
#define CFG_PMD3_TC1MD_Msk                    (_UINT32_(0x1) << CFG_PMD3_TC1MD_Pos)                /* (CFG_PMD3) TC1 Module Disable Mask */
#define CFG_PMD3_TC1MD(value)                 (CFG_PMD3_TC1MD_Msk & (_UINT32_(value) << CFG_PMD3_TC1MD_Pos)) /* Assignment of value for TC1MD in the CFG_PMD3 register */
#define CFG_PMD3_TC2MD_Pos                    _UINT32_(10)                                         /* (CFG_PMD3) TC2 Module Disable Position */
#define CFG_PMD3_TC2MD_Msk                    (_UINT32_(0x1) << CFG_PMD3_TC2MD_Pos)                /* (CFG_PMD3) TC2 Module Disable Mask */
#define CFG_PMD3_TC2MD(value)                 (CFG_PMD3_TC2MD_Msk & (_UINT32_(value) << CFG_PMD3_TC2MD_Pos)) /* Assignment of value for TC2MD in the CFG_PMD3 register */
#define CFG_PMD3_TC3MD_Pos                    _UINT32_(11)                                         /* (CFG_PMD3) TC3 Module Disable Position */
#define CFG_PMD3_TC3MD_Msk                    (_UINT32_(0x1) << CFG_PMD3_TC3MD_Pos)                /* (CFG_PMD3) TC3 Module Disable Mask */
#define CFG_PMD3_TC3MD(value)                 (CFG_PMD3_TC3MD_Msk & (_UINT32_(value) << CFG_PMD3_TC3MD_Pos)) /* Assignment of value for TC3MD in the CFG_PMD3 register */
#define CFG_PMD3_TC4MD_Pos                    _UINT32_(12)                                         /* (CFG_PMD3) TC4 Module Disable Position */
#define CFG_PMD3_TC4MD_Msk                    (_UINT32_(0x1) << CFG_PMD3_TC4MD_Pos)                /* (CFG_PMD3) TC4 Module Disable Mask */
#define CFG_PMD3_TC4MD(value)                 (CFG_PMD3_TC4MD_Msk & (_UINT32_(value) << CFG_PMD3_TC4MD_Pos)) /* Assignment of value for TC4MD in the CFG_PMD3 register */
#define CFG_PMD3_TC5MD_Pos                    _UINT32_(13)                                         /* (CFG_PMD3) TC5 Module Disable Position */
#define CFG_PMD3_TC5MD_Msk                    (_UINT32_(0x1) << CFG_PMD3_TC5MD_Pos)                /* (CFG_PMD3) TC5 Module Disable Mask */
#define CFG_PMD3_TC5MD(value)                 (CFG_PMD3_TC5MD_Msk & (_UINT32_(value) << CFG_PMD3_TC5MD_Pos)) /* Assignment of value for TC5MD in the CFG_PMD3 register */
#define CFG_PMD3_TC6MD_Pos                    _UINT32_(14)                                         /* (CFG_PMD3) TC6 Module Disable Position */
#define CFG_PMD3_TC6MD_Msk                    (_UINT32_(0x1) << CFG_PMD3_TC6MD_Pos)                /* (CFG_PMD3) TC6 Module Disable Mask */
#define CFG_PMD3_TC6MD(value)                 (CFG_PMD3_TC6MD_Msk & (_UINT32_(value) << CFG_PMD3_TC6MD_Pos)) /* Assignment of value for TC6MD in the CFG_PMD3 register */
#define CFG_PMD3_TC7MD_Pos                    _UINT32_(15)                                         /* (CFG_PMD3) TC7 Module Disable Position */
#define CFG_PMD3_TC7MD_Msk                    (_UINT32_(0x1) << CFG_PMD3_TC7MD_Pos)                /* (CFG_PMD3) TC7 Module Disable Mask */
#define CFG_PMD3_TC7MD(value)                 (CFG_PMD3_TC7MD_Msk & (_UINT32_(value) << CFG_PMD3_TC7MD_Pos)) /* Assignment of value for TC7MD in the CFG_PMD3 register */
#define CFG_PMD3_TC8MD_Pos                    _UINT32_(16)                                         /* (CFG_PMD3) TC8 Module Disable Position */
#define CFG_PMD3_TC8MD_Msk                    (_UINT32_(0x1) << CFG_PMD3_TC8MD_Pos)                /* (CFG_PMD3) TC8 Module Disable Mask */
#define CFG_PMD3_TC8MD(value)                 (CFG_PMD3_TC8MD_Msk & (_UINT32_(value) << CFG_PMD3_TC8MD_Pos)) /* Assignment of value for TC8MD in the CFG_PMD3 register */
#define CFG_PMD3_TC9MD_Pos                    _UINT32_(17)                                         /* (CFG_PMD3) TC9 Module Disable Position */
#define CFG_PMD3_TC9MD_Msk                    (_UINT32_(0x1) << CFG_PMD3_TC9MD_Pos)                /* (CFG_PMD3) TC9 Module Disable Mask */
#define CFG_PMD3_TC9MD(value)                 (CFG_PMD3_TC9MD_Msk & (_UINT32_(value) << CFG_PMD3_TC9MD_Pos)) /* Assignment of value for TC9MD in the CFG_PMD3 register */
#define CFG_PMD3_TCC0MD_Pos                   _UINT32_(20)                                         /* (CFG_PMD3) TCC0 Module Disable Position */
#define CFG_PMD3_TCC0MD_Msk                   (_UINT32_(0x1) << CFG_PMD3_TCC0MD_Pos)               /* (CFG_PMD3) TCC0 Module Disable Mask */
#define CFG_PMD3_TCC0MD(value)                (CFG_PMD3_TCC0MD_Msk & (_UINT32_(value) << CFG_PMD3_TCC0MD_Pos)) /* Assignment of value for TCC0MD in the CFG_PMD3 register */
#define CFG_PMD3_TCC1MD_Pos                   _UINT32_(21)                                         /* (CFG_PMD3) TCC1 Module Disable Position */
#define CFG_PMD3_TCC1MD_Msk                   (_UINT32_(0x1) << CFG_PMD3_TCC1MD_Pos)               /* (CFG_PMD3) TCC1 Module Disable Mask */
#define CFG_PMD3_TCC1MD(value)                (CFG_PMD3_TCC1MD_Msk & (_UINT32_(value) << CFG_PMD3_TCC1MD_Pos)) /* Assignment of value for TCC1MD in the CFG_PMD3 register */
#define CFG_PMD3_TCC2MD_Pos                   _UINT32_(22)                                         /* (CFG_PMD3) TCC2 Module Disable Position */
#define CFG_PMD3_TCC2MD_Msk                   (_UINT32_(0x1) << CFG_PMD3_TCC2MD_Pos)               /* (CFG_PMD3) TCC2 Module Disable Mask */
#define CFG_PMD3_TCC2MD(value)                (CFG_PMD3_TCC2MD_Msk & (_UINT32_(value) << CFG_PMD3_TCC2MD_Pos)) /* Assignment of value for TCC2MD in the CFG_PMD3 register */
#define CFG_PMD3_USBMD_Pos                    _UINT32_(24)                                         /* (CFG_PMD3) USB Module Disable Position */
#define CFG_PMD3_USBMD_Msk                    (_UINT32_(0x1) << CFG_PMD3_USBMD_Pos)                /* (CFG_PMD3) USB Module Disable Mask */
#define CFG_PMD3_USBMD(value)                 (CFG_PMD3_USBMD_Msk & (_UINT32_(value) << CFG_PMD3_USBMD_Pos)) /* Assignment of value for USBMD in the CFG_PMD3 register */
#define CFG_PMD3_ETHMD_Pos                    _UINT32_(25)                                         /* (CFG_PMD3) Ethernet Module Disable Position */
#define CFG_PMD3_ETHMD_Msk                    (_UINT32_(0x1) << CFG_PMD3_ETHMD_Pos)                /* (CFG_PMD3) Ethernet Module Disable Mask */
#define CFG_PMD3_ETHMD(value)                 (CFG_PMD3_ETHMD_Msk & (_UINT32_(value) << CFG_PMD3_ETHMD_Pos)) /* Assignment of value for ETHMD in the CFG_PMD3 register */
#define CFG_PMD3_CAN0MD_Pos                   _UINT32_(26)                                         /* (CFG_PMD3) CAN0 Module Disable Position */
#define CFG_PMD3_CAN0MD_Msk                   (_UINT32_(0x1) << CFG_PMD3_CAN0MD_Pos)               /* (CFG_PMD3) CAN0 Module Disable Mask */
#define CFG_PMD3_CAN0MD(value)                (CFG_PMD3_CAN0MD_Msk & (_UINT32_(value) << CFG_PMD3_CAN0MD_Pos)) /* Assignment of value for CAN0MD in the CFG_PMD3 register */
#define CFG_PMD3_CAN1MD_Pos                   _UINT32_(27)                                         /* (CFG_PMD3) CAN1 Module Disable Position */
#define CFG_PMD3_CAN1MD_Msk                   (_UINT32_(0x1) << CFG_PMD3_CAN1MD_Pos)               /* (CFG_PMD3) CAN1 Module Disable Mask */
#define CFG_PMD3_CAN1MD(value)                (CFG_PMD3_CAN1MD_Msk & (_UINT32_(value) << CFG_PMD3_CAN1MD_Pos)) /* Assignment of value for CAN1MD in the CFG_PMD3 register */
#define CFG_PMD3_Msk                          _UINT32_(0x0F73FFFF)                                 /* (CFG_PMD3) Register Mask  */


/* -------- CFG_PMD3CLR : (CFG Offset: 0x104) (R/W 32) Bit clear register -------- */
#define CFG_PMD3CLR_RESETVALUE                _UINT32_(0x00)                                       /*  (CFG_PMD3CLR) Bit clear register  Reset Value */

#define CFG_PMD3CLR_Msk                       _UINT32_(0x00000000)                                 /* (CFG_PMD3CLR) Register Mask  */


/* -------- CFG_PMD3SET : (CFG Offset: 0x108) (R/W 32) Bit set register -------- */
#define CFG_PMD3SET_RESETVALUE                _UINT32_(0x00)                                       /*  (CFG_PMD3SET) Bit set register  Reset Value */

#define CFG_PMD3SET_Msk                       _UINT32_(0x00000000)                                 /* (CFG_PMD3SET) Register Mask  */


/* -------- CFG_PMD3INV : (CFG Offset: 0x10C) (R/W 32) Bit invert register -------- */
#define CFG_PMD3INV_RESETVALUE                _UINT32_(0x00)                                       /*  (CFG_PMD3INV) Bit invert register  Reset Value */

#define CFG_PMD3INV_Msk                       _UINT32_(0x00000000)                                 /* (CFG_PMD3INV) Register Mask  */


/* -------- CFG_MISCSTAT : (CFG Offset: 0x120) (R/W 32)  -------- */
#define CFG_MISCSTAT_RESETVALUE               _UINT32_(0x1000081)                                  /*  (CFG_MISCSTAT)   Reset Value */

#define CFG_MISCSTAT_CLDORDY_Pos              _UINT32_(9)                                          /* (CFG_MISCSTAT) CLDO Ready Position */
#define CFG_MISCSTAT_CLDORDY_Msk              (_UINT32_(0x1) << CFG_MISCSTAT_CLDORDY_Pos)          /* (CFG_MISCSTAT) CLDO Ready Mask */
#define CFG_MISCSTAT_CLDORDY(value)           (CFG_MISCSTAT_CLDORDY_Msk & (_UINT32_(value) << CFG_MISCSTAT_CLDORDY_Pos)) /* Assignment of value for CLDORDY in the CFG_MISCSTAT register */
#define CFG_MISCSTAT_Msk                      _UINT32_(0x00000200)                                 /* (CFG_MISCSTAT) Register Mask  */


/* -------- CFG_ID : (CFG Offset: 0x160) ( R/ 32) Device ID -------- */
#define CFG_ID_RESETVALUE                     _UINT32_(0x00)                                       /*  (CFG_ID) Device ID  Reset Value */

#define CFG_ID_Msk                            _UINT32_(0x00000000)                                 /* (CFG_ID) Register Mask  */


/* -------- CFG_BCFG0 : (CFG Offset: 0x200) ( R/ 32)  -------- */
#define CFG_BCFG0_RESETVALUE                  _UINT32_(0x00)                                       /*  (CFG_BCFG0)   Reset Value */

#define CFG_BCFG0_PCSCMODE_Pos                _UINT32_(1)                                          /* (CFG_BCFG0) PCHE Single cache Mode Position */
#define CFG_BCFG0_PCSCMODE_Msk                (_UINT32_(0x1) << CFG_BCFG0_PCSCMODE_Pos)            /* (CFG_BCFG0) PCHE Single cache Mode Mask */
#define CFG_BCFG0_PCSCMODE(value)             (CFG_BCFG0_PCSCMODE_Msk & (_UINT32_(value) << CFG_BCFG0_PCSCMODE_Pos)) /* Assignment of value for PCSCMODE in the CFG_BCFG0 register */
#define CFG_BCFG0_CP_Pos                      _UINT32_(28)                                         /* (CFG_BCFG0) Boot Code Protect Position */
#define CFG_BCFG0_CP_Msk                      (_UINT32_(0x1) << CFG_BCFG0_CP_Pos)                  /* (CFG_BCFG0) Boot Code Protect Mask */
#define CFG_BCFG0_CP(value)                   (CFG_BCFG0_CP_Msk & (_UINT32_(value) << CFG_BCFG0_CP_Pos)) /* Assignment of value for CP in the CFG_BCFG0 register */
#define CFG_BCFG0_SIGN_Pos                    _UINT32_(29)                                         /* (CFG_BCFG0) Flash SIGN Position */
#define CFG_BCFG0_SIGN_Msk                    (_UINT32_(0x1) << CFG_BCFG0_SIGN_Pos)                /* (CFG_BCFG0) Flash SIGN Mask */
#define CFG_BCFG0_SIGN(value)                 (CFG_BCFG0_SIGN_Msk & (_UINT32_(value) << CFG_BCFG0_SIGN_Pos)) /* Assignment of value for SIGN in the CFG_BCFG0 register */
#define CFG_BCFG0_BINFOVALID0_Pos             _UINT32_(31)                                         /* (CFG_BCFG0) First 256-bit BCFG information Valid Position */
#define CFG_BCFG0_BINFOVALID0_Msk             (_UINT32_(0x1) << CFG_BCFG0_BINFOVALID0_Pos)         /* (CFG_BCFG0) First 256-bit BCFG information Valid Mask */
#define CFG_BCFG0_BINFOVALID0(value)          (CFG_BCFG0_BINFOVALID0_Msk & (_UINT32_(value) << CFG_BCFG0_BINFOVALID0_Pos)) /* Assignment of value for BINFOVALID0 in the CFG_BCFG0 register */
#define CFG_BCFG0_Msk                         _UINT32_(0xB0000002)                                 /* (CFG_BCFG0) Register Mask  */

#define CFG_BCFG0_BINFOVALID_Pos              _UINT32_(31)                                         /* (CFG_BCFG0 Position) First 256-bit BCFG information Valid */
#define CFG_BCFG0_BINFOVALID_Msk              (_UINT32_(0x1) << CFG_BCFG0_BINFOVALID_Pos)          /* (CFG_BCFG0 Mask) BINFOVALID */
#define CFG_BCFG0_BINFOVALID(value)           (CFG_BCFG0_BINFOVALID_Msk & (_UINT32_(value) << CFG_BCFG0_BINFOVALID_Pos)) 

/* CFG register offsets definitions */
#define CFG_CFGCON0_REG_OFST           _UINT32_(0x00)      /* (CFG_CFGCON0)  Offset */
#define CFG_CFGCON0CLR_REG_OFST        _UINT32_(0x04)      /* (CFG_CFGCON0CLR) Bit clear register Offset */
#define CFG_CFGCON0SET_REG_OFST        _UINT32_(0x08)      /* (CFG_CFGCON0SET) Bit set register Offset */
#define CFG_CFGCON0INV_REG_OFST        _UINT32_(0x0C)      /* (CFG_CFGCON0INV) Bit invert register Offset */
#define CFG_CFGCON1_REG_OFST           _UINT32_(0x10)      /* (CFG_CFGCON1)  Offset */
#define CFG_CFGCON1CLR_REG_OFST        _UINT32_(0x14)      /* (CFG_CFGCON1CLR) Bit clear register Offset */
#define CFG_CFGCON1SET_REG_OFST        _UINT32_(0x18)      /* (CFG_CFGCON1SET) Bit set register Offset */
#define CFG_CFGCON1INV_REG_OFST        _UINT32_(0x1C)      /* (CFG_CFGCON1INV) Bit invert register Offset */
#define CFG_CFGCON2_REG_OFST           _UINT32_(0x20)      /* (CFG_CFGCON2)  Offset */
#define CFG_CFGCON2CLR_REG_OFST        _UINT32_(0x24)      /* (CFG_CFGCON2CLR) Bit clear register Offset */
#define CFG_CFGCON2SET_REG_OFST        _UINT32_(0x28)      /* (CFG_CFGCON2SET) Bit set register Offset */
#define CFG_CFGCON2INV_REG_OFST        _UINT32_(0x2C)      /* (CFG_CFGCON2INV) Bit invert register Offset */
#define CFG_CFGCON4_REG_OFST           _UINT32_(0x40)      /* (CFG_CFGCON4)  Offset */
#define CFG_CFGCON4CLR_REG_OFST        _UINT32_(0x44)      /* (CFG_CFGCON4CLR) Bit clear register Offset */
#define CFG_CFGCON4SET_REG_OFST        _UINT32_(0x48)      /* (CFG_CFGCON4SET) Bit set register Offset */
#define CFG_CFGCON4INV_REG_OFST        _UINT32_(0x4C)      /* (CFG_CFGCON4INV) Bit invert register Offset */
#define CFG_CFGPGQOS1_REG_OFST         _UINT32_(0x50)      /* (CFG_CFGPGQOS1)  Offset */
#define CFG_CFGPGQOS1CLR_REG_OFST      _UINT32_(0x54)      /* (CFG_CFGPGQOS1CLR) Bit clear register Offset */
#define CFG_CFGPGQOS1SET_REG_OFST      _UINT32_(0x58)      /* (CFG_CFGPGQOS1SET) Bit set register Offset */
#define CFG_CFGPGQOS1INV_REG_OFST      _UINT32_(0x5C)      /* (CFG_CFGPGQOS1INV) Bit invert register Offset */
#define CFG_CFGPGQOS2_REG_OFST         _UINT32_(0x60)      /* (CFG_CFGPGQOS2)  Offset */
#define CFG_CFGPGQOS2CLR_REG_OFST      _UINT32_(0x64)      /* (CFG_CFGPGQOS2CLR) Bit clear register Offset */
#define CFG_CFGPGQOS2SET_REG_OFST      _UINT32_(0x68)      /* (CFG_CFGPGQOS2SET) Bit set register Offset */
#define CFG_CFGPGQOS2INV_REG_OFST      _UINT32_(0x6C)      /* (CFG_CFGPGQOS2INV) Bit invert register Offset */
#define CFG_CFGI2C_REG_OFST            _UINT32_(0x70)      /* (CFG_CFGI2C)  Offset */
#define CFG_CFGI2CCLR_REG_OFST         _UINT32_(0x74)      /* (CFG_CFGI2CCLR) Bit clear register Offset */
#define CFG_CFGI2CSET_REG_OFST         _UINT32_(0x78)      /* (CFG_CFGI2CSET) Bit set register Offset */
#define CFG_CFGI2CINV_REG_OFST         _UINT32_(0x7C)      /* (CFG_CFGI2CINV) Bit invert register Offset */
#define CFG_CFGPCLKGEN1_REG_OFST       _UINT32_(0x80)      /* (CFG_CFGPCLKGEN1)  Offset */
#define CFG_CFGPCLKGEN1CLR_REG_OFST    _UINT32_(0x84)      /* (CFG_CFGPCLKGEN1CLR) Bit clear register Offset */
#define CFG_CFGPCLKGEN1SET_REG_OFST    _UINT32_(0x88)      /* (CFG_CFGPCLKGEN1SET) Bit set register Offset */
#define CFG_CFGPCLKGEN1INV_REG_OFST    _UINT32_(0x8C)      /* (CFG_CFGPCLKGEN1INV) Bit invert register Offset */
#define CFG_CFGPCLKGEN2_REG_OFST       _UINT32_(0x90)      /* (CFG_CFGPCLKGEN2)  Offset */
#define CFG_CFGPCLKGEN2CLR_REG_OFST    _UINT32_(0x94)      /* (CFG_CFGPCLKGEN2CLR) Bit clear register Offset */
#define CFG_CFGPCLKGEN2SET_REG_OFST    _UINT32_(0x98)      /* (CFG_CFGPCLKGEN2SET) Bit set register Offset */
#define CFG_CFGPCLKGEN2INV_REG_OFST    _UINT32_(0x9C)      /* (CFG_CFGPCLKGEN2INV) Bit invert register Offset */
#define CFG_CFGPCLKGEN3_REG_OFST       _UINT32_(0xA0)      /* (CFG_CFGPCLKGEN3)  Offset */
#define CFG_CFGPCLKGEN3CLR_REG_OFST    _UINT32_(0xA4)      /* (CFG_CFGPCLKGEN3CLR) Bit clear register Offset */
#define CFG_CFGPCLKGEN3SET_REG_OFST    _UINT32_(0xA8)      /* (CFG_CFGPCLKGEN3SET) Bit set register Offset */
#define CFG_CFGPCLKGEN3INV_REG_OFST    _UINT32_(0xAC)      /* (CFG_CFGPCLKGEN3INV) Bit invert register Offset */
#define CFG_CFGPCLKGEN4_REG_OFST       _UINT32_(0xB0)      /* (CFG_CFGPCLKGEN4)  Offset */
#define CFG_CFGPCLKGEN4CLR_REG_OFST    _UINT32_(0xB4)      /* (CFG_CFGPCLKGEN4CLR) Bit clear register Offset */
#define CFG_CFGPCLKGEN4SET_REG_OFST    _UINT32_(0xB8)      /* (CFG_CFGPCLKGEN4SET) Bit set register Offset */
#define CFG_CFGPCLKGEN4INV_REG_OFST    _UINT32_(0xBC)      /* (CFG_CFGPCLKGEN4INV) Bit invert register Offset */
#define CFG_USER_ID_REG_OFST           _UINT32_(0xC0)      /* (CFG_USER_ID)  Offset */
#define CFG_USER_IDCLR_REG_OFST        _UINT32_(0xC4)      /* (CFG_USER_IDCLR) Bit clear register Offset */
#define CFG_USER_IDSET_REG_OFST        _UINT32_(0xC8)      /* (CFG_USER_IDSET) Bit set register Offset */
#define CFG_USER_IDINV_REG_OFST        _UINT32_(0xCC)      /* (CFG_USER_IDINV) Bit invert register Offset */
#define CFG_SYSKEY_REG_OFST            _UINT32_(0xD0)      /* (CFG_SYSKEY)  Offset */
#define CFG_PMD1_REG_OFST              _UINT32_(0xE0)      /* (CFG_PMD1)  Offset */
#define CFG_PMD1CLR_REG_OFST           _UINT32_(0xE4)      /* (CFG_PMD1CLR) Bit clear register Offset */
#define CFG_PMD1SET_REG_OFST           _UINT32_(0xE8)      /* (CFG_PMD1SET) Bit set register Offset */
#define CFG_PMD1INV_REG_OFST           _UINT32_(0xEC)      /* (CFG_PMD1INV) Bit invert register Offset */
#define CFG_PMD2_REG_OFST              _UINT32_(0xF0)      /* (CFG_PMD2)  Offset */
#define CFG_PMD2CLR_REG_OFST           _UINT32_(0xF4)      /* (CFG_PMD2CLR) Bit clear register Offset */
#define CFG_PMD2SET_REG_OFST           _UINT32_(0xF8)      /* (CFG_PMD2SET) Bit set register Offset */
#define CFG_PMD2INV_REG_OFST           _UINT32_(0xFC)      /* (CFG_PMD2INV) Bit invert register Offset */
#define CFG_PMD3_REG_OFST              _UINT32_(0x100)     /* (CFG_PMD3)  Offset */
#define CFG_PMD3CLR_REG_OFST           _UINT32_(0x104)     /* (CFG_PMD3CLR) Bit clear register Offset */
#define CFG_PMD3SET_REG_OFST           _UINT32_(0x108)     /* (CFG_PMD3SET) Bit set register Offset */
#define CFG_PMD3INV_REG_OFST           _UINT32_(0x10C)     /* (CFG_PMD3INV) Bit invert register Offset */
#define CFG_MISCSTAT_REG_OFST          _UINT32_(0x120)     /* (CFG_MISCSTAT)  Offset */
#define CFG_ID_REG_OFST                _UINT32_(0x160)     /* (CFG_ID) Device ID Offset */
#define CFG_BCFG0_REG_OFST             _UINT32_(0x200)     /* (CFG_BCFG0)  Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* CFG register API structure */
typedef struct
{  /*  */
  __IO  uint32_t                       CFG_CFGCON0;        /* Offset: 0x00 (R/W  32)  */
  __IO  uint32_t                       CFG_CFGCON0CLR;     /* Offset: 0x04 (R/W  32) Bit clear register */
  __IO  uint32_t                       CFG_CFGCON0SET;     /* Offset: 0x08 (R/W  32) Bit set register */
  __IO  uint32_t                       CFG_CFGCON0INV;     /* Offset: 0x0C (R/W  32) Bit invert register */
  __IO  uint32_t                       CFG_CFGCON1;        /* Offset: 0x10 (R/W  32)  */
  __IO  uint32_t                       CFG_CFGCON1CLR;     /* Offset: 0x14 (R/W  32) Bit clear register */
  __IO  uint32_t                       CFG_CFGCON1SET;     /* Offset: 0x18 (R/W  32) Bit set register */
  __IO  uint32_t                       CFG_CFGCON1INV;     /* Offset: 0x1C (R/W  32) Bit invert register */
  __IO  uint32_t                       CFG_CFGCON2;        /* Offset: 0x20 (R/W  32)  */
  __IO  uint32_t                       CFG_CFGCON2CLR;     /* Offset: 0x24 (R/W  32) Bit clear register */
  __IO  uint32_t                       CFG_CFGCON2SET;     /* Offset: 0x28 (R/W  32) Bit set register */
  __IO  uint32_t                       CFG_CFGCON2INV;     /* Offset: 0x2C (R/W  32) Bit invert register */
  __I   uint8_t                        Reserved1[0x10];
  __IO  uint32_t                       CFG_CFGCON4;        /* Offset: 0x40 (R/W  32)  */
  __IO  uint32_t                       CFG_CFGCON4CLR;     /* Offset: 0x44 (R/W  32) Bit clear register */
  __IO  uint32_t                       CFG_CFGCON4SET;     /* Offset: 0x48 (R/W  32) Bit set register */
  __IO  uint32_t                       CFG_CFGCON4INV;     /* Offset: 0x4C (R/W  32) Bit invert register */
  __IO  uint32_t                       CFG_CFGPGQOS1;      /* Offset: 0x50 (R/W  32)  */
  __IO  uint32_t                       CFG_CFGPGQOS1CLR;   /* Offset: 0x54 (R/W  32) Bit clear register */
  __IO  uint32_t                       CFG_CFGPGQOS1SET;   /* Offset: 0x58 (R/W  32) Bit set register */
  __IO  uint32_t                       CFG_CFGPGQOS1INV;   /* Offset: 0x5C (R/W  32) Bit invert register */
  __IO  uint32_t                       CFG_CFGPGQOS2;      /* Offset: 0x60 (R/W  32)  */
  __IO  uint32_t                       CFG_CFGPGQOS2CLR;   /* Offset: 0x64 (R/W  32) Bit clear register */
  __IO  uint32_t                       CFG_CFGPGQOS2SET;   /* Offset: 0x68 (R/W  32) Bit set register */
  __IO  uint32_t                       CFG_CFGPGQOS2INV;   /* Offset: 0x6C (R/W  32) Bit invert register */
  __IO  uint32_t                       CFG_CFGI2C;         /* Offset: 0x70 (R/W  32)  */
  __IO  uint32_t                       CFG_CFGI2CCLR;      /* Offset: 0x74 (R/W  32) Bit clear register */
  __IO  uint32_t                       CFG_CFGI2CSET;      /* Offset: 0x78 (R/W  32) Bit set register */
  __IO  uint32_t                       CFG_CFGI2CINV;      /* Offset: 0x7C (R/W  32) Bit invert register */
  __IO  uint32_t                       CFG_CFGPCLKGEN1;    /* Offset: 0x80 (R/W  32)  */
  __IO  uint32_t                       CFG_CFGPCLKGEN1CLR; /* Offset: 0x84 (R/W  32) Bit clear register */
  __IO  uint32_t                       CFG_CFGPCLKGEN1SET; /* Offset: 0x88 (R/W  32) Bit set register */
  __IO  uint32_t                       CFG_CFGPCLKGEN1INV; /* Offset: 0x8C (R/W  32) Bit invert register */
  __IO  uint32_t                       CFG_CFGPCLKGEN2;    /* Offset: 0x90 (R/W  32)  */
  __IO  uint32_t                       CFG_CFGPCLKGEN2CLR; /* Offset: 0x94 (R/W  32) Bit clear register */
  __IO  uint32_t                       CFG_CFGPCLKGEN2SET; /* Offset: 0x98 (R/W  32) Bit set register */
  __IO  uint32_t                       CFG_CFGPCLKGEN2INV; /* Offset: 0x9C (R/W  32) Bit invert register */
  __IO  uint32_t                       CFG_CFGPCLKGEN3;    /* Offset: 0xA0 (R/W  32)  */
  __IO  uint32_t                       CFG_CFGPCLKGEN3CLR; /* Offset: 0xA4 (R/W  32) Bit clear register */
  __IO  uint32_t                       CFG_CFGPCLKGEN3SET; /* Offset: 0xA8 (R/W  32) Bit set register */
  __IO  uint32_t                       CFG_CFGPCLKGEN3INV; /* Offset: 0xAC (R/W  32) Bit invert register */
  __IO  uint32_t                       CFG_CFGPCLKGEN4;    /* Offset: 0xB0 (R/W  32)  */
  __IO  uint32_t                       CFG_CFGPCLKGEN4CLR; /* Offset: 0xB4 (R/W  32) Bit clear register */
  __IO  uint32_t                       CFG_CFGPCLKGEN4SET; /* Offset: 0xB8 (R/W  32) Bit set register */
  __IO  uint32_t                       CFG_CFGPCLKGEN4INV; /* Offset: 0xBC (R/W  32) Bit invert register */
  __IO  uint32_t                       CFG_USER_ID;        /* Offset: 0xC0 (R/W  32)  */
  __IO  uint32_t                       CFG_USER_IDCLR;     /* Offset: 0xC4 (R/W  32) Bit clear register */
  __IO  uint32_t                       CFG_USER_IDSET;     /* Offset: 0xC8 (R/W  32) Bit set register */
  __IO  uint32_t                       CFG_USER_IDINV;     /* Offset: 0xCC (R/W  32) Bit invert register */
  __IO  uint32_t                       CFG_SYSKEY;         /* Offset: 0xD0 (R/W  32)  */
  __I   uint8_t                        Reserved2[0x0C];
  __IO  uint32_t                       CFG_PMD1;           /* Offset: 0xE0 (R/W  32)  */
  __IO  uint32_t                       CFG_PMD1CLR;        /* Offset: 0xE4 (R/W  32) Bit clear register */
  __IO  uint32_t                       CFG_PMD1SET;        /* Offset: 0xE8 (R/W  32) Bit set register */
  __IO  uint32_t                       CFG_PMD1INV;        /* Offset: 0xEC (R/W  32) Bit invert register */
  __IO  uint32_t                       CFG_PMD2;           /* Offset: 0xF0 (R/W  32)  */
  __IO  uint32_t                       CFG_PMD2CLR;        /* Offset: 0xF4 (R/W  32) Bit clear register */
  __IO  uint32_t                       CFG_PMD2SET;        /* Offset: 0xF8 (R/W  32) Bit set register */
  __IO  uint32_t                       CFG_PMD2INV;        /* Offset: 0xFC (R/W  32) Bit invert register */
  __IO  uint32_t                       CFG_PMD3;           /* Offset: 0x100 (R/W  32)  */
  __IO  uint32_t                       CFG_PMD3CLR;        /* Offset: 0x104 (R/W  32) Bit clear register */
  __IO  uint32_t                       CFG_PMD3SET;        /* Offset: 0x108 (R/W  32) Bit set register */
  __IO  uint32_t                       CFG_PMD3INV;        /* Offset: 0x10C (R/W  32) Bit invert register */
  __I   uint8_t                        Reserved3[0x10];
  __IO  uint32_t                       CFG_MISCSTAT;       /* Offset: 0x120 (R/W  32)  */
  __I   uint8_t                        Reserved4[0x3C];
  __I   uint32_t                       CFG_ID;             /* Offset: 0x160 (R/   32) Device ID */
  __I   uint8_t                        Reserved5[0x9C];
  __I   uint32_t                       CFG_BCFG0;          /* Offset: 0x200 (R/   32)  */
} cfg_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32WM_BZ6_CFG_COMPONENT_H_ */
