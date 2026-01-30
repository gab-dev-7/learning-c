/* sleep.c */
#include <stdio.h>
#include <unistd.h>

/* if you know the name of the function, but not what
 * to #include -> type 'man 3 function' in the terminal */

int main() {
    printf("Wait while processing...");
    fflush(stdout);

    /* in seconds */
    sleep(2);
    printf("ok\n");

    return 0;
}
