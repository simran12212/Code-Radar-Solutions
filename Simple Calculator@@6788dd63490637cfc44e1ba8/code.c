#include <stdio.h>
int main(){
    int a, b;
    char operator;
    scanf("%d %c %d", &a, &operator, &b);
    switch(opreator){
        case '+':
        printf("%d",a+b);
        case '-':
        printf("%d",a-b);
        case '*':
        printf("%d",a*b);
        case '/':
        if(b!=0){
            printf("%d",a/b);
        }
        else{
            printf("error");
        default:
        printf("error");
        }
        return 0;
    }