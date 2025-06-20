/******************************************************************************
  SST39 Driver Implementation

  Company:
    Microchip Technology Inc.

  File Name:
    drv_sst39.c

  Summary:
    SST39 Driver Interface Definition

  Description:
    The SST39 Driver provides a interface to access the SST39 memory. 
    This file should be included in the project if SST39 driver
    functionality is needed.
*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2022 Microchip Technology Inc. and its subsidiaries.
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

#include "driver/sst39/drv_sst39_local.h"

// *****************************************************************************
// *****************************************************************************
// Section: Global objects
// *****************************************************************************
// *****************************************************************************

static DRV_SST39_OBJECT gDrvSST39Obj;
static DRV_SST39_OBJECT *dObj = &gDrvSST39Obj;


// *****************************************************************************
// *****************************************************************************
// Section: SST39 Driver Global Functions
// *****************************************************************************
// *****************************************************************************

bool DRV_SST39_ReadProductId( const DRV_HANDLE handle, uint8_t* manufacturer, uint8_t* device )
{
    bool status = false;
    bool isCacheEnabled = (DATA_CACHE_IS_ENABLED() != 0U);
    bool isEccEnabled = false;

    if(handle == DRV_HANDLE_INVALID)
    {
        return status;
    }
    
    dObj->transferStatus = DRV_SST39_TRANSFER_BUSY;

    /* Disable ECC for PROM commands write if enabled */
    isEccEnabled = dObj->sst39Plib->eccDisable((uint8_t)DRV_SST39_CHIP_SELECT);

    if (isCacheEnabled)
    {
        DCACHE_DISABLE();
    }

    dObj->sst39Plib->write_t(DRV_SST39_START_ADDRESS+0x5555U, 0xAAU);
    __DSB();
    __ISB();
    dObj->sst39Plib->write_t(DRV_SST39_START_ADDRESS+0x2AAAU, 0x55U);
    __DSB();
    __ISB();
    dObj->sst39Plib->write_t(DRV_SST39_START_ADDRESS+0x5555U, 0x90U);
    __DSB();
    __ISB();

    /* Read ID */
    
    *manufacturer = dObj->sst39Plib->read_t(DRV_SST39_START_ADDRESS);
    *device = dObj->sst39Plib->read_t(DRV_SST39_START_ADDRESS+1U);

    __DSB();
    __ISB();

    dObj->sst39Plib->write_t(DRV_SST39_START_ADDRESS+0x5555U, 0xF0U);
    __DSB();
    __ISB();

    if (isCacheEnabled)
    {
        DCACHE_ENABLE();
    }

    /* Enable back ECC if it was disabled */
    if (isEccEnabled)
    {
        (void) dObj->sst39Plib->eccEnable((uint8_t)DRV_SST39_CHIP_SELECT);
    }

    status = true;
 
    dObj->transferStatus = DRV_SST39_TRANSFER_COMPLETED;
 
    return status;
}

bool DRV_SST39_Read( const DRV_HANDLE handle, void *rx_data, uint32_t rx_data_length, uint32_t address )
{
    bool status = false;
    uint32_t i = 0U;
    uint8_t* pBuffer = (uint8_t*)rx_data;

    if(handle == DRV_HANDLE_INVALID)
    {
        return status;
    }
    
    dObj->transferStatus = DRV_SST39_TRANSFER_BUSY;

    for (i=0; i<rx_data_length; i++)
    {
        pBuffer[i] = dObj->sst39Plib->read_t(address+i);
    }

    status = true;

    dObj->transferStatus = DRV_SST39_TRANSFER_COMPLETED;

    return status;
}

bool DRV_SST39_PageWrite( const DRV_HANDLE handle, void *tx_data, uint32_t address )
{
    bool status = false;
    bool isCacheEnabled = (DATA_CACHE_IS_ENABLED() != 0U);
    uint32_t index = 0U;
    uint8_t* pBuffer = (uint8_t*)tx_data;
    uint8_t readData = 0U;
    bool isEccEnabled = false;

    if(handle == DRV_HANDLE_INVALID)
    {
        return status;
    }

    dObj->transferStatus = DRV_SST39_TRANSFER_BUSY;
    
    /* Disable ECC for PROM commands write if enabled */
    isEccEnabled = dObj->sst39Plib->eccDisable((uint8_t)DRV_SST39_CHIP_SELECT);

    if (isCacheEnabled)
    {
        DCACHE_DISABLE();
    }

    for (index=0;index<DRV_SST39_PAGE_SIZE;index++)
    {
        /* Send Program Byte command */
        dObj->sst39Plib->write_t(DRV_SST39_START_ADDRESS+0x5555U, 0xAAU);
        __DSB();
        __ISB();
        dObj->sst39Plib->write_t(DRV_SST39_START_ADDRESS+0x2AAAU, 0x55U);
        __DSB();
        __ISB();
        dObj->sst39Plib->write_t(DRV_SST39_START_ADDRESS+0x5555U, 0xA0U);
        __DSB();
        __ISB();
         dObj->sst39Plib->write_t(address+index, pBuffer[index]);
        __DSB();
        __ISB();
    
        /* Wait Program Byte by polling bit DQ7 */
        do
        {
            readData = dObj->sst39Plib->read_t(address+index);
        }
        while ( (readData & 0x80U) != (pBuffer[index] & 0x80U) );
    }

    if (isCacheEnabled)
    {
        DCACHE_ENABLE();
    }

    /* Enable back ECC if it was disabled */
    if (isEccEnabled)
    {
        (void) dObj->sst39Plib->eccEnable((uint8_t)DRV_SST39_CHIP_SELECT);
    }

    status = true;

    dObj->transferStatus = DRV_SST39_TRANSFER_COMPLETED;
    return status;
}

bool DRV_SST39_SectorErase( const DRV_HANDLE handle, uint32_t address )
{
    bool isCacheEnabled = (DATA_CACHE_IS_ENABLED() != 0U);
    uint8_t readData = 0U;
    bool isEccEnabled = false;

    if(handle == DRV_HANDLE_INVALID)
    {
        return false;
    }
    
    dObj->transferStatus = DRV_SST39_TRANSFER_BUSY;

    /* Disable ECC for PROM commands write if enabled */
    isEccEnabled = dObj->sst39Plib->eccDisable((uint8_t)DRV_SST39_CHIP_SELECT);
 
    if (isCacheEnabled)
    {
        DCACHE_DISABLE();
    }

    /* Send Chip erase command */
    dObj->sst39Plib->write_t(DRV_SST39_START_ADDRESS+0x5555U, 0xAAU);
    __DSB();
    __ISB();
    dObj->sst39Plib->write_t(DRV_SST39_START_ADDRESS+0x2AAAU, 0x55U);
    __DSB();
    __ISB();
    dObj->sst39Plib->write_t(DRV_SST39_START_ADDRESS+0x5555U, 0x80U);
    __DSB();
    __ISB();
    dObj->sst39Plib->write_t(DRV_SST39_START_ADDRESS+0x5555U, 0xAAU);
    __DSB();
    __ISB();
    dObj->sst39Plib->write_t(DRV_SST39_START_ADDRESS+0x2AAAU, 0x55U);
    __DSB();
    __ISB();
    dObj->sst39Plib->write_t(address, 0x30U);
    __DSB();
    __ISB();
    
    /* Wait Erase by polling bit DQ7 */
    do
    {
        readData = dObj->sst39Plib->read_t(address);
    }
    while ( (readData & 0x80U) == 0x00U );

    if (isCacheEnabled)
    {
        DCACHE_ENABLE();
    }

    /* Enable back ECC if it was disabled */
    if (isEccEnabled)
    {
        (void) dObj->sst39Plib->eccEnable((uint8_t)DRV_SST39_CHIP_SELECT);
    }

    dObj->transferStatus = DRV_SST39_TRANSFER_COMPLETED;
    return true;
}

bool DRV_SST39_ChipErase( const DRV_HANDLE handle )
{
    bool isCacheEnabled = (DATA_CACHE_IS_ENABLED() != 0U);
    uint8_t readData = 0;
    bool isEccEnabled = false;

    if(handle == DRV_HANDLE_INVALID)
    {
        return false;
    }

    dObj->transferStatus = DRV_SST39_TRANSFER_BUSY;

    /* Disable ECC for PROM commands write if enabled */
    isEccEnabled = dObj->sst39Plib->eccDisable((uint8_t)DRV_SST39_CHIP_SELECT);

    if (isCacheEnabled)
    {
        DCACHE_DISABLE();
    }

    /* Send Chip erase command */
    dObj->sst39Plib->write_t(DRV_SST39_START_ADDRESS+0x5555U, 0xAAU);
    __DSB();
    __ISB();
    dObj->sst39Plib->write_t(DRV_SST39_START_ADDRESS+0x2AAAU, 0x55U);
    __DSB();
    __ISB();
    dObj->sst39Plib->write_t(DRV_SST39_START_ADDRESS+0x5555U, 0x80U);
    __DSB();
    __ISB();
    dObj->sst39Plib->write_t(DRV_SST39_START_ADDRESS+0x5555U, 0xAAU);
    __DSB();
    __ISB();
    dObj->sst39Plib->write_t(DRV_SST39_START_ADDRESS+0x2AAAU, 0x55U);
    __DSB();
    __ISB();
    dObj->sst39Plib->write_t(DRV_SST39_START_ADDRESS+0x5555U, 0x10U);
    __DSB();
    __ISB();

    /* Wait Erase by polling bit DQ7 */
    do
    {
        readData = dObj->sst39Plib->read_t(DRV_SST39_START_ADDRESS);
    }
    while ( (readData & 0x80U) == 0x00U );

    if (isCacheEnabled)
    {
        DCACHE_ENABLE();
    }

    /* Enable back ECC if it was disabled */
    if (isEccEnabled)
    {
        (void) dObj->sst39Plib->eccEnable((uint8_t)DRV_SST39_CHIP_SELECT);
    }

    dObj->transferStatus = DRV_SST39_TRANSFER_COMPLETED;
    return true;
}

DRV_HANDLE DRV_SST39_Open( const SYS_MODULE_INDEX drvIndex, const DRV_IO_INTENT ioIntent )
{
    uint32_t status;
    if ((dObj->status != SYS_STATUS_READY) ||
        (dObj->nClients >= DRV_SST39_CLIENTS_NUMBER))
    {
        status = DRV_HANDLE_INVALID;
    }
    else
    {
        dObj->nClients++;

        dObj->ioIntent = ioIntent;
        
        status = ((DRV_HANDLE)drvIndex);
    }

    return status;
}

void DRV_SST39_Close( const DRV_HANDLE handle )
{
    if ( (handle != DRV_HANDLE_INVALID) &&
         (dObj->nClients > 0U))
    {
        dObj->nClients--;
    }
}

/* MISRA C-2012 Rule 11.3, 11.8 deviated below. Deviation record ID -  
   H3_MISRAC_2012_R_11_3_DR_1 & H3_MISRAC_2012_R_11_8_DR_1*/
SYS_MODULE_OBJ DRV_SST39_Initialize
(
    const SYS_MODULE_INDEX drvIndex,
    const SYS_MODULE_INIT *const init
)
{
    DRV_SST39_INIT *sst39Init = NULL;

    /* Check if the instance has already been initialized. */
    if (dObj->inUse == true)
    {
        return SYS_MODULE_OBJ_INVALID;
    }

    dObj->status    = SYS_STATUS_UNINITIALIZED;

    /* Indicate that this object is in use */
    dObj->inUse     = true;
    dObj->nClients  = 0U;

    /* Assign to the local pointer the init data passed */
    sst39Init       = (DRV_SST39_INIT *)init;

    /* Initialize the attached memory device functions */
    dObj->sst39Plib = sst39Init->sst39Plib;
    dObj->transferStatus = DRV_SST39_TRANSFER_COMPLETED;

    dObj->status    = SYS_STATUS_READY;

    /* Return the driver index */
    return ( (SYS_MODULE_OBJ)drvIndex );
}

/* MISRAC 2012 deviation block end */

SYS_STATUS DRV_SST39_Status( const SYS_MODULE_INDEX drvIndex )
{
    /* Return the driver status */
    return (gDrvSST39Obj.status);
}

bool DRV_SST39_GeometryGet(const DRV_HANDLE handle, DRV_SST39_GEOMETRY *geometry)
{
    uint32_t flash_size = 0;

    if((handle == DRV_HANDLE_INVALID) || (handle > 0U))
    {
        return false;
    }

    flash_size = DRV_SST39_MEMORY_SIZE;

    /* Read block size and number of blocks */
    geometry->read_blockSize = 1;
    geometry->read_numBlocks = flash_size;

    /* Write block size and number of blocks */
    geometry->write_blockSize = DRV_SST39_PAGE_SIZE;
    geometry->write_numBlocks = (flash_size / DRV_SST39_PAGE_SIZE);

    /* Erase block size and number of blocks */
    geometry->erase_blockSize = DRV_SST39_ERASE_BUFFER_SIZE;
    geometry->erase_numBlocks = (flash_size / DRV_SST39_ERASE_BUFFER_SIZE);

    geometry->numReadRegions = 1;
    geometry->numWriteRegions = 1;
    geometry->numEraseRegions = 1;

    geometry->blockStartAddress = DRV_SST39_START_ADDRESS;

    return true;
}

DRV_SST39_TRANSFER_STATUS DRV_SST39_TransferStatusGet(const DRV_HANDLE handle)
{
    if (handle == DRV_HANDLE_INVALID)
    {
        return DRV_SST39_TRANSFER_ERROR_UNKNOWN;
    }

    return dObj->transferStatus;
}
