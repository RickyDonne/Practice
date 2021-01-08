#include <stdio.h>

int main()
{
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    while (t1 < n)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}
