//
// Created by j on 19-2-18.
//

#ifndef CLANGUAGELIBRARY_NAMES_H
#define CLANGUAGELIBRARY_NAMES_H

// 明示常量
#define SLEN 32

// 结构声明
struct names_st
{
    char first[SLEN];
    char last[SLEN];
};

// 类型定义
typedef struct names_st names;

// 函数原型
void get_names(names *);
void show_names(const names *);
char * s_gets(char * st, int n);

#endif //CLANGUAGELIBRARY_NAMES_H
