/*******************************************************************************
* Copyright (C) 2019 Microchip Technology Inc. and its subsidiaries.
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

#include "device.h"
#include "plib_clk.h"





/*********************************************************************************
UTMI PLL Enable/Disable
*********************************************************************************/
void CLK_UTMIPLLEnable(void)
{
    /* Enable the UTMI PLL */
    PMC_REGS->CKGR_UCKR |= CKGR_UCKR_UPLLEN_Msk;

    /* Wait until PLL Lock occurs */
    while ((PMC_REGS->PMC_SR & PMC_SR_LOCKU_Msk) != PMC_SR_LOCKU_Msk)
    {
        /* Wait for PLL lock to rise */
    }
}

void CLK_UTMIPLLDisable(void)
{
    /* Disable the UTMI PLL */
    PMC_REGS->CKGR_UCKR &= ~CKGR_UCKR_UPLLEN_Msk;
}



/*********************************************************************************
Initialize Generic clock
*********************************************************************************/




/*********************************************************************************
Initialize Peripheral clock
*********************************************************************************/

static void CLK_PeripheralClockInitialize(void)
{
    /* Enable clock for the selected peripherals, since the rom boot will turn on
     * certain clocks turn off all clocks not expressly enabled */
    PMC_REGS->PMC_PCER0=0x1042000U;
    PMC_REGS->PMC_PCDR0=~0x1042000U;
    PMC_REGS->PMC_PCER1=0x0U;
    PMC_REGS->PMC_PCDR1=~0x0U;
}




/*********************************************************************************
Clock Initialize
*********************************************************************************/

void CLK_Initialize( void )
{
    /* Initialize Peripheral Clock */
    CLK_PeripheralClockInitialize();

}

