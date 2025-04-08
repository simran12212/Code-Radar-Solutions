#include <stdio.h>

int findMaxFrequencyElement(int arr[], int n) {
    int maxCount = 0, maxElement = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    return maxElement;
}

int main() {
    int n;
    scanf("%d", &n); 

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    int result = findMaxFrequencyElement(arr, n);
    printf("%d", result); 

    return 0;
}