/*
 * Timer0 PWM Application.c
 *
 * Created: 2019-03-05 6:41:11 PM
 * Author : Dharak Verma
 */ 

#include <avr/io.h>

//Duty_Cycle = [ON_time / (ON_time + OFF_time) ] * 100 -> formula for calculating your duty cycle based on a square wave 

//Output_Voltage = Duty_Cycle * Input_Voltage -> calculate the output voltage you can measure using a multimeter to confirm a working PWM

//for prescaler: Timer/Counter0 does not have a 32 or 128 devision in its prescaler. Timer1 & 2 can have a specific frequency for PWM

int main(void) //this program is used to create a Timer0 (8-bit) PWM: 
{
	
	 DDRD = (1 << DDD3); //update: we got rid of |= and replaced with = and the LED got brighter
	 // PD3 (pin 2) is now an output

	 OCR0A = 200;  //cannot use OCR0B, refer to this link: https://sites.google.com/site/qeewiki/books/avr-guide/pwm-on-the-atmega328
	 // set PWM for 50% duty cycle = 128 (the logic analyzer cannot detect a high duty cycle such as =255)

	 TCCR0A |= (1 << COM0A1);
	 // set none-inverting mode

	 TCCR0A |= (1 << WGM01) | (1 << WGM00);
	 // set fast PWM Mode

	 TCCR0B |= (1 << CS01); //for prescaler: Timer/Counter0 does not have a 32 or 128 devision in its prescaler. Timer1 & 2 can have a specific frequency for PWM
	 // set prescaler to 8 and start PWM


	
	
    while (1) 
    {
    }
}

