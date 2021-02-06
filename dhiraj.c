#include<stdio.h>
void main()
{
    printf("Enter a alphabet to check its a vowel or consonant:\n");
    char c;
    scanf("%c",&c);
    switch(c)
    {
    case'a':
    case'e':
    case'i':
    case'o':
    case'u':
    case'A':
    case'E':
    case'I':
    case'O':
    case'U':
    printf("I is a vowel");
    break;
    default:
    printf("It is a consonant");
}
}
