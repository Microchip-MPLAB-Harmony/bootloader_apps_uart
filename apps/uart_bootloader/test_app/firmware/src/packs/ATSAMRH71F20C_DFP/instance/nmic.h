/*
 * Instance header file for ATSAMRH71F20C
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
#ifndef _SAMRH71_NMIC_INSTANCE_
#define _SAMRH71_NMIC_INSTANCE_


/* ========== Instance Parameter definitions for NMIC peripheral ========== */
#define NMIC_INSTANCE_ID                         (9)        
#define NMIC_CLOCK_ID                            (9)        
#define NMIC_NUM_NMIC_SOURCE                     (9)        
#define NMIC_SOURCE_NMI                          (0)        /* External Pin NMI */
#define NMIC_SOURCE_CPU_FAIL                     (1)        /* Wrong CPU Frequency Monitor Detection */
#define NMIC_SOURCE_XTAL_12M_FAIL                (2)        /* Fast XTAL Clock Failure Detection */
#define NMIC_SOURCE_XTAL_32K_FAIL                (3)        /* Slow XTAL 32KHZ Clock Failure Detection */
#define NMIC_SOURCE_VDDCORE_FAIL                 (4)        /* VDDCORE Failure Detection */
#define NMIC_SOURCE_NOFIX_TCM                    (5)        /* TCM non fixable error Detection */
#define NMIC_SOURCE_NOFIX_HEMC                   (6)        /* HEMC non fixable error detection */
#define NMIC_SOURCE_NOFIX_HEFC                   (7)        /* HEFC non fixable error detection */
#define NMIC_SOURCE_NOFIX_FLEXRAM                (8)        /* FlexRAM non fixable error detection */
#define NMIC_READ_ONLY_GLFEN                     (0)        /* NMIC Glitch filter is read only */

#endif /* _SAMRH71_NMIC_INSTANCE_ */
