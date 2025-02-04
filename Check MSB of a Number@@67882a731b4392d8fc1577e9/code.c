#include <stdio.h>
int main(){
    int num, bits, msb;
    scanf("%d%",&num);
    bits = sizeof(int) *8;
    msb = (num >> (bits - 1)) & 1;
    if(msb)
    printf("Set");
    else{
        printf("Not Set");
    }
    return 0;
}  