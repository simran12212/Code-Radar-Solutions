#include <stdio.h>
int main(){
    int N;
    scanf("%d\n",&N);
    for (int i=1; i <= 10; i++){
        printf("%d * %d = %d", N, i, N * i);
    }
    printf("\n");
    return 0;
}