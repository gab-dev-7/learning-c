/* if_2.c */
#include <stdio.h>

int main() {

    /* another demonstration of if statements */

    int x;
    int velocity;

    printf("Let's talk about cars!\n");
    printf("Do you use the metric or imperial system? Choose 1 or 0 respectively.\n");

    scanf("%d", &x);

    printf("What was the fastest per hour you have ever gone?");
    scanf("%d", &velocity);

    int velocityInSeconds;

    if (x == 1) {
        velocityInSeconds = (float)velocity / 3.6;
        printf("%d kmh??? thats is about %d m/s\n", velocity, velocityInSeconds);
    } else if (x == 0) {
        printf("%d mph??? thats is about 83947 squared inches of eagles and o.j.\n", velocity);
    }

    return 0;
}
