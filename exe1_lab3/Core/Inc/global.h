/*
 * global.h
 *
 *  Created on: Nov 1, 2022
 *      Author: admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "button.h"
#include "timer.h"

#define NORMAL 			1
#define AUTO_RED 		2
#define AUTO_YELLOW 	3
#define AUTO_GREEN		4

#define ADJUST_RED 		10
#define ADJUST_YELLOW 	11
#define ADJUST_GREEN	12

extern int status;
extern int red_time;
extern int yellow_time;
extern int green_time;

void updateBuffer (int time, int job);

#endif /* INC_GLOBAL_H_ */
