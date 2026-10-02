#include <stdio.h>

int main() {
    char str[100], ch;
    int i = 0, last = -1;

    scanf("%s %c", str, &ch);

    while (str[i] != '\0') {
        if (str[i] == ch)
            last = i;
        i++;
    }

    if (last == -1)
        printf("Not Found");
    else
        printf("Last occurrence = %d", last);

    return 0;
}