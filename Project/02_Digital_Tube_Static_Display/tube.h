#ifndef __tube__
#define __tube__

#include <reg52.h>
#include <intrins.h>

#define uchar unsigned char
#define uint unsigned int

sbit HC138_A = P2^5;
sbit HC138_B = P2^6;
sbit HC138_C = P2^7;

void Delay1000ms(void);
void System_Init(void);
void tube_selection(void);
void tube_segment(void);

#endif