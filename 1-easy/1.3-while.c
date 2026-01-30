/* while.c */
#include <stdio.h>

int main() {

    /* here we will encounter loops and if statements */
    /* we use loops for repetitive tasks in a controlled manner */

    int x;
    x = 0;

    /* 1 serves as 'true'. 0 would be the contrary. x != 1 is equivalent here */
    /* we keep asking until the users chooses 1 or breaks the program */
    while (1) {
        printf("Do you wish to quit? Press 1.\n");
        scanf("%d", &x);
        if (x == 1) {
            break; /* writing return 0 instead would've terminated the program directly */
        }
    }

    printf("You wished to quit\n");

    return 0;
}
