#include <stdio.h>

int main() {
    char str[100], ch;
    int i = 0;

    scanf("%s %c", str, &ch);

    while (str[i] != '\0') {
        if (str[i] == ch) {
            printf("First occurrence = %d", i);
            return 0;
        }
        i++;
    }

    printf("Not Found");

    return 0;
}