#include <stdio.h>
int main(){
     int num, flipped;
    scanf("%u\n", &num);
    flipped = ~num;
    printf("%u\n",flipped);
    return 0;
}