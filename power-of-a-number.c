#include <stdio.h>

int main()
{
    int n, e;

    printf("Enter base: ");
    scanf("%d", &n);
    printf("Enter exponent: ");
    scanf("%d", &e);

    long long result = 1;
    while ( e != 0)
    {
        result *= n;
        --e;
    }
    printf("Result: %lld", result);
    return 0;
}
