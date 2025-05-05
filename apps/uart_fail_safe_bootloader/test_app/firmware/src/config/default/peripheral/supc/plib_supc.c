/*******************************************************************************
  Supply Controller (SUPC) Peripheral Library (PLIB)

  Company:
    Microchip Technology Inc.

  File Name:
    plib_supc.c

  Summary:
    SUPC Source File

  Description:
    None

*******************************************************************************/

/*******************************************************************************
* Copyright (C) 2022 Microchip Technology Inc. and its subsidiaries.
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

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include "plib_supc.h"
#include "peripheral/clk/plib_clk.h"
#include "peripheral/sefc/plib_sefc0.h"
#include "peripheral/sefc/plib_sefc1.h"
#include "peripheral/rstc/plib_rstc.h"
#include "interrupts.h"



static void WaitEntryClockSetup(bool xtal_disable)
{
    uint8_t count = 0U;
    uint32_t reg = 0U;

    /* Enable the RC Oscillator */
    PMC_REGS->CKGR_MOR |= CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCRCEN_Msk;

    /* Wait until the RC oscillator clock is ready. */
    while((PMC_REGS->PMC_SR & PMC_SR_MOSCRCS_Msk) != PMC_SR_MOSCRCS_Msk)
    {
        /* Nothing to do */
    }

    /* Switch Main Clock (MAINCK) to the RC Oscillator clock */
    PMC_REGS->CKGR_MOR = (PMC_REGS->CKGR_MOR & ~CKGR_MOR_MOSCSEL_Msk) | CKGR_MOR_KEY_PASSWD;

    /* Wait for Main Clock Selection Status */
    while((PMC_REGS->PMC_SR & PMC_SR_MOSCSELS_Msk) != PMC_SR_MOSCSELS_Msk)
    {
        /* Nothing to do */
    }

    /* Program PMC_CPU_CKR.CSS and MCK dividers and Wait for PMC_SR.MCKRDY to be set    */
    reg = (PMC_REGS->PMC_CPU_CKR & ~(PMC_CPU_CKR_CSS_Msk |
                                     PMC_CPU_CKR_RATIO_MCK0DIV_Msk |
                                     PMC_CPU_CKR_RATIO_MCK0DIV2_Msk));

    reg |= (PMC_CPU_CKR_CSS_MAINCK | PMC_CPU_CKR_RATIO_MCK0DIV_Msk );
    PMC_REGS->PMC_CPU_CKR = reg;
    while ((PMC_REGS->PMC_SR & PMC_SR_MCKRDY_Msk) != PMC_SR_MCKRDY_Msk)
    {
        /* Wait for status MCKRDY */
    }

    /* Disable PLL Clock */
    for (count = 0U; count < 3U; count++)
    {
        PMC_REGS->PMC_PLL_UPDT = (PMC_REGS->PMC_PLL_UPDT & ~PMC_PLL_UPDT_Msk) | PMC_PLL_UPDT_ID(count);
        PMC_REGS->PMC_PLL_UPDT |= PMC_PLL_UPDT_UPDATE_Msk;
        PMC_REGS->PMC_PLL_CTRL0 &= ~PMC_PLL_CTRL0_ENPLL_Msk;
    }

    /* Disable Crystal  */
    if(xtal_disable)
    {
        PMC_REGS->CKGR_MOR = (PMC_REGS->CKGR_MOR & ~CKGR_MOR_MOSCXTEN_Msk) | CKGR_MOR_KEY_PASSWD;
    }
}

// *****************************************************************************
// *****************************************************************************
// Section: SUPC Implementation
// *****************************************************************************
// *****************************************************************************


void SUPC_Initialize(void)
{
    if(RSTC_PMCResetStatusGet())
    {
        SUPC_REGS->SUPC_SMMR = SUPC_SMMR_VDD3V3SMSMPL_DISABLED;

        SUPC_REGS->SUPC_MR = (SUPC_REGS->SUPC_MR & ~SUPC_MR_Msk) | (SUPC_REGS->SUPC_MR & SUPC_MR_OSCBYPASS_Msk) | SUPC_MR_KEY_PASSWD | SUPC_MR_IO_BACKUP_ISO_Msk | SUPC_MR_CORSMRSTEN_Msk | SUPC_MR_VREGDIS_Msk ;

        SUPC_REGS->SUPC_WUMR = SUPC_WUMR_LPDBC0(0x0) | SUPC_WUMR_LPDBC1(0x0) | SUPC_WUMR_LPDBC2(0x0) | SUPC_WUMR_LPDBC3(0x0) | SUPC_WUMR_LPDBC4(0x0) | SUPC_WUMR_WKUPDBC(0x0) | SUPC_WUMR_FWUPDBC(0x0) ;

    }
}

void SUPC_SleepModeEnter(void)
{
    SCB->SCR &= (uint32_t)~SCB_SCR_SLEEPDEEP_Msk;

    /* Enable Interrupt */
    __DMB();
    __enable_irq();

    /* Enter Sleep  */
    __DSB();
    __WFI();
}

void SUPC_WaitModeEnter(WAITMODE_FLASH_STATE flash_lpm, WAITMODE_WKUP_SOURCE source)
{
    uint32_t i;

    /* Disable CPU Interrupt */
    __disable_irq();
    __DMB();

    /* Setup Clock for wait mode entry */
    WaitEntryClockSetup((flash_lpm == WAITMODE_FLASH_DEEPSLEEP));

    /* Enable CPU Interrupt */
    __DMB();
    __enable_irq();

    /* FLASH  Low power mode and Wakeup source */
    PMC_REGS->PMC_FSMR = ((uint32_t) flash_lpm | (uint32_t) source);

    /* Set Flash Wait State at 0 */
    SEFC0_REGS->SEFC_EEFC_FMR = SEFC_EEFC_FMR_FWS(0) | SEFC_EEFC_FMR_CLOE_Msk | SEFC_EEFC_FMR_ALWAYS1_Msk;
    SEFC1_REGS->SEFC_EEFC_FMR = SEFC_EEFC_FMR_FWS(0) | SEFC_EEFC_FMR_CLOE_Msk | SEFC_EEFC_FMR_ALWAYS1_Msk;

    /* Set the WAITMODE bit */
    PMC_REGS->CKGR_MOR |= (CKGR_MOR_KEY_PASSWD | CKGR_MOR_WAITMODE_Msk);

    /* Waiting for Master Clock Ready MCKRDY = 1 */
    while((PMC_REGS->PMC_SR & PMC_SR_MCKRDY_Msk) != PMC_SR_MCKRDY_Msk)
    {
        /* Nothing to do */
    }

    /* Waiting for MOSCRCEN bit is cleared is strongly recommended
     * to ensure that the core will not execute undesired instructions
     */
    for (i = 0; i < 500U; i++)
    {
       __NOP();
    }

    while((PMC_REGS->CKGR_MOR & CKGR_MOR_MOSCRCEN_Msk) != CKGR_MOR_MOSCRCEN_Msk)
    {
        /* Nothing to do */
    }

    /* Disable CPU Interrupt */
    __disable_irq();
    __DMB();

    /* Restore Clock Setting */
    SEFC0_Initialize();
    SEFC1_Initialize();
    CLOCK_Initialize();

    /* Enable CPU Interrupt */
    __DMB();
    __enable_irq();
}

void SUPC_BackupModeEnter(void)
{
    SCB->SCR |= SCB_SCR_SLEEPDEEP_Msk;

    /* Switch off voltage regulator */
    SUPC_REGS->SUPC_CR = SUPC_CR_KEY_PASSWD | SUPC_CR_VROFF_Msk;

    /* Enable CPU Interrupt */
    __DMB();
    __enable_irq();

    /* Enter Backup */
    __DSB();
    __WFI();
}

uint32_t SUPC_GPBRRead(GPBR_REGS_INDEX reg)
{
    return GPBR_REGS->SYS_GPBR[reg];
}

void SUPC_GPBRWrite(GPBR_REGS_INDEX reg, uint32_t data)
{
    GPBR_REGS->SYS_GPBR[reg] = data;
}
