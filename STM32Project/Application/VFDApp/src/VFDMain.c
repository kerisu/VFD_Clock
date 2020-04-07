/**
  ******************************************************************************
  * @file    VFDMain.h.c
  * @author  �Ŷ�
  * @version V1.0.0
  * @date    2019-9-4
  * @brief   ����������վ����1.0��������   ǧ���@ SenbonZakura Ft. CTS [German Cover]
  ******************************************************************************
  */
#include "main.h"
#include "stm32f1xx_hal.h"
#include "tim.h"
#include "usart.h"

#include "VFDApp.h"

//hardware
#include "oled.h"
#include "DS3231.h"
#include "VFDDriver.h"
#include "esp8266.h"


/*setup loop and interrupt function*/
void VFDMainSetup(void)
{
	//MCU config
	__HAL_AFIO_REMAP_SWJ_NONJTRST();

//	__HAL_UART_ENABLE_IT(&huart2,UART_IT_RXNE);
//	__HAL_UART_DISABLE_IT(&huart2,UART_IT_IDLE);
	
	
	//hardware init
	OLED_Init();
	OLED_Clear();
	
	VFDDriverInit();
	
	//esp8266_init();
	
	VFDApp_Setup();
}

void VFDMainLoop(void)
{
	//Test();
	VFDApp_Loop();
}

void VFDMainInterrupt(void)
{
	VFDApp_Interrupt();
}

