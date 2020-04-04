/**********************************************************
*  �ļ�����tube.h
*  �޸����ڣ�2020-04-04
*  ������ZhangHJ
*  ˵��������03_Digital_Tube_Dynamic_Display���̵�ͷ�ļ�
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