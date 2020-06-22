[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

To clone or download these application from Github,go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/bootloader_apps_uart) and then click Clone button to clone this repo or download as zip file. This content can also be download using content manager by following [these instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki)

# UART Bootloader

This example application shows how to use the Bootloader Library to bootload an application using UART protocol.

### Bootloader Application

- This is a bootloader application which resides from
    - The starting location of the flash memory region for SAM devices
    - The start of Program Flash memory for PIC32MX devices with 3KB bootflash memory
    - The starting location of the Boot flash memory region for PIC32MK, PIC32MX and PIC32MZ devices
- It uses the Virtual Com port of the device (EDBG port or External USB to UART converters) to receive application binary from host PC
- It calls the bootloader_Tasks() function which receives application to be programmed into flash memory over UART channel
- Trigger Methods
    - It uses the On board Switch as bootloader trigger pin to force enter the bootloader at reset of device
    - It checks for bootloader request pattern **(0x5048434D)** from the starting 16 Bytes of RAM to force enter bootloader at reset of device

### Test Application

- This is a test application which resides from
    - The end of bootloader size in device flash memory for SAM devices
    - The end of bootloader size in Program Flash memory for PIC32MX devices with 3KB bootflash memory
    - The start of Program Flash memory for PIC32MK, PIC32MX and PIC32MZ devices
- It will be loaded into flash memory by bootloader application
- It blinks an LED and provides console output
- It uses the On board Switch to trigger the bootloader from firmware **(May not be supported on all devices)**
    - Once the switch is pressed it loads first 16 bytes of RAM with bootloader request pattern **(0x5048434D)** and resets the device

## Development Kits
The following table provides links to documentation on how to build and run UART bootloader on different development kits

| Development Kit |
|:---------|
|[PIC32MK GP Development Kit](docs/readme_pic32mk_gp_db.md) |
|[PIC32MK MCJ Curiosity Pro Development Board](docs/readme_pic32mk_mcj_curiosity_pro.md) |
|[PIC32MK MCM Curiosity Pro Development Board](docs/readme_pic32mk_mcm_curiosity_pro.md) |
|[PIC32MX1/2/5 Starter Kit](docs/readme_pic32mx_125_sk.md) |
|[PIC32MX Curiosity Development Board](docs/readme_pic32mx470_curiosity.md) |
|[PIC32MZ Embedded Graphics with Stacked DRAM (DA) Starter Kit (Crypto)](docs/readme_pic32mz_das_sk.md) |
|[PIC32MZ Embedded Connectivity with FPU (EF) Starter Kit](docs/readme_pic32mz_ef_sk.md) |
|[SAM C21N Xplained Pro Evaluation Kit](docs/readme_sam_c21n_xpro.md) |
|[SAM D11 Xplained Pro Evaluation Kit](docs/readme_sam_d11_xpro.md) |
|[SAM D20 Xplained Pro Evaluation Kit](docs/readme_sam_d20_xpro.md) |
|[SAM D21 Xplained Pro Evaluation Kit](docs/readme_sam_d21_xpro.md) |
|[SAM DA1 Xplained Pro Evaluation Kit](docs/readme_sam_da1_xpro.md) |
|[SAM E54 Xplained Pro Evaluation Kit](docs/readme_sam_e54_xpro.md) |
|[SAM E70 Xplained Ultra Evaluation Kit](docs/readme_sam_e70_xult.md) |
|[SAM G55 Xplained Pro Evaluation Kit](docs/readme_sam_g55_xpro.md) |
|[SAM HA1G16A Xplained Pro](docs/readme_sam_ha1_xpro.md) |
|[SAM L10 Xplained Pro Evaluation Kit](docs/readme_sam_l10_xpro.md) |
|[SAM L21 Xplained Pro Evaluation Kit](docs/readme_sam_l21_xpro.md) |
|[SAM L22 Xplained Pro Evaluation Kit](docs/readme_sam_l22_xpro.md) |
