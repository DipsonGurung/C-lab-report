//Two numbers are input through the keyboard. Write a program to interchange the the contents.
#include <stdio.h>

int main() {
    int num1, num2;

    // Read two numbers from the keyboard
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Displaying numbers before swapping
    printf("Before swapping:\n");
    printf("First number: %d\nSecond number: %d\n", num1, num2);

    // Swapping the contents without using a temporary variable
    num1 = num1 + num2; // Step 1
    num2 = num1 - num2; // Step 2: Now num2 is original num1
    num1 = num1 - num2; // Step 3: Now num1 is original num2

    // Displaying numbers after swapping
    printf("After swapping:\n");
    printf("First number: %d\nSecond number: %d\n", num1, num2);

    // Print the specified message
    printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n");

    return 0;
}

