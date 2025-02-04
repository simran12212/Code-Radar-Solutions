#include <stdio.h>
int main(){
    int num, lowest;
    scanf("%d\n", &num);
    lowest = num & -num;
    printf("%d\n",lowest);
    return 0;
}