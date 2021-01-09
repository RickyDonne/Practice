#include <math.h>
#include <stdio.h>

int checkArmstrongNumber (int n);

int main()
{
    int n;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    int flag = checkArmstrongNumber(n);

    if (flag == 0)
        printf("Armstrong Number!");
    else
        printf("Not Armstrong Number.");
}

int checkArmstrongNumber (int n)
{
    int orgn = n, count = 0, flag = 0, remainder, result = 0;

    while (n != 0)
    {
        n /= 10;
        ++count;
    }

    n = orgn;

    while (n != 0)
    {
        remainder = n % 10;
        result += pow(remainder, count);
        n /= 10;
    }

    if (orgn != (int)result)
        flag = 1;

    return flag;
}
