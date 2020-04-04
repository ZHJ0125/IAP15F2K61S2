/**********************************************************
*  文件名：tube.h
*  修改日期：2020-04-04
*  姓名：ZhangHJ
*  说明：整合03_Digital_Tube_Dynamic_Display工程的头文件
***********************************************************/

#ifndef __tube__
#define __tube__

#include <reg52.h>
#include <intrins.h>

#define uchar unsigned char
#define uint unsigned int

#define OFF_SEGMENT 10
#define OFF_SELECTION 0

extern uchar code tab[];
extern uchar code segment[];

sbit HC138_A = P2^5;
sbit HC138_B = P2^6;
sbit HC138_C = P2^7;

void Delay600us();
void System_Init();
void tube_segment(uint number);
void tube_selection(uchar selection);
void tube_show(uint number, uchar segment);

#endif