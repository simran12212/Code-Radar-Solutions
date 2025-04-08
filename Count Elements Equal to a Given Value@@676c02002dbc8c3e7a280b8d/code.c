#include <stdio.h>

int main() {
    int N, K, count = 0;
    
    // Read the size of the array (N) and the target value (K)
    scanf("%d %d", &N, &K);
    
    int arr[N];
    
    // Read array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        
        // Check if the current element is equal to K
        if (arr[i] == K) {
            count++;
        }
    }
    
    // Output the count of elements equal to K
    printf("%d\n", count);
    
    return 0;
}