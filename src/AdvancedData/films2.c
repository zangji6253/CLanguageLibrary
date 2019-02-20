//
// Created by j on 2019-02-20.
//

/* films2.c -- 使用结构链表 */

#include <stdio.h>
#include <stdlib.h> /* 提供 malloc() 原型 */
#include <string.h> /* 提供 strcpy() 原型 */

#define TSIZE 45

struct film {
    char title[TSIZE];
    int rating;
    struct film *next; /* 指向链表中的下一个结构 */
};

char *s_gets(char *st, int n);

int main(void) {
    struct film *head = NULL;
    struct film *prev, *current;
    char input[TSIZE];

    /* 收集并存储信息 */
    puts("Enter first movie title: ");
    while (s_gets(input, TSIZE) != NULL && input[0] != '\0') {
        current = (struct film *) malloc(sizeof(struct film));
        if (head == NULL) /* 第一个结构 */
            head = current;
        else /* 后续的结构 */
            prev->next = current;
        current->next = NULL;
        strcpy(current->title, input);
        puts("Enter your rating <0-10>: ");
        scanf("%d", &current->rating);
        while (getchar() != '\n')
            continue;
        puts("Enter next movie title (empty line to stop): ");
        prev = current;
    }

    /* 显示电影列表 */
    if (head == NULL)
        printf("No data entered. ");
    else
        printf("Here is the movie list:\n");
    current = head;
    while (current != NULL) {
        printf("Movie: %s Rating: %d\n",
               current->title, current->rating);
        current = current->next;
    }

    /* 完成任务，释放已分配的内存 */
    current = head;
    while (current != NULL) {
        current = head;
        head = current->next;
        free(current);
    }
    printf("Bye!\n");

    return 0;
}

char *s_gets(char *st, int n) {
    char *ret_val;
    char *find;

    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        find = strchr(st, '\n');
        if (find)
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}