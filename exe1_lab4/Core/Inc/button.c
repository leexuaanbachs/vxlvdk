///*
// * button.c
// *
// *  Created on: Sep 23, 2022
// *      Author: admin
// */
//#include "button.h"
//int KeyReg0 = NORMAL_STATE;
//int KeyReg1 = NORMAL_STATE;
//int KeyReg2 = NORMAL_STATE;
//int KeyReg3 = NORMAL_STATE;
//
//int TimeOutForKeyPress =  500;
//int button1_flag = 0;
//void subKeyProcess(){
//	//buttonflag = 1;
////	if(KeyReg3 == PRESSED_STATE){
////		//HAL_GPIO_TogglePin(led_red_GPIO_Port, led_red_Pin);
////		if ( button1_flag == 0){
////			HAL_GPIO_TogglePin(led_red_GPIO_Port, led_red_Pin);
////			button1_flag = 1- button1_flag;
////		}else{
////			HAL_GPIO_TogglePin(led_red_GPIO_Port, led_red_Pin);
////			button1_flag = 1- button1_flag;
////		}
////	}
//	HAL_GPIO_TogglePin(led_red_GPIO_Port, led_red_Pin);
//	button1_flag = 1;
//}
//void getKeyInput(){
//  KeyReg2 = KeyReg1;
//  KeyReg1 = KeyReg0;
//  KeyReg0 = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
//  if ((KeyReg1 == KeyReg0) && (KeyReg1 == KeyReg2)){
//    if (KeyReg2 != KeyReg3){
//      KeyReg3 = KeyReg2;
//
//      if (KeyReg3 == PRESSED_STATE){
//        TimeOutForKeyPress = 500;
//        subKeyProcess();
//      }
//    }else{
//       TimeOutForKeyPress --;
//        if (TimeOutForKeyPress == 0){
//          KeyReg3 = NORMAL_STATE;
//        }
//    }
//  }
//}
//
