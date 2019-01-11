//
// Created by j on 19-1-11.
//

// day_mon2.c -- 让编译器计算元素个数

#include <stdio.h>

int main(void)
{
    const int days[] = {31,28,31,30};
    int index;

    for(index = 0;index < sizeof days / sizeof days[0]; index++)
        printf("Month %2d has %d days.\n",index+1,days[index]);

    return 0;
}
