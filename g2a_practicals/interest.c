#include <stdio.h>
#include <math.h>

int main(){
    float time, amount, rate, simple_interest, compound_interest;
    printf("Enter Principle amount: ");
    scanf("%f", &amount);
    printf("Enter time in years: ");
    scanf("%f", &time);
    printf("Enter rate: ");
    scanf("%f", &rate);
    simple_interest = (time*rate*amount/100);
    compound_interest = amount*(pow((1+rate/100),time)) - amount;
    printf("Simple Interest: %.2f\n Compound Interest: %.2f", simple_interest, compound_interest);

}