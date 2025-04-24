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
#ifndef _PIC32WM_BZ6_EIC_INSTANCE_
#define _PIC32WM_BZ6_EIC_INSTANCE_


/* ========== Instance Parameter definitions for EIC peripheral ========== */
#define EIC_CHIP_EIC_EXTINT_NUM                  (4)        
#define EIC_CHIP_EIC_NMISENSE_DEFAULT_VALUE      (3)        
#define EIC_CHIP_EIC_NMI_FORCE_DETECTION         (0)        
#define EIC_CHIP_EIC_NUMBER_OF_CONFIG_REGS       (1)        /* (CHIP_EIC_EXTINT_NUM+7)/8 */
#define EIC_CHIP_EIC_NUMBER_OF_DPRESCALER_REGS   (1)        /* (CHIP_EIC_EXTINT_NUM+7)/8 */
#define EIC_CHIP_EIC_NUMBER_OF_INTERRUPTS        (4)        /* CHIP_EIC_EXTINT_NUM */
#define EIC_CHIP_EIC_PADDR_MSB                   (9)        
#define EIC_GCLK_ID                              (0)        
#define EIC_INSTANCE_ID                          (2)        /* Instance index for EIC */
#define EIC_PAC_ID                               (2)        /* Index for EIC registers write protection */

#endif /* _PIC32WM_BZ6_EIC_INSTANCE_ */
