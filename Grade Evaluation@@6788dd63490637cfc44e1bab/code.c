#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case (ch=='A'):
        printf("Excellent\n");
        break;
        case (ch=='B');
        printf("Good\n");
        break;
        case (ch=='C');
        printf("Average\n");
        break;
        case (ch=='D');
        printf("Below Average\n");
        break;
        case (ch=='F');
        printf("Fail\n");
        break;
        default:
        printf("Invalid grade\n");
        break;
    }
    return 0;
}