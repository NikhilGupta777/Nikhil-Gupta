#include<stdio.h>
int main(){
    int var1,var2;
    printf("enter the variable 1:");
    scanf("%d",&var1);
    printf("enter the variable 2:");
    scanf("%d",&var2);
    if(var1>var2)
    printf("the value of variable 1 is greater than variable 2");
    if(var1<var2)
    printf("tha value of variable 2 is greater than variable 1");
    return 0;
}