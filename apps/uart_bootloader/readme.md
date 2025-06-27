# UART Bootloader

This example application shows how to use the Bootloader Library to bootload an application using UART protocol.

**Bootloader Application**

-   This is a bootloader application which resides from

    -   The starting location of the flash memory region for SAM devices

    -   The start of Program Flash memory for PIC32MX devices with 3KB bootflash memory

    -   The starting location of the Boot flash memory region for PIC32MK, PIC32MX and PIC32MZ devices

-   It uses the Virtual Com port of the device \(EDBG port or External USB to UART converters\) to receive application binary from host PC

-   It calls the bootloader\_Tasks\(\) function which receives application to be programmed into flash memory over UART channel

-   Trigger Methods

    -   It uses the On board Switch as bootloader trigger pin to force enter the bootloader at reset of device

    -   It checks for bootloader request pattern **\(0x5048434D\)** from the starting 16 Bytes of RAM to force enter bootloader at reset of device


**Test Application**

-   This is a test application which resides from

    -   The end of bootloader size in device flash memory for SAM devices

    -   The end of bootloader size in Program Flash memory for PIC32MX devices with 3KB bootflash memory

    -   The start of Program Flash memory for PIC32MK, PIC32MX and PIC32MZ devices

-   It will be loaded into flash memory by bootloader application

-   It blinks an LED and provides console output

-   It uses the On board Switch to trigger the bootloader from firmware **\(May not be supported on all devices\)**

    -   Once the switch is pressed it loads first 16 bytes of RAM with bootloader request pattern **\(0x5048434D\)** and resets the device


**Development Kits**

The following list provides links to documentation on how to build and run UART bootloader on different development kits
-   **[PIC32CK GC Curiosity Ultra Development Board: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_PIC32CK_GC01_CULT&redirect=true)**  

-   **[PIC32CM SG00/GC00 Curiosity Pro Development Board: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_PIC32CM_GC00_CPRO&redirect=true)**  

-   **[PIC32CM MC00 Curiosity Pro Evaluation Kit: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_PIC32CM_MC00_CURIOSITY_PRO&redirect=true)**  

-   **[PIC32CXMTSH-DB Evaluation Kit: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_PIC32CX_MTSH_DB&redirect=true)**  

-   **[PIC32CX SG41 Curiosity Ultra Evaluation Board: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_PIC32CX_SG41&redirect=true)**  

-   **[PIC32CZ CA70 Curiosity Ultra Development Board: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_PIC32CZ_CA70_CULT&redirect=true)**  

-   **[PIC32CZ-CA80 Curiosity Ultra board: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_PIC32CZ_CA80_CURIOSITY_ULTRA&redirect=true)**  

-   **[PIC32MK GP Development Kit: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_PIC32MK_GP_DB&redirect=true)**  

-   **[PIC32MK MCJ Curiosity Pro: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_PIC32MK_MCJ_CURIOSITY_PRO&redirect=true)**  

-   **[PIC32MK MCM Curiosity Pro Development Board: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_PIC32MK_MCM_CURIOSITY_PRO&redirect=true)**  

-   **[PIC32MM USB Curiosity Development Board: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_PIC32MM_USB&redirect=true)**

-   **[PIC32MX 1/2/5 Starter Kit: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_PIC32MX_125_SK&redirect=true)**  

-   **[PIC32MX Curiosity Development Board: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_PIC32MX470_CURIOSITY&redirect=true)**  

-   **[PIC32MZ Embedded Graphics with Stacked DRAM \(DA\) Starter Kit \(Crypto\): Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_PIC32MZ_DAS_SK&redirect=true)**  

-   **[PIC32MZ Embedded Connectivity with FPU \(EF\) Starter Kit: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_PIC32MZ_EF_SK&redirect=true)**  

-   **[PIC32 WFI32E Curiosity Board: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_PIC32MZ_W1_CURIOSITY&redirect=true)**  

-   **[PIC32WM BZ6 Curiosity Evaluation Board: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_PIC32WM_BZ6_CURIOSITY&redirect=true)**  

-   **[SAM C21N Xplained Pro Evaluation Kit: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_SAM_C21N_XPRO&redirect=true)**  

-   **[SAM D11 Xplained Pro Evaluation Kit: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_SAM_D11_XPRO&redirect=true)**  

-   **[SAM D20 Xplained Pro Evaluation Kit: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_SAM_D20_XPRO&redirect=true)**  

-   **[SAM D21 Xplained Pro Evaluation Kit: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_SAM_D21_XPRO&redirect=true)**  

-   **[SAM DA1 Xplained Pro Evaluation Kit: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_SAM_DA1_XPRO&redirect=true)**  

-   **[SAM E54 Xplained Pro Evaluation Kit: Building and Running the UART Bootloader applications](.https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_SAM_E54_XPRO&redirect=true)**  

-   **[SAM E70 Xplained Ultra Evaluation Kit: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_SAM_E70_XULT&redirect=true)**  

-   **[SAM G55 Xplained Pro Evaluation Kit: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_SAM_G55_XPRO&redirect=true)**  

-   **[SAM HA1G16A Xplained Pro: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_SAM_HA1_XPRO&redirect=true)**  

-   **[SAM L10 Xplained Pro Evaluation Kit: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_SAM_L10_XPRO&redirect=true)**  

-   **[SAM L21 Xplained Pro Evaluation Kit: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_SAM_L21_XPRO&redirect=true)**  

-   **[SAM L22 Xplained Pro Evaluation Kit: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_SAM_L22_XPRO&redirect=true)**  

-   **[PIC32CX-BZ3 and WBZ35x Curiosity Board: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_WBZ351_CURIOSITY&redirect=true)**  

-   **[PIC32CX WBZ451 Curiosity Board: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_WBZ451_CURIOSITY&redirect=true)**  

The following list provides links to documentation on how to build and run TrustZone UART bootloader on different development kits
-   **[PIC32CK SG Curiosity Ultra Development Board: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_TRUST_ZONE_PIC32CK_SG01_CULT&redirect=true)**  

-   **[PIC32CM SG00 Curiosity Pro Development Board: Building and Running the UART Bootloader applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UAR_TRUST_ZONE_PIC32CM_GC00_CURIOSITY_PRO&redirect=true)**  

**Parent topic:**[MPLAB® Harmony Bootloader Application Examples for UART](../../docs/GUID-B72472E8-6E25-4036-8A27-70D70540E725.md)

