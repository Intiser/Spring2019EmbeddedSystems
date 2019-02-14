/*
 * AVRGCC2.c
 *
 * Created: 2/14/2019 12:33:59 PM
 *  Author: Intiser
 */ 

#include <avr/io.h>


int main()
{
	DDRB = 0x20;
	PORTB = 0x20;
	DDRD = 0x00;
	while(1){
		if(  ( PIND & (1<<PD2) ) ){
			PORTB = 0x20;
		}
		else{
			PORTB = 0x00;
		}
	}
}