#include <stdio.h>

int main() {
    int N, i, j;
    scanf("%d", &N); 

    int arr[N], freq[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]); 
        freq[i] = -1;
    }

    for (i = 0; i < N; i++) {
        int count = 1;
        for (j = i + 1; j < N; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0; 
            }
        }
        if (freq[i] != 0) {
            freq[i] = count; // Store frequency for unvisited elements
        }
    }

    
    for (i = 0; i < N; i++) {
        if (freq[i] != 0) { // Only print non-visited elements
            printf("%d %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}