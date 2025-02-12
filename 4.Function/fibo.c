#include <stdio.h>
void fibo (int n, int a, int b) {
    if (n<=0){
        return;
    }
    printf("%d\n", a);
    fibo(n-1, b, a+b);
    }

int main() {
    int n;
    printf("Enter for n ");
    scanf("%d", &n);

    printf("first %d Fibonacci numbers:\n", n);
    fibo(n, 0, 1);
    
    printf("\n");
    return 0;
}

