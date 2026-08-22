#include <stdio.h>

int main()
{
    int n, original, temp, digit;
    int digits = 0;
    int sum = 0;
    int power, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    // Count the number of digits
    while (temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = n;

    // Calculate sum of digits
    while (temp > 0)
    {
        digit = temp % 10;

        power = 1;
        for (i = 1; i <= digits; i++)
        {
            power = power * digit;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == original)
        printf("%d is an Armstrong Number.", original);
    else
        printf("%d is Not an Armstrong Number.", original);

    return 0;
}