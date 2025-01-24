/*******************************************************************************
 Cortex-M device vectors file

  Company:
    Microchip Technology Inc.

  File Name:
    device_vectors.h

  Summary:
    Harmony3 device handler structure for cortex-M devices

  Description:
    This file contains Harmony3 device handler structure for cortex-M devices
 *******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *******************************************************************************/
// DOM-IGNORE-END

#ifndef DEVICE_VECTORS_H
#define DEVICE_VECTORS_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
#include <stdint.h>

// *****************************************************************************
// *****************************************************************************
// Section: Data Types
// *****************************************************************************
// *****************************************************************************

/* Function pointer type for vector handlers */
typedef void (*pfn_handler_t)(void);

/* Structure defining device vector types */
typedef struct H3DeviceVectorsTag
{
  /* Stack pointer */
  uint32_t* pvStack;

  /* CORTEX-M23 handlers */ 
  pfn_handler_t pfnReset_Handler;                   /* -15 Reset Vector, invoked on Power up and warm reset */
  pfn_handler_t pfnNonMaskableInt_Handler;          /* -14 Non maskable Interrupt, cannot be stopped or preempted */
  pfn_handler_t pfnHardFault_Handler;               /* -13 Hard Fault, all classes of Fault */
  pfn_handler_t pfnReservedC12;
  pfn_handler_t pfnReservedC11;
  pfn_handler_t pfnReservedC10;
  pfn_handler_t pfnReservedC9;
  pfn_handler_t pfnReservedC8;
  pfn_handler_t pfnReservedC7;
  pfn_handler_t pfnReservedC6;
  pfn_handler_t pfnSVCall_Handler;                  /* -5 System Service Call via SVC instruction */
  pfn_handler_t pfnReservedC4;
  pfn_handler_t pfnReservedC3;
  pfn_handler_t pfnPendSV_Handler;                  /* -2 Pendable request for system service */
  pfn_handler_t pfnSysTick_Handler;                 /* -1 System Tick Timer */

  /* Peripheral handlers */
  pfn_handler_t pfnFCR_Handler;                     /* 0 None */
  pfn_handler_t pfnFCW_Handler;                     /* 1 None */
  pfn_handler_t pfnPM_Handler;                      /* 2 None */
  pfn_handler_t pfnSUPC_Handler;                    /* 3 None */
  pfn_handler_t pfnOSCCTRL_XOSCRDY_Handler;         /* 4 None */
  pfn_handler_t pfnOSCCTRL_DFLLRDY_Handler;         /* 5 None */
  pfn_handler_t pfnOSCCTRL_PLLLOCKR_0_Handler;      /* 6 None */
  pfn_handler_t pfnOSC32KCTRL_XOSC32KRDY_Handler;   /* 7 None */
  pfn_handler_t pfnOSC32KCTRL_XOSC32KFAIL_Handler;  /* 8 None */
  pfn_handler_t pfnMCLK_Handler;                    /* 9 None */
  pfn_handler_t pfnFREQM_Handler;                   /* 10 None */
  pfn_handler_t pfnWDT_Handler;                     /* 11 None */
  pfn_handler_t pfnRTC_TAMPER_Handler;              /* 12 None */
  pfn_handler_t pfnRTC_OVF_Handler;                 /* 13 None */
  pfn_handler_t pfnRTC_PER0_Handler;                /* 14 None */
  pfn_handler_t pfnRTC_CMP0_Handler;                /* 15 None */
  pfn_handler_t pfnEIC_EXTINT0_Handler;             /* 16 None */
  pfn_handler_t pfnEIC_EXTINT1_Handler;             /* 17 None */
  pfn_handler_t pfnEIC_EXTINT2_Handler;             /* 18 None */
  pfn_handler_t pfnEIC_EXTINT3_Handler;             /* 19 None */
  pfn_handler_t pfnEIC_EXTINT4_Handler;             /* 20 None */
  pfn_handler_t pfnEIC_EXTINT5_Handler;             /* 21 None */
  pfn_handler_t pfnEIC_EXTINT6_Handler;             /* 22 None */
  pfn_handler_t pfnEIC_EXTINT7_Handler;             /* 23 None */
  pfn_handler_t pfnEIC_EXTINT8_Handler;             /* 24 None */
  pfn_handler_t pfnEIC_EXTINT9_Handler;             /* 25 None */
  pfn_handler_t pfnEIC_EXTINT10_Handler;            /* 26 None */
  pfn_handler_t pfnEIC_EXTINT11_Handler;            /* 27 None */
  pfn_handler_t pfnEIC_EXTINT12_Handler;            /* 28 None */
  pfn_handler_t pfnEIC_EXTINT13_Handler;            /* 29 None */
  pfn_handler_t pfnEIC_EXTINT14_Handler;            /* 30 None */
  pfn_handler_t pfnEIC_EXTINT15_Handler;            /* 31 None */
  pfn_handler_t pfnEIC_NSCHK_Handler;               /* 32 None */
  pfn_handler_t pfnReserved33;
  pfn_handler_t pfnMCRAMC_Handler;                  /* 34 None */
  pfn_handler_t pfnCAN0_INT0_Handler;               /* 35 None */
  pfn_handler_t pfnCAN0_INT1_Handler;               /* 36 None */
  pfn_handler_t pfnCAN0_BERR_Handler;               /* 37 None */
  pfn_handler_t pfnCAN1_INT0_Handler;               /* 38 None */
  pfn_handler_t pfnCAN1_INT1_Handler;               /* 39 None */
  pfn_handler_t pfnCAN1_BERR_Handler;               /* 40 None */
  pfn_handler_t pfnPORT_Handler;                    /* 41 None */
  pfn_handler_t pfnDMAC_TCMPL0_Handler;             /* 42 None */
  pfn_handler_t pfnDMAC_TCMPL1_Handler;             /* 43 None */
  pfn_handler_t pfnDMAC_TCMPL2_Handler;             /* 44 None */
  pfn_handler_t pfnDMAC_TCMPL3_Handler;             /* 45 None */
  pfn_handler_t pfnDMAC_TCMPL4_Handler;             /* 46 None */
  pfn_handler_t pfnHMATRIX2_Handler;                /* 47 None */
  pfn_handler_t pfnEVSYS_EVD0_Handler;              /* 48 None */
  pfn_handler_t pfnEVSYS_EVD1_Handler;              /* 49 None */
  pfn_handler_t pfnEVSYS_EVD2_Handler;              /* 50 None */
  pfn_handler_t pfnEVSYS_EVD3_Handler;              /* 51 None */
  pfn_handler_t pfnEVSYS_EVD4_Handler;              /* 52 None */
  pfn_handler_t pfnEVSYS_EVD5_Handler;              /* 53 None */
  pfn_handler_t pfnEVSYS_EVD6_Handler;              /* 54 None */
  pfn_handler_t pfnEVSYS_EVD7_Handler;              /* 55 None */
  pfn_handler_t pfnEVSYS_EVD8_Handler;              /* 56 None */
  pfn_handler_t pfnEVSYS_EVD9_Handler;              /* 57 None */
  pfn_handler_t pfnEVSYS_EVD10_Handler;             /* 58 None */
  pfn_handler_t pfnEVSYS_EVD11_Handler;             /* 59 None */
  pfn_handler_t pfnSERCOM0_6_Handler;               /* 60 None */
  pfn_handler_t pfnSERCOM0_5_Handler;               /* 61 None */
  pfn_handler_t pfnSERCOM0_0_Handler;               /* 62 None */
  pfn_handler_t pfnSERCOM0_1_Handler;               /* 63 None */
  pfn_handler_t pfnSERCOM0_2_Handler;               /* 64 None */
  pfn_handler_t pfnSERCOM0_3_Handler;               /* 65 None */
  pfn_handler_t pfnSERCOM0_4_Handler;               /* 66 None */
  pfn_handler_t pfnSERCOM1_6_Handler;               /* 67 None */
  pfn_handler_t pfnSERCOM1_5_Handler;               /* 68 None */
  pfn_handler_t pfnSERCOM1_0_Handler;               /* 69 None */
  pfn_handler_t pfnSERCOM1_1_Handler;               /* 70 None */
  pfn_handler_t pfnSERCOM1_2_Handler;               /* 71 None */
  pfn_handler_t pfnSERCOM1_3_Handler;               /* 72 None */
  pfn_handler_t pfnSERCOM1_4_Handler;               /* 73 None */
  pfn_handler_t pfnSERCOM2_6_Handler;               /* 74 None */
  pfn_handler_t pfnSERCOM2_5_Handler;               /* 75 None */
  pfn_handler_t pfnSERCOM2_0_Handler;               /* 76 None */
  pfn_handler_t pfnSERCOM2_1_Handler;               /* 77 None */
  pfn_handler_t pfnSERCOM2_2_Handler;               /* 78 None */
  pfn_handler_t pfnSERCOM2_3_Handler;               /* 79 None */
  pfn_handler_t pfnSERCOM2_4_Handler;               /* 80 None */
  pfn_handler_t pfnSERCOM3_6_Handler;               /* 81 None */
  pfn_handler_t pfnSERCOM3_5_Handler;               /* 82 None */
  pfn_handler_t pfnSERCOM3_0_Handler;               /* 83 None */
  pfn_handler_t pfnSERCOM3_1_Handler;               /* 84 None */
  pfn_handler_t pfnSERCOM3_2_Handler;               /* 85 None */
  pfn_handler_t pfnSERCOM3_3_Handler;               /* 86 None */
  pfn_handler_t pfnSERCOM3_4_Handler;               /* 87 None */
  pfn_handler_t pfnTCC0_DFS_Handler;                /* 88 None */
  pfn_handler_t pfnTCC0_CNT_Handler;                /* 89 None */
  pfn_handler_t pfnTCC0_MC0_Handler;                /* 90 None */
  pfn_handler_t pfnTCC0_MC1_Handler;                /* 91 None */
  pfn_handler_t pfnTCC1_DFS_Handler;                /* 92 None */
  pfn_handler_t pfnTCC1_CNT_Handler;                /* 93 None */
  pfn_handler_t pfnTCC1_MC0_Handler;                /* 94 None */
  pfn_handler_t pfnTCC1_MC1_Handler;                /* 95 None */
  pfn_handler_t pfnTCC2_DFS_Handler;                /* 96 None */
  pfn_handler_t pfnTCC2_CNT_Handler;                /* 97 None */
  pfn_handler_t pfnTCC2_MC0_Handler;                /* 98 None */
  pfn_handler_t pfnTCC2_MC1_Handler;                /* 99 None */
  pfn_handler_t pfnTCC3_DFS_Handler;                /* 100 None */
  pfn_handler_t pfnTCC3_CNT_Handler;                /* 101 None */
  pfn_handler_t pfnTCC3_MC0_Handler;                /* 102 None */
  pfn_handler_t pfnTCC3_MC1_Handler;                /* 103 None */
  pfn_handler_t pfnSERCOM4_6_Handler;               /* 104 None */
  pfn_handler_t pfnSERCOM4_5_Handler;               /* 105 None */
  pfn_handler_t pfnSERCOM4_0_Handler;               /* 106 None */
  pfn_handler_t pfnSERCOM4_1_Handler;               /* 107 None */
  pfn_handler_t pfnSERCOM4_2_Handler;               /* 108 None */
  pfn_handler_t pfnSERCOM4_3_Handler;               /* 109 None */
  pfn_handler_t pfnSERCOM4_4_Handler;               /* 110 None */
  pfn_handler_t pfnSERCOM5_6_Handler;               /* 111 None */
  pfn_handler_t pfnSERCOM5_5_Handler;               /* 112 None */
  pfn_handler_t pfnSERCOM5_0_Handler;               /* 113 None */
  pfn_handler_t pfnSERCOM5_1_Handler;               /* 114 None */
  pfn_handler_t pfnSERCOM5_2_Handler;               /* 115 None */
  pfn_handler_t pfnSERCOM5_3_Handler;               /* 116 None */
  pfn_handler_t pfnSERCOM5_4_Handler;               /* 117 None */
  pfn_handler_t pfnTCC4_DFS_Handler;                /* 118 None */
  pfn_handler_t pfnTCC4_CNT_Handler;                /* 119 None */
  pfn_handler_t pfnTCC4_MC0_Handler;                /* 120 None */
  pfn_handler_t pfnTCC4_MC1_Handler;                /* 121 None */
  pfn_handler_t pfnTCC5_DFS_Handler;                /* 122 None */
  pfn_handler_t pfnTCC5_CNT_Handler;                /* 123 None */
  pfn_handler_t pfnTCC5_MC0_Handler;                /* 124 None */
  pfn_handler_t pfnTCC5_MC1_Handler;                /* 125 None */
  pfn_handler_t pfnTCC6_DFS_Handler;                /* 126 None */
  pfn_handler_t pfnTCC6_CNT_Handler;                /* 127 None */
  pfn_handler_t pfnTCC6_MC0_Handler;                /* 128 None */
  pfn_handler_t pfnTCC6_MC1_Handler;                /* 129 None */
  pfn_handler_t pfnADC_REQ0_Handler;                /* 130 None */
  pfn_handler_t pfnADC_REQ1_Handler;                /* 131 None */
  pfn_handler_t pfnAC_Handler;                      /* 132 None */
  pfn_handler_t pfnPTC_Handler;                     /* 133 None */
  pfn_handler_t pfnUSB_EORSMDNRSM_Handler;          /* 134 None */
  pfn_handler_t pfnUSB_SOFHSOF_Handler;             /* 135 None */
  pfn_handler_t pfnUSB_TRCPT00_Handler;             /* 136 None */
  pfn_handler_t pfnUSB_TRCPT10_Handler;             /* 137 None */
  pfn_handler_t pfnAT_Handler;                      /* 138 None */
}H3DeviceVectors;

#endif //DEVICE_VECTORS_H
