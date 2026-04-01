#include <stdio.h>
#include <math.h>

int main() {
    int i;
    
    printf("Armstrong numbers between 1 and 100 are:\n");
    for (i = 1; i <= 100; i++) {
        int sum = 0, temp = i, digits = 0;

        while (temp > 0) {
            temp /= 10;
            digits++;
        }
        temp = i;
        
        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }
        
        if (sum == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}