/*
 * SPI_Prog.c
 *
 *  Created on: Oct 5, 2019
 *      Author: William
 */
#include "STD_TYPES.h"
#include "BIT_CALC.h"
#include "DIO_interface.h"
#include "SPI_Reg.h"
#include "SPI_Interface.h"


void SPI_Init(u8 SPI_Mode)
{
	SET_BIT(SPCR,6);
	CLR_BIT(SPCR,5);

switch (SPI_Mode)
{
case SPI_Master_Mode :
	SET_BIT(SPCR,4);//Master
	CLR_BIT(SPCR,3);
	CLR_BIT(SPCR,2);
    CLR_BIT(SPCR,1);
    SET_BIT(SPCR,0);
    DIO_voidSetPinDirection(SPI_PORT,SPI_MOSI_PIN,DIO_DIRECTION_OUTPUT);
    DIO_voidSetPinDirection(SPI_PORT,SPI_SCK_PIN,DIO_DIRECTION_OUTPUT);
    DIO_voidSetPinDirection(SPI_PORT,SPI_SS_PIN,DIO_DIRECTION_OUTPUT);
     break;
case SPI_Slave_Mode :
	CLR_BIT(SPCR,4);//Slave
	DIO_voidSetPinDirection(SPI_PORT,SPI_MISO_PIN,DIO_DIRECTION_INPUT);
}
}
u8 SPI_Transieve(u8 data)
{  SPDR= data ;
   while (!GET_BIT(SPSR,7));
   return SPDR ;
}

