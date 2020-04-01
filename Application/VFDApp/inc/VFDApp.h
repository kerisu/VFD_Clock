#ifndef __VFDAPP_H
#define __VFDAPP_H

typedef enum
{
	NTIME = 0,		//����ʱ����ʾ
	NDATE = 1,		//����������ʾ
	TEMP  = 2,			//�¶���ʾ
	CLOSE = 3,		//�ر�VFD��ʾ ��Ĭ״̬
	
}DisModTypedef;//��ʾģʽ״̬����

typedef enum
{
	NORMAL 				= 0,		//������ʾ
	MAIN	 				= 1,		//���˵� 				����
		TIMEDATE		= 2,		//ʱ�������� 		����
			TIME	 		= 3,		//ʱ���޸� 			����
			DATE	 		= 4,		//�����޸� 			����
			DAY 		 	= 5,		//�����޸� 			����
		WLAN				= 6,		//���߾��������� ����
			SSID			= 7,		//SSID����			����
			PSWD			=	8,		//��������				����
}CFGTypedef;



void VFDApp_Setup(void);
void VFDApp_Loop(void);
void VFDApp_Interrupt(void);

#endif /*__VFDAPP_H*/
