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
/* MISRA C-2012 Rule 8.6 deviated 59 times.  Deviation record ID -  H3_MISRAC_2012_R_8_6_DR_1 */
/* Device vectors list dummy definition*/
extern void SVCall_Handler             ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void PendSV_Handler             ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void RTC_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EIC_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void FREQM_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void NVM_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void CHANGE_NOTICE_A_Handler    ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void CHANGE_NOTICE_B_Handler    ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void CHANGE_NOTICE_C_Handler    ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void CHANGE_NOTICE_D_Handler    ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void CHANGE_NOTICE_E_Handler    ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void DMAC_0_3_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void DMAC_4_15_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EVSYS_0_3_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EVSYS_4_11_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void PAC_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void RAMECC_Handler             ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM0_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM1_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM2_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM3_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM4_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM5_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM6_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC0_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC1_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC2_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC0_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC1_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC2_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC3_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC4_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC5_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC6_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC7_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC8_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC9_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void ADCHS_IRQ_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void ADCHS_FAULT_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void ADCHS_FCC_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void ADCHS_BGVR_RDY_Handler     ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void AC_Handler                 ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SILEX_0_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SILEX_1_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void QSPI_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void ZB_INT0_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void BT_INT0_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void BT_INT1_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void ARBITER_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void CLKI_WAKEUP_NMI_Handler    ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void CVD_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void QEI_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void CAN0_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void CAN1_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void ETH_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void USB_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void PLL_LOCK_BOOT_Handler      ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void PLL_LOCK_USER_Handler      ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void BT_LC_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));


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
    .pfnRTC_Handler                = RTC_Handler,
    .pfnEIC_Handler                = EIC_Handler,
    .pfnFREQM_Handler              = FREQM_Handler,
    .pfnNVM_Handler                = NVM_Handler,
    .pfnCHANGE_NOTICE_A_Handler    = CHANGE_NOTICE_A_Handler,
    .pfnCHANGE_NOTICE_B_Handler    = CHANGE_NOTICE_B_Handler,
    .pfnCHANGE_NOTICE_C_Handler    = CHANGE_NOTICE_C_Handler,
    .pfnCHANGE_NOTICE_D_Handler    = CHANGE_NOTICE_D_Handler,
    .pfnCHANGE_NOTICE_E_Handler    = CHANGE_NOTICE_E_Handler,
    .pfnDMAC_0_3_Handler           = DMAC_0_3_Handler,
    .pfnDMAC_4_15_Handler          = DMAC_4_15_Handler,
    .pfnEVSYS_0_3_Handler          = EVSYS_0_3_Handler,
    .pfnEVSYS_4_11_Handler         = EVSYS_4_11_Handler,
    .pfnPAC_Handler                = PAC_Handler,
    .pfnRAMECC_Handler             = RAMECC_Handler,
    .pfnSERCOM0_Handler            = SERCOM0_Handler,
    .pfnSERCOM1_Handler            = SERCOM1_Handler,
    .pfnSERCOM2_Handler            = SERCOM2_Handler,
    .pfnSERCOM3_Handler            = SERCOM3_Handler,
    .pfnSERCOM4_Handler            = SERCOM4_Handler,
    .pfnSERCOM5_Handler            = SERCOM5_Handler,
    .pfnSERCOM6_Handler            = SERCOM6_Handler,
    .pfnTCC0_Handler               = TCC0_Handler,
    .pfnTCC1_Handler               = TCC1_Handler,
    .pfnTCC2_Handler               = TCC2_Handler,
    .pfnTC0_Handler                = TC0_Handler,
    .pfnTC1_Handler                = TC1_Handler,
    .pfnTC2_Handler                = TC2_Handler,
    .pfnTC3_Handler                = TC3_Handler,
    .pfnTC4_Handler                = TC4_Handler,
    .pfnTC5_Handler                = TC5_Handler,
    .pfnTC6_Handler                = TC6_Handler,
    .pfnTC7_Handler                = TC7_Handler,
    .pfnTC8_Handler                = TC8_Handler,
    .pfnTC9_Handler                = TC9_Handler,
    .pfnADCHS_IRQ_Handler          = ADCHS_IRQ_Handler,
    .pfnADCHS_FAULT_Handler        = ADCHS_FAULT_Handler,
    .pfnADCHS_FCC_Handler          = ADCHS_FCC_Handler,
    .pfnADCHS_BGVR_RDY_Handler     = ADCHS_BGVR_RDY_Handler,
    .pfnAC_Handler                 = AC_Handler,
    .pfnSILEX_0_Handler            = SILEX_0_Handler,
    .pfnSILEX_1_Handler            = SILEX_1_Handler,
    .pfnQSPI_Handler               = QSPI_Handler,
    .pfnZB_INT0_Handler            = ZB_INT0_Handler,
    .pfnBT_INT0_Handler            = BT_INT0_Handler,
    .pfnBT_INT1_Handler            = BT_INT1_Handler,
    .pfnARBITER_Handler            = ARBITER_Handler,
    .pfnCLKI_WAKEUP_NMI_Handler    = CLKI_WAKEUP_NMI_Handler,
    .pfnCVD_Handler                = CVD_Handler,
    .pfnQEI_Handler                = QEI_Handler,
    .pfnCAN0_Handler               = CAN0_Handler,
    .pfnCAN1_Handler               = CAN1_Handler,
    .pfnETH_Handler                = ETH_Handler,
    .pfnUSB_Handler                = USB_Handler,
    .pfnPLL_LOCK_BOOT_Handler      = PLL_LOCK_BOOT_Handler,
    .pfnPLL_LOCK_USER_Handler      = PLL_LOCK_USER_Handler,
    .pfnBT_LC_Handler              = BT_LC_Handler,


};

/*******************************************************************************
 End of File
*/
