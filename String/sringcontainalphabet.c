#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    scanf("%s", str);

    while (str[i] != '\0')
    {
        if (!((str[i] >= 'A' && str[i] <= 'Z') ||
              (str[i] >= 'a' && str[i] <= 'z')))
        {
            printf("No");
            return 0;
        }

        i++;
    }

    printf("Yes");

    return 0;
}
