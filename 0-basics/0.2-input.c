/* input.c */
#include <stdio.h>

int main() {
    char name[16];

    /* other variables are float, int... */

    printf("Hello, what is your name?\n");
    scanf("%s", name); /* %s tell scanf that variable will be a string  */

    printf("Hello %s\n", name); /* retrieve that string we saved  */

    return 0;
}
