#include <stdio.h>
#include <math.h>

int convert (long long n);

int main()
{
    long long n;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    printf("Decimal: %d", convert(n));
    return 0;
}

int convert (long long n)
{
    int decimal = 0, i = 0, remainder;
    while (n != 0)
    {
        remainder = n % 10;
        n /= 10;
        decimal += remainder * pow(2, i);
        ++i;
    }
    return decimal;
}
