/********************** QUALA **********************
Project : Quala Speedy Path Finder Main Board
Version : 0.1
Date    : 4/29/2015
Author  : Erfan Jazeb Nikoo
Company : Quala
 ********************** QUALA **********************/

#ifndef PWM_H
#define	PWM_H

#include "Library.h"
#include "Sensor.h"
#include "Controller.h"

void calculatePWMControllerSpeed();
void getPWMOfSensor(int sensorNumber);
int getRightMotorPWM();
int getLeftMotorPWM();

#endif	/* PWM_H */

