#include <stdio.h>

int main() {
    int A[50][50],  B[50][50], res[50][50], order;
    printf("Enter the order of the matrix: ");
    scanf("%d", &order);

    printf("Enter the elements of Matrix A \n");
    for (int i = 0; i < order; i++){
        for (int j = 0; j < order; j++){
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the elements of Matrix B \n");
    for (int i = 0; i < order; i++){
        for (int j = 0; j < order; j++){
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < order; i++){
        
        for (int j = 0; j < order; j++) {
            int sum = 0;
            for(int k = 0; k < order; k++) { 
                sum = sum + A[i][k]*B[k][j];
            }
            res[i][j] = sum;
        
        }
    }

    printf("Result Matrix C \n");
    for (int i = 0; i < order; i++){
        for (int j = 0; j < order; j++){
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

}