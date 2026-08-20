#include <stdio.h>

int main()
{
    int n, original, digit;
    int sum = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &n);

    original = n;

    while (n > 0)
    {
        digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }

    if (sum == original)
        printf("%d is an Armstrong Number.", original);
    else
        printf("%d is Not an Armstrong Number.", original);

    return 0;
}