#include <stdio.h>
int main()
{
start:
    char gender;
    float Salary, Bonus;
    printf("PLEASE ENTER YOUR GENDER\n 1.MALE-(M)\n 2.FEMALE-(F)\n");
    scanf("%c", &gender);

    switch (gender)

    {

    case('M'):
    case('m'):

        printf("Enter the salary of the employee:");
        scanf("%f", &Salary);

        if (Salary > 10000)
        {
            Bonus = Salary * 0.05;
        }

        else if (Salary <= 10000)
        {
            Bonus = Salary * 0.07;
        }

        else
        {
            printf("------------INVALID INPUT---------------");
            printf("\n PLEASE ENTER THE CORRECT INPUT ");
        }

        break;

    case('F'):
    case('f'):

        printf("Enter the salary of the employee:");
        scanf("%f", &Salary);

        if (Salary > 10000)
        {
            Bonus = Salary * 0.10;
        }

        else if (Salary <= 10000)
        {
            Bonus = Salary * 0.12;
        }

        else
        {
            printf("------------INVALID INPUT---------------");
            printf("\n PLEASE ENTER THE CORRECT INPUT ");
        }

        break;

    default:

        printf("------------INVALID INPUT---------------");
        printf("\n PLEASE ENTER THE CORRECT INPUT ");

        goto start;
        
    }

    printf("Bonus is %.3f", Bonus);
    printf("\nSalary after bonus is %.3f", Salary + Bonus);

    return 0;

}