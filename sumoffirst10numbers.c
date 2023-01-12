#include<stdio.h>
void main(){
    int i,sum=0;
    i=1;
    while(i<=10){
        sum=sum+i;
    }
    i++;
    printf("sum of first 10 numbers is:%d",sum);
}