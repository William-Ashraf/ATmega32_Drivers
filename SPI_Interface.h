/*
 * SPI_Interface.h
 *
 *  Created on: Oct 5, 2019
 *      Author: William
 */

#ifndef SPI_INTERFACE_H_
#define SPI_INTERFACE_H_

void SPI_Init(u8 SPI_Mode);
u8 SPI_Transieve(u8 data);
#define SPI_Master_Mode 1
#define SPI_Slave_Mode 2
#define SPI_MOSI_PIN PIN5
#define SPI_MISO_PIN PIN6
#define SPI_SCK_PIN  PIN7
#define SPI_SS_PIN   PIN4
#define SPI_PORT PORT_B
#endif /* SPI_INTERFACE_H_ */
