//count=0 to discard its garbage value and initialise its value as 0
#include<stdio.h>
int main(){
    int n,i,count=0;
    printf("enter the number to check its prime or not");
    scanf("%d",&n);
    i=2;
    while(i<=n/2){
        if(n%i==0){
            count=1;
            break;
        }
        i++;
    }
    if(count==0){
    printf("%d,is a prime number",n);}
    else{
    printf("%d, is not a prime number",n);}
    
    return 0;
}