#include<stdio.h>
#include<math.h>
int main(){
    float area_of_circle,area_of_square,area_of_rectangle,radius,side,length,breadth;
    int password;
    printf("welcome to area finder!\n");
    start:
    printf("\nenter password to access the area finder:");
    scanf("%d",&password);
    if(password==6969){
        printf("enter the radius of the circle:\n");
        scanf("%f",&radius);
        printf("enter the side of square:\n");
        scanf("%f",&side);
        printf("enter the length and breadth of the rectangle:\n");
        scanf("%f%f",&length,&breadth);
        area_of_circle=3.14*pow(radius,2);     
        area_of_square=pow(side,2);
        area_of_rectangle=length*breadth;
        printf("the area of circle is:%.3f\nThe area of square is:%.2f\nThe area of rectangle is:%.1f\n",area_of_circle,area_of_square,area_of_rectangle);
    }
    else{
        printf("WRONG PASSWORD!!!!!!!!!!!!!!!!!!!");
        goto start;
    }
    return 0;
}