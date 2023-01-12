#include<stdio.h>

int main(){
    int a,count;
    printf("enter the number:");
    scanf("%d",&a);
    if(a==2){
        printf("prime");
    }
    else{
        for(int i=1;i<=a;i++){
            count=a%i;
            count++;
            if(count=0){
                printf("prime");
            }
            else{
                printf("non prime");
            }
        }
    }
    return 0;
}