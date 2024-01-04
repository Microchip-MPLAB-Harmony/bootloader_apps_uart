# UART Fail Safe Bootloader

This example application shows how to use the Bootloader Library to bootload an application on device having dual flash bank feature using UART protocol.

**Bootloader Application**

-   This is a fail safe bootloader application which resides from

    -   The starting location of both the banks of device flash memory region for SAM devices with dual bank support

    -   The starting location of the Boot flash memory region for PIC32M devices with dual bank support

-   It uses the Virtual Com port of the device \(EDBG port or External USB to UART converters\) to receive application binary from host PC

-   It calls the bootloader\_Tasks\(\) function which receives application to be programmed into opposite bank of flash memory over UART channel

-   Trigger methods

    -   It uses the On board Switch as bootloader trigger pin to force enter the bootloader at reset of device

    -   It checks for bootloader request pattern **\(0x5048434D\)** from the starting 16 Bytes of RAM to force enter bootloader at reset of device


**Test Application**

-   This is a test application which resides from

    -   The end of bootloader size in device flash memory for SAM devices with dual bank support

    -   The start of Program Flash memory for PIC32MZ, PIC32MK devices with dual bank support

        -   The last ROW of each bank is reserved for storing the serial number which is updated by bootloader after every firmware upgrade

-   It will be loaded into flash memory by bootloader application

-   It blinks an LED and provides console output

-   It uses the On board Switch to trigger the bootloader from firmware **\(May not be supported on all devices\)**

    -   Once the switch is pressed it loads first 16 bytes of RAM with bootloader request pattern **\(0x5048434D\)** and resets the device


**Development Kits**

The following table provides links to documentation on how to build and run UART Fail Safe bootloader on different development kits

-   **[PIC32MK GP Development Kit: Building and Running the UART Fail Safe Bootloader applications](../../docs/GUID-7F3D5F78-5918-4104-902C-5D508BBED0FD.md)**  

-   **[PIC32MK MCM Curiosity Pro Development Board: Building and Running the UART Fail Safe Bootloader applications](../../docs/GUID-377F58DE-943A-4B7D-9368-77A27B53CB6C.md)**  

-   **[PIC32MZ Embedded Graphics with Stacked DRAM \(DA\) Starter Kit \(Crypto\): Building and Running the UART Fail Safe Bootloader applications](../../docs/GUID-6E6C43D2-CD52-4D84-A525-24DE252958A2.md)**  

-   **[PIC32MZ Embedded Connectivity with FPU \(EF\) Starter Kit: Building and Running the UART Fail Safe Bootloader applications](../../docs/GUID-01B2189B-368F-49D6-8400-6A994E6B96DA.md)**  

-   **[SAM E54 Xplained Pro Evaluation Kit: Building and Running the UART Fail Safe Bootloader applications](../../docs/GUID-C56D70BA-4824-4E3E-A6FC-BB2DE123D81A.md)**  


**Parent topic:**[MPLAB® Harmony Bootloader Application Examples for UART](../../docs/GUID-B72472E8-6E25-4036-8A27-70D70540E725.md)

