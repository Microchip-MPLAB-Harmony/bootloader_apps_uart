/*******************************************************************************
  Company:
    Microchip Technology Inc.

  File Name:
    bootloader_storage.c

  Summary:
    Storage for the Bootloader library.

  Description:
    This file contains the Storage definition for the Bootloader library.
*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2023 Microchip Technology Inc. and its subsidiaries.
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

#include <string.h>
#include "configuration.h"
#include "bootloader/bootloader_uart.h"
#include "bootloader_storage.h"


typedef struct
{
    bool deviceReady;

    DRV_HANDLE handle;

    /* External Memory image address */
    uint32_t extMemoryImageAddr;

    /* External Memory image size */
    uint32_t extMemoryImageSize;

    /* External Memory metadata address */
    uint32_t extMemoryMetaDataAddr;

    DRV_NAND_FLASH_GEOMETRY geometry;

    /* Programming address */
    uint32_t progAddr;

} BOOTLOADER_DATA;

static uint8_t CACHE_ALIGN fileBuffer[PAGE_SIZE];
static uint32_t memoryAddr;

static BOOTLOADER_DATA btlData =
{
    .deviceReady = false,
    .extMemoryImageAddr  = 0x00200000U,
    .extMemoryMetaDataAddr = 0x00180000U,
    .progAddr       = APP_START_ADDRESS,
};


bool bootloader_IsDeviceReady(void)
{
    btlData.deviceReady = false;

    if (DRV_NAND_FLASH_Status(DRV_NAND_FLASH_INDEX) == SYS_STATUS_READY)
    {
        btlData.handle = DRV_NAND_FLASH_Open((SYS_MODULE_INDEX)DRV_NAND_FLASH_INDEX, DRV_IO_INTENT_READWRITE);

        if (btlData.handle != DRV_HANDLE_INVALID)
        {
            if (DRV_NAND_FLASH_GeometryGet(btlData.handle, (void *)&btlData.geometry) == true)
            {
                btlData.deviceReady = true;
            }
        }
    }
    return btlData.deviceReady;
}

void bootloader_ImageSizeSet(uint32_t size)
{
    btlData.extMemoryImageSize = size;
}

void bootloader_Storage_Read(void)
{
    uint32_t pageNum;
    uint32_t blockNum;
    uint32_t readLen = 0U;
    uint32_t imageSize;
    bool status = false;

    blockNum = btlData.extMemoryMetaDataAddr / btlData.geometry.blockSize;
    pageNum = ((btlData.extMemoryMetaDataAddr / btlData.geometry.pageSize) % (btlData.geometry.blockSize / btlData.geometry.pageSize));

    (void)DRV_NAND_FLASH_SkipBlock_PageRead(btlData.handle, (uint16_t)blockNum, (uint16_t)pageNum, fileBuffer, NULL, false);

    imageSize = *((uint32_t *)(uintptr_t)fileBuffer);

    if (imageSize != 0xFFFFFFFFU)
    {
        blockNum = btlData.extMemoryImageAddr / btlData.geometry.blockSize;
        pageNum = ((btlData.extMemoryImageAddr / btlData.geometry.pageSize) % (btlData.geometry.blockSize / btlData.geometry.pageSize));

        do
        {
            status = DRV_NAND_FLASH_SkipBlock_PageRead(btlData.handle, (uint16_t)blockNum, (uint16_t)pageNum, fileBuffer, NULL, false);

            (void)memcpy((uint8_t *)btlData.progAddr, fileBuffer, btlData.geometry.pageSize);

            btlData.progAddr += btlData.geometry.pageSize;
            readLen += btlData.geometry.pageSize;
            pageNum++;

            if (pageNum >= (btlData.geometry.blockSize / btlData.geometry.pageSize))
            {
                blockNum++;
                pageNum = 0;
            }

        } while(readLen < imageSize);
    }
    if (status == true)
    {
        run_Application(APP_START_ADDRESS);
    }
}

bool bootloader_Storage_Write(bool imageStartFlag, void *buffer, size_t size)
{
    uint32_t pageNum;
    uint32_t blockNum;
    bool status = false;

    if (imageStartFlag)
    {
        memoryAddr = btlData.extMemoryImageAddr;
    }

    blockNum = memoryAddr / btlData.geometry.blockSize;

    pageNum = ((memoryAddr / btlData.geometry.pageSize) % (btlData.geometry.blockSize / btlData.geometry.pageSize));

    if ((memoryAddr % btlData.geometry.blockSize) == 0U)
    {
        (void)DRV_NAND_FLASH_SkipBlock_BlockErase(btlData.handle, (uint16_t)blockNum, false);
    }

    status = DRV_NAND_FLASH_SkipBlock_PageWrite(btlData.handle, (uint16_t)blockNum, (uint16_t)pageNum, buffer, NULL, false);

    memoryAddr += btlData.geometry.pageSize;

    return status;
}

bool bootloader_Storage_CRC_Verify(uint32_t crc)
{
    uint32_t pageNum;
    uint32_t blockNum;
    uint32_t readLen = 0U;
    uint32_t imageBufferSize;
    uint32_t imageSize;
    uint32_t crcGenerate = 0xFFFFFFFFU;
    bool status = false;

    blockNum = btlData.extMemoryImageAddr / btlData.geometry.blockSize;
    pageNum = ((btlData.extMemoryImageAddr / btlData.geometry.pageSize) % (btlData.geometry.blockSize / btlData.geometry.pageSize));

    imageSize = btlData.extMemoryImageSize;
    do
    {
        (void)DRV_NAND_FLASH_SkipBlock_PageRead(btlData.handle, (uint16_t)blockNum, (uint16_t)pageNum, fileBuffer, NULL, false);

        if (imageSize >= btlData.geometry.pageSize)
        {
            imageBufferSize = btlData.geometry.pageSize;
        }
        else
        {
            imageBufferSize = imageSize;
        }
        crcGenerate = bootloader_CRCGenerate(fileBuffer, imageBufferSize, crcGenerate);

        readLen += btlData.geometry.pageSize;
        pageNum++;
        imageSize -= imageBufferSize;

        if ((imageSize == 0U) && (crc == crcGenerate))
        {
            status = true;
            blockNum = btlData.extMemoryMetaDataAddr / btlData.geometry.blockSize;
            pageNum = ((btlData.extMemoryMetaDataAddr / btlData.geometry.pageSize) % (btlData.geometry.blockSize / btlData.geometry.pageSize));

            (void)memcpy(fileBuffer, (uint8_t *)&btlData.extMemoryImageSize, sizeof(btlData.extMemoryImageSize));

            if ((btlData.extMemoryMetaDataAddr % btlData.geometry.blockSize) == 0U)
            {
                (void)DRV_NAND_FLASH_SkipBlock_BlockErase(btlData.handle, (uint16_t)blockNum, false);
            }
            (void)DRV_NAND_FLASH_SkipBlock_PageWrite(btlData.handle, (uint16_t)blockNum, (uint16_t)pageNum, fileBuffer, NULL, false);
            break;
        }

        if (pageNum >= (btlData.geometry.blockSize / btlData.geometry.pageSize))
        {
            blockNum++;
            pageNum = 0;
        }

    } while(readLen < btlData.extMemoryImageSize);

    return status;
}
