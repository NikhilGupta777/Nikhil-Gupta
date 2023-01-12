#include<stdio.h>
int main(){
    int a,b,c,p;
    printf("enter number");
    scanf("%d",&p);
    a=p/100;
    b=(p%100)/10;
    c=p%10;
    printf("%d%d%d",c,b,a);
    return 0;
}