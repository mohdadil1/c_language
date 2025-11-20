// assign_demo.c
#include <stdio.h>

int main(void) {
    int x = 10;
    x += 5; // x = x + 5
    printf("x after +=5: %d\n", x);
    x *= 2;
    printf("x after *=2: %d\n", x);

    int a, b, c;
    a = b = c = 7; // chained assignment
    printf("a=%d b=%d c=%d\n", a, b, c);
    return 0;
}
// Compound assignment and chained assignment demonstration