#pragma once

//HAL includes
#if defined(STM32F103xB)
#include "stm32f1xx_hal.h"
#else
#error Unsupported board!
#endif

//STL includes
#include <stdbool.h>

//project includes
#include "flashpages.h"

#define FLASH_USER_START_ADDR   ADDR_FLASH_PAGE_63
#define FLASH_USER_END_ADDR     FLASH_USER_START_ADDR + FLASH_PAGE_SIZE   /* End @ of user Flash area */
typedef enum {
	type_float,
	type_int,
	type_bool,
	type_double,
	type_uint,
} VALUE_TYPE;
typedef struct {
	unsigned int idx;
	union {
		float float_val;
		unsigned int uint_val;
		int int_val;
		double double_val;
		unsigned int uint_array[2];
	};
	VALUE_TYPE val_type;

} FLASH_RECORD;

struct flash {
	HAL_StatusTypeDef(*configure)(void);
	HAL_StatusTypeDef(*erase)(void);
	HAL_StatusTypeDef(*set)(FLASH_RECORD record);
	HAL_StatusTypeDef(*set_double)(unsigned int idx, double value);
	HAL_StatusTypeDef(*set_float)(unsigned int idx, float value);
	HAL_StatusTypeDef(*set_int)(unsigned int idx, int value);
	FLASH_RECORD(*get)(unsigned int idx, VALUE_TYPE val_type);
};


extern const struct flash Flash;
