#include <stdio.h>

void findLeaders(int arr[], int N) {
    int leaders[N];  // Array to store leaders
    int count = 0;   // Number of leaders found
    int maxFromRight = arr[N - 1];

    // The last element is always a leader
    leaders[count++] = maxFromRight;

    // Traverse the array from right to left
    for (int i = N - 2; i >= 0; i--) {
        if (arr[i] > maxFromRight) {
            maxFromRight = arr[i];
            leaders[count++] = maxFromRight;  // Store the leader
        }
    }

    // Print leaders in reverse order to match the required order
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
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