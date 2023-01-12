//gross salary calculator
#include<stdio.h>
int main(){
    float basics,da,hra,salary;
    printf("enter your basic salary:");
    scanf("%f",&basics);
    if (basics<=10000){        
        da=0.10*(basics);
        hra=0.2*(basics);
        salary=(basics)+(da)+(hra);
        printf("your salary is:%f",salary);


    }
    else if((basics>=10000)&&(basics<=20000)){      
        da=0.15*(basics);
        hra=0.5*(basics);
        salary=(basics)+(da)+(hra);
        printf("your salary is:%f",salary);

    }
    else if((basics>=20000)&&(basics<=50000)){      
        da=0.20*(basics);
        hra=0.10*(basics);
        salary=(basics)+(da)+(hra);
        printf("your salary is:%f",salary);

    }
    else if((basics>=50000)){       
        da=0.30*(basics);
        hra=0.15*(basics);
        salary=(basics)+(da)+(hra);
        printf("your salary is:%f",salary);


    }
    return 0;
}



