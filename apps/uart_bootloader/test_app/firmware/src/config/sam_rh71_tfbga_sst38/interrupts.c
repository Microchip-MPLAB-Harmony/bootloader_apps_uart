/*******************************************************************************
 System Interrupts File

  Company:
    Microchip Technology Inc.

  File Name:
    interrupt.c

  Summary:
    Interrupt vectors mapping

  Description:
    This file maps all the interrupt vectors to their corresponding
    implementations. If a particular module interrupt is used, then its ISR
    definition can be found in corresponding PLIB source file. If a module
    interrupt is not used, then its ISR implementation is mapped to dummy
    handler.
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

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
#include "configuration.h"
#include "device_vectors.h"
#include "interrupts.h"
#include "definitions.h"



// *****************************************************************************
// *****************************************************************************
// Section: System Interrupt Vector Functions
// *****************************************************************************
// *****************************************************************************

/* MISRA C-2012 Rule 8.6 deviated below. Deviation record ID -  H3_MISRAC_2012_R_8_6_DR_1 */
extern uint32_t _stack;
extern const H3DeviceVectors exception_table;

extern void Dummy_Handler(void);

/* Brief default interrupt handler for unused IRQs.*/
void __attribute__((optimize("-O1"), long_call, noreturn, used))Dummy_Handler(void)
{
#if defined(__DEBUG) || defined(__DEBUG_D) && defined(__XC32)
    __builtin_software_breakpoint();
#endif
    while (true)
    {
    }
}

/* MISRAC 2012 deviation block start */
/* MISRA C-2012 Rule 8.6 deviated 74 times.  Deviation record ID -  H3_MISRAC_2012_R_8_6_DR_1 */
/* Device vectors list dummy definition*/
extern void SVCall_Handler             ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void PendSV_Handler             ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SUPC_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void RSTC_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void RTC_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void RTT_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void WDT_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void PMC_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void MATRIX0_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void FLEXCOM0_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void FLEXCOM1_InterruptHandler  ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void NMIC_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void PIOA_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void PIOB_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void PIOC_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void FLEXCOM2_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void FLEXCOM3_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void FLEXCOM4_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void PIOD_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void PIOE_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void CCW_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void CCF_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void FPU_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void IXC_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void FLEXCOM5_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void FLEXCOM6_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void FLEXCOM7_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TC0_CH0_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TC0_CH1_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TC0_CH2_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TC1_CH0_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TC1_CH1_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TC1_CH2_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void PWM0_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void PWM1_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void ICM_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void PIOF_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void PIOG_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void MCAN0_INT0_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void MCAN0_INT1_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void MCAN1_INT0_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void MCAN1_INT1_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCMECC_INTFIX_Handler      ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCMECC_INTNOFIX_Handler    ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void FLEXRAMECC_INTFIX_Handler  ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void FLEXRAMECC_INTNOFIX_Handler ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SHA_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void FLEXCOM8_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void FLEXCOM9_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void RSWDT_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void QSPI_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void HEFC_INT0_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void HEFC_INTFIX_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void HEFC_INTNOFIX_Handler      ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TC2_CH0_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TC2_CH1_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TC2_CH2_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TC3_CH0_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TC3_CH1_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TC3_CH2_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void HEMC_INTSDRAMC_Handler     ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void HEMC_INTFIX_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void HEMC_INTNOFIX_Handler      ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SFR_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TRNG_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void XDMAC_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SPW_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void IP1553_Handler             ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void GMAC_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void GMAC_Q1_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void GMAC_Q2_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void GMAC_Q3_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void GMAC_Q4_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void GMAC_Q5_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));


/* MISRAC 2012 deviation block end */

/* Multiple handlers for vector */



__attribute__ ((section(".vectors"), used))
const H3DeviceVectors exception_table=
{
    /* Configure Initial Stack Pointer, using linker-generated symbols */
    .pvStack = &_stack,

    .pfnReset_Handler              = Reset_Handler,
    .pfnNonMaskableInt_Handler     = NonMaskableInt_Handler,
    .pfnHardFault_Handler          = HardFault_Handler,
    .pfnMemoryManagement_Handler   = MemoryManagement_Handler,
    .pfnBusFault_Handler           = BusFault_Handler,
    .pfnUsageFault_Handler         = UsageFault_Handler,
    .pfnSVCall_Handler             = SVCall_Handler,
    .pfnDebugMonitor_Handler       = DebugMonitor_Handler,
    .pfnPendSV_Handler             = PendSV_Handler,
    .pfnSysTick_Handler            = SysTick_Handler,
    .pfnSUPC_Handler               = SUPC_Handler,
    .pfnRSTC_Handler               = RSTC_Handler,
    .pfnRTC_Handler                = RTC_Handler,
    .pfnRTT_Handler                = RTT_Handler,
    .pfnWDT_Handler                = WDT_Handler,
    .pfnPMC_Handler                = PMC_Handler,
    .pfnMATRIX0_Handler            = MATRIX0_Handler,
    .pfnFLEXCOM0_Handler           = FLEXCOM0_Handler,
    .pfnFLEXCOM1_Handler           = FLEXCOM1_InterruptHandler,
    .pfnNMIC_Handler               = NMIC_Handler,
    .pfnPIOA_Handler               = PIOA_Handler,
    .pfnPIOB_Handler               = PIOB_Handler,
    .pfnPIOC_Handler               = PIOC_Handler,
    .pfnFLEXCOM2_Handler           = FLEXCOM2_Handler,
    .pfnFLEXCOM3_Handler           = FLEXCOM3_Handler,
    .pfnFLEXCOM4_Handler           = FLEXCOM4_Handler,
    .pfnPIOD_Handler               = PIOD_Handler,
    .pfnPIOE_Handler               = PIOE_Handler,
    .pfnCCW_Handler                = CCW_Handler,
    .pfnCCF_Handler                = CCF_Handler,
    .pfnFPU_Handler                = FPU_Handler,
    .pfnIXC_Handler                = IXC_Handler,
    .pfnFLEXCOM5_Handler           = FLEXCOM5_Handler,
    .pfnFLEXCOM6_Handler           = FLEXCOM6_Handler,
    .pfnFLEXCOM7_Handler           = FLEXCOM7_Handler,
    .pfnTC0_CH0_Handler            = TC0_CH0_Handler,
    .pfnTC0_CH1_Handler            = TC0_CH1_Handler,
    .pfnTC0_CH2_Handler            = TC0_CH2_Handler,
    .pfnTC1_CH0_Handler            = TC1_CH0_Handler,
    .pfnTC1_CH1_Handler            = TC1_CH1_Handler,
    .pfnTC1_CH2_Handler            = TC1_CH2_Handler,
    .pfnPWM0_Handler               = PWM0_Handler,
    .pfnPWM1_Handler               = PWM1_Handler,
    .pfnICM_Handler                = ICM_Handler,
    .pfnPIOF_Handler               = PIOF_Handler,
    .pfnPIOG_Handler               = PIOG_Handler,
    .pfnMCAN0_INT0_Handler         = MCAN0_INT0_Handler,
    .pfnMCAN0_INT1_Handler         = MCAN0_INT1_Handler,
    .pfnMCAN1_INT0_Handler         = MCAN1_INT0_Handler,
    .pfnMCAN1_INT1_Handler         = MCAN1_INT1_Handler,
    .pfnTCMECC_INTFIX_Handler      = TCMECC_INTFIX_Handler,
    .pfnTCMECC_INTNOFIX_Handler    = TCMECC_INTNOFIX_Handler,
    .pfnFLEXRAMECC_INTFIX_Handler  = FLEXRAMECC_INTFIX_Handler,
    .pfnFLEXRAMECC_INTNOFIX_Handler = FLEXRAMECC_INTNOFIX_Handler,
    .pfnSHA_Handler                = SHA_Handler,
    .pfnFLEXCOM8_Handler           = FLEXCOM8_Handler,
    .pfnFLEXCOM9_Handler           = FLEXCOM9_Handler,
    .pfnRSWDT_Handler              = RSWDT_Handler,
    .pfnQSPI_Handler               = QSPI_Handler,
    .pfnHEFC_INT0_Handler          = HEFC_INT0_Handler,
    .pfnHEFC_INTFIX_Handler        = HEFC_INTFIX_Handler,
    .pfnHEFC_INTNOFIX_Handler      = HEFC_INTNOFIX_Handler,
    .pfnTC2_CH0_Handler            = TC2_CH0_Handler,
    .pfnTC2_CH1_Handler            = TC2_CH1_Handler,
    .pfnTC2_CH2_Handler            = TC2_CH2_Handler,
    .pfnTC3_CH0_Handler            = TC3_CH0_Handler,
    .pfnTC3_CH1_Handler            = TC3_CH1_Handler,
    .pfnTC3_CH2_Handler            = TC3_CH2_Handler,
    .pfnHEMC_INTSDRAMC_Handler     = HEMC_INTSDRAMC_Handler,
    .pfnHEMC_INTFIX_Handler        = HEMC_INTFIX_Handler,
    .pfnHEMC_INTNOFIX_Handler      = HEMC_INTNOFIX_Handler,
    .pfnSFR_Handler                = SFR_Handler,
    .pfnTRNG_Handler               = TRNG_Handler,
    .pfnXDMAC_Handler              = XDMAC_Handler,
    .pfnSPW_Handler                = SPW_Handler,
    .pfnIP1553_Handler             = IP1553_Handler,
    .pfnGMAC_Handler               = GMAC_Handler,
    .pfnGMAC_Q1_Handler            = GMAC_Q1_Handler,
    .pfnGMAC_Q2_Handler            = GMAC_Q2_Handler,
    .pfnGMAC_Q3_Handler            = GMAC_Q3_Handler,
    .pfnGMAC_Q4_Handler            = GMAC_Q4_Handler,
    .pfnGMAC_Q5_Handler            = GMAC_Q5_Handler,


};

/*******************************************************************************
 End of File
*/
