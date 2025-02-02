#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<=1){
        printf("Not Prime\n");
    }
    int i;
    for( i=2;i*i<=a;i++){
        if(a % i ==0){
            printf("Not Prime\n");
        }
    }
    else{
        printf("Prime\n");
    }
    return 0;
}