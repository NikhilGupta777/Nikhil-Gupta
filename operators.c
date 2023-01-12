#include<stdio.h>
int main(){
    char op;
    float a,b;
    printf("enter the value of a:");
    scanf("%f",&a);
    printf("enter the value of b:");
    scanf("%f",&b);
    printf("enter your choice:");
    scanf("%c",&op);
    switch(op)
    {
        case '+':
        printf("%f+%f=%f",a,b,a+b);
        break;
        case '*':
        printf("%f*%f=%f",a,b,a*b);
        break;
        case '-':
        printf("%f-%f=%f",a,b,a-b);
        break;
        case '/':
        printf("%f/%f=%f",a,b,a/b);
        default:
        printf("Error! operator is not correct");
        break;
    }
    return 0;
}