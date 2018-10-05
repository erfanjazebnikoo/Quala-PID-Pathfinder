/********************** QUALA **********************
Project : Quala Speedy Path Finder Main Board
Version : 0.1
Date    : 4/29/2015
Author  : Erfan Jazeb Nikoo
Company : Quala
 ********************** QUALA **********************/

#ifndef SENSOR_H
#define	SENSOR_H

#include "Library.h"

void sense();
void calculateSensorParameters();
float getAverageSensorValue();
int getSensorValue(int sensorNumber);
int getLineColor();

#endif	/* SENSOR_H */

