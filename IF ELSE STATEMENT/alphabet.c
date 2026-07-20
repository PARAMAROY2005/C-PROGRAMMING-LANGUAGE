#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
    {
        printf("The character is an alphabet");
    }
    else
    {
        printf("The character is not an alphabet");
    }
}