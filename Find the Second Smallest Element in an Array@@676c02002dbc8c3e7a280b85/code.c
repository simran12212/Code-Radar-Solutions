#include <stdio.h>

int findSecondSmallest(int arr[], int n) {
    if (n < 2) {
        return -1; 
    }

    int smallest = 1e9, secondSmallest = 1e9; 

    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest; 
            smallest = arr[i];         // Update smallest
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i]; // Update second smallest if distinct
        }
    }

    // Check if a valid second smallest was found
    return (secondSmallest == 1e9) ? -1 : secondSmallest;
}

int main() {
    int n;
    scanf("%d", &n); // Read the number of elements

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read the array elements
    }

    int result = findSecondSmallest(arr, n);
    printf("%d", result); // Output the second smallest or -1

    return 0;
}