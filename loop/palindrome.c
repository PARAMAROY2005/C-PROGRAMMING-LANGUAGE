#include <stdio.h>

int main()
{
    int n, original, digit;
    int rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n > 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    if (rev == original)
        printf("%d is a Palindrome Number.", original);
    else
        printf("%d is Not a Palindrome Number.", original);

    return 0;
}