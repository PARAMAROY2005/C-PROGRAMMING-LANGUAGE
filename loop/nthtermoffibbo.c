#include <stdio.h>

int main()
{
    int n, i;
    int a = 0, b = 1, c;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
     if (n == 1)
        printf("%d ", a);

    else if (n == 2)
        printf("%d ", b);
   
    
    for (i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
     printf("%d ", c);


    return 0;
}