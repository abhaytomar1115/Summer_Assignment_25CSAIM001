// Write a program to Find duplicates in array.

#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 30, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Duplicate elements in the array are: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
            }
        }
    }
    return 0;
}