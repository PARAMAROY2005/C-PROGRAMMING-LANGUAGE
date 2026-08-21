#include <stdio.h>

int main()
{
    int n, i, j, count;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Frequency of each element:\n");

    for(i = 0; i < n; i++)
    {
        count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        // Check if this element was already counted
        int already = 0;

        for(j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                already = 1;
                break;
            }
        }

        if(already == 0)
        {
            printf("%d occurs %d times\n", arr[i], count);
        }
    }

    return 0;
}