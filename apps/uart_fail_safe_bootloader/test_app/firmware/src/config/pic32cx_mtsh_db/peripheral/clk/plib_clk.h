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

#ifndef PLIB_CLK_H
#define PLIB_CLK_H

#include <stddef.h>
#include <stdbool.h>
#include "device.h"

#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif

// *****************************************************************************
// *****************************************************************************
// Section: CLK Module System Interface Routines
// *****************************************************************************
// *****************************************************************************

typedef uint32_t ID_PERIPH;


typedef enum
{
    GCLK_SRC_MD_SLOW_CLK = PMC_PCR_GCLKCSS_MD_SLOW_CLK_Val,
	GCLK_SRC_TD_SLOW_CLOCK = PMC_PCR_GCLKCSS_TD_SLOW_CLOCK_Val,
	GCLK_SRC_MAINCK = PMC_PCR_GCLKCSS_MAINCK_Val,
	GCLK_SRC_MCK0 = PMC_PCR_GCLKCSS_MCK0_Val,
	GCLK_SRC_PLLACK1 = PMC_PCR_GCLKCSS_PLLACK1_Val,
	GCLK_SRC_PLLBCK = PMC_PCR_GCLKCSS_PLLBCK_Val,
	GCLK_SRC_PLLCCK = PMC_PCR_GCLKCSS_PLLCCK_Val,
	GCLK_SRC_PLLCSRC = PMC_PCR_GCLKCSS_PLLCSRC_Val,
	
}GCLK_SRC;

typedef enum
{
    PLLA = 0U,
    PLLB,
    PLLC
}PLL_ID;

typedef enum
{
    CPU0_CLK_SRC_MD_SLOW_CLK = PMC_CPU_CKR_CSS_MD_SLOW_CLK_Val,
	CPU0_CLK_SRC_MAINCK = PMC_CPU_CKR_CSS_MAINCK_Val,
	CPU0_CLK_SRC_PLLACK1 = PMC_CPU_CKR_CSS_PLLACK1_Val,
	CPU0_CLK_SRC_PLLBCK = PMC_CPU_CKR_CSS_PLLBCK_Val,
	
}CPU0_CLK_SRC;

typedef enum
{
    CPU1_CLK_SRC_MD_SLOW_CLK = PMC_CPU_CKR_CPCSS_MD_SLOW_CLK_Val,
	CPU1_CLK_SRC_MAINCK = PMC_CPU_CKR_CPCSS_MAINCK_Val,
	CPU1_CLK_SRC_MCK0 = PMC_CPU_CKR_CPCSS_MCK0_Val,
	CPU1_CLK_SRC_PLLACK1 = PMC_CPU_CKR_CPCSS_PLLACK1_Val,
	CPU1_CLK_SRC_PLLBCK = PMC_CPU_CKR_CPCSS_PLLBCK_Val,
	CPU1_CLK_SRC_PLLCCK = PMC_CPU_CKR_CPCSS_PLLCCK_Val,
	
}CPU1_CLK_SRC;

typedef enum
{
    PLLA_CLK_SRC_TD_SLOW_CLK,
    PLLA_CLK_SRC_MAINCK,
}PLLA_CLK_SRC;

typedef enum
{
    PLLB_CLK_SRC_PLLACK0,
    PLLB_CLK_SRC_MAINCK,
}PLLB_CLK_SRC;

typedef enum
{
    PLLC_CLK_SRC_PLLACK0,
    PLLC_CLK_SRC_MAINCK,
}PLLC_CLK_SRC;

typedef enum
{
    CPU0_CLK_PRESCALER_CLK_1 = PMC_CPU_CKR_PRES_CLK_1_Val,
	CPU0_CLK_PRESCALER_CLK_2 = PMC_CPU_CKR_PRES_CLK_2_Val,
	CPU0_CLK_PRESCALER_CLK_4 = PMC_CPU_CKR_PRES_CLK_4_Val,
	CPU0_CLK_PRESCALER_CLK_8 = PMC_CPU_CKR_PRES_CLK_8_Val,
	CPU0_CLK_PRESCALER_CLK_16 = PMC_CPU_CKR_PRES_CLK_16_Val,
	CPU0_CLK_PRESCALER_CLK_32 = PMC_CPU_CKR_PRES_CLK_32_Val,
	CPU0_CLK_PRESCALER_CLK_64 = PMC_CPU_CKR_PRES_CLK_64_Val,
	CPU0_CLK_PRESCALER_CLK_3 = PMC_CPU_CKR_PRES_CLK_3_Val,
	
}CPU0_CLK_PRESCALER;

typedef enum
{
    CPU1_CLK_PRESCALER_CLK_1 = PMC_CPU_CKR_CPPRES_CLK_1_Val,
	CPU1_CLK_PRESCALER_CLK_2 = PMC_CPU_CKR_CPPRES_CLK_2_Val,
	CPU1_CLK_PRESCALER_CLK_3 = PMC_CPU_CKR_CPPRES_CLK_3_Val,
	CPU1_CLK_PRESCALER_CLK_4 = PMC_CPU_CKR_CPPRES_CLK_4_Val,
	CPU1_CLK_PRESCALER_CLK_5 = PMC_CPU_CKR_CPPRES_CLK_5_Val,
	CPU1_CLK_PRESCALER_CLK_6 = PMC_CPU_CKR_CPPRES_CLK_6_Val,
	CPU1_CLK_PRESCALER_CLK_7 = PMC_CPU_CKR_CPPRES_CLK_7_Val,
	CPU1_CLK_PRESCALER_CLK_8 = PMC_CPU_CKR_CPPRES_CLK_8_Val,
	CPU1_CLK_PRESCALER_CLK_9 = PMC_CPU_CKR_CPPRES_CLK_9_Val,
	CPU1_CLK_PRESCALER_CLK_10 = PMC_CPU_CKR_CPPRES_CLK_10_Val,
	CPU1_CLK_PRESCALER_CLK_11 = PMC_CPU_CKR_CPPRES_CLK_11_Val,
	CPU1_CLK_PRESCALER_CLK_12 = PMC_CPU_CKR_CPPRES_CLK_12_Val,
	CPU1_CLK_PRESCALER_CLK_13 = PMC_CPU_CKR_CPPRES_CLK_13_Val,
	CPU1_CLK_PRESCALER_CLK_14 = PMC_CPU_CKR_CPPRES_CLK_14_Val,
	CPU1_CLK_PRESCALER_CLK_15 = PMC_CPU_CKR_CPPRES_CLK_15_Val,
	CPU1_CLK_PRESCALER_CLK_16 = PMC_CPU_CKR_CPPRES_CLK_16_Val,
	
}CPU1_CLK_PRESCALER;


void CLK_TDSCLKSelectXTAL(void);

void CLK_EnableMainRCOscillator(void);

void CLK_DisableMainRCOscillator(void);

void CLK_EnableMainXTALOscillator(void);

void CLK_DisableMainXTALOscillator(void);

void CLK_MainOscillatorSelectXTAL(void);

void CLK_MainOscillatorSelectRC(void);

void CLK_PLLEnable(PLL_ID pllID);

void CLK_PLLDisable(PLL_ID pllID);



void CLK_Core1BusMasterClkEnable(void);

void CLK_Core1BusMasterClkDisable(void);


void CLK_Core1ProcessorClkEnable(void);

void CLK_Core1ProcessorClkDisable(void);



// *****************************************************************************
/* Function:
    void CLOCK_Initialize ( void )

  Summary:
    Initializes hardware of the System Clock and Peripheral Clock.

  Description:
    This function initializes the hardware of System Clock and Peripheral Clocks.

  Precondition:
    None.

  Parameters:
    None.

  Returns:
    None.

  Example:
    <code>
    Example 1: Do not alter the configuration bit settings
    CLOCK_Initialize ( );

    </code>

  Remarks:
    None.
*/

void CLOCK_Initialize ( void );

#ifdef __cplusplus
}
#endif

#endif //PLIB_CLK_H