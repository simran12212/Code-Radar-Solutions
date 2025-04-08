#include <stdio.h>

int findFirstRepeating(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return arr[i]; // Return the first repeating element
            }
        }
    }
    return -1; // Return -1 if no repeating element is found
}

int main() {
    int n;
    scanf("%d", &n); // Read the number of elements

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read the array elements
    }

    int result = findFirstRepeating(arr, n);
    if (result != -1) {
        printf("%d", result); // Print the first repeating element
    } else {
        printf("No repeating element");
    }

    return 0;
}