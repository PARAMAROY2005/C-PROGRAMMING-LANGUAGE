#include<stdio.h>

int main(){
    char str[100];
    int i, j, count;

    printf("Enter string: ");
    scanf("%s", str);

    for(i=0; str[i]!='\0'; i++){
        count=0;

        for(j=0; str[j]!='\0'; j++){
            if(str[i]==str[j])
                count++;
        }

        printf("%c = %d\n", str[i], count);
    }

    return 0;
}