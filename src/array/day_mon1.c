//
// Created by j on 19-1-11.
//

// day_mon1.c -- 打印每月的天数

#include <stdio.h>

#define MONTHS 12

int main(void)
{
    int days[MONTHS]= {31,28,31,30,31,30,31,31,30,31,30,31};
    int index;

    for(index = 0;index<MONTHS; index++)
        printf("Month %d has %2d days.\n",index+1,days[index]);

    return 0;
}
