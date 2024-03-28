//Write a program to read three sides of a triangle and calculate the area. [Hint: Area=vs(s-a)(s-b)(s-c)]

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, s, area;

    // Prompt the user to enter the sides of the triangle
    printf("Enter the lengths of sides a, b, and c of the triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the semi-perimeter
    s = (a + b + c) / 2;

    // Calculate the area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Check if the triangle is valid
    if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("The given sides do not form a triangle.\n");
    }
    else
    {
        printf("The area of the triangle is: %.2lf\n", area);
    }

    // Print the specified message
    printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n");

    return 0;
}

