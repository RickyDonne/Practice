#include <stdio.h>

int main()
{
    char s[] = "ABCD efgh ijkl 1234";
    int i;

    for (i = 0; s[i] != '\0'; ++i);
    printf("length: %d\n", i);
    return 0;
}
