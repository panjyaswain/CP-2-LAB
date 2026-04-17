//Create a program to calculate the transpose of a matrix using call by reference.//
#include <stdio.h>

void transpose(int mat[10][10], int r, int c) {
    int i, j;

    printf("Transpose matrix:\n");
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            printf("%d ", mat[j][i]);
        }
        printf("\n");
    }
}

int main() {
    int mat[10][10], r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    transpose(mat, r, c);

    return 0;
}
