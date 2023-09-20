/*
 * timer.h
 *
 *  Created on: Nov 1, 2022
 *      Author: admin
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

extern int timer_flag;
extern int timer1_flag;
extern int timer2_flag;

void setTimer(int duration);
void setTimer1(int duration);
void setTimer2(int duration);

void timerRun();

#endif /* INC_TIMER_H_ */
