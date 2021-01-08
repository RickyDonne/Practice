#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if (isalpha(c) == 0)
    {
        printf("IDIOT! Enter a character!\n");
        exit(0);
    }

    switch(c)
    {
        case 'A':
            printf("Vowel");
            break;

        case 'E':
            printf("Vowel");
            break;

        case 'I':
            printf("Vowel");
            break;

        case 'O':
            printf("Vowel");
            break;

        case 'U':
            printf("Vowel");
            break;

        case 'a':
            printf("Vowel");
            break;

        case 'e':
            printf("Vowel");
            break;

        case 'i':
            printf("Vowel");
            break;

        case 'o':
            printf("Vowel");
            break;

        case 'u':
            printf("Vowel");
            break;

        default:
            printf("Consonant");
    }
    return 0;
}
