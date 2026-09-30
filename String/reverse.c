#include<stdio.h>

void main(){
    char str[100];
    int i, j;

    printf("Enter string: ");
    scanf("%s", str);

    for(i=0; str[i]!='\0'; i++){
    }

    j = i - 1;

    for(i=0; i<j; i++, j--){
        str[i] = str[i] + str[j];
        str[j] = str[i] - str[j];
        str[i] = str[i] - str[j];
    }

    printf("Reversed string: %s", str);
}