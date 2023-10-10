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

typedef enum
{
    /* Transfer being processed */
    BTL_MEM_TRANSFER_BUSY,

    /* Transfer is successfully completed */
    BTL_MEM_TRANSFER_COMPLETED,

    /* Transfer had error*/
    BTL_MEM_TRANSFER_ERROR_UNKNOWN

} BTL_MEM_TRANSFER_STATUS;

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

    DRV_MX25L_GEOMETRY geometry;

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

static bool bootloader_WaitForXferComplete(void)
{
    bool status = false;

    BTL_MEM_TRANSFER_STATUS transferStatus = BTL_MEM_TRANSFER_ERROR_UNKNOWN;

    do
    {
        transferStatus = (BTL_MEM_TRANSFER_STATUS)DRV_MX25L_TransferStatusGet(btlData.handle);

    } while (transferStatus == BTL_MEM_TRANSFER_BUSY);

    if(transferStatus == BTL_MEM_TRANSFER_COMPLETED)
    {
        status = true;
    }

    return status;
}

bool bootloader_IsDeviceReady(void)
{
    btlData.deviceReady = false;

    if (DRV_MX25L_Status(DRV_MX25L_INDEX) == SYS_STATUS_READY)
    {
        btlData.handle = DRV_MX25L_Open((SYS_MODULE_INDEX)DRV_MX25L_INDEX, DRV_IO_INTENT_READWRITE);

        if (btlData.handle != DRV_HANDLE_INVALID)
        {
            if (DRV_MX25L_GeometryGet(btlData.handle, (void *)&btlData.geometry) == true)
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
    uint32_t readLen = 0U;
    uint32_t imageSize;
    bool status = false;

    (void)DRV_MX25L_Read(btlData.handle, fileBuffer, PAGE_SIZE, btlData.extMemoryMetaDataAddr);
    (void)bootloader_WaitForXferComplete();

    imageSize = *((uint32_t *)fileBuffer);

    if (imageSize != 0xFFFFFFFFU)
    {
        memoryAddr = btlData.extMemoryImageAddr;

        do
        {
            status = DRV_MX25L_Read(btlData.handle, fileBuffer, PAGE_SIZE, memoryAddr);
            (void)bootloader_WaitForXferComplete();
            memcpy((void *)btlData.progAddr, fileBuffer, PAGE_SIZE);

            btlData.progAddr += PAGE_SIZE;
            readLen += PAGE_SIZE;
            memoryAddr += PAGE_SIZE;

        } while(readLen < imageSize);
    }
    if (status == true)
    {
        run_Application(APP_START_ADDRESS);
    }
}

bool bootloader_Storage_Write(bool imageStartFlag, void *buffer, size_t size)
{
    bool status = false;

    if (imageStartFlag)
    {
        memoryAddr = btlData.extMemoryImageAddr;
    }

    if ((memoryAddr % btlData.geometry.erase_blockSize) == 0U)
    {
        if (DRV_MX25L_SectorErase(btlData.handle, memoryAddr) == true)
        {
            (void)bootloader_WaitForXferComplete();
        }
    }

    status = DRV_MX25L_PageWrite(btlData.handle, buffer, memoryAddr);
    if (status == true)
    {
        (void)bootloader_WaitForXferComplete();
    }

    memoryAddr += PAGE_SIZE;

    return status;
}

bool bootloader_Storage_CRC_Verify(uint32_t crc)
{
    uint32_t readLen = 0U;
    uint32_t imageBufferSize;
    uint32_t imageSize;
    uint32_t crcGenerate = 0xFFFFFFFFU;
    bool status = false;

    memoryAddr = btlData.extMemoryImageAddr;

    imageSize = btlData.extMemoryImageSize;
    do
    {
        (void)DRV_MX25L_Read(btlData.handle, fileBuffer, PAGE_SIZE, memoryAddr);
        (void)bootloader_WaitForXferComplete();

        if (imageSize >= PAGE_SIZE)
        {
            imageBufferSize = PAGE_SIZE;
        }
        else
        {
            imageBufferSize = imageSize;
        }
        crcGenerate = bootloader_CRCGenerate(fileBuffer, imageBufferSize, crcGenerate);

        readLen += PAGE_SIZE;
        memoryAddr += PAGE_SIZE;
        imageSize -= imageBufferSize;

        if ((imageSize == 0U) && (crc == crcGenerate))
        {
            status = true;
            memoryAddr = btlData.extMemoryMetaDataAddr;

            memcpy(fileBuffer, (uint8_t *)&btlData.extMemoryImageSize, sizeof(btlData.extMemoryImageSize));

            if ((memoryAddr % btlData.geometry.erase_blockSize) == 0U)
            {
                if (DRV_MX25L_SectorErase(btlData.handle, memoryAddr) == true)
                {
                    (void)bootloader_WaitForXferComplete();
                }
            }

            (void)DRV_MX25L_PageWrite(btlData.handle, fileBuffer, memoryAddr);
            (void)bootloader_WaitForXferComplete();
            break;
        }
    } while(readLen < btlData.extMemoryImageSize);

    return status;
}
