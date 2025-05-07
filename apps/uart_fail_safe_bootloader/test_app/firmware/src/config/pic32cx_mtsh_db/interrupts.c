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
/* MISRA C-2012 Rule 8.6 deviated 92 times.  Deviation record ID -  H3_MISRAC_2012_R_8_6_DR_1 */
/* Device vectors list dummy definition*/
extern void SVCall_Handler             ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void PendSV_Handler             ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SUPC_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void RSTC_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void RTC_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void RTT_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void DWDT0_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void DWDT1_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void PMC_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SEFC0_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SEFC1_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void FLEXCOM0_InterruptHandler  ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void FLEXCOM1_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void FLEXCOM2_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void FLEXCOM3_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void FLEXCOM4_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void FLEXCOM5_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void FLEXCOM6_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void FLEXCOM7_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void PIOA_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void PIOA_SEC_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void PIOB_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void PIOB_SEC_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void PIOC_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void PIOC_SEC_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void QSPI_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void ADC_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void ACC_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void IPC0_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SLCDC_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void MEM2MEM0_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC0_CH0_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC0_CH1_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC0_CH2_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC1_CH0_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC1_CH1_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC1_CH2_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC2_CH0_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC2_CH1_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC2_CH2_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC0_C0SEC_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC0_C1SEC_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC0_C2SEC_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC1_C0SEC_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC1_C1SEC_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC1_C2SEC_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC2_C0SEC_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC2_C1SEC_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC2_C2SEC_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void AES_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void AES_AESSEC_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void AESB_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void AESB_AESBSEC_Handler       ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SHA_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SHA_SHASEC_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TRNG_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TRNG_TRNGSEC_Handler       ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void ICM_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void ICM_ICMSEC_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void CPKCC_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void MATRIX0_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void MATRIX1_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SUPC_WKUP3_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SUPC_WKUP4_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SUPC_WKUP5_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SUPC_WKUP6_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SUPC_WKUP7_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SUPC_WKUP8_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SUPC_WKUP9_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SUPC_WKUP10_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SUPC_WKUP11_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SUPC_WKUP12_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SUPC_WKUP13_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SUPC_WKUP14_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void SUPC_WKUP15_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EMAFE_SLINK_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void EMAFE_DATA_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void MEM2MEM1_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC3_CH0_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC3_CH1_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC3_CH2_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC3_C0SEC_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC3_C1SEC_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void TC3_C2SEC_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void PIOD_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void PIOD_SEC_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void UART_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void IPC1_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void MCSPI_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void PWM_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void MATRIX2_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));
extern void MATRIX3_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler"),noreturn));


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
    .pfnDWDT0_Handler              = DWDT0_Handler,
    .pfnDWDT1_Handler              = DWDT1_Handler,
    .pfnPMC_Handler                = PMC_Handler,
    .pfnSEFC0_Handler              = SEFC0_Handler,
    .pfnSEFC1_Handler              = SEFC1_Handler,
    .pfnFLEXCOM0_Handler           = FLEXCOM0_InterruptHandler,
    .pfnFLEXCOM1_Handler           = FLEXCOM1_Handler,
    .pfnFLEXCOM2_Handler           = FLEXCOM2_Handler,
    .pfnFLEXCOM3_Handler           = FLEXCOM3_Handler,
    .pfnFLEXCOM4_Handler           = FLEXCOM4_Handler,
    .pfnFLEXCOM5_Handler           = FLEXCOM5_Handler,
    .pfnFLEXCOM6_Handler           = FLEXCOM6_Handler,
    .pfnFLEXCOM7_Handler           = FLEXCOM7_Handler,
    .pfnPIOA_Handler               = PIOA_Handler,
    .pfnPIOA_SEC_Handler           = PIOA_SEC_Handler,
    .pfnPIOB_Handler               = PIOB_Handler,
    .pfnPIOB_SEC_Handler           = PIOB_SEC_Handler,
    .pfnPIOC_Handler               = PIOC_Handler,
    .pfnPIOC_SEC_Handler           = PIOC_SEC_Handler,
    .pfnQSPI_Handler               = QSPI_Handler,
    .pfnADC_Handler                = ADC_Handler,
    .pfnACC_Handler                = ACC_Handler,
    .pfnIPC0_Handler               = IPC0_Handler,
    .pfnSLCDC_Handler              = SLCDC_Handler,
    .pfnMEM2MEM0_Handler           = MEM2MEM0_Handler,
    .pfnTC0_CH0_Handler            = TC0_CH0_Handler,
    .pfnTC0_CH1_Handler            = TC0_CH1_Handler,
    .pfnTC0_CH2_Handler            = TC0_CH2_Handler,
    .pfnTC1_CH0_Handler            = TC1_CH0_Handler,
    .pfnTC1_CH1_Handler            = TC1_CH1_Handler,
    .pfnTC1_CH2_Handler            = TC1_CH2_Handler,
    .pfnTC2_CH0_Handler            = TC2_CH0_Handler,
    .pfnTC2_CH1_Handler            = TC2_CH1_Handler,
    .pfnTC2_CH2_Handler            = TC2_CH2_Handler,
    .pfnTC0_C0SEC_Handler          = TC0_C0SEC_Handler,
    .pfnTC0_C1SEC_Handler          = TC0_C1SEC_Handler,
    .pfnTC0_C2SEC_Handler          = TC0_C2SEC_Handler,
    .pfnTC1_C0SEC_Handler          = TC1_C0SEC_Handler,
    .pfnTC1_C1SEC_Handler          = TC1_C1SEC_Handler,
    .pfnTC1_C2SEC_Handler          = TC1_C2SEC_Handler,
    .pfnTC2_C0SEC_Handler          = TC2_C0SEC_Handler,
    .pfnTC2_C1SEC_Handler          = TC2_C1SEC_Handler,
    .pfnTC2_C2SEC_Handler          = TC2_C2SEC_Handler,
    .pfnAES_Handler                = AES_Handler,
    .pfnAES_AESSEC_Handler         = AES_AESSEC_Handler,
    .pfnAESB_Handler               = AESB_Handler,
    .pfnAESB_AESBSEC_Handler       = AESB_AESBSEC_Handler,
    .pfnSHA_Handler                = SHA_Handler,
    .pfnSHA_SHASEC_Handler         = SHA_SHASEC_Handler,
    .pfnTRNG_Handler               = TRNG_Handler,
    .pfnTRNG_TRNGSEC_Handler       = TRNG_TRNGSEC_Handler,
    .pfnICM_Handler                = ICM_Handler,
    .pfnICM_ICMSEC_Handler         = ICM_ICMSEC_Handler,
    .pfnCPKCC_Handler              = CPKCC_Handler,
    .pfnMATRIX0_Handler            = MATRIX0_Handler,
    .pfnMATRIX1_Handler            = MATRIX1_Handler,
    .pfnSUPC_WKUP3_Handler         = SUPC_WKUP3_Handler,
    .pfnSUPC_WKUP4_Handler         = SUPC_WKUP4_Handler,
    .pfnSUPC_WKUP5_Handler         = SUPC_WKUP5_Handler,
    .pfnSUPC_WKUP6_Handler         = SUPC_WKUP6_Handler,
    .pfnSUPC_WKUP7_Handler         = SUPC_WKUP7_Handler,
    .pfnSUPC_WKUP8_Handler         = SUPC_WKUP8_Handler,
    .pfnSUPC_WKUP9_Handler         = SUPC_WKUP9_Handler,
    .pfnSUPC_WKUP10_Handler        = SUPC_WKUP10_Handler,
    .pfnSUPC_WKUP11_Handler        = SUPC_WKUP11_Handler,
    .pfnSUPC_WKUP12_Handler        = SUPC_WKUP12_Handler,
    .pfnSUPC_WKUP13_Handler        = SUPC_WKUP13_Handler,
    .pfnSUPC_WKUP14_Handler        = SUPC_WKUP14_Handler,
    .pfnSUPC_WKUP15_Handler        = SUPC_WKUP15_Handler,
    .pfnEMAFE_SLINK_Handler        = EMAFE_SLINK_Handler,
    .pfnEMAFE_DATA_Handler         = EMAFE_DATA_Handler,
    .pfnMEM2MEM1_Handler           = MEM2MEM1_Handler,
    .pfnTC3_CH0_Handler            = TC3_CH0_Handler,
    .pfnTC3_CH1_Handler            = TC3_CH1_Handler,
    .pfnTC3_CH2_Handler            = TC3_CH2_Handler,
    .pfnTC3_C0SEC_Handler          = TC3_C0SEC_Handler,
    .pfnTC3_C1SEC_Handler          = TC3_C1SEC_Handler,
    .pfnTC3_C2SEC_Handler          = TC3_C2SEC_Handler,
    .pfnPIOD_Handler               = PIOD_Handler,
    .pfnPIOD_SEC_Handler           = PIOD_SEC_Handler,
    .pfnUART_Handler               = UART_Handler,
    .pfnIPC1_Handler               = IPC1_Handler,
    .pfnMCSPI_Handler              = MCSPI_Handler,
    .pfnPWM_Handler                = PWM_Handler,
    .pfnMATRIX2_Handler            = MATRIX2_Handler,
    .pfnMATRIX3_Handler            = MATRIX3_Handler,


};

/*******************************************************************************
 End of File
*/
