#include <stdio.h>

int factorial(int number);
int combination(int n, int k);

int main() {
    int lines;
    int i, j;

    printf("Number of Pascal Triangle lines: ");
    scanf("%d", &lines);

    for (i = 0; i <= lines; i++) {
        for (j = 0; j < lines - i; j++)
            printf(" ");
        for (j = 0; j <= i; j++)
            printf("%d ", combination(i, j));

        printf("\n");
    }
}

int combination(int n, int k) {
    int comb;

    comb = (factorial(n)) / (factorial(k) * factorial(n - k));

    return comb;
}

int factorial(int number) {
    int factorial = 1;
    int i;

    for (i = 1; i <= number; i++)
        factorial = factorial * i;

    return factorial;
}
