#include <stdio.h>

void main()
{
    int a, b, i, sum = 0;

    printf("Enter starting and ending numbers: ");
    scanf("%d%d", &a, &b);

    for(i = a; i <= b; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);
} 