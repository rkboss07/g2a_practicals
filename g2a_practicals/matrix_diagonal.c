#include <stdio.h>

int main() {
    int a[100][100], sum = 0, size;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < size; i++) {
        sum += a[i][i];
    }
    printf("The sum of the elements on the main diagonal is: %d\n", sum);
    return 0;
    
}