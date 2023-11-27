/******************************************************************************
  MX25L Driver Implementation

  Company:
    Microchip Technology Inc.

  File Name:
    drv_mx25l.c

  Summary:
    MX25L Driver Interface Definition

  Description:
    The MX25L Driver provides a interface to access the MX25L peripheral on the SAM
    Devices. This file should be included in the project if MX25L driver
    functionality is needed.
*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
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
//DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: Include Files
// *****************************************************************************
// *****************************************************************************

#include "driver/mx25l/src/drv_mx25l_local.h"

// *****************************************************************************
// *****************************************************************************
// Section: Global objects
// *****************************************************************************
// *****************************************************************************

#define TOTAL_DEVICE          (13U)

static DRV_MX25L_OBJECT gDrvMX25LObj;
static DRV_MX25L_OBJECT *dObj = &gDrvMX25LObj;

static qspi_command_xfer_t qspi_command_xfer = { 0 };
static qspi_register_xfer_t qspi_register_xfer = { 0 };
static qspi_memory_xfer_t qspi_memory_xfer = { 0 };

static bool EnableFourByteAddressMode = false;

/* Table mapping the Flash ID's to their sizes. */
static uint32_t gSstFlashIdSizeTable [TOTAL_DEVICE][2] = {
    {0x1C, 0x10000000}, /*   2 GBit */
    {0x1B, 0x08000000}, /*   1 GBit */
    {0x1A, 0x04000000}, /* 512 MBit */
    {0x19, 0x02000000}, /* 256 MBit */
    {0x18, 0x01000000}, /* 128 MBit */
    {0x17, 0x00800000}, /*  64 MBit */
    {0x16, 0x00400000}, /*  32 MBit */
    {0x15, 0x00200000}, /*  16 MBit */
    {0x14, 0x00100000}, /*   8 MBit */
    {0x13, 0x00080000}, /*   4 MBit */
    {0x12, 0x00040000}, /*   2 MBit */
    {0x11, 0x00020000}, /*   1 MBit */
    {0x10, 0x00010000}  /* 512 KBit */
};

// *****************************************************************************
// *****************************************************************************
// Section: MX25L Driver Local Functions
// *****************************************************************************
// *****************************************************************************

/* This function returns the flash size in bytes for the specified deviceId. A
 * zero is returned if the device id is not supported. */
static uint32_t DRV_MX25L_GetFlashSize( uint8_t deviceId )
{
    uint8_t i = 0;

    for (i = 0U; i < TOTAL_DEVICE; i++)
    {
        if (deviceId == gSstFlashIdSizeTable[i][0])
        {
            return gSstFlashIdSizeTable[i][1];
        }
    }

    return 0;
}

static bool DRV_MX25L_EnableQuadIO(void)
{
    bool status = false;

    (void) memset((void *)&qspi_command_xfer, 0, sizeof(qspi_command_xfer_t));

    qspi_command_xfer.instruction = (uint8_t)MX25L_CMD_ENABLE_QUAD_IO;
    qspi_command_xfer.width = SINGLE_BIT_SPI;

    status  = dObj->mx25lPlib->CommandWrite(&qspi_command_xfer, 0);

    return status;
}

static bool DRV_MX25L_ResetQuadIO(void)
{
    bool status = false;

    (void) memset((void *)&qspi_command_xfer, 0, sizeof(qspi_command_xfer_t));

    qspi_command_xfer.instruction = (uint8_t)MX25L_CMD_RESET_QUAD_IO;
    qspi_command_xfer.width = QUAD_CMD;

    status  = dObj->mx25lPlib->CommandWrite(&qspi_command_xfer, 0);

    return status;
}

static bool DRV_MX25L_UnlockFlash(void)
{
    bool status = false;

    (void) memset((void *)&qspi_command_xfer, 0, sizeof(qspi_command_xfer_t));

    qspi_command_xfer.instruction = (uint8_t)MX25L_CMD_WRITE_ENABLE;
    qspi_command_xfer.width = SINGLE_BIT_SPI;

    if (dObj->mx25lPlib->CommandWrite(&qspi_command_xfer, 0) == false)
    {
        return status;
    }

    (void) memset((void *)&qspi_command_xfer, 0, sizeof(qspi_command_xfer_t));

    qspi_command_xfer.instruction = (uint8_t)MX25L_CMD_UNPROTECT_GLOBAL;
    qspi_command_xfer.width = SINGLE_BIT_SPI;

    status  = dObj->mx25lPlib->CommandWrite(&qspi_command_xfer, 0);

    return status;
}

static bool DRV_MX25L_WriteEnable(void)
{
    bool status = false;

    (void) memset((void *)&qspi_command_xfer, 0, sizeof(qspi_command_xfer_t));

    qspi_command_xfer.instruction = (uint8_t)MX25L_CMD_WRITE_ENABLE;
    qspi_command_xfer.width = QUAD_CMD;

    status  = dObj->mx25lPlib->CommandWrite(&qspi_command_xfer, 0);

    return status;
}

static bool DRV_MX25L_EnterFourByteAddressMode(void)
{
    bool status = false;

    (void) memset((void *)&qspi_command_xfer, 0, sizeof(qspi_command_xfer_t));

    qspi_command_xfer.instruction = (uint8_t)MX25L_CMD_ENTER_4_BYTE_ADDR_MODE;
    qspi_command_xfer.width = QUAD_CMD;

    status  = dObj->mx25lPlib->CommandWrite(&qspi_command_xfer, 0);

    return status;
}

// *****************************************************************************
// *****************************************************************************
// Section: MX25L Driver Global Functions
// *****************************************************************************
// *****************************************************************************

bool DRV_MX25L_ResetFlash(void)
{
    bool status = false;

    (void) memset((void *)&qspi_command_xfer, 0, sizeof(qspi_command_xfer_t));

    qspi_command_xfer.instruction = (uint8_t)MX25L_CMD_FLASH_RESET_ENABLE;
    qspi_command_xfer.width = QUAD_CMD;

    if (dObj->mx25lPlib->CommandWrite(&qspi_command_xfer, 0) == false)
    {
        return status;
    }

    qspi_command_xfer.instruction = (uint8_t)MX25L_CMD_FLASH_RESET;
    qspi_command_xfer.width = QUAD_CMD;

    status  = dObj->mx25lPlib->CommandWrite(&qspi_command_xfer, 0);

    return status;
}

bool DRV_MX25L_ReadJedecId( const DRV_HANDLE handle, void *jedec_id)
{
    bool status = false;

    (void) memset((void *)&qspi_register_xfer, 0, sizeof(qspi_register_xfer_t));

    qspi_register_xfer.instruction = (uint8_t)MX25L_CMD_QUAD_JEDEC_ID_READ;
    qspi_register_xfer.width = QUAD_CMD;
    qspi_register_xfer.dummy_cycles = 0;

    status  = dObj->mx25lPlib->RegisterRead(&qspi_register_xfer, (uint32_t *)jedec_id, 3);

    return status;
}

static bool DRV_MX25L_ReadStatus( const DRV_HANDLE handle, void *rx_data, uint32_t rx_data_length )
{
    bool status = false;

    (void) memset((void *)&qspi_register_xfer, 0, sizeof(qspi_register_xfer_t));

    qspi_register_xfer.instruction = (uint8_t)MX25L_CMD_READ_STATUS_REG;
    qspi_register_xfer.width = QUAD_CMD;
    qspi_register_xfer.dummy_cycles = 0;

    status  = dObj->mx25lPlib->RegisterRead(&qspi_register_xfer, (uint32_t *)rx_data, rx_data_length);

    return status;
}

DRV_MX25L_TRANSFER_STATUS DRV_MX25L_TransferStatusGet( const DRV_HANDLE handle )
{
    DRV_MX25L_TRANSFER_STATUS status = DRV_MX25L_TRANSFER_ERROR_UNKNOWN;

    uint8_t reg_status = 0;

    if (gDrvMX25LObj.curOpType == DRV_MX25L_OPERATION_TYPE_READ )
    {
        return DRV_MX25L_TRANSFER_COMPLETED;
    }

    if (DRV_MX25L_ReadStatus(handle, (void *)&reg_status, 1) == false)
    {
        return status;
    }

    if((reg_status & (1UL<<0)) != 0U)
    {
        status = DRV_MX25L_TRANSFER_BUSY;
    }
    else
    {
        status = DRV_MX25L_TRANSFER_COMPLETED;
    }

    return status;
}

bool DRV_MX25L_Read( const DRV_HANDLE handle, void *rx_data, uint32_t rx_data_length, uint32_t address )
{
    bool status = false;

    (void) memset((void *)&qspi_memory_xfer, 0, sizeof(qspi_memory_xfer_t));

    qspi_memory_xfer.instruction = (uint8_t)MX25L_CMD_HIGH_SPEED_QREAD;
    qspi_memory_xfer.width = QUAD_CMD;
    qspi_memory_xfer.dummy_cycles = 6;
    if (EnableFourByteAddressMode)
    {
        qspi_memory_xfer.addr_len = ADDRL_32_BIT;
    }

    status = dObj->mx25lPlib->MemoryRead(&qspi_memory_xfer, (uint32_t *)rx_data, rx_data_length, address);

    gDrvMX25LObj.curOpType = DRV_MX25L_OPERATION_TYPE_READ;

    return status;
}

bool DRV_MX25L_PageWrite( const DRV_HANDLE handle, void *tx_data, uint32_t address )
{
    bool status = false;

    if (DRV_MX25L_WriteEnable() == false)
    {
        return status;
    }

    (void) memset((void *)&qspi_memory_xfer, 0, sizeof(qspi_memory_xfer_t));

    qspi_memory_xfer.instruction = (uint8_t)MX25L_CMD_PAGE_PROGRAM;
    qspi_memory_xfer.width = QUAD_CMD;
    if (EnableFourByteAddressMode)
    {
        qspi_memory_xfer.addr_len = ADDRL_32_BIT;
    }

    status = dObj->mx25lPlib->MemoryWrite(&qspi_memory_xfer, (uint32_t *)tx_data, DRV_MX25L_PAGE_SIZE, address);

    gDrvMX25LObj.curOpType = DRV_MX25L_OPERATION_TYPE_WRITE;

    return status;
}

static bool DRV_MX25L_Erase( uint8_t instruction, uint32_t address )
{
    bool status = false;

    if (DRV_MX25L_WriteEnable() == false)
    {
        return status;
    }

    qspi_command_xfer.instruction = instruction;
    qspi_command_xfer.width = QUAD_CMD;

    if (instruction != (uint32_t)MX25L_CMD_CHIP_ERASE)
    {
        qspi_command_xfer.addr_en = 1;
        if (EnableFourByteAddressMode)
        {
            qspi_command_xfer.addr_len = ADDRL_32_BIT;
        }
    }

    status = dObj->mx25lPlib->CommandWrite(&qspi_command_xfer, address);

    gDrvMX25LObj.curOpType = DRV_MX25L_OPERATION_TYPE_ERASE;

    return status;
}

bool DRV_MX25L_SectorErase( const DRV_HANDLE handle, uint32_t address )
{
    return (DRV_MX25L_Erase((uint8_t)MX25L_CMD_SECTOR_ERASE, address));
}

bool DRV_MX25L_BlockErase( const DRV_HANDLE handle, uint32_t address )
{
    return (DRV_MX25L_Erase((uint8_t)MX25L_CMD_BLOCK_ERASE_64K, address));
}

bool DRV_MX25L_ChipErase( const DRV_HANDLE handle )
{
    return (DRV_MX25L_Erase((uint8_t)MX25L_CMD_CHIP_ERASE, 0));
}

bool DRV_MX25L_GeometryGet( const DRV_HANDLE handle, DRV_MX25L_GEOMETRY *geometry )
{
    uint32_t flash_size = 0;
    uint8_t  jedec_id[3] = { 0 };
    bool status = true;

    if (DRV_MX25L_ReadJedecId(handle, (void *)&jedec_id) == false)
    {
        status = false;
    }
    else
    {       

        flash_size = DRV_MX25L_GetFlashSize(jedec_id[2]);

        if (flash_size == 0U) 
        {
            status = false;
        }        
        
        if(DRV_MX25L_START_ADDRESS >= flash_size)
        {
            status = false;
        }
        else
        {    

            flash_size = flash_size - DRV_MX25L_START_ADDRESS;

            /* Flash size should be at-least of a Erase Block size */
            if (flash_size < DRV_MX25L_ERASE_BUFFER_SIZE)
            {
                status = false;
            }
            else
            {

                /* Read block size and number of blocks */
                geometry->read_blockSize = 1;
                geometry->read_numBlocks = flash_size;

                /* Write block size and number of blocks */
                geometry->write_blockSize = DRV_MX25L_PAGE_SIZE;
                geometry->write_numBlocks = (flash_size / (uint32_t)DRV_MX25L_PAGE_SIZE);

                /* Erase block size and number of blocks */
                geometry->erase_blockSize = DRV_MX25L_ERASE_BUFFER_SIZE;
                geometry->erase_numBlocks = (flash_size / DRV_MX25L_ERASE_BUFFER_SIZE);

                geometry->numReadRegions = 1;
                geometry->numWriteRegions = 1;
                geometry->numEraseRegions = 1;

                geometry->blockStartAddress = DRV_MX25L_START_ADDRESS;
            }
        }
    }

    return status;
}

DRV_HANDLE DRV_MX25L_Open( const SYS_MODULE_INDEX drvIndex, const DRV_IO_INTENT ioIntent )
{
    uint8_t jedec_id[3] = {0};

    if ((dObj->status != SYS_STATUS_READY) ||
        (dObj->nClients >= DRV_MX25L_CLIENTS_NUMBER))
    {
        return DRV_HANDLE_INVALID;
    }

    /* Put MX25L Flash device on SPI Mode */
    if (DRV_MX25L_ResetQuadIO() == false)
    {
        return DRV_HANDLE_INVALID;
    }

    /* Unlock the Flash */
    if (DRV_MX25L_UnlockFlash() == false)
    {
        return DRV_HANDLE_INVALID;
    }

    /* Put MX25L Flash device on QUAD IO Mode */
    if (DRV_MX25L_EnableQuadIO() == false)
    {
        return DRV_HANDLE_INVALID;
    }

    /* Read JEDEC ID */
    if (DRV_MX25L_ReadJedecId((DRV_HANDLE)drvIndex, (void *)&jedec_id) == false)
    {
        return DRV_HANDLE_INVALID;
    }

    /* Check if Flash size is greater than 128 MBit */
    if (DRV_MX25L_GetFlashSize(jedec_id[2]) > 0x01000000U)
    {
        /* Enter 4 Byte Address Mode */
        if (DRV_MX25L_EnterFourByteAddressMode() == false)
        {
            return DRV_HANDLE_INVALID;
        }
        EnableFourByteAddressMode = true;
    }

    dObj->nClients++;

    dObj->ioIntent = ioIntent;

    return ((DRV_HANDLE)drvIndex);
}

void DRV_MX25L_Close( const DRV_HANDLE handle )
{
    if ( (handle != DRV_HANDLE_INVALID) &&
         (dObj->nClients > 0U))
    {
        dObj->nClients--;
    }
}
/* MISRA C-2012 Rule 11.3, 11.8 deviated below. Deviation record ID -  
   H3_MISRAC_2012_R_11_3_DR_1 & H3_MISRAC_2012_R_11_8_DR_1*/
SYS_MODULE_OBJ DRV_MX25L_Initialize
(
    const SYS_MODULE_INDEX drvIndex,
    const SYS_MODULE_INIT *const init
)
{
    DRV_MX25L_INIT *mx25lInit = NULL;

    /* Check if the instance has already been initialized. */
    if (dObj->inUse)
    {
        return SYS_MODULE_OBJ_INVALID;
    }

    dObj->status = SYS_STATUS_UNINITIALIZED;

    /* Indicate that this object is in use */
    dObj->inUse = true;
    dObj->nClients  = 0;

    /* Assign to the local pointer the init data passed */
    mx25lInit = (DRV_MX25L_INIT *)init;

    /* Initialize the attached memory device functions */
    dObj->mx25lPlib = mx25lInit->mx25lPlib;

    dObj->status = SYS_STATUS_READY;

    /* Return the driver index */
    return drvIndex;
}
/* MISRAC 2012 deviation block end */

SYS_STATUS DRV_MX25L_Status( const SYS_MODULE_INDEX drvIndex )
{
    /* Return the driver status */
    return (gDrvMX25LObj.status);
}
