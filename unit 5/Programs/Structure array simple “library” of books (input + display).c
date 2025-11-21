// prog2_structure_array.c
#include <stdio.h>

struct book {
    char title[50];
    char author[30];
    int pages;
    float price;
};

int main(void) {
    struct book library[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter title of book %d: ", i + 1);
        scanf("%49s", library[i].title);

        printf("Enter author of book %d: ", i + 1);
        scanf("%29s", library[i].author);

        printf("Enter pages of book %d: ", i + 1);
        scanf("%d", &library[i].pages);

        printf("Enter price of book %d: ", i + 1);
        scanf("%f", &library[i].price);

        printf("\n");
    }

    printf("\n----- Book Details -----\n");
    for (i = 0; i < 3; i++) {
        printf("Book %d:\n", i + 1);
        printf("  Title : %s\n", library[i].title);
        printf("  Author: %s\n", library[i].author);
        printf("  Pages : %d\n", library[i].pages);
        printf("  Price : %.2f\n\n", library[i].price);
    }

    return 0;
}
// This program defines a structure 'book' with members for title, author, pages, and price.
// It then creates an array of three 'book' structures, takes user input to populate
// each book's details, and finally displays the information of all books in the library.