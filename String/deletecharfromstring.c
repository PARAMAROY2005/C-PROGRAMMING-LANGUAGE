#include <stdio.h>

int main()
{
    char str[100], ch;
    int i = 0, j;

    scanf("%s %c", str, &ch);

    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            for (j = i; str[j] != '\0'; j++)
                str[j] = str[j + 1];
        }
        else
            i++;
    }

    printf("%s", str);

    return 0;
}