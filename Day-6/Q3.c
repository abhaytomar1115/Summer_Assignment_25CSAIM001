// Write a program to Count set bits in a number.
#include <stdio.h>
int countSetBits(int num)
{
    int count = 0;
    while (num > 0)
    {
        count += num & 1;
        num >>= 1;
    }
    return count;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int setBits = countSetBits(n);
    printf("Number of set bits in %d: %d\n", n, setBits);
    return 0;
}