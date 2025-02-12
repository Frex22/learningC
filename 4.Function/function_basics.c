//return_type function_name(parameter_list){
// function body
// }
#include <stdio.h>
int add (int a, int b);

int main () {
    int a,b;
    printf("Enter for a and b\n");
    scanf("%d %d", &a, &b);
    int result = add(a,b);
    printf("Sum: %d\n", result);
    return 0;
}

int add(int a, int b) {
    return a + b;
}
