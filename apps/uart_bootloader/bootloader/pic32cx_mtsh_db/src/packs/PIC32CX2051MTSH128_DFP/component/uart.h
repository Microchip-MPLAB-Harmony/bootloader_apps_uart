/*
 * Component description for UART
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
#ifndef _PIC32CXMTSH_UART_COMPONENT_H_
#define _PIC32CXMTSH_UART_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR UART                                         */
/* ************************************************************************** */

/* -------- UART_CR : (UART Offset: 0x00) ( /W 32) Control Register -------- */
#define UART_CR_RSTRX_Pos                     _UINT32_(2)                                          /* (UART_CR) Reset Receiver Position */
#define UART_CR_RSTRX_Msk                     (_UINT32_(0x1) << UART_CR_RSTRX_Pos)                 /* (UART_CR) Reset Receiver Mask */
#define UART_CR_RSTRX(value)                  (UART_CR_RSTRX_Msk & (_UINT32_(value) << UART_CR_RSTRX_Pos)) /* Assigment of value for RSTRX in the UART_CR register */
#define UART_CR_RSTTX_Pos                     _UINT32_(3)                                          /* (UART_CR) Reset Transmitter Position */
#define UART_CR_RSTTX_Msk                     (_UINT32_(0x1) << UART_CR_RSTTX_Pos)                 /* (UART_CR) Reset Transmitter Mask */
#define UART_CR_RSTTX(value)                  (UART_CR_RSTTX_Msk & (_UINT32_(value) << UART_CR_RSTTX_Pos)) /* Assigment of value for RSTTX in the UART_CR register */
#define UART_CR_RXEN_Pos                      _UINT32_(4)                                          /* (UART_CR) Receiver Enable Position */
#define UART_CR_RXEN_Msk                      (_UINT32_(0x1) << UART_CR_RXEN_Pos)                  /* (UART_CR) Receiver Enable Mask */
#define UART_CR_RXEN(value)                   (UART_CR_RXEN_Msk & (_UINT32_(value) << UART_CR_RXEN_Pos)) /* Assigment of value for RXEN in the UART_CR register */
#define UART_CR_RXDIS_Pos                     _UINT32_(5)                                          /* (UART_CR) Receiver Disable Position */
#define UART_CR_RXDIS_Msk                     (_UINT32_(0x1) << UART_CR_RXDIS_Pos)                 /* (UART_CR) Receiver Disable Mask */
#define UART_CR_RXDIS(value)                  (UART_CR_RXDIS_Msk & (_UINT32_(value) << UART_CR_RXDIS_Pos)) /* Assigment of value for RXDIS in the UART_CR register */
#define UART_CR_TXEN_Pos                      _UINT32_(6)                                          /* (UART_CR) Transmitter Enable Position */
#define UART_CR_TXEN_Msk                      (_UINT32_(0x1) << UART_CR_TXEN_Pos)                  /* (UART_CR) Transmitter Enable Mask */
#define UART_CR_TXEN(value)                   (UART_CR_TXEN_Msk & (_UINT32_(value) << UART_CR_TXEN_Pos)) /* Assigment of value for TXEN in the UART_CR register */
#define UART_CR_TXDIS_Pos                     _UINT32_(7)                                          /* (UART_CR) Transmitter Disable Position */
#define UART_CR_TXDIS_Msk                     (_UINT32_(0x1) << UART_CR_TXDIS_Pos)                 /* (UART_CR) Transmitter Disable Mask */
#define UART_CR_TXDIS(value)                  (UART_CR_TXDIS_Msk & (_UINT32_(value) << UART_CR_TXDIS_Pos)) /* Assigment of value for TXDIS in the UART_CR register */
#define UART_CR_RSTSTA_Pos                    _UINT32_(8)                                          /* (UART_CR) Reset Status Position */
#define UART_CR_RSTSTA_Msk                    (_UINT32_(0x1) << UART_CR_RSTSTA_Pos)                /* (UART_CR) Reset Status Mask */
#define UART_CR_RSTSTA(value)                 (UART_CR_RSTSTA_Msk & (_UINT32_(value) << UART_CR_RSTSTA_Pos)) /* Assigment of value for RSTSTA in the UART_CR register */
#define UART_CR_RETTO_Pos                     _UINT32_(10)                                         /* (UART_CR) Rearm Time-out Position */
#define UART_CR_RETTO_Msk                     (_UINT32_(0x1) << UART_CR_RETTO_Pos)                 /* (UART_CR) Rearm Time-out Mask */
#define UART_CR_RETTO(value)                  (UART_CR_RETTO_Msk & (_UINT32_(value) << UART_CR_RETTO_Pos)) /* Assigment of value for RETTO in the UART_CR register */
#define UART_CR_STTTO_Pos                     _UINT32_(11)                                         /* (UART_CR) Start Time-out Position */
#define UART_CR_STTTO_Msk                     (_UINT32_(0x1) << UART_CR_STTTO_Pos)                 /* (UART_CR) Start Time-out Mask */
#define UART_CR_STTTO(value)                  (UART_CR_STTTO_Msk & (_UINT32_(value) << UART_CR_STTTO_Pos)) /* Assigment of value for STTTO in the UART_CR register */
#define UART_CR_REQCLR_Pos                    _UINT32_(12)                                         /* (UART_CR) Request Clear Position */
#define UART_CR_REQCLR_Msk                    (_UINT32_(0x1) << UART_CR_REQCLR_Pos)                /* (UART_CR) Request Clear Mask */
#define UART_CR_REQCLR(value)                 (UART_CR_REQCLR_Msk & (_UINT32_(value) << UART_CR_REQCLR_Pos)) /* Assigment of value for REQCLR in the UART_CR register */
#define UART_CR_OPT_SLEEP_Pos                 _UINT32_(14)                                         /* (UART_CR) Optical Logic Sleep Mode Command Position */
#define UART_CR_OPT_SLEEP_Msk                 (_UINT32_(0x1) << UART_CR_OPT_SLEEP_Pos)             /* (UART_CR) Optical Logic Sleep Mode Command Mask */
#define UART_CR_OPT_SLEEP(value)              (UART_CR_OPT_SLEEP_Msk & (_UINT32_(value) << UART_CR_OPT_SLEEP_Pos)) /* Assigment of value for OPT_SLEEP in the UART_CR register */
#define UART_CR_Msk                           _UINT32_(0x00005DFC)                                 /* (UART_CR) Register Mask  */


/* -------- UART_MR : (UART Offset: 0x04) (R/W 32) Mode Register -------- */
#define UART_MR_OPT_EN_Pos                    _UINT32_(0)                                          /* (UART_MR) UART Optical Interface Enable Position */
#define UART_MR_OPT_EN_Msk                    (_UINT32_(0x1) << UART_MR_OPT_EN_Pos)                /* (UART_MR) UART Optical Interface Enable Mask */
#define UART_MR_OPT_EN(value)                 (UART_MR_OPT_EN_Msk & (_UINT32_(value) << UART_MR_OPT_EN_Pos)) /* Assigment of value for OPT_EN in the UART_MR register */
#define   UART_MR_OPT_EN_DISABLED_Val         _UINT32_(0x0)                                        /* (UART_MR) Disables the UART optical link.  */
#define   UART_MR_OPT_EN_ENABLED_Val          _UINT32_(0x1)                                        /* (UART_MR) Enables the UART optical link.  */
#define UART_MR_OPT_EN_DISABLED               (UART_MR_OPT_EN_DISABLED_Val << UART_MR_OPT_EN_Pos)  /* (UART_MR) Disables the UART optical link. Position  */
#define UART_MR_OPT_EN_ENABLED                (UART_MR_OPT_EN_ENABLED_Val << UART_MR_OPT_EN_Pos)   /* (UART_MR) Enables the UART optical link. Position  */
#define UART_MR_OPT_RXINV_Pos                 _UINT32_(1)                                          /* (UART_MR) UART Receive Data Inverted Position */
#define UART_MR_OPT_RXINV_Msk                 (_UINT32_(0x1) << UART_MR_OPT_RXINV_Pos)             /* (UART_MR) UART Receive Data Inverted Mask */
#define UART_MR_OPT_RXINV(value)              (UART_MR_OPT_RXINV_Msk & (_UINT32_(value) << UART_MR_OPT_RXINV_Pos)) /* Assigment of value for OPT_RXINV in the UART_MR register */
#define   UART_MR_OPT_RXINV_DISABLED_Val      _UINT32_(0x0)                                        /* (UART_MR) The comparator data output is not inverted before entering UART.  */
#define   UART_MR_OPT_RXINV_ENABLED_Val       _UINT32_(0x1)                                        /* (UART_MR) The comparator data output is inverted before entering UART.  */
#define UART_MR_OPT_RXINV_DISABLED            (UART_MR_OPT_RXINV_DISABLED_Val << UART_MR_OPT_RXINV_Pos) /* (UART_MR) The comparator data output is not inverted before entering UART. Position  */
#define UART_MR_OPT_RXINV_ENABLED             (UART_MR_OPT_RXINV_ENABLED_Val << UART_MR_OPT_RXINV_Pos) /* (UART_MR) The comparator data output is inverted before entering UART. Position  */
#define UART_MR_OPT_MDINV_Pos                 _UINT32_(2)                                          /* (UART_MR) UART Modulated Data Inverted Position */
#define UART_MR_OPT_MDINV_Msk                 (_UINT32_(0x1) << UART_MR_OPT_MDINV_Pos)             /* (UART_MR) UART Modulated Data Inverted Mask */
#define UART_MR_OPT_MDINV(value)              (UART_MR_OPT_MDINV_Msk & (_UINT32_(value) << UART_MR_OPT_MDINV_Pos)) /* Assigment of value for OPT_MDINV in the UART_MR register */
#define   UART_MR_OPT_MDINV_DISABLED_Val      _UINT32_(0x0)                                        /* (UART_MR) The output of the modulator is not inverted.  */
#define   UART_MR_OPT_MDINV_ENABLED_Val       _UINT32_(0x1)                                        /* (UART_MR) The output of the modulator is inverted.  */
#define UART_MR_OPT_MDINV_DISABLED            (UART_MR_OPT_MDINV_DISABLED_Val << UART_MR_OPT_MDINV_Pos) /* (UART_MR) The output of the modulator is not inverted. Position  */
#define UART_MR_OPT_MDINV_ENABLED             (UART_MR_OPT_MDINV_ENABLED_Val << UART_MR_OPT_MDINV_Pos) /* (UART_MR) The output of the modulator is inverted. Position  */
#define UART_MR_OPT_DMOD_Pos                  _UINT32_(3)                                          /* (UART_MR) Optical Demodulation Enable Position */
#define UART_MR_OPT_DMOD_Msk                  (_UINT32_(0x1) << UART_MR_OPT_DMOD_Pos)              /* (UART_MR) Optical Demodulation Enable Mask */
#define UART_MR_OPT_DMOD(value)               (UART_MR_OPT_DMOD_Msk & (_UINT32_(value) << UART_MR_OPT_DMOD_Pos)) /* Assigment of value for OPT_DMOD in the UART_MR register */
#define   UART_MR_OPT_DMOD_DISABLED_Val       _UINT32_(0x0)                                        /* (UART_MR) The optical demodulator is disabled. External demodulation must be enabled.  */
#define   UART_MR_OPT_DMOD_ENABLED_Val        _UINT32_(0x1)                                        /* (UART_MR) The optical demodulator is enabled.  */
#define UART_MR_OPT_DMOD_DISABLED             (UART_MR_OPT_DMOD_DISABLED_Val << UART_MR_OPT_DMOD_Pos) /* (UART_MR) The optical demodulator is disabled. External demodulation must be enabled. Position  */
#define UART_MR_OPT_DMOD_ENABLED              (UART_MR_OPT_DMOD_ENABLED_Val << UART_MR_OPT_DMOD_Pos) /* (UART_MR) The optical demodulator is enabled. Position  */
#define UART_MR_FILTER_Pos                    _UINT32_(4)                                          /* (UART_MR) Receiver Digital Filter Position */
#define UART_MR_FILTER_Msk                    (_UINT32_(0x1) << UART_MR_FILTER_Pos)                /* (UART_MR) Receiver Digital Filter Mask */
#define UART_MR_FILTER(value)                 (UART_MR_FILTER_Msk & (_UINT32_(value) << UART_MR_FILTER_Pos)) /* Assigment of value for FILTER in the UART_MR register */
#define   UART_MR_FILTER_DISABLED_Val         _UINT32_(0x0)                                        /* (UART_MR) UART does not filter the receive line.  */
#define   UART_MR_FILTER_ENABLED_Val          _UINT32_(0x1)                                        /* (UART_MR) UART filters the receive line using a three-sample filter (16x-bit clock) (2 over 3 majority).  */
#define UART_MR_FILTER_DISABLED               (UART_MR_FILTER_DISABLED_Val << UART_MR_FILTER_Pos)  /* (UART_MR) UART does not filter the receive line. Position  */
#define UART_MR_FILTER_ENABLED                (UART_MR_FILTER_ENABLED_Val << UART_MR_FILTER_Pos)   /* (UART_MR) UART filters the receive line using a three-sample filter (16x-bit clock) (2 over 3 majority). Position  */
#define UART_MR_ACON_Pos                      _UINT32_(5)                                          /* (UART_MR) Analog Comparator Enable Position */
#define UART_MR_ACON_Msk                      (_UINT32_(0x1) << UART_MR_ACON_Pos)                  /* (UART_MR) Analog Comparator Enable Mask */
#define UART_MR_ACON(value)                   (UART_MR_ACON_Msk & (_UINT32_(value) << UART_MR_ACON_Pos)) /* Assigment of value for ACON in the UART_MR register */
#define   UART_MR_ACON_DISABLED_Val           _UINT32_(0x0)                                        /* (UART_MR) The analog comparator is disabled. If OPT_EN=1, the analog comparator is enabled.  */
#define   UART_MR_ACON_ENABLED_Val            _UINT32_(0x1)                                        /* (UART_MR) The analog comparator is enabled.  */
#define UART_MR_ACON_DISABLED                 (UART_MR_ACON_DISABLED_Val << UART_MR_ACON_Pos)      /* (UART_MR) The analog comparator is disabled. If OPT_EN=1, the analog comparator is enabled. Position  */
#define UART_MR_ACON_ENABLED                  (UART_MR_ACON_ENABLED_Val << UART_MR_ACON_Pos)       /* (UART_MR) The analog comparator is enabled. Position  */
#define UART_MR_EDGESEL_Pos                   _UINT32_(6)                                          /* (UART_MR) Analog Comparator Output Edge Selection Position */
#define UART_MR_EDGESEL_Msk                   (_UINT32_(0x3) << UART_MR_EDGESEL_Pos)               /* (UART_MR) Analog Comparator Output Edge Selection Mask */
#define UART_MR_EDGESEL(value)                (UART_MR_EDGESEL_Msk & (_UINT32_(value) << UART_MR_EDGESEL_Pos)) /* Assigment of value for EDGESEL in the UART_MR register */
#define   UART_MR_EDGESEL_RISING_Val          _UINT32_(0x0)                                        /* (UART_MR) The UART_SR.ACE is set if a rising edge is detected on analog comparator output.  */
#define   UART_MR_EDGESEL_FALLING_Val         _UINT32_(0x1)                                        /* (UART_MR) The UART_SR.ACE is set if a falling edge is detected on analog comparator output.  */
#define   UART_MR_EDGESEL_ANY_EDGE_Val        _UINT32_(0x2)                                        /* (UART_MR) The UART_SR.ACE is set as soon as an edge is detected on analog comparator output.  */
#define UART_MR_EDGESEL_RISING                (UART_MR_EDGESEL_RISING_Val << UART_MR_EDGESEL_Pos)  /* (UART_MR) The UART_SR.ACE is set if a rising edge is detected on analog comparator output. Position  */
#define UART_MR_EDGESEL_FALLING               (UART_MR_EDGESEL_FALLING_Val << UART_MR_EDGESEL_Pos) /* (UART_MR) The UART_SR.ACE is set if a falling edge is detected on analog comparator output. Position  */
#define UART_MR_EDGESEL_ANY_EDGE              (UART_MR_EDGESEL_ANY_EDGE_Val << UART_MR_EDGESEL_Pos) /* (UART_MR) The UART_SR.ACE is set as soon as an edge is detected on analog comparator output. Position  */
#define UART_MR_OPT_WKUP_Pos                  _UINT32_(8)                                          /* (UART_MR) Optical Link Activity Wake-up Enable Position */
#define UART_MR_OPT_WKUP_Msk                  (_UINT32_(0x1) << UART_MR_OPT_WKUP_Pos)              /* (UART_MR) Optical Link Activity Wake-up Enable Mask */
#define UART_MR_OPT_WKUP(value)               (UART_MR_OPT_WKUP_Msk & (_UINT32_(value) << UART_MR_OPT_WKUP_Pos)) /* Assigment of value for OPT_WKUP in the UART_MR register */
#define   UART_MR_OPT_WKUP_DISABLED_Val       _UINT32_(0x0)                                        /* (UART_MR) To detect any activity on the output of analog comparator, the clock is always active and OPT_EN must be written to 1..  */
#define   UART_MR_OPT_WKUP_ENABLED_Val        _UINT32_(0x1)                                        /* (UART_MR) If OPT_EN=0 and a logical 1 is detected after inversion (if RXINV=1) on analog comparator output, the clock if automatically enabled for all UART sub-modules. After a period of inactivity on URXD (time-out) the software can instruct the UART to disabled the clock of all sub-modules to reduce power consumption by applying the UART_CR.OPT_SLEEP command.  */
#define UART_MR_OPT_WKUP_DISABLED             (UART_MR_OPT_WKUP_DISABLED_Val << UART_MR_OPT_WKUP_Pos) /* (UART_MR) To detect any activity on the output of analog comparator, the clock is always active and OPT_EN must be written to 1.. Position  */
#define UART_MR_OPT_WKUP_ENABLED              (UART_MR_OPT_WKUP_ENABLED_Val << UART_MR_OPT_WKUP_Pos) /* (UART_MR) If OPT_EN=0 and a logical 1 is detected after inversion (if RXINV=1) on analog comparator output, the clock if automatically enabled for all UART sub-modules. After a period of inactivity on URXD (time-out) the software can instruct the UART to disabled the clock of all sub-modules to reduce power consumption by applying the UART_CR.OPT_SLEEP command. Position  */
#define UART_MR_PAR_Pos                       _UINT32_(9)                                          /* (UART_MR) Parity Type Position */
#define UART_MR_PAR_Msk                       (_UINT32_(0x7) << UART_MR_PAR_Pos)                   /* (UART_MR) Parity Type Mask */
#define UART_MR_PAR(value)                    (UART_MR_PAR_Msk & (_UINT32_(value) << UART_MR_PAR_Pos)) /* Assigment of value for PAR in the UART_MR register */
#define   UART_MR_PAR_EVEN_Val                _UINT32_(0x0)                                        /* (UART_MR) Even Parity  */
#define   UART_MR_PAR_ODD_Val                 _UINT32_(0x1)                                        /* (UART_MR) Odd Parity  */
#define   UART_MR_PAR_SPACE_Val               _UINT32_(0x2)                                        /* (UART_MR) Space: parity forced to 0  */
#define   UART_MR_PAR_MARK_Val                _UINT32_(0x3)                                        /* (UART_MR) Mark: parity forced to 1  */
#define   UART_MR_PAR_NO_Val                  _UINT32_(0x4)                                        /* (UART_MR) No parity  */
#define UART_MR_PAR_EVEN                      (UART_MR_PAR_EVEN_Val << UART_MR_PAR_Pos)            /* (UART_MR) Even Parity Position  */
#define UART_MR_PAR_ODD                       (UART_MR_PAR_ODD_Val << UART_MR_PAR_Pos)             /* (UART_MR) Odd Parity Position  */
#define UART_MR_PAR_SPACE                     (UART_MR_PAR_SPACE_Val << UART_MR_PAR_Pos)           /* (UART_MR) Space: parity forced to 0 Position  */
#define UART_MR_PAR_MARK                      (UART_MR_PAR_MARK_Val << UART_MR_PAR_Pos)            /* (UART_MR) Mark: parity forced to 1 Position  */
#define UART_MR_PAR_NO                        (UART_MR_PAR_NO_Val << UART_MR_PAR_Pos)              /* (UART_MR) No parity Position  */
#define UART_MR_BRSRCCK_Pos                   _UINT32_(12)                                         /* (UART_MR) Baud Rate Source Clock Position */
#define UART_MR_BRSRCCK_Msk                   (_UINT32_(0x1) << UART_MR_BRSRCCK_Pos)               /* (UART_MR) Baud Rate Source Clock Mask */
#define UART_MR_BRSRCCK(value)                (UART_MR_BRSRCCK_Msk & (_UINT32_(value) << UART_MR_BRSRCCK_Pos)) /* Assigment of value for BRSRCCK in the UART_MR register */
#define   UART_MR_BRSRCCK_PERIPH_CLK_Val      _UINT32_(0x0)                                        /* (UART_MR) The baud rate is driven by the peripheral clock  */
#define   UART_MR_BRSRCCK_GCLK_Val            _UINT32_(0x1)                                        /* (UART_MR) The baud rate is driven by a PMC-programmable clock GCLK (see the section "Power Management Controller (PMC)").  */
#define UART_MR_BRSRCCK_PERIPH_CLK            (UART_MR_BRSRCCK_PERIPH_CLK_Val << UART_MR_BRSRCCK_Pos) /* (UART_MR) The baud rate is driven by the peripheral clock Position  */
#define UART_MR_BRSRCCK_GCLK                  (UART_MR_BRSRCCK_GCLK_Val << UART_MR_BRSRCCK_Pos)    /* (UART_MR) The baud rate is driven by a PMC-programmable clock GCLK (see the section "Power Management Controller (PMC)"). Position  */
#define UART_MR_CHMODE_Pos                    _UINT32_(14)                                         /* (UART_MR) Channel Mode Position */
#define UART_MR_CHMODE_Msk                    (_UINT32_(0x3) << UART_MR_CHMODE_Pos)                /* (UART_MR) Channel Mode Mask */
#define UART_MR_CHMODE(value)                 (UART_MR_CHMODE_Msk & (_UINT32_(value) << UART_MR_CHMODE_Pos)) /* Assigment of value for CHMODE in the UART_MR register */
#define   UART_MR_CHMODE_NORMAL_Val           _UINT32_(0x0)                                        /* (UART_MR) Normal mode  */
#define   UART_MR_CHMODE_AUTOMATIC_Val        _UINT32_(0x1)                                        /* (UART_MR) Automatic echo  */
#define   UART_MR_CHMODE_LOCAL_LOOPBACK_Val   _UINT32_(0x2)                                        /* (UART_MR) Local loopback  */
#define   UART_MR_CHMODE_REMOTE_LOOPBACK_Val  _UINT32_(0x3)                                        /* (UART_MR) Remote loopback  */
#define UART_MR_CHMODE_NORMAL                 (UART_MR_CHMODE_NORMAL_Val << UART_MR_CHMODE_Pos)    /* (UART_MR) Normal mode Position  */
#define UART_MR_CHMODE_AUTOMATIC              (UART_MR_CHMODE_AUTOMATIC_Val << UART_MR_CHMODE_Pos) /* (UART_MR) Automatic echo Position  */
#define UART_MR_CHMODE_LOCAL_LOOPBACK         (UART_MR_CHMODE_LOCAL_LOOPBACK_Val << UART_MR_CHMODE_Pos) /* (UART_MR) Local loopback Position  */
#define UART_MR_CHMODE_REMOTE_LOOPBACK        (UART_MR_CHMODE_REMOTE_LOOPBACK_Val << UART_MR_CHMODE_Pos) /* (UART_MR) Remote loopback Position  */
#define UART_MR_OPT_CLKDIV_Pos                _UINT32_(16)                                         /* (UART_MR) Optical Link Clock Divider Position */
#define UART_MR_OPT_CLKDIV_Msk                (_UINT32_(0x1F) << UART_MR_OPT_CLKDIV_Pos)           /* (UART_MR) Optical Link Clock Divider Mask */
#define UART_MR_OPT_CLKDIV(value)             (UART_MR_OPT_CLKDIV_Msk & (_UINT32_(value) << UART_MR_OPT_CLKDIV_Pos)) /* Assigment of value for OPT_CLKDIV in the UART_MR register */
#define UART_MR_OPT_DUTY_Pos                  _UINT32_(24)                                         /* (UART_MR) Optical Link Modulation Clock Duty Cycle Position */
#define UART_MR_OPT_DUTY_Msk                  (_UINT32_(0x7) << UART_MR_OPT_DUTY_Pos)              /* (UART_MR) Optical Link Modulation Clock Duty Cycle Mask */
#define UART_MR_OPT_DUTY(value)               (UART_MR_OPT_DUTY_Msk & (_UINT32_(value) << UART_MR_OPT_DUTY_Pos)) /* Assigment of value for OPT_DUTY in the UART_MR register */
#define   UART_MR_OPT_DUTY_DUTY_50_Val        _UINT32_(0x0)                                        /* (UART_MR) Modulation clock duty cycle Is 50%.  */
#define   UART_MR_OPT_DUTY_DUTY_43P75_Val     _UINT32_(0x1)                                        /* (UART_MR) Modulation clock duty cycle Is 43.75%.  */
#define   UART_MR_OPT_DUTY_DUTY_37P5_Val      _UINT32_(0x2)                                        /* (UART_MR) Modulation clock duty cycle Is 37.5%.  */
#define   UART_MR_OPT_DUTY_DUTY_31P25_Val     _UINT32_(0x3)                                        /* (UART_MR) Modulation clock duty cycle Is 31.75%.  */
#define   UART_MR_OPT_DUTY_DUTY_25_Val        _UINT32_(0x4)                                        /* (UART_MR) Modulation clock duty cycle Is 25%.  */
#define   UART_MR_OPT_DUTY_DUTY_18P75_Val     _UINT32_(0x5)                                        /* (UART_MR) Modulation clock duty cycle Is 18.75%.  */
#define   UART_MR_OPT_DUTY_DUTY_12P5_Val      _UINT32_(0x6)                                        /* (UART_MR) Modulation clock duty cycle Is 12.5%.  */
#define   UART_MR_OPT_DUTY_DUTY_6P25_Val      _UINT32_(0x7)                                        /* (UART_MR) Modulation clock duty cycle Is 6.25%.  */
#define UART_MR_OPT_DUTY_DUTY_50              (UART_MR_OPT_DUTY_DUTY_50_Val << UART_MR_OPT_DUTY_Pos) /* (UART_MR) Modulation clock duty cycle Is 50%. Position  */
#define UART_MR_OPT_DUTY_DUTY_43P75           (UART_MR_OPT_DUTY_DUTY_43P75_Val << UART_MR_OPT_DUTY_Pos) /* (UART_MR) Modulation clock duty cycle Is 43.75%. Position  */
#define UART_MR_OPT_DUTY_DUTY_37P5            (UART_MR_OPT_DUTY_DUTY_37P5_Val << UART_MR_OPT_DUTY_Pos) /* (UART_MR) Modulation clock duty cycle Is 37.5%. Position  */
#define UART_MR_OPT_DUTY_DUTY_31P25           (UART_MR_OPT_DUTY_DUTY_31P25_Val << UART_MR_OPT_DUTY_Pos) /* (UART_MR) Modulation clock duty cycle Is 31.75%. Position  */
#define UART_MR_OPT_DUTY_DUTY_25              (UART_MR_OPT_DUTY_DUTY_25_Val << UART_MR_OPT_DUTY_Pos) /* (UART_MR) Modulation clock duty cycle Is 25%. Position  */
#define UART_MR_OPT_DUTY_DUTY_18P75           (UART_MR_OPT_DUTY_DUTY_18P75_Val << UART_MR_OPT_DUTY_Pos) /* (UART_MR) Modulation clock duty cycle Is 18.75%. Position  */
#define UART_MR_OPT_DUTY_DUTY_12P5            (UART_MR_OPT_DUTY_DUTY_12P5_Val << UART_MR_OPT_DUTY_Pos) /* (UART_MR) Modulation clock duty cycle Is 12.5%. Position  */
#define UART_MR_OPT_DUTY_DUTY_6P25            (UART_MR_OPT_DUTY_DUTY_6P25_Val << UART_MR_OPT_DUTY_Pos) /* (UART_MR) Modulation clock duty cycle Is 6.25%. Position  */
#define UART_MR_OPT_CMPTH_Pos                 _UINT32_(28)                                         /* (UART_MR) Receive Path Comparator Threshold Position */
#define UART_MR_OPT_CMPTH_Msk                 (_UINT32_(0x7) << UART_MR_OPT_CMPTH_Pos)             /* (UART_MR) Receive Path Comparator Threshold Mask */
#define UART_MR_OPT_CMPTH(value)              (UART_MR_OPT_CMPTH_Msk & (_UINT32_(value) << UART_MR_OPT_CMPTH_Pos)) /* Assigment of value for OPT_CMPTH in the UART_MR register */
#define   UART_MR_OPT_CMPTH_VDD3V3_DIV2_Val   _UINT32_(0x0)                                        /* (UART_MR) Comparator threshold is VDD3V3/2 volts.  */
#define   UART_MR_OPT_CMPTH_VDD3V3_DIV2P5_Val _UINT32_(0x1)                                        /* (UART_MR) Comparator threshold is VDD3V3/2.5 volts.  */
#define   UART_MR_OPT_CMPTH_VDD3V3_DIV3P3_Val _UINT32_(0x2)                                        /* (UART_MR) Comparator threshold is VDD3V3/3.3 volts.  */
#define   UART_MR_OPT_CMPTH_VDD3V3_DIV5_Val   _UINT32_(0x3)                                        /* (UART_MR) Comparator threshold is VDD3V3/5 volts.  */
#define   UART_MR_OPT_CMPTH_VDD3V3_DIV10_Val  _UINT32_(0x4)                                        /* (UART_MR) Comparator threshold is VDD3V3/10 volts.  */
#define UART_MR_OPT_CMPTH_VDD3V3_DIV2         (UART_MR_OPT_CMPTH_VDD3V3_DIV2_Val << UART_MR_OPT_CMPTH_Pos) /* (UART_MR) Comparator threshold is VDD3V3/2 volts. Position  */
#define UART_MR_OPT_CMPTH_VDD3V3_DIV2P5       (UART_MR_OPT_CMPTH_VDD3V3_DIV2P5_Val << UART_MR_OPT_CMPTH_Pos) /* (UART_MR) Comparator threshold is VDD3V3/2.5 volts. Position  */
#define UART_MR_OPT_CMPTH_VDD3V3_DIV3P3       (UART_MR_OPT_CMPTH_VDD3V3_DIV3P3_Val << UART_MR_OPT_CMPTH_Pos) /* (UART_MR) Comparator threshold is VDD3V3/3.3 volts. Position  */
#define UART_MR_OPT_CMPTH_VDD3V3_DIV5         (UART_MR_OPT_CMPTH_VDD3V3_DIV5_Val << UART_MR_OPT_CMPTH_Pos) /* (UART_MR) Comparator threshold is VDD3V3/5 volts. Position  */
#define UART_MR_OPT_CMPTH_VDD3V3_DIV10        (UART_MR_OPT_CMPTH_VDD3V3_DIV10_Val << UART_MR_OPT_CMPTH_Pos) /* (UART_MR) Comparator threshold is VDD3V3/10 volts. Position  */
#define UART_MR_Msk                           _UINT32_(0x771FDFFF)                                 /* (UART_MR) Register Mask  */


/* -------- UART_IER : (UART Offset: 0x08) ( /W 32) Interrupt Enable Register -------- */
#define UART_IER_RXRDY_Pos                    _UINT32_(0)                                          /* (UART_IER) Enable RXRDY Interrupt Position */
#define UART_IER_RXRDY_Msk                    (_UINT32_(0x1) << UART_IER_RXRDY_Pos)                /* (UART_IER) Enable RXRDY Interrupt Mask */
#define UART_IER_RXRDY(value)                 (UART_IER_RXRDY_Msk & (_UINT32_(value) << UART_IER_RXRDY_Pos)) /* Assigment of value for RXRDY in the UART_IER register */
#define UART_IER_TXRDY_Pos                    _UINT32_(1)                                          /* (UART_IER) Enable TXRDY Interrupt Position */
#define UART_IER_TXRDY_Msk                    (_UINT32_(0x1) << UART_IER_TXRDY_Pos)                /* (UART_IER) Enable TXRDY Interrupt Mask */
#define UART_IER_TXRDY(value)                 (UART_IER_TXRDY_Msk & (_UINT32_(value) << UART_IER_TXRDY_Pos)) /* Assigment of value for TXRDY in the UART_IER register */
#define UART_IER_ENDRX_Pos                    _UINT32_(3)                                          /* (UART_IER) Enable End of Receive Transfer Interrupt Position */
#define UART_IER_ENDRX_Msk                    (_UINT32_(0x1) << UART_IER_ENDRX_Pos)                /* (UART_IER) Enable End of Receive Transfer Interrupt Mask */
#define UART_IER_ENDRX(value)                 (UART_IER_ENDRX_Msk & (_UINT32_(value) << UART_IER_ENDRX_Pos)) /* Assigment of value for ENDRX in the UART_IER register */
#define UART_IER_ENDTX_Pos                    _UINT32_(4)                                          /* (UART_IER) Enable End of Transmit Interrupt Position */
#define UART_IER_ENDTX_Msk                    (_UINT32_(0x1) << UART_IER_ENDTX_Pos)                /* (UART_IER) Enable End of Transmit Interrupt Mask */
#define UART_IER_ENDTX(value)                 (UART_IER_ENDTX_Msk & (_UINT32_(value) << UART_IER_ENDTX_Pos)) /* Assigment of value for ENDTX in the UART_IER register */
#define UART_IER_OVRE_Pos                     _UINT32_(5)                                          /* (UART_IER) Enable Overrun Error Interrupt Position */
#define UART_IER_OVRE_Msk                     (_UINT32_(0x1) << UART_IER_OVRE_Pos)                 /* (UART_IER) Enable Overrun Error Interrupt Mask */
#define UART_IER_OVRE(value)                  (UART_IER_OVRE_Msk & (_UINT32_(value) << UART_IER_OVRE_Pos)) /* Assigment of value for OVRE in the UART_IER register */
#define UART_IER_FRAME_Pos                    _UINT32_(6)                                          /* (UART_IER) Enable Framing Error Interrupt Position */
#define UART_IER_FRAME_Msk                    (_UINT32_(0x1) << UART_IER_FRAME_Pos)                /* (UART_IER) Enable Framing Error Interrupt Mask */
#define UART_IER_FRAME(value)                 (UART_IER_FRAME_Msk & (_UINT32_(value) << UART_IER_FRAME_Pos)) /* Assigment of value for FRAME in the UART_IER register */
#define UART_IER_PARE_Pos                     _UINT32_(7)                                          /* (UART_IER) Enable Parity Error Interrupt Position */
#define UART_IER_PARE_Msk                     (_UINT32_(0x1) << UART_IER_PARE_Pos)                 /* (UART_IER) Enable Parity Error Interrupt Mask */
#define UART_IER_PARE(value)                  (UART_IER_PARE_Msk & (_UINT32_(value) << UART_IER_PARE_Pos)) /* Assigment of value for PARE in the UART_IER register */
#define UART_IER_TIMEOUT_Pos                  _UINT32_(8)                                          /* (UART_IER) Enable Time-out Interrupt Position */
#define UART_IER_TIMEOUT_Msk                  (_UINT32_(0x1) << UART_IER_TIMEOUT_Pos)              /* (UART_IER) Enable Time-out Interrupt Mask */
#define UART_IER_TIMEOUT(value)               (UART_IER_TIMEOUT_Msk & (_UINT32_(value) << UART_IER_TIMEOUT_Pos)) /* Assigment of value for TIMEOUT in the UART_IER register */
#define UART_IER_TXEMPTY_Pos                  _UINT32_(9)                                          /* (UART_IER) Enable TXEMPTY Interrupt Position */
#define UART_IER_TXEMPTY_Msk                  (_UINT32_(0x1) << UART_IER_TXEMPTY_Pos)              /* (UART_IER) Enable TXEMPTY Interrupt Mask */
#define UART_IER_TXEMPTY(value)               (UART_IER_TXEMPTY_Msk & (_UINT32_(value) << UART_IER_TXEMPTY_Pos)) /* Assigment of value for TXEMPTY in the UART_IER register */
#define UART_IER_TXBUFE_Pos                   _UINT32_(11)                                         /* (UART_IER) Enable Buffer Empty Interrupt Position */
#define UART_IER_TXBUFE_Msk                   (_UINT32_(0x1) << UART_IER_TXBUFE_Pos)               /* (UART_IER) Enable Buffer Empty Interrupt Mask */
#define UART_IER_TXBUFE(value)                (UART_IER_TXBUFE_Msk & (_UINT32_(value) << UART_IER_TXBUFE_Pos)) /* Assigment of value for TXBUFE in the UART_IER register */
#define UART_IER_RXBUFF_Pos                   _UINT32_(12)                                         /* (UART_IER) Enable Buffer Full Interrupt Position */
#define UART_IER_RXBUFF_Msk                   (_UINT32_(0x1) << UART_IER_RXBUFF_Pos)               /* (UART_IER) Enable Buffer Full Interrupt Mask */
#define UART_IER_RXBUFF(value)                (UART_IER_RXBUFF_Msk & (_UINT32_(value) << UART_IER_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the UART_IER register */
#define UART_IER_CMP_Pos                      _UINT32_(15)                                         /* (UART_IER) Enable Comparison Interrupt Position */
#define UART_IER_CMP_Msk                      (_UINT32_(0x1) << UART_IER_CMP_Pos)                  /* (UART_IER) Enable Comparison Interrupt Mask */
#define UART_IER_CMP(value)                   (UART_IER_CMP_Msk & (_UINT32_(value) << UART_IER_CMP_Pos)) /* Assigment of value for CMP in the UART_IER register */
#define UART_IER_ACE_Pos                      _UINT32_(16)                                         /* (UART_IER) Enable Analog Comparator Event Interrupt Position */
#define UART_IER_ACE_Msk                      (_UINT32_(0x1) << UART_IER_ACE_Pos)                  /* (UART_IER) Enable Analog Comparator Event Interrupt Mask */
#define UART_IER_ACE(value)                   (UART_IER_ACE_Msk & (_UINT32_(value) << UART_IER_ACE_Pos)) /* Assigment of value for ACE in the UART_IER register */
#define UART_IER_Msk                          _UINT32_(0x00019BFB)                                 /* (UART_IER) Register Mask  */


/* -------- UART_IDR : (UART Offset: 0x0C) ( /W 32) Interrupt Disable Register -------- */
#define UART_IDR_RXRDY_Pos                    _UINT32_(0)                                          /* (UART_IDR) Disable RXRDY Interrupt Position */
#define UART_IDR_RXRDY_Msk                    (_UINT32_(0x1) << UART_IDR_RXRDY_Pos)                /* (UART_IDR) Disable RXRDY Interrupt Mask */
#define UART_IDR_RXRDY(value)                 (UART_IDR_RXRDY_Msk & (_UINT32_(value) << UART_IDR_RXRDY_Pos)) /* Assigment of value for RXRDY in the UART_IDR register */
#define UART_IDR_TXRDY_Pos                    _UINT32_(1)                                          /* (UART_IDR) Disable TXRDY Interrupt Position */
#define UART_IDR_TXRDY_Msk                    (_UINT32_(0x1) << UART_IDR_TXRDY_Pos)                /* (UART_IDR) Disable TXRDY Interrupt Mask */
#define UART_IDR_TXRDY(value)                 (UART_IDR_TXRDY_Msk & (_UINT32_(value) << UART_IDR_TXRDY_Pos)) /* Assigment of value for TXRDY in the UART_IDR register */
#define UART_IDR_ENDRX_Pos                    _UINT32_(3)                                          /* (UART_IDR) Disable End of Receive Transfer Interrupt Position */
#define UART_IDR_ENDRX_Msk                    (_UINT32_(0x1) << UART_IDR_ENDRX_Pos)                /* (UART_IDR) Disable End of Receive Transfer Interrupt Mask */
#define UART_IDR_ENDRX(value)                 (UART_IDR_ENDRX_Msk & (_UINT32_(value) << UART_IDR_ENDRX_Pos)) /* Assigment of value for ENDRX in the UART_IDR register */
#define UART_IDR_ENDTX_Pos                    _UINT32_(4)                                          /* (UART_IDR) Disable End of Transmit Interrupt Position */
#define UART_IDR_ENDTX_Msk                    (_UINT32_(0x1) << UART_IDR_ENDTX_Pos)                /* (UART_IDR) Disable End of Transmit Interrupt Mask */
#define UART_IDR_ENDTX(value)                 (UART_IDR_ENDTX_Msk & (_UINT32_(value) << UART_IDR_ENDTX_Pos)) /* Assigment of value for ENDTX in the UART_IDR register */
#define UART_IDR_OVRE_Pos                     _UINT32_(5)                                          /* (UART_IDR) Disable Overrun Error Interrupt Position */
#define UART_IDR_OVRE_Msk                     (_UINT32_(0x1) << UART_IDR_OVRE_Pos)                 /* (UART_IDR) Disable Overrun Error Interrupt Mask */
#define UART_IDR_OVRE(value)                  (UART_IDR_OVRE_Msk & (_UINT32_(value) << UART_IDR_OVRE_Pos)) /* Assigment of value for OVRE in the UART_IDR register */
#define UART_IDR_FRAME_Pos                    _UINT32_(6)                                          /* (UART_IDR) Disable Framing Error Interrupt Position */
#define UART_IDR_FRAME_Msk                    (_UINT32_(0x1) << UART_IDR_FRAME_Pos)                /* (UART_IDR) Disable Framing Error Interrupt Mask */
#define UART_IDR_FRAME(value)                 (UART_IDR_FRAME_Msk & (_UINT32_(value) << UART_IDR_FRAME_Pos)) /* Assigment of value for FRAME in the UART_IDR register */
#define UART_IDR_PARE_Pos                     _UINT32_(7)                                          /* (UART_IDR) Disable Parity Error Interrupt Position */
#define UART_IDR_PARE_Msk                     (_UINT32_(0x1) << UART_IDR_PARE_Pos)                 /* (UART_IDR) Disable Parity Error Interrupt Mask */
#define UART_IDR_PARE(value)                  (UART_IDR_PARE_Msk & (_UINT32_(value) << UART_IDR_PARE_Pos)) /* Assigment of value for PARE in the UART_IDR register */
#define UART_IDR_TIMEOUT_Pos                  _UINT32_(8)                                          /* (UART_IDR) Disable Time-out Interrupt Position */
#define UART_IDR_TIMEOUT_Msk                  (_UINT32_(0x1) << UART_IDR_TIMEOUT_Pos)              /* (UART_IDR) Disable Time-out Interrupt Mask */
#define UART_IDR_TIMEOUT(value)               (UART_IDR_TIMEOUT_Msk & (_UINT32_(value) << UART_IDR_TIMEOUT_Pos)) /* Assigment of value for TIMEOUT in the UART_IDR register */
#define UART_IDR_TXEMPTY_Pos                  _UINT32_(9)                                          /* (UART_IDR) Disable TXEMPTY Interrupt Position */
#define UART_IDR_TXEMPTY_Msk                  (_UINT32_(0x1) << UART_IDR_TXEMPTY_Pos)              /* (UART_IDR) Disable TXEMPTY Interrupt Mask */
#define UART_IDR_TXEMPTY(value)               (UART_IDR_TXEMPTY_Msk & (_UINT32_(value) << UART_IDR_TXEMPTY_Pos)) /* Assigment of value for TXEMPTY in the UART_IDR register */
#define UART_IDR_TXBUFE_Pos                   _UINT32_(11)                                         /* (UART_IDR) Disable Buffer Empty Interrupt Position */
#define UART_IDR_TXBUFE_Msk                   (_UINT32_(0x1) << UART_IDR_TXBUFE_Pos)               /* (UART_IDR) Disable Buffer Empty Interrupt Mask */
#define UART_IDR_TXBUFE(value)                (UART_IDR_TXBUFE_Msk & (_UINT32_(value) << UART_IDR_TXBUFE_Pos)) /* Assigment of value for TXBUFE in the UART_IDR register */
#define UART_IDR_RXBUFF_Pos                   _UINT32_(12)                                         /* (UART_IDR) Disable Buffer Full Interrupt Position */
#define UART_IDR_RXBUFF_Msk                   (_UINT32_(0x1) << UART_IDR_RXBUFF_Pos)               /* (UART_IDR) Disable Buffer Full Interrupt Mask */
#define UART_IDR_RXBUFF(value)                (UART_IDR_RXBUFF_Msk & (_UINT32_(value) << UART_IDR_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the UART_IDR register */
#define UART_IDR_CMP_Pos                      _UINT32_(15)                                         /* (UART_IDR) Disable Comparison Interrupt Position */
#define UART_IDR_CMP_Msk                      (_UINT32_(0x1) << UART_IDR_CMP_Pos)                  /* (UART_IDR) Disable Comparison Interrupt Mask */
#define UART_IDR_CMP(value)                   (UART_IDR_CMP_Msk & (_UINT32_(value) << UART_IDR_CMP_Pos)) /* Assigment of value for CMP in the UART_IDR register */
#define UART_IDR_ACE_Pos                      _UINT32_(16)                                         /* (UART_IDR) Disable Analog Comparator Event Interrupt Position */
#define UART_IDR_ACE_Msk                      (_UINT32_(0x1) << UART_IDR_ACE_Pos)                  /* (UART_IDR) Disable Analog Comparator Event Interrupt Mask */
#define UART_IDR_ACE(value)                   (UART_IDR_ACE_Msk & (_UINT32_(value) << UART_IDR_ACE_Pos)) /* Assigment of value for ACE in the UART_IDR register */
#define UART_IDR_Msk                          _UINT32_(0x00019BFB)                                 /* (UART_IDR) Register Mask  */


/* -------- UART_IMR : (UART Offset: 0x10) ( R/ 32) Interrupt Mask Register -------- */
#define UART_IMR_RXRDY_Pos                    _UINT32_(0)                                          /* (UART_IMR) Mask RXRDY Interrupt Position */
#define UART_IMR_RXRDY_Msk                    (_UINT32_(0x1) << UART_IMR_RXRDY_Pos)                /* (UART_IMR) Mask RXRDY Interrupt Mask */
#define UART_IMR_RXRDY(value)                 (UART_IMR_RXRDY_Msk & (_UINT32_(value) << UART_IMR_RXRDY_Pos)) /* Assigment of value for RXRDY in the UART_IMR register */
#define UART_IMR_TXRDY_Pos                    _UINT32_(1)                                          /* (UART_IMR) Mask TXRDY Interrupt Position */
#define UART_IMR_TXRDY_Msk                    (_UINT32_(0x1) << UART_IMR_TXRDY_Pos)                /* (UART_IMR) Mask TXRDY Interrupt Mask */
#define UART_IMR_TXRDY(value)                 (UART_IMR_TXRDY_Msk & (_UINT32_(value) << UART_IMR_TXRDY_Pos)) /* Assigment of value for TXRDY in the UART_IMR register */
#define UART_IMR_ENDRX_Pos                    _UINT32_(3)                                          /* (UART_IMR) Mask End of Receive Transfer Interrupt Position */
#define UART_IMR_ENDRX_Msk                    (_UINT32_(0x1) << UART_IMR_ENDRX_Pos)                /* (UART_IMR) Mask End of Receive Transfer Interrupt Mask */
#define UART_IMR_ENDRX(value)                 (UART_IMR_ENDRX_Msk & (_UINT32_(value) << UART_IMR_ENDRX_Pos)) /* Assigment of value for ENDRX in the UART_IMR register */
#define UART_IMR_ENDTX_Pos                    _UINT32_(4)                                          /* (UART_IMR) Mask End of Transmit Interrupt Position */
#define UART_IMR_ENDTX_Msk                    (_UINT32_(0x1) << UART_IMR_ENDTX_Pos)                /* (UART_IMR) Mask End of Transmit Interrupt Mask */
#define UART_IMR_ENDTX(value)                 (UART_IMR_ENDTX_Msk & (_UINT32_(value) << UART_IMR_ENDTX_Pos)) /* Assigment of value for ENDTX in the UART_IMR register */
#define UART_IMR_OVRE_Pos                     _UINT32_(5)                                          /* (UART_IMR) Mask Overrun Error Interrupt Position */
#define UART_IMR_OVRE_Msk                     (_UINT32_(0x1) << UART_IMR_OVRE_Pos)                 /* (UART_IMR) Mask Overrun Error Interrupt Mask */
#define UART_IMR_OVRE(value)                  (UART_IMR_OVRE_Msk & (_UINT32_(value) << UART_IMR_OVRE_Pos)) /* Assigment of value for OVRE in the UART_IMR register */
#define UART_IMR_FRAME_Pos                    _UINT32_(6)                                          /* (UART_IMR) Mask Framing Error Interrupt Position */
#define UART_IMR_FRAME_Msk                    (_UINT32_(0x1) << UART_IMR_FRAME_Pos)                /* (UART_IMR) Mask Framing Error Interrupt Mask */
#define UART_IMR_FRAME(value)                 (UART_IMR_FRAME_Msk & (_UINT32_(value) << UART_IMR_FRAME_Pos)) /* Assigment of value for FRAME in the UART_IMR register */
#define UART_IMR_PARE_Pos                     _UINT32_(7)                                          /* (UART_IMR) Mask Parity Error Interrupt Position */
#define UART_IMR_PARE_Msk                     (_UINT32_(0x1) << UART_IMR_PARE_Pos)                 /* (UART_IMR) Mask Parity Error Interrupt Mask */
#define UART_IMR_PARE(value)                  (UART_IMR_PARE_Msk & (_UINT32_(value) << UART_IMR_PARE_Pos)) /* Assigment of value for PARE in the UART_IMR register */
#define UART_IMR_TIMEOUT_Pos                  _UINT32_(8)                                          /* (UART_IMR) Mask Time-out Interrupt Position */
#define UART_IMR_TIMEOUT_Msk                  (_UINT32_(0x1) << UART_IMR_TIMEOUT_Pos)              /* (UART_IMR) Mask Time-out Interrupt Mask */
#define UART_IMR_TIMEOUT(value)               (UART_IMR_TIMEOUT_Msk & (_UINT32_(value) << UART_IMR_TIMEOUT_Pos)) /* Assigment of value for TIMEOUT in the UART_IMR register */
#define UART_IMR_TXEMPTY_Pos                  _UINT32_(9)                                          /* (UART_IMR) Mask TXEMPTY Interrupt Position */
#define UART_IMR_TXEMPTY_Msk                  (_UINT32_(0x1) << UART_IMR_TXEMPTY_Pos)              /* (UART_IMR) Mask TXEMPTY Interrupt Mask */
#define UART_IMR_TXEMPTY(value)               (UART_IMR_TXEMPTY_Msk & (_UINT32_(value) << UART_IMR_TXEMPTY_Pos)) /* Assigment of value for TXEMPTY in the UART_IMR register */
#define UART_IMR_TXBUFE_Pos                   _UINT32_(11)                                         /* (UART_IMR) Mask TXBUFE Interrupt Position */
#define UART_IMR_TXBUFE_Msk                   (_UINT32_(0x1) << UART_IMR_TXBUFE_Pos)               /* (UART_IMR) Mask TXBUFE Interrupt Mask */
#define UART_IMR_TXBUFE(value)                (UART_IMR_TXBUFE_Msk & (_UINT32_(value) << UART_IMR_TXBUFE_Pos)) /* Assigment of value for TXBUFE in the UART_IMR register */
#define UART_IMR_RXBUFF_Pos                   _UINT32_(12)                                         /* (UART_IMR) Mask RXBUFF Interrupt Position */
#define UART_IMR_RXBUFF_Msk                   (_UINT32_(0x1) << UART_IMR_RXBUFF_Pos)               /* (UART_IMR) Mask RXBUFF Interrupt Mask */
#define UART_IMR_RXBUFF(value)                (UART_IMR_RXBUFF_Msk & (_UINT32_(value) << UART_IMR_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the UART_IMR register */
#define UART_IMR_CMP_Pos                      _UINT32_(15)                                         /* (UART_IMR) Mask Comparison Interrupt Position */
#define UART_IMR_CMP_Msk                      (_UINT32_(0x1) << UART_IMR_CMP_Pos)                  /* (UART_IMR) Mask Comparison Interrupt Mask */
#define UART_IMR_CMP(value)                   (UART_IMR_CMP_Msk & (_UINT32_(value) << UART_IMR_CMP_Pos)) /* Assigment of value for CMP in the UART_IMR register */
#define UART_IMR_ACE_Pos                      _UINT32_(16)                                         /* (UART_IMR) Mask Analog Comparator Event Interrupt Position */
#define UART_IMR_ACE_Msk                      (_UINT32_(0x1) << UART_IMR_ACE_Pos)                  /* (UART_IMR) Mask Analog Comparator Event Interrupt Mask */
#define UART_IMR_ACE(value)                   (UART_IMR_ACE_Msk & (_UINT32_(value) << UART_IMR_ACE_Pos)) /* Assigment of value for ACE in the UART_IMR register */
#define UART_IMR_Msk                          _UINT32_(0x00019BFB)                                 /* (UART_IMR) Register Mask  */


/* -------- UART_SR : (UART Offset: 0x14) ( R/ 32) Interrupt Status Register -------- */
#define UART_SR_RXRDY_Pos                     _UINT32_(0)                                          /* (UART_SR) Receiver Ready (Cleared by reading the UART_RHR) Position */
#define UART_SR_RXRDY_Msk                     (_UINT32_(0x1) << UART_SR_RXRDY_Pos)                 /* (UART_SR) Receiver Ready (Cleared by reading the UART_RHR) Mask */
#define UART_SR_RXRDY(value)                  (UART_SR_RXRDY_Msk & (_UINT32_(value) << UART_SR_RXRDY_Pos)) /* Assigment of value for RXRDY in the UART_SR register */
#define UART_SR_TXRDY_Pos                     _UINT32_(1)                                          /* (UART_SR) Transmitter Ready (Cleared by writing the UART_THR) Position */
#define UART_SR_TXRDY_Msk                     (_UINT32_(0x1) << UART_SR_TXRDY_Pos)                 /* (UART_SR) Transmitter Ready (Cleared by writing the UART_THR) Mask */
#define UART_SR_TXRDY(value)                  (UART_SR_TXRDY_Msk & (_UINT32_(value) << UART_SR_TXRDY_Pos)) /* Assigment of value for TXRDY in the UART_SR register */
#define UART_SR_ENDRX_Pos                     _UINT32_(3)                                          /* (UART_SR) End of Receiver Transfer Position */
#define UART_SR_ENDRX_Msk                     (_UINT32_(0x1) << UART_SR_ENDRX_Pos)                 /* (UART_SR) End of Receiver Transfer Mask */
#define UART_SR_ENDRX(value)                  (UART_SR_ENDRX_Msk & (_UINT32_(value) << UART_SR_ENDRX_Pos)) /* Assigment of value for ENDRX in the UART_SR register */
#define UART_SR_ENDTX_Pos                     _UINT32_(4)                                          /* (UART_SR) End of Transmitter Transfer Position */
#define UART_SR_ENDTX_Msk                     (_UINT32_(0x1) << UART_SR_ENDTX_Pos)                 /* (UART_SR) End of Transmitter Transfer Mask */
#define UART_SR_ENDTX(value)                  (UART_SR_ENDTX_Msk & (_UINT32_(value) << UART_SR_ENDTX_Pos)) /* Assigment of value for ENDTX in the UART_SR register */
#define UART_SR_OVRE_Pos                      _UINT32_(5)                                          /* (UART_SR) Overrun Error (Cleared by writing UART_CR.RSTSTA) Position */
#define UART_SR_OVRE_Msk                      (_UINT32_(0x1) << UART_SR_OVRE_Pos)                  /* (UART_SR) Overrun Error (Cleared by writing UART_CR.RSTSTA) Mask */
#define UART_SR_OVRE(value)                   (UART_SR_OVRE_Msk & (_UINT32_(value) << UART_SR_OVRE_Pos)) /* Assigment of value for OVRE in the UART_SR register */
#define UART_SR_FRAME_Pos                     _UINT32_(6)                                          /* (UART_SR) Framing Error (Cleared by writing UART_CR.RSTSTA) Position */
#define UART_SR_FRAME_Msk                     (_UINT32_(0x1) << UART_SR_FRAME_Pos)                 /* (UART_SR) Framing Error (Cleared by writing UART_CR.RSTSTA) Mask */
#define UART_SR_FRAME(value)                  (UART_SR_FRAME_Msk & (_UINT32_(value) << UART_SR_FRAME_Pos)) /* Assigment of value for FRAME in the UART_SR register */
#define UART_SR_PARE_Pos                      _UINT32_(7)                                          /* (UART_SR) Parity Error (Cleared by writing UART_CR.RSTSTA) Position */
#define UART_SR_PARE_Msk                      (_UINT32_(0x1) << UART_SR_PARE_Pos)                  /* (UART_SR) Parity Error (Cleared by writing UART_CR.RSTSTA) Mask */
#define UART_SR_PARE(value)                   (UART_SR_PARE_Msk & (_UINT32_(value) << UART_SR_PARE_Pos)) /* Assigment of value for PARE in the UART_SR register */
#define UART_SR_TIMEOUT_Pos                   _UINT32_(8)                                          /* (UART_SR) Receiver Time-out (Cleared by writing the UART_CR.STTTO) Position */
#define UART_SR_TIMEOUT_Msk                   (_UINT32_(0x1) << UART_SR_TIMEOUT_Pos)               /* (UART_SR) Receiver Time-out (Cleared by writing the UART_CR.STTTO) Mask */
#define UART_SR_TIMEOUT(value)                (UART_SR_TIMEOUT_Msk & (_UINT32_(value) << UART_SR_TIMEOUT_Pos)) /* Assigment of value for TIMEOUT in the UART_SR register */
#define UART_SR_TXEMPTY_Pos                   _UINT32_(9)                                          /* (UART_SR) Transmitter Empty (Cleared by writing the UART_THR) Position */
#define UART_SR_TXEMPTY_Msk                   (_UINT32_(0x1) << UART_SR_TXEMPTY_Pos)               /* (UART_SR) Transmitter Empty (Cleared by writing the UART_THR) Mask */
#define UART_SR_TXEMPTY(value)                (UART_SR_TXEMPTY_Msk & (_UINT32_(value) << UART_SR_TXEMPTY_Pos)) /* Assigment of value for TXEMPTY in the UART_SR register */
#define UART_SR_TXBUFE_Pos                    _UINT32_(11)                                         /* (UART_SR) Transmission Buffer Empty Position */
#define UART_SR_TXBUFE_Msk                    (_UINT32_(0x1) << UART_SR_TXBUFE_Pos)                /* (UART_SR) Transmission Buffer Empty Mask */
#define UART_SR_TXBUFE(value)                 (UART_SR_TXBUFE_Msk & (_UINT32_(value) << UART_SR_TXBUFE_Pos)) /* Assigment of value for TXBUFE in the UART_SR register */
#define UART_SR_RXBUFF_Pos                    _UINT32_(12)                                         /* (UART_SR) Receive Buffer Full Position */
#define UART_SR_RXBUFF_Msk                    (_UINT32_(0x1) << UART_SR_RXBUFF_Pos)                /* (UART_SR) Receive Buffer Full Mask */
#define UART_SR_RXBUFF(value)                 (UART_SR_RXBUFF_Msk & (_UINT32_(value) << UART_SR_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the UART_SR register */
#define UART_SR_CMP_Pos                       _UINT32_(15)                                         /* (UART_SR) Comparison Match (Cleared by writing the UART_CR.RSTSTA) Position */
#define UART_SR_CMP_Msk                       (_UINT32_(0x1) << UART_SR_CMP_Pos)                   /* (UART_SR) Comparison Match (Cleared by writing the UART_CR.RSTSTA) Mask */
#define UART_SR_CMP(value)                    (UART_SR_CMP_Msk & (_UINT32_(value) << UART_SR_CMP_Pos)) /* Assigment of value for CMP in the UART_SR register */
#define UART_SR_ACE_Pos                       _UINT32_(16)                                         /* (UART_SR) Analog Comparator Event Interrupt (Cleared by writing UART_CR.RSTSTA) Position */
#define UART_SR_ACE_Msk                       (_UINT32_(0x1) << UART_SR_ACE_Pos)                   /* (UART_SR) Analog Comparator Event Interrupt (Cleared by writing UART_CR.RSTSTA) Mask */
#define UART_SR_ACE(value)                    (UART_SR_ACE_Msk & (_UINT32_(value) << UART_SR_ACE_Pos)) /* Assigment of value for ACE in the UART_SR register */
#define UART_SR_Msk                           _UINT32_(0x00019BFB)                                 /* (UART_SR) Register Mask  */


/* -------- UART_RHR : (UART Offset: 0x18) ( R/ 32) Receive Holding Register -------- */
#define UART_RHR_RXCHR_Pos                    _UINT32_(0)                                          /* (UART_RHR) Received Character Position */
#define UART_RHR_RXCHR_Msk                    (_UINT32_(0xFF) << UART_RHR_RXCHR_Pos)               /* (UART_RHR) Received Character Mask */
#define UART_RHR_RXCHR(value)                 (UART_RHR_RXCHR_Msk & (_UINT32_(value) << UART_RHR_RXCHR_Pos)) /* Assigment of value for RXCHR in the UART_RHR register */
#define UART_RHR_Msk                          _UINT32_(0x000000FF)                                 /* (UART_RHR) Register Mask  */


/* -------- UART_THR : (UART Offset: 0x1C) ( /W 32) Transmit Holding Register -------- */
#define UART_THR_TXCHR_Pos                    _UINT32_(0)                                          /* (UART_THR) Character to be Transmitted Position */
#define UART_THR_TXCHR_Msk                    (_UINT32_(0xFF) << UART_THR_TXCHR_Pos)               /* (UART_THR) Character to be Transmitted Mask */
#define UART_THR_TXCHR(value)                 (UART_THR_TXCHR_Msk & (_UINT32_(value) << UART_THR_TXCHR_Pos)) /* Assigment of value for TXCHR in the UART_THR register */
#define UART_THR_Msk                          _UINT32_(0x000000FF)                                 /* (UART_THR) Register Mask  */


/* -------- UART_BRGR : (UART Offset: 0x20) (R/W 32) Baud Rate Generator Register -------- */
#define UART_BRGR_CD_Pos                      _UINT32_(0)                                          /* (UART_BRGR) Clock Divisor Position */
#define UART_BRGR_CD_Msk                      (_UINT32_(0xFFFF) << UART_BRGR_CD_Pos)               /* (UART_BRGR) Clock Divisor Mask */
#define UART_BRGR_CD(value)                   (UART_BRGR_CD_Msk & (_UINT32_(value) << UART_BRGR_CD_Pos)) /* Assigment of value for CD in the UART_BRGR register */
#define UART_BRGR_Msk                         _UINT32_(0x0000FFFF)                                 /* (UART_BRGR) Register Mask  */


/* -------- UART_CMPR : (UART Offset: 0x24) (R/W 32) Comparison Register -------- */
#define UART_CMPR_VAL1_Pos                    _UINT32_(0)                                          /* (UART_CMPR) First Comparison Value for Received Character Position */
#define UART_CMPR_VAL1_Msk                    (_UINT32_(0xFF) << UART_CMPR_VAL1_Pos)               /* (UART_CMPR) First Comparison Value for Received Character Mask */
#define UART_CMPR_VAL1(value)                 (UART_CMPR_VAL1_Msk & (_UINT32_(value) << UART_CMPR_VAL1_Pos)) /* Assigment of value for VAL1 in the UART_CMPR register */
#define UART_CMPR_CMPMODE_Pos                 _UINT32_(12)                                         /* (UART_CMPR) Comparison Mode Position */
#define UART_CMPR_CMPMODE_Msk                 (_UINT32_(0x1) << UART_CMPR_CMPMODE_Pos)             /* (UART_CMPR) Comparison Mode Mask */
#define UART_CMPR_CMPMODE(value)              (UART_CMPR_CMPMODE_Msk & (_UINT32_(value) << UART_CMPR_CMPMODE_Pos)) /* Assigment of value for CMPMODE in the UART_CMPR register */
#define   UART_CMPR_CMPMODE_FLAG_ONLY_Val     _UINT32_(0x0)                                        /* (UART_CMPR) Any character is received and comparison function drives CMP flag.  */
#define   UART_CMPR_CMPMODE_START_CONDITION_Val _UINT32_(0x1)                                        /* (UART_CMPR) Comparison condition must be met to start reception.  */
#define UART_CMPR_CMPMODE_FLAG_ONLY           (UART_CMPR_CMPMODE_FLAG_ONLY_Val << UART_CMPR_CMPMODE_Pos) /* (UART_CMPR) Any character is received and comparison function drives CMP flag. Position  */
#define UART_CMPR_CMPMODE_START_CONDITION     (UART_CMPR_CMPMODE_START_CONDITION_Val << UART_CMPR_CMPMODE_Pos) /* (UART_CMPR) Comparison condition must be met to start reception. Position  */
#define UART_CMPR_CMPPAR_Pos                  _UINT32_(14)                                         /* (UART_CMPR) Compare Parity Position */
#define UART_CMPR_CMPPAR_Msk                  (_UINT32_(0x1) << UART_CMPR_CMPPAR_Pos)              /* (UART_CMPR) Compare Parity Mask */
#define UART_CMPR_CMPPAR(value)               (UART_CMPR_CMPPAR_Msk & (_UINT32_(value) << UART_CMPR_CMPPAR_Pos)) /* Assigment of value for CMPPAR in the UART_CMPR register */
#define UART_CMPR_VAL2_Pos                    _UINT32_(16)                                         /* (UART_CMPR) Second Comparison Value for Received Character Position */
#define UART_CMPR_VAL2_Msk                    (_UINT32_(0xFF) << UART_CMPR_VAL2_Pos)               /* (UART_CMPR) Second Comparison Value for Received Character Mask */
#define UART_CMPR_VAL2(value)                 (UART_CMPR_VAL2_Msk & (_UINT32_(value) << UART_CMPR_VAL2_Pos)) /* Assigment of value for VAL2 in the UART_CMPR register */
#define UART_CMPR_Msk                         _UINT32_(0x00FF50FF)                                 /* (UART_CMPR) Register Mask  */


/* -------- UART_RTOR : (UART Offset: 0x28) (R/W 32) Receiver Time-out Register -------- */
#define UART_RTOR_TO_Pos                      _UINT32_(0)                                          /* (UART_RTOR) Time-out Value Position */
#define UART_RTOR_TO_Msk                      (_UINT32_(0xFF) << UART_RTOR_TO_Pos)                 /* (UART_RTOR) Time-out Value Mask */
#define UART_RTOR_TO(value)                   (UART_RTOR_TO_Msk & (_UINT32_(value) << UART_RTOR_TO_Pos)) /* Assigment of value for TO in the UART_RTOR register */
#define UART_RTOR_Msk                         _UINT32_(0x000000FF)                                 /* (UART_RTOR) Register Mask  */


/* -------- UART_CSR : (UART Offset: 0x2C) ( R/ 32) Current Status Register -------- */
#define UART_CSR_ACO_Pos                      _UINT32_(0)                                          /* (UART_CSR) Analog Comparator Output Position */
#define UART_CSR_ACO_Msk                      (_UINT32_(0x1) << UART_CSR_ACO_Pos)                  /* (UART_CSR) Analog Comparator Output Mask */
#define UART_CSR_ACO(value)                   (UART_CSR_ACO_Msk & (_UINT32_(value) << UART_CSR_ACO_Pos)) /* Assigment of value for ACO in the UART_CSR register */
#define UART_CSR_Msk                          _UINT32_(0x00000001)                                 /* (UART_CSR) Register Mask  */


/* -------- UART_WPMR : (UART Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define UART_WPMR_WPEN_Pos                    _UINT32_(0)                                          /* (UART_WPMR) Write Protection Enable Position */
#define UART_WPMR_WPEN_Msk                    (_UINT32_(0x1) << UART_WPMR_WPEN_Pos)                /* (UART_WPMR) Write Protection Enable Mask */
#define UART_WPMR_WPEN(value)                 (UART_WPMR_WPEN_Msk & (_UINT32_(value) << UART_WPMR_WPEN_Pos)) /* Assigment of value for WPEN in the UART_WPMR register */
#define UART_WPMR_WPKEY_Pos                   _UINT32_(8)                                          /* (UART_WPMR) Write Protection Key Position */
#define UART_WPMR_WPKEY_Msk                   (_UINT32_(0xFFFFFF) << UART_WPMR_WPKEY_Pos)          /* (UART_WPMR) Write Protection Key Mask */
#define UART_WPMR_WPKEY(value)                (UART_WPMR_WPKEY_Msk & (_UINT32_(value) << UART_WPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the UART_WPMR register */
#define   UART_WPMR_WPKEY_PASSWD_Val          _UINT32_(0x554152)                                   /* (UART_WPMR) Writing any other value in this field aborts the write operation. Always reads as 0.  */
#define UART_WPMR_WPKEY_PASSWD                (UART_WPMR_WPKEY_PASSWD_Val << UART_WPMR_WPKEY_Pos)  /* (UART_WPMR) Writing any other value in this field aborts the write operation. Always reads as 0. Position  */
#define UART_WPMR_Msk                         _UINT32_(0xFFFFFF01)                                 /* (UART_WPMR) Register Mask  */


/* -------- UART_RPR : (UART Offset: 0x100) (R/W 32) Receive Pointer Register -------- */
#define UART_RPR_RXPTR_Pos                    _UINT32_(0)                                          /* (UART_RPR) Receive Pointer Register Position */
#define UART_RPR_RXPTR_Msk                    (_UINT32_(0xFFFFFFFF) << UART_RPR_RXPTR_Pos)         /* (UART_RPR) Receive Pointer Register Mask */
#define UART_RPR_RXPTR(value)                 (UART_RPR_RXPTR_Msk & (_UINT32_(value) << UART_RPR_RXPTR_Pos)) /* Assigment of value for RXPTR in the UART_RPR register */
#define UART_RPR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (UART_RPR) Register Mask  */


/* -------- UART_RCR : (UART Offset: 0x104) (R/W 32) Receive Counter Register -------- */
#define UART_RCR_RXCTR_Pos                    _UINT32_(0)                                          /* (UART_RCR) Receive Counter Register Position */
#define UART_RCR_RXCTR_Msk                    (_UINT32_(0xFFFF) << UART_RCR_RXCTR_Pos)             /* (UART_RCR) Receive Counter Register Mask */
#define UART_RCR_RXCTR(value)                 (UART_RCR_RXCTR_Msk & (_UINT32_(value) << UART_RCR_RXCTR_Pos)) /* Assigment of value for RXCTR in the UART_RCR register */
#define UART_RCR_Msk                          _UINT32_(0x0000FFFF)                                 /* (UART_RCR) Register Mask  */


/* -------- UART_TPR : (UART Offset: 0x108) (R/W 32) Transmit Pointer Register -------- */
#define UART_TPR_TXPTR_Pos                    _UINT32_(0)                                          /* (UART_TPR) Transmit Counter Register Position */
#define UART_TPR_TXPTR_Msk                    (_UINT32_(0xFFFFFFFF) << UART_TPR_TXPTR_Pos)         /* (UART_TPR) Transmit Counter Register Mask */
#define UART_TPR_TXPTR(value)                 (UART_TPR_TXPTR_Msk & (_UINT32_(value) << UART_TPR_TXPTR_Pos)) /* Assigment of value for TXPTR in the UART_TPR register */
#define UART_TPR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (UART_TPR) Register Mask  */


/* -------- UART_TCR : (UART Offset: 0x10C) (R/W 32) Transmit Counter Register -------- */
#define UART_TCR_TXCTR_Pos                    _UINT32_(0)                                          /* (UART_TCR) Transmit Counter Register Position */
#define UART_TCR_TXCTR_Msk                    (_UINT32_(0xFFFF) << UART_TCR_TXCTR_Pos)             /* (UART_TCR) Transmit Counter Register Mask */
#define UART_TCR_TXCTR(value)                 (UART_TCR_TXCTR_Msk & (_UINT32_(value) << UART_TCR_TXCTR_Pos)) /* Assigment of value for TXCTR in the UART_TCR register */
#define UART_TCR_Msk                          _UINT32_(0x0000FFFF)                                 /* (UART_TCR) Register Mask  */


/* -------- UART_RNPR : (UART Offset: 0x110) (R/W 32) Receive Next Pointer Register -------- */
#define UART_RNPR_RXNPTR_Pos                  _UINT32_(0)                                          /* (UART_RNPR) Receive Next Pointer Position */
#define UART_RNPR_RXNPTR_Msk                  (_UINT32_(0xFFFFFFFF) << UART_RNPR_RXNPTR_Pos)       /* (UART_RNPR) Receive Next Pointer Mask */
#define UART_RNPR_RXNPTR(value)               (UART_RNPR_RXNPTR_Msk & (_UINT32_(value) << UART_RNPR_RXNPTR_Pos)) /* Assigment of value for RXNPTR in the UART_RNPR register */
#define UART_RNPR_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (UART_RNPR) Register Mask  */


/* -------- UART_RNCR : (UART Offset: 0x114) (R/W 32) Receive Next Counter Register -------- */
#define UART_RNCR_RXNCTR_Pos                  _UINT32_(0)                                          /* (UART_RNCR) Receive Next Counter Position */
#define UART_RNCR_RXNCTR_Msk                  (_UINT32_(0xFFFF) << UART_RNCR_RXNCTR_Pos)           /* (UART_RNCR) Receive Next Counter Mask */
#define UART_RNCR_RXNCTR(value)               (UART_RNCR_RXNCTR_Msk & (_UINT32_(value) << UART_RNCR_RXNCTR_Pos)) /* Assigment of value for RXNCTR in the UART_RNCR register */
#define UART_RNCR_Msk                         _UINT32_(0x0000FFFF)                                 /* (UART_RNCR) Register Mask  */


/* -------- UART_TNPR : (UART Offset: 0x118) (R/W 32) Transmit Next Pointer Register -------- */
#define UART_TNPR_TXNPTR_Pos                  _UINT32_(0)                                          /* (UART_TNPR) Transmit Next Pointer Position */
#define UART_TNPR_TXNPTR_Msk                  (_UINT32_(0xFFFFFFFF) << UART_TNPR_TXNPTR_Pos)       /* (UART_TNPR) Transmit Next Pointer Mask */
#define UART_TNPR_TXNPTR(value)               (UART_TNPR_TXNPTR_Msk & (_UINT32_(value) << UART_TNPR_TXNPTR_Pos)) /* Assigment of value for TXNPTR in the UART_TNPR register */
#define UART_TNPR_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (UART_TNPR) Register Mask  */


/* -------- UART_TNCR : (UART Offset: 0x11C) (R/W 32) Transmit Next Counter Register -------- */
#define UART_TNCR_TXNCTR_Pos                  _UINT32_(0)                                          /* (UART_TNCR) Transmit Counter Next Position */
#define UART_TNCR_TXNCTR_Msk                  (_UINT32_(0xFFFF) << UART_TNCR_TXNCTR_Pos)           /* (UART_TNCR) Transmit Counter Next Mask */
#define UART_TNCR_TXNCTR(value)               (UART_TNCR_TXNCTR_Msk & (_UINT32_(value) << UART_TNCR_TXNCTR_Pos)) /* Assigment of value for TXNCTR in the UART_TNCR register */
#define UART_TNCR_Msk                         _UINT32_(0x0000FFFF)                                 /* (UART_TNCR) Register Mask  */


/* -------- UART_PTCR : (UART Offset: 0x120) ( /W 32) Transfer Control Register -------- */
#define UART_PTCR_RXTEN_Pos                   _UINT32_(0)                                          /* (UART_PTCR) Receiver Transfer Enable Position */
#define UART_PTCR_RXTEN_Msk                   (_UINT32_(0x1) << UART_PTCR_RXTEN_Pos)               /* (UART_PTCR) Receiver Transfer Enable Mask */
#define UART_PTCR_RXTEN(value)                (UART_PTCR_RXTEN_Msk & (_UINT32_(value) << UART_PTCR_RXTEN_Pos)) /* Assigment of value for RXTEN in the UART_PTCR register */
#define UART_PTCR_RXTDIS_Pos                  _UINT32_(1)                                          /* (UART_PTCR) Receiver Transfer Disable Position */
#define UART_PTCR_RXTDIS_Msk                  (_UINT32_(0x1) << UART_PTCR_RXTDIS_Pos)              /* (UART_PTCR) Receiver Transfer Disable Mask */
#define UART_PTCR_RXTDIS(value)               (UART_PTCR_RXTDIS_Msk & (_UINT32_(value) << UART_PTCR_RXTDIS_Pos)) /* Assigment of value for RXTDIS in the UART_PTCR register */
#define UART_PTCR_TXTEN_Pos                   _UINT32_(8)                                          /* (UART_PTCR) Transmitter Transfer Enable Position */
#define UART_PTCR_TXTEN_Msk                   (_UINT32_(0x1) << UART_PTCR_TXTEN_Pos)               /* (UART_PTCR) Transmitter Transfer Enable Mask */
#define UART_PTCR_TXTEN(value)                (UART_PTCR_TXTEN_Msk & (_UINT32_(value) << UART_PTCR_TXTEN_Pos)) /* Assigment of value for TXTEN in the UART_PTCR register */
#define UART_PTCR_TXTDIS_Pos                  _UINT32_(9)                                          /* (UART_PTCR) Transmitter Transfer Disable Position */
#define UART_PTCR_TXTDIS_Msk                  (_UINT32_(0x1) << UART_PTCR_TXTDIS_Pos)              /* (UART_PTCR) Transmitter Transfer Disable Mask */
#define UART_PTCR_TXTDIS(value)               (UART_PTCR_TXTDIS_Msk & (_UINT32_(value) << UART_PTCR_TXTDIS_Pos)) /* Assigment of value for TXTDIS in the UART_PTCR register */
#define UART_PTCR_RXCBEN_Pos                  _UINT32_(16)                                         /* (UART_PTCR) Receiver Circular Buffer Enable Position */
#define UART_PTCR_RXCBEN_Msk                  (_UINT32_(0x1) << UART_PTCR_RXCBEN_Pos)              /* (UART_PTCR) Receiver Circular Buffer Enable Mask */
#define UART_PTCR_RXCBEN(value)               (UART_PTCR_RXCBEN_Msk & (_UINT32_(value) << UART_PTCR_RXCBEN_Pos)) /* Assigment of value for RXCBEN in the UART_PTCR register */
#define UART_PTCR_RXCBDIS_Pos                 _UINT32_(17)                                         /* (UART_PTCR) Receiver Circular Buffer Disable Position */
#define UART_PTCR_RXCBDIS_Msk                 (_UINT32_(0x1) << UART_PTCR_RXCBDIS_Pos)             /* (UART_PTCR) Receiver Circular Buffer Disable Mask */
#define UART_PTCR_RXCBDIS(value)              (UART_PTCR_RXCBDIS_Msk & (_UINT32_(value) << UART_PTCR_RXCBDIS_Pos)) /* Assigment of value for RXCBDIS in the UART_PTCR register */
#define UART_PTCR_TXCBEN_Pos                  _UINT32_(18)                                         /* (UART_PTCR) Transmitter Circular Buffer Enable Position */
#define UART_PTCR_TXCBEN_Msk                  (_UINT32_(0x1) << UART_PTCR_TXCBEN_Pos)              /* (UART_PTCR) Transmitter Circular Buffer Enable Mask */
#define UART_PTCR_TXCBEN(value)               (UART_PTCR_TXCBEN_Msk & (_UINT32_(value) << UART_PTCR_TXCBEN_Pos)) /* Assigment of value for TXCBEN in the UART_PTCR register */
#define UART_PTCR_TXCBDIS_Pos                 _UINT32_(19)                                         /* (UART_PTCR) Transmitter Circular Buffer Disable Position */
#define UART_PTCR_TXCBDIS_Msk                 (_UINT32_(0x1) << UART_PTCR_TXCBDIS_Pos)             /* (UART_PTCR) Transmitter Circular Buffer Disable Mask */
#define UART_PTCR_TXCBDIS(value)              (UART_PTCR_TXCBDIS_Msk & (_UINT32_(value) << UART_PTCR_TXCBDIS_Pos)) /* Assigment of value for TXCBDIS in the UART_PTCR register */
#define UART_PTCR_ERRCLR_Pos                  _UINT32_(24)                                         /* (UART_PTCR) Transfer Bus Error Clear Position */
#define UART_PTCR_ERRCLR_Msk                  (_UINT32_(0x1) << UART_PTCR_ERRCLR_Pos)              /* (UART_PTCR) Transfer Bus Error Clear Mask */
#define UART_PTCR_ERRCLR(value)               (UART_PTCR_ERRCLR_Msk & (_UINT32_(value) << UART_PTCR_ERRCLR_Pos)) /* Assigment of value for ERRCLR in the UART_PTCR register */
#define UART_PTCR_Msk                         _UINT32_(0x010F0303)                                 /* (UART_PTCR) Register Mask  */


/* -------- UART_PTSR : (UART Offset: 0x124) ( R/ 32) Transfer Status Register -------- */
#define UART_PTSR_RXTEN_Pos                   _UINT32_(0)                                          /* (UART_PTSR) Receiver Transfer Enable Position */
#define UART_PTSR_RXTEN_Msk                   (_UINT32_(0x1) << UART_PTSR_RXTEN_Pos)               /* (UART_PTSR) Receiver Transfer Enable Mask */
#define UART_PTSR_RXTEN(value)                (UART_PTSR_RXTEN_Msk & (_UINT32_(value) << UART_PTSR_RXTEN_Pos)) /* Assigment of value for RXTEN in the UART_PTSR register */
#define UART_PTSR_TXTEN_Pos                   _UINT32_(8)                                          /* (UART_PTSR) Transmitter Transfer Enable Position */
#define UART_PTSR_TXTEN_Msk                   (_UINT32_(0x1) << UART_PTSR_TXTEN_Pos)               /* (UART_PTSR) Transmitter Transfer Enable Mask */
#define UART_PTSR_TXTEN(value)                (UART_PTSR_TXTEN_Msk & (_UINT32_(value) << UART_PTSR_TXTEN_Pos)) /* Assigment of value for TXTEN in the UART_PTSR register */
#define UART_PTSR_RXCBEN_Pos                  _UINT32_(16)                                         /* (UART_PTSR) Receiver Circular Buffer Enable Position */
#define UART_PTSR_RXCBEN_Msk                  (_UINT32_(0x1) << UART_PTSR_RXCBEN_Pos)              /* (UART_PTSR) Receiver Circular Buffer Enable Mask */
#define UART_PTSR_RXCBEN(value)               (UART_PTSR_RXCBEN_Msk & (_UINT32_(value) << UART_PTSR_RXCBEN_Pos)) /* Assigment of value for RXCBEN in the UART_PTSR register */
#define UART_PTSR_TXCBEN_Pos                  _UINT32_(18)                                         /* (UART_PTSR) Transmitter Circular Buffer Enable Position */
#define UART_PTSR_TXCBEN_Msk                  (_UINT32_(0x1) << UART_PTSR_TXCBEN_Pos)              /* (UART_PTSR) Transmitter Circular Buffer Enable Mask */
#define UART_PTSR_TXCBEN(value)               (UART_PTSR_TXCBEN_Msk & (_UINT32_(value) << UART_PTSR_TXCBEN_Pos)) /* Assigment of value for TXCBEN in the UART_PTSR register */
#define UART_PTSR_ERR_Pos                     _UINT32_(24)                                         /* (UART_PTSR) Transfer Bus Error Position */
#define UART_PTSR_ERR_Msk                     (_UINT32_(0x1) << UART_PTSR_ERR_Pos)                 /* (UART_PTSR) Transfer Bus Error Mask */
#define UART_PTSR_ERR(value)                  (UART_PTSR_ERR_Msk & (_UINT32_(value) << UART_PTSR_ERR_Pos)) /* Assigment of value for ERR in the UART_PTSR register */
#define UART_PTSR_Msk                         _UINT32_(0x01050101)                                 /* (UART_PTSR) Register Mask  */


/* -------- UART_PWPMR : (UART Offset: 0x128) (R/W 32) Write Protection Mode Register -------- */
#define UART_PWPMR_WPPTREN_Pos                _UINT32_(0)                                          /* (UART_PWPMR) Write Protection Pointer Registers Enable Position */
#define UART_PWPMR_WPPTREN_Msk                (_UINT32_(0x1) << UART_PWPMR_WPPTREN_Pos)            /* (UART_PWPMR) Write Protection Pointer Registers Enable Mask */
#define UART_PWPMR_WPPTREN(value)             (UART_PWPMR_WPPTREN_Msk & (_UINT32_(value) << UART_PWPMR_WPPTREN_Pos)) /* Assigment of value for WPPTREN in the UART_PWPMR register */
#define UART_PWPMR_WPCTREN_Pos                _UINT32_(1)                                          /* (UART_PWPMR) Write Protection Counter Registers Enable Position */
#define UART_PWPMR_WPCTREN_Msk                (_UINT32_(0x1) << UART_PWPMR_WPCTREN_Pos)            /* (UART_PWPMR) Write Protection Counter Registers Enable Mask */
#define UART_PWPMR_WPCTREN(value)             (UART_PWPMR_WPCTREN_Msk & (_UINT32_(value) << UART_PWPMR_WPCTREN_Pos)) /* Assigment of value for WPCTREN in the UART_PWPMR register */
#define UART_PWPMR_WPCREN_Pos                 _UINT32_(2)                                          /* (UART_PWPMR) Write Protection Control Register Enable Position */
#define UART_PWPMR_WPCREN_Msk                 (_UINT32_(0x1) << UART_PWPMR_WPCREN_Pos)             /* (UART_PWPMR) Write Protection Control Register Enable Mask */
#define UART_PWPMR_WPCREN(value)              (UART_PWPMR_WPCREN_Msk & (_UINT32_(value) << UART_PWPMR_WPCREN_Pos)) /* Assigment of value for WPCREN in the UART_PWPMR register */
#define UART_PWPMR_WPKEY_Pos                  _UINT32_(8)                                          /* (UART_PWPMR) Write Protection Key Position */
#define UART_PWPMR_WPKEY_Msk                  (_UINT32_(0xFFFFFF) << UART_PWPMR_WPKEY_Pos)         /* (UART_PWPMR) Write Protection Key Mask */
#define UART_PWPMR_WPKEY(value)               (UART_PWPMR_WPKEY_Msk & (_UINT32_(value) << UART_PWPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the UART_PWPMR register */
#define   UART_PWPMR_WPKEY_PASSWD_Val         _UINT32_(0x504443)                                   /* (UART_PWPMR) Writing any other value in this field aborts the write operation. Always reads as 0.  */
#define UART_PWPMR_WPKEY_PASSWD               (UART_PWPMR_WPKEY_PASSWD_Val << UART_PWPMR_WPKEY_Pos) /* (UART_PWPMR) Writing any other value in this field aborts the write operation. Always reads as 0. Position  */
#define UART_PWPMR_Msk                        _UINT32_(0xFFFFFF07)                                 /* (UART_PWPMR) Register Mask  */


/** \brief UART register offsets definitions */
#define UART_CR_REG_OFST               _UINT32_(0x00)      /* (UART_CR) Control Register Offset */
#define UART_MR_REG_OFST               _UINT32_(0x04)      /* (UART_MR) Mode Register Offset */
#define UART_IER_REG_OFST              _UINT32_(0x08)      /* (UART_IER) Interrupt Enable Register Offset */
#define UART_IDR_REG_OFST              _UINT32_(0x0C)      /* (UART_IDR) Interrupt Disable Register Offset */
#define UART_IMR_REG_OFST              _UINT32_(0x10)      /* (UART_IMR) Interrupt Mask Register Offset */
#define UART_SR_REG_OFST               _UINT32_(0x14)      /* (UART_SR) Interrupt Status Register Offset */
#define UART_RHR_REG_OFST              _UINT32_(0x18)      /* (UART_RHR) Receive Holding Register Offset */
#define UART_THR_REG_OFST              _UINT32_(0x1C)      /* (UART_THR) Transmit Holding Register Offset */
#define UART_BRGR_REG_OFST             _UINT32_(0x20)      /* (UART_BRGR) Baud Rate Generator Register Offset */
#define UART_CMPR_REG_OFST             _UINT32_(0x24)      /* (UART_CMPR) Comparison Register Offset */
#define UART_RTOR_REG_OFST             _UINT32_(0x28)      /* (UART_RTOR) Receiver Time-out Register Offset */
#define UART_CSR_REG_OFST              _UINT32_(0x2C)      /* (UART_CSR) Current Status Register Offset */
#define UART_WPMR_REG_OFST             _UINT32_(0xE4)      /* (UART_WPMR) Write Protection Mode Register Offset */
#define UART_RPR_REG_OFST              _UINT32_(0x100)     /* (UART_RPR) Receive Pointer Register Offset */
#define UART_RCR_REG_OFST              _UINT32_(0x104)     /* (UART_RCR) Receive Counter Register Offset */
#define UART_TPR_REG_OFST              _UINT32_(0x108)     /* (UART_TPR) Transmit Pointer Register Offset */
#define UART_TCR_REG_OFST              _UINT32_(0x10C)     /* (UART_TCR) Transmit Counter Register Offset */
#define UART_RNPR_REG_OFST             _UINT32_(0x110)     /* (UART_RNPR) Receive Next Pointer Register Offset */
#define UART_RNCR_REG_OFST             _UINT32_(0x114)     /* (UART_RNCR) Receive Next Counter Register Offset */
#define UART_TNPR_REG_OFST             _UINT32_(0x118)     /* (UART_TNPR) Transmit Next Pointer Register Offset */
#define UART_TNCR_REG_OFST             _UINT32_(0x11C)     /* (UART_TNCR) Transmit Next Counter Register Offset */
#define UART_PTCR_REG_OFST             _UINT32_(0x120)     /* (UART_PTCR) Transfer Control Register Offset */
#define UART_PTSR_REG_OFST             _UINT32_(0x124)     /* (UART_PTSR) Transfer Status Register Offset */
#define UART_PWPMR_REG_OFST            _UINT32_(0x128)     /* (UART_PWPMR) Write Protection Mode Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief UART register API structure */
typedef struct
{
  __O   uint32_t                       UART_CR;            /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       UART_MR;            /**< Offset: 0x04 (R/W  32) Mode Register */
  __O   uint32_t                       UART_IER;           /**< Offset: 0x08 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       UART_IDR;           /**< Offset: 0x0C ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       UART_IMR;           /**< Offset: 0x10 (R/   32) Interrupt Mask Register */
  __I   uint32_t                       UART_SR;            /**< Offset: 0x14 (R/   32) Interrupt Status Register */
  __I   uint32_t                       UART_RHR;           /**< Offset: 0x18 (R/   32) Receive Holding Register */
  __O   uint32_t                       UART_THR;           /**< Offset: 0x1C ( /W  32) Transmit Holding Register */
  __IO  uint32_t                       UART_BRGR;          /**< Offset: 0x20 (R/W  32) Baud Rate Generator Register */
  __IO  uint32_t                       UART_CMPR;          /**< Offset: 0x24 (R/W  32) Comparison Register */
  __IO  uint32_t                       UART_RTOR;          /**< Offset: 0x28 (R/W  32) Receiver Time-out Register */
  __I   uint32_t                       UART_CSR;           /**< Offset: 0x2C (R/   32) Current Status Register */
  __I   uint8_t                        Reserved1[0xB4];
  __IO  uint32_t                       UART_WPMR;          /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint8_t                        Reserved2[0x18];
  __IO  uint32_t                       UART_RPR;           /**< Offset: 0x100 (R/W  32) Receive Pointer Register */
  __IO  uint32_t                       UART_RCR;           /**< Offset: 0x104 (R/W  32) Receive Counter Register */
  __IO  uint32_t                       UART_TPR;           /**< Offset: 0x108 (R/W  32) Transmit Pointer Register */
  __IO  uint32_t                       UART_TCR;           /**< Offset: 0x10C (R/W  32) Transmit Counter Register */
  __IO  uint32_t                       UART_RNPR;          /**< Offset: 0x110 (R/W  32) Receive Next Pointer Register */
  __IO  uint32_t                       UART_RNCR;          /**< Offset: 0x114 (R/W  32) Receive Next Counter Register */
  __IO  uint32_t                       UART_TNPR;          /**< Offset: 0x118 (R/W  32) Transmit Next Pointer Register */
  __IO  uint32_t                       UART_TNCR;          /**< Offset: 0x11C (R/W  32) Transmit Next Counter Register */
  __O   uint32_t                       UART_PTCR;          /**< Offset: 0x120 ( /W  32) Transfer Control Register */
  __I   uint32_t                       UART_PTSR;          /**< Offset: 0x124 (R/   32) Transfer Status Register */
  __IO  uint32_t                       UART_PWPMR;         /**< Offset: 0x128 (R/W  32) Write Protection Mode Register */
} uart_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CXMTSH_UART_COMPONENT_H_ */
