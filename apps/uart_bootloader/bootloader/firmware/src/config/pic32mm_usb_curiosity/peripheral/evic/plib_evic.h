/*******************************************************************************
  EVIC PLIB Header

  Company:
    Microchip Technology Inc.

  File Name:
    plib_evic.h

  Summary:
    PIC32MZ Interrupt Module PLIB Header File

  Description:
    None

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

#ifndef PLIB_EVIC_H
#define PLIB_EVIC_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
#include <device.h>
#include <stddef.h>
#include <stdbool.h>
#include <device.h>

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif
// DOM-IGNORE-END



// *****************************************************************************
// *****************************************************************************
// Section: Data Types
// *****************************************************************************
// *****************************************************************************

/* MISRAC 2012 deviation block start */
/* MISRA C-2012 Rule 5.4 deviated: 5  Deviation record ID -  H3_MISRAC_2012_R_5_4_DR_1 */
#define    INT_SOURCE_CORE_TIMER   (_CORE_TIMER_VECTOR)

#define    INT_SOURCE_CORE_SOFTWARE_0   (_CORE_SOFTWARE_0_VECTOR)

#define    INT_SOURCE_CORE_SOFTWARE_1   (_CORE_SOFTWARE_1_VECTOR)

#define    INT_SOURCE_EXTERNAL_0   (_EXTERNAL_0_VECTOR)

#define    INT_SOURCE_EXTERNAL_1   (_EXTERNAL_1_VECTOR)

#define    INT_SOURCE_EXTERNAL_2   (_EXTERNAL_2_VECTOR)

#define    INT_SOURCE_EXTERNAL_3   (_EXTERNAL_3_VECTOR)

#define    INT_SOURCE_EXTERNAL_4   (_EXTERNAL_4_VECTOR)

#define    INT_SOURCE_CHANGE_NOTICE_A   (_CHANGE_NOTICE_A_VECTOR)

#define    INT_SOURCE_CHANGE_NOTICE_B   (_CHANGE_NOTICE_B_VECTOR)

#define    INT_SOURCE_CHANGE_NOTICE_C   (_CHANGE_NOTICE_C_VECTOR)

#define    INT_SOURCE_CHANGE_NOTICE_D   (_CHANGE_NOTICE_D_VECTOR)

#define    INT_SOURCE_TIMER_1   (_TIMER_1_VECTOR)

#define    INT_SOURCE_TIMER_2   (_TIMER_2_VECTOR)

#define    INT_SOURCE_TIMER_3   (_TIMER_3_VECTOR)

#define    INT_SOURCE_COMPARATOR_1   (_COMPARATOR_1_VECTOR)

#define    INT_SOURCE_COMPARATOR_2   (_COMPARATOR_2_VECTOR)

#define    INT_SOURCE_COMPARATOR_3   (_COMPARATOR_3_VECTOR)

#define    INT_SOURCE_USB   (_USB_VECTOR)

#define    INT_SOURCE_RTCC   (_RTCC_VECTOR)

#define    INT_SOURCE_ADC   (_ADC_VECTOR)

#define    INT_SOURCE_HLVD   (_HLVD_VECTOR)

#define    INT_SOURCE_CLC1   (_CLC1_VECTOR)

#define    INT_SOURCE_CLC2   (_CLC2_VECTOR)

#define    INT_SOURCE_CLC3   (_CLC3_VECTOR)

#define    INT_SOURCE_CLC4   (_CLC4_VECTOR)

#define    INT_SOURCE_SPI1_ERR   (_SPI1_ERR_VECTOR)

#define    INT_SOURCE_SPI1_TX   (_SPI1_TX_VECTOR)

#define    INT_SOURCE_SPI1_RX   (_SPI1_RX_VECTOR)

#define    INT_SOURCE_SPI2_ERR   (_SPI2_ERR_VECTOR)

#define    INT_SOURCE_SPI2_TX   (_SPI2_TX_VECTOR)

#define    INT_SOURCE_SPI2_RX   (_SPI2_RX_VECTOR)

#define    INT_SOURCE_SPI3_ERR   (_SPI3_ERR_VECTOR)

#define    INT_SOURCE_SPI3_TX   (_SPI3_TX_VECTOR)

#define    INT_SOURCE_SPI3_RX   (_SPI3_RX_VECTOR)

#define    INT_SOURCE_UART1_RX   (_UART1_RX_VECTOR)

#define    INT_SOURCE_UART1_TX   (_UART1_TX_VECTOR)

#define    INT_SOURCE_UART1_ERR   (_UART1_ERR_VECTOR)

#define    INT_SOURCE_UART2_RX   (_UART2_RX_VECTOR)

#define    INT_SOURCE_UART2_TX   (_UART2_TX_VECTOR)

#define    INT_SOURCE_UART2_ERR   (_UART2_ERR_VECTOR)

#define    INT_SOURCE_UART3_RX   (_UART3_RX_VECTOR)

#define    INT_SOURCE_UART3_TX   (_UART3_TX_VECTOR)

#define    INT_SOURCE_UART3_ERR   (_UART3_ERR_VECTOR)

#define    INT_SOURCE_I2C1_SLAVE   (_I2C1_SLAVE_VECTOR)

#define    INT_SOURCE_I2C1_MASTER   (_I2C1_MASTER_VECTOR)

#define    INT_SOURCE_I2C1_BUS   (_I2C1_BUS_VECTOR)

#define    INT_SOURCE_I2C2_SLAVE   (_I2C2_SLAVE_VECTOR)

#define    INT_SOURCE_I2C2_MASTER   (_I2C2_MASTER_VECTOR)

#define    INT_SOURCE_I2C2_BUS   (_I2C2_BUS_VECTOR)

#define    INT_SOURCE_I2C3_SLAVE   (_I2C3_SLAVE_VECTOR)

#define    INT_SOURCE_I2C3_MASTER   (_I2C3_MASTER_VECTOR)

#define    INT_SOURCE_I2C3_BUS   (_I2C3_BUS_VECTOR)

#define    INT_SOURCE_CCP1   (_CCP1_VECTOR)

#define    INT_SOURCE_CCT1   (_CCT1_VECTOR)

#define    INT_SOURCE_CCP2   (_CCP2_VECTOR)

#define    INT_SOURCE_CCT2   (_CCT2_VECTOR)

#define    INT_SOURCE_CCP3   (_CCP3_VECTOR)

#define    INT_SOURCE_CCT3   (_CCT3_VECTOR)

#define    INT_SOURCE_CCP4   (_CCP4_VECTOR)

#define    INT_SOURCE_CCT4   (_CCT4_VECTOR)

#define    INT_SOURCE_CCP5   (_CCP5_VECTOR)

#define    INT_SOURCE_CCT5   (_CCT5_VECTOR)

#define    INT_SOURCE_CCP6   (_CCP6_VECTOR)

#define    INT_SOURCE_CCT6   (_CCT6_VECTOR)

#define    INT_SOURCE_CCP7   (_CCP7_VECTOR)

#define    INT_SOURCE_CCT7   (_CCT7_VECTOR)

#define    INT_SOURCE_CCP8   (_CCP8_VECTOR)

#define    INT_SOURCE_CCT8   (_CCT8_VECTOR)

#define    INT_SOURCE_CCP9   (_CCP9_VECTOR)

#define    INT_SOURCE_CCT9   (_CCT9_VECTOR)

#define    INT_SOURCE_FRC_TUNE   (_FRC_TUNE_VECTOR)

#define    INT_SOURCE_NVM   (_NVM_VECTOR)

#define    INT_SOURCE_PERFORMANCE_COUNTER   (_PERFORMANCE_COUNTER_VECTOR)

#define    INT_SOURCE_ECCSB_ERR   (_ECCSB_ERR_VECTOR)

#define    INT_SOURCE_DMA0   (_DMA0_VECTOR)

#define    INT_SOURCE_DMA1   (_DMA1_VECTOR)

#define    INT_SOURCE_DMA2   (_DMA2_VECTOR)

#define    INT_SOURCE_DMA3   (_DMA3_VECTOR)

    /* MISRAC 2012 deviation block end */
typedef uint32_t INT_SOURCE;


// *****************************************************************************
// *****************************************************************************
// Section: Interface Routines
// *****************************************************************************
// *****************************************************************************

void EVIC_Initialize ( void );

void EVIC_SourceEnable( INT_SOURCE source );

void EVIC_SourceDisable( INT_SOURCE source );

bool EVIC_SourceIsEnabled( INT_SOURCE source );

bool EVIC_SourceStatusGet( INT_SOURCE source );

void EVIC_SourceStatusSet( INT_SOURCE source );

void EVIC_SourceStatusClear( INT_SOURCE source );

void EVIC_INT_Enable( void );

bool EVIC_INT_Disable( void );

void EVIC_INT_Restore( bool state );

bool EVIC_INT_SourceDisable( INT_SOURCE source );

void EVIC_INT_SourceRestore( INT_SOURCE source, bool status );


// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    }

#endif
// DOM-IGNORE-END

#endif // PLIB_EVIC_H
