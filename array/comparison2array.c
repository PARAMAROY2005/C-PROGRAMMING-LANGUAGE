/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i,same=1;
    printf("enter the number of element :");
    scanf("%d",&n);
    
    int a[n];
    printf("enter the element of 1st array:");
    for (i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    int b[n];
    printf("enter the element of 2nd array:");
    for (i=0;i<n;i++){
    scanf("%d",&b[i]);
    }
    
    for (i=0;i<n;i++){
      if (a[i]!=b[i]){
        same=0;
        break;
      }
      }
    if (same==1){
      printf("both are same.");
    }
    else{
      printf("not same");
    }


    return 0;
}