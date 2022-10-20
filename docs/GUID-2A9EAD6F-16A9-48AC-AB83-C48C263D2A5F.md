# UART Bootloader

This example application shows how to use the Bootloader Library to bootload an application using UART protocol.

**Bootloader Application**

- This is a bootloader application which resides from
    - The starting location of the flash memory region for SAM devices
    - The start of Program Flash memory for PIC32MX devices with 3KB bootflash memory
    - The starting location of the Boot flash memory region for PIC32MK, PIC32MX and PIC32MZ devices
- It uses the Virtual Com port of the device (EDBG port or External USB to UART converters) to receive application binary from host PC
- It calls the bootloader_Tasks() function which receives application to be programmed into flash memory over UART channel
- Trigger Methods
    - It uses the On board Switch as bootloader trigger pin to force enter the bootloader at reset of device
    - It checks for bootloader request pattern **(0x5048434D)** from the starting 16 Bytes of RAM to force enter bootloader at reset of device

**Test Application**

- This is a test application which resides from
    - The end of bootloader size in device flash memory for SAM devices
    - The end of bootloader size in Program Flash memory for PIC32MX devices with 3KB bootflash memory
    - The start of Program Flash memory for PIC32MK, PIC32MX and PIC32MZ devices
- It will be loaded into flash memory by bootloader application
- It blinks an LED and provides console output
- It uses the On board Switch to trigger the bootloader from firmware **(May not be supported on all devices)**
    - Once the switch is pressed it loads first 16 bytes of RAM with bootloader request pattern **(0x5048434D)** and resets the device

**Development Kits**

The following list provides links to documentation on how to build and run UART bootloader on different development kits

