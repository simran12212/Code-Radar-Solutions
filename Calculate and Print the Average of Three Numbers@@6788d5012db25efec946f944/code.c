#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%f",&a);
    printf("enter the number: %f");
    scanf("%f",&b);
    printf("enter the number: %f");
    scanf("%f",&c);
    printf("enter the number: %f");
    float avg = (a+b+c)/3.0;
    printf("Average: %.2f\n", avg);
    return 0;
}