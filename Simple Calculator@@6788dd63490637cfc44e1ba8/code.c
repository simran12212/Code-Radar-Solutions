#include <stdio.h>
int main(){
    int a, b;
    char operator;
    scanf("%d %c %d", &a, &operator, &b);
    if(operator=='+'){
        printf("%d/n",a + b);
    }
    else if(operator=='-'){
        printf("%d\n",a - b);
    }
    else if(operator=='*'){
        printf("%d\n",a * b);
    }
    else if(operator=='/'){
        if(b!=0){
            printf("%d\n",a / b);
        }
            else{
                printf("Error\n");
        }
    }
    return 0;
}