#include <stdio.h>
#include <limits.h>

int main() {
    int N, largestEven = INT_MIN;  // Initialize with smallest possible integer
    
    // Read the size of the array
    scanf("%d", &N);
    
    int arr[N];
    
    // Read array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        
        // Check if the number is even and larger than the current largest even number
        if (arr[i] % 2 == 0 && arr[i] > largestEven) {
            largestEven = arr[i];
        }
    }
    
    // Output the largest even number or -1 if no even number exists
    if (largestEven == INT_MIN) {
        printf("-1\n");
    } else {
        printf("%d\n", largestEven);
    }
    
    return 0;
}