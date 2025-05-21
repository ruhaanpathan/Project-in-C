#include <stdio.h>
#include <stdlib.h>

int bubble_sort_count_swaps(int arr[], int n, int ascending) {
    int swap_count = 0;
    int swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = 0; // Flag to detect if a swap occurred
        for (int j = 0; j < n - i - 1; j++) {
            if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1])) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap_count++;
                swapped = 1; // Mark that a swap occurred
            }
        }
        if (!swapped) {
            break; // No swaps means the array is already sorted
        }
    }
    return swap_count;
}

int main() {
    int N;
    if (scanf("%d", &N) != 1 || N <= 0 || N >= 1000) {
        fprintf(stderr, "Invalid input for N\n");
        return 1;
    }

    int *arr = malloc(N * sizeof(int));
    if (!arr) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1; // Error
    }

    for (int i = 0; i < N; i++) {
        if (scanf("%d", &arr[i]) != 1 || arr[i] <= 0 || arr[i] >= 1000) {
            fprintf(stderr, "Invalid input for array element\n");
            free(arr);
            return 1; // Error
        }
    }

    // Create a copy of the array for ascending sort
    int *asc_arr = malloc(N * sizeof(int));
    int *desc_arr = malloc(N * sizeof(int));
    if (!asc_arr || !desc_arr) {
        fprintf(stderr, "Memory allocation failed\n");
        free(arr);
        return 1; // Error
    }

    // Copy original array to both ascending and descending arrays
    for (int i = 0; i < N; i++) {
        asc_arr[i] = arr[i];
        desc_arr[i] = arr[i];
    }

    // Count swaps for ascending and descending order
    int asc_swaps = bubble_sort_count_swaps(asc_arr, N, 1);
    int desc_swaps = bubble_sort_count_swaps(desc_arr, N, 0);

    // Find the minimum swaps
    int min_swaps = asc_swaps < desc_swaps ? asc_swaps : desc_swaps;

    // Output the result
    printf("%d\n", min_swaps);

    // Free allocated memory
    free(arr);
    free(asc_arr);
    free(desc_arr);
    return 0;
}
