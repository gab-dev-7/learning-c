/* malloc.c */
#include <stdio.h>
#include <stdlib.h>

/* we will now deal with dynamic memory allocation, hence `malloc` */

int main() {
    /* perhaps we don't know if 32 bites is enough... or too much... */
    /* char name[32];   ->   this is static memory allocation */

    char* dynamic_name;

    dynamic_name = malloc(32);

    printf("Hello, what is your name?\n");

    /* when using dyn memory, remove the `&` from the variable below! */
    scanf("%s", dynamic_name); /* not `&dynamic_name` */

    printf("Hello %s\n", dynamic_name);

    /* now we free the memory, specially in bigger projects! */
    free(dynamic_name);

    return 0;
}