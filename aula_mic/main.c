/*
 * main.c
 *
 * Created: 2/4/2025 9:16:50 AM
 *  Author: Professor
 */ 

#include <xc.h>

int main(void)
{
    TCCR0A = 0x00;
    while(1)
    {
        //TODO:: Please write your application code 
        PORTC ^= 0x01;
    }
}