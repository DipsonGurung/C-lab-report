#include <stdio.h>

// Define structure
struct Book {
    char name[50];
    int pages;
    float price;
};

int main() {
    // Declare array of structures
    struct Book books[5];
    int maxIndex = 0;

    // Read book information
    printf("Enter details of 5 books:\n");
    for (int i = 0; i < 5; i++) {
        printf("Book %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", books[i].name);
        printf("Pages: ");
        scanf("%d", &books[i].pages);
        printf("Price: ");
        scanf("%f", &books[i].price);

        // Update maxIndex if current book is more expensive
        if (books[i].price > books[maxIndex].price) {
            maxIndex = i;
        }
    }

    // Display information of the most expensive book
    printf("\nDetails of the most expensive book:\n");
    printf("Name: %s\n", books[maxIndex].name);
    printf("Pages: %d\n", books[maxIndex].pages);
    printf("Price: %.2f\n", books[maxIndex].price);

    return 0;
}

