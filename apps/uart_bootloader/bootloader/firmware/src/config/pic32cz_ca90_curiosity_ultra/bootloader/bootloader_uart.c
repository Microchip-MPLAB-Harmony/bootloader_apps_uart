/*******************************************************************************
  UART Bootloader Source File

  File Name:
    bootloader_uart.c

  Summary:
    This file contains source code necessary to execute UART bootloader.

  Description:
    This file contains source code necessary to execute UART bootloader.
    It implements bootloader protocol which uses UART peripheral to download
    application firmware into internal flash from HOST-PC.
 *******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2019 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *******************************************************************************/
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: Include Files
// *****************************************************************************
// *****************************************************************************

#include "definitions.h"
#include "bootloader_common.h"
#include <device.h>

// *****************************************************************************
// *****************************************************************************
// Section: Type Definitions
// *****************************************************************************
// *****************************************************************************

#define GUARD_OFFSET            0
#define CMD_OFFSET              2
#define ADDR_OFFSET             0
#define SIZE_OFFSET             1
#define DATA_OFFSET             1
#define CRC_OFFSET              0

#define CMD_SIZE                1
#define GUARD_SIZE              4
#define SIZE_SIZE               4
#define OFFSET_SIZE             4
#define CRC_SIZE                4
#define HEADER_SIZE             (GUARD_SIZE + SIZE_SIZE + CMD_SIZE)
#define DATA_SIZE               ERASE_BLOCK_SIZE

#define WORDS(x)                ((int)((x) / sizeof(uint32_t)))

#define OFFSET_ALIGN_MASK       (~ERASE_BLOCK_SIZE + 1)
#define SIZE_ALIGN_MASK         (~PAGE_SIZE + 1)

#define BTL_GUARD               (0x5048434DUL)

enum
{
    BL_CMD_UNLOCK       = 0xa0,
    BL_CMD_DATA         = 0xa1,
    BL_CMD_VERIFY       = 0xa2,
    BL_CMD_RESET        = 0xa3,
    BL_CMD_READ_VERSION = 0xa6,
};

enum
{
    BL_RESP_OK          = 0x50,
    BL_RESP_ERROR       = 0x51,
    BL_RESP_INVALID     = 0x52,
    BL_RESP_CRC_OK      = 0x53,
    BL_RESP_CRC_FAIL    = 0x54,
};

// *****************************************************************************
// *****************************************************************************
// Section: Global objects
// *****************************************************************************
// *****************************************************************************

static uint8_t btl_guard[4] = {0x4D, 0x43, 0x48, 0x50};

static uint32_t input_buffer[WORDS(OFFSET_SIZE + DATA_SIZE)];

static uint32_t flash_data[WORDS(DATA_SIZE)];
static uint32_t flash_addr          = 0;

static uint32_t unlock_begin        = 0;
static uint32_t unlock_end          = 0;
static uint32_t data_size           = 0;

static uint8_t  input_command       = 0;

static bool     packet_received     = false;
static bool     flash_data_ready    = false;

static bool     uartBLActive        = false;

typedef bool (*FLASH_ERASE_FPTR)(uint32_t);

typedef bool (*FLASH_WRITE_FPTR)(uint32_t*, uint32_t);


// *****************************************************************************
// *****************************************************************************
// Section: Bootloader Local Functions
// *****************************************************************************
// *****************************************************************************

/* Function to receive application firmware via UART/USART */
static void input_task(void)
{
    static uint32_t ptr             = 0;
    static uint32_t size            = 0;
    static bool     header_received = false;
    uint8_t         *byte_buf       = (uint8_t *)&input_buffer[0];
    uint8_t         input_data      = 0;

    if (packet_received == true)
    {
        return;
    }

    if (SERCOM5_USART_ReceiverIsReady() == false)
    {
        return;
    }

    input_data = SERCOM5_USART_ReadByte();

    /* Check if 100 ms have elapsed */
    if (SYSTICK_TimerPeriodHasExpired())
    {
        header_received = false;
        ptr = 0;
    }

    if (header_received == false)
    {
        byte_buf[ptr++] = input_data;

        // Check for each guard byte and discard if mismatch
        if (ptr <= GUARD_SIZE)
        {
            if (input_data != btl_guard[ptr-1])
            {
                ptr = 0;
            }
        }
        else if (ptr == HEADER_SIZE)
        {
            if (input_buffer[GUARD_OFFSET] != BTL_GUARD)
            {
                SERCOM5_USART_WriteByte(BL_RESP_ERROR);
            }
            else
            {
                size            = input_buffer[SIZE_OFFSET];
                input_command   = (uint8_t)input_buffer[CMD_OFFSET];
                header_received = true;
                uartBLActive    = true;
            }

            ptr = 0;
        }
    }
    else if (header_received == true)
    {
        if (ptr < size)
        {
            byte_buf[ptr++] = input_data;
        }

        if (ptr == size)
        {
            data_size = size;
            ptr = 0;
            size = 0;
            packet_received = true;
            header_received = false;
        }
    }

    SYSTICK_TimerRestart();
}

/* Function to process the received command */
static void command_task(void)
{
    uint32_t i;

    if (BL_CMD_UNLOCK == input_command)
    {
        uint32_t begin  = (input_buffer[ADDR_OFFSET] & OFFSET_ALIGN_MASK);

        uint32_t end    = begin + (input_buffer[SIZE_OFFSET] & SIZE_ALIGN_MASK);

        if (end > begin && end <= (FLASH_START + FLASH_LENGTH))
        {
            unlock_begin = begin;
            unlock_end = end;
            SERCOM5_USART_WriteByte(BL_RESP_OK);
        }
        else
        {
            unlock_begin = 0;
            unlock_end = 0;
            SERCOM5_USART_WriteByte(BL_RESP_ERROR);
        }
    }
    else if (BL_CMD_DATA == input_command)
    {
        flash_addr = (input_buffer[ADDR_OFFSET] & OFFSET_ALIGN_MASK);

        if (unlock_begin <= flash_addr && flash_addr < unlock_end)
        {
            for (i = 0; i < WORDS(DATA_SIZE); i++)
            {
                flash_data[i] = input_buffer[i + DATA_OFFSET];
            }

            flash_data_ready = true;

            SERCOM5_USART_WriteByte(BL_RESP_OK);
        }
        else
        {
            SERCOM5_USART_WriteByte(BL_RESP_ERROR);
        }
    }
    else if (BL_CMD_READ_VERSION == input_command)
    {
        SERCOM5_USART_WriteByte(BL_RESP_OK);

        uint16_t btlVersion = bootloader_GetVersion();

        SERCOM5_USART_WriteByte(((btlVersion >> 8) & 0xFF));
        SERCOM5_USART_WriteByte((btlVersion & 0xFF));
    }
    else if (BL_CMD_VERIFY == input_command)
    {
        uint32_t crc        = input_buffer[CRC_OFFSET];
        uint32_t crc_gen    = 0;

        crc_gen = bootloader_CRCGenerate(unlock_begin, (unlock_end - unlock_begin));

        if (crc == crc_gen)
        {
            SERCOM5_USART_WriteByte(BL_RESP_CRC_OK);
        }
        else
        {
            SERCOM5_USART_WriteByte(BL_RESP_CRC_FAIL);
        }
    }
    else if (BL_CMD_RESET == input_command)
    {
        SERCOM5_USART_WriteByte(BL_RESP_OK);

        while(SERCOM5_USART_TransmitComplete() == false);

        bootloader_TriggerReset();
    }
    else
    {
        SERCOM5_USART_WriteByte(BL_RESP_INVALID);
    }

    packet_received = false;
}


/* Function to program received application firmware data into internal flash */
static void flash_task(void)
{
    uint32_t addr       = flash_addr;
    uint32_t bytes_written   = 0;
    uint32_t write_idx  = 0;

    // data_size = Actual data bytes to write + Address 4 Bytes
    uint32_t bytes_to_write = (data_size - 4);

    FLASH_ERASE_FPTR flash_erase_fptr = (FLASH_ERASE_FPTR)FCW_PageErase;
    FLASH_WRITE_FPTR flash_write_fptr = (FLASH_WRITE_FPTR)FCW_RowWrite;

    DCACHE_CLEAN_BY_ADDR(&flash_data[0], sizeof(flash_data));
    
    /* Erase the Current sector */
    flash_erase_fptr(addr);

    /* Receive Next Bytes while waiting for memory to be ready */
    while(FCW_IsBusy() == true)
    {
        input_task();
    
    }

    for (bytes_written = 0; bytes_written < bytes_to_write; bytes_written += PAGE_SIZE)
    {
        flash_write_fptr(&flash_data[write_idx], addr);

        /* Receive Next Bytes while waiting for memory to be ready */
        while(FCW_IsBusy() == true)
        {
            input_task();
        
        }

        addr += PAGE_SIZE;
        write_idx += WORDS(PAGE_SIZE);
    }


    flash_data_ready = false;
}

// *****************************************************************************
// *****************************************************************************
// Section: Bootloader Global Functions
// *****************************************************************************
// *****************************************************************************

void bootloader_UART_Tasks(void)
{

    do
    {
        input_task();

        if (flash_data_ready)
        {
            flash_task();
        }
        else if (packet_received)
        {
            command_task();
        }
    } while (uartBLActive);
}
