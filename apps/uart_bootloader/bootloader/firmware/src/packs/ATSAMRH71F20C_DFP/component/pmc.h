/*
 * Component description for PMC
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
#ifndef _SAMRH71_PMC_COMPONENT_H_
#define _SAMRH71_PMC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PMC                                          */
/* ************************************************************************** */

/* -------- PMC_SCER : (PMC Offset: 0x00) ( /W 32) System Clock Enable Register -------- */
#define PMC_SCER_PCK0_Pos                     _UINT32_(8)                                          /* (PMC_SCER) Programmable Clock 0 Output Enable Position */
#define PMC_SCER_PCK0_Msk                     (_UINT32_(0x1) << PMC_SCER_PCK0_Pos)                 /* (PMC_SCER) Programmable Clock 0 Output Enable Mask */
#define PMC_SCER_PCK0(value)                  (PMC_SCER_PCK0_Msk & (_UINT32_(value) << PMC_SCER_PCK0_Pos)) /* Assigment of value for PCK0 in the PMC_SCER register */
#define PMC_SCER_PCK1_Pos                     _UINT32_(9)                                          /* (PMC_SCER) Programmable Clock 1 Output Enable Position */
#define PMC_SCER_PCK1_Msk                     (_UINT32_(0x1) << PMC_SCER_PCK1_Pos)                 /* (PMC_SCER) Programmable Clock 1 Output Enable Mask */
#define PMC_SCER_PCK1(value)                  (PMC_SCER_PCK1_Msk & (_UINT32_(value) << PMC_SCER_PCK1_Pos)) /* Assigment of value for PCK1 in the PMC_SCER register */
#define PMC_SCER_PCK2_Pos                     _UINT32_(10)                                         /* (PMC_SCER) Programmable Clock 2 Output Enable Position */
#define PMC_SCER_PCK2_Msk                     (_UINT32_(0x1) << PMC_SCER_PCK2_Pos)                 /* (PMC_SCER) Programmable Clock 2 Output Enable Mask */
#define PMC_SCER_PCK2(value)                  (PMC_SCER_PCK2_Msk & (_UINT32_(value) << PMC_SCER_PCK2_Pos)) /* Assigment of value for PCK2 in the PMC_SCER register */
#define PMC_SCER_PCK3_Pos                     _UINT32_(11)                                         /* (PMC_SCER) Programmable Clock 3 Output Enable Position */
#define PMC_SCER_PCK3_Msk                     (_UINT32_(0x1) << PMC_SCER_PCK3_Pos)                 /* (PMC_SCER) Programmable Clock 3 Output Enable Mask */
#define PMC_SCER_PCK3(value)                  (PMC_SCER_PCK3_Msk & (_UINT32_(value) << PMC_SCER_PCK3_Pos)) /* Assigment of value for PCK3 in the PMC_SCER register */
#define PMC_SCER_Msk                          _UINT32_(0x00000F00)                                 /* (PMC_SCER) Register Mask  */

#define PMC_SCER_PCK_Pos                      _UINT32_(8)                                          /* (PMC_SCER Position) Programmable Clock 3 Output Enable */
#define PMC_SCER_PCK_Msk                      (_UINT32_(0xF) << PMC_SCER_PCK_Pos)                  /* (PMC_SCER Mask) PCK */
#define PMC_SCER_PCK(value)                   (PMC_SCER_PCK_Msk & (_UINT32_(value) << PMC_SCER_PCK_Pos)) 

/* -------- PMC_SCDR : (PMC Offset: 0x04) ( /W 32) System Clock Disable Register -------- */
#define PMC_SCDR_PCK0_Pos                     _UINT32_(8)                                          /* (PMC_SCDR) Programmable Clock 0 Output Disable Position */
#define PMC_SCDR_PCK0_Msk                     (_UINT32_(0x1) << PMC_SCDR_PCK0_Pos)                 /* (PMC_SCDR) Programmable Clock 0 Output Disable Mask */
#define PMC_SCDR_PCK0(value)                  (PMC_SCDR_PCK0_Msk & (_UINT32_(value) << PMC_SCDR_PCK0_Pos)) /* Assigment of value for PCK0 in the PMC_SCDR register */
#define PMC_SCDR_PCK1_Pos                     _UINT32_(9)                                          /* (PMC_SCDR) Programmable Clock 1 Output Disable Position */
#define PMC_SCDR_PCK1_Msk                     (_UINT32_(0x1) << PMC_SCDR_PCK1_Pos)                 /* (PMC_SCDR) Programmable Clock 1 Output Disable Mask */
#define PMC_SCDR_PCK1(value)                  (PMC_SCDR_PCK1_Msk & (_UINT32_(value) << PMC_SCDR_PCK1_Pos)) /* Assigment of value for PCK1 in the PMC_SCDR register */
#define PMC_SCDR_PCK2_Pos                     _UINT32_(10)                                         /* (PMC_SCDR) Programmable Clock 2 Output Disable Position */
#define PMC_SCDR_PCK2_Msk                     (_UINT32_(0x1) << PMC_SCDR_PCK2_Pos)                 /* (PMC_SCDR) Programmable Clock 2 Output Disable Mask */
#define PMC_SCDR_PCK2(value)                  (PMC_SCDR_PCK2_Msk & (_UINT32_(value) << PMC_SCDR_PCK2_Pos)) /* Assigment of value for PCK2 in the PMC_SCDR register */
#define PMC_SCDR_PCK3_Pos                     _UINT32_(11)                                         /* (PMC_SCDR) Programmable Clock 3 Output Disable Position */
#define PMC_SCDR_PCK3_Msk                     (_UINT32_(0x1) << PMC_SCDR_PCK3_Pos)                 /* (PMC_SCDR) Programmable Clock 3 Output Disable Mask */
#define PMC_SCDR_PCK3(value)                  (PMC_SCDR_PCK3_Msk & (_UINT32_(value) << PMC_SCDR_PCK3_Pos)) /* Assigment of value for PCK3 in the PMC_SCDR register */
#define PMC_SCDR_Msk                          _UINT32_(0x00000F00)                                 /* (PMC_SCDR) Register Mask  */

#define PMC_SCDR_PCK_Pos                      _UINT32_(8)                                          /* (PMC_SCDR Position) Programmable Clock 3 Output Disable */
#define PMC_SCDR_PCK_Msk                      (_UINT32_(0xF) << PMC_SCDR_PCK_Pos)                  /* (PMC_SCDR Mask) PCK */
#define PMC_SCDR_PCK(value)                   (PMC_SCDR_PCK_Msk & (_UINT32_(value) << PMC_SCDR_PCK_Pos)) 

/* -------- PMC_SCSR : (PMC Offset: 0x08) ( R/ 32) System Clock Status Register -------- */
#define PMC_SCSR_PCK0_Pos                     _UINT32_(8)                                          /* (PMC_SCSR) Programmable Clock 0 Output Status Position */
#define PMC_SCSR_PCK0_Msk                     (_UINT32_(0x1) << PMC_SCSR_PCK0_Pos)                 /* (PMC_SCSR) Programmable Clock 0 Output Status Mask */
#define PMC_SCSR_PCK0(value)                  (PMC_SCSR_PCK0_Msk & (_UINT32_(value) << PMC_SCSR_PCK0_Pos)) /* Assigment of value for PCK0 in the PMC_SCSR register */
#define PMC_SCSR_PCK1_Pos                     _UINT32_(9)                                          /* (PMC_SCSR) Programmable Clock 1 Output Status Position */
#define PMC_SCSR_PCK1_Msk                     (_UINT32_(0x1) << PMC_SCSR_PCK1_Pos)                 /* (PMC_SCSR) Programmable Clock 1 Output Status Mask */
#define PMC_SCSR_PCK1(value)                  (PMC_SCSR_PCK1_Msk & (_UINT32_(value) << PMC_SCSR_PCK1_Pos)) /* Assigment of value for PCK1 in the PMC_SCSR register */
#define PMC_SCSR_PCK2_Pos                     _UINT32_(10)                                         /* (PMC_SCSR) Programmable Clock 2 Output Status Position */
#define PMC_SCSR_PCK2_Msk                     (_UINT32_(0x1) << PMC_SCSR_PCK2_Pos)                 /* (PMC_SCSR) Programmable Clock 2 Output Status Mask */
#define PMC_SCSR_PCK2(value)                  (PMC_SCSR_PCK2_Msk & (_UINT32_(value) << PMC_SCSR_PCK2_Pos)) /* Assigment of value for PCK2 in the PMC_SCSR register */
#define PMC_SCSR_PCK3_Pos                     _UINT32_(11)                                         /* (PMC_SCSR) Programmable Clock 3 Output Status Position */
#define PMC_SCSR_PCK3_Msk                     (_UINT32_(0x1) << PMC_SCSR_PCK3_Pos)                 /* (PMC_SCSR) Programmable Clock 3 Output Status Mask */
#define PMC_SCSR_PCK3(value)                  (PMC_SCSR_PCK3_Msk & (_UINT32_(value) << PMC_SCSR_PCK3_Pos)) /* Assigment of value for PCK3 in the PMC_SCSR register */
#define PMC_SCSR_Msk                          _UINT32_(0x00000F00)                                 /* (PMC_SCSR) Register Mask  */

#define PMC_SCSR_PCK_Pos                      _UINT32_(8)                                          /* (PMC_SCSR Position) Programmable Clock 3 Output Status */
#define PMC_SCSR_PCK_Msk                      (_UINT32_(0xF) << PMC_SCSR_PCK_Pos)                  /* (PMC_SCSR Mask) PCK */
#define PMC_SCSR_PCK(value)                   (PMC_SCSR_PCK_Msk & (_UINT32_(value) << PMC_SCSR_PCK_Pos)) 

/* -------- CKGR_MOR : (PMC Offset: 0x20) (R/W 32) Main Oscillator Register -------- */
#define CKGR_MOR_MOSCXTEN_Pos                 _UINT32_(0)                                          /* (CKGR_MOR) Main Crystal Oscillator Enable Position */
#define CKGR_MOR_MOSCXTEN_Msk                 (_UINT32_(0x1) << CKGR_MOR_MOSCXTEN_Pos)             /* (CKGR_MOR) Main Crystal Oscillator Enable Mask */
#define CKGR_MOR_MOSCXTEN(value)              (CKGR_MOR_MOSCXTEN_Msk & (_UINT32_(value) << CKGR_MOR_MOSCXTEN_Pos)) /* Assigment of value for MOSCXTEN in the CKGR_MOR register */
#define CKGR_MOR_MOSCXTBY_Pos                 _UINT32_(1)                                          /* (CKGR_MOR) Main Crystal Oscillator Bypass Position */
#define CKGR_MOR_MOSCXTBY_Msk                 (_UINT32_(0x1) << CKGR_MOR_MOSCXTBY_Pos)             /* (CKGR_MOR) Main Crystal Oscillator Bypass Mask */
#define CKGR_MOR_MOSCXTBY(value)              (CKGR_MOR_MOSCXTBY_Msk & (_UINT32_(value) << CKGR_MOR_MOSCXTBY_Pos)) /* Assigment of value for MOSCXTBY in the CKGR_MOR register */
#define CKGR_MOR_MOSCRCEN_Pos                 _UINT32_(3)                                          /* (CKGR_MOR) Main RC Oscillator Enable Position */
#define CKGR_MOR_MOSCRCEN_Msk                 (_UINT32_(0x1) << CKGR_MOR_MOSCRCEN_Pos)             /* (CKGR_MOR) Main RC Oscillator Enable Mask */
#define CKGR_MOR_MOSCRCEN(value)              (CKGR_MOR_MOSCRCEN_Msk & (_UINT32_(value) << CKGR_MOR_MOSCRCEN_Pos)) /* Assigment of value for MOSCRCEN in the CKGR_MOR register */
#define CKGR_MOR_MOSCRCF_Pos                  _UINT32_(4)                                          /* (CKGR_MOR) Main RC Oscillator Frequency Selection Position */
#define CKGR_MOR_MOSCRCF_Msk                  (_UINT32_(0x7) << CKGR_MOR_MOSCRCF_Pos)              /* (CKGR_MOR) Main RC Oscillator Frequency Selection Mask */
#define CKGR_MOR_MOSCRCF(value)               (CKGR_MOR_MOSCRCF_Msk & (_UINT32_(value) << CKGR_MOR_MOSCRCF_Pos)) /* Assigment of value for MOSCRCF in the CKGR_MOR register */
#define   CKGR_MOR_MOSCRCF_4_MHZ_Val          _UINT32_(0x0)                                        /* (CKGR_MOR) The RC oscillator frequency is at 4 MHz  */
#define   CKGR_MOR_MOSCRCF_8_MHZ_Val          _UINT32_(0x1)                                        /* (CKGR_MOR) The RC oscillator frequency is at 8 MHz  */
#define   CKGR_MOR_MOSCRCF_10_MHZ_Val         _UINT32_(0x2)                                        /* (CKGR_MOR) The RC oscillator frequency is at 10 MHz  */
#define   CKGR_MOR_MOSCRCF_12_MHZ_Val         _UINT32_(0x3)                                        /* (CKGR_MOR) The RC oscillator frequency is at 12 MHz  */
#define CKGR_MOR_MOSCRCF_4_MHZ                (CKGR_MOR_MOSCRCF_4_MHZ_Val << CKGR_MOR_MOSCRCF_Pos) /* (CKGR_MOR) The RC oscillator frequency is at 4 MHz Position  */
#define CKGR_MOR_MOSCRCF_8_MHZ                (CKGR_MOR_MOSCRCF_8_MHZ_Val << CKGR_MOR_MOSCRCF_Pos) /* (CKGR_MOR) The RC oscillator frequency is at 8 MHz Position  */
#define CKGR_MOR_MOSCRCF_10_MHZ               (CKGR_MOR_MOSCRCF_10_MHZ_Val << CKGR_MOR_MOSCRCF_Pos) /* (CKGR_MOR) The RC oscillator frequency is at 10 MHz Position  */
#define CKGR_MOR_MOSCRCF_12_MHZ               (CKGR_MOR_MOSCRCF_12_MHZ_Val << CKGR_MOR_MOSCRCF_Pos) /* (CKGR_MOR) The RC oscillator frequency is at 12 MHz Position  */
#define CKGR_MOR_MOSCXTST_Pos                 _UINT32_(8)                                          /* (CKGR_MOR) Main Crystal Oscillator Startup Time Position */
#define CKGR_MOR_MOSCXTST_Msk                 (_UINT32_(0xFF) << CKGR_MOR_MOSCXTST_Pos)            /* (CKGR_MOR) Main Crystal Oscillator Startup Time Mask */
#define CKGR_MOR_MOSCXTST(value)              (CKGR_MOR_MOSCXTST_Msk & (_UINT32_(value) << CKGR_MOR_MOSCXTST_Pos)) /* Assigment of value for MOSCXTST in the CKGR_MOR register */
#define CKGR_MOR_KEY_Pos                      _UINT32_(16)                                         /* (CKGR_MOR) Write Access Password Position */
#define CKGR_MOR_KEY_Msk                      (_UINT32_(0xFF) << CKGR_MOR_KEY_Pos)                 /* (CKGR_MOR) Write Access Password Mask */
#define CKGR_MOR_KEY(value)                   (CKGR_MOR_KEY_Msk & (_UINT32_(value) << CKGR_MOR_KEY_Pos)) /* Assigment of value for KEY in the CKGR_MOR register */
#define   CKGR_MOR_KEY_PASSWD_Val             _UINT32_(0x37)                                       /* (CKGR_MOR) Writing any other value in this field aborts the write operation. Always reads as 0.  */
#define CKGR_MOR_KEY_PASSWD                   (CKGR_MOR_KEY_PASSWD_Val << CKGR_MOR_KEY_Pos)        /* (CKGR_MOR) Writing any other value in this field aborts the write operation. Always reads as 0. Position  */
#define CKGR_MOR_MOSCSEL_Pos                  _UINT32_(24)                                         /* (CKGR_MOR) Main Clock Oscillator Selection Position */
#define CKGR_MOR_MOSCSEL_Msk                  (_UINT32_(0x1) << CKGR_MOR_MOSCSEL_Pos)              /* (CKGR_MOR) Main Clock Oscillator Selection Mask */
#define CKGR_MOR_MOSCSEL(value)               (CKGR_MOR_MOSCSEL_Msk & (_UINT32_(value) << CKGR_MOR_MOSCSEL_Pos)) /* Assigment of value for MOSCSEL in the CKGR_MOR register */
#define CKGR_MOR_CFDEN_Pos                    _UINT32_(25)                                         /* (CKGR_MOR) Clock Failure Detector Enable Position */
#define CKGR_MOR_CFDEN_Msk                    (_UINT32_(0x1) << CKGR_MOR_CFDEN_Pos)                /* (CKGR_MOR) Clock Failure Detector Enable Mask */
#define CKGR_MOR_CFDEN(value)                 (CKGR_MOR_CFDEN_Msk & (_UINT32_(value) << CKGR_MOR_CFDEN_Pos)) /* Assigment of value for CFDEN in the CKGR_MOR register */
#define CKGR_MOR_EXT32KFME_Pos                _UINT32_(26)                                         /* (CKGR_MOR) 32.768 kHz Crystal Oscillator Frequency Monitoring Enable Position */
#define CKGR_MOR_EXT32KFME_Msk                (_UINT32_(0x1) << CKGR_MOR_EXT32KFME_Pos)            /* (CKGR_MOR) 32.768 kHz Crystal Oscillator Frequency Monitoring Enable Mask */
#define CKGR_MOR_EXT32KFME(value)             (CKGR_MOR_EXT32KFME_Msk & (_UINT32_(value) << CKGR_MOR_EXT32KFME_Pos)) /* Assigment of value for EXT32KFME in the CKGR_MOR register */
#define CKGR_MOR_BCPURST_Pos                  _UINT32_(27)                                         /* (CKGR_MOR) Bad CPU Clock Reset Enable Position */
#define CKGR_MOR_BCPURST_Msk                  (_UINT32_(0x1) << CKGR_MOR_BCPURST_Pos)              /* (CKGR_MOR) Bad CPU Clock Reset Enable Mask */
#define CKGR_MOR_BCPURST(value)               (CKGR_MOR_BCPURST_Msk & (_UINT32_(value) << CKGR_MOR_BCPURST_Pos)) /* Assigment of value for BCPURST in the CKGR_MOR register */
#define CKGR_MOR_BCPUNMIC_Pos                 _UINT32_(28)                                         /* (CKGR_MOR) Bad CPU Clock Interrupt to NMIC Enable Position */
#define CKGR_MOR_BCPUNMIC_Msk                 (_UINT32_(0x1) << CKGR_MOR_BCPUNMIC_Pos)             /* (CKGR_MOR) Bad CPU Clock Interrupt to NMIC Enable Mask */
#define CKGR_MOR_BCPUNMIC(value)              (CKGR_MOR_BCPUNMIC_Msk & (_UINT32_(value) << CKGR_MOR_BCPUNMIC_Pos)) /* Assigment of value for BCPUNMIC in the CKGR_MOR register */
#define CKGR_MOR_Msk                          _UINT32_(0x1FFFFF7B)                                 /* (CKGR_MOR) Register Mask  */


/* -------- CKGR_MCFR : (PMC Offset: 0x24) (R/W 32) Main Clock Frequency Register -------- */
#define CKGR_MCFR_MAINF_Pos                   _UINT32_(0)                                          /* (CKGR_MCFR) Main Clock Frequency Position */
#define CKGR_MCFR_MAINF_Msk                   (_UINT32_(0xFFFF) << CKGR_MCFR_MAINF_Pos)            /* (CKGR_MCFR) Main Clock Frequency Mask */
#define CKGR_MCFR_MAINF(value)                (CKGR_MCFR_MAINF_Msk & (_UINT32_(value) << CKGR_MCFR_MAINF_Pos)) /* Assigment of value for MAINF in the CKGR_MCFR register */
#define CKGR_MCFR_MAINFRDY_Pos                _UINT32_(16)                                         /* (CKGR_MCFR) Main Clock Frequency Measure Ready Position */
#define CKGR_MCFR_MAINFRDY_Msk                (_UINT32_(0x1) << CKGR_MCFR_MAINFRDY_Pos)            /* (CKGR_MCFR) Main Clock Frequency Measure Ready Mask */
#define CKGR_MCFR_MAINFRDY(value)             (CKGR_MCFR_MAINFRDY_Msk & (_UINT32_(value) << CKGR_MCFR_MAINFRDY_Pos)) /* Assigment of value for MAINFRDY in the CKGR_MCFR register */
#define CKGR_MCFR_RCMEAS_Pos                  _UINT32_(20)                                         /* (CKGR_MCFR) RC Oscillator Frequency Measure (write-only) Position */
#define CKGR_MCFR_RCMEAS_Msk                  (_UINT32_(0x1) << CKGR_MCFR_RCMEAS_Pos)              /* (CKGR_MCFR) RC Oscillator Frequency Measure (write-only) Mask */
#define CKGR_MCFR_RCMEAS(value)               (CKGR_MCFR_RCMEAS_Msk & (_UINT32_(value) << CKGR_MCFR_RCMEAS_Pos)) /* Assigment of value for RCMEAS in the CKGR_MCFR register */
#define CKGR_MCFR_CCSS_Pos                    _UINT32_(24)                                         /* (CKGR_MCFR) Counter Clock Source Selection Position */
#define CKGR_MCFR_CCSS_Msk                    (_UINT32_(0x1) << CKGR_MCFR_CCSS_Pos)                /* (CKGR_MCFR) Counter Clock Source Selection Mask */
#define CKGR_MCFR_CCSS(value)                 (CKGR_MCFR_CCSS_Msk & (_UINT32_(value) << CKGR_MCFR_CCSS_Pos)) /* Assigment of value for CCSS in the CKGR_MCFR register */
#define CKGR_MCFR_Msk                         _UINT32_(0x0111FFFF)                                 /* (CKGR_MCFR) Register Mask  */


/* -------- CKGR_PLLAR : (PMC Offset: 0x28) (R/W 32) PLLA Register -------- */
#define CKGR_PLLAR_DIVA_Pos                   _UINT32_(0)                                          /* (CKGR_PLLAR) PLLA Front End Divider Position */
#define CKGR_PLLAR_DIVA_Msk                   (_UINT32_(0xFF) << CKGR_PLLAR_DIVA_Pos)              /* (CKGR_PLLAR) PLLA Front End Divider Mask */
#define CKGR_PLLAR_DIVA(value)                (CKGR_PLLAR_DIVA_Msk & (_UINT32_(value) << CKGR_PLLAR_DIVA_Pos)) /* Assigment of value for DIVA in the CKGR_PLLAR register */
#define   CKGR_PLLAR_DIVA_0_Val               _UINT32_(0x0)                                        /* (CKGR_PLLAR) PLLA is disabled.  */
#define   CKGR_PLLAR_DIVA_BYPASS_Val          _UINT32_(0x1)                                        /* (CKGR_PLLAR) Divider is bypassed (divide by 1) and PLLA is enabled.  */
#define CKGR_PLLAR_DIVA_0                     (CKGR_PLLAR_DIVA_0_Val << CKGR_PLLAR_DIVA_Pos)       /* (CKGR_PLLAR) PLLA is disabled. Position  */
#define CKGR_PLLAR_DIVA_BYPASS                (CKGR_PLLAR_DIVA_BYPASS_Val << CKGR_PLLAR_DIVA_Pos)  /* (CKGR_PLLAR) Divider is bypassed (divide by 1) and PLLA is enabled. Position  */
#define CKGR_PLLAR_PLLACOUNT_Pos              _UINT32_(8)                                          /* (CKGR_PLLAR) PLLA Counter Position */
#define CKGR_PLLAR_PLLACOUNT_Msk              (_UINT32_(0x3F) << CKGR_PLLAR_PLLACOUNT_Pos)         /* (CKGR_PLLAR) PLLA Counter Mask */
#define CKGR_PLLAR_PLLACOUNT(value)           (CKGR_PLLAR_PLLACOUNT_Msk & (_UINT32_(value) << CKGR_PLLAR_PLLACOUNT_Pos)) /* Assigment of value for PLLACOUNT in the CKGR_PLLAR register */
#define CKGR_PLLAR_FREQ_VCO_Pos               _UINT32_(14)                                         /* (CKGR_PLLAR) VCO Frequency Configuratio Position */
#define CKGR_PLLAR_FREQ_VCO_Msk               (_UINT32_(0x3) << CKGR_PLLAR_FREQ_VCO_Pos)           /* (CKGR_PLLAR) VCO Frequency Configuratio Mask */
#define CKGR_PLLAR_FREQ_VCO(value)            (CKGR_PLLAR_FREQ_VCO_Msk & (_UINT32_(value) << CKGR_PLLAR_FREQ_VCO_Pos)) /* Assigment of value for FREQ_VCO in the CKGR_PLLAR register */
#define   CKGR_PLLAR_FREQ_VCO_VCO0_Val        _UINT32_(0x0)                                        /* (CKGR_PLLAR) Frequency range: 40-80 MHz  */
#define   CKGR_PLLAR_FREQ_VCO_VCO1_Val        _UINT32_(0x1)                                        /* (CKGR_PLLAR) Frequency range: 70-150 MHz  */
#define   CKGR_PLLAR_FREQ_VCO_VCO2_Val        _UINT32_(0x2)                                        /* (CKGR_PLLAR) Frequency range: 125-275 MHz  */
#define   CKGR_PLLAR_FREQ_VCO_VCO3_Val        _UINT32_(0x3)                                        /* (CKGR_PLLAR) Frequency range: 250-450 MHz  */
#define CKGR_PLLAR_FREQ_VCO_VCO0              (CKGR_PLLAR_FREQ_VCO_VCO0_Val << CKGR_PLLAR_FREQ_VCO_Pos) /* (CKGR_PLLAR) Frequency range: 40-80 MHz Position  */
#define CKGR_PLLAR_FREQ_VCO_VCO1              (CKGR_PLLAR_FREQ_VCO_VCO1_Val << CKGR_PLLAR_FREQ_VCO_Pos) /* (CKGR_PLLAR) Frequency range: 70-150 MHz Position  */
#define CKGR_PLLAR_FREQ_VCO_VCO2              (CKGR_PLLAR_FREQ_VCO_VCO2_Val << CKGR_PLLAR_FREQ_VCO_Pos) /* (CKGR_PLLAR) Frequency range: 125-275 MHz Position  */
#define CKGR_PLLAR_FREQ_VCO_VCO3              (CKGR_PLLAR_FREQ_VCO_VCO3_Val << CKGR_PLLAR_FREQ_VCO_Pos) /* (CKGR_PLLAR) Frequency range: 250-450 MHz Position  */
#define CKGR_PLLAR_MULA_Pos                   _UINT32_(16)                                         /* (CKGR_PLLAR) PLLA Multiplier Position */
#define CKGR_PLLAR_MULA_Msk                   (_UINT32_(0x7FF) << CKGR_PLLAR_MULA_Pos)             /* (CKGR_PLLAR) PLLA Multiplier Mask */
#define CKGR_PLLAR_MULA(value)                (CKGR_PLLAR_MULA_Msk & (_UINT32_(value) << CKGR_PLLAR_MULA_Pos)) /* Assigment of value for MULA in the CKGR_PLLAR register */
#define CKGR_PLLAR_ONE_Pos                    _UINT32_(29)                                         /* (CKGR_PLLAR) Must Be Set to 1 Position */
#define CKGR_PLLAR_ONE_Msk                    (_UINT32_(0x1) << CKGR_PLLAR_ONE_Pos)                /* (CKGR_PLLAR) Must Be Set to 1 Mask */
#define CKGR_PLLAR_ONE(value)                 (CKGR_PLLAR_ONE_Msk & (_UINT32_(value) << CKGR_PLLAR_ONE_Pos)) /* Assigment of value for ONE in the CKGR_PLLAR register */
#define CKGR_PLLAR_Msk                        _UINT32_(0x27FFFFFF)                                 /* (CKGR_PLLAR) Register Mask  */


/* -------- CKGR_PLLBR : (PMC Offset: 0x2C) (R/W 32) PLLB Register -------- */
#define CKGR_PLLBR_DIVB_Pos                   _UINT32_(0)                                          /* (CKGR_PLLBR) PLLB Front End Divider Position */
#define CKGR_PLLBR_DIVB_Msk                   (_UINT32_(0xFF) << CKGR_PLLBR_DIVB_Pos)              /* (CKGR_PLLBR) PLLB Front End Divider Mask */
#define CKGR_PLLBR_DIVB(value)                (CKGR_PLLBR_DIVB_Msk & (_UINT32_(value) << CKGR_PLLBR_DIVB_Pos)) /* Assigment of value for DIVB in the CKGR_PLLBR register */
#define   CKGR_PLLBR_DIVB_0_Val               _UINT32_(0x0)                                        /* (CKGR_PLLBR) PLLBis disabled.  */
#define   CKGR_PLLBR_DIVB_BYPASS_Val          _UINT32_(0x1)                                        /* (CKGR_PLLBR) Divider is bypassed (divide by 1) and PLLB is enabled.  */
#define CKGR_PLLBR_DIVB_0                     (CKGR_PLLBR_DIVB_0_Val << CKGR_PLLBR_DIVB_Pos)       /* (CKGR_PLLBR) PLLBis disabled. Position  */
#define CKGR_PLLBR_DIVB_BYPASS                (CKGR_PLLBR_DIVB_BYPASS_Val << CKGR_PLLBR_DIVB_Pos)  /* (CKGR_PLLBR) Divider is bypassed (divide by 1) and PLLB is enabled. Position  */
#define CKGR_PLLBR_PLLBCOUNT_Pos              _UINT32_(8)                                          /* (CKGR_PLLBR) PLLB Counter Position */
#define CKGR_PLLBR_PLLBCOUNT_Msk              (_UINT32_(0x3F) << CKGR_PLLBR_PLLBCOUNT_Pos)         /* (CKGR_PLLBR) PLLB Counter Mask */
#define CKGR_PLLBR_PLLBCOUNT(value)           (CKGR_PLLBR_PLLBCOUNT_Msk & (_UINT32_(value) << CKGR_PLLBR_PLLBCOUNT_Pos)) /* Assigment of value for PLLBCOUNT in the CKGR_PLLBR register */
#define CKGR_PLLBR_FREQ_VCO_Pos               _UINT32_(14)                                         /* (CKGR_PLLBR) VCO Frequency Configuration Position */
#define CKGR_PLLBR_FREQ_VCO_Msk               (_UINT32_(0x3) << CKGR_PLLBR_FREQ_VCO_Pos)           /* (CKGR_PLLBR) VCO Frequency Configuration Mask */
#define CKGR_PLLBR_FREQ_VCO(value)            (CKGR_PLLBR_FREQ_VCO_Msk & (_UINT32_(value) << CKGR_PLLBR_FREQ_VCO_Pos)) /* Assigment of value for FREQ_VCO in the CKGR_PLLBR register */
#define   CKGR_PLLBR_FREQ_VCO_VCO0_Val        _UINT32_(0x0)                                        /* (CKGR_PLLBR) Frequency range: 40-80 MHz  */
#define   CKGR_PLLBR_FREQ_VCO_VCO1_Val        _UINT32_(0x1)                                        /* (CKGR_PLLBR) Frequency range: 70-150 MHz  */
#define   CKGR_PLLBR_FREQ_VCO_VCO2_Val        _UINT32_(0x2)                                        /* (CKGR_PLLBR) Frequency range: 125-275 MHz  */
#define   CKGR_PLLBR_FREQ_VCO_VCO3_Val        _UINT32_(0x3)                                        /* (CKGR_PLLBR) Frequency range: 250-450 MHz  */
#define CKGR_PLLBR_FREQ_VCO_VCO0              (CKGR_PLLBR_FREQ_VCO_VCO0_Val << CKGR_PLLBR_FREQ_VCO_Pos) /* (CKGR_PLLBR) Frequency range: 40-80 MHz Position  */
#define CKGR_PLLBR_FREQ_VCO_VCO1              (CKGR_PLLBR_FREQ_VCO_VCO1_Val << CKGR_PLLBR_FREQ_VCO_Pos) /* (CKGR_PLLBR) Frequency range: 70-150 MHz Position  */
#define CKGR_PLLBR_FREQ_VCO_VCO2              (CKGR_PLLBR_FREQ_VCO_VCO2_Val << CKGR_PLLBR_FREQ_VCO_Pos) /* (CKGR_PLLBR) Frequency range: 125-275 MHz Position  */
#define CKGR_PLLBR_FREQ_VCO_VCO3              (CKGR_PLLBR_FREQ_VCO_VCO3_Val << CKGR_PLLBR_FREQ_VCO_Pos) /* (CKGR_PLLBR) Frequency range: 250-450 MHz Position  */
#define CKGR_PLLBR_MULB_Pos                   _UINT32_(16)                                         /* (CKGR_PLLBR) PLLB Multiplier Position */
#define CKGR_PLLBR_MULB_Msk                   (_UINT32_(0x7FF) << CKGR_PLLBR_MULB_Pos)             /* (CKGR_PLLBR) PLLB Multiplier Mask */
#define CKGR_PLLBR_MULB(value)                (CKGR_PLLBR_MULB_Msk & (_UINT32_(value) << CKGR_PLLBR_MULB_Pos)) /* Assigment of value for MULB in the CKGR_PLLBR register */
#define CKGR_PLLBR_SRCB_Pos                   _UINT32_(29)                                         /* (CKGR_PLLBR) PLLB Source Clock Selection Position */
#define CKGR_PLLBR_SRCB_Msk                   (_UINT32_(0x3) << CKGR_PLLBR_SRCB_Pos)               /* (CKGR_PLLBR) PLLB Source Clock Selection Mask */
#define CKGR_PLLBR_SRCB(value)                (CKGR_PLLBR_SRCB_Msk & (_UINT32_(value) << CKGR_PLLBR_SRCB_Pos)) /* Assigment of value for SRCB in the CKGR_PLLBR register */
#define   CKGR_PLLBR_SRCB_MAINCK_Val          _UINT32_(0x0)                                        /* (CKGR_PLLBR) MAINCK is the source clock of PLLB.  */
#define   CKGR_PLLBR_SRCB_RC2CK_Val           _UINT32_(0x2)                                        /* (CKGR_PLLBR) RC2CK is the source clock of PLLB.  */
#define CKGR_PLLBR_SRCB_MAINCK                (CKGR_PLLBR_SRCB_MAINCK_Val << CKGR_PLLBR_SRCB_Pos)  /* (CKGR_PLLBR) MAINCK is the source clock of PLLB. Position  */
#define CKGR_PLLBR_SRCB_RC2CK                 (CKGR_PLLBR_SRCB_RC2CK_Val << CKGR_PLLBR_SRCB_Pos)   /* (CKGR_PLLBR) RC2CK is the source clock of PLLB. Position  */
#define CKGR_PLLBR_Msk                        _UINT32_(0x67FFFFFF)                                 /* (CKGR_PLLBR) Register Mask  */


/* -------- PMC_MCKR : (PMC Offset: 0x30) (R/W 32) Master Clock Register -------- */
#define PMC_MCKR_CSS_Pos                      _UINT32_(0)                                          /* (PMC_MCKR) Master Clock Source Selection Position */
#define PMC_MCKR_CSS_Msk                      (_UINT32_(0x3) << PMC_MCKR_CSS_Pos)                  /* (PMC_MCKR) Master Clock Source Selection Mask */
#define PMC_MCKR_CSS(value)                   (PMC_MCKR_CSS_Msk & (_UINT32_(value) << PMC_MCKR_CSS_Pos)) /* Assigment of value for CSS in the PMC_MCKR register */
#define   PMC_MCKR_CSS_SLOW_CLK_Val           _UINT32_(0x0)                                        /* (PMC_MCKR) MD_SLCK is selected  */
#define   PMC_MCKR_CSS_MAIN_CLK_Val           _UINT32_(0x1)                                        /* (PMC_MCKR) MAINCK is selected  */
#define   PMC_MCKR_CSS_PLLA_CLK_Val           _UINT32_(0x2)                                        /* (PMC_MCKR) PLLACK is selected  */
#define PMC_MCKR_CSS_SLOW_CLK                 (PMC_MCKR_CSS_SLOW_CLK_Val << PMC_MCKR_CSS_Pos)      /* (PMC_MCKR) MD_SLCK is selected Position  */
#define PMC_MCKR_CSS_MAIN_CLK                 (PMC_MCKR_CSS_MAIN_CLK_Val << PMC_MCKR_CSS_Pos)      /* (PMC_MCKR) MAINCK is selected Position  */
#define PMC_MCKR_CSS_PLLA_CLK                 (PMC_MCKR_CSS_PLLA_CLK_Val << PMC_MCKR_CSS_Pos)      /* (PMC_MCKR) PLLACK is selected Position  */
#define PMC_MCKR_PRES_Pos                     _UINT32_(4)                                          /* (PMC_MCKR) Processor Clock Prescaler Position */
#define PMC_MCKR_PRES_Msk                     (_UINT32_(0x7) << PMC_MCKR_PRES_Pos)                 /* (PMC_MCKR) Processor Clock Prescaler Mask */
#define PMC_MCKR_PRES(value)                  (PMC_MCKR_PRES_Msk & (_UINT32_(value) << PMC_MCKR_PRES_Pos)) /* Assigment of value for PRES in the PMC_MCKR register */
#define   PMC_MCKR_PRES_CLK_1_Val             _UINT32_(0x0)                                        /* (PMC_MCKR) Selected clock  */
#define   PMC_MCKR_PRES_CLK_2_Val             _UINT32_(0x1)                                        /* (PMC_MCKR) Selected clock divided by 2  */
#define   PMC_MCKR_PRES_CLK_4_Val             _UINT32_(0x2)                                        /* (PMC_MCKR) Selected clock divided by 4  */
#define   PMC_MCKR_PRES_CLK_8_Val             _UINT32_(0x3)                                        /* (PMC_MCKR) Selected clock divided by 8  */
#define   PMC_MCKR_PRES_CLK_16_Val            _UINT32_(0x4)                                        /* (PMC_MCKR) Selected clock divided by 16  */
#define   PMC_MCKR_PRES_CLK_32_Val            _UINT32_(0x5)                                        /* (PMC_MCKR) Selected clock divided by 32  */
#define   PMC_MCKR_PRES_CLK_64_Val            _UINT32_(0x6)                                        /* (PMC_MCKR) Selected clock divided by 64  */
#define PMC_MCKR_PRES_CLK_1                   (PMC_MCKR_PRES_CLK_1_Val << PMC_MCKR_PRES_Pos)       /* (PMC_MCKR) Selected clock Position  */
#define PMC_MCKR_PRES_CLK_2                   (PMC_MCKR_PRES_CLK_2_Val << PMC_MCKR_PRES_Pos)       /* (PMC_MCKR) Selected clock divided by 2 Position  */
#define PMC_MCKR_PRES_CLK_4                   (PMC_MCKR_PRES_CLK_4_Val << PMC_MCKR_PRES_Pos)       /* (PMC_MCKR) Selected clock divided by 4 Position  */
#define PMC_MCKR_PRES_CLK_8                   (PMC_MCKR_PRES_CLK_8_Val << PMC_MCKR_PRES_Pos)       /* (PMC_MCKR) Selected clock divided by 8 Position  */
#define PMC_MCKR_PRES_CLK_16                  (PMC_MCKR_PRES_CLK_16_Val << PMC_MCKR_PRES_Pos)      /* (PMC_MCKR) Selected clock divided by 16 Position  */
#define PMC_MCKR_PRES_CLK_32                  (PMC_MCKR_PRES_CLK_32_Val << PMC_MCKR_PRES_Pos)      /* (PMC_MCKR) Selected clock divided by 32 Position  */
#define PMC_MCKR_PRES_CLK_64                  (PMC_MCKR_PRES_CLK_64_Val << PMC_MCKR_PRES_Pos)      /* (PMC_MCKR) Selected clock divided by 64 Position  */
#define PMC_MCKR_MDIV_Pos                     _UINT32_(8)                                          /* (PMC_MCKR) Master Clock Division Position */
#define PMC_MCKR_MDIV_Msk                     (_UINT32_(0x1) << PMC_MCKR_MDIV_Pos)                 /* (PMC_MCKR) Master Clock Division Mask */
#define PMC_MCKR_MDIV(value)                  (PMC_MCKR_MDIV_Msk & (_UINT32_(value) << PMC_MCKR_MDIV_Pos)) /* Assigment of value for MDIV in the PMC_MCKR register */
#define   PMC_MCKR_MDIV_EQ_PCK_Val            _UINT32_(0x0)                                        /* (PMC_MCKR) MCK is FCLK divided by 1.  */
#define   PMC_MCKR_MDIV_PCK_DIV2_Val          _UINT32_(0x1)                                        /* (PMC_MCKR) MCK is FCLK divided by 2.  */
#define PMC_MCKR_MDIV_EQ_PCK                  (PMC_MCKR_MDIV_EQ_PCK_Val << PMC_MCKR_MDIV_Pos)      /* (PMC_MCKR) MCK is FCLK divided by 1. Position  */
#define PMC_MCKR_MDIV_PCK_DIV2                (PMC_MCKR_MDIV_PCK_DIV2_Val << PMC_MCKR_MDIV_Pos)    /* (PMC_MCKR) MCK is FCLK divided by 2. Position  */
#define PMC_MCKR_ZERO_Pos                     _UINT32_(13)                                         /* (PMC_MCKR) Shall be always write at '0' Position */
#define PMC_MCKR_ZERO_Msk                     (_UINT32_(0x1) << PMC_MCKR_ZERO_Pos)                 /* (PMC_MCKR) Shall be always write at '0' Mask */
#define PMC_MCKR_ZERO(value)                  (PMC_MCKR_ZERO_Msk & (_UINT32_(value) << PMC_MCKR_ZERO_Pos)) /* Assigment of value for ZERO in the PMC_MCKR register */
#define PMC_MCKR_Msk                          _UINT32_(0x00002173)                                 /* (PMC_MCKR) Register Mask  */


/* -------- PMC_PCK : (PMC Offset: 0x40) (R/W 32) Programmable Clock Register -------- */
#define PMC_PCK_CSS_Pos                       _UINT32_(0)                                          /* (PMC_PCK) Programmable Clock Source Selection Position */
#define PMC_PCK_CSS_Msk                       (_UINT32_(0x7) << PMC_PCK_CSS_Pos)                   /* (PMC_PCK) Programmable Clock Source Selection Mask */
#define PMC_PCK_CSS(value)                    (PMC_PCK_CSS_Msk & (_UINT32_(value) << PMC_PCK_CSS_Pos)) /* Assigment of value for CSS in the PMC_PCK register */
#define   PMC_PCK_CSS_SLOW_CLK_Val            _UINT32_(0x0)                                        /* (PMC_PCK) MD_SLCK is selected  */
#define   PMC_PCK_CSS_MAIN_CLK_Val            _UINT32_(0x1)                                        /* (PMC_PCK) MAINCK is selected  */
#define   PMC_PCK_CSS_PLLA_CLK_Val            _UINT32_(0x2)                                        /* (PMC_PCK) PLLACK is selected  */
#define   PMC_PCK_CSS_PLLB_CLK_Val            _UINT32_(0x3)                                        /* (PMC_PCK) PLLBCKDIV is selected  */
#define   PMC_PCK_CSS_MCK_Val                 _UINT32_(0x4)                                        /* (PMC_PCK) MCK is selected  */
#define PMC_PCK_CSS_SLOW_CLK                  (PMC_PCK_CSS_SLOW_CLK_Val << PMC_PCK_CSS_Pos)        /* (PMC_PCK) MD_SLCK is selected Position  */
#define PMC_PCK_CSS_MAIN_CLK                  (PMC_PCK_CSS_MAIN_CLK_Val << PMC_PCK_CSS_Pos)        /* (PMC_PCK) MAINCK is selected Position  */
#define PMC_PCK_CSS_PLLA_CLK                  (PMC_PCK_CSS_PLLA_CLK_Val << PMC_PCK_CSS_Pos)        /* (PMC_PCK) PLLACK is selected Position  */
#define PMC_PCK_CSS_PLLB_CLK                  (PMC_PCK_CSS_PLLB_CLK_Val << PMC_PCK_CSS_Pos)        /* (PMC_PCK) PLLBCKDIV is selected Position  */
#define PMC_PCK_CSS_MCK                       (PMC_PCK_CSS_MCK_Val << PMC_PCK_CSS_Pos)             /* (PMC_PCK) MCK is selected Position  */
#define PMC_PCK_PRES_Pos                      _UINT32_(4)                                          /* (PMC_PCK) Programmable Clock Prescaler Position */
#define PMC_PCK_PRES_Msk                      (_UINT32_(0xFF) << PMC_PCK_PRES_Pos)                 /* (PMC_PCK) Programmable Clock Prescaler Mask */
#define PMC_PCK_PRES(value)                   (PMC_PCK_PRES_Msk & (_UINT32_(value) << PMC_PCK_PRES_Pos)) /* Assigment of value for PRES in the PMC_PCK register */
#define PMC_PCK_Msk                           _UINT32_(0x00000FF7)                                 /* (PMC_PCK) Register Mask  */


/* -------- PMC_IER : (PMC Offset: 0x60) ( /W 32) Interrupt Enable Register -------- */
#define PMC_IER_MOSCXTS_Pos                   _UINT32_(0)                                          /* (PMC_IER) Main Crystal Oscillator Status Interrupt Enable Position */
#define PMC_IER_MOSCXTS_Msk                   (_UINT32_(0x1) << PMC_IER_MOSCXTS_Pos)               /* (PMC_IER) Main Crystal Oscillator Status Interrupt Enable Mask */
#define PMC_IER_MOSCXTS(value)                (PMC_IER_MOSCXTS_Msk & (_UINT32_(value) << PMC_IER_MOSCXTS_Pos)) /* Assigment of value for MOSCXTS in the PMC_IER register */
#define PMC_IER_LOCKA_Pos                     _UINT32_(1)                                          /* (PMC_IER) PLLA Lock Interrupt Enable Position */
#define PMC_IER_LOCKA_Msk                     (_UINT32_(0x1) << PMC_IER_LOCKA_Pos)                 /* (PMC_IER) PLLA Lock Interrupt Enable Mask */
#define PMC_IER_LOCKA(value)                  (PMC_IER_LOCKA_Msk & (_UINT32_(value) << PMC_IER_LOCKA_Pos)) /* Assigment of value for LOCKA in the PMC_IER register */
#define PMC_IER_LOCKB_Pos                     _UINT32_(2)                                          /* (PMC_IER) PLLB Lock Interrupt Enable Position */
#define PMC_IER_LOCKB_Msk                     (_UINT32_(0x1) << PMC_IER_LOCKB_Pos)                 /* (PMC_IER) PLLB Lock Interrupt Enable Mask */
#define PMC_IER_LOCKB(value)                  (PMC_IER_LOCKB_Msk & (_UINT32_(value) << PMC_IER_LOCKB_Pos)) /* Assigment of value for LOCKB in the PMC_IER register */
#define PMC_IER_MCKRDY_Pos                    _UINT32_(3)                                          /* (PMC_IER) Master Clock Ready Interrupt Enable Position */
#define PMC_IER_MCKRDY_Msk                    (_UINT32_(0x1) << PMC_IER_MCKRDY_Pos)                /* (PMC_IER) Master Clock Ready Interrupt Enable Mask */
#define PMC_IER_MCKRDY(value)                 (PMC_IER_MCKRDY_Msk & (_UINT32_(value) << PMC_IER_MCKRDY_Pos)) /* Assigment of value for MCKRDY in the PMC_IER register */
#define PMC_IER_PCKRDY0_Pos                   _UINT32_(8)                                          /* (PMC_IER) Programmable Clock Ready 0 Interrupt Enable Position */
#define PMC_IER_PCKRDY0_Msk                   (_UINT32_(0x1) << PMC_IER_PCKRDY0_Pos)               /* (PMC_IER) Programmable Clock Ready 0 Interrupt Enable Mask */
#define PMC_IER_PCKRDY0(value)                (PMC_IER_PCKRDY0_Msk & (_UINT32_(value) << PMC_IER_PCKRDY0_Pos)) /* Assigment of value for PCKRDY0 in the PMC_IER register */
#define PMC_IER_PCKRDY1_Pos                   _UINT32_(9)                                          /* (PMC_IER) Programmable Clock Ready 1 Interrupt Enable Position */
#define PMC_IER_PCKRDY1_Msk                   (_UINT32_(0x1) << PMC_IER_PCKRDY1_Pos)               /* (PMC_IER) Programmable Clock Ready 1 Interrupt Enable Mask */
#define PMC_IER_PCKRDY1(value)                (PMC_IER_PCKRDY1_Msk & (_UINT32_(value) << PMC_IER_PCKRDY1_Pos)) /* Assigment of value for PCKRDY1 in the PMC_IER register */
#define PMC_IER_PCKRDY2_Pos                   _UINT32_(10)                                         /* (PMC_IER) Programmable Clock Ready 2 Interrupt Enable Position */
#define PMC_IER_PCKRDY2_Msk                   (_UINT32_(0x1) << PMC_IER_PCKRDY2_Pos)               /* (PMC_IER) Programmable Clock Ready 2 Interrupt Enable Mask */
#define PMC_IER_PCKRDY2(value)                (PMC_IER_PCKRDY2_Msk & (_UINT32_(value) << PMC_IER_PCKRDY2_Pos)) /* Assigment of value for PCKRDY2 in the PMC_IER register */
#define PMC_IER_PCKRDY3_Pos                   _UINT32_(11)                                         /* (PMC_IER) Programmable Clock Ready 3 Interrupt Enable Position */
#define PMC_IER_PCKRDY3_Msk                   (_UINT32_(0x1) << PMC_IER_PCKRDY3_Pos)               /* (PMC_IER) Programmable Clock Ready 3 Interrupt Enable Mask */
#define PMC_IER_PCKRDY3(value)                (PMC_IER_PCKRDY3_Msk & (_UINT32_(value) << PMC_IER_PCKRDY3_Pos)) /* Assigment of value for PCKRDY3 in the PMC_IER register */
#define PMC_IER_MOSCSELS_Pos                  _UINT32_(16)                                         /* (PMC_IER) Main Clock Source Oscillator Selection Status Interrupt Enable Position */
#define PMC_IER_MOSCSELS_Msk                  (_UINT32_(0x1) << PMC_IER_MOSCSELS_Pos)              /* (PMC_IER) Main Clock Source Oscillator Selection Status Interrupt Enable Mask */
#define PMC_IER_MOSCSELS(value)               (PMC_IER_MOSCSELS_Msk & (_UINT32_(value) << PMC_IER_MOSCSELS_Pos)) /* Assigment of value for MOSCSELS in the PMC_IER register */
#define PMC_IER_MOSCRCS_Pos                   _UINT32_(17)                                         /* (PMC_IER) Main RC Oscillator Status Interrupt Enable Position */
#define PMC_IER_MOSCRCS_Msk                   (_UINT32_(0x1) << PMC_IER_MOSCRCS_Pos)               /* (PMC_IER) Main RC Oscillator Status Interrupt Enable Mask */
#define PMC_IER_MOSCRCS(value)                (PMC_IER_MOSCRCS_Msk & (_UINT32_(value) << PMC_IER_MOSCRCS_Pos)) /* Assigment of value for MOSCRCS in the PMC_IER register */
#define PMC_IER_CFDEV_Pos                     _UINT32_(18)                                         /* (PMC_IER) Clock Failure Detector Event Interrupt Enable Position */
#define PMC_IER_CFDEV_Msk                     (_UINT32_(0x1) << PMC_IER_CFDEV_Pos)                 /* (PMC_IER) Clock Failure Detector Event Interrupt Enable Mask */
#define PMC_IER_CFDEV(value)                  (PMC_IER_CFDEV_Msk & (_UINT32_(value) << PMC_IER_CFDEV_Pos)) /* Assigment of value for CFDEV in the PMC_IER register */
#define PMC_IER_EXT32KERR_Pos                 _UINT32_(21)                                         /* (PMC_IER) 32.768 kHz Crystal Oscillator Error Interrupt Enable Position */
#define PMC_IER_EXT32KERR_Msk                 (_UINT32_(0x1) << PMC_IER_EXT32KERR_Pos)             /* (PMC_IER) 32.768 kHz Crystal Oscillator Error Interrupt Enable Mask */
#define PMC_IER_EXT32KERR(value)              (PMC_IER_EXT32KERR_Msk & (_UINT32_(value) << PMC_IER_EXT32KERR_Pos)) /* Assigment of value for EXT32KERR in the PMC_IER register */
#define PMC_IER_CPUMON_Pos                    _UINT32_(23)                                         /* (PMC_IER) CPU Clock Monitor Interrupt Enable Position */
#define PMC_IER_CPUMON_Msk                    (_UINT32_(0x1) << PMC_IER_CPUMON_Pos)                /* (PMC_IER) CPU Clock Monitor Interrupt Enable Mask */
#define PMC_IER_CPUMON(value)                 (PMC_IER_CPUMON_Msk & (_UINT32_(value) << PMC_IER_CPUMON_Pos)) /* Assigment of value for CPUMON in the PMC_IER register */
#define PMC_IER_Msk                           _UINT32_(0x00A70F0F)                                 /* (PMC_IER) Register Mask  */

#define PMC_IER_PCKRDY_Pos                    _UINT32_(8)                                          /* (PMC_IER Position) Programmable Clock Ready x Interrupt Enable */
#define PMC_IER_PCKRDY_Msk                    (_UINT32_(0xF) << PMC_IER_PCKRDY_Pos)                /* (PMC_IER Mask) PCKRDY */
#define PMC_IER_PCKRDY(value)                 (PMC_IER_PCKRDY_Msk & (_UINT32_(value) << PMC_IER_PCKRDY_Pos)) 

/* -------- PMC_IDR : (PMC Offset: 0x64) ( /W 32) Interrupt Disable Register -------- */
#define PMC_IDR_MOSCXTS_Pos                   _UINT32_(0)                                          /* (PMC_IDR) Main Crystal Oscillator Status Interrupt Disable Position */
#define PMC_IDR_MOSCXTS_Msk                   (_UINT32_(0x1) << PMC_IDR_MOSCXTS_Pos)               /* (PMC_IDR) Main Crystal Oscillator Status Interrupt Disable Mask */
#define PMC_IDR_MOSCXTS(value)                (PMC_IDR_MOSCXTS_Msk & (_UINT32_(value) << PMC_IDR_MOSCXTS_Pos)) /* Assigment of value for MOSCXTS in the PMC_IDR register */
#define PMC_IDR_LOCKA_Pos                     _UINT32_(1)                                          /* (PMC_IDR) PLLA Lock Interrupt Disable Position */
#define PMC_IDR_LOCKA_Msk                     (_UINT32_(0x1) << PMC_IDR_LOCKA_Pos)                 /* (PMC_IDR) PLLA Lock Interrupt Disable Mask */
#define PMC_IDR_LOCKA(value)                  (PMC_IDR_LOCKA_Msk & (_UINT32_(value) << PMC_IDR_LOCKA_Pos)) /* Assigment of value for LOCKA in the PMC_IDR register */
#define PMC_IDR_LOCKB_Pos                     _UINT32_(2)                                          /* (PMC_IDR) PLLB Lock Interrupt Disable Position */
#define PMC_IDR_LOCKB_Msk                     (_UINT32_(0x1) << PMC_IDR_LOCKB_Pos)                 /* (PMC_IDR) PLLB Lock Interrupt Disable Mask */
#define PMC_IDR_LOCKB(value)                  (PMC_IDR_LOCKB_Msk & (_UINT32_(value) << PMC_IDR_LOCKB_Pos)) /* Assigment of value for LOCKB in the PMC_IDR register */
#define PMC_IDR_MCKRDY_Pos                    _UINT32_(3)                                          /* (PMC_IDR) Master Clock Ready Interrupt Disable Position */
#define PMC_IDR_MCKRDY_Msk                    (_UINT32_(0x1) << PMC_IDR_MCKRDY_Pos)                /* (PMC_IDR) Master Clock Ready Interrupt Disable Mask */
#define PMC_IDR_MCKRDY(value)                 (PMC_IDR_MCKRDY_Msk & (_UINT32_(value) << PMC_IDR_MCKRDY_Pos)) /* Assigment of value for MCKRDY in the PMC_IDR register */
#define PMC_IDR_PCKRDY0_Pos                   _UINT32_(8)                                          /* (PMC_IDR) Programmable Clock Ready 0 Interrupt Disable Position */
#define PMC_IDR_PCKRDY0_Msk                   (_UINT32_(0x1) << PMC_IDR_PCKRDY0_Pos)               /* (PMC_IDR) Programmable Clock Ready 0 Interrupt Disable Mask */
#define PMC_IDR_PCKRDY0(value)                (PMC_IDR_PCKRDY0_Msk & (_UINT32_(value) << PMC_IDR_PCKRDY0_Pos)) /* Assigment of value for PCKRDY0 in the PMC_IDR register */
#define PMC_IDR_PCKRDY1_Pos                   _UINT32_(9)                                          /* (PMC_IDR) Programmable Clock Ready 1 Interrupt Disable Position */
#define PMC_IDR_PCKRDY1_Msk                   (_UINT32_(0x1) << PMC_IDR_PCKRDY1_Pos)               /* (PMC_IDR) Programmable Clock Ready 1 Interrupt Disable Mask */
#define PMC_IDR_PCKRDY1(value)                (PMC_IDR_PCKRDY1_Msk & (_UINT32_(value) << PMC_IDR_PCKRDY1_Pos)) /* Assigment of value for PCKRDY1 in the PMC_IDR register */
#define PMC_IDR_PCKRDY2_Pos                   _UINT32_(10)                                         /* (PMC_IDR) Programmable Clock Ready 2 Interrupt Disable Position */
#define PMC_IDR_PCKRDY2_Msk                   (_UINT32_(0x1) << PMC_IDR_PCKRDY2_Pos)               /* (PMC_IDR) Programmable Clock Ready 2 Interrupt Disable Mask */
#define PMC_IDR_PCKRDY2(value)                (PMC_IDR_PCKRDY2_Msk & (_UINT32_(value) << PMC_IDR_PCKRDY2_Pos)) /* Assigment of value for PCKRDY2 in the PMC_IDR register */
#define PMC_IDR_PCKRDY3_Pos                   _UINT32_(11)                                         /* (PMC_IDR) Programmable Clock Ready 3 Interrupt Disable Position */
#define PMC_IDR_PCKRDY3_Msk                   (_UINT32_(0x1) << PMC_IDR_PCKRDY3_Pos)               /* (PMC_IDR) Programmable Clock Ready 3 Interrupt Disable Mask */
#define PMC_IDR_PCKRDY3(value)                (PMC_IDR_PCKRDY3_Msk & (_UINT32_(value) << PMC_IDR_PCKRDY3_Pos)) /* Assigment of value for PCKRDY3 in the PMC_IDR register */
#define PMC_IDR_MOSCSELS_Pos                  _UINT32_(16)                                         /* (PMC_IDR) Main Clock Source Oscillator Selection Status Interrupt Disable Position */
#define PMC_IDR_MOSCSELS_Msk                  (_UINT32_(0x1) << PMC_IDR_MOSCSELS_Pos)              /* (PMC_IDR) Main Clock Source Oscillator Selection Status Interrupt Disable Mask */
#define PMC_IDR_MOSCSELS(value)               (PMC_IDR_MOSCSELS_Msk & (_UINT32_(value) << PMC_IDR_MOSCSELS_Pos)) /* Assigment of value for MOSCSELS in the PMC_IDR register */
#define PMC_IDR_MOSCRCS_Pos                   _UINT32_(17)                                         /* (PMC_IDR) Main RC Status Interrupt Disable Position */
#define PMC_IDR_MOSCRCS_Msk                   (_UINT32_(0x1) << PMC_IDR_MOSCRCS_Pos)               /* (PMC_IDR) Main RC Status Interrupt Disable Mask */
#define PMC_IDR_MOSCRCS(value)                (PMC_IDR_MOSCRCS_Msk & (_UINT32_(value) << PMC_IDR_MOSCRCS_Pos)) /* Assigment of value for MOSCRCS in the PMC_IDR register */
#define PMC_IDR_CFDEV_Pos                     _UINT32_(18)                                         /* (PMC_IDR) Clock Failure Detector Event Interrupt Disable Position */
#define PMC_IDR_CFDEV_Msk                     (_UINT32_(0x1) << PMC_IDR_CFDEV_Pos)                 /* (PMC_IDR) Clock Failure Detector Event Interrupt Disable Mask */
#define PMC_IDR_CFDEV(value)                  (PMC_IDR_CFDEV_Msk & (_UINT32_(value) << PMC_IDR_CFDEV_Pos)) /* Assigment of value for CFDEV in the PMC_IDR register */
#define PMC_IDR_EXT32KERR_Pos                 _UINT32_(21)                                         /* (PMC_IDR) 32.768 kHz Crystal Oscillator Error Interrupt Disable Position */
#define PMC_IDR_EXT32KERR_Msk                 (_UINT32_(0x1) << PMC_IDR_EXT32KERR_Pos)             /* (PMC_IDR) 32.768 kHz Crystal Oscillator Error Interrupt Disable Mask */
#define PMC_IDR_EXT32KERR(value)              (PMC_IDR_EXT32KERR_Msk & (_UINT32_(value) << PMC_IDR_EXT32KERR_Pos)) /* Assigment of value for EXT32KERR in the PMC_IDR register */
#define PMC_IDR_CPUMON_Pos                    _UINT32_(23)                                         /* (PMC_IDR) CPU Clock Monitor Interrupt Disable Position */
#define PMC_IDR_CPUMON_Msk                    (_UINT32_(0x1) << PMC_IDR_CPUMON_Pos)                /* (PMC_IDR) CPU Clock Monitor Interrupt Disable Mask */
#define PMC_IDR_CPUMON(value)                 (PMC_IDR_CPUMON_Msk & (_UINT32_(value) << PMC_IDR_CPUMON_Pos)) /* Assigment of value for CPUMON in the PMC_IDR register */
#define PMC_IDR_Msk                           _UINT32_(0x00A70F0F)                                 /* (PMC_IDR) Register Mask  */

#define PMC_IDR_PCKRDY_Pos                    _UINT32_(8)                                          /* (PMC_IDR Position) Programmable Clock Ready x Interrupt Disable */
#define PMC_IDR_PCKRDY_Msk                    (_UINT32_(0xF) << PMC_IDR_PCKRDY_Pos)                /* (PMC_IDR Mask) PCKRDY */
#define PMC_IDR_PCKRDY(value)                 (PMC_IDR_PCKRDY_Msk & (_UINT32_(value) << PMC_IDR_PCKRDY_Pos)) 

/* -------- PMC_SR : (PMC Offset: 0x68) ( R/ 32) Status Register -------- */
#define PMC_SR_MOSCXTS_Pos                    _UINT32_(0)                                          /* (PMC_SR) Main Crystal Oscillator Status Position */
#define PMC_SR_MOSCXTS_Msk                    (_UINT32_(0x1) << PMC_SR_MOSCXTS_Pos)                /* (PMC_SR) Main Crystal Oscillator Status Mask */
#define PMC_SR_MOSCXTS(value)                 (PMC_SR_MOSCXTS_Msk & (_UINT32_(value) << PMC_SR_MOSCXTS_Pos)) /* Assigment of value for MOSCXTS in the PMC_SR register */
#define PMC_SR_LOCKA_Pos                      _UINT32_(1)                                          /* (PMC_SR) PLLA Lock Status Position */
#define PMC_SR_LOCKA_Msk                      (_UINT32_(0x1) << PMC_SR_LOCKA_Pos)                  /* (PMC_SR) PLLA Lock Status Mask */
#define PMC_SR_LOCKA(value)                   (PMC_SR_LOCKA_Msk & (_UINT32_(value) << PMC_SR_LOCKA_Pos)) /* Assigment of value for LOCKA in the PMC_SR register */
#define PMC_SR_LOCKB_Pos                      _UINT32_(2)                                          /* (PMC_SR) PLLB Lock Status Position */
#define PMC_SR_LOCKB_Msk                      (_UINT32_(0x1) << PMC_SR_LOCKB_Pos)                  /* (PMC_SR) PLLB Lock Status Mask */
#define PMC_SR_LOCKB(value)                   (PMC_SR_LOCKB_Msk & (_UINT32_(value) << PMC_SR_LOCKB_Pos)) /* Assigment of value for LOCKB in the PMC_SR register */
#define PMC_SR_MCKRDY_Pos                     _UINT32_(3)                                          /* (PMC_SR) Master Clock Status Position */
#define PMC_SR_MCKRDY_Msk                     (_UINT32_(0x1) << PMC_SR_MCKRDY_Pos)                 /* (PMC_SR) Master Clock Status Mask */
#define PMC_SR_MCKRDY(value)                  (PMC_SR_MCKRDY_Msk & (_UINT32_(value) << PMC_SR_MCKRDY_Pos)) /* Assigment of value for MCKRDY in the PMC_SR register */
#define PMC_SR_OSCSELS_Pos                    _UINT32_(7)                                          /* (PMC_SR) Monitoring Domain Slow Clock Source Oscillator Selection Position */
#define PMC_SR_OSCSELS_Msk                    (_UINT32_(0x1) << PMC_SR_OSCSELS_Pos)                /* (PMC_SR) Monitoring Domain Slow Clock Source Oscillator Selection Mask */
#define PMC_SR_OSCSELS(value)                 (PMC_SR_OSCSELS_Msk & (_UINT32_(value) << PMC_SR_OSCSELS_Pos)) /* Assigment of value for OSCSELS in the PMC_SR register */
#define PMC_SR_PCKRDY0_Pos                    _UINT32_(8)                                          /* (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY0_Msk                    (_UINT32_(0x1) << PMC_SR_PCKRDY0_Pos)                /* (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY0(value)                 (PMC_SR_PCKRDY0_Msk & (_UINT32_(value) << PMC_SR_PCKRDY0_Pos)) /* Assigment of value for PCKRDY0 in the PMC_SR register */
#define PMC_SR_PCKRDY1_Pos                    _UINT32_(9)                                          /* (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY1_Msk                    (_UINT32_(0x1) << PMC_SR_PCKRDY1_Pos)                /* (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY1(value)                 (PMC_SR_PCKRDY1_Msk & (_UINT32_(value) << PMC_SR_PCKRDY1_Pos)) /* Assigment of value for PCKRDY1 in the PMC_SR register */
#define PMC_SR_PCKRDY2_Pos                    _UINT32_(10)                                         /* (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY2_Msk                    (_UINT32_(0x1) << PMC_SR_PCKRDY2_Pos)                /* (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY2(value)                 (PMC_SR_PCKRDY2_Msk & (_UINT32_(value) << PMC_SR_PCKRDY2_Pos)) /* Assigment of value for PCKRDY2 in the PMC_SR register */
#define PMC_SR_PCKRDY3_Pos                    _UINT32_(11)                                         /* (PMC_SR) Programmable Clock Ready Status Position */
#define PMC_SR_PCKRDY3_Msk                    (_UINT32_(0x1) << PMC_SR_PCKRDY3_Pos)                /* (PMC_SR) Programmable Clock Ready Status Mask */
#define PMC_SR_PCKRDY3(value)                 (PMC_SR_PCKRDY3_Msk & (_UINT32_(value) << PMC_SR_PCKRDY3_Pos)) /* Assigment of value for PCKRDY3 in the PMC_SR register */
#define PMC_SR_MOSCSELS_Pos                   _UINT32_(16)                                         /* (PMC_SR) Main Clock Source Oscillator Selection Status Position */
#define PMC_SR_MOSCSELS_Msk                   (_UINT32_(0x1) << PMC_SR_MOSCSELS_Pos)               /* (PMC_SR) Main Clock Source Oscillator Selection Status Mask */
#define PMC_SR_MOSCSELS(value)                (PMC_SR_MOSCSELS_Msk & (_UINT32_(value) << PMC_SR_MOSCSELS_Pos)) /* Assigment of value for MOSCSELS in the PMC_SR register */
#define PMC_SR_MOSCRCS_Pos                    _UINT32_(17)                                         /* (PMC_SR) Main RC Oscillator Status Position */
#define PMC_SR_MOSCRCS_Msk                    (_UINT32_(0x1) << PMC_SR_MOSCRCS_Pos)                /* (PMC_SR) Main RC Oscillator Status Mask */
#define PMC_SR_MOSCRCS(value)                 (PMC_SR_MOSCRCS_Msk & (_UINT32_(value) << PMC_SR_MOSCRCS_Pos)) /* Assigment of value for MOSCRCS in the PMC_SR register */
#define PMC_SR_CFDEV_Pos                      _UINT32_(18)                                         /* (PMC_SR) Clock Failure Detector Event Position */
#define PMC_SR_CFDEV_Msk                      (_UINT32_(0x1) << PMC_SR_CFDEV_Pos)                  /* (PMC_SR) Clock Failure Detector Event Mask */
#define PMC_SR_CFDEV(value)                   (PMC_SR_CFDEV_Msk & (_UINT32_(value) << PMC_SR_CFDEV_Pos)) /* Assigment of value for CFDEV in the PMC_SR register */
#define PMC_SR_CFDS_Pos                       _UINT32_(19)                                         /* (PMC_SR) Clock Failure Detector Status Position */
#define PMC_SR_CFDS_Msk                       (_UINT32_(0x1) << PMC_SR_CFDS_Pos)                   /* (PMC_SR) Clock Failure Detector Status Mask */
#define PMC_SR_CFDS(value)                    (PMC_SR_CFDS_Msk & (_UINT32_(value) << PMC_SR_CFDS_Pos)) /* Assigment of value for CFDS in the PMC_SR register */
#define PMC_SR_FOS_Pos                        _UINT32_(20)                                         /* (PMC_SR) Clock Failure Detector Fault Output Status Position */
#define PMC_SR_FOS_Msk                        (_UINT32_(0x1) << PMC_SR_FOS_Pos)                    /* (PMC_SR) Clock Failure Detector Fault Output Status Mask */
#define PMC_SR_FOS(value)                     (PMC_SR_FOS_Msk & (_UINT32_(value) << PMC_SR_FOS_Pos)) /* Assigment of value for FOS in the PMC_SR register */
#define PMC_SR_EXT32KERR_Pos                  _UINT32_(21)                                         /* (PMC_SR) Slow Crystal Oscillator Error Position */
#define PMC_SR_EXT32KERR_Msk                  (_UINT32_(0x1) << PMC_SR_EXT32KERR_Pos)              /* (PMC_SR) Slow Crystal Oscillator Error Mask */
#define PMC_SR_EXT32KERR(value)               (PMC_SR_EXT32KERR_Msk & (_UINT32_(value) << PMC_SR_EXT32KERR_Pos)) /* Assigment of value for EXT32KERR in the PMC_SR register */
#define PMC_SR_CPUMON_Pos                     _UINT32_(23)                                         /* (PMC_SR) CPU Clock Monitor Error Position */
#define PMC_SR_CPUMON_Msk                     (_UINT32_(0x1) << PMC_SR_CPUMON_Pos)                 /* (PMC_SR) CPU Clock Monitor Error Mask */
#define PMC_SR_CPUMON(value)                  (PMC_SR_CPUMON_Msk & (_UINT32_(value) << PMC_SR_CPUMON_Pos)) /* Assigment of value for CPUMON in the PMC_SR register */
#define PMC_SR_Msk                            _UINT32_(0x00BF0F8F)                                 /* (PMC_SR) Register Mask  */

#define PMC_SR_PCKRDY_Pos                     _UINT32_(8)                                          /* (PMC_SR Position) Programmable Clock Ready Status */
#define PMC_SR_PCKRDY_Msk                     (_UINT32_(0xF) << PMC_SR_PCKRDY_Pos)                 /* (PMC_SR Mask) PCKRDY */
#define PMC_SR_PCKRDY(value)                  (PMC_SR_PCKRDY_Msk & (_UINT32_(value) << PMC_SR_PCKRDY_Pos)) 

/* -------- PMC_IMR : (PMC Offset: 0x6C) ( R/ 32) Interrupt Mask Register -------- */
#define PMC_IMR_MOSCXTS_Pos                   _UINT32_(0)                                          /* (PMC_IMR) Main Crystal Oscillator Status Interrupt Mask Position */
#define PMC_IMR_MOSCXTS_Msk                   (_UINT32_(0x1) << PMC_IMR_MOSCXTS_Pos)               /* (PMC_IMR) Main Crystal Oscillator Status Interrupt Mask Mask */
#define PMC_IMR_MOSCXTS(value)                (PMC_IMR_MOSCXTS_Msk & (_UINT32_(value) << PMC_IMR_MOSCXTS_Pos)) /* Assigment of value for MOSCXTS in the PMC_IMR register */
#define PMC_IMR_LOCKA_Pos                     _UINT32_(1)                                          /* (PMC_IMR) PLLA Lock Interrupt Mask Position */
#define PMC_IMR_LOCKA_Msk                     (_UINT32_(0x1) << PMC_IMR_LOCKA_Pos)                 /* (PMC_IMR) PLLA Lock Interrupt Mask Mask */
#define PMC_IMR_LOCKA(value)                  (PMC_IMR_LOCKA_Msk & (_UINT32_(value) << PMC_IMR_LOCKA_Pos)) /* Assigment of value for LOCKA in the PMC_IMR register */
#define PMC_IMR_LOCKB_Pos                     _UINT32_(2)                                          /* (PMC_IMR) PLLB Lock Interrupt Mask Position */
#define PMC_IMR_LOCKB_Msk                     (_UINT32_(0x1) << PMC_IMR_LOCKB_Pos)                 /* (PMC_IMR) PLLB Lock Interrupt Mask Mask */
#define PMC_IMR_LOCKB(value)                  (PMC_IMR_LOCKB_Msk & (_UINT32_(value) << PMC_IMR_LOCKB_Pos)) /* Assigment of value for LOCKB in the PMC_IMR register */
#define PMC_IMR_MCKRDY_Pos                    _UINT32_(3)                                          /* (PMC_IMR) Master Clock Ready Interrupt Mask Position */
#define PMC_IMR_MCKRDY_Msk                    (_UINT32_(0x1) << PMC_IMR_MCKRDY_Pos)                /* (PMC_IMR) Master Clock Ready Interrupt Mask Mask */
#define PMC_IMR_MCKRDY(value)                 (PMC_IMR_MCKRDY_Msk & (_UINT32_(value) << PMC_IMR_MCKRDY_Pos)) /* Assigment of value for MCKRDY in the PMC_IMR register */
#define PMC_IMR_PCKRDY0_Pos                   _UINT32_(8)                                          /* (PMC_IMR) Programmable Clock Ready 0 Interrupt Mask Position */
#define PMC_IMR_PCKRDY0_Msk                   (_UINT32_(0x1) << PMC_IMR_PCKRDY0_Pos)               /* (PMC_IMR) Programmable Clock Ready 0 Interrupt Mask Mask */
#define PMC_IMR_PCKRDY0(value)                (PMC_IMR_PCKRDY0_Msk & (_UINT32_(value) << PMC_IMR_PCKRDY0_Pos)) /* Assigment of value for PCKRDY0 in the PMC_IMR register */
#define PMC_IMR_PCKRDY1_Pos                   _UINT32_(9)                                          /* (PMC_IMR) Programmable Clock Ready 1 Interrupt Mask Position */
#define PMC_IMR_PCKRDY1_Msk                   (_UINT32_(0x1) << PMC_IMR_PCKRDY1_Pos)               /* (PMC_IMR) Programmable Clock Ready 1 Interrupt Mask Mask */
#define PMC_IMR_PCKRDY1(value)                (PMC_IMR_PCKRDY1_Msk & (_UINT32_(value) << PMC_IMR_PCKRDY1_Pos)) /* Assigment of value for PCKRDY1 in the PMC_IMR register */
#define PMC_IMR_PCKRDY2_Pos                   _UINT32_(10)                                         /* (PMC_IMR) Programmable Clock Ready 2 Interrupt Mask Position */
#define PMC_IMR_PCKRDY2_Msk                   (_UINT32_(0x1) << PMC_IMR_PCKRDY2_Pos)               /* (PMC_IMR) Programmable Clock Ready 2 Interrupt Mask Mask */
#define PMC_IMR_PCKRDY2(value)                (PMC_IMR_PCKRDY2_Msk & (_UINT32_(value) << PMC_IMR_PCKRDY2_Pos)) /* Assigment of value for PCKRDY2 in the PMC_IMR register */
#define PMC_IMR_PCKRDY3_Pos                   _UINT32_(11)                                         /* (PMC_IMR) Programmable Clock Ready 3 Interrupt Mask Position */
#define PMC_IMR_PCKRDY3_Msk                   (_UINT32_(0x1) << PMC_IMR_PCKRDY3_Pos)               /* (PMC_IMR) Programmable Clock Ready 3 Interrupt Mask Mask */
#define PMC_IMR_PCKRDY3(value)                (PMC_IMR_PCKRDY3_Msk & (_UINT32_(value) << PMC_IMR_PCKRDY3_Pos)) /* Assigment of value for PCKRDY3 in the PMC_IMR register */
#define PMC_IMR_MOSCSELS_Pos                  _UINT32_(16)                                         /* (PMC_IMR) Main Clock Source Oscillator Selection Status Interrupt Mask Position */
#define PMC_IMR_MOSCSELS_Msk                  (_UINT32_(0x1) << PMC_IMR_MOSCSELS_Pos)              /* (PMC_IMR) Main Clock Source Oscillator Selection Status Interrupt Mask Mask */
#define PMC_IMR_MOSCSELS(value)               (PMC_IMR_MOSCSELS_Msk & (_UINT32_(value) << PMC_IMR_MOSCSELS_Pos)) /* Assigment of value for MOSCSELS in the PMC_IMR register */
#define PMC_IMR_MOSCRCS_Pos                   _UINT32_(17)                                         /* (PMC_IMR) Main RC Status Interrupt Mask Position */
#define PMC_IMR_MOSCRCS_Msk                   (_UINT32_(0x1) << PMC_IMR_MOSCRCS_Pos)               /* (PMC_IMR) Main RC Status Interrupt Mask Mask */
#define PMC_IMR_MOSCRCS(value)                (PMC_IMR_MOSCRCS_Msk & (_UINT32_(value) << PMC_IMR_MOSCRCS_Pos)) /* Assigment of value for MOSCRCS in the PMC_IMR register */
#define PMC_IMR_CFDEV_Pos                     _UINT32_(18)                                         /* (PMC_IMR) Clock Failure Detector Event Interrupt Mask Position */
#define PMC_IMR_CFDEV_Msk                     (_UINT32_(0x1) << PMC_IMR_CFDEV_Pos)                 /* (PMC_IMR) Clock Failure Detector Event Interrupt Mask Mask */
#define PMC_IMR_CFDEV(value)                  (PMC_IMR_CFDEV_Msk & (_UINT32_(value) << PMC_IMR_CFDEV_Pos)) /* Assigment of value for CFDEV in the PMC_IMR register */
#define PMC_IMR_EXT32KERR_Pos                 _UINT32_(21)                                         /* (PMC_IMR) 32.768 kHz Crystal Oscillator Error Interrupt Mask Position */
#define PMC_IMR_EXT32KERR_Msk                 (_UINT32_(0x1) << PMC_IMR_EXT32KERR_Pos)             /* (PMC_IMR) 32.768 kHz Crystal Oscillator Error Interrupt Mask Mask */
#define PMC_IMR_EXT32KERR(value)              (PMC_IMR_EXT32KERR_Msk & (_UINT32_(value) << PMC_IMR_EXT32KERR_Pos)) /* Assigment of value for EXT32KERR in the PMC_IMR register */
#define PMC_IMR_CPUMON_Pos                    _UINT32_(23)                                         /* (PMC_IMR) CPU Clock Monitor Error Interrupt Mask Position */
#define PMC_IMR_CPUMON_Msk                    (_UINT32_(0x1) << PMC_IMR_CPUMON_Pos)                /* (PMC_IMR) CPU Clock Monitor Error Interrupt Mask Mask */
#define PMC_IMR_CPUMON(value)                 (PMC_IMR_CPUMON_Msk & (_UINT32_(value) << PMC_IMR_CPUMON_Pos)) /* Assigment of value for CPUMON in the PMC_IMR register */
#define PMC_IMR_Msk                           _UINT32_(0x00A70F0F)                                 /* (PMC_IMR) Register Mask  */

#define PMC_IMR_PCKRDY_Pos                    _UINT32_(8)                                          /* (PMC_IMR Position) Programmable Clock Ready x Interrupt Mask */
#define PMC_IMR_PCKRDY_Msk                    (_UINT32_(0xF) << PMC_IMR_PCKRDY_Pos)                /* (PMC_IMR Mask) PCKRDY */
#define PMC_IMR_PCKRDY(value)                 (PMC_IMR_PCKRDY_Msk & (_UINT32_(value) << PMC_IMR_PCKRDY_Pos)) 

/* -------- PMC_FOCR : (PMC Offset: 0x78) ( /W 32) Fault Output Clear Register -------- */
#define PMC_FOCR_FOCLR_Pos                    _UINT32_(0)                                          /* (PMC_FOCR) Fault Output Clear Position */
#define PMC_FOCR_FOCLR_Msk                    (_UINT32_(0x1) << PMC_FOCR_FOCLR_Pos)                /* (PMC_FOCR) Fault Output Clear Mask */
#define PMC_FOCR_FOCLR(value)                 (PMC_FOCR_FOCLR_Msk & (_UINT32_(value) << PMC_FOCR_FOCLR_Pos)) /* Assigment of value for FOCLR in the PMC_FOCR register */
#define PMC_FOCR_Msk                          _UINT32_(0x00000001)                                 /* (PMC_FOCR) Register Mask  */


/* -------- PMC_PLL_CFG : (PMC Offset: 0x80) (R/W 32) PLL Configuration Register -------- */
#define PMC_PLL_CFG_OUTCUR_PLLA_Pos           _UINT32_(0)                                          /* (PMC_PLL_CFG) PLLA Output Current Position */
#define PMC_PLL_CFG_OUTCUR_PLLA_Msk           (_UINT32_(0xF) << PMC_PLL_CFG_OUTCUR_PLLA_Pos)       /* (PMC_PLL_CFG) PLLA Output Current Mask */
#define PMC_PLL_CFG_OUTCUR_PLLA(value)        (PMC_PLL_CFG_OUTCUR_PLLA_Msk & (_UINT32_(value) << PMC_PLL_CFG_OUTCUR_PLLA_Pos)) /* Assigment of value for OUTCUR_PLLA in the PMC_PLL_CFG register */
#define   PMC_PLL_CFG_OUTCUR_PLLA_ICP0_Val    _UINT32_(0x0)                                        /* (PMC_PLL_CFG) 0.5 mA  */
#define   PMC_PLL_CFG_OUTCUR_PLLA_ICP1_Val    _UINT32_(0x1)                                        /* (PMC_PLL_CFG) 0.75 mA  */
#define   PMC_PLL_CFG_OUTCUR_PLLA_ICP2_Val    _UINT32_(0x2)                                        /* (PMC_PLL_CFG) 1 mA  */
#define   PMC_PLL_CFG_OUTCUR_PLLA_ICP3_Val    _UINT32_(0x3)                                        /* (PMC_PLL_CFG) 1.25 mA  */
#define PMC_PLL_CFG_OUTCUR_PLLA_ICP0          (PMC_PLL_CFG_OUTCUR_PLLA_ICP0_Val << PMC_PLL_CFG_OUTCUR_PLLA_Pos) /* (PMC_PLL_CFG) 0.5 mA Position  */
#define PMC_PLL_CFG_OUTCUR_PLLA_ICP1          (PMC_PLL_CFG_OUTCUR_PLLA_ICP1_Val << PMC_PLL_CFG_OUTCUR_PLLA_Pos) /* (PMC_PLL_CFG) 0.75 mA Position  */
#define PMC_PLL_CFG_OUTCUR_PLLA_ICP2          (PMC_PLL_CFG_OUTCUR_PLLA_ICP2_Val << PMC_PLL_CFG_OUTCUR_PLLA_Pos) /* (PMC_PLL_CFG) 1 mA Position  */
#define PMC_PLL_CFG_OUTCUR_PLLA_ICP3          (PMC_PLL_CFG_OUTCUR_PLLA_ICP3_Val << PMC_PLL_CFG_OUTCUR_PLLA_Pos) /* (PMC_PLL_CFG) 1.25 mA Position  */
#define PMC_PLL_CFG_SCA_Pos                   _UINT32_(12)                                         /* (PMC_PLL_CFG) Internal Filter PLL - Select Internal Capaticance Value Position */
#define PMC_PLL_CFG_SCA_Msk                   (_UINT32_(0x3) << PMC_PLL_CFG_SCA_Pos)               /* (PMC_PLL_CFG) Internal Filter PLL - Select Internal Capaticance Value Mask */
#define PMC_PLL_CFG_SCA(value)                (PMC_PLL_CFG_SCA_Msk & (_UINT32_(value) << PMC_PLL_CFG_SCA_Pos)) /* Assigment of value for SCA in the PMC_PLL_CFG register */
#define   PMC_PLL_CFG_SCA_SC_VAL_20p_Val      _UINT32_(0x0)                                        /* (PMC_PLL_CFG) 20 pF  */
#define   PMC_PLL_CFG_SCA_SC_VAL_40p_Val      _UINT32_(0x1)                                        /* (PMC_PLL_CFG) 40 pF  */
#define   PMC_PLL_CFG_SCA_SC_VAL_30p_Val      _UINT32_(0x2)                                        /* (PMC_PLL_CFG) 30 pF  */
#define   PMC_PLL_CFG_SCA_SC_VAL_60p_Val      _UINT32_(0x3)                                        /* (PMC_PLL_CFG) 60 pF  */
#define PMC_PLL_CFG_SCA_SC_VAL_20p            (PMC_PLL_CFG_SCA_SC_VAL_20p_Val << PMC_PLL_CFG_SCA_Pos) /* (PMC_PLL_CFG) 20 pF Position  */
#define PMC_PLL_CFG_SCA_SC_VAL_40p            (PMC_PLL_CFG_SCA_SC_VAL_40p_Val << PMC_PLL_CFG_SCA_Pos) /* (PMC_PLL_CFG) 40 pF Position  */
#define PMC_PLL_CFG_SCA_SC_VAL_30p            (PMC_PLL_CFG_SCA_SC_VAL_30p_Val << PMC_PLL_CFG_SCA_Pos) /* (PMC_PLL_CFG) 30 pF Position  */
#define PMC_PLL_CFG_SCA_SC_VAL_60p            (PMC_PLL_CFG_SCA_SC_VAL_60p_Val << PMC_PLL_CFG_SCA_Pos) /* (PMC_PLL_CFG) 60 pF Position  */
#define PMC_PLL_CFG_SRA_Pos                   _UINT32_(14)                                         /* (PMC_PLL_CFG) Internal Filter PLL - Select Internal Resistor Value Position */
#define PMC_PLL_CFG_SRA_Msk                   (_UINT32_(0x3) << PMC_PLL_CFG_SRA_Pos)               /* (PMC_PLL_CFG) Internal Filter PLL - Select Internal Resistor Value Mask */
#define PMC_PLL_CFG_SRA(value)                (PMC_PLL_CFG_SRA_Msk & (_UINT32_(value) << PMC_PLL_CFG_SRA_Pos)) /* Assigment of value for SRA in the PMC_PLL_CFG register */
#define   PMC_PLL_CFG_SRA_SR_VAL_24K_Val      _UINT32_(0x0)                                        /* (PMC_PLL_CFG) 24 Ohms  */
#define   PMC_PLL_CFG_SRA_SR_VAL_6K_Val       _UINT32_(0x1)                                        /* (PMC_PLL_CFG) 6 Ohms  */
#define   PMC_PLL_CFG_SRA_SR_VAL_3K_Val       _UINT32_(0x2)                                        /* (PMC_PLL_CFG) 3 Ohms  */
#define   PMC_PLL_CFG_SRA_SR_VAL_12K_Val      _UINT32_(0x3)                                        /* (PMC_PLL_CFG) 12 Ohms  */
#define PMC_PLL_CFG_SRA_SR_VAL_24K            (PMC_PLL_CFG_SRA_SR_VAL_24K_Val << PMC_PLL_CFG_SRA_Pos) /* (PMC_PLL_CFG) 24 Ohms Position  */
#define PMC_PLL_CFG_SRA_SR_VAL_6K             (PMC_PLL_CFG_SRA_SR_VAL_6K_Val << PMC_PLL_CFG_SRA_Pos) /* (PMC_PLL_CFG) 6 Ohms Position  */
#define PMC_PLL_CFG_SRA_SR_VAL_3K             (PMC_PLL_CFG_SRA_SR_VAL_3K_Val << PMC_PLL_CFG_SRA_Pos) /* (PMC_PLL_CFG) 3 Ohms Position  */
#define PMC_PLL_CFG_SRA_SR_VAL_12K            (PMC_PLL_CFG_SRA_SR_VAL_12K_Val << PMC_PLL_CFG_SRA_Pos) /* (PMC_PLL_CFG) 12 Ohms Position  */
#define PMC_PLL_CFG_OUTCUR_PLLB_Pos           _UINT32_(16)                                         /* (PMC_PLL_CFG) PLLB Output Current Position */
#define PMC_PLL_CFG_OUTCUR_PLLB_Msk           (_UINT32_(0xF) << PMC_PLL_CFG_OUTCUR_PLLB_Pos)       /* (PMC_PLL_CFG) PLLB Output Current Mask */
#define PMC_PLL_CFG_OUTCUR_PLLB(value)        (PMC_PLL_CFG_OUTCUR_PLLB_Msk & (_UINT32_(value) << PMC_PLL_CFG_OUTCUR_PLLB_Pos)) /* Assigment of value for OUTCUR_PLLB in the PMC_PLL_CFG register */
#define   PMC_PLL_CFG_OUTCUR_PLLB_ICP0_Val    _UINT32_(0x0)                                        /* (PMC_PLL_CFG) 0.5 mA  */
#define   PMC_PLL_CFG_OUTCUR_PLLB_ICP1_Val    _UINT32_(0x1)                                        /* (PMC_PLL_CFG) 0.75 mA  */
#define   PMC_PLL_CFG_OUTCUR_PLLB_ICP2_Val    _UINT32_(0x2)                                        /* (PMC_PLL_CFG) 1 mA  */
#define   PMC_PLL_CFG_OUTCUR_PLLB_ICP3_Val    _UINT32_(0x3)                                        /* (PMC_PLL_CFG) 1.25 mA  */
#define PMC_PLL_CFG_OUTCUR_PLLB_ICP0          (PMC_PLL_CFG_OUTCUR_PLLB_ICP0_Val << PMC_PLL_CFG_OUTCUR_PLLB_Pos) /* (PMC_PLL_CFG) 0.5 mA Position  */
#define PMC_PLL_CFG_OUTCUR_PLLB_ICP1          (PMC_PLL_CFG_OUTCUR_PLLB_ICP1_Val << PMC_PLL_CFG_OUTCUR_PLLB_Pos) /* (PMC_PLL_CFG) 0.75 mA Position  */
#define PMC_PLL_CFG_OUTCUR_PLLB_ICP2          (PMC_PLL_CFG_OUTCUR_PLLB_ICP2_Val << PMC_PLL_CFG_OUTCUR_PLLB_Pos) /* (PMC_PLL_CFG) 1 mA Position  */
#define PMC_PLL_CFG_OUTCUR_PLLB_ICP3          (PMC_PLL_CFG_OUTCUR_PLLB_ICP3_Val << PMC_PLL_CFG_OUTCUR_PLLB_Pos) /* (PMC_PLL_CFG) 1.25 mA Position  */
#define PMC_PLL_CFG_SCB_Pos                   _UINT32_(28)                                         /* (PMC_PLL_CFG) Internal Filter PLL - Select Internal Capaticance Value Position */
#define PMC_PLL_CFG_SCB_Msk                   (_UINT32_(0x3) << PMC_PLL_CFG_SCB_Pos)               /* (PMC_PLL_CFG) Internal Filter PLL - Select Internal Capaticance Value Mask */
#define PMC_PLL_CFG_SCB(value)                (PMC_PLL_CFG_SCB_Msk & (_UINT32_(value) << PMC_PLL_CFG_SCB_Pos)) /* Assigment of value for SCB in the PMC_PLL_CFG register */
#define   PMC_PLL_CFG_SCB_SC_VAL_20p_Val      _UINT32_(0x0)                                        /* (PMC_PLL_CFG) 20 pF  */
#define   PMC_PLL_CFG_SCB_SC_VAL_40p_Val      _UINT32_(0x1)                                        /* (PMC_PLL_CFG) 40 pF  */
#define   PMC_PLL_CFG_SCB_SC_VAL_30p_Val      _UINT32_(0x2)                                        /* (PMC_PLL_CFG) 30 pF  */
#define   PMC_PLL_CFG_SCB_SC_VAL_60p_Val      _UINT32_(0x3)                                        /* (PMC_PLL_CFG) 60 pF  */
#define PMC_PLL_CFG_SCB_SC_VAL_20p            (PMC_PLL_CFG_SCB_SC_VAL_20p_Val << PMC_PLL_CFG_SCB_Pos) /* (PMC_PLL_CFG) 20 pF Position  */
#define PMC_PLL_CFG_SCB_SC_VAL_40p            (PMC_PLL_CFG_SCB_SC_VAL_40p_Val << PMC_PLL_CFG_SCB_Pos) /* (PMC_PLL_CFG) 40 pF Position  */
#define PMC_PLL_CFG_SCB_SC_VAL_30p            (PMC_PLL_CFG_SCB_SC_VAL_30p_Val << PMC_PLL_CFG_SCB_Pos) /* (PMC_PLL_CFG) 30 pF Position  */
#define PMC_PLL_CFG_SCB_SC_VAL_60p            (PMC_PLL_CFG_SCB_SC_VAL_60p_Val << PMC_PLL_CFG_SCB_Pos) /* (PMC_PLL_CFG) 60 pF Position  */
#define PMC_PLL_CFG_SRB_Pos                   _UINT32_(30)                                         /* (PMC_PLL_CFG) Internal Filter PLL - Select Internal Resistor Value Position */
#define PMC_PLL_CFG_SRB_Msk                   (_UINT32_(0x3) << PMC_PLL_CFG_SRB_Pos)               /* (PMC_PLL_CFG) Internal Filter PLL - Select Internal Resistor Value Mask */
#define PMC_PLL_CFG_SRB(value)                (PMC_PLL_CFG_SRB_Msk & (_UINT32_(value) << PMC_PLL_CFG_SRB_Pos)) /* Assigment of value for SRB in the PMC_PLL_CFG register */
#define   PMC_PLL_CFG_SRB_SR_VAL_24K_Val      _UINT32_(0x0)                                        /* (PMC_PLL_CFG) 24 Ohms  */
#define   PMC_PLL_CFG_SRB_SR_VAL_6K_Val       _UINT32_(0x1)                                        /* (PMC_PLL_CFG) 6 Ohms  */
#define   PMC_PLL_CFG_SRB_SR_VAL_3K_Val       _UINT32_(0x2)                                        /* (PMC_PLL_CFG) 3 Ohms  */
#define   PMC_PLL_CFG_SRB_SR_VAL_12K_Val      _UINT32_(0x3)                                        /* (PMC_PLL_CFG) 12 Ohms  */
#define PMC_PLL_CFG_SRB_SR_VAL_24K            (PMC_PLL_CFG_SRB_SR_VAL_24K_Val << PMC_PLL_CFG_SRB_Pos) /* (PMC_PLL_CFG) 24 Ohms Position  */
#define PMC_PLL_CFG_SRB_SR_VAL_6K             (PMC_PLL_CFG_SRB_SR_VAL_6K_Val << PMC_PLL_CFG_SRB_Pos) /* (PMC_PLL_CFG) 6 Ohms Position  */
#define PMC_PLL_CFG_SRB_SR_VAL_3K             (PMC_PLL_CFG_SRB_SR_VAL_3K_Val << PMC_PLL_CFG_SRB_Pos) /* (PMC_PLL_CFG) 3 Ohms Position  */
#define PMC_PLL_CFG_SRB_SR_VAL_12K            (PMC_PLL_CFG_SRB_SR_VAL_12K_Val << PMC_PLL_CFG_SRB_Pos) /* (PMC_PLL_CFG) 12 Ohms Position  */
#define PMC_PLL_CFG_Msk                       _UINT32_(0xF00FF00F)                                 /* (PMC_PLL_CFG) Register Mask  */


/* -------- PMC_WPMR : (PMC Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define PMC_WPMR_WPEN_Pos                     _UINT32_(0)                                          /* (PMC_WPMR) Write Protection Enable Position */
#define PMC_WPMR_WPEN_Msk                     (_UINT32_(0x1) << PMC_WPMR_WPEN_Pos)                 /* (PMC_WPMR) Write Protection Enable Mask */
#define PMC_WPMR_WPEN(value)                  (PMC_WPMR_WPEN_Msk & (_UINT32_(value) << PMC_WPMR_WPEN_Pos)) /* Assigment of value for WPEN in the PMC_WPMR register */
#define PMC_WPMR_WPITEN_Pos                   _UINT32_(1)                                          /* (PMC_WPMR) Write Protection Interrupt Enable Position */
#define PMC_WPMR_WPITEN_Msk                   (_UINT32_(0x1) << PMC_WPMR_WPITEN_Pos)               /* (PMC_WPMR) Write Protection Interrupt Enable Mask */
#define PMC_WPMR_WPITEN(value)                (PMC_WPMR_WPITEN_Msk & (_UINT32_(value) << PMC_WPMR_WPITEN_Pos)) /* Assigment of value for WPITEN in the PMC_WPMR register */
#define PMC_WPMR_WPKEY_Pos                    _UINT32_(8)                                          /* (PMC_WPMR) Write Protection Key Position */
#define PMC_WPMR_WPKEY_Msk                    (_UINT32_(0xFFFFFF) << PMC_WPMR_WPKEY_Pos)           /* (PMC_WPMR) Write Protection Key Mask */
#define PMC_WPMR_WPKEY(value)                 (PMC_WPMR_WPKEY_Msk & (_UINT32_(value) << PMC_WPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the PMC_WPMR register */
#define   PMC_WPMR_WPKEY_PASSWD_Val           _UINT32_(0x504D43)                                   /* (PMC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0.  */
#define PMC_WPMR_WPKEY_PASSWD                 (PMC_WPMR_WPKEY_PASSWD_Val << PMC_WPMR_WPKEY_Pos)    /* (PMC_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0. Position  */
#define PMC_WPMR_Msk                          _UINT32_(0xFFFFFF03)                                 /* (PMC_WPMR) Register Mask  */


/* -------- PMC_WPSR : (PMC Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define PMC_WPSR_WPVS_Pos                     _UINT32_(0)                                          /* (PMC_WPSR) Write Protection Violation Status Position */
#define PMC_WPSR_WPVS_Msk                     (_UINT32_(0x1) << PMC_WPSR_WPVS_Pos)                 /* (PMC_WPSR) Write Protection Violation Status Mask */
#define PMC_WPSR_WPVS(value)                  (PMC_WPSR_WPVS_Msk & (_UINT32_(value) << PMC_WPSR_WPVS_Pos)) /* Assigment of value for WPVS in the PMC_WPSR register */
#define PMC_WPSR_WPVSRC_Pos                   _UINT32_(8)                                          /* (PMC_WPSR) Write Protection Violation Source Position */
#define PMC_WPSR_WPVSRC_Msk                   (_UINT32_(0xFFFF) << PMC_WPSR_WPVSRC_Pos)            /* (PMC_WPSR) Write Protection Violation Source Mask */
#define PMC_WPSR_WPVSRC(value)                (PMC_WPSR_WPVSRC_Msk & (_UINT32_(value) << PMC_WPSR_WPVSRC_Pos)) /* Assigment of value for WPVSRC in the PMC_WPSR register */
#define PMC_WPSR_Msk                          _UINT32_(0x00FFFF01)                                 /* (PMC_WPSR) Register Mask  */


/* -------- PMC_PCR : (PMC Offset: 0x10C) (R/W 32) Peripheral Control Register -------- */
#define PMC_PCR_PID_Pos                       _UINT32_(0)                                          /* (PMC_PCR) Peripheral ID Position */
#define PMC_PCR_PID_Msk                       (_UINT32_(0x7F) << PMC_PCR_PID_Pos)                  /* (PMC_PCR) Peripheral ID Mask */
#define PMC_PCR_PID(value)                    (PMC_PCR_PID_Msk & (_UINT32_(value) << PMC_PCR_PID_Pos)) /* Assigment of value for PID in the PMC_PCR register */
#define PMC_PCR_GCLKCSS_Pos                   _UINT32_(8)                                          /* (PMC_PCR) Generic Clock Source Selection Position */
#define PMC_PCR_GCLKCSS_Msk                   (_UINT32_(0x7) << PMC_PCR_GCLKCSS_Pos)               /* (PMC_PCR) Generic Clock Source Selection Mask */
#define PMC_PCR_GCLKCSS(value)                (PMC_PCR_GCLKCSS_Msk & (_UINT32_(value) << PMC_PCR_GCLKCSS_Pos)) /* Assigment of value for GCLKCSS in the PMC_PCR register */
#define   PMC_PCR_GCLKCSS_SLOW_CLK_Val        _UINT32_(0x0)                                        /* (PMC_PCR) MD_SLCK is selected  */
#define   PMC_PCR_GCLKCSS_MAIN_CLK_Val        _UINT32_(0x1)                                        /* (PMC_PCR) MAINCK is selected  */
#define   PMC_PCR_GCLKCSS_PLLA_CLK_Val        _UINT32_(0x2)                                        /* (PMC_PCR) PLLACK is selected  */
#define   PMC_PCR_GCLKCSS_PLLB_CLK_Val        _UINT32_(0x3)                                        /* (PMC_PCR) PLLBCK is selected  */
#define   PMC_PCR_GCLKCSS_MCK_CLK_Val         _UINT32_(0x4)                                        /* (PMC_PCR) MCK is selected  */
#define   PMC_PCR_GCLKCSS_MCK_RC2_Val         _UINT32_(0x5)                                        /* (PMC_PCR) RC2 is selected  */
#define PMC_PCR_GCLKCSS_SLOW_CLK              (PMC_PCR_GCLKCSS_SLOW_CLK_Val << PMC_PCR_GCLKCSS_Pos) /* (PMC_PCR) MD_SLCK is selected Position  */
#define PMC_PCR_GCLKCSS_MAIN_CLK              (PMC_PCR_GCLKCSS_MAIN_CLK_Val << PMC_PCR_GCLKCSS_Pos) /* (PMC_PCR) MAINCK is selected Position  */
#define PMC_PCR_GCLKCSS_PLLA_CLK              (PMC_PCR_GCLKCSS_PLLA_CLK_Val << PMC_PCR_GCLKCSS_Pos) /* (PMC_PCR) PLLACK is selected Position  */
#define PMC_PCR_GCLKCSS_PLLB_CLK              (PMC_PCR_GCLKCSS_PLLB_CLK_Val << PMC_PCR_GCLKCSS_Pos) /* (PMC_PCR) PLLBCK is selected Position  */
#define PMC_PCR_GCLKCSS_MCK_CLK               (PMC_PCR_GCLKCSS_MCK_CLK_Val << PMC_PCR_GCLKCSS_Pos) /* (PMC_PCR) MCK is selected Position  */
#define PMC_PCR_GCLKCSS_MCK_RC2               (PMC_PCR_GCLKCSS_MCK_RC2_Val << PMC_PCR_GCLKCSS_Pos) /* (PMC_PCR) RC2 is selected Position  */
#define PMC_PCR_CMD_Pos                       _UINT32_(12)                                         /* (PMC_PCR) Command Position */
#define PMC_PCR_CMD_Msk                       (_UINT32_(0x1) << PMC_PCR_CMD_Pos)                   /* (PMC_PCR) Command Mask */
#define PMC_PCR_CMD(value)                    (PMC_PCR_CMD_Msk & (_UINT32_(value) << PMC_PCR_CMD_Pos)) /* Assigment of value for CMD in the PMC_PCR register */
#define PMC_PCR_GCLKDIV_Pos                   _UINT32_(20)                                         /* (PMC_PCR) Generic Clock Division Ratio Position */
#define PMC_PCR_GCLKDIV_Msk                   (_UINT32_(0xFF) << PMC_PCR_GCLKDIV_Pos)              /* (PMC_PCR) Generic Clock Division Ratio Mask */
#define PMC_PCR_GCLKDIV(value)                (PMC_PCR_GCLKDIV_Msk & (_UINT32_(value) << PMC_PCR_GCLKDIV_Pos)) /* Assigment of value for GCLKDIV in the PMC_PCR register */
#define PMC_PCR_EN_Pos                        _UINT32_(28)                                         /* (PMC_PCR) Enable Position */
#define PMC_PCR_EN_Msk                        (_UINT32_(0x1) << PMC_PCR_EN_Pos)                    /* (PMC_PCR) Enable Mask */
#define PMC_PCR_EN(value)                     (PMC_PCR_EN_Msk & (_UINT32_(value) << PMC_PCR_EN_Pos)) /* Assigment of value for EN in the PMC_PCR register */
#define PMC_PCR_GCLKEN_Pos                    _UINT32_(29)                                         /* (PMC_PCR) Generic Clock Enable Position */
#define PMC_PCR_GCLKEN_Msk                    (_UINT32_(0x1) << PMC_PCR_GCLKEN_Pos)                /* (PMC_PCR) Generic Clock Enable Mask */
#define PMC_PCR_GCLKEN(value)                 (PMC_PCR_GCLKEN_Msk & (_UINT32_(value) << PMC_PCR_GCLKEN_Pos)) /* Assigment of value for GCLKEN in the PMC_PCR register */
#define PMC_PCR_Msk                           _UINT32_(0x3FF0177F)                                 /* (PMC_PCR) Register Mask  */


/* -------- PMC_OCR1 : (PMC Offset: 0x110) (R/W 32) Oscillator Calibration Register -------- */
#define PMC_OCR1_CAL4_Pos                     _UINT32_(0)                                          /* (PMC_OCR1) Main RC Oscillator Calibration Bits for 4 MHz Position */
#define PMC_OCR1_CAL4_Msk                     (_UINT32_(0x7F) << PMC_OCR1_CAL4_Pos)                /* (PMC_OCR1) Main RC Oscillator Calibration Bits for 4 MHz Mask */
#define PMC_OCR1_CAL4(value)                  (PMC_OCR1_CAL4_Msk & (_UINT32_(value) << PMC_OCR1_CAL4_Pos)) /* Assigment of value for CAL4 in the PMC_OCR1 register */
#define PMC_OCR1_SEL4_Pos                     _UINT32_(7)                                          /* (PMC_OCR1) Selection of Main RC Oscillator Calibration Bits for 4 MHz Position */
#define PMC_OCR1_SEL4_Msk                     (_UINT32_(0x1) << PMC_OCR1_SEL4_Pos)                 /* (PMC_OCR1) Selection of Main RC Oscillator Calibration Bits for 4 MHz Mask */
#define PMC_OCR1_SEL4(value)                  (PMC_OCR1_SEL4_Msk & (_UINT32_(value) << PMC_OCR1_SEL4_Pos)) /* Assigment of value for SEL4 in the PMC_OCR1 register */
#define PMC_OCR1_CAL8_Pos                     _UINT32_(8)                                          /* (PMC_OCR1) Main RC Oscillator Calibration Bits for 8 MHz Position */
#define PMC_OCR1_CAL8_Msk                     (_UINT32_(0x7F) << PMC_OCR1_CAL8_Pos)                /* (PMC_OCR1) Main RC Oscillator Calibration Bits for 8 MHz Mask */
#define PMC_OCR1_CAL8(value)                  (PMC_OCR1_CAL8_Msk & (_UINT32_(value) << PMC_OCR1_CAL8_Pos)) /* Assigment of value for CAL8 in the PMC_OCR1 register */
#define PMC_OCR1_SEL8_Pos                     _UINT32_(15)                                         /* (PMC_OCR1) Selection of Main RC Oscillator Calibration Bits for 8 MHz Position */
#define PMC_OCR1_SEL8_Msk                     (_UINT32_(0x1) << PMC_OCR1_SEL8_Pos)                 /* (PMC_OCR1) Selection of Main RC Oscillator Calibration Bits for 8 MHz Mask */
#define PMC_OCR1_SEL8(value)                  (PMC_OCR1_SEL8_Msk & (_UINT32_(value) << PMC_OCR1_SEL8_Pos)) /* Assigment of value for SEL8 in the PMC_OCR1 register */
#define PMC_OCR1_CAL12_Pos                    _UINT32_(16)                                         /* (PMC_OCR1) Main RC Oscillator Calibration Bits for 12 MHz Position */
#define PMC_OCR1_CAL12_Msk                    (_UINT32_(0x7F) << PMC_OCR1_CAL12_Pos)               /* (PMC_OCR1) Main RC Oscillator Calibration Bits for 12 MHz Mask */
#define PMC_OCR1_CAL12(value)                 (PMC_OCR1_CAL12_Msk & (_UINT32_(value) << PMC_OCR1_CAL12_Pos)) /* Assigment of value for CAL12 in the PMC_OCR1 register */
#define PMC_OCR1_SEL10_Pos                    _UINT32_(23)                                         /* (PMC_OCR1) Selection of Main RC Oscillator Calibration Bits for 10 MHz Position */
#define PMC_OCR1_SEL10_Msk                    (_UINT32_(0x1) << PMC_OCR1_SEL10_Pos)                /* (PMC_OCR1) Selection of Main RC Oscillator Calibration Bits for 10 MHz Mask */
#define PMC_OCR1_SEL10(value)                 (PMC_OCR1_SEL10_Msk & (_UINT32_(value) << PMC_OCR1_SEL10_Pos)) /* Assigment of value for SEL10 in the PMC_OCR1 register */
#define PMC_OCR1_CAL10_Pos                    _UINT32_(24)                                         /* (PMC_OCR1) Main RC Oscillator Calibration Bits for 10 MHz Position */
#define PMC_OCR1_CAL10_Msk                    (_UINT32_(0x7F) << PMC_OCR1_CAL10_Pos)               /* (PMC_OCR1) Main RC Oscillator Calibration Bits for 10 MHz Mask */
#define PMC_OCR1_CAL10(value)                 (PMC_OCR1_CAL10_Msk & (_UINT32_(value) << PMC_OCR1_CAL10_Pos)) /* Assigment of value for CAL10 in the PMC_OCR1 register */
#define PMC_OCR1_SEL12_Pos                    _UINT32_(31)                                         /* (PMC_OCR1) Selection of Main RC Oscillator Calibration Bits for 12 MHz Position */
#define PMC_OCR1_SEL12_Msk                    (_UINT32_(0x1) << PMC_OCR1_SEL12_Pos)                /* (PMC_OCR1) Selection of Main RC Oscillator Calibration Bits for 12 MHz Mask */
#define PMC_OCR1_SEL12(value)                 (PMC_OCR1_SEL12_Msk & (_UINT32_(value) << PMC_OCR1_SEL12_Pos)) /* Assigment of value for SEL12 in the PMC_OCR1 register */
#define PMC_OCR1_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PMC_OCR1) Register Mask  */


/* -------- PMC_PMMR : (PMC Offset: 0x130) (R/W 32) PLL Maximum Multiplier Value Register -------- */
#define PMC_PMMR_PLLA_MMAX_Pos                _UINT32_(0)                                          /* (PMC_PMMR) PLLA Maximum Allowed Multiplier Value Position */
#define PMC_PMMR_PLLA_MMAX_Msk                (_UINT32_(0x7FF) << PMC_PMMR_PLLA_MMAX_Pos)          /* (PMC_PMMR) PLLA Maximum Allowed Multiplier Value Mask */
#define PMC_PMMR_PLLA_MMAX(value)             (PMC_PMMR_PLLA_MMAX_Msk & (_UINT32_(value) << PMC_PMMR_PLLA_MMAX_Pos)) /* Assigment of value for PLLA_MMAX in the PMC_PMMR register */
#define PMC_PMMR_PLLB_MMAX_Pos                _UINT32_(16)                                         /* (PMC_PMMR) PLLB Maximum Allowed Multiplier Value Position */
#define PMC_PMMR_PLLB_MMAX_Msk                (_UINT32_(0x7FF) << PMC_PMMR_PLLB_MMAX_Pos)          /* (PMC_PMMR) PLLB Maximum Allowed Multiplier Value Mask */
#define PMC_PMMR_PLLB_MMAX(value)             (PMC_PMMR_PLLB_MMAX_Msk & (_UINT32_(value) << PMC_PMMR_PLLB_MMAX_Pos)) /* Assigment of value for PLLB_MMAX in the PMC_PMMR register */
#define PMC_PMMR_Msk                          _UINT32_(0x07FF07FF)                                 /* (PMC_PMMR) Register Mask  */


/* -------- PMC_CPULIM : (PMC Offset: 0x160) (R/W 32) CPU Monitor Limits Register -------- */
#define PMC_CPULIM_CPU_LOW_IT_Pos             _UINT32_(0)                                          /* (PMC_CPULIM) CPU Monitoring Low IT Limit Position */
#define PMC_CPULIM_CPU_LOW_IT_Msk             (_UINT32_(0xFF) << PMC_CPULIM_CPU_LOW_IT_Pos)        /* (PMC_CPULIM) CPU Monitoring Low IT Limit Mask */
#define PMC_CPULIM_CPU_LOW_IT(value)          (PMC_CPULIM_CPU_LOW_IT_Msk & (_UINT32_(value) << PMC_CPULIM_CPU_LOW_IT_Pos)) /* Assigment of value for CPU_LOW_IT in the PMC_CPULIM register */
#define PMC_CPULIM_CPU_HIGH_IT_Pos            _UINT32_(8)                                          /* (PMC_CPULIM) CPU Monitoring High IT Limit Position */
#define PMC_CPULIM_CPU_HIGH_IT_Msk            (_UINT32_(0xFF) << PMC_CPULIM_CPU_HIGH_IT_Pos)       /* (PMC_CPULIM) CPU Monitoring High IT Limit Mask */
#define PMC_CPULIM_CPU_HIGH_IT(value)         (PMC_CPULIM_CPU_HIGH_IT_Msk & (_UINT32_(value) << PMC_CPULIM_CPU_HIGH_IT_Pos)) /* Assigment of value for CPU_HIGH_IT in the PMC_CPULIM register */
#define PMC_CPULIM_CPU_LOW_RES_Pos            _UINT32_(16)                                         /* (PMC_CPULIM) CPU Monitoring Low RESET Limit Position */
#define PMC_CPULIM_CPU_LOW_RES_Msk            (_UINT32_(0xFF) << PMC_CPULIM_CPU_LOW_RES_Pos)       /* (PMC_CPULIM) CPU Monitoring Low RESET Limit Mask */
#define PMC_CPULIM_CPU_LOW_RES(value)         (PMC_CPULIM_CPU_LOW_RES_Msk & (_UINT32_(value) << PMC_CPULIM_CPU_LOW_RES_Pos)) /* Assigment of value for CPU_LOW_RES in the PMC_CPULIM register */
#define PMC_CPULIM_CPU_HIGH_RES_Pos           _UINT32_(24)                                         /* (PMC_CPULIM) CPU Monitoring High Reset Limit Position */
#define PMC_CPULIM_CPU_HIGH_RES_Msk           (_UINT32_(0xFF) << PMC_CPULIM_CPU_HIGH_RES_Pos)      /* (PMC_CPULIM) CPU Monitoring High Reset Limit Mask */
#define PMC_CPULIM_CPU_HIGH_RES(value)        (PMC_CPULIM_CPU_HIGH_RES_Msk & (_UINT32_(value) << PMC_CPULIM_CPU_HIGH_RES_Pos)) /* Assigment of value for CPU_HIGH_RES in the PMC_CPULIM register */
#define PMC_CPULIM_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (PMC_CPULIM) Register Mask  */


/* -------- PMC_CSR0 : (PMC Offset: 0x170) ( R/ 32) Peripheral Clock Status Register 0 -------- */
#define PMC_CSR0_PID0_Pos                     _UINT32_(0)                                          /* (PMC_CSR0) Peripheral Clock 0 Status Position */
#define PMC_CSR0_PID0_Msk                     (_UINT32_(0x1) << PMC_CSR0_PID0_Pos)                 /* (PMC_CSR0) Peripheral Clock 0 Status Mask */
#define PMC_CSR0_PID0(value)                  (PMC_CSR0_PID0_Msk & (_UINT32_(value) << PMC_CSR0_PID0_Pos)) /* Assigment of value for PID0 in the PMC_CSR0 register */
#define PMC_CSR0_PID1_Pos                     _UINT32_(1)                                          /* (PMC_CSR0) Peripheral Clock 1 Status Position */
#define PMC_CSR0_PID1_Msk                     (_UINT32_(0x1) << PMC_CSR0_PID1_Pos)                 /* (PMC_CSR0) Peripheral Clock 1 Status Mask */
#define PMC_CSR0_PID1(value)                  (PMC_CSR0_PID1_Msk & (_UINT32_(value) << PMC_CSR0_PID1_Pos)) /* Assigment of value for PID1 in the PMC_CSR0 register */
#define PMC_CSR0_PID2_Pos                     _UINT32_(2)                                          /* (PMC_CSR0) Peripheral Clock 2 Status Position */
#define PMC_CSR0_PID2_Msk                     (_UINT32_(0x1) << PMC_CSR0_PID2_Pos)                 /* (PMC_CSR0) Peripheral Clock 2 Status Mask */
#define PMC_CSR0_PID2(value)                  (PMC_CSR0_PID2_Msk & (_UINT32_(value) << PMC_CSR0_PID2_Pos)) /* Assigment of value for PID2 in the PMC_CSR0 register */
#define PMC_CSR0_PID3_Pos                     _UINT32_(3)                                          /* (PMC_CSR0) Peripheral Clock 3 Status Position */
#define PMC_CSR0_PID3_Msk                     (_UINT32_(0x1) << PMC_CSR0_PID3_Pos)                 /* (PMC_CSR0) Peripheral Clock 3 Status Mask */
#define PMC_CSR0_PID3(value)                  (PMC_CSR0_PID3_Msk & (_UINT32_(value) << PMC_CSR0_PID3_Pos)) /* Assigment of value for PID3 in the PMC_CSR0 register */
#define PMC_CSR0_PID4_Pos                     _UINT32_(4)                                          /* (PMC_CSR0) Peripheral Clock 4 Status Position */
#define PMC_CSR0_PID4_Msk                     (_UINT32_(0x1) << PMC_CSR0_PID4_Pos)                 /* (PMC_CSR0) Peripheral Clock 4 Status Mask */
#define PMC_CSR0_PID4(value)                  (PMC_CSR0_PID4_Msk & (_UINT32_(value) << PMC_CSR0_PID4_Pos)) /* Assigment of value for PID4 in the PMC_CSR0 register */
#define PMC_CSR0_PID5_Pos                     _UINT32_(5)                                          /* (PMC_CSR0) Peripheral Clock 5 Status Position */
#define PMC_CSR0_PID5_Msk                     (_UINT32_(0x1) << PMC_CSR0_PID5_Pos)                 /* (PMC_CSR0) Peripheral Clock 5 Status Mask */
#define PMC_CSR0_PID5(value)                  (PMC_CSR0_PID5_Msk & (_UINT32_(value) << PMC_CSR0_PID5_Pos)) /* Assigment of value for PID5 in the PMC_CSR0 register */
#define PMC_CSR0_PID6_Pos                     _UINT32_(6)                                          /* (PMC_CSR0) Peripheral Clock 6 Status Position */
#define PMC_CSR0_PID6_Msk                     (_UINT32_(0x1) << PMC_CSR0_PID6_Pos)                 /* (PMC_CSR0) Peripheral Clock 6 Status Mask */
#define PMC_CSR0_PID6(value)                  (PMC_CSR0_PID6_Msk & (_UINT32_(value) << PMC_CSR0_PID6_Pos)) /* Assigment of value for PID6 in the PMC_CSR0 register */
#define PMC_CSR0_PID7_Pos                     _UINT32_(7)                                          /* (PMC_CSR0) Peripheral Clock 7 Status Position */
#define PMC_CSR0_PID7_Msk                     (_UINT32_(0x1) << PMC_CSR0_PID7_Pos)                 /* (PMC_CSR0) Peripheral Clock 7 Status Mask */
#define PMC_CSR0_PID7(value)                  (PMC_CSR0_PID7_Msk & (_UINT32_(value) << PMC_CSR0_PID7_Pos)) /* Assigment of value for PID7 in the PMC_CSR0 register */
#define PMC_CSR0_PID8_Pos                     _UINT32_(8)                                          /* (PMC_CSR0) Peripheral Clock 8 Status Position */
#define PMC_CSR0_PID8_Msk                     (_UINT32_(0x1) << PMC_CSR0_PID8_Pos)                 /* (PMC_CSR0) Peripheral Clock 8 Status Mask */
#define PMC_CSR0_PID8(value)                  (PMC_CSR0_PID8_Msk & (_UINT32_(value) << PMC_CSR0_PID8_Pos)) /* Assigment of value for PID8 in the PMC_CSR0 register */
#define PMC_CSR0_PID9_Pos                     _UINT32_(9)                                          /* (PMC_CSR0) Peripheral Clock 9 Status Position */
#define PMC_CSR0_PID9_Msk                     (_UINT32_(0x1) << PMC_CSR0_PID9_Pos)                 /* (PMC_CSR0) Peripheral Clock 9 Status Mask */
#define PMC_CSR0_PID9(value)                  (PMC_CSR0_PID9_Msk & (_UINT32_(value) << PMC_CSR0_PID9_Pos)) /* Assigment of value for PID9 in the PMC_CSR0 register */
#define PMC_CSR0_PID10_Pos                    _UINT32_(10)                                         /* (PMC_CSR0) Peripheral Clock 10 Status Position */
#define PMC_CSR0_PID10_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID10_Pos)                /* (PMC_CSR0) Peripheral Clock 10 Status Mask */
#define PMC_CSR0_PID10(value)                 (PMC_CSR0_PID10_Msk & (_UINT32_(value) << PMC_CSR0_PID10_Pos)) /* Assigment of value for PID10 in the PMC_CSR0 register */
#define PMC_CSR0_PID11_Pos                    _UINT32_(11)                                         /* (PMC_CSR0) Peripheral Clock 11 Status Position */
#define PMC_CSR0_PID11_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID11_Pos)                /* (PMC_CSR0) Peripheral Clock 11 Status Mask */
#define PMC_CSR0_PID11(value)                 (PMC_CSR0_PID11_Msk & (_UINT32_(value) << PMC_CSR0_PID11_Pos)) /* Assigment of value for PID11 in the PMC_CSR0 register */
#define PMC_CSR0_PID12_Pos                    _UINT32_(12)                                         /* (PMC_CSR0) Peripheral Clock 12 Status Position */
#define PMC_CSR0_PID12_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID12_Pos)                /* (PMC_CSR0) Peripheral Clock 12 Status Mask */
#define PMC_CSR0_PID12(value)                 (PMC_CSR0_PID12_Msk & (_UINT32_(value) << PMC_CSR0_PID12_Pos)) /* Assigment of value for PID12 in the PMC_CSR0 register */
#define PMC_CSR0_PID13_Pos                    _UINT32_(13)                                         /* (PMC_CSR0) Peripheral Clock 13 Status Position */
#define PMC_CSR0_PID13_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID13_Pos)                /* (PMC_CSR0) Peripheral Clock 13 Status Mask */
#define PMC_CSR0_PID13(value)                 (PMC_CSR0_PID13_Msk & (_UINT32_(value) << PMC_CSR0_PID13_Pos)) /* Assigment of value for PID13 in the PMC_CSR0 register */
#define PMC_CSR0_PID14_Pos                    _UINT32_(14)                                         /* (PMC_CSR0) Peripheral Clock 14 Status Position */
#define PMC_CSR0_PID14_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID14_Pos)                /* (PMC_CSR0) Peripheral Clock 14 Status Mask */
#define PMC_CSR0_PID14(value)                 (PMC_CSR0_PID14_Msk & (_UINT32_(value) << PMC_CSR0_PID14_Pos)) /* Assigment of value for PID14 in the PMC_CSR0 register */
#define PMC_CSR0_PID15_Pos                    _UINT32_(15)                                         /* (PMC_CSR0) Peripheral Clock 15 Status Position */
#define PMC_CSR0_PID15_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID15_Pos)                /* (PMC_CSR0) Peripheral Clock 15 Status Mask */
#define PMC_CSR0_PID15(value)                 (PMC_CSR0_PID15_Msk & (_UINT32_(value) << PMC_CSR0_PID15_Pos)) /* Assigment of value for PID15 in the PMC_CSR0 register */
#define PMC_CSR0_PID16_Pos                    _UINT32_(16)                                         /* (PMC_CSR0) Peripheral Clock 16 Status Position */
#define PMC_CSR0_PID16_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID16_Pos)                /* (PMC_CSR0) Peripheral Clock 16 Status Mask */
#define PMC_CSR0_PID16(value)                 (PMC_CSR0_PID16_Msk & (_UINT32_(value) << PMC_CSR0_PID16_Pos)) /* Assigment of value for PID16 in the PMC_CSR0 register */
#define PMC_CSR0_PID17_Pos                    _UINT32_(17)                                         /* (PMC_CSR0) Peripheral Clock 17 Status Position */
#define PMC_CSR0_PID17_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID17_Pos)                /* (PMC_CSR0) Peripheral Clock 17 Status Mask */
#define PMC_CSR0_PID17(value)                 (PMC_CSR0_PID17_Msk & (_UINT32_(value) << PMC_CSR0_PID17_Pos)) /* Assigment of value for PID17 in the PMC_CSR0 register */
#define PMC_CSR0_PID18_Pos                    _UINT32_(18)                                         /* (PMC_CSR0) Peripheral Clock 18 Status Position */
#define PMC_CSR0_PID18_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID18_Pos)                /* (PMC_CSR0) Peripheral Clock 18 Status Mask */
#define PMC_CSR0_PID18(value)                 (PMC_CSR0_PID18_Msk & (_UINT32_(value) << PMC_CSR0_PID18_Pos)) /* Assigment of value for PID18 in the PMC_CSR0 register */
#define PMC_CSR0_PID19_Pos                    _UINT32_(19)                                         /* (PMC_CSR0) Peripheral Clock 19 Status Position */
#define PMC_CSR0_PID19_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID19_Pos)                /* (PMC_CSR0) Peripheral Clock 19 Status Mask */
#define PMC_CSR0_PID19(value)                 (PMC_CSR0_PID19_Msk & (_UINT32_(value) << PMC_CSR0_PID19_Pos)) /* Assigment of value for PID19 in the PMC_CSR0 register */
#define PMC_CSR0_PID20_Pos                    _UINT32_(20)                                         /* (PMC_CSR0) Peripheral Clock 20 Status Position */
#define PMC_CSR0_PID20_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID20_Pos)                /* (PMC_CSR0) Peripheral Clock 20 Status Mask */
#define PMC_CSR0_PID20(value)                 (PMC_CSR0_PID20_Msk & (_UINT32_(value) << PMC_CSR0_PID20_Pos)) /* Assigment of value for PID20 in the PMC_CSR0 register */
#define PMC_CSR0_PID21_Pos                    _UINT32_(21)                                         /* (PMC_CSR0) Peripheral Clock 21 Status Position */
#define PMC_CSR0_PID21_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID21_Pos)                /* (PMC_CSR0) Peripheral Clock 21 Status Mask */
#define PMC_CSR0_PID21(value)                 (PMC_CSR0_PID21_Msk & (_UINT32_(value) << PMC_CSR0_PID21_Pos)) /* Assigment of value for PID21 in the PMC_CSR0 register */
#define PMC_CSR0_PID22_Pos                    _UINT32_(22)                                         /* (PMC_CSR0) Peripheral Clock 22 Status Position */
#define PMC_CSR0_PID22_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID22_Pos)                /* (PMC_CSR0) Peripheral Clock 22 Status Mask */
#define PMC_CSR0_PID22(value)                 (PMC_CSR0_PID22_Msk & (_UINT32_(value) << PMC_CSR0_PID22_Pos)) /* Assigment of value for PID22 in the PMC_CSR0 register */
#define PMC_CSR0_PID23_Pos                    _UINT32_(23)                                         /* (PMC_CSR0) Peripheral Clock 23 Status Position */
#define PMC_CSR0_PID23_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID23_Pos)                /* (PMC_CSR0) Peripheral Clock 23 Status Mask */
#define PMC_CSR0_PID23(value)                 (PMC_CSR0_PID23_Msk & (_UINT32_(value) << PMC_CSR0_PID23_Pos)) /* Assigment of value for PID23 in the PMC_CSR0 register */
#define PMC_CSR0_PID24_Pos                    _UINT32_(24)                                         /* (PMC_CSR0) Peripheral Clock 24 Status Position */
#define PMC_CSR0_PID24_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID24_Pos)                /* (PMC_CSR0) Peripheral Clock 24 Status Mask */
#define PMC_CSR0_PID24(value)                 (PMC_CSR0_PID24_Msk & (_UINT32_(value) << PMC_CSR0_PID24_Pos)) /* Assigment of value for PID24 in the PMC_CSR0 register */
#define PMC_CSR0_PID25_Pos                    _UINT32_(25)                                         /* (PMC_CSR0) Peripheral Clock 25 Status Position */
#define PMC_CSR0_PID25_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID25_Pos)                /* (PMC_CSR0) Peripheral Clock 25 Status Mask */
#define PMC_CSR0_PID25(value)                 (PMC_CSR0_PID25_Msk & (_UINT32_(value) << PMC_CSR0_PID25_Pos)) /* Assigment of value for PID25 in the PMC_CSR0 register */
#define PMC_CSR0_PID26_Pos                    _UINT32_(26)                                         /* (PMC_CSR0) Peripheral Clock 26 Status Position */
#define PMC_CSR0_PID26_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID26_Pos)                /* (PMC_CSR0) Peripheral Clock 26 Status Mask */
#define PMC_CSR0_PID26(value)                 (PMC_CSR0_PID26_Msk & (_UINT32_(value) << PMC_CSR0_PID26_Pos)) /* Assigment of value for PID26 in the PMC_CSR0 register */
#define PMC_CSR0_PID27_Pos                    _UINT32_(27)                                         /* (PMC_CSR0) Peripheral Clock 27 Status Position */
#define PMC_CSR0_PID27_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID27_Pos)                /* (PMC_CSR0) Peripheral Clock 27 Status Mask */
#define PMC_CSR0_PID27(value)                 (PMC_CSR0_PID27_Msk & (_UINT32_(value) << PMC_CSR0_PID27_Pos)) /* Assigment of value for PID27 in the PMC_CSR0 register */
#define PMC_CSR0_PID28_Pos                    _UINT32_(28)                                         /* (PMC_CSR0) Peripheral Clock 28 Status Position */
#define PMC_CSR0_PID28_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID28_Pos)                /* (PMC_CSR0) Peripheral Clock 28 Status Mask */
#define PMC_CSR0_PID28(value)                 (PMC_CSR0_PID28_Msk & (_UINT32_(value) << PMC_CSR0_PID28_Pos)) /* Assigment of value for PID28 in the PMC_CSR0 register */
#define PMC_CSR0_PID29_Pos                    _UINT32_(29)                                         /* (PMC_CSR0) Peripheral Clock 29 Status Position */
#define PMC_CSR0_PID29_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID29_Pos)                /* (PMC_CSR0) Peripheral Clock 29 Status Mask */
#define PMC_CSR0_PID29(value)                 (PMC_CSR0_PID29_Msk & (_UINT32_(value) << PMC_CSR0_PID29_Pos)) /* Assigment of value for PID29 in the PMC_CSR0 register */
#define PMC_CSR0_PID30_Pos                    _UINT32_(30)                                         /* (PMC_CSR0) Peripheral Clock 30 Status Position */
#define PMC_CSR0_PID30_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID30_Pos)                /* (PMC_CSR0) Peripheral Clock 30 Status Mask */
#define PMC_CSR0_PID30(value)                 (PMC_CSR0_PID30_Msk & (_UINT32_(value) << PMC_CSR0_PID30_Pos)) /* Assigment of value for PID30 in the PMC_CSR0 register */
#define PMC_CSR0_PID31_Pos                    _UINT32_(31)                                         /* (PMC_CSR0) Peripheral Clock 31 Status Position */
#define PMC_CSR0_PID31_Msk                    (_UINT32_(0x1) << PMC_CSR0_PID31_Pos)                /* (PMC_CSR0) Peripheral Clock 31 Status Mask */
#define PMC_CSR0_PID31(value)                 (PMC_CSR0_PID31_Msk & (_UINT32_(value) << PMC_CSR0_PID31_Pos)) /* Assigment of value for PID31 in the PMC_CSR0 register */
#define PMC_CSR0_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PMC_CSR0) Register Mask  */

#define PMC_CSR0_PID_Pos                      _UINT32_(0)                                          /* (PMC_CSR0 Position) Peripheral Clock 3x Status */
#define PMC_CSR0_PID_Msk                      (_UINT32_(0xFFFFFFFF) << PMC_CSR0_PID_Pos)           /* (PMC_CSR0 Mask) PID */
#define PMC_CSR0_PID(value)                   (PMC_CSR0_PID_Msk & (_UINT32_(value) << PMC_CSR0_PID_Pos)) 

/* -------- PMC_CSR1 : (PMC Offset: 0x174) ( R/ 32) Peripheral Clock Status Register 1 -------- */
#define PMC_CSR1_PID32_Pos                    _UINT32_(0)                                          /* (PMC_CSR1) Peripheral Clock 32 Status Position */
#define PMC_CSR1_PID32_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID32_Pos)                /* (PMC_CSR1) Peripheral Clock 32 Status Mask */
#define PMC_CSR1_PID32(value)                 (PMC_CSR1_PID32_Msk & (_UINT32_(value) << PMC_CSR1_PID32_Pos)) /* Assigment of value for PID32 in the PMC_CSR1 register */
#define PMC_CSR1_PID33_Pos                    _UINT32_(1)                                          /* (PMC_CSR1) Peripheral Clock 33 Status Position */
#define PMC_CSR1_PID33_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID33_Pos)                /* (PMC_CSR1) Peripheral Clock 33 Status Mask */
#define PMC_CSR1_PID33(value)                 (PMC_CSR1_PID33_Msk & (_UINT32_(value) << PMC_CSR1_PID33_Pos)) /* Assigment of value for PID33 in the PMC_CSR1 register */
#define PMC_CSR1_PID34_Pos                    _UINT32_(2)                                          /* (PMC_CSR1) Peripheral Clock 34 Status Position */
#define PMC_CSR1_PID34_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID34_Pos)                /* (PMC_CSR1) Peripheral Clock 34 Status Mask */
#define PMC_CSR1_PID34(value)                 (PMC_CSR1_PID34_Msk & (_UINT32_(value) << PMC_CSR1_PID34_Pos)) /* Assigment of value for PID34 in the PMC_CSR1 register */
#define PMC_CSR1_PID35_Pos                    _UINT32_(3)                                          /* (PMC_CSR1) Peripheral Clock 35 Status Position */
#define PMC_CSR1_PID35_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID35_Pos)                /* (PMC_CSR1) Peripheral Clock 35 Status Mask */
#define PMC_CSR1_PID35(value)                 (PMC_CSR1_PID35_Msk & (_UINT32_(value) << PMC_CSR1_PID35_Pos)) /* Assigment of value for PID35 in the PMC_CSR1 register */
#define PMC_CSR1_PID36_Pos                    _UINT32_(4)                                          /* (PMC_CSR1) Peripheral Clock 36 Status Position */
#define PMC_CSR1_PID36_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID36_Pos)                /* (PMC_CSR1) Peripheral Clock 36 Status Mask */
#define PMC_CSR1_PID36(value)                 (PMC_CSR1_PID36_Msk & (_UINT32_(value) << PMC_CSR1_PID36_Pos)) /* Assigment of value for PID36 in the PMC_CSR1 register */
#define PMC_CSR1_PID37_Pos                    _UINT32_(5)                                          /* (PMC_CSR1) Peripheral Clock 37 Status Position */
#define PMC_CSR1_PID37_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID37_Pos)                /* (PMC_CSR1) Peripheral Clock 37 Status Mask */
#define PMC_CSR1_PID37(value)                 (PMC_CSR1_PID37_Msk & (_UINT32_(value) << PMC_CSR1_PID37_Pos)) /* Assigment of value for PID37 in the PMC_CSR1 register */
#define PMC_CSR1_PID38_Pos                    _UINT32_(6)                                          /* (PMC_CSR1) Peripheral Clock 38 Status Position */
#define PMC_CSR1_PID38_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID38_Pos)                /* (PMC_CSR1) Peripheral Clock 38 Status Mask */
#define PMC_CSR1_PID38(value)                 (PMC_CSR1_PID38_Msk & (_UINT32_(value) << PMC_CSR1_PID38_Pos)) /* Assigment of value for PID38 in the PMC_CSR1 register */
#define PMC_CSR1_PID39_Pos                    _UINT32_(7)                                          /* (PMC_CSR1) Peripheral Clock 39 Status Position */
#define PMC_CSR1_PID39_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID39_Pos)                /* (PMC_CSR1) Peripheral Clock 39 Status Mask */
#define PMC_CSR1_PID39(value)                 (PMC_CSR1_PID39_Msk & (_UINT32_(value) << PMC_CSR1_PID39_Pos)) /* Assigment of value for PID39 in the PMC_CSR1 register */
#define PMC_CSR1_PID40_Pos                    _UINT32_(8)                                          /* (PMC_CSR1) Peripheral Clock 40 Status Position */
#define PMC_CSR1_PID40_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID40_Pos)                /* (PMC_CSR1) Peripheral Clock 40 Status Mask */
#define PMC_CSR1_PID40(value)                 (PMC_CSR1_PID40_Msk & (_UINT32_(value) << PMC_CSR1_PID40_Pos)) /* Assigment of value for PID40 in the PMC_CSR1 register */
#define PMC_CSR1_PID41_Pos                    _UINT32_(9)                                          /* (PMC_CSR1) Peripheral Clock 41 Status Position */
#define PMC_CSR1_PID41_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID41_Pos)                /* (PMC_CSR1) Peripheral Clock 41 Status Mask */
#define PMC_CSR1_PID41(value)                 (PMC_CSR1_PID41_Msk & (_UINT32_(value) << PMC_CSR1_PID41_Pos)) /* Assigment of value for PID41 in the PMC_CSR1 register */
#define PMC_CSR1_PID42_Pos                    _UINT32_(10)                                         /* (PMC_CSR1) Peripheral Clock 42 Status Position */
#define PMC_CSR1_PID42_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID42_Pos)                /* (PMC_CSR1) Peripheral Clock 42 Status Mask */
#define PMC_CSR1_PID42(value)                 (PMC_CSR1_PID42_Msk & (_UINT32_(value) << PMC_CSR1_PID42_Pos)) /* Assigment of value for PID42 in the PMC_CSR1 register */
#define PMC_CSR1_PID43_Pos                    _UINT32_(11)                                         /* (PMC_CSR1) Peripheral Clock 43 Status Position */
#define PMC_CSR1_PID43_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID43_Pos)                /* (PMC_CSR1) Peripheral Clock 43 Status Mask */
#define PMC_CSR1_PID43(value)                 (PMC_CSR1_PID43_Msk & (_UINT32_(value) << PMC_CSR1_PID43_Pos)) /* Assigment of value for PID43 in the PMC_CSR1 register */
#define PMC_CSR1_PID44_Pos                    _UINT32_(12)                                         /* (PMC_CSR1) Peripheral Clock 44 Status Position */
#define PMC_CSR1_PID44_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID44_Pos)                /* (PMC_CSR1) Peripheral Clock 44 Status Mask */
#define PMC_CSR1_PID44(value)                 (PMC_CSR1_PID44_Msk & (_UINT32_(value) << PMC_CSR1_PID44_Pos)) /* Assigment of value for PID44 in the PMC_CSR1 register */
#define PMC_CSR1_PID45_Pos                    _UINT32_(13)                                         /* (PMC_CSR1) Peripheral Clock 45 Status Position */
#define PMC_CSR1_PID45_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID45_Pos)                /* (PMC_CSR1) Peripheral Clock 45 Status Mask */
#define PMC_CSR1_PID45(value)                 (PMC_CSR1_PID45_Msk & (_UINT32_(value) << PMC_CSR1_PID45_Pos)) /* Assigment of value for PID45 in the PMC_CSR1 register */
#define PMC_CSR1_PID46_Pos                    _UINT32_(14)                                         /* (PMC_CSR1) Peripheral Clock 46 Status Position */
#define PMC_CSR1_PID46_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID46_Pos)                /* (PMC_CSR1) Peripheral Clock 46 Status Mask */
#define PMC_CSR1_PID46(value)                 (PMC_CSR1_PID46_Msk & (_UINT32_(value) << PMC_CSR1_PID46_Pos)) /* Assigment of value for PID46 in the PMC_CSR1 register */
#define PMC_CSR1_PID47_Pos                    _UINT32_(15)                                         /* (PMC_CSR1) Peripheral Clock 47 Status Position */
#define PMC_CSR1_PID47_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID47_Pos)                /* (PMC_CSR1) Peripheral Clock 47 Status Mask */
#define PMC_CSR1_PID47(value)                 (PMC_CSR1_PID47_Msk & (_UINT32_(value) << PMC_CSR1_PID47_Pos)) /* Assigment of value for PID47 in the PMC_CSR1 register */
#define PMC_CSR1_PID48_Pos                    _UINT32_(16)                                         /* (PMC_CSR1) Peripheral Clock 48 Status Position */
#define PMC_CSR1_PID48_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID48_Pos)                /* (PMC_CSR1) Peripheral Clock 48 Status Mask */
#define PMC_CSR1_PID48(value)                 (PMC_CSR1_PID48_Msk & (_UINT32_(value) << PMC_CSR1_PID48_Pos)) /* Assigment of value for PID48 in the PMC_CSR1 register */
#define PMC_CSR1_PID49_Pos                    _UINT32_(17)                                         /* (PMC_CSR1) Peripheral Clock 49 Status Position */
#define PMC_CSR1_PID49_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID49_Pos)                /* (PMC_CSR1) Peripheral Clock 49 Status Mask */
#define PMC_CSR1_PID49(value)                 (PMC_CSR1_PID49_Msk & (_UINT32_(value) << PMC_CSR1_PID49_Pos)) /* Assigment of value for PID49 in the PMC_CSR1 register */
#define PMC_CSR1_PID50_Pos                    _UINT32_(18)                                         /* (PMC_CSR1) Peripheral Clock 50 Status Position */
#define PMC_CSR1_PID50_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID50_Pos)                /* (PMC_CSR1) Peripheral Clock 50 Status Mask */
#define PMC_CSR1_PID50(value)                 (PMC_CSR1_PID50_Msk & (_UINT32_(value) << PMC_CSR1_PID50_Pos)) /* Assigment of value for PID50 in the PMC_CSR1 register */
#define PMC_CSR1_PID51_Pos                    _UINT32_(19)                                         /* (PMC_CSR1) Peripheral Clock 51 Status Position */
#define PMC_CSR1_PID51_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID51_Pos)                /* (PMC_CSR1) Peripheral Clock 51 Status Mask */
#define PMC_CSR1_PID51(value)                 (PMC_CSR1_PID51_Msk & (_UINT32_(value) << PMC_CSR1_PID51_Pos)) /* Assigment of value for PID51 in the PMC_CSR1 register */
#define PMC_CSR1_PID52_Pos                    _UINT32_(20)                                         /* (PMC_CSR1) Peripheral Clock 52 Status Position */
#define PMC_CSR1_PID52_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID52_Pos)                /* (PMC_CSR1) Peripheral Clock 52 Status Mask */
#define PMC_CSR1_PID52(value)                 (PMC_CSR1_PID52_Msk & (_UINT32_(value) << PMC_CSR1_PID52_Pos)) /* Assigment of value for PID52 in the PMC_CSR1 register */
#define PMC_CSR1_PID53_Pos                    _UINT32_(21)                                         /* (PMC_CSR1) Peripheral Clock 53 Status Position */
#define PMC_CSR1_PID53_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID53_Pos)                /* (PMC_CSR1) Peripheral Clock 53 Status Mask */
#define PMC_CSR1_PID53(value)                 (PMC_CSR1_PID53_Msk & (_UINT32_(value) << PMC_CSR1_PID53_Pos)) /* Assigment of value for PID53 in the PMC_CSR1 register */
#define PMC_CSR1_PID54_Pos                    _UINT32_(22)                                         /* (PMC_CSR1) Peripheral Clock 54 Status Position */
#define PMC_CSR1_PID54_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID54_Pos)                /* (PMC_CSR1) Peripheral Clock 54 Status Mask */
#define PMC_CSR1_PID54(value)                 (PMC_CSR1_PID54_Msk & (_UINT32_(value) << PMC_CSR1_PID54_Pos)) /* Assigment of value for PID54 in the PMC_CSR1 register */
#define PMC_CSR1_PID55_Pos                    _UINT32_(23)                                         /* (PMC_CSR1) Peripheral Clock 55 Status Position */
#define PMC_CSR1_PID55_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID55_Pos)                /* (PMC_CSR1) Peripheral Clock 55 Status Mask */
#define PMC_CSR1_PID55(value)                 (PMC_CSR1_PID55_Msk & (_UINT32_(value) << PMC_CSR1_PID55_Pos)) /* Assigment of value for PID55 in the PMC_CSR1 register */
#define PMC_CSR1_PID56_Pos                    _UINT32_(24)                                         /* (PMC_CSR1) Peripheral Clock 56 Status Position */
#define PMC_CSR1_PID56_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID56_Pos)                /* (PMC_CSR1) Peripheral Clock 56 Status Mask */
#define PMC_CSR1_PID56(value)                 (PMC_CSR1_PID56_Msk & (_UINT32_(value) << PMC_CSR1_PID56_Pos)) /* Assigment of value for PID56 in the PMC_CSR1 register */
#define PMC_CSR1_PID57_Pos                    _UINT32_(25)                                         /* (PMC_CSR1) Peripheral Clock 57 Status Position */
#define PMC_CSR1_PID57_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID57_Pos)                /* (PMC_CSR1) Peripheral Clock 57 Status Mask */
#define PMC_CSR1_PID57(value)                 (PMC_CSR1_PID57_Msk & (_UINT32_(value) << PMC_CSR1_PID57_Pos)) /* Assigment of value for PID57 in the PMC_CSR1 register */
#define PMC_CSR1_PID58_Pos                    _UINT32_(26)                                         /* (PMC_CSR1) Peripheral Clock 58 Status Position */
#define PMC_CSR1_PID58_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID58_Pos)                /* (PMC_CSR1) Peripheral Clock 58 Status Mask */
#define PMC_CSR1_PID58(value)                 (PMC_CSR1_PID58_Msk & (_UINT32_(value) << PMC_CSR1_PID58_Pos)) /* Assigment of value for PID58 in the PMC_CSR1 register */
#define PMC_CSR1_PID59_Pos                    _UINT32_(27)                                         /* (PMC_CSR1) Peripheral Clock 59 Status Position */
#define PMC_CSR1_PID59_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID59_Pos)                /* (PMC_CSR1) Peripheral Clock 59 Status Mask */
#define PMC_CSR1_PID59(value)                 (PMC_CSR1_PID59_Msk & (_UINT32_(value) << PMC_CSR1_PID59_Pos)) /* Assigment of value for PID59 in the PMC_CSR1 register */
#define PMC_CSR1_PID60_Pos                    _UINT32_(28)                                         /* (PMC_CSR1) Peripheral Clock 60 Status Position */
#define PMC_CSR1_PID60_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID60_Pos)                /* (PMC_CSR1) Peripheral Clock 60 Status Mask */
#define PMC_CSR1_PID60(value)                 (PMC_CSR1_PID60_Msk & (_UINT32_(value) << PMC_CSR1_PID60_Pos)) /* Assigment of value for PID60 in the PMC_CSR1 register */
#define PMC_CSR1_PID61_Pos                    _UINT32_(29)                                         /* (PMC_CSR1) Peripheral Clock 61 Status Position */
#define PMC_CSR1_PID61_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID61_Pos)                /* (PMC_CSR1) Peripheral Clock 61 Status Mask */
#define PMC_CSR1_PID61(value)                 (PMC_CSR1_PID61_Msk & (_UINT32_(value) << PMC_CSR1_PID61_Pos)) /* Assigment of value for PID61 in the PMC_CSR1 register */
#define PMC_CSR1_PID62_Pos                    _UINT32_(30)                                         /* (PMC_CSR1) Peripheral Clock 62 Status Position */
#define PMC_CSR1_PID62_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID62_Pos)                /* (PMC_CSR1) Peripheral Clock 62 Status Mask */
#define PMC_CSR1_PID62(value)                 (PMC_CSR1_PID62_Msk & (_UINT32_(value) << PMC_CSR1_PID62_Pos)) /* Assigment of value for PID62 in the PMC_CSR1 register */
#define PMC_CSR1_PID63_Pos                    _UINT32_(31)                                         /* (PMC_CSR1) Peripheral Clock 63 Status Position */
#define PMC_CSR1_PID63_Msk                    (_UINT32_(0x1) << PMC_CSR1_PID63_Pos)                /* (PMC_CSR1) Peripheral Clock 63 Status Mask */
#define PMC_CSR1_PID63(value)                 (PMC_CSR1_PID63_Msk & (_UINT32_(value) << PMC_CSR1_PID63_Pos)) /* Assigment of value for PID63 in the PMC_CSR1 register */
#define PMC_CSR1_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PMC_CSR1) Register Mask  */

#define PMC_CSR1_PID_Pos                      _UINT32_(0)                                          /* (PMC_CSR1 Position) Peripheral Clock 63 Status */
#define PMC_CSR1_PID_Msk                      (_UINT32_(0xFFFFFFFF) << PMC_CSR1_PID_Pos)           /* (PMC_CSR1 Mask) PID */
#define PMC_CSR1_PID(value)                   (PMC_CSR1_PID_Msk & (_UINT32_(value) << PMC_CSR1_PID_Pos)) 

/* -------- PMC_CSR2 : (PMC Offset: 0x178) ( R/ 32) Peripheral Clock Status Register 2 -------- */
#define PMC_CSR2_PID64_Pos                    _UINT32_(0)                                          /* (PMC_CSR2) Peripheral Clock 64 Status Position */
#define PMC_CSR2_PID64_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID64_Pos)                /* (PMC_CSR2) Peripheral Clock 64 Status Mask */
#define PMC_CSR2_PID64(value)                 (PMC_CSR2_PID64_Msk & (_UINT32_(value) << PMC_CSR2_PID64_Pos)) /* Assigment of value for PID64 in the PMC_CSR2 register */
#define PMC_CSR2_PID65_Pos                    _UINT32_(1)                                          /* (PMC_CSR2) Peripheral Clock 65 Status Position */
#define PMC_CSR2_PID65_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID65_Pos)                /* (PMC_CSR2) Peripheral Clock 65 Status Mask */
#define PMC_CSR2_PID65(value)                 (PMC_CSR2_PID65_Msk & (_UINT32_(value) << PMC_CSR2_PID65_Pos)) /* Assigment of value for PID65 in the PMC_CSR2 register */
#define PMC_CSR2_PID66_Pos                    _UINT32_(2)                                          /* (PMC_CSR2) Peripheral Clock 66 Status Position */
#define PMC_CSR2_PID66_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID66_Pos)                /* (PMC_CSR2) Peripheral Clock 66 Status Mask */
#define PMC_CSR2_PID66(value)                 (PMC_CSR2_PID66_Msk & (_UINT32_(value) << PMC_CSR2_PID66_Pos)) /* Assigment of value for PID66 in the PMC_CSR2 register */
#define PMC_CSR2_PID67_Pos                    _UINT32_(3)                                          /* (PMC_CSR2) Peripheral Clock 67 Status Position */
#define PMC_CSR2_PID67_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID67_Pos)                /* (PMC_CSR2) Peripheral Clock 67 Status Mask */
#define PMC_CSR2_PID67(value)                 (PMC_CSR2_PID67_Msk & (_UINT32_(value) << PMC_CSR2_PID67_Pos)) /* Assigment of value for PID67 in the PMC_CSR2 register */
#define PMC_CSR2_PID68_Pos                    _UINT32_(4)                                          /* (PMC_CSR2) Peripheral Clock 68 Status Position */
#define PMC_CSR2_PID68_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID68_Pos)                /* (PMC_CSR2) Peripheral Clock 68 Status Mask */
#define PMC_CSR2_PID68(value)                 (PMC_CSR2_PID68_Msk & (_UINT32_(value) << PMC_CSR2_PID68_Pos)) /* Assigment of value for PID68 in the PMC_CSR2 register */
#define PMC_CSR2_PID69_Pos                    _UINT32_(5)                                          /* (PMC_CSR2) Peripheral Clock 69 Status Position */
#define PMC_CSR2_PID69_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID69_Pos)                /* (PMC_CSR2) Peripheral Clock 69 Status Mask */
#define PMC_CSR2_PID69(value)                 (PMC_CSR2_PID69_Msk & (_UINT32_(value) << PMC_CSR2_PID69_Pos)) /* Assigment of value for PID69 in the PMC_CSR2 register */
#define PMC_CSR2_PID70_Pos                    _UINT32_(6)                                          /* (PMC_CSR2) Peripheral Clock 70 Status Position */
#define PMC_CSR2_PID70_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID70_Pos)                /* (PMC_CSR2) Peripheral Clock 70 Status Mask */
#define PMC_CSR2_PID70(value)                 (PMC_CSR2_PID70_Msk & (_UINT32_(value) << PMC_CSR2_PID70_Pos)) /* Assigment of value for PID70 in the PMC_CSR2 register */
#define PMC_CSR2_PID71_Pos                    _UINT32_(7)                                          /* (PMC_CSR2) Peripheral Clock 71 Status Position */
#define PMC_CSR2_PID71_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID71_Pos)                /* (PMC_CSR2) Peripheral Clock 71 Status Mask */
#define PMC_CSR2_PID71(value)                 (PMC_CSR2_PID71_Msk & (_UINT32_(value) << PMC_CSR2_PID71_Pos)) /* Assigment of value for PID71 in the PMC_CSR2 register */
#define PMC_CSR2_PID72_Pos                    _UINT32_(8)                                          /* (PMC_CSR2) Peripheral Clock 72 Status Position */
#define PMC_CSR2_PID72_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID72_Pos)                /* (PMC_CSR2) Peripheral Clock 72 Status Mask */
#define PMC_CSR2_PID72(value)                 (PMC_CSR2_PID72_Msk & (_UINT32_(value) << PMC_CSR2_PID72_Pos)) /* Assigment of value for PID72 in the PMC_CSR2 register */
#define PMC_CSR2_PID73_Pos                    _UINT32_(9)                                          /* (PMC_CSR2) Peripheral Clock 73 Status Position */
#define PMC_CSR2_PID73_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID73_Pos)                /* (PMC_CSR2) Peripheral Clock 73 Status Mask */
#define PMC_CSR2_PID73(value)                 (PMC_CSR2_PID73_Msk & (_UINT32_(value) << PMC_CSR2_PID73_Pos)) /* Assigment of value for PID73 in the PMC_CSR2 register */
#define PMC_CSR2_PID74_Pos                    _UINT32_(10)                                         /* (PMC_CSR2) Peripheral Clock 74 Status Position */
#define PMC_CSR2_PID74_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID74_Pos)                /* (PMC_CSR2) Peripheral Clock 74 Status Mask */
#define PMC_CSR2_PID74(value)                 (PMC_CSR2_PID74_Msk & (_UINT32_(value) << PMC_CSR2_PID74_Pos)) /* Assigment of value for PID74 in the PMC_CSR2 register */
#define PMC_CSR2_PID75_Pos                    _UINT32_(11)                                         /* (PMC_CSR2) Peripheral Clock 75 Status Position */
#define PMC_CSR2_PID75_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID75_Pos)                /* (PMC_CSR2) Peripheral Clock 75 Status Mask */
#define PMC_CSR2_PID75(value)                 (PMC_CSR2_PID75_Msk & (_UINT32_(value) << PMC_CSR2_PID75_Pos)) /* Assigment of value for PID75 in the PMC_CSR2 register */
#define PMC_CSR2_PID76_Pos                    _UINT32_(12)                                         /* (PMC_CSR2) Peripheral Clock 76 Status Position */
#define PMC_CSR2_PID76_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID76_Pos)                /* (PMC_CSR2) Peripheral Clock 76 Status Mask */
#define PMC_CSR2_PID76(value)                 (PMC_CSR2_PID76_Msk & (_UINT32_(value) << PMC_CSR2_PID76_Pos)) /* Assigment of value for PID76 in the PMC_CSR2 register */
#define PMC_CSR2_PID77_Pos                    _UINT32_(13)                                         /* (PMC_CSR2) Peripheral Clock 77 Status Position */
#define PMC_CSR2_PID77_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID77_Pos)                /* (PMC_CSR2) Peripheral Clock 77 Status Mask */
#define PMC_CSR2_PID77(value)                 (PMC_CSR2_PID77_Msk & (_UINT32_(value) << PMC_CSR2_PID77_Pos)) /* Assigment of value for PID77 in the PMC_CSR2 register */
#define PMC_CSR2_PID78_Pos                    _UINT32_(14)                                         /* (PMC_CSR2) Peripheral Clock 78 Status Position */
#define PMC_CSR2_PID78_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID78_Pos)                /* (PMC_CSR2) Peripheral Clock 78 Status Mask */
#define PMC_CSR2_PID78(value)                 (PMC_CSR2_PID78_Msk & (_UINT32_(value) << PMC_CSR2_PID78_Pos)) /* Assigment of value for PID78 in the PMC_CSR2 register */
#define PMC_CSR2_PID79_Pos                    _UINT32_(15)                                         /* (PMC_CSR2) Peripheral Clock 79 Status Position */
#define PMC_CSR2_PID79_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID79_Pos)                /* (PMC_CSR2) Peripheral Clock 79 Status Mask */
#define PMC_CSR2_PID79(value)                 (PMC_CSR2_PID79_Msk & (_UINT32_(value) << PMC_CSR2_PID79_Pos)) /* Assigment of value for PID79 in the PMC_CSR2 register */
#define PMC_CSR2_PID80_Pos                    _UINT32_(16)                                         /* (PMC_CSR2) Peripheral Clock 80 Status Position */
#define PMC_CSR2_PID80_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID80_Pos)                /* (PMC_CSR2) Peripheral Clock 80 Status Mask */
#define PMC_CSR2_PID80(value)                 (PMC_CSR2_PID80_Msk & (_UINT32_(value) << PMC_CSR2_PID80_Pos)) /* Assigment of value for PID80 in the PMC_CSR2 register */
#define PMC_CSR2_PID81_Pos                    _UINT32_(17)                                         /* (PMC_CSR2) Peripheral Clock 81 Status Position */
#define PMC_CSR2_PID81_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID81_Pos)                /* (PMC_CSR2) Peripheral Clock 81 Status Mask */
#define PMC_CSR2_PID81(value)                 (PMC_CSR2_PID81_Msk & (_UINT32_(value) << PMC_CSR2_PID81_Pos)) /* Assigment of value for PID81 in the PMC_CSR2 register */
#define PMC_CSR2_PID82_Pos                    _UINT32_(18)                                         /* (PMC_CSR2) Peripheral Clock 82 Status Position */
#define PMC_CSR2_PID82_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID82_Pos)                /* (PMC_CSR2) Peripheral Clock 82 Status Mask */
#define PMC_CSR2_PID82(value)                 (PMC_CSR2_PID82_Msk & (_UINT32_(value) << PMC_CSR2_PID82_Pos)) /* Assigment of value for PID82 in the PMC_CSR2 register */
#define PMC_CSR2_PID83_Pos                    _UINT32_(19)                                         /* (PMC_CSR2) Peripheral Clock 83 Status Position */
#define PMC_CSR2_PID83_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID83_Pos)                /* (PMC_CSR2) Peripheral Clock 83 Status Mask */
#define PMC_CSR2_PID83(value)                 (PMC_CSR2_PID83_Msk & (_UINT32_(value) << PMC_CSR2_PID83_Pos)) /* Assigment of value for PID83 in the PMC_CSR2 register */
#define PMC_CSR2_PID84_Pos                    _UINT32_(20)                                         /* (PMC_CSR2) Peripheral Clock 84 Status Position */
#define PMC_CSR2_PID84_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID84_Pos)                /* (PMC_CSR2) Peripheral Clock 84 Status Mask */
#define PMC_CSR2_PID84(value)                 (PMC_CSR2_PID84_Msk & (_UINT32_(value) << PMC_CSR2_PID84_Pos)) /* Assigment of value for PID84 in the PMC_CSR2 register */
#define PMC_CSR2_PID85_Pos                    _UINT32_(21)                                         /* (PMC_CSR2) Peripheral Clock 85 Status Position */
#define PMC_CSR2_PID85_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID85_Pos)                /* (PMC_CSR2) Peripheral Clock 85 Status Mask */
#define PMC_CSR2_PID85(value)                 (PMC_CSR2_PID85_Msk & (_UINT32_(value) << PMC_CSR2_PID85_Pos)) /* Assigment of value for PID85 in the PMC_CSR2 register */
#define PMC_CSR2_PID86_Pos                    _UINT32_(22)                                         /* (PMC_CSR2) Peripheral Clock 86 Status Position */
#define PMC_CSR2_PID86_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID86_Pos)                /* (PMC_CSR2) Peripheral Clock 86 Status Mask */
#define PMC_CSR2_PID86(value)                 (PMC_CSR2_PID86_Msk & (_UINT32_(value) << PMC_CSR2_PID86_Pos)) /* Assigment of value for PID86 in the PMC_CSR2 register */
#define PMC_CSR2_PID87_Pos                    _UINT32_(23)                                         /* (PMC_CSR2) Peripheral Clock 87 Status Position */
#define PMC_CSR2_PID87_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID87_Pos)                /* (PMC_CSR2) Peripheral Clock 87 Status Mask */
#define PMC_CSR2_PID87(value)                 (PMC_CSR2_PID87_Msk & (_UINT32_(value) << PMC_CSR2_PID87_Pos)) /* Assigment of value for PID87 in the PMC_CSR2 register */
#define PMC_CSR2_PID88_Pos                    _UINT32_(24)                                         /* (PMC_CSR2) Peripheral Clock 88 Status Position */
#define PMC_CSR2_PID88_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID88_Pos)                /* (PMC_CSR2) Peripheral Clock 88 Status Mask */
#define PMC_CSR2_PID88(value)                 (PMC_CSR2_PID88_Msk & (_UINT32_(value) << PMC_CSR2_PID88_Pos)) /* Assigment of value for PID88 in the PMC_CSR2 register */
#define PMC_CSR2_PID89_Pos                    _UINT32_(25)                                         /* (PMC_CSR2) Peripheral Clock 89 Status Position */
#define PMC_CSR2_PID89_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID89_Pos)                /* (PMC_CSR2) Peripheral Clock 89 Status Mask */
#define PMC_CSR2_PID89(value)                 (PMC_CSR2_PID89_Msk & (_UINT32_(value) << PMC_CSR2_PID89_Pos)) /* Assigment of value for PID89 in the PMC_CSR2 register */
#define PMC_CSR2_PID90_Pos                    _UINT32_(26)                                         /* (PMC_CSR2) Peripheral Clock 90 Status Position */
#define PMC_CSR2_PID90_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID90_Pos)                /* (PMC_CSR2) Peripheral Clock 90 Status Mask */
#define PMC_CSR2_PID90(value)                 (PMC_CSR2_PID90_Msk & (_UINT32_(value) << PMC_CSR2_PID90_Pos)) /* Assigment of value for PID90 in the PMC_CSR2 register */
#define PMC_CSR2_PID91_Pos                    _UINT32_(27)                                         /* (PMC_CSR2) Peripheral Clock 91 Status Position */
#define PMC_CSR2_PID91_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID91_Pos)                /* (PMC_CSR2) Peripheral Clock 91 Status Mask */
#define PMC_CSR2_PID91(value)                 (PMC_CSR2_PID91_Msk & (_UINT32_(value) << PMC_CSR2_PID91_Pos)) /* Assigment of value for PID91 in the PMC_CSR2 register */
#define PMC_CSR2_PID92_Pos                    _UINT32_(28)                                         /* (PMC_CSR2) Peripheral Clock 92 Status Position */
#define PMC_CSR2_PID92_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID92_Pos)                /* (PMC_CSR2) Peripheral Clock 92 Status Mask */
#define PMC_CSR2_PID92(value)                 (PMC_CSR2_PID92_Msk & (_UINT32_(value) << PMC_CSR2_PID92_Pos)) /* Assigment of value for PID92 in the PMC_CSR2 register */
#define PMC_CSR2_PID93_Pos                    _UINT32_(29)                                         /* (PMC_CSR2) Peripheral Clock 93 Status Position */
#define PMC_CSR2_PID93_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID93_Pos)                /* (PMC_CSR2) Peripheral Clock 93 Status Mask */
#define PMC_CSR2_PID93(value)                 (PMC_CSR2_PID93_Msk & (_UINT32_(value) << PMC_CSR2_PID93_Pos)) /* Assigment of value for PID93 in the PMC_CSR2 register */
#define PMC_CSR2_PID94_Pos                    _UINT32_(30)                                         /* (PMC_CSR2) Peripheral Clock 94 Status Position */
#define PMC_CSR2_PID94_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID94_Pos)                /* (PMC_CSR2) Peripheral Clock 94 Status Mask */
#define PMC_CSR2_PID94(value)                 (PMC_CSR2_PID94_Msk & (_UINT32_(value) << PMC_CSR2_PID94_Pos)) /* Assigment of value for PID94 in the PMC_CSR2 register */
#define PMC_CSR2_PID95_Pos                    _UINT32_(31)                                         /* (PMC_CSR2) Peripheral Clock 95 Status Position */
#define PMC_CSR2_PID95_Msk                    (_UINT32_(0x1) << PMC_CSR2_PID95_Pos)                /* (PMC_CSR2) Peripheral Clock 95 Status Mask */
#define PMC_CSR2_PID95(value)                 (PMC_CSR2_PID95_Msk & (_UINT32_(value) << PMC_CSR2_PID95_Pos)) /* Assigment of value for PID95 in the PMC_CSR2 register */
#define PMC_CSR2_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PMC_CSR2) Register Mask  */

#define PMC_CSR2_PID_Pos                      _UINT32_(0)                                          /* (PMC_CSR2 Position) Peripheral Clock 95 Status */
#define PMC_CSR2_PID_Msk                      (_UINT32_(0xFFFFFFFF) << PMC_CSR2_PID_Pos)           /* (PMC_CSR2 Mask) PID */
#define PMC_CSR2_PID(value)                   (PMC_CSR2_PID_Msk & (_UINT32_(value) << PMC_CSR2_PID_Pos)) 

/* -------- PMC_CSR3 : (PMC Offset: 0x17C) ( R/ 32) Peripheral Clock Status Register 3 -------- */
#define PMC_CSR3_PID96_Pos                    _UINT32_(0)                                          /* (PMC_CSR3) Peripheral Clock 96 Status Position */
#define PMC_CSR3_PID96_Msk                    (_UINT32_(0x1) << PMC_CSR3_PID96_Pos)                /* (PMC_CSR3) Peripheral Clock 96 Status Mask */
#define PMC_CSR3_PID96(value)                 (PMC_CSR3_PID96_Msk & (_UINT32_(value) << PMC_CSR3_PID96_Pos)) /* Assigment of value for PID96 in the PMC_CSR3 register */
#define PMC_CSR3_PID97_Pos                    _UINT32_(1)                                          /* (PMC_CSR3) Peripheral Clock 97 Status Position */
#define PMC_CSR3_PID97_Msk                    (_UINT32_(0x1) << PMC_CSR3_PID97_Pos)                /* (PMC_CSR3) Peripheral Clock 97 Status Mask */
#define PMC_CSR3_PID97(value)                 (PMC_CSR3_PID97_Msk & (_UINT32_(value) << PMC_CSR3_PID97_Pos)) /* Assigment of value for PID97 in the PMC_CSR3 register */
#define PMC_CSR3_PID98_Pos                    _UINT32_(2)                                          /* (PMC_CSR3) Peripheral Clock 98 Status Position */
#define PMC_CSR3_PID98_Msk                    (_UINT32_(0x1) << PMC_CSR3_PID98_Pos)                /* (PMC_CSR3) Peripheral Clock 98 Status Mask */
#define PMC_CSR3_PID98(value)                 (PMC_CSR3_PID98_Msk & (_UINT32_(value) << PMC_CSR3_PID98_Pos)) /* Assigment of value for PID98 in the PMC_CSR3 register */
#define PMC_CSR3_PID99_Pos                    _UINT32_(3)                                          /* (PMC_CSR3) Peripheral Clock 99 Status Position */
#define PMC_CSR3_PID99_Msk                    (_UINT32_(0x1) << PMC_CSR3_PID99_Pos)                /* (PMC_CSR3) Peripheral Clock 99 Status Mask */
#define PMC_CSR3_PID99(value)                 (PMC_CSR3_PID99_Msk & (_UINT32_(value) << PMC_CSR3_PID99_Pos)) /* Assigment of value for PID99 in the PMC_CSR3 register */
#define PMC_CSR3_PID100_Pos                   _UINT32_(4)                                          /* (PMC_CSR3) Peripheral Clock 100 Status Position */
#define PMC_CSR3_PID100_Msk                   (_UINT32_(0x1) << PMC_CSR3_PID100_Pos)               /* (PMC_CSR3) Peripheral Clock 100 Status Mask */
#define PMC_CSR3_PID100(value)                (PMC_CSR3_PID100_Msk & (_UINT32_(value) << PMC_CSR3_PID100_Pos)) /* Assigment of value for PID100 in the PMC_CSR3 register */
#define PMC_CSR3_PID101_Pos                   _UINT32_(5)                                          /* (PMC_CSR3) Peripheral Clock 101 Status Position */
#define PMC_CSR3_PID101_Msk                   (_UINT32_(0x1) << PMC_CSR3_PID101_Pos)               /* (PMC_CSR3) Peripheral Clock 101 Status Mask */
#define PMC_CSR3_PID101(value)                (PMC_CSR3_PID101_Msk & (_UINT32_(value) << PMC_CSR3_PID101_Pos)) /* Assigment of value for PID101 in the PMC_CSR3 register */
#define PMC_CSR3_PID102_Pos                   _UINT32_(6)                                          /* (PMC_CSR3) Peripheral Clock 102 Status Position */
#define PMC_CSR3_PID102_Msk                   (_UINT32_(0x1) << PMC_CSR3_PID102_Pos)               /* (PMC_CSR3) Peripheral Clock 102 Status Mask */
#define PMC_CSR3_PID102(value)                (PMC_CSR3_PID102_Msk & (_UINT32_(value) << PMC_CSR3_PID102_Pos)) /* Assigment of value for PID102 in the PMC_CSR3 register */
#define PMC_CSR3_PID103_Pos                   _UINT32_(7)                                          /* (PMC_CSR3) Peripheral Clock 103 Status Position */
#define PMC_CSR3_PID103_Msk                   (_UINT32_(0x1) << PMC_CSR3_PID103_Pos)               /* (PMC_CSR3) Peripheral Clock 103 Status Mask */
#define PMC_CSR3_PID103(value)                (PMC_CSR3_PID103_Msk & (_UINT32_(value) << PMC_CSR3_PID103_Pos)) /* Assigment of value for PID103 in the PMC_CSR3 register */
#define PMC_CSR3_PID104_Pos                   _UINT32_(8)                                          /* (PMC_CSR3) Peripheral Clock 104 Status Position */
#define PMC_CSR3_PID104_Msk                   (_UINT32_(0x1) << PMC_CSR3_PID104_Pos)               /* (PMC_CSR3) Peripheral Clock 104 Status Mask */
#define PMC_CSR3_PID104(value)                (PMC_CSR3_PID104_Msk & (_UINT32_(value) << PMC_CSR3_PID104_Pos)) /* Assigment of value for PID104 in the PMC_CSR3 register */
#define PMC_CSR3_PID105_Pos                   _UINT32_(9)                                          /* (PMC_CSR3) Peripheral Clock 105 Status Position */
#define PMC_CSR3_PID105_Msk                   (_UINT32_(0x1) << PMC_CSR3_PID105_Pos)               /* (PMC_CSR3) Peripheral Clock 105 Status Mask */
#define PMC_CSR3_PID105(value)                (PMC_CSR3_PID105_Msk & (_UINT32_(value) << PMC_CSR3_PID105_Pos)) /* Assigment of value for PID105 in the PMC_CSR3 register */
#define PMC_CSR3_PID106_Pos                   _UINT32_(10)                                         /* (PMC_CSR3) Peripheral Clock 106 Status Position */
#define PMC_CSR3_PID106_Msk                   (_UINT32_(0x1) << PMC_CSR3_PID106_Pos)               /* (PMC_CSR3) Peripheral Clock 106 Status Mask */
#define PMC_CSR3_PID106(value)                (PMC_CSR3_PID106_Msk & (_UINT32_(value) << PMC_CSR3_PID106_Pos)) /* Assigment of value for PID106 in the PMC_CSR3 register */
#define PMC_CSR3_PID107_Pos                   _UINT32_(11)                                         /* (PMC_CSR3) Peripheral Clock 107 Status Position */
#define PMC_CSR3_PID107_Msk                   (_UINT32_(0x1) << PMC_CSR3_PID107_Pos)               /* (PMC_CSR3) Peripheral Clock 107 Status Mask */
#define PMC_CSR3_PID107(value)                (PMC_CSR3_PID107_Msk & (_UINT32_(value) << PMC_CSR3_PID107_Pos)) /* Assigment of value for PID107 in the PMC_CSR3 register */
#define PMC_CSR3_PID108_Pos                   _UINT32_(12)                                         /* (PMC_CSR3) Peripheral Clock 108 Status Position */
#define PMC_CSR3_PID108_Msk                   (_UINT32_(0x1) << PMC_CSR3_PID108_Pos)               /* (PMC_CSR3) Peripheral Clock 108 Status Mask */
#define PMC_CSR3_PID108(value)                (PMC_CSR3_PID108_Msk & (_UINT32_(value) << PMC_CSR3_PID108_Pos)) /* Assigment of value for PID108 in the PMC_CSR3 register */
#define PMC_CSR3_PID109_Pos                   _UINT32_(13)                                         /* (PMC_CSR3) Peripheral Clock 109 Status Position */
#define PMC_CSR3_PID109_Msk                   (_UINT32_(0x1) << PMC_CSR3_PID109_Pos)               /* (PMC_CSR3) Peripheral Clock 109 Status Mask */
#define PMC_CSR3_PID109(value)                (PMC_CSR3_PID109_Msk & (_UINT32_(value) << PMC_CSR3_PID109_Pos)) /* Assigment of value for PID109 in the PMC_CSR3 register */
#define PMC_CSR3_PID110_Pos                   _UINT32_(14)                                         /* (PMC_CSR3) Peripheral Clock 110 Status Position */
#define PMC_CSR3_PID110_Msk                   (_UINT32_(0x1) << PMC_CSR3_PID110_Pos)               /* (PMC_CSR3) Peripheral Clock 110 Status Mask */
#define PMC_CSR3_PID110(value)                (PMC_CSR3_PID110_Msk & (_UINT32_(value) << PMC_CSR3_PID110_Pos)) /* Assigment of value for PID110 in the PMC_CSR3 register */
#define PMC_CSR3_PID111_Pos                   _UINT32_(15)                                         /* (PMC_CSR3) Peripheral Clock 111 Status Position */
#define PMC_CSR3_PID111_Msk                   (_UINT32_(0x1) << PMC_CSR3_PID111_Pos)               /* (PMC_CSR3) Peripheral Clock 111 Status Mask */
#define PMC_CSR3_PID111(value)                (PMC_CSR3_PID111_Msk & (_UINT32_(value) << PMC_CSR3_PID111_Pos)) /* Assigment of value for PID111 in the PMC_CSR3 register */
#define PMC_CSR3_PID112_Pos                   _UINT32_(16)                                         /* (PMC_CSR3) Peripheral Clock 112 Status Position */
#define PMC_CSR3_PID112_Msk                   (_UINT32_(0x1) << PMC_CSR3_PID112_Pos)               /* (PMC_CSR3) Peripheral Clock 112 Status Mask */
#define PMC_CSR3_PID112(value)                (PMC_CSR3_PID112_Msk & (_UINT32_(value) << PMC_CSR3_PID112_Pos)) /* Assigment of value for PID112 in the PMC_CSR3 register */
#define PMC_CSR3_PID113_Pos                   _UINT32_(17)                                         /* (PMC_CSR3) Peripheral Clock 113 Status Position */
#define PMC_CSR3_PID113_Msk                   (_UINT32_(0x1) << PMC_CSR3_PID113_Pos)               /* (PMC_CSR3) Peripheral Clock 113 Status Mask */
#define PMC_CSR3_PID113(value)                (PMC_CSR3_PID113_Msk & (_UINT32_(value) << PMC_CSR3_PID113_Pos)) /* Assigment of value for PID113 in the PMC_CSR3 register */
#define PMC_CSR3_PID114_Pos                   _UINT32_(18)                                         /* (PMC_CSR3) Peripheral Clock 114 Status Position */
#define PMC_CSR3_PID114_Msk                   (_UINT32_(0x1) << PMC_CSR3_PID114_Pos)               /* (PMC_CSR3) Peripheral Clock 114 Status Mask */
#define PMC_CSR3_PID114(value)                (PMC_CSR3_PID114_Msk & (_UINT32_(value) << PMC_CSR3_PID114_Pos)) /* Assigment of value for PID114 in the PMC_CSR3 register */
#define PMC_CSR3_PID115_Pos                   _UINT32_(19)                                         /* (PMC_CSR3) Peripheral Clock 115 Status Position */
#define PMC_CSR3_PID115_Msk                   (_UINT32_(0x1) << PMC_CSR3_PID115_Pos)               /* (PMC_CSR3) Peripheral Clock 115 Status Mask */
#define PMC_CSR3_PID115(value)                (PMC_CSR3_PID115_Msk & (_UINT32_(value) << PMC_CSR3_PID115_Pos)) /* Assigment of value for PID115 in the PMC_CSR3 register */
#define PMC_CSR3_PID116_Pos                   _UINT32_(20)                                         /* (PMC_CSR3) Peripheral Clock 116 Status Position */
#define PMC_CSR3_PID116_Msk                   (_UINT32_(0x1) << PMC_CSR3_PID116_Pos)               /* (PMC_CSR3) Peripheral Clock 116 Status Mask */
#define PMC_CSR3_PID116(value)                (PMC_CSR3_PID116_Msk & (_UINT32_(value) << PMC_CSR3_PID116_Pos)) /* Assigment of value for PID116 in the PMC_CSR3 register */
#define PMC_CSR3_PID117_Pos                   _UINT32_(21)                                         /* (PMC_CSR3) Peripheral Clock 117 Status Position */
#define PMC_CSR3_PID117_Msk                   (_UINT32_(0x1) << PMC_CSR3_PID117_Pos)               /* (PMC_CSR3) Peripheral Clock 117 Status Mask */
#define PMC_CSR3_PID117(value)                (PMC_CSR3_PID117_Msk & (_UINT32_(value) << PMC_CSR3_PID117_Pos)) /* Assigment of value for PID117 in the PMC_CSR3 register */
#define PMC_CSR3_PID118_Pos                   _UINT32_(22)                                         /* (PMC_CSR3) Peripheral Clock 118 Status Position */
#define PMC_CSR3_PID118_Msk                   (_UINT32_(0x1) << PMC_CSR3_PID118_Pos)               /* (PMC_CSR3) Peripheral Clock 118 Status Mask */
#define PMC_CSR3_PID118(value)                (PMC_CSR3_PID118_Msk & (_UINT32_(value) << PMC_CSR3_PID118_Pos)) /* Assigment of value for PID118 in the PMC_CSR3 register */
#define PMC_CSR3_PID119_Pos                   _UINT32_(23)                                         /* (PMC_CSR3) Peripheral Clock 119 Status Position */
#define PMC_CSR3_PID119_Msk                   (_UINT32_(0x1) << PMC_CSR3_PID119_Pos)               /* (PMC_CSR3) Peripheral Clock 119 Status Mask */
#define PMC_CSR3_PID119(value)                (PMC_CSR3_PID119_Msk & (_UINT32_(value) << PMC_CSR3_PID119_Pos)) /* Assigment of value for PID119 in the PMC_CSR3 register */
#define PMC_CSR3_PID120_Pos                   _UINT32_(24)                                         /* (PMC_CSR3) Peripheral Clock 120 Status Position */
#define PMC_CSR3_PID120_Msk                   (_UINT32_(0x1) << PMC_CSR3_PID120_Pos)               /* (PMC_CSR3) Peripheral Clock 120 Status Mask */
#define PMC_CSR3_PID120(value)                (PMC_CSR3_PID120_Msk & (_UINT32_(value) << PMC_CSR3_PID120_Pos)) /* Assigment of value for PID120 in the PMC_CSR3 register */
#define PMC_CSR3_PID121_Pos                   _UINT32_(25)                                         /* (PMC_CSR3) Peripheral Clock 121 Status Position */
#define PMC_CSR3_PID121_Msk                   (_UINT32_(0x1) << PMC_CSR3_PID121_Pos)               /* (PMC_CSR3) Peripheral Clock 121 Status Mask */
#define PMC_CSR3_PID121(value)                (PMC_CSR3_PID121_Msk & (_UINT32_(value) << PMC_CSR3_PID121_Pos)) /* Assigment of value for PID121 in the PMC_CSR3 register */
#define PMC_CSR3_PID122_Pos                   _UINT32_(26)                                         /* (PMC_CSR3) Peripheral Clock 122 Status Position */
#define PMC_CSR3_PID122_Msk                   (_UINT32_(0x1) << PMC_CSR3_PID122_Pos)               /* (PMC_CSR3) Peripheral Clock 122 Status Mask */
#define PMC_CSR3_PID122(value)                (PMC_CSR3_PID122_Msk & (_UINT32_(value) << PMC_CSR3_PID122_Pos)) /* Assigment of value for PID122 in the PMC_CSR3 register */
#define PMC_CSR3_PID123_Pos                   _UINT32_(27)                                         /* (PMC_CSR3) Peripheral Clock 123 Status Position */
#define PMC_CSR3_PID123_Msk                   (_UINT32_(0x1) << PMC_CSR3_PID123_Pos)               /* (PMC_CSR3) Peripheral Clock 123 Status Mask */
#define PMC_CSR3_PID123(value)                (PMC_CSR3_PID123_Msk & (_UINT32_(value) << PMC_CSR3_PID123_Pos)) /* Assigment of value for PID123 in the PMC_CSR3 register */
#define PMC_CSR3_PID124_Pos                   _UINT32_(28)                                         /* (PMC_CSR3) Peripheral Clock 124 Status Position */
#define PMC_CSR3_PID124_Msk                   (_UINT32_(0x1) << PMC_CSR3_PID124_Pos)               /* (PMC_CSR3) Peripheral Clock 124 Status Mask */
#define PMC_CSR3_PID124(value)                (PMC_CSR3_PID124_Msk & (_UINT32_(value) << PMC_CSR3_PID124_Pos)) /* Assigment of value for PID124 in the PMC_CSR3 register */
#define PMC_CSR3_PID125_Pos                   _UINT32_(29)                                         /* (PMC_CSR3) Peripheral Clock 125 Status Position */
#define PMC_CSR3_PID125_Msk                   (_UINT32_(0x1) << PMC_CSR3_PID125_Pos)               /* (PMC_CSR3) Peripheral Clock 125 Status Mask */
#define PMC_CSR3_PID125(value)                (PMC_CSR3_PID125_Msk & (_UINT32_(value) << PMC_CSR3_PID125_Pos)) /* Assigment of value for PID125 in the PMC_CSR3 register */
#define PMC_CSR3_PID126_Pos                   _UINT32_(30)                                         /* (PMC_CSR3) Peripheral Clock 126 Status Position */
#define PMC_CSR3_PID126_Msk                   (_UINT32_(0x1) << PMC_CSR3_PID126_Pos)               /* (PMC_CSR3) Peripheral Clock 126 Status Mask */
#define PMC_CSR3_PID126(value)                (PMC_CSR3_PID126_Msk & (_UINT32_(value) << PMC_CSR3_PID126_Pos)) /* Assigment of value for PID126 in the PMC_CSR3 register */
#define PMC_CSR3_PID127_Pos                   _UINT32_(31)                                         /* (PMC_CSR3) Peripheral Clock 127 Status Position */
#define PMC_CSR3_PID127_Msk                   (_UINT32_(0x1) << PMC_CSR3_PID127_Pos)               /* (PMC_CSR3) Peripheral Clock 127 Status Mask */
#define PMC_CSR3_PID127(value)                (PMC_CSR3_PID127_Msk & (_UINT32_(value) << PMC_CSR3_PID127_Pos)) /* Assigment of value for PID127 in the PMC_CSR3 register */
#define PMC_CSR3_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PMC_CSR3) Register Mask  */

#define PMC_CSR3_PID_Pos                      _UINT32_(0)                                          /* (PMC_CSR3 Position) Peripheral Clock x27 Status */
#define PMC_CSR3_PID_Msk                      (_UINT32_(0xFFFFFFFF) << PMC_CSR3_PID_Pos)           /* (PMC_CSR3 Mask) PID */
#define PMC_CSR3_PID(value)                   (PMC_CSR3_PID_Msk & (_UINT32_(value) << PMC_CSR3_PID_Pos)) 

/* -------- PMC_GCSR0 : (PMC Offset: 0x190) ( R/ 32) Generic Clock Status Register 0 -------- */
#define PMC_GCSR0_GPID0_Pos                   _UINT32_(0)                                          /* (PMC_GCSR0) Generic Clock 0 Status Position */
#define PMC_GCSR0_GPID0_Msk                   (_UINT32_(0x1) << PMC_GCSR0_GPID0_Pos)               /* (PMC_GCSR0) Generic Clock 0 Status Mask */
#define PMC_GCSR0_GPID0(value)                (PMC_GCSR0_GPID0_Msk & (_UINT32_(value) << PMC_GCSR0_GPID0_Pos)) /* Assigment of value for GPID0 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID1_Pos                   _UINT32_(1)                                          /* (PMC_GCSR0) Generic Clock 1 Status Position */
#define PMC_GCSR0_GPID1_Msk                   (_UINT32_(0x1) << PMC_GCSR0_GPID1_Pos)               /* (PMC_GCSR0) Generic Clock 1 Status Mask */
#define PMC_GCSR0_GPID1(value)                (PMC_GCSR0_GPID1_Msk & (_UINT32_(value) << PMC_GCSR0_GPID1_Pos)) /* Assigment of value for GPID1 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID2_Pos                   _UINT32_(2)                                          /* (PMC_GCSR0) Generic Clock 2 Status Position */
#define PMC_GCSR0_GPID2_Msk                   (_UINT32_(0x1) << PMC_GCSR0_GPID2_Pos)               /* (PMC_GCSR0) Generic Clock 2 Status Mask */
#define PMC_GCSR0_GPID2(value)                (PMC_GCSR0_GPID2_Msk & (_UINT32_(value) << PMC_GCSR0_GPID2_Pos)) /* Assigment of value for GPID2 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID3_Pos                   _UINT32_(3)                                          /* (PMC_GCSR0) Generic Clock 3 Status Position */
#define PMC_GCSR0_GPID3_Msk                   (_UINT32_(0x1) << PMC_GCSR0_GPID3_Pos)               /* (PMC_GCSR0) Generic Clock 3 Status Mask */
#define PMC_GCSR0_GPID3(value)                (PMC_GCSR0_GPID3_Msk & (_UINT32_(value) << PMC_GCSR0_GPID3_Pos)) /* Assigment of value for GPID3 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID4_Pos                   _UINT32_(4)                                          /* (PMC_GCSR0) Generic Clock 4 Status Position */
#define PMC_GCSR0_GPID4_Msk                   (_UINT32_(0x1) << PMC_GCSR0_GPID4_Pos)               /* (PMC_GCSR0) Generic Clock 4 Status Mask */
#define PMC_GCSR0_GPID4(value)                (PMC_GCSR0_GPID4_Msk & (_UINT32_(value) << PMC_GCSR0_GPID4_Pos)) /* Assigment of value for GPID4 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID5_Pos                   _UINT32_(5)                                          /* (PMC_GCSR0) Generic Clock 5 Status Position */
#define PMC_GCSR0_GPID5_Msk                   (_UINT32_(0x1) << PMC_GCSR0_GPID5_Pos)               /* (PMC_GCSR0) Generic Clock 5 Status Mask */
#define PMC_GCSR0_GPID5(value)                (PMC_GCSR0_GPID5_Msk & (_UINT32_(value) << PMC_GCSR0_GPID5_Pos)) /* Assigment of value for GPID5 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID6_Pos                   _UINT32_(6)                                          /* (PMC_GCSR0) Generic Clock 6 Status Position */
#define PMC_GCSR0_GPID6_Msk                   (_UINT32_(0x1) << PMC_GCSR0_GPID6_Pos)               /* (PMC_GCSR0) Generic Clock 6 Status Mask */
#define PMC_GCSR0_GPID6(value)                (PMC_GCSR0_GPID6_Msk & (_UINT32_(value) << PMC_GCSR0_GPID6_Pos)) /* Assigment of value for GPID6 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID7_Pos                   _UINT32_(7)                                          /* (PMC_GCSR0) Generic Clock 7 Status Position */
#define PMC_GCSR0_GPID7_Msk                   (_UINT32_(0x1) << PMC_GCSR0_GPID7_Pos)               /* (PMC_GCSR0) Generic Clock 7 Status Mask */
#define PMC_GCSR0_GPID7(value)                (PMC_GCSR0_GPID7_Msk & (_UINT32_(value) << PMC_GCSR0_GPID7_Pos)) /* Assigment of value for GPID7 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID8_Pos                   _UINT32_(8)                                          /* (PMC_GCSR0) Generic Clock 8 Status Position */
#define PMC_GCSR0_GPID8_Msk                   (_UINT32_(0x1) << PMC_GCSR0_GPID8_Pos)               /* (PMC_GCSR0) Generic Clock 8 Status Mask */
#define PMC_GCSR0_GPID8(value)                (PMC_GCSR0_GPID8_Msk & (_UINT32_(value) << PMC_GCSR0_GPID8_Pos)) /* Assigment of value for GPID8 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID9_Pos                   _UINT32_(9)                                          /* (PMC_GCSR0) Generic Clock 9 Status Position */
#define PMC_GCSR0_GPID9_Msk                   (_UINT32_(0x1) << PMC_GCSR0_GPID9_Pos)               /* (PMC_GCSR0) Generic Clock 9 Status Mask */
#define PMC_GCSR0_GPID9(value)                (PMC_GCSR0_GPID9_Msk & (_UINT32_(value) << PMC_GCSR0_GPID9_Pos)) /* Assigment of value for GPID9 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID10_Pos                  _UINT32_(10)                                         /* (PMC_GCSR0) Generic Clock 10 Status Position */
#define PMC_GCSR0_GPID10_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID10_Pos)              /* (PMC_GCSR0) Generic Clock 10 Status Mask */
#define PMC_GCSR0_GPID10(value)               (PMC_GCSR0_GPID10_Msk & (_UINT32_(value) << PMC_GCSR0_GPID10_Pos)) /* Assigment of value for GPID10 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID11_Pos                  _UINT32_(11)                                         /* (PMC_GCSR0) Generic Clock 11 Status Position */
#define PMC_GCSR0_GPID11_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID11_Pos)              /* (PMC_GCSR0) Generic Clock 11 Status Mask */
#define PMC_GCSR0_GPID11(value)               (PMC_GCSR0_GPID11_Msk & (_UINT32_(value) << PMC_GCSR0_GPID11_Pos)) /* Assigment of value for GPID11 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID12_Pos                  _UINT32_(12)                                         /* (PMC_GCSR0) Generic Clock 12 Status Position */
#define PMC_GCSR0_GPID12_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID12_Pos)              /* (PMC_GCSR0) Generic Clock 12 Status Mask */
#define PMC_GCSR0_GPID12(value)               (PMC_GCSR0_GPID12_Msk & (_UINT32_(value) << PMC_GCSR0_GPID12_Pos)) /* Assigment of value for GPID12 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID13_Pos                  _UINT32_(13)                                         /* (PMC_GCSR0) Generic Clock 13 Status Position */
#define PMC_GCSR0_GPID13_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID13_Pos)              /* (PMC_GCSR0) Generic Clock 13 Status Mask */
#define PMC_GCSR0_GPID13(value)               (PMC_GCSR0_GPID13_Msk & (_UINT32_(value) << PMC_GCSR0_GPID13_Pos)) /* Assigment of value for GPID13 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID14_Pos                  _UINT32_(14)                                         /* (PMC_GCSR0) Generic Clock 14 Status Position */
#define PMC_GCSR0_GPID14_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID14_Pos)              /* (PMC_GCSR0) Generic Clock 14 Status Mask */
#define PMC_GCSR0_GPID14(value)               (PMC_GCSR0_GPID14_Msk & (_UINT32_(value) << PMC_GCSR0_GPID14_Pos)) /* Assigment of value for GPID14 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID15_Pos                  _UINT32_(15)                                         /* (PMC_GCSR0) Generic Clock 15 Status Position */
#define PMC_GCSR0_GPID15_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID15_Pos)              /* (PMC_GCSR0) Generic Clock 15 Status Mask */
#define PMC_GCSR0_GPID15(value)               (PMC_GCSR0_GPID15_Msk & (_UINT32_(value) << PMC_GCSR0_GPID15_Pos)) /* Assigment of value for GPID15 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID16_Pos                  _UINT32_(16)                                         /* (PMC_GCSR0) Generic Clock 16 Status Position */
#define PMC_GCSR0_GPID16_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID16_Pos)              /* (PMC_GCSR0) Generic Clock 16 Status Mask */
#define PMC_GCSR0_GPID16(value)               (PMC_GCSR0_GPID16_Msk & (_UINT32_(value) << PMC_GCSR0_GPID16_Pos)) /* Assigment of value for GPID16 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID17_Pos                  _UINT32_(17)                                         /* (PMC_GCSR0) Generic Clock 17 Status Position */
#define PMC_GCSR0_GPID17_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID17_Pos)              /* (PMC_GCSR0) Generic Clock 17 Status Mask */
#define PMC_GCSR0_GPID17(value)               (PMC_GCSR0_GPID17_Msk & (_UINT32_(value) << PMC_GCSR0_GPID17_Pos)) /* Assigment of value for GPID17 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID18_Pos                  _UINT32_(18)                                         /* (PMC_GCSR0) Generic Clock 18 Status Position */
#define PMC_GCSR0_GPID18_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID18_Pos)              /* (PMC_GCSR0) Generic Clock 18 Status Mask */
#define PMC_GCSR0_GPID18(value)               (PMC_GCSR0_GPID18_Msk & (_UINT32_(value) << PMC_GCSR0_GPID18_Pos)) /* Assigment of value for GPID18 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID19_Pos                  _UINT32_(19)                                         /* (PMC_GCSR0) Generic Clock 19 Status Position */
#define PMC_GCSR0_GPID19_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID19_Pos)              /* (PMC_GCSR0) Generic Clock 19 Status Mask */
#define PMC_GCSR0_GPID19(value)               (PMC_GCSR0_GPID19_Msk & (_UINT32_(value) << PMC_GCSR0_GPID19_Pos)) /* Assigment of value for GPID19 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID20_Pos                  _UINT32_(20)                                         /* (PMC_GCSR0) Generic Clock 20 Status Position */
#define PMC_GCSR0_GPID20_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID20_Pos)              /* (PMC_GCSR0) Generic Clock 20 Status Mask */
#define PMC_GCSR0_GPID20(value)               (PMC_GCSR0_GPID20_Msk & (_UINT32_(value) << PMC_GCSR0_GPID20_Pos)) /* Assigment of value for GPID20 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID21_Pos                  _UINT32_(21)                                         /* (PMC_GCSR0) Generic Clock 21 Status Position */
#define PMC_GCSR0_GPID21_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID21_Pos)              /* (PMC_GCSR0) Generic Clock 21 Status Mask */
#define PMC_GCSR0_GPID21(value)               (PMC_GCSR0_GPID21_Msk & (_UINT32_(value) << PMC_GCSR0_GPID21_Pos)) /* Assigment of value for GPID21 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID22_Pos                  _UINT32_(22)                                         /* (PMC_GCSR0) Generic Clock 22 Status Position */
#define PMC_GCSR0_GPID22_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID22_Pos)              /* (PMC_GCSR0) Generic Clock 22 Status Mask */
#define PMC_GCSR0_GPID22(value)               (PMC_GCSR0_GPID22_Msk & (_UINT32_(value) << PMC_GCSR0_GPID22_Pos)) /* Assigment of value for GPID22 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID23_Pos                  _UINT32_(23)                                         /* (PMC_GCSR0) Generic Clock 23 Status Position */
#define PMC_GCSR0_GPID23_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID23_Pos)              /* (PMC_GCSR0) Generic Clock 23 Status Mask */
#define PMC_GCSR0_GPID23(value)               (PMC_GCSR0_GPID23_Msk & (_UINT32_(value) << PMC_GCSR0_GPID23_Pos)) /* Assigment of value for GPID23 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID24_Pos                  _UINT32_(24)                                         /* (PMC_GCSR0) Generic Clock 24 Status Position */
#define PMC_GCSR0_GPID24_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID24_Pos)              /* (PMC_GCSR0) Generic Clock 24 Status Mask */
#define PMC_GCSR0_GPID24(value)               (PMC_GCSR0_GPID24_Msk & (_UINT32_(value) << PMC_GCSR0_GPID24_Pos)) /* Assigment of value for GPID24 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID25_Pos                  _UINT32_(25)                                         /* (PMC_GCSR0) Generic Clock 25 Status Position */
#define PMC_GCSR0_GPID25_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID25_Pos)              /* (PMC_GCSR0) Generic Clock 25 Status Mask */
#define PMC_GCSR0_GPID25(value)               (PMC_GCSR0_GPID25_Msk & (_UINT32_(value) << PMC_GCSR0_GPID25_Pos)) /* Assigment of value for GPID25 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID26_Pos                  _UINT32_(26)                                         /* (PMC_GCSR0) Generic Clock 26 Status Position */
#define PMC_GCSR0_GPID26_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID26_Pos)              /* (PMC_GCSR0) Generic Clock 26 Status Mask */
#define PMC_GCSR0_GPID26(value)               (PMC_GCSR0_GPID26_Msk & (_UINT32_(value) << PMC_GCSR0_GPID26_Pos)) /* Assigment of value for GPID26 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID27_Pos                  _UINT32_(27)                                         /* (PMC_GCSR0) Generic Clock 27 Status Position */
#define PMC_GCSR0_GPID27_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID27_Pos)              /* (PMC_GCSR0) Generic Clock 27 Status Mask */
#define PMC_GCSR0_GPID27(value)               (PMC_GCSR0_GPID27_Msk & (_UINT32_(value) << PMC_GCSR0_GPID27_Pos)) /* Assigment of value for GPID27 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID28_Pos                  _UINT32_(28)                                         /* (PMC_GCSR0) Generic Clock 28 Status Position */
#define PMC_GCSR0_GPID28_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID28_Pos)              /* (PMC_GCSR0) Generic Clock 28 Status Mask */
#define PMC_GCSR0_GPID28(value)               (PMC_GCSR0_GPID28_Msk & (_UINT32_(value) << PMC_GCSR0_GPID28_Pos)) /* Assigment of value for GPID28 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID29_Pos                  _UINT32_(29)                                         /* (PMC_GCSR0) Generic Clock 29 Status Position */
#define PMC_GCSR0_GPID29_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID29_Pos)              /* (PMC_GCSR0) Generic Clock 29 Status Mask */
#define PMC_GCSR0_GPID29(value)               (PMC_GCSR0_GPID29_Msk & (_UINT32_(value) << PMC_GCSR0_GPID29_Pos)) /* Assigment of value for GPID29 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID30_Pos                  _UINT32_(30)                                         /* (PMC_GCSR0) Generic Clock 30 Status Position */
#define PMC_GCSR0_GPID30_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID30_Pos)              /* (PMC_GCSR0) Generic Clock 30 Status Mask */
#define PMC_GCSR0_GPID30(value)               (PMC_GCSR0_GPID30_Msk & (_UINT32_(value) << PMC_GCSR0_GPID30_Pos)) /* Assigment of value for GPID30 in the PMC_GCSR0 register */
#define PMC_GCSR0_GPID31_Pos                  _UINT32_(31)                                         /* (PMC_GCSR0) Generic Clock 31 Status Position */
#define PMC_GCSR0_GPID31_Msk                  (_UINT32_(0x1) << PMC_GCSR0_GPID31_Pos)              /* (PMC_GCSR0) Generic Clock 31 Status Mask */
#define PMC_GCSR0_GPID31(value)               (PMC_GCSR0_GPID31_Msk & (_UINT32_(value) << PMC_GCSR0_GPID31_Pos)) /* Assigment of value for GPID31 in the PMC_GCSR0 register */
#define PMC_GCSR0_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (PMC_GCSR0) Register Mask  */

#define PMC_GCSR0_GPID_Pos                    _UINT32_(0)                                          /* (PMC_GCSR0 Position) Generic Clock 3x Status */
#define PMC_GCSR0_GPID_Msk                    (_UINT32_(0xFFFFFFFF) << PMC_GCSR0_GPID_Pos)         /* (PMC_GCSR0 Mask) GPID */
#define PMC_GCSR0_GPID(value)                 (PMC_GCSR0_GPID_Msk & (_UINT32_(value) << PMC_GCSR0_GPID_Pos)) 

/* -------- PMC_GCSR1 : (PMC Offset: 0x194) ( R/ 32) Generic Clock Status Register 1 -------- */
#define PMC_GCSR1_GPID32_Pos                  _UINT32_(0)                                          /* (PMC_GCSR1) Generic Clock 32 Status Position */
#define PMC_GCSR1_GPID32_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID32_Pos)              /* (PMC_GCSR1) Generic Clock 32 Status Mask */
#define PMC_GCSR1_GPID32(value)               (PMC_GCSR1_GPID32_Msk & (_UINT32_(value) << PMC_GCSR1_GPID32_Pos)) /* Assigment of value for GPID32 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID33_Pos                  _UINT32_(1)                                          /* (PMC_GCSR1) Generic Clock 33 Status Position */
#define PMC_GCSR1_GPID33_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID33_Pos)              /* (PMC_GCSR1) Generic Clock 33 Status Mask */
#define PMC_GCSR1_GPID33(value)               (PMC_GCSR1_GPID33_Msk & (_UINT32_(value) << PMC_GCSR1_GPID33_Pos)) /* Assigment of value for GPID33 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID34_Pos                  _UINT32_(2)                                          /* (PMC_GCSR1) Generic Clock 34 Status Position */
#define PMC_GCSR1_GPID34_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID34_Pos)              /* (PMC_GCSR1) Generic Clock 34 Status Mask */
#define PMC_GCSR1_GPID34(value)               (PMC_GCSR1_GPID34_Msk & (_UINT32_(value) << PMC_GCSR1_GPID34_Pos)) /* Assigment of value for GPID34 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID35_Pos                  _UINT32_(3)                                          /* (PMC_GCSR1) Generic Clock 35 Status Position */
#define PMC_GCSR1_GPID35_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID35_Pos)              /* (PMC_GCSR1) Generic Clock 35 Status Mask */
#define PMC_GCSR1_GPID35(value)               (PMC_GCSR1_GPID35_Msk & (_UINT32_(value) << PMC_GCSR1_GPID35_Pos)) /* Assigment of value for GPID35 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID36_Pos                  _UINT32_(4)                                          /* (PMC_GCSR1) Generic Clock 36 Status Position */
#define PMC_GCSR1_GPID36_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID36_Pos)              /* (PMC_GCSR1) Generic Clock 36 Status Mask */
#define PMC_GCSR1_GPID36(value)               (PMC_GCSR1_GPID36_Msk & (_UINT32_(value) << PMC_GCSR1_GPID36_Pos)) /* Assigment of value for GPID36 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID37_Pos                  _UINT32_(5)                                          /* (PMC_GCSR1) Generic Clock 37 Status Position */
#define PMC_GCSR1_GPID37_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID37_Pos)              /* (PMC_GCSR1) Generic Clock 37 Status Mask */
#define PMC_GCSR1_GPID37(value)               (PMC_GCSR1_GPID37_Msk & (_UINT32_(value) << PMC_GCSR1_GPID37_Pos)) /* Assigment of value for GPID37 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID38_Pos                  _UINT32_(6)                                          /* (PMC_GCSR1) Generic Clock 38 Status Position */
#define PMC_GCSR1_GPID38_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID38_Pos)              /* (PMC_GCSR1) Generic Clock 38 Status Mask */
#define PMC_GCSR1_GPID38(value)               (PMC_GCSR1_GPID38_Msk & (_UINT32_(value) << PMC_GCSR1_GPID38_Pos)) /* Assigment of value for GPID38 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID39_Pos                  _UINT32_(7)                                          /* (PMC_GCSR1) Generic Clock 39 Status Position */
#define PMC_GCSR1_GPID39_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID39_Pos)              /* (PMC_GCSR1) Generic Clock 39 Status Mask */
#define PMC_GCSR1_GPID39(value)               (PMC_GCSR1_GPID39_Msk & (_UINT32_(value) << PMC_GCSR1_GPID39_Pos)) /* Assigment of value for GPID39 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID40_Pos                  _UINT32_(8)                                          /* (PMC_GCSR1) Generic Clock 40 Status Position */
#define PMC_GCSR1_GPID40_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID40_Pos)              /* (PMC_GCSR1) Generic Clock 40 Status Mask */
#define PMC_GCSR1_GPID40(value)               (PMC_GCSR1_GPID40_Msk & (_UINT32_(value) << PMC_GCSR1_GPID40_Pos)) /* Assigment of value for GPID40 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID41_Pos                  _UINT32_(9)                                          /* (PMC_GCSR1) Generic Clock 41 Status Position */
#define PMC_GCSR1_GPID41_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID41_Pos)              /* (PMC_GCSR1) Generic Clock 41 Status Mask */
#define PMC_GCSR1_GPID41(value)               (PMC_GCSR1_GPID41_Msk & (_UINT32_(value) << PMC_GCSR1_GPID41_Pos)) /* Assigment of value for GPID41 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID42_Pos                  _UINT32_(10)                                         /* (PMC_GCSR1) Generic Clock 42 Status Position */
#define PMC_GCSR1_GPID42_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID42_Pos)              /* (PMC_GCSR1) Generic Clock 42 Status Mask */
#define PMC_GCSR1_GPID42(value)               (PMC_GCSR1_GPID42_Msk & (_UINT32_(value) << PMC_GCSR1_GPID42_Pos)) /* Assigment of value for GPID42 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID43_Pos                  _UINT32_(11)                                         /* (PMC_GCSR1) Generic Clock 43 Status Position */
#define PMC_GCSR1_GPID43_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID43_Pos)              /* (PMC_GCSR1) Generic Clock 43 Status Mask */
#define PMC_GCSR1_GPID43(value)               (PMC_GCSR1_GPID43_Msk & (_UINT32_(value) << PMC_GCSR1_GPID43_Pos)) /* Assigment of value for GPID43 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID44_Pos                  _UINT32_(12)                                         /* (PMC_GCSR1) Generic Clock 44 Status Position */
#define PMC_GCSR1_GPID44_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID44_Pos)              /* (PMC_GCSR1) Generic Clock 44 Status Mask */
#define PMC_GCSR1_GPID44(value)               (PMC_GCSR1_GPID44_Msk & (_UINT32_(value) << PMC_GCSR1_GPID44_Pos)) /* Assigment of value for GPID44 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID45_Pos                  _UINT32_(13)                                         /* (PMC_GCSR1) Generic Clock 45 Status Position */
#define PMC_GCSR1_GPID45_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID45_Pos)              /* (PMC_GCSR1) Generic Clock 45 Status Mask */
#define PMC_GCSR1_GPID45(value)               (PMC_GCSR1_GPID45_Msk & (_UINT32_(value) << PMC_GCSR1_GPID45_Pos)) /* Assigment of value for GPID45 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID46_Pos                  _UINT32_(14)                                         /* (PMC_GCSR1) Generic Clock 46 Status Position */
#define PMC_GCSR1_GPID46_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID46_Pos)              /* (PMC_GCSR1) Generic Clock 46 Status Mask */
#define PMC_GCSR1_GPID46(value)               (PMC_GCSR1_GPID46_Msk & (_UINT32_(value) << PMC_GCSR1_GPID46_Pos)) /* Assigment of value for GPID46 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID47_Pos                  _UINT32_(15)                                         /* (PMC_GCSR1) Generic Clock 47 Status Position */
#define PMC_GCSR1_GPID47_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID47_Pos)              /* (PMC_GCSR1) Generic Clock 47 Status Mask */
#define PMC_GCSR1_GPID47(value)               (PMC_GCSR1_GPID47_Msk & (_UINT32_(value) << PMC_GCSR1_GPID47_Pos)) /* Assigment of value for GPID47 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID48_Pos                  _UINT32_(16)                                         /* (PMC_GCSR1) Generic Clock 48 Status Position */
#define PMC_GCSR1_GPID48_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID48_Pos)              /* (PMC_GCSR1) Generic Clock 48 Status Mask */
#define PMC_GCSR1_GPID48(value)               (PMC_GCSR1_GPID48_Msk & (_UINT32_(value) << PMC_GCSR1_GPID48_Pos)) /* Assigment of value for GPID48 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID49_Pos                  _UINT32_(17)                                         /* (PMC_GCSR1) Generic Clock 49 Status Position */
#define PMC_GCSR1_GPID49_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID49_Pos)              /* (PMC_GCSR1) Generic Clock 49 Status Mask */
#define PMC_GCSR1_GPID49(value)               (PMC_GCSR1_GPID49_Msk & (_UINT32_(value) << PMC_GCSR1_GPID49_Pos)) /* Assigment of value for GPID49 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID50_Pos                  _UINT32_(18)                                         /* (PMC_GCSR1) Generic Clock 50 Status Position */
#define PMC_GCSR1_GPID50_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID50_Pos)              /* (PMC_GCSR1) Generic Clock 50 Status Mask */
#define PMC_GCSR1_GPID50(value)               (PMC_GCSR1_GPID50_Msk & (_UINT32_(value) << PMC_GCSR1_GPID50_Pos)) /* Assigment of value for GPID50 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID51_Pos                  _UINT32_(19)                                         /* (PMC_GCSR1) Generic Clock 51 Status Position */
#define PMC_GCSR1_GPID51_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID51_Pos)              /* (PMC_GCSR1) Generic Clock 51 Status Mask */
#define PMC_GCSR1_GPID51(value)               (PMC_GCSR1_GPID51_Msk & (_UINT32_(value) << PMC_GCSR1_GPID51_Pos)) /* Assigment of value for GPID51 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID52_Pos                  _UINT32_(20)                                         /* (PMC_GCSR1) Generic Clock 52 Status Position */
#define PMC_GCSR1_GPID52_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID52_Pos)              /* (PMC_GCSR1) Generic Clock 52 Status Mask */
#define PMC_GCSR1_GPID52(value)               (PMC_GCSR1_GPID52_Msk & (_UINT32_(value) << PMC_GCSR1_GPID52_Pos)) /* Assigment of value for GPID52 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID53_Pos                  _UINT32_(21)                                         /* (PMC_GCSR1) Generic Clock 53 Status Position */
#define PMC_GCSR1_GPID53_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID53_Pos)              /* (PMC_GCSR1) Generic Clock 53 Status Mask */
#define PMC_GCSR1_GPID53(value)               (PMC_GCSR1_GPID53_Msk & (_UINT32_(value) << PMC_GCSR1_GPID53_Pos)) /* Assigment of value for GPID53 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID54_Pos                  _UINT32_(22)                                         /* (PMC_GCSR1) Generic Clock 54 Status Position */
#define PMC_GCSR1_GPID54_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID54_Pos)              /* (PMC_GCSR1) Generic Clock 54 Status Mask */
#define PMC_GCSR1_GPID54(value)               (PMC_GCSR1_GPID54_Msk & (_UINT32_(value) << PMC_GCSR1_GPID54_Pos)) /* Assigment of value for GPID54 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID55_Pos                  _UINT32_(23)                                         /* (PMC_GCSR1) Generic Clock 55 Status Position */
#define PMC_GCSR1_GPID55_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID55_Pos)              /* (PMC_GCSR1) Generic Clock 55 Status Mask */
#define PMC_GCSR1_GPID55(value)               (PMC_GCSR1_GPID55_Msk & (_UINT32_(value) << PMC_GCSR1_GPID55_Pos)) /* Assigment of value for GPID55 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID56_Pos                  _UINT32_(24)                                         /* (PMC_GCSR1) Generic Clock 56 Status Position */
#define PMC_GCSR1_GPID56_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID56_Pos)              /* (PMC_GCSR1) Generic Clock 56 Status Mask */
#define PMC_GCSR1_GPID56(value)               (PMC_GCSR1_GPID56_Msk & (_UINT32_(value) << PMC_GCSR1_GPID56_Pos)) /* Assigment of value for GPID56 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID57_Pos                  _UINT32_(25)                                         /* (PMC_GCSR1) Generic Clock 57 Status Position */
#define PMC_GCSR1_GPID57_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID57_Pos)              /* (PMC_GCSR1) Generic Clock 57 Status Mask */
#define PMC_GCSR1_GPID57(value)               (PMC_GCSR1_GPID57_Msk & (_UINT32_(value) << PMC_GCSR1_GPID57_Pos)) /* Assigment of value for GPID57 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID58_Pos                  _UINT32_(26)                                         /* (PMC_GCSR1) Generic Clock 58 Status Position */
#define PMC_GCSR1_GPID58_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID58_Pos)              /* (PMC_GCSR1) Generic Clock 58 Status Mask */
#define PMC_GCSR1_GPID58(value)               (PMC_GCSR1_GPID58_Msk & (_UINT32_(value) << PMC_GCSR1_GPID58_Pos)) /* Assigment of value for GPID58 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID59_Pos                  _UINT32_(27)                                         /* (PMC_GCSR1) Generic Clock 59 Status Position */
#define PMC_GCSR1_GPID59_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID59_Pos)              /* (PMC_GCSR1) Generic Clock 59 Status Mask */
#define PMC_GCSR1_GPID59(value)               (PMC_GCSR1_GPID59_Msk & (_UINT32_(value) << PMC_GCSR1_GPID59_Pos)) /* Assigment of value for GPID59 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID60_Pos                  _UINT32_(28)                                         /* (PMC_GCSR1) Generic Clock 60 Status Position */
#define PMC_GCSR1_GPID60_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID60_Pos)              /* (PMC_GCSR1) Generic Clock 60 Status Mask */
#define PMC_GCSR1_GPID60(value)               (PMC_GCSR1_GPID60_Msk & (_UINT32_(value) << PMC_GCSR1_GPID60_Pos)) /* Assigment of value for GPID60 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID61_Pos                  _UINT32_(29)                                         /* (PMC_GCSR1) Generic Clock 61 Status Position */
#define PMC_GCSR1_GPID61_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID61_Pos)              /* (PMC_GCSR1) Generic Clock 61 Status Mask */
#define PMC_GCSR1_GPID61(value)               (PMC_GCSR1_GPID61_Msk & (_UINT32_(value) << PMC_GCSR1_GPID61_Pos)) /* Assigment of value for GPID61 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID62_Pos                  _UINT32_(30)                                         /* (PMC_GCSR1) Generic Clock 62 Status Position */
#define PMC_GCSR1_GPID62_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID62_Pos)              /* (PMC_GCSR1) Generic Clock 62 Status Mask */
#define PMC_GCSR1_GPID62(value)               (PMC_GCSR1_GPID62_Msk & (_UINT32_(value) << PMC_GCSR1_GPID62_Pos)) /* Assigment of value for GPID62 in the PMC_GCSR1 register */
#define PMC_GCSR1_GPID63_Pos                  _UINT32_(31)                                         /* (PMC_GCSR1) Generic Clock 63 Status Position */
#define PMC_GCSR1_GPID63_Msk                  (_UINT32_(0x1) << PMC_GCSR1_GPID63_Pos)              /* (PMC_GCSR1) Generic Clock 63 Status Mask */
#define PMC_GCSR1_GPID63(value)               (PMC_GCSR1_GPID63_Msk & (_UINT32_(value) << PMC_GCSR1_GPID63_Pos)) /* Assigment of value for GPID63 in the PMC_GCSR1 register */
#define PMC_GCSR1_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (PMC_GCSR1) Register Mask  */

#define PMC_GCSR1_GPID_Pos                    _UINT32_(0)                                          /* (PMC_GCSR1 Position) Generic Clock 63 Status */
#define PMC_GCSR1_GPID_Msk                    (_UINT32_(0xFFFFFFFF) << PMC_GCSR1_GPID_Pos)         /* (PMC_GCSR1 Mask) GPID */
#define PMC_GCSR1_GPID(value)                 (PMC_GCSR1_GPID_Msk & (_UINT32_(value) << PMC_GCSR1_GPID_Pos)) 

/* -------- PMC_GCSR2 : (PMC Offset: 0x198) ( R/ 32) Generic Clock Status Register 2 -------- */
#define PMC_GCSR2_GPID64_Pos                  _UINT32_(0)                                          /* (PMC_GCSR2) Generic Clock 64 Status Position */
#define PMC_GCSR2_GPID64_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID64_Pos)              /* (PMC_GCSR2) Generic Clock 64 Status Mask */
#define PMC_GCSR2_GPID64(value)               (PMC_GCSR2_GPID64_Msk & (_UINT32_(value) << PMC_GCSR2_GPID64_Pos)) /* Assigment of value for GPID64 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID65_Pos                  _UINT32_(1)                                          /* (PMC_GCSR2) Generic Clock 65 Status Position */
#define PMC_GCSR2_GPID65_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID65_Pos)              /* (PMC_GCSR2) Generic Clock 65 Status Mask */
#define PMC_GCSR2_GPID65(value)               (PMC_GCSR2_GPID65_Msk & (_UINT32_(value) << PMC_GCSR2_GPID65_Pos)) /* Assigment of value for GPID65 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID66_Pos                  _UINT32_(2)                                          /* (PMC_GCSR2) Generic Clock 66 Status Position */
#define PMC_GCSR2_GPID66_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID66_Pos)              /* (PMC_GCSR2) Generic Clock 66 Status Mask */
#define PMC_GCSR2_GPID66(value)               (PMC_GCSR2_GPID66_Msk & (_UINT32_(value) << PMC_GCSR2_GPID66_Pos)) /* Assigment of value for GPID66 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID67_Pos                  _UINT32_(3)                                          /* (PMC_GCSR2) Generic Clock 67 Status Position */
#define PMC_GCSR2_GPID67_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID67_Pos)              /* (PMC_GCSR2) Generic Clock 67 Status Mask */
#define PMC_GCSR2_GPID67(value)               (PMC_GCSR2_GPID67_Msk & (_UINT32_(value) << PMC_GCSR2_GPID67_Pos)) /* Assigment of value for GPID67 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID68_Pos                  _UINT32_(4)                                          /* (PMC_GCSR2) Generic Clock 68 Status Position */
#define PMC_GCSR2_GPID68_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID68_Pos)              /* (PMC_GCSR2) Generic Clock 68 Status Mask */
#define PMC_GCSR2_GPID68(value)               (PMC_GCSR2_GPID68_Msk & (_UINT32_(value) << PMC_GCSR2_GPID68_Pos)) /* Assigment of value for GPID68 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID69_Pos                  _UINT32_(5)                                          /* (PMC_GCSR2) Generic Clock 69 Status Position */
#define PMC_GCSR2_GPID69_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID69_Pos)              /* (PMC_GCSR2) Generic Clock 69 Status Mask */
#define PMC_GCSR2_GPID69(value)               (PMC_GCSR2_GPID69_Msk & (_UINT32_(value) << PMC_GCSR2_GPID69_Pos)) /* Assigment of value for GPID69 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID70_Pos                  _UINT32_(6)                                          /* (PMC_GCSR2) Generic Clock 70 Status Position */
#define PMC_GCSR2_GPID70_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID70_Pos)              /* (PMC_GCSR2) Generic Clock 70 Status Mask */
#define PMC_GCSR2_GPID70(value)               (PMC_GCSR2_GPID70_Msk & (_UINT32_(value) << PMC_GCSR2_GPID70_Pos)) /* Assigment of value for GPID70 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID71_Pos                  _UINT32_(7)                                          /* (PMC_GCSR2) Generic Clock 71 Status Position */
#define PMC_GCSR2_GPID71_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID71_Pos)              /* (PMC_GCSR2) Generic Clock 71 Status Mask */
#define PMC_GCSR2_GPID71(value)               (PMC_GCSR2_GPID71_Msk & (_UINT32_(value) << PMC_GCSR2_GPID71_Pos)) /* Assigment of value for GPID71 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID72_Pos                  _UINT32_(8)                                          /* (PMC_GCSR2) Generic Clock 72 Status Position */
#define PMC_GCSR2_GPID72_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID72_Pos)              /* (PMC_GCSR2) Generic Clock 72 Status Mask */
#define PMC_GCSR2_GPID72(value)               (PMC_GCSR2_GPID72_Msk & (_UINT32_(value) << PMC_GCSR2_GPID72_Pos)) /* Assigment of value for GPID72 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID73_Pos                  _UINT32_(9)                                          /* (PMC_GCSR2) Generic Clock 73 Status Position */
#define PMC_GCSR2_GPID73_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID73_Pos)              /* (PMC_GCSR2) Generic Clock 73 Status Mask */
#define PMC_GCSR2_GPID73(value)               (PMC_GCSR2_GPID73_Msk & (_UINT32_(value) << PMC_GCSR2_GPID73_Pos)) /* Assigment of value for GPID73 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID74_Pos                  _UINT32_(10)                                         /* (PMC_GCSR2) Generic Clock 74 Status Position */
#define PMC_GCSR2_GPID74_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID74_Pos)              /* (PMC_GCSR2) Generic Clock 74 Status Mask */
#define PMC_GCSR2_GPID74(value)               (PMC_GCSR2_GPID74_Msk & (_UINT32_(value) << PMC_GCSR2_GPID74_Pos)) /* Assigment of value for GPID74 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID75_Pos                  _UINT32_(11)                                         /* (PMC_GCSR2) Generic Clock 75 Status Position */
#define PMC_GCSR2_GPID75_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID75_Pos)              /* (PMC_GCSR2) Generic Clock 75 Status Mask */
#define PMC_GCSR2_GPID75(value)               (PMC_GCSR2_GPID75_Msk & (_UINT32_(value) << PMC_GCSR2_GPID75_Pos)) /* Assigment of value for GPID75 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID76_Pos                  _UINT32_(12)                                         /* (PMC_GCSR2) Generic Clock 76 Status Position */
#define PMC_GCSR2_GPID76_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID76_Pos)              /* (PMC_GCSR2) Generic Clock 76 Status Mask */
#define PMC_GCSR2_GPID76(value)               (PMC_GCSR2_GPID76_Msk & (_UINT32_(value) << PMC_GCSR2_GPID76_Pos)) /* Assigment of value for GPID76 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID77_Pos                  _UINT32_(13)                                         /* (PMC_GCSR2) Generic Clock 77 Status Position */
#define PMC_GCSR2_GPID77_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID77_Pos)              /* (PMC_GCSR2) Generic Clock 77 Status Mask */
#define PMC_GCSR2_GPID77(value)               (PMC_GCSR2_GPID77_Msk & (_UINT32_(value) << PMC_GCSR2_GPID77_Pos)) /* Assigment of value for GPID77 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID78_Pos                  _UINT32_(14)                                         /* (PMC_GCSR2) Generic Clock 78 Status Position */
#define PMC_GCSR2_GPID78_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID78_Pos)              /* (PMC_GCSR2) Generic Clock 78 Status Mask */
#define PMC_GCSR2_GPID78(value)               (PMC_GCSR2_GPID78_Msk & (_UINT32_(value) << PMC_GCSR2_GPID78_Pos)) /* Assigment of value for GPID78 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID79_Pos                  _UINT32_(15)                                         /* (PMC_GCSR2) Generic Clock 79 Status Position */
#define PMC_GCSR2_GPID79_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID79_Pos)              /* (PMC_GCSR2) Generic Clock 79 Status Mask */
#define PMC_GCSR2_GPID79(value)               (PMC_GCSR2_GPID79_Msk & (_UINT32_(value) << PMC_GCSR2_GPID79_Pos)) /* Assigment of value for GPID79 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID80_Pos                  _UINT32_(16)                                         /* (PMC_GCSR2) Generic Clock 80 Status Position */
#define PMC_GCSR2_GPID80_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID80_Pos)              /* (PMC_GCSR2) Generic Clock 80 Status Mask */
#define PMC_GCSR2_GPID80(value)               (PMC_GCSR2_GPID80_Msk & (_UINT32_(value) << PMC_GCSR2_GPID80_Pos)) /* Assigment of value for GPID80 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID81_Pos                  _UINT32_(17)                                         /* (PMC_GCSR2) Generic Clock 81 Status Position */
#define PMC_GCSR2_GPID81_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID81_Pos)              /* (PMC_GCSR2) Generic Clock 81 Status Mask */
#define PMC_GCSR2_GPID81(value)               (PMC_GCSR2_GPID81_Msk & (_UINT32_(value) << PMC_GCSR2_GPID81_Pos)) /* Assigment of value for GPID81 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID82_Pos                  _UINT32_(18)                                         /* (PMC_GCSR2) Generic Clock 82 Status Position */
#define PMC_GCSR2_GPID82_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID82_Pos)              /* (PMC_GCSR2) Generic Clock 82 Status Mask */
#define PMC_GCSR2_GPID82(value)               (PMC_GCSR2_GPID82_Msk & (_UINT32_(value) << PMC_GCSR2_GPID82_Pos)) /* Assigment of value for GPID82 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID83_Pos                  _UINT32_(19)                                         /* (PMC_GCSR2) Generic Clock 83 Status Position */
#define PMC_GCSR2_GPID83_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID83_Pos)              /* (PMC_GCSR2) Generic Clock 83 Status Mask */
#define PMC_GCSR2_GPID83(value)               (PMC_GCSR2_GPID83_Msk & (_UINT32_(value) << PMC_GCSR2_GPID83_Pos)) /* Assigment of value for GPID83 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID84_Pos                  _UINT32_(20)                                         /* (PMC_GCSR2) Generic Clock 84 Status Position */
#define PMC_GCSR2_GPID84_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID84_Pos)              /* (PMC_GCSR2) Generic Clock 84 Status Mask */
#define PMC_GCSR2_GPID84(value)               (PMC_GCSR2_GPID84_Msk & (_UINT32_(value) << PMC_GCSR2_GPID84_Pos)) /* Assigment of value for GPID84 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID85_Pos                  _UINT32_(21)                                         /* (PMC_GCSR2) Generic Clock 85 Status Position */
#define PMC_GCSR2_GPID85_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID85_Pos)              /* (PMC_GCSR2) Generic Clock 85 Status Mask */
#define PMC_GCSR2_GPID85(value)               (PMC_GCSR2_GPID85_Msk & (_UINT32_(value) << PMC_GCSR2_GPID85_Pos)) /* Assigment of value for GPID85 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID86_Pos                  _UINT32_(22)                                         /* (PMC_GCSR2) Generic Clock 86 Status Position */
#define PMC_GCSR2_GPID86_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID86_Pos)              /* (PMC_GCSR2) Generic Clock 86 Status Mask */
#define PMC_GCSR2_GPID86(value)               (PMC_GCSR2_GPID86_Msk & (_UINT32_(value) << PMC_GCSR2_GPID86_Pos)) /* Assigment of value for GPID86 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID87_Pos                  _UINT32_(23)                                         /* (PMC_GCSR2) Generic Clock 87 Status Position */
#define PMC_GCSR2_GPID87_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID87_Pos)              /* (PMC_GCSR2) Generic Clock 87 Status Mask */
#define PMC_GCSR2_GPID87(value)               (PMC_GCSR2_GPID87_Msk & (_UINT32_(value) << PMC_GCSR2_GPID87_Pos)) /* Assigment of value for GPID87 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID88_Pos                  _UINT32_(24)                                         /* (PMC_GCSR2) Generic Clock 88 Status Position */
#define PMC_GCSR2_GPID88_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID88_Pos)              /* (PMC_GCSR2) Generic Clock 88 Status Mask */
#define PMC_GCSR2_GPID88(value)               (PMC_GCSR2_GPID88_Msk & (_UINT32_(value) << PMC_GCSR2_GPID88_Pos)) /* Assigment of value for GPID88 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID89_Pos                  _UINT32_(25)                                         /* (PMC_GCSR2) Generic Clock 89 Status Position */
#define PMC_GCSR2_GPID89_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID89_Pos)              /* (PMC_GCSR2) Generic Clock 89 Status Mask */
#define PMC_GCSR2_GPID89(value)               (PMC_GCSR2_GPID89_Msk & (_UINT32_(value) << PMC_GCSR2_GPID89_Pos)) /* Assigment of value for GPID89 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID90_Pos                  _UINT32_(26)                                         /* (PMC_GCSR2) Generic Clock 90 Status Position */
#define PMC_GCSR2_GPID90_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID90_Pos)              /* (PMC_GCSR2) Generic Clock 90 Status Mask */
#define PMC_GCSR2_GPID90(value)               (PMC_GCSR2_GPID90_Msk & (_UINT32_(value) << PMC_GCSR2_GPID90_Pos)) /* Assigment of value for GPID90 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID91_Pos                  _UINT32_(27)                                         /* (PMC_GCSR2) Generic Clock 91 Status Position */
#define PMC_GCSR2_GPID91_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID91_Pos)              /* (PMC_GCSR2) Generic Clock 91 Status Mask */
#define PMC_GCSR2_GPID91(value)               (PMC_GCSR2_GPID91_Msk & (_UINT32_(value) << PMC_GCSR2_GPID91_Pos)) /* Assigment of value for GPID91 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID92_Pos                  _UINT32_(28)                                         /* (PMC_GCSR2) Generic Clock 92 Status Position */
#define PMC_GCSR2_GPID92_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID92_Pos)              /* (PMC_GCSR2) Generic Clock 92 Status Mask */
#define PMC_GCSR2_GPID92(value)               (PMC_GCSR2_GPID92_Msk & (_UINT32_(value) << PMC_GCSR2_GPID92_Pos)) /* Assigment of value for GPID92 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID93_Pos                  _UINT32_(29)                                         /* (PMC_GCSR2) Generic Clock 93 Status Position */
#define PMC_GCSR2_GPID93_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID93_Pos)              /* (PMC_GCSR2) Generic Clock 93 Status Mask */
#define PMC_GCSR2_GPID93(value)               (PMC_GCSR2_GPID93_Msk & (_UINT32_(value) << PMC_GCSR2_GPID93_Pos)) /* Assigment of value for GPID93 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID94_Pos                  _UINT32_(30)                                         /* (PMC_GCSR2) Generic Clock 94 Status Position */
#define PMC_GCSR2_GPID94_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID94_Pos)              /* (PMC_GCSR2) Generic Clock 94 Status Mask */
#define PMC_GCSR2_GPID94(value)               (PMC_GCSR2_GPID94_Msk & (_UINT32_(value) << PMC_GCSR2_GPID94_Pos)) /* Assigment of value for GPID94 in the PMC_GCSR2 register */
#define PMC_GCSR2_GPID95_Pos                  _UINT32_(31)                                         /* (PMC_GCSR2) Generic Clock 95 Status Position */
#define PMC_GCSR2_GPID95_Msk                  (_UINT32_(0x1) << PMC_GCSR2_GPID95_Pos)              /* (PMC_GCSR2) Generic Clock 95 Status Mask */
#define PMC_GCSR2_GPID95(value)               (PMC_GCSR2_GPID95_Msk & (_UINT32_(value) << PMC_GCSR2_GPID95_Pos)) /* Assigment of value for GPID95 in the PMC_GCSR2 register */
#define PMC_GCSR2_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (PMC_GCSR2) Register Mask  */

#define PMC_GCSR2_GPID_Pos                    _UINT32_(0)                                          /* (PMC_GCSR2 Position) Generic Clock 95 Status */
#define PMC_GCSR2_GPID_Msk                    (_UINT32_(0xFFFFFFFF) << PMC_GCSR2_GPID_Pos)         /* (PMC_GCSR2 Mask) GPID */
#define PMC_GCSR2_GPID(value)                 (PMC_GCSR2_GPID_Msk & (_UINT32_(value) << PMC_GCSR2_GPID_Pos)) 

/* -------- PMC_GCSR3 : (PMC Offset: 0x19C) ( R/ 32) Generic Clock Status Register 3 -------- */
#define PMC_GCSR3_GPID96_Pos                  _UINT32_(0)                                          /* (PMC_GCSR3) Generic Clock 96 Status Position */
#define PMC_GCSR3_GPID96_Msk                  (_UINT32_(0x1) << PMC_GCSR3_GPID96_Pos)              /* (PMC_GCSR3) Generic Clock 96 Status Mask */
#define PMC_GCSR3_GPID96(value)               (PMC_GCSR3_GPID96_Msk & (_UINT32_(value) << PMC_GCSR3_GPID96_Pos)) /* Assigment of value for GPID96 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID97_Pos                  _UINT32_(1)                                          /* (PMC_GCSR3) Generic Clock 97 Status Position */
#define PMC_GCSR3_GPID97_Msk                  (_UINT32_(0x1) << PMC_GCSR3_GPID97_Pos)              /* (PMC_GCSR3) Generic Clock 97 Status Mask */
#define PMC_GCSR3_GPID97(value)               (PMC_GCSR3_GPID97_Msk & (_UINT32_(value) << PMC_GCSR3_GPID97_Pos)) /* Assigment of value for GPID97 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID98_Pos                  _UINT32_(2)                                          /* (PMC_GCSR3) Generic Clock 98 Status Position */
#define PMC_GCSR3_GPID98_Msk                  (_UINT32_(0x1) << PMC_GCSR3_GPID98_Pos)              /* (PMC_GCSR3) Generic Clock 98 Status Mask */
#define PMC_GCSR3_GPID98(value)               (PMC_GCSR3_GPID98_Msk & (_UINT32_(value) << PMC_GCSR3_GPID98_Pos)) /* Assigment of value for GPID98 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID99_Pos                  _UINT32_(3)                                          /* (PMC_GCSR3) Generic Clock 99 Status Position */
#define PMC_GCSR3_GPID99_Msk                  (_UINT32_(0x1) << PMC_GCSR3_GPID99_Pos)              /* (PMC_GCSR3) Generic Clock 99 Status Mask */
#define PMC_GCSR3_GPID99(value)               (PMC_GCSR3_GPID99_Msk & (_UINT32_(value) << PMC_GCSR3_GPID99_Pos)) /* Assigment of value for GPID99 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID100_Pos                 _UINT32_(4)                                          /* (PMC_GCSR3) Generic Clock 100 Status Position */
#define PMC_GCSR3_GPID100_Msk                 (_UINT32_(0x1) << PMC_GCSR3_GPID100_Pos)             /* (PMC_GCSR3) Generic Clock 100 Status Mask */
#define PMC_GCSR3_GPID100(value)              (PMC_GCSR3_GPID100_Msk & (_UINT32_(value) << PMC_GCSR3_GPID100_Pos)) /* Assigment of value for GPID100 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID101_Pos                 _UINT32_(5)                                          /* (PMC_GCSR3) Generic Clock 101 Status Position */
#define PMC_GCSR3_GPID101_Msk                 (_UINT32_(0x1) << PMC_GCSR3_GPID101_Pos)             /* (PMC_GCSR3) Generic Clock 101 Status Mask */
#define PMC_GCSR3_GPID101(value)              (PMC_GCSR3_GPID101_Msk & (_UINT32_(value) << PMC_GCSR3_GPID101_Pos)) /* Assigment of value for GPID101 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID102_Pos                 _UINT32_(6)                                          /* (PMC_GCSR3) Generic Clock 102 Status Position */
#define PMC_GCSR3_GPID102_Msk                 (_UINT32_(0x1) << PMC_GCSR3_GPID102_Pos)             /* (PMC_GCSR3) Generic Clock 102 Status Mask */
#define PMC_GCSR3_GPID102(value)              (PMC_GCSR3_GPID102_Msk & (_UINT32_(value) << PMC_GCSR3_GPID102_Pos)) /* Assigment of value for GPID102 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID103_Pos                 _UINT32_(7)                                          /* (PMC_GCSR3) Generic Clock 103 Status Position */
#define PMC_GCSR3_GPID103_Msk                 (_UINT32_(0x1) << PMC_GCSR3_GPID103_Pos)             /* (PMC_GCSR3) Generic Clock 103 Status Mask */
#define PMC_GCSR3_GPID103(value)              (PMC_GCSR3_GPID103_Msk & (_UINT32_(value) << PMC_GCSR3_GPID103_Pos)) /* Assigment of value for GPID103 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID104_Pos                 _UINT32_(8)                                          /* (PMC_GCSR3) Generic Clock 104 Status Position */
#define PMC_GCSR3_GPID104_Msk                 (_UINT32_(0x1) << PMC_GCSR3_GPID104_Pos)             /* (PMC_GCSR3) Generic Clock 104 Status Mask */
#define PMC_GCSR3_GPID104(value)              (PMC_GCSR3_GPID104_Msk & (_UINT32_(value) << PMC_GCSR3_GPID104_Pos)) /* Assigment of value for GPID104 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID105_Pos                 _UINT32_(9)                                          /* (PMC_GCSR3) Generic Clock 105 Status Position */
#define PMC_GCSR3_GPID105_Msk                 (_UINT32_(0x1) << PMC_GCSR3_GPID105_Pos)             /* (PMC_GCSR3) Generic Clock 105 Status Mask */
#define PMC_GCSR3_GPID105(value)              (PMC_GCSR3_GPID105_Msk & (_UINT32_(value) << PMC_GCSR3_GPID105_Pos)) /* Assigment of value for GPID105 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID106_Pos                 _UINT32_(10)                                         /* (PMC_GCSR3) Generic Clock 106 Status Position */
#define PMC_GCSR3_GPID106_Msk                 (_UINT32_(0x1) << PMC_GCSR3_GPID106_Pos)             /* (PMC_GCSR3) Generic Clock 106 Status Mask */
#define PMC_GCSR3_GPID106(value)              (PMC_GCSR3_GPID106_Msk & (_UINT32_(value) << PMC_GCSR3_GPID106_Pos)) /* Assigment of value for GPID106 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID107_Pos                 _UINT32_(11)                                         /* (PMC_GCSR3) Generic Clock 107 Status Position */
#define PMC_GCSR3_GPID107_Msk                 (_UINT32_(0x1) << PMC_GCSR3_GPID107_Pos)             /* (PMC_GCSR3) Generic Clock 107 Status Mask */
#define PMC_GCSR3_GPID107(value)              (PMC_GCSR3_GPID107_Msk & (_UINT32_(value) << PMC_GCSR3_GPID107_Pos)) /* Assigment of value for GPID107 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID108_Pos                 _UINT32_(12)                                         /* (PMC_GCSR3) Generic Clock 108 Status Position */
#define PMC_GCSR3_GPID108_Msk                 (_UINT32_(0x1) << PMC_GCSR3_GPID108_Pos)             /* (PMC_GCSR3) Generic Clock 108 Status Mask */
#define PMC_GCSR3_GPID108(value)              (PMC_GCSR3_GPID108_Msk & (_UINT32_(value) << PMC_GCSR3_GPID108_Pos)) /* Assigment of value for GPID108 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID109_Pos                 _UINT32_(13)                                         /* (PMC_GCSR3) Generic Clock 109 Status Position */
#define PMC_GCSR3_GPID109_Msk                 (_UINT32_(0x1) << PMC_GCSR3_GPID109_Pos)             /* (PMC_GCSR3) Generic Clock 109 Status Mask */
#define PMC_GCSR3_GPID109(value)              (PMC_GCSR3_GPID109_Msk & (_UINT32_(value) << PMC_GCSR3_GPID109_Pos)) /* Assigment of value for GPID109 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID110_Pos                 _UINT32_(14)                                         /* (PMC_GCSR3) Generic Clock 110 Status Position */
#define PMC_GCSR3_GPID110_Msk                 (_UINT32_(0x1) << PMC_GCSR3_GPID110_Pos)             /* (PMC_GCSR3) Generic Clock 110 Status Mask */
#define PMC_GCSR3_GPID110(value)              (PMC_GCSR3_GPID110_Msk & (_UINT32_(value) << PMC_GCSR3_GPID110_Pos)) /* Assigment of value for GPID110 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID111_Pos                 _UINT32_(15)                                         /* (PMC_GCSR3) Generic Clock 111 Status Position */
#define PMC_GCSR3_GPID111_Msk                 (_UINT32_(0x1) << PMC_GCSR3_GPID111_Pos)             /* (PMC_GCSR3) Generic Clock 111 Status Mask */
#define PMC_GCSR3_GPID111(value)              (PMC_GCSR3_GPID111_Msk & (_UINT32_(value) << PMC_GCSR3_GPID111_Pos)) /* Assigment of value for GPID111 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID112_Pos                 _UINT32_(16)                                         /* (PMC_GCSR3) Generic Clock 112 Status Position */
#define PMC_GCSR3_GPID112_Msk                 (_UINT32_(0x1) << PMC_GCSR3_GPID112_Pos)             /* (PMC_GCSR3) Generic Clock 112 Status Mask */
#define PMC_GCSR3_GPID112(value)              (PMC_GCSR3_GPID112_Msk & (_UINT32_(value) << PMC_GCSR3_GPID112_Pos)) /* Assigment of value for GPID112 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID113_Pos                 _UINT32_(17)                                         /* (PMC_GCSR3) Generic Clock 113 Status Position */
#define PMC_GCSR3_GPID113_Msk                 (_UINT32_(0x1) << PMC_GCSR3_GPID113_Pos)             /* (PMC_GCSR3) Generic Clock 113 Status Mask */
#define PMC_GCSR3_GPID113(value)              (PMC_GCSR3_GPID113_Msk & (_UINT32_(value) << PMC_GCSR3_GPID113_Pos)) /* Assigment of value for GPID113 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID114_Pos                 _UINT32_(18)                                         /* (PMC_GCSR3) Generic Clock 114 Status Position */
#define PMC_GCSR3_GPID114_Msk                 (_UINT32_(0x1) << PMC_GCSR3_GPID114_Pos)             /* (PMC_GCSR3) Generic Clock 114 Status Mask */
#define PMC_GCSR3_GPID114(value)              (PMC_GCSR3_GPID114_Msk & (_UINT32_(value) << PMC_GCSR3_GPID114_Pos)) /* Assigment of value for GPID114 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID115_Pos                 _UINT32_(19)                                         /* (PMC_GCSR3) Generic Clock 115 Status Position */
#define PMC_GCSR3_GPID115_Msk                 (_UINT32_(0x1) << PMC_GCSR3_GPID115_Pos)             /* (PMC_GCSR3) Generic Clock 115 Status Mask */
#define PMC_GCSR3_GPID115(value)              (PMC_GCSR3_GPID115_Msk & (_UINT32_(value) << PMC_GCSR3_GPID115_Pos)) /* Assigment of value for GPID115 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID116_Pos                 _UINT32_(20)                                         /* (PMC_GCSR3) Generic Clock 116 Status Position */
#define PMC_GCSR3_GPID116_Msk                 (_UINT32_(0x1) << PMC_GCSR3_GPID116_Pos)             /* (PMC_GCSR3) Generic Clock 116 Status Mask */
#define PMC_GCSR3_GPID116(value)              (PMC_GCSR3_GPID116_Msk & (_UINT32_(value) << PMC_GCSR3_GPID116_Pos)) /* Assigment of value for GPID116 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID117_Pos                 _UINT32_(21)                                         /* (PMC_GCSR3) Generic Clock 117 Status Position */
#define PMC_GCSR3_GPID117_Msk                 (_UINT32_(0x1) << PMC_GCSR3_GPID117_Pos)             /* (PMC_GCSR3) Generic Clock 117 Status Mask */
#define PMC_GCSR3_GPID117(value)              (PMC_GCSR3_GPID117_Msk & (_UINT32_(value) << PMC_GCSR3_GPID117_Pos)) /* Assigment of value for GPID117 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID118_Pos                 _UINT32_(22)                                         /* (PMC_GCSR3) Generic Clock 118 Status Position */
#define PMC_GCSR3_GPID118_Msk                 (_UINT32_(0x1) << PMC_GCSR3_GPID118_Pos)             /* (PMC_GCSR3) Generic Clock 118 Status Mask */
#define PMC_GCSR3_GPID118(value)              (PMC_GCSR3_GPID118_Msk & (_UINT32_(value) << PMC_GCSR3_GPID118_Pos)) /* Assigment of value for GPID118 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID119_Pos                 _UINT32_(23)                                         /* (PMC_GCSR3) Generic Clock 119 Status Position */
#define PMC_GCSR3_GPID119_Msk                 (_UINT32_(0x1) << PMC_GCSR3_GPID119_Pos)             /* (PMC_GCSR3) Generic Clock 119 Status Mask */
#define PMC_GCSR3_GPID119(value)              (PMC_GCSR3_GPID119_Msk & (_UINT32_(value) << PMC_GCSR3_GPID119_Pos)) /* Assigment of value for GPID119 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID120_Pos                 _UINT32_(24)                                         /* (PMC_GCSR3) Generic Clock 120 Status Position */
#define PMC_GCSR3_GPID120_Msk                 (_UINT32_(0x1) << PMC_GCSR3_GPID120_Pos)             /* (PMC_GCSR3) Generic Clock 120 Status Mask */
#define PMC_GCSR3_GPID120(value)              (PMC_GCSR3_GPID120_Msk & (_UINT32_(value) << PMC_GCSR3_GPID120_Pos)) /* Assigment of value for GPID120 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID122_Pos                 _UINT32_(25)                                         /* (PMC_GCSR3) Generic Clock 122 Status Position */
#define PMC_GCSR3_GPID122_Msk                 (_UINT32_(0x3) << PMC_GCSR3_GPID122_Pos)             /* (PMC_GCSR3) Generic Clock 122 Status Mask */
#define PMC_GCSR3_GPID122(value)              (PMC_GCSR3_GPID122_Msk & (_UINT32_(value) << PMC_GCSR3_GPID122_Pos)) /* Assigment of value for GPID122 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID123_Pos                 _UINT32_(27)                                         /* (PMC_GCSR3) Generic Clock 123 Status Position */
#define PMC_GCSR3_GPID123_Msk                 (_UINT32_(0x1) << PMC_GCSR3_GPID123_Pos)             /* (PMC_GCSR3) Generic Clock 123 Status Mask */
#define PMC_GCSR3_GPID123(value)              (PMC_GCSR3_GPID123_Msk & (_UINT32_(value) << PMC_GCSR3_GPID123_Pos)) /* Assigment of value for GPID123 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID124_Pos                 _UINT32_(28)                                         /* (PMC_GCSR3) Generic Clock 124 Status Position */
#define PMC_GCSR3_GPID124_Msk                 (_UINT32_(0x1) << PMC_GCSR3_GPID124_Pos)             /* (PMC_GCSR3) Generic Clock 124 Status Mask */
#define PMC_GCSR3_GPID124(value)              (PMC_GCSR3_GPID124_Msk & (_UINT32_(value) << PMC_GCSR3_GPID124_Pos)) /* Assigment of value for GPID124 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID125_Pos                 _UINT32_(29)                                         /* (PMC_GCSR3) Generic Clock 125 Status Position */
#define PMC_GCSR3_GPID125_Msk                 (_UINT32_(0x1) << PMC_GCSR3_GPID125_Pos)             /* (PMC_GCSR3) Generic Clock 125 Status Mask */
#define PMC_GCSR3_GPID125(value)              (PMC_GCSR3_GPID125_Msk & (_UINT32_(value) << PMC_GCSR3_GPID125_Pos)) /* Assigment of value for GPID125 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID126_Pos                 _UINT32_(30)                                         /* (PMC_GCSR3) Generic Clock 126 Status Position */
#define PMC_GCSR3_GPID126_Msk                 (_UINT32_(0x1) << PMC_GCSR3_GPID126_Pos)             /* (PMC_GCSR3) Generic Clock 126 Status Mask */
#define PMC_GCSR3_GPID126(value)              (PMC_GCSR3_GPID126_Msk & (_UINT32_(value) << PMC_GCSR3_GPID126_Pos)) /* Assigment of value for GPID126 in the PMC_GCSR3 register */
#define PMC_GCSR3_GPID127_Pos                 _UINT32_(31)                                         /* (PMC_GCSR3) Generic Clock 127 Status Position */
#define PMC_GCSR3_GPID127_Msk                 (_UINT32_(0x1) << PMC_GCSR3_GPID127_Pos)             /* (PMC_GCSR3) Generic Clock 127 Status Mask */
#define PMC_GCSR3_GPID127(value)              (PMC_GCSR3_GPID127_Msk & (_UINT32_(value) << PMC_GCSR3_GPID127_Pos)) /* Assigment of value for GPID127 in the PMC_GCSR3 register */
#define PMC_GCSR3_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (PMC_GCSR3) Register Mask  */

#define PMC_GCSR3_GPID_Pos                    _UINT32_(27)                                         /* (PMC_GCSR3 Position) Generic Clock x27 Status */
#define PMC_GCSR3_GPID_Msk                    (_UINT32_(0x1F) << PMC_GCSR3_GPID_Pos)               /* (PMC_GCSR3 Mask) GPID */
#define PMC_GCSR3_GPID(value)                 (PMC_GCSR3_GPID_Msk & (_UINT32_(value) << PMC_GCSR3_GPID_Pos)) 

/* -------- PMC_OSC2 : (PMC Offset: 0x1B0) (R/W 32) Oscillator Control Register 2 -------- */
#define PMC_OSC2_EN_Pos                       _UINT32_(0)                                          /* (PMC_OSC2) Enable Position */
#define PMC_OSC2_EN_Msk                       (_UINT32_(0x1) << PMC_OSC2_EN_Pos)                   /* (PMC_OSC2) Enable Mask */
#define PMC_OSC2_EN(value)                    (PMC_OSC2_EN_Msk & (_UINT32_(value) << PMC_OSC2_EN_Pos)) /* Assigment of value for EN in the PMC_OSC2 register */
#define PMC_OSC2_OSCRCF_Pos                   _UINT32_(4)                                          /* (PMC_OSC2) 2nd Oscillator Frequency Selection Position */
#define PMC_OSC2_OSCRCF_Msk                   (_UINT32_(0x3) << PMC_OSC2_OSCRCF_Pos)               /* (PMC_OSC2) 2nd Oscillator Frequency Selection Mask */
#define PMC_OSC2_OSCRCF(value)                (PMC_OSC2_OSCRCF_Msk & (_UINT32_(value) << PMC_OSC2_OSCRCF_Pos)) /* Assigment of value for OSCRCF in the PMC_OSC2 register */
#define   PMC_OSC2_OSCRCF_4_MHZ_Val           _UINT32_(0x0)                                        /* (PMC_OSC2) The 2nd RC oscillator frequency is at 4 MHZ  */
#define   PMC_OSC2_OSCRCF_8_MHZ_Val           _UINT32_(0x1)                                        /* (PMC_OSC2) The 2nd RC oscillator frequency is at 8 MHZ  */
#define   PMC_OSC2_OSCRCF_10_MHZ_Val          _UINT32_(0x2)                                        /* (PMC_OSC2) The 2nd RC oscillator frequency is at 10 MHZ  */
#define   PMC_OSC2_OSCRCF_12_MHZ_Val          _UINT32_(0x3)                                        /* (PMC_OSC2) The 2nd RC oscillator frequency is at 12 MHZ  */
#define PMC_OSC2_OSCRCF_4_MHZ                 (PMC_OSC2_OSCRCF_4_MHZ_Val << PMC_OSC2_OSCRCF_Pos)   /* (PMC_OSC2) The 2nd RC oscillator frequency is at 4 MHZ Position  */
#define PMC_OSC2_OSCRCF_8_MHZ                 (PMC_OSC2_OSCRCF_8_MHZ_Val << PMC_OSC2_OSCRCF_Pos)   /* (PMC_OSC2) The 2nd RC oscillator frequency is at 8 MHZ Position  */
#define PMC_OSC2_OSCRCF_10_MHZ                (PMC_OSC2_OSCRCF_10_MHZ_Val << PMC_OSC2_OSCRCF_Pos)  /* (PMC_OSC2) The 2nd RC oscillator frequency is at 10 MHZ Position  */
#define PMC_OSC2_OSCRCF_12_MHZ                (PMC_OSC2_OSCRCF_12_MHZ_Val << PMC_OSC2_OSCRCF_Pos)  /* (PMC_OSC2) The 2nd RC oscillator frequency is at 12 MHZ Position  */
#define PMC_OSC2_EN_WR_CALIB_Pos              _UINT32_(8)                                          /* (PMC_OSC2) Enable Calibration Register Write Position */
#define PMC_OSC2_EN_WR_CALIB_Msk              (_UINT32_(0x1) << PMC_OSC2_EN_WR_CALIB_Pos)          /* (PMC_OSC2) Enable Calibration Register Write Mask */
#define PMC_OSC2_EN_WR_CALIB(value)           (PMC_OSC2_EN_WR_CALIB_Msk & (_UINT32_(value) << PMC_OSC2_EN_WR_CALIB_Pos)) /* Assigment of value for EN_WR_CALIB in the PMC_OSC2 register */
#define PMC_OSC2_KEY_Pos                      _UINT32_(16)                                         /* (PMC_OSC2) Register Write Access Password Position */
#define PMC_OSC2_KEY_Msk                      (_UINT32_(0xFF) << PMC_OSC2_KEY_Pos)                 /* (PMC_OSC2) Register Write Access Password Mask */
#define PMC_OSC2_KEY(value)                   (PMC_OSC2_KEY_Msk & (_UINT32_(value) << PMC_OSC2_KEY_Pos)) /* Assigment of value for KEY in the PMC_OSC2 register */
#define   PMC_OSC2_KEY_PASSWD_Val             _UINT32_(0x37)                                       /* (PMC_OSC2) Writing any other value in this field aborts the write operation.Always reads as 0.  */
#define PMC_OSC2_KEY_PASSWD                   (PMC_OSC2_KEY_PASSWD_Val << PMC_OSC2_KEY_Pos)        /* (PMC_OSC2) Writing any other value in this field aborts the write operation.Always reads as 0. Position  */
#define PMC_OSC2_Msk                          _UINT32_(0x00FF0131)                                 /* (PMC_OSC2) Register Mask  */


/* -------- PMC_OCR2 : (PMC Offset: 0x1B4) (R/W 32) Oscillator Calibration Register 2 -------- */
#define PMC_OCR2_CAL4_Pos                     _UINT32_(0)                                          /* (PMC_OCR2) Main RC Oscillator Calibration Bits for 4 MHz Position */
#define PMC_OCR2_CAL4_Msk                     (_UINT32_(0x7F) << PMC_OCR2_CAL4_Pos)                /* (PMC_OCR2) Main RC Oscillator Calibration Bits for 4 MHz Mask */
#define PMC_OCR2_CAL4(value)                  (PMC_OCR2_CAL4_Msk & (_UINT32_(value) << PMC_OCR2_CAL4_Pos)) /* Assigment of value for CAL4 in the PMC_OCR2 register */
#define PMC_OCR2_SEL4_Pos                     _UINT32_(7)                                          /* (PMC_OCR2) Selection of Main RC Oscillator Calibration Bits for 4 MHz Position */
#define PMC_OCR2_SEL4_Msk                     (_UINT32_(0x1) << PMC_OCR2_SEL4_Pos)                 /* (PMC_OCR2) Selection of Main RC Oscillator Calibration Bits for 4 MHz Mask */
#define PMC_OCR2_SEL4(value)                  (PMC_OCR2_SEL4_Msk & (_UINT32_(value) << PMC_OCR2_SEL4_Pos)) /* Assigment of value for SEL4 in the PMC_OCR2 register */
#define PMC_OCR2_CAL8_Pos                     _UINT32_(8)                                          /* (PMC_OCR2) Main RC Oscillator Calibration Bits for 8 MHz Position */
#define PMC_OCR2_CAL8_Msk                     (_UINT32_(0x7F) << PMC_OCR2_CAL8_Pos)                /* (PMC_OCR2) Main RC Oscillator Calibration Bits for 8 MHz Mask */
#define PMC_OCR2_CAL8(value)                  (PMC_OCR2_CAL8_Msk & (_UINT32_(value) << PMC_OCR2_CAL8_Pos)) /* Assigment of value for CAL8 in the PMC_OCR2 register */
#define PMC_OCR2_SEL8_Pos                     _UINT32_(15)                                         /* (PMC_OCR2) Selection of Main RC Oscillator Calibration Bits for 8 MHz Position */
#define PMC_OCR2_SEL8_Msk                     (_UINT32_(0x1) << PMC_OCR2_SEL8_Pos)                 /* (PMC_OCR2) Selection of Main RC Oscillator Calibration Bits for 8 MHz Mask */
#define PMC_OCR2_SEL8(value)                  (PMC_OCR2_SEL8_Msk & (_UINT32_(value) << PMC_OCR2_SEL8_Pos)) /* Assigment of value for SEL8 in the PMC_OCR2 register */
#define PMC_OCR2_CAL12_Pos                    _UINT32_(16)                                         /* (PMC_OCR2) Main RC Oscillator Calibration Bits for 12 MHz Position */
#define PMC_OCR2_CAL12_Msk                    (_UINT32_(0x7F) << PMC_OCR2_CAL12_Pos)               /* (PMC_OCR2) Main RC Oscillator Calibration Bits for 12 MHz Mask */
#define PMC_OCR2_CAL12(value)                 (PMC_OCR2_CAL12_Msk & (_UINT32_(value) << PMC_OCR2_CAL12_Pos)) /* Assigment of value for CAL12 in the PMC_OCR2 register */
#define PMC_OCR2_SEL12_Pos                    _UINT32_(23)                                         /* (PMC_OCR2) Selection of Main RC Oscillator Calibration Bits for 12 MHz Position */
#define PMC_OCR2_SEL12_Msk                    (_UINT32_(0x1) << PMC_OCR2_SEL12_Pos)                /* (PMC_OCR2) Selection of Main RC Oscillator Calibration Bits for 12 MHz Mask */
#define PMC_OCR2_SEL12(value)                 (PMC_OCR2_SEL12_Msk & (_UINT32_(value) << PMC_OCR2_SEL12_Pos)) /* Assigment of value for SEL12 in the PMC_OCR2 register */
#define PMC_OCR2_CAL10_Pos                    _UINT32_(24)                                         /* (PMC_OCR2) Main RC Oscillator Calibration Bits for 10 MHz Position */
#define PMC_OCR2_CAL10_Msk                    (_UINT32_(0x7F) << PMC_OCR2_CAL10_Pos)               /* (PMC_OCR2) Main RC Oscillator Calibration Bits for 10 MHz Mask */
#define PMC_OCR2_CAL10(value)                 (PMC_OCR2_CAL10_Msk & (_UINT32_(value) << PMC_OCR2_CAL10_Pos)) /* Assigment of value for CAL10 in the PMC_OCR2 register */
#define PMC_OCR2_SEL10_Pos                    _UINT32_(31)                                         /* (PMC_OCR2) Selection of Main RC Oscillator Calibration Bits for 10 MHz Position */
#define PMC_OCR2_SEL10_Msk                    (_UINT32_(0x1) << PMC_OCR2_SEL10_Pos)                /* (PMC_OCR2) Selection of Main RC Oscillator Calibration Bits for 10 MHz Mask */
#define PMC_OCR2_SEL10(value)                 (PMC_OCR2_SEL10_Msk & (_UINT32_(value) << PMC_OCR2_SEL10_Pos)) /* Assigment of value for SEL10 in the PMC_OCR2 register */
#define PMC_OCR2_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PMC_OCR2) Register Mask  */


/** \brief PMC register offsets definitions */
#define PMC_SCER_REG_OFST              _UINT32_(0x00)      /* (PMC_SCER) System Clock Enable Register Offset */
#define PMC_SCDR_REG_OFST              _UINT32_(0x04)      /* (PMC_SCDR) System Clock Disable Register Offset */
#define PMC_SCSR_REG_OFST              _UINT32_(0x08)      /* (PMC_SCSR) System Clock Status Register Offset */
#define CKGR_MOR_REG_OFST              _UINT32_(0x20)      /* (CKGR_MOR) Main Oscillator Register Offset */
#define CKGR_MCFR_REG_OFST             _UINT32_(0x24)      /* (CKGR_MCFR) Main Clock Frequency Register Offset */
#define CKGR_PLLAR_REG_OFST            _UINT32_(0x28)      /* (CKGR_PLLAR) PLLA Register Offset */
#define CKGR_PLLBR_REG_OFST            _UINT32_(0x2C)      /* (CKGR_PLLBR) PLLB Register Offset */
#define PMC_MCKR_REG_OFST              _UINT32_(0x30)      /* (PMC_MCKR) Master Clock Register Offset */
#define PMC_PCK_REG_OFST               _UINT32_(0x40)      /* (PMC_PCK) Programmable Clock Register Offset */
#define PMC_PCK0_REG_OFST              _UINT32_(0x40)      /* (PMC_PCK0) Programmable Clock Register Offset */
#define PMC_PCK1_REG_OFST              _UINT32_(0x44)      /* (PMC_PCK1) Programmable Clock Register Offset */
#define PMC_PCK2_REG_OFST              _UINT32_(0x48)      /* (PMC_PCK2) Programmable Clock Register Offset */
#define PMC_PCK3_REG_OFST              _UINT32_(0x4C)      /* (PMC_PCK3) Programmable Clock Register Offset */
#define PMC_IER_REG_OFST               _UINT32_(0x60)      /* (PMC_IER) Interrupt Enable Register Offset */
#define PMC_IDR_REG_OFST               _UINT32_(0x64)      /* (PMC_IDR) Interrupt Disable Register Offset */
#define PMC_SR_REG_OFST                _UINT32_(0x68)      /* (PMC_SR) Status Register Offset */
#define PMC_IMR_REG_OFST               _UINT32_(0x6C)      /* (PMC_IMR) Interrupt Mask Register Offset */
#define PMC_FOCR_REG_OFST              _UINT32_(0x78)      /* (PMC_FOCR) Fault Output Clear Register Offset */
#define PMC_PLL_CFG_REG_OFST           _UINT32_(0x80)      /* (PMC_PLL_CFG) PLL Configuration Register Offset */
#define PMC_WPMR_REG_OFST              _UINT32_(0xE4)      /* (PMC_WPMR) Write Protection Mode Register Offset */
#define PMC_WPSR_REG_OFST              _UINT32_(0xE8)      /* (PMC_WPSR) Write Protection Status Register Offset */
#define PMC_PCR_REG_OFST               _UINT32_(0x10C)     /* (PMC_PCR) Peripheral Control Register Offset */
#define PMC_OCR1_REG_OFST              _UINT32_(0x110)     /* (PMC_OCR1) Oscillator Calibration Register Offset */
#define PMC_PMMR_REG_OFST              _UINT32_(0x130)     /* (PMC_PMMR) PLL Maximum Multiplier Value Register Offset */
#define PMC_CPULIM_REG_OFST            _UINT32_(0x160)     /* (PMC_CPULIM) CPU Monitor Limits Register Offset */
#define PMC_CSR0_REG_OFST              _UINT32_(0x170)     /* (PMC_CSR0) Peripheral Clock Status Register 0 Offset */
#define PMC_CSR1_REG_OFST              _UINT32_(0x174)     /* (PMC_CSR1) Peripheral Clock Status Register 1 Offset */
#define PMC_CSR2_REG_OFST              _UINT32_(0x178)     /* (PMC_CSR2) Peripheral Clock Status Register 2 Offset */
#define PMC_CSR3_REG_OFST              _UINT32_(0x17C)     /* (PMC_CSR3) Peripheral Clock Status Register 3 Offset */
#define PMC_GCSR0_REG_OFST             _UINT32_(0x190)     /* (PMC_GCSR0) Generic Clock Status Register 0 Offset */
#define PMC_GCSR1_REG_OFST             _UINT32_(0x194)     /* (PMC_GCSR1) Generic Clock Status Register 1 Offset */
#define PMC_GCSR2_REG_OFST             _UINT32_(0x198)     /* (PMC_GCSR2) Generic Clock Status Register 2 Offset */
#define PMC_GCSR3_REG_OFST             _UINT32_(0x19C)     /* (PMC_GCSR3) Generic Clock Status Register 3 Offset */
#define PMC_OSC2_REG_OFST              _UINT32_(0x1B0)     /* (PMC_OSC2) Oscillator Control Register 2 Offset */
#define PMC_OCR2_REG_OFST              _UINT32_(0x1B4)     /* (PMC_OCR2) Oscillator Calibration Register 2 Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PMC register API structure */
typedef struct
{
  __O   uint32_t                       PMC_SCER;           /**< Offset: 0x00 ( /W  32) System Clock Enable Register */
  __O   uint32_t                       PMC_SCDR;           /**< Offset: 0x04 ( /W  32) System Clock Disable Register */
  __I   uint32_t                       PMC_SCSR;           /**< Offset: 0x08 (R/   32) System Clock Status Register */
  __I   uint8_t                        Reserved1[0x14];
  __IO  uint32_t                       CKGR_MOR;           /**< Offset: 0x20 (R/W  32) Main Oscillator Register */
  __IO  uint32_t                       CKGR_MCFR;          /**< Offset: 0x24 (R/W  32) Main Clock Frequency Register */
  __IO  uint32_t                       CKGR_PLLAR;         /**< Offset: 0x28 (R/W  32) PLLA Register */
  __IO  uint32_t                       CKGR_PLLBR;         /**< Offset: 0x2C (R/W  32) PLLB Register */
  __IO  uint32_t                       PMC_MCKR;           /**< Offset: 0x30 (R/W  32) Master Clock Register */
  __I   uint8_t                        Reserved2[0x0C];
  __IO  uint32_t                       PMC_PCK[4];         /**< Offset: 0x40 (R/W  32) Programmable Clock Register */
  __I   uint8_t                        Reserved3[0x10];
  __O   uint32_t                       PMC_IER;            /**< Offset: 0x60 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       PMC_IDR;            /**< Offset: 0x64 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       PMC_SR;             /**< Offset: 0x68 (R/   32) Status Register */
  __I   uint32_t                       PMC_IMR;            /**< Offset: 0x6C (R/   32) Interrupt Mask Register */
  __I   uint8_t                        Reserved4[0x08];
  __O   uint32_t                       PMC_FOCR;           /**< Offset: 0x78 ( /W  32) Fault Output Clear Register */
  __I   uint8_t                        Reserved5[0x04];
  __IO  uint32_t                       PMC_PLL_CFG;        /**< Offset: 0x80 (R/W  32) PLL Configuration Register */
  __I   uint8_t                        Reserved6[0x60];
  __IO  uint32_t                       PMC_WPMR;           /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       PMC_WPSR;           /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
  __I   uint8_t                        Reserved7[0x20];
  __IO  uint32_t                       PMC_PCR;            /**< Offset: 0x10C (R/W  32) Peripheral Control Register */
  __IO  uint32_t                       PMC_OCR1;           /**< Offset: 0x110 (R/W  32) Oscillator Calibration Register */
  __I   uint8_t                        Reserved8[0x1C];
  __IO  uint32_t                       PMC_PMMR;           /**< Offset: 0x130 (R/W  32) PLL Maximum Multiplier Value Register */
  __I   uint8_t                        Reserved9[0x2C];
  __IO  uint32_t                       PMC_CPULIM;         /**< Offset: 0x160 (R/W  32) CPU Monitor Limits Register */
  __I   uint8_t                        Reserved10[0x0C];
  __I   uint32_t                       PMC_CSR0;           /**< Offset: 0x170 (R/   32) Peripheral Clock Status Register 0 */
  __I   uint32_t                       PMC_CSR1;           /**< Offset: 0x174 (R/   32) Peripheral Clock Status Register 1 */
  __I   uint32_t                       PMC_CSR2;           /**< Offset: 0x178 (R/   32) Peripheral Clock Status Register 2 */
  __I   uint32_t                       PMC_CSR3;           /**< Offset: 0x17C (R/   32) Peripheral Clock Status Register 3 */
  __I   uint8_t                        Reserved11[0x10];
  __I   uint32_t                       PMC_GCSR0;          /**< Offset: 0x190 (R/   32) Generic Clock Status Register 0 */
  __I   uint32_t                       PMC_GCSR1;          /**< Offset: 0x194 (R/   32) Generic Clock Status Register 1 */
  __I   uint32_t                       PMC_GCSR2;          /**< Offset: 0x198 (R/   32) Generic Clock Status Register 2 */
  __I   uint32_t                       PMC_GCSR3;          /**< Offset: 0x19C (R/   32) Generic Clock Status Register 3 */
  __I   uint8_t                        Reserved12[0x10];
  __IO  uint32_t                       PMC_OSC2;           /**< Offset: 0x1B0 (R/W  32) Oscillator Control Register 2 */
  __IO  uint32_t                       PMC_OCR2;           /**< Offset: 0x1B4 (R/W  32) Oscillator Calibration Register 2 */
} pmc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMRH71_PMC_COMPONENT_H_ */
