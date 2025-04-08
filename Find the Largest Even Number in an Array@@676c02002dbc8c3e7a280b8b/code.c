#include <stdio.h>

int main() {
    int N, largestEven = -1;
    
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
    printf("%d\n", largestEven);
    
    return 0;
}