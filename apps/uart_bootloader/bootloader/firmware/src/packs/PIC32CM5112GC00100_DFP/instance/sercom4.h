/*
 * Instance header file for PIC32CM5112GC00100
 *
 * Copyright (c) 2024 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description file (ATDF) version 2024-07-26T17:56:39Z */
#ifndef _PIC32CMGC00_SERCOM4_INSTANCE_
#define _PIC32CMGC00_SERCOM4_INSTANCE_


/* ========== Instance Parameter definitions for SERCOM4 peripheral ========== */
#define SERCOM4_BRIDGE_ID                        (1)        /* H2PB Bridge ID */
#define SERCOM4_CLK_REDUCTION                    (1)        /* Reduce clock options to pin 1 for SPI and USART */
#define SERCOM4_DMA                              (1)        /* DMA support implemented? */
#define SERCOM4_DMAC_ID_RX                       (24)       
#define SERCOM4_DMAC_ID_TX                       (25)       
#define SERCOM4_FIFO_IMPLEMENTED                 (1)        /* FIFO Rx/Tx implemented? */
#define SERCOM4_FIFO_SIZE                        (16)       /* Rx-Tx FIFO size in bytes */
#define SERCOM4_FSYNC_IMPLEMENTED                (1)        /* SPI Frame Synch mode implemented? */
#define SERCOM4_GCLK_ID_CORE                     (28)       
#define SERCOM4_INSTANCE_ID                      (34)       /* Instance index for SERCOM4 */
#define SERCOM4_MCLK_ID_APB                      (44)       /* Index for SERCOM4 APB clock */
#define SERCOM4_PAC_ID                           (34)       /* Index for SERCOM4 registers write protection */
#define SERCOM4_PERIPH_ID                        (16)       /* H2PB Peripheral ID */
#define SERCOM4_SPI                              (1)        /* SPI mode implemented? */
#define SERCOM4_TWIM                             (0)        /* TWI Master mode implemented? */
#define SERCOM4_TWIS                             (0)        /* TWI Slave mode implemented? */
#define SERCOM4_TWI_HSMODE                       (0)        /* TWI HighSpeed mode implemented? */
#define SERCOM4_ULTRA_IMPLEMENTATION             (0)        /* ULTRA platform compatibility? */
#define SERCOM4_USART                            (1)        /* USART mode implemented? */
#define SERCOM4_USART_AUTOBAUD                   (1)        /* USART autobaud implemented? */
#define SERCOM4_USART_IRDA                       (1)        /* USART IrDA implemented? */
#define SERCOM4_USART_LIN_MASTER                 (1)        /* USART LIN Master mode implemented? */
#define SERCOM4_USART_RS485                      (1)        /* USART RS485 mode implemented? */

#endif /* _PIC32CMGC00_SERCOM4_INSTANCE_ */
