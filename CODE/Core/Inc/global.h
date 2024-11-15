/*
 * globah.h
 *
 *  Created on: Nov 1, 2024
 *      Author: ADMIN
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "software_timer.h"
#include "led7_segment.h"
#include "button.h"

#define INIT		1
#define RED_GREEN	2
#define RED_YELLOW	3
#define GREEN_RED	4
#define YELLOW_RED	5
#define MOD_RED		6
#define MOD_AMBER	7
#define MOD_GREEN	8

#define MAN_RED		16
#define MAN_GREEN	17
#define MAN_YELLOW	18

extern int status;
extern int value;
extern int value1;
extern int TIME_RED;
extern int TIME_YELLOW;
extern int TIME_GREEN;
extern int index_led;

#endif /* INC_GLOBAL_H_ */

