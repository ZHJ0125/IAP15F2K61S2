/********************************************************
*
*	文件名： button.c
*	修改日期： 2020年04月04日
*	修改者： ZhangHJ
*	说明：整合04_Matrix_Buttons矩阵按键工程的头文件
*
*********************************************************/

#ifndef __button__
#define __button__

#include <reg52.h>
#include <intrins.h>

#define uchar unsigned char
#define uint unsigned int

// 0~F
extern uchar code segment[];

sbit HC138_A = P2^5;
sbit HC138_B = P2^6;
sbit HC138_C = P2^7;

sfr P4 = 0xC0;
sbit col_1 = P4^4;
sbit col_2 = P4^2;
sbit col_3 = P3^5;
sbit col_4 = P3^4;
sbit row_1 = P3^0;
sbit row_2 = P3^1;
sbit row_3 = P3^2;
sbit row_4 = P3^3;

extern uchar Key_Number;

void Delay2ms();
void System_Init();
void DisplayNum(uchar number);
void Matrix_Key();

#endif