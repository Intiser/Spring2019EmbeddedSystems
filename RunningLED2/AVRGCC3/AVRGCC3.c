/*
 * AVRGCC3.c
 *
 * Created: 2/15/2019 12:51:51 AM
 *  Author: Intiser
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB = 0xFF;
	PORTB = 0x00;
	
    while(1)
    {
		
		for(int i=0;i<8;i++){
			PORTB |= 1<<i ;
			PORTB |= 128 >> i;
			_delay_ms(500);
			PORTB = 0x00;
		}		
		
         
    }
}