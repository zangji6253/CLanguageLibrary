//
// Created by j on 19-1-3.
//

#include <stdio.h>

#define PI 3.141593
#define PAGES 931
#define BLURB "Authentic imitation! "
#define PAGES 336
#define WORDS 65618

int main(void) {
    /* printout.c -- 使用转换说明符 */
    int number = 5;
    float expresso = 13.5;
    int cost = 3100;
    printf("The %d CEOs drank %f cups of expresso.\n", number, expresso);
    printf("The value of pi is %f.\n", PI);
    printf("Farewell! thou art too dear for my possessing.\n");
    printf("%c%d\n", '$', 2 * cost);

    /* width.c -- 字符宽度 */
    printf("*%d*\n",PAGES);
    printf("*%2d*\n",PAGES);
    printf("*%10d*\n",PAGES);
    printf("*%-10d*\n",PAGES);

    /* floats.c -- 一些浮点数的组合 */
    const double RENT = 3852.99; // 以 const 方法定义的常量

    printf("*%f*\n",RENT);
    printf("*%e*\n",RENT);
    printf("*%4.2f*\n",RENT);
    printf("*%3.1f*\n",RENT);
    printf("*%10.3f*\n",RENT);
    printf("*%10.3e*\n",RENT);
    printf("*%+4.2f*\n",RENT);
    printf("*%010.2f*\n",RENT);

    /* flags.c -- 一些格式标志的使用示例 */
    printf("%x %X %#x\n",31,31,31);
    printf("**%d**% d**% d**\n",42,42,-42);
    printf("**%5d**%5.3d**%05d**%05.3d**\n", 6,6,6,6);

    /* strings.c -- 字符串的格式化 */
    printf("/%2s/\n",BLURB);
    printf("/%24s/\n",BLURB);
    printf("/%24.5s/\n",BLURB);
    printf("/%-24.5s/\n",BLURB);

    /* intconv.c -- 一些不匹配的整数转换 */
    short num = PAGES;
    short mnum = -PAGES;

    printf("num as short and unsigned short: %hd %hu\n",num,num);
    printf("-num as short and unsigned short: %hd %hu\n",mnum,mnum);
    printf("num as int and char: %d %c\n",num,num);
    printf("WORDS as int, short, and char: %d %hd %c\n", WORDS,WORDS,WORDS);

    /* prntval.c -- 发现printf()函数的返回值 */
    int bph2o = 212;
    int rv;

    rv = printf("%d F is water's boiling point.\n",bph2o);
    printf("The printf() function printed %d charcters.\n",rv);

    /* longstrg.c -- 打印较长的字符串 */
    printf("Here's one way to print a ");
    printf("long string.\n");
    printf("Here's another way to print a \
    long string.\n");
    printf("Here's the newest way to print a "
           "long string.\n");

    return 0;
}

