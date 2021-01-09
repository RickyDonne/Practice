#include <stdio.h>

int checkprimenumber(int num);

int main()
{
    int low, high, i, flag;

    printf("Enter two positive number with the smaller first and larger second: ");
    scanf("%d %d", &low, &high);

    for (i = low; i < high; ++i)
    {
        flag = checkprimenumber(i);

        if (flag == 0)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}

int checkprimenumber(int num)
{
    int i, flag = 0;

    for (i = 2; i <= num/2; ++i)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}
