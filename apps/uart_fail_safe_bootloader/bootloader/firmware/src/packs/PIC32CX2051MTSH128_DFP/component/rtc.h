/*
 * Component description for RTC
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
#ifndef _PIC32CXMTSH_RTC_COMPONENT_H_
#define _PIC32CXMTSH_RTC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR RTC                                          */
/* ************************************************************************** */

/* -------- RTC_FSTR : (RTC Offset: 0x00) ( R/ 32) First Stamping Time Register of Source 0 -------- */
#define RTC_FSTR_SEC_Pos                      _UINT32_(0)                                          /* (RTC_FSTR) Seconds of the Tamper (cleared by reading RTC_LSDRx) Position */
#define RTC_FSTR_SEC_Msk                      (_UINT32_(0x7F) << RTC_FSTR_SEC_Pos)                 /* (RTC_FSTR) Seconds of the Tamper (cleared by reading RTC_LSDRx) Mask */
#define RTC_FSTR_SEC(value)                   (RTC_FSTR_SEC_Msk & (_UINT32_(value) << RTC_FSTR_SEC_Pos)) /* Assigment of value for SEC in the RTC_FSTR register */
#define RTC_FSTR_MIN_Pos                      _UINT32_(8)                                          /* (RTC_FSTR) Minutes of the Tamper (cleared by reading RTC_LSDRx) Position */
#define RTC_FSTR_MIN_Msk                      (_UINT32_(0x7F) << RTC_FSTR_MIN_Pos)                 /* (RTC_FSTR) Minutes of the Tamper (cleared by reading RTC_LSDRx) Mask */
#define RTC_FSTR_MIN(value)                   (RTC_FSTR_MIN_Msk & (_UINT32_(value) << RTC_FSTR_MIN_Pos)) /* Assigment of value for MIN in the RTC_FSTR register */
#define RTC_FSTR_HOUR_Pos                     _UINT32_(16)                                         /* (RTC_FSTR) Hours of the Tamper (cleared by reading RTC_LSDRx) Position */
#define RTC_FSTR_HOUR_Msk                     (_UINT32_(0x3F) << RTC_FSTR_HOUR_Pos)                /* (RTC_FSTR) Hours of the Tamper (cleared by reading RTC_LSDRx) Mask */
#define RTC_FSTR_HOUR(value)                  (RTC_FSTR_HOUR_Msk & (_UINT32_(value) << RTC_FSTR_HOUR_Pos)) /* Assigment of value for HOUR in the RTC_FSTR register */
#define RTC_FSTR_AMPM_Pos                     _UINT32_(22)                                         /* (RTC_FSTR) AM/PM Indicator of the Tamper (cleared by reading RTC_LSDRx) Position */
#define RTC_FSTR_AMPM_Msk                     (_UINT32_(0x1) << RTC_FSTR_AMPM_Pos)                 /* (RTC_FSTR) AM/PM Indicator of the Tamper (cleared by reading RTC_LSDRx) Mask */
#define RTC_FSTR_AMPM(value)                  (RTC_FSTR_AMPM_Msk & (_UINT32_(value) << RTC_FSTR_AMPM_Pos)) /* Assigment of value for AMPM in the RTC_FSTR register */
#define RTC_FSTR_TEVCNT_Pos                   _UINT32_(24)                                         /* (RTC_FSTR) Tamper Events Counter (cleared by reading RTC_LSDRx) Position */
#define RTC_FSTR_TEVCNT_Msk                   (_UINT32_(0xF) << RTC_FSTR_TEVCNT_Pos)               /* (RTC_FSTR) Tamper Events Counter (cleared by reading RTC_LSDRx) Mask */
#define RTC_FSTR_TEVCNT(value)                (RTC_FSTR_TEVCNT_Msk & (_UINT32_(value) << RTC_FSTR_TEVCNT_Pos)) /* Assigment of value for TEVCNT in the RTC_FSTR register */
#define RTC_FSTR_BACKUP_Pos                   _UINT32_(31)                                         /* (RTC_FSTR) System Mode of the Tamper (cleared by reading RTC_LSDRx) Position */
#define RTC_FSTR_BACKUP_Msk                   (_UINT32_(0x1) << RTC_FSTR_BACKUP_Pos)               /* (RTC_FSTR) System Mode of the Tamper (cleared by reading RTC_LSDRx) Mask */
#define RTC_FSTR_BACKUP(value)                (RTC_FSTR_BACKUP_Msk & (_UINT32_(value) << RTC_FSTR_BACKUP_Pos)) /* Assigment of value for BACKUP in the RTC_FSTR register */
#define RTC_FSTR_Msk                          _UINT32_(0x8F7F7F7F)                                 /* (RTC_FSTR) Register Mask  */

/* UTC mode */
#define RTC_FSTR_UTC_Msk                      _UINT32_(0x00000000)                                  /* (RTC_FSTR_UTC) Register Mask  */


/* -------- RTC_FSDR : (RTC Offset: 0x04) ( R/ 32) First Stamping Date Register of Source 0 -------- */
#define RTC_FSDR_CENT_Pos                     _UINT32_(0)                                          /* (RTC_FSDR) Century of the Tamper (cleared by reading RTC_LSDRx) Position */
#define RTC_FSDR_CENT_Msk                     (_UINT32_(0x7F) << RTC_FSDR_CENT_Pos)                /* (RTC_FSDR) Century of the Tamper (cleared by reading RTC_LSDRx) Mask */
#define RTC_FSDR_CENT(value)                  (RTC_FSDR_CENT_Msk & (_UINT32_(value) << RTC_FSDR_CENT_Pos)) /* Assigment of value for CENT in the RTC_FSDR register */
#define RTC_FSDR_YEAR_Pos                     _UINT32_(8)                                          /* (RTC_FSDR) Year of the Tamper (cleared by reading RTC_LSDRx) Position */
#define RTC_FSDR_YEAR_Msk                     (_UINT32_(0x7F) << RTC_FSDR_YEAR_Pos)                /* (RTC_FSDR) Year of the Tamper (cleared by reading RTC_LSDRx) Mask */
#define RTC_FSDR_YEAR(value)                  (RTC_FSDR_YEAR_Msk & (_UINT32_(value) << RTC_FSDR_YEAR_Pos)) /* Assigment of value for YEAR in the RTC_FSDR register */
#define RTC_FSDR_MONTH_Pos                    _UINT32_(16)                                         /* (RTC_FSDR) Month of the Tamper (cleared by reading RTC_LSDRx) Position */
#define RTC_FSDR_MONTH_Msk                    (_UINT32_(0x1F) << RTC_FSDR_MONTH_Pos)               /* (RTC_FSDR) Month of the Tamper (cleared by reading RTC_LSDRx) Mask */
#define RTC_FSDR_MONTH(value)                 (RTC_FSDR_MONTH_Msk & (_UINT32_(value) << RTC_FSDR_MONTH_Pos)) /* Assigment of value for MONTH in the RTC_FSDR register */
#define RTC_FSDR_DAY_Pos                      _UINT32_(21)                                         /* (RTC_FSDR) Day of the Tamper (cleared by reading RTC_LSDRx) Position */
#define RTC_FSDR_DAY_Msk                      (_UINT32_(0x7) << RTC_FSDR_DAY_Pos)                  /* (RTC_FSDR) Day of the Tamper (cleared by reading RTC_LSDRx) Mask */
#define RTC_FSDR_DAY(value)                   (RTC_FSDR_DAY_Msk & (_UINT32_(value) << RTC_FSDR_DAY_Pos)) /* Assigment of value for DAY in the RTC_FSDR register */
#define RTC_FSDR_DATE_Pos                     _UINT32_(24)                                         /* (RTC_FSDR) Date of the Tamper (cleared by reading RTC_LSDRx) Position */
#define RTC_FSDR_DATE_Msk                     (_UINT32_(0x3F) << RTC_FSDR_DATE_Pos)                /* (RTC_FSDR) Date of the Tamper (cleared by reading RTC_LSDRx) Mask */
#define RTC_FSDR_DATE(value)                  (RTC_FSDR_DATE_Msk & (_UINT32_(value) << RTC_FSDR_DATE_Pos)) /* Assigment of value for DATE in the RTC_FSDR register */
#define RTC_FSDR_Msk                          _UINT32_(0x3FFF7F7F)                                 /* (RTC_FSDR) Register Mask  */

/* UTC mode */
#define RTC_FSDR_UTC_Msk                      _UINT32_(0x00000000)                                  /* (RTC_FSDR_UTC) Register Mask  */


/* -------- RTC_LSTR : (RTC Offset: 0x08) ( R/ 32) Last Stamping Time Register of Source 0 -------- */
#define RTC_LSTR_SEC_Pos                      _UINT32_(0)                                          /* (RTC_LSTR) Seconds of the Tamper (cleared by reading RTC_LSDRx) Position */
#define RTC_LSTR_SEC_Msk                      (_UINT32_(0x7F) << RTC_LSTR_SEC_Pos)                 /* (RTC_LSTR) Seconds of the Tamper (cleared by reading RTC_LSDRx) Mask */
#define RTC_LSTR_SEC(value)                   (RTC_LSTR_SEC_Msk & (_UINT32_(value) << RTC_LSTR_SEC_Pos)) /* Assigment of value for SEC in the RTC_LSTR register */
#define RTC_LSTR_MIN_Pos                      _UINT32_(8)                                          /* (RTC_LSTR) Minutes of the Tamper (cleared by reading RTC_LSDRx) Position */
#define RTC_LSTR_MIN_Msk                      (_UINT32_(0x7F) << RTC_LSTR_MIN_Pos)                 /* (RTC_LSTR) Minutes of the Tamper (cleared by reading RTC_LSDRx) Mask */
#define RTC_LSTR_MIN(value)                   (RTC_LSTR_MIN_Msk & (_UINT32_(value) << RTC_LSTR_MIN_Pos)) /* Assigment of value for MIN in the RTC_LSTR register */
#define RTC_LSTR_HOUR_Pos                     _UINT32_(16)                                         /* (RTC_LSTR) Hours of the Tamper (cleared by reading RTC_LSDRx) Position */
#define RTC_LSTR_HOUR_Msk                     (_UINT32_(0x3F) << RTC_LSTR_HOUR_Pos)                /* (RTC_LSTR) Hours of the Tamper (cleared by reading RTC_LSDRx) Mask */
#define RTC_LSTR_HOUR(value)                  (RTC_LSTR_HOUR_Msk & (_UINT32_(value) << RTC_LSTR_HOUR_Pos)) /* Assigment of value for HOUR in the RTC_LSTR register */
#define RTC_LSTR_AMPM_Pos                     _UINT32_(22)                                         /* (RTC_LSTR) AM/PM Indicator of the Tamper (cleared by reading RTC_LSDRx) Position */
#define RTC_LSTR_AMPM_Msk                     (_UINT32_(0x1) << RTC_LSTR_AMPM_Pos)                 /* (RTC_LSTR) AM/PM Indicator of the Tamper (cleared by reading RTC_LSDRx) Mask */
#define RTC_LSTR_AMPM(value)                  (RTC_LSTR_AMPM_Msk & (_UINT32_(value) << RTC_LSTR_AMPM_Pos)) /* Assigment of value for AMPM in the RTC_LSTR register */
#define RTC_LSTR_BACKUP_Pos                   _UINT32_(31)                                         /* (RTC_LSTR) System Mode of the Tamper (cleared by reading RTC_LSDRx) Position */
#define RTC_LSTR_BACKUP_Msk                   (_UINT32_(0x1) << RTC_LSTR_BACKUP_Pos)               /* (RTC_LSTR) System Mode of the Tamper (cleared by reading RTC_LSDRx) Mask */
#define RTC_LSTR_BACKUP(value)                (RTC_LSTR_BACKUP_Msk & (_UINT32_(value) << RTC_LSTR_BACKUP_Pos)) /* Assigment of value for BACKUP in the RTC_LSTR register */
#define RTC_LSTR_Msk                          _UINT32_(0x807F7F7F)                                 /* (RTC_LSTR) Register Mask  */

/* UTC mode */
#define RTC_LSTR_UTC_Msk                      _UINT32_(0x00000000)                                  /* (RTC_LSTR_UTC) Register Mask  */


/* -------- RTC_LSDR : (RTC Offset: 0x0C) ( R/ 32) Last Stamping Date Register of Source 0 -------- */
#define RTC_LSDR_CENT_Pos                     _UINT32_(0)                                          /* (RTC_LSDR) Century of the Tamper (cleared on read) Position */
#define RTC_LSDR_CENT_Msk                     (_UINT32_(0x7F) << RTC_LSDR_CENT_Pos)                /* (RTC_LSDR) Century of the Tamper (cleared on read) Mask */
#define RTC_LSDR_CENT(value)                  (RTC_LSDR_CENT_Msk & (_UINT32_(value) << RTC_LSDR_CENT_Pos)) /* Assigment of value for CENT in the RTC_LSDR register */
#define RTC_LSDR_YEAR_Pos                     _UINT32_(8)                                          /* (RTC_LSDR) Year of the Tamper (cleared on read) Position */
#define RTC_LSDR_YEAR_Msk                     (_UINT32_(0x7F) << RTC_LSDR_YEAR_Pos)                /* (RTC_LSDR) Year of the Tamper (cleared on read) Mask */
#define RTC_LSDR_YEAR(value)                  (RTC_LSDR_YEAR_Msk & (_UINT32_(value) << RTC_LSDR_YEAR_Pos)) /* Assigment of value for YEAR in the RTC_LSDR register */
#define RTC_LSDR_MONTH_Pos                    _UINT32_(16)                                         /* (RTC_LSDR) Month of the Tamper (cleared on read) Position */
#define RTC_LSDR_MONTH_Msk                    (_UINT32_(0x1F) << RTC_LSDR_MONTH_Pos)               /* (RTC_LSDR) Month of the Tamper (cleared on read) Mask */
#define RTC_LSDR_MONTH(value)                 (RTC_LSDR_MONTH_Msk & (_UINT32_(value) << RTC_LSDR_MONTH_Pos)) /* Assigment of value for MONTH in the RTC_LSDR register */
#define RTC_LSDR_DAY_Pos                      _UINT32_(21)                                         /* (RTC_LSDR) Day of the Tamper (cleared on read) Position */
#define RTC_LSDR_DAY_Msk                      (_UINT32_(0x7) << RTC_LSDR_DAY_Pos)                  /* (RTC_LSDR) Day of the Tamper (cleared on read) Mask */
#define RTC_LSDR_DAY(value)                   (RTC_LSDR_DAY_Msk & (_UINT32_(value) << RTC_LSDR_DAY_Pos)) /* Assigment of value for DAY in the RTC_LSDR register */
#define RTC_LSDR_DATE_Pos                     _UINT32_(24)                                         /* (RTC_LSDR) Date of the Tamper (cleared on read) Position */
#define RTC_LSDR_DATE_Msk                     (_UINT32_(0x3F) << RTC_LSDR_DATE_Pos)                /* (RTC_LSDR) Date of the Tamper (cleared on read) Mask */
#define RTC_LSDR_DATE(value)                  (RTC_LSDR_DATE_Msk & (_UINT32_(value) << RTC_LSDR_DATE_Pos)) /* Assigment of value for DATE in the RTC_LSDR register */
#define RTC_LSDR_Msk                          _UINT32_(0x3FFF7F7F)                                 /* (RTC_LSDR) Register Mask  */

/* UTC mode */
#define RTC_LSDR_UTC_Msk                      _UINT32_(0x00000000)                                  /* (RTC_LSDR_UTC) Register Mask  */


/* -------- RTC_CR : (RTC Offset: 0x00) (R/W 32) Control Register -------- */
#define RTC_CR_UPDTIM_Pos                     _UINT32_(0)                                          /* (RTC_CR) Update Request Time Register Position */
#define RTC_CR_UPDTIM_Msk                     (_UINT32_(0x1) << RTC_CR_UPDTIM_Pos)                 /* (RTC_CR) Update Request Time Register Mask */
#define RTC_CR_UPDTIM(value)                  (RTC_CR_UPDTIM_Msk & (_UINT32_(value) << RTC_CR_UPDTIM_Pos)) /* Assigment of value for UPDTIM in the RTC_CR register */
#define   RTC_CR_UPDTIM_STOP_UPDATE_Val       _UINT32_(0x0)                                        /* (RTC_CR) No effect or, if UPDTIM has been previously written to 1, stops the update procedure.  */
#define   RTC_CR_UPDTIM_START_UPDATE_Val      _UINT32_(0x1)                                        /* (RTC_CR) Stops the RTC time counting. Second, minute and hour counters can be programmed once this bit is set and acknowledged by the bit ACKUPD of the RTC_SR.  */
#define RTC_CR_UPDTIM_STOP_UPDATE             (RTC_CR_UPDTIM_STOP_UPDATE_Val << RTC_CR_UPDTIM_Pos) /* (RTC_CR) No effect or, if UPDTIM has been previously written to 1, stops the update procedure. Position  */
#define RTC_CR_UPDTIM_START_UPDATE            (RTC_CR_UPDTIM_START_UPDATE_Val << RTC_CR_UPDTIM_Pos) /* (RTC_CR) Stops the RTC time counting. Second, minute and hour counters can be programmed once this bit is set and acknowledged by the bit ACKUPD of the RTC_SR. Position  */
#define RTC_CR_UPDCAL_Pos                     _UINT32_(1)                                          /* (RTC_CR) Update Request Calendar Register Position */
#define RTC_CR_UPDCAL_Msk                     (_UINT32_(0x1) << RTC_CR_UPDCAL_Pos)                 /* (RTC_CR) Update Request Calendar Register Mask */
#define RTC_CR_UPDCAL(value)                  (RTC_CR_UPDCAL_Msk & (_UINT32_(value) << RTC_CR_UPDCAL_Pos)) /* Assigment of value for UPDCAL in the RTC_CR register */
#define   RTC_CR_UPDCAL_STOP_UPDATE_Val       _UINT32_(0x0)                                        /* (RTC_CR) No effect or, if UPDCAL has been previously written to 1, stops the update procedure.  */
#define   RTC_CR_UPDCAL_START_UPDATE_Val      _UINT32_(0x1)                                        /* (RTC_CR) Stops the RTC calendar counting.  */
#define RTC_CR_UPDCAL_STOP_UPDATE             (RTC_CR_UPDCAL_STOP_UPDATE_Val << RTC_CR_UPDCAL_Pos) /* (RTC_CR) No effect or, if UPDCAL has been previously written to 1, stops the update procedure. Position  */
#define RTC_CR_UPDCAL_START_UPDATE            (RTC_CR_UPDCAL_START_UPDATE_Val << RTC_CR_UPDCAL_Pos) /* (RTC_CR) Stops the RTC calendar counting. Position  */
#define RTC_CR_TIMEVSEL_Pos                   _UINT32_(8)                                          /* (RTC_CR) Time Event Selection Position */
#define RTC_CR_TIMEVSEL_Msk                   (_UINT32_(0x3) << RTC_CR_TIMEVSEL_Pos)               /* (RTC_CR) Time Event Selection Mask */
#define RTC_CR_TIMEVSEL(value)                (RTC_CR_TIMEVSEL_Msk & (_UINT32_(value) << RTC_CR_TIMEVSEL_Pos)) /* Assigment of value for TIMEVSEL in the RTC_CR register */
#define   RTC_CR_TIMEVSEL_MINUTE_Val          _UINT32_(0x0)                                        /* (RTC_CR) Minute change  */
#define   RTC_CR_TIMEVSEL_HOUR_Val            _UINT32_(0x1)                                        /* (RTC_CR) Hour change  */
#define   RTC_CR_TIMEVSEL_MIDNIGHT_Val        _UINT32_(0x2)                                        /* (RTC_CR) Every day at midnight  */
#define   RTC_CR_TIMEVSEL_NOON_Val            _UINT32_(0x3)                                        /* (RTC_CR) Every day at noon  */
#define RTC_CR_TIMEVSEL_MINUTE                (RTC_CR_TIMEVSEL_MINUTE_Val << RTC_CR_TIMEVSEL_Pos)  /* (RTC_CR) Minute change Position  */
#define RTC_CR_TIMEVSEL_HOUR                  (RTC_CR_TIMEVSEL_HOUR_Val << RTC_CR_TIMEVSEL_Pos)    /* (RTC_CR) Hour change Position  */
#define RTC_CR_TIMEVSEL_MIDNIGHT              (RTC_CR_TIMEVSEL_MIDNIGHT_Val << RTC_CR_TIMEVSEL_Pos) /* (RTC_CR) Every day at midnight Position  */
#define RTC_CR_TIMEVSEL_NOON                  (RTC_CR_TIMEVSEL_NOON_Val << RTC_CR_TIMEVSEL_Pos)    /* (RTC_CR) Every day at noon Position  */
#define RTC_CR_CALEVSEL_Pos                   _UINT32_(16)                                         /* (RTC_CR) Calendar Event Selection Position */
#define RTC_CR_CALEVSEL_Msk                   (_UINT32_(0x3) << RTC_CR_CALEVSEL_Pos)               /* (RTC_CR) Calendar Event Selection Mask */
#define RTC_CR_CALEVSEL(value)                (RTC_CR_CALEVSEL_Msk & (_UINT32_(value) << RTC_CR_CALEVSEL_Pos)) /* Assigment of value for CALEVSEL in the RTC_CR register */
#define   RTC_CR_CALEVSEL_WEEK_Val            _UINT32_(0x0)                                        /* (RTC_CR) Week change (every Monday at time 00:00:00)  */
#define   RTC_CR_CALEVSEL_MONTH_Val           _UINT32_(0x1)                                        /* (RTC_CR) Month change (every 01 of each month at time 00:00:00)  */
#define   RTC_CR_CALEVSEL_YEAR_Val            _UINT32_(0x2)                                        /* (RTC_CR) Year change (every January 1 at time 00:00:00)  */
#define RTC_CR_CALEVSEL_WEEK                  (RTC_CR_CALEVSEL_WEEK_Val << RTC_CR_CALEVSEL_Pos)    /* (RTC_CR) Week change (every Monday at time 00:00:00) Position  */
#define RTC_CR_CALEVSEL_MONTH                 (RTC_CR_CALEVSEL_MONTH_Val << RTC_CR_CALEVSEL_Pos)   /* (RTC_CR) Month change (every 01 of each month at time 00:00:00) Position  */
#define RTC_CR_CALEVSEL_YEAR                  (RTC_CR_CALEVSEL_YEAR_Val << RTC_CR_CALEVSEL_Pos)    /* (RTC_CR) Year change (every January 1 at time 00:00:00) Position  */
#define RTC_CR_Msk                            _UINT32_(0x00030303)                                 /* (RTC_CR) Register Mask  */


/* -------- RTC_MR : (RTC Offset: 0x04) (R/W 32) Mode Register -------- */
#define RTC_MR_HRMOD_Pos                      _UINT32_(0)                                          /* (RTC_MR) 12-/24-hour Mode Position */
#define RTC_MR_HRMOD_Msk                      (_UINT32_(0x1) << RTC_MR_HRMOD_Pos)                  /* (RTC_MR) 12-/24-hour Mode Mask */
#define RTC_MR_HRMOD(value)                   (RTC_MR_HRMOD_Msk & (_UINT32_(value) << RTC_MR_HRMOD_Pos)) /* Assigment of value for HRMOD in the RTC_MR register */
#define   RTC_MR_HRMOD_24HOURS_Val            _UINT32_(0x0)                                        /* (RTC_MR) 24-hour mode is selected.  */
#define   RTC_MR_HRMOD_AMPM_Val               _UINT32_(0x1)                                        /* (RTC_MR) 12-hour mode is selected.  */
#define RTC_MR_HRMOD_24HOURS                  (RTC_MR_HRMOD_24HOURS_Val << RTC_MR_HRMOD_Pos)       /* (RTC_MR) 24-hour mode is selected. Position  */
#define RTC_MR_HRMOD_AMPM                     (RTC_MR_HRMOD_AMPM_Val << RTC_MR_HRMOD_Pos)          /* (RTC_MR) 12-hour mode is selected. Position  */
#define RTC_MR_PERSIAN_Pos                    _UINT32_(1)                                          /* (RTC_MR) PERSIAN Calendar Position */
#define RTC_MR_PERSIAN_Msk                    (_UINT32_(0x1) << RTC_MR_PERSIAN_Pos)                /* (RTC_MR) PERSIAN Calendar Mask */
#define RTC_MR_PERSIAN(value)                 (RTC_MR_PERSIAN_Msk & (_UINT32_(value) << RTC_MR_PERSIAN_Pos)) /* Assigment of value for PERSIAN in the RTC_MR register */
#define   RTC_MR_PERSIAN_DISABLED_Val         _UINT32_(0x0)                                        /* (RTC_MR) Gregorian calendar.  */
#define   RTC_MR_PERSIAN_ENABLED_Val          _UINT32_(0x1)                                        /* (RTC_MR) Persian calendar.  */
#define RTC_MR_PERSIAN_DISABLED               (RTC_MR_PERSIAN_DISABLED_Val << RTC_MR_PERSIAN_Pos)  /* (RTC_MR) Gregorian calendar. Position  */
#define RTC_MR_PERSIAN_ENABLED                (RTC_MR_PERSIAN_ENABLED_Val << RTC_MR_PERSIAN_Pos)   /* (RTC_MR) Persian calendar. Position  */
#define RTC_MR_UTC_Pos                        _UINT32_(2)                                          /* (RTC_MR) UTC Time Format Position */
#define RTC_MR_UTC_Msk                        (_UINT32_(0x1) << RTC_MR_UTC_Pos)                    /* (RTC_MR) UTC Time Format Mask */
#define RTC_MR_UTC(value)                     (RTC_MR_UTC_Msk & (_UINT32_(value) << RTC_MR_UTC_Pos)) /* Assigment of value for UTC in the RTC_MR register */
#define   RTC_MR_UTC_DISABLED_Val             _UINT32_(0x0)                                        /* (RTC_MR) Gregorian or Persian calendar.  */
#define   RTC_MR_UTC_ENABLED_Val              _UINT32_(0x1)                                        /* (RTC_MR) UTC format.  */
#define RTC_MR_UTC_DISABLED                   (RTC_MR_UTC_DISABLED_Val << RTC_MR_UTC_Pos)          /* (RTC_MR) Gregorian or Persian calendar. Position  */
#define RTC_MR_UTC_ENABLED                    (RTC_MR_UTC_ENABLED_Val << RTC_MR_UTC_Pos)           /* (RTC_MR) UTC format. Position  */
#define RTC_MR_NEGPPM_Pos                     _UINT32_(4)                                          /* (RTC_MR) NEGative PPM Correction Position */
#define RTC_MR_NEGPPM_Msk                     (_UINT32_(0x1) << RTC_MR_NEGPPM_Pos)                 /* (RTC_MR) NEGative PPM Correction Mask */
#define RTC_MR_NEGPPM(value)                  (RTC_MR_NEGPPM_Msk & (_UINT32_(value) << RTC_MR_NEGPPM_Pos)) /* Assigment of value for NEGPPM in the RTC_MR register */
#define   RTC_MR_NEGPPM_DISABLED_Val          _UINT32_(0x0)                                        /* (RTC_MR) Positive correction (the divider will be slightly higher than 32768).  */
#define   RTC_MR_NEGPPM_ENABLED_Val           _UINT32_(0x1)                                        /* (RTC_MR) Negative correction (the divider will be slightly lower than 32768).  */
#define RTC_MR_NEGPPM_DISABLED                (RTC_MR_NEGPPM_DISABLED_Val << RTC_MR_NEGPPM_Pos)    /* (RTC_MR) Positive correction (the divider will be slightly higher than 32768). Position  */
#define RTC_MR_NEGPPM_ENABLED                 (RTC_MR_NEGPPM_ENABLED_Val << RTC_MR_NEGPPM_Pos)     /* (RTC_MR) Negative correction (the divider will be slightly lower than 32768). Position  */
#define RTC_MR_CORRECTION_Pos                 _UINT32_(8)                                          /* (RTC_MR) Slow Clock Correction Position */
#define RTC_MR_CORRECTION_Msk                 (_UINT32_(0x7F) << RTC_MR_CORRECTION_Pos)            /* (RTC_MR) Slow Clock Correction Mask */
#define RTC_MR_CORRECTION(value)              (RTC_MR_CORRECTION_Msk & (_UINT32_(value) << RTC_MR_CORRECTION_Pos)) /* Assigment of value for CORRECTION in the RTC_MR register */
#define RTC_MR_HIGHPPM_Pos                    _UINT32_(15)                                         /* (RTC_MR) HIGH PPM Correction Position */
#define RTC_MR_HIGHPPM_Msk                    (_UINT32_(0x1) << RTC_MR_HIGHPPM_Pos)                /* (RTC_MR) HIGH PPM Correction Mask */
#define RTC_MR_HIGHPPM(value)                 (RTC_MR_HIGHPPM_Msk & (_UINT32_(value) << RTC_MR_HIGHPPM_Pos)) /* Assigment of value for HIGHPPM in the RTC_MR register */
#define   RTC_MR_HIGHPPM_DISABLED_Val         _UINT32_(0x0)                                        /* (RTC_MR) Lower range ppm correction with accurate correction (below 30ppm correction).  */
#define   RTC_MR_HIGHPPM_ENABLED_Val          _UINT32_(0x1)                                        /* (RTC_MR) Higher range ppm correction with accurate correction (higher than 30ppm correction).  */
#define RTC_MR_HIGHPPM_DISABLED               (RTC_MR_HIGHPPM_DISABLED_Val << RTC_MR_HIGHPPM_Pos)  /* (RTC_MR) Lower range ppm correction with accurate correction (below 30ppm correction). Position  */
#define RTC_MR_HIGHPPM_ENABLED                (RTC_MR_HIGHPPM_ENABLED_Val << RTC_MR_HIGHPPM_Pos)   /* (RTC_MR) Higher range ppm correction with accurate correction (higher than 30ppm correction). Position  */
#define RTC_MR_OUT0_Pos                       _UINT32_(16)                                         /* (RTC_MR) RTCOUT0 OutputSource Selection Position */
#define RTC_MR_OUT0_Msk                       (_UINT32_(0x7) << RTC_MR_OUT0_Pos)                   /* (RTC_MR) RTCOUT0 OutputSource Selection Mask */
#define RTC_MR_OUT0(value)                    (RTC_MR_OUT0_Msk & (_UINT32_(value) << RTC_MR_OUT0_Pos)) /* Assigment of value for OUT0 in the RTC_MR register */
#define   RTC_MR_OUT0_NO_WAVE_Val             _UINT32_(0x0)                                        /* (RTC_MR) No waveform, stuck at '0'  */
#define   RTC_MR_OUT0_FREQ1HZ_Val             _UINT32_(0x1)                                        /* (RTC_MR) 1 Hz square wave  */
#define   RTC_MR_OUT0_FREQ32HZ_Val            _UINT32_(0x2)                                        /* (RTC_MR) 32 Hz square wave  */
#define   RTC_MR_OUT0_FREQ64HZ_Val            _UINT32_(0x3)                                        /* (RTC_MR) 64 Hz square wave  */
#define   RTC_MR_OUT0_FREQ512HZ_Val           _UINT32_(0x4)                                        /* (RTC_MR) 512 Hz square wave  */
#define   RTC_MR_OUT0_ALARM_TOGGLE_Val        _UINT32_(0x5)                                        /* (RTC_MR) Output toggles when alarm flag rises  */
#define   RTC_MR_OUT0_ALARM_FLAG_Val          _UINT32_(0x6)                                        /* (RTC_MR) Output is a copy of the alarm flag  */
#define   RTC_MR_OUT0_PROG_PULSE_Val          _UINT32_(0x7)                                        /* (RTC_MR) Duty cycle programmable pulse  */
#define RTC_MR_OUT0_NO_WAVE                   (RTC_MR_OUT0_NO_WAVE_Val << RTC_MR_OUT0_Pos)         /* (RTC_MR) No waveform, stuck at '0' Position  */
#define RTC_MR_OUT0_FREQ1HZ                   (RTC_MR_OUT0_FREQ1HZ_Val << RTC_MR_OUT0_Pos)         /* (RTC_MR) 1 Hz square wave Position  */
#define RTC_MR_OUT0_FREQ32HZ                  (RTC_MR_OUT0_FREQ32HZ_Val << RTC_MR_OUT0_Pos)        /* (RTC_MR) 32 Hz square wave Position  */
#define RTC_MR_OUT0_FREQ64HZ                  (RTC_MR_OUT0_FREQ64HZ_Val << RTC_MR_OUT0_Pos)        /* (RTC_MR) 64 Hz square wave Position  */
#define RTC_MR_OUT0_FREQ512HZ                 (RTC_MR_OUT0_FREQ512HZ_Val << RTC_MR_OUT0_Pos)       /* (RTC_MR) 512 Hz square wave Position  */
#define RTC_MR_OUT0_ALARM_TOGGLE              (RTC_MR_OUT0_ALARM_TOGGLE_Val << RTC_MR_OUT0_Pos)    /* (RTC_MR) Output toggles when alarm flag rises Position  */
#define RTC_MR_OUT0_ALARM_FLAG                (RTC_MR_OUT0_ALARM_FLAG_Val << RTC_MR_OUT0_Pos)      /* (RTC_MR) Output is a copy of the alarm flag Position  */
#define RTC_MR_OUT0_PROG_PULSE                (RTC_MR_OUT0_PROG_PULSE_Val << RTC_MR_OUT0_Pos)      /* (RTC_MR) Duty cycle programmable pulse Position  */
#define RTC_MR_OUT1_Pos                       _UINT32_(20)                                         /* (RTC_MR) RTCOUT1 Output Source Selection Position */
#define RTC_MR_OUT1_Msk                       (_UINT32_(0x7) << RTC_MR_OUT1_Pos)                   /* (RTC_MR) RTCOUT1 Output Source Selection Mask */
#define RTC_MR_OUT1(value)                    (RTC_MR_OUT1_Msk & (_UINT32_(value) << RTC_MR_OUT1_Pos)) /* Assigment of value for OUT1 in the RTC_MR register */
#define   RTC_MR_OUT1_NO_WAVE_Val             _UINT32_(0x0)                                        /* (RTC_MR) No waveform, stuck at '0'  */
#define   RTC_MR_OUT1_FREQ1HZ_Val             _UINT32_(0x1)                                        /* (RTC_MR) 1 Hz square wave  */
#define   RTC_MR_OUT1_FREQ32HZ_Val            _UINT32_(0x2)                                        /* (RTC_MR) 32 Hz square wave  */
#define   RTC_MR_OUT1_FREQ64HZ_Val            _UINT32_(0x3)                                        /* (RTC_MR) 64 Hz square wave  */
#define   RTC_MR_OUT1_FREQ512HZ_Val           _UINT32_(0x4)                                        /* (RTC_MR) 512 Hz square wave  */
#define   RTC_MR_OUT1_ALARM_TOGGLE_Val        _UINT32_(0x5)                                        /* (RTC_MR) Output toggles when alarm flag rises  */
#define   RTC_MR_OUT1_ALARM_FLAG_Val          _UINT32_(0x6)                                        /* (RTC_MR) Output is a copy of the alarm flag  */
#define   RTC_MR_OUT1_PROG_PULSE_Val          _UINT32_(0x7)                                        /* (RTC_MR) Duty cycle programmable pulse  */
#define RTC_MR_OUT1_NO_WAVE                   (RTC_MR_OUT1_NO_WAVE_Val << RTC_MR_OUT1_Pos)         /* (RTC_MR) No waveform, stuck at '0' Position  */
#define RTC_MR_OUT1_FREQ1HZ                   (RTC_MR_OUT1_FREQ1HZ_Val << RTC_MR_OUT1_Pos)         /* (RTC_MR) 1 Hz square wave Position  */
#define RTC_MR_OUT1_FREQ32HZ                  (RTC_MR_OUT1_FREQ32HZ_Val << RTC_MR_OUT1_Pos)        /* (RTC_MR) 32 Hz square wave Position  */
#define RTC_MR_OUT1_FREQ64HZ                  (RTC_MR_OUT1_FREQ64HZ_Val << RTC_MR_OUT1_Pos)        /* (RTC_MR) 64 Hz square wave Position  */
#define RTC_MR_OUT1_FREQ512HZ                 (RTC_MR_OUT1_FREQ512HZ_Val << RTC_MR_OUT1_Pos)       /* (RTC_MR) 512 Hz square wave Position  */
#define RTC_MR_OUT1_ALARM_TOGGLE              (RTC_MR_OUT1_ALARM_TOGGLE_Val << RTC_MR_OUT1_Pos)    /* (RTC_MR) Output toggles when alarm flag rises Position  */
#define RTC_MR_OUT1_ALARM_FLAG                (RTC_MR_OUT1_ALARM_FLAG_Val << RTC_MR_OUT1_Pos)      /* (RTC_MR) Output is a copy of the alarm flag Position  */
#define RTC_MR_OUT1_PROG_PULSE                (RTC_MR_OUT1_PROG_PULSE_Val << RTC_MR_OUT1_Pos)      /* (RTC_MR) Duty cycle programmable pulse Position  */
#define RTC_MR_THIGH_Pos                      _UINT32_(24)                                         /* (RTC_MR) High Duration of the Output Pulse Position */
#define RTC_MR_THIGH_Msk                      (_UINT32_(0x7) << RTC_MR_THIGH_Pos)                  /* (RTC_MR) High Duration of the Output Pulse Mask */
#define RTC_MR_THIGH(value)                   (RTC_MR_THIGH_Msk & (_UINT32_(value) << RTC_MR_THIGH_Pos)) /* Assigment of value for THIGH in the RTC_MR register */
#define   RTC_MR_THIGH_H_31MS_Val             _UINT32_(0x0)                                        /* (RTC_MR) 31.2 ms  */
#define   RTC_MR_THIGH_H_16MS_Val             _UINT32_(0x1)                                        /* (RTC_MR) 15.6 ms  */
#define   RTC_MR_THIGH_H_4MS_Val              _UINT32_(0x2)                                        /* (RTC_MR) 3.91 ms  */
#define   RTC_MR_THIGH_H_976US_Val            _UINT32_(0x3)                                        /* (RTC_MR) 976 us  */
#define   RTC_MR_THIGH_H_488US_Val            _UINT32_(0x4)                                        /* (RTC_MR) 488 us  */
#define   RTC_MR_THIGH_H_122US_Val            _UINT32_(0x5)                                        /* (RTC_MR) 122 us  */
#define   RTC_MR_THIGH_H_30US_Val             _UINT32_(0x6)                                        /* (RTC_MR) 30.5 us  */
#define   RTC_MR_THIGH_H_15US_Val             _UINT32_(0x7)                                        /* (RTC_MR) 15.2 us  */
#define RTC_MR_THIGH_H_31MS                   (RTC_MR_THIGH_H_31MS_Val << RTC_MR_THIGH_Pos)        /* (RTC_MR) 31.2 ms Position  */
#define RTC_MR_THIGH_H_16MS                   (RTC_MR_THIGH_H_16MS_Val << RTC_MR_THIGH_Pos)        /* (RTC_MR) 15.6 ms Position  */
#define RTC_MR_THIGH_H_4MS                    (RTC_MR_THIGH_H_4MS_Val << RTC_MR_THIGH_Pos)         /* (RTC_MR) 3.91 ms Position  */
#define RTC_MR_THIGH_H_976US                  (RTC_MR_THIGH_H_976US_Val << RTC_MR_THIGH_Pos)       /* (RTC_MR) 976 us Position  */
#define RTC_MR_THIGH_H_488US                  (RTC_MR_THIGH_H_488US_Val << RTC_MR_THIGH_Pos)       /* (RTC_MR) 488 us Position  */
#define RTC_MR_THIGH_H_122US                  (RTC_MR_THIGH_H_122US_Val << RTC_MR_THIGH_Pos)       /* (RTC_MR) 122 us Position  */
#define RTC_MR_THIGH_H_30US                   (RTC_MR_THIGH_H_30US_Val << RTC_MR_THIGH_Pos)        /* (RTC_MR) 30.5 us Position  */
#define RTC_MR_THIGH_H_15US                   (RTC_MR_THIGH_H_15US_Val << RTC_MR_THIGH_Pos)        /* (RTC_MR) 15.2 us Position  */
#define RTC_MR_TPERIOD_Pos                    _UINT32_(28)                                         /* (RTC_MR) Period of the Output Pulse Position */
#define RTC_MR_TPERIOD_Msk                    (_UINT32_(0x3) << RTC_MR_TPERIOD_Pos)                /* (RTC_MR) Period of the Output Pulse Mask */
#define RTC_MR_TPERIOD(value)                 (RTC_MR_TPERIOD_Msk & (_UINT32_(value) << RTC_MR_TPERIOD_Pos)) /* Assigment of value for TPERIOD in the RTC_MR register */
#define   RTC_MR_TPERIOD_P_1S_Val             _UINT32_(0x0)                                        /* (RTC_MR) 1 second  */
#define   RTC_MR_TPERIOD_P_500MS_Val          _UINT32_(0x1)                                        /* (RTC_MR) 500 ms  */
#define   RTC_MR_TPERIOD_P_250MS_Val          _UINT32_(0x2)                                        /* (RTC_MR) 250 ms  */
#define   RTC_MR_TPERIOD_P_125MS_Val          _UINT32_(0x3)                                        /* (RTC_MR) 125 ms  */
#define RTC_MR_TPERIOD_P_1S                   (RTC_MR_TPERIOD_P_1S_Val << RTC_MR_TPERIOD_Pos)      /* (RTC_MR) 1 second Position  */
#define RTC_MR_TPERIOD_P_500MS                (RTC_MR_TPERIOD_P_500MS_Val << RTC_MR_TPERIOD_Pos)   /* (RTC_MR) 500 ms Position  */
#define RTC_MR_TPERIOD_P_250MS                (RTC_MR_TPERIOD_P_250MS_Val << RTC_MR_TPERIOD_Pos)   /* (RTC_MR) 250 ms Position  */
#define RTC_MR_TPERIOD_P_125MS                (RTC_MR_TPERIOD_P_125MS_Val << RTC_MR_TPERIOD_Pos)   /* (RTC_MR) 125 ms Position  */
#define RTC_MR_Msk                            _UINT32_(0x3777FF17)                                 /* (RTC_MR) Register Mask  */


/* -------- RTC_TIMR : (RTC Offset: 0x08) (R/W 32) Time Register -------- */
#define RTC_TIMR_SEC_Pos                      _UINT32_(0)                                          /* (RTC_TIMR) Current Second Position */
#define RTC_TIMR_SEC_Msk                      (_UINT32_(0x7F) << RTC_TIMR_SEC_Pos)                 /* (RTC_TIMR) Current Second Mask */
#define RTC_TIMR_SEC(value)                   (RTC_TIMR_SEC_Msk & (_UINT32_(value) << RTC_TIMR_SEC_Pos)) /* Assigment of value for SEC in the RTC_TIMR register */
#define RTC_TIMR_MIN_Pos                      _UINT32_(8)                                          /* (RTC_TIMR) Current Minute Position */
#define RTC_TIMR_MIN_Msk                      (_UINT32_(0x7F) << RTC_TIMR_MIN_Pos)                 /* (RTC_TIMR) Current Minute Mask */
#define RTC_TIMR_MIN(value)                   (RTC_TIMR_MIN_Msk & (_UINT32_(value) << RTC_TIMR_MIN_Pos)) /* Assigment of value for MIN in the RTC_TIMR register */
#define RTC_TIMR_HOUR_Pos                     _UINT32_(16)                                         /* (RTC_TIMR) Current Hour Position */
#define RTC_TIMR_HOUR_Msk                     (_UINT32_(0x3F) << RTC_TIMR_HOUR_Pos)                /* (RTC_TIMR) Current Hour Mask */
#define RTC_TIMR_HOUR(value)                  (RTC_TIMR_HOUR_Msk & (_UINT32_(value) << RTC_TIMR_HOUR_Pos)) /* Assigment of value for HOUR in the RTC_TIMR register */
#define RTC_TIMR_AMPM_Pos                     _UINT32_(22)                                         /* (RTC_TIMR) Ante Meridiem Post Meridiem Indicator Position */
#define RTC_TIMR_AMPM_Msk                     (_UINT32_(0x1) << RTC_TIMR_AMPM_Pos)                 /* (RTC_TIMR) Ante Meridiem Post Meridiem Indicator Mask */
#define RTC_TIMR_AMPM(value)                  (RTC_TIMR_AMPM_Msk & (_UINT32_(value) << RTC_TIMR_AMPM_Pos)) /* Assigment of value for AMPM in the RTC_TIMR register */
#define   RTC_TIMR_AMPM_AM_Val                _UINT32_(0x0)                                        /* (RTC_TIMR) AM.  */
#define   RTC_TIMR_AMPM_PM_Val                _UINT32_(0x1)                                        /* (RTC_TIMR) PM.  */
#define RTC_TIMR_AMPM_AM                      (RTC_TIMR_AMPM_AM_Val << RTC_TIMR_AMPM_Pos)          /* (RTC_TIMR) AM. Position  */
#define RTC_TIMR_AMPM_PM                      (RTC_TIMR_AMPM_PM_Val << RTC_TIMR_AMPM_Pos)          /* (RTC_TIMR) PM. Position  */
#define RTC_TIMR_Msk                          _UINT32_(0x007F7F7F)                                 /* (RTC_TIMR) Register Mask  */

/* UTC mode */
#define RTC_TIMR_UTC_Msk                      _UINT32_(0x00000000)                                  /* (RTC_TIMR_UTC) Register Mask  */


/* -------- RTC_CALR : (RTC Offset: 0x0C) (R/W 32) Calendar Register -------- */
#define RTC_CALR_CENT_Pos                     _UINT32_(0)                                          /* (RTC_CALR) Current Century Position */
#define RTC_CALR_CENT_Msk                     (_UINT32_(0x7F) << RTC_CALR_CENT_Pos)                /* (RTC_CALR) Current Century Mask */
#define RTC_CALR_CENT(value)                  (RTC_CALR_CENT_Msk & (_UINT32_(value) << RTC_CALR_CENT_Pos)) /* Assigment of value for CENT in the RTC_CALR register */
#define RTC_CALR_YEAR_Pos                     _UINT32_(8)                                          /* (RTC_CALR) Current Year Position */
#define RTC_CALR_YEAR_Msk                     (_UINT32_(0xFF) << RTC_CALR_YEAR_Pos)                /* (RTC_CALR) Current Year Mask */
#define RTC_CALR_YEAR(value)                  (RTC_CALR_YEAR_Msk & (_UINT32_(value) << RTC_CALR_YEAR_Pos)) /* Assigment of value for YEAR in the RTC_CALR register */
#define RTC_CALR_MONTH_Pos                    _UINT32_(16)                                         /* (RTC_CALR) Current Month Position */
#define RTC_CALR_MONTH_Msk                    (_UINT32_(0x1F) << RTC_CALR_MONTH_Pos)               /* (RTC_CALR) Current Month Mask */
#define RTC_CALR_MONTH(value)                 (RTC_CALR_MONTH_Msk & (_UINT32_(value) << RTC_CALR_MONTH_Pos)) /* Assigment of value for MONTH in the RTC_CALR register */
#define RTC_CALR_DAY_Pos                      _UINT32_(21)                                         /* (RTC_CALR) Current Day in Current Week Position */
#define RTC_CALR_DAY_Msk                      (_UINT32_(0x7) << RTC_CALR_DAY_Pos)                  /* (RTC_CALR) Current Day in Current Week Mask */
#define RTC_CALR_DAY(value)                   (RTC_CALR_DAY_Msk & (_UINT32_(value) << RTC_CALR_DAY_Pos)) /* Assigment of value for DAY in the RTC_CALR register */
#define RTC_CALR_DATE_Pos                     _UINT32_(24)                                         /* (RTC_CALR) Current Day in Current Month Position */
#define RTC_CALR_DATE_Msk                     (_UINT32_(0x3F) << RTC_CALR_DATE_Pos)                /* (RTC_CALR) Current Day in Current Month Mask */
#define RTC_CALR_DATE(value)                  (RTC_CALR_DATE_Msk & (_UINT32_(value) << RTC_CALR_DATE_Pos)) /* Assigment of value for DATE in the RTC_CALR register */
#define RTC_CALR_Msk                          _UINT32_(0x3FFFFF7F)                                 /* (RTC_CALR) Register Mask  */


/* -------- RTC_TIMALR : (RTC Offset: 0x10) (R/W 32) Time Alarm Register -------- */
#define RTC_TIMALR_SEC_Pos                    _UINT32_(0)                                          /* (RTC_TIMALR) Second Alarm Position */
#define RTC_TIMALR_SEC_Msk                    (_UINT32_(0x7F) << RTC_TIMALR_SEC_Pos)               /* (RTC_TIMALR) Second Alarm Mask */
#define RTC_TIMALR_SEC(value)                 (RTC_TIMALR_SEC_Msk & (_UINT32_(value) << RTC_TIMALR_SEC_Pos)) /* Assigment of value for SEC in the RTC_TIMALR register */
#define RTC_TIMALR_SECEN_Pos                  _UINT32_(7)                                          /* (RTC_TIMALR) Second Alarm Enable Position */
#define RTC_TIMALR_SECEN_Msk                  (_UINT32_(0x1) << RTC_TIMALR_SECEN_Pos)              /* (RTC_TIMALR) Second Alarm Enable Mask */
#define RTC_TIMALR_SECEN(value)               (RTC_TIMALR_SECEN_Msk & (_UINT32_(value) << RTC_TIMALR_SECEN_Pos)) /* Assigment of value for SECEN in the RTC_TIMALR register */
#define   RTC_TIMALR_SECEN_DISABLED_Val       _UINT32_(0x0)                                        /* (RTC_TIMALR) The second-matching alarm is disabled.  */
#define   RTC_TIMALR_SECEN_ENABLED_Val        _UINT32_(0x1)                                        /* (RTC_TIMALR) The second-matching alarm is enabled.  */
#define RTC_TIMALR_SECEN_DISABLED             (RTC_TIMALR_SECEN_DISABLED_Val << RTC_TIMALR_SECEN_Pos) /* (RTC_TIMALR) The second-matching alarm is disabled. Position  */
#define RTC_TIMALR_SECEN_ENABLED              (RTC_TIMALR_SECEN_ENABLED_Val << RTC_TIMALR_SECEN_Pos) /* (RTC_TIMALR) The second-matching alarm is enabled. Position  */
#define RTC_TIMALR_MIN_Pos                    _UINT32_(8)                                          /* (RTC_TIMALR) Minute Alarm Position */
#define RTC_TIMALR_MIN_Msk                    (_UINT32_(0x7F) << RTC_TIMALR_MIN_Pos)               /* (RTC_TIMALR) Minute Alarm Mask */
#define RTC_TIMALR_MIN(value)                 (RTC_TIMALR_MIN_Msk & (_UINT32_(value) << RTC_TIMALR_MIN_Pos)) /* Assigment of value for MIN in the RTC_TIMALR register */
#define RTC_TIMALR_MINEN_Pos                  _UINT32_(15)                                         /* (RTC_TIMALR) Minute Alarm Enable Position */
#define RTC_TIMALR_MINEN_Msk                  (_UINT32_(0x1) << RTC_TIMALR_MINEN_Pos)              /* (RTC_TIMALR) Minute Alarm Enable Mask */
#define RTC_TIMALR_MINEN(value)               (RTC_TIMALR_MINEN_Msk & (_UINT32_(value) << RTC_TIMALR_MINEN_Pos)) /* Assigment of value for MINEN in the RTC_TIMALR register */
#define   RTC_TIMALR_MINEN_DISABLED_Val       _UINT32_(0x0)                                        /* (RTC_TIMALR) The minute-matching alarm is disabled.  */
#define   RTC_TIMALR_MINEN_ENABLED_Val        _UINT32_(0x1)                                        /* (RTC_TIMALR) The minute-matching alarm is enabled.  */
#define RTC_TIMALR_MINEN_DISABLED             (RTC_TIMALR_MINEN_DISABLED_Val << RTC_TIMALR_MINEN_Pos) /* (RTC_TIMALR) The minute-matching alarm is disabled. Position  */
#define RTC_TIMALR_MINEN_ENABLED              (RTC_TIMALR_MINEN_ENABLED_Val << RTC_TIMALR_MINEN_Pos) /* (RTC_TIMALR) The minute-matching alarm is enabled. Position  */
#define RTC_TIMALR_HOUR_Pos                   _UINT32_(16)                                         /* (RTC_TIMALR) Hour Alarm Position */
#define RTC_TIMALR_HOUR_Msk                   (_UINT32_(0x3F) << RTC_TIMALR_HOUR_Pos)              /* (RTC_TIMALR) Hour Alarm Mask */
#define RTC_TIMALR_HOUR(value)                (RTC_TIMALR_HOUR_Msk & (_UINT32_(value) << RTC_TIMALR_HOUR_Pos)) /* Assigment of value for HOUR in the RTC_TIMALR register */
#define RTC_TIMALR_AMPM_Pos                   _UINT32_(22)                                         /* (RTC_TIMALR) AM/PM Indicator Position */
#define RTC_TIMALR_AMPM_Msk                   (_UINT32_(0x1) << RTC_TIMALR_AMPM_Pos)               /* (RTC_TIMALR) AM/PM Indicator Mask */
#define RTC_TIMALR_AMPM(value)                (RTC_TIMALR_AMPM_Msk & (_UINT32_(value) << RTC_TIMALR_AMPM_Pos)) /* Assigment of value for AMPM in the RTC_TIMALR register */
#define RTC_TIMALR_HOUREN_Pos                 _UINT32_(23)                                         /* (RTC_TIMALR) Hour Alarm Enable Position */
#define RTC_TIMALR_HOUREN_Msk                 (_UINT32_(0x1) << RTC_TIMALR_HOUREN_Pos)             /* (RTC_TIMALR) Hour Alarm Enable Mask */
#define RTC_TIMALR_HOUREN(value)              (RTC_TIMALR_HOUREN_Msk & (_UINT32_(value) << RTC_TIMALR_HOUREN_Pos)) /* Assigment of value for HOUREN in the RTC_TIMALR register */
#define   RTC_TIMALR_HOUREN_DISABLED_Val      _UINT32_(0x0)                                        /* (RTC_TIMALR) The hour-matching alarm is disabled.  */
#define   RTC_TIMALR_HOUREN_ENABLED_Val       _UINT32_(0x1)                                        /* (RTC_TIMALR) The hour-matching alarm is enabled.  */
#define RTC_TIMALR_HOUREN_DISABLED            (RTC_TIMALR_HOUREN_DISABLED_Val << RTC_TIMALR_HOUREN_Pos) /* (RTC_TIMALR) The hour-matching alarm is disabled. Position  */
#define RTC_TIMALR_HOUREN_ENABLED             (RTC_TIMALR_HOUREN_ENABLED_Val << RTC_TIMALR_HOUREN_Pos) /* (RTC_TIMALR) The hour-matching alarm is enabled. Position  */
#define RTC_TIMALR_Msk                        _UINT32_(0x00FFFFFF)                                 /* (RTC_TIMALR) Register Mask  */

/* UTC mode */
#define RTC_TIMALR_UTC_Msk                    _UINT32_(0x00000000)                                  /* (RTC_TIMALR_UTC) Register Mask  */


/* -------- RTC_CALALR : (RTC Offset: 0x14) (R/W 32) Calendar Alarm Register -------- */
#define RTC_CALALR_MONTH_Pos                  _UINT32_(16)                                         /* (RTC_CALALR) Month Alarm Position */
#define RTC_CALALR_MONTH_Msk                  (_UINT32_(0x1F) << RTC_CALALR_MONTH_Pos)             /* (RTC_CALALR) Month Alarm Mask */
#define RTC_CALALR_MONTH(value)               (RTC_CALALR_MONTH_Msk & (_UINT32_(value) << RTC_CALALR_MONTH_Pos)) /* Assigment of value for MONTH in the RTC_CALALR register */
#define RTC_CALALR_MTHEN_Pos                  _UINT32_(23)                                         /* (RTC_CALALR) Month Alarm Enable Position */
#define RTC_CALALR_MTHEN_Msk                  (_UINT32_(0x1) << RTC_CALALR_MTHEN_Pos)              /* (RTC_CALALR) Month Alarm Enable Mask */
#define RTC_CALALR_MTHEN(value)               (RTC_CALALR_MTHEN_Msk & (_UINT32_(value) << RTC_CALALR_MTHEN_Pos)) /* Assigment of value for MTHEN in the RTC_CALALR register */
#define   RTC_CALALR_MTHEN_DISABLED_Val       _UINT32_(0x0)                                        /* (RTC_CALALR) The month-matching alarm is disabled.  */
#define   RTC_CALALR_MTHEN_ENABLED_Val        _UINT32_(0x1)                                        /* (RTC_CALALR) The month-matching alarm is enabled.  */
#define RTC_CALALR_MTHEN_DISABLED             (RTC_CALALR_MTHEN_DISABLED_Val << RTC_CALALR_MTHEN_Pos) /* (RTC_CALALR) The month-matching alarm is disabled. Position  */
#define RTC_CALALR_MTHEN_ENABLED              (RTC_CALALR_MTHEN_ENABLED_Val << RTC_CALALR_MTHEN_Pos) /* (RTC_CALALR) The month-matching alarm is enabled. Position  */
#define RTC_CALALR_DATE_Pos                   _UINT32_(24)                                         /* (RTC_CALALR) Date Alarm Position */
#define RTC_CALALR_DATE_Msk                   (_UINT32_(0x3F) << RTC_CALALR_DATE_Pos)              /* (RTC_CALALR) Date Alarm Mask */
#define RTC_CALALR_DATE(value)                (RTC_CALALR_DATE_Msk & (_UINT32_(value) << RTC_CALALR_DATE_Pos)) /* Assigment of value for DATE in the RTC_CALALR register */
#define RTC_CALALR_DATEEN_Pos                 _UINT32_(31)                                         /* (RTC_CALALR) Date Alarm Enable Position */
#define RTC_CALALR_DATEEN_Msk                 (_UINT32_(0x1) << RTC_CALALR_DATEEN_Pos)             /* (RTC_CALALR) Date Alarm Enable Mask */
#define RTC_CALALR_DATEEN(value)              (RTC_CALALR_DATEEN_Msk & (_UINT32_(value) << RTC_CALALR_DATEEN_Pos)) /* Assigment of value for DATEEN in the RTC_CALALR register */
#define   RTC_CALALR_DATEEN_DISABLED_Val      _UINT32_(0x0)                                        /* (RTC_CALALR) The date-matching alarm is disabled.  */
#define   RTC_CALALR_DATEEN_ENABLED_Val       _UINT32_(0x1)                                        /* (RTC_CALALR) The date-matching alarm is enabled.  */
#define RTC_CALALR_DATEEN_DISABLED            (RTC_CALALR_DATEEN_DISABLED_Val << RTC_CALALR_DATEEN_Pos) /* (RTC_CALALR) The date-matching alarm is disabled. Position  */
#define RTC_CALALR_DATEEN_ENABLED             (RTC_CALALR_DATEEN_ENABLED_Val << RTC_CALALR_DATEEN_Pos) /* (RTC_CALALR) The date-matching alarm is enabled. Position  */
#define RTC_CALALR_Msk                        _UINT32_(0xBF9F0000)                                 /* (RTC_CALALR) Register Mask  */

/* UTC mode */
#define RTC_CALALR_UTC_Msk                    _UINT32_(0x00000000)                                  /* (RTC_CALALR_UTC) Register Mask  */


/* -------- RTC_SR : (RTC Offset: 0x18) ( R/ 32) Status Register -------- */
#define RTC_SR_ACKUPD_Pos                     _UINT32_(0)                                          /* (RTC_SR) Acknowledge for Update Position */
#define RTC_SR_ACKUPD_Msk                     (_UINT32_(0x1) << RTC_SR_ACKUPD_Pos)                 /* (RTC_SR) Acknowledge for Update Mask */
#define RTC_SR_ACKUPD(value)                  (RTC_SR_ACKUPD_Msk & (_UINT32_(value) << RTC_SR_ACKUPD_Pos)) /* Assigment of value for ACKUPD in the RTC_SR register */
#define   RTC_SR_ACKUPD_FREERUN_Val           _UINT32_(0x0)                                        /* (RTC_SR) Time and calendar registers cannot be updated.  */
#define   RTC_SR_ACKUPD_UPDATE_Val            _UINT32_(0x1)                                        /* (RTC_SR) Time and calendar registers can be updated.  */
#define RTC_SR_ACKUPD_FREERUN                 (RTC_SR_ACKUPD_FREERUN_Val << RTC_SR_ACKUPD_Pos)     /* (RTC_SR) Time and calendar registers cannot be updated. Position  */
#define RTC_SR_ACKUPD_UPDATE                  (RTC_SR_ACKUPD_UPDATE_Val << RTC_SR_ACKUPD_Pos)      /* (RTC_SR) Time and calendar registers can be updated. Position  */
#define RTC_SR_ALARM_Pos                      _UINT32_(1)                                          /* (RTC_SR) Alarm Flag Position */
#define RTC_SR_ALARM_Msk                      (_UINT32_(0x1) << RTC_SR_ALARM_Pos)                  /* (RTC_SR) Alarm Flag Mask */
#define RTC_SR_ALARM(value)                   (RTC_SR_ALARM_Msk & (_UINT32_(value) << RTC_SR_ALARM_Pos)) /* Assigment of value for ALARM in the RTC_SR register */
#define   RTC_SR_ALARM_NO_ALARMEVENT_Val      _UINT32_(0x0)                                        /* (RTC_SR) No alarm matching condition occurred.  */
#define   RTC_SR_ALARM_ALARMEVENT_Val         _UINT32_(0x1)                                        /* (RTC_SR) An alarm matching condition has occurred.  */
#define RTC_SR_ALARM_NO_ALARMEVENT            (RTC_SR_ALARM_NO_ALARMEVENT_Val << RTC_SR_ALARM_Pos) /* (RTC_SR) No alarm matching condition occurred. Position  */
#define RTC_SR_ALARM_ALARMEVENT               (RTC_SR_ALARM_ALARMEVENT_Val << RTC_SR_ALARM_Pos)    /* (RTC_SR) An alarm matching condition has occurred. Position  */
#define RTC_SR_SEC_Pos                        _UINT32_(2)                                          /* (RTC_SR) Second Event Position */
#define RTC_SR_SEC_Msk                        (_UINT32_(0x1) << RTC_SR_SEC_Pos)                    /* (RTC_SR) Second Event Mask */
#define RTC_SR_SEC(value)                     (RTC_SR_SEC_Msk & (_UINT32_(value) << RTC_SR_SEC_Pos)) /* Assigment of value for SEC in the RTC_SR register */
#define   RTC_SR_SEC_NO_SECEVENT_Val          _UINT32_(0x0)                                        /* (RTC_SR) No second event has occurred since the last clear.  */
#define   RTC_SR_SEC_SECEVENT_Val             _UINT32_(0x1)                                        /* (RTC_SR) At least one second event has occurred since the last clear.  */
#define RTC_SR_SEC_NO_SECEVENT                (RTC_SR_SEC_NO_SECEVENT_Val << RTC_SR_SEC_Pos)       /* (RTC_SR) No second event has occurred since the last clear. Position  */
#define RTC_SR_SEC_SECEVENT                   (RTC_SR_SEC_SECEVENT_Val << RTC_SR_SEC_Pos)          /* (RTC_SR) At least one second event has occurred since the last clear. Position  */
#define RTC_SR_TIMEV_Pos                      _UINT32_(3)                                          /* (RTC_SR) Time Event Position */
#define RTC_SR_TIMEV_Msk                      (_UINT32_(0x1) << RTC_SR_TIMEV_Pos)                  /* (RTC_SR) Time Event Mask */
#define RTC_SR_TIMEV(value)                   (RTC_SR_TIMEV_Msk & (_UINT32_(value) << RTC_SR_TIMEV_Pos)) /* Assigment of value for TIMEV in the RTC_SR register */
#define   RTC_SR_TIMEV_NO_TIMEVENT_Val        _UINT32_(0x0)                                        /* (RTC_SR) No time event has occurred since the last clear.  */
#define   RTC_SR_TIMEV_TIMEVENT_Val           _UINT32_(0x1)                                        /* (RTC_SR) At least one time event has occurred since the last clear.  */
#define RTC_SR_TIMEV_NO_TIMEVENT              (RTC_SR_TIMEV_NO_TIMEVENT_Val << RTC_SR_TIMEV_Pos)   /* (RTC_SR) No time event has occurred since the last clear. Position  */
#define RTC_SR_TIMEV_TIMEVENT                 (RTC_SR_TIMEV_TIMEVENT_Val << RTC_SR_TIMEV_Pos)      /* (RTC_SR) At least one time event has occurred since the last clear. Position  */
#define RTC_SR_CALEV_Pos                      _UINT32_(4)                                          /* (RTC_SR) Calendar Event Position */
#define RTC_SR_CALEV_Msk                      (_UINT32_(0x1) << RTC_SR_CALEV_Pos)                  /* (RTC_SR) Calendar Event Mask */
#define RTC_SR_CALEV(value)                   (RTC_SR_CALEV_Msk & (_UINT32_(value) << RTC_SR_CALEV_Pos)) /* Assigment of value for CALEV in the RTC_SR register */
#define   RTC_SR_CALEV_NO_CALEVENT_Val        _UINT32_(0x0)                                        /* (RTC_SR) No calendar event has occurred since the last clear.  */
#define   RTC_SR_CALEV_CALEVENT_Val           _UINT32_(0x1)                                        /* (RTC_SR) At least one calendar event has occurred since the last clear.  */
#define RTC_SR_CALEV_NO_CALEVENT              (RTC_SR_CALEV_NO_CALEVENT_Val << RTC_SR_CALEV_Pos)   /* (RTC_SR) No calendar event has occurred since the last clear. Position  */
#define RTC_SR_CALEV_CALEVENT                 (RTC_SR_CALEV_CALEVENT_Val << RTC_SR_CALEV_Pos)      /* (RTC_SR) At least one calendar event has occurred since the last clear. Position  */
#define RTC_SR_TDERR_Pos                      _UINT32_(5)                                          /* (RTC_SR) Time and/or Date Free Running Error Position */
#define RTC_SR_TDERR_Msk                      (_UINT32_(0x1) << RTC_SR_TDERR_Pos)                  /* (RTC_SR) Time and/or Date Free Running Error Mask */
#define RTC_SR_TDERR(value)                   (RTC_SR_TDERR_Msk & (_UINT32_(value) << RTC_SR_TDERR_Pos)) /* Assigment of value for TDERR in the RTC_SR register */
#define   RTC_SR_TDERR_CORRECT_Val            _UINT32_(0x0)                                        /* (RTC_SR) The internal free running counters are carrying valid values since the last read of the Status Register (RTC_SR).  */
#define   RTC_SR_TDERR_ERR_TIMEDATE_Val       _UINT32_(0x1)                                        /* (RTC_SR) The internal free running counters have been corrupted (invalid date or time, non-BCD values) since the last read and/or they are still invalid.  */
#define RTC_SR_TDERR_CORRECT                  (RTC_SR_TDERR_CORRECT_Val << RTC_SR_TDERR_Pos)       /* (RTC_SR) The internal free running counters are carrying valid values since the last read of the Status Register (RTC_SR). Position  */
#define RTC_SR_TDERR_ERR_TIMEDATE             (RTC_SR_TDERR_ERR_TIMEDATE_Val << RTC_SR_TDERR_Pos)  /* (RTC_SR) The internal free running counters have been corrupted (invalid date or time, non-BCD values) since the last read and/or they are still invalid. Position  */
#define RTC_SR_Msk                            _UINT32_(0x0000003F)                                 /* (RTC_SR) Register Mask  */


/* -------- RTC_SCCR : (RTC Offset: 0x1C) ( /W 32) Status Clear Command Register -------- */
#define RTC_SCCR_ACKCLR_Pos                   _UINT32_(0)                                          /* (RTC_SCCR) Acknowledge Clear Position */
#define RTC_SCCR_ACKCLR_Msk                   (_UINT32_(0x1) << RTC_SCCR_ACKCLR_Pos)               /* (RTC_SCCR) Acknowledge Clear Mask */
#define RTC_SCCR_ACKCLR(value)                (RTC_SCCR_ACKCLR_Msk & (_UINT32_(value) << RTC_SCCR_ACKCLR_Pos)) /* Assigment of value for ACKCLR in the RTC_SCCR register */
#define RTC_SCCR_ALRCLR_Pos                   _UINT32_(1)                                          /* (RTC_SCCR) Alarm Clear Position */
#define RTC_SCCR_ALRCLR_Msk                   (_UINT32_(0x1) << RTC_SCCR_ALRCLR_Pos)               /* (RTC_SCCR) Alarm Clear Mask */
#define RTC_SCCR_ALRCLR(value)                (RTC_SCCR_ALRCLR_Msk & (_UINT32_(value) << RTC_SCCR_ALRCLR_Pos)) /* Assigment of value for ALRCLR in the RTC_SCCR register */
#define RTC_SCCR_SECCLR_Pos                   _UINT32_(2)                                          /* (RTC_SCCR) Second Clear Position */
#define RTC_SCCR_SECCLR_Msk                   (_UINT32_(0x1) << RTC_SCCR_SECCLR_Pos)               /* (RTC_SCCR) Second Clear Mask */
#define RTC_SCCR_SECCLR(value)                (RTC_SCCR_SECCLR_Msk & (_UINT32_(value) << RTC_SCCR_SECCLR_Pos)) /* Assigment of value for SECCLR in the RTC_SCCR register */
#define RTC_SCCR_TIMCLR_Pos                   _UINT32_(3)                                          /* (RTC_SCCR) Time Clear Position */
#define RTC_SCCR_TIMCLR_Msk                   (_UINT32_(0x1) << RTC_SCCR_TIMCLR_Pos)               /* (RTC_SCCR) Time Clear Mask */
#define RTC_SCCR_TIMCLR(value)                (RTC_SCCR_TIMCLR_Msk & (_UINT32_(value) << RTC_SCCR_TIMCLR_Pos)) /* Assigment of value for TIMCLR in the RTC_SCCR register */
#define RTC_SCCR_CALCLR_Pos                   _UINT32_(4)                                          /* (RTC_SCCR) Calendar Clear Position */
#define RTC_SCCR_CALCLR_Msk                   (_UINT32_(0x1) << RTC_SCCR_CALCLR_Pos)               /* (RTC_SCCR) Calendar Clear Mask */
#define RTC_SCCR_CALCLR(value)                (RTC_SCCR_CALCLR_Msk & (_UINT32_(value) << RTC_SCCR_CALCLR_Pos)) /* Assigment of value for CALCLR in the RTC_SCCR register */
#define RTC_SCCR_TDERRCLR_Pos                 _UINT32_(5)                                          /* (RTC_SCCR) Time and/or Date Free Running Error Clear Position */
#define RTC_SCCR_TDERRCLR_Msk                 (_UINT32_(0x1) << RTC_SCCR_TDERRCLR_Pos)             /* (RTC_SCCR) Time and/or Date Free Running Error Clear Mask */
#define RTC_SCCR_TDERRCLR(value)              (RTC_SCCR_TDERRCLR_Msk & (_UINT32_(value) << RTC_SCCR_TDERRCLR_Pos)) /* Assigment of value for TDERRCLR in the RTC_SCCR register */
#define RTC_SCCR_Msk                          _UINT32_(0x0000003F)                                 /* (RTC_SCCR) Register Mask  */


/* -------- RTC_IER : (RTC Offset: 0x20) ( /W 32) Interrupt Enable Register -------- */
#define RTC_IER_ACKEN_Pos                     _UINT32_(0)                                          /* (RTC_IER) Acknowledge Update Interrupt Enable Position */
#define RTC_IER_ACKEN_Msk                     (_UINT32_(0x1) << RTC_IER_ACKEN_Pos)                 /* (RTC_IER) Acknowledge Update Interrupt Enable Mask */
#define RTC_IER_ACKEN(value)                  (RTC_IER_ACKEN_Msk & (_UINT32_(value) << RTC_IER_ACKEN_Pos)) /* Assigment of value for ACKEN in the RTC_IER register */
#define RTC_IER_ALREN_Pos                     _UINT32_(1)                                          /* (RTC_IER) Alarm Interrupt Enable Position */
#define RTC_IER_ALREN_Msk                     (_UINT32_(0x1) << RTC_IER_ALREN_Pos)                 /* (RTC_IER) Alarm Interrupt Enable Mask */
#define RTC_IER_ALREN(value)                  (RTC_IER_ALREN_Msk & (_UINT32_(value) << RTC_IER_ALREN_Pos)) /* Assigment of value for ALREN in the RTC_IER register */
#define RTC_IER_SECEN_Pos                     _UINT32_(2)                                          /* (RTC_IER) Second Event Interrupt Enable Position */
#define RTC_IER_SECEN_Msk                     (_UINT32_(0x1) << RTC_IER_SECEN_Pos)                 /* (RTC_IER) Second Event Interrupt Enable Mask */
#define RTC_IER_SECEN(value)                  (RTC_IER_SECEN_Msk & (_UINT32_(value) << RTC_IER_SECEN_Pos)) /* Assigment of value for SECEN in the RTC_IER register */
#define RTC_IER_TIMEN_Pos                     _UINT32_(3)                                          /* (RTC_IER) Time Event Interrupt Enable Position */
#define RTC_IER_TIMEN_Msk                     (_UINT32_(0x1) << RTC_IER_TIMEN_Pos)                 /* (RTC_IER) Time Event Interrupt Enable Mask */
#define RTC_IER_TIMEN(value)                  (RTC_IER_TIMEN_Msk & (_UINT32_(value) << RTC_IER_TIMEN_Pos)) /* Assigment of value for TIMEN in the RTC_IER register */
#define RTC_IER_CALEN_Pos                     _UINT32_(4)                                          /* (RTC_IER) Calendar Event Interrupt Enable Position */
#define RTC_IER_CALEN_Msk                     (_UINT32_(0x1) << RTC_IER_CALEN_Pos)                 /* (RTC_IER) Calendar Event Interrupt Enable Mask */
#define RTC_IER_CALEN(value)                  (RTC_IER_CALEN_Msk & (_UINT32_(value) << RTC_IER_CALEN_Pos)) /* Assigment of value for CALEN in the RTC_IER register */
#define RTC_IER_TDERREN_Pos                   _UINT32_(5)                                          /* (RTC_IER) Time and/or Date Error Interrupt Enable Position */
#define RTC_IER_TDERREN_Msk                   (_UINT32_(0x1) << RTC_IER_TDERREN_Pos)               /* (RTC_IER) Time and/or Date Error Interrupt Enable Mask */
#define RTC_IER_TDERREN(value)                (RTC_IER_TDERREN_Msk & (_UINT32_(value) << RTC_IER_TDERREN_Pos)) /* Assigment of value for TDERREN in the RTC_IER register */
#define RTC_IER_Msk                           _UINT32_(0x0000003F)                                 /* (RTC_IER) Register Mask  */


/* -------- RTC_IDR : (RTC Offset: 0x24) ( /W 32) Interrupt Disable Register -------- */
#define RTC_IDR_ACKDIS_Pos                    _UINT32_(0)                                          /* (RTC_IDR) Acknowledge Update Interrupt Disable Position */
#define RTC_IDR_ACKDIS_Msk                    (_UINT32_(0x1) << RTC_IDR_ACKDIS_Pos)                /* (RTC_IDR) Acknowledge Update Interrupt Disable Mask */
#define RTC_IDR_ACKDIS(value)                 (RTC_IDR_ACKDIS_Msk & (_UINT32_(value) << RTC_IDR_ACKDIS_Pos)) /* Assigment of value for ACKDIS in the RTC_IDR register */
#define RTC_IDR_ALRDIS_Pos                    _UINT32_(1)                                          /* (RTC_IDR) Alarm Interrupt Disable Position */
#define RTC_IDR_ALRDIS_Msk                    (_UINT32_(0x1) << RTC_IDR_ALRDIS_Pos)                /* (RTC_IDR) Alarm Interrupt Disable Mask */
#define RTC_IDR_ALRDIS(value)                 (RTC_IDR_ALRDIS_Msk & (_UINT32_(value) << RTC_IDR_ALRDIS_Pos)) /* Assigment of value for ALRDIS in the RTC_IDR register */
#define RTC_IDR_SECDIS_Pos                    _UINT32_(2)                                          /* (RTC_IDR) Second Event Interrupt Disable Position */
#define RTC_IDR_SECDIS_Msk                    (_UINT32_(0x1) << RTC_IDR_SECDIS_Pos)                /* (RTC_IDR) Second Event Interrupt Disable Mask */
#define RTC_IDR_SECDIS(value)                 (RTC_IDR_SECDIS_Msk & (_UINT32_(value) << RTC_IDR_SECDIS_Pos)) /* Assigment of value for SECDIS in the RTC_IDR register */
#define RTC_IDR_TIMDIS_Pos                    _UINT32_(3)                                          /* (RTC_IDR) Time Event Interrupt Disable Position */
#define RTC_IDR_TIMDIS_Msk                    (_UINT32_(0x1) << RTC_IDR_TIMDIS_Pos)                /* (RTC_IDR) Time Event Interrupt Disable Mask */
#define RTC_IDR_TIMDIS(value)                 (RTC_IDR_TIMDIS_Msk & (_UINT32_(value) << RTC_IDR_TIMDIS_Pos)) /* Assigment of value for TIMDIS in the RTC_IDR register */
#define RTC_IDR_CALDIS_Pos                    _UINT32_(4)                                          /* (RTC_IDR) Calendar Event Interrupt Disable Position */
#define RTC_IDR_CALDIS_Msk                    (_UINT32_(0x1) << RTC_IDR_CALDIS_Pos)                /* (RTC_IDR) Calendar Event Interrupt Disable Mask */
#define RTC_IDR_CALDIS(value)                 (RTC_IDR_CALDIS_Msk & (_UINT32_(value) << RTC_IDR_CALDIS_Pos)) /* Assigment of value for CALDIS in the RTC_IDR register */
#define RTC_IDR_TDERRDIS_Pos                  _UINT32_(5)                                          /* (RTC_IDR) Time and/or Date Error Interrupt Disable Position */
#define RTC_IDR_TDERRDIS_Msk                  (_UINT32_(0x1) << RTC_IDR_TDERRDIS_Pos)              /* (RTC_IDR) Time and/or Date Error Interrupt Disable Mask */
#define RTC_IDR_TDERRDIS(value)               (RTC_IDR_TDERRDIS_Msk & (_UINT32_(value) << RTC_IDR_TDERRDIS_Pos)) /* Assigment of value for TDERRDIS in the RTC_IDR register */
#define RTC_IDR_Msk                           _UINT32_(0x0000003F)                                 /* (RTC_IDR) Register Mask  */


/* -------- RTC_IMR : (RTC Offset: 0x28) ( R/ 32) Interrupt Mask Register -------- */
#define RTC_IMR_ACK_Pos                       _UINT32_(0)                                          /* (RTC_IMR) Acknowledge Update Interrupt Mask Position */
#define RTC_IMR_ACK_Msk                       (_UINT32_(0x1) << RTC_IMR_ACK_Pos)                   /* (RTC_IMR) Acknowledge Update Interrupt Mask Mask */
#define RTC_IMR_ACK(value)                    (RTC_IMR_ACK_Msk & (_UINT32_(value) << RTC_IMR_ACK_Pos)) /* Assigment of value for ACK in the RTC_IMR register */
#define RTC_IMR_ALR_Pos                       _UINT32_(1)                                          /* (RTC_IMR) Alarm Interrupt Mask Position */
#define RTC_IMR_ALR_Msk                       (_UINT32_(0x1) << RTC_IMR_ALR_Pos)                   /* (RTC_IMR) Alarm Interrupt Mask Mask */
#define RTC_IMR_ALR(value)                    (RTC_IMR_ALR_Msk & (_UINT32_(value) << RTC_IMR_ALR_Pos)) /* Assigment of value for ALR in the RTC_IMR register */
#define RTC_IMR_SEC_Pos                       _UINT32_(2)                                          /* (RTC_IMR) Second Event Interrupt Mask Position */
#define RTC_IMR_SEC_Msk                       (_UINT32_(0x1) << RTC_IMR_SEC_Pos)                   /* (RTC_IMR) Second Event Interrupt Mask Mask */
#define RTC_IMR_SEC(value)                    (RTC_IMR_SEC_Msk & (_UINT32_(value) << RTC_IMR_SEC_Pos)) /* Assigment of value for SEC in the RTC_IMR register */
#define RTC_IMR_TIM_Pos                       _UINT32_(3)                                          /* (RTC_IMR) Time Event Interrupt Mask Position */
#define RTC_IMR_TIM_Msk                       (_UINT32_(0x1) << RTC_IMR_TIM_Pos)                   /* (RTC_IMR) Time Event Interrupt Mask Mask */
#define RTC_IMR_TIM(value)                    (RTC_IMR_TIM_Msk & (_UINT32_(value) << RTC_IMR_TIM_Pos)) /* Assigment of value for TIM in the RTC_IMR register */
#define RTC_IMR_CAL_Pos                       _UINT32_(4)                                          /* (RTC_IMR) Calendar Event Interrupt Mask Position */
#define RTC_IMR_CAL_Msk                       (_UINT32_(0x1) << RTC_IMR_CAL_Pos)                   /* (RTC_IMR) Calendar Event Interrupt Mask Mask */
#define RTC_IMR_CAL(value)                    (RTC_IMR_CAL_Msk & (_UINT32_(value) << RTC_IMR_CAL_Pos)) /* Assigment of value for CAL in the RTC_IMR register */
#define RTC_IMR_TDERR_Pos                     _UINT32_(5)                                          /* (RTC_IMR) Time and/or Date Error Mask Position */
#define RTC_IMR_TDERR_Msk                     (_UINT32_(0x1) << RTC_IMR_TDERR_Pos)                 /* (RTC_IMR) Time and/or Date Error Mask Mask */
#define RTC_IMR_TDERR(value)                  (RTC_IMR_TDERR_Msk & (_UINT32_(value) << RTC_IMR_TDERR_Pos)) /* Assigment of value for TDERR in the RTC_IMR register */
#define RTC_IMR_Msk                           _UINT32_(0x0000003F)                                 /* (RTC_IMR) Register Mask  */


/* -------- RTC_VER : (RTC Offset: 0x2C) ( R/ 32) Valid Entry Register -------- */
#define RTC_VER_NVTIM_Pos                     _UINT32_(0)                                          /* (RTC_VER) Non-valid Time Position */
#define RTC_VER_NVTIM_Msk                     (_UINT32_(0x1) << RTC_VER_NVTIM_Pos)                 /* (RTC_VER) Non-valid Time Mask */
#define RTC_VER_NVTIM(value)                  (RTC_VER_NVTIM_Msk & (_UINT32_(value) << RTC_VER_NVTIM_Pos)) /* Assigment of value for NVTIM in the RTC_VER register */
#define RTC_VER_NVCAL_Pos                     _UINT32_(1)                                          /* (RTC_VER) Non-valid Calendar Position */
#define RTC_VER_NVCAL_Msk                     (_UINT32_(0x1) << RTC_VER_NVCAL_Pos)                 /* (RTC_VER) Non-valid Calendar Mask */
#define RTC_VER_NVCAL(value)                  (RTC_VER_NVCAL_Msk & (_UINT32_(value) << RTC_VER_NVCAL_Pos)) /* Assigment of value for NVCAL in the RTC_VER register */
#define RTC_VER_NVTIMALR_Pos                  _UINT32_(2)                                          /* (RTC_VER) Non-valid Time Alarm Position */
#define RTC_VER_NVTIMALR_Msk                  (_UINT32_(0x1) << RTC_VER_NVTIMALR_Pos)              /* (RTC_VER) Non-valid Time Alarm Mask */
#define RTC_VER_NVTIMALR(value)               (RTC_VER_NVTIMALR_Msk & (_UINT32_(value) << RTC_VER_NVTIMALR_Pos)) /* Assigment of value for NVTIMALR in the RTC_VER register */
#define RTC_VER_NVCALALR_Pos                  _UINT32_(3)                                          /* (RTC_VER) Non-valid Calendar Alarm Position */
#define RTC_VER_NVCALALR_Msk                  (_UINT32_(0x1) << RTC_VER_NVCALALR_Pos)              /* (RTC_VER) Non-valid Calendar Alarm Mask */
#define RTC_VER_NVCALALR(value)               (RTC_VER_NVCALALR_Msk & (_UINT32_(value) << RTC_VER_NVCALALR_Pos)) /* Assigment of value for NVCALALR in the RTC_VER register */
#define RTC_VER_Msk                           _UINT32_(0x0000000F)                                 /* (RTC_VER) Register Mask  */


/* -------- RTC_TCR : (RTC Offset: 0x34) (R/W 32) Tamper Control Register -------- */
#define RTC_TCR_TAMPEN0_Pos                   _UINT32_(0)                                          /* (RTC_TCR) Timestamping on TMPx input is enabled Position */
#define RTC_TCR_TAMPEN0_Msk                   (_UINT32_(0x1) << RTC_TCR_TAMPEN0_Pos)               /* (RTC_TCR) Timestamping on TMPx input is enabled Mask */
#define RTC_TCR_TAMPEN0(value)                (RTC_TCR_TAMPEN0_Msk & (_UINT32_(value) << RTC_TCR_TAMPEN0_Pos)) /* Assigment of value for TAMPEN0 in the RTC_TCR register */
#define   RTC_TCR_TAMPEN0_TIMESTAMP_OFF_Val   _UINT32_(0x0)                                        /* (RTC_TCR) Tamper event on TMPx input is not timestamped.  */
#define   RTC_TCR_TAMPEN0_TIMESTAMP_ON_Val    _UINT32_(0x1)                                        /* (RTC_TCR) Tamper event on TMPx input is timestamped.  */
#define RTC_TCR_TAMPEN0_TIMESTAMP_OFF         (RTC_TCR_TAMPEN0_TIMESTAMP_OFF_Val << RTC_TCR_TAMPEN0_Pos) /* (RTC_TCR) Tamper event on TMPx input is not timestamped. Position  */
#define RTC_TCR_TAMPEN0_TIMESTAMP_ON          (RTC_TCR_TAMPEN0_TIMESTAMP_ON_Val << RTC_TCR_TAMPEN0_Pos) /* (RTC_TCR) Tamper event on TMPx input is timestamped. Position  */
#define RTC_TCR_TAMPEN1_Pos                   _UINT32_(1)                                          /* (RTC_TCR) Timestamping on TMPx input is enabled Position */
#define RTC_TCR_TAMPEN1_Msk                   (_UINT32_(0x1) << RTC_TCR_TAMPEN1_Pos)               /* (RTC_TCR) Timestamping on TMPx input is enabled Mask */
#define RTC_TCR_TAMPEN1(value)                (RTC_TCR_TAMPEN1_Msk & (_UINT32_(value) << RTC_TCR_TAMPEN1_Pos)) /* Assigment of value for TAMPEN1 in the RTC_TCR register */
#define   RTC_TCR_TAMPEN1_TIMESTAMP_OFF_Val   _UINT32_(0x0)                                        /* (RTC_TCR) Tamper event on TMPx input is not timestamped.  */
#define   RTC_TCR_TAMPEN1_TIMESTAMP_ON_Val    _UINT32_(0x1)                                        /* (RTC_TCR) Tamper event on TMPx input is timestamped.  */
#define RTC_TCR_TAMPEN1_TIMESTAMP_OFF         (RTC_TCR_TAMPEN1_TIMESTAMP_OFF_Val << RTC_TCR_TAMPEN1_Pos) /* (RTC_TCR) Tamper event on TMPx input is not timestamped. Position  */
#define RTC_TCR_TAMPEN1_TIMESTAMP_ON          (RTC_TCR_TAMPEN1_TIMESTAMP_ON_Val << RTC_TCR_TAMPEN1_Pos) /* (RTC_TCR) Tamper event on TMPx input is timestamped. Position  */
#define RTC_TCR_TAMPEN2_Pos                   _UINT32_(2)                                          /* (RTC_TCR) Timestamping on TMPx input is enabled Position */
#define RTC_TCR_TAMPEN2_Msk                   (_UINT32_(0x1) << RTC_TCR_TAMPEN2_Pos)               /* (RTC_TCR) Timestamping on TMPx input is enabled Mask */
#define RTC_TCR_TAMPEN2(value)                (RTC_TCR_TAMPEN2_Msk & (_UINT32_(value) << RTC_TCR_TAMPEN2_Pos)) /* Assigment of value for TAMPEN2 in the RTC_TCR register */
#define   RTC_TCR_TAMPEN2_TIMESTAMP_OFF_Val   _UINT32_(0x0)                                        /* (RTC_TCR) Tamper event on TMPx input is not timestamped.  */
#define   RTC_TCR_TAMPEN2_TIMESTAMP_ON_Val    _UINT32_(0x1)                                        /* (RTC_TCR) Tamper event on TMPx input is timestamped.  */
#define RTC_TCR_TAMPEN2_TIMESTAMP_OFF         (RTC_TCR_TAMPEN2_TIMESTAMP_OFF_Val << RTC_TCR_TAMPEN2_Pos) /* (RTC_TCR) Tamper event on TMPx input is not timestamped. Position  */
#define RTC_TCR_TAMPEN2_TIMESTAMP_ON          (RTC_TCR_TAMPEN2_TIMESTAMP_ON_Val << RTC_TCR_TAMPEN2_Pos) /* (RTC_TCR) Tamper event on TMPx input is timestamped. Position  */
#define RTC_TCR_TAMPEN3_Pos                   _UINT32_(3)                                          /* (RTC_TCR) Timestamping on TMPx input is enabled Position */
#define RTC_TCR_TAMPEN3_Msk                   (_UINT32_(0x1) << RTC_TCR_TAMPEN3_Pos)               /* (RTC_TCR) Timestamping on TMPx input is enabled Mask */
#define RTC_TCR_TAMPEN3(value)                (RTC_TCR_TAMPEN3_Msk & (_UINT32_(value) << RTC_TCR_TAMPEN3_Pos)) /* Assigment of value for TAMPEN3 in the RTC_TCR register */
#define   RTC_TCR_TAMPEN3_TIMESTAMP_OFF_Val   _UINT32_(0x0)                                        /* (RTC_TCR) Tamper event on TMPx input is not timestamped.  */
#define   RTC_TCR_TAMPEN3_TIMESTAMP_ON_Val    _UINT32_(0x1)                                        /* (RTC_TCR) Tamper event on TMPx input is timestamped.  */
#define RTC_TCR_TAMPEN3_TIMESTAMP_OFF         (RTC_TCR_TAMPEN3_TIMESTAMP_OFF_Val << RTC_TCR_TAMPEN3_Pos) /* (RTC_TCR) Tamper event on TMPx input is not timestamped. Position  */
#define RTC_TCR_TAMPEN3_TIMESTAMP_ON          (RTC_TCR_TAMPEN3_TIMESTAMP_ON_Val << RTC_TCR_TAMPEN3_Pos) /* (RTC_TCR) Tamper event on TMPx input is timestamped. Position  */
#define RTC_TCR_TAMPEN4_Pos                   _UINT32_(4)                                          /* (RTC_TCR) Timestamping on TMPx input is enabled Position */
#define RTC_TCR_TAMPEN4_Msk                   (_UINT32_(0x1) << RTC_TCR_TAMPEN4_Pos)               /* (RTC_TCR) Timestamping on TMPx input is enabled Mask */
#define RTC_TCR_TAMPEN4(value)                (RTC_TCR_TAMPEN4_Msk & (_UINT32_(value) << RTC_TCR_TAMPEN4_Pos)) /* Assigment of value for TAMPEN4 in the RTC_TCR register */
#define   RTC_TCR_TAMPEN4_TIMESTAMP_OFF_Val   _UINT32_(0x0)                                        /* (RTC_TCR) Tamper event on TMPx input is not timestamped.  */
#define   RTC_TCR_TAMPEN4_TIMESTAMP_ON_Val    _UINT32_(0x1)                                        /* (RTC_TCR) Tamper event on TMPx input is timestamped.  */
#define RTC_TCR_TAMPEN4_TIMESTAMP_OFF         (RTC_TCR_TAMPEN4_TIMESTAMP_OFF_Val << RTC_TCR_TAMPEN4_Pos) /* (RTC_TCR) Tamper event on TMPx input is not timestamped. Position  */
#define RTC_TCR_TAMPEN4_TIMESTAMP_ON          (RTC_TCR_TAMPEN4_TIMESTAMP_ON_Val << RTC_TCR_TAMPEN4_Pos) /* (RTC_TCR) Tamper event on TMPx input is timestamped. Position  */
#define RTC_TCR_TAMPCLR_Pos                   _UINT32_(16)                                         /* (RTC_TCR) Tamper Clear Position */
#define RTC_TCR_TAMPCLR_Msk                   (_UINT32_(0x1) << RTC_TCR_TAMPCLR_Pos)               /* (RTC_TCR) Tamper Clear Mask */
#define RTC_TCR_TAMPCLR(value)                (RTC_TCR_TAMPCLR_Msk & (_UINT32_(value) << RTC_TCR_TAMPCLR_Pos)) /* Assigment of value for TAMPCLR in the RTC_TCR register */
#define   RTC_TCR_TAMPCLR_NOT_ENABLE_Val      _UINT32_(0x0)                                        /* (RTC_TCR) A Tamper event does not create an immediate clear on GPBR registers.  */
#define   RTC_TCR_TAMPCLR_ENABLE_Val          _UINT32_(0x1)                                        /* (RTC_TCR) Tamper event on TMP0 or TMP4 generates an immediate clear on GPBR registers. The number of cleared GPBR registers depends on the value of FGPBRCLR.  */
#define RTC_TCR_TAMPCLR_NOT_ENABLE            (RTC_TCR_TAMPCLR_NOT_ENABLE_Val << RTC_TCR_TAMPCLR_Pos) /* (RTC_TCR) A Tamper event does not create an immediate clear on GPBR registers. Position  */
#define RTC_TCR_TAMPCLR_ENABLE                (RTC_TCR_TAMPCLR_ENABLE_Val << RTC_TCR_TAMPCLR_Pos)  /* (RTC_TCR) Tamper event on TMP0 or TMP4 generates an immediate clear on GPBR registers. The number of cleared GPBR registers depends on the value of FGPBRCLR. Position  */
#define RTC_TCR_FGPBRCLR_Pos                  _UINT32_(17)                                         /* (RTC_TCR) Full GPBR Clear Position */
#define RTC_TCR_FGPBRCLR_Msk                  (_UINT32_(0x1) << RTC_TCR_FGPBRCLR_Pos)              /* (RTC_TCR) Full GPBR Clear Mask */
#define RTC_TCR_FGPBRCLR(value)               (RTC_TCR_FGPBRCLR_Msk & (_UINT32_(value) << RTC_TCR_FGPBRCLR_Pos)) /* Assigment of value for FGPBRCLR in the RTC_TCR register */
#define   RTC_TCR_FGPBRCLR_HALF_Val           _UINT32_(0x0)                                        /* (RTC_TCR) If TAMPCLR is set to '1', a tamper event immediately clears GPBR0 to GPBR11.  */
#define   RTC_TCR_FGPBRCLR_FULL_Val           _UINT32_(0x1)                                        /* (RTC_TCR) If TAMPCLR is set to '1', a tamper event immediately clears all GPBRs.  */
#define RTC_TCR_FGPBRCLR_HALF                 (RTC_TCR_FGPBRCLR_HALF_Val << RTC_TCR_FGPBRCLR_Pos)  /* (RTC_TCR) If TAMPCLR is set to '1', a tamper event immediately clears GPBR0 to GPBR11. Position  */
#define RTC_TCR_FGPBRCLR_FULL                 (RTC_TCR_FGPBRCLR_FULL_Val << RTC_TCR_FGPBRCLR_Pos)  /* (RTC_TCR) If TAMPCLR is set to '1', a tamper event immediately clears all GPBRs. Position  */
#define RTC_TCR_Msk                           _UINT32_(0x0003001F)                                 /* (RTC_TCR) Register Mask  */

#define RTC_TCR_TAMPEN_Pos                    _UINT32_(0)                                          /* (RTC_TCR Position) Timestamping on TMPx input is enabled */
#define RTC_TCR_TAMPEN_Msk                    (_UINT32_(0x1F) << RTC_TCR_TAMPEN_Pos)               /* (RTC_TCR Mask) TAMPEN */
#define RTC_TCR_TAMPEN(value)                 (RTC_TCR_TAMPEN_Msk & (_UINT32_(value) << RTC_TCR_TAMPEN_Pos)) 

/* -------- RTC_TISR : (RTC Offset: 0x38) ( R/ 32) Tamper Input Status Register -------- */
#define RTC_TISR_TISR0_Pos                    _UINT32_(0)                                          /* (RTC_TISR) TMPx Input Status Register Position */
#define RTC_TISR_TISR0_Msk                    (_UINT32_(0x1) << RTC_TISR_TISR0_Pos)                /* (RTC_TISR) TMPx Input Status Register Mask */
#define RTC_TISR_TISR0(value)                 (RTC_TISR_TISR0_Msk & (_UINT32_(value) << RTC_TISR_TISR0_Pos)) /* Assigment of value for TISR0 in the RTC_TISR register */
#define RTC_TISR_TISR1_Pos                    _UINT32_(1)                                          /* (RTC_TISR) TMPx Input Status Register Position */
#define RTC_TISR_TISR1_Msk                    (_UINT32_(0x1) << RTC_TISR_TISR1_Pos)                /* (RTC_TISR) TMPx Input Status Register Mask */
#define RTC_TISR_TISR1(value)                 (RTC_TISR_TISR1_Msk & (_UINT32_(value) << RTC_TISR_TISR1_Pos)) /* Assigment of value for TISR1 in the RTC_TISR register */
#define RTC_TISR_TISR2_Pos                    _UINT32_(2)                                          /* (RTC_TISR) TMPx Input Status Register Position */
#define RTC_TISR_TISR2_Msk                    (_UINT32_(0x1) << RTC_TISR_TISR2_Pos)                /* (RTC_TISR) TMPx Input Status Register Mask */
#define RTC_TISR_TISR2(value)                 (RTC_TISR_TISR2_Msk & (_UINT32_(value) << RTC_TISR_TISR2_Pos)) /* Assigment of value for TISR2 in the RTC_TISR register */
#define RTC_TISR_TISR3_Pos                    _UINT32_(3)                                          /* (RTC_TISR) TMPx Input Status Register Position */
#define RTC_TISR_TISR3_Msk                    (_UINT32_(0x1) << RTC_TISR_TISR3_Pos)                /* (RTC_TISR) TMPx Input Status Register Mask */
#define RTC_TISR_TISR3(value)                 (RTC_TISR_TISR3_Msk & (_UINT32_(value) << RTC_TISR_TISR3_Pos)) /* Assigment of value for TISR3 in the RTC_TISR register */
#define RTC_TISR_TISR4_Pos                    _UINT32_(4)                                          /* (RTC_TISR) TMPx Input Status Register Position */
#define RTC_TISR_TISR4_Msk                    (_UINT32_(0x1) << RTC_TISR_TISR4_Pos)                /* (RTC_TISR) TMPx Input Status Register Mask */
#define RTC_TISR_TISR4(value)                 (RTC_TISR_TISR4_Msk & (_UINT32_(value) << RTC_TISR_TISR4_Pos)) /* Assigment of value for TISR4 in the RTC_TISR register */
#define RTC_TISR_Msk                          _UINT32_(0x0000001F)                                 /* (RTC_TISR) Register Mask  */

#define RTC_TISR_TISR_Pos                     _UINT32_(0)                                          /* (RTC_TISR Position) TMPx Input Status Register */
#define RTC_TISR_TISR_Msk                     (_UINT32_(0x1F) << RTC_TISR_TISR_Pos)                /* (RTC_TISR Mask) TISR */
#define RTC_TISR_TISR(value)                  (RTC_TISR_TISR_Msk & (_UINT32_(value) << RTC_TISR_TISR_Pos)) 

/** \brief RTC register offsets definitions */
#define RTC_FSTR_REG_OFST              _UINT32_(0x00)      /* (RTC_FSTR) First Stamping Time Register of Source 0 Offset */
#define RTC_FSDR_REG_OFST              _UINT32_(0x04)      /* (RTC_FSDR) First Stamping Date Register of Source 0 Offset */
#define RTC_LSTR_REG_OFST              _UINT32_(0x08)      /* (RTC_LSTR) Last Stamping Time Register of Source 0 Offset */
#define RTC_LSDR_REG_OFST              _UINT32_(0x0C)      /* (RTC_LSDR) Last Stamping Date Register of Source 0 Offset */
#define RTC_CR_REG_OFST                _UINT32_(0x00)      /* (RTC_CR) Control Register Offset */
#define RTC_MR_REG_OFST                _UINT32_(0x04)      /* (RTC_MR) Mode Register Offset */
#define RTC_TIMR_REG_OFST              _UINT32_(0x08)      /* (RTC_TIMR) Time Register Offset */
#define RTC_CALR_REG_OFST              _UINT32_(0x0C)      /* (RTC_CALR) Calendar Register Offset */
#define RTC_TIMALR_REG_OFST            _UINT32_(0x10)      /* (RTC_TIMALR) Time Alarm Register Offset */
#define RTC_CALALR_REG_OFST            _UINT32_(0x14)      /* (RTC_CALALR) Calendar Alarm Register Offset */
#define RTC_SR_REG_OFST                _UINT32_(0x18)      /* (RTC_SR) Status Register Offset */
#define RTC_SCCR_REG_OFST              _UINT32_(0x1C)      /* (RTC_SCCR) Status Clear Command Register Offset */
#define RTC_IER_REG_OFST               _UINT32_(0x20)      /* (RTC_IER) Interrupt Enable Register Offset */
#define RTC_IDR_REG_OFST               _UINT32_(0x24)      /* (RTC_IDR) Interrupt Disable Register Offset */
#define RTC_IMR_REG_OFST               _UINT32_(0x28)      /* (RTC_IMR) Interrupt Mask Register Offset */
#define RTC_VER_REG_OFST               _UINT32_(0x2C)      /* (RTC_VER) Valid Entry Register Offset */
#define RTC_TCR_REG_OFST               _UINT32_(0x34)      /* (RTC_TCR) Tamper Control Register Offset */
#define RTC_TISR_REG_OFST              _UINT32_(0x38)      /* (RTC_TISR) Tamper Input Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief RTC_SUB0 register API structure */
typedef struct
{
  __I   uint32_t                       RTC_FSTR;           /**< Offset: 0x00 (R/   32) First Stamping Time Register of Source 0 */
  __I   uint32_t                       RTC_FSDR;           /**< Offset: 0x04 (R/   32) First Stamping Date Register of Source 0 */
  __I   uint32_t                       RTC_LSTR;           /**< Offset: 0x08 (R/   32) Last Stamping Time Register of Source 0 */
  __I   uint32_t                       RTC_LSDR;           /**< Offset: 0x0C (R/   32) Last Stamping Date Register of Source 0 */
} rtc_sub0_registers_t;

#define RTC_SUB0_NUMBER 5

/** \brief RTC register API structure */
typedef struct
{
  __IO  uint32_t                       RTC_CR;             /**< Offset: 0x00 (R/W  32) Control Register */
  __IO  uint32_t                       RTC_MR;             /**< Offset: 0x04 (R/W  32) Mode Register */
  __IO  uint32_t                       RTC_TIMR;           /**< Offset: 0x08 (R/W  32) Time Register */
  __IO  uint32_t                       RTC_CALR;           /**< Offset: 0x0C (R/W  32) Calendar Register */
  __IO  uint32_t                       RTC_TIMALR;         /**< Offset: 0x10 (R/W  32) Time Alarm Register */
  __IO  uint32_t                       RTC_CALALR;         /**< Offset: 0x14 (R/W  32) Calendar Alarm Register */
  __I   uint32_t                       RTC_SR;             /**< Offset: 0x18 (R/   32) Status Register */
  __O   uint32_t                       RTC_SCCR;           /**< Offset: 0x1C ( /W  32) Status Clear Command Register */
  __O   uint32_t                       RTC_IER;            /**< Offset: 0x20 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       RTC_IDR;            /**< Offset: 0x24 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       RTC_IMR;            /**< Offset: 0x28 (R/   32) Interrupt Mask Register */
  __I   uint32_t                       RTC_VER;            /**< Offset: 0x2C (R/   32) Valid Entry Register */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       RTC_TCR;            /**< Offset: 0x34 (R/W  32) Tamper Control Register */
  __I   uint32_t                       RTC_TISR;           /**< Offset: 0x38 (R/   32) Tamper Input Status Register */
  __I   uint8_t                        Reserved2[0x04];
        rtc_sub0_registers_t           RTC_SUB0[RTC_SUB0_NUMBER]; /**< Offset: 0x40  */
} rtc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CXMTSH_RTC_COMPONENT_H_ */
