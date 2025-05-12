/*
 * Instance header file for ATSAMA7G54D4G
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

/* file generated from device description file (ATDF) version None */
#ifndef _SAMA7G5_TC1_INSTANCE_
#define _SAMA7G5_TC1_INSTANCE_


/* ========== Instance Parameter definitions for TC1 peripheral ========== */
#define TC1_CLOCK_ID_CHANNEL0                    (91)       
#define TC1_CLOCK_ID_CHANNEL1                    (92)       
#define TC1_CLOCK_ID_CHANNEL2                    (93)       
#define TC1_DMAC_ID_RX                           (52)       
#define TC1_INSTANCE_ID_CHANNEL0                 (91)       /* 32-bit Timer Counter 1 Channel 0 */
#define TC1_INSTANCE_ID_CHANNEL1                 (92)       /* 32-bit Timer Counter 1 Channel 1 interrupt */
#define TC1_INSTANCE_ID_CHANNEL2                 (93)       /* 32-bit Timer Counter 1 Channel 2 interrupt */
#define TC1_INSTANCE_ID_SINT0                    (148)      /* 32-bit Timer Counter 1 Channel 0, Secure INTerrupt */
#define TC1_INSTANCE_ID_SINT1                    (149)      /* 32-bit Timer Counter 1 Channel 1, Secure INTerrupt */
#define TC1_INSTANCE_ID_SINT2                    (150)      /* 32-bit Timer Counter 1 Channel 2, Secure INTerrupt */
#define TC1_NUM_INTERRUPT_LINES                  (3)        /* Number of interrupt lines */
#define TC1_TCCLKS_TIMER_CLOCK1                  (0)        /* GCLK */
#define TC1_TCCLKS_TIMER_CLOCK2                  (1)        /* MCK0/8 */
#define TC1_TCCLKS_TIMER_CLOCK3                  (2)        /* MCK0/32 */
#define TC1_TCCLKS_TIMER_CLOCK4                  (3)        /* MCK0/128 */
#define TC1_TCCLKS_TIMER_CLOCK5                  (4)        /* TD_SLCK */
#define TC1_TCCLKS_XC0                           (5)        /* XC0 */
#define TC1_TCCLKS_XC1                           (6)        /* XC1 */
#define TC1_TCCLKS_XC2                           (7)        /* XC2 */
#define TC1_TIMER_WIDTH                          (32)       /* Timer width */

#endif /* _SAMA7G5_TC1_INSTANCE_ */
