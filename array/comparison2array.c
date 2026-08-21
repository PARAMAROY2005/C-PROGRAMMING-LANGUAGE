#include <stdio.h>

int main()
{
    int n, i, same = 1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    printf("Enter elements of first array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of second array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(arr1[i] != arr2[i])
        {
            same = 0;
            break;
        }
    }

    if(same == 1)
    {
        printf("Both arrays are same.\n");
    }
    else
    {
        printf("Both arrays are not same.\n");
    }

    return 0;
}