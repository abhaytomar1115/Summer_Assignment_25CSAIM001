// Write a program to Find largest prime factor.
#include <stdio.h>
int isPrime(int num)
{    if (num <= 1)
        return 0;
    for (int i = 2; i <= num / 2; i++)
    {        if (num % i == 0)
            return 0;
    }
    return 1;
}
int main()
{    int n, largestPrime = -1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {        if (n % i == 0 && isPrime(i))  
            largestPrime = i;
    }
    if (largestPrime != -1)
        printf("The largest prime factor of %d is %d.\n", n, largestPrime);
    else
        printf("%d has no prime factors.\n", n);
    return 0;
}