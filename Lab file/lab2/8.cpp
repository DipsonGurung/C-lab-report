#include <stdio.h>

int main() {
    int positive = 0, negative = 0, zero = 0, n;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &n);

        if (n > 0) positive++;
        else if (n < 0) negative++;
        else zero++;

        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &choice); // Notice the space before %c to catch any newline character left in the input buffer
    } while (choice == 'Y' || choice == 'y');

    printf("Positives: %d, Negatives: %d, Zeros: %d\n", positive, negative, zero);

    printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n");
    return 0;
}

