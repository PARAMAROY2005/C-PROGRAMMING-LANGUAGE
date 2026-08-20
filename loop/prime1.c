#include <stdio.h>

int main()
{
    int start, end, i, j, isPrime;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    for (i = start; i <= end; i++)
    {
        isPrime = 1; // Assume the number is prime

        if (i <= 1)
        {
            isPrime = 0; // 0, 1 and negative numbers are not prime
        }
        else
        {
            for (j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    isPrime = 0; // Divisor found
                    break;
                }
            }
        }

        if (isPrime == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}