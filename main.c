#include <stdio.h>

int main()
{   
    double num1;
    double num2;
    char operation[1];
    char operation_select;

    printf("Enter first number: \n");
    scanf("%lf", &num1);
    
    printf("Enter second number: \n");
    scanf("%lf", &num2);

    printf("Enter operation (+, -, *, /): \n");
    scanf("%c", operation_select);

    if (operation_select == "+") {
        double result = num1 + num2;
        printf("result: %lf", result);
    } else if (operation_select == "-") {
        double result = num1 - num2;
        printf("result: %lf", result);
    } else {
        printf("Something went wrong :( \n");
    }
    return 0;
}