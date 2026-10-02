#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j = 0;

    scanf("%[^\n]", str);

    while (str[i] != '\0') {
        if (str[i] != ' ')
            str[j++] = str[i];
        i++;
    }

    str[j] = '\0';

    printf("%s", str);

    return 0;
}