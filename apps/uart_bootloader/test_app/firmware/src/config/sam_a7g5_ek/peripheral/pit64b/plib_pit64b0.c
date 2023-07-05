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

#include <stddef.h>
#include "plib_pit64b0.h"
#include "interrupts.h"

#define PIT64B0_COUNTER_FREQUENCY (200000000U / 1U)

typedef struct
{
    bool running;
    uint32_t periodLSB;
    uint32_t periodMSB;
    volatile PIT64B0_CALLBACK callback;
    volatile uintptr_t context;
} PIT64B0_OBJECT;


static PIT64B0_OBJECT pit64b0 =
{
    false,
    2000000U,
    0U,
    NULL,
    0U
};



static inline void PIT64B0_PERIOD_SET(uint32_t periodLSB, uint32_t periodMSB)
{
    /* Note: MSBPR should be updated first, as writing into LSBPR while
       SMOD is set will restart the timer */
    PIT64B0_REGS->PIT64B_MSBPR = periodMSB;
    PIT64B0_REGS->PIT64B_LSBPR = periodLSB;
}


void PIT64B0_TimerInitialize(void)
{
    PIT64B0_REGS->PIT64B_CR = PIT64B_CR_SWRST_Msk;
    PIT64B0_REGS->PIT64B_MR = PIT64B_MR_CONT(1U) | PIT64B_MR_SGCLK(0U) | PIT64B_MR_PRESCALER(0U) | PIT64B_MR_SMOD(0U);
    PIT64B0_PERIOD_SET(pit64b0.periodLSB, pit64b0.periodMSB);

    PIT64B0_REGS->PIT64B_IDR = PIT64B_IDR_Msk;
    PIT64B0_REGS->PIT64B_IER = PIT64B_IER_PERIOD(1U) | PIT64B_IER_OVRE(0U) | PIT64B_IER_SECE(0U);
}


void PIT64B0_TimerRestart(void)
{
    PIT64B0_TimerInitialize();
    PIT64B0_TimerStart();
}


void PIT64B0_TimerStart(void)
{
    PIT64B0_REGS->PIT64B_CR = PIT64B_CR_START_Msk;
    pit64b0.running = true;
}


void PIT64B0_TimerStop(void)
{
    PIT64B0_TimerInitialize();
    pit64b0.running = false;
}


void PIT64B0_TimerPeriodSet(uint64_t period)
{
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wlong-long"
    pit64b0.periodMSB = (uint32_t)((period & 0xFFFFFFFF00000000U) >> 32U);
    pit64b0.periodLSB = (uint32_t)(period & 0xFFFFFFFFU);
#pragma GCC diagnostic pop
    PIT64B0_PERIOD_SET(pit64b0.periodLSB, pit64b0.periodMSB);
}


uint64_t PIT64B0_TimerPeriodGet(void)
{
    uint64_t reg = PIT64B0_REGS->PIT64B_MSBPR;
    reg <<= 32U;
    reg |= PIT64B0_REGS->PIT64B_LSBPR;
    return reg;
}


uint64_t PIT64B0_TimerCounterGet(void)
{
    uint64_t reg = PIT64B0_REGS->PIT64B_TMSBR;
    reg <<= 32U;
    reg |= PIT64B0_REGS->PIT64B_TLSBR;
    return reg;
}


uint32_t PIT64B0_TimerFrequencyGet(void)
{
    return PIT64B0_COUNTER_FREQUENCY;
}


void PIT64B0_DelayMs(uint32_t delay_ms)
{
    uint64_t newCount = 0U, deltaCount = 0U, elapsedCount = 0U;
    uint64_t period = PIT64B0_TimerPeriodGet() + 1UL;
    uint64_t delayCount = (PIT64B0_COUNTER_FREQUENCY / 1000U) * (uint64_t)delay_ms;
    uint64_t oldCount = PIT64B0_TimerCounterGet();
    if(pit64b0.running)
    {
        while(elapsedCount < delayCount)
        {
            newCount = PIT64B0_TimerCounterGet();
            deltaCount = (newCount > oldCount) ? (newCount - oldCount) : (period - oldCount + newCount);
            elapsedCount += deltaCount;
            oldCount = newCount;
        }
    }
}


void PIT64B0_DelayUs(uint32_t delay_us)
{
    uint64_t newCount = 0U, deltaCount = 0U, elapsedCount = 0U;
    uint64_t period = PIT64B0_TimerPeriodGet() + 1UL;
    uint64_t delayCount = (PIT64B0_COUNTER_FREQUENCY / 1000000U) * (uint64_t)delay_us;
    uint64_t oldCount = PIT64B0_TimerCounterGet();
    if(pit64b0.running)
    {
        while(elapsedCount < delayCount)
        {
            newCount = PIT64B0_TimerCounterGet();
            deltaCount = (newCount > oldCount) ? (newCount - oldCount) : (period - oldCount + newCount);
            elapsedCount += deltaCount;
            oldCount = newCount;
        }
    }
}


void PIT64B0_TimerCallbackSet(PIT64B0_CALLBACK callback, uintptr_t context)
{
    pit64b0.callback = callback;
    pit64b0.context = context;
}


void __attribute__((used)) PIT64B0_InterruptHandler(void)
{
    /* Additional temporary variable used to prevent MISRA violations (Rule 13.x) */
    uintptr_t context = pit64b0.context;

    /* Clear interrupts */
    (void)PIT64B0_REGS->PIT64B_ISR;

    if(pit64b0.callback != NULL)
    {
        pit64b0.callback(context);
    }
}
