/*******************************************************************************
  Reset Controller (RSTC) Peripheral Library(PLIB) Source file

  Company:
    Microchip Technology Inc.

  File Name:
    plib_rstc.c

  Summary:
    RSTC Source File

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
#include <stddef.h>
#include "plib_rstc.h"
#include "interrupts.h"

// *****************************************************************************
// *****************************************************************************
// Section: RSTC Implementation
// *****************************************************************************
// *****************************************************************************
#define NUM_RESET_MD_CLOCK_CYCLES 2U
#define RESET_WAIT_COUNT  ((200000000U / 32000U) * NUM_RESET_MD_CLOCK_CYCLES)

void RSTC_Initialize (void)
{
    if(RSTC_PMCResetStatusGet())
    {
        RSTC_REGS->RSTC_MR = ( RSTC_MR_KEY_PASSWD | RSTC_MR_ERSTL(0U) | RSTC_MR_PWRSW(0x0U)
                                | RSTC_MR_CPEREN_Msk
                                | RSTC_MR_URSTASYNC_Msk
                                | RSTC_MR_SFTPMCRS_Msk
                                | RSTC_MR_WDTPMC0_Msk
                                | RSTC_MR_WDTPMC1_Msk
                                | RSTC_MR_URSTEN_Msk
                            );
        for(uint32_t i = 0U; i < RESET_WAIT_COUNT; i++)
        {
            /* Wait for 2 MD_SLCK cycles after deasserting reset */
        }
    }
}

void RSTC_Reset (RSTC_RESET_TYPE type)
{
    /* Issue reset command              */
    RSTC_REGS->RSTC_CR = (RSTC_CR_KEY_PASSWD | (uint32_t)type);
    while ((RSTC_REGS->RSTC_SR & (uint32_t) RSTC_SR_SRCMP_Msk) != 0U)
    {
        /*Wait for processing reset command */
    }
}


RSTC_RESET_CAUSE RSTC_ResetCauseGet (void)
{
    return (RSTC_REGS->RSTC_SR & RSTC_SR_RSTTYP_Msk);
}


void RSTC_CoProcessorEnable(bool enable)
{
    uint32_t reg = RSTC_REGS->RSTC_MR & ~(RSTC_MR_KEY_Msk | RSTC_MR_CPROCEN_Msk);
    if(enable)
    {
        reg |= RSTC_MR_CPROCEN_Msk;
    }
    RSTC_REGS->RSTC_MR = RSTC_MR_KEY_PASSWD | reg;
    for(uint32_t i = 0U; i < RESET_WAIT_COUNT; i++)
    {
        /* Wait for 2 MD_SLCK cycles after deasserting reset */
    }
}


void RSTC_CoProcessorPeripheralEnable(bool enable)
{
    uint32_t reg = RSTC_REGS->RSTC_MR & ~(RSTC_MR_KEY_Msk | RSTC_MR_CPEREN_Msk);
    if(enable)
    {
        reg |= RSTC_MR_CPEREN_Msk;
    }
    RSTC_REGS->RSTC_MR = (RSTC_MR_KEY_PASSWD | reg);
    for(uint32_t i = 0U; i < RESET_WAIT_COUNT; i++)
    {
        /* Wait for 2 MD_SLCK cycles after deasserting reset */
    }
}

bool RSTC_PMCResetStatusGet(void)
{
    bool pmc_reset = true;
        /* Reset cause is WDT0 and WDT0 do not reset PMC */
    if ((((RSTC_REGS->RSTC_SR & RSTC_SR_RSTTYP_Msk) == RSTC_SR_RSTTYP_WDT0_RST) &&
         ((RSTC_REGS->RSTC_MR & RSTC_MR_WDTPMC0_Msk) == 0U)) ||

        /* Reset cause is WDT1 and WDT1 do not reset PMC */
        (((RSTC_REGS->RSTC_SR & RSTC_SR_RSTTYP_Msk) == RSTC_SR_RSTTYP_WDT1_RST) &&
         ((RSTC_REGS->RSTC_MR & RSTC_MR_WDTPMC1_Msk) == 0U)) ||

        /* Reset cause is SW and SW reset do not reset PMC */
        (((RSTC_REGS->RSTC_SR & RSTC_SR_RSTTYP_Msk) == RSTC_SR_RSTTYP_SOFT_RST) &&
         ((RSTC_REGS->RSTC_MR & RSTC_MR_SFTPMCRS_Msk) == 0U)))
    {
        pmc_reset = false;
    }
    return pmc_reset;
}

