#include <stdio.h>

int main() {
    int N, i, largestEven = -1;

    printf("");
    scanf("%d", &N);

    int array[N];
    printf("\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &array[i]);
        if (array[i] % 2 == 0 && array[i] > largestEven) {
            largestEven = array[i];
        }
    }

    // Ensure proper spacing in the output
    printf("%d\n", largestEven);

    return 0;
}