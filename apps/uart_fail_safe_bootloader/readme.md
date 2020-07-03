---
parent: UART Bootloader Applications
title: UART Fail Safe Bootloader
has_children: false
has_toc: false
nav_order: 2
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

To clone or download these application from Github,go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/bootloader_apps_uart) and then click Clone button to clone this repo or download as zip file. This content can also be download using content manager by following [these instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki)

# UART Fail Safe Bootloader

This example application shows how to use the Bootloader Library to bootload an application on device having dual flash bank feature using UART protocol.

### Bootloader Application

- This is a fail safe bootloader application which resides from
    - The starting location of both the banks of device flash memory region for SAM devices with dual bank support
    - The starting location of the Boot flash memory region for PIC32M devices with dual bank support
- It uses the Virtual Com port of the device (EDBG port or External USB to UART converters) to receive application binary from host PC
- It calls the bootloader_Tasks() function which receives application to be programmed into opposite bank of flash memory over UART channel
- Trigger methods
    - It uses the On board Switch as bootloader trigger pin to force enter the bootloader at reset of device
    - It checks for bootloader request pattern **(0x5048434D)** from the starting 16 Bytes of RAM to force enter bootloader at reset of device

### Test Application

- This is a test application which resides from
    - The end of bootloader size in device flash memory for SAM devices with dual bank support
    - The start of Program Flash memory for PIC32MZ, PIC32MK devices with dual bank support
        - The last ROW of each bank is reserved for storing the serial number which is updated by bootloader after every firmware upgrade
- It will be loaded into flash memory by bootloader application
- It blinks an LED and provides console output
- It uses the On board Switch to trigger the bootloader from firmware **(May not be supported on all devices)**
    - Once the switch is pressed it loads first 16 bytes of RAM with bootloader request pattern **(0x5048434D)** and resets the device

## Development Kits
The following table provides links to documentation on how to build and run UART Fail Safe bootloader on different development kits

| Development Kit |
|:---------|
|[PIC32MK GP Development Kit](docs/readme_pic32mk_gp_db.md) |
|[PIC32MK MCM Curiosity Pro Development Board](docs/readme_pic32mk_mcm_curiosity_pro.md) |
|[PIC32MZ Embedded Graphics with Stacked DRAM (DA) Starter Kit (Crypto)](docs/readme_pic32mz_das_sk.md) |
|[PIC32MZ Embedded Connectivity with FPU (EF) Starter Kit](docs/readme_pic32mz_ef_sk.md) |
|[SAM E54 Xplained Pro Evaluation Kit](docs/readme_sam_e54_xpro.md) |
