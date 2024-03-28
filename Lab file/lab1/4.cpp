#include <stdio.h>

int main() {
    float length, breadth;
    float area, perimeter;

    // Input length and breadth
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculate area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Display results
    printf("Area of the rectangle = %.2f square units\n", area);
    printf("Perimeter of the rectangle = %.2f units\n", perimeter);

    // Additional information
    printf("\nName: Dipson Gurung (BSc.CSIT)\nRoll no.: 16\n");

    return 0;
}

