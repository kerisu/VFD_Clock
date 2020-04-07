/**
  ******************************************************************************
  * @file    keyBoard.c
  * @author  �Ŷ�
  * @version V1.0.0
  * @date    2019-7-7
  * @brief   ���ӫ���ʾ��������������
  ******************************************************************************
  */
#include "stm32f1xx_hal.h"
#include "keyBoard.h"



//��ð�����ֵ
uint8_t getKey_Ctrl(void)
{
	//������� 2�� 3�� 4�� 5�� 6cfm 
	//GPIO		B0	A7	A6 	A5	A4
	//����ֵ		3		4		1		2		5
	
	if((GPIOB->IDR & GPIO_PIN_0) == 0)//��
	{
		return 3;
	}
	if((GPIOA->IDR & GPIO_PIN_7) == 0)//��
	{
		return 4;
	}
	if((GPIOA->IDR & GPIO_PIN_6) == 0)//��
	{
		return 1;
	}
	if((GPIOA->IDR & GPIO_PIN_5) == 0)//��
	{
		return 2;
	}
	if((GPIOA->IDR & GPIO_PIN_4) == 0)//cfm
	{
		return 5;
	}
	return 0;
}