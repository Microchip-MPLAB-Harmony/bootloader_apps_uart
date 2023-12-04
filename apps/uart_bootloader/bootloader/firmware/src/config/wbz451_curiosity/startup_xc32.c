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

#include "definitions.h" /* for potential custom handler names */
#include <libpic32c.h>
#include <sys/cdefs.h>
#include <stdbool.h>

/* MISRAC 2012 deviation block start */
/* MISRA C-2012 Rule 21.2 deviated 1 times. Deviation record ID -  H3_MISRAC_2012_R_21_2_DR_1 */
/* MISRA C-2012 Rule 8.6 deviated 7 times.  Deviation record ID -  H3_MISRAC_2012_R_8_6_DR_1 */
/* Initialize segments */
extern uint32_t _sfixed;
extern void _ram_end_(void);

extern int main(void);


/* Declaration of Reset handler (may be custom) */
void __attribute__((noinline)) Reset_Handler(void);
extern void (* const vectors[])(void);

__attribute__ ((used, section(".vectors")))
void (* const vectors[])(void) =
{
    &_ram_end_,
    Reset_Handler,
};

/**
 * \brief This is the code that gets called on processor reset.
 * To initialize the device, and call the main() routine.
 */

/* Linker-defined symbols for data initialization. */
extern uint32_t _sdata, _edata, _etext;
extern uint32_t _sbss, _ebss;
/* MISRAC 2012 deviation block end */

void __attribute__((noinline, section(".romfunc.Reset_Handler"))) Reset_Handler(void)
{

    uint32_t *pSrc, *pDst;
    uintptr_t src, dst;


    src = (uintptr_t)&_etext;
    pSrc = (uint32_t *)src;      /* flash functions start after .text */
    dst = (uintptr_t)&_sdata;
    pDst = (uint32_t *)dst;      /* boundaries of .data area to init */

    /* Init .data */
    for (uint32_t count = 0U; count < (((uint32_t)&_edata - (uint32_t)dst) / 4U); count++)
    {
        pDst[count] = pSrc[count];
    }

    /* Init .bss */
    dst = (uintptr_t)&_sbss;
    pDst = (uint32_t *)dst;
    for (uint32_t count = 0U; count < (((uint32_t)&_ebss - (uint32_t)dst) / 4U); count++)
    {
        pDst[count] = 0U;
    }


     /* Branch to application's main function */
    (void)main();

#if (defined(__DEBUG) || defined(__DEBUG_D)) && defined(__XC32)
    __builtin_software_breakpoint();
#endif
}
