#include <stdio.h>

int main() {
    int a[50], size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array \n");
    for (int i = 0; i < size; i++){
        scanf("%d", &a[i]);
    }
    int to_search, pos[50], count=0;
    printf("Enter the element to search: ");
    scanf("%d", &to_search);

    for (int i = 0; i < size; i++) {
        if(a[i] == to_search){
            pos[count] == i;
            count++;
        }
    }
    if (count == 0) {
        printf("Element was not found inside the array");
    }
    else {
        printf("Element was found %d times in the array on locations: \n", count);
        for (int i = 0; i < count; i++) {
            printf("%d", pos[i]);
        }
    }
    return 0;
}