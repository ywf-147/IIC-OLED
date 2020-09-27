#ifndef __OLED_I2C_H
#define	__OLED_I2C_H

#include "stm32f10x.h"
#include "SysTick.h"

#define OLED_ADDRESS	0x78 //通过调整0R电阻,屏可以0x78和0x7A两个地址 -- 默认0x78

void OLED_WriteByte(u8 Addr,u8 Data);
void WriteCmd(u8 I2C_Command);
void WriteDat(u8 I2C_Data);
void OLED_Init(void);
void OLED_SetPos(u8 x, u8 y);
void OLED_Fill(u8 fill_Data);
void OLED_CLS(void);
void OLED_ON(void);
void OLED_OFF(void);
void OLED_ShowStr(u8 x, u8 y, u8 ch[], u8 TextSize);
void OLED_ShowCN(u8 x, u8 y, u8 N);
void OLED_DrawBMP(u8 x0,u8 y0,u8 x1,u8 y1,u8 *BMP);
void OLED_Show_24X54(u8 x,u8 y,u8*dat);

void OLED_ShowCNS(u8 x, u8 y, u8 *N);
void OLED_ShowST16_1(u8 n);
void OLED_ShowST16_2(u8 n);


void OLED_ShowString16(u8 x, u8 y, u8 str[]);

#endif
