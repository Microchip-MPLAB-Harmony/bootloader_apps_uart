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
#ifndef _WBZ35_CVD_INSTANCE_
#define _WBZ35_CVD_INSTANCE_


/* ========== Instance Parameter definitions for CVD peripheral ========== */
#define CVD_ADCBITS                              (12)       /* Number of bits in the ADC data. Max is 16-bit. */
#define CVD_AN_MAX                               (7)        /* Highest AN input on the device used for CVD. The channels must be a subset or equal to the shared ADC input channels. Max of 63 */
#define CVD_AN_MIN                               (0)        /* Highest AN input on the device used for CVD. The channels must be a subset or equal to the shared ADC input channels. */
#define CVD_FIFO_DEPTH                           (8)        /* Number of words in the UPB FIFO. Max is 1KThe depth of the UPB FIFO is limited to "powers of 2".Allowable values are: 8, 16, 32, 64, 128, 256, 512, 1K */
#define CVD_TX_NUM                               (8)        /* Number of TX outputs on the device. Max of 64 */
#define CVD_NUM_ADC                              (1)        
#define CVD_NUM_RX                               (8)        /* Number of RX Indexes. Valid settings are multiples of 4, and must be equal to or greater than 1+CVD_AN_MAX-CVD_AN_MIN */
#define CVD_NUM_TX                               (8)        /* Number of TX Indexes. Valid settings are multiples of 4 */
#define CVD_UPB_ADDRL                            (2400)     /* Start address of UPB registers */

#endif /* _WBZ35_CVD_INSTANCE_ */
