#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    char ch = 'A';
    for (int i = 1; i <=N; i++) {
        ch = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
       
        printf("\n");
    }
    return 0;
}