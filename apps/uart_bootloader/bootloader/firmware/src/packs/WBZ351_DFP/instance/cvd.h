/*
 * Instance header file for WBZ351
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

/* file generated from device description version 2023-04-11T16:47:17Z */
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
