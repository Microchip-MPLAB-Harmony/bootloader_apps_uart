/*
 * Instance header file for PIC32WM_BZ6204
 *
 * Copyright (c) 2025 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
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

/* file generated from device description file (ATDF) version 2025-01-29T18:23:31Z */
#ifndef _PIC32WM_BZ6_ADCHS_INSTANCE_
#define _PIC32WM_BZ6_ADCHS_INSTANCE_


/* ========== Instance Parameter definitions for ADCHS peripheral ========== */
#define ADCHS_ADC_32BIT_OUTPUT_DATA              (1)        /* If set to 1, the output data is 32-bit wide */
#define ADCHS_ADC_32BIT_REG_ADDR                 (1)        /* Specifies 32-bit data register addressing. */
#define ADCHS_ADC_BVCI_ADDR_WIDTH                (15)       /* Width in bits for the BVCI address offset. */
#define ADCHS_ADC_BVCI_FIFO_DEPTH                (16)       /* Number of words in DMA BVCI FIFO */
#define ADCHS_ADC_BVCI_PORT_PRESENT              (1)        /* BVCI port is implemented. */
#define ADCHS_ADC_CORES_NMBR                     (2)        /* Total Number of SAR ADC Analog Cores */
#define ADCHS_ADC_CORE_CALIBRATE_TIME            (81)       /* Time in ADC clock cycles to perform a calibrate */
#define ADCHS_ADC_CVD_PRESENT                    (1)        /* CVD is present */
#define ADCHS_ADC_DCMP_NMBR                      (2)        /* Number of digital comparators to be implemented. */
#define ADCHS_ADC_EARLY_INTR_PRESENT             (0)        /* No early interrupts */
#define ADCHS_ADC_EXTERN_ANALOG_IP               (0)        /* ADC SAR Core is Microchip */
#define ADCHS_ADC_FCC_NMBR                       (1)        /* Number of First Class Analog Input Channels */
#define ADCHS_ADC_FLTR_NMBR                      (2)        /* Number of digital oversampling filters to implement. */
#define ADCHS_ADC_INPUTS_NMBR                    (23)       /* Number of analog inputs */
#define ADCHS_ADC_INTR_NMBR                      (114)      /* Number of Interrupt Source Signals */
#define ADCHS_ADC_ITRIG_NMBR                     (8)        /* Number of analog inputs */
#define ADCHS_ADC_UPB_FIFO_DEPTH                 (0)        /* Number of words in UPB FIFO */
#define ADCHS_ADC_UPB_FIFO_PRESENT               (0)        /* UPB FIFO is not present */
#define ADCHS_ADC_USE_SYNP_MUX                   (0)        /* ADC SAR Core is Microchip */
#define ADCHS_ADC_VREF_STARTUP_TIME              (50)       /* Time in ADC clock cycles to stabilize */
#define ADCHS_AIN_19                             (19)       /* BandGap Reference */
#define ADCHS_AIN_20                             (20)       /* ADC Charge Pump */
#define ADCHS_AIN_21                             (21)       /* VDD Core */
#define ADCHS_AIN_22                             (22)       /* VDD */
#define ADCHS_NUM_INTS                           (2)        
#define ADCHS_SET_CLR_INV_PRESENT                (1)        /* Present */

#endif /* _PIC32WM_BZ6_ADCHS_INSTANCE_ */
