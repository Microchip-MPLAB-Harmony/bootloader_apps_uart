/*******************************************************************************
  User Configuration Header

  File Name:
    user.h

  Summary:
    Build-time configuration header for the user defined by this project.

  Description:
    An MPLAB Project may have multiple configurations.  This file defines the
    build-time options for a single configuration.

  Remarks:
    It only provides macro definitions for build-time configuration options

*******************************************************************************/

#ifndef USER_H
#define USER_H

#include "bsp/bsp.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

extern "C" {

#endif
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: User Configuration macros
// *****************************************************************************
// *****************************************************************************
#define LED_ON()        LED1_On()
#define LED_OFF()       LED1_Off()
#define LED_TOGGLE()    LED1_Toggle()

#define SWITCH_GET()    PB0_Get()
#define SWITCH_PRESSED  PB0_STATE_PRESSED
    
#define APP_TIMER_START     SYSTICK_TimerStart
#define APP_TIMER_DelayMs   SYSTICK_DelayMs

#define BTL_TRIGGER_RAM_START  0x21000000U

static inline void APP_SystemReset( void )
{
    NVIC_SystemReset();
}

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // USER_H
/*******************************************************************************
 End of File
*/
