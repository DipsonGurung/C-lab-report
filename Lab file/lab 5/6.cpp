#include <stdio.h>

// Define structure
struct Book {
    char name[50];
    int pages;
    float price;
};

int main() {
    // Declare structure pointer
    struct Book *ptr;

    // Allocate memory dynamically
    ptr = (struct Book *)malloc(sizeof(struct Book));

    // Read data into structure using pointer
    printf("Enter name of book: ");
    scanf("%s", ptr->name);
    printf("Enter number of pages: ");
    scanf("%d", &ptr->pages);
    printf("Enter price: ");
    scanf("%f", &ptr->price);

    // Display structure members
    printf("\nBook details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Pages: %d\n", ptr->pages);
    printf("Price: %.2f\n", ptr->price);

    // Free dynamically allocated memory
    free(ptr);

    return 0;
}

