//
// Created by j on 19-1-3.
//

#include <stdio.h>

int main(void) {
    /* showf_pt.c -- 以两种方式显示浮点值 */
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;
    printf("%f can be written %e\n", aboat, aboat);
    printf("%f can be written %e\n", abet, abet);
    printf("%f can be written %e\n", dip, dip);

    float toobig = 3.4E38;
    printf("%e\n", toobig * 100.0f);

    /* floaterr.c -- 说明舍入误差 */
    float a, b;

    b = 2.0e20 + 1.0;
    a = b - 2.0e20;
    printf("%f \n", a);

    /* typesize.c -- 输出类型的大小 */
    /* c99为类型大小提供一个%zd说明符 */
    printf("Type int has a size of %u bytes.\n", sizeof(int));
    printf("Type char has a size of %u bytes.\n", sizeof(char));
    printf("Type long has a size of %u bytes.\n", sizeof(long));
    printf("Type double has a size of %u bytes.\n", sizeof(double));

    /* escape.c -- 使用转义字符 */
    float salary;
    printf("\aEnter your desired monthly salary: ");
    printf(" $_______\b\b\b\b\b\b\b");
    scanf("%f",&salary);
    printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
    printf("\rGee!\n");

    return 0;
}
