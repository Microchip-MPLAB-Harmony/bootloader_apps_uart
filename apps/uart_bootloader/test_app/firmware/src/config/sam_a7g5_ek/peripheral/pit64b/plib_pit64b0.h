/*******************************************************************************
  Periodic Interval Timer (PIT64B0) 

  Company:
    Microchip Technology Inc.

  File Name:
    plib_pit64b0.h

  Summary:
    Periodic Interval Timer (PIT64B0) PLIB.

  Description:
    This file declares the interface for the Periodic Interval Timer (PIT64B0).
*******************************************************************************/

// DOM-IGNORE-BEGIN
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
// DOM-IGNORE-END

#ifndef PLIB_PIT64B0_H
#define PLIB_PIT64B0_H


// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
#include <stdbool.h>
#include <stdint.h>

#include "device.h" // static inline macro

#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif

// *****************************************************************************
// *****************************************************************************
// Section: Data Types
// *****************************************************************************

// *****************************************************************************
/* PIT64B0 Interrupt Callback Function definition.

  Summary:
    PIT64B0 Interrupt Callback Function definition.

  Description:
    Defines the function signature for the PIT64B0 interrupt callback.

*/

typedef void (*PIT64B0_CALLBACK)(uintptr_t context);

// *****************************************************************************
// *****************************************************************************
// Section: Interface Routines
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function:
   void PIT64B0_TimerInitialize(void);

  Summary:
    Initialize PIT64B0 registers per user config.

  Description:
    Initalize the period and, if configured, enable the counter and interrupt.

  Precondition:
    None.

  Parameters:
    None.
  
  Returns:
    None.
*/
void PIT64B0_TimerInitialize(void);

// *****************************************************************************
/* Function:
    void PIT64B0_TimerRestart(void);

  Summary:
   Restart the PIT64B0 counter.

  Description:
    Signal the PIT64B0 restart the counter.

  Precondition:
    None.

  Parameters:
    None.
  
  Returns:
    None.
*/
void PIT64B0_TimerRestart(void);

// *****************************************************************************
/* Function:
    void PIT64B0_TimerStart(void);

  Summary:
   Start the PIT64B0 counter.

  Description:
    Start the PIT64B0 counter.  If interrupts are enabled an interrupt will occur
    every time the period value is reached.

  Precondition:
    None.

  Parameters:
    None.
  
  Returns:
    None.
*/
void PIT64B0_TimerStart(void);

// *****************************************************************************
/* Function:
    void PIT64B0_TimerStop(void);

  Summary:
   Stop the PIT64B0 counter.

  Description:
    Stop the PIT64B0 counter.

  Precondition:
    None.

  Parameters:
    None.
  
  Returns:
    None.
*/
void PIT64B0_TimerStop(void);

// *****************************************************************************
/* Function:
   void PIT64B0_TimerPeriodSet(uint64_t period);

  Summary:
   Set the timer period value.

  Description:
    Set the timer period value by programming the PIV field in the MR register.

  Precondition:
    None.

  Parameters:
   period       - The period (PIV) value of the PIT64B0. 
  
  Returns:
    None.
*/
void PIT64B0_TimerPeriodSet(uint64_t period);

// *****************************************************************************
/* Function:
    uint64_t PIT64B0_TimerPeriodGet(void);

  Summary:
   Get the timer period value.

  Description:
    Return the period value of the PIT64B0.

  Precondition:
    None.

  Parameters:
    None.
  
  Returns:
    None.
*/
uint64_t PIT64B0_TimerPeriodGet(void);

// *****************************************************************************
/* Function:
    uint64_t PIT64B0_TimerCounterGet(void);

  Summary:
   Get the timer counter value.

  Description:
    Return the current timer value of the PIT64B0.

  Precondition:
    None.

  Parameters:
    None.
  
  Returns:
    None.
*/
uint64_t PIT64B0_TimerCounterGet(void);


// *****************************************************************************
/* Function:
    uint32_t PIT64B0_TimerFrequencyGet(void);

  Summary:
    Get the timer clock frequency.

  Description:
    Return the clock frequency of the PIT64B0.

  Precondition:
    None.

  Parameters:
    None.
  
  Returns:
    None.
*/
uint32_t PIT64B0_TimerFrequencyGet(void);

// *****************************************************************************
/* Function:
    void PIT64B0_DelayMs(uint32_t delay_ms);

  Summary:
    Delays processing for x milliseconds.

  Description:
    Delays execution by using  the PIT64B0 timer to determine when given number of
    milliseconds has expired.  

  Precondition:
    PIT64B0 is configured and enabled.

  Parameters:
    delay_ms      - number of milliseconds to delay
  
  Returns:
    None.
*/
void PIT64B0_DelayMs(uint32_t delay_ms);

// *****************************************************************************
/* Function:
    void PIT64B0_DelayUs(uint32_t delay_us);

  Summary:
    Delays processing for x microseconds.

  Description:
    Delays execution by using  the PIT64B0 timer to determine when given number of
    microseconds has expired.  

  Precondition:
    PIT64B0 is configured and enabled.

  Parameters:
    delay_us      - number of microseconds to delay
  
  Returns:
    None.
*/
void PIT64B0_DelayUs(uint32_t delay_us);


// *****************************************************************************
/* Function:
    void PIT64B0_TimerCallbackSet(PIT64B0_CALLBACK callback, uintptr_t context);

  Summary:
    Register callback for PIT64B0 interrupt.

  Description:
    When the timer interrupt occurs the given callback will called with the
    given context.

  Precondition:
    None.

  Parameters:
    callback    - Callback function
    context     - paramter to callback function
  
  Returns:
    None.
*/
void PIT64B0_TimerCallbackSet(PIT64B0_CALLBACK callback, uintptr_t context);

// *****************************************************************************
/* Function:
    void PIT64B0_ClearInterrupt(void);

  Summary:
    PIT64B0 Clear Interrupt.

  Description:
    Clear the PIT64B0 interrupt.  Meant to be used by external
    interrupt handlers (e.g. FreeRTOS tick hanlder).

  Precondition:
    None.

  Parameters:
    None.
  
  Returns:
    None.
*/
__STATIC_INLINE void PIT64B0_ClearInterrupt(void)
{
    (uint32_t)PIT64B0_REGS->PIT64B_ISR;
}

#ifdef __cplusplus  // Provide C++ Compatibility

    }

#endif

#endif

/*******************************************************************************
 End of File
*/
