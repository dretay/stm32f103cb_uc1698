#pragma once

#include <stdbool.h>

#include "SerialCommandAdapter.h"

#if defined(STM32F103xB)
#include "stm32f1xx_hal.h"
#else
#error Unsupported board!
#endif

struct i2cserialcommandadapter {
	SerialCommandAdapter*(*configure)(I2C_HandleTypeDef* i2c_handle_in);
};

extern const struct i2cserialcommandadapter I2CSerialCommandAdapter;
