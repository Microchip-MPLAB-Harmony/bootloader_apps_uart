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
#ifndef _PIC32CMGC00_SERCOM1_INSTANCE_
#define _PIC32CMGC00_SERCOM1_INSTANCE_


/* ========== Instance Parameter definitions for SERCOM1 peripheral ========== */
#define SERCOM1_BRIDGE_ID                        (1)        /* H2PB Bridge ID */
#define SERCOM1_CLK_REDUCTION                    (1)        /* Reduce clock options to pin 1 for SPI and USART */
#define SERCOM1_DMA                              (1)        /* DMA support implemented? */
#define SERCOM1_DMAC_ID_RX                       (6)        
#define SERCOM1_DMAC_ID_TX                       (7)        
#define SERCOM1_FIFO_IMPLEMENTED                 (1)        /* FIFO Rx/Tx implemented? */
#define SERCOM1_FIFO_SIZE                        (16)       /* Rx-Tx FIFO size in bytes */
#define SERCOM1_FSYNC_IMPLEMENTED                (1)        /* SPI Frame Synch mode implemented? */
#define SERCOM1_GCLK_ID_CORE                     (22)       
#define SERCOM1_GCLK_ID_SLOW                     (20)       
#define SERCOM1_INSTANCE_ID                      (27)       /* Instance index for SERCOM1 */
#define SERCOM1_MCLK_ID_APB                      (37)       /* Index for SERCOM1 APB clock */
#define SERCOM1_PAC_ID                           (27)       /* Index for SERCOM1 registers write protection */
#define SERCOM1_PERIPH_ID                        (5)        /* H2PB Peripheral ID */
#define SERCOM1_SPI                              (1)        /* SPI mode implemented? */
#define SERCOM1_TWIM                             (1)        /* TWI Master mode implemented? */
#define SERCOM1_TWIS                             (1)        /* TWI Slave mode implemented? */
#define SERCOM1_TWI_HSMODE                       (1)        /* TWI HighSpeed mode implemented? */
#define SERCOM1_ULTRA_IMPLEMENTATION             (0)        /* ULTRA platform compatibility? */
#define SERCOM1_USART                            (1)        /* USART mode implemented? */
#define SERCOM1_USART_AUTOBAUD                   (1)        /* USART autobaud implemented? */
#define SERCOM1_USART_IRDA                       (1)        /* USART IrDA implemented? */
#define SERCOM1_USART_LIN_MASTER                 (1)        /* USART LIN Master mode implemented? */
#define SERCOM1_USART_RS485                      (1)        /* USART RS485 mode implemented? */

#endif /* _PIC32CMGC00_SERCOM1_INSTANCE_ */
