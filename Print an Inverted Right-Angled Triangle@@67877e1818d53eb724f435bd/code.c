#include <stdio.h>
int main(){
    int k;
    scanf("%d",&k);
    for(int i=k;i >= 1; i--){
        for(int j=1;j<=i;j++){
           printf("*");
        }
        printf("\n");
    }
    
    return 0;

}