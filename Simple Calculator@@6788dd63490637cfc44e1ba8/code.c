#include <stdio.h>
int main(){
    int a,b;
    char operator;
    scanf("%d %c %d",&a ,&operator, &b);
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
        if(b !=0)
        printf("%d\n",a/b);
        else
        printf("Error\n")
        default:
        printf("Error\n");
        break;
    }
    return 0;
}