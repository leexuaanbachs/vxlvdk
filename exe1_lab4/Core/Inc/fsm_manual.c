/*
 * fsm_manual.c
 *
 *  Created on: 7 Oct 2022
 *      Author: admin
 */
#include "fsm_manual.h"

void fsm_manual_run(){
	switch(status){
	case MAN_RED:
		if (timer1_flag == 1){
			status = AUTO_RED;
			setTimer1(500);
		}
//		if (button1_flag == 1){
//			status = MAN_GREEN;
//			button1_flag = 0;
//		}
		break;
	case MAN_GREEN:
//		if (button1_flag == 1){
//			status = MAN_YELLOW;
//			button1_flag = 0;
//		}
		break;
	case MAN_YELLOW:
//		if (button1_flag == 1){
//			status = MAN_GREEN;
//			button1_flag = 0;
//		}
		break;
	}
}
