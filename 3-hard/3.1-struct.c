/* struct.c */
#include <stdio.h>
#include <string.h>

/* we create a struct(ure) when we have a repeated amount of things with the same attributes */
struct person {
    char title[8];
    char lastname[32];
    int age;
}; /* don't forget about this semicolon at the end */

int main() {
    struct person john;

    /* copy the string (name... etc) to the variable. Use sizeof() so you don't have to
     * count manually, but subtract 1 to be sure there is always place for the \0 at the end */
    strncpy(john.title, "doctor", sizeof(john.title) - 1);
    john.title[sizeof(john.title) - 1] = '\0'; // Manually force the end of string

    strncpy(john.lastname, "smith", sizeof(john.lastname) - 1);
    john.lastname[sizeof(john.lastname) - 1] = '\0'; // Manually force the end of string

    /*
     * alternative: snprintf automatically leaves room for the \0 if the source is too big,
     * it cuts it off and STILL adds the \0.
     * snprintf(john.title, sizeof(john.title), "%s", "doctor");
     * snprintf(john.lastname, sizeof(john.lastname), "%s", "smith"); */

    john.age = 25;

    printf("%s %s of the age %d\n",
           john.title,
           john.lastname,
           john.age);

    return 0;
}

/* \0 is te null terminator. It also needs 'space' in the string */
