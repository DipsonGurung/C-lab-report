#include <stdio.h>

int main() {
    int radius;
    float PI = 3.14, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    // Calculate the area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Display the results
    printf("The Area of the circle is: %.2f\n", area);
    printf("The Circumference of the circle is: %.2f\n", circumference);

    // Additional information
    printf("\nName: Dipson Gurung (BSc.CSIT)\nRoll no.: 16\n");

    return 0;
}

