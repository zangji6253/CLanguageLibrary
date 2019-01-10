//
// Created by j on 19-1-10.
//

// guess.c -- 一个低效且错误的猜数程序

#include <stdio.h>

int main(void) {
    int guess = 1;
    char response;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guess);
    while ((response = getchar()) != 'y') // 获取用户响应并和y比较
    {
        if (response == 'n')
            printf("Well, then, is it %d?\n", ++guess);
        else
            printf("Sorry, I understand only y or n.\n");
        while (getchar() != '\n')
            continue;   // 跳过输入行的剩余部分
    }
    printf("I knew I could do it!\n");
    return 0;
}
