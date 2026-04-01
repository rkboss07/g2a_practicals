#include <stdio.h>

int main() {
    int a[100], size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter %d integers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    
 // Selection sort algorithm
    for (int i = 0; i < size - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (a[j] < a[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            int temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
        }
    }
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}