//
// Created by j on 19-1-17.
//

// hello.c -- 把命令行参数转换为数字

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i,times;

    if(argc<2||(times=atoi(argv[1]))<1)
        printf("Usage: %s positive-nember\n",argv[0]);
    else
        for (i = 0; i < times; ++i) {
           puts("Hello, good looking!");
        }

    return 0;
}
