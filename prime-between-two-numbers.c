#include <stdio.h>

int main()
{
    int num1, num2, flag = 0, i;

    printf("Enter the starting number: ");
    scanf("%d", &num1);

    printf("Enter the last number: ");
    scanf("%d", &num2);

    printf("Prime numbers between %d and %d are: ", num1, num2);
    while (num1 < num2)
    {
        flag = 0;

        for (i = 2; i < num1/2; ++i)
        {
            if (num1 % i == 0)
            {
                flag = 1;
                break;
            }

        }

        if (flag == 0)
            printf("%d, ", num1);

        ++num1;
    }
    return 0;
}
