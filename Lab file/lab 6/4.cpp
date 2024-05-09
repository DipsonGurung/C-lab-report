#include <stdio.h>

int main() {
    int intVar;
    float floatVar;
    char charVar;

    printf("Size of int pointer: %zu bytes\n", sizeof(&intVar));
    printf("Size of float pointer: %zu bytes\n", sizeof(&floatVar));
    printf("Size of char pointer: %zu bytes\n", sizeof(&charVar));

    return 0;
}

