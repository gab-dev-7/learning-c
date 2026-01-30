/* countdown.c */
#include <stdio.h>
#include <unistd.h>

int main() {
    int number;

    number = 10;

    while (1) {

        /* if we only have one line inside the if statement no { } is needed */
        if (number == 0) {
            break;
        }

        /* we filter out the odd numbers like so: */
        if (number % 2 != 0) {
            number--;
            continue;
        }

        printf("%d\n", number);
        sleep(1);

        number -= 1; /* equivalent to `number = number - 1;` or `number--;` */
    }
    return 0;
}
