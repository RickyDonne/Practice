#include <stdio.h>
#include <math.h>

long long convert (int n);
int main()
{
    int n;

    printf("Enter an octal number: ");
    scanf("%d", &n);

    printf("Decimal: %lld", convert(n));
    return 0;
}

long long convert (int n)
{
    int decimal = 0, i = 0;
    while (n != 0)
    {
        decimal += (n % 10) * pow(8, i);
        ++i;
        n /= 10;
    }
    i = 1;
    return decimal;
}
