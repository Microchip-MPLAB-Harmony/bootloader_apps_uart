/*
 * Component description for MATRIX
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
#ifndef _SAMRH71_MATRIX_COMPONENT_H_
#define _SAMRH71_MATRIX_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR MATRIX                                       */
/* ************************************************************************** */

/* -------- MATRIX_PRAS : (MATRIX Offset: 0x00) (R/W 32) Priority Register A for Slave -------- */
#define MATRIX_PRAS_M0PR_Pos                  _UINT32_(0)                                          /* (MATRIX_PRAS) Master 0 Priority Position */
#define MATRIX_PRAS_M0PR_Msk                  (_UINT32_(0x3) << MATRIX_PRAS_M0PR_Pos)              /* (MATRIX_PRAS) Master 0 Priority Mask */
#define MATRIX_PRAS_M0PR(value)               (MATRIX_PRAS_M0PR_Msk & (_UINT32_(value) << MATRIX_PRAS_M0PR_Pos)) /* Assigment of value for M0PR in the MATRIX_PRAS register */
#define MATRIX_PRAS_LQOSEN0_Pos               _UINT32_(2)                                          /* (MATRIX_PRAS) Latency Quality of Service Enable for Master 0 Position */
#define MATRIX_PRAS_LQOSEN0_Msk               (_UINT32_(0x1) << MATRIX_PRAS_LQOSEN0_Pos)           /* (MATRIX_PRAS) Latency Quality of Service Enable for Master 0 Mask */
#define MATRIX_PRAS_LQOSEN0(value)            (MATRIX_PRAS_LQOSEN0_Msk & (_UINT32_(value) << MATRIX_PRAS_LQOSEN0_Pos)) /* Assigment of value for LQOSEN0 in the MATRIX_PRAS register */
#define MATRIX_PRAS_M1PR_Pos                  _UINT32_(4)                                          /* (MATRIX_PRAS) Master 1 Priority Position */
#define MATRIX_PRAS_M1PR_Msk                  (_UINT32_(0x3) << MATRIX_PRAS_M1PR_Pos)              /* (MATRIX_PRAS) Master 1 Priority Mask */
#define MATRIX_PRAS_M1PR(value)               (MATRIX_PRAS_M1PR_Msk & (_UINT32_(value) << MATRIX_PRAS_M1PR_Pos)) /* Assigment of value for M1PR in the MATRIX_PRAS register */
#define MATRIX_PRAS_LQOSEN1_Pos               _UINT32_(6)                                          /* (MATRIX_PRAS) Latency Quality of Service Enable for Master 1 Position */
#define MATRIX_PRAS_LQOSEN1_Msk               (_UINT32_(0x1) << MATRIX_PRAS_LQOSEN1_Pos)           /* (MATRIX_PRAS) Latency Quality of Service Enable for Master 1 Mask */
#define MATRIX_PRAS_LQOSEN1(value)            (MATRIX_PRAS_LQOSEN1_Msk & (_UINT32_(value) << MATRIX_PRAS_LQOSEN1_Pos)) /* Assigment of value for LQOSEN1 in the MATRIX_PRAS register */
#define MATRIX_PRAS_M2PR_Pos                  _UINT32_(8)                                          /* (MATRIX_PRAS) Master 2 Priority Position */
#define MATRIX_PRAS_M2PR_Msk                  (_UINT32_(0x3) << MATRIX_PRAS_M2PR_Pos)              /* (MATRIX_PRAS) Master 2 Priority Mask */
#define MATRIX_PRAS_M2PR(value)               (MATRIX_PRAS_M2PR_Msk & (_UINT32_(value) << MATRIX_PRAS_M2PR_Pos)) /* Assigment of value for M2PR in the MATRIX_PRAS register */
#define MATRIX_PRAS_LQOSEN2_Pos               _UINT32_(10)                                         /* (MATRIX_PRAS) Latency Quality of Service Enable for Master 2 Position */
#define MATRIX_PRAS_LQOSEN2_Msk               (_UINT32_(0x1) << MATRIX_PRAS_LQOSEN2_Pos)           /* (MATRIX_PRAS) Latency Quality of Service Enable for Master 2 Mask */
#define MATRIX_PRAS_LQOSEN2(value)            (MATRIX_PRAS_LQOSEN2_Msk & (_UINT32_(value) << MATRIX_PRAS_LQOSEN2_Pos)) /* Assigment of value for LQOSEN2 in the MATRIX_PRAS register */
#define MATRIX_PRAS_M3PR_Pos                  _UINT32_(12)                                         /* (MATRIX_PRAS) Master 3 Priority Position */
#define MATRIX_PRAS_M3PR_Msk                  (_UINT32_(0x3) << MATRIX_PRAS_M3PR_Pos)              /* (MATRIX_PRAS) Master 3 Priority Mask */
#define MATRIX_PRAS_M3PR(value)               (MATRIX_PRAS_M3PR_Msk & (_UINT32_(value) << MATRIX_PRAS_M3PR_Pos)) /* Assigment of value for M3PR in the MATRIX_PRAS register */
#define MATRIX_PRAS_LQOSEN3_Pos               _UINT32_(14)                                         /* (MATRIX_PRAS) Latency Quality of Service Enable for Master 3 Position */
#define MATRIX_PRAS_LQOSEN3_Msk               (_UINT32_(0x1) << MATRIX_PRAS_LQOSEN3_Pos)           /* (MATRIX_PRAS) Latency Quality of Service Enable for Master 3 Mask */
#define MATRIX_PRAS_LQOSEN3(value)            (MATRIX_PRAS_LQOSEN3_Msk & (_UINT32_(value) << MATRIX_PRAS_LQOSEN3_Pos)) /* Assigment of value for LQOSEN3 in the MATRIX_PRAS register */
#define MATRIX_PRAS_M4PR_Pos                  _UINT32_(16)                                         /* (MATRIX_PRAS) Master 4 Priority Position */
#define MATRIX_PRAS_M4PR_Msk                  (_UINT32_(0x3) << MATRIX_PRAS_M4PR_Pos)              /* (MATRIX_PRAS) Master 4 Priority Mask */
#define MATRIX_PRAS_M4PR(value)               (MATRIX_PRAS_M4PR_Msk & (_UINT32_(value) << MATRIX_PRAS_M4PR_Pos)) /* Assigment of value for M4PR in the MATRIX_PRAS register */
#define MATRIX_PRAS_LQOSEN4_Pos               _UINT32_(18)                                         /* (MATRIX_PRAS) Latency Quality of Service Enable for Master 4 Position */
#define MATRIX_PRAS_LQOSEN4_Msk               (_UINT32_(0x1) << MATRIX_PRAS_LQOSEN4_Pos)           /* (MATRIX_PRAS) Latency Quality of Service Enable for Master 4 Mask */
#define MATRIX_PRAS_LQOSEN4(value)            (MATRIX_PRAS_LQOSEN4_Msk & (_UINT32_(value) << MATRIX_PRAS_LQOSEN4_Pos)) /* Assigment of value for LQOSEN4 in the MATRIX_PRAS register */
#define MATRIX_PRAS_M5PR_Pos                  _UINT32_(20)                                         /* (MATRIX_PRAS) Master 5 Priority Position */
#define MATRIX_PRAS_M5PR_Msk                  (_UINT32_(0x3) << MATRIX_PRAS_M5PR_Pos)              /* (MATRIX_PRAS) Master 5 Priority Mask */
#define MATRIX_PRAS_M5PR(value)               (MATRIX_PRAS_M5PR_Msk & (_UINT32_(value) << MATRIX_PRAS_M5PR_Pos)) /* Assigment of value for M5PR in the MATRIX_PRAS register */
#define MATRIX_PRAS_LQOSEN5_Pos               _UINT32_(22)                                         /* (MATRIX_PRAS) Latency Quality of Service Enable for Master 5 Position */
#define MATRIX_PRAS_LQOSEN5_Msk               (_UINT32_(0x1) << MATRIX_PRAS_LQOSEN5_Pos)           /* (MATRIX_PRAS) Latency Quality of Service Enable for Master 5 Mask */
#define MATRIX_PRAS_LQOSEN5(value)            (MATRIX_PRAS_LQOSEN5_Msk & (_UINT32_(value) << MATRIX_PRAS_LQOSEN5_Pos)) /* Assigment of value for LQOSEN5 in the MATRIX_PRAS register */
#define MATRIX_PRAS_M6PR_Pos                  _UINT32_(24)                                         /* (MATRIX_PRAS) Master 6 Priority Position */
#define MATRIX_PRAS_M6PR_Msk                  (_UINT32_(0x3) << MATRIX_PRAS_M6PR_Pos)              /* (MATRIX_PRAS) Master 6 Priority Mask */
#define MATRIX_PRAS_M6PR(value)               (MATRIX_PRAS_M6PR_Msk & (_UINT32_(value) << MATRIX_PRAS_M6PR_Pos)) /* Assigment of value for M6PR in the MATRIX_PRAS register */
#define MATRIX_PRAS_LQOSEN6_Pos               _UINT32_(26)                                         /* (MATRIX_PRAS) Latency Quality of Service Enable for Master 6 Position */
#define MATRIX_PRAS_LQOSEN6_Msk               (_UINT32_(0x1) << MATRIX_PRAS_LQOSEN6_Pos)           /* (MATRIX_PRAS) Latency Quality of Service Enable for Master 6 Mask */
#define MATRIX_PRAS_LQOSEN6(value)            (MATRIX_PRAS_LQOSEN6_Msk & (_UINT32_(value) << MATRIX_PRAS_LQOSEN6_Pos)) /* Assigment of value for LQOSEN6 in the MATRIX_PRAS register */
#define MATRIX_PRAS_M7PR_Pos                  _UINT32_(28)                                         /* (MATRIX_PRAS) Master 7 Priority Position */
#define MATRIX_PRAS_M7PR_Msk                  (_UINT32_(0x3) << MATRIX_PRAS_M7PR_Pos)              /* (MATRIX_PRAS) Master 7 Priority Mask */
#define MATRIX_PRAS_M7PR(value)               (MATRIX_PRAS_M7PR_Msk & (_UINT32_(value) << MATRIX_PRAS_M7PR_Pos)) /* Assigment of value for M7PR in the MATRIX_PRAS register */
#define MATRIX_PRAS_LQOSEN7_Pos               _UINT32_(30)                                         /* (MATRIX_PRAS) Latency Quality of Service Enable for Master 7 Position */
#define MATRIX_PRAS_LQOSEN7_Msk               (_UINT32_(0x1) << MATRIX_PRAS_LQOSEN7_Pos)           /* (MATRIX_PRAS) Latency Quality of Service Enable for Master 7 Mask */
#define MATRIX_PRAS_LQOSEN7(value)            (MATRIX_PRAS_LQOSEN7_Msk & (_UINT32_(value) << MATRIX_PRAS_LQOSEN7_Pos)) /* Assigment of value for LQOSEN7 in the MATRIX_PRAS register */
#define MATRIX_PRAS_Msk                       _UINT32_(0x77777777)                                 /* (MATRIX_PRAS) Register Mask  */


/* -------- MATRIX_PRBS : (MATRIX Offset: 0x04) (R/W 32) Priority Register B for Slave -------- */
#define MATRIX_PRBS_M8PR_Pos                  _UINT32_(0)                                          /* (MATRIX_PRBS) Master 8 Priority Position */
#define MATRIX_PRBS_M8PR_Msk                  (_UINT32_(0x3) << MATRIX_PRBS_M8PR_Pos)              /* (MATRIX_PRBS) Master 8 Priority Mask */
#define MATRIX_PRBS_M8PR(value)               (MATRIX_PRBS_M8PR_Msk & (_UINT32_(value) << MATRIX_PRBS_M8PR_Pos)) /* Assigment of value for M8PR in the MATRIX_PRBS register */
#define MATRIX_PRBS_LQOSEN8_Pos               _UINT32_(2)                                          /* (MATRIX_PRBS) Latency Quality of Service Enable for Master 8 Position */
#define MATRIX_PRBS_LQOSEN8_Msk               (_UINT32_(0x1) << MATRIX_PRBS_LQOSEN8_Pos)           /* (MATRIX_PRBS) Latency Quality of Service Enable for Master 8 Mask */
#define MATRIX_PRBS_LQOSEN8(value)            (MATRIX_PRBS_LQOSEN8_Msk & (_UINT32_(value) << MATRIX_PRBS_LQOSEN8_Pos)) /* Assigment of value for LQOSEN8 in the MATRIX_PRBS register */
#define MATRIX_PRBS_M9PR_Pos                  _UINT32_(4)                                          /* (MATRIX_PRBS) Master 9 Priority Position */
#define MATRIX_PRBS_M9PR_Msk                  (_UINT32_(0x3) << MATRIX_PRBS_M9PR_Pos)              /* (MATRIX_PRBS) Master 9 Priority Mask */
#define MATRIX_PRBS_M9PR(value)               (MATRIX_PRBS_M9PR_Msk & (_UINT32_(value) << MATRIX_PRBS_M9PR_Pos)) /* Assigment of value for M9PR in the MATRIX_PRBS register */
#define MATRIX_PRBS_LQOSEN9_Pos               _UINT32_(6)                                          /* (MATRIX_PRBS) Latency Quality of Service Enable for Master 9 Position */
#define MATRIX_PRBS_LQOSEN9_Msk               (_UINT32_(0x1) << MATRIX_PRBS_LQOSEN9_Pos)           /* (MATRIX_PRBS) Latency Quality of Service Enable for Master 9 Mask */
#define MATRIX_PRBS_LQOSEN9(value)            (MATRIX_PRBS_LQOSEN9_Msk & (_UINT32_(value) << MATRIX_PRBS_LQOSEN9_Pos)) /* Assigment of value for LQOSEN9 in the MATRIX_PRBS register */
#define MATRIX_PRBS_M10PR_Pos                 _UINT32_(8)                                          /* (MATRIX_PRBS) Master 10 Priority Position */
#define MATRIX_PRBS_M10PR_Msk                 (_UINT32_(0x3) << MATRIX_PRBS_M10PR_Pos)             /* (MATRIX_PRBS) Master 10 Priority Mask */
#define MATRIX_PRBS_M10PR(value)              (MATRIX_PRBS_M10PR_Msk & (_UINT32_(value) << MATRIX_PRBS_M10PR_Pos)) /* Assigment of value for M10PR in the MATRIX_PRBS register */
#define MATRIX_PRBS_LQOSEN10_Pos              _UINT32_(10)                                         /* (MATRIX_PRBS) Latency Quality of Service Enable for Master 10 Position */
#define MATRIX_PRBS_LQOSEN10_Msk              (_UINT32_(0x1) << MATRIX_PRBS_LQOSEN10_Pos)          /* (MATRIX_PRBS) Latency Quality of Service Enable for Master 10 Mask */
#define MATRIX_PRBS_LQOSEN10(value)           (MATRIX_PRBS_LQOSEN10_Msk & (_UINT32_(value) << MATRIX_PRBS_LQOSEN10_Pos)) /* Assigment of value for LQOSEN10 in the MATRIX_PRBS register */
#define MATRIX_PRBS_M11PR_Pos                 _UINT32_(12)                                         /* (MATRIX_PRBS) Master 11 Priority Position */
#define MATRIX_PRBS_M11PR_Msk                 (_UINT32_(0x3) << MATRIX_PRBS_M11PR_Pos)             /* (MATRIX_PRBS) Master 11 Priority Mask */
#define MATRIX_PRBS_M11PR(value)              (MATRIX_PRBS_M11PR_Msk & (_UINT32_(value) << MATRIX_PRBS_M11PR_Pos)) /* Assigment of value for M11PR in the MATRIX_PRBS register */
#define MATRIX_PRBS_LQOSEN11_Pos              _UINT32_(14)                                         /* (MATRIX_PRBS) Latency Quality of Service Enable for Master 11 Position */
#define MATRIX_PRBS_LQOSEN11_Msk              (_UINT32_(0x1) << MATRIX_PRBS_LQOSEN11_Pos)          /* (MATRIX_PRBS) Latency Quality of Service Enable for Master 11 Mask */
#define MATRIX_PRBS_LQOSEN11(value)           (MATRIX_PRBS_LQOSEN11_Msk & (_UINT32_(value) << MATRIX_PRBS_LQOSEN11_Pos)) /* Assigment of value for LQOSEN11 in the MATRIX_PRBS register */
#define MATRIX_PRBS_M12PR_Pos                 _UINT32_(16)                                         /* (MATRIX_PRBS) Master 12 Priority Position */
#define MATRIX_PRBS_M12PR_Msk                 (_UINT32_(0x3) << MATRIX_PRBS_M12PR_Pos)             /* (MATRIX_PRBS) Master 12 Priority Mask */
#define MATRIX_PRBS_M12PR(value)              (MATRIX_PRBS_M12PR_Msk & (_UINT32_(value) << MATRIX_PRBS_M12PR_Pos)) /* Assigment of value for M12PR in the MATRIX_PRBS register */
#define MATRIX_PRBS_LQOSEN12_Pos              _UINT32_(18)                                         /* (MATRIX_PRBS) Latency Quality of Service Enable for Master 12 Position */
#define MATRIX_PRBS_LQOSEN12_Msk              (_UINT32_(0x1) << MATRIX_PRBS_LQOSEN12_Pos)          /* (MATRIX_PRBS) Latency Quality of Service Enable for Master 12 Mask */
#define MATRIX_PRBS_LQOSEN12(value)           (MATRIX_PRBS_LQOSEN12_Msk & (_UINT32_(value) << MATRIX_PRBS_LQOSEN12_Pos)) /* Assigment of value for LQOSEN12 in the MATRIX_PRBS register */
#define MATRIX_PRBS_M13PR_Pos                 _UINT32_(20)                                         /* (MATRIX_PRBS) Master 13 Priority Position */
#define MATRIX_PRBS_M13PR_Msk                 (_UINT32_(0x3) << MATRIX_PRBS_M13PR_Pos)             /* (MATRIX_PRBS) Master 13 Priority Mask */
#define MATRIX_PRBS_M13PR(value)              (MATRIX_PRBS_M13PR_Msk & (_UINT32_(value) << MATRIX_PRBS_M13PR_Pos)) /* Assigment of value for M13PR in the MATRIX_PRBS register */
#define MATRIX_PRBS_LQOSEN13_Pos              _UINT32_(22)                                         /* (MATRIX_PRBS) Latency Quality of Service Enable for Master 13 Position */
#define MATRIX_PRBS_LQOSEN13_Msk              (_UINT32_(0x1) << MATRIX_PRBS_LQOSEN13_Pos)          /* (MATRIX_PRBS) Latency Quality of Service Enable for Master 13 Mask */
#define MATRIX_PRBS_LQOSEN13(value)           (MATRIX_PRBS_LQOSEN13_Msk & (_UINT32_(value) << MATRIX_PRBS_LQOSEN13_Pos)) /* Assigment of value for LQOSEN13 in the MATRIX_PRBS register */
#define MATRIX_PRBS_M14PR_Pos                 _UINT32_(24)                                         /* (MATRIX_PRBS) Master 14 Priority Position */
#define MATRIX_PRBS_M14PR_Msk                 (_UINT32_(0x3) << MATRIX_PRBS_M14PR_Pos)             /* (MATRIX_PRBS) Master 14 Priority Mask */
#define MATRIX_PRBS_M14PR(value)              (MATRIX_PRBS_M14PR_Msk & (_UINT32_(value) << MATRIX_PRBS_M14PR_Pos)) /* Assigment of value for M14PR in the MATRIX_PRBS register */
#define MATRIX_PRBS_LQOSEN14_Pos              _UINT32_(26)                                         /* (MATRIX_PRBS) Latency Quality of Service Enable for Master 14 Position */
#define MATRIX_PRBS_LQOSEN14_Msk              (_UINT32_(0x1) << MATRIX_PRBS_LQOSEN14_Pos)          /* (MATRIX_PRBS) Latency Quality of Service Enable for Master 14 Mask */
#define MATRIX_PRBS_LQOSEN14(value)           (MATRIX_PRBS_LQOSEN14_Msk & (_UINT32_(value) << MATRIX_PRBS_LQOSEN14_Pos)) /* Assigment of value for LQOSEN14 in the MATRIX_PRBS register */
#define MATRIX_PRBS_M15PR_Pos                 _UINT32_(28)                                         /* (MATRIX_PRBS) Master 15 Priority Position */
#define MATRIX_PRBS_M15PR_Msk                 (_UINT32_(0x3) << MATRIX_PRBS_M15PR_Pos)             /* (MATRIX_PRBS) Master 15 Priority Mask */
#define MATRIX_PRBS_M15PR(value)              (MATRIX_PRBS_M15PR_Msk & (_UINT32_(value) << MATRIX_PRBS_M15PR_Pos)) /* Assigment of value for M15PR in the MATRIX_PRBS register */
#define MATRIX_PRBS_LQOSEN15_Pos              _UINT32_(30)                                         /* (MATRIX_PRBS) Latency Quality of Service Enable for Master 15 Position */
#define MATRIX_PRBS_LQOSEN15_Msk              (_UINT32_(0x1) << MATRIX_PRBS_LQOSEN15_Pos)          /* (MATRIX_PRBS) Latency Quality of Service Enable for Master 15 Mask */
#define MATRIX_PRBS_LQOSEN15(value)           (MATRIX_PRBS_LQOSEN15_Msk & (_UINT32_(value) << MATRIX_PRBS_LQOSEN15_Pos)) /* Assigment of value for LQOSEN15 in the MATRIX_PRBS register */
#define MATRIX_PRBS_Msk                       _UINT32_(0x77777777)                                 /* (MATRIX_PRBS) Register Mask  */


/* -------- MATRIX_MCFG : (MATRIX Offset: 0x00) (R/W 32) Master Configuration Register -------- */
#define MATRIX_MCFG_ULBT_Pos                  _UINT32_(0)                                          /* (MATRIX_MCFG) Undefined Length Burst Type Position */
#define MATRIX_MCFG_ULBT_Msk                  (_UINT32_(0x7) << MATRIX_MCFG_ULBT_Pos)              /* (MATRIX_MCFG) Undefined Length Burst Type Mask */
#define MATRIX_MCFG_ULBT(value)               (MATRIX_MCFG_ULBT_Msk & (_UINT32_(value) << MATRIX_MCFG_ULBT_Pos)) /* Assigment of value for ULBT in the MATRIX_MCFG register */
#define   MATRIX_MCFG_ULBT_UNLIMITED_Val      _UINT32_(0x0)                                        /* (MATRIX_MCFG) Unlimited Length Burst-No predicted end of burst is generated, therefore INCR bursts coming from this master can only be broken if the Slave Slot Cycle Limit is reached. If the Slot Cycle Limit is not reached, the burst is normally completed by the master, at the latest, on the next AHB 1 Kbyte address boundary, allowing up to 256-beat word bursts or 128-beat double-word bursts.This value should not be used in the very particular case of a master capable of performing back-to-back undefined length bursts on a single slave, since this could indefinitely freeze the slave arbitration and thus prevent another master from accessing this slave.  */
#define   MATRIX_MCFG_ULBT_SINGLE_Val         _UINT32_(0x1)                                        /* (MATRIX_MCFG) Single Access-The undefined length burst is treated as a succession of single accesses, allowing re-arbitration at each beat of the INCR burst or bursts sequence.  */
#define   MATRIX_MCFG_ULBT_4_BEAT_Val         _UINT32_(0x2)                                        /* (MATRIX_MCFG) 4-beat Burst-The undefined length burst or bursts sequence is split into 4-beat bursts or less, allowing re-arbitration every 4 beats.  */
#define   MATRIX_MCFG_ULBT_8_BEAT_Val         _UINT32_(0x3)                                        /* (MATRIX_MCFG) 8-beat Burst-The undefined length burst or bursts sequence is split into 8-beat bursts or less, allowing re-arbitration every 8 beats.  */
#define   MATRIX_MCFG_ULBT_16_BEAT_Val        _UINT32_(0x4)                                        /* (MATRIX_MCFG) 16-beat Burst-The undefined length burst or bursts sequence is split into 16-beat bursts or less, allowing re-arbitration every 16 beats.  */
#define   MATRIX_MCFG_ULBT_32_BEAT_Val        _UINT32_(0x5)                                        /* (MATRIX_MCFG) 32-beat Burst-The undefined length burst or bursts sequence is split into 32-beat bursts or less, allowing re-arbitration every 32 beats.  */
#define   MATRIX_MCFG_ULBT_64_BEAT_Val        _UINT32_(0x6)                                        /* (MATRIX_MCFG) 64-beat Burst-The undefined length burst or bursts sequence is split into 64-beat bursts or less, allowing re-arbitration every 64 beats.  */
#define   MATRIX_MCFG_ULBT_128_BEAT_Val       _UINT32_(0x7)                                        /* (MATRIX_MCFG) 128-beat Burst-The undefined length burst or bursts sequence is split into 128-beat bursts or less, allowing re-arbitration every 128 beats.Unless duly needed, the ULBT should be left at its default 0 value for power saving.  */
#define MATRIX_MCFG_ULBT_UNLIMITED            (MATRIX_MCFG_ULBT_UNLIMITED_Val << MATRIX_MCFG_ULBT_Pos) /* (MATRIX_MCFG) Unlimited Length Burst-No predicted end of burst is generated, therefore INCR bursts coming from this master can only be broken if the Slave Slot Cycle Limit is reached. If the Slot Cycle Limit is not reached, the burst is normally completed by the master, at the latest, on the next AHB 1 Kbyte address boundary, allowing up to 256-beat word bursts or 128-beat double-word bursts.This value should not be used in the very particular case of a master capable of performing back-to-back undefined length bursts on a single slave, since this could indefinitely freeze the slave arbitration and thus prevent another master from accessing this slave. Position  */
#define MATRIX_MCFG_ULBT_SINGLE               (MATRIX_MCFG_ULBT_SINGLE_Val << MATRIX_MCFG_ULBT_Pos) /* (MATRIX_MCFG) Single Access-The undefined length burst is treated as a succession of single accesses, allowing re-arbitration at each beat of the INCR burst or bursts sequence. Position  */
#define MATRIX_MCFG_ULBT_4_BEAT               (MATRIX_MCFG_ULBT_4_BEAT_Val << MATRIX_MCFG_ULBT_Pos) /* (MATRIX_MCFG) 4-beat Burst-The undefined length burst or bursts sequence is split into 4-beat bursts or less, allowing re-arbitration every 4 beats. Position  */
#define MATRIX_MCFG_ULBT_8_BEAT               (MATRIX_MCFG_ULBT_8_BEAT_Val << MATRIX_MCFG_ULBT_Pos) /* (MATRIX_MCFG) 8-beat Burst-The undefined length burst or bursts sequence is split into 8-beat bursts or less, allowing re-arbitration every 8 beats. Position  */
#define MATRIX_MCFG_ULBT_16_BEAT              (MATRIX_MCFG_ULBT_16_BEAT_Val << MATRIX_MCFG_ULBT_Pos) /* (MATRIX_MCFG) 16-beat Burst-The undefined length burst or bursts sequence is split into 16-beat bursts or less, allowing re-arbitration every 16 beats. Position  */
#define MATRIX_MCFG_ULBT_32_BEAT              (MATRIX_MCFG_ULBT_32_BEAT_Val << MATRIX_MCFG_ULBT_Pos) /* (MATRIX_MCFG) 32-beat Burst-The undefined length burst or bursts sequence is split into 32-beat bursts or less, allowing re-arbitration every 32 beats. Position  */
#define MATRIX_MCFG_ULBT_64_BEAT              (MATRIX_MCFG_ULBT_64_BEAT_Val << MATRIX_MCFG_ULBT_Pos) /* (MATRIX_MCFG) 64-beat Burst-The undefined length burst or bursts sequence is split into 64-beat bursts or less, allowing re-arbitration every 64 beats. Position  */
#define MATRIX_MCFG_ULBT_128_BEAT             (MATRIX_MCFG_ULBT_128_BEAT_Val << MATRIX_MCFG_ULBT_Pos) /* (MATRIX_MCFG) 128-beat Burst-The undefined length burst or bursts sequence is split into 128-beat bursts or less, allowing re-arbitration every 128 beats.Unless duly needed, the ULBT should be left at its default 0 value for power saving. Position  */
#define MATRIX_MCFG_Msk                       _UINT32_(0x00000007)                                 /* (MATRIX_MCFG) Register Mask  */


/* -------- MATRIX_SCFG : (MATRIX Offset: 0x40) (R/W 32) Slave Configuration Register -------- */
#define MATRIX_SCFG_SLOT_CYCLE_Pos            _UINT32_(0)                                          /* (MATRIX_SCFG) Maximum Bus Grant Duration for Masters Position */
#define MATRIX_SCFG_SLOT_CYCLE_Msk            (_UINT32_(0x1FF) << MATRIX_SCFG_SLOT_CYCLE_Pos)      /* (MATRIX_SCFG) Maximum Bus Grant Duration for Masters Mask */
#define MATRIX_SCFG_SLOT_CYCLE(value)         (MATRIX_SCFG_SLOT_CYCLE_Msk & (_UINT32_(value) << MATRIX_SCFG_SLOT_CYCLE_Pos)) /* Assigment of value for SLOT_CYCLE in the MATRIX_SCFG register */
#define MATRIX_SCFG_DEFMSTR_TYPE_Pos          _UINT32_(16)                                         /* (MATRIX_SCFG) Default Master Type Position */
#define MATRIX_SCFG_DEFMSTR_TYPE_Msk          (_UINT32_(0x3) << MATRIX_SCFG_DEFMSTR_TYPE_Pos)      /* (MATRIX_SCFG) Default Master Type Mask */
#define MATRIX_SCFG_DEFMSTR_TYPE(value)       (MATRIX_SCFG_DEFMSTR_TYPE_Msk & (_UINT32_(value) << MATRIX_SCFG_DEFMSTR_TYPE_Pos)) /* Assigment of value for DEFMSTR_TYPE in the MATRIX_SCFG register */
#define   MATRIX_SCFG_DEFMSTR_TYPE_NONE_Val   _UINT32_(0x0)                                        /* (MATRIX_SCFG) No Default Master-At the end of the current slave access, if no other master request is pending, the slave is disconnected from all masters.This results in a one clock cycle latency for the first access of a burst transfer or for a single access.  */
#define   MATRIX_SCFG_DEFMSTR_TYPE_LAST_Val   _UINT32_(0x1)                                        /* (MATRIX_SCFG) Last Default Master-At the end of the current slave access, if no other master request is pending, the slave stays connected to the last master having accessed it.This results in not having one clock cycle latency when the last master tries to access the slave again.  */
#define   MATRIX_SCFG_DEFMSTR_TYPE_FIXED_Val  _UINT32_(0x2)                                        /* (MATRIX_SCFG) Fixed Default Master-At the end of the current slave access, if no other master request is pending, the slave connects to the fixed master the number that has been written in the FIXED_DEFMSTR field.This results in not having one clock cycle latency when the fixed master tries to access the slave again.  */
#define MATRIX_SCFG_DEFMSTR_TYPE_NONE         (MATRIX_SCFG_DEFMSTR_TYPE_NONE_Val << MATRIX_SCFG_DEFMSTR_TYPE_Pos) /* (MATRIX_SCFG) No Default Master-At the end of the current slave access, if no other master request is pending, the slave is disconnected from all masters.This results in a one clock cycle latency for the first access of a burst transfer or for a single access. Position  */
#define MATRIX_SCFG_DEFMSTR_TYPE_LAST         (MATRIX_SCFG_DEFMSTR_TYPE_LAST_Val << MATRIX_SCFG_DEFMSTR_TYPE_Pos) /* (MATRIX_SCFG) Last Default Master-At the end of the current slave access, if no other master request is pending, the slave stays connected to the last master having accessed it.This results in not having one clock cycle latency when the last master tries to access the slave again. Position  */
#define MATRIX_SCFG_DEFMSTR_TYPE_FIXED        (MATRIX_SCFG_DEFMSTR_TYPE_FIXED_Val << MATRIX_SCFG_DEFMSTR_TYPE_Pos) /* (MATRIX_SCFG) Fixed Default Master-At the end of the current slave access, if no other master request is pending, the slave connects to the fixed master the number that has been written in the FIXED_DEFMSTR field.This results in not having one clock cycle latency when the fixed master tries to access the slave again. Position  */
#define MATRIX_SCFG_FIXED_DEFMSTR_Pos         _UINT32_(18)                                         /* (MATRIX_SCFG) Fixed Default Master Position */
#define MATRIX_SCFG_FIXED_DEFMSTR_Msk         (_UINT32_(0xF) << MATRIX_SCFG_FIXED_DEFMSTR_Pos)     /* (MATRIX_SCFG) Fixed Default Master Mask */
#define MATRIX_SCFG_FIXED_DEFMSTR(value)      (MATRIX_SCFG_FIXED_DEFMSTR_Msk & (_UINT32_(value) << MATRIX_SCFG_FIXED_DEFMSTR_Pos)) /* Assigment of value for FIXED_DEFMSTR in the MATRIX_SCFG register */
#define MATRIX_SCFG_Msk                       _UINT32_(0x003F01FF)                                 /* (MATRIX_SCFG) Register Mask  */


/* -------- MATRIX_MRCR : (MATRIX Offset: 0x100) (R/W 32) Master Remap Control Register -------- */
#define MATRIX_MRCR_RCB0_Pos                  _UINT32_(0)                                          /* (MATRIX_MRCR) Remap Command Bit for Master 0 Position */
#define MATRIX_MRCR_RCB0_Msk                  (_UINT32_(0x1) << MATRIX_MRCR_RCB0_Pos)              /* (MATRIX_MRCR) Remap Command Bit for Master 0 Mask */
#define MATRIX_MRCR_RCB0(value)               (MATRIX_MRCR_RCB0_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB0_Pos)) /* Assigment of value for RCB0 in the MATRIX_MRCR register */
#define MATRIX_MRCR_RCB1_Pos                  _UINT32_(1)                                          /* (MATRIX_MRCR) Remap Command Bit for Master 1 Position */
#define MATRIX_MRCR_RCB1_Msk                  (_UINT32_(0x1) << MATRIX_MRCR_RCB1_Pos)              /* (MATRIX_MRCR) Remap Command Bit for Master 1 Mask */
#define MATRIX_MRCR_RCB1(value)               (MATRIX_MRCR_RCB1_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB1_Pos)) /* Assigment of value for RCB1 in the MATRIX_MRCR register */
#define MATRIX_MRCR_RCB2_Pos                  _UINT32_(2)                                          /* (MATRIX_MRCR) Remap Command Bit for Master 2 Position */
#define MATRIX_MRCR_RCB2_Msk                  (_UINT32_(0x1) << MATRIX_MRCR_RCB2_Pos)              /* (MATRIX_MRCR) Remap Command Bit for Master 2 Mask */
#define MATRIX_MRCR_RCB2(value)               (MATRIX_MRCR_RCB2_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB2_Pos)) /* Assigment of value for RCB2 in the MATRIX_MRCR register */
#define MATRIX_MRCR_RCB3_Pos                  _UINT32_(3)                                          /* (MATRIX_MRCR) Remap Command Bit for Master 3 Position */
#define MATRIX_MRCR_RCB3_Msk                  (_UINT32_(0x1) << MATRIX_MRCR_RCB3_Pos)              /* (MATRIX_MRCR) Remap Command Bit for Master 3 Mask */
#define MATRIX_MRCR_RCB3(value)               (MATRIX_MRCR_RCB3_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB3_Pos)) /* Assigment of value for RCB3 in the MATRIX_MRCR register */
#define MATRIX_MRCR_RCB4_Pos                  _UINT32_(4)                                          /* (MATRIX_MRCR) Remap Command Bit for Master 4 Position */
#define MATRIX_MRCR_RCB4_Msk                  (_UINT32_(0x1) << MATRIX_MRCR_RCB4_Pos)              /* (MATRIX_MRCR) Remap Command Bit for Master 4 Mask */
#define MATRIX_MRCR_RCB4(value)               (MATRIX_MRCR_RCB4_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB4_Pos)) /* Assigment of value for RCB4 in the MATRIX_MRCR register */
#define MATRIX_MRCR_RCB5_Pos                  _UINT32_(5)                                          /* (MATRIX_MRCR) Remap Command Bit for Master 5 Position */
#define MATRIX_MRCR_RCB5_Msk                  (_UINT32_(0x1) << MATRIX_MRCR_RCB5_Pos)              /* (MATRIX_MRCR) Remap Command Bit for Master 5 Mask */
#define MATRIX_MRCR_RCB5(value)               (MATRIX_MRCR_RCB5_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB5_Pos)) /* Assigment of value for RCB5 in the MATRIX_MRCR register */
#define MATRIX_MRCR_RCB6_Pos                  _UINT32_(6)                                          /* (MATRIX_MRCR) Remap Command Bit for Master 6 Position */
#define MATRIX_MRCR_RCB6_Msk                  (_UINT32_(0x1) << MATRIX_MRCR_RCB6_Pos)              /* (MATRIX_MRCR) Remap Command Bit for Master 6 Mask */
#define MATRIX_MRCR_RCB6(value)               (MATRIX_MRCR_RCB6_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB6_Pos)) /* Assigment of value for RCB6 in the MATRIX_MRCR register */
#define MATRIX_MRCR_RCB7_Pos                  _UINT32_(7)                                          /* (MATRIX_MRCR) Remap Command Bit for Master 7 Position */
#define MATRIX_MRCR_RCB7_Msk                  (_UINT32_(0x1) << MATRIX_MRCR_RCB7_Pos)              /* (MATRIX_MRCR) Remap Command Bit for Master 7 Mask */
#define MATRIX_MRCR_RCB7(value)               (MATRIX_MRCR_RCB7_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB7_Pos)) /* Assigment of value for RCB7 in the MATRIX_MRCR register */
#define MATRIX_MRCR_RCB8_Pos                  _UINT32_(8)                                          /* (MATRIX_MRCR) Remap Command Bit for Master 8 Position */
#define MATRIX_MRCR_RCB8_Msk                  (_UINT32_(0x1) << MATRIX_MRCR_RCB8_Pos)              /* (MATRIX_MRCR) Remap Command Bit for Master 8 Mask */
#define MATRIX_MRCR_RCB8(value)               (MATRIX_MRCR_RCB8_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB8_Pos)) /* Assigment of value for RCB8 in the MATRIX_MRCR register */
#define MATRIX_MRCR_RCB9_Pos                  _UINT32_(9)                                          /* (MATRIX_MRCR) Remap Command Bit for Master 9 Position */
#define MATRIX_MRCR_RCB9_Msk                  (_UINT32_(0x1) << MATRIX_MRCR_RCB9_Pos)              /* (MATRIX_MRCR) Remap Command Bit for Master 9 Mask */
#define MATRIX_MRCR_RCB9(value)               (MATRIX_MRCR_RCB9_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB9_Pos)) /* Assigment of value for RCB9 in the MATRIX_MRCR register */
#define MATRIX_MRCR_RCB10_Pos                 _UINT32_(10)                                         /* (MATRIX_MRCR) Remap Command Bit for Master 10 Position */
#define MATRIX_MRCR_RCB10_Msk                 (_UINT32_(0x1) << MATRIX_MRCR_RCB10_Pos)             /* (MATRIX_MRCR) Remap Command Bit for Master 10 Mask */
#define MATRIX_MRCR_RCB10(value)              (MATRIX_MRCR_RCB10_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB10_Pos)) /* Assigment of value for RCB10 in the MATRIX_MRCR register */
#define MATRIX_MRCR_RCB11_Pos                 _UINT32_(11)                                         /* (MATRIX_MRCR) Remap Command Bit for Master 11 Position */
#define MATRIX_MRCR_RCB11_Msk                 (_UINT32_(0x1) << MATRIX_MRCR_RCB11_Pos)             /* (MATRIX_MRCR) Remap Command Bit for Master 11 Mask */
#define MATRIX_MRCR_RCB11(value)              (MATRIX_MRCR_RCB11_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB11_Pos)) /* Assigment of value for RCB11 in the MATRIX_MRCR register */
#define MATRIX_MRCR_RCB12_Pos                 _UINT32_(12)                                         /* (MATRIX_MRCR) Remap Command Bit for Master 12 Position */
#define MATRIX_MRCR_RCB12_Msk                 (_UINT32_(0x1) << MATRIX_MRCR_RCB12_Pos)             /* (MATRIX_MRCR) Remap Command Bit for Master 12 Mask */
#define MATRIX_MRCR_RCB12(value)              (MATRIX_MRCR_RCB12_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB12_Pos)) /* Assigment of value for RCB12 in the MATRIX_MRCR register */
#define MATRIX_MRCR_RCB13_Pos                 _UINT32_(13)                                         /* (MATRIX_MRCR) Remap Command Bit for Master 13 Position */
#define MATRIX_MRCR_RCB13_Msk                 (_UINT32_(0x1) << MATRIX_MRCR_RCB13_Pos)             /* (MATRIX_MRCR) Remap Command Bit for Master 13 Mask */
#define MATRIX_MRCR_RCB13(value)              (MATRIX_MRCR_RCB13_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB13_Pos)) /* Assigment of value for RCB13 in the MATRIX_MRCR register */
#define MATRIX_MRCR_RCB14_Pos                 _UINT32_(14)                                         /* (MATRIX_MRCR) Remap Command Bit for Master 14 Position */
#define MATRIX_MRCR_RCB14_Msk                 (_UINT32_(0x1) << MATRIX_MRCR_RCB14_Pos)             /* (MATRIX_MRCR) Remap Command Bit for Master 14 Mask */
#define MATRIX_MRCR_RCB14(value)              (MATRIX_MRCR_RCB14_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB14_Pos)) /* Assigment of value for RCB14 in the MATRIX_MRCR register */
#define MATRIX_MRCR_RCB15_Pos                 _UINT32_(15)                                         /* (MATRIX_MRCR) Remap Command Bit for Master 15 Position */
#define MATRIX_MRCR_RCB15_Msk                 (_UINT32_(0x1) << MATRIX_MRCR_RCB15_Pos)             /* (MATRIX_MRCR) Remap Command Bit for Master 15 Mask */
#define MATRIX_MRCR_RCB15(value)              (MATRIX_MRCR_RCB15_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB15_Pos)) /* Assigment of value for RCB15 in the MATRIX_MRCR register */
#define MATRIX_MRCR_Msk                       _UINT32_(0x0000FFFF)                                 /* (MATRIX_MRCR) Register Mask  */

#define MATRIX_MRCR_RCB_Pos                   _UINT32_(0)                                          /* (MATRIX_MRCR Position) Remap Command Bit for Master x5 */
#define MATRIX_MRCR_RCB_Msk                   (_UINT32_(0xFFFF) << MATRIX_MRCR_RCB_Pos)            /* (MATRIX_MRCR Mask) RCB */
#define MATRIX_MRCR_RCB(value)                (MATRIX_MRCR_RCB_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB_Pos)) 

/* -------- MATRIX_MEIER : (MATRIX Offset: 0x150) ( /W 32) Master Error Interrupt Enable Register -------- */
#define MATRIX_MEIER_MERR0_Pos                _UINT32_(0)                                          /* (MATRIX_MEIER) Master 0 Access Error Position */
#define MATRIX_MEIER_MERR0_Msk                (_UINT32_(0x1) << MATRIX_MEIER_MERR0_Pos)            /* (MATRIX_MEIER) Master 0 Access Error Mask */
#define MATRIX_MEIER_MERR0(value)             (MATRIX_MEIER_MERR0_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR0_Pos)) /* Assigment of value for MERR0 in the MATRIX_MEIER register */
#define MATRIX_MEIER_MERR1_Pos                _UINT32_(1)                                          /* (MATRIX_MEIER) Master 1 Access Error Position */
#define MATRIX_MEIER_MERR1_Msk                (_UINT32_(0x1) << MATRIX_MEIER_MERR1_Pos)            /* (MATRIX_MEIER) Master 1 Access Error Mask */
#define MATRIX_MEIER_MERR1(value)             (MATRIX_MEIER_MERR1_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR1_Pos)) /* Assigment of value for MERR1 in the MATRIX_MEIER register */
#define MATRIX_MEIER_MERR2_Pos                _UINT32_(2)                                          /* (MATRIX_MEIER) Master 2 Access Error Position */
#define MATRIX_MEIER_MERR2_Msk                (_UINT32_(0x1) << MATRIX_MEIER_MERR2_Pos)            /* (MATRIX_MEIER) Master 2 Access Error Mask */
#define MATRIX_MEIER_MERR2(value)             (MATRIX_MEIER_MERR2_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR2_Pos)) /* Assigment of value for MERR2 in the MATRIX_MEIER register */
#define MATRIX_MEIER_MERR3_Pos                _UINT32_(3)                                          /* (MATRIX_MEIER) Master 3 Access Error Position */
#define MATRIX_MEIER_MERR3_Msk                (_UINT32_(0x1) << MATRIX_MEIER_MERR3_Pos)            /* (MATRIX_MEIER) Master 3 Access Error Mask */
#define MATRIX_MEIER_MERR3(value)             (MATRIX_MEIER_MERR3_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR3_Pos)) /* Assigment of value for MERR3 in the MATRIX_MEIER register */
#define MATRIX_MEIER_MERR4_Pos                _UINT32_(4)                                          /* (MATRIX_MEIER) Master 4 Access Error Position */
#define MATRIX_MEIER_MERR4_Msk                (_UINT32_(0x1) << MATRIX_MEIER_MERR4_Pos)            /* (MATRIX_MEIER) Master 4 Access Error Mask */
#define MATRIX_MEIER_MERR4(value)             (MATRIX_MEIER_MERR4_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR4_Pos)) /* Assigment of value for MERR4 in the MATRIX_MEIER register */
#define MATRIX_MEIER_MERR5_Pos                _UINT32_(5)                                          /* (MATRIX_MEIER) Master 5 Access Error Position */
#define MATRIX_MEIER_MERR5_Msk                (_UINT32_(0x1) << MATRIX_MEIER_MERR5_Pos)            /* (MATRIX_MEIER) Master 5 Access Error Mask */
#define MATRIX_MEIER_MERR5(value)             (MATRIX_MEIER_MERR5_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR5_Pos)) /* Assigment of value for MERR5 in the MATRIX_MEIER register */
#define MATRIX_MEIER_MERR6_Pos                _UINT32_(6)                                          /* (MATRIX_MEIER) Master 6 Access Error Position */
#define MATRIX_MEIER_MERR6_Msk                (_UINT32_(0x1) << MATRIX_MEIER_MERR6_Pos)            /* (MATRIX_MEIER) Master 6 Access Error Mask */
#define MATRIX_MEIER_MERR6(value)             (MATRIX_MEIER_MERR6_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR6_Pos)) /* Assigment of value for MERR6 in the MATRIX_MEIER register */
#define MATRIX_MEIER_MERR7_Pos                _UINT32_(7)                                          /* (MATRIX_MEIER) Master 7 Access Error Position */
#define MATRIX_MEIER_MERR7_Msk                (_UINT32_(0x1) << MATRIX_MEIER_MERR7_Pos)            /* (MATRIX_MEIER) Master 7 Access Error Mask */
#define MATRIX_MEIER_MERR7(value)             (MATRIX_MEIER_MERR7_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR7_Pos)) /* Assigment of value for MERR7 in the MATRIX_MEIER register */
#define MATRIX_MEIER_MERR8_Pos                _UINT32_(8)                                          /* (MATRIX_MEIER) Master 8 Access Error Position */
#define MATRIX_MEIER_MERR8_Msk                (_UINT32_(0x1) << MATRIX_MEIER_MERR8_Pos)            /* (MATRIX_MEIER) Master 8 Access Error Mask */
#define MATRIX_MEIER_MERR8(value)             (MATRIX_MEIER_MERR8_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR8_Pos)) /* Assigment of value for MERR8 in the MATRIX_MEIER register */
#define MATRIX_MEIER_MERR9_Pos                _UINT32_(9)                                          /* (MATRIX_MEIER) Master 9 Access Error Position */
#define MATRIX_MEIER_MERR9_Msk                (_UINT32_(0x1) << MATRIX_MEIER_MERR9_Pos)            /* (MATRIX_MEIER) Master 9 Access Error Mask */
#define MATRIX_MEIER_MERR9(value)             (MATRIX_MEIER_MERR9_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR9_Pos)) /* Assigment of value for MERR9 in the MATRIX_MEIER register */
#define MATRIX_MEIER_MERR10_Pos               _UINT32_(10)                                         /* (MATRIX_MEIER) Master 10 Access Error Position */
#define MATRIX_MEIER_MERR10_Msk               (_UINT32_(0x1) << MATRIX_MEIER_MERR10_Pos)           /* (MATRIX_MEIER) Master 10 Access Error Mask */
#define MATRIX_MEIER_MERR10(value)            (MATRIX_MEIER_MERR10_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR10_Pos)) /* Assigment of value for MERR10 in the MATRIX_MEIER register */
#define MATRIX_MEIER_MERR11_Pos               _UINT32_(11)                                         /* (MATRIX_MEIER) Master 11 Access Error Position */
#define MATRIX_MEIER_MERR11_Msk               (_UINT32_(0x1) << MATRIX_MEIER_MERR11_Pos)           /* (MATRIX_MEIER) Master 11 Access Error Mask */
#define MATRIX_MEIER_MERR11(value)            (MATRIX_MEIER_MERR11_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR11_Pos)) /* Assigment of value for MERR11 in the MATRIX_MEIER register */
#define MATRIX_MEIER_MERR12_Pos               _UINT32_(12)                                         /* (MATRIX_MEIER) Master 12 Access Error Position */
#define MATRIX_MEIER_MERR12_Msk               (_UINT32_(0x1) << MATRIX_MEIER_MERR12_Pos)           /* (MATRIX_MEIER) Master 12 Access Error Mask */
#define MATRIX_MEIER_MERR12(value)            (MATRIX_MEIER_MERR12_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR12_Pos)) /* Assigment of value for MERR12 in the MATRIX_MEIER register */
#define MATRIX_MEIER_MERR13_Pos               _UINT32_(13)                                         /* (MATRIX_MEIER) Master 13 Access Error Position */
#define MATRIX_MEIER_MERR13_Msk               (_UINT32_(0x1) << MATRIX_MEIER_MERR13_Pos)           /* (MATRIX_MEIER) Master 13 Access Error Mask */
#define MATRIX_MEIER_MERR13(value)            (MATRIX_MEIER_MERR13_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR13_Pos)) /* Assigment of value for MERR13 in the MATRIX_MEIER register */
#define MATRIX_MEIER_MERR14_Pos               _UINT32_(14)                                         /* (MATRIX_MEIER) Master 14 Access Error Position */
#define MATRIX_MEIER_MERR14_Msk               (_UINT32_(0x1) << MATRIX_MEIER_MERR14_Pos)           /* (MATRIX_MEIER) Master 14 Access Error Mask */
#define MATRIX_MEIER_MERR14(value)            (MATRIX_MEIER_MERR14_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR14_Pos)) /* Assigment of value for MERR14 in the MATRIX_MEIER register */
#define MATRIX_MEIER_MERR15_Pos               _UINT32_(15)                                         /* (MATRIX_MEIER) Master 15 Access Error Position */
#define MATRIX_MEIER_MERR15_Msk               (_UINT32_(0x1) << MATRIX_MEIER_MERR15_Pos)           /* (MATRIX_MEIER) Master 15 Access Error Mask */
#define MATRIX_MEIER_MERR15(value)            (MATRIX_MEIER_MERR15_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR15_Pos)) /* Assigment of value for MERR15 in the MATRIX_MEIER register */
#define MATRIX_MEIER_Msk                      _UINT32_(0x0000FFFF)                                 /* (MATRIX_MEIER) Register Mask  */

#define MATRIX_MEIER_MERR_Pos                 _UINT32_(0)                                          /* (MATRIX_MEIER Position) Master x5 Access Error */
#define MATRIX_MEIER_MERR_Msk                 (_UINT32_(0xFFFF) << MATRIX_MEIER_MERR_Pos)          /* (MATRIX_MEIER Mask) MERR */
#define MATRIX_MEIER_MERR(value)              (MATRIX_MEIER_MERR_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR_Pos)) 

/* -------- MATRIX_MEIDR : (MATRIX Offset: 0x154) ( /W 32) Master Error Interrupt Disable Register -------- */
#define MATRIX_MEIDR_MERR0_Pos                _UINT32_(0)                                          /* (MATRIX_MEIDR) Master 0 Access Error Position */
#define MATRIX_MEIDR_MERR0_Msk                (_UINT32_(0x1) << MATRIX_MEIDR_MERR0_Pos)            /* (MATRIX_MEIDR) Master 0 Access Error Mask */
#define MATRIX_MEIDR_MERR0(value)             (MATRIX_MEIDR_MERR0_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR0_Pos)) /* Assigment of value for MERR0 in the MATRIX_MEIDR register */
#define MATRIX_MEIDR_MERR1_Pos                _UINT32_(1)                                          /* (MATRIX_MEIDR) Master 1 Access Error Position */
#define MATRIX_MEIDR_MERR1_Msk                (_UINT32_(0x1) << MATRIX_MEIDR_MERR1_Pos)            /* (MATRIX_MEIDR) Master 1 Access Error Mask */
#define MATRIX_MEIDR_MERR1(value)             (MATRIX_MEIDR_MERR1_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR1_Pos)) /* Assigment of value for MERR1 in the MATRIX_MEIDR register */
#define MATRIX_MEIDR_MERR2_Pos                _UINT32_(2)                                          /* (MATRIX_MEIDR) Master 2 Access Error Position */
#define MATRIX_MEIDR_MERR2_Msk                (_UINT32_(0x1) << MATRIX_MEIDR_MERR2_Pos)            /* (MATRIX_MEIDR) Master 2 Access Error Mask */
#define MATRIX_MEIDR_MERR2(value)             (MATRIX_MEIDR_MERR2_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR2_Pos)) /* Assigment of value for MERR2 in the MATRIX_MEIDR register */
#define MATRIX_MEIDR_MERR3_Pos                _UINT32_(3)                                          /* (MATRIX_MEIDR) Master 3 Access Error Position */
#define MATRIX_MEIDR_MERR3_Msk                (_UINT32_(0x1) << MATRIX_MEIDR_MERR3_Pos)            /* (MATRIX_MEIDR) Master 3 Access Error Mask */
#define MATRIX_MEIDR_MERR3(value)             (MATRIX_MEIDR_MERR3_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR3_Pos)) /* Assigment of value for MERR3 in the MATRIX_MEIDR register */
#define MATRIX_MEIDR_MERR4_Pos                _UINT32_(4)                                          /* (MATRIX_MEIDR) Master 4 Access Error Position */
#define MATRIX_MEIDR_MERR4_Msk                (_UINT32_(0x1) << MATRIX_MEIDR_MERR4_Pos)            /* (MATRIX_MEIDR) Master 4 Access Error Mask */
#define MATRIX_MEIDR_MERR4(value)             (MATRIX_MEIDR_MERR4_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR4_Pos)) /* Assigment of value for MERR4 in the MATRIX_MEIDR register */
#define MATRIX_MEIDR_MERR5_Pos                _UINT32_(5)                                          /* (MATRIX_MEIDR) Master 5 Access Error Position */
#define MATRIX_MEIDR_MERR5_Msk                (_UINT32_(0x1) << MATRIX_MEIDR_MERR5_Pos)            /* (MATRIX_MEIDR) Master 5 Access Error Mask */
#define MATRIX_MEIDR_MERR5(value)             (MATRIX_MEIDR_MERR5_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR5_Pos)) /* Assigment of value for MERR5 in the MATRIX_MEIDR register */
#define MATRIX_MEIDR_MERR6_Pos                _UINT32_(6)                                          /* (MATRIX_MEIDR) Master 6 Access Error Position */
#define MATRIX_MEIDR_MERR6_Msk                (_UINT32_(0x1) << MATRIX_MEIDR_MERR6_Pos)            /* (MATRIX_MEIDR) Master 6 Access Error Mask */
#define MATRIX_MEIDR_MERR6(value)             (MATRIX_MEIDR_MERR6_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR6_Pos)) /* Assigment of value for MERR6 in the MATRIX_MEIDR register */
#define MATRIX_MEIDR_MERR7_Pos                _UINT32_(7)                                          /* (MATRIX_MEIDR) Master 7 Access Error Position */
#define MATRIX_MEIDR_MERR7_Msk                (_UINT32_(0x1) << MATRIX_MEIDR_MERR7_Pos)            /* (MATRIX_MEIDR) Master 7 Access Error Mask */
#define MATRIX_MEIDR_MERR7(value)             (MATRIX_MEIDR_MERR7_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR7_Pos)) /* Assigment of value for MERR7 in the MATRIX_MEIDR register */
#define MATRIX_MEIDR_MERR8_Pos                _UINT32_(8)                                          /* (MATRIX_MEIDR) Master 8 Access Error Position */
#define MATRIX_MEIDR_MERR8_Msk                (_UINT32_(0x1) << MATRIX_MEIDR_MERR8_Pos)            /* (MATRIX_MEIDR) Master 8 Access Error Mask */
#define MATRIX_MEIDR_MERR8(value)             (MATRIX_MEIDR_MERR8_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR8_Pos)) /* Assigment of value for MERR8 in the MATRIX_MEIDR register */
#define MATRIX_MEIDR_MERR9_Pos                _UINT32_(9)                                          /* (MATRIX_MEIDR) Master 9 Access Error Position */
#define MATRIX_MEIDR_MERR9_Msk                (_UINT32_(0x1) << MATRIX_MEIDR_MERR9_Pos)            /* (MATRIX_MEIDR) Master 9 Access Error Mask */
#define MATRIX_MEIDR_MERR9(value)             (MATRIX_MEIDR_MERR9_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR9_Pos)) /* Assigment of value for MERR9 in the MATRIX_MEIDR register */
#define MATRIX_MEIDR_MERR10_Pos               _UINT32_(10)                                         /* (MATRIX_MEIDR) Master 10 Access Error Position */
#define MATRIX_MEIDR_MERR10_Msk               (_UINT32_(0x1) << MATRIX_MEIDR_MERR10_Pos)           /* (MATRIX_MEIDR) Master 10 Access Error Mask */
#define MATRIX_MEIDR_MERR10(value)            (MATRIX_MEIDR_MERR10_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR10_Pos)) /* Assigment of value for MERR10 in the MATRIX_MEIDR register */
#define MATRIX_MEIDR_MERR11_Pos               _UINT32_(11)                                         /* (MATRIX_MEIDR) Master 11 Access Error Position */
#define MATRIX_MEIDR_MERR11_Msk               (_UINT32_(0x1) << MATRIX_MEIDR_MERR11_Pos)           /* (MATRIX_MEIDR) Master 11 Access Error Mask */
#define MATRIX_MEIDR_MERR11(value)            (MATRIX_MEIDR_MERR11_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR11_Pos)) /* Assigment of value for MERR11 in the MATRIX_MEIDR register */
#define MATRIX_MEIDR_MERR12_Pos               _UINT32_(12)                                         /* (MATRIX_MEIDR) Master 12 Access Error Position */
#define MATRIX_MEIDR_MERR12_Msk               (_UINT32_(0x1) << MATRIX_MEIDR_MERR12_Pos)           /* (MATRIX_MEIDR) Master 12 Access Error Mask */
#define MATRIX_MEIDR_MERR12(value)            (MATRIX_MEIDR_MERR12_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR12_Pos)) /* Assigment of value for MERR12 in the MATRIX_MEIDR register */
#define MATRIX_MEIDR_MERR13_Pos               _UINT32_(13)                                         /* (MATRIX_MEIDR) Master 13 Access Error Position */
#define MATRIX_MEIDR_MERR13_Msk               (_UINT32_(0x1) << MATRIX_MEIDR_MERR13_Pos)           /* (MATRIX_MEIDR) Master 13 Access Error Mask */
#define MATRIX_MEIDR_MERR13(value)            (MATRIX_MEIDR_MERR13_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR13_Pos)) /* Assigment of value for MERR13 in the MATRIX_MEIDR register */
#define MATRIX_MEIDR_MERR14_Pos               _UINT32_(14)                                         /* (MATRIX_MEIDR) Master 14 Access Error Position */
#define MATRIX_MEIDR_MERR14_Msk               (_UINT32_(0x1) << MATRIX_MEIDR_MERR14_Pos)           /* (MATRIX_MEIDR) Master 14 Access Error Mask */
#define MATRIX_MEIDR_MERR14(value)            (MATRIX_MEIDR_MERR14_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR14_Pos)) /* Assigment of value for MERR14 in the MATRIX_MEIDR register */
#define MATRIX_MEIDR_MERR15_Pos               _UINT32_(15)                                         /* (MATRIX_MEIDR) Master 15 Access Error Position */
#define MATRIX_MEIDR_MERR15_Msk               (_UINT32_(0x1) << MATRIX_MEIDR_MERR15_Pos)           /* (MATRIX_MEIDR) Master 15 Access Error Mask */
#define MATRIX_MEIDR_MERR15(value)            (MATRIX_MEIDR_MERR15_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR15_Pos)) /* Assigment of value for MERR15 in the MATRIX_MEIDR register */
#define MATRIX_MEIDR_Msk                      _UINT32_(0x0000FFFF)                                 /* (MATRIX_MEIDR) Register Mask  */

#define MATRIX_MEIDR_MERR_Pos                 _UINT32_(0)                                          /* (MATRIX_MEIDR Position) Master x5 Access Error */
#define MATRIX_MEIDR_MERR_Msk                 (_UINT32_(0xFFFF) << MATRIX_MEIDR_MERR_Pos)          /* (MATRIX_MEIDR Mask) MERR */
#define MATRIX_MEIDR_MERR(value)              (MATRIX_MEIDR_MERR_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR_Pos)) 

/* -------- MATRIX_MEIMR : (MATRIX Offset: 0x158) ( R/ 32) Master Error Interrupt Mask Register -------- */
#define MATRIX_MEIMR_MERR0_Pos                _UINT32_(0)                                          /* (MATRIX_MEIMR) Master 0 Access Error Position */
#define MATRIX_MEIMR_MERR0_Msk                (_UINT32_(0x1) << MATRIX_MEIMR_MERR0_Pos)            /* (MATRIX_MEIMR) Master 0 Access Error Mask */
#define MATRIX_MEIMR_MERR0(value)             (MATRIX_MEIMR_MERR0_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR0_Pos)) /* Assigment of value for MERR0 in the MATRIX_MEIMR register */
#define MATRIX_MEIMR_MERR1_Pos                _UINT32_(1)                                          /* (MATRIX_MEIMR) Master 1 Access Error Position */
#define MATRIX_MEIMR_MERR1_Msk                (_UINT32_(0x1) << MATRIX_MEIMR_MERR1_Pos)            /* (MATRIX_MEIMR) Master 1 Access Error Mask */
#define MATRIX_MEIMR_MERR1(value)             (MATRIX_MEIMR_MERR1_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR1_Pos)) /* Assigment of value for MERR1 in the MATRIX_MEIMR register */
#define MATRIX_MEIMR_MERR2_Pos                _UINT32_(2)                                          /* (MATRIX_MEIMR) Master 2 Access Error Position */
#define MATRIX_MEIMR_MERR2_Msk                (_UINT32_(0x1) << MATRIX_MEIMR_MERR2_Pos)            /* (MATRIX_MEIMR) Master 2 Access Error Mask */
#define MATRIX_MEIMR_MERR2(value)             (MATRIX_MEIMR_MERR2_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR2_Pos)) /* Assigment of value for MERR2 in the MATRIX_MEIMR register */
#define MATRIX_MEIMR_MERR3_Pos                _UINT32_(3)                                          /* (MATRIX_MEIMR) Master 3 Access Error Position */
#define MATRIX_MEIMR_MERR3_Msk                (_UINT32_(0x1) << MATRIX_MEIMR_MERR3_Pos)            /* (MATRIX_MEIMR) Master 3 Access Error Mask */
#define MATRIX_MEIMR_MERR3(value)             (MATRIX_MEIMR_MERR3_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR3_Pos)) /* Assigment of value for MERR3 in the MATRIX_MEIMR register */
#define MATRIX_MEIMR_MERR4_Pos                _UINT32_(4)                                          /* (MATRIX_MEIMR) Master 4 Access Error Position */
#define MATRIX_MEIMR_MERR4_Msk                (_UINT32_(0x1) << MATRIX_MEIMR_MERR4_Pos)            /* (MATRIX_MEIMR) Master 4 Access Error Mask */
#define MATRIX_MEIMR_MERR4(value)             (MATRIX_MEIMR_MERR4_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR4_Pos)) /* Assigment of value for MERR4 in the MATRIX_MEIMR register */
#define MATRIX_MEIMR_MERR5_Pos                _UINT32_(5)                                          /* (MATRIX_MEIMR) Master 5 Access Error Position */
#define MATRIX_MEIMR_MERR5_Msk                (_UINT32_(0x1) << MATRIX_MEIMR_MERR5_Pos)            /* (MATRIX_MEIMR) Master 5 Access Error Mask */
#define MATRIX_MEIMR_MERR5(value)             (MATRIX_MEIMR_MERR5_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR5_Pos)) /* Assigment of value for MERR5 in the MATRIX_MEIMR register */
#define MATRIX_MEIMR_MERR6_Pos                _UINT32_(6)                                          /* (MATRIX_MEIMR) Master 6 Access Error Position */
#define MATRIX_MEIMR_MERR6_Msk                (_UINT32_(0x1) << MATRIX_MEIMR_MERR6_Pos)            /* (MATRIX_MEIMR) Master 6 Access Error Mask */
#define MATRIX_MEIMR_MERR6(value)             (MATRIX_MEIMR_MERR6_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR6_Pos)) /* Assigment of value for MERR6 in the MATRIX_MEIMR register */
#define MATRIX_MEIMR_MERR7_Pos                _UINT32_(7)                                          /* (MATRIX_MEIMR) Master 7 Access Error Position */
#define MATRIX_MEIMR_MERR7_Msk                (_UINT32_(0x1) << MATRIX_MEIMR_MERR7_Pos)            /* (MATRIX_MEIMR) Master 7 Access Error Mask */
#define MATRIX_MEIMR_MERR7(value)             (MATRIX_MEIMR_MERR7_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR7_Pos)) /* Assigment of value for MERR7 in the MATRIX_MEIMR register */
#define MATRIX_MEIMR_MERR8_Pos                _UINT32_(8)                                          /* (MATRIX_MEIMR) Master 8 Access Error Position */
#define MATRIX_MEIMR_MERR8_Msk                (_UINT32_(0x1) << MATRIX_MEIMR_MERR8_Pos)            /* (MATRIX_MEIMR) Master 8 Access Error Mask */
#define MATRIX_MEIMR_MERR8(value)             (MATRIX_MEIMR_MERR8_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR8_Pos)) /* Assigment of value for MERR8 in the MATRIX_MEIMR register */
#define MATRIX_MEIMR_MERR9_Pos                _UINT32_(9)                                          /* (MATRIX_MEIMR) Master 9 Access Error Position */
#define MATRIX_MEIMR_MERR9_Msk                (_UINT32_(0x1) << MATRIX_MEIMR_MERR9_Pos)            /* (MATRIX_MEIMR) Master 9 Access Error Mask */
#define MATRIX_MEIMR_MERR9(value)             (MATRIX_MEIMR_MERR9_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR9_Pos)) /* Assigment of value for MERR9 in the MATRIX_MEIMR register */
#define MATRIX_MEIMR_MERR10_Pos               _UINT32_(10)                                         /* (MATRIX_MEIMR) Master 10 Access Error Position */
#define MATRIX_MEIMR_MERR10_Msk               (_UINT32_(0x1) << MATRIX_MEIMR_MERR10_Pos)           /* (MATRIX_MEIMR) Master 10 Access Error Mask */
#define MATRIX_MEIMR_MERR10(value)            (MATRIX_MEIMR_MERR10_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR10_Pos)) /* Assigment of value for MERR10 in the MATRIX_MEIMR register */
#define MATRIX_MEIMR_MERR11_Pos               _UINT32_(11)                                         /* (MATRIX_MEIMR) Master 11 Access Error Position */
#define MATRIX_MEIMR_MERR11_Msk               (_UINT32_(0x1) << MATRIX_MEIMR_MERR11_Pos)           /* (MATRIX_MEIMR) Master 11 Access Error Mask */
#define MATRIX_MEIMR_MERR11(value)            (MATRIX_MEIMR_MERR11_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR11_Pos)) /* Assigment of value for MERR11 in the MATRIX_MEIMR register */
#define MATRIX_MEIMR_MERR12_Pos               _UINT32_(12)                                         /* (MATRIX_MEIMR) Master 12 Access Error Position */
#define MATRIX_MEIMR_MERR12_Msk               (_UINT32_(0x1) << MATRIX_MEIMR_MERR12_Pos)           /* (MATRIX_MEIMR) Master 12 Access Error Mask */
#define MATRIX_MEIMR_MERR12(value)            (MATRIX_MEIMR_MERR12_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR12_Pos)) /* Assigment of value for MERR12 in the MATRIX_MEIMR register */
#define MATRIX_MEIMR_MERR13_Pos               _UINT32_(13)                                         /* (MATRIX_MEIMR) Master 13 Access Error Position */
#define MATRIX_MEIMR_MERR13_Msk               (_UINT32_(0x1) << MATRIX_MEIMR_MERR13_Pos)           /* (MATRIX_MEIMR) Master 13 Access Error Mask */
#define MATRIX_MEIMR_MERR13(value)            (MATRIX_MEIMR_MERR13_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR13_Pos)) /* Assigment of value for MERR13 in the MATRIX_MEIMR register */
#define MATRIX_MEIMR_MERR14_Pos               _UINT32_(14)                                         /* (MATRIX_MEIMR) Master 14 Access Error Position */
#define MATRIX_MEIMR_MERR14_Msk               (_UINT32_(0x1) << MATRIX_MEIMR_MERR14_Pos)           /* (MATRIX_MEIMR) Master 14 Access Error Mask */
#define MATRIX_MEIMR_MERR14(value)            (MATRIX_MEIMR_MERR14_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR14_Pos)) /* Assigment of value for MERR14 in the MATRIX_MEIMR register */
#define MATRIX_MEIMR_MERR15_Pos               _UINT32_(15)                                         /* (MATRIX_MEIMR) Master 15 Access Error Position */
#define MATRIX_MEIMR_MERR15_Msk               (_UINT32_(0x1) << MATRIX_MEIMR_MERR15_Pos)           /* (MATRIX_MEIMR) Master 15 Access Error Mask */
#define MATRIX_MEIMR_MERR15(value)            (MATRIX_MEIMR_MERR15_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR15_Pos)) /* Assigment of value for MERR15 in the MATRIX_MEIMR register */
#define MATRIX_MEIMR_Msk                      _UINT32_(0x0000FFFF)                                 /* (MATRIX_MEIMR) Register Mask  */

#define MATRIX_MEIMR_MERR_Pos                 _UINT32_(0)                                          /* (MATRIX_MEIMR Position) Master x5 Access Error */
#define MATRIX_MEIMR_MERR_Msk                 (_UINT32_(0xFFFF) << MATRIX_MEIMR_MERR_Pos)          /* (MATRIX_MEIMR Mask) MERR */
#define MATRIX_MEIMR_MERR(value)              (MATRIX_MEIMR_MERR_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR_Pos)) 

/* -------- MATRIX_MESR : (MATRIX Offset: 0x15C) ( R/ 32) Master Error Status Register -------- */
#define MATRIX_MESR_MERR0_Pos                 _UINT32_(0)                                          /* (MATRIX_MESR) Master 0 Access Error Position */
#define MATRIX_MESR_MERR0_Msk                 (_UINT32_(0x1) << MATRIX_MESR_MERR0_Pos)             /* (MATRIX_MESR) Master 0 Access Error Mask */
#define MATRIX_MESR_MERR0(value)              (MATRIX_MESR_MERR0_Msk & (_UINT32_(value) << MATRIX_MESR_MERR0_Pos)) /* Assigment of value for MERR0 in the MATRIX_MESR register */
#define MATRIX_MESR_MERR1_Pos                 _UINT32_(1)                                          /* (MATRIX_MESR) Master 1 Access Error Position */
#define MATRIX_MESR_MERR1_Msk                 (_UINT32_(0x1) << MATRIX_MESR_MERR1_Pos)             /* (MATRIX_MESR) Master 1 Access Error Mask */
#define MATRIX_MESR_MERR1(value)              (MATRIX_MESR_MERR1_Msk & (_UINT32_(value) << MATRIX_MESR_MERR1_Pos)) /* Assigment of value for MERR1 in the MATRIX_MESR register */
#define MATRIX_MESR_MERR2_Pos                 _UINT32_(2)                                          /* (MATRIX_MESR) Master 2 Access Error Position */
#define MATRIX_MESR_MERR2_Msk                 (_UINT32_(0x1) << MATRIX_MESR_MERR2_Pos)             /* (MATRIX_MESR) Master 2 Access Error Mask */
#define MATRIX_MESR_MERR2(value)              (MATRIX_MESR_MERR2_Msk & (_UINT32_(value) << MATRIX_MESR_MERR2_Pos)) /* Assigment of value for MERR2 in the MATRIX_MESR register */
#define MATRIX_MESR_MERR3_Pos                 _UINT32_(3)                                          /* (MATRIX_MESR) Master 3 Access Error Position */
#define MATRIX_MESR_MERR3_Msk                 (_UINT32_(0x1) << MATRIX_MESR_MERR3_Pos)             /* (MATRIX_MESR) Master 3 Access Error Mask */
#define MATRIX_MESR_MERR3(value)              (MATRIX_MESR_MERR3_Msk & (_UINT32_(value) << MATRIX_MESR_MERR3_Pos)) /* Assigment of value for MERR3 in the MATRIX_MESR register */
#define MATRIX_MESR_MERR4_Pos                 _UINT32_(4)                                          /* (MATRIX_MESR) Master 4 Access Error Position */
#define MATRIX_MESR_MERR4_Msk                 (_UINT32_(0x1) << MATRIX_MESR_MERR4_Pos)             /* (MATRIX_MESR) Master 4 Access Error Mask */
#define MATRIX_MESR_MERR4(value)              (MATRIX_MESR_MERR4_Msk & (_UINT32_(value) << MATRIX_MESR_MERR4_Pos)) /* Assigment of value for MERR4 in the MATRIX_MESR register */
#define MATRIX_MESR_MERR5_Pos                 _UINT32_(5)                                          /* (MATRIX_MESR) Master 5 Access Error Position */
#define MATRIX_MESR_MERR5_Msk                 (_UINT32_(0x1) << MATRIX_MESR_MERR5_Pos)             /* (MATRIX_MESR) Master 5 Access Error Mask */
#define MATRIX_MESR_MERR5(value)              (MATRIX_MESR_MERR5_Msk & (_UINT32_(value) << MATRIX_MESR_MERR5_Pos)) /* Assigment of value for MERR5 in the MATRIX_MESR register */
#define MATRIX_MESR_MERR6_Pos                 _UINT32_(6)                                          /* (MATRIX_MESR) Master 6 Access Error Position */
#define MATRIX_MESR_MERR6_Msk                 (_UINT32_(0x1) << MATRIX_MESR_MERR6_Pos)             /* (MATRIX_MESR) Master 6 Access Error Mask */
#define MATRIX_MESR_MERR6(value)              (MATRIX_MESR_MERR6_Msk & (_UINT32_(value) << MATRIX_MESR_MERR6_Pos)) /* Assigment of value for MERR6 in the MATRIX_MESR register */
#define MATRIX_MESR_MERR7_Pos                 _UINT32_(7)                                          /* (MATRIX_MESR) Master 7 Access Error Position */
#define MATRIX_MESR_MERR7_Msk                 (_UINT32_(0x1) << MATRIX_MESR_MERR7_Pos)             /* (MATRIX_MESR) Master 7 Access Error Mask */
#define MATRIX_MESR_MERR7(value)              (MATRIX_MESR_MERR7_Msk & (_UINT32_(value) << MATRIX_MESR_MERR7_Pos)) /* Assigment of value for MERR7 in the MATRIX_MESR register */
#define MATRIX_MESR_MERR8_Pos                 _UINT32_(8)                                          /* (MATRIX_MESR) Master 8 Access Error Position */
#define MATRIX_MESR_MERR8_Msk                 (_UINT32_(0x1) << MATRIX_MESR_MERR8_Pos)             /* (MATRIX_MESR) Master 8 Access Error Mask */
#define MATRIX_MESR_MERR8(value)              (MATRIX_MESR_MERR8_Msk & (_UINT32_(value) << MATRIX_MESR_MERR8_Pos)) /* Assigment of value for MERR8 in the MATRIX_MESR register */
#define MATRIX_MESR_MERR9_Pos                 _UINT32_(9)                                          /* (MATRIX_MESR) Master 9 Access Error Position */
#define MATRIX_MESR_MERR9_Msk                 (_UINT32_(0x1) << MATRIX_MESR_MERR9_Pos)             /* (MATRIX_MESR) Master 9 Access Error Mask */
#define MATRIX_MESR_MERR9(value)              (MATRIX_MESR_MERR9_Msk & (_UINT32_(value) << MATRIX_MESR_MERR9_Pos)) /* Assigment of value for MERR9 in the MATRIX_MESR register */
#define MATRIX_MESR_MERR10_Pos                _UINT32_(10)                                         /* (MATRIX_MESR) Master 10 Access Error Position */
#define MATRIX_MESR_MERR10_Msk                (_UINT32_(0x1) << MATRIX_MESR_MERR10_Pos)            /* (MATRIX_MESR) Master 10 Access Error Mask */
#define MATRIX_MESR_MERR10(value)             (MATRIX_MESR_MERR10_Msk & (_UINT32_(value) << MATRIX_MESR_MERR10_Pos)) /* Assigment of value for MERR10 in the MATRIX_MESR register */
#define MATRIX_MESR_MERR11_Pos                _UINT32_(11)                                         /* (MATRIX_MESR) Master 11 Access Error Position */
#define MATRIX_MESR_MERR11_Msk                (_UINT32_(0x1) << MATRIX_MESR_MERR11_Pos)            /* (MATRIX_MESR) Master 11 Access Error Mask */
#define MATRIX_MESR_MERR11(value)             (MATRIX_MESR_MERR11_Msk & (_UINT32_(value) << MATRIX_MESR_MERR11_Pos)) /* Assigment of value for MERR11 in the MATRIX_MESR register */
#define MATRIX_MESR_MERR12_Pos                _UINT32_(12)                                         /* (MATRIX_MESR) Master 12 Access Error Position */
#define MATRIX_MESR_MERR12_Msk                (_UINT32_(0x1) << MATRIX_MESR_MERR12_Pos)            /* (MATRIX_MESR) Master 12 Access Error Mask */
#define MATRIX_MESR_MERR12(value)             (MATRIX_MESR_MERR12_Msk & (_UINT32_(value) << MATRIX_MESR_MERR12_Pos)) /* Assigment of value for MERR12 in the MATRIX_MESR register */
#define MATRIX_MESR_MERR13_Pos                _UINT32_(13)                                         /* (MATRIX_MESR) Master 13 Access Error Position */
#define MATRIX_MESR_MERR13_Msk                (_UINT32_(0x1) << MATRIX_MESR_MERR13_Pos)            /* (MATRIX_MESR) Master 13 Access Error Mask */
#define MATRIX_MESR_MERR13(value)             (MATRIX_MESR_MERR13_Msk & (_UINT32_(value) << MATRIX_MESR_MERR13_Pos)) /* Assigment of value for MERR13 in the MATRIX_MESR register */
#define MATRIX_MESR_MERR14_Pos                _UINT32_(14)                                         /* (MATRIX_MESR) Master 14 Access Error Position */
#define MATRIX_MESR_MERR14_Msk                (_UINT32_(0x1) << MATRIX_MESR_MERR14_Pos)            /* (MATRIX_MESR) Master 14 Access Error Mask */
#define MATRIX_MESR_MERR14(value)             (MATRIX_MESR_MERR14_Msk & (_UINT32_(value) << MATRIX_MESR_MERR14_Pos)) /* Assigment of value for MERR14 in the MATRIX_MESR register */
#define MATRIX_MESR_MERR15_Pos                _UINT32_(15)                                         /* (MATRIX_MESR) Master 15 Access Error Position */
#define MATRIX_MESR_MERR15_Msk                (_UINT32_(0x1) << MATRIX_MESR_MERR15_Pos)            /* (MATRIX_MESR) Master 15 Access Error Mask */
#define MATRIX_MESR_MERR15(value)             (MATRIX_MESR_MERR15_Msk & (_UINT32_(value) << MATRIX_MESR_MERR15_Pos)) /* Assigment of value for MERR15 in the MATRIX_MESR register */
#define MATRIX_MESR_Msk                       _UINT32_(0x0000FFFF)                                 /* (MATRIX_MESR) Register Mask  */

#define MATRIX_MESR_MERR_Pos                  _UINT32_(0)                                          /* (MATRIX_MESR Position) Master x5 Access Error */
#define MATRIX_MESR_MERR_Msk                  (_UINT32_(0xFFFF) << MATRIX_MESR_MERR_Pos)           /* (MATRIX_MESR Mask) MERR */
#define MATRIX_MESR_MERR(value)               (MATRIX_MESR_MERR_Msk & (_UINT32_(value) << MATRIX_MESR_MERR_Pos)) 

/* -------- MATRIX_MEAR : (MATRIX Offset: 0x160) ( R/ 32) Master 0 Error Address Register -------- */
#define MATRIX_MEAR_ERRADD_Pos                _UINT32_(0)                                          /* (MATRIX_MEAR) Master Error Address Position */
#define MATRIX_MEAR_ERRADD_Msk                (_UINT32_(0xFFFFFFFF) << MATRIX_MEAR_ERRADD_Pos)     /* (MATRIX_MEAR) Master Error Address Mask */
#define MATRIX_MEAR_ERRADD(value)             (MATRIX_MEAR_ERRADD_Msk & (_UINT32_(value) << MATRIX_MEAR_ERRADD_Pos)) /* Assigment of value for ERRADD in the MATRIX_MEAR register */
#define MATRIX_MEAR_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (MATRIX_MEAR) Register Mask  */


/* -------- MATRIX_WPMR : (MATRIX Offset: 0x1E4) (R/W 32) Write Protect Mode Register -------- */
#define MATRIX_WPMR_WPEN_Pos                  _UINT32_(0)                                          /* (MATRIX_WPMR) Write Protection Enable Position */
#define MATRIX_WPMR_WPEN_Msk                  (_UINT32_(0x1) << MATRIX_WPMR_WPEN_Pos)              /* (MATRIX_WPMR) Write Protection Enable Mask */
#define MATRIX_WPMR_WPEN(value)               (MATRIX_WPMR_WPEN_Msk & (_UINT32_(value) << MATRIX_WPMR_WPEN_Pos)) /* Assigment of value for WPEN in the MATRIX_WPMR register */
#define MATRIX_WPMR_CFGFRZ_Pos                _UINT32_(7)                                          /* (MATRIX_WPMR)  Position */
#define MATRIX_WPMR_CFGFRZ_Msk                (_UINT32_(0x1) << MATRIX_WPMR_CFGFRZ_Pos)            /* (MATRIX_WPMR)  Mask */
#define MATRIX_WPMR_CFGFRZ(value)             (MATRIX_WPMR_CFGFRZ_Msk & (_UINT32_(value) << MATRIX_WPMR_CFGFRZ_Pos)) /* Assigment of value for CFGFRZ in the MATRIX_WPMR register */
#define MATRIX_WPMR_WPKEY_Pos                 _UINT32_(8)                                          /* (MATRIX_WPMR) Write Protection Key Position */
#define MATRIX_WPMR_WPKEY_Msk                 (_UINT32_(0xFFFFFF) << MATRIX_WPMR_WPKEY_Pos)        /* (MATRIX_WPMR) Write Protection Key Mask */
#define MATRIX_WPMR_WPKEY(value)              (MATRIX_WPMR_WPKEY_Msk & (_UINT32_(value) << MATRIX_WPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the MATRIX_WPMR register */
#define   MATRIX_WPMR_WPKEY_PASSWD_Val        _UINT32_(0x4D4154)                                   /* (MATRIX_WPMR) Writing any other value in this field aborts the write operation of the WPEN and CFGFRZ bits. Always reads as 0.  */
#define MATRIX_WPMR_WPKEY_PASSWD              (MATRIX_WPMR_WPKEY_PASSWD_Val << MATRIX_WPMR_WPKEY_Pos) /* (MATRIX_WPMR) Writing any other value in this field aborts the write operation of the WPEN and CFGFRZ bits. Always reads as 0. Position  */
#define MATRIX_WPMR_Msk                       _UINT32_(0xFFFFFF81)                                 /* (MATRIX_WPMR) Register Mask  */


/* -------- MATRIX_WPSR : (MATRIX Offset: 0x1E8) ( R/ 32) Write Protect Status Register -------- */
#define MATRIX_WPSR_WPVS_Pos                  _UINT32_(0)                                          /* (MATRIX_WPSR) Write Protection Violation Status Position */
#define MATRIX_WPSR_WPVS_Msk                  (_UINT32_(0x1) << MATRIX_WPSR_WPVS_Pos)              /* (MATRIX_WPSR) Write Protection Violation Status Mask */
#define MATRIX_WPSR_WPVS(value)               (MATRIX_WPSR_WPVS_Msk & (_UINT32_(value) << MATRIX_WPSR_WPVS_Pos)) /* Assigment of value for WPVS in the MATRIX_WPSR register */
#define MATRIX_WPSR_WPVSRC_Pos                _UINT32_(8)                                          /* (MATRIX_WPSR) Write Protection Violation Source Position */
#define MATRIX_WPSR_WPVSRC_Msk                (_UINT32_(0xFFFF) << MATRIX_WPSR_WPVSRC_Pos)         /* (MATRIX_WPSR) Write Protection Violation Source Mask */
#define MATRIX_WPSR_WPVSRC(value)             (MATRIX_WPSR_WPVSRC_Msk & (_UINT32_(value) << MATRIX_WPSR_WPVSRC_Pos)) /* Assigment of value for WPVSRC in the MATRIX_WPSR register */
#define MATRIX_WPSR_Msk                       _UINT32_(0x00FFFF01)                                 /* (MATRIX_WPSR) Register Mask  */


/* -------- MATRIX_PSR : (MATRIX Offset: 0x200) (R/W 32) Protection Slave Register -------- */
#define MATRIX_PSR_LAUSERH0_Pos               _UINT32_(0)                                          /* (MATRIX_PSR) Low Area USER in HSELx Protected Region Position */
#define MATRIX_PSR_LAUSERH0_Msk               (_UINT32_(0x1) << MATRIX_PSR_LAUSERH0_Pos)           /* (MATRIX_PSR) Low Area USER in HSELx Protected Region Mask */
#define MATRIX_PSR_LAUSERH0(value)            (MATRIX_PSR_LAUSERH0_Msk & (_UINT32_(value) << MATRIX_PSR_LAUSERH0_Pos)) /* Assigment of value for LAUSERH0 in the MATRIX_PSR register */
#define MATRIX_PSR_LAUSERH1_Pos               _UINT32_(1)                                          /* (MATRIX_PSR) Low Area USER in HSELx Protected Region Position */
#define MATRIX_PSR_LAUSERH1_Msk               (_UINT32_(0x1) << MATRIX_PSR_LAUSERH1_Pos)           /* (MATRIX_PSR) Low Area USER in HSELx Protected Region Mask */
#define MATRIX_PSR_LAUSERH1(value)            (MATRIX_PSR_LAUSERH1_Msk & (_UINT32_(value) << MATRIX_PSR_LAUSERH1_Pos)) /* Assigment of value for LAUSERH1 in the MATRIX_PSR register */
#define MATRIX_PSR_LAUSERH2_Pos               _UINT32_(2)                                          /* (MATRIX_PSR) Low Area USER in HSELx Protected Region Position */
#define MATRIX_PSR_LAUSERH2_Msk               (_UINT32_(0x1) << MATRIX_PSR_LAUSERH2_Pos)           /* (MATRIX_PSR) Low Area USER in HSELx Protected Region Mask */
#define MATRIX_PSR_LAUSERH2(value)            (MATRIX_PSR_LAUSERH2_Msk & (_UINT32_(value) << MATRIX_PSR_LAUSERH2_Pos)) /* Assigment of value for LAUSERH2 in the MATRIX_PSR register */
#define MATRIX_PSR_LAUSERH3_Pos               _UINT32_(3)                                          /* (MATRIX_PSR) Low Area USER in HSELx Protected Region Position */
#define MATRIX_PSR_LAUSERH3_Msk               (_UINT32_(0x1) << MATRIX_PSR_LAUSERH3_Pos)           /* (MATRIX_PSR) Low Area USER in HSELx Protected Region Mask */
#define MATRIX_PSR_LAUSERH3(value)            (MATRIX_PSR_LAUSERH3_Msk & (_UINT32_(value) << MATRIX_PSR_LAUSERH3_Pos)) /* Assigment of value for LAUSERH3 in the MATRIX_PSR register */
#define MATRIX_PSR_LAUSERH4_Pos               _UINT32_(4)                                          /* (MATRIX_PSR) Low Area USER in HSELx Protected Region Position */
#define MATRIX_PSR_LAUSERH4_Msk               (_UINT32_(0x1) << MATRIX_PSR_LAUSERH4_Pos)           /* (MATRIX_PSR) Low Area USER in HSELx Protected Region Mask */
#define MATRIX_PSR_LAUSERH4(value)            (MATRIX_PSR_LAUSERH4_Msk & (_UINT32_(value) << MATRIX_PSR_LAUSERH4_Pos)) /* Assigment of value for LAUSERH4 in the MATRIX_PSR register */
#define MATRIX_PSR_LAUSERH5_Pos               _UINT32_(5)                                          /* (MATRIX_PSR) Low Area USER in HSELx Protected Region Position */
#define MATRIX_PSR_LAUSERH5_Msk               (_UINT32_(0x1) << MATRIX_PSR_LAUSERH5_Pos)           /* (MATRIX_PSR) Low Area USER in HSELx Protected Region Mask */
#define MATRIX_PSR_LAUSERH5(value)            (MATRIX_PSR_LAUSERH5_Msk & (_UINT32_(value) << MATRIX_PSR_LAUSERH5_Pos)) /* Assigment of value for LAUSERH5 in the MATRIX_PSR register */
#define MATRIX_PSR_LAUSERH6_Pos               _UINT32_(6)                                          /* (MATRIX_PSR) Low Area USER in HSELx Protected Region Position */
#define MATRIX_PSR_LAUSERH6_Msk               (_UINT32_(0x1) << MATRIX_PSR_LAUSERH6_Pos)           /* (MATRIX_PSR) Low Area USER in HSELx Protected Region Mask */
#define MATRIX_PSR_LAUSERH6(value)            (MATRIX_PSR_LAUSERH6_Msk & (_UINT32_(value) << MATRIX_PSR_LAUSERH6_Pos)) /* Assigment of value for LAUSERH6 in the MATRIX_PSR register */
#define MATRIX_PSR_LAUSERH7_Pos               _UINT32_(7)                                          /* (MATRIX_PSR) Low Area USER in HSELx Protected Region Position */
#define MATRIX_PSR_LAUSERH7_Msk               (_UINT32_(0x1) << MATRIX_PSR_LAUSERH7_Pos)           /* (MATRIX_PSR) Low Area USER in HSELx Protected Region Mask */
#define MATRIX_PSR_LAUSERH7(value)            (MATRIX_PSR_LAUSERH7_Msk & (_UINT32_(value) << MATRIX_PSR_LAUSERH7_Pos)) /* Assigment of value for LAUSERH7 in the MATRIX_PSR register */
#define MATRIX_PSR_RDUSERH0_Pos               _UINT32_(8)                                          /* (MATRIX_PSR) Read USER for HSELx Protected Region Position */
#define MATRIX_PSR_RDUSERH0_Msk               (_UINT32_(0x1) << MATRIX_PSR_RDUSERH0_Pos)           /* (MATRIX_PSR) Read USER for HSELx Protected Region Mask */
#define MATRIX_PSR_RDUSERH0(value)            (MATRIX_PSR_RDUSERH0_Msk & (_UINT32_(value) << MATRIX_PSR_RDUSERH0_Pos)) /* Assigment of value for RDUSERH0 in the MATRIX_PSR register */
#define MATRIX_PSR_RDUSERH1_Pos               _UINT32_(9)                                          /* (MATRIX_PSR) Read USER for HSELx Protected Region Position */
#define MATRIX_PSR_RDUSERH1_Msk               (_UINT32_(0x1) << MATRIX_PSR_RDUSERH1_Pos)           /* (MATRIX_PSR) Read USER for HSELx Protected Region Mask */
#define MATRIX_PSR_RDUSERH1(value)            (MATRIX_PSR_RDUSERH1_Msk & (_UINT32_(value) << MATRIX_PSR_RDUSERH1_Pos)) /* Assigment of value for RDUSERH1 in the MATRIX_PSR register */
#define MATRIX_PSR_RDUSERH2_Pos               _UINT32_(10)                                         /* (MATRIX_PSR) Read USER for HSELx Protected Region Position */
#define MATRIX_PSR_RDUSERH2_Msk               (_UINT32_(0x1) << MATRIX_PSR_RDUSERH2_Pos)           /* (MATRIX_PSR) Read USER for HSELx Protected Region Mask */
#define MATRIX_PSR_RDUSERH2(value)            (MATRIX_PSR_RDUSERH2_Msk & (_UINT32_(value) << MATRIX_PSR_RDUSERH2_Pos)) /* Assigment of value for RDUSERH2 in the MATRIX_PSR register */
#define MATRIX_PSR_RDUSERH3_Pos               _UINT32_(11)                                         /* (MATRIX_PSR) Read USER for HSELx Protected Region Position */
#define MATRIX_PSR_RDUSERH3_Msk               (_UINT32_(0x1) << MATRIX_PSR_RDUSERH3_Pos)           /* (MATRIX_PSR) Read USER for HSELx Protected Region Mask */
#define MATRIX_PSR_RDUSERH3(value)            (MATRIX_PSR_RDUSERH3_Msk & (_UINT32_(value) << MATRIX_PSR_RDUSERH3_Pos)) /* Assigment of value for RDUSERH3 in the MATRIX_PSR register */
#define MATRIX_PSR_RDUSERH4_Pos               _UINT32_(12)                                         /* (MATRIX_PSR) Read USER for HSELx Protected Region Position */
#define MATRIX_PSR_RDUSERH4_Msk               (_UINT32_(0x1) << MATRIX_PSR_RDUSERH4_Pos)           /* (MATRIX_PSR) Read USER for HSELx Protected Region Mask */
#define MATRIX_PSR_RDUSERH4(value)            (MATRIX_PSR_RDUSERH4_Msk & (_UINT32_(value) << MATRIX_PSR_RDUSERH4_Pos)) /* Assigment of value for RDUSERH4 in the MATRIX_PSR register */
#define MATRIX_PSR_RDUSERH5_Pos               _UINT32_(13)                                         /* (MATRIX_PSR) Read USER for HSELx Protected Region Position */
#define MATRIX_PSR_RDUSERH5_Msk               (_UINT32_(0x1) << MATRIX_PSR_RDUSERH5_Pos)           /* (MATRIX_PSR) Read USER for HSELx Protected Region Mask */
#define MATRIX_PSR_RDUSERH5(value)            (MATRIX_PSR_RDUSERH5_Msk & (_UINT32_(value) << MATRIX_PSR_RDUSERH5_Pos)) /* Assigment of value for RDUSERH5 in the MATRIX_PSR register */
#define MATRIX_PSR_RDUSERH6_Pos               _UINT32_(14)                                         /* (MATRIX_PSR) Read USER for HSELx Protected Region Position */
#define MATRIX_PSR_RDUSERH6_Msk               (_UINT32_(0x1) << MATRIX_PSR_RDUSERH6_Pos)           /* (MATRIX_PSR) Read USER for HSELx Protected Region Mask */
#define MATRIX_PSR_RDUSERH6(value)            (MATRIX_PSR_RDUSERH6_Msk & (_UINT32_(value) << MATRIX_PSR_RDUSERH6_Pos)) /* Assigment of value for RDUSERH6 in the MATRIX_PSR register */
#define MATRIX_PSR_RDUSERH7_Pos               _UINT32_(15)                                         /* (MATRIX_PSR) Read USER for HSELx Protected Region Position */
#define MATRIX_PSR_RDUSERH7_Msk               (_UINT32_(0x1) << MATRIX_PSR_RDUSERH7_Pos)           /* (MATRIX_PSR) Read USER for HSELx Protected Region Mask */
#define MATRIX_PSR_RDUSERH7(value)            (MATRIX_PSR_RDUSERH7_Msk & (_UINT32_(value) << MATRIX_PSR_RDUSERH7_Pos)) /* Assigment of value for RDUSERH7 in the MATRIX_PSR register */
#define MATRIX_PSR_WRUSERH0_Pos               _UINT32_(16)                                         /* (MATRIX_PSR) Write USER for HSELx Protected Region Position */
#define MATRIX_PSR_WRUSERH0_Msk               (_UINT32_(0x1) << MATRIX_PSR_WRUSERH0_Pos)           /* (MATRIX_PSR) Write USER for HSELx Protected Region Mask */
#define MATRIX_PSR_WRUSERH0(value)            (MATRIX_PSR_WRUSERH0_Msk & (_UINT32_(value) << MATRIX_PSR_WRUSERH0_Pos)) /* Assigment of value for WRUSERH0 in the MATRIX_PSR register */
#define MATRIX_PSR_WRUSERH1_Pos               _UINT32_(17)                                         /* (MATRIX_PSR) Write USER for HSELx Protected Region Position */
#define MATRIX_PSR_WRUSERH1_Msk               (_UINT32_(0x1) << MATRIX_PSR_WRUSERH1_Pos)           /* (MATRIX_PSR) Write USER for HSELx Protected Region Mask */
#define MATRIX_PSR_WRUSERH1(value)            (MATRIX_PSR_WRUSERH1_Msk & (_UINT32_(value) << MATRIX_PSR_WRUSERH1_Pos)) /* Assigment of value for WRUSERH1 in the MATRIX_PSR register */
#define MATRIX_PSR_WRUSERH2_Pos               _UINT32_(18)                                         /* (MATRIX_PSR) Write USER for HSELx Protected Region Position */
#define MATRIX_PSR_WRUSERH2_Msk               (_UINT32_(0x1) << MATRIX_PSR_WRUSERH2_Pos)           /* (MATRIX_PSR) Write USER for HSELx Protected Region Mask */
#define MATRIX_PSR_WRUSERH2(value)            (MATRIX_PSR_WRUSERH2_Msk & (_UINT32_(value) << MATRIX_PSR_WRUSERH2_Pos)) /* Assigment of value for WRUSERH2 in the MATRIX_PSR register */
#define MATRIX_PSR_WRUSERH3_Pos               _UINT32_(19)                                         /* (MATRIX_PSR) Write USER for HSELx Protected Region Position */
#define MATRIX_PSR_WRUSERH3_Msk               (_UINT32_(0x1) << MATRIX_PSR_WRUSERH3_Pos)           /* (MATRIX_PSR) Write USER for HSELx Protected Region Mask */
#define MATRIX_PSR_WRUSERH3(value)            (MATRIX_PSR_WRUSERH3_Msk & (_UINT32_(value) << MATRIX_PSR_WRUSERH3_Pos)) /* Assigment of value for WRUSERH3 in the MATRIX_PSR register */
#define MATRIX_PSR_WRUSERH4_Pos               _UINT32_(20)                                         /* (MATRIX_PSR) Write USER for HSELx Protected Region Position */
#define MATRIX_PSR_WRUSERH4_Msk               (_UINT32_(0x1) << MATRIX_PSR_WRUSERH4_Pos)           /* (MATRIX_PSR) Write USER for HSELx Protected Region Mask */
#define MATRIX_PSR_WRUSERH4(value)            (MATRIX_PSR_WRUSERH4_Msk & (_UINT32_(value) << MATRIX_PSR_WRUSERH4_Pos)) /* Assigment of value for WRUSERH4 in the MATRIX_PSR register */
#define MATRIX_PSR_WRUSERH5_Pos               _UINT32_(21)                                         /* (MATRIX_PSR) Write USER for HSELx Protected Region Position */
#define MATRIX_PSR_WRUSERH5_Msk               (_UINT32_(0x1) << MATRIX_PSR_WRUSERH5_Pos)           /* (MATRIX_PSR) Write USER for HSELx Protected Region Mask */
#define MATRIX_PSR_WRUSERH5(value)            (MATRIX_PSR_WRUSERH5_Msk & (_UINT32_(value) << MATRIX_PSR_WRUSERH5_Pos)) /* Assigment of value for WRUSERH5 in the MATRIX_PSR register */
#define MATRIX_PSR_WRUSERH6_Pos               _UINT32_(22)                                         /* (MATRIX_PSR) Write USER for HSELx Protected Region Position */
#define MATRIX_PSR_WRUSERH6_Msk               (_UINT32_(0x1) << MATRIX_PSR_WRUSERH6_Pos)           /* (MATRIX_PSR) Write USER for HSELx Protected Region Mask */
#define MATRIX_PSR_WRUSERH6(value)            (MATRIX_PSR_WRUSERH6_Msk & (_UINT32_(value) << MATRIX_PSR_WRUSERH6_Pos)) /* Assigment of value for WRUSERH6 in the MATRIX_PSR register */
#define MATRIX_PSR_WRUSERH7_Pos               _UINT32_(23)                                         /* (MATRIX_PSR) Write USER for HSELx Protected Region Position */
#define MATRIX_PSR_WRUSERH7_Msk               (_UINT32_(0x1) << MATRIX_PSR_WRUSERH7_Pos)           /* (MATRIX_PSR) Write USER for HSELx Protected Region Mask */
#define MATRIX_PSR_WRUSERH7(value)            (MATRIX_PSR_WRUSERH7_Msk & (_UINT32_(value) << MATRIX_PSR_WRUSERH7_Pos)) /* Assigment of value for WRUSERH7 in the MATRIX_PSR register */
#define MATRIX_PSR_DPSOA0_Pos                 _UINT32_(24)                                         /* (MATRIX_PSR) Downward Protection Split Address for HSELx Protected Region Position */
#define MATRIX_PSR_DPSOA0_Msk                 (_UINT32_(0x1) << MATRIX_PSR_DPSOA0_Pos)             /* (MATRIX_PSR) Downward Protection Split Address for HSELx Protected Region Mask */
#define MATRIX_PSR_DPSOA0(value)              (MATRIX_PSR_DPSOA0_Msk & (_UINT32_(value) << MATRIX_PSR_DPSOA0_Pos)) /* Assigment of value for DPSOA0 in the MATRIX_PSR register */
#define MATRIX_PSR_DPSOA1_Pos                 _UINT32_(25)                                         /* (MATRIX_PSR) Downward Protection Split Address for HSELx Protected Region Position */
#define MATRIX_PSR_DPSOA1_Msk                 (_UINT32_(0x1) << MATRIX_PSR_DPSOA1_Pos)             /* (MATRIX_PSR) Downward Protection Split Address for HSELx Protected Region Mask */
#define MATRIX_PSR_DPSOA1(value)              (MATRIX_PSR_DPSOA1_Msk & (_UINT32_(value) << MATRIX_PSR_DPSOA1_Pos)) /* Assigment of value for DPSOA1 in the MATRIX_PSR register */
#define MATRIX_PSR_DPSOA2_Pos                 _UINT32_(26)                                         /* (MATRIX_PSR) Downward Protection Split Address for HSELx Protected Region Position */
#define MATRIX_PSR_DPSOA2_Msk                 (_UINT32_(0x1) << MATRIX_PSR_DPSOA2_Pos)             /* (MATRIX_PSR) Downward Protection Split Address for HSELx Protected Region Mask */
#define MATRIX_PSR_DPSOA2(value)              (MATRIX_PSR_DPSOA2_Msk & (_UINT32_(value) << MATRIX_PSR_DPSOA2_Pos)) /* Assigment of value for DPSOA2 in the MATRIX_PSR register */
#define MATRIX_PSR_DPSOA3_Pos                 _UINT32_(27)                                         /* (MATRIX_PSR) Downward Protection Split Address for HSELx Protected Region Position */
#define MATRIX_PSR_DPSOA3_Msk                 (_UINT32_(0x1) << MATRIX_PSR_DPSOA3_Pos)             /* (MATRIX_PSR) Downward Protection Split Address for HSELx Protected Region Mask */
#define MATRIX_PSR_DPSOA3(value)              (MATRIX_PSR_DPSOA3_Msk & (_UINT32_(value) << MATRIX_PSR_DPSOA3_Pos)) /* Assigment of value for DPSOA3 in the MATRIX_PSR register */
#define MATRIX_PSR_DPSOA4_Pos                 _UINT32_(28)                                         /* (MATRIX_PSR) Downward Protection Split Address for HSELx Protected Region Position */
#define MATRIX_PSR_DPSOA4_Msk                 (_UINT32_(0x1) << MATRIX_PSR_DPSOA4_Pos)             /* (MATRIX_PSR) Downward Protection Split Address for HSELx Protected Region Mask */
#define MATRIX_PSR_DPSOA4(value)              (MATRIX_PSR_DPSOA4_Msk & (_UINT32_(value) << MATRIX_PSR_DPSOA4_Pos)) /* Assigment of value for DPSOA4 in the MATRIX_PSR register */
#define MATRIX_PSR_DPSOA5_Pos                 _UINT32_(29)                                         /* (MATRIX_PSR) Downward Protection Split Address for HSELx Protected Region Position */
#define MATRIX_PSR_DPSOA5_Msk                 (_UINT32_(0x1) << MATRIX_PSR_DPSOA5_Pos)             /* (MATRIX_PSR) Downward Protection Split Address for HSELx Protected Region Mask */
#define MATRIX_PSR_DPSOA5(value)              (MATRIX_PSR_DPSOA5_Msk & (_UINT32_(value) << MATRIX_PSR_DPSOA5_Pos)) /* Assigment of value for DPSOA5 in the MATRIX_PSR register */
#define MATRIX_PSR_DPSOA6_Pos                 _UINT32_(30)                                         /* (MATRIX_PSR) Downward Protection Split Address for HSELx Protected Region Position */
#define MATRIX_PSR_DPSOA6_Msk                 (_UINT32_(0x1) << MATRIX_PSR_DPSOA6_Pos)             /* (MATRIX_PSR) Downward Protection Split Address for HSELx Protected Region Mask */
#define MATRIX_PSR_DPSOA6(value)              (MATRIX_PSR_DPSOA6_Msk & (_UINT32_(value) << MATRIX_PSR_DPSOA6_Pos)) /* Assigment of value for DPSOA6 in the MATRIX_PSR register */
#define MATRIX_PSR_DPSOA7_Pos                 _UINT32_(31)                                         /* (MATRIX_PSR) Downward Protection Split Address for HSELx Protected Region Position */
#define MATRIX_PSR_DPSOA7_Msk                 (_UINT32_(0x1) << MATRIX_PSR_DPSOA7_Pos)             /* (MATRIX_PSR) Downward Protection Split Address for HSELx Protected Region Mask */
#define MATRIX_PSR_DPSOA7(value)              (MATRIX_PSR_DPSOA7_Msk & (_UINT32_(value) << MATRIX_PSR_DPSOA7_Pos)) /* Assigment of value for DPSOA7 in the MATRIX_PSR register */
#define MATRIX_PSR_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (MATRIX_PSR) Register Mask  */

#define MATRIX_PSR_LAUSERH_Pos                _UINT32_(0)                                          /* (MATRIX_PSR Position) Low Area USER in HSELx Protected Region */
#define MATRIX_PSR_LAUSERH_Msk                (_UINT32_(0xFF) << MATRIX_PSR_LAUSERH_Pos)           /* (MATRIX_PSR Mask) LAUSERH */
#define MATRIX_PSR_LAUSERH(value)             (MATRIX_PSR_LAUSERH_Msk & (_UINT32_(value) << MATRIX_PSR_LAUSERH_Pos)) 
#define MATRIX_PSR_RDUSERH_Pos                _UINT32_(8)                                          /* (MATRIX_PSR Position) Read USER for HSELx Protected Region */
#define MATRIX_PSR_RDUSERH_Msk                (_UINT32_(0xFF) << MATRIX_PSR_RDUSERH_Pos)           /* (MATRIX_PSR Mask) RDUSERH */
#define MATRIX_PSR_RDUSERH(value)             (MATRIX_PSR_RDUSERH_Msk & (_UINT32_(value) << MATRIX_PSR_RDUSERH_Pos)) 
#define MATRIX_PSR_WRUSERH_Pos                _UINT32_(16)                                         /* (MATRIX_PSR Position) Write USER for HSELx Protected Region */
#define MATRIX_PSR_WRUSERH_Msk                (_UINT32_(0xFF) << MATRIX_PSR_WRUSERH_Pos)           /* (MATRIX_PSR Mask) WRUSERH */
#define MATRIX_PSR_WRUSERH(value)             (MATRIX_PSR_WRUSERH_Msk & (_UINT32_(value) << MATRIX_PSR_WRUSERH_Pos)) 
#define MATRIX_PSR_DPSOA_Pos                  _UINT32_(24)                                         /* (MATRIX_PSR Position) Downward Protection Split Address for HSELx Protected Region */
#define MATRIX_PSR_DPSOA_Msk                  (_UINT32_(0xFF) << MATRIX_PSR_DPSOA_Pos)             /* (MATRIX_PSR Mask) DPSOA */
#define MATRIX_PSR_DPSOA(value)               (MATRIX_PSR_DPSOA_Msk & (_UINT32_(value) << MATRIX_PSR_DPSOA_Pos)) 

/* -------- MATRIX_PASSR : (MATRIX Offset: 0x240) (R/W 32) Protected Areas Split Slave Register -------- */
#define MATRIX_PASSR_PASPLIT0_Pos             _UINT32_(0)                                          /* (MATRIX_PASSR) Protected Areas Split for HSELx Protected Region Position */
#define MATRIX_PASSR_PASPLIT0_Msk             (_UINT32_(0xF) << MATRIX_PASSR_PASPLIT0_Pos)         /* (MATRIX_PASSR) Protected Areas Split for HSELx Protected Region Mask */
#define MATRIX_PASSR_PASPLIT0(value)          (MATRIX_PASSR_PASPLIT0_Msk & (_UINT32_(value) << MATRIX_PASSR_PASPLIT0_Pos)) /* Assigment of value for PASPLIT0 in the MATRIX_PASSR register */
#define MATRIX_PASSR_PASPLIT1_Pos             _UINT32_(4)                                          /* (MATRIX_PASSR) Protected Areas Split for HSELx Protected Region Position */
#define MATRIX_PASSR_PASPLIT1_Msk             (_UINT32_(0xF) << MATRIX_PASSR_PASPLIT1_Pos)         /* (MATRIX_PASSR) Protected Areas Split for HSELx Protected Region Mask */
#define MATRIX_PASSR_PASPLIT1(value)          (MATRIX_PASSR_PASPLIT1_Msk & (_UINT32_(value) << MATRIX_PASSR_PASPLIT1_Pos)) /* Assigment of value for PASPLIT1 in the MATRIX_PASSR register */
#define MATRIX_PASSR_PASPLIT2_Pos             _UINT32_(8)                                          /* (MATRIX_PASSR) Protected Areas Split for HSELx Protected Region Position */
#define MATRIX_PASSR_PASPLIT2_Msk             (_UINT32_(0xF) << MATRIX_PASSR_PASPLIT2_Pos)         /* (MATRIX_PASSR) Protected Areas Split for HSELx Protected Region Mask */
#define MATRIX_PASSR_PASPLIT2(value)          (MATRIX_PASSR_PASPLIT2_Msk & (_UINT32_(value) << MATRIX_PASSR_PASPLIT2_Pos)) /* Assigment of value for PASPLIT2 in the MATRIX_PASSR register */
#define MATRIX_PASSR_PASPLIT3_Pos             _UINT32_(12)                                         /* (MATRIX_PASSR) Protected Areas Split for HSELx Protected Region Position */
#define MATRIX_PASSR_PASPLIT3_Msk             (_UINT32_(0xF) << MATRIX_PASSR_PASPLIT3_Pos)         /* (MATRIX_PASSR) Protected Areas Split for HSELx Protected Region Mask */
#define MATRIX_PASSR_PASPLIT3(value)          (MATRIX_PASSR_PASPLIT3_Msk & (_UINT32_(value) << MATRIX_PASSR_PASPLIT3_Pos)) /* Assigment of value for PASPLIT3 in the MATRIX_PASSR register */
#define MATRIX_PASSR_PASPLIT4_Pos             _UINT32_(16)                                         /* (MATRIX_PASSR) Protected Areas Split for HSELx Protected Region Position */
#define MATRIX_PASSR_PASPLIT4_Msk             (_UINT32_(0xF) << MATRIX_PASSR_PASPLIT4_Pos)         /* (MATRIX_PASSR) Protected Areas Split for HSELx Protected Region Mask */
#define MATRIX_PASSR_PASPLIT4(value)          (MATRIX_PASSR_PASPLIT4_Msk & (_UINT32_(value) << MATRIX_PASSR_PASPLIT4_Pos)) /* Assigment of value for PASPLIT4 in the MATRIX_PASSR register */
#define MATRIX_PASSR_PASPLIT5_Pos             _UINT32_(20)                                         /* (MATRIX_PASSR) Protected Areas Split for HSELx Protected Region Position */
#define MATRIX_PASSR_PASPLIT5_Msk             (_UINT32_(0xF) << MATRIX_PASSR_PASPLIT5_Pos)         /* (MATRIX_PASSR) Protected Areas Split for HSELx Protected Region Mask */
#define MATRIX_PASSR_PASPLIT5(value)          (MATRIX_PASSR_PASPLIT5_Msk & (_UINT32_(value) << MATRIX_PASSR_PASPLIT5_Pos)) /* Assigment of value for PASPLIT5 in the MATRIX_PASSR register */
#define MATRIX_PASSR_PASPLIT6_Pos             _UINT32_(24)                                         /* (MATRIX_PASSR) Protected Areas Split for HSELx Protected Region Position */
#define MATRIX_PASSR_PASPLIT6_Msk             (_UINT32_(0xF) << MATRIX_PASSR_PASPLIT6_Pos)         /* (MATRIX_PASSR) Protected Areas Split for HSELx Protected Region Mask */
#define MATRIX_PASSR_PASPLIT6(value)          (MATRIX_PASSR_PASPLIT6_Msk & (_UINT32_(value) << MATRIX_PASSR_PASPLIT6_Pos)) /* Assigment of value for PASPLIT6 in the MATRIX_PASSR register */
#define MATRIX_PASSR_PASPLIT7_Pos             _UINT32_(28)                                         /* (MATRIX_PASSR) Protected Areas Split for HSELx Protected Region Position */
#define MATRIX_PASSR_PASPLIT7_Msk             (_UINT32_(0xF) << MATRIX_PASSR_PASPLIT7_Pos)         /* (MATRIX_PASSR) Protected Areas Split for HSELx Protected Region Mask */
#define MATRIX_PASSR_PASPLIT7(value)          (MATRIX_PASSR_PASPLIT7_Msk & (_UINT32_(value) << MATRIX_PASSR_PASPLIT7_Pos)) /* Assigment of value for PASPLIT7 in the MATRIX_PASSR register */
#define MATRIX_PASSR_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (MATRIX_PASSR) Register Mask  */


/* -------- MATRIX_PRTSR : (MATRIX Offset: 0x280) (R/W 32) Protected Region Top Slave Register -------- */
#define MATRIX_PRTSR_PRTOP0_Pos               _UINT32_(0)                                          /* (MATRIX_PRTSR) HSELx Protected Region Top Position */
#define MATRIX_PRTSR_PRTOP0_Msk               (_UINT32_(0xF) << MATRIX_PRTSR_PRTOP0_Pos)           /* (MATRIX_PRTSR) HSELx Protected Region Top Mask */
#define MATRIX_PRTSR_PRTOP0(value)            (MATRIX_PRTSR_PRTOP0_Msk & (_UINT32_(value) << MATRIX_PRTSR_PRTOP0_Pos)) /* Assigment of value for PRTOP0 in the MATRIX_PRTSR register */
#define MATRIX_PRTSR_PRTOP1_Pos               _UINT32_(4)                                          /* (MATRIX_PRTSR) HSELx Protected Region Top Position */
#define MATRIX_PRTSR_PRTOP1_Msk               (_UINT32_(0xF) << MATRIX_PRTSR_PRTOP1_Pos)           /* (MATRIX_PRTSR) HSELx Protected Region Top Mask */
#define MATRIX_PRTSR_PRTOP1(value)            (MATRIX_PRTSR_PRTOP1_Msk & (_UINT32_(value) << MATRIX_PRTSR_PRTOP1_Pos)) /* Assigment of value for PRTOP1 in the MATRIX_PRTSR register */
#define MATRIX_PRTSR_PRTOP2_Pos               _UINT32_(8)                                          /* (MATRIX_PRTSR) HSELx Protected Region Top Position */
#define MATRIX_PRTSR_PRTOP2_Msk               (_UINT32_(0xF) << MATRIX_PRTSR_PRTOP2_Pos)           /* (MATRIX_PRTSR) HSELx Protected Region Top Mask */
#define MATRIX_PRTSR_PRTOP2(value)            (MATRIX_PRTSR_PRTOP2_Msk & (_UINT32_(value) << MATRIX_PRTSR_PRTOP2_Pos)) /* Assigment of value for PRTOP2 in the MATRIX_PRTSR register */
#define MATRIX_PRTSR_PRTOP3_Pos               _UINT32_(12)                                         /* (MATRIX_PRTSR) HSELx Protected Region Top Position */
#define MATRIX_PRTSR_PRTOP3_Msk               (_UINT32_(0xF) << MATRIX_PRTSR_PRTOP3_Pos)           /* (MATRIX_PRTSR) HSELx Protected Region Top Mask */
#define MATRIX_PRTSR_PRTOP3(value)            (MATRIX_PRTSR_PRTOP3_Msk & (_UINT32_(value) << MATRIX_PRTSR_PRTOP3_Pos)) /* Assigment of value for PRTOP3 in the MATRIX_PRTSR register */
#define MATRIX_PRTSR_PRTOP4_Pos               _UINT32_(16)                                         /* (MATRIX_PRTSR) HSELx Protected Region Top Position */
#define MATRIX_PRTSR_PRTOP4_Msk               (_UINT32_(0xF) << MATRIX_PRTSR_PRTOP4_Pos)           /* (MATRIX_PRTSR) HSELx Protected Region Top Mask */
#define MATRIX_PRTSR_PRTOP4(value)            (MATRIX_PRTSR_PRTOP4_Msk & (_UINT32_(value) << MATRIX_PRTSR_PRTOP4_Pos)) /* Assigment of value for PRTOP4 in the MATRIX_PRTSR register */
#define MATRIX_PRTSR_PRTOP5_Pos               _UINT32_(20)                                         /* (MATRIX_PRTSR) HSELx Protected Region Top Position */
#define MATRIX_PRTSR_PRTOP5_Msk               (_UINT32_(0xF) << MATRIX_PRTSR_PRTOP5_Pos)           /* (MATRIX_PRTSR) HSELx Protected Region Top Mask */
#define MATRIX_PRTSR_PRTOP5(value)            (MATRIX_PRTSR_PRTOP5_Msk & (_UINT32_(value) << MATRIX_PRTSR_PRTOP5_Pos)) /* Assigment of value for PRTOP5 in the MATRIX_PRTSR register */
#define MATRIX_PRTSR_PRTOP6_Pos               _UINT32_(24)                                         /* (MATRIX_PRTSR) HSELx Protected Region Top Position */
#define MATRIX_PRTSR_PRTOP6_Msk               (_UINT32_(0xF) << MATRIX_PRTSR_PRTOP6_Pos)           /* (MATRIX_PRTSR) HSELx Protected Region Top Mask */
#define MATRIX_PRTSR_PRTOP6(value)            (MATRIX_PRTSR_PRTOP6_Msk & (_UINT32_(value) << MATRIX_PRTSR_PRTOP6_Pos)) /* Assigment of value for PRTOP6 in the MATRIX_PRTSR register */
#define MATRIX_PRTSR_PRTOP7_Pos               _UINT32_(28)                                         /* (MATRIX_PRTSR) HSELx Protected Region Top Position */
#define MATRIX_PRTSR_PRTOP7_Msk               (_UINT32_(0xF) << MATRIX_PRTSR_PRTOP7_Pos)           /* (MATRIX_PRTSR) HSELx Protected Region Top Mask */
#define MATRIX_PRTSR_PRTOP7(value)            (MATRIX_PRTSR_PRTOP7_Msk & (_UINT32_(value) << MATRIX_PRTSR_PRTOP7_Pos)) /* Assigment of value for PRTOP7 in the MATRIX_PRTSR register */
#define MATRIX_PRTSR_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (MATRIX_PRTSR) Register Mask  */


/* -------- MATRIX_PPSELR : (MATRIX Offset: 0x2C0) (R/W 32) Protected Peripheral Select Register -------- */
#define MATRIX_PPSELR_USERP0_Pos              _UINT32_(0)                                          /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP0_Msk              (_UINT32_(0x1) << MATRIX_PPSELR_USERP0_Pos)          /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP0(value)           (MATRIX_PPSELR_USERP0_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP0_Pos)) /* Assigment of value for USERP0 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP1_Pos              _UINT32_(1)                                          /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP1_Msk              (_UINT32_(0x1) << MATRIX_PPSELR_USERP1_Pos)          /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP1(value)           (MATRIX_PPSELR_USERP1_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP1_Pos)) /* Assigment of value for USERP1 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP2_Pos              _UINT32_(2)                                          /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP2_Msk              (_UINT32_(0x1) << MATRIX_PPSELR_USERP2_Pos)          /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP2(value)           (MATRIX_PPSELR_USERP2_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP2_Pos)) /* Assigment of value for USERP2 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP3_Pos              _UINT32_(3)                                          /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP3_Msk              (_UINT32_(0x1) << MATRIX_PPSELR_USERP3_Pos)          /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP3(value)           (MATRIX_PPSELR_USERP3_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP3_Pos)) /* Assigment of value for USERP3 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP4_Pos              _UINT32_(4)                                          /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP4_Msk              (_UINT32_(0x1) << MATRIX_PPSELR_USERP4_Pos)          /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP4(value)           (MATRIX_PPSELR_USERP4_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP4_Pos)) /* Assigment of value for USERP4 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP5_Pos              _UINT32_(5)                                          /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP5_Msk              (_UINT32_(0x1) << MATRIX_PPSELR_USERP5_Pos)          /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP5(value)           (MATRIX_PPSELR_USERP5_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP5_Pos)) /* Assigment of value for USERP5 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP6_Pos              _UINT32_(6)                                          /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP6_Msk              (_UINT32_(0x1) << MATRIX_PPSELR_USERP6_Pos)          /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP6(value)           (MATRIX_PPSELR_USERP6_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP6_Pos)) /* Assigment of value for USERP6 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP7_Pos              _UINT32_(7)                                          /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP7_Msk              (_UINT32_(0x1) << MATRIX_PPSELR_USERP7_Pos)          /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP7(value)           (MATRIX_PPSELR_USERP7_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP7_Pos)) /* Assigment of value for USERP7 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP8_Pos              _UINT32_(8)                                          /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP8_Msk              (_UINT32_(0x1) << MATRIX_PPSELR_USERP8_Pos)          /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP8(value)           (MATRIX_PPSELR_USERP8_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP8_Pos)) /* Assigment of value for USERP8 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP9_Pos              _UINT32_(9)                                          /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP9_Msk              (_UINT32_(0x1) << MATRIX_PPSELR_USERP9_Pos)          /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP9(value)           (MATRIX_PPSELR_USERP9_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP9_Pos)) /* Assigment of value for USERP9 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP10_Pos             _UINT32_(10)                                         /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP10_Msk             (_UINT32_(0x1) << MATRIX_PPSELR_USERP10_Pos)         /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP10(value)          (MATRIX_PPSELR_USERP10_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP10_Pos)) /* Assigment of value for USERP10 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP11_Pos             _UINT32_(11)                                         /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP11_Msk             (_UINT32_(0x1) << MATRIX_PPSELR_USERP11_Pos)         /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP11(value)          (MATRIX_PPSELR_USERP11_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP11_Pos)) /* Assigment of value for USERP11 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP12_Pos             _UINT32_(12)                                         /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP12_Msk             (_UINT32_(0x1) << MATRIX_PPSELR_USERP12_Pos)         /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP12(value)          (MATRIX_PPSELR_USERP12_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP12_Pos)) /* Assigment of value for USERP12 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP13_Pos             _UINT32_(13)                                         /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP13_Msk             (_UINT32_(0x1) << MATRIX_PPSELR_USERP13_Pos)         /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP13(value)          (MATRIX_PPSELR_USERP13_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP13_Pos)) /* Assigment of value for USERP13 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP14_Pos             _UINT32_(14)                                         /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP14_Msk             (_UINT32_(0x1) << MATRIX_PPSELR_USERP14_Pos)         /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP14(value)          (MATRIX_PPSELR_USERP14_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP14_Pos)) /* Assigment of value for USERP14 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP15_Pos             _UINT32_(15)                                         /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP15_Msk             (_UINT32_(0x1) << MATRIX_PPSELR_USERP15_Pos)         /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP15(value)          (MATRIX_PPSELR_USERP15_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP15_Pos)) /* Assigment of value for USERP15 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP16_Pos             _UINT32_(16)                                         /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP16_Msk             (_UINT32_(0x1) << MATRIX_PPSELR_USERP16_Pos)         /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP16(value)          (MATRIX_PPSELR_USERP16_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP16_Pos)) /* Assigment of value for USERP16 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP17_Pos             _UINT32_(17)                                         /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP17_Msk             (_UINT32_(0x1) << MATRIX_PPSELR_USERP17_Pos)         /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP17(value)          (MATRIX_PPSELR_USERP17_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP17_Pos)) /* Assigment of value for USERP17 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP18_Pos             _UINT32_(18)                                         /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP18_Msk             (_UINT32_(0x1) << MATRIX_PPSELR_USERP18_Pos)         /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP18(value)          (MATRIX_PPSELR_USERP18_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP18_Pos)) /* Assigment of value for USERP18 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP19_Pos             _UINT32_(19)                                         /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP19_Msk             (_UINT32_(0x1) << MATRIX_PPSELR_USERP19_Pos)         /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP19(value)          (MATRIX_PPSELR_USERP19_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP19_Pos)) /* Assigment of value for USERP19 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP20_Pos             _UINT32_(20)                                         /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP20_Msk             (_UINT32_(0x1) << MATRIX_PPSELR_USERP20_Pos)         /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP20(value)          (MATRIX_PPSELR_USERP20_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP20_Pos)) /* Assigment of value for USERP20 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP21_Pos             _UINT32_(21)                                         /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP21_Msk             (_UINT32_(0x1) << MATRIX_PPSELR_USERP21_Pos)         /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP21(value)          (MATRIX_PPSELR_USERP21_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP21_Pos)) /* Assigment of value for USERP21 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP22_Pos             _UINT32_(22)                                         /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP22_Msk             (_UINT32_(0x1) << MATRIX_PPSELR_USERP22_Pos)         /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP22(value)          (MATRIX_PPSELR_USERP22_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP22_Pos)) /* Assigment of value for USERP22 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP23_Pos             _UINT32_(23)                                         /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP23_Msk             (_UINT32_(0x1) << MATRIX_PPSELR_USERP23_Pos)         /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP23(value)          (MATRIX_PPSELR_USERP23_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP23_Pos)) /* Assigment of value for USERP23 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP24_Pos             _UINT32_(24)                                         /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP24_Msk             (_UINT32_(0x1) << MATRIX_PPSELR_USERP24_Pos)         /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP24(value)          (MATRIX_PPSELR_USERP24_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP24_Pos)) /* Assigment of value for USERP24 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP25_Pos             _UINT32_(25)                                         /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP25_Msk             (_UINT32_(0x1) << MATRIX_PPSELR_USERP25_Pos)         /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP25(value)          (MATRIX_PPSELR_USERP25_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP25_Pos)) /* Assigment of value for USERP25 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP26_Pos             _UINT32_(26)                                         /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP26_Msk             (_UINT32_(0x1) << MATRIX_PPSELR_USERP26_Pos)         /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP26(value)          (MATRIX_PPSELR_USERP26_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP26_Pos)) /* Assigment of value for USERP26 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP27_Pos             _UINT32_(27)                                         /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP27_Msk             (_UINT32_(0x1) << MATRIX_PPSELR_USERP27_Pos)         /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP27(value)          (MATRIX_PPSELR_USERP27_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP27_Pos)) /* Assigment of value for USERP27 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP28_Pos             _UINT32_(28)                                         /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP28_Msk             (_UINT32_(0x1) << MATRIX_PPSELR_USERP28_Pos)         /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP28(value)          (MATRIX_PPSELR_USERP28_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP28_Pos)) /* Assigment of value for USERP28 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP29_Pos             _UINT32_(29)                                         /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP29_Msk             (_UINT32_(0x1) << MATRIX_PPSELR_USERP29_Pos)         /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP29(value)          (MATRIX_PPSELR_USERP29_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP29_Pos)) /* Assigment of value for USERP29 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP30_Pos             _UINT32_(30)                                         /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP30_Msk             (_UINT32_(0x1) << MATRIX_PPSELR_USERP30_Pos)         /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP30(value)          (MATRIX_PPSELR_USERP30_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP30_Pos)) /* Assigment of value for USERP30 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_USERP31_Pos             _UINT32_(31)                                         /* (MATRIX_PPSELR) User PSELy Peripheral Position */
#define MATRIX_PPSELR_USERP31_Msk             (_UINT32_(0x1) << MATRIX_PPSELR_USERP31_Pos)         /* (MATRIX_PPSELR) User PSELy Peripheral Mask */
#define MATRIX_PPSELR_USERP31(value)          (MATRIX_PPSELR_USERP31_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP31_Pos)) /* Assigment of value for USERP31 in the MATRIX_PPSELR register */
#define MATRIX_PPSELR_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (MATRIX_PPSELR) Register Mask  */

#define MATRIX_PPSELR_USERP_Pos               _UINT32_(0)                                          /* (MATRIX_PPSELR Position) User PSELy Peripheral */
#define MATRIX_PPSELR_USERP_Msk               (_UINT32_(0xFFFFFFFF) << MATRIX_PPSELR_USERP_Pos)    /* (MATRIX_PPSELR Mask) USERP */
#define MATRIX_PPSELR_USERP(value)            (MATRIX_PPSELR_USERP_Msk & (_UINT32_(value) << MATRIX_PPSELR_USERP_Pos)) 

/** \brief MATRIX register offsets definitions */
#define MATRIX_PRAS_REG_OFST           _UINT32_(0x00)      /* (MATRIX_PRAS) Priority Register A for Slave Offset */
#define MATRIX_PRBS_REG_OFST           _UINT32_(0x04)      /* (MATRIX_PRBS) Priority Register B for Slave Offset */
#define MATRIX_MCFG_REG_OFST           _UINT32_(0x00)      /* (MATRIX_MCFG) Master Configuration Register Offset */
#define MATRIX_MCFG0_REG_OFST          _UINT32_(0x00)      /* (MATRIX_MCFG0) Master Configuration Register Offset */
#define MATRIX_MCFG1_REG_OFST          _UINT32_(0x04)      /* (MATRIX_MCFG1) Master Configuration Register Offset */
#define MATRIX_MCFG2_REG_OFST          _UINT32_(0x08)      /* (MATRIX_MCFG2) Master Configuration Register Offset */
#define MATRIX_MCFG3_REG_OFST          _UINT32_(0x0C)      /* (MATRIX_MCFG3) Master Configuration Register Offset */
#define MATRIX_MCFG4_REG_OFST          _UINT32_(0x10)      /* (MATRIX_MCFG4) Master Configuration Register Offset */
#define MATRIX_MCFG5_REG_OFST          _UINT32_(0x14)      /* (MATRIX_MCFG5) Master Configuration Register Offset */
#define MATRIX_MCFG6_REG_OFST          _UINT32_(0x18)      /* (MATRIX_MCFG6) Master Configuration Register Offset */
#define MATRIX_MCFG7_REG_OFST          _UINT32_(0x1C)      /* (MATRIX_MCFG7) Master Configuration Register Offset */
#define MATRIX_MCFG8_REG_OFST          _UINT32_(0x20)      /* (MATRIX_MCFG8) Master Configuration Register Offset */
#define MATRIX_MCFG9_REG_OFST          _UINT32_(0x24)      /* (MATRIX_MCFG9) Master Configuration Register Offset */
#define MATRIX_MCFG10_REG_OFST         _UINT32_(0x28)      /* (MATRIX_MCFG10) Master Configuration Register Offset */
#define MATRIX_MCFG11_REG_OFST         _UINT32_(0x2C)      /* (MATRIX_MCFG11) Master Configuration Register Offset */
#define MATRIX_MCFG12_REG_OFST         _UINT32_(0x30)      /* (MATRIX_MCFG12) Master Configuration Register Offset */
#define MATRIX_MCFG13_REG_OFST         _UINT32_(0x34)      /* (MATRIX_MCFG13) Master Configuration Register Offset */
#define MATRIX_MCFG14_REG_OFST         _UINT32_(0x38)      /* (MATRIX_MCFG14) Master Configuration Register Offset */
#define MATRIX_MCFG15_REG_OFST         _UINT32_(0x3C)      /* (MATRIX_MCFG15) Master Configuration Register Offset */
#define MATRIX_SCFG_REG_OFST           _UINT32_(0x40)      /* (MATRIX_SCFG) Slave Configuration Register Offset */
#define MATRIX_SCFG0_REG_OFST          _UINT32_(0x40)      /* (MATRIX_SCFG0) Slave Configuration Register Offset */
#define MATRIX_SCFG1_REG_OFST          _UINT32_(0x44)      /* (MATRIX_SCFG1) Slave Configuration Register Offset */
#define MATRIX_SCFG2_REG_OFST          _UINT32_(0x48)      /* (MATRIX_SCFG2) Slave Configuration Register Offset */
#define MATRIX_SCFG3_REG_OFST          _UINT32_(0x4C)      /* (MATRIX_SCFG3) Slave Configuration Register Offset */
#define MATRIX_SCFG4_REG_OFST          _UINT32_(0x50)      /* (MATRIX_SCFG4) Slave Configuration Register Offset */
#define MATRIX_SCFG5_REG_OFST          _UINT32_(0x54)      /* (MATRIX_SCFG5) Slave Configuration Register Offset */
#define MATRIX_SCFG6_REG_OFST          _UINT32_(0x58)      /* (MATRIX_SCFG6) Slave Configuration Register Offset */
#define MATRIX_SCFG7_REG_OFST          _UINT32_(0x5C)      /* (MATRIX_SCFG7) Slave Configuration Register Offset */
#define MATRIX_SCFG8_REG_OFST          _UINT32_(0x60)      /* (MATRIX_SCFG8) Slave Configuration Register Offset */
#define MATRIX_SCFG9_REG_OFST          _UINT32_(0x64)      /* (MATRIX_SCFG9) Slave Configuration Register Offset */
#define MATRIX_SCFG10_REG_OFST         _UINT32_(0x68)      /* (MATRIX_SCFG10) Slave Configuration Register Offset */
#define MATRIX_SCFG11_REG_OFST         _UINT32_(0x6C)      /* (MATRIX_SCFG11) Slave Configuration Register Offset */
#define MATRIX_SCFG12_REG_OFST         _UINT32_(0x70)      /* (MATRIX_SCFG12) Slave Configuration Register Offset */
#define MATRIX_SCFG13_REG_OFST         _UINT32_(0x74)      /* (MATRIX_SCFG13) Slave Configuration Register Offset */
#define MATRIX_SCFG14_REG_OFST         _UINT32_(0x78)      /* (MATRIX_SCFG14) Slave Configuration Register Offset */
#define MATRIX_SCFG15_REG_OFST         _UINT32_(0x7C)      /* (MATRIX_SCFG15) Slave Configuration Register Offset */
#define MATRIX_MRCR_REG_OFST           _UINT32_(0x100)     /* (MATRIX_MRCR) Master Remap Control Register Offset */
#define MATRIX_MEIER_REG_OFST          _UINT32_(0x150)     /* (MATRIX_MEIER) Master Error Interrupt Enable Register Offset */
#define MATRIX_MEIDR_REG_OFST          _UINT32_(0x154)     /* (MATRIX_MEIDR) Master Error Interrupt Disable Register Offset */
#define MATRIX_MEIMR_REG_OFST          _UINT32_(0x158)     /* (MATRIX_MEIMR) Master Error Interrupt Mask Register Offset */
#define MATRIX_MESR_REG_OFST           _UINT32_(0x15C)     /* (MATRIX_MESR) Master Error Status Register Offset */
#define MATRIX_MEAR_REG_OFST           _UINT32_(0x160)     /* (MATRIX_MEAR) Master 0 Error Address Register Offset */
#define MATRIX_MEAR0_REG_OFST          _UINT32_(0x160)     /* (MATRIX_MEAR0) Master 0 Error Address Register Offset */
#define MATRIX_MEAR1_REG_OFST          _UINT32_(0x164)     /* (MATRIX_MEAR1) Master 0 Error Address Register Offset */
#define MATRIX_MEAR2_REG_OFST          _UINT32_(0x168)     /* (MATRIX_MEAR2) Master 0 Error Address Register Offset */
#define MATRIX_MEAR3_REG_OFST          _UINT32_(0x16C)     /* (MATRIX_MEAR3) Master 0 Error Address Register Offset */
#define MATRIX_MEAR4_REG_OFST          _UINT32_(0x170)     /* (MATRIX_MEAR4) Master 0 Error Address Register Offset */
#define MATRIX_MEAR5_REG_OFST          _UINT32_(0x174)     /* (MATRIX_MEAR5) Master 0 Error Address Register Offset */
#define MATRIX_MEAR6_REG_OFST          _UINT32_(0x178)     /* (MATRIX_MEAR6) Master 0 Error Address Register Offset */
#define MATRIX_MEAR7_REG_OFST          _UINT32_(0x17C)     /* (MATRIX_MEAR7) Master 0 Error Address Register Offset */
#define MATRIX_MEAR8_REG_OFST          _UINT32_(0x180)     /* (MATRIX_MEAR8) Master 0 Error Address Register Offset */
#define MATRIX_MEAR9_REG_OFST          _UINT32_(0x184)     /* (MATRIX_MEAR9) Master 0 Error Address Register Offset */
#define MATRIX_MEAR10_REG_OFST         _UINT32_(0x188)     /* (MATRIX_MEAR10) Master 0 Error Address Register Offset */
#define MATRIX_MEAR11_REG_OFST         _UINT32_(0x18C)     /* (MATRIX_MEAR11) Master 0 Error Address Register Offset */
#define MATRIX_MEAR12_REG_OFST         _UINT32_(0x190)     /* (MATRIX_MEAR12) Master 0 Error Address Register Offset */
#define MATRIX_MEAR13_REG_OFST         _UINT32_(0x194)     /* (MATRIX_MEAR13) Master 0 Error Address Register Offset */
#define MATRIX_MEAR14_REG_OFST         _UINT32_(0x198)     /* (MATRIX_MEAR14) Master 0 Error Address Register Offset */
#define MATRIX_MEAR15_REG_OFST         _UINT32_(0x19C)     /* (MATRIX_MEAR15) Master 0 Error Address Register Offset */
#define MATRIX_WPMR_REG_OFST           _UINT32_(0x1E4)     /* (MATRIX_WPMR) Write Protect Mode Register Offset */
#define MATRIX_WPSR_REG_OFST           _UINT32_(0x1E8)     /* (MATRIX_WPSR) Write Protect Status Register Offset */
#define MATRIX_PSR_REG_OFST            _UINT32_(0x200)     /* (MATRIX_PSR) Protection Slave Register Offset */
#define MATRIX_PSR0_REG_OFST           _UINT32_(0x200)     /* (MATRIX_PSR0) Protection Slave Register Offset */
#define MATRIX_PSR1_REG_OFST           _UINT32_(0x204)     /* (MATRIX_PSR1) Protection Slave Register Offset */
#define MATRIX_PSR2_REG_OFST           _UINT32_(0x208)     /* (MATRIX_PSR2) Protection Slave Register Offset */
#define MATRIX_PSR3_REG_OFST           _UINT32_(0x20C)     /* (MATRIX_PSR3) Protection Slave Register Offset */
#define MATRIX_PSR4_REG_OFST           _UINT32_(0x210)     /* (MATRIX_PSR4) Protection Slave Register Offset */
#define MATRIX_PSR5_REG_OFST           _UINT32_(0x214)     /* (MATRIX_PSR5) Protection Slave Register Offset */
#define MATRIX_PSR6_REG_OFST           _UINT32_(0x218)     /* (MATRIX_PSR6) Protection Slave Register Offset */
#define MATRIX_PSR7_REG_OFST           _UINT32_(0x21C)     /* (MATRIX_PSR7) Protection Slave Register Offset */
#define MATRIX_PSR8_REG_OFST           _UINT32_(0x220)     /* (MATRIX_PSR8) Protection Slave Register Offset */
#define MATRIX_PSR9_REG_OFST           _UINT32_(0x224)     /* (MATRIX_PSR9) Protection Slave Register Offset */
#define MATRIX_PSR10_REG_OFST          _UINT32_(0x228)     /* (MATRIX_PSR10) Protection Slave Register Offset */
#define MATRIX_PSR11_REG_OFST          _UINT32_(0x22C)     /* (MATRIX_PSR11) Protection Slave Register Offset */
#define MATRIX_PSR12_REG_OFST          _UINT32_(0x230)     /* (MATRIX_PSR12) Protection Slave Register Offset */
#define MATRIX_PSR13_REG_OFST          _UINT32_(0x234)     /* (MATRIX_PSR13) Protection Slave Register Offset */
#define MATRIX_PSR14_REG_OFST          _UINT32_(0x238)     /* (MATRIX_PSR14) Protection Slave Register Offset */
#define MATRIX_PSR15_REG_OFST          _UINT32_(0x23C)     /* (MATRIX_PSR15) Protection Slave Register Offset */
#define MATRIX_PASSR_REG_OFST          _UINT32_(0x240)     /* (MATRIX_PASSR) Protected Areas Split Slave Register Offset */
#define MATRIX_PASSR0_REG_OFST         _UINT32_(0x240)     /* (MATRIX_PASSR0) Protected Areas Split Slave Register Offset */
#define MATRIX_PASSR1_REG_OFST         _UINT32_(0x244)     /* (MATRIX_PASSR1) Protected Areas Split Slave Register Offset */
#define MATRIX_PASSR2_REG_OFST         _UINT32_(0x248)     /* (MATRIX_PASSR2) Protected Areas Split Slave Register Offset */
#define MATRIX_PASSR3_REG_OFST         _UINT32_(0x24C)     /* (MATRIX_PASSR3) Protected Areas Split Slave Register Offset */
#define MATRIX_PASSR4_REG_OFST         _UINT32_(0x250)     /* (MATRIX_PASSR4) Protected Areas Split Slave Register Offset */
#define MATRIX_PASSR5_REG_OFST         _UINT32_(0x254)     /* (MATRIX_PASSR5) Protected Areas Split Slave Register Offset */
#define MATRIX_PASSR6_REG_OFST         _UINT32_(0x258)     /* (MATRIX_PASSR6) Protected Areas Split Slave Register Offset */
#define MATRIX_PASSR7_REG_OFST         _UINT32_(0x25C)     /* (MATRIX_PASSR7) Protected Areas Split Slave Register Offset */
#define MATRIX_PASSR8_REG_OFST         _UINT32_(0x260)     /* (MATRIX_PASSR8) Protected Areas Split Slave Register Offset */
#define MATRIX_PASSR9_REG_OFST         _UINT32_(0x264)     /* (MATRIX_PASSR9) Protected Areas Split Slave Register Offset */
#define MATRIX_PASSR10_REG_OFST        _UINT32_(0x268)     /* (MATRIX_PASSR10) Protected Areas Split Slave Register Offset */
#define MATRIX_PASSR11_REG_OFST        _UINT32_(0x26C)     /* (MATRIX_PASSR11) Protected Areas Split Slave Register Offset */
#define MATRIX_PASSR12_REG_OFST        _UINT32_(0x270)     /* (MATRIX_PASSR12) Protected Areas Split Slave Register Offset */
#define MATRIX_PASSR13_REG_OFST        _UINT32_(0x274)     /* (MATRIX_PASSR13) Protected Areas Split Slave Register Offset */
#define MATRIX_PASSR14_REG_OFST        _UINT32_(0x278)     /* (MATRIX_PASSR14) Protected Areas Split Slave Register Offset */
#define MATRIX_PASSR15_REG_OFST        _UINT32_(0x27C)     /* (MATRIX_PASSR15) Protected Areas Split Slave Register Offset */
#define MATRIX_PRTSR_REG_OFST          _UINT32_(0x280)     /* (MATRIX_PRTSR) Protected Region Top Slave Register Offset */
#define MATRIX_PRTSR0_REG_OFST         _UINT32_(0x280)     /* (MATRIX_PRTSR0) Protected Region Top Slave Register Offset */
#define MATRIX_PRTSR1_REG_OFST         _UINT32_(0x284)     /* (MATRIX_PRTSR1) Protected Region Top Slave Register Offset */
#define MATRIX_PRTSR2_REG_OFST         _UINT32_(0x288)     /* (MATRIX_PRTSR2) Protected Region Top Slave Register Offset */
#define MATRIX_PRTSR3_REG_OFST         _UINT32_(0x28C)     /* (MATRIX_PRTSR3) Protected Region Top Slave Register Offset */
#define MATRIX_PRTSR4_REG_OFST         _UINT32_(0x290)     /* (MATRIX_PRTSR4) Protected Region Top Slave Register Offset */
#define MATRIX_PRTSR5_REG_OFST         _UINT32_(0x294)     /* (MATRIX_PRTSR5) Protected Region Top Slave Register Offset */
#define MATRIX_PRTSR6_REG_OFST         _UINT32_(0x298)     /* (MATRIX_PRTSR6) Protected Region Top Slave Register Offset */
#define MATRIX_PRTSR7_REG_OFST         _UINT32_(0x29C)     /* (MATRIX_PRTSR7) Protected Region Top Slave Register Offset */
#define MATRIX_PRTSR8_REG_OFST         _UINT32_(0x2A0)     /* (MATRIX_PRTSR8) Protected Region Top Slave Register Offset */
#define MATRIX_PRTSR9_REG_OFST         _UINT32_(0x2A4)     /* (MATRIX_PRTSR9) Protected Region Top Slave Register Offset */
#define MATRIX_PRTSR10_REG_OFST        _UINT32_(0x2A8)     /* (MATRIX_PRTSR10) Protected Region Top Slave Register Offset */
#define MATRIX_PRTSR11_REG_OFST        _UINT32_(0x2AC)     /* (MATRIX_PRTSR11) Protected Region Top Slave Register Offset */
#define MATRIX_PRTSR12_REG_OFST        _UINT32_(0x2B0)     /* (MATRIX_PRTSR12) Protected Region Top Slave Register Offset */
#define MATRIX_PRTSR13_REG_OFST        _UINT32_(0x2B4)     /* (MATRIX_PRTSR13) Protected Region Top Slave Register Offset */
#define MATRIX_PRTSR14_REG_OFST        _UINT32_(0x2B8)     /* (MATRIX_PRTSR14) Protected Region Top Slave Register Offset */
#define MATRIX_PRTSR15_REG_OFST        _UINT32_(0x2BC)     /* (MATRIX_PRTSR15) Protected Region Top Slave Register Offset */
#define MATRIX_PPSELR_REG_OFST         _UINT32_(0x2C0)     /* (MATRIX_PPSELR) Protected Peripheral Select Register Offset */
#define MATRIX_PPSELR0_REG_OFST        _UINT32_(0x2C0)     /* (MATRIX_PPSELR0) Protected Peripheral Select Register Offset */
#define MATRIX_PPSELR1_REG_OFST        _UINT32_(0x2C4)     /* (MATRIX_PPSELR1) Protected Peripheral Select Register Offset */
#define MATRIX_PPSELR2_REG_OFST        _UINT32_(0x2C8)     /* (MATRIX_PPSELR2) Protected Peripheral Select Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief MATRIX_PR register API structure */
typedef struct
{
  __IO  uint32_t                       MATRIX_PRAS;        /**< Offset: 0x00 (R/W  32) Priority Register A for Slave */
  __IO  uint32_t                       MATRIX_PRBS;        /**< Offset: 0x04 (R/W  32) Priority Register B for Slave */
} matrix_pr_registers_t;

#define MATRIX_PR_NUMBER 16

/** \brief MATRIX register API structure */
typedef struct
{
  __IO  uint32_t                       MATRIX_MCFG[16];    /**< Offset: 0x00 (R/W  32) Master Configuration Register */
  __IO  uint32_t                       MATRIX_SCFG[16];    /**< Offset: 0x40 (R/W  32) Slave Configuration Register */
        matrix_pr_registers_t          MATRIX_PR[MATRIX_PR_NUMBER]; /**< Offset: 0x80  */
  __IO  uint32_t                       MATRIX_MRCR;        /**< Offset: 0x100 (R/W  32) Master Remap Control Register */
  __I   uint8_t                        Reserved1[0x4C];
  __O   uint32_t                       MATRIX_MEIER;       /**< Offset: 0x150 ( /W  32) Master Error Interrupt Enable Register */
  __O   uint32_t                       MATRIX_MEIDR;       /**< Offset: 0x154 ( /W  32) Master Error Interrupt Disable Register */
  __I   uint32_t                       MATRIX_MEIMR;       /**< Offset: 0x158 (R/   32) Master Error Interrupt Mask Register */
  __I   uint32_t                       MATRIX_MESR;        /**< Offset: 0x15C (R/   32) Master Error Status Register */
  __I   uint32_t                       MATRIX_MEAR[16];    /**< Offset: 0x160 (R/   32) Master 0 Error Address Register */
  __I   uint8_t                        Reserved2[0x44];
  __IO  uint32_t                       MATRIX_WPMR;        /**< Offset: 0x1E4 (R/W  32) Write Protect Mode Register */
  __I   uint32_t                       MATRIX_WPSR;        /**< Offset: 0x1E8 (R/   32) Write Protect Status Register */
  __I   uint8_t                        Reserved3[0x14];
  __IO  uint32_t                       MATRIX_PSR[16];     /**< Offset: 0x200 (R/W  32) Protection Slave Register */
  __IO  uint32_t                       MATRIX_PASSR[16];   /**< Offset: 0x240 (R/W  32) Protected Areas Split Slave Register */
  __IO  uint32_t                       MATRIX_PRTSR[16];   /**< Offset: 0x280 (R/W  32) Protected Region Top Slave Register */
  __IO  uint32_t                       MATRIX_PPSELR[3];   /**< Offset: 0x2C0 (R/W  32) Protected Peripheral Select Register */
} matrix_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMRH71_MATRIX_COMPONENT_H_ */
