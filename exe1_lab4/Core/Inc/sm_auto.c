///*
// * sm_auto.c
// *
// *  Created on: Sep 30, 2022
// *      Author: admin
// */
//#include "sm_auto.h"
//
//void fsm_automatic_run(){
//	switch (status){
//	case INIT:
//		if (timer1_flag == 1){
//			status = AUTO_RED;
//			setTimer1(500);
//		}
//		break;
//	case AUTO_RED:
//		HAL_GPIO_WritePin(led_red_GPIO_Port, led_red_Pin, RESET);
//		HAL_GPIO_WritePin(led_yellow_GPIO_Port, led_yellow_Pin, SET);
//		HAL_GPIO_WritePin(led_green_GPIO_Port, led_green_Pin, SET);
////		HAL_GPIO_WritePin(pina_GPIO_Port, pina_Pin, SET);
////		HAL_GPIO_WritePin(pinb_GPIO_Port, pina_Pin, RESET);
//		if (timer1_flag == 1){
//			status = AUTO_GREEN;
//			setTimer1(300);
//		}
//		if (button1_flag == 1){
//			button1_flag = 0;
//			status = MAN_RED;
//			setTimer1(500);
//		}
//		break;
//	case AUTO_GREEN:
//		HAL_GPIO_WritePin(led_red_GPIO_Port, led_red_Pin, SET);
//		HAL_GPIO_WritePin(led_yellow_GPIO_Port, led_yellow_Pin, RESET);
//		HAL_GPIO_WritePin(led_green_GPIO_Port, led_green_Pin, SET);
////		HAL_GPIO_WritePin(pina_GPIO_Port, pina_Pin, RESET);
////		HAL_GPIO_WritePin(pinb_GPIO_Port, pina_Pin, SET);
//		if (timer1_flag == 1){
//			status = AUTO_YELLOW;
//			setTimer1(200);
//		}
////		if (button1_flag == 1){
////			button1_flag = 0;
////		}
//		break;
//	case AUTO_YELLOW:
//		HAL_GPIO_WritePin(led_red_GPIO_Port, led_red_Pin, SET);
//		HAL_GPIO_WritePin(led_yellow_GPIO_Port, led_yellow_Pin, SET);
//		HAL_GPIO_WritePin(led_green_GPIO_Port, led_green_Pin, RESET);
////		HAL_GPIO_WritePin(pina_GPIO_Port, pina_Pin, SET);
////		HAL_GPIO_WritePin(pinb_GPIO_Port, pina_Pin, SET);
//		if (timer1_flag == 1){
//			status = AUTO_RED;
//			setTimer1(500);
//		}
////		if (button1_flag == 1){
////			button1_flag = 0;
////		}
//		break;
//	default:
//		break;
//	}
//}
