#include <stdio.h>
#include <string.h>

// Define structure
struct Name {
    char first[50];
    char last[50];
};

int main() {
    // Declare array of structures
    struct Name names[10];
    int n;

    // Read number of names
    printf("Enter the number of names (up to 10): ");
    scanf("%d", &n);

    // Read names into structure variables
    printf("Enter %d names:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Name %d (first last): ", i + 1);
        scanf("%s %s", names[i].first, names[i].last);
    }

    // Sort names in alphabetical order
    struct Name temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i].last, names[j].last) > 0) {
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }

    // Display sorted names
    printf("\nNames sorted alphabetically by last name:\n");
    for (int i = 0; i < n; i++) {
        printf("%s %s\n", names[i].first, names[i].last);
    }

    return 0;
}

