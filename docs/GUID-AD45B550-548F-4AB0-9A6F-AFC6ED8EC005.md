# SAM L10 Xplained Pro Evaluation Kit: Building and Running the UART Bootloader applications

**Downloading and building the application**

To clone or download this application from Github,go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/bootloader_apps_uart) and then click Clone button to clone this repo or download as zip file. This content can also be download using content manager by following [these instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki)

Path of the application within the repository is **apps/uart_bootloader/**

To build the application, refer to the following table and open the project using its IDE.

**Bootloader Application**

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| bootloader/firmware/sam_l10_xpro.X    | MPLABX Project for [SAM L10 Xplained Pro Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails/dm320204)|

**Test Application**

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| test_app/firmware/sam_l10_xpro.X    | MPLABX Project for [SAM L10 Xplained Pro Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails/dm320204)|

**Setting up [SAM L10 Xplained Pro Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails/dm320204)**

- Connect the Debug USB port on the board to the computer using a micro USB cable

**Setting up the host script**

- Refer to [Bootloader Host Script Help](GUID-E9768065-2540-409B-AC12-3DA9417F01F5.md) for setting up the **btl_host.py** utility used to send the application binary from host PC

**Running the Application**

1. Open the test application project *test_app/firmware/sam_l10_xpro.X* in the IDE
2. Build the project to generate the binary **(Do not program the binary)**
3. Open the bootloader project *bootloader/firmware/sam_l10_xpro.X* in the IDE
4. Build and program the application using the IDE

5. Run the **btl_host.py** from command prompt to program the application binary

        python <harmony3_path>/bootloader/tools/btl_host.py -v -i <COM PORT> -d saml1x -a 0x800 -f <harmony3_path>/bootloader_apps_uart/apps/uart_bootloader/test_app/firmware/sam_l10_xpro.X/dist/sam_l10_xpro/production/sam_l10_xpro.X.production.bin

6. Following snapshot shows output of successfully programming the test application
    - **Rebooting** and **Reboot Done** messages in below output signifies that bootloading is successful

    ![output](GUID-9D45B2EF-7159-4DF7-BC6F-3C43C2113B07-low.png)

7. If above step is successful then the **LED0** should start blinking
8. Open the Terminal application (Ex.:Tera Term) on the computer
9. Configure the serial port settings as follows:
    - Baud : 115200
    - Data : 8 Bits
    - Parity : None
    - Stop : 1 Bit
    - Flow Control : None

10. Reset or Power cycle the device
11. **LED0** should start blinking and you should see below output on the console

    ![output](GUID-46F24AF7-8DB6-475C-AD1B-35FA27C35735-low.png)

12. Disconnect UART console
13. **Press and hold** the Switch **SW0** and then press Reset button or Power cycle the device to force trigger bootloader at startup
14. Repeat Steps 5-11 once
    - This step is to verify whether bootloader is triggered by switch press at reset

**Additional Steps (Optional)**

- To bootload any other application refer to [Configuring an application to be bootloaded for CORTEX-M based MCUs](GUID-CC123855-6D3C-458D-8A42-C73711B21E4F.md)
