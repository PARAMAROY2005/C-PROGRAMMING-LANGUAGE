#include <stdio.h>
int main()
{
    char str[100];
    int n, i = 0;
    scanf("%s", str);
    for (n = 0; str[n] != '\0'; n++);
    for (i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            printf("Not Palindrome");
            return 0;
        }
    }
    printf("Palindrome");
    return 0;
}