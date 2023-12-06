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
/* MISRA C-2012 Rule 8.6 deviated 34 times.  Deviation record ID -  H3_MISRAC_2012_R_8_6_DR_1 */
/* Device vectors list dummy definition*/
extern void SVCall_Handler             ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void PendSV_Handler             ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SUPC_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void RSTC_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void RTC_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void RTT_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void WDT_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void PMC_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void EFC_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void FLEXCOM7_InterruptHandler  ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void FLEXCOM0_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void FLEXCOM1_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void PIOA_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void PIOB_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void PDMIC0_Handler             ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void FLEXCOM2_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void MEM2MEM_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void I2SC0_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void I2SC1_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void PDMIC1_Handler             ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void FLEXCOM3_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void FLEXCOM4_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void FLEXCOM5_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void FLEXCOM6_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TC0_CH0_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TC0_CH1_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TC0_CH2_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TC1_CH0_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TC1_CH1_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TC1_CH2_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void ADC_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void UHP_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void UDP_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void CRCCU_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler")));


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
    .pfnEFC_Handler                = EFC_Handler,
    .pfnFLEXCOM7_Handler           = FLEXCOM7_InterruptHandler,
    .pfnFLEXCOM0_Handler           = FLEXCOM0_Handler,
    .pfnFLEXCOM1_Handler           = FLEXCOM1_Handler,
    .pfnPIOA_Handler               = PIOA_Handler,
    .pfnPIOB_Handler               = PIOB_Handler,
    .pfnPDMIC0_Handler             = PDMIC0_Handler,
    .pfnFLEXCOM2_Handler           = FLEXCOM2_Handler,
    .pfnMEM2MEM_Handler            = MEM2MEM_Handler,
    .pfnI2SC0_Handler              = I2SC0_Handler,
    .pfnI2SC1_Handler              = I2SC1_Handler,
    .pfnPDMIC1_Handler             = PDMIC1_Handler,
    .pfnFLEXCOM3_Handler           = FLEXCOM3_Handler,
    .pfnFLEXCOM4_Handler           = FLEXCOM4_Handler,
    .pfnFLEXCOM5_Handler           = FLEXCOM5_Handler,
    .pfnFLEXCOM6_Handler           = FLEXCOM6_Handler,
    .pfnTC0_CH0_Handler            = TC0_CH0_Handler,
    .pfnTC0_CH1_Handler            = TC0_CH1_Handler,
    .pfnTC0_CH2_Handler            = TC0_CH2_Handler,
    .pfnTC1_CH0_Handler            = TC1_CH0_Handler,
    .pfnTC1_CH1_Handler            = TC1_CH1_Handler,
    .pfnTC1_CH2_Handler            = TC1_CH2_Handler,
    .pfnADC_Handler                = ADC_Handler,
    .pfnUHP_Handler                = UHP_Handler,
    .pfnUDP_Handler                = UDP_Handler,
    .pfnCRCCU_Handler              = CRCCU_Handler,


};

/*******************************************************************************
 End of File
*/
