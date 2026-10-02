#include <stdio.h>

int main()
{
    char str[100], sub[100];
    int i, j;

    scanf("%s %s", str, sub);

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; sub[j] != '\0'; j++)
        {
            if (str[i + j] != sub[j])
                break;
        }

        if (sub[j] == '\0')
        {
            printf("Found");
            return 0;
        }
    }

    printf("Not Found");

    return 0;
}