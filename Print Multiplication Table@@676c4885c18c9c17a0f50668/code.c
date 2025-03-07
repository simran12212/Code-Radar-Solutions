#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= 10; i++) {
        printf("%d \u00D7 %d = %d", N, i, N * i);
        if (i < 10) {
            printf("\n");
        }
    }
    return 0;
}