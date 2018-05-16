/*
 * stepperctrl.h
 *
 *  Created on: 2018Äê5ÔÂ15ÈÕ
 *      Author: cking
 */

#ifndef TASK_STEPPERCTRL_H_
#define TASK_STEPPERCTRL_H_

void stepperctrl_thread(void);

// unit: rps, max 50;
void stepperctrl_set_speed(int speed);
#endif /* TASK_STEPPERCTRL_H_ */
