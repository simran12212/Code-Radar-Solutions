#include <stdio.h>

int findSmallestMissingPositive(int arr[], int N) {
    int hash[N + 1]; // Create a hash array
    for (int i = 0; i <= N; i++) {
        hash[i] = 0; // Initialize the hash array
    }

    // Mark elements in the hash array
    for (int i = 0; i < N; i++) {
        if (arr[i] > 0 && arr[i] <= N) {
            hash[arr[i]] = 1;
        }
    }

    // Find the first index in the hash array that is not marked
    for (int i = 1; i <= N; i++) {
        if (hash[i] == 0) {
            return i; // This is the missing positive integer
        }
    }

    return N + 1; // If all positive integers from 1 to n are present
}

int main() {
    int N;
    scanf("%d", &N); // Read the number of elements

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); // Read the array elements
    }

    int result = findSmallestMissingPositive(arr, N);
    printf("%d", result); // Output the smallest missing positive integer

    return 0;
}