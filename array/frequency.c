/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i,j,count;
    printf("enter the number of element :");
    scanf("%d",&n);
    
    int a[n];
    printf("enter the element of 1st array:");
    for (i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    
    printf("frequancy of element:");
    for(i=0;i<n;i++){
      count=1;
      for(j=i+1;j<n;j++){
        if(a[i]==a[j]){
          count++;
        }
      }
    }
    int already=0;
    for(j=0;j<i;j++){
      if(a[i]==a[j]){
        already=1;
        break;
      }
    }
    if (already==0){
      printf("%d occurs %d times\n", a[i], count);
    }
    return 0;
}