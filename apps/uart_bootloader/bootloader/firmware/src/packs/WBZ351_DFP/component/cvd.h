/*
 * Component description for CVD
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
#ifndef _WBZ35_CVD_COMPONENT_H_
#define _WBZ35_CVD_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR CVD                                          */
/* ************************************************************************** */

/* -------- CVD_CVDCON : (CVD Offset: 0x00) (R/W 32) CVD Control Register -------- */
#define CVD_CVDCON_RESETVALUE                 _UINT32_(0x20000)                                    /*  (CVD_CVDCON) CVD Control Register  Reset Value */

#define CVD_CVDCON_TRIGSEL_Pos                _UINT32_(0)                                          /* (CVD_CVDCON) Selects one of 15 external trigger inputs to start scanning. Position */
#define CVD_CVDCON_TRIGSEL_Msk                (_UINT32_(0xF) << CVD_CVDCON_TRIGSEL_Pos)            /* (CVD_CVDCON) Selects one of 15 external trigger inputs to start scanning. Mask */
#define CVD_CVDCON_TRIGSEL(value)             (CVD_CVDCON_TRIGSEL_Msk & (_UINT32_(value) << CVD_CVDCON_TRIGSEL_Pos)) /* Assigment of value for TRIGSEL in the CVD_CVDCON register */
#define CVD_CVDCON_CLKSEL_Pos                 _UINT32_(4)                                          /* (CVD_CVDCON) Clock Select for FSM00= UPB_FSM_CLK01= External clock source 110= External clock source 211= External clock source 3 Position */
#define CVD_CVDCON_CLKSEL_Msk                 (_UINT32_(0x3) << CVD_CVDCON_CLKSEL_Pos)             /* (CVD_CVDCON) Clock Select for FSM00= UPB_FSM_CLK01= External clock source 110= External clock source 211= External clock source 3 Mask */
#define CVD_CVDCON_CLKSEL(value)              (CVD_CVDCON_CLKSEL_Msk & (_UINT32_(value) << CVD_CVDCON_CLKSEL_Pos)) /* Assigment of value for CLKSEL in the CVD_CVDCON register */
#define CVD_CVDCON_FIFOTH_Pos                 _UINT32_(8)                                          /* (CVD_CVDCON) Threshold for the results FIFO that will cause an interrupt and watermark FIFOWM status bitassertion Position */
#define CVD_CVDCON_FIFOTH_Msk                 (_UINT32_(0x3FF) << CVD_CVDCON_FIFOTH_Pos)           /* (CVD_CVDCON) Threshold for the results FIFO that will cause an interrupt and watermark FIFOWM status bitassertion Mask */
#define CVD_CVDCON_FIFOTH(value)              (CVD_CVDCON_FIFOTH_Msk & (_UINT32_(value) << CVD_CVDCON_FIFOTH_Pos)) /* Assigment of value for FIFOTH in the CVD_CVDCON register */
#define CVD_CVDCON_FIFOTHIEN_Pos              _UINT32_(18)                                         /* (CVD_CVDCON) FIFO Threshold Interrupt Enable1= Controller will assert an interrupt when the FIFO threshold is met0= Controller will not assert an interrupt when the FIFO threshold is met Position */
#define CVD_CVDCON_FIFOTHIEN_Msk              (_UINT32_(0x1) << CVD_CVDCON_FIFOTHIEN_Pos)          /* (CVD_CVDCON) FIFO Threshold Interrupt Enable1= Controller will assert an interrupt when the FIFO threshold is met0= Controller will not assert an interrupt when the FIFO threshold is met Mask */
#define CVD_CVDCON_FIFOTHIEN(value)           (CVD_CVDCON_FIFOTHIEN_Msk & (_UINT32_(value) << CVD_CVDCON_FIFOTHIEN_Pos)) /* Assigment of value for FIFOTHIEN in the CVD_CVDCON register */
#define CVD_CVDCON_CVDIEN_Pos                 _UINT32_(19)                                         /* (CVD_CVDCON) Global Interrupt Enable for full macro. Gates any enabled FIFO or Scan Descriptor interrupts. Position */
#define CVD_CVDCON_CVDIEN_Msk                 (_UINT32_(0x1) << CVD_CVDCON_CVDIEN_Pos)             /* (CVD_CVDCON) Global Interrupt Enable for full macro. Gates any enabled FIFO or Scan Descriptor interrupts. Mask */
#define CVD_CVDCON_CVDIEN(value)              (CVD_CVDCON_CVDIEN_Msk & (_UINT32_(value) << CVD_CVDCON_CVDIEN_Pos)) /* Assigment of value for CVDIEN in the CVD_CVDCON register */
#define CVD_CVDCON_THSTR_Pos                  _UINT32_(23)                                         /* (CVD_CVDCON) Threshold Store Mode1= Store only results which exceed the programmed threshold for the Scan Descriptor0= Store all results in FIFO Position */
#define CVD_CVDCON_THSTR_Msk                  (_UINT32_(0x1) << CVD_CVDCON_THSTR_Pos)              /* (CVD_CVDCON) Threshold Store Mode1= Store only results which exceed the programmed threshold for the Scan Descriptor0= Store all results in FIFO Mask */
#define CVD_CVDCON_THSTR(value)               (CVD_CVDCON_THSTR_Msk & (_UINT32_(value) << CVD_CVDCON_THSTR_Pos)) /* Assigment of value for THSTR in the CVD_CVDCON register */
#define CVD_CVDCON_SWTRIG_Pos                 _UINT32_(24)                                         /* (CVD_CVDCON) Software Trigger control. Starts scan manuallyCleared by Hardware. Position */
#define CVD_CVDCON_SWTRIG_Msk                 (_UINT32_(0x1) << CVD_CVDCON_SWTRIG_Pos)             /* (CVD_CVDCON) Software Trigger control. Starts scan manuallyCleared by Hardware. Mask */
#define CVD_CVDCON_SWTRIG(value)              (CVD_CVDCON_SWTRIG_Msk & (_UINT32_(value) << CVD_CVDCON_SWTRIG_Pos)) /* Assigment of value for SWTRIG in the CVD_CVDCON register */
#define CVD_CVDCON_ABORT_Pos                  _UINT32_(25)                                         /* (CVD_CVDCON) Instructs the controller to abort the current scan. The controller will move on to the next enabled ScanDescriptor if there is one, else it will go idle.Cleared by Hardware Position */
#define CVD_CVDCON_ABORT_Msk                  (_UINT32_(0x1) << CVD_CVDCON_ABORT_Pos)              /* (CVD_CVDCON) Instructs the controller to abort the current scan. The controller will move on to the next enabled ScanDescriptor if there is one, else it will go idle.Cleared by Hardware Mask */
#define CVD_CVDCON_ABORT(value)               (CVD_CVDCON_ABORT_Msk & (_UINT32_(value) << CVD_CVDCON_ABORT_Pos)) /* Assigment of value for ABORT in the CVD_CVDCON register */
#define CVD_CVDCON_SDWREN_Pos                 _UINT32_(27)                                         /* (CVD_CVDCON) Scan Descriptor Write Enable1= Enables writes to the scan descriptors, and prevents Scan Descriptor EN bits from being decoded and captured intoFSM_CLK domain by the Descriptor Selection Logic. This simplifies synchronization issues. The currently active ScanDescriptor registers should NOT be written even if SDWREN is asserted, as the FSM uses those bits directly without asynchronizer as a means of saving gates.0= Prevents writes to the scan descriptors, and enables the Descriptor Selector Logic to decode the next Scan Descriptor to run and capture it into the FSM domain. Position */
#define CVD_CVDCON_SDWREN_Msk                 (_UINT32_(0x1) << CVD_CVDCON_SDWREN_Pos)             /* (CVD_CVDCON) Scan Descriptor Write Enable1= Enables writes to the scan descriptors, and prevents Scan Descriptor EN bits from being decoded and captured intoFSM_CLK domain by the Descriptor Selection Logic. This simplifies synchronization issues. The currently active ScanDescriptor registers should NOT be written even if SDWREN is asserted, as the FSM uses those bits directly without asynchronizer as a means of saving gates.0= Prevents writes to the scan descriptors, and enables the Descriptor Selector Logic to decode the next Scan Descriptor to run and capture it into the FSM domain. Mask */
#define CVD_CVDCON_SDWREN(value)              (CVD_CVDCON_SDWREN_Msk & (_UINT32_(value) << CVD_CVDCON_SDWREN_Pos)) /* Assigment of value for SDWREN in the CVD_CVDCON register */
#define CVD_CVDCON_ORDER_Pos                  _UINT32_(28)                                         /* (CVD_CVDCON) RX/TX Loop Order1= Scan all requested TX indexes, then increment RX index and continue0= Scan all requested RX indexes, then increment TX index and continue Position */
#define CVD_CVDCON_ORDER_Msk                  (_UINT32_(0x1) << CVD_CVDCON_ORDER_Pos)              /* (CVD_CVDCON) RX/TX Loop Order1= Scan all requested TX indexes, then increment RX index and continue0= Scan all requested RX indexes, then increment TX index and continue Mask */
#define CVD_CVDCON_ORDER(value)               (CVD_CVDCON_ORDER_Msk & (_UINT32_(value) << CVD_CVDCON_ORDER_Pos)) /* Assigment of value for ORDER in the CVD_CVDCON register */
#define CVD_CVDCON_SIDL_Pos                   _UINT32_(29)                                         /* (CVD_CVDCON) Stop in Idle Mode bit1= CVD controller halts when device enters Idle mode0= CVD controller continues running in Idle mode Position */
#define CVD_CVDCON_SIDL_Msk                   (_UINT32_(0x1) << CVD_CVDCON_SIDL_Pos)               /* (CVD_CVDCON) Stop in Idle Mode bit1= CVD controller halts when device enters Idle mode0= CVD controller continues running in Idle mode Mask */
#define CVD_CVDCON_SIDL(value)                (CVD_CVDCON_SIDL_Msk & (_UINT32_(value) << CVD_CVDCON_SIDL_Pos)) /* Assigment of value for SIDL in the CVD_CVDCON register */
#define CVD_CVDCON_FRZ_Pos                    _UINT32_(30)                                         /* (CVD_CVDCON) Freeze Mode1= CVD controller halts in debugger mode0= CVD controller runs in debugger mode Position */
#define CVD_CVDCON_FRZ_Msk                    (_UINT32_(0x1) << CVD_CVDCON_FRZ_Pos)                /* (CVD_CVDCON) Freeze Mode1= CVD controller halts in debugger mode0= CVD controller runs in debugger mode Mask */
#define CVD_CVDCON_FRZ(value)                 (CVD_CVDCON_FRZ_Msk & (_UINT32_(value) << CVD_CVDCON_FRZ_Pos)) /* Assigment of value for FRZ in the CVD_CVDCON register */
#define CVD_CVDCON_ON_Pos                     _UINT32_(31)                                         /* (CVD_CVDCON) Enables the State Machine to scan enabled Scan Descriptors upon next trigger. Position */
#define CVD_CVDCON_ON_Msk                     (_UINT32_(0x1) << CVD_CVDCON_ON_Pos)                 /* (CVD_CVDCON) Enables the State Machine to scan enabled Scan Descriptors upon next trigger. Mask */
#define CVD_CVDCON_ON(value)                  (CVD_CVDCON_ON_Msk & (_UINT32_(value) << CVD_CVDCON_ON_Pos)) /* Assigment of value for ON in the CVD_CVDCON register */
#define CVD_CVDCON_Msk                        _UINT32_(0xFB8FFF3F)                                 /* (CVD_CVDCON) Register Mask  */


/* -------- CVD_CVDADC : (CVD Offset: 0x04) (R/W 32) CVD ADC Configuration Register -------- */
#define CVD_CVDADC_RESETVALUE                 _UINT32_(0x00)                                       /*  (CVD_CVDADC) CVD ADC Configuration Register  Reset Value */

#define CVD_CVDADC_SELRES_Pos                 _UINT32_(0)                                          /* (CVD_CVDADC) Shared ADC Resolution bits Position */
#define CVD_CVDADC_SELRES_Msk                 (_UINT32_(0x3) << CVD_CVDADC_SELRES_Pos)             /* (CVD_CVDADC) Shared ADC Resolution bits Mask */
#define CVD_CVDADC_SELRES(value)              (CVD_CVDADC_SELRES_Msk & (_UINT32_(value) << CVD_CVDADC_SELRES_Pos)) /* Assigment of value for SELRES in the CVD_CVDADC register */
#define CVD_CVDADC_DIFFPEN_Pos                _UINT32_(2)                                          /* (CVD_CVDADC) Control differential mode operation of ANN0 Position */
#define CVD_CVDADC_DIFFPEN_Msk                (_UINT32_(0x1) << CVD_CVDADC_DIFFPEN_Pos)            /* (CVD_CVDADC) Control differential mode operation of ANN0 Mask */
#define CVD_CVDADC_DIFFPEN(value)             (CVD_CVDADC_DIFFPEN_Msk & (_UINT32_(value) << CVD_CVDADC_DIFFPEN_Pos)) /* Assigment of value for DIFFPEN in the CVD_CVDADC register */
#define CVD_CVDADC_DIGEN_Pos                  _UINT32_(3)                                          /* (CVD_CVDADC) Control differential mode operation of ANN0 Position */
#define CVD_CVDADC_DIGEN_Msk                  (_UINT32_(0x1) << CVD_CVDADC_DIGEN_Pos)              /* (CVD_CVDADC) Control differential mode operation of ANN0 Mask */
#define CVD_CVDADC_DIGEN(value)               (CVD_CVDADC_DIGEN_Msk & (_UINT32_(value) << CVD_CVDADC_DIGEN_Pos)) /* Assigment of value for DIGEN in the CVD_CVDADC register */
#define CVD_CVDADC_Msk                        _UINT32_(0x0000000F)                                 /* (CVD_CVDADC) Register Mask  */


/* -------- CVD_CVDSTAT : (CVD Offset: 0x08) (R/W 32) CVD Status Register -------- */
#define CVD_CVDSTAT_RESETVALUE                _UINT32_(0x20000000)                                 /*  (CVD_CVDSTAT) CVD Status Register  Reset Value */

#define CVD_CVDSTAT_SD1BUSY_Pos               _UINT32_(0)                                          /* (CVD_CVDSTAT) Scan Descriptor 1 is in progress Position */
#define CVD_CVDSTAT_SD1BUSY_Msk               (_UINT32_(0x1) << CVD_CVDSTAT_SD1BUSY_Pos)           /* (CVD_CVDSTAT) Scan Descriptor 1 is in progress Mask */
#define CVD_CVDSTAT_SD1BUSY(value)            (CVD_CVDSTAT_SD1BUSY_Msk & (_UINT32_(value) << CVD_CVDSTAT_SD1BUSY_Pos)) /* Assigment of value for SD1BUSY in the CVD_CVDSTAT register */
#define CVD_CVDSTAT_SD1DONE_Pos               _UINT32_(1)                                          /* (CVD_CVDSTAT) Core will set this bit if Scan Descriptor 1 has completed at least once. Core will clear this bit uponreceiving next trigger for Scan Descriptor 1. Position */
#define CVD_CVDSTAT_SD1DONE_Msk               (_UINT32_(0x1) << CVD_CVDSTAT_SD1DONE_Pos)           /* (CVD_CVDSTAT) Core will set this bit if Scan Descriptor 1 has completed at least once. Core will clear this bit uponreceiving next trigger for Scan Descriptor 1. Mask */
#define CVD_CVDSTAT_SD1DONE(value)            (CVD_CVDSTAT_SD1DONE_Msk & (_UINT32_(value) << CVD_CVDSTAT_SD1DONE_Pos)) /* Assigment of value for SD1DONE in the CVD_CVDSTAT register */
#define CVD_CVDSTAT_SD1INT_Pos                _UINT32_(2)                                          /* (CVD_CVDSTAT) Scan Descriptor 1 has caused an interrupt Position */
#define CVD_CVDSTAT_SD1INT_Msk                (_UINT32_(0x1) << CVD_CVDSTAT_SD1INT_Pos)            /* (CVD_CVDSTAT) Scan Descriptor 1 has caused an interrupt Mask */
#define CVD_CVDSTAT_SD1INT(value)             (CVD_CVDSTAT_SD1INT_Msk & (_UINT32_(value) << CVD_CVDSTAT_SD1INT_Pos)) /* Assigment of value for SD1INT in the CVD_CVDSTAT register */
#define CVD_CVDSTAT_SD2BUSY_Pos               _UINT32_(4)                                          /* (CVD_CVDSTAT) Scan Descriptor 2 is in progress Position */
#define CVD_CVDSTAT_SD2BUSY_Msk               (_UINT32_(0x1) << CVD_CVDSTAT_SD2BUSY_Pos)           /* (CVD_CVDSTAT) Scan Descriptor 2 is in progress Mask */
#define CVD_CVDSTAT_SD2BUSY(value)            (CVD_CVDSTAT_SD2BUSY_Msk & (_UINT32_(value) << CVD_CVDSTAT_SD2BUSY_Pos)) /* Assigment of value for SD2BUSY in the CVD_CVDSTAT register */
#define CVD_CVDSTAT_SD2DONE_Pos               _UINT32_(5)                                          /* (CVD_CVDSTAT) Core will set this bit if Scan Descriptor 2 has completed at least once. Core will clear this bit uponreceiving next trigger for Scan Descriptor 2. Position */
#define CVD_CVDSTAT_SD2DONE_Msk               (_UINT32_(0x1) << CVD_CVDSTAT_SD2DONE_Pos)           /* (CVD_CVDSTAT) Core will set this bit if Scan Descriptor 2 has completed at least once. Core will clear this bit uponreceiving next trigger for Scan Descriptor 2. Mask */
#define CVD_CVDSTAT_SD2DONE(value)            (CVD_CVDSTAT_SD2DONE_Msk & (_UINT32_(value) << CVD_CVDSTAT_SD2DONE_Pos)) /* Assigment of value for SD2DONE in the CVD_CVDSTAT register */
#define CVD_CVDSTAT_SD2INT_Pos                _UINT32_(6)                                          /* (CVD_CVDSTAT) Scan Descriptor 2 has caused an interrupt Position */
#define CVD_CVDSTAT_SD2INT_Msk                (_UINT32_(0x1) << CVD_CVDSTAT_SD2INT_Pos)            /* (CVD_CVDSTAT) Scan Descriptor 2 has caused an interrupt Mask */
#define CVD_CVDSTAT_SD2INT(value)             (CVD_CVDSTAT_SD2INT_Msk & (_UINT32_(value) << CVD_CVDSTAT_SD2INT_Pos)) /* Assigment of value for SD2INT in the CVD_CVDSTAT register */
#define CVD_CVDSTAT_SD3BUSY_Pos               _UINT32_(8)                                          /* (CVD_CVDSTAT) Scan Descriptor 3 is in progress Position */
#define CVD_CVDSTAT_SD3BUSY_Msk               (_UINT32_(0x1) << CVD_CVDSTAT_SD3BUSY_Pos)           /* (CVD_CVDSTAT) Scan Descriptor 3 is in progress Mask */
#define CVD_CVDSTAT_SD3BUSY(value)            (CVD_CVDSTAT_SD3BUSY_Msk & (_UINT32_(value) << CVD_CVDSTAT_SD3BUSY_Pos)) /* Assigment of value for SD3BUSY in the CVD_CVDSTAT register */
#define CVD_CVDSTAT_SD3DONE_Pos               _UINT32_(9)                                          /* (CVD_CVDSTAT) Core will set this bit if Scan Descriptor 3 has completed at least once. Core will clear this bit uponreceiving next trigger for Scan Descriptor 3. Position */
#define CVD_CVDSTAT_SD3DONE_Msk               (_UINT32_(0x1) << CVD_CVDSTAT_SD3DONE_Pos)           /* (CVD_CVDSTAT) Core will set this bit if Scan Descriptor 3 has completed at least once. Core will clear this bit uponreceiving next trigger for Scan Descriptor 3. Mask */
#define CVD_CVDSTAT_SD3DONE(value)            (CVD_CVDSTAT_SD3DONE_Msk & (_UINT32_(value) << CVD_CVDSTAT_SD3DONE_Pos)) /* Assigment of value for SD3DONE in the CVD_CVDSTAT register */
#define CVD_CVDSTAT_SD3INT_Pos                _UINT32_(10)                                         /* (CVD_CVDSTAT) Scan Descriptor 3 has caused an interrupt Position */
#define CVD_CVDSTAT_SD3INT_Msk                (_UINT32_(0x1) << CVD_CVDSTAT_SD3INT_Pos)            /* (CVD_CVDSTAT) Scan Descriptor 3 has caused an interrupt Mask */
#define CVD_CVDSTAT_SD3INT(value)             (CVD_CVDSTAT_SD3INT_Msk & (_UINT32_(value) << CVD_CVDSTAT_SD3INT_Pos)) /* Assigment of value for SD3INT in the CVD_CVDSTAT register */
#define CVD_CVDSTAT_SD4BUSY_Pos               _UINT32_(12)                                         /* (CVD_CVDSTAT) Scan Descriptor 4 is in progress Position */
#define CVD_CVDSTAT_SD4BUSY_Msk               (_UINT32_(0x1) << CVD_CVDSTAT_SD4BUSY_Pos)           /* (CVD_CVDSTAT) Scan Descriptor 4 is in progress Mask */
#define CVD_CVDSTAT_SD4BUSY(value)            (CVD_CVDSTAT_SD4BUSY_Msk & (_UINT32_(value) << CVD_CVDSTAT_SD4BUSY_Pos)) /* Assigment of value for SD4BUSY in the CVD_CVDSTAT register */
#define CVD_CVDSTAT_SD4DONE_Pos               _UINT32_(13)                                         /* (CVD_CVDSTAT) Core will set this bit if Scan Descriptor 4 has completed at least once. Core will clear this bit uponreceiving next trigger for Scan Descriptor 4. Position */
#define CVD_CVDSTAT_SD4DONE_Msk               (_UINT32_(0x1) << CVD_CVDSTAT_SD4DONE_Pos)           /* (CVD_CVDSTAT) Core will set this bit if Scan Descriptor 4 has completed at least once. Core will clear this bit uponreceiving next trigger for Scan Descriptor 4. Mask */
#define CVD_CVDSTAT_SD4DONE(value)            (CVD_CVDSTAT_SD4DONE_Msk & (_UINT32_(value) << CVD_CVDSTAT_SD4DONE_Pos)) /* Assigment of value for SD4DONE in the CVD_CVDSTAT register */
#define CVD_CVDSTAT_SD4INT_Pos                _UINT32_(14)                                         /* (CVD_CVDSTAT) Scan Descriptor 4 has caused an interrupt. Position */
#define CVD_CVDSTAT_SD4INT_Msk                (_UINT32_(0x1) << CVD_CVDSTAT_SD4INT_Pos)            /* (CVD_CVDSTAT) Scan Descriptor 4 has caused an interrupt. Mask */
#define CVD_CVDSTAT_SD4INT(value)             (CVD_CVDSTAT_SD4INT_Msk & (_UINT32_(value) << CVD_CVDSTAT_SD4INT_Pos)) /* Assigment of value for SD4INT in the CVD_CVDSTAT register */
#define CVD_CVDSTAT_FIFOCNT_Pos               _UINT32_(16)                                         /* (CVD_CVDSTAT) Results FIFO word count: Indicates the number of words in the Results FIFO. Position */
#define CVD_CVDSTAT_FIFOCNT_Msk               (_UINT32_(0x3FF) << CVD_CVDSTAT_FIFOCNT_Pos)         /* (CVD_CVDSTAT) Results FIFO word count: Indicates the number of words in the Results FIFO. Mask */
#define CVD_CVDSTAT_FIFOCNT(value)            (CVD_CVDSTAT_FIFOCNT_Msk & (_UINT32_(value) << CVD_CVDSTAT_FIFOCNT_Pos)) /* Assigment of value for FIFOCNT in the CVD_CVDSTAT register */
#define CVD_CVDSTAT_FIFOMT_Pos                _UINT32_(29)                                         /* (CVD_CVDSTAT) The Results FIFO is empty. Position */
#define CVD_CVDSTAT_FIFOMT_Msk                (_UINT32_(0x1) << CVD_CVDSTAT_FIFOMT_Pos)            /* (CVD_CVDSTAT) The Results FIFO is empty. Mask */
#define CVD_CVDSTAT_FIFOMT(value)             (CVD_CVDSTAT_FIFOMT_Msk & (_UINT32_(value) << CVD_CVDSTAT_FIFOMT_Pos)) /* Assigment of value for FIFOMT in the CVD_CVDSTAT register */
#define CVD_CVDSTAT_FIFOWM_Pos                _UINT32_(30)                                         /* (CVD_CVDSTAT) The Results FIFO has reached the programmed FIFOTHRESH threshold. Position */
#define CVD_CVDSTAT_FIFOWM_Msk                (_UINT32_(0x1) << CVD_CVDSTAT_FIFOWM_Pos)            /* (CVD_CVDSTAT) The Results FIFO has reached the programmed FIFOTHRESH threshold. Mask */
#define CVD_CVDSTAT_FIFOWM(value)             (CVD_CVDSTAT_FIFOWM_Msk & (_UINT32_(value) << CVD_CVDSTAT_FIFOWM_Pos)) /* Assigment of value for FIFOWM in the CVD_CVDSTAT register */
#define CVD_CVDSTAT_FIFOFULL_Pos              _UINT32_(31)                                         /* (CVD_CVDSTAT) The Results FIFO is full. Position */
#define CVD_CVDSTAT_FIFOFULL_Msk              (_UINT32_(0x1) << CVD_CVDSTAT_FIFOFULL_Pos)          /* (CVD_CVDSTAT) The Results FIFO is full. Mask */
#define CVD_CVDSTAT_FIFOFULL(value)           (CVD_CVDSTAT_FIFOFULL_Msk & (_UINT32_(value) << CVD_CVDSTAT_FIFOFULL_Pos)) /* Assigment of value for FIFOFULL in the CVD_CVDSTAT register */
#define CVD_CVDSTAT_Msk                       _UINT32_(0xE3FF7777)                                 /* (CVD_CVDSTAT) Register Mask  */


/* -------- CVD_CVDRESH : (CVD Offset: 0x10) ( R/ 32) CVD RESULTS POS FIFO Read Register (CVDRESH) -------- */
#define CVD_CVDRESH_RESETVALUE                _UINT32_(0x00)                                       /*  (CVD_CVDRESH) CVD RESULTS POS FIFO Read Register (CVDRESH)  Reset Value */

#define CVD_CVDRESH_POS_Pos                   _UINT32_(0)                                          /* (CVD_CVDRESH) The accumulated result of the positive-side measurements.Since the controller supports up to 128x oversampling, each polarity can accumulate up to 23 bits when using a 16-bitADC. The accumulation is not shifted back down to create an average. Therefore, if oversampling was requested, theSW will need to account for the left-shift of the result returned. Position */
#define CVD_CVDRESH_POS_Msk                   (_UINT32_(0xFFFFFF) << CVD_CVDRESH_POS_Pos)          /* (CVD_CVDRESH) The accumulated result of the positive-side measurements.Since the controller supports up to 128x oversampling, each polarity can accumulate up to 23 bits when using a 16-bitADC. The accumulation is not shifted back down to create an average. Therefore, if oversampling was requested, theSW will need to account for the left-shift of the result returned. Mask */
#define CVD_CVDRESH_POS(value)                (CVD_CVDRESH_POS_Msk & (_UINT32_(value) << CVD_CVDRESH_POS_Pos)) /* Assigment of value for POS in the CVD_CVDRESH register */
#define CVD_CVDRESH_Msk                       _UINT32_(0x00FFFFFF)                                 /* (CVD_CVDRESH) Register Mask  */


/* -------- CVD_CVDRESL : (CVD Offset: 0x14) ( R/ 32) CVD RESULTS NEG FIFO Read Register -------- */
#define CVD_CVDRESL_RESETVALUE                _UINT32_(0x00)                                       /*  (CVD_CVDRESL) CVD RESULTS NEG FIFO Read Register  Reset Value */

#define CVD_CVDRESL_NEG_Pos                   _UINT32_(0)                                          /* (CVD_CVDRESL) The accumulated result of the negative-side measurements.Since the controller supports up to 128x oversampling, each polarity can accumulate up to 23 bits when using a 16-bitADC. The accumulation is not shifted back down to create an average. Therefore, if oversampling was requested, theSW will need to account for the left-shift of the result returned. Position */
#define CVD_CVDRESL_NEG_Msk                   (_UINT32_(0xFFFFFF) << CVD_CVDRESL_NEG_Pos)          /* (CVD_CVDRESL) The accumulated result of the negative-side measurements.Since the controller supports up to 128x oversampling, each polarity can accumulate up to 23 bits when using a 16-bitADC. The accumulation is not shifted back down to create an average. Therefore, if oversampling was requested, theSW will need to account for the left-shift of the result returned. Mask */
#define CVD_CVDRESL_NEG(value)                (CVD_CVDRESL_NEG_Msk & (_UINT32_(value) << CVD_CVDRESL_NEG_Pos)) /* Assigment of value for NEG in the CVD_CVDRESL register */
#define CVD_CVDRESL_Msk                       _UINT32_(0x00FFFFFF)                                 /* (CVD_CVDRESL) Register Mask  */


/* -------- CVD_CVDRESD : (CVD Offset: 0x18) ( R/ 32) CVD RESULTS DESCRIPTOR FIFO Read Register -------- */
#define CVD_CVDRESD_RESETVALUE                _UINT32_(0x00)                                       /*  (CVD_CVDRESD) CVD RESULTS DESCRIPTOR FIFO Read Register  Reset Value */

#define CVD_CVDRESD_DELTA_Pos                 _UINT32_(0)                                          /* (CVD_CVDRESD) Delta of the accumulated results of the negative-side and positive-side measurements. Position */
#define CVD_CVDRESD_DELTA_Msk                 (_UINT32_(0x3FFFF) << CVD_CVDRESD_DELTA_Pos)         /* (CVD_CVDRESD) Delta of the accumulated results of the negative-side and positive-side measurements. Mask */
#define CVD_CVDRESD_DELTA(value)              (CVD_CVDRESD_DELTA_Msk & (_UINT32_(value) << CVD_CVDRESD_DELTA_Pos)) /* Assigment of value for DELTA in the CVD_CVDRESD register */
#define CVD_CVDRESD_RXINDEX_Pos               _UINT32_(19)                                         /* (CVD_CVDRESD) Receive Index for this result. If the Stride of the Scan Descriptor was more than one, the ReceiveIndex indicates the first one of the group. Position */
#define CVD_CVDRESD_RXINDEX_Msk               (_UINT32_(0x1F) << CVD_CVDRESD_RXINDEX_Pos)          /* (CVD_CVDRESD) Receive Index for this result. If the Stride of the Scan Descriptor was more than one, the ReceiveIndex indicates the first one of the group. Mask */
#define CVD_CVDRESD_RXINDEX(value)            (CVD_CVDRESD_RXINDEX_Msk & (_UINT32_(value) << CVD_CVDRESD_RXINDEX_Pos)) /* Assigment of value for RXINDEX in the CVD_CVDRESD register */
#define CVD_CVDRESD_SDNUM_Pos                 _UINT32_(24)                                         /* (CVD_CVDRESD) Scan Descriptor Number that generated this result Position */
#define CVD_CVDRESD_SDNUM_Msk                 (_UINT32_(0x3) << CVD_CVDRESD_SDNUM_Pos)             /* (CVD_CVDRESD) Scan Descriptor Number that generated this result Mask */
#define CVD_CVDRESD_SDNUM(value)              (CVD_CVDRESD_SDNUM_Msk & (_UINT32_(value) << CVD_CVDRESD_SDNUM_Pos)) /* Assigment of value for SDNUM in the CVD_CVDRESD register */
#define CVD_CVDRESD_TXINDEX_Pos               _UINT32_(27)                                         /* (CVD_CVDRESD) Transmit Index for this result. If the Stride of the Scan Descriptor was more than one, the Transmit Index indicates the first one of the group. Position */
#define CVD_CVDRESD_TXINDEX_Msk               (_UINT32_(0x1F) << CVD_CVDRESD_TXINDEX_Pos)          /* (CVD_CVDRESD) Transmit Index for this result. If the Stride of the Scan Descriptor was more than one, the Transmit Index indicates the first one of the group. Mask */
#define CVD_CVDRESD_TXINDEX(value)            (CVD_CVDRESD_TXINDEX_Msk & (_UINT32_(value) << CVD_CVDRESD_TXINDEX_Pos)) /* Assigment of value for TXINDEX in the CVD_CVDRESD register */
#define CVD_CVDRESD_Msk                       _UINT32_(0xFBFBFFFF)                                 /* (CVD_CVDRESD) Register Mask  */


/* -------- CVD_CVDRX : (CVD Offset: 0x80) (R/W 32) CVD RECEIVE INDEX N CONFIGURATION Register -------- */
#define CVD_CVDRX_RESETVALUE                  _UINT32_(0x00)                                       /*  (CVD_CVDRX) CVD RECEIVE INDEX N CONFIGURATION Register  Reset Value */

#define CVD_CVDRX_RXAN0_Pos                   _UINT32_(0)                                          /* (CVD_CVDRX) ANx/CVDR channel to use for RX Index 4n+3 Position */
#define CVD_CVDRX_RXAN0_Msk                   (_UINT32_(0x3F) << CVD_CVDRX_RXAN0_Pos)              /* (CVD_CVDRX) ANx/CVDR channel to use for RX Index 4n+3 Mask */
#define CVD_CVDRX_RXAN0(value)                (CVD_CVDRX_RXAN0_Msk & (_UINT32_(value) << CVD_CVDRX_RXAN0_Pos)) /* Assigment of value for RXAN0 in the CVD_CVDRX register */
#define CVD_CVDRX_RXAN1_Pos                   _UINT32_(8)                                          /* (CVD_CVDRX) ANx/CVDR channel to use for RX Index 4n+3 Position */
#define CVD_CVDRX_RXAN1_Msk                   (_UINT32_(0x3F) << CVD_CVDRX_RXAN1_Pos)              /* (CVD_CVDRX) ANx/CVDR channel to use for RX Index 4n+3 Mask */
#define CVD_CVDRX_RXAN1(value)                (CVD_CVDRX_RXAN1_Msk & (_UINT32_(value) << CVD_CVDRX_RXAN1_Pos)) /* Assigment of value for RXAN1 in the CVD_CVDRX register */
#define CVD_CVDRX_RXAN2_Pos                   _UINT32_(16)                                         /* (CVD_CVDRX) ANx/CVDR channel to use for RX Index 4n+3 Position */
#define CVD_CVDRX_RXAN2_Msk                   (_UINT32_(0x3F) << CVD_CVDRX_RXAN2_Pos)              /* (CVD_CVDRX) ANx/CVDR channel to use for RX Index 4n+3 Mask */
#define CVD_CVDRX_RXAN2(value)                (CVD_CVDRX_RXAN2_Msk & (_UINT32_(value) << CVD_CVDRX_RXAN2_Pos)) /* Assigment of value for RXAN2 in the CVD_CVDRX register */
#define CVD_CVDRX_RXAN3_Pos                   _UINT32_(24)                                         /* (CVD_CVDRX) ANx/CVDR channel to use for RX Index 4n+3 Position */
#define CVD_CVDRX_RXAN3_Msk                   (_UINT32_(0x3F) << CVD_CVDRX_RXAN3_Pos)              /* (CVD_CVDRX) ANx/CVDR channel to use for RX Index 4n+3 Mask */
#define CVD_CVDRX_RXAN3(value)                (CVD_CVDRX_RXAN3_Msk & (_UINT32_(value) << CVD_CVDRX_RXAN3_Pos)) /* Assigment of value for RXAN3 in the CVD_CVDRX register */
#define CVD_CVDRX_Msk                         _UINT32_(0x3F3F3F3F)                                 /* (CVD_CVDRX) Register Mask  */


/* -------- CVD_CVDTX : (CVD Offset: 0xC0) (R/W 32) CVD TRANSMIT INDEX NCONFIGURATION -------- */
#define CVD_CVDTX_RESETVALUE                  _UINT32_(0x00)                                       /*  (CVD_CVDTX) CVD TRANSMIT INDEX NCONFIGURATION  Reset Value */

#define CVD_CVDTX_TXAN0_Pos                   _UINT32_(0)                                          /* (CVD_CVDTX) CVDT channel to use for TX Index Position */
#define CVD_CVDTX_TXAN0_Msk                   (_UINT32_(0x3F) << CVD_CVDTX_TXAN0_Pos)              /* (CVD_CVDTX) CVDT channel to use for TX Index Mask */
#define CVD_CVDTX_TXAN0(value)                (CVD_CVDTX_TXAN0_Msk & (_UINT32_(value) << CVD_CVDTX_TXAN0_Pos)) /* Assigment of value for TXAN0 in the CVD_CVDTX register */
#define CVD_CVDTX_TXAN1_Pos                   _UINT32_(8)                                          /* (CVD_CVDTX) CVDT channel to use for TX Index Position */
#define CVD_CVDTX_TXAN1_Msk                   (_UINT32_(0x3F) << CVD_CVDTX_TXAN1_Pos)              /* (CVD_CVDTX) CVDT channel to use for TX Index Mask */
#define CVD_CVDTX_TXAN1(value)                (CVD_CVDTX_TXAN1_Msk & (_UINT32_(value) << CVD_CVDTX_TXAN1_Pos)) /* Assigment of value for TXAN1 in the CVD_CVDTX register */
#define CVD_CVDTX_TXAN2_Pos                   _UINT32_(16)                                         /* (CVD_CVDTX) CVDT channel to use for TX Index Position */
#define CVD_CVDTX_TXAN2_Msk                   (_UINT32_(0x3F) << CVD_CVDTX_TXAN2_Pos)              /* (CVD_CVDTX) CVDT channel to use for TX Index Mask */
#define CVD_CVDTX_TXAN2(value)                (CVD_CVDTX_TXAN2_Msk & (_UINT32_(value) << CVD_CVDTX_TXAN2_Pos)) /* Assigment of value for TXAN2 in the CVD_CVDTX register */
#define CVD_CVDTX_TXAN3_Pos                   _UINT32_(24)                                         /* (CVD_CVDTX) CVDT channel to use for TX Index Position */
#define CVD_CVDTX_TXAN3_Msk                   (_UINT32_(0x3F) << CVD_CVDTX_TXAN3_Pos)              /* (CVD_CVDTX) CVDT channel to use for TX Index Mask */
#define CVD_CVDTX_TXAN3(value)                (CVD_CVDTX_TXAN3_Msk & (_UINT32_(value) << CVD_CVDTX_TXAN3_Pos)) /* Assigment of value for TXAN3 in the CVD_CVDTX register */
#define CVD_CVDTX_Msk                         _UINT32_(0x3F3F3F3F)                                 /* (CVD_CVDTX) Register Mask  */


/* -------- CVD_CVDSD0C1 : (CVD Offset: 0x100) (R/W 32) CVD SCAN DESCRIPTOR N CONTROL1 REGISTER -------- */
#define CVD_CVDSD0C1_RESETVALUE               _UINT32_(0x00)                                       /*  (CVD_CVDSD0C1) CVD SCAN DESCRIPTOR N CONTROL1 REGISTER  Reset Value */

#define CVD_CVDSD0C1_SDOVRSAMP_Pos            _UINT32_(0)                                          /* (CVD_CVDSD0C1) Scan Descriptor Over Sampling0= One measurement1= Two measurements accumulated...127= 128 measurements accumulated Position */
#define CVD_CVDSD0C1_SDOVRSAMP_Msk            (_UINT32_(0x7F) << CVD_CVDSD0C1_SDOVRSAMP_Pos)       /* (CVD_CVDSD0C1) Scan Descriptor Over Sampling0= One measurement1= Two measurements accumulated...127= 128 measurements accumulated Mask */
#define CVD_CVDSD0C1_SDOVRSAMP(value)         (CVD_CVDSD0C1_SDOVRSAMP_Msk & (_UINT32_(value) << CVD_CVDSD0C1_SDOVRSAMP_Pos)) /* Assigment of value for SDOVRSAMP in the CVD_CVDSD0C1 register */
#define CVD_CVDSD0C1_SDTH_Pos                 _UINT32_(8)                                          /* (CVD_CVDSD0C1) Scan Descriptor Threshold. Position */
#define CVD_CVDSD0C1_SDTH_Msk                 (_UINT32_(0xFFFFFF) << CVD_CVDSD0C1_SDTH_Pos)        /* (CVD_CVDSD0C1) Scan Descriptor Threshold. Mask */
#define CVD_CVDSD0C1_SDTH(value)              (CVD_CVDSD0C1_SDTH_Msk & (_UINT32_(value) << CVD_CVDSD0C1_SDTH_Pos)) /* Assigment of value for SDTH in the CVD_CVDSD0C1 register */
#define CVD_CVDSD0C1_Msk                      _UINT32_(0xFFFFFF7F)                                 /* (CVD_CVDSD0C1) Register Mask  */


/* -------- CVD_CVDSD0C2 : (CVD Offset: 0x104) (R/W 32) CVD SCAN DESCRIPTOR N CONTROL2 REGISTER -------- */
#define CVD_CVDSD0C2_RESETVALUE               _UINT32_(0x00)                                       /*  (CVD_CVDSD0C2) CVD SCAN DESCRIPTOR N CONTROL2 REGISTER  Reset Value */

#define CVD_CVDSD0C2_SDRXBEG_Pos              _UINT32_(0)                                          /* (CVD_CVDSD0C2) Scan Descriptor RX Index StartDetermines the first RX index to include in a scan. Position */
#define CVD_CVDSD0C2_SDRXBEG_Msk              (_UINT32_(0x3F) << CVD_CVDSD0C2_SDRXBEG_Pos)         /* (CVD_CVDSD0C2) Scan Descriptor RX Index StartDetermines the first RX index to include in a scan. Mask */
#define CVD_CVDSD0C2_SDRXBEG(value)           (CVD_CVDSD0C2_SDRXBEG_Msk & (_UINT32_(value) << CVD_CVDSD0C2_SDRXBEG_Pos)) /* Assigment of value for SDRXBEG in the CVD_CVDSD0C2 register */
#define CVD_CVDSD0C2_SDRXSTRIDE0_Pos          _UINT32_(6)                                          /* (CVD_CVDSD0C2) Scan Descriptor RX Index StrideDetermines the number of RX Indexes included in a single measurement4'h0= One RX Index4'hF= 16 TX Indexes Position */
#define CVD_CVDSD0C2_SDRXSTRIDE0_Msk          (_UINT32_(0x3) << CVD_CVDSD0C2_SDRXSTRIDE0_Pos)      /* (CVD_CVDSD0C2) Scan Descriptor RX Index StrideDetermines the number of RX Indexes included in a single measurement4'h0= One RX Index4'hF= 16 TX Indexes Mask */
#define CVD_CVDSD0C2_SDRXSTRIDE0(value)       (CVD_CVDSD0C2_SDRXSTRIDE0_Msk & (_UINT32_(value) << CVD_CVDSD0C2_SDRXSTRIDE0_Pos)) /* Assigment of value for SDRXSTRIDE0 in the CVD_CVDSD0C2 register */
#define CVD_CVDSD0C2_SDRXEND_Pos              _UINT32_(8)                                          /* (CVD_CVDSD0C2) Scan Descriptor RX Index EndDetermines the last RX index to include in a scan.One the RX index pointer, which is incremented by the SDnRXSTRIDE+1 value, meets or exceeds this value, the RXloop of the scan is complete. Position */
#define CVD_CVDSD0C2_SDRXEND_Msk              (_UINT32_(0x3F) << CVD_CVDSD0C2_SDRXEND_Pos)         /* (CVD_CVDSD0C2) Scan Descriptor RX Index EndDetermines the last RX index to include in a scan.One the RX index pointer, which is incremented by the SDnRXSTRIDE+1 value, meets or exceeds this value, the RXloop of the scan is complete. Mask */
#define CVD_CVDSD0C2_SDRXEND(value)           (CVD_CVDSD0C2_SDRXEND_Msk & (_UINT32_(value) << CVD_CVDSD0C2_SDRXEND_Pos)) /* Assigment of value for SDRXEND in the CVD_CVDSD0C2 register */
#define CVD_CVDSD0C2_SDRXSTRIDE1_Pos          _UINT32_(14)                                         /* (CVD_CVDSD0C2) Scan Descriptor RX Index StrideDetermines the number of RX Indexes included in a single measurement4'h0= One RX Index4'hF= 16 TX Indexes Position */
#define CVD_CVDSD0C2_SDRXSTRIDE1_Msk          (_UINT32_(0x3) << CVD_CVDSD0C2_SDRXSTRIDE1_Pos)      /* (CVD_CVDSD0C2) Scan Descriptor RX Index StrideDetermines the number of RX Indexes included in a single measurement4'h0= One RX Index4'hF= 16 TX Indexes Mask */
#define CVD_CVDSD0C2_SDRXSTRIDE1(value)       (CVD_CVDSD0C2_SDRXSTRIDE1_Msk & (_UINT32_(value) << CVD_CVDSD0C2_SDRXSTRIDE1_Pos)) /* Assigment of value for SDRXSTRIDE1 in the CVD_CVDSD0C2 register */
#define CVD_CVDSD0C2_SDTXBEG_Pos              _UINT32_(16)                                         /* (CVD_CVDSD0C2) Scan Descriptor TX Index StartDetermines the first TX index to include in a scan. Position */
#define CVD_CVDSD0C2_SDTXBEG_Msk              (_UINT32_(0x3F) << CVD_CVDSD0C2_SDTXBEG_Pos)         /* (CVD_CVDSD0C2) Scan Descriptor TX Index StartDetermines the first TX index to include in a scan. Mask */
#define CVD_CVDSD0C2_SDTXBEG(value)           (CVD_CVDSD0C2_SDTXBEG_Msk & (_UINT32_(value) << CVD_CVDSD0C2_SDTXBEG_Pos)) /* Assigment of value for SDTXBEG in the CVD_CVDSD0C2 register */
#define CVD_CVDSD0C2_SDTXSTRIDE0_Pos          _UINT32_(22)                                         /* (CVD_CVDSD0C2) Scan Descriptor TX Index StrideDetermines the number of TX Indexes included in a single measurement.4'h0= One TX Index4'bF= 16TX Indexes Position */
#define CVD_CVDSD0C2_SDTXSTRIDE0_Msk          (_UINT32_(0x3) << CVD_CVDSD0C2_SDTXSTRIDE0_Pos)      /* (CVD_CVDSD0C2) Scan Descriptor TX Index StrideDetermines the number of TX Indexes included in a single measurement.4'h0= One TX Index4'bF= 16TX Indexes Mask */
#define CVD_CVDSD0C2_SDTXSTRIDE0(value)       (CVD_CVDSD0C2_SDTXSTRIDE0_Msk & (_UINT32_(value) << CVD_CVDSD0C2_SDTXSTRIDE0_Pos)) /* Assigment of value for SDTXSTRIDE0 in the CVD_CVDSD0C2 register */
#define CVD_CVDSD0C2_SDTXEND_Pos              _UINT32_(24)                                         /* (CVD_CVDSD0C2) Scan Descriptor TX Index EndDetermines the last TX index to include in a scan.One the TX index pointer, which is incremented by the SDnTXSTRIDE+1 value, meets or exceeds this value, the TXloop of the scan is complete. Position */
#define CVD_CVDSD0C2_SDTXEND_Msk              (_UINT32_(0x3F) << CVD_CVDSD0C2_SDTXEND_Pos)         /* (CVD_CVDSD0C2) Scan Descriptor TX Index EndDetermines the last TX index to include in a scan.One the TX index pointer, which is incremented by the SDnTXSTRIDE+1 value, meets or exceeds this value, the TXloop of the scan is complete. Mask */
#define CVD_CVDSD0C2_SDTXEND(value)           (CVD_CVDSD0C2_SDTXEND_Msk & (_UINT32_(value) << CVD_CVDSD0C2_SDTXEND_Pos)) /* Assigment of value for SDTXEND in the CVD_CVDSD0C2 register */
#define CVD_CVDSD0C2_SDTXSTRIDE1_Pos          _UINT32_(30)                                         /* (CVD_CVDSD0C2) Scan Descriptor TX Index StrideDetermines the number of TX Indexes included in a single measurement.4'h0= One TX Index4'bF= 16TX Indexes Position */
#define CVD_CVDSD0C2_SDTXSTRIDE1_Msk          (_UINT32_(0x3) << CVD_CVDSD0C2_SDTXSTRIDE1_Pos)      /* (CVD_CVDSD0C2) Scan Descriptor TX Index StrideDetermines the number of TX Indexes included in a single measurement.4'h0= One TX Index4'bF= 16TX Indexes Mask */
#define CVD_CVDSD0C2_SDTXSTRIDE1(value)       (CVD_CVDSD0C2_SDTXSTRIDE1_Msk & (_UINT32_(value) << CVD_CVDSD0C2_SDTXSTRIDE1_Pos)) /* Assigment of value for SDTXSTRIDE1 in the CVD_CVDSD0C2 register */
#define CVD_CVDSD0C2_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (CVD_CVDSD0C2) Register Mask  */


/* -------- CVD_CVDSD0C3 : (CVD Offset: 0x108) (R/W 32) CVD SCAN DESCRIPTOR N CONTROL3 REGISTER -------- */
#define CVD_CVDSD0C3_RESETVALUE               _UINT32_(0x00)                                       /*  (CVD_CVDSD0C3) CVD SCAN DESCRIPTOR N CONTROL3 REGISTER  Reset Value */

#define CVD_CVDSD0C3_SDCHGTIME_Pos            _UINT32_(0)                                          /* (CVD_CVDSD0C3) Scan Descriptor Charge TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the CHARGE statedriving both the internal and external capacitor nodes, as well as the TX output(s) Position */
#define CVD_CVDSD0C3_SDCHGTIME_Msk            (_UINT32_(0x7F) << CVD_CVDSD0C3_SDCHGTIME_Pos)       /* (CVD_CVDSD0C3) Scan Descriptor Charge TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the CHARGE statedriving both the internal and external capacitor nodes, as well as the TX output(s) Mask */
#define CVD_CVDSD0C3_SDCHGTIME(value)         (CVD_CVDSD0C3_SDCHGTIME_Msk & (_UINT32_(value) << CVD_CVDSD0C3_SDCHGTIME_Pos)) /* Assigment of value for SDCHGTIME in the CVD_CVDSD0C3 register */
#define CVD_CVDSD0C3_SDACQTIME_Pos            _UINT32_(8)                                          /* (CVD_CVDSD0C3) Scan Descriptor Acquire TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the ACQUIRE stateto allow the ADC voltage to settle Position */
#define CVD_CVDSD0C3_SDACQTIME_Msk            (_UINT32_(0x7F) << CVD_CVDSD0C3_SDACQTIME_Pos)       /* (CVD_CVDSD0C3) Scan Descriptor Acquire TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the ACQUIRE stateto allow the ADC voltage to settle Mask */
#define CVD_CVDSD0C3_SDACQTIME(value)         (CVD_CVDSD0C3_SDACQTIME_Msk & (_UINT32_(value) << CVD_CVDSD0C3_SDACQTIME_Pos)) /* Assigment of value for SDACQTIME in the CVD_CVDSD0C3 register */
#define CVD_CVDSD0C3_CVDCPL_Pos               _UINT32_(16)                                         /* (CVD_CVDSD0C3) Capacitor Voltage Divider (CVD) Setting bits Position */
#define CVD_CVDSD0C3_CVDCPL_Msk               (_UINT32_(0x7) << CVD_CVDSD0C3_CVDCPL_Pos)           /* (CVD_CVDSD0C3) Capacitor Voltage Divider (CVD) Setting bits Mask */
#define CVD_CVDSD0C3_CVDCPL(value)            (CVD_CVDSD0C3_CVDCPL_Msk & (_UINT32_(value) << CVD_CVDSD0C3_CVDCPL_Pos)) /* Assigment of value for CVDCPL in the CVD_CVDSD0C3 register */
#define CVD_CVDSD0C3_CVDEN_Pos                _UINT32_(19)                                         /* (CVD_CVDSD0C3)  Capacitive Voltage Division Enable bit Position */
#define CVD_CVDSD0C3_CVDEN_Msk                (_UINT32_(0x1) << CVD_CVDSD0C3_CVDEN_Pos)            /* (CVD_CVDSD0C3)  Capacitive Voltage Division Enable bit Mask */
#define CVD_CVDSD0C3_CVDEN(value)             (CVD_CVDSD0C3_CVDEN_Msk & (_UINT32_(value) << CVD_CVDSD0C3_CVDEN_Pos)) /* Assigment of value for CVDEN in the CVD_CVDSD0C3 register */
#define CVD_CVDSD0C3_SDMUT_Pos                _UINT32_(24)                                         /* (CVD_CVDSD0C3) Scan Descriptor Mutual Mode1= Mutual Measurement Mode; TX outputs are part of CVD measurement and are driven0=No Mutual Measurement Mode; TX outputs are not part of CVD measurements Position */
#define CVD_CVDSD0C3_SDMUT_Msk                (_UINT32_(0x1) << CVD_CVDSD0C3_SDMUT_Pos)            /* (CVD_CVDSD0C3) Scan Descriptor Mutual Mode1= Mutual Measurement Mode; TX outputs are part of CVD measurement and are driven0=No Mutual Measurement Mode; TX outputs are not part of CVD measurements Mask */
#define CVD_CVDSD0C3_SDMUT(value)             (CVD_CVDSD0C3_SDMUT_Msk & (_UINT32_(value) << CVD_CVDSD0C3_SDMUT_Pos)) /* Assigment of value for SDMUT in the CVD_CVDSD0C3 register */
#define CVD_CVDSD0C3_SDSELF_Pos               _UINT32_(25)                                         /* (CVD_CVDSD0C3) Scan Descriptor Mutual Mode1= Self Measurement Mode; RX outputs are part of CVD measurement and are driven0= No Self Measurement; RX outputs are not part of CVD measurements Position */
#define CVD_CVDSD0C3_SDSELF_Msk               (_UINT32_(0x1) << CVD_CVDSD0C3_SDSELF_Pos)           /* (CVD_CVDSD0C3) Scan Descriptor Mutual Mode1= Self Measurement Mode; RX outputs are part of CVD measurement and are driven0= No Self Measurement; RX outputs are not part of CVD measurements Mask */
#define CVD_CVDSD0C3_SDSELF(value)            (CVD_CVDSD0C3_SDSELF_Msk & (_UINT32_(value) << CVD_CVDSD0C3_SDSELF_Pos)) /* Assigment of value for SDSELF in the CVD_CVDSD0C3 register */
#define CVD_CVDSD0C3_SDINTEN_Pos              _UINT32_(26)                                         /* (CVD_CVDSD0C3) Scan Descriptor Interrupt Enable1= Scan Descriptor creates an interrupt if the accumulator threshold is met0= Scan descriptor does not create an interrupt Position */
#define CVD_CVDSD0C3_SDINTEN_Msk              (_UINT32_(0x1) << CVD_CVDSD0C3_SDINTEN_Pos)          /* (CVD_CVDSD0C3) Scan Descriptor Interrupt Enable1= Scan Descriptor creates an interrupt if the accumulator threshold is met0= Scan descriptor does not create an interrupt Mask */
#define CVD_CVDSD0C3_SDINTEN(value)           (CVD_CVDSD0C3_SDINTEN_Msk & (_UINT32_(value) << CVD_CVDSD0C3_SDINTEN_Pos)) /* Assigment of value for SDINTEN in the CVD_CVDSD0C3 register */
#define CVD_CVDSD0C3_SDBUF_Pos                _UINT32_(27)                                         /* (CVD_CVDSD0C3) Scan Descriptor CVD Buffer Enable1= Use the SOC's CVD Buffer macro to drive the party-line (shared ADC core input) rather than the RX outputs0= SOC's CVD Buffer macro not used to drive party-line (or doesn't exist) Position */
#define CVD_CVDSD0C3_SDBUF_Msk                (_UINT32_(0x1) << CVD_CVDSD0C3_SDBUF_Pos)            /* (CVD_CVDSD0C3) Scan Descriptor CVD Buffer Enable1= Use the SOC's CVD Buffer macro to drive the party-line (shared ADC core input) rather than the RX outputs0= SOC's CVD Buffer macro not used to drive party-line (or doesn't exist) Mask */
#define CVD_CVDSD0C3_SDBUF(value)             (CVD_CVDSD0C3_SDBUF_Msk & (_UINT32_(value) << CVD_CVDSD0C3_SDBUF_Pos)) /* Assigment of value for SDBUF in the CVD_CVDSD0C3 register */
#define CVD_CVDSD0C3_SDEN_Pos                 _UINT32_(30)                                         /* (CVD_CVDSD0C3) Scan Descriptor Enable Mode00= Scan Descriptor Disabled01= Execute Scan Descriptor one time only, then clear the enable.10= Execute the Scan Descriptor, but keep enabled. Move on to next enabled descriptors.11= Execute the Scan Descriptor in a loop until a threshold match is detected, then clear the enable and move on tonext enabled descriptors. Position */
#define CVD_CVDSD0C3_SDEN_Msk                 (_UINT32_(0x3) << CVD_CVDSD0C3_SDEN_Pos)             /* (CVD_CVDSD0C3) Scan Descriptor Enable Mode00= Scan Descriptor Disabled01= Execute Scan Descriptor one time only, then clear the enable.10= Execute the Scan Descriptor, but keep enabled. Move on to next enabled descriptors.11= Execute the Scan Descriptor in a loop until a threshold match is detected, then clear the enable and move on tonext enabled descriptors. Mask */
#define CVD_CVDSD0C3_SDEN(value)              (CVD_CVDSD0C3_SDEN_Msk & (_UINT32_(value) << CVD_CVDSD0C3_SDEN_Pos)) /* Assigment of value for SDEN in the CVD_CVDSD0C3 register */
#define CVD_CVDSD0C3_Msk                      _UINT32_(0xCF0F7F7F)                                 /* (CVD_CVDSD0C3) Register Mask  */


/* -------- CVD_CVDSD0T2 : (CVD Offset: 0x10C) (R/W 32) CVD SCAN DESCRIPTOR N TIME2 REGISTER -------- */
#define CVD_CVDSD0T2_RESETVALUE               _UINT32_(0x00)                                       /*  (CVD_CVDSD0T2) CVD SCAN DESCRIPTOR N TIME2 REGISTER  Reset Value */

#define CVD_CVDSD0T2_SDCONTIME_Pos            _UINT32_(0)                                          /* (CVD_CVDSD0T2) Scan Descriptor Charge TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the CONVERT statewaiting for the ADC sample data. It must be ensured that the ADC will assert End-Of-Convert (EOC) before the CONVERT state timer expires. Position */
#define CVD_CVDSD0T2_SDCONTIME_Msk            (_UINT32_(0x7F) << CVD_CVDSD0T2_SDCONTIME_Pos)       /* (CVD_CVDSD0T2) Scan Descriptor Charge TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the CONVERT statewaiting for the ADC sample data. It must be ensured that the ADC will assert End-Of-Convert (EOC) before the CONVERT state timer expires. Mask */
#define CVD_CVDSD0T2_SDCONTIME(value)         (CVD_CVDSD0T2_SDCONTIME_Msk & (_UINT32_(value) << CVD_CVDSD0T2_SDCONTIME_Pos)) /* Assigment of value for SDCONTIME in the CVD_CVDSD0T2 register */
#define CVD_CVDSD0T2_SDPOLTIME_Pos            _UINT32_(8)                                          /* (CVD_CVDSD0T2) Scan Descriptor Polarity TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the POLARITY statebefore taking the second polarity measurement of an RX/TX pair Position */
#define CVD_CVDSD0T2_SDPOLTIME_Msk            (_UINT32_(0x7F) << CVD_CVDSD0T2_SDPOLTIME_Pos)       /* (CVD_CVDSD0T2) Scan Descriptor Polarity TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the POLARITY statebefore taking the second polarity measurement of an RX/TX pair Mask */
#define CVD_CVDSD0T2_SDPOLTIME(value)         (CVD_CVDSD0T2_SDPOLTIME_Msk & (_UINT32_(value) << CVD_CVDSD0T2_SDPOLTIME_Pos)) /* Assigment of value for SDPOLTIME in the CVD_CVDSD0T2 register */
#define CVD_CVDSD0T2_SDOVRTIME_Pos            _UINT32_(16)                                         /* (CVD_CVDSD0T2) Scan Descriptor Oversample TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the OVERSAMPstate before taking the next oversampling measurement of an RX/TX pair. Position */
#define CVD_CVDSD0T2_SDOVRTIME_Msk            (_UINT32_(0x7F) << CVD_CVDSD0T2_SDOVRTIME_Pos)       /* (CVD_CVDSD0T2) Scan Descriptor Oversample TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the OVERSAMPstate before taking the next oversampling measurement of an RX/TX pair. Mask */
#define CVD_CVDSD0T2_SDOVRTIME(value)         (CVD_CVDSD0T2_SDOVRTIME_Msk & (_UINT32_(value) << CVD_CVDSD0T2_SDOVRTIME_Pos)) /* Assigment of value for SDOVRTIME in the CVD_CVDSD0T2 register */
#define CVD_CVDSD0T2_SDCHNTIME_Pos            _UINT32_(24)                                         /* (CVD_CVDSD0T2) Scan Descriptor Channel TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the RXCHAN orTXCHAN state before moving to the next RX/TX pair Position */
#define CVD_CVDSD0T2_SDCHNTIME_Msk            (_UINT32_(0x7F) << CVD_CVDSD0T2_SDCHNTIME_Pos)       /* (CVD_CVDSD0T2) Scan Descriptor Channel TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the RXCHAN orTXCHAN state before moving to the next RX/TX pair Mask */
#define CVD_CVDSD0T2_SDCHNTIME(value)         (CVD_CVDSD0T2_SDCHNTIME_Msk & (_UINT32_(value) << CVD_CVDSD0T2_SDCHNTIME_Pos)) /* Assigment of value for SDCHNTIME in the CVD_CVDSD0T2 register */
#define CVD_CVDSD0T2_Msk                      _UINT32_(0x7F7F7F7F)                                 /* (CVD_CVDSD0T2) Register Mask  */


/* -------- CVD_CVDSD1C1 : (CVD Offset: 0x110) (R/W 32) CVD SCAN DESCRIPTOR N CONTROL1 REGISTER -------- */
#define CVD_CVDSD1C1_RESETVALUE               _UINT32_(0x00)                                       /*  (CVD_CVDSD1C1) CVD SCAN DESCRIPTOR N CONTROL1 REGISTER  Reset Value */

#define CVD_CVDSD1C1_SDOVRSAMP_Pos            _UINT32_(0)                                          /* (CVD_CVDSD1C1) Scan Descriptor Over Sampling0= One measurement1= Two measurements accumulated...127= 128 measurements accumulated Position */
#define CVD_CVDSD1C1_SDOVRSAMP_Msk            (_UINT32_(0x7F) << CVD_CVDSD1C1_SDOVRSAMP_Pos)       /* (CVD_CVDSD1C1) Scan Descriptor Over Sampling0= One measurement1= Two measurements accumulated...127= 128 measurements accumulated Mask */
#define CVD_CVDSD1C1_SDOVRSAMP(value)         (CVD_CVDSD1C1_SDOVRSAMP_Msk & (_UINT32_(value) << CVD_CVDSD1C1_SDOVRSAMP_Pos)) /* Assigment of value for SDOVRSAMP in the CVD_CVDSD1C1 register */
#define CVD_CVDSD1C1_SDTH_Pos                 _UINT32_(8)                                          /* (CVD_CVDSD1C1) Scan Descriptor Threshold. Position */
#define CVD_CVDSD1C1_SDTH_Msk                 (_UINT32_(0xFFFFFF) << CVD_CVDSD1C1_SDTH_Pos)        /* (CVD_CVDSD1C1) Scan Descriptor Threshold. Mask */
#define CVD_CVDSD1C1_SDTH(value)              (CVD_CVDSD1C1_SDTH_Msk & (_UINT32_(value) << CVD_CVDSD1C1_SDTH_Pos)) /* Assigment of value for SDTH in the CVD_CVDSD1C1 register */
#define CVD_CVDSD1C1_Msk                      _UINT32_(0xFFFFFF7F)                                 /* (CVD_CVDSD1C1) Register Mask  */


/* -------- CVD_CVDSD1C2 : (CVD Offset: 0x114) (R/W 32) CVD SCAN DESCRIPTOR N CONTROL2 REGISTER -------- */
#define CVD_CVDSD1C2_RESETVALUE               _UINT32_(0x00)                                       /*  (CVD_CVDSD1C2) CVD SCAN DESCRIPTOR N CONTROL2 REGISTER  Reset Value */

#define CVD_CVDSD1C2_SDRXBEG_Pos              _UINT32_(0)                                          /* (CVD_CVDSD1C2) Scan Descriptor RX Index StartDetermines the first RX index to include in a scan. Position */
#define CVD_CVDSD1C2_SDRXBEG_Msk              (_UINT32_(0x3F) << CVD_CVDSD1C2_SDRXBEG_Pos)         /* (CVD_CVDSD1C2) Scan Descriptor RX Index StartDetermines the first RX index to include in a scan. Mask */
#define CVD_CVDSD1C2_SDRXBEG(value)           (CVD_CVDSD1C2_SDRXBEG_Msk & (_UINT32_(value) << CVD_CVDSD1C2_SDRXBEG_Pos)) /* Assigment of value for SDRXBEG in the CVD_CVDSD1C2 register */
#define CVD_CVDSD1C2_SDRXSTRIDE0_Pos          _UINT32_(6)                                          /* (CVD_CVDSD1C2) Scan Descriptor RX Index StrideDetermines the number of RX Indexes included in a single measurement4'h0= One RX Index4'hF= 16 TX Indexes Position */
#define CVD_CVDSD1C2_SDRXSTRIDE0_Msk          (_UINT32_(0x3) << CVD_CVDSD1C2_SDRXSTRIDE0_Pos)      /* (CVD_CVDSD1C2) Scan Descriptor RX Index StrideDetermines the number of RX Indexes included in a single measurement4'h0= One RX Index4'hF= 16 TX Indexes Mask */
#define CVD_CVDSD1C2_SDRXSTRIDE0(value)       (CVD_CVDSD1C2_SDRXSTRIDE0_Msk & (_UINT32_(value) << CVD_CVDSD1C2_SDRXSTRIDE0_Pos)) /* Assigment of value for SDRXSTRIDE0 in the CVD_CVDSD1C2 register */
#define CVD_CVDSD1C2_SDRXEND_Pos              _UINT32_(8)                                          /* (CVD_CVDSD1C2) Scan Descriptor RX Index EndDetermines the last RX index to include in a scan.One the RX index pointer, which is incremented by the SDnRXSTRIDE+1 value, meets or exceeds this value, the RXloop of the scan is complete. Position */
#define CVD_CVDSD1C2_SDRXEND_Msk              (_UINT32_(0x3F) << CVD_CVDSD1C2_SDRXEND_Pos)         /* (CVD_CVDSD1C2) Scan Descriptor RX Index EndDetermines the last RX index to include in a scan.One the RX index pointer, which is incremented by the SDnRXSTRIDE+1 value, meets or exceeds this value, the RXloop of the scan is complete. Mask */
#define CVD_CVDSD1C2_SDRXEND(value)           (CVD_CVDSD1C2_SDRXEND_Msk & (_UINT32_(value) << CVD_CVDSD1C2_SDRXEND_Pos)) /* Assigment of value for SDRXEND in the CVD_CVDSD1C2 register */
#define CVD_CVDSD1C2_SDRXSTRIDE1_Pos          _UINT32_(14)                                         /* (CVD_CVDSD1C2) Scan Descriptor RX Index StrideDetermines the number of RX Indexes included in a single measurement4'h0= One RX Index4'hF= 16 TX Indexes Position */
#define CVD_CVDSD1C2_SDRXSTRIDE1_Msk          (_UINT32_(0x3) << CVD_CVDSD1C2_SDRXSTRIDE1_Pos)      /* (CVD_CVDSD1C2) Scan Descriptor RX Index StrideDetermines the number of RX Indexes included in a single measurement4'h0= One RX Index4'hF= 16 TX Indexes Mask */
#define CVD_CVDSD1C2_SDRXSTRIDE1(value)       (CVD_CVDSD1C2_SDRXSTRIDE1_Msk & (_UINT32_(value) << CVD_CVDSD1C2_SDRXSTRIDE1_Pos)) /* Assigment of value for SDRXSTRIDE1 in the CVD_CVDSD1C2 register */
#define CVD_CVDSD1C2_SDTXBEG_Pos              _UINT32_(16)                                         /* (CVD_CVDSD1C2) Scan Descriptor TX Index StartDetermines the first TX index to include in a scan. Position */
#define CVD_CVDSD1C2_SDTXBEG_Msk              (_UINT32_(0x3F) << CVD_CVDSD1C2_SDTXBEG_Pos)         /* (CVD_CVDSD1C2) Scan Descriptor TX Index StartDetermines the first TX index to include in a scan. Mask */
#define CVD_CVDSD1C2_SDTXBEG(value)           (CVD_CVDSD1C2_SDTXBEG_Msk & (_UINT32_(value) << CVD_CVDSD1C2_SDTXBEG_Pos)) /* Assigment of value for SDTXBEG in the CVD_CVDSD1C2 register */
#define CVD_CVDSD1C2_SDTXSTRIDE0_Pos          _UINT32_(22)                                         /* (CVD_CVDSD1C2) Scan Descriptor TX Index StrideDetermines the number of TX Indexes included in a single measurement.4'h0= One TX Index4'bF= 16TX Indexes Position */
#define CVD_CVDSD1C2_SDTXSTRIDE0_Msk          (_UINT32_(0x3) << CVD_CVDSD1C2_SDTXSTRIDE0_Pos)      /* (CVD_CVDSD1C2) Scan Descriptor TX Index StrideDetermines the number of TX Indexes included in a single measurement.4'h0= One TX Index4'bF= 16TX Indexes Mask */
#define CVD_CVDSD1C2_SDTXSTRIDE0(value)       (CVD_CVDSD1C2_SDTXSTRIDE0_Msk & (_UINT32_(value) << CVD_CVDSD1C2_SDTXSTRIDE0_Pos)) /* Assigment of value for SDTXSTRIDE0 in the CVD_CVDSD1C2 register */
#define CVD_CVDSD1C2_SDTXEND_Pos              _UINT32_(24)                                         /* (CVD_CVDSD1C2) Scan Descriptor TX Index EndDetermines the last TX index to include in a scan.One the TX index pointer, which is incremented by the SDnTXSTRIDE+1 value, meets or exceeds this value, the TXloop of the scan is complete. Position */
#define CVD_CVDSD1C2_SDTXEND_Msk              (_UINT32_(0x3F) << CVD_CVDSD1C2_SDTXEND_Pos)         /* (CVD_CVDSD1C2) Scan Descriptor TX Index EndDetermines the last TX index to include in a scan.One the TX index pointer, which is incremented by the SDnTXSTRIDE+1 value, meets or exceeds this value, the TXloop of the scan is complete. Mask */
#define CVD_CVDSD1C2_SDTXEND(value)           (CVD_CVDSD1C2_SDTXEND_Msk & (_UINT32_(value) << CVD_CVDSD1C2_SDTXEND_Pos)) /* Assigment of value for SDTXEND in the CVD_CVDSD1C2 register */
#define CVD_CVDSD1C2_SDTXSTRIDE1_Pos          _UINT32_(30)                                         /* (CVD_CVDSD1C2) Scan Descriptor TX Index StrideDetermines the number of TX Indexes included in a single measurement.4'h0= One TX Index4'bF= 16TX Indexes Position */
#define CVD_CVDSD1C2_SDTXSTRIDE1_Msk          (_UINT32_(0x3) << CVD_CVDSD1C2_SDTXSTRIDE1_Pos)      /* (CVD_CVDSD1C2) Scan Descriptor TX Index StrideDetermines the number of TX Indexes included in a single measurement.4'h0= One TX Index4'bF= 16TX Indexes Mask */
#define CVD_CVDSD1C2_SDTXSTRIDE1(value)       (CVD_CVDSD1C2_SDTXSTRIDE1_Msk & (_UINT32_(value) << CVD_CVDSD1C2_SDTXSTRIDE1_Pos)) /* Assigment of value for SDTXSTRIDE1 in the CVD_CVDSD1C2 register */
#define CVD_CVDSD1C2_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (CVD_CVDSD1C2) Register Mask  */


/* -------- CVD_CVDSD1C3 : (CVD Offset: 0x118) (R/W 32) CVD SCAN DESCRIPTOR N CONTROL3 REGISTER -------- */
#define CVD_CVDSD1C3_RESETVALUE               _UINT32_(0x00)                                       /*  (CVD_CVDSD1C3) CVD SCAN DESCRIPTOR N CONTROL3 REGISTER  Reset Value */

#define CVD_CVDSD1C3_SDCHGTIME_Pos            _UINT32_(0)                                          /* (CVD_CVDSD1C3) Scan Descriptor Charge TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the CHARGE statedriving both the internal and external capacitor nodes, as well as the TX output(s) Position */
#define CVD_CVDSD1C3_SDCHGTIME_Msk            (_UINT32_(0x7F) << CVD_CVDSD1C3_SDCHGTIME_Pos)       /* (CVD_CVDSD1C3) Scan Descriptor Charge TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the CHARGE statedriving both the internal and external capacitor nodes, as well as the TX output(s) Mask */
#define CVD_CVDSD1C3_SDCHGTIME(value)         (CVD_CVDSD1C3_SDCHGTIME_Msk & (_UINT32_(value) << CVD_CVDSD1C3_SDCHGTIME_Pos)) /* Assigment of value for SDCHGTIME in the CVD_CVDSD1C3 register */
#define CVD_CVDSD1C3_SDACQTIME_Pos            _UINT32_(8)                                          /* (CVD_CVDSD1C3) Scan Descriptor Acquire TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the ACQUIRE stateto allow the ADC voltage to settle Position */
#define CVD_CVDSD1C3_SDACQTIME_Msk            (_UINT32_(0x7F) << CVD_CVDSD1C3_SDACQTIME_Pos)       /* (CVD_CVDSD1C3) Scan Descriptor Acquire TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the ACQUIRE stateto allow the ADC voltage to settle Mask */
#define CVD_CVDSD1C3_SDACQTIME(value)         (CVD_CVDSD1C3_SDACQTIME_Msk & (_UINT32_(value) << CVD_CVDSD1C3_SDACQTIME_Pos)) /* Assigment of value for SDACQTIME in the CVD_CVDSD1C3 register */
#define CVD_CVDSD1C3_CVDCPL_Pos               _UINT32_(16)                                         /* (CVD_CVDSD1C3) Capacitor Voltage Divider (CVD) Setting bits Position */
#define CVD_CVDSD1C3_CVDCPL_Msk               (_UINT32_(0x7) << CVD_CVDSD1C3_CVDCPL_Pos)           /* (CVD_CVDSD1C3) Capacitor Voltage Divider (CVD) Setting bits Mask */
#define CVD_CVDSD1C3_CVDCPL(value)            (CVD_CVDSD1C3_CVDCPL_Msk & (_UINT32_(value) << CVD_CVDSD1C3_CVDCPL_Pos)) /* Assigment of value for CVDCPL in the CVD_CVDSD1C3 register */
#define CVD_CVDSD1C3_CVDEN_Pos                _UINT32_(19)                                         /* (CVD_CVDSD1C3)  Capacitive Voltage Division Enable bit Position */
#define CVD_CVDSD1C3_CVDEN_Msk                (_UINT32_(0x1) << CVD_CVDSD1C3_CVDEN_Pos)            /* (CVD_CVDSD1C3)  Capacitive Voltage Division Enable bit Mask */
#define CVD_CVDSD1C3_CVDEN(value)             (CVD_CVDSD1C3_CVDEN_Msk & (_UINT32_(value) << CVD_CVDSD1C3_CVDEN_Pos)) /* Assigment of value for CVDEN in the CVD_CVDSD1C3 register */
#define CVD_CVDSD1C3_SDMUT_Pos                _UINT32_(24)                                         /* (CVD_CVDSD1C3) Scan Descriptor Mutual Mode1= Mutual Measurement Mode; TX outputs are part of CVD measurement and are driven0=No Mutual Measurement Mode; TX outputs are not part of CVD measurements Position */
#define CVD_CVDSD1C3_SDMUT_Msk                (_UINT32_(0x1) << CVD_CVDSD1C3_SDMUT_Pos)            /* (CVD_CVDSD1C3) Scan Descriptor Mutual Mode1= Mutual Measurement Mode; TX outputs are part of CVD measurement and are driven0=No Mutual Measurement Mode; TX outputs are not part of CVD measurements Mask */
#define CVD_CVDSD1C3_SDMUT(value)             (CVD_CVDSD1C3_SDMUT_Msk & (_UINT32_(value) << CVD_CVDSD1C3_SDMUT_Pos)) /* Assigment of value for SDMUT in the CVD_CVDSD1C3 register */
#define CVD_CVDSD1C3_SDSELF_Pos               _UINT32_(25)                                         /* (CVD_CVDSD1C3) Scan Descriptor Mutual Mode1= Self Measurement Mode; RX outputs are part of CVD measurement and are driven0= No Self Measurement; RX outputs are not part of CVD measurements Position */
#define CVD_CVDSD1C3_SDSELF_Msk               (_UINT32_(0x1) << CVD_CVDSD1C3_SDSELF_Pos)           /* (CVD_CVDSD1C3) Scan Descriptor Mutual Mode1= Self Measurement Mode; RX outputs are part of CVD measurement and are driven0= No Self Measurement; RX outputs are not part of CVD measurements Mask */
#define CVD_CVDSD1C3_SDSELF(value)            (CVD_CVDSD1C3_SDSELF_Msk & (_UINT32_(value) << CVD_CVDSD1C3_SDSELF_Pos)) /* Assigment of value for SDSELF in the CVD_CVDSD1C3 register */
#define CVD_CVDSD1C3_SDINTEN_Pos              _UINT32_(26)                                         /* (CVD_CVDSD1C3) Scan Descriptor Interrupt Enable1= Scan Descriptor creates an interrupt if the accumulator threshold is met0= Scan descriptor does not create an interrupt Position */
#define CVD_CVDSD1C3_SDINTEN_Msk              (_UINT32_(0x1) << CVD_CVDSD1C3_SDINTEN_Pos)          /* (CVD_CVDSD1C3) Scan Descriptor Interrupt Enable1= Scan Descriptor creates an interrupt if the accumulator threshold is met0= Scan descriptor does not create an interrupt Mask */
#define CVD_CVDSD1C3_SDINTEN(value)           (CVD_CVDSD1C3_SDINTEN_Msk & (_UINT32_(value) << CVD_CVDSD1C3_SDINTEN_Pos)) /* Assigment of value for SDINTEN in the CVD_CVDSD1C3 register */
#define CVD_CVDSD1C3_SDBUF_Pos                _UINT32_(27)                                         /* (CVD_CVDSD1C3) Scan Descriptor CVD Buffer Enable1= Use the SOC's CVD Buffer macro to drive the party-line (shared ADC core input) rather than the RX outputs0= SOC's CVD Buffer macro not used to drive party-line (or doesn't exist) Position */
#define CVD_CVDSD1C3_SDBUF_Msk                (_UINT32_(0x1) << CVD_CVDSD1C3_SDBUF_Pos)            /* (CVD_CVDSD1C3) Scan Descriptor CVD Buffer Enable1= Use the SOC's CVD Buffer macro to drive the party-line (shared ADC core input) rather than the RX outputs0= SOC's CVD Buffer macro not used to drive party-line (or doesn't exist) Mask */
#define CVD_CVDSD1C3_SDBUF(value)             (CVD_CVDSD1C3_SDBUF_Msk & (_UINT32_(value) << CVD_CVDSD1C3_SDBUF_Pos)) /* Assigment of value for SDBUF in the CVD_CVDSD1C3 register */
#define CVD_CVDSD1C3_SDEN_Pos                 _UINT32_(30)                                         /* (CVD_CVDSD1C3) Scan Descriptor Enable Mode00= Scan Descriptor Disabled01= Execute Scan Descriptor one time only, then clear the enable.10= Execute the Scan Descriptor, but keep enabled. Move on to next enabled descriptors.11= Execute the Scan Descriptor in a loop until a threshold match is detected, then clear the enable and move on tonext enabled descriptors. Position */
#define CVD_CVDSD1C3_SDEN_Msk                 (_UINT32_(0x3) << CVD_CVDSD1C3_SDEN_Pos)             /* (CVD_CVDSD1C3) Scan Descriptor Enable Mode00= Scan Descriptor Disabled01= Execute Scan Descriptor one time only, then clear the enable.10= Execute the Scan Descriptor, but keep enabled. Move on to next enabled descriptors.11= Execute the Scan Descriptor in a loop until a threshold match is detected, then clear the enable and move on tonext enabled descriptors. Mask */
#define CVD_CVDSD1C3_SDEN(value)              (CVD_CVDSD1C3_SDEN_Msk & (_UINT32_(value) << CVD_CVDSD1C3_SDEN_Pos)) /* Assigment of value for SDEN in the CVD_CVDSD1C3 register */
#define CVD_CVDSD1C3_Msk                      _UINT32_(0xCF0F7F7F)                                 /* (CVD_CVDSD1C3) Register Mask  */


/* -------- CVD_CVDSD1T2 : (CVD Offset: 0x11C) (R/W 32) CVD SCAN DESCRIPTOR N TIME2 REGISTER -------- */
#define CVD_CVDSD1T2_RESETVALUE               _UINT32_(0x00)                                       /*  (CVD_CVDSD1T2) CVD SCAN DESCRIPTOR N TIME2 REGISTER  Reset Value */

#define CVD_CVDSD1T2_SDCONTIME_Pos            _UINT32_(0)                                          /* (CVD_CVDSD1T2) Scan Descriptor Charge TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the CONVERT statewaiting for the ADC sample data. It must be ensured that the ADC will assert End-Of-Convert (EOC) before the CONVERT state timer expires. Position */
#define CVD_CVDSD1T2_SDCONTIME_Msk            (_UINT32_(0x7F) << CVD_CVDSD1T2_SDCONTIME_Pos)       /* (CVD_CVDSD1T2) Scan Descriptor Charge TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the CONVERT statewaiting for the ADC sample data. It must be ensured that the ADC will assert End-Of-Convert (EOC) before the CONVERT state timer expires. Mask */
#define CVD_CVDSD1T2_SDCONTIME(value)         (CVD_CVDSD1T2_SDCONTIME_Msk & (_UINT32_(value) << CVD_CVDSD1T2_SDCONTIME_Pos)) /* Assigment of value for SDCONTIME in the CVD_CVDSD1T2 register */
#define CVD_CVDSD1T2_SDPOLTIME_Pos            _UINT32_(8)                                          /* (CVD_CVDSD1T2) Scan Descriptor Polarity TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the POLARITY statebefore taking the second polarity measurement of an RX/TX pair Position */
#define CVD_CVDSD1T2_SDPOLTIME_Msk            (_UINT32_(0x7F) << CVD_CVDSD1T2_SDPOLTIME_Pos)       /* (CVD_CVDSD1T2) Scan Descriptor Polarity TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the POLARITY statebefore taking the second polarity measurement of an RX/TX pair Mask */
#define CVD_CVDSD1T2_SDPOLTIME(value)         (CVD_CVDSD1T2_SDPOLTIME_Msk & (_UINT32_(value) << CVD_CVDSD1T2_SDPOLTIME_Pos)) /* Assigment of value for SDPOLTIME in the CVD_CVDSD1T2 register */
#define CVD_CVDSD1T2_SDOVRTIME_Pos            _UINT32_(16)                                         /* (CVD_CVDSD1T2) Scan Descriptor Oversample TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the OVERSAMPstate before taking the next oversampling measurement of an RX/TX pair. Position */
#define CVD_CVDSD1T2_SDOVRTIME_Msk            (_UINT32_(0x7F) << CVD_CVDSD1T2_SDOVRTIME_Pos)       /* (CVD_CVDSD1T2) Scan Descriptor Oversample TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the OVERSAMPstate before taking the next oversampling measurement of an RX/TX pair. Mask */
#define CVD_CVDSD1T2_SDOVRTIME(value)         (CVD_CVDSD1T2_SDOVRTIME_Msk & (_UINT32_(value) << CVD_CVDSD1T2_SDOVRTIME_Pos)) /* Assigment of value for SDOVRTIME in the CVD_CVDSD1T2 register */
#define CVD_CVDSD1T2_SDCHNTIME_Pos            _UINT32_(24)                                         /* (CVD_CVDSD1T2) Scan Descriptor Channel TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the RXCHAN orTXCHAN state before moving to the next RX/TX pair Position */
#define CVD_CVDSD1T2_SDCHNTIME_Msk            (_UINT32_(0x7F) << CVD_CVDSD1T2_SDCHNTIME_Pos)       /* (CVD_CVDSD1T2) Scan Descriptor Channel TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the RXCHAN orTXCHAN state before moving to the next RX/TX pair Mask */
#define CVD_CVDSD1T2_SDCHNTIME(value)         (CVD_CVDSD1T2_SDCHNTIME_Msk & (_UINT32_(value) << CVD_CVDSD1T2_SDCHNTIME_Pos)) /* Assigment of value for SDCHNTIME in the CVD_CVDSD1T2 register */
#define CVD_CVDSD1T2_Msk                      _UINT32_(0x7F7F7F7F)                                 /* (CVD_CVDSD1T2) Register Mask  */


/* -------- CVD_CVDSD2C1 : (CVD Offset: 0x120) (R/W 32) CVD SCAN DESCRIPTOR N CONTROL1 REGISTER -------- */
#define CVD_CVDSD2C1_RESETVALUE               _UINT32_(0x00)                                       /*  (CVD_CVDSD2C1) CVD SCAN DESCRIPTOR N CONTROL1 REGISTER  Reset Value */

#define CVD_CVDSD2C1_SDOVRSAMP_Pos            _UINT32_(0)                                          /* (CVD_CVDSD2C1) Scan Descriptor Over Sampling0= One measurement1= Two measurements accumulated...127= 128 measurements accumulated Position */
#define CVD_CVDSD2C1_SDOVRSAMP_Msk            (_UINT32_(0x7F) << CVD_CVDSD2C1_SDOVRSAMP_Pos)       /* (CVD_CVDSD2C1) Scan Descriptor Over Sampling0= One measurement1= Two measurements accumulated...127= 128 measurements accumulated Mask */
#define CVD_CVDSD2C1_SDOVRSAMP(value)         (CVD_CVDSD2C1_SDOVRSAMP_Msk & (_UINT32_(value) << CVD_CVDSD2C1_SDOVRSAMP_Pos)) /* Assigment of value for SDOVRSAMP in the CVD_CVDSD2C1 register */
#define CVD_CVDSD2C1_SDTH_Pos                 _UINT32_(8)                                          /* (CVD_CVDSD2C1) Scan Descriptor Threshold. Position */
#define CVD_CVDSD2C1_SDTH_Msk                 (_UINT32_(0xFFFFFF) << CVD_CVDSD2C1_SDTH_Pos)        /* (CVD_CVDSD2C1) Scan Descriptor Threshold. Mask */
#define CVD_CVDSD2C1_SDTH(value)              (CVD_CVDSD2C1_SDTH_Msk & (_UINT32_(value) << CVD_CVDSD2C1_SDTH_Pos)) /* Assigment of value for SDTH in the CVD_CVDSD2C1 register */
#define CVD_CVDSD2C1_Msk                      _UINT32_(0xFFFFFF7F)                                 /* (CVD_CVDSD2C1) Register Mask  */


/* -------- CVD_CVDSD2C2 : (CVD Offset: 0x124) (R/W 32) CVD SCAN DESCRIPTOR N CONTROL2 REGISTER -------- */
#define CVD_CVDSD2C2_RESETVALUE               _UINT32_(0x00)                                       /*  (CVD_CVDSD2C2) CVD SCAN DESCRIPTOR N CONTROL2 REGISTER  Reset Value */

#define CVD_CVDSD2C2_SDRXBEG_Pos              _UINT32_(0)                                          /* (CVD_CVDSD2C2) Scan Descriptor RX Index StartDetermines the first RX index to include in a scan. Position */
#define CVD_CVDSD2C2_SDRXBEG_Msk              (_UINT32_(0x3F) << CVD_CVDSD2C2_SDRXBEG_Pos)         /* (CVD_CVDSD2C2) Scan Descriptor RX Index StartDetermines the first RX index to include in a scan. Mask */
#define CVD_CVDSD2C2_SDRXBEG(value)           (CVD_CVDSD2C2_SDRXBEG_Msk & (_UINT32_(value) << CVD_CVDSD2C2_SDRXBEG_Pos)) /* Assigment of value for SDRXBEG in the CVD_CVDSD2C2 register */
#define CVD_CVDSD2C2_SDRXSTRIDE0_Pos          _UINT32_(6)                                          /* (CVD_CVDSD2C2) Scan Descriptor RX Index StrideDetermines the number of RX Indexes included in a single measurement4'h0= One RX Index4'hF= 16 TX Indexes Position */
#define CVD_CVDSD2C2_SDRXSTRIDE0_Msk          (_UINT32_(0x3) << CVD_CVDSD2C2_SDRXSTRIDE0_Pos)      /* (CVD_CVDSD2C2) Scan Descriptor RX Index StrideDetermines the number of RX Indexes included in a single measurement4'h0= One RX Index4'hF= 16 TX Indexes Mask */
#define CVD_CVDSD2C2_SDRXSTRIDE0(value)       (CVD_CVDSD2C2_SDRXSTRIDE0_Msk & (_UINT32_(value) << CVD_CVDSD2C2_SDRXSTRIDE0_Pos)) /* Assigment of value for SDRXSTRIDE0 in the CVD_CVDSD2C2 register */
#define CVD_CVDSD2C2_SDRXEND_Pos              _UINT32_(8)                                          /* (CVD_CVDSD2C2) Scan Descriptor RX Index EndDetermines the last RX index to include in a scan.One the RX index pointer, which is incremented by the SDnRXSTRIDE+1 value, meets or exceeds this value, the RXloop of the scan is complete. Position */
#define CVD_CVDSD2C2_SDRXEND_Msk              (_UINT32_(0x3F) << CVD_CVDSD2C2_SDRXEND_Pos)         /* (CVD_CVDSD2C2) Scan Descriptor RX Index EndDetermines the last RX index to include in a scan.One the RX index pointer, which is incremented by the SDnRXSTRIDE+1 value, meets or exceeds this value, the RXloop of the scan is complete. Mask */
#define CVD_CVDSD2C2_SDRXEND(value)           (CVD_CVDSD2C2_SDRXEND_Msk & (_UINT32_(value) << CVD_CVDSD2C2_SDRXEND_Pos)) /* Assigment of value for SDRXEND in the CVD_CVDSD2C2 register */
#define CVD_CVDSD2C2_SDRXSTRIDE1_Pos          _UINT32_(14)                                         /* (CVD_CVDSD2C2) Scan Descriptor RX Index StrideDetermines the number of RX Indexes included in a single measurement4'h0= One RX Index4'hF= 16 TX Indexes Position */
#define CVD_CVDSD2C2_SDRXSTRIDE1_Msk          (_UINT32_(0x3) << CVD_CVDSD2C2_SDRXSTRIDE1_Pos)      /* (CVD_CVDSD2C2) Scan Descriptor RX Index StrideDetermines the number of RX Indexes included in a single measurement4'h0= One RX Index4'hF= 16 TX Indexes Mask */
#define CVD_CVDSD2C2_SDRXSTRIDE1(value)       (CVD_CVDSD2C2_SDRXSTRIDE1_Msk & (_UINT32_(value) << CVD_CVDSD2C2_SDRXSTRIDE1_Pos)) /* Assigment of value for SDRXSTRIDE1 in the CVD_CVDSD2C2 register */
#define CVD_CVDSD2C2_SDTXBEG_Pos              _UINT32_(16)                                         /* (CVD_CVDSD2C2) Scan Descriptor TX Index StartDetermines the first TX index to include in a scan. Position */
#define CVD_CVDSD2C2_SDTXBEG_Msk              (_UINT32_(0x3F) << CVD_CVDSD2C2_SDTXBEG_Pos)         /* (CVD_CVDSD2C2) Scan Descriptor TX Index StartDetermines the first TX index to include in a scan. Mask */
#define CVD_CVDSD2C2_SDTXBEG(value)           (CVD_CVDSD2C2_SDTXBEG_Msk & (_UINT32_(value) << CVD_CVDSD2C2_SDTXBEG_Pos)) /* Assigment of value for SDTXBEG in the CVD_CVDSD2C2 register */
#define CVD_CVDSD2C2_SDTXSTRIDE0_Pos          _UINT32_(22)                                         /* (CVD_CVDSD2C2) Scan Descriptor TX Index StrideDetermines the number of TX Indexes included in a single measurement.4'h0= One TX Index4'bF= 16TX Indexes Position */
#define CVD_CVDSD2C2_SDTXSTRIDE0_Msk          (_UINT32_(0x3) << CVD_CVDSD2C2_SDTXSTRIDE0_Pos)      /* (CVD_CVDSD2C2) Scan Descriptor TX Index StrideDetermines the number of TX Indexes included in a single measurement.4'h0= One TX Index4'bF= 16TX Indexes Mask */
#define CVD_CVDSD2C2_SDTXSTRIDE0(value)       (CVD_CVDSD2C2_SDTXSTRIDE0_Msk & (_UINT32_(value) << CVD_CVDSD2C2_SDTXSTRIDE0_Pos)) /* Assigment of value for SDTXSTRIDE0 in the CVD_CVDSD2C2 register */
#define CVD_CVDSD2C2_SDTXEND_Pos              _UINT32_(24)                                         /* (CVD_CVDSD2C2) Scan Descriptor TX Index EndDetermines the last TX index to include in a scan.One the TX index pointer, which is incremented by the SDnTXSTRIDE+1 value, meets or exceeds this value, the TXloop of the scan is complete. Position */
#define CVD_CVDSD2C2_SDTXEND_Msk              (_UINT32_(0x3F) << CVD_CVDSD2C2_SDTXEND_Pos)         /* (CVD_CVDSD2C2) Scan Descriptor TX Index EndDetermines the last TX index to include in a scan.One the TX index pointer, which is incremented by the SDnTXSTRIDE+1 value, meets or exceeds this value, the TXloop of the scan is complete. Mask */
#define CVD_CVDSD2C2_SDTXEND(value)           (CVD_CVDSD2C2_SDTXEND_Msk & (_UINT32_(value) << CVD_CVDSD2C2_SDTXEND_Pos)) /* Assigment of value for SDTXEND in the CVD_CVDSD2C2 register */
#define CVD_CVDSD2C2_SDTXSTRIDE1_Pos          _UINT32_(30)                                         /* (CVD_CVDSD2C2) Scan Descriptor TX Index StrideDetermines the number of TX Indexes included in a single measurement.4'h0= One TX Index4'bF= 16TX Indexes Position */
#define CVD_CVDSD2C2_SDTXSTRIDE1_Msk          (_UINT32_(0x3) << CVD_CVDSD2C2_SDTXSTRIDE1_Pos)      /* (CVD_CVDSD2C2) Scan Descriptor TX Index StrideDetermines the number of TX Indexes included in a single measurement.4'h0= One TX Index4'bF= 16TX Indexes Mask */
#define CVD_CVDSD2C2_SDTXSTRIDE1(value)       (CVD_CVDSD2C2_SDTXSTRIDE1_Msk & (_UINT32_(value) << CVD_CVDSD2C2_SDTXSTRIDE1_Pos)) /* Assigment of value for SDTXSTRIDE1 in the CVD_CVDSD2C2 register */
#define CVD_CVDSD2C2_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (CVD_CVDSD2C2) Register Mask  */


/* -------- CVD_CVDSD2C3 : (CVD Offset: 0x128) (R/W 32) CVD SCAN DESCRIPTOR N CONTROL3 REGISTER -------- */
#define CVD_CVDSD2C3_RESETVALUE               _UINT32_(0x00)                                       /*  (CVD_CVDSD2C3) CVD SCAN DESCRIPTOR N CONTROL3 REGISTER  Reset Value */

#define CVD_CVDSD2C3_SDCHGTIME_Pos            _UINT32_(0)                                          /* (CVD_CVDSD2C3) Scan Descriptor Charge TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the CHARGE statedriving both the internal and external capacitor nodes, as well as the TX output(s) Position */
#define CVD_CVDSD2C3_SDCHGTIME_Msk            (_UINT32_(0x7F) << CVD_CVDSD2C3_SDCHGTIME_Pos)       /* (CVD_CVDSD2C3) Scan Descriptor Charge TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the CHARGE statedriving both the internal and external capacitor nodes, as well as the TX output(s) Mask */
#define CVD_CVDSD2C3_SDCHGTIME(value)         (CVD_CVDSD2C3_SDCHGTIME_Msk & (_UINT32_(value) << CVD_CVDSD2C3_SDCHGTIME_Pos)) /* Assigment of value for SDCHGTIME in the CVD_CVDSD2C3 register */
#define CVD_CVDSD2C3_SDACQTIME_Pos            _UINT32_(8)                                          /* (CVD_CVDSD2C3) Scan Descriptor Acquire TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the ACQUIRE stateto allow the ADC voltage to settle Position */
#define CVD_CVDSD2C3_SDACQTIME_Msk            (_UINT32_(0x7F) << CVD_CVDSD2C3_SDACQTIME_Pos)       /* (CVD_CVDSD2C3) Scan Descriptor Acquire TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the ACQUIRE stateto allow the ADC voltage to settle Mask */
#define CVD_CVDSD2C3_SDACQTIME(value)         (CVD_CVDSD2C3_SDACQTIME_Msk & (_UINT32_(value) << CVD_CVDSD2C3_SDACQTIME_Pos)) /* Assigment of value for SDACQTIME in the CVD_CVDSD2C3 register */
#define CVD_CVDSD2C3_CVDCPL_Pos               _UINT32_(16)                                         /* (CVD_CVDSD2C3) Capacitor Voltage Divider (CVD) Setting bits Position */
#define CVD_CVDSD2C3_CVDCPL_Msk               (_UINT32_(0x7) << CVD_CVDSD2C3_CVDCPL_Pos)           /* (CVD_CVDSD2C3) Capacitor Voltage Divider (CVD) Setting bits Mask */
#define CVD_CVDSD2C3_CVDCPL(value)            (CVD_CVDSD2C3_CVDCPL_Msk & (_UINT32_(value) << CVD_CVDSD2C3_CVDCPL_Pos)) /* Assigment of value for CVDCPL in the CVD_CVDSD2C3 register */
#define CVD_CVDSD2C3_CVDEN_Pos                _UINT32_(19)                                         /* (CVD_CVDSD2C3)  Capacitive Voltage Division Enable bit Position */
#define CVD_CVDSD2C3_CVDEN_Msk                (_UINT32_(0x1) << CVD_CVDSD2C3_CVDEN_Pos)            /* (CVD_CVDSD2C3)  Capacitive Voltage Division Enable bit Mask */
#define CVD_CVDSD2C3_CVDEN(value)             (CVD_CVDSD2C3_CVDEN_Msk & (_UINT32_(value) << CVD_CVDSD2C3_CVDEN_Pos)) /* Assigment of value for CVDEN in the CVD_CVDSD2C3 register */
#define CVD_CVDSD2C3_SDMUT_Pos                _UINT32_(24)                                         /* (CVD_CVDSD2C3) Scan Descriptor Mutual Mode1= Mutual Measurement Mode; TX outputs are part of CVD measurement and are driven0=No Mutual Measurement Mode; TX outputs are not part of CVD measurements Position */
#define CVD_CVDSD2C3_SDMUT_Msk                (_UINT32_(0x1) << CVD_CVDSD2C3_SDMUT_Pos)            /* (CVD_CVDSD2C3) Scan Descriptor Mutual Mode1= Mutual Measurement Mode; TX outputs are part of CVD measurement and are driven0=No Mutual Measurement Mode; TX outputs are not part of CVD measurements Mask */
#define CVD_CVDSD2C3_SDMUT(value)             (CVD_CVDSD2C3_SDMUT_Msk & (_UINT32_(value) << CVD_CVDSD2C3_SDMUT_Pos)) /* Assigment of value for SDMUT in the CVD_CVDSD2C3 register */
#define CVD_CVDSD2C3_SDSELF_Pos               _UINT32_(25)                                         /* (CVD_CVDSD2C3) Scan Descriptor Mutual Mode1= Self Measurement Mode; RX outputs are part of CVD measurement and are driven0= No Self Measurement; RX outputs are not part of CVD measurements Position */
#define CVD_CVDSD2C3_SDSELF_Msk               (_UINT32_(0x1) << CVD_CVDSD2C3_SDSELF_Pos)           /* (CVD_CVDSD2C3) Scan Descriptor Mutual Mode1= Self Measurement Mode; RX outputs are part of CVD measurement and are driven0= No Self Measurement; RX outputs are not part of CVD measurements Mask */
#define CVD_CVDSD2C3_SDSELF(value)            (CVD_CVDSD2C3_SDSELF_Msk & (_UINT32_(value) << CVD_CVDSD2C3_SDSELF_Pos)) /* Assigment of value for SDSELF in the CVD_CVDSD2C3 register */
#define CVD_CVDSD2C3_SDINTEN_Pos              _UINT32_(26)                                         /* (CVD_CVDSD2C3) Scan Descriptor Interrupt Enable1= Scan Descriptor creates an interrupt if the accumulator threshold is met0= Scan descriptor does not create an interrupt Position */
#define CVD_CVDSD2C3_SDINTEN_Msk              (_UINT32_(0x1) << CVD_CVDSD2C3_SDINTEN_Pos)          /* (CVD_CVDSD2C3) Scan Descriptor Interrupt Enable1= Scan Descriptor creates an interrupt if the accumulator threshold is met0= Scan descriptor does not create an interrupt Mask */
#define CVD_CVDSD2C3_SDINTEN(value)           (CVD_CVDSD2C3_SDINTEN_Msk & (_UINT32_(value) << CVD_CVDSD2C3_SDINTEN_Pos)) /* Assigment of value for SDINTEN in the CVD_CVDSD2C3 register */
#define CVD_CVDSD2C3_SDBUF_Pos                _UINT32_(27)                                         /* (CVD_CVDSD2C3) Scan Descriptor CVD Buffer Enable1= Use the SOC's CVD Buffer macro to drive the party-line (shared ADC core input) rather than the RX outputs0= SOC's CVD Buffer macro not used to drive party-line (or doesn't exist) Position */
#define CVD_CVDSD2C3_SDBUF_Msk                (_UINT32_(0x1) << CVD_CVDSD2C3_SDBUF_Pos)            /* (CVD_CVDSD2C3) Scan Descriptor CVD Buffer Enable1= Use the SOC's CVD Buffer macro to drive the party-line (shared ADC core input) rather than the RX outputs0= SOC's CVD Buffer macro not used to drive party-line (or doesn't exist) Mask */
#define CVD_CVDSD2C3_SDBUF(value)             (CVD_CVDSD2C3_SDBUF_Msk & (_UINT32_(value) << CVD_CVDSD2C3_SDBUF_Pos)) /* Assigment of value for SDBUF in the CVD_CVDSD2C3 register */
#define CVD_CVDSD2C3_SDEN_Pos                 _UINT32_(30)                                         /* (CVD_CVDSD2C3) Scan Descriptor Enable Mode00= Scan Descriptor Disabled01= Execute Scan Descriptor one time only, then clear the enable.10= Execute the Scan Descriptor, but keep enabled. Move on to next enabled descriptors.11= Execute the Scan Descriptor in a loop until a threshold match is detected, then clear the enable and move on tonext enabled descriptors. Position */
#define CVD_CVDSD2C3_SDEN_Msk                 (_UINT32_(0x3) << CVD_CVDSD2C3_SDEN_Pos)             /* (CVD_CVDSD2C3) Scan Descriptor Enable Mode00= Scan Descriptor Disabled01= Execute Scan Descriptor one time only, then clear the enable.10= Execute the Scan Descriptor, but keep enabled. Move on to next enabled descriptors.11= Execute the Scan Descriptor in a loop until a threshold match is detected, then clear the enable and move on tonext enabled descriptors. Mask */
#define CVD_CVDSD2C3_SDEN(value)              (CVD_CVDSD2C3_SDEN_Msk & (_UINT32_(value) << CVD_CVDSD2C3_SDEN_Pos)) /* Assigment of value for SDEN in the CVD_CVDSD2C3 register */
#define CVD_CVDSD2C3_Msk                      _UINT32_(0xCF0F7F7F)                                 /* (CVD_CVDSD2C3) Register Mask  */


/* -------- CVD_CVDSD2T2 : (CVD Offset: 0x12C) (R/W 32) CVD SCAN DESCRIPTOR N TIME2 REGISTER -------- */
#define CVD_CVDSD2T2_RESETVALUE               _UINT32_(0x00)                                       /*  (CVD_CVDSD2T2) CVD SCAN DESCRIPTOR N TIME2 REGISTER  Reset Value */

#define CVD_CVDSD2T2_SDCONTIME_Pos            _UINT32_(0)                                          /* (CVD_CVDSD2T2) Scan Descriptor Charge TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the CONVERT statewaiting for the ADC sample data. It must be ensured that the ADC will assert End-Of-Convert (EOC) before the CONVERT state timer expires. Position */
#define CVD_CVDSD2T2_SDCONTIME_Msk            (_UINT32_(0x7F) << CVD_CVDSD2T2_SDCONTIME_Pos)       /* (CVD_CVDSD2T2) Scan Descriptor Charge TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the CONVERT statewaiting for the ADC sample data. It must be ensured that the ADC will assert End-Of-Convert (EOC) before the CONVERT state timer expires. Mask */
#define CVD_CVDSD2T2_SDCONTIME(value)         (CVD_CVDSD2T2_SDCONTIME_Msk & (_UINT32_(value) << CVD_CVDSD2T2_SDCONTIME_Pos)) /* Assigment of value for SDCONTIME in the CVD_CVDSD2T2 register */
#define CVD_CVDSD2T2_SDPOLTIME_Pos            _UINT32_(8)                                          /* (CVD_CVDSD2T2) Scan Descriptor Polarity TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the POLARITY statebefore taking the second polarity measurement of an RX/TX pair Position */
#define CVD_CVDSD2T2_SDPOLTIME_Msk            (_UINT32_(0x7F) << CVD_CVDSD2T2_SDPOLTIME_Pos)       /* (CVD_CVDSD2T2) Scan Descriptor Polarity TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the POLARITY statebefore taking the second polarity measurement of an RX/TX pair Mask */
#define CVD_CVDSD2T2_SDPOLTIME(value)         (CVD_CVDSD2T2_SDPOLTIME_Msk & (_UINT32_(value) << CVD_CVDSD2T2_SDPOLTIME_Pos)) /* Assigment of value for SDPOLTIME in the CVD_CVDSD2T2 register */
#define CVD_CVDSD2T2_SDOVRTIME_Pos            _UINT32_(16)                                         /* (CVD_CVDSD2T2) Scan Descriptor Oversample TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the OVERSAMPstate before taking the next oversampling measurement of an RX/TX pair. Position */
#define CVD_CVDSD2T2_SDOVRTIME_Msk            (_UINT32_(0x7F) << CVD_CVDSD2T2_SDOVRTIME_Pos)       /* (CVD_CVDSD2T2) Scan Descriptor Oversample TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the OVERSAMPstate before taking the next oversampling measurement of an RX/TX pair. Mask */
#define CVD_CVDSD2T2_SDOVRTIME(value)         (CVD_CVDSD2T2_SDOVRTIME_Msk & (_UINT32_(value) << CVD_CVDSD2T2_SDOVRTIME_Pos)) /* Assigment of value for SDOVRTIME in the CVD_CVDSD2T2 register */
#define CVD_CVDSD2T2_SDCHNTIME_Pos            _UINT32_(24)                                         /* (CVD_CVDSD2T2) Scan Descriptor Channel TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the RXCHAN orTXCHAN state before moving to the next RX/TX pair Position */
#define CVD_CVDSD2T2_SDCHNTIME_Msk            (_UINT32_(0x7F) << CVD_CVDSD2T2_SDCHNTIME_Pos)       /* (CVD_CVDSD2T2) Scan Descriptor Channel TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the RXCHAN orTXCHAN state before moving to the next RX/TX pair Mask */
#define CVD_CVDSD2T2_SDCHNTIME(value)         (CVD_CVDSD2T2_SDCHNTIME_Msk & (_UINT32_(value) << CVD_CVDSD2T2_SDCHNTIME_Pos)) /* Assigment of value for SDCHNTIME in the CVD_CVDSD2T2 register */
#define CVD_CVDSD2T2_Msk                      _UINT32_(0x7F7F7F7F)                                 /* (CVD_CVDSD2T2) Register Mask  */


/* -------- CVD_CVDSD3C1 : (CVD Offset: 0x130) (R/W 32) CVD SCAN DESCRIPTOR N CONTROL1 REGISTER -------- */
#define CVD_CVDSD3C1_RESETVALUE               _UINT32_(0x00)                                       /*  (CVD_CVDSD3C1) CVD SCAN DESCRIPTOR N CONTROL1 REGISTER  Reset Value */

#define CVD_CVDSD3C1_SDOVRSAMP_Pos            _UINT32_(0)                                          /* (CVD_CVDSD3C1) Scan Descriptor Over Sampling0= One measurement1= Two measurements accumulated...127= 128 measurements accumulated Position */
#define CVD_CVDSD3C1_SDOVRSAMP_Msk            (_UINT32_(0x7F) << CVD_CVDSD3C1_SDOVRSAMP_Pos)       /* (CVD_CVDSD3C1) Scan Descriptor Over Sampling0= One measurement1= Two measurements accumulated...127= 128 measurements accumulated Mask */
#define CVD_CVDSD3C1_SDOVRSAMP(value)         (CVD_CVDSD3C1_SDOVRSAMP_Msk & (_UINT32_(value) << CVD_CVDSD3C1_SDOVRSAMP_Pos)) /* Assigment of value for SDOVRSAMP in the CVD_CVDSD3C1 register */
#define CVD_CVDSD3C1_SDTH_Pos                 _UINT32_(8)                                          /* (CVD_CVDSD3C1) Scan Descriptor Threshold. Position */
#define CVD_CVDSD3C1_SDTH_Msk                 (_UINT32_(0xFFFFFF) << CVD_CVDSD3C1_SDTH_Pos)        /* (CVD_CVDSD3C1) Scan Descriptor Threshold. Mask */
#define CVD_CVDSD3C1_SDTH(value)              (CVD_CVDSD3C1_SDTH_Msk & (_UINT32_(value) << CVD_CVDSD3C1_SDTH_Pos)) /* Assigment of value for SDTH in the CVD_CVDSD3C1 register */
#define CVD_CVDSD3C1_Msk                      _UINT32_(0xFFFFFF7F)                                 /* (CVD_CVDSD3C1) Register Mask  */


/* -------- CVD_CVDSD3C2 : (CVD Offset: 0x134) (R/W 32) CVD SCAN DESCRIPTOR N CONTROL2 REGISTER -------- */
#define CVD_CVDSD3C2_RESETVALUE               _UINT32_(0x00)                                       /*  (CVD_CVDSD3C2) CVD SCAN DESCRIPTOR N CONTROL2 REGISTER  Reset Value */

#define CVD_CVDSD3C2_SDRXBEG_Pos              _UINT32_(0)                                          /* (CVD_CVDSD3C2) Scan Descriptor RX Index StartDetermines the first RX index to include in a scan. Position */
#define CVD_CVDSD3C2_SDRXBEG_Msk              (_UINT32_(0x3F) << CVD_CVDSD3C2_SDRXBEG_Pos)         /* (CVD_CVDSD3C2) Scan Descriptor RX Index StartDetermines the first RX index to include in a scan. Mask */
#define CVD_CVDSD3C2_SDRXBEG(value)           (CVD_CVDSD3C2_SDRXBEG_Msk & (_UINT32_(value) << CVD_CVDSD3C2_SDRXBEG_Pos)) /* Assigment of value for SDRXBEG in the CVD_CVDSD3C2 register */
#define CVD_CVDSD3C2_SDRXSTRIDE0_Pos          _UINT32_(6)                                          /* (CVD_CVDSD3C2) Scan Descriptor RX Index StrideDetermines the number of RX Indexes included in a single measurement4'h0= One RX Index4'hF= 16 TX Indexes Position */
#define CVD_CVDSD3C2_SDRXSTRIDE0_Msk          (_UINT32_(0x3) << CVD_CVDSD3C2_SDRXSTRIDE0_Pos)      /* (CVD_CVDSD3C2) Scan Descriptor RX Index StrideDetermines the number of RX Indexes included in a single measurement4'h0= One RX Index4'hF= 16 TX Indexes Mask */
#define CVD_CVDSD3C2_SDRXSTRIDE0(value)       (CVD_CVDSD3C2_SDRXSTRIDE0_Msk & (_UINT32_(value) << CVD_CVDSD3C2_SDRXSTRIDE0_Pos)) /* Assigment of value for SDRXSTRIDE0 in the CVD_CVDSD3C2 register */
#define CVD_CVDSD3C2_SDRXEND_Pos              _UINT32_(8)                                          /* (CVD_CVDSD3C2) Scan Descriptor RX Index EndDetermines the last RX index to include in a scan.One the RX index pointer, which is incremented by the SDnRXSTRIDE+1 value, meets or exceeds this value, the RXloop of the scan is complete. Position */
#define CVD_CVDSD3C2_SDRXEND_Msk              (_UINT32_(0x3F) << CVD_CVDSD3C2_SDRXEND_Pos)         /* (CVD_CVDSD3C2) Scan Descriptor RX Index EndDetermines the last RX index to include in a scan.One the RX index pointer, which is incremented by the SDnRXSTRIDE+1 value, meets or exceeds this value, the RXloop of the scan is complete. Mask */
#define CVD_CVDSD3C2_SDRXEND(value)           (CVD_CVDSD3C2_SDRXEND_Msk & (_UINT32_(value) << CVD_CVDSD3C2_SDRXEND_Pos)) /* Assigment of value for SDRXEND in the CVD_CVDSD3C2 register */
#define CVD_CVDSD3C2_SDRXSTRIDE1_Pos          _UINT32_(14)                                         /* (CVD_CVDSD3C2) Scan Descriptor RX Index StrideDetermines the number of RX Indexes included in a single measurement4'h0= One RX Index4'hF= 16 TX Indexes Position */
#define CVD_CVDSD3C2_SDRXSTRIDE1_Msk          (_UINT32_(0x3) << CVD_CVDSD3C2_SDRXSTRIDE1_Pos)      /* (CVD_CVDSD3C2) Scan Descriptor RX Index StrideDetermines the number of RX Indexes included in a single measurement4'h0= One RX Index4'hF= 16 TX Indexes Mask */
#define CVD_CVDSD3C2_SDRXSTRIDE1(value)       (CVD_CVDSD3C2_SDRXSTRIDE1_Msk & (_UINT32_(value) << CVD_CVDSD3C2_SDRXSTRIDE1_Pos)) /* Assigment of value for SDRXSTRIDE1 in the CVD_CVDSD3C2 register */
#define CVD_CVDSD3C2_SDTXBEG_Pos              _UINT32_(16)                                         /* (CVD_CVDSD3C2) Scan Descriptor TX Index StartDetermines the first TX index to include in a scan. Position */
#define CVD_CVDSD3C2_SDTXBEG_Msk              (_UINT32_(0x3F) << CVD_CVDSD3C2_SDTXBEG_Pos)         /* (CVD_CVDSD3C2) Scan Descriptor TX Index StartDetermines the first TX index to include in a scan. Mask */
#define CVD_CVDSD3C2_SDTXBEG(value)           (CVD_CVDSD3C2_SDTXBEG_Msk & (_UINT32_(value) << CVD_CVDSD3C2_SDTXBEG_Pos)) /* Assigment of value for SDTXBEG in the CVD_CVDSD3C2 register */
#define CVD_CVDSD3C2_SDTXSTRIDE0_Pos          _UINT32_(22)                                         /* (CVD_CVDSD3C2) Scan Descriptor TX Index StrideDetermines the number of TX Indexes included in a single measurement.4'h0= One TX Index4'bF= 16TX Indexes Position */
#define CVD_CVDSD3C2_SDTXSTRIDE0_Msk          (_UINT32_(0x3) << CVD_CVDSD3C2_SDTXSTRIDE0_Pos)      /* (CVD_CVDSD3C2) Scan Descriptor TX Index StrideDetermines the number of TX Indexes included in a single measurement.4'h0= One TX Index4'bF= 16TX Indexes Mask */
#define CVD_CVDSD3C2_SDTXSTRIDE0(value)       (CVD_CVDSD3C2_SDTXSTRIDE0_Msk & (_UINT32_(value) << CVD_CVDSD3C2_SDTXSTRIDE0_Pos)) /* Assigment of value for SDTXSTRIDE0 in the CVD_CVDSD3C2 register */
#define CVD_CVDSD3C2_SDTXEND_Pos              _UINT32_(24)                                         /* (CVD_CVDSD3C2) Scan Descriptor TX Index EndDetermines the last TX index to include in a scan.One the TX index pointer, which is incremented by the SDnTXSTRIDE+1 value, meets or exceeds this value, the TXloop of the scan is complete. Position */
#define CVD_CVDSD3C2_SDTXEND_Msk              (_UINT32_(0x3F) << CVD_CVDSD3C2_SDTXEND_Pos)         /* (CVD_CVDSD3C2) Scan Descriptor TX Index EndDetermines the last TX index to include in a scan.One the TX index pointer, which is incremented by the SDnTXSTRIDE+1 value, meets or exceeds this value, the TXloop of the scan is complete. Mask */
#define CVD_CVDSD3C2_SDTXEND(value)           (CVD_CVDSD3C2_SDTXEND_Msk & (_UINT32_(value) << CVD_CVDSD3C2_SDTXEND_Pos)) /* Assigment of value for SDTXEND in the CVD_CVDSD3C2 register */
#define CVD_CVDSD3C2_SDTXSTRIDE1_Pos          _UINT32_(30)                                         /* (CVD_CVDSD3C2) Scan Descriptor TX Index StrideDetermines the number of TX Indexes included in a single measurement.4'h0= One TX Index4'bF= 16TX Indexes Position */
#define CVD_CVDSD3C2_SDTXSTRIDE1_Msk          (_UINT32_(0x3) << CVD_CVDSD3C2_SDTXSTRIDE1_Pos)      /* (CVD_CVDSD3C2) Scan Descriptor TX Index StrideDetermines the number of TX Indexes included in a single measurement.4'h0= One TX Index4'bF= 16TX Indexes Mask */
#define CVD_CVDSD3C2_SDTXSTRIDE1(value)       (CVD_CVDSD3C2_SDTXSTRIDE1_Msk & (_UINT32_(value) << CVD_CVDSD3C2_SDTXSTRIDE1_Pos)) /* Assigment of value for SDTXSTRIDE1 in the CVD_CVDSD3C2 register */
#define CVD_CVDSD3C2_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (CVD_CVDSD3C2) Register Mask  */


/* -------- CVD_CVDSD3C3 : (CVD Offset: 0x138) (R/W 32) CVD SCAN DESCRIPTOR N CONTROL3 REGISTER -------- */
#define CVD_CVDSD3C3_RESETVALUE               _UINT32_(0x00)                                       /*  (CVD_CVDSD3C3) CVD SCAN DESCRIPTOR N CONTROL3 REGISTER  Reset Value */

#define CVD_CVDSD3C3_SDCHGTIME_Pos            _UINT32_(0)                                          /* (CVD_CVDSD3C3) Scan Descriptor Charge TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the CHARGE statedriving both the internal and external capacitor nodes, as well as the TX output(s) Position */
#define CVD_CVDSD3C3_SDCHGTIME_Msk            (_UINT32_(0x7F) << CVD_CVDSD3C3_SDCHGTIME_Pos)       /* (CVD_CVDSD3C3) Scan Descriptor Charge TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the CHARGE statedriving both the internal and external capacitor nodes, as well as the TX output(s) Mask */
#define CVD_CVDSD3C3_SDCHGTIME(value)         (CVD_CVDSD3C3_SDCHGTIME_Msk & (_UINT32_(value) << CVD_CVDSD3C3_SDCHGTIME_Pos)) /* Assigment of value for SDCHGTIME in the CVD_CVDSD3C3 register */
#define CVD_CVDSD3C3_SDACQTIME_Pos            _UINT32_(8)                                          /* (CVD_CVDSD3C3) Scan Descriptor Acquire TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the ACQUIRE stateto allow the ADC voltage to settle Position */
#define CVD_CVDSD3C3_SDACQTIME_Msk            (_UINT32_(0x7F) << CVD_CVDSD3C3_SDACQTIME_Pos)       /* (CVD_CVDSD3C3) Scan Descriptor Acquire TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the ACQUIRE stateto allow the ADC voltage to settle Mask */
#define CVD_CVDSD3C3_SDACQTIME(value)         (CVD_CVDSD3C3_SDACQTIME_Msk & (_UINT32_(value) << CVD_CVDSD3C3_SDACQTIME_Pos)) /* Assigment of value for SDACQTIME in the CVD_CVDSD3C3 register */
#define CVD_CVDSD3C3_CVDCPL_Pos               _UINT32_(16)                                         /* (CVD_CVDSD3C3) Capacitor Voltage Divider (CVD) Setting bits Position */
#define CVD_CVDSD3C3_CVDCPL_Msk               (_UINT32_(0x7) << CVD_CVDSD3C3_CVDCPL_Pos)           /* (CVD_CVDSD3C3) Capacitor Voltage Divider (CVD) Setting bits Mask */
#define CVD_CVDSD3C3_CVDCPL(value)            (CVD_CVDSD3C3_CVDCPL_Msk & (_UINT32_(value) << CVD_CVDSD3C3_CVDCPL_Pos)) /* Assigment of value for CVDCPL in the CVD_CVDSD3C3 register */
#define CVD_CVDSD3C3_CVDEN_Pos                _UINT32_(19)                                         /* (CVD_CVDSD3C3)  Capacitive Voltage Division Enable bit Position */
#define CVD_CVDSD3C3_CVDEN_Msk                (_UINT32_(0x1) << CVD_CVDSD3C3_CVDEN_Pos)            /* (CVD_CVDSD3C3)  Capacitive Voltage Division Enable bit Mask */
#define CVD_CVDSD3C3_CVDEN(value)             (CVD_CVDSD3C3_CVDEN_Msk & (_UINT32_(value) << CVD_CVDSD3C3_CVDEN_Pos)) /* Assigment of value for CVDEN in the CVD_CVDSD3C3 register */
#define CVD_CVDSD3C3_SDMUT_Pos                _UINT32_(24)                                         /* (CVD_CVDSD3C3) Scan Descriptor Mutual Mode1= Mutual Measurement Mode; TX outputs are part of CVD measurement and are driven0=No Mutual Measurement Mode; TX outputs are not part of CVD measurements Position */
#define CVD_CVDSD3C3_SDMUT_Msk                (_UINT32_(0x1) << CVD_CVDSD3C3_SDMUT_Pos)            /* (CVD_CVDSD3C3) Scan Descriptor Mutual Mode1= Mutual Measurement Mode; TX outputs are part of CVD measurement and are driven0=No Mutual Measurement Mode; TX outputs are not part of CVD measurements Mask */
#define CVD_CVDSD3C3_SDMUT(value)             (CVD_CVDSD3C3_SDMUT_Msk & (_UINT32_(value) << CVD_CVDSD3C3_SDMUT_Pos)) /* Assigment of value for SDMUT in the CVD_CVDSD3C3 register */
#define CVD_CVDSD3C3_SDSELF_Pos               _UINT32_(25)                                         /* (CVD_CVDSD3C3) Scan Descriptor Mutual Mode1= Self Measurement Mode; RX outputs are part of CVD measurement and are driven0= No Self Measurement; RX outputs are not part of CVD measurements Position */
#define CVD_CVDSD3C3_SDSELF_Msk               (_UINT32_(0x1) << CVD_CVDSD3C3_SDSELF_Pos)           /* (CVD_CVDSD3C3) Scan Descriptor Mutual Mode1= Self Measurement Mode; RX outputs are part of CVD measurement and are driven0= No Self Measurement; RX outputs are not part of CVD measurements Mask */
#define CVD_CVDSD3C3_SDSELF(value)            (CVD_CVDSD3C3_SDSELF_Msk & (_UINT32_(value) << CVD_CVDSD3C3_SDSELF_Pos)) /* Assigment of value for SDSELF in the CVD_CVDSD3C3 register */
#define CVD_CVDSD3C3_SDINTEN_Pos              _UINT32_(26)                                         /* (CVD_CVDSD3C3) Scan Descriptor Interrupt Enable1= Scan Descriptor creates an interrupt if the accumulator threshold is met0= Scan descriptor does not create an interrupt Position */
#define CVD_CVDSD3C3_SDINTEN_Msk              (_UINT32_(0x1) << CVD_CVDSD3C3_SDINTEN_Pos)          /* (CVD_CVDSD3C3) Scan Descriptor Interrupt Enable1= Scan Descriptor creates an interrupt if the accumulator threshold is met0= Scan descriptor does not create an interrupt Mask */
#define CVD_CVDSD3C3_SDINTEN(value)           (CVD_CVDSD3C3_SDINTEN_Msk & (_UINT32_(value) << CVD_CVDSD3C3_SDINTEN_Pos)) /* Assigment of value for SDINTEN in the CVD_CVDSD3C3 register */
#define CVD_CVDSD3C3_SDBUF_Pos                _UINT32_(27)                                         /* (CVD_CVDSD3C3) Scan Descriptor CVD Buffer Enable1= Use the SOC's CVD Buffer macro to drive the party-line (shared ADC core input) rather than the RX outputs0= SOC's CVD Buffer macro not used to drive party-line (or doesn't exist) Position */
#define CVD_CVDSD3C3_SDBUF_Msk                (_UINT32_(0x1) << CVD_CVDSD3C3_SDBUF_Pos)            /* (CVD_CVDSD3C3) Scan Descriptor CVD Buffer Enable1= Use the SOC's CVD Buffer macro to drive the party-line (shared ADC core input) rather than the RX outputs0= SOC's CVD Buffer macro not used to drive party-line (or doesn't exist) Mask */
#define CVD_CVDSD3C3_SDBUF(value)             (CVD_CVDSD3C3_SDBUF_Msk & (_UINT32_(value) << CVD_CVDSD3C3_SDBUF_Pos)) /* Assigment of value for SDBUF in the CVD_CVDSD3C3 register */
#define CVD_CVDSD3C3_SDEN_Pos                 _UINT32_(30)                                         /* (CVD_CVDSD3C3) Scan Descriptor Enable Mode00= Scan Descriptor Disabled01= Execute Scan Descriptor one time only, then clear the enable.10= Execute the Scan Descriptor, but keep enabled. Move on to next enabled descriptors.11= Execute the Scan Descriptor in a loop until a threshold match is detected, then clear the enable and move on tonext enabled descriptors. Position */
#define CVD_CVDSD3C3_SDEN_Msk                 (_UINT32_(0x3) << CVD_CVDSD3C3_SDEN_Pos)             /* (CVD_CVDSD3C3) Scan Descriptor Enable Mode00= Scan Descriptor Disabled01= Execute Scan Descriptor one time only, then clear the enable.10= Execute the Scan Descriptor, but keep enabled. Move on to next enabled descriptors.11= Execute the Scan Descriptor in a loop until a threshold match is detected, then clear the enable and move on tonext enabled descriptors. Mask */
#define CVD_CVDSD3C3_SDEN(value)              (CVD_CVDSD3C3_SDEN_Msk & (_UINT32_(value) << CVD_CVDSD3C3_SDEN_Pos)) /* Assigment of value for SDEN in the CVD_CVDSD3C3 register */
#define CVD_CVDSD3C3_Msk                      _UINT32_(0xCF0F7F7F)                                 /* (CVD_CVDSD3C3) Register Mask  */


/* -------- CVD_CVDSD3T2 : (CVD Offset: 0x13C) (R/W 32) CVD SCAN DESCRIPTOR N TIME2 REGISTER -------- */
#define CVD_CVDSD3T2_RESETVALUE               _UINT32_(0x00)                                       /*  (CVD_CVDSD3T2) CVD SCAN DESCRIPTOR N TIME2 REGISTER  Reset Value */

#define CVD_CVDSD3T2_SDCONTIME_Pos            _UINT32_(0)                                          /* (CVD_CVDSD3T2) Scan Descriptor Charge TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the CONVERT statewaiting for the ADC sample data. It must be ensured that the ADC will assert End-Of-Convert (EOC) before the CONVERT state timer expires. Position */
#define CVD_CVDSD3T2_SDCONTIME_Msk            (_UINT32_(0x7F) << CVD_CVDSD3T2_SDCONTIME_Pos)       /* (CVD_CVDSD3T2) Scan Descriptor Charge TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the CONVERT statewaiting for the ADC sample data. It must be ensured that the ADC will assert End-Of-Convert (EOC) before the CONVERT state timer expires. Mask */
#define CVD_CVDSD3T2_SDCONTIME(value)         (CVD_CVDSD3T2_SDCONTIME_Msk & (_UINT32_(value) << CVD_CVDSD3T2_SDCONTIME_Pos)) /* Assigment of value for SDCONTIME in the CVD_CVDSD3T2 register */
#define CVD_CVDSD3T2_SDPOLTIME_Pos            _UINT32_(8)                                          /* (CVD_CVDSD3T2) Scan Descriptor Polarity TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the POLARITY statebefore taking the second polarity measurement of an RX/TX pair Position */
#define CVD_CVDSD3T2_SDPOLTIME_Msk            (_UINT32_(0x7F) << CVD_CVDSD3T2_SDPOLTIME_Pos)       /* (CVD_CVDSD3T2) Scan Descriptor Polarity TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the POLARITY statebefore taking the second polarity measurement of an RX/TX pair Mask */
#define CVD_CVDSD3T2_SDPOLTIME(value)         (CVD_CVDSD3T2_SDPOLTIME_Msk & (_UINT32_(value) << CVD_CVDSD3T2_SDPOLTIME_Pos)) /* Assigment of value for SDPOLTIME in the CVD_CVDSD3T2 register */
#define CVD_CVDSD3T2_SDOVRTIME_Pos            _UINT32_(16)                                         /* (CVD_CVDSD3T2) Scan Descriptor Oversample TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the OVERSAMPstate before taking the next oversampling measurement of an RX/TX pair. Position */
#define CVD_CVDSD3T2_SDOVRTIME_Msk            (_UINT32_(0x7F) << CVD_CVDSD3T2_SDOVRTIME_Pos)       /* (CVD_CVDSD3T2) Scan Descriptor Oversample TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the OVERSAMPstate before taking the next oversampling measurement of an RX/TX pair. Mask */
#define CVD_CVDSD3T2_SDOVRTIME(value)         (CVD_CVDSD3T2_SDOVRTIME_Msk & (_UINT32_(value) << CVD_CVDSD3T2_SDOVRTIME_Pos)) /* Assigment of value for SDOVRTIME in the CVD_CVDSD3T2 register */
#define CVD_CVDSD3T2_SDCHNTIME_Pos            _UINT32_(24)                                         /* (CVD_CVDSD3T2) Scan Descriptor Channel TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the RXCHAN orTXCHAN state before moving to the next RX/TX pair Position */
#define CVD_CVDSD3T2_SDCHNTIME_Msk            (_UINT32_(0x7F) << CVD_CVDSD3T2_SDCHNTIME_Pos)       /* (CVD_CVDSD3T2) Scan Descriptor Channel TimeControls the number of cycles (clock based on CVDCON.CLKSEL[1:0]) the state machine waits in the RXCHAN orTXCHAN state before moving to the next RX/TX pair Mask */
#define CVD_CVDSD3T2_SDCHNTIME(value)         (CVD_CVDSD3T2_SDCHNTIME_Msk & (_UINT32_(value) << CVD_CVDSD3T2_SDCHNTIME_Pos)) /* Assigment of value for SDCHNTIME in the CVD_CVDSD3T2 register */
#define CVD_CVDSD3T2_Msk                      _UINT32_(0x7F7F7F7F)                                 /* (CVD_CVDSD3T2) Register Mask  */


/* -------- CVD_CVDBG : (CVD Offset: 0x200) (R/W 32) CVD DEBUG REGISTER -------- */
#define CVD_CVDBG_RESETVALUE                  _UINT32_(0x00)                                       /*  (CVD_CVDBG) CVD DEBUG REGISTER  Reset Value */

#define CVD_CVDBG_SEL_L_Pos                   _UINT32_(0)                                          /* (CVD_CVDBG) Select signal to MUX debug signals on to port cvd_tst_dbg_data[15:0] Position */
#define CVD_CVDBG_SEL_L_Msk                   (_UINT32_(0xFFFF) << CVD_CVDBG_SEL_L_Pos)            /* (CVD_CVDBG) Select signal to MUX debug signals on to port cvd_tst_dbg_data[15:0] Mask */
#define CVD_CVDBG_SEL_L(value)                (CVD_CVDBG_SEL_L_Msk & (_UINT32_(value) << CVD_CVDBG_SEL_L_Pos)) /* Assigment of value for SEL_L in the CVD_CVDBG register */
#define CVD_CVDBG_SEL_H_Pos                   _UINT32_(16)                                         /* (CVD_CVDBG) Select signal to MUX debug signals on to port cvd_tst_dbg_data[31:16] Position */
#define CVD_CVDBG_SEL_H_Msk                   (_UINT32_(0xFFFF) << CVD_CVDBG_SEL_H_Pos)            /* (CVD_CVDBG) Select signal to MUX debug signals on to port cvd_tst_dbg_data[31:16] Mask */
#define CVD_CVDBG_SEL_H(value)                (CVD_CVDBG_SEL_H_Msk & (_UINT32_(value) << CVD_CVDBG_SEL_H_Pos)) /* Assigment of value for SEL_H in the CVD_CVDBG register */
#define CVD_CVDBG_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (CVD_CVDBG) Register Mask  */


/** \brief CVD register offsets definitions */
#define CVD_CVDCON_REG_OFST            _UINT32_(0x00)      /* (CVD_CVDCON) CVD Control Register Offset */
#define CVD_CVDADC_REG_OFST            _UINT32_(0x04)      /* (CVD_CVDADC) CVD ADC Configuration Register Offset */
#define CVD_CVDSTAT_REG_OFST           _UINT32_(0x08)      /* (CVD_CVDSTAT) CVD Status Register Offset */
#define CVD_CVDRESH_REG_OFST           _UINT32_(0x10)      /* (CVD_CVDRESH) CVD RESULTS POS FIFO Read Register (CVDRESH) Offset */
#define CVD_CVDRESL_REG_OFST           _UINT32_(0x14)      /* (CVD_CVDRESL) CVD RESULTS NEG FIFO Read Register Offset */
#define CVD_CVDRESD_REG_OFST           _UINT32_(0x18)      /* (CVD_CVDRESD) CVD RESULTS DESCRIPTOR FIFO Read Register Offset */
#define CVD_CVDRX_REG_OFST             _UINT32_(0x80)      /* (CVD_CVDRX) CVD RECEIVE INDEX N CONFIGURATION Register Offset */
#define CVD_CVDRX0_REG_OFST            _UINT32_(0x80)      /* (CVD_CVDRX0) CVD RECEIVE INDEX N CONFIGURATION Register Offset */
#define CVD_CVDRX1_REG_OFST            _UINT32_(0x84)      /* (CVD_CVDRX1) CVD RECEIVE INDEX N CONFIGURATION Register Offset */
#define CVD_CVDTX_REG_OFST             _UINT32_(0xC0)      /* (CVD_CVDTX) CVD TRANSMIT INDEX NCONFIGURATION Offset */
#define CVD_CVDTX0_REG_OFST            _UINT32_(0xC0)      /* (CVD_CVDTX0) CVD TRANSMIT INDEX NCONFIGURATION Offset */
#define CVD_CVDTX1_REG_OFST            _UINT32_(0xC4)      /* (CVD_CVDTX1) CVD TRANSMIT INDEX NCONFIGURATION Offset */
#define CVD_CVDSD0C1_REG_OFST          _UINT32_(0x100)     /* (CVD_CVDSD0C1) CVD SCAN DESCRIPTOR N CONTROL1 REGISTER Offset */
#define CVD_CVDSD0C2_REG_OFST          _UINT32_(0x104)     /* (CVD_CVDSD0C2) CVD SCAN DESCRIPTOR N CONTROL2 REGISTER Offset */
#define CVD_CVDSD0C3_REG_OFST          _UINT32_(0x108)     /* (CVD_CVDSD0C3) CVD SCAN DESCRIPTOR N CONTROL3 REGISTER Offset */
#define CVD_CVDSD0T2_REG_OFST          _UINT32_(0x10C)     /* (CVD_CVDSD0T2) CVD SCAN DESCRIPTOR N TIME2 REGISTER Offset */
#define CVD_CVDSD1C1_REG_OFST          _UINT32_(0x110)     /* (CVD_CVDSD1C1) CVD SCAN DESCRIPTOR N CONTROL1 REGISTER Offset */
#define CVD_CVDSD1C2_REG_OFST          _UINT32_(0x114)     /* (CVD_CVDSD1C2) CVD SCAN DESCRIPTOR N CONTROL2 REGISTER Offset */
#define CVD_CVDSD1C3_REG_OFST          _UINT32_(0x118)     /* (CVD_CVDSD1C3) CVD SCAN DESCRIPTOR N CONTROL3 REGISTER Offset */
#define CVD_CVDSD1T2_REG_OFST          _UINT32_(0x11C)     /* (CVD_CVDSD1T2) CVD SCAN DESCRIPTOR N TIME2 REGISTER Offset */
#define CVD_CVDSD2C1_REG_OFST          _UINT32_(0x120)     /* (CVD_CVDSD2C1) CVD SCAN DESCRIPTOR N CONTROL1 REGISTER Offset */
#define CVD_CVDSD2C2_REG_OFST          _UINT32_(0x124)     /* (CVD_CVDSD2C2) CVD SCAN DESCRIPTOR N CONTROL2 REGISTER Offset */
#define CVD_CVDSD2C3_REG_OFST          _UINT32_(0x128)     /* (CVD_CVDSD2C3) CVD SCAN DESCRIPTOR N CONTROL3 REGISTER Offset */
#define CVD_CVDSD2T2_REG_OFST          _UINT32_(0x12C)     /* (CVD_CVDSD2T2) CVD SCAN DESCRIPTOR N TIME2 REGISTER Offset */
#define CVD_CVDSD3C1_REG_OFST          _UINT32_(0x130)     /* (CVD_CVDSD3C1) CVD SCAN DESCRIPTOR N CONTROL1 REGISTER Offset */
#define CVD_CVDSD3C2_REG_OFST          _UINT32_(0x134)     /* (CVD_CVDSD3C2) CVD SCAN DESCRIPTOR N CONTROL2 REGISTER Offset */
#define CVD_CVDSD3C3_REG_OFST          _UINT32_(0x138)     /* (CVD_CVDSD3C3) CVD SCAN DESCRIPTOR N CONTROL3 REGISTER Offset */
#define CVD_CVDSD3T2_REG_OFST          _UINT32_(0x13C)     /* (CVD_CVDSD3T2) CVD SCAN DESCRIPTOR N TIME2 REGISTER Offset */
#define CVD_CVDBG_REG_OFST             _UINT32_(0x200)     /* (CVD_CVDBG) CVD DEBUG REGISTER Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief CVD register API structure */
typedef struct
{  /* Hardware CVD Controller Macro */
  __IO  uint32_t                       CVD_CVDCON;         /**< Offset: 0x00 (R/W  32) CVD Control Register */
  __IO  uint32_t                       CVD_CVDADC;         /**< Offset: 0x04 (R/W  32) CVD ADC Configuration Register */
  __IO  uint32_t                       CVD_CVDSTAT;        /**< Offset: 0x08 (R/W  32) CVD Status Register */
  __I   uint8_t                        Reserved1[0x04];
  __I   uint32_t                       CVD_CVDRESH;        /**< Offset: 0x10 (R/   32) CVD RESULTS POS FIFO Read Register (CVDRESH) */
  __I   uint32_t                       CVD_CVDRESL;        /**< Offset: 0x14 (R/   32) CVD RESULTS NEG FIFO Read Register */
  __I   uint32_t                       CVD_CVDRESD;        /**< Offset: 0x18 (R/   32) CVD RESULTS DESCRIPTOR FIFO Read Register */
  __I   uint8_t                        Reserved2[0x64];
  __IO  uint32_t                       CVD_CVDRX[2];       /**< Offset: 0x80 (R/W  32) CVD RECEIVE INDEX N CONFIGURATION Register */
  __I   uint8_t                        Reserved3[0x38];
  __IO  uint32_t                       CVD_CVDTX[2];       /**< Offset: 0xC0 (R/W  32) CVD TRANSMIT INDEX NCONFIGURATION */
  __I   uint8_t                        Reserved4[0x38];
  __IO  uint32_t                       CVD_CVDSD0C1;       /**< Offset: 0x100 (R/W  32) CVD SCAN DESCRIPTOR N CONTROL1 REGISTER */
  __IO  uint32_t                       CVD_CVDSD0C2;       /**< Offset: 0x104 (R/W  32) CVD SCAN DESCRIPTOR N CONTROL2 REGISTER */
  __IO  uint32_t                       CVD_CVDSD0C3;       /**< Offset: 0x108 (R/W  32) CVD SCAN DESCRIPTOR N CONTROL3 REGISTER */
  __IO  uint32_t                       CVD_CVDSD0T2;       /**< Offset: 0x10C (R/W  32) CVD SCAN DESCRIPTOR N TIME2 REGISTER */
  __IO  uint32_t                       CVD_CVDSD1C1;       /**< Offset: 0x110 (R/W  32) CVD SCAN DESCRIPTOR N CONTROL1 REGISTER */
  __IO  uint32_t                       CVD_CVDSD1C2;       /**< Offset: 0x114 (R/W  32) CVD SCAN DESCRIPTOR N CONTROL2 REGISTER */
  __IO  uint32_t                       CVD_CVDSD1C3;       /**< Offset: 0x118 (R/W  32) CVD SCAN DESCRIPTOR N CONTROL3 REGISTER */
  __IO  uint32_t                       CVD_CVDSD1T2;       /**< Offset: 0x11C (R/W  32) CVD SCAN DESCRIPTOR N TIME2 REGISTER */
  __IO  uint32_t                       CVD_CVDSD2C1;       /**< Offset: 0x120 (R/W  32) CVD SCAN DESCRIPTOR N CONTROL1 REGISTER */
  __IO  uint32_t                       CVD_CVDSD2C2;       /**< Offset: 0x124 (R/W  32) CVD SCAN DESCRIPTOR N CONTROL2 REGISTER */
  __IO  uint32_t                       CVD_CVDSD2C3;       /**< Offset: 0x128 (R/W  32) CVD SCAN DESCRIPTOR N CONTROL3 REGISTER */
  __IO  uint32_t                       CVD_CVDSD2T2;       /**< Offset: 0x12C (R/W  32) CVD SCAN DESCRIPTOR N TIME2 REGISTER */
  __IO  uint32_t                       CVD_CVDSD3C1;       /**< Offset: 0x130 (R/W  32) CVD SCAN DESCRIPTOR N CONTROL1 REGISTER */
  __IO  uint32_t                       CVD_CVDSD3C2;       /**< Offset: 0x134 (R/W  32) CVD SCAN DESCRIPTOR N CONTROL2 REGISTER */
  __IO  uint32_t                       CVD_CVDSD3C3;       /**< Offset: 0x138 (R/W  32) CVD SCAN DESCRIPTOR N CONTROL3 REGISTER */
  __IO  uint32_t                       CVD_CVDSD3T2;       /**< Offset: 0x13C (R/W  32) CVD SCAN DESCRIPTOR N TIME2 REGISTER */
  __I   uint8_t                        Reserved5[0xC0];
  __IO  uint32_t                       CVD_CVDBG;          /**< Offset: 0x200 (R/W  32) CVD DEBUG REGISTER */
} cvd_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _WBZ35_CVD_COMPONENT_H_ */
