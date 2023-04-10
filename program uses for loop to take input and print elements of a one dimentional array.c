// Program uses for loop to take input and print elements of a one-dimensional array
// Header Files
#include<stdio.h>
// Start of main function
int main()
{
    // variable and array Declaration
    int arr[5], i;
    /*for loop to take input elements from
    the user and store it in an array element*/
    for(i = 0; i < 5; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nPrinting elements of the array: \n\n");
    //for loop to print an individual element of an array.
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    // signal to operating system program ran fine
    return 0;
}
