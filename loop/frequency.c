#include <stdio.h>

int main()
{
    int n, digit, search, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter digit to search: ");
    scanf("%d", &search);

    while (n > 0)
    {
        digit = n % 10;

        if (digit == search)
        {
            count++;
        }

        n = n / 10;
    }

    printf("Digit %d appears %d times", search, count);

    return 0;
}