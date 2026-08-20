#include <stdio.h>

int main()
{
    int n, digit;
    int smallest = 9;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;

        if (digit < smallest)
        {
            smallest = digit;
        }

        n = n / 10;
    }

    printf("Smallest digit = %d", smallest);

    return 0;
}