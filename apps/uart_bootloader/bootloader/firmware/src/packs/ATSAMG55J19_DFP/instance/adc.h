/*
 * Instance header file for ATSAMG55J19
 *
 * Copyright (c) 2023 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2023-04-11T10:29:29Z */
#ifndef _SAMG55_ADC_INSTANCE_
#define _SAMG55_ADC_INSTANCE_


/* ========== Instance Parameter definitions for ADC peripheral ========== */
#define ADC_CLOCK_ID                             (29)       
#define ADC_DMAC_ID_RX                           (6)        
#define ADC_INSTANCE_ID                          (29)       
#define ADC_SRCCLK_PERIPH_CLK                    (0x0)      /* MCK */
#define ADC_SRCCLK_PMC_PCK                       (0x1)      /* PCK5 */
#define ADC_TRGSEL_ADC_TRIG0                     (0x0)      /* External ADC Trigger Input (ADTRG pin) */
#define ADC_TRGSEL_ADC_TRIG1                     (0x1)      /* TC0 Channel 0 Output (TIOA0) */
#define ADC_TRGSEL_ADC_TRIG2                     (0x2)      /* TC0 Channel 1 Output (TIOA1) */
#define ADC_TRGSEL_ADC_TRIG3                     (0x3)      /* TC0 Channel 2 Output (TIOA2) */
#define ADC_TRGSEL_ADC_TRIG4                     (0x4)      /* RTCOUT0 */
#define ADC_TRGSEL_ADC_TRIG5                     (0x5)      /* RTT 16-bit prescaler output */
#define ADC_TRGSEL_ADC_TRIG6                     (0x6)      /* RTTEVENT */

#endif /* _SAMG55_ADC_INSTANCE_ */
