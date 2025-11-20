// inc_dec_demo.c
#include <stdio.h>

int main(void) {
    int i = 5;
    int a = ++i; // pre-increment: i becomes 6, a = 6
    i = 5;
    int b = i++; // post-increment: b = 5, then i becomes 6
    printf("After ++i: a=%d (i=%d)\n", a, i); // careful: i reset shown below
    // to be clear demonstrate separately:
    i = 5;
    printf("Starting i=5, ++i yields %d and i becomes %d\n", ++i, i);
    i = 5;
    printf("Starting i=5, i++ yields %d and i becomes %d\n", i++, i);
    return 0;
}
// Expected Output:
// After ++i: a=6 (i=6)
// Starting i=5, ++i yields 6 and i becomes 6
// Starting i=5, i++ yields 5 and i becomes 6