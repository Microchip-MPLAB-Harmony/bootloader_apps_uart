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
    while (true)
    {
    }
}

/* MISRAC 2012 deviation block start */
/* MISRA C-2012 Rule 8.6 deviated 28 times.  Deviation record ID -  H3_MISRAC_2012_R_8_6_DR_1 */
/* Device vectors list dummy definition*/
extern void SVCall_Handler             ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void PendSV_Handler             ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SYSTEM_Handler             ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void WDT_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void RTC_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EIC_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void FREQM_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void USB_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void NVMCTRL_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void DMAC_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EVSYS_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM0_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM1_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM2_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM3_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM4_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SERCOM5_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TCC0_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC0_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC1_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC2_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC3_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void ADC_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void AC_Handler                 ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void PTC_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SLCD_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void AES_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TRNG_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));


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
    .pfnSYSTEM_Handler             = SYSTEM_Handler,
    .pfnWDT_Handler                = WDT_Handler,
    .pfnRTC_Handler                = RTC_Handler,
    .pfnEIC_Handler                = EIC_Handler,
    .pfnFREQM_Handler              = FREQM_Handler,
    .pfnUSB_Handler                = USB_Handler,
    .pfnNVMCTRL_Handler            = NVMCTRL_Handler,
    .pfnDMAC_Handler               = DMAC_Handler,
    .pfnEVSYS_Handler              = EVSYS_Handler,
    .pfnSERCOM0_Handler            = SERCOM0_Handler,
    .pfnSERCOM1_Handler            = SERCOM1_Handler,
    .pfnSERCOM2_Handler            = SERCOM2_Handler,
    .pfnSERCOM3_Handler            = SERCOM3_Handler,
    .pfnSERCOM4_Handler            = SERCOM4_Handler,
    .pfnSERCOM5_Handler            = SERCOM5_Handler,
    .pfnTCC0_Handler               = TCC0_Handler,
    .pfnTC0_Handler                = TC0_Handler,
    .pfnTC1_Handler                = TC1_Handler,
    .pfnTC2_Handler                = TC2_Handler,
    .pfnTC3_Handler                = TC3_Handler,
    .pfnADC_Handler                = ADC_Handler,
    .pfnAC_Handler                 = AC_Handler,
    .pfnPTC_Handler                = PTC_Handler,
    .pfnSLCD_Handler               = SLCD_Handler,
    .pfnAES_Handler                = AES_Handler,
    .pfnTRNG_Handler               = TRNG_Handler,


};

/*******************************************************************************
 End of File
*/
