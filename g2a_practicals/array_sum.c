#include <stdio.h>

int main() {
    int a[100], size, i, sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < size; i++) {
        sum += a[i];
    }
    printf("Sum of array elements: %d\n", sum);
    return 0;
}