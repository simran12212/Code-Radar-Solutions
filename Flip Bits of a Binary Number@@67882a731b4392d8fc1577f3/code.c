#include <stdio.h>
int main(){
     int num, flipped;
    scanf("%d", &num);
    flipped = ~num;
    printf("%d\n",flipped);
    return 0;
}