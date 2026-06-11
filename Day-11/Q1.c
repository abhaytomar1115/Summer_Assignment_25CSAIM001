// Write a program to Write function to find sum of two numbers.
#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    int result = sum(num1, num2);
    printf("Sum of %d and %d is: %d\n", num1, num2, result);
    return 0;
}