//
// Created by j on 19-1-3.
//

/* pizza.c -- 在这个批萨饼的例子中使用定义常量 */
#include <stdio.h>
#include <limits.h> // 系统定义整型常量
#include <float.h> // 系统定义浮点型常量
#define PI 3.14159
int main(void){
    float area, circum, radius;

    printf("What is the radius of your pizza?\n");
    scanf("%f",&radius);
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;
    printf("Your basic pizza parameters are as follows: \n");
    printf("circumference = %1.2f, area = %1.2f\n", circum, area);

    printf("Maximum int value on this system = %d\n",INT_MAX);
    printf("这个系统的float类型最少有效位数: %d\n",FLT_DIG);

    // defines.c -- 使用 limit.h 和 float.h 中定义的常量
    printf("Some number limits for this system: \n");
    printf("Biggest int: %d\n", INT_MAX);
    printf("Smallest unsigned long: %lld\n", LLONG_MIN);
    printf("One byte = %d bits on this system.\n", CHAR_BIT);
    printf("Largest double: %e\n",DBL_MAX);
    printf("Smallest normal float: %e\n", FLT_MIN);
    printf("float precision = %d digits\n", FLT_DIG);
    printf("float epsilon = %e\n", FLT_EPSILON);

    return 0;
}

