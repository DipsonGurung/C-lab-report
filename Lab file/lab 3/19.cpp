#include <stdio.h>
#include <string.h>

// Function to reverse a string without using library function strrev()
void reverseString(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; ++i) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    // Using library function strrev()
    printf("Reversed string using strrev(): %s\n", strrev(str));

    // Without using library function strrev()
    reverseString(str);
    printf("Reversed string without using strrev(): %s\n", str);
printf("\nName: Dipson Gurung (BSc.CSIT) Roll no.: 16\n"); 
    return 0;
}

