#ifndef __VFDDRIVER_H
#define __VFDDRIVER_H

#include "stm32f1xx_hal.h"


typedef enum
{
	//GATE 0							SEG
	PROGRAM 	= 0,		// 1
	KARAOKE 	= 1,		// 2
	PBC 			= 2,		// 6
	CCRS 			= 3,		// 7
	PLAY 			= 4,		// 9
	PAUSE 		= 5,		// 10
	RANDOM 		= 6,		// 15
	ONE 			= 7,		// 12
	ALL 			= 8,		// 0
	EDIT 			= 9,		// 5
	A 				= 10,		// 3
	B 				= 11,		// 4
	VIDEOCD 	= 12,		// 11
	
	//GATE 1
	REPEAT 		= 13,		// 15
	SPACE 		= 14,		// 0
	PC 				= 15,		// 12
	SEARCH 		= 16,		// 1
	L 				= 17,		// 13
	R 				= 18,		// 2
	
	//GATE 2
	DISCNO 		= 19,		// 15
	
	//GATE 3
	ENTRY 		= 20,		// 15
	TRACK 		= 21,		// 0
	
	//GATE 4
	SCENE 		= 22,		// 15
	NO 				= 23,		// 0
	
	//GATE 6
	SINGLE 		= 24,		// 15
	
	//GATE 7
	TOTAL 		= 25,		// 15
	
}VFDWordTypedef;



//VFD ������ʼ��
void VFDDriverInit(void);
//VFD��ʾˢ��
void VFDDsaplayUpdate(void);
//VFD����ܿ���
void VFDNumSegment(uint8_t * num);
//VFD ��ʾ��ȫ��
void VFDAllSegment(uint8_t cmd);
//������ led�����
void LEDGroupCtrl(uint8_t num,uint8_t cmd);
//VFD�·������� ����  1-20
void VFDDownNumCtrl(uint8_t num,uint8_t cmd);
//vfd �Ҳ���ʾ���ֺ����ֱ߿�Ŀ��� seg 0 1 2 num ���� ��
void RightNumCtrl(uint8_t num,uint8_t seg,uint8_t cmd);
//vfd ���ּ�����ſ���
void NumSymbolCtrl(uint8_t num,uint8_t cmd);
//vfd �ؼ��ָ�����ʾ����
void WordDisCtrl(VFDWordTypedef num,uint8_t cmd);

void Test(void) ;


#endif /*__VFDDRIVER_H*/


