#include <stdio.h>
#include <stdbool.h>

// Function to check for duplicates in already printed pairs
bool isDuplicate(int x, int y, int pairs[][2], int count) {
    for (int i = 0; i < count; i++) {
        if ((pairs[i][0] == x && pairs[i][1] == y) || (pairs[i][0] == y && pairs[i][1] == x)) {
            return true;
        }
    }
    return false;
}

void findPairs(int arr[], int N, int T) {
    int pairs[N][2]; // Array to store unique pairs
    int count = 0;   // Count of unique pairs

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] + arr[j] == T) {
                // Check for duplicate pairs
                if (!isDuplicate(arr[i], arr[j], pairs, count)) {
                    pairs[count][0] = arr[i];
                    pairs[count][1] = arr[j];
                    count++;
                    printf("%d %d\n", arr[i], arr[j]);
                }
            }
        }
    }
}

int main() {
    int N, T;

    // Read the size of the array
    scanf("%d", &N);
    int arr[N];
    
    // Read array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read the target sum
    scanf("%d", &T);
    
    // Find and print unique pairs
    findPairs(arr, N, T);
    
    return 0;
}