//
// Created by j on 19-1-4.
//

#include <stdio.h>

#define SQUARES 64  /* 棋盘上的方格数 */
#define CROP 1E15   /* 以粒计的美国小麦产量 */

int main(void) {
    /* 高尔夫锦标赛记分卡 */
    int jane, tarzan, cheeta;

    cheeta = tarzan = jane = 68;
    printf("                  cheeta   tarzan   jane\n");
    printf("First round score %4d %8d %8d\n", cheeta, tarzan, jane);

    /* 产生前20个整数的平方表 */
    int num = 1;

    while (num < 21) {
        printf("%4d %6d\n", num, num * num);
        num++;
    }

    /* 指数增长 */
    double current, total;
    int count = 1;

    printf("square    grains       total        ");
    printf("fraction of \n");
    printf("added                  grain        ");
    printf("US total\n");
    total = current = 1.0; //开始是1粒
    printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
    while (count < SQUARES) {
        count++;
        current = 2.0 * current; //下个方格的粒数加倍
        total = total + current; //更新总数
        printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
    }
    printf("That's all.\n");

    /* 我们所知的除法 */
    printf("integer division: 5/4 is %d \n", 5 / 4);
    printf("integer division: 6/3 is %d \n", 6 / 3);
    printf("integer division: 7/4 is %d \n", 7 / 4);
    printf("floating division: 7./4. is %1.2f \n", 7. / 4.);
    printf("mixed division: 7./4 is %1.2f \n", 7. / 4);

    // 使用sizeof运算符
    int n = 0;
    size_t intsize;
    intsize = sizeof(int);
    printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n", n, sizeof n, intsize);

    return 0;
}
