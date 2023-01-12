// This is program to write the area of circle, square and triangle
#include<stdio.h>
#include<math.h>
int main(){
    float radius,side;
    float a,b,c,s,area;
    
    //area of circle
    printf("\n welcome!\n");
    printf("\n----------------------\n");
    printf("<area of circle> \n");
    printf("------------------------\n");
    printf("\nenter the radius of circle:");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    printf("the area of the circle is:%.3f",area);
    
    //area of square 
    printf("\n \n ");
    printf("\n----------------------\n");
    printf("<area of square> \n");
    printf("------------------------\n");
     printf("\nenter the length of the side:");
    scanf("%f",&side);
    area=side*side;
    printf("area of the square is:%f",area);
    
    //area of triangle
    printf("\n  \n ");
    printf("\n-----------------------\n");
    printf("<area of triangle> \n");
    printf("-------------------------\n");
    printf("\nenter the three sides of the triangle:");
    scanf("%f%f%f",&a,&b,&c);  
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the area of the triangle is:%.5f",area);
    printf("\n  \n");
    printf("\n  \n");
    printf("\nsuccessively executed the program for area of circle,square and triangle!");
    return 0;
    
    
}
