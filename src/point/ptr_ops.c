//
// Created by j on 19-1-11.
//

// ptr_ops.c -- 指针操作

#include <stdio.h>

int main(void)
{
    int urn[5] = {100,200,300,400,500};
    int * ptr1, * ptr2, * ptr3;

    prt1 = urn;
    prt2 = &urn[2];

    printf("pointer value, dereferenced pointer, pointer address:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1,*ptr1,&ptr1);

    ptr3 = ptr1 + 4;
    printf("\nadding an int to a pointer:\n");
    printf("ptr1 + 4 = %p, *(ptr1 + 3)=%d\n",ptr1+4,*(ptr1+3));
    ptr1++;

}
