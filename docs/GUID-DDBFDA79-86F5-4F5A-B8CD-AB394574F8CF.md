# PIC32MK MCM Curiosity Pro Development Board: Building and Running the UART Bootloader applications

**Downloading and building the application**

To clone or download this application from Github,go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/bootloader_apps_uart) and then click Clone button to clone this repo or download as zip file. This content can also be download using content manager by following [these instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki)

Path of the application within the repository is **apps/uart_bootloader/**

To build the application, refer to the following table and open the project using its IDE.

**Bootloader Application**

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| bootloader/firmware/pic32mk_mcm_curiosity_pro.X    | MPLABX Project for [PIC32MK MCM Curiosity Pro Development Board](https://www.microchip.com/Developmenttools/ProductDetails/EV31E34A) |

**Test Application**

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| test_app/firmware/pic32mk_mcm_curiosity_pro.X    | MPLABX Project for [PIC32MK MCM Curiosity Pro Development Board](https://www.microchip.com/Developmenttools/ProductDetails/EV31E34A) |

**Setting up [PIC32MK MCM Curiosity Pro Development Board](https://www.microchip.com/Developmenttools/ProductDetails/EV31E34A)**

- Connect a micro USB cable to the USB to UART port J400. This will enumerate as a COM port on the PC.
- For programming, Connect a micro USB cable to the USB DEBUG port J500

**Setting up the host script**

- Refer to [Bootloader Host Script Help](GUID-E9768065-2540-409B-AC12-3DA9417F01F5.md) for setting up the **btl_host.py** utility used to send the application binary from host PC

**Running the Application**

1. Open the test application project *test_app/firmware/pic32mk_mcm_curiosity_pro.X* in the IDE
2. Build the project to generate the binary **(Do not program the binary)**
3. Open the bootloader project *bootloader/firmware/pic32mk_mcm_curiosity_pro.X* in the IDE
4. Build and program the application using the IDE

5. Run the **btl_host.py** from command prompt to program the application binary

        python <harmony3_path>/bootloader/tools/btl_host.py -v -i <COM PORT> -d pic32mk -a 0x9D000000 -f <harmony3_path>/bootloader_apps_uart/apps/uart_bootloader/test_app/firmware/pic32mk_mcm_curiosity_pro.X/dist/pic32mk_mcm_curiosity_pro/production/pic32mk_mcm_curiosity_pro.X.production.bin

6. Following snapshot shows output of successfully programming the test application
    - **Rebooting** and **Reboot Done** messages in below output signifies that bootloading is successful

    ![output](GUID-9D45B2EF-7159-4DF7-BC6F-3C43C2113B07-low.png)

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

    ![output](GUID-8AF21138-F5D5-442D-AF4E-C633D606BD08-low.png)

12. Press and hold the Switch **SW1** to trigger Bootloader from test application and you should see below output

    ![output](GUID-DEA0E13D-969E-4A40-A120-7330F0C46FCE-low.png)

13. Repeat Steps 5-11 once and jump to Step-14.
    - This step is to verify that bootloader is running after triggering bootloader from test application in Step 12

14. **Press and hold** the Switch **SW1** and then press MCLR button or Power cycle the device to force trigger bootloader at startup
15. Repeat Steps 5-11 once
    - This step is to verify whether bootloader is triggered by switch press at reset


**Additional Steps (Optional)**

- To bootload any other application refer to [Configuring an application to be bootloaded for MIPS based MCUs](GUID-3E6213D5-3312-49A9-A6C7-897B8AD57414.md)
