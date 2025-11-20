#include <stdio.h>

int main() {
    int n = 3;

    if (n == 3)
        goto label;

    printf("This will not print\n");

label:
    printf("Goto executed\n");

    return 0;
}
// This program demonstrates the use of the 'goto' statement in C. It checks if the variable 'n' is equal to 3, and if so, it jumps to the label 'label', skipping the print statement in between. When run, it will output "Goto executed".