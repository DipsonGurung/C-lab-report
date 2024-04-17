#include <stdio.h>

void asciiValue(char str[]) {
    printf("ASCII values of characters in the string:\n");
    for (int i = 0; str[i] != '\0'; ++i) {
        printf("%c: %d\n", str[i], str[i]);
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    asciiValue(str);
    printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n"); 
    return 0;
}

