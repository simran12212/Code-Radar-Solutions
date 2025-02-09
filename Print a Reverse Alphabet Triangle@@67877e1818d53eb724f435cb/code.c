#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for (int i = N; i >= 1; i--) {
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c", ch);
            if (ch < 'A' + i - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}