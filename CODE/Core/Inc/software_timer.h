/*
 * sofware_timer.h
 *
 *  Created on: Nov 1, 2024
 *      Author: ADMIN
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#define MAX_COUNTER 11
#define TIMER_TICK 5

extern int timer_counter[MAX_COUNTER];

void setTimer(int index, int value);
int isTimerExpired(int index);

void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
