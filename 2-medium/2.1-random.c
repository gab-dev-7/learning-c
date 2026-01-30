/* random.c */
#include <stdio.h>
#include <stdlib.h> /* it'd technically work without this but it is better to add */
#include <unistd.h>

/* there is no real random numbers in computers */
int our_random_function(int max) {

    int x;

    /* modulo helps reducing it to max - 1 and the + 1 includes the max */
    x = rand() % max + 1;

    return x;
}

int main() {
    int random;

    /* the seed is needed once in the file to achieve 'randomness' */
    srand(getpid());

    random = our_random_function(5);
    printf("%d\n", random);

    random = our_random_function(10);
    printf("%d\n", random);

    return 0;
}
