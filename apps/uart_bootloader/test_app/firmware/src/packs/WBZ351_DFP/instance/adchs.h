/*
 * Instance header file for WBZ351
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

/* file generated from device description file (ATDF) version 2024-02-12T06:36:14Z */
#ifndef _WBZ35_ADCHS_INSTANCE_
#define _WBZ35_ADCHS_INSTANCE_


/* ========== Instance Parameter definitions for ADCHS peripheral ========== */
#define ADCHS_ADC_32BIT_OUTPUT_DATA              (1)        /* 32-bit wide register data */
#define ADCHS_ADC_32BIT_REG_ADDR                 (1)        /* 32-bit wide registers */
#define ADCHS_ADC_BVCI_ADDR_WIDTH                (15)       
#define ADCHS_ADC_BVCI_FIFO_DEPTH                (16)       
#define ADCHS_ADC_BVCI_PORT_PRESENT              (1)        
#define ADCHS_ADC_CORES_NMBR                     (1)        /* Number of SARCOREs */
#define ADCHS_ADC_CORE_CALIBRATE_TIME            (81)       /* from Rio-2 */
#define ADCHS_ADC_CVD_PRESENT                    (1)        /* CVD present */
#define ADCHS_ADC_DCMP_NMBR                      (2)        
#define ADCHS_ADC_EARLY_INTR_PRESENT             (0)        /* No early interrupts */
#define ADCHS_ADC_EXTERN_ANALOG_IP               (0)        /* Microchip SARCORE */
#define ADCHS_ADC_FCC_NMBR                       (0)        /* No 1st class channels present */
#define ADCHS_ADC_FLTR_NMBR                      (2)        
#define ADCHS_ADC_INPUTS_NMBR                    (12)       /* Number of Analog ADC Channels */
#define ADCHS_ADC_INTR_NMBR                      (114)      
#define ADCHS_ADC_ITRIG_NMBR                     (6)        
#define ADCHS_ADC_UPB_FIFO_DEPTH                 (0)        
#define ADCHS_ADC_UPB_FIFO_PRESENT               (0)        /* FIFO present */
#define ADCHS_ADC_USE_SYNP_MUX                   (0)        /* Microchip SARCORE */
#define ADCHS_ADC_VREF_STARTUP_TIME              (50)       /* from Rio-2 */
#define ADCHS_AIN_10                             (10)       /* VBAT/2 (internal AN10) */
#define ADCHS_AIN_11                             (11)       /* VDD33/2 (internal AN11) */
#define ADCHS_AIN_8                              (8)        /* BandGap Reference (internal AN8) */
#define ADCHS_AIN_9                              (9)        /* IVref 1.2V (internal AN9) */
#define ADCHS_NUM_INTS                           (2)        
#define ADCHS_SET_CLR_INV_PRESENT                (1)        /* Present */

#endif /* _WBZ35_ADCHS_INSTANCE_ */
