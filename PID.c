/********************** QUALA **********************
Project : Quala Speedy Path Finder Main Board
Version : 0.1
Date    : 4/29/2015
Author  : Erfan Jazeb Nikoo
Company : Quala
 ********************** QUALA **********************/

#include "PID.h"

float Kp = 59.33; // Max deviation = 20-10.5 = 9.5 ||  255/9.5 = 26.84
float Ki = 0.00015;
float Kd = 100;

static float error = 0;
static float previousError = 0;
static float totalError = 0;

float power = 0;

void calculatePIDControllerSpeed()
{     
    calculateSensorParameters();

    previousError = error;
    error = getAverageSensorValue() - CenterOfRobot;
    totalError += error;

    power = (Kp * error) + (Kd * (error - previousError)) + (Ki * totalError);
    
    if (power > MaxSpeed)
        power = MaxSpeed;
    else if (power<-MaxSpeed)
        power = -MaxSpeed;

    if (power < 0) // Turn left
    {
        setRightMotorSpeed(MaxSpeed);
        setLeftMotorSpeed(MaxSpeed - abs((int)power));
    }
    else // Turn right
    {
        setRightMotorSpeed(MaxSpeed - (int)power);
        setLeftMotorSpeed(MaxSpeed);
    }
}
