#include <stdio.h>

int main()
{
    int n;
    printf("Table number: ");
    scanf("%d", &n);

    printf("Multiplication table of %d:\n\n", n);
    for (int i = 1; i <= 10; ++i)
    {
        printf("\t%d X %2d = %2d\n", n, i, n * i);
    }
    return 0;
}
