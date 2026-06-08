// Write a program to Recursive reverse number.
#include <stdio.h>
int reverseNumber(int n, int rev)
{
    if (n == 0)
        return rev;
    else
        return reverseNumber(n / 10, rev * 10 + n % 10);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int result = reverseNumber(n, 0);
    printf("Reverse of %d is %d\n", n, result);
    return 0;
}