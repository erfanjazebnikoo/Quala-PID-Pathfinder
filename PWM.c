/********************** QUALA **********************
Project : Quala Speedy Path Finder Main Board
Version : 0.1
Date    : 4/29/2015
Author  : Erfan Jazeb Nikoo
Company : Quala
 ********************** QUALA **********************/

#include "PWM.h"

int rightMotorPWM = MaxSpeed;
int leftMotorPWM = MaxSpeed;

void calculatePWMControllerSpeed()
{
    int i = 0;
    int onSensor  = -1;
    for (i = 0; i < 20; i++)
    {
        if (getSensorValue(i) == getLineColor())
        {
            getPWMOfSensor(i);
            setRightMotorSpeed(getRightMotorPWM());
            setLeftMotorSpeed(getLeftMotorPWM());
            onSensor = i;
        }
    }
}

void getPWMOfSensor(int sensorNumber)
{
    if (sensorNumber == 0)
    {   
        rightMotorPWM = MaxSpeed;
        leftMotorPWM = MaxSpeed;
    }
    else if (sensorNumber == 1)
    {
        rightMotorPWM = MaxSpeed;
        leftMotorPWM = MaxSpeed;
    }
    else if (sensorNumber == 2)
    {
        rightMotorPWM = MaxSpeed;
        leftMotorPWM = MaxSpeed;
    }
    else if (sensorNumber == 3)
    {
        rightMotorPWM = 180;
        leftMotorPWM = 150;
    }
    else if (sensorNumber == 4)
    {
        rightMotorPWM = 150;
        leftMotorPWM = 120;
    }
    else if (sensorNumber == 5)
    {
        rightMotorPWM = 200;
        leftMotorPWM = 150;
    }
    else if (sensorNumber == 6)
    {
        rightMotorPWM = 200;
        leftMotorPWM = 150;
    }
    else if (sensorNumber == 7)
    {
        rightMotorPWM = 220;
        leftMotorPWM = 180;
    }
    else if (sensorNumber == 8)
    {
        rightMotorPWM = MaxSpeed;
        leftMotorPWM = 215;
    }
    else if (sensorNumber == 9)
    {
        rightMotorPWM = MaxSpeed;
        leftMotorPWM = MaxSpeed;
    }
    else if (sensorNumber == 10)
    {
        rightMotorPWM = MaxSpeed;
        leftMotorPWM = MaxSpeed;
    }
    else if (sensorNumber == 11)
    {
        rightMotorPWM = 215;
        leftMotorPWM = MaxSpeed;
    }
    else if (sensorNumber == 12)
    {
        rightMotorPWM = 180;
        leftMotorPWM = 220;
    }
    else if (sensorNumber == 13)
    {
        rightMotorPWM = 150;
        leftMotorPWM = 200;
    }
    else if (sensorNumber == 14)
    {
        rightMotorPWM = 150;
        leftMotorPWM = 200;
    }
    else if (sensorNumber == 15)
    {
        rightMotorPWM = 135;
        leftMotorPWM = 175;
    }
    else if (sensorNumber == 16)
    {
        rightMotorPWM = 150;
        leftMotorPWM = 180;
    }
    else if (sensorNumber == 17)
    {
        rightMotorPWM = MaxSpeed;
        leftMotorPWM = MaxSpeed;
    }
    else if (sensorNumber == 18)
    {
        rightMotorPWM = MaxSpeed;
        leftMotorPWM = MaxSpeed;
    }
    else if (sensorNumber == 19)
    {
        rightMotorPWM = MaxSpeed;
        leftMotorPWM = MaxSpeed;
    }
    else if (sensorNumber == 20)
    {
        rightMotorPWM = MaxSpeed;
        leftMotorPWM = MaxSpeed;
    }
    else if (sensorNumber == 21)
    {
        rightMotorPWM = MaxSpeed;
        leftMotorPWM = MaxSpeed;
    }
    else if (sensorNumber == 22)
    {
        rightMotorPWM = MaxSpeed;
        leftMotorPWM = MaxSpeed;
    }
    else if (sensorNumber == 23)
    {
        rightMotorPWM = MaxSpeed;
        leftMotorPWM = MaxSpeed;
    }
    else if (sensorNumber == 24)
    {
        rightMotorPWM = MaxSpeed;
        leftMotorPWM = MaxSpeed;
    }
}

int getRightMotorPWM()
{
    return rightMotorPWM;
}

int getLeftMotorPWM()
{
    return leftMotorPWM;
}