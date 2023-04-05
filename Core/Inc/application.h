/*
 * application.h
 *
 *  Created on: Feb 20, 2023
 *      Author: dretay
 */

#ifndef INC_APPLICATION_H_
#define INC_APPLICATION_H_

#include "types.h"
#include "gfx.h"
#include "main.h"
#if defined(STM32F103xB)
#include "stm32f1xx_hal.h"
#else
#error Unsupported board!
#endif
#include "SerialCommand.h"
#include "I2CSerialCommandAdapter.h"
#include "Flash.h"
#include "ClockView.h"

struct application {
	void(*init)(void);
	void(*loop)(void);
};

extern const struct application Application;

#endif /* INC_APPLICATION_H_ */
