//
// Created by j on 19-1-23.
//

// r_drive1.c -- 测试函数rand1()和srand1()
// 与s_and_r.c 一起编译

#include <stdio.h>

extern void srand1(unsigned int x);
extern int rand1(void);

int main(void)
{
    int count;
    unsigned seed;

    printf("Please enter your choice for seed.\n");
    while (scanf("%u",&seed) == 1)
    {
        srand1(seed);
        for (count = 0; count < 5; ++count) {
           printf("%hd\n",rand1()) ;
        }
        printf("Please enter next seed (q to quit):\n");
    }
    printf("Done\n");

    return 0;
}
