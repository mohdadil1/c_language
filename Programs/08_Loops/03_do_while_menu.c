/* Topic: Loops - do-while (run first, then check) : a menu that repeats */
#include <stdio.h>

int main()
{
    int choice, n;
    do {
        printf("\n--- MENU ---\n1. Square\n2. Cube\n0. Exit\nEnter choice: ");
        if (scanf("%d", &choice) != 1)
            break;

        switch (choice) {
        case 1:
            printf("Enter number: ");
            scanf("%d", &n);
            printf("Square = %d\n", n * n);
            break;
        case 2:
            printf("Enter number: ");
            scanf("%d", &n);
            printf("Cube = %d\n", n * n * n);
            break;
        case 0:
            printf("Bye!\n");
            break;
        default:
            printf("Invalid choice\n");
        }
    } while (choice != 0);
    return 0;
}
