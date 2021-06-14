/*
 * Leds_Prog.c
 *
 *  Created on: Sep 14, 2019
 *      Author: William
 */
#include "STD_TYPES.h"
#include "DIO_interface.h"
#include "Leds_interface.h"

void Leds_init(void)
{
// Set Direction Output For the Leds
	DIO_voidSetPinDirection(Red_Led_PORT,Red_Led_Pin,DIO_DIRECTION_OUTPUT);

}
void Led_Red_ON(void)
{
DIO_SetPinValue(Red_Led_PORT,Red_Led_Pin,HIGH);
}

void Led_Red_OFF(void)
{
	DIO_SetPinValue(Red_Led_PORT,Red_Led_Pin,LOW);
}
void Led_Red_Toggle(void)
{
    static u8 flag =0 ;
    if (flag ==0 )
    {
    	DIO_SetPinValue(Red_Led_PORT,Red_Led_Pin,HIGH);
    	flag=1;
    }
    else if (flag==1)
    {
    	DIO_SetPinValue(Red_Led_PORT,Red_Led_Pin,LOW);
    	flag=0;
    }
}


/*void Leds_Init_Interupt(void)
{
	Timer0_Set_Callback(Led_Red_Toggle);
}*/
