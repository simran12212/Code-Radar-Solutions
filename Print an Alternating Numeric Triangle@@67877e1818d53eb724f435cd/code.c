#include <stdio.h>
int main() {
    int N;
    scan("%d", &N);
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", (i + j) % 2);
            if (j < i) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}