//
// Created by j on 19-1-2.
//

/* nogood.c -- 含有错误的程序 */
#include <stdio.h>

int main(void) {
    int n, n2, n3;

    n = 5;
    n2 = n * n;
    n3 = n2 * n;
    printf("n = %d, n squared = %d,n cubed = %d\n", n, n2, n3);

    int a,b;
    a =5;
    b=2;
    b=a;
    a=b;
    printf("%d %d\n",a,b);

    printf("%d\n",35*365);

    return 0;
}

