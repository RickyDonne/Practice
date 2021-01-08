#include <stdio.h>

int main()
{
    int n, i, flag = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    for (i = 2; i < n/2; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (n == 1)
        printf("Number is 1");
    else
    {
        if (flag == 0)
            printf("Is prime!");
        else
            printf("Not prime!");
    }

    return 0;
}
