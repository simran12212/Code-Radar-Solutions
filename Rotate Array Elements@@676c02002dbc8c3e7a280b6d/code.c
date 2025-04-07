#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateArray(int arr[], int n, int k) {
    k %= n; // Handle cases where k >= n
    reverse(arr, 0, n - 1);      // Reverse the entire array
    reverse(arr, 0, k - 1);      // Reverse the first k elements
    reverse(arr, k, n - 1);      // Reverse the remaining elements
}

int main() {
    int n, k;
    
    // Input size of array
    scanf("%d", &n);
    int arr[n];
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input number of positions to rotate
    scanf("%d", &k);
    
    // Rotate the array
    rotateArray(arr, n, k);
    
    // Output rotated array on a new line
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}