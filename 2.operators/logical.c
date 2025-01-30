#include <stdio.h>
int main () {
    int a = 5, b = 10, c = 5;

    printf("AND (a == c) && (a < b)%d\n", (a == c) && (a < b));
    printf("OR (a == c) || (a > b)%d\n", (a == c) && (a > b));
    printf("%d\n", !(a == b));
}
