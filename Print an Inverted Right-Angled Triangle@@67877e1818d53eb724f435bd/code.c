#include <stdio.h>
int main(){
    int n;
    printf("");
    scanf("%d",&n);
    if(n <=0){
        printf("invalid number");
        return 1;
    }
    
    for(int i=n; i >= 1; i--){
        for(int j=1; j<=i; j++){
           printf("*");
        }
        printf("\n");
    }
    return 0;
}