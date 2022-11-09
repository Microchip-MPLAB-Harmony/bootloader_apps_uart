/*******************************************************************************
  Peripheral Access Controller(PAC) PLIB

  Company
    Microchip Technology Inc.

  File Name
    plib_pac.h

  Summary
    PAC PLIB Header File.

  Description
    This file defines the interface to the PAC peripheral library. This
    library provides access to and control of the associated peripheral
    instance.

  Remarks:
    None.
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

/* Guards against multiple inclusion */
#ifndef PLIB_PAC_H
#define PLIB_PAC_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stdbool.h>
#include <stddef.h>
#include "device.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus // Provide C++ Compatibility

    extern "C" {

#endif
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: Data Types
// *****************************************************************************
// *****************************************************************************

typedef enum
{
    /* No Action */
    PAC_PROTECTION_OFF,

    /* Clear the peripheral write control protection */
    PAC_PROTECTION_CLEAR,

    /* Set the peripheral write control protection */
    PAC_PROTECTION_SET,

    /* Set and lock the peripheral write control until the next hardware reset */
    PAC_PROTECTION_SET_AND_LOCK,

} PAC_PROTECTION;

typedef enum
{
    /* Instance Id for Peripheral AC */
    PAC_PERIPHERAL_AC = ID_AC,

    /* Instance Id for Peripheral ADC */
    PAC_PERIPHERAL_ADC = ID_ADC,

    /* Instance Id for Peripheral CAN0 */
    PAC_PERIPHERAL_CAN0 = ID_CAN0,

    /* Instance Id for Peripheral CAN1 */
    PAC_PERIPHERAL_CAN1 = ID_CAN1,

    /* Instance Id for Peripheral CAN2 */
    PAC_PERIPHERAL_CAN2 = ID_CAN2,

    /* Instance Id for Peripheral CAN3 */
    PAC_PERIPHERAL_CAN3 = ID_CAN3,

    /* Instance Id for Peripheral CAN4 */
    PAC_PERIPHERAL_CAN4 = ID_CAN4,

    /* Instance Id for Peripheral CAN5 */
    PAC_PERIPHERAL_CAN5 = ID_CAN5,

    /* Instance Id for Peripheral DMA */
    PAC_PERIPHERAL_DMA = ID_DMA,

    /* Instance Id for Peripheral DRMTCM */
    PAC_PERIPHERAL_DRMTCM = ID_DRMTCM,

    /* Instance Id for Peripheral DSU */
    PAC_PERIPHERAL_DSU = ID_DSU,

    /* Instance Id for Peripheral EIC */
    PAC_PERIPHERAL_EIC = ID_EIC,

    /* Instance Id for Peripheral ETH */
    PAC_PERIPHERAL_ETH = ID_ETH,

    /* Instance Id for Peripheral EVSYS */
    PAC_PERIPHERAL_EVSYS = ID_EVSYS,

    /* Instance Id for Peripheral FCR */
    PAC_PERIPHERAL_FCR = ID_FCR,

    /* Instance Id for Peripheral FCW */
    PAC_PERIPHERAL_FCW = ID_FCW,

    /* Instance Id for Peripheral FREQM */
    PAC_PERIPHERAL_FREQM = ID_FREQM,

    /* Instance Id for Peripheral GCLK */
    PAC_PERIPHERAL_GCLK = ID_GCLK,

    /* Instance Id for Peripheral MCLK */
    PAC_PERIPHERAL_MCLK = ID_MCLK,

    /* Instance Id for Peripheral MCRAMC */
    PAC_PERIPHERAL_MCRAMC = ID_MCRAMC,

    /* Instance Id for Peripheral MLB */
    PAC_PERIPHERAL_MLB = ID_MLB,

    /* Instance Id for Peripheral OSC32KCTRL */
    PAC_PERIPHERAL_OSC32KCTRL = ID_OSC32KCTRL,

    /* Instance Id for Peripheral OSCCTRL */
    PAC_PERIPHERAL_OSCCTRL = ID_OSCCTRL,

    /* Instance Id for Peripheral PAC */
    PAC_PERIPHERAL_PAC = ID_PAC,

    /* Instance Id for Peripheral PM */
    PAC_PERIPHERAL_PM = ID_PM,

    /* Instance Id for Peripheral PORT */
    PAC_PERIPHERAL_PORT = ID_PORT,

    /* Instance Id for Peripheral PRM */
    PAC_PERIPHERAL_PRM = ID_PRM,

    /* Instance Id for Peripheral PTC */
    PAC_PERIPHERAL_PTC = ID_PTC,

    /* Instance Id for Peripheral RSTC */
    PAC_PERIPHERAL_RSTC = ID_RSTC,

    /* Instance Id for Peripheral RTC */
    PAC_PERIPHERAL_RTC = ID_RTC,

    /* Instance Id for Peripheral SDMMC0 */
    PAC_PERIPHERAL_SDMMC0 = ID_SDMMC0,

    /* Instance Id for Peripheral SDMMC1 */
    PAC_PERIPHERAL_SDMMC1 = ID_SDMMC1,

    /* Instance Id for Peripheral SERCOM0 */
    PAC_PERIPHERAL_SERCOM0 = ID_SERCOM0,

    /* Instance Id for Peripheral SERCOM1 */
    PAC_PERIPHERAL_SERCOM1 = ID_SERCOM1,

    /* Instance Id for Peripheral SERCOM2 */
    PAC_PERIPHERAL_SERCOM2 = ID_SERCOM2,

    /* Instance Id for Peripheral SERCOM3 */
    PAC_PERIPHERAL_SERCOM3 = ID_SERCOM3,

    /* Instance Id for Peripheral SERCOM4 */
    PAC_PERIPHERAL_SERCOM4 = ID_SERCOM4,

    /* Instance Id for Peripheral SERCOM5 */
    PAC_PERIPHERAL_SERCOM5 = ID_SERCOM5,

    /* Instance Id for Peripheral SERCOM6 */
    PAC_PERIPHERAL_SERCOM6 = ID_SERCOM6,

    /* Instance Id for Peripheral SERCOM7 */
    PAC_PERIPHERAL_SERCOM7 = ID_SERCOM7,

    /* Instance Id for Peripheral SERCOM8 */
    PAC_PERIPHERAL_SERCOM8 = ID_SERCOM8,

    /* Instance Id for Peripheral SERCOM9 */
    PAC_PERIPHERAL_SERCOM9 = ID_SERCOM9,

    /* Instance Id for Peripheral SPI_IXS0 */
    PAC_PERIPHERAL_SPI_IXS0 = ID_SPI_IXS0,

    /* Instance Id for Peripheral SPI_IXS1 */
    PAC_PERIPHERAL_SPI_IXS1 = ID_SPI_IXS1,

    /* Instance Id for Peripheral SQI0 */
    PAC_PERIPHERAL_SQI0 = ID_SQI0,

    /* Instance Id for Peripheral SQI1 */
    PAC_PERIPHERAL_SQI1 = ID_SQI1,

    /* Instance Id for Peripheral SUPC */
    PAC_PERIPHERAL_SUPC = ID_SUPC,

    /* Instance Id for Peripheral TCC0 */
    PAC_PERIPHERAL_TCC0 = ID_TCC0,

    /* Instance Id for Peripheral TCC1 */
    PAC_PERIPHERAL_TCC1 = ID_TCC1,

    /* Instance Id for Peripheral TCC2 */
    PAC_PERIPHERAL_TCC2 = ID_TCC2,

    /* Instance Id for Peripheral TCC3 */
    PAC_PERIPHERAL_TCC3 = ID_TCC3,

    /* Instance Id for Peripheral TCC4 */
    PAC_PERIPHERAL_TCC4 = ID_TCC4,

    /* Instance Id for Peripheral TCC5 */
    PAC_PERIPHERAL_TCC5 = ID_TCC5,

    /* Instance Id for Peripheral TCC6 */
    PAC_PERIPHERAL_TCC6 = ID_TCC6,

    /* Instance Id for Peripheral TCC7 */
    PAC_PERIPHERAL_TCC7 = ID_TCC7,

    /* Instance Id for Peripheral TCC8 */
    PAC_PERIPHERAL_TCC8 = ID_TCC8,

    /* Instance Id for Peripheral TCC9 */
    PAC_PERIPHERAL_TCC9 = ID_TCC9,

    /* Instance Id for Peripheral TRAM */
    PAC_PERIPHERAL_TRAM = ID_TRAM,

    /* Instance Id for Peripheral TRNG */
    PAC_PERIPHERAL_TRNG = ID_TRNG,

    /* Instance Id for Peripheral WDT */
    PAC_PERIPHERAL_WDT = ID_WDT,

    PAC_PERIPHERAL_NONE = -1

} PAC_PERIPHERAL;


// *****************************************************************************
// *****************************************************************************
// Section: Interface Routines
// *****************************************************************************
// *****************************************************************************

void PAC_Initialize( void );

void PAC_PeripheralProtectSetup( PAC_PERIPHERAL peripheral, PAC_PROTECTION operation );

bool PAC_PeripheralIsProtected( PAC_PERIPHERAL peripheral );


// DOM-IGNORE-BEGIN
#ifdef __cplusplus // Provide C++ Compatibility

    }

#endif
// DOM-IGNORE-END

#endif /* PLIB_PAC_H */
