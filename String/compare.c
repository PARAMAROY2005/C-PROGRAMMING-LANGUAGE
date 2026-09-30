#include<stdio.h>
void main(){
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    
    for( int i=0; str1[i]!='\0'&& str2[i]!='\0'; i++){
        if(str1[i] != str2[i]){
            printf("Strings are not equal");
            return;
        }
    }
    printf("Strings are equal");
}