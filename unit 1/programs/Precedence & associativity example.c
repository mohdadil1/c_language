// precedence_demo.c
#include <stdio.h>

int main(void) {
    int x = 15 + 10 / 5;      // division first -> 15 + (10/5)=15+2=17
    int y = 20 / 5 * 2;       // same precedence, left-to-right -> (20/5)*2=4*2=8
    int z = 2 + 3 * 4 - 5;    // 3*4=12 -> 2+12-5=9
    int a = 1;
    a = a + (a = 3);          // undefined behavior in C if same variable modified without seq points — avoid in real code
    printf("x=%d, y=%d, z=%d\n", x, y, z);
    printf("Note: expressions that modify a variable more than once without sequence points are unsafe.\n");
    return 0;
}
// This program demonstrates operator precedence and associativity in C.
// It calculates values of x, y, and z based on different arithmetic expressions
// and prints the results. It also includes a cautionary note about modifying
// the same variable multiple times in a single expression.
// which can lead to undefined behavior.
// The expected output is:
// x=17, y=8, z=9
// Note: The expression involving 'a' is included for demonstration purposes only
// and should be avoided in practice due to potential undefined behavior.