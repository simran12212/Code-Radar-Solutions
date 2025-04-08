#include <stdio.h>

void findLeaders(int arr[], int N) {
    int maxFromRight = arr[N - 1];  // Start with the last element
    printf("%d ", maxFromRight);   // The last element is always a leader
    
    for (int i = N - 2; i >= 0; i--) {  // Traverse the array from right to left
        if (arr[i] > maxFromRight) {
            maxFromRight = arr[i];
            printf("%d ", maxFromRight);  // Print the leader
        }
    }
    printf("\n");
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
    
    // Find and print leaders in the array
    findLeaders(arr, N);
    
    return 0;
}