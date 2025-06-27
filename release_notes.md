![Microchip logo](https://raw.githubusercontent.com/wiki/Microchip-MPLAB-Harmony/Microchip-MPLAB-Harmony.github.io/images/microchip_logo.png)
![Harmony logo small](https://raw.githubusercontent.com/wiki/Microchip-MPLAB-Harmony/Microchip-MPLAB-Harmony.github.io/images/microchip_mplab_harmony_logo_small.png)

# Microchip MPLAB® Harmony 3 Release Notes

## UART Bootloader Applications Release v3.4.0

### New Features

- This release includes support of
    - UART Bootloader Applications for PIC32CK-GC01/SG01, PIC32CM-GC00/SG00, PIC32CZ-CA70, PIC32CX-BZ3, PIC32WM-BZ6, PIC32CX-MT and PIC32CX-SG41 family of 32-bit microcontrollers.

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
    | PIC32MK GPG/MCJ                | [PIC32MK MCJ Curiosity Pro](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DT100113)                                                                                       | Yes              | NA                        |
    | PIC32MK GPK/MCM                | [PIC32MK MCM Curiosity Pro Development Board](https://www.microchip.com/Developmenttools/ProductDetails/EV31E34A)                    | Yes              | Yes                       |
    | PIC32MZ EF                     | [PIC32MZ Embedded Connectivity with FPU (EF) Starter Kit](https://www.microchip.com/Developmenttools/ProductDetails/Dm320007)                    | Yes              | Yes                       |
    | PIC32MZ DA                     | [PIC32MZ Embedded Graphics with Stacked DRAM (DA) Starter Kit (Crypto)](https://www.microchip.com/DevelopmentTools/ProductDetails/DM320010-C)                  | Yes              | Yes                       |
    | PIC32MZ W1                     | [PIC32 WFI32E Curiosity Board](https://www.microchip.com/Developmenttools/ProductDetails/EV12F11A)                                                                                       | Yes              | NA                        |
    | PIC32CM MC                     | [PIC32CM MC00 Curiosity Pro Evaluation Kit](https://www.microchip.com/developmenttools/ProductDetails/EV15N46A)                    | Yes              | NA                        |
    | PIC32MM                        | [PIC32MM USB Curiosity Development Kit ](https://www.microchip.com/en-us/development-tool/dm320107)                    | Yes              | NA                        |
    | PIC32CZ CA                     | [PIC32CZ-CA80 Curiosity Ultra board](https://www.microchip.com/en-us/development-tool/ea61x20a)                    | Yes              | NA                        |
    | WBZ451                         | [PIC32CX-BZ2 and WBZ451 Curiosity Board](https://www.microchip.com/en-us/development-tool/EA71C53A)                    | Yes              | NA                        |
    | SAMA5D2                        | [SAMA5D2 Xplained Ultra Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails/ATSAMA5D2C-XULT)                    | Yes              | NA                        |
    | SAM9X60                        | [SAM9X60-Curiosity board](https://www.microchip.com/en-us/development-tool/EV40E67A)                    | Yes              | NA                        |
    | SAM9X7                         | [SAM9X75-Curiosity Board](https://www.microchip.com/en-us/development-tool/ev31h43a)                    | Yes              | NA                        |
    | SAMA7G5                        | [SAMA7G5 Evaluation Kit](https://www.microchip.com/en-us/development-tool/EV21H18A)                    | Yes              | NA                        |
    | SAMA5D2                        | [SAMA5D29 Curiosity Board](https://www.microchip.com/en-us/development-tool/ev07r15a)                  | Yes              | NA                        |
    | PIC32CK GC01                   | [PIC32CK GC Curiosity Ultra board](https://www.microchip.com/en-us/development-tool/ev44p93a)          | Yes              | NA                        |
    | PIC32CK SG01                   | [PIC32CK SG Curiosity Ultra board](https://www.microchip.com/en-us/development-tool/ev33a17a)          | Yes              | NA                        |
    | PIC32CM GC00                   | [PIC32CM GC Curiosity Pro board](https://www.microchip.com/en-us/development-tool/EA36K74A)            | Yes              | NA                        |
    | PIC32CM SG00                   | [PIC32CM SG Curiosity Pro board](https://www.microchip.com/en-us/development-tool/EA51N28A)            | Yes              | NA                        |
    | PIC32CZ CA70                   | [PIC32CZ-CA70 Curiosity Ultra board](https://www.microchip.com/en-us/development-tool/ev56t44a)        | Yes              | NA                        |
    | PIC32WM BZ6                    | [PIC32WM BZ6 Curiosity]()                                                                              | Yes              | NA                        |
    | WBZ351                         | [PIC32CX-BZ3 and WBZ35x Curiosity Board](https://www.microchip.com/en-us/development-tool/ev19j06a)    | Yes              | NA                        |
    | PIC32CX MT                     | [PIC32CXMTSH-DB Evaluation Kit](https://www.microchip.com/en-us/development-tool/ev84m21a)             | Yes              | Yes                       |
    | PIC32CX SG41                   | [PIC32CX SG41 Curiosity Ultra board](https://www.microchip.com/en-us/development-tool/ev06x38a)        | Yes              | Yes                       |

- **NA:** Lack of product capability

### Known Issues

- No changes from v3.3.0

### Development Tools

- [MPLAB® X IDE v6.25](https://www.microchip.com/mplab/mplab-x-ide)
- MPLAB® X IDE plug-ins:
  - MPLAB® Code Configurator (MCC) v5.5.2
- [MPLAB® XC32 C/C++ Compiler v4.60](https://www.microchip.com/mplab/compilers)


## UART Bootloader Applications Release v3.3.0

### New Features

- This release includes support of
    - UART Bootloader Applications for PIC32CZ CA family of 32-bit microcontrollers.
    - UART Bootloader Applications for PIC32CX-BZ2 and WBZ45 family of 32-bit microcontrollers.
    - UART Bootloader Applications with SD/eMMC/NAND/Serial Flash media for SAMA5D2 family of 32-bit microprocessors.
    - UART Bootloader Applications with SD/eMMC/NAND/Serial Flash media for SAM9X60 family of 32-bit microprocessors.
    - UART Bootloader Applications with SD/eMMC/NAND/Serial Flash media for SAM9X7 family of 32-bit microprocessors.
    - UART Bootloader Applications with SD/eMMC/NAND/Serial Flash media for SAMA7G5 family of 32-bit microprocessors.

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
    | PIC32MK GPG/MCJ                | [PIC32MK MCJ Curiosity Pro](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DT100113)                                                                                       | Yes              | NA                        |
    | PIC32MK GPK/MCM                | [PIC32MK MCM Curiosity Pro Development Board](https://www.microchip.com/Developmenttools/ProductDetails/EV31E34A)                    | Yes              | Yes                       |
    | PIC32MZ EF                     | [PIC32MZ Embedded Connectivity with FPU (EF) Starter Kit](https://www.microchip.com/Developmenttools/ProductDetails/Dm320007)                    | Yes              | Yes                       |
    | PIC32MZ DA                     | [PIC32MZ Embedded Graphics with Stacked DRAM (DA) Starter Kit (Crypto)](https://www.microchip.com/DevelopmentTools/ProductDetails/DM320010-C)                  | Yes              | Yes                       |
    | PIC32MZ W1                     | [PIC32 WFI32E Curiosity Board](https://www.microchip.com/Developmenttools/ProductDetails/EV12F11A)                                                                                       | Yes              | NA                        |
    | PIC32CM MC                     | [PIC32CM MC00 Curiosity Pro Evaluation Kit](https://www.microchip.com/developmenttools/ProductDetails/EV15N46A)                    | Yes              | NA                        |
    | PIC32MM                        | [PIC32MM USB Curiosity Development Kit ](https://www.microchip.com/en-us/development-tool/dm320107)                    | Yes              | NA                        |
    | PIC32CZ CA                     | [PIC32CZ-CA80 Curiosity Ultra board](https://www.microchip.com/en-us/development-tool/ea61x20a)                    | Yes              | NA                        |
    | WBZ451                         | [PIC32CX-BZ2 and WBZ451 Curiosity Board](https://www.microchip.com/en-us/development-tool/EA71C53A)                    | Yes              | NA                        |
    | SAMA5D2                        | [SAMA5D2 Xplained Ultra Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails/ATSAMA5D2C-XULT)                    | Yes              | NA                        |
    | SAM9X60                        | [SAM9X60-Curiosity board](https://www.microchip.com/en-us/development-tool/EV40E67A)                    | Yes              | NA                        |
    | SAM9X7                         | [SAM9X75-EB Evaluation Board](https://www.microchip.com/en-us/development-tool/ea14j50a)                    | Yes              | NA                        |
    | SAMA7G5                        | [SAMA7G5 Evaluation Kit](https://www.microchip.com/en-us/development-tool/EV21H18A)                    | Yes              | NA                        |
    | SAMA5D2                        | SAMA5D29 Curiosity Board                                                                               | Yes              | NA                        |

- **NA:** Lack of product capability

### Known Issues

- No changes from v3.0.0

### Development Tools

- [MPLAB® X IDE v6.15](https://www.microchip.com/mplab/mplab-x-ide)
- MPLAB® X IDE plug-ins:
  - MPLAB® Code Configurator (MCC) v5.4.1
- [MPLAB® XC32 C/C++ Compiler v4.35](https://www.microchip.com/mplab/compilers)


## UART Bootloader Applications Release v3.2.0

### New Features

- This release includes support of
    - UART Bootloader Applications for PIC32MM family of 32-bit microcontrollers.

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
    | PIC32MK GPG/MCJ                | [PIC32MK MCJ Curiosity Pro](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DT100113)                                                                                       | Yes              | NA                        |
    | PIC32MK GPK/MCM                | [PIC32MK MCM Curiosity Pro Development Board](https://www.microchip.com/Developmenttools/ProductDetails/EV31E34A)                    | Yes              | Yes                       |
    | PIC32MZ EF                     | [PIC32MZ Embedded Connectivity with FPU (EF) Starter Kit](https://www.microchip.com/Developmenttools/ProductDetails/Dm320007)                    | Yes              | Yes                       |
    | PIC32MZ DA                     | [PIC32MZ Embedded Graphics with Stacked DRAM (DA) Starter Kit (Crypto)](https://www.microchip.com/DevelopmentTools/ProductDetails/DM320010-C)                  | Yes              | Yes                       |
    | PIC32MZ W1                     | [PIC32 WFI32E Curiosity Board](https://www.microchip.com/Developmenttools/ProductDetails/EV12F11A)                                                                                       | Yes              | NA                        |
    | PIC32CM MC                     | [PIC32CM MC00 Curiosity Pro Evaluation Kit](https://www.microchip.com/developmenttools/ProductDetails/EV15N46A)                    | Yes              | NA                        |
    | PIC32MM                     | [PIC32MM USB Curiosity Development Kit ](https://www.microchip.com/en-us/development-tool/dm320107)                    | Yes              | NA                        |

- **NA:** Lack of product capability

### Known Issues

- No changes from v3.0.0

### Development Tools

- [MPLAB® X IDE v6.05](https://www.microchip.com/mplab/mplab-x-ide)
- MPLAB® X IDE plug-ins:
  - MPLAB® Code Configurator (MCC) v5.1.17
- [MPLAB® XC32 C/C++ Compiler v4.20](https://www.microchip.com/mplab/compilers)


## UART Bootloader Applications Release v3.1.1

- Updated Bootloader documentation to new format

### Known Issues
- No changes from v3.1.0

### Development Tools
- No changes from v3.1.0

## UART Bootloader Applications Release v3.1.0

### New Features

- This release includes support of
    - UART Bootloader Applications for PIC32CM MC and PIC32MZ W1 family of 32-bit microcontrollers.

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
    | PIC32MK GPG/MCJ                | [PIC32MK MCJ Curiosity Pro](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DT100113)                                                                                       | Yes              | NA                        |
    | PIC32MK GPK/MCM                | [PIC32MK MCM Curiosity Pro Development Board](https://www.microchip.com/Developmenttools/ProductDetails/EV31E34A)                    | Yes              | Yes                       |
    | PIC32MZ EF                     | [PIC32MZ Embedded Connectivity with FPU (EF) Starter Kit](https://www.microchip.com/Developmenttools/ProductDetails/Dm320007)                    | Yes              | Yes                       |
    | PIC32MZ DA                     | [PIC32MZ Embedded Graphics with Stacked DRAM (DA) Starter Kit (Crypto)](https://www.microchip.com/DevelopmentTools/ProductDetails/DM320010-C)                  | Yes              | Yes                       |
    | PIC32MZ W1                     | [PIC32 WFI32E Curiosity Board](https://www.microchip.com/Developmenttools/ProductDetails/EV12F11A)                                                                                       | Yes              | NA                        |
    | PIC32CM MC                     | [PIC32CM MC00 Curiosity Pro Evaluation Kit](https://www.microchip.com/developmenttools/ProductDetails/EV15N46A)                    | Yes              | NA                        |

- **NA:** Lack of product capability

### Known Issues

- No changes from v3.0.0

### Development Tools

* [MPLAB® X IDE v5.50](https://www.microchip.com/mplab/mplab-x-ide)
* [MPLAB® XC32 C/C++ Compiler v3.00](https://www.microchip.com/mplab/compilers)
* MPLAB® X IDE plug-ins:
    * MPLAB® Harmony 3 Launcher v3.6.4 and above.


## UART Bootloader Applications Release v3.0.2

- Added discover.microchip.com metadata

### Known Issues
- No changes from v3.0.0

### Development Tools
- No changes from v3.0.0

## UART Bootloader Applications Release v3.0.1

- Updated test application projects to disable default linker file generation added in csp v3.8.0 as it requires custom linker file

### Known Issues
- No changes from v3.0.0

### Development Tools
- No changes from v3.0.0

## UART Bootloader Applications Release v3.0.0

### New Features

- This release includes support of
    - UART Bootloader Applications for SAM and PIC32M family of 32-bit microcontrollers.

    - UART Fail Safe Bootloader for devices with dual flash bank support.

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

- **NA:** Lack of product capability

### Known Issues

The current known issues are as follows:

* Initialized global variables will not be initialized at startup for UART bootloaders.

### Development Tools

* [MPLAB® X IDE v5.40](https://www.microchip.com/mplab/mplab-x-ide)
* [MPLAB® XC32 C/C++ Compiler v2.41](https://www.microchip.com/mplab/compilers)
* MPLAB® X IDE plug-ins:
    * MPLAB® Harmony Configurator (MHC) v3.5.0 and above.
