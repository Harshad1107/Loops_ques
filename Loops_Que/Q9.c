#include <stdio.h>
int main()
{
    char c;
    printf("Enter c:");
    scanf("%c",&c);
    switch (c)
    {
        case 'a':
        case 'e':
        case 'i' :
        case 'o':
        case 'u':
            printf(" Vowel character");
            break;
        default :
            printf("Not a Vowel character");break;
    }
}
