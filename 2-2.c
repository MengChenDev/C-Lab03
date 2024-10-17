#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    srand(time(0));
    secretNumber = rand() % 100 + 1;

    printf("我已经想好了一个1到100之间的数。\n");
    do {
        printf("请输入你的猜测：");
        scanf("%d", &guess);
        attempts++;
        if (guess > secretNumber) {
            printf("Wrong! Too high!\n");
        } else if (guess < secretNumber) {
            printf("Wrong! Too low!\n");
        }
    } while (guess != secretNumber);

    printf("Right! The number was %d. You guessed it in %d attempts.\n", secretNumber, attempts);
    return 0;
}