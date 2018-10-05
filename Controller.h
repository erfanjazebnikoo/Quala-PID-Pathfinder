/********************** QUALA **********************
Project : Quala Speedy Path Finder Main Board
Version : 0.1
Date    : 4/29/2015
Author  : Erfan Jazeb Nikoo
Company : Quala
 ********************** QUALA **********************/

#ifndef CONTROLLER_H
#define	CONTROLLER_H

#include "Library.h"
#include "PID.h"
#include "PWM.h"

#define PID     0
#define PWM     1

void chooseController(int controller);
void setLeftMotorSpeed(int speed);
void setRightMotorSpeed(int speed);
int getLeftMotorSpeed();
int getRightMotorSpeed();

#endif	/* CONTROLLER_H */

