#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<=1){
        printf("Not Prime");
    }
    
    for( int i=2;i*i<=a;i++){
        if(a % i ==0){
            printf("Not Prime");
        }
    }
    else{
        printf("Prime");
    }
    return 0;
}