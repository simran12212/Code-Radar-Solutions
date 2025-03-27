#include <stdio.h>

int main() {
    int arr1[5], arr2[5], arr3[10]; // Declare three arrays

    // Input first array from user
    printf("Enter 5 elements for the first array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input second array from user
    printf("Enter 5 elements for the second array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr2[i]);
    }

    // Combine both arrays into the third array
    for (int i = 0; i < 5; i++) {
        arr3[i] = arr1[i];       // Copy elements of the first array
        arr3[i + 5] = arr2[i];   // Copy elements of the second array
    }

    // Print the third array
    printf("\nThe combined array is:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}