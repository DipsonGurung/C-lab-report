#include <stdio.h>
#include <ctype.h>

void toLowerCase(char str[]) {
    for (int i = 0; str[i] != '\0'; ++i) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    toLowerCase(str);
    printf("String in lowercase: %s\n", str);
    printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n"); 
    return 0;
}

