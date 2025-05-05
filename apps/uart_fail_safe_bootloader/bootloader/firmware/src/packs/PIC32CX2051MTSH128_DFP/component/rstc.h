/*
 * Component description for RSTC
 *
 * Copyright (c) 2023 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description file (ATDF) version 2023-12-19T08:59:38Z */
#ifndef _PIC32CXMTSH_RSTC_COMPONENT_H_
#define _PIC32CXMTSH_RSTC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR RSTC                                         */
/* ************************************************************************** */

/* -------- RSTC_CR : (RSTC Offset: 0x00) ( /W 32) Control Register -------- */
#define RSTC_CR_PROCRST_Pos                   _UINT32_(0)                                          /* (RSTC_CR) Processor Reset Position */
#define RSTC_CR_PROCRST_Msk                   (_UINT32_(0x1) << RSTC_CR_PROCRST_Pos)               /* (RSTC_CR) Processor Reset Mask */
#define RSTC_CR_PROCRST(value)                (RSTC_CR_PROCRST_Msk & (_UINT32_(value) << RSTC_CR_PROCRST_Pos)) /* Assigment of value for PROCRST in the RSTC_CR register */
#define RSTC_CR_PERRST_Pos                    _UINT32_(2)                                          /* (RSTC_CR) Peripheral Reset Position */
#define RSTC_CR_PERRST_Msk                    (_UINT32_(0x1) << RSTC_CR_PERRST_Pos)                /* (RSTC_CR) Peripheral Reset Mask */
#define RSTC_CR_PERRST(value)                 (RSTC_CR_PERRST_Msk & (_UINT32_(value) << RSTC_CR_PERRST_Pos)) /* Assigment of value for PERRST in the RSTC_CR register */
#define RSTC_CR_EXTRST_Pos                    _UINT32_(3)                                          /* (RSTC_CR) External Reset Position */
#define RSTC_CR_EXTRST_Msk                    (_UINT32_(0x1) << RSTC_CR_EXTRST_Pos)                /* (RSTC_CR) External Reset Mask */
#define RSTC_CR_EXTRST(value)                 (RSTC_CR_EXTRST_Msk & (_UINT32_(value) << RSTC_CR_EXTRST_Pos)) /* Assigment of value for EXTRST in the RSTC_CR register */
#define RSTC_CR_KEY_Pos                       _UINT32_(24)                                         /* (RSTC_CR) System Reset Key Position */
#define RSTC_CR_KEY_Msk                       (_UINT32_(0xFF) << RSTC_CR_KEY_Pos)                  /* (RSTC_CR) System Reset Key Mask */
#define RSTC_CR_KEY(value)                    (RSTC_CR_KEY_Msk & (_UINT32_(value) << RSTC_CR_KEY_Pos)) /* Assigment of value for KEY in the RSTC_CR register */
#define   RSTC_CR_KEY_PASSWD_Val              _UINT32_(0xA5)                                       /* (RSTC_CR) Writing any other value in this field aborts the write operation.  */
#define RSTC_CR_KEY_PASSWD                    (RSTC_CR_KEY_PASSWD_Val << RSTC_CR_KEY_Pos)          /* (RSTC_CR) Writing any other value in this field aborts the write operation. Position  */
#define RSTC_CR_Msk                           _UINT32_(0xFF00000D)                                 /* (RSTC_CR) Register Mask  */


/* -------- RSTC_SR : (RSTC Offset: 0x04) ( R/ 32) Status Register -------- */
#define RSTC_SR_URSTS_Pos                     _UINT32_(0)                                          /* (RSTC_SR) User Reset Status (cleared on read) Position */
#define RSTC_SR_URSTS_Msk                     (_UINT32_(0x1) << RSTC_SR_URSTS_Pos)                 /* (RSTC_SR) User Reset Status (cleared on read) Mask */
#define RSTC_SR_URSTS(value)                  (RSTC_SR_URSTS_Msk & (_UINT32_(value) << RSTC_SR_URSTS_Pos)) /* Assigment of value for URSTS in the RSTC_SR register */
#define RSTC_SR_CORESMS_Pos                   _UINT32_(1)                                          /* (RSTC_SR) VDDCORE Supply Monitor Reset Flag Status (cleared on read) Position */
#define RSTC_SR_CORESMS_Msk                   (_UINT32_(0x1) << RSTC_SR_CORESMS_Pos)               /* (RSTC_SR) VDDCORE Supply Monitor Reset Flag Status (cleared on read) Mask */
#define RSTC_SR_CORESMS(value)                (RSTC_SR_CORESMS_Msk & (_UINT32_(value) << RSTC_SR_CORESMS_Pos)) /* Assigment of value for CORESMS in the RSTC_SR register */
#define RSTC_SR_RSTTYP_Pos                    _UINT32_(8)                                          /* (RSTC_SR) Reset Type Position */
#define RSTC_SR_RSTTYP_Msk                    (_UINT32_(0xF) << RSTC_SR_RSTTYP_Pos)                /* (RSTC_SR) Reset Type Mask */
#define RSTC_SR_RSTTYP(value)                 (RSTC_SR_RSTTYP_Msk & (_UINT32_(value) << RSTC_SR_RSTTYP_Pos)) /* Assigment of value for RSTTYP in the RSTC_SR register */
#define   RSTC_SR_RSTTYP_GENERAL_RST_Val      _UINT32_(0x0)                                        /* (RSTC_SR) First power-up reset, Core and VDD3V3 Supply Monitor if not a PORVDD3V3 reset  */
#define   RSTC_SR_RSTTYP_BACKUP_RST_Val       _UINT32_(0x1)                                        /* (RSTC_SR) VDDCORE reset. Wake-up from Backup mode  */
#define   RSTC_SR_RSTTYP_WDT0_RST_Val         _UINT32_(0x2)                                        /* (RSTC_SR) Watchdog 0 fault occurred  */
#define   RSTC_SR_RSTTYP_SOFT_RST_Val         _UINT32_(0x3)                                        /* (RSTC_SR) Processor reset required by the software  */
#define   RSTC_SR_RSTTYP_USER_RST_Val         _UINT32_(0x4)                                        /* (RSTC_SR) NRST pin detected low  */
#define   RSTC_SR_RSTTYP_CORE_SM_RST_Val      _UINT32_(0x5)                                        /* (RSTC_SR) Core Supply Monitor reset  */
#define   RSTC_SR_RSTTYP_CPU_FAIL_RST_Val     _UINT32_(0x6)                                        /* (RSTC_SR) CPU clock failure detection occurred  */
#define   RSTC_SR_RSTTYP_SLCK_XTAL_RST_Val    _UINT32_(0x7)                                        /* (RSTC_SR) 32.768 kHz crystal failure detection fault occurred  */
#define   RSTC_SR_RSTTYP_WDT1_RST_Val         _UINT32_(0x9)                                        /* (RSTC_SR) Watchdog 1 fault occurred  */
#define   RSTC_SR_RSTTYP_PORVDD3V3_RST_Val    _UINT32_(0xA)                                        /* (RSTC_SR) VDD3V3 PORVDD3V3 reset occurred  */
#define RSTC_SR_RSTTYP_GENERAL_RST            (RSTC_SR_RSTTYP_GENERAL_RST_Val << RSTC_SR_RSTTYP_Pos) /* (RSTC_SR) First power-up reset, Core and VDD3V3 Supply Monitor if not a PORVDD3V3 reset Position  */
#define RSTC_SR_RSTTYP_BACKUP_RST             (RSTC_SR_RSTTYP_BACKUP_RST_Val << RSTC_SR_RSTTYP_Pos) /* (RSTC_SR) VDDCORE reset. Wake-up from Backup mode Position  */
#define RSTC_SR_RSTTYP_WDT0_RST               (RSTC_SR_RSTTYP_WDT0_RST_Val << RSTC_SR_RSTTYP_Pos)  /* (RSTC_SR) Watchdog 0 fault occurred Position  */
#define RSTC_SR_RSTTYP_SOFT_RST               (RSTC_SR_RSTTYP_SOFT_RST_Val << RSTC_SR_RSTTYP_Pos)  /* (RSTC_SR) Processor reset required by the software Position  */
#define RSTC_SR_RSTTYP_USER_RST               (RSTC_SR_RSTTYP_USER_RST_Val << RSTC_SR_RSTTYP_Pos)  /* (RSTC_SR) NRST pin detected low Position  */
#define RSTC_SR_RSTTYP_CORE_SM_RST            (RSTC_SR_RSTTYP_CORE_SM_RST_Val << RSTC_SR_RSTTYP_Pos) /* (RSTC_SR) Core Supply Monitor reset Position  */
#define RSTC_SR_RSTTYP_CPU_FAIL_RST           (RSTC_SR_RSTTYP_CPU_FAIL_RST_Val << RSTC_SR_RSTTYP_Pos) /* (RSTC_SR) CPU clock failure detection occurred Position  */
#define RSTC_SR_RSTTYP_SLCK_XTAL_RST          (RSTC_SR_RSTTYP_SLCK_XTAL_RST_Val << RSTC_SR_RSTTYP_Pos) /* (RSTC_SR) 32.768 kHz crystal failure detection fault occurred Position  */
#define RSTC_SR_RSTTYP_WDT1_RST               (RSTC_SR_RSTTYP_WDT1_RST_Val << RSTC_SR_RSTTYP_Pos)  /* (RSTC_SR) Watchdog 1 fault occurred Position  */
#define RSTC_SR_RSTTYP_PORVDD3V3_RST          (RSTC_SR_RSTTYP_PORVDD3V3_RST_Val << RSTC_SR_RSTTYP_Pos) /* (RSTC_SR) VDD3V3 PORVDD3V3 reset occurred Position  */
#define RSTC_SR_NRSTL_Pos                     _UINT32_(16)                                         /* (RSTC_SR) NRST Pin Level Position */
#define RSTC_SR_NRSTL_Msk                     (_UINT32_(0x1) << RSTC_SR_NRSTL_Pos)                 /* (RSTC_SR) NRST Pin Level Mask */
#define RSTC_SR_NRSTL(value)                  (RSTC_SR_NRSTL_Msk & (_UINT32_(value) << RSTC_SR_NRSTL_Pos)) /* Assigment of value for NRSTL in the RSTC_SR register */
#define RSTC_SR_SRCMP_Pos                     _UINT32_(17)                                         /* (RSTC_SR) Software Reset Command in Progress Position */
#define RSTC_SR_SRCMP_Msk                     (_UINT32_(0x1) << RSTC_SR_SRCMP_Pos)                 /* (RSTC_SR) Software Reset Command in Progress Mask */
#define RSTC_SR_SRCMP(value)                  (RSTC_SR_SRCMP_Msk & (_UINT32_(value) << RSTC_SR_SRCMP_Pos)) /* Assigment of value for SRCMP in the RSTC_SR register */
#define RSTC_SR_Msk                           _UINT32_(0x00030F03)                                 /* (RSTC_SR) Register Mask  */


/* -------- RSTC_MR : (RSTC Offset: 0x08) (R/W 32) Mode Register -------- */
#define RSTC_MR_RESETVALUE                    _UINT32_(0xF5)                                       /*  (RSTC_MR) Mode Register  Reset Value */

#define RSTC_MR_URSTEN_Pos                    _UINT32_(0)                                          /* (RSTC_MR) User Reset Enable Position */
#define RSTC_MR_URSTEN_Msk                    (_UINT32_(0x1) << RSTC_MR_URSTEN_Pos)                /* (RSTC_MR) User Reset Enable Mask */
#define RSTC_MR_URSTEN(value)                 (RSTC_MR_URSTEN_Msk & (_UINT32_(value) << RSTC_MR_URSTEN_Pos)) /* Assigment of value for URSTEN in the RSTC_MR register */
#define RSTC_MR_SCKSW_Pos                     _UINT32_(1)                                          /* (RSTC_MR) Slow Clock Switching Position */
#define RSTC_MR_SCKSW_Msk                     (_UINT32_(0x1) << RSTC_MR_SCKSW_Pos)                 /* (RSTC_MR) Slow Clock Switching Mask */
#define RSTC_MR_SCKSW(value)                  (RSTC_MR_SCKSW_Msk & (_UINT32_(value) << RSTC_MR_SCKSW_Pos)) /* Assigment of value for SCKSW in the RSTC_MR register */
#define RSTC_MR_URSTASYNC_Pos                 _UINT32_(2)                                          /* (RSTC_MR) User Reset Asynchronous Control Position */
#define RSTC_MR_URSTASYNC_Msk                 (_UINT32_(0x1) << RSTC_MR_URSTASYNC_Pos)             /* (RSTC_MR) User Reset Asynchronous Control Mask */
#define RSTC_MR_URSTASYNC(value)              (RSTC_MR_URSTASYNC_Msk & (_UINT32_(value) << RSTC_MR_URSTASYNC_Pos)) /* Assigment of value for URSTASYNC in the RSTC_MR register */
#define RSTC_MR_CPUFEN_Pos                    _UINT32_(3)                                          /* (RSTC_MR) CPU Fail Enable Position */
#define RSTC_MR_CPUFEN_Msk                    (_UINT32_(0x1) << RSTC_MR_CPUFEN_Pos)                /* (RSTC_MR) CPU Fail Enable Mask */
#define RSTC_MR_CPUFEN(value)                 (RSTC_MR_CPUFEN_Msk & (_UINT32_(value) << RSTC_MR_CPUFEN_Pos)) /* Assigment of value for CPUFEN in the RSTC_MR register */
#define RSTC_MR_URSTIEN_Pos                   _UINT32_(4)                                          /* (RSTC_MR) User Reset Interrupt Enable Position */
#define RSTC_MR_URSTIEN_Msk                   (_UINT32_(0x1) << RSTC_MR_URSTIEN_Pos)               /* (RSTC_MR) User Reset Interrupt Enable Mask */
#define RSTC_MR_URSTIEN(value)                (RSTC_MR_URSTIEN_Msk & (_UINT32_(value) << RSTC_MR_URSTIEN_Pos)) /* Assigment of value for URSTIEN in the RSTC_MR register */
#define RSTC_MR_SFTPMCRS_Pos                  _UINT32_(5)                                          /* (RSTC_MR) Software PMC Reset Position */
#define RSTC_MR_SFTPMCRS_Msk                  (_UINT32_(0x1) << RSTC_MR_SFTPMCRS_Pos)              /* (RSTC_MR) Software PMC Reset Mask */
#define RSTC_MR_SFTPMCRS(value)               (RSTC_MR_SFTPMCRS_Msk & (_UINT32_(value) << RSTC_MR_SFTPMCRS_Pos)) /* Assigment of value for SFTPMCRS in the RSTC_MR register */
#define RSTC_MR_WDTPMC0_Pos                   _UINT32_(6)                                          /* (RSTC_MR) WDT0 PMC Reset Position */
#define RSTC_MR_WDTPMC0_Msk                   (_UINT32_(0x1) << RSTC_MR_WDTPMC0_Pos)               /* (RSTC_MR) WDT0 PMC Reset Mask */
#define RSTC_MR_WDTPMC0(value)                (RSTC_MR_WDTPMC0_Msk & (_UINT32_(value) << RSTC_MR_WDTPMC0_Pos)) /* Assigment of value for WDTPMC0 in the RSTC_MR register */
#define RSTC_MR_WDTPMC1_Pos                   _UINT32_(7)                                          /* (RSTC_MR) WDT1 PMC Reset Position */
#define RSTC_MR_WDTPMC1_Msk                   (_UINT32_(0x1) << RSTC_MR_WDTPMC1_Pos)               /* (RSTC_MR) WDT1 PMC Reset Mask */
#define RSTC_MR_WDTPMC1(value)                (RSTC_MR_WDTPMC1_Msk & (_UINT32_(value) << RSTC_MR_WDTPMC1_Pos)) /* Assigment of value for WDTPMC1 in the RSTC_MR register */
#define RSTC_MR_ERSTL_Pos                     _UINT32_(8)                                          /* (RSTC_MR) External Reset Length Position */
#define RSTC_MR_ERSTL_Msk                     (_UINT32_(0xF) << RSTC_MR_ERSTL_Pos)                 /* (RSTC_MR) External Reset Length Mask */
#define RSTC_MR_ERSTL(value)                  (RSTC_MR_ERSTL_Msk & (_UINT32_(value) << RSTC_MR_ERSTL_Pos)) /* Assigment of value for ERSTL in the RSTC_MR register */
#define RSTC_MR_CORSMIEN_Pos                  _UINT32_(16)                                         /* (RSTC_MR) VDDCORE Supply Monitor Interrupt Enable Position */
#define RSTC_MR_CORSMIEN_Msk                  (_UINT32_(0x1) << RSTC_MR_CORSMIEN_Pos)              /* (RSTC_MR) VDDCORE Supply Monitor Interrupt Enable Mask */
#define RSTC_MR_CORSMIEN(value)               (RSTC_MR_CORSMIEN_Msk & (_UINT32_(value) << RSTC_MR_CORSMIEN_Pos)) /* Assigment of value for CORSMIEN in the RSTC_MR register */
#define RSTC_MR_CPEREN_Pos                    _UINT32_(17)                                         /* (RSTC_MR) Coprocessor Peripheral Enable Position */
#define RSTC_MR_CPEREN_Msk                    (_UINT32_(0x1) << RSTC_MR_CPEREN_Pos)                /* (RSTC_MR) Coprocessor Peripheral Enable Mask */
#define RSTC_MR_CPEREN(value)                 (RSTC_MR_CPEREN_Msk & (_UINT32_(value) << RSTC_MR_CPEREN_Pos)) /* Assigment of value for CPEREN in the RSTC_MR register */
#define RSTC_MR_CPROCEN_Pos                   _UINT32_(18)                                         /* (RSTC_MR) Coprocessor (Second Processor) Enable Position */
#define RSTC_MR_CPROCEN_Msk                   (_UINT32_(0x1) << RSTC_MR_CPROCEN_Pos)               /* (RSTC_MR) Coprocessor (Second Processor) Enable Mask */
#define RSTC_MR_CPROCEN(value)                (RSTC_MR_CPROCEN_Msk & (_UINT32_(value) << RSTC_MR_CPROCEN_Pos)) /* Assigment of value for CPROCEN in the RSTC_MR register */
#define RSTC_MR_PWRSW_Pos                     _UINT32_(21)                                         /* (RSTC_MR) Backup Area Power Switch Control Position */
#define RSTC_MR_PWRSW_Msk                     (_UINT32_(0x1) << RSTC_MR_PWRSW_Pos)                 /* (RSTC_MR) Backup Area Power Switch Control Mask */
#define RSTC_MR_PWRSW(value)                  (RSTC_MR_PWRSW_Msk & (_UINT32_(value) << RSTC_MR_PWRSW_Pos)) /* Assigment of value for PWRSW in the RSTC_MR register */
#define   RSTC_MR_PWRSW_VDD3V3_Val            _UINT32_(0x0)                                        /* (RSTC_MR) VDDBU is supplied by VDD3V3  */
#define   RSTC_MR_PWRSW_VBAT_Val              _UINT32_(0x1)                                        /* (RSTC_MR) VDDBU is supplied by VBAT  */
#define RSTC_MR_PWRSW_VDD3V3                  (RSTC_MR_PWRSW_VDD3V3_Val << RSTC_MR_PWRSW_Pos)      /* (RSTC_MR) VDDBU is supplied by VDD3V3 Position  */
#define RSTC_MR_PWRSW_VBAT                    (RSTC_MR_PWRSW_VBAT_Val << RSTC_MR_PWRSW_Pos)        /* (RSTC_MR) VDDBU is supplied by VBAT Position  */
#define RSTC_MR_BADXTRST_Pos                  _UINT32_(22)                                         /* (RSTC_MR) Bad XTAL Fail Reset Position */
#define RSTC_MR_BADXTRST_Msk                  (_UINT32_(0x1) << RSTC_MR_BADXTRST_Pos)              /* (RSTC_MR) Bad XTAL Fail Reset Mask */
#define RSTC_MR_BADXTRST(value)               (RSTC_MR_BADXTRST_Msk & (_UINT32_(value) << RSTC_MR_BADXTRST_Pos)) /* Assigment of value for BADXTRST in the RSTC_MR register */
#define RSTC_MR_KEY_Pos                       _UINT32_(24)                                         /* (RSTC_MR) Write Access Password Position */
#define RSTC_MR_KEY_Msk                       (_UINT32_(0xFF) << RSTC_MR_KEY_Pos)                  /* (RSTC_MR) Write Access Password Mask */
#define RSTC_MR_KEY(value)                    (RSTC_MR_KEY_Msk & (_UINT32_(value) << RSTC_MR_KEY_Pos)) /* Assigment of value for KEY in the RSTC_MR register */
#define   RSTC_MR_KEY_PASSWD_Val              _UINT32_(0xA5)                                       /* (RSTC_MR) Writing any other value in this field aborts the write operation. Always reads as 0.  */
#define RSTC_MR_KEY_PASSWD                    (RSTC_MR_KEY_PASSWD_Val << RSTC_MR_KEY_Pos)          /* (RSTC_MR) Writing any other value in this field aborts the write operation. Always reads as 0. Position  */
#define RSTC_MR_Msk                           _UINT32_(0xFF670FFF)                                 /* (RSTC_MR) Register Mask  */

#define RSTC_MR_WDTPMC_Pos                    _UINT32_(6)                                          /* (RSTC_MR Position) WDTx PMC Reset */
#define RSTC_MR_WDTPMC_Msk                    (_UINT32_(0x3) << RSTC_MR_WDTPMC_Pos)                /* (RSTC_MR Mask) WDTPMC */
#define RSTC_MR_WDTPMC(value)                 (RSTC_MR_WDTPMC_Msk & (_UINT32_(value) << RSTC_MR_WDTPMC_Pos)) 

/** \brief RSTC register offsets definitions */
#define RSTC_CR_REG_OFST               _UINT32_(0x00)      /* (RSTC_CR) Control Register Offset */
#define RSTC_SR_REG_OFST               _UINT32_(0x04)      /* (RSTC_SR) Status Register Offset */
#define RSTC_MR_REG_OFST               _UINT32_(0x08)      /* (RSTC_MR) Mode Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief RSTC register API structure */
typedef struct
{
  __O   uint32_t                       RSTC_CR;            /**< Offset: 0x00 ( /W  32) Control Register */
  __I   uint32_t                       RSTC_SR;            /**< Offset: 0x04 (R/   32) Status Register */
  __IO  uint32_t                       RSTC_MR;            /**< Offset: 0x08 (R/W  32) Mode Register */
} rstc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CXMTSH_RSTC_COMPONENT_H_ */
