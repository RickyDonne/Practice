#include <stdio.h>

int power(int b, int e);
int main()
{
    int b, e;
    printf("Enter base: ");
    scanf("%d", &b);

    printf("Enter exponent: ");
    scanf("%d", &e);

    printf("%d ^ %d = %d", b, e, power(b, e));
    return 0;
}

int power (int b, int e)
{
    if (e != 0)
        return (b * power(b, e - 1));
    else
        return 1;
}
