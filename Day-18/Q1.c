// Write a program to Bubble sort.

#include <stdio.h>

// Function to perform an optimized Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int swapped;

    // Outer loop for the number of passes
    for (i = 0; i < n - 1; i++) {
        swapped = 0; // Reset tracking flag for each pass

        // Inner loop to compare adjacent elements
        for (j = 0; j < n - i - 1; j++) {
            // Change '>' to '<' to sort the array in descending order
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
                swapped = 1; // Mark that a swap occurred
            }
        }

        // If no elements were swapped in this pass, the array is already sorted
        if (swapped == 0) {
            break;
        }
    }
}

// Function to print the utility array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Example unsorted array
    int data[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(data) / sizeof(data[0]);

    printf("Original array:\n");
    printArray(data, n);

    // Perform sorting
    bubbleSort(data, n);

    printf("Sorted array in ascending order:\n");
    printArray(data, n);

    return 0;
}
