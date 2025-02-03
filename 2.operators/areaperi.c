#include<stdio.h>
int main () {
    int var;
    float radius, length, breadth, area, perimeter, circumfurance;
    printf("Which Area-Perimeter Do you want to calculate\n");
    printf("1. Rectangle\n2. Circle\n(Enter 1 or 2)");
    scanf("%d", &var);
    switch (var) {
        case 1:
        printf("Enter length of rectangle\n");
        scanf("%f", &length);
        printf("Enter Breadth of rectangle\n");
        scanf("%f", &breadth);
        perimeter = 2*(length + breadth);
        area = length*breadth;
        printf("The area is %f and the perimeter is %f\n", area,perimeter);
        break;

        case 2:
        printf("Radius of the circle\n");
        scanf("%f", &radius);
        circumfurance = 2*3.14*radius;
        area = 3.14*radius*radius;
        printf("The area is %f and the circumfurance is %f\n", area,circumfurance);
        break;

    default:
    printf("Wrong Choice\n");

    }
    
}