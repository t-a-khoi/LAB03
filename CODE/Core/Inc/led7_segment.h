/*
 * led7_segment.h
 *
 *  Created on: Nov 1, 2024
 *      Author: ADMIN
 */

#ifndef INC_LED7_SEGMENT_H_
#define INC_LED7_SEGMENT_H_

#include "global.h"

void display7SEG(int num);
void display7SEG_2(int num);
void update7SEG(int index);
void updateClockBuffer();
void clearAllClock();



#endif /* INC_LED7_SEGMENT_H_ */
