#include<stdio.h>
int main() {
    int a;
    printf("Enter a number ");
    scanf("%d", &a);
    if (a > 0) {
        printf("%d is +ve\n", a);
    }
    else {
        printf("%d is -ve\n", a);
    }
    if (a%2 ==0){
        printf("%d is even\n", a);
    }
    else {
        printf("%d is odd\n", a);
    }
    }
