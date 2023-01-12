#include<stdio.h>
 void main(){
     int i,j;
        for(i=1;i<11;i++){
             for(j=1;j<=21;j++){
                 if(j==1||j==2||j==7||i==5||i==6||i==1||i==10){
                 printf("*");
                 }
                 else{
                     printf(" ");
                 }
             }  printf("\n");
             }
 }