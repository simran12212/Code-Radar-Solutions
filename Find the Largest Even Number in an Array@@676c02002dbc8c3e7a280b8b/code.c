#include <stdio.h>

int main() {
    int n, i, largestEven = -1;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        if (array[i] % 2 == 0 && array[i] > largestEven) {
            largestEven = array[i];
        }
    }

    // Ensure proper spacing in the output
    printf("The largest even number is: %d\n", largestEven);

    return 0;
}