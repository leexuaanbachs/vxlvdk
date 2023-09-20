/*
 * traffic.c
 *
 *  Created on: 6 Dec 2022
 *      Author: admin
 */

#include "traffic.h"
#include "main.h"

void redlight(){
	HAL_GPIO_WritePin(trafficPin, redPin, RESET);
	HAL_GPIO_WritePin(trafficPin, yellowPin, SET);
	HAL_GPIO_WritePin(trafficPin, greenPin, SET);
}
void yellowlight(){
	HAL_GPIO_WritePin(trafficPin, redPin, SET);
	HAL_GPIO_WritePin(trafficPin, yellowPin, RESET);
	HAL_GPIO_WritePin(trafficPin, greenPin, SET);
}
void greenlight(){
	HAL_GPIO_WritePin(trafficPin, redPin, SET);
	HAL_GPIO_WritePin(trafficPin, yellowPin, SET);
	HAL_GPIO_WritePin(trafficPin, greenPin, RESET);
}
