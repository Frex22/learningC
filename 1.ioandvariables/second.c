#include <stdio.h>
int main() {
    int age;
    float salary;
    char grade;

    printf("Enter age:");
    scanf("%d", &age);

    printf("Enter Salary: ");
    scanf("%f", &salary);

    printf("Enter Grade: ");
    scanf(" %c", &grade);

    printf("\nYou entered:\n");
    printf("Age: %d\n", age);
    printf("salary: %2.f\n", salary);
    printf("Grade: %c\n", grade);

return 0;
}

