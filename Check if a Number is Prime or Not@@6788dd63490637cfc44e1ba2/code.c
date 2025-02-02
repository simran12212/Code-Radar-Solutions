#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(num<=1){
        printf("Not Prime");
    }
    int i;
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