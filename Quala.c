/********************** QUALA **********************
Project : Quala Speedy Path Finder Main Board
Version : 0.1
Date    : 4/29/2015
Author  : Erfan Jazeb Nikoo
Company : Quala

Chip type               : ATmega128A
Program type            : Application
AVR Core Clock frequency: 16.000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 1024
 ********************** QUALA **********************/

#include "Library.h"

void main(void)
{
   initialization();
    
   pathFinding();
}
