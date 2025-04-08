#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    
    // Read the size of the array
    scanf("%d", &N);
    int arr[N];
    
    // Read array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Frequency array
    int freq[10001] = {0}; // Assuming numbers range from 0 to 10000
    
    // Calculate frequency of each number
    for (int i = 0; i < N; i++) {
        freq[arr[i]]++;
    }
    
    // Find the element with the maximum frequency
    int maxFreq = 0, result = INT_MAX;
    for (int i = 0; i <= 10000; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = i;
        } else if (freq[i] == maxFreq && i < result) {
            result = i; // Choose the smallest number in case of a tie
        }
    }
    
    // Output the result
    printf("%d\n", result);
    
    return 0;
}