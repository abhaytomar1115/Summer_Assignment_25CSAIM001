// Write a program to Find sum and average of array.
#include <stdio.h>
int main()
{
    int arr[100], n;
    long long sum = 0;
    double average;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = (double)sum / n;
    printf("Sum of the array elements is: %lld\n", sum);
    printf("Average of the array elements is: %.2lf\n", average);
    return 0;
}