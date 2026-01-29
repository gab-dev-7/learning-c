/* numbers.c */
#include <stdio.h>

int main() {

    /* integers can store up to 4.3 billion */
    /* separate lines works just as fine */

    int x, y, result;

    /* we use %d for numbers and add a '&' to the var name */

    printf("Please input a number:\n");
    scanf("%d", &x);

    printf("Please input another number:\n");
    scanf("%d", &y);

    result = x + y;
    printf("The result is %d\n", result);

    return 0;
}
