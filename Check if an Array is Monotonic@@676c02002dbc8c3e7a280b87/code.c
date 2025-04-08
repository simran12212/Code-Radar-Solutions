#include <stdio.h>

int isMonotonic(int arr[], int n) {
    int increasing = 1, decreasing = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            decreasing = 0; // Not decreasing
        }
        if (arr[i] < arr[i - 1]) {
            increasing = 0; // Not increasing
        }
    }

    return increasing || decreasing; // Returns 1 if monotonic, 0 otherwise
}

int main() {
    int n;
    scanf("%d", &n); // Read the number of elements

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read the array elements
    }

    if (isMonotonic(arr, n)) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}