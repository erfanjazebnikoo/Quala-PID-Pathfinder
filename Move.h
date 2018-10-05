/********************** QUALA **********************
Project : Quala Speedy Path Finder Main Board
Version : 0.1
Date    : 4/29/2015
Author  : Erfan Jazeb Nikoo
Company : Quala
 ********************** QUALA **********************/

#ifndef MOVE_H
#define	MOVE_H

#include "Library.h"
#include "Controller.h"

#define Forward     1
#define Backward    2
#define Right       3
#define Left        4
#define Stop        5

#define Normal      1
#define Spin        2

void move(int type, int mode);

#endif	/* MOVE_H */

