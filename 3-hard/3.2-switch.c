/* switch.c */
#include <stdio.h>

int main() {
    int x;

    printf("Choose between 1. apples, 2. pears or 3. bananas\n");
    scanf("%d", &x);

    /*
    if (x == 1) {
        printf("Apples\n");
    } else if (x == 2) {
        printf("Pears\n");
    } else if (x == 3) {
        printf("Bananas\n");
    } else {
        return 0;
    }
    */

    /* we use switch instead of long and repeated if else, else if, else,,, */

    switch (x) {
        case 1: /* apples */
            printf("Apples\n");
            break;
        case 2: /* pears */
            printf("Pears\n");
            break;
        case 3: /* bananas */
            printf("Bananas\n");
            break;
        default: /* the last case is always `default`, meaning if all other fail, this will run */
            printf("Choose a number between 1 and 3");
            break;
    }
    return 0;
}
