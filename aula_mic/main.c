/*
 * main.c
 *
 * Created: 2/4/2025 9:16:50 AM
 *  Author: Professor
 */ 

#include <xc.h>
#include "display.h"

int main(void)
{
    TCCR0A = 0x00;
    showMessage("teste");
    while(1)
    {
        //TODO:: Please write your application code 
    }
}