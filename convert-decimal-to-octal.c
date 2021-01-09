#include <stdio.h>
#include <math.h>

int convert (int decimal);

int main()
{
    int decimal;
    printf("Enter a number: ");
    scanf("%d", &decimal);

    printf("Octal: %d", convert(decimal));
    return 0;
}

int convert (int decimal)
{
    int octal = 0, i = 1;

    while (decimal != 0)
    {
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }
    return octal;
}
