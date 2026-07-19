
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter 3 integers");
    scanf("%d %d %d", &a, &b, &c);
    if (a < b && a < c)
    {
        printf("Smallest is %d", a);
    }

else if (b < a && b < c)
{
    printf("Smallest is %d", b);
}
else
{
    printf("Smallest is %d", c);
}
}