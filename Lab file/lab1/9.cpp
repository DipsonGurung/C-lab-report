#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;

    printf("Enter a three digit number: ");
    scanf("%d", &num);

    while(num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    printf("Reversed Number: %d\n", reverse);
    printf("Name: Dipson Gurung (BSc.CSIT)\n");
    printf("Roll no.: 16\n");

    return 0;
}

