#include <stdio.h>

int main() {
    char str[100];
    int i, count = 0, j = 0;

    printf("Enter string: ");
    scanf("%s", str);

    // Count vowels in the string
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
           str[i]=='o' || str[i]=='u' ||
           str[i]=='A' || str[i]=='E' || str[i]=='I' ||
           str[i]=='O' || str[i]=='U') {
            count++;
        }
    }

    printf("Number of vowels = %d\n", count);

    // Remove vowels from the string
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' &&
           str[i]!='o' && str[i]!='u' &&
           str[i]!='A' && str[i]!='E' && str[i]!='I' &&
           str[i]!='O' && str[i]!='U') {
            str[j++] = str[i];
        }
    }

    // Add null character at the end
    str[j] = '\0';

    printf("String after removing vowels = %s", str);

    return 0;
}