#include<stdio.h>
int main(){
    int i,j,rem;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            rem=(i+j+1)%2;
            printf("%d",rem);
        }
        printf("\n");
    }
    return 0;
}