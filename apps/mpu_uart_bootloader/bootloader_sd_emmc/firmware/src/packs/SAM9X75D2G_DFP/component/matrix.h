/*
 * Component description for MATRIX
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

/*  file generated from device description file (ATDF) version 2024-06-25T17:22:56Z  */
#ifndef _SAM9X7_MATRIX_COMPONENT_H_
#define _SAM9X7_MATRIX_COMPONENT_H_

/* ************************************************************************** */
/*                     SOFTWARE API DEFINITION FOR MATRIX                     */
/* ************************************************************************** */

/* -------- MATRIX_PRAS : (MATRIX Offset: 0x00) (R/W 32) Priority Register A for Client x -------- */
#define MATRIX_PRAS_RESETVALUE                _UINT32_(0x00)                                       /*  (MATRIX_PRAS) Priority Register A for Client x  Reset Value */

#define MATRIX_PRAS_M0PR_Pos                  _UINT32_(0)                                          /* (MATRIX_PRAS) Host 0 Priority Position */
#define MATRIX_PRAS_M0PR_Msk                  (_UINT32_(0x3) << MATRIX_PRAS_M0PR_Pos)              /* (MATRIX_PRAS) Host 0 Priority Mask */
#define MATRIX_PRAS_M0PR(value)               (MATRIX_PRAS_M0PR_Msk & (_UINT32_(value) << MATRIX_PRAS_M0PR_Pos)) /* Assignment of value for M0PR in the MATRIX_PRAS register */
#define MATRIX_PRAS_LQOSEN0_Pos               _UINT32_(2)                                          /* (MATRIX_PRAS) Latency Quality of Service Enable for Host 0 Position */
#define MATRIX_PRAS_LQOSEN0_Msk               (_UINT32_(0x1) << MATRIX_PRAS_LQOSEN0_Pos)           /* (MATRIX_PRAS) Latency Quality of Service Enable for Host 0 Mask */
#define MATRIX_PRAS_LQOSEN0(value)            (MATRIX_PRAS_LQOSEN0_Msk & (_UINT32_(value) << MATRIX_PRAS_LQOSEN0_Pos)) /* Assignment of value for LQOSEN0 in the MATRIX_PRAS register */
#define   MATRIX_PRAS_LQOSEN0_0_Val           _UINT32_(0x0)                                        /* (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Host x to the Client and apply MxPR priority for all access from Host x to the Client.  */
#define   MATRIX_PRAS_LQOSEN0_1_Val           _UINT32_(0x1)                                        /* (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Host x to the Client if supported by the Host x.  */
#define MATRIX_PRAS_LQOSEN0_0                 (MATRIX_PRAS_LQOSEN0_0_Val << MATRIX_PRAS_LQOSEN0_Pos) /* (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Host x to the Client and apply MxPR priority for all access from Host x to the Client. Position */
#define MATRIX_PRAS_LQOSEN0_1                 (MATRIX_PRAS_LQOSEN0_1_Val << MATRIX_PRAS_LQOSEN0_Pos) /* (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Host x to the Client if supported by the Host x. Position */
#define MATRIX_PRAS_M1PR_Pos                  _UINT32_(4)                                          /* (MATRIX_PRAS) Host 1 Priority Position */
#define MATRIX_PRAS_M1PR_Msk                  (_UINT32_(0x3) << MATRIX_PRAS_M1PR_Pos)              /* (MATRIX_PRAS) Host 1 Priority Mask */
#define MATRIX_PRAS_M1PR(value)               (MATRIX_PRAS_M1PR_Msk & (_UINT32_(value) << MATRIX_PRAS_M1PR_Pos)) /* Assignment of value for M1PR in the MATRIX_PRAS register */
#define MATRIX_PRAS_LQOSEN1_Pos               _UINT32_(6)                                          /* (MATRIX_PRAS) Latency Quality of Service Enable for Host 1 Position */
#define MATRIX_PRAS_LQOSEN1_Msk               (_UINT32_(0x1) << MATRIX_PRAS_LQOSEN1_Pos)           /* (MATRIX_PRAS) Latency Quality of Service Enable for Host 1 Mask */
#define MATRIX_PRAS_LQOSEN1(value)            (MATRIX_PRAS_LQOSEN1_Msk & (_UINT32_(value) << MATRIX_PRAS_LQOSEN1_Pos)) /* Assignment of value for LQOSEN1 in the MATRIX_PRAS register */
#define   MATRIX_PRAS_LQOSEN1_0_Val           _UINT32_(0x0)                                        /* (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Host x to the Client and apply MxPR priority for all access from Host x to the Client.  */
#define   MATRIX_PRAS_LQOSEN1_1_Val           _UINT32_(0x1)                                        /* (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Host x to the Client if supported by the Host x.  */
#define MATRIX_PRAS_LQOSEN1_0                 (MATRIX_PRAS_LQOSEN1_0_Val << MATRIX_PRAS_LQOSEN1_Pos) /* (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Host x to the Client and apply MxPR priority for all access from Host x to the Client. Position */
#define MATRIX_PRAS_LQOSEN1_1                 (MATRIX_PRAS_LQOSEN1_1_Val << MATRIX_PRAS_LQOSEN1_Pos) /* (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Host x to the Client if supported by the Host x. Position */
#define MATRIX_PRAS_M2PR_Pos                  _UINT32_(8)                                          /* (MATRIX_PRAS) Host 2 Priority Position */
#define MATRIX_PRAS_M2PR_Msk                  (_UINT32_(0x3) << MATRIX_PRAS_M2PR_Pos)              /* (MATRIX_PRAS) Host 2 Priority Mask */
#define MATRIX_PRAS_M2PR(value)               (MATRIX_PRAS_M2PR_Msk & (_UINT32_(value) << MATRIX_PRAS_M2PR_Pos)) /* Assignment of value for M2PR in the MATRIX_PRAS register */
#define MATRIX_PRAS_LQOSEN2_Pos               _UINT32_(10)                                         /* (MATRIX_PRAS) Latency Quality of Service Enable for Host 2 Position */
#define MATRIX_PRAS_LQOSEN2_Msk               (_UINT32_(0x1) << MATRIX_PRAS_LQOSEN2_Pos)           /* (MATRIX_PRAS) Latency Quality of Service Enable for Host 2 Mask */
#define MATRIX_PRAS_LQOSEN2(value)            (MATRIX_PRAS_LQOSEN2_Msk & (_UINT32_(value) << MATRIX_PRAS_LQOSEN2_Pos)) /* Assignment of value for LQOSEN2 in the MATRIX_PRAS register */
#define   MATRIX_PRAS_LQOSEN2_0_Val           _UINT32_(0x0)                                        /* (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Host x to the Client and apply MxPR priority for all access from Host x to the Client.  */
#define   MATRIX_PRAS_LQOSEN2_1_Val           _UINT32_(0x1)                                        /* (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Host x to the Client if supported by the Host x.  */
#define MATRIX_PRAS_LQOSEN2_0                 (MATRIX_PRAS_LQOSEN2_0_Val << MATRIX_PRAS_LQOSEN2_Pos) /* (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Host x to the Client and apply MxPR priority for all access from Host x to the Client. Position */
#define MATRIX_PRAS_LQOSEN2_1                 (MATRIX_PRAS_LQOSEN2_1_Val << MATRIX_PRAS_LQOSEN2_Pos) /* (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Host x to the Client if supported by the Host x. Position */
#define MATRIX_PRAS_M3PR_Pos                  _UINT32_(12)                                         /* (MATRIX_PRAS) Host 3 Priority Position */
#define MATRIX_PRAS_M3PR_Msk                  (_UINT32_(0x3) << MATRIX_PRAS_M3PR_Pos)              /* (MATRIX_PRAS) Host 3 Priority Mask */
#define MATRIX_PRAS_M3PR(value)               (MATRIX_PRAS_M3PR_Msk & (_UINT32_(value) << MATRIX_PRAS_M3PR_Pos)) /* Assignment of value for M3PR in the MATRIX_PRAS register */
#define MATRIX_PRAS_LQOSEN3_Pos               _UINT32_(14)                                         /* (MATRIX_PRAS) Latency Quality of Service Enable for Host 3 Position */
#define MATRIX_PRAS_LQOSEN3_Msk               (_UINT32_(0x1) << MATRIX_PRAS_LQOSEN3_Pos)           /* (MATRIX_PRAS) Latency Quality of Service Enable for Host 3 Mask */
#define MATRIX_PRAS_LQOSEN3(value)            (MATRIX_PRAS_LQOSEN3_Msk & (_UINT32_(value) << MATRIX_PRAS_LQOSEN3_Pos)) /* Assignment of value for LQOSEN3 in the MATRIX_PRAS register */
#define   MATRIX_PRAS_LQOSEN3_0_Val           _UINT32_(0x0)                                        /* (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Host x to the Client and apply MxPR priority for all access from Host x to the Client.  */
#define   MATRIX_PRAS_LQOSEN3_1_Val           _UINT32_(0x1)                                        /* (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Host x to the Client if supported by the Host x.  */
#define MATRIX_PRAS_LQOSEN3_0                 (MATRIX_PRAS_LQOSEN3_0_Val << MATRIX_PRAS_LQOSEN3_Pos) /* (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Host x to the Client and apply MxPR priority for all access from Host x to the Client. Position */
#define MATRIX_PRAS_LQOSEN3_1                 (MATRIX_PRAS_LQOSEN3_1_Val << MATRIX_PRAS_LQOSEN3_Pos) /* (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Host x to the Client if supported by the Host x. Position */
#define MATRIX_PRAS_M4PR_Pos                  _UINT32_(16)                                         /* (MATRIX_PRAS) Host 4 Priority Position */
#define MATRIX_PRAS_M4PR_Msk                  (_UINT32_(0x3) << MATRIX_PRAS_M4PR_Pos)              /* (MATRIX_PRAS) Host 4 Priority Mask */
#define MATRIX_PRAS_M4PR(value)               (MATRIX_PRAS_M4PR_Msk & (_UINT32_(value) << MATRIX_PRAS_M4PR_Pos)) /* Assignment of value for M4PR in the MATRIX_PRAS register */
#define MATRIX_PRAS_LQOSEN4_Pos               _UINT32_(18)                                         /* (MATRIX_PRAS) Latency Quality of Service Enable for Host 4 Position */
#define MATRIX_PRAS_LQOSEN4_Msk               (_UINT32_(0x1) << MATRIX_PRAS_LQOSEN4_Pos)           /* (MATRIX_PRAS) Latency Quality of Service Enable for Host 4 Mask */
#define MATRIX_PRAS_LQOSEN4(value)            (MATRIX_PRAS_LQOSEN4_Msk & (_UINT32_(value) << MATRIX_PRAS_LQOSEN4_Pos)) /* Assignment of value for LQOSEN4 in the MATRIX_PRAS register */
#define   MATRIX_PRAS_LQOSEN4_0_Val           _UINT32_(0x0)                                        /* (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Host x to the Client and apply MxPR priority for all access from Host x to the Client.  */
#define   MATRIX_PRAS_LQOSEN4_1_Val           _UINT32_(0x1)                                        /* (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Host x to the Client if supported by the Host x.  */
#define MATRIX_PRAS_LQOSEN4_0                 (MATRIX_PRAS_LQOSEN4_0_Val << MATRIX_PRAS_LQOSEN4_Pos) /* (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Host x to the Client and apply MxPR priority for all access from Host x to the Client. Position */
#define MATRIX_PRAS_LQOSEN4_1                 (MATRIX_PRAS_LQOSEN4_1_Val << MATRIX_PRAS_LQOSEN4_Pos) /* (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Host x to the Client if supported by the Host x. Position */
#define MATRIX_PRAS_M5PR_Pos                  _UINT32_(20)                                         /* (MATRIX_PRAS) Host 5 Priority Position */
#define MATRIX_PRAS_M5PR_Msk                  (_UINT32_(0x3) << MATRIX_PRAS_M5PR_Pos)              /* (MATRIX_PRAS) Host 5 Priority Mask */
#define MATRIX_PRAS_M5PR(value)               (MATRIX_PRAS_M5PR_Msk & (_UINT32_(value) << MATRIX_PRAS_M5PR_Pos)) /* Assignment of value for M5PR in the MATRIX_PRAS register */
#define MATRIX_PRAS_LQOSEN5_Pos               _UINT32_(22)                                         /* (MATRIX_PRAS) Latency Quality of Service Enable for Host 5 Position */
#define MATRIX_PRAS_LQOSEN5_Msk               (_UINT32_(0x1) << MATRIX_PRAS_LQOSEN5_Pos)           /* (MATRIX_PRAS) Latency Quality of Service Enable for Host 5 Mask */
#define MATRIX_PRAS_LQOSEN5(value)            (MATRIX_PRAS_LQOSEN5_Msk & (_UINT32_(value) << MATRIX_PRAS_LQOSEN5_Pos)) /* Assignment of value for LQOSEN5 in the MATRIX_PRAS register */
#define   MATRIX_PRAS_LQOSEN5_0_Val           _UINT32_(0x0)                                        /* (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Host x to the Client and apply MxPR priority for all access from Host x to the Client.  */
#define   MATRIX_PRAS_LQOSEN5_1_Val           _UINT32_(0x1)                                        /* (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Host x to the Client if supported by the Host x.  */
#define MATRIX_PRAS_LQOSEN5_0                 (MATRIX_PRAS_LQOSEN5_0_Val << MATRIX_PRAS_LQOSEN5_Pos) /* (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Host x to the Client and apply MxPR priority for all access from Host x to the Client. Position */
#define MATRIX_PRAS_LQOSEN5_1                 (MATRIX_PRAS_LQOSEN5_1_Val << MATRIX_PRAS_LQOSEN5_Pos) /* (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Host x to the Client if supported by the Host x. Position */
#define MATRIX_PRAS_M6PR_Pos                  _UINT32_(24)                                         /* (MATRIX_PRAS) Host 6 Priority Position */
#define MATRIX_PRAS_M6PR_Msk                  (_UINT32_(0x3) << MATRIX_PRAS_M6PR_Pos)              /* (MATRIX_PRAS) Host 6 Priority Mask */
#define MATRIX_PRAS_M6PR(value)               (MATRIX_PRAS_M6PR_Msk & (_UINT32_(value) << MATRIX_PRAS_M6PR_Pos)) /* Assignment of value for M6PR in the MATRIX_PRAS register */
#define MATRIX_PRAS_LQOSEN6_Pos               _UINT32_(26)                                         /* (MATRIX_PRAS) Latency Quality of Service Enable for Host 6 Position */
#define MATRIX_PRAS_LQOSEN6_Msk               (_UINT32_(0x1) << MATRIX_PRAS_LQOSEN6_Pos)           /* (MATRIX_PRAS) Latency Quality of Service Enable for Host 6 Mask */
#define MATRIX_PRAS_LQOSEN6(value)            (MATRIX_PRAS_LQOSEN6_Msk & (_UINT32_(value) << MATRIX_PRAS_LQOSEN6_Pos)) /* Assignment of value for LQOSEN6 in the MATRIX_PRAS register */
#define   MATRIX_PRAS_LQOSEN6_0_Val           _UINT32_(0x0)                                        /* (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Host x to the Client and apply MxPR priority for all access from Host x to the Client.  */
#define   MATRIX_PRAS_LQOSEN6_1_Val           _UINT32_(0x1)                                        /* (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Host x to the Client if supported by the Host x.  */
#define MATRIX_PRAS_LQOSEN6_0                 (MATRIX_PRAS_LQOSEN6_0_Val << MATRIX_PRAS_LQOSEN6_Pos) /* (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Host x to the Client and apply MxPR priority for all access from Host x to the Client. Position */
#define MATRIX_PRAS_LQOSEN6_1                 (MATRIX_PRAS_LQOSEN6_1_Val << MATRIX_PRAS_LQOSEN6_Pos) /* (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Host x to the Client if supported by the Host x. Position */
#define MATRIX_PRAS_M7PR_Pos                  _UINT32_(28)                                         /* (MATRIX_PRAS) Host 7 Priority Position */
#define MATRIX_PRAS_M7PR_Msk                  (_UINT32_(0x3) << MATRIX_PRAS_M7PR_Pos)              /* (MATRIX_PRAS) Host 7 Priority Mask */
#define MATRIX_PRAS_M7PR(value)               (MATRIX_PRAS_M7PR_Msk & (_UINT32_(value) << MATRIX_PRAS_M7PR_Pos)) /* Assignment of value for M7PR in the MATRIX_PRAS register */
#define MATRIX_PRAS_LQOSEN7_Pos               _UINT32_(30)                                         /* (MATRIX_PRAS) Latency Quality of Service Enable for Host 7 Position */
#define MATRIX_PRAS_LQOSEN7_Msk               (_UINT32_(0x1) << MATRIX_PRAS_LQOSEN7_Pos)           /* (MATRIX_PRAS) Latency Quality of Service Enable for Host 7 Mask */
#define MATRIX_PRAS_LQOSEN7(value)            (MATRIX_PRAS_LQOSEN7_Msk & (_UINT32_(value) << MATRIX_PRAS_LQOSEN7_Pos)) /* Assignment of value for LQOSEN7 in the MATRIX_PRAS register */
#define   MATRIX_PRAS_LQOSEN7_0_Val           _UINT32_(0x0)                                        /* (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Host x to the Client and apply MxPR priority for all access from Host x to the Client.  */
#define   MATRIX_PRAS_LQOSEN7_1_Val           _UINT32_(0x1)                                        /* (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Host x to the Client if supported by the Host x.  */
#define MATRIX_PRAS_LQOSEN7_0                 (MATRIX_PRAS_LQOSEN7_0_Val << MATRIX_PRAS_LQOSEN7_Pos) /* (MATRIX_PRAS) Disables propagation of Latency Quality of Service from the Host x to the Client and apply MxPR priority for all access from Host x to the Client. Position */
#define MATRIX_PRAS_LQOSEN7_1                 (MATRIX_PRAS_LQOSEN7_1_Val << MATRIX_PRAS_LQOSEN7_Pos) /* (MATRIX_PRAS) Enables the propagation of Latency Quality of Service from the Host x to the Client if supported by the Host x. Position */
#define MATRIX_PRAS_Msk                       _UINT32_(0x77777777)                                 /* (MATRIX_PRAS) Register Mask  */


/* -------- MATRIX_PRBS : (MATRIX Offset: 0x04) (R/W 32) Priority Register B for Client x -------- */
#define MATRIX_PRBS_RESETVALUE                _UINT32_(0x00)                                       /*  (MATRIX_PRBS) Priority Register B for Client x  Reset Value */

#define MATRIX_PRBS_M8PR_Pos                  _UINT32_(0)                                          /* (MATRIX_PRBS) Host 8 Priority Position */
#define MATRIX_PRBS_M8PR_Msk                  (_UINT32_(0x3) << MATRIX_PRBS_M8PR_Pos)              /* (MATRIX_PRBS) Host 8 Priority Mask */
#define MATRIX_PRBS_M8PR(value)               (MATRIX_PRBS_M8PR_Msk & (_UINT32_(value) << MATRIX_PRBS_M8PR_Pos)) /* Assignment of value for M8PR in the MATRIX_PRBS register */
#define MATRIX_PRBS_LQOSEN8_Pos               _UINT32_(2)                                          /* (MATRIX_PRBS) Latency Quality of Service Enable for Host 8 Position */
#define MATRIX_PRBS_LQOSEN8_Msk               (_UINT32_(0x1) << MATRIX_PRBS_LQOSEN8_Pos)           /* (MATRIX_PRBS) Latency Quality of Service Enable for Host 8 Mask */
#define MATRIX_PRBS_LQOSEN8(value)            (MATRIX_PRBS_LQOSEN8_Msk & (_UINT32_(value) << MATRIX_PRBS_LQOSEN8_Pos)) /* Assignment of value for LQOSEN8 in the MATRIX_PRBS register */
#define   MATRIX_PRBS_LQOSEN8_0_Val           _UINT32_(0x0)                                        /* (MATRIX_PRBS) Disables propagation of Latency Quality of Service from the Host x to the Client and apply MxPR priority for all access from Host x to the Client.  */
#define   MATRIX_PRBS_LQOSEN8_1_Val           _UINT32_(0x1)                                        /* (MATRIX_PRBS) Enables the propagation of Latency Quality of Service from the Host x to the Client if supported by the Host x.  */
#define MATRIX_PRBS_LQOSEN8_0                 (MATRIX_PRBS_LQOSEN8_0_Val << MATRIX_PRBS_LQOSEN8_Pos) /* (MATRIX_PRBS) Disables propagation of Latency Quality of Service from the Host x to the Client and apply MxPR priority for all access from Host x to the Client. Position */
#define MATRIX_PRBS_LQOSEN8_1                 (MATRIX_PRBS_LQOSEN8_1_Val << MATRIX_PRBS_LQOSEN8_Pos) /* (MATRIX_PRBS) Enables the propagation of Latency Quality of Service from the Host x to the Client if supported by the Host x. Position */
#define MATRIX_PRBS_M9PR_Pos                  _UINT32_(4)                                          /* (MATRIX_PRBS) Host 9 Priority Position */
#define MATRIX_PRBS_M9PR_Msk                  (_UINT32_(0x3) << MATRIX_PRBS_M9PR_Pos)              /* (MATRIX_PRBS) Host 9 Priority Mask */
#define MATRIX_PRBS_M9PR(value)               (MATRIX_PRBS_M9PR_Msk & (_UINT32_(value) << MATRIX_PRBS_M9PR_Pos)) /* Assignment of value for M9PR in the MATRIX_PRBS register */
#define MATRIX_PRBS_LQOSEN9_Pos               _UINT32_(6)                                          /* (MATRIX_PRBS) Latency Quality of Service Enable for Host 9 Position */
#define MATRIX_PRBS_LQOSEN9_Msk               (_UINT32_(0x1) << MATRIX_PRBS_LQOSEN9_Pos)           /* (MATRIX_PRBS) Latency Quality of Service Enable for Host 9 Mask */
#define MATRIX_PRBS_LQOSEN9(value)            (MATRIX_PRBS_LQOSEN9_Msk & (_UINT32_(value) << MATRIX_PRBS_LQOSEN9_Pos)) /* Assignment of value for LQOSEN9 in the MATRIX_PRBS register */
#define   MATRIX_PRBS_LQOSEN9_0_Val           _UINT32_(0x0)                                        /* (MATRIX_PRBS) Disables propagation of Latency Quality of Service from the Host x to the Client and apply MxPR priority for all access from Host x to the Client.  */
#define   MATRIX_PRBS_LQOSEN9_1_Val           _UINT32_(0x1)                                        /* (MATRIX_PRBS) Enables the propagation of Latency Quality of Service from the Host x to the Client if supported by the Host x.  */
#define MATRIX_PRBS_LQOSEN9_0                 (MATRIX_PRBS_LQOSEN9_0_Val << MATRIX_PRBS_LQOSEN9_Pos) /* (MATRIX_PRBS) Disables propagation of Latency Quality of Service from the Host x to the Client and apply MxPR priority for all access from Host x to the Client. Position */
#define MATRIX_PRBS_LQOSEN9_1                 (MATRIX_PRBS_LQOSEN9_1_Val << MATRIX_PRBS_LQOSEN9_Pos) /* (MATRIX_PRBS) Enables the propagation of Latency Quality of Service from the Host x to the Client if supported by the Host x. Position */
#define MATRIX_PRBS_M10PR_Pos                 _UINT32_(8)                                          /* (MATRIX_PRBS) Host 10 Priority Position */
#define MATRIX_PRBS_M10PR_Msk                 (_UINT32_(0x3) << MATRIX_PRBS_M10PR_Pos)             /* (MATRIX_PRBS) Host 10 Priority Mask */
#define MATRIX_PRBS_M10PR(value)              (MATRIX_PRBS_M10PR_Msk & (_UINT32_(value) << MATRIX_PRBS_M10PR_Pos)) /* Assignment of value for M10PR in the MATRIX_PRBS register */
#define MATRIX_PRBS_LQOSEN10_Pos              _UINT32_(10)                                         /* (MATRIX_PRBS) Latency Quality of Service Enable for Host 10 Position */
#define MATRIX_PRBS_LQOSEN10_Msk              (_UINT32_(0x1) << MATRIX_PRBS_LQOSEN10_Pos)          /* (MATRIX_PRBS) Latency Quality of Service Enable for Host 10 Mask */
#define MATRIX_PRBS_LQOSEN10(value)           (MATRIX_PRBS_LQOSEN10_Msk & (_UINT32_(value) << MATRIX_PRBS_LQOSEN10_Pos)) /* Assignment of value for LQOSEN10 in the MATRIX_PRBS register */
#define   MATRIX_PRBS_LQOSEN10_0_Val          _UINT32_(0x0)                                        /* (MATRIX_PRBS) Disables propagation of Latency Quality of Service from the Host x to the Client and apply MxPR priority for all access from Host x to the Client.  */
#define   MATRIX_PRBS_LQOSEN10_1_Val          _UINT32_(0x1)                                        /* (MATRIX_PRBS) Enables the propagation of Latency Quality of Service from the Host x to the Client if supported by the Host x.  */
#define MATRIX_PRBS_LQOSEN10_0                (MATRIX_PRBS_LQOSEN10_0_Val << MATRIX_PRBS_LQOSEN10_Pos) /* (MATRIX_PRBS) Disables propagation of Latency Quality of Service from the Host x to the Client and apply MxPR priority for all access from Host x to the Client. Position */
#define MATRIX_PRBS_LQOSEN10_1                (MATRIX_PRBS_LQOSEN10_1_Val << MATRIX_PRBS_LQOSEN10_Pos) /* (MATRIX_PRBS) Enables the propagation of Latency Quality of Service from the Host x to the Client if supported by the Host x. Position */
#define MATRIX_PRBS_M11PR_Pos                 _UINT32_(12)                                         /* (MATRIX_PRBS) Host 11 Priority Position */
#define MATRIX_PRBS_M11PR_Msk                 (_UINT32_(0x3) << MATRIX_PRBS_M11PR_Pos)             /* (MATRIX_PRBS) Host 11 Priority Mask */
#define MATRIX_PRBS_M11PR(value)              (MATRIX_PRBS_M11PR_Msk & (_UINT32_(value) << MATRIX_PRBS_M11PR_Pos)) /* Assignment of value for M11PR in the MATRIX_PRBS register */
#define MATRIX_PRBS_LQOSEN11_Pos              _UINT32_(14)                                         /* (MATRIX_PRBS) Latency Quality of Service Enable for Host 11 Position */
#define MATRIX_PRBS_LQOSEN11_Msk              (_UINT32_(0x1) << MATRIX_PRBS_LQOSEN11_Pos)          /* (MATRIX_PRBS) Latency Quality of Service Enable for Host 11 Mask */
#define MATRIX_PRBS_LQOSEN11(value)           (MATRIX_PRBS_LQOSEN11_Msk & (_UINT32_(value) << MATRIX_PRBS_LQOSEN11_Pos)) /* Assignment of value for LQOSEN11 in the MATRIX_PRBS register */
#define   MATRIX_PRBS_LQOSEN11_0_Val          _UINT32_(0x0)                                        /* (MATRIX_PRBS) Disables propagation of Latency Quality of Service from the Host x to the Client and apply MxPR priority for all access from Host x to the Client.  */
#define   MATRIX_PRBS_LQOSEN11_1_Val          _UINT32_(0x1)                                        /* (MATRIX_PRBS) Enables the propagation of Latency Quality of Service from the Host x to the Client if supported by the Host x.  */
#define MATRIX_PRBS_LQOSEN11_0                (MATRIX_PRBS_LQOSEN11_0_Val << MATRIX_PRBS_LQOSEN11_Pos) /* (MATRIX_PRBS) Disables propagation of Latency Quality of Service from the Host x to the Client and apply MxPR priority for all access from Host x to the Client. Position */
#define MATRIX_PRBS_LQOSEN11_1                (MATRIX_PRBS_LQOSEN11_1_Val << MATRIX_PRBS_LQOSEN11_Pos) /* (MATRIX_PRBS) Enables the propagation of Latency Quality of Service from the Host x to the Client if supported by the Host x. Position */
#define MATRIX_PRBS_M12PR_Pos                 _UINT32_(16)                                         /* (MATRIX_PRBS) Host 12 Priority Position */
#define MATRIX_PRBS_M12PR_Msk                 (_UINT32_(0x3) << MATRIX_PRBS_M12PR_Pos)             /* (MATRIX_PRBS) Host 12 Priority Mask */
#define MATRIX_PRBS_M12PR(value)              (MATRIX_PRBS_M12PR_Msk & (_UINT32_(value) << MATRIX_PRBS_M12PR_Pos)) /* Assignment of value for M12PR in the MATRIX_PRBS register */
#define MATRIX_PRBS_LQOSEN12_Pos              _UINT32_(18)                                         /* (MATRIX_PRBS) Latency Quality of Service Enable for Host 12 Position */
#define MATRIX_PRBS_LQOSEN12_Msk              (_UINT32_(0x1) << MATRIX_PRBS_LQOSEN12_Pos)          /* (MATRIX_PRBS) Latency Quality of Service Enable for Host 12 Mask */
#define MATRIX_PRBS_LQOSEN12(value)           (MATRIX_PRBS_LQOSEN12_Msk & (_UINT32_(value) << MATRIX_PRBS_LQOSEN12_Pos)) /* Assignment of value for LQOSEN12 in the MATRIX_PRBS register */
#define   MATRIX_PRBS_LQOSEN12_0_Val          _UINT32_(0x0)                                        /* (MATRIX_PRBS) Disables propagation of Latency Quality of Service from the Host x to the Client and apply MxPR priority for all access from Host x to the Client.  */
#define   MATRIX_PRBS_LQOSEN12_1_Val          _UINT32_(0x1)                                        /* (MATRIX_PRBS) Enables the propagation of Latency Quality of Service from the Host x to the Client if supported by the Host x.  */
#define MATRIX_PRBS_LQOSEN12_0                (MATRIX_PRBS_LQOSEN12_0_Val << MATRIX_PRBS_LQOSEN12_Pos) /* (MATRIX_PRBS) Disables propagation of Latency Quality of Service from the Host x to the Client and apply MxPR priority for all access from Host x to the Client. Position */
#define MATRIX_PRBS_LQOSEN12_1                (MATRIX_PRBS_LQOSEN12_1_Val << MATRIX_PRBS_LQOSEN12_Pos) /* (MATRIX_PRBS) Enables the propagation of Latency Quality of Service from the Host x to the Client if supported by the Host x. Position */
#define MATRIX_PRBS_M13PR_Pos                 _UINT32_(20)                                         /* (MATRIX_PRBS) Host 13 Priority Position */
#define MATRIX_PRBS_M13PR_Msk                 (_UINT32_(0x3) << MATRIX_PRBS_M13PR_Pos)             /* (MATRIX_PRBS) Host 13 Priority Mask */
#define MATRIX_PRBS_M13PR(value)              (MATRIX_PRBS_M13PR_Msk & (_UINT32_(value) << MATRIX_PRBS_M13PR_Pos)) /* Assignment of value for M13PR in the MATRIX_PRBS register */
#define MATRIX_PRBS_LQOSEN13_Pos              _UINT32_(22)                                         /* (MATRIX_PRBS) Latency Quality of Service Enable for Host 13 Position */
#define MATRIX_PRBS_LQOSEN13_Msk              (_UINT32_(0x1) << MATRIX_PRBS_LQOSEN13_Pos)          /* (MATRIX_PRBS) Latency Quality of Service Enable for Host 13 Mask */
#define MATRIX_PRBS_LQOSEN13(value)           (MATRIX_PRBS_LQOSEN13_Msk & (_UINT32_(value) << MATRIX_PRBS_LQOSEN13_Pos)) /* Assignment of value for LQOSEN13 in the MATRIX_PRBS register */
#define   MATRIX_PRBS_LQOSEN13_0_Val          _UINT32_(0x0)                                        /* (MATRIX_PRBS) Disables propagation of Latency Quality of Service from the Host x to the Client and apply MxPR priority for all access from Host x to the Client.  */
#define   MATRIX_PRBS_LQOSEN13_1_Val          _UINT32_(0x1)                                        /* (MATRIX_PRBS) Enables the propagation of Latency Quality of Service from the Host x to the Client if supported by the Host x.  */
#define MATRIX_PRBS_LQOSEN13_0                (MATRIX_PRBS_LQOSEN13_0_Val << MATRIX_PRBS_LQOSEN13_Pos) /* (MATRIX_PRBS) Disables propagation of Latency Quality of Service from the Host x to the Client and apply MxPR priority for all access from Host x to the Client. Position */
#define MATRIX_PRBS_LQOSEN13_1                (MATRIX_PRBS_LQOSEN13_1_Val << MATRIX_PRBS_LQOSEN13_Pos) /* (MATRIX_PRBS) Enables the propagation of Latency Quality of Service from the Host x to the Client if supported by the Host x. Position */
#define MATRIX_PRBS_Msk                       _UINT32_(0x00777777)                                 /* (MATRIX_PRBS) Register Mask  */


/* -------- MATRIX_MCFG : (MATRIX Offset: 0x00) (R/W 32) Host Configuration Register x -------- */
#define MATRIX_MCFG_RESETVALUE                _UINT32_(0x04)                                       /*  (MATRIX_MCFG) Host Configuration Register x  Reset Value */

#define MATRIX_MCFG_ULBT_Pos                  _UINT32_(0)                                          /* (MATRIX_MCFG) Undefined Length Burst Type Position */
#define MATRIX_MCFG_ULBT_Msk                  (_UINT32_(0x7) << MATRIX_MCFG_ULBT_Pos)              /* (MATRIX_MCFG) Undefined Length Burst Type Mask */
#define MATRIX_MCFG_ULBT(value)               (MATRIX_MCFG_ULBT_Msk & (_UINT32_(value) << MATRIX_MCFG_ULBT_Pos)) /* Assignment of value for ULBT in the MATRIX_MCFG register */
#define   MATRIX_MCFG_ULBT_UNLIMITED_Val      _UINT32_(0x0)                                        /* (MATRIX_MCFG) Unlimited Length Burst-No predicted end of burst is generated, therefore INCR bursts coming from this host can only be broken if the Client Slot Cycle Limit is reached. If the Slot Cycle Limit is not reached, the burst is normally completed by the host, at the latest, on the next system bus 1 Kbyte address boundary, allowing up to 256-beat word bursts or 128-beat double-word bursts. This value should not be used in the very particular case of a host capable of performing back-to-back undefined length bursts on a single client, since this could indefinitely freeze the client arbitration and thus prevent another host from accessing this client.  */
#define   MATRIX_MCFG_ULBT_SINGLE_Val         _UINT32_(0x1)                                        /* (MATRIX_MCFG) Single Access-The undefined length burst is treated as a succession of single accesses, allowing re-arbitration at each beat of the INCR burst or bursts sequence.  */
#define   MATRIX_MCFG_ULBT_4_BEAT_Val         _UINT32_(0x2)                                        /* (MATRIX_MCFG) 4-beat Burst-The undefined length burst or bursts sequence is split into 4-beat bursts or less, allowing re-arbitration every 4 beats.  */
#define   MATRIX_MCFG_ULBT_8_BEAT_Val         _UINT32_(0x3)                                        /* (MATRIX_MCFG) 8-beat Burst-The undefined length burst or bursts sequence is split into 8-beat bursts or less, allowing re-arbitration every 8 beats.  */
#define   MATRIX_MCFG_ULBT_16_BEAT_Val        _UINT32_(0x4)                                        /* (MATRIX_MCFG) 16-beat Burst-The undefined length burst or bursts sequence is split into 16-beat bursts or less, allowing re-arbitration every 16 beats.  */
#define   MATRIX_MCFG_ULBT_32_BEAT_Val        _UINT32_(0x5)                                        /* (MATRIX_MCFG) 32-beat Burst-The undefined length burst or bursts sequence is split into 32-beat bursts or less, allowing re-arbitration every 32 beats.  */
#define   MATRIX_MCFG_ULBT_64_BEAT_Val        _UINT32_(0x6)                                        /* (MATRIX_MCFG) 64-beat Burst-The undefined length burst or bursts sequence is split into 64-beat bursts or less, allowing re-arbitration every 64 beats.  */
#define   MATRIX_MCFG_ULBT_128_BEAT_Val       _UINT32_(0x7)                                        /* (MATRIX_MCFG) 128-beat Burst-The undefined length burst or bursts sequence is split into 128-beat bursts or less, allowing re-arbitration every 128 beats.  Unless duly needed, the ULBT should be left at its default 0 value for power saving.  */
#define MATRIX_MCFG_ULBT_UNLIMITED            (MATRIX_MCFG_ULBT_UNLIMITED_Val << MATRIX_MCFG_ULBT_Pos) /* (MATRIX_MCFG) Unlimited Length Burst-No predicted end of burst is generated, therefore INCR bursts coming from this host can only be broken if the Client Slot Cycle Limit is reached. If the Slot Cycle Limit is not reached, the burst is normally completed by the host, at the latest, on the next system bus 1 Kbyte address boundary, allowing up to 256-beat word bursts or 128-beat double-word bursts. This value should not be used in the very particular case of a host capable of performing back-to-back undefined length bursts on a single client, since this could indefinitely freeze the client arbitration and thus prevent another host from accessing this client. Position */
#define MATRIX_MCFG_ULBT_SINGLE               (MATRIX_MCFG_ULBT_SINGLE_Val << MATRIX_MCFG_ULBT_Pos) /* (MATRIX_MCFG) Single Access-The undefined length burst is treated as a succession of single accesses, allowing re-arbitration at each beat of the INCR burst or bursts sequence. Position */
#define MATRIX_MCFG_ULBT_4_BEAT               (MATRIX_MCFG_ULBT_4_BEAT_Val << MATRIX_MCFG_ULBT_Pos) /* (MATRIX_MCFG) 4-beat Burst-The undefined length burst or bursts sequence is split into 4-beat bursts or less, allowing re-arbitration every 4 beats. Position */
#define MATRIX_MCFG_ULBT_8_BEAT               (MATRIX_MCFG_ULBT_8_BEAT_Val << MATRIX_MCFG_ULBT_Pos) /* (MATRIX_MCFG) 8-beat Burst-The undefined length burst or bursts sequence is split into 8-beat bursts or less, allowing re-arbitration every 8 beats. Position */
#define MATRIX_MCFG_ULBT_16_BEAT              (MATRIX_MCFG_ULBT_16_BEAT_Val << MATRIX_MCFG_ULBT_Pos) /* (MATRIX_MCFG) 16-beat Burst-The undefined length burst or bursts sequence is split into 16-beat bursts or less, allowing re-arbitration every 16 beats. Position */
#define MATRIX_MCFG_ULBT_32_BEAT              (MATRIX_MCFG_ULBT_32_BEAT_Val << MATRIX_MCFG_ULBT_Pos) /* (MATRIX_MCFG) 32-beat Burst-The undefined length burst or bursts sequence is split into 32-beat bursts or less, allowing re-arbitration every 32 beats. Position */
#define MATRIX_MCFG_ULBT_64_BEAT              (MATRIX_MCFG_ULBT_64_BEAT_Val << MATRIX_MCFG_ULBT_Pos) /* (MATRIX_MCFG) 64-beat Burst-The undefined length burst or bursts sequence is split into 64-beat bursts or less, allowing re-arbitration every 64 beats. Position */
#define MATRIX_MCFG_ULBT_128_BEAT             (MATRIX_MCFG_ULBT_128_BEAT_Val << MATRIX_MCFG_ULBT_Pos) /* (MATRIX_MCFG) 128-beat Burst-The undefined length burst or bursts sequence is split into 128-beat bursts or less, allowing re-arbitration every 128 beats.  Unless duly needed, the ULBT should be left at its default 0 value for power saving. Position */
#define MATRIX_MCFG_Msk                       _UINT32_(0x00000007)                                 /* (MATRIX_MCFG) Register Mask  */


/* -------- MATRIX_SCFG : (MATRIX Offset: 0x40) (R/W 32) Client Configuration Register x -------- */
#define MATRIX_SCFG_RESETVALUE                _UINT32_(0x1FF)                                      /*  (MATRIX_SCFG) Client Configuration Register x  Reset Value */

#define MATRIX_SCFG_SLOT_CYCLE_Pos            _UINT32_(0)                                          /* (MATRIX_SCFG) Maximum Bus Grant Duration for Hosts Position */
#define MATRIX_SCFG_SLOT_CYCLE_Msk            (_UINT32_(0x1FF) << MATRIX_SCFG_SLOT_CYCLE_Pos)      /* (MATRIX_SCFG) Maximum Bus Grant Duration for Hosts Mask */
#define MATRIX_SCFG_SLOT_CYCLE(value)         (MATRIX_SCFG_SLOT_CYCLE_Msk & (_UINT32_(value) << MATRIX_SCFG_SLOT_CYCLE_Pos)) /* Assignment of value for SLOT_CYCLE in the MATRIX_SCFG register */
#define MATRIX_SCFG_DEFMSTR_TYPE_Pos          _UINT32_(16)                                         /* (MATRIX_SCFG) Default Host Type Position */
#define MATRIX_SCFG_DEFMSTR_TYPE_Msk          (_UINT32_(0x3) << MATRIX_SCFG_DEFMSTR_TYPE_Pos)      /* (MATRIX_SCFG) Default Host Type Mask */
#define MATRIX_SCFG_DEFMSTR_TYPE(value)       (MATRIX_SCFG_DEFMSTR_TYPE_Msk & (_UINT32_(value) << MATRIX_SCFG_DEFMSTR_TYPE_Pos)) /* Assignment of value for DEFMSTR_TYPE in the MATRIX_SCFG register */
#define   MATRIX_SCFG_DEFMSTR_TYPE_NONE_Val   _UINT32_(0x0)                                        /* (MATRIX_SCFG) No Default Host-At the end of the current client access, if no other host request is pending, the client is disconnected from all hosts. This results in a one clock cycle latency for the first access of a burst transfer or for a single access.  */
#define   MATRIX_SCFG_DEFMSTR_TYPE_LAST_Val   _UINT32_(0x1)                                        /* (MATRIX_SCFG) Last Default Host-At the end of the current client access, if no other host request is pending, the client stays connected to the last host having accessed it. This results in not having one clock cycle latency when the last host tries to access the client again.  */
#define   MATRIX_SCFG_DEFMSTR_TYPE_FIXED_Val  _UINT32_(0x2)                                        /* (MATRIX_SCFG) Fixed Default Host-At the end of the current client access, if no other host request is pending, the client connects to the fixed host the number that has been written in the FIXED_DEFMSTR field. This results in not having one clock cycle latency when the fixed host tries to access the client again.  */
#define MATRIX_SCFG_DEFMSTR_TYPE_NONE         (MATRIX_SCFG_DEFMSTR_TYPE_NONE_Val << MATRIX_SCFG_DEFMSTR_TYPE_Pos) /* (MATRIX_SCFG) No Default Host-At the end of the current client access, if no other host request is pending, the client is disconnected from all hosts. This results in a one clock cycle latency for the first access of a burst transfer or for a single access. Position */
#define MATRIX_SCFG_DEFMSTR_TYPE_LAST         (MATRIX_SCFG_DEFMSTR_TYPE_LAST_Val << MATRIX_SCFG_DEFMSTR_TYPE_Pos) /* (MATRIX_SCFG) Last Default Host-At the end of the current client access, if no other host request is pending, the client stays connected to the last host having accessed it. This results in not having one clock cycle latency when the last host tries to access the client again. Position */
#define MATRIX_SCFG_DEFMSTR_TYPE_FIXED        (MATRIX_SCFG_DEFMSTR_TYPE_FIXED_Val << MATRIX_SCFG_DEFMSTR_TYPE_Pos) /* (MATRIX_SCFG) Fixed Default Host-At the end of the current client access, if no other host request is pending, the client connects to the fixed host the number that has been written in the FIXED_DEFMSTR field. This results in not having one clock cycle latency when the fixed host tries to access the client again. Position */
#define MATRIX_SCFG_FIXED_DEFMSTR_Pos         _UINT32_(18)                                         /* (MATRIX_SCFG) Fixed Default Host Position */
#define MATRIX_SCFG_FIXED_DEFMSTR_Msk         (_UINT32_(0xF) << MATRIX_SCFG_FIXED_DEFMSTR_Pos)     /* (MATRIX_SCFG) Fixed Default Host Mask */
#define MATRIX_SCFG_FIXED_DEFMSTR(value)      (MATRIX_SCFG_FIXED_DEFMSTR_Msk & (_UINT32_(value) << MATRIX_SCFG_FIXED_DEFMSTR_Pos)) /* Assignment of value for FIXED_DEFMSTR in the MATRIX_SCFG register */
#define MATRIX_SCFG_Msk                       _UINT32_(0x003F01FF)                                 /* (MATRIX_SCFG) Register Mask  */


/* -------- MATRIX_MRCR : (MATRIX Offset: 0x100) (R/W 32) Host Remap Control Register -------- */
#define MATRIX_MRCR_RESETVALUE                _UINT32_(0x00)                                       /*  (MATRIX_MRCR) Host Remap Control Register  Reset Value */

#define MATRIX_MRCR_RCB0_Pos                  _UINT32_(0)                                          /* (MATRIX_MRCR) Remap Command Bit for Host 0 Position */
#define MATRIX_MRCR_RCB0_Msk                  (_UINT32_(0x1) << MATRIX_MRCR_RCB0_Pos)              /* (MATRIX_MRCR) Remap Command Bit for Host 0 Mask */
#define MATRIX_MRCR_RCB0(value)               (MATRIX_MRCR_RCB0_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB0_Pos)) /* Assignment of value for RCB0 in the MATRIX_MRCR register */
#define   MATRIX_MRCR_RCB0_0_Val              _UINT32_(0x0)                                        /* (MATRIX_MRCR) Disables remapped address decoding for the selected Host.  */
#define   MATRIX_MRCR_RCB0_1_Val              _UINT32_(0x1)                                        /* (MATRIX_MRCR) Enables remapped address decoding for the selected Host.  */
#define MATRIX_MRCR_RCB0_0                    (MATRIX_MRCR_RCB0_0_Val << MATRIX_MRCR_RCB0_Pos)     /* (MATRIX_MRCR) Disables remapped address decoding for the selected Host. Position */
#define MATRIX_MRCR_RCB0_1                    (MATRIX_MRCR_RCB0_1_Val << MATRIX_MRCR_RCB0_Pos)     /* (MATRIX_MRCR) Enables remapped address decoding for the selected Host. Position */
#define MATRIX_MRCR_RCB1_Pos                  _UINT32_(1)                                          /* (MATRIX_MRCR) Remap Command Bit for Host 1 Position */
#define MATRIX_MRCR_RCB1_Msk                  (_UINT32_(0x1) << MATRIX_MRCR_RCB1_Pos)              /* (MATRIX_MRCR) Remap Command Bit for Host 1 Mask */
#define MATRIX_MRCR_RCB1(value)               (MATRIX_MRCR_RCB1_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB1_Pos)) /* Assignment of value for RCB1 in the MATRIX_MRCR register */
#define   MATRIX_MRCR_RCB1_0_Val              _UINT32_(0x0)                                        /* (MATRIX_MRCR) Disables remapped address decoding for the selected Host.  */
#define   MATRIX_MRCR_RCB1_1_Val              _UINT32_(0x1)                                        /* (MATRIX_MRCR) Enables remapped address decoding for the selected Host.  */
#define MATRIX_MRCR_RCB1_0                    (MATRIX_MRCR_RCB1_0_Val << MATRIX_MRCR_RCB1_Pos)     /* (MATRIX_MRCR) Disables remapped address decoding for the selected Host. Position */
#define MATRIX_MRCR_RCB1_1                    (MATRIX_MRCR_RCB1_1_Val << MATRIX_MRCR_RCB1_Pos)     /* (MATRIX_MRCR) Enables remapped address decoding for the selected Host. Position */
#define MATRIX_MRCR_RCB2_Pos                  _UINT32_(2)                                          /* (MATRIX_MRCR) Remap Command Bit for Host 2 Position */
#define MATRIX_MRCR_RCB2_Msk                  (_UINT32_(0x1) << MATRIX_MRCR_RCB2_Pos)              /* (MATRIX_MRCR) Remap Command Bit for Host 2 Mask */
#define MATRIX_MRCR_RCB2(value)               (MATRIX_MRCR_RCB2_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB2_Pos)) /* Assignment of value for RCB2 in the MATRIX_MRCR register */
#define   MATRIX_MRCR_RCB2_0_Val              _UINT32_(0x0)                                        /* (MATRIX_MRCR) Disables remapped address decoding for the selected Host.  */
#define   MATRIX_MRCR_RCB2_1_Val              _UINT32_(0x1)                                        /* (MATRIX_MRCR) Enables remapped address decoding for the selected Host.  */
#define MATRIX_MRCR_RCB2_0                    (MATRIX_MRCR_RCB2_0_Val << MATRIX_MRCR_RCB2_Pos)     /* (MATRIX_MRCR) Disables remapped address decoding for the selected Host. Position */
#define MATRIX_MRCR_RCB2_1                    (MATRIX_MRCR_RCB2_1_Val << MATRIX_MRCR_RCB2_Pos)     /* (MATRIX_MRCR) Enables remapped address decoding for the selected Host. Position */
#define MATRIX_MRCR_RCB3_Pos                  _UINT32_(3)                                          /* (MATRIX_MRCR) Remap Command Bit for Host 3 Position */
#define MATRIX_MRCR_RCB3_Msk                  (_UINT32_(0x1) << MATRIX_MRCR_RCB3_Pos)              /* (MATRIX_MRCR) Remap Command Bit for Host 3 Mask */
#define MATRIX_MRCR_RCB3(value)               (MATRIX_MRCR_RCB3_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB3_Pos)) /* Assignment of value for RCB3 in the MATRIX_MRCR register */
#define   MATRIX_MRCR_RCB3_0_Val              _UINT32_(0x0)                                        /* (MATRIX_MRCR) Disables remapped address decoding for the selected Host.  */
#define   MATRIX_MRCR_RCB3_1_Val              _UINT32_(0x1)                                        /* (MATRIX_MRCR) Enables remapped address decoding for the selected Host.  */
#define MATRIX_MRCR_RCB3_0                    (MATRIX_MRCR_RCB3_0_Val << MATRIX_MRCR_RCB3_Pos)     /* (MATRIX_MRCR) Disables remapped address decoding for the selected Host. Position */
#define MATRIX_MRCR_RCB3_1                    (MATRIX_MRCR_RCB3_1_Val << MATRIX_MRCR_RCB3_Pos)     /* (MATRIX_MRCR) Enables remapped address decoding for the selected Host. Position */
#define MATRIX_MRCR_RCB4_Pos                  _UINT32_(4)                                          /* (MATRIX_MRCR) Remap Command Bit for Host 4 Position */
#define MATRIX_MRCR_RCB4_Msk                  (_UINT32_(0x1) << MATRIX_MRCR_RCB4_Pos)              /* (MATRIX_MRCR) Remap Command Bit for Host 4 Mask */
#define MATRIX_MRCR_RCB4(value)               (MATRIX_MRCR_RCB4_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB4_Pos)) /* Assignment of value for RCB4 in the MATRIX_MRCR register */
#define   MATRIX_MRCR_RCB4_0_Val              _UINT32_(0x0)                                        /* (MATRIX_MRCR) Disables remapped address decoding for the selected Host.  */
#define   MATRIX_MRCR_RCB4_1_Val              _UINT32_(0x1)                                        /* (MATRIX_MRCR) Enables remapped address decoding for the selected Host.  */
#define MATRIX_MRCR_RCB4_0                    (MATRIX_MRCR_RCB4_0_Val << MATRIX_MRCR_RCB4_Pos)     /* (MATRIX_MRCR) Disables remapped address decoding for the selected Host. Position */
#define MATRIX_MRCR_RCB4_1                    (MATRIX_MRCR_RCB4_1_Val << MATRIX_MRCR_RCB4_Pos)     /* (MATRIX_MRCR) Enables remapped address decoding for the selected Host. Position */
#define MATRIX_MRCR_RCB5_Pos                  _UINT32_(5)                                          /* (MATRIX_MRCR) Remap Command Bit for Host 5 Position */
#define MATRIX_MRCR_RCB5_Msk                  (_UINT32_(0x1) << MATRIX_MRCR_RCB5_Pos)              /* (MATRIX_MRCR) Remap Command Bit for Host 5 Mask */
#define MATRIX_MRCR_RCB5(value)               (MATRIX_MRCR_RCB5_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB5_Pos)) /* Assignment of value for RCB5 in the MATRIX_MRCR register */
#define   MATRIX_MRCR_RCB5_0_Val              _UINT32_(0x0)                                        /* (MATRIX_MRCR) Disables remapped address decoding for the selected Host.  */
#define   MATRIX_MRCR_RCB5_1_Val              _UINT32_(0x1)                                        /* (MATRIX_MRCR) Enables remapped address decoding for the selected Host.  */
#define MATRIX_MRCR_RCB5_0                    (MATRIX_MRCR_RCB5_0_Val << MATRIX_MRCR_RCB5_Pos)     /* (MATRIX_MRCR) Disables remapped address decoding for the selected Host. Position */
#define MATRIX_MRCR_RCB5_1                    (MATRIX_MRCR_RCB5_1_Val << MATRIX_MRCR_RCB5_Pos)     /* (MATRIX_MRCR) Enables remapped address decoding for the selected Host. Position */
#define MATRIX_MRCR_RCB6_Pos                  _UINT32_(6)                                          /* (MATRIX_MRCR) Remap Command Bit for Host 6 Position */
#define MATRIX_MRCR_RCB6_Msk                  (_UINT32_(0x1) << MATRIX_MRCR_RCB6_Pos)              /* (MATRIX_MRCR) Remap Command Bit for Host 6 Mask */
#define MATRIX_MRCR_RCB6(value)               (MATRIX_MRCR_RCB6_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB6_Pos)) /* Assignment of value for RCB6 in the MATRIX_MRCR register */
#define   MATRIX_MRCR_RCB6_0_Val              _UINT32_(0x0)                                        /* (MATRIX_MRCR) Disables remapped address decoding for the selected Host.  */
#define   MATRIX_MRCR_RCB6_1_Val              _UINT32_(0x1)                                        /* (MATRIX_MRCR) Enables remapped address decoding for the selected Host.  */
#define MATRIX_MRCR_RCB6_0                    (MATRIX_MRCR_RCB6_0_Val << MATRIX_MRCR_RCB6_Pos)     /* (MATRIX_MRCR) Disables remapped address decoding for the selected Host. Position */
#define MATRIX_MRCR_RCB6_1                    (MATRIX_MRCR_RCB6_1_Val << MATRIX_MRCR_RCB6_Pos)     /* (MATRIX_MRCR) Enables remapped address decoding for the selected Host. Position */
#define MATRIX_MRCR_RCB7_Pos                  _UINT32_(7)                                          /* (MATRIX_MRCR) Remap Command Bit for Host 7 Position */
#define MATRIX_MRCR_RCB7_Msk                  (_UINT32_(0x1) << MATRIX_MRCR_RCB7_Pos)              /* (MATRIX_MRCR) Remap Command Bit for Host 7 Mask */
#define MATRIX_MRCR_RCB7(value)               (MATRIX_MRCR_RCB7_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB7_Pos)) /* Assignment of value for RCB7 in the MATRIX_MRCR register */
#define   MATRIX_MRCR_RCB7_0_Val              _UINT32_(0x0)                                        /* (MATRIX_MRCR) Disables remapped address decoding for the selected Host.  */
#define   MATRIX_MRCR_RCB7_1_Val              _UINT32_(0x1)                                        /* (MATRIX_MRCR) Enables remapped address decoding for the selected Host.  */
#define MATRIX_MRCR_RCB7_0                    (MATRIX_MRCR_RCB7_0_Val << MATRIX_MRCR_RCB7_Pos)     /* (MATRIX_MRCR) Disables remapped address decoding for the selected Host. Position */
#define MATRIX_MRCR_RCB7_1                    (MATRIX_MRCR_RCB7_1_Val << MATRIX_MRCR_RCB7_Pos)     /* (MATRIX_MRCR) Enables remapped address decoding for the selected Host. Position */
#define MATRIX_MRCR_RCB8_Pos                  _UINT32_(8)                                          /* (MATRIX_MRCR) Remap Command Bit for Host 8 Position */
#define MATRIX_MRCR_RCB8_Msk                  (_UINT32_(0x1) << MATRIX_MRCR_RCB8_Pos)              /* (MATRIX_MRCR) Remap Command Bit for Host 8 Mask */
#define MATRIX_MRCR_RCB8(value)               (MATRIX_MRCR_RCB8_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB8_Pos)) /* Assignment of value for RCB8 in the MATRIX_MRCR register */
#define   MATRIX_MRCR_RCB8_0_Val              _UINT32_(0x0)                                        /* (MATRIX_MRCR) Disables remapped address decoding for the selected Host.  */
#define   MATRIX_MRCR_RCB8_1_Val              _UINT32_(0x1)                                        /* (MATRIX_MRCR) Enables remapped address decoding for the selected Host.  */
#define MATRIX_MRCR_RCB8_0                    (MATRIX_MRCR_RCB8_0_Val << MATRIX_MRCR_RCB8_Pos)     /* (MATRIX_MRCR) Disables remapped address decoding for the selected Host. Position */
#define MATRIX_MRCR_RCB8_1                    (MATRIX_MRCR_RCB8_1_Val << MATRIX_MRCR_RCB8_Pos)     /* (MATRIX_MRCR) Enables remapped address decoding for the selected Host. Position */
#define MATRIX_MRCR_RCB9_Pos                  _UINT32_(9)                                          /* (MATRIX_MRCR) Remap Command Bit for Host 9 Position */
#define MATRIX_MRCR_RCB9_Msk                  (_UINT32_(0x1) << MATRIX_MRCR_RCB9_Pos)              /* (MATRIX_MRCR) Remap Command Bit for Host 9 Mask */
#define MATRIX_MRCR_RCB9(value)               (MATRIX_MRCR_RCB9_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB9_Pos)) /* Assignment of value for RCB9 in the MATRIX_MRCR register */
#define   MATRIX_MRCR_RCB9_0_Val              _UINT32_(0x0)                                        /* (MATRIX_MRCR) Disables remapped address decoding for the selected Host.  */
#define   MATRIX_MRCR_RCB9_1_Val              _UINT32_(0x1)                                        /* (MATRIX_MRCR) Enables remapped address decoding for the selected Host.  */
#define MATRIX_MRCR_RCB9_0                    (MATRIX_MRCR_RCB9_0_Val << MATRIX_MRCR_RCB9_Pos)     /* (MATRIX_MRCR) Disables remapped address decoding for the selected Host. Position */
#define MATRIX_MRCR_RCB9_1                    (MATRIX_MRCR_RCB9_1_Val << MATRIX_MRCR_RCB9_Pos)     /* (MATRIX_MRCR) Enables remapped address decoding for the selected Host. Position */
#define MATRIX_MRCR_RCB10_Pos                 _UINT32_(10)                                         /* (MATRIX_MRCR) Remap Command Bit for Host 10 Position */
#define MATRIX_MRCR_RCB10_Msk                 (_UINT32_(0x1) << MATRIX_MRCR_RCB10_Pos)             /* (MATRIX_MRCR) Remap Command Bit for Host 10 Mask */
#define MATRIX_MRCR_RCB10(value)              (MATRIX_MRCR_RCB10_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB10_Pos)) /* Assignment of value for RCB10 in the MATRIX_MRCR register */
#define   MATRIX_MRCR_RCB10_0_Val             _UINT32_(0x0)                                        /* (MATRIX_MRCR) Disables remapped address decoding for the selected Host.  */
#define   MATRIX_MRCR_RCB10_1_Val             _UINT32_(0x1)                                        /* (MATRIX_MRCR) Enables remapped address decoding for the selected Host.  */
#define MATRIX_MRCR_RCB10_0                   (MATRIX_MRCR_RCB10_0_Val << MATRIX_MRCR_RCB10_Pos)   /* (MATRIX_MRCR) Disables remapped address decoding for the selected Host. Position */
#define MATRIX_MRCR_RCB10_1                   (MATRIX_MRCR_RCB10_1_Val << MATRIX_MRCR_RCB10_Pos)   /* (MATRIX_MRCR) Enables remapped address decoding for the selected Host. Position */
#define MATRIX_MRCR_RCB11_Pos                 _UINT32_(11)                                         /* (MATRIX_MRCR) Remap Command Bit for Host 11 Position */
#define MATRIX_MRCR_RCB11_Msk                 (_UINT32_(0x1) << MATRIX_MRCR_RCB11_Pos)             /* (MATRIX_MRCR) Remap Command Bit for Host 11 Mask */
#define MATRIX_MRCR_RCB11(value)              (MATRIX_MRCR_RCB11_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB11_Pos)) /* Assignment of value for RCB11 in the MATRIX_MRCR register */
#define   MATRIX_MRCR_RCB11_0_Val             _UINT32_(0x0)                                        /* (MATRIX_MRCR) Disables remapped address decoding for the selected Host.  */
#define   MATRIX_MRCR_RCB11_1_Val             _UINT32_(0x1)                                        /* (MATRIX_MRCR) Enables remapped address decoding for the selected Host.  */
#define MATRIX_MRCR_RCB11_0                   (MATRIX_MRCR_RCB11_0_Val << MATRIX_MRCR_RCB11_Pos)   /* (MATRIX_MRCR) Disables remapped address decoding for the selected Host. Position */
#define MATRIX_MRCR_RCB11_1                   (MATRIX_MRCR_RCB11_1_Val << MATRIX_MRCR_RCB11_Pos)   /* (MATRIX_MRCR) Enables remapped address decoding for the selected Host. Position */
#define MATRIX_MRCR_RCB12_Pos                 _UINT32_(12)                                         /* (MATRIX_MRCR) Remap Command Bit for Host 12 Position */
#define MATRIX_MRCR_RCB12_Msk                 (_UINT32_(0x1) << MATRIX_MRCR_RCB12_Pos)             /* (MATRIX_MRCR) Remap Command Bit for Host 12 Mask */
#define MATRIX_MRCR_RCB12(value)              (MATRIX_MRCR_RCB12_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB12_Pos)) /* Assignment of value for RCB12 in the MATRIX_MRCR register */
#define   MATRIX_MRCR_RCB12_0_Val             _UINT32_(0x0)                                        /* (MATRIX_MRCR) Disables remapped address decoding for the selected Host.  */
#define   MATRIX_MRCR_RCB12_1_Val             _UINT32_(0x1)                                        /* (MATRIX_MRCR) Enables remapped address decoding for the selected Host.  */
#define MATRIX_MRCR_RCB12_0                   (MATRIX_MRCR_RCB12_0_Val << MATRIX_MRCR_RCB12_Pos)   /* (MATRIX_MRCR) Disables remapped address decoding for the selected Host. Position */
#define MATRIX_MRCR_RCB12_1                   (MATRIX_MRCR_RCB12_1_Val << MATRIX_MRCR_RCB12_Pos)   /* (MATRIX_MRCR) Enables remapped address decoding for the selected Host. Position */
#define MATRIX_MRCR_RCB13_Pos                 _UINT32_(13)                                         /* (MATRIX_MRCR) Remap Command Bit for Host 13 Position */
#define MATRIX_MRCR_RCB13_Msk                 (_UINT32_(0x1) << MATRIX_MRCR_RCB13_Pos)             /* (MATRIX_MRCR) Remap Command Bit for Host 13 Mask */
#define MATRIX_MRCR_RCB13(value)              (MATRIX_MRCR_RCB13_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB13_Pos)) /* Assignment of value for RCB13 in the MATRIX_MRCR register */
#define   MATRIX_MRCR_RCB13_0_Val             _UINT32_(0x0)                                        /* (MATRIX_MRCR) Disables remapped address decoding for the selected Host.  */
#define   MATRIX_MRCR_RCB13_1_Val             _UINT32_(0x1)                                        /* (MATRIX_MRCR) Enables remapped address decoding for the selected Host.  */
#define MATRIX_MRCR_RCB13_0                   (MATRIX_MRCR_RCB13_0_Val << MATRIX_MRCR_RCB13_Pos)   /* (MATRIX_MRCR) Disables remapped address decoding for the selected Host. Position */
#define MATRIX_MRCR_RCB13_1                   (MATRIX_MRCR_RCB13_1_Val << MATRIX_MRCR_RCB13_Pos)   /* (MATRIX_MRCR) Enables remapped address decoding for the selected Host. Position */
#define MATRIX_MRCR_Msk                       _UINT32_(0x00003FFF)                                 /* (MATRIX_MRCR) Register Mask  */

#define MATRIX_MRCR_RCB_Pos                   _UINT32_(0)                                          /* (MATRIX_MRCR Position) Remap Command Bit for Host x3 */
#define MATRIX_MRCR_RCB_Msk                   (_UINT32_(0x3FFF) << MATRIX_MRCR_RCB_Pos)            /* (MATRIX_MRCR Mask) RCB */
#define MATRIX_MRCR_RCB(value)                (MATRIX_MRCR_RCB_Msk & (_UINT32_(value) << MATRIX_MRCR_RCB_Pos)) 

/* -------- MATRIX_MEIER : (MATRIX Offset: 0x150) ( /W 32) Host Error Interrupt Enable Register -------- */
#define MATRIX_MEIER_MERR0_Pos                _UINT32_(0)                                          /* (MATRIX_MEIER) Host 0 Access Error Position */
#define MATRIX_MEIER_MERR0_Msk                (_UINT32_(0x1) << MATRIX_MEIER_MERR0_Pos)            /* (MATRIX_MEIER) Host 0 Access Error Mask */
#define MATRIX_MEIER_MERR0(value)             (MATRIX_MEIER_MERR0_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR0_Pos)) /* Assignment of value for MERR0 in the MATRIX_MEIER register */
#define   MATRIX_MEIER_MERR0_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR0_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIER) Enables Host x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR0_0                  (MATRIX_MEIER_MERR0_0_Val << MATRIX_MEIER_MERR0_Pos) /* (MATRIX_MEIER) No effect. Position */
#define MATRIX_MEIER_MERR0_1                  (MATRIX_MEIER_MERR0_1_Val << MATRIX_MEIER_MERR0_Pos) /* (MATRIX_MEIER) Enables Host x Access Error interrupt source. Position */
#define MATRIX_MEIER_MERR1_Pos                _UINT32_(1)                                          /* (MATRIX_MEIER) Host 1 Access Error Position */
#define MATRIX_MEIER_MERR1_Msk                (_UINT32_(0x1) << MATRIX_MEIER_MERR1_Pos)            /* (MATRIX_MEIER) Host 1 Access Error Mask */
#define MATRIX_MEIER_MERR1(value)             (MATRIX_MEIER_MERR1_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR1_Pos)) /* Assignment of value for MERR1 in the MATRIX_MEIER register */
#define   MATRIX_MEIER_MERR1_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR1_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIER) Enables Host x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR1_0                  (MATRIX_MEIER_MERR1_0_Val << MATRIX_MEIER_MERR1_Pos) /* (MATRIX_MEIER) No effect. Position */
#define MATRIX_MEIER_MERR1_1                  (MATRIX_MEIER_MERR1_1_Val << MATRIX_MEIER_MERR1_Pos) /* (MATRIX_MEIER) Enables Host x Access Error interrupt source. Position */
#define MATRIX_MEIER_MERR2_Pos                _UINT32_(2)                                          /* (MATRIX_MEIER) Host 2 Access Error Position */
#define MATRIX_MEIER_MERR2_Msk                (_UINT32_(0x1) << MATRIX_MEIER_MERR2_Pos)            /* (MATRIX_MEIER) Host 2 Access Error Mask */
#define MATRIX_MEIER_MERR2(value)             (MATRIX_MEIER_MERR2_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR2_Pos)) /* Assignment of value for MERR2 in the MATRIX_MEIER register */
#define   MATRIX_MEIER_MERR2_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR2_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIER) Enables Host x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR2_0                  (MATRIX_MEIER_MERR2_0_Val << MATRIX_MEIER_MERR2_Pos) /* (MATRIX_MEIER) No effect. Position */
#define MATRIX_MEIER_MERR2_1                  (MATRIX_MEIER_MERR2_1_Val << MATRIX_MEIER_MERR2_Pos) /* (MATRIX_MEIER) Enables Host x Access Error interrupt source. Position */
#define MATRIX_MEIER_MERR3_Pos                _UINT32_(3)                                          /* (MATRIX_MEIER) Host 3 Access Error Position */
#define MATRIX_MEIER_MERR3_Msk                (_UINT32_(0x1) << MATRIX_MEIER_MERR3_Pos)            /* (MATRIX_MEIER) Host 3 Access Error Mask */
#define MATRIX_MEIER_MERR3(value)             (MATRIX_MEIER_MERR3_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR3_Pos)) /* Assignment of value for MERR3 in the MATRIX_MEIER register */
#define   MATRIX_MEIER_MERR3_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR3_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIER) Enables Host x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR3_0                  (MATRIX_MEIER_MERR3_0_Val << MATRIX_MEIER_MERR3_Pos) /* (MATRIX_MEIER) No effect. Position */
#define MATRIX_MEIER_MERR3_1                  (MATRIX_MEIER_MERR3_1_Val << MATRIX_MEIER_MERR3_Pos) /* (MATRIX_MEIER) Enables Host x Access Error interrupt source. Position */
#define MATRIX_MEIER_MERR4_Pos                _UINT32_(4)                                          /* (MATRIX_MEIER) Host 4 Access Error Position */
#define MATRIX_MEIER_MERR4_Msk                (_UINT32_(0x1) << MATRIX_MEIER_MERR4_Pos)            /* (MATRIX_MEIER) Host 4 Access Error Mask */
#define MATRIX_MEIER_MERR4(value)             (MATRIX_MEIER_MERR4_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR4_Pos)) /* Assignment of value for MERR4 in the MATRIX_MEIER register */
#define   MATRIX_MEIER_MERR4_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR4_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIER) Enables Host x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR4_0                  (MATRIX_MEIER_MERR4_0_Val << MATRIX_MEIER_MERR4_Pos) /* (MATRIX_MEIER) No effect. Position */
#define MATRIX_MEIER_MERR4_1                  (MATRIX_MEIER_MERR4_1_Val << MATRIX_MEIER_MERR4_Pos) /* (MATRIX_MEIER) Enables Host x Access Error interrupt source. Position */
#define MATRIX_MEIER_MERR5_Pos                _UINT32_(5)                                          /* (MATRIX_MEIER) Host 5 Access Error Position */
#define MATRIX_MEIER_MERR5_Msk                (_UINT32_(0x1) << MATRIX_MEIER_MERR5_Pos)            /* (MATRIX_MEIER) Host 5 Access Error Mask */
#define MATRIX_MEIER_MERR5(value)             (MATRIX_MEIER_MERR5_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR5_Pos)) /* Assignment of value for MERR5 in the MATRIX_MEIER register */
#define   MATRIX_MEIER_MERR5_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR5_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIER) Enables Host x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR5_0                  (MATRIX_MEIER_MERR5_0_Val << MATRIX_MEIER_MERR5_Pos) /* (MATRIX_MEIER) No effect. Position */
#define MATRIX_MEIER_MERR5_1                  (MATRIX_MEIER_MERR5_1_Val << MATRIX_MEIER_MERR5_Pos) /* (MATRIX_MEIER) Enables Host x Access Error interrupt source. Position */
#define MATRIX_MEIER_MERR6_Pos                _UINT32_(6)                                          /* (MATRIX_MEIER) Host 6 Access Error Position */
#define MATRIX_MEIER_MERR6_Msk                (_UINT32_(0x1) << MATRIX_MEIER_MERR6_Pos)            /* (MATRIX_MEIER) Host 6 Access Error Mask */
#define MATRIX_MEIER_MERR6(value)             (MATRIX_MEIER_MERR6_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR6_Pos)) /* Assignment of value for MERR6 in the MATRIX_MEIER register */
#define   MATRIX_MEIER_MERR6_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR6_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIER) Enables Host x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR6_0                  (MATRIX_MEIER_MERR6_0_Val << MATRIX_MEIER_MERR6_Pos) /* (MATRIX_MEIER) No effect. Position */
#define MATRIX_MEIER_MERR6_1                  (MATRIX_MEIER_MERR6_1_Val << MATRIX_MEIER_MERR6_Pos) /* (MATRIX_MEIER) Enables Host x Access Error interrupt source. Position */
#define MATRIX_MEIER_MERR7_Pos                _UINT32_(7)                                          /* (MATRIX_MEIER) Host 7 Access Error Position */
#define MATRIX_MEIER_MERR7_Msk                (_UINT32_(0x1) << MATRIX_MEIER_MERR7_Pos)            /* (MATRIX_MEIER) Host 7 Access Error Mask */
#define MATRIX_MEIER_MERR7(value)             (MATRIX_MEIER_MERR7_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR7_Pos)) /* Assignment of value for MERR7 in the MATRIX_MEIER register */
#define   MATRIX_MEIER_MERR7_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR7_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIER) Enables Host x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR7_0                  (MATRIX_MEIER_MERR7_0_Val << MATRIX_MEIER_MERR7_Pos) /* (MATRIX_MEIER) No effect. Position */
#define MATRIX_MEIER_MERR7_1                  (MATRIX_MEIER_MERR7_1_Val << MATRIX_MEIER_MERR7_Pos) /* (MATRIX_MEIER) Enables Host x Access Error interrupt source. Position */
#define MATRIX_MEIER_MERR8_Pos                _UINT32_(8)                                          /* (MATRIX_MEIER) Host 8 Access Error Position */
#define MATRIX_MEIER_MERR8_Msk                (_UINT32_(0x1) << MATRIX_MEIER_MERR8_Pos)            /* (MATRIX_MEIER) Host 8 Access Error Mask */
#define MATRIX_MEIER_MERR8(value)             (MATRIX_MEIER_MERR8_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR8_Pos)) /* Assignment of value for MERR8 in the MATRIX_MEIER register */
#define   MATRIX_MEIER_MERR8_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR8_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIER) Enables Host x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR8_0                  (MATRIX_MEIER_MERR8_0_Val << MATRIX_MEIER_MERR8_Pos) /* (MATRIX_MEIER) No effect. Position */
#define MATRIX_MEIER_MERR8_1                  (MATRIX_MEIER_MERR8_1_Val << MATRIX_MEIER_MERR8_Pos) /* (MATRIX_MEIER) Enables Host x Access Error interrupt source. Position */
#define MATRIX_MEIER_MERR9_Pos                _UINT32_(9)                                          /* (MATRIX_MEIER) Host 9 Access Error Position */
#define MATRIX_MEIER_MERR9_Msk                (_UINT32_(0x1) << MATRIX_MEIER_MERR9_Pos)            /* (MATRIX_MEIER) Host 9 Access Error Mask */
#define MATRIX_MEIER_MERR9(value)             (MATRIX_MEIER_MERR9_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR9_Pos)) /* Assignment of value for MERR9 in the MATRIX_MEIER register */
#define   MATRIX_MEIER_MERR9_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR9_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIER) Enables Host x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR9_0                  (MATRIX_MEIER_MERR9_0_Val << MATRIX_MEIER_MERR9_Pos) /* (MATRIX_MEIER) No effect. Position */
#define MATRIX_MEIER_MERR9_1                  (MATRIX_MEIER_MERR9_1_Val << MATRIX_MEIER_MERR9_Pos) /* (MATRIX_MEIER) Enables Host x Access Error interrupt source. Position */
#define MATRIX_MEIER_MERR10_Pos               _UINT32_(10)                                         /* (MATRIX_MEIER) Host 10 Access Error Position */
#define MATRIX_MEIER_MERR10_Msk               (_UINT32_(0x1) << MATRIX_MEIER_MERR10_Pos)           /* (MATRIX_MEIER) Host 10 Access Error Mask */
#define MATRIX_MEIER_MERR10(value)            (MATRIX_MEIER_MERR10_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR10_Pos)) /* Assignment of value for MERR10 in the MATRIX_MEIER register */
#define   MATRIX_MEIER_MERR10_0_Val           _UINT32_(0x0)                                        /* (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR10_1_Val           _UINT32_(0x1)                                        /* (MATRIX_MEIER) Enables Host x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR10_0                 (MATRIX_MEIER_MERR10_0_Val << MATRIX_MEIER_MERR10_Pos) /* (MATRIX_MEIER) No effect. Position */
#define MATRIX_MEIER_MERR10_1                 (MATRIX_MEIER_MERR10_1_Val << MATRIX_MEIER_MERR10_Pos) /* (MATRIX_MEIER) Enables Host x Access Error interrupt source. Position */
#define MATRIX_MEIER_MERR11_Pos               _UINT32_(11)                                         /* (MATRIX_MEIER) Host 11 Access Error Position */
#define MATRIX_MEIER_MERR11_Msk               (_UINT32_(0x1) << MATRIX_MEIER_MERR11_Pos)           /* (MATRIX_MEIER) Host 11 Access Error Mask */
#define MATRIX_MEIER_MERR11(value)            (MATRIX_MEIER_MERR11_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR11_Pos)) /* Assignment of value for MERR11 in the MATRIX_MEIER register */
#define   MATRIX_MEIER_MERR11_0_Val           _UINT32_(0x0)                                        /* (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR11_1_Val           _UINT32_(0x1)                                        /* (MATRIX_MEIER) Enables Host x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR11_0                 (MATRIX_MEIER_MERR11_0_Val << MATRIX_MEIER_MERR11_Pos) /* (MATRIX_MEIER) No effect. Position */
#define MATRIX_MEIER_MERR11_1                 (MATRIX_MEIER_MERR11_1_Val << MATRIX_MEIER_MERR11_Pos) /* (MATRIX_MEIER) Enables Host x Access Error interrupt source. Position */
#define MATRIX_MEIER_MERR12_Pos               _UINT32_(12)                                         /* (MATRIX_MEIER) Host 12 Access Error Position */
#define MATRIX_MEIER_MERR12_Msk               (_UINT32_(0x1) << MATRIX_MEIER_MERR12_Pos)           /* (MATRIX_MEIER) Host 12 Access Error Mask */
#define MATRIX_MEIER_MERR12(value)            (MATRIX_MEIER_MERR12_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR12_Pos)) /* Assignment of value for MERR12 in the MATRIX_MEIER register */
#define   MATRIX_MEIER_MERR12_0_Val           _UINT32_(0x0)                                        /* (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR12_1_Val           _UINT32_(0x1)                                        /* (MATRIX_MEIER) Enables Host x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR12_0                 (MATRIX_MEIER_MERR12_0_Val << MATRIX_MEIER_MERR12_Pos) /* (MATRIX_MEIER) No effect. Position */
#define MATRIX_MEIER_MERR12_1                 (MATRIX_MEIER_MERR12_1_Val << MATRIX_MEIER_MERR12_Pos) /* (MATRIX_MEIER) Enables Host x Access Error interrupt source. Position */
#define MATRIX_MEIER_MERR13_Pos               _UINT32_(13)                                         /* (MATRIX_MEIER) Host 13 Access Error Position */
#define MATRIX_MEIER_MERR13_Msk               (_UINT32_(0x1) << MATRIX_MEIER_MERR13_Pos)           /* (MATRIX_MEIER) Host 13 Access Error Mask */
#define MATRIX_MEIER_MERR13(value)            (MATRIX_MEIER_MERR13_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR13_Pos)) /* Assignment of value for MERR13 in the MATRIX_MEIER register */
#define   MATRIX_MEIER_MERR13_0_Val           _UINT32_(0x0)                                        /* (MATRIX_MEIER) No effect.  */
#define   MATRIX_MEIER_MERR13_1_Val           _UINT32_(0x1)                                        /* (MATRIX_MEIER) Enables Host x Access Error interrupt source.  */
#define MATRIX_MEIER_MERR13_0                 (MATRIX_MEIER_MERR13_0_Val << MATRIX_MEIER_MERR13_Pos) /* (MATRIX_MEIER) No effect. Position */
#define MATRIX_MEIER_MERR13_1                 (MATRIX_MEIER_MERR13_1_Val << MATRIX_MEIER_MERR13_Pos) /* (MATRIX_MEIER) Enables Host x Access Error interrupt source. Position */
#define MATRIX_MEIER_Msk                      _UINT32_(0x00003FFF)                                 /* (MATRIX_MEIER) Register Mask  */

#define MATRIX_MEIER_MERR_Pos                 _UINT32_(0)                                          /* (MATRIX_MEIER Position) Host x3 Access Error */
#define MATRIX_MEIER_MERR_Msk                 (_UINT32_(0x3FFF) << MATRIX_MEIER_MERR_Pos)          /* (MATRIX_MEIER Mask) MERR */
#define MATRIX_MEIER_MERR(value)              (MATRIX_MEIER_MERR_Msk & (_UINT32_(value) << MATRIX_MEIER_MERR_Pos)) 

/* -------- MATRIX_MEIDR : (MATRIX Offset: 0x154) ( /W 32) Host Error Interrupt Disable Register -------- */
#define MATRIX_MEIDR_MERR0_Pos                _UINT32_(0)                                          /* (MATRIX_MEIDR) Host 0 Access Error Position */
#define MATRIX_MEIDR_MERR0_Msk                (_UINT32_(0x1) << MATRIX_MEIDR_MERR0_Pos)            /* (MATRIX_MEIDR) Host 0 Access Error Mask */
#define MATRIX_MEIDR_MERR0(value)             (MATRIX_MEIDR_MERR0_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR0_Pos)) /* Assignment of value for MERR0 in the MATRIX_MEIDR register */
#define   MATRIX_MEIDR_MERR0_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR0_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIDR) Disables Host x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR0_0                  (MATRIX_MEIDR_MERR0_0_Val << MATRIX_MEIDR_MERR0_Pos) /* (MATRIX_MEIDR) No effect. Position */
#define MATRIX_MEIDR_MERR0_1                  (MATRIX_MEIDR_MERR0_1_Val << MATRIX_MEIDR_MERR0_Pos) /* (MATRIX_MEIDR) Disables Host x Access Error interrupt source. Position */
#define MATRIX_MEIDR_MERR1_Pos                _UINT32_(1)                                          /* (MATRIX_MEIDR) Host 1 Access Error Position */
#define MATRIX_MEIDR_MERR1_Msk                (_UINT32_(0x1) << MATRIX_MEIDR_MERR1_Pos)            /* (MATRIX_MEIDR) Host 1 Access Error Mask */
#define MATRIX_MEIDR_MERR1(value)             (MATRIX_MEIDR_MERR1_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR1_Pos)) /* Assignment of value for MERR1 in the MATRIX_MEIDR register */
#define   MATRIX_MEIDR_MERR1_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR1_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIDR) Disables Host x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR1_0                  (MATRIX_MEIDR_MERR1_0_Val << MATRIX_MEIDR_MERR1_Pos) /* (MATRIX_MEIDR) No effect. Position */
#define MATRIX_MEIDR_MERR1_1                  (MATRIX_MEIDR_MERR1_1_Val << MATRIX_MEIDR_MERR1_Pos) /* (MATRIX_MEIDR) Disables Host x Access Error interrupt source. Position */
#define MATRIX_MEIDR_MERR2_Pos                _UINT32_(2)                                          /* (MATRIX_MEIDR) Host 2 Access Error Position */
#define MATRIX_MEIDR_MERR2_Msk                (_UINT32_(0x1) << MATRIX_MEIDR_MERR2_Pos)            /* (MATRIX_MEIDR) Host 2 Access Error Mask */
#define MATRIX_MEIDR_MERR2(value)             (MATRIX_MEIDR_MERR2_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR2_Pos)) /* Assignment of value for MERR2 in the MATRIX_MEIDR register */
#define   MATRIX_MEIDR_MERR2_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR2_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIDR) Disables Host x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR2_0                  (MATRIX_MEIDR_MERR2_0_Val << MATRIX_MEIDR_MERR2_Pos) /* (MATRIX_MEIDR) No effect. Position */
#define MATRIX_MEIDR_MERR2_1                  (MATRIX_MEIDR_MERR2_1_Val << MATRIX_MEIDR_MERR2_Pos) /* (MATRIX_MEIDR) Disables Host x Access Error interrupt source. Position */
#define MATRIX_MEIDR_MERR3_Pos                _UINT32_(3)                                          /* (MATRIX_MEIDR) Host 3 Access Error Position */
#define MATRIX_MEIDR_MERR3_Msk                (_UINT32_(0x1) << MATRIX_MEIDR_MERR3_Pos)            /* (MATRIX_MEIDR) Host 3 Access Error Mask */
#define MATRIX_MEIDR_MERR3(value)             (MATRIX_MEIDR_MERR3_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR3_Pos)) /* Assignment of value for MERR3 in the MATRIX_MEIDR register */
#define   MATRIX_MEIDR_MERR3_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR3_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIDR) Disables Host x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR3_0                  (MATRIX_MEIDR_MERR3_0_Val << MATRIX_MEIDR_MERR3_Pos) /* (MATRIX_MEIDR) No effect. Position */
#define MATRIX_MEIDR_MERR3_1                  (MATRIX_MEIDR_MERR3_1_Val << MATRIX_MEIDR_MERR3_Pos) /* (MATRIX_MEIDR) Disables Host x Access Error interrupt source. Position */
#define MATRIX_MEIDR_MERR4_Pos                _UINT32_(4)                                          /* (MATRIX_MEIDR) Host 4 Access Error Position */
#define MATRIX_MEIDR_MERR4_Msk                (_UINT32_(0x1) << MATRIX_MEIDR_MERR4_Pos)            /* (MATRIX_MEIDR) Host 4 Access Error Mask */
#define MATRIX_MEIDR_MERR4(value)             (MATRIX_MEIDR_MERR4_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR4_Pos)) /* Assignment of value for MERR4 in the MATRIX_MEIDR register */
#define   MATRIX_MEIDR_MERR4_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR4_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIDR) Disables Host x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR4_0                  (MATRIX_MEIDR_MERR4_0_Val << MATRIX_MEIDR_MERR4_Pos) /* (MATRIX_MEIDR) No effect. Position */
#define MATRIX_MEIDR_MERR4_1                  (MATRIX_MEIDR_MERR4_1_Val << MATRIX_MEIDR_MERR4_Pos) /* (MATRIX_MEIDR) Disables Host x Access Error interrupt source. Position */
#define MATRIX_MEIDR_MERR5_Pos                _UINT32_(5)                                          /* (MATRIX_MEIDR) Host 5 Access Error Position */
#define MATRIX_MEIDR_MERR5_Msk                (_UINT32_(0x1) << MATRIX_MEIDR_MERR5_Pos)            /* (MATRIX_MEIDR) Host 5 Access Error Mask */
#define MATRIX_MEIDR_MERR5(value)             (MATRIX_MEIDR_MERR5_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR5_Pos)) /* Assignment of value for MERR5 in the MATRIX_MEIDR register */
#define   MATRIX_MEIDR_MERR5_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR5_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIDR) Disables Host x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR5_0                  (MATRIX_MEIDR_MERR5_0_Val << MATRIX_MEIDR_MERR5_Pos) /* (MATRIX_MEIDR) No effect. Position */
#define MATRIX_MEIDR_MERR5_1                  (MATRIX_MEIDR_MERR5_1_Val << MATRIX_MEIDR_MERR5_Pos) /* (MATRIX_MEIDR) Disables Host x Access Error interrupt source. Position */
#define MATRIX_MEIDR_MERR6_Pos                _UINT32_(6)                                          /* (MATRIX_MEIDR) Host 6 Access Error Position */
#define MATRIX_MEIDR_MERR6_Msk                (_UINT32_(0x1) << MATRIX_MEIDR_MERR6_Pos)            /* (MATRIX_MEIDR) Host 6 Access Error Mask */
#define MATRIX_MEIDR_MERR6(value)             (MATRIX_MEIDR_MERR6_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR6_Pos)) /* Assignment of value for MERR6 in the MATRIX_MEIDR register */
#define   MATRIX_MEIDR_MERR6_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR6_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIDR) Disables Host x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR6_0                  (MATRIX_MEIDR_MERR6_0_Val << MATRIX_MEIDR_MERR6_Pos) /* (MATRIX_MEIDR) No effect. Position */
#define MATRIX_MEIDR_MERR6_1                  (MATRIX_MEIDR_MERR6_1_Val << MATRIX_MEIDR_MERR6_Pos) /* (MATRIX_MEIDR) Disables Host x Access Error interrupt source. Position */
#define MATRIX_MEIDR_MERR7_Pos                _UINT32_(7)                                          /* (MATRIX_MEIDR) Host 7 Access Error Position */
#define MATRIX_MEIDR_MERR7_Msk                (_UINT32_(0x1) << MATRIX_MEIDR_MERR7_Pos)            /* (MATRIX_MEIDR) Host 7 Access Error Mask */
#define MATRIX_MEIDR_MERR7(value)             (MATRIX_MEIDR_MERR7_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR7_Pos)) /* Assignment of value for MERR7 in the MATRIX_MEIDR register */
#define   MATRIX_MEIDR_MERR7_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR7_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIDR) Disables Host x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR7_0                  (MATRIX_MEIDR_MERR7_0_Val << MATRIX_MEIDR_MERR7_Pos) /* (MATRIX_MEIDR) No effect. Position */
#define MATRIX_MEIDR_MERR7_1                  (MATRIX_MEIDR_MERR7_1_Val << MATRIX_MEIDR_MERR7_Pos) /* (MATRIX_MEIDR) Disables Host x Access Error interrupt source. Position */
#define MATRIX_MEIDR_MERR8_Pos                _UINT32_(8)                                          /* (MATRIX_MEIDR) Host 8 Access Error Position */
#define MATRIX_MEIDR_MERR8_Msk                (_UINT32_(0x1) << MATRIX_MEIDR_MERR8_Pos)            /* (MATRIX_MEIDR) Host 8 Access Error Mask */
#define MATRIX_MEIDR_MERR8(value)             (MATRIX_MEIDR_MERR8_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR8_Pos)) /* Assignment of value for MERR8 in the MATRIX_MEIDR register */
#define   MATRIX_MEIDR_MERR8_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR8_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIDR) Disables Host x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR8_0                  (MATRIX_MEIDR_MERR8_0_Val << MATRIX_MEIDR_MERR8_Pos) /* (MATRIX_MEIDR) No effect. Position */
#define MATRIX_MEIDR_MERR8_1                  (MATRIX_MEIDR_MERR8_1_Val << MATRIX_MEIDR_MERR8_Pos) /* (MATRIX_MEIDR) Disables Host x Access Error interrupt source. Position */
#define MATRIX_MEIDR_MERR9_Pos                _UINT32_(9)                                          /* (MATRIX_MEIDR) Host 9 Access Error Position */
#define MATRIX_MEIDR_MERR9_Msk                (_UINT32_(0x1) << MATRIX_MEIDR_MERR9_Pos)            /* (MATRIX_MEIDR) Host 9 Access Error Mask */
#define MATRIX_MEIDR_MERR9(value)             (MATRIX_MEIDR_MERR9_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR9_Pos)) /* Assignment of value for MERR9 in the MATRIX_MEIDR register */
#define   MATRIX_MEIDR_MERR9_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR9_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIDR) Disables Host x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR9_0                  (MATRIX_MEIDR_MERR9_0_Val << MATRIX_MEIDR_MERR9_Pos) /* (MATRIX_MEIDR) No effect. Position */
#define MATRIX_MEIDR_MERR9_1                  (MATRIX_MEIDR_MERR9_1_Val << MATRIX_MEIDR_MERR9_Pos) /* (MATRIX_MEIDR) Disables Host x Access Error interrupt source. Position */
#define MATRIX_MEIDR_MERR10_Pos               _UINT32_(10)                                         /* (MATRIX_MEIDR) Host 10 Access Error Position */
#define MATRIX_MEIDR_MERR10_Msk               (_UINT32_(0x1) << MATRIX_MEIDR_MERR10_Pos)           /* (MATRIX_MEIDR) Host 10 Access Error Mask */
#define MATRIX_MEIDR_MERR10(value)            (MATRIX_MEIDR_MERR10_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR10_Pos)) /* Assignment of value for MERR10 in the MATRIX_MEIDR register */
#define   MATRIX_MEIDR_MERR10_0_Val           _UINT32_(0x0)                                        /* (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR10_1_Val           _UINT32_(0x1)                                        /* (MATRIX_MEIDR) Disables Host x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR10_0                 (MATRIX_MEIDR_MERR10_0_Val << MATRIX_MEIDR_MERR10_Pos) /* (MATRIX_MEIDR) No effect. Position */
#define MATRIX_MEIDR_MERR10_1                 (MATRIX_MEIDR_MERR10_1_Val << MATRIX_MEIDR_MERR10_Pos) /* (MATRIX_MEIDR) Disables Host x Access Error interrupt source. Position */
#define MATRIX_MEIDR_MERR11_Pos               _UINT32_(11)                                         /* (MATRIX_MEIDR) Host 11 Access Error Position */
#define MATRIX_MEIDR_MERR11_Msk               (_UINT32_(0x1) << MATRIX_MEIDR_MERR11_Pos)           /* (MATRIX_MEIDR) Host 11 Access Error Mask */
#define MATRIX_MEIDR_MERR11(value)            (MATRIX_MEIDR_MERR11_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR11_Pos)) /* Assignment of value for MERR11 in the MATRIX_MEIDR register */
#define   MATRIX_MEIDR_MERR11_0_Val           _UINT32_(0x0)                                        /* (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR11_1_Val           _UINT32_(0x1)                                        /* (MATRIX_MEIDR) Disables Host x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR11_0                 (MATRIX_MEIDR_MERR11_0_Val << MATRIX_MEIDR_MERR11_Pos) /* (MATRIX_MEIDR) No effect. Position */
#define MATRIX_MEIDR_MERR11_1                 (MATRIX_MEIDR_MERR11_1_Val << MATRIX_MEIDR_MERR11_Pos) /* (MATRIX_MEIDR) Disables Host x Access Error interrupt source. Position */
#define MATRIX_MEIDR_MERR12_Pos               _UINT32_(12)                                         /* (MATRIX_MEIDR) Host 12 Access Error Position */
#define MATRIX_MEIDR_MERR12_Msk               (_UINT32_(0x1) << MATRIX_MEIDR_MERR12_Pos)           /* (MATRIX_MEIDR) Host 12 Access Error Mask */
#define MATRIX_MEIDR_MERR12(value)            (MATRIX_MEIDR_MERR12_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR12_Pos)) /* Assignment of value for MERR12 in the MATRIX_MEIDR register */
#define   MATRIX_MEIDR_MERR12_0_Val           _UINT32_(0x0)                                        /* (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR12_1_Val           _UINT32_(0x1)                                        /* (MATRIX_MEIDR) Disables Host x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR12_0                 (MATRIX_MEIDR_MERR12_0_Val << MATRIX_MEIDR_MERR12_Pos) /* (MATRIX_MEIDR) No effect. Position */
#define MATRIX_MEIDR_MERR12_1                 (MATRIX_MEIDR_MERR12_1_Val << MATRIX_MEIDR_MERR12_Pos) /* (MATRIX_MEIDR) Disables Host x Access Error interrupt source. Position */
#define MATRIX_MEIDR_MERR13_Pos               _UINT32_(13)                                         /* (MATRIX_MEIDR) Host 13 Access Error Position */
#define MATRIX_MEIDR_MERR13_Msk               (_UINT32_(0x1) << MATRIX_MEIDR_MERR13_Pos)           /* (MATRIX_MEIDR) Host 13 Access Error Mask */
#define MATRIX_MEIDR_MERR13(value)            (MATRIX_MEIDR_MERR13_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR13_Pos)) /* Assignment of value for MERR13 in the MATRIX_MEIDR register */
#define   MATRIX_MEIDR_MERR13_0_Val           _UINT32_(0x0)                                        /* (MATRIX_MEIDR) No effect.  */
#define   MATRIX_MEIDR_MERR13_1_Val           _UINT32_(0x1)                                        /* (MATRIX_MEIDR) Disables Host x Access Error interrupt source.  */
#define MATRIX_MEIDR_MERR13_0                 (MATRIX_MEIDR_MERR13_0_Val << MATRIX_MEIDR_MERR13_Pos) /* (MATRIX_MEIDR) No effect. Position */
#define MATRIX_MEIDR_MERR13_1                 (MATRIX_MEIDR_MERR13_1_Val << MATRIX_MEIDR_MERR13_Pos) /* (MATRIX_MEIDR) Disables Host x Access Error interrupt source. Position */
#define MATRIX_MEIDR_Msk                      _UINT32_(0x00003FFF)                                 /* (MATRIX_MEIDR) Register Mask  */

#define MATRIX_MEIDR_MERR_Pos                 _UINT32_(0)                                          /* (MATRIX_MEIDR Position) Host x3 Access Error */
#define MATRIX_MEIDR_MERR_Msk                 (_UINT32_(0x3FFF) << MATRIX_MEIDR_MERR_Pos)          /* (MATRIX_MEIDR Mask) MERR */
#define MATRIX_MEIDR_MERR(value)              (MATRIX_MEIDR_MERR_Msk & (_UINT32_(value) << MATRIX_MEIDR_MERR_Pos)) 

/* -------- MATRIX_MEIMR : (MATRIX Offset: 0x158) ( R/ 32) Host Error Interrupt Mask Register -------- */
#define MATRIX_MEIMR_RESETVALUE               _UINT32_(0x00)                                       /*  (MATRIX_MEIMR) Host Error Interrupt Mask Register  Reset Value */

#define MATRIX_MEIMR_MERR0_Pos                _UINT32_(0)                                          /* (MATRIX_MEIMR) Host 0 Access Error Position */
#define MATRIX_MEIMR_MERR0_Msk                (_UINT32_(0x1) << MATRIX_MEIMR_MERR0_Pos)            /* (MATRIX_MEIMR) Host 0 Access Error Mask */
#define MATRIX_MEIMR_MERR0(value)             (MATRIX_MEIMR_MERR0_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR0_Pos)) /* Assignment of value for MERR0 in the MATRIX_MEIMR register */
#define   MATRIX_MEIMR_MERR0_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIMR) Host x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR0_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIMR) Host x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR0_0                  (MATRIX_MEIMR_MERR0_0_Val << MATRIX_MEIMR_MERR0_Pos) /* (MATRIX_MEIMR) Host x Access Error does not trigger any interrupt. Position */
#define MATRIX_MEIMR_MERR0_1                  (MATRIX_MEIMR_MERR0_1_Val << MATRIX_MEIMR_MERR0_Pos) /* (MATRIX_MEIMR) Host x Access Error triggers the MATRIX interrupt line. Position */
#define MATRIX_MEIMR_MERR1_Pos                _UINT32_(1)                                          /* (MATRIX_MEIMR) Host 1 Access Error Position */
#define MATRIX_MEIMR_MERR1_Msk                (_UINT32_(0x1) << MATRIX_MEIMR_MERR1_Pos)            /* (MATRIX_MEIMR) Host 1 Access Error Mask */
#define MATRIX_MEIMR_MERR1(value)             (MATRIX_MEIMR_MERR1_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR1_Pos)) /* Assignment of value for MERR1 in the MATRIX_MEIMR register */
#define   MATRIX_MEIMR_MERR1_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIMR) Host x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR1_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIMR) Host x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR1_0                  (MATRIX_MEIMR_MERR1_0_Val << MATRIX_MEIMR_MERR1_Pos) /* (MATRIX_MEIMR) Host x Access Error does not trigger any interrupt. Position */
#define MATRIX_MEIMR_MERR1_1                  (MATRIX_MEIMR_MERR1_1_Val << MATRIX_MEIMR_MERR1_Pos) /* (MATRIX_MEIMR) Host x Access Error triggers the MATRIX interrupt line. Position */
#define MATRIX_MEIMR_MERR2_Pos                _UINT32_(2)                                          /* (MATRIX_MEIMR) Host 2 Access Error Position */
#define MATRIX_MEIMR_MERR2_Msk                (_UINT32_(0x1) << MATRIX_MEIMR_MERR2_Pos)            /* (MATRIX_MEIMR) Host 2 Access Error Mask */
#define MATRIX_MEIMR_MERR2(value)             (MATRIX_MEIMR_MERR2_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR2_Pos)) /* Assignment of value for MERR2 in the MATRIX_MEIMR register */
#define   MATRIX_MEIMR_MERR2_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIMR) Host x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR2_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIMR) Host x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR2_0                  (MATRIX_MEIMR_MERR2_0_Val << MATRIX_MEIMR_MERR2_Pos) /* (MATRIX_MEIMR) Host x Access Error does not trigger any interrupt. Position */
#define MATRIX_MEIMR_MERR2_1                  (MATRIX_MEIMR_MERR2_1_Val << MATRIX_MEIMR_MERR2_Pos) /* (MATRIX_MEIMR) Host x Access Error triggers the MATRIX interrupt line. Position */
#define MATRIX_MEIMR_MERR3_Pos                _UINT32_(3)                                          /* (MATRIX_MEIMR) Host 3 Access Error Position */
#define MATRIX_MEIMR_MERR3_Msk                (_UINT32_(0x1) << MATRIX_MEIMR_MERR3_Pos)            /* (MATRIX_MEIMR) Host 3 Access Error Mask */
#define MATRIX_MEIMR_MERR3(value)             (MATRIX_MEIMR_MERR3_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR3_Pos)) /* Assignment of value for MERR3 in the MATRIX_MEIMR register */
#define   MATRIX_MEIMR_MERR3_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIMR) Host x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR3_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIMR) Host x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR3_0                  (MATRIX_MEIMR_MERR3_0_Val << MATRIX_MEIMR_MERR3_Pos) /* (MATRIX_MEIMR) Host x Access Error does not trigger any interrupt. Position */
#define MATRIX_MEIMR_MERR3_1                  (MATRIX_MEIMR_MERR3_1_Val << MATRIX_MEIMR_MERR3_Pos) /* (MATRIX_MEIMR) Host x Access Error triggers the MATRIX interrupt line. Position */
#define MATRIX_MEIMR_MERR4_Pos                _UINT32_(4)                                          /* (MATRIX_MEIMR) Host 4 Access Error Position */
#define MATRIX_MEIMR_MERR4_Msk                (_UINT32_(0x1) << MATRIX_MEIMR_MERR4_Pos)            /* (MATRIX_MEIMR) Host 4 Access Error Mask */
#define MATRIX_MEIMR_MERR4(value)             (MATRIX_MEIMR_MERR4_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR4_Pos)) /* Assignment of value for MERR4 in the MATRIX_MEIMR register */
#define   MATRIX_MEIMR_MERR4_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIMR) Host x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR4_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIMR) Host x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR4_0                  (MATRIX_MEIMR_MERR4_0_Val << MATRIX_MEIMR_MERR4_Pos) /* (MATRIX_MEIMR) Host x Access Error does not trigger any interrupt. Position */
#define MATRIX_MEIMR_MERR4_1                  (MATRIX_MEIMR_MERR4_1_Val << MATRIX_MEIMR_MERR4_Pos) /* (MATRIX_MEIMR) Host x Access Error triggers the MATRIX interrupt line. Position */
#define MATRIX_MEIMR_MERR5_Pos                _UINT32_(5)                                          /* (MATRIX_MEIMR) Host 5 Access Error Position */
#define MATRIX_MEIMR_MERR5_Msk                (_UINT32_(0x1) << MATRIX_MEIMR_MERR5_Pos)            /* (MATRIX_MEIMR) Host 5 Access Error Mask */
#define MATRIX_MEIMR_MERR5(value)             (MATRIX_MEIMR_MERR5_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR5_Pos)) /* Assignment of value for MERR5 in the MATRIX_MEIMR register */
#define   MATRIX_MEIMR_MERR5_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIMR) Host x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR5_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIMR) Host x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR5_0                  (MATRIX_MEIMR_MERR5_0_Val << MATRIX_MEIMR_MERR5_Pos) /* (MATRIX_MEIMR) Host x Access Error does not trigger any interrupt. Position */
#define MATRIX_MEIMR_MERR5_1                  (MATRIX_MEIMR_MERR5_1_Val << MATRIX_MEIMR_MERR5_Pos) /* (MATRIX_MEIMR) Host x Access Error triggers the MATRIX interrupt line. Position */
#define MATRIX_MEIMR_MERR6_Pos                _UINT32_(6)                                          /* (MATRIX_MEIMR) Host 6 Access Error Position */
#define MATRIX_MEIMR_MERR6_Msk                (_UINT32_(0x1) << MATRIX_MEIMR_MERR6_Pos)            /* (MATRIX_MEIMR) Host 6 Access Error Mask */
#define MATRIX_MEIMR_MERR6(value)             (MATRIX_MEIMR_MERR6_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR6_Pos)) /* Assignment of value for MERR6 in the MATRIX_MEIMR register */
#define   MATRIX_MEIMR_MERR6_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIMR) Host x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR6_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIMR) Host x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR6_0                  (MATRIX_MEIMR_MERR6_0_Val << MATRIX_MEIMR_MERR6_Pos) /* (MATRIX_MEIMR) Host x Access Error does not trigger any interrupt. Position */
#define MATRIX_MEIMR_MERR6_1                  (MATRIX_MEIMR_MERR6_1_Val << MATRIX_MEIMR_MERR6_Pos) /* (MATRIX_MEIMR) Host x Access Error triggers the MATRIX interrupt line. Position */
#define MATRIX_MEIMR_MERR7_Pos                _UINT32_(7)                                          /* (MATRIX_MEIMR) Host 7 Access Error Position */
#define MATRIX_MEIMR_MERR7_Msk                (_UINT32_(0x1) << MATRIX_MEIMR_MERR7_Pos)            /* (MATRIX_MEIMR) Host 7 Access Error Mask */
#define MATRIX_MEIMR_MERR7(value)             (MATRIX_MEIMR_MERR7_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR7_Pos)) /* Assignment of value for MERR7 in the MATRIX_MEIMR register */
#define   MATRIX_MEIMR_MERR7_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIMR) Host x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR7_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIMR) Host x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR7_0                  (MATRIX_MEIMR_MERR7_0_Val << MATRIX_MEIMR_MERR7_Pos) /* (MATRIX_MEIMR) Host x Access Error does not trigger any interrupt. Position */
#define MATRIX_MEIMR_MERR7_1                  (MATRIX_MEIMR_MERR7_1_Val << MATRIX_MEIMR_MERR7_Pos) /* (MATRIX_MEIMR) Host x Access Error triggers the MATRIX interrupt line. Position */
#define MATRIX_MEIMR_MERR8_Pos                _UINT32_(8)                                          /* (MATRIX_MEIMR) Host 8 Access Error Position */
#define MATRIX_MEIMR_MERR8_Msk                (_UINT32_(0x1) << MATRIX_MEIMR_MERR8_Pos)            /* (MATRIX_MEIMR) Host 8 Access Error Mask */
#define MATRIX_MEIMR_MERR8(value)             (MATRIX_MEIMR_MERR8_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR8_Pos)) /* Assignment of value for MERR8 in the MATRIX_MEIMR register */
#define   MATRIX_MEIMR_MERR8_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIMR) Host x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR8_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIMR) Host x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR8_0                  (MATRIX_MEIMR_MERR8_0_Val << MATRIX_MEIMR_MERR8_Pos) /* (MATRIX_MEIMR) Host x Access Error does not trigger any interrupt. Position */
#define MATRIX_MEIMR_MERR8_1                  (MATRIX_MEIMR_MERR8_1_Val << MATRIX_MEIMR_MERR8_Pos) /* (MATRIX_MEIMR) Host x Access Error triggers the MATRIX interrupt line. Position */
#define MATRIX_MEIMR_MERR9_Pos                _UINT32_(9)                                          /* (MATRIX_MEIMR) Host 9 Access Error Position */
#define MATRIX_MEIMR_MERR9_Msk                (_UINT32_(0x1) << MATRIX_MEIMR_MERR9_Pos)            /* (MATRIX_MEIMR) Host 9 Access Error Mask */
#define MATRIX_MEIMR_MERR9(value)             (MATRIX_MEIMR_MERR9_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR9_Pos)) /* Assignment of value for MERR9 in the MATRIX_MEIMR register */
#define   MATRIX_MEIMR_MERR9_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MEIMR) Host x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR9_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MEIMR) Host x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR9_0                  (MATRIX_MEIMR_MERR9_0_Val << MATRIX_MEIMR_MERR9_Pos) /* (MATRIX_MEIMR) Host x Access Error does not trigger any interrupt. Position */
#define MATRIX_MEIMR_MERR9_1                  (MATRIX_MEIMR_MERR9_1_Val << MATRIX_MEIMR_MERR9_Pos) /* (MATRIX_MEIMR) Host x Access Error triggers the MATRIX interrupt line. Position */
#define MATRIX_MEIMR_MERR10_Pos               _UINT32_(10)                                         /* (MATRIX_MEIMR) Host 10 Access Error Position */
#define MATRIX_MEIMR_MERR10_Msk               (_UINT32_(0x1) << MATRIX_MEIMR_MERR10_Pos)           /* (MATRIX_MEIMR) Host 10 Access Error Mask */
#define MATRIX_MEIMR_MERR10(value)            (MATRIX_MEIMR_MERR10_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR10_Pos)) /* Assignment of value for MERR10 in the MATRIX_MEIMR register */
#define   MATRIX_MEIMR_MERR10_0_Val           _UINT32_(0x0)                                        /* (MATRIX_MEIMR) Host x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR10_1_Val           _UINT32_(0x1)                                        /* (MATRIX_MEIMR) Host x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR10_0                 (MATRIX_MEIMR_MERR10_0_Val << MATRIX_MEIMR_MERR10_Pos) /* (MATRIX_MEIMR) Host x Access Error does not trigger any interrupt. Position */
#define MATRIX_MEIMR_MERR10_1                 (MATRIX_MEIMR_MERR10_1_Val << MATRIX_MEIMR_MERR10_Pos) /* (MATRIX_MEIMR) Host x Access Error triggers the MATRIX interrupt line. Position */
#define MATRIX_MEIMR_MERR11_Pos               _UINT32_(11)                                         /* (MATRIX_MEIMR) Host 11 Access Error Position */
#define MATRIX_MEIMR_MERR11_Msk               (_UINT32_(0x1) << MATRIX_MEIMR_MERR11_Pos)           /* (MATRIX_MEIMR) Host 11 Access Error Mask */
#define MATRIX_MEIMR_MERR11(value)            (MATRIX_MEIMR_MERR11_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR11_Pos)) /* Assignment of value for MERR11 in the MATRIX_MEIMR register */
#define   MATRIX_MEIMR_MERR11_0_Val           _UINT32_(0x0)                                        /* (MATRIX_MEIMR) Host x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR11_1_Val           _UINT32_(0x1)                                        /* (MATRIX_MEIMR) Host x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR11_0                 (MATRIX_MEIMR_MERR11_0_Val << MATRIX_MEIMR_MERR11_Pos) /* (MATRIX_MEIMR) Host x Access Error does not trigger any interrupt. Position */
#define MATRIX_MEIMR_MERR11_1                 (MATRIX_MEIMR_MERR11_1_Val << MATRIX_MEIMR_MERR11_Pos) /* (MATRIX_MEIMR) Host x Access Error triggers the MATRIX interrupt line. Position */
#define MATRIX_MEIMR_MERR12_Pos               _UINT32_(12)                                         /* (MATRIX_MEIMR) Host 12 Access Error Position */
#define MATRIX_MEIMR_MERR12_Msk               (_UINT32_(0x1) << MATRIX_MEIMR_MERR12_Pos)           /* (MATRIX_MEIMR) Host 12 Access Error Mask */
#define MATRIX_MEIMR_MERR12(value)            (MATRIX_MEIMR_MERR12_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR12_Pos)) /* Assignment of value for MERR12 in the MATRIX_MEIMR register */
#define   MATRIX_MEIMR_MERR12_0_Val           _UINT32_(0x0)                                        /* (MATRIX_MEIMR) Host x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR12_1_Val           _UINT32_(0x1)                                        /* (MATRIX_MEIMR) Host x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR12_0                 (MATRIX_MEIMR_MERR12_0_Val << MATRIX_MEIMR_MERR12_Pos) /* (MATRIX_MEIMR) Host x Access Error does not trigger any interrupt. Position */
#define MATRIX_MEIMR_MERR12_1                 (MATRIX_MEIMR_MERR12_1_Val << MATRIX_MEIMR_MERR12_Pos) /* (MATRIX_MEIMR) Host x Access Error triggers the MATRIX interrupt line. Position */
#define MATRIX_MEIMR_MERR13_Pos               _UINT32_(13)                                         /* (MATRIX_MEIMR) Host 13 Access Error Position */
#define MATRIX_MEIMR_MERR13_Msk               (_UINT32_(0x1) << MATRIX_MEIMR_MERR13_Pos)           /* (MATRIX_MEIMR) Host 13 Access Error Mask */
#define MATRIX_MEIMR_MERR13(value)            (MATRIX_MEIMR_MERR13_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR13_Pos)) /* Assignment of value for MERR13 in the MATRIX_MEIMR register */
#define   MATRIX_MEIMR_MERR13_0_Val           _UINT32_(0x0)                                        /* (MATRIX_MEIMR) Host x Access Error does not trigger any interrupt.  */
#define   MATRIX_MEIMR_MERR13_1_Val           _UINT32_(0x1)                                        /* (MATRIX_MEIMR) Host x Access Error triggers the MATRIX interrupt line.  */
#define MATRIX_MEIMR_MERR13_0                 (MATRIX_MEIMR_MERR13_0_Val << MATRIX_MEIMR_MERR13_Pos) /* (MATRIX_MEIMR) Host x Access Error does not trigger any interrupt. Position */
#define MATRIX_MEIMR_MERR13_1                 (MATRIX_MEIMR_MERR13_1_Val << MATRIX_MEIMR_MERR13_Pos) /* (MATRIX_MEIMR) Host x Access Error triggers the MATRIX interrupt line. Position */
#define MATRIX_MEIMR_Msk                      _UINT32_(0x00003FFF)                                 /* (MATRIX_MEIMR) Register Mask  */

#define MATRIX_MEIMR_MERR_Pos                 _UINT32_(0)                                          /* (MATRIX_MEIMR Position) Host x3 Access Error */
#define MATRIX_MEIMR_MERR_Msk                 (_UINT32_(0x3FFF) << MATRIX_MEIMR_MERR_Pos)          /* (MATRIX_MEIMR Mask) MERR */
#define MATRIX_MEIMR_MERR(value)              (MATRIX_MEIMR_MERR_Msk & (_UINT32_(value) << MATRIX_MEIMR_MERR_Pos)) 

/* -------- MATRIX_MESR : (MATRIX Offset: 0x15C) ( R/ 32) Host Error Status Register -------- */
#define MATRIX_MESR_RESETVALUE                _UINT32_(0x00)                                       /*  (MATRIX_MESR) Host Error Status Register  Reset Value */

#define MATRIX_MESR_MERR0_Pos                 _UINT32_(0)                                          /* (MATRIX_MESR) Host 0 Access Error Position */
#define MATRIX_MESR_MERR0_Msk                 (_UINT32_(0x1) << MATRIX_MESR_MERR0_Pos)             /* (MATRIX_MESR) Host 0 Access Error Mask */
#define MATRIX_MESR_MERR0(value)              (MATRIX_MESR_MERR0_Msk & (_UINT32_(value) << MATRIX_MESR_MERR0_Pos)) /* Assignment of value for MERR0 in the MATRIX_MESR register */
#define   MATRIX_MESR_MERR0_0_Val             _UINT32_(0x0)                                        /* (MATRIX_MESR) No Host Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR0_1_Val             _UINT32_(0x1)                                        /* (MATRIX_MESR) At least one Host Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR0_0                   (MATRIX_MESR_MERR0_0_Val << MATRIX_MESR_MERR0_Pos)   /* (MATRIX_MESR) No Host Access Error has occurred since the last read of the MATRIX_MESR. Position */
#define MATRIX_MESR_MERR0_1                   (MATRIX_MESR_MERR0_1_Val << MATRIX_MESR_MERR0_Pos)   /* (MATRIX_MESR) At least one Host Access Error has occurred since the last read of the MATRIX_MESR. Position */
#define MATRIX_MESR_MERR1_Pos                 _UINT32_(1)                                          /* (MATRIX_MESR) Host 1 Access Error Position */
#define MATRIX_MESR_MERR1_Msk                 (_UINT32_(0x1) << MATRIX_MESR_MERR1_Pos)             /* (MATRIX_MESR) Host 1 Access Error Mask */
#define MATRIX_MESR_MERR1(value)              (MATRIX_MESR_MERR1_Msk & (_UINT32_(value) << MATRIX_MESR_MERR1_Pos)) /* Assignment of value for MERR1 in the MATRIX_MESR register */
#define   MATRIX_MESR_MERR1_0_Val             _UINT32_(0x0)                                        /* (MATRIX_MESR) No Host Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR1_1_Val             _UINT32_(0x1)                                        /* (MATRIX_MESR) At least one Host Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR1_0                   (MATRIX_MESR_MERR1_0_Val << MATRIX_MESR_MERR1_Pos)   /* (MATRIX_MESR) No Host Access Error has occurred since the last read of the MATRIX_MESR. Position */
#define MATRIX_MESR_MERR1_1                   (MATRIX_MESR_MERR1_1_Val << MATRIX_MESR_MERR1_Pos)   /* (MATRIX_MESR) At least one Host Access Error has occurred since the last read of the MATRIX_MESR. Position */
#define MATRIX_MESR_MERR2_Pos                 _UINT32_(2)                                          /* (MATRIX_MESR) Host 2 Access Error Position */
#define MATRIX_MESR_MERR2_Msk                 (_UINT32_(0x1) << MATRIX_MESR_MERR2_Pos)             /* (MATRIX_MESR) Host 2 Access Error Mask */
#define MATRIX_MESR_MERR2(value)              (MATRIX_MESR_MERR2_Msk & (_UINT32_(value) << MATRIX_MESR_MERR2_Pos)) /* Assignment of value for MERR2 in the MATRIX_MESR register */
#define   MATRIX_MESR_MERR2_0_Val             _UINT32_(0x0)                                        /* (MATRIX_MESR) No Host Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR2_1_Val             _UINT32_(0x1)                                        /* (MATRIX_MESR) At least one Host Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR2_0                   (MATRIX_MESR_MERR2_0_Val << MATRIX_MESR_MERR2_Pos)   /* (MATRIX_MESR) No Host Access Error has occurred since the last read of the MATRIX_MESR. Position */
#define MATRIX_MESR_MERR2_1                   (MATRIX_MESR_MERR2_1_Val << MATRIX_MESR_MERR2_Pos)   /* (MATRIX_MESR) At least one Host Access Error has occurred since the last read of the MATRIX_MESR. Position */
#define MATRIX_MESR_MERR3_Pos                 _UINT32_(3)                                          /* (MATRIX_MESR) Host 3 Access Error Position */
#define MATRIX_MESR_MERR3_Msk                 (_UINT32_(0x1) << MATRIX_MESR_MERR3_Pos)             /* (MATRIX_MESR) Host 3 Access Error Mask */
#define MATRIX_MESR_MERR3(value)              (MATRIX_MESR_MERR3_Msk & (_UINT32_(value) << MATRIX_MESR_MERR3_Pos)) /* Assignment of value for MERR3 in the MATRIX_MESR register */
#define   MATRIX_MESR_MERR3_0_Val             _UINT32_(0x0)                                        /* (MATRIX_MESR) No Host Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR3_1_Val             _UINT32_(0x1)                                        /* (MATRIX_MESR) At least one Host Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR3_0                   (MATRIX_MESR_MERR3_0_Val << MATRIX_MESR_MERR3_Pos)   /* (MATRIX_MESR) No Host Access Error has occurred since the last read of the MATRIX_MESR. Position */
#define MATRIX_MESR_MERR3_1                   (MATRIX_MESR_MERR3_1_Val << MATRIX_MESR_MERR3_Pos)   /* (MATRIX_MESR) At least one Host Access Error has occurred since the last read of the MATRIX_MESR. Position */
#define MATRIX_MESR_MERR4_Pos                 _UINT32_(4)                                          /* (MATRIX_MESR) Host 4 Access Error Position */
#define MATRIX_MESR_MERR4_Msk                 (_UINT32_(0x1) << MATRIX_MESR_MERR4_Pos)             /* (MATRIX_MESR) Host 4 Access Error Mask */
#define MATRIX_MESR_MERR4(value)              (MATRIX_MESR_MERR4_Msk & (_UINT32_(value) << MATRIX_MESR_MERR4_Pos)) /* Assignment of value for MERR4 in the MATRIX_MESR register */
#define   MATRIX_MESR_MERR4_0_Val             _UINT32_(0x0)                                        /* (MATRIX_MESR) No Host Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR4_1_Val             _UINT32_(0x1)                                        /* (MATRIX_MESR) At least one Host Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR4_0                   (MATRIX_MESR_MERR4_0_Val << MATRIX_MESR_MERR4_Pos)   /* (MATRIX_MESR) No Host Access Error has occurred since the last read of the MATRIX_MESR. Position */
#define MATRIX_MESR_MERR4_1                   (MATRIX_MESR_MERR4_1_Val << MATRIX_MESR_MERR4_Pos)   /* (MATRIX_MESR) At least one Host Access Error has occurred since the last read of the MATRIX_MESR. Position */
#define MATRIX_MESR_MERR5_Pos                 _UINT32_(5)                                          /* (MATRIX_MESR) Host 5 Access Error Position */
#define MATRIX_MESR_MERR5_Msk                 (_UINT32_(0x1) << MATRIX_MESR_MERR5_Pos)             /* (MATRIX_MESR) Host 5 Access Error Mask */
#define MATRIX_MESR_MERR5(value)              (MATRIX_MESR_MERR5_Msk & (_UINT32_(value) << MATRIX_MESR_MERR5_Pos)) /* Assignment of value for MERR5 in the MATRIX_MESR register */
#define   MATRIX_MESR_MERR5_0_Val             _UINT32_(0x0)                                        /* (MATRIX_MESR) No Host Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR5_1_Val             _UINT32_(0x1)                                        /* (MATRIX_MESR) At least one Host Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR5_0                   (MATRIX_MESR_MERR5_0_Val << MATRIX_MESR_MERR5_Pos)   /* (MATRIX_MESR) No Host Access Error has occurred since the last read of the MATRIX_MESR. Position */
#define MATRIX_MESR_MERR5_1                   (MATRIX_MESR_MERR5_1_Val << MATRIX_MESR_MERR5_Pos)   /* (MATRIX_MESR) At least one Host Access Error has occurred since the last read of the MATRIX_MESR. Position */
#define MATRIX_MESR_MERR6_Pos                 _UINT32_(6)                                          /* (MATRIX_MESR) Host 6 Access Error Position */
#define MATRIX_MESR_MERR6_Msk                 (_UINT32_(0x1) << MATRIX_MESR_MERR6_Pos)             /* (MATRIX_MESR) Host 6 Access Error Mask */
#define MATRIX_MESR_MERR6(value)              (MATRIX_MESR_MERR6_Msk & (_UINT32_(value) << MATRIX_MESR_MERR6_Pos)) /* Assignment of value for MERR6 in the MATRIX_MESR register */
#define   MATRIX_MESR_MERR6_0_Val             _UINT32_(0x0)                                        /* (MATRIX_MESR) No Host Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR6_1_Val             _UINT32_(0x1)                                        /* (MATRIX_MESR) At least one Host Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR6_0                   (MATRIX_MESR_MERR6_0_Val << MATRIX_MESR_MERR6_Pos)   /* (MATRIX_MESR) No Host Access Error has occurred since the last read of the MATRIX_MESR. Position */
#define MATRIX_MESR_MERR6_1                   (MATRIX_MESR_MERR6_1_Val << MATRIX_MESR_MERR6_Pos)   /* (MATRIX_MESR) At least one Host Access Error has occurred since the last read of the MATRIX_MESR. Position */
#define MATRIX_MESR_MERR7_Pos                 _UINT32_(7)                                          /* (MATRIX_MESR) Host 7 Access Error Position */
#define MATRIX_MESR_MERR7_Msk                 (_UINT32_(0x1) << MATRIX_MESR_MERR7_Pos)             /* (MATRIX_MESR) Host 7 Access Error Mask */
#define MATRIX_MESR_MERR7(value)              (MATRIX_MESR_MERR7_Msk & (_UINT32_(value) << MATRIX_MESR_MERR7_Pos)) /* Assignment of value for MERR7 in the MATRIX_MESR register */
#define   MATRIX_MESR_MERR7_0_Val             _UINT32_(0x0)                                        /* (MATRIX_MESR) No Host Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR7_1_Val             _UINT32_(0x1)                                        /* (MATRIX_MESR) At least one Host Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR7_0                   (MATRIX_MESR_MERR7_0_Val << MATRIX_MESR_MERR7_Pos)   /* (MATRIX_MESR) No Host Access Error has occurred since the last read of the MATRIX_MESR. Position */
#define MATRIX_MESR_MERR7_1                   (MATRIX_MESR_MERR7_1_Val << MATRIX_MESR_MERR7_Pos)   /* (MATRIX_MESR) At least one Host Access Error has occurred since the last read of the MATRIX_MESR. Position */
#define MATRIX_MESR_MERR8_Pos                 _UINT32_(8)                                          /* (MATRIX_MESR) Host 8 Access Error Position */
#define MATRIX_MESR_MERR8_Msk                 (_UINT32_(0x1) << MATRIX_MESR_MERR8_Pos)             /* (MATRIX_MESR) Host 8 Access Error Mask */
#define MATRIX_MESR_MERR8(value)              (MATRIX_MESR_MERR8_Msk & (_UINT32_(value) << MATRIX_MESR_MERR8_Pos)) /* Assignment of value for MERR8 in the MATRIX_MESR register */
#define   MATRIX_MESR_MERR8_0_Val             _UINT32_(0x0)                                        /* (MATRIX_MESR) No Host Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR8_1_Val             _UINT32_(0x1)                                        /* (MATRIX_MESR) At least one Host Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR8_0                   (MATRIX_MESR_MERR8_0_Val << MATRIX_MESR_MERR8_Pos)   /* (MATRIX_MESR) No Host Access Error has occurred since the last read of the MATRIX_MESR. Position */
#define MATRIX_MESR_MERR8_1                   (MATRIX_MESR_MERR8_1_Val << MATRIX_MESR_MERR8_Pos)   /* (MATRIX_MESR) At least one Host Access Error has occurred since the last read of the MATRIX_MESR. Position */
#define MATRIX_MESR_MERR9_Pos                 _UINT32_(9)                                          /* (MATRIX_MESR) Host 9 Access Error Position */
#define MATRIX_MESR_MERR9_Msk                 (_UINT32_(0x1) << MATRIX_MESR_MERR9_Pos)             /* (MATRIX_MESR) Host 9 Access Error Mask */
#define MATRIX_MESR_MERR9(value)              (MATRIX_MESR_MERR9_Msk & (_UINT32_(value) << MATRIX_MESR_MERR9_Pos)) /* Assignment of value for MERR9 in the MATRIX_MESR register */
#define   MATRIX_MESR_MERR9_0_Val             _UINT32_(0x0)                                        /* (MATRIX_MESR) No Host Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR9_1_Val             _UINT32_(0x1)                                        /* (MATRIX_MESR) At least one Host Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR9_0                   (MATRIX_MESR_MERR9_0_Val << MATRIX_MESR_MERR9_Pos)   /* (MATRIX_MESR) No Host Access Error has occurred since the last read of the MATRIX_MESR. Position */
#define MATRIX_MESR_MERR9_1                   (MATRIX_MESR_MERR9_1_Val << MATRIX_MESR_MERR9_Pos)   /* (MATRIX_MESR) At least one Host Access Error has occurred since the last read of the MATRIX_MESR. Position */
#define MATRIX_MESR_MERR10_Pos                _UINT32_(10)                                         /* (MATRIX_MESR) Host 10 Access Error Position */
#define MATRIX_MESR_MERR10_Msk                (_UINT32_(0x1) << MATRIX_MESR_MERR10_Pos)            /* (MATRIX_MESR) Host 10 Access Error Mask */
#define MATRIX_MESR_MERR10(value)             (MATRIX_MESR_MERR10_Msk & (_UINT32_(value) << MATRIX_MESR_MERR10_Pos)) /* Assignment of value for MERR10 in the MATRIX_MESR register */
#define   MATRIX_MESR_MERR10_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MESR) No Host Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR10_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MESR) At least one Host Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR10_0                  (MATRIX_MESR_MERR10_0_Val << MATRIX_MESR_MERR10_Pos) /* (MATRIX_MESR) No Host Access Error has occurred since the last read of the MATRIX_MESR. Position */
#define MATRIX_MESR_MERR10_1                  (MATRIX_MESR_MERR10_1_Val << MATRIX_MESR_MERR10_Pos) /* (MATRIX_MESR) At least one Host Access Error has occurred since the last read of the MATRIX_MESR. Position */
#define MATRIX_MESR_MERR11_Pos                _UINT32_(11)                                         /* (MATRIX_MESR) Host 11 Access Error Position */
#define MATRIX_MESR_MERR11_Msk                (_UINT32_(0x1) << MATRIX_MESR_MERR11_Pos)            /* (MATRIX_MESR) Host 11 Access Error Mask */
#define MATRIX_MESR_MERR11(value)             (MATRIX_MESR_MERR11_Msk & (_UINT32_(value) << MATRIX_MESR_MERR11_Pos)) /* Assignment of value for MERR11 in the MATRIX_MESR register */
#define   MATRIX_MESR_MERR11_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MESR) No Host Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR11_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MESR) At least one Host Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR11_0                  (MATRIX_MESR_MERR11_0_Val << MATRIX_MESR_MERR11_Pos) /* (MATRIX_MESR) No Host Access Error has occurred since the last read of the MATRIX_MESR. Position */
#define MATRIX_MESR_MERR11_1                  (MATRIX_MESR_MERR11_1_Val << MATRIX_MESR_MERR11_Pos) /* (MATRIX_MESR) At least one Host Access Error has occurred since the last read of the MATRIX_MESR. Position */
#define MATRIX_MESR_MERR12_Pos                _UINT32_(12)                                         /* (MATRIX_MESR) Host 12 Access Error Position */
#define MATRIX_MESR_MERR12_Msk                (_UINT32_(0x1) << MATRIX_MESR_MERR12_Pos)            /* (MATRIX_MESR) Host 12 Access Error Mask */
#define MATRIX_MESR_MERR12(value)             (MATRIX_MESR_MERR12_Msk & (_UINT32_(value) << MATRIX_MESR_MERR12_Pos)) /* Assignment of value for MERR12 in the MATRIX_MESR register */
#define   MATRIX_MESR_MERR12_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MESR) No Host Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR12_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MESR) At least one Host Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR12_0                  (MATRIX_MESR_MERR12_0_Val << MATRIX_MESR_MERR12_Pos) /* (MATRIX_MESR) No Host Access Error has occurred since the last read of the MATRIX_MESR. Position */
#define MATRIX_MESR_MERR12_1                  (MATRIX_MESR_MERR12_1_Val << MATRIX_MESR_MERR12_Pos) /* (MATRIX_MESR) At least one Host Access Error has occurred since the last read of the MATRIX_MESR. Position */
#define MATRIX_MESR_MERR13_Pos                _UINT32_(13)                                         /* (MATRIX_MESR) Host 13 Access Error Position */
#define MATRIX_MESR_MERR13_Msk                (_UINT32_(0x1) << MATRIX_MESR_MERR13_Pos)            /* (MATRIX_MESR) Host 13 Access Error Mask */
#define MATRIX_MESR_MERR13(value)             (MATRIX_MESR_MERR13_Msk & (_UINT32_(value) << MATRIX_MESR_MERR13_Pos)) /* Assignment of value for MERR13 in the MATRIX_MESR register */
#define   MATRIX_MESR_MERR13_0_Val            _UINT32_(0x0)                                        /* (MATRIX_MESR) No Host Access Error has occurred since the last read of the MATRIX_MESR.  */
#define   MATRIX_MESR_MERR13_1_Val            _UINT32_(0x1)                                        /* (MATRIX_MESR) At least one Host Access Error has occurred since the last read of the MATRIX_MESR.  */
#define MATRIX_MESR_MERR13_0                  (MATRIX_MESR_MERR13_0_Val << MATRIX_MESR_MERR13_Pos) /* (MATRIX_MESR) No Host Access Error has occurred since the last read of the MATRIX_MESR. Position */
#define MATRIX_MESR_MERR13_1                  (MATRIX_MESR_MERR13_1_Val << MATRIX_MESR_MERR13_Pos) /* (MATRIX_MESR) At least one Host Access Error has occurred since the last read of the MATRIX_MESR. Position */
#define MATRIX_MESR_Msk                       _UINT32_(0x00003FFF)                                 /* (MATRIX_MESR) Register Mask  */

#define MATRIX_MESR_MERR_Pos                  _UINT32_(0)                                          /* (MATRIX_MESR Position) Host x3 Access Error */
#define MATRIX_MESR_MERR_Msk                  (_UINT32_(0x3FFF) << MATRIX_MESR_MERR_Pos)           /* (MATRIX_MESR Mask) MERR */
#define MATRIX_MESR_MERR(value)               (MATRIX_MESR_MERR_Msk & (_UINT32_(value) << MATRIX_MESR_MERR_Pos)) 

/* -------- MATRIX_MEAR : (MATRIX Offset: 0x160) ( R/ 32) Host x Error Address Register -------- */
#define MATRIX_MEAR_RESETVALUE                _UINT32_(0x00)                                       /*  (MATRIX_MEAR) Host x Error Address Register  Reset Value */

#define MATRIX_MEAR_ERRADD_Pos                _UINT32_(0)                                          /* (MATRIX_MEAR) Host Error Address Position */
#define MATRIX_MEAR_ERRADD_Msk                (_UINT32_(0xFFFFFFFF) << MATRIX_MEAR_ERRADD_Pos)     /* (MATRIX_MEAR) Host Error Address Mask */
#define MATRIX_MEAR_ERRADD(value)             (MATRIX_MEAR_ERRADD_Msk & (_UINT32_(value) << MATRIX_MEAR_ERRADD_Pos)) /* Assignment of value for ERRADD in the MATRIX_MEAR register */
#define MATRIX_MEAR_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (MATRIX_MEAR) Register Mask  */


/* -------- MATRIX_WPMR : (MATRIX Offset: 0x1E4) (R/W 32) Write Protect Mode Register -------- */
#define MATRIX_WPMR_RESETVALUE                _UINT32_(0x00)                                       /*  (MATRIX_WPMR) Write Protect Mode Register  Reset Value */

#define MATRIX_WPMR_WPEN_Pos                  _UINT32_(0)                                          /* (MATRIX_WPMR) Write Protection Enable Position */
#define MATRIX_WPMR_WPEN_Msk                  (_UINT32_(0x1) << MATRIX_WPMR_WPEN_Pos)              /* (MATRIX_WPMR) Write Protection Enable Mask */
#define MATRIX_WPMR_WPEN(value)               (MATRIX_WPMR_WPEN_Msk & (_UINT32_(value) << MATRIX_WPMR_WPEN_Pos)) /* Assignment of value for WPEN in the MATRIX_WPMR register */
#define   MATRIX_WPMR_WPEN_0_Val              _UINT32_(0x0)                                        /* (MATRIX_WPMR) Disables the write protection if WPKEY corresponds to 0x4D4154 ("MAT" in ASCII).  */
#define   MATRIX_WPMR_WPEN_1_Val              _UINT32_(0x1)                                        /* (MATRIX_WPMR) Enables the write protection if WPKEY corresponds to 0x4D4154 ("MAT" in ASCII).  */
#define MATRIX_WPMR_WPEN_0                    (MATRIX_WPMR_WPEN_0_Val << MATRIX_WPMR_WPEN_Pos)     /* (MATRIX_WPMR) Disables the write protection if WPKEY corresponds to 0x4D4154 ("MAT" in ASCII). Position */
#define MATRIX_WPMR_WPEN_1                    (MATRIX_WPMR_WPEN_1_Val << MATRIX_WPMR_WPEN_Pos)     /* (MATRIX_WPMR) Enables the write protection if WPKEY corresponds to 0x4D4154 ("MAT" in ASCII). Position */
#define MATRIX_WPMR_CFGFRZ_Pos                _UINT32_(7)                                          /* (MATRIX_WPMR) Configuration Freeze Position */
#define MATRIX_WPMR_CFGFRZ_Msk                (_UINT32_(0x1) << MATRIX_WPMR_CFGFRZ_Pos)            /* (MATRIX_WPMR) Configuration Freeze Mask */
#define MATRIX_WPMR_CFGFRZ(value)             (MATRIX_WPMR_CFGFRZ_Msk & (_UINT32_(value) << MATRIX_WPMR_CFGFRZ_Pos)) /* Assignment of value for CFGFRZ in the MATRIX_WPMR register */
#define   MATRIX_WPMR_CFGFRZ_0_Val            _UINT32_(0x0)                                        /* (MATRIX_WPMR) The MATRIX configuration is not frozen.  */
#define   MATRIX_WPMR_CFGFRZ_1_Val            _UINT32_(0x1)                                        /* (MATRIX_WPMR) Freezes the MATRIX configuration until hardware reset. The registers that can be protected by the WPEN bit and the Write Protection Mode Register are no longer modifiable.  */
#define MATRIX_WPMR_CFGFRZ_0                  (MATRIX_WPMR_CFGFRZ_0_Val << MATRIX_WPMR_CFGFRZ_Pos) /* (MATRIX_WPMR) The MATRIX configuration is not frozen. Position */
#define MATRIX_WPMR_CFGFRZ_1                  (MATRIX_WPMR_CFGFRZ_1_Val << MATRIX_WPMR_CFGFRZ_Pos) /* (MATRIX_WPMR) Freezes the MATRIX configuration until hardware reset. The registers that can be protected by the WPEN bit and the Write Protection Mode Register are no longer modifiable. Position */
#define MATRIX_WPMR_WPKEY_Pos                 _UINT32_(8)                                          /* (MATRIX_WPMR) Write Protection Key Position */
#define MATRIX_WPMR_WPKEY_Msk                 (_UINT32_(0xFFFFFF) << MATRIX_WPMR_WPKEY_Pos)        /* (MATRIX_WPMR) Write Protection Key Mask */
#define MATRIX_WPMR_WPKEY(value)              (MATRIX_WPMR_WPKEY_Msk & (_UINT32_(value) << MATRIX_WPMR_WPKEY_Pos)) /* Assignment of value for WPKEY in the MATRIX_WPMR register */
#define   MATRIX_WPMR_WPKEY_PASSWD_Val        _UINT32_(0x4D4154)                                   /* (MATRIX_WPMR) Writing any other value in this field aborts the write operation of the WPEN and CFGFRZ bits. Always reads as 0.  */
#define MATRIX_WPMR_WPKEY_PASSWD              (MATRIX_WPMR_WPKEY_PASSWD_Val << MATRIX_WPMR_WPKEY_Pos) /* (MATRIX_WPMR) Writing any other value in this field aborts the write operation of the WPEN and CFGFRZ bits. Always reads as 0. Position */
#define MATRIX_WPMR_Msk                       _UINT32_(0xFFFFFF81)                                 /* (MATRIX_WPMR) Register Mask  */


/* -------- MATRIX_WPSR : (MATRIX Offset: 0x1E8) ( R/ 32) Write Protect Status Register -------- */
#define MATRIX_WPSR_RESETVALUE                _UINT32_(0x00)                                       /*  (MATRIX_WPSR) Write Protect Status Register  Reset Value */

#define MATRIX_WPSR_WPVS_Pos                  _UINT32_(0)                                          /* (MATRIX_WPSR) Write Protection Violation Status Position */
#define MATRIX_WPSR_WPVS_Msk                  (_UINT32_(0x1) << MATRIX_WPSR_WPVS_Pos)              /* (MATRIX_WPSR) Write Protection Violation Status Mask */
#define MATRIX_WPSR_WPVS(value)               (MATRIX_WPSR_WPVS_Msk & (_UINT32_(value) << MATRIX_WPSR_WPVS_Pos)) /* Assignment of value for WPVS in the MATRIX_WPSR register */
#define   MATRIX_WPSR_WPVS_0_Val              _UINT32_(0x0)                                        /* (MATRIX_WPSR) No write protection violation has occurred since the last write of the MATRIX_WPMR.  */
#define   MATRIX_WPSR_WPVS_1_Val              _UINT32_(0x1)                                        /* (MATRIX_WPSR) A write protection violation has occurred since the last write of the MATRIX_WPMR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPVSRC.  */
#define MATRIX_WPSR_WPVS_0                    (MATRIX_WPSR_WPVS_0_Val << MATRIX_WPSR_WPVS_Pos)     /* (MATRIX_WPSR) No write protection violation has occurred since the last write of the MATRIX_WPMR. Position */
#define MATRIX_WPSR_WPVS_1                    (MATRIX_WPSR_WPVS_1_Val << MATRIX_WPSR_WPVS_Pos)     /* (MATRIX_WPSR) A write protection violation has occurred since the last write of the MATRIX_WPMR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPVSRC. Position */
#define MATRIX_WPSR_WPVSRC_Pos                _UINT32_(8)                                          /* (MATRIX_WPSR) Write Protection Violation Source Position */
#define MATRIX_WPSR_WPVSRC_Msk                (_UINT32_(0xFFFF) << MATRIX_WPSR_WPVSRC_Pos)         /* (MATRIX_WPSR) Write Protection Violation Source Mask */
#define MATRIX_WPSR_WPVSRC(value)             (MATRIX_WPSR_WPVSRC_Msk & (_UINT32_(value) << MATRIX_WPSR_WPVSRC_Pos)) /* Assignment of value for WPVSRC in the MATRIX_WPSR register */
#define MATRIX_WPSR_Msk                       _UINT32_(0x00FFFF01)                                 /* (MATRIX_WPSR) Register Mask  */


/* MATRIX register offsets definitions */
#define MATRIX_PRAS_REG_OFST           _UINT32_(0x00)      /* (MATRIX_PRAS) Priority Register A for Client x Offset */
#define MATRIX_PRBS_REG_OFST           _UINT32_(0x04)      /* (MATRIX_PRBS) Priority Register B for Client x Offset */
#define MATRIX_MCFG_REG_OFST           _UINT32_(0x00)      /* (MATRIX_MCFG) Host Configuration Register x Offset */
#define MATRIX_MCFG0_REG_OFST          _UINT32_(0x00)      /* (MATRIX_MCFG0) Host Configuration Register x Offset */
#define MATRIX_MCFG1_REG_OFST          _UINT32_(0x04)      /* (MATRIX_MCFG1) Host Configuration Register x Offset */
#define MATRIX_MCFG2_REG_OFST          _UINT32_(0x08)      /* (MATRIX_MCFG2) Host Configuration Register x Offset */
#define MATRIX_MCFG3_REG_OFST          _UINT32_(0x0C)      /* (MATRIX_MCFG3) Host Configuration Register x Offset */
#define MATRIX_MCFG4_REG_OFST          _UINT32_(0x10)      /* (MATRIX_MCFG4) Host Configuration Register x Offset */
#define MATRIX_MCFG5_REG_OFST          _UINT32_(0x14)      /* (MATRIX_MCFG5) Host Configuration Register x Offset */
#define MATRIX_MCFG6_REG_OFST          _UINT32_(0x18)      /* (MATRIX_MCFG6) Host Configuration Register x Offset */
#define MATRIX_MCFG7_REG_OFST          _UINT32_(0x1C)      /* (MATRIX_MCFG7) Host Configuration Register x Offset */
#define MATRIX_MCFG8_REG_OFST          _UINT32_(0x20)      /* (MATRIX_MCFG8) Host Configuration Register x Offset */
#define MATRIX_MCFG9_REG_OFST          _UINT32_(0x24)      /* (MATRIX_MCFG9) Host Configuration Register x Offset */
#define MATRIX_MCFG10_REG_OFST         _UINT32_(0x28)      /* (MATRIX_MCFG10) Host Configuration Register x Offset */
#define MATRIX_MCFG11_REG_OFST         _UINT32_(0x2C)      /* (MATRIX_MCFG11) Host Configuration Register x Offset */
#define MATRIX_MCFG12_REG_OFST         _UINT32_(0x30)      /* (MATRIX_MCFG12) Host Configuration Register x Offset */
#define MATRIX_MCFG13_REG_OFST         _UINT32_(0x34)      /* (MATRIX_MCFG13) Host Configuration Register x Offset */
#define MATRIX_SCFG_REG_OFST           _UINT32_(0x40)      /* (MATRIX_SCFG) Client Configuration Register x Offset */
#define MATRIX_SCFG0_REG_OFST          _UINT32_(0x40)      /* (MATRIX_SCFG0) Client Configuration Register x Offset */
#define MATRIX_SCFG1_REG_OFST          _UINT32_(0x44)      /* (MATRIX_SCFG1) Client Configuration Register x Offset */
#define MATRIX_SCFG2_REG_OFST          _UINT32_(0x48)      /* (MATRIX_SCFG2) Client Configuration Register x Offset */
#define MATRIX_SCFG3_REG_OFST          _UINT32_(0x4C)      /* (MATRIX_SCFG3) Client Configuration Register x Offset */
#define MATRIX_SCFG4_REG_OFST          _UINT32_(0x50)      /* (MATRIX_SCFG4) Client Configuration Register x Offset */
#define MATRIX_SCFG5_REG_OFST          _UINT32_(0x54)      /* (MATRIX_SCFG5) Client Configuration Register x Offset */
#define MATRIX_SCFG6_REG_OFST          _UINT32_(0x58)      /* (MATRIX_SCFG6) Client Configuration Register x Offset */
#define MATRIX_SCFG7_REG_OFST          _UINT32_(0x5C)      /* (MATRIX_SCFG7) Client Configuration Register x Offset */
#define MATRIX_SCFG8_REG_OFST          _UINT32_(0x60)      /* (MATRIX_SCFG8) Client Configuration Register x Offset */
#define MATRIX_SCFG9_REG_OFST          _UINT32_(0x64)      /* (MATRIX_SCFG9) Client Configuration Register x Offset */
#define MATRIX_SCFG10_REG_OFST         _UINT32_(0x68)      /* (MATRIX_SCFG10) Client Configuration Register x Offset */
#define MATRIX_SCFG11_REG_OFST         _UINT32_(0x6C)      /* (MATRIX_SCFG11) Client Configuration Register x Offset */
#define MATRIX_MRCR_REG_OFST           _UINT32_(0x100)     /* (MATRIX_MRCR) Host Remap Control Register Offset */
#define MATRIX_MEIER_REG_OFST          _UINT32_(0x150)     /* (MATRIX_MEIER) Host Error Interrupt Enable Register Offset */
#define MATRIX_MEIDR_REG_OFST          _UINT32_(0x154)     /* (MATRIX_MEIDR) Host Error Interrupt Disable Register Offset */
#define MATRIX_MEIMR_REG_OFST          _UINT32_(0x158)     /* (MATRIX_MEIMR) Host Error Interrupt Mask Register Offset */
#define MATRIX_MESR_REG_OFST           _UINT32_(0x15C)     /* (MATRIX_MESR) Host Error Status Register Offset */
#define MATRIX_MEAR_REG_OFST           _UINT32_(0x160)     /* (MATRIX_MEAR) Host x Error Address Register Offset */
#define MATRIX_MEAR0_REG_OFST          _UINT32_(0x160)     /* (MATRIX_MEAR0) Host x Error Address Register Offset */
#define MATRIX_MEAR1_REG_OFST          _UINT32_(0x164)     /* (MATRIX_MEAR1) Host x Error Address Register Offset */
#define MATRIX_MEAR2_REG_OFST          _UINT32_(0x168)     /* (MATRIX_MEAR2) Host x Error Address Register Offset */
#define MATRIX_MEAR3_REG_OFST          _UINT32_(0x16C)     /* (MATRIX_MEAR3) Host x Error Address Register Offset */
#define MATRIX_MEAR4_REG_OFST          _UINT32_(0x170)     /* (MATRIX_MEAR4) Host x Error Address Register Offset */
#define MATRIX_MEAR5_REG_OFST          _UINT32_(0x174)     /* (MATRIX_MEAR5) Host x Error Address Register Offset */
#define MATRIX_MEAR6_REG_OFST          _UINT32_(0x178)     /* (MATRIX_MEAR6) Host x Error Address Register Offset */
#define MATRIX_MEAR7_REG_OFST          _UINT32_(0x17C)     /* (MATRIX_MEAR7) Host x Error Address Register Offset */
#define MATRIX_MEAR8_REG_OFST          _UINT32_(0x180)     /* (MATRIX_MEAR8) Host x Error Address Register Offset */
#define MATRIX_MEAR9_REG_OFST          _UINT32_(0x184)     /* (MATRIX_MEAR9) Host x Error Address Register Offset */
#define MATRIX_MEAR10_REG_OFST         _UINT32_(0x188)     /* (MATRIX_MEAR10) Host x Error Address Register Offset */
#define MATRIX_MEAR11_REG_OFST         _UINT32_(0x18C)     /* (MATRIX_MEAR11) Host x Error Address Register Offset */
#define MATRIX_MEAR12_REG_OFST         _UINT32_(0x190)     /* (MATRIX_MEAR12) Host x Error Address Register Offset */
#define MATRIX_MEAR13_REG_OFST         _UINT32_(0x194)     /* (MATRIX_MEAR13) Host x Error Address Register Offset */
#define MATRIX_WPMR_REG_OFST           _UINT32_(0x1E4)     /* (MATRIX_WPMR) Write Protect Mode Register Offset */
#define MATRIX_WPSR_REG_OFST           _UINT32_(0x1E8)     /* (MATRIX_WPSR) Write Protect Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* MATRIX_PR register API structure */
typedef struct
{
  __IO  uint32_t                       MATRIX_PRAS;        /* Offset: 0x00 (R/W  32) Priority Register A for Client x */
  __IO  uint32_t                       MATRIX_PRBS;        /* Offset: 0x04 (R/W  32) Priority Register B for Client x */
} matrix_pr_registers_t;

#define MATRIX_PR_NUMBER 12

/* MATRIX register API structure */
typedef struct
{  /* AHB Bus Matrix (MATRIX2) */
  __IO  uint32_t                       MATRIX_MCFG[14];    /* Offset: 0x00 (R/W  32) Host Configuration Register x */
  __I   uint8_t                        Reserved1[0x08];
  __IO  uint32_t                       MATRIX_SCFG[12];    /* Offset: 0x40 (R/W  32) Client Configuration Register x */
  __I   uint8_t                        Reserved2[0x10];
        matrix_pr_registers_t          MATRIX_PR[MATRIX_PR_NUMBER]; /* Offset: 0x80  */
  __I   uint8_t                        Reserved3[0x20];
  __IO  uint32_t                       MATRIX_MRCR;        /* Offset: 0x100 (R/W  32) Host Remap Control Register */
  __I   uint8_t                        Reserved4[0x4C];
  __O   uint32_t                       MATRIX_MEIER;       /* Offset: 0x150 ( /W  32) Host Error Interrupt Enable Register */
  __O   uint32_t                       MATRIX_MEIDR;       /* Offset: 0x154 ( /W  32) Host Error Interrupt Disable Register */
  __I   uint32_t                       MATRIX_MEIMR;       /* Offset: 0x158 (R/   32) Host Error Interrupt Mask Register */
  __I   uint32_t                       MATRIX_MESR;        /* Offset: 0x15C (R/   32) Host Error Status Register */
  __I   uint32_t                       MATRIX_MEAR[14];    /* Offset: 0x160 (R/   32) Host x Error Address Register */
  __I   uint8_t                        Reserved5[0x4C];
  __IO  uint32_t                       MATRIX_WPMR;        /* Offset: 0x1E4 (R/W  32) Write Protect Mode Register */
  __I   uint32_t                       MATRIX_WPSR;        /* Offset: 0x1E8 (R/   32) Write Protect Status Register */
} matrix_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAM9X7_MATRIX_COMPONENT_H_ */
