#include <stdio.h>

int main() {
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = num1 > num2 ? (num1 + num2) : (num1 - num2);

    printf("%d\n", result);

    printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n");
    return 0;
}

