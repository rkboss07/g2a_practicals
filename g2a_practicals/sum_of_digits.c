#include <stdio.h>

int main() {
    int n,sum_of_digits=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) {
        sum_of_digits += n % 10; 
        n /= 10; 
    }
    printf("Sum of digits: %d\n", sum_of_digits);
    return 0;
}