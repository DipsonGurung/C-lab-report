#include <stdio.h>
#include <ctype.h>

void countCasesAndSpaces(char str[]) {
    int lower = 0, upper = 0, space = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (islower(str[i])) {
            lower++;
        } else if (isupper(str[i])) {
            upper++;
        } else if (isspace(str[i])) {
            space++;
        }
    }
    printf("Lowercase characters: %d\n", lower);
    printf("Uppercase characters: %d\n", upper);
    printf("Space characters: %d\n", space);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    countCasesAndSpaces(str);
    printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n"); 
    return 0;
}

