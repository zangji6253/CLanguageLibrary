//
// Created by j on 19-1-11.
//

// designate.c -- 使用指定初始化项目

#include <stdio.h>

#define MONTHS 12

int main(void)
{
    int days[MONTHS]= {31,28,[4]=31,30,31,[1]=29};
    int i;

    for(i=0;i<MONTHS;i++)
        printf("%2d %d\n",i+1,days[i]);

    return 0;
}
