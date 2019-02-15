/*
 * AVRGCC4.c
 *
 * Created: 2/15/2019 12:00:48 PM
 *  Author: Intiser
 */ 

#include <avr/io.h>
#include <util/delay.h>



const uint8_t segment_look_up[] ={
		0b00111111,//0
		0b00000110,//1
		0b01011011,//2
		0b01001111,//3
		0b01100110,//4
		0b01101101,//5
		0b01111101,//6
		0b00000111,//7
		0b01111111,//8
		0b01101111,//9
		0b01110111,//A
		0b01111100,//b
		0b00111001,//C
		0b01011110,//d
		0b01111001,//E
		0b01110001 //F
};

int main(void)
{	
	DDRB = 0xFF;
    while(1)
    {
        //TODO:: Please write your application code 
		for(int i=0;i<16;i++)
		{
			PORTB= segment_look_up[i];
			_delay_ms(500);
		}
		
    }
}