
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, digit = 0, space = 0, special = 0;

    scanf("%[^\n]", str);

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9')
            digit++;
        else if (str[i] == ' ')
            space++;
        else if (!((str[i] >= 'A' && str[i] <= 'Z') ||
                   (str[i] >= 'a' && str[i] <= 'z')))
            special++;

        i++;
    }

    printf("Digits = %d\nSpaces = %d\nSpecial = %d",
           digit, space, special);

    return 0;
}