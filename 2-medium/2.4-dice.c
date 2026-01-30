/* dice.c */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int dice_throw(int max) {
    /* just like our setup before */
    int x;
    x = rand() % max + 1;
    return x;
}

int main() {
    int balance;
    balance = 1000;
    printf("Your balance is %d francs.", balance);

    int bet;
    printf("Choose your bet amount: ");
    fflush(stdout);
    scanf("%d", &bet);

    int guess;
    printf("Choose a value between 1 and 6. Or 0 to quit: ");
    fflush(stdout);
    scanf("%d", &guess);

    if (guess == 0) {
        return 0;
    }

    int dice;
    srand(getpid());

    printf("And the number is...\n");

    sleep(2);

    dice = dice_throw(6);
    printf("%d\n", dice);

    if (guess == dice) {
        printf("Congratulations, you won!\n");
        bet *= 3;
        balance += bet;
    } else {
        printf("womp womp, you lost!\n");
        balance -= bet;
    }

    printf("Your balance is now %d francs\n", balance);

    return 0;
}
