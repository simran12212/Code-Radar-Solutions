#include <stdio.h>
#include <stdlib.h> // For the abs() function and qsort()

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void findMinDifferencePair(int arr[], int N) {
    // Handle the case where the array size is 1
    if (N < 2) {
        printf("-1\n");
        return;
    }

    // Sort the array
    qsort(arr, N, sizeof(int), compare);

    int minDiff = abs(arr[1] - arr[0]);
    int pair[2] = {arr[0], arr[1]}; // Initialize with the first pair

    // Traverse the sorted array to find the pair with the smallest difference
    for (int i = 1; i < N - 1; i++) {
        int diff = abs(arr[i + 1] - arr[i]);
        if (diff < minDiff) {
            minDiff = diff;
            pair[0] = arr[i];
            pair[1] = arr[i + 1];
        }
    }

    // Print the pair in ascending order
    printf("%d %d\n", pair[0], pair[1]);
}

int main() {
    int N;

    // Read the size of the array
    scanf("%d", &N);
    int arr[N];

    // Read array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the pair with the smallest difference
    findMinDifferencePair(arr, N);

    return 0;
}