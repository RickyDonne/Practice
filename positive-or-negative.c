#include <stdio.h>
int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 0)
        printf("You entered 0\n");
    else if (number > 0)
        printf("Postive\n");
    else
        printf("Negative\n");
    return 0;
}
