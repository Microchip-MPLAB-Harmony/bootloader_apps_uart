---
title: Release notes
nav_order: 99
---

![Microchip logo](https://raw.githubusercontent.com/wiki/Microchip-MPLAB-Harmony/Microchip-MPLAB-Harmony.github.io/images/microchip_logo.png)
![Harmony logo small](https://raw.githubusercontent.com/wiki/Microchip-MPLAB-Harmony/Microchip-MPLAB-Harmony.github.io/images/microchip_mplab_harmony_logo_small.png)

# Microchip MPLAB® Harmony 3 Release Notes

## UART Bootloader Applications Release v3.0.1

- Updated test application projects to disable default linker file generation added in csp v3.8.0 as it requires custom linker file

### Known Issues
- No changes from v3.0.0

### Development Tools
- No changes from v3.0.0

## UART Bootloader Applications Release v3.0.0
### New Features

- This release introduces support of
    - UART Bootloader Applications for SAM and PIC32M family of 32-bit microcontrollers.
    - UART Fail Safe Bootloader for SAM and PIC32M family of 32-bit microcontrollers.

### Development kit and demo application support
- The following table provides bootloader demo applications available for different development kits.

    | Product Family                 | Development Kits                                    | UART             | UART Fail Safe            |
    | ------------------------------ | --------------------------------------------------- | ---------------- | ------------------------- |
    | SAM D09/D10/D11                | [SAM D11 Xplained Pro Evaluation Kit](https://www.microchip.com/developmenttools/ProductDetails/atsamd11-xpro)               | Yes              | NA                        |
    | SAM D20                        | [SAM D20 Xplained Pro Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails.aspx?PartNO=ATSAMD20-XPRO)   | Yes              | NA                        |
    | SAM D21/DA1                    | [SAM D21 Xplained Pro Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails.aspx?PartNO=ATSAMD21-XPRO)   | Yes              | NA                        |
    | SAM D21/DA1                    | [SAM DA1 Xplained Pro Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/ATSAMDA1-XPRO)        | Yes              | NA                        |
    | SAM HA1                        | [SAM HA1G16A Xplained Pro](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/ATSAMHA1G16A-XPRO)    | Yes              | NA                        |
    | SAM C20/C21                    | [SAM C21N Xplained Pro Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails.aspx?PartNO=ATSAMC21-XPRO)   | Yes              | NA                        |
    | SAM L21                        | [SAM L21 Xplained Pro Evaluation Kit](https://www.microchip.com/developmenttools/ProductDetails/ATSAML21-XPRO-B)             | Yes              | NA                        |
    | SAM L22                        | [SAM L22 Xplained Pro Evaluation Kit](https://www.microchip.com/developmenttools/ProductDetails/ATSAML22-XPRO-B)             | Yes              | NA                        |
    | SAM L10/L11                    | [SAM L10 Xplained Pro Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails/dm320204)                    | Yes              | NA                        |
    | SAM D5x/E5x                    | [SAM E54 Xplained Pro Evaluation Kit](https://www.microchip.com/developmenttools/ProductDetails/ATSAME54-XPRO)               | Yes              | Yes                       |
    | SAM G5x                        | [SAM G55 Xplained Pro Evaluation Kit](https://www.microchip.com/developmenttools/ProductDetails/atsamg55-xpro)               | Yes              | NA                        |
    | SAM E70/S70/V70/V71            | [SAM E70 Xplained Ultra Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails.aspx?PartNO=ATSAME70-XULT)   | Yes              | NA                        |
    | PIC32MX330/350/370/430/450/470 | [Curiosity PIC32MX470 Development Board](https://www.microchip.com/DevelopmentTools/ProductDetails/dm320103)                    | Yes              | NA                        |
    | PIC32MX1XX/2XX/5XX             | [PIC32MX1/2/5 Starter Kit](https://www.microchip.com/developmenttools/productdetails/dm320100)                                                                                       | Yes              | NA                        |
    | PIC32MK GPD/GPE/MCF            | [PIC32MK GP Development Kit](https://www.microchip.com/developmenttools/ProductDetails/dm320106)                                                                                       | Yes              | Yes                       |
    | PIC32MK GPG/MCJ                | PIC32MK MCJ Curiosity                               | Yes              | NA                        |
    | PIC32MK GPK/MCM                | PIC32MK MCM Curiosity                               | Yes              | Yes                       |
    | PIC32MZ EF                     | [PIC32MZ Embedded Connectivity with FPU (EF) Starter Kit](https://www.microchip.com/Developmenttools/ProductDetails/Dm320007)                    | Yes              | Yes                       |
    | PIC32MZ DA                     | [PIC32MZ Embedded Graphics with Stacked DRAM (DA) Starter Kit (Crypto)](https://www.microchip.com/DevelopmentTools/ProductDetails/DM320010-C)                  | Yes              | Yes                       |


### Known Issues

The current known issues are as follows:

* Initialized global variables will not be initialized at startup for UART bootloaders.

### Development Tools

* [MPLAB® X IDE v5.40](https://www.microchip.com/mplab/mplab-x-ide)
* [MPLAB® XC32 C/C++ Compiler v2.41](https://www.microchip.com/mplab/compilers)
* MPLAB® X IDE plug-ins:
    * MPLAB® Harmony Configurator (MHC) v3.5.0 and above.
