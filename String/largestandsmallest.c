#include <stdio.h>

int main()
{
    char str[200], word[100], largest[100], smallest[100];
    int i = 0, j = 0, max = 0, min = 100;

    scanf("%[^\n]", str);

    while (1)
    {
        if (str[i] != ' ' && str[i] != '\0')
            word[j++] = str[i];

        else
        {
            word[j] = '\0';

            if (j > max)
            {
                max = j;

                for (j = 0; word[j] != '\0'; j++)
                    largest[j] = word[j];

                largest[j] = '\0';
            }

            if (j < min)
            {
                min = j;

                for (j = 0; word[j] != '\0'; j++)
                    smallest[j] = word[j];

                smallest[j] = '\0';
            }

            j = 0;
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("Largest = %s\n", largest);
    printf("Smallest = %s", smallest);

    return 0;
}