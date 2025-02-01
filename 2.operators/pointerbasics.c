#include <stdio.h>
int main () {
    int a = 10, b = 5;
    int *ptr = &a;
    printf("Value of a=%d\n",a);
    printf("address of a %p\n", (void*)&a);
    printf("value of *ptr%p\n", (void*)ptr);
    printf("Value of the address pointer contains %d\n", *ptr);
    
}