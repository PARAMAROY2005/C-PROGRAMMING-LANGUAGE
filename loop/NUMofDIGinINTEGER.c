#include <stdio.h>

void main()
{
    int num, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0)
    {
        num /= 10; // Remove the last digit
        count++;   // Increment the count of digits
    }
    printf("Number of digits = %d", count);
}