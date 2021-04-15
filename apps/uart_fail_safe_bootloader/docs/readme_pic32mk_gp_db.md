---
grand_parent: UART Bootloader Applications
parent: UART Fail Safe Bootloader
title: Building and Running on PIC32MK GP Development Kit
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# Building and Running the UART Fail Safe Bootloader applications

## Downloading and building the application

To clone or download this application from Github,go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/bootloader_apps_uart) and then click Clone button to clone this repo or download as zip file. This content can also be download using content manager by following [these instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki)

Path of the application within the repository is **apps/uart_fail_safe_bootloader/**

To build the application, refer to the following table and open the project using its IDE.

### Bootloader Application

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| bootloader/firmware/pic32mk_gp_db.X    | MPLABX Project for [PIC32MK GP Development Kit](https://www.microchip.com/developmenttools/ProductDetails/dm320106) |

### Test Application

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| test_app/firmware/pic32mk_gp_db.X    | MPLABX Project for [PIC32MK GP Development Kit](https://www.microchip.com/developmenttools/ProductDetails/dm320106) |

## Setting up [PIC32MK GP Development Kit](https://www.microchip.com/developmenttools/ProductDetails/dm320106)

- Connect a micro USB cable to the USB to UART port J25. This will enumerate as a COM port on the PC. 
- For programming, Connect a micro USB cable to the USB DEBUG port J12

## Setting up the host script

- Refer to [Bootloader Host Script Help](../../../tools/docs/readme_btl_host.md) for setting up the **btl_host.py** utility used to send the application binary from host PC

## Running the Application

1. Open the test application project *test_app/firmware/pic32mk_gp_db.X* in the IDE
2. Build the project to generate the binary **(Do not program the binary)**
3. Open the bootloader project *bootloader/firmware/pic32mk_gp_db.X* in the IDE
4. Build and program the application using the IDE

5. Run the **btl_host.py** from command prompt to program the test application binary to opposite panel

        python <harmony3_path>/bootloader/tools/btl_host.py -v -s -i <COM PORT> -d pic32mk -a 0x9D080000 -f <harmony3_path>/bootloader_apps_uart/apps/uart_fail_safe_bootloader/test_app/firmware/pic32mk_gp_db.X/dist/pic32mk_gp_db/production/pic32mk_gp_db.X.production.bin

6. Following snapshot shows output of successfully programming the test application
    - **Swapping Bank And Rebooting** and **Reboot Done** messages in below output signifies that bootloading is successful

    ![output](./images/btl_host_output.png)

7. If above step is successful then the **LED3** should start blinking
8. Open the Terminal application (Ex.:Tera Term) on the computer
9. Configure the serial port settings as follows:
    - Baud : 115200
    - Data : 8 Bits
    - Parity : None
    - Stop : 1 Bit
    - Flow Control : None

10. Reset or Power cycle the device
11. **LED3** should start blinking and you should see below output on the console
    - The Program Flash Bank Can be **BANK 1** or **BANK 2** based on from where the program is running

    ![output](./images/btl_uart_test_app_console_bank_2.png)

    ![output](./images/btl_uart_test_app_console_bank_1.png)

12. Press and hold the Switch **S1** to trigger Bootloader from test application to program firmware in other bank and you should see below output

    ![output](./images/btl_uart_test_app_console_bank_2_trigger_bootloader.png)

13. Repeat Steps 5-11 once
    - This step is to verify that bootloader is running after triggering bootloader from test application in Step 12
    - Also to program the new firmware in opposite bank
    - You should see other Bank in console displayed compared to first run

## Additional Steps (Optional)
- To bootload any other application refer to [Application Configurations](../../docs/readme_configure_application_pic32m.md)

- Once done repeat the applicable steps mentioned in [Running The Application](#running-the-application)
