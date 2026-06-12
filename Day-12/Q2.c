// Write a program to Write function for Armstrong.

#include <stdio.h>
#include <math.h>
int isArmstrong(int num)
{
    int originalNum = num, sum = 0, n = 0;
    while (originalNum != 0)
    {
        originalNum /= 10;
        n++;
    }
    originalNum = num;
    while (originalNum != 0)
    {
        int digit = originalNum % 10;
        sum += pow(digit, n);
        originalNum /= 10;
    }
    return sum == num; // Return 1 if Armstrong, else 0
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}