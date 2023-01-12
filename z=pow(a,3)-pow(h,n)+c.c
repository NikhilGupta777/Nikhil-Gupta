#include<stdio.h>
#include<math.h>
int main(){
    int a,h,n,c,z;
    printf("enter the value of a,h,n,c");
    scanf("%d%d%d%d",&a,&h,&n,&c);
    z=pow(a,3)-pow(h,n)+c;
    printf("the value of z is:%d",z);
    return 0;
}
