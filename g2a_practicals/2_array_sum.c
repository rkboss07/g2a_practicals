#include <stdio.h>

int main() {
    int a1[50], a2[50], a3[5], size, i;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);
    printf("Enter elements for first array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &a1[i]);
    }
    printf("Enter elements for second array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &a2[i]);
    }
    for (i = 0; i < size; i++) {
        a3[i] = a1[i] + a2[i];
    }
    printf("Sum of corresponding elements in third array:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", a3[i]);
    }
    printf("\n");
}