#include <stdio.h>

int main () {

    int a,b, add, sub, mul, rem;
    float div;
    printf("Enter two numbers");
    scanf("%d,%d", &a, &b);

    add = a+b;
    sub = a-b;
    mul = a*b;

    if (b !=0){
        rem = a % b;
        div = (float)a / b;
    } 

    //results
    printf("..........results............\n");
    printf("add=%d\n", add);
    printf("sub=%d\n", sub);
    printf("mul=%d\n", mul);
    if (b != 0){
        printf("div=%.5f\n", div);
        printf("rem=%d\n", rem);
    } else {
        printf("division by zero is not possible");
    }
    

}

/* Mistakes made
Used %.2f as 2.%f
took float for modulus operation
input method is still "%d,%d" numbers entered as 34 65 (with a sapace will result in second number be taken as 0)
right way is "%d %d" (space accepted in input)
*/