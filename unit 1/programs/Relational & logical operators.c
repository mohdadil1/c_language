// logic_demo.c
#include <stdio.h>

int main(void) {
    int x = 10, y = 3;
    printf("x>y: %d\n", x > y);
    printf("x==10 && y<5: %d\n", (x == 10) && (y < 5));
    printf("x<5 || y>1: %d\n", (x < 5) || (y > 1));
    printf("!(x==y): %d\n", !(x == y));
    return 0;
}
// Relational & logical operators demonstration