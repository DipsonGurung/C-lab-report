// Reusing the same `sortAscending` function from the previous solution.
// It sorts the array in-place.

int main() {
    int numbers[10];
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &numbers[i]);
    }
    sortAscending(numbers, 10);
    printf("Sorted numbers: ");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n"); 
    return 0;
}

