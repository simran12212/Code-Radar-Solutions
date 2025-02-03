#include <stdio.h>
int main(){
    int num, bits, msb;
    scanf("%d%d%d",&num,&bits,&msb);
    bits = sizeof(int) *8;
    msb = (num >> (bits - 1)) & 1;
    printf("Set");
    else{
        printf("Not Set");
    }
    return 0;
}