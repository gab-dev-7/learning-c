/* if.c */
#include <stdio.h>

int main() {
    int x;

    printf("Choose a number:\n");
    scanf("%d", &x);

    if (x == 5) {
        printf("You won a million dollars!\n");
    } else {
        printf("You own me a million dollars!\n");
    }

    return 0;
}
