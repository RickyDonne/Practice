#include <stdio.h>

int main()
{
    int num1, num2, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nNUM.1: %d\nNUM.2: %d", num1, num2);

    printf("\n\nAfter Swap:\n");
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("NUM.1: %d\nNUM.2: %d", num1, num2);

    return 0;
}
