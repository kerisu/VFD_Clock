//////////////////////////////////////////////////////////////////////////////////	 
//
//
//�洢ͼƬ���ݣ�ͼƬ��СΪ64*32����
//
/////////////////////////////////////////////////////////////////////////////////

#ifndef __BMP_H
#define __BMP_H

const unsigned char BMP_Start[] = 
{
/*--  ������һ��ͼ��E:\WorkSpace\Microcontroller\STM32F103C8T6\Nixie Tube\Program Project\image\start.bmp  --*/
/*--  ����x�߶�=128x64  --*/
0xFF,0xFF,0x03,0xF7,0xCF,0x3F,0xFF,0xFF,0xFF,0x03,0xFF,0xFF,0x1B,0xFF,0xDF,0xBF,
0x7F,0xFF,0x7F,0xBF,0xDF,0xFF,0x1B,0xFF,0xFF,0x3F,0xDF,0xDF,0xDF,0xDF,0x3F,0xFF,
0xFF,0x1F,0xE7,0xF7,0xFB,0xFB,0xFB,0xFB,0xF7,0xEF,0xFF,0xFF,0x03,0xFF,0xFF,0x3F,
0xDF,0xDF,0xDF,0xDF,0x3F,0xFF,0xFF,0x3F,0xDF,0xDF,0xDF,0xDF,0xBF,0xFF,0xFF,0x03,
0xFF,0xFF,0x7F,0xBF,0xDF,0xFF,0xFF,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0xBF,0xCF,0xF3,
0xF9,0xC7,0x3F,0xFF,0xFF,0x7F,0x9F,0x7F,0xFF,0x7F,0x9F,0x7F,0x7F,0x7F,0x7F,0x7F,
0x7F,0xFF,0xFF,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0xFF,0x7F,0xBF,0xBF,0xBF,0x7F,
0xFF,0xFF,0xFF,0xFF,0xBF,0xBF,0xBF,0xBF,0x3F,0xFF,0x7F,0xBF,0xBF,0xBF,0x7F,0xFF,
0x7F,0x7F,0x60,0x7F,0x7F,0x7F,0x7E,0x79,0x77,0x60,0x7F,0x7F,0x60,0x7F,0x6F,0x77,
0x7B,0x7C,0x7B,0x77,0x6F,0x7F,0x60,0x7F,0x7F,0x70,0x6E,0x6E,0x6E,0x6E,0x76,0x7F,
0x7F,0x7C,0x73,0x77,0x6F,0x6F,0x6F,0x6F,0x77,0x7B,0x7F,0x7F,0x60,0x7F,0x7F,0x70,
0x6F,0x6F,0x6F,0x6F,0x70,0x7F,0x7F,0x70,0x6F,0x6F,0x6F,0x6F,0x77,0x7F,0x7F,0x60,
0x7D,0x7E,0x7D,0x73,0x6F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
0x7F,0x7F,0x7C,0x63,0x7D,0x7E,0x7F,0x7E,0x7C,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,
0x7F,0x7F,0x7F,0x7F,0x7C,0x73,0x4F,0x73,0x7C,0x7F,0x7F,0x5F,0x4F,0x57,0x5B,0x5C,
0x7F,0x7F,0x5F,0x7F,0x7F,0x47,0x79,0x7E,0x7F,0x7F,0x60,0x5D,0x5D,0x5D,0x63,0x7F,
0x00,0x3F,0x01,0x01,0x01,0xF1,0x51,0x50,0x50,0x50,0xA0,0x00,0x20,0x40,0x80,0x40,
0x20,0x00,0x00,0x20,0x00,0x00,0x00,0x10,0x10,0x90,0x50,0x30,0x10,0x00,0xE0,0x80,
0x80,0x80,0xE0,0x00,0x00,0x80,0x40,0x20,0x20,0x40,0x80,0x00,0x00,0xE0,0x40,0x80,
0x00,0xE0,0x00,0x00,0x00,0xE0,0x20,0x20,0xA0,0xA0,0x00,0x00,0xE0,0x20,0x20,0x20,
0x20,0xC0,0x00,0x00,0xE0,0x20,0x20,0x20,0x20,0xE0,0x00,0x00,0xE0,0x40,0x80,0x00,
0xE0,0x00,0x00,0xE0,0x20,0x20,0xA0,0xA0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x08,0x00,0x00,0x00,0x40,0x40,0x40,0x00,0x00,0x04,0x08,0xF0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x3F,0x00,
0x00,0x00,0x00,0x00,0x00,0x03,0x02,0x02,0x82,0x82,0x81,0x80,0x80,0x80,0x83,0x80,
0x80,0x80,0x00,0x02,0x00,0x00,0x00,0x02,0x03,0x02,0x02,0x82,0x82,0x80,0x83,0x80,
0x80,0x80,0x83,0x80,0x80,0x03,0x01,0x01,0x01,0x01,0x03,0x00,0x00,0x03,0x40,0x40,
0x41,0x43,0x40,0x40,0x40,0x43,0x42,0x42,0x42,0x43,0x40,0x40,0x43,0x42,0x42,0x42,
0x42,0x41,0x40,0x40,0x43,0x42,0x42,0x42,0x42,0x43,0x40,0x40,0x43,0x40,0x40,0x41,
0x43,0x40,0x40,0x43,0x42,0x42,0x42,0x43,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,
0x42,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x44,0x42,0x41,0x40,0x40,0x40,0x40,
0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xFC,0x02,0x01,0x01,0x20,0x20,0x30,0xB0,0xB0,0xB0,0xB0,0x30,
0x20,0x20,0x01,0x01,0x02,0xFC,0x00,0xFC,0x02,0x01,0x01,0x20,0x20,0x30,0xB0,0xB0,
0xB0,0xB0,0x30,0x20,0x20,0x01,0x01,0x02,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,
0x20,0x10,0x10,0x10,0x20,0xC0,0x00,0x00,0xE0,0x10,0x10,0x10,0x10,0x60,0x00,0x00,
0x00,0x40,0x20,0xF0,0x00,0x00,0xE0,0x10,0x10,0x10,0xE0,0x00,0x00,0x00,0x00,0x00,
0x40,0x20,0xF0,0x00,0x00,0x20,0x10,0x10,0x10,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x40,0x20,0xF0,0x00,0x00,0x00,0x00,0xE0,0x10,0x10,0x10,0xE0,0x00,0x00,0xE0,
0x10,0x10,0x10,0xE0,0x00,0x00,0xE0,0x10,0x10,0x10,0xE0,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x8F,0x00,0x20,0x20,0x20,0x20,0x00,
0x8F,0x00,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x00,0x8F,0x00,0x20,0x20,
0x20,0x20,0x00,0x8F,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x07,
0x08,0x10,0x14,0x14,0x08,0x17,0x00,0x00,0x0C,0x11,0x11,0x11,0x11,0x0E,0x00,0x00,
0x00,0x00,0x00,0x1F,0x00,0x00,0x0E,0x11,0x11,0x11,0x0E,0x00,0x02,0x02,0x02,0x00,
0x00,0x00,0x1F,0x00,0x00,0x10,0x18,0x14,0x13,0x10,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x1F,0x00,0x00,0x00,0x00,0x09,0x12,0x12,0x11,0x0F,0x00,0x00,0x0E,
0x11,0x11,0x11,0x0E,0x00,0x00,0x0F,0x10,0x10,0x10,0x0F,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x80,0x8F,0x80,0x90,0x90,0x90,0x90,0x80,
0x8F,0x80,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x80,0x8F,0x80,0x90,0x90,
0x90,0x90,0x80,0x8F,0x80,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xE4,0x24,
0x24,0xC4,0x04,0x04,0x84,0x84,0x04,0x04,0x84,0x04,0x84,0x04,0x84,0x04,0x04,0x84,
0x84,0x04,0x04,0x04,0x84,0x84,0x04,0x84,0x84,0x04,0x04,0x04,0x84,0x84,0xE4,0x04,
0x04,0x04,0x04,0xE4,0x84,0x84,0x04,0x04,0x84,0x04,0x04,0x04,0x84,0x04,0x04,0x84,
0x04,0x04,0xC4,0x24,0x24,0x44,0x04,0x24,0x24,0xE4,0x24,0x24,0xE4,0xC4,0x04,0x04,
0x04,0xC4,0xE4,0x44,0x24,0x24,0xC4,0x04,0x44,0x24,0x24,0xC4,0x00,0x00,0x00,0x00,
0x00,0x7E,0x40,0x40,0x41,0x46,0x48,0x08,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x08,0x08,0x06,0x01,0x00,0x01,0x06,0x08,0x08,0x00,0x00,0x01,0x01,0x01,
0x01,0x01,0x01,0x00,0x00,0x08,0x08,0x06,0x01,0x00,0x00,0x00,0x00,0x00,0x0F,0x01,
0x01,0x00,0x00,0x07,0x08,0x08,0x07,0x00,0x07,0x08,0x07,0x08,0x07,0x00,0x07,0x0A,
0x0A,0x0B,0x00,0x0F,0x00,0x00,0x07,0x0A,0x0A,0x0B,0x00,0x07,0x08,0x08,0x0F,0x00,
0x00,0x00,0x00,0x0F,0x08,0x08,0x07,0x00,0x01,0x26,0x18,0x06,0x01,0x00,0x00,0x04,
0x00,0x00,0x04,0x09,0x09,0x06,0x00,0x00,0x00,0x0F,0x00,0x00,0x0F,0x00,0x07,0x08,
0x07,0x00,0x0F,0x04,0x08,0x09,0x06,0x00,0x08,0x4C,0x4B,0x48,0x40,0x40,0x7E,0x00
};

const unsigned char BMP_For[] = 
{
/*--  ������һ��ͼ��E:\WorkSpace\Microcontroller\STM32F103C8T6\Nixie Tube\Program Project\image\for.bmp  --*/
/*--  ����x�߶�=128x64  --*/
0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,
0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,
0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,
0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,
0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,
0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,
0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,
0x27,0x4F,0x9E,0x3C,0x78,0xF0,0xE0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,
0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x38,0xC0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x80,0x40,0x20,0x10,0x00,0x00,0x80,0x40,0x20,0x10,0x00,0x00,0x00,
0x80,0x40,0x20,0x10,0x00,0x00,0x00,0x00,0x20,0x20,0x20,0x20,0x20,0x20,0x00,0x00,
0x00,0x10,0x20,0x40,0x80,0x00,0x00,0x10,0x20,0x40,0x80,0x00,0x00,0x10,0x20,0x40,
0x80,0x00,0x00,0x01,0x02,0x04,0x09,0x13,0x27,0x4F,0x9E,0x3C,0x78,0xF0,0xE0,0xC0,
0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x38,0x07,0x01,0x00,0x01,
0x0F,0x70,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,
0x38,0xC0,0x00,0x00,0x00,0x00,0x00,0xC0,0x38,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x02,0x05,0x08,0x10,0x20,0x40,0x02,0x05,0x08,0x10,0x20,0x40,0x00,0x02,0x05,
0x08,0x10,0x20,0x40,0x00,0x00,0x02,0x02,0x22,0x22,0x22,0x22,0x22,0x22,0x02,0x02,
0x00,0x40,0x20,0x10,0x08,0x05,0x02,0x40,0x20,0x10,0x08,0x05,0x02,0x40,0x20,0x10,
0x08,0x05,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x02,0x04,0x09,0x13,
0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,
0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x60,0x38,0x07,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x07,0x38,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x38,0x07,0x01,
0x00,0x01,0x1F,0xE0,0x00,0xE0,0x1F,0x01,0x00,0x01,0x07,0x38,0x60,0x40,0x40,0x40,
0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x00,0x00,0x00,0x80,
0x00,0x00,0x80,0x80,0x80,0x80,0x80,0xC0,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,
0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x1E,0xE0,0x00,0x00,0x00,0xE0,0x1E,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x0E,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,
0xC3,0x30,0x00,0xFE,0x82,0xBA,0xAA,0xAA,0xAA,0xBA,0x82,0xFE,0x00,0x00,0x00,0x00,
0x00,0xFF,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0xFF,0x00,0x00,0x00,0x00,0x00,
0xFF,0x20,0x24,0xE4,0x24,0x24,0xE4,0x24,0x24,0x24,0xA4,0x20,0x00,0x00,0x00,0x00,
0xC8,0x90,0x20,0x40,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x70,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x1F,0x00,0x08,0x28,0x1A,0x0A,0x2A,0x3A,0x0A,0x0A,0x1A,0x28,0x08,0x00,0x20,0x10,
0x0C,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x20,0x1F,0x00,0x00,0x00,0x10,0x0C,
0x03,0x00,0x00,0x3F,0x10,0x08,0x00,0x01,0x02,0x05,0x08,0x10,0x10,0x00,0x00,0x00,
0x07,0x0F,0x1F,0x3E,0x7C,0xF9,0xF2,0xE4,0xC8,0x90,0x20,0x40,0x80,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xFE,0x12,0x12,0x12,0x02,0x02,0x00,0xFC,0x84,0x84,0x84,0x84,
0x84,0xFC,0x00,0x00,0xFC,0x14,0x14,0x34,0x54,0x9C,0x00,0x00,0x00,0x84,0x00,0x00,
0x00,0x00,0xFE,0x80,0x80,0x80,0x80,0x80,0x00,0xFC,0x00,0x00,0x00,0xFC,0x08,0x10,
0x20,0x40,0xFC,0x00,0x00,0x04,0x08,0x10,0xE0,0x10,0x08,0x04,0x00,0xFC,0x80,0x80,
0x80,0x80,0xFC,0x00,0x00,0x00,0xFC,0x94,0x94,0x94,0x84,0x84,0x00,0x00,0xFC,0x84,
0x84,0x84,0x84,0xCC,0x00,0x00,0xFC,0x10,0x10,0x10,0x10,0xFC,0x00,0x00,0x00,0xFC,
0x94,0x94,0x94,0x84,0x84,0x00,0x00,0xFC,0x08,0x10,0x20,0x40,0xFC,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x0F,0x1F,0x3E,0x7C,0xF9,0xF2,0xE4,
0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,
0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,
0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,
0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,
0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,
0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,
0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8
};


#endif

