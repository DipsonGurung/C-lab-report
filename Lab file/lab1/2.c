#include <stdio.h>

int main() {
    float side; // Length of the cube's side
    float surface_area; // Surface area of the cube

    printf("Enter the length of the cube's side: ");
    scanf("%f", &side);

    // Calculate the surface area
    surface_area = 6 * side * side;

    // Display the result
    printf("Surface area of the cube = %.2f square units\n", surface_area);

    // Additional information
    printf("\nName: Dipson Gurung (BSc.CSIT)\nRoll no.: 16\n");

    return 0;
}

