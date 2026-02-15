#include <stdio.h>

int main(){
    float area, radius, pi = 3.14, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = pi*radius*radius;
    circumference = 2*pi*radius;
    printf("Area of the circle: %.2f \n", area);
    printf("Circumference of the circle: %.2f \n", circumference);   
}