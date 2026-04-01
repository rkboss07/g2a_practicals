#include <stdio.h>

int main() {
    int size, a[100];
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    int to_search, at_index = -1;
    printf("Enter the element to search: ");
    scanf("%d", &to_search);
    int mid = size / 2;
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        if (a[mid] == to_search) {
            at_index = mid;
            break;
        } else if (a[mid] < to_search) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
        
        mid = low + (high - low) / 2;
    }
    
    if (at_index == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n", at_index);
    }
    return 0;
}