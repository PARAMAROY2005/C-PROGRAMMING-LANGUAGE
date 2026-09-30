#include <stdio.h>

int main() {
    char str[100];
    int i, sum = 0;

    printf("Enter string: ");
    scanf("%s", str);

    // Check each character
    for(i = 0; str[i] != '\0'; i++) {

        // If character is a number
        if(str[i] >= '0' && str[i] <= '9') {
            sum = sum + (str[i] - '0');
        }
    }

    // Print the sum
    printf("Sum of numbers = %d", sum);

    return 0;
}