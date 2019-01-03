//
// Created by j on 19-1-3.
//

#include <stdio.h>
#include <string.h> // 提供strlen()函数原型

#define DENSITY 62.4 // 人的密度(单位是： 英镑/每立方英尺)
#define PRAISE "What a super marvelous name!"

int main() {
    // talkback.c -- 一个能为您提供一些信息的对话程序
    float weight, volume;
    int size, letters;
    char name[40];  // name 是一个有40个字符的数组

    printf("Hi! What's your first name?\n");
    scanf("%s", name);
    printf("%s, what's your weight in pounds?\n", name);
    scanf("%f", &weight);
    size = sizeof name;
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
    printf("Also, your first name has %d letters, \n", letters);
    printf("and we have %d bytes to store it in.\n", size);

    /* praisel.c --使用不同类别的字符串 */
    char name2[40];

    printf("What's your name?\n");
    scanf("%s",name2);
    printf("Hello, %s. %s\n",name2,PRAISE);
    printf("Your name of %d letters occupies %d memory cells.\n",strlen(name2), sizeof(name2));
    printf("The phrase of praise has %d letters ",strlen(PRAISE));
    printf("and occupies %d memory cells.\n", sizeof(PRAISE));

    return 0;
}

