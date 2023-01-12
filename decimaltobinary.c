#include<stdio.h>
int main(){
    int num,sum=0,rem,i=1;
    printf("enter decimal:");
    scanf("%d",&num);
    printf("binary equivalnt of %d is:",num);
    while(num){
        rem=num%2;
        num=num/2;
        sum=sum+(rem*i);
        i=i*10;
    }
    printf("%d\n",sum);
    return 0;
}