#include<stdio.h>
int main () {
    int num;
    printf("enter a no. \n");
    scanf("%d", &num);

    if (num > 0 && (num & (num-1)) == 0) {
        printf("%d is a power of 2\n", num);
    } else {
        printf("Its not power of 2\n");
    }

    
}


