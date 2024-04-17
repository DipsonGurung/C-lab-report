#include <stdio.h>
#include <ctype.h>

void toggleCase(char str[]) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (isalpha(str[i])) {
            if (islower(str[i])) {
                str[i] = toupper(str[i]);
            } else {
                str[i] = tolower(str[i]);
            }
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    toggleCase(str);
    printf("String with toggled case: %s\n", str);
    printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n"); 
    return 0;
}

