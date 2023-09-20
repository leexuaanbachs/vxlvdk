/*
 * manual.c
 *
 *  Created on: Nov 1, 2022
 *      Author: admin
 */

#include "manual.h"
#include "global.c"

int settime = 0;
void manual(){
	switch(status){
	case ADJUST_RED:
		setTimer1(25);
		HAL_GPIO_WritePin(led_red_GPIO_Port, led_red_Pin, RESET);
		HAL_GPIO_WritePin(led_yellow_GPIO_Port, led_yellow_Pin, SET);
		HAL_GPIO_WritePin(led_green_GPIO_Port, led_green_Pin, SET);
		if (timer1_flag == 1){
			HAL_GPIO_TogglePin(led_red_GPIO_Port, led_red_Pin);
			setTimer1(25);
		}
		if (isButtonPressed(0) == 1){
			settime = 0;
			status = ADJUST_YELLOW;
		}
		if (isButtonPressed(1) == 1){
			settime+=1;
			if (settime >= 100){
				settime = 0;
			}
		}
		if (isButtonPressed(2) == 1){
			red_time = settime;
			settime = 0;
			status = ADJUST_YELLOW;
		}
		updateBuffer(settime, 2);
		break;
	case ADJUST_YELLOW:
		setTimer1(25);
		HAL_GPIO_WritePin(led_red_GPIO_Port, led_red_Pin, SET);
		HAL_GPIO_WritePin(led_yellow_GPIO_Port, led_yellow_Pin, RESET);
		HAL_GPIO_WritePin(led_green_GPIO_Port, led_green_Pin, SET);
		if (timer1_flag == 1){
			HAL_GPIO_TogglePin(led_yellow_GPIO_Port, led_yellow_Pin);
			setTimer1(25);
		}
		if (isButtonPressed(0) == 1){
			settime = 0;
			status = ADJUST_GREEN;
		}
		if (isButtonPressed(1) == 1){
			settime+=1;
			if (settime >= 100){
				settime = 0;
			}
		}
		if (isButtonPressed(2) == 1){
			yellow_time = settime;
			settime = 0;
			status = ADJUST_GREEN;
		}
		updateBuffer(settime, 3);
		break;
	case ADJUST_GREEN:
		setTimer1(25);
		HAL_GPIO_WritePin(led_red_GPIO_Port, led_red_Pin, SET);
		HAL_GPIO_WritePin(led_yellow_GPIO_Port, led_yellow_Pin, SET);
		HAL_GPIO_WritePin(led_green_GPIO_Port, led_green_Pin, RESET);
		if (timer1_flag == 1){
			HAL_GPIO_TogglePin(led_green_GPIO_Port, led_green_Pin);
			setTimer1(25);
		}
		if (isButtonPressed(0) == 1){
			settime = 0;
			status = NORMAL;
		}
		if (isButtonPressed(1) == 1){
			settime+=1;
			if (settime >= 100){
				settime = 0;
			}
		}
		if (isButtonPressed(2) == 1){
			green_time = settime;
			settime = 0;
			status = NORMAL;
		}
		updateBuffer(settime, 4);
		break;
	default :
		break;
	}
}
