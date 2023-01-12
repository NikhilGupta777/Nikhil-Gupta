#include<stdio.h>
int main(){
    int calls,amount;
    printf("enter number of calls made: ");
    scanf("%d",&calls);
    if(calls<=200){
        printf("you have not passed the limit of free calls!\n");
        printf("no charge!\n");
    }
    else if(calls>200 && calls<=500){
        amount=calls-200;
    }
    else if(calls>500){
        amount=(calls-500)*2+300;
    }
    printf("Amount payable: %d",amount);
    return 0;
}
