/* references.c */
#include <stdio.h>

/* we now look at `& and *`. instead of return the `real` variable, we return the
 * address of where it is located. notice that our function is `void` */

/* the order of the arguments (... , ..., ... ) matter! */
void addition(int a, int b, int* target) {
    *target = a + b;

    return;
}

int main() {
    int x, y, answer;

    x = 5;
    y = 15;

    addition(x, y, &answer);
    printf("%d\n", answer);

    return 0;
}
