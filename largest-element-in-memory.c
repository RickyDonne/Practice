#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    float *data;

    printf("Enter the number of elements: ");
    scanf("%d", &num);

    data = (float*)calloc(num, sizeof(float));
    if (data == NULL)
    {
        printf("Error!\n");
        exit(0);
    }

    for (int i = 0; i < num; ++i)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%f", data + i);
    }

    for (int i = 1; i < num; ++i)
    {
        if (*data < *(data + i))
        {
            *data = *(data + i);
        }
    }
    printf("Largest number = %.2f", *data);
    return 0;
}
