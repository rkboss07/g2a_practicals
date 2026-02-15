#include <stdio.h>

int main() {
    int percentage;
    printf("Enter the percentage: ");
    scanf("%d", &percentage);
    if (percentage >= 90 && percentage <= 100) {
        printf("Grade: A\n");
    } else if (percentage < 90 && percentage >= 80) {
        printf("Grade: B\n");
    } else if (percentage < 80 && percentage >= 60) {
        printf("Grade: C\n");
    } else if (percentage < 60 && percentage >= 0) {
        printf("Grade: D\n");
    } else {
        printf("Invalid percentage. Please enter a value between 0 and 100.\n");
    }
}