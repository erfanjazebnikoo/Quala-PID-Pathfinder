/********************** QUALA **********************
Project : Quala Speedy Path Finder Main Board
Version : 0.1
Date    : 4/29/2015
Author  : Erfan Jazeb Nikoo
Company : Quala
 ********************** QUALA **********************/

#ifndef LIBRARY_H
#define	LIBRARY_H

#include <mega128a.h>
#include <delay.h>
#include <stdlib.h>
#include <stdio.h>

#include "PathFinding.h"
#include "Sensor.h"
#include "Move.h"
#include "Controller.h"
#include "PID.h"
#include "PWM.h"  

#define Sensor1     PIND.6
#define Sensor2     PIND.5
#define Sensor3     PIND.4
#define Sensor4     PIND.3
#define Sensor5     PIND.2
#define Sensor6     PIND.1
#define Sensor7     PIND.0
#define Sensor8     PINC.0
#define Sensor9     PINC.1
#define Sensor10     PINC.2
#define Sensor11     PINC.3
#define Sensor12     PINC.4
#define Sensor13     PINC.5
#define Sensor14     PINC.6
#define Sensor15     PINC.7
#define Sensor16     PINA.7
#define Sensor17     PINA.6
#define Sensor18     PINA.5
#define Sensor19     PINA.4
#define Sensor20     PINA.3
#define Sensor21     PINA.2
#define Sensor22     PINA.1
#define Sensor23     PINA.0
#define Sensor24     PINF.7

#define ColorSensor1 PINF.5
#define ColorSensor2 PINF.6
#define ColorSensor3 PINF.3
#define ColorSensor4 PINF.4

#define Sharp1       PINF.1
#define Sharp2       PINF.0
#define Sharp3       PINF.2

#define PID_PWM      PINB.7

#define SpeedSwitchEff    5

#define MaxSpeed          1023
#define MinSpeed          0

#define Motor2_IN1   PORTB.3
#define Motor2_IN2   PORTB.4
#define Motor1_IN1   PORTB.2
#define Motor1_IN2   PORTB.0

#define Relay        PORTE.2

#define Motor2_PWM   OCR1A
#define Motor1_PWM   OCR1B

#define CenterOfRobot     12.5

#define Off               0
#define On                1

#define White             0
#define Black             1

void initialization();
//void glcd_putnum(int num, int n);
//int normalizeSpeed(int speed);
#endif	/* LIBRARY_H */

