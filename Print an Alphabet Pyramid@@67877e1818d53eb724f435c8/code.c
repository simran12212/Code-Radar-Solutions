#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for (int i = 1; i <=N; i++) {
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        for (char ch = 'A'; ch < 'A' + i; ch++){
            printf("%c", ch);
            if (ch < 'A' + i - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}