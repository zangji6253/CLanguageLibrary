//
// Created by j on 19-1-16.
//

// name2.c -- 读取一个名字

#include <stdio.h>

#define MAX 81

int main(void)
{
    char name[MAX];
    char * ptr;

    printf("Hi, what's your name?\n");
    ptr = gets(name);
    printf("%s? Ah! %s!\n",name,ptr);

    return 0;
}
