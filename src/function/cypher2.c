//
// Created by j on 19-1-8.
//

// cypher2.c -- 改变输入，只保留非字母字符

#include <stdio.h>
#include <ctype.h>  // 为 isalpha() 提供原型

int main(void) {
    char ch;

    while ((ch = getchar()) != '\n') {
        if (isalpha(ch))
            putchar(ch + 1);
        else
            putchar(ch);
    }
    putchar(ch);    // 打印换行字符
    return 0;
}
