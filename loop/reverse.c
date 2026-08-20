#include <stdio.h>

int main()
{
    int n, digit;
    int rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    printf("Reverse Number = %d", rev);

    return 0;
}