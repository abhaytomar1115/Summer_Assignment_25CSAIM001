// Write a program to Find missing number in array.

#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int total = (n + 1) * (n + 2) / 2; // Sum of first n natural numbers
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int missingNumber = total - sum;
    printf("Missing number is: %d\n", missingNumber);
    return 0;
}