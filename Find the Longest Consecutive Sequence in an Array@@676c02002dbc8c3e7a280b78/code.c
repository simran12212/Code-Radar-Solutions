#include <stdio.h>

int findLongestConsecutiveSequence(int arr[], int N) {
    int max_count = 0;

    for (int i = 0; i < N; i++) {
        int current = arr[i];
        int count = 1;

        for (int j = 0; j < N; j++) {
            if (arr[j] == current + 1) {
                current++;
                count++;
                j = -1; 
            }
        }

        if (count > max_count) {
            max_count = count;
        }
    }

    return max_count;
}

int main() {
    int N;
    scanf("%d", &N); 

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); 
    }

    int longestSequence = findLongestConsecutiveSequence(arr, N);
    printf("%d", longestSequence); 

    return 0;
}