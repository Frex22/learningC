#include <stdio.h>

int main() {
    int a, b;
    int sum, difference, multiplication;
    float division;
    printf("Enter 2 nos: ");
    scanf ("%d%d", &a, &b);

    sum = a+b;
    difference = a-b;
    multiplication = a*b;

    if (b !=0) {
        division = (float) a/b;
    }

    printf("The results:\n");
    printf("sum:%d\n", sum);
    printf("difference:%d\n", difference);
    printf("multiplication:%d\n", multiplication);
    printf("division:%.3f\n", division);

    return 0;

}
