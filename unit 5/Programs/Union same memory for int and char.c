// prog4_union_basic.c
#include <stdio.h>

union abc {
    int a;
    char b;
};

int main(void) {
    union abc var;

    var.a = 65;              // 65 is 'A' in ASCII
    printf("a = %d\n", var.a);
    printf("b (same memory as a) = %c\n", var.b);

    return 0;
}
// This program defines a union 'abc' with an integer and a character member.
// It assigns a value to the integer member and then accesses the character member,
// demonstrating that both members share the same memory location.
// The output shows how the integer value corresponds to a character in ASCII.
// Note: Modifying one member of the union affects the other due to shared memory.
// --- IGNORE ---
// This program defines a union 'abc' with an integer and a character member.
// It assigns a value to the integer member and then accesses the character member,