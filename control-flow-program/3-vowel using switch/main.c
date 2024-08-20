#include <stdio.h>
int main()
{
    char ch;
    printf("enter an alphabet:");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
        printf("it'a vowel");
        break;
     case 'e':
        printf("it'a vowel");
        break;
    case 'i':
        printf("it'a vowel");
        break;
    case 'o':
        printf("it'a vowel");
        break;
    case 'u':
        printf("it'a vowel");
        break;
    default :
        printf("consonant");
}
return 0;
}