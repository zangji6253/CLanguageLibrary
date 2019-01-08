//
// Created by j on 19-1-8.
//

// chcount.c -- 使用逻辑与运算符

#include <stdio.h>

#define PERIOD '.'

int main(void){
    int ch;
    int charcount = 0;

    while ((ch = getchar()) != PERIOD)
    {
        if(ch != '"' && ch != '\'')
            charcount++;
    }
    printf("There are %d non-quote characters.\n",charcount);

    return 0;
}