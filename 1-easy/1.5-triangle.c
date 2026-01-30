/* triangle.c */
#include <stdio.h>

/* if we chose to write area_triangle above main, this line wouldnt be necessary */
float area_triangle(int base, int height);

int main() {
    int b, h;
    float a;

    /* input in the same line as the sentence above */
    printf("Base: ");
    fflush(stdout);
    scanf("%d", &b);

    printf("Height: ");
    fflush(stdout);
    scanf("%d", &h);

    a = area_triangle(b, h);
    printf("The area is %.2f\n", a);

    return 0;
}

/* similar style as main */

float area_triangle(int base, int height) {
    float area;
    /* we use float here because (base * height) / 2 could result in a decimal (.5)
     * if we used int, the decimal part would be lost (truncated) */
    area = (float)(base * height) / 2.0;
    return area;
}
