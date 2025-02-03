#include <stdio.h>
int main(){
    int a, b;
    char operator;
    scanf("%d %c %d", &a, &operator, &b);
    switch(operator){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        if(b==0){
            printf("error\n");
        }
        else{
            printf("%d\n",a/b);
            break;
        }
        default:
        printf("error");
        break;
        return 0;
     }
}