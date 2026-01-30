/* for.c */
#include <assert.h>
#include <stdio.h>

#define F fflush(stdout); /* we can make our life easier by defining stuff we use a lot */

/* we use for loops when we want to iterate an exact amount of time */

/*
 * for ( beginning; condition; end of each cycle) {
 *     action
 *     if (){
 *          while () {
 *
 *          }
 *     } else {
 *
 *     }
 * }
 */

/* void means we dont return anything, we are 'only printing' stuff */
void multiply(int table, int x) {
    int result;
    result = table * x;
    printf("%d * %d = %d\n",
           table, x, result);
    return;
}

int main() {
    int x, table;

    printf("Select multiplication table: ");
    F; /* F is defined above */
    scanf("%d", &table);

    /* with assert we can restrict out code to only run when certain conditions are met */
    assert((table < 11) && (table > 0));

    for (x = 0; x < 11; x++) {
        multiply(table, x);
    }
}
