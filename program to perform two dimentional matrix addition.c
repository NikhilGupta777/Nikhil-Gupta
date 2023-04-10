//C Program to perform Two Dimensional Matrix Addition
#include <stdio.h>
int main() {
    //Array Declaration and Variable Declaration
    int mat1[3][3],mat2[3][3],mat3[3][3];
    int r,c;
    // To read elements of matrix 1
    for (r = 0; r < 3; r++) {
        for(c = 0; c < 3; c++) {
            printf("ENTER VALUE AT mat1[%d][%d] :", r, c);
            scanf("%d", &mat1[r][c]);
        }
    }
    // To read elements of matrix 2
    for (r = 0; r < 3; r++) {
        for(c = 0; c < 3; c++) {
            printf("ENTER VALUE AT mat2[%d][%d] :", r, c);
            scanf("%d", &mat2[r][c]);
        }
    }
    // To Print elements of matrix 1
    printf("\n--------- MATRIX-1: \n");
    for (r = 0; r < 3; r++) {
        for(c = 0; c < 3; c++) {
            printf("%d ",mat1[r][c]);
        }
        printf("\n");
    }
    // To print elements of matrix 2
    printf("\n--------- MATRIX-2: \n");
    for (r = 0; r < 3; r++) {
        for(c = 0; c < 3; c++) {
            printf("%d ",mat2[r][c]);
        }
    printf("\n");
    }
    // To perform matrix addition
    printf("\n--------- ADDITION OF MATRICES: \n");
    for (r = 0; r < 3; r++) {
        for(c = 0; c < 3; c++) {
            mat3[r][c]=mat1[r][c]+mat2[r][c];
            printf("%d ",mat3[r][c]);
        }
        printf("\n");
    }
return 0;
}
