#include <stdio.h>

int main() {
    int n, k, count = 0;

    // Input the size of the array and the value of K
    printf("Enter the number of elements (N) and the value to count (K): ");
    scanf("%d %d", &n, &k);

    int array[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        if (array[i] == k) {
            count++; // Increment count if the element matches K
        }
    }

    // Output the count
    printf("%d\n", count);

    return 0;
}