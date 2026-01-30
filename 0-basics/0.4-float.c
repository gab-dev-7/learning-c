/* decimals.c */
#include <stdio.h>

int main() {

    /* floats are decimal numbers */
    float radius, pi, area;

    pi = 3.14;
    printf("Whats is the radius in cm?\n");
    scanf("%f", &radius); /* we use %f for float */

    /* the formula for the area is radius * pi * radius */
    area = pi * radius * radius;

    printf("The area is %f\n", area);

    return 0;
}
