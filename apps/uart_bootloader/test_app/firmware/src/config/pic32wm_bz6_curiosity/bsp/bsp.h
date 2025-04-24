/*******************************************************************************
  Board Support Package Header File.

  Company:
    Microchip Technology Inc.

  File Name:
    bsp.h

  Summary:
    Board Support Package Header File 

  Description:
    This file contains constants, macros, type definitions and function
    declarations 
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

#ifndef BSP_H
#define BSP_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include "device.h"

// *****************************************************************************
// *****************************************************************************
// Section: BSP Macros
// *****************************************************************************
// *****************************************************************************
#define pic32wm_bz6_curiosity
#define BSP_NAME             "pic32wm_bz6_curiosity"

/*** LED Macros for USER_LED ***/
#define USER_LED_Toggle() (GPIOB_REGS->GPIO_LATINV = (1UL<<7))
#define USER_LED_Get() ((GPIOB_REGS->GPIO_PORT >> 7) & 0x1U)
#define USER_LED_On() (GPIOB_REGS->GPIO_LATCLR = (1UL<<7))
#define USER_LED_Off() (GPIOB_REGS->GPIO_LATSET = (1UL<<7))
/*** LED Macros for RGB_LED_GREEN ***/
#define RGB_LED_GREEN_Toggle() (GPIOC_REGS->GPIO_LATINV = (1UL<<10))
#define RGB_LED_GREEN_Get() ((GPIOC_REGS->GPIO_PORT >> 10) & 0x1U)
#define RGB_LED_GREEN_On() (GPIOC_REGS->GPIO_LATSET = (1UL<<10))
#define RGB_LED_GREEN_Off() (GPIOC_REGS->GPIO_LATCLR = (1UL<<10))
/*** LED Macros for RGB_LED_RED ***/
#define RGB_LED_RED_Toggle() (GPIOC_REGS->GPIO_LATINV = (1UL<<7))
#define RGB_LED_RED_Get() ((GPIOC_REGS->GPIO_PORT >> 7) & 0x1U)
#define RGB_LED_RED_On() (GPIOC_REGS->GPIO_LATSET = (1UL<<7))
#define RGB_LED_RED_Off() (GPIOC_REGS->GPIO_LATCLR = (1UL<<7))
/*** LED Macros for RGB_LED_BLUE ***/
#define RGB_LED_BLUE_Toggle() (GPIOE_REGS->GPIO_LATINV = (1UL<<0))
#define RGB_LED_BLUE_Get() ((GPIOE_REGS->GPIO_PORT >> 0) & 0x1U)
#define RGB_LED_BLUE_On() (GPIOE_REGS->GPIO_LATSET = (1UL<<0))
#define RGB_LED_BLUE_Off() (GPIOE_REGS->GPIO_LATCLR = (1UL<<0))
/*** SWITCH Macros for SWITCH2 ***/
#define SWITCH2_Get() ((GPIOE_REGS->GPIO_PORT >> 3) & 0x1U)
#define SWITCH2_STATE_PRESSED 0U
#define SWITCH2_STATE_RELEASED 1U
/*** SWITCH Macros for SWITCH1 ***/
#define SWITCH1_Get() ((GPIOB_REGS->GPIO_PORT >> 9) & 0x1U)
#define SWITCH1_STATE_PRESSED 0U
#define SWITCH1_STATE_RELEASED 1U




// *****************************************************************************
// *****************************************************************************
// Section: Interface Routines
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function:
    void BSP_Initialize(void)

  Summary:
    Performs the necessary actions to initialize a board

  Description:
    This function initializes the LED and Switch ports on the board.  This
    function must be called by the user before using any APIs present on this
    BSP.

  Precondition:
    None.

  Parameters:
    None

  Returns:
    None.

  Example:
    <code>
    BSP_Initialize();
    </code>

  Remarks:
    None
*/

void BSP_Initialize(void);

#endif // BSP_H

/*******************************************************************************
 End of File
*/
