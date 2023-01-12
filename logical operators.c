#include<stdio.h>
int main(){
    int a,b;
    printf("Please enter tha value of a:");
    scanf("%d",&a);
    printf("Please enter the value of b:");
    scanf("%d",&b);
    if(a>b){
        printf("line 1--value of a is greater than b (TRUE)\n");
    }
    else{
        printf("line 1--value of a is less than b (false)\n");
    }
    if(a<b){
        printf("line 2--value of a is less than b (true)\n");
    }
    else{
        printf("line 2--value of a is greater than b (false)\n");
    }
    if(a==b){
        printf("line 3--value of a is equal to b (true)\n");
    }
    else{
        printf("line 3--value of a is not equal to b (false)\n");
    }
    if(!(a&b)){
        printf("line 4--value of a is not equal to b (true)\n");
    }
    else{
        printf("line 4--value of a is equal to b (flase)\n");   
    }
    return 0;



}