#include <stdio.h>
int main(){
    int k;
    scanf("%d",&k);
    for(i=k;i>=1;i--){
        for(j=1,j<=i,j++){
           printf("*");
        }
        printf("\n");
    }
    
    return 0;

}