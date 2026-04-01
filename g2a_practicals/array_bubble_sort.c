#include <stdio.h>

int main() {
    int a[50], size, i, j, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: \n");
    for (i=0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    printf("Array before sorting \n");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    for (i=0; i < size; i++){
        for (j= 0; j < size -1 -i; j++){
            if (a[j]> a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("\nArray after sorting \n");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
        return 0;
}