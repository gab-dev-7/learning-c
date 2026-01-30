/* triangle.c */
#include <stdio.h>

/* if we chose to write area_triangle above main, this line wouldnt be necessary */
int area_triangle(int base, int height);

int main() {
    int b, h, a;

    /* input in the same line as the sentence above */
    printf("Base: ");
    fflush(stdout);
    scanf("%d", &b);

    printf("Height: ");
    fflush(stdout);
    scanf("%d", &h);

    a = area_triangle(b, h);
    printf("The area is %d\n", a);

    return 0;
}

/* similar style as main */

int area_triangle(int base, int height) {
    int area;
    area = (base * height) / 2;
    return area;
}
