#include <stdio.h>
#include <stdlib.h>  // For the qsort function

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
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
    
    // Sort the array
    qsort(arr, N, sizeof(int), compare);
    
    int median;
    if (N % 2 == 0) {
        // If N is even, median is the average of the two middle elements
        median = (arr[N / 2 - 1] + arr[N / 2]) / 2;
    } else {
        // If N is odd, median is the middle element
        median = arr[N / 2];
    }
    
    // Output the median
    printf("%d\n", median);
    
    return 0;
}