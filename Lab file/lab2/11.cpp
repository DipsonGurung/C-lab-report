#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("Cube: %d\n", n*n*n);
    else
        printf("Square: %d\n", n*n);

    printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n");
    return 0;
}

