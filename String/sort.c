#include <stdio.h>

int main()
{
    char str[100];
    int i, j;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] > str[j])
            {
                str[i] ^= str[j];
                str[j] ^= str[i];
                str[i] ^= str[j];
            }
        }
    }

    printf("%s", str);

    return 0;
}