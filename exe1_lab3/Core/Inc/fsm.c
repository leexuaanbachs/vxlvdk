/*
 * fsm.c
 *
 *  Created on: Nov 1, 2022
 *      Author: admin
 */

#include "fsm.h"

void fsm_run(){
	switch(status){
	case NORMAL:
		HAL_GPIO_WritePin(led_red_GPIO_Port, led_red_Pin, SET);
		HAL_GPIO_WritePin(led_yellow_GPIO_Port, led_yellow_Pin, SET);
		HAL_GPIO_WritePin(led_green_GPIO_Port, led_green_Pin, SET);
		updateBuffer(red_time, 1);
		if (timer_flag == 1){
			status = AUTO_RED;
			setTimer(red_time);
		}
		if (isButtonPressed(0) == 1){
			status = ADJUST_RED;
		}
		break;
	case AUTO_RED:
		HAL_GPIO_WritePin(led_red_GPIO_Port, led_red_Pin, RESET);
		HAL_GPIO_WritePin(led_yellow_GPIO_Port, led_yellow_Pin, SET);
		HAL_GPIO_WritePin(led_green_GPIO_Port, led_green_Pin, SET);
		updateBuffer(red_time, 1);
		if (timer_flag == 1){
			status = AUTO_YELLOW;
			setTimer(yellow_time);
		}
		if (isButtonPressed(0) == 1){
			status = ADJUST_RED;
		}
		break;
	case AUTO_YELLOW:
		HAL_GPIO_WritePin(led_red_GPIO_Port, led_red_Pin, SET);
		HAL_GPIO_WritePin(led_yellow_GPIO_Port, led_yellow_Pin, RESET);
		HAL_GPIO_WritePin(led_green_GPIO_Port, led_green_Pin, SET);
		updateBuffer(yellow_time, 1);
		if (timer_flag == 1){
			status = AUTO_GREEN;
			setTimer(green_time);
		}
		if (isButtonPressed(0) == 1){
			status = ADJUST_RED;
		}
		break;
	case AUTO_GREEN:
		HAL_GPIO_WritePin(led_red_GPIO_Port, led_red_Pin, SET);
		HAL_GPIO_WritePin(led_yellow_GPIO_Port, led_yellow_Pin, SET);
		HAL_GPIO_WritePin(led_green_GPIO_Port, led_green_Pin, RESET);
		updateBuffer(green_time, 1);
		if (timer_flag == 1){
			status = AUTO_RED;
			setTimer(red_time);
		}
		if (isButtonPressed(0) == 1){
			status = ADJUST_RED;
		}
		break;
	default :
		break;
	}
}
