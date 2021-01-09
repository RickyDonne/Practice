#include <stdio.h>

int main()
{
    int a;
    long b;
    long long c;
    double e;
    long double f;

    printf("Size of a = %zu bytes \n  ", sizeof(a));
    printf("Size of b = %zu bytes \n  ", sizeof(b));
    printf("Size of c = %zu bytes \n  ", sizeof(c));
    printf("Size of e = %zu bytes \n  ", sizeof(e));
    printf("Size of f = %zu bytes \n  ", sizeof(f));

    return 0;
}
