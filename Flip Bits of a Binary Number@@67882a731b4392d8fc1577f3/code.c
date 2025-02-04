#include <stdio.h>
int main(){
    unsigned int num, flipped;
    scanf("%u", &num);
    flipped = ~num;
    printf("%u",flipped);
    return 0;
}