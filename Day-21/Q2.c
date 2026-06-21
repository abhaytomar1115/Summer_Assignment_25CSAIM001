// Write a program to Reverse a string.

#include <stdio.h>
int main() {
    char str[100], reversed[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate length without using strlen()
    while (str[length] != '\0') {
        length++;
    }

    // Reverse the string
    for (int i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0';

    printf("Reversed string is: %s", reversed);

    return 0;
}