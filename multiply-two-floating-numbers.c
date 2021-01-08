#include <stdio.h>

int main()
{
    float num1, num2;
    double result;

    printf("Enter two floating point numbers: ");
    scanf("%f %f", &num1, &num2);

    result = num1 * num2;
    printf("Product is: %.4lf", result);

    return 0;
}
