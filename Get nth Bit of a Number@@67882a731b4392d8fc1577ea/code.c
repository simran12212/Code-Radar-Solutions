#include <stdio.h>
int main(){
    int num, n, bit;
    scanf("%d %d", &num, &n);
    bit = (num >>n) & 1;
    printf("%d\n", bit);
    return 0;
}