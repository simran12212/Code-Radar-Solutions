#include <stdio.h>

int main() {
    int N;
    
    // Read the size of the array
    scanf("%d", &N);
    int arr[N];
    
    // Read array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Find the duplicate element
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] == arr[j]) {
                printf("%d\n", arr[i]);  // Output the duplicate element
                return 0;               // Exit once duplicate is found
            }
        }
    }
    
    return 0;
}