#include <stdio.h>

int main() {
    int N, i, largestEven = -1;

    printf("");
    scanf("%d", &N);

    int array[N];
    printf("\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &array[i]);
        if (array[i] % 2 == 0) { 
            if (largestEven == -1 || array[i] > largestEven) {
                largestEven = array[i]; 
            }
        }
    }

    printf("%d\n", largestEven);

    return 0;
}