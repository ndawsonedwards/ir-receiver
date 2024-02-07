#ifndef _ERRORS_HAL_EXTENSION_H_
#define _ERRORS_HAL_EXTENSION_H_

#include "include.h"
#include "stm32l0xx_hal.h"


/**
 * @brief Converts the HAL_StatusTypeDef status enumeration to Error enumeration 
 * 
 * @param status HAL_StatusTypeDef status to convert into Error type
 * @return Error
 */
static inline Error HalErrors_GetError(HAL_StatusTypeDef status)
{
    switch(status)
    {
        case HAL_OK:
            return ErrorNone;
        case HAL_ERROR:
            return ErrorUnknown;
        case HAL_BUSY:
            return ErrorResourceInUse;
        case HAL_TIMEOUT:
            return ErrorTimeout;                                
        default:
            return ErrorUnknown;;
    }

    return ErrorUnknown;
}

#endif