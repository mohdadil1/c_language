#include <stdio.h>

int main() {
    int choice;
    printf("1.Add\n2.Subtract\n3.Multiply\nEnter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: printf("You selected Add\n"); break;
        case 2: printf("You selected Subtract\n"); break;
        case 3: printf("You selected Multiply\n"); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
