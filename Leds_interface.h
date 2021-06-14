/*
 * Leds_interface.h
 *
 *  Created on: Sep 14, 2019
 *      Author: William
 */

#ifndef LEDS_INTERFACE_H_
#define LEDS_INTERFACE_H_

void Leds_init(void);
void Led_Red_ON(void);
void Led_Red_OFF(void);
void Led_Red_Toggle(void);
#define Red_Led_PORT PORT_A
#define Red_Led_Pin PIN1
void Leds_Init_Interupt(void);


#endif /* LEDS_INTERFACE_H_ */
