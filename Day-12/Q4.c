// Write a program to Write function for perfect number.

#include <stdio.h>
int isPerfect(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum += i; // Add divisor to sum
    }
    return sum == num; // Return 1 if perfect, else 0
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPerfect(num))
        printf("%d is a perfect number.\n", num);
    else
        printf("%d is not a perfect number.\n", num);
    return 0;
}