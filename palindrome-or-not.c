#include <stdio.h>

int main()
{
    int n, originaln;
    printf("Enter any number: ");
    scanf("%d", &n);
    originaln = n;

    int reversedn = 0, remainder;
    while (n != 0)
    {
        remainder = n % 10;
        reversedn = reversedn * 10 + remainder;
        n /= 10;
    }

    if (originaln == reversedn)
        printf("Palindrome!");
    else
        printf("Not palindrome!");

    return 0;
}
