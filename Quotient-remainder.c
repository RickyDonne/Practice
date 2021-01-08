#include <stdio.h>

int main()
{
    int dividend, divisor, quotient, remainder;

    printf("Enter the number you want to divide: ");
    scanf("%d", &dividend);

    printf("Enter the number by which you want to divide: ");
    scanf("%d", &divisor);

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("Quotient: %d\nRemainder: %d\n", quotient, remainder);
    return 0;
}
