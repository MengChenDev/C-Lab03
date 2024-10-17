#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;
    int maxAttempts = 10; // 设置最大尝试次数为10次
    char continuePlaying = 'y'; // 控制是否继续游戏的变量

    while (continuePlaying == 'y') { // 外层循环，控制是否继续游戏
        srand(time(0));
        secretNumber = rand() % 100 + 1;
        attempts = 0; // 重置尝试次数

        printf("我已经想好了一个1到100之间的数。\n");
        do {
            if (attempts >= maxAttempts) {
                printf("You have reached the maximum number of attempts. The number was %d.\n", secretNumber);
                break;
            }

            printf("请输入你的猜测：");
            scanf("%d", &guess);
            attempts++;
            if (guess > secretNumber) {
                printf("Wrong! Too high!\n");
            } else if (guess < secretNumber) {
                printf("Wrong! Too low!\n");
            } else {
                printf("Right! The number was %d. You guessed it in %d attempts.\n", secretNumber, attempts);
            }
        } while (guess != secretNumber && attempts < maxAttempts);

        if (attempts == maxAttempts && guess != secretNumber) {
            printf("Game over! The correct number was %d.\n", secretNumber);
        }

        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &continuePlaying); // 注意前面的空格，用于跳过之前留在输入缓冲区的换行符
    }

    printf("Thank you for playing!\n");
    return 0;
}