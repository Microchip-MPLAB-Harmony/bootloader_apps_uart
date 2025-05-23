/*
 * Component description for PTC
 *
 * Copyright (c) 2024 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description file (ATDF) version 2024-06-24T14:43:55Z */
#ifndef _SAMA5D2_PTC_COMPONENT_H_
#define _SAMA5D2_PTC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PTC                                          */
/* ************************************************************************** */

/* -------- PTC_CMD : (PTC Offset: 0x28) ( /W 8) PTC Command Register -------- */
#define PTC_CMD_CMD_Pos                       _UINT8_(0)                                           /* (PTC_CMD) Host Command Position */
#define PTC_CMD_CMD_Msk                       (_UINT8_(0xF) << PTC_CMD_CMD_Pos)                    /* (PTC_CMD) Host Command Mask */
#define PTC_CMD_CMD(value)                    (PTC_CMD_CMD_Msk & (_UINT8_(value) << PTC_CMD_CMD_Pos)) /* Assigment of value for CMD in the PTC_CMD register */
#define   PTC_CMD_CMD_NO_ACTION_Val           _UINT8_(0x0)                                         /* (PTC_CMD) -  */
#define   PTC_CMD_CMD_STOP_Val                _UINT8_(0x1)                                         /* (PTC_CMD) Waits for ongoing execution to complete, then stops.  */
#define   PTC_CMD_CMD_REST_Val                _UINT8_(0x2)                                         /* (PTC_CMD) Stops and resets  */
#define   PTC_CMD_CMD_ABORT_Val               _UINT8_(0x4)                                         /* (PTC_CMD) Stops without waiting for ongoing execution to complete.  */
#define   PTC_CMD_CMD_RUN_Val                 _UINT8_(0x5)                                         /* (PTC_CMD) Starts execution (from stopped state)  */
#define PTC_CMD_CMD_NO_ACTION                 (PTC_CMD_CMD_NO_ACTION_Val << PTC_CMD_CMD_Pos)       /* (PTC_CMD) - Position  */
#define PTC_CMD_CMD_STOP                      (PTC_CMD_CMD_STOP_Val << PTC_CMD_CMD_Pos)            /* (PTC_CMD) Waits for ongoing execution to complete, then stops. Position  */
#define PTC_CMD_CMD_REST                      (PTC_CMD_CMD_REST_Val << PTC_CMD_CMD_Pos)            /* (PTC_CMD) Stops and resets Position  */
#define PTC_CMD_CMD_ABORT                     (PTC_CMD_CMD_ABORT_Val << PTC_CMD_CMD_Pos)           /* (PTC_CMD) Stops without waiting for ongoing execution to complete. Position  */
#define PTC_CMD_CMD_RUN                       (PTC_CMD_CMD_RUN_Val << PTC_CMD_CMD_Pos)             /* (PTC_CMD) Starts execution (from stopped state) Position  */
#define PTC_CMD_Msk                           _UINT8_(0x0F)                                        /* (PTC_CMD) Register Mask  */


/* -------- PTC_ISR : (PTC Offset: 0x30) (R/W 8) PTC Interrupt Status Register -------- */
#define PTC_ISR_NOTIFY0_Pos                   _UINT8_(0)                                           /* (PTC_ISR) Notification to the Firmware Position */
#define PTC_ISR_NOTIFY0_Msk                   (_UINT8_(0x1) << PTC_ISR_NOTIFY0_Pos)                /* (PTC_ISR) Notification to the Firmware Mask */
#define PTC_ISR_NOTIFY0(value)                (PTC_ISR_NOTIFY0_Msk & (_UINT8_(value) << PTC_ISR_NOTIFY0_Pos)) /* Assigment of value for NOTIFY0 in the PTC_ISR register */
#define PTC_ISR_IRQ0_Pos                      _UINT8_(4)                                           /* (PTC_ISR) IRQ0 Position */
#define PTC_ISR_IRQ0_Msk                      (_UINT8_(0x1) << PTC_ISR_IRQ0_Pos)                   /* (PTC_ISR) IRQ0 Mask */
#define PTC_ISR_IRQ0(value)                   (PTC_ISR_IRQ0_Msk & (_UINT8_(value) << PTC_ISR_IRQ0_Pos)) /* Assigment of value for IRQ0 in the PTC_ISR register */
#define PTC_ISR_IRQ1_Pos                      _UINT8_(5)                                           /* (PTC_ISR) IRQ1 Position */
#define PTC_ISR_IRQ1_Msk                      (_UINT8_(0x1) << PTC_ISR_IRQ1_Pos)                   /* (PTC_ISR) IRQ1 Mask */
#define PTC_ISR_IRQ1(value)                   (PTC_ISR_IRQ1_Msk & (_UINT8_(value) << PTC_ISR_IRQ1_Pos)) /* Assigment of value for IRQ1 in the PTC_ISR register */
#define PTC_ISR_IRQ2_Pos                      _UINT8_(6)                                           /* (PTC_ISR) IRQ2 Position */
#define PTC_ISR_IRQ2_Msk                      (_UINT8_(0x1) << PTC_ISR_IRQ2_Pos)                   /* (PTC_ISR) IRQ2 Mask */
#define PTC_ISR_IRQ2(value)                   (PTC_ISR_IRQ2_Msk & (_UINT8_(value) << PTC_ISR_IRQ2_Pos)) /* Assigment of value for IRQ2 in the PTC_ISR register */
#define PTC_ISR_IRQ3_Pos                      _UINT8_(7)                                           /* (PTC_ISR) IRQ3 Position */
#define PTC_ISR_IRQ3_Msk                      (_UINT8_(0x1) << PTC_ISR_IRQ3_Pos)                   /* (PTC_ISR) IRQ3 Mask */
#define PTC_ISR_IRQ3(value)                   (PTC_ISR_IRQ3_Msk & (_UINT8_(value) << PTC_ISR_IRQ3_Pos)) /* Assigment of value for IRQ3 in the PTC_ISR register */
#define PTC_ISR_Msk                           _UINT8_(0xF1)                                        /* (PTC_ISR) Register Mask  */

#define PTC_ISR_NOTIFY_Pos                    _UINT8_(0)                                           /* (PTC_ISR Position) Notification to the Firmware */
#define PTC_ISR_NOTIFY_Msk                    (_UINT8_(0x1) << PTC_ISR_NOTIFY_Pos)                 /* (PTC_ISR Mask) NOTIFY */
#define PTC_ISR_NOTIFY(value)                 (PTC_ISR_NOTIFY_Msk & (_UINT8_(value) << PTC_ISR_NOTIFY_Pos)) 
#define PTC_ISR_IRQ_Pos                       _UINT8_(4)                                           /* (PTC_ISR Position) IRQ3 */
#define PTC_ISR_IRQ_Msk                       (_UINT8_(0xF) << PTC_ISR_IRQ_Pos)                    /* (PTC_ISR Mask) IRQ */
#define PTC_ISR_IRQ(value)                    (PTC_ISR_IRQ_Msk & (_UINT8_(value) << PTC_ISR_IRQ_Pos)) 

/* -------- PTC_IED : (PTC Offset: 0x35) ( /W 8) PTC Enable Register -------- */
#define PTC_IED_IER0_Pos                      _UINT8_(4)                                           /* (PTC_IED) IER0 Position */
#define PTC_IED_IER0_Msk                      (_UINT8_(0x1) << PTC_IED_IER0_Pos)                   /* (PTC_IED) IER0 Mask */
#define PTC_IED_IER0(value)                   (PTC_IED_IER0_Msk & (_UINT8_(value) << PTC_IED_IER0_Pos)) /* Assigment of value for IER0 in the PTC_IED register */
#define PTC_IED_IER1_Pos                      _UINT8_(5)                                           /* (PTC_IED) IER1 Position */
#define PTC_IED_IER1_Msk                      (_UINT8_(0x1) << PTC_IED_IER1_Pos)                   /* (PTC_IED) IER1 Mask */
#define PTC_IED_IER1(value)                   (PTC_IED_IER1_Msk & (_UINT8_(value) << PTC_IED_IER1_Pos)) /* Assigment of value for IER1 in the PTC_IED register */
#define PTC_IED_IER2_Pos                      _UINT8_(6)                                           /* (PTC_IED) IER2 Position */
#define PTC_IED_IER2_Msk                      (_UINT8_(0x1) << PTC_IED_IER2_Pos)                   /* (PTC_IED) IER2 Mask */
#define PTC_IED_IER2(value)                   (PTC_IED_IER2_Msk & (_UINT8_(value) << PTC_IED_IER2_Pos)) /* Assigment of value for IER2 in the PTC_IED register */
#define PTC_IED_IER3_Pos                      _UINT8_(7)                                           /* (PTC_IED) IER3 Position */
#define PTC_IED_IER3_Msk                      (_UINT8_(0x1) << PTC_IED_IER3_Pos)                   /* (PTC_IED) IER3 Mask */
#define PTC_IED_IER3(value)                   (PTC_IED_IER3_Msk & (_UINT8_(value) << PTC_IED_IER3_Pos)) /* Assigment of value for IER3 in the PTC_IED register */
#define PTC_IED_Msk                           _UINT8_(0xF0)                                        /* (PTC_IED) Register Mask  */

#define PTC_IED_IER_Pos                       _UINT8_(4)                                           /* (PTC_IED Position) IER3 */
#define PTC_IED_IER_Msk                       (_UINT8_(0xF) << PTC_IED_IER_Pos)                    /* (PTC_IED Mask) IER */
#define PTC_IED_IER(value)                    (PTC_IED_IER_Msk & (_UINT8_(value) << PTC_IED_IER_Pos)) 

/** \brief PTC register offsets definitions */
#define PTC_CMD_REG_OFST               _UINT32_(0x28)      /* (PTC_CMD) PTC Command Register Offset */
#define PTC_ISR_REG_OFST               _UINT32_(0x30)      /* (PTC_ISR) PTC Interrupt Status Register Offset */
#define PTC_IED_REG_OFST               _UINT32_(0x35)      /* (PTC_IED) PTC Enable Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PTC register API structure */
typedef struct
{
  __I   uint8_t                        Reserved1[0x28];
  __O   uint8_t                        PTC_CMD;            /**< Offset: 0x28 ( /W  8) PTC Command Register */
  __I   uint8_t                        Reserved2[0x07];
  __IO  uint8_t                        PTC_ISR;            /**< Offset: 0x30 (R/W  8) PTC Interrupt Status Register */
  __I   uint8_t                        Reserved3[0x04];
  __O   uint8_t                        PTC_IED;            /**< Offset: 0x35 ( /W  8) PTC Enable Register */
} ptc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_PTC_COMPONENT_H_ */
