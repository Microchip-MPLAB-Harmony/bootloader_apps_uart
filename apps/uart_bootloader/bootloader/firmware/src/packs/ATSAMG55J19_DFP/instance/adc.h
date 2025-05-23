/*
 * Instance header file for ATSAMG55J19
 *
 * Copyright (c) 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/* file generated from device description file (ATDF) version 2023-08-02T16:53:21Z */
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
