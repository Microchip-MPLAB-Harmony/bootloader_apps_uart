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
#ifndef _PIC32WM_BZ6_CVD_INSTANCE_
#define _PIC32WM_BZ6_CVD_INSTANCE_


/* ========== Instance Parameter definitions for CVD peripheral ========== */
#define CVD_ADCBITS                              (12)       /* Number of bits in the ADC data. Max is 16-bit. */
#define CVD_AN_MAX                               (18)       /* Max number of AN input index */
#define CVD_AN_MIN                               (0)        /* Min number of AN input index */
#define CVD_FIFO_DEPTH                           (32)       /* Number of words in the UPB FIFO. Max is 1KThe depth of the UPB FIFO is limited to "powers of 2".Allowable values are: 8, 16, 32, 64, 128, 256, 512, 1K */
#define CVD_TX_NUM                               (18)       /* Number of TX outputs on the device. Max of 64 */
#define CVD_GCLK_ID                              (31)       
#define CVD_NUM_ADC                              (1)        
#define CVD_NUM_RX                               (20)       /* Number of RX Indexes. */
#define CVD_NUM_TX                               (20)       /* Number of TX Indexes. */
#define CVD_UPB_ADDRL                            (0x2400)   /* Start address of UPB registers */

#endif /* _PIC32WM_BZ6_CVD_INSTANCE_ */
