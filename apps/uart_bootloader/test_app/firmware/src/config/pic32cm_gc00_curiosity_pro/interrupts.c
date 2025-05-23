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
* Copyright (C) 2025 Microchip Technology Inc. and its subsidiaries.
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
/* MISRA C-2012 Rule 8.6 deviated 140 times.  Deviation record ID -  H3_MISRAC_2012_R_8_6_DR_1 */
/* Device vectors list dummy definition*/
extern void SVCall_Handler             ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void PendSV_Handler             ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void FCR_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void FCW_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void PM_Handler                 ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SUPC_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void OSCCTRL_XOSCRDY_Handler    ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void OSCCTRL_DFLLRDY_Handler    ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void OSCCTRL_PLLLOCKR_0_Handler ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void OSC32KCTRL_XOSC32KRDY_Handler ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void OSC32KCTRL_XOSC32KFAIL_Handler ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void MCLK_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void FREQM_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void WDT_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void RTC_TAMPER_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void RTC_OVF_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void RTC_PER0_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void RTC_CMP0_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EIC_EXTINT0_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EIC_EXTINT1_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EIC_EXTINT2_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EIC_EXTINT3_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EIC_EXTINT4_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EIC_EXTINT5_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EIC_EXTINT6_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EIC_EXTINT7_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EIC_EXTINT8_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EIC_EXTINT9_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EIC_EXTINT10_Handler       ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EIC_EXTINT11_Handler       ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EIC_EXTINT12_Handler       ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EIC_EXTINT13_Handler       ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EIC_EXTINT14_Handler       ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EIC_EXTINT15_Handler       ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EIC_NSCHK_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void MCRAMC_Handler             ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void CAN0_INT0_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void CAN0_INT1_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void CAN0_BERR_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void CAN1_INT0_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void CAN1_INT1_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void CAN1_BERR_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void PORT_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void DMAC_TCMPL0_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void DMAC_TCMPL1_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void DMAC_TCMPL2_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void DMAC_TCMPL3_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void DMAC_TCMPL4_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void HMATRIX2_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EVSYS_EVD0_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EVSYS_EVD1_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EVSYS_EVD2_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EVSYS_EVD3_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EVSYS_EVD4_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EVSYS_EVD5_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EVSYS_EVD6_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EVSYS_EVD7_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EVSYS_EVD8_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EVSYS_EVD9_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EVSYS_EVD10_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EVSYS_EVD11_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM0_6_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM0_5_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM0_0_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM0_1_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM0_2_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM0_3_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM0_4_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM1_6_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM1_5_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM1_0_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM1_1_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM1_2_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM1_3_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM1_4_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM2_6_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM2_5_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM2_0_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM2_1_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM2_2_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM2_3_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM2_4_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM3_6_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM3_5_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM3_0_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM3_1_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM3_2_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM3_3_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM3_4_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC0_DFS_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC0_CNT_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC0_MC0_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC0_MC1_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC1_DFS_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC1_CNT_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC1_MC0_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC1_MC1_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC2_DFS_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC2_CNT_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC2_MC0_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC2_MC1_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC3_DFS_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC3_CNT_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC3_MC0_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC3_MC1_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM4_6_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM4_5_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM4_0_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM4_1_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM4_2_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM4_3_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM4_4_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM5_6_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM5_5_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM5_0_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM5_1_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM5_2_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM5_3_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM5_4_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC4_DFS_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC4_CNT_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC4_MC0_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC4_MC1_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC5_DFS_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC5_CNT_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC5_MC0_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC5_MC1_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC6_DFS_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC6_CNT_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC6_MC0_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC6_MC1_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void ADC_REQ0_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void ADC_REQ1_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void AC_Handler                 ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void PTC_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void USB_EORSMDNRSM_Handler     ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void USB_SOFHSOF_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void USB_TRCPT00_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void USB_TRCPT10_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void AT_Handler                 ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));


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
    .pfnSVCall_Handler             = SVCall_Handler,
    .pfnPendSV_Handler             = PendSV_Handler,
    .pfnSysTick_Handler            = SysTick_Handler,
    .pfnFCR_Handler                = FCR_Handler,
    .pfnFCW_Handler                = FCW_Handler,
    .pfnPM_Handler                 = PM_Handler,
    .pfnSUPC_Handler               = SUPC_Handler,
    .pfnOSCCTRL_XOSCRDY_Handler    = OSCCTRL_XOSCRDY_Handler,
    .pfnOSCCTRL_DFLLRDY_Handler    = OSCCTRL_DFLLRDY_Handler,
    .pfnOSCCTRL_PLLLOCKR_0_Handler = OSCCTRL_PLLLOCKR_0_Handler,
    .pfnOSC32KCTRL_XOSC32KRDY_Handler = OSC32KCTRL_XOSC32KRDY_Handler,
    .pfnOSC32KCTRL_XOSC32KFAIL_Handler = OSC32KCTRL_XOSC32KFAIL_Handler,
    .pfnMCLK_Handler               = MCLK_Handler,
    .pfnFREQM_Handler              = FREQM_Handler,
    .pfnWDT_Handler                = WDT_Handler,
    .pfnRTC_TAMPER_Handler         = RTC_TAMPER_Handler,
    .pfnRTC_OVF_Handler            = RTC_OVF_Handler,
    .pfnRTC_PER0_Handler           = RTC_PER0_Handler,
    .pfnRTC_CMP0_Handler           = RTC_CMP0_Handler,
    .pfnEIC_EXTINT0_Handler        = EIC_EXTINT0_Handler,
    .pfnEIC_EXTINT1_Handler        = EIC_EXTINT1_Handler,
    .pfnEIC_EXTINT2_Handler        = EIC_EXTINT2_Handler,
    .pfnEIC_EXTINT3_Handler        = EIC_EXTINT3_Handler,
    .pfnEIC_EXTINT4_Handler        = EIC_EXTINT4_Handler,
    .pfnEIC_EXTINT5_Handler        = EIC_EXTINT5_Handler,
    .pfnEIC_EXTINT6_Handler        = EIC_EXTINT6_Handler,
    .pfnEIC_EXTINT7_Handler        = EIC_EXTINT7_Handler,
    .pfnEIC_EXTINT8_Handler        = EIC_EXTINT8_Handler,
    .pfnEIC_EXTINT9_Handler        = EIC_EXTINT9_Handler,
    .pfnEIC_EXTINT10_Handler       = EIC_EXTINT10_Handler,
    .pfnEIC_EXTINT11_Handler       = EIC_EXTINT11_Handler,
    .pfnEIC_EXTINT12_Handler       = EIC_EXTINT12_Handler,
    .pfnEIC_EXTINT13_Handler       = EIC_EXTINT13_Handler,
    .pfnEIC_EXTINT14_Handler       = EIC_EXTINT14_Handler,
    .pfnEIC_EXTINT15_Handler       = EIC_EXTINT15_Handler,
    .pfnEIC_NSCHK_Handler          = EIC_NSCHK_Handler,
    .pfnMCRAMC_Handler             = MCRAMC_Handler,
    .pfnCAN0_INT0_Handler          = CAN0_INT0_Handler,
    .pfnCAN0_INT1_Handler          = CAN0_INT1_Handler,
    .pfnCAN0_BERR_Handler          = CAN0_BERR_Handler,
    .pfnCAN1_INT0_Handler          = CAN1_INT0_Handler,
    .pfnCAN1_INT1_Handler          = CAN1_INT1_Handler,
    .pfnCAN1_BERR_Handler          = CAN1_BERR_Handler,
    .pfnPORT_Handler               = PORT_Handler,
    .pfnDMAC_TCMPL0_Handler        = DMAC_TCMPL0_Handler,
    .pfnDMAC_TCMPL1_Handler        = DMAC_TCMPL1_Handler,
    .pfnDMAC_TCMPL2_Handler        = DMAC_TCMPL2_Handler,
    .pfnDMAC_TCMPL3_Handler        = DMAC_TCMPL3_Handler,
    .pfnDMAC_TCMPL4_Handler        = DMAC_TCMPL4_Handler,
    .pfnHMATRIX2_Handler           = HMATRIX2_Handler,
    .pfnEVSYS_EVD0_Handler         = EVSYS_EVD0_Handler,
    .pfnEVSYS_EVD1_Handler         = EVSYS_EVD1_Handler,
    .pfnEVSYS_EVD2_Handler         = EVSYS_EVD2_Handler,
    .pfnEVSYS_EVD3_Handler         = EVSYS_EVD3_Handler,
    .pfnEVSYS_EVD4_Handler         = EVSYS_EVD4_Handler,
    .pfnEVSYS_EVD5_Handler         = EVSYS_EVD5_Handler,
    .pfnEVSYS_EVD6_Handler         = EVSYS_EVD6_Handler,
    .pfnEVSYS_EVD7_Handler         = EVSYS_EVD7_Handler,
    .pfnEVSYS_EVD8_Handler         = EVSYS_EVD8_Handler,
    .pfnEVSYS_EVD9_Handler         = EVSYS_EVD9_Handler,
    .pfnEVSYS_EVD10_Handler        = EVSYS_EVD10_Handler,
    .pfnEVSYS_EVD11_Handler        = EVSYS_EVD11_Handler,
    .pfnSERCOM0_6_Handler          = SERCOM0_6_Handler,
    .pfnSERCOM0_5_Handler          = SERCOM0_5_Handler,
    .pfnSERCOM0_0_Handler          = SERCOM0_0_Handler,
    .pfnSERCOM0_1_Handler          = SERCOM0_1_Handler,
    .pfnSERCOM0_2_Handler          = SERCOM0_2_Handler,
    .pfnSERCOM0_3_Handler          = SERCOM0_3_Handler,
    .pfnSERCOM0_4_Handler          = SERCOM0_4_Handler,
    .pfnSERCOM1_6_Handler          = SERCOM1_6_Handler,
    .pfnSERCOM1_5_Handler          = SERCOM1_5_Handler,
    .pfnSERCOM1_0_Handler          = SERCOM1_0_Handler,
    .pfnSERCOM1_1_Handler          = SERCOM1_1_Handler,
    .pfnSERCOM1_2_Handler          = SERCOM1_2_Handler,
    .pfnSERCOM1_3_Handler          = SERCOM1_3_Handler,
    .pfnSERCOM1_4_Handler          = SERCOM1_4_Handler,
    .pfnSERCOM2_6_Handler          = SERCOM2_6_Handler,
    .pfnSERCOM2_5_Handler          = SERCOM2_5_Handler,
    .pfnSERCOM2_0_Handler          = SERCOM2_0_Handler,
    .pfnSERCOM2_1_Handler          = SERCOM2_1_Handler,
    .pfnSERCOM2_2_Handler          = SERCOM2_2_Handler,
    .pfnSERCOM2_3_Handler          = SERCOM2_3_Handler,
    .pfnSERCOM2_4_Handler          = SERCOM2_4_Handler,
    .pfnSERCOM3_6_Handler          = SERCOM3_6_Handler,
    .pfnSERCOM3_5_Handler          = SERCOM3_5_Handler,
    .pfnSERCOM3_0_Handler          = SERCOM3_0_Handler,
    .pfnSERCOM3_1_Handler          = SERCOM3_1_Handler,
    .pfnSERCOM3_2_Handler          = SERCOM3_2_Handler,
    .pfnSERCOM3_3_Handler          = SERCOM3_3_Handler,
    .pfnSERCOM3_4_Handler          = SERCOM3_4_Handler,
    .pfnTCC0_DFS_Handler           = TCC0_DFS_Handler,
    .pfnTCC0_CNT_Handler           = TCC0_CNT_Handler,
    .pfnTCC0_MC0_Handler           = TCC0_MC0_Handler,
    .pfnTCC0_MC1_Handler           = TCC0_MC1_Handler,
    .pfnTCC1_DFS_Handler           = TCC1_DFS_Handler,
    .pfnTCC1_CNT_Handler           = TCC1_CNT_Handler,
    .pfnTCC1_MC0_Handler           = TCC1_MC0_Handler,
    .pfnTCC1_MC1_Handler           = TCC1_MC1_Handler,
    .pfnTCC2_DFS_Handler           = TCC2_DFS_Handler,
    .pfnTCC2_CNT_Handler           = TCC2_CNT_Handler,
    .pfnTCC2_MC0_Handler           = TCC2_MC0_Handler,
    .pfnTCC2_MC1_Handler           = TCC2_MC1_Handler,
    .pfnTCC3_DFS_Handler           = TCC3_DFS_Handler,
    .pfnTCC3_CNT_Handler           = TCC3_CNT_Handler,
    .pfnTCC3_MC0_Handler           = TCC3_MC0_Handler,
    .pfnTCC3_MC1_Handler           = TCC3_MC1_Handler,
    .pfnSERCOM4_6_Handler          = SERCOM4_6_Handler,
    .pfnSERCOM4_5_Handler          = SERCOM4_5_Handler,
    .pfnSERCOM4_0_Handler          = SERCOM4_0_Handler,
    .pfnSERCOM4_1_Handler          = SERCOM4_1_Handler,
    .pfnSERCOM4_2_Handler          = SERCOM4_2_Handler,
    .pfnSERCOM4_3_Handler          = SERCOM4_3_Handler,
    .pfnSERCOM4_4_Handler          = SERCOM4_4_Handler,
    .pfnSERCOM5_6_Handler          = SERCOM5_6_Handler,
    .pfnSERCOM5_5_Handler          = SERCOM5_5_Handler,
    .pfnSERCOM5_0_Handler          = SERCOM5_0_Handler,
    .pfnSERCOM5_1_Handler          = SERCOM5_1_Handler,
    .pfnSERCOM5_2_Handler          = SERCOM5_2_Handler,
    .pfnSERCOM5_3_Handler          = SERCOM5_3_Handler,
    .pfnSERCOM5_4_Handler          = SERCOM5_4_Handler,
    .pfnTCC4_DFS_Handler           = TCC4_DFS_Handler,
    .pfnTCC4_CNT_Handler           = TCC4_CNT_Handler,
    .pfnTCC4_MC0_Handler           = TCC4_MC0_Handler,
    .pfnTCC4_MC1_Handler           = TCC4_MC1_Handler,
    .pfnTCC5_DFS_Handler           = TCC5_DFS_Handler,
    .pfnTCC5_CNT_Handler           = TCC5_CNT_Handler,
    .pfnTCC5_MC0_Handler           = TCC5_MC0_Handler,
    .pfnTCC5_MC1_Handler           = TCC5_MC1_Handler,
    .pfnTCC6_DFS_Handler           = TCC6_DFS_Handler,
    .pfnTCC6_CNT_Handler           = TCC6_CNT_Handler,
    .pfnTCC6_MC0_Handler           = TCC6_MC0_Handler,
    .pfnTCC6_MC1_Handler           = TCC6_MC1_Handler,
    .pfnADC_REQ0_Handler           = ADC_REQ0_Handler,
    .pfnADC_REQ1_Handler           = ADC_REQ1_Handler,
    .pfnAC_Handler                 = AC_Handler,
    .pfnPTC_Handler                = PTC_Handler,
    .pfnUSB_EORSMDNRSM_Handler     = USB_EORSMDNRSM_Handler,
    .pfnUSB_SOFHSOF_Handler        = USB_SOFHSOF_Handler,
    .pfnUSB_TRCPT00_Handler        = USB_TRCPT00_Handler,
    .pfnUSB_TRCPT10_Handler        = USB_TRCPT10_Handler,
    .pfnAT_Handler                 = AT_Handler,


};

/*******************************************************************************
 End of File
*/
