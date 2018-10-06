# Quala pathfinder robot controlled by PID controller
The line following robot is one of the autonomous robots. That detects and follows a line drawn on the area. The line is indicated by a white line on a block surface or block line on a white surface. This robot must be sensed the color of the line. This application depends upon the sensors. Here we are using two sensors for path detection purpose. The IR sensor used for path detection and Sharp sensor used for obstacle detection. These sensors mounted at the front end of the robot. The microcontroller is an intelligent device that controls the whole circuit.

[![N|Solid](http://erfanjazebnikoo.com/downloads/Quala-PID-Pathfinder-Side-View-LQ.jpg)](http://erfanjazebnikoo.com/downloads/Quala-PID-Pathfinder-Side-View.jpg)

Seamlessly Pathfinder robot with feedback from sensors and using PID controller for modifying the angle of robot's head based on an AVR microcontroller.
Without feedback, the robot is limited to using timing to determine if it's gone far enough, turned enough, or is going fast enough. And for mechanisms, without feedback, it's almost impossible to get arms at the right angle, elevators at the right height, or shooters to the right speed. There are a number of ways of getting these mechanisms to operate in a predictable way. The most common is using PID (Proportional, Integral, and Differential) control. The basic idea is that you have a sensor like an infrared or encoder that can measure the variable you're trying to control with a motor.
 
 ---------
 
## Software
Quala PID Pathfinder robot programmed by CodeVision AVR with C programming language. I implemented and defined both PID and PWM methods for controlling the robot. 

---------

## Hardware
soon...!

### Concepts of Line Follower
The concept of working of line follower is related to light. We use here the behavior of light at the black and white surface. When light fall on a white surface it is almost full reflected and in case of black surface light is completely absorbed. This behavior of light is used in building a line follower robot.

![N|Solid](https://circuitdigest.com/sites/default/files/inlineimages/Concept-of-White-Line-Follo.gif)
![N|Solid](https://circuitdigest.com/sites/default/files/inlineimages/Concept-of-Black-Line-Follo.gif)

In this line follower robot we have used IR Transmitters and receivers also called photodiodes. They are used to send and receive infrared light. When infrared rays fall on the white surface, it’s reflected back and caught by receiver sensor. When IR light falls on a black surface, light is absorbed and no rays are reflected back, thus photodiodes do not receive any light or rays. 
Here in this robot when the sensor senses a white surface then buffer gets High as input and when the senses black line buffer gets Low as input.

### 1-  Main board

| Unit | Description |
| ------ | ------ |
| Vision|  20x IR sensors|
| Motors Driver|2x L6203|
| Sensors Buffer|Texas Instruments 74HCT244|
| Controller Switch|Manual|
| Speed Boost|Auto|
| Sensor monitor|Led array|
| Parameters monitor|16*2 Lcd|
| Programmer | AVR ISP programmer|

[![N|Solid](http://erfanjazebnikoo.com/downloads/Quala-PID-Pathfinder-Top-View-LQ.jpg)](http://erfanjazebnikoo.com/downloads/Quala-PID-Pathfinder-Top-View.jpg)

### 2- MCU board

| Unit | Description |
| ------ | ------ |
| Proccessor | [AT90CAN128 - 8-bit AVR Microcontrollers][at90can128] |
| Clock frequency|12.000000 MHz|

[![N|Solid](http://erfanjazebnikoo.com/downloads/Quala-PID-Pathfinder-MCU-LQ.jpg)](http://erfanjazebnikoo.com/downloads/Quala-PID-Pathfinder-MCU.jpg)

### 3- Pin configuration
Soon...!

## PID
PID Control stands for Proportional-Integral-Derivative feedback control and corresponds to one of the most commonly used controllers used in industry. It's success is based on its capacity to efficiently and robustly control a variety of processes and dynamic systems, while having an extremely simple structure and intuitive tuning procedures. Although not comparable in performance with modern control strategies, it is still the best starting point when one has to start designing the autopilot for an unmanned aircraft. In fact, most existing attitude control functionalities found in commercial autopilots or open-source developments, rely on some sort of PID Controls. The structure of the PID controller is shown in below:

![N|Solid](http://erfanjazebnikoo.com/downloads/Quala-PID-Pathfinder-PID.png)

The PID Controller consists of the additive action of the Proportional, the Integral and the Derivative component. Not all of them have to be present, therefore we also often employ P-controllers, PI-controllers or PD-controllers. For the remaining of this text, we will describe the PID controller, while any other version can be derived by eliminating the relevant components. 

The PID controller bases its functionality on the computation of the "tracking error" e and its three gains KP, KI, KD. In their combination, they lead to the control action u, as shown in the following expression:

![N|Solid](http://erfanjazebnikoo.com/downloads/Quala-PID-Pathfinder-PID-F.gif)

The proportional term corresponds to the first term of the expression on the right side, the integral action to the second, and the derivative to the last one. Each of these terms plays specific roles in order to shape the transient and steady-state response of the closed-loop system. More specifically:

 - **Proportional Action**: The P-action is the component mostly relevant with the dominant response of the system. Increasing the P gain KP typically leads to shorter rise times, but also larger overshoots. Although it can decrease the setling time of the system, it can also lead to highly osciallatory or unstable behavior. 

 - **Integral Action**: The integral action is typically employed to optimize the steady-state response of the system and shape its dynamic behavior. Essentially, it brings memory to the system. Increasing the I gain KI, leads to reduction of the steady-state error (often elimination) but also more and larger oscillations. 
 
 - **Derivative Action**: The derivative action responds to the rate of change of the error signal and is mostly relevant with shaping the damping behavior of the closed-loop system. In that sense, increasing the D gain KD, typically leads to smaller overshoot and a better damped behavior, but also to larger steady-state errors.
 
 - **Collective Action**: As understood from this brief overview of the role of each action of the PID components, one cannot independently tune the three different gains. In fact, each one of them aims to offer a desired response characteristic (e.g. faster respone, damped and smooth oscillations, near-zero steady-state error) but at the same has a negative effect which has to be compensated by re-tuning another gain. Therefore, PID tuning is a highly coupled and iterative procedure. 

[at90can128]: <http://ww1.microchip.com/downloads/en/DeviceDoc/doc7679.pdf>
[ads7843]: <http://www.ti.com/lit/ds/symlink/ads7843.pdf>
[PCA82C250]: <https://www.nxp.com/docs/en/data-sheet/PCA82C250.pdf>
[ks0108]: <https://www.adafruit.com/product/188>
[mmc]: <https://en.wikipedia.org/wiki/MultiMediaCard>
[ulink]: <http://www2.keil.com/mdk5/ulink>
[keil]:<http://www2.keil.com/mdk5/uvision/>
[altium]:<https://www.altium.com/>
[initialization]:<https://github.com/erfanjazebnikoo/Multi-Task-Monitoring-and-Logger-System/blob/master/initialization.h>
[tab]:<https://github.com/erfanjazebnikoo/Multi-Task-Monitoring-and-Logger-System/blob/master/util/tab.h>
[logger]:<https://github.com/erfanjazebnikoo/Multi-Task-Monitoring-and-Logger-System/blob/master/util/logger.h>
[network]:<https://github.com/erfanjazebnikoo/Multi-Task-Monitoring-and-Logger-System/blob/master/util/network.h>
[can]:<https://en.wikipedia.org/wiki/CAN_bus>
[arm]:<https://en.wikipedia.org/wiki/ARM_architecture>
[middle]:<http://wiki.robocup.org/Middle_Size_League>

