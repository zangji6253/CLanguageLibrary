//
// Created by j on 19-1-11.
//

// recur.c -- 递归举例

#include <stdio.h>

void up_and_down(int);

int main(void)
{
    up_and_down(1);
    return 0;
}

void up_and_down(int n)
{
    printf("Level %d: n location %p\n", n, &n);
    if(n<4)
        up_and_down(n+1);
    printf("Level %d: n location %p\n", n, &n);
}
