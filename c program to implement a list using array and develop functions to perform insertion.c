 //C program to Implement a List using Array and develop function to perform insertion
 #include <stdio.h>
 int main()
{
    int arr[100];
    int i, item, pos, n;

    printf("Enter the number of elements? ");
    scanf("%d",&n);

    // reading array
    printf("Enter array elements:");
    for (i = 0; i < n; i++)
        scanf("%d",&arr[i]);

    // print the original array
    printf("Array before insertion: ");

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // read element to be inserted
    printf("Enter the element to be inserted: ");
    scanf("%d",&item);

    // read position at which element is to be inserted
    printf("Enter the position at which the element is to be inserted: ");
    scanf("%d",&pos);

    // increase the size
    n++;

    // shift elements forward
    for (i = n-1; i >= pos; i--)
        arr[i] = arr[i - 1];

    // insert item at position
    arr[pos - 1] = item;

    // print the updated array
    printf("Array after insertion: ");

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}


