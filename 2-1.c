#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess = 0;

    // 初始化随机数生成器
    srand(time(0));
    // 生成1到100之间的随机数
    secretNumber = rand() % 100 + 1;

    printf("我已经想好了一个1到100之间的数\n");
    do {
        printf("请输入你的猜测：");
        scanf("%d", &guess);
        if (guess > secretNumber) {
            printf("Wrong! Too high!\n");
        } else if (guess < secretNumber) {
            printf("Wrong! Too low!\n");
        }
    } while (guess != secretNumber);

    printf("Right! The number is %d\n", secretNumber);
    return 0;
}