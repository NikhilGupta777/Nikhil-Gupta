//C program to read and print elements in two dimensional array
// C program to input 2D array elements and Display
#include <stdio.h>
int main() {
	//Array Declaration and Variable Declaration
	//3 Rows and 3 Columns are declared in array named as marks
	int marks[3][3];
	int r,c;
	// To read elements of two dimensional array
	for (r = 0; r < 3; r++) {
   		for(c = 0; c < 3; c++) {
         	printf("ENTER VALUE AT marks[%d][%d] : ", r, c);
         	scanf("%d", &marks[r][c]);
   		}
	}
	// To print elements of two dimensional array
	printf("2D Array Values are: \n");
	for (r = 0; r < 3; r++) {
   		printf("\nROW %d :  ",r);
   		for(c = 0; c < 3; c++) {
        	printf("%d ",marks[r][c]);
   		}
	}
	return 0;
}
