# MPU UART Bootloader

This example application shows how to use the Harmony Bootloader to bootload an application from SD/eMMC/NAND/Serial flash memory and receives new application image using UART protocol and write it to SD/eMMC/NAND/Serial flash memory.

**Bootloader Application**

-   This is a bootloader application which resides from

    -   Bootloader stored into SD/eMMC/NAND/Serial flash memory

    -   Bootloader executes from DDR memory. AT91Bootstrap loads bootloader from SD/eMMC/NAND/Serial flash memory to DDR memory and executes it

-   It uses the DBGU Com port of the device to receive application binary from host PC

-   It calls the bootloader\_Tasks\(\) function which receives application to be programmed into SD/eMMC/NAND/Serial flash memory over UART channel. And it loads application image from SD/eMMC/NAND/Serial flash memory to DDR memory and executes it

-   It turns on an LED

-   Trigger Methods

    -   It uses the On board Switch as bootloader trigger pin to force enter the bootloader at reset of device


**Test Application**

-   This is a test application which resides from

    -   Application stored into SD/eMMC/NAND/Serial flash memory

-   It will be loaded from SD/eMMC/NAND/Serial flash memory to DDR memory by bootloader application and starts application execution

-   It blinks an LED and provides console output


**Development Kits**

The following list provides links to documentation on how to build and run UART bootloader on different development kits

-   **[SAM9X60-Curiosity board: Building and Running the UART Bootloader with SD/eMMC media applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_SD_EMMC_SAM_9X60_CURIOSITY&redirect=true)**

-   **[SAM9X75-EB Evaluation Board: Building and Running the UART Bootloader with SD/eMMC media applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_SD_EMMC_SAM_9X75_CURIOSITY&redirect=true)**  

-   **[SAMA5D29 Curiosity Board: Building and Running the UART Bootloader with SD/eMMC media applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_SD_EMMC_SAM_A5D29_CURIOSITY&redirect=true)**  

-   **[SAMA5D2 Xplained Ultra Evaluation Kit: Building and Running the UART Bootloader with SD/eMMC media applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_SD_EMMC_SAM_A5D2_XULT&redirect=true)**  

-   **[SAMA7G5 Evaluation Kit: Building and Running the UART Bootloader with SD/eMMC media applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_SD_EMMC_SAM_A7G5_EK&redirect=true)**  

-   **[SAMA5D29 Curiosity Board: Building and Running the UART Bootloader with Serial Flash media applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_SERIAL_FLASH_SAM_A5D29_CURIOSITY&redirect=true)**  

-   **[SAMA5D2 Xplained Ultra Evaluation Kit: Building and Running the UART Bootloader with Serial Flash media applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_SERIAL_FLASH_SAM_A5D2_XULT&redirect=true)**  

-   **[SAM9X60-Curiosity board: Building and Running the UART Bootloader with NAND Flash media applications](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=BOOTLOADER_APPS_UART_NAND_FLASH_SAM_9X60_CURIOSITY&redirect=true)**  


**Parent topic:**[MPLAB® Harmony Bootloader Application Examples for UART](../../docs/GUID-B72472E8-6E25-4036-8A27-70D70540E725.md)

