#include <stdio.h>

int main() {
    int choice, binary = 0, decimal = 0, base = 1, rem;
    printf("Enter 1 to convert Binary to Decimal\n");
    printf("Enter 2 to convert Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%d", &binary);
        while (binary > 0) {
            rem = binary % 10;
            decimal += rem * base;
            binary /= 10;
            base *= 2;
        }
        printf("Decimal equivalent: %d\n", decimal);
    } else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        while (decimal > 0) {
            rem = decimal % 2;
            binary += rem * base;
            decimal /= 2;
            base *= 10;
        }
        printf("Binary equivalent: %d\n", binary);
    } else {
        printf("Invalid choice!\n");
    }
    return 0;
}