/*
 * traffic.h
 *
 *  Created on: 6 Dec 2022
 *      Author: admin
 */

#ifndef INC_TRAFFIC_H_
#define INC_TRAFFIC_H_

#define trafficPin	GPIOA
#define redPin 		GPIO_PIN_5
#define yellowPin 	GPIO_PIN_6
#define greenPin 	GPIO_PIN_7

void redlight();
void yellowlight();
void greenlight();

#endif /* INC_TRAFFIC_H_ */
