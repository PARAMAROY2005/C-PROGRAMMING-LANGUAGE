#include <stdio.h>
int main()
{
char str[100];
int i,n=0;
scanf("%s", str);
for(n=0;str[n] != '\0';n++);
for(i= 0;i<n/2; i++)
{
str[i]=str[i]^str[n-1-i];
str[n-1-i]=str[i]^str[n-1-i];
str[i]=str[i]^str[n-1-i];
}
printf("%s",str);
return 0;
}