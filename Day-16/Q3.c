// Write a program to Find pair with given sum.

#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                printf("Pair with given sum is: %d and %d\n", arr[i], arr[j]);
            }
        }
    }
    return 0;
}