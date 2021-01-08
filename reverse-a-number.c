#include <stdio.h>

int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    int remainder, reverse = 0;
    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number: %d", reverse);
    return 0;
}
