#include <stdio.h>
int main(){
    int k;
    if(scanf("%d",&k) != 1 || k<= 0){
        return 1;
    }
    for(int i=k; i >= 1; i--){
        for(int j=1; j<=i; j++){
           printf("*");
        }
        printf("\n");
    }
    return 0;
}