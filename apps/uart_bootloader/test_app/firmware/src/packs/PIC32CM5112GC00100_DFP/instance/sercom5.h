/*
 * Instance header file for PIC32CM5112GC00100
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

/* file generated from device description file (ATDF) version 2024-11-05T16:47:43Z */
#ifndef _PIC32CMGC00_SERCOM5_INSTANCE_
#define _PIC32CMGC00_SERCOM5_INSTANCE_


/* ========== Instance Parameter definitions for SERCOM5 peripheral ========== */
#define SERCOM5_BRIDGE_ID                        (1)        /* H2PB Bridge ID */
#define SERCOM5_CLK_REDUCTION                    (1)        /* Reduce clock options to pin 1 for SPI and USART */
#define SERCOM5_DMA                              (1)        /* DMA support implemented? */
#define SERCOM5_DMAC_ID_RX                       (26)       
#define SERCOM5_DMAC_ID_TX                       (27)       
#define SERCOM5_FIFO_IMPLEMENTED                 (1)        /* FIFO Rx/Tx implemented? */
#define SERCOM5_FIFO_SIZE                        (16)       /* Rx-Tx FIFO size in bytes */
#define SERCOM5_FSYNC_IMPLEMENTED                (1)        /* SPI Frame Synch mode implemented? */
#define SERCOM5_GCLK_ID_CORE                     (29)       
#define SERCOM5_INSTANCE_ID                      (35)       /* Instance index for SERCOM5 */
#define SERCOM5_MCLK_ID_APB                      (45)       /* Index for SERCOM5 APB clock */
#define SERCOM5_PAC_ID                           (35)       /* Index for SERCOM5 registers write protection */
#define SERCOM5_PERIPH_ID                        (17)       /* H2PB Peripheral ID */
#define SERCOM5_SPI                              (1)        /* SPI mode implemented? */
#define SERCOM5_TWIM                             (0)        /* TWI Master mode implemented? */
#define SERCOM5_TWIS                             (0)        /* TWI Slave mode implemented? */
#define SERCOM5_ULTRA_IMPLEMENTATION             (0)        /* ULTRA platform compatibility? */
#define SERCOM5_USART                            (1)        /* USART mode implemented? */
#define SERCOM5_USART_AUTOBAUD                   (1)        /* USART autobaud implemented? */
#define SERCOM5_USART_IRDA                       (1)        /* USART IrDA implemented? */
#define SERCOM5_USART_LIN_MASTER                 (1)        /* USART LIN Master mode implemented? */
#define SERCOM5_USART_RS485                      (1)        /* USART RS485 mode implemented? */

#endif /* _PIC32CMGC00_SERCOM5_INSTANCE_ */
