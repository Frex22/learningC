#include <stdio.h>

int main() {

    int choice;
    float temp, convertedTemp;

    //display

    printf("Temperature Converter");
    printf("---------------------");
    printf("1. Celsius to fahrenheit");
    printf("2. F to C\n");
    printf("enter choice");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter tempertaure");
            scanf("%f", &temp);
            convertedTemp = (temp*(9.0/5.0)) + 32;
            printf("%.2f Celsius =%.2f Fahrenheit\n", temp, convertedTemp);
            break;
        
        case 2:
            printf("Enter tempertaure");
            scanf("%f", &temp);
            convertedTemp = (temp - 32.0) * 5.0/9.0;
            printf("%.2fFahrenheit  =%.2f Celsius \n", temp, convertedTemp);
            break;
        default:
            printf("Invalid Choice");

    }

    return 0;
}