//Write a program that will convert temperature in Centigrade into Fahrenheit. [Hint: C=5/9(F-32) and 
//F=9/5*C+32]

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9.0/5.0) * celsius + 32;

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    printf("Name: Dipson Gurung (BSc.CSIT), Roll no.: 16\n");

    return 0;
}

