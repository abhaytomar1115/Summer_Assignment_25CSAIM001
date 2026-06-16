// Write a program to Remove duplicates from array.

#include <stdio.h>

// Function returns the new size of the array
int removeDuplicates(int arr[], int n)
{
    if (n == 0 || n == 1)
        return n;

    int j = 0; // Index for unique elements

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[n - 1]; // Move last element

    return j;
}

int main()
{
    // Note: The array must be sorted for this in-place method
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int new_size = removeDuplicates(arr, n);

    // Print unique array
    for (int i = 0; i < new_size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
