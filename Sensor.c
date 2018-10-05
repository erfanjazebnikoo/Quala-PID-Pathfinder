/********************** QUALA **********************
Project : Quala Speedy Path Finder Main Board
Version : 0.1
Date    : 4/29/2015
Author  : Erfan Jazeb Nikoo
Company : Quala
 ********************** QUALA **********************/

#include "Sensor.h"

int sensorValue[24] = {On};
float activeSensor = 0;
float totalSensor = 0;
float averageSensor = CenterOfRobot; // 10.5 is a template value and should change it

void sense()
{
    sensorValue[0] = Sensor1;
    sensorValue[1] = Sensor2;
    sensorValue[2] = Sensor3;
    sensorValue[3] = Sensor4;
    sensorValue[4] = Sensor5;
    sensorValue[5] = Sensor6;
    sensorValue[6] = Sensor7;
    sensorValue[7] = Sensor8;
    sensorValue[8] = Sensor9;
    sensorValue[9] = Sensor10;
    sensorValue[10] = Sensor11;
    sensorValue[11] = Sensor12;
    sensorValue[12] = Sensor13;
    sensorValue[13] = Sensor14;
    sensorValue[14] = Sensor15;
    sensorValue[15] = Sensor16;
    sensorValue[16] = Sensor17;
    sensorValue[17] = Sensor18;
    sensorValue[18] = Sensor19;
    sensorValue[19] = Sensor20;
    sensorValue[20] = Sensor21;
    sensorValue[21] = Sensor22;
    sensorValue[22] = Sensor23;
    sensorValue[23] = Sensor24;
}

void calculateSensorParameters()
{
    int i = 0;
    int onSensor  = -1;  
    int sensorState;;
    for (i = 0; i < 20; i++)
    {
        if (getSensorValue(i) == getLineColor())
        {               
            activeSensor += 1;
            onSensor = i;
            sensorState = 1;
        }
        else
        {
            sensorState = 0;
        }
        totalSensor += sensorState * (i + 1);
    }
    
    if(activeSensor != 0)
    {     
        averageSensor = totalSensor / activeSensor;
    }
    else
    {
        averageSensor = CenterOfRobot;
    }
    
    activeSensor = 0;
    totalSensor = 0;
}

float getAverageSensorValue()
{
    return averageSensor;
}

int getSensorValue(int sensorNumber)
{
    return sensorValue[sensorNumber];
}

int getLineColor()
{
    int onSensor = 0;
    int i = 0;
    for(i = 0;i < 24;i++)
    {
        onSensor += getSensorValue(i);
    }  
           
    if(onSensor > 10)
    { 
        PORTD.7 = 1;
        return White;
    } 
    else
    {  
        PORTD.7 = 0;
        return Black;
    }
}