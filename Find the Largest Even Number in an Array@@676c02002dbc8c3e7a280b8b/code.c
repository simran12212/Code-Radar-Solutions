#include <stdio.h>

int main() {
    int n, i, largestEven = -1;

    printf("");
    scanf("%d", &n);

    int array[n];
    printf("\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        if (array[i] % 2 == 0 && array[i] > largestEven) {
            largestEven = array[i];
        }
    }

    // Output the result
    printf(" %d\n", largestEven);

    return 0;
}