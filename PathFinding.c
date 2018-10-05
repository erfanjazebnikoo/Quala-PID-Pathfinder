/********************** QUALA **********************
Project : Quala Speedy Path Finder Main Board
Version : 0.1
Date    : 4/29/2015
Author  : Erfan Jazeb Nikoo
Company : Quala
 ********************** QUALA **********************/

#include "PathFinding.h"

void pathFinding()
{
    int lineColor = Black;
    int i = 0;
    int forwardMode;
    while (1)
    { 
    ////////////////////////////////////////////////////////// SHARP

        if(Sharp1 == 1){
            avoidObstacle();
            continue;
        }
                
        sense();
        
        lineColor = getLineColor();
        
        forwardMode = Off;
        
        for(i = 5;i < 19;i++)
        {
            if(getSensorValue(i) == lineColor)
            {
                forwardMode = On;   
            }
        }
        
        if(forwardMode == On)
        {
            if (getSensorValue(11) == lineColor)
            {
                move(Forward, Normal);
            }
            if (getSensorValue(12) == lineColor)
            {
                move(Forward, Normal);
            }
            if (getSensorValue(10) == lineColor)
            {
                move(Forward, Normal);
            }
            if (getSensorValue(13) == lineColor)
            {
                move(Forward, Normal);
            }
            if (getSensorValue(9) == lineColor)
            {
                move(Forward, Normal);
            }
            if (getSensorValue(14) == lineColor)
            {
                move(Forward, Normal);
            }
            if (getSensorValue(8) == lineColor)
            {
                move(Forward, Normal);
            }
            if (getSensorValue(15) == lineColor)
            {
                move(Forward, Normal);
            }
            if (getSensorValue(7) == lineColor)
            {
                move(Forward, Normal);
            }
            if (getSensorValue(16) == lineColor)
            {
                move(Forward, Normal);
            }
            if (getSensorValue(6) == lineColor)
            {
                move(Forward, Normal);
            }
            if (getSensorValue(17) == lineColor)
            {
                move(Forward, Normal);
            } 
            if (getSensorValue(5) == lineColor)
            {
                move(Forward, Normal);
            }
            if (getSensorValue(18) == lineColor)
            {
                move(Forward, Normal);
            }
        }
        else if(forwardMode == Off)
        {
            if (getSensorValue(4) == lineColor)
            {
                move(Left, Spin);
            }
            else if (getSensorValue(19) == lineColor)
            {
                move(Right, Spin);
            }
            else if (getSensorValue(3) == lineColor)
            {
                move(Left, Spin);
            }
            else if (getSensorValue(20) == lineColor)
            {
                move(Right, Spin);
            }
            else if (getSensorValue(2) == lineColor)
            {
                move(Left, Spin);
            }
            else if (getSensorValue(21) == lineColor)
            {
                move(Right, Spin);
            } 
            else if (getSensorValue(1) == lineColor)
            {
                move(Left, Spin);
            }
            else if (getSensorValue(22) == lineColor)
            {
                move(Right, Spin);
            }  
            else if (getSensorValue(0) == lineColor)
            {
                move(Left, Spin);
            }
            else if (getSensorValue(23) == lineColor)
            {
                move(Right, Spin);
            }
        }
    }
}

void avoidObstacle()
{        
        Motor1_IN1 = Off;
        Motor1_IN2 = Off;
        Motor1_PWM = 0;  ///// rast 950
        Motor2_IN1 = Off;
        Motor2_IN2 = Off;
        Motor2_PWM = 0; ////// chap
}
