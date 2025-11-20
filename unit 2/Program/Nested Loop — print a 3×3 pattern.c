#include <stdio.h>

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
// This program prints a 3x3 pattern of asterisks using nested loops.