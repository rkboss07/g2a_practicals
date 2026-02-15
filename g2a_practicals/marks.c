#include <stdio.h>


int main(){
    float sub1, sub2, sub3, sub4, sub5, sum, percentage;
    printf("Enter the marks of the five subjects: ");
    scanf("%f%f%f%f%f", &sub1,&sub2, &sub3, &sub4, &sub5);
    sum = sub1+sub2+sub3+sub4+sub5;
    percentage = (sum/500)*100;
    printf("Sum of marks: %.2f \n", sum);
    printf("Percentage: %.2f \n", percentage);
}   