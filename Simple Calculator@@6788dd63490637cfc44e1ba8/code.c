#include <stdio.h>
int main(){
    int a, b;
    char operator;
    scanf("%d %c %d", &a, &operator, &b);
    switch(operator){
        case '+':
        printf("%d\n",a+b);
        break;
        case '-':
        printf("%d\n",a-b);
        break;
        case '*':
        printf("%d\n",a*b);
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
        printf("error\n");
        break;
     }
     return 0;
}