[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# Building and Running the UART Fail Safe Bootloader applications

## Downloading and building the application

To download or clone this application from Github, go to the [top level of the repository](https://github.com/Microchip-MPLAB-Harmony/bootloader_apps_uart) and click

![clone](../../../docs/images/clone.png)

Path of the application within the repository is **apps/uart_fail_safe_bootloader/**

To build the application, refer to the following table and open the project using its IDE.

### Bootloader Application

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| bootloader/firmware/sam_e54_xpro.X    | MPLABX Project for [SAM E54 Xplained Pro Evaluation Kit](https://www.microchip.com/developmenttools/ProductDetails/atsame54-xpro)|
|||

### Test Application

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| test_app/firmware/sam_e54_xpro.X    | MPLABX Project for [SAM E54 Xplained Pro Evaluation Kit](https://www.microchip.com/developmenttools/ProductDetails/atsame54-xpro)|
|||

## Setting up the hardware

The following table shows the target hardware for the application projects.

| Project Name| Board|
|:---------|:---------:|
|sam_e54_xpro.X | [SAM E54 Xplained Pro Evaluation Kit](https://www.microchip.com/developmenttools/ProductDetails/atsame54-xpro)|
|||

### Setting up [SAM E54 Xplained Pro Evaluation Kit](https://www.microchip.com/developmenttools/ProductDetails/atsame54-xpro)

- Connect the Debug USB port on the board to the computer using a micro USB cable

## Setting up the host script

- Refer to [Bootloader Tools Help](https://github.com/Microchip-MPLAB-Harmony/bootloader/blob/master/tools/readme.md) for setting up the host script

## Running the Application

1. Open the test application project *test_app/firmware/sam_e54_xpro.X* in the IDE
2. Build the project to generate the binary **(Do not program the binary)**
3. Open the bootloader project *bootloader/firmware/sam_e54_xpro.X* in the IDE
4. Build and program the application using the IDE

5. Launch MHC for the *bootloader/firmware/sam_e54_xpro.X* project
    - Disable Fuse Settings

        ![mhcSetting](./images/btl_fail_safe_update_test_app_config.png)

    - Regenerate the project

    - Enable **Execute this line After Build** option in MPLAB X Project properties->Building option

        ![buildOption](./images/btl_fail_safe_update_test_app_build.png)

6. Build the project to generate the bootloader binary **(Do not program the binary)**

7. Run the **btl_app_merge_bin.py** from command prompt to merge the generated Bootloader binary and test application binary. Below output should be displayed on command prompt

        python <harmony3_path>\bootloader\tools\btl_app_merge_bin.py -o 0x2000 -b <harmony3_path>\bootloader_apps_uart\apps\uart_fail_safe_bootloader\bootloader\firmware\sam_e54_xpro.X\dist\sam_e54_xpro\production\sam_e54_xpro.X.production.bin -a <harmony3_path>\bootloader_apps_uart\apps\uart_fail_safe_bootloader\test_app\firmware\sam_e54_xpro.X\dist\sam_e54_xpro\production\sam_e54_xpro.X.production.bin

    ![output](./images/btl_uart_fail_safe_app_merger_console.png)

8. Run the **btl_host.py** from command prompt to program the merged binary to opposite panel. **btl_app_merged.bin** will be created in the current directory from where the **btl_app_merge_bin.py** was called

        python <harmony3_path>\bootloader\tools\btl_host.py -v -s -i <COM PORT> -d same5x -a 0x80000 -f <Path_To_Merged_Binary>\btl_app_merged.bin

9. Following snapshot shows example output of successfully programming the merged binary
    - **Swapping Bank And Rebooting** and **Reboot Done** messages in below output signifies that bootloading is successful

    ![output](./images/btl_host_output.png)

10. If above step is successful then the **LED0** should start blinking
11. Open the Terminal application (Ex.:Tera Term) on the computer
12. Configure the serial port settings as follows:
    - Baud : 115200
    - Data : 8 Bits
    - Parity : None
    - Stop : 1 Bit
    - Flow Control : None

13. Reset or Power cycle the device
14. **LED0** should start blinking and you should see below output on the console
    - The NVM Flash Bank Can be **BANK A** or **BANK B** based on from where the test application is running

    ![output](./images/btl_uart_test_app_console_bank_b.png)

    ![output](./images/btl_uart_test_app_console_bank_a.png)

15. Press and hold the Switch **SW0** to trigger Bootloader from test application to program firmware in other bank and you should see below output

    ![output](./images/btl_uart_test_app_console_bank_b_trigger_bootloader.png)

16. Disconnect UART console
17. Run the **btl_host.py** from command prompt to program only the test application binary to opposite panel

        python <harmony3_path>\bootloader\tools\btl_host.py -v -s -i <COM PORT> -d same5x -a 0x82000 -f <harmony3_path>\bootloader_apps_uart\apps\uart_fail_safe_bootloader\test_app\firmware\sam_e54_xpro.X\dist\sam_e54_xpro\production\sam_e54_xpro.X.production.bin

18. Repeat Steps 9-14 once
    - This step is to verify that bootloader is running after triggering bootloader from test application in Step 15
    - Also to program the new firmware in opposite bank
    - You should see other Bank in console displayed compared to first run

**Note:**

If demo needs to be restarted from beginning
- Revert the changes done in Step 5
- Regenerate the project
- Start from Step 4