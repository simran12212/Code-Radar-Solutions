#include <stdio.h>
int main(){
    int age,status;
    scanf("%d %d",&age ,&status);
    if((age>=18) && (status==0 || status==1)){
        printf("Eligible\n");
    }
    return 0;
    else{
        printf("Not Eligible\n");
    }
    return 0;
}