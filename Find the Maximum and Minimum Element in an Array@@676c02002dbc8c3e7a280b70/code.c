#include <stdio.h>

int main() {
    int N, i;
    printf(" ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter the array elements: ");
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0], max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("%d %d\n", min, max);

    return 0;
}