#include <stdio.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        printf("Character\n");
    else
        printf("Not Character\n");
    return 0;
}
