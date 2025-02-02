#include <stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    if(num<=1){
        printf("Not Prime");
    }
    for( i=2;i*i<=a;i++){
        if(num % i ==0){
            printf("Not Prime");
        }
    }
    else{
        printf("Prime");
    }
    return 0;
}