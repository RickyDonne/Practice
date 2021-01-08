#include <stdio.h>

int main()
{
    int intn;
    float floatn;
    double doublen;
    char charn;

    printf("Size of int: %lu bytes\n", sizeof(intn));
    printf("Size of float: %lu bytes\n", sizeof(floatn));
    printf("Size of double: %lu bytes\n", sizeof(doublen));
    printf("Size of char: %lu byte\n", sizeof(charn));

    return 0;
}
