//
// Created by j on 19-1-10.
//

// echo.c -- 重复输入

#include <stdio.h>

int main(void){
    char ch;

    while ((ch = getchar())!= '#')
        putchar(ch);
    return 0;
}
