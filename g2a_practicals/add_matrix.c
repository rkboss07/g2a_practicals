#include <stdio.h>

int main() {
    int matrixA[50][50], matrixB[50][50], matrixC[50][50], order;
    printf("Enter the order of the square matrix: ");
    scanf("%d", &order);
    printf("Enter the elments of Matrix A\n");
    for (int i = 0; i < order; i++){
        for (int j = 0; j < order; j++){
            scanf("%d", &matrixA[i][j]);
        }
    }
    printf("Enter the elments of Matrix B\n");
    for (int i = 0; i < order; i++){
        for (int j = 0; j < order; j++){
            scanf("%d", &matrixB[i][j]);
        }
    }
    
    for (int i = 0; i < order; i++){
        for (int j = 0; j < order; j++){
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    
    }

    printf("The sum of the matrix A and B: \n");
    for (int i = 0; i < order; i++){
        printf("|");
        for (int j = 0; j < order; j++){
            printf(" %d |", matrixC[i][j]);
        }
        printf("\n");    
    }

}