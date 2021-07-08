/*
 * main.c
 *
 *  Created on: Jul 8, 2021
 *      Author: dell
 */


#include <avr/io.h>
#include <util/delay.h>
//#include "7_Segment.h"
#include "../Controller/ATMEGA32/Registers.h"
#include "../MCAL/GPIO/GPIO.h"
#include "../Service/STD_MACROS.h"
#include "../Service/STD_TYPES.h"

typedef enum{
 Disp_0,
 Disp_1,
 Disp_2,
 Disp_3,
 Disp_4,
 Disp_5,
 Disp_6,
 Disp_7,
 Disp_8,
 Disp_9
}Disp;

#define Display_0		0b00111111
#define Display_1		0b01111001
#define Display_2		0b00100100
#define Display_3		0b00110000
#define Display_4		0b00011001
#define Display_5		0b00010010
#define Display_6		0b00000010
#define Display_7		0b01111000
#define Display_8		0b00000000
#define Display_9		0b00010000

int main(){

	DDRA = 0XFF;

	while(1){

		for (int i = 0; i < 10; i++){

			switch(i){

			case Disp_0:
				PORTA = Display_0;
				break;

			case Disp_1:
				PORTA = Display_1;
				break;

			case Disp_2:
				PORTA = Display_2;
				break;

			case Disp_3:
				PORTA = Display_3;
				break;

			case Disp_4:
				PORTA = Display_4;
				break;

			case Disp_5:
				PORTA = Display_5;
				break;

			case Disp_6:
				PORTA = Display_6;
				break;

			case Disp_7:
				PORTA = Display_7;
				break;

			case Disp_8:
				PORTA = Display_8;
				break;

			case Disp_9:
				PORTA = Display_9;
				break;
			default:
				return E_NOK;
			}
		}
	}
return E_OK;
}
