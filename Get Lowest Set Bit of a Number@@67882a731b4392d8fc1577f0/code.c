#include <stdio.h>
int main(){
    int num, pos = 0;
    scanf("%d\n", &num);
    while((num & 1) == 0 && num >0){
        num >>= 1;
        pos++;
    }
    printf("%d\n",pos);
    return 0;
}