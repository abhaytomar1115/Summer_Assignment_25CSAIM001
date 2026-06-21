// Write a program to Convert lowercase to uppercase.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }

    while (str[i] != '\0') {
        str[i] = toupper((unsigned char)str[i]);
        i++;
    }

    printf("Uppercase string is: %s", str);
    return 0;
}