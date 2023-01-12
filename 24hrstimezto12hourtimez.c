#include<stdio.h>
int main(){
    int t4hours;
    int minutes;
    int t2hours;
    printf("enter a 24 hour time zone:");
    scanf("%d:%d",&t4hours,&minutes);
    if(t4hours<0 || t4hours>24){
        printf("invalid time!!\n");
    }
    if(minutes<0 ||minutes>60){
        printf("invalid minutes!!\n");
    }
    else if(t4hours<=12 &&t4hours>0)
    t4hours=t2hours;
    else if(t4hours>=13 &&t4hours<=24)
    t2hours=t4hours-12;
    printf("the equivalent 12 hour time zone is: %d:%.2d\n ",t2hours,minutes);
    if(t4hours/12==1){
        printf("PM\n");
    }
    else{
        printf("AM\n");
    }
    return 0;
}                                                                                       