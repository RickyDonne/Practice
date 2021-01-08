#include <stdio.h>
#include <math.h>

int main()
{
    int n, originaln;

    printf("Enter a number: ");
    scanf("%d", &n);

    originaln = n;

    int remainder, result = 0, count = 0;

    while (n != 0)
    {
        n /= 10;
        ++count;
    }

    n = originaln;

    while (n != 0)
    {
        remainder = n % 10;
        result += pow(remainder, count);
        n /= 10;
    }

    if (result == originaln)
        printf("Armstrong number!");
    else
        printf("Not an armstrong number!");

    return 0;
}
