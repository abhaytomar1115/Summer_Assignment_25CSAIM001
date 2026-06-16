// Write a program to Find maximum frequency element.
#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 2, 4, 2, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Find maximum frequency element
    int maxFreq = 0;
    int maxElement = arr[0];
    for (int i = 0; i < n; i++)
    {
        int freq = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                freq++;
            }
        }
        if (freq > maxFreq)
        {
            maxFreq = freq;
            maxElement = arr[i];
        }
    }

    printf("\nMaximum frequency element is: %d with frequency %d\n", maxElement, maxFreq);

    return 0;
}