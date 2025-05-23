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
#ifndef _PIC32CMGC00_SERCOM0_INSTANCE_
#define _PIC32CMGC00_SERCOM0_INSTANCE_


/* ========== Instance Parameter definitions for SERCOM0 peripheral ========== */
#define SERCOM0_BRIDGE_ID                        (1)        /* H2PB Bridge ID */
#define SERCOM0_CLK_REDUCTION                    (1)        /* Reduce clock options to pin 1 for SPI and USART */
#define SERCOM0_DMA                              (1)        /* DMA support implemented? */
#define SERCOM0_DMAC_ID_RX                       (4)        
#define SERCOM0_DMAC_ID_TX                       (5)        
#define SERCOM0_FIFO_IMPLEMENTED                 (1)        /* FIFO Rx/Tx implemented? */
#define SERCOM0_FIFO_SIZE                        (16)       /* Rx-Tx FIFO size in bytes */
#define SERCOM0_FSYNC_IMPLEMENTED                (1)        /* SPI Frame Synch mode implemented? */
#define SERCOM0_GCLK_ID_CORE                     (21)       
#define SERCOM0_GCLK_ID_SLOW                     (20)       
#define SERCOM0_INSTANCE_ID                      (26)       /* Instance index for SERCOM0 */
#define SERCOM0_MCLK_ID_APB                      (36)       /* Index for SERCOM0 APB clock */
#define SERCOM0_PAC_ID                           (26)       /* Index for SERCOM0 registers write protection */
#define SERCOM0_PERIPH_ID                        (4)        /* H2PB Peripheral ID */
#define SERCOM0_SPI                              (1)        /* SPI mode implemented? */
#define SERCOM0_TWIM                             (1)        /* TWI Master mode implemented? */
#define SERCOM0_TWIS                             (1)        /* TWI Slave mode implemented? */
#define SERCOM0_ULTRA_IMPLEMENTATION             (0)        /* ULTRA platform compatibility? */
#define SERCOM0_USART                            (1)        /* USART mode implemented? */
#define SERCOM0_USART_AUTOBAUD                   (1)        /* USART autobaud implemented? */
#define SERCOM0_USART_IRDA                       (1)        /* USART IrDA implemented? */
#define SERCOM0_USART_LIN_MASTER                 (1)        /* USART LIN Master mode implemented? */
#define SERCOM0_USART_RS485                      (1)        /* USART RS485 mode implemented? */

#endif /* _PIC32CMGC00_SERCOM0_INSTANCE_ */
