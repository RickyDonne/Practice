#include <stdio.h>

int main()
{
    char action;
    printf("Enter operator: ");
    scanf("%c", &action);

    double num1, num2;
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Requested action: ");

    switch(action)
    {
    case '+':
        printf("%.2lf + %.2lf = %.2lf", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.2lf - %.2lf = %.2lf", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%.2lf * %.2lf = %.2lf", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%.2lf/ %.2lf = %.2lf", num1, num2, num1 / num2);
        break;
    default:
        printf("Syntax Error !");
    }
    return 0;
}
