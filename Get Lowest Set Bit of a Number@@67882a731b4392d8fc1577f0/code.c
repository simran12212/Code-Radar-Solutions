#include <stdio.h>
int main(){
    int num, lowest;
    scanf("%d",&num);
    lowest = num & -num;
    printf("%d",lowest);
    return 0;
}