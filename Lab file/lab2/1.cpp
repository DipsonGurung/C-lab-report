#include <stdio.h>

int main() {
    int n = 10, first = 0, second = 1, next;

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n");
    return 0;
}

