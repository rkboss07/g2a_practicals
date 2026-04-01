#include <stdio.h>
#include <string.h>

int main() {
    char str1[10], str2[10], str3[10], str4[10];
    printf("Enter 2 strings: ");
    scanf("%s %s", str1, str2);
    strcpy(str3, str1);
    strcat(str3, str2);
    printf("Concatenated string: %s\n", str3);

    for (int i = 0; i < strlen(str3); i++) {
        str4[i] = str3[strlen(str3) - i - 1];

    }
    str4[strlen(str3)] = '\0';
    printf("Reversed string: %s\n", str4);
    return 0;
}