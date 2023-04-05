/*
 * application.c
 *
 *  Created on: Feb 20, 2023
 *      Author: dretay
 */


#include "application.h"

extern TIM_HandleTypeDef htim4;
extern I2C_HandleTypeDef hi2c1;
static const int FLASH_I2C_INDEX = 1;
static View *clock_view;


void pwm_setvalue(uint16_t value)
{
	__HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_3, value);
}
static bool erase_flash(char* rx_buffer, char* tx_buffer)
{
	if (Flash.erase() != HAL_OK)
	{
		Error_Handler();
	}
}
static bool set_time(char* rx_buffer, char* tx_buffer)
{
	RTC_TimeTypeDef sTime = { 0 };
	sTime.Hours = rx_buffer[1];
	sTime.Minutes = rx_buffer[2];
	sTime.Seconds = 0;	;
	if (HAL_RTC_SetTime(&hrtc, &sTime, RTC_FORMAT_BIN) != HAL_OK) {
	}


	return false;
}
static bool turn_off_led(char* rx_buffer, char* tx_buffer)
{
	HAL_GPIO_WritePin(ACT_LED_GPIO_Port, ACT_LED_Pin, GPIO_PIN_SET);

	return false;
}
static void init(void)
{
	gfxInit();
	gdispGSetOrientation(gdispGetDisplay(0), GDISP_ROTATE_270);
	if(HAL_TIM_PWM_Start(&htim4, TIM_CHANNEL_3) != HAL_OK){
	}
	pwm_setvalue(300);

	Flash.configure();
	int i2c_address = Flash.get(FLASH_I2C_INDEX, type_int).int_val;
	if (i2c_address > 0)
	{
		hi2c1.Init.OwnAddress1 = i2c_address;
		if (HAL_I2C_Init(&hi2c1) != HAL_OK)
		{
		}
	}

	SerialCommand.register_command(0x00, &set_time);
	SerialCommand.register_command(0x01, &turn_off_led);
	SerialCommand.configure(I2CSerialCommandAdapter.configure(&hi2c1), NULL);
	clock_view = ClockView.init();

}
static void loop(void)
{
	for(;;){

		clock_view->render();
		SerialCommand.next();
	}
}

const struct application Application = {
	.init = init,
	.loop = loop,
};
