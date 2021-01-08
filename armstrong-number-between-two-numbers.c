#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2;
    printf("Enter the starting number: ");
    scanf("%d", &num1);

    printf("Enter the last number: ");
    scanf("%d", &num2);

    int number, originalNumber, rem, count = 0, result = 0;

    for (num1; num1 < num2; ++num1)
    {
    number = num1;
    originalNumber = number;

    while (originalNumber != 0)
    {
         originalNumber /= 10;
         ++count;
    }
    originalNumber = number;

      while (originalNumber != 0) {
         rem = originalNumber % 10;
         result += pow(rem, count);
         originalNumber /= 10;
      }

      if ((int)result == number) {
         printf("%d ", number);
      }
      count = 0;
      result = 0;
    }
    return 0;
}
