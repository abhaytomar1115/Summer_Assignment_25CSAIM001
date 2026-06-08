// Write a program to Convert decimal to binary.
#include <stdio.h>
void decimalToBinary(int num)
{    int binary[32], i = 0;
    while (num > 0)
    {        binary[i] = num % 2;
        num /= 2;
        i++;
    }
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
    printf("\n");
}
int main()
{    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    decimalToBinary(n);
    return 0;
}   