#include<stdio.h>
void main(){
    int a,b,sum,mul,div,sub,password;
    printf("\nWelcome to scientific calculator!\n");
    printf("\nx-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x\n");
    end:
    printf("\nEnter password:");
    scanf("%d",&password);
    if(password==1234){
        printf("enter the first number:");
        scanf("%d",&a);
        printf("enter the second number:");
        scanf("%d",&b);
        sum=a+b;
        mul=a*b;
        div=a/b;
        sub=a-b;
        printf("sum of the numbers is:%d\n",sum);
        printf("multiplication of the numbers is:%d\n",mul);
        printf("division of the numbers is:%d\n",div);
        printf("subtraction of the numbers is:%d\n",sub);
    }    
    else{
        printf("wrong password!!!");
        goto end;
    }
}
