#include <stdio.h>

int main() {
    int n, so=0, se =0 ;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            se += i;
        } else {
            so += i;
        }
    }
    printf("Sum of odd numbers from 1 to %d: %d\n", n, so);
    printf("Sum of even numbers from 1 to %d: %d\n", n, se);
    return 0;
}