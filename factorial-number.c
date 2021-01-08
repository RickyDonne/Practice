#include <stdio.h>

int main()
{
    int n;
    long int factorial = 1;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);
    }
    while (n < 0);

    for (int i = 1; i <= n; ++i)
    {
        factorial *= i;
    }
    printf("%d! = %ld", n, factorial);
    return 0;
}
