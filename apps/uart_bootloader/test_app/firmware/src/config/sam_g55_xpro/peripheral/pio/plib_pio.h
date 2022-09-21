/*******************************************************************************
  PIO PLIB

  Company:
    Microchip Technology Inc.

  File Name:
    plib_pio.h

  Summary:
    PIO PLIB Header File

  Description:
    This library provides an interface to control and interact with Parallel
    Input/Output controller (PIO) module.

*******************************************************************************/

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

#ifndef PLIB_PIO_H
#define PLIB_PIO_H

#include "device.h"
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: Data types and constants
// *****************************************************************************
// *****************************************************************************



// *****************************************************************************
/* PIO Port

  Summary:
    Identifies the available PIO Ports.

  Description:
    This enumeration identifies the available PIO Ports.

  Remarks:
    The caller should not rely on the specific numbers assigned to any of
    these values as they may change from one processor to the next.

    Not all ports are available on all devices.  Refer to the specific
    device data sheet to determine which ports are supported.
*/


#define    PIO_PORT_A       (PIOA_BASE_ADDRESS)
#define    PIO_PORT_B       (PIOB_BASE_ADDRESS)
typedef uint32_t PIO_PORT;

// *****************************************************************************
/* PIO Port Pins

  Summary:
    Identifies the available PIO port pins.

  Description:
    This enumeration identifies the available PIO port pins.

  Remarks:
    The caller should not rely on the specific numbers assigned to any of
    these values as they may change from one processor to the next.

    Not all pins are available on all devices.  Refer to the specific
    device data sheet to determine which pins are supported.
*/

#define    PIO_PIN_PA0     (0U)
#define    PIO_PIN_PA1     (1U)
#define    PIO_PIN_PA2     (2U)
#define    PIO_PIN_PA3     (3U)
#define    PIO_PIN_PA4     (4U)
#define    PIO_PIN_PA5     (5U)
#define    PIO_PIN_PA6     (6U)
#define    PIO_PIN_PA7     (7U)
#define    PIO_PIN_PA8     (8U)
#define    PIO_PIN_PA9     (9U)
#define    PIO_PIN_PA10     (10U)
#define    PIO_PIN_PA11     (11U)
#define    PIO_PIN_PA12     (12U)
#define    PIO_PIN_PA13     (13U)
#define    PIO_PIN_PA14     (14U)
#define    PIO_PIN_PA15     (15U)
#define    PIO_PIN_PA16     (16U)
#define    PIO_PIN_PA17     (17U)
#define    PIO_PIN_PA18     (18U)
#define    PIO_PIN_PA19     (19U)
#define    PIO_PIN_PA20     (20U)
#define    PIO_PIN_PA21     (21U)
#define    PIO_PIN_PA22     (22U)
#define    PIO_PIN_PA23     (23U)
#define    PIO_PIN_PA24     (24U)
#define    PIO_PIN_PA25     (25U)
#define    PIO_PIN_PA26     (26U)
#define    PIO_PIN_PA27     (27U)
#define    PIO_PIN_PA28     (28U)
#define    PIO_PIN_PA29     (29U)
#define    PIO_PIN_PA30     (30U)
#define    PIO_PIN_PA31     (31U)
#define    PIO_PIN_PB0     (32U)
#define    PIO_PIN_PB1     (33U)
#define    PIO_PIN_PB2     (34U)
#define    PIO_PIN_PB3     (35U)
#define    PIO_PIN_PB4     (36U)
#define    PIO_PIN_PB5     (37U)
#define    PIO_PIN_PB6     (38U)
#define    PIO_PIN_PB7     (39U)
#define    PIO_PIN_PB8     (40U)
#define    PIO_PIN_PB9     (41U)
#define    PIO_PIN_PB10     (42U)
#define    PIO_PIN_PB11     (43U)
#define    PIO_PIN_PB12     (44U)
#define    PIO_PIN_PB13     (45U)
#define    PIO_PIN_PB14     (46U)
#define    PIO_PIN_PB15     (47U)

    /* This element should not be used in any of the PIO APIs.
       It will be used by other modules or application to denote that none of the PIO Pin is used */
#define    PIO_PIN_NONE         ( -1)

typedef uint32_t PIO_PIN;


void PIO_Initialize(void);

// *****************************************************************************
// *****************************************************************************
// Section: PIO Functions which operates on multiple pins of a port
// *****************************************************************************
// *****************************************************************************

uint32_t PIO_PortRead(PIO_PORT port);

void PIO_PortWrite(PIO_PORT port, uint32_t mask, uint32_t value);

uint32_t PIO_PortLatchRead ( PIO_PORT port );

void PIO_PortSet(PIO_PORT port, uint32_t mask);

void PIO_PortClear(PIO_PORT port, uint32_t mask);

void PIO_PortToggle(PIO_PORT port, uint32_t mask);

void PIO_PortInputEnable(PIO_PORT port, uint32_t mask);

void PIO_PortOutputEnable(PIO_PORT port, uint32_t mask);

// *****************************************************************************
// *****************************************************************************
// Section: PIO Functions which operates on one pin at a time
// *****************************************************************************
// *****************************************************************************

static inline void PIO_PinWrite(PIO_PIN pin, bool value)
{
    PIO_PortWrite((PIO_PORT)(PIOA_BASE_ADDRESS + (0x200U * (pin>>5U))), (uint32_t)(0x1) << (pin & 0x1fU), (uint32_t)(value) << (pin & 0x1fU));
}

static inline bool PIO_PinRead(PIO_PIN pin)
{
    return (bool)((PIO_PortRead((PIO_PORT)(PIOA_BASE_ADDRESS + (0x200U * (pin>>5U)))) >> (pin & 0x1FU)) & 0x1U);
}

static inline bool PIO_PinLatchRead(PIO_PIN pin)
{
    return (bool)((PIO_PortLatchRead((PIO_PORT)(PIOA_BASE_ADDRESS + (0x200U * (pin>>5U)))) >> (pin & 0x1FU)) & 0x1U);
}

static inline void PIO_PinToggle(PIO_PIN pin)
{
    PIO_PortToggle((PIO_PORT)(PIOA_BASE_ADDRESS + (0x200U * (pin>>5U))), 0x1UL << (pin & 0x1FU));
}

static inline void PIO_PinSet(PIO_PIN pin)
{
    PIO_PortSet((PIO_PORT)(PIOA_BASE_ADDRESS + (0x200U * (pin>>5))), 0x1UL << (pin & 0x1FU));
}

static inline void PIO_PinClear(PIO_PIN pin)
{
    PIO_PortClear((PIO_PORT)(PIOA_BASE_ADDRESS + (0x200U * (pin>>5U))), 0x1UL << (pin & 0x1FU));
}

static inline void PIO_PinInputEnable(PIO_PIN pin)
{
    PIO_PortInputEnable((PIO_PORT)(PIOA_BASE_ADDRESS + (0x200U * (pin>>5U))), 0x1UL << (pin & 0x1FU));
}

static inline void PIO_PinOutputEnable(PIO_PIN pin)
{
    PIO_PortOutputEnable((PIO_PORT)(PIOA_BASE_ADDRESS + (0x200U * (pin>>5U))), 0x1UL << (pin & 0x1FU));
}


// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    }

#endif
// DOM-IGNORE-END
#endif // PLIB_PIO_H
