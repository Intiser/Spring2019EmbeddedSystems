/*
 * AVRGCC1.c
 *
 * Created: 2/7/2019 10:44:02 PM
 *  Author: Intiser
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main()
{
	DDRB = 0x10;
	PORTB = 0x10;
	uint8_t i = 0;
	while(1){
		PORTB = 0x10;
		_delay_ms(1000);
		PORTB = 0x00;
		_delay_ms(1000);
	}
}





