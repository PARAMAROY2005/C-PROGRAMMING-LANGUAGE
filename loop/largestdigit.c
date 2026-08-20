#include <stdio.h>

int main()
{
    int n, digit;
    int largest = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;

        if (digit > largest)
        {
            largest = digit;
        }

        n = n / 10;
    }

    printf("Largest digit = %d", largest);

    return 0;
}