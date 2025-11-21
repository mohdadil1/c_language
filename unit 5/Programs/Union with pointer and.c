// prog5_union_pointer.c
#include <stdio.h>

union abc {
    int a;
    char b;
};

int main(void) {
    union abc var;
    union abc *p = &var;

    p->a = 90;          // 90 is 'Z' in ASCII is 90? Actually 90 = 'Z'
    printf("a = %d\n", p->a);
    printf("b = %c\n", p->b);

    return 0;
}
// Output:
// a = 90
// b = Z
// Explanation:
// In this program, we define a union 'abc' that can hold either an integer 'a' or a character 'b'.
// We create a pointer 'p' to the union and assign the integer value 90 to 'a' using the pointer.
// When we print 'a', it shows 90. When we print 'b', it shows 'Z' because the ASCII value of 'Z' is 90.