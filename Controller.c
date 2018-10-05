/********************** QUALA **********************
Project : Quala Speedy Path Finder Main Board
Version : 0.1
Date    : 4/29/2015
Author  : Erfan Jazeb Nikoo
Company : Quala
 ********************** QUALA **********************/
          
#include "Controller.h"

int leftMotorSpeed = 0;
int rightMotorSpeed = 0;

void chooseController(int controller)
{
    if (controller == PID)
    {
        calculatePIDControllerSpeed();
    }
    else if (controller == PWM)
    {             
        calculatePWMControllerSpeed();
    }
}

void setLeftMotorSpeed(int speed)
{
    leftMotorSpeed = speed;
}

void setRightMotorSpeed(int speed)
{
    rightMotorSpeed = speed;
}

int getLeftMotorSpeed()
{
    return leftMotorSpeed;
}

int getRightMotorSpeed()
{
    return rightMotorSpeed;
}
