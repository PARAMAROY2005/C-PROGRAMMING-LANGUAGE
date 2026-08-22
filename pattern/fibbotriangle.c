#include <stdio.h>

int main()
{
    int i, j, n;
    int a = 0, b = 1, c;

    printf("Enter number of lines: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", a);

            c = a + b;
            a = b;
            b = c;
        }

        printf("\n");
    }

    return 0;
}