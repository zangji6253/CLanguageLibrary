//
// Created by j on 19-1-17.
//

// repeat.c -- 带有参数的main()函数

#include <stdio.h>

int main(int argc,char *argv[])
{
    int count;

    printf("The command line has %d arguments: \n",argc -1);
    for (count = 0; count < argc; ++count) {
       printf("%d: %s\n",count,argv[count]);
    }
    printf("\n");

    return 0;
}
