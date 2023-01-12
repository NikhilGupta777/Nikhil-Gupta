#include<stdio.h>
void main(){
    int a,b;
    printf("Please enter the value of a:\n");
    scanf("%d",a);
    printf("Please enter the value of b:");
    scanf("%d",&b);
    if(a&&b){
        printf("line 1--condition is true!\n");
    }
    else{
        printf("line 1--condition is false!\n");
    }
    if(a||b){
        printf("line 2--condition is true!\n");
    }
    else{
        printf("line 2--condition is false!\n");
    }
    if(!(a&&b)){
        printf("line 3--condition is true\n");
    }
    else{
        printf("line 3--condition is false\n");
    }
    return 0;
}