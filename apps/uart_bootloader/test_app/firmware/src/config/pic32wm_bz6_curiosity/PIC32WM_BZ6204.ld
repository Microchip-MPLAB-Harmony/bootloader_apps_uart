/*--------------------------------------------------------------------------
 * MPLAB XC32 Compiler -  PIC32WM_BZ6204 linker script
 * 
 * Copyright (c) 2025, Microchip Technology Inc. and its subsidiaries ("Microchip")
 * All rights reserved.
 * 
 * This software is developed by Microchip Technology Inc. and its
 * subsidiaries ("Microchip").
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are 
 * met:
 * 
 * 1.      Redistributions of source code must retain the above copyright
 *         notice, this list of conditions and the following disclaimer.
 * 2.      Redistributions in binary form must reproduce the above 
 *         copyright notice, this list of conditions and the following 
 *         disclaimer in the documentation and/or other materials provided 
 *         with the distribution.
 * 3.      Microchip's name may not be used to endorse or promote products
 *         derived from this software without specific prior written 
 *         permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY MICROCHIP "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR PURPOSE ARE DISCLAIMED. IN NO EVENT 
 * SHALL MICROCHIP BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING BUT NOT LIMITED TO
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWSOEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR 
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 */

OUTPUT_FORMAT("elf32-littlearm", "elf32-littlearm", "elf32-littlearm")
OUTPUT_ARCH(arm)
SEARCH_DIR(.)

/*
 *  Define the __XC32_RESET_HANDLER_NAME macro on the command line when you
 *  want to use a different name for the Reset Handler function.
 */
#ifndef __XC32_RESET_HANDLER_NAME
#define __XC32_RESET_HANDLER_NAME Reset_Handler
#endif /* __XC32_RESET_HANDLER_NAME */

/*  Set the entry point in the ELF file. Once the entry point is in the ELF
 *  file, you can then use the --write-sla option to xc32-bin2hex to place
 *  the address into the hex file using the SLA field (RECTYPE 5). This hex
 *  record may be useful for a bootloader that needs to determine the entry
 *  point to the application.
 */
ENTRY(__XC32_RESET_HANDLER_NAME)

/*************************************************************************
 * Memory-Region Macro Definitions
 * The XC32 linker preprocesses linker scripts. You may define these
 * macros in the MPLAB X project properties or on the command line when
 * calling the linker via the xc32-gcc shell.
 *************************************************************************/

#ifndef ROM_ORIGIN
#  define ROM_ORIGIN 0x1000200
#endif
#ifndef ROM_LENGTH
#  define ROM_LENGTH 0x1ffe00
#elif (ROM_LENGTH > 0x1ffe00)
#  error ROM_LENGTH is greater than the max size of 0x1ffe00
#endif
#ifndef RAM_ORIGIN
#  define RAM_ORIGIN 0x20000000
#endif
#ifndef RAM_LENGTH
#  define RAM_LENGTH 0x80000
#elif (RAM_LENGTH > 0x80000)
#  error RAM_LENGTH is greater than the max size of 0x80000
#endif



/*************************************************************************
 * Memory-Region Definitions
 * The MEMORY command describes the location and size of blocks of memory
 * on the target device. The command below uses the macros defined above.
 *************************************************************************/
MEMORY
{
  rom (LRX) : ORIGIN = ROM_ORIGIN, LENGTH = ROM_LENGTH
  ram (WX!R) : ORIGIN = RAM_ORIGIN, LENGTH = RAM_LENGTH
  config_00000000 : ORIGIN = 0x00000000, LENGTH = 0x1
  config_00000001 : ORIGIN = 0x00000001, LENGTH = 0x1
  config_00000002 : ORIGIN = 0x00000002, LENGTH = 0x1
  config_00000004 : ORIGIN = 0x00000004, LENGTH = 0x1
  config_00000005 : ORIGIN = 0x00000005, LENGTH = 0x1
  config_00000006 : ORIGIN = 0x00000006, LENGTH = 0x1
  config_00000007 : ORIGIN = 0x00000007, LENGTH = 0x1
  config_00000008 : ORIGIN = 0x00000008, LENGTH = 0x1
  config_00000009 : ORIGIN = 0x00000009, LENGTH = 0x1
  config_0000000A : ORIGIN = 0x0000000A, LENGTH = 0x1
  config_0000000B : ORIGIN = 0x0000000B, LENGTH = 0x1
  config_0000000C : ORIGIN = 0x0000000C, LENGTH = 0x1
  config_0000000D : ORIGIN = 0x0000000D, LENGTH = 0x1
  config_0000000E : ORIGIN = 0x0000000E, LENGTH = 0x1
  config_0000000F : ORIGIN = 0x0000000F, LENGTH = 0x1
  config_00000010 : ORIGIN = 0x00000010, LENGTH = 0x1
  config_00000011 : ORIGIN = 0x00000011, LENGTH = 0x1
  config_00000012 : ORIGIN = 0x00000012, LENGTH = 0x1
  config_00000013 : ORIGIN = 0x00000013, LENGTH = 0x1
  config_00000014 : ORIGIN = 0x00000014, LENGTH = 0x1
  config_00000015 : ORIGIN = 0x00000015, LENGTH = 0x1
  config_00000016 : ORIGIN = 0x00000016, LENGTH = 0x1
  config_00000017 : ORIGIN = 0x00000017, LENGTH = 0x1
  config_00000018 : ORIGIN = 0x00000018, LENGTH = 0x1
  config_00000019 : ORIGIN = 0x00000019, LENGTH = 0x1
  config_0000001A : ORIGIN = 0x0000001A, LENGTH = 0x1
  config_0000001B : ORIGIN = 0x0000001B, LENGTH = 0x1
  config_0000001C : ORIGIN = 0x0000001C, LENGTH = 0x1
  config_0000001D : ORIGIN = 0x0000001D, LENGTH = 0x1
  config_0000001E : ORIGIN = 0x0000001E, LENGTH = 0x1
  config_0000001F : ORIGIN = 0x0000001F, LENGTH = 0x1
  config_00000020 : ORIGIN = 0x00000020, LENGTH = 0x1
  config_00000021 : ORIGIN = 0x00000021, LENGTH = 0x1
  config_00000022 : ORIGIN = 0x00000022, LENGTH = 0x1
  config_00000023 : ORIGIN = 0x00000023, LENGTH = 0x1
  config_00000024 : ORIGIN = 0x00000024, LENGTH = 0x1
  config_00000025 : ORIGIN = 0x00000025, LENGTH = 0x1
  config_00000026 : ORIGIN = 0x00000026, LENGTH = 0x1
  config_00000027 : ORIGIN = 0x00000027, LENGTH = 0x1
  config_00000028 : ORIGIN = 0x00000028, LENGTH = 0x1
  config_00000029 : ORIGIN = 0x00000029, LENGTH = 0x1
  config_0000002A : ORIGIN = 0x0000002A, LENGTH = 0x1
  config_0000002B : ORIGIN = 0x0000002B, LENGTH = 0x1
  config_0000002C : ORIGIN = 0x0000002C, LENGTH = 0x1
  config_0000002D : ORIGIN = 0x0000002D, LENGTH = 0x1
  config_0000002E : ORIGIN = 0x0000002E, LENGTH = 0x1
  config_0000002F : ORIGIN = 0x0000002F, LENGTH = 0x1
  config_00000030 : ORIGIN = 0x00000030, LENGTH = 0x1
  config_00000031 : ORIGIN = 0x00000031, LENGTH = 0x1
  config_00000032 : ORIGIN = 0x00000032, LENGTH = 0x1
  config_00000033 : ORIGIN = 0x00000033, LENGTH = 0x1
  config_00000034 : ORIGIN = 0x00000034, LENGTH = 0x1
  config_00000035 : ORIGIN = 0x00000035, LENGTH = 0x1
  config_00000036 : ORIGIN = 0x00000036, LENGTH = 0x1
  config_00000037 : ORIGIN = 0x00000037, LENGTH = 0x1
  config_00000038 : ORIGIN = 0x00000038, LENGTH = 0x1
  config_00000039 : ORIGIN = 0x00000039, LENGTH = 0x1
  config_0000003A : ORIGIN = 0x0000003A, LENGTH = 0x1
  config_0000003B : ORIGIN = 0x0000003B, LENGTH = 0x1
  config_0000003C : ORIGIN = 0x0000003C, LENGTH = 0x1
  config_0000003D : ORIGIN = 0x0000003D, LENGTH = 0x1
  config_0000003E : ORIGIN = 0x0000003E, LENGTH = 0x1
  config_0000003F : ORIGIN = 0x0000003F, LENGTH = 0x1
  config_00000040 : ORIGIN = 0x00000040, LENGTH = 0x1
  config_00000041 : ORIGIN = 0x00000041, LENGTH = 0x1
  config_00000042 : ORIGIN = 0x00000042, LENGTH = 0x1
  config_00000043 : ORIGIN = 0x00000043, LENGTH = 0x1
  config_00000044 : ORIGIN = 0x00000044, LENGTH = 0x1
  config_00000045 : ORIGIN = 0x00000045, LENGTH = 0x1
  config_00000046 : ORIGIN = 0x00000046, LENGTH = 0x1
  config_00000047 : ORIGIN = 0x00000047, LENGTH = 0x1
  config_00000048 : ORIGIN = 0x00000048, LENGTH = 0x1
  config_00000049 : ORIGIN = 0x00000049, LENGTH = 0x1
  config_0000004A : ORIGIN = 0x0000004A, LENGTH = 0x1
  config_0000004B : ORIGIN = 0x0000004B, LENGTH = 0x1
  config_0000004C : ORIGIN = 0x0000004C, LENGTH = 0x1
  config_0000004D : ORIGIN = 0x0000004D, LENGTH = 0x1
  config_0000004E : ORIGIN = 0x0000004E, LENGTH = 0x1
  config_0000004F : ORIGIN = 0x0000004F, LENGTH = 0x1
  config_00000050 : ORIGIN = 0x00000050, LENGTH = 0x1
  config_00000051 : ORIGIN = 0x00000051, LENGTH = 0x1
  config_00000052 : ORIGIN = 0x00000052, LENGTH = 0x1
  config_00000053 : ORIGIN = 0x00000053, LENGTH = 0x1
  config_00000054 : ORIGIN = 0x00000054, LENGTH = 0x1
  config_00000055 : ORIGIN = 0x00000055, LENGTH = 0x1
  config_000001D8 : ORIGIN = 0x000001D8, LENGTH = 0x1
  config_000001D9 : ORIGIN = 0x000001D9, LENGTH = 0x1
  config_000001DA : ORIGIN = 0x000001DA, LENGTH = 0x1
  config_000001DB : ORIGIN = 0x000001DB, LENGTH = 0x1
  config_000001DC : ORIGIN = 0x000001DC, LENGTH = 0x1
  config_000001DD : ORIGIN = 0x000001DD, LENGTH = 0x1
  config_000001DE : ORIGIN = 0x000001DE, LENGTH = 0x1
  config_000001DF : ORIGIN = 0x000001DF, LENGTH = 0x1
  config_000001E0 : ORIGIN = 0x000001E0, LENGTH = 0x1
  config_000001E1 : ORIGIN = 0x000001E1, LENGTH = 0x1
  config_000001E2 : ORIGIN = 0x000001E2, LENGTH = 0x1
  config_000001E3 : ORIGIN = 0x000001E3, LENGTH = 0x1
  config_000001E4 : ORIGIN = 0x000001E4, LENGTH = 0x1
  config_000001E5 : ORIGIN = 0x000001E5, LENGTH = 0x1
  config_000001E6 : ORIGIN = 0x000001E6, LENGTH = 0x1
  config_000001E7 : ORIGIN = 0x000001E7, LENGTH = 0x1

}
/*************************************************************************
 * Output region definitions.
 * CODE_REGION defines the output region for .text/.rodata.
 * DATA_REGION defines the output region for .data/.bss
 * VECTOR_REGION defines the output region for .vectors.
 * 
 * CODE_REGION defaults to 'rom', if rom is present (non-zero length),
 * and 'ram' otherwise.
 * N.B. The BFA will still allocate code to any MEMORY named 'rom' regardless
 * of CODE_REGION's value. If you wish to use rom for something else please
 * rename the MEMORY entry.
 * DATA_REGION defaults to 'ram', which must be present.
 * VECTOR_REGION defaults to CODE_REGION, unless 'boot_rom' is present.
 */
#ifndef CODE_REGION
# if ROM_LENGTH > 0
#   define CODE_REGION rom
# else
#   define CODE_REGION ram
# endif
#endif
#ifndef DATA_REGION
# define DATA_REGION ram
#endif 
#ifndef VECTOR_REGION
# define VECTOR_REGION CODE_REGION
#endif

__rom_end = ORIGIN(rom) + LENGTH(rom);
__ram_end = ORIGIN(ram) + LENGTH(ram);

/*************************************************************************
 * Section Definitions - Map input sections to output sections
 *************************************************************************/
SECTIONS
{
    .config_00000000 : {
      KEEP(*(.config_00000000))
    } > config_00000000
    .config_00000001 : {
      KEEP(*(.config_00000001))
    } > config_00000001
    .config_00000002 : {
      KEEP(*(.config_00000002))
    } > config_00000002
    .config_00000004 : {
      KEEP(*(.config_00000004))
    } > config_00000004
    .config_00000005 : {
      KEEP(*(.config_00000005))
    } > config_00000005
    .config_00000006 : {
      KEEP(*(.config_00000006))
    } > config_00000006
    .config_00000007 : {
      KEEP(*(.config_00000007))
    } > config_00000007
    .config_00000008 : {
      KEEP(*(.config_00000008))
    } > config_00000008
    .config_00000009 : {
      KEEP(*(.config_00000009))
    } > config_00000009
    .config_0000000A : {
      KEEP(*(.config_0000000A))
    } > config_0000000A
    .config_0000000B : {
      KEEP(*(.config_0000000B))
    } > config_0000000B
    .config_0000000C : {
      KEEP(*(.config_0000000C))
    } > config_0000000C
    .config_0000000D : {
      KEEP(*(.config_0000000D))
    } > config_0000000D
    .config_0000000E : {
      KEEP(*(.config_0000000E))
    } > config_0000000E
    .config_0000000F : {
      KEEP(*(.config_0000000F))
    } > config_0000000F
    .config_00000010 : {
      KEEP(*(.config_00000010))
    } > config_00000010
    .config_00000011 : {
      KEEP(*(.config_00000011))
    } > config_00000011
    .config_00000012 : {
      KEEP(*(.config_00000012))
    } > config_00000012
    .config_00000013 : {
      KEEP(*(.config_00000013))
    } > config_00000013
    .config_00000014 : {
      KEEP(*(.config_00000014))
    } > config_00000014
    .config_00000015 : {
      KEEP(*(.config_00000015))
    } > config_00000015
    .config_00000016 : {
      KEEP(*(.config_00000016))
    } > config_00000016
    .config_00000017 : {
      KEEP(*(.config_00000017))
    } > config_00000017
    .config_00000018 : {
      KEEP(*(.config_00000018))
    } > config_00000018
    .config_00000019 : {
      KEEP(*(.config_00000019))
    } > config_00000019
    .config_0000001A : {
      KEEP(*(.config_0000001A))
    } > config_0000001A
    .config_0000001B : {
      KEEP(*(.config_0000001B))
    } > config_0000001B
    .config_0000001C : {
      KEEP(*(.config_0000001C))
    } > config_0000001C
    .config_0000001D : {
      KEEP(*(.config_0000001D))
    } > config_0000001D
    .config_0000001E : {
      KEEP(*(.config_0000001E))
    } > config_0000001E
    .config_0000001F : {
      KEEP(*(.config_0000001F))
    } > config_0000001F
    .config_00000020 : {
      KEEP(*(.config_00000020))
    } > config_00000020
    .config_00000021 : {
      KEEP(*(.config_00000021))
    } > config_00000021
    .config_00000022 : {
      KEEP(*(.config_00000022))
    } > config_00000022
    .config_00000023 : {
      KEEP(*(.config_00000023))
    } > config_00000023
    .config_00000024 : {
      KEEP(*(.config_00000024))
    } > config_00000024
    .config_00000025 : {
      KEEP(*(.config_00000025))
    } > config_00000025
    .config_00000026 : {
      KEEP(*(.config_00000026))
    } > config_00000026
    .config_00000027 : {
      KEEP(*(.config_00000027))
    } > config_00000027
    .config_00000028 : {
      KEEP(*(.config_00000028))
    } > config_00000028
    .config_00000029 : {
      KEEP(*(.config_00000029))
    } > config_00000029
    .config_0000002A : {
      KEEP(*(.config_0000002A))
    } > config_0000002A
    .config_0000002B : {
      KEEP(*(.config_0000002B))
    } > config_0000002B
    .config_0000002C : {
      KEEP(*(.config_0000002C))
    } > config_0000002C
    .config_0000002D : {
      KEEP(*(.config_0000002D))
    } > config_0000002D
    .config_0000002E : {
      KEEP(*(.config_0000002E))
    } > config_0000002E
    .config_0000002F : {
      KEEP(*(.config_0000002F))
    } > config_0000002F
    .config_00000030 : {
      KEEP(*(.config_00000030))
    } > config_00000030
    .config_00000031 : {
      KEEP(*(.config_00000031))
    } > config_00000031
    .config_00000032 : {
      KEEP(*(.config_00000032))
    } > config_00000032
    .config_00000033 : {
      KEEP(*(.config_00000033))
    } > config_00000033
    .config_00000034 : {
      KEEP(*(.config_00000034))
    } > config_00000034
    .config_00000035 : {
      KEEP(*(.config_00000035))
    } > config_00000035
    .config_00000036 : {
      KEEP(*(.config_00000036))
    } > config_00000036
    .config_00000037 : {
      KEEP(*(.config_00000037))
    } > config_00000037
    .config_00000038 : {
      KEEP(*(.config_00000038))
    } > config_00000038
    .config_00000039 : {
      KEEP(*(.config_00000039))
    } > config_00000039
    .config_0000003A : {
      KEEP(*(.config_0000003A))
    } > config_0000003A
    .config_0000003B : {
      KEEP(*(.config_0000003B))
    } > config_0000003B
    .config_0000003C : {
      KEEP(*(.config_0000003C))
    } > config_0000003C
    .config_0000003D : {
      KEEP(*(.config_0000003D))
    } > config_0000003D
    .config_0000003E : {
      KEEP(*(.config_0000003E))
    } > config_0000003E
    .config_0000003F : {
      KEEP(*(.config_0000003F))
    } > config_0000003F
    .config_00000040 : {
      KEEP(*(.config_00000040))
    } > config_00000040
    .config_00000041 : {
      KEEP(*(.config_00000041))
    } > config_00000041
    .config_00000042 : {
      KEEP(*(.config_00000042))
    } > config_00000042
    .config_00000043 : {
      KEEP(*(.config_00000043))
    } > config_00000043
    .config_00000044 : {
      KEEP(*(.config_00000044))
    } > config_00000044
    .config_00000045 : {
      KEEP(*(.config_00000045))
    } > config_00000045
    .config_00000046 : {
      KEEP(*(.config_00000046))
    } > config_00000046
    .config_00000047 : {
      KEEP(*(.config_00000047))
    } > config_00000047
    .config_00000048 : {
      KEEP(*(.config_00000048))
    } > config_00000048
    .config_00000049 : {
      KEEP(*(.config_00000049))
    } > config_00000049
    .config_0000004A : {
      KEEP(*(.config_0000004A))
    } > config_0000004A
    .config_0000004B : {
      KEEP(*(.config_0000004B))
    } > config_0000004B
    .config_0000004C : {
      KEEP(*(.config_0000004C))
    } > config_0000004C
    .config_0000004D : {
      KEEP(*(.config_0000004D))
    } > config_0000004D
    .config_0000004E : {
      KEEP(*(.config_0000004E))
    } > config_0000004E
    .config_0000004F : {
      KEEP(*(.config_0000004F))
    } > config_0000004F
    .config_00000050 : {
      KEEP(*(.config_00000050))
    } > config_00000050
    .config_00000051 : {
      KEEP(*(.config_00000051))
    } > config_00000051
    .config_00000052 : {
      KEEP(*(.config_00000052))
    } > config_00000052
    .config_00000053 : {
      KEEP(*(.config_00000053))
    } > config_00000053
    .config_00000054 : {
      KEEP(*(.config_00000054))
    } > config_00000054
    .config_00000055 : {
      KEEP(*(.config_00000055))
    } > config_00000055
    .config_000001D8 : {
      KEEP(*(.config_000001D8))
    } > config_000001D8
    .config_000001D9 : {
      KEEP(*(.config_000001D9))
    } > config_000001D9
    .config_000001DA : {
      KEEP(*(.config_000001DA))
    } > config_000001DA
    .config_000001DB : {
      KEEP(*(.config_000001DB))
    } > config_000001DB
    .config_000001DC : {
      KEEP(*(.config_000001DC))
    } > config_000001DC
    .config_000001DD : {
      KEEP(*(.config_000001DD))
    } > config_000001DD
    .config_000001DE : {
      KEEP(*(.config_000001DE))
    } > config_000001DE
    .config_000001DF : {
      KEEP(*(.config_000001DF))
    } > config_000001DF
    .config_000001E0 : {
      KEEP(*(.config_000001E0))
    } > config_000001E0
    .config_000001E1 : {
      KEEP(*(.config_000001E1))
    } > config_000001E1
    .config_000001E2 : {
      KEEP(*(.config_000001E2))
    } > config_000001E2
    .config_000001E3 : {
      KEEP(*(.config_000001E3))
    } > config_000001E3
    .config_000001E4 : {
      KEEP(*(.config_000001E4))
    } > config_000001E4
    .config_000001E5 : {
      KEEP(*(.config_000001E5))
    } > config_000001E5
    .config_000001E6 : {
      KEEP(*(.config_000001E6))
    } > config_000001E6
    .config_000001E7 : {
      KEEP(*(.config_000001E7))
    } > config_000001E7

    /*
     * The linker moves the .vectors section into itcm when itcm is
     * enabled via the -mitcm option, but only when this .vectors output
     * section exists in the linker script.
     */
    .vectors :
    {
        . = ALIGN(4);
        _sfixed = .;
        KEEP(*(.vectors .vectors.* .vectors_default .vectors_default.*))
        KEEP(*(.isr_vector))
        KEEP(*(.reset*))
        KEEP(*(.after_vectors))
    } > VECTOR_REGION
    /*
     * Code Sections - Note that standard input sections such as
     * *(.text), *(.text.*), *(.rodata), & *(.rodata.*)
     * are not mapped here. The best-fit allocator locates them,
     * so that input sections may flow around absolute sections
     * as needed.
     */
    .text :
    {
        . = ALIGN(4);
        *(.glue_7t) *(.glue_7)
        *(.gnu.linkonce.r.*)
        *(.ARM.extab* .gnu.linkonce.armextab.*)

        /* Support C constructors, and C destructors in both user code
           and the C library. This also provides support for C++ code. */
        . = ALIGN(4);
        KEEP(*(.init))
        . = ALIGN(4);
        __preinit_array_start = .;
        KEEP (*(.preinit_array))
        __preinit_array_end = .;

        . = ALIGN(4);
        __init_array_start = .;
        KEEP (*(SORT(.init_array.*)))
        KEEP (*(.init_array))
        __init_array_end = .;

        . = ALIGN(0x4);
        KEEP (*crtbegin.o(.ctors))
        KEEP (*(EXCLUDE_FILE (*crtend.o) .ctors))
        KEEP (*(SORT(.ctors.*)))
        KEEP (*crtend.o(.ctors))

        . = ALIGN(4);
        KEEP(*(.fini))

        . = ALIGN(4);
        __fini_array_start = .;
        KEEP (*(.fini_array))
        KEEP (*(SORT(.fini_array.*)))
        __fini_array_end = .;

        KEEP (*crtbegin.o(.dtors))
        KEEP (*(EXCLUDE_FILE (*crtend.o) .dtors))
        KEEP (*(SORT(.dtors.*)))
        KEEP (*crtend.o(.dtors))

        . = ALIGN(4);
        _efixed = .;            /* End of text section */
    } > CODE_REGION

    /* .ARM.exidx is sorted, so has to go in its own output section.  */
    PROVIDE_HIDDEN (__exidx_start = .);
    .ARM.exidx :
    {
      *(.ARM.exidx* .gnu.linkonce.armexidx.*)
    } > CODE_REGION
    PROVIDE_HIDDEN (__exidx_end = .);

    . = ALIGN(4);
    _etext = .;


    /*
     *  Align here to ensure that the .bss section occupies space up to
     *  _end.  Align after .bss to ensure correct alignment even if the
     *  .bss section disappears because there are no input sections.
     *
     *  Note that input sections named .bss* are no longer mapped here.
     *  The best-fit allocator locates them, so that they may flow
     *  around absolute sections as needed.
     */
    .bss (NOLOAD) :
    {
        . = ALIGN(4);
        __bss_start__ = .;
        _sbss = . ;
        _szero = .;
        *(COMMON)
        . = ALIGN(4);
        __bss_end__ = .;
        _ebss = . ;
        _ezero = .;
    } > DATA_REGION

    . = ALIGN(4);
    _end = . ;
    _ram_end_ = ORIGIN(ram) + LENGTH(ram) -1 ;
    
}

