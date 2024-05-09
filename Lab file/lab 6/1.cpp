#include <stdio.h>

int main() {
    char charVar;
    float floatVar;
    int intVar;

    printf("Memory address of charVar: %p\n", (void *)&charVar);
    printf("Memory address of floatVar: %p\n", (void *)&floatVar);
    printf("Memory address of intVar: %p\n", (void *)&intVar);

    return 0;
}

