// Write a program to Find x^n without pow().
#include <stdio.h>
double power(double x, int n)
{
    double result = 1.0;
    int absN = n < 0 ? -n : n;
    for (int i = 0; i < absN; i++)
        result *= x;
    return n < 0 ? 1.0 / result : result;
}
int main()
{
    double x;
    int n;
    printf("Enter a base (x): ");
    scanf("%lf", &x);
    printf("Enter an exponent (n): ");
    scanf("%d", &n);
    double result = power(x, n);
    printf("Result: %lf\n", result);
    return 0;
}