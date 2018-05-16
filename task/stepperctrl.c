/*
 * stepperctrl.c
 *
 *  Created on: 2018Äê5ÔÂ15ÈÕ
 *      Author: cking
 */
#include "stepperctrl.h"
#include "..\bsp\stepmotor.h"

int _speed = 0;

void stepperctrl_thread()
{
    step_motor_set_speed(0, _speed);
}

void stepperctrl_set_speed(int speed)
{
    _speed = speed;
}
