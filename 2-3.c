#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;
    int maxAttempts = 10; // 设置最大尝试次数为10次

    srand(time(0));
    secretNumber = rand() % 100 + 1;

    printf("我已经想好了一个1到100之间的数。\n");
    do {
        if (attempts >= maxAttempts) {
            printf("You have reached the maximum number of attempts. Game over!\n");
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

    return 0;
}