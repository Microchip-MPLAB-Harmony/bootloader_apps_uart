/*******************************************************************************
  SYS CLK Static Functions for Clock System Service

  Company:
    Microchip Technology Inc.

  File Name:
    plib_clk.c

  Summary:
    SYS CLK static function implementations for the Clock System Service.

  Description:
    The Clock System Service provides a simple interface to manage the
    oscillators on Microchip microcontrollers. This file defines the static
    implementation for the Clock System Service.

  Remarks:
    Static functions incorporate all system clock configuration settings as
    determined by the user via the Microchip Harmony Configurator GUI.
    It provides static version of the routines, eliminating the need for an
    object ID or object handle.

    Static single-open interfaces also eliminate the need for the open handle.

*******************************************************************************/

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

// *****************************************************************************
// *****************************************************************************
// Section: Include Files
// *****************************************************************************
// *****************************************************************************

#include "device.h"
#include "plib_clk.h"

#define CLK_READY_RETRIES  8000
#define BTZB_XTAL_NOT_READY ((BTZBSYS_REGS->BTZBSYS_SUBSYS_STATUS_REG1 \
                            & BTZBSYS_SUBSYS_STATUS_REG1_xtal_ready_out_Msk) \
                            != BTZBSYS_SUBSYS_STATUS_REG1_xtal_ready_out_Msk)
#define BTZB_PLL_NOT_LOCKED ((BTZBSYS_REGS->BTZBSYS_SUBSYS_STATUS_REG1 \
                            & BTZBSYS_SUBSYS_CNTRL_REG1_subsys_dbg_bus_sel_top_Msk) \
                            != BTZBSYS_SUBSYS_CNTRL_REG1_subsys_dbg_bus_sel_top_Msk)

// *****************************************************************************
// *****************************************************************************
// Section: File Scope Functions
// *****************************************************************************
// *****************************************************************************
static void CLOCK_RF_Write_Reg(uint8_t addr, uint16_t value)
{
    BLE_REGS->BLE_SPI_REG_ADDR = addr;
    BLE_REGS->BLE_SPI_WR_DATA = value;
    BLE_REGS->BLE_RFPWRMGMT |= 0x00100000U;
    while ((BLE_REGS->BLE_RFPWRMGMT & 0x00100000U) != 0U)
    {
        /* Do nothing */
    }
}
// *****************************************************************************
/* Function:
    void CLOCK_Initialize( void )

  Summary:
    Initializes hardware and internal data structure of the System Clock.

  Description:
    This function initializes the hardware and internal data structure of System
    Clock Service.

  Remarks:
    This is configuration values for the static version of the Clock System
    Service module is determined by the user via the MHC GUI.

    The objective is to eliminate the user's need to be knowledgeable in the
    function of the 'configuration bits' to configure the system oscillators.
*/

void CLOCK_Initialize( void )
{
    //check CLDO ready
    while ((CFG_REGS->CFG_MISCSTAT & CFG_MISCSTAT_CLDORDY_Msk) == 0U)
    {
        /* Nothing to do */
    }
    CLOCK_RF_Write_Reg(0x27U, 0x2078U);

    //Current Oscillator is 8MHz FRC or 16MHz POSC
    if ((CRU_REGS->CRU_OSCCON & CRU_OSCCON_COSC_Msk) != CRU_OSCCON_COSC_SPLL)
    {
        //Setup 128MHz PLL
        CLOCK_RF_Write_Reg(0x2EU, 0x4328U);

        /* MISRAC 2012 deviation block start */
        /* MISRA C-2012 Rule 11.1 deviated 1 time. Deviation record ID -  H3_MISRAC_2012_R_11_1_DR_1 */
        /* Configure Prefetch, Wait States by calling the ROM function whose address is available at address 0xF2D0 */
        typedef void (*FUNC_PCHE_SETUP)(uint32_t setup);
        (void)((FUNC_PCHE_SETUP)(*(uint32_t*)0xF2D0))((PCHE_REGS->PCHE_CHECON & (~(PCHE_CHECON_PFMWS_Msk | PCHE_CHECON_ADRWS_Msk | PCHE_CHECON_PREFEN_Msk)))
                                        | (PCHE_CHECON_PFMWS(4) | PCHE_CHECON_PREFEN(1) | PCHE_CHECON_ADRWS(1)));
    }
    //programming 4ms delay -  programming subsys_xtal_ready_delay
    //check xtal spec for delay required
    //wait for crystal ready
    while((BTZBSYS_REGS->BTZBSYS_SUBSYS_STATUS_REG1 & BTZBSYS_SUBSYS_STATUS_REG1_xtal_ready_out_Msk) != BTZBSYS_SUBSYS_STATUS_REG1_xtal_ready_out_Msk)
    {
        /* Nothing to do */
    }
    CFG_REGS->CFG_SYSKEY = 0x00000000U; // Write junk to lock it if it is already unlocked
    CFG_REGS->CFG_SYSKEY = 0xAA996655U;
    CFG_REGS->CFG_SYSKEY = 0x556699AAU;
    CRU_REGS->CRU_OSCCON = 0x200U;// switch to XO

    //Enable oscillator switch from COSC to NOSC
    CRU_REGS->CRU_OSCCONSET = CRU_OSCCON_OSWEN_Msk;

    //wait for successful clock change before continuing
    while ((CRU_REGS->CRU_OSCCON & CRU_OSCCON_OSWEN_Msk) != 0U)
    {
        /* Nothing to do */
    }

    //set PLL_disable
     BLE_REGS->BLE_DPLL_RG2 |= 0x02U;

    // set PLL_enable
    BLE_REGS->BLE_DPLL_RG2 &= ((uint8_t)~(0x02U));

    // Set MISC[24]=0, CLKGEN_PLLRST = 0
    CFG_REGS->CFG_MISCSTAT  &= 0x00FFFFFFU;
	// Setting CPU QoS and FC QoS to same priority
	CFG_REGS->CFG_CFGPGQOS1 = (CFG_REGS->CFG_CFGPGQOS1 & ~(CFG_CFGPGQOS1_FCQOS_Msk | CFG_CFGPGQOS1_CPUQOS_Msk)) | ((0x03 << CFG_CFGPGQOS1_FCQOS_Pos) | (0x03 << CFG_CFGPGQOS1_CPUQOS_Pos));
    //programming delay for pll lock - 500 us
    //32 us steps - check pll spec for final value
    BTZBSYS_REGS->BTZBSYS_SUBSYS_CNTRL_REG3 = ((BTZBSYS_REGS->BTZBSYS_SUBSYS_CNTRL_REG3 & ~BTZBSYS_SUBSYS_CNTRL_REG3_subsys_pll_ready_delay_Msk )
                                                   | ((0x02UL) << BTZBSYS_SUBSYS_CNTRL_REG3_subsys_pll_ready_delay_Pos));

    /* Unlock system for clock configuration */
    CFG_REGS->CFG_SYSKEY = 0x00000000U;
    CFG_REGS->CFG_SYSKEY = 0xAA996655U;
    CFG_REGS->CFG_SYSKEY = 0x556699AAU;


    /* SPLLPWDN     = 0x1     */
    /* SPLLFLOCK    = 0x0    */
    /* SPLLRST      = 0x0      */
    /* SPLLPOSTDIV1 = 1 */
    /* SPLLPOSTDIV2 = 0x1 */
    /* SPLL_BYP     = 0x3     */
    CRU_REGS->CRU_SPLLCON = 0xc0010108U;

    //wait for PLL Lock
    while((BTZBSYS_REGS -> BTZBSYS_SUBSYS_STATUS_REG1 & 0x03U) != 0x03U)
    {
        /* Nothing to do */
    }

    /* OSWEN    = SWITCH    */
    /* SOSCEN   = OFF   */
    /* CF       = NO_FAILDET       */
    /* SLPEN    = IDLE    */
    /* CLKLOCK  = UNLOCKED  */
    /* NOSC     = SPLL     */
    /* WAKE2SPD = FRC */
    /* DRMEN    = NO_EFFECT    */
    /* FRCDIV   = DIV_1   */
    CRU_REGS->CRU_OSCCON = 0x200101;

    CRU_REGS->CRU_OSCCONSET = CRU_OSCCON_OSWEN_Msk;  /* request oscillator switch to occur */

    while((CRU_REGS->CRU_OSCCON & CRU_OSCCON_OSWEN_Msk) != 0U)       /* wait for indication of successful clock change before proceeding */
    {
        /* Nothing to do */
    }
    /* Peripheral Bus 3 is by default enabled, set its divisor */
    /* PBDIV = 10 */
    CRU_REGS->CRU_PB3DIV = CRU_PB3DIV_PBDIVON_Msk | CRU_PB3DIV_PBDIV(9U);



    /* Set up Reference Clock 1 */
    /* REFO1CON register */
    /* ROSEL =  SPLL1 */
    /* DIVSWEN = 1 */
    /* RSLP = false */
    /* SIDL = false */
    /* RODIV = 0 */
    CRU_REGS->CRU_REFO1CON = 0x201U;

    /* Enable oscillator (ON bit) */
    CRU_REGS->CRU_REFO1CONSET = 0x00008000U;


    /* Peripheral Clock Generators */
    CFG_REGS->CFG_CFGPCLKGEN1 = 0x9000U;
    CFG_REGS->CFG_CFGPCLKGEN2 = 0x0U;
    CFG_REGS->CFG_CFGPCLKGEN3 = 0x0U;
    CFG_REGS->CFG_CFGPCLKGEN4 = 0x0U;

    /* Peripheral Module Disable Configuration */


    CFG_REGS->CFG_PMD1 = 0x200107e0U;
    CFG_REGS->CFG_PMD2 = 0x0U;
    CFG_REGS->CFG_PMD3 = 0xf73fffeU;


    // Change src_clk source to PLL CLK
    BTZBSYS_REGS->BTZBSYS_SUBSYS_CNTRL_REG1 |= 0x00000010U;

    // set aclb_reset_n[24]
    BTZBSYS_REGS->BTZBSYS_SUBSYS_CNTRL_REG0 |= 0x01000000U;

        /* Power down the UPLL */
        CRU_REGS->CRU_UPLLCON = CRU_UPLLCON_UPLLPWDN_Msk;

        /* Power down the EPLL */
        CRU_REGS->CRU_EPLLCON = CRU_EPLLCON_EPLLPWDN_Msk;

    /* Lock system since done with clock configuration */
    CFG_REGS->CFG_SYSKEY = 0x33333333U;
}
