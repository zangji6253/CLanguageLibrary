//
// Created by j on 19-1-15.
//

// strings.c -- 使用字符串与用户交互

#include <stdio.h>

#define MSG "You must have many talents. Tell me some. "
#define LIM 5
#define LINELEN 81 // 最大字符串长度+1

int main(void) {
    char name[LINELEN];
    char talents[LINELEN];
    int i;

    // 初始化一个大小已确定的char数组
    const char m1[40] = "Limit yourself to one line's worth. ";

    // 让编译器计算数组大小
    const char m2[] = "If you can't think of anything, fake it. ";

    // 初始化一个指针
    const char *m3 = "\nEnough about me - what's your name? ";

    // 初始化一个字符串指针的数量
    const char *mytal[LIM] = {
            "Adding numbers swiftly",
            "Multiplying accurately",
            "Stashing data",
            "Following instructions to the letter",
            "Understanding the C language"
    };

    printf("Hi! I'm Clyde the Computer. " " I have many talents.\n");
    printf("Let me tell you some of them.\n");
    puts("What were they? Ah, yes, here's a partial list. ");
    for (i = 0; i < LIM; ++i) {
       puts(mytal[i]);
    }
    puts(m3);
    gets(name);
    printf("Well, %s, %s\n",name,MSG);
    printf("%s\n%s\n",m1,m2);
    gets(talents);
    puts("Let's see if I've got that list: ");
    puts(talents);
    printf("Thanks for the information. %s.\n",name);

    return 0;

}
