#include <stdio.h>

int main()
{
    char str[100], ch;
    int count[256] = {0};
    int i = 0, max = 0;
    scanf("%s", str);
    while (str[i] != '\0')
    {
        count[(unsigned char)str[i]]++;
        i++;
    }
    for (i = 0; i < 256; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            ch = i;
        }
    }
    printf("%c = %d", ch, max);
    return 0;
}