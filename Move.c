/********************** QUALA **********************
Project : Quala Speedy Path Finder Main Board
Version : 0.1
Date    : 4/29/2015
Author  : Erfan Jazeb Nikoo
Company : Quala
 ********************** QUALA **********************/

#include "Move.h"

void move(int type, int mode)
{
    if(PID_PWM == Off)
    {
        chooseController(PID);
    }
    else
    {            
        chooseController(PWM);
    } 

    if (type == Forward && mode == Normal)
    {
        Motor1_IN1 = On;
        Motor1_IN2 = Off;
        Motor1_PWM = getRightMotorSpeed();
        Motor2_IN1 = On;
        Motor2_IN2 = Off;
        Motor2_PWM = getLeftMotorSpeed();
    }
    else if (type == Backward && mode == Normal)
    {
        Motor1_IN1 = Off;
        Motor1_IN2 = On;
        Motor1_PWM = getRightMotorSpeed();
        Motor2_IN1 = Off;
        Motor2_IN2 = On;
        Motor2_PWM = getLeftMotorSpeed();
    }
    else if (type == Right && mode == Normal)
    {
        Motor1_IN1 = Off;
        Motor1_IN2 = On;
        Motor1_PWM = getRightMotorSpeed();
        Motor2_IN1 = On;
        Motor2_IN2 = Off;
        Motor2_PWM = getLeftMotorSpeed();
    }
    else if (type == Right && mode == Spin)
    {
        Motor1_IN1 = Off;
        Motor1_IN2 = On;
        Motor1_PWM = 950;
        Motor2_IN1 = On;
        Motor2_IN2 = Off;
        Motor2_PWM = 950;
    }
    else if (type == Left && mode == Normal)
    {
        Motor1_IN1 = On;
        Motor1_IN2 = Off;
        Motor1_PWM = getRightMotorSpeed();
        Motor2_IN1 = Off;
        Motor2_IN2 = On;
        Motor2_PWM = getLeftMotorSpeed();
    }
    else if (type == Left && mode == Spin)
    {
        Motor1_IN1 = On;
        Motor1_IN2 = Off;
        Motor1_PWM = 950;
        Motor2_IN1 = Off;
        Motor2_IN2 = On;
        Motor2_PWM = 950;
    }
    else if (type == Stop && mode == Normal)
    {
        Motor1_IN1 = Off;
        Motor1_IN2 = Off;
        Motor1_PWM = getRightMotorSpeed();
        Motor2_IN1 = Off;
        Motor2_IN2 = Off;
        Motor2_PWM = getLeftMotorSpeed();
    }

}
