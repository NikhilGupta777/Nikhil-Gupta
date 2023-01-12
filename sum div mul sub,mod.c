#include<stdio.h>
int main() {

    int a,b,sum,sub,mul,div,mod;
    printf("enter the value of first number:");
    scanf("%d",&a);
    printf("enter the value of second number:");
    scanf("%d",&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    printf("sum of two numbers is:%d",sum);
    printf("sub of two numbers is:%d",sub);
    printf("mul of two numbers is:%d",mul);
    printf("div of two numbers is:%d",div);
    printf("remainder of two numbers is:%d",mod);
    return 0;


}