/*
 * main.c
 *
 *  Created on: Oct 5, 2019
 *      Author: William
 */


#include "STD_TYPES.h"
#include "util/delay.h"
#include "DIO_interface.h"
#include "SPI_Interface.h"
#include "Leds_interface.h"
 int main (void)
 /*{
 SPI_Init(SPI_Master_Mode);
 DIO_SetPinValue(SPI_PORT,SPI_SS_PIN,LOW);
 while (1)
 {
SPI_Transieve(5);
_delay_ms(1000);
 }

 return 0 ;}*/
 {    u8 value =0 ;
      u8 flag =0 ;
     DIO_voidSetPinDirection(PORT_C,PIN0,DIO_DIRECTION_OUTPUT);
	 DIO_SetPinValue(PORT_C,PIN0,HIGH);
     SPI_Init(SPI_Slave_Mode);
     DIO_SetPinValue(SPI_PORT,SPI_SS_PIN,HIGH);
	 while(1)
     {
		 value = SPI_Transieve(0); // Dummy data

		 if (value == 5)
		 {
			 DIO_SetPinValue(PORT_C,PIN0,LOW);

			 value=0;
		 }
     }

 }
