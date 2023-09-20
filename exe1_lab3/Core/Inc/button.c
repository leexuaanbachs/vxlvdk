/*
 * button.c
 *
 *  Created on: Nov 4, 2022
 *      Author: admin
 */

#include "button.h"
int KeyReg0[] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg1[] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg2[] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg3[] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};

int TimeOutForKeyPress[] =  {300, 300, 300};
int button_flag[] = {0, 0, 0};
int holding_flag[] = {0, 0, 0};

void subKeyProcess(int i){
	button_flag[i] = 1;
}

void subKeyHoldProcess(int i){
	holding_flag[i] = 1;
}

int isButtonPressed(int n){
	if (button_flag[n] == 1){
		button_flag[n] = 0;
		return 1;
	}
	return 0;
}

int isButtonHolding(int n){
	if (holding_flag[n] == 1){
		holding_flag[n] = 0;
		return 1;
	}
	return 0;
}

void getKeyInput(){

	for (int i = 0; i < 3; i++){
		KeyReg2[i] = KeyReg1[i];
		KeyReg1[i] = KeyReg0[i];
		switch (i)
		{
	  	case 0:
	  		KeyReg0[i] = HAL_GPIO_ReadPin(button1_GPIO_Port, button1_Pin);
	  		break;
	  	case 1:
	  		KeyReg0[i] = HAL_GPIO_ReadPin(button2_GPIO_Port, button2_Pin);
	  		break;
	  	case 2:
	  		KeyReg0[i] = HAL_GPIO_ReadPin(button3_GPIO_Port, button3_Pin);
	  		break;
	  	default:
	  		break;
		}
		if ((KeyReg0[i] == KeyReg1[i]) && (KeyReg1[i] == KeyReg2[i])){
			if (KeyReg3[i] != KeyReg2[i]){
				KeyReg3[i] = KeyReg2[i];

				if (KeyReg3[i] == PRESSED_STATE){
					subKeyProcess(i);
					TimeOutForKeyPress[i] = 300;
				}
			}else{
				if (KeyReg3[i] == PRESSED_STATE && (i == 1 || i == 2)){
					TimeOutForKeyPress[i] --;
					if (TimeOutForKeyPress[i] == 0){
						subKeyHoldProcess(i);
						TimeOutForKeyPress[i] = 30;
					}
				}
			}
		}
	}
}
