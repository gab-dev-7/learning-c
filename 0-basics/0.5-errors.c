/* erros.c */
#include <stdio.h>

// this file contains some errors. try to find them (compile it with gcc if needed) :0

int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 10;
    int y = 5;

    printf("Simple Calculator\n")

        int product = multiply(x, y);

    int sum = add(x, y);

    printf("Sum: %f\n", sum);
    printf("Product: %d\n", product);

    return 0;
}

int mult(int a, int b) {
    return a * b;
}
