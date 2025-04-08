#include <stdio.h>

void calculateRunningSum(int arr[], int n) {
    int runningSum[n];
    runningSum[0] = arr[0]; // Initialize the first element

    for (int i = 1; i < n; i++) {
        runningSum[i] = runningSum[i - 1] + arr[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", runningSum[i]); // Print the running sum
    }
}

int main() {
    int n;
    scanf("%d", &n); // Read the size of the array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read the array elements
    }

    calculateRunningSum(arr, n);

    return 0;
}