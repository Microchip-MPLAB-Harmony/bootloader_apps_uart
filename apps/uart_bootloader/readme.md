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

-   **[PIC32CM MC00 Curiosity Pro Evaluation Kit: Building and Running the UART Bootloader applications](../../docs/GUID-2944FF2A-E4AB-4484-B633-BA7CC8548776.md)**  

-   **[PIC32CZ-CA80 Curiosity Ultra board: Building and Running the UART Bootloader applications](../../docs/GUID-8F91AE2D-5DF7-4ED5-BEDF-D2BF2A0935F4.md)**  

-   **[PIC32MK GP Development Kit: Building and Running the UART Bootloader applications](../../docs/GUID-42D84285-93F2-4FD2-871A-0828314912BB.md)**  

-   **[PIC32MK MCJ Curiosity Pro: Building and Running the UART Bootloader applications](../../docs/GUID-5FF5350E-BCA2-4E45-BEA5-52D149A8B431.md)**  

-   **[PIC32MK MCM Curiosity Pro Development Board: Building and Running the UART Bootloader applications](../../docs/GUID-DDBFDA79-86F5-4F5A-B8CD-AB394574F8CF.md)**  

-   **[PIC32MM USB Curiosity Development Board: Building and Running the UART Bootloader applications](../../docs/GUID-2BD25F8D-D735-4A7D-AE9A-B00C2EF5A69E.md)**

-   **[PIC32MX 1/2/5 Starter Kit: Building and Running the UART Bootloader applications](../../docs/GUID-AEAD41EE-0D73-4B4B-B70D-B68E9468CA78.md)**  

-   **[PIC32MX Curiosity Development Board: Building and Running the UART Bootloader applications](../../docs/GUID-AC56DC8B-E361-4197-905E-9B7B4C6CA40E.md)**  

-   **[PIC32MZ Embedded Graphics with Stacked DRAM \(DA\) Starter Kit \(Crypto\): Building and Running the UART Bootloader applications](../../docs/GUID-87E4439D-6C0F-408C-A8C2-1D0229305953.md)**  

-   **[PIC32MZ Embedded Connectivity with FPU \(EF\) Starter Kit: Building and Running the UART Bootloader applications](../../docs/GUID-3D0838F0-EC06-4839-B2B5-66BD9DC0E0FB.md)**  

-   **[PIC32 WFI32E Curiosity Board: Building and Running the UART Bootloader applications](../../docs/GUID-33066924-6225-4AFF-8B56-80E5BE5403E3.md)**  

-   **[SAM C21N Xplained Pro Evaluation Kit: Building and Running the UART Bootloader applications](../../docs/GUID-524555EE-DF75-45F8-9C8F-11DDB643E5B3.md)**  

-   **[SAM D11 Xplained Pro Evaluation Kit: Building and Running the UART Bootloader applications](../../docs/GUID-BE64A17B-CC65-4885-BF3C-883F21476F8B.md)**  

-   **[SAM D20 Xplained Pro Evaluation Kit: Building and Running the UART Bootloader applications](../../docs/GUID-5C28548E-4C92-47F9-867C-6C2837FE9F2C.md)**  

-   **[SAM D21 Xplained Pro Evaluation Kit: Building and Running the UART Bootloader applications](../../docs/GUID-F6B9FB47-BB62-4469-B2EE-2AF1FAA5B1B7.md)**  

-   **[SAM DA1 Xplained Pro Evaluation Kit: Building and Running the UART Bootloader applications](../../docs/GUID-5EDCD213-F7D4-40C5-93CD-8029AF0EA508.md)**  

-   **[SAM E54 Xplained Pro Evaluation Kit: Building and Running the UART Bootloader applications](../../docs/GUID-11A7D40E-3186-4485-B06E-B92E76B18266.md)**  

-   **[SAM E70 Xplained Ultra Evaluation Kit: Building and Running the UART Bootloader applications](../../docs/GUID-60B58CE9-CE65-4C42-A219-1832B2C1B802.md)**  

-   **[SAM G55 Xplained Pro Evaluation Kit: Building and Running the UART Bootloader applications](../../docs/GUID-49B5A844-7AF8-4654-BF6D-E180C62300F6.md)**  

-   **[SAM HA1G16A Xplained Pro: Building and Running the UART Bootloader applications](../../docs/GUID-1D463AB0-06E6-4FF3-AD77-F6772A092015.md)**  

-   **[SAM L10 Xplained Pro Evaluation Kit: Building and Running the UART Bootloader applications](../../docs/GUID-AD45B550-548F-4AB0-9A6F-AFC6ED8EC005.md)**  

-   **[SAM L21 Xplained Pro Evaluation Kit: Building and Running the UART Bootloader applications](../../docs/GUID-A53ECC58-D494-4DF6-A7F2-F9244E5833D7.md)**  

-   **[SAM L22 Xplained Pro Evaluation Kit: Building and Running the UART Bootloader applications](../../docs/GUID-B882700A-3970-454E-A3C0-C7C17297B438.md)**  

-   **[PIC32CX WBZ451 Curiosity Board: Building and Running the UART Bootloader applications](../../docs/GUID-4D591A9A-8F06-4084-BA48-90638B193216.md)**  


**Parent topic:**[MPLAB® Harmony Bootloader Application Examples for UART](../../docs/GUID-B72472E8-6E25-4036-8A27-70D70540E725.md)

