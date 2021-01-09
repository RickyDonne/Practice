#include <stdio.h>
#include <stdlib.h>
long long convert (int n);
int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    printf("Binary: %lld", convert(n));
    return 0;
}

long long convert(int n)
{
    long long binary = 0;
    int remainder, i = 1, step = 1;

    while (n != 0)
    {
        remainder = n % 2;
        n /= 2;
        binary += remainder * i;
        i *= 10;
    }
    return binary;
}
