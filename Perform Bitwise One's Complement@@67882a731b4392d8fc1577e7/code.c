#include <stdio.h>
int main(){
    int a,result;
    scanf("%d%d",&a,&result);
    result = ~a;
    printf("%d",result);
    return 0;
}