#include <stdio.h>

int main() {
    int a[50], size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array \n");
    for (int i = 0; i < size; i++){
        scanf("%d", &a[i]);
    }
    printf("The elements before sorting are: \n");
    for (int i = 0; i < size; i++){
        printf("%d ", a[i]);
    }
    // Insertion sort algorithm
    for (int i = 1; i < size; i++) {
        int current = a[i];
        int j = i;
        while (j > 0 && a[j-1] > current) {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = current;
    }
    printf("\nThe elements after sorting are: \n");
    for (int i = 0; i < size; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
