#include <stdio.h>

int main() {
    int number, i;

    // 读取用户输入
    printf("请输入一个整数：");
    scanf("%d", &number);

    // 处理边界条件
    if (number <= 1) {
        printf("%d 不是一个素数\n", number);
        return 0;
    }

    // 判断素数
    for (i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            printf("%d 不是一个素数\n", number);
            return 0;
        }
    }

    // 如果没有找到除数，则为素数
    printf("%d 是一个素数\n", number);
    return 0;
}