/*
 * Component description for NMIC
 *
 * Copyright (c) 2022 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description version 2022-01-06T10:24:17Z */
#ifndef _SAMRH71_NMIC_COMPONENT_H_
#define _SAMRH71_NMIC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR NMIC                                         */
/* ************************************************************************** */

/* -------- NMIC_IER : (NMIC Offset: 0x00) ( /W 32) Interrupt Enable Register -------- */
#define NMIC_IER_NMI0_Pos                     _UINT32_(0)                                          /* (NMIC_IER) Non-maskable Interrupt 0 Enable Position */
#define NMIC_IER_NMI0_Msk                     (_UINT32_(0x1) << NMIC_IER_NMI0_Pos)                 /* (NMIC_IER) Non-maskable Interrupt 0 Enable Mask */
#define NMIC_IER_NMI0(value)                  (NMIC_IER_NMI0_Msk & (_UINT32_(value) << NMIC_IER_NMI0_Pos)) /* Assigment of value for NMI0 in the NMIC_IER register */
#define NMIC_IER_NMI1_Pos                     _UINT32_(1)                                          /* (NMIC_IER) Non-maskable Interrupt 1 Enable Position */
#define NMIC_IER_NMI1_Msk                     (_UINT32_(0x1) << NMIC_IER_NMI1_Pos)                 /* (NMIC_IER) Non-maskable Interrupt 1 Enable Mask */
#define NMIC_IER_NMI1(value)                  (NMIC_IER_NMI1_Msk & (_UINT32_(value) << NMIC_IER_NMI1_Pos)) /* Assigment of value for NMI1 in the NMIC_IER register */
#define NMIC_IER_NMI2_Pos                     _UINT32_(2)                                          /* (NMIC_IER) Non-maskable Interrupt 2 Enable Position */
#define NMIC_IER_NMI2_Msk                     (_UINT32_(0x1) << NMIC_IER_NMI2_Pos)                 /* (NMIC_IER) Non-maskable Interrupt 2 Enable Mask */
#define NMIC_IER_NMI2(value)                  (NMIC_IER_NMI2_Msk & (_UINT32_(value) << NMIC_IER_NMI2_Pos)) /* Assigment of value for NMI2 in the NMIC_IER register */
#define NMIC_IER_NMI3_Pos                     _UINT32_(3)                                          /* (NMIC_IER) Non-maskable Interrupt 3 Enable Position */
#define NMIC_IER_NMI3_Msk                     (_UINT32_(0x1) << NMIC_IER_NMI3_Pos)                 /* (NMIC_IER) Non-maskable Interrupt 3 Enable Mask */
#define NMIC_IER_NMI3(value)                  (NMIC_IER_NMI3_Msk & (_UINT32_(value) << NMIC_IER_NMI3_Pos)) /* Assigment of value for NMI3 in the NMIC_IER register */
#define NMIC_IER_NMI4_Pos                     _UINT32_(4)                                          /* (NMIC_IER) Non-maskable Interrupt 4 Enable Position */
#define NMIC_IER_NMI4_Msk                     (_UINT32_(0x1) << NMIC_IER_NMI4_Pos)                 /* (NMIC_IER) Non-maskable Interrupt 4 Enable Mask */
#define NMIC_IER_NMI4(value)                  (NMIC_IER_NMI4_Msk & (_UINT32_(value) << NMIC_IER_NMI4_Pos)) /* Assigment of value for NMI4 in the NMIC_IER register */
#define NMIC_IER_NMI5_Pos                     _UINT32_(5)                                          /* (NMIC_IER) Non-maskable Interrupt 5 Enable Position */
#define NMIC_IER_NMI5_Msk                     (_UINT32_(0x1) << NMIC_IER_NMI5_Pos)                 /* (NMIC_IER) Non-maskable Interrupt 5 Enable Mask */
#define NMIC_IER_NMI5(value)                  (NMIC_IER_NMI5_Msk & (_UINT32_(value) << NMIC_IER_NMI5_Pos)) /* Assigment of value for NMI5 in the NMIC_IER register */
#define NMIC_IER_NMI6_Pos                     _UINT32_(6)                                          /* (NMIC_IER) Non-maskable Interrupt 6 Enable Position */
#define NMIC_IER_NMI6_Msk                     (_UINT32_(0x1) << NMIC_IER_NMI6_Pos)                 /* (NMIC_IER) Non-maskable Interrupt 6 Enable Mask */
#define NMIC_IER_NMI6(value)                  (NMIC_IER_NMI6_Msk & (_UINT32_(value) << NMIC_IER_NMI6_Pos)) /* Assigment of value for NMI6 in the NMIC_IER register */
#define NMIC_IER_NMI7_Pos                     _UINT32_(7)                                          /* (NMIC_IER) Non-maskable Interrupt 7 Enable Position */
#define NMIC_IER_NMI7_Msk                     (_UINT32_(0x1) << NMIC_IER_NMI7_Pos)                 /* (NMIC_IER) Non-maskable Interrupt 7 Enable Mask */
#define NMIC_IER_NMI7(value)                  (NMIC_IER_NMI7_Msk & (_UINT32_(value) << NMIC_IER_NMI7_Pos)) /* Assigment of value for NMI7 in the NMIC_IER register */
#define NMIC_IER_NMI8_Pos                     _UINT32_(8)                                          /* (NMIC_IER) Non-maskable Interrupt 8 Enable Position */
#define NMIC_IER_NMI8_Msk                     (_UINT32_(0x1) << NMIC_IER_NMI8_Pos)                 /* (NMIC_IER) Non-maskable Interrupt 8 Enable Mask */
#define NMIC_IER_NMI8(value)                  (NMIC_IER_NMI8_Msk & (_UINT32_(value) << NMIC_IER_NMI8_Pos)) /* Assigment of value for NMI8 in the NMIC_IER register */
#define NMIC_IER_Msk                          _UINT32_(0x000001FF)                                 /* (NMIC_IER) Register Mask  */

#define NMIC_IER_NMI_Pos                      _UINT32_(0)                                          /* (NMIC_IER Position) Non-maskable Interrupt 8 Enable */
#define NMIC_IER_NMI_Msk                      (_UINT32_(0x1FF) << NMIC_IER_NMI_Pos)                /* (NMIC_IER Mask) NMI */
#define NMIC_IER_NMI(value)                   (NMIC_IER_NMI_Msk & (_UINT32_(value) << NMIC_IER_NMI_Pos)) 

/* -------- NMIC_IDR : (NMIC Offset: 0x04) ( /W 32) Interrupt Disable Register -------- */
#define NMIC_IDR_NMI0_Pos                     _UINT32_(0)                                          /* (NMIC_IDR) Non-maskable Interrupt 0 Disable Position */
#define NMIC_IDR_NMI0_Msk                     (_UINT32_(0x1) << NMIC_IDR_NMI0_Pos)                 /* (NMIC_IDR) Non-maskable Interrupt 0 Disable Mask */
#define NMIC_IDR_NMI0(value)                  (NMIC_IDR_NMI0_Msk & (_UINT32_(value) << NMIC_IDR_NMI0_Pos)) /* Assigment of value for NMI0 in the NMIC_IDR register */
#define NMIC_IDR_NMI1_Pos                     _UINT32_(1)                                          /* (NMIC_IDR) Non-maskable Interrupt 1 Disable Position */
#define NMIC_IDR_NMI1_Msk                     (_UINT32_(0x1) << NMIC_IDR_NMI1_Pos)                 /* (NMIC_IDR) Non-maskable Interrupt 1 Disable Mask */
#define NMIC_IDR_NMI1(value)                  (NMIC_IDR_NMI1_Msk & (_UINT32_(value) << NMIC_IDR_NMI1_Pos)) /* Assigment of value for NMI1 in the NMIC_IDR register */
#define NMIC_IDR_NMI2_Pos                     _UINT32_(2)                                          /* (NMIC_IDR) Non-maskable Interrupt 2 Disable Position */
#define NMIC_IDR_NMI2_Msk                     (_UINT32_(0x1) << NMIC_IDR_NMI2_Pos)                 /* (NMIC_IDR) Non-maskable Interrupt 2 Disable Mask */
#define NMIC_IDR_NMI2(value)                  (NMIC_IDR_NMI2_Msk & (_UINT32_(value) << NMIC_IDR_NMI2_Pos)) /* Assigment of value for NMI2 in the NMIC_IDR register */
#define NMIC_IDR_NMI3_Pos                     _UINT32_(3)                                          /* (NMIC_IDR) Non-maskable Interrupt 3 Disable Position */
#define NMIC_IDR_NMI3_Msk                     (_UINT32_(0x1) << NMIC_IDR_NMI3_Pos)                 /* (NMIC_IDR) Non-maskable Interrupt 3 Disable Mask */
#define NMIC_IDR_NMI3(value)                  (NMIC_IDR_NMI3_Msk & (_UINT32_(value) << NMIC_IDR_NMI3_Pos)) /* Assigment of value for NMI3 in the NMIC_IDR register */
#define NMIC_IDR_NMI4_Pos                     _UINT32_(4)                                          /* (NMIC_IDR) Non-maskable Interrupt 4 Disable Position */
#define NMIC_IDR_NMI4_Msk                     (_UINT32_(0x1) << NMIC_IDR_NMI4_Pos)                 /* (NMIC_IDR) Non-maskable Interrupt 4 Disable Mask */
#define NMIC_IDR_NMI4(value)                  (NMIC_IDR_NMI4_Msk & (_UINT32_(value) << NMIC_IDR_NMI4_Pos)) /* Assigment of value for NMI4 in the NMIC_IDR register */
#define NMIC_IDR_NMI5_Pos                     _UINT32_(5)                                          /* (NMIC_IDR) Non-maskable Interrupt 5 Disable Position */
#define NMIC_IDR_NMI5_Msk                     (_UINT32_(0x1) << NMIC_IDR_NMI5_Pos)                 /* (NMIC_IDR) Non-maskable Interrupt 5 Disable Mask */
#define NMIC_IDR_NMI5(value)                  (NMIC_IDR_NMI5_Msk & (_UINT32_(value) << NMIC_IDR_NMI5_Pos)) /* Assigment of value for NMI5 in the NMIC_IDR register */
#define NMIC_IDR_NMI6_Pos                     _UINT32_(6)                                          /* (NMIC_IDR) Non-maskable Interrupt 6 Disable Position */
#define NMIC_IDR_NMI6_Msk                     (_UINT32_(0x1) << NMIC_IDR_NMI6_Pos)                 /* (NMIC_IDR) Non-maskable Interrupt 6 Disable Mask */
#define NMIC_IDR_NMI6(value)                  (NMIC_IDR_NMI6_Msk & (_UINT32_(value) << NMIC_IDR_NMI6_Pos)) /* Assigment of value for NMI6 in the NMIC_IDR register */
#define NMIC_IDR_NMI7_Pos                     _UINT32_(7)                                          /* (NMIC_IDR) Non-maskable Interrupt 7 Disable Position */
#define NMIC_IDR_NMI7_Msk                     (_UINT32_(0x1) << NMIC_IDR_NMI7_Pos)                 /* (NMIC_IDR) Non-maskable Interrupt 7 Disable Mask */
#define NMIC_IDR_NMI7(value)                  (NMIC_IDR_NMI7_Msk & (_UINT32_(value) << NMIC_IDR_NMI7_Pos)) /* Assigment of value for NMI7 in the NMIC_IDR register */
#define NMIC_IDR_NMI8_Pos                     _UINT32_(8)                                          /* (NMIC_IDR) Non-maskable Interrupt 8 Disable Position */
#define NMIC_IDR_NMI8_Msk                     (_UINT32_(0x1) << NMIC_IDR_NMI8_Pos)                 /* (NMIC_IDR) Non-maskable Interrupt 8 Disable Mask */
#define NMIC_IDR_NMI8(value)                  (NMIC_IDR_NMI8_Msk & (_UINT32_(value) << NMIC_IDR_NMI8_Pos)) /* Assigment of value for NMI8 in the NMIC_IDR register */
#define NMIC_IDR_Msk                          _UINT32_(0x000001FF)                                 /* (NMIC_IDR) Register Mask  */

#define NMIC_IDR_NMI_Pos                      _UINT32_(0)                                          /* (NMIC_IDR Position) Non-maskable Interrupt 8 Disable */
#define NMIC_IDR_NMI_Msk                      (_UINT32_(0x1FF) << NMIC_IDR_NMI_Pos)                /* (NMIC_IDR Mask) NMI */
#define NMIC_IDR_NMI(value)                   (NMIC_IDR_NMI_Msk & (_UINT32_(value) << NMIC_IDR_NMI_Pos)) 

/* -------- NMIC_IAR : (NMIC Offset: 0x08) ( R/ 32) Interrupt Active Register -------- */
#define NMIC_IAR_NMI0_Pos                     _UINT32_(0)                                          /* (NMIC_IAR) Active Interrupt 0 Position */
#define NMIC_IAR_NMI0_Msk                     (_UINT32_(0x1) << NMIC_IAR_NMI0_Pos)                 /* (NMIC_IAR) Active Interrupt 0 Mask */
#define NMIC_IAR_NMI0(value)                  (NMIC_IAR_NMI0_Msk & (_UINT32_(value) << NMIC_IAR_NMI0_Pos)) /* Assigment of value for NMI0 in the NMIC_IAR register */
#define NMIC_IAR_NMI1_Pos                     _UINT32_(1)                                          /* (NMIC_IAR) Active Interrupt 1 Position */
#define NMIC_IAR_NMI1_Msk                     (_UINT32_(0x1) << NMIC_IAR_NMI1_Pos)                 /* (NMIC_IAR) Active Interrupt 1 Mask */
#define NMIC_IAR_NMI1(value)                  (NMIC_IAR_NMI1_Msk & (_UINT32_(value) << NMIC_IAR_NMI1_Pos)) /* Assigment of value for NMI1 in the NMIC_IAR register */
#define NMIC_IAR_NMI2_Pos                     _UINT32_(2)                                          /* (NMIC_IAR) Active Interrupt 2 Position */
#define NMIC_IAR_NMI2_Msk                     (_UINT32_(0x1) << NMIC_IAR_NMI2_Pos)                 /* (NMIC_IAR) Active Interrupt 2 Mask */
#define NMIC_IAR_NMI2(value)                  (NMIC_IAR_NMI2_Msk & (_UINT32_(value) << NMIC_IAR_NMI2_Pos)) /* Assigment of value for NMI2 in the NMIC_IAR register */
#define NMIC_IAR_NMI3_Pos                     _UINT32_(3)                                          /* (NMIC_IAR) Active Interrupt 3 Position */
#define NMIC_IAR_NMI3_Msk                     (_UINT32_(0x1) << NMIC_IAR_NMI3_Pos)                 /* (NMIC_IAR) Active Interrupt 3 Mask */
#define NMIC_IAR_NMI3(value)                  (NMIC_IAR_NMI3_Msk & (_UINT32_(value) << NMIC_IAR_NMI3_Pos)) /* Assigment of value for NMI3 in the NMIC_IAR register */
#define NMIC_IAR_NMI4_Pos                     _UINT32_(4)                                          /* (NMIC_IAR) Active Interrupt 4 Position */
#define NMIC_IAR_NMI4_Msk                     (_UINT32_(0x1) << NMIC_IAR_NMI4_Pos)                 /* (NMIC_IAR) Active Interrupt 4 Mask */
#define NMIC_IAR_NMI4(value)                  (NMIC_IAR_NMI4_Msk & (_UINT32_(value) << NMIC_IAR_NMI4_Pos)) /* Assigment of value for NMI4 in the NMIC_IAR register */
#define NMIC_IAR_NMI5_Pos                     _UINT32_(5)                                          /* (NMIC_IAR) Active Interrupt 5 Position */
#define NMIC_IAR_NMI5_Msk                     (_UINT32_(0x1) << NMIC_IAR_NMI5_Pos)                 /* (NMIC_IAR) Active Interrupt 5 Mask */
#define NMIC_IAR_NMI5(value)                  (NMIC_IAR_NMI5_Msk & (_UINT32_(value) << NMIC_IAR_NMI5_Pos)) /* Assigment of value for NMI5 in the NMIC_IAR register */
#define NMIC_IAR_NMI6_Pos                     _UINT32_(6)                                          /* (NMIC_IAR) Active Interrupt 6 Position */
#define NMIC_IAR_NMI6_Msk                     (_UINT32_(0x1) << NMIC_IAR_NMI6_Pos)                 /* (NMIC_IAR) Active Interrupt 6 Mask */
#define NMIC_IAR_NMI6(value)                  (NMIC_IAR_NMI6_Msk & (_UINT32_(value) << NMIC_IAR_NMI6_Pos)) /* Assigment of value for NMI6 in the NMIC_IAR register */
#define NMIC_IAR_NMI7_Pos                     _UINT32_(7)                                          /* (NMIC_IAR) Active Interrupt 7 Position */
#define NMIC_IAR_NMI7_Msk                     (_UINT32_(0x1) << NMIC_IAR_NMI7_Pos)                 /* (NMIC_IAR) Active Interrupt 7 Mask */
#define NMIC_IAR_NMI7(value)                  (NMIC_IAR_NMI7_Msk & (_UINT32_(value) << NMIC_IAR_NMI7_Pos)) /* Assigment of value for NMI7 in the NMIC_IAR register */
#define NMIC_IAR_NMI8_Pos                     _UINT32_(8)                                          /* (NMIC_IAR) Active Interrupt 8 Position */
#define NMIC_IAR_NMI8_Msk                     (_UINT32_(0x1) << NMIC_IAR_NMI8_Pos)                 /* (NMIC_IAR) Active Interrupt 8 Mask */
#define NMIC_IAR_NMI8(value)                  (NMIC_IAR_NMI8_Msk & (_UINT32_(value) << NMIC_IAR_NMI8_Pos)) /* Assigment of value for NMI8 in the NMIC_IAR register */
#define NMIC_IAR_Msk                          _UINT32_(0x000001FF)                                 /* (NMIC_IAR) Register Mask  */

#define NMIC_IAR_NMI_Pos                      _UINT32_(0)                                          /* (NMIC_IAR Position) Active Interrupt 8 */
#define NMIC_IAR_NMI_Msk                      (_UINT32_(0x1FF) << NMIC_IAR_NMI_Pos)                /* (NMIC_IAR Mask) NMI */
#define NMIC_IAR_NMI(value)                   (NMIC_IAR_NMI_Msk & (_UINT32_(value) << NMIC_IAR_NMI_Pos)) 

/* -------- NMIC_ISR : (NMIC Offset: 0x0C) ( R/ 32) Interrupt Status Register -------- */
#define NMIC_ISR_NMI0_Pos                     _UINT32_(0)                                          /* (NMIC_ISR) Non-maskable Interrupt Source 0 Pending (cleared on read) Position */
#define NMIC_ISR_NMI0_Msk                     (_UINT32_(0x1) << NMIC_ISR_NMI0_Pos)                 /* (NMIC_ISR) Non-maskable Interrupt Source 0 Pending (cleared on read) Mask */
#define NMIC_ISR_NMI0(value)                  (NMIC_ISR_NMI0_Msk & (_UINT32_(value) << NMIC_ISR_NMI0_Pos)) /* Assigment of value for NMI0 in the NMIC_ISR register */
#define NMIC_ISR_NMI1_Pos                     _UINT32_(1)                                          /* (NMIC_ISR) Non-maskable Interrupt Source 1 Pending (cleared on read) Position */
#define NMIC_ISR_NMI1_Msk                     (_UINT32_(0x1) << NMIC_ISR_NMI1_Pos)                 /* (NMIC_ISR) Non-maskable Interrupt Source 1 Pending (cleared on read) Mask */
#define NMIC_ISR_NMI1(value)                  (NMIC_ISR_NMI1_Msk & (_UINT32_(value) << NMIC_ISR_NMI1_Pos)) /* Assigment of value for NMI1 in the NMIC_ISR register */
#define NMIC_ISR_NMI2_Pos                     _UINT32_(2)                                          /* (NMIC_ISR) Non-maskable Interrupt Source 2 Pending (cleared on read) Position */
#define NMIC_ISR_NMI2_Msk                     (_UINT32_(0x1) << NMIC_ISR_NMI2_Pos)                 /* (NMIC_ISR) Non-maskable Interrupt Source 2 Pending (cleared on read) Mask */
#define NMIC_ISR_NMI2(value)                  (NMIC_ISR_NMI2_Msk & (_UINT32_(value) << NMIC_ISR_NMI2_Pos)) /* Assigment of value for NMI2 in the NMIC_ISR register */
#define NMIC_ISR_NMI3_Pos                     _UINT32_(3)                                          /* (NMIC_ISR) Non-maskable Interrupt Source 3 Pending (cleared on read) Position */
#define NMIC_ISR_NMI3_Msk                     (_UINT32_(0x1) << NMIC_ISR_NMI3_Pos)                 /* (NMIC_ISR) Non-maskable Interrupt Source 3 Pending (cleared on read) Mask */
#define NMIC_ISR_NMI3(value)                  (NMIC_ISR_NMI3_Msk & (_UINT32_(value) << NMIC_ISR_NMI3_Pos)) /* Assigment of value for NMI3 in the NMIC_ISR register */
#define NMIC_ISR_NMI4_Pos                     _UINT32_(4)                                          /* (NMIC_ISR) Non-maskable Interrupt Source 4 Pending (cleared on read) Position */
#define NMIC_ISR_NMI4_Msk                     (_UINT32_(0x1) << NMIC_ISR_NMI4_Pos)                 /* (NMIC_ISR) Non-maskable Interrupt Source 4 Pending (cleared on read) Mask */
#define NMIC_ISR_NMI4(value)                  (NMIC_ISR_NMI4_Msk & (_UINT32_(value) << NMIC_ISR_NMI4_Pos)) /* Assigment of value for NMI4 in the NMIC_ISR register */
#define NMIC_ISR_NMI5_Pos                     _UINT32_(5)                                          /* (NMIC_ISR) Non-maskable Interrupt Source 5 Pending (cleared on read) Position */
#define NMIC_ISR_NMI5_Msk                     (_UINT32_(0x1) << NMIC_ISR_NMI5_Pos)                 /* (NMIC_ISR) Non-maskable Interrupt Source 5 Pending (cleared on read) Mask */
#define NMIC_ISR_NMI5(value)                  (NMIC_ISR_NMI5_Msk & (_UINT32_(value) << NMIC_ISR_NMI5_Pos)) /* Assigment of value for NMI5 in the NMIC_ISR register */
#define NMIC_ISR_NMI6_Pos                     _UINT32_(6)                                          /* (NMIC_ISR) Non-maskable Interrupt Source 6 Pending (cleared on read) Position */
#define NMIC_ISR_NMI6_Msk                     (_UINT32_(0x1) << NMIC_ISR_NMI6_Pos)                 /* (NMIC_ISR) Non-maskable Interrupt Source 6 Pending (cleared on read) Mask */
#define NMIC_ISR_NMI6(value)                  (NMIC_ISR_NMI6_Msk & (_UINT32_(value) << NMIC_ISR_NMI6_Pos)) /* Assigment of value for NMI6 in the NMIC_ISR register */
#define NMIC_ISR_NMI7_Pos                     _UINT32_(7)                                          /* (NMIC_ISR) Non-maskable Interrupt Source 7 Pending (cleared on read) Position */
#define NMIC_ISR_NMI7_Msk                     (_UINT32_(0x1) << NMIC_ISR_NMI7_Pos)                 /* (NMIC_ISR) Non-maskable Interrupt Source 7 Pending (cleared on read) Mask */
#define NMIC_ISR_NMI7(value)                  (NMIC_ISR_NMI7_Msk & (_UINT32_(value) << NMIC_ISR_NMI7_Pos)) /* Assigment of value for NMI7 in the NMIC_ISR register */
#define NMIC_ISR_NMI8_Pos                     _UINT32_(8)                                          /* (NMIC_ISR) Non-maskable Interrupt Source 8 Pending (cleared on read) Position */
#define NMIC_ISR_NMI8_Msk                     (_UINT32_(0x1) << NMIC_ISR_NMI8_Pos)                 /* (NMIC_ISR) Non-maskable Interrupt Source 8 Pending (cleared on read) Mask */
#define NMIC_ISR_NMI8(value)                  (NMIC_ISR_NMI8_Msk & (_UINT32_(value) << NMIC_ISR_NMI8_Pos)) /* Assigment of value for NMI8 in the NMIC_ISR register */
#define NMIC_ISR_Msk                          _UINT32_(0x000001FF)                                 /* (NMIC_ISR) Register Mask  */

#define NMIC_ISR_NMI_Pos                      _UINT32_(0)                                          /* (NMIC_ISR Position) Non-maskable Interrupt Source 8 Pending (cleared on read) */
#define NMIC_ISR_NMI_Msk                      (_UINT32_(0x1FF) << NMIC_ISR_NMI_Pos)                /* (NMIC_ISR Mask) NMI */
#define NMIC_ISR_NMI(value)                   (NMIC_ISR_NMI_Msk & (_UINT32_(value) << NMIC_ISR_NMI_Pos)) 

/* -------- NMIC_GFCS : (NMIC Offset: 0x10) ( R/ 32) Glitch Filter Configuration Status Register -------- */
#define NMIC_GFCS_RDY0_Pos                    _UINT32_(0)                                          /* (NMIC_GFCS) Filter 0 Configuration Ready Position */
#define NMIC_GFCS_RDY0_Msk                    (_UINT32_(0x1) << NMIC_GFCS_RDY0_Pos)                /* (NMIC_GFCS) Filter 0 Configuration Ready Mask */
#define NMIC_GFCS_RDY0(value)                 (NMIC_GFCS_RDY0_Msk & (_UINT32_(value) << NMIC_GFCS_RDY0_Pos)) /* Assigment of value for RDY0 in the NMIC_GFCS register */
#define NMIC_GFCS_RDY1_Pos                    _UINT32_(1)                                          /* (NMIC_GFCS) Filter 1 Configuration Ready Position */
#define NMIC_GFCS_RDY1_Msk                    (_UINT32_(0x1) << NMIC_GFCS_RDY1_Pos)                /* (NMIC_GFCS) Filter 1 Configuration Ready Mask */
#define NMIC_GFCS_RDY1(value)                 (NMIC_GFCS_RDY1_Msk & (_UINT32_(value) << NMIC_GFCS_RDY1_Pos)) /* Assigment of value for RDY1 in the NMIC_GFCS register */
#define NMIC_GFCS_RDY2_Pos                    _UINT32_(2)                                          /* (NMIC_GFCS) Filter 2 Configuration Ready Position */
#define NMIC_GFCS_RDY2_Msk                    (_UINT32_(0x1) << NMIC_GFCS_RDY2_Pos)                /* (NMIC_GFCS) Filter 2 Configuration Ready Mask */
#define NMIC_GFCS_RDY2(value)                 (NMIC_GFCS_RDY2_Msk & (_UINT32_(value) << NMIC_GFCS_RDY2_Pos)) /* Assigment of value for RDY2 in the NMIC_GFCS register */
#define NMIC_GFCS_RDY3_Pos                    _UINT32_(3)                                          /* (NMIC_GFCS) Filter 3 Configuration Ready Position */
#define NMIC_GFCS_RDY3_Msk                    (_UINT32_(0x1) << NMIC_GFCS_RDY3_Pos)                /* (NMIC_GFCS) Filter 3 Configuration Ready Mask */
#define NMIC_GFCS_RDY3(value)                 (NMIC_GFCS_RDY3_Msk & (_UINT32_(value) << NMIC_GFCS_RDY3_Pos)) /* Assigment of value for RDY3 in the NMIC_GFCS register */
#define NMIC_GFCS_RDY4_Pos                    _UINT32_(4)                                          /* (NMIC_GFCS) Filter 4 Configuration Ready Position */
#define NMIC_GFCS_RDY4_Msk                    (_UINT32_(0x1) << NMIC_GFCS_RDY4_Pos)                /* (NMIC_GFCS) Filter 4 Configuration Ready Mask */
#define NMIC_GFCS_RDY4(value)                 (NMIC_GFCS_RDY4_Msk & (_UINT32_(value) << NMIC_GFCS_RDY4_Pos)) /* Assigment of value for RDY4 in the NMIC_GFCS register */
#define NMIC_GFCS_RDY5_Pos                    _UINT32_(5)                                          /* (NMIC_GFCS) Filter 5 Configuration Ready Position */
#define NMIC_GFCS_RDY5_Msk                    (_UINT32_(0x1) << NMIC_GFCS_RDY5_Pos)                /* (NMIC_GFCS) Filter 5 Configuration Ready Mask */
#define NMIC_GFCS_RDY5(value)                 (NMIC_GFCS_RDY5_Msk & (_UINT32_(value) << NMIC_GFCS_RDY5_Pos)) /* Assigment of value for RDY5 in the NMIC_GFCS register */
#define NMIC_GFCS_RDY6_Pos                    _UINT32_(6)                                          /* (NMIC_GFCS) Filter 6 Configuration Ready Position */
#define NMIC_GFCS_RDY6_Msk                    (_UINT32_(0x1) << NMIC_GFCS_RDY6_Pos)                /* (NMIC_GFCS) Filter 6 Configuration Ready Mask */
#define NMIC_GFCS_RDY6(value)                 (NMIC_GFCS_RDY6_Msk & (_UINT32_(value) << NMIC_GFCS_RDY6_Pos)) /* Assigment of value for RDY6 in the NMIC_GFCS register */
#define NMIC_GFCS_RDY7_Pos                    _UINT32_(7)                                          /* (NMIC_GFCS) Filter 7 Configuration Ready Position */
#define NMIC_GFCS_RDY7_Msk                    (_UINT32_(0x1) << NMIC_GFCS_RDY7_Pos)                /* (NMIC_GFCS) Filter 7 Configuration Ready Mask */
#define NMIC_GFCS_RDY7(value)                 (NMIC_GFCS_RDY7_Msk & (_UINT32_(value) << NMIC_GFCS_RDY7_Pos)) /* Assigment of value for RDY7 in the NMIC_GFCS register */
#define NMIC_GFCS_RDY8_Pos                    _UINT32_(8)                                          /* (NMIC_GFCS) Filter 8 Configuration Ready Position */
#define NMIC_GFCS_RDY8_Msk                    (_UINT32_(0x1) << NMIC_GFCS_RDY8_Pos)                /* (NMIC_GFCS) Filter 8 Configuration Ready Mask */
#define NMIC_GFCS_RDY8(value)                 (NMIC_GFCS_RDY8_Msk & (_UINT32_(value) << NMIC_GFCS_RDY8_Pos)) /* Assigment of value for RDY8 in the NMIC_GFCS register */
#define NMIC_GFCS_Msk                         _UINT32_(0x000001FF)                                 /* (NMIC_GFCS) Register Mask  */

#define NMIC_GFCS_RDY_Pos                     _UINT32_(0)                                          /* (NMIC_GFCS Position) Filter 8 Configuration Ready */
#define NMIC_GFCS_RDY_Msk                     (_UINT32_(0x1FF) << NMIC_GFCS_RDY_Pos)               /* (NMIC_GFCS Mask) RDY */
#define NMIC_GFCS_RDY(value)                  (NMIC_GFCS_RDY_Msk & (_UINT32_(value) << NMIC_GFCS_RDY_Pos)) 

/* -------- NMIC_SCFG0R : (NMIC Offset: 0x14) (R/W 32) Source Configuration Register 0 -------- */
#define NMIC_SCFG0R_GFSEL_Pos                 _UINT32_(0)                                          /* (NMIC_SCFG0R) Glitch Filter Selector (GFSEL field is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG0R_GFSEL_Msk                 (_UINT32_(0x3) << NMIC_SCFG0R_GFSEL_Pos)             /* (NMIC_SCFG0R) Glitch Filter Selector (GFSEL field is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG0R_GFSEL(value)              (NMIC_SCFG0R_GFSEL_Msk & (_UINT32_(value) << NMIC_SCFG0R_GFSEL_Pos)) /* Assigment of value for GFSEL in the NMIC_SCFG0R register */
#define NMIC_SCFG0R_GFEN_Pos                  _UINT32_(4)                                          /* (NMIC_SCFG0R) Glitch Filter Enable (GFEN bit is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG0R_GFEN_Msk                  (_UINT32_(0x1) << NMIC_SCFG0R_GFEN_Pos)              /* (NMIC_SCFG0R) Glitch Filter Enable (GFEN bit is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG0R_GFEN(value)               (NMIC_SCFG0R_GFEN_Msk & (_UINT32_(value) << NMIC_SCFG0R_GFEN_Pos)) /* Assigment of value for GFEN in the NMIC_SCFG0R register */
#define NMIC_SCFG0R_POL_Pos                   _UINT32_(8)                                          /* (NMIC_SCFG0R) Polarity (POL bit is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG0R_POL_Msk                   (_UINT32_(0x1) << NMIC_SCFG0R_POL_Pos)               /* (NMIC_SCFG0R) Polarity (POL bit is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG0R_POL(value)                (NMIC_SCFG0R_POL_Msk & (_UINT32_(value) << NMIC_SCFG0R_POL_Pos)) /* Assigment of value for POL in the NMIC_SCFG0R register */
#define NMIC_SCFG0R_LVL_Pos                   _UINT32_(9)                                          /* (NMIC_SCFG0R) Level Detection (LVL bit is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG0R_LVL_Msk                   (_UINT32_(0x1) << NMIC_SCFG0R_LVL_Pos)               /* (NMIC_SCFG0R) Level Detection (LVL bit is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG0R_LVL(value)                (NMIC_SCFG0R_LVL_Msk & (_UINT32_(value) << NMIC_SCFG0R_LVL_Pos)) /* Assigment of value for LVL in the NMIC_SCFG0R register */
#define NMIC_SCFG0R_EN_Pos                    _UINT32_(16)                                         /* (NMIC_SCFG0R) Source Enable Position */
#define NMIC_SCFG0R_EN_Msk                    (_UINT32_(0x1) << NMIC_SCFG0R_EN_Pos)                /* (NMIC_SCFG0R) Source Enable Mask */
#define NMIC_SCFG0R_EN(value)                 (NMIC_SCFG0R_EN_Msk & (_UINT32_(value) << NMIC_SCFG0R_EN_Pos)) /* Assigment of value for EN in the NMIC_SCFG0R register */
#define NMIC_SCFG0R_FRZ_Pos                   _UINT32_(31)                                         /* (NMIC_SCFG0R) Interrupt Line Freeze Position */
#define NMIC_SCFG0R_FRZ_Msk                   (_UINT32_(0x1) << NMIC_SCFG0R_FRZ_Pos)               /* (NMIC_SCFG0R) Interrupt Line Freeze Mask */
#define NMIC_SCFG0R_FRZ(value)                (NMIC_SCFG0R_FRZ_Msk & (_UINT32_(value) << NMIC_SCFG0R_FRZ_Pos)) /* Assigment of value for FRZ in the NMIC_SCFG0R register */
#define NMIC_SCFG0R_Msk                       _UINT32_(0x80010313)                                 /* (NMIC_SCFG0R) Register Mask  */


/* -------- NMIC_SCFG1R : (NMIC Offset: 0x18) (R/W 32) Source Configuration Register 1 -------- */
#define NMIC_SCFG1R_GFSEL_Pos                 _UINT32_(0)                                          /* (NMIC_SCFG1R) Glitch Filter Selector (GFSEL field is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG1R_GFSEL_Msk                 (_UINT32_(0x3) << NMIC_SCFG1R_GFSEL_Pos)             /* (NMIC_SCFG1R) Glitch Filter Selector (GFSEL field is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG1R_GFSEL(value)              (NMIC_SCFG1R_GFSEL_Msk & (_UINT32_(value) << NMIC_SCFG1R_GFSEL_Pos)) /* Assigment of value for GFSEL in the NMIC_SCFG1R register */
#define NMIC_SCFG1R_GFEN_Pos                  _UINT32_(4)                                          /* (NMIC_SCFG1R) Glitch Filter Enable (GFEN bit is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG1R_GFEN_Msk                  (_UINT32_(0x1) << NMIC_SCFG1R_GFEN_Pos)              /* (NMIC_SCFG1R) Glitch Filter Enable (GFEN bit is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG1R_GFEN(value)               (NMIC_SCFG1R_GFEN_Msk & (_UINT32_(value) << NMIC_SCFG1R_GFEN_Pos)) /* Assigment of value for GFEN in the NMIC_SCFG1R register */
#define NMIC_SCFG1R_POL_Pos                   _UINT32_(8)                                          /* (NMIC_SCFG1R) Polarity (POL bit is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG1R_POL_Msk                   (_UINT32_(0x1) << NMIC_SCFG1R_POL_Pos)               /* (NMIC_SCFG1R) Polarity (POL bit is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG1R_POL(value)                (NMIC_SCFG1R_POL_Msk & (_UINT32_(value) << NMIC_SCFG1R_POL_Pos)) /* Assigment of value for POL in the NMIC_SCFG1R register */
#define NMIC_SCFG1R_LVL_Pos                   _UINT32_(9)                                          /* (NMIC_SCFG1R) Level Detection (LVL bit is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG1R_LVL_Msk                   (_UINT32_(0x1) << NMIC_SCFG1R_LVL_Pos)               /* (NMIC_SCFG1R) Level Detection (LVL bit is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG1R_LVL(value)                (NMIC_SCFG1R_LVL_Msk & (_UINT32_(value) << NMIC_SCFG1R_LVL_Pos)) /* Assigment of value for LVL in the NMIC_SCFG1R register */
#define NMIC_SCFG1R_EN_Pos                    _UINT32_(16)                                         /* (NMIC_SCFG1R) Source Enable Position */
#define NMIC_SCFG1R_EN_Msk                    (_UINT32_(0x1) << NMIC_SCFG1R_EN_Pos)                /* (NMIC_SCFG1R) Source Enable Mask */
#define NMIC_SCFG1R_EN(value)                 (NMIC_SCFG1R_EN_Msk & (_UINT32_(value) << NMIC_SCFG1R_EN_Pos)) /* Assigment of value for EN in the NMIC_SCFG1R register */
#define NMIC_SCFG1R_FRZ_Pos                   _UINT32_(31)                                         /* (NMIC_SCFG1R) Interrupt Line Freeze Position */
#define NMIC_SCFG1R_FRZ_Msk                   (_UINT32_(0x1) << NMIC_SCFG1R_FRZ_Pos)               /* (NMIC_SCFG1R) Interrupt Line Freeze Mask */
#define NMIC_SCFG1R_FRZ(value)                (NMIC_SCFG1R_FRZ_Msk & (_UINT32_(value) << NMIC_SCFG1R_FRZ_Pos)) /* Assigment of value for FRZ in the NMIC_SCFG1R register */
#define NMIC_SCFG1R_Msk                       _UINT32_(0x80010313)                                 /* (NMIC_SCFG1R) Register Mask  */


/* -------- NMIC_SCFG2R : (NMIC Offset: 0x1C) (R/W 32) Source Configuration Register 2 -------- */
#define NMIC_SCFG2R_GFSEL_Pos                 _UINT32_(0)                                          /* (NMIC_SCFG2R) Glitch Filter Selector (GFSEL field is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG2R_GFSEL_Msk                 (_UINT32_(0x3) << NMIC_SCFG2R_GFSEL_Pos)             /* (NMIC_SCFG2R) Glitch Filter Selector (GFSEL field is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG2R_GFSEL(value)              (NMIC_SCFG2R_GFSEL_Msk & (_UINT32_(value) << NMIC_SCFG2R_GFSEL_Pos)) /* Assigment of value for GFSEL in the NMIC_SCFG2R register */
#define NMIC_SCFG2R_GFEN_Pos                  _UINT32_(4)                                          /* (NMIC_SCFG2R) Glitch Filter Enable (GFEN bit is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG2R_GFEN_Msk                  (_UINT32_(0x1) << NMIC_SCFG2R_GFEN_Pos)              /* (NMIC_SCFG2R) Glitch Filter Enable (GFEN bit is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG2R_GFEN(value)               (NMIC_SCFG2R_GFEN_Msk & (_UINT32_(value) << NMIC_SCFG2R_GFEN_Pos)) /* Assigment of value for GFEN in the NMIC_SCFG2R register */
#define NMIC_SCFG2R_POL_Pos                   _UINT32_(8)                                          /* (NMIC_SCFG2R) Polarity (POL bit is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG2R_POL_Msk                   (_UINT32_(0x1) << NMIC_SCFG2R_POL_Pos)               /* (NMIC_SCFG2R) Polarity (POL bit is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG2R_POL(value)                (NMIC_SCFG2R_POL_Msk & (_UINT32_(value) << NMIC_SCFG2R_POL_Pos)) /* Assigment of value for POL in the NMIC_SCFG2R register */
#define NMIC_SCFG2R_LVL_Pos                   _UINT32_(9)                                          /* (NMIC_SCFG2R) Level Detection (LVL bit is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG2R_LVL_Msk                   (_UINT32_(0x1) << NMIC_SCFG2R_LVL_Pos)               /* (NMIC_SCFG2R) Level Detection (LVL bit is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG2R_LVL(value)                (NMIC_SCFG2R_LVL_Msk & (_UINT32_(value) << NMIC_SCFG2R_LVL_Pos)) /* Assigment of value for LVL in the NMIC_SCFG2R register */
#define NMIC_SCFG2R_EN_Pos                    _UINT32_(16)                                         /* (NMIC_SCFG2R) Source Enable Position */
#define NMIC_SCFG2R_EN_Msk                    (_UINT32_(0x1) << NMIC_SCFG2R_EN_Pos)                /* (NMIC_SCFG2R) Source Enable Mask */
#define NMIC_SCFG2R_EN(value)                 (NMIC_SCFG2R_EN_Msk & (_UINT32_(value) << NMIC_SCFG2R_EN_Pos)) /* Assigment of value for EN in the NMIC_SCFG2R register */
#define NMIC_SCFG2R_FRZ_Pos                   _UINT32_(31)                                         /* (NMIC_SCFG2R) Interrupt Line Freeze Position */
#define NMIC_SCFG2R_FRZ_Msk                   (_UINT32_(0x1) << NMIC_SCFG2R_FRZ_Pos)               /* (NMIC_SCFG2R) Interrupt Line Freeze Mask */
#define NMIC_SCFG2R_FRZ(value)                (NMIC_SCFG2R_FRZ_Msk & (_UINT32_(value) << NMIC_SCFG2R_FRZ_Pos)) /* Assigment of value for FRZ in the NMIC_SCFG2R register */
#define NMIC_SCFG2R_Msk                       _UINT32_(0x80010313)                                 /* (NMIC_SCFG2R) Register Mask  */


/* -------- NMIC_SCFG3R : (NMIC Offset: 0x20) (R/W 32) Source Configuration Register 3 -------- */
#define NMIC_SCFG3R_GFSEL_Pos                 _UINT32_(0)                                          /* (NMIC_SCFG3R) Glitch Filter Selector (GFSEL field is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG3R_GFSEL_Msk                 (_UINT32_(0x3) << NMIC_SCFG3R_GFSEL_Pos)             /* (NMIC_SCFG3R) Glitch Filter Selector (GFSEL field is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG3R_GFSEL(value)              (NMIC_SCFG3R_GFSEL_Msk & (_UINT32_(value) << NMIC_SCFG3R_GFSEL_Pos)) /* Assigment of value for GFSEL in the NMIC_SCFG3R register */
#define NMIC_SCFG3R_GFEN_Pos                  _UINT32_(4)                                          /* (NMIC_SCFG3R) Glitch Filter Enable (GFEN bit is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG3R_GFEN_Msk                  (_UINT32_(0x1) << NMIC_SCFG3R_GFEN_Pos)              /* (NMIC_SCFG3R) Glitch Filter Enable (GFEN bit is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG3R_GFEN(value)               (NMIC_SCFG3R_GFEN_Msk & (_UINT32_(value) << NMIC_SCFG3R_GFEN_Pos)) /* Assigment of value for GFEN in the NMIC_SCFG3R register */
#define NMIC_SCFG3R_POL_Pos                   _UINT32_(8)                                          /* (NMIC_SCFG3R) Polarity (POL bit is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG3R_POL_Msk                   (_UINT32_(0x1) << NMIC_SCFG3R_POL_Pos)               /* (NMIC_SCFG3R) Polarity (POL bit is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG3R_POL(value)                (NMIC_SCFG3R_POL_Msk & (_UINT32_(value) << NMIC_SCFG3R_POL_Pos)) /* Assigment of value for POL in the NMIC_SCFG3R register */
#define NMIC_SCFG3R_LVL_Pos                   _UINT32_(9)                                          /* (NMIC_SCFG3R) Level Detection (LVL bit is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG3R_LVL_Msk                   (_UINT32_(0x1) << NMIC_SCFG3R_LVL_Pos)               /* (NMIC_SCFG3R) Level Detection (LVL bit is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG3R_LVL(value)                (NMIC_SCFG3R_LVL_Msk & (_UINT32_(value) << NMIC_SCFG3R_LVL_Pos)) /* Assigment of value for LVL in the NMIC_SCFG3R register */
#define NMIC_SCFG3R_EN_Pos                    _UINT32_(16)                                         /* (NMIC_SCFG3R) Source Enable Position */
#define NMIC_SCFG3R_EN_Msk                    (_UINT32_(0x1) << NMIC_SCFG3R_EN_Pos)                /* (NMIC_SCFG3R) Source Enable Mask */
#define NMIC_SCFG3R_EN(value)                 (NMIC_SCFG3R_EN_Msk & (_UINT32_(value) << NMIC_SCFG3R_EN_Pos)) /* Assigment of value for EN in the NMIC_SCFG3R register */
#define NMIC_SCFG3R_FRZ_Pos                   _UINT32_(31)                                         /* (NMIC_SCFG3R) Interrupt Line Freeze Position */
#define NMIC_SCFG3R_FRZ_Msk                   (_UINT32_(0x1) << NMIC_SCFG3R_FRZ_Pos)               /* (NMIC_SCFG3R) Interrupt Line Freeze Mask */
#define NMIC_SCFG3R_FRZ(value)                (NMIC_SCFG3R_FRZ_Msk & (_UINT32_(value) << NMIC_SCFG3R_FRZ_Pos)) /* Assigment of value for FRZ in the NMIC_SCFG3R register */
#define NMIC_SCFG3R_Msk                       _UINT32_(0x80010313)                                 /* (NMIC_SCFG3R) Register Mask  */


/* -------- NMIC_SCFG4R : (NMIC Offset: 0x24) (R/W 32) Source Configuration Register 4 -------- */
#define NMIC_SCFG4R_GFSEL_Pos                 _UINT32_(0)                                          /* (NMIC_SCFG4R) Glitch Filter Selector (GFSEL field is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG4R_GFSEL_Msk                 (_UINT32_(0x3) << NMIC_SCFG4R_GFSEL_Pos)             /* (NMIC_SCFG4R) Glitch Filter Selector (GFSEL field is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG4R_GFSEL(value)              (NMIC_SCFG4R_GFSEL_Msk & (_UINT32_(value) << NMIC_SCFG4R_GFSEL_Pos)) /* Assigment of value for GFSEL in the NMIC_SCFG4R register */
#define NMIC_SCFG4R_GFEN_Pos                  _UINT32_(4)                                          /* (NMIC_SCFG4R) Glitch Filter Enable (GFEN bit is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG4R_GFEN_Msk                  (_UINT32_(0x1) << NMIC_SCFG4R_GFEN_Pos)              /* (NMIC_SCFG4R) Glitch Filter Enable (GFEN bit is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG4R_GFEN(value)               (NMIC_SCFG4R_GFEN_Msk & (_UINT32_(value) << NMIC_SCFG4R_GFEN_Pos)) /* Assigment of value for GFEN in the NMIC_SCFG4R register */
#define NMIC_SCFG4R_POL_Pos                   _UINT32_(8)                                          /* (NMIC_SCFG4R) Polarity (POL bit is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG4R_POL_Msk                   (_UINT32_(0x1) << NMIC_SCFG4R_POL_Pos)               /* (NMIC_SCFG4R) Polarity (POL bit is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG4R_POL(value)                (NMIC_SCFG4R_POL_Msk & (_UINT32_(value) << NMIC_SCFG4R_POL_Pos)) /* Assigment of value for POL in the NMIC_SCFG4R register */
#define NMIC_SCFG4R_LVL_Pos                   _UINT32_(9)                                          /* (NMIC_SCFG4R) Level Detection (LVL bit is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG4R_LVL_Msk                   (_UINT32_(0x1) << NMIC_SCFG4R_LVL_Pos)               /* (NMIC_SCFG4R) Level Detection (LVL bit is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG4R_LVL(value)                (NMIC_SCFG4R_LVL_Msk & (_UINT32_(value) << NMIC_SCFG4R_LVL_Pos)) /* Assigment of value for LVL in the NMIC_SCFG4R register */
#define NMIC_SCFG4R_EN_Pos                    _UINT32_(16)                                         /* (NMIC_SCFG4R) Source Enable Position */
#define NMIC_SCFG4R_EN_Msk                    (_UINT32_(0x1) << NMIC_SCFG4R_EN_Pos)                /* (NMIC_SCFG4R) Source Enable Mask */
#define NMIC_SCFG4R_EN(value)                 (NMIC_SCFG4R_EN_Msk & (_UINT32_(value) << NMIC_SCFG4R_EN_Pos)) /* Assigment of value for EN in the NMIC_SCFG4R register */
#define NMIC_SCFG4R_FRZ_Pos                   _UINT32_(31)                                         /* (NMIC_SCFG4R) Interrupt Line Freeze Position */
#define NMIC_SCFG4R_FRZ_Msk                   (_UINT32_(0x1) << NMIC_SCFG4R_FRZ_Pos)               /* (NMIC_SCFG4R) Interrupt Line Freeze Mask */
#define NMIC_SCFG4R_FRZ(value)                (NMIC_SCFG4R_FRZ_Msk & (_UINT32_(value) << NMIC_SCFG4R_FRZ_Pos)) /* Assigment of value for FRZ in the NMIC_SCFG4R register */
#define NMIC_SCFG4R_Msk                       _UINT32_(0x80010313)                                 /* (NMIC_SCFG4R) Register Mask  */


/* -------- NMIC_SCFG5R : (NMIC Offset: 0x28) (R/W 32) Source Configuration Register 5 -------- */
#define NMIC_SCFG5R_GFSEL_Pos                 _UINT32_(0)                                          /* (NMIC_SCFG5R) Glitch Filter Selector (GFSEL field is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG5R_GFSEL_Msk                 (_UINT32_(0x3) << NMIC_SCFG5R_GFSEL_Pos)             /* (NMIC_SCFG5R) Glitch Filter Selector (GFSEL field is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG5R_GFSEL(value)              (NMIC_SCFG5R_GFSEL_Msk & (_UINT32_(value) << NMIC_SCFG5R_GFSEL_Pos)) /* Assigment of value for GFSEL in the NMIC_SCFG5R register */
#define NMIC_SCFG5R_GFEN_Pos                  _UINT32_(4)                                          /* (NMIC_SCFG5R) Glitch Filter Enable (GFEN bit is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG5R_GFEN_Msk                  (_UINT32_(0x1) << NMIC_SCFG5R_GFEN_Pos)              /* (NMIC_SCFG5R) Glitch Filter Enable (GFEN bit is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG5R_GFEN(value)               (NMIC_SCFG5R_GFEN_Msk & (_UINT32_(value) << NMIC_SCFG5R_GFEN_Pos)) /* Assigment of value for GFEN in the NMIC_SCFG5R register */
#define NMIC_SCFG5R_POL_Pos                   _UINT32_(8)                                          /* (NMIC_SCFG5R) Polarity (POL bit is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG5R_POL_Msk                   (_UINT32_(0x1) << NMIC_SCFG5R_POL_Pos)               /* (NMIC_SCFG5R) Polarity (POL bit is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG5R_POL(value)                (NMIC_SCFG5R_POL_Msk & (_UINT32_(value) << NMIC_SCFG5R_POL_Pos)) /* Assigment of value for POL in the NMIC_SCFG5R register */
#define NMIC_SCFG5R_LVL_Pos                   _UINT32_(9)                                          /* (NMIC_SCFG5R) Level Detection (LVL bit is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG5R_LVL_Msk                   (_UINT32_(0x1) << NMIC_SCFG5R_LVL_Pos)               /* (NMIC_SCFG5R) Level Detection (LVL bit is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG5R_LVL(value)                (NMIC_SCFG5R_LVL_Msk & (_UINT32_(value) << NMIC_SCFG5R_LVL_Pos)) /* Assigment of value for LVL in the NMIC_SCFG5R register */
#define NMIC_SCFG5R_EN_Pos                    _UINT32_(16)                                         /* (NMIC_SCFG5R) Source Enable Position */
#define NMIC_SCFG5R_EN_Msk                    (_UINT32_(0x1) << NMIC_SCFG5R_EN_Pos)                /* (NMIC_SCFG5R) Source Enable Mask */
#define NMIC_SCFG5R_EN(value)                 (NMIC_SCFG5R_EN_Msk & (_UINT32_(value) << NMIC_SCFG5R_EN_Pos)) /* Assigment of value for EN in the NMIC_SCFG5R register */
#define NMIC_SCFG5R_FRZ_Pos                   _UINT32_(31)                                         /* (NMIC_SCFG5R) Interrupt Line Freeze Position */
#define NMIC_SCFG5R_FRZ_Msk                   (_UINT32_(0x1) << NMIC_SCFG5R_FRZ_Pos)               /* (NMIC_SCFG5R) Interrupt Line Freeze Mask */
#define NMIC_SCFG5R_FRZ(value)                (NMIC_SCFG5R_FRZ_Msk & (_UINT32_(value) << NMIC_SCFG5R_FRZ_Pos)) /* Assigment of value for FRZ in the NMIC_SCFG5R register */
#define NMIC_SCFG5R_Msk                       _UINT32_(0x80010313)                                 /* (NMIC_SCFG5R) Register Mask  */


/* -------- NMIC_SCFG6R : (NMIC Offset: 0x2C) (R/W 32) Source Configuration Register 6 -------- */
#define NMIC_SCFG6R_GFSEL_Pos                 _UINT32_(0)                                          /* (NMIC_SCFG6R) Glitch Filter Selector (GFSEL field is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG6R_GFSEL_Msk                 (_UINT32_(0x3) << NMIC_SCFG6R_GFSEL_Pos)             /* (NMIC_SCFG6R) Glitch Filter Selector (GFSEL field is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG6R_GFSEL(value)              (NMIC_SCFG6R_GFSEL_Msk & (_UINT32_(value) << NMIC_SCFG6R_GFSEL_Pos)) /* Assigment of value for GFSEL in the NMIC_SCFG6R register */
#define NMIC_SCFG6R_GFEN_Pos                  _UINT32_(4)                                          /* (NMIC_SCFG6R) Glitch Filter Enable (GFEN bit is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG6R_GFEN_Msk                  (_UINT32_(0x1) << NMIC_SCFG6R_GFEN_Pos)              /* (NMIC_SCFG6R) Glitch Filter Enable (GFEN bit is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG6R_GFEN(value)               (NMIC_SCFG6R_GFEN_Msk & (_UINT32_(value) << NMIC_SCFG6R_GFEN_Pos)) /* Assigment of value for GFEN in the NMIC_SCFG6R register */
#define NMIC_SCFG6R_POL_Pos                   _UINT32_(8)                                          /* (NMIC_SCFG6R) Polarity (POL bit is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG6R_POL_Msk                   (_UINT32_(0x1) << NMIC_SCFG6R_POL_Pos)               /* (NMIC_SCFG6R) Polarity (POL bit is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG6R_POL(value)                (NMIC_SCFG6R_POL_Msk & (_UINT32_(value) << NMIC_SCFG6R_POL_Pos)) /* Assigment of value for POL in the NMIC_SCFG6R register */
#define NMIC_SCFG6R_LVL_Pos                   _UINT32_(9)                                          /* (NMIC_SCFG6R) Level Detection (LVL bit is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG6R_LVL_Msk                   (_UINT32_(0x1) << NMIC_SCFG6R_LVL_Pos)               /* (NMIC_SCFG6R) Level Detection (LVL bit is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG6R_LVL(value)                (NMIC_SCFG6R_LVL_Msk & (_UINT32_(value) << NMIC_SCFG6R_LVL_Pos)) /* Assigment of value for LVL in the NMIC_SCFG6R register */
#define NMIC_SCFG6R_EN_Pos                    _UINT32_(16)                                         /* (NMIC_SCFG6R) Source Enable Position */
#define NMIC_SCFG6R_EN_Msk                    (_UINT32_(0x1) << NMIC_SCFG6R_EN_Pos)                /* (NMIC_SCFG6R) Source Enable Mask */
#define NMIC_SCFG6R_EN(value)                 (NMIC_SCFG6R_EN_Msk & (_UINT32_(value) << NMIC_SCFG6R_EN_Pos)) /* Assigment of value for EN in the NMIC_SCFG6R register */
#define NMIC_SCFG6R_FRZ_Pos                   _UINT32_(31)                                         /* (NMIC_SCFG6R) Interrupt Line Freeze Position */
#define NMIC_SCFG6R_FRZ_Msk                   (_UINT32_(0x1) << NMIC_SCFG6R_FRZ_Pos)               /* (NMIC_SCFG6R) Interrupt Line Freeze Mask */
#define NMIC_SCFG6R_FRZ(value)                (NMIC_SCFG6R_FRZ_Msk & (_UINT32_(value) << NMIC_SCFG6R_FRZ_Pos)) /* Assigment of value for FRZ in the NMIC_SCFG6R register */
#define NMIC_SCFG6R_Msk                       _UINT32_(0x80010313)                                 /* (NMIC_SCFG6R) Register Mask  */


/* -------- NMIC_SCFG7R : (NMIC Offset: 0x30) (R/W 32) Source Configuration Register 7 -------- */
#define NMIC_SCFG7R_GFSEL_Pos                 _UINT32_(0)                                          /* (NMIC_SCFG7R) Glitch Filter Selector (GFSEL field is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG7R_GFSEL_Msk                 (_UINT32_(0x3) << NMIC_SCFG7R_GFSEL_Pos)             /* (NMIC_SCFG7R) Glitch Filter Selector (GFSEL field is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG7R_GFSEL(value)              (NMIC_SCFG7R_GFSEL_Msk & (_UINT32_(value) << NMIC_SCFG7R_GFSEL_Pos)) /* Assigment of value for GFSEL in the NMIC_SCFG7R register */
#define NMIC_SCFG7R_GFEN_Pos                  _UINT32_(4)                                          /* (NMIC_SCFG7R) Glitch Filter Enable (GFEN bit is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG7R_GFEN_Msk                  (_UINT32_(0x1) << NMIC_SCFG7R_GFEN_Pos)              /* (NMIC_SCFG7R) Glitch Filter Enable (GFEN bit is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG7R_GFEN(value)               (NMIC_SCFG7R_GFEN_Msk & (_UINT32_(value) << NMIC_SCFG7R_GFEN_Pos)) /* Assigment of value for GFEN in the NMIC_SCFG7R register */
#define NMIC_SCFG7R_POL_Pos                   _UINT32_(8)                                          /* (NMIC_SCFG7R) Polarity (POL bit is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG7R_POL_Msk                   (_UINT32_(0x1) << NMIC_SCFG7R_POL_Pos)               /* (NMIC_SCFG7R) Polarity (POL bit is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG7R_POL(value)                (NMIC_SCFG7R_POL_Msk & (_UINT32_(value) << NMIC_SCFG7R_POL_Pos)) /* Assigment of value for POL in the NMIC_SCFG7R register */
#define NMIC_SCFG7R_LVL_Pos                   _UINT32_(9)                                          /* (NMIC_SCFG7R) Level Detection (LVL bit is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG7R_LVL_Msk                   (_UINT32_(0x1) << NMIC_SCFG7R_LVL_Pos)               /* (NMIC_SCFG7R) Level Detection (LVL bit is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG7R_LVL(value)                (NMIC_SCFG7R_LVL_Msk & (_UINT32_(value) << NMIC_SCFG7R_LVL_Pos)) /* Assigment of value for LVL in the NMIC_SCFG7R register */
#define NMIC_SCFG7R_EN_Pos                    _UINT32_(16)                                         /* (NMIC_SCFG7R) Source Enable Position */
#define NMIC_SCFG7R_EN_Msk                    (_UINT32_(0x1) << NMIC_SCFG7R_EN_Pos)                /* (NMIC_SCFG7R) Source Enable Mask */
#define NMIC_SCFG7R_EN(value)                 (NMIC_SCFG7R_EN_Msk & (_UINT32_(value) << NMIC_SCFG7R_EN_Pos)) /* Assigment of value for EN in the NMIC_SCFG7R register */
#define NMIC_SCFG7R_FRZ_Pos                   _UINT32_(31)                                         /* (NMIC_SCFG7R) Interrupt Line Freeze Position */
#define NMIC_SCFG7R_FRZ_Msk                   (_UINT32_(0x1) << NMIC_SCFG7R_FRZ_Pos)               /* (NMIC_SCFG7R) Interrupt Line Freeze Mask */
#define NMIC_SCFG7R_FRZ(value)                (NMIC_SCFG7R_FRZ_Msk & (_UINT32_(value) << NMIC_SCFG7R_FRZ_Pos)) /* Assigment of value for FRZ in the NMIC_SCFG7R register */
#define NMIC_SCFG7R_Msk                       _UINT32_(0x80010313)                                 /* (NMIC_SCFG7R) Register Mask  */


/* -------- NMIC_SCFG8R : (NMIC Offset: 0x34) (R/W 32) Source Configuration Register 8 -------- */
#define NMIC_SCFG8R_GFSEL_Pos                 _UINT32_(0)                                          /* (NMIC_SCFG8R) Glitch Filter Selector (GFSEL field is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG8R_GFSEL_Msk                 (_UINT32_(0x3) << NMIC_SCFG8R_GFSEL_Pos)             /* (NMIC_SCFG8R) Glitch Filter Selector (GFSEL field is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG8R_GFSEL(value)              (NMIC_SCFG8R_GFSEL_Msk & (_UINT32_(value) << NMIC_SCFG8R_GFSEL_Pos)) /* Assigment of value for GFSEL in the NMIC_SCFG8R register */
#define NMIC_SCFG8R_GFEN_Pos                  _UINT32_(4)                                          /* (NMIC_SCFG8R) Glitch Filter Enable (GFEN bit is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG8R_GFEN_Msk                  (_UINT32_(0x1) << NMIC_SCFG8R_GFEN_Pos)              /* (NMIC_SCFG8R) Glitch Filter Enable (GFEN bit is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG8R_GFEN(value)               (NMIC_SCFG8R_GFEN_Msk & (_UINT32_(value) << NMIC_SCFG8R_GFEN_Pos)) /* Assigment of value for GFEN in the NMIC_SCFG8R register */
#define NMIC_SCFG8R_POL_Pos                   _UINT32_(8)                                          /* (NMIC_SCFG8R) Polarity (POL bit is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG8R_POL_Msk                   (_UINT32_(0x1) << NMIC_SCFG8R_POL_Pos)               /* (NMIC_SCFG8R) Polarity (POL bit is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG8R_POL(value)                (NMIC_SCFG8R_POL_Msk & (_UINT32_(value) << NMIC_SCFG8R_POL_Pos)) /* Assigment of value for POL in the NMIC_SCFG8R register */
#define NMIC_SCFG8R_LVL_Pos                   _UINT32_(9)                                          /* (NMIC_SCFG8R) Level Detection (LVL bit is read-only in NMIC_SCFG1 to 8) Position */
#define NMIC_SCFG8R_LVL_Msk                   (_UINT32_(0x1) << NMIC_SCFG8R_LVL_Pos)               /* (NMIC_SCFG8R) Level Detection (LVL bit is read-only in NMIC_SCFG1 to 8) Mask */
#define NMIC_SCFG8R_LVL(value)                (NMIC_SCFG8R_LVL_Msk & (_UINT32_(value) << NMIC_SCFG8R_LVL_Pos)) /* Assigment of value for LVL in the NMIC_SCFG8R register */
#define NMIC_SCFG8R_EN_Pos                    _UINT32_(16)                                         /* (NMIC_SCFG8R) Source Enable Position */
#define NMIC_SCFG8R_EN_Msk                    (_UINT32_(0x1) << NMIC_SCFG8R_EN_Pos)                /* (NMIC_SCFG8R) Source Enable Mask */
#define NMIC_SCFG8R_EN(value)                 (NMIC_SCFG8R_EN_Msk & (_UINT32_(value) << NMIC_SCFG8R_EN_Pos)) /* Assigment of value for EN in the NMIC_SCFG8R register */
#define NMIC_SCFG8R_FRZ_Pos                   _UINT32_(31)                                         /* (NMIC_SCFG8R) Interrupt Line Freeze Position */
#define NMIC_SCFG8R_FRZ_Msk                   (_UINT32_(0x1) << NMIC_SCFG8R_FRZ_Pos)               /* (NMIC_SCFG8R) Interrupt Line Freeze Mask */
#define NMIC_SCFG8R_FRZ(value)                (NMIC_SCFG8R_FRZ_Msk & (_UINT32_(value) << NMIC_SCFG8R_FRZ_Pos)) /* Assigment of value for FRZ in the NMIC_SCFG8R register */
#define NMIC_SCFG8R_Msk                       _UINT32_(0x80010313)                                 /* (NMIC_SCFG8R) Register Mask  */


/* -------- NMIC_WPMR : (NMIC Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define NMIC_WPMR_WPCFEN_Pos                  _UINT32_(0)                                          /* (NMIC_WPMR) Write Protection Configuration Enable Position */
#define NMIC_WPMR_WPCFEN_Msk                  (_UINT32_(0x1) << NMIC_WPMR_WPCFEN_Pos)              /* (NMIC_WPMR) Write Protection Configuration Enable Mask */
#define NMIC_WPMR_WPCFEN(value)               (NMIC_WPMR_WPCFEN_Msk & (_UINT32_(value) << NMIC_WPMR_WPCFEN_Pos)) /* Assigment of value for WPCFEN in the NMIC_WPMR register */
#define NMIC_WPMR_WPITEN_Pos                  _UINT32_(1)                                          /* (NMIC_WPMR) Write Protection Interrupt Enable Position */
#define NMIC_WPMR_WPITEN_Msk                  (_UINT32_(0x1) << NMIC_WPMR_WPITEN_Pos)              /* (NMIC_WPMR) Write Protection Interrupt Enable Mask */
#define NMIC_WPMR_WPITEN(value)               (NMIC_WPMR_WPITEN_Msk & (_UINT32_(value) << NMIC_WPMR_WPITEN_Pos)) /* Assigment of value for WPITEN in the NMIC_WPMR register */
#define NMIC_WPMR_WPKEY_Pos                   _UINT32_(8)                                          /* (NMIC_WPMR) Write Protection Key Position */
#define NMIC_WPMR_WPKEY_Msk                   (_UINT32_(0xFFFFFF) << NMIC_WPMR_WPKEY_Pos)          /* (NMIC_WPMR) Write Protection Key Mask */
#define NMIC_WPMR_WPKEY(value)                (NMIC_WPMR_WPKEY_Msk & (_UINT32_(value) << NMIC_WPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the NMIC_WPMR register */
#define   NMIC_WPMR_WPKEY_PASSWD_Val          _UINT32_(0x4E4D49)                                   /* (NMIC_WPMR) Writing any other value in this field aborts the write operation of the WPCFEN and WPITEN bit. Always reads as 0.  */
#define NMIC_WPMR_WPKEY_PASSWD                (NMIC_WPMR_WPKEY_PASSWD_Val << NMIC_WPMR_WPKEY_Pos)  /* (NMIC_WPMR) Writing any other value in this field aborts the write operation of the WPCFEN and WPITEN bit. Always reads as 0. Position  */
#define NMIC_WPMR_Msk                         _UINT32_(0xFFFFFF03)                                 /* (NMIC_WPMR) Register Mask  */


/* -------- NMIC_WPSR : (NMIC Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define NMIC_WPSR_WPVS_Pos                    _UINT32_(0)                                          /* (NMIC_WPSR) Write Protection Register Violation Status Position */
#define NMIC_WPSR_WPVS_Msk                    (_UINT32_(0x1) << NMIC_WPSR_WPVS_Pos)                /* (NMIC_WPSR) Write Protection Register Violation Status Mask */
#define NMIC_WPSR_WPVS(value)                 (NMIC_WPSR_WPVS_Msk & (_UINT32_(value) << NMIC_WPSR_WPVS_Pos)) /* Assigment of value for WPVS in the NMIC_WPSR register */
#define NMIC_WPSR_FZWVS_Pos                   _UINT32_(1)                                          /* (NMIC_WPSR) Frozen Register Write Violation Status Position */
#define NMIC_WPSR_FZWVS_Msk                   (_UINT32_(0x1) << NMIC_WPSR_FZWVS_Pos)               /* (NMIC_WPSR) Frozen Register Write Violation Status Mask */
#define NMIC_WPSR_FZWVS(value)                (NMIC_WPSR_FZWVS_Msk & (_UINT32_(value) << NMIC_WPSR_FZWVS_Pos)) /* Assigment of value for FZWVS in the NMIC_WPSR register */
#define NMIC_WPSR_BSWVS_Pos                   _UINT32_(2)                                          /* (NMIC_WPSR) Busy Register Write Violation Status Position */
#define NMIC_WPSR_BSWVS_Msk                   (_UINT32_(0x1) << NMIC_WPSR_BSWVS_Pos)               /* (NMIC_WPSR) Busy Register Write Violation Status Mask */
#define NMIC_WPSR_BSWVS(value)                (NMIC_WPSR_BSWVS_Msk & (_UINT32_(value) << NMIC_WPSR_BSWVS_Pos)) /* Assigment of value for BSWVS in the NMIC_WPSR register */
#define NMIC_WPSR_WVSRC_Pos                   _UINT32_(8)                                          /* (NMIC_WPSR) Write Violation Source Position */
#define NMIC_WPSR_WVSRC_Msk                   (_UINT32_(0xFF) << NMIC_WPSR_WVSRC_Pos)              /* (NMIC_WPSR) Write Violation Source Mask */
#define NMIC_WPSR_WVSRC(value)                (NMIC_WPSR_WVSRC_Msk & (_UINT32_(value) << NMIC_WPSR_WVSRC_Pos)) /* Assigment of value for WVSRC in the NMIC_WPSR register */
#define NMIC_WPSR_Msk                         _UINT32_(0x0000FF07)                                 /* (NMIC_WPSR) Register Mask  */


/** \brief NMIC register offsets definitions */
#define NMIC_IER_REG_OFST              _UINT32_(0x00)      /* (NMIC_IER) Interrupt Enable Register Offset */
#define NMIC_IDR_REG_OFST              _UINT32_(0x04)      /* (NMIC_IDR) Interrupt Disable Register Offset */
#define NMIC_IAR_REG_OFST              _UINT32_(0x08)      /* (NMIC_IAR) Interrupt Active Register Offset */
#define NMIC_ISR_REG_OFST              _UINT32_(0x0C)      /* (NMIC_ISR) Interrupt Status Register Offset */
#define NMIC_GFCS_REG_OFST             _UINT32_(0x10)      /* (NMIC_GFCS) Glitch Filter Configuration Status Register Offset */
#define NMIC_SCFG0R_REG_OFST           _UINT32_(0x14)      /* (NMIC_SCFG0R) Source Configuration Register 0 Offset */
#define NMIC_SCFG1R_REG_OFST           _UINT32_(0x18)      /* (NMIC_SCFG1R) Source Configuration Register 1 Offset */
#define NMIC_SCFG2R_REG_OFST           _UINT32_(0x1C)      /* (NMIC_SCFG2R) Source Configuration Register 2 Offset */
#define NMIC_SCFG3R_REG_OFST           _UINT32_(0x20)      /* (NMIC_SCFG3R) Source Configuration Register 3 Offset */
#define NMIC_SCFG4R_REG_OFST           _UINT32_(0x24)      /* (NMIC_SCFG4R) Source Configuration Register 4 Offset */
#define NMIC_SCFG5R_REG_OFST           _UINT32_(0x28)      /* (NMIC_SCFG5R) Source Configuration Register 5 Offset */
#define NMIC_SCFG6R_REG_OFST           _UINT32_(0x2C)      /* (NMIC_SCFG6R) Source Configuration Register 6 Offset */
#define NMIC_SCFG7R_REG_OFST           _UINT32_(0x30)      /* (NMIC_SCFG7R) Source Configuration Register 7 Offset */
#define NMIC_SCFG8R_REG_OFST           _UINT32_(0x34)      /* (NMIC_SCFG8R) Source Configuration Register 8 Offset */
#define NMIC_WPMR_REG_OFST             _UINT32_(0xE4)      /* (NMIC_WPMR) Write Protection Mode Register Offset */
#define NMIC_WPSR_REG_OFST             _UINT32_(0xE8)      /* (NMIC_WPSR) Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief NMIC register API structure */
typedef struct
{
  __O   uint32_t                       NMIC_IER;           /**< Offset: 0x00 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       NMIC_IDR;           /**< Offset: 0x04 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       NMIC_IAR;           /**< Offset: 0x08 (R/   32) Interrupt Active Register */
  __I   uint32_t                       NMIC_ISR;           /**< Offset: 0x0C (R/   32) Interrupt Status Register */
  __I   uint32_t                       NMIC_GFCS;          /**< Offset: 0x10 (R/   32) Glitch Filter Configuration Status Register */
  __IO  uint32_t                       NMIC_SCFG0R;        /**< Offset: 0x14 (R/W  32) Source Configuration Register 0 */
  __IO  uint32_t                       NMIC_SCFG1R;        /**< Offset: 0x18 (R/W  32) Source Configuration Register 1 */
  __IO  uint32_t                       NMIC_SCFG2R;        /**< Offset: 0x1C (R/W  32) Source Configuration Register 2 */
  __IO  uint32_t                       NMIC_SCFG3R;        /**< Offset: 0x20 (R/W  32) Source Configuration Register 3 */
  __IO  uint32_t                       NMIC_SCFG4R;        /**< Offset: 0x24 (R/W  32) Source Configuration Register 4 */
  __IO  uint32_t                       NMIC_SCFG5R;        /**< Offset: 0x28 (R/W  32) Source Configuration Register 5 */
  __IO  uint32_t                       NMIC_SCFG6R;        /**< Offset: 0x2C (R/W  32) Source Configuration Register 6 */
  __IO  uint32_t                       NMIC_SCFG7R;        /**< Offset: 0x30 (R/W  32) Source Configuration Register 7 */
  __IO  uint32_t                       NMIC_SCFG8R;        /**< Offset: 0x34 (R/W  32) Source Configuration Register 8 */
  __I   uint8_t                        Reserved1[0xAC];
  __IO  uint32_t                       NMIC_WPMR;          /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       NMIC_WPSR;          /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
} nmic_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMRH71_NMIC_COMPONENT_H_ */
