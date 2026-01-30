/* pointers.c */
#include <stdio.h>
#include <string.h>

/* think of pointers as shortcuts on a desktop. You are not
 * clicking the real thing, but something that *points* there! */

int main() {
    char str[32];

    /* pointers need a star before the name. `p` or
     * something related makes easier to identify them */
    char* p;

    /* common good practice as before */
    strncpy(str, "I like apples", sizeof(str) - 1);

    p = str;
    printf("%s\n", p);

    p = str + 1;
    printf("%s\n", p);

    p = str + 5;
    printf("%s\n", p);

    /* adding the star here accesses the exact thing (char) it is pointing to */
    p = str;
    printf("%c\n", *p); /* notice that we use %c instead of s for Char */

    return 0;
}
