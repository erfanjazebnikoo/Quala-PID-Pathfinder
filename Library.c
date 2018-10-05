/********************** QUALA **********************
Project : Quala Speedy Path Finder Main Board
Version : 0.1
Date    : 4/29/2015
Author  : Erfan Jazeb Nikoo
Company : Quala
 ********************** QUALA **********************/

#include "Library.h"

void initialization()
{
    DDRB=(1<<DDB7) | (1<<DDB6) | (1<<DDB5) | (1<<DDB4) | (1<<DDB3) | (1<<DDB2) | (0<<DDB1) | (1<<DDB0);
    DDRD=(0<<DDD7) | (0<<DDD6) | (0<<DDD5) | (0<<DDD4) | (0<<DDD3) | (0<<DDD2) | (0<<DDD1) | (0<<DDD0);

    TCCR1A = 0xA3;
    TCCR1B = 0x0A;

    ACSR = 0x80;
}

//void glcd_putnum(int num, int n)
//{
//    if (n == 4)
//    {
//        glcd_putchar((num / 1000) % 10 + '0');
//        glcd_putchar((num / 100) % 10 + '0');
//        glcd_putchar((num / 10) % 10 + '0');
//        glcd_putchar((num / 1) % 10 + '0');
//        glcd_putchar(' ');
//    }
//    else if (n == 3)
//    {
//        glcd_putchar((num / 100) % 10 + '0');
//        glcd_putchar((num / 10) % 10 + '0');
//        glcd_putchar((num / 1) % 10 + '0');
//        glcd_putchar(' ');
//    }
//    else if (n == 2)
//    {
//        glcd_putchar((num / 10) % 10 + '0');
//        glcd_putchar((num / 1) % 10 + '0');
//        glcd_putchar(' ');
//    }
//    else if (n == 1)
//    {
//        glcd_putchar((num / 1) % 10 + '0');
//        glcd_putchar(' ');
//    }
//}

//int normalizeSpeed(int speed)
//{
//    if (speed > MaxSpeed)
//        return MaxSpeed;
//    else if (speed < MinSpeed)
//        return MinSpeed;
//}