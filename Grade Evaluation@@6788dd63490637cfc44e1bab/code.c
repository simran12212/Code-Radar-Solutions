#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case (ch=='A'):
        printf("Excellent");
        break;
        case (ch=='B');
        printf("Good");
        break;
        case (ch=='C');
        printf("Average");
        break;
        case (ch=='D');
        printf("Below Average");
        break;
        case (ch=='F');
        printf("Fail");
        break;
        default:
        printf("Invalid grade");
        break;
    }
    return 0;
}