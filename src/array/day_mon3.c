//
// Created by j on 19-1-11.
//

// day_mon3.c -- 使用指针符号

#include <stdio.h>

#define MONTHS 12

int main(void)
{
    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int index;

    for (index = 0; index < MONTHS; ++index) {
        printf("Month %2d has %d days.\n",index+1,*(days+index));
    }

    return 0;
}
