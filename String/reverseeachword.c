#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, start = 0, j;

    scanf("%[^\n]", str);

    while (1)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            for (j = start; j < (start + i) / 2; j++)
            {
                str[j] ^= str[start + i - j - 1];
                str[start + i - j - 1] ^= str[j];
                str[j] ^= str[start + i - j - 1];
            }

            start = i + 1;
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("%s", str);

    return 0;
}