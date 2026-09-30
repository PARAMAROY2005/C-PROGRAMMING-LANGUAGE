#include <stdio.h>

int main() {
    char str[100];
    int i, j = 0;

    printf("Enter string: ");
    scanf("%s", str);

    // Find the last position
    while(str[j] != '\0') {
        j++;
    }
    j--;

    // Compare characters from both ends
    for(i = 0; i < j; i++, j--) {
        if(str[i] != str[j]) {
            printf("String is not Palindrome");
            return 0;
        }
    }

    printf("String is Palindrome");

    return 0;
}