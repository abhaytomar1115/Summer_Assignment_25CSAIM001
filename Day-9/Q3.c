/* Write a program to Print repeated character pattern.
A
BB
CCC
DDDD
EEEEE
*/

#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", 'A' + i - 1);
        }
        printf("\n");
    }
    return 0;
}